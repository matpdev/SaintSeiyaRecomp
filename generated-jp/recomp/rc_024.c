#include "r5900.h"
#include "functab.h"

void JP_F_00299EE8(Ctx *c) { /* func_00299EE8 */
ENTER(0x299ee8);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00299F68(c); return; }
}

void JP_F_00299F08(Ctx *c) { /* func_00299F08 */
ENTER(0x299f08);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00299F68(c); return; }
}

void JP_F_00299F28(Ctx *c) { /* func_00299F28 */
ENTER(0x299f28);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00299F68(c); return; }
}

void JP_F_00299F48(Ctx *c) { /* func_00299F48 */
ENTER(0x299f48);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 2);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00299F68(c); return; }
}

void JP_F_00299F68(Ctx *c) { /* func_00299F68 */
ENTER(0x299f68);
SET32(2, RW(7) << 3);
SET32(3, RW(5) << 4);
SET32(2, RW(2) - RW(7));
SET32(3, RW(3) + RW(5));
SET32(2, RW(2) << 2);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(7));
SET32(3, RW(4) + RW(3));
SET32(6, RW(6) << 2);
SET32(2, RW(2) << 2);
SET32(6, RW(6) + RW(3));
SET32(4, RW(4) + RW(2));
wr32(c, (RW(6) + 7996), RW(7));
wr32(c, (RW(4) + 4948), RW(5)); return;
}

void JP_F_00299FA8(Ctx *c) { /* func_00299FA8 */
ENTER(0x299fa8);
SET32(2, RW(5) << 3);
SET32(3, RW(6) << 4);
SET32(2, RW(2) - RW(5));
SET32(3, RW(3) + RW(6));
SET32(2, RW(2) << 2);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(5));
SET32(3, RW(4) + RW(3));
SET32(2, RW(2) << 2);
wr32(c, (RW(3) + 7992), RW(5));
SET32(4, RW(4) + RW(2));
wr32(c, (RW(4) + 4952), RW(6)); return;
}

void JP_F_00299FE0(Ctx *c) { /* func_00299FE0 */
ENTER(0x299fe0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(4, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(18) + 7976);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(0) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(5) << 2);
L_0029A010:;
SET64(2, RSD(17) < (s64)9);
L_0029A014:;
{ int t = RD(2) == RD(0); SET32(17, RW(17) + 1); if (t) goto L_0029A058; }
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET32(16, RW(16) + 68);
{ int t = RD(2) == RD(0); SET32(3, RW(19) + RW(2)); if (t) { POLL(); goto L_0029A010; } }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
{ u32 t = RW(2); SET64(31, 0x29a04c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET64(2, RSD(17) < (s64)9); if (t) { POLL(); goto L_0029A014; } }
L_0029A058:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(4) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0029A078(Ctx *c) { /* func_0029A078 */
ENTER(0x29a078);
SET32(2, RW(5) << 4);
SET32(29, RW(29) + -16);
SET32(2, RW(2) + RW(5));
SET64(5, RD(7) + RD(0));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(4) + RW(2));
SET64(2, RD(0) + RD(0));
SET64(9, (s32)rd32(c, (RW(3) + 7988)));
SET32(6, RW(6) << 2);
SET64(7, RD(0) + RD(0));
SET32(3, RW(6) + RW(9));
{ int t = RD(9) == RD(0); SET64(6, RD(8) + RD(0)); if (t) goto L_0029A0BC; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(2); SET64(31, 0x29a0bc);  rt_call(c, t); }
L_0029A0BC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029A0C8(Ctx *c) { /* func_0029A0C8 */
ENTER(0x29a0c8);
SET32(2, RW(5) << 4);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
wr32(c, (RW(4) + 7976), RW(6)); return;
}

void JP_F_0029A0E0(Ctx *c) { /* func_0029A0E0 */
ENTER(0x29a0e0);
SET32(2, RW(5) << 4);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 7976))); return;
}

void JP_F_0029A0F8(Ctx *c) { /* func_0029A0F8 */
ENTER(0x29a0f8);
SET32(2, RW(5) << 4);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
wr32(c, (RW(4) + 7980), RW(6)); return;
}

void JP_F_0029A110(Ctx *c) { /* func_0029A110 */
ENTER(0x29a110);
SET32(2, RW(5) << 4);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 7980))); return;
}

void JP_F_0029A128(Ctx *c) { /* func_0029A128 */
ENTER(0x29a128);
SET32(2, RW(5) << 4);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 7988)));
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_0029A148(Ctx *c) { /* func_0029A148 */
ENTER(0x29a148);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 448);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29a164); SET64(16, RD(4) + RD(0)); JP_F_001273D0(c);
SET32(3, RW(0) + 1);
SET32(2, RW(0) + 10);
wr32(c, (RW(16) + 12), RW(3));
wr32(c, (RW(16) + 16), RW(2));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(16) + 4), RW(0));
SET64(31, 0x29a188); wr32(c, (RW(16) + 8), RW(0)); JP_F_0029A228(c);
wr64(c, (RW(16) + 264), RD(0));
SET64(3, (s64)(s32)0xf0000);
SET64(3, RD(3) | 0x4240);
SET32(2, RW(0) + 1);
SET32(4, RW(0) + 16683);
SET64(5, (s64)(s32)0x30000);
SET64(5, RD(5) | 0xd40);
SET32(6, RW(0) + -1);
wr64(c, (RW(16) + 304), RD(2));
wr64(c, (RW(16) + 312), RD(4));
wr64(c, (RW(16) + 328), RD(5));
wr64(c, (RW(16) + 368), RD(3));
wr64(c, (RW(16) + 376), RD(6));
wr32(c, (RW(16) + 440), RW(0));
wr64(c, (RW(16) + 272), RD(2));
wr64(c, (RW(16) + 280), RD(0));
wr64(c, (RW(16) + 288), RD(2));
wr64(c, (RW(16) + 296), RD(0));
wr64(c, (RW(16) + 320), RD(3));
wr64(c, (RW(16) + 336), RD(3));
wr64(c, (RW(16) + 344), RD(0));
wr64(c, (RW(16) + 352), RD(3));
wr64(c, (RW(16) + 360), RD(0));
wr64(c, (RW(16) + 384), RD(0));
wr64(c, (RW(16) + 392), RD(0));
wr32(c, (RW(16) + 400), RW(0));
wr32(c, (RW(16) + 404), RW(0));
wr32(c, (RW(16) + 408), RW(0));
wr32(c, (RW(16) + 412), RW(0));
wr32(c, (RW(16) + 416), RW(0));
wr32(c, (RW(16) + 420), RW(0));
wr32(c, (RW(16) + 424), RW(0));
wr32(c, (RW(16) + 428), RW(0));
wr32(c, (RW(16) + 432), RW(0));
wr32(c, (RW(16) + 436), RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029A8D8(c); return; }
}

void JP_F_0029A228(Ctx *c) { /* func_0029A228 */
ENTER(0x29a228);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET32(4, RW(16) + 24);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29a248); SET32(6, RW(0) + 240); JP_F_001273D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 412)));
wr32(c, (RW(16) + 20), RW(0));
SET32(2, RW(2) + 1);
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 412), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029A268(Ctx *c) { /* func_0029A268 */
ENTER(0x29a268);
wr32(c, (RW(4) + 0), RW(5)); return;
}

void JP_F_0029A270(Ctx *c) { /* func_0029A270 */
ENTER(0x29a270);
SET64(2, rd64(c, (RW(5) + 0)));
wr64(c, (RW(4) + 312), RD(2));
SET64(3, rd64(c, (RW(5) + 8)));
wr64(c, (RW(4) + 320), RD(3)); return;
}

void JP_F_0029A288(Ctx *c) { /* func_0029A288 */
ENTER(0x29a288);
SET64(2, rd64(c, (RW(5) + 0)));
wr64(c, (RW(4) + 328), RD(2));
SET64(3, rd64(c, (RW(5) + 8)));
wr64(c, (RW(4) + 336), RD(3)); return;
}

void JP_F_0029A2A0(Ctx *c) { /* func_0029A2A0 */
ENTER(0x29a2a0);
SET64(2, rd64(c, (RW(5) + 0)));
wr64(c, (RW(4) + 344), RD(2));
SET64(3, rd64(c, (RW(5) + 8)));
wr64(c, (RW(4) + 352), RD(3)); return;
}

void JP_F_0029A2B8(Ctx *c) { /* func_0029A2B8 */
ENTER(0x29a2b8);
SET64(2, rd64(c, (RW(5) + 0)));
wr64(c, (RW(4) + 360), RD(2));
SET64(3, rd64(c, (RW(5) + 8)));
wr64(c, (RW(4) + 368), RD(3)); return;
}

void JP_F_0029A2D0(Ctx *c) { /* func_0029A2D0 */
ENTER(0x29a2d0);
if (RSD(5) > 0) { wr32(c, (RW(4) + 16), RW(5)); goto L_0029A2D8; }
L_0029A2D8:;
 return;
}

void JP_F_0029A2E0(Ctx *c) { /* func_0029A2E0 */
ENTER(0x29a2e0);
wr32(c, (RW(4) + 4), RW(5)); return;
}

void JP_F_0029A2E8(Ctx *c) { /* func_0029A2E8 */
ENTER(0x29a2e8);
wr32(c, (RW(4) + 12), RW(5)); return;
}

void JP_F_0029A2F0(Ctx *c) { /* func_0029A2F0 */
ENTER(0x29a2f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(2) != RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0029A334; }
SET64(5, rd64(c, (RW(17) + 0)));
SET64(31, 0x29a31c); SET64(4, rd64(c, (RW(16) + 304))); JP_F_0011F910(c);
SET64(5, rd64(c, (RW(17) + 8)));
SET64(31, 0x29a328); SET64(4, RD(2) + RD(0)); JP_F_0011F988(c);
SET64(3, rd64(c, (RW(16) + 296)));
SET64(3, RD(3) + RD(2));
wr64(c, (RW(16) + 296), RD(3));
L_0029A334:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029A348(Ctx *c) { /* func_0029A348 */
ENTER(0x29a348);
SET32(29, RW(29) + -64);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, rd64(c, (RW(21) + 8)));
{ int t = RD(2) == RD(3); SET64(22, RD(7) + RD(0)); if (t) goto L_0029A394; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET64(5, rd64(c, (RW(19) + 0))); goto L_0029A3D0; }
L_0029A394:;
SET64(2, rd64(c, (RW(19) + 0)));
SET64(16, rd64(c, (RW(29) + 0)));
wr64(c, (RW(22) + 0), RD(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(3, rd64(c, (RW(19) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
wr64(c, (RW(22) + 8), RD(3));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
L_0029A3D0:;
SET32(7, RW(0) + 1);
SET64(2, rd64(c, (RW(16) + 392)));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(3, RSD(5) < RSD(2));
if (RD(3) != 0) SET64(5, RD(2));
{ int t = RD(4) != RD(7); wr64(c, (RW(19) + 0), RD(5)); if (t) goto L_0029A3F8; }
wr32(c, (RW(16) + 8), RW(0));
SET64(18, RD(0) + RD(0)); goto L_0029A498;
L_0029A3F8:;
SET64(18, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(18) != RD(0); SET64(6, rd64(c, (RW(16) + 392))); if (t) goto L_0029A49C; }
SET64(2, RSD(6) < RSD(5));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 12))); goto L_0029A480; }
SET64(3, rd64(c, (RW(16) + 376)));
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2); wr32(c, (RW(16) + 8), RW(7)); if (t) goto L_0029A438; }
SET64(5, rd64(c, (RW(16) + 344)));
SET64(31, 0x29a42c); SET64(4, rd64(c, (RW(19) + 8))); JP_F_0011F910(c);
SET64(5, rd64(c, (RW(16) + 352))); goto L_0029A448;
L_0029A438:;
SET64(5, rd64(c, (RW(16) + 360)));
SET64(31, 0x29a444); SET64(4, rd64(c, (RW(19) + 8))); JP_F_0011F910(c);
SET64(5, rd64(c, (RW(16) + 368)));
L_0029A448:;
SET64(31, 0x29a450); SET64(4, RD(2) + RD(0)); JP_F_0011F988(c);
SET64(5, RD(2) + RD(0));
SET64(3, rd64(c, (RW(21) + 0)));
SET64(4, RD(16) + RD(0));
wr64(c, (RW(16) + 376), RD(3));
SET64(2, rd64(c, (RW(19) + 0)));
SET64(2, RD(2) + RD(5));
SET64(31, 0x29a470); wr64(c, (RW(16) + 384), RD(2)); JP_F_0029A228(c);
SET64(6, rd64(c, (RW(16) + 392)));
SET64(18, (s32)rd32(c, (RW(16) + 8))); goto L_0029A49C;
L_0029A480:;
if (RD(2) != RD(0)) { SET64(2, rd64(c, (RW(19) + 0))); goto L_0029A4A0; }
wr32(c, (RW(16) + 8), RW(7));
SET32(18, RW(0) + 1); goto L_0029A49C;
L_0029A498:;
SET64(6, rd64(c, (RW(16) + 392)));
L_0029A49C:;
SET64(2, rd64(c, (RW(19) + 0)));
L_0029A4A0:;
SET32(4, RW(0) + -1);
SET64(17, rd64(c, (RW(16) + 376)));
SET64(3, RSD(2) < RSD(6));
if (RD(3) != 0) SET64(2, RD(6));
{ int t = RD(17) == RD(4); wr64(c, (RW(16) + 392), RD(2)); if (t) goto L_0029A4E0; }
SET64(5, rd64(c, (RW(21) + 0)));
SET64(4, rd64(c, (RW(19) + 8)));
SET64(31, 0x29a4c8); SET64(5, RD(5) - RD(17)); JP_F_0011F910(c);
SET64(5, rd64(c, (RW(21) + 8)));
SET64(31, 0x29a4d4); SET64(4, RD(2) + RD(0)); JP_F_0011F988(c);
SET64(3, rd64(c, (RW(16) + 384)));
SET64(20, RD(3) + RD(2)); goto L_0029A4E4;
L_0029A4E0:;
SET64(20, RD(0) + RD(0));
L_0029A4E4:;
if (RD(18) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 12))); goto L_0029A538; }
SET64(3, rd64(c, (RW(16) + 392)));
SET64(2, RSD(3) < RSD(20));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_0029A698; }
SET64(2, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(2) == RD(0); SET64(2, rd64(c, (RW(21) + 0))); if (t) goto L_0029A518; }
wr64(c, (RW(16) + 384), RD(3));
wr64(c, (RW(16) + 376), RD(2)); goto L_0029A524;
L_0029A518:;
SET64(3, rd64(c, (RW(16) + 296)));
wr64(c, (RW(16) + 376), RD(2));
wr64(c, (RW(16) + 384), RD(3));
L_0029A524:;
SET64(2, (s32)rd32(c, (RW(16) + 400)));
SET64(17, rd64(c, (RW(16) + 376)));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 400), RW(2)); goto L_0029A694;
L_0029A538:;
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET32(2, RW(0) + -1); if (t) goto L_0029A698; }
SET64(5, rd64(c, (RW(16) + 328)));
SET64(31, 0x29a550); SET64(4, rd64(c, (RW(19) + 8))); JP_F_0011F910(c);
SET64(5, rd64(c, (RW(16) + 336)));
SET64(31, 0x29a55c); SET64(4, RD(2) + RD(0)); JP_F_0011F988(c);
SET64(5, rd64(c, (RW(19) + 0)));
SET64(3, RD(2) + RD(0));
SET64(2, RD(5) - RD(20));
{ int t = RSD(2) < 0; SET64(2, RSD(3) < RSD(2)); if (t) goto L_0029A580; }
if (RD(2) != RD(0)) { SET64(2, rd64(c, (RW(21) + 0))); goto L_0029A594; }
SET64(5, RD(5) - RD(20)); goto L_0029A5C0;
L_0029A580:;
SET64(2, RD(20) - RD(5));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) == RD(0); SET64(5, RD(5) - RD(20)); if (t) goto L_0029A5C0; }
SET64(2, rd64(c, (RW(21) + 0)));
L_0029A594:;
SET64(4, RD(16) + RD(0));
wr64(c, (RW(16) + 376), RD(2));
SET64(3, rd64(c, (RW(19) + 0)));
SET64(31, 0x29a5a8); wr64(c, (RW(16) + 384), RD(3)); JP_F_0029A228(c);
SET64(2, (s32)rd32(c, (RW(16) + 416)));
SET64(18, (s32)rd32(c, (RW(16) + 8)));
SET32(2, RW(2) + 1);
SET64(17, rd64(c, (RW(16) + 376)));
wr32(c, (RW(16) + 416), RW(2)); goto L_0029A694;
L_0029A5C0:;
SET64(5, RD(5) << 32);
SET64(5, RSD(5) >> 32);
SET64(31, 0x29a5d0); SET64(4, RD(16) + RD(0)); JP_F_0029A7B0(c);
SET64(4, rd64(c, (RW(19) + 8)));
SET64(5, rd64(c, (RW(16) + 312)));
SET64(31, 0x29a5e0); SET64(17, RD(2) + RD(0)); JP_F_0011F910(c);
SET64(5, rd64(c, (RW(16) + 320)));
SET64(31, 0x29a5ec); SET64(4, RD(2) + RD(0)); JP_F_0011F988(c);
SET64(18, RD(2) + RD(0));
{ int t = RSD(17) >= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_0029A5FC; }
SET64(2, RD(0) - RD(2));
L_0029A5FC:;
SET64(2, RSD(18) < RSD(2));
if (RD(2) == RD(0)) { SET64(18, (s32)rd32(c, (RW(16) + 8))); goto L_0029A690; }
SET64(2, RSD(18) < RSD(17));
{ int t = RD(2) == RD(0); SET64(4, RD(17) << 1); if (t) goto L_0029A638; }
SET64(31, 0x29a61c); SET64(5, RD(18) + RD(0)); JP_F_0011F988(c);
SET64(3, (s32)rd32(c, (RW(16) + 404)));
SET64(4, RD(2) + (s64)-1);
SET64(2, RD(4) << 32);
SET64(2, RSD(2) >> 32);
SET32(3, RW(3) + RW(2));
wr32(c, (RW(16) + 404), RW(3)); goto L_0029A658;
L_0029A638:;
SET64(31, 0x29a640); SET64(5, RD(18) + RD(0)); JP_F_0011F988(c);
SET64(3, (s32)rd32(c, (RW(16) + 408)));
SET64(4, RD(2) + (s64)1);
SET64(2, RD(4) << 32);
SET64(2, RSD(2) >> 32);
SET32(3, RW(3) - RW(2));
wr32(c, (RW(16) + 408), RW(3));
L_0029A658:;
SET64(31, 0x29a660); SET64(5, RD(18) + RD(0)); JP_F_0011F910(c);
SET64(3, rd64(c, (RW(21) + 0)));
SET64(5, RD(2) >> 63);
SET64(4, RD(16) + RD(0));
SET64(5, RD(5) + RD(2));
wr64(c, (RW(16) + 376), RD(3));
SET64(5, RSD(5) >> 1);
SET64(2, RD(20) + RD(5));
SET64(5, RD(5) << 32);
SET64(5, RSD(5) >> 32);
SET64(31, 0x29a68c); wr64(c, (RW(16) + 384), RD(2)); JP_F_0029A810(c);
SET64(18, (s32)rd32(c, (RW(16) + 8)));
L_0029A690:;
SET64(17, rd64(c, (RW(16) + 376)));
L_0029A694:;
SET32(2, RW(0) + -1);
L_0029A698:;
if (RD(17) == RD(2)) { SET64(3, RD(0) + RD(0)); goto L_0029A6C4; }
SET64(5, rd64(c, (RW(21) + 0)));
SET64(4, rd64(c, (RW(19) + 8)));
SET64(31, 0x29a6b0); SET64(5, RD(5) - RD(17)); JP_F_0011F910(c);
SET64(5, rd64(c, (RW(21) + 8)));
SET64(31, 0x29a6bc); SET64(4, RD(2) + RD(0)); JP_F_0011F988(c);
SET64(3, rd64(c, (RW(16) + 384)));
SET64(3, RD(3) + RD(2));
L_0029A6C4:;
wr64(c, (RW(22) + 0), RD(3));
SET64(2, rd64(c, (RW(19) + 8)));
wr64(c, (RW(22) + 8), RD(2));
SET64(4, rd64(c, (RW(16) + 296)));
SET64(2, RSD(3) < RSD(4));
if (RD(2) == RD(0)) { SET64(2, rd64(c, (RW(19) + 0))); goto L_0029A6F0; }
wr64(c, (RW(22) + 0), RD(4));
SET64(2, rd64(c, (RW(16) + 304)));
wr64(c, (RW(22) + 8), RD(2));
SET64(2, rd64(c, (RW(19) + 0)));
L_0029A6F0:;
wr64(c, (RW(16) + 264), RD(2));
SET64(3, rd64(c, (RW(19) + 8)));
wr64(c, (RW(16) + 272), RD(3));
SET64(2, rd64(c, (RW(21) + 0)));
wr64(c, (RW(16) + 280), RD(2));
SET64(3, rd64(c, (RW(21) + 8)));
wr64(c, (RW(16) + 288), RD(3));
SET64(2, rd64(c, (RW(22) + 0)));
wr64(c, (RW(16) + 296), RD(2));
SET64(3, rd64(c, (RW(22) + 8)));
wr64(c, (RW(16) + 304), RD(3));
SET64(2, rd64(c, (RW(19) + 0)));
SET64(3, rd64(c, (RW(22) + 0)));
SET64(2, RD(2) - RD(3));
SET64(7, RD(2) << 32);
SET64(7, RSD(7) >> 32);
if (RD(18) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 436))); goto L_0029A760; }
SET64(2, (s32)rd32(c, (RW(16) + 428)));
SET64(3, (s32)rd32(c, (RW(16) + 432)));
SET64(4, RSD(7) < RSD(2));
SET64(5, RSD(3) < RSD(7));
if (RD(4) == 0) SET64(2, RD(7));
if (RD(5) == 0) SET64(3, RD(7));
wr32(c, (RW(16) + 428), RW(2));
wr32(c, (RW(16) + 432), RW(3)); goto L_0029A77C;
L_0029A760:;
SET64(3, (s32)rd32(c, (RW(16) + 440)));
SET64(4, RSD(7) < RSD(2));
SET64(5, RSD(3) < RSD(7));
if (RD(4) == 0) SET64(2, RD(7));
if (RD(5) == 0) SET64(3, RD(7));
wr32(c, (RW(16) + 436), RW(2));
wr32(c, (RW(16) + 440), RW(3));
L_0029A77C:;
SET64(2, (s64)(s32)0x410000);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(2) + 25512), RW(16));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); { JP_F_0029AA38(c); return; }
}

void JP_F_0029A7B0(Ctx *c) { /* func_0029A7B0 */
ENTER(0x29a7b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET32(7, RW(16) + 20);
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(6, (s32)rd32(c, (RW(7) + 0)));
if (RD(3) == RD(0)) { rt_break(c, 0x29a7d0); goto L_0029A7D4; }
L_0029A7D4:;
div_s(c, 0, RSW(6), RSW(3));
SET32(6, RW(6) + 1);
SET64(2, c->hi.d[0]);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 24), RW(5));
SET64(31, 0x29a7f4); wr32(c, (RW(7) + 0), RW(6)); JP_F_0029A870(c);
SET64(3, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 424), RW(3));
wr32(c, (RW(16) + 420), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029A810(Ctx *c) { /* func_0029A810 */
ENTER(0x29a810);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
{ int t = RSD(2) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_0029A850; }
SET32(3, RW(16) + 24);
L_0029A830:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) + 1);
SET32(2, RW(2) - RW(5));
wr32(c, (RW(3) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(2, RSD(4) < RSD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_0029A830; } }
L_0029A850:;
SET64(31, 0x29a858); SET64(4, RD(16) + RD(0)); JP_F_0029A870(c);
wr32(c, (RW(16) + 424), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029A870(Ctx *c) { /* func_0029A870 */
ENTER(0x29a870);
SET64(5, (s32)rd32(c, (RW(4) + 16)));
{ int t = RSD(5) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0029A8A4; }
SET32(4, RW(4) + 24);
SET64(3, RD(5) + RD(0));
L_0029A888:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(4, RW(4) + 4);
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); SET32(6, RW(6) + RW(2)); if (t) { POLL(); goto L_0029A888; } }
L_0029A8A4:;
div_s(c, 0, RSW(6), RSW(5));
if (RD(5) == RD(0)) { rt_break(c, 0x29a8ac); goto L_0029A8B0; }
L_0029A8B0:;
SET64(2, c->lo.d[0]);
 return;
}

void JP_F_0029A8C0(Ctx *c) { /* func_0029A8C0 */
ENTER(0x29a8c0);
SET64(2, (s64)(s32)0x410000);
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(2) + 25508), RW(4));
wr32(c, (RW(3) + 25504), RW(5)); return;
}

void JP_F_0029A8D8(Ctx *c) { /* func_0029A8D8 */
ENTER(0x29a8d8);
SET64(3, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -320);
SET32(3, RW(3) + 32464);
wr64(c, (RW(29) + 288), RD(16));
SET64(2, RD(3) & 0x7);
wr64(c, (RW(29) + 296), RD(17));
wr64(c, (RW(29) + 304), RD(31));
{ int t = RD(2) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0029A960; }
SET32(2, RW(3) + 256);
L_0029A900:;
ldl(c, 5, (RW(3) + 7));
ldr(c, 5, (RW(3) + 0));
ldl(c, 6, (RW(3) + 15));
ldr(c, 6, (RW(3) + 8));
ldl(c, 7, (RW(3) + 23));
ldr(c, 7, (RW(3) + 16));
ldl(c, 8, (RW(3) + 31));
ldr(c, 8, (RW(3) + 24));
sdl(c, 5, (RW(4) + 7));
sdr(c, 5, (RW(4) + 0));
sdl(c, 6, (RW(4) + 15));
sdr(c, 6, (RW(4) + 8));
sdl(c, 7, (RW(4) + 23));
sdr(c, 7, (RW(4) + 16));
sdl(c, 8, (RW(4) + 31));
sdr(c, 8, (RW(4) + 24));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_0029A900; } }
 goto L_0029A998;
L_0029A960:;
SET32(2, RW(3) + 256);
L_0029A964:;
SET64(5, rd64(c, (RW(3) + 0)));
SET64(6, rd64(c, (RW(3) + 8)));
SET64(7, rd64(c, (RW(3) + 16)));
SET64(8, rd64(c, (RW(3) + 24)));
wr64(c, (RW(4) + 0), RD(5));
wr64(c, (RW(4) + 8), RD(6));
wr64(c, (RW(4) + 16), RD(7));
wr64(c, (RW(4) + 24), RD(8));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_0029A964; } }
L_0029A998:;
ldl(c, 5, (RW(3) + 7));
ldr(c, 5, (RW(3) + 0));
ldl(c, 6, (RW(3) + 15));
ldr(c, 6, (RW(3) + 8));
SET64(7, (s8)rd8(c, (RW(3) + 16)));
SET64(8, (s8)rd8(c, (RW(3) + 17)));
sdl(c, 5, (RW(4) + 7));
sdr(c, 5, (RW(4) + 0));
sdl(c, 6, (RW(4) + 15));
sdr(c, 6, (RW(4) + 8));
wr8(c, (RW(4) + 16), (u8)RW(7));
SET64(2, (s64)(s32)0x410000);
SET32(17, RW(2) + 25508);
wr8(c, (RW(4) + 17), (u8)RW(8));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(4) == RD(0); SET64(2, (s64)(s32)0x410000); if (t) goto L_0029AA20; }
SET64(5, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(2) + 25504)));
SET64(16, (s64)(s32)0x410000);
SET64(31, 0x29a9f0); SET32(16, RW(16) + 25516); JP_F_001273D0(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(29) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(31, 0x29aa04); SET64(4, RD(2) + RD(0)); JP_F_0012A3C0(c);
SET64(31, 0x29aa0c); SET64(4, RD(29) + RD(0)); JP_F_0012A4D8(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, (s64)(s32)0x410000);
SET32(3, RW(3) + RW(2));
wr32(c, (RW(4) + 25520), RW(3));
wr32(c, (RW(16) + 0), RW(3));
L_0029AA20:;
SET64(16, rd64(c, (RW(29) + 288)));
SET64(17, rd64(c, (RW(29) + 296)));
SET64(31, rd64(c, (RW(29) + 304)));
SET32(29, RW(29) + 320); return;
}

