#include "r5900.h"
#include "functab.h"

void JP_F_00246ED0(Ctx *c) { /* func_00246ED0 */
ENTER(0x246ed0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 192)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00246EF4; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(2) + 1468)));
{ u32 t = RW(3); SET64(31, 0x246ef4);  rt_call(c, t); }
L_00246EF4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00246F00(Ctx *c) { /* func_00246F00 */
ENTER(0x246f00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 192)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_00246F20; }
SET64(3, (s32)rd32(c, (RW(2) + 1472)));
{ u32 t = RW(3); SET64(31, 0x246f20);  rt_call(c, t); }
L_00246F20:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00246F30(Ctx *c) { /* func_00246F30 */
ENTER(0x246f30);
SET64(14, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(14) + 192)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00246FD8; }
SET64(3, (s64)(s32)0x7fff0000);
SET64(12, (s32)rd32(c, (RW(14) + 60)));
SET64(13, (s32)rd32(c, (RW(14) + 64)));
SET32(10, RW(0) + 1);
SET64(11, (s32)rd32(c, (RW(14) + 68)));
SET32(9, RW(0) + 1536);
SET32(4, RW(0) + 16);
SET64(3, RD(3) | 0xffff);
SET32(5, RW(0) + 127);
SET32(6, RW(0) + 15);
SET32(7, RW(0) + 1);
SET32(8, RW(0) + 127);
SET64(2, RD(0) | 0xbb80);
wr8(c, (RW(14) + 14), (u8)RW(10));
wr8(c, (RW(14) + 13), (u8)RW(4));
wr32(c, (RW(14) + 24), RW(3));
wr8(c, (RW(14) + 15), (u8)RW(5));
wr16(c, (RW(14) + 152), (u16)RW(6));
wr32(c, (RW(14) + 80), RW(7));
wr32(c, (RW(14) + 84), RW(8));
wr32(c, (RW(14) + 88), RW(9));
wr32(c, (RW(14) + 92), RW(12));
wr32(c, (RW(14) + 96), RW(13));
wr32(c, (RW(14) + 100), RW(11));
wr32(c, (RW(14) + 136), RW(0));
wr16(c, (RW(14) + 2), (u16)RW(10));
wr32(c, (RW(14) + 16), RW(9));
wr32(c, (RW(14) + 140), RW(0));
wr16(c, (RW(14) + 28), (u16)RW(0));
wr16(c, (RW(14) + 36), (u16)RW(0));
wr16(c, (RW(14) + 38), (u16)RW(0));
wr32(c, (RW(14) + 32), RW(0));
wr32(c, (RW(14) + 40), RW(0));
wr32(c, (RW(14) + 44), RW(0));
wr32(c, (RW(14) + 48), RW(0));
wr32(c, (RW(14) + 52), RW(0));
wr32(c, (RW(14) + 20), RW(2));
SET32(2, RW(0) + 1);
L_00246FD8:;
 return;
}

void JP_F_00246FE0(Ctx *c) { /* func_00246FE0 */
ENTER(0x246fe0);
SET64(5, RD(4) + RD(0));
SET32(2, RW(0) + 11);
SET64(6, rd8(c, (RW(5) + 0)));
{ int t = RD(6) != RD(2); SET32(2, RW(0) + 119); if (t) goto L_00247008; }
SET64(4, rd8(c, (RW(5) + 1)));
SET32(3, RW(0) + 119);
{ int t = RD(4) == RD(3); SET32(2, RW(0) + 1); if (t) goto L_00247060; }
SET32(2, RW(0) + 119);
L_00247008:;
if (RD(6) != RD(2)) { SET64(6, rd8(c, (RW(5) + 16))); goto L_00247024; }
SET64(4, rd8(c, (RW(5) + 1)));
SET32(3, RW(0) + 11);
{ int t = RD(4) == RD(3); SET32(2, RW(0) + 1); if (t) goto L_00247060; }
SET64(6, rd8(c, (RW(5) + 16)));
L_00247024:;
SET32(2, RW(0) + 11);
{ int t = RD(6) != RD(2); SET32(2, RW(0) + 119); if (t) goto L_00247044; }
SET64(4, rd8(c, (RW(5) + 17)));
SET32(3, RW(0) + 119);
{ int t = RD(4) == RD(3); SET32(2, RW(0) + 1); if (t) goto L_00247060; }
SET32(2, RW(0) + 119);
L_00247044:;
{ int t = RD(6) != RD(2); SET64(2, RD(0) + RD(0)); if (t) goto L_00247060; }
SET64(4, rd8(c, (RW(5) + 17)));
SET32(3, RW(0) + 11);
{ int t = RD(4) == RD(3); SET32(2, RW(0) + 1); if (t) goto L_00247060; }
SET64(2, RD(0) + RD(0));
L_00247060:;
 return;
}

void JP_F_00247068(Ctx *c) { /* func_00247068 */
ENTER(0x247068);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 180)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0024708C; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(2) + 1480)));
{ u32 t = RW(3); SET64(31, 0x24708c);  rt_call(c, t); }
L_0024708C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00247098(Ctx *c) { /* func_00247098 */
ENTER(0x247098);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(17) + 180)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002470CC; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(2) + 1484)));
{ u32 t = RW(3); SET64(31, 0x2470cc);  rt_call(c, t); }
L_002470CC:;
SET32(2, RW(0) + 96);
wr32(c, (RW(17) + 184), RW(16));
div_s(c, 0, RSW(16), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x2470dc); goto L_002470E0; }
L_002470E0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(3, c->lo.d[0]);
wr32(c, (RW(17) + 188), RW(3));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00247100(Ctx *c) { /* func_00247100 */
ENTER(0x247100);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(2) + 1492)));
{ u32 t = RW(3); SET64(31, 0x247118);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00247128(Ctx *c) { /* func_00247128 */
ENTER(0x247128);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 180)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0024714C; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(2) + 1488)));
{ u32 t = RW(3); SET64(31, 0x24714c);  rt_call(c, t); }
L_0024714C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00247158(Ctx *c) { /* func_00247158 */
ENTER(0x247158);
SET32(29, RW(29) + -48);
SET64(24, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x4d520000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, (s64)(s32)0xff0000);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(8) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(5) + RD(0));
SET64(16, RD(16) | 0x4f46);
SET64(15, rd8(c, (RW(24) + 0)));
SET64(14, rd8(c, (RW(24) + 3)));
SET64(12, rd8(c, (RW(24) + 2)));
SET64(13, rd8(c, (RW(24) + 1)));
SET32(24, RW(24) + 4);
SET64(5, rd8(c, (RW(24) + 3)));
SET32(14, RW(14) << 24);
SET64(3, rd8(c, (RW(24) + 2)));
SET32(13, RW(13) << 8);
SET64(4, rd8(c, (RW(24) + 1)));
SET32(5, RW(5) << 24);
SET64(2, rd8(c, (RW(24) + 0)));
SET32(24, RW(24) + 4);
SET32(4, RW(4) << 8);
SET32(3, RW(3) << 16);
SET64(2, RD(2) | RD(5));
SET64(5, rd8(c, (RW(24) + 2)));
SET64(3, RD(3) | RD(4));
SET64(11, rd8(c, (RW(24) + 3)));
SET64(25, RD(2) | RD(3));
SET64(10, rd8(c, (RW(24) + 1)));
SET32(3, RSW(25) >> 8);
SET32(4, RW(25) >> 24);
SET32(2, RW(25) << 8);
SET64(9, rd8(c, (RW(24) + 0)));
SET32(12, RW(12) << 16);
SET64(3, RD(3) & 0xff00);
SET64(2, RD(2) & RD(17));
SET64(17, RD(0) + RD(0));
SET64(15, RD(15) | RD(14));
SET64(14, RD(0) + RD(0));
SET64(12, RD(12) | RD(13));
SET64(13, RD(0) + RD(0));
SET64(4, RD(4) | RD(3));
SET32(11, RW(11) << 24);
SET32(5, RW(5) << 16);
SET32(10, RW(10) << 8);
SET64(4, RD(4) | RD(2));
SET32(2, RW(25) << 24);
SET64(9, RD(9) | RD(11));
SET64(5, RD(5) | RD(10));
SET64(15, RD(15) | RD(12));
SET64(25, RD(4) | RD(2));
SET64(9, RD(9) | RD(5));
SET32(24, RW(24) + 4);
{ int t = RD(15) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_002474C4; }
SET64(2, (s64)(s32)0x46460000);
SET64(2, RD(2) | 0x4941);
if (RD(9) == RD(2)) { SET32(2, RW(24) + RW(25)); goto L_00247268; }
SET64(2, RD(0) + RD(0)); goto L_002474C4;
L_00247268:;
SET32(11, RW(2) + -4);
SET64(3, RD(24) < RD(11));
{ int t = RD(3) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_002474C4; }
SET64(12, (s64)(s32)0xff0000);
SET32(16, RW(0) + -256);
SET64(9, rd8(c, (RW(24) + 0)));
L_00247288:;
SET64(10, (s64)(s32)0x444e0000);
SET64(8, rd8(c, (RW(24) + 3)));
SET64(10, RD(10) | 0x5353);
SET64(6, rd8(c, (RW(24) + 2)));
SET64(7, rd8(c, (RW(24) + 1)));
SET32(24, RW(24) + 4);
SET64(5, rd8(c, (RW(24) + 3)));
SET32(8, RW(8) << 24);
SET64(3, rd8(c, (RW(24) + 2)));
SET32(6, RW(6) << 16);
SET64(4, rd8(c, (RW(24) + 1)));
SET32(5, RW(5) << 24);
SET64(2, rd8(c, (RW(24) + 0)));
SET32(24, RW(24) + 4);
SET32(4, RW(4) << 8);
SET32(3, RW(3) << 16);
SET64(3, RD(3) | RD(4));
SET64(2, RD(2) | RD(5));
SET64(25, RD(2) | RD(3));
SET32(7, RW(7) << 8);
SET32(3, RSW(25) >> 8);
SET32(4, RW(25) >> 24);
SET32(2, RW(25) << 8);
SET64(3, RD(3) & 0xff00);
SET64(2, RD(2) & RD(12));
SET64(9, RD(9) | RD(8));
SET64(6, RD(6) | RD(7));
SET64(4, RD(4) | RD(3));
SET64(4, RD(4) | RD(2));
SET32(2, RW(25) << 24);
SET64(15, RD(9) | RD(6));
{ int t = RD(15) == RD(10); SET64(25, RD(4) | RD(2)); if (t) goto L_00247438; }
SET64(2, (s64)(s32)0x4d4d0000);
SET64(2, RD(2) | 0x4f43);
{ int t = RD(15) != RD(2); SET32(2, RW(25) + 1); if (t) goto L_002474A8; }
{ int t = RD(13) != RD(0); SET64(2, RD(24) < RD(11)); if (t) goto L_002474B8; }
SET64(2, RSD(25) < (s64)18);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002474C4; }
SET64(4, rd8(c, (RW(24) + 1)));
SET32(6, RW(0) + 16398);
SET64(2, rd8(c, (RW(24) + 0)));
SET32(24, RW(24) + 2);
SET32(4, RW(4) << 8);
SET32(13, RW(0) + 1);
SET64(2, RD(2) | RD(4));
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(3, RD(3) & 0xff00);
SET64(2, RD(2) | RD(3));
wr32(c, (RW(20) + 0), RW(2));
SET64(5, rd8(c, (RW(24) + 3)));
SET64(2, rd8(c, (RW(24) + 2)));
SET64(4, rd8(c, (RW(24) + 1)));
SET32(5, RW(5) << 24);
SET64(3, rd8(c, (RW(24) + 0)));
SET32(24, RW(24) + 4);
SET32(4, RW(4) << 8);
SET32(2, RW(2) << 16);
SET64(2, RD(2) | RD(4));
SET64(3, RD(3) | RD(5));
SET64(3, RD(3) | RD(2));
SET32(5, RSW(3) >> 8);
SET32(4, RW(3) << 8);
SET64(5, RD(5) & 0xff00);
SET32(2, RW(3) >> 24);
SET64(4, RD(4) & RD(12));
SET32(3, RW(3) << 24);
SET64(4, RD(4) | RD(5));
SET64(2, RD(2) | RD(3));
SET64(2, RD(2) | RD(4));
wr32(c, (RW(18) + 0), RW(2));
SET64(4, rd8(c, (RW(24) + 1)));
SET64(2, rd8(c, (RW(24) + 0)));
SET32(24, RW(24) + 2);
SET32(4, RW(4) << 8);
SET64(2, RD(2) | RD(4));
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(3, RD(3) & 0xff00);
SET64(2, RD(2) | RD(3));
wr32(c, (RW(19) + 0), RW(2));
SET64(5, rd8(c, (RW(24) + 0)));
SET64(4, rd8(c, (RW(24) + 1)));
SET32(24, RW(24) + 2);
SET64(3, rd8(c, (RW(24) + 1)));
SET64(2, rd8(c, (RW(24) + 0)));
SET32(24, RW(24) + 8);
SET32(3, RW(3) << 8);
SET32(4, RW(4) << 8);
SET64(2, RD(2) | RD(3));
SET64(5, RD(5) | RD(4));
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(3, RD(3) & RD(16));
SET32(5, RW(5) >> 8);
SET64(2, RD(2) | RD(3));
SET32(6, RW(6) - RW(5));
SET64(2, RD(2) & 0xffff);
SET32(2, RSW(2) >> (RW(6) & 31));
{ int t = RD(14) == RD(0); wr32(c, (RW(21) + 0), RW(2)); if (t) goto L_002474B4; }
SET64(2, RD(17) + RD(0)); goto L_002474C4;
L_00247438:;
{ int t = RD(14) != RD(0); SET64(2, RD(24) < RD(11)); if (t) goto L_002474B8; }
SET64(5, rd8(c, (RW(24) + 3)));
SET32(14, RW(0) + 1);
SET64(2, rd8(c, (RW(24) + 2)));
SET64(4, rd8(c, (RW(24) + 1)));
SET32(5, RW(5) << 24);
SET64(3, rd8(c, (RW(24) + 0)));
SET32(24, RW(24) + 4);
SET32(4, RW(4) << 8);
SET32(2, RW(2) << 16);
SET64(3, RD(3) | RD(5));
SET64(2, RD(2) | RD(4));
SET64(2, RD(3) | RD(2));
SET32(5, RW(2) >> 8);
SET32(4, RW(2) << 8);
SET32(3, RW(2) >> 24);
SET32(2, RW(2) << 24);
SET64(4, RD(4) & RD(12));
SET64(5, RD(5) & 0xff00);
SET64(3, RD(3) | RD(2));
SET64(4, RD(4) | RD(5));
SET64(2, RD(3) | RD(4));
{ int t = RD(13) == RD(0); SET32(17, RW(24) + RW(2)); if (t) goto L_002474B4; }
SET64(2, RD(17) + RD(0)); goto L_002474C4;
L_002474A8:;
SET32(3, RW(0) + -2);
SET64(2, RD(2) & RD(3));
SET32(24, RW(24) + RW(2));
L_002474B4:;
SET64(2, RD(24) < RD(11));
L_002474B8:;
if (RD(2) != RD(0)) { SET64(9, rd8(c, (RW(24) + 0))); { POLL(); goto L_00247288; } }
SET64(2, RD(17) + RD(0));
L_002474C4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002474E8(Ctx *c) { /* func_002474E8 */
ENTER(0x2474e8);
SET64(5, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 4);
SET32(5, RW(5) + 960);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x247508); SET64(16, RD(4) + RD(0)); JP_F_00127180(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(16) + 8);
SET32(5, RW(5) + 968);
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 4); if (t) goto L_00247538; }
SET64(31, 0x247524);  JP_F_00127180(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0024753C; }
SET32(2, RW(0) + 1); goto L_0024753C;
L_00247538:;
SET64(2, RD(0) + RD(0));
L_0024753C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00247550(Ctx *c) { /* func_00247550 */
ENTER(0x247550);
SET32(29, RW(29) + -80);
SET64(2, RSD(5) < (s64)4096);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(10) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(11) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(8) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 64), RD(22));
SET64(22, RD(9) + RD(0));
wr64(c, (RW(29) + 72), RD(31));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET32(8, RW(29) + 12);
{ int t = RD(2) == RD(0); SET32(7, RW(29) + 8); if (t) goto L_002475B8; }
wr16(c, (RW(17) + 0), (u16)RW(0));
SET32(2, RW(0) + -1); goto L_00247638;
L_002475B8:;
SET64(31, 0x2475c0);  JP_F_00247158(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_00247638; }
SET32(3, RW(3) - RW(16));
SET32(4, RW(3) << 16);
{ int t = RSD(4) <= 0; wr16(c, (RW(17) + 0), (u16)RW(3)); if (t) goto L_00247638; }
SET64(3, rd8(c, (RW(29) + 4)));
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET32(8, RW(0) + 1);
SET64(4, rd8(c, (RW(29) + 8)));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(19) + 0), RW(6));
SET64(5, (s32)rd32(c, (RW(29) + 12)));
wr8(c, (RW(18) + 0), (u8)RW(3));
wr8(c, (RW(20) + 0), (u8)RW(4));
SET64(3, (s32)rd32(c, (RW(29) + 80)));
wr32(c, (RW(3) + 0), RW(5));
wr8(c, (RW(21) + 0), (u8)RW(7));
SET64(4, (s8)rd8(c, (RW(20) + 0)));
SET64(3, (s8)rd8(c, (RW(18) + 0)));
mul_s(c, 0, 3, RSW(3), RSW(4));
SET64(4, RSD(3) < (s64)0);
SET32(5, RW(3) + 7);
if (RD(4) != 0) SET64(3, RD(5));
SET64(4, (s32)rd32(c, (RW(29) + 88)));
SET32(3, RSW(3) >> 3);
wr8(c, (RW(22) + 0), (u8)RW(3));
wr32(c, (RW(4) + 0), RW(8));
L_00247638:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00247660(Ctx *c) { /* func_00247660 */
ENTER(0x247660);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 72), RD(21));
SET32(21, RW(0) + 1);
wr64(c, (RW(29) + 40), RD(17));
SET32(17, RW(16) + 14);
wr64(c, (RW(29) + 48), RD(18));
SET32(18, RW(16) + 15);
wr64(c, (RW(29) + 56), RD(19));
SET32(19, RW(16) + 16);
wr64(c, (RW(29) + 64), RD(20));
SET32(20, RW(16) + 13);
wr64(c, (RW(29) + 80), RD(31));
SET64(4, RD(5) + RD(0));
wr16(c, (RW(16) + 2), (u16)RW(21));
SET32(2, RW(16) + 24);
SET64(5, RD(6) + RD(0));
SET32(6, RW(29) + 16);
SET32(7, RW(16) + 12);
SET64(8, RD(20) + RD(0));
SET64(9, RD(18) + RD(0));
SET64(10, RD(17) + RD(0));
SET32(11, RW(16) + 20);
wr32(c, (RW(29) + 0), RW(2));
SET64(31, 0x2476cc); wr32(c, (RW(29) + 8), RW(19)); JP_F_00247550(c);
{ int t = RSD(2) >= 0; SET32(7, RW(0) + 8); if (t) goto L_002476E0; }
SET64(2, RD(0) + RD(0)); goto L_00247754;
L_002476E0:;
wr32(c, (RW(16) + 52), RW(0));
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 44), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr16(c, (RW(16) + 28), (u16)RW(0));
wr16(c, (RW(16) + 38), (u16)RW(0));
wr16(c, (RW(16) + 36), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(2, (s8)rd8(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(16) + 64)));
wr32(c, (RW(16) + 80), RW(2));
SET32(2, RW(0) + 3);
SET64(6, (s32)rd32(c, (RW(16) + 68)));
SET64(3, (s8)rd8(c, (RW(18) + 0)));
wr32(c, (RW(16) + 92), RW(4));
wr32(c, (RW(16) + 84), RW(3));
wr16(c, (RW(16) + 152), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(19) + 0)));
wr32(c, (RW(16) + 96), RW(5));
wr32(c, (RW(16) + 88), RW(3));
wr32(c, (RW(16) + 100), RW(6));
wr32(c, (RW(16) + 140), RW(0));
wr32(c, (RW(16) + 136), RW(0));
SET64(2, (s8)rd8(c, (RW(20) + 0)));
if (RD(2) != RD(7)) { wr16(c, (RW(16) + 156), (u16)RW(0)); goto L_00247750; }
wr16(c, (RW(16) + 156), (u16)RW(21));
L_00247750:;
SET64(2, (s16)rd16(c, (RW(29) + 16)));
L_00247754:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void JP_F_00247778(Ctx *c) { /* func_00247778 */
ENTER(0x247778);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_002478D0; }
SET64(31, 0x2477ac); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CB30(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_002478D0; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x2477cc); SET32(7, RW(16) + 112); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(7, (s32)rd32(c, (RW(17) + 32)));
SET32(6, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(17) + 36)));
SET32(9, RW(4) - RW(7));
SET64(4, (s8)rd8(c, (RW(16) + 14)));
SET64(2, RSD(3) < RSD(9));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
if (RD(2) != 0) SET64(9, RD(3));
SET32(3, RW(7) << 1);
SET64(11, (s32)rd32(c, (RW(17) + 20)));
SET64(2, RSD(5) < RSD(9));
if (RD(2) != 0) SET64(9, RD(5));
SET32(10, RW(11) + RW(3));
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_00247878; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 1);
{ int t = RSD(9) <= 0; SET32(11, RW(11) + RW(2)); if (t) goto L_002478B0; }
SET64(7, RD(18) + RD(0));
L_00247828:;
SET64(2, rd16(c, (RW(7) + 0)));
SET32(4, RW(8) << 1);
SET32(5, RW(4) + RW(10));
SET32(4, RW(4) + RW(11));
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(2, RD(2) | RD(3));
SET32(8, RW(8) + 1);
wr16(c, (RW(5) + 0), (u16)RW(2));
SET64(6, RSD(8) < RSD(9));
SET64(2, rd16(c, (RW(7) + 2)));
SET32(7, RW(7) + 4);
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(2, RD(2) | RD(3));
{ int t = RD(6) != RD(0); wr16(c, (RW(4) + 0), (u16)RW(2)); if (t) { POLL(); goto L_00247828; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_002478B0;
L_00247878:;
{ int t = RSD(9) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_002478B0; }
L_00247880:;
SET32(4, RW(8) << 1);
SET32(8, RW(8) + 1);
SET32(2, RW(4) + RW(18));
SET32(4, RW(4) + RW(10));
SET64(2, rd16(c, (RW(2) + 0)));
SET64(5, RSD(8) < RSD(9));
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(2, RD(2) | RD(3));
{ int t = RD(5) != RD(0); wr16(c, (RW(4) + 0), (u16)RW(2)); if (t) { POLL(); goto L_00247880; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_002478B0:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(9), RSW(2));
wr32(c, (RW(16) + 144), RW(9));
SET32(2, RW(2) << 1);
wr32(c, (RW(16) + 148), RW(2));
L_002478D0:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002478FC; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x2478f0); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_002478FC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00247910(Ctx *c) { /* func_00247910 */
ENTER(0x247910);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_00247A50; }
SET64(31, 0x247944); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CB30(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_00247A50; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x247964); SET32(7, RW(16) + 112); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(9, (s32)rd32(c, (RW(17) + 32)));
SET32(6, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(17) + 36)));
SET32(8, RW(4) - RW(9));
SET64(4, (s8)rd8(c, (RW(16) + 14)));
SET64(2, RSD(3) < RSD(8));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
if (RD(2) != 0) SET64(8, RD(3));
SET32(3, RW(9) << 1);
SET64(11, (s32)rd32(c, (RW(17) + 20)));
SET64(2, RSD(5) < RSD(8));
if (RD(2) != 0) SET64(8, RD(5));
SET32(10, RW(11) + RW(3));
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_00247A00; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(7, RD(0) + RD(0));
SET32(2, RW(2) + RW(9));
SET32(2, RW(2) << 1);
{ int t = RSD(8) <= 0; SET32(9, RW(11) + RW(2)); if (t) goto L_00247A34; }
SET64(6, RD(18) + RD(0));
L_002479C0:;
SET64(2, rd8(c, (RW(6) + 0)));
SET32(3, RW(7) << 1);
SET32(4, RW(3) + RW(10));
SET32(3, RW(3) + RW(9));
SET32(2, RW(2) << 8);
SET32(7, RW(7) + 1);
wr16(c, (RW(4) + 0), (u16)RW(2));
SET64(5, RSD(7) < RSD(8));
SET64(2, rd8(c, (RW(6) + 1)));
SET32(6, RW(6) + 2);
SET32(2, RW(2) << 8);
{ int t = RD(5) != RD(0); wr16(c, (RW(3) + 0), (u16)RW(2)); if (t) { POLL(); goto L_002479C0; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_00247A34;
L_00247A00:;
{ int t = RSD(8) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_00247A34; }
SET64(5, RD(10) + RD(0));
L_00247A10:;
SET32(2, RW(18) + RW(7));
SET32(7, RW(7) + 1);
SET64(3, rd8(c, (RW(2) + 0)));
SET64(4, RSD(7) < RSD(8));
SET32(3, RW(3) << 8);
wr16(c, (RW(5) + 0), (u16)RW(3));
{ int t = RD(4) != RD(0); SET32(5, RW(5) + 2); if (t) { POLL(); goto L_00247A10; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_00247A34:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(8), RSW(2));
wr32(c, (RW(16) + 144), RW(8));
wr32(c, (RW(16) + 148), RW(2));
L_00247A50:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00247A7C; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x247a70); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00247A7C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00247A90(Ctx *c) { /* func_00247A90 */
ENTER(0x247a90);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s16)rd16(c, (RW(4) + 156)));
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00247AB0; }
SET32(29, RW(29) + 16); { JP_F_00247910(c); return; }
L_00247AB0:;
SET32(29, RW(29) + 16); { JP_F_00247778(c); return; }
}

void JP_F_00247AB8(Ctx *c) { /* func_00247AB8 */
ENTER(0x247ab8);
SET32(29, RW(29) + -16);
SET64(14, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
SET64(12, (s64)(s32)0x640000);
SET64(25, RD(5) + RD(0));
SET64(11, rd8(c, (RW(14) + 3)));
SET64(12, RD(12) | 0x732e);
SET64(3, rd8(c, (RW(14) + 2)));
SET64(13, RD(8) + RD(0));
SET64(4, rd8(c, (RW(14) + 1)));
SET32(11, RW(11) << 24);
SET64(2, rd8(c, (RW(14) + 0)));
SET32(3, RW(3) << 16);
SET32(4, RW(4) << 8);
SET64(24, RD(9) + RD(0));
SET64(2, RD(2) | RD(11));
SET64(3, RD(3) | RD(4));
SET64(4, RD(2) | RD(3));
{ int t = RD(4) == RD(12); SET32(11, RW(14) + 4); if (t) goto L_00247B24; }
SET64(3, (s64)(s32)0x646e0000);
SET64(3, RD(3) | 0x732e);
{ int t = RD(4) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00247DC0; }
L_00247B24:;
SET64(6, rd8(c, (RW(11) + 3)));
SET64(15, (s64)(s32)0xff0000);
SET64(4, rd8(c, (RW(11) + 2)));
SET64(2, RD(0) + RD(0));
SET64(5, rd8(c, (RW(11) + 1)));
SET32(6, RW(6) << 24);
SET64(3, rd8(c, (RW(11) + 0)));
SET32(5, RW(5) << 8);
SET32(4, RW(4) << 16);
SET64(3, RD(3) | RD(6));
SET64(4, RD(4) | RD(5));
SET64(12, RD(3) | RD(4));
SET32(6, RW(12) >> 8);
SET32(5, RW(12) << 8);
SET32(4, RW(12) << 24);
SET32(3, RW(12) >> 24);
SET64(5, RD(5) & RD(15));
SET64(6, RD(6) & 0xff00);
SET64(3, RD(3) | RD(4));
SET64(5, RD(5) | RD(6));
SET64(12, RD(3) | RD(5));
SET64(4, RSD(25) < RSD(12));
{ int t = RD(4) != RD(0); SET32(11, RW(11) + 4); if (t) goto L_00247DC0; }
SET64(9, rd8(c, (RW(11) + 0)));
SET32(25, RW(0) + 2);
SET64(8, rd8(c, (RW(11) + 3)));
SET64(6, rd8(c, (RW(11) + 2)));
SET64(7, rd8(c, (RW(11) + 1)));
SET32(11, RW(11) + 4);
SET64(5, rd8(c, (RW(11) + 3)));
SET32(8, RW(8) << 24);
SET64(4, rd8(c, (RW(11) + 2)));
SET32(7, RW(7) << 8);
SET64(2, rd8(c, (RW(11) + 1)));
SET32(5, RW(5) << 24);
SET64(3, rd8(c, (RW(11) + 0)));
SET32(11, RW(11) + 4);
SET32(2, RW(2) << 8);
SET32(4, RW(4) << 16);
SET64(3, RD(3) | RD(5));
SET64(4, RD(4) | RD(2));
SET32(6, RW(6) << 16);
SET64(4, RD(3) | RD(4));
SET64(6, RD(6) | RD(7));
SET64(9, RD(9) | RD(8));
SET64(9, RD(9) | RD(6));
SET32(6, RW(4) >> 24);
SET32(2, RW(4) >> 8);
SET32(5, RW(4) << 8);
SET32(7, RW(9) >> 8);
SET64(2, RD(2) & 0xff00);
SET32(3, RW(9) << 8);
SET32(4, RW(4) << 24);
SET64(5, RD(5) & RD(15));
SET64(6, RD(6) | RD(4));
SET64(5, RD(5) | RD(2));
SET32(2, RW(9) >> 24);
SET32(4, RW(9) << 24);
SET64(3, RD(3) & RD(15));
SET64(7, RD(7) & 0xff00);
SET64(2, RD(2) | RD(4));
SET64(3, RD(3) | RD(7));
SET64(4, RD(6) | RD(5));
{ int t = RD(4) == RD(25); SET64(9, RD(2) | RD(3)); if (t) goto L_00247C70; }
SET64(2, RD(4) < (u64)(s64)3);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_00247C50; }
SET32(2, RW(0) + 1);
{ int t = RD(4) == RD(2); SET64(2, RD(0) + RD(0)); if (t) goto L_00247C60; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00247DC4;
L_00247C50:;
{ int t = RD(4) == RD(2); SET64(2, RD(0) + RD(0)); if (t) goto L_00247C88; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00247DC4;
L_00247C60:;
SET32(2, RW(0) + 8);
wr32(c, (RW(10) + 0), RW(25));
wr32(c, (RW(13) + 0), RW(2)); goto L_00247C94;
L_00247C70:;
SET32(2, RW(0) + 1);
SET32(3, RW(0) + 8);
wr32(c, (RW(10) + 0), RW(2));
wr32(c, (RW(13) + 0), RW(3)); goto L_00247C94;
L_00247C88:;
SET32(2, RW(0) + 16);
wr32(c, (RW(10) + 0), RW(0));
wr32(c, (RW(13) + 0), RW(2));
L_00247C94:;
SET64(5, rd8(c, (RW(11) + 3)));
SET64(6, (s64)(s32)0xff0000);
SET64(3, rd8(c, (RW(11) + 2)));
SET32(7, RW(0) + 2);
SET64(4, rd8(c, (RW(11) + 1)));
SET32(5, RW(5) << 24);
SET64(2, rd8(c, (RW(11) + 0)));
SET32(11, RW(11) + 4);
SET32(4, RW(4) << 8);
SET32(3, RW(3) << 16);
SET64(3, RD(3) | RD(4));
SET64(2, RD(2) | RD(5));
SET64(2, RD(2) | RD(3));
SET32(5, RSW(2) >> 8);
SET32(4, RW(2) << 8);
SET64(5, RD(5) & 0xff00);
SET32(3, RW(2) >> 24);
SET64(4, RD(4) & RD(6));
SET32(2, RW(2) << 24);
SET64(4, RD(4) | RD(5));
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) | RD(4));
wr32(c, (RW(16) + 0), RW(3));
SET64(5, rd8(c, (RW(11) + 1)));
SET64(4, rd8(c, (RW(11) + 3)));
SET64(3, rd8(c, (RW(11) + 2)));
SET32(5, RW(5) << 8);
SET64(2, rd8(c, (RW(11) + 0)));
SET32(4, RW(4) << 24);
SET32(3, RW(3) << 16);
SET64(3, RD(3) | RD(5));
SET64(2, RD(2) | RD(4));
SET64(2, RD(2) | RD(3));
SET32(5, RSW(2) >> 8);
SET32(4, RW(2) << 8);
SET32(3, RW(2) >> 24);
SET32(2, RW(2) << 24);
SET64(4, RD(4) & RD(6));
SET64(5, RD(5) & 0xff00);
SET64(3, RD(3) | RD(2));
SET64(4, RD(4) | RD(5));
SET64(3, RD(3) | RD(4));
wr32(c, (RW(17) + 0), RW(3));
SET64(10, (s32)rd32(c, (RW(10) + 0)));
{ int t = RD(10) != RD(7); SET32(2, RW(0) + 1); if (t) goto L_00247D68; }
div_s(c, 0, RSW(9), RSW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x247d54); goto L_00247D58; }
L_00247D58:;
SET64(2, c->lo.d[0]);
wr32(c, (RW(24) + 0), RW(2)); goto L_00247DBC;
L_00247D68:;
{ int t = RD(10) != RD(2);  if (t) goto L_00247D88; }
div_s(c, 0, RSW(9), RSW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x247d78); goto L_00247D7C; }
L_00247D7C:;
SET64(2, c->lo.d[0]);
wr32(c, (RW(24) + 0), RW(2)); goto L_00247DBC;
L_00247D88:;
{ int t = RD(10) != RD(0); SET64(2, (s64)(s32)0x7fff0000); if (t) goto L_00247DB8; }
SET32(2, RW(9) >> 31);
if (RD(3) == RD(0)) { rt_break(c, 0x247d98); goto L_00247D9C; }
L_00247D9C:;
SET32(2, RW(9) + RW(2));
SET32(2, RSW(2) >> 1);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
wr32(c, (RW(24) + 0), RW(2)); goto L_00247DBC;
L_00247DB8:;
wr32(c, (RW(24) + 0), RW(2));
L_00247DBC:;
SET32(2, RW(14) + RW(12));
L_00247DC0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00247DC4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00247DD0(Ctx *c) { /* func_00247DD0 */
ENTER(0x247dd0);
SET64(5, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 4);
SET32(5, RW(5) + 976);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x247df0); SET64(16, RD(4) + RD(0)); JP_F_00127180(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 984);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 4); if (t) goto L_00247E14; }
SET64(31, 0x247e0c);  JP_F_00127180(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00247E18; }
L_00247E14:;
SET32(2, RW(0) + 1);
L_00247E18:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00247E28(Ctx *c) { /* func_00247E28 */
ENTER(0x247e28);
SET32(29, RW(29) + -80);
SET64(2, RSD(5) < (s64)8);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(10) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(11) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(8) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 64), RD(22));
SET64(22, RD(9) + RD(0));
wr64(c, (RW(29) + 72), RD(31));
SET64(6, RD(29) + RD(0));
SET32(8, RW(29) + 8);
SET32(7, RW(29) + 4);
SET32(9, RW(29) + 12);
{ int t = RD(2) == RD(0); SET64(10, (s32)rd32(c, (RW(29) + 96))); if (t) goto L_00247E90; }
wr16(c, (RW(17) + 0), (u16)RW(0));
SET32(2, RW(0) + -1); goto L_00247F10;
L_00247E90:;
SET64(31, 0x247e98);  JP_F_00247AB8(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + -1);
{ int t = RD(3) == RD(0); SET32(4, RW(3) - RW(16)); if (t) goto L_00247F10; }
SET32(3, RW(4) << 16);
{ int t = RSD(3) <= 0; wr16(c, (RW(17) + 0), (u16)RW(4)); if (t) goto L_00247F10; }
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET32(7, RW(0) + -1);
SET64(3, rd8(c, (RW(29) + 4)));
SET32(8, RW(0) + 1);
SET64(4, rd8(c, (RW(29) + 8)));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(19) + 0), RW(6));
SET64(5, (s32)rd32(c, (RW(29) + 12)));
wr8(c, (RW(18) + 0), (u8)RW(3));
wr8(c, (RW(20) + 0), (u8)RW(4));
SET64(3, (s32)rd32(c, (RW(29) + 80)));
wr32(c, (RW(3) + 0), RW(5));
wr8(c, (RW(21) + 0), (u8)RW(7));
SET64(4, (s8)rd8(c, (RW(20) + 0)));
SET64(3, (s8)rd8(c, (RW(18) + 0)));
mul_s(c, 0, 3, RSW(3), RSW(4));
SET64(4, RSD(3) < (s64)0);
SET32(5, RW(3) + 7);
if (RD(4) != 0) SET64(3, RD(5));
SET32(3, RSW(3) >> 3);
wr8(c, (RW(22) + 0), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(29) + 88)));
wr32(c, (RW(4) + 0), RW(8));
L_00247F10:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00247F38(Ctx *c) { /* func_00247F38 */
ENTER(0x247f38);
SET32(29, RW(29) + -96);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET32(17, RW(16) + 14);
wr64(c, (RW(29) + 64), RD(18));
SET32(18, RW(16) + 16);
wr64(c, (RW(29) + 72), RD(19));
SET32(19, RW(16) + 15);
wr64(c, (RW(29) + 80), RD(31));
SET64(4, RD(5) + RD(0));
wr16(c, (RW(16) + 2), (u16)RW(2));
SET32(2, RW(16) + 24);
SET64(5, RD(6) + RD(0));
SET32(6, RW(29) + 32);
SET32(3, RW(29) + 36);
SET32(7, RW(16) + 12);
SET32(8, RW(16) + 13);
SET64(9, RD(19) + RD(0));
SET64(10, RD(17) + RD(0));
SET32(11, RW(16) + 20);
wr32(c, (RW(29) + 0), RW(2));
wr32(c, (RW(29) + 16), RW(3));
SET64(31, 0x247fa0); wr32(c, (RW(29) + 8), RW(18)); JP_F_00247E28(c);
if (RSD(2) >= 0) { wr32(c, (RW(16) + 52), RW(0)); goto L_00247FB0; }
SET64(2, RD(0) + RD(0)); goto L_00248018;
L_00247FB0:;
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 44), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr16(c, (RW(16) + 28), (u16)RW(0));
wr16(c, (RW(16) + 38), (u16)RW(0));
wr16(c, (RW(16) + 36), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(16) + 60)));
SET64(2, (s8)rd8(c, (RW(17) + 0)));
SET64(4, rd16(c, (RW(29) + 36)));
wr32(c, (RW(16) + 80), RW(2));
SET64(6, (s32)rd32(c, (RW(16) + 64)));
SET64(3, (s8)rd8(c, (RW(19) + 0)));
SET64(2, (s16)rd16(c, (RW(29) + 32)));
wr32(c, (RW(16) + 84), RW(3));
SET32(3, RW(0) + 4);
SET64(7, (s32)rd32(c, (RW(16) + 68)));
wr16(c, (RW(16) + 156), (u16)RW(4));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(16) + 92), RW(5));
wr16(c, (RW(16) + 152), (u16)RW(3));
wr32(c, (RW(16) + 88), RW(4));
wr32(c, (RW(16) + 96), RW(6));
wr32(c, (RW(16) + 100), RW(7));
wr32(c, (RW(16) + 140), RW(0));
wr32(c, (RW(16) + 136), RW(0));
L_00248018:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void JP_F_00248038(Ctx *c) { /* func_00248038 */
ENTER(0x248038);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_00248190; }
SET64(31, 0x24806c); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CB30(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_00248190; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x24808c); SET32(7, RW(16) + 112); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(7, (s32)rd32(c, (RW(17) + 32)));
SET32(6, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(17) + 36)));
SET32(9, RW(4) - RW(7));
SET64(4, (s8)rd8(c, (RW(16) + 14)));
SET64(2, RSD(3) < RSD(9));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
if (RD(2) != 0) SET64(9, RD(3));
SET32(3, RW(7) << 1);
SET64(11, (s32)rd32(c, (RW(17) + 20)));
SET64(2, RSD(5) < RSD(9));
if (RD(2) != 0) SET64(9, RD(5));
SET32(10, RW(11) + RW(3));
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_00248138; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 1);
{ int t = RSD(9) <= 0; SET32(11, RW(11) + RW(2)); if (t) goto L_00248170; }
SET64(7, RD(18) + RD(0));
L_002480E8:;
SET64(2, rd16(c, (RW(7) + 0)));
SET32(4, RW(8) << 1);
SET32(5, RW(4) + RW(10));
SET32(4, RW(4) + RW(11));
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(2, RD(2) | RD(3));
SET32(8, RW(8) + 1);
wr16(c, (RW(5) + 0), (u16)RW(2));
SET64(6, RSD(8) < RSD(9));
SET64(2, rd16(c, (RW(7) + 2)));
SET32(7, RW(7) + 4);
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(2, RD(2) | RD(3));
{ int t = RD(6) != RD(0); wr16(c, (RW(4) + 0), (u16)RW(2)); if (t) { POLL(); goto L_002480E8; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_00248170;
L_00248138:;
{ int t = RSD(9) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00248170; }
L_00248140:;
SET32(4, RW(8) << 1);
SET32(8, RW(8) + 1);
SET32(2, RW(4) + RW(18));
SET32(4, RW(4) + RW(10));
SET64(2, rd16(c, (RW(2) + 0)));
SET64(5, RSD(8) < RSD(9));
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(2, RD(2) | RD(3));
{ int t = RD(5) != RD(0); wr16(c, (RW(4) + 0), (u16)RW(2)); if (t) { POLL(); goto L_00248140; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_00248170:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(9), RSW(2));
wr32(c, (RW(16) + 144), RW(9));
SET32(2, RW(2) << 1);
wr32(c, (RW(16) + 148), RW(2));
L_00248190:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002481BC; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x2481b0); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_002481BC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002481D0(Ctx *c) { /* func_002481D0 */
ENTER(0x2481d0);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_00248310; }
SET64(31, 0x248204); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CB30(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_00248310; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x248224); SET32(7, RW(16) + 112); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(9, (s32)rd32(c, (RW(17) + 32)));
SET32(6, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(17) + 36)));
SET32(8, RW(4) - RW(9));
SET64(4, (s8)rd8(c, (RW(16) + 14)));
SET64(2, RSD(3) < RSD(8));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
if (RD(2) != 0) SET64(8, RD(3));
SET32(3, RW(9) << 1);
SET64(11, (s32)rd32(c, (RW(17) + 20)));
SET64(2, RSD(5) < RSD(8));
if (RD(2) != 0) SET64(8, RD(5));
SET32(10, RW(11) + RW(3));
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_002482C0; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(7, RD(0) + RD(0));
SET32(2, RW(2) + RW(9));
SET32(2, RW(2) << 1);
{ int t = RSD(8) <= 0; SET32(9, RW(11) + RW(2)); if (t) goto L_002482F4; }
SET64(6, RD(18) + RD(0));
L_00248280:;
SET64(2, rd8(c, (RW(6) + 0)));
SET32(3, RW(7) << 1);
SET32(4, RW(3) + RW(10));
SET32(3, RW(3) + RW(9));
SET32(2, RW(2) << 8);
SET32(7, RW(7) + 1);
wr16(c, (RW(4) + 0), (u16)RW(2));
SET64(5, RSD(7) < RSD(8));
SET64(2, rd8(c, (RW(6) + 1)));
SET32(6, RW(6) + 2);
SET32(2, RW(2) << 8);
{ int t = RD(5) != RD(0); wr16(c, (RW(3) + 0), (u16)RW(2)); if (t) { POLL(); goto L_00248280; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_002482F4;
L_002482C0:;
{ int t = RSD(8) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_002482F4; }
SET64(5, RD(10) + RD(0));
L_002482D0:;
SET32(2, RW(18) + RW(7));
SET32(7, RW(7) + 1);
SET64(3, rd8(c, (RW(2) + 0)));
SET64(4, RSD(7) < RSD(8));
SET32(3, RW(3) << 8);
wr16(c, (RW(5) + 0), (u16)RW(3));
{ int t = RD(4) != RD(0); SET32(5, RW(5) + 2); if (t) { POLL(); goto L_002482D0; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_002482F4:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(8), RSW(2));
wr32(c, (RW(16) + 144), RW(8));
wr32(c, (RW(16) + 148), RW(2));
L_00248310:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024833C; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x248330); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_0024833C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00248350(Ctx *c) { /* func_00248350 */
ENTER(0x248350);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_002484B8; }
SET64(31, 0x248384); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CB30(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_002484B8; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x2483a4); SET32(7, RW(16) + 112); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(7, (s32)rd32(c, (RW(17) + 32)));
SET32(6, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(17) + 36)));
SET32(9, RW(4) - RW(7));
SET64(4, (s8)rd8(c, (RW(16) + 14)));
SET64(2, RSD(3) < RSD(9));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
if (RD(2) != 0) SET64(9, RD(3));
SET32(3, RW(7) << 1);
SET64(10, (s32)rd32(c, (RW(17) + 20)));
SET64(2, RSD(5) < RSD(9));
if (RD(2) != 0) SET64(9, RD(5));
SET32(11, RW(10) + RW(3));
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_00248458; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 1);
{ int t = RSD(9) <= 0; SET32(12, RW(10) + RW(2)); if (t) goto L_0024849C; }
SET64(2, (s64)(s32)0x3f0000);
SET64(7, RD(18) + RD(0));
SET32(10, RW(2) + 1496);
L_00248408:;
SET64(2, rd8(c, (RW(7) + 0)));
SET32(4, RW(8) << 1);
SET32(5, RW(4) + RW(11));
SET32(4, RW(4) + RW(12));
SET32(2, RW(2) << 1);
SET32(8, RW(8) + 1);
SET32(2, RW(2) + RW(10));
SET64(6, RSD(8) < RSD(9));
SET64(3, rd16(c, (RW(2) + 0)));
wr16(c, (RW(5) + 0), (u16)RW(3));
SET64(2, rd8(c, (RW(7) + 1)));
SET32(7, RW(7) + 2);
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(10));
SET64(3, rd16(c, (RW(2) + 0)));
{ int t = RD(6) != RD(0); wr16(c, (RW(4) + 0), (u16)RW(3)); if (t) { POLL(); goto L_00248408; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_0024849C;
L_00248458:;
{ int t = RSD(9) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_0024849C; }
SET64(2, (s64)(s32)0x3f0000);
SET64(5, RD(11) + RD(0));
SET32(6, RW(2) + 1496);
L_00248470:;
SET32(3, RW(18) + RW(8));
SET32(8, RW(8) + 1);
SET64(2, rd8(c, (RW(3) + 0)));
SET64(4, RSD(8) < RSD(9));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(6));
SET64(3, rd16(c, (RW(2) + 0)));
wr16(c, (RW(5) + 0), (u16)RW(3));
{ int t = RD(4) != RD(0); SET32(5, RW(5) + 2); if (t) { POLL(); goto L_00248470; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_0024849C:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(9), RSW(2));
wr32(c, (RW(16) + 144), RW(9));
wr32(c, (RW(16) + 148), RW(2));
L_002484B8:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002484E4; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x2484d8); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_002484E4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002484F8(Ctx *c) { /* func_002484F8 */
ENTER(0x2484f8);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s16)rd16(c, (RW(4) + 156)));
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_00248520; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00248350(c); return; }
L_00248520:;
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00248530; }
SET32(29, RW(29) + 16); { JP_F_002481D0(c); return; }
L_00248530:;
SET32(29, RW(29) + 16); { JP_F_00248038(c); return; }
}

void JP_F_00248538(Ctx *c) { /* func_00248538 */
ENTER(0x248538);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00248540(Ctx *c) { /* func_00248540 */
ENTER(0x248540);
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(2) + 2016), RW(4));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(3) + 2020), RW(5)); return;
}

void JP_F_00248558(Ctx *c) { /* func_00248558 */
ENTER(0x248558);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + 2016)));
SET64(5, RD(4) + RD(0));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024857C; }
SET64(2, (s64)(s32)0x3f0000);
{ u32 t = RW(3); SET64(31, 0x24857c); SET64(4, (s32)rd32(c, (RW(2) + 2020))); rt_call(c, t); }
L_0024857C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00248590(Ctx *c) { /* func_00248590 */
ENTER(0x248590);
SET64(4, (s64)(s32)0x3f0000);
SET64(2, RD(0) + RD(0));
SET32(4, RW(4) + 2012);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 0), RW(3)); return;
}

void JP_F_002485B0(Ctx *c) { /* func_002485B0 */
ENTER(0x2485b0);
SET64(4, (s64)(s32)0x3f0000);
SET64(2, RD(0) + RD(0));
SET32(4, RW(4) + 2012);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + -1);
wr32(c, (RW(4) + 0), RW(3)); return;
}

void JP_F_002485D0(Ctx *c) { /* func_002485D0 */
ENTER(0x2485d0);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -48);
SET64(3, (s32)rd32(c, (RW(2) + 2012)));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(8) + RD(0));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_00248614; }
SET64(31, 0x248614);  JP_F_00248590(c);
L_00248614:;
wr16(c, (RW(18) + 0), (u16)RW(0));
wr16(c, (RW(19) + 0), (u16)RW(0));
{ int t = RD(17) != RD(0); wr16(c, (RW(20) + 0), (u16)RW(0)); if (t) goto L_0024862C; }
{ int t = RSD(16) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00248764; }
L_0024862C:;
SET64(11, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET32(2, RW(11) + 1040);
{ int t = RSD(16) <= 0; SET64(10, (s16)rd16(c, (RW(2) + 512))); if (t) goto L_0024869C; }
SET64(8, RD(2) + RD(0));
L_00248648:;
SET32(3, RW(17) + RW(7));
SET32(7, RW(7) + 1);
SET64(2, (s8)rd8(c, (RW(3) + 0)));
SET64(6, RSD(7) < RSD(16));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(8));
SET64(3, (s16)rd16(c, (RW(2) + 256)));
mul_s(c, 0, 3, RSW(10), RSW(3));
SET32(5, RW(3) + 1023);
SET64(4, RSD(3) < (s64)0);
SET64(2, RD(3) + RD(0));
if (RD(4) != 0) SET64(2, RD(5));
SET32(2, RSW(2) >> 10);
SET32(2, RW(2) << 10);
SET32(3, RW(3) - RW(2));
SET32(3, RW(3) << 1);
SET32(3, RW(3) + RW(8));
{ int t = RD(6) != RD(0); SET64(10, (s16)rd16(c, (RW(3) + 0))); if (t) { POLL(); goto L_00248648; } }
SET32(2, RW(11) + 1040);
SET64(7, RD(0) + RD(0));
L_0024869C:;
{ int t = RSD(16) <= 0; SET64(8, (s16)rd16(c, (RW(2) + 1024))); if (t) goto L_002486F4; }
SET64(9, RD(2) + RD(0));
L_002486A8:;
SET32(3, RW(17) + RW(7));
SET32(7, RW(7) + 1);
SET64(2, (s8)rd8(c, (RW(3) + 0)));
SET64(6, RSD(7) < RSD(16));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(9));
SET64(3, (s16)rd16(c, (RW(2) + 256)));
mul_s(c, 0, 3, RSW(8), RSW(3));
SET32(5, RW(3) + 1023);
SET64(4, RSD(3) < (s64)0);
SET64(2, RD(3) + RD(0));
if (RD(4) != 0) SET64(2, RD(5));
SET32(2, RSW(2) >> 10);
SET32(2, RW(2) << 10);
SET32(3, RW(3) - RW(2));
SET32(3, RW(3) << 1);
SET32(3, RW(3) + RW(9));
{ int t = RD(6) != RD(0); SET64(8, (s16)rd16(c, (RW(3) + 0))); if (t) { POLL(); goto L_002486A8; } }
L_002486F4:;
SET32(2, RW(11) + 1040);
SET64(7, RD(0) + RD(0));
{ int t = RSD(16) <= 0; SET64(4, (s16)rd16(c, (RW(2) + 1536))); if (t) goto L_00248754; }
SET64(9, RD(2) + RD(0));
L_00248708:;
SET32(3, RW(17) + RW(7));
SET32(7, RW(7) + 1);
SET64(2, (s8)rd8(c, (RW(3) + 0)));
SET64(6, RSD(7) < RSD(16));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(9));
SET64(3, (s16)rd16(c, (RW(2) + 256)));
mul_s(c, 0, 3, RSW(4), RSW(3));
SET64(4, RSD(3) < (s64)0);
SET32(5, RW(3) + 1023);
SET64(2, RD(3) + RD(0));
if (RD(4) != 0) SET64(2, RD(5));
SET32(2, RSW(2) >> 10);
SET32(2, RW(2) << 10);
SET32(3, RW(3) - RW(2));
SET32(3, RW(3) << 1);
SET32(3, RW(3) + RW(9));
{ int t = RD(6) != RD(0); SET64(4, (s16)rd16(c, (RW(3) + 0))); if (t) { POLL(); goto L_00248708; } }
L_00248754:;
wr16(c, (RW(18) + 0), (u16)RW(10));
SET64(2, RD(0) + RD(0));
wr16(c, (RW(19) + 0), (u16)RW(8));
wr16(c, (RW(20) + 0), (u16)RW(4));
L_00248764:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00248788(Ctx *c) { /* func_00248788 */
ENTER(0x248788);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -32);
SET64(3, (s32)rd32(c, (RW(2) + 2012)));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_002487BC; }
SET64(31, 0x2487bc);  JP_F_00248590(c);
L_002487BC:;
SET64(4, (s64)(s32)0x4b0000);
SET64(6, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(8, RD(18) + RD(0));
SET32(4, RW(4) + 3088);
SET64(31, 0x2487d8); SET32(5, RW(0) + 6); JP_F_002485D0(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002487F8(Ctx *c) { /* func_002487F8 */
ENTER(0x2487f8);
SET64(7, rd16(c, (RW(5) + 0)));
SET64(2, RD(0) + RD(0));
SET64(5, rd16(c, (RW(4) + 0)));
SET64(3, rd16(c, (RW(6) + 0)));
mul_s(c, 0, 5, RSW(5), RSW(7));
SET32(3, RW(3) + RW(5));
wr16(c, (RW(4) + 0), (u16)RW(3)); return;
}

void JP_F_00248818(Ctx *c) { /* func_00248818 */
ENTER(0x248818);
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(2) + 2044), RW(4)); return;
}

void JP_F_00248828(Ctx *c) { /* func_00248828 */
ENTER(0x248828);
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + 2044))); return;
}

void JP_F_00248838(Ctx *c) { /* func_00248838 */
ENTER(0x248838);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x248848);  JP_F_0025C928(c);
SET64(31, 0x248850);  JP_F_00248590(c);
SET64(4, (s64)(s32)0x3f0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 2048);
SET64(31, 0x248864); SET32(6, RW(0) + 4160); JP_F_001273D0(c);
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00248818(c); return; }
}

void JP_F_00248878(Ctx *c) { /* func_00248878 */
ENTER(0x248878);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x248888);  JP_F_0025C950(c);
SET64(31, 0x248890);  JP_F_002485B0(c);
SET64(4, (s64)(s32)0x3f0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 2048);
SET32(6, RW(0) + 4160);
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_002488B0(Ctx *c) { /* func_002488B0 */
ENTER(0x2488b0);
SET64(8, (s32)rd32(c, (RW(4) + 140)));
SET64(2, (s32)rd32(c, (RW(4) + 60)));
wr32(c, (RW(5) + 0), RW(8));
SET64(5, (s32)rd32(c, (RW(4) + 140)));
SET64(3, (s32)rd32(c, (RW(4) + 64)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(6) + 0), RW(3));
SET64(5, (s32)rd32(c, (RW(4) + 24)));
SET64(3, (s32)rd32(c, (RW(4) + 136)));
SET32(5, RW(5) - RW(3));
wr32(c, (RW(7) + 0), RW(5)); return;
}

void JP_F_002488E0(Ctx *c) { /* func_002488E0 */
ENTER(0x2488e0);
SET64(2, (s32)rd32(c, (RW(4) + 140)));
SET64(3, (s32)rd32(c, (RW(4) + 136)));
SET32(2, RW(2) + RW(6));
SET32(3, RW(3) + RW(6));
wr32(c, (RW(4) + 140), RW(2));
wr32(c, (RW(4) + 136), RW(3)); return;
}

void JP_F_00248900(Ctx *c) { /* func_00248900 */
ENTER(0x248900);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(0) + -128);
SET32(4, RW(2) + 208);
SET64(5, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 16);
wr16(c, (RW(2) + 228), (u16)RW(3));
wr32(c, (RW(2) + 204), RW(0));
wr16(c, (RW(2) + 224), (u16)RW(0));
wr16(c, (RW(2) + 226), (u16)RW(3));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_00248938(Ctx *c) { /* func_00248938 */
ENTER(0x248938);
SET32(29, RW(29) + -48);
SET64(8, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(8) + 2048);
wr64(c, (RW(29) + 40), RD(31));
SET64(2, (s16)rd16(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002489A4; }
SET32(5, RW(5) + 1);
L_00248980:;
SET64(2, RSD(5) < (s64)16);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 260); if (t) goto L_002489A4; }
SET64(2, (s16)rd16(c, (RW(3) + 0)));
if (RD(2) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00248980; } }
L_002489A4:;
SET32(3, RW(0) + 16);
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00248A34; }
SET32(2, RW(5) << 6);
SET32(3, RW(8) + 2048);
SET32(2, RW(2) + RW(5));
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) << 2);
SET32(6, RW(0) + 260);
SET32(16, RW(2) + RW(3));
SET64(31, 0x2489d4); SET64(4, RD(16) + RD(0)); JP_F_001273D0(c);
SET32(3, RW(0) + 1);
SET64(31, 0x2489e0); wr16(c, (RW(16) + 0), (u16)RW(3)); JP_F_0025C978(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 8), RW(2)); if (t) goto L_002489F8; }
SET64(31, 0x2489f0); SET64(4, RD(16) + RD(0)); JP_F_00248A58(c);
SET64(2, RD(0) + RD(0)); goto L_00248A34;
L_002489F8:;
SET64(2, (s64)(s32)0x250000);
SET64(3, (s64)(s32)0x250000);
SET32(2, RW(2) + -30544);
SET32(3, RW(3) + -30496);
wr32(c, (RW(16) + 120), RW(2));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 56), RW(20));
wr32(c, (RW(16) + 60), RW(19));
wr32(c, (RW(16) + 64), RW(17));
wr32(c, (RW(16) + 68), RW(18));
wr32(c, (RW(16) + 128), RW(3));
wr32(c, (RW(16) + 124), RW(16));
SET64(31, 0x248a30); wr32(c, (RW(16) + 132), RW(16)); JP_F_00248900(c);
SET64(2, RD(16) + RD(0));
L_00248A34:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00248A58(Ctx *c) { /* func_00248A58 */
ENTER(0x248a58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00248A8C; }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x248a78); wr32(c, (RW(16) + 8), RW(0)); JP_F_0025CAF0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x248a88); SET32(6, RW(0) + 260); JP_F_001273D0(c);
wr16(c, (RW(16) + 0), (u16)RW(0));
L_00248A8C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00248AA0(Ctx *c) { /* func_00248AA0 */
ENTER(0x248aa0);
SET32(29, RW(29) + -160);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 80), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 88), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 104), RD(19));
SET32(19, RW(16) + 12);
wr64(c, (RW(29) + 112), RD(20));
SET32(20, RW(16) + 24);
wr64(c, (RW(29) + 120), RD(21));
SET32(21, RW(16) + 13);
wr64(c, (RW(29) + 128), RD(22));
SET32(22, RW(16) + 14);
wr64(c, (RW(29) + 136), RD(23));
SET32(23, RW(16) + 16);
wr64(c, (RW(29) + 144), RD(30));
SET32(30, RW(16) + 15);
wr64(c, (RW(29) + 152), RD(31));
SET32(6, RW(29) + 64);
wr16(c, (RW(16) + 2), (u16)RW(2));
SET32(2, RW(16) + 20);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(21) + RD(0));
SET64(9, RD(30) + RD(0));
SET64(10, RD(22) + RD(0));
SET64(11, RD(2) + RD(0));
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 0), RW(20));
SET64(31, 0x248b2c); wr32(c, (RW(29) + 8), RW(23)); JP_F_0024AB88(c);
{ int t = RSD(2) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00248D5C; }
SET64(2, (s8)rd8(c, (RW(19) + 0)));
SET64(2, RSD(2) < (s64)5);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00248C28; }
SET64(2, (s32)rd32(c, (RW(16) + 180)));
if (RD(2) != RD(0)) { SET32(2, RW(0) + 8); goto L_00248B70; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 3096);
SET64(31, 0x248b64); SET32(5, RW(5) + 3128); JP_F_0024BE40(c);
L_00248B64:;
SET32(2, RW(0) + -1); goto L_00248D5C;
L_00248B70:;
SET32(9, RW(0) + 96);
wr8(c, (RW(21) + 0), (u8)RW(2));
SET32(8, RW(0) + 10);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(3, (s8)rd8(c, (RW(22) + 0)));
SET32(6, RW(29) + 66);
SET32(7, RW(29) + 67);
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 6);
wr8(c, (RW(30) + 0), (u8)RW(2));
wr32(c, (RW(23) + 0), RW(9));
wr16(c, (RW(16) + 152), (u16)RW(8));
wr16(c, (RW(16) + 28), (u16)RW(0));
wr16(c, (RW(16) + 36), (u16)RW(0));
wr16(c, (RW(16) + 38), (u16)RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 44), RW(0));
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 52), RW(0));
SET64(31, 0x248bd0); wr32(c, (RW(16) + 136), RW(0)); JP_F_0024AD08(c);
{ int t = RSD(2) < 0; SET64(4, RD(16) + RD(0)); if (t) goto L_00248CAC; }
SET64(7, (s32)rd32(c, (RW(20) + 0)));
SET64(5, rd8(c, (RW(29) + 66)));
SET32(8, RW(29) + 50);
SET64(6, rd8(c, (RW(29) + 67)));
SET32(9, RW(29) + 52);
SET32(10, RW(29) + 54);
SET64(31, 0x248bf8); wr16(c, (RW(29) + 48), (u16)RW(0)); JP_F_00249268(c);
{ int t = RSD(2) < 0; SET32(2, RW(0) + -1); if (t) goto L_00248D5C; }
SET64(2, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(2) + 2024)));
if (RD(2) == RD(0)) { SET64(2, (s8)rd8(c, (RW(16) + 14))); goto L_00248D28; }
SET64(4, (s32)rd32(c, (RW(16) + 180)));
{ u32 t = RW(2); SET64(31, 0x248c1c); SET32(5, RW(29) + 48); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(16) + 14))); goto L_00248D28;
L_00248C28:;
SET64(5, RD(18) + RD(0));
SET32(6, RW(29) + 66);
SET64(31, 0x248c38); SET32(7, RW(29) + 67); JP_F_0024AD08(c);
{ int t = RSD(2) < 0; SET64(4, RD(16) + RD(0)); if (t) goto L_00248CAC; }
SET64(7, (s32)rd32(c, (RW(20) + 0)));
SET64(5, rd8(c, (RW(29) + 66)));
SET32(8, RW(29) + 68);
SET64(6, rd8(c, (RW(29) + 67)));
SET32(9, RW(29) + 70);
SET64(31, 0x248c5c); SET32(10, RW(29) + 72); JP_F_00249268(c);
{ int t = RSD(2) < 0; SET32(19, RW(16) + 28); if (t) { POLL(); goto L_00248B64; } }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(5, (s16)rd16(c, (RW(29) + 68)));
SET64(6, (s16)rd16(c, (RW(29) + 70)));
SET64(31, 0x248c78); SET64(7, (s16)rd16(c, (RW(29) + 72))); JP_F_0025CAC0(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x248c88); SET64(6, RD(19) + RD(0)); JP_F_0024AC88(c);
{ int t = RSD(2) < 0; SET32(20, RW(29) + 32); if (t) goto L_00248CAC; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET32(6, RW(29) + 16);
SET64(31, 0x248ca4); SET64(7, RD(20) + RD(0)); JP_F_0024AD80(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(29) + 76))); goto L_00248CB8; }
L_00248CAC:;
SET64(2, RD(0) + RD(0)); goto L_00248D5C;
L_00248CB8:;
SET64(6, (s16)rd16(c, (RW(19) + 0)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x248cc8); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CA48(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET32(5, RW(29) + 16);
SET64(31, 0x248cd8); SET64(6, RD(20) + RD(0)); JP_F_0025CA70(c);
SET32(2, RW(16) + 52);
SET32(6, RW(16) + 32);
SET32(7, RW(16) + 36);
SET32(8, RW(16) + 38);
SET32(9, RW(16) + 40);
SET32(10, RW(16) + 44);
SET32(11, RW(16) + 48);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x248d04); wr32(c, (RW(29) + 0), RW(2)); JP_F_0024AEB8(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET32(6, RW(16) + 204);
SET32(7, RW(16) + 208);
SET32(8, RW(16) + 224);
SET64(31, 0x248d20); SET32(9, RW(16) + 226); JP_F_0024B118(c);
wr16(c, (RW(16) + 152), (u16)RW(0));
SET64(2, (s8)rd8(c, (RW(16) + 14)));
L_00248D28:;
SET64(3, (s8)rd8(c, (RW(16) + 15)));
SET64(4, (s32)rd32(c, (RW(16) + 16)));
SET64(5, (s32)rd32(c, (RW(16) + 60)));
SET64(6, (s32)rd32(c, (RW(16) + 64)));
SET64(7, (s32)rd32(c, (RW(16) + 68)));
wr32(c, (RW(16) + 80), RW(2));
wr32(c, (RW(16) + 84), RW(3));
wr32(c, (RW(16) + 88), RW(4));
wr32(c, (RW(16) + 92), RW(5));
wr32(c, (RW(16) + 96), RW(6));
wr32(c, (RW(16) + 100), RW(7));
wr32(c, (RW(16) + 140), RW(0));
SET64(2, (s16)rd16(c, (RW(29) + 64)));
L_00248D5C:;
SET64(16, rd64(c, (RW(29) + 80)));
SET64(17, rd64(c, (RW(29) + 88)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(19, rd64(c, (RW(29) + 104)));
SET64(20, rd64(c, (RW(29) + 112)));
SET64(21, rd64(c, (RW(29) + 120)));
SET64(22, rd64(c, (RW(29) + 128)));
SET64(23, rd64(c, (RW(29) + 136)));
SET64(30, rd64(c, (RW(29) + 144)));
SET64(31, rd64(c, (RW(29) + 152)));
SET32(29, RW(29) + 160); return;
}

void JP_F_00248D90(Ctx *c) { /* func_00248D90 */
ENTER(0x248d90);
wr16(c, (RW(4) + 154), (u16)RW(0)); return;
}

void JP_F_00248D98(Ctx *c) { /* func_00248D98 */
ENTER(0x248d98);
SET64(2, (s64)(s32)0x7fff0000);
SET64(12, rd16(c, (RW(4) + 154)));
SET64(15, (s32)rd32(c, (RW(4) + 60)));
SET32(11, RW(0) + 1024);
SET64(14, (s32)rd32(c, (RW(4) + 64)));
SET32(10, RW(0) + 1);
SET64(13, (s32)rd32(c, (RW(4) + 68)));
SET64(7, RD(0) | 0xbb80);
SET32(3, RW(0) + 2);
SET32(5, RW(0) + 16);
SET64(2, RD(2) | 0xffff);
SET32(6, RW(0) + 127);
SET32(8, RW(0) + 2);
SET32(9, RW(0) + 127);
wr16(c, (RW(4) + 2), (u16)RW(10));
wr32(c, (RW(4) + 20), RW(7));
wr8(c, (RW(4) + 14), (u8)RW(3));
wr8(c, (RW(4) + 13), (u8)RW(5));
wr32(c, (RW(4) + 24), RW(2));
wr8(c, (RW(4) + 15), (u8)RW(6));
wr16(c, (RW(4) + 152), (u16)RW(12));
wr32(c, (RW(4) + 80), RW(8));
wr32(c, (RW(4) + 84), RW(9));
wr32(c, (RW(4) + 88), RW(11));
wr32(c, (RW(4) + 92), RW(15));
wr32(c, (RW(4) + 96), RW(14));
wr32(c, (RW(4) + 100), RW(13));
wr32(c, (RW(4) + 136), RW(0));
wr32(c, (RW(4) + 16), RW(11));
wr32(c, (RW(4) + 140), RW(0));
wr16(c, (RW(4) + 28), (u16)RW(0));
wr16(c, (RW(4) + 36), (u16)RW(0));
wr16(c, (RW(4) + 38), (u16)RW(0));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(0));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0)); return;
}

void JP_F_00248E38(Ctx *c) { /* func_00248E38 */
ENTER(0x248e38);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x248e5c); SET64(18, RD(6) + RD(0)); JP_F_00248900(c);
SET64(2, rd16(c, (RW(16) + 0)));
SET64(4, RD(0) | 0x8000);
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(2, RD(2) | RD(3));
SET64(2, RD(2) & 0xffff);
{ int t = RD(2) != RD(4); SET64(5, RD(16) + RD(0)); if (t) goto L_00248EA0; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00248AA0(c); return; }
L_00248EA0:;
SET64(31, 0x248ea8); SET64(4, RD(16) + RD(0)); JP_F_00249F98(c);
{ int t = RD(2) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00248ED0; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00249D28(c); return; }
L_00248ED0:;
SET64(31, 0x248ed8); SET64(4, RD(16) + RD(0)); JP_F_0024A7A0(c);
{ int t = RD(2) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00248F00; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A1F0(c); return; }
L_00248F00:;
SET64(31, 0x248f08); SET64(4, RD(16) + RD(0)); JP_F_002474E8(c);
{ int t = RD(2) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00248F30; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00247660(c); return; }
L_00248F30:;
SET64(31, 0x248f38); SET64(4, RD(16) + RD(0)); JP_F_00247DD0(c);
{ int t = RD(2) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00248F60; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00247F38(c); return; }
L_00248F60:;
SET64(31, 0x248f68); SET64(4, RD(16) + RD(0)); JP_F_00246FE0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00248F90; }
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00246F30(c); return; }
L_00248F90:;
SET64(16, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + -1);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00248FB0(Ctx *c) { /* func_00248FB0 */
ENTER(0x248fb0);
wr32(c, (RW(4) + 124), RW(6));
wr32(c, (RW(4) + 120), RW(5)); return;
}

void JP_F_00248FC0(Ctx *c) { /* func_00248FC0 */
ENTER(0x248fc0);
wr32(c, (RW(4) + 132), RW(6));
wr32(c, (RW(4) + 128), RW(5)); return;
}

void JP_F_00248FD0(Ctx *c) { /* func_00248FD0 */
ENTER(0x248fd0);
SET64(2, (s32)rd32(c, (RW(4) + 60))); return;
}

void JP_F_00248FD8(Ctx *c) { /* func_00248FD8 */
ENTER(0x248fd8);
SET64(2, (s16)rd16(c, (RW(4) + 152))); return;
}

void JP_F_00248FE0(Ctx *c) { /* func_00248FE0 */
ENTER(0x248fe0);
SET64(2, (s32)rd32(c, (RW(4) + 20))); return;
}

void JP_F_00248FE8(Ctx *c) { /* func_00248FE8 */
ENTER(0x248fe8);
SET64(2, (s8)rd8(c, (RW(4) + 14)));
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(5, rd8(c, (RW(4) + 14))); if (t) goto L_00249004; }
SET64(3, (s32)rd32(c, (RW(4) + 232)));
{ int t = RD(3) != RD(0); SET32(2, RW(0) + 2); if (t) goto L_0024900C; }
L_00249004:;
SET32(2, RW(5) << 24);
SET32(2, RSW(2) >> 24);
L_0024900C:;
 return;
}

void JP_F_00249018(Ctx *c) { /* func_00249018 */
ENTER(0x249018);
SET64(2, (s8)rd8(c, (RW(4) + 13))); return;
}

void JP_F_00249020(Ctx *c) { /* func_00249020 */
ENTER(0x249020);
SET64(5, (s16)rd16(c, (RW(4) + 152)));
{ int t = RD(5) == RD(0); SET32(2, RW(0) + 16); if (t) goto L_00249078; }
SET32(2, RW(0) + 2);
{ int t = RD(5) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_00249058; }
SET64(3, (s16)rd16(c, (RW(4) + 156)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(5); SET64(4, RD(3) ^ 0x1); if (t) goto L_00249078; }
SET32(3, RW(0) + 16);
SET32(2, RW(0) + 8);
if (RD(4) != 0) SET64(2, RD(3)); return;
L_00249058:;
if (RD(5) != RD(2)) { SET32(2, RW(0) + 16); goto L_00249078; }
SET64(3, (s16)rd16(c, (RW(4) + 156)));
SET32(4, RW(0) + 16);
SET32(2, RW(0) + 4);
SET64(3, RD(3) ^ 0x2);
if (RD(3) != 0) SET64(2, RD(4)); return;
L_00249078:;
 return;
}

void JP_F_00249080(Ctx *c) { /* func_00249080 */
ENTER(0x249080);
SET64(2, (s32)rd32(c, (RW(4) + 16))); return;
}

void JP_F_00249088(Ctx *c) { /* func_00249088 */
ENTER(0x249088);
SET64(2, (s8)rd8(c, (RW(4) + 15))); return;
}

void JP_F_00249090(Ctx *c) { /* func_00249090 */
ENTER(0x249090);
SET64(2, (s32)rd32(c, (RW(4) + 24))); return;
}

void JP_F_00249098(Ctx *c) { /* func_00249098 */
ENTER(0x249098);
SET64(2, (s16)rd16(c, (RW(4) + 28))); return;
}

void JP_F_002490A0(Ctx *c) { /* func_002490A0 */
ENTER(0x2490a0);
SET64(2, (s32)rd32(c, (RW(4) + 32))); return;
}

void JP_F_002490A8(Ctx *c) { /* func_002490A8 */
ENTER(0x2490a8);
SET64(2, (s16)rd16(c, (RW(4) + 36))); return;
}

void JP_F_002490B0(Ctx *c) { /* func_002490B0 */
ENTER(0x2490b0);
SET64(2, (s32)rd32(c, (RW(4) + 40))); return;
}

void JP_F_002490B8(Ctx *c) { /* func_002490B8 */
ENTER(0x2490b8);
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002490C4; }
SET64(2, (s32)rd32(c, (RW(4) + 44)));
L_002490C4:;
 return;
}

void JP_F_002490D0(Ctx *c) { /* func_002490D0 */
ENTER(0x2490d0);
SET64(2, (s32)rd32(c, (RW(4) + 48))); return;
}

void JP_F_002490D8(Ctx *c) { /* func_002490D8 */
ENTER(0x2490d8);
SET64(2, (s32)rd32(c, (RW(4) + 52))); return;
}

void JP_F_002490E0(Ctx *c) { /* func_002490E0 */
ENTER(0x2490e0);
SET64(2, (s32)rd32(c, (RW(4) + 204))); return;
}

void JP_F_002490E8(Ctx *c) { /* func_002490E8 */
ENTER(0x2490e8);
SET64(2, (s16)rd16(c, (RW(4) + 224))); return;
}

void JP_F_002490F0(Ctx *c) { /* func_002490F0 */
ENTER(0x2490f0);
SET32(5, RW(5) << 1);
SET32(5, RW(5) + RW(4));
SET64(2, (s16)rd16(c, (RW(5) + 226))); return;
}

void JP_F_00249100(Ctx *c) { /* func_00249100 */
ENTER(0x249100);
SET32(2, RW(4) + 208); return;
}

void JP_F_00249108(Ctx *c) { /* func_00249108 */
ENTER(0x249108);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET32(5, RW(16) + 172);
SET32(6, RW(16) + 176);
SET64(31, 0x249128); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CA98(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET32(7, RW(16) + 170);
SET32(5, RW(16) + 166);
SET32(6, RW(16) + 168);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0025CAD0(c); return; }
}

void JP_F_00249148(Ctx *c) { /* func_00249148 */
ENTER(0x249148);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET32(5, RW(16) + 172);
SET32(6, RW(16) + 176);
SET64(31, 0x249168); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CA70(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(7, (s16)rd16(c, (RW(16) + 170)));
SET64(5, (s16)rd16(c, (RW(16) + 166)));
SET64(6, (s16)rd16(c, (RW(16) + 168)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025CAC0(c); return; }
}

void JP_F_00249188(Ctx *c) { /* func_00249188 */
ENTER(0x249188);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2491a8); SET64(4, RD(16) + RD(0)); JP_F_0012A4D8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(6, RD(29) + RD(0));
SET32(7, RW(29) + 2);
SET64(31, 0x2491c0); SET32(8, RW(29) + 4); JP_F_002485D0(c);
SET64(3, rd16(c, (RW(29) + 0)));
SET64(4, rd16(c, (RW(29) + 2)));
SET64(2, rd16(c, (RW(29) + 4)));
SET64(16, rd64(c, (RW(29) + 16)));
wr16(c, (RW(17) + 160), (u16)RW(3));
wr16(c, (RW(17) + 164), (u16)RW(2));
wr16(c, (RW(17) + 162), (u16)RW(4));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002491F0(Ctx *c) { /* func_002491F0 */
ENTER(0x2491f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x249204); SET64(16, RD(4) + RD(0)); JP_F_0012A4D8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(6, (s64)(s32)0x3f0000);
SET64(7, (s64)(s32)0x3f0000);
SET64(8, (s64)(s32)0x3f0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(2) + RD(0));
SET32(6, RW(6) + 2036);
SET32(7, RW(7) + 2038);
SET32(8, RW(8) + 2040);
SET32(29, RW(29) + 16); { JP_F_002485D0(c); return; }
}

void JP_F_00249238(Ctx *c) { /* func_00249238 */
ENTER(0x249238);
SET64(2, rd16(c, (RW(4) + 160)));
wr16(c, (RW(5) + 0), (u16)RW(2));
SET64(3, rd16(c, (RW(4) + 162)));
wr16(c, (RW(6) + 0), (u16)RW(3));
SET64(2, rd16(c, (RW(4) + 164)));
wr16(c, (RW(7) + 0), (u16)RW(2)); return;
}

void JP_F_00249258(Ctx *c) { /* func_00249258 */
ENTER(0x249258);
wr16(c, (RW(4) + 164), (u16)RW(7));
wr16(c, (RW(4) + 160), (u16)RW(5));
wr16(c, (RW(4) + 162), (u16)RW(6)); return;
}

void JP_F_00249268(Ctx *c) { /* func_00249268 */
ENTER(0x249268);
SET64(5, RD(5) & 0xff);
SET32(29, RW(29) + -48);
SET64(5, RD(5) < (u64)(s64)4);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(9) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(10) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(11, RD(4) + RD(0));
SET64(16, RD(8) + RD(0));
{ int t = RD(5) != RD(0); SET64(6, RD(6) & 0xff); if (t) goto L_00249340; }
SET64(2, RD(6) < (u64)(s64)16);
if (RD(2) != RD(0)) { SET64(2, RD(6) < (u64)(s64)8); goto L_002492E0; }
SET64(5, (s64)(s32)0x4b0000);
SET64(6, RD(7) + RD(0));
SET32(5, RW(5) + 3168);
SET64(31, 0x2492bc); SET64(4, RD(29) + RD(0)); JP_F_00129C30(c);
SET32(5, RW(0) + 8);
SET64(4, RD(29) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(31, 0x2492d4); SET64(8, RD(18) + RD(0)); JP_F_002485D0(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00249350;
L_002492E0:;
if (RD(2) != RD(0)) { wr16(c, (RW(16) + 0), (u16)RW(0)); goto L_00249344; }
SET64(2, (s32)rd32(c, (RW(11) + 160)));
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(11) + 160))); goto L_00249328; }
SET64(2, (s16)rd16(c, (RW(11) + 164)));
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(11) + 160))); goto L_00249328; }
SET64(2, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET64(3, rd16(c, (RW(2) + 2036)));
SET64(5, (s64)(s32)0x3f0000);
wr16(c, (RW(11) + 160), (u16)RW(3));
SET64(2, rd16(c, (RW(4) + 2038)));
wr16(c, (RW(11) + 162), (u16)RW(2));
SET64(3, rd16(c, (RW(5) + 2040)));
wr16(c, (RW(11) + 164), (u16)RW(3));
SET64(2, rd16(c, (RW(11) + 160)));
L_00249328:;
wr16(c, (RW(16) + 0), (u16)RW(2));
SET64(3, rd16(c, (RW(11) + 162)));
wr16(c, (RW(17) + 0), (u16)RW(3));
SET64(2, rd16(c, (RW(11) + 164)));
wr16(c, (RW(18) + 0), (u16)RW(2)); goto L_0024934C;
L_00249340:;
wr16(c, (RW(16) + 0), (u16)RW(0));
L_00249344:;
wr16(c, (RW(17) + 0), (u16)RW(0));
wr16(c, (RW(18) + 0), (u16)RW(0));
L_0024934C:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00249350:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00249368(Ctx *c) { /* func_00249368 */
ENTER(0x249368);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void JP_F_00249370(Ctx *c) { /* func_00249370 */
ENTER(0x249370);
SET64(7, RD(4) + RD(0));
SET64(2, (s16)rd16(c, (RW(7) + 152)));
{ int t = RD(2) != RD(0); SET64(8, RD(5) + RD(0)); if (t) goto L_002493A0; }
SET64(2, (s8)rd8(c, (RW(7) + 15)));
wr32(c, (RW(7) + 72), RW(8));
div_s(c, 0, RSW(6), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x249390); goto L_00249394; }
L_00249394:;
SET64(3, c->lo.d[0]);
wr32(c, (RW(7) + 116), RW(0)); goto L_002493D4;
L_002493A0:;
SET64(2, (s8)rd8(c, (RW(7) + 13)));
SET64(5, (s8)rd8(c, (RW(7) + 14)));
SET64(3, RSD(2) < (s64)0);
SET32(4, RW(2) + 7);
if (RD(3) != 0) SET64(2, RD(4));
wr32(c, (RW(7) + 72), RW(8));
SET32(2, RSW(2) >> 3);
mul_s(c, 0, 2, RSW(2), RSW(5));
div_s(c, 1, RSW(6), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x2493c8); goto L_002493CC; }
L_002493CC:;
wr32(c, (RW(7) + 116), RW(0));
SET64(3, c->lo.d[1]);
L_002493D4:;
wr32(c, (RW(7) + 76), RW(3));
wr32(c, (RW(7) + 244), RW(0));
wr32(c, (RW(7) + 144), RW(0));
wr32(c, (RW(7) + 148), RW(0));
wr32(c, (RW(7) + 248), RW(0)); return;
}

void JP_F_002493F0(Ctx *c) { /* func_002493F0 */
ENTER(0x2493f0);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00249400; }
wr32(c, (RW(4) + 4), RW(2));
L_00249400:;
 return;
}

void JP_F_00249408(Ctx *c) { /* func_00249408 */
ENTER(0x249408);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 232)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_00249430; }
SET64(3, (s32)rd32(c, (RW(2) + 2032)));
{ u32 t = RW(3); SET64(31, 0x249430);  rt_call(c, t); }
L_00249430:;
SET64(31, 0x249438); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CBE8(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00249450(Ctx *c) { /* func_00249450 */
ENTER(0x249450);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00249484; }
SET64(31, 0x249478); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CC10(c);
wr32(c, (RW(16) + 140), RW(0));
wr32(c, (RW(16) + 4), RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00249484:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00249490(Ctx *c) { /* func_00249490 */
ENTER(0x249490);
SET64(2, (s32)rd32(c, (RW(4) + 148))); return;
}

void JP_F_00249498(Ctx *c) { /* func_00249498 */
ENTER(0x249498);
SET64(2, (s32)rd32(c, (RW(4) + 144))); return;
}

void JP_F_002494A0(Ctx *c) { /* func_002494A0 */
ENTER(0x2494a0);
wr32(c, (RW(4) + 256), RW(6));
wr32(c, (RW(4) + 252), RW(5)); return;
}

void JP_F_002494B0(Ctx *c) { /* func_002494B0 */
ENTER(0x2494b0);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void JP_F_002494B8(Ctx *c) { /* func_002494B8 */
ENTER(0x2494b8);
SET32(29, RW(29) + -16);
SET32(2, RW(4) + 72);
wr64(c, (RW(29) + 8), RD(31));
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(8, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(2) + 32)));
SET64(16, (s32)rd32(c, (RW(4) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
SET32(7, RW(7) << 1);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2494f0); SET32(7, RW(3) + RW(7)); JP_F_0025CB38(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025CBC8(c); return; }
}

void JP_F_00249508(Ctx *c) { /* func_00249508 */
ENTER(0x249508);
SET32(29, RW(29) + -16);
SET32(3, RW(4) + 72);
wr64(c, (RW(29) + 8), RD(31));
SET32(5, RW(5) << 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(6, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
SET64(7, (s32)rd32(c, (RW(3) + 20)));
SET64(8, (s32)rd32(c, (RW(3) + 28)));
SET32(2, RW(2) << 1);
SET64(16, (s32)rd32(c, (RW(4) + 8)));
SET32(7, RW(7) + RW(2));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
SET32(8, RW(8) << 1);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24954c); SET32(8, RW(7) + RW(8)); JP_F_0025CB68(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025CBC8(c); return; }
}

void JP_F_00249560(Ctx *c) { /* func_00249560 */
ENTER(0x249560);
SET32(29, RW(29) + -16);
SET32(3, RW(4) + 72);
wr64(c, (RW(29) + 8), RD(31));
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
SET64(7, (s32)rd32(c, (RW(3) + 20)));
SET64(8, (s32)rd32(c, (RW(3) + 28)));
SET32(2, RW(2) << 1);
SET64(16, (s32)rd32(c, (RW(4) + 8)));
SET32(7, RW(7) + RW(2));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
SET32(8, RW(8) << 1);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2495a0); SET32(8, RW(7) + RW(8)); JP_F_0025CB98(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025CBC8(c); return; }
}

void JP_F_002495B8(Ctx *c) { /* func_002495B8 */
ENTER(0x2495b8);
SET32(29, RW(29) + -16);
SET64(24, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(24) + 72);
SET64(14, (s32)rd32(c, (RW(5) + 8)));
SET64(6, (s32)rd32(c, (RW(5) + 4)));
if (RD(14) == RD(0)) { rt_break(c, 0x2495d4); goto L_002495D8; }
L_002495D8:;
SET64(15, (s32)rd32(c, (RW(5) + 24)));
div_s(c, 0, RSW(6), RSW(14));
SET64(8, (s32)rd32(c, (RW(5) + 32)));
SET64(9, (s32)rd32(c, (RW(5) + 16)));
SET32(2, RW(15) - RW(8));
SET64(7, (s32)rd32(c, (RW(5) + 40)));
SET32(2, RW(2) + RW(9));
SET32(2, RW(2) + -1);
SET32(3, RW(7) + RW(9));
SET32(3, RW(3) + -1);
SET64(12, (s32)rd32(c, (RW(5) + 36)));
SET64(7, RSD(7) < RSD(12));
SET64(6, c->lo.d[0]);
div_s(c, 0, RSW(2), RSW(9));
SET64(10, RD(6) + RD(0));
SET64(2, c->lo.d[0]);
div_s(c, 0, RSW(3), RSW(9));
SET64(11, RD(2) + RD(0));
SET64(13, c->lo.d[0]);
SET64(5, c->hi.d[0]);
mul_s(c, 0, 3, RSW(11), RSW(9));
SET32(5, RW(9) - RW(5));
SET64(2, RSD(13) < RSD(11));
SET32(5, RW(5) + -1);
{ int t = RD(2) == RD(0); SET32(8, RW(8) + RW(3)); if (t) goto L_0024964C; }
SET32(2, RW(8) - RW(5));
SET64(2, RSD(2) < RSD(15));
SET32(11, RW(11) + RW(2));
L_0024964C:;
mul_s(c, 0, 2, RSW(7), RSW(5));
SET32(6, RW(0) + 2);
if (RD(9) == RD(0)) { rt_break(c, 0x249658); goto L_0024965C; }
L_0024965C:;
SET32(12, RW(2) + RW(12));
div_s(c, 0, RSW(12), RSW(9));
SET64(5, c->lo.d[0]);
SET64(2, RSD(5) < RSD(10));
if (RD(2) != 0) SET64(10, RD(5));
SET64(3, RSD(13) < RSD(10));
if (RD(3) != 0) SET64(10, RD(13));
SET64(2, RSD(11) < RSD(10));
{ int t = RD(14) != RD(6); if (RD(2) != 0) SET64(10, RD(11)); if (t) goto L_00249698; }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(10) + RD(0));
SET32(29, RW(29) + 16); { JP_F_00249508(c); return; }
L_00249698:;
SET64(2, (s32)rd32(c, (RW(24) + 232)));
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_002496B0; }
SET64(5, RD(10) + RD(0));
SET32(29, RW(29) + 16); { JP_F_00249560(c); return; }
L_002496B0:;
SET64(5, RD(10) + RD(0));
SET32(29, RW(29) + 16); { JP_F_002494B8(c); return; }
}

void JP_F_002496C0(Ctx *c) { /* func_002496C0 */
ENTER(0x2496c0);
{ int t = RSD(6) <= 0;  if (t) goto L_002496E4; }
L_002496C8:;
SET64(2, rd16(c, (RW(5) + 0)));
SET32(5, RW(5) + 2);
SET32(6, RW(6) + -1);
wr16(c, (RW(4) + 0), (u16)RW(2));
{ int t = RSD(6) > 0; SET32(4, RW(4) + 2); if (t) { POLL(); goto L_002496C8; } }
L_002496E4:;
 return;
}

void JP_F_002496F0(Ctx *c) { /* func_002496F0 */
ENTER(0x2496f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
SET32(5, RW(18) << 1);
wr64(c, (RW(29) + 0), RD(16));
SET32(5, RW(17) + RW(5));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x249728); SET64(6, RD(19) + RD(0)); JP_F_002496C0(c);
SET32(4, RW(16) << 1);
SET32(16, RW(16) + RW(18));
SET64(18, rd64(c, (RW(29) + 16)));
SET32(16, RW(16) << 1);
SET32(4, RW(17) + RW(4));
SET32(5, RW(17) + RW(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_002496C0(c); return; }
}

void JP_F_00249760(Ctx *c) { /* func_00249760 */
ENTER(0x249760);
SET32(29, RW(29) + -16);
SET32(5, RW(5) << 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(7) + RD(0));
SET32(5, RW(4) + RW(5));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002496C0(c); return; }
}

void JP_F_00249780(Ctx *c) { /* func_00249780 */
ENTER(0x249780);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 56), RD(21));
wr64(c, (RW(29) + 64), RD(22));
SET64(22, RD(4) + RD(0));
wr64(c, (RW(29) + 80), RD(30));
SET32(20, RW(22) + 72);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 72), RD(23));
wr64(c, (RW(29) + 88), RD(31));
SET64(17, (s32)rd32(c, (RW(20) + 16)));
SET64(18, (s32)rd32(c, (RW(20) + 40)));
if (RD(17) == RD(0)) { rt_break(c, 0x2497c0); goto L_002497C4; }
L_002497C4:;
SET32(18, RW(18) + RW(17));
SET64(2, (s32)rd32(c, (RW(22) + 68)));
SET32(18, RW(18) + -1);
SET64(23, (s32)rd32(c, (RW(22) + 64)));
div_s(c, 0, RSW(18), RSW(17));
SET64(4, (s32)rd32(c, (RW(22) + 8)));
SET64(30, (s32)rd32(c, (RW(20) + 20)));
wr32(c, (RW(29) + 0), RW(2));
SET64(19, (s32)rd32(c, (RW(20) + 12)));
SET64(16, c->hi.d[0]);
SET64(18, c->lo.d[0]);
SET64(31, 0x2497f8); SET64(21, (s32)rd32(c, (RW(20) + 32))); JP_F_0025CC28(c);
SET64(3, (s32)rd32(c, (RW(20) + 8)));
SET32(16, RW(17) - RW(16));
mul_s(c, 0, 17, RSW(2), RSW(17));
mul_s(c, 0, 18, RSW(18), RSW(3));
SET32(16, RW(16) + -1);
mul_s(c, 1, 19, RSW(2), RSW(19));
if (RD(3) == RD(0)) { rt_break(c, 0x249814); goto L_00249818; }
L_00249818:;
SET32(4, RW(0) + 2);
div_s(c, 0, RSW(17), RSW(3));
SET64(2, RSD(2) < RSD(18));
wr32(c, (RW(22) + 148), RW(19));
SET64(17, c->lo.d[0]);
SET32(16, RW(17) - RW(16));
if (RD(2) != 0) SET64(16, RD(17));
SET32(21, RW(21) + RW(16));
wr32(c, (RW(22) + 144), RW(16));
SET64(2, RSD(21) < RSD(23));
{ int t = RD(2) != RD(0); SET32(21, RW(21) - RW(23)); if (t) goto L_002498D8; }
SET64(2, RD(3) + RD(0));
{ int t = RD(2) == RD(4); SET64(4, RD(30) + RD(0)); if (t) goto L_00249860; }
SET64(2, (s32)rd32(c, (RW(22) + 232)));
{ int t = RD(2) == RD(0); SET64(30, rd64(c, (RW(29) + 80))); if (t) goto L_002498A0; }
L_00249860:;
SET64(30, rd64(c, (RW(29) + 80)));
SET64(5, RD(23) + RD(0));
SET64(23, rd64(c, (RW(29) + 72)));
SET64(7, RD(21) + RD(0));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); { JP_F_002496F0(c); return; }
L_002498A0:;
SET64(5, RD(23) + RD(0));
SET64(23, rd64(c, (RW(29) + 72)));
SET64(7, RD(21) + RD(0));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); { JP_F_00249760(c); return; }
L_002498D8:;
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

void JP_F_00249908(Ctx *c) { /* func_00249908 */
ENTER(0x249908);
SET32(29, RW(29) + -48);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
if (RD(3) != RD(2)) { SET32(2, RW(0) + 2); goto L_0024997C; }
SET64(31, 0x24993c); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CB30(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_00249978; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x24995c); SET32(7, RW(16) + 112); rt_call(c, t); }
SET64(31, 0x249964); SET64(4, RD(16) + RD(0)); JP_F_002495B8(c);
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 4), RW(2));
SET32(3, RW(0) + 2); goto L_0024997C;
L_00249978:;
SET32(2, RW(0) + 2);
L_0024997C:;
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00249A40; }
SET64(31, 0x24998c); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CC40(c);
SET64(31, 0x249994); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CB30(c);
SET32(3, RW(0) + 3);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00249A40; }
SET64(2, (s32)rd32(c, (RW(16) + 232)));
{ int t = RD(2) == RD(0);  if (t) goto L_00249A10; }
SET64(31, 0x2499b4); SET64(17, (s32)rd32(c, (RW(16) + 8))); JP_F_0024A8C0(c);
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET32(2, RW(2) << 5);
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00249A08; }
SET64(19, (s64)(s32)0x3f0000);
SET64(6, (s32)rd32(c, (RW(17) + 32)));
L_002499D0:;
SET32(7, RW(18) << 1);
SET64(2, (s32)rd32(c, (RW(17) + 36)));
SET64(4, RD(16) + RD(0));
SET32(6, RW(7) + RW(6));
SET64(3, (s32)rd32(c, (RW(19) + 2028)));
SET64(5, (s16)rd16(c, (RW(6) + 0)));
SET32(7, RW(2) + RW(7));
{ u32 t = RW(3); SET64(31, 0x2499f4); SET32(18, RW(18) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET32(2, RW(2) << 5);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(6, (s32)rd32(c, (RW(17) + 32))); { POLL(); goto L_002499D0; } }
L_00249A08:;
SET64(31, 0x249a10);  JP_F_0024A8D8(c);
L_00249A10:;
SET64(31, 0x249a18); SET64(4, RD(16) + RD(0)); JP_F_00249780(c);
SET64(31, 0x249a20); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CC10(c);
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x249a34); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00249A40:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00249A58(Ctx *c) { /* func_00249A58 */
ENTER(0x249a58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s16)rd16(c, (RW(16) + 152)));
if (RD(3) != RD(0)) { SET32(2, RW(0) + 10); goto L_00249A88; }
SET64(31, 0x249a7c);  JP_F_00249908(c);
SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00249B14;
L_00249A88:;
if (RD(3) != RD(2)) { SET32(2, RW(0) + 2); goto L_00249AA0; }
SET64(31, 0x249a98);  JP_F_00247100(c);
SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00249B14;
L_00249AA0:;
if (RD(3) != RD(2)) { SET32(2, RW(0) + 3); goto L_00249AB8; }
SET64(31, 0x249ab0);  JP_F_00249E20(c);
SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00249B14;
L_00249AB8:;
if (RD(3) != RD(2)) { SET32(2, RW(0) + 4); goto L_00249AD0; }
SET64(31, 0x249ac8);  JP_F_00247A90(c);
SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00249B14;
L_00249AD0:;
if (RD(3) != RD(2)) { SET32(2, RW(0) + 1); goto L_00249AE8; }
SET64(31, 0x249ae0);  JP_F_002484F8(c);
SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00249B14;
L_00249AE8:;
if (RD(3) != RD(2)) { SET32(2, RW(0) + 15); goto L_00249B00; }
SET64(31, 0x249af8);  JP_F_0024A808(c);
SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00249B14;
L_00249B00:;
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00249B14; }
SET64(31, 0x249b10);  JP_F_00246F00(c);
SET64(2, (s32)rd32(c, (RW(16) + 252)));
L_00249B14:;
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00249B30; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00249B40(c); return; }
L_00249B30:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00249B40(Ctx *c) { /* func_00249B40 */
ENTER(0x249b40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s8)rd8(c, (RW(16) + 14)));
SET64(6, (s32)rd32(c, (RW(16) + 144)));
SET64(3, (s32)rd32(c, (RW(16) + 244)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
mul_s(c, 0, 6, RSW(6), RSW(2));
SET64(7, (s32)rd32(c, (RW(16) + 252)));
SET32(5, RW(5) - RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 256)));
SET64(3, (s64)(s32)0x7fff0000);
SET64(3, RD(3) | 0xffff);
SET32(3, RW(3) + RW(5));
SET64(2, RSD(5) < (s64)0);
if (RD(2) != 0) SET64(5, RD(3));
{ u32 t = RW(7); SET64(31, 0x249b8c); SET32(6, RW(6) << 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 148)));
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 244), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00249BA8(Ctx *c) { /* func_00249BA8 */
ENTER(0x249ba8);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 2048);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
L_00249BD0:;
SET64(2, (s16)rd16(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00249BE8; }
SET64(31, 0x249be4); SET64(4, RD(16) + RD(0)); JP_F_00249A58(c);
SET32(17, RW(17) + -1);
L_00249BE8:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 260); if (t) { POLL(); goto L_00249BD0; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00249C08(Ctx *c) { /* func_00249C08 */
ENTER(0x249c08);
SET64(12, RD(4) + RD(0));
SET32(15, RW(0) + 1);
SET64(2, rd8(c, (RW(12) + 7)));
SET64(5, (s32)rd32(c, (RW(29) + 16)));
SET32(2, RW(2) << 4);
SET64(13, (s32)rd32(c, (RW(29) + 8)));
wr16(c, (RW(6) + 0), (u16)RW(2));
SET64(14, (s32)rd32(c, (RW(29) + 0)));
SET64(2, rd8(c, (RW(12) + 9)));
SET64(2, RD(2) & 0x3);
SET32(2, RW(2) + 1);
wr8(c, (RW(10) + 0), (u8)RW(2));
SET64(3, rd16(c, (RW(12) + 42)));
wr32(c, (RW(11) + 0), RW(3));
SET64(4, rd8(c, (RW(12) + 8)));
{ int t = RD(4) == RD(15); SET64(2, RSD(4) < (s64)2); if (t) goto L_00249CA8; }
if (RD(2) == RD(0)) { SET64(2, RSD(4) < (s64)4); goto L_00249C68; }
if (RD(4) == RD(0)) { SET32(3, RW(0) + 16); goto L_00249C78; }
SET32(3, RW(0) + 2); goto L_00249CF0;
L_00249C68:;
if (RD(2) == RD(0)) { SET32(3, RW(0) + 2); goto L_00249CF0; }
SET32(3, RW(0) + 4); goto L_00249CC8;
L_00249C78:;
wr8(c, (RW(8) + 0), (u8)RW(3));
SET64(2, (s8)rd8(c, (RW(10) + 0)));
SET32(2, RW(2) << 1);
wr8(c, (RW(9) + 0), (u8)RW(2));
wr32(c, (RW(13) + 0), RW(15));
wr16(c, (RW(5) + 0), (u16)RW(0));
SET64(2, (s32)rd32(c, (RW(12) + 12)));
SET32(3, RW(2) >> 31);
SET32(2, RW(2) + RW(3));
SET32(2, RSW(2) >> 1); goto L_00249CE8;
L_00249CA8:;
SET32(2, RW(0) + 8);
wr8(c, (RW(8) + 0), (u8)RW(2));
SET64(3, (s8)rd8(c, (RW(10) + 0)));
wr8(c, (RW(9) + 0), (u8)RW(3));
wr32(c, (RW(13) + 0), RW(4));
wr16(c, (RW(5) + 0), (u16)RW(4));
SET64(2, (s32)rd32(c, (RW(12) + 12))); goto L_00249CE8;
L_00249CC8:;
SET32(4, RW(0) + 2);
wr8(c, (RW(8) + 0), (u8)RW(3));
SET64(2, (s8)rd8(c, (RW(10) + 0)));
wr8(c, (RW(9) + 0), (u8)RW(2));
wr32(c, (RW(13) + 0), RW(4));
wr16(c, (RW(5) + 0), (u16)RW(4));
SET64(2, (s32)rd32(c, (RW(12) + 12)));
SET32(2, RW(2) << 1);
L_00249CE8:;
wr32(c, (RW(14) + 0), RW(2));
SET32(3, RW(0) + 2);
L_00249CF0:;
SET32(4, RW(0) + 1);
wr8(c, (RW(9) + 0), (u8)RW(3));
SET32(5, RW(0) + 16);
wr32(c, (RW(13) + 0), RW(4));
SET32(6, RW(0) + -1);
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(12) + 12)));
SET32(4, RW(3) >> 31);
SET32(3, RW(3) + RW(4));
SET32(3, RSW(3) >> 1);
wr32(c, (RW(14) + 0), RW(3));
wr8(c, (RW(8) + 0), (u8)RW(5));
wr8(c, (RW(7) + 0), (u8)RW(6)); return;
}

void JP_F_00249D28(Ctx *c) { /* func_00249D28 */
ENTER(0x249d28);
SET32(29, RW(29) + -96);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET32(17, RW(16) + 14);
wr64(c, (RW(29) + 64), RD(18));
SET32(18, RW(16) + 16);
wr64(c, (RW(29) + 72), RD(19));
SET32(19, RW(16) + 15);
wr64(c, (RW(29) + 80), RD(31));
SET64(4, RD(5) + RD(0));
wr16(c, (RW(16) + 2), (u16)RW(2));
SET32(2, RW(16) + 24);
SET64(5, RD(6) + RD(0));
SET32(6, RW(29) + 32);
SET32(3, RW(16) + 156);
SET32(7, RW(16) + 12);
SET32(8, RW(16) + 13);
SET64(9, RD(19) + RD(0));
SET64(10, RD(17) + RD(0));
SET32(11, RW(16) + 20);
wr32(c, (RW(29) + 0), RW(2));
wr32(c, (RW(29) + 16), RW(3));
SET64(31, 0x249d90); wr32(c, (RW(29) + 8), RW(18)); JP_F_00249C08(c);
if (RSD(2) >= 0) { wr32(c, (RW(16) + 52), RW(0)); goto L_00249DA0; }
SET64(2, RD(0) + RD(0)); goto L_00249E00;
L_00249DA0:;
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 44), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr16(c, (RW(16) + 28), (u16)RW(0));
wr16(c, (RW(16) + 38), (u16)RW(0));
wr16(c, (RW(16) + 36), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(16) + 60)));
SET64(3, (s8)rd8(c, (RW(17) + 0)));
SET64(6, (s32)rd32(c, (RW(16) + 64)));
wr32(c, (RW(16) + 80), RW(3));
SET32(3, RW(0) + 2);
SET64(7, (s32)rd32(c, (RW(16) + 68)));
SET64(4, (s8)rd8(c, (RW(19) + 0)));
SET64(2, (s16)rd16(c, (RW(29) + 32)));
wr32(c, (RW(16) + 84), RW(4));
wr16(c, (RW(16) + 152), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(16) + 92), RW(5));
wr32(c, (RW(16) + 96), RW(6));
wr32(c, (RW(16) + 88), RW(3));
wr32(c, (RW(16) + 100), RW(7));
wr32(c, (RW(16) + 140), RW(0));
wr32(c, (RW(16) + 136), RW(0));
L_00249E00:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void JP_F_00249E20(Ctx *c) { /* func_00249E20 */
ENTER(0x249e20);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_00249F54; }
SET64(31, 0x249e54); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CB30(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_00249F54; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x249e74); SET32(7, RW(16) + 112); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(7, (s32)rd32(c, (RW(17) + 32)));
SET32(6, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(17) + 36)));
SET32(9, RW(4) - RW(7));
SET64(4, (s8)rd8(c, (RW(16) + 14)));
SET64(2, RSD(3) < RSD(9));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
if (RD(2) != 0) SET64(9, RD(3));
SET32(3, RW(7) << 1);
SET64(11, (s32)rd32(c, (RW(17) + 20)));
SET64(2, RSD(5) < RSD(9));
if (RD(2) != 0) SET64(9, RD(5));
SET32(10, RW(11) + RW(3));
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_00249F08; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 1);
{ int t = RSD(9) <= 0; SET32(11, RW(11) + RW(2)); if (t) goto L_00249F34; }
SET64(7, RD(18) + RD(0));
L_00249ED0:;
SET32(3, RW(8) << 1);
SET32(8, RW(8) + 1);
SET64(5, rd16(c, (RW(7) + 0)));
SET32(4, RW(3) + RW(10));
SET64(6, RSD(8) < RSD(9));
SET32(3, RW(3) + RW(11));
wr16(c, (RW(4) + 0), (u16)RW(5));
SET64(2, rd16(c, (RW(7) + 2)));
SET32(7, RW(7) + 4);
{ int t = RD(6) != RD(0); wr16(c, (RW(3) + 0), (u16)RW(2)); if (t) { POLL(); goto L_00249ED0; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_00249F34;
L_00249F08:;
{ int t = RSD(9) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00249F34; }
L_00249F10:;
SET32(2, RW(8) << 1);
SET32(8, RW(8) + 1);
SET32(3, RW(2) + RW(18));
SET32(2, RW(2) + RW(10));
SET64(4, rd16(c, (RW(3) + 0)));
SET64(5, RSD(8) < RSD(9));
{ int t = RD(5) != RD(0); wr16(c, (RW(2) + 0), (u16)RW(4)); if (t) { POLL(); goto L_00249F10; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_00249F34:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(9), RSW(2));
wr32(c, (RW(16) + 144), RW(9));
SET32(2, RW(2) << 1);
wr32(c, (RW(16) + 148), RW(2));
L_00249F54:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00249F80; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x249f74); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00249F80:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00249F98(Ctx *c) { /* func_00249F98 */
ENTER(0x249f98);
SET64(5, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 4);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x249fb0); SET32(5, RW(5) + 3176); JP_F_00127180(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00249FC0(Ctx *c) { /* func_00249FC0 */
ENTER(0x249fc0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(0) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(8) + RD(0));
wr64(c, (RW(29) + 64), RD(22));
SET64(22, RD(10) + RD(0));
wr64(c, (RW(29) + 72), RD(23));
SET64(23, RD(9) + RD(0));
wr64(c, (RW(29) + 80), RD(30));
SET64(30, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
wr64(c, (RW(29) + 88), RD(31));
wr32(c, (RW(29) + 0), RW(7));
wr32(c, (RW(29) + 4), RW(11));
L_0024A018:;
SET64(2, RSD(16) < RSD(18));
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(17) + 6208))); if (t) goto L_0024A038; }
SET32(4, RW(19) + RW(16));
SET64(31, 0x24a030); SET32(6, RW(0) + 4); JP_F_00127180(c);
if (RD(2) != RD(0)) { SET32(16, RW(16) + 1); { POLL(); goto L_0024A018; } }
L_0024A038:;
{ int t = RD(16) == RD(18); SET32(2, RW(0) + -1); if (t) goto L_0024A1C0; }
SET64(3, RD(16) & 0x3);
if (RD(3) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0024A1C4; }
SET32(4, RW(19) + RW(16));
SET32(17, RW(4) + 8);
SET64(3, (s16)rd16(c, (RW(17) + 0)));
SET64(3, RSD(3) < (s64)2);
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0024A1C4; }
SET64(16, RD(0) + RD(0));
SET64(21, (s64)(s32)0x3f0000);
L_0024A070:;
SET64(2, RSD(16) < RSD(18));
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(21) + 6212))); if (t) goto L_0024A090; }
SET32(4, RW(19) + RW(16));
SET64(31, 0x24a088); SET32(6, RW(0) + 4); JP_F_00127180(c);
if (RD(2) != RD(0)) { SET32(16, RW(16) + 1); { POLL(); goto L_0024A070; } }
L_0024A090:;
{ int t = RD(16) == RD(18); SET32(2, RW(0) + -1); if (t) goto L_0024A1C0; }
SET32(2, RW(16) + 8);
SET32(3, RW(19) + RW(16));
wr16(c, (RW(30) + 0), (u16)RW(2));
SET32(4, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(3) + 4)));
SET32(7, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(8, RW(0) + 16);
wr8(c, (RW(2) + 0), (u8)RW(4));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET64(3, rd8(c, (RW(17) + 2)));
wr32(c, (RW(4) + 0), RW(2));
wr8(c, (RW(22) + 0), (u8)RW(3));
SET64(2, rd8(c, (RW(17) + 14)));
wr8(c, (RW(20) + 0), (u8)RW(2));
SET64(3, rd8(c, (RW(17) + 12)));
SET32(2, RW(3) << 24);
wr8(c, (RW(23) + 0), (u8)RW(3));
SET32(2, RSW(2) >> 24);
div_s(c, 0, RSW(6), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x24a0f0); goto L_0024A0F4; }
L_0024A0F4:;
SET64(2, (s32)rd32(c, (RW(29) + 96)));
SET64(3, c->lo.d[0]);
wr32(c, (RW(2) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(29) + 104)));
wr32(c, (RW(4) + 0), RW(7));
SET64(5, (s8)rd8(c, (RW(20) + 0)));
{ int t = RD(5) != RD(8); SET64(3, rd8(c, (RW(20) + 0))); if (t) goto L_0024A120; }
SET64(2, (s32)rd32(c, (RW(29) + 112)));
wr16(c, (RW(2) + 0), (u16)RW(0)); goto L_0024A188;
L_0024A120:;
SET32(2, RW(0) + 8);
{ int t = RD(5) != RD(2); SET32(2, RW(0) + 4); if (t) goto L_0024A138; }
SET64(4, (s32)rd32(c, (RW(29) + 112)));
wr16(c, (RW(4) + 0), (u16)RW(7)); goto L_0024A188;
L_0024A138:;
{ int t = RD(5) != RD(2); SET32(4, RW(0) + 2); if (t) goto L_0024A18C; }
SET64(2, (s8)rd8(c, (RW(22) + 0)));
SET32(3, RW(6) >> 31);
SET32(3, RW(6) + RW(3));
SET32(2, RW(2) << 1);
SET32(3, RSW(3) >> 1);
wr8(c, (RW(23) + 0), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 104)));
wr32(c, (RW(2) + 0), RW(5));
SET64(2, (s8)rd8(c, (RW(22) + 0)));
div_s(c, 0, RSW(3), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x24a16c); goto L_0024A170; }
L_0024A170:;
SET64(2, (s32)rd32(c, (RW(29) + 96)));
SET64(3, c->lo.d[0]);
wr32(c, (RW(2) + 0), RW(3));
wr8(c, (RW(20) + 0), (u8)RW(8));
SET64(2, (s32)rd32(c, (RW(29) + 112)));
wr16(c, (RW(2) + 0), (u16)RW(4));
L_0024A188:;
SET64(3, rd8(c, (RW(20) + 0)));
L_0024A18C:;
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_0024A1C0; }
SET64(3, (s8)rd8(c, (RW(23) + 0)));
{ int t = RD(3) == RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0024A1C4; }
SET64(3, rd8(c, (RW(22) + 0)));
SET32(3, RW(3) + -1);
SET64(3, RD(3) < (u64)(s64)2);
{ int t = RD(3) == RD(0); SET64(17, rd64(c, (RW(29) + 24))); if (t) goto L_0024A1C8; }
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) != 0) SET64(2, RD(0));
L_0024A1C0:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0024A1C4:;
SET64(17, rd64(c, (RW(29) + 24)));
L_0024A1C8:;
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

void JP_F_0024A1F0(Ctx *c) { /* func_0024A1F0 */
ENTER(0x24a1f0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 80), RD(20));
SET32(20, RW(0) + 1);
wr64(c, (RW(29) + 56), RD(17));
SET32(17, RW(16) + 14);
wr64(c, (RW(29) + 64), RD(18));
SET32(18, RW(16) + 16);
wr64(c, (RW(29) + 72), RD(19));
SET32(19, RW(16) + 15);
wr64(c, (RW(29) + 88), RD(31));
SET64(4, RD(5) + RD(0));
wr16(c, (RW(16) + 2), (u16)RW(20));
SET32(2, RW(16) + 24);
SET64(5, RD(6) + RD(0));
SET32(6, RW(29) + 32);
SET32(3, RW(16) + 156);
SET32(7, RW(16) + 12);
SET32(8, RW(16) + 13);
SET64(9, RD(19) + RD(0));
SET64(10, RD(17) + RD(0));
SET32(11, RW(16) + 20);
wr32(c, (RW(29) + 0), RW(2));
wr32(c, (RW(29) + 16), RW(3));
SET64(31, 0x24a25c); wr32(c, (RW(29) + 8), RW(18)); JP_F_00249FC0(c);
if (RSD(2) >= 0) { wr32(c, (RW(16) + 52), RW(0)); goto L_0024A270; }
SET64(2, RD(0) + RD(0)); goto L_0024A2CC;
L_0024A270:;
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 44), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr16(c, (RW(16) + 28), (u16)RW(0));
wr16(c, (RW(16) + 38), (u16)RW(0));
wr16(c, (RW(16) + 36), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(16) + 60)));
SET64(3, (s8)rd8(c, (RW(17) + 0)));
SET64(6, (s32)rd32(c, (RW(16) + 64)));
wr32(c, (RW(16) + 80), RW(3));
SET64(7, (s32)rd32(c, (RW(16) + 68)));
SET64(4, (s8)rd8(c, (RW(19) + 0)));
SET64(2, (s16)rd16(c, (RW(29) + 32)));
wr32(c, (RW(16) + 84), RW(4));
wr16(c, (RW(16) + 152), (u16)RW(20));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(16) + 92), RW(5));
wr32(c, (RW(16) + 96), RW(6));
wr32(c, (RW(16) + 88), RW(3));
wr32(c, (RW(16) + 100), RW(7));
wr32(c, (RW(16) + 140), RW(0));
wr32(c, (RW(16) + 136), RW(0));
L_0024A2CC:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void JP_F_0024A2F0(Ctx *c) { /* func_0024A2F0 */
ENTER(0x24a2f0);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_0024A424; }
SET64(31, 0x24a324); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CB30(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_0024A424; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x24a344); SET32(7, RW(16) + 112); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(7, (s32)rd32(c, (RW(17) + 32)));
SET32(6, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(17) + 36)));
SET32(9, RW(4) - RW(7));
SET64(4, (s8)rd8(c, (RW(16) + 14)));
SET64(2, RSD(3) < RSD(9));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
if (RD(2) != 0) SET64(9, RD(3));
SET32(3, RW(7) << 1);
SET64(11, (s32)rd32(c, (RW(17) + 20)));
SET64(2, RSD(5) < RSD(9));
if (RD(2) != 0) SET64(9, RD(5));
SET32(10, RW(11) + RW(3));
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_0024A3D8; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 1);
{ int t = RSD(9) <= 0; SET32(11, RW(11) + RW(2)); if (t) goto L_0024A404; }
SET64(7, RD(18) + RD(0));
L_0024A3A0:;
SET32(3, RW(8) << 1);
SET32(8, RW(8) + 1);
SET64(5, rd16(c, (RW(7) + 0)));
SET32(4, RW(3) + RW(10));
SET64(6, RSD(8) < RSD(9));
SET32(3, RW(3) + RW(11));
wr16(c, (RW(4) + 0), (u16)RW(5));
SET64(2, rd16(c, (RW(7) + 2)));
SET32(7, RW(7) + 4);
{ int t = RD(6) != RD(0); wr16(c, (RW(3) + 0), (u16)RW(2)); if (t) { POLL(); goto L_0024A3A0; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_0024A404;
L_0024A3D8:;
{ int t = RSD(9) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_0024A404; }
L_0024A3E0:;
SET32(2, RW(8) << 1);
SET32(8, RW(8) + 1);
SET32(3, RW(2) + RW(18));
SET32(2, RW(2) + RW(10));
SET64(4, rd16(c, (RW(3) + 0)));
SET64(5, RSD(8) < RSD(9));
{ int t = RD(5) != RD(0); wr16(c, (RW(2) + 0), (u16)RW(4)); if (t) { POLL(); goto L_0024A3E0; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_0024A404:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(9), RSW(2));
wr32(c, (RW(16) + 144), RW(9));
SET32(2, RW(2) << 1);
wr32(c, (RW(16) + 148), RW(2));
L_0024A424:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024A450; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x24a444); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_0024A450:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024A468(Ctx *c) { /* func_0024A468 */
ENTER(0x24a468);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_0024A5BC; }
SET64(31, 0x24a49c); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CB30(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_0024A5BC; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x24a4bc); SET32(7, RW(16) + 112); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(7, (s32)rd32(c, (RW(17) + 32)));
SET32(6, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(17) + 36)));
SET32(9, RW(4) - RW(7));
SET64(4, (s8)rd8(c, (RW(16) + 14)));
SET64(2, RSD(3) < RSD(9));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
if (RD(2) != 0) SET64(9, RD(3));
SET32(3, RW(7) << 1);
SET64(10, (s32)rd32(c, (RW(17) + 20)));
SET64(2, RSD(5) < RSD(9));
if (RD(2) != 0) SET64(9, RD(5));
SET32(11, RW(10) + RW(3));
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_0024A568; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 1);
{ int t = RSD(9) <= 0; SET32(12, RW(10) + RW(2)); if (t) goto L_0024A5A0; }
SET64(7, RD(18) + RD(0));
SET64(10, RD(0) | 0xff80);
L_0024A520:;
SET64(3, rd8(c, (RW(7) + 0)));
SET32(4, RW(8) << 1);
SET32(5, RW(4) + RW(11));
SET32(4, RW(4) + RW(12));
SET32(3, RW(3) + RW(10));
SET32(8, RW(8) + 1);
SET32(3, RW(3) << 8);
SET64(6, RSD(8) < RSD(9));
wr16(c, (RW(5) + 0), (u16)RW(3));
SET64(2, rd8(c, (RW(7) + 1)));
SET32(7, RW(7) + 2);
SET32(2, RW(2) + RW(10));
SET32(2, RW(2) << 8);
{ int t = RD(6) != RD(0); wr16(c, (RW(4) + 0), (u16)RW(2)); if (t) { POLL(); goto L_0024A520; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_0024A5A0;
L_0024A568:;
{ int t = RSD(9) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_0024A5A0; }
SET64(5, RD(11) + RD(0));
SET64(6, RD(0) | 0xff80);
L_0024A578:;
SET32(2, RW(18) + RW(8));
SET32(8, RW(8) + 1);
SET64(3, rd8(c, (RW(2) + 0)));
SET64(4, RSD(8) < RSD(9));
SET32(3, RW(3) + RW(6));
SET32(3, RW(3) << 8);
wr16(c, (RW(5) + 0), (u16)RW(3));
{ int t = RD(4) != RD(0); SET32(5, RW(5) + 2); if (t) { POLL(); goto L_0024A578; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_0024A5A0:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(9), RSW(2));
wr32(c, (RW(16) + 144), RW(9));
wr32(c, (RW(16) + 148), RW(2));
L_0024A5BC:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024A5E8; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x24a5dc); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_0024A5E8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024A600(Ctx *c) { /* func_0024A600 */
ENTER(0x24a600);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_0024A75C; }
SET64(31, 0x24a634); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025CB30(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_0024A75C; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x24a654); SET32(7, RW(16) + 112); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(7, (s32)rd32(c, (RW(17) + 32)));
SET32(6, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(17) + 36)));
SET32(9, RW(4) - RW(7));
SET64(4, (s8)rd8(c, (RW(16) + 14)));
SET64(2, RSD(3) < RSD(9));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
if (RD(2) != 0) SET64(9, RD(3));
SET32(3, RW(7) << 1);
SET64(11, (s32)rd32(c, (RW(17) + 20)));
SET64(2, RSD(5) < RSD(9));
if (RD(2) != 0) SET64(9, RD(5));
SET32(10, RW(11) + RW(3));
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_0024A700; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 1);
{ int t = RSD(9) <= 0; SET32(11, RW(11) + RW(2)); if (t) goto L_0024A73C; }
SET64(7, RD(18) + RD(0));
L_0024A6B0:;
SET64(2, rd8(c, (RW(7) + 2)));
SET32(4, RW(8) << 1);
SET64(3, rd8(c, (RW(7) + 0)));
SET32(5, RW(4) + RW(10));
SET32(2, RW(2) << 8);
SET32(8, RW(8) + 1);
SET64(3, RD(3) | RD(2));
SET32(4, RW(4) + RW(11));
wr16(c, (RW(5) + 0), (u16)RW(3));
SET64(6, RSD(8) < RSD(9));
SET64(2, rd8(c, (RW(7) + 3)));
SET64(3, rd8(c, (RW(7) + 1)));
SET32(7, RW(7) + 4);
SET32(2, RW(2) << 8);
SET64(3, RD(3) | RD(2));
{ int t = RD(6) != RD(0); wr16(c, (RW(4) + 0), (u16)RW(3)); if (t) { POLL(); goto L_0024A6B0; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_0024A73C;
L_0024A700:;
{ int t = RSD(9) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_0024A73C; }
SET64(5, RD(18) + RD(0));
SET64(6, RD(10) + RD(0));
L_0024A710:;
SET64(2, rd8(c, (RW(5) + 1)));
SET32(8, RW(8) + 1);
SET64(3, rd8(c, (RW(5) + 0)));
SET32(5, RW(5) + 2);
SET32(2, RW(2) << 8);
SET64(4, RSD(8) < RSD(9));
SET64(3, RD(3) | RD(2));
wr16(c, (RW(6) + 0), (u16)RW(3));
{ int t = RD(4) != RD(0); SET32(6, RW(6) + 2); if (t) { POLL(); goto L_0024A710; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_0024A73C:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(9), RSW(2));
wr32(c, (RW(16) + 144), RW(9));
SET32(2, RW(2) << 1);
wr32(c, (RW(16) + 148), RW(2));
L_0024A75C:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024A788; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x24a77c); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_0024A788:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024A7A0(Ctx *c) { /* func_0024A7A0 */
ENTER(0x24a7a0);
SET64(5, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 4);
SET32(5, RW(5) + 3200);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24a7c0); SET64(16, RD(4) + RD(0)); JP_F_00127180(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(16) + 8);
SET32(5, RW(5) + 3208);
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 4); if (t) goto L_0024A7F0; }
SET64(31, 0x24a7dc);  JP_F_00127180(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0024A7F4; }
SET32(2, RW(0) + 1); goto L_0024A7F4;
L_0024A7F0:;
SET64(2, RD(0) + RD(0));
L_0024A7F4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024A808(Ctx *c) { /* func_0024A808 */
ENTER(0x24a808);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s16)rd16(c, (RW(4) + 156)));
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_0024A830; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024A600(c); return; }
L_0024A830:;
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0024A840; }
SET32(29, RW(29) + 16); { JP_F_0024A468(c); return; }
L_0024A840:;
{ int t = RD(3) != RD(0);  if (t) goto L_0024A858; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024A2F0(c); return; }
L_0024A858:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0024A860(Ctx *c) { /* func_0024A860 */
ENTER(0x24a860);
SET64(3, (s64)(s32)0x3f0000);
SET32(5, RW(0) + 1);
SET32(3, RW(3) + 6224);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) != RD(5); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024A888; }
wr32(c, (RW(2) + 6216), RW(0));
L_0024A888:;
 return;
}

void JP_F_0024A890(Ctx *c) { /* func_0024A890 */
ENTER(0x24a890);
SET64(2, (s64)(s32)0x3f0000);
SET32(2, RW(2) + 6224);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) + -1);
wr32(c, (RW(2) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024A8B4; }
wr32(c, (RW(2) + 6216), RW(0));
L_0024A8B4:;
 return;
}

void JP_F_0024A8C0(Ctx *c) { /* func_0024A8C0 */
ENTER(0x24a8c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C068(c); return; }
}

void JP_F_0024A8D8(Ctx *c) { /* func_0024A8D8 */
ENTER(0x24a8d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C080(c); return; }
}

void JP_F_0024A8F0(Ctx *c) { /* func_0024A8F0 */
ENTER(0x24a8f0);
 return;
}

void JP_F_0024A8F8(Ctx *c) { /* func_0024A8F8 */
ENTER(0x24a8f8);
 return;
}

void JP_F_0024A900(Ctx *c) { /* func_0024A900 */
ENTER(0x24a900);
SET32(29, RW(29) + -64);
wr32(c, (RW(29) + 56), c->f[22].u);
SET64(1, (s64)(s32)0x40000000);
c->f[22].u = RW(1);
wr32(c, (RW(29) + 40), c->f[20].u);
c->f[20].f = fpu_sqrt(F(22));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr32(c, (RW(29) + 48), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
c->f[12].u = c->f[22].u;
c->fcc = F(20) == F(20);
{ int t = c->fcc; c->f[21].u = c->f[20].u; if (t) goto L_0024A964; }
SET64(31, 0x24a960);  JP_F_0011F8F8(c);
c->f[21].u = c->f[0].u;
L_0024A964:;
c->f[12].u = RW(16);
c->f[12].f = (f32)(s32)c->f[12].u;
SET64(1, (s64)(s32)0x40c90000);
SET64(1, RD(1) | 0xfda);
c->f[0].u = RW(1);
c->f[1].u = RW(17);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[12].f = fpu(F(12) * F(0));
c->f[12].f = fpu_div(F(12), F(1));
SET64(31, 0x24a998);  JP_F_0011F450(c);
c->f[12].u = c->f[22].u;
c->f[1].u = c->f[20].u;
c->fcc = F(1) == F(1);
{ int t = c->fcc; c->f[21].f = fpu(F(21) - F(0)); if (t) goto L_0024A9B8; }
SET64(31, 0x24a9b4);  JP_F_0011F8F8(c);
c->f[1].u = c->f[0].u;
L_0024A9B8:;
SET64(1, (s64)(s32)0x3f800000);
c->f[0].u = RW(1);
c->f[20].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(21) - F(20));
c->f[12].f = fpu(F(21) + F(20));
c->f[12].f = fpu(F(12) * F(0));
c->f[0].f = fpu_sqrt(F(12));
c->fcc = F(0) == F(0);
if (c->fcc) { c->f[0].f = fpu(F(21) - F(0)); goto L_0024A9F4; }
SET64(31, 0x24a9f0);  JP_F_0011F8F8(c);
c->f[0].f = fpu(F(21) - F(0));
L_0024A9F4:;
c->f[21].u = rd32(c, (RW(29) + 48));
SET64(1, (s64)(s32)0x45800000);
c->f[3].u = RW(1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
c->f[0].f = fpu_div(F(0), F(20));
c->f[20].u = rd32(c, (RW(29) + 40));
SET64(31, rd64(c, (RW(29) + 32)));
c->f[22].u = rd32(c, (RW(29) + 56));
c->f[1].u = c->f[0].u ^ 0x80000000u;
c->f[2].f = fpu(F(0) + F(0));
c->f[1].f = fpu(F(1) * F(0));
c->f[2].f = fpu(F(2) * F(3));
c->f[1].f = fpu(F(1) * F(3));
c->f[0].u = (u32)fpu_cvtw(F(2));
SET64(2, (s32)c->f[0].u);
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
wr16(c, (RW(19) + 0), (u16)RW(2));
SET64(19, rd64(c, (RW(29) + 24)));
wr16(c, (RW(18) + 0), (u16)RW(3));
SET64(18, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0024AA60(Ctx *c) { /* func_0024AA60 */
ENTER(0x24aa60);
SET64(8, (s64)(s32)0x7fff0000);
SET32(5, RW(5) + -1);
SET64(8, RD(8) | 0xffff);
{ int t = RSD(5) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_0024AABC; }
SET64(3, rd16(c, (RW(4) + 0)));
SET32(2, RW(0) + 128);
if (RD(3) != RD(2)) { SET32(7, RW(7) + 2); goto L_0024AA90; }
SET64(8, RD(0) + RD(0)); goto L_0024AABC;
L_0024AA90:;
SET64(2, RSD(7) < RSD(5));
{ int t = RD(2) == RD(0); SET32(3, RW(4) + RW(7)); if (t) goto L_0024AABC; }
SET64(3, rd16(c, (RW(3) + 0)));
SET32(2, RW(0) + 128);
if (RD(3) != RD(2)) { SET32(7, RW(7) + 2); { POLL(); goto L_0024AA90; } }
SET64(2, RSD(7) < RSD(8));
if (RD(2) != 0) SET64(8, RD(7));
L_0024AABC:;
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xffff);
if (RD(8) == RD(2)) { wr16(c, (RW(6) + 0), (u16)RW(0)); goto L_0024AAD8; }
wr16(c, (RW(6) + 0), (u16)RW(8));
SET64(2, RD(0) + RD(0)); return;
L_0024AAD8:;
SET32(2, RW(0) + -1); return;
}

void JP_F_0024AAE0(Ctx *c) { /* func_0024AAE0 */
ENTER(0x24aae0);
SET64(8, RD(5) + RD(0));
SET32(29, RW(29) + -32);
SET64(3, RSD(8) < (s64)16);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(7, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(17, RD(6) + RD(0));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0024AB70; }
SET64(3, rd8(c, (RW(7) + 0)));
SET64(5, RD(0) | 0x8000);
SET64(4, rd8(c, (RW(7) + 1)));
SET32(3, RW(3) << 8);
SET64(4, RD(4) | RD(3));
{ int t = RD(4) != RD(5); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0024AB74; }
SET64(3, rd8(c, (RW(7) + 2)));
SET32(5, RW(0) + 32767);
SET64(4, rd8(c, (RW(7) + 3)));
SET64(5, RSD(5) < RSD(8));
SET32(3, RW(3) << 8);
SET64(3, RD(3) | RD(4));
SET32(4, RW(3) + -2);
SET32(16, RW(3) + 4);
{ int t = RD(5) == RD(0); SET32(4, RW(7) + RW(4)); if (t) goto L_0024AB70; }
SET64(5, (s64)(s32)0x4b0000);
SET32(6, RW(0) + 6);
SET64(31, 0x24ab5c); SET32(5, RW(5) + 3216); JP_F_00127180(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0024AB70; }
if (RD(17) != RD(0)) { wr16(c, (RW(17) + 0), (u16)RW(16)); goto L_0024AB6C; }
L_0024AB6C:;
SET32(2, RW(0) + 1);
L_0024AB70:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0024AB74:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024AB88(Ctx *c) { /* func_0024AB88 */
ENTER(0x24ab88);
SET64(5, RSD(5) < (s64)16);
SET64(12, RD(4) + RD(0));
SET64(13, (s32)rd32(c, (RW(29) + 8)));
{ int t = RD(5) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_0024AC80; }
SET64(3, rd8(c, (RW(12) + 0)));
SET64(5, RD(0) | 0x8000);
SET64(4, rd8(c, (RW(12) + 1)));
SET32(3, RW(3) << 8);
SET64(4, RD(4) | RD(3));
{ int t = RD(4) != RD(5); SET32(2, RW(0) + -2); if (t) goto L_0024AC80; }
SET64(3, rd8(c, (RW(12) + 2)));
SET64(2, rd8(c, (RW(12) + 3)));
SET32(3, RW(3) << 8);
SET64(2, RD(2) | RD(3));
SET32(2, RW(2) + 4);
wr16(c, (RW(6) + 0), (u16)RW(2));
SET64(3, rd8(c, (RW(12) + 4)));
wr8(c, (RW(7) + 0), (u8)RW(3));
SET64(2, rd8(c, (RW(12) + 5)));
wr8(c, (RW(9) + 0), (u8)RW(2));
SET64(3, rd8(c, (RW(12) + 6)));
wr8(c, (RW(8) + 0), (u8)RW(3));
SET64(4, rd8(c, (RW(12) + 7)));
wr8(c, (RW(10) + 0), (u8)RW(4));
SET64(2, rd8(c, (RW(12) + 8)));
SET64(3, rd8(c, (RW(12) + 10)));
SET64(4, rd8(c, (RW(12) + 9)));
SET32(2, RW(2) << 24);
SET64(5, rd8(c, (RW(12) + 11)));
SET32(3, RW(3) << 8);
SET32(4, RW(4) << 16);
SET64(3, RD(3) | RD(4));
SET64(2, RD(2) | RD(5));
SET64(2, RD(2) | RD(3));
wr32(c, (RW(11) + 0), RW(2));
SET64(3, rd8(c, (RW(12) + 13)));
SET64(2, rd8(c, (RW(12) + 12)));
SET64(4, rd8(c, (RW(12) + 14)));
SET32(3, RW(3) << 16);
SET64(5, rd8(c, (RW(12) + 15)));
SET32(2, RW(2) << 24);
SET32(4, RW(4) << 8);
SET64(4, RD(4) | RD(3));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) | RD(5));
SET64(2, RD(2) | RD(4));
wr32(c, (RW(3) + 0), RW(2));
SET64(8, (s8)rd8(c, (RW(8) + 0)));
if (RD(8) != RD(0)) { SET64(2, (s8)rd8(c, (RW(9) + 0))); goto L_0024AC60; }
wr32(c, (RW(13) + 0), RW(0)); goto L_0024AC7C;
L_0024AC60:;
if (RD(8) == RD(0)) { rt_break(c, 0x24ac64); goto L_0024AC68; }
L_0024AC68:;
SET32(2, RW(2) << 3);
SET32(2, RW(2) + -16);
div_s(c, 0, RSW(2), RSW(8));
SET64(2, c->lo.d[0]);
wr32(c, (RW(13) + 0), RW(2));
L_0024AC7C:;
SET64(2, RD(0) + RD(0));
L_0024AC80:;
 return;
}

void JP_F_0024AC88(Ctx *c) { /* func_0024AC88 */
ENTER(0x24ac88);
SET64(5, RSD(5) < (s64)18);
SET64(7, RD(4) + RD(0));
{ int t = RD(5) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_0024AD00; }
SET64(3, rd16(c, (RW(7) + 0)));
SET64(5, RD(0) | 0x8000);
SET32(8, RW(0) + -256);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5); SET32(2, RW(0) + -2); if (t) goto L_0024AD00; }
SET64(4, rd16(c, (RW(7) + 2)));
SET64(3, rd8(c, (RW(7) + 3)));
SET32(4, RW(4) << 8);
SET64(4, RD(4) & RD(8));
SET64(3, RD(3) | RD(4));
SET32(3, RW(3) << 16);
SET32(3, RSW(3) >> 16);
SET64(3, RSD(3) < (s64)14);
{ int t = RD(3) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_0024AD00; }
SET64(4, rd16(c, (RW(7) + 16)));
SET64(2, RD(0) + RD(0));
SET32(3, RW(4) << 8);
SET32(4, RW(4) >> 8);
SET64(3, RD(3) & RD(8));
SET64(4, RD(4) | RD(3));
wr16(c, (RW(6) + 0), (u16)RW(4));
L_0024AD00:;
 return;
}

void JP_F_0024AD08(Ctx *c) { /* func_0024AD08 */
ENTER(0x24ad08);
SET64(5, RSD(5) < (s64)20);
SET64(8, RD(4) + RD(0));
{ int t = RD(5) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_0024AD78; }
SET64(3, rd16(c, (RW(8) + 0)));
SET64(5, RD(0) | 0x8000);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5); SET32(2, RW(0) + -2); if (t) goto L_0024AD78; }
SET64(3, rd16(c, (RW(8) + 2)));
SET32(5, RW(0) + -256);
SET64(4, rd8(c, (RW(8) + 3)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(5));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
SET32(4, RSW(4) >> 16);
SET64(4, RSD(4) < (s64)16);
{ int t = RD(4) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_0024AD78; }
SET64(4, rd8(c, (RW(8) + 18)));
SET64(2, RD(0) + RD(0));
wr8(c, (RW(6) + 0), (u8)RW(4));
SET64(3, rd8(c, (RW(8) + 19)));
wr8(c, (RW(7) + 0), (u8)RW(3));
L_0024AD78:;
 return;
}

void JP_F_0024AD80(Ctx *c) { /* func_0024AD80 */
ENTER(0x24ad80);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(7) + RD(0));
SET64(6, RD(29) + RD(0));
SET32(7, RW(29) + 1);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x24adb4); SET64(17, RD(5) + RD(0)); JP_F_0024AD08(c);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_0024AE98; }
SET64(2, rd8(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)4);
if (RD(2) != RD(0)) { wr16(c, (RW(19) + 2), (u16)RW(0)); goto L_0024AE88; }
SET64(3, RSD(17) < (s64)32);
{ int t = RD(3) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_0024AE98; }
SET64(3, rd16(c, (RW(16) + 0)));
SET64(5, RD(0) | 0x8000);
SET32(6, RW(0) + -256);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5); SET32(2, RW(0) + -2); if (t) goto L_0024AE98; }
SET64(4, rd16(c, (RW(16) + 2)));
SET64(3, rd8(c, (RW(16) + 3)));
SET32(4, RW(4) << 8);
SET64(4, RD(4) & RD(6));
SET64(3, RD(3) | RD(4));
SET32(3, RW(3) << 16);
SET32(3, RSW(3) >> 16);
SET64(3, RSD(3) < (s64)28);
{ int t = RD(3) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_0024AE98; }
SET64(2, rd16(c, (RW(16) + 24)));
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(3, RD(3) & RD(6));
SET64(2, RD(2) | RD(3));
wr16(c, (RW(18) + 0), (u16)RW(2));
SET64(3, rd16(c, (RW(16) + 26)));
SET32(2, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(2, RD(2) & RD(6));
SET64(3, RD(3) | RD(2));
wr16(c, (RW(19) + 0), (u16)RW(3));
SET64(2, rd16(c, (RW(16) + 28)));
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(3, RD(3) & RD(6));
SET64(2, RD(2) | RD(3));
wr16(c, (RW(18) + 2), (u16)RW(2));
SET64(3, rd16(c, (RW(16) + 30)));
SET32(2, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(2, RD(2) & RD(6));
SET64(3, RD(3) | RD(2));
wr16(c, (RW(19) + 2), (u16)RW(3)); goto L_0024AE94;
L_0024AE88:;
wr16(c, (RW(18) + 2), (u16)RW(0));
wr16(c, (RW(19) + 0), (u16)RW(0));
wr16(c, (RW(18) + 0), (u16)RW(0));
L_0024AE94:;
SET64(2, RD(0) + RD(0));
L_0024AE98:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0024AEB8(Ctx *c) { /* func_0024AEB8 */
ENTER(0x24aeb8);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(9) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(10) + RD(0));
wr64(c, (RW(29) + 64), RD(22));
SET64(22, RD(8) + RD(0));
wr64(c, (RW(29) + 72), RD(23));
SET64(23, RD(11) + RD(0));
wr64(c, (RW(29) + 80), RD(31));
SET32(7, RW(29) + 1);
wr16(c, (RW(18) + 0), (u16)RW(0));
SET64(31, 0x24af10); SET64(6, RD(29) + RD(0)); JP_F_0024AD08(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0024B0F0; }
SET64(3, rd8(c, (RW(29) + 0)));
SET32(6, RW(0) + 48);
SET32(4, RW(0) + 60);
SET64(7, RD(3) ^ 0x4);
if (RD(7) == 0) SET64(6, RD(4));
SET64(3, RSD(17) < RSD(6));
if (RD(3) != RD(0)) { SET32(2, RW(0) + -1); goto L_0024B0EC; }
SET64(3, rd16(c, (RW(16) + 0)));
SET64(5, RD(0) | 0x8000);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5); SET32(14, RW(0) + -256); if (t) goto L_0024AFF0; }
SET64(3, rd16(c, (RW(16) + 2)));
SET32(5, RW(6) + -4);
SET64(4, rd8(c, (RW(16) + 3)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(14));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
SET32(4, RSW(4) >> 16);
SET64(4, RSD(4) < RSD(5));
{ int t = RD(4) == RD(0); SET32(3, RW(0) + 32); if (t) goto L_0024AF90; }
SET32(2, RW(0) + -1); goto L_0024B0EC;
L_0024AF90:;
SET32(13, RW(0) + 20);
if (RD(7) == 0) SET64(13, RD(3));
SET32(8, RW(0) + 1);
SET32(6, RW(16) + RW(13));
SET32(13, RW(13) + 2);
SET32(7, RW(16) + RW(13));
SET32(13, RW(13) + 2);
SET64(5, rd16(c, (RW(6) + 0)));
SET64(4, rd16(c, (RW(7) + 0)));
SET64(3, rd8(c, (RW(6) + 1)));
SET32(5, RW(5) << 8);
SET64(6, rd8(c, (RW(7) + 1)));
SET32(4, RW(4) << 8);
SET64(4, RD(4) & RD(14));
SET64(5, RD(5) & RD(14));
SET64(6, RD(6) | RD(4));
SET64(3, RD(3) | RD(5));
SET32(3, RW(3) << 16);
SET32(4, RW(6) << 16);
SET32(3, RSW(3) >> 16);
SET32(4, RSW(4) >> 16);
wr32(c, (RW(19) + 0), RW(3));
{ int t = RD(4) == RD(8); wr16(c, (RW(18) + 0), (u16)RW(6)); if (t) goto L_0024AFF8; }
L_0024AFF0:;
SET32(2, RW(0) + -2); goto L_0024B0EC;
L_0024AFF8:;
SET32(13, RW(13) + 2);
SET64(9, (s64)(s32)0xff0000);
SET32(10, RW(16) + RW(13));
SET32(13, RW(13) + 2);
SET32(3, RW(16) + RW(13));
SET32(13, RW(13) + 4);
SET64(5, (s32)rd32(c, (RW(3) + 0)));
SET32(11, RW(16) + RW(13));
SET32(13, RW(13) + 4);
SET64(7, rd16(c, (RW(10) + 0)));
SET32(6, RSW(5) >> 8);
SET32(4, RW(5) << 8);
SET64(6, RD(6) & 0xff00);
SET32(3, RW(5) >> 24);
SET64(4, RD(4) & RD(9));
SET32(5, RW(5) << 24);
SET64(4, RD(4) | RD(6));
SET64(3, RD(3) | RD(5));
SET64(3, RD(3) | RD(4));
SET32(12, RW(16) + RW(13));
wr32(c, (RW(20) + 0), RW(3));
SET32(13, RW(13) + RW(16));
SET64(8, rd8(c, (RW(10) + 1)));
SET32(7, RW(7) << 8);
SET64(5, (s32)rd32(c, (RW(11) + 0)));
SET64(7, RD(7) & RD(14));
SET64(8, RD(8) | RD(7));
SET32(6, RSW(5) >> 8);
SET32(4, RW(5) << 8);
SET64(6, RD(6) & 0xff00);
SET32(3, RW(5) >> 24);
SET64(4, RD(4) & RD(9));
SET32(5, RW(5) << 24);
SET64(4, RD(4) | RD(6));
SET64(3, RD(3) | RD(5));
SET64(3, RD(3) | RD(4));
wr16(c, (RW(22) + 0), (u16)RW(8));
wr32(c, (RW(21) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(12) + 0)));
SET32(6, RSW(4) >> 8);
SET32(5, RW(4) << 8);
SET64(6, RD(6) & 0xff00);
SET32(3, RW(4) >> 24);
SET64(5, RD(5) & RD(9));
SET32(4, RW(4) << 24);
SET64(5, RD(5) | RD(6));
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) | RD(5));
wr32(c, (RW(23) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(13) + 4)));
SET32(6, RSW(4) >> 8);
SET32(5, RW(4) << 8);
SET32(3, RW(4) >> 24);
SET32(4, RW(4) << 24);
SET64(5, RD(5) & RD(9));
SET64(6, RD(6) & 0xff00);
SET64(3, RD(3) | RD(4));
SET64(4, (s32)rd32(c, (RW(29) + 96)));
SET64(5, RD(5) | RD(6));
SET64(3, RD(3) | RD(5));
wr32(c, (RW(4) + 0), RW(3));
L_0024B0EC:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0024B0F0:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(23, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void JP_F_0024B118(Ctx *c) { /* func_0024B118 */
ENTER(0x24b118);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(9) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(8) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET64(6, RD(29) + RD(0));
wr32(c, (RW(18) + 0), RW(0));
SET64(31, 0x24b160); SET32(7, RW(29) + 1); JP_F_0024AD08(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0024B314; }
SET64(3, rd8(c, (RW(29) + 0)));
SET32(6, RW(0) + 60);
SET32(4, RW(0) + 72);
SET64(7, RD(3) ^ 0x4);
if (RD(7) == 0) SET64(6, RD(4));
SET64(3, RSD(17) < RSD(6));
if (RD(3) != RD(0)) { SET32(2, RW(0) + -1); goto L_0024B310; }
SET64(3, rd16(c, (RW(16) + 0)));
SET64(5, RD(0) | 0x8000);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5); SET32(10, RW(0) + -256); if (t) goto L_0024B250; }
SET64(3, rd16(c, (RW(16) + 2)));
SET32(5, RW(6) + -4);
SET64(4, rd8(c, (RW(16) + 3)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(10));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
SET32(4, RSW(4) >> 16);
SET64(4, RSD(4) < RSD(5));
{ int t = RD(4) == RD(0); SET32(3, RW(0) + 32); if (t) goto L_0024B1E0; }
SET32(2, RW(0) + -1); goto L_0024B310;
L_0024B1E0:;
SET32(9, RW(0) + 20);
if (RD(7) == 0) SET64(9, RD(3));
SET64(8, (s64)(s32)0x41490000);
SET32(9, RW(9) + 2);
SET64(8, RD(8) | 0x4e46);
SET32(5, RW(16) + RW(9));
SET32(9, RW(9) + 2);
SET64(3, rd16(c, (RW(5) + 0)));
SET32(6, RW(9) + 20);
SET64(4, rd8(c, (RW(5) + 1)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(10));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
if (RD(4) != 0) SET64(9, RD(6));
SET32(5, RW(16) + RW(9));
SET64(6, rd8(c, (RW(5) + 1)));
SET64(3, rd8(c, (RW(5) + 0)));
SET64(4, rd8(c, (RW(5) + 2)));
SET32(6, RW(6) << 16);
SET64(7, rd8(c, (RW(5) + 3)));
SET32(3, RW(3) << 24);
SET32(4, RW(4) << 8);
SET64(3, RD(3) | RD(7));
SET64(4, RD(4) | RD(6));
SET64(3, RD(3) | RD(4));
{ int t = RD(3) == RD(8); SET32(9, RW(9) + 4); if (t) goto L_0024B258; }
L_0024B250:;
SET32(2, RW(0) + -2); goto L_0024B310;
L_0024B258:;
SET32(3, RW(16) + RW(9));
SET32(9, RW(9) + 4);
SET64(5, (s32)rd32(c, (RW(3) + 0)));
SET64(7, (s64)(s32)0xff0000);
SET32(8, RW(16) + RW(9));
SET32(9, RW(9) + 16);
SET32(6, RSW(5) >> 8);
SET32(4, RW(5) << 8);
SET64(4, RD(4) & RD(7));
SET64(6, RD(6) & 0xff00);
SET32(3, RW(5) >> 24);
SET32(5, RW(5) << 24);
SET64(4, RD(4) | RD(6));
SET64(3, RD(3) | RD(5));
SET64(3, RD(3) | RD(4));
SET32(5, RW(16) + RW(9));
wr32(c, (RW(18) + 0), RW(3));
SET32(9, RW(9) + 4);
SET32(6, RW(16) + RW(9));
SET32(7, RW(9) + RW(16));
ldl(c, 3, (RW(8) + 7));
ldr(c, 3, (RW(8) + 0));
ldl(c, 4, (RW(8) + 15));
ldr(c, 4, (RW(8) + 8));
sdl(c, 3, (RW(20) + 7));
sdr(c, 3, (RW(20) + 0));
sdl(c, 4, (RW(20) + 15));
sdr(c, 4, (RW(20) + 8));
SET64(3, rd16(c, (RW(5) + 0)));
SET64(4, rd8(c, (RW(5) + 1)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(10));
SET64(4, RD(4) | RD(3));
wr16(c, (RW(21) + 0), (u16)RW(4));
SET64(3, rd16(c, (RW(6) + 0)));
SET64(4, rd8(c, (RW(6) + 1)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(10));
SET64(4, RD(4) | RD(3));
wr16(c, (RW(19) + 0), (u16)RW(4));
SET64(3, rd16(c, (RW(7) + 2)));
SET64(4, rd8(c, (RW(7) + 3)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(10));
SET64(4, RD(4) | RD(3));
wr16(c, (RW(19) + 2), (u16)RW(4));
L_0024B310:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0024B314:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0024B338(Ctx *c) { /* func_0024B338 */
ENTER(0x24b338);
SET64(5, RSD(5) < (s64)16);
SET64(7, RD(4) + RD(0));
{ int t = RD(5) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_0024B38C; }
SET64(3, rd16(c, (RW(7) + 0)));
SET64(5, RD(0) | 0x8001);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5); SET32(2, RW(0) + -2); if (t) goto L_0024B38C; }
SET64(3, rd16(c, (RW(7) + 2)));
SET32(5, RW(0) + -256);
SET64(4, rd8(c, (RW(7) + 3)));
SET64(2, RD(0) + RD(0));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(5));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) + 4);
wr16(c, (RW(6) + 0), (u16)RW(4));
L_0024B38C:;
 return;
}

void JP_F_0024B398(Ctx *c) { /* func_0024B398 */
ENTER(0x24b398);
SET32(3, RW(6) + RW(7));
{ int t = RD(4) != RD(0); SET64(2, RD(3) + RD(0)); if (t) goto L_0024B3C8; }
SET32(2, RW(5) + RW(3));
if (RD(7) == RD(0)) { rt_break(c, 0x24b3ac); goto L_0024B3B0; }
L_0024B3B0:;
SET32(2, RW(2) + 33);
div_u(c, 0, RW(2), RW(7));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 2, RSW(2), RSW(7));
SET32(2, RW(2) - RW(6)); return;
L_0024B3C8:;
SET32(2, RW(5) + RW(2));
if (RD(7) == RD(0)) { rt_break(c, 0x24b3d0); goto L_0024B3D4; }
L_0024B3D4:;
SET32(2, RW(2) + 57);
div_u(c, 0, RW(2), RW(7));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 2, RSW(2), RSW(7));
SET32(2, RW(2) - RW(6)); return;
}

void JP_F_0024B3F0(Ctx *c) { /* func_0024B3F0 */
ENTER(0x24b3f0);
SET32(29, RW(29) + -80);
SET32(8, RW(8) << 16);
wr64(c, (RW(29) + 0), RD(16));
SET32(9, RW(9) << 16);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RSW(8) >> 16);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(10) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET32(11, RW(11) << 16);
wr64(c, (RW(29) + 48), RD(22));
SET32(22, RSW(11) >> 16);
wr64(c, (RW(29) + 56), RD(23));
SET32(16, RSW(9) >> 16);
wr64(c, (RW(29) + 64), RD(30));
SET64(13, RD(4) + RD(0));
SET64(21, (s16)rd16(c, (RW(29) + 80)));
SET64(10, RD(0) + RD(0));
SET64(5, (s16)rd16(c, (RW(20) + 0)));
{ int t = RSD(19) <= 0; SET64(14, (s16)rd16(c, (RW(20) + 2))); if (t) goto L_0024B594; }
SET32(30, RW(0) + -256);
SET64(23, (s64)(s32)0x4b0000);
SET64(3, rd16(c, (RW(13) + 0)));
L_0024B460:;
SET64(4, rd8(c, (RW(13) + 1)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(30));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
SET32(4, RSW(4) >> 16);
SET64(3, RD(4) & 0x8000);
{ int t = RD(3) != RD(0); SET64(2, RD(10) + RD(0)); if (t) goto L_0024B5A0; }
SET64(2, rd16(c, (RW(18) + 0)));
SET32(13, RW(13) + 2);
SET64(9, RD(0) | 0x8000);
SET64(8, RD(0) | 0xffff);
mul_s(c, 0, 7, RSW(2), RSW(22));
SET64(2, RD(4) ^ RD(2));
SET64(2, RD(2) & 0x1fff);
SET32(25, RW(0) + 32767);
SET32(15, RW(2) + 1);
SET32(11, RW(23) + 3224);
SET32(3, RW(7) + RW(21));
SET32(7, RW(0) + 30);
SET64(3, RD(3) & 0x7fff);
wr16(c, (RW(18) + 0), (u16)RW(3));
L_0024B4C0:;
SET64(3, rd8(c, (RW(13) + 0)));
SET32(13, RW(13) + 1);
mul_s(c, 0, 2, RSW(16), RSW(14));
SET64(14, RD(5) + RD(0));
mul_s(c, 1, 4, RSW(17), RSW(5));
SET32(3, RW(3) << 24);
SET32(5, RSW(3) >> 28);
SET32(3, RSW(3) >> 24);
mul_s(c, 0, 5, RSW(5), RSW(15));
mul_s(c, 0, 24, RSW(16), RSW(14));
SET32(4, RW(4) + RW(2));
SET64(2, RD(3) & 0xf);
SET32(4, RSW(4) >> 12);
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(5));
SET32(12, RW(2) + RW(11));
SET32(2, RW(4) + RW(9));
SET64(3, RSD(4) < (s64)-32768);
SET64(2, RD(8) < RD(2));
SET64(5, RSD(25) < RSD(4));
{ int t = RD(2) == RD(0); SET64(3, RD(3) ^ 0x0); if (t) goto L_0024B524; }
if (RD(5) != 0) SET64(4, RD(25));
SET32(2, RW(0) + -32768);
if (RD(3) != 0) SET64(4, RD(2));
L_0024B524:;
SET64(5, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(12) + 0)));
mul_s(c, 0, 2, RSW(17), RSW(5));
wr16(c, (RW(6) + 0), (u16)RW(5));
mul_s(c, 0, 4, RSW(3), RSW(15));
SET64(14, RD(5) + RD(0));
SET32(6, RW(6) + 2);
SET32(2, RW(2) + RW(24));
SET32(2, RSW(2) >> 12);
SET32(4, RW(2) + RW(4));
SET32(3, RW(4) + RW(9));
SET64(2, RSD(4) < (s64)-32768);
SET64(3, RD(8) < RD(3));
SET64(5, RSD(25) < RSD(4));
{ int t = RD(3) == RD(0); SET64(12, RD(2) ^ 0x0); if (t) goto L_0024B570; }
if (RD(5) != 0) SET64(4, RD(25));
SET32(2, RW(0) + -32768);
if (RD(12) != 0) SET64(4, RD(2));
L_0024B570:;
SET64(5, RD(4) + RD(0));
SET32(7, RW(7) + -2);
wr16(c, (RW(6) + 0), (u16)RW(5));
{ int t = RSD(7) >= 0; SET32(6, RW(6) + 2); if (t) { POLL(); goto L_0024B4C0; } }
SET32(10, RW(10) + 1);
SET64(2, RSD(10) < RSD(19));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(13) + 0))); { POLL(); goto L_0024B460; } }
L_0024B594:;
wr16(c, (RW(20) + 2), (u16)RW(14));
SET64(2, RD(19) + RD(0));
wr16(c, (RW(20) + 0), (u16)RW(5));
L_0024B5A0:;
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

void JP_F_0024B5D0(Ctx *c) { /* func_0024B5D0 */
ENTER(0x24b5d0);
SET32(2, RW(5) >> 31);
SET32(29, RW(29) + -112);
SET32(2, RW(5) + RW(2));
wr32(c, (RW(29) + 8), RW(9));
SET32(2, RSW(2) >> 1);
SET64(3, (s16)rd16(c, (RW(29) + 120)));
wr32(c, (RW(29) + 20), RW(2));
SET64(9, RD(6) + RD(0));
SET64(2, (s16)rd16(c, (RW(29) + 128)));
SET32(10, RW(10) << 16);
wr64(c, (RW(29) + 48), RD(18));
SET32(11, RW(11) << 16);
wr64(c, (RW(29) + 56), RD(19));
SET32(19, RSW(10) >> 16);
wr64(c, (RW(29) + 88), RD(23));
SET64(23, RD(0) + RD(0));
wr32(c, (RW(29) + 0), RW(5));
SET32(18, RSW(11) >> 16);
wr64(c, (RW(29) + 32), RD(16));
SET64(15, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 72), RD(21));
wr64(c, (RW(29) + 80), RD(22));
wr64(c, (RW(29) + 96), RD(30));
wr32(c, (RW(29) + 4), RW(7));
wr32(c, (RW(29) + 16), RW(2));
wr32(c, (RW(29) + 12), RW(3));
SET64(5, (s32)rd32(c, (RW(29) + 8)));
SET64(6, (s32)rd32(c, (RW(29) + 20)));
SET64(24, (s16)rd16(c, (RW(7) + 0)));
SET64(12, (s16)rd16(c, (RW(7) + 2)));
SET64(25, (s16)rd16(c, (RW(5) + 0)));
{ int t = RSD(6) <= 0; SET64(17, (s16)rd16(c, (RW(5) + 2))); if (t) goto L_0024B94C; }
L_0024B660:;
SET64(3, rd16(c, (RW(15) + 0)));
SET32(5, RW(0) + -256);
SET64(4, rd8(c, (RW(15) + 1)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(5));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
SET32(5, RSW(4) >> 16);
SET64(3, RD(5) & 0x8000);
{ int t = RD(3) != RD(0); SET32(2, RW(23) << 1); if (t) goto L_0024B968; }
SET64(6, (s32)rd32(c, (RW(29) + 112)));
SET64(3, rd16(c, (RW(6) + 0)));
SET64(6, (s32)rd32(c, (RW(29) + 16)));
c->lo.d[0] = RD(6);
SET64(6, (s32)rd32(c, (RW(29) + 12)));
madd_s(c, 0, 4, RSW(3), RSW(6));
SET64(3, RD(5) ^ RD(3));
SET64(3, RD(3) & 0x1fff);
SET32(5, RW(0) + -256);
SET32(21, RW(3) + 1);
SET64(3, (s32)rd32(c, (RW(29) + 112)));
SET64(6, RD(4) & 0x7fff);
wr16(c, (RW(3) + 0), (u16)RW(6));
SET64(3, rd16(c, (RW(15) + 18)));
SET64(4, rd8(c, (RW(15) + 19)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(5));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
SET32(5, RSW(4) >> 16);
SET64(3, RD(5) & 0x8000);
{ int t = RD(3) != RD(0); SET64(3, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_0024B968; }
SET64(4, (s64)(s32)0x4b0000);
SET32(30, RW(4) + 3224);
SET32(15, RW(15) + 2);
c->lo.d[0] = RD(3);
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET64(16, RD(0) | 0x8000);
SET64(11, RD(0) | 0xffff);
madd_s(c, 0, 2, RSW(3), RSW(6));
SET64(3, RD(5) ^ RD(6));
SET64(5, (s32)rd32(c, (RW(29) + 112)));
SET64(3, RD(3) & 0x1fff);
SET32(20, RW(3) + 1);
SET32(13, RW(0) + 32767);
SET32(10, RW(0) + 10);
SET32(22, RW(0) + 30);
SET64(2, RD(2) & 0x7fff);
wr16(c, (RW(5) + 0), (u16)RW(2));
L_0024B730:;
SET64(2, rd8(c, (RW(15) + 0)));
mul_s(c, 0, 6, RSW(18), RSW(12));
mul_s(c, 1, 3, RSW(19), RSW(24));
SET64(4, rd8(c, (RW(15) + 18)));
SET32(2, RW(2) << 24);
SET32(15, RW(15) + 1);
SET32(5, RSW(2) >> 28);
SET32(14, RSW(2) >> 24);
mul_s(c, 0, 5, RSW(5), RSW(21));
SET32(4, RW(4) << 24);
SET32(3, RW(3) + RW(6));
SET32(12, RSW(4) >> 28);
SET32(3, RSW(3) >> 12);
SET32(6, RW(3) + RW(5));
SET32(2, RW(6) + RW(16));
SET64(2, RD(11) < RD(2));
{ int t = RD(2) == RD(0); SET32(7, RSW(4) >> 24); if (t) goto L_0024B790; }
SET64(2, RSD(6) < (s64)-32768);
SET64(3, RSD(13) < RSD(6));
if (RD(3) != 0) SET64(6, RD(13));
SET32(3, RW(0) + -32768);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_0024B790:;
mul_s(c, 0, 2, RSW(18), RSW(17));
mul_s(c, 1, 3, RSW(19), RSW(25));
mul_s(c, 0, 4, RSW(12), RSW(20));
SET64(12, RD(24) + RD(0));
SET64(24, RD(6) + RD(0));
SET32(3, RW(3) + RW(2));
SET32(3, RSW(3) >> 12);
SET32(6, RW(3) + RW(4));
SET32(2, RW(6) + RW(16));
SET64(2, RD(11) < RD(2));
{ int t = RD(2) == RD(0); SET64(17, RD(25) + RD(0)); if (t) goto L_0024B7D8; }
SET64(2, RSD(6) < (s64)-32768);
SET64(3, RSD(13) < RSD(6));
if (RD(3) != 0) SET64(6, RD(13));
SET32(3, RW(0) + -32768);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_0024B7D8:;
SET64(25, RD(6) + RD(0));
SET32(3, RW(24) + RW(25));
if (RD(10) == RD(0)) { rt_break(c, 0x24b7e4); goto L_0024B7E8; }
L_0024B7E8:;
SET32(2, RW(3) << 3);
SET32(2, RW(2) - RW(3));
div_s(c, 0, RSW(2), RSW(10));
SET64(2, c->lo.d[0]);
SET64(6, RD(2) + RD(0));
SET32(3, RW(6) + RW(16));
SET64(3, RD(11) < RD(3));
{ int t = RD(3) == RD(0); SET64(2, RD(14) & 0xf); if (t) goto L_0024B828; }
SET64(2, RSD(6) < (s64)-32768);
SET64(3, RSD(13) < RSD(6));
if (RD(3) != 0) SET64(6, RD(13));
SET32(3, RW(0) + -32768);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
SET64(2, RD(14) & 0xf);
L_0024B828:;
mul_s(c, 0, 5, RSW(18), RSW(12));
mul_s(c, 1, 4, RSW(19), RSW(24));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(30));
wr16(c, (RW(8) + 0), (u16)RW(6));
SET64(14, (s32)rd32(c, (RW(2) + 0)));
SET64(3, RD(7) & 0xf);
wr16(c, (RW(9) + 0), (u16)RW(6));
SET32(9, RW(9) + 2);
SET32(4, RW(4) + RW(5));
mul_s(c, 0, 5, RSW(14), RSW(21));
SET32(4, RSW(4) >> 12);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(30));
SET32(8, RW(8) + 2);
SET32(6, RW(4) + RW(5));
SET32(2, RW(6) + RW(16));
SET64(2, RD(11) < RD(2));
{ int t = RD(2) == RD(0); SET64(7, (s32)rd32(c, (RW(3) + 0))); if (t) goto L_0024B890; }
SET64(2, RSD(6) < (s64)-32768);
SET64(3, RSD(13) < RSD(6));
if (RD(3) != 0) SET64(6, RD(13));
SET32(3, RW(0) + -32768);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_0024B890:;
mul_s(c, 0, 2, RSW(18), RSW(17));
mul_s(c, 1, 3, RSW(19), RSW(25));
mul_s(c, 0, 4, RSW(7), RSW(20));
SET64(12, RD(24) + RD(0));
SET64(24, RD(6) + RD(0));
SET32(3, RW(3) + RW(2));
SET32(3, RSW(3) >> 12);
SET32(6, RW(3) + RW(4));
SET32(2, RW(6) + RW(16));
SET64(2, RD(11) < RD(2));
{ int t = RD(2) == RD(0); SET64(17, RD(25) + RD(0)); if (t) goto L_0024B8D8; }
SET64(2, RSD(6) < (s64)-32768);
SET64(3, RSD(13) < RSD(6));
if (RD(3) != 0) SET64(6, RD(13));
SET32(3, RW(0) + -32768);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_0024B8D8:;
SET64(25, RD(6) + RD(0));
SET32(3, RW(24) + RW(25));
if (RD(10) == RD(0)) { rt_break(c, 0x24b8e4); goto L_0024B8E8; }
L_0024B8E8:;
SET32(2, RW(3) << 3);
SET32(2, RW(2) - RW(3));
div_s(c, 0, RSW(2), RSW(10));
SET64(2, c->lo.d[0]);
SET64(6, RD(2) + RD(0));
SET32(3, RW(6) + RW(16));
SET64(3, RD(11) < RD(3));
{ int t = RD(3) == RD(0); SET32(22, RW(22) + -2); if (t) goto L_0024B924; }
SET64(2, RSD(6) < (s64)-32768);
SET64(3, RSD(13) < RSD(6));
if (RD(3) != 0) SET64(6, RD(13));
SET32(3, RW(0) + -32768);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_0024B924:;
wr16(c, (RW(8) + 0), (u16)RW(6));
wr16(c, (RW(9) + 0), (u16)RW(6));
SET32(9, RW(9) + 2);
{ int t = RSD(22) >= 0; SET32(8, RW(8) + 2); if (t) { POLL(); goto L_0024B730; } }
SET64(3, (s32)rd32(c, (RW(29) + 20)));
SET32(23, RW(23) + 1);
SET64(2, RSD(23) < RSD(3));
{ int t = RD(2) != RD(0); SET32(15, RW(15) + 18); if (t) { POLL(); goto L_0024B660; } }
L_0024B94C:;
SET64(5, (s32)rd32(c, (RW(29) + 4)));
wr16(c, (RW(5) + 2), (u16)RW(12));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
wr16(c, (RW(5) + 0), (u16)RW(24));
SET64(6, (s32)rd32(c, (RW(29) + 8)));
wr16(c, (RW(6) + 2), (u16)RW(17));
wr16(c, (RW(6) + 0), (u16)RW(25));
L_0024B968:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(22, rd64(c, (RW(29) + 80)));
SET64(23, rd64(c, (RW(29) + 88)));
SET64(30, rd64(c, (RW(29) + 96)));
SET32(29, RW(29) + 112); return;
}

void JP_F_0024B998(Ctx *c) { /* func_0024B998 */
ENTER(0x24b998);
SET32(2, RW(5) >> 31);
SET32(29, RW(29) + -112);
SET32(2, RW(5) + RW(2));
SET64(3, (s16)rd16(c, (RW(29) + 120)));
SET32(2, RSW(2) >> 1);
wr64(c, (RW(29) + 48), RD(18));
wr32(c, (RW(29) + 24), RW(2));
SET64(15, RD(4) + RD(0));
SET64(2, (s16)rd16(c, (RW(29) + 128)));
SET32(10, RW(10) << 16);
wr64(c, (RW(29) + 56), RD(19));
SET32(19, RSW(10) >> 16);
wr64(c, (RW(29) + 32), RD(16));
SET32(11, RW(11) << 16);
wr64(c, (RW(29) + 40), RD(17));
SET64(25, RD(6) + RD(0));
wr64(c, (RW(29) + 64), RD(20));
SET32(18, RSW(11) >> 16);
wr64(c, (RW(29) + 72), RD(21));
wr64(c, (RW(29) + 80), RD(22));
wr64(c, (RW(29) + 88), RD(23));
wr64(c, (RW(29) + 96), RD(30));
wr32(c, (RW(29) + 0), RW(5));
wr32(c, (RW(29) + 4), RW(7));
wr32(c, (RW(29) + 8), RW(9));
wr32(c, (RW(29) + 16), RW(2));
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 12), RW(3));
SET64(4, (s32)rd32(c, (RW(29) + 24)));
SET64(13, (s16)rd16(c, (RW(7) + 0)));
SET64(10, (s16)rd16(c, (RW(7) + 2)));
SET64(14, (s16)rd16(c, (RW(9) + 0)));
{ int t = RSD(4) <= 0; SET64(16, (s16)rd16(c, (RW(9) + 2))); if (t) goto L_0024BC98; }
L_0024BA20:;
SET64(3, rd16(c, (RW(15) + 0)));
SET32(6, RW(0) + -256);
SET64(4, rd8(c, (RW(15) + 1)));
SET32(3, RW(3) << 8);
SET64(5, (s32)rd32(c, (RW(29) + 20)));
SET64(3, RD(3) & RD(6));
SET64(4, RD(4) | RD(3));
SET32(2, RW(5) << 1);
SET32(4, RW(4) << 16);
SET32(5, RSW(4) >> 16);
SET64(3, RD(5) & 0x8000);
{ int t = RD(3) != RD(0); SET64(4, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_0024BCB4; }
SET64(2, (s32)rd32(c, (RW(29) + 112)));
SET64(6, (s32)rd32(c, (RW(29) + 16)));
SET64(3, rd16(c, (RW(2) + 0)));
c->lo.d[0] = RD(6);
SET64(6, (s32)rd32(c, (RW(29) + 12)));
SET32(2, RW(4) << 1);
madd_s(c, 0, 4, RSW(3), RSW(6));
SET64(3, RD(5) ^ RD(3));
SET64(3, RD(3) & 0x1fff);
SET32(5, RW(0) + -256);
SET32(23, RW(3) + 1);
SET64(3, (s32)rd32(c, (RW(29) + 112)));
SET64(6, RD(4) & 0x7fff);
wr16(c, (RW(3) + 0), (u16)RW(6));
SET64(3, rd16(c, (RW(15) + 18)));
SET64(4, rd8(c, (RW(15) + 19)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(5));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
SET32(5, RSW(4) >> 16);
SET64(3, RD(5) & 0x8000);
{ int t = RD(3) != RD(0); SET64(3, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_0024BCB4; }
SET32(15, RW(15) + 2);
SET64(4, (s32)rd32(c, (RW(29) + 112)));
SET64(22, RD(0) | 0x8000);
c->lo.d[0] = RD(3);
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET64(21, RD(0) | 0xffff);
SET32(24, RW(0) + 32767);
madd_s(c, 0, 2, RSW(3), RSW(6));
SET64(3, RD(5) ^ RD(6));
SET64(3, RD(3) & 0x1fff);
SET32(30, RW(0) + 30);
SET32(20, RW(3) + 1);
SET64(2, RD(2) & 0x7fff);
wr16(c, (RW(4) + 0), (u16)RW(2));
L_0024BAF0:;
SET64(3, rd8(c, (RW(15) + 0)));
mul_s(c, 0, 2, RSW(18), RSW(10));
mul_s(c, 1, 4, RSW(19), RSW(13));
SET64(6, rd8(c, (RW(15) + 18)));
SET32(3, RW(3) << 24);
SET64(10, RD(13) + RD(0));
SET32(5, RSW(3) >> 28);
SET32(6, RW(6) << 24);
mul_s(c, 0, 5, RSW(5), RSW(23));
SET32(12, RSW(3) >> 24);
SET32(4, RW(4) + RW(2));
SET64(2, RD(12) & 0xf);
SET32(3, RSW(6) >> 28);
SET32(6, RSW(6) >> 24);
SET32(4, RSW(4) >> 12);
mul_s(c, 0, 12, RSW(3), RSW(20));
SET64(3, (s64)(s32)0x4b0000);
SET32(5, RW(4) + RW(5));
SET32(2, RW(2) << 2);
SET32(3, RW(3) + 3224);
SET32(11, RW(2) + RW(3));
SET32(2, RW(5) + RW(22));
SET64(3, RSD(5) < (s64)-32768);
SET64(2, RD(21) < RD(2));
mul_s(c, 0, 17, RSW(18), RSW(10));
SET32(15, RW(15) + 1);
SET64(4, RSD(24) < RSD(5));
SET64(3, RD(3) ^ 0x0);
{ int t = RD(2) == RD(0); SET64(9, RD(6) & 0xf); if (t) goto L_0024BB74; }
if (RD(4) != 0) SET64(5, RD(24));
SET32(2, RW(0) + -32768);
if (RD(3) != 0) SET64(5, RD(2));
L_0024BB74:;
mul_s(c, 0, 4, RSW(18), RSW(16));
SET64(16, RD(14) + RD(0));
mul_s(c, 1, 2, RSW(19), RSW(14));
SET64(13, RD(5) + RD(0));
mul_s(c, 0, 3, RSW(19), RSW(13));
mul_s(c, 0, 7, RSW(18), RSW(16));
SET64(10, RD(13) + RD(0));
SET32(2, RW(2) + RW(4));
SET32(2, RSW(2) >> 12);
SET32(3, RW(3) + RW(17));
SET32(5, RW(2) + RW(12));
SET32(6, RSW(3) >> 12);
SET32(3, RW(5) + RW(22));
SET64(2, RSD(5) < (s64)-32768);
SET64(3, RD(21) < RD(3));
SET64(4, RSD(24) < RSD(5));
{ int t = RD(3) == RD(0); SET64(12, RD(2) ^ 0x0); if (t) goto L_0024BBC8; }
if (RD(4) != 0) SET64(5, RD(24));
SET32(2, RW(0) + -32768);
if (RD(12) != 0) SET64(5, RD(2));
L_0024BBC8:;
SET64(12, (s32)rd32(c, (RW(11) + 0)));
SET64(14, RD(5) + RD(0));
mul_s(c, 0, 2, RSW(19), RSW(14));
SET64(5, (s64)(s32)0x4b0000);
mul_s(c, 0, 4, RSW(12), RSW(23));
SET32(5, RW(5) + 3224);
SET32(3, RW(9) << 2);
wr16(c, (RW(25) + 0), (u16)RW(13));
SET32(3, RW(3) + RW(5));
SET64(16, RD(14) + RD(0));
SET32(2, RW(2) + RW(7));
wr16(c, (RW(8) + 0), (u16)RW(14));
SET32(5, RW(6) + RW(4));
SET64(6, (s32)rd32(c, (RW(3) + 0)));
SET32(12, RSW(2) >> 12);
SET32(2, RW(5) + RW(22));
SET64(3, RSD(5) < (s64)-32768);
SET64(2, RD(21) < RD(2));
SET32(25, RW(25) + 2);
SET32(8, RW(8) + 2);
mul_s(c, 0, 6, RSW(6), RSW(20));
SET64(4, RSD(24) < RSD(5));
{ int t = RD(2) == RD(0); SET64(3, RD(3) ^ 0x0); if (t) goto L_0024BC34; }
if (RD(4) != 0) SET64(5, RD(24));
SET32(2, RW(0) + -32768);
if (RD(3) != 0) SET64(5, RD(2));
L_0024BC34:;
SET64(13, RD(5) + RD(0));
SET32(5, RW(12) + RW(6));
SET32(2, RW(5) + RW(22));
SET64(3, RSD(5) < (s64)-32768);
SET64(2, RD(21) < RD(2));
SET64(4, RSD(24) < RSD(5));
{ int t = RD(2) == RD(0); SET64(3, RD(3) ^ 0x0); if (t) goto L_0024BC60; }
if (RD(4) != 0) SET64(5, RD(24));
SET32(2, RW(0) + -32768);
if (RD(3) != 0) SET64(5, RD(2));
L_0024BC60:;
SET64(14, RD(5) + RD(0));
SET32(30, RW(30) + -2);
wr16(c, (RW(25) + 0), (u16)RW(13));
SET32(25, RW(25) + 2);
wr16(c, (RW(8) + 0), (u16)RW(14));
{ int t = RSD(30) >= 0; SET32(8, RW(8) + 2); if (t) { POLL(); goto L_0024BAF0; } }
SET64(6, (s32)rd32(c, (RW(29) + 20)));
SET32(15, RW(15) + 18);
SET64(3, (s32)rd32(c, (RW(29) + 24)));
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(3));
{ int t = RD(2) != RD(0); wr32(c, (RW(29) + 20), RW(6)); if (t) { POLL(); goto L_0024BA20; } }
L_0024BC98:;
SET64(4, (s32)rd32(c, (RW(29) + 4)));
wr16(c, (RW(4) + 2), (u16)RW(10));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
wr16(c, (RW(4) + 0), (u16)RW(13));
SET64(5, (s32)rd32(c, (RW(29) + 8)));
wr16(c, (RW(5) + 2), (u16)RW(16));
wr16(c, (RW(5) + 0), (u16)RW(14));
L_0024BCB4:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(22, rd64(c, (RW(29) + 80)));
SET64(23, rd64(c, (RW(29) + 88)));
SET64(30, rd64(c, (RW(29) + 96)));
SET32(29, RW(29) + 112); return;
}

void JP_F_0024BCE0(Ctx *c) { /* func_0024BCE0 */
ENTER(0x24bce0);
SET64(2, (s64)(s32)0x3f0000);
SET32(10, RW(10) << 16);
SET32(11, RW(11) << 16);
SET64(3, (s32)rd32(c, (RW(2) + 6232)));
SET32(29, RW(29) + -48);
SET32(12, RSW(10) >> 16);
SET32(13, RSW(11) >> 16);
wr64(c, (RW(29) + 32), RD(31));
SET64(10, RD(12) + RD(0));
SET64(11, RD(13) + RD(0));
SET64(14, (s32)rd32(c, (RW(29) + 48)));
SET64(15, (s16)rd16(c, (RW(29) + 56)));
{ int t = RD(3) != RD(0); SET64(2, (s16)rd16(c, (RW(29) + 64))); if (t) goto L_0024BD30; }
SET64(31, rd64(c, (RW(29) + 32)));
wr32(c, (RW(29) + 64), RW(2));
wr32(c, (RW(29) + 56), RW(15));
SET32(29, RW(29) + 48); { JP_F_0024B998(c); return; }
L_0024BD30:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(10, RD(12) + RD(0));
SET64(11, RD(13) + RD(0));
wr32(c, (RW(29) + 64), RW(2));
wr32(c, (RW(29) + 48), RW(14));
wr32(c, (RW(29) + 56), RW(15));
SET32(29, RW(29) + 48); { JP_F_0024B5D0(c); return; }
}

void JP_F_0024BD50(Ctx *c) { /* func_0024BD50 */
ENTER(0x24bd50);
SET64(4, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 6248);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24bd6c); SET32(6, RW(0) + 256); JP_F_001273D0(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(3) + 6240), RW(0));
wr32(c, (RW(2) + 6244), RW(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024BD88(Ctx *c) { /* func_0024BD88 */
ENTER(0x24bd88);
SET64(4, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 6248);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24bda4); SET32(6, RW(0) + 256); JP_F_001273D0(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(3) + 6240), RW(0));
wr32(c, (RW(2) + 6244), RW(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024BDC0(Ctx *c) { /* func_0024BDC0 */
ENTER(0x24bdc0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(2) + 6240), RW(4));
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + 6244), RW(5));
SET32(29, RW(29) + 16); { JP_F_0026C830(c); return; }
}

void JP_F_0024BDE8(Ctx *c) { /* func_0024BDE8 */
ENTER(0x24bde8);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 6248);
SET64(5, RD(4) + RD(0));
SET64(4, RD(16) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24be0c); SET32(6, RW(0) + 255); JP_F_0012A978(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(3) + 6240)));
{ int t = RD(3) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_0024BE28; }
SET64(2, (s64)(s32)0x3f0000);
{ u32 t = RW(3); SET64(31, 0x24be28); SET64(4, (s32)rd32(c, (RW(2) + 6244))); rt_call(c, t); }
L_0024BE28:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0026C198(c); return; }
}

void JP_F_0024BE40(Ctx *c) { /* func_0024BE40 */
ENTER(0x24be40);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(2) + 6248);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
SET32(6, RW(0) + 255);
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24be6c); SET64(4, RD(17) + RD(0)); JP_F_0012A978(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x24be7c); SET32(6, RW(0) + 255); JP_F_0012A610(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(3) + 6240)));
{ int t = RD(3) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0024BE98; }
SET64(2, (s64)(s32)0x3f0000);
{ u32 t = RW(3); SET64(31, 0x24be98); SET64(4, (s32)rd32(c, (RW(2) + 6244))); rt_call(c, t); }
L_0024BE98:;
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0026C198(c); return; }
}

void JP_F_0024BEB0(Ctx *c) { /* func_0024BEB0 */
ENTER(0x24beb0);
SET32(2, RW(0) + 10);
SET32(29, RW(29) + -32);
div_s(c, 0, RSW(4), RSW(2));
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(0) + 10);
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
if (RD(2) == RD(0)) { rt_break(c, 0x24bee0); goto L_0024BEE4; }
L_0024BEE4:;
SET64(8, c->lo.d[0]);
SET64(7, c->hi.d[0]);
SET64(4, RD(8) + RD(0));
wr8(c, (RW(16) + 0), (u8)RW(7));
if (RD(4) != RD(0)) { SET32(5, RW(5) + 1); goto L_0024BF08; }
wr8(c, (RW(16) + 0), (u8)RW(0)); goto L_0024BF44;
L_0024BF08:;
SET64(2, RSD(5) < (s64)32);
{ int t = RD(2) == RD(0); SET32(6, RW(16) + RW(5)); if (t) goto L_0024BF44; }
SET32(2, RW(0) + 10);
SET32(3, RW(0) + 10);
div_s(c, 0, RSW(4), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x24bf24); goto L_0024BF28; }
L_0024BF28:;
SET64(8, c->lo.d[0]);
SET64(7, c->hi.d[0]);
SET64(4, RD(8) + RD(0));
wr8(c, (RW(6) + 0), (u8)RW(7));
if (RD(4) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_0024BF08; } }
wr8(c, (RW(6) + 0), (u8)RW(0));
L_0024BF44:;
SET64(2, (s64)(s32)0x530000);
SET32(17, RW(2) + -16808);
SET64(31, 0x24bf54); SET64(4, RD(17) + RD(0)); JP_F_0012A4D8(c);
SET64(7, RD(2) + RD(0));
SET32(2, RW(18) + -1);
SET64(3, RSD(7) < RSD(2));
if (RD(3) == 0) SET64(7, RD(2));
{ int t = RSD(7) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_0024BF94; }
SET32(2, RW(7) + RW(17));
SET32(6, RW(2) + -1);
L_0024BF78:;
SET32(4, RW(16) + RW(5));
SET32(5, RW(5) + 1);
SET64(3, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + -1);
SET64(2, RSD(5) < RSD(7));
{ int t = RD(2) != RD(0); wr8(c, (RW(4) + 0), (u8)RW(3)); if (t) { POLL(); goto L_0024BF78; } }
L_0024BF94:;
SET32(2, RW(16) + RW(5));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
wr8(c, (RW(2) + 0), (u8)RW(0));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024BFB8(Ctx *c) { /* func_0024BFB8 */
ENTER(0x24bfb8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
SET64(6, RD(17) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24bfe4); SET64(5, RD(16) + RD(0)); JP_F_0024BEB0(c);
SET64(31, 0x24bfec); SET64(4, RD(16) + RD(0)); JP_F_0012A4D8(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(17, RW(17) - RW(2));
SET32(5, RW(5) + 3288);
SET32(6, RW(17) + -1);
SET64(31, 0x24c004); SET64(4, RD(16) + RD(0)); JP_F_0012A610(c);
SET64(31, 0x24c00c); SET64(4, RD(16) + RD(0)); JP_F_0012A4D8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24c018); SET32(16, RW(16) + RW(2)); JP_F_0012A4D8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, RD(18) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 4);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(6, RW(6) - RW(2));
SET32(29, RW(29) + 32); { JP_F_0024BEB0(c); return; }
}

void JP_F_0024C040(Ctx *c) { /* func_0024C040 */
ENTER(0x24c040);
SET32(29, RW(29) + -16);
SET32(5, RW(4) + RW(5));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(5) + -1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00110098(c); return; }
}

void JP_F_0024C060(Ctx *c) { /* func_0024C060 */
ENTER(0x24c060);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(4) + 6504);
SET64(3, (s64)(s32)0x530000);
SET64(2, (s64)(s32)0x4b0000);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(3) + -16776);
SET32(2, RW(2) + 3296);
wr64(c, (RW(29) + 8), RD(31));
wr32(c, (RW(3) + 0), RW(2));
if (RD(4) != RD(0)) { SET32(2, RW(4) + 1); goto L_0024C124; }
SET64(4, (s64)(s32)0x3f0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 6512);
SET64(31, 0x24c0a8); SET32(6, RW(0) + 1088); JP_F_001273D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + 7600);
SET64(5, RD(0) + RD(0));
SET64(31, 0x24c0bc); SET32(6, RW(0) + 1024); JP_F_001273D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + 8632);
SET32(5, RW(0) + 255);
SET64(31, 0x24c0d0); SET32(6, RW(0) + 256); JP_F_001273D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + 8888);
SET64(5, RD(0) + RD(0));
SET64(31, 0x24c0e4); SET32(6, RW(0) + 32); JP_F_001273D0(c);
SET64(6, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET64(7, (s64)(s32)0x3f0000);
SET64(8, (s64)(s32)0x3f0000);
SET64(9, (s64)(s32)0x3f0000);
SET64(5, (s64)(s32)0x3f0000);
SET32(3, RW(0) + -1);
SET32(2, RW(0) + 1);
wr32(c, (RW(5) + 8932), RW(3));
wr32(c, (RW(4) + 8936), RW(2));
wr32(c, (RW(6) + 8920), RW(0));
wr32(c, (RW(7) + 8624), RW(0));
wr32(c, (RW(8) + 8924), RW(0));
wr32(c, (RW(9) + 8928), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(4) + 1);
L_0024C124:;
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024C138(Ctx *c) { /* func_0024C138 */
ENTER(0x24c138);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + 6504);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_0024C1F0; }
SET64(31, 0x24c160);  JP_F_0024D9D0(c);
SET64(12, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET32(10, RW(0) + 1);
SET64(11, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET64(7, (s64)(s32)0x3f0000);
SET64(8, (s64)(s32)0x3f0000);
SET64(9, (s64)(s32)0x3f0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 8888);
SET32(6, RW(0) + 32);
SET32(2, RW(0) + -1);
wr32(c, (RW(12) + 8936), RW(10));
wr32(c, (RW(11) + 8932), RW(2));
wr32(c, (RW(3) + 8928), RW(0));
wr32(c, (RW(7) + 8924), RW(0));
wr32(c, (RW(8) + 8624), RW(0));
SET64(31, 0x24c1ac); wr32(c, (RW(9) + 8920), RW(0)); JP_F_001273D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET32(5, RW(0) + 255);
SET32(4, RW(4) + 8632);
SET64(31, 0x24c1c0); SET32(6, RW(0) + 256); JP_F_001273D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + 7600);
SET64(5, RD(0) + RD(0));
SET64(31, 0x24c1d4); SET32(6, RW(0) + 1024); JP_F_001273D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 6512);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1088);
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
L_0024C1F0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024C200(Ctx *c) { /* func_0024C200 */
ENTER(0x24c200);
SET64(3, RSD(4) < (s64)0);
SET32(5, RW(4) + 2047);
SET64(2, RD(4) + RD(0));
if (RD(3) != 0) SET64(2, RD(5));
SET32(2, RSW(2) >> 11);
SET32(3, RW(2) << 11);
SET32(4, RW(4) - RW(3));
SET64(4, RSD(0) < RSD(4));
SET32(2, RW(2) + RW(4)); return;
}

void JP_F_0024C228(Ctx *c) { /* func_0024C228 */
ENTER(0x24c228);
SET64(2, (s64)(s32)0x3f0000);
SET64(10, RD(4) + RD(0));
SET32(12, RW(2) + 8920);
SET64(13, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(12) + 0)));
SET32(9, RW(10) << 1);
SET64(11, (s64)(s32)0x3f0000);
SET32(11, RW(11) + 8888);
SET32(11, RW(11) + RW(9));
SET32(5, RW(3) + 15);
SET64(4, RSD(3) < (s64)0);
SET64(2, RD(3) + RD(0));
if (RD(4) != 0) SET64(2, RD(5));
SET32(2, RSW(2) >> 4);
SET32(2, RW(2) << 4);
SET32(3, RW(3) - RW(2));
SET32(4, RW(3) << 4);
SET64(5, (s64)(s32)0x3f0000);
SET32(5, RW(5) + 8632);
SET32(5, RW(5) + RW(4));
{ int t = RD(13) != RD(0); wr32(c, (RW(12) + 0), RW(3)); if (t) goto L_0024C298; }
SET64(2, rd16(c, (RW(11) + 0)));
SET64(4, (s64)(s32)0x3f0000);
SET32(2, RW(2) + 1);
wr16(c, (RW(11) + 0), (u16)RW(2)); goto L_0024C2A0;
L_0024C298:;
SET64(4, (s64)(s32)0x3f0000);
SET32(9, RW(10) << 1);
L_0024C2A0:;
SET64(3, (s32)rd32(c, (RW(12) + 0)));
SET32(4, RW(4) + 8888);
wr8(c, (RW(5) + 0), (u8)RW(10));
SET32(4, RW(9) + RW(4));
SET32(3, RW(3) + 1);
wr8(c, (RW(5) + 1), (u8)RW(13));
wr32(c, (RW(5) + 12), RW(8));
wr32(c, (RW(5) + 4), RW(6));
wr32(c, (RW(5) + 8), RW(7));
wr32(c, (RW(12) + 0), RW(3));
SET64(2, rd16(c, (RW(4) + 0)));
wr16(c, (RW(5) + 2), (u16)RW(2)); return;
}

void JP_F_0024C2D8(Ctx *c) { /* func_0024C2D8 */
ENTER(0x24c2d8);
SET64(2, RD(0) | 0xc350);
SET32(2, RW(2) + -1);
L_0024C2E0:;
if (RD(2) != RD(0)) { SET32(2, RW(2) + -1); { POLL(); goto L_0024C2E0; } }
 return;
}

void JP_F_0024C308(Ctx *c) { /* func_0024C308 */
ENTER(0x24c308);
SET32(29, RW(29) + -16);
SET64(4, RD(4) < (u64)(s64)256);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024C328; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 3376); goto L_0024C338;
L_0024C328:;
{ int t = RD(5) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0024C344; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 3432);
L_0024C338:;
SET64(31, 0x24c340);  JP_F_0024BDE8(c);
SET32(2, RW(0) + -3);
L_0024C344:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024C350(Ctx *c) { /* func_0024C350 */
ENTER(0x24c350);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24c37c); SET64(19, RD(7) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x24c390); SET64(7, RD(19) + RD(0)); JP_F_0024C3B8(c);
SET64(31, 0x24c398); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0024C3B8(Ctx *c) { /* func_0024C3B8 */
ENTER(0x24c3b8);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024C440(c); return; }
}

void JP_F_0024C3D8(Ctx *c) { /* func_0024C3D8 */
ENTER(0x24c3d8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24c404); SET64(19, RD(7) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x24c418); SET64(7, RD(19) + RD(0)); JP_F_0024C440(c);
SET64(31, 0x24c420); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0024C440(Ctx *c) { /* func_0024C440 */
ENTER(0x24c440);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 4);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24c464); SET32(18, RW(0) + 3); JP_F_0024C528(c);
{ int t = RSD(2) >= 0;  if (t) goto L_0024C488; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_0024C4A8;
L_0024C478:;
SET64(31, 0x24c480);  JP_F_00251068(c);
SET64(31, 0x24c488);  JP_F_0024C2D8(c);
L_0024C488:;
SET64(31, 0x24c490); SET64(4, RD(16) + RD(0)); JP_F_0024CDB8(c);
{ int t = RD(2) == RD(18); SET64(3, RD(0) + RD(0)); if (t) goto L_0024C4A0; }
{ int t = RD(2) != RD(17); SET32(3, RW(0) + -1); if (t) { POLL(); goto L_0024C478; } }
L_0024C4A0:;
SET64(2, RD(3) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_0024C4A8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024C4C0(Ctx *c) { /* func_0024C4C0 */
ENTER(0x24c4c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24c4ec); SET64(19, RD(7) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x24c500); SET64(7, RD(19) + RD(0)); JP_F_0024C528(c);
SET64(31, 0x24c508); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0024C528(Ctx *c) { /* func_0024C528 */
ENTER(0x24c528);
SET32(29, RW(29) + -16);
SET64(8, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(0) + -64);
SET32(8, RW(8) + 9096);
SET32(9, RW(0) + 2048);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(8, RD(8) & RD(2));
SET32(29, RW(29) + 16); { JP_F_0024C788(c); return; }
}

void JP_F_0024C550(Ctx *c) { /* func_0024C550 */
ENTER(0x24c550);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24c57c); SET64(19, RD(7) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x24c590); SET64(7, RD(19) + RD(0)); JP_F_0024C5B8(c);
SET64(31, 0x24c598); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0024C5B8(Ctx *c) { /* func_0024C5B8 */
ENTER(0x24c5b8);
SET32(29, RW(29) + -16);
SET64(8, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(0) + -64);
SET32(8, RW(8) + 9096);
SET32(9, RW(0) + 2048);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(8, RD(8) & RD(2));
SET32(29, RW(29) + 16); { JP_F_0024C858(c); return; }
}

void JP_F_0024C5E0(Ctx *c) { /* func_0024C5E0 */
ENTER(0x24c5e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24c60c); SET64(19, RD(7) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x24c620); SET64(7, RD(19) + RD(0)); JP_F_0024C648(c);
SET64(31, 0x24c628); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0024C648(Ctx *c) { /* func_0024C648 */
ENTER(0x24c648);
SET32(29, RW(29) + -16);
SET64(8, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(0) + -64);
SET32(8, RW(8) + 9096);
SET32(9, RW(0) + 2048);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(8, RD(8) & RD(2));
SET32(29, RW(29) + 16); { JP_F_0024C918(c); return; }
}

void JP_F_0024C670(Ctx *c) { /* func_0024C670 */
ENTER(0x24c670);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24c69c); SET64(19, RD(7) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x24c6b0); SET64(7, RD(19) + RD(0)); JP_F_0024C6D8(c);
SET64(31, 0x24c6b8); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0024C6D8(Ctx *c) { /* func_0024C6D8 */
ENTER(0x24c6d8);
SET32(29, RW(29) + -16);
SET64(8, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(0) + -64);
SET32(8, RW(8) + 9096);
SET32(9, RW(0) + 2048);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(8, RD(8) & RD(2));
SET32(29, RW(29) + 16); { JP_F_0024C9E8(c); return; }
}

void JP_F_0024C700(Ctx *c) { /* func_0024C700 */
ENTER(0x24c700);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(8) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x24c73c); SET64(21, RD(9) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(20) + RD(0));
SET64(31, 0x24c758); SET64(9, RD(21) + RD(0)); JP_F_0024C788(c);
SET64(31, 0x24c760); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0024C788(Ctx *c) { /* func_0024C788 */
ENTER(0x24c788);
SET64(3, RD(6) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(12, RD(7) + RD(0));
SET64(2, RD(5) + RD(0));
SET32(29, RW(29) + -32);
SET64(10, RD(8) + RD(0));
SET64(11, RD(9) + RD(0));
SET64(9, RD(12) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(7, RD(2) + RD(0));
SET64(8, RD(3) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24c7c0); wr32(c, (RW(29) + 0), RW(0)); JP_F_0024CA20(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024C7D0(Ctx *c) { /* func_0024C7D0 */
ENTER(0x24c7d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(8) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x24c80c); SET64(21, RD(9) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(20) + RD(0));
SET64(31, 0x24c828); SET64(9, RD(21) + RD(0)); JP_F_0024C858(c);
SET64(31, 0x24c830); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0024C858(Ctx *c) { /* func_0024C858 */
ENTER(0x24c858);
SET64(2, RD(7) + RD(0));
SET64(7, RD(0) + RD(0));
SET32(29, RW(29) + -32);
SET64(10, RD(8) + RD(0));
SET64(11, RD(9) + RD(0));
SET64(9, RD(2) + RD(0));
SET64(8, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24c880); wr32(c, (RW(29) + 0), RW(0)); JP_F_0024CA20(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024C890(Ctx *c) { /* func_0024C890 */
ENTER(0x24c890);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(8) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x24c8cc); SET64(21, RD(9) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(20) + RD(0));
SET64(31, 0x24c8e8); SET64(9, RD(21) + RD(0)); JP_F_0024C918(c);
SET64(31, 0x24c8f0); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0024C918(Ctx *c) { /* func_0024C918 */
ENTER(0x24c918);
SET64(3, RD(6) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(12, RD(7) + RD(0));
SET64(2, RD(5) + RD(0));
SET32(29, RW(29) + -32);
SET64(7, RD(2) + RD(0));
SET64(10, RD(8) + RD(0));
SET64(8, RD(3) + RD(0));
SET64(11, RD(9) + RD(0));
SET64(9, RD(12) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24c954); wr32(c, (RW(29) + 0), RW(2)); JP_F_0024CA20(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024C960(Ctx *c) { /* func_0024C960 */
ENTER(0x24c960);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(8) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x24c99c); SET64(21, RD(9) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(20) + RD(0));
SET64(31, 0x24c9b8); SET64(9, RD(21) + RD(0)); JP_F_0024C9E8(c);
SET64(31, 0x24c9c0); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0024C9E8(Ctx *c) { /* func_0024C9E8 */
ENTER(0x24c9e8);
SET64(2, RD(7) + RD(0));
SET64(7, RD(0) + RD(0));
SET32(29, RW(29) + -32);
SET64(10, RD(8) + RD(0));
SET64(11, RD(9) + RD(0));
SET64(9, RD(2) + RD(0));
SET64(8, RD(0) + RD(0));
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24ca14); wr32(c, (RW(29) + 0), RW(2)); JP_F_0024CA20(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024CA20(Ctx *c) { /* func_0024CA20 */
ENTER(0x24ca20);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 48), RD(20));
SET32(20, RW(2) + 8936);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(9) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(11) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 72), RD(23));
SET64(23, RD(10) + RD(0));
wr64(c, (RW(29) + 80), RD(30));
SET64(30, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 64), RD(22));
wr64(c, (RW(29) + 88), RD(31));
wr32(c, (RW(29) + 0), RW(8));
{ int t = RD(2) != RD(3); wr32(c, (RW(29) + 12), RW(6)); if (t) goto L_0024CA98; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24ca8c); SET32(4, RW(4) + 3480); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_0024CC7C;
L_0024CA98:;
SET64(2, (s64)(s32)0x3f0000);
SET32(22, RW(2) + 8928);
SET64(4, (s32)rd32(c, (RW(22) + 0)));
if (RD(4) == RD(0)) { SET64(2, (s64)(s32)0x3f0000); goto L_0024CABC; }
SET64(31, 0x24cab4);  JP_F_0024D918(c);
wr32(c, (RW(22) + 0), RW(0));
SET64(2, (s64)(s32)0x3f0000);
L_0024CABC:;
SET32(4, RW(0) + -1);
SET32(16, RW(2) + 8932);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(4));
{ int t = RD(23) != RD(0); wr32(c, (RW(20) + 0), RW(3)); if (t) goto L_0024CAE0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 3544); goto L_0024CAF0;
L_0024CAE0:;
{ int t = RSD(19) > 0; SET64(4, RD(18) + RD(0)); if (t) goto L_0024CB08; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 3592);
L_0024CAF0:;
SET64(31, 0x24caf8);  JP_F_0024BDE8(c);
SET32(2, RW(0) + 4);
wr32(c, (RW(20) + 0), RW(2));
SET32(2, RW(0) + -3); goto L_0024CC7C;
L_0024CB08:;
SET64(31, 0x24cb10); SET64(5, RD(17) + RD(0)); JP_F_0024C308(c);
{ int t = RSD(2) < 0; SET32(3, RW(0) + 4); if (t) goto L_0024CBA8; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RSD(2) < 0; SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0024CB30; }
SET32(4, RW(4) + 3632); goto L_0024CBD4;
L_0024CB30:;
SET32(3, RW(0) + 2);
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(20) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(16) + 0), RW(18));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 284);
SET64(31, 0x24cb54); wr32(c, (RW(2) + 8924), RW(0)); JP_F_001273D0(c);
SET32(3, RW(18) << 2);
SET64(1, (s64)(s32)0x3f0000);
SET32(1, RW(1) + RW(3));
wr32(c, (RW(1) + 7600), RW(17));
{ int t = RD(21) != RD(0); wr32(c, (RW(17) + 0), RW(0)); if (t) goto L_0024CBB8; }
SET64(5, (s32)rd32(c, (RW(29) + 12)));
SET64(31, 0x24cb78); SET64(4, RD(30) + RD(0)); JP_F_0024D7D8(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(22) + 0), RW(2)); if (t) goto L_0024CBCC; }
SET64(5, (s32)rd32(c, (RW(29) + 12)));
SET64(4, RD(30) + RD(0));
SET32(6, RW(17) + 16);
SET64(7, RD(29) + RD(0));
SET32(8, RW(29) + 4);
SET64(31, 0x24cb9c); SET32(9, RW(29) + 8); JP_F_0024E8B0(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(29) + 4))); goto L_0024CBB0; }
SET32(3, RW(0) + 4);
L_0024CBA8:;
wr32(c, (RW(20) + 0), RW(3)); goto L_0024CC7C;
L_0024CBB0:;
wr32(c, (RW(17) + 276), RW(2)); goto L_0024CC00;
L_0024CBB8:;
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x24cbc4); SET64(4, RD(21) + RD(0)); JP_F_0024D470(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(22) + 0), RW(2)); if (t) goto L_0024CBF0; }
L_0024CBCC:;
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 3680);
L_0024CBD4:;
SET64(31, 0x24cbdc);  JP_F_0024BDE8(c);
SET32(2, RW(0) + 4);
wr32(c, (RW(20) + 0), RW(2));
SET32(2, RW(0) + -1); goto L_0024CC7C;
L_0024CBF0:;
SET64(5, RD(21) + RD(0));
SET32(4, RW(17) + 16);
SET64(31, 0x24cc00); SET32(6, RW(0) + 256); JP_F_0012A978(c);
L_0024CC00:;
SET64(2, (s32)rd32(c, (RW(29) + 96)));
SET32(3, RW(19) + 2047);
wr8(c, (RW(17) + 14), (u8)RW(0));
SET64(6, RD(23) + RD(0));
wr8(c, (RW(17) + 15), (u8)RW(2));
SET64(2, RSD(19) < (s64)0);
if (RD(2) != 0) SET64(19, RD(3));
SET64(2, (s64)(s32)0x3f0000);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET32(18, RW(2) + 8928);
SET32(7, RSW(19) >> 11);
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(17) + 272), RW(4));
SET64(2, (s64)(s32)0x3f0000);
SET64(5, RD(7) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(2) + 8944), RW(23));
SET64(31, 0x24cc4c); wr32(c, (RW(3) + 8948), RW(7)); JP_F_0024DEF0(c);
SET64(16, RD(2) + RD(0));
if (RSD(16) >= 0) { wr32(c, (RW(17) + 8), RW(0)); goto L_0024CC78; }
SET64(31, 0x24cc60); SET64(4, (s32)rd32(c, (RW(18) + 0))); JP_F_0024D918(c);
SET32(2, RW(0) + 4);
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(3) + 8936), RW(2));
SET64(2, RD(16) + RD(0)); goto L_0024CC7C;
L_0024CC78:;
SET64(2, RD(0) + RD(0));
L_0024CC7C:;
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

void JP_F_0024CCB0(Ctx *c) { /* func_0024CCB0 */
ENTER(0x24ccb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 8), RD(31));
SET32(16, RW(16) + 8928);
SET64(31, 0x24cccc); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0024D918(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, (s64)(s32)0x3f0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(2) + 8924), RW(0));
wr32(c, (RW(3) + 8948), RW(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024CCF0(Ctx *c) { /* func_0024CCF0 */
ENTER(0x24ccf0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24cd00);  JP_F_0024EBA0(c);
SET64(31, 0x24cd08);  JP_F_0024CD18(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024EBA8(c); return; }
}

void JP_F_0024CD18(Ctx *c) { /* func_0024CD18 */
ENTER(0x24cd18);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 8928);
wr64(c, (RW(29) + 8), RD(31));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024CD70; }
SET64(3, (s32)rd32(c, (RW(2) + 8932)));
if (RSD(3) < 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024CD74; }
SET64(31, 0x24cd4c);  JP_F_0024E6E0(c);
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024CD64; }
SET64(31, 0x24cd60); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0024DF68(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_0024CD64:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024CCB0(c); return; }
L_0024CD70:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0024CD74:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024CD80(Ctx *c) { /* func_0024CD80 */
ENTER(0x24cd80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24cd94); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24cd9c); SET64(4, RD(16) + RD(0)); JP_F_0024CDB8(c);
SET64(31, 0x24cda4); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024CDB8(Ctx *c) { /* func_0024CDB8 */
ENTER(0x24cdb8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024CE08(c); return; }
}

void JP_F_0024CDD0(Ctx *c) { /* func_0024CDD0 */
ENTER(0x24cdd0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24cde4); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24cdec); SET64(4, RD(16) + RD(0)); JP_F_0024CE08(c);
SET64(31, 0x24cdf4); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

static void JP_B_0024CE08(Ctx *c, u32 entry) { /* func_0024CE08 */
ENTER(entry);
switch (entry) { case 0x24d078: goto L_0024D078; }
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -96);
SET64(3, (s32)rd32(c, (RW(2) + 8932)));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(0) + RD(0));
wr64(c, (RW(29) + 80), RD(30));
SET64(30, RD(0) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 64), RD(22));
wr64(c, (RW(29) + 72), RD(23));
wr64(c, (RW(29) + 88), RD(31));
{ int t = RD(16) == RD(3); wr32(c, (RW(29) + 0), RW(0)); if (t) goto L_0024CE68; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24ce60); SET32(4, RW(4) + 3728); JP_F_0024BDE8(c);
SET32(2, RW(0) + -3); goto L_0024D204;
L_0024CE68:;
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + 8928)));
{ int t = RD(2) != RD(0); SET64(6, (s64)(s32)0x3f0000); if (t) goto L_0024CE90; }
SET32(2, RW(0) + -1);
{ int t = RD(16) == RD(2); SET64(3, (s64)(s32)0x3f0000); if (t) goto L_0024CE90; }
SET64(2, (s32)rd32(c, (RW(3) + 8936))); goto L_0024D204;
L_0024CE90:;
SET64(22, (s64)(s32)0x3f0000);
SET64(31, 0x24ce9c); SET64(4, (s32)rd32(c, (RW(6) + 8928))); JP_F_0024E6E0(c);
SET32(4, RW(0) + 3);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) != RD(4); wr32(c, (RW(22) + 8936), RW(3)); if (t) goto L_0024D204; }
SET32(2, RW(16) << 2);
SET32(4, RW(0) + 1);
SET64(16, (s64)(s32)0x3f0000);
SET32(16, RW(16) + RW(2));
SET64(16, (s32)rd32(c, (RW(16) + 7600)));
SET64(3, (s8)rd8(c, (RW(16) + 15)));
{ int t = RD(3) != RD(4); SET32(2, RW(16) + 282); if (t) goto L_0024CED8; }
SET32(20, RW(16) + 280);
SET32(30, RW(16) + 284); goto L_0024CEE0;
L_0024CED8:;
SET32(21, RW(16) + 280);
wr32(c, (RW(29) + 0), RW(2));
L_0024CEE0:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(2) != RD(0); SET32(17, RW(0) + 1); if (t) goto L_0024D078; }
SET64(23, (s64)(s32)0x3f0000);
SET64(5, (s64)(s32)0x4b0000);
SET32(17, RW(23) + 8944);
SET32(5, RW(5) + 3784);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET32(6, RW(0) + 3);
SET64(31, 0x24cf0c); SET64(19, RD(23) + RD(0)); JP_F_00127180(c);
{ int t = RD(2) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0024CF20; }
SET32(16, RW(22) + 8936);
SET32(4, RW(4) + 3792); goto L_0024D1D4;
L_0024CF20:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(18, RW(0) + 4);
SET64(6, (s64)(s32)0x10000);
SET32(8, RW(2) + 5);
SET64(5, rd8(c, (RW(2) + 7)));
SET64(3, rd8(c, (RW(2) + 6)));
SET32(7, RW(2) + RW(18));
SET64(4, rd8(c, (RW(8) + 0)));
SET32(5, RW(5) << 24);
SET64(2, rd8(c, (RW(7) + 0)));
SET32(3, RW(3) << 16);
SET32(4, RW(4) << 8);
SET64(2, RD(2) | RD(5));
SET64(3, RD(3) | RD(4));
SET64(2, RD(2) | RD(3));
SET64(6, RSD(6) < RSD(2));
{ int t = RD(6) == RD(0); SET32(17, RW(0) + 1); if (t) goto L_0024CF80; }
SET64(4, (s64)(s32)0x4b0000);
SET32(16, RW(22) + 8936);
SET64(31, 0x24cf78); SET32(4, RW(4) + 3848); JP_F_0024BDE8(c);
wr32(c, (RW(16) + 0), RW(18)); goto L_0024D1E4;
L_0024CF80:;
SET64(2, rd8(c, (RW(8) + 0)));
SET64(3, rd8(c, (RW(7) + 0)));
SET32(2, RW(2) << 8);
SET64(4, (s8)rd8(c, (RW(16) + 15)));
SET64(3, RD(3) | RD(2));
SET64(5, rd8(c, (RW(16) + 15)));
SET64(2, RD(3) + RD(0));
wr16(c, (RW(16) + 12), (u16)RW(3));
{ int t = RD(4) != RD(17); wr32(c, (RW(16) + 8), RW(2)); if (t) goto L_0024CFB8; }
SET32(2, RW(2) << 2);
SET32(2, RW(2) + 288); goto L_0024CFC8;
L_0024CFB8:;
SET32(2, RW(2) << 1);
SET32(2, RW(2) + 284);
SET32(2, RW(2) >> 2);
SET32(2, RW(2) << 2);
L_0024CFC8:;
wr32(c, (RW(16) + 4), RW(2));
SET32(2, RW(5) << 24);
SET32(3, RW(0) + 1);
SET32(2, RSW(2) >> 24);
{ int t = RD(2) != RD(3); SET64(3, (s32)rd32(c, (RW(19) + 8944))); if (t) goto L_0024D020; }
SET64(6, rd8(c, (RW(3) + 9)));
SET64(5, rd8(c, (RW(3) + 11)));
SET64(4, rd8(c, (RW(3) + 10)));
SET32(6, RW(6) << 8);
SET64(2, rd8(c, (RW(3) + 8)));
SET32(5, RW(5) << 24);
SET32(4, RW(4) << 16);
SET64(2, RD(2) | RD(5));
SET64(4, RD(4) | RD(6));
SET64(2, RD(2) | RD(4));
SET32(5, RW(2) + 2047);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(5));
SET32(2, RSW(2) >> 11);
wr32(c, (RW(20) + 0), RW(2)); goto L_0024D05C;
L_0024D020:;
SET64(6, rd8(c, (RW(3) + 9)));
SET64(5, rd8(c, (RW(3) + 11)));
SET64(4, rd8(c, (RW(3) + 10)));
SET32(6, RW(6) << 8);
SET64(2, rd8(c, (RW(3) + 8)));
SET32(5, RW(5) << 24);
SET32(4, RW(4) << 16);
SET64(2, RD(2) | RD(5));
SET64(4, RD(4) | RD(6));
SET64(2, RD(2) | RD(4));
SET32(5, RW(2) + 2047);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(5));
SET32(2, RSW(2) >> 11);
wr16(c, (RW(21) + 0), (u16)RW(2));
L_0024D05C:;
SET32(17, RW(0) + 3); goto L_0024D07C;
L_0024D068:;
SET64(31, 0x24d070); wr32(c, (RW(22) + 8936), RW(2)); JP_F_0024CCB0(c);
 goto L_0024D188;
L_0024D078:;
SET64(23, (s64)(s32)0x3f0000);
L_0024D07C:;
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + 8948)));
SET32(20, RW(2) << 9);
SET64(19, RSD(17) < RSD(20));
{ int t = RD(19) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024D198; }
SET64(21, (s64)(s32)0x3f0000);
SET32(18, RW(21) + 8924);
SET64(3, (s8)rd8(c, (RW(16) + 15)));
L_0024D0A0:;
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET64(3, (s32)rd32(c, (RW(23) + 8944))); if (t) goto L_0024D100; }
SET32(2, RW(17) << 2);
SET32(2, RW(2) + RW(3));
SET64(6, rd8(c, (RW(2) + 1)));
SET64(5, rd8(c, (RW(2) + 3)));
SET64(4, rd8(c, (RW(2) + 2)));
SET32(6, RW(6) << 8);
SET64(3, rd8(c, (RW(2) + 0)));
SET32(5, RW(5) << 24);
SET32(4, RW(4) << 16);
SET64(3, RD(3) | RD(5));
SET64(4, RD(4) | RD(6));
SET64(31, 0x24d0e0); SET64(4, RD(3) | RD(4)); JP_F_0024C200(c);
SET64(5, RD(21) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET32(3, RW(4) << 2);
SET32(4, RW(4) + 1);
SET32(3, RW(3) + RW(30));
wr32(c, (RW(3) + 0), RW(2));
wr32(c, (RW(18) + 0), RW(4)); goto L_0024D164;
L_0024D100:;
SET32(2, RW(17) << 2);
SET32(2, RW(2) + RW(3));
SET64(6, rd8(c, (RW(2) + 1)));
SET64(5, rd8(c, (RW(2) + 3)));
SET64(4, rd8(c, (RW(2) + 2)));
SET32(6, RW(6) << 8);
SET64(3, rd8(c, (RW(2) + 0)));
SET32(5, RW(5) << 24);
SET32(4, RW(4) << 16);
SET64(3, RD(3) | RD(5));
SET64(4, RD(4) | RD(6));
SET64(31, 0x24d134); SET64(4, RD(3) | RD(4)); JP_F_0024C200(c);
SET64(4, RD(2) + RD(0));
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(4) & RD(2));
{ int t = RD(2) != RD(0); SET64(5, RD(21) + RD(0)); if (t) goto L_0024D1C8; }
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(3) << 1);
SET32(3, RW(3) + 1);
SET32(2, RW(2) + RW(6));
wr16(c, (RW(2) + 0), (u16)RW(4));
wr32(c, (RW(18) + 0), RW(3));
L_0024D164:;
SET64(2, (s32)rd32(c, (RW(5) + 8924)));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, RSD(2) < RSD(3));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 3); { POLL(); goto L_0024D068; } }
SET32(17, RW(17) + 2);
SET64(19, RSD(17) < RSD(20));
if (RD(19) != RD(0)) { SET64(3, (s8)rd8(c, (RW(16) + 15))); { POLL(); goto L_0024D0A0; } }
L_0024D188:;
{ int t = RD(19) != RD(0); SET64(2, (s32)rd32(c, (RW(22) + 8936))); if (t) goto L_0024D204; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
L_0024D198:;
SET32(17, RW(2) + 8928);
SET64(5, (s32)rd32(c, (RW(3) + 8948)));
SET64(6, (s32)rd32(c, (RW(23) + 8944)));
SET64(31, 0x24d1ac); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_0024DEF0(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_0024D1F8; }
SET32(2, RW(0) + 4);
SET64(31, 0x24d1c0); wr32(c, (RW(22) + 8936), RW(2)); JP_F_0024CCB0(c);
SET64(2, (s32)rd32(c, (RW(22) + 8936))); goto L_0024D204;
L_0024D1C8:;
SET64(4, (s64)(s32)0x4b0000);
SET32(16, RW(22) + 8936);
SET32(4, RW(4) + 3904);
L_0024D1D4:;
SET64(31, 0x24d1dc);  JP_F_0024BDE8(c);
SET32(2, RW(0) + 4);
wr32(c, (RW(16) + 0), RW(2));
L_0024D1E4:;
SET64(31, 0x24d1ec);  JP_F_0024CCB0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_0024D204;
L_0024D1F8:;
SET64(3, (s8)rd8(c, (RW(2) + 1)));
wr32(c, (RW(22) + 8936), RW(3));
SET64(2, (s32)rd32(c, (RW(22) + 8936)));
L_0024D204:;
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
void JP_F_0024CE08(Ctx *c) { JP_B_0024CE08(c, 0x24ce08); }
void JP_F_0024D078(Ctx *c) { JP_B_0024CE08(c, 0x24d078); }

void JP_F_0024D238(Ctx *c) { /* func_0024D238 */
ENTER(0x24d238);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24d24c); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24d254); SET64(4, RD(16) + RD(0)); JP_F_0024D270(c);
SET64(31, 0x24d25c); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024D270(Ctx *c) { /* func_0024D270 */
ENTER(0x24d270);
SET32(4, RW(4) << 2);
SET64(3, (s64)(s32)0x3f0000);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 7600)));
SET64(2, (s32)rd32(c, (RW(3) + 4))); return;
}

void JP_F_0024D288(Ctx *c) { /* func_0024D288 */
ENTER(0x24d288);
SET64(6, (s64)(s32)0x3f0000);
SET64(7, RD(0) + RD(0));
SET32(3, RW(6) + 6512);
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0024D2A8; }
SET64(7, RD(3) + RD(0)); goto L_0024D2D8;
L_0024D2A8:;
SET32(5, RW(5) + 1);
L_0024D2AC:;
SET32(2, RW(5) << 4);
SET64(3, RSD(5) < (s64)16);
{ int t = RD(3) == RD(0); SET32(2, RW(2) + RW(5)); if (t) goto L_0024D2D8; }
SET32(2, RW(2) << 2);
SET32(3, RW(6) + 6512);
SET32(2, RW(2) + RW(3));
SET64(4, (s8)rd8(c, (RW(2) + 0)));
if (RD(4) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_0024D2AC; } }
SET64(7, RD(2) + RD(0));
L_0024D2D8:;
SET64(2, RD(7) + RD(0)); return;
}

void JP_F_0024D2E0(Ctx *c) { /* func_0024D2E0 */
ENTER(0x24d2e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24d2f4);  JP_F_0024D288(c);
SET64(16, RD(2) + RD(0));
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 3976);
{ int t = RD(16) == RD(0); SET32(5, RW(0) + 256); if (t) goto L_0024D324; }
SET64(31, 0x24d310); SET64(4, RD(0) + RD(0)); JP_F_00255F70(c);
SET32(3, RW(0) + 1);
SET64(4, (s64)(s32)0x4b0000);
wr32(c, (RW(16) + 4), RW(2));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 4032); if (t) goto L_0024D338; }
L_0024D324:;
SET64(31, 0x24d32c);  JP_F_0024BDE8(c);
SET64(2, RD(0) + RD(0)); goto L_0024D364;
L_0024D338:;
SET32(2, RW(0) + 512);
wr8(c, (RW(16) + 0), (u8)RW(3));
wr8(c, (RW(16) + 1), (u8)RW(3));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr8(c, (RW(16) + 2), (u8)RW(0));
wr32(c, (RW(16) + 8), RW(0));
wr8(c, (RW(16) + 3), (u8)RW(0));
wr32(c, (RW(16) + 44), RW(2));
SET64(2, RD(16) + RD(0));
L_0024D364:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024D378(Ctx *c) { /* func_0024D378 */
ENTER(0x24d378);
SET32(29, RW(29) + -16);
SET64(3, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
{ int t = RD(3) != RD(0); SET64(2, RD(6) + RD(0)); if (t) goto L_0024D3A8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24d3a0); SET32(4, RW(4) + 4088); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_0024D418;
L_0024D3A8:;
wr32(c, (RW(16) + 56), RW(3));
SET64(8, (s64)(s32)0xf0000);
wr32(c, (RW(16) + 52), RW(2));
SET64(7, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(8, RD(8) | 0xffff);
SET64(31, 0x24d3c8); wr32(c, (RW(16) + 20), RW(0)); JP_F_00256170(c);
SET64(31, 0x24d3d0); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00256310(c);
SET32(3, RW(0) + 4);
{ int t = RD(2) != RD(3);  if (t) goto L_0024D3F0; }
SET64(31, 0x24d3e4); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00256288(c);
SET32(2, RW(0) + -1); goto L_0024D418;
L_0024D3F0:;
SET64(31, 0x24d3f8); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00256FE0(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24d404); wr32(c, (RW(16) + 16), RW(2)); JP_F_00257020(c);
wr32(c, (RW(16) + 60), RW(0));
SET64(3, RD(2) + RD(0));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 64), RW(3));
wr32(c, (RW(16) + 12), RW(3));
L_0024D418:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024D428(Ctx *c) { /* func_0024D428 */
ENTER(0x24d428);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24d444); SET64(17, RD(5) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24d450); SET64(5, RD(17) + RD(0)); JP_F_0024D470(c);
SET64(31, 0x24d458); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024D470(Ctx *c) { /* func_0024D470 */
ENTER(0x24d470);
SET32(29, RW(29) + -32);
SET32(8, RW(0) + -1);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET32(4, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24d4a4); SET64(7, RD(17) + RD(0)); JP_F_0024C228(c);
SET64(31, 0x24d4ac);  JP_F_0024D2E0(c);
SET64(5, RD(18) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0024D4DC; }
SET64(31, 0x24d4c8);  JP_F_0024D378(c);
{ int t = RSD(2) >= 0; SET64(6, RD(18) + RD(0)); if (t) goto L_0024D4E0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x24d4dc); SET64(16, RD(0) + RD(0)); JP_F_0024D918(c);
L_0024D4DC:;
SET64(6, RD(18) + RD(0));
L_0024D4E0:;
SET64(7, RD(17) + RD(0));
SET32(4, RW(0) + 1);
SET32(5, RW(0) + 1);
SET64(31, 0x24d4f4); SET32(8, RW(0) + -1); JP_F_0024C228(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024D510(Ctx *c) { /* func_0024D510 */
ENTER(0x24d510);
SET32(29, RW(29) + -32);
SET64(2, RD(7) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(8) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(16) + 52), RW(6));
wr32(c, (RW(16) + 60), RW(2));
wr32(c, (RW(16) + 56), RW(5));
wr32(c, (RW(16) + 48), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
wr32(c, (RW(16) + 64), RW(17));
SET64(31, 0x24d54c); wr32(c, (RW(16) + 20), RW(0)); JP_F_00256170(c);
SET64(31, 0x24d554); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00256310(c);
SET32(3, RW(0) + 4);
{ int t = RD(2) != RD(3); SET32(4, RW(17) << 11); if (t) goto L_0024D570; }
SET64(31, 0x24d568); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00256288(c);
SET32(2, RW(0) + -1); goto L_0024D57C;
L_0024D570:;
wr32(c, (RW(16) + 16), RW(4));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 12), RW(17));
L_0024D57C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024D590(Ctx *c) { /* func_0024D590 */
ENTER(0x24d590);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24d5bc); SET64(19, RD(7) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x24d5d0); SET64(7, RD(19) + RD(0)); JP_F_0024D5F8(c);
SET64(31, 0x24d5d8); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0024D5F8(Ctx *c) { /* func_0024D5F8 */
ENTER(0x24d5f8);
SET32(29, RW(29) + -48);
SET32(8, RW(0) + -1);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
SET32(4, RW(0) + 1);
SET64(5, RD(0) + RD(0));
SET64(6, RD(20) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x24d63c); SET64(7, RD(19) + RD(0)); JP_F_0024C228(c);
SET64(31, 0x24d644);  JP_F_0024D2E0(c);
SET64(7, RD(17) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(8, RD(16) + RD(0));
SET64(4, RD(18) + RD(0));
SET64(5, RD(20) + RD(0));
{ int t = RD(18) == RD(0); SET64(6, RD(19) + RD(0)); if (t) goto L_0024D67C; }
SET64(31, 0x24d668);  JP_F_0024D510(c);
{ int t = RSD(2) >= 0; SET64(6, RD(20) + RD(0)); if (t) goto L_0024D680; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x24d67c); SET64(18, RD(0) + RD(0)); JP_F_0024D918(c);
L_0024D67C:;
SET64(6, RD(20) + RD(0));
L_0024D680:;
SET64(7, RD(19) + RD(0));
SET32(4, RW(0) + 1);
SET32(5, RW(0) + 1);
SET64(31, 0x24d694); SET32(8, RW(0) + -1); JP_F_0024C228(c);
SET64(2, RD(18) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0024D6B8(Ctx *c) { /* func_0024D6B8 */
ENTER(0x24d6b8);
SET32(29, RW(29) + -304);
wr64(c, (RW(29) + 272), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 280), RD(17));
SET64(17, RD(4) + RD(0));
SET64(5, RD(6) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(4, RD(16) + RD(0));
SET32(7, RW(29) + 256);
SET32(8, RW(29) + 260);
wr64(c, (RW(29) + 288), RD(31));
SET64(31, 0x24d6ec); SET32(9, RW(29) + 264); JP_F_0024E8B0(c);
{ int t = RSD(2) >= 0; SET64(4, RD(16) + RD(0)); if (t) goto L_0024D700; }
SET32(2, RW(0) + -3); goto L_0024D778;
L_0024D700:;
SET64(3, (s32)rd32(c, (RW(29) + 256)));
SET64(2, (s32)rd32(c, (RW(29) + 260)));
wr32(c, (RW(17) + 52), RW(3));
SET64(31, 0x24d714); wr32(c, (RW(17) + 48), RW(2)); JP_F_0024EA40(c);
wr32(c, (RW(17) + 20), RW(0));
SET64(6, (s32)rd32(c, (RW(17) + 52)));
SET64(5, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 264)));
SET64(4, (s32)rd32(c, (RW(29) + 260)));
wr32(c, (RW(17) + 64), RW(3));
SET64(8, RD(3) + RD(0));
SET64(7, RD(4) + RD(0));
wr32(c, (RW(17) + 56), RW(2));
wr32(c, (RW(17) + 60), RW(4));
SET64(31, 0x24d744); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_00256170(c);
SET64(31, 0x24d74c); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_00256310(c);
SET32(3, RW(0) + 4);
if (RD(2) != RD(3)) { SET64(4, (s32)rd32(c, (RW(29) + 264))); goto L_0024D768; }
SET64(31, 0x24d760); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_00256288(c);
SET32(2, RW(0) + -1); goto L_0024D778;
L_0024D768:;
SET64(2, RD(0) + RD(0));
SET32(3, RW(4) << 11);
wr32(c, (RW(17) + 12), RW(4));
wr32(c, (RW(17) + 16), RW(3));
L_0024D778:;
SET64(16, rd64(c, (RW(29) + 272)));
SET64(17, rd64(c, (RW(29) + 280)));
SET64(31, rd64(c, (RW(29) + 288)));
SET32(29, RW(29) + 304); return;
}

void JP_F_0024D790(Ctx *c) { /* func_0024D790 */
ENTER(0x24d790);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24d7ac); SET64(17, RD(5) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24d7b8); SET64(5, RD(17) + RD(0)); JP_F_0024D7D8(c);
SET64(31, 0x24d7c0); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024D7D8(Ctx *c) { /* func_0024D7D8 */
ENTER(0x24d7d8);
SET32(29, RW(29) + -32);
SET32(8, RW(0) + -1);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET32(4, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24d80c); SET64(7, RD(17) + RD(0)); JP_F_0024C228(c);
SET64(31, 0x24d814);  JP_F_0024D2E0(c);
SET64(5, RD(18) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0024D844; }
SET64(31, 0x24d830);  JP_F_0024D6B8(c);
{ int t = RSD(2) >= 0; SET64(6, RD(18) + RD(0)); if (t) goto L_0024D848; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x24d844); SET64(16, RD(0) + RD(0)); JP_F_0024D918(c);
L_0024D844:;
SET64(6, RD(18) + RD(0));
L_0024D848:;
SET64(7, RD(17) + RD(0));
SET32(4, RW(0) + 2);
SET32(5, RW(0) + 1);
SET64(31, 0x24d85c); SET32(8, RW(0) + -1); JP_F_0024C228(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024D878(Ctx *c) { /* func_0024D878 */
ENTER(0x24d878);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(5, (s32)rd32(c, (RW(16) + 8)));
if (RD(5) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024D8DC; }
SET64(2, (s8)rd8(c, (RW(16) + 2)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024D8DC; }
SET64(2, (s64)(s32)0x3f0000);
SET32(4, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(2) + 8624)));
if (RD(3) != RD(4)) { SET64(3, (s32)rd32(c, (RW(5) + 0))); goto L_0024D8C8; }
SET64(5, (s32)rd32(c, (RW(16) + 40)));
SET64(31, 0x24d8c0); SET64(4, (s32)rd32(c, (RW(16) + 36))); JP_F_0024C040(c);
SET64(5, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
L_0024D8C8:;
wr32(c, (RW(16) + 8), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x24d8d8); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 0)));
L_0024D8DC:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024D8E8(Ctx *c) { /* func_0024D8E8 */
ENTER(0x24d8e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24d8fc); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24d904); SET64(4, RD(16) + RD(0)); JP_F_0024D918(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024EBA8(c); return; }
}

void JP_F_0024D918(Ctx *c) { /* func_0024D918 */
ENTER(0x24d918);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET64(6, RD(17) + RD(0));
SET32(7, RW(0) + -1);
SET32(4, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24d944); SET32(8, RW(0) + -1); JP_F_0024C228(c);
{ int t = RD(17) == RD(0); SET32(3, RW(0) + 2); if (t) goto L_0024D9B8; }
SET64(2, (s8)rd8(c, (RW(17) + 1)));
if (RD(2) != RD(3)) { SET64(16, (s32)rd32(c, (RW(17) + 4))); goto L_0024D964; }
SET64(31, 0x24d960); SET64(4, RD(17) + RD(0)); JP_F_0024DF68(c);
SET64(16, (s32)rd32(c, (RW(17) + 4)));
L_0024D964:;
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0024D980; }
wr8(c, (RW(17) + 0), (u8)RW(0));
SET64(31, 0x24d978); wr32(c, (RW(17) + 4), RW(0)); JP_F_00256288(c);
SET64(31, 0x24d980); SET64(4, RD(16) + RD(0)); JP_F_00256000(c);
L_0024D980:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x24d990); SET32(6, RW(0) + 68); JP_F_001273D0(c);
SET32(4, RW(0) + 3);
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(7, RW(0) + -1);
SET32(8, RW(0) + -1);
SET32(29, RW(29) + 32); { JP_F_0024C228(c); return; }
L_0024D9B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024D9D0(Ctx *c) { /* func_0024D9D0 */
ENTER(0x24d9d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24d9e0);  JP_F_0024EBA0(c);
SET64(31, 0x24d9e8);  JP_F_0024D9F8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024EBA8(c); return; }
}

void JP_F_0024D9F8(Ctx *c) { /* func_0024D9F8 */
ENTER(0x24d9f8);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 6512);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
L_0024DA20:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_0024DA38; }
SET64(31, 0x24da34); SET64(4, RD(16) + RD(0)); JP_F_0024D918(c);
SET32(17, RW(17) + -1);
L_0024DA38:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 68); if (t) { POLL(); goto L_0024DA20; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024DA58(Ctx *c) { /* func_0024DA58 */
ENTER(0x24da58);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24da80); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00256310(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_0024DA94; }
SET64(31, 0x24da94); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002565E0(c);
L_0024DA94:;
SET64(31, 0x24da9c);  JP_F_0024A8C0(c);
SET64(6, (s32)rd32(c, (RW(16) + 20)));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET32(5, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(16) + 48)));
SET32(2, RW(2) - RW(6));
wr32(c, (RW(16) + 32), RW(0));
SET64(4, RSD(17) < RSD(2));
SET32(3, RW(3) + RW(6));
if (RD(4) != 0) SET64(2, RD(17));
wr32(c, (RW(16) + 24), RW(3));
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 28), RW(2)); if (t) goto L_0024DAE0; }
SET32(2, RW(0) + 3);
wr8(c, (RW(16) + 1), (u8)RW(2));
SET64(16, RD(0) + RD(0)); goto L_0024DB34;
L_0024DAE0:;
SET64(31, 0x24dae8); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002566C0(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24daf4); SET64(5, RD(18) + RD(0)); JP_F_00257290(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24db00); SET64(5, (s32)rd32(c, (RW(16) + 44))); JP_F_00256F80(c);
SET32(3, RW(0) + 2);
wr8(c, (RW(16) + 1), (u8)RW(3));
SET64(5, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24db18); wr8(c, (RW(16) + 3), (u8)RW(0)); JP_F_002570B0(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24db24); SET64(5, (s32)rd32(c, (RW(16) + 20))); JP_F_00256350(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24db30); SET64(5, (s32)rd32(c, (RW(16) + 28))); JP_F_002564B8(c);
SET64(16, (s32)rd32(c, (RW(16) + 28)));
L_0024DB34:;
SET64(31, 0x24db3c);  JP_F_0024A8D8(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024DB58(Ctx *c) { /* func_0024DB58 */
ENTER(0x24db58);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24db7c); SET64(18, RD(6) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24db8c); SET64(6, RD(18) + RD(0)); JP_F_0024DBB0(c);
SET64(31, 0x24db94); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024DBB0(Ctx *c) { /* func_0024DBB0 */
ENTER(0x24dbb0);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
{ int t = RD(16) != RD(0); SET64(3, RD(6) + RD(0)); if (t) goto L_0024DBD8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 4152); goto L_0024DC00;
L_0024DBD8:;
{ int t = RSD(2) >= 0;  if (t) goto L_0024DBF0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 4192); goto L_0024DC00;
L_0024DBF0:;
if (RD(3) != RD(0)) { SET64(7, (s8)rd8(c, (RW(16) + 1))); goto L_0024DC10; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 4240);
L_0024DC00:;
SET64(31, 0x24dc08);  JP_F_0024BDE8(c);
SET32(2, RW(0) + -3); goto L_0024DC2C;
L_0024DC10:;
SET32(3, RW(0) + 2);
{ int t = RD(7) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0024DC2C; }
SET64(31, 0x24dc24);  JP_F_0024DA58(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 2), (u8)RW(3));
L_0024DC2C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024DC40(Ctx *c) { /* func_0024DC40 */
ENTER(0x24dc40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24dc64); SET64(18, RD(6) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24dc74); SET64(6, RD(18) + RD(0)); JP_F_0024DC98(c);
SET64(31, 0x24dc7c); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024DC98(Ctx *c) { /* func_0024DC98 */
ENTER(0x24dc98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024DBB0(c); return; }
}

void JP_F_0024DCB0(Ctx *c) { /* func_0024DCB0 */
ENTER(0x24dcb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24dcd4); SET64(18, RD(6) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24dce4); SET64(6, RD(18) + RD(0)); JP_F_0024DD08(c);
SET64(31, 0x24dcec); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024DD08(Ctx *c) { /* func_0024DD08 */
ENTER(0x24dd08);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(5) + RD(0));
SET32(4, RW(0) + 4);
SET64(6, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(7, RD(20) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x24dd48); SET64(8, RD(19) + RD(0)); JP_F_0024C228(c);
{ int t = RD(16) != RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0024DD58; }
SET32(4, RW(4) + 4280); goto L_0024DD78;
L_0024DD58:;
{ int t = RSD(20) >= 0; SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0024DD68; }
SET32(4, RW(4) + 4320); goto L_0024DD78;
L_0024DD68:;
if (RD(19) != RD(0)) { SET64(4, (s8)rd8(c, (RW(16) + 1))); goto L_0024DD88; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 4368);
L_0024DD78:;
SET64(31, 0x24dd80);  JP_F_0024BDE8(c);
SET32(2, RW(0) + -3); goto L_0024DE74;
L_0024DD88:;
SET32(3, RW(0) + 2);
{ int t = RD(4) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0024DE74; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(2) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0024DDB0; }
SET64(31, 0x24dda8); SET32(4, RW(4) + 4408); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_0024DE74;
L_0024DDB0:;
SET32(18, RW(20) << 11);
SET64(4, RD(19) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x24ddc4); SET64(6, RD(0) + RD(0)); JP_F_00269A78(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET32(2, RW(0) + -2); if (t) goto L_0024DE74; }
SET64(31, 0x24ddd8);  JP_F_0024A8C0(c);
wr32(c, (RW(16) + 36), RW(19));
wr32(c, (RW(16) + 8), RW(17));
SET64(4, (s64)(s32)0x3f0000);
wr32(c, (RW(16) + 40), RW(18));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 8624)));
{ int t = RD(2) != RD(3); SET64(5, RD(18) + RD(0)); if (t) goto L_0024DE00; }
SET64(31, 0x24de00); SET64(4, RD(19) + RD(0)); JP_F_0024C040(c);
L_0024DE00:;
SET64(31, 0x24de08);  JP_F_0024A8D8(c);
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x24de18); SET64(5, RD(20) + RD(0)); JP_F_0024DA58(c);
SET64(17, RD(2) + RD(0));
if (RSD(17) > 0) { wr8(c, (RW(16) + 2), (u8)RW(0)); goto L_0024DE58; }
SET64(31, 0x24de2c);  JP_F_0024A8C0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(4) == RD(0);  if (t) goto L_0024DE4C; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x24de48);  rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_0024DE4C:;
SET64(31, 0x24de54);  JP_F_0024A8D8(c);
wr8(c, (RW(16) + 2), (u8)RW(0));
L_0024DE58:;
SET64(6, RD(16) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(8, RD(19) + RD(0));
SET32(4, RW(0) + 4);
SET64(31, 0x24de70); SET32(5, RW(0) + 1); JP_F_0024C228(c);
SET64(2, RD(17) + RD(0));
L_0024DE74:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0024DE98(Ctx *c) { /* func_0024DE98 */
ENTER(0x24de98);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24debc); SET64(18, RD(6) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24decc); SET64(6, RD(18) + RD(0)); JP_F_0024DEF0(c);
SET64(31, 0x24ded4); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024DEF0(Ctx *c) { /* func_0024DEF0 */
ENTER(0x24def0);
SET32(29, RW(29) + -16);
SET64(2, RD(6) & 0x3f);
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024DF20; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24df0c); SET32(4, RW(4) + 4456); JP_F_0024BDE8(c);
SET32(2, RW(0) + -3);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_0024DF20:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024DD08(c); return; }
}

void JP_F_0024DF30(Ctx *c) { /* func_0024DF30 */
ENTER(0x24df30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24df44); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24df4c); SET64(4, RD(16) + RD(0)); JP_F_0024DF68(c);
SET64(31, 0x24df54); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024DF68(Ctx *c) { /* func_0024DF68 */
ENTER(0x24df68);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET64(6, RD(16) + RD(0));
SET32(7, RW(0) + -1);
SET32(4, RW(0) + 5);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24df94); SET32(8, RW(0) + -1); JP_F_0024C228(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(16) != RD(0); SET32(4, RW(4) + 4512); if (t) goto L_0024DFB0; }
SET64(31, 0x24dfa8);  JP_F_0024BDE8(c);
SET32(2, RW(0) + -3); goto L_0024E040;
L_0024DFB0:;
SET64(3, (s8)rd8(c, (RW(16) + 1)));
SET32(17, RW(0) + 1);
{ int t = RD(3) == RD(17); SET32(2, RW(0) + 3); if (t) goto L_0024E03C; }
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_0024DFD0; }
wr8(c, (RW(16) + 1), (u8)RW(17)); goto L_0024E03C;
L_0024DFD0:;
{ int t = RD(4) != RD(0);  if (t) goto L_0024DFF0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24dfe4); SET32(4, RW(4) + 4552); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_0024E040;
L_0024DFF0:;
SET64(31, 0x24dff8);  JP_F_002565E0(c);
SET64(31, 0x24e000);  JP_F_0024A8C0(c);
SET64(31, 0x24e008); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002563B8(c);
SET64(3, (s32)rd32(c, (RW(16) + 20)));
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) - RW(3));
SET64(31, 0x24e01c); wr32(c, (RW(16) + 32), RW(2)); JP_F_0024D878(c);
SET64(31, 0x24e024); wr8(c, (RW(16) + 1), (u8)RW(17)); JP_F_0024A8D8(c);
SET32(4, RW(0) + 5);
SET32(5, RW(0) + 1);
SET64(6, RD(16) + RD(0));
SET32(7, RW(0) + -1);
SET64(31, 0x24e03c); SET32(8, RW(0) + -1); JP_F_0024C228(c);
L_0024E03C:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
L_0024E040:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024E058(Ctx *c) { /* func_0024E058 */
ENTER(0x24e058);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24e06c); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24e074); SET64(4, RD(16) + RD(0)); JP_F_0024E090(c);
SET64(31, 0x24e07c); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E090(Ctx *c) { /* func_0024E090 */
ENTER(0x24e090);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET64(6, RD(16) + RD(0));
SET32(7, RW(0) + -1);
SET32(4, RW(0) + 7);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24e0bc); SET32(8, RW(0) + -1); JP_F_0024C228(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(16) != RD(0); SET32(4, RW(4) + 4600); if (t) goto L_0024E0D8; }
SET64(31, 0x24e0d0);  JP_F_0024BDE8(c);
SET32(2, RW(0) + -3); goto L_0024E140;
L_0024E0D8:;
SET64(3, (s8)rd8(c, (RW(16) + 1)));
SET32(17, RW(0) + 1);
{ int t = RD(3) == RD(17); SET32(2, RW(0) + 3); if (t) goto L_0024E13C; }
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_0024E0F8; }
wr8(c, (RW(16) + 1), (u8)RW(17)); goto L_0024E13C;
L_0024E0F8:;
{ int t = RD(4) != RD(0);  if (t) goto L_0024E118; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24e10c); SET32(4, RW(4) + 4640); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_0024E140;
L_0024E118:;
SET64(31, 0x24e120);  JP_F_00256548(c);
wr8(c, (RW(16) + 3), (u8)RW(17));
SET32(4, RW(0) + 7);
SET32(5, RW(0) + 1);
SET64(6, RD(16) + RD(0));
SET32(7, RW(0) + -1);
SET64(31, 0x24e13c); SET32(8, RW(0) + -1); JP_F_0024C228(c);
L_0024E13C:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
L_0024E140:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024E158(Ctx *c) { /* func_0024E158 */
ENTER(0x24e158);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s8)rd8(c, (RW(16) + 1)));
if (RD(2) != RD(3)) { SET64(17, (s8)rd8(c, (RW(16) + 3))); goto L_0024E1C4; }
SET64(31, 0x24e188); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00256310(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24e194); wr8(c, (RW(16) + 1), (u8)RW(2)); JP_F_002563B8(c);
SET64(4, RD(16) + RD(0));
SET64(3, rd8(c, (RW(16) + 1)));
SET64(5, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(3) + -3);
SET32(2, RW(2) - RW(5));
SET64(3, RD(3) < (u64)(s64)2);
SET32(5, RW(5) + RW(2));
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 32), RW(2)); if (t) goto L_0024E1C0; }
SET64(31, 0x24e1c0); wr32(c, (RW(16) + 20), RW(5)); JP_F_0024D878(c);
L_0024E1C0:;
SET64(17, (s8)rd8(c, (RW(16) + 3)));
L_0024E1C4:;
SET32(2, RW(0) + 1);
if (RD(17) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024E20C; }
SET64(31, 0x24e1d8); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00256310(c);
SET64(18, RD(2) + RD(0));
if (RD(18) != RD(17)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024E20C; }
SET64(31, 0x24e1ec); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002563B8(c);
SET64(3, (s32)rd32(c, (RW(16) + 20)));
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) - RW(3));
SET64(31, 0x24e200); wr32(c, (RW(16) + 32), RW(2)); JP_F_0024D878(c);
wr8(c, (RW(16) + 1), (u8)RW(18));
wr8(c, (RW(16) + 3), (u8)RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_0024E20C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024E220(Ctx *c) { /* func_0024E220 */
ENTER(0x24e220);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24e230);  JP_F_0024EBA0(c);
SET64(31, 0x24e238);  JP_F_0024E248(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024EBA8(c); return; }
}

void JP_F_0024E248(Ctx *c) { /* func_0024E248 */
ENTER(0x24e248);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24e268); SET32(18, RW(0) + 1); JP_F_0024A8C0(c);
SET64(2, (s64)(s32)0x3f0000);
SET32(16, RW(2) + 6512);
L_0024E270:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_0024E288; }
SET64(31, 0x24e284); SET64(4, RD(16) + RD(0)); JP_F_0024E158(c);
SET32(17, RW(17) + -1);
L_0024E288:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 68); if (t) { POLL(); goto L_0024E270; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8D8(c); return; }
}

void JP_F_0024E2A8(Ctx *c) { /* func_0024E2A8 */
ENTER(0x24e2a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24e2cc); SET64(18, RD(6) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24e2dc); SET64(6, RD(18) + RD(0)); JP_F_0024E300(c);
SET64(31, 0x24e2e4); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024E300(Ctx *c) { /* func_0024E300 */
ENTER(0x24e300);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
SET32(4, RW(0) + 6);
SET64(6, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(7, RD(18) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24e33c); SET64(8, RD(17) + RD(0)); JP_F_0024C228(c);
if (RD(16) != RD(0)) { SET64(2, (s8)rd8(c, (RW(16) + 1))); goto L_0024E350; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 4688); goto L_0024E3A4;
L_0024E350:;
SET32(19, RW(0) + 2);
{ int t = RD(2) != RD(19);  if (t) goto L_0024E364; }
SET64(31, 0x24e364); SET64(4, RD(16) + RD(0)); JP_F_0024DF68(c);
L_0024E364:;
{ int t = RD(17) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0024E378; }
wr32(c, (RW(16) + 20), RW(18)); goto L_0024E3B8;
L_0024E378:;
{ int t = RD(17) != RD(2);  if (t) goto L_0024E388; }
SET64(2, (s32)rd32(c, (RW(16) + 20))); goto L_0024E394;
L_0024E388:;
{ int t = RD(17) != RD(19); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0024E3A0; }
SET64(2, (s32)rd32(c, (RW(16) + 12)));
L_0024E394:;
SET32(2, RW(2) + RW(18));
wr32(c, (RW(16) + 20), RW(2)); goto L_0024E3B8;
L_0024E3A0:;
SET32(4, RW(4) + 4728);
L_0024E3A4:;
SET64(31, 0x24e3ac);  JP_F_0024BDE8(c);
SET32(2, RW(0) + -3); goto L_0024E3F8;
L_0024E3B8:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
if (RSD(2) >= 0) { SET64(3, (s32)rd32(c, (RW(16) + 12))); goto L_0024E3D0; }
wr32(c, (RW(16) + 20), RW(0)); goto L_0024E3DC;
L_0024E3D0:;
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 20), RW(3)); goto L_0024E3DC; }
L_0024E3DC:;
SET64(7, RD(18) + RD(0));
SET64(8, RD(17) + RD(0));
SET32(4, RW(0) + 6);
SET32(5, RW(0) + 1);
SET64(31, 0x24e3f4); SET64(6, RD(16) + RD(0)); JP_F_0024C228(c);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
L_0024E3F8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0024E418(Ctx *c) { /* func_0024E418 */
ENTER(0x24e418);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24e42c); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24e434); SET64(4, RD(16) + RD(0)); JP_F_0024E450(c);
SET64(31, 0x24e43c); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E450(Ctx *c) { /* func_0024E450 */
ENTER(0x24e450);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024E470; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24e468); SET32(4, RW(4) + 4768); JP_F_0024BDE8(c);
SET32(2, RW(0) + -3); goto L_0024E474;
L_0024E470:;
SET64(2, (s32)rd32(c, (RW(4) + 20)));
L_0024E474:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E480(Ctx *c) { /* func_0024E480 */
ENTER(0x24e480);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24e494); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24e49c); SET64(4, RD(16) + RD(0)); JP_F_0024E4B8(c);
SET64(31, 0x24e4a4); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E4B8(Ctx *c) { /* func_0024E4B8 */
ENTER(0x24e4b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24e4cc); SET64(16, RD(4) + RD(0)); JP_F_0024E530(c);
SET64(3, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(2, RW(3) + 2047);
SET32(3, RW(3) + 4094);
SET64(4, RSD(2) < (s64)0);
if (RD(4) != 0) SET64(2, RD(3));
SET32(2, RSW(2) >> 11);
wr32(c, (RW(16) + 12), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E4F8(Ctx *c) { /* func_0024E4F8 */
ENTER(0x24e4f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24e50c); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24e514); SET64(4, RD(16) + RD(0)); JP_F_0024E530(c);
SET64(31, 0x24e51c); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E530(Ctx *c) { /* func_0024E530 */
ENTER(0x24e530);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0024E558; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24e550); SET32(4, RW(4) + 4808); JP_F_0024BDE8(c);
SET32(2, RW(0) + -3); goto L_0024E598;
L_0024E558:;
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xf7ff);
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) == RD(0);  if (t) goto L_0024E58C; }
SET64(31, 0x24e578); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00257480(c);
SET64(31, 0x24e580); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00256310(c);
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3); SET32(2, RW(0) + -5); if (t) goto L_0024E598; }
L_0024E58C:;
SET64(31, 0x24e594); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00256FE0(c);
wr32(c, (RW(16) + 16), RW(2));
L_0024E598:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E5A8(Ctx *c) { /* func_0024E5A8 */
ENTER(0x24e5a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24e5c4); SET64(17, RD(5) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24e5d0); SET64(5, RD(17) + RD(0)); JP_F_0024E5F0(c);
SET64(31, 0x24e5d8); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024E5F0(Ctx *c) { /* func_0024E5F0 */
ENTER(0x24e5f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0024E620; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24e610); SET32(4, RW(4) + 4856); JP_F_0024BDE8(c);
wr32(c, (RW(16) + 0), RW(0));
SET32(2, RW(0) + -3); goto L_0024E62C;
L_0024E620:;
SET64(2, (s32)rd32(c, (RW(4) + 24)));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 28)));
L_0024E62C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E640(Ctx *c) { /* func_0024E640 */
ENTER(0x24e640);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24e654); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24e65c); SET64(4, RD(16) + RD(0)); JP_F_0024E678(c);
SET64(31, 0x24e664); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E678(Ctx *c) { /* func_0024E678 */
ENTER(0x24e678);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024E698; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24e690); SET32(4, RW(4) + 4904); JP_F_0024BDE8(c);
SET32(2, RW(0) + -3); goto L_0024E69C;
L_0024E698:;
SET64(2, (s32)rd32(c, (RW(4) + 32)));
L_0024E69C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E6A8(Ctx *c) { /* func_0024E6A8 */
ENTER(0x24e6a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24e6bc); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24e6c4); SET64(4, RD(16) + RD(0)); JP_F_0024E6E0(c);
SET64(31, 0x24e6cc); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E6E0(Ctx *c) { /* func_0024E6E0 */
ENTER(0x24e6e0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024E700; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24e6f8); SET32(4, RW(4) + 4952); JP_F_0024BDE8(c);
SET32(2, RW(0) + -3); goto L_0024E704;
L_0024E700:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
L_0024E704:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E710(Ctx *c) { /* func_0024E710 */
ENTER(0x24e710);
SET32(29, RW(29) + -16);
SET32(2, RW(4) << 2);
SET64(4, RD(4) < (u64)(s64)256);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024E730; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 4992); goto L_0024E770;
L_0024E730:;
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + RW(2));
SET64(4, (s32)rd32(c, (RW(4) + 7600)));
{ int t = RD(4) != RD(0);  if (t) goto L_0024E750; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 4992); goto L_0024E770;
L_0024E750:;
if (RSD(5) < 0) { SET64(4, (s64)(s32)0x4b0000); goto L_0024E76C; }
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET64(2, RSD(5) < RSD(2));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0024E77C; }
SET64(4, (s64)(s32)0x4b0000);
L_0024E76C:;
SET32(4, RW(4) + 5032);
L_0024E770:;
SET64(31, 0x24e778);  JP_F_0024BDE8(c);
SET32(2, RW(0) + -3);
L_0024E77C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024E788(Ctx *c) { /* func_0024E788 */
ENTER(0x24e788);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x24e7bc); SET64(20, RD(8) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(31, 0x24e7d4); SET64(8, RD(20) + RD(0)); JP_F_0024E800(c);
SET64(31, 0x24e7dc); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0024E800(Ctx *c) { /* func_0024E800 */
ENTER(0x24e800);
SET32(29, RW(29) + -32);
SET64(2, RD(7) + RD(0));
SET64(9, RD(8) + RD(0));
SET64(8, RD(2) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24e81c); SET64(7, RD(29) + RD(0)); JP_F_0024E8B0(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024E828(Ctx *c) { /* func_0024E828 */
ENTER(0x24e828);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(8) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x24e864); SET64(21, RD(9) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(20) + RD(0));
SET64(31, 0x24e880); SET64(9, RD(21) + RD(0)); JP_F_0024E8B0(c);
SET64(31, 0x24e888); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0024E8B0(Ctx *c) { /* func_0024E8B0 */
ENTER(0x24e8b0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(9) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(8) + RD(0));
wr64(c, (RW(29) + 56), RD(23));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x24e8f4); SET64(23, RD(6) + RD(0)); JP_F_0024E710(c);
SET64(20, RD(2) + RD(0));
if (RSD(20) >= 0) { SET32(2, RW(16) << 2); goto L_0024E918; }
SET32(3, RW(0) + -1);
wr32(c, (RW(21) + 0), RW(0));
wr32(c, (RW(22) + 0), RW(3));
wr32(c, (RW(19) + 0), RW(3)); goto L_0024E9DC;
L_0024E918:;
SET32(4, RW(0) + 1);
SET64(17, (s64)(s32)0x3f0000);
SET32(17, RW(17) + RW(2));
SET64(17, (s32)rd32(c, (RW(17) + 7600)));
SET64(3, (s8)rd8(c, (RW(17) + 15)));
if (RD(3) != RD(4)) { SET64(16, rd16(c, (RW(17) + 280))); goto L_0024E978; }
SET64(16, (s32)rd32(c, (RW(17) + 280)));
{ int t = RSD(18) <= 0; SET32(5, RW(17) + 284); if (t) goto L_0024E964; }
SET64(4, RD(5) + RD(0));
SET64(3, RD(18) + RD(0));
L_0024E948:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(4, RW(4) + 4);
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + RW(2)); if (t) { POLL(); goto L_0024E948; } }
L_0024E964:;
SET32(2, RW(18) << 2);
SET32(2, RW(2) + RW(5));
SET64(3, (s32)rd32(c, (RW(2) + 0))); goto L_0024E9B0;
L_0024E978:;
{ int t = RSD(18) <= 0; SET32(5, RW(17) + 282); if (t) goto L_0024E9A4; }
SET64(4, RD(5) + RD(0));
SET64(3, RD(18) + RD(0));
L_0024E988:;
SET64(2, rd16(c, (RW(4) + 0)));
SET32(4, RW(4) + 2);
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + RW(2)); if (t) { POLL(); goto L_0024E988; } }
L_0024E9A4:;
SET32(2, RW(18) << 1);
SET32(2, RW(2) + RW(5));
SET64(3, rd16(c, (RW(2) + 0)));
L_0024E9B0:;
wr32(c, (RW(19) + 0), RW(3));
SET64(4, RD(23) + RD(0));
SET32(5, RW(17) + 16);
SET64(31, 0x24e9c4); SET32(6, RW(0) + 256); JP_F_0012A978(c);
SET64(4, (s32)rd32(c, (RW(17) + 272)));
SET64(3, (s32)rd32(c, (RW(17) + 276)));
SET64(2, RD(20) + RD(0));
wr32(c, (RW(21) + 0), RW(4));
SET32(3, RW(3) + RW(16));
wr32(c, (RW(22) + 0), RW(3));
L_0024E9DC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(23, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0024EA08(Ctx *c) { /* func_0024EA08 */
ENTER(0x24ea08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24ea1c); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24ea24); SET64(4, RD(16) + RD(0)); JP_F_0024EA40(c);
SET64(31, 0x24ea2c); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024EA40(Ctx *c) { /* func_0024EA40 */
ENTER(0x24ea40);
SET32(4, RW(4) << 2);
SET64(2, (s64)(s32)0x3f0000);
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 7600)));
SET32(2, RW(2) + 16); return;
}

void JP_F_0024EA58(Ctx *c) { /* func_0024EA58 */
ENTER(0x24ea58);
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(2) + 8624), RW(4)); return;
}

void JP_F_0024EA68(Ctx *c) { /* func_0024EA68 */
ENTER(0x24ea68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24ea84); SET64(17, RD(5) + RD(0)); JP_F_0024EBA0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24ea90); SET64(5, RD(17) + RD(0)); JP_F_0024EAA8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024EBA8(c); return; }
}

void JP_F_0024EAA8(Ctx *c) { /* func_0024EAA8 */
ENTER(0x24eaa8);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s8)rd8(c, (RW(4) + 1)));
{ int t = RD(2) != RD(3); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0024EAD0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 5072);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_0024EAD0:;
wr32(c, (RW(4) + 44), RW(5));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024EAE0(Ctx *c) { /* func_0024EAE0 */
ENTER(0x24eae0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24eaf4); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24eafc); SET64(4, RD(16) + RD(0)); JP_F_0024EB18(c);
SET64(31, 0x24eb04); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024EB18(Ctx *c) { /* func_0024EB18 */
ENTER(0x24eb18);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024EB40; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_0024EB40; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00257440(c); return; }
L_0024EB40:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024EB50(Ctx *c) { /* func_0024EB50 */
ENTER(0x24eb50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24eb64); SET64(16, RD(4) + RD(0)); JP_F_0024EBA0(c);
SET64(31, 0x24eb6c); SET64(4, RD(16) + RD(0)); JP_F_0024EB88(c);
SET64(31, 0x24eb74); SET64(16, RD(2) + RD(0)); JP_F_0024EBA8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024EB88(Ctx *c) { /* func_0024EB88 */
ENTER(0x24eb88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00257060(c); return; }
}

void JP_F_0024EBA0(Ctx *c) { /* func_0024EBA0 */
ENTER(0x24eba0);
 return;
}

void JP_F_0024EBA8(Ctx *c) { /* func_0024EBA8 */
ENTER(0x24eba8);
 return;
}

void JP_F_0024EBB0(Ctx *c) { /* func_0024EBB0 */
ENTER(0x24ebb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24ebc0);  JP_F_0024A8F0(c);
SET64(31, 0x24ebc8);  JP_F_0024EBD8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_0024EBD8(Ctx *c) { /* func_0024EBD8 */
ENTER(0x24ebd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24ebec);  JP_F_0024A8C0(c);
SET64(2, (s64)(s32)0x3f0000);
SET32(16, RW(2) + 17480);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0); SET64(31, rd64(c, (RW(29) + 8))); if (t) goto L_0024EC10; }
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024A8D8(c); return; }
L_0024EC10:;
SET32(2, RW(0) + 1);
SET64(31, 0x24ec1c); wr32(c, (RW(16) + 0), RW(2)); JP_F_0024A8D8(c);
SET32(2, RW(0) + 2);
SET64(31, 0x24ec28); wr32(c, (RW(16) + 0), RW(2)); JP_F_0025FBF8(c);
SET32(2, RW(0) + 3);
SET64(31, 0x24ec34); wr32(c, (RW(16) + 0), RW(2)); JP_F_00256DB0(c);
SET32(2, RW(0) + 4);
SET64(31, 0x24ec40); wr32(c, (RW(16) + 0), RW(2)); JP_F_00256D08(c);
SET32(2, RW(0) + 5);
SET64(31, 0x24ec4c); wr32(c, (RW(16) + 0), RW(2)); JP_F_0024E220(c);
SET32(2, RW(0) + 6);
SET64(31, 0x24ec58); wr32(c, (RW(16) + 0), RW(2)); JP_F_00256D08(c);
SET32(2, RW(0) + 7);
SET64(31, 0x24ec64); wr32(c, (RW(16) + 0), RW(2)); JP_F_00256DB0(c);
SET32(2, RW(0) + 8);
SET64(31, 0x24ec70); wr32(c, (RW(16) + 0), RW(2)); JP_F_0025FBF8(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024EC88(Ctx *c) { /* func_0024EC88 */
ENTER(0x24ec88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24ec98);  JP_F_0024A8F0(c);
SET64(31, 0x24eca0);  JP_F_0024ECB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_0024ECB0(Ctx *c) { /* func_0024ECB0 */
ENTER(0x24ecb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024EBB0(c); return; }
}

void JP_F_0024ECC8(Ctx *c) { /* func_0024ECC8 */
ENTER(0x24ecc8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24ecdc);  JP_F_0024A8F0(c);
SET64(31, 0x24ece4);  JP_F_0024ED00(c);
SET64(31, 0x24ecec); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024ED00(Ctx *c) { /* func_0024ED00 */
ENTER(0x24ed00);
SET64(3, (s64)(s32)0x3f0000);
SET32(3, RW(3) + 17480);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_0024ED18(Ctx *c) { /* func_0024ED18 */
ENTER(0x24ed18);
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(2) + 17516), RW(4)); return;
}

void JP_F_0024ED28(Ctx *c) { /* func_0024ED28 */
ENTER(0x24ed28);
SET32(29, RW(29) + -16);
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
}

void JP_F_0024ED40(Ctx *c) { /* func_0024ED40 */
ENTER(0x24ed40);
SET32(29, RW(29) + -16);
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
}

void JP_F_0024ED58(Ctx *c) { /* func_0024ED58 */
ENTER(0x24ed58);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + 17528);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET32(29, RW(29) + 16); { JP_F_00259D80(c); return; }
}

void JP_F_0024ED80(Ctx *c) { /* func_0024ED80 */
ENTER(0x24ed80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24ed90);  JP_F_00264E20(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024EDA0(Ctx *c) { /* func_0024EDA0 */
ENTER(0x24eda0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24edb0); SET64(4, RD(0) + RD(0)); JP_F_0024EDD0(c);
SET64(31, 0x24edb8); SET64(4, RD(0) + RD(0)); JP_F_0024EDF0(c);
SET64(31, 0x24edc0); SET64(4, RD(0) + RD(0)); JP_F_0024ED80(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024EDD0(Ctx *c) { /* func_0024EDD0 */
ENTER(0x24edd0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24ede0);  JP_F_00259D80(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024EDF0(Ctx *c) { /* func_0024EDF0 */
ENTER(0x24edf0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24ee00);  JP_F_0024EBB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024EE10(Ctx *c) { /* func_0024EE10 */
ENTER(0x24ee10);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(4, (s32)rd32(c, (RW(16) + 17504)));
SET32(2, RW(2) + -16768);
SET32(3, RW(3) + 5120);
wr64(c, (RW(29) + 8), RD(31));
wr32(c, (RW(2) + 0), RW(3));
if (RD(4) != RD(0)) { SET32(3, RW(16) + 17504); goto L_0024EF80; }
SET64(31, 0x24ee48);  JP_F_0024A860(c);
SET64(31, 0x24ee50);  JP_F_0024A8C0(c);
SET64(31, 0x24ee58);  JP_F_0026A580(c);
SET64(31, 0x24ee60);  JP_F_00269978(c);
SET64(31, 0x24ee68);  JP_F_00268F60(c);
SET64(31, 0x24ee70);  JP_F_0024BD50(c);
SET64(31, 0x24ee78);  JP_F_00255C20(c);
SET64(31, 0x24ee80);  JP_F_00251E08(c);
SET64(31, 0x24ee88);  JP_F_0024C060(c);
SET64(31, 0x24ee90);  JP_F_00251A80(c);
SET64(31, 0x24ee98);  JP_F_00265378(c);
SET64(31, 0x24eea0);  JP_F_0026CB88(c);
SET64(4, (s64)(s32)0x250000);
SET64(5, RD(0) + RD(0));
SET64(31, 0x24eeb0); SET32(4, RW(4) + -4824); JP_F_00251AB0(c);
SET64(4, (s64)(s32)0x250000);
SET32(4, RW(4) + -4800);
SET64(31, 0x24eec0); SET64(5, RD(0) + RD(0)); JP_F_002652B0(c);
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + 17536);
SET64(5, RD(0) + RD(0));
SET64(31, 0x24eed4); SET32(6, RW(0) + 3136); JP_F_001273D0(c);
SET64(31, 0x24eedc);  JP_F_00250708(c);
SET64(7, RD(2) + RD(0));
SET32(2, RW(0) + 1);
SET64(5, (s64)(s32)0x250000);
SET32(4, RW(0) + 5);
SET32(5, RW(5) + -4704);
{ int t = RD(7) != RD(2); SET64(6, RD(0) + RD(0)); if (t) goto L_0024EF48; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(2) + 17516)));
{ int t = RD(3) != RD(7); SET64(7, RD(0) + RD(0)); if (t) goto L_0024EF48; }
SET64(6, (s64)(s32)0x250000);
SET32(4, RW(0) + 2);
SET32(5, RW(0) + 1);
SET64(31, 0x24ef1c); SET32(6, RW(6) + -4656); JP_F_0026C670(c);
SET64(5, (s64)(s32)0x250000);
SET32(5, RW(5) + -4624);
SET32(4, RW(0) + 4);
SET64(31, 0x24ef30); SET64(6, RD(0) + RD(0)); JP_F_0026C4A8(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(5, (s64)(s32)0x250000);
SET32(4, RW(0) + 5);
SET32(5, RW(5) + -4736);
SET64(6, RD(0) + RD(0));
wr32(c, (RW(3) + 17524), RW(2));
L_0024EF48:;
SET64(31, 0x24ef50);  JP_F_0026C4A8(c);
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(3) + 17512), RW(2));
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET32(2, RW(2) + 17528);
SET32(4, RW(0) + 60);
wr32(c, (RW(2) + 0), RW(0));
SET64(31, 0x24ef74); wr32(c, (RW(3) + 17520), RW(0)); JP_F_00259690(c);
SET64(31, 0x24ef7c);  JP_F_0024A8D8(c);
SET32(3, RW(16) + 17504);
L_0024EF80:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024EFA0(Ctx *c) { /* func_0024EFA0 */
ENTER(0x24efa0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(2) + 17504), RW(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024EE10(c); return; }
}

void JP_F_0024EFC0(Ctx *c) { /* func_0024EFC0 */
ENTER(0x24efc0);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(3) + 17504);
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_0024F090; }
SET64(16, (s64)(s32)0x400000);
SET32(16, RW(16) + 5788);
SET64(31, 0x24eff4); wr32(c, (RW(16) + 0), RW(0)); JP_F_00258138(c);
SET64(31, 0x24effc);  JP_F_00251A98(c);
SET64(31, 0x24f004);  JP_F_0024C138(c);
SET64(31, 0x24f00c);  JP_F_00255C70(c);
SET64(31, 0x24f014);  JP_F_002653F8(c);
SET64(31, 0x24f01c);  JP_F_0024A8C0(c);
SET32(4, RW(0) + 2);
SET64(31, 0x24f028); SET32(5, RW(0) + 1); JP_F_0026C5B0(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + 17524)));
SET64(31, 0x24f038); SET32(4, RW(0) + 4); JP_F_0026C5B0(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + 17512)));
SET64(31, 0x24f048); SET32(4, RW(0) + 5); JP_F_0026C5B0(c);
SET64(31, 0x24f050);  JP_F_0026CBC8(c);
SET64(31, 0x24f058);  JP_F_00251E38(c);
SET64(31, 0x24f060);  JP_F_0024BD88(c);
SET64(31, 0x24f068);  JP_F_00268FE0(c);
SET64(31, 0x24f070);  JP_F_002699F8(c);
SET64(31, 0x24f078);  JP_F_0026A600(c);
SET64(31, 0x24f080);  JP_F_0024A8D8(c);
SET64(31, 0x24f088);  JP_F_0024A890(c);
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(2));
L_0024F090:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024F0A0(Ctx *c) { /* func_0024F0A0 */
ENTER(0x24f0a0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 72), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 80), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 88), RD(21));
wr64(c, (RW(29) + 96), RD(31));
SET64(31, 0x24f0dc); SET32(16, RW(16) + 21696); JP_F_002551D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET64(6, RD(0) + RD(0));
SET32(4, RW(4) + 20672);
SET64(31, 0x24f0f0); SET32(5, RW(0) + 1024); JP_F_00269A78(c);
SET32(5, RW(0) + 32);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24f100); SET64(21, RD(2) + RD(0)); JP_F_00269060(c);
SET32(4, RW(16) + 32);
SET32(5, RW(0) + 32);
SET64(31, 0x24f110); wr32(c, (RW(29) + 0), RW(2)); JP_F_00269060(c);
SET64(16, (s32)rd32(c, (RW(17) + 20)));
SET64(5, RD(29) + RD(0));
SET32(4, RW(0) + 2);
SET64(6, RD(21) + RD(0));
SET64(31, 0x24f128); wr32(c, (RW(29) + 4), RW(2)); JP_F_00255230(c);
SET64(5, RD(18) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(31, 0x24f140); SET64(4, RD(17) + RD(0)); JP_F_002557E0(c);
SET64(31, 0x24f148); SET64(4, RD(17) + RD(0)); JP_F_00255470(c);
SET64(31, 0x24f150);  JP_F_00255B38(c);
SET64(3, (s32)rd32(c, (RW(21) + 0)));
SET32(19, RW(29) + 16);
SET32(6, RW(0) + 1024);
SET64(4, RD(21) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET32(5, RW(0) + 1);
{ u32 t = RW(2); SET64(31, 0x24f170); SET64(7, RD(19) + RD(0)); rt_call(c, t); }
SET64(6, (s32)rd32(c, (RW(29) + 20)));
if (RD(6) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_0024F1A0; }
L_0024F180:;
 { POLL(); goto L_0024F180; }
L_0024F1A0:;
SET32(18, RW(29) + 32);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
{ u32 t = RW(3); SET64(31, 0x24f1b8); SET64(7, RD(18) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 36)));
SET64(6, (s32)rd32(c, (RW(29) + 20)));
SET64(2, RSD(2) < RSD(6));
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(29) + 32))); if (t) goto L_0024F1F0; }
L_0024F1D0:;
 { POLL(); goto L_0024F1D0; }
L_0024F1F0:;
SET64(31, 0x24f1f8); SET64(5, (s32)rd32(c, (RW(29) + 16))); JP_F_00127218(c);
SET64(3, (s32)rd32(c, (RW(21) + 0)));
SET64(6, RD(19) + RD(0));
SET64(4, RD(21) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x24f210); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(6, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x24f228); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, 0x24f230); SET64(4, RD(17) + RD(0)); JP_F_00255598(c);
SET64(31, 0x24f238); SET64(4, RD(17) + RD(0)); JP_F_00255400(c);
SET64(3, (s32)rd32(c, (RW(21) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x24f248); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x24f25c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x24f270);  rt_call(c, t); }
SET64(31, 0x24f278);  JP_F_00255200(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(21, rd64(c, (RW(29) + 88)));
SET64(31, rd64(c, (RW(29) + 96)));
SET32(29, RW(29) + 112); return;
}

void JP_F_0024F2A0(Ctx *c) { /* func_0024F2A0 */
ENTER(0x24f2a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24f2bc); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24f2c8); SET64(5, RD(17) + RD(0)); JP_F_0024F2E0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0024F2E0(Ctx *c) { /* func_0024F2E0 */
ENTER(0x24f2e0);
SET32(29, RW(29) + -16);
SET64(7, (s64)(s32)0xf0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(7, RD(7) | 0xffff);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024F360(c); return; }
}

void JP_F_0024F300(Ctx *c) { /* func_0024F300 */
ENTER(0x24f300);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24f32c); SET64(19, RD(7) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x24f340); SET64(7, RD(19) + RD(0)); JP_F_0024F360(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024A8F8(c); return; }
}

void JP_F_0024F360(Ctx *c) { /* func_0024F360 */
ENTER(0x24f360);
SET32(29, RW(29) + -16);
SET64(2, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(8, RD(7) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(2) + RD(0));
{ int t = RD(4) != RD(0); SET64(2, (s32)rd32(c, (RW(4) + 148))); if (t) goto L_0024F3A0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 5200);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_0024F3A0:;
SET64(31, 0x24f3a8); SET64(4, RD(2) + RD(0)); JP_F_00264B18(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 5248);
{ int t = RSD(2) >= 0; SET64(5, RD(16) + RD(0)); if (t) goto L_0024F3C0; }
SET64(31, 0x24f3c0);  JP_F_0024BE40(c);
L_0024F3C0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024F3D0(Ctx *c) { /* func_0024F3D0 */
ENTER(0x24f3d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24f3f4); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24f404); SET64(6, RD(18) + RD(0)); JP_F_0024F420(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0024F420(Ctx *c) { /* func_0024F420 */
ENTER(0x24f420);
SET32(29, RW(29) + -64);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(4, RD(16) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(5, RD(17) + RD(0));
{ int t = RD(2) != RD(0); SET64(18, (s32)rd32(c, (RW(2) + 148))); if (t) goto L_0024F468; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24f45c); SET32(4, RW(4) + 5280); JP_F_0024BDE8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0024F4D4;
L_0024F468:;
SET64(6, (s32)rd32(c, (RW(2) + 176)));
SET32(7, RW(29) + 16);
SET32(8, RW(29) + 20);
SET64(31, 0x24f47c); SET32(9, RW(29) + 24); JP_F_0024E828(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET32(7, RW(0) + 16); if (t) goto L_0024F4B8; }
SET64(31, 0x24f498);  JP_F_0024EA08(c);
SET64(4, RD(18) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 16)));
SET64(5, RD(2) + RD(0));
SET64(7, (s32)rd32(c, (RW(29) + 20)));
SET64(31, 0x24f4b0); SET64(8, (s32)rd32(c, (RW(29) + 24))); JP_F_00264B18(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0024F4D4;
L_0024F4B8:;
SET64(31, 0x24f4c0);  JP_F_0024BFB8(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 5328);
SET64(31, 0x24f4d0); SET64(5, RD(29) + RD(0)); JP_F_0024BE40(c);
SET64(16, rd64(c, (RW(29) + 32)));
L_0024F4D4:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0024F4E8(Ctx *c) { /* func_0024F4E8 */
ENTER(0x24f4e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24f4fc); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x24f504); SET64(4, RD(16) + RD(0)); JP_F_0024F518(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_0024F518(Ctx *c) { /* func_0024F518 */
ENTER(0x24f518);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
{ int t = RD(16) != RD(0); SET64(17, (s32)rd32(c, (RW(16) + 148))); if (t) goto L_0024F550; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 5368);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024BDE8(c); return; }
L_0024F550:;
SET64(31, 0x24f558);  JP_F_00258488(c);
SET64(31, 0x24f560);  JP_F_0024A8C0(c);
SET64(5, (s32)rd32(c, (RW(16) + 16)));
SET64(31, 0x24f56c); SET64(4, RD(16) + RD(0)); JP_F_00258200(c);
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 20)));
{ u32 t = RW(2); SET64(31, 0x24f580);  rt_call(c, t); }
SET32(3, RW(0) + 4);
SET64(5, (s16)rd16(c, (RW(16) + 62)));
SET64(4, RD(17) + RD(0));
wr8(c, (RW(16) + 2), (u8)RW(3));
SET64(31, 0x24f598); SET32(5, RW(5) << 11); JP_F_00265138(c);
SET64(31, 0x24f5a0);  JP_F_0024A8D8(c);
SET64(31, 0x24f5a8); SET64(4, RD(17) + RD(0)); JP_F_00264CF0(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0025A730(c); return; }
}

void JP_F_0024F5C8(Ctx *c) { /* func_0024F5C8 */
ENTER(0x24f5c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24f5e4); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24f5f0); SET64(5, RD(17) + RD(0)); JP_F_0024F608(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0024F608(Ctx *c) { /* func_0024F608 */
ENTER(0x24f608);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024F628; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 5416);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_0024F628:;
SET64(4, (s32)rd32(c, (RW(4) + 148)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00265248(c); return; }
}

void JP_F_0024F638(Ctx *c) { /* func_0024F638 */
ENTER(0x24f638);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24f654); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24f660); SET64(5, RD(17) + RD(0)); JP_F_0024F678(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0024F678(Ctx *c) { /* func_0024F678 */
ENTER(0x24f678);
SET32(29, RW(29) + -16);
SET64(7, (s64)(s32)0xf0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(7, RD(7) | 0xffff);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024F6F8(c); return; }
}

void JP_F_0024F698(Ctx *c) { /* func_0024F698 */
ENTER(0x24f698);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24f6c4); SET64(19, RD(7) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x24f6d8); SET64(7, RD(19) + RD(0)); JP_F_0024F6F8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024A8F8(c); return; }
}

void JP_F_0024F6F8(Ctx *c) { /* func_0024F6F8 */
ENTER(0x24f6f8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_0024F730; }
if (RD(18) != RD(0)) { SET64(16, (s32)rd32(c, (RW(17) + 148))); goto L_0024F758; }
L_0024F730:;
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 5464);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_0024BDE8(c); return; }
L_0024F758:;
SET64(31, 0x24f760); SET64(4, RD(16) + RD(0)); JP_F_00264D58(c);
SET64(4, RD(17) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(31, 0x24f774); SET64(5, RD(18) + RD(0)); JP_F_0024F360(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24f780); SET32(5, RW(0) + 1); JP_F_00265248(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_0024F518(c); return; }
}

void JP_F_0024F7A8(Ctx *c) { /* func_0024F7A8 */
ENTER(0x24f7a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24f7cc); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24f7dc); SET64(6, RD(18) + RD(0)); JP_F_0024F7F8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0024F7F8(Ctx *c) { /* func_0024F7F8 */
ENTER(0x24f7f8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_0024F838; }
if (RSD(18) > 0) { SET64(4, (s64)(s32)0x4b0000); goto L_0024F83C; }
SET64(2, (s64)(s32)0x10000);
SET64(2, RD(2) < RD(19));
if (RD(2) == RD(0)) { SET64(16, (s32)rd32(c, (RW(17) + 148))); goto L_0024F860; }
L_0024F838:;
SET64(4, (s64)(s32)0x4b0000);
L_0024F83C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 5520);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024BDE8(c); return; }
L_0024F860:;
SET64(31, 0x24f868); SET64(4, RD(16) + RD(0)); JP_F_00264D58(c);
SET64(4, RD(17) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(31, 0x24f878); SET64(5, RD(18) + RD(0)); JP_F_0024F420(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24f884); SET32(5, RW(0) + 1); JP_F_00265248(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024F518(c); return; }
}

void JP_F_0024F8A8(Ctx *c) { /* func_0024F8A8 */
ENTER(0x24f8a8);
 return;
}

void JP_F_0024F8B0(Ctx *c) { /* func_0024F8B0 */
ENTER(0x24f8b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24f8c4); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x24f8cc); SET64(4, RD(16) + RD(0)); JP_F_0024F8E8(c);
SET64(31, 0x24f8d4); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0024F8E8(Ctx *c) { /* func_0024F8E8 */
ENTER(0x24f8e8);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024F910; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24f900); SET32(4, RW(4) + 5568); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_0024F910:;
SET64(4, (s32)rd32(c, (RW(4) + 148)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00264EB0(c); return; }
}

void JP_F_0024F920(Ctx *c) { /* func_0024F920 */
ENTER(0x24f920);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24f934); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x24f93c); SET64(4, RD(16) + RD(0)); JP_F_0024F950(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_0024F950(Ctx *c) { /* func_0024F950 */
ENTER(0x24f950);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024F970; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 5616);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_0024F970:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0024F988; }
SET64(4, (s32)rd32(c, (RW(4) + 148)));
SET32(29, RW(29) + 16); { JP_F_00264CB0(c); return; }
L_0024F988:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0024F990(Ctx *c) { /* func_0024F990 */
ENTER(0x24f990);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(2) + 21824);
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0024F9F4; }
SET64(31, 0x24f9bc); SET64(16, (s64)(s32)0x3f0000); JP_F_0010F550(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + 21776)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x24f9d4); SET32(16, RW(16) + 21912); JP_F_0010F4F0(c);
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(3) + -12752), RW(2));
SET64(5, (s64)(s32)0x400000);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24f9ec); wr32(c, (RW(5) + -12748), RW(17)); JP_F_00250188(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
L_0024F9F4:;
SET32(2, RW(2) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(18) + 0), RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024FA18(Ctx *c) { /* func_0024FA18 */
ENTER(0x24fa18);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(3) + 21824);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) + -1);
wr64(c, (RW(29) + 16), RD(31));
{ int t = RD(2) != RD(0); wr32(c, (RW(17) + 0), RW(2)); if (t) goto L_0024FA68; }
SET64(16, (s64)(s32)0x3f0000);
SET32(16, RW(16) + 21912);
SET64(31, 0x24fa50); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_002501F0(c);
SET64(31, 0x24fa58); SET64(3, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F550(c);
SET64(3, (s64)(s32)0x400000);
SET64(5, (s32)rd32(c, (RW(3) + -12752)));
SET64(31, 0x24fa68); SET64(4, RD(2) + RD(0)); JP_F_0010F4F0(c);
L_0024FA68:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
if (RSD(2) < 0) { wr32(c, (RW(17) + 0), RW(0)); goto L_0024FA74; }
L_0024FA74:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0024FA88(Ctx *c) { /* func_0024FA88 */
ENTER(0x24fa88);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_0024FB48; }
SET64(2, (s64)(s32)0x3f0000);
SET64(16, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + 21776)));
SET32(2, RW(0) + 1);
SET32(16, RW(16) + 21828);
SET64(18, (s64)(s32)0xbeb0000);
wr32(c, (RW(16) + 0), RW(2));
SET64(19, RD(16) + RD(0));
SET64(18, RD(18) | 0xc1ff);
SET64(31, 0x24fae0); SET64(20, (s64)(s32)0x4b0000); JP_F_0010F4F0(c);
SET64(16, RD(0) + RD(0));
L_0024FAE8:;
SET64(31, 0x24faf0); SET64(4, RD(17) + RD(0)); JP_F_00250120(c);
SET64(31, 0x24faf8); SET64(4, RD(17) + RD(0)); JP_F_00250188(c);
SET64(3, RSD(18) < RSD(16));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 1); if (t) goto L_0024FB18; }
{ int t = RD(3) == RD(0);  if (t) { POLL(); goto L_0024FAE8; } }
SET64(31, 0x24fb18); SET32(4, RW(20) + 5712); JP_F_0026C240(c);
L_0024FB18:;
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(21) + RD(0));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); { JP_F_0010F4F0(c); return; }
L_0024FB48:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0024FB70(Ctx *c) { /* func_0024FB70 */
ENTER(0x24fb70);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s64)(s32)0x3f0000);
SET32(2, RW(2) + 21932);
SET64(5, (s32)rd32(c, (RW(3) + 21800)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024FA88(c); return; }
}

void JP_F_0024FB98(Ctx *c) { /* func_0024FB98 */
ENTER(0x24fb98);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s64)(s32)0x3f0000);
SET32(2, RW(2) + 21936);
SET64(5, (s32)rd32(c, (RW(3) + 21804)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024FA88(c); return; }
}

void JP_F_0024FBC0(Ctx *c) { /* func_0024FBC0 */
ENTER(0x24fbc0);
SET64(3, (s64)(s32)0x3f0000);
SET32(3, RW(3) + 21856);
SET64(2, rd64(c, (RW(3) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(3) + 0), RD(2)); return;
}

void JP_F_0024FBD8(Ctx *c) { /* func_0024FBD8 */
ENTER(0x24fbd8);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) + 21944);
wr64(c, (RW(29) + 8), RD(31));
SET64(3, rd64(c, (RW(2) + 0)));
if (RD(3) != RD(0)) { SET64(2, (s64)(s32)0x3f0000); goto L_0024FC14; }
SET64(16, RD(2) + RD(0));
L_0024FC00:;
SET64(31, 0x24fc08);  JP_F_0024FBC0(c);
SET64(2, rd64(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_0024FC00; } }
L_0024FC14:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(3, RW(0) + 1);
SET32(2, RW(2) + 21952);
wr64(c, (RW(2) + 0), RD(3));
SET32(29, RW(29) + 16); { JP_F_0010F4A0(c); return; }
}

void JP_F_0024FC30(Ctx *c) { /* func_0024FC30 */
ENTER(0x24fc30);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(4, RW(2) + 21960);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(3, rd64(c, (RW(4) + 0)));
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024FCA0; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET32(17, RW(2) + 21864);
SET32(16, RW(3) + 21836);
SET64(19, RD(4) + RD(0));
SET32(18, RW(0) + 1);
L_0024FC78:;
SET64(2, rd64(c, (RW(17) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(17) + 0), RD(2));
SET64(31, 0x24fc8c); wr32(c, (RW(16) + 0), RW(18)); JP_F_0026CA10(c);
SET64(31, 0x24fc94); wr32(c, (RW(16) + 0), RW(0)); JP_F_00250170(c);
SET64(2, rd64(c, (RW(19) + 0)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_0024FC78; } }
L_0024FCA0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(3, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(2, RW(2) + 21968);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
wr64(c, (RW(2) + 0), RD(3));
SET32(29, RW(29) + 48); { JP_F_0010F4A0(c); return; }
}

void JP_F_0024FCC8(Ctx *c) { /* func_0024FCC8 */
ENTER(0x24fcc8);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(7, RW(2) + 21976);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(31));
SET64(3, rd64(c, (RW(7) + 0)));
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024FD98; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET64(5, (s64)(s32)0x3f0000);
SET64(6, (s64)(s32)0x3f0000);
SET32(19, RW(2) + 21872);
SET32(22, RW(3) + 21932);
SET32(18, RW(4) + 22056);
SET32(21, RW(5) + 21936);
SET32(17, RW(6) + 21832);
SET64(20, RD(7) + RD(0));
L_0024FD30:;
SET64(2, rd64(c, (RW(19) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(19) + 0), RD(2));
SET64(31, 0x24fd44); SET64(4, (s32)rd32(c, (RW(22) + 0))); JP_F_002501F0(c);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
{ int t = RD(3) != RD(0);  if (t) goto L_0024FD58; }
SET64(31, 0x24fd58);  JP_F_002516B8(c);
L_0024FD58:;
wr32(c, (RW(18) + 0), RW(0));
SET64(31, 0x24fd64); SET32(16, RW(0) + 1); JP_F_00250628(c);
{ int t = RD(2) != RD(16);  if (t) goto L_0024FD74; }
SET64(31, 0x24fd74); SET64(4, (s32)rd32(c, (RW(21) + 0))); JP_F_002501F0(c);
L_0024FD74:;
SET64(31, 0x24fd7c);  JP_F_00251108(c);
SET64(31, 0x24fd84); wr32(c, (RW(17) + 0), RW(16)); JP_F_0026CA28(c);
SET64(31, 0x24fd8c); wr32(c, (RW(17) + 0), RW(0)); JP_F_00250170(c);
SET64(2, rd64(c, (RW(20) + 0)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_0024FD30; } }
L_0024FD98:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(3, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(2, RW(2) + 21984);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
wr64(c, (RW(2) + 0), RD(3));
SET32(29, RW(29) + 64); { JP_F_0010F4A0(c); return; }
}

void JP_F_0024FDD0(Ctx *c) { /* func_0024FDD0 */
ENTER(0x24fdd0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 40), RD(21));
SET64(21, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(21) + 21992);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(31));
SET64(3, rd64(c, (RW(2) + 0)));
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024FE8C; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET64(18, (s64)(s32)0x12000000);
SET32(20, RW(2) + 21880);
SET32(19, RW(3) + 21840);
SET32(17, RW(4) + 22052);
SET32(22, RW(0) + 1);
SET64(18, RD(18) | 0xe0);
L_0024FE30:;
SET64(2, rd64(c, (RW(20) + 0)));
SET64(3, rd16(c, (RW(17) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(20) + 0), RD(2));
{ int t = RD(3) == RD(0); wr32(c, (RW(19) + 0), RW(22)); if (t) goto L_0024FE50; }
SET64(2, rd16(c, (RW(17) + 0)));
wr64(c, (RW(18) + 0), RD(2));
L_0024FE50:;
SET64(31, 0x24fe58);  JP_F_0026CA58(c);
SET64(3, rd16(c, (RW(17) + 0)));
if (RD(3) != RD(0)) { wr64(c, (RW(18) + 0), RD(0)); goto L_0024FE64; }
L_0024FE64:;
wr32(c, (RW(19) + 0), RW(0));
SET32(16, RW(21) + 21992);
SET64(2, rd64(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x3f0000); goto L_0024FE8C; }
SET64(31, 0x24fe80);  JP_F_00250170(c);
SET64(2, rd64(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_0024FE30; } }
L_0024FE8C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(3, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(2, RW(2) + 22000);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
wr64(c, (RW(2) + 0), RD(3));
SET32(29, RW(29) + 64); { JP_F_0010F4A0(c); return; }
}

void JP_F_0024FEC0(Ctx *c) { /* func_0024FEC0 */
ENTER(0x24fec0);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(6, RW(2) + 22008);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(23));
wr64(c, (RW(29) + 64), RD(31));
SET64(3, rd64(c, (RW(6) + 0)));
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024FFC0; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET64(5, (s64)(s32)0x3f0000);
SET32(20, RW(2) + 21888);
SET32(19, RW(3) + 21844);
SET32(18, RW(4) + 21828);
SET32(23, RW(5) + 22056);
SET64(22, RD(6) + RD(0));
SET32(17, RW(0) + 1);
SET64(21, (s64)(s32)0x3f0000);
L_0024FF28:;
SET64(2, rd64(c, (RW(20) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(20) + 0), RD(2));
SET64(31, 0x24ff3c); wr32(c, (RW(19) + 0), RW(17)); JP_F_0026CA88(c);
wr32(c, (RW(19) + 0), RW(0));
SET64(16, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
{ int t = RD(2) != RD(17);  if (t) goto L_0024FF58; }
SET64(31, 0x24ff58); wr32(c, (RW(18) + 0), RW(0)); JP_F_00250170(c);
L_0024FF58:;
{ int t = RD(16) != RD(0);  if (t) goto L_0024FFB4; }
SET64(31, 0x24ff68);  JP_F_00250628(c);
{ int t = RD(2) != RD(17); SET32(16, RW(21) + 21936); if (t) goto L_0024FF90; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24ff7c);  JP_F_00250188(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(3);  if (t) goto L_0024FF90; }
SET64(31, 0x24ff90); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00250120(c);
L_0024FF90:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET32(16, RW(0) + 1);
{ int t = RD(2) == RD(16);  if (t) goto L_0024FFAC; }
SET64(31, 0x24ffa8);  JP_F_002516B8(c);
wr32(c, (RW(23) + 0), RW(16));
L_0024FFAC:;
SET64(31, 0x24ffb4);  JP_F_00250170(c);
L_0024FFB4:;
SET64(2, rd64(c, (RW(22) + 0)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_0024FF28; } }
L_0024FFC0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(3, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(2, RW(2) + 22016);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(23, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
wr64(c, (RW(2) + 0), RD(3));
SET32(29, RW(29) + 80); { JP_F_0010F4A0(c); return; }
}

static void JP_B_0024FFF8(Ctx *c, u32 entry) { /* func_0024FFF8 */
ENTER(entry);
switch (entry) { case 0x250000: goto L_00250000; case 0x250014: goto L_00250014; case 0x250018: goto L_00250018; case 0x25001c: goto L_0025001C; case 0x250020: goto L_00250020; case 0x250024: goto L_00250024; case 0x250028: goto L_00250028; case 0x250030: goto L_00250030; case 0x250034: goto L_00250034; case 0x250038: goto L_00250038; case 0x25003c: goto L_0025003C; case 0x250048: goto L_00250048; case 0x25004c: goto L_0025004C; }
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x3f0000);
L_00250000:;
wr64(c, (RW(29) + 0), RD(16));
SET32(5, RW(2) + 22024);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
L_00250014:;
wr64(c, (RW(29) + 32), RD(20));
L_00250018:;
wr64(c, (RW(29) + 40), RD(21));
L_0025001C:;
wr64(c, (RW(29) + 48), RD(31));
L_00250020:;
SET64(3, rd64(c, (RW(5) + 0)));
L_00250024:;
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0025009C; }
if (0) { L_00250028:; SET64(2, (s64)(s32)0x3f0000); }
SET64(2, (s64)(s32)0x3f0000);
L_00250030:;
SET64(3, (s64)(s32)0x3f0000);
L_00250034:;
SET64(4, (s64)(s32)0x3f0000);
L_00250038:;
SET32(20, RW(2) + 21896);
L_0025003C:;
SET32(19, RW(3) + 21848);
SET32(18, RW(4) + 21828);
SET64(21, RD(5) + RD(0));
L_00250048:;
SET32(17, RW(0) + 1);
L_0025004C:;
L_00250050:;
SET64(2, rd64(c, (RW(20) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(20) + 0), RD(2));
SET64(31, 0x250064); wr32(c, (RW(19) + 0), RW(17)); JP_F_0026CAA0(c);
wr32(c, (RW(19) + 0), RW(0));
SET64(16, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
{ int t = RD(2) != RD(17);  if (t) goto L_00250080; }
SET64(31, 0x250080); wr32(c, (RW(18) + 0), RW(0)); JP_F_00250170(c);
L_00250080:;
{ int t = RD(16) != RD(0);  if (t) goto L_00250090; }
SET64(31, 0x250090);  JP_F_00250170(c);
L_00250090:;
SET64(2, rd64(c, (RW(21) + 0)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_00250050; } }
L_0025009C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(3, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(2, RW(2) + 22032);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
wr64(c, (RW(2) + 0), RD(3));
SET32(29, RW(29) + 64); { JP_F_0010F4A0(c); return; }
}
void JP_F_0024FFF8(Ctx *c) { JP_B_0024FFF8(c, 0x24fff8); }
void JP_F_00250000(Ctx *c) { JP_B_0024FFF8(c, 0x250000); }
void JP_F_00250014(Ctx *c) { JP_B_0024FFF8(c, 0x250014); }
void JP_F_00250018(Ctx *c) { JP_B_0024FFF8(c, 0x250018); }
void JP_F_0025001C(Ctx *c) { JP_B_0024FFF8(c, 0x25001c); }
void JP_F_00250020(Ctx *c) { JP_B_0024FFF8(c, 0x250020); }
void JP_F_00250024(Ctx *c) { JP_B_0024FFF8(c, 0x250024); }
void JP_F_00250028(Ctx *c) { JP_B_0024FFF8(c, 0x250028); }
void JP_F_00250030(Ctx *c) { JP_B_0024FFF8(c, 0x250030); }
void JP_F_00250034(Ctx *c) { JP_B_0024FFF8(c, 0x250034); }
void JP_F_00250038(Ctx *c) { JP_B_0024FFF8(c, 0x250038); }
void JP_F_0025003C(Ctx *c) { JP_B_0024FFF8(c, 0x25003c); }
void JP_F_00250048(Ctx *c) { JP_B_0024FFF8(c, 0x250048); }
void JP_F_0025004C(Ctx *c) { JP_B_0024FFF8(c, 0x25004c); }

void JP_F_002500D0(Ctx *c) { /* func_002500D0 */
ENTER(0x2500d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_00250110; }
SET64(31, 0x2500ec); SET64(5, RD(29) + RD(0)); JP_F_0010F570(c);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET32(5, RW(0) + 12); if (t) goto L_00250108; }
{ int t = RD(3) != RD(5); SET64(16, rd64(c, (RW(29) + 48))); if (t) goto L_00250114; }
L_00250108:;
SET64(31, 0x250110);  JP_F_00110510(c);
L_00250110:;
SET64(16, rd64(c, (RW(29) + 48)));
L_00250114:;
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00250120(Ctx *c) { /* func_00250120 */
ENTER(0x250120);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_00250160; }
SET64(31, 0x25013c); SET64(5, RD(29) + RD(0)); JP_F_0010F560(c);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET32(5, RW(0) + 12); if (t) goto L_00250158; }
{ int t = RD(3) != RD(5); SET64(16, rd64(c, (RW(29) + 48))); if (t) goto L_00250164; }
L_00250158:;
SET64(31, 0x250160);  JP_F_0010F590(c);
L_00250160:;
SET64(16, rd64(c, (RW(29) + 48)));
L_00250164:;
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00250170(Ctx *c) { /* func_00250170 */
ENTER(0x250170);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0010F580(c); return; }
}

void JP_F_00250188(Ctx *c) { /* func_00250188 */
ENTER(0x250188);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(0) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 64), RD(31)); if (t) goto L_002501D4; }
SET64(31, 0x2501ac); SET64(5, RD(29) + RD(0)); JP_F_0010F560(c);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 8);
{ int t = RD(3) == RD(2); SET32(5, RW(0) + 12); if (t) goto L_002501C8; }
{ int t = RD(3) != RD(5); SET64(2, RD(17) + RD(0)); if (t) goto L_002501D8; }
L_002501C8:;
SET64(31, 0x2501d0);  JP_F_0010F5F0(c);
SET64(17, RD(2) + RD(0));
L_002501D4:;
SET64(2, RD(17) + RD(0));
L_002501D8:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002501F0(Ctx *c) { /* func_002501F0 */
ENTER(0x2501f0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(0) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 64), RD(31)); if (t) goto L_00250238; }
SET64(31, 0x250214); SET64(5, RD(29) + RD(0)); JP_F_0010F560(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 8);
{ int t = RD(3) == RD(2); SET32(4, RW(0) + 12); if (t) goto L_00250238; }
if (RD(3) == RD(4)) { SET64(2, RD(17) + RD(0)); goto L_0025023C; }
SET64(31, 0x250234); SET64(4, RD(16) + RD(0)); JP_F_0010F5D0(c);
SET64(17, RD(2) + RD(0));
L_00250238:;
SET64(2, RD(17) + RD(0));
L_0025023C:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00250250(Ctx *c) { /* func_00250250 */
ENTER(0x250250);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -64);
SET64(7, (s32)rd32(c, (RW(2) + -12744)));
SET64(2, (s64)(s32)0x510000);
SET64(5, (s64)(s32)0x250000);
SET64(3, (s64)(s32)0x3f0000);
SET32(5, RW(5) + -1064);
SET32(3, RW(3) + 22064);
SET64(4, RD(29) + RD(0));
SET32(6, RW(0) + 2048);
SET32(2, RW(2) + -6800);
wr64(c, (RW(29) + 48), RD(16));
wr32(c, (RW(29) + 4), RW(5));
wr32(c, (RW(29) + 8), RW(3));
wr64(c, (RW(29) + 56), RD(31));
wr32(c, (RW(29) + 12), RW(6));
wr32(c, (RW(29) + 20), RW(7));
SET64(31, 0x25029c); wr32(c, (RW(29) + 16), RW(2)); JP_F_0010F460(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(5, RD(0) + RD(0));
SET32(16, RW(3) + 21912);
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2502b8); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F480(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_002502D8; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2502d0);  JP_F_002501F0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f0000);
L_002502D8:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2502e4); SET64(5, (s32)rd32(c, (RW(2) + 21780))); JP_F_0010F4F0(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_002502F8(Ctx *c) { /* func_002502F8 */
ENTER(0x2502f8);
SET64(2, (s64)(s32)0x250000);
SET32(29, RW(29) + -64);
SET64(7, RD(5) + RD(0));
SET64(3, RD(4) + RD(0));
SET32(2, RW(2) + -976);
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 56), RD(31));
SET64(6, RD(7) + RD(0));
SET64(5, RD(3) + RD(0));
{ int t = RD(3) != RD(0); wr32(c, (RW(29) + 4), RW(2)); if (t) goto L_00250340; }
SET64(2, (s64)(s32)0x3f0000);
SET32(3, RW(0) + 4096);
SET32(2, RW(2) + 24112);
wr32(c, (RW(29) + 12), RW(3));
wr32(c, (RW(29) + 8), RW(2)); goto L_00250354;
L_00250340:;
SET64(4, (s64)(s32)0x4b0000);
wr32(c, (RW(29) + 8), RW(3));
SET32(4, RW(4) + 5760);
SET64(31, 0x250354); wr32(c, (RW(29) + 12), RW(7)); JP_F_00251820(c);
L_00250354:;
SET64(5, (s64)(s32)0x400000);
SET64(2, (s64)(s32)0x510000);
SET64(3, (s32)rd32(c, (RW(5) + -12744)));
SET64(4, RD(29) + RD(0));
SET32(2, RW(2) + -6800);
SET64(16, (s64)(s32)0x3f0000);
SET32(16, RW(16) + 21916);
wr32(c, (RW(29) + 16), RW(2));
SET64(31, 0x25037c); wr32(c, (RW(29) + 20), RW(3)); JP_F_0010F460(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x250390); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F480(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f0000);
SET64(31, 0x2503a0); SET64(5, (s32)rd32(c, (RW(2) + 21784))); JP_F_0010F4F0(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_002503B0(Ctx *c) { /* func_002503B0 */
ENTER(0x2503b0);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -64);
SET64(7, (s32)rd32(c, (RW(2) + -12744)));
SET64(2, (s64)(s32)0x510000);
SET64(5, (s64)(s32)0x250000);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, (s64)(s32)0x3f0000);
SET32(3, RW(3) + 28208);
SET64(4, RD(29) + RD(0));
SET32(6, RW(0) + 4096);
SET32(5, RW(5) + -824);
SET32(2, RW(2) + -6800);
wr64(c, (RW(29) + 56), RD(31));
wr32(c, (RW(29) + 4), RW(5));
SET32(16, RW(16) + 21920);
wr32(c, (RW(29) + 8), RW(3));
wr32(c, (RW(29) + 12), RW(6));
wr32(c, (RW(29) + 20), RW(7));
SET64(31, 0x250404); wr32(c, (RW(29) + 16), RW(2)); JP_F_0010F460(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x250418); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F480(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f0000);
SET64(31, 0x250428); SET64(5, (s32)rd32(c, (RW(2) + 21788))); JP_F_0010F4F0(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00250438(Ctx *c) { /* func_00250438 */
ENTER(0x250438);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -64);
SET64(7, (s32)rd32(c, (RW(2) + -12744)));
SET64(2, (s64)(s32)0x510000);
SET64(5, (s64)(s32)0x250000);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, (s64)(s32)0x3f0000);
SET32(3, RW(3) + 32304);
SET64(4, RD(29) + RD(0));
SET32(6, RW(0) + 4096);
SET32(5, RW(5) + -560);
SET32(2, RW(2) + -6800);
wr64(c, (RW(29) + 56), RD(31));
wr32(c, (RW(29) + 4), RW(5));
SET32(16, RW(16) + 21924);
wr32(c, (RW(29) + 8), RW(3));
wr32(c, (RW(29) + 12), RW(6));
wr32(c, (RW(29) + 20), RW(7));
SET64(31, 0x25048c); wr32(c, (RW(29) + 16), RW(2)); JP_F_0010F460(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2504a0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F480(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f0000);
SET64(31, 0x2504b0); SET64(5, (s32)rd32(c, (RW(2) + 21792))); JP_F_0010F4F0(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_002504C0(Ctx *c) { /* func_002504C0 */
ENTER(0x2504c0);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -64);
SET64(7, (s32)rd32(c, (RW(2) + -12744)));
SET64(2, (s64)(s32)0x510000);
SET64(5, (s64)(s32)0x250000);
SET64(3, (s64)(s32)0x400000);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, (s64)(s32)0x3f0000);
SET32(3, RW(3) + -29136);
SET64(4, RD(29) + RD(0));
SET32(6, RW(0) + 8192);
SET32(5, RW(5) + -320);
SET32(2, RW(2) + -6800);
SET32(16, RW(16) + 21932);
wr64(c, (RW(29) + 56), RD(31));
wr32(c, (RW(29) + 4), RW(5));
wr32(c, (RW(29) + 8), RW(3));
wr32(c, (RW(29) + 12), RW(6));
wr32(c, (RW(29) + 20), RW(7));
SET64(31, 0x250514); wr32(c, (RW(29) + 16), RW(2)); JP_F_0010F460(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x250528); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F480(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f0000);
SET64(31, 0x250538); SET64(5, (s32)rd32(c, (RW(2) + 21800))); JP_F_0010F4F0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x250544);  JP_F_002501F0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(31, rd64(c, (RW(29) + 56)));
SET64(16, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00250558(Ctx *c) { /* func_00250558 */
ENTER(0x250558);
SET64(2, (s64)(s32)0x250000);
SET32(29, RW(29) + -64);
SET64(7, RD(5) + RD(0));
SET64(3, RD(4) + RD(0));
SET32(2, RW(2) + -8);
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 56), RD(31));
SET64(6, RD(7) + RD(0));
SET64(5, RD(3) + RD(0));
{ int t = RD(3) != RD(0); wr32(c, (RW(29) + 4), RW(2)); if (t) goto L_002505A0; }
SET64(2, (s64)(s32)0x400000);
SET32(3, RW(0) + 8192);
SET32(2, RW(2) + -20944);
wr32(c, (RW(29) + 12), RW(3));
wr32(c, (RW(29) + 8), RW(2)); goto L_002505B4;
L_002505A0:;
SET64(4, (s64)(s32)0x4b0000);
wr32(c, (RW(29) + 8), RW(3));
SET32(4, RW(4) + 5824);
SET64(31, 0x2505b4); wr32(c, (RW(29) + 12), RW(7)); JP_F_00251820(c);
L_002505B4:;
SET64(5, (s64)(s32)0x400000);
SET64(2, (s64)(s32)0x510000);
SET64(3, (s32)rd32(c, (RW(5) + -12744)));
SET64(4, RD(29) + RD(0));
SET32(2, RW(2) + -6800);
SET64(16, (s64)(s32)0x3f0000);
wr32(c, (RW(29) + 20), RW(3));
SET32(16, RW(16) + 21936);
SET64(31, 0x2505dc); wr32(c, (RW(29) + 16), RW(2)); JP_F_0010F460(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2505f0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F480(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f0000);
SET64(31, 0x250600); SET64(5, (s32)rd32(c, (RW(2) + 21804))); JP_F_0010F4F0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x25060c);  JP_F_002501F0(c);
SET64(3, (s64)(s32)0x3f0000);
SET32(3, RW(3) + 21932);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00250628(Ctx *c) { /* func_00250628 */
ENTER(0x250628);
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + 21768))); return;
}

void JP_F_00250638(Ctx *c) { /* func_00250638 */
ENTER(0x250638);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CA10(c); return; }
}

void JP_F_00250650(Ctx *c) { /* func_00250650 */
ENTER(0x250650);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CA28(c); return; }
}

void JP_F_00250668(Ctx *c) { /* func_00250668 */
ENTER(0x250668);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CA58(c); return; }
}

void JP_F_00250680(Ctx *c) { /* func_00250680 */
ENTER(0x250680);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CA70(c); return; }
}

void JP_F_00250698(Ctx *c) { /* func_00250698 */
ENTER(0x250698);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CA88(c); return; }
}

void JP_F_002506B0(Ctx *c) { /* func_002506B0 */
ENTER(0x2506b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CAA0(c); return; }
}

void JP_F_002506C8(Ctx *c) { /* func_002506C8 */
ENTER(0x2506c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2506d8);  JP_F_0026CA10(c);
SET64(31, 0x2506e0);  JP_F_0026CA28(c);
SET64(31, 0x2506e8);  JP_F_0026CA70(c);
SET64(31, 0x2506f0);  JP_F_0026CA88(c);
SET64(31, 0x2506f8);  JP_F_0026CAA0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00250708(Ctx *c) { /* func_00250708 */
ENTER(0x250708);
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + 21764)));
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_00250718(Ctx *c) { /* func_00250718 */
ENTER(0x250718);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C830(c); return; }
}

void JP_F_00250730(Ctx *c) { /* func_00250730 */
ENTER(0x250730);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 64), RD(18));
SET64(18, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 72), RD(31));
SET32(2, RW(2) + 21760);
SET64(5, (s32)rd32(c, (RW(18) + 21764)));
SET32(3, RW(3) + 21852);
SET64(6, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(3) + 0), RW(0));
if (RD(5) != RD(0)) { SET32(3, RW(18) + 21764); goto L_0025089C; }
SET64(31, 0x250778);  JP_F_0026CB88(c);
SET64(4, (s64)(s32)0x250000);
SET64(5, RD(0) + RD(0));
SET64(31, 0x250788); SET32(4, RW(4) + -1648); JP_F_0026C870(c);
SET64(4, (s64)(s32)0x250000);
SET32(4, RW(4) + -1512);
SET64(31, 0x250798); SET64(5, RD(0) + RD(0)); JP_F_0026C888(c);
SET64(2, (s64)(s32)0x530000);
SET64(3, (s64)(s32)0x530000);
SET32(2, RW(2) + -16760);
SET32(3, RW(3) + -16752);
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(3) + 4), RW(0));
{ int t = RD(16) != RD(0); wr32(c, (RW(3) + 0), RW(0)); if (t) goto L_002507F8; }
SET64(17, (s64)(s32)0x3f0000);
SET32(2, RW(0) + 25);
SET32(4, RW(17) + 21776);
SET32(3, RW(0) + 24);
wr32(c, (RW(4) + 24), RW(2));
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 20), RW(3));
SET32(3, RW(0) + 8);
wr32(c, (RW(4) + 0), RW(2));
SET32(2, RW(0) + 16);
wr32(c, (RW(4) + 4), RW(3));
SET32(3, RW(0) + 18);
wr32(c, (RW(4) + 12), RW(2));
wr32(c, (RW(4) + 16), RW(3)); goto L_00250830;
L_002507F8:;
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(17, (s64)(s32)0x3f0000);
SET32(4, RW(17) + 21776);
wr32(c, (RW(4) + 20), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(4) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
wr32(c, (RW(4) + 4), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(4) + 12), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 12)));
wr32(c, (RW(4) + 16), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
wr32(c, (RW(4) + 24), RW(2));
L_00250830:;
SET64(31, 0x250838); SET64(16, (s64)(s32)0x3f0000); JP_F_0010F550(c);
SET32(16, RW(16) + 21928);
SET64(5, RD(29) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(31, 0x25084c); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F560(c);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(29) + 24)));
SET64(31, 0x25085c); wr32(c, (RW(3) + -12744), RW(2)); JP_F_00250250(c);
SET64(31, 0x250864);  JP_F_002503B0(c);
SET64(31, 0x25086c);  JP_F_00250438(c);
SET64(31, 0x250874);  JP_F_002504C0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(17) + 21776);
SET64(31, 0x250884); SET64(5, (s32)rd32(c, (RW(2) + 20))); JP_F_0010F4F0(c);
SET64(5, (s64)(s32)0x250000);
SET32(5, RW(5) + -1168);
SET32(4, RW(0) + 6);
SET64(31, 0x250898); SET64(6, RD(0) + RD(0)); JP_F_0026C798(c);
SET32(3, RW(18) + 21764);
L_0025089C:;
SET64(18, rd64(c, (RW(29) + 64)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET32(2, RW(2) + 1);
SET64(31, rd64(c, (RW(29) + 72)));
wr32(c, (RW(3) + 0), RW(2));
SET32(29, RW(29) + 80); return;
}

void JP_F_002508C0(Ctx *c) { /* func_002508C0 */
ENTER(0x2508c0);
SET64(3, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET64(5, (s64)(s32)0x3f0000);
SET64(6, (s64)(s32)0x3f0000);
SET64(7, (s64)(s32)0x3f0000);
SET64(8, (s64)(s32)0x3f0000);
SET32(2, RW(0) + 1);
SET32(3, RW(3) + 21944);
SET32(4, RW(4) + 21960);
SET32(5, RW(5) + 21976);
SET32(6, RW(6) + 21992);
SET32(7, RW(7) + 22008);
SET32(8, RW(8) + 22024);
wr64(c, (RW(3) + 0), RD(2));
wr64(c, (RW(4) + 0), RD(2));
wr64(c, (RW(5) + 0), RD(2));
wr64(c, (RW(6) + 0), RD(2));
wr64(c, (RW(7) + 0), RD(2));
wr64(c, (RW(8) + 0), RD(2)); return;
}

void JP_F_00250910(Ctx *c) { /* func_00250910 */
ENTER(0x250910);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + 21764);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_00250998; }
SET64(31, 0x250938);  JP_F_002508C0(c);
SET64(31, 0x250940);  JP_F_00250A78(c);
SET64(31, 0x250948);  JP_F_00250C18(c);
SET64(31, 0x250950);  JP_F_00250B48(c);
SET64(31, 0x250958);  JP_F_00250E18(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x400000);
SET32(2, RW(2) + 21928);
SET64(5, (s32)rd32(c, (RW(3) + -12744)));
SET64(31, 0x250970); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_0010F4F0(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x25097c); SET64(5, RD(0) + RD(0)); JP_F_0026C870(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x250988); SET64(5, RD(0) + RD(0)); JP_F_0026C888(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CBC8(c); return; }
L_00250998:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002509A8(Ctx *c) { /* func_002509A8 */
ENTER(0x2509a8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(22) + 22032);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, rd64(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(21, (s64)(s32)0x3f0000); if (t) goto L_00250A30; }
SET64(20, (s64)(s32)0x3f0000);
SET64(19, RD(3) + RD(0));
SET32(18, RW(21) + 22024);
SET32(17, RW(0) + 1);
SET32(16, RW(20) + 21936);
L_002509F8:;
wr64(c, (RW(18) + 0), RD(17));
SET32(5, RW(0) + 1);
SET64(31, 0x250a08); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F4F0(c);
SET64(31, 0x250a10); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F590(c);
SET64(31, 0x250a18); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00250188(c);
SET64(3, rd64(c, (RW(19) + 0)));
{ int t = RD(3) == RD(0); SET32(2, RW(22) + 22032); if (t) { POLL(); goto L_002509F8; } }
SET64(22, rd64(c, (RW(29) + 48))); goto L_00250A3C;
L_00250A30:;
SET64(20, (s64)(s32)0x3f0000);
SET32(2, RW(22) + 22032);
SET64(22, rd64(c, (RW(29) + 48)));
L_00250A3C:;
SET32(3, RW(21) + 22024);
SET64(21, rd64(c, (RW(29) + 40)));
SET32(4, RW(20) + 21936);
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 56)));
wr64(c, (RW(2) + 0), RD(0));
wr64(c, (RW(3) + 0), RD(0));
wr32(c, (RW(4) + 0), RW(0));
SET32(29, RW(29) + 64); return;
}

void JP_F_00250A78(Ctx *c) { /* func_00250A78 */
ENTER(0x250a78);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(22) + 22016);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, rd64(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(21, (s64)(s32)0x3f0000); if (t) goto L_00250B00; }
SET64(20, (s64)(s32)0x3f0000);
SET64(19, RD(3) + RD(0));
SET32(18, RW(21) + 22008);
SET32(17, RW(0) + 1);
SET32(16, RW(20) + 21932);
L_00250AC8:;
wr64(c, (RW(18) + 0), RD(17));
SET32(5, RW(0) + 1);
SET64(31, 0x250ad8); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F4F0(c);
SET64(31, 0x250ae0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F590(c);
SET64(31, 0x250ae8); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00250188(c);
SET64(3, rd64(c, (RW(19) + 0)));
{ int t = RD(3) == RD(0); SET32(2, RW(22) + 22016); if (t) { POLL(); goto L_00250AC8; } }
SET64(22, rd64(c, (RW(29) + 48))); goto L_00250B0C;
L_00250B00:;
SET64(20, (s64)(s32)0x3f0000);
SET32(2, RW(22) + 22016);
SET64(22, rd64(c, (RW(29) + 48)));
L_00250B0C:;
SET32(3, RW(21) + 22008);
SET64(21, rd64(c, (RW(29) + 40)));
SET32(4, RW(20) + 21932);
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 56)));
wr64(c, (RW(2) + 0), RD(0));
wr64(c, (RW(3) + 0), RD(0));
wr32(c, (RW(4) + 0), RW(0));
SET32(29, RW(29) + 64); return;
}

void JP_F_00250B48(Ctx *c) { /* func_00250B48 */
ENTER(0x250b48);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(22) + 21984);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, rd64(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(21, (s64)(s32)0x3f0000); if (t) goto L_00250BD0; }
SET64(20, (s64)(s32)0x3f0000);
SET64(19, RD(3) + RD(0));
SET32(18, RW(21) + 21976);
SET32(17, RW(0) + 1);
SET32(16, RW(20) + 21920);
L_00250B98:;
wr64(c, (RW(18) + 0), RD(17));
SET32(5, RW(0) + 1);
SET64(31, 0x250ba8); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F4F0(c);
SET64(31, 0x250bb0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F590(c);
SET64(31, 0x250bb8); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00250188(c);
SET64(3, rd64(c, (RW(19) + 0)));
{ int t = RD(3) == RD(0); SET32(2, RW(22) + 21984); if (t) { POLL(); goto L_00250B98; } }
SET64(22, rd64(c, (RW(29) + 48))); goto L_00250BDC;
L_00250BD0:;
SET64(20, (s64)(s32)0x3f0000);
SET32(2, RW(22) + 21984);
SET64(22, rd64(c, (RW(29) + 48)));
L_00250BDC:;
SET32(3, RW(21) + 21976);
SET64(21, rd64(c, (RW(29) + 40)));
SET32(4, RW(20) + 21920);
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 56)));
wr64(c, (RW(2) + 0), RD(0));
wr64(c, (RW(3) + 0), RD(0));
wr32(c, (RW(4) + 0), RW(0));
SET32(29, RW(29) + 64); return;
}

void JP_F_00250C18(Ctx *c) { /* func_00250C18 */
ENTER(0x250c18);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) + 21840);
wr64(c, (RW(29) + 8), RD(17));
SET32(4, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(23));
wr64(c, (RW(29) + 64), RD(31));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) != RD(4); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_00250C88; }
SET64(21, (s64)(s32)0x3f0000);
SET32(2, RW(21) + 22000);
L_00250C60:;
SET64(3, rd64(c, (RW(2) + 0)));
{ int t = RD(3) == RD(0); SET64(23, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_00250C60; } }
SET64(22, (s64)(s32)0x3f0000); goto L_00250D04;
L_00250C88:;
SET64(21, (s64)(s32)0x3f0000);
SET32(3, RW(2) + 22060);
SET32(4, RW(21) + 22000);
wr32(c, (RW(3) + 0), RW(0));
SET64(2, rd64(c, (RW(4) + 0)));
{ int t = RD(2) != RD(0); SET64(23, (s64)(s32)0x3f0000); if (t) goto L_00250D00; }
SET64(22, (s64)(s32)0x3f0000);
SET64(17, RD(3) + RD(0));
SET64(20, RD(4) + RD(0));
SET32(19, RW(23) + 21992);
SET32(18, RW(0) + 1);
SET32(16, RW(22) + 21924);
L_00250CC0:;
wr64(c, (RW(19) + 0), RD(18));
SET32(5, RW(0) + 1);
SET64(31, 0x250cd0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F4F0(c);
SET64(31, 0x250cd8); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F590(c);
SET64(31, 0x250ce0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00250188(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(2, rd64(c, (RW(20) + 0)));
{ int t = RD(2) == RD(0); SET32(2, RW(21) + 22000); if (t) { POLL(); goto L_00250CC0; } }
SET64(21, rd64(c, (RW(29) + 40))); goto L_00250D0C;
L_00250D00:;
SET64(22, (s64)(s32)0x3f0000);
L_00250D04:;
SET32(2, RW(21) + 22000);
SET64(21, rd64(c, (RW(29) + 40)));
L_00250D0C:;
SET32(3, RW(23) + 21992);
SET64(23, rd64(c, (RW(29) + 56)));
SET32(4, RW(22) + 21924);
SET64(22, rd64(c, (RW(29) + 48)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 64)));
wr64(c, (RW(2) + 0), RD(0));
wr64(c, (RW(3) + 0), RD(0));
wr32(c, (RW(4) + 0), RW(0));
SET32(29, RW(29) + 80); return;
}

void JP_F_00250D48(Ctx *c) { /* func_00250D48 */
ENTER(0x250d48);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(22) + 21968);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, rd64(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(21, (s64)(s32)0x3f0000); if (t) goto L_00250DD0; }
SET64(20, (s64)(s32)0x3f0000);
SET64(19, RD(3) + RD(0));
SET32(18, RW(21) + 21960);
SET32(17, RW(0) + 1);
SET32(16, RW(20) + 21916);
L_00250D98:;
wr64(c, (RW(18) + 0), RD(17));
SET32(5, RW(0) + 1);
SET64(31, 0x250da8); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F4F0(c);
SET64(31, 0x250db0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F590(c);
SET64(31, 0x250db8); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00250188(c);
SET64(3, rd64(c, (RW(19) + 0)));
{ int t = RD(3) == RD(0); SET32(2, RW(22) + 21968); if (t) { POLL(); goto L_00250D98; } }
SET64(22, rd64(c, (RW(29) + 48))); goto L_00250DDC;
L_00250DD0:;
SET64(20, (s64)(s32)0x3f0000);
SET32(2, RW(22) + 21968);
SET64(22, rd64(c, (RW(29) + 48)));
L_00250DDC:;
SET32(3, RW(21) + 21960);
SET64(21, rd64(c, (RW(29) + 40)));
SET32(4, RW(20) + 21916);
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 56)));
wr64(c, (RW(2) + 0), RD(0));
wr64(c, (RW(3) + 0), RD(0));
wr32(c, (RW(4) + 0), RW(0));
SET32(29, RW(29) + 64); return;
}

void JP_F_00250E18(Ctx *c) { /* func_00250E18 */
ENTER(0x250e18);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(22) + 21952);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, rd64(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(21, (s64)(s32)0x3f0000); if (t) goto L_00250EA0; }
SET64(20, (s64)(s32)0x3f0000);
SET64(19, RD(3) + RD(0));
SET32(18, RW(21) + 21944);
SET32(17, RW(0) + 1);
SET32(16, RW(20) + 21912);
L_00250E68:;
wr64(c, (RW(18) + 0), RD(17));
SET32(5, RW(0) + 1);
SET64(31, 0x250e78); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F4F0(c);
SET64(31, 0x250e80); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F590(c);
SET64(31, 0x250e88); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00250188(c);
SET64(3, rd64(c, (RW(19) + 0)));
{ int t = RD(3) == RD(0); SET32(2, RW(22) + 21952); if (t) { POLL(); goto L_00250E68; } }
SET64(22, rd64(c, (RW(29) + 48))); goto L_00250EAC;
L_00250EA0:;
SET64(20, (s64)(s32)0x3f0000);
SET32(2, RW(22) + 21952);
SET64(22, rd64(c, (RW(29) + 48)));
L_00250EAC:;
SET32(3, RW(21) + 21944);
SET64(21, rd64(c, (RW(29) + 40)));
SET32(4, RW(20) + 21912);
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 56)));
wr64(c, (RW(2) + 0), RD(0));
wr64(c, (RW(3) + 0), RD(0));
wr32(c, (RW(4) + 0), RW(0));
SET32(29, RW(29) + 64); return;
}

void JP_F_00250EE8(Ctx *c) { /* func_00250EE8 */
ENTER(0x250ee8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C068(c); return; }
}

void JP_F_00250F00(Ctx *c) { /* func_00250F00 */
ENTER(0x250f00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C080(c); return; }
}

void JP_F_00250F18(Ctx *c) { /* func_00250F18 */
ENTER(0x250f18);
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + 21824))); return;
}

void JP_F_00250F28(Ctx *c) { /* func_00250F28 */
ENTER(0x250f28);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) + 17528);
wr64(c, (RW(29) + 24), RD(31));
SET32(5, RW(18) + 22044);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) + 1);
wr32(c, (RW(2) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(4) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_00251018; }
SET64(2, (s64)(s32)0x3f0000);
SET32(16, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(2) + 21764)));
wr32(c, (RW(5) + 0), RW(16));
{ int t = RSD(3) <= 0; SET64(2, (s64)(s32)0x3f0000); if (t) goto L_00251004; }
SET32(2, RW(2) + 21832);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) == RD(16); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_00250F9C; }
SET32(2, RW(2) + 21920);
SET64(31, 0x250f9c); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_002500D0(c);
L_00250F9C:;
SET64(2, (s64)(s32)0x3f0000);
SET32(2, RW(2) + 21840);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) == RD(16); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_00250FBC; }
SET32(2, RW(2) + 21924);
SET64(31, 0x250fbc); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_002500D0(c);
L_00250FBC:;
SET64(31, 0x250fc4);  JP_F_00250628(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) != RD(16); SET64(3, (s64)(s32)0x3f0000); if (t) goto L_00250FF4; }
SET64(2, (s64)(s32)0x3f0000);
SET32(2, RW(2) + 21836);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) == RD(4); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_00250FF0; }
SET32(2, RW(2) + 21916);
SET64(31, 0x250ff0); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_002500D0(c);
L_00250FF0:;
SET64(3, (s64)(s32)0x3f0000);
L_00250FF4:;
SET32(3, RW(3) + 21904);
SET64(2, rd64(c, (RW(3) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(3) + 0), RD(2));
L_00251004:;
SET64(31, 0x25100c);  JP_F_0026C9F8(c);
SET32(3, RW(18) + 22044);
wr32(c, (RW(3) + 0), RW(0));
SET64(2, (s64)(s32)0x3f0000);
L_00251018:;
SET64(2, (s32)rd32(c, (RW(2) + 22048)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00251038; }
{ u32 t = RW(2); SET64(31, 0x25102c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 0))); goto L_0025103C;
L_00251038:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0025103C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00251050(Ctx *c) { /* func_00251050 */
ENTER(0x251050);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00250F28(c); return; }
}

void JP_F_00251068(Ctx *c) { /* func_00251068 */
ENTER(0x251068);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CA70(c); return; }
}

void JP_F_00251080(Ctx *c) { /* func_00251080 */
ENTER(0x251080);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 21932);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25109c); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00250188(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(3);  if (t) goto L_002510B0; }
SET64(31, 0x2510b0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00250120(c);
L_002510B0:;
SET64(31, 0x2510b8);  JP_F_00250628(c);
SET64(3, (s64)(s32)0x3f0000);
SET32(4, RW(0) + 1);
{ int t = RD(2) != RD(4); SET32(16, RW(3) + 21936); if (t) goto L_002510F8; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2510d4);  JP_F_00250188(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002510FC; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00250120(c); return; }
L_002510F8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002510FC:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00251108(Ctx *c) { /* func_00251108 */
ENTER(0x251108);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 56), RD(17));
SET32(17, RW(2) + 21852);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(4, RW(0) + 1);
wr64(c, (RW(29) + 48), RD(16));
{ int t = RD(3) != RD(4); wr64(c, (RW(29) + 64), RD(31)); if (t) goto L_00251170; }
SET64(2, (s64)(s32)0x3f0000);
SET64(5, RD(29) + RD(0));
SET32(16, RW(2) + 21928);
SET64(31, 0x251140); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0010F560(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET32(4, RW(0) + 12); if (t) goto L_00251158; }
if (RD(3) != RD(4)) { SET64(16, rd64(c, (RW(29) + 48))); goto L_00251174; }
L_00251158:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x251164);  JP_F_0010F590(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) == RD(3)) { wr32(c, (RW(17) + 0), RW(0)); goto L_00251170; }
L_00251170:;
SET64(16, rd64(c, (RW(29) + 48)));
L_00251174:;
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00251188(Ctx *c) { /* func_00251188 */
ENTER(0x251188);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(0) + 1);
SET32(2, RW(2) + 21852);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + 0), RW(3));
SET32(29, RW(29) + 16); { JP_F_00250170(c); return; }
}

void JP_F_002511B0(Ctx *c) { /* func_002511B0 */
ENTER(0x2511b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2511c0);  JP_F_0026CCF8(c);
SET64(31, 0x2511c8);  JP_F_00251080(c);
SET64(31, 0x2511d0);  JP_F_00251688(c);
SET64(31, 0x2511d8);  JP_F_00251188(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CD28(c); return; }
}

void JP_F_002511E8(Ctx *c) { /* func_002511E8 */
ENTER(0x2511e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002511B0(c); return; }
}

void JP_F_00251200(Ctx *c) { /* func_00251200 */
ENTER(0x251200);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 22040);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00251234; }
SET32(2, RW(0) + 1);
SET64(31, 0x251228); wr32(c, (RW(16) + 0), RW(2)); JP_F_00259D80(c);
SET64(31, 0x251230);  JP_F_0024EBB0(c);
wr32(c, (RW(16) + 0), RW(0));
L_00251234:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00251248(Ctx *c) { /* func_00251248 */
ENTER(0x251248);
SET32(29, RW(29) + -48);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_00251290; }
SET64(6, (s32)rd32(c, (RW(2) + 8)));
SET32(7, RW(0) + 25);
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(8, RD(29) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(5, RW(6) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
wr32(c, (RW(29) + 16), RW(4));
wr32(c, (RW(29) + 0), RW(3));
wr32(c, (RW(29) + 4), RW(2));
wr32(c, (RW(29) + 12), RW(5));
wr32(c, (RW(29) + 20), RW(7));
wr32(c, (RW(29) + 8), RW(6)); goto L_00251294;
L_00251290:;
SET64(8, RD(0) + RD(0));
L_00251294:;
SET64(31, 0x25129c); SET64(4, RD(8) + RD(0)); JP_F_00250730(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002512A8(Ctx *c) { /* func_002512A8 */
ENTER(0x2512a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00250910(c); return; }
}

void JP_F_002512C0(Ctx *c) { /* func_002512C0 */
ENTER(0x2512c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2512d4);  JP_F_00250EE8(c);
SET64(2, (s64)(s32)0x3f0000);
SET32(16, RW(2) + 22040);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
if (RD(3) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00251318; }
SET32(2, RW(0) + 1);
SET64(31, 0x2512f4); wr32(c, (RW(16) + 0), RW(2)); JP_F_00250F00(c);
SET64(31, 0x2512fc);  JP_F_00259D80(c);
SET64(31, 0x251304);  JP_F_0024EBB0(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_00251318:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00250F00(c); return; }
}

void JP_F_00251328(Ctx *c) { /* func_00251328 */
ENTER(0x251328);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C068(c); return; }
}

void JP_F_00251340(Ctx *c) { /* func_00251340 */
ENTER(0x251340);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C080(c); return; }
}

void JP_F_00251358(Ctx *c) { /* func_00251358 */
ENTER(0x251358);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 64), RD(18));
SET64(18, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(16));
SET32(2, RW(2) + 21760);
wr64(c, (RW(29) + 72), RD(31));
SET64(3, (s32)rd32(c, (RW(18) + 21764)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
if (RD(3) != RD(0)) { SET32(3, RW(18) + 21764); goto L_00251520; }
SET64(31, 0x251394);  JP_F_0026CB88(c);
SET64(4, (s64)(s32)0x250000);
SET32(4, RW(4) + -1648);
SET64(31, 0x2513a4); SET64(5, RD(0) + RD(0)); JP_F_0026C870(c);
SET64(4, (s64)(s32)0x250000);
SET32(4, RW(4) + -1512);
SET64(31, 0x2513b4); SET64(5, RD(0) + RD(0)); JP_F_0026C888(c);
if (RD(17) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 20))); goto L_00251418; }
SET64(16, (s64)(s32)0x3f0000);
SET32(10, RW(0) + 24);
SET32(2, RW(16) + 21776);
SET32(3, RW(0) + 1);
SET32(4, RW(0) + 8);
SET32(5, RW(0) + 15);
SET32(6, RW(0) + 16);
SET32(7, RW(0) + 18);
SET32(8, RW(0) + 25);
SET32(9, RW(0) + 26);
wr32(c, (RW(2) + 20), RW(10));
wr32(c, (RW(2) + 0), RW(3));
wr32(c, (RW(2) + 4), RW(4));
wr32(c, (RW(2) + 8), RW(5));
wr32(c, (RW(2) + 12), RW(6));
wr32(c, (RW(2) + 16), RW(7));
wr32(c, (RW(2) + 24), RW(8));
wr32(c, (RW(2) + 28), RW(9));
wr32(c, (RW(2) + 44), RW(0));
wr32(c, (RW(2) + 32), RW(0));
wr32(c, (RW(2) + 36), RW(0));
wr32(c, (RW(2) + 40), RW(0)); goto L_0025147C;
L_00251418:;
SET64(16, (s64)(s32)0x3f0000);
SET32(4, RW(16) + 21776);
SET64(2, (s32)rd32(c, (RW(17) + 32)));
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(4) + 32), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(17) + 40)));
wr32(c, (RW(4) + 0), RW(3));
wr32(c, (RW(4) + 40), RW(5));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(4) + 4), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 8)));
wr32(c, (RW(4) + 8), RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 12)));
wr32(c, (RW(4) + 12), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 16)));
wr32(c, (RW(4) + 16), RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 24)));
wr32(c, (RW(4) + 24), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 28)));
wr32(c, (RW(4) + 28), RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 36)));
wr32(c, (RW(4) + 36), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 44)));
wr32(c, (RW(4) + 44), RW(3));
L_0025147C:;
SET64(31, 0x251484); SET64(17, (s64)(s32)0x3f0000); JP_F_0010F550(c);
SET32(17, RW(17) + 21928);
SET64(5, RD(29) + RD(0));
wr32(c, (RW(17) + 0), RW(2));
SET32(16, RW(16) + 21776);
SET64(31, 0x25149c); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_0010F560(c);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(29) + 24)));
SET64(31, 0x2514ac); wr32(c, (RW(3) + -12744), RW(2)); JP_F_00250250(c);
SET64(4, (s32)rd32(c, (RW(16) + 32)));
SET64(31, 0x2514b8); SET64(5, (s32)rd32(c, (RW(16) + 36))); JP_F_002502F8(c);
SET64(31, 0x2514c0);  JP_F_002503B0(c);
SET64(31, 0x2514c8);  JP_F_00250438(c);
SET64(31, 0x2514d0);  JP_F_002504C0(c);
SET64(4, (s32)rd32(c, (RW(16) + 40)));
SET64(31, 0x2514dc); SET64(5, (s32)rd32(c, (RW(16) + 44))); JP_F_00250558(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2514e8); SET64(5, (s32)rd32(c, (RW(16) + 20))); JP_F_0010F4F0(c);
SET64(5, (s64)(s32)0x250000);
SET32(5, RW(5) + -1168);
SET32(4, RW(0) + 6);
SET64(31, 0x2514fc); SET64(6, RD(0) + RD(0)); JP_F_0026C798(c);
SET64(5, (s64)(s32)0x250000);
SET32(5, RW(5) + -1128);
SET32(4, RW(0) + 7);
SET64(31, 0x251510); SET64(6, RD(0) + RD(0)); JP_F_0026C798(c);
SET64(3, (s64)(s32)0x3f0000);
SET32(2, RW(0) + 1);
wr32(c, (RW(3) + 21768), RW(2));
SET32(3, RW(18) + 21764);
L_00251520:;
SET64(18, rd64(c, (RW(29) + 64)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET32(2, RW(2) + 1);
SET64(31, rd64(c, (RW(29) + 72)));
wr32(c, (RW(3) + 0), RW(2));
SET32(29, RW(29) + 80); return;
}

void JP_F_00251548(Ctx *c) { /* func_00251548 */
ENTER(0x251548);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + 21764);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_002515E8; }
SET64(31, 0x251570);  JP_F_002508C0(c);
SET64(31, 0x251578);  JP_F_002509A8(c);
SET64(31, 0x251580);  JP_F_00250A78(c);
SET64(31, 0x251588);  JP_F_00250C18(c);
SET64(31, 0x251590);  JP_F_00250B48(c);
SET64(31, 0x251598);  JP_F_00250D48(c);
SET64(31, 0x2515a0);  JP_F_00250E18(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x400000);
SET32(2, RW(2) + 21928);
SET64(5, (s32)rd32(c, (RW(3) + -12744)));
SET64(31, 0x2515b8); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_0010F4F0(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x2515c4); SET64(5, RD(0) + RD(0)); JP_F_0026C870(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x2515d0); SET64(5, RD(0) + RD(0)); JP_F_0026C888(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + 21768), RW(0));
SET32(29, RW(29) + 16); { JP_F_0026CBC8(c); return; }
L_002515E8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002515F8(Ctx *c) { /* func_002515F8 */
ENTER(0x2515f8);
SET32(29, RW(29) + -16);
SET64(6, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(7, RD(5) + RD(0));
SET32(4, RW(0) + 1);
SET64(5, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C670(c); return; }
}

void JP_F_00251620(Ctx *c) { /* func_00251620 */
ENTER(0x251620);
SET32(29, RW(29) + -16);
SET64(6, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(7, RD(5) + RD(0));
SET32(4, RW(0) + 7);
SET64(5, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C670(c); return; }
}

void JP_F_00251648(Ctx *c) { /* func_00251648 */
ENTER(0x251648);
SET32(29, RW(29) + -16);
SET32(4, RW(0) + 7);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C7F0(c); return; }
}

void JP_F_00251660(Ctx *c) { /* func_00251660 */
ENTER(0x251660);
SET64(2, (s64)(s32)0x530000);
SET64(3, (s64)(s32)0x530000);
SET32(2, RW(2) + -16760);
SET32(3, RW(3) + -16752);
wr32(c, (RW(2) + 4), RW(5));
wr32(c, (RW(2) + 0), RW(4));
wr32(c, (RW(3) + 4), RW(7));
wr32(c, (RW(3) + 0), RW(6)); return;
}

void JP_F_00251688(Ctx *c) { /* func_00251688 */
ENTER(0x251688);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + -16760);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002516B0; }
{ u32 t = RW(3); SET64(31, 0x2516ac); SET64(4, (s32)rd32(c, (RW(2) + 4))); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_002516B0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002516B8(Ctx *c) { /* func_002516B8 */
ENTER(0x2516b8);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + -16752);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002516E0; }
{ u32 t = RW(3); SET64(31, 0x2516dc); SET64(4, (s32)rd32(c, (RW(2) + 4))); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_002516E0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002516E8(Ctx *c) { /* func_002516E8 */
ENTER(0x2516e8);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + -12736))); return;
}

void JP_F_002516F8(Ctx *c) { /* func_002516F8 */
ENTER(0x2516f8);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x251714); wr32(c, (RW(2) + -12736), RW(16)); JP_F_00264910(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00261EA0(c); return; }
}

void JP_F_00251728(Ctx *c) { /* func_00251728 */
ENTER(0x251728);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -240);
SET64(12, (s32)rd32(c, (RW(2) + -12736)));
SET64(3, RD(4) + RD(0));
SET32(13, RW(0) + 2);
wr64(c, (RW(29) + 184), RD(5));
wr64(c, (RW(29) + 192), RD(6));
SET32(6, RW(29) + 184);
wr64(c, (RW(29) + 128), RD(31));
SET64(4, RD(29) + RD(0));
SET64(5, RD(3) + RD(0));
wr64(c, (RW(29) + 200), RD(7));
wr64(c, (RW(29) + 208), RD(8));
wr64(c, (RW(29) + 216), RD(9));
wr64(c, (RW(29) + 224), RD(10));
wr64(c, (RW(29) + 232), RD(11));
wr32(c, (RW(29) + 152), c->f[12].u);
wr32(c, (RW(29) + 156), c->f[13].u);
wr32(c, (RW(29) + 160), c->f[14].u);
wr32(c, (RW(29) + 164), c->f[15].u);
wr32(c, (RW(29) + 168), c->f[16].u);
wr32(c, (RW(29) + 172), c->f[17].u);
wr32(c, (RW(29) + 176), c->f[18].u);
{ int t = RD(12) == RD(13); wr32(c, (RW(29) + 180), c->f[19].u); if (t) goto L_0025179C; }
SET64(31, 0x251794);  JP_F_0012EAC8(c);
SET64(31, 0x25179c); SET64(4, RD(29) + RD(0)); JP_F_00111888(c);
L_0025179C:;
SET64(31, rd64(c, (RW(29) + 128)));
SET32(29, RW(29) + 240); return;
}

void JP_F_002517A8(Ctx *c) { /* func_002517A8 */
ENTER(0x2517a8);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -240);
SET64(3, (s32)rd32(c, (RW(2) + -12736)));
wr64(c, (RW(29) + 184), RD(5));
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 192), RD(6));
SET32(6, RW(29) + 184);
wr64(c, (RW(29) + 128), RD(31));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 200), RD(7));
wr64(c, (RW(29) + 208), RD(8));
wr64(c, (RW(29) + 216), RD(9));
wr64(c, (RW(29) + 224), RD(10));
wr64(c, (RW(29) + 232), RD(11));
wr32(c, (RW(29) + 152), c->f[12].u);
wr32(c, (RW(29) + 156), c->f[13].u);
wr32(c, (RW(29) + 160), c->f[14].u);
wr32(c, (RW(29) + 164), c->f[15].u);
wr32(c, (RW(29) + 168), c->f[16].u);
wr32(c, (RW(29) + 172), c->f[17].u);
wr32(c, (RW(29) + 176), c->f[18].u);
{ int t = RD(3) != RD(0); wr32(c, (RW(29) + 180), c->f[19].u); if (t) goto L_00251814; }
SET64(31, 0x25180c);  JP_F_0012EAC8(c);
SET64(31, 0x251814); SET64(4, RD(29) + RD(0)); JP_F_00111888(c);
L_00251814:;
SET64(31, rd64(c, (RW(29) + 128)));
SET32(29, RW(29) + 240); return;
}

void JP_F_00251820(Ctx *c) { hle_cri_print(c); } /* func_00251820 */

void JP_F_002518A0(Ctx *c) { /* func_002518A0 */
ENTER(0x2518a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00266D78(c); return; }
}

void JP_F_002518B8(Ctx *c) { /* func_002518B8 */
ENTER(0x2518b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(4, RW(5) << 2);
SET32(2, RW(2) + RW(4));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(4, (s32)rd32(c, (RW(3) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(6) + 36)));
{ u32 t = RW(2); SET64(31, 0x2518e4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) >> 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002518F8(Ctx *c) { /* func_002518F8 */
ENTER(0x2518f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(4, RW(5) << 2);
SET32(2, RW(2) + RW(4));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(4, (s32)rd32(c, (RW(3) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(6) + 36)));
{ u32 t = RW(2); SET64(31, 0x251924); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) >> 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00251938(Ctx *c) { /* func_00251938 */
ENTER(0x251938);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(4, RW(5) << 2);
SET32(5, RW(0) + 1);
SET32(2, RW(2) + RW(4));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x25195c); SET64(4, (s32)rd32(c, (RW(3) + 4))); JP_F_0026B908(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) >> 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00251970(Ctx *c) { /* func_00251970 */
ENTER(0x251970);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(4, RW(5) << 2);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + RW(4));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x251994); SET64(4, (s32)rd32(c, (RW(3) + 4))); JP_F_0026B908(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) >> 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002519A8(Ctx *c) { /* func_002519A8 */
ENTER(0x2519a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00267930(c); return; }
}

void JP_F_002519C0(Ctx *c) { /* func_002519C0 */
ENTER(0x2519c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00267AC8(c); return; }
}

void JP_F_002519D8(Ctx *c) { /* func_002519D8 */
ENTER(0x2519d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00267B38(c); return; }
}

void JP_F_002519F0(Ctx *c) { /* func_002519F0 */
ENTER(0x2519f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00267BA0(c); return; }
}

void JP_F_00251A08(Ctx *c) { /* func_00251A08 */
ENTER(0x251a08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00267BF0(c); return; }
}

void JP_F_00251A20(Ctx *c) { /* func_00251A20 */
ENTER(0x251a20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00267C40(c); return; }
}

void JP_F_00251A38(Ctx *c) { /* func_00251A38 */
ENTER(0x251a38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00267C48(c); return; }
}

void JP_F_00251A50(Ctx *c) { /* func_00251A50 */
ENTER(0x251a50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00267CD8(c); return; }
}

void JP_F_00251A68(Ctx *c) { /* func_00251A68 */
ENTER(0x251a68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00267D60(c); return; }
}

void JP_F_00251A80(Ctx *c) { /* func_00251A80 */
ENTER(0x251a80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00267660(c); return; }
}

void JP_F_00251A98(Ctx *c) { /* func_00251A98 */
ENTER(0x251a98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00267D88(c); return; }
}

void JP_F_00251AB0(Ctx *c) { /* func_00251AB0 */
ENTER(0x251ab0);
 return;
}

void JP_F_00251AB8(Ctx *c) { /* func_00251AB8 */
ENTER(0x251ab8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00267E48(c); return; }
}

void JP_F_00251AD0(Ctx *c) { /* func_00251AD0 */
ENTER(0x251ad0);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x251ae8); SET64(16, RD(4) + RD(0)); JP_F_00268410(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x251af4); SET64(5, RD(0) + RD(0)); JP_F_00268378(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002681E8(c); return; }
}

void JP_F_00251B08(Ctx *c) { /* func_00251B08 */
ENTER(0x251b08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002682D0(c); return; }
}

void JP_F_00251B20(Ctx *c) { /* func_00251B20 */
ENTER(0x251b20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268318(c); return; }
}

void JP_F_00251B38(Ctx *c) { /* func_00251B38 */
ENTER(0x251b38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268378(c); return; }
}

void JP_F_00251B50(Ctx *c) { /* func_00251B50 */
ENTER(0x251b50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268410(c); return; }
}

void JP_F_00251B68(Ctx *c) { /* func_00251B68 */
ENTER(0x251b68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268568(c); return; }
}

void JP_F_00251B80(Ctx *c) { /* func_00251B80 */
ENTER(0x251b80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002685A0(c); return; }
}

void JP_F_00251B98(Ctx *c) { /* func_00251B98 */
ENTER(0x251b98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268608(c); return; }
}

void JP_F_00251BB0(Ctx *c) { /* func_00251BB0 */
ENTER(0x251bb0);
SET64(4, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x251bc4); SET32(4, RW(4) + 5880); JP_F_00251820(c);
L_00251BC8:;
 { POLL(); goto L_00251BC8; }
}

void JP_F_00251BE8(Ctx *c) { /* func_00251BE8 */
ENTER(0x251be8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268828(c); return; }
}

void JP_F_00251C00(Ctx *c) { /* func_00251C00 */
ENTER(0x251c00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002688D0(c); return; }
}

void JP_F_00251C18(Ctx *c) { /* func_00251C18 */
ENTER(0x251c18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268918(c); return; }
}

void JP_F_00251C30(Ctx *c) { /* func_00251C30 */
ENTER(0x251c30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268948(c); return; }
}

void JP_F_00251C48(Ctx *c) { /* func_00251C48 */
ENTER(0x251c48);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002689C0(c); return; }
}

void JP_F_00251C60(Ctx *c) { /* func_00251C60 */
ENTER(0x251c60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268A00(c); return; }
}

void JP_F_00251C78(Ctx *c) { /* func_00251C78 */
ENTER(0x251c78);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268A50(c); return; }
}

void JP_F_00251C90(Ctx *c) { /* func_00251C90 */
ENTER(0x251c90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268A80(c); return; }
}

void JP_F_00251CA8(Ctx *c) { /* func_00251CA8 */
ENTER(0x251ca8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268B18(c); return; }
}

void JP_F_00251CC0(Ctx *c) { /* func_00251CC0 */
ENTER(0x251cc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268B48(c); return; }
}

void JP_F_00251CD8(Ctx *c) { /* func_00251CD8 */
ENTER(0x251cd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268B78(c); return; }
}

void JP_F_00251CF0(Ctx *c) { /* func_00251CF0 */
ENTER(0x251cf0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268BB0(c); return; }
}

void JP_F_00251D08(Ctx *c) { /* func_00251D08 */
ENTER(0x251d08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268BE0(c); return; }
}

void JP_F_00251D20(Ctx *c) { /* func_00251D20 */
ENTER(0x251d20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268CA0(c); return; }
}

void JP_F_00251D38(Ctx *c) { /* func_00251D38 */
ENTER(0x251d38);
 return;
}

void JP_F_00251D40(Ctx *c) { /* func_00251D40 */
ENTER(0x251d40);
 return;
}

void JP_F_00251D48(Ctx *c) { /* func_00251D48 */
ENTER(0x251d48);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268440(c); return; }
}

void JP_F_00251D60(Ctx *c) { /* func_00251D60 */
ENTER(0x251d60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00268470(c); return; }
}

void JP_F_00251D78(Ctx *c) { /* func_00251D78 */
ENTER(0x251d78);
 return;
}

void JP_F_00251D80(Ctx *c) { /* func_00251D80 */
ENTER(0x251d80);
 return;
}

void JP_F_00251D88(Ctx *c) { /* func_00251D88 */
ENTER(0x251d88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x251d98);  JP_F_00268D30(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00251DA8(Ctx *c) { /* func_00251DA8 */
ENTER(0x251da8);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + -12728);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2)); return;
}

void JP_F_00251DC0(Ctx *c) { /* func_00251DC0 */
ENTER(0x251dc0);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + -12728);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 0), RW(2)); return;
}

void JP_F_00251DD8(Ctx *c) { /* func_00251DD8 */
ENTER(0x251dd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00248818(c); return; }
}

void JP_F_00251DF0(Ctx *c) { /* func_00251DF0 */
ENTER(0x251df0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00248828(c); return; }
}

void JP_F_00251E08(Ctx *c) { /* func_00251E08 */
ENTER(0x251e08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x251e18);  JP_F_00248838(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s64)(s32)0x400000);
SET32(4, RW(4) + -12712);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 2688);
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_00251E38(Ctx *c) { /* func_00251E38 */
ENTER(0x251e38);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -12712);
SET32(6, RW(0) + 2688);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_00251E60(Ctx *c) { /* func_00251E60 */
ENTER(0x251e60);
SET64(2, (s64)(s32)0x7fff0000);
SET32(3, RW(0) + -1);
SET64(2, RD(2) | 0xffff);
wr32(c, (RW(4) + 60), RW(3));
wr32(c, (RW(4) + 56), RW(2));
wr32(c, (RW(4) + 164), RW(0));
wr32(c, (RW(4) + 152), RW(0));
wr32(c, (RW(4) + 44), RW(0));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0));
wr32(c, (RW(4) + 64), RW(0));
wr32(c, (RW(4) + 68), RW(0));
wr8(c, (RW(4) + 3), (u8)RW(0));
wr32(c, (RW(4) + 160), RW(0)); return;
}

void JP_F_00251EA0(Ctx *c) { /* func_00251EA0 */
ENTER(0x251ea0);
SET32(29, RW(29) + -64);
SET64(7, (s64)(s32)0x400000);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(7) + -12712);
wr64(c, (RW(29) + 8), RD(17));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 48), RD(31));
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET64(16, (s32)rd32(c, (RW(20) + 0))); if (t) goto L_00251F0C; }
SET32(5, RW(5) + 1);
L_00251EE8:;
SET64(2, RSD(5) < (s64)16);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 168); if (t) goto L_00251F0C; }
SET64(2, (s8)rd8(c, (RW(3) + 0)));
if (RD(2) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00251EE8; } }
L_00251F0C:;
SET32(3, RW(0) + 16);
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00251FF8; }
SET32(2, RW(5) << 2);
SET32(3, RW(7) + -12712);
SET32(2, RW(2) + RW(5));
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 3);
SET64(31, 0x251f3c); SET32(18, RW(2) + RW(3)); JP_F_0026A4D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x251f48); SET64(17, RD(2) + RD(0)); JP_F_0026A4D8(c);
SET64(4, RD(16) + RD(0));
SET32(16, RW(2) >> 31);
SET64(31, 0x251f58); SET32(16, RW(16) + RW(2)); JP_F_0026A4E0(c);
SET32(7, RW(2) >> 31);
SET32(16, RSW(16) >> 1);
SET32(7, RW(7) + RW(2));
SET64(6, RD(16) + RD(0));
SET32(7, RSW(7) >> 1);
SET64(4, RD(19) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x251f7c); SET32(7, RW(6) + RW(7)); JP_F_00248938(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); wr32(c, (RW(18) + 4), RW(4)); if (t) goto L_00251FF8; }
SET64(5, (s64)(s32)0x250000);
SET64(6, RD(18) + RD(0));
SET64(31, 0x251f98); SET32(5, RW(5) + 9392); JP_F_00248FB0(c);
wr32(c, (RW(18) + 8), RW(21));
wr8(c, (RW(18) + 2), (u8)RW(19));
{ int t = RSD(19) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_00251FD0; }
SET32(7, RW(18) + 12);
L_00251FB0:;
SET32(2, RW(6) << 2);
SET32(6, RW(6) + 1);
SET32(3, RW(2) + RW(20));
SET32(2, RW(7) + RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(6) < RSD(19));
{ int t = RD(5) != RD(0); wr32(c, (RW(2) + 0), RW(4)); if (t) { POLL(); goto L_00251FB0; } }
L_00251FD0:;
wr8(c, (RW(18) + 1), (u8)RW(0));
SET64(31, 0x251fdc); SET64(4, RD(18) + RD(0)); JP_F_00251E60(c);
wr32(c, (RW(18) + 72), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 76), RW(0));
wr32(c, (RW(18) + 80), RW(0));
wr32(c, (RW(18) + 84), RW(0));
wr8(c, (RW(18) + 0), (u8)RW(2));
SET64(2, RD(18) + RD(0));
L_00251FF8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00252020(Ctx *c) { /* func_00252020 */
ENTER(0x252020);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00252070; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00252048; }
SET64(31, 0x252048); wr32(c, (RW(16) + 4), RW(0)); JP_F_00248A58(c);
L_00252048:;
SET64(31, 0x252050);  JP_F_0024A8C0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x252060); SET32(6, RW(0) + 168); JP_F_001273D0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8D8(c); return; }
L_00252070:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