void JP_F_0029AA38(Ctx *c) { /* func_0029AA38 */
ENTER(0x29aa38);
SET32(29, RW(29) + -528);
SET64(3, (s64)(s32)0x410000);
wr64(c, (RW(29) + 512), RD(30));
SET64(30, RD(4) + RD(0));
wr64(c, (RW(29) + 448), RD(16));
SET32(3, RW(3) + 25508);
wr64(c, (RW(29) + 456), RD(17));
wr64(c, (RW(29) + 464), RD(18));
wr64(c, (RW(29) + 472), RD(19));
wr64(c, (RW(29) + 480), RD(20));
wr64(c, (RW(29) + 488), RD(21));
wr64(c, (RW(29) + 496), RD(22));
wr64(c, (RW(29) + 504), RD(23));
wr64(c, (RW(29) + 520), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 1000); if (t) goto L_0029ABE0; }
SET64(6, (s32)rd32(c, (RW(30) + 288)));
SET64(16, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(30) + 280)));
SET64(31, 0x29aa90); SET32(16, RW(16) + 32744); JP_F_0027B438(c);
SET64(17, rd64(c, (RW(30) + 280)));
SET64(5, rd64(c, (RW(30) + 288)));
SET64(22, RD(2) + RD(0));
SET64(31, 0x29aaa4); SET64(4, RD(17) + RD(0)); JP_F_0011F988(c);
SET64(11, (s64)(s32)0x7fff0000);
SET64(11, RD(11) | 0xffff);
SET64(4, rd64(c, (RW(30) + 392)));
SET64(10, RD(17) + RD(0));
SET64(3, rd64(c, (RW(30) + 296)));
SET64(5, RD(16) + RD(0));
wr64(c, (RW(29) + 416), RD(4));
SET64(7, RD(2) + RD(0));
SET64(9, RSD(17) >> 32);
SET64(6, RD(30) + RD(0));
SET64(18, rd64(c, (RW(30) + 264)));
SET64(8, RD(22) + RD(0));
SET64(11, RD(10) & RD(11));
wr64(c, (RW(29) + 424), RD(18));
SET64(18, rd64(c, (RW(29) + 416)));
SET64(4, (s32)rd32(c, (RW(30) + 428)));
SET64(23, RD(18) - RD(3));
wr64(c, (RW(29) + 432), RD(4));
SET64(4, rd64(c, (RW(29) + 424)));
SET64(13, (s32)rd32(c, (RW(30) + 408)));
SET64(18, RD(4) - RD(3));
SET32(4, RW(29) + 160);
SET64(14, (s32)rd32(c, (RW(30) + 420)));
SET64(25, (s32)rd32(c, (RW(30) + 432)));
SET64(24, (s32)rd32(c, (RW(30) + 436)));
SET64(15, (s32)rd32(c, (RW(30) + 416)));
SET64(12, (s32)rd32(c, (RW(30) + 404)));
SET64(17, (s32)rd32(c, (RW(30) + 424)));
SET64(16, (s32)rd32(c, (RW(30) + 412)));
SET64(2, (s32)rd32(c, (RW(30) + 400)));
SET64(21, (s32)rd32(c, (RW(30) + 440)));
SET64(20, rd32(c, (RW(30) + 4)));
SET64(19, rd32(c, (RW(30) + 8)));
wr64(c, (RW(29) + 24), RD(18));
SET64(18, rd64(c, (RW(29) + 432)));
wr64(c, (RW(29) + 88), RD(16));
wr64(c, (RW(29) + 40), RD(18));
wr64(c, (RW(29) + 104), RD(2));
wr64(c, (RW(29) + 32), RD(23));
wr64(c, (RW(29) + 48), RD(25));
wr64(c, (RW(29) + 56), RD(24));
wr64(c, (RW(29) + 64), RD(21));
wr64(c, (RW(29) + 72), RD(20));
wr64(c, (RW(29) + 80), RD(19));
wr64(c, (RW(29) + 96), RD(15));
wr64(c, (RW(29) + 112), RD(12));
SET64(2, rd64(c, (RW(29) + 416)));
wr64(c, (RW(29) + 16), RD(3));
SET64(3, (s64)(s32)0x410000);
SET64(18, rd64(c, (RW(29) + 424)));
wr64(c, (RW(29) + 0), RD(2));
SET64(2, (s32)rd32(c, (RW(3) + 24856)));
wr64(c, (RW(29) + 8), RD(18));
SET64(18, (s64)(s32)0x410000);
wr64(c, (RW(29) + 136), RD(17));
SET32(18, RW(18) + 25508);
wr64(c, (RW(29) + 120), RD(13));
wr64(c, (RW(29) + 128), RD(14));
SET64(31, 0x29ab94); wr64(c, (RW(29) + 144), RD(2)); JP_F_00129C30(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET32(17, RW(2) + 25516);
SET32(5, RW(29) + 160);
SET64(31, 0x29abac); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_0012A3C0(c);
SET64(4, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET64(5, (s32)rd32(c, (RW(4) + 25504)));
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(2, RW(2) + RW(5));
SET32(3, RW(3) + RW(16));
SET32(2, RW(2) + -1024);
SET64(2, RD(3) < RD(2));
{ int t = RD(2) != RD(0); wr32(c, (RW(17) + 0), RW(3)); if (t) goto L_0029ABE0; }
SET64(2, (s64)(s32)0x410000);
SET64(3, (s32)rd32(c, (RW(2) + 25520)));
wr32(c, (RW(17) + 0), RW(3));
L_0029ABE0:;
SET64(16, rd64(c, (RW(29) + 448)));
SET64(17, rd64(c, (RW(29) + 456)));
SET64(18, rd64(c, (RW(29) + 464)));
SET64(19, rd64(c, (RW(29) + 472)));
SET64(20, rd64(c, (RW(29) + 480)));
SET64(21, rd64(c, (RW(29) + 488)));
SET64(22, rd64(c, (RW(29) + 496)));
SET64(23, rd64(c, (RW(29) + 504)));
SET64(30, rd64(c, (RW(29) + 512)));
SET64(31, rd64(c, (RW(29) + 520)));
SET32(29, RW(29) + 528); return;
}

void JP_F_0029AC10(Ctx *c) { /* func_0029AC10 */
ENTER(0x29ac10);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(8) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x29ac50); SET32(16, RW(17) + 8520); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x192);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 8); if (t) goto L_0029AC90; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); { JP_F_0028A8F8(c); return; }
L_0029AC90:;
SET64(18, (s32)rd32(c, (RW(16) + 16)));
{ int t = RD(18) != RD(3); SET64(2, (s32)rd32(c, (RW(16) + 8))); if (t) goto L_0029ACD0; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(5) | 0x602);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); { JP_F_0028A8F8(c); return; }
L_0029ACD0:;
SET32(16, RW(22) << 4);
SET64(8, RD(19) + RD(0));
SET32(16, RW(2) + RW(16));
SET64(5, RD(20) + RD(0));
SET32(16, RW(16) + 4);
SET64(7, RD(21) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x29acf4); SET64(6, RD(0) + RD(0)); JP_F_0029B088(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(22) + RD(0));
SET64(31, 0x29ad08); SET64(7, RD(16) + RD(0)); JP_F_00287A08(c);
SET64(2, RD(0) + RD(0));
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

void JP_F_0029AD38(Ctx *c) { /* func_0029AD38 */
ENTER(0x29ad38);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x29ad70); SET32(16, RW(17) + 8520); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x191);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 8); if (t) goto L_0029ADA8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); { JP_F_0028A8F8(c); return; }
L_0029ADA8:;
SET64(18, (s32)rd32(c, (RW(16) + 16)));
{ int t = RD(18) != RD(3); SET64(2, (s32)rd32(c, (RW(16) + 8))); if (t) goto L_0029ADE8; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(5) | 0x602);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); { JP_F_0028A8F8(c); return; }
L_0029ADE8:;
SET32(16, RW(21) << 4);
SET64(5, RD(19) + RD(0));
SET32(16, RW(2) + RW(16));
SET64(6, RD(20) + RD(0));
SET32(16, RW(16) + 4);
SET64(8, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x29ae0c); SET64(7, RD(0) + RD(0)); JP_F_0029B088(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(21) + RD(0));
SET64(31, 0x29ae20); SET64(7, RD(16) + RD(0)); JP_F_00287A08(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0029AE48(Ctx *c) { /* func_0029AE48 */
ENTER(0x29ae48);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029AE50(Ctx *c) { /* func_0029AE50 */
ENTER(0x29ae50);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029AE58(Ctx *c) { /* func_0029AE58 */
ENTER(0x29ae58);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29ae70); SET64(17, RD(4) + RD(0)); JP_F_0029AEA0(c);
SET64(31, 0x29ae78); SET64(4, RD(17) + RD(0)); JP_F_0029AFB0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x29ae84); SET64(16, RD(2) + RD(0)); JP_F_0029AF28(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029AEA0(Ctx *c) { /* func_0029AEA0 */
ENTER(0x29aea0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 8);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29aec0); SET32(17, RW(0) + 1); JP_F_0029A110(c);
{ int t = RD(2) == RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_0029AF08; }
SET64(31, 0x29aed0); SET64(5, (s32)rd32(c, (RW(16) + 8536))); JP_F_002887C8(c);
{ int t = RD(2) != RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_0029AF08; }
SET64(31, 0x29aee0);  JP_F_0029AF20(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029AF08; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 8);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 32); { JP_F_0029A0F8(c); return; }
L_0029AF08:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029AF20(Ctx *c) { /* func_0029AF20 */
ENTER(0x29af20);
SET32(2, RW(0) + 1); return;
}

void JP_F_0029AF28(Ctx *c) { /* func_0029AF28 */
ENTER(0x29af28);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 8);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29af48); SET32(17, RW(0) + 1); JP_F_0029A0E0(c);
{ int t = RD(2) == RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_0029AF90; }
SET64(31, 0x29af58); SET64(5, (s32)rd32(c, (RW(16) + 8536))); JP_F_00288788(c);
{ int t = RD(2) != RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_0029AF90; }
SET64(31, 0x29af68);  JP_F_0029AFA8(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029AF90; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 8);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 32); { JP_F_0029A0C8(c); return; }
L_0029AF90:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029AFA8(Ctx *c) { /* func_0029AFA8 */
ENTER(0x29afa8);
SET32(2, RW(0) + 1); return;
}

void JP_F_0029AFB0(Ctx *c) { /* func_0029AFB0 */
ENTER(0x29afb0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029AFB8(Ctx *c) { /* func_0029AFB8 */
ENTER(0x29afb8);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(2) + 13808);
SET32(2, RW(2) + 8520);
wr32(c, (RW(2) + 8), RW(5));
SET64(31, 0x29afd8); SET64(6, (s32)rd32(c, (RW(2) + 16))); JP_F_0029AFE8(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029AFE8(Ctx *c) { /* func_0029AFE8 */
ENTER(0x29afe8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(5) + 4);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
wr32(c, (RW(5) + 0), RW(0));
L_0029B018:;
SET64(31, 0x29b020); SET64(4, RD(16) + RD(0)); JP_F_0029B060(c);
SET64(4, RD(19) + RD(0));
SET64(6, RD(17) + RD(0));
SET32(17, RW(17) + 1);
SET64(7, RD(16) + RD(0));
SET32(16, RW(16) + 16);
SET64(31, 0x29b03c); SET64(5, RD(18) + RD(0)); JP_F_00287A08(c);
SET64(2, RSD(17) < (s64)3);
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 32))); if (t) { POLL(); goto L_0029B018; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0029B060(Ctx *c) { /* func_0029B060 */
ENTER(0x29b060);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029B088(c); return; }
}

void JP_F_0029B088(Ctx *c) { /* func_0029B088 */
ENTER(0x29b088);
wr32(c, (RW(4) + 12), RW(8));
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 8), RW(7)); return;
}

void JP_F_0029B0A0(Ctx *c) { /* func_0029B0A0 */
ENTER(0x29b0a0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B0A8(Ctx *c) { /* func_0029B0A8 */
ENTER(0x29b0a8);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B0B0(Ctx *c) { /* func_0029B0B0 */
ENTER(0x29b0b0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B0B8(Ctx *c) { /* func_0029B0B8 */
ENTER(0x29b0b8);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B0C0(Ctx *c) { /* func_0029B0C0 */
ENTER(0x29b0c0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B0C8(Ctx *c) { /* func_0029B0C8 */
ENTER(0x29b0c8);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x601);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0029B0E8(Ctx *c) { /* func_0029B0E8 */
ENTER(0x29b0e8);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x601);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0029B108(Ctx *c) { /* func_0029B108 */
ENTER(0x29b108);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x601);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0029B128(Ctx *c) { /* func_0029B128 */
ENTER(0x29b128);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x601);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0029B148(Ctx *c) { /* func_0029B148 */
ENTER(0x29b148);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B150(Ctx *c) { /* func_0029B150 */
ENTER(0x29b150);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B158(Ctx *c) { /* func_0029B158 */
ENTER(0x29b158);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B160(Ctx *c) { /* func_0029B160 */
ENTER(0x29b160);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 5);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29b17c); SET64(17, RD(4) + RD(0)); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0029B1A4; }
SET64(31, 0x29b18c);  JP_F_0029B1B8(c);
SET64(31, 0x29b194); SET64(4, RD(17) + RD(0)); JP_F_0029B308(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x29b1a0); SET64(16, RD(2) + RD(0)); JP_F_0029B280(c);
SET64(2, RD(16) + RD(0));
L_0029B1A4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029B1B8(Ctx *c) { /* func_0029B1B8 */
ENTER(0x29b1b8);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29b1d8); SET32(17, RW(0) + 1); JP_F_0029A110(c);
{ int t = RD(2) == RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_0029B220; }
SET64(31, 0x29b1e8); SET64(5, (s32)rd32(c, (RW(16) + 8400))); JP_F_002887C8(c);
{ int t = RD(2) != RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_0029B220; }
SET64(31, 0x29b1f8);  JP_F_0029B238(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029B220; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 6);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 32); { JP_F_0029A0F8(c); return; }
L_0029B220:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029B238(Ctx *c) { /* func_0029B238 */
ENTER(0x29b238);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 15);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29b250); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029B260; }
SET32(2, RW(0) + 1); goto L_0029B26C;
L_0029B260:;
SET64(31, 0x29b268);  JP_F_00299840(c);
SET64(2, RD(0) < RD(2));
L_0029B26C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029B280(Ctx *c) { /* func_0029B280 */
ENTER(0x29b280);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29b2a0); SET32(17, RW(0) + 1); JP_F_0029A0E0(c);
{ int t = RD(2) == RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_0029B2E8; }
SET64(31, 0x29b2b0); SET64(5, (s32)rd32(c, (RW(16) + 8400))); JP_F_00288788(c);
{ int t = RD(2) != RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_0029B2E8; }
SET64(31, 0x29b2c0);  JP_F_0029B300(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029B2E8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 6);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 32); { JP_F_0029A0C8(c); return; }
L_0029B2E8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029B300(Ctx *c) { /* func_0029B300 */
ENTER(0x29b300);
SET32(2, RW(0) + 1); return;
}

void JP_F_0029B308(Ctx *c) { /* func_0029B308 */
ENTER(0x29b308);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B310(Ctx *c) { /* func_0029B310 */
ENTER(0x29b310);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B318(Ctx *c) { /* func_0029B318 */
ENTER(0x29b318);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B320(Ctx *c) { /* func_0029B320 */
ENTER(0x29b320);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B328(Ctx *c) { /* func_0029B328 */
ENTER(0x29b328);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B330(Ctx *c) { /* func_0029B330 */
ENTER(0x29b330);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B338(Ctx *c) { /* func_0029B338 */
ENTER(0x29b338);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B340(Ctx *c) { /* func_0029B340 */
ENTER(0x29b340);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x701);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0029B360(Ctx *c) { /* func_0029B360 */
ENTER(0x29b360);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x701);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0029B380(Ctx *c) { /* func_0029B380 */
ENTER(0x29b380);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET32(2, RW(2) + -3);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_0029B3B8; }
wr32(c, (RW(17) + 0), RW(0)); goto L_0029B3E0;
L_0029B3B8:;
SET64(31, 0x29b3c0); SET64(5, (s32)rd32(c, (RW(16) + 8400))); JP_F_002886A0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029B3E4; }
SET64(31, 0x29b3d0); SET64(5, (s32)rd32(c, (RW(17) + 0))); JP_F_002993C8(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0029B3E4; }
wr32(c, (RW(17) + 0), RW(0)); goto L_0029B3E4;
L_0029B3E0:;
SET64(2, RD(0) + RD(0));
L_0029B3E4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029B3F8(Ctx *c) { /* func_0029B3F8 */
ENTER(0x29b3f8);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8400)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002886F8(c); return; }
}

void JP_F_0029B418(Ctx *c) { /* func_0029B418 */
ENTER(0x29b418);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0029B420(Ctx *c) { /* func_0029B420 */
ENTER(0x29b420);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -32464); return;
}

void JP_F_0029B430(Ctx *c) { /* func_0029B430 */
ENTER(0x29b430);
SET64(2, RD(4) ^ 0x2);
SET64(2, RD(2) < (u64)(s64)1); return;
}

void JP_F_0029B440(Ctx *c) { /* func_0029B440 */
ENTER(0x29b440);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(4, RW(2) + 668);
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RSD(2) > 0; SET32(3, RW(2) + 1); if (t) goto L_0029B4B8; }
wr32(c, (RW(4) + 0), RW(3));
SET64(16, (s64)(s32)0x540000);
SET64(31, 0x29b480); SET32(16, RW(16) + 648); JP_F_0029B420(c);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(31, 0x29b490); SET64(5, RD(17) + RD(0)); JP_F_0029B660(c);
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 656);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029B620(c); return; }
L_0029B4B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029B4D0(Ctx *c) { /* func_0029B4D0 */
ENTER(0x29b4d0);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + 668);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RSD(2) > 0; wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_0029B508; }
SET64(4, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 656);
SET32(29, RW(29) + 16); { JP_F_0029B610(c); return; }
L_0029B508:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029B518(Ctx *c) { /* func_0029B518 */
ENTER(0x29b518);
SET32(29, RW(29) + -64);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
SET64(22, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(16));
SET32(4, RW(22) + 656);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 56), RD(31));
SET64(17, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(3, RSD(3) < RSD(17));
{ int t = RD(3) == RD(0); SET64(19, (s32)rd32(c, (RW(4) + 8))); if (t) goto L_0029B5B8; }
SET64(16, RD(0) + RD(0));
SET64(2, RSD(16) < RSD(17));
L_0029B570:;
if (RD(2) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_0029B598; }
SET32(2, RW(16) << 4);
SET32(16, RW(16) + 1);
SET32(18, RW(19) + RW(2));
SET64(31, 0x29b58c); SET64(4, RD(18) + RD(0)); JP_F_0029B6B0(c);
{ int t = RD(2) == RD(0); SET64(2, RSD(16) < RSD(17)); if (t) { POLL(); goto L_0029B570; } }
SET64(4, RD(18) + RD(0));
L_0029B598:;
SET64(5, RD(21) + RD(0));
SET64(31, 0x29b5a4); SET64(6, RD(20) + RD(0)); JP_F_0029B648(c);
SET32(4, RW(22) + 656);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(2, RD(18) + RD(0));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 4), RW(3));
L_0029B5B8:;
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

void JP_F_0029B5E0(Ctx *c) { /* func_0029B5E0 */
ENTER(0x29b5e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29b5f0);  JP_F_0029B630(c);
SET64(3, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(3, RW(3) + 656);
SET64(2, (s32)rd32(c, (RW(3) + 4)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 4), RW(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029B610(Ctx *c) { /* func_0029B610 */
ENTER(0x29b610);
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0)); return;
}

void JP_F_0029B620(Ctx *c) { /* func_0029B620 */
ENTER(0x29b620);
wr32(c, (RW(4) + 8), RW(6));
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(4) + 4), RW(0)); return;
}

void JP_F_0029B630(Ctx *c) { /* func_0029B630 */
ENTER(0x29b630);
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0)); return;
}

void JP_F_0029B648(Ctx *c) { /* func_0029B648 */
ENTER(0x29b648);
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 8), RW(6));
wr32(c, (RW(4) + 0), RW(2));
wr32(c, (RW(4) + 4), RW(5)); return;
}

void JP_F_0029B660(Ctx *c) { /* func_0029B660 */
ENTER(0x29b660);
SET32(29, RW(29) + -32);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RSD(2) <= 0; wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0029B69C; }
SET64(17, RD(4) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
L_0029B688:;
SET32(17, RW(17) + 16);
SET64(31, 0x29b694); SET32(16, RW(16) + -1); JP_F_0029B630(c);
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_0029B688; } }
L_0029B69C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029B6B0(Ctx *c) { /* func_0029B6B0 */
ENTER(0x29b6b0);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(2) < (u64)(s64)1); return;
}

void JP_F_0029B6C0(Ctx *c) { /* func_0029B6C0 */
ENTER(0x29b6c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29b6d4); SET64(16, RD(4) + RD(0)); JP_F_0029B708(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 107); if (t) goto L_0029B6F4; }
SET64(2, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(2) == RD(4); SET64(3, RSD(2) < (s64)110); if (t) goto L_0029B6F0; }
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0029B6F4; }
L_0029B6F0:;
SET32(2, RW(0) + 1);
L_0029B6F4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029B708(Ctx *c) { /* func_0029B708 */
ENTER(0x29b708);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, RSD(2) < (s64)-1);
SET64(2, RSD(2) < (s64)2);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0029B728; }
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0029B728; }
SET32(2, RW(0) + 1);
L_0029B728:;
 return;
}

void JP_F_0029B730(Ctx *c) { /* func_0029B730 */
ENTER(0x29b730);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET32(19, RW(0) + 1);
wr64(c, (RW(29) + 48), RD(31));
wr32(c, (RW(18) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x29b764); SET32(17, RW(2) + 32); JP_F_0029B6B0(c);
if (RD(2) != RD(19)) { SET64(2, (s32)rd32(c, (RW(16) + 8))); goto L_0029B778; }
SET64(2, RD(0) + RD(0)); goto L_0029B804;
L_0029B778:;
SET64(2, RD(2) < (u64)(s64)2048);
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x4c0000); if (t) goto L_0029B798; }
SET32(3, RW(0) + -1);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(3)); goto L_0029B804;
L_0029B798:;
SET64(4, RD(17) + RD(0));
SET32(6, RW(0) + 24);
SET64(31, 0x29b7a8); SET32(5, RW(5) + -32408); JP_F_00127180(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(29) + RD(0));
{ int t = RD(2) == RD(0); SET32(6, RW(29) + 4); if (t) goto L_0029B7C8; }
SET32(2, RW(0) + -1);
wr32(c, (RW(16) + 0), RW(2));
SET64(2, RD(0) + RD(0)); goto L_0029B804;
L_0029B7C8:;
SET32(2, RW(0) + 2);
SET64(31, 0x29b7d4); wr32(c, (RW(16) + 0), RW(2)); JP_F_0029BB20(c);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0029B804; }
SET32(2, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET32(4, RW(3) << 1);
SET32(4, RW(4) + RW(3));
SET32(4, RW(4) << 3);
SET32(4, RW(4) + RW(3));
SET32(4, RW(4) << 2);
SET32(4, RW(4) + RW(5));
wr32(c, (RW(16) + 12), RW(4));
wr32(c, (RW(18) + 0), RW(19));
L_0029B804:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0029B820(Ctx *c) { /* func_0029B820 */
ENTER(0x29b820);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) & 0xff);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
wr32(c, (RW(18) + 0), RW(0));
SET64(31, 0x29b848); SET64(16, (s32)rd32(c, (RW(4) + 4))); JP_F_0029B6C0(c);
SET64(5, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029B874; }
SET64(31, 0x29b85c);  JP_F_0029B960(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0029B870; }
wr32(c, (RW(18) + 0), RW(2)); goto L_0029B874;
L_0029B870:;
wr32(c, (RW(18) + 0), RW(0));
L_0029B874:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029B890(Ctx *c) { /* func_0029B890 */
ENTER(0x29b890);
SET32(29, RW(29) + -32);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET64(3, RSD(3) < (s64)110);
{ int t = RD(3) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029B948; }
SET64(31, 0x29b8cc);  JP_F_0029CBE0(c);
SET32(6, RW(0) + 224);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 192);
SET64(4, RD(17) + RD(0));
{ int t = RD(3) == RD(2); SET64(5, RD(16) + RD(0)); if (t) goto L_0029B8F8; }
{ int t = RD(3) == RD(6); SET64(2, RD(0) + RD(0)); if (t) goto L_0029B920; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_0029B94C;
L_0029B8F8:;
SET64(31, 0x29b900);  JP_F_0029C2E8(c);
SET64(4, RD(16) + RD(0));
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET64(5, RD(3) + RD(0)); if (t) goto L_0029B948; }
SET64(31, 0x29b918);  JP_F_0029CB60(c);
wr32(c, (RW(18) + 0), RW(2)); goto L_0029B944;
L_0029B920:;
SET64(31, 0x29b928); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(4, RD(16) + RD(0));
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET64(5, RD(3) + RD(0)); if (t) goto L_0029B948; }
SET64(31, 0x29b940);  JP_F_0029CBA0(c);
wr32(c, (RW(18) + 0), RW(2));
L_0029B944:;
SET32(2, RW(0) + 1);
L_0029B948:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029B94C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029B960(Ctx *c) { /* func_0029B960 */
ENTER(0x29b960);
SET32(3, RW(4) + 384);
SET64(7, RD(0) + RD(0));
SET64(2, rd8(c, (RW(3) + 24)));
SET64(6, RD(0) + RD(0)); goto L_0029B990;
L_0029B978:;
SET32(2, RW(6) << 6);
SET64(3, RSD(6) < (s64)26);
{ int t = RD(3) == RD(0); SET32(2, RW(4) + RW(2)); if (t) goto L_0029B9A0; }
SET32(3, RW(2) + 384);
SET64(2, rd8(c, (RW(3) + 24)));
L_0029B990:;
if (RD(2) != RD(5)) { SET32(6, RW(6) + 1); { POLL(); goto L_0029B978; } }
SET64(7, RD(3) + RD(0));
L_0029B9A0:;
SET64(2, RD(7) + RD(0)); return;
}

void JP_F_0029B9A8(Ctx *c) { /* func_0029B9A8 */
ENTER(0x29b9a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29b9c8); SET32(17, RW(2) + 64); JP_F_0029B6C0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 13); if (t) goto L_0029BA04; }
SET64(31, 0x29b9e0);  JP_F_001273D0(c);
SET32(2, RW(0) + 1);
ldl(c, 3, (RW(17) + 7));
ldr(c, 3, (RW(17) + 0));
lwl(c, 4, (RW(17) + 11));
lwr(c, 4, (RW(17) + 8));
sdl(c, 3, (RW(16) + 7));
sdr(c, 3, (RW(16) + 0));
swl(c, 4, (RW(16) + 11));
swr(c, 4, (RW(16) + 8));
L_0029BA04:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029BA18(Ctx *c) { /* func_0029BA18 */
ENTER(0x29ba18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
wr8(c, (RW(16) + 0), (u8)RW(0));
SET64(31, 0x29ba38); SET64(17, (s32)rd32(c, (RW(4) + 4))); JP_F_0029B6C0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 13); if (t) goto L_0029BA74; }
SET64(31, 0x29ba50);  JP_F_001273D0(c);
SET32(2, RW(0) + 1);
ldl(c, 3, (RW(17) + 83));
ldr(c, 3, (RW(17) + 76));
lwl(c, 4, (RW(17) + 87));
lwr(c, 4, (RW(17) + 84));
sdl(c, 3, (RW(16) + 7));
sdr(c, 3, (RW(16) + 0));
swl(c, 4, (RW(16) + 11));
swr(c, 4, (RW(16) + 8));
L_0029BA74:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029BA88(Ctx *c) { /* func_0029BA88 */
ENTER(0x29ba88);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
wr8(c, (RW(16) + 0), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29baac); SET32(17, RW(2) + 96); JP_F_0029B708(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 33); if (t) goto L_0029BB08; }
SET64(31, 0x29bac4);  JP_F_001273D0(c);
SET32(2, RW(0) + 1);
ldl(c, 3, (RW(17) + 7));
ldr(c, 3, (RW(17) + 0));
ldl(c, 4, (RW(17) + 15));
ldr(c, 4, (RW(17) + 8));
ldl(c, 5, (RW(17) + 23));
ldr(c, 5, (RW(17) + 16));
ldl(c, 6, (RW(17) + 31));
ldr(c, 6, (RW(17) + 24));
sdl(c, 3, (RW(16) + 7));
sdr(c, 3, (RW(16) + 0));
sdl(c, 4, (RW(16) + 15));
sdr(c, 4, (RW(16) + 8));
sdl(c, 5, (RW(16) + 23));
sdr(c, 5, (RW(16) + 16));
sdl(c, 6, (RW(16) + 31));
sdr(c, 6, (RW(16) + 24));
L_0029BB08:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029BB20(Ctx *c) { /* func_0029BB20 */
ENTER(0x29bb20);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 72), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 88), RD(19));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 96), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(18) + 0), RW(0));
SET64(31, 0x29bb58); SET32(16, RW(2) + 32); JP_F_0029BA88(c);
SET64(4, RD(29) + RD(0));
SET32(5, RW(29) + 48);
{ int t = RD(2) == RD(0); SET32(6, RW(29) + 52); if (t) goto L_0029BBD0; }
SET64(19, rd8(c, (RW(16) + 25)));
SET64(31, 0x29bb74); SET64(16, rd8(c, (RW(16) + 24))); JP_F_0029BE08(c);
SET32(3, RW(16) << 1);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + RW(16)); if (t) goto L_0029BBD0; }
SET64(4, (s32)rd32(c, (RW(29) + 48)));
SET32(3, RW(3) << 3);
SET64(5, (s32)rd32(c, (RW(29) + 52)));
SET32(3, RW(3) + RW(16));
SET32(2, RW(4) << 1);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(4));
SET32(3, RW(3) + RW(19));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET64(3, RSD(3) < RSD(2));
if (RD(3) != RD(0)) { wr32(c, (RW(17) + 0), RW(4)); goto L_0029BBC8; }
wr32(c, (RW(17) + 0), RW(16));
wr32(c, (RW(18) + 0), RW(19)); goto L_0029BBCC;
L_0029BBC8:;
wr32(c, (RW(18) + 0), RW(5));
L_0029BBCC:;
SET32(2, RW(0) + 1);
L_0029BBD0:;
SET64(16, rd64(c, (RW(29) + 64)));
SET64(17, rd64(c, (RW(29) + 72)));
SET64(18, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 88)));
SET64(31, rd64(c, (RW(29) + 96)));
SET32(29, RW(29) + 112); return;
}

void JP_F_0029BBF0(Ctx *c) { /* func_0029BBF0 */
ENTER(0x29bbf0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
wr8(c, (RW(16) + 0), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29bc14); SET32(17, RW(2) + 224); JP_F_0029B6C0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 65); if (t) goto L_0029BCB0; }
SET64(31, 0x29bc2c);  JP_F_001273D0(c);
SET32(2, RW(0) + 1);
ldl(c, 3, (RW(17) + 7));
ldr(c, 3, (RW(17) + 0));
ldl(c, 4, (RW(17) + 15));
ldr(c, 4, (RW(17) + 8));
ldl(c, 5, (RW(17) + 23));
ldr(c, 5, (RW(17) + 16));
ldl(c, 6, (RW(17) + 31));
ldr(c, 6, (RW(17) + 24));
sdl(c, 3, (RW(16) + 7));
sdr(c, 3, (RW(16) + 0));
sdl(c, 4, (RW(16) + 15));
sdr(c, 4, (RW(16) + 8));
sdl(c, 5, (RW(16) + 23));
sdr(c, 5, (RW(16) + 16));
sdl(c, 6, (RW(16) + 31));
sdr(c, 6, (RW(16) + 24));
ldl(c, 3, (RW(17) + 39));
ldr(c, 3, (RW(17) + 32));
ldl(c, 4, (RW(17) + 47));
ldr(c, 4, (RW(17) + 40));
ldl(c, 5, (RW(17) + 55));
ldr(c, 5, (RW(17) + 48));
ldl(c, 6, (RW(17) + 63));
ldr(c, 6, (RW(17) + 56));
sdl(c, 3, (RW(16) + 39));
sdr(c, 3, (RW(16) + 32));
sdl(c, 4, (RW(16) + 47));
sdr(c, 4, (RW(16) + 40));
sdl(c, 5, (RW(16) + 55));
sdr(c, 5, (RW(16) + 48));
sdl(c, 6, (RW(16) + 63));
sdr(c, 6, (RW(16) + 56));
L_0029BCB0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029BCC8(Ctx *c) { /* func_0029BCC8 */
ENTER(0x29bcc8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29bcec); SET32(16, RW(2) + 128); JP_F_0029B6C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029BD04; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029BD04:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029BD18(Ctx *c) { /* func_0029BD18 */
ENTER(0x29bd18);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29bd40); SET32(16, RW(3) + 128); JP_F_0029B6C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029BD58; }
SET64(3, rd8(c, (RW(16) + 4)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029BD58:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029BD68(Ctx *c) { /* func_0029BD68 */
ENTER(0x29bd68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29bd8c); SET32(16, RW(2) + 128); JP_F_0029B6C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029BDA4; }
SET64(3, (s16)rd16(c, (RW(16) + 8)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029BDA4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029BDB8(Ctx *c) { /* func_0029BDB8 */
ENTER(0x29bdb8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29bddc); SET32(16, RW(2) + 128); JP_F_0029B6C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029BDF4; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029BDF4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029BE08(Ctx *c) { /* func_0029BE08 */
ENTER(0x29be08);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
SET32(5, RW(2) + -32376);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29be2c); SET64(17, RD(6) + RD(0)); JP_F_0012AB88(c);
SET64(5, RD(16) + RD(0));
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(3) + 4); if (t) goto L_0029BE54; }
SET64(31, 0x29be44);  JP_F_0029BE68(c);
SET64(5, RD(17) + RD(0));
SET64(31, 0x29be50); SET32(4, RW(2) + 1); JP_F_0029BE68(c);
SET32(2, RW(0) + 1);
L_0029BE54:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029BE68(Ctx *c) { /* func_0029BE68 */
ENTER(0x29be68);
SET64(3, (s8)rd8(c, (RW(4) + 0)));
SET32(2, RW(0) + 46);
{ int t = RD(3) == RD(2); SET64(6, RD(0) + RD(0)); if (t) goto L_0029BEE4; }
SET32(2, RW(0) + 32);
if (RD(3) == RD(2)) { wr32(c, (RW(5) + 0), RW(6)); goto L_0029BEE8; }
if (RD(3) == RD(0)) { wr32(c, (RW(5) + 0), RW(6)); goto L_0029BEE8; }
SET32(2, RW(3) + -48);
SET64(2, RD(2) < (u64)(s64)10);
if (RD(2) == RD(0)) { wr32(c, (RW(5) + 0), RW(6)); goto L_0029BEE8; }
SET32(8, RW(0) + 46);
SET32(7, RW(0) + 32);
SET32(2, RW(6) << 2);
L_0029BEA8:;
SET32(4, RW(4) + 1);
SET32(2, RW(2) + RW(6));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(3));
SET64(3, (s8)rd8(c, (RW(4) + 0)));
SET32(6, RW(2) + -48);
{ int t = RD(3) == RD(8); SET32(2, RW(3) + -48); if (t) goto L_0029BEE4; }
if (RD(3) == RD(7)) { wr32(c, (RW(5) + 0), RW(6)); goto L_0029BEE8; }
if (RD(3) == RD(0)) { wr32(c, (RW(5) + 0), RW(6)); goto L_0029BEE8; }
SET64(2, RD(2) < (u64)(s64)10);
if (RD(2) != RD(0)) { SET32(2, RW(6) << 2); { POLL(); goto L_0029BEA8; } }
L_0029BEE4:;
wr32(c, (RW(5) + 0), RW(6));
L_0029BEE8:;
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_0029BEF0(Ctx *c) { /* func_0029BEF0 */
ENTER(0x29bef0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29bf14); SET32(16, RW(2) + 176); JP_F_0029B6C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029BF2C; }
SET64(3, rd8(c, (RW(16) + 0)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029BF2C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029BF40(Ctx *c) { /* func_0029BF40 */
ENTER(0x29bf40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29bf64); SET32(16, RW(2) + 176); JP_F_0029B6C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029BF7C; }
SET64(3, rd8(c, (RW(16) + 1)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029BF7C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029BF90(Ctx *c) { /* func_0029BF90 */
ENTER(0x29bf90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29bfb4); SET32(16, RW(2) + 176); JP_F_0029B6C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029BFCC; }
SET64(3, rd8(c, (RW(16) + 2)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029BFCC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029BFE0(Ctx *c) { /* func_0029BFE0 */
ENTER(0x29bfe0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29c004); SET32(16, RW(2) + 176); JP_F_0029B6C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029C01C; }
SET64(3, rd8(c, (RW(16) + 3)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029C01C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C030(Ctx *c) { /* func_0029C030 */
ENTER(0x29c030);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
wr32(c, (RW(18) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x29c05c); SET32(17, RW(2) + 176); JP_F_0029B6C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029C084; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(3, RSD(3) < (s64)110);
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0029C080; }
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_0029C080:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029C084:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C098(Ctx *c) { /* func_0029C098 */
ENTER(0x29c098);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29c0bc); SET32(16, RW(2) + 176); JP_F_0029B6C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029C0D4; }
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029C0D4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C0E8(Ctx *c) { /* func_0029C0E8 */
ENTER(0x29c0e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29c10c); SET32(16, RW(2) + 176); JP_F_0029B6C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029C124; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029C124:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C138(Ctx *c) { /* func_0029C138 */
ENTER(0x29c138);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29c15c); SET32(16, RW(2) + 176); JP_F_0029B6C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029C174; }
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029C174:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C188(Ctx *c) { /* func_0029C188 */
ENTER(0x29c188);
SET64(6, RD(5) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 0), RW(0));
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 12)));
SET64(3, RSD(3) < (s64)225);
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 176); if (t) goto L_0029C1B4; }
SET64(3, (s32)rd32(c, (RW(5) + 20)));
SET32(2, RW(0) + 1);
wr32(c, (RW(6) + 0), RW(3));
L_0029C1B4:;
 return;
}

void JP_F_0029C1C0(Ctx *c) { /* func_0029C1C0 */
ENTER(0x29c1c0);
SET64(6, RD(5) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 0), RW(0));
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 12)));
SET64(3, RSD(3) < (s64)225);
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 176); if (t) goto L_0029C1EC; }
SET64(3, (s32)rd32(c, (RW(5) + 24)));
SET32(2, RW(0) + 1);
wr32(c, (RW(6) + 0), RW(3));
L_0029C1EC:;
 return;
}

void JP_F_0029C1F8(Ctx *c) { /* func_0029C1F8 */
ENTER(0x29c1f8);
SET32(29, RW(29) + -32);
SET64(5, RD(5) & 0xff);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29c218); wr8(c, (RW(16) + 0), (u8)RW(0)); JP_F_0029C2E8(c);
SET64(4, RD(16) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(17) == RD(0); SET32(6, RW(0) + 13); if (t) goto L_0029C258; }
SET64(31, 0x29c234);  JP_F_001273D0(c);
SET32(2, RW(0) + 1);
ldl(c, 3, (RW(17) + 7));
ldr(c, 3, (RW(17) + 0));
lwl(c, 4, (RW(17) + 11));
lwr(c, 4, (RW(17) + 8));
sdl(c, 3, (RW(16) + 7));
sdr(c, 3, (RW(16) + 0));
swl(c, 4, (RW(16) + 11));
swr(c, 4, (RW(16) + 8));
L_0029C258:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C270(Ctx *c) { /* func_0029C270 */
ENTER(0x29c270);
SET32(29, RW(29) + -32);
SET64(5, RD(5) & 0xff);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29c290); wr8(c, (RW(16) + 0), (u8)RW(0)); JP_F_0029C2E8(c);
SET64(4, RD(16) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(17) == RD(0); SET32(6, RW(0) + 13); if (t) goto L_0029C2D0; }
SET64(31, 0x29c2ac);  JP_F_001273D0(c);
SET32(2, RW(0) + 1);
ldl(c, 3, (RW(17) + 19));
ldr(c, 3, (RW(17) + 12));
lwl(c, 4, (RW(17) + 23));
lwr(c, 4, (RW(17) + 20));
sdl(c, 3, (RW(16) + 7));
sdr(c, 3, (RW(16) + 0));
swl(c, 4, (RW(16) + 11));
swr(c, 4, (RW(16) + 8));
L_0029C2D0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C2E8(Ctx *c) { /* func_0029C2E8 */
ENTER(0x29c2e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29c304); SET64(17, (s32)rd32(c, (RW(4) + 4))); JP_F_0029B6C0(c);
SET64(5, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0029C328; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029B960(c); return; }
L_0029C328:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C340(Ctx *c) { /* func_0029C340 */
ENTER(0x29c340);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(2));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c36c); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029C398; }
SET64(31, 0x29c380);  JP_F_0029CBE0(c);
SET32(3, RW(0) + 192);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029C398; }
SET64(3, rd8(c, (RW(17) + 25)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_0029C398:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C3B0(Ctx *c) { /* func_0029C3B0 */
ENTER(0x29c3b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c3d8); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029C418; }
SET64(31, 0x29c3ec);  JP_F_0029CBE0(c);
SET32(3, RW(0) + 192);
{ int t = RD(2) == RD(3); SET32(4, RW(0) + 1); if (t) goto L_0029C400; }
SET64(2, RD(0) + RD(0)); goto L_0029C418;
L_0029C400:;
SET64(3, rd8(c, (RW(17) + 25)));
{ int t = RD(3) != RD(4); SET64(2, RD(0) + RD(0)); if (t) goto L_0029C418; }
SET64(3, rd8(c, (RW(17) + 26)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_0029C418:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C430(Ctx *c) { /* func_0029C430 */
ENTER(0x29c430);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c458); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029C484; }
SET64(31, 0x29c46c);  JP_F_0029CBE0(c);
SET32(3, RW(0) + 192);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029C484; }
SET64(3, rd8(c, (RW(17) + 27)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_0029C484:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C4A0(Ctx *c) { /* func_0029C4A0 */
ENTER(0x29c4a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c4c8); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029C4F4; }
SET64(31, 0x29c4dc);  JP_F_0029CBE0(c);
SET32(3, RW(0) + 192);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029C4F4; }
SET64(3, (s32)rd32(c, (RW(17) + 28)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_0029C4F4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C510(Ctx *c) { /* func_0029C510 */
ENTER(0x29c510);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(2));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c53c); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029C568; }
SET64(31, 0x29c550);  JP_F_0029CBE0(c);
SET32(3, RW(0) + 224);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029C568; }
SET64(3, rd8(c, (RW(17) + 25)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_0029C568:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C580(Ctx *c) { /* func_0029C580 */
ENTER(0x29c580);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c5a8); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029C5DC; }
SET64(31, 0x29c5bc);  JP_F_0029CBE0(c);
SET32(3, RW(0) + 224);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029C5DC; }
SET64(3, rd16(c, (RW(17) + 26)));
SET32(2, RW(0) + 1);
SET64(4, RD(3) ^ 0xffff);
if (RD(4) == 0) SET64(3, RD(0));
wr32(c, (RW(18) + 0), RW(3));
L_0029C5DC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C5F8(Ctx *c) { /* func_0029C5F8 */
ENTER(0x29c5f8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(19) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x29c62c); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029C68C; }
SET64(31, 0x29c640);  JP_F_0029CBE0(c);
SET32(3, RW(0) + 224);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029C68C; }
SET32(5, RW(17) + 28);
SET32(2, RW(0) + 1);
SET64(4, rd8(c, (RW(5) + 0)));
wr32(c, (RW(18) + 0), RW(4));
SET32(4, RW(4) << 4);
SET64(3, rd8(c, (RW(5) + 1)));
SET32(3, RW(3) >> 4);
SET64(4, RD(4) | RD(3));
wr32(c, (RW(18) + 0), RW(4));
SET64(3, rd8(c, (RW(5) + 1)));
wr32(c, (RW(19) + 0), RW(3));
SET32(3, RW(3) << 8);
SET64(4, rd8(c, (RW(5) + 2)));
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xfff);
wr32(c, (RW(19) + 0), RW(3));
L_0029C68C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0029C6A8(Ctx *c) { /* func_0029C6A8 */
ENTER(0x29c6a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c6d0); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029C700; }
SET64(31, 0x29c6e4);  JP_F_0029CBE0(c);
SET32(3, RW(0) + 224);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029C700; }
SET64(31, 0x29c6f8); SET64(4, rd8(c, (RW(17) + 31))); JP_F_0029CAF0(c);
wr32(c, (RW(18) + 0), RW(2));
SET32(2, RW(0) + 1);
L_0029C700:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C718(Ctx *c) { /* func_0029C718 */
ENTER(0x29c718);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(2));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c744); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029C770; }
SET64(31, 0x29c75c);  JP_F_0029CBA0(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0029C774; }
SET64(3, rd8(c, (RW(17) + 33)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_0029C770:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029C774:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C788(Ctx *c) { /* func_0029C788 */
ENTER(0x29c788);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(2));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c7b4); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029C7E0; }
SET64(31, 0x29c7cc);  JP_F_0029CBA0(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0029C7E4; }
SET64(3, rd8(c, (RW(17) + 34)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_0029C7E0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029C7E4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C7F8(Ctx *c) { /* func_0029C7F8 */
ENTER(0x29c7f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c820); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029C850; }
SET64(31, 0x29c838);  JP_F_0029CBA0(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0029C854; }
SET64(3, rd8(c, (RW(17) + 35)));
SET32(2, RW(0) + 1);
SET64(3, RD(3) & 0x1);
wr32(c, (RW(18) + 0), RW(3));
L_0029C850:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029C854:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C868(Ctx *c) { /* func_0029C868 */
ENTER(0x29c868);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c890); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029C8C4; }
SET64(31, 0x29c8a8);  JP_F_0029CBA0(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0029C8C8; }
SET64(3, rd8(c, (RW(17) + 35)));
SET32(2, RW(0) + 1);
SET64(3, RD(3) & 0x10);
SET64(3, RD(0) < RD(3));
wr32(c, (RW(18) + 0), RW(3));
L_0029C8C4:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029C8C8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C8E0(Ctx *c) { /* func_0029C8E0 */
ENTER(0x29c8e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c908); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029C934; }
SET64(31, 0x29c920);  JP_F_0029CBA0(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0029C938; }
SET64(3, rd8(c, (RW(17) + 36)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_0029C934:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029C938:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029C950(Ctx *c) { /* func_0029C950 */
ENTER(0x29c950);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(0) + -1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(19));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x29c980); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029C9B8; }
SET64(31, 0x29c998);  JP_F_0029CBA0(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0029C9BC; }
SET64(2, rd8(c, (RW(17) + 37)));
SET64(3, RSD(2) < (s64)64);
{ int t = RD(3) != RD(0); wr32(c, (RW(18) + 0), RW(2)); if (t) goto L_0029C9B4; }
wr32(c, (RW(18) + 0), RW(19));
L_0029C9B4:;
SET32(2, RW(0) + 1);
L_0029C9B8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029C9BC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0029C9D8(Ctx *c) { /* func_0029C9D8 */
ENTER(0x29c9d8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(0) + -1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(19));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x29ca08); SET64(5, RD(16) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029CA40; }
SET64(31, 0x29ca20);  JP_F_0029CBA0(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0029CA44; }
SET64(2, rd8(c, (RW(17) + 38)));
SET64(3, RSD(2) < (s64)64);
{ int t = RD(3) != RD(0); wr32(c, (RW(18) + 0), RW(2)); if (t) goto L_0029CA3C; }
wr32(c, (RW(18) + 0), RW(19));
L_0029CA3C:;
SET32(2, RW(0) + 1);
L_0029CA40:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029CA44:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0029CA60(Ctx *c) { /* func_0029CA60 */
ENTER(0x29ca60);
SET32(29, RW(29) + -48);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(19) + 0), RW(2));
SET64(5, RD(16) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x29ca94); SET64(18, RD(4) + RD(0)); JP_F_0029C2E8(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029CAD0; }
SET64(31, 0x29caac);  JP_F_0029CBA0(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0029CAD4; }
SET64(3, (s32)rd32(c, (RW(18) + 12)));
SET64(3, RSD(3) < (s64)210);
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0029CAD4; }
SET64(3, rd8(c, (RW(17) + 39)));
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 0), RW(3));
L_0029CAD0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029CAD4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

static void JP_B_0029CAF0(Ctx *c, u32 entry) { /* func_0029CAF0 */
ENTER(entry);
switch (entry) { case 0x29cb18: goto L_0029CB18; case 0x29cb20: goto L_0029CB20; case 0x29cb28: goto L_0029CB28; case 0x29cb30: goto L_0029CB30; case 0x29cb38: goto L_0029CB38; case 0x29cb40: goto L_0029CB40; case 0x29cb48: goto L_0029CB48; case 0x29cb50: goto L_0029CB50; }
SET32(4, RW(4) + -1);
SET64(2, RD(4) < (u64)(s64)8);
{ int t = RD(2) == RD(0);  if (t) goto L_0029CB58; }
SET32(2, RW(4) << 2);
SET64(3, (s64)(s32)0x4c0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + -32368)));
{ u32 t = RW(3);  switch (t) { case 0x29cb18: goto L_0029CB18; case 0x29cb20: goto L_0029CB20; case 0x29cb28: goto L_0029CB28; case 0x29cb30: goto L_0029CB30; case 0x29cb38: goto L_0029CB38; case 0x29cb40: goto L_0029CB40; case 0x29cb48: goto L_0029CB48; case 0x29cb50: goto L_0029CB50; default: rt_jump(c, t); return; } }
L_0029CB18:;
SET32(2, RW(0) + 23976); return;
L_0029CB20:;
SET32(2, RW(0) + 24000); return;
L_0029CB28:;
SET32(2, RW(0) + 25000); return;
L_0029CB30:;
SET32(2, RW(0) + 29970); return;
L_0029CB38:;
SET32(2, RW(0) + 30000); return;
L_0029CB40:;
SET64(2, RD(0) | 0xc350); return;
L_0029CB48:;
SET64(2, RD(0) | 0xea24); return;
L_0029CB50:;
SET64(2, RD(0) | 0xea60); return;
L_0029CB58:;
SET64(2, RD(0) + RD(0)); return;
}
void JP_F_0029CAF0(Ctx *c) { JP_B_0029CAF0(c, 0x29caf0); }
void JP_F_0029CB18(Ctx *c) { JP_B_0029CAF0(c, 0x29cb18); }
void JP_F_0029CB20(Ctx *c) { JP_B_0029CAF0(c, 0x29cb20); }
void JP_F_0029CB28(Ctx *c) { JP_B_0029CAF0(c, 0x29cb28); }
void JP_F_0029CB30(Ctx *c) { JP_B_0029CAF0(c, 0x29cb30); }
void JP_F_0029CB38(Ctx *c) { JP_B_0029CAF0(c, 0x29cb38); }
void JP_F_0029CB40(Ctx *c) { JP_B_0029CAF0(c, 0x29cb40); }
void JP_F_0029CB48(Ctx *c) { JP_B_0029CAF0(c, 0x29cb48); }
void JP_F_0029CB50(Ctx *c) { JP_B_0029CAF0(c, 0x29cb50); }

void JP_F_0029CB60(Ctx *c) { /* func_0029CB60 */
ENTER(0x29cb60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29cb74); SET64(16, RD(5) + RD(0)); JP_F_0029CBE0(c);
SET32(3, RW(0) + 192);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029CB90; }
SET64(3, rd8(c, (RW(16) + 32)));
SET64(2, RD(0) < RD(3));
SET64(3, RD(3) < (u64)(s64)2);
if (RD(3) == 0) SET64(2, RD(0));
L_0029CB90:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029CBA0(Ctx *c) { /* func_0029CBA0 */
ENTER(0x29cba0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29cbb4); SET64(16, RD(5) + RD(0)); JP_F_0029CBE0(c);
SET32(3, RW(0) + 224);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029CBD0; }
SET64(3, rd8(c, (RW(16) + 32)));
SET64(2, RD(0) < RD(3));
SET64(3, RD(3) < (u64)(s64)2);
if (RD(3) == 0) SET64(2, RD(0));
L_0029CBD0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029CBE0(Ctx *c) { /* func_0029CBE0 */
ENTER(0x29cbe0);
SET64(5, RD(4) + RD(0));
SET32(2, RW(0) + 192);
SET32(3, RW(5) + -192);
SET32(4, RW(5) + -224);
SET64(3, RD(3) < (u64)(s64)32);
{ int t = RD(3) != RD(0); SET64(4, RD(4) < (u64)(s64)16); if (t) goto L_0029CC1C; }
{ int t = RD(4) != RD(0); SET32(2, RW(0) + 224); if (t) goto L_0029CC1C; }
SET32(2, RW(0) + 189);
{ int t = RD(5) == RD(2); SET32(3, RW(0) + 191); if (t) goto L_0029CC1C; }
{ int t = RD(5) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029CC1C; }
SET32(2, RW(0) + 189);
L_0029CC1C:;
 return;
}

void JP_F_0029CC28(Ctx *c) { /* func_0029CC28 */
ENTER(0x29cc28);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029CC40(c); return; }
}

void JP_F_0029CC40(Ctx *c) { /* func_0029CC40 */
ENTER(0x29cc40);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x410000);
SET32(16, RW(16) + 25528);
SET32(6, RW(0) + 200);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29cc64); SET64(4, RD(16) + RD(0)); JP_F_001273D0(c);
SET32(3, RW(0) + 8);
wr32(c, (RW(16) + 4), RW(3));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029CC80(Ctx *c) { /* func_0029CC80 */
ENTER(0x29cc80);
 return;
}

void JP_F_0029CC88(Ctx *c) { /* func_0029CC88 */
ENTER(0x29cc88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29cc9c);  JP_F_0029CCE0(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029CCD0; }
SET64(31, 0x29ccb0);  JP_F_0029CD30(c);
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + 25528);
SET32(5, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(16) + RD(0));
SET32(4, RW(4) + 1);
wr32(c, (RW(3) + 0), RW(4));
wr32(c, (RW(16) + 0), RW(5));
L_0029CCD0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029CCE0(Ctx *c) { /* func_0029CCE0 */
ENTER(0x29cce0);
SET64(2, (s64)(s32)0x410000);
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) + 25528);
SET64(5, (s32)rd32(c, (RW(2) + 4)));
{ int t = RSD(5) <= 0; SET32(2, RW(2) + 8); if (t) goto L_0029CD24; }
SET64(4, RD(2) + RD(0));
L_0029CD00:;
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(4) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(4) + 24); if (t) goto L_0029CD28; }
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(5));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0029CD00; } }
L_0029CD24:;
SET64(2, RD(0) + RD(0));
L_0029CD28:;
 return;
}

void JP_F_0029CD30(Ctx *c) { /* func_0029CD30 */
ENTER(0x29cd30);
SET32(3, RW(4) + 20);
SET32(2, RW(4) + 8);
SET32(9, RW(0) + 31);
SET32(5, RW(0) + 100);
SET32(7, RW(0) + 1);
SET32(8, RW(0) + 64);
SET32(6, RW(0) + -128);
wr32(c, (RW(2) + 8), RW(5));
wr32(c, (RW(2) + 4), RW(9));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(7));
wr8(c, (RW(3) + 2), (u8)RW(6));
wr8(c, (RW(3) + 1), (u8)RW(8));
wr8(c, (RW(3) + 0), (u8)RW(0)); return;
}

void JP_F_0029CD70(Ctx *c) { /* func_0029CD70 */
ENTER(0x29cd70);
{ int t = RD(4) == RD(0);  if (t) goto L_0029CD90; }
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + 25528);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 0), RW(2));
L_0029CD90:;
 return;
}

void JP_F_0029CD98(Ctx *c) { /* func_0029CD98 */
ENTER(0x29cd98);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET32(2, RW(16) + 8);
SET64(6, (s32)rd32(c, (RW(2) + 8)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x29cdc0); SET64(5, (s32)rd32(c, (RW(2) + 4))); JP_F_0026E400(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029CDD8(Ctx *c) { /* func_0029CDD8 */
ENTER(0x29cdd8);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(4, RD(6) + RD(0));
SET64(7, rd8(c, (RW(2) + 22)));
SET64(5, rd8(c, (RW(2) + 20)));
SET64(6, rd8(c, (RW(2) + 21)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026E650(c); return; }
}

void JP_F_0029CE00(Ctx *c) { /* func_0029CE00 */
ENTER(0x29ce00);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(4, RD(6) + RD(0));
SET64(7, rd8(c, (RW(2) + 22)));
SET64(5, rd8(c, (RW(2) + 20)));
SET64(6, rd8(c, (RW(2) + 21)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026E8A8(c); return; }
}

void JP_F_0029CE28(Ctx *c) { /* func_0029CE28 */
ENTER(0x29ce28);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void JP_F_0029CE30(Ctx *c) { /* func_0029CE30 */
ENTER(0x29ce30);
SET32(2, RW(4) + 8);
SET32(3, RW(0) + 1);
wr32(c, (RW(2) + 8), RW(6));
wr32(c, (RW(2) + 0), RW(7));
wr32(c, (RW(2) + 4), RW(5));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_0029CE50(Ctx *c) { /* func_0029CE50 */
ENTER(0x29ce50);
SET32(4, RW(4) + 8);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(7) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(5) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(6) + 0), RW(2)); return;
}

void JP_F_0029CE70(Ctx *c) { /* func_0029CE70 */
ENTER(0x29ce70);
SET32(4, RW(4) + 20);
wr8(c, (RW(4) + 2), (u8)RW(7));
wr8(c, (RW(4) + 0), (u8)RW(5));
wr8(c, (RW(4) + 1), (u8)RW(6)); return;
}

void JP_F_0029CE88(Ctx *c) { /* func_0029CE88 */
ENTER(0x29ce88);
SET32(4, RW(4) + 20);
SET64(2, rd8(c, (RW(4) + 0)));
wr8(c, (RW(5) + 0), (u8)RW(2));
SET64(3, rd8(c, (RW(4) + 1)));
wr8(c, (RW(6) + 0), (u8)RW(3));
SET64(2, rd8(c, (RW(4) + 2)));
wr8(c, (RW(7) + 0), (u8)RW(2)); return;
}

void JP_F_0029CEA8(Ctx *c) { /* func_0029CEA8 */
ENTER(0x29cea8);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(2) + 72), RW(8));
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + 68), RW(7));
SET32(29, RW(29) + 16); { JP_F_0029DC88(c); return; }
}

void JP_F_0029CEC8(Ctx *c) { /* func_0029CEC8 */
ENTER(0x29cec8);
SET64(3, (s32)rd32(c, (RW(4) + 8)));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(3, RW(3) + -1);
SET64(5, (s32)rd32(c, (RW(4) + 0)));
mul_s(c, 0, 3, RSW(2), RSW(3));
SET32(2, RW(0) - RW(2));
wr32(c, (RW(4) + 12), RW(2));
SET32(5, RW(5) + RW(3));
wr32(c, (RW(4) + 0), RW(5)); return;
}

void JP_F_0029CEF0(Ctx *c) { /* func_0029CEF0 */
ENTER(0x29cef0);
SET64(3, (s32)rd32(c, (RW(4) + 8)));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(3, RW(3) + -1);
SET64(5, (s32)rd32(c, (RW(4) + 0)));
mul_s(c, 0, 3, RSW(2), RSW(3));
SET32(2, RW(0) - RW(2));
wr32(c, (RW(4) + 12), RW(2));
SET32(5, RW(5) + RW(3));
wr32(c, (RW(4) + 0), RW(5)); return;
}

void JP_F_0029CF18(Ctx *c) { /* func_0029CF18 */
ENTER(0x29cf18);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 97);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) == RD(2); SET64(2, RSD(3) < (s64)98); if (t) goto L_0029CFE0; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 257); if (t) goto L_0029CF80; }
SET32(2, RW(0) + 49);
{ int t = RD(3) == RD(2); SET64(2, RSD(3) < (s64)50); if (t) goto L_0029CFE0; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 65); if (t) goto L_0029CF68; }
SET32(2, RW(0) + 17);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 33); if (t) goto L_0029CFE0; }
{ int t = RD(3) == RD(2); SET64(6, (s64)(s32)0x4c0000); if (t) goto L_0029CFC8; }
SET64(4, RD(0) + RD(0)); goto L_0029CFD4;
L_0029CF68:;
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 81); if (t) goto L_0029CFE0; }
{ int t = RD(3) == RD(2); SET64(6, (s64)(s32)0x4c0000); if (t) goto L_0029CFE0; }
SET64(4, RD(0) + RD(0)); goto L_0029CFD4;
L_0029CF80:;
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_0029CFE4; }
SET64(2, RSD(3) < (s64)258);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 273); if (t) goto L_0029CFB0; }
SET32(2, RW(0) + 113);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 241); if (t) goto L_0029CFE0; }
{ int t = RD(3) == RD(2); SET64(6, (s64)(s32)0x4c0000); if (t) goto L_0029CFE0; }
SET64(4, RD(0) + RD(0)); goto L_0029CFD4;
L_0029CFB0:;
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 4097); if (t) goto L_0029CFE0; }
{ int t = RD(3) != RD(2); SET64(6, (s64)(s32)0x4c0000); if (t) goto L_0029CFD0; }
SET64(2, RD(0) + RD(0)); goto L_0029CFE4;
L_0029CFC8:;
SET32(2, RW(0) + 1); goto L_0029CFE4;
L_0029CFD0:;
SET64(4, RD(0) + RD(0));
L_0029CFD4:;
SET32(6, RW(6) + -32336);
SET64(31, 0x29cfe0); SET64(5, RD(0) + RD(0)); JP_F_0029D878(c);
L_0029CFE0:;
SET64(2, RD(0) + RD(0));
L_0029CFE4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029CFF0(Ctx *c) { /* func_0029CFF0 */
ENTER(0x29cff0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 4);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 81);
{ int t = RD(5) == RD(16); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029D02C; }
SET32(3, RW(0) + 97);
{ int t = RD(5) == RD(3); SET32(2, RW(0) + 5); if (t) goto L_0029D02C; }
SET64(31, 0x29d01c);  JP_F_0029D930(c);
SET32(4, RW(0) + 5);
SET64(3, RD(2) ^ RD(16));
SET32(2, RW(0) + 4);
if (RD(3) != 0) SET64(2, RD(4));
L_0029D02C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029D040(Ctx *c) { /* func_0029D040 */
ENTER(0x29d040);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029D058(c); return; }
}

static void JP_B_0029D058(Ctx *c, u32 entry) { /* func_0029D058 */
ENTER(entry);
switch (entry) { case 0x29d0b0: goto L_0029D0B0; case 0x29d0d0: goto L_0029D0D0; case 0x29d0f0: goto L_0029D0F0; case 0x29d110: goto L_0029D110; case 0x29d130: goto L_0029D130; case 0x29d150: goto L_0029D150; case 0x29d170: goto L_0029D170; case 0x29d190: goto L_0029D190; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET64(5, RD(18) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29d080); SET64(16, RD(4) + RD(0)); JP_F_0029D1D0(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029D1B8; }
SET64(2, RD(18) < (u64)(s64)101);
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 60), RW(18)); if (t) goto L_0029D190; }
SET32(2, RW(18) << 2);
SET64(3, (s64)(s32)0x4c0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + -32224)));
{ u32 t = RW(3);  switch (t) { case 0x29d0b0: goto L_0029D0B0; case 0x29d0d0: goto L_0029D0D0; case 0x29d0f0: goto L_0029D0F0; case 0x29d110: goto L_0029D110; case 0x29d130: goto L_0029D130; case 0x29d150: goto L_0029D150; case 0x29d170: goto L_0029D170; case 0x29d190: goto L_0029D190; default: rt_jump(c, t); return; } }
L_0029D0B0:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029D250(c); return; }
L_0029D0D0:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029D340(c); return; }
L_0029D0F0:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029D360(c); return; }
L_0029D110:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029D380(c); return; }
L_0029D130:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029D3A0(c); return; }
L_0029D150:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029D3B8(c); return; }
L_0029D170:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029D270(c); return; }
L_0029D190:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, (s64)(s32)0x4c0000);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(6, RW(6) + -32288);
SET32(29, RW(29) + 32); { JP_F_0029D878(c); return; }
L_0029D1B8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}
void JP_F_0029D058(Ctx *c) { JP_B_0029D058(c, 0x29d058); }
void JP_F_0029D0B0(Ctx *c) { JP_B_0029D058(c, 0x29d0b0); }
void JP_F_0029D0D0(Ctx *c) { JP_B_0029D058(c, 0x29d0d0); }
void JP_F_0029D0F0(Ctx *c) { JP_B_0029D058(c, 0x29d0f0); }
void JP_F_0029D110(Ctx *c) { JP_B_0029D058(c, 0x29d110); }
void JP_F_0029D130(Ctx *c) { JP_B_0029D058(c, 0x29d130); }
void JP_F_0029D150(Ctx *c) { JP_B_0029D058(c, 0x29d150); }
void JP_F_0029D170(Ctx *c) { JP_B_0029D058(c, 0x29d170); }
void JP_F_0029D190(Ctx *c) { JP_B_0029D058(c, 0x29d190); }

static void JP_B_0029D1D0(Ctx *c, u32 entry) { /* func_0029D1D0 */
ENTER(entry);
switch (entry) { case 0x29d220: goto L_0029D220; case 0x29d234: goto L_0029D234; case 0x29d238: goto L_0029D238; }
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 100);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 1);
wr64(c, (RW(29) + 8), RD(31));
SET64(6, (s32)rd32(c, (RW(4) + 60)));
{ int t = RD(6) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029D23C; }
{ int t = RD(6) != RD(5); SET64(2, RD(16) + RD(0)); if (t) goto L_0029D23C; }
SET64(2, RD(5) < (u64)(s64)101);
{ int t = RD(2) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_0029D23C; }
SET32(2, RW(5) << 2);
SET64(3, (s64)(s32)0x4c0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + -31808)));
{ u32 t = RW(3);  switch (t) { case 0x29d220: goto L_0029D220; case 0x29d234: goto L_0029D234; case 0x29d238: goto L_0029D238; default: rt_jump(c, t); return; } }
L_0029D220:;
SET64(31, 0x29d228); SET64(4, (s32)rd32(c, (RW(4) + 52))); JP_F_0029CE28(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(2, RD(16) + RD(0)); if (t) goto L_0029D23C; }
L_0029D234:;
SET64(16, RD(0) + RD(0));
L_0029D238:;
SET64(2, RD(16) + RD(0));
L_0029D23C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}
void JP_F_0029D1D0(Ctx *c) { JP_B_0029D1D0(c, 0x29d1d0); }
void JP_F_0029D220(Ctx *c) { JP_B_0029D1D0(c, 0x29d220); }
void JP_F_0029D234(Ctx *c) { JP_B_0029D1D0(c, 0x29d234); }
void JP_F_0029D238(Ctx *c) { JP_B_0029D1D0(c, 0x29d238); }

void JP_F_0029D250(Ctx *c) { /* func_0029D250 */
ENTER(0x29d250);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, (s32)rd32(c, (RW(4) + 64)));
SET64(5, (s32)rd32(c, (RW(5) + 76)));
SET64(4, (s32)rd32(c, (RW(4) + 40)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029E4C8(c); return; }
}

void JP_F_0029D270(Ctx *c) { /* func_0029D270 */
ENTER(0x29d270);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029D288(c); return; }
}

void JP_F_0029D288(Ctx *c) { /* func_0029D288 */
ENTER(0x29d288);
SET32(5, RW(0) + 15);
SET32(2, RW(4) + 15);
L_0029D290:;
SET32(5, RW(5) + -1);
wr8(c, (RW(2) + 0), (u8)RW(0));
{ int t = RSD(5) >= 0; SET32(2, RW(2) + -1); if (t) { POLL(); goto L_0029D290; } }
SET64(1, (s64)(s32)0x3f140000);
SET64(1, RD(1) | 0xfdf3);
c->f[2].u = RW(1);
SET32(5, RW(0) + 16);
SET64(1, (s64)(s32)0x4f000000);
c->f[1].u = RW(1);
SET64(7, (s64)(s32)0x80000000);
L_0029D2C8:;
SET32(2, RW(5) + -16);
SET32(6, RW(4) + RW(5));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
SET32(5, RW(5) + 1);
c->f[0].f = fpu(F(0) * F(2));
c->fcc = F(1) <= F(0);
c->f[3].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[3].u);
{ int t = !c->fcc; SET64(3, RSD(5) < (s64)236); if (t) goto L_0029D304; }
c->f[0].f = fpu(F(0) - F(1));
c->f[3].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[3].u);
SET64(2, RD(2) | RD(7));
L_0029D304:;
{ int t = RD(3) != RD(0); wr8(c, (RW(6) + 0), (u8)RW(2)); if (t) { POLL(); goto L_0029D2C8; } }
SET32(5, RW(0) + 236);
SET32(6, RW(0) + -128);
L_0029D318:;
SET32(3, RW(4) + RW(5));
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < (s64)256);
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 0), (u8)RW(6)); if (t) { POLL(); goto L_0029D318; } }
 return;
}

void JP_F_0029D340(Ctx *c) { /* func_0029D340 */
ENTER(0x29d340);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, (s32)rd32(c, (RW(4) + 64)));
SET64(5, (s32)rd32(c, (RW(5) + 76)));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029CD98(c); return; }
}

void JP_F_0029D360(Ctx *c) { /* func_0029D360 */
ENTER(0x29d360);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, (s32)rd32(c, (RW(4) + 64)));
SET64(5, (s32)rd32(c, (RW(5) + 76)));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029CDD8(c); return; }
}

void JP_F_0029D380(Ctx *c) { /* func_0029D380 */
ENTER(0x29d380);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, (s32)rd32(c, (RW(4) + 64)));
SET64(5, (s32)rd32(c, (RW(5) + 76)));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029CE00(c); return; }
}

void JP_F_0029D3A0(Ctx *c) { /* func_0029D3A0 */
ENTER(0x29d3a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026EB08(c); return; }
}

void JP_F_0029D3B8(Ctx *c) { /* func_0029D3B8 */
ENTER(0x29d3b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026EB00(c); return; }
}

void JP_F_0029D3D0(Ctx *c) { /* func_0029D3D0 */
ENTER(0x29d3d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29d3f0); SET64(4, (s32)rd32(c, (RW(16) + 40))); JP_F_0029E898(c);
SET64(6, (s64)(s32)0x4c0000);
SET32(3, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 16);
{ int t = RD(2) == RD(3); SET32(6, RW(6) + -31400); if (t) goto L_0029D420; }
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029D878(c); return; }
L_0029D420:;
SET64(31, 0x29d428);  JP_F_0029EE08(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029D250(c); return; }
}

void JP_F_0029D448(Ctx *c) { /* func_0029D448 */
ENTER(0x29d448);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29d468); SET64(4, (s32)rd32(c, (RW(16) + 40))); JP_F_0029E898(c);
SET64(6, (s64)(s32)0x4c0000);
SET32(3, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 32);
{ int t = RD(2) == RD(3); SET32(6, RW(6) + -31352); if (t) goto L_0029D498; }
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029D878(c); return; }
L_0029D498:;
SET64(31, 0x29d4a0);  JP_F_0029EE08(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029D250(c); return; }
}

void JP_F_0029D4C0(Ctx *c) { /* func_0029D4C0 */
ENTER(0x29d4c0);
SET32(2, RW(0) + 17); return;
}

void JP_F_0029D4C8(Ctx *c) { /* func_0029D4C8 */
ENTER(0x29d4c8);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 25728);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RSD(3) > 0; wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029D528; }
SET64(31, 0x29d4ec);  JP_F_0029D538(c);
SET64(3, (s64)(s32)0x540000);
SET32(3, RW(3) + 672);
SET64(31, 0x29d4fc); wr32(c, (RW(3) + 0), RW(2)); JP_F_0029D548(c);
SET64(31, 0x29d504);  JP_F_0029DDC0(c);
SET64(31, 0x29d50c);  JP_F_0029DF50(c);
SET64(31, 0x29d514);  JP_F_0029CC28(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(3) + 25732), RW(0));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 0), RW(2));
L_0029D528:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029D538(Ctx *c) { /* func_0029D538 */
ENTER(0x29d538);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -31304); return;
}

void JP_F_0029D548(Ctx *c) { /* func_0029D548 */
ENTER(0x29d548);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x410000);
SET32(16, RW(16) + 25736);
SET32(6, RW(0) + 1000);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29d56c); SET64(4, RD(16) + RD(0)); JP_F_001273D0(c);
SET32(3, RW(0) + 8);
wr32(c, (RW(16) + 4), RW(3));
SET64(31, 0x29d57c); SET32(4, RW(0) + 1); JP_F_0029D8B8(c);
SET64(31, 0x29d584);  JP_F_0026CD98(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0026CE30(c); return; }
}

void JP_F_0029D598(Ctx *c) { /* func_0029D598 */
ENTER(0x29d598);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 25728);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RSD(3) <= 0; wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029D5E0; }
SET64(31, 0x29d5bc);  JP_F_0029DFA8(c);
SET64(31, 0x29d5c4);  JP_F_0029CC80(c);
SET64(31, 0x29d5cc);  JP_F_0029DDD8(c);
SET64(31, 0x29d5d4);  JP_F_0026CDD0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(16) + 0), RW(2));
L_0029D5E0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029D5F0(Ctx *c) { /* func_0029D5F0 */
ENTER(0x29d5f0);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 25744);
wr32(c, (RW(2) + 4), RW(5));
wr32(c, (RW(2) + 0), RW(4)); return;
}

void JP_F_0029D608(Ctx *c) { /* func_0029D608 */
ENTER(0x29d608);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x29d638); SET64(20, RD(4) + RD(0)); JP_F_0029D720(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(5, RD(16) + RD(0));
{ int t = RD(18) == RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_0029D6FC; }
SET64(31, 0x29d654);  JP_F_0029D818(c);
SET32(3, RW(0) + 1);
SET64(4, RD(0) + RD(0));
SET64(5, RD(20) + RD(0));
{ int t = RD(2) == RD(3); SET64(6, RD(19) + RD(0)); if (t) goto L_0029D680; }
SET64(6, (s64)(s32)0x4c0000);
SET64(5, RD(0) + RD(0));
SET64(31, 0x29d678); SET32(6, RW(6) + -31248); JP_F_0029D878(c);
SET64(2, RD(0) + RD(0)); goto L_0029D6FC;
L_0029D680:;
SET64(31, 0x29d688); SET64(4, RD(18) + RD(0)); JP_F_0029D770(c);
SET64(31, 0x29d690);  JP_F_0029DFB0(c);
SET64(6, (s64)(s32)0x4c0000);
SET64(5, RD(0) + RD(0));
SET32(6, RW(6) + -31200);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0029D6CC; }
SET64(31, 0x29d6ac); wr32(c, (RW(18) + 40), RW(2)); JP_F_0029CC88(c);
SET64(6, (s64)(s32)0x4c0000);
SET64(7, RD(2) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET32(8, RW(2) + 25736);
SET32(6, RW(6) + -31168);
SET64(5, RD(0) + RD(0));
{ int t = RD(7) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0029D6E8; }
L_0029D6CC:;
SET64(31, 0x29d6d4);  JP_F_0029D878(c);
SET64(31, 0x29d6dc); SET64(4, RD(18) + RD(0)); JP_F_0029D828(c);
SET64(2, RD(0) + RD(0)); goto L_0029D6FC;
L_0029D6E8:;
SET64(3, (s32)rd32(c, (RW(8) + 0)));
SET64(2, RD(18) + RD(0));
wr32(c, (RW(18) + 52), RW(7));
SET32(3, RW(3) + 1);
wr32(c, (RW(8) + 0), RW(3));
L_0029D6FC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0029D720(Ctx *c) { /* func_0029D720 */
ENTER(0x29d720);
SET64(2, (s64)(s32)0x410000);
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) + 25736);
SET64(5, (s32)rd32(c, (RW(2) + 4)));
{ int t = RSD(5) <= 0; SET32(2, RW(2) + 24); if (t) goto L_0029D764; }
SET64(4, RD(2) + RD(0));
L_0029D740:;
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(4) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(4) + 120); if (t) goto L_0029D768; }
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(5));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0029D740; } }
L_0029D764:;
SET64(2, RD(0) + RD(0));
L_0029D768:;
 return;
}

void JP_F_0029D770(Ctx *c) { /* func_0029D770 */
ENTER(0x29d770);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 120);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29d79c); SET64(16, RD(4) + RD(0)); JP_F_001273D0(c);
SET32(3, RW(17) + 31);
SET32(2, RW(0) + -32);
SET64(3, RD(3) & RD(2));
SET32(2, RW(0) + 17);
SET32(8, RW(0) + 1);
SET32(7, RW(3) + 3072);
SET32(4, RW(3) + 1024);
SET32(5, RW(3) + 2048);
SET32(6, RW(0) + -1);
wr32(c, (RW(16) + 88), RW(17));
wr32(c, (RW(16) + 92), RW(18));
wr32(c, (RW(16) + 0), RW(8));
wr32(c, (RW(16) + 8), RW(2));
wr32(c, (RW(16) + 68), RW(4));
wr32(c, (RW(16) + 72), RW(5));
wr32(c, (RW(16) + 76), RW(7));
wr32(c, (RW(16) + 104), RW(6));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 44), RW(8));
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 64), RW(3));
wr32(c, (RW(16) + 116), RW(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029D818(Ctx *c) { /* func_0029D818 */
ENTER(0x29d818);
SET64(2, RSD(4) < (s64)6175);
SET64(2, RD(2) ^ 0x1); return;
}

void JP_F_0029D828(Ctx *c) { /* func_0029D828 */
ENTER(0x29d828);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029D868; }
SET64(4, (s32)rd32(c, (RW(2) + 40)));
SET64(16, (s32)rd32(c, (RW(2) + 52)));
SET64(31, 0x29d84c); wr32(c, (RW(2) + 0), RW(0)); JP_F_0029E070(c);
SET64(31, 0x29d854); SET64(4, RD(16) + RD(0)); JP_F_0029CD70(c);
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + 25736);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 0), RW(2));
L_0029D868:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029D878(Ctx *c) { /* func_0029D878 */
ENTER(0x29d878);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + 25744);
SET64(5, RD(6) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) + 1);
SET64(4, (s32)rd32(c, (RW(2) + 4)));
{ int t = RD(6) == RD(0); wr32(c, (RW(2) + 8), RW(3)); if (t) goto L_0029D8AC; }
{ u32 t = RW(6); SET64(31, 0x29d8ac);  rt_call(c, t); }
L_0029D8AC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029D8B8(Ctx *c) { /* func_0029D8B8 */
ENTER(0x29d8b8);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 25756), RW(4)); return;
}

void JP_F_0029D8C8(Ctx *c) { /* func_0029D8C8 */
ENTER(0x29d8c8);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + 25756))); return;
}

void JP_F_0029D8D8(Ctx *c) { /* func_0029D8D8 */
ENTER(0x29d8d8);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 25732), RW(4)); return;
}

void JP_F_0029D8E8(Ctx *c) { /* func_0029D8E8 */
ENTER(0x29d8e8);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + 25732))); return;
}

void JP_F_0029D8F8(Ctx *c) { /* func_0029D8F8 */
ENTER(0x29d8f8);
SET64(2, (s32)rd32(c, (RW(4) + 40)));
wr32(c, (RW(2) + 68), RW(5)); return;
}

void JP_F_0029D908(Ctx *c) { /* func_0029D908 */
ENTER(0x29d908);
SET64(2, (s32)rd32(c, (RW(4) + 40)));
wr32(c, (RW(2) + 72), RW(5)); return;
}

void JP_F_0029D918(Ctx *c) { /* func_0029D918 */
ENTER(0x29d918);
wr32(c, (RW(4) + 4), RW(5)); return;
}

void JP_F_0029D920(Ctx *c) { /* func_0029D920 */
ENTER(0x29d920);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void JP_F_0029D928(Ctx *c) { /* func_0029D928 */
ENTER(0x29d928);
wr32(c, (RW(4) + 8), RW(5)); return;
}

void JP_F_0029D930(Ctx *c) { /* func_0029D930 */
ENTER(0x29d930);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void JP_F_0029D938(Ctx *c) { /* func_0029D938 */
ENTER(0x29d938);
wr32(c, (RW(4) + 16), RW(6));
wr32(c, (RW(4) + 12), RW(5)); return;
}

void JP_F_0029D948(Ctx *c) { /* func_0029D948 */
ENTER(0x29d948);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
wr32(c, (RW(5) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 16)));
wr32(c, (RW(6) + 0), RW(3)); return;
}

void JP_F_0029D960(Ctx *c) { /* func_0029D960 */
ENTER(0x29d960);
wr32(c, (RW(4) + 20), RW(5)); return;
}

void JP_F_0029D968(Ctx *c) { /* func_0029D968 */
ENTER(0x29d968);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET32(5, RW(0) + 100);
SET32(16, RW(16) << 2);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29d994); SET64(18, RD(6) + RD(0)); JP_F_0029D9C8(c);
SET32(16, RW(16) + RW(17));
SET64(17, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 64), RW(18));
SET64(31, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029D9B8(Ctx *c) { /* func_0029D9B8 */
ENTER(0x29d9b8);
SET32(5, RW(5) << 2);
SET32(5, RW(5) + RW(4));
SET64(2, (s32)rd32(c, (RW(5) + 64))); return;
}

void JP_F_0029D9C8(Ctx *c) { /* func_0029D9C8 */
ENTER(0x29d9c8);
wr32(c, (RW(4) + 60), RW(5)); return;
}

void JP_F_0029D9D0(Ctx *c) { /* func_0029D9D0 */
ENTER(0x29d9d0);
SET64(2, (s32)rd32(c, (RW(4) + 60))); return;
}

void JP_F_0029D9D8(Ctx *c) { /* func_0029D9D8 */
ENTER(0x29d9d8);
SET32(29, RW(29) + -64);
SET64(8, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET32(17, RW(8) + 24);
wr64(c, (RW(29) + 32), RD(16));
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(3, RD(6) + RD(0));
wr32(c, (RW(17) + 4), RW(2));
SET64(5, (s64)(s32)0x4c0000);
wr32(c, (RW(17) + 8), RW(3));
SET64(6, (s64)(s32)0x4c0000);
SET64(4, RD(29) + RD(0));
SET32(5, RW(5) + -31136);
SET32(6, RW(6) + -31128);
SET64(16, (s32)rd32(c, (RW(8) + 40)));
SET32(7, RW(29) + 16);
wr32(c, (RW(29) + 0), RW(2));
SET64(31, 0x29da28); wr32(c, (RW(29) + 4), RW(3)); JP_F_0026B558(c);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029DA48; }
SET64(31, 0x29da40);  JP_F_0029E098(c);
SET32(2, RW(0) + 1); goto L_0029DA58;
L_0029DA48:;
SET64(5, (s32)rd32(c, (RW(29) + 16)));
SET64(31, 0x29da54); SET64(6, (s32)rd32(c, (RW(29) + 20))); JP_F_0029E098(c);
SET32(2, RW(0) + 1);
L_0029DA58:;
SET64(16, rd64(c, (RW(29) + 32)));
wr32(c, (RW(17) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0029DA70(Ctx *c) { /* func_0029DA70 */
ENTER(0x29da70);
SET32(4, RW(4) + 24);
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 8))); goto L_0029DA90; }
wr32(c, (RW(5) + 0), RW(0));
wr32(c, (RW(6) + 0), RW(0)); return;
L_0029DA90:;
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 0), RW(2));
wr32(c, (RW(5) + 0), RW(3)); return;
}

void JP_F_0029DAA0(Ctx *c) { /* func_0029DAA0 */
ENTER(0x29daa0);
wr32(c, (RW(4) + 44), RW(5)); return;
}

void JP_F_0029DAA8(Ctx *c) { /* func_0029DAA8 */
ENTER(0x29daa8);
SET64(2, (s32)rd32(c, (RW(4) + 44))); return;
}

void JP_F_0029DAB0(Ctx *c) { /* func_0029DAB0 */
ENTER(0x29dab0);
wr32(c, (RW(4) + 48), RW(5)); return;
}

void JP_F_0029DAB8(Ctx *c) { /* func_0029DAB8 */
ENTER(0x29dab8);
SET64(2, (s32)rd32(c, (RW(4) + 48))); return;
}

void JP_F_0029DAC0(Ctx *c) { /* func_0029DAC0 */
ENTER(0x29dac0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 40)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029E7E8(c); return; }
}

void JP_F_0029DAD8(Ctx *c) { /* func_0029DAD8 */
ENTER(0x29dad8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 40)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029E880(c); return; }
}

void JP_F_0029DAF0(Ctx *c) { /* func_0029DAF0 */
ENTER(0x29daf0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 40)));
SET64(5, (s32)rd32(c, (RW(5) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029E1D8(c); return; }
}

void JP_F_0029DB10(Ctx *c) { /* func_0029DB10 */
ENTER(0x29db10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029CE30(c); return; }
}

void JP_F_0029DB28(Ctx *c) { /* func_0029DB28 */
ENTER(0x29db28);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029CE50(c); return; }
}

void JP_F_0029DB40(Ctx *c) { /* func_0029DB40 */
ENTER(0x29db40);
SET32(29, RW(29) + -16);
SET64(5, RD(5) & 0xff);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(6, RD(6) & 0xff);
SET64(7, RD(7) & 0xff);
SET64(31, 0x29db64); SET64(4, (s32)rd32(c, (RW(16) + 52))); JP_F_0029CE70(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(5, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029D9C8(c); return; }
}

void JP_F_0029DB80(Ctx *c) { /* func_0029DB80 */
ENTER(0x29db80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029CE88(c); return; }
}

void JP_F_0029DB98(Ctx *c) { /* func_0029DB98 */
ENTER(0x29db98);
wr32(c, (RW(4) + 56), RW(5)); return;
}

void JP_F_0029DBA0(Ctx *c) { /* func_0029DBA0 */
ENTER(0x29dba0);
SET64(2, (s32)rd32(c, (RW(4) + 56))); return;
}

void JP_F_0029DBA8(Ctx *c) { /* func_0029DBA8 */
ENTER(0x29dba8);
wr32(c, (RW(4) + 104), RW(5)); return;
}

void JP_F_0029DBB0(Ctx *c) { /* func_0029DBB0 */
ENTER(0x29dbb0);
SET64(2, (s32)rd32(c, (RW(4) + 104))); return;
}

void JP_F_0029DBB8(Ctx *c) { /* func_0029DBB8 */
ENTER(0x29dbb8);
wr32(c, (RW(4) + 108), RW(5)); return;
}

void JP_F_0029DBC0(Ctx *c) { /* func_0029DBC0 */
ENTER(0x29dbc0);
SET64(2, (s32)rd32(c, (RW(4) + 108))); return;
}

void JP_F_0029DBC8(Ctx *c) { /* func_0029DBC8 */
ENTER(0x29dbc8);
wr32(c, (RW(4) + 116), RW(5)); return;
}

void JP_F_0029DBD0(Ctx *c) { /* func_0029DBD0 */
ENTER(0x29dbd0);
SET64(2, (s32)rd32(c, (RW(4) + 116))); return;
}

void JP_F_0029DBD8(Ctx *c) { /* func_0029DBD8 */
ENTER(0x29dbd8);
SET32(2, RW(5) >> 31);
SET32(29, RW(29) + -32);
SET32(2, RW(2) + RW(5));
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RSW(2) >> 1);
SET64(16, RD(4) + RD(0));
SET32(2, RW(2) << 1);
wr64(c, (RW(29) + 8), RD(17));
SET64(5, RD(2) + RD(0));
SET32(4, RW(16) + 4);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29dc0c); SET32(17, RSW(2) >> 1); JP_F_0029DC38(c);
SET32(4, RW(16) + 20);
SET64(31, 0x29dc18); SET64(5, RD(17) + RD(0)); JP_F_0029DC38(c);
SET32(4, RW(16) + 36);
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029DC38(c); return; }
}

void JP_F_0029DC38(Ctx *c) { /* func_0029DC38 */
ENTER(0x29dc38);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(6, (s32)rd32(c, (RW(4) + 0)));
mul_s(c, 0, 3, RSW(5), RSW(3));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(2) - RW(5));
wr32(c, (RW(4) + 8), RW(2));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(4) + 0), RW(6)); return;
}

void JP_F_0029DC60(Ctx *c) { /* func_0029DC60 */
ENTER(0x29dc60);
SET32(2, RW(5) >> 31);
SET32(2, RW(2) + RW(5));
SET32(2, RSW(2) >> 1);
SET32(2, RW(2) << 1);
SET32(3, RSW(2) >> 1);
wr32(c, (RW(4) + 12), RW(2));
wr32(c, (RW(4) + 44), RW(3));
wr32(c, (RW(4) + 28), RW(3)); return;
}

void JP_F_0029DC88(Ctx *c) { /* func_0029DC88 */
ENTER(0x29dc88);
SET32(2, RW(6) >> 31);
SET32(3, RW(5) >> 31);
SET32(2, RW(2) + RW(6));
SET32(3, RW(3) + RW(5));
SET32(29, RW(29) + -32);
SET32(2, RSW(2) >> 1);
SET32(3, RSW(3) >> 1);
SET32(2, RW(2) << 1);
SET32(3, RW(3) << 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RSW(3) >> 1);
SET32(17, RSW(2) >> 1);
SET64(5, RD(2) + RD(0));
SET64(6, RD(3) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29dcd8); SET32(4, RW(16) + 4); JP_F_0029DD10(c);
SET32(4, RW(16) + 20);
SET64(5, RD(17) + RD(0));
SET64(31, 0x29dce8); SET64(6, RD(18) + RD(0)); JP_F_0029DD10(c);
SET32(4, RW(16) + 36);
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029DD10(c); return; }
}

void JP_F_0029DD10(Ctx *c) { /* func_0029DD10 */
ENTER(0x29dd10);
SET64(7, (s32)rd32(c, (RW(4) + 4)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
mul_s(c, 0, 7, RSW(5), RSW(7));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(2) - RW(5));
wr32(c, (RW(4) + 8), RW(2));
SET32(3, RW(3) + RW(7));
SET32(3, RW(3) + RW(6));
wr32(c, (RW(4) + 0), RW(3)); return;
}

void JP_F_0029DD38(Ctx *c) { /* func_0029DD38 */
ENTER(0x29dd38);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET64(4, RD(16) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29dd5c); SET64(16, RD(16) & 0xff); JP_F_0026CDE8(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x29dd68); SET64(5, RD(0) + RD(0)); JP_F_0029D9C8(c);
SET64(4, RD(17) + RD(0));
SET64(7, RD(16) + RD(0));
SET32(6, RW(16) >> 1);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029DB40(c); return; }
}

void JP_F_0029DD90(Ctx *c) { /* func_0029DD90 */
ENTER(0x29dd90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CE10(c); return; }
}

void JP_F_0029DDA8(Ctx *c) { /* func_0029DDA8 */
ENTER(0x29dda8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CD78(c); return; }
}

void JP_F_0029DDC0(Ctx *c) { /* func_0029DDC0 */
ENTER(0x29ddc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029EE28(c); return; }
}

void JP_F_0029DDD8(Ctx *c) { /* func_0029DDD8 */
ENTER(0x29ddd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029EE88(c); return; }
}

void JP_F_0029DDF0(Ctx *c) { /* func_0029DDF0 */
ENTER(0x29ddf0);
SET32(4, RW(4) + 96);
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 0), RW(5)); return;
}

void JP_F_0029DE00(Ctx *c) { /* func_0029DE00 */
ENTER(0x29de00);
SET64(2, (s32)rd32(c, (RW(4) + 96)));
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_0029DE10(Ctx *c) { /* func_0029DE10 */
ENTER(0x29de10);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029F018(c); return; }
}

void JP_F_0029DE30(Ctx *c) { /* func_0029DE30 */
ENTER(0x29de30);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029F060(c); return; }
}

void JP_F_0029DE50(Ctx *c) { /* func_0029DE50 */
ENTER(0x29de50);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029F0A0(c); return; }
}

void JP_F_0029DE70(Ctx *c) { /* func_0029DE70 */
ENTER(0x29de70);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029F0E0(c); return; }
}

void JP_F_0029DE90(Ctx *c) { /* func_0029DE90 */
ENTER(0x29de90);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029F140(c); return; }
}

void JP_F_0029DEB0(Ctx *c) { /* func_0029DEB0 */
ENTER(0x29deb0);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029F1D0(c); return; }
}

void JP_F_0029DED0(Ctx *c) { /* func_0029DED0 */
ENTER(0x29ded0);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029F238(c); return; }
}

void JP_F_0029DEF0(Ctx *c) { /* func_0029DEF0 */
ENTER(0x29def0);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029F2B8(c); return; }
}

void JP_F_0029DF10(Ctx *c) { /* func_0029DF10 */
ENTER(0x29df10);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029F338(c); return; }
}

void JP_F_0029DF30(Ctx *c) { /* func_0029DF30 */
ENTER(0x29df30);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029F3B8(c); return; }
}

void JP_F_0029DF50(Ctx *c) { /* func_0029DF50 */
ENTER(0x29df50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DF68(c); return; }
}

void JP_F_0029DF68(Ctx *c) { /* func_0029DF68 */
ENTER(0x29df68);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x410000);
SET32(16, RW(16) + 26736);
SET32(6, RW(0) + 620);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29df8c); SET64(4, RD(16) + RD(0)); JP_F_001273D0(c);
SET32(3, RW(0) + 8);
wr32(c, (RW(16) + 8), RW(3));
SET64(4, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0029E8C8(c); return; }
}

void JP_F_0029DFA8(Ctx *c) { /* func_0029DFA8 */
ENTER(0x29dfa8);
 return;
}

void JP_F_0029DFB0(Ctx *c) { /* func_0029DFB0 */
ENTER(0x29dfb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29dfc4);  JP_F_0029E008(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029DFF8; }
SET64(31, 0x29dfd8);  JP_F_0029E058(c);
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + 26736);
SET32(5, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(16) + RD(0));
SET32(4, RW(4) + 1);
wr32(c, (RW(3) + 0), RW(4));
wr32(c, (RW(16) + 0), RW(5));
L_0029DFF8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029E008(Ctx *c) { /* func_0029E008 */
ENTER(0x29e008);
SET64(2, (s64)(s32)0x410000);
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) + 26736);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RSD(5) <= 0; SET32(2, RW(2) + 12); if (t) goto L_0029E04C; }
SET64(4, RD(2) + RD(0));
L_0029E028:;
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(4) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(4) + 76); if (t) goto L_0029E050; }
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(5));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0029E028; } }
L_0029E04C:;
SET64(2, RD(0) + RD(0));
L_0029E050:;
 return;
}

void JP_F_0029E058(Ctx *c) { /* func_0029E058 */
ENTER(0x29e058);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 60), RW(0));
wr32(c, (RW(4) + 64), RW(0));
wr32(c, (RW(4) + 68), RW(0));
wr32(c, (RW(4) + 72), RW(0)); return;
}

void JP_F_0029E070(Ctx *c) { /* func_0029E070 */
ENTER(0x29e070);
{ int t = RD(4) == RD(0);  if (t) goto L_0029E090; }
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + 26736);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 0), RW(2));
L_0029E090:;
 return;
}

void JP_F_0029E098(Ctx *c) { /* func_0029E098 */
ENTER(0x29e098);
SET32(29, RW(29) + -16);
SET32(2, RW(4) + 8);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(0) + 1);
wr32(c, (RW(2) + 8), RW(6));
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + 0), RW(3));
wr32(c, (RW(2) + 4), RW(5));
SET32(29, RW(29) + 16); { JP_F_0029E0C0(c); return; }
}

void JP_F_0029E0C0(Ctx *c) { /* func_0029E0C0 */
ENTER(0x29e0c0);
SET32(29, RW(29) + -80);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
SET32(19, RW(2) + 24);
wr64(c, (RW(29) + 64), RD(20));
SET32(20, RW(2) + 40);
wr64(c, (RW(29) + 32), RD(16));
SET32(3, RW(2) + 8);
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 72), RD(31));
SET64(8, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(8) != RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0029E118; }
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 8), RW(0));
wr32(c, (RW(19) + 0), RW(2));
wr32(c, (RW(19) + 4), RW(0));
wr32(c, (RW(20) + 0), RW(2));
wr32(c, (RW(20) + 8), RW(0));
wr32(c, (RW(20) + 4), RW(0)); goto L_0029E188;
L_0029E118:;
SET64(16, (s64)(s32)0x4c0000);
SET32(18, RW(29) + 16);
SET64(2, (s32)rd32(c, (RW(3) + 8)));
SET32(16, RW(16) + -31112);
SET64(5, (s64)(s32)0x4c0000);
SET64(6, RD(16) + RD(0));
SET32(5, RW(5) + -31120);
SET64(7, RD(18) + RD(0));
wr32(c, (RW(29) + 0), RW(8));
SET32(17, RW(0) + 1);
SET64(31, 0x29e148); wr32(c, (RW(29) + 4), RW(2)); JP_F_0026B558(c);
SET64(3, (s32)rd32(c, (RW(29) + 16)));
SET64(5, (s64)(s32)0x4c0000);
SET64(2, (s32)rd32(c, (RW(29) + 20)));
SET32(5, RW(5) + -31104);
wr32(c, (RW(19) + 4), RW(3));
SET64(6, RD(16) + RD(0));
wr32(c, (RW(19) + 8), RW(2));
SET64(7, RD(18) + RD(0));
wr32(c, (RW(19) + 0), RW(17));
SET64(31, 0x29e174); SET64(4, RD(29) + RD(0)); JP_F_0026B558(c);
wr32(c, (RW(20) + 0), RW(17));
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET64(3, (s32)rd32(c, (RW(29) + 20)));
wr32(c, (RW(20) + 4), RW(2));
wr32(c, (RW(20) + 8), RW(3));
L_0029E188:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0029E1A8(Ctx *c) { /* func_0029E1A8 */
ENTER(0x29e1a8);
SET32(4, RW(4) + 8);
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 8))); goto L_0029E1C8; }
wr32(c, (RW(5) + 0), RW(0));
wr32(c, (RW(6) + 0), RW(0)); return;
L_0029E1C8:;
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 0), RW(2));
wr32(c, (RW(5) + 0), RW(3)); return;
}

void JP_F_0029E1D8(Ctx *c) { /* func_0029E1D8 */
ENTER(0x29e1d8);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 72), RD(19));
SET32(19, RW(2) + -31112);
wr64(c, (RW(29) + 56), RD(17));
wr64(c, (RW(29) + 64), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(20));
SET64(20, RD(7) + RD(0));
SET32(5, RW(3) + -31096);
SET64(17, RD(6) + RD(0));
SET64(7, RD(29) + RD(0));
SET32(8, RW(29) + 4);
SET64(6, RD(19) + RD(0));
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 88), RD(31));
SET64(31, 0x29e224); SET64(16, RD(4) + RD(0)); JP_F_0029E2F0(c);
SET64(5, (s64)(s32)0x4c0000);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s64)(s32)0x7fff0000);
SET32(6, RW(29) + 8);
SET32(5, RW(5) + -31088);
SET64(3, RD(3) | 0xffff);
{ int t = RD(2) != RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0029E250; }
wr32(c, (RW(17) + 0), RW(0));
wr32(c, (RW(20) + 0), RW(3)); goto L_0029E2CC;
L_0029E250:;
SET64(31, 0x29e258);  JP_F_00129CC8(c);
SET64(5, (s64)(s32)0x4c0000);
SET32(5, RW(5) + -31080);
SET64(4, RD(16) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(29) + RD(0));
SET64(31, 0x29e274); SET32(8, RW(29) + 4); JP_F_0029E2F0(c);
SET64(5, RD(18) + RD(0));
SET64(16, (s32)rd32(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x7fff0000);
{ int t = RD(16) != RD(0); SET64(2, RD(2) | 0xffff); if (t) goto L_0029E290; }
wr32(c, (RW(17) + 0), RW(2)); goto L_0029E2CC;
L_0029E290:;
SET64(31, 0x29e298); SET64(4, rd64(c, (RW(29) + 8))); JP_F_0011F910(c);
SET64(5, (s64)(s32)0x4c0000);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET32(5, RW(5) + -31072);
SET32(4, RW(16) + RW(2));
SET32(6, RW(29) + 16);
SET32(7, RW(29) + 24);
SET64(31, 0x29e2bc); SET32(8, RW(29) + 32); JP_F_00129CC8(c);
SET64(3, (s32)rd32(c, (RW(29) + 24)));
SET64(2, (s32)rd32(c, (RW(29) + 32)));
wr32(c, (RW(17) + 0), RW(3));
wr32(c, (RW(20) + 0), RW(2));
L_0029E2CC:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void JP_F_0029E2F0(Ctx *c) { /* func_0029E2F0 */
ENTER(0x29e2f0);
SET32(29, RW(29) + -64);
SET32(4, RW(4) + 40);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(8) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) != RD(3)) { wr32(c, (RW(16) + 0), RW(0)); goto L_0029E32C; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 8))); goto L_0029E338; }
wr32(c, (RW(16) + 0), RW(0));
L_0029E32C:;
wr32(c, (RW(17) + 0), RW(0)); goto L_0029E35C;
L_0029E338:;
SET64(4, RD(29) + RD(0));
SET32(7, RW(29) + 16);
wr32(c, (RW(29) + 0), RW(3));
SET64(31, 0x29e34c); wr32(c, (RW(29) + 4), RW(2)); JP_F_0026B558(c);
SET64(3, (s32)rd32(c, (RW(29) + 16)));
SET64(2, (s32)rd32(c, (RW(29) + 20)));
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(17) + 0), RW(2));
L_0029E35C:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0029E370(Ctx *c) { /* func_0029E370 */
ENTER(0x29e370);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029E388(c); return; }
}

void JP_F_0029E388(Ctx *c) { /* func_0029E388 */
ENTER(0x29e388);
SET64(2, (s64)(s32)0x80000000);
SET64(3, (s64)(s32)0x7fff0000);
SET64(4, RD(5) ^ RD(2));
SET64(2, RD(6) ^ RD(2));
SET64(3, RD(3) | 0xffff);
SET32(8, RW(0) + 8);
if (RD(2) == 0) SET64(6, RD(3));
SET32(2, RW(7) + 32);
if (RD(4) == 0) SET64(5, RD(3));
L_0029E3B0:;
SET32(8, RW(8) + -1);
wr32(c, (RW(2) + 0), RW(0));
{ int t = RSD(8) >= 0; SET32(2, RW(2) + -4); if (t) { POLL(); goto L_0029E3B0; } }
SET32(2, RW(7) + 36);
SET32(8, RW(0) + 7);
L_0029E3D8:;
SET32(8, RW(8) + -1);
wr32(c, (RW(2) + 0), RW(5));
{ int t = RSD(8) >= 0; SET32(2, RW(2) + 4); if (t) { POLL(); goto L_0029E3D8; } }
{ int t = RD(5) != RD(6); SET32(8, RW(0) + 17); if (t) goto L_0029E428; }
SET32(3, RW(7) + 68);
L_0029E400:;
SET32(8, RW(8) + 1);
wr32(c, (RW(3) + 0), RW(5));
SET64(2, RSD(8) < (s64)224);
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_0029E400; } }
SET32(2, RW(7) + 896); goto L_0029E46C;
L_0029E428:;
SET32(10, RW(6) - RW(5));
SET32(11, RW(0) + 207);
SET32(9, RW(7) + 68);
L_0029E438:;
div_u(c, 0, RW(10), RW(11));
SET32(3, RW(8) + -17);
SET32(8, RW(8) + 1);
if (RD(11) == RD(0)) { rt_break(c, 0x29e448); goto L_0029E44C; }
L_0029E44C:;
SET64(4, RSD(8) < (s64)224);
SET64(2, c->lo.d[0]);
mul_s(c, 0, 12, RSW(2), RSW(3));
SET32(2, RW(12) + RW(5));
wr32(c, (RW(9) + 0), RW(2));
{ int t = RD(4) != RD(0); SET32(9, RW(9) + 4); if (t) { POLL(); goto L_0029E438; } }
SET32(2, RW(7) + 896);
L_0029E46C:;
SET32(8, RW(0) + 15);
L_0029E470:;
SET32(8, RW(8) + -1);
wr32(c, (RW(2) + 0), RW(6));
{ int t = RSD(8) >= 0; SET32(2, RW(2) + 4); if (t) { POLL(); goto L_0029E470; } }
SET64(2, (s64)(s32)0x7fff0000);
SET32(7, RW(7) + 960);
SET64(2, RD(2) | 0xffff);
SET32(8, RW(0) + 15);
L_0029E4A0:;
SET32(8, RW(8) + -1);
wr32(c, (RW(7) + 0), RW(2));
{ int t = RSD(8) >= 0; SET32(7, RW(7) + 4); if (t) { POLL(); goto L_0029E4A0; } }
 return;
}

void JP_F_0029E4C8(Ctx *c) { /* func_0029E4C8 */
ENTER(0x29e4c8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
SET32(7, RW(29) + 4);
SET64(6, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x29e4ec); SET64(16, RD(4) + RD(0)); JP_F_0029E1D8(c);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x29e500); SET64(7, RD(17) + RD(0)); JP_F_0029E518(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0029E518(Ctx *c) { /* func_0029E518 */
ENTER(0x29e518);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(20) + 1024);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1024);
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x29e558); SET64(4, RD(20) + RD(0)); JP_F_001273D0(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x29e56c); SET64(7, RD(19) + RD(0)); JP_F_0029E370(c);
SET64(4, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 68)));
SET64(5, RD(20) + RD(0));
{ int t = RD(2) != RD(0); SET32(3, RW(0) + 16); if (t) goto L_0029E5E0; }
SET64(2, (s32)rd32(c, (RW(18) + 4)));
{ int t = RD(2) != RD(3); SET64(4, RD(18) + RD(0)); if (t) goto L_0029E5B8; }
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(6, RD(20) + RD(0));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_0029E610(c); return; }
L_0029E5B8:;
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(6, RD(20) + RD(0));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_0029E6A0(c); return; }
L_0029E5E0:;
c->f[13].u = rd32(c, (RW(18) + 64));
{ u32 t = RW(2); SET64(31, 0x29e5ec); c->f[12].u = rd32(c, (RW(18) + 60)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0029E610(Ctx *c) { /* func_0029E610 */
ENTER(0x29e610);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29e62c); SET64(17, RD(5) + RD(0)); JP_F_0029E8D8(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(6, (s64)(s32)0x4c0000); goto L_0029E680; }
SET64(6, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(4, RD(0) + RD(0));
L_0029E648:;
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET32(5, RW(5) + 4);
SET32(4, RW(4) + 1);
SET32(2, RW(2) >> 15);
SET64(3, RSD(4) < (s64)256);
wr16(c, (RW(6) + 0), (u16)RW(2));
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 2); if (t) { POLL(); goto L_0029E648; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
L_0029E680:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(6) + -31056);
SET64(5, RD(0) + RD(0));
SET32(29, RW(29) + 32); { JP_F_0029D878(c); return; }
}

void JP_F_0029E6A0(Ctx *c) { /* func_0029E6A0 */
ENTER(0x29e6a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(29) + 24), c->f[20].u);
SET64(31, 0x29e6c4); c->f[20].u = rd32(c, (RW(4) + 64)); JP_F_0029E8D8(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(6, RD(0) + RD(0)); if (t) goto L_0029E708; }
SET64(7, (s64)(s32)0x7fff0000);
SET64(7, RD(7) | 0xff80);
L_0029E6D8:;
SET32(4, RW(6) << 2);
SET32(6, RW(6) + 1);
SET32(3, RW(4) + RW(17));
SET32(4, RW(4) + RW(16));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(6) < (s64)256);
SET64(2, RD(2) & RD(7));
SET32(2, RW(2) << 1);
{ int t = RD(5) != RD(0); wr32(c, (RW(4) + 0), RW(2)); if (t) { POLL(); goto L_0029E6D8; } }
SET64(16, rd64(c, (RW(29) + 0))); goto L_0029E7D0;
L_0029E708:;
SET64(1, (s64)(s32)0x4eff0000);
SET64(1, RD(1) | 0xffff);
c->f[3].u = RW(1);
SET64(1, (s64)(s32)0x4b7f0000);
SET64(1, RD(1) | 0xffff);
c->f[2].u = RW(1);
SET32(8, RW(0) + 1);
SET64(9, (s64)(s32)0x80000000);
L_0029E728:;
SET32(2, RW(6) << 2);
SET32(6, RW(6) + 1);
SET32(3, RW(2) + RW(17));
SET64(7, RSD(6) < (s64)256);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) != RD(0); SET32(5, RW(2) + RW(16)); if (t) goto L_0029E74C; }
wr32(c, (RW(3) + 0), RW(8));
SET64(4, RD(8) + RD(0));
L_0029E74C:;
{ int t = RSD(4) < 0; SET32(3, RW(4) >> 1); if (t) goto L_0029E768; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(20) * F(0)); goto L_0029E780;
L_0029E768:;
SET64(2, RD(4) & 0x1);
SET64(2, RD(2) | RD(3));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
c->f[0].f = fpu(F(20) * F(0));
L_0029E780:;
SET64(1, (s64)(s32)0x4f000000);
c->f[1].u = RW(1);
c->f[0].f = fpu_div(F(0), F(3));
c->f[0].f = fpu_div(F(2), F(0));
c->fcc = F(1) <= F(0);
c->f[4].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[4].u);
{ int t = !c->fcc;  if (t) goto L_0029E7C4; }
c->f[0].f = fpu(F(0) - F(1));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[1].u);
SET64(2, RD(2) | RD(9));
L_0029E7C4:;
{ int t = RD(7) != RD(0); wr32(c, (RW(5) + 0), RW(2)); if (t) { POLL(); goto L_0029E728; } }
SET64(16, rd64(c, (RW(29) + 0)));
L_0029E7D0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
c->f[20].u = rd32(c, (RW(29) + 24));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029E7E8(Ctx *c) { /* func_0029E7E8 */
ENTER(0x29e7e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 24), c->f[21].u);
c->f[21].u = c->f[12].u;
wr32(c, (RW(29) + 16), c->f[20].u);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29e80c); c->f[20].u = c->f[13].u; JP_F_0029E850(c);
SET64(6, (s64)(s32)0x4c0000);
SET32(3, RW(0) + 1);
SET64(4, RD(0) + RD(0));
SET32(6, RW(6) + -30992);
{ int t = RD(2) == RD(3); SET64(5, RD(0) + RD(0)); if (t) goto L_0029E82C; }
SET64(31, 0x29e82c);  JP_F_0029D878(c);
L_0029E82C:;
wr32(c, (RW(16) + 64), c->f[20].u);
wr32(c, (RW(16) + 60), c->f[21].u);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
c->f[21].u = rd32(c, (RW(29) + 24));
c->f[20].u = rd32(c, (RW(29) + 16));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029E850(Ctx *c) { /* func_0029E850 */
ENTER(0x29e850);
c->fcc = F(13) <= F(12);
SET32(2, RW(0) + 1);
{ int t = !c->fcc; c->f[1].f = fpu(F(13) - F(12)); if (t) goto L_0029E864; }
SET64(2, RD(0) + RD(0));
L_0029E864:;
SET64(1, (s64)(s32)0xc1600000);
c->f[0].u = RW(1);
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(2, RD(0) + RD(0)); goto L_0029E878; }
L_0029E878:;
 return;
}

void JP_F_0029E880(Ctx *c) { /* func_0029E880 */
ENTER(0x29e880);
c->f[0].u = rd32(c, (RW(4) + 60));
wr32(c, (RW(5) + 0), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 64));
wr32(c, (RW(6) + 0), c->f[1].u); return;
}

void JP_F_0029E898(Ctx *c) { /* func_0029E898 */
ENTER(0x29e898);
c->f[2].u = RW(0);
SET32(2, RW(0) + 1);
c->f[0].u = rd32(c, (RW(4) + 60));
c->fcc = F(0) == F(2);
{ int t = !c->fcc; c->f[1].u = rd32(c, (RW(4) + 64)); if (t) goto L_0029E8BC; }
c->fcc = F(1) == F(2);
if (c->fcc) { SET64(2, RD(0) + RD(0)); goto L_0029E8BC; }
L_0029E8BC:;
 return;
}

void JP_F_0029E8C8(Ctx *c) { /* func_0029E8C8 */
ENTER(0x29e8c8);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 26740), RW(4)); return;
}

void JP_F_0029E8D8(Ctx *c) { /* func_0029E8D8 */
ENTER(0x29e8d8);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + 26740))); return;
}

void JP_F_0029E8E8(Ctx *c) { /* func_0029E8E8 */
ENTER(0x29e8e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29e910); SET64(16, RD(4) + RD(0)); JP_F_0029EE08(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 16);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029E9D8(c); return; }
}

void JP_F_0029E938(Ctx *c) { /* func_0029E938 */
ENTER(0x29e938);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 24);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29e960); SET64(16, RD(4) + RD(0)); JP_F_0029EE08(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 24);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029E9D8(c); return; }
}

void JP_F_0029E988(Ctx *c) { /* func_0029E988 */
ENTER(0x29e988);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29e9b0); SET64(16, RD(4) + RD(0)); JP_F_0029EE08(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 32);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029E9D8(c); return; }
}

void JP_F_0029E9D8(Ctx *c) { /* func_0029E9D8 */
ENTER(0x29e9d8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0029EA1C; }
SET64(5, (s64)(s32)0x4c0000);
SET64(31, 0x29ea18); SET32(5, RW(5) + -30944); JP_F_0029D4C0(c);
wr32(c, (RW(16) + 4), RW(2));
L_0029EA1C:;
SET64(31, 0x29ea24); SET64(4, (s32)rd32(c, (RW(16) + 40))); JP_F_0029E898(c);
SET32(7, RW(0) + 2);
SET64(6, (s64)(s32)0x4c0000);
SET32(3, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
{ int t = RD(2) == RD(3); SET32(6, RW(6) + -30936); if (t) goto L_0029EA60; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0029D878(c); return; }
L_0029EA60:;
SET64(3, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(3) == RD(7); SET64(2, RD(3) < (u64)(s64)3); if (t) goto L_0029EAB0; }
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029EAE0; }
SET32(2, RW(0) + 3);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029EAE4; }
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(7, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0029EB08(c); return; }
L_0029EAB0:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(7, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0029EC98(c); return; }
L_0029EAE0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029EAE4:;
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, (s64)(s32)0x4c0000);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET32(6, RW(6) + -30888);
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0029D878(c); return; }
}

void JP_F_0029EB08(Ctx *c) { /* func_0029EB08 */
ENTER(0x29eb08);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 72), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 80), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 88), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 96), RD(20));
SET32(16, RW(18) + 4);
wr64(c, (RW(29) + 104), RD(21));
SET32(10, RW(18) + 20);
wr64(c, (RW(29) + 112), RD(22));
SET64(22, RD(7) + RD(0));
wr64(c, (RW(29) + 120), RD(31));
SET32(11, RW(18) + 36);
SET64(4, RD(19) + RD(0));
wr32(c, (RW(29) + 24), RW(0));
SET64(5, (s32)rd32(c, (RW(16) + 8)));
SET64(12, (s32)rd32(c, (RW(16) + 4)));
SET32(2, RW(5) >> 31);
SET64(8, (s32)rd32(c, (RW(10) + 0)));
mul_s(c, 0, 3, RSW(12), RSW(5));
SET32(5, RW(5) + RW(2));
SET64(9, (s32)rd32(c, (RW(11) + 0)));
SET64(21, RD(12) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 0)));
SET32(20, RSW(5) >> 1);
SET64(13, (s32)rd32(c, (RW(10) + 4)));
SET32(2, RW(3) >> 31);
SET64(7, (s32)rd32(c, (RW(17) + 12)));
SET32(3, RW(3) + RW(2));
SET64(10, (s32)rd32(c, (RW(11) + 4)));
SET32(2, RW(3) >> 31);
SET32(3, RSW(3) >> 1);
SET32(2, RW(3) + RW(2));
SET64(11, (s32)rd32(c, (RW(17) + 16)));
SET32(2, RSW(2) >> 1);
SET32(6, RW(6) + RW(3));
SET32(9, RW(9) + RW(2));
SET32(8, RW(8) + RW(2));
if (RD(7) != 0) SET64(21, RD(7));
wr32(c, (RW(29) + 0), RW(6));
wr32(c, (RW(29) + 4), RW(8));
wr32(c, (RW(29) + 8), RW(9));
wr32(c, (RW(29) + 16), RW(13));
wr32(c, (RW(29) + 20), RW(10));
{ int t = RD(11) == RD(0); wr32(c, (RW(29) + 12), RW(12)); if (t) goto L_0029EBD0; }
SET64(20, RD(11) + RD(0));
L_0029EBD0:;
SET64(31, 0x29ebd8);  JP_F_0029EDA8(c);
SET32(10, RW(0) + 32);
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET32(9, RW(0) + 16);
SET64(8, (s32)rd32(c, (RW(16) + 4)));
SET64(5, RD(18) + RD(0));
SET32(7, RW(3) >> 31);
SET32(6, RW(0) + 11);
SET32(3, RW(3) + RW(7));
SET64(4, RD(17) + RD(0));
SET32(3, RSW(3) >> 1);
wr32(c, (RW(29) + 32), RW(2));
wr32(c, (RW(29) + 48), RW(8));
wr32(c, (RW(29) + 52), RW(3));
wr32(c, (RW(29) + 36), RW(22));
wr32(c, (RW(29) + 40), RW(21));
{ int t = RD(19) == RD(9); wr32(c, (RW(29) + 44), RW(20)); if (t) goto L_0029EC30; }
{ int t = RD(19) == RD(10); SET64(16, rd64(c, (RW(29) + 64))); if (t) goto L_0029EC50; }
SET64(17, rd64(c, (RW(29) + 72))); goto L_0029EC74;
L_0029EC30:;
SET64(31, 0x29ec38);  JP_F_0029D040(c);
SET64(6, (s32)rd32(c, (RW(17) + 64)));
SET64(4, RD(29) + RD(0));
SET64(31, 0x29ec48); SET32(5, RW(29) + 32); JP_F_0026CE70(c);
SET64(16, rd64(c, (RW(29) + 64))); goto L_0029EC70;
L_0029EC50:;
SET32(6, RW(0) + 13);
SET64(31, 0x29ec5c); SET64(4, RD(17) + RD(0)); JP_F_0029D040(c);
SET64(6, (s32)rd32(c, (RW(17) + 64)));
SET64(4, RD(29) + RD(0));
SET64(31, 0x29ec6c); SET32(5, RW(29) + 32); JP_F_0026CE78(c);
SET64(16, rd64(c, (RW(29) + 64)));
L_0029EC70:;
SET64(17, rd64(c, (RW(29) + 72)));
L_0029EC74:;
SET64(18, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 88)));
SET64(20, rd64(c, (RW(29) + 96)));
SET64(21, rd64(c, (RW(29) + 104)));
SET64(22, rd64(c, (RW(29) + 112)));
SET64(31, rd64(c, (RW(29) + 120)));
SET32(29, RW(29) + 128); return;
}

void JP_F_0029EC98(Ctx *c) { /* func_0029EC98 */
ENTER(0x29ec98);
SET32(29, RW(29) + -128);
SET32(10, RW(0) + 64);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 72), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 80), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 88), RD(19));
SET64(4, RD(17) + RD(0));
wr64(c, (RW(29) + 96), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 104), RD(21));
wr64(c, (RW(29) + 112), RD(22));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 120), RD(31));
SET32(16, RW(22) + 4);
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(9, (s32)rd32(c, (RW(16) + 4)));
SET64(8, (s32)rd32(c, (RW(18) + 12)));
SET32(2, RW(3) >> 31);
SET64(6, (s32)rd32(c, (RW(18) + 16)));
SET32(2, RW(3) + RW(2));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(21, RD(9) + RD(0));
if (RD(8) != 0) SET64(21, RD(8));
wr32(c, (RW(29) + 12), RW(10));
wr32(c, (RW(29) + 0), RW(5));
SET32(19, RSW(2) >> 1);
wr32(c, (RW(29) + 4), RW(9));
{ int t = RD(6) == RD(0); wr32(c, (RW(29) + 8), RW(3)); if (t) goto L_0029ED18; }
SET64(19, RD(6) + RD(0));
L_0029ED18:;
SET64(31, 0x29ed20);  JP_F_0029EDA8(c);
SET32(6, RW(0) + 32);
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET32(5, RW(0) + 16);
wr32(c, (RW(29) + 32), RW(2));
SET32(2, RW(3) >> 31);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET32(3, RW(3) + RW(2));
wr32(c, (RW(29) + 36), RW(20));
SET32(3, RSW(3) >> 1);
wr32(c, (RW(29) + 48), RW(4));
wr32(c, (RW(29) + 40), RW(21));
wr32(c, (RW(29) + 44), RW(19));
{ int t = RD(17) == RD(5); wr32(c, (RW(29) + 52), RW(3)); if (t) goto L_0029ED80; }
if (RD(17) != RD(6)) { SET64(16, rd64(c, (RW(29) + 64))); goto L_0029ED84; }
SET64(5, RD(22) + RD(0));
SET32(6, RW(0) + 13);
SET64(31, 0x29ed70); SET64(4, RD(18) + RD(0)); JP_F_0029D040(c);
SET64(6, (s32)rd32(c, (RW(18) + 64)));
SET64(4, RD(29) + RD(0));
SET64(31, 0x29ed80); SET32(5, RW(29) + 32); JP_F_0026CE88(c);
L_0029ED80:;
SET64(16, rd64(c, (RW(29) + 64)));
L_0029ED84:;
SET64(17, rd64(c, (RW(29) + 72)));
SET64(18, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 88)));
SET64(20, rd64(c, (RW(29) + 96)));
SET64(21, rd64(c, (RW(29) + 104)));
SET64(22, rd64(c, (RW(29) + 112)));
SET64(31, rd64(c, (RW(29) + 120)));
SET32(29, RW(29) + 128); return;
}

void JP_F_0029EDA8(Ctx *c) { /* func_0029EDA8 */
ENTER(0x29eda8);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 16);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(4) < (u64)(s64)17);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 1); if (t) goto L_0029EDF8; }
{ int t = RD(5) != RD(0); SET64(6, (s64)(s32)0x4c0000); if (t) goto L_0029EDE4; }
SET32(2, RW(0) + 24);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 2); if (t) goto L_0029EDF8; }
SET32(2, RW(0) + 32);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 3); if (t) goto L_0029EDF8; }
SET64(6, (s64)(s32)0x4c0000);
L_0029EDE4:;
SET64(4, RD(0) + RD(0));
SET32(6, RW(6) + -30832);
SET64(31, 0x29edf4); SET64(5, RD(0) + RD(0)); JP_F_0029D878(c);
SET64(3, RD(0) + RD(0));
L_0029EDF8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029EE08(Ctx *c) { /* func_0029EE08 */
ENTER(0x29ee08);
SET64(2, (s32)rd32(c, (RW(4) + 40)));
wr32(c, (RW(2) + 4), RW(5)); return;
}

void JP_F_0029EE18(Ctx *c) { /* func_0029EE18 */
ENTER(0x29ee18);
SET64(3, (s32)rd32(c, (RW(4) + 40)));
SET64(2, (s32)rd32(c, (RW(3) + 4))); return;
}

void JP_F_0029EE28(Ctx *c) { /* func_0029EE28 */
ENTER(0x29ee28);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 27360);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RSD(3) > 0; wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029EE64; }
SET64(31, 0x29ee4c);  JP_F_0029EE78(c);
SET64(3, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(3) + 680);
wr32(c, (RW(3) + 0), RW(2));
SET32(4, RW(4) + 1);
wr32(c, (RW(16) + 0), RW(4));
L_0029EE64:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029EE78(Ctx *c) { /* func_0029EE78 */
ENTER(0x29ee78);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -30784); return;
}

void JP_F_0029EE88(Ctx *c) { /* func_0029EE88 */
ENTER(0x29ee88);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 27360);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RSD(3) <= 0; SET32(4, RW(3) + -1); if (t) goto L_0029EEA0; }
wr32(c, (RW(2) + 0), RW(4));
L_0029EEA0:;
 return;
}

void JP_F_0029EEA8(Ctx *c) { /* func_0029EEA8 */
ENTER(0x29eea8);
SET32(29, RW(29) + -48);
SET64(5, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
SET32(5, RW(5) + -30728);
SET32(6, RW(0) + 8);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x29eed0); SET64(16, RD(4) + RD(0)); JP_F_0012A978(c);
SET64(5, (s64)(s32)0x4c0000);
SET64(4, RD(29) + RD(0));
SET32(6, RW(0) + 19);
SET64(31, 0x29eee4); SET32(5, RW(5) + -30712); JP_F_00129C30(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(31, 0x29eef4); SET32(16, RW(16) + 16); JP_F_00129FB8(c);
SET64(5, (s64)(s32)0x4c0000);
SET32(6, RW(0) + 2);
SET64(4, RD(16) + RD(0));
SET64(31, 0x29ef08); SET32(5, RW(5) + -30704); JP_F_0012A978(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x29ef14); SET64(5, RD(17) + RD(0)); JP_F_0029EF38(c);
SET64(5, (s64)(s32)0x4c0000);
SET64(4, RD(16) + RD(0));
SET64(31, 0x29ef24); SET32(5, RW(5) + -30696); JP_F_00129FB8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0029EF38(Ctx *c) { /* func_0029EF38 */
ENTER(0x29ef38);
SET32(29, RW(29) + -96);
SET64(3, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET32(17, RW(29) + 16);
wr64(c, (RW(29) + 64), RD(18));
SET32(18, RW(29) + 32);
wr64(c, (RW(29) + 72), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(31));
SET64(5, (s64)(s32)0x4c0000);
SET32(10, RW(3) + -30672);
ldl(c, 7, (RW(10) + 7));
ldr(c, 7, (RW(10) + 0));
sdl(c, 7, (RW(29) + 7));
sdr(c, 7, (RW(29) + 0));
SET64(6, (s64)(s32)0x4c0000);
SET32(9, RW(5) + -30648);
ldl(c, 3, (RW(9) + 7));
ldr(c, 3, (RW(9) + 0));
sdl(c, 3, (RW(17) + 7));
sdr(c, 3, (RW(17) + 0));
SET32(4, RW(16) + 2);
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET32(7, RW(6) + -30624);
ldl(c, 10, (RW(7) + 7));
ldr(c, 10, (RW(7) + 0));
sdl(c, 10, (RW(18) + 7));
sdr(c, 10, (RW(18) + 0));
SET32(6, RW(0) + 1);
SET32(2, RW(2) << 2);
SET32(3, RW(29) + RW(2));
SET64(31, 0x29efc4); SET64(5, (s32)rd32(c, (RW(3) + 0))); JP_F_0012A978(c);
SET64(3, (s32)rd32(c, (RW(19) + 4)));
SET32(4, RW(16) + 3);
SET32(6, RW(0) + 1);
SET32(3, RW(3) << 2);
SET32(17, RW(17) + RW(3));
SET64(31, 0x29efe0); SET64(5, (s32)rd32(c, (RW(17) + 0))); JP_F_0012A978(c);
SET64(3, (s32)rd32(c, (RW(19) + 8)));
SET32(4, RW(16) + 4);
SET32(6, RW(0) + 1);
SET32(3, RW(3) << 2);
SET32(18, RW(18) + RW(3));
SET64(31, 0x29effc); SET64(5, (s32)rd32(c, (RW(18) + 0))); JP_F_0012A978(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void JP_F_0029F018(Ctx *c) { /* func_0029F018 */
ENTER(0x29f018);
SET32(29, RW(29) + -32);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0029F030; }
{ int t = RSD(5) >= 0;  if (t) goto L_0029F038; }
L_0029F030:;
SET64(2, RD(0) + RD(0)); goto L_0029F050;
L_0029F038:;
SET64(3, (s8)rd8(c, (RW(2) + 16)));
SET64(5, (s8)rd8(c, (RW(2) + 17)));
wr8(c, (RW(29) + 0), (u8)RW(3));
wr8(c, (RW(29) + 1), (u8)RW(5));
SET64(31, 0x29f050); SET64(4, RD(29) + RD(0)); JP_F_00123EE0(c);
L_0029F050:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029F060(Ctx *c) { /* func_0029F060 */
ENTER(0x29f060);
SET32(29, RW(29) + -16);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0029F074; }
{ int t = RSD(5) >= 0; SET64(5, (s64)(s32)0x4c0000); if (t) goto L_0029F080; }
L_0029F074:;
SET64(2, RD(0) + RD(0)); goto L_0029F094;
L_0029F080:;
SET32(4, RW(4) + 18);
SET32(5, RW(5) + -30680);
SET64(31, 0x29f090); SET32(6, RW(0) + 1); JP_F_0012A7C0(c);
SET64(2, RD(2) < (u64)(s64)1);
L_0029F094:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029F0A0(Ctx *c) { /* func_0029F0A0 */
ENTER(0x29f0a0);
SET32(29, RW(29) + -16);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0029F0B4; }
{ int t = RSD(5) >= 0; SET64(5, (s64)(s32)0x4c0000); if (t) goto L_0029F0C0; }
L_0029F0B4:;
SET64(2, RD(0) + RD(0)); goto L_0029F0D4;
L_0029F0C0:;
SET32(4, RW(4) + 19);
SET32(5, RW(5) + -30656);
SET64(31, 0x29f0d0); SET32(6, RW(0) + 1); JP_F_0012A7C0(c);
SET64(2, RD(2) < (u64)(s64)1);
L_0029F0D4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029F0E0(Ctx *c) { /* func_0029F0E0 */
ENTER(0x29f0e0);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029F100; }
{ int t = RSD(2) >= 0;  if (t) goto L_0029F108; }
L_0029F100:;
SET64(2, RD(0) + RD(0)); goto L_0029F130;
L_0029F108:;
SET64(31, 0x29f110);  JP_F_0029F018(c);
SET64(5, (s64)(s32)0x4c0000);
SET32(4, RW(16) + 20);
SET32(5, RW(5) + -30632);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 1); if (t) goto L_0029F130; }
SET64(31, 0x29f12c);  JP_F_0012A7C0(c);
SET64(2, RD(2) < (u64)(s64)1);
L_0029F130:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029F140(Ctx *c) { /* func_0029F140 */
ENTER(0x29f140);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029F160; }
{ int t = RSD(2) >= 0;  if (t) goto L_0029F168; }
L_0029F160:;
SET64(2, RD(0) + RD(0)); goto L_0029F1C0;
L_0029F168:;
SET64(31, 0x29f170);  JP_F_0029F018(c);
SET64(5, (s64)(s32)0x4c0000);
SET64(3, RD(2) < (u64)(s64)2);
SET64(2, RD(0) + RD(0));
SET32(5, RW(5) + -30640);
{ int t = RD(3) != RD(0); SET32(6, RW(0) + 1); if (t) goto L_0029F1C0; }
SET32(16, RW(16) + 21);
SET64(31, 0x29f194); SET64(4, RD(16) + RD(0)); JP_F_0012A7C0(c);
SET64(5, (s64)(s32)0x4c0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -30632);
SET32(6, RW(0) + 1);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 1); if (t) goto L_0029F1BC; }
SET64(31, 0x29f1b4);  JP_F_0012A7C0(c);
SET32(3, RW(0) + 2);
if (RD(2) != 0) SET64(3, RD(0));
L_0029F1BC:;
SET64(2, RD(3) + RD(0));
L_0029F1C0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029F1D0(Ctx *c) { /* func_0029F1D0 */
ENTER(0x29f1d0);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029F1F0; }
{ int t = RSD(2) >= 0;  if (t) goto L_0029F1F8; }
L_0029F1F0:;
SET64(2, RD(0) + RD(0)); goto L_0029F228;
L_0029F1F8:;
SET64(31, 0x29f200);  JP_F_0029F018(c);
SET64(5, (s64)(s32)0x4c0000);
SET64(3, RD(2) < (u64)(s64)2);
SET64(2, RD(0) + RD(0));
SET32(4, RW(16) + 22);
SET32(5, RW(5) + -30688);
{ int t = RD(3) != RD(0); SET32(6, RW(0) + 1); if (t) goto L_0029F228; }
SET64(31, 0x29f224);  JP_F_0012A7C0(c);
SET64(2, RD(0) < RD(2));
L_0029F228:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029F238(Ctx *c) { /* func_0029F238 */
ENTER(0x29f238);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0029F25C; }
{ int t = RSD(17) >= 0;  if (t) goto L_0029F268; }
L_0029F25C:;
SET64(2, RD(0) + RD(0)); goto L_0029F2A0;
L_0029F268:;
SET64(31, 0x29f270);  JP_F_0029F018(c);
SET32(6, RW(0) + 23);
SET64(3, RD(2) < (u64)(s64)2);
SET64(2, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(3) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029F2A0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029F438(c); return; }
L_0029F2A0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029F2B8(Ctx *c) { /* func_0029F2B8 */
ENTER(0x29f2b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0029F2DC; }
{ int t = RSD(17) >= 0;  if (t) goto L_0029F2E8; }
L_0029F2DC:;
SET64(2, RD(0) + RD(0)); goto L_0029F320;
L_0029F2E8:;
SET64(31, 0x29f2f0);  JP_F_0029F018(c);
SET32(6, RW(0) + 26);
SET64(3, RD(2) < (u64)(s64)2);
SET64(2, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(3) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029F320; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029F438(c); return; }
L_0029F320:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029F338(Ctx *c) { /* func_0029F338 */
ENTER(0x29f338);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0029F35C; }
{ int t = RSD(17) >= 0;  if (t) goto L_0029F368; }
L_0029F35C:;
SET64(2, RD(0) + RD(0)); goto L_0029F3A0;
L_0029F368:;
SET64(31, 0x29f370);  JP_F_0029F018(c);
SET32(6, RW(0) + 29);
SET64(3, RD(2) < (u64)(s64)2);
SET64(2, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(3) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029F3A0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029F438(c); return; }
L_0029F3A0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029F3B8(Ctx *c) { /* func_0029F3B8 */
ENTER(0x29f3b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0029F3DC; }
{ int t = RSD(17) >= 0;  if (t) goto L_0029F3E8; }
L_0029F3DC:;
SET64(2, RD(0) + RD(0)); goto L_0029F420;
L_0029F3E8:;
SET64(31, 0x29f3f0);  JP_F_0029F018(c);
SET32(6, RW(0) + 32);
SET64(3, RD(2) < (u64)(s64)2);
SET64(2, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(3) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029F420; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029F438(c); return; }
L_0029F420:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029F438(Ctx *c) { /* func_0029F438 */
ENTER(0x29f438);
SET32(29, RW(29) + -48);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_0029F44C; }
if (RSD(5) >= 0) { SET32(2, RW(4) + RW(6)); goto L_0029F458; }
L_0029F44C:;
SET64(2, RD(0) + RD(0)); goto L_0029F488;
L_0029F458:;
SET64(4, RD(29) + RD(0));
SET64(3, (s8)rd8(c, (RW(2) + 0)));
SET64(7, (s8)rd8(c, (RW(2) + 1)));
SET64(8, (s8)rd8(c, (RW(2) + 2)));
wr8(c, (RW(29) + 0), (u8)RW(3));
wr8(c, (RW(29) + 1), (u8)RW(7));
SET32(5, RW(29) + 16);
SET32(6, RW(0) + 16);
SET64(31, 0x29f480); wr8(c, (RW(29) + 2), (u8)RW(8)); JP_F_0029F498(c);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
L_0029F488:;
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0029F498(Ctx *c) { /* func_0029F498 */
ENTER(0x29f498);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0012C010(c); return; }
}

void JP_F_0029F4B0(Ctx *c) { /* func_0029F4B0 */
ENTER(0x29f4b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(31));
wr32(c, (RW(18) + 0), RW(0));
{ int t = RD(16) == RD(0); wr32(c, (RW(19) + 0), RW(0)); if (t) goto L_0029F554; }
if (RSD(5) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029F558; }
if (RSD(5) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029F558; }
SET64(17, RD(5) + RD(0));
SET64(21, (s64)(s32)0x4c0000);
SET64(20, (s64)(s32)0x4c0000);
L_0029F508:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(21) + -30616);
SET64(31, 0x29f518); SET32(6, RW(0) + 1); JP_F_00127180(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(20) + -30728);
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 8); if (t) goto L_0029F548; }
SET64(31, 0x29f530);  JP_F_00127180(c);
if (RD(2) != RD(0)) { SET32(17, RW(17) + -1); goto L_0029F54C; }
wr32(c, (RW(19) + 0), RW(16));
SET64(31, 0x29f544); SET64(4, RD(16) + RD(0)); JP_F_0029F578(c);
wr32(c, (RW(18) + 0), RW(2));
L_0029F548:;
SET32(17, RW(17) + -1);
L_0029F54C:;
{ int t = RD(17) != RD(0); SET32(16, RW(16) + 1); if (t) { POLL(); goto L_0029F508; } }
L_0029F554:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029F558:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0029F578(Ctx *c) { /* func_0029F578 */
ENTER(0x29f578);
SET32(2, RW(0) + 35);
if (RD(4) == 0) SET64(2, RD(0)); return;
}

void JP_F_0029F588(Ctx *c) { /* func_0029F588 */
ENTER(0x29f588);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29f5a8); SET32(4, RW(2) + -30576); JP_F_0025CF90(c);
SET64(4, (s64)(s32)0x410000);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(4) + 27376);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) == 0) SET64(16, RD(5));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RSD(2) < (s64)2);
{ int t = RD(2) != RD(0); SET64(3, (s64)(s32)0x410000); if (t) goto L_0029F5E8; }
SET64(2, (s32)rd32(c, (RW(3) + 27380)));
{ int t = RD(2) == RD(16); SET32(2, RW(0) + -1); if (t) goto L_0029F6CC; }
 goto L_0029F5EC;
L_0029F5E8:;
SET32(2, RW(0) + -1);
L_0029F5EC:;
{ int t = RD(16) != RD(2); wr32(c, (RW(3) + 27380), RW(16)); if (t) goto L_0029F608; }
SET64(31, 0x29f5fc); SET32(4, RW(0) + 1); JP_F_0029FA20(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0029F6D0;
L_0029F608:;
SET64(4, (s64)(s32)0x4c0000);
SET64(5, RD(29) + RD(0));
SET64(31, 0x29f618); SET32(4, RW(4) + -30568); JP_F_0025CF90(c);
SET64(4, (s64)(s32)0x80000);
SET64(4, RD(4) | 0xca00);
SET64(3, rd32(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x0);
SET64(31, 0x29f630); if (RD(2) == 0) SET64(4, RD(3)); JP_F_0029FA20(c);
SET64(4, (s64)(s32)0x410000);
SET32(5, RW(16) << 2);
SET32(7, RW(0) + 130);
SET64(6, (s64)(s32)0x4c0000);
SET32(6, RW(6) + RW(5));
SET64(6, (s32)rd32(c, (RW(6) + -30608)));
SET64(2, (s32)rd32(c, (RW(6) + 0)));
SET64(3, RD(2) & 0xc7);
{ int t = RD(3) == RD(7); wr32(c, (RW(4) + 27384), RW(2)); if (t) goto L_0029F678; }
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + RW(5));
SET64(2, (s32)rd32(c, (RW(2) + -30592)));
SET64(3, (s64)(s32)0x4c0000);
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(6) + 0), RW(7));
SET32(2, RW(3) + -30592); goto L_0029F680;
L_0029F678:;
SET64(3, (s64)(s32)0x4c0000);
SET32(2, RW(3) + -30592);
L_0029F680:;
SET64(4, (s64)(s32)0x540000);
SET32(2, RW(5) + RW(2));
SET64(5, (s64)(s32)0x540000);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(4) + 688);
SET32(5, RW(5) + 704);
SET64(7, (s64)(s32)0x540000);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(6, (s64)(s32)0x540000);
SET32(7, RW(7) + 720);
SET32(6, RW(6) + 724);
wr16(c, (RW(4) + 8), (u16)RW(2));
wr64(c, (RW(4) + 0), RD(0));
SET64(2, rd64(c, (RW(4) + 0)));
wr64(c, (RW(5) + 0), RD(2));
SET64(3, rd64(c, (RW(4) + 8)));
wr64(c, (RW(5) + 8), RD(3));
wr32(c, (RW(7) + 0), RW(4));
wr32(c, (RW(6) + 0), RW(0));
L_0029F6CC:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0029F6D0:;
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0029F6E0(Ctx *c) { /* func_0029F6E0 */
ENTER(0x29f6e0);
SET64(3, (s64)(s32)0x410000);
SET32(4, RW(3) + 27376);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(7, RD(4) + RD(0));
SET32(2, RW(2) + -1);
wr32(c, (RW(4) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x410000); if (t) goto L_0029F73C; }
SET32(3, RW(0) + -1);
SET64(5, (s32)rd32(c, (RW(2) + 27380)));
{ int t = RD(5) == RD(3); SET64(2, (s64)(s32)0x410000); if (t) goto L_0029F73C; }
SET32(4, RW(0) + 130);
SET64(3, (s32)rd32(c, (RW(2) + 27384)));
SET64(6, RD(3) ^ 0xc00);
SET64(3, RD(3) & 0xc7);
{ int t = RD(3) == RD(4); SET32(2, RW(5) << 2); if (t) goto L_0029F73C; }
SET64(3, (s64)(s32)0x4c0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + -30608)));
wr32(c, (RW(3) + 0), RW(6));
L_0029F73C:;
SET64(2, (s32)rd32(c, (RW(7) + 0)));
if (RSD(2) < 0) { wr32(c, (RW(7) + 0), RW(0)); goto L_0029F748; }
L_0029F748:;
 return;
}

void JP_F_0029F750(Ctx *c) { /* func_0029F750 */
ENTER(0x29f750);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 27376);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RSD(3) <= 0; SET32(3, RW(0) + -1); if (t) goto L_0029F774; }
SET64(2, (s64)(s32)0x410000);
SET64(6, (s32)rd32(c, (RW(2) + 27380)));
{ int t = RD(6) != RD(3); SET64(9, (s64)(s32)0x540000); if (t) goto L_0029F780; }
L_0029F774:;
SET64(2, RD(0) + RD(0)); return;
L_0029F780:;
SET32(5, RW(0) + 1);
SET32(3, RW(9) + 724);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) != RD(5); SET32(3, RW(6) << 2); if (t) goto L_0029F818; }
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
SET32(7, RW(2) + 688);
SET64(2, (s64)(s32)0x540000);
SET64(5, rd64(c, (RW(7) + 0)));
SET32(3, RW(3) + 704);
SET32(8, RW(2) + 720);
SET32(4, RW(6) << 2);
wr64(c, (RW(3) + 0), RD(5));
SET64(2, rd64(c, (RW(7) + 8)));
SET64(6, (s64)(s32)0x4c0000);
SET32(6, RW(6) + RW(4));
SET64(6, (s32)rd32(c, (RW(6) + -30592)));
wr64(c, (RW(3) + 8), RD(2));
wr32(c, (RW(8) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(6) + 0)));
SET64(2, rd16(c, (RW(7) + 8)));
SET64(6, RD(4) & 0xffff);
SET64(2, RD(6) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_0029F804; }
SET64(2, rd64(c, (RW(7) + 0)));
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(2) + RD(3));
wr64(c, (RW(7) + 0), RD(2));
L_0029F804:;
wr16(c, (RW(7) + 8), (u16)RW(6));
SET64(2, rd64(c, (RW(7) + 0)));
wr32(c, (RW(8) + 0), RW(7));
SET64(5, RD(6) + RD(2)); goto L_0029F85C;
L_0029F818:;
SET64(2, (s64)(s32)0x540000);
SET64(4, (s64)(s32)0x4c0000);
SET32(4, RW(4) + RW(3));
SET64(4, (s32)rd32(c, (RW(4) + -30592)));
SET32(2, RW(2) + 720);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(6, RD(3) & 0xffff);
SET64(4, rd64(c, (RW(5) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(5, RD(6) + RD(4));
SET64(2, rd16(c, (RW(3) + 8)));
SET64(2, RD(6) < RD(2));
{ int t = RD(2) == RD(0); SET32(4, RW(9) + 724); if (t) goto L_0029F860; }
SET64(2, (s64)(s32)0x10000);
SET64(5, RD(5) + RD(2));
L_0029F85C:;
SET32(4, RW(9) + 724);
L_0029F860:;
SET64(2, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + -1);
wr32(c, (RW(4) + 0), RW(3)); return;
}

void JP_F_0029F878(Ctx *c) { /* func_0029F878 */
ENTER(0x29f878);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29f888);  JP_F_0029F750(c);
SET64(3, (s64)(s32)0x410000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, rd64(c, (RW(3) + 27368)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_0029F8A8(Ctx *c) { /* func_0029F8A8 */
ENTER(0x29f8a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029FA20(c); return; }
}

void JP_F_0029F8C0(Ctx *c) { /* func_0029F8C0 */
ENTER(0x29f8c0);
SET64(3, (s64)(s32)0x410000);
SET64(2, rd64(c, (RW(3) + 27368))); return;
}

void JP_F_0029F8D0(Ctx *c) { /* func_0029F8D0 */
ENTER(0x29f8d0);
SET64(3, RD(4) + RD(0));
SET64(4, (s64)(s32)0x410000);
SET64(2, RD(3) << 5);
SET64(5, rd64(c, (RW(4) + 27368)));
SET64(2, RD(2) - RD(3));
SET32(29, RW(29) + -16);
SET64(4, RD(2) << 6);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, RD(4) - RD(2));
SET64(4, RD(4) << 3);
SET64(4, RD(4) + RD(3));
SET64(31, 0x29f904); SET64(4, RD(4) << 6); JP_F_0011F988(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029F910(Ctx *c) { /* func_0029F910 */
ENTER(0x29f910);
SET64(2, RD(4) << 5);
SET64(3, (s64)(s32)0x410000);
SET64(2, RD(2) - RD(4));
SET64(5, rd64(c, (RW(3) + 27368)));
SET64(2, RD(2) << 2);
SET32(29, RW(29) + -16);
SET64(2, RD(2) + RD(4));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29f938); SET64(4, RD(2) << 3); JP_F_0011F988(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029F948(Ctx *c) { /* func_0029F948 */
ENTER(0x29f948);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -16);
SET64(5, rd64(c, (RW(2) + 27368)));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29f960);  JP_F_0011F988(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0029F970(Ctx *c) { /* func_0029F970 */
ENTER(0x29f970);
SET64(4, RD(4) << 32);
SET64(4, RSD(4) >> 32);
SET64(1, (s64)(s32)0x49740000);
SET64(1, RD(1) | 0x2400);
c->f[2].u = RW(1);
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 27368));
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu(F(0) * F(2));
c->f[0].f = fpu_div(F(0), F(1));
 return;
}

void JP_F_0029F9B0(Ctx *c) { /* func_0029F9B0 */
ENTER(0x29f9b0);
SET64(4, RD(4) << 32);
SET64(4, RSD(4) >> 32);
SET64(1, (s64)(s32)0x447a0000);
c->f[2].u = RW(1);
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 27368));
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu(F(0) * F(2));
c->f[0].f = fpu_div(F(0), F(1));
 return;
}

void JP_F_0029F9F0(Ctx *c) { /* func_0029F9F0 */
ENTER(0x29f9f0);
SET64(4, RD(4) << 32);
SET64(4, RSD(4) >> 32);
SET64(2, (s64)(s32)0x410000);
c->f[1].u = RW(4);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].u = rd32(c, (RW(2) + 27368));
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu_div(F(1), F(0));
 return;
}

void JP_F_0029FA20(Ctx *c) { /* func_0029FA20 */
ENTER(0x29fa20);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(2) + 27368), RD(4)); return;
}

void JP_F_0029FA30(Ctx *c) { /* func_0029FA30 */
ENTER(0x29fa30);
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 1);
wr32(c, (RW(4) + 24), RW(0));
wr64(c, (RW(4) + 8), RD(2));
wr64(c, (RW(4) + 0), RD(0));
wr64(c, (RW(4) + 16), RD(0)); return;
}

void JP_F_0029FA50(Ctx *c) { /* func_0029FA50 */
ENTER(0x29fa50);
SET64(7, rd64(c, (RW(4) + 8)));
SET64(8, rd64(c, (RW(4) + 16)));
SET64(6, rd64(c, (RW(4) + 0)));
SET64(9, RSD(5) < RSD(7));
SET64(3, (s32)rd32(c, (RW(4) + 24)));
SET64(2, RSD(8) < RSD(5));
if (RD(2) != 0) SET64(8, RD(5));
SET64(6, RD(6) + RD(5));
if (RD(9) != 0) SET64(7, RD(5));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 24), RW(3));
wr64(c, (RW(4) + 0), RD(6));
wr64(c, (RW(4) + 8), RD(7));
wr64(c, (RW(4) + 16), RD(8)); return;
}

void JP_F_0029FA90(Ctx *c) { /* func_0029FA90 */
ENTER(0x29fa90);
SET32(29, RW(29) + -48);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x29fab0); SET64(4, RD(0) + RD(0)); JP_F_00104EB8(c);
SET64(31, 0x29fab8);  JP_F_00105C90(c);
SET64(3, (s64)(s32)0x10010000);
SET32(4, RW(0) + -513);
SET64(3, (s32)rd32(c, (RW(3) + -28672)));
mmi_pcpyld(c, &c->r[4], &c->r[0], &c->r[4]);
SET64(5, (s32)rd32(c, (RW(16) + 128)));
SET64(4, RD(2) & RD(4));
SET64(17, RD(4) << 32);
SET32(2, RW(0) + -257);
SET32(4, RW(16) + 16);
SET64(17, RSD(17) >> 32);
SET64(31, 0x29fae8); SET64(16, RD(3) & RD(2)); JP_F_00105538(c);
SET64(4, RD(17) << 32);
SET64(31, 0x29faf4); SET64(4, RD(4) >> 32); JP_F_00105BC8(c);
SET32(4, RW(0) + 2);
SET64(3, (s64)(s32)0x12000000);
wr64(c, (RW(3) + 4096), RD(4));
SET64(3, (s64)(s32)0x10010000);
wr32(c, (RW(3) + -28672), RW(16));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0029FB20(Ctx *c) { /* func_0029FB20 */
ENTER(0x29fb20);
SET64(2, RD(7) << 32);
wr32(c, (RW(4) + 128), RW(5));
SET64(5, RD(6) << 32);
SET64(2, RSD(2) >> 32);
SET64(3, RD(2) << 16);
SET64(5, RSD(5) >> 32);
SET64(5, RD(5) | RD(3));
SET64(7, (s32)rd32(c, (RW(9) + 0)));
SET64(3, RD(8) << 32);
SET64(6, (s32)rd32(c, (RW(9) + 8)));
SET64(3, RSD(3) >> 32);
SET64(2, RD(4) + RD(0));
SET64(3, RD(3) << 24);
SET64(5, RD(3) | RD(5));
SET64(3, (s32)rd32(c, (RW(9) + 4)));
wr64(c, (RW(4) + 48), RD(5));
SET64(7, RD(7) << 32);
SET64(5, (s32)rd32(c, (RW(9) + 12)));
SET64(3, RD(3) << 48);
SET64(3, RD(7) | RD(3));
wr64(c, (RW(4) + 64), RD(3));
SET64(3, RD(5) << 32);
SET64(3, RD(6) | RD(3));
wr64(c, (RW(4) + 80), RD(3));
mul_s(c, 0, 5, RSW(6), RSW(5));
SET32(3, RW(0) + 58);
SET32(5, RW(5) >> 4);
{ int t = RD(8) == RD(3); wr32(c, (RW(4) + 132), RW(5)); if (t) goto L_0029FC04; }
SET32(3, RW(0) + 50);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 10); if (t) goto L_0029FC04; }
{ int t = RD(8) == RD(3);  if (t) goto L_0029FC04; }
SET32(3, RW(0) + 2);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 49); if (t) goto L_0029FC04; }
{ int t = RD(8) == RD(3);  if (t) goto L_0029FBF0; }
SET32(3, RW(0) + 1);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 48); if (t) goto L_0029FBF0; }
{ int t = RD(8) == RD(3);  if (t) goto L_0029FBE0; }
{ int t = RD(8) == RD(0);  if (t) goto L_0029FBE0; }
SET32(4, RW(2) + 16); goto L_0029FC14;
L_0029FBE0:;
SET64(3, (s32)rd32(c, (RW(2) + 132)));
SET32(3, RW(3) << 2);
wr32(c, (RW(2) + 132), RW(3)); goto L_0029FC10;
L_0029FBF0:;
SET64(4, (s32)rd32(c, (RW(2) + 132)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(2) + 132), RW(3)); goto L_0029FC10;
L_0029FC04:;
SET64(3, (s32)rd32(c, (RW(2) + 132)));
SET32(3, RW(3) << 1);
wr32(c, (RW(2) + 132), RW(3));
L_0029FC10:;
SET32(4, RW(2) + 16);
L_0029FC14:;
SET32(5, RW(2) + 128); { JP_F_0010FF58(c); return; }
}

void JP_F_0029FC20(Ctx *c) { /* func_0029FC20 */
ENTER(0x29fc20);
SET64(3, (s64)(s32)0x6000000);
wr128(c, (RW(4) + 32) & ~15u, &c->r[0]);
SET64(3, RD(3) | 0x8000);
SET64(7, rd64(c, (RW(4) + 32)));
wr32(c, (RW(4) + 20), RW(3));
SET32(5, RW(0) + -32768);
SET64(3, (s64)(s32)0x13000000);
SET64(8, RD(0) + (s64)5);
wr32(c, (RW(4) + 24), RW(3));
SET32(9, RW(0) + -1);
SET64(3, (s64)(s32)0x50000000);
wr32(c, (RW(4) + 16), RW(0));
SET64(3, RD(3) | 0x6);
wr64(c, (RW(4) + 96), RD(0));
wr32(c, (RW(4) + 28), RW(3));
SET64(7, RD(7) & RD(5));
SET32(3, RW(0) + 1);
SET64(7, RD(7) | RD(8));
wr64(c, (RW(4) + 112), RD(3));
SET64(3, RD(0) + (s64)1);
SET64(8, rd64(c, (RW(4) + 40)));
SET64(6, RD(3) << 15);
SET64(10, RD(3) << 60);
SET64(3, (s64)(s32)0xffff0000);
SET64(5, RD(3) | 0x7fff);
SET64(5, RD(7) & RD(5));
SET64(3, (s64)(s32)0xfff0000);
SET64(11, RD(5) | RD(6));
SET64(3, RD(3) | 0xffff);
SET64(5, RD(3) << 32);
SET32(6, RW(0) + -16);
SET64(3, RD(0) | 0xffff);
SET64(7, RD(0) + (s64)14);
SET64(3, RD(3) << 16);
SET64(3, RD(3) | 0xffff);
SET64(5, RD(3) | RD(5));
SET32(3, RW(0) + 80);
mmi_pcpyld(c, &c->r[5], &c->r[9], &c->r[5]);
wr64(c, (RW(4) + 56), RD(3));
SET64(3, RD(11) & RD(5));
SET64(9, RD(3) | RD(10));
SET32(5, RW(0) + 81);
SET64(3, RD(8) & RD(6));
wr64(c, (RW(4) + 72), RD(5));
SET64(3, RD(3) | RD(7));
SET32(5, RW(0) + 97);
wr64(c, (RW(4) + 40), RD(3));
SET32(3, RW(0) + 82);
wr64(c, (RW(4) + 32), RD(9));
wr64(c, (RW(4) + 88), RD(3));
SET32(3, RW(0) + 83);
wr64(c, (RW(4) + 104), RD(5));
wr64(c, (RW(4) + 120), RD(3)); return;
}

void JP_F_0029FD00(Ctx *c) { /* func_0029FD00 */
ENTER(0x29fd00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029FD48; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 3360);
SET64(31, 0x29fd30); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_0029FD4C; }
SET64(31, 0x29fd48); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0029FD48:;
SET64(2, RD(17) + RD(0));
L_0029FD4C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0029FD60(Ctx *c) { /* func_0029FD60 */
ENTER(0x29fd60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x29fd74); SET64(16, RD(4) + RD(0)); JP_F_002B0400(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) + 3360);
wr32(c, (RW(16) + 128), RW(0));
SET64(31, 0x29fd8c); wr32(c, (RW(16) + 8), RW(2)); JP_F_0029FC20(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0029FDA0(Ctx *c) { /* func_0029FDA0 */
ENTER(0x29fda0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29fdb0); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_00259410(c);
c->f[0].u = RW(2);
c->f[2].f = (f32)(s32)c->f[0].u;
SET64(2, (s64)(s32)0x44790000);
SET64(3, RD(2) | 0xc000);
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(3);
c->f[0].u = RW(2);
c->f[1].f = fpu_div(F(2), F(1));
c->f[1].f = fpu(F(0) + F(1));
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_0029FDF4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_0029FE18;
L_0029FDF4:;
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
{ int t = !c->fcc;  if (t) goto L_0029FE10; }
 goto L_0029FE14;
L_0029FE10:;
c->f[0].u = c->f[1].u;
L_0029FE14:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0029FE18:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0029FE20(Ctx *c) { /* func_0029FE20 */
ENTER(0x29fe20);
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = RW(2);
c->fcc = F(12) <= F(2);
{ int t = c->fcc;  if (t) goto L_0029FE40; }
SET64(3, (s64)(s32)0x3f800000); goto L_0029FE64;
L_0029FE40:;
c->f[2].u = RW(0);
c->fcc = F(12) < F(2);
{ int t = !c->fcc;  if (t) goto L_0029FE5C; }
 goto L_0029FE60;
L_0029FE5C:;
c->f[2].u = c->f[12].u;
L_0029FE60:;
SET64(3, (s64)(s32)0x3f800000);
L_0029FE64:;
SET64(2, (s64)(s32)0x44790000);
c->f[1].u = RW(3);
SET64(2, RD(2) | 0xc000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(2) - F(1));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
SET64(4, (s32)rd32(c, (RW(4) + 0))); { JP_F_00259360(c); return; }
}

void JP_F_0029FEA0(Ctx *c) { /* func_0029FEA0 */
ENTER(0x29fea0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29feb0); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_0025A338(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

static void JP_B_0029FEC0(Ctx *c, u32 entry) { /* func_0029FEC0 */
ENTER(entry);
switch (entry) { case 0x29fef4: goto L_0029FEF4; case 0x29fefc: goto L_0029FEFC; case 0x29ff04: goto L_0029FF04; case 0x29ff0c: goto L_0029FF0C; case 0x29ff14: goto L_0029FF14; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29fed0); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_00258648(c);
SET64(1, RD(2) < (u64)(s64)7);
{ int t = RD(1) == RD(0); SET64(3, (s64)(s32)0x4c0000); if (t) goto L_0029FF1C; }
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -30560);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x29fef4: goto L_0029FEF4; case 0x29fefc: goto L_0029FEFC; case 0x29ff04: goto L_0029FF04; case 0x29ff0c: goto L_0029FF0C; case 0x29ff14: goto L_0029FF14; default: rt_jump(c, t); return; } }
L_0029FEF4:;
SET32(2, RW(0) + 1); goto L_0029FF20;
L_0029FEFC:;
SET64(2, RD(0) + RD(0)); goto L_0029FF20;
L_0029FF04:;
SET64(2, RD(0) + RD(0)); goto L_0029FF20;
L_0029FF0C:;
SET64(2, RD(0) + RD(0)); goto L_0029FF20;
L_0029FF14:;
SET64(2, RD(0) + RD(0)); goto L_0029FF20;
L_0029FF1C:;
SET64(2, RD(0) + RD(0));
L_0029FF20:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}
void JP_F_0029FEC0(Ctx *c) { JP_B_0029FEC0(c, 0x29fec0); }
void JP_F_0029FEF4(Ctx *c) { JP_B_0029FEC0(c, 0x29fef4); }
void JP_F_0029FEFC(Ctx *c) { JP_B_0029FEC0(c, 0x29fefc); }
void JP_F_0029FF04(Ctx *c) { JP_B_0029FEC0(c, 0x29ff04); }
void JP_F_0029FF0C(Ctx *c) { JP_B_0029FEC0(c, 0x29ff0c); }
void JP_F_0029FF14(Ctx *c) { JP_B_0029FEC0(c, 0x29ff14); }

static void JP_B_0029FF30(Ctx *c, u32 entry) { /* func_0029FF30 */
ENTER(entry);
switch (entry) { case 0x29ff70: goto L_0029FF70; case 0x29ff78: goto L_0029FF78; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x29ff48); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_00258648(c);
SET64(1, RD(2) < (u64)(s64)7);
{ int t = RD(1) == RD(0);  if (t) goto L_0029FFA8; }
SET64(4, (s64)(s32)0x4c0000);
SET32(3, RW(2) << 2);
SET32(4, RW(4) + -30528);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x29ff70: goto L_0029FF70; case 0x29ff78: goto L_0029FF78; default: rt_jump(c, t); return; } }
L_0029FF70:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_0029FFAC;
L_0029FF78:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29ff84); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
SET64(31, 0x29ff8c); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00258558(c);
SET64(31, 0x29ff94); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0024F920(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29ffa0); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
 { POLL(); goto L_0029FF70; }
L_0029FFA8:;
SET64(31, rd64(c, (RW(29) + 16)));
L_0029FFAC:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void JP_F_0029FF30(Ctx *c) { JP_B_0029FF30(c, 0x29ff30); }
void JP_F_0029FF70(Ctx *c) { JP_B_0029FF30(c, 0x29ff70); }
void JP_F_0029FF78(Ctx *c) { JP_B_0029FF30(c, 0x29ff78); }

void JP_F_0029FFC0(Ctx *c) { /* func_0029FFC0 */
ENTER(0x29ffc0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x29ffd8); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_0025A338(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0029FFE8; }
L_0029FFE0:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_0029FFFC;
L_0029FFE8:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x29fff4); SET32(5, RW(0) + 1); JP_F_0025A1C8(c);
 { POLL(); goto L_0029FFE0; }
L_0029FFFC:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void JP_B_002A0010(Ctx *c, u32 entry) { /* func_002A0010 */
ENTER(entry);
switch (entry) { case 0x2a001c: goto L_002A001C; case 0x2a0024: goto L_002A0024; case 0x2a002c: goto L_002A002C; case 0x2a0034: goto L_002A0034; case 0x2a0038: goto L_002A0038; case 0x2a0054: goto L_002A0054; case 0x2a0058: goto L_002A0058; case 0x2a0068: goto L_002A0068; case 0x2a007c: goto L_002A007C; case 0x2a0088: goto L_002A0088; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
L_002A001C:;
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
L_002A0024:;
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET64(31, 0x2a0030); SET64(16, RD(5) + RD(0)); JP_F_00258648(c);
if (0) { L_002A002C:; SET64(16, RD(5) + RD(0)); }
SET64(1, RD(2) < (u64)(s64)7);
L_002A0034:;
{ int t = RD(1) == RD(0); SET64(4, (s64)(s32)0x4c0000); if (t) goto L_002A0088; }
if (0) { L_002A0038:; SET64(4, (s64)(s32)0x4c0000); }
SET32(3, RW(2) << 2);
SET32(4, RW(4) + -30496);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x2a001c: goto L_002A001C; case 0x2a0024: goto L_002A0024; case 0x2a002c: goto L_002A002C; case 0x2a0034: goto L_002A0034; case 0x2a0038: goto L_002A0038; case 0x2a0054: goto L_002A0054; case 0x2a0058: goto L_002A0058; case 0x2a0068: goto L_002A0068; case 0x2a007c: goto L_002A007C; case 0x2a0088: goto L_002A0088; default: rt_jump(c, t); return; } }
L_002A0054:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
L_002A0058:;
SET64(31, 0x2a0060); SET64(5, RD(16) & 0xff); JP_F_0024F5C8(c);
wr8(c, (RW(17) + 16), (u8)RW(16)); goto L_002A0088;
L_002A0068:;
{ int t = RD(16) != RD(0);  if (t) goto L_002A0088; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2a007c); SET64(5, RD(0) + RD(0)); JP_F_0024F5C8(c);
L_002A007C:;
SET64(31, 0x2a0084); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_0024F8A8(c);
wr8(c, (RW(17) + 16), (u8)RW(0));
L_002A0088:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002A0010(Ctx *c) { JP_B_002A0010(c, 0x2a0010); }
void JP_F_002A001C(Ctx *c) { JP_B_002A0010(c, 0x2a001c); }
void JP_F_002A0024(Ctx *c) { JP_B_002A0010(c, 0x2a0024); }
void JP_F_002A002C(Ctx *c) { JP_B_002A0010(c, 0x2a002c); }
void JP_F_002A0034(Ctx *c) { JP_B_002A0010(c, 0x2a0034); }
void JP_F_002A0038(Ctx *c) { JP_B_002A0010(c, 0x2a0038); }
void JP_F_002A0054(Ctx *c) { JP_B_002A0010(c, 0x2a0054); }
void JP_F_002A0058(Ctx *c) { JP_B_002A0010(c, 0x2a0058); }
void JP_F_002A0068(Ctx *c) { JP_B_002A0010(c, 0x2a0068); }
void JP_F_002A007C(Ctx *c) { JP_B_002A0010(c, 0x2a007c); }
void JP_F_002A0088(Ctx *c) { JP_B_002A0010(c, 0x2a0088); }

static void JP_B_002A00A0(Ctx *c, u32 entry) { /* func_002A00A0 */
ENTER(entry);
switch (entry) { case 0x2a00dc: goto L_002A00DC; case 0x2a0118: goto L_002A0118; case 0x2a012c: goto L_002A012C; case 0x2a0134: goto L_002A0134; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2a00b8); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_00258648(c);
SET64(1, RD(2) < (u64)(s64)7);
{ int t = RD(1) == RD(0); SET64(4, (s64)(s32)0x4c0000); if (t) goto L_002A0134; }
SET32(3, RW(2) << 2);
SET32(4, RW(4) + -30464);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x2a00dc: goto L_002A00DC; case 0x2a0118: goto L_002A0118; case 0x2a012c: goto L_002A012C; case 0x2a0134: goto L_002A0134; default: rt_jump(c, t); return; } }
L_002A00DC:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a00e8); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
SET64(31, 0x2a00f0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0024F4E8(c);
SET64(2, rd8(c, (RW(16) + 16)));
{ int t = RD(2) != RD(0);  if (t) goto L_002A0104; }
SET64(31, 0x2a0104); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0024F8A8(c);
L_002A0104:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0110); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_002A0138;
L_002A0118:;
SET64(31, 0x2a0120); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0025A338(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002A0134; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_002A012C:;
SET64(31, 0x2a0134); SET64(5, RD(0) + RD(0)); JP_F_0025A1C8(c);
L_002A0134:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002A0138:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void JP_F_002A00A0(Ctx *c) { JP_B_002A00A0(c, 0x2a00a0); }
void JP_F_002A00DC(Ctx *c) { JP_B_002A00A0(c, 0x2a00dc); }
void JP_F_002A0118(Ctx *c) { JP_B_002A00A0(c, 0x2a0118); }
void JP_F_002A012C(Ctx *c) { JP_B_002A00A0(c, 0x2a012c); }
void JP_F_002A0134(Ctx *c) { JP_B_002A00A0(c, 0x2a0134); }

void JP_F_002A0150(Ctx *c) { /* func_002A0150 */
ENTER(0x2a0150);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a0178); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_002A01D0; }
{ int t = RD(2) == RD(0);  if (t) goto L_002A0194; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A0214;
L_002A0194:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a01a0); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a01b0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2a01bc); SET64(5, RD(2) + RD(0)); JP_F_0024F2A0(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a01c8); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
 goto L_002A0210;
L_002A01D0:;
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a01e0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a01f0); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET32(2, RW(16) >> 8);
SET64(5, RD(16) & 0xff);
SET64(31, 0x2a0204); SET64(6, RD(2) & 0xffff); JP_F_0024F3D0(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0210); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
L_002A0210:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A0214:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A0230(Ctx *c) { /* func_002A0230 */
ENTER(0x2a0230);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002A0240(Ctx *c) { /* func_002A0240 */
ENTER(0x2a0240);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A02C8; }
{ int t = RD(5) == RD(0); SET32(4, RW(0) + 20); if (t) goto L_002A029C; }
L_002A0260:;
SET64(2, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(2) + 784)));
SET64(31, 0x2a0270); wr32(c, (RW(16) + 4), RW(5)); JP_F_0010F6A0(c);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(5, (s32)rd32(c, (RW(2) + 4)));
SET64(6, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x2a0284); SET64(4, (s32)rd32(c, (RW(16) + 12))); JP_F_00257AA8(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0294); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET32(2, RW(0) + 1); goto L_002A02CC;
L_002A029C:;
SET64(31, 0x2a02a4);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_002A02C0; }
SET64(5, (s32)rd32(c, (RW(16) + 8)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x2a02bc); SET32(6, RW(0) + 64); JP_F_002AE380(c);
SET64(5, RD(2) + RD(0));
L_002A02C0:;
 { POLL(); goto L_002A0260; }
L_002A02C8:;
SET64(2, RD(0) + RD(0));
L_002A02CC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A02E0(Ctx *c) { /* func_002A02E0 */
ENTER(0x2a02e0);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void JP_F_002A02F0(Ctx *c) { /* func_002A02F0 */
ENTER(0x2a02f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A036C; }
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s32)rd32(c, (RW(2) + 784)));
SET32(3, RW(3) + 3384);
SET64(31, 0x2a0324); wr32(c, (RW(17) + 20), RW(3)); JP_F_0010F6A0(c);
SET64(31, 0x2a032c); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_00257F30(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0338); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(4) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_002A0358; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a0354); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_002A0358:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A0370; }
SET64(31, 0x2a036c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A036C:;
SET64(2, RD(17) + RD(0));
L_002A0370:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A0390(Ctx *c) { /* func_002A0390 */
ENTER(0x2a0390);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 0), RW(0));
SET32(2, RW(2) + 3384);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 20), RW(2));
SET32(2, RW(5) << 5);
wr32(c, (RW(4) + 8), RW(0));
SET32(2, RW(2) - RW(5));
wr32(c, (RW(4) + 12), RW(5));
SET32(2, RW(2) << 2);
wr8(c, (RW(4) + 16), (u8)RW(0));
SET32(6, RW(2) + RW(5));
SET32(3, RW(6) << 4);
SET64(2, (s64)(s32)0x2e8b0000);
SET32(6, RW(3) - RW(6));
SET64(2, RD(2) | 0xa2e9);
SET32(3, RW(6) << 2);
SET32(3, RW(6) + RW(3));
SET32(3, RW(3) << 7);
mul_s(c, 0, 0, RSW(2), RSW(3));
SET32(6, RW(3) >> 31);
SET64(3, c->hi.d[0]);
SET64(2, (s64)(s32)0x540000);
SET64(2, (s32)rd32(c, (RW(2) + 812)));
SET32(3, RSW(3) >> 3);
SET32(3, RW(3) + RW(6));
SET32(2, RW(2) + 1);
mul_s(c, 0, 2, RSW(3), RSW(2));
SET32(3, RW(2) + 2048);
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 11); if (t) goto L_002A0418; }
SET32(2, RW(3) + 2047);
SET32(2, RSW(2) >> 11);
L_002A0418:;
SET32(3, RW(2) << 11);
SET32(2, RW(5) << 7);
SET32(6, RW(3) + 36);
SET32(2, RW(2) + RW(5));
SET32(3, RW(2) << 1);
SET32(3, RW(3) + RW(5));
SET64(2, RD(4) + RD(0));
SET32(3, RW(3) << 6);
SET32(3, RW(3) + RW(6));
SET32(3, RW(3) + 64);
wr32(c, (RW(4) + 8), RW(3)); return;
}

void JP_F_002A0450(Ctx *c) { /* func_002A0450 */
ENTER(0x2a0450);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(3, RW(3) << 8);
SET64(2, RD(3) | RD(2)); return;
}

void JP_F_002A0470(Ctx *c) { /* func_002A0470 */
ENTER(0x2a0470);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A04B8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 3424);
SET64(31, 0x2a04a0); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B0510(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A04BC; }
SET64(31, 0x2a04b8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A04B8:;
SET64(2, RD(17) + RD(0));
L_002A04BC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A04D0(Ctx *c) { /* func_002A04D0 */
ENTER(0x2a04d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2a04f4); SET32(4, RW(0) + 20); JP_F_00100670(c);
{ int t = RD(2) != RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002A0504; }
L_002A04FC:;
SET64(2, RD(17) + RD(0)); goto L_002A052C;
L_002A0504:;
SET64(16, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a0514); SET64(5, RD(0) + RD(0)); JP_F_002B0570(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 3424);
wr32(c, (RW(17) + 8), RW(2));
wr32(c, (RW(17) + 12), RW(16));
wr32(c, (RW(17) + 16), RW(18)); { POLL(); goto L_002A04FC; }
L_002A052C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A0550(Ctx *c) { /* func_002A0550 */
ENTER(0x2a0550);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(2) + 784)));
SET64(31, 0x2a0578); SET64(16, RD(5) + RD(0)); JP_F_0010F6A0(c);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a0590); SET64(16, (s32)rd32(c, (RW(2) + 4))); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a05a4); SET64(7, RD(16) + RD(0)); JP_F_0024C4C0(c);
SET64(17, RD(2) + RD(0));
L_002A05A8:;
SET64(31, 0x2a05b0); SET64(4, (s32)rd32(c, (RW(18) + 0))); JP_F_0024CD80(c);
SET32(3, RW(0) + 3);
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_002A05A8; } }
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a05d0); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x2a05e4); SET32(5, RW(16) + RW(2)); JP_F_0010FF58(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A0600(Ctx *c) { /* func_002A0600 */
ENTER(0x2a0600);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(18) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A0684; }
SET64(16, (s32)rd32(c, (RW(18) + 0)));
SET64(31, 0x2a062c); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(3, (s32)rd32(c, (RW(28) + -30216)));
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + 864);
SET32(4, RW(28) + -29928);
SET32(3, RW(3) + -1);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(28) + -30216), RW(3));
SET64(31, 0x2a0650); wr8(c, (RW(2) + 0), (u8)RW(16)); JP_F_002AB600(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
{ int t = RD(4) == RD(0); SET64(2, RD(17) << 48); if (t) goto L_002A0670; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a066c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, RD(17) << 48);
L_002A0670:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(18) + RD(0)); if (t) goto L_002A0688; }
SET64(31, 0x2a0684); SET64(4, RD(18) + RD(0)); JP_F_001004B0(c);
L_002A0684:;
SET64(2, RD(18) + RD(0));
L_002A0688:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A06A0(Ctx *c) { /* func_002A06A0 */
ENTER(0x2a06a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2a06c4); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(2, (s32)rd32(c, (RW(28) + -30216)));
{ int t = RSD(2) <= 0; SET64(3, (s64)(s32)0x540000); if (t) goto L_002A0730; }
SET64(5, (s32)rd32(c, (RW(28) + -30216)));
L_002A06D4:;
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + 864);
SET32(4, RW(28) + -29928);
SET32(3, RW(2) + RW(5));
SET64(18, rd8(c, (RW(3) + 0)));
SET32(2, RW(5) + 1);
SET64(31, 0x2a06f4); wr32(c, (RW(28) + -30216), RW(2)); JP_F_002AB600(c);
SET32(4, RW(0) + 20);
SET64(31, 0x2a0700); wr32(c, (RW(17) + 0), RW(18)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET32(4, RW(16) + 1); if (t) goto L_002A0724; }
SET32(3, RW(0) + -4);
SET32(5, RW(4) << 1);
SET32(6, RW(0) + 64);
SET64(4, RD(2) + RD(0));
SET32(2, RW(5) + 282);
SET64(31, 0x2a0724); SET64(5, RD(2) & RD(3)); JP_F_002AE380(c);
L_002A0724:;
wr32(c, (RW(17) + 4), RW(2));
SET64(2, RD(17) + RD(0)); goto L_002A078C;
L_002A0730:;
SET64(4, RD(0) + RD(0));
SET32(3, RW(3) + 864);
L_002A0738:;
wr8(c, (RW(3) + 0), (u8)RW(4));
SET32(2, RW(4) + 1);
wr8(c, (RW(3) + 1), (u8)RW(2));
SET32(2, RW(4) + 2);
wr8(c, (RW(3) + 2), (u8)RW(2));
SET32(2, RW(4) + 3);
wr8(c, (RW(3) + 3), (u8)RW(2));
SET32(2, RW(4) + 4);
wr8(c, (RW(3) + 4), (u8)RW(2));
SET32(2, RW(4) + 5);
wr8(c, (RW(3) + 5), (u8)RW(2));
SET32(2, RW(4) + 6);
wr8(c, (RW(3) + 6), (u8)RW(2));
SET32(2, RW(4) + 7);
wr8(c, (RW(3) + 7), (u8)RW(2));
SET32(4, RW(4) + 8);
SET64(2, RSD(4) < (s64)256);
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 8); if (t) { POLL(); goto L_002A0738; } }
SET64(5, (s32)rd32(c, (RW(28) + -30216))); { POLL(); goto L_002A06D4; }
L_002A078C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A07B0(Ctx *c) { /* func_002A07B0 */
ENTER(0x2a07b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002A07DC; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
L_002A07D0:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1); goto L_002A0814;
L_002A07DC:;
SET64(2, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(2) + 784)));
SET64(31, 0x2a07ec); SET64(16, (s32)rd32(c, (RW(17) + 8))); JP_F_0010F6A0(c);
SET32(2, RW(16) >> 8);
SET64(4, RD(16) & 0xff);
SET64(31, 0x2a07fc); SET64(5, RD(2) & 0xffff); JP_F_0024D790(c);
wr32(c, (RW(17) + 4), RW(2));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a080c); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET64(2, (s32)rd32(c, (RW(17) + 4))); { POLL(); goto L_002A07D0; }
L_002A0814:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A0830(Ctx *c) { /* func_002A0830 */
ENTER(0x2a0830);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A08B4; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 3456);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 0), RW(2)); if (t) goto L_002A089C; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 3488);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 0), RW(3)); if (t) goto L_002A0890; }
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a087c); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
SET64(31, 0x2a0884); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_0024D8E8(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0890); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
L_002A0890:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a089c); SET64(5, RD(0) + RD(0)); JP_F_002B05E0(c);
L_002A089C:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A08B8; }
SET64(31, 0x2a08b4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A08B4:;
SET64(2, RD(17) + RD(0));
L_002A08B8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A08D0(Ctx *c) { /* func_002A08D0 */
ENTER(0x2a08d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a08f4); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(31, 0x2a0900); SET64(4, RD(17) + RD(0)); JP_F_002B0630(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 8), RW(16));
SET32(2, RW(2) + 3456);
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a0924); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A0940(Ctx *c) { /* func_002A0940 */
ENTER(0x2a0940);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 784)));
SET64(31, 0x2a096c); SET64(16, RD(6) + RD(0)); JP_F_0010F6A0(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2a097c); SET64(6, RD(16) + RD(0)); JP_F_0024E2A8(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a098c); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A09B0(Ctx *c) { /* func_002A09B0 */
ENTER(0x2a09b0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2a09cc); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
SET64(31, 0x2a09d4); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_0024DF30(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a09e4); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A0A00(Ctx *c) { /* func_002A0A00 */
ENTER(0x2a0a00);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2a0a1c); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
SET64(31, 0x2a0a24); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_0024E6A8(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0a34); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A0A50(Ctx *c) { /* func_002A0A50 */
ENTER(0x2a0a50);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2a0a6c); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
SET64(31, 0x2a0a74); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_0024E480(c);
SET32(16, RW(2) << 11);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0a84); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A0AA0(Ctx *c) { /* func_002A0AA0 */
ENTER(0x2a0aa0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(5) + 8)));
{ int t = RD(16) != RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A0B00; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2a0ad4);  rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET32(4, RW(29) + 64);
SET64(5, RD(16) + RD(0));
SET64(31, 0x2a0ae8); SET32(6, RW(0) + 64); JP_F_002AE380(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a0af4); SET32(5, RW(29) + 64); JP_F_002AE260(c);
SET32(4, RW(29) + 64);
SET64(31, 0x2a0b00); SET32(5, RW(0) + -1); JP_F_002AE2B0(c);
L_002A0B00:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0b0c); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
{ int t = RSD(16) >= 0; SET32(5, RSW(16) >> 11); if (t) goto L_002A0B1C; }
SET32(2, RW(16) + 2047);
SET32(5, RSW(2) >> 11);
L_002A0B1C:;
SET64(6, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2a0b28); SET64(4, (s32)rd32(c, (RW(18) + 4))); JP_F_0024DE98(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0b38); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002A0B60(Ctx *c) { /* func_002A0B60 */
ENTER(0x2a0b60);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(18, (s32)rd32(c, (RW(5) + 8)));
{ int t = RD(18) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A0BC0; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2a0b94);  rt_call(c, t); }
SET64(18, RD(2) + RD(0));
SET32(4, RW(29) + 64);
SET64(5, RD(18) + RD(0));
SET64(31, 0x2a0ba8); SET32(6, RW(0) + 64); JP_F_002AE380(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a0bb4); SET32(5, RW(29) + 64); JP_F_002AE260(c);
SET32(4, RW(29) + 64);
SET64(31, 0x2a0bc0); SET32(5, RW(0) + -1); JP_F_002AE2B0(c);
L_002A0BC0:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0bcc); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
{ int t = RSD(18) >= 0; SET32(5, RSW(18) >> 11); if (t) goto L_002A0BDC; }
SET32(2, RW(18) + 2047);
SET32(5, RSW(2) >> 11);
L_002A0BDC:;
SET64(6, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x2a0be8); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_0024DE98(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0bf4); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
L_002A0BF4:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0c00); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
SET64(31, 0x2a0c08); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_0024E6A8(c);
SET64(18, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0c18); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET32(2, RW(0) + 3);
{ int t = RD(18) != RD(2);  if (t) { POLL(); goto L_002A0BF4; } }
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0c30); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
SET64(31, 0x2a0c38); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_0024E640(c);
SET32(17, RW(2) << 11);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0c48); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x2a0c54); SET32(5, RW(17) + RW(4)); JP_F_0010FF58(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002A0C70(Ctx *c) { /* func_002A0C70 */
ENTER(0x2a0c70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A0C98; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
L_002A0C8C:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1); goto L_002A0CC8;
L_002A0C98:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0ca4); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x2a0cb0); SET64(5, RD(0) + RD(0)); JP_F_0024D428(c);
wr32(c, (RW(16) + 4), RW(2));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0cc0); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
SET64(2, (s32)rd32(c, (RW(16) + 4))); { POLL(); goto L_002A0C8C; }
L_002A0CC8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A0CE0(Ctx *c) { /* func_002A0CE0 */
ENTER(0x2a0ce0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A0D54; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 3488);
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002A0D30; }
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0d1c); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F6A0(c);
SET64(31, 0x2a0d24); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_0024D8E8(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0d30); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
L_002A0D30:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a0d3c); SET64(5, RD(0) + RD(0)); JP_F_002B05E0(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_002A0D58; }
SET64(31, 0x2a0d54); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002A0D54:;
SET64(2, RD(16) + RD(0));
L_002A0D58:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A0D70(Ctx *c) { /* func_002A0D70 */
ENTER(0x2a0d70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2a0d8c); SET64(16, RD(5) + RD(0)); JP_F_002B0630(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 4), RW(0));
SET32(2, RW(2) + 3488);
wr32(c, (RW(17) + 0), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a0dac); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a0dc0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A0DE0(Ctx *c) { /* func_002A0DE0 */
ENTER(0x2a0de0);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(3) + 848)));
{ int t = RD(3) != RD(0);  if (t) goto L_002A0E00; }
L_002A0DF8:;
SET64(31, rd64(c, (RW(29) + 0))); goto L_002A0E44;
L_002A0E00:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a0e10);  rt_call(c, t); }
SET64(4, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
wr32(c, (RW(4) + 832), RW(2));
SET64(31, 0x2a0e24); SET64(4, (s32)rd32(c, (RW(3) + 784))); JP_F_0010F6A0(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2a0e30); SET32(4, RW(4) + 832); JP_F_00257650(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a0e3c); SET64(4, (s32)rd32(c, (RW(2) + 784))); JP_F_0010F680(c);
 { POLL(); goto L_002A0DF8; }
L_002A0E44:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002A0E50(Ctx *c) { /* func_002A0E50 */
ENTER(0x2a0e50);
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x540000);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(3) + 848)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A0E7C; }
L_002A0E74:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A0EF0;
L_002A0E7C:;
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 832);
SET64(31, 0x2a0e90); SET32(6, RW(0) + 16); JP_F_001273D0(c);
SET64(2, (s64)(s32)0x540000);
SET32(5, RW(16) << 3);
wr32(c, (RW(2) + 836), RW(17));
SET32(2, RW(17) + 1);
mul_s(c, 0, 3, RSW(16), RSW(2));
SET32(4, RW(0) + 20);
SET64(2, (s64)(s32)0x540000);
SET32(3, RW(5) + RW(3));
SET64(31, 0x2a0eb8); wr32(c, (RW(2) + 844), RW(3)); JP_F_00100670(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0);  if (t) goto L_002A0ED8; }
SET64(2, (s64)(s32)0x540000);
SET64(5, (s32)rd32(c, (RW(2) + 844)));
SET64(31, 0x2a0ed4); SET32(6, RW(0) + 64); JP_F_002AE380(c);
SET64(4, RD(2) + RD(0));
L_002A0ED8:;
SET64(5, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
wr32(c, (RW(5) + 848), RW(4));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(3) + 840), RW(4)); { POLL(); goto L_002A0E74; }
L_002A0EF0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A0F00(Ctx *c) { /* func_002A0F00 */
ENTER(0x2a0f00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A0F34; }
SET64(2, RD(5) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0;  if (t) goto L_002A0F30; }
SET64(31, 0x2a0f30);  JP_F_001004B0(c);
L_002A0F30:;
SET64(2, RD(16) + RD(0));
L_002A0F34:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A0F50(Ctx *c) { /* func_002A0F50 */
ENTER(0x2a0f50);
SET64(4, RD(5) & 0xff); { JP_F_0025AC88(c); return; }
}

void JP_F_002A0F60(Ctx *c) { /* func_002A0F60 */
ENTER(0x2a0f60);
SET64(2, (s32)rd32(c, (RW(4) + 60))); return;
}

void JP_F_002A0F70(Ctx *c) { /* func_002A0F70 */
ENTER(0x2a0f70);
SET64(4, (s32)rd32(c, (RW(4) + 32))); { JP_F_0010F680(c); return; }
}

void JP_F_002A0F80(Ctx *c) { /* func_002A0F80 */
ENTER(0x2a0f80);
SET64(4, (s32)rd32(c, (RW(4) + 32))); { JP_F_0010F6A0(c); return; }
}

void JP_F_002A0F90(Ctx *c) { /* func_002A0F90 */
ENTER(0x2a0f90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2a0fa0);  JP_F_00251068(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_002A0FB0(Ctx *c) { /* func_002A0FB0 */
ENTER(0x2a0fb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2a0fc0);  JP_F_00250708(c);
{ int t = RD(2) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002A0FD0; }
L_002A0FC8:;
SET64(2, RD(0) + RD(0)); goto L_002A0FE0;
L_002A0FD0:;
SET64(31, 0x2a0fd8);  JP_F_00251050(c);
 { POLL(); goto L_002A0FC8; }
L_002A0FE0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002A0FF0(Ctx *c) { /* func_002A0FF0 */
ENTER(0x2a0ff0);
 return;
}

void JP_F_002A1000(Ctx *c) { /* func_002A1000 */
ENTER(0x2a1000);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x2a1018); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00250708(c);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002A1028; }
L_002A1020:;
SET32(2, RW(0) + 1); goto L_002A10D8;
L_002A1028:;
SET64(31, 0x2a1030);  JP_F_00257550(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2a103c); SET32(4, RW(4) + 788); JP_F_00250730(c);
SET64(4, (s64)(s32)0x2a0000);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2a104c); SET32(4, RW(4) + 4080); JP_F_00250718(c);
SET64(31, 0x2a1054);  JP_F_0024EE10(c);
SET64(16, (s64)(s32)0x540000);
SET32(16, RW(16) + 752);
{ int t = RD(16) == RD(0); SET64(18, (s64)(s32)0x540000); if (t) goto L_002A1068; }
SET32(16, RW(16) + 4);
L_002A1068:;
SET32(4, RW(0) + 20);
SET64(31, 0x2a1074); SET32(18, RW(18) + 1904); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002A10B0; }
SET64(31, 0x2a1084); SET64(4, RD(17) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(3, RW(3) + 5760);
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(17) + 4), RW(0));
SET32(2, RW(0) + 128);
wr32(c, (RW(17) + 0), RW(3));
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(2));
wr8(c, (RW(17) + 16), (u8)RW(0));
L_002A10B0:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2a10bc); SET64(5, RD(17) + RD(0)); JP_F_002AD320(c);
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(5, (s64)(s32)0x540000);
SET32(5, RW(5) + 752);
SET64(31, 0x2a10d0); SET64(6, RD(0) + RD(0)); JP_F_002ABF80(c);
 { POLL(); goto L_002A1020; }
L_002A10D8:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A10F0(Ctx *c) { /* func_002A10F0 */
ENTER(0x2a10f0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002A1110; }
SET64(4, (s64)(s32)0x4c0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -30432);
SET64(31, 0x2a1110); SET64(6, RD(0) + RD(0)); JP_F_001177B8(c);
L_002A1110:;
SET64(4, (s64)(s32)0x4c0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -30400);
SET64(31, 0x2a1124); SET64(6, RD(0) + RD(0)); JP_F_001177B8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002A1130(Ctx *c) { /* func_002A1130 */
ENTER(0x2a1130);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A1190; }
SET64(4, (s32)rd32(c, (RW(17) + 32)));
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 3520);
SET32(2, RW(2) + 3532);
wr32(c, (RW(17) + 0), RW(3));
SET64(31, 0x2a116c); wr32(c, (RW(17) + 4), RW(2)); JP_F_0010F670(c);
SET32(4, RW(17) + 4);
SET64(31, 0x2a1178); SET64(5, RD(0) + RD(0)); JP_F_002AD480(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A1194; }
SET64(31, 0x2a1190); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A1190:;
SET64(2, RD(17) + RD(0));
L_002A1194:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A11B0(Ctx *c) { /* func_002A11B0 */
ENTER(0x2a11b0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 3400);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 0), RW(2));
SET64(31, 0x2a11d4); SET32(4, RW(16) + 4); JP_F_002AD4E0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(0) + 1);
SET32(2, RW(2) + 3520);
wr32(c, (RW(16) + 12), RW(3));
wr32(c, (RW(16) + 0), RW(2));
SET32(4, RW(16) + 8);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 16), RW(3));
SET32(2, RW(2) + 3532);
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 4), RW(2));
SET32(2, RW(0) + 4);
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 60), RW(2));
SET32(2, RW(0) + 16);
wr32(c, (RW(16) + 28), RW(0));
SET64(31, 0x2a121c); wr32(c, (RW(16) + 20), RW(2)); JP_F_0010F660(c);
wr32(c, (RW(16) + 32), RW(2));
SET32(4, RW(16) + 36);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2a1230); SET32(6, RW(0) + 24); JP_F_001273D0(c);
SET32(2, RW(0) + 61);
SET32(3, RW(0) + 62);
wr32(c, (RW(16) + 36), RW(2));
SET32(2, RW(0) + 77);
wr32(c, (RW(16) + 40), RW(3));
SET32(3, RW(0) + 78);
wr32(c, (RW(16) + 44), RW(2));
SET32(2, RW(0) + 79);
wr32(c, (RW(16) + 48), RW(3));
SET32(3, RW(0) + 94);
wr32(c, (RW(16) + 52), RW(2));
wr32(c, (RW(16) + 56), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A1280(Ctx *c) { /* func_002A1280 */
ENTER(0x2a1280);
SET32(2, RW(0) + 1); return;
}

void JP_F_002A1290(Ctx *c) { /* func_002A1290 */
ENTER(0x2a1290);
SET32(4, RW(4) + -4); { JP_F_002A0F90(c); return; }
}

void JP_F_002A12A0(Ctx *c) { /* func_002A12A0 */
ENTER(0x2a12a0);
SET32(4, RW(4) + -4); { JP_F_002A1130(c); return; }
}

void JP_F_002A12B0(Ctx *c) { /* func_002A12B0 */
ENTER(0x2a12b0);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x10000000);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(4, (s32)rd32(c, (RW(5) + 48)));
wr16(c, (RW(5) + 66), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(2); SET64(31, 0x2a12e4); SET64(16, RD(5) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x10000000);
SET64(2, RD(0) < RD(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(0) < RD(2));
SET64(5, rd16(c, (RW(16) + 66)));
SET64(3, (s32)rd32(c, (RW(17) + 192)));
SET32(4, RW(4) - RW(5));
wr16(c, (RW(16) + 64), (u16)RW(4));
SET64(4, rd16(c, (RW(16) + 64)));
SET32(3, RW(3) + RW(4));
wr32(c, (RW(17) + 192), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A1330(Ctx *c) { /* func_002A1330 */
ENTER(0x2a1330);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(5) + 48)));
SET64(31, 0x2a1348); SET64(16, RD(5) + RD(0)); JP_F_0027F1A8(c);
SET64(4, (s32)rd32(c, (RW(16) + 48)));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
SET64(5, RD(2) & 0xff);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 40)));
{ u32 t = RW(2); SET64(31, 0x2a1368);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A1380(Ctx *c) { /* func_002A1380 */
ENTER(0x2a1380);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(5) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 28)));
{ u32 t = RW(2); SET64(31, 0x2a13a0); SET64(16, RD(5) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 40)));
{ u32 t = RW(2); SET64(31, 0x2a13b4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
wr32(c, (RW(16) + 56), RW(0));
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 60), (u8)RW(0));
wr16(c, (RW(16) + 66), (u16)RW(0));
wr16(c, (RW(16) + 64), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A13E0(Ctx *c) { /* func_002A13E0 */
ENTER(0x2a13e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(5) + 48)));
SET64(31, 0x2a13f8); SET64(16, RD(5) + RD(0)); JP_F_00282CC0(c);
SET64(2, rd8(c, (RW(16) + 60)));
{ int t = RD(2) == RD(0);  if (t) goto L_002A140C; }
L_002A1404:;
SET32(2, RW(0) + 1); goto L_002A141C;
L_002A140C:;
SET64(31, 0x2a1414); SET64(4, (s32)rd32(c, (RW(16) + 48))); JP_F_00282EA8(c);
 { POLL(); goto L_002A1404; }
L_002A141C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A1430(Ctx *c) { /* func_002A1430 */
ENTER(0x2a1430);
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002A1440(Ctx *c) { /* func_002A1440 */
ENTER(0x2a1440);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
L_002A1454:;
SET64(4, RD(17) + RD(0));
L_002A1458:;
SET64(31, 0x2a1460); SET32(5, RW(0) + 16); JP_F_002AD840(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(16, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a1474); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) < RD(16));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_002A1458; } }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a1498); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002A1454; }
}

void JP_F_002A14A0(Ctx *c) { /* func_002A14A0 */
ENTER(0x2a14a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(28) + -30212)));
{ int t = RD(2) == RD(0); c->f[20].u = c->f[12].u; if (t) goto L_002A14CC; }
SET64(2, RD(0) + RD(0)); goto L_002A150C;
L_002A14CC:;
SET64(31, 0x2a14d4); SET32(4, RW(0) + 208); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002A14F4; }
SET64(5, RD(17) + RD(0));
SET64(4, RD(2) + RD(0));
c->f[12].u = c->f[20].u;
SET64(31, 0x2a14f0); SET32(6, RW(0) + 4096); JP_F_002A15E0(c);
SET64(16, RD(2) + RD(0));
L_002A14F4:;
SET64(31, 0x2a14fc); wr32(c, (RW(28) + -30212), RW(16)); JP_F_002ADAD0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2a1508); SET64(5, RD(16) + RD(0)); JP_F_002AD9C0(c);
SET32(2, RW(0) + 1);
L_002A150C:;
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A1530(Ctx *c) { /* func_002A1530 */
ENTER(0x2a1530);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A15C8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 3568);
SET32(3, RW(3) + 3584);
wr32(c, (RW(17) + 0), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 84), RW(3));
SET32(2, RW(2) + 3600);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 88), RW(2));
SET32(3, RW(3) + 3624);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 144), RW(3));
SET32(2, RW(2) + 3640);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 148), RW(2));
SET32(3, RW(3) + 3656);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 152), RW(3));
SET32(2, RW(2) + 3672);
SET64(31, 0x2a15a4); wr32(c, (RW(17) + 156), RW(2)); JP_F_0027EB38(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a15b0); SET64(5, RD(0) + RD(0)); JP_F_002ADB40(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A15CC; }
SET64(31, 0x2a15c8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A15C8:;
SET64(2, RD(17) + RD(0));
L_002A15CC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A15E0(Ctx *c) { /* func_002A15E0 */
ENTER(0x2a15e0);
SET32(29, RW(29) + -48);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET32(6, RW(0) + 33);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2a1604); c->f[20].u = c->f[12].u; JP_F_002ADBE0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 3568);
SET32(3, RW(3) + 3584);
wr32(c, (RW(16) + 0), RW(2));
SET32(4, RW(16) + 160);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 84), RW(3));
SET32(2, RW(2) + 3600);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 88), RW(2));
SET32(3, RW(3) + 3624);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 144), RW(3));
SET32(2, RW(2) + 3640);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 148), RW(2));
SET32(3, RW(3) + 3656);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 152), RW(3));
SET32(2, RW(2) + 3672);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(16) + 156), RW(2));
SET64(31, 0x2a1668); SET32(6, RW(0) + 32); JP_F_001273D0(c);
SET32(2, RW(0) + 1);
SET32(4, RW(16) + 160);
wr32(c, (RW(16) + 164), RW(2));
wr32(c, (RW(16) + 160), c->f[20].u);
wr32(c, (RW(16) + 168), RW(2));
SET64(31, 0x2a1684); wr32(c, (RW(16) + 172), RW(0)); JP_F_0027E798(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void JP_F_002A16A0(Ctx *c) { /* func_002A16A0 */
ENTER(0x2a16a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 24)));
{ int t = RSD(4) <= 0; SET64(17, RD(5) + RD(0)); if (t) goto L_002A1700; }
SET64(16, (s32)rd32(c, (RW(18) + 16)));
SET32(3, RW(4) + -1);
{ int t = RSD(4) <= 0; wr32(c, (RW(18) + 24), RW(3)); if (t) goto L_002A1700; }
L_002A16D4:;
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a16e8); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 24)));
SET32(16, RW(16) + 128);
SET32(3, RW(4) + -1);
{ int t = RSD(4) > 0; wr32(c, (RW(18) + 24), RW(3)); if (t) { POLL(); goto L_002A16D4; } }
L_002A1700:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A1720(Ctx *c) { /* func_002A1720 */
ENTER(0x2a1720);
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
SET64(3, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(3) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A18A8; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_002A18A8; }
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(3, (s32)rd32(c, (RW(21) + 20)));
SET64(1, RSD(3) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_002A17D0; }
SET64(4, (s32)rd32(c, (RW(21) + 16)));
{ int t = RD(4) == RD(0); SET64(5, (s64)(s32)0x2b0000); if (t) goto L_002A1798; }
SET64(31, 0x2a1790); SET32(5, RW(5) + 15024); JP_F_001022C0(c);
wr32(c, (RW(21) + 16), RW(0));
wr32(c, (RW(21) + 20), RW(0));
L_002A1798:;
SET64(16, (s32)rd32(c, (RW(17) + 16)));
SET32(2, RW(16) << 7);
wr32(c, (RW(21) + 20), RW(16));
SET64(31, 0x2a17ac); SET32(4, RW(2) + 16); JP_F_00100530(c);
SET64(5, (s64)(s32)0x2b0000);
SET64(6, (s64)(s32)0x2b0000);
SET64(8, RD(16) + RD(0));
SET64(4, RD(2) + RD(0));
SET32(5, RW(5) + 15120);
SET32(6, RW(6) + 15024);
SET64(31, 0x2a17cc); SET32(7, RW(0) + 128); JP_F_00102580(c);
wr32(c, (RW(21) + 16), RW(2));
L_002A17D0:;
SET64(5, (s32)rd32(c, (RW(17) + 16)));
SET64(3, (s32)rd32(c, (RW(17) + 8)));
SET64(4, (s32)rd32(c, (RW(17) + 12)));
div_s(c, 0, RSW(3), RSW(5));
SET64(16, c->lo.d[0]);
{ int t = RSD(4) >= 0; SET64(3, RD(4) & 0xf); if (t) goto L_002A17F8; }
{ int t = RD(3) == RD(0);  if (t) goto L_002A17F8; }
SET32(3, RW(3) + -16);
L_002A17F8:;
{ int t = RD(3) == RD(0);  if (t) goto L_002A1808; }
SET32(3, RW(3) + 16); goto L_002A180C;
L_002A1808:;
SET64(3, RD(0) + RD(0));
L_002A180C:;
SET32(22, RW(4) + RW(3));
SET64(20, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(21) + 24), RW(5));
mul_s(c, 0, 3, RSW(16), RSW(22));
SET64(1, RSD(0) < RSD(5));
SET64(19, RD(0) + RD(0));
{ int t = RD(1) == RD(0); SET32(23, RW(3) << 2); if (t) goto L_002A18A8; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
SET32(30, RW(29) + 164);
L_002A1838:;
SET32(2, RW(29) + 168);
SET64(6, (s32)rd32(c, (RW(21) + 12)));
wr32(c, (RW(2) + 0), RW(16));
SET64(5, RD(20) + RD(0));
SET32(2, RW(29) + 172);
wr32(c, (RW(29) + 160), RW(18));
wr32(c, (RW(2) + 0), RW(22));
SET64(8, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(21) + 16)));
SET32(9, RW(29) + 160);
wr32(c, (RW(30) + 0), RW(0));
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET32(4, RW(2) + RW(17));
SET64(2, (s32)rd32(c, (RW(6) + 8)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(2, RW(2) + -1);
SET32(2, RSW(2) >> 6);
SET32(6, RSW(3) >> 6);
SET64(31, 0x2a1888); SET32(7, RW(2) + 1); JP_F_002B3900(c);
SET64(3, (s32)rd32(c, (RW(21) + 24)));
SET32(19, RW(19) + 1);
SET32(20, RW(20) + RW(23));
SET32(18, RW(18) + RW(16));
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 128); if (t) { POLL(); goto L_002A1838; } }
L_002A18A8:;
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

void JP_F_002A18E0(Ctx *c) { /* func_002A18E0 */
ENTER(0x2a18e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A1948; }
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 3712);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 8), RW(2)); if (t) goto L_002A1924; }
SET64(5, (s64)(s32)0x2b0000);
SET64(31, 0x2a191c); SET32(5, RW(5) + 15024); JP_F_001022C0(c);
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 20), RW(0));
L_002A1924:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a1930); SET64(5, RD(0) + RD(0)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A194C; }
SET64(31, 0x2a1948); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A1948:;
SET64(2, RD(17) + RD(0));
L_002A194C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A1960(Ctx *c) { /* func_002A1960 */
ENTER(0x2a1960);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2a197c); SET64(16, RD(5) + RD(0)); JP_F_002B0400(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 12), RW(16));
SET32(2, RW(2) + 3712);
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 8), RW(2));
SET64(2, RD(17) + RD(0));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A19B0(Ctx *c) { /* func_002A19B0 */
ENTER(0x2a19b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(3) != RD(0);  if (t) goto L_002A19CC; }
L_002A19C4:;
SET64(31, rd64(c, (RW(29) + 0))); goto L_002A19DC;
L_002A19CC:;
SET64(31, 0x2a19d4); SET64(4, (s32)rd32(c, (RW(4) + 48))); JP_F_0027DE78(c);
 { POLL(); goto L_002A19C4; }
L_002A19DC:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002A19F0(Ctx *c) { /* func_002A19F0 */
ENTER(0x2a19f0);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x12000000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd64(c, (RW(2) + 4096)));
SET64(2, RD(2) & 0x2000);
{ int t = RD(2) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A1B10; }
L_002A1A20:;
SET64(16, (s32)rd32(c, (RW(28) + -30212)));
{ int t = RD(16) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002A1B08; }
SET64(4, (s32)rd32(c, (RW(19) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(2); SET64(31, 0x2a1a40);  rt_call(c, t); }
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 3); if (t) goto L_002A1B04; }
{ int t = RD(2) == RD(3);  if (t) goto L_002A1B04; }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_002A1A78; }
{ int t = RD(2) == RD(3);  if (t) goto L_002A1A78; }
{ int t = RD(2) == RD(0);  if (t) goto L_002A1B04; }
 goto L_002A1B04;
L_002A1A78:;
SET64(2, (s32)rd32(c, (RW(19) + 16)));
SET64(3, (s32)rd32(c, (RW(19) + 56)));
SET32(2, RW(2) + 1);
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) != RD(0); SET32(4, RW(0) + 20); if (t) goto L_002A1B04; }
SET64(31, 0x2a1a98);  JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002A1AF8; }
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_002A1AAC; }
SET32(17, RW(16) + 156);
L_002A1AAC:;
SET64(31, 0x2a1ab4); SET64(4, RD(18) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + 3776);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(19));
wr32(c, (RW(18) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 56)));
SET32(2, RW(2) + 1);
wr32(c, (RW(19) + 56), RW(2));
L_002A1AF8:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a1b04); SET64(5, RD(18) + RD(0)); JP_F_002AD930(c);
L_002A1B04:;
SET64(2, RD(0) + RD(0));
L_002A1B08:;
SET64(31, rd64(c, (RW(29) + 64))); goto L_002A1B28;
L_002A1B10:;
SET64(31, 0x2a1b18); SET64(4, (s32)rd32(c, (RW(19) + 48))); JP_F_0027D520(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) { POLL(); goto L_002A1A20; } }
SET64(31, rd64(c, (RW(29) + 64)));
L_002A1B28:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A1B40(Ctx *c) { /* func_002A1B40 */
ENTER(0x2a1b40);
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = RW(2);
c->fcc = F(12) <= F(2);
{ int t = c->fcc;  if (t) goto L_002A1B60; }
SET64(3, (s64)(s32)0x3f800000); goto L_002A1B84;
L_002A1B60:;
c->f[2].u = RW(0);
c->fcc = F(12) < F(2);
{ int t = !c->fcc;  if (t) goto L_002A1B7C; }
 goto L_002A1B80;
L_002A1B7C:;
c->f[2].u = c->f[12].u;
L_002A1B80:;
SET64(3, (s64)(s32)0x3f800000);
L_002A1B84:;
SET64(2, (s64)(s32)0x44700000);
c->f[1].u = RW(3);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
c->f[0].u = RW(2);
c->f[1].f = fpu(F(2) - F(1));
c->f[0].f = fpu(F(0) * F(1));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)c->f[0].u);
{ u32 t = RW(2);  switch (t) {  default: rt_jump(c, t); return; } }
}

void JP_F_002A1BC0(Ctx *c) { /* func_002A1BC0 */
ENTER(0x2a1bc0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(2); SET64(31, 0x2a1be4);  rt_call(c, t); }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_002A1C00; }
{ int t = RD(2) == RD(3);  if (t) goto L_002A1C00; }
SET64(2, RD(0) + RD(0)); goto L_002A1C14;
L_002A1C00:;
SET64(31, 0x2a1c08); SET64(4, (s32)rd32(c, (RW(16) + 48))); JP_F_0027F1A8(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) & 0xff);
L_002A1C14:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A1C30(Ctx *c) { /* func_002A1C30 */
ENTER(0x2a1c30);
SET64(2, (s32)rd32(c, (RW(4) + 56)));
SET64(2, RSD(0) < RSD(2));
SET64(2, RD(2) ^ 0x1); return;
}

void JP_F_002A1C40(Ctx *c) { /* func_002A1C40 */
ENTER(0x2a1c40);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(28) + -30212)));
{ int t = RD(16) == RD(0); SET64(19, RD(4) + RD(0)); if (t) goto L_002A1D2C; }
SET64(4, (s32)rd32(c, (RW(19) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(2); SET64(31, 0x2a1c78);  rt_call(c, t); }
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3); SET32(4, RW(0) + 20); if (t) goto L_002A1CB8; }
SET32(3, RW(0) + 3);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 2); if (t) goto L_002A1CB4; }
{ int t = RD(2) == RD(3);  if (t) goto L_002A1CB4; }
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_002A1CB4; }
{ int t = RD(2) == RD(0);  if (t) goto L_002A1D2C; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002A1D30;
L_002A1CB4:;
SET32(4, RW(0) + 20);
L_002A1CB8:;
SET64(31, 0x2a1cc0);  JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002A1D20; }
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_002A1CD4; }
SET32(17, RW(16) + 148);
L_002A1CD4:;
SET64(31, 0x2a1cdc); SET64(4, RD(18) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + 3808);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(19));
wr32(c, (RW(18) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 56)));
SET32(2, RW(2) + 1);
wr32(c, (RW(19) + 56), RW(2));
L_002A1D20:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a1d2c); SET64(5, RD(18) + RD(0)); JP_F_002AD930(c);
L_002A1D2C:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002A1D30:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A1D50(Ctx *c) { /* func_002A1D50 */
ENTER(0x2a1d50);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(28) + -30212)));
{ int t = RD(16) == RD(0); SET64(19, RD(4) + RD(0)); if (t) goto L_002A1E44; }
SET64(4, (s32)rd32(c, (RW(19) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(2); SET64(31, 0x2a1d88);  rt_call(c, t); }
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 3); if (t) goto L_002A1E44; }
{ int t = RD(2) == RD(3);  if (t) goto L_002A1E44; }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_002A1DC0; }
{ int t = RD(2) == RD(3);  if (t) goto L_002A1DC0; }
{ int t = RD(2) == RD(0);  if (t) goto L_002A1E44; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002A1E48;
L_002A1DC0:;
SET64(31, 0x2a1dc8); SET64(4, (s32)rd32(c, (RW(19) + 48))); JP_F_0027F1A8(c);
{ int t = RD(2) != RD(0); SET32(4, RW(0) + 20); if (t) goto L_002A1E44; }
SET64(31, 0x2a1dd8);  JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002A1E38; }
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_002A1DEC; }
SET32(17, RW(16) + 152);
L_002A1DEC:;
SET64(31, 0x2a1df4); SET64(4, RD(18) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + 3792);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(19));
wr32(c, (RW(18) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 56)));
SET32(2, RW(2) + 1);
wr32(c, (RW(19) + 56), RW(2));
L_002A1E38:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a1e44); SET64(5, RD(18) + RD(0)); JP_F_002AD930(c);
L_002A1E44:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002A1E48:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A1E60(Ctx *c) { /* func_002A1E60 */
ENTER(0x2a1e60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(2); SET64(31, 0x2a1e88); SET64(16, RD(5) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 3); if (t) goto L_002A1EF4; }
{ int t = RD(2) == RD(3);  if (t) goto L_002A1EF4; }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_002A1ED4; }
{ int t = RD(2) == RD(3);  if (t) goto L_002A1ED4; }
{ int t = RD(2) == RD(0);  if (t) goto L_002A1EC0; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A1EF8;
L_002A1EC0:;
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x2a1ecc); SET64(5, RD(16) & 0xff); JP_F_00282D50(c);
wr8(c, (RW(17) + 60), (u8)RW(16)); goto L_002A1EF4;
L_002A1ED4:;
{ int t = RD(16) != RD(0);  if (t) goto L_002A1EF4; }
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x2a1ee8); SET64(5, RD(0) + RD(0)); JP_F_00282D50(c);
SET64(31, 0x2a1ef0); SET64(4, (s32)rd32(c, (RW(17) + 48))); JP_F_00282EA8(c);
wr8(c, (RW(17) + 60), (u8)RW(0));
L_002A1EF4:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A1EF8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A1F10(Ctx *c) { /* func_002A1F10 */
ENTER(0x2a1f10);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, (s32)rd32(c, (RW(28) + -30212)));
{ int t = RD(17) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A2080; }
SET64(4, (s32)rd32(c, (RW(16) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(2); SET64(31, 0x2a1f48);  rt_call(c, t); }
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 3); if (t) goto L_002A2080; }
{ int t = RD(2) == RD(3);  if (t) goto L_002A2080; }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_002A1FFC; }
{ int t = RD(2) == RD(3);  if (t) goto L_002A1FFC; }
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 20); if (t) goto L_002A1F80; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002A2084;
L_002A1F80:;
SET64(31, 0x2a1f88);  JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002A1FE8; }
{ int t = RD(17) == RD(0); SET64(18, RD(17) + RD(0)); if (t) goto L_002A1F9C; }
SET32(18, RW(17) + 144);
L_002A1F9C:;
SET64(31, 0x2a1fa4); SET64(4, RD(19) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(19) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(19) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 0), RW(4));
SET32(2, RW(2) + 3824);
wr32(c, (RW(19) + 8), RW(18));
wr32(c, (RW(19) + 12), RW(3));
wr32(c, (RW(19) + 16), RW(16));
wr32(c, (RW(19) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 56)));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 56), RW(2));
L_002A1FE8:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a1ff4); SET64(5, RD(19) + RD(0)); JP_F_002AD930(c);
 goto L_002A2080;
L_002A1FFC:;
SET64(31, 0x2a2004); SET64(4, (s32)rd32(c, (RW(16) + 48))); JP_F_0027F1A8(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 20); if (t) goto L_002A2080; }
SET64(31, 0x2a2014);  JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002A2074; }
{ int t = RD(17) == RD(0); SET64(18, RD(17) + RD(0)); if (t) goto L_002A2028; }
SET32(18, RW(17) + 152);
L_002A2028:;
SET64(31, 0x2a2030); SET64(4, RD(19) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(19) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(19) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 0), RW(4));
SET32(2, RW(2) + 3792);
wr32(c, (RW(19) + 8), RW(18));
wr32(c, (RW(19) + 12), RW(3));
wr32(c, (RW(19) + 16), RW(16));
wr32(c, (RW(19) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 56)));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 56), RW(2));
L_002A2074:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a2080); SET64(5, RD(19) + RD(0)); JP_F_002AD930(c);
L_002A2080:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002A2084:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A20A0(Ctx *c) { /* func_002A20A0 */
ENTER(0x2a20a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a20c8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_002A211C; }
{ int t = RD(2) == RD(0); SET64(4, (s64)(s32)0x540000); if (t) goto L_002A20E4; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A2160;
L_002A20E4:;
SET64(31, 0x2a20ec); SET32(4, RW(4) + 752); JP_F_002A0F80(c);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a20fc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x2a2108); SET64(5, RD(2) + RD(0)); JP_F_00282C00(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2a2114); SET32(4, RW(4) + 752); JP_F_002A0F70(c);
 goto L_002A215C;
L_002A211C:;
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a212c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s64)(s32)0x540000);
SET64(16, RD(2) + RD(0));
SET64(31, 0x2a213c); SET32(4, RW(4) + 752); JP_F_002A0F80(c);
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET32(2, RW(16) >> 8);
SET64(5, RD(16) & 0xff);
SET64(31, 0x2a2150); SET64(6, RD(2) & 0xffff); JP_F_00282F08(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2a215c); SET32(4, RW(4) + 752); JP_F_002A0F70(c);
L_002A215C:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A2160:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A2170(Ctx *c) { /* func_002A2170 */
ENTER(0x2a2170);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A21F4; }
{ int t = RD(5) == RD(0); SET32(4, RW(0) + 20); if (t) goto L_002A21C8; }
wr32(c, (RW(16) + 52), RW(5));
L_002A2194:;
SET64(4, (s64)(s32)0x540000);
SET64(2, (s32)rd32(c, (RW(5) + 4)));
SET32(4, RW(4) + 752);
SET64(31, 0x2a21a8); wr32(c, (RW(16) + 24), RW(2)); JP_F_002A0F80(c);
SET64(31, 0x2a21b0); SET64(4, RD(16) + RD(0)); JP_F_0027C8E8(c);
SET64(4, (s64)(s32)0x540000);
wr32(c, (RW(16) + 48), RW(2));
SET64(31, 0x2a21c0); SET32(4, RW(4) + 752); JP_F_002A0F70(c);
SET32(2, RW(0) + 1); goto L_002A21F8;
L_002A21C8:;
SET64(31, 0x2a21d0);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_002A21EC; }
SET64(5, (s32)rd32(c, (RW(16) + 28)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x2a21e8); SET32(6, RW(0) + 128); JP_F_002AE380(c);
SET64(5, RD(2) + RD(0));
L_002A21EC:;
wr32(c, (RW(16) + 52), RW(5)); { POLL(); goto L_002A2194; }
L_002A21F4:;
SET64(2, RD(0) + RD(0));
L_002A21F8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A2210(Ctx *c) { /* func_002A2210 */
ENTER(0x2a2210);
SET64(2, (s32)rd32(c, (RW(4) + 28))); return;
}

void JP_F_002A2220(Ctx *c) { /* func_002A2220 */
ENTER(0x2a2220);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A22A8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x540000);
SET32(2, RW(2) + 3736);
SET32(4, RW(4) + 752);
SET64(31, 0x2a2254); wr32(c, (RW(17) + 68), RW(2)); JP_F_002A0F80(c);
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(2); SET64(31, 0x2a2268);  rt_call(c, t); }
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2a2274); SET32(4, RW(4) + 752); JP_F_002A0F70(c);
SET64(4, (s32)rd32(c, (RW(17) + 52)));
{ int t = RD(4) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_002A2294; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a2290); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_002A2294:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A22AC; }
SET64(31, 0x2a22a8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A22A8:;
SET64(2, RD(17) + RD(0));
L_002A22AC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A22C0(Ctx *c) { /* func_002A22C0 */
ENTER(0x2a22c0);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 48), RD(31));
SET32(2, RW(2) + 3736);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET32(6, RW(0) + 48);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[20].u = c->f[12].u;
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0));
SET64(5, RD(0) + RD(0));
wr32(c, (RW(4) + 56), RW(0));
wr32(c, (RW(4) + 68), RW(2));
wr8(c, (RW(4) + 60), (u8)RW(0));
wr16(c, (RW(4) + 66), (u16)RW(0));
SET64(31, 0x2a2310); wr16(c, (RW(4) + 64), (u16)RW(0)); JP_F_001273D0(c);
SET32(2, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(16) + 0), RW(2));
SET64(4, (s64)(s32)0x540000);
SET64(2, (s64)(s32)0x447a0000);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
c->f[1].u = RW(2);
SET32(4, RW(4) + 752);
wr32(c, (RW(16) + 32), RW(0));
c->f[0].f = fpu(F(1) * F(20));
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 8), RW(5));
wr32(c, (RW(16) + 12), RW(3));
c->f[0].f = fpu(F(1) * F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x2a235c); wr32(c, (RW(16) + 4), RW(2)); JP_F_002A0F60(c);
wr32(c, (RW(16) + 20), RW(2));
SET64(31, 0x2a2368); SET64(4, RD(16) + RD(0)); JP_F_0027B9C0(c);
wr32(c, (RW(16) + 28), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A2390(Ctx *c) { /* func_002A2390 */
ENTER(0x2a2390);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A23CC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 3752);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 136), RW(3)); if (t) goto L_002A23C8; }
SET64(31, 0x2a23c8);  JP_F_001004B0(c);
L_002A23C8:;
SET64(2, RD(16) + RD(0));
L_002A23CC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A23E0(Ctx *c) { /* func_002A23E0 */
ENTER(0x2a23e0);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 3752);
wr32(c, (RW(4) + 136), RW(2));
SET64(2, RD(4) + RD(0)); return;
}

static void JP_B_002A2400(Ctx *c, u32 entry) { /* func_002A2400 */
ENTER(entry);
switch (entry) { case 0x2a2420: goto L_002A2420; }
L_002A2400:;
SET64(5, (s32)rd32(c, (RW(4) + 16)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25);  switch (t) { case 0x2a2400: goto L_002A2400; case 0x2a2420: goto L_002A2420; default: rt_jump(c, t); return; } }
L_002A2420:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A247C; }
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 3776);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
SET32(2, RW(2) + -1);
SET64(31, 0x2a2460); wr32(c, (RW(3) + 56), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_002A2480; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a247c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002A247C:;
SET64(2, RD(16) + RD(0));
L_002A2480:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002A2400(Ctx *c) { JP_B_002A2400(c, 0x2a2400); }
void JP_F_002A2420(Ctx *c) { JP_B_002A2400(c, 0x2a2420); }

static void JP_B_002A24A0(Ctx *c, u32 entry) { /* func_002A24A0 */
ENTER(entry);
switch (entry) { case 0x2a24c0: goto L_002A24C0; }
L_002A24A0:;
SET64(5, (s32)rd32(c, (RW(4) + 16)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25);  switch (t) { case 0x2a24a0: goto L_002A24A0; case 0x2a24c0: goto L_002A24C0; default: rt_jump(c, t); return; } }
L_002A24C0:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A251C; }
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 3792);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
SET32(2, RW(2) + -1);
SET64(31, 0x2a2500); wr32(c, (RW(3) + 56), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_002A2520; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a251c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002A251C:;
SET64(2, RD(16) + RD(0));
L_002A2520:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002A24A0(Ctx *c) { JP_B_002A24A0(c, 0x2a24a0); }
void JP_F_002A24C0(Ctx *c) { JP_B_002A24A0(c, 0x2a24c0); }

static void JP_B_002A2540(Ctx *c, u32 entry) { /* func_002A2540 */
ENTER(entry);
switch (entry) { case 0x2a2560: goto L_002A2560; }
L_002A2540:;
SET64(5, (s32)rd32(c, (RW(4) + 16)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25);  switch (t) { case 0x2a2540: goto L_002A2540; case 0x2a2560: goto L_002A2560; default: rt_jump(c, t); return; } }
L_002A2560:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A25BC; }
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 3808);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
SET32(2, RW(2) + -1);
SET64(31, 0x2a25a0); wr32(c, (RW(3) + 56), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_002A25C0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a25bc); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002A25BC:;
SET64(2, RD(16) + RD(0));
L_002A25C0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002A2540(Ctx *c) { JP_B_002A2540(c, 0x2a2540); }
void JP_F_002A2560(Ctx *c) { JP_B_002A2540(c, 0x2a2560); }

static void JP_B_002A25E0(Ctx *c, u32 entry) { /* func_002A25E0 */
ENTER(entry);
switch (entry) { case 0x2a2600: goto L_002A2600; }
L_002A25E0:;
SET64(5, (s32)rd32(c, (RW(4) + 16)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25);  switch (t) { case 0x2a25e0: goto L_002A25E0; case 0x2a2600: goto L_002A2600; default: rt_jump(c, t); return; } }
L_002A2600:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A265C; }
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 3824);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
SET32(2, RW(2) + -1);
SET64(31, 0x2a2640); wr32(c, (RW(3) + 56), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_002A2660; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a265c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002A265C:;
SET64(2, RD(16) + RD(0));
L_002A2660:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002A25E0(Ctx *c) { JP_B_002A25E0(c, 0x2a25e0); }
void JP_F_002A2600(Ctx *c) { JP_B_002A25E0(c, 0x2a2600); }

void JP_F_002A2680(Ctx *c) { /* func_002A2680 */
ENTER(0x2a2680);
SET32(4, RW(4) + -32); { JP_F_002A1530(c); return; }
}

void JP_F_002A2690(Ctx *c) { /* func_002A2690 */
ENTER(0x2a2690);
SET32(4, RW(4) + -88); { JP_F_002A1430(c); return; }
}

void JP_F_002A26A0(Ctx *c) { /* func_002A26A0 */
ENTER(0x2a26a0);
SET32(4, RW(4) + -144); { JP_F_002A1430(c); return; }
}

void JP_F_002A26B0(Ctx *c) { /* func_002A26B0 */
ENTER(0x2a26b0);
SET32(4, RW(4) + -144); { JP_F_002A13E0(c); return; }
}

void JP_F_002A26C0(Ctx *c) { /* func_002A26C0 */
ENTER(0x2a26c0);
SET32(4, RW(4) + -148); { JP_F_002A1430(c); return; }
}

