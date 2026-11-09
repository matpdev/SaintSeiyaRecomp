#include "r5900.h"
#include "functab.h"

void JP_F_002A26D0(Ctx *c) { /* func_002A26D0 */
ENTER(0x2a26d0);
SET32(4, RW(4) + -148); { JP_F_002A1380(c); return; }
}

void JP_F_002A26E0(Ctx *c) { /* func_002A26E0 */
ENTER(0x2a26e0);
SET32(4, RW(4) + -152); { JP_F_002A1430(c); return; }
}

void JP_F_002A26F0(Ctx *c) { /* func_002A26F0 */
ENTER(0x2a26f0);
SET32(4, RW(4) + -152); { JP_F_002A1330(c); return; }
}

void JP_F_002A2700(Ctx *c) { /* func_002A2700 */
ENTER(0x2a2700);
SET32(4, RW(4) + -156); { JP_F_002A1430(c); return; }
}

void JP_F_002A2710(Ctx *c) { /* func_002A2710 */
ENTER(0x2a2710);
SET32(4, RW(4) + -156); { JP_F_002A12B0(c); return; }
}

void JP_F_002A2720(Ctx *c) { /* func_002A2720 */
ENTER(0x2a2720);
SET32(29, RW(29) + -48);
SET32(6, RW(0) + 16);
wr64(c, (RW(29) + 32), RD(31));
SET64(7, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(8, (s64)(s32)0x10000000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(5, (s64)(s32)0x4c0000);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a2754); SET32(5, RW(5) + -29072); JP_F_002B1A50(c);
SET64(3, (s64)(s32)0x1000000);
SET64(2, (s64)(s32)0x6c050000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 80);
SET64(6, RD(3) | 0x101);
SET64(31, 0x2a2770); SET64(7, RD(2) | 0x53); JP_F_002B1B30(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2a2780); SET32(6, RW(0) + 1); JP_F_002B1B80(c);
SET64(5, (s32)rd32(c, (RW(17) + 16)));
{ int t = RD(5) == RD(0);  if (t) goto L_002A2794; }
SET64(4, RD(16) + RD(0)); goto L_002A27A0;
L_002A2794:;
SET64(5, (s64)(s32)0x4c0000);
SET32(5, RW(5) + -29040);
SET64(4, RD(16) + RD(0));
L_002A27A0:;
SET64(31, 0x2a27a8); SET32(6, RW(0) + 4); JP_F_002B1B80(c);
SET64(5, (s64)(s32)0x4c0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -29056);
SET32(6, RW(0) + 16);
SET64(7, RD(0) + RD(0));
SET64(31, 0x2a27c4); SET64(8, RD(0) + RD(0)); JP_F_002B1A50(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A27E0(Ctx *c) { /* func_002A27E0 */
ENTER(0x2a27e0);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 16), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 0), RW(3));
wr32(c, (RW(4) + 4), RW(3));
wr32(c, (RW(4) + 8), RW(3));
wr32(c, (RW(4) + 12), RW(3)); return;
}

void JP_F_002A2800(Ctx *c) { /* func_002A2800 */
ENTER(0x2a2800);
SET32(29, RW(29) + -48);
SET32(6, RW(0) + 16);
wr64(c, (RW(29) + 32), RD(31));
SET64(7, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(8, (s64)(s32)0x11000000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(5, (s64)(s32)0x4c0000);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a2834); SET32(5, RW(5) + -29104); JP_F_002B1A50(c);
SET64(2, (s64)(s32)0x1000000);
SET64(5, RD(17) + RD(0));
SET64(7, RD(2) | 0x101);
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x6c060000);
SET32(6, RW(0) + 96);
SET64(31, 0x2a2854); SET64(8, RD(2) | 0x21); JP_F_002B1AB0(c);
SET64(5, (s64)(s32)0x4c0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -29088);
SET32(6, RW(0) + 16);
SET64(7, RD(0) + RD(0));
SET64(31, 0x2a2870); SET64(8, RD(0) + RD(0)); JP_F_002B1A50(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A2890(Ctx *c) { /* func_002A2890 */
ENTER(0x2a2890);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 4), RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 0), RW(2));
wr32(c, (RW(4) + 16), RW(2));
wr32(c, (RW(4) + 20), RW(2));
wr32(c, (RW(4) + 24), RW(2));
wr32(c, (RW(4) + 28), RW(2));
SET64(31, 0x2a28cc); SET32(4, RW(16) + 32); JP_F_002AF080(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A28E0(Ctx *c) { /* func_002A28E0 */
ENTER(0x2a28e0);
SET32(29, RW(29) + -48);
SET64(6, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(7, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(8, (s64)(s32)0x10000000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a2910); SET64(5, RD(0) + RD(0)); JP_F_002B1A50(c);
SET64(2, (s64)(s32)0x1000000);
SET64(4, RD(16) + RD(0));
SET64(7, RD(2) | 0x101);
SET64(5, RD(17) + RD(0));
SET64(2, (s64)(s32)0x6c0d0000);
SET32(6, RW(0) + 208);
SET64(31, 0x2a2930); SET64(8, RD(2) | 0x14); JP_F_002B1AB0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A2950(Ctx *c) { /* func_002A2950 */
ENTER(0x2a2950);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a2964); SET64(16, RD(4) + RD(0)); JP_F_002AF080(c);
SET64(31, 0x2a296c); SET32(4, RW(16) + 64); JP_F_002AF080(c);
SET32(3, RW(16) + 128);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(16) + 160);
L_002A2978:;
wr32(c, (RW(3) + 0), RW(0));
wr32(c, (RW(3) + 4), RW(0));
wr32(c, (RW(3) + 8), RW(0));
wr32(c, (RW(3) + 12), RW(2));
SET32(3, RW(3) + 16);
{ int t = RD(3) != RD(4);  if (t) { POLL(); goto L_002A2978; } }
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(16) + 192);
L_002A299C:;
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
SET32(4, RW(4) + 16);
{ int t = RD(4) != RD(2);  if (t) { POLL(); goto L_002A299C; } }
wr32(c, (RW(16) + 192), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 196), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A29E0(Ctx *c) { /* func_002A29E0 */
ENTER(0x2a29e0);
SET32(29, RW(29) + -48);
SET64(6, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(7, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(8, (s64)(s32)0x10000000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a2a10); SET64(5, RD(0) + RD(0)); JP_F_002B1A50(c);
SET64(2, (s64)(s32)0x1000000);
SET64(4, RD(16) + RD(0));
SET64(7, RD(2) | 0x101);
SET64(5, RD(17) + RD(0));
SET64(2, (s64)(s32)0x6c010000);
SET32(6, RW(0) + 16);
SET64(31, 0x2a2a30); SET64(8, RD(2) | 0x13); JP_F_002B1AB0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A2A50(Ctx *c) { /* func_002A2A50 */
ENTER(0x2a2a50);
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002A2A60(Ctx *c) { /* func_002A2A60 */
ENTER(0x2a2a60);
SET32(29, RW(29) + -48);
SET32(6, RW(0) + 16);
wr64(c, (RW(29) + 32), RD(31));
SET64(7, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(8, (s64)(s32)0x11000000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(5, (s64)(s32)0x4c0000);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a2a94); SET32(5, RW(5) + -29136); JP_F_002B1A50(c);
SET64(2, (s64)(s32)0x1000000);
SET64(5, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET32(6, RW(0) + 304);
SET64(7, RD(2) | 0x101);
SET64(31, 0x2a2ab0); SET64(8, (s64)(s32)0x6c130000); JP_F_002B1AB0(c);
SET64(5, (s64)(s32)0x4c0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -29120);
SET32(6, RW(0) + 16);
SET64(7, RD(0) + RD(0));
SET64(31, 0x2a2acc); SET64(8, RD(0) + RD(0)); JP_F_002B1A50(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A2AE0(Ctx *c) { /* func_002A2AE0 */
ENTER(0x2a2ae0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a2af4); SET64(16, RD(4) + RD(0)); JP_F_002AF080(c);
SET64(31, 0x2a2afc); SET32(4, RW(16) + 64); JP_F_002AF080(c);
SET64(31, 0x2a2b04); SET32(4, RW(16) + 128); JP_F_002AF080(c);
SET64(31, 0x2a2b0c); SET32(4, RW(16) + 192); JP_F_002AF080(c);
SET64(2, RD(0) | 0x8000);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 288), RW(2));
SET64(2, (s64)(s32)0x437f0000);
wr32(c, (RW(16) + 256), RW(0));
wr32(c, (RW(16) + 292), RW(2));
SET64(2, (s64)(s32)0xc5000000);
wr32(c, (RW(16) + 260), RW(0));
wr32(c, (RW(16) + 296), RW(2));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 264), RW(0));
wr32(c, (RW(16) + 268), RW(3));
wr32(c, (RW(16) + 272), RW(0));
wr32(c, (RW(16) + 276), RW(0));
wr32(c, (RW(16) + 280), RW(3));
wr32(c, (RW(16) + 284), RW(3));
wr32(c, (RW(16) + 300), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A2B60(Ctx *c) { /* func_002A2B60 */
ENTER(0x2a2b60);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 76)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A2C30; }
SET64(3, (s64)(s32)0x4c0000);
SET64(18, RD(0) + RD(0));
SET64(19, (s32)rd32(c, (RW(3) + -29840)));
{ int t = RD(4) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002A2C30; }
L_002A2B98:;
SET64(6, (s32)rd32(c, (RW(17) + 88)));
{ int t = RD(6) != RD(0);  if (t) goto L_002A2BD0; }
SET64(2, (s32)rd32(c, (RW(17) + 76)));
{ int t = RD(19) == RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_002A2BD0; }
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2a2bc4); SET64(8, (s64)(s32)0x11000000); JP_F_002B1A50(c);
SET64(19, (s32)rd32(c, (RW(17) + 76))); goto L_002A2BF0;
L_002A2BD0:;
SET64(5, (s32)rd32(c, (RW(17) + 84)));
{ int t = RD(18) == RD(5);  if (t) goto L_002A2BF0; }
SET64(7, (s32)rd32(c, (RW(17) + 76)));
SET64(31, 0x2a2be8); SET64(4, RD(16) + RD(0)); JP_F_002B19E0(c);
SET64(18, (s32)rd32(c, (RW(17) + 84)));
L_002A2BF0:;
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x2a2c04); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2a2c18); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 68)));
{ int t = RD(17) == RD(0);  if (t) goto L_002A2C28; }
SET32(17, RW(17) + -64);
L_002A2C28:;
{ int t = RD(17) != RD(0);  if (t) { POLL(); goto L_002A2B98; } }
L_002A2C30:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A2C50(Ctx *c) { /* func_002A2C50 */
ENTER(0x2a2c50);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 16);
SET64(4, RD(5) + RD(0));
SET64(7, RD(0) + RD(0));
SET32(5, RW(2) + 96);
SET64(8, RD(0) + RD(0)); { JP_F_002B1AB0(c); return; }
}

void JP_F_002A2C70(Ctx *c) { /* func_002A2C70 */
ENTER(0x2a2c70);
 return;
}

void JP_F_002A2C80(Ctx *c) { /* func_002A2C80 */
ENTER(0x2a2c80);
SET64(3, (s64)(s32)0x4c0000);
wr32(c, (RW(4) + 72), RW(5));
SET64(3, (s32)rd32(c, (RW(3) + -29856)));
wr32(c, (RW(4) + 80), RW(7));
SET64(1, RD(6) < RD(3));
{ int t = RD(1) == RD(0); wr32(c, (RW(4) + 76), RW(6)); if (t) goto L_002A2CA8; }
wr32(c, (RW(4) + 84), RW(0));
wr32(c, (RW(4) + 88), RW(0)); goto L_002A2CB0;
L_002A2CA8:;
wr32(c, (RW(4) + 84), RW(8));
wr32(c, (RW(4) + 88), RW(9));
L_002A2CB0:;
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(4) + 72)));
SET64(5, (s32)rd32(c, (RW(3) + -29840)));
SET64(7, (s64)(s32)0x14000000);
wr32(c, (RW(4) + 108), RW(0));
SET64(6, RD(6) | RD(7));
SET64(3, (s32)rd32(c, (RW(4) + 76)));
SET64(5, RD(5) | RD(7));
wr32(c, (RW(4) + 96), RW(6));
wr32(c, (RW(4) + 100), RW(5));
SET64(3, RD(3) | RD(7));
wr32(c, (RW(4) + 104), RW(3)); return;
}

void JP_F_002A2CF0(Ctx *c) { /* func_002A2CF0 */
ENTER(0x2a2cf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A2D54; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 3840);
SET32(2, RW(2) + 3880);
wr32(c, (RW(17) + 0), RW(3));
SET32(4, RW(17) + 64);
wr32(c, (RW(17) + 64), RW(2));
SET64(31, 0x2a2d30); SET64(5, RD(0) + RD(0)); JP_F_002AE8C0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a2d3c); SET64(5, RD(0) + RD(0)); JP_F_002A5FF0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A2D58; }
SET64(31, 0x2a2d54); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A2D54:;
SET64(2, RD(17) + RD(0));
L_002A2D58:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A2D70(Ctx *c) { /* func_002A2D70 */
ENTER(0x2a2d70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a2d88); SET64(16, RD(4) + RD(0)); JP_F_002A6100(c);
SET32(17, RW(16) + 64);
SET64(31, 0x2a2d94); SET64(4, RD(17) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 4), RW(0));
SET32(2, RW(2) + 5936);
wr32(c, (RW(16) + 80), RW(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 84), RW(0));
SET32(2, RW(2) + 3840);
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 3880);
wr32(c, (RW(16) + 64), RW(2));
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s32)rd32(c, (RW(2) + -29840)));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 72), RW(3));
wr32(c, (RW(16) + 76), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A2DF0(Ctx *c) { /* func_002A2DF0 */
ENTER(0x2a2df0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a2e0c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET32(4, RW(29) + 32);
SET64(2, (s32)rd32(c, (RW(16) + 48)));
wr128(c, (RW(2) + 128) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2a2e2c); wr128(c, (RW(2) + 144) & ~15u, &c->r[3]); JP_F_002AF080(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 104), RW(2));
SET32(5, RW(16) + 16);
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 96), RW(0));
SET64(31, 0x2a2e4c); wr32(c, (RW(29) + 100), RW(0)); JP_F_002AED70(c);
SET64(6, RD(2) + RD(0));
SET32(4, RW(29) + 112);
SET64(31, 0x2a2e5c); SET32(5, RW(29) + 96); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(16) + 48)));
wr128(c, (RW(2) + 160) & ~15u, &c->r[3]);
SET64(4, (s32)rd32(c, (RW(16) + 48)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a2e7c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002A2E90(Ctx *c) { /* func_002A2E90 */
ENTER(0x2a2e90);
SET32(29, RW(29) + -240);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, rd8(c, (RW(4) + 52)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A3068; }
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(29) + 208);
wr32(c, (RW(29) + 228), RW(2));
SET32(5, RW(16) + 32);
SET64(2, (s64)(s32)0x3f800000);
SET64(6, RD(16) + RD(0));
wr32(c, (RW(29) + 236), RW(2));
wr32(c, (RW(29) + 224), RW(0));
SET64(31, 0x2a2ed8); wr32(c, (RW(29) + 232), RW(0)); JP_F_002AFF90(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 208);
SET64(31, 0x2a2ee8); wr32(c, (RW(29) + 220), RW(2)); JP_F_002B0360(c);
SET32(4, RW(29) + 192);
SET32(5, RW(29) + 208);
SET64(31, 0x2a2ef8); SET32(6, RW(29) + 224); JP_F_002B0150(c);
SET64(31, 0x2a2f00); SET32(4, RW(29) + 192); JP_F_002B0360(c);
SET32(4, RW(29) + 176);
SET32(5, RW(29) + 208);
SET64(31, 0x2a2f10); SET32(6, RW(29) + 192); JP_F_002B0150(c);
SET64(31, 0x2a2f18); SET32(4, RW(29) + 176); JP_F_002B0360(c);
SET32(4, RW(29) + 208);
SET64(31, 0x2a2f24); SET64(5, RD(16) + RD(0)); JP_F_002B0230(c);
c->f[20].u = c->f[0].u ^ 0x80000000u;
SET32(4, RW(29) + 176);
SET64(31, 0x2a2f34); SET64(5, RD(16) + RD(0)); JP_F_002B0230(c);
c->f[21].u = c->f[0].u ^ 0x80000000u;
SET32(4, RW(29) + 192);
SET64(31, 0x2a2f44); SET64(5, RD(16) + RD(0)); JP_F_002B0230(c);
c->f[0].u = c->f[0].u ^ 0x80000000u;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 52), c->f[21].u);
wr32(c, (RW(29) + 60), RW(2));
wr32(c, (RW(29) + 48), c->f[0].u);
rd128(c, (RW(29) + 208) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 56), c->f[20].u);
SET32(4, RW(29) + 144);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
SET32(6, RW(29) + 128);
rd128(c, (RW(29) + 192) & ~15u, &c->r[7]);
c->f[1].u = RW(0);
rd128(c, (RW(29) + 176) & ~15u, &c->r[5]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]);
wr32(c, (RW(4) + 12), RW(0));
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
rd128(c, (RW(4) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[7]);
wr32(c, (RW(29) + 124), RW(0));
wr128(c, (RW(6) + 0) & ~15u, &c->r[5]);
wr32(c, (RW(6) + 12), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[4]);
c->f[13].u = rd32(c, (RW(29) + 96));
c->fcc = F(1) == F(13);
{ int t = !c->fcc; wr128(c, (RW(29) + 80) & ~15u, &c->r[3]); if (t) goto L_002A3010; }
c->f[0].u = rd32(c, (RW(29) + 100));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002A3010; }
c->f[13].u = rd32(c, (RW(29) + 64));
SET64(31, 0x2a2fd4); c->f[12].u = rd32(c, (RW(29) + 80)); JP_F_0011F8B0(c);
c->f[1].u = rd32(c, (RW(29) + 104));
SET64(3, (s64)(s32)0x40490000);
SET64(4, RD(3) | 0xfdb);
wr32(c, (RW(16) + 24), RW(0));
c->f[2].u = RW(4);
SET64(3, (s64)(s32)0x40000000);
wr32(c, (RW(16) + 16), c->f[0].u);
c->f[0].u = RW(3);
c->f[1].u = c->f[1].u ^ 0x80000000u;
c->f[1].f = fpu(F(2) * F(1));
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(16) + 20), c->f[0].u);
L_002A3008:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A306C;
L_002A3010:;
SET64(31, 0x2a3018); c->f[12].u = rd32(c, (RW(29) + 100)); JP_F_0011F8B0(c);
c->f[12].u = rd32(c, (RW(29) + 88));
c->f[13].u = rd32(c, (RW(29) + 72));
SET64(31, 0x2a3028); c->f[20].u = c->f[0].u; JP_F_0011F8B0(c);
c->f[1].u = rd32(c, (RW(29) + 104));
wr32(c, (RW(16) + 16), c->f[0].u);
c->f[0].u = RW(0);
c->fcc = F(0) == F(20);
{ int t = !c->fcc; c->f[12].u = c->f[1].u ^ 0x80000000u; if (t) goto L_002A304C; }
c->f[13].u = rd32(c, (RW(29) + 96)); goto L_002A3054;
L_002A304C:;
c->f[0].u = rd32(c, (RW(29) + 96));
c->f[13].u = c->f[0].u ^ 0x80000000u;
L_002A3054:;
SET64(31, 0x2a305c);  JP_F_0011F8B0(c);
wr32(c, (RW(16) + 20), c->f[0].u);
wr32(c, (RW(16) + 24), c->f[20].u); { POLL(); goto L_002A3008; }
L_002A3068:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A306C:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 240); return;
}

void JP_F_002A3080(Ctx *c) { /* func_002A3080 */
ENTER(0x2a3080);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A30BC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 3904);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 64), RW(3)); if (t) goto L_002A30B8; }
SET64(31, 0x2a30b8);  JP_F_001004B0(c);
L_002A30B8:;
SET64(2, RD(16) + RD(0));
L_002A30BC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A30D0(Ctx *c) { /* func_002A30D0 */
ENTER(0x2a30d0);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(2) + 3904);
wr32(c, (RW(4) + 48), RW(5));
wr32(c, (RW(4) + 64), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(3));
wr32(c, (RW(4) + 44), RW(3));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr8(c, (RW(4) + 52), (u8)RW(0)); return;
}

void JP_F_002A3120(Ctx *c) { /* func_002A3120 */
ENTER(0x2a3120);
 return;
}

void JP_F_002A3130(Ctx *c) { /* func_002A3130 */
ENTER(0x2a3130);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A316C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 3920);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 4), RW(3)); if (t) goto L_002A3168; }
SET64(31, 0x2a3168);  JP_F_001004B0(c);
L_002A3168:;
SET64(2, RD(16) + RD(0));
L_002A316C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A3180(Ctx *c) { /* func_002A3180 */
ENTER(0x2a3180);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 3920);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 0), RW(5));
SET64(16, RD(4) + RD(0));
{ int t = RD(5) == RD(0); wr32(c, (RW(4) + 4), RW(2)); if (t) goto L_002A31B4; }
SET64(4, RD(5) + RD(0));
SET32(6, RW(0) + -1);
SET64(31, 0x2a31b4); SET64(5, RD(16) + RD(0)); JP_F_002A32D0(c);
L_002A31B4:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A31D0(Ctx *c) { /* func_002A31D0 */
ENTER(0x2a31d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd8(c, (RW(4) + 36)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A3268; }
SET64(2, (s32)rd32(c, (RW(17) + 44)));
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002A3200; }
SET64(16, RD(2) + RD(0));
L_002A3200:;
SET64(31, 0x2a3208); SET64(5, RD(16) + RD(0)); JP_F_002A3670(c);
SET64(3, (s32)rd32(c, (RW(17) + 64)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
wr32(c, (RW(17) + 68), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 68)));
L_002A3218:;
{ int t = RSD(3) <= 0;  if (t) goto L_002A3260; }
SET64(5, (s32)rd32(c, (RW(17) + 64)));
SET32(4, RW(3) + -1);
SET32(3, RW(4) << 2);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(5) + RW(3));
wr32(c, (RW(17) + 68), RW(4));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
L_002A3240:;
{ int t = RD(4) == RD(0);  if (t) goto L_002A3268; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a3258); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 68))); { POLL(); goto L_002A3218; }
L_002A3260:;
SET64(4, RD(0) + RD(0)); { POLL(); goto L_002A3240; }
L_002A3268:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A3280(Ctx *c) { /* func_002A3280 */
ENTER(0x2a3280);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 72)));
SET64(31, 0x2a32a0); SET64(16, RD(5) + RD(0)); JP_F_002ADE40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002A32B8; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) != RD(17);  if (t) goto L_002A32B8; }
wr32(c, (RW(16) + 0), RW(0));
L_002A32B8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A32D0(Ctx *c) { /* func_002A32D0 */
ENTER(0x2a32d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(6) + RD(0));
{ int t = RSD(16) < 0; SET64(17, RD(5) + RD(0)); if (t) goto L_002A3320; }
SET64(4, (s32)rd32(c, (RW(18) + 64)));
SET64(2, (s32)rd32(c, (RW(4) + 16)));
SET64(1, RSD(16) < RSD(2));
{ int t = RD(1) == RD(0);  if (t) goto L_002A3320; }
L_002A3308:;
SET64(31, 0x2a3310); SET64(5, RD(17) + RD(0)); JP_F_002ADD30(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002A332C; }
SET64(31, rd64(c, (RW(29) + 48))); goto L_002A3344;
L_002A3320:;
SET64(4, (s32)rd32(c, (RW(18) + 64)));
SET64(16, (s32)rd32(c, (RW(4) + 16))); { POLL(); goto L_002A3308; }
L_002A332C:;
SET64(4, (s32)rd32(c, (RW(18) + 64)));
SET64(6, RD(16) + RD(0));
SET64(31, 0x2a333c); SET64(5, RD(17) + RD(0)); JP_F_002ADFE0(c);
wr32(c, (RW(17) + 0), RW(18));
SET64(31, rd64(c, (RW(29) + 48)));
L_002A3344:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A3360(Ctx *c) { /* func_002A3360 */
ENTER(0x2a3360);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A33C0; }
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(17) + 64);
SET32(3, RW(3) + 3936);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 4), RW(3)); if (t) goto L_002A339C; }
SET32(4, RW(17) + 76);
SET64(31, 0x2a339c); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
L_002A339C:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a33a8); SET64(5, RD(0) + RD(0)); JP_F_002A3830(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A33C4; }
SET64(31, 0x2a33c0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A33C0:;
SET64(2, RD(17) + RD(0));
L_002A33C4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A33E0(Ctx *c) { /* func_002A33E0 */
ENTER(0x2a33e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2a33f8); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002A38C0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(16, RW(17) + 64);
SET32(4, RW(16) + 12);
SET32(2, RW(2) + 3936);
wr32(c, (RW(17) + 4), RW(2));
SET32(5, RW(0) + 16);
wr32(c, (RW(17) + 64), RW(4));
SET32(6, RW(0) + 4);
SET64(31, 0x2a3420); wr32(c, (RW(17) + 72), RW(4)); JP_F_002AE1F0(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A3440(Ctx *c) { /* func_002A3440 */
ENTER(0x2a3440);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 44)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A3460; }
L_002A3458:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002A3480;
L_002A3460:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2a346c); SET32(4, RW(4) + 1264); JP_F_002A69E0(c);
SET64(5, (s32)rd32(c, (RW(16) + 44)));
SET64(31, 0x2a3478); SET64(4, RD(16) + RD(0)); JP_F_002A31D0(c);
 { POLL(); goto L_002A3458; }
L_002A3480:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A3490(Ctx *c) { /* func_002A3490 */
ENTER(0x2a3490);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 44)));
{ int t = RD(16) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002A34B4; }
SET64(31, 0x2a34b0); SET64(4, RD(16) + RD(0)); JP_F_002B0EE0(c);
SET64(2, RD(16) + RD(0));
L_002A34B4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A34D0(Ctx *c) { /* func_002A34D0 */
ENTER(0x2a34d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 36), (u8)RW(0));
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 44)));
{ int t = RD(4) == RD(0);  if (t) goto L_002A350C; }
{ int t = RD(4) == RD(0);  if (t) goto L_002A3508; }
SET64(25, (s32)rd32(c, (RW(4) + 52)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a3508); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A3508:;
wr32(c, (RW(16) + 44), RW(0));
L_002A350C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A3520(Ctx *c) { /* func_002A3520 */
ENTER(0x2a3520);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 44)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A3540; }
L_002A3538:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002A3588;
L_002A3540:;
SET64(31, 0x2a3548); SET32(4, RW(0) + 336); JP_F_00100670(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002A3560; }
SET64(3, (s32)rd32(c, (RW(28) + -29932)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x2a3560); SET32(5, RW(3) + 288); JP_F_002B1030(c);
L_002A3560:;
wr32(c, (RW(16) + 44), RW(2));
SET64(4, RD(2) + RD(0));
SET64(3, (s64)(s32)0x4c0000);
SET64(2, (s64)(s32)0x4c0000);
SET64(5, (s32)rd32(c, (RW(28) + -30208)));
SET64(7, (s32)rd32(c, (RW(2) + -29864)));
SET64(31, 0x2a3580); SET64(6, (s32)rd32(c, (RW(3) + -30368))); JP_F_002B1960(c);
 { POLL(); goto L_002A3538; }
L_002A3588:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A35A0(Ctx *c) { /* func_002A35A0 */
ENTER(0x2a35a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A35FC; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 3968);
wr32(c, (RW(17) + 4), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2a35d8);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a35e4); SET64(5, RD(0) + RD(0)); JP_F_002A3360(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A3600; }
SET64(31, 0x2a35fc); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A35FC:;
SET64(2, RD(17) + RD(0));
L_002A3600:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A3620(Ctx *c) { /* func_002A3620 */
ENTER(0x2a3620);
SET32(29, RW(29) + -32);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(5, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a363c); SET64(16, RD(4) + RD(0)); JP_F_002A33E0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(0) + 1);
SET32(2, RW(2) + 3968);
wr8(c, (RW(16) + 36), (u8)RW(3));
wr32(c, (RW(16) + 4), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A3670(Ctx *c) { /* func_002A3670 */
ENTER(0x2a3670);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd8(c, (RW(4) + 36)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A36B8; }
SET64(2, (s32)rd32(c, (RW(17) + 44)));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002A36A4; }
SET64(16, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
L_002A36A4:;
SET64(31, 0x2a36ac);  JP_F_002B12E0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a36b8); SET64(5, RD(16) + RD(0)); JP_F_002A3A90(c);
L_002A36B8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A36D0(Ctx *c) { /* func_002A36D0 */
ENTER(0x2a36d0);
SET32(29, RW(29) + -64);
SET64(6, (s32)rd32(c, (RW(5) + 4)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 52), RW(6));
wr32(c, (RW(4) + 48), RW(3));
SET64(4, (s32)rd32(c, (RW(4) + 44)));
{ int t = RD(4) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A3734; }
SET64(5, (s32)rd32(c, (RW(16) + 12)));
L_002A3704:;
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(4, (s32)rd32(c, (RW(17) + 44)));
wr32(c, (RW(17) + 60), RW(5));
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 56), RW(3)); if (t) goto L_002A3764; }
SET64(31, 0x2a3720); SET32(5, RW(17) + 48); JP_F_002B14A0(c);
SET64(4, (s32)rd32(c, (RW(17) + 44)));
SET64(31, 0x2a372c); SET32(5, RW(17) + 48); JP_F_002B1450(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A3768;
L_002A3734:;
wr32(c, (RW(29) + 56), RW(3));
SET32(5, RW(29) + 56);
SET64(31, 0x2a3744); wr32(c, (RW(29) + 60), RW(6)); JP_F_002B14E0(c);
SET64(4, (s32)rd32(c, (RW(17) + 44)));
SET64(31, 0x2a3750); SET32(5, RW(17) + 48); JP_F_002B14A0(c);
SET64(4, (s32)rd32(c, (RW(17) + 44)));
SET64(31, 0x2a375c); SET32(5, RW(17) + 48); JP_F_002B1450(c);
SET64(5, (s32)rd32(c, (RW(16) + 12))); { POLL(); goto L_002A3704; }
L_002A3764:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A3768:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A3780(Ctx *c) { /* func_002A3780 */
ENTER(0x2a3780);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 36), (u8)RW(0));
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 44)));
{ int t = RD(4) == RD(0);  if (t) goto L_002A37BC; }
{ int t = RD(4) == RD(0);  if (t) goto L_002A37B8; }
SET64(25, (s32)rd32(c, (RW(4) + 52)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a37b8); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A37B8:;
wr32(c, (RW(16) + 44), RW(0));
L_002A37BC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A37D0(Ctx *c) { /* func_002A37D0 */
ENTER(0x2a37d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 44)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A37F0; }
L_002A37E8:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002A3818;
L_002A37F0:;
SET64(31, 0x2a37f8); SET32(4, RW(0) + 336); JP_F_00100670(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0);  if (t) goto L_002A3810; }
SET64(31, 0x2a380c); SET64(5, (s32)rd32(c, (RW(16) + 40))); JP_F_002B0EA0(c);
SET64(4, RD(2) + RD(0));
L_002A3810:;
wr32(c, (RW(16) + 44), RW(4)); { POLL(); goto L_002A37E8; }
L_002A3818:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A3830(Ctx *c) { /* func_002A3830 */
ENTER(0x2a3830);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A38A4; }
SET64(4, (s32)rd32(c, (RW(17) + 44)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4000);
wr8(c, (RW(17) + 36), (u8)RW(0));
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 4), RW(2)); if (t) goto L_002A3880; }
{ int t = RD(4) == RD(0);  if (t) goto L_002A387C; }
SET64(25, (s32)rd32(c, (RW(4) + 52)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a387c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A387C:;
wr32(c, (RW(17) + 44), RW(0));
L_002A3880:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a388c); SET64(5, RD(0) + RD(0)); JP_F_002A3B10(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A38A8; }
SET64(31, 0x2a38a4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A38A4:;
SET64(2, RD(17) + RD(0));
L_002A38A8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A38C0(Ctx *c) { /* func_002A38C0 */
ENTER(0x2a38c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2a38dc); SET64(16, RD(6) + RD(0)); JP_F_002A3BF0(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 40), RW(16));
SET32(2, RW(2) + 4000);
wr32(c, (RW(17) + 44), RW(0));
wr32(c, (RW(17) + 4), RW(2));
SET64(2, RD(17) + RD(0));
wr32(c, (RW(17) + 48), RW(0));
wr32(c, (RW(17) + 52), RW(0));
wr32(c, (RW(17) + 56), RW(0));
wr32(c, (RW(17) + 60), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A3920(Ctx *c) { /* func_002A3920 */
ENTER(0x2a3920);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A3968; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 4032);
SET64(31, 0x2a3950); wr32(c, (RW(17) + 4), RW(2)); JP_F_002A3360(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A396C; }
SET64(31, 0x2a3968); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A3968:;
SET64(2, RD(17) + RD(0));
L_002A396C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A3980(Ctx *c) { /* func_002A3980 */
ENTER(0x2a3980);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(28) + -29956)));
{ int t = RD(5) == RD(0);  if (t) goto L_002A39C8; }
SET64(4, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_002A39A8; }
SET64(31, 0x2a39a8);  JP_F_002A3280(c);
L_002A39A8:;
SET64(4, (s32)rd32(c, (RW(28) + -29956)));
{ int t = RD(4) == RD(0);  if (t) goto L_002A39C4; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a39c4); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A39C4:;
wr32(c, (RW(28) + -29956), RW(0));
L_002A39C8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002A39E0(Ctx *c) { /* func_002A39E0 */
ENTER(0x2a39e0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(28) + -29956)));
{ int t = RD(3) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002A3A04; }
L_002A39FC:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A3A80;
L_002A3A04:;
SET64(31, 0x2a3a0c); SET32(4, RW(0) + 112); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002A3A30; }
SET64(5, (s32)rd32(c, (RW(28) + -29932)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a3a24); SET32(6, RW(0) + 4096); JP_F_002A33E0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4032);
wr32(c, (RW(16) + 4), RW(2));
L_002A3A30:;
wr32(c, (RW(28) + -29956), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a3a44); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(5, RW(29) + 48);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s32)rd32(c, (RW(28) + -29956)));
wr32(c, (RW(29) + 48), RW(0));
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 60), RW(3));
SET64(31, 0x2a3a68); wr32(c, (RW(29) + 56), RW(2)); JP_F_002A36D0(c);
SET64(3, (s32)rd32(c, (RW(28) + -29956)));
SET64(3, (s32)rd32(c, (RW(3) + 44)));
wr8(c, (RW(3) + 324), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(28) + -29956)));
wr8(c, (RW(3) + 36), (u8)RW(0)); { POLL(); goto L_002A39FC; }
L_002A3A80:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A3A90(Ctx *c) { /* func_002A3A90 */
ENTER(0x2a3a90);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd8(c, (RW(4) + 36)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A3AF0; }
SET64(3, (s32)rd32(c, (RW(17) + 8)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) <= 0; SET32(18, RW(3) + -1); if (t) goto L_002A3AF0; }
L_002A3AC4:;
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x2a3ad0); SET64(5, RD(18) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 8)));
SET64(4, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a3ae4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, RD(18) + RD(0));
{ int t = RSD(3) > 0; SET32(18, RW(18) + -1); if (t) { POLL(); goto L_002A3AC4; } }
L_002A3AF0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A3B10(Ctx *c) { /* func_002A3B10 */
ENTER(0x2a3b10);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A3B88; }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4064);
wr32(c, (RW(17) + 4), RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RSD(2) > 0; SET32(18, RW(2) + -1); if (t) goto L_002A3B94; }
SET32(2, RW(17) + 8);
L_002A3B50:;
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002A3B68; }
SET32(4, RW(17) + 12);
SET64(31, 0x2a3b64); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET64(4, RD(17) + RD(0));
L_002A3B68:;
SET64(31, 0x2a3b70); SET64(5, RD(0) + RD(0)); JP_F_002A3130(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A3B8C; }
SET64(31, 0x2a3b88); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A3B88:;
SET64(2, RD(17) + RD(0));
L_002A3B8C:;
SET64(31, rd64(c, (RW(29) + 48))); goto L_002A3BD4;
L_002A3B94:;
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x2a3ba0); SET64(5, RD(0) + RD(0)); JP_F_002ADF30(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002A3BC0; }
SET64(25, (s32)rd32(c, (RW(2) + 8)));
SET64(4, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a3bbc); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A3BC0:;
SET64(2, RD(18) + RD(0));
{ int t = RSD(2) > 0; SET32(18, RW(18) + -1); if (t) { POLL(); goto L_002A3B94; } }
SET32(2, RW(17) + 8); { POLL(); goto L_002A3B50; }
L_002A3BD4:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A3BF0(Ctx *c) { /* func_002A3BF0 */
ENTER(0x2a3bf0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a3c04); SET64(16, RD(4) + RD(0)); JP_F_002A3180(c);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(16) + 8);
SET32(3, RW(3) + 4064);
SET32(4, RW(2) + 4);
wr32(c, (RW(16) + 4), RW(3));
SET32(5, RW(0) + 32);
wr32(c, (RW(16) + 8), RW(4));
SET64(31, 0x2a3c28); SET64(6, RD(0) + RD(0)); JP_F_002AE1F0(c);
wr8(c, (RW(16) + 36), (u8)RW(0));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A3C40(Ctx *c) { /* func_002A3C40 */
ENTER(0x2a3c40);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 228)));
{ int t = RD(3) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A3D20; }
wr32(c, (RW(28) + -29952), RW(18));
SET64(2, (s32)rd32(c, (RW(18) + 236)));
{ int t = RD(2) == RD(0); SET32(4, RW(18) + 592); if (t) goto L_002A3C78; }
SET64(17, RD(2) + RD(0));
L_002A3C78:;
SET64(31, 0x2a3c80); SET64(5, RD(17) + RD(0)); JP_F_002A4F70(c);
SET32(4, RW(18) + 192);
SET64(31, 0x2a3c8c); SET64(5, RD(17) + RD(0)); JP_F_002A3670(c);
SET64(3, (s32)rd32(c, (RW(28) + -29948)));
{ int t = RD(3) == RD(18);  if (t) goto L_002A3C9C; }
wr32(c, (RW(28) + -29948), RW(18));
L_002A3C9C:;
SET64(3, (s32)rd32(c, (RW(18) + 560)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) <= 0;  if (t) goto L_002A3D20; }
SET64(25, (s32)rd32(c, (RW(18) + 176)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2a3cc0); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 560)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002A3D20; }
SET32(4, RW(29) + 64);
L_002A3CD8:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x2a3ce4); SET32(6, RW(18) + 320); JP_F_002AEAE0(c);
SET64(4, (s32)rd32(c, (RW(18) + 560)));
SET64(31, 0x2a3cf0); SET64(5, RD(16) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 144)));
SET64(4, RD(2) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2a3d08); SET32(6, RW(29) + 64); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 560)));
SET32(16, RW(16) + 1);
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0); SET32(4, RW(29) + 64); if (t) { POLL(); goto L_002A3CD8; } }
L_002A3D20:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002A3D40(Ctx *c) { /* func_002A3D40 */
ENTER(0x2a3d40);
rd128(c, (RW(4) + 32) & ~15u, &c->r[7]);
rd128(c, (RW(4) + 48) & ~15u, &c->r[6]);
rd128(c, (RW(4) + 64) & ~15u, &c->r[3]);
rd128(c, (RW(4) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(4) + 0) & ~15u, &c->r[9]);
rd128(c, (RW(4) + 16) & ~15u, &c->r[8]);
wr128(c, (RW(4) + 288) & ~15u, &c->r[7]);
wr128(c, (RW(4) + 304) & ~15u, &c->r[6]);
wr128(c, (RW(4) + 384) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 400) & ~15u, &c->r[2]);
rd128(c, (RW(4) + 96) & ~15u, &c->r[7]);
rd128(c, (RW(4) + 112) & ~15u, &c->r[6]);
rd128(c, (RW(4) + 128) & ~15u, &c->r[3]);
rd128(c, (RW(4) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 256) & ~15u, &c->r[9]);
wr128(c, (RW(4) + 272) & ~15u, &c->r[8]);
wr128(c, (RW(4) + 416) & ~15u, &c->r[7]);
wr128(c, (RW(4) + 432) & ~15u, &c->r[6]);
wr128(c, (RW(4) + 512) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 528) & ~15u, &c->r[2]);
SET32(4, RW(4) + 256); { JP_F_002A2A60(c); return; }
}

void JP_F_002A3DA0(Ctx *c) { /* func_002A3DA0 */
ENTER(0x2a3da0);
hle_widescreen_view(c);
SET32(29, RW(29) + -320);
SET64(2, (s64)(s32)0x3f000000);
wr64(c, (RW(29) + 112), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 96) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 60), c->f[27].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 56), c->f[26].u);
wr32(c, (RW(29) + 52), c->f[25].u);
wr32(c, (RW(29) + 48), c->f[24].u);
wr32(c, (RW(29) + 44), c->f[23].u);
wr32(c, (RW(29) + 40), c->f[22].u);
wr32(c, (RW(29) + 36), c->f[21].u);
wr32(c, (RW(29) + 32), c->f[20].u);
c->f[1].u = rd32(c, (RW(4) + 248));
c->f[25].u = c->f[14].u;
c->fcc = F(25) < F(0);
c->f[0].u = rd32(c, (RW(4) + 252));
c->f[20].u = c->f[19].u;
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[26].u = c->f[13].u;
c->f[1].f = fpu_div(F(1), F(26));
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[1].u = (u32)fpu_cvtw(F(1));
c->f[0].f = fpu_div(F(0), F(25));
c->f[27].u = c->f[12].u;
c->f[24].u = c->f[15].u;
c->f[23].u = c->f[16].u;
c->f[22].u = c->f[17].u;
c->f[21].u = c->f[18].u;
wr32(c, (RW(4) + 556), c->f[20].u);
SET64(17, (s32)c->f[1].u);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(18, (s32)c->f[0].u);
{ int t = !c->fcc;  if (t) goto L_002A3E40; }
SET32(18, RSW(18) >> 1);
L_002A3E40:;
c->f[1].u = RW(17);
SET32(4, RW(29) + 256);
c->f[0].u = RW(18);
c->f[13].f = (f32)(s32)c->f[1].u;
c->f[16].u = rd32(c, (RW(29) + 320));
c->f[14].f = (f32)(s32)c->f[0].u;
c->f[12].u = c->f[27].u;
SET64(31, 0x2a3e68); c->f[15].u = c->f[20].u; JP_F_002A6820(c);
c->f[0].u = RW(18);
rd128(c, (RW(29) + 256) & ~15u, &c->r[6]);
rd128(c, (RW(29) + 272) & ~15u, &c->r[5]);
c->f[1].u = RW(17);
c->f[16].f = (f32)(s32)c->f[0].u;
rd128(c, (RW(29) + 288) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET32(4, RW(29) + 192);
wr128(c, (RW(16) + 64) & ~15u, &c->r[6]);
wr128(c, (RW(16) + 80) & ~15u, &c->r[5]);
c->f[0].u = rd32(c, (RW(29) + 320));
wr128(c, (RW(16) + 96) & ~15u, &c->r[3]);
c->f[15].f = (f32)(s32)c->f[1].u;
wr128(c, (RW(16) + 112) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 0), c->f[21].u);
wr32(c, (RW(29) + 8), c->f[20].u);
c->f[12].u = c->f[27].u;
c->f[13].u = c->f[26].u;
c->f[14].u = c->f[25].u;
c->f[17].u = c->f[24].u;
c->f[18].u = c->f[23].u;
c->f[19].u = c->f[22].u;
SET64(31, 0x2a3ecc); wr32(c, (RW(29) + 16), c->f[0].u); JP_F_002A3F60(c);
rd128(c, (RW(29) + 192) & ~15u, &c->r[8]);
SET32(4, RW(29) + 128);
rd128(c, (RW(29) + 208) & ~15u, &c->r[7]);
SET32(5, RW(16) + 64);
rd128(c, (RW(29) + 224) & ~15u, &c->r[3]);
SET32(6, RW(16) + 448);
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 448) & ~15u, &c->r[8]);
wr128(c, (RW(16) + 464) & ~15u, &c->r[7]);
wr128(c, (RW(16) + 480) & ~15u, &c->r[3]);
SET64(31, 0x2a3efc); wr128(c, (RW(16) + 496) & ~15u, &c->r[2]); JP_F_002AEAE0(c);
rd128(c, (RW(29) + 128) & ~15u, &c->r[6]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 320) & ~15u, &c->r[6]);
wr128(c, (RW(16) + 336) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 352) & ~15u, &c->r[4]);
wr128(c, (RW(16) + 368) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 112)));
c->f[27].u = rd32(c, (RW(29) + 60));
rd128(c, (RW(29) + 96) & ~15u, &c->r[18]);
c->f[26].u = rd32(c, (RW(29) + 56));
rd128(c, (RW(29) + 80) & ~15u, &c->r[17]);
c->f[25].u = rd32(c, (RW(29) + 52));
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
c->f[24].u = rd32(c, (RW(29) + 48));
c->f[23].u = rd32(c, (RW(29) + 44));
c->f[22].u = rd32(c, (RW(29) + 40));
c->f[21].u = rd32(c, (RW(29) + 36));
c->f[20].u = rd32(c, (RW(29) + 32));
SET32(29, RW(29) + 320); return;
}

void JP_F_002A3F60(Ctx *c) { /* func_002A3F60 */
ENTER(0x2a3f60);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 28), c->f[27].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 24), c->f[26].u);
SET32(4, RW(29) + 64);
wr32(c, (RW(29) + 20), c->f[25].u);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[23].u = c->f[12].u;
c->f[27].u = c->f[13].u;
c->f[22].u = c->f[14].u;
c->f[26].u = c->f[15].u;
c->f[21].u = c->f[16].u;
c->f[25].u = c->f[17].u;
c->f[24].u = c->f[18].u;
SET64(31, 0x2a3fb8); c->f[20].u = c->f[19].u; JP_F_002AF080(c);
c->f[2].u = rd32(c, (RW(29) + 136));
SET32(5, RW(29) + 112);
SET64(3, (s64)(s32)0x3f800000);
SET32(7, RW(29) + 80);
c->f[0].f = fpu(F(23) * F(27));
SET64(4, (s64)(s32)0x40000000);
wr32(c, (RW(5) + 12), RW(3));
SET32(6, RW(29) + 96);
c->f[1].f = fpu(F(2) * F(26));
c->f[1].f = fpu_div(F(1), F(23));
c->f[0].f = fpu(F(1) * F(0));
c->f[0].f = fpu_div(F(0), F(2));
wr32(c, (RW(29) + 64), c->f[0].u);
c->f[0].f = fpu(F(2) * F(21));
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
c->f[1].f = fpu_div(F(0), F(23));
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]);
c->f[0].f = fpu(F(23) * F(22));
c->f[0].f = fpu(F(1) * F(0));
c->f[0].f = fpu_div(F(0), F(2));
wr32(c, (RW(7) + 4), c->f[0].u);
c->f[3].u = rd32(c, (RW(29) + 128));
rd128(c, (RW(7) + 0) & ~15u, &c->r[3]);
c->f[2].u = RW(4);
wr32(c, (RW(5) + 0), c->f[25].u);
wr32(c, (RW(5) + 4), c->f[24].u);
c->f[0].u = c->f[3].u ^ 0x80000000u;
wr128(c, (RW(16) + 16) & ~15u, &c->r[3]);
c->f[1].f = fpu(F(0) + F(20));
c->f[0].f = fpu(F(3) + F(20));
c->f[1].f = fpu_div(F(1), F(2));
c->f[0].f = fpu_div(F(0), F(2));
wr32(c, (RW(6) + 8), c->f[1].u);
wr32(c, (RW(5) + 8), c->f[0].u);
rd128(c, (RW(6) + 0) & ~15u, &c->r[4]);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[4]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[27].u = rd32(c, (RW(29) + 28));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[26].u = rd32(c, (RW(29) + 24));
c->f[25].u = rd32(c, (RW(29) + 20));
c->f[24].u = rd32(c, (RW(29) + 16));
c->f[23].u = rd32(c, (RW(29) + 12));
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 128); return;
}

void JP_F_002A4080(Ctx *c) { /* func_002A4080 */
ENTER(0x2a4080);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A4108; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4080);
SET32(2, RW(2) + 4096);
wr32(c, (RW(17) + 176), RW(3));
SET32(4, RW(17) + 592);
wr32(c, (RW(17) + 196), RW(2));
SET64(31, 0x2a40c0); SET32(5, RW(0) + -1); JP_F_002A5070(c);
SET32(2, RW(17) + 560);
{ int t = RD(2) == RD(0); SET32(4, RW(17) + 192); if (t) goto L_002A40DC; }
SET32(4, RW(17) + 564);
SET64(31, 0x2a40d8); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET32(4, RW(17) + 192);
L_002A40DC:;
SET64(31, 0x2a40e4); SET64(5, RD(0) + RD(0)); JP_F_002A3830(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a40f0); SET64(5, RD(0) + RD(0)); JP_F_002A6920(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A410C; }
SET64(31, 0x2a4108); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A4108:;
SET64(2, RD(17) + RD(0));
L_002A410C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A4120(Ctx *c) { /* func_002A4120 */
ENTER(0x2a4120);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2a4144); SET64(16, RD(6) + RD(0)); JP_F_002A6970(c);
SET64(5, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x2a4154); SET32(4, RW(18) + 192); JP_F_002A38C0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4080);
SET32(2, RW(2) + 4096);
wr32(c, (RW(18) + 176), RW(3));
SET32(4, RW(18) + 256);
SET64(31, 0x2a4174); wr32(c, (RW(18) + 196), RW(2)); JP_F_002A2AE0(c);
SET32(2, RW(18) + 560);
SET32(5, RW(0) + 16);
SET32(4, RW(2) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a418c); wr32(c, (RW(18) + 560), RW(4)); JP_F_002AE1F0(c);
SET64(31, 0x2a4194); SET32(4, RW(18) + 592); JP_F_002A50E0(c);
SET64(2, RD(18) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A41B0(Ctx *c) { /* func_002A41B0 */
ENTER(0x2a41b0);
SET32(4, RW(4) + -192); { JP_F_002A4080(c); return; }
}

void JP_F_002A41C0(Ctx *c) { /* func_002A41C0 */
ENTER(0x2a41c0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(4, (s32)rd32(c, (RW(5) + 28)));
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(6) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(31, 0x2a41fc); SET64(5, RD(0) + RD(0)); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(16, RD(16) & 0xffff);
SET64(17, RD(2) + RD(0));
SET64(31, 0x2a4210); SET64(5, RD(16) + RD(0)); JP_F_002ADD80(c);
c->f[12].u = rd32(c, (RW(17) + 28));
SET32(4, RW(29) + 144);
SET64(31, 0x2a4220); SET64(5, RD(2) + RD(0)); JP_F_002A4A20(c);
SET64(3, (s32)rd32(c, (RW(18) + 28)));
c->f[21].u = rd32(c, (RW(17) + 32));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(1, RSD(3) < (s64)2);
{ int t = RD(1) == RD(0); SET32(17, RW(0) + 1); if (t) goto L_002A4258; }
SET64(3, (s64)(s32)0x3f800000);
L_002A423C:;
wr32(c, (RW(19) + 0), RW(0));
wr32(c, (RW(19) + 12), RW(3));
wr32(c, (RW(19) + 4), RW(0));
wr32(c, (RW(19) + 8), RW(0));
rd128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr128(c, (RW(19) + 0) & ~15u, &c->r[3]); goto L_002A42E8;
L_002A4258:;
SET64(4, (s32)rd32(c, (RW(18) + 28)));
SET64(31, 0x2a4264); SET64(5, RD(17) + RD(0)); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(20, RD(2) + RD(0));
SET64(31, 0x2a4274); SET64(5, RD(16) + RD(0)); JP_F_002ADD80(c);
c->f[12].u = rd32(c, (RW(20) + 28));
SET32(4, RW(29) + 128);
SET64(31, 0x2a4284); SET64(5, RD(2) + RD(0)); JP_F_002A4A20(c);
c->f[20].u = rd32(c, (RW(20) + 32));
c->f[0].u = RW(0);
c->f[1].f = fpu(F(21) + F(20));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002A42C0; }
L_002A42A0:;
SET64(3, (s32)rd32(c, (RW(18) + 28)));
SET32(17, RW(17) + 1);
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); c->f[21].u = c->f[20].u; if (t) { POLL(); goto L_002A4258; } }
SET64(3, (s64)(s32)0x3f800000); { POLL(); goto L_002A423C; }
L_002A42C0:;
c->f[12].f = fpu_div(F(20), F(1));
SET32(4, RW(29) + 112);
SET32(5, RW(29) + 144);
SET64(31, 0x2a42dc); SET32(6, RW(29) + 128); JP_F_002AF660(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[3]); { POLL(); goto L_002A42A0; }
L_002A42E8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_002A4310(Ctx *c) { /* func_002A4310 */
ENTER(0x2a4310);
SET32(29, RW(29) + -176);
SET64(3, (s32)rd32(c, (RW(5) + 28)));
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 160), RW(0));
c->f[21].u = c->f[12].u;
wr32(c, (RW(29) + 164), RW(0));
wr32(c, (RW(29) + 168), RW(0));
wr32(c, (RW(29) + 172), RW(0));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) > 0; SET32(16, RW(3) + -1); if (t) goto L_002A436C; }
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
L_002A4364:;
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]); goto L_002A4400;
L_002A436C:;
SET64(19, RD(6) & 0xffff);
L_002A4370:;
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(31, 0x2a437c); SET64(5, RD(16) + RD(0)); JP_F_002ADD80(c);
c->f[20].u = rd32(c, (RW(2) + 32));
c->f[0].u = RW(0);
c->fcc = F(20) <= F(0);
{ int t = !c->fcc; SET64(20, RD(2) + RD(0)); if (t) goto L_002A43AC; }
L_002A4398:;
SET64(3, RD(16) + RD(0));
{ int t = RSD(3) > 0; SET32(16, RW(16) + -1); if (t) { POLL(); goto L_002A4370; } }
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]); { POLL(); goto L_002A4364; }
L_002A43AC:;
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x2a43b8); SET64(5, RD(19) + RD(0)); JP_F_002ADD80(c);
c->f[12].u = rd32(c, (RW(20) + 28));
SET64(5, RD(2) + RD(0));
SET64(31, 0x2a43c8); SET32(4, RW(29) + 112); JP_F_002A49B0(c);
c->f[12].u = c->f[20].u;
SET32(4, RW(29) + 128);
SET64(31, 0x2a43d8); SET32(5, RW(29) + 112); JP_F_002AFF20(c);
SET32(4, RW(29) + 144);
SET32(5, RW(29) + 128);
SET64(31, 0x2a43e8); c->f[12].u = c->f[21].u; JP_F_002AFEB0(c);
SET32(4, RW(29) + 160);
SET64(31, 0x2a43f4); SET32(5, RW(29) + 144); JP_F_002AFFF0(c);
 { POLL(); goto L_002A4398; }
L_002A4400:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002A4430(Ctx *c) { /* func_002A4430 */
ENTER(0x2a4430);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A44B0; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4136);
wr32(c, (RW(17) + 56), RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RSD(2) > 0;  if (t) goto L_002A44BC; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
L_002A446C:;
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RSD(2) > 0;  if (t) goto L_002A44E0; }
SET32(2, RW(17) + 28);
L_002A447C:;
{ int t = RD(2) != RD(0); SET32(4, RW(17) + 32); if (t) goto L_002A4504; }
L_002A4484:;
{ int t = RD(17) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_002A449C; }
SET32(4, RW(17) + 4);
SET64(31, 0x2a4498); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET64(2, RD(16) << 48);
L_002A449C:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A44B4; }
SET64(31, 0x2a44b0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A44B0:;
SET64(2, RD(17) + RD(0));
L_002A44B4:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A4514;
L_002A44BC:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2a44c8); SET64(5, RD(0) + RD(0)); JP_F_002ADF30(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RSD(2) > 0;  if (t) { POLL(); goto L_002A44BC; } }
SET64(2, (s32)rd32(c, (RW(17) + 28))); { POLL(); goto L_002A446C; }
L_002A44E0:;
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(31, 0x2a44ec); SET64(5, RD(0) + RD(0)); JP_F_002ADF30(c);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RSD(2) > 0;  if (t) { POLL(); goto L_002A44E0; } }
SET32(2, RW(17) + 28); { POLL(); goto L_002A447C; }
L_002A4504:;
SET64(31, 0x2a450c); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
 { POLL(); goto L_002A4484; }
L_002A4514:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A4530(Ctx *c) { /* func_002A4530 */
ENTER(0x2a4530);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(3, RW(3) + 4136);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, RD(0) + RD(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 56), RW(3));
SET32(2, RW(16) + 4);
wr32(c, (RW(4) + 0), RW(2));
SET64(31, 0x2a4560); SET64(4, RD(2) + RD(0)); JP_F_002AE1F0(c);
SET32(2, RW(16) + 28);
SET32(5, RW(0) + 16);
SET32(4, RW(2) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a4578); wr32(c, (RW(16) + 28), RW(4)); JP_F_002AE1F0(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A4590(Ctx *c) { /* func_002A4590 */
ENTER(0x2a4590);
c->f[0].u = rd32(c, (RW(4) + 28));
SET64(5, rd16(c, (RW(4) + 40)));
c->f[1].f = fpu(F(0) + F(12));
{ int t = RSD(5) < 0; wr32(c, (RW(4) + 28), c->f[1].u); if (t) goto L_002A45B0; }
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002A45CC;
L_002A45B0:;
SET32(3, RW(5) >> 1);
SET64(2, RD(5) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002A45CC:;
c->fcc = F(1) < F(0);
{ int t = c->fcc; SET64(2, RD(0) + RD(0)); if (t) goto L_002A465C; }
SET64(2, rd8(c, (RW(4) + 42)));
{ int t = RD(2) == RD(0);  if (t) goto L_002A4628; }
{ int t = RSD(5) < 0; c->f[1].u = rd32(c, (RW(4) + 28)); if (t) goto L_002A45F8; }
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002A4614;
L_002A45F8:;
SET32(3, RW(5) >> 1);
SET64(2, RD(5) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002A4614:;
c->f[1].f = fpu(F(1) - F(0));
c->f[0].u = rd32(c, (RW(4) + 36));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(4) + 28), c->f[0].u); goto L_002A4658;
L_002A4628:;
{ int t = RSD(5) < 0; SET32(3, RW(5) >> 1); if (t) goto L_002A463C; }
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002A4654;
L_002A463C:;
SET64(2, RD(5) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002A4654:;
wr32(c, (RW(4) + 28), c->f[0].u);
L_002A4658:;
SET32(2, RW(0) + 1);
L_002A465C:;
 return;
}

void JP_F_002A4670(Ctx *c) { /* func_002A4670 */
ENTER(0x2a4670);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A46D8; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4152);
wr32(c, (RW(17) + 44), RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RSD(2) > 0;  if (t) goto L_002A46E4; }
L_002A46AC:;
{ int t = RD(17) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_002A46C4; }
SET32(4, RW(17) + 4);
SET64(31, 0x2a46c0); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET64(2, RD(16) << 48);
L_002A46C4:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A46DC; }
SET64(31, 0x2a46d8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A46D8:;
SET64(2, RD(17) + RD(0));
L_002A46DC:;
SET64(31, rd64(c, (RW(29) + 48))); goto L_002A4740;
L_002A46E4:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2a46f0); SET64(5, RD(0) + RD(0)); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(18, RD(2) + RD(0));
SET64(31, 0x2a4700); SET64(5, RD(0) + RD(0)); JP_F_002ADF30(c);
SET64(2, rd8(c, (RW(17) + 43)));
{ int t = RD(2) == RD(0);  if (t) goto L_002A4728; }
{ int t = RD(18) == RD(0);  if (t) goto L_002A4728; }
SET64(25, (s32)rd32(c, (RW(18) + 12)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a4728); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A4728:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RSD(2) > 0;  if (t) { POLL(); goto L_002A46E4; } }
 { POLL(); goto L_002A46AC; }
L_002A4740:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A4760(Ctx *c) { /* func_002A4760 */
ENTER(0x2a4760);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 80), RD(31));
SET32(2, RW(2) + 4152);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(7) + RD(0));
wr32(c, (RW(4) + 44), RW(2));
c->f[20].u = c->f[12].u;
SET32(2, RW(19) + 4);
SET64(5, RD(8) + RD(0));
wr32(c, (RW(4) + 0), RW(2));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a47b4); SET64(4, RD(2) + RD(0)); JP_F_002AE1F0(c);
wr32(c, (RW(19) + 32), c->f[20].u);
wr16(c, (RW(19) + 40), (u16)RW(18));
wr8(c, (RW(19) + 42), (u8)RW(17));
SET64(2, RD(19) + RD(0));
wr8(c, (RW(19) + 43), (u8)RW(16));
wr32(c, (RW(19) + 28), RW(0));
wr32(c, (RW(19) + 36), RW(0));
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002A47F0(Ctx *c) { /* func_002A47F0 */
ENTER(0x2a47f0);
SET32(29, RW(29) + -336);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(5, (s32)rd32(c, (RW(5) + 0)));
wr32(c, (RW(29) + 0), c->f[20].u);
{ int t = RD(5) == RD(0); c->f[20].u = c->f[12].u; if (t) goto L_002A48D8; }
SET64(25, (s32)rd32(c, (RW(5) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a4828); SET32(4, RW(29) + 144); rt_call(c, t); }
SET32(3, RW(29) + 144);
L_002A482C:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 192), RW(0));
wr32(c, (RW(29) + 204), RW(2));
SET32(4, RW(29) + 272);
wr32(c, (RW(29) + 196), RW(0));
SET32(5, RW(29) + 192);
wr32(c, (RW(29) + 200), RW(0));
rd128(c, (RW(3) + 0) & ~15u, &c->r[2]);
SET64(31, 0x2a4854); wr128(c, (RW(29) + 192) & ~15u, &c->r[2]); JP_F_002AF7E0(c);
SET64(5, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(5) == RD(0); SET64(2, (s64)(s32)0x3f800000); if (t) goto L_002A48F4; }
SET64(25, (s32)rd32(c, (RW(5) + 16)));
SET32(4, RW(29) + 80);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a4874); c->f[12].u = c->f[20].u; rt_call(c, t); }
SET32(2, RW(29) + 80);
L_002A4878:;
rd128(c, (RW(2) + 0) & ~15u, &c->r[2]);
SET32(4, RW(29) + 208);
SET64(31, 0x2a4888); wr128(c, (RW(29) + 320) & ~15u, &c->r[2]); JP_F_002AF080(c);
SET64(5, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(5) == RD(0); SET64(2, (s64)(s32)0x3f800000); if (t) goto L_002A490C; }
SET64(25, (s32)rd32(c, (RW(5) + 16)));
c->f[12].u = c->f[20].u;
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a48a8); SET32(4, RW(29) + 112); rt_call(c, t); }
SET32(3, RW(29) + 112);
L_002A48AC:;
rd128(c, (RW(3) + 0) & ~15u, &c->r[2]);
SET32(4, RW(29) + 208);
SET32(5, RW(29) + 160);
SET64(31, 0x2a48c0); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); JP_F_002AEB90(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 208);
SET64(31, 0x2a48d0); SET32(6, RW(29) + 272); JP_F_002AEAE0(c);
SET64(31, rd64(c, (RW(29) + 48))); goto L_002A4924;
L_002A48D8:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 140), RW(2));
SET32(3, RW(29) + 128);
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0)); { POLL(); goto L_002A482C; }
L_002A48F4:;
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 76), RW(2));
SET32(2, RW(29) + 64);
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 72), RW(0)); { POLL(); goto L_002A4878; }
L_002A490C:;
SET32(3, RW(29) + 96);
wr32(c, (RW(29) + 96), RW(2));
wr32(c, (RW(29) + 100), RW(2));
wr32(c, (RW(29) + 104), RW(2));
wr32(c, (RW(29) + 108), RW(2)); { POLL(); goto L_002A48AC; }
L_002A4924:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 336); return;
}

void JP_F_002A4940(Ctx *c) { /* func_002A4940 */
ENTER(0x2a4940);
SET32(29, RW(29) + -64);
SET64(5, (s32)rd32(c, (RW(5) + 8)));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A4978; }
SET64(25, (s32)rd32(c, (RW(5) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a4968); SET32(4, RW(29) + 48); rt_call(c, t); }
SET32(4, RW(29) + 48);
L_002A496C:;
rd128(c, (RW(4) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]); goto L_002A4994;
L_002A4978:;
SET64(3, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 32), RW(3));
wr32(c, (RW(29) + 36), RW(3));
wr32(c, (RW(29) + 40), RW(3));
wr32(c, (RW(29) + 44), RW(3)); { POLL(); goto L_002A496C; }
L_002A4994:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A49B0(Ctx *c) { /* func_002A49B0 */
ENTER(0x2a49b0);
SET32(29, RW(29) + -64);
SET64(5, (s32)rd32(c, (RW(5) + 4)));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A49E8; }
SET64(25, (s32)rd32(c, (RW(5) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a49d8); SET32(4, RW(29) + 48); rt_call(c, t); }
SET32(3, RW(29) + 48);
L_002A49DC:;
rd128(c, (RW(3) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]); goto L_002A4A04;
L_002A49E8:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 44), RW(3));
SET32(3, RW(29) + 32);
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0)); { POLL(); goto L_002A49DC; }
L_002A4A04:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A4A20(Ctx *c) { /* func_002A4A20 */
ENTER(0x2a4a20);
SET32(29, RW(29) + -64);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A4A6C; }
SET64(25, (s32)rd32(c, (RW(5) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a4a48); SET32(4, RW(29) + 48); rt_call(c, t); }
SET32(4, RW(29) + 48);
L_002A4A4C:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 12), RW(3));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 8), RW(0));
rd128(c, (RW(4) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]); goto L_002A4A88;
L_002A4A6C:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 44), RW(3));
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0)); { POLL(); goto L_002A4A4C; }
L_002A4A88:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A4AA0(Ctx *c) { /* func_002A4AA0 */
ENTER(0x2a4aa0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_002A4AD8; }
{ int t = RD(4) == RD(0);  if (t) goto L_002A4AD4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a4ad4); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A4AD4:;
wr32(c, (RW(16) + 0), RW(0));
L_002A4AD8:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(4) == RD(0);  if (t) goto L_002A4B00; }
{ int t = RD(4) == RD(0);  if (t) goto L_002A4AFC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a4afc); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A4AFC:;
wr32(c, (RW(16) + 4), RW(0));
L_002A4B00:;
SET64(4, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(4) == RD(0);  if (t) goto L_002A4B28; }
{ int t = RD(4) == RD(0);  if (t) goto L_002A4B24; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a4b24); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A4B24:;
wr32(c, (RW(16) + 8), RW(0));
L_002A4B28:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A4B40(Ctx *c) { /* func_002A4B40 */
ENTER(0x2a4b40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A4BF4; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4168);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 12), RW(2)); if (t) goto L_002A4B8C; }
{ int t = RD(4) == RD(0);  if (t) goto L_002A4B88; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a4b88); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A4B88:;
wr32(c, (RW(17) + 0), RW(0));
L_002A4B8C:;
SET64(4, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(4) == RD(0);  if (t) goto L_002A4BB4; }
{ int t = RD(4) == RD(0);  if (t) goto L_002A4BB0; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a4bb0); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A4BB0:;
wr32(c, (RW(17) + 4), RW(0));
L_002A4BB4:;
SET64(4, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(4) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_002A4BE0; }
{ int t = RD(4) == RD(0);  if (t) goto L_002A4BD8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a4bd8); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A4BD8:;
wr32(c, (RW(17) + 8), RW(0));
SET64(2, RD(16) << 48);
L_002A4BE0:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A4BF8; }
SET64(31, 0x2a4bf4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A4BF4:;
SET64(2, RD(17) + RD(0));
L_002A4BF8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A4C10(Ctx *c) { /* func_002A4C10 */
ENTER(0x2a4c10);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 0), RW(0));
SET32(2, RW(2) + 4168);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 12), RW(2));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(0)); return;
}

void JP_F_002A4C30(Ctx *c) { /* func_002A4C30 */
ENTER(0x2a4c30);
 return;
}

void JP_F_002A4C40(Ctx *c) { /* func_002A4C40 */
ENTER(0x2a4c40);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 140)));
SET64(3, RD(3) & 0x2);
{ int t = RD(3) != RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_002A4CC0; }
L_002A4C68:;
SET64(3, (s32)rd32(c, (RW(17) + 132)));
{ int t = RD(3) == RD(0);  if (t) goto L_002A4CB8; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) <= 0; SET32(18, RW(3) + -1); if (t) goto L_002A4CB8; }
L_002A4C84:;
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2a4c94); SET64(5, RD(18) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 144)));
SET64(4, RD(2) + RD(0));
SET32(5, RW(17) + 64);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a4cac); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, RD(18) + RD(0));
{ int t = RSD(3) > 0; SET32(18, RW(18) + -1); if (t) { POLL(); goto L_002A4C84; } }
L_002A4CB8:;
SET64(31, rd64(c, (RW(29) + 48))); goto L_002A4D04;
L_002A4CC0:;
SET64(6, RD(5) + RD(0));
SET32(4, RW(29) + 64);
SET64(31, 0x2a4cd0); SET64(5, RD(17) + RD(0)); JP_F_002AEAE0(c);
SET64(4, (s32)rd32(c, (RW(17) + 140)));
SET32(3, RW(0) + -3);
rd128(c, (RW(29) + 64) & ~15u, &c->r[8]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[7]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[6]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[5]);
SET64(3, RD(4) & RD(3));
wr128(c, (RW(17) + 64) & ~15u, &c->r[8]);
wr128(c, (RW(17) + 80) & ~15u, &c->r[7]);
wr128(c, (RW(17) + 96) & ~15u, &c->r[6]);
wr128(c, (RW(17) + 112) & ~15u, &c->r[5]);
wr32(c, (RW(17) + 140), RW(3)); { POLL(); goto L_002A4C68; }
L_002A4D04:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002A4D20(Ctx *c) { /* func_002A4D20 */
ENTER(0x2a4d20);
SET32(29, RW(29) + -48);
c->f[3].u = rd32(c, (RW(5) + 60));
wr64(c, (RW(29) + 16), RD(31));
c->f[2].u = rd32(c, (RW(5) + 44));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[1].u = rd32(c, (RW(5) + 28));
SET64(16, RD(4) + RD(0));
c->f[0].u = rd32(c, (RW(5) + 12));
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 44), c->f[3].u);
wr32(c, (RW(29) + 40), c->f[2].u);
wr32(c, (RW(29) + 36), c->f[1].u);
wr32(c, (RW(29) + 32), c->f[0].u);
SET64(31, 0x2a4d5c); SET32(5, RW(16) + 112); JP_F_002B01C0(c);
wr32(c, (RW(16) + 136), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A4D70(Ctx *c) { /* func_002A4D70 */
ENTER(0x2a4d70);
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
SET64(5, (s32)rd32(c, (RW(4) + 140)));
SET64(3, (s32)rd32(c, (RW(4) + 132)));
wr32(c, (RW(29) + 172), RW(4));
SET64(5, RD(5) | 0x2);
{ int t = RD(3) == RD(0); wr32(c, (RW(4) + 140), RW(5)); if (t) goto L_002A4F10; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) <= 0; SET32(22, RW(3) + -1); if (t) goto L_002A4F10; }
L_002A4DC4:;
SET64(2, (s32)rd32(c, (RW(29) + 172)));
SET64(2, (s32)rd32(c, (RW(2) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2a4dd8); SET64(5, RD(22) + RD(0)); JP_F_002ADD80(c);
SET64(3, (s32)rd32(c, (RW(2) + 140)));
SET64(3, RD(3) | 0x2);
wr32(c, (RW(2) + 140), RW(3));
SET64(3, (s32)rd32(c, (RW(2) + 132)));
{ int t = RD(3) == RD(0); SET64(30, RD(2) + RD(0)); if (t) goto L_002A4F00; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) <= 0; SET32(21, RW(3) + -1); if (t) goto L_002A4F00; }
L_002A4E00:;
SET64(2, (s32)rd32(c, (RW(30) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2a4e10); SET64(5, RD(21) + RD(0)); JP_F_002ADD80(c);
SET64(3, (s32)rd32(c, (RW(2) + 140)));
SET64(3, RD(3) | 0x2);
wr32(c, (RW(2) + 140), RW(3));
SET64(3, (s32)rd32(c, (RW(2) + 132)));
{ int t = RD(3) == RD(0); SET64(23, RD(2) + RD(0)); if (t) goto L_002A4EF0; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) <= 0; SET32(20, RW(3) + -1); if (t) goto L_002A4EF0; }
L_002A4E38:;
SET64(2, (s32)rd32(c, (RW(23) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2a4e48); SET64(5, RD(20) + RD(0)); JP_F_002ADD80(c);
SET64(3, (s32)rd32(c, (RW(2) + 140)));
SET64(3, RD(3) | 0x2);
wr32(c, (RW(2) + 140), RW(3));
SET64(3, (s32)rd32(c, (RW(2) + 132)));
{ int t = RD(3) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002A4EE0; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) <= 0; SET32(19, RW(3) + -1); if (t) goto L_002A4EE0; }
L_002A4E70:;
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(31, 0x2a4e7c); SET64(5, RD(19) + RD(0)); JP_F_002A4F60(c);
SET64(18, RD(2) + RD(0));
SET32(5, RW(0) + 2);
SET64(31, 0x2a4e8c); SET64(4, RD(18) + RD(0)); JP_F_002A4F50(c);
SET64(3, (s32)rd32(c, (RW(18) + 132)));
{ int t = RD(3) == RD(0);  if (t) goto L_002A4ED0; }
SET64(31, 0x2a4ea0); SET64(4, (s32)rd32(c, (RW(3) + 0))); JP_F_002A4F40(c);
SET64(17, RD(2) + RD(0));
SET64(3, RD(17) + RD(0));
{ int t = RSD(3) <= 0; SET32(17, RW(3) + -1); if (t) goto L_002A4ED0; }
L_002A4EB0:;
SET64(4, (s32)rd32(c, (RW(18) + 132)));
SET64(31, 0x2a4ebc); SET64(5, RD(17) + RD(0)); JP_F_002A4F60(c);
SET64(31, 0x2a4ec4); SET64(4, RD(2) + RD(0)); JP_F_002A4D70(c);
SET64(3, RD(17) + RD(0));
{ int t = RSD(3) > 0; SET32(17, RW(17) + -1); if (t) { POLL(); goto L_002A4EB0; } }
L_002A4ED0:;
SET64(3, RD(19) + RD(0));
{ int t = RSD(3) > 0; SET32(19, RW(19) + -1); if (t) { POLL(); goto L_002A4E70; } }
L_002A4EE0:;
SET64(3, RD(20) + RD(0));
{ int t = RSD(3) > 0; SET32(20, RW(20) + -1); if (t) { POLL(); goto L_002A4E38; } }
L_002A4EF0:;
SET64(3, RD(21) + RD(0));
{ int t = RSD(3) > 0; SET32(21, RW(21) + -1); if (t) { POLL(); goto L_002A4E00; } }
L_002A4F00:;
SET64(3, RD(22) + RD(0));
{ int t = RSD(3) > 0; SET32(22, RW(22) + -1); if (t) { POLL(); goto L_002A4DC4; } }
L_002A4F10:;
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

void JP_F_002A4F40(Ctx *c) { /* func_002A4F40 */
ENTER(0x2a4f40);
SET64(2, (s32)rd32(c, (RW(4) + 16))); return;
}

void JP_F_002A4F50(Ctx *c) { /* func_002A4F50 */
ENTER(0x2a4f50);
SET64(3, (s32)rd32(c, (RW(4) + 140)));
SET64(3, RD(3) | RD(5));
wr32(c, (RW(4) + 140), RW(3)); return;
}

void JP_F_002A4F60(Ctx *c) { /* func_002A4F60 */
ENTER(0x2a4f60);
SET64(4, (s32)rd32(c, (RW(4) + 0))); { JP_F_002ADD80(c); return; }
}

void JP_F_002A4F70(Ctx *c) { /* func_002A4F70 */
ENTER(0x2a4f70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 24)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a4f98); SET32(4, RW(17) + 16); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a4fa4); SET64(5, RD(16) + RD(0)); JP_F_002A29E0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A4FC0(Ctx *c) { /* func_002A4FC0 */
ENTER(0x2a4fc0);
SET32(29, RW(29) + -48);
SET64(2, rd8(c, (RW(5) + 0)));
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 12), c->f[23].u);
SET64(6, rd8(c, (RW(5) + 1)));
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(7, rd8(c, (RW(5) + 2)));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET32(4, RW(16) + 16);
c->f[23].u = c->f[12].u;
c->f[22].u = c->f[13].u;
c->f[21].u = c->f[14].u;
c->f[20].u = c->f[15].u;
SET64(31, 0x2a5008); SET64(5, RD(2) + RD(0)); JP_F_002B3BC0(c);
c->f[2].f = fpu(F(21) - F(20));
SET64(3, (s64)(s32)0x3f000000);
c->f[1].f = fpu(F(22) + F(23));
c->f[2].f = fpu(F(2) * F(1));
c->f[4].f = fpu(F(22) - F(23));
c->f[3].f = fpu_div(F(2), F(4));
c->f[2].f = fpu(F(21) + F(20));
c->f[2].f = fpu(F(2) + F(3));
c->f[0].u = RW(3);
c->f[1].f = fpu(F(22) * F(23));
c->f[2].f = fpu(F(0) * F(2));
c->f[0].f = fpu(F(20) - F(21));
c->f[0].f = fpu(F(1) * F(0));
c->f[0].f = fpu_div(F(0), F(4));
wr32(c, (RW(16) + 8), c->f[2].u);
wr32(c, (RW(16) + 12), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5070(Ctx *c) { /* func_002A5070 */
ENTER(0x2a5070);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A50BC; }
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(17) + 16);
SET32(2, RW(2) + 4184);
SET32(5, RW(0) + -1);
SET64(31, 0x2a50a4); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B3BF0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A50C0; }
SET64(31, 0x2a50bc); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A50BC:;
SET64(2, RD(17) + RD(0));
L_002A50C0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A50E0(Ctx *c) { /* func_002A50E0 */
ENTER(0x2a50e0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 4184);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2a5100); wr32(c, (RW(4) + 64), RW(2)); JP_F_002A2A50(c);
SET32(5, RW(0) + 128);
SET32(4, RW(16) + 16);
SET64(6, RD(5) + RD(0));
SET64(31, 0x2a5114); SET64(7, RD(5) + RD(0)); JP_F_002B3C50(c);
SET32(4, RW(16) + 16);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a5128); SET64(7, RD(0) + RD(0)); JP_F_002B3BC0(c);
SET64(3, (s64)(s32)0xcb7e0000);
SET64(2, (s64)(s32)0x537e0000);
SET64(4, RD(3) | 0xff00);
SET64(3, RD(2) | 0xff01);
wr32(c, (RW(16) + 8), RW(4));
wr32(c, (RW(16) + 12), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A5160(Ctx *c) { /* func_002A5160 */
ENTER(0x2a5160);
SET32(29, RW(29) + -256);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 140)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) != RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_002A51F8; }
L_002A518C:;
SET64(3, (s32)rd32(c, (RW(18) + 140)));
SET64(3, RD(3) & 0x2);
{ int t = RD(3) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_002A5274; }
L_002A519C:;
SET64(3, (s32)rd32(c, (RW(18) + 132)));
{ int t = RD(3) == RD(0);  if (t) goto L_002A51F0; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) <= 0; SET32(17, RW(3) + -1); if (t) goto L_002A51F0; }
L_002A51B8:;
SET64(2, (s32)rd32(c, (RW(18) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2a51c8); SET64(5, RD(17) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 144)));
SET64(4, RD(2) + RD(0));
SET32(5, RW(18) + 64);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a51e0); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, RD(17) + RD(0));
{ int t = RSD(3) > 0; SET32(17, RW(17) + -1); if (t) { POLL(); goto L_002A51B8; } }
L_002A51F0:;
SET64(31, rd64(c, (RW(29) + 48))); goto L_002A52B4;
L_002A51F8:;
SET64(31, 0x2a5200);  JP_F_002AF080(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2a520c); SET32(5, RW(18) + 160); JP_F_002AEB90(c);
SET64(2, (s32)rd32(c, (RW(18) + 140)));
SET64(2, RD(2) & 0x4);
{ int t = RD(2) == RD(0); SET32(4, RW(29) + 64); if (t) goto L_002A5238; }
SET32(4, RW(29) + 128);
SET64(31, 0x2a5228); SET32(5, RW(18) + 176); JP_F_002AF7E0(c);
rd128(c, (RW(18) + 192) & ~15u, &c->r[3]);
SET32(2, RW(29) + 128);
wr128(c, (RW(2) + 48) & ~15u, &c->r[3]); goto L_002A5254;
L_002A5238:;
SET64(31, 0x2a5240);  JP_F_002AF080(c);
SET32(4, RW(29) + 64);
SET64(31, 0x2a524c); SET32(5, RW(18) + 176); JP_F_002AED70(c);
rd128(c, (RW(18) + 192) & ~15u, &c->r[3]);
wr128(c, (RW(2) + 48) & ~15u, &c->r[3]);
L_002A5254:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2a5260); SET64(5, RD(2) + RD(0)); JP_F_002AEA80(c);
SET64(4, (s32)rd32(c, (RW(18) + 140)));
SET32(3, RW(0) + -2);
SET64(3, RD(4) & RD(3));
wr32(c, (RW(18) + 140), RW(3)); { POLL(); goto L_002A518C; }
L_002A5274:;
SET32(4, RW(29) + 192);
SET64(31, 0x2a5280); SET64(5, RD(18) + RD(0)); JP_F_002AEAE0(c);
SET64(4, (s32)rd32(c, (RW(18) + 140)));
SET32(3, RW(0) + -3);
rd128(c, (RW(29) + 192) & ~15u, &c->r[8]);
rd128(c, (RW(29) + 208) & ~15u, &c->r[7]);
rd128(c, (RW(29) + 224) & ~15u, &c->r[6]);
rd128(c, (RW(29) + 240) & ~15u, &c->r[5]);
SET64(3, RD(4) & RD(3));
wr128(c, (RW(18) + 64) & ~15u, &c->r[8]);
wr128(c, (RW(18) + 80) & ~15u, &c->r[7]);
wr128(c, (RW(18) + 96) & ~15u, &c->r[6]);
wr128(c, (RW(18) + 112) & ~15u, &c->r[5]);
wr32(c, (RW(18) + 140), RW(3)); { POLL(); goto L_002A519C; }
L_002A52B4:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}

void JP_F_002A52D0(Ctx *c) { /* func_002A52D0 */
ENTER(0x2a52d0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a52e4); SET64(16, RD(4) + RD(0)); JP_F_002AF080(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a52f0); SET32(5, RW(16) + 160); JP_F_002AEB90(c);
SET64(2, (s32)rd32(c, (RW(16) + 140)));
SET64(2, RD(2) & 0x4);
{ int t = RD(2) == RD(0); SET32(4, RW(29) + 32); if (t) goto L_002A531C; }
SET32(4, RW(29) + 96);
SET64(31, 0x2a530c); SET32(5, RW(16) + 176); JP_F_002AF7E0(c);
rd128(c, (RW(16) + 192) & ~15u, &c->r[3]);
SET32(2, RW(29) + 96);
wr128(c, (RW(2) + 48) & ~15u, &c->r[3]); goto L_002A5338;
L_002A531C:;
SET64(31, 0x2a5324);  JP_F_002AF080(c);
SET32(4, RW(29) + 32);
SET64(31, 0x2a5330); SET32(5, RW(16) + 176); JP_F_002AED70(c);
rd128(c, (RW(16) + 192) & ~15u, &c->r[3]);
wr128(c, (RW(2) + 48) & ~15u, &c->r[3]);
L_002A5338:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a5344); SET64(5, RD(2) + RD(0)); JP_F_002AEA80(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_002A5360(Ctx *c) { /* func_002A5360 */
ENTER(0x2a5360);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A53A8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 4208);
SET64(31, 0x2a5390); wr32(c, (RW(17) + 144), RW(2)); JP_F_00243920(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A53AC; }
SET64(31, 0x2a53a8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A53A8:;
SET64(2, RD(17) + RD(0));
L_002A53AC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A53C0(Ctx *c) { /* func_002A53C0 */
ENTER(0x2a53c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a53d4); SET64(16, RD(4) + RD(0)); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(2) + 4208);
wr32(c, (RW(16) + 176), RW(0));
wr32(c, (RW(16) + 144), RW(2));
wr32(c, (RW(16) + 160), RW(3));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 164), RW(3));
wr32(c, (RW(16) + 168), RW(3));
wr32(c, (RW(16) + 172), RW(3));
wr32(c, (RW(16) + 180), RW(0));
wr32(c, (RW(16) + 184), RW(0));
wr32(c, (RW(16) + 188), RW(3));
wr32(c, (RW(16) + 204), RW(3));
wr32(c, (RW(16) + 192), RW(0));
wr32(c, (RW(16) + 196), RW(0));
wr32(c, (RW(16) + 200), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A5430(Ctx *c) { /* func_002A5430 */
ENTER(0x2a5430);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 304)));
SET64(31, 0x2a5450); SET64(16, RD(5) + RD(0)); JP_F_002A28E0(c);
SET32(4, RW(17) + 208);
SET64(31, 0x2a545c); SET64(5, RD(16) + RD(0)); JP_F_002A2800(c);
SET64(25, (s32)rd32(c, (RW(17) + 328)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a5470); SET32(4, RW(17) + 320); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5490(Ctx *c) { /* func_002A5490 */
ENTER(0x2a5490);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A54E8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(17) + 320);
SET32(2, RW(2) + 4240);
SET32(5, RW(0) + -1);
SET64(31, 0x2a54c4); wr32(c, (RW(17) + 144), RW(2)); JP_F_002B3F70(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a54d0); SET64(5, RD(0) + RD(0)); JP_F_002BAA10(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A54EC; }
SET64(31, 0x2a54e8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A54E8:;
SET64(2, RD(17) + RD(0));
L_002A54EC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5500(Ctx *c) { /* func_002A5500 */
ENTER(0x2a5500);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a5514); SET64(16, RD(4) + RD(0)); JP_F_002BAA90(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(16) + 320);
SET32(2, RW(2) + 4240);
SET64(31, 0x2a5528); wr32(c, (RW(16) + 144), RW(2)); JP_F_002B3FD0(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A5540(Ctx *c) { /* func_002A5540 */
ENTER(0x2a5540);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 36)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A55A8; }
SET64(4, (s32)rd32(c, (RW(17) + 32)));
{ int t = RD(4) == RD(0); SET64(2, (s64)(s32)0x1000000); if (t) goto L_002A5580; }
SET64(25, (s32)rd32(c, (RW(4) + 48)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a557c);  rt_call(c, t); }
SET64(2, (s64)(s32)0x1000000);
L_002A5580:;
SET64(4, RD(16) + RD(0));
SET64(7, RD(2) | 0x101);
SET32(5, RW(17) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET32(6, RW(0) + 16);
SET64(31, 0x2a559c); SET64(8, RD(2) | 0x58); JP_F_002B1AB0(c);
SET64(4, (s32)rd32(c, (RW(17) + 36)));
SET64(31, 0x2a55a8); SET64(5, RD(16) + RD(0)); JP_F_002A2B60(c);
L_002A55A8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A55C0(Ctx *c) { /* func_002A55C0 */
ENTER(0x2a55c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, (s32)rd32(c, (RW(4) + 36)));
{ int t = RD(16) == RD(0); wr32(c, (RW(4) + 16), RW(17)); if (t) goto L_002A5610; }
L_002A55E0:;
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2a55f4); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 68)));
{ int t = RD(16) == RD(0);  if (t) goto L_002A5608; }
SET32(16, RW(16) + -64);
L_002A5608:;
{ int t = RD(16) != RD(0);  if (t) { POLL(); goto L_002A55E0; } }
L_002A5610:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5630(Ctx *c) { /* func_002A5630 */
ENTER(0x2a5630);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 36)));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A5678; }
L_002A564C:;
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a5660); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 68)));
{ int t = RD(16) == RD(0);  if (t) goto L_002A5670; }
SET32(16, RW(16) + -64);
L_002A5670:;
{ int t = RD(16) != RD(0);  if (t) { POLL(); goto L_002A564C; } }
L_002A5678:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5690(Ctx *c) { /* func_002A5690 */
ENTER(0x2a5690);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 36)));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A56D8; }
L_002A56AC:;
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a56c0); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 68)));
{ int t = RD(16) == RD(0);  if (t) goto L_002A56D0; }
SET32(16, RW(16) + -64);
L_002A56D0:;
{ int t = RD(16) != RD(0);  if (t) { POLL(); goto L_002A56AC; } }
L_002A56D8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A56F0(Ctx *c) { /* func_002A56F0 */
ENTER(0x2a56f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 36)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A5730; }
{ int t = RD(5) == RD(0); SET32(4, RW(3) + 64); if (t) goto L_002A5714; }
SET32(5, RW(5) + 64);
L_002A5714:;
SET64(31, 0x2a571c);  JP_F_002AE7E0(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0);  if (t) goto L_002A572C; }
SET32(3, RW(3) + -64);
L_002A572C:;
wr32(c, (RW(16) + 36), RW(3));
L_002A5730:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A5740(Ctx *c) { /* func_002A5740 */
ENTER(0x2a5740);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(5, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2a576c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 36)));
{ int t = RD(3) == RD(0);  if (t) goto L_002A5794; }
{ int t = RD(16) == RD(0); SET32(4, RW(3) + 64); if (t) goto L_002A5784; }
SET32(16, RW(16) + 64);
L_002A5784:;
SET64(31, 0x2a578c); SET64(5, RD(16) + RD(0)); JP_F_002AE870(c);
L_002A578C:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A579C;
L_002A5794:;
wr32(c, (RW(17) + 36), RW(16)); { POLL(); goto L_002A578C; }
L_002A579C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A57B0(Ctx *c) { /* func_002A57B0 */
ENTER(0x2a57b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 36)));
{ int t = RD(4) == RD(0);  if (t) goto L_002A580C; }
{ int t = RD(4) == RD(0);  if (t) goto L_002A5808; }
L_002A57D8:;
SET64(16, (s32)rd32(c, (RW(4) + 68)));
{ int t = RD(16) == RD(0);  if (t) goto L_002A57E8; }
SET32(16, RW(16) + -64);
L_002A57E8:;
{ int t = RD(4) == RD(0); wr32(c, (RW(4) + 68), RW(0)); if (t) goto L_002A5800; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2a5800); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A5800:;
{ int t = RD(16) != RD(0); SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_002A57D8; } }
L_002A5808:;
wr32(c, (RW(17) + 36), RW(0));
L_002A580C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5820(Ctx *c) { /* func_002A5820 */
ENTER(0x2a5820);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A587C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4272);
wr32(c, (RW(17) + 0), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a5858);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a5864); SET64(5, RD(0) + RD(0)); JP_F_002AE8C0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A5880; }
SET64(31, 0x2a587c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A587C:;
SET64(2, RD(17) + RD(0));
L_002A5880:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A58A0(Ctx *c) { /* func_002A58A0 */
ENTER(0x2a58a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2a58bc); SET64(16, RD(5) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 36), RW(16));
SET32(2, RW(2) + 4272);
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(2, RD(0) | 0x8000);
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 16), RW(2));
SET64(2, RD(17) + RD(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
wr32(c, (RW(17) + 32), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5900(Ctx *c) { /* func_002A5900 */
ENTER(0x2a5900);
SET32(3, RW(0) + -8);
SET64(9, rd64(c, (RW(4) + 48)));
SET64(6, RD(5) << 32);
mmi_pcpyld(c, &c->r[8], &c->r[0], &c->r[3]);
SET64(5, (s64)(s32)0xfc000000);
SET64(3, RD(0) | 0xffff);
SET64(5, RD(5) | 0x7fff);
SET64(3, RD(3) << 16);
SET64(5, RD(5) << 32);
SET64(3, RD(3) | 0xffff);
SET64(7, RD(3) | RD(5));
SET64(6, RSD(6) >> 32);
SET64(5, RD(9) << 6);
SET64(3, RD(9) & RD(7));
SET64(5, RD(5) >> 53);
SET64(5, RD(5) & RD(8));
SET64(5, RD(5) & 0x7ff);
SET64(5, RD(5) << 47);
SET64(5, RD(3) | RD(5));
SET64(3, RD(5) & RD(7));
SET64(5, RD(5) << 6);
SET64(5, RD(5) >> 53);
SET64(5, RD(5) | RD(6));
SET64(5, RD(5) & 0x7ff);
SET64(5, RD(5) << 47);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 48), RD(3)); return;
}

void JP_F_002A5970(Ctx *c) { /* func_002A5970 */
ENTER(0x2a5970);
SET64(3, ~(RD(5) | RD(0)));
SET64(6, rd64(c, (RW(4) + 48)));
SET64(3, RD(3) | 0x7);
SET64(7, RD(3) << 32);
SET64(3, (s64)(s32)0xfc000000);
SET64(7, RSD(7) >> 32);
SET64(5, RD(3) | 0x7fff);
SET64(3, RD(0) | 0xffff);
SET64(5, RD(5) << 32);
SET64(3, RD(3) << 16);
SET64(3, RD(3) | 0xffff);
SET64(3, RD(3) | RD(5));
SET64(5, RD(6) << 6);
SET64(3, RD(6) & RD(3));
SET64(5, RD(5) >> 53);
SET64(5, RD(5) & RD(7));
SET64(5, RD(5) & 0x7ff);
SET64(5, RD(5) << 47);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 48), RD(3)); return;
}

void JP_F_002A59D0(Ctx *c) { /* func_002A59D0 */
ENTER(0x2a59d0);
SET32(3, RW(0) + -8);
SET64(6, rd64(c, (RW(4) + 48)));
SET64(3, RD(5) & RD(3));
SET64(7, RD(3) << 32);
SET64(3, (s64)(s32)0xfc000000);
SET64(7, RSD(7) >> 32);
SET64(5, RD(3) | 0x7fff);
SET64(3, RD(0) | 0xffff);
SET64(5, RD(5) << 32);
SET64(3, RD(3) << 16);
SET64(3, RD(3) | 0xffff);
SET64(3, RD(3) | RD(5));
SET64(5, RD(6) << 6);
SET64(3, RD(6) & RD(3));
SET64(5, RD(5) >> 53);
SET64(5, RD(5) | RD(7));
SET64(5, RD(5) & 0x7ff);
SET64(5, RD(5) << 47);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 48), RD(3)); return;
}

void JP_F_002A5A30(Ctx *c) { /* func_002A5A30 */
ENTER(0x2a5a30);
SET64(2, rd64(c, (RW(4) + 48)));
SET64(2, RD(2) << 6);
SET64(2, RD(2) >> 53);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32); return;
}

void JP_F_002A5A50(Ctx *c) { /* func_002A5A50 */
ENTER(0x2a5a50);
SET64(3, (s32)rd32(c, (RW(4) + 24)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002A5A64; }
SET32(2, RW(5) << 3);
SET32(2, RW(3) + RW(2));
L_002A5A64:;
 return;
}

void JP_F_002A5A70(Ctx *c) { /* func_002A5A70 */
ENTER(0x2a5a70);
SET64(3, (s32)rd32(c, (RW(4) + 20)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002A5A8C; }
SET64(2, rd8(c, (RW(4) + 43)));
mul_s(c, 0, 2, RSW(2), RSW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(3) + RW(2));
L_002A5A8C:;
 return;
}

void JP_F_002A5AA0(Ctx *c) { /* func_002A5AA0 */
ENTER(0x2a5aa0);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002A5ABC; }
SET64(2, rd8(c, (RW(4) + 42)));
mul_s(c, 0, 2, RSW(2), RSW(5));
SET32(2, RW(2) << 3);
SET32(2, RW(3) + RW(2));
L_002A5ABC:;
 return;
}

void JP_F_002A5AD0(Ctx *c) { /* func_002A5AD0 */
ENTER(0x2a5ad0);
SET64(3, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002A5AEC; }
SET64(2, rd8(c, (RW(4) + 41)));
mul_s(c, 0, 2, RSW(2), RSW(5));
SET32(2, RW(2) << 3);
SET32(2, RW(3) + RW(2));
L_002A5AEC:;
 return;
}

void JP_F_002A5B00(Ctx *c) { /* func_002A5B00 */
ENTER(0x2a5b00);
SET64(3, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002A5B1C; }
SET64(2, rd8(c, (RW(4) + 40)));
mul_s(c, 0, 2, RSW(2), RSW(5));
SET32(2, RW(2) << 4);
SET32(2, RW(3) + RW(2));
L_002A5B1C:;
 return;
}

void JP_F_002A5B30(Ctx *c) { /* func_002A5B30 */
ENTER(0x2a5b30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(3, RD(3) & 0x10);
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A5BDC; }
{ int t = RSD(6) <= 0;  if (t) goto L_002A5BDC; }
SET32(3, RW(6) << 2);
wr8(c, (RW(16) + 44), (u8)RW(7));
SET32(3, RW(3) + -1);
SET32(3, RW(3) >> 4);
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 4);
SET32(3, RW(3) >> 2);
{ int t = RD(5) == RD(0); wr16(c, (RW(16) + 38), (u16)RW(3)); if (t) goto L_002A5BA4; }
wr32(c, (RW(16) + 24), RW(5));
L_002A5B80:;
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET32(4, RW(0) + -17);
SET32(3, RW(0) + 16);
if (RD(8) == 0) SET64(3, RD(0));
SET64(4, RD(5) & RD(4));
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 4), RW(3));
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A5BE0;
L_002A5BA4:;
SET64(17, rd16(c, (RW(16) + 38)));
SET32(2, RW(17) << 3);
SET64(31, 0x2a5bb4); SET32(4, RW(2) + 16); JP_F_00100530(c);
SET64(5, (s64)(s32)0x2a0000);
SET64(8, RD(17) + RD(0));
SET64(4, RD(2) + RD(0));
SET32(5, RW(5) + 23536);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a5bd0); SET32(7, RW(0) + 8); JP_F_00102580(c);
wr32(c, (RW(16) + 24), RW(2));
SET64(8, RD(0) + (s64)1); { POLL(); goto L_002A5B80; }
L_002A5BDC:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A5BE0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5BF0(Ctx *c) { /* func_002A5BF0 */
ENTER(0x2a5bf0);
wr16(c, (RW(4) + 0), (u16)RW(0));
SET64(2, RD(4) + RD(0));
wr16(c, (RW(4) + 2), (u16)RW(0));
wr16(c, (RW(4) + 4), (u16)RW(0));
wr16(c, (RW(4) + 6), (u16)RW(0)); return;
}

void JP_F_002A5C10(Ctx *c) { /* func_002A5C10 */
ENTER(0x2a5c10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(3, RD(3) & 0x8);
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A5CBC; }
{ int t = RSD(6) <= 0;  if (t) goto L_002A5CBC; }
SET32(3, RW(6) << 2);
wr8(c, (RW(16) + 43), (u8)RW(7));
SET32(3, RW(3) + -1);
SET32(3, RW(3) >> 4);
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 4);
SET32(3, RW(3) >> 2);
{ int t = RD(5) == RD(0); wr16(c, (RW(16) + 36), (u16)RW(3)); if (t) goto L_002A5C84; }
wr32(c, (RW(16) + 20), RW(5));
L_002A5C60:;
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET32(4, RW(0) + -9);
SET32(3, RW(0) + 8);
if (RD(8) == 0) SET64(3, RD(0));
SET64(4, RD(5) & RD(4));
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 4), RW(3));
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A5CC0;
L_002A5C84:;
SET64(17, rd16(c, (RW(16) + 36)));
SET32(2, RW(17) << 2);
SET64(31, 0x2a5c94); SET32(4, RW(2) + 16); JP_F_00100530(c);
SET64(5, (s64)(s32)0x190000);
SET64(8, RD(17) + RD(0));
SET64(4, RD(2) + RD(0));
SET32(5, RW(5) + 10512);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a5cb0); SET32(7, RW(0) + 4); JP_F_00102580(c);
wr32(c, (RW(16) + 20), RW(2));
SET64(8, RD(0) + (s64)1); { POLL(); goto L_002A5C60; }
L_002A5CBC:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A5CC0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5CD0(Ctx *c) { /* func_002A5CD0 */
ENTER(0x2a5cd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(3, RD(3) & 0x4);
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A5D7C; }
{ int t = RSD(6) <= 0;  if (t) goto L_002A5D7C; }
SET32(3, RW(6) << 2);
wr8(c, (RW(16) + 42), (u8)RW(7));
SET32(3, RW(3) + -1);
SET32(3, RW(3) >> 4);
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 4);
SET32(3, RW(3) >> 2);
{ int t = RD(5) == RD(0); wr16(c, (RW(16) + 34), (u16)RW(3)); if (t) goto L_002A5D44; }
wr32(c, (RW(16) + 16), RW(5));
L_002A5D20:;
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET32(4, RW(0) + -5);
SET32(3, RW(0) + 4);
if (RD(8) == 0) SET64(3, RD(0));
SET64(4, RD(5) & RD(4));
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 4), RW(3));
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A5D80;
L_002A5D44:;
SET64(17, rd16(c, (RW(16) + 34)));
SET32(2, RW(17) << 3);
SET64(31, 0x2a5d54); SET32(4, RW(2) + 16); JP_F_00100530(c);
SET64(5, (s64)(s32)0x190000);
SET64(8, RD(17) + RD(0));
SET64(4, RD(2) + RD(0));
SET32(5, RW(5) + 10496);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a5d70); SET32(7, RW(0) + 8); JP_F_00102580(c);
wr32(c, (RW(16) + 16), RW(2));
SET64(8, RD(0) + (s64)1); { POLL(); goto L_002A5D20; }
L_002A5D7C:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A5D80:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5D90(Ctx *c) { /* func_002A5D90 */
ENTER(0x2a5d90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(3, RD(3) & 0x2);
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A5E3C; }
{ int t = RSD(6) <= 0;  if (t) goto L_002A5E3C; }
SET32(3, RW(6) << 2);
wr8(c, (RW(16) + 41), (u8)RW(7));
SET32(3, RW(3) + -1);
SET32(3, RW(3) >> 4);
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 4);
SET32(3, RW(3) >> 2);
{ int t = RD(5) == RD(0); wr16(c, (RW(16) + 32), (u16)RW(3)); if (t) goto L_002A5E04; }
wr32(c, (RW(16) + 12), RW(5));
L_002A5DE0:;
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET32(4, RW(0) + -3);
SET32(3, RW(0) + 2);
if (RD(8) == 0) SET64(3, RD(0));
SET64(4, RD(5) & RD(4));
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 4), RW(3));
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A5E40;
L_002A5E04:;
SET64(17, rd16(c, (RW(16) + 32)));
SET32(2, RW(17) << 3);
SET64(31, 0x2a5e14); SET32(4, RW(2) + 16); JP_F_00100530(c);
SET64(5, (s64)(s32)0x2a0000);
SET64(8, RD(17) + RD(0));
SET64(4, RD(2) + RD(0));
SET32(5, RW(5) + 23536);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a5e30); SET32(7, RW(0) + 8); JP_F_00102580(c);
wr32(c, (RW(16) + 12), RW(2));
SET64(8, RD(0) + (s64)1); { POLL(); goto L_002A5DE0; }
L_002A5E3C:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A5E40:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5E50(Ctx *c) { /* func_002A5E50 */
ENTER(0x2a5e50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A5EF8; }
{ int t = RSD(6) <= 0;  if (t) goto L_002A5EF8; }
SET32(3, RW(6) << 2);
wr8(c, (RW(16) + 40), (u8)RW(7));
SET32(3, RW(3) + -1);
SET32(3, RW(3) >> 4);
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 4);
SET32(3, RW(3) >> 2);
{ int t = RD(5) == RD(0); wr16(c, (RW(16) + 30), (u16)RW(3)); if (t) goto L_002A5EC0; }
wr32(c, (RW(16) + 8), RW(5));
L_002A5EA0:;
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET32(4, RW(0) + -2);
SET64(3, RD(8) & 0xff);
SET64(4, RD(5) & RD(4));
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 4), RW(3));
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A5EFC;
L_002A5EC0:;
SET64(17, rd16(c, (RW(16) + 30)));
SET32(2, RW(17) << 4);
SET64(31, 0x2a5ed0); SET32(4, RW(2) + 16); JP_F_00100530(c);
SET64(5, (s64)(s32)0x190000);
SET64(8, RD(17) + RD(0));
SET64(4, RD(2) + RD(0));
SET32(5, RW(5) + 10544);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a5eec); SET32(7, RW(0) + 16); JP_F_00102580(c);
wr32(c, (RW(16) + 8), RW(2));
SET64(8, RD(0) + (s64)1); { POLL(); goto L_002A5EA0; }
L_002A5EF8:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A5EFC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5F10(Ctx *c) { /* func_002A5F10 */
ENTER(0x2a5f10);
SET32(29, RW(29) + -48);
SET64(6, RD(5) & 0xffff);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RSD(6) <= 0; SET64(16, RD(4) + RD(0)); if (t) goto L_002A5FD8; }
wr16(c, (RW(16) + 28), (u16)RW(5));
SET32(3, RW(0) + -32768);
SET64(5, rd64(c, (RW(16) + 48)));
SET64(4, RD(6) & 0x7fff);
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(3, RD(5) & RD(3));
SET64(3, RD(3) | RD(4));
{ int t = RD(2) != RD(0); wr64(c, (RW(16) + 48), RD(3)); if (t) goto L_002A5FCC; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(2, RD(2) & 0x10);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_002A5FD0; }
{ int t = RSD(6) <= 0; SET32(2, RW(0) + 1); if (t) goto L_002A5FCC; }
SET32(3, RW(6) << 2);
wr8(c, (RW(16) + 44), (u8)RW(2));
SET32(2, RW(3) + -1);
SET32(2, RW(2) >> 4);
SET32(2, RW(2) + 1);
SET32(2, RW(2) << 4);
SET32(2, RW(2) >> 2);
wr16(c, (RW(16) + 38), (u16)RW(2));
SET64(17, rd16(c, (RW(16) + 38)));
SET32(2, RW(17) << 3);
SET64(31, 0x2a5f98); SET32(4, RW(2) + 16); JP_F_00100530(c);
SET64(5, (s64)(s32)0x2a0000);
SET64(8, RD(17) + RD(0));
SET64(4, RD(2) + RD(0));
SET32(5, RW(5) + 23536);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a5fb4); SET32(7, RW(0) + 8); JP_F_00102580(c);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
wr32(c, (RW(16) + 24), RW(2));
SET32(2, RW(0) + -17);
SET64(2, RD(3) & RD(2));
SET64(2, RD(2) | 0x10);
wr32(c, (RW(16) + 4), RW(2));
L_002A5FCC:;
SET32(2, RW(0) + 1);
L_002A5FD0:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A5FE0;
L_002A5FD8:;
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
L_002A5FE0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A5FF0(Ctx *c) { /* func_002A5FF0 */
ENTER(0x2a5ff0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A60E0; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4304);
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 0), RW(3)); if (t) goto L_002A6038; }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(2) == RD(0); SET32(4, RW(2) + -16); if (t) goto L_002A6038; }
SET64(31, 0x2a6038);  JP_F_00100430(c);
L_002A6038:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(2, RD(2) & 0x2);
{ int t = RD(2) == RD(0);  if (t) goto L_002A605C; }
SET64(2, (s32)rd32(c, (RW(17) + 12)));
{ int t = RD(2) == RD(0); SET32(4, RW(2) + -16); if (t) goto L_002A605C; }
SET64(31, 0x2a605c);  JP_F_00100430(c);
L_002A605C:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(2, RD(2) & 0x4);
{ int t = RD(2) == RD(0);  if (t) goto L_002A6080; }
SET64(2, (s32)rd32(c, (RW(17) + 16)));
{ int t = RD(2) == RD(0); SET32(4, RW(2) + -16); if (t) goto L_002A6080; }
SET64(31, 0x2a6080);  JP_F_00100430(c);
L_002A6080:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(2, RD(2) & 0x8);
{ int t = RD(2) == RD(0);  if (t) goto L_002A60A4; }
SET64(2, (s32)rd32(c, (RW(17) + 20)));
{ int t = RD(2) == RD(0); SET32(4, RW(2) + -16); if (t) goto L_002A60A4; }
SET64(31, 0x2a60a4);  JP_F_00100430(c);
L_002A60A4:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(2, RD(2) & 0x10);
{ int t = RD(2) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_002A60CC; }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
{ int t = RD(2) == RD(0); SET32(4, RW(2) + -16); if (t) goto L_002A60C8; }
SET64(31, 0x2a60c8);  JP_F_00100430(c);
L_002A60C8:;
SET64(2, RD(16) << 48);
L_002A60CC:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A60E4; }
SET64(31, 0x2a60e0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A60E0:;
SET64(2, RD(17) + RD(0));
L_002A60E4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A6100(Ctx *c) { /* func_002A6100 */
ENTER(0x2a6100);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 4), RW(0));
SET32(2, RW(2) + 4304);
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 0), RW(2));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr16(c, (RW(4) + 28), (u16)RW(0));
wr16(c, (RW(4) + 30), (u16)RW(0));
wr16(c, (RW(4) + 32), (u16)RW(0));
wr16(c, (RW(4) + 34), (u16)RW(0));
wr16(c, (RW(4) + 36), (u16)RW(0));
wr16(c, (RW(4) + 38), (u16)RW(0));
wr8(c, (RW(4) + 40), (u8)RW(0));
wr8(c, (RW(4) + 41), (u8)RW(0));
wr8(c, (RW(4) + 42), (u8)RW(0));
wr8(c, (RW(4) + 43), (u8)RW(0)); return;
}

void JP_F_002A6160(Ctx *c) { /* func_002A6160 */
ENTER(0x2a6160);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 208)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(0) < RSD(3));
{ int t = RD(3) != RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002A619C; }
L_002A6194:;
SET64(31, rd64(c, (RW(29) + 64))); goto L_002A6200;
L_002A619C:;
SET64(4, (s32)rd32(c, (RW(18) + 208)));
SET64(31, 0x2a61a8); SET64(5, RD(16) + RD(0)); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(19, RD(2) + RD(0));
SET64(31, 0x2a61b8); SET64(5, RD(17) + RD(0)); JP_F_002ADD30(c);
SET64(3, RD(0) < RD(2));
SET64(3, RD(3) ^ 0x1);
{ int t = RD(3) != RD(0);  if (t) goto L_002A61DC; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(31, 0x2a61d4); SET64(5, RD(17) + RD(0)); JP_F_002ADE40(c);
 goto L_002A61FC;
L_002A61DC:;
SET64(3, (s32)rd32(c, (RW(18) + 208)));
SET32(16, RW(16) + 1);
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002A619C; } }
 { POLL(); goto L_002A6194; }
L_002A61FC:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002A6200:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A6220(Ctx *c) { /* func_002A6220 */
ENTER(0x2a6220);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(0) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 208)));
SET64(16, RD(6) + RD(0));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) > 0; SET32(19, RW(3) + -1); if (t) goto L_002A6270; }
L_002A6260:;
{ int t = RSD(20) > 0;  if (t) goto L_002A629C; }
L_002A6268:;
 goto L_002A63A8;
L_002A6270:;
SET64(4, (s32)rd32(c, (RW(18) + 208)));
SET64(31, 0x2a627c); SET64(5, RD(19) + RD(0)); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(3, RD(19) + RD(0));
SET32(19, RW(19) + -1);
SET64(4, (s32)rd32(c, (RW(4) + 16)));
{ int t = RSD(3) > 0; SET32(20, RW(20) + RW(4)); if (t) { POLL(); goto L_002A6270; } }
 { POLL(); goto L_002A6260; }
L_002A629C:;
SET64(4, (s32)rd32(c, (RW(18) + 208)));
SET64(31, 0x2a62a8); SET32(5, RW(0) + 1); JP_F_002ADD80(c);
SET64(20, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RSD(2) <= 0; SET32(19, RW(2) + -1); if (t) goto L_002A62E8; }
L_002A62BC:;
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x2a62c8); SET64(5, RD(19) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 144)));
SET64(4, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a62dc); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(19) + RD(0));
{ int t = RSD(2) > 0; SET32(19, RW(19) + -1); if (t) { POLL(); goto L_002A62BC; } }
L_002A62E8:;
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(7, (s64)(s32)0x2a0000);
SET32(4, RW(29) + 124);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x2a6304); SET32(7, RW(7) + 25552); JP_F_002AF1B0(c);
SET64(3, (s32)rd32(c, (RW(18) + 208)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(21, RD(0) + RD(0)); if (t) goto L_002A63A8; }
L_002A6318:;
SET64(4, (s32)rd32(c, (RW(18) + 208)));
SET64(31, 0x2a6324); SET64(5, RD(21) + RD(0)); JP_F_002ADD80(c);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(20, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(0) < RSD(3));
{ int t = RD(3) != RD(0); SET64(19, RD(0) + RD(0)); if (t) goto L_002A6360; }
L_002A6340:;
SET64(3, (s32)rd32(c, (RW(18) + 208)));
SET32(21, RW(21) + 1);
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(21) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002A6318; } }
 { POLL(); goto L_002A6268; }
L_002A6360:;
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x2a636c); SET64(5, RD(19) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 144)));
SET64(4, RD(2) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2a6384); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET32(19, RW(19) + 1);
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002A6360; } }
 { POLL(); goto L_002A6340; }
L_002A63A8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002A63D0(Ctx *c) { /* func_002A63D0 */
ENTER(0x2a63d0);
c->f[1].u = rd32(c, (RW(5) + 136));
c->f[0].u = rd32(c, (RW(4) + 136));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
 return;
}

void JP_F_002A63F0(Ctx *c) { /* func_002A63F0 */
ENTER(0x2a63f0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 140)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) != RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_002A6498; }
L_002A641C:;
SET64(3, (s32)rd32(c, (RW(18) + 140)));
SET64(3, RD(3) & 0x2);
{ int t = RD(3) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_002A64B4; }
L_002A642C:;
SET64(3, (s32)rd32(c, (RW(18) + 140)));
SET64(3, RD(3) & 0x40);
{ int t = RD(3) != RD(0);  if (t) goto L_002A64F4; }
wr32(c, (RW(18) + 236), RW(16));
SET64(3, (s32)rd32(c, (RW(18) + 132)));
L_002A6444:;
{ int t = RD(3) == RD(0);  if (t) goto L_002A6490; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) <= 0; SET32(16, RW(3) + -1); if (t) goto L_002A6490; }
L_002A645C:;
SET64(2, (s32)rd32(c, (RW(18) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2a646c); SET64(5, RD(16) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 144)));
SET64(4, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(18) + 236)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a6484); SET32(5, RW(18) + 64); rt_call(c, t); }
SET64(3, RD(16) + RD(0));
{ int t = RSD(3) > 0; SET32(16, RW(16) + -1); if (t) { POLL(); goto L_002A645C; } }
L_002A6490:;
SET64(31, rd64(c, (RW(29) + 48))); goto L_002A6504;
L_002A6498:;
SET64(31, 0x2a64a0);  JP_F_002A52D0(c);
SET64(4, (s32)rd32(c, (RW(18) + 140)));
SET32(3, RW(0) + -2);
SET64(3, RD(4) & RD(3));
wr32(c, (RW(18) + 140), RW(3)); { POLL(); goto L_002A641C; }
L_002A64B4:;
SET32(4, RW(29) + 64);
SET64(31, 0x2a64c0); SET64(5, RD(18) + RD(0)); JP_F_002AEAE0(c);
SET64(4, (s32)rd32(c, (RW(18) + 140)));
SET32(3, RW(0) + -3);
rd128(c, (RW(29) + 64) & ~15u, &c->r[8]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[7]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[6]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[5]);
SET64(3, RD(4) & RD(3));
wr128(c, (RW(18) + 64) & ~15u, &c->r[8]);
wr128(c, (RW(18) + 80) & ~15u, &c->r[7]);
wr128(c, (RW(18) + 96) & ~15u, &c->r[6]);
wr128(c, (RW(18) + 112) & ~15u, &c->r[5]);
wr32(c, (RW(18) + 140), RW(3)); { POLL(); goto L_002A642C; }
L_002A64F4:;
SET64(31, 0x2a64fc); SET64(4, (s32)rd32(c, (RW(18) + 236))); JP_F_002A8610(c);
SET64(3, (s32)rd32(c, (RW(18) + 132))); { POLL(); goto L_002A6444; }
L_002A6504:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002A6520(Ctx *c) { /* func_002A6520 */
ENTER(0x2a6520);
{ int t = RD(5) == RD(0); wr32(c, (RW(4) + 236), RW(5)); if (t) goto L_002A6538; }
SET64(3, (s32)rd32(c, (RW(4) + 140)));
SET64(3, RD(3) | 0x40);
wr32(c, (RW(4) + 140), RW(3)); goto L_002A6548;
L_002A6538:;
SET64(5, (s32)rd32(c, (RW(4) + 140)));
SET32(3, RW(0) + -65);
SET64(3, RD(5) & RD(3));
wr32(c, (RW(4) + 140), RW(3));
L_002A6548:;
 return;
}

void JP_F_002A6550(Ctx *c) { /* func_002A6550 */
ENTER(0x2a6550);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A65C8; }
SET64(4, (s32)rd32(c, (RW(17) + 208)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4352);
wr32(c, (RW(17) + 144), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 16)));
{ int t = RSD(2) > 0; SET64(5, RD(0) + RD(0)); if (t) goto L_002A65D8; }
SET32(2, RW(17) + 208);
L_002A6590:;
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002A65A8; }
SET32(4, RW(17) + 212);
SET64(31, 0x2a65a4); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET64(4, RD(17) + RD(0));
L_002A65A8:;
SET64(31, 0x2a65b0); SET64(5, RD(0) + RD(0)); JP_F_002A5360(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A65CC; }
SET64(31, 0x2a65c8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A65C8:;
SET64(2, RD(17) + RD(0));
L_002A65CC:;
SET64(31, rd64(c, (RW(29) + 48))); goto L_002A6618;
L_002A65D4:;
SET64(5, RD(0) + RD(0));
L_002A65D8:;
SET64(31, 0x2a65e0);  JP_F_002ADF30(c);
SET64(18, RD(2) + RD(0));
{ int t = RD(18) == RD(0); SET32(4, RW(18) + 4); if (t) goto L_002A6600; }
SET64(31, 0x2a65f4); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET64(31, 0x2a65fc); SET64(4, RD(18) + RD(0)); JP_F_001004B0(c);
L_002A6600:;
SET64(4, (s32)rd32(c, (RW(17) + 208)));
SET64(2, (s32)rd32(c, (RW(4) + 16)));
{ int t = RSD(2) > 0;  if (t) { POLL(); goto L_002A65D4; } }
SET32(2, RW(17) + 208); { POLL(); goto L_002A6590; }
L_002A6618:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A6630(Ctx *c) { /* func_002A6630 */
ENTER(0x2a6630);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(31, 0x2a6660); SET64(16, RD(7) + RD(0)); JP_F_002A53C0(c);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(19) + 208);
SET32(3, RW(3) + 4352);
SET32(4, RW(2) + 4);
wr32(c, (RW(19) + 144), RW(3));
SET32(5, RW(0) + 3);
wr32(c, (RW(19) + 208), RW(4));
SET64(31, 0x2a6684); SET64(6, RD(0) + RD(0)); JP_F_002AE1F0(c);
SET32(4, RW(0) + 28);
SET64(31, 0x2a6690); wr32(c, (RW(19) + 236), RW(0)); JP_F_00100670(c);
{ int t = RD(2) != RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002A66F0; }
SET64(4, (s32)rd32(c, (RW(19) + 208)));
L_002A669C:;
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2a66a8); SET64(5, RD(20) + RD(0)); JP_F_002ADFE0(c);
SET64(31, 0x2a66b0); SET32(4, RW(0) + 28); JP_F_00100670(c);
{ int t = RD(2) != RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002A670C; }
SET64(4, (s32)rd32(c, (RW(19) + 208)));
L_002A66BC:;
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2a66c8); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
SET64(31, 0x2a66d0); SET32(4, RW(0) + 28); JP_F_00100670(c);
{ int t = RD(2) != RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002A6728; }
SET64(4, (s32)rd32(c, (RW(19) + 208)));
L_002A66DC:;
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2a66e8); SET64(5, RD(17) + RD(0)); JP_F_002ADFE0(c);
SET64(2, RD(19) + RD(0)); goto L_002A6744;
L_002A66F0:;
SET32(4, RW(20) + 4);
SET64(5, RD(18) + RD(0));
wr32(c, (RW(20) + 0), RW(4));
SET64(31, 0x2a6704); SET64(6, RD(0) + RD(0)); JP_F_002AE1F0(c);
SET64(4, (s32)rd32(c, (RW(19) + 208))); { POLL(); goto L_002A669C; }
L_002A670C:;
SET32(4, RW(18) + 4);
SET64(5, RD(17) + RD(0));
wr32(c, (RW(18) + 0), RW(4));
SET64(31, 0x2a6720); SET64(6, RD(0) + RD(0)); JP_F_002AE1F0(c);
SET64(4, (s32)rd32(c, (RW(19) + 208))); { POLL(); goto L_002A66BC; }
L_002A6728:;
SET32(4, RW(17) + 4);
SET64(5, RD(16) + RD(0));
wr32(c, (RW(17) + 0), RW(4));
SET64(31, 0x2a673c); SET64(6, RD(0) + RD(0)); JP_F_002AE1F0(c);
SET64(4, (s32)rd32(c, (RW(19) + 208))); { POLL(); goto L_002A66DC; }
L_002A6744:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002A6770(Ctx *c) { /* func_002A6770 */
ENTER(0x2a6770);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a6784); SET64(16, RD(4) + RD(0)); JP_F_002AF080(c);
c->f[0].u = rd32(c, (RW(16) + 128));
SET32(4, RW(29) + 48);
c->f[1].u = rd32(c, (RW(16) + 140));
c->f[5].u = rd32(c, (RW(16) + 136));
c->f[4].u = rd32(c, (RW(16) + 132));
c->f[2].u = rd32(c, (RW(16) + 152));
c->f[3].u = rd32(c, (RW(16) + 156));
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 124), c->f[1].u);
c->f[5].u = c->f[5].u ^ 0x80000000u;
c->f[4].u = c->f[4].u ^ 0x80000000u;
wr32(c, (RW(29) + 112), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 148));
c->f[0].u = rd32(c, (RW(16) + 144));
wr32(c, (RW(29) + 120), c->f[5].u);
wr32(c, (RW(29) + 116), c->f[4].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
c->f[2].u = c->f[2].u ^ 0x80000000u;
wr32(c, (RW(29) + 44), c->f[3].u);
c->f[1].u = c->f[1].u ^ 0x80000000u;
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 40), c->f[2].u);
wr32(c, (RW(29) + 36), c->f[1].u);
wr32(c, (RW(29) + 32), c->f[0].u);
SET64(31, 0x2a67ec); wr128(c, (RW(16) + 48) & ~15u, &c->r[2]); JP_F_002AF080(c);
SET32(4, RW(29) + 48);
SET64(31, 0x2a67f8); SET32(5, RW(29) + 32); JP_F_002AEBB0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a6804); SET64(5, RD(2) + RD(0)); JP_F_002AEA80(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002A6820(Ctx *c) { /* func_002A6820 */
ENTER(0x2a6820);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 12), c->f[23].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
SET32(4, RW(29) + 48);
wr32(c, (RW(29) + 4), c->f[21].u);
c->f[21].u = c->f[15].u;
c->f[0].f = fpu(F(21) * F(13));
c->f[23].f = fpu_div(F(0), F(12));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = c->f[16].u;
c->f[0].f = fpu(F(21) * F(14));
c->f[22].f = fpu_div(F(0), F(12));
SET64(31, 0x2a6870);  JP_F_002AF080(c);
SET64(8, (s64)(s32)0x40000000);
SET64(4, (s64)(s32)0xc0000000);
c->f[3].u = RW(8);
SET32(5, RW(29) + 96);
c->f[1].f = fpu(F(22) + F(22));
SET32(7, RW(29) + 64);
SET32(6, RW(29) + 80);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(6) + 12), RW(3));
wr32(c, (RW(5) + 12), RW(0));
c->f[3].f = fpu(F(3) * F(21));
c->f[1].f = fpu_div(F(3), F(1));
c->f[2].f = fpu(F(23) + F(23));
c->f[2].f = fpu_div(F(3), F(2));
wr32(c, (RW(29) + 48), c->f[2].u);
wr32(c, (RW(7) + 4), c->f[1].u);
rd128(c, (RW(29) + 48) & ~15u, &c->r[3]);
c->f[1].f = fpu(F(20) * F(21));
c->f[0].u = RW(4);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(7) + 0) & ~15u, &c->r[3]);
c->f[3].f = fpu(F(20) - F(21));
c->f[0].f = fpu(F(0) * F(1));
wr128(c, (RW(16) + 16) & ~15u, &c->r[3]);
c->f[2].f = fpu(F(20) + F(21));
c->f[1].f = fpu_div(F(2), F(3));
c->f[0].f = fpu_div(F(0), F(3));
wr32(c, (RW(6) + 8), c->f[1].u);
wr32(c, (RW(5) + 8), c->f[0].u);
rd128(c, (RW(6) + 0) & ~15u, &c->r[4]);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[4]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 112); return;
}

void JP_F_002A6920(Ctx *c) { /* func_002A6920 */
ENTER(0x2a6920);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A695C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4384);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 176), RW(3)); if (t) goto L_002A6958; }
SET64(31, 0x2a6958);  JP_F_001004B0(c);
L_002A6958:;
SET64(2, RD(16) + RD(0));
L_002A695C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A6970(Ctx *c) { /* func_002A6970 */
ENTER(0x2a6970);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 4384);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2a6990); wr32(c, (RW(4) + 176), RW(2)); JP_F_002AF080(c);
SET64(31, 0x2a6998); SET32(4, RW(16) + 64); JP_F_002AF080(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 128), RW(0));
wr32(c, (RW(16) + 132), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 136), RW(0));
wr32(c, (RW(16) + 140), RW(3));
wr32(c, (RW(16) + 144), RW(0));
wr32(c, (RW(16) + 148), RW(0));
wr32(c, (RW(16) + 152), RW(0));
wr32(c, (RW(16) + 156), RW(3));
wr32(c, (RW(16) + 172), RW(3));
wr32(c, (RW(16) + 160), RW(0));
wr32(c, (RW(16) + 164), RW(0));
wr32(c, (RW(16) + 168), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A69E0(Ctx *c) { /* func_002A69E0 */
ENTER(0x2a69e0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2a69f8); SET32(4, RW(29) + 32); JP_F_002AF080(c);
SET64(6, (s64)(s32)0x540000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 32);
SET64(31, 0x2a6a0c); SET32(6, RW(6) + 1520); JP_F_002A63F0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002A6A20(Ctx *c) { /* func_002A6A20 */
ENTER(0x2a6a20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A6A68; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 4400);
SET64(31, 0x2a6a50); wr32(c, (RW(17) + 144), RW(2)); JP_F_002A6550(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A6A6C; }
SET64(31, 0x2a6a68); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A6A68:;
SET64(2, RD(17) + RD(0));
L_002A6A6C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A6A80(Ctx *c) { /* func_002A6A80 */
ENTER(0x2a6a80);
wr8(c, (RW(4) + 36), (u8)RW(5));
wr8(c, (RW(4) + 37), (u8)RW(6)); return;
}

void JP_F_002A6A90(Ctx *c) { /* func_002A6A90 */
ENTER(0x2a6a90);
SET32(2, RW(4) + 4); return;
}

void JP_F_002A6AA0(Ctx *c) { /* func_002A6AA0 */
ENTER(0x2a6aa0);
SET64(2, rd8(c, (RW(4) + 36)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002A6ACC; }
SET64(2, rd8(c, (RW(4) + 37)));
SET64(3, RD(5) & 0xff);
SET64(2, RD(2) & 0xf0);
{ int t = RD(3) != RD(2); SET32(2, RW(4) + 36); if (t) goto L_002A6AC8; }
 goto L_002A6ACC;
L_002A6AC8:;
SET64(2, RD(0) + RD(0));
L_002A6ACC:;
 return;
}

void JP_F_002A6AE0(Ctx *c) { /* func_002A6AE0 */
ENTER(0x2a6ae0);
SET32(2, RW(4) + 36); return;
}

static void JP_B_002A6AF0(Ctx *c, u32 entry) { /* func_002A6AF0 */
ENTER(entry);
switch (entry) { case 0x2a6b68: goto L_002A6B68; case 0x2a6b8c: goto L_002A6B8C; case 0x2a6bb0: goto L_002A6BB0; case 0x2a6bd4: goto L_002A6BD4; case 0x2a6bf8: goto L_002A6BF8; }
L_002A6AF0:;
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 68)));
SET64(3, (s32)rd32(c, (RW(5) + 12)));
{ int t = RD(3) != RD(2); SET64(16, RD(4) + RD(0)); if (t) goto L_002A6CA4; }
SET64(2, rd8(c, (RW(16) + 72)));
{ int t = RD(2) != RD(0);  if (t) goto L_002A6C1C; }
L_002A6B1C:;
SET64(25, (s32)rd32(c, (RW(16) + 0)));
L_002A6B20:;
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2a6b2c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002A6C80; }
SET64(2, (s32)rd32(c, (RW(16) + 68)));
SET64(5, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2a6b44); SET64(4, (s32)rd32(c, (RW(2) + 44))); JP_F_00137ED0(c);
SET64(1, RD(2) < (u64)(s64)8);
{ int t = RD(1) == RD(0); SET64(3, (s64)(s32)0x4c0000); if (t) goto L_002A6BF8; }
SET32(2, RW(2) << 2);
SET32(3, RW(3) + -28976);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x2a6af0: goto L_002A6AF0; case 0x2a6b68: goto L_002A6B68; case 0x2a6b8c: goto L_002A6B8C; case 0x2a6bb0: goto L_002A6BB0; case 0x2a6bd4: goto L_002A6BD4; case 0x2a6bf8: goto L_002A6BF8; default: rt_jump(c, t); return; } }
L_002A6B68:;
SET64(2, (s32)rd32(c, (RW(16) + 68)));
SET32(3, RW(0) + 2);
wr32(c, (RW(2) + 16), RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2a6b84); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1); goto L_002A6CAC;
L_002A6B8C:;
SET64(2, (s32)rd32(c, (RW(16) + 68)));
SET32(3, RW(0) + 2);
wr32(c, (RW(2) + 16), RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2a6ba8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1); goto L_002A6CAC;
L_002A6BB0:;
SET64(2, (s32)rd32(c, (RW(16) + 68)));
SET32(3, RW(0) + 1);
wr32(c, (RW(2) + 16), RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2a6bcc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) + RD(0)); goto L_002A6CAC;
L_002A6BD4:;
SET64(2, (s32)rd32(c, (RW(16) + 68)));
SET32(3, RW(0) + 2);
wr32(c, (RW(2) + 16), RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2a6bf0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1); goto L_002A6CAC;
L_002A6BF8:;
SET64(2, (s32)rd32(c, (RW(16) + 68)));
SET32(3, RW(0) + 3);
wr32(c, (RW(2) + 16), RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2a6c14); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) + RD(0)); goto L_002A6CAC;
L_002A6C1C:;
SET64(4, (s32)rd32(c, (RW(5) + 44)));
SET64(31, 0x2a6c28); SET64(5, (s32)rd32(c, (RW(5) + 48))); JP_F_00137FE8(c);
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3);  if (t) goto L_002A6C5C; }
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 1); if (t) goto L_002A6C54; }
{ int t = RD(2) == RD(3);  if (t) goto L_002A6C4C; }
SET64(25, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_002A6B20; }
L_002A6C4C:;
wr8(c, (RW(16) + 72), (u8)RW(0)); { POLL(); goto L_002A6B1C; }
L_002A6C54:;
wr8(c, (RW(16) + 72), (u8)RW(0)); { POLL(); goto L_002A6B1C; }
L_002A6C5C:;
SET64(2, (s32)rd32(c, (RW(16) + 68)));
SET32(3, RW(0) + 3);
wr32(c, (RW(2) + 16), RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2a6c78); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) + RD(0)); goto L_002A6CAC;
L_002A6C80:;
SET64(2, (s32)rd32(c, (RW(16) + 68)));
SET32(3, RW(0) + 4);
wr32(c, (RW(2) + 16), RW(3));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2a6c9c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) + RD(0)); goto L_002A6CAC;
L_002A6CA4:;
wr32(c, (RW(5) + 16), RW(2));
SET64(2, RD(0) + RD(0));
L_002A6CAC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void JP_F_002A6AF0(Ctx *c) { JP_B_002A6AF0(c, 0x2a6af0); }
void JP_F_002A6B68(Ctx *c) { JP_B_002A6AF0(c, 0x2a6b68); }
void JP_F_002A6B8C(Ctx *c) { JP_B_002A6AF0(c, 0x2a6b8c); }
void JP_F_002A6BB0(Ctx *c) { JP_B_002A6AF0(c, 0x2a6bb0); }
void JP_F_002A6BD4(Ctx *c) { JP_B_002A6AF0(c, 0x2a6bd4); }
void JP_F_002A6BF8(Ctx *c) { JP_B_002A6AF0(c, 0x2a6bf8); }

void JP_F_002A6CC0(Ctx *c) { /* func_002A6CC0 */
ENTER(0x2a6cc0);
SET32(29, RW(29) + -48);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 68)));
SET64(4, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2a6cec); SET64(7, RD(0) + RD(0)); JP_F_001382B0(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0);  if (t) goto L_002A6D00; }
SET64(2, RD(0) + RD(0)); goto L_002A6D48;
L_002A6D00:;
SET64(2, (s32)rd32(c, (RW(17) + 68)));
SET32(6, RW(0) + 2);
SET64(4, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2a6d18); SET64(7, RD(0) + RD(0)); JP_F_001382B0(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002A6D24; }
SET64(16, RD(2) + RD(0));
L_002A6D24:;
{ int t = RD(16) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002A6D48; }
SET64(2, (s32)rd32(c, (RW(17) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 4)));
{ int t = RD(16) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_002A6D44; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A6D4C;
L_002A6D44:;
SET64(2, RD(0) + RD(0));
L_002A6D48:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A6D4C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A6D60(Ctx *c) { /* func_002A6D60 */
ENTER(0x2a6d60);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET32(4, RW(16) + 4);
SET64(31, 0x2a6d80); SET32(5, RW(16) + 36); JP_F_00127218(c);
SET64(2, (s32)rd32(c, (RW(16) + 68)));
SET64(4, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2a6d94); SET32(6, RW(16) + 36); JP_F_00137D68(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A6DB0(Ctx *c) { /* func_002A6DB0 */
ENTER(0x2a6db0);
SET32(3, RW(0) + 255);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr8(c, (RW(4) + 9), (u8)RW(0));
wr8(c, (RW(4) + 6), (u8)RW(3));
wr8(c, (RW(4) + 7), (u8)RW(3));
wr8(c, (RW(4) + 10), (u8)RW(0));
wr8(c, (RW(4) + 11), (u8)RW(0));
wr8(c, (RW(4) + 38), (u8)RW(3));
wr8(c, (RW(4) + 39), (u8)RW(3));
wr8(c, (RW(4) + 40), (u8)RW(0));
wr8(c, (RW(4) + 41), (u8)RW(0));
wr8(c, (RW(4) + 42), (u8)RW(0));
wr8(c, (RW(4) + 43), (u8)RW(0)); return;
}

void JP_F_002A6DF0(Ctx *c) { /* func_002A6DF0 */
ENTER(0x2a6df0);
SET64(2, (s32)rd32(c, (RW(4) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 48))); return;
}

void JP_F_002A6E00(Ctx *c) { /* func_002A6E00 */
ENTER(0x2a6e00);
SET64(2, (s32)rd32(c, (RW(4) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 44))); return;
}

void JP_F_002A6E10(Ctx *c) { /* func_002A6E10 */
ENTER(0x2a6e10);
SET32(2, RW(4) + 36); return;
}

void JP_F_002A6E20(Ctx *c) { /* func_002A6E20 */
ENTER(0x2a6e20);
SET64(4, (s32)rd32(c, (RW(4) + 68))); { JP_F_002A7750(c); return; }
}

void JP_F_002A6E30(Ctx *c) { /* func_002A6E30 */
ENTER(0x2a6e30);
SET64(4, (s32)rd32(c, (RW(4) + 68))); { JP_F_002A77A0(c); return; }
}

void JP_F_002A6E40(Ctx *c) { /* func_002A6E40 */
ENTER(0x2a6e40);
SET64(4, (s32)rd32(c, (RW(4) + 68))); { JP_F_002A7820(c); return; }
}

void JP_F_002A6E50(Ctx *c) { /* func_002A6E50 */
ENTER(0x2a6e50);
SET64(4, (s32)rd32(c, (RW(4) + 68))); { JP_F_002A78B0(c); return; }
}

void JP_F_002A6E60(Ctx *c) { /* func_002A6E60 */
ENTER(0x2a6e60);
SET64(2, (s32)rd32(c, (RW(4) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 4))); return;
}

void JP_F_002A6E70(Ctx *c) { /* func_002A6E70 */
ENTER(0x2a6e70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A6EAC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4432);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002A6EA8; }
SET64(31, 0x2a6ea8);  JP_F_001004B0(c);
L_002A6EA8:;
SET64(2, RD(16) + RD(0));
L_002A6EAC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A6EC0(Ctx *c) { /* func_002A6EC0 */
ENTER(0x2a6ec0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 4432);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 0), RW(2));
SET32(2, RW(0) + 255);
wr32(c, (RW(4) + 68), RW(5));
wr8(c, (RW(4) + 72), (u8)RW(0));
wr8(c, (RW(4) + 5), (u8)RW(0));
wr8(c, (RW(4) + 4), (u8)RW(2));
wr8(c, (RW(4) + 36), (u8)RW(2));
wr8(c, (RW(4) + 37), (u8)RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2a6f04); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A6F20(Ctx *c) { /* func_002A6F20 */
ENTER(0x2a6f20);
 { JP_F_002ADA40(c); return; }
}

static void JP_B_002A6F30(Ctx *c, u32 entry) { /* func_002A6F30 */
ENTER(entry);
switch (entry) { case 0x2a6f90: goto L_002A6F90; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
L_002A6F44:;
SET64(4, RD(17) + RD(0));
L_002A6F48:;
SET64(31, 0x2a6f50); SET32(5, RW(0) + 16); JP_F_002AD840(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(16, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a6f64); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) < RD(16));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_002A6F48; } }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a6f88); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002A6F44; }
L_002A6F90:;
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x540000);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(3) + 1760)));
SET64(16, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(0) < RSD(16));
{ int t = RD(3) != RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002A6FC0; }
L_002A6FB8:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A6FF8;
L_002A6FC0:;
SET64(2, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(2) + 1768)));
SET64(31, 0x2a6fd0); SET64(5, RD(17) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2a6fe0); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(16));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002A6FC0; } }
 { POLL(); goto L_002A6FB8; }
L_002A6FF8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002A6F30(Ctx *c) { JP_B_002A6F30(c, 0x2a6f30); }
void JP_F_002A6F90(Ctx *c) { JP_B_002A6F30(c, 0x2a6f90); }

void JP_F_002A7010(Ctx *c) { /* func_002A7010 */
ENTER(0x2a7010);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a702c); SET32(4, RW(0) + 20); JP_F_002AC980(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0);  if (t) goto L_002A7058; }
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002A7044; }
SET32(17, RW(17) + 144);
L_002A7044:;
SET64(6, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2a7054); SET32(7, RW(0) + 32); JP_F_002A7F50(c);
SET64(16, RD(2) + RD(0));
L_002A7058:;
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a706c);  rt_call(c, t); }
SET64(4, RD(2) + RD(0));
SET64(31, 0x2a7078); SET64(5, RD(16) + RD(0)); JP_F_002AD930(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A7090(Ctx *c) { /* func_002A7090 */
ENTER(0x2a7090);
SET32(29, RW(29) + -16);
SET64(2, (s32)rd32(c, (RW(4) + 156)));
wr64(c, (RW(29) + 0), RD(31));
mul_s(c, 0, 3, RSW(5), RSW(2));
SET64(2, (s64)(s32)0x540000);
SET32(5, RW(6) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 1760)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0); SET64(2, (s64)(s32)0x540000); if (t) goto L_002A70C8; }
SET64(2, RD(0) + RD(0));
L_002A70C0:;
SET64(31, rd64(c, (RW(29) + 0))); goto L_002A70D8;
L_002A70C8:;
SET64(31, 0x2a70d0); SET64(4, (s32)rd32(c, (RW(2) + 1768))); JP_F_002ADD80(c);
 { POLL(); goto L_002A70C0; }
L_002A70D8:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002A70E0(Ctx *c) { /* func_002A70E0 */
ENTER(0x2a70e0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
{ int t = RD(19) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_002A71E0; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4496);
SET32(3, RW(3) + 4480);
wr32(c, (RW(19) + 84), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 0), RW(3));
SET32(2, RW(2) + 4536);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 144), RW(2));
SET32(3, RW(3) + 4512);
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(19) + 88), RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 1760)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4556);
wr32(c, (RW(19) + 148), RW(3));
SET64(16, (s32)rd32(c, (RW(2) + 16)));
SET64(1, RSD(0) < RSD(16));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002A7198; }
L_002A7158:;
SET64(2, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(2) + 1768)));
SET64(31, 0x2a7168); SET64(5, RD(17) + RD(0)); JP_F_002ADD80(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002A7188; }
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(4, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a7184); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A7188:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(16));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002A7158; } }
L_002A7198:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2a71a4); SET64(4, (s32)rd32(c, (RW(2) + 1760))); JP_F_002ADDD0(c);
SET64(2, (s32)rd32(c, (RW(28) + -29944)));
{ int t = RD(2) == RD(19);  if (t) goto L_002A71EC; }
L_002A71B0:;
SET32(2, RW(19) + 144);
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x4e0000); if (t) goto L_002A71F4; }
L_002A71BC:;
SET64(4, RD(19) + RD(0));
SET64(31, 0x2a71c8); SET64(5, RD(0) + RD(0)); JP_F_002ADB40(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(19) + RD(0)); if (t) goto L_002A71E4; }
SET64(31, 0x2a71e0); SET64(4, RD(19) + RD(0)); JP_F_001004B0(c);
L_002A71E0:;
SET64(2, RD(19) + RD(0));
L_002A71E4:;
SET64(31, rd64(c, (RW(29) + 64))); goto L_002A7200;
L_002A71EC:;
wr32(c, (RW(28) + -29944), RW(0)); { POLL(); goto L_002A71B0; }
L_002A71F4:;
SET32(2, RW(2) + 4576);
wr32(c, (RW(19) + 144), RW(2)); { POLL(); goto L_002A71BC; }
L_002A7200:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A7220(Ctx *c) { /* func_002A7220 */
ENTER(0x2a7220);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(7) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(5, (s32)rd32(c, (RW(28) + -29932)));
{ int t = RD(5) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_002A7254; }
SET32(5, RW(5) + 112);
L_002A7254:;
SET64(4, RD(19) + RD(0));
SET32(6, RW(0) + 48);
SET64(31, 0x2a7264); SET32(7, RW(0) + 4096); JP_F_002ADBE0(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 152), RW(17));
SET32(2, RW(2) + 4480);
wr32(c, (RW(19) + 156), RW(16));
wr32(c, (RW(19) + 0), RW(2));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4496);
wr32(c, (RW(19) + 84), RW(2));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4512);
wr32(c, (RW(19) + 88), RW(2));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4536);
wr32(c, (RW(19) + 144), RW(2));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4556);
wr32(c, (RW(19) + 148), RW(2));
SET64(2, (s32)rd32(c, (RW(28) + -29944)));
{ int t = RD(2) == RD(0);  if (t) goto L_002A72F8; }
L_002A72B4:;
SET64(2, (s32)rd32(c, (RW(19) + 152)));
SET64(1, RSD(0) < RSD(2));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002A72F0; }
L_002A72C4:;
SET64(2, (s32)rd32(c, (RW(19) + 156)));
SET64(2, RSD(0) < RSD(2));
{ int t = RD(2) != RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002A7300; }
L_002A72D8:;
SET64(2, (s32)rd32(c, (RW(19) + 152)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002A72C4; } }
L_002A72F0:;
SET64(2, RD(19) + RD(0)); goto L_002A7350;
L_002A72F8:;
wr32(c, (RW(28) + -29944), RW(19)); { POLL(); goto L_002A72B4; }
L_002A7300:;
SET64(31, 0x2a7308); SET32(4, RW(0) + 156); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002A7320; }
SET64(5, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x2a7320); SET64(7, RD(18) + RD(0)); JP_F_002A7CB0(c);
L_002A7320:;
SET64(5, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(2) + 1760)));
SET64(31, 0x2a7334); SET64(6, (s32)rd32(c, (RW(4) + 16))); JP_F_002ADFE0(c);
SET64(2, (s32)rd32(c, (RW(19) + 156)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002A7300; } }
 { POLL(); goto L_002A72D8; }
L_002A7350:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A7370(Ctx *c) { /* func_002A7370 */
ENTER(0x2a7370);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A73AC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4576);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002A73A8; }
SET64(31, 0x2a73a8);  JP_F_001004B0(c);
L_002A73A8:;
SET64(2, RD(16) + RD(0));
L_002A73AC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A73C0(Ctx *c) { /* func_002A73C0 */
ENTER(0x2a73c0);
SET32(29, RW(29) + -16);
SET64(6, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(28) + -31464), RW(4));
wr32(c, (RW(28) + -31460), RW(5));
SET64(4, (s64)(s32)0x4c0000);
SET32(4, RW(4) + -28944);
SET64(31, 0x2a73e4); SET64(5, RD(0) + RD(0)); JP_F_001177B8(c);
SET64(31, 0x2a73ec); SET64(4, RD(0) + RD(0)); JP_F_001377B8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002A7400(Ctx *c) { /* func_002A7400 */
ENTER(0x2a7400);
SET64(2, (s32)rd32(c, (RW(28) + -29944))); return;
}

void JP_F_002A7410(Ctx *c) { /* func_002A7410 */
ENTER(0x2a7410);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A744C; }
{ int t = RD(16) != RD(0); SET32(4, RW(17) + 12); if (t) goto L_002A7458; }
SET64(2, RD(16) << 48);
L_002A7438:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A7450; }
SET64(31, 0x2a744c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A744C:;
SET64(2, RD(17) + RD(0));
L_002A7450:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A7468;
L_002A7458:;
SET64(31, 0x2a7460); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET64(2, RD(16) << 48); { POLL(); goto L_002A7438; }
L_002A7468:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A7480(Ctx *c) { /* func_002A7480 */
ENTER(0x2a7480);
SET32(4, RW(4) + -32); { JP_F_002A70E0(c); return; }
}

void JP_F_002A7490(Ctx *c) { /* func_002A7490 */
ENTER(0x2a7490);
SET32(4, RW(4) + -88); { JP_F_002A6F20(c); return; }
}

void JP_F_002A74A0(Ctx *c) { /* func_002A74A0 */
ENTER(0x2a74a0);
SET32(4, RW(4) + -144); { JP_F_002A6F20(c); return; }
}

void JP_F_002A74B0(Ctx *c) { /* func_002A74B0 */
ENTER(0x2a74b0);
SET32(4, RW(4) + -144); { JP_F_002A6F90(c); return; }
}

void JP_F_002A74C0(Ctx *c) { /* func_002A74C0 */
ENTER(0x2a74c0);
SET32(4, RW(4) + -144); { JP_F_002A70E0(c); return; }
}

void JP_F_002A74D0(Ctx *c) { /* func_002A74D0 */
ENTER(0x2a74d0);
SET32(4, RW(4) + -148); { JP_F_002A7010(c); return; }
}

void JP_F_002A74E0(Ctx *c) { /* func_002A74E0 */
ENTER(0x2a74e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A751C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4600);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002A7518; }
SET64(31, 0x2a7518);  JP_F_001004B0(c);
L_002A7518:;
SET64(2, RD(16) + RD(0));
L_002A751C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A7530(Ctx *c) { /* func_002A7530 */
ENTER(0x2a7530);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(0) + 15);
SET32(2, RW(2) + 4600);
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 0), RW(2));
wr32(c, (RW(4) + 16), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3));
wr32(c, (RW(4) + 8), RW(3)); return;
}

void JP_F_002A7560(Ctx *c) { /* func_002A7560 */
ENTER(0x2a7560);
SET32(29, RW(29) + -16);
SET64(5, (s32)rd32(c, (RW(4) + 48)));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2a7574); SET64(4, (s32)rd32(c, (RW(4) + 44))); JP_F_00137ED0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x6);
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002A7590(Ctx *c) { /* func_002A7590 */
ENTER(0x2a7590);
SET32(29, RW(29) + -32);
SET64(4, (s32)rd32(c, (RW(4) + 52)));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(4) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A75B0; }
SET64(2, RD(0) + RD(0)); goto L_002A75D4;
L_002A75B0:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2a75c0);  rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a75d4); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
L_002A75D4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A75F0(Ctx *c) { /* func_002A75F0 */
ENTER(0x2a75f0);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a760c); SET32(5, RW(5) + -28904); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002A7620(Ctx *c) { /* func_002A7620 */
ENTER(0x2a7620);
SET32(29, RW(29) + -48);
SET64(4, (s32)rd32(c, (RW(4) + 52)));
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
{ int t = RD(4) == RD(0); c->f[20].u = c->f[12].u; if (t) goto L_002A7700; }
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(20) < F(0);
{ int t = !c->fcc; SET32(5, RW(0) + 112); if (t) goto L_002A7700; }
SET64(31, 0x2a7660);  JP_F_002A6AA0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002A770C; }
SET32(2, RW(2) + RW(16));
SET64(2, rd8(c, (RW(2) + 0)));
{ int t = RSD(2) < 0; SET32(3, RW(2) >> 1); if (t) goto L_002A7684; }
c->f[0].u = RW(2);
c->f[2].f = (f32)(s32)c->f[0].u; goto L_002A769C;
L_002A7684:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[2].f = fpu(F(2) + F(2));
L_002A769C:;
SET64(2, (s64)(s32)0x43000000);
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->fcc = F(20) < F(0);
{ int t = c->fcc; c->f[2].f = fpu(F(2) - F(1)); if (t) goto L_002A7718; }
c->f[20].f = fpu(F(20) * F(1));
L_002A76BC:;
c->f[0].u = c->f[20].u ^ 0x80000000u;
c->fcc = F(2) < F(0);
{ int t = c->fcc;  if (t) goto L_002A7720; }
c->fcc = F(2) <= F(20);
{ int t = c->fcc;  if (t) goto L_002A7728; }
c->f[2].f = fpu(F(2) - F(20));
L_002A76DC:;
SET64(2, (s64)(s32)0x43000000);
L_002A76E0:;
c->f[0].u = RW(2);
c->f[0].f = fpu(F(0) - F(20));
c->f[0].f = fpu_div(F(2), F(0));
 goto L_002A7734;
L_002A7700:;
c->f[0].u = RW(0);
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A7738;
L_002A770C:;
c->f[0].u = RW(0);
 goto L_002A7734;
L_002A7718:;
c->f[20].u = c->f[0].u; { POLL(); goto L_002A76BC; }
L_002A7720:;
c->f[2].f = fpu(F(2) + F(20)); { POLL(); goto L_002A76DC; }
L_002A7728:;
c->f[2].u = RW(0);
SET64(2, (s64)(s32)0x43000000); { POLL(); goto L_002A76E0; }
L_002A7734:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A7738:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A7750(Ctx *c) { /* func_002A7750 */
ENTER(0x2a7750);
SET64(7, (s32)rd32(c, (RW(4) + 40)));
SET64(6, (s32)rd32(c, (RW(4) + 20)));
SET64(3, (s32)rd32(c, (RW(4) + 24)));
SET32(8, RW(7) + 2);
SET32(7, RW(6) << 1);
SET32(6, RW(7) + RW(6));
SET32(6, RW(6) << 1);
SET32(6, RW(3) + RW(6));
SET32(3, RW(6) + RW(7));
{ int t = RD(8) == RD(3); wr32(c, (RW(4) + 40), RW(8)); if (t) goto L_002A7788; }
L_002A777C:;
SET64(3, (s32)rd32(c, (RW(4) + 40)));
wr16(c, (RW(3) + 0), (u16)RW(5)); goto L_002A7790;
L_002A7788:;
wr32(c, (RW(4) + 40), RW(6)); { POLL(); goto L_002A777C; }
L_002A7790:;
 return;
}

void JP_F_002A77A0(Ctx *c) { /* func_002A77A0 */
ENTER(0x2a77a0);
SET64(6, (s32)rd32(c, (RW(4) + 36)));
SET64(7, (s32)rd32(c, (RW(4) + 20)));
SET64(3, (s32)rd32(c, (RW(4) + 24)));
SET32(8, RW(6) + 2);
SET32(6, RW(7) << 2);
SET32(6, RW(3) + RW(6));
SET32(3, RW(7) << 1);
SET32(3, RW(6) + RW(3));
{ int t = RD(8) == RD(3); wr32(c, (RW(4) + 36), RW(8)); if (t) goto L_002A7808; }
L_002A77C8:;
SET64(3, (s32)rd32(c, (RW(4) + 36)));
SET64(6, RD(5) & 0xffff);
SET64(7, RD(0) + RD(0));
wr16(c, (RW(3) + 0), (u16)RW(5));
SET32(5, RW(0) + 1);
L_002A77DC:;
SET32(3, RW(5) << (RW(7) & 31));
SET64(3, RD(6) & RD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_002A7810; }
L_002A77F0:;
SET32(7, RW(7) + 1);
SET64(3, RD(7) < (u64)(s64)16);
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_002A77DC; } }
 goto L_002A7818;
L_002A7808:;
wr32(c, (RW(4) + 36), RW(6)); { POLL(); goto L_002A77C8; }
L_002A7810:;
wr32(c, (RW(4) + 72), RW(0)); { POLL(); goto L_002A77F0; }
L_002A7818:;
 return;
}

void JP_F_002A7820(Ctx *c) { /* func_002A7820 */
ENTER(0x2a7820);
SET64(7, (s32)rd32(c, (RW(4) + 32)));
SET64(6, (s32)rd32(c, (RW(4) + 20)));
SET64(3, (s32)rd32(c, (RW(4) + 24)));
SET32(8, RW(7) + 2);
SET32(7, RW(6) << 1);
SET32(6, RW(3) + RW(7));
SET32(3, RW(6) + RW(7));
{ int t = RD(8) == RD(3); wr32(c, (RW(4) + 32), RW(8)); if (t) goto L_002A7898; }
L_002A7844:;
SET64(7, (s32)rd32(c, (RW(4) + 32)));
SET64(3, (s64)(s32)0x540000);
SET64(6, RD(5) & 0xffff);
SET64(8, RD(0) + RD(0));
wr16(c, (RW(7) + 0), (u16)RW(5));
SET64(7, (s32)rd32(c, (RW(3) + 1888)));
SET32(5, RW(0) + 1);
L_002A7860:;
SET32(3, RW(5) << (RW(8) & 31));
SET64(3, RD(6) & RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_002A7880; }
SET64(3, (s32)rd32(c, (RW(4) + 72)));
{ int t = RD(3) != RD(0);  if (t) goto L_002A7880; }
wr32(c, (RW(4) + 72), RW(7));
L_002A7880:;
SET32(8, RW(8) + 1);
SET64(3, RD(8) < (u64)(s64)16);
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_002A7860; } }
 goto L_002A78A0;
L_002A7898:;
wr32(c, (RW(4) + 32), RW(6)); { POLL(); goto L_002A7844; }
L_002A78A0:;
 return;
}

void JP_F_002A78B0(Ctx *c) { /* func_002A78B0 */
ENTER(0x2a78b0);
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET64(7, (s32)rd32(c, (RW(4) + 28)));
SET64(6, (s32)rd32(c, (RW(4) + 24)));
SET32(3, RW(3) << 1);
SET32(7, RW(7) + 2);
SET32(3, RW(6) + RW(3));
{ int t = RD(7) == RD(3); wr32(c, (RW(4) + 28), RW(7)); if (t) goto L_002A78DC; }
L_002A78D0:;
SET64(3, (s32)rd32(c, (RW(4) + 28)));
wr16(c, (RW(3) + 0), (u16)RW(5)); goto L_002A78E4;
L_002A78DC:;
wr32(c, (RW(4) + 28), RW(6)); { POLL(); goto L_002A78D0; }
L_002A78E4:;
 return;
}

void JP_F_002A78F0(Ctx *c) { /* func_002A78F0 */
ENTER(0x2a78f0);
SET32(2, RW(0) + 3);
{ int t = RD(5) == RD(2); SET32(2, RW(0) + 2); if (t) goto L_002A7944; }
{ int t = RD(5) == RD(2);  if (t) goto L_002A7938; }
SET32(2, RW(0) + 1);
{ int t = RD(5) == RD(2);  if (t) goto L_002A792C; }
{ int t = RD(5) == RD(0);  if (t) goto L_002A7920; }
SET64(2, RD(0) + RD(0)); goto L_002A794C;
L_002A7920:;
SET64(2, (s32)rd32(c, (RW(4) + 28)));
SET64(2, rd16(c, (RW(2) + 0))); goto L_002A794C;
L_002A792C:;
SET64(2, (s32)rd32(c, (RW(4) + 32)));
SET64(2, rd16(c, (RW(2) + 0))); goto L_002A794C;
L_002A7938:;
SET64(2, (s32)rd32(c, (RW(4) + 36)));
SET64(2, rd16(c, (RW(2) + 0))); goto L_002A794C;
L_002A7944:;
SET64(2, (s32)rd32(c, (RW(4) + 40)));
SET64(2, rd16(c, (RW(2) + 0)));
L_002A794C:;
 return;
}

void JP_F_002A7960(Ctx *c) { /* func_002A7960 */
ENTER(0x2a7960);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002A79D8; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a798c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002A79CC; }
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_002A79E0; }
SET64(3, (s32)rd32(c, (RW(16) + 16)));
L_002A79A8:;
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_002A79D0; }
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET32(2, RW(0) + 15);
{ int t = RD(3) == RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_002A79CC; }
SET64(31, 0x2a79cc);  JP_F_002A7A00(c);
L_002A79CC:;
SET32(2, RW(0) + 1);
L_002A79D0:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002A79F4;
L_002A79D8:;
 goto L_002A79F0;
L_002A79E0:;
SET64(31, 0x2a79e8);  JP_F_002A7A00(c);
SET64(3, (s32)rd32(c, (RW(16) + 16))); { POLL(); goto L_002A79A8; }
L_002A79F0:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002A79F4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A7A00(Ctx *c) { /* func_002A7A00 */
ENTER(0x2a7a00);
SET32(29, RW(29) + -80);
SET32(3, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
{ int t = RD(4) == RD(0);  if (t) goto L_002A7A40; }
{ int t = RD(4) == RD(0);  if (t) goto L_002A7A3C; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a7a3c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A7A3C:;
wr32(c, (RW(16) + 52), RW(0));
L_002A7A40:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(0) + 1);
{ int t = RD(4) == RD(3);  if (t) goto L_002A7A64; }
L_002A7A50:;
SET64(3, (s32)rd32(c, (RW(16) + 52)));
L_002A7A54:;
{ int t = RD(3) == RD(0); SET32(4, RW(0) + 76); if (t) goto L_002A7BB4; }
L_002A7A5C:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002A7BE4;
L_002A7A64:;
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2a7a70); SET64(4, (s32)rd32(c, (RW(16) + 44))); JP_F_00137ED0(c);
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_002A7A50; } }
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2a7a84); SET64(4, (s32)rd32(c, (RW(16) + 44))); JP_F_00137ED0(c);
SET32(3, RW(0) + 6);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 2); if (t) goto L_002A7A98; }
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_002A7A50; } }
L_002A7A98:;
SET64(4, (s32)rd32(c, (RW(16) + 44)));
SET32(6, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2a7aac); SET64(7, RD(0) + RD(0)); JP_F_001382B0(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 4), RW(2)); if (t) { POLL(); goto L_002A7A50; } }
SET64(4, (s32)rd32(c, (RW(16) + 44)));
SET32(6, RW(0) + 2);
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2a7ac8); SET64(7, RD(0) + RD(0)); JP_F_001382B0(c);
{ int t = RSD(2) > 0; wr32(c, (RW(16) + 8), RW(2)); if (t) goto L_002A7BA4; }
L_002A7AD0:;
SET64(4, (s32)rd32(c, (RW(16) + 44)));
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2a7ae0); SET32(6, RW(29) + 48); JP_F_00137D68(c);
SET64(4, rd8(c, (RW(29) + 49)));
SET32(3, RW(0) + 65);
{ int t = RD(4) == RD(3); SET32(3, RW(0) + 7); if (t) goto L_002A7BAC; }
L_002A7AF0:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET32(3, RW(0) + 7);
{ int t = RD(4) == RD(3); SET32(3, RW(0) + 4); if (t) goto L_002A7B40; }
{ int t = RD(4) == RD(3);  if (t) goto L_002A7B10; }
SET64(3, (s32)rd32(c, (RW(16) + 52))); { POLL(); goto L_002A7A54; }
L_002A7B10:;
SET64(31, 0x2a7b18); SET32(4, RW(0) + 76); JP_F_00100670(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET32(3, RW(0) + 2); if (t) goto L_002A7B34; }
SET64(31, 0x2a7b2c); SET64(5, RD(16) + RD(0)); JP_F_002A85B0(c);
SET64(4, RD(2) + RD(0));
SET32(3, RW(0) + 2);
L_002A7B34:;
wr32(c, (RW(16) + 52), RW(4));
wr32(c, (RW(16) + 16), RW(3)); { POLL(); goto L_002A7A50; }
L_002A7B40:;
SET64(31, 0x2a7b48); SET32(4, RW(0) + 76); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002A7B58; }
SET64(31, 0x2a7b58); SET64(5, RD(16) + RD(0)); JP_F_002A8430(c);
L_002A7B58:;
SET64(4, (s32)rd32(c, (RW(16) + 44)));
SET32(6, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(7, RD(0) + RD(0));
wr32(c, (RW(16) + 52), RW(2));
SET32(2, RW(0) + 2);
SET64(31, 0x2a7b78); wr32(c, (RW(16) + 16), RW(2)); JP_F_001383E8(c);
SET32(4, RW(29) + 32);
SET64(31, 0x2a7b84); SET64(5, RD(16) + RD(0)); JP_F_002B5B00(c);
SET32(4, RW(16) + 140);
SET64(31, 0x2a7b90); SET32(5, RW(29) + 32); JP_F_002B5A40(c);
SET32(4, RW(29) + 32);
SET64(31, 0x2a7b9c); SET32(5, RW(0) + -1); JP_F_002B5A90(c);
 { POLL(); goto L_002A7A50; }
L_002A7BA4:;
wr32(c, (RW(16) + 4), RW(2)); { POLL(); goto L_002A7AD0; }
L_002A7BAC:;
wr32(c, (RW(16) + 4), RW(3)); { POLL(); goto L_002A7AF0; }
L_002A7BB4:;
SET64(31, 0x2a7bbc);  JP_F_00100670(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET32(3, RW(0) + 1); if (t) goto L_002A7BD8; }
SET64(31, 0x2a7bd0); SET64(5, RD(16) + RD(0)); JP_F_002A84F0(c);
SET64(4, RD(2) + RD(0));
SET32(3, RW(0) + 1);
L_002A7BD8:;
wr32(c, (RW(16) + 52), RW(4));
wr32(c, (RW(16) + 16), RW(3)); { POLL(); goto L_002A7A5C; }
L_002A7BE4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A7BF0(Ctx *c) { /* func_002A7BF0 */
ENTER(0x2a7bf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A7C90; }
SET64(4, (s32)rd32(c, (RW(17) + 52)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4624);
SET32(2, RW(0) + 15);
wr32(c, (RW(17) + 0), RW(3));
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 4), RW(2)); if (t) goto L_002A7C44; }
{ int t = RD(4) == RD(0);  if (t) goto L_002A7C40; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2a7c40); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002A7C40:;
wr32(c, (RW(17) + 52), RW(0));
L_002A7C44:;
SET64(4, (s32)rd32(c, (RW(17) + 56)));
{ int t = RD(4) == RD(0);  if (t) goto L_002A7C58; }
SET64(31, 0x2a7c58);  JP_F_00100430(c);
L_002A7C58:;
SET64(31, 0x2a7c60); SET64(4, (s32)rd32(c, (RW(17) + 24))); JP_F_00100430(c);
SET32(4, RW(17) + 140);
SET64(31, 0x2a7c6c); SET32(5, RW(0) + -1); JP_F_002B5A90(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a7c78); SET64(5, RD(0) + RD(0)); JP_F_002A74E0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A7C94; }
SET64(31, 0x2a7c90); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A7C90:;
SET64(2, RD(17) + RD(0));
L_002A7C94:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A7CB0(Ctx *c) { /* func_002A7CB0 */
ENTER(0x2a7cb0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
SET64(31, 0x2a7cdc); SET64(16, RD(4) + RD(0)); JP_F_002A7530(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(0) + 10);
SET32(2, RW(2) + 4624);
SET32(4, RW(16) + 140);
wr32(c, (RW(16) + 0), RW(2));
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 64), RW(3));
wr32(c, (RW(16) + 68), RW(2));
wr32(c, (RW(16) + 20), RW(17));
wr32(c, (RW(16) + 44), RW(19));
wr32(c, (RW(16) + 48), RW(18));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 52), RW(0));
wr32(c, (RW(16) + 56), RW(0));
wr32(c, (RW(16) + 60), RW(0));
SET64(31, 0x2a7d30); wr8(c, (RW(16) + 136), (u8)RW(0)); JP_F_002B5AE0(c);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(31, 0x2a7d3c); SET32(4, RW(2) << 3); JP_F_00100530(c);
wr32(c, (RW(16) + 24), RW(2));
SET64(4, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2a7d54); SET32(6, RW(2) << 3); JP_F_001273D0(c);
SET64(8, (s32)rd32(c, (RW(16) + 20)));
SET32(4, RW(16) + 72);
SET64(9, (s32)rd32(c, (RW(16) + 24)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 64);
SET32(2, RW(8) << 2);
SET32(7, RW(8) << 1);
SET32(3, RW(9) + RW(2));
wr32(c, (RW(16) + 28), RW(9));
SET32(2, RW(7) + RW(8));
wr32(c, (RW(16) + 36), RW(3));
SET32(2, RW(2) << 1);
SET32(3, RW(9) + RW(7));
SET32(2, RW(9) + RW(2));
wr32(c, (RW(16) + 32), RW(3));
SET64(31, 0x2a7d98); wr32(c, (RW(16) + 40), RW(2)); JP_F_001273D0(c);
SET64(31, 0x2a7da0); SET32(4, RW(0) + 320); JP_F_00100530(c);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(2) + 63);
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 6); if (t) goto L_002A7DB8; }
SET32(2, RW(3) + 63);
SET32(2, RSW(2) >> 6);
L_002A7DB8:;
SET64(4, (s32)rd32(c, (RW(16) + 44)));
SET32(6, RW(2) << 6);
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2a7dcc); wr32(c, (RW(16) + 60), RW(6)); JP_F_00137A18(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002A7DE0; }
wr32(c, (RW(16) + 12), RW(3)); goto L_002A7DE8;
L_002A7DE0:;
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 12), RW(2));
L_002A7DE8:;
SET64(31, 0x2a7df0); SET64(4, RD(16) + RD(0)); JP_F_002A7A00(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A7E10(Ctx *c) { /* func_002A7E10 */
ENTER(0x2a7e10);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(2, (s32)rd32(c, (RW(5) + 4)));
SET64(2, RD(3) ^ RD(2));
SET64(2, RD(2) < (u64)(s64)1); return;
}

void JP_F_002A7E30(Ctx *c) { /* func_002A7E30 */
ENTER(0x2a7e30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A7E6C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4656);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002A7E68; }
SET64(31, 0x2a7e68);  JP_F_001004B0(c);
L_002A7E68:;
SET64(2, RD(16) + RD(0));
L_002A7E6C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A7E80(Ctx *c) { /* func_002A7E80 */
ENTER(0x2a7e80);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4656);
wr32(c, (RW(4) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(28) + -31456)));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3));
SET64(3, (s32)rd32(c, (RW(28) + -31456)));
SET32(3, RW(3) + 1);
wr32(c, (RW(28) + -31456), RW(3)); return;
}

void JP_F_002A7EB0(Ctx *c) { /* func_002A7EB0 */
ENTER(0x2a7eb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2a7ecc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002A7EE0(Ctx *c) { /* func_002A7EE0 */
ENTER(0x2a7ee0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A7F2C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 4672);
SET64(31, 0x2a7f10); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A7F30; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2a7f2c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002A7F2C:;
SET64(2, RD(17) + RD(0));
L_002A7F30:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A7F50(Ctx *c) { /* func_002A7F50 */
ENTER(0x2a7f50);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(31, 0x2a7f7c); SET64(16, RD(7) + RD(0)); JP_F_002AF190(c);
SET64(2, RD(16) & 0xffff);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 12), RW(2));
SET32(3, RW(3) + 4672);
wr32(c, (RW(19) + 8), RW(17));
SET64(2, RD(19) + RD(0));
wr32(c, (RW(19) + 16), RW(18));
wr32(c, (RW(19) + 0), RW(3));
wr32(c, (RW(19) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A7FC0(Ctx *c) { /* func_002A7FC0 */
ENTER(0x2a7fc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2a7fe4); SET64(16, RD(5) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002A7FF4; }
SET64(2, RD(0) + RD(0)); goto L_002A8004;
L_002A7FF4:;
SET64(31, 0x2a7ffc);  JP_F_002A6AE0(c);
SET32(2, RW(2) + RW(16));
SET64(2, rd8(c, (RW(2) + 0)));
L_002A8004:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A8020(Ctx *c) { /* func_002A8020 */
ENTER(0x2a8020);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2a803c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002A804C; }
SET32(2, RW(0) + 128); goto L_002A8058;
L_002A804C:;
SET64(31, 0x2a8054);  JP_F_002A6AE0(c);
SET64(2, rd8(c, (RW(2) + 7)));
L_002A8058:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A8070(Ctx *c) { /* func_002A8070 */
ENTER(0x2a8070);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2a808c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002A809C; }
SET32(2, RW(0) + 128); goto L_002A80A8;
L_002A809C:;
SET64(31, 0x2a80a4);  JP_F_002A6AE0(c);
SET64(2, rd8(c, (RW(2) + 6)));
L_002A80A8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A80C0(Ctx *c) { /* func_002A80C0 */
ENTER(0x2a80c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2a80dc); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002A80EC; }
SET32(2, RW(0) + 128); goto L_002A80F8;
L_002A80EC:;
SET64(31, 0x2a80f4);  JP_F_002A6AE0(c);
SET64(2, rd8(c, (RW(2) + 5)));
L_002A80F8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A8110(Ctx *c) { /* func_002A8110 */
ENTER(0x2a8110);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2a812c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002A813C; }
SET32(2, RW(0) + 128); goto L_002A8148;
L_002A813C:;
SET64(31, 0x2a8144);  JP_F_002A6AE0(c);
SET64(2, rd8(c, (RW(2) + 4)));
L_002A8148:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A8160(Ctx *c) { /* func_002A8160 */
ENTER(0x2a8160);
SET32(2, RW(0) + 1); return;
}

void JP_F_002A8170(Ctx *c) { /* func_002A8170 */
ENTER(0x2a8170);
SET32(2, RW(0) + 1); return;
}

void JP_F_002A8180(Ctx *c) { /* func_002A8180 */
ENTER(0x2a8180);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a8194); SET64(16, RD(4) + RD(0)); JP_F_002A6E00(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a81a0); SET64(16, RD(2) + RD(0)); JP_F_002A6DF0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a81ac); SET64(5, RD(2) + RD(0)); JP_F_001387A0(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(2) ^ 0x1);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A81D0(Ctx *c) { /* func_002A81D0 */
ENTER(0x2a81d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a81e4); SET64(16, RD(4) + RD(0)); JP_F_002A6E00(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a81f0); SET64(16, RD(2) + RD(0)); JP_F_002A6DF0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET32(6, RW(0) + 4);
SET64(31, 0x2a8204); SET32(7, RW(0) + -1); JP_F_001382B0(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(0) < RD(2));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A8220(Ctx *c) { /* func_002A8220 */
ENTER(0x2a8220);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(31, 0x2a823c); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002A6E00(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x2a8248); SET64(4, RD(18) + RD(0)); JP_F_002A6DF0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET32(6, RW(0) + 1);
SET64(31, 0x2a825c); SET64(7, RD(0) + RD(0)); JP_F_001382B0(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_002A8270; }
SET64(2, RD(0) + RD(0)); goto L_002A82E4;
L_002A8270:;
SET64(31, 0x2a8278);  JP_F_002A6E00(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x2a8284); SET64(4, RD(18) + RD(0)); JP_F_002A6DF0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET32(6, RW(0) + 2);
SET64(31, 0x2a8298); SET64(7, RD(0) + RD(0)); JP_F_001382B0(c);
{ int t = RSD(2) <= 0; SET64(4, RD(18) + RD(0)); if (t) goto L_002A82A4; }
SET64(17, RD(2) + RD(0));
L_002A82A4:;
SET64(31, 0x2a82ac);  JP_F_002A6E60(c);
{ int t = RD(17) == RD(2);  if (t) goto L_002A82E0; }
SET32(2, RW(0) + 4);
{ int t = RD(17) == RD(2); SET64(2, RD(0) + RD(0)); if (t) goto L_002A82D8; }
SET32(2, RW(0) + 7);
{ int t = RD(17) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_002A82D4; }
SET64(31, rd64(c, (RW(29) + 48))); goto L_002A82E8;
L_002A82D4:;
SET64(2, RD(0) + RD(0));
L_002A82D8:;
 goto L_002A82E4;
L_002A82E0:;
SET64(2, RD(0) + RD(0));
L_002A82E4:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002A82E8:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A8300(Ctx *c) { /* func_002A8300 */
ENTER(0x2a8300);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(31, 0x2a8324); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002A6AF0(c);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_002A8348; }
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 255);
SET64(31, 0x2a8340); SET32(6, RW(0) + 112); JP_F_002A6A80(c);
SET64(2, RD(0) + RD(0)); goto L_002A83AC;
L_002A8348:;
SET64(31, 0x2a8350);  JP_F_002A6AE0(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x2a835c); SET64(4, RD(18) + RD(0)); JP_F_002A6A90(c);
SET64(17, rd16(c, (RW(16) + 2)));
SET64(4, RD(18) + RD(0));
SET64(16, rd16(c, (RW(2) + 2)));
SET64(20, ~(RD(17) | RD(0)));
SET64(31, 0x2a8374); SET64(5, RD(20) & 0xffff); JP_F_002A6E50(c);
SET64(19, RD(17) ^ RD(16));
SET64(4, RD(18) + RD(0));
SET64(2, RD(20) & RD(19));
SET64(31, 0x2a8388); SET64(5, RD(2) & 0xffff); JP_F_002A6E40(c);
SET64(2, RD(17) & RD(19));
SET64(4, RD(18) + RD(0));
SET64(31, 0x2a8398); SET64(5, RD(2) & 0xffff); JP_F_002A6E30(c);
SET64(2, ~(RD(17) | RD(16)));
SET64(4, RD(18) + RD(0));
SET64(31, 0x2a83a8); SET64(5, RD(2) & 0xffff); JP_F_002A6E20(c);
SET32(2, RW(0) + 1);
L_002A83AC:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002A83D0(Ctx *c) { /* func_002A83D0 */
ENTER(0x2a83d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A8418; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 4688);
SET64(31, 0x2a8400); wr32(c, (RW(17) + 0), RW(2)); JP_F_002A6E70(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A841C; }
SET64(31, 0x2a8418); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A8418:;
SET64(2, RD(17) + RD(0));
L_002A841C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A8430(Ctx *c) { /* func_002A8430 */
ENTER(0x2a8430);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2a844c); SET64(16, RD(5) + RD(0)); JP_F_002A6EC0(c);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(0) + 7);
SET32(3, RW(3) + 4688);
wr32(c, (RW(16) + 4), RW(2));
wr32(c, (RW(17) + 0), RW(3));
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A8480(Ctx *c) { /* func_002A8480 */
ENTER(0x2a8480);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28912); return;
}

void JP_F_002A8490(Ctx *c) { /* func_002A8490 */
ENTER(0x2a8490);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A84D8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 4768);
SET64(31, 0x2a84c0); wr32(c, (RW(17) + 0), RW(2)); JP_F_002A6E70(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A84DC; }
SET64(31, 0x2a84d8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A84D8:;
SET64(2, RD(17) + RD(0));
L_002A84DC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A84F0(Ctx *c) { /* func_002A84F0 */
ENTER(0x2a84f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2a850c); SET64(16, RD(5) + RD(0)); JP_F_002A6EC0(c);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(0) + 15);
SET32(3, RW(3) + 4768);
wr32(c, (RW(16) + 4), RW(2));
wr32(c, (RW(17) + 0), RW(3));
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A8540(Ctx *c) { /* func_002A8540 */
ENTER(0x2a8540);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28904); return;
}

void JP_F_002A8550(Ctx *c) { /* func_002A8550 */
ENTER(0x2a8550);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A8598; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 4816);
SET64(31, 0x2a8580); wr32(c, (RW(17) + 0), RW(2)); JP_F_002A6E70(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A859C; }
SET64(31, 0x2a8598); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A8598:;
SET64(2, RD(17) + RD(0));
L_002A859C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A85B0(Ctx *c) { /* func_002A85B0 */
ENTER(0x2a85b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2a85cc); SET64(16, RD(5) + RD(0)); JP_F_002A6EC0(c);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(0) + 4);
SET32(3, RW(3) + 4816);
wr32(c, (RW(16) + 4), RW(2));
wr32(c, (RW(17) + 0), RW(3));
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A8600(Ctx *c) { /* func_002A8600 */
ENTER(0x2a8600);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28896); return;
}

void JP_F_002A8610(Ctx *c) { /* func_002A8610 */
ENTER(0x2a8610);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2a8628); SET64(16, RD(4) + RD(0)); JP_F_002A87D0(c);
SET64(3, (s32)rd32(c, (RW(16) + 208)));
{ int t = RD(3) == RD(0);  if (t) goto L_002A8678; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) <= 0; SET32(17, RW(3) + -1); if (t) goto L_002A8678; }
L_002A8644:;
SET64(2, (s32)rd32(c, (RW(16) + 208)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2a8654); SET64(5, RD(17) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 32)));
SET64(4, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2a8668); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, RD(17) + RD(0));
{ int t = RSD(3) > 0; SET32(17, RW(17) + -1); if (t) { POLL(); goto L_002A8644; } }
L_002A8678:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A8690(Ctx *c) { /* func_002A8690 */
ENTER(0x2a8690);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, rd8(c, (RW(4) + 214)));
SET64(3, RSD(4) < (s64)2);
{ int t = RD(3) != RD(0);  if (t) goto L_002A86B8; }
L_002A86B0:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002A8700;
L_002A86B8:;
rd128(c, (RW(5) + 48) & ~15u, &c->r[3]);
SET32(2, RW(4) << 4);
SET32(2, RW(16) + RW(2));
wr128(c, (RW(2) + 128) & ~15u, &c->r[3]);
c->f[12].u = rd32(c, (RW(5) + 64));
SET64(31, 0x2a86d4); SET32(4, RW(29) + 32); JP_F_002AFCA0(c);
SET64(3, rd8(c, (RW(16) + 214)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[4]);
SET32(3, RW(3) << 4);
SET32(3, RW(16) + RW(3));
wr128(c, (RW(3) + 160) & ~15u, &c->r[4]);
SET64(3, rd8(c, (RW(16) + 214)));
SET32(3, RW(3) + 1);
wr8(c, (RW(16) + 214), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 214)));
wr32(c, (RW(16) + 196), RW(3)); { POLL(); goto L_002A86B0; }
L_002A8700:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A8710(Ctx *c) { /* func_002A8710 */
ENTER(0x2a8710);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(6, rd8(c, (RW(4) + 213)));
SET64(3, RSD(6) < (s64)3);
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A873C; }
L_002A8734:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A8790;
L_002A873C:;
c->f[2].u = rd32(c, (RW(17) + 56));
SET32(5, RW(29) + 48);
c->f[1].u = rd32(c, (RW(17) + 52));
wr32(c, (RW(29) + 60), RW(0));
c->f[0].u = rd32(c, (RW(17) + 48));
c->f[2].u = c->f[2].u ^ 0x80000000u;
c->f[1].u = c->f[1].u ^ 0x80000000u;
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 56), c->f[2].u);
wr32(c, (RW(29) + 52), c->f[1].u);
SET64(31, 0x2a876c); wr32(c, (RW(29) + 48), c->f[0].u); JP_F_002AF050(c);
SET64(3, rd8(c, (RW(16) + 213)));
rd128(c, (RW(17) + 0) & ~15u, &c->r[4]);
SET32(3, RW(3) << 4);
SET32(3, RW(3) + RW(16));
wr128(c, (RW(3) + 64) & ~15u, &c->r[4]);
SET64(3, rd8(c, (RW(16) + 213)));
SET32(3, RW(3) + 1);
wr8(c, (RW(16) + 213), (u8)RW(3)); { POLL(); goto L_002A8734; }
L_002A8790:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A87A0(Ctx *c) { /* func_002A87A0 */
ENTER(0x2a87a0);
SET64(3, rd8(c, (RW(4) + 212)));
{ int t = RSD(3) <= 0;  if (t) goto L_002A87B4; }
L_002A87AC:;
 goto L_002A87C8;
L_002A87B4:;
rd128(c, (RW(5) + 0) & ~15u, &c->r[5]);
SET32(3, RW(3) + 1);
wr8(c, (RW(4) + 212), (u8)RW(3));
wr128(c, (RW(4) + 112) & ~15u, &c->r[5]); { POLL(); goto L_002A87AC; }
L_002A87C8:;
 return;
}

void JP_F_002A87D0(Ctx *c) { /* func_002A87D0 */
ENTER(0x2a87d0);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(29) + 64);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(6, RW(0) + 3);
SET64(16, RD(4) + RD(0));
wr8(c, (RW(4) + 214), (u8)RW(0));
wr8(c, (RW(4) + 213), (u8)RW(0));
wr8(c, (RW(4) + 212), (u8)RW(0));
wr32(c, (RW(29) + 76), RW(2));
wr128(c, (RW(16) + 48) & ~15u, &c->r[0]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[0]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[0]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[0]);
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 68), RW(0));
SET64(31, 0x2a881c); wr32(c, (RW(29) + 72), RW(0)); JP_F_002AF050(c);
SET64(3, (s64)(s32)0x3f800000);
SET32(6, RW(29) + 36);
SET32(5, RW(29) + 40);
SET32(4, RW(29) + 44);
wr32(c, (RW(29) + 60), RW(3));
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(6) + 0), RW(0));
wr32(c, (RW(5) + 0), RW(0));
wr32(c, (RW(4) + 0), RW(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 48), RW(0));
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 56), RW(0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[7]);
wr128(c, (RW(16) + 96) & ~15u, &c->r[0]);
wr32(c, (RW(6) + 0), RW(0));
wr32(c, (RW(5) + 0), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr128(c, (RW(16) + 160) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 128) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 32), RW(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 80) & ~15u, &c->r[0]);
wr128(c, (RW(16) + 64) & ~15u, &c->r[0]);
wr128(c, (RW(16) + 112) & ~15u, &c->r[7]);
wr128(c, (RW(16) + 176) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 144) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A88A0(Ctx *c) { /* func_002A88A0 */
ENTER(0x2a88a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A88DC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4856);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 216), RW(3)); if (t) goto L_002A88D8; }
SET64(31, 0x2a88d8);  JP_F_001004B0(c);
L_002A88D8:;
SET64(2, RD(16) + RD(0));
L_002A88DC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A88F0(Ctx *c) { /* func_002A88F0 */
ENTER(0x2a88f0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 4856);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2a8910); wr32(c, (RW(4) + 216), RW(2)); JP_F_002A2950(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a891c); wr32(c, (RW(16) + 208), RW(0)); JP_F_002A87D0(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A8930(Ctx *c) { /* func_002A8930 */
ENTER(0x2a8930);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2a8940); SET64(4, RD(0) + RD(0)); JP_F_001120C0(c);
SET64(31, 0x2a8948);  JP_F_00116868(c);
SET64(31, 0x2a8950); SET32(4, RW(0) + 4); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(3, (s64)(s32)0x4e0000); if (t) goto L_002A8960; }
SET32(3, RW(3) + 4872);
wr32(c, (RW(2) + 0), RW(3));
L_002A8960:;
wr32(c, (RW(28) + -29940), RW(2));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002A8970(Ctx *c) { /* func_002A8970 */
ENTER(0x2a8970);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A89AC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4872);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002A89A8; }
SET64(31, 0x2a89a8);  JP_F_001004B0(c);
L_002A89A8:;
SET64(2, RD(16) + RD(0));
L_002A89AC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A89C0(Ctx *c) { /* func_002A89C0 */
ENTER(0x2a89c0);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x4c0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(4) + -28880);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2a89dc); SET64(6, RD(0) + RD(0)); JP_F_001177B8(c);
SET64(31, 0x2a89e4); SET32(4, RW(0) + 4); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(3, (s64)(s32)0x4e0000); if (t) goto L_002A89F4; }
SET32(3, RW(3) + 4888);
wr32(c, (RW(2) + 0), RW(3));
L_002A89F4:;
wr32(c, (RW(28) + -29936), RW(2));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002A8A10(Ctx *c) { /* func_002A8A10 */
ENTER(0x2a8a10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A8A4C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4888);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002A8A48; }
SET64(31, 0x2a8a48);  JP_F_001004B0(c);
L_002A8A48:;
SET64(2, RD(16) + RD(0));
L_002A8A4C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002A8A60(Ctx *c) { /* func_002A8A60 */
ENTER(0x2a8a60);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 144), RD(31));
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
SET64(4, (s32)rd32(c, (RW(4) + 44)));
{ int t = RD(4) == RD(0); SET64(20, RD(5) + RD(0)); if (t) goto L_002A8AAC; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2a8aac);  rt_call(c, t); }
L_002A8AAC:;
SET64(3, (s32)rd32(c, (RW(21) + 4)));
SET32(4, RW(0) + 1);
SET64(2, rd16(c, (RW(21) + 52)));
SET64(19, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(21) + 36)));
SET32(3, RW(4) << (RW(3) & 31));
c->f[0].u = RW(3);
SET64(1, RSD(0) < RSD(2));
SET32(17, RW(5) + 48);
{ int t = RD(1) == RD(0); c->f[20].f = (f32)(s32)c->f[0].u; if (t) goto L_002A8C80; }
SET64(18, RD(0) + RD(0));
SET32(16, RW(29) + 164);
SET32(22, RW(29) + 168);
SET32(23, RW(29) + 172);
L_002A8AE8:;
c->f[2].u = rd32(c, (RW(20) + 292));
SET64(2, (s64)(s32)0x4f000000);
SET64(3, (s32)rd32(c, (RW(21) + 48)));
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(20) + 288));
c->f[4].u = RW(0);
c->f[2].f = (f32)(s32)c->f[2].u;
SET32(2, RW(3) + RW(18));
c->facc = fpu(F(4) + F(2));
c->f[5].u = rd32(c, (RW(2) + 4));
c->f[2].f = (f32)(s32)c->f[1].u;
c->f[5].f = fpu(c->facc + F(20) * F(5));
c->facc = fpu(F(4) + F(2));
c->f[1].u = rd32(c, (RW(2) + 8));
c->f[3].u = rd32(c, (RW(2) + 0));
c->f[2].u = (u32)fpu_cvtw(F(5));
SET64(2, (s32)c->f[2].u);
c->fcc = F(0) <= F(1);
SET64(2, RD(2) << 32);
c->f[2].f = fpu(c->facc + F(20) * F(3));
SET64(2, RSD(2) >> 32);
c->f[2].u = (u32)fpu_cvtw(F(2));
SET64(3, RD(2) << 16);
SET64(2, (s32)c->f[2].u);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
{ int t = c->fcc; SET64(5, RD(2) | RD(3)); if (t) goto L_002A8B6C; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) << 32); goto L_002A8B88;
L_002A8B6C:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) << 32);
L_002A8B88:;
SET64(2, (s64)(s32)0x43800000);
SET64(3, RD(3) >> 32);
SET32(4, RW(29) + 160);
SET64(3, RD(3) << 32);
SET64(3, RD(3) | RD(5));
c->f[12].u = RW(2);
wr64(c, (RW(17) + 16), RD(3));
SET64(2, (s32)rd32(c, (RW(21) + 48)));
SET32(2, RW(2) + RW(18));
SET64(31, 0x2a8bb4); SET32(5, RW(2) + 16); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x437f0000);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
SET64(31, 0x2a8bc8); SET32(4, RW(29) + 160); JP_F_002B02F0(c);
c->f[3].u = rd32(c, (RW(16) + 0));
SET32(19, RW(19) + 1);
c->f[2].u = rd32(c, (RW(29) + 160));
c->f[1].u = rd32(c, (RW(22) + 0));
c->f[0].u = rd32(c, (RW(23) + 0));
c->f[3].u = (u32)fpu_cvtw(F(3));
SET64(2, (s32)c->f[3].u);
c->f[2].u = (u32)fpu_cvtw(F(2));
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET64(3, RD(2) << 8);
SET64(2, (s32)c->f[2].u);
c->f[1].u = (u32)fpu_cvtw(F(1));
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET64(3, RD(2) | RD(3));
SET64(2, (s32)c->f[1].u);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET64(2, RD(2) << 16);
SET64(3, RD(2) | RD(3));
SET64(2, (s32)c->f[0].u);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET64(2, RD(2) << 24);
SET64(2, RD(2) | RD(3));
wr64(c, (RW(17) + 8), RD(2));
SET64(2, (s32)rd32(c, (RW(21) + 48)));
SET32(2, RW(2) + RW(18));
c->f[0].u = rd32(c, (RW(2) + 40));
wr32(c, (RW(17) + 12), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(21) + 48)));
SET32(2, RW(2) + RW(18));
c->f[0].u = rd32(c, (RW(2) + 32));
wr32(c, (RW(17) + 0), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(21) + 48)));
SET32(2, RW(2) + RW(18));
c->f[0].u = rd32(c, (RW(2) + 36));
SET32(18, RW(18) + 48);
wr32(c, (RW(17) + 4), c->f[0].u);
SET64(2, rd16(c, (RW(21) + 52)));
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 24); if (t) { POLL(); goto L_002A8AE8; } }
L_002A8C80:;
SET64(6, (s32)rd32(c, (RW(21) + 40)));
SET64(5, (s32)rd32(c, (RW(21) + 36)));
SET64(2, (s64)(s32)0x50000000);
SET64(4, RD(20) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(3, RSW(6) >> 4);
SET64(31, 0x2a8ca0); SET64(8, RD(3) | RD(2)); JP_F_002B1AB0(c);
SET64(31, rd64(c, (RW(29) + 144)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[23]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002A8CD0(Ctx *c) { /* func_002A8CD0 */
ENTER(0x2a8cd0);
SET32(3, RW(0) + -8);
SET64(9, (s32)rd32(c, (RW(4) + 36)));
mmi_pcpyld(c, &c->r[8], &c->r[0], &c->r[3]);
SET64(6, (s64)(s32)0xfc000000);
SET64(3, RD(0) | 0xffff);
SET64(6, RD(6) | 0x7fff);
SET64(3, RD(3) << 16);
SET64(6, RD(6) << 32);
SET64(3, RD(3) | 0xffff);
SET64(7, RD(3) | RD(6));
SET64(5, RD(5) << 32);
SET64(3, rd64(c, (RW(9) + 0)));
SET64(5, RSD(5) >> 32);
SET64(6, RD(3) << 6);
SET64(6, RD(6) >> 53);
SET64(3, RD(3) & RD(7));
SET64(6, RD(6) & RD(8));
SET64(6, RD(6) & 0x7ff);
SET64(6, RD(6) << 47);
SET64(3, RD(3) | RD(6));
wr64(c, (RW(9) + 0), RD(3));
SET64(6, (s32)rd32(c, (RW(4) + 36)));
SET64(4, rd64(c, (RW(6) + 0)));
SET64(3, RD(4) & RD(7));
SET64(4, RD(4) << 6);
SET64(4, RD(4) >> 53);
SET64(4, RD(4) | RD(5));
SET64(4, RD(4) & 0x7ff);
SET64(4, RD(4) << 47);
SET64(3, RD(3) | RD(4));
wr64(c, (RW(6) + 0), RD(3)); return;
}

void JP_F_002A8D50(Ctx *c) { /* func_002A8D50 */
ENTER(0x2a8d50);
SET64(6, (s32)rd32(c, (RW(4) + 36)));
SET64(3, (s64)(s32)0xfc000000);
SET64(3, RD(3) | 0x7fff);
SET64(4, ~(RD(5) | RD(0)));
SET64(5, RD(4) << 32);
SET64(4, RD(3) << 32);
SET64(5, RSD(5) >> 32);
SET64(3, RD(0) | 0xffff);
SET64(3, RD(3) << 16);
SET64(3, RD(3) | 0xffff);
SET64(3, RD(3) | RD(4));
SET64(4, rd64(c, (RW(6) + 0)));
SET64(3, RD(4) & RD(3));
SET64(4, RD(4) << 6);
SET64(4, RD(4) >> 53);
SET64(4, RD(4) & RD(5));
SET64(4, RD(4) & 0x7ff);
SET64(4, RD(4) << 47);
SET64(3, RD(3) | RD(4));
wr64(c, (RW(6) + 0), RD(3)); return;
}

void JP_F_002A8DB0(Ctx *c) { /* func_002A8DB0 */
ENTER(0x2a8db0);
SET64(6, (s32)rd32(c, (RW(4) + 36)));
SET64(3, (s64)(s32)0xfc000000);
SET64(5, RD(5) << 32);
SET64(5, RSD(5) >> 32);
SET64(4, RD(3) | 0x7fff);
SET64(3, RD(0) | 0xffff);
SET64(4, RD(4) << 32);
SET64(3, RD(3) << 16);
SET64(3, RD(3) | 0xffff);
SET64(3, RD(3) | RD(4));
SET64(4, rd64(c, (RW(6) + 0)));
SET64(3, RD(4) & RD(3));
SET64(4, RD(4) << 6);
SET64(4, RD(4) >> 53);
SET64(4, RD(4) | RD(5));
SET64(4, RD(4) & 0x7ff);
SET64(4, RD(4) << 47);
SET64(3, RD(3) | RD(4));
wr64(c, (RW(6) + 0), RD(3)); return;
}

void JP_F_002A8E00(Ctx *c) { /* func_002A8E00 */
ENTER(0x2a8e00);
SET64(2, (s32)rd32(c, (RW(4) + 36)));
SET64(2, rd64(c, (RW(2) + 0)));
SET64(2, RD(2) << 6);
SET64(2, RD(2) >> 53);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32); return;
}

void JP_F_002A8E20(Ctx *c) { /* func_002A8E20 */
ENTER(0x2a8e20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A8EA0; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4932);
SET32(3, RW(3) + 4912);
wr32(c, (RW(16) + 12), RW(2));
SET64(2, rd8(c, (RW(16) + 54)));
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 8), RW(3)); if (t) goto L_002A8E70; }
SET64(2, (s32)rd32(c, (RW(16) + 48)));
{ int t = RD(2) == RD(0); SET32(4, RW(16) + 16); if (t) goto L_002A8E74; }
SET64(31, 0x2a8e70); SET32(4, RW(2) + -16); JP_F_00100430(c);
L_002A8E70:;
SET32(4, RW(16) + 16);
L_002A8E74:;
SET64(31, 0x2a8e7c); SET32(5, RW(0) + -1); JP_F_002AE2B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a8e88); SET64(5, RD(0) + RD(0)); JP_F_002B03B0(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_002A8EA4; }
SET64(31, 0x2a8ea0); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002A8EA0:;
SET64(2, RD(16) + RD(0));
L_002A8EA4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A8EC0(Ctx *c) { /* func_002A8EC0 */
ENTER(0x2a8ec0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(31, 0x2a8eec); SET64(16, RD(7) + RD(0)); JP_F_002B0400(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 4912);
SET32(2, RW(2) + 4932);
wr32(c, (RW(19) + 8), RW(3));
SET64(3, RD(17) & 0xffff);
wr32(c, (RW(19) + 12), RW(2));
SET32(2, RW(3) << 1);
SET32(3, RW(2) + RW(3));
SET32(3, RW(3) << 3);
SET64(2, (s64)(s32)0xaaaa0000);
SET32(3, RW(3) + -1);
SET64(2, RD(2) | 0xaaab);
SET32(3, RW(3) >> 4);
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 4);
mul_u(c, 0, 0, RW(2), RW(3));
SET64(2, c->hi.d[0]);
SET32(4, RW(19) + 16);
SET32(6, RW(0) + 128);
SET32(3, RW(2) >> 4);
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET64(31, 0x2a8f54); SET32(5, RW(2) + 48); JP_F_002AE380(c);
SET64(4, (s32)rd32(c, (RW(19) + 20)));
SET64(5, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(19) + 24)));
wr16(c, (RW(19) + 52), (u16)RW(17));
wr8(c, (RW(19) + 54), (u8)RW(16));
wr32(c, (RW(19) + 36), RW(4));
SET64(31, 0x2a8f74); wr32(c, (RW(19) + 40), RW(6)); JP_F_001273D0(c);
SET64(3, (s64)(s32)0x100e0000);
SET64(8, (s32)rd32(c, (RW(19) + 36)));
SET64(3, RD(3) | 0x4000);
SET32(2, RW(0) + 1);
SET64(3, RD(3) << 32);
SET32(7, RW(0) + 14);
SET64(9, RD(2) | RD(3));
SET32(6, RW(0) + 5);
SET64(2, (s64)(s32)0x34000000);
SET32(5, RW(0) + 8);
SET64(3, RD(2) << 32);
SET64(2, RD(0) | 0x8000);
wr64(c, (RW(8) + 0), RD(9));
SET64(4, RD(2) | RD(3));
SET64(2, (s32)rd32(c, (RW(19) + 36)));
SET32(3, RW(0) + 1298);
wr64(c, (RW(2) + 8), RD(7));
SET64(2, (s32)rd32(c, (RW(19) + 36)));
wr64(c, (RW(2) + 16), RD(6));
SET64(2, (s32)rd32(c, (RW(19) + 36)));
wr64(c, (RW(2) + 24), RD(5));
SET64(5, rd16(c, (RW(19) + 52)));
SET64(2, (s32)rd32(c, (RW(19) + 36)));
SET64(4, RD(5) | RD(4));
wr64(c, (RW(2) + 32), RD(4));
SET64(2, (s32)rd32(c, (RW(19) + 36)));
wr64(c, (RW(2) + 40), RD(3));
SET64(2, rd8(c, (RW(19) + 54)));
{ int t = RD(2) != RD(0); wr32(c, (RW(19) + 44), RW(18)); if (t) goto L_002A8FF4; }
L_002A8FEC:;
SET64(2, RD(19) + RD(0)); goto L_002A9050;
L_002A8FF4:;
SET64(16, rd16(c, (RW(19) + 52)));
SET32(2, RW(16) << 1);
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 4);
SET64(31, 0x2a900c); SET32(4, RW(2) + 16); JP_F_00100530(c);
SET64(5, (s64)(s32)0x2b0000);
SET64(8, RD(16) + RD(0));
SET64(4, RD(2) + RD(0));
SET32(5, RW(5) + -28560);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a9028); SET32(7, RW(0) + 48); JP_F_00102580(c);
SET64(3, rd16(c, (RW(19) + 52)));
SET64(4, RD(2) + RD(0));
wr32(c, (RW(19) + 48), RW(2));
SET64(5, RD(0) + RD(0));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(31, 0x2a9048); SET32(6, RW(2) << 4); JP_F_001273D0(c);
 { POLL(); goto L_002A8FEC; }
L_002A9050:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002A9070(Ctx *c) { /* func_002A9070 */
ENTER(0x2a9070);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(3));
wr32(c, (RW(4) + 44), RW(3));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0)); return;
}

void JP_F_002A90B0(Ctx *c) { /* func_002A90B0 */
ENTER(0x2a90b0);
SET32(4, RW(4) + -12); { JP_F_002A8CD0(c); return; }
}

void JP_F_002A90C0(Ctx *c) { /* func_002A90C0 */
ENTER(0x2a90c0);
SET32(4, RW(4) + -12); { JP_F_002A8D50(c); return; }
}

void JP_F_002A90D0(Ctx *c) { /* func_002A90D0 */
ENTER(0x2a90d0);
SET32(4, RW(4) + -12); { JP_F_002A8DB0(c); return; }
}

void JP_F_002A90E0(Ctx *c) { /* func_002A90E0 */
ENTER(0x2a90e0);
SET32(4, RW(4) + -12); { JP_F_002A8E00(c); return; }
}

void JP_F_002A90F0(Ctx *c) { /* func_002A90F0 */
ENTER(0x2a90f0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET32(5, RW(0) + 1);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(2, rd16(c, (RW(4) + 48)));
SET64(6, (s32)rd32(c, (RW(4) + 36)));
SET32(3, RW(5) << (RW(3) & 31));
c->f[0].u = RW(3);
SET64(1, RSD(0) < RSD(2));
SET32(17, RW(6) + 48);
{ int t = RD(1) == RD(0); c->f[20].f = (f32)(s32)c->f[0].u; if (t) goto L_002A92D0; }
SET64(18, RD(0) + RD(0));
SET32(16, RW(29) + 164);
SET32(22, RW(29) + 168);
SET32(23, RW(29) + 172);
L_002A9160:;
c->f[2].u = rd32(c, (RW(20) + 292));
SET64(2, (s64)(s32)0x4f000000);
SET64(3, (s32)rd32(c, (RW(21) + 44)));
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(20) + 288));
c->f[4].u = RW(0);
c->f[2].f = (f32)(s32)c->f[2].u;
SET32(2, RW(3) + RW(18));
c->facc = fpu(F(4) + F(2));
c->f[5].u = rd32(c, (RW(2) + 4));
c->f[2].f = (f32)(s32)c->f[1].u;
c->f[5].f = fpu(c->facc + F(20) * F(5));
c->facc = fpu(F(4) + F(2));
c->f[1].u = rd32(c, (RW(2) + 8));
c->f[3].u = rd32(c, (RW(2) + 0));
c->f[2].u = (u32)fpu_cvtw(F(5));
SET64(2, (s32)c->f[2].u);
c->fcc = F(0) <= F(1);
SET64(2, RD(2) << 32);
c->f[2].f = fpu(c->facc + F(20) * F(3));
SET64(2, RSD(2) >> 32);
c->f[2].u = (u32)fpu_cvtw(F(2));
SET64(3, RD(2) << 16);
SET64(2, (s32)c->f[2].u);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
{ int t = c->fcc; SET64(5, RD(2) | RD(3)); if (t) goto L_002A91E4; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) << 32); goto L_002A9200;
L_002A91E4:;
c->f[0].f = fpu(F(1) - F(0));
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) << 32);
L_002A9200:;
SET64(2, (s64)(s32)0x43800000);
SET64(3, RD(3) >> 32);
SET32(4, RW(29) + 160);
SET64(3, RD(3) << 32);
SET64(3, RD(3) | RD(5));
c->f[12].u = RW(2);
wr64(c, (RW(17) + 8), RD(3));
SET64(2, (s32)rd32(c, (RW(21) + 44)));
SET32(2, RW(2) + RW(18));
SET64(31, 0x2a922c); SET32(5, RW(2) + 16); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x437f0000);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
SET64(31, 0x2a9240); SET32(4, RW(29) + 160); JP_F_002B02F0(c);
c->f[3].u = rd32(c, (RW(16) + 0));
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = rd32(c, (RW(29) + 160));
SET32(19, RW(19) + 1);
c->f[1].u = rd32(c, (RW(22) + 0));
SET32(18, RW(18) + 32);
c->f[0].u = rd32(c, (RW(23) + 0));
c->f[3].u = (u32)fpu_cvtw(F(3));
SET64(3, (s32)c->f[3].u);
c->f[2].u = (u32)fpu_cvtw(F(2));
SET64(3, RD(3) << 32);
SET64(3, RSD(3) >> 32);
SET64(4, RD(3) << 8);
SET64(3, (s32)c->f[2].u);
c->f[1].u = (u32)fpu_cvtw(F(1));
SET64(3, RD(3) << 32);
SET64(3, RSD(3) >> 32);
SET64(4, RD(3) | RD(4));
SET64(3, (s32)c->f[1].u);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, RD(3) << 32);
SET64(3, RSD(3) >> 32);
SET64(3, RD(3) << 16);
SET64(4, RD(3) | RD(4));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) << 32);
SET64(3, RSD(3) >> 32);
SET64(3, RD(3) << 24);
SET64(3, RD(3) | RD(4));
wr64(c, (RW(17) + 0), RD(3));
wr32(c, (RW(17) + 4), RW(2));
SET64(2, rd16(c, (RW(21) + 48)));
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 16); if (t) { POLL(); goto L_002A9160; } }
L_002A92D0:;
SET64(6, (s32)rd32(c, (RW(21) + 40)));
SET64(5, (s32)rd32(c, (RW(21) + 36)));
SET64(2, (s64)(s32)0x50000000);
SET64(4, RD(20) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(3, RSW(6) >> 4);
SET64(31, 0x2a92f0); SET64(8, RD(3) | RD(2)); JP_F_002B1AB0(c);
SET64(31, rd64(c, (RW(29) + 144)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[23]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002A9320(Ctx *c) { /* func_002A9320 */
ENTER(0x2a9320);
SET64(7, (s32)rd32(c, (RW(4) + 36)));
SET64(5, RD(5) << 32);
SET32(3, RW(0) + -8);
SET64(5, RSD(5) >> 32);
SET64(6, rd64(c, (RW(7) + 16)));
SET64(3, RD(6) & RD(3));
wr64(c, (RW(7) + 16), RD(3));
SET64(4, (s32)rd32(c, (RW(4) + 36)));
SET64(3, rd64(c, (RW(4) + 16)));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 16), RD(3)); return;
}

void JP_F_002A9350(Ctx *c) { /* func_002A9350 */
ENTER(0x2a9350);
SET64(6, (s32)rd32(c, (RW(4) + 36)));
SET64(3, ~(RD(5) | RD(0)));
SET64(4, RD(3) << 32);
SET64(3, rd64(c, (RW(6) + 16)));
SET64(4, RSD(4) >> 32);
SET64(3, RD(3) & RD(4));
wr64(c, (RW(6) + 16), RD(3)); return;
}

void JP_F_002A9370(Ctx *c) { /* func_002A9370 */
ENTER(0x2a9370);
SET64(6, (s32)rd32(c, (RW(4) + 36)));
SET64(3, rd64(c, (RW(6) + 16)));
SET64(4, RD(5) << 32);
SET64(4, RSD(4) >> 32);
SET64(3, RD(3) | RD(4));
wr64(c, (RW(6) + 16), RD(3)); return;
}

void JP_F_002A9390(Ctx *c) { /* func_002A9390 */
ENTER(0x2a9390);
SET64(2, (s32)rd32(c, (RW(4) + 36)));
SET64(2, (s32)rd32(c, (RW(2) + 16))); return;
}

void JP_F_002A93A0(Ctx *c) { /* func_002A93A0 */
ENTER(0x2a93a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002A9420; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4996);
SET32(3, RW(3) + 4976);
wr32(c, (RW(16) + 12), RW(2));
SET64(2, rd8(c, (RW(16) + 50)));
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 8), RW(3)); if (t) goto L_002A93F0; }
SET64(2, (s32)rd32(c, (RW(16) + 44)));
{ int t = RD(2) == RD(0); SET32(4, RW(16) + 16); if (t) goto L_002A93F4; }
SET64(31, 0x2a93f0); SET32(4, RW(2) + -16); JP_F_00100430(c);
L_002A93F0:;
SET32(4, RW(16) + 16);
L_002A93F4:;
SET64(31, 0x2a93fc); SET32(5, RW(0) + -1); JP_F_002AE2B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2a9408); SET64(5, RD(0) + RD(0)); JP_F_002B03B0(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_002A9424; }
SET64(31, 0x2a9420); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002A9420:;
SET64(2, RD(16) + RD(0));
L_002A9424:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A9440(Ctx *c) { /* func_002A9440 */
ENTER(0x2a9440);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2a9464); SET64(16, RD(6) + RD(0)); JP_F_002B0400(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 4976);
SET32(3, RW(3) + 4996);
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(18) + 16);
SET64(2, RD(17) & 0xffff);
wr32(c, (RW(18) + 12), RW(3));
SET32(2, RW(2) << 4);
SET32(6, RW(0) + 128);
SET32(2, RW(2) + -1);
SET32(2, RW(2) >> 4);
SET32(2, RW(2) + 1);
SET64(2, RD(2) << 32);
SET64(2, RD(2) >> 32);
SET32(2, RW(2) << 4);
SET64(31, 0x2a94ac); SET32(5, RW(2) + 48); JP_F_002AE380(c);
SET64(4, (s32)rd32(c, (RW(18) + 20)));
SET64(5, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(18) + 24)));
wr16(c, (RW(18) + 48), (u16)RW(17));
wr8(c, (RW(18) + 50), (u8)RW(16));
wr32(c, (RW(18) + 36), RW(4));
SET64(31, 0x2a94cc); wr32(c, (RW(18) + 40), RW(6)); JP_F_001273D0(c);
SET64(3, (s64)(s32)0x10000000);
SET64(7, (s32)rd32(c, (RW(18) + 36)));
SET32(2, RW(0) + 1);
SET64(3, RD(3) << 32);
SET64(8, RD(2) | RD(3));
SET32(6, RW(0) + 14);
SET64(2, (s64)(s32)0x24000000);
SET32(5, RW(0) + 12);
SET64(3, RD(2) << 32);
SET64(2, RD(0) | 0x8000);
SET64(4, RD(2) | RD(3));
wr64(c, (RW(7) + 0), RD(8));
SET64(2, (s32)rd32(c, (RW(18) + 36)));
SET32(3, RW(0) + 81);
wr64(c, (RW(2) + 8), RD(6));
SET64(2, (s32)rd32(c, (RW(18) + 36)));
wr64(c, (RW(2) + 16), RD(5));
SET64(2, (s32)rd32(c, (RW(18) + 36)));
wr64(c, (RW(2) + 24), RD(0));
SET64(5, rd16(c, (RW(18) + 48)));
SET64(2, (s32)rd32(c, (RW(18) + 36)));
SET64(4, RD(5) | RD(4));
wr64(c, (RW(2) + 32), RD(4));
SET64(2, (s32)rd32(c, (RW(18) + 36)));
wr64(c, (RW(2) + 40), RD(3));
SET64(2, rd8(c, (RW(18) + 50)));
{ int t = RD(2) != RD(0);  if (t) goto L_002A9544; }
L_002A953C:;
SET64(2, RD(18) + RD(0)); goto L_002A9590;
L_002A9544:;
SET64(16, rd16(c, (RW(18) + 48)));
SET32(2, RW(16) << 5);
SET64(31, 0x2a9554); SET32(4, RW(2) + 16); JP_F_00100530(c);
SET64(5, (s64)(s32)0x2b0000);
SET64(8, RD(16) + RD(0));
SET64(4, RD(2) + RD(0));
SET32(5, RW(5) + -27216);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2a9570); SET32(7, RW(0) + 32); JP_F_00102580(c);
wr32(c, (RW(18) + 44), RW(2));
SET64(4, RD(2) + RD(0));
SET64(2, rd16(c, (RW(18) + 48)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2a9588); SET32(6, RW(2) << 5); JP_F_001273D0(c);
 { POLL(); goto L_002A953C; }
L_002A9590:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002A95B0(Ctx *c) { /* func_002A95B0 */
ENTER(0x2a95b0);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(4) + 28), RW(3));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0)); return;
}

void JP_F_002A95E0(Ctx *c) { /* func_002A95E0 */
ENTER(0x2a95e0);
SET32(4, RW(4) + -12); { JP_F_002A9320(c); return; }
}

void JP_F_002A95F0(Ctx *c) { /* func_002A95F0 */
ENTER(0x2a95f0);
SET32(4, RW(4) + -12); { JP_F_002A9350(c); return; }
}

void JP_F_002A9600(Ctx *c) { /* func_002A9600 */
ENTER(0x2a9600);
SET32(4, RW(4) + -12); { JP_F_002A9370(c); return; }
}

void JP_F_002A9610(Ctx *c) { /* func_002A9610 */
ENTER(0x2a9610);
SET32(4, RW(4) + -12); { JP_F_002A9390(c); return; }
}

void JP_F_002A9620(Ctx *c) { /* func_002A9620 */
ENTER(0x2a9620);
SET32(29, RW(29) + -464);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 196)));
{ int t = RD(4) == RD(0); SET64(19, RD(5) + RD(0)); if (t) goto L_002A9660; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2a9660);  rt_call(c, t); }
L_002A9660:;
SET64(6, (s32)rd32(c, (RW(20) + 172)));
SET64(2, (s64)(s32)0x3f800000);
SET64(5, (s32)rd32(c, (RW(20) + 168)));
SET32(16, RW(29) + 448);
SET64(7, (s32)rd32(c, (RW(20) + 4)));
SET32(18, RW(29) + 416);
SET64(3, (s32)rd32(c, (RW(20) + 164)));
SET32(17, RW(29) + 432);
wr32(c, (RW(29) + 348), RW(2));
SET32(4, RW(29) + 128);
wr32(c, (RW(29) + 364), RW(2));
SET32(6, RSW(6) >> 1);
wr32(c, (RW(29) + 380), RW(2));
SET32(5, RSW(5) >> 1);
wr32(c, (RW(29) + 396), RW(2));
SET32(6, RW(6) << (RW(7) & 31));
SET32(5, RW(5) << (RW(7) & 31));
wr32(c, (RW(29) + 124), RW(2));
c->f[1].u = RW(6);
c->f[0].u = RW(5);
SET64(2, (s32)rd32(c, (RW(20) + 160)));
c->f[3].f = (f32)(s32)c->f[1].u;
SET32(3, RW(3) << (RW(7) & 31));
wr32(c, (RW(29) + 344), RW(0));
wr32(c, (RW(29) + 360), RW(0));
wr32(c, (RW(29) + 376), RW(0));
wr32(c, (RW(29) + 392), RW(0));
SET32(2, RW(2) << (RW(7) & 31));
wr32(c, (RW(29) + 120), RW(0));
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[1].u = RW(3);
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 116), c->f[1].u);
c->f[1].u = c->f[2].u ^ 0x80000000u;
wr32(c, (RW(29) + 112), c->f[0].u);
c->f[0].u = c->f[3].u ^ 0x80000000u;
wr32(c, (RW(29) + 340), c->f[3].u);
wr32(c, (RW(29) + 336), c->f[2].u);
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 356), c->f[3].u);
wr32(c, (RW(29) + 368), c->f[2].u);
wr32(c, (RW(29) + 372), c->f[0].u);
rd128(c, (RW(29) + 368) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 352), c->f[1].u);
wr32(c, (RW(29) + 384), c->f[1].u);
wr32(c, (RW(29) + 388), c->f[0].u);
wr128(c, (RW(16) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 384) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 400) & ~15u, &c->r[5]);
SET64(31, 0x2a9740); wr128(c, (RW(17) + 0) & ~15u, &c->r[2]); JP_F_002AF080(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 208);
wr32(c, (RW(29) + 204), RW(2));
c->f[0].u = rd32(c, (RW(20) + 192));
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 192), RW(0));
wr32(c, (RW(29) + 196), RW(0));
wr32(c, (RW(29) + 200), c->f[0].u);
SET64(31, 0x2a9768); wr128(c, (RW(29) + 176) & ~15u, &c->r[2]); JP_F_002AF080(c);
SET32(4, RW(29) + 208);
SET64(31, 0x2a9774); SET32(5, RW(29) + 192); JP_F_002AED70(c);
SET64(21, RD(2) + RD(0));
SET32(4, RW(29) + 128);
SET64(31, 0x2a9784); SET32(5, RW(20) + 176); JP_F_002AEB90(c);
SET64(5, RD(21) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x2a9794); SET32(4, RW(29) + 272); JP_F_002AEAE0(c);
SET32(4, RW(29) + 400);
SET64(31, 0x2a97a0); SET32(5, RW(29) + 272); JP_F_002AEA80(c);
c->f[3].u = rd32(c, (RW(19) + 288));
SET32(2, RW(0) + -1);
SET64(3, RD(2) << 32);
SET64(9, rd64(c, (RW(20) + 152)));
SET64(2, RD(0) | 0xffff);
SET64(13, (s64)(s32)0xffff0000);
SET64(2, RD(2) | RD(3));
SET64(6, rd64(c, (RW(20) + 80)));
SET64(3, (s64)(s32)0x50000000);
SET64(11, rd64(c, (RW(20) + 104)));
SET64(8, RD(3) | 0x9);
SET64(10, rd64(c, (RW(20) + 128)));
c->f[2].u = rd32(c, (RW(29) + 400));
SET64(4, RD(19) + RD(0));
c->f[3].f = (f32)(s32)c->f[3].u;
SET64(3, RD(9) & RD(13));
SET32(5, RW(20) + 16);
SET64(7, (s64)(s32)0x13000000);
SET64(12, RD(6) & RD(13));
SET64(11, RD(11) & RD(13));
SET32(6, RW(0) + 144);
SET64(10, RD(10) & RD(13));
c->f[2].f = fpu(F(3) + F(2));
c->f[2].u = (u32)fpu_cvtw(F(2));
SET64(9, (s32)c->f[2].u);
c->f[0].u = rd32(c, (RW(19) + 292));
c->f[1].u = rd32(c, (RW(29) + 404));
SET64(9, RD(9) << 32);
SET64(9, RSD(9) >> 32);
SET64(9, RD(9) & 0xffff);
SET64(9, RD(12) | RD(9));
SET64(9, RD(9) & RD(2));
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(2) + F(1));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(12, (s32)c->f[0].u);
c->f[1].u = rd32(c, (RW(18) + 0));
c->f[0].u = rd32(c, (RW(18) + 4));
SET64(12, RD(12) << 32);
SET64(12, RSD(12) >> 32);
SET64(12, RD(12) & 0xffff);
SET64(12, RD(12) << 16);
SET64(9, RD(9) | RD(12));
c->f[1].f = fpu(F(3) + F(1));
wr64(c, (RW(20) + 80), RD(9));
c->f[1].u = (u32)fpu_cvtw(F(1));
SET64(9, (s32)c->f[1].u);
c->f[0].f = fpu(F(2) + F(0));
SET64(9, RD(9) << 32);
SET64(9, RSD(9) >> 32);
SET64(9, RD(9) & 0xffff);
c->f[1].u = rd32(c, (RW(17) + 0));
SET64(9, RD(11) | RD(9));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(9, RD(9) & RD(2));
SET64(11, (s32)c->f[0].u);
c->f[1].f = fpu(F(3) + F(1));
SET64(11, RD(11) << 32);
SET64(11, RSD(11) >> 32);
SET64(11, RD(11) & 0xffff);
c->f[0].u = rd32(c, (RW(17) + 4));
SET64(11, RD(11) << 16);
SET64(9, RD(9) | RD(11));
c->f[1].u = (u32)fpu_cvtw(F(1));
wr64(c, (RW(20) + 104), RD(9));
SET64(9, (s32)c->f[1].u);
c->f[0].f = fpu(F(2) + F(0));
SET64(9, RD(9) << 32);
SET64(9, RSD(9) >> 32);
SET64(9, RD(9) & 0xffff);
c->f[1].u = rd32(c, (RW(16) + 0));
SET64(9, RD(10) | RD(9));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(9, RD(9) & RD(2));
SET64(10, (s32)c->f[0].u);
c->f[1].f = fpu(F(3) + F(1));
SET64(10, RD(10) << 32);
SET64(10, RSD(10) >> 32);
SET64(10, RD(10) & 0xffff);
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(10, RD(10) << 16);
SET64(9, RD(9) | RD(10));
c->f[1].u = (u32)fpu_cvtw(F(1));
wr64(c, (RW(20) + 128), RD(9));
c->f[0].f = fpu(F(2) + F(0));
SET64(9, (s32)c->f[1].u);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(9, RD(9) << 32);
SET64(9, RSD(9) >> 32);
SET64(9, RD(9) & 0xffff);
SET64(3, RD(3) | RD(9));
SET64(2, RD(3) & RD(2));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) << 32);
SET64(3, RSD(3) >> 32);
SET64(3, RD(3) & 0xffff);
SET64(3, RD(3) << 16);
SET64(2, RD(2) | RD(3));
SET64(31, 0x2a9934); wr64(c, (RW(20) + 152), RD(2)); JP_F_002B1AB0(c);
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 464); return;
}

void JP_F_002A9960(Ctx *c) { /* func_002A9960 */
ENTER(0x2a9960);
SET64(3, ~(RD(5) | RD(0)));
SET64(6, rd64(c, (RW(4) + 16)));
SET64(7, RD(3) << 32);
SET64(5, (s64)(s32)0xfc000000);
SET64(3, RD(0) | 0xffff);
SET64(5, RD(5) | 0x7fff);
SET64(3, RD(3) << 16);
SET64(5, RD(5) << 32);
SET64(3, RD(3) | 0xffff);
SET64(7, RSD(7) >> 32);
SET64(3, RD(3) | RD(5));
SET64(5, RD(6) << 6);
SET64(3, RD(6) & RD(3));
SET64(5, RD(5) >> 53);
SET64(5, RD(5) & RD(7));
SET64(5, RD(5) & 0x7ff);
SET64(5, RD(5) << 47);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 16), RD(3)); return;
}

void JP_F_002A99B0(Ctx *c) { /* func_002A99B0 */
ENTER(0x2a99b0);
SET64(7, RD(5) << 32);
SET64(3, (s64)(s32)0xfc000000);
SET64(5, RD(3) | 0x7fff);
SET64(6, rd64(c, (RW(4) + 16)));
SET64(3, RD(0) | 0xffff);
SET64(5, RD(5) << 32);
SET64(3, RD(3) << 16);
SET64(7, RSD(7) >> 32);
SET64(3, RD(3) | 0xffff);
SET64(3, RD(3) | RD(5));
SET64(5, RD(6) << 6);
SET64(3, RD(6) & RD(3));
SET64(5, RD(5) >> 53);
SET64(5, RD(5) | RD(7));
SET64(5, RD(5) & 0x7ff);
SET64(5, RD(5) << 47);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 16), RD(3)); return;
}

void JP_F_002A9A00(Ctx *c) { /* func_002A9A00 */
ENTER(0x2a9a00);
SET64(2, rd64(c, (RW(4) + 16)));
SET64(2, RD(2) << 6);
SET64(2, RD(2) >> 53);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32); return;
}

void JP_F_002A9A20(Ctx *c) { /* func_002A9A20 */
ENTER(0x2a9a20);
wr32(c, (RW(4) + 168), RW(5));
wr32(c, (RW(4) + 172), RW(6)); return;
}

void JP_F_002A9A30(Ctx *c) { /* func_002A9A30 */
ENTER(0x2a9a30);
wr32(c, (RW(4) + 160), RW(5));
wr32(c, (RW(4) + 164), RW(6)); return;
}

void JP_F_002A9A40(Ctx *c) { /* func_002A9A40 */
ENTER(0x2a9a40);
SET64(3, RD(5) << 32);
SET64(10, rd64(c, (RW(4) + 152)));
SET64(3, RD(3) >> 32);
SET32(7, RW(0) + -1);
SET64(9, RD(3) << 32);
SET64(6, rd64(c, (RW(4) + 128)));
SET64(3, RD(0) | 0xffff);
SET64(5, rd64(c, (RW(4) + 104)));
SET64(3, RD(3) << 16);
SET64(3, RD(3) | 0xffff);
mmi_pcpyld(c, &c->r[8], &c->r[7], &c->r[3]);
SET64(7, RD(10) & RD(8));
SET64(3, rd64(c, (RW(4) + 80)));
SET64(7, RD(7) | RD(9));
SET64(6, RD(6) & RD(8));
wr64(c, (RW(4) + 152), RD(7));
SET64(5, RD(5) & RD(8));
SET64(7, RD(7) >> 32);
SET64(7, RD(7) << 32);
SET64(7, RD(7) >> 32);
SET64(7, RD(7) << 32);
SET64(3, RD(3) & RD(8));
SET64(6, RD(6) | RD(7));
wr64(c, (RW(4) + 128), RD(6));
SET64(6, RD(6) >> 32);
SET64(6, RD(6) << 32);
SET64(6, RD(6) >> 32);
SET64(6, RD(6) << 32);
SET64(5, RD(5) | RD(6));
wr64(c, (RW(4) + 104), RD(5));
SET64(5, RD(5) >> 32);
SET64(5, RD(5) << 32);
SET64(5, RD(5) >> 32);
SET64(5, RD(5) << 32);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 80), RD(3)); return;
}

void JP_F_002A9AE0(Ctx *c) { /* func_002A9AE0 */
ENTER(0x2a9ae0);
SET64(8, rd8(c, (RW(5) + 2)));
SET64(3, (s64)(s32)0xffff0000);
SET64(6, rd8(c, (RW(5) + 3)));
SET64(9, RD(3) | 0xff);
SET64(13, rd8(c, (RW(5) + 0)));
SET64(3, (s64)(s32)0xff000000);
SET64(10, rd8(c, (RW(5) + 1)));
SET64(7, RD(3) | 0xffff);
SET64(12, (s32)rd32(c, (RW(4) + 72)));
SET32(3, RW(0) + -1);
SET32(11, RW(0) + -256);
SET32(8, RW(8) << 16);
SET32(6, RW(6) << 24);
SET64(5, RD(3) << 32);
SET64(3, (s64)(s32)0xff0000);
SET64(11, RD(12) & RD(11));
SET64(3, RD(3) | 0xffff);
SET64(11, RD(11) | RD(13));
SET64(5, RD(3) | RD(5));
SET64(3, RD(11) & RD(9));
SET32(9, RW(10) << 8);
SET64(3, RD(3) | RD(9));
SET64(3, RD(3) & RD(7));
SET64(7, RD(3) | RD(8));
SET64(3, (s64)(s32)0x3f800000);
SET64(5, RD(7) & RD(5));
wr32(c, (RW(4) + 76), RW(3));
SET64(3, RD(5) | RD(6));
wr32(c, (RW(4) + 72), RW(3));
SET64(3, rd64(c, (RW(4) + 72)));
wr64(c, (RW(4) + 96), RD(3));
wr64(c, (RW(4) + 120), RD(3));
wr64(c, (RW(4) + 144), RD(3)); return;
}

void JP_F_002A9B70(Ctx *c) { /* func_002A9B70 */
ENTER(0x2a9b70);
SET64(10, (s32)rd32(c, (RW(4) + 4)));
SET64(9, (s32)rd32(c, (RW(5) + 4)));
SET64(8, (s32)rd32(c, (RW(5) + 0)));
SET64(6, (s32)rd32(c, (RW(5) + 8)));
SET64(7, (s32)rd32(c, (RW(5) + 12)));
SET32(3, RW(9) << (RW(10) & 31));
SET32(5, RW(8) << (RW(10) & 31));
SET32(8, RW(8) + RW(6));
SET64(6, RD(3) << 16);
SET32(8, RW(8) << (RW(10) & 31));
SET32(3, RW(9) + RW(7));
SET32(7, RW(3) << (RW(10) & 31));
SET64(3, RD(5) | RD(6));
wr64(c, (RW(4) + 64), RD(3));
SET64(3, RD(8) | RD(6));
wr64(c, (RW(4) + 88), RD(3));
SET64(3, RD(7) << 16);
SET64(5, RD(5) | RD(3));
SET64(3, RD(8) | RD(3));
wr64(c, (RW(4) + 112), RD(5));
wr64(c, (RW(4) + 136), RD(3)); return;
}

void JP_F_002A9BD0(Ctx *c) { /* func_002A9BD0 */
ENTER(0x2a9bd0);
rd128(c, (RW(5) + 0) & ~15u, &c->r[5]);
SET64(3, (s64)(s32)0x3f800000);
wr128(c, (RW(4) + 176) & ~15u, &c->r[5]);
wr32(c, (RW(4) + 188), RW(3)); return;
}

void JP_F_002A9BF0(Ctx *c) { /* func_002A9BF0 */
ENTER(0x2a9bf0);
wr32(c, (RW(4) + 192), c->f[12].u); return;
}

void JP_F_002A9C00(Ctx *c) { /* func_002A9C00 */
ENTER(0x2a9c00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A9C54; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5040);
SET32(2, RW(2) + 5060);
wr32(c, (RW(17) + 8), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2a9c3c); wr32(c, (RW(17) + 12), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002A9C58; }
SET64(31, 0x2a9c54); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002A9C54:;
SET64(2, RD(17) + RD(0));
L_002A9C58:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A9C70(Ctx *c) { /* func_002A9C70 */
ENTER(0x2a9c70);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(7) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(9) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(31, 0x2a9cac); SET64(16, RD(8) + RD(0)); JP_F_002B0400(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, RD(20) << 32);
SET32(3, RW(3) + 5040);
SET64(2, RD(2) >> 32);
wr32(c, (RW(19) + 8), RW(3));
SET64(5, RD(2) << 32);
SET64(3, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x3f800000);
SET32(3, RW(3) + 5060);
rd128(c, (RW(17) + 0) & ~15u, &c->r[2]);
wr32(c, (RW(19) + 12), RW(3));
SET32(12, RW(0) + -256);
SET64(3, (s64)(s32)0x108a0000);
SET64(13, (s32)rd32(c, (RW(19) + 72)));
SET64(3, RD(3) | 0x4000);
wr32(c, (RW(19) + 176), RW(0));
SET64(4, RD(3) << 32);
wr32(c, (RW(19) + 180), RW(0));
SET32(3, RW(0) + 1);
wr32(c, (RW(19) + 184), RW(0));
SET64(3, RD(3) | RD(4));
wr128(c, (RW(19) + 176) & ~15u, &c->r[2]);
wr64(c, (RW(19) + 16), RD(3));
SET64(2, RD(0) | 0x8004);
SET32(3, RW(0) + 14);
wr32(c, (RW(19) + 76), RW(6));
wr64(c, (RW(19) + 24), RD(3));
SET32(4, RW(0) + -1);
SET32(3, RW(0) + 5);
wr32(c, (RW(19) + 188), RW(6));
wr64(c, (RW(19) + 32), RD(3));
SET64(12, RD(13) & RD(12));
SET32(3, RW(0) + 8);
SET64(14, rd8(c, (RW(16) + 0)));
wr64(c, (RW(19) + 40), RD(3));
SET64(3, (s64)(s32)0x34000000);
SET64(11, rd8(c, (RW(16) + 1)));
SET64(3, RD(3) << 32);
SET64(9, rd64(c, (RW(18) + 8)));
SET64(2, RD(2) | RD(3));
wr32(c, (RW(19) + 168), RW(0));
wr64(c, (RW(19) + 48), RD(2));
SET64(3, RD(4) << 32);
SET32(2, RW(0) + 1299);
SET64(13, RD(12) | RD(14));
wr64(c, (RW(19) + 56), RD(2));
SET64(2, (s64)(s32)0xffff0000);
wr32(c, (RW(19) + 172), RW(0));
SET64(6, RD(2) | 0xff);
wr64(c, (RW(19) + 168), RD(9));
SET64(2, (s64)(s32)0xff000000);
SET64(9, rd8(c, (RW(16) + 3)));
SET64(10, RD(2) | 0xffff);
SET32(12, RW(11) << 8);
SET64(2, (s64)(s32)0xff0000);
SET64(6, RD(13) & RD(6));
SET64(2, RD(2) | 0xffff);
SET64(15, rd64(c, (RW(18) + 0)));
SET64(8, RD(2) | RD(3));
wr32(c, (RW(19) + 160), RW(0));
SET64(2, RD(0) | 0xffff);
SET64(3, rd8(c, (RW(16) + 2)));
SET64(2, RD(2) << 16);
wr32(c, (RW(19) + 164), RW(0));
SET64(2, RD(2) | 0xffff);
SET32(9, RW(9) << 24);
mmi_pcpyld(c, &c->r[7], &c->r[4], &c->r[2]);
wr32(c, (RW(19) + 196), RW(21));
SET64(4, rd64(c, (RW(19) + 152)));
SET64(2, RD(19) + RD(0));
wr64(c, (RW(19) + 64), RD(0));
SET32(11, RW(3) << 16);
wr64(c, (RW(19) + 88), RD(0));
SET64(3, RD(6) | RD(12));
wr64(c, (RW(19) + 112), RD(0));
SET64(10, RD(3) & RD(10));
SET64(6, rd64(c, (RW(19) + 128)));
SET64(3, rd64(c, (RW(19) + 104)));
SET64(10, RD(10) | RD(11));
SET64(4, RD(4) & RD(7));
SET64(8, RD(10) & RD(8));
SET64(5, RD(4) | RD(5));
SET64(8, RD(8) | RD(9));
SET64(4, RD(5) >> 32);
wr64(c, (RW(19) + 152), RD(5));
SET64(4, RD(4) << 32);
wr32(c, (RW(19) + 72), RW(8));
SET64(4, RD(4) >> 32);
wr64(c, (RW(19) + 136), RD(0));
SET64(5, RD(4) << 32);
SET64(3, RD(3) & RD(7));
SET64(4, RD(6) & RD(7));
wr32(c, (RW(19) + 192), RW(0));
SET64(4, RD(4) | RD(5));
SET64(6, rd64(c, (RW(19) + 72)));
wr64(c, (RW(19) + 128), RD(4));
SET64(4, RD(4) >> 32);
SET64(5, rd64(c, (RW(19) + 80)));
SET64(4, RD(4) << 32);
wr64(c, (RW(19) + 160), RD(15));
SET64(4, RD(4) >> 32);
SET64(4, RD(4) << 32);
SET64(3, RD(3) | RD(4));
wr64(c, (RW(19) + 96), RD(6));
wr64(c, (RW(19) + 104), RD(3));
SET64(3, RD(3) >> 32);
wr64(c, (RW(19) + 120), RD(6));
SET64(3, RD(3) << 32);
wr64(c, (RW(19) + 144), RD(6));
SET64(3, RD(3) >> 32);
SET64(4, RD(3) << 32);
SET64(3, RD(5) & RD(7));
SET64(3, RD(3) | RD(4));
wr64(c, (RW(19) + 80), RD(3));
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002A9EA0(Ctx *c) { /* func_002A9EA0 */
ENTER(0x2a9ea0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 112)));
{ int t = RD(4) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002A9ED0; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2a9ed0);  rt_call(c, t); }
L_002A9ED0:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(17) + 128)));
SET64(4, RD(3) << 32);
SET64(10, (s32)rd32(c, (RW(17) + 132)));
SET64(3, RD(0) | 0xffff);
SET64(13, (s32)rd32(c, (RW(16) + 288)));
SET64(9, RD(3) | RD(4));
SET64(8, (s32)rd32(c, (RW(16) + 292)));
SET64(12, (s64)(s32)0xffff0000);
SET64(11, rd64(c, (RW(17) + 80)));
SET64(4, RD(16) + RD(0));
SET64(7, (s32)rd32(c, (RW(17) + 136)));
SET32(5, RW(17) + 16);
SET32(3, RW(6) << (RW(2) & 31));
SET32(10, RW(10) << (RW(2) & 31));
SET64(6, rd64(c, (RW(17) + 104)));
SET32(13, RW(3) + RW(13));
SET64(3, (s32)rd32(c, (RW(17) + 140)));
SET64(13, RD(13) << 32);
SET32(8, RW(10) + RW(8));
SET64(13, RSD(13) >> 32);
SET64(10, RD(8) << 32);
SET64(11, RD(11) & RD(12));
SET64(13, RD(13) & 0xffff);
SET64(10, RSD(10) >> 32);
SET64(11, RD(11) | RD(13));
SET64(10, RD(10) & 0xffff);
SET64(8, RD(11) & RD(9));
SET64(10, RD(10) << 16);
SET64(8, RD(8) | RD(10));
SET32(7, RW(7) << (RW(2) & 31));
SET32(3, RW(3) << (RW(2) & 31));
SET64(6, RD(6) & RD(12));
SET64(2, RD(8) & 0xffff);
wr64(c, (RW(17) + 80), RD(8));
SET64(7, RD(2) + RD(7));
SET64(2, RD(8) << 32);
SET64(7, RD(7) << 32);
SET64(2, RD(2) >> 48);
SET64(7, RSD(7) >> 32);
SET64(2, RD(2) + RD(3));
SET64(3, RD(7) & 0xffff);
SET64(6, RD(6) | RD(3));
SET64(7, (s64)(s32)0x13000000);
SET64(3, RD(2) << 32);
SET64(3, RSD(3) >> 32);
SET64(2, RD(6) & RD(9));
SET64(3, RD(3) & 0xffff);
SET32(6, RW(0) + 96);
SET64(3, RD(3) << 16);
SET64(2, RD(2) | RD(3));
wr64(c, (RW(17) + 104), RD(2));
SET64(2, (s64)(s32)0x50000000);
SET64(31, 0x2a9fb0); SET64(8, RD(2) | 0x6); JP_F_002B1AB0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002A9FD0(Ctx *c) { /* func_002A9FD0 */
ENTER(0x2a9fd0);
wr32(c, (RW(4) + 136), RW(5));
wr32(c, (RW(4) + 140), RW(6)); return;
}

void JP_F_002A9FE0(Ctx *c) { /* func_002A9FE0 */
ENTER(0x2a9fe0);
wr32(c, (RW(4) + 128), RW(5));
wr32(c, (RW(4) + 132), RW(6)); return;
}

void JP_F_002A9FF0(Ctx *c) { /* func_002A9FF0 */
ENTER(0x2a9ff0);
SET64(3, ~(RD(5) | RD(0)));
SET64(6, rd64(c, (RW(4) + 16)));
SET64(7, RD(3) << 32);
SET64(5, (s64)(s32)0xfc000000);
SET64(3, RD(0) | 0xffff);
SET64(5, RD(5) | 0x7fff);
SET64(3, RD(3) << 16);
SET64(5, RD(5) << 32);
SET64(3, RD(3) | 0xffff);
SET64(7, RSD(7) >> 32);
SET64(3, RD(3) | RD(5));
SET64(5, RD(6) << 6);
SET64(3, RD(6) & RD(3));
SET64(5, RD(5) >> 53);
SET64(5, RD(5) & RD(7));
SET64(5, RD(5) & 0x7ff);
SET64(5, RD(5) << 47);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 16), RD(3)); return;
}

void JP_F_002AA040(Ctx *c) { /* func_002AA040 */
ENTER(0x2aa040);
SET64(7, RD(5) << 32);
SET64(3, (s64)(s32)0xfc000000);
SET64(5, RD(3) | 0x7fff);
SET64(6, rd64(c, (RW(4) + 16)));
SET64(3, RD(0) | 0xffff);
SET64(5, RD(5) << 32);
SET64(3, RD(3) << 16);
SET64(7, RSD(7) >> 32);
SET64(3, RD(3) | 0xffff);
SET64(3, RD(3) | RD(5));
SET64(5, RD(6) << 6);
SET64(3, RD(6) & RD(3));
SET64(5, RD(5) >> 53);
SET64(5, RD(5) | RD(7));
SET64(5, RD(5) & 0x7ff);
SET64(5, RD(5) << 47);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 16), RD(3)); return;
}

void JP_F_002AA090(Ctx *c) { /* func_002AA090 */
ENTER(0x2aa090);
SET64(2, rd64(c, (RW(4) + 16)));
SET64(2, RD(2) << 6);
SET64(2, RD(2) >> 53);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32); return;
}

void JP_F_002AA0B0(Ctx *c) { /* func_002AA0B0 */
ENTER(0x2aa0b0);
SET64(3, RD(5) << 32);
SET64(8, rd64(c, (RW(4) + 104)));
SET64(3, RD(3) >> 32);
SET32(6, RW(0) + -1);
SET64(7, RD(3) << 32);
SET64(3, RD(0) | 0xffff);
SET64(5, RD(3) << 16);
SET64(5, RD(5) | 0xffff);
SET64(3, rd64(c, (RW(4) + 80)));
mmi_pcpyld(c, &c->r[6], &c->r[6], &c->r[5]);
SET64(5, RD(8) & RD(6));
SET64(5, RD(5) | RD(7));
wr64(c, (RW(4) + 104), RD(5));
SET64(5, RD(5) >> 32);
SET64(5, RD(5) << 32);
SET64(3, RD(3) & RD(6));
SET64(5, RD(5) >> 32);
SET64(5, RD(5) << 32);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 80), RD(3)); return;
}

void JP_F_002AA110(Ctx *c) { /* func_002AA110 */
ENTER(0x2aa110);
SET64(8, rd8(c, (RW(5) + 2)));
SET64(3, (s64)(s32)0xffff0000);
SET64(6, rd8(c, (RW(5) + 3)));
SET64(9, RD(3) | 0xff);
SET64(13, rd8(c, (RW(5) + 0)));
SET64(3, (s64)(s32)0xff000000);
SET64(10, rd8(c, (RW(5) + 1)));
SET64(7, RD(3) | 0xffff);
SET64(12, (s32)rd32(c, (RW(4) + 96)));
SET32(3, RW(0) + -1);
SET32(11, RW(0) + -256);
SET32(8, RW(8) << 16);
SET32(6, RW(6) << 24);
SET64(5, RD(3) << 32);
SET64(3, (s64)(s32)0xff0000);
SET64(11, RD(12) & RD(11));
SET64(3, RD(3) | 0xffff);
SET64(11, RD(11) | RD(13));
SET64(5, RD(3) | RD(5));
SET64(3, RD(11) & RD(9));
SET32(9, RW(10) << 8);
SET64(3, RD(3) | RD(9));
SET64(3, RD(3) & RD(7));
SET64(7, RD(3) | RD(8));
SET64(3, (s64)(s32)0x3f800000);
SET64(5, RD(7) & RD(5));
wr32(c, (RW(4) + 100), RW(3));
SET64(3, RD(5) | RD(6));
wr32(c, (RW(4) + 96), RW(3)); return;
}

void JP_F_002AA190(Ctx *c) { /* func_002AA190 */
ENTER(0x2aa190);
SET64(10, (s32)rd32(c, (RW(4) + 4)));
SET64(9, (s32)rd32(c, (RW(5) + 4)));
SET64(8, (s32)rd32(c, (RW(5) + 0)));
SET64(3, (s32)rd32(c, (RW(5) + 8)));
SET64(6, (s32)rd32(c, (RW(5) + 12)));
SET32(3, RW(8) + RW(3));
SET32(5, RW(9) << (RW(10) & 31));
SET32(3, RW(3) << (RW(10) & 31));
SET64(7, RD(5) << 16);
SET32(5, RW(8) << (RW(10) & 31));
SET64(7, RD(5) | RD(7));
SET32(5, RW(9) + RW(6));
wr64(c, (RW(4) + 64), RD(7));
SET32(5, RW(5) << (RW(10) & 31));
SET64(5, RD(5) << 16);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 88), RD(3)); return;
}

void JP_F_002AA1E0(Ctx *c) { /* func_002AA1E0 */
ENTER(0x2aa1e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AA234; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5104);
SET32(2, RW(2) + 5124);
wr32(c, (RW(17) + 8), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2aa21c); wr32(c, (RW(17) + 12), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AA238; }
SET64(31, 0x2aa234); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AA234:;
SET64(2, RD(17) + RD(0));
L_002AA238:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AA250(Ctx *c) { /* func_002AA250 */
ENTER(0x2aa250);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(6) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(8) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2aa284); SET64(16, RD(7) + RD(0)); JP_F_002B0400(c);
SET64(2, RD(19) << 32);
SET64(9, rd8(c, (RW(16) + 2)));
SET64(2, RD(2) >> 32);
SET64(5, rd64(c, (RW(17) + 0)));
SET64(3, RD(2) << 32);
SET64(13, (s32)rd32(c, (RW(18) + 96)));
SET64(2, (s64)(s32)0x4e0000);
SET64(7, rd64(c, (RW(17) + 8)));
SET32(2, RW(2) + 5104);
SET64(14, rd8(c, (RW(16) + 0)));
wr32(c, (RW(18) + 8), RW(2));
SET32(6, RW(0) + -1);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 128), RW(0));
SET32(2, RW(2) + 5124);
wr32(c, (RW(18) + 132), RW(0));
wr32(c, (RW(18) + 12), RW(2));
SET32(12, RW(0) + -256);
SET64(2, (s64)(s32)0x108b0000);
SET64(11, rd8(c, (RW(16) + 1)));
SET64(2, RD(2) | 0x4000);
wr64(c, (RW(18) + 128), RD(5));
SET64(4, RD(2) << 32);
wr32(c, (RW(18) + 136), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 140), RW(0));
SET64(2, RD(2) | RD(4));
wr64(c, (RW(18) + 136), RD(7));
wr64(c, (RW(18) + 16), RD(2));
SET32(9, RW(9) << 16);
SET32(2, RW(0) + 14);
SET64(7, rd8(c, (RW(16) + 3)));
wr64(c, (RW(18) + 24), RD(2));
SET32(2, RW(0) + 5);
wr32(c, (RW(18) + 112), RW(20));
wr64(c, (RW(18) + 32), RD(2));
SET32(2, RW(0) + 8);
wr64(c, (RW(18) + 64), RD(0));
wr64(c, (RW(18) + 40), RD(2));
SET64(2, (s64)(s32)0x34000000);
SET32(7, RW(7) << 24);
SET64(4, RD(2) << 32);
wr64(c, (RW(18) + 88), RD(0));
SET64(2, RD(0) | 0x8002);
SET64(4, RD(2) | RD(4));
SET32(2, RW(0) + 1299);
wr64(c, (RW(18) + 48), RD(4));
wr64(c, (RW(18) + 56), RD(2));
SET64(4, RD(6) << 32);
SET64(2, (s64)(s32)0xffff0000);
SET64(10, RD(2) | 0xff);
SET64(2, (s64)(s32)0xff000000);
SET64(8, RD(2) | 0xffff);
SET64(2, (s64)(s32)0xff0000);
SET64(2, RD(2) | 0xffff);
SET64(5, RD(2) | RD(4));
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(13) & RD(12));
wr32(c, (RW(18) + 100), RW(2));
SET64(2, RD(4) | RD(14));
SET32(4, RW(11) << 8);
SET64(2, RD(2) & RD(10));
SET64(2, RD(2) | RD(4));
SET64(4, rd64(c, (RW(18) + 104)));
SET64(8, RD(2) & RD(8));
SET64(2, RD(0) | 0xffff);
SET64(8, RD(8) | RD(9));
SET64(2, RD(2) << 16);
SET64(5, RD(8) & RD(5));
SET64(2, RD(2) | 0xffff);
SET64(5, RD(5) | RD(7));
mmi_pcpyld(c, &c->r[6], &c->r[6], &c->r[2]);
wr32(c, (RW(18) + 96), RW(5));
SET64(5, rd64(c, (RW(18) + 80)));
SET64(2, RD(4) & RD(6));
SET64(3, RD(2) | RD(3));
wr64(c, (RW(18) + 104), RD(3));
SET64(2, RD(18) + RD(0));
SET64(3, RD(3) >> 32);
SET64(3, RD(3) << 32);
SET64(3, RD(3) >> 32);
SET64(4, RD(3) << 32);
SET64(3, RD(5) & RD(6));
SET64(3, RD(3) | RD(4));
wr64(c, (RW(18) + 80), RD(3));
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002AA400(Ctx *c) { /* func_002AA400 */
ENTER(0x2aa400);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET32(2, RW(0) + -1);
SET64(10, (s32)rd32(c, (RW(4) + 64)));
SET64(6, RD(2) << 32);
SET64(13, (s32)rd32(c, (RW(4) + 68)));
SET64(2, RD(0) | 0xffff);
SET64(8, (s32)rd32(c, (RW(5) + 288)));
SET64(2, RD(2) | RD(6));
SET64(12, (s32)rd32(c, (RW(5) + 292)));
SET64(15, (s64)(s32)0xffff0000);
SET64(14, rd64(c, (RW(4) + 40)));
SET64(9, RD(4) + RD(0));
SET64(11, (s32)rd32(c, (RW(4) + 72)));
SET32(6, RW(0) + 48);
SET32(24, RW(10) << (RW(3) & 31));
SET64(7, (s64)(s32)0x13000000);
SET32(13, RW(13) << (RW(3) & 31));
SET64(10, rd64(c, (RW(4) + 56)));
SET32(24, RW(24) + RW(8));
SET64(8, (s32)rd32(c, (RW(4) + 76)));
SET64(24, RD(24) << 32);
SET32(12, RW(13) + RW(12));
SET64(24, RSD(24) >> 32);
SET64(13, RD(12) << 32);
SET64(14, RD(14) & RD(15));
SET64(24, RD(24) & 0xffff);
SET64(13, RSD(13) >> 32);
SET64(14, RD(14) | RD(24));
SET64(13, RD(13) & 0xffff);
SET64(12, RD(14) & RD(2));
SET64(13, RD(13) << 16);
SET64(12, RD(12) | RD(13));
SET32(11, RW(11) << (RW(3) & 31));
SET32(8, RW(8) << (RW(3) & 31));
SET64(10, RD(10) & RD(15));
SET64(3, RD(12) & 0xffff);
wr64(c, (RW(4) + 40), RD(12));
SET64(11, RD(3) + RD(11));
SET64(3, RD(12) << 32);
SET64(11, RD(11) << 32);
SET64(3, RD(3) >> 48);
SET64(11, RSD(11) >> 32);
SET64(3, RD(3) + RD(8));
SET64(8, RD(11) & 0xffff);
SET64(10, RD(10) | RD(8));
SET64(8, RD(3) << 32);
SET64(8, RSD(8) >> 32);
SET64(3, RD(10) & RD(2));
SET64(2, RD(8) & 0xffff);
SET64(8, RD(2) << 16);
SET64(3, RD(3) | RD(8));
SET64(2, (s64)(s32)0x50000000);
wr64(c, (RW(4) + 56), RD(3));
SET64(8, RD(2) | 0x3);
SET64(4, RD(5) + RD(0));
SET32(5, RW(9) + 16); { JP_F_002B1AB0(c); return; }
}

void JP_F_002AA4F0(Ctx *c) { /* func_002AA4F0 */
ENTER(0x2aa4f0);
SET64(3, ~(RD(5) | RD(0)));
SET64(5, RD(3) << 32);
SET64(3, rd64(c, (RW(4) + 32)));
SET64(5, RSD(5) >> 32);
SET64(3, RD(3) & RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002AA510(Ctx *c) { /* func_002AA510 */
ENTER(0x2aa510);
SET64(3, rd64(c, (RW(4) + 32)));
SET64(5, RD(5) << 32);
SET64(5, RSD(5) >> 32);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002AA530(Ctx *c) { /* func_002AA530 */
ENTER(0x2aa530);
SET64(2, (s32)rd32(c, (RW(4) + 32))); return;
}

void JP_F_002AA540(Ctx *c) { /* func_002AA540 */
ENTER(0x2aa540);
wr32(c, (RW(4) + 72), RW(5));
wr32(c, (RW(4) + 76), RW(6)); return;
}

void JP_F_002AA550(Ctx *c) { /* func_002AA550 */
ENTER(0x2aa550);
wr32(c, (RW(4) + 64), RW(5));
wr32(c, (RW(4) + 68), RW(6)); return;
}

void JP_F_002AA560(Ctx *c) { /* func_002AA560 */
ENTER(0x2aa560);
SET64(3, RD(5) << 32);
SET64(8, rd64(c, (RW(4) + 56)));
SET64(3, RD(3) >> 32);
SET32(6, RW(0) + -1);
SET64(7, RD(3) << 32);
SET64(3, RD(0) | 0xffff);
SET64(5, RD(3) << 16);
SET64(5, RD(5) | 0xffff);
SET64(3, rd64(c, (RW(4) + 40)));
mmi_pcpyld(c, &c->r[6], &c->r[6], &c->r[5]);
SET64(5, RD(8) & RD(6));
SET64(5, RD(5) | RD(7));
wr64(c, (RW(4) + 56), RD(5));
SET64(5, RD(5) >> 32);
SET64(5, RD(5) << 32);
SET64(3, RD(3) & RD(6));
SET64(5, RD(5) >> 32);
SET64(5, RD(5) << 32);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 40), RD(3)); return;
}

void JP_F_002AA5C0(Ctx *c) { /* func_002AA5C0 */
ENTER(0x2aa5c0);
SET64(8, rd8(c, (RW(5) + 2)));
SET64(3, (s64)(s32)0xffff0000);
SET64(6, rd8(c, (RW(5) + 3)));
SET64(9, RD(3) | 0xff);
SET64(13, rd8(c, (RW(5) + 0)));
SET64(3, (s64)(s32)0xff000000);
SET64(10, rd8(c, (RW(5) + 1)));
SET64(7, RD(3) | 0xffff);
SET64(12, (s32)rd32(c, (RW(4) + 48)));
SET32(3, RW(0) + -1);
SET32(11, RW(0) + -256);
SET32(8, RW(8) << 16);
SET32(6, RW(6) << 24);
SET64(5, RD(3) << 32);
SET64(3, (s64)(s32)0xff0000);
SET64(11, RD(12) & RD(11));
SET64(3, RD(3) | 0xffff);
SET64(11, RD(11) | RD(13));
SET64(5, RD(3) | RD(5));
SET64(3, RD(11) & RD(9));
SET32(9, RW(10) << 8);
SET64(3, RD(3) | RD(9));
SET64(3, RD(3) & RD(7));
SET64(7, RD(3) | RD(8));
SET64(3, (s64)(s32)0x3f800000);
SET64(5, RD(7) & RD(5));
wr32(c, (RW(4) + 52), RW(3));
SET64(3, RD(5) | RD(6));
wr32(c, (RW(4) + 48), RW(3)); return;
}

void JP_F_002AA640(Ctx *c) { /* func_002AA640 */
ENTER(0x2aa640);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AA694; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5168);
SET32(2, RW(2) + 5188);
wr32(c, (RW(17) + 8), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2aa67c); wr32(c, (RW(17) + 12), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AA698; }
SET64(31, 0x2aa694); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AA694:;
SET64(2, RD(17) + RD(0));
L_002AA698:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AA6B0(Ctx *c) { /* func_002AA6B0 */
ENTER(0x2aa6b0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(7) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2aa6dc); SET64(16, RD(6) + RD(0)); JP_F_002B0400(c);
SET64(2, RD(19) << 32);
SET64(9, rd8(c, (RW(16) + 2)));
SET64(2, RD(2) >> 32);
SET64(3, RD(0) | 0x8001);
SET64(4, RD(2) << 32);
SET64(13, (s32)rd32(c, (RW(18) + 48)));
SET64(2, (s64)(s32)0x4e0000);
SET64(14, rd8(c, (RW(16) + 0)));
SET32(2, RW(2) + 5168);
wr32(c, (RW(18) + 72), RW(0));
wr32(c, (RW(18) + 8), RW(2));
SET32(6, RW(0) + -1);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 76), RW(0));
SET32(2, RW(2) + 5188);
SET64(7, rd64(c, (RW(17) + 0)));
wr32(c, (RW(18) + 12), RW(2));
SET32(12, RW(0) + -256);
SET64(2, (s64)(s32)0x44000000);
SET64(11, rd8(c, (RW(16) + 1)));
SET64(5, RD(2) << 32);
wr32(c, (RW(18) + 64), RW(0));
SET32(2, RW(0) + 20816);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(18) + 24), RD(2));
SET32(9, RW(9) << 16);
SET32(2, RW(0) + 6);
SET64(5, rd64(c, (RW(17) + 8)));
wr64(c, (RW(18) + 32), RD(2));
SET64(2, (s64)(s32)0xffff0000);
wr64(c, (RW(18) + 16), RD(3));
SET64(10, RD(2) | 0xff);
wr32(c, (RW(18) + 68), RW(0));
SET64(2, (s64)(s32)0xff000000);
wr64(c, (RW(18) + 64), RD(7));
SET64(8, RD(2) | 0xffff);
SET64(7, rd8(c, (RW(16) + 3)));
SET64(2, (s64)(s32)0xff0000);
SET64(3, RD(6) << 32);
wr64(c, (RW(18) + 72), RD(5));
SET64(2, RD(2) | 0xffff);
SET64(5, RD(2) | RD(3));
SET64(3, RD(13) & RD(12));
SET64(2, (s64)(s32)0x3f800000);
SET64(3, RD(3) | RD(14));
wr32(c, (RW(18) + 52), RW(2));
SET64(2, RD(3) & RD(10));
SET32(7, RW(7) << 24);
SET32(3, RW(11) << 8);
SET64(2, RD(2) | RD(3));
SET64(2, RD(2) & RD(8));
SET64(3, rd64(c, (RW(18) + 56)));
SET64(2, RD(2) | RD(9));
SET64(5, RD(2) & RD(5));
SET64(2, RD(0) | 0xffff);
SET64(5, RD(5) | RD(7));
SET64(2, RD(2) << 16);
wr32(c, (RW(18) + 48), RW(5));
SET64(2, RD(2) | 0xffff);
SET64(5, rd64(c, (RW(18) + 40)));
mmi_pcpyld(c, &c->r[6], &c->r[6], &c->r[2]);
SET64(3, RD(3) & RD(6));
SET64(2, RD(18) + RD(0));
SET64(3, RD(3) | RD(4));
wr64(c, (RW(18) + 56), RD(3));
SET64(3, RD(3) >> 32);
SET64(3, RD(3) << 32);
SET64(3, RD(3) >> 32);
SET64(4, RD(3) << 32);
SET64(3, RD(5) & RD(6));
SET64(3, RD(3) | RD(4));
wr64(c, (RW(18) + 40), RD(3));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002AA820(Ctx *c) { hle_frame_lines(c); } /* func_002AA820 */

static void JP_B_002AA850(Ctx *c, u32 entry) { /* func_002AA850 */
ENTER(entry);
switch (entry) { case 0x2aa9b0: goto L_002AA9B0; }
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2aa870); SET32(4, RW(0) + 160); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002AA890; }
SET64(5, (s32)rd32(c, (RW(28) + -31464)));
SET64(4, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(28) + -31460)));
SET64(31, 0x2aa88c); SET32(7, RW(0) + 1); JP_F_002A7220(c);
SET64(17, RD(2) + RD(0));
L_002AA890:;
SET64(31, 0x2aa898);  JP_F_002ADAD0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2aa8a4); SET64(5, RD(17) + RD(0)); JP_F_002AD9C0(c);
{ int t = RD(17) == RD(0);  if (t) goto L_002AA8B0; }
SET32(17, RW(17) + 148);
L_002AA8B0:;
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2aa8c0); SET64(6, RD(0) + RD(0)); JP_F_002ABF80(c);
{ int t = RD(16) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_002AA978; }
SET32(5, RW(16) + 256); goto L_002AA978;
L_002AA8D0:;
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_002AA8DC; }
SET32(17, RW(16) + 260);
L_002AA8DC:;
SET64(31, 0x2aa8e4); SET64(4, RD(18) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 48);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + 5408);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(0));
wr32(c, (RW(18) + 0), RW(2));
L_002AA91C:;
SET64(4, (s64)(s32)0x530000);
wr32(c, (RW(16) + 368), RW(18));
SET64(31, 0x2aa92c); SET32(4, RW(4) + -16880); JP_F_0023A2D0(c);
L_002AA92C:;
SET32(4, RW(16) + 112);
L_002AA930:;
SET64(31, 0x2aa938); SET32(5, RW(0) + 16); JP_F_002AD840(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(17, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2aa94c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) < RD(17));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0); SET32(4, RW(16) + 112); if (t) { POLL(); goto L_002AA930; } }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2aa970); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002AA92C; }
L_002AA978:;
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x2aa984); SET64(6, RD(0) + RD(0)); JP_F_002ABF80(c);
SET64(31, 0x2aa98c); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(31, 0x2aa994); SET32(4, RW(0) + 20); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) { POLL(); goto L_002AA91C; } }
 { POLL(); goto L_002AA8D0; }
L_002AA9B0:;
{ int t = RD(4) == RD(0); SET64(2, RD(4) + RD(0)); if (t) goto L_002AA9C0; }
SET32(4, RW(4) + 112);
SET64(2, RD(4) + RD(0));
L_002AA9C0:;
 return;
}
void JP_F_002AA850(Ctx *c) { JP_B_002AA850(c, 0x2aa850); }
void JP_F_002AA9B0(Ctx *c) { JP_B_002AA850(c, 0x2aa9b0); }

void JP_F_002AA9D0(Ctx *c) { /* func_002AA9D0 */
ENTER(0x2aa9d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 372)));
{ int t = RD(5) == RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_002AA9FC; }
SET64(31, 0x2aa9f8); SET64(4, (s32)rd32(c, (RW(28) + -29912))); JP_F_002B0B30(c);
wr32(c, (RW(18) + 372), RW(0));
L_002AA9FC:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2aaa08); SET32(4, RW(4) + 1896); JP_F_002AD1C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2aaa14); SET64(5, RD(0) + RD(0)); JP_F_002A3440(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2aaa20); SET32(4, RW(4) + 1904); JP_F_002AD1C0(c);
SET64(2, (s64)(s32)0x10000000);
SET64(3, rd16(c, (RW(18) + 376)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(0) + 20);
SET32(2, RW(2) - RW(3));
SET64(31, 0x2aaa3c); wr16(c, (RW(18) + 378), (u16)RW(2)); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002AAA90; }
{ int t = RD(18) == RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_002AAA50; }
SET32(16, RW(18) + 260);
L_002AAA50:;
SET64(31, 0x2aaa58); SET64(4, RD(17) + RD(0)); JP_F_002AF190(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5936);
SET32(5, RW(5) + 5744);
wr32(c, (RW(17) + 0), RW(3));
SET32(4, RW(0) + 48);
wr32(c, (RW(17) + 4), RW(0));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(5));
SET32(3, RW(3) + 5408);
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(4));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(3));
L_002AAA90:;
wr32(c, (RW(18) + 368), RW(17));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002AAAB0(Ctx *c) { /* func_002AAAB0 */
ENTER(0x2aaab0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 44)));
{ int t = RD(2) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AAB04; }
SET64(31, 0x2aaad8);  JP_F_002A3980(c);
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2aaae8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, 0x2aaaf0);  JP_F_002B0C10(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2aaafc); SET32(4, RW(4) + 1872); JP_F_002AD570(c);
SET64(31, 0x2aab04);  JP_F_002B1510(c);
L_002AAB04:;
SET64(7, rd64(c, (RW(16) + 0)));
SET64(6, rd64(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(16) + 24)));
SET64(2, (s32)rd32(c, (RW(16) + 28)));
SET64(4, (s32)rd32(c, (RW(16) + 16)));
SET64(5, (s32)rd32(c, (RW(16) + 20)));
wr64(c, (RW(17) + 288), RD(7));
wr64(c, (RW(17) + 296), RD(6));
SET64(6, RD(3) << 48);
wr32(c, (RW(17) + 312), RW(3));
SET64(7, RD(2) << 48);
wr32(c, (RW(17) + 316), RW(2));
SET64(9, (s32)rd32(c, (RW(16) + 32)));
SET64(6, RSD(6) >> 48);
SET64(8, (s32)rd32(c, (RW(16) + 36)));
SET64(7, RSD(7) >> 48);
SET64(3, (s32)rd32(c, (RW(16) + 40)));
SET64(2, (s32)rd32(c, (RW(16) + 44)));
wr32(c, (RW(17) + 304), RW(4));
wr32(c, (RW(17) + 308), RW(5));
SET64(4, RD(4) << 48);
SET64(5, RD(5) << 48);
SET64(4, RSD(4) >> 48);
SET64(5, RSD(5) >> 48);
wr32(c, (RW(17) + 320), RW(9));
wr32(c, (RW(17) + 324), RW(8));
wr32(c, (RW(17) + 328), RW(3));
SET64(31, 0x2aab78); wr32(c, (RW(17) + 332), RW(2)); JP_F_00104518(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2aab84); SET32(4, RW(4) + 1872); JP_F_002AD5E0(c);
SET64(31, 0x2aab8c);  JP_F_002B0C50(c);
SET64(25, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2aab9c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2aaba8); SET64(5, RD(16) + RD(0)); JP_F_002A36D0(c);
SET64(2, (s32)rd32(c, (RW(17) + 44)));
SET32(3, RW(0) + 1);
SET32(4, RW(16) + 8);
wr8(c, (RW(2) + 324), (u8)RW(3));
SET64(31, 0x2aabc0); wr8(c, (RW(17) + 36), (u8)RW(3)); JP_F_002A39E0(c);
SET64(3, (s32)rd32(c, (RW(28) + -29956)));
SET32(2, RW(0) + 1);
wr8(c, (RW(3) + 36), (u8)RW(2));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AABE0(Ctx *c) { /* func_002AABE0 */
ENTER(0x2aabe0);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2aabfc); SET32(4, RW(0) + 1); JP_F_00104EB8(c);
SET64(3, (s32)rd32(c, (RW(16) + 368)));
{ int t = RD(3) == RD(0);  if (t) goto L_002AAC3C; }
SET64(2, RD(2) & 0x1f);
{ int t = RD(2) != RD(0);  if (t) goto L_002AAC3C; }
SET64(2, (s64)(s32)0x10000000);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2aac28); wr16(c, (RW(16) + 376), (u16)RW(2)); JP_F_002A3490(c);
SET64(5, (s32)rd32(c, (RW(16) + 368)));
SET32(4, RW(16) + 112);
SET64(31, 0x2aac38); wr32(c, (RW(16) + 372), RW(2)); JP_F_002AD930(c);
wr32(c, (RW(16) + 368), RW(0));
L_002AAC3C:;
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AAC50(Ctx *c) { /* func_002AAC50 */
ENTER(0x2aac50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AACF8; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5232);
SET32(2, RW(2) + 5256);
wr32(c, (RW(17) + 4), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 112), RW(2));
SET32(3, RW(3) + 5272);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5288);
wr32(c, (RW(17) + 196), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 200), RW(2));
SET32(3, RW(3) + 5312);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5324);
wr32(c, (RW(17) + 256), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 260), RW(2));
SET32(3, RW(3) + 5340);
SET32(2, RW(17) + 272);
{ int t = RD(2) != RD(0); wr32(c, (RW(17) + 272), RW(3)); if (t) goto L_002AAD04; }
SET32(4, RW(17) + 112);
L_002AACCC:;
SET64(31, 0x2aacd4); SET64(5, RD(0) + RD(0)); JP_F_002ADB40(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2aace0); SET64(5, RD(0) + RD(0)); JP_F_002A35A0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AACFC; }
SET64(31, 0x2aacf8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AACF8:;
SET64(2, RD(17) + RD(0));
L_002AACFC:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002AAD24;
L_002AAD04:;
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(17) + 288);
SET32(2, RW(2) + 5392);
SET32(5, RW(0) + -1);
SET64(31, 0x2aad1c); wr32(c, (RW(17) + 272), RW(2)); JP_F_002AB420(c);
SET32(4, RW(17) + 112); { POLL(); goto L_002AACCC; }
L_002AAD24:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AAD40(Ctx *c) { /* func_002AAD40 */
ENTER(0x2aad40);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -29932)));
{ int t = RD(2) == RD(0); SET64(17, RD(7) + RD(0)); if (t) goto L_002AAD74; }
L_002AAD6C:;
SET64(2, (s32)rd32(c, (RW(28) + -29932))); goto L_002AAE5C;
L_002AAD74:;
SET64(31, 0x2aad7c);  JP_F_0023A3F0(c);
SET64(31, 0x2aad84);  JP_F_002B1510(c);
SET64(31, 0x2aad8c); SET32(4, RW(0) + 384); JP_F_00100670(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_002AAE40; }
SET64(31, 0x2aada0); SET64(4, RD(16) + RD(0)); JP_F_002A3620(c);
SET64(6, RD(18) & 0xffff);
SET64(7, RD(17) + RD(0));
SET32(4, RW(16) + 112);
SET64(31, 0x2aadb4); SET64(5, RD(0) + RD(0)); JP_F_002ADBE0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 3400);
SET32(2, RW(2) + 5376);
wr32(c, (RW(16) + 256), RW(3));
SET32(4, RW(16) + 272);
SET64(31, 0x2aadd4); wr32(c, (RW(16) + 260), RW(2)); JP_F_002AB2F0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5232);
SET32(3, RW(3) + 5256);
wr32(c, (RW(16) + 4), RW(2));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 112), RW(3));
SET32(2, RW(2) + 5272);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 196), RW(2));
SET32(3, RW(3) + 5288);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 200), RW(3));
SET32(2, RW(2) + 5312);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 256), RW(2));
SET32(3, RW(3) + 5324);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 260), RW(3));
SET32(2, RW(2) + 5340);
wr32(c, (RW(16) + 272), RW(2));
{ int t = RD(16) == RD(0); wr32(c, (RW(16) + 368), RW(0)); if (t) goto L_002AAE38; }
SET32(4, RW(16) + 112);
L_002AAE38:;
SET64(31, 0x2aae40);  JP_F_002AC440(c);
L_002AAE40:;
SET64(31, 0x2aae48); wr32(c, (RW(28) + -29932), RW(16)); JP_F_0023A3C0(c);
SET32(3, RW(0) + 131);
SET64(2, (s64)(s32)0x10000000);
wr32(c, (RW(2) + 16), RW(3));
wr32(c, (RW(2) + 0), RW(0)); { POLL(); goto L_002AAD6C; }
L_002AAE5C:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002AAE80(Ctx *c) { /* func_002AAE80 */
ENTER(0x2aae80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2aae9c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002AAEB0(Ctx *c) { /* func_002AAEB0 */
ENTER(0x2aaeb0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AAEFC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5408);
SET64(31, 0x2aaee0); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AAF00; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2aaefc); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002AAEFC:;
SET64(2, RD(17) + RD(0));
L_002AAF00:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AAF20(Ctx *c) { /* func_002AAF20 */
ENTER(0x2aaf20);
SET32(4, RW(4) + -144); { JP_F_002AAC50(c); return; }
}

void JP_F_002AAF30(Ctx *c) { /* func_002AAF30 */
ENTER(0x2aaf30);
SET32(4, RW(4) + -200); { JP_F_002AA9B0(c); return; }
}

void JP_F_002AAF40(Ctx *c) { /* func_002AAF40 */
ENTER(0x2aaf40);
SET32(4, RW(4) + -112); { JP_F_002AA9B0(c); return; }
}

void JP_F_002AAF50(Ctx *c) { /* func_002AAF50 */
ENTER(0x2aaf50);
SET32(4, RW(4) + -112); { JP_F_002AAC50(c); return; }
}

void JP_F_002AAF60(Ctx *c) { /* func_002AAF60 */
ENTER(0x2aaf60);
SET32(4, RW(4) + -112); { JP_F_002AA850(c); return; }
}

void JP_F_002AAF70(Ctx *c) { /* func_002AAF70 */
ENTER(0x2aaf70);
SET32(4, RW(4) + -256); { JP_F_002AABE0(c); return; }
}

void JP_F_002AAF80(Ctx *c) { /* func_002AAF80 */
ENTER(0x2aaf80);
SET32(4, RW(4) + -260); { JP_F_002AA9B0(c); return; }
}

void JP_F_002AAF90(Ctx *c) { /* func_002AAF90 */
ENTER(0x2aaf90);
SET32(4, RW(4) + -260); { JP_F_002AA9D0(c); return; }
}

void JP_F_002AAFA0(Ctx *c) { /* func_002AAFA0 */
ENTER(0x2aafa0);
SET32(4, RW(4) + -272); { JP_F_002AA9B0(c); return; }
}

void JP_F_002AAFB0(Ctx *c) { /* func_002AAFB0 */
ENTER(0x2aafb0);
SET32(4, RW(4) + -272); { JP_F_002AAAB0(c); return; }
}

void JP_F_002AAFC0(Ctx *c) { /* func_002AAFC0 */
ENTER(0x2aafc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AB010; }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5424);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 52), RW(2)); if (t) goto L_002AAFF8; }
SET64(31, 0x2aaff8);  JP_F_00100430(c);
L_002AAFF8:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AB014; }
SET64(31, 0x2ab010); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AB010:;
SET64(2, RD(17) + RD(0));
L_002AB014:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AB030(Ctx *c) { /* func_002AB030 */
ENTER(0x2ab030);
SET32(29, RW(29) + -64);
SET64(3, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 48), RD(31));
SET32(2, RW(6) + 15);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(3, RW(3) + 5424);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(18, RSW(2) >> 4);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
{ int t = RSD(2) >= 0; wr32(c, (RW(4) + 52), RW(3)); if (t) goto L_002AB06C; }
SET32(2, RW(2) + 15);
SET32(18, RSW(2) >> 4);
L_002AB06C:;
SET64(31, 0x2ab074); SET32(4, RW(18) << 4); JP_F_00100530(c);
SET32(3, RW(18) << 4);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 12), RW(3));
SET64(3, (s64)(s32)0x2b0000);
wr32(c, (RW(17) + 8), RW(2));
SET32(3, RW(3) + -20256);
wr32(c, (RW(17) + 20), RW(16));
wr32(c, (RW(17) + 4), RW(3));
SET32(3, RW(28) + 0);
SET64(31, 0x2ab0a0); wr32(c, (RW(17) + 16), RW(3)); JP_F_0010F460(c);
wr32(c, (RW(17) + 48), RW(2));
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002AB0C0(Ctx *c) { /* func_002AB0C0 */
ENTER(0x2ab0c0);
 { JP_F_0010F580(c); return; }
}

void JP_F_002AB0D0(Ctx *c) { /* func_002AB0D0 */
ENTER(0x2ab0d0);
SET64(5, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 48))); { JP_F_0010F480(c); return; }
}

static void JP_B_002AB0E0(Ctx *c, u32 entry) { /* func_002AB0E0 */
ENTER(entry);
switch (entry) { case 0x2ab0f0: goto L_002AB0F0; }
SET64(25, (s32)rd32(c, (RW(4) + 52)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25);  switch (t) { case 0x2ab0f0: goto L_002AB0F0; default: rt_jump(c, t); return; } }
L_002AB0F0:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AB13C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5440);
SET64(31, 0x2ab120); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AB140; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ab13c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002AB13C:;
SET64(2, RD(17) + RD(0));
L_002AB140:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002AB0E0(Ctx *c) { JP_B_002AB0E0(c, 0x2ab0e0); }
void JP_F_002AB0F0(Ctx *c) { JP_B_002AB0E0(c, 0x2ab0f0); }

void JP_F_002AB160(Ctx *c) { /* func_002AB160 */
ENTER(0x2ab160);
SET32(29, RW(29) + -96);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 80)));
{ int t = RD(3) != RD(2); SET64(17, RD(5) + RD(0)); if (t) goto L_002AB194; }
SET64(2, RD(0) + RD(0)); goto L_002AB2D4;
L_002AB194:;
SET64(31, 0x2ab19c); SET32(4, RW(0) + 64); JP_F_00100670(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET32(4, RW(0) + 20); if (t) goto L_002AB218; }
SET64(8, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s64)(s32)0x4e0000);
SET64(7, (s32)rd32(c, (RW(17) + 4)));
SET32(4, RW(4) + 5456);
SET64(6, (s32)rd32(c, (RW(17) + 8)));
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET64(3, (s32)rd32(c, (RW(17) + 16)));
SET64(2, (s32)rd32(c, (RW(17) + 20)));
wr32(c, (RW(16) + 0), RW(8));
wr32(c, (RW(16) + 4), RW(7));
wr32(c, (RW(16) + 8), RW(6));
wr32(c, (RW(16) + 12), RW(5));
wr32(c, (RW(16) + 48), RW(4));
wr32(c, (RW(16) + 16), RW(3));
wr32(c, (RW(16) + 20), RW(2));
SET64(7, (s32)rd32(c, (RW(17) + 24)));
SET64(6, (s32)rd32(c, (RW(17) + 28)));
SET64(5, (s32)rd32(c, (RW(17) + 32)));
SET64(4, (s32)rd32(c, (RW(17) + 36)));
SET64(3, (s32)rd32(c, (RW(17) + 40)));
SET64(2, (s32)rd32(c, (RW(17) + 44)));
wr32(c, (RW(16) + 24), RW(7));
wr32(c, (RW(16) + 28), RW(6));
wr32(c, (RW(16) + 32), RW(5));
wr32(c, (RW(16) + 36), RW(4));
wr32(c, (RW(16) + 40), RW(3));
wr32(c, (RW(16) + 44), RW(2));
SET32(4, RW(0) + 20);
L_002AB218:;
SET64(31, 0x2ab220);  JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002AB278; }
SET64(17, (s32)rd32(c, (RW(28) + -29932)));
{ int t = RD(17) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_002AB238; }
SET32(17, RW(17) + 272);
L_002AB238:;
SET64(31, 0x2ab240);  JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 16);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + 5440);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(16));
wr32(c, (RW(18) + 0), RW(2));
L_002AB278:;
SET64(2, (s32)rd32(c, (RW(28) + -29932)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2ab288); SET32(4, RW(2) + 112); JP_F_002AD930(c);
SET64(2, (s64)(s32)0x410000);
SET64(3, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(2) + 27392));
SET32(4, RW(28) + -29928);
c->f[1].u = rd32(c, (RW(3) + 27396));
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 27400));
wr32(c, (RW(29) + 80), c->f[2].u);
wr32(c, (RW(29) + 84), c->f[1].u);
SET64(31, 0x2ab2b4); wr32(c, (RW(29) + 88), c->f[0].u); JP_F_002AB650(c);
SET64(2, (s32)rd32(c, (RW(19) + 80)));
SET32(4, RW(28) + -29928);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(29));
SET64(2, (s32)rd32(c, (RW(2) + 80)));
SET64(31, 0x2ab2d0); wr32(c, (RW(19) + 80), RW(2)); JP_F_002AB600(c);
SET32(2, RW(0) + 1);
L_002AB2D4:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002AB2F0(Ctx *c) { /* func_002AB2F0 */
ENTER(0x2ab2f0);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(0) + 1);
SET32(2, RW(2) + 5392);
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 0), RW(2));
SET32(2, RW(0) + 320);
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(2));
SET32(2, RW(0) + 224);
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 28), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 36), RW(3));
SET32(2, RW(2) + 5456);
wr32(c, (RW(4) + 44), RW(3));
wr32(c, (RW(4) + 64), RW(2));
SET32(2, RW(0) + 2);
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 40), RW(2));
SET32(2, RW(0) + 49);
wr32(c, (RW(4) + 56), RW(0));
wr32(c, (RW(4) + 52), RW(2));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 60), RW(0));
wr32(c, (RW(4) + 80), RW(0)); return;
}

void JP_F_002AB360(Ctx *c) { /* func_002AB360 */
ENTER(0x2ab360);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 8)));
SET64(17, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ab390); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(18, RD(2) & 0xff);
SET32(4, RW(28) + -29928);
SET64(2, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(2) + 27392));
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 27396));
wr32(c, (RW(29) + 64), c->f[2].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 27400));
wr32(c, (RW(29) + 68), c->f[1].u);
SET64(31, 0x2ab3c0); wr32(c, (RW(29) + 72), c->f[0].u); JP_F_002AB650(c);
SET64(2, (s32)rd32(c, (RW(16) + 80)));
SET32(4, RW(28) + -29928);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(29));
SET64(2, (s32)rd32(c, (RW(2) + 64)));
SET64(31, 0x2ab3dc); wr32(c, (RW(16) + 80), RW(2)); JP_F_002AB600(c);
{ int t = RD(17) == RD(0); SET64(2, RD(18) + RD(0)); if (t) goto L_002AB3FC; }
SET64(25, (s32)rd32(c, (RW(17) + 48)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ab3f8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, RD(18) + RD(0));
L_002AB3FC:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002AB420(Ctx *c) { /* func_002AB420 */
ENTER(0x2ab420);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002AB45C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5456);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 48), RW(3)); if (t) goto L_002AB458; }
SET64(31, 0x2ab458);  JP_F_001004B0(c);
L_002AB458:;
SET64(2, RD(16) + RD(0));
L_002AB45C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AB470(Ctx *c) { /* func_002AB470 */
ENTER(0x2ab470);
wr32(c, (RW(4) + 16), RW(6));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 32), RW(10));
SET32(2, RW(2) + 5456);
wr32(c, (RW(4) + 36), RW(11));
SET64(11, (s32)rd32(c, (RW(5) + 0)));
SET64(10, (s32)rd32(c, (RW(5) + 4)));
SET64(6, (s32)rd32(c, (RW(5) + 8)));
SET64(3, (s32)rd32(c, (RW(5) + 12)));
wr32(c, (RW(4) + 48), RW(2));
SET32(2, RW(0) + 3);
wr32(c, (RW(4) + 20), RW(7));
wr32(c, (RW(4) + 24), RW(8));
wr32(c, (RW(4) + 28), RW(9));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(0));
wr32(c, (RW(4) + 0), RW(11));
wr32(c, (RW(4) + 4), RW(10));
wr32(c, (RW(4) + 8), RW(6));
{ int t = RD(8) == RD(2); wr32(c, (RW(4) + 12), RW(3)); if (t) goto L_002AB510; }
SET32(2, RW(0) + 2);
{ int t = RD(8) == RD(2);  if (t) goto L_002AB4D8; }
SET64(2, RD(4) + RD(0)); goto L_002AB548;
L_002AB4D8:;
{ int t = RD(9) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_002AB544; }
{ int t = RD(7) != RD(2); SET64(1, RSD(3) < (s64)448); if (t) goto L_002AB544; }
{ int t = RD(1) == RD(0); SET32(2, RW(0) + 448); if (t) goto L_002AB544; }
SET32(3, RW(2) - RW(3));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002AB504; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002AB504:;
SET32(2, RW(2) + 2);
wr32(c, (RW(4) + 44), RW(2)); goto L_002AB544;
L_002AB510:;
{ int t = RD(9) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_002AB544; }
{ int t = RD(7) != RD(2); SET64(1, RSD(3) < (s64)512); if (t) goto L_002AB544; }
{ int t = RD(1) == RD(0); SET32(2, RW(0) + 512); if (t) goto L_002AB544; }
SET32(3, RW(2) - RW(3));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002AB53C; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002AB53C:;
SET32(2, RW(2) + 2);
wr32(c, (RW(4) + 44), RW(2));
L_002AB544:;
SET64(2, RD(4) + RD(0));
L_002AB548:;
 return;
}

void JP_F_002AB550(Ctx *c) { /* func_002AB550 */
ENTER(0x2ab550);
SET64(4, (s32)rd32(c, (RW(28) + -29928)));
SET32(3, RW(0) + 1);
{ int t = RD(4) == RD(3); SET32(5, RW(28) + -29928); if (t) goto L_002AB580; }
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(1, RSD(3) < (s64)2);
{ int t = RD(1) != RD(0);  if (t) goto L_002AB590; }
SET32(3, RW(3) + -1);
wr32(c, (RW(5) + 0), RW(3));
L_002AB578:;
 goto L_002AB590;
L_002AB580:;
wr32(c, (RW(5) + 0), RW(0));
rt_ei(c); { POLL(); goto L_002AB578; }
L_002AB590:;
 return;
}

void JP_F_002AB5A0(Ctx *c) { /* func_002AB5A0 */
ENTER(0x2ab5a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(28) + -29928)));
SET32(3, RW(4) + 1);
{ int t = RD(4) == RD(0); wr32(c, (RW(28) + -29928), RW(3)); if (t) goto L_002AB5C0; }
L_002AB5B8:;
SET64(31, rd64(c, (RW(29) + 0))); goto L_002AB5D0;
L_002AB5C0:;
SET64(31, 0x2ab5c8);  JP_F_001186A0(c);
 { POLL(); goto L_002AB5B8; }
L_002AB5D0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002AB5E0(Ctx *c) { /* func_002AB5E0 */
ENTER(0x2ab5e0);
wr8(c, (RW(4) + 4), (u8)RW(0));
rt_ei(c); return;
}

void JP_F_002AB5F0(Ctx *c) { /* func_002AB5F0 */
ENTER(0x2ab5f0);
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 4), (u8)RW(3)); return;
}

void JP_F_002AB600(Ctx *c) { /* func_002AB600 */
ENTER(0x2ab600);
SET64(5, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3);  if (t) goto L_002AB630; }
SET64(1, RSD(5) < (s64)2);
{ int t = RD(1) != RD(0);  if (t) goto L_002AB640; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + -1);
wr32(c, (RW(4) + 0), RW(3));
L_002AB628:;
 goto L_002AB640;
L_002AB630:;
wr32(c, (RW(4) + 0), RW(0));
rt_ei(c); { POLL(); goto L_002AB628; }
L_002AB640:;
 return;
}

void JP_F_002AB650(Ctx *c) { /* func_002AB650 */
ENTER(0x2ab650);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(5) + 1);
{ int t = RD(5) == RD(0); wr32(c, (RW(4) + 0), RW(3)); if (t) goto L_002AB670; }
L_002AB668:;
SET64(31, rd64(c, (RW(29) + 0))); goto L_002AB680;
L_002AB670:;
SET64(31, 0x2ab678);  JP_F_001186A0(c);
 { POLL(); goto L_002AB668; }
L_002AB680:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002AB690(Ctx *c) { /* func_002AB690 */
ENTER(0x2ab690);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2ab6b0); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(4, (s32)rd32(c, (RW(17) + 260)));
SET64(31, 0x2ab6bc); SET64(5, RD(16) + RD(0)); JP_F_002ADE40(c);
SET64(2, (s32)rd32(c, (RW(17) + 260)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) != RD(0); SET32(4, RW(28) + -29928); if (t) goto L_002AB6EC; }
SET64(5, (s32)rd32(c, (RW(17) + 256)));
SET64(31, 0x2ab6d8); SET32(4, RW(0) + 1); JP_F_0010F360(c);
{ int t = RD(2) != RD(0); SET32(4, RW(0) + 1); if (t) goto L_002AB6E8; }
SET64(31, 0x2ab6e8);  JP_F_00110140(c);
L_002AB6E8:;
SET32(4, RW(28) + -29928);
L_002AB6EC:;
SET64(31, 0x2ab6f4);  JP_F_002AB600(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AB710(Ctx *c) { /* func_002AB710 */
ENTER(0x2ab710);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2ab738); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(2, (s32)rd32(c, (RW(17) + 260)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x2b0000); if (t) goto L_002AB778; }
L_002AB748:;
{ int t = RSD(18) >= 0;  if (t) goto L_002AB758; }
SET64(2, (s32)rd32(c, (RW(17) + 260)));
SET64(18, (s32)rd32(c, (RW(2) + 16)));
L_002AB758:;
SET64(4, (s32)rd32(c, (RW(17) + 260)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2ab768); SET64(6, RD(18) + RD(0)); JP_F_002ADFE0(c);
SET64(31, 0x2ab770); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(31, rd64(c, (RW(29) + 48))); goto L_002AB79C;
L_002AB778:;
SET32(4, RW(0) + 1);
SET32(5, RW(5) + -18272);
SET64(31, 0x2ab788); SET32(6, RW(0) + -1); JP_F_0010F340(c);
wr32(c, (RW(17) + 256), RW(2));
SET64(31, 0x2ab794); SET32(4, RW(0) + 1); JP_F_001101A8(c);
 { POLL(); goto L_002AB748; }
L_002AB79C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002AB7B0(Ctx *c) { /* func_002AB7B0 */
ENTER(0x2ab7b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 260)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(0) < RSD(3));
{ int t = RD(3) != RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002AB7E4; }
L_002AB7DC:;
 goto L_002AB880;
L_002AB7E4:;
SET64(4, (s32)rd32(c, (RW(17) + 260)));
SET64(31, 0x2ab7f0); SET64(5, RD(16) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(18, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ab804); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0); SET32(4, RW(28) + -29928); if (t) goto L_002AB830; }
L_002AB810:;
SET64(3, (s32)rd32(c, (RW(17) + 260)));
SET32(16, RW(16) + 1);
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002AB7E4; } }
 { POLL(); goto L_002AB7DC; }
L_002AB830:;
SET64(31, 0x2ab838);  JP_F_002AB650(c);
SET64(4, (s32)rd32(c, (RW(17) + 260)));
SET64(31, 0x2ab844); SET64(5, RD(18) + RD(0)); JP_F_002ADE40(c);
SET64(2, (s32)rd32(c, (RW(17) + 260)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) != RD(0);  if (t) goto L_002AB870; }
SET64(5, (s32)rd32(c, (RW(17) + 256)));
SET64(31, 0x2ab860); SET32(4, RW(0) + 1); JP_F_0010F360(c);
{ int t = RD(2) != RD(0); SET32(4, RW(0) + 1); if (t) goto L_002AB870; }
SET64(31, 0x2ab870);  JP_F_00110140(c);
L_002AB870:;
SET64(31, 0x2ab878); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET32(16, RW(16) + -1); { POLL(); goto L_002AB810; }
L_002AB880:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002AB8A0(Ctx *c) { /* func_002AB8A0 */
ENTER(0x2ab8a0);
SET32(29, RW(29) + -48);
SET32(4, RW(28) + -29928);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x2ab8b8); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002AB5F0(c);
SET64(31, 0x2ab8c0); SET32(4, RW(0) + 20); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002AB918; }
SET64(16, (s32)rd32(c, (RW(28) + -29920)));
{ int t = RD(16) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002AB8D8; }
SET32(16, RW(16) + 156);
L_002AB8D8:;
SET64(31, 0x2ab8e0);  JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(17) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(17) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(4));
SET32(2, RW(2) + 5616);
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(3));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(2));
L_002AB918:;
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x2ab924); SET64(5, RD(17) + RD(0)); JP_F_002AD930(c);
SET64(31, 0x2ab92c); SET32(4, RW(28) + -29928); JP_F_002AB5E0(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AB950(Ctx *c) { /* func_002AB950 */
ENTER(0x2ab950);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2ab970); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(4, (s32)rd32(c, (RW(17) + 228)));
SET64(31, 0x2ab97c); SET64(5, RD(16) + RD(0)); JP_F_002ADE40(c);
SET64(2, (s32)rd32(c, (RW(17) + 228)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) != RD(0); SET32(4, RW(28) + -29928); if (t) goto L_002AB9AC; }
SET64(5, (s32)rd32(c, (RW(17) + 224)));
SET64(31, 0x2ab998); SET64(4, RD(0) + RD(0)); JP_F_0010F360(c);
{ int t = RD(2) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002AB9A8; }
SET64(31, 0x2ab9a8);  JP_F_00110140(c);
L_002AB9A8:;
SET32(4, RW(28) + -29928);
L_002AB9AC:;
SET64(31, 0x2ab9b4);  JP_F_002AB600(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AB9D0(Ctx *c) { /* func_002AB9D0 */
ENTER(0x2ab9d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x2ab9f8); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(2, (s32)rd32(c, (RW(18) + 228)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x2b0000); if (t) goto L_002ABA38; }
L_002ABA08:;
{ int t = RSD(16) >= 0;  if (t) goto L_002ABA18; }
SET64(2, (s32)rd32(c, (RW(18) + 228)));
SET64(16, (s32)rd32(c, (RW(2) + 16)));
L_002ABA18:;
SET64(4, (s32)rd32(c, (RW(18) + 228)));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2aba28); SET64(6, RD(16) + RD(0)); JP_F_002ADFE0(c);
SET64(31, 0x2aba30); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(31, rd64(c, (RW(29) + 48))); goto L_002ABA80;
L_002ABA38:;
SET64(4, RD(0) + RD(0));
SET32(5, RW(5) + -17520);
SET64(31, 0x2aba48); SET32(6, RW(0) + -1); JP_F_0010F340(c);
wr32(c, (RW(18) + 224), RW(2));
SET64(31, 0x2aba54); SET64(4, RD(0) + RD(0)); JP_F_001101A8(c);
SET64(31, 0x2aba5c);  JP_F_00105C90(c);
SET64(3, RD(2) << 32);
SET64(3, RSD(3) >> 32);
SET32(2, RW(0) + -769);
SET64(2, RD(3) & RD(2));
SET64(4, RD(2) << 32);
SET64(31, 0x2aba78); SET64(4, RSD(4) >> 32); JP_F_00105BC8(c);
 { POLL(); goto L_002ABA08; }
L_002ABA80:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002ABAA0(Ctx *c) { /* func_002ABAA0 */
ENTER(0x2abaa0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 228)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(0) < RSD(3));
{ int t = RD(3) != RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002ABAD4; }
L_002ABACC:;
 goto L_002ABB70;
L_002ABAD4:;
SET64(4, (s32)rd32(c, (RW(17) + 228)));
SET64(31, 0x2abae0); SET64(5, RD(16) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(18, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2abaf4); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0); SET32(4, RW(28) + -29928); if (t) goto L_002ABB20; }
L_002ABB00:;
SET64(3, (s32)rd32(c, (RW(17) + 228)));
SET32(16, RW(16) + 1);
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002ABAD4; } }
 { POLL(); goto L_002ABACC; }
L_002ABB20:;
SET64(31, 0x2abb28);  JP_F_002AB650(c);
SET64(4, (s32)rd32(c, (RW(17) + 228)));
SET64(31, 0x2abb34); SET64(5, RD(18) + RD(0)); JP_F_002ADE40(c);
SET64(2, (s32)rd32(c, (RW(17) + 228)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) != RD(0);  if (t) goto L_002ABB60; }
SET64(5, (s32)rd32(c, (RW(17) + 224)));
SET64(31, 0x2abb50); SET64(4, RD(0) + RD(0)); JP_F_0010F360(c);
{ int t = RD(2) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002ABB60; }
SET64(31, 0x2abb60);  JP_F_00110140(c);
L_002ABB60:;
SET64(31, 0x2abb68); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET32(16, RW(16) + -1); { POLL(); goto L_002ABB00; }
L_002ABB70:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002ABB90(Ctx *c) { /* func_002ABB90 */
ENTER(0x2abb90);
SET32(29, RW(29) + -48);
SET32(4, RW(28) + -29928);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x2abba8); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002AB5F0(c);
SET64(31, 0x2abbb0); SET32(4, RW(0) + 20); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002ABC08; }
SET64(16, (s32)rd32(c, (RW(28) + -29920)));
{ int t = RD(16) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002ABBC8; }
SET32(16, RW(16) + 152);
L_002ABBC8:;
SET64(31, 0x2abbd0);  JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(17) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(17) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(4));
SET32(2, RW(2) + 5632);
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(3));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(2));
L_002ABC08:;
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x2abc14); SET64(5, RD(17) + RD(0)); JP_F_002AD930(c);
SET32(3, RW(0) + 3);
SET64(2, (s64)(s32)0x12000000);
wr64(c, (RW(2) + 4096), RD(3));
SET64(31, 0x2abc28); SET32(4, RW(28) + -29928); JP_F_002AB5E0(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ABC40(Ctx *c) { /* func_002ABC40 */
ENTER(0x2abc40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2abc60); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(4, (s32)rd32(c, (RW(17) + 196)));
SET64(31, 0x2abc6c); SET64(5, RD(16) + RD(0)); JP_F_002ADE40(c);
SET64(2, (s32)rd32(c, (RW(17) + 196)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) != RD(0); SET32(4, RW(28) + -29928); if (t) goto L_002ABC9C; }
SET64(5, (s32)rd32(c, (RW(17) + 192)));
SET64(31, 0x2abc88); SET32(4, RW(0) + 3); JP_F_0010F360(c);
{ int t = RD(2) != RD(0); SET32(4, RW(0) + 3); if (t) goto L_002ABC98; }
SET64(31, 0x2abc98);  JP_F_00110140(c);
L_002ABC98:;
SET32(4, RW(28) + -29928);
L_002ABC9C:;
SET64(31, 0x2abca4);  JP_F_002AB600(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ABCC0(Ctx *c) { /* func_002ABCC0 */
ENTER(0x2abcc0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2abce8); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(2, (s32)rd32(c, (RW(17) + 196)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x2b0000); if (t) goto L_002ABD28; }
L_002ABCF8:;
{ int t = RSD(18) >= 0;  if (t) goto L_002ABD08; }
SET64(2, (s32)rd32(c, (RW(17) + 196)));
SET64(18, (s32)rd32(c, (RW(2) + 16)));
L_002ABD08:;
SET64(4, (s32)rd32(c, (RW(17) + 196)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2abd18); SET64(6, RD(18) + RD(0)); JP_F_002ADFE0(c);
SET64(31, 0x2abd20); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(31, rd64(c, (RW(29) + 48))); goto L_002ABD4C;
L_002ABD28:;
SET32(4, RW(0) + 3);
SET32(5, RW(5) + -16816);
SET64(31, 0x2abd38); SET32(6, RW(0) + -1); JP_F_0010F340(c);
wr32(c, (RW(17) + 192), RW(2));
SET64(31, 0x2abd44); SET32(4, RW(0) + 3); JP_F_001101A8(c);
 { POLL(); goto L_002ABCF8; }
L_002ABD4C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002ABD60(Ctx *c) { /* func_002ABD60 */
ENTER(0x2abd60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 196)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(0) < RSD(3));
{ int t = RD(3) != RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002ABD94; }
L_002ABD8C:;
 goto L_002ABE30;
L_002ABD94:;
SET64(4, (s32)rd32(c, (RW(17) + 196)));
SET64(31, 0x2abda0); SET64(5, RD(16) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(18, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2abdb4); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0); SET32(4, RW(28) + -29928); if (t) goto L_002ABDE0; }
L_002ABDC0:;
SET64(3, (s32)rd32(c, (RW(17) + 196)));
SET32(16, RW(16) + 1);
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002ABD94; } }
 { POLL(); goto L_002ABD8C; }
L_002ABDE0:;
SET64(31, 0x2abde8);  JP_F_002AB650(c);
SET64(4, (s32)rd32(c, (RW(17) + 196)));
SET64(31, 0x2abdf4); SET64(5, RD(18) + RD(0)); JP_F_002ADE40(c);
SET64(2, (s32)rd32(c, (RW(17) + 196)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) != RD(0);  if (t) goto L_002ABE20; }
SET64(5, (s32)rd32(c, (RW(17) + 192)));
SET64(31, 0x2abe10); SET32(4, RW(0) + 3); JP_F_0010F360(c);
{ int t = RD(2) != RD(0); SET32(4, RW(0) + 3); if (t) goto L_002ABE20; }
SET64(31, 0x2abe20);  JP_F_00110140(c);
L_002ABE20:;
SET64(31, 0x2abe28); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET32(16, RW(16) + -1); { POLL(); goto L_002ABDC0; }
L_002ABE30:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002ABE50(Ctx *c) { /* func_002ABE50 */
ENTER(0x2abe50);
SET32(29, RW(29) + -48);
SET32(4, RW(28) + -29928);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x2abe68); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002AB5F0(c);
SET64(31, 0x2abe70); SET32(4, RW(0) + 20); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002ABEC8; }
SET64(16, (s32)rd32(c, (RW(28) + -29920)));
{ int t = RD(16) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002ABE88; }
SET32(16, RW(16) + 148);
L_002ABE88:;
SET64(31, 0x2abe90);  JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(17) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(17) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(4));
SET32(2, RW(2) + 5648);
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(3));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(2));
L_002ABEC8:;
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x2abed4); SET64(5, RD(17) + RD(0)); JP_F_002AD930(c);
SET64(31, 0x2abedc); SET32(4, RW(28) + -29928); JP_F_002AB5E0(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ABF00(Ctx *c) { /* func_002ABF00 */
ENTER(0x2abf00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2abf20); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(4, (s32)rd32(c, (RW(17) + 164)));
SET64(31, 0x2abf2c); SET64(5, RD(16) + RD(0)); JP_F_002ADE40(c);
SET64(2, (s32)rd32(c, (RW(17) + 164)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) != RD(0); SET32(4, RW(28) + -29928); if (t) goto L_002ABF5C; }
SET64(5, (s32)rd32(c, (RW(17) + 160)));
SET64(31, 0x2abf48); SET32(4, RW(0) + 2); JP_F_0010F360(c);
{ int t = RD(2) != RD(0); SET32(4, RW(0) + 2); if (t) goto L_002ABF58; }
SET64(31, 0x2abf58);  JP_F_00110140(c);
L_002ABF58:;
SET32(4, RW(28) + -29928);
L_002ABF5C:;
SET64(31, 0x2abf64);  JP_F_002AB600(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ABF80(Ctx *c) { /* func_002ABF80 */
ENTER(0x2abf80);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2abfa8); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(2, (s32)rd32(c, (RW(17) + 164)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x2b0000); if (t) goto L_002ABFE8; }
L_002ABFB8:;
{ int t = RSD(18) >= 0;  if (t) goto L_002ABFC8; }
SET64(2, (s32)rd32(c, (RW(17) + 164)));
SET64(18, (s32)rd32(c, (RW(2) + 16)));
L_002ABFC8:;
SET64(4, (s32)rd32(c, (RW(17) + 164)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2abfd8); SET64(6, RD(18) + RD(0)); JP_F_002ADFE0(c);
SET64(31, 0x2abfe0); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(31, rd64(c, (RW(29) + 48))); goto L_002AC00C;
L_002ABFE8:;
SET32(4, RW(0) + 2);
SET32(5, RW(5) + -16112);
SET64(31, 0x2abff8); SET32(6, RW(0) + -1); JP_F_0010F340(c);
wr32(c, (RW(17) + 160), RW(2));
SET64(31, 0x2ac004); SET32(4, RW(0) + 2); JP_F_001101A8(c);
 { POLL(); goto L_002ABFB8; }
L_002AC00C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002AC020(Ctx *c) { /* func_002AC020 */
ENTER(0x2ac020);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 164)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(0) < RSD(3));
{ int t = RD(3) != RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002AC054; }
L_002AC04C:;
 goto L_002AC0F0;
L_002AC054:;
SET64(4, (s32)rd32(c, (RW(17) + 164)));
SET64(31, 0x2ac060); SET64(5, RD(16) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(18, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ac074); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0); SET32(4, RW(28) + -29928); if (t) goto L_002AC0A0; }
L_002AC080:;
SET64(3, (s32)rd32(c, (RW(17) + 164)));
SET32(16, RW(16) + 1);
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002AC054; } }
 { POLL(); goto L_002AC04C; }
L_002AC0A0:;
SET64(31, 0x2ac0a8);  JP_F_002AB650(c);
SET64(4, (s32)rd32(c, (RW(17) + 164)));
SET64(31, 0x2ac0b4); SET64(5, RD(18) + RD(0)); JP_F_002ADE40(c);
SET64(2, (s32)rd32(c, (RW(17) + 164)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) != RD(0);  if (t) goto L_002AC0E0; }
SET64(5, (s32)rd32(c, (RW(17) + 160)));
SET64(31, 0x2ac0d0); SET32(4, RW(0) + 2); JP_F_0010F360(c);
{ int t = RD(2) != RD(0); SET32(4, RW(0) + 2); if (t) goto L_002AC0E0; }
SET64(31, 0x2ac0e0);  JP_F_00110140(c);
L_002AC0E0:;
SET64(31, 0x2ac0e8); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET32(16, RW(16) + -1); { POLL(); goto L_002AC080; }
L_002AC0F0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002AC110(Ctx *c) { /* func_002AC110 */
ENTER(0x2ac110);
SET32(29, RW(29) + -48);
SET32(4, RW(28) + -29928);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x2ac128); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002AB5F0(c);
SET64(31, 0x2ac130); SET32(4, RW(0) + 20); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002AC188; }
SET64(16, (s32)rd32(c, (RW(28) + -29920)));
{ int t = RD(16) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002AC148; }
SET32(16, RW(16) + 144);
L_002AC148:;
SET64(31, 0x2ac150);  JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(17) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(17) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(4));
SET32(2, RW(2) + 5664);
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(3));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(2));
L_002AC188:;
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x2ac194); SET64(5, RD(17) + RD(0)); JP_F_002AD930(c);
SET64(31, 0x2ac19c); SET32(4, RW(28) + -29928); JP_F_002AB5E0(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AC1C0(Ctx *c) { /* func_002AC1C0 */
ENTER(0x2ac1c0);
SET64(2, RD(4) + RD(0)); return;
}

static void JP_B_002AC1D0(Ctx *c, u32 entry) { /* func_002AC1D0 */
ENTER(entry);
switch (entry) { case 0x2ac230: goto L_002AC230; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
L_002AC1E4:;
SET64(4, RD(17) + RD(0));
L_002AC1E8:;
SET64(31, 0x2ac1f0); SET32(5, RW(0) + 16); JP_F_002AD840(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(16, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ac204); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) < RD(16));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_002AC1E8; } }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ac228); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002AC1E4; }
L_002AC230:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AC2FC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5472);
SET32(2, RW(2) + 5488);
wr32(c, (RW(17) + 0), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 84), RW(2));
SET32(3, RW(3) + 5504);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5528);
wr32(c, (RW(17) + 88), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 144), RW(2));
SET32(3, RW(3) + 5544);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5560);
wr32(c, (RW(17) + 148), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 152), RW(2));
SET32(3, RW(3) + 5576);
SET32(2, RW(17) + 260);
{ int t = RD(2) != RD(0); wr32(c, (RW(17) + 156), RW(3)); if (t) goto L_002AC308; }
SET32(2, RW(17) + 228);
L_002AC2AC:;
{ int t = RD(2) != RD(0); SET32(4, RW(17) + 232); if (t) goto L_002AC31C; }
SET32(2, RW(17) + 196);
L_002AC2B8:;
{ int t = RD(2) != RD(0); SET32(4, RW(17) + 200); if (t) goto L_002AC32C; }
SET32(2, RW(17) + 164);
L_002AC2C4:;
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002AC2DC; }
SET32(4, RW(17) + 168);
SET64(31, 0x2ac2d8); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET64(4, RD(17) + RD(0));
L_002AC2DC:;
SET64(31, 0x2ac2e4); SET64(5, RD(0) + RD(0)); JP_F_002ADB40(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AC300; }
SET64(31, 0x2ac2fc); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AC2FC:;
SET64(2, RD(17) + RD(0));
L_002AC300:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002AC33C;
L_002AC308:;
SET32(4, RW(17) + 264);
SET64(31, 0x2ac314); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET32(2, RW(17) + 228); { POLL(); goto L_002AC2AC; }
L_002AC31C:;
SET64(31, 0x2ac324); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET32(2, RW(17) + 196); { POLL(); goto L_002AC2B8; }
L_002AC32C:;
SET64(31, 0x2ac334); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET32(2, RW(17) + 164); { POLL(); goto L_002AC2C4; }
L_002AC33C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002AC1D0(Ctx *c) { JP_B_002AC1D0(c, 0x2ac1d0); }
void JP_F_002AC230(Ctx *c) { JP_B_002AC1D0(c, 0x2ac230); }

void JP_F_002AC350(Ctx *c) { /* func_002AC350 */
ENTER(0x2ac350);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 80);
wr64(c, (RW(29) + 16), RD(31));
SET32(7, RW(0) + 4096);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ac36c); SET64(16, RD(4) + RD(0)); JP_F_002ADBE0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5472);
SET32(2, RW(2) + 5488);
wr32(c, (RW(16) + 0), RW(3));
SET32(5, RW(0) + 8);
wr32(c, (RW(16) + 84), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5504);
SET32(2, RW(2) + 5528);
wr32(c, (RW(16) + 88), RW(3));
wr32(c, (RW(16) + 144), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5544);
SET32(2, RW(2) + 5560);
wr32(c, (RW(16) + 148), RW(3));
wr32(c, (RW(16) + 152), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(16) + 164);
SET32(3, RW(3) + 5576);
SET32(4, RW(2) + 4);
wr32(c, (RW(16) + 156), RW(3));
wr32(c, (RW(16) + 164), RW(4));
SET64(31, 0x2ac3d8); SET64(6, RD(0) + RD(0)); JP_F_002AE1F0(c);
SET32(2, RW(16) + 196);
SET32(5, RW(0) + 8);
SET32(4, RW(2) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2ac3f0); wr32(c, (RW(16) + 196), RW(4)); JP_F_002AE1F0(c);
SET32(2, RW(16) + 228);
SET32(5, RW(0) + 4);
SET32(4, RW(2) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2ac408); wr32(c, (RW(16) + 228), RW(4)); JP_F_002AE1F0(c);
SET32(2, RW(16) + 260);
SET32(5, RW(0) + 4);
SET32(4, RW(2) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2ac420); wr32(c, (RW(16) + 260), RW(4)); JP_F_002AE1F0(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AC440(Ctx *c) { /* func_002AC440 */
ENTER(0x2ac440);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(28) + -29920)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002AC460; }
L_002AC458:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002AC494;
L_002AC460:;
SET64(31, 0x2ac468); SET32(4, RW(0) + 288); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002AC480; }
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ac47c); SET64(5, RD(16) + RD(0)); JP_F_002AC350(c);
SET64(4, RD(16) + RD(0));
L_002AC480:;
wr32(c, (RW(28) + -29920), RW(2));
SET64(31, 0x2ac48c); SET64(5, RD(2) + RD(0)); JP_F_002AD9C0(c);
 { POLL(); goto L_002AC458; }
L_002AC494:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AC4A0(Ctx *c) { /* func_002AC4A0 */
ENTER(0x2ac4a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ac4bc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002AC4D0(Ctx *c) { /* func_002AC4D0 */
ENTER(0x2ac4d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ac4ec);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002AC500(Ctx *c) { /* func_002AC500 */
ENTER(0x2ac500);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ac51c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002AC530(Ctx *c) { /* func_002AC530 */
ENTER(0x2ac530);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ac54c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002AC560(Ctx *c) { /* func_002AC560 */
ENTER(0x2ac560);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AC5AC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5616);
SET64(31, 0x2ac590); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AC5B0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ac5ac); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002AC5AC:;
SET64(2, RD(17) + RD(0));
L_002AC5B0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AC5D0(Ctx *c) { /* func_002AC5D0 */
ENTER(0x2ac5d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AC61C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5632);
SET64(31, 0x2ac600); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AC620; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ac61c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002AC61C:;
SET64(2, RD(17) + RD(0));
L_002AC620:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AC640(Ctx *c) { /* func_002AC640 */
ENTER(0x2ac640);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AC68C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5648);
SET64(31, 0x2ac670); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AC690; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ac68c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002AC68C:;
SET64(2, RD(17) + RD(0));
L_002AC690:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AC6B0(Ctx *c) { /* func_002AC6B0 */
ENTER(0x2ac6b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AC6FC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5664);
SET64(31, 0x2ac6e0); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AC700; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ac6fc); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002AC6FC:;
SET64(2, RD(17) + RD(0));
L_002AC700:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AC720(Ctx *c) { /* func_002AC720 */
ENTER(0x2ac720);
SET32(4, RW(4) + -32); { JP_F_002AC230(c); return; }
}

void JP_F_002AC730(Ctx *c) { /* func_002AC730 */
ENTER(0x2ac730);
SET32(4, RW(4) + -88); { JP_F_002AC1C0(c); return; }
}

void JP_F_002AC740(Ctx *c) { /* func_002AC740 */
ENTER(0x2ac740);
SET32(4, RW(4) + -144); { JP_F_002AC1C0(c); return; }
}

void JP_F_002AC750(Ctx *c) { /* func_002AC750 */
ENTER(0x2ac750);
SET32(4, RW(4) + -144); { JP_F_002AC020(c); return; }
}

void JP_F_002AC760(Ctx *c) { /* func_002AC760 */
ENTER(0x2ac760);
SET32(4, RW(4) + -148); { JP_F_002AC1C0(c); return; }
}

void JP_F_002AC770(Ctx *c) { /* func_002AC770 */
ENTER(0x2ac770);
SET32(4, RW(4) + -148); { JP_F_002ABD60(c); return; }
}

void JP_F_002AC780(Ctx *c) { /* func_002AC780 */
ENTER(0x2ac780);
SET32(4, RW(4) + -152); { JP_F_002AC1C0(c); return; }
}

void JP_F_002AC790(Ctx *c) { /* func_002AC790 */
ENTER(0x2ac790);
SET32(4, RW(4) + -152); { JP_F_002ABAA0(c); return; }
}

void JP_F_002AC7A0(Ctx *c) { /* func_002AC7A0 */
ENTER(0x2ac7a0);
SET32(4, RW(4) + -156); { JP_F_002AC1C0(c); return; }
}

void JP_F_002AC7B0(Ctx *c) { /* func_002AC7B0 */
ENTER(0x2ac7b0);
SET32(4, RW(4) + -156); { JP_F_002AB7B0(c); return; }
}

void JP_F_002AC7C0(Ctx *c) { /* func_002AC7C0 */
ENTER(0x2ac7c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2ac7e0); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(3, (s32)rd32(c, (RW(16) + 12)));
L_002AC7E4:;
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(2, RD(0) < RD(4));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002AC810; }
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(2, RD(2) < RD(3));
{ int t = RD(2) != RD(0);  if (t) goto L_002AC810; }
SET64(17, RD(4) + RD(0)); { POLL(); goto L_002AC7E4; }
L_002AC810:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ac81c); SET64(5, RD(16) + RD(0)); JP_F_002AE690(c);
SET64(31, 0x2ac824); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AC840(Ctx *c) { /* func_002AC840 */
ENTER(0x2ac840);
SET32(2, RW(0) + 1); return;
}

void JP_F_002AC850(Ctx *c) { /* func_002AC850 */
ENTER(0x2ac850);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ac86c); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(16, (s32)rd32(c, (RW(17) + 4)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ac87c); SET64(5, RD(16) + RD(0)); JP_F_002AE7E0(c);
SET64(31, 0x2ac884); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AC8A0(Ctx *c) { /* func_002AC8A0 */
ENTER(0x2ac8a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AC8E8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5680);
SET64(31, 0x2ac8d0); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AC8EC; }
SET64(31, 0x2ac8e8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AC8E8:;
SET64(2, RD(17) + RD(0));
L_002AC8EC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AC900(Ctx *c) { /* func_002AC900 */
ENTER(0x2ac900);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ac914); SET64(16, RD(4) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 4), RW(0));
SET32(2, RW(2) + 5680);
wr32(c, (RW(16) + 0), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AC940(Ctx *c) { /* func_002AC940 */
ENTER(0x2ac940);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ac958); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(4, (s32)rd32(c, (RW(28) + -29916)));
SET64(31, 0x2ac964); SET64(5, RD(16) + RD(0)); JP_F_002ACBF0(c);
SET64(31, 0x2ac96c); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AC980(Ctx *c) { /* func_002AC980 */
ENTER(0x2ac980);
SET32(29, RW(29) + -32);
SET32(4, RW(28) + -29928);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2ac994); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002AB650(c);
SET64(31, 0x2ac99c); SET64(4, (s32)rd32(c, (RW(28) + -29916))); JP_F_002ACEC0(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x2ac9a8); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AC9C0(Ctx *c) { /* func_002AC9C0 */
ENTER(0x2ac9c0);
SET32(29, RW(29) + -32);
SET32(4, RW(0) + 4096);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2ac9d4); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00100670(c);
{ int t = RD(2) != RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002AC9E4; }
L_002AC9DC:;
wr32(c, (RW(28) + -29916), RW(16)); goto L_002ACA64;
L_002AC9E4:;
SET64(31, 0x2ac9ec); SET64(4, RD(16) + RD(0)); JP_F_002AF190(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5936);
SET64(5, (s64)(s32)0x2b0000);
wr32(c, (RW(16) + 0), RW(3));
SET64(6, (s64)(s32)0x2b0000);
SET32(2, RW(2) + 5712);
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 0), RW(2));
SET32(4, RW(16) + 32);
SET32(5, RW(5) + -13504);
SET32(6, RW(6) + -13600);
SET32(7, RW(0) + 32);
SET32(8, RW(0) + 127);
SET64(31, 0x2aca2c); wr32(c, (RW(16) + 8), RW(0)); JP_F_001023D0(c);
SET32(3, RW(0) + 127);
SET32(4, RW(3) + -1);
{ int t = RD(4) == RD(0); SET32(5, RW(16) + 32); if (t) goto L_002ACA58; }
L_002ACA3C:;
SET32(3, RW(5) + 32);
SET32(4, RW(4) + -1);
wr32(c, (RW(5) + 4), RW(3));
SET64(5, RD(3) + RD(0));
{ int t = RD(4) != RD(0);  if (t) { POLL(); goto L_002ACA3C; } }
L_002ACA58:;
SET32(3, RW(16) + 32);
wr32(c, (RW(16) + 12), RW(3)); { POLL(); goto L_002AC9DC; }
L_002ACA64:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002ACA80(Ctx *c) { /* func_002ACA80 */
ENTER(0x2aca80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002ACAC8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5728);
SET64(31, 0x2acab0); wr32(c, (RW(17) + 0), RW(2)); JP_F_002AE8C0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002ACACC; }
SET64(31, 0x2acac8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002ACAC8:;
SET64(2, RD(17) + RD(0));
L_002ACACC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ACAE0(Ctx *c) { /* func_002ACAE0 */
ENTER(0x2acae0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002ACB28; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5696);
SET64(31, 0x2acb10); wr32(c, (RW(17) + 0), RW(2)); JP_F_002AE8C0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002ACB2C; }
SET64(31, 0x2acb28); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002ACB28:;
SET64(2, RD(17) + RD(0));
L_002ACB2C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ACB40(Ctx *c) { /* func_002ACB40 */
ENTER(0x2acb40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2acb54); SET64(16, RD(4) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 4), RW(0));
SET32(2, RW(2) + 5696);
wr32(c, (RW(16) + 0), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002ACB80(Ctx *c) { /* func_002ACB80 */
ENTER(0x2acb80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002ACBCC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5744);
SET64(31, 0x2acbb0); wr32(c, (RW(17) + 0), RW(2)); JP_F_002AE8C0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002ACBD0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2acbcc); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002ACBCC:;
SET64(2, RD(17) + RD(0));
L_002ACBD0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ACBF0(Ctx *c) { /* func_002ACBF0 */
ENTER(0x2acbf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(4) + RD(0));
SET32(3, RW(16) + 32);
SET64(1, RD(17) < RD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002ACD90; }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
SET32(3, RW(16) + 32);
SET64(1, RD(17) < RD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002ACD3C; }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
SET32(3, RW(16) + 32);
SET64(3, RD(17) < RD(3));
{ int t = RD(3) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002ACC98; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(16) + 12), RW(17));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 8), RW(3)); if (t) goto L_002ACDE4; }
SET64(4, (s32)rd32(c, (RW(28) + -29916)));
{ int t = RD(4) == RD(16);  if (t) goto L_002ACDE4; }
SET64(31, 0x2acc70); SET64(5, RD(16) + RD(0)); JP_F_002AE7E0(c);
{ int t = RD(16) == RD(0);  if (t) goto L_002ACDE4; }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2acc8c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002ACC8C:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002ACDE8;
SET64(4, RD(16) + RD(0));
L_002ACC98:;
SET64(31, 0x2acca0);  JP_F_002ACEB0(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(16) + 32);
SET64(2, RD(17) < RD(2));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002ACD20; }
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x2accc0); SET64(4, RD(17) + RD(0)); JP_F_002ACEA0(c);
wr32(c, (RW(16) + 12), RW(17));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 8), RW(3)); if (t) goto L_002ACDE4; }
SET64(31, 0x2accdc);  JP_F_002ACE90(c);
{ int t = RD(2) == RD(16);  if (t) goto L_002ACDE4; }
SET64(31, 0x2accec);  JP_F_002ACE90(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2accf8); SET64(5, RD(16) + RD(0)); JP_F_002AE7E0(c);
{ int t = RD(16) == RD(0);  if (t) goto L_002ACDE4; }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2acd14); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002ACC8C; }
SET64(4, RD(16) + RD(0));
L_002ACD20:;
SET64(31, 0x2acd28);  JP_F_002ACEB0(c);
SET64(5, RD(17) + RD(0));
SET64(31, 0x2acd34); SET64(4, RD(2) + RD(0)); JP_F_002ACBF0(c);
 { POLL(); goto L_002ACC8C; }
L_002ACD3C:;
SET64(3, (s32)rd32(c, (RW(16) + 12)));
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(16) + 12), RW(17));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 8), RW(3)); if (t) goto L_002ACDE4; }
SET64(4, (s32)rd32(c, (RW(28) + -29916)));
{ int t = RD(4) == RD(16);  if (t) goto L_002ACDE4; }
SET64(31, 0x2acd6c); SET64(5, RD(16) + RD(0)); JP_F_002AE7E0(c);
{ int t = RD(16) == RD(0);  if (t) goto L_002ACDE4; }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2acd88); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002ACC8C; }
L_002ACD90:;
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(3) + -1);
wr32(c, (RW(17) + 4), RW(4));
wr32(c, (RW(16) + 12), RW(17));
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 8), RW(3)); if (t) goto L_002ACDE4; }
SET64(4, (s32)rd32(c, (RW(28) + -29916)));
{ int t = RD(4) == RD(16);  if (t) goto L_002ACDE4; }
SET64(31, 0x2acdc0); SET64(5, RD(16) + RD(0)); JP_F_002AE7E0(c);
{ int t = RD(16) == RD(0);  if (t) goto L_002ACDE4; }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2acddc); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002ACC8C; }
L_002ACDE4:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002ACDE8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ACE00(Ctx *c) { /* func_002ACE00 */
ENTER(0x2ace00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002ACE78; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x2b0000);
SET32(2, RW(2) + 5712);
SET32(4, RW(17) + 32);
wr32(c, (RW(17) + 0), RW(2));
SET32(5, RW(5) + -13600);
SET32(6, RW(0) + 32);
SET64(31, 0x2ace40); SET32(7, RW(0) + 127); JP_F_00102360(c);
{ int t = RD(17) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_002ACE64; }
SET64(2, (s64)(s32)0x4e0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + 5728);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2ace60); wr32(c, (RW(17) + 0), RW(2)); JP_F_002AE8C0(c);
SET64(2, RD(16) << 48);
L_002ACE64:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002ACE7C; }
SET64(31, 0x2ace78); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002ACE78:;
SET64(2, RD(17) + RD(0));
L_002ACE7C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ACE90(Ctx *c) { /* func_002ACE90 */
ENTER(0x2ace90);
SET64(2, (s32)rd32(c, (RW(28) + -29916))); return;
}

void JP_F_002ACEA0(Ctx *c) { /* func_002ACEA0 */
ENTER(0x2acea0);
wr32(c, (RW(4) + 4), RW(5));
SET64(2, RD(5) + RD(0)); return;
}

void JP_F_002ACEB0(Ctx *c) { /* func_002ACEB0 */
ENTER(0x2aceb0);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void JP_F_002ACEC0(Ctx *c) { /* func_002ACEC0 */
ENTER(0x2acec0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(2) == RD(0);  if (t) goto L_002ACEF8; }
SET64(3, (s32)rd32(c, (RW(2) + 4)));
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(2) + 4), RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 8), RW(3)); goto L_002AD0E8;
L_002ACEF8:;
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0);  if (t) goto L_002ACFA8; }
SET64(16, (s32)rd32(c, (RW(4) + 4)));
SET64(17, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(17) == RD(0);  if (t) goto L_002ACF3C; }
SET64(31, 0x2acf1c); SET64(4, RD(17) + RD(0)); JP_F_002AD110(c);
wr32(c, (RW(16) + 12), RW(2));
SET64(31, 0x2acf28); SET64(4, RD(17) + RD(0)); JP_F_002AD100(c);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 8), RW(2));
L_002ACF34:;
SET64(2, RD(17) + RD(0)); goto L_002AD0E8;
L_002ACF3C:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002ACF90; }
SET64(31, 0x2acf50); SET32(4, RW(0) + 4096); JP_F_00100670(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002ACF68; }
SET64(31, 0x2acf64);  JP_F_002AD120(c);
SET64(16, RD(2) + RD(0));
L_002ACF68:;
SET64(31, 0x2acf70);  JP_F_002ACE90(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2acf7c); SET64(5, RD(16) + RD(0)); JP_F_002AF950(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2acf88); wr32(c, (RW(28) + -29916), RW(2)); JP_F_002ACEC0(c);
SET64(17, RD(2) + RD(0)); { POLL(); goto L_002ACF34; }
L_002ACF90:;
SET64(31, 0x2acf98);  JP_F_002ACEB0(c);
SET64(31, 0x2acfa0); SET64(4, RD(2) + RD(0)); JP_F_002ACEC0(c);
SET64(17, RD(2) + RD(0)); { POLL(); goto L_002ACF34; }
L_002ACFA8:;
SET64(31, 0x2acfb0); SET32(4, RW(0) + 4096); JP_F_00100670(c);
{ int t = RD(2) != RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002ACFFC; }
L_002ACFB8:;
SET64(4, (s32)rd32(c, (RW(28) + -29916)));
SET64(31, 0x2acfc4); SET64(5, RD(16) + RD(0)); JP_F_002AF950(c);
wr32(c, (RW(28) + -29916), RW(2));
SET64(17, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(17) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002AD07C; }
SET64(31, 0x2acfdc);  JP_F_002AD110(c);
wr32(c, (RW(16) + 12), RW(2));
SET64(31, 0x2acfe8); SET64(4, RD(17) + RD(0)); JP_F_002AD100(c);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 8), RW(2));
L_002ACFF4:;
SET64(2, RD(17) + RD(0)); goto L_002AD0E8;
L_002ACFFC:;
SET64(31, 0x2ad004); SET64(4, RD(16) + RD(0)); JP_F_002AF190(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5936);
SET64(5, (s64)(s32)0x2b0000);
wr32(c, (RW(16) + 0), RW(3));
SET64(6, (s64)(s32)0x2b0000);
SET32(2, RW(2) + 5712);
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 0), RW(2));
SET32(4, RW(16) + 32);
SET32(5, RW(5) + -13504);
SET32(6, RW(6) + -13600);
SET32(7, RW(0) + 32);
SET32(8, RW(0) + 127);
SET64(31, 0x2ad044); wr32(c, (RW(16) + 8), RW(0)); JP_F_001023D0(c);
SET32(2, RW(0) + 127);
SET32(3, RW(2) + -1);
{ int t = RD(3) == RD(0); SET32(4, RW(16) + 32); if (t) goto L_002AD070; }
L_002AD054:;
SET32(2, RW(4) + 32);
SET32(3, RW(3) + -1);
wr32(c, (RW(4) + 4), RW(2));
SET64(4, RD(2) + RD(0));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002AD054; } }
L_002AD070:;
SET32(2, RW(16) + 32);
wr32(c, (RW(16) + 12), RW(2)); { POLL(); goto L_002ACFB8; }
L_002AD07C:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002AD0D0; }
SET64(31, 0x2ad090); SET32(4, RW(0) + 4096); JP_F_00100670(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002AD0A8; }
SET64(31, 0x2ad0a4);  JP_F_002AD120(c);
SET64(16, RD(2) + RD(0));
L_002AD0A8:;
SET64(31, 0x2ad0b0);  JP_F_002ACE90(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ad0bc); SET64(5, RD(16) + RD(0)); JP_F_002AF950(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2ad0c8); wr32(c, (RW(28) + -29916), RW(2)); JP_F_002ACEC0(c);
SET64(17, RD(2) + RD(0)); { POLL(); goto L_002ACFF4; }
L_002AD0D0:;
SET64(31, 0x2ad0d8);  JP_F_002ACEB0(c);
SET64(31, 0x2ad0e0); SET64(4, RD(2) + RD(0)); JP_F_002ACEC0(c);
SET64(17, RD(2) + RD(0)); { POLL(); goto L_002ACFF4; }
L_002AD0E8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AD100(Ctx *c) { /* func_002AD100 */
ENTER(0x2ad100);
wr32(c, (RW(4) + 4), RW(0)); return;
}

void JP_F_002AD110(Ctx *c) { /* func_002AD110 */
ENTER(0x2ad110);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void JP_F_002AD120(Ctx *c) { /* func_002AD120 */
ENTER(0x2ad120);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ad134); SET64(16, RD(4) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x2b0000);
SET32(2, RW(2) + 5712);
SET64(6, (s64)(s32)0x2b0000);
wr32(c, (RW(16) + 0), RW(2));
SET32(4, RW(16) + 32);
SET32(5, RW(5) + -13504);
SET32(6, RW(6) + -13600);
SET32(7, RW(0) + 32);
SET32(8, RW(0) + 127);
wr32(c, (RW(16) + 4), RW(0));
SET64(31, 0x2ad168); wr32(c, (RW(16) + 8), RW(0)); JP_F_001023D0(c);
SET32(2, RW(0) + 127);
SET32(3, RW(2) + -1);
{ int t = RD(3) == RD(0); SET32(4, RW(16) + 32); if (t) goto L_002AD198; }
L_002AD178:;
SET32(2, RW(4) + 32);
SET32(3, RW(3) + -1);
wr32(c, (RW(4) + 4), RW(2));
SET64(4, RD(2) + RD(0));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002AD178; } }
L_002AD198:;
SET32(2, RW(16) + 32);
wr32(c, (RW(16) + 12), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AD1C0(Ctx *c) { /* func_002AD1C0 */
ENTER(0x2ad1c0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(4, RW(28) + -29928);
SET64(31, 0x2ad1e4); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002AB650(c);
SET64(18, (s32)rd32(c, (RW(19) + 4)));
{ int t = RD(18) == RD(0);  if (t) goto L_002AD228; }
L_002AD1F0:;
SET64(31, 0x2ad1f8); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ad20c);  rt_call(c, t); }
SET64(16, RD(2) & 0xff);
SET64(31, 0x2ad218); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
{ int t = RD(16) != RD(0); SET64(17, (s32)rd32(c, (RW(18) + 4))); if (t) goto L_002AD238; }
L_002AD220:;
{ int t = RD(17) != RD(0); SET64(18, RD(17) + RD(0)); if (t) { POLL(); goto L_002AD1F0; } }
L_002AD228:;
SET64(31, 0x2ad230); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
 goto L_002AD268;
L_002AD238:;
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(31, 0x2ad244); SET64(5, RD(18) + RD(0)); JP_F_002AE7E0(c);
{ int t = RD(18) == RD(0); wr32(c, (RW(19) + 4), RW(2)); if (t) { POLL(); goto L_002AD220; } }
SET64(25, (s32)rd32(c, (RW(18) + 0)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ad260); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002AD220; }
L_002AD268:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002AD290(Ctx *c) { /* func_002AD290 */
ENTER(0x2ad290);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ad2b0); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(16, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(16) == RD(0); SET32(4, RW(28) + -29928); if (t) goto L_002AD300; }
SET64(31, 0x2ad2c4);  JP_F_002AB650(c);
L_002AD2C4:;
SET64(2, RD(0) < RD(16));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002AD2E8; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(2) == RD(17);  if (t) goto L_002AD2E8; }
SET64(16, (s32)rd32(c, (RW(16) + 4))); { POLL(); goto L_002AD2C4; }
L_002AD2E8:;
SET64(31, 0x2ad2f0); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
L_002AD2F0:;
SET64(31, 0x2ad2f8); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(2, RD(16) + RD(0)); goto L_002AD308;
L_002AD300:;
SET64(16, RD(0) + RD(0)); { POLL(); goto L_002AD2F0; }
L_002AD308:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AD320(Ctx *c) { /* func_002AD320 */
ENTER(0x2ad320);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2ad340); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(4, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(5) == RD(0); SET64(6, RD(5) + RD(0)); if (t) goto L_002AD398; }
L_002AD354:;
SET64(2, (s32)rd32(c, (RW(6) + 12)));
SET64(1, RSD(3) < RSD(2));
{ int t = RD(1) == RD(0);  if (t) goto L_002AD388; }
{ int t = RD(4) != RD(0);  if (t) goto L_002AD398; }
SET64(31, 0x2ad374); SET64(4, RD(16) + RD(0)); JP_F_002AE690(c);
SET32(4, RW(28) + -29928);
SET64(31, 0x2ad380); wr32(c, (RW(17) + 4), RW(16)); JP_F_002AB600(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_002AD3C4;
L_002AD388:;
SET64(4, RD(6) + RD(0));
SET64(6, (s32)rd32(c, (RW(6) + 4)));
{ int t = RD(6) != RD(0);  if (t) { POLL(); goto L_002AD354; } }
L_002AD398:;
{ int t = RD(4) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_002AD3B8; }
SET64(31, 0x2ad3a8);  JP_F_002AE690(c);
L_002AD3A8:;
SET64(31, 0x2ad3b0); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
 goto L_002AD3C0;
L_002AD3B8:;
wr32(c, (RW(17) + 4), RW(16)); { POLL(); goto L_002AD3A8; }
L_002AD3C0:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002AD3C4:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AD3E0(Ctx *c) { /* func_002AD3E0 */
ENTER(0x2ad3e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AD460; }
SET64(2, rd8(c, (RW(17) + 16)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5760);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 0), RW(3)); if (t) goto L_002AD43C; }
SET64(31, 0x2ad418); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(4) == RD(0);  if (t) goto L_002AD434; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ad434); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002AD434:;
SET64(31, 0x2ad43c); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
L_002AD43C:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ad448); SET64(5, RD(0) + RD(0)); JP_F_002AE8C0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AD464; }
SET64(31, 0x2ad460); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AD460:;
SET64(2, RD(17) + RD(0));
L_002AD464:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AD480(Ctx *c) { /* func_002AD480 */
ENTER(0x2ad480);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AD4C8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5776);
SET64(31, 0x2ad4b0); wr32(c, (RW(17) + 0), RW(2)); JP_F_002AF140(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AD4CC; }
SET64(31, 0x2ad4c8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AD4C8:;
SET64(2, RD(17) + RD(0));
L_002AD4CC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AD4E0(Ctx *c) { /* func_002AD4E0 */
ENTER(0x2ad4e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ad4f4); SET64(16, RD(4) + RD(0)); JP_F_002AF190(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + 5776);
wr32(c, (RW(16) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AD520(Ctx *c) { /* func_002AD520 */
ENTER(0x2ad520);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002AD530(Ctx *c) { /* func_002AD530 */
ENTER(0x2ad530);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002AD540(Ctx *c) { /* func_002AD540 */
ENTER(0x2ad540);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002AD550(Ctx *c) { /* func_002AD550 */
ENTER(0x2ad550);
SET64(3, rd64(c, (RW(4) + 16)));
SET64(2, RD(0) + RD(0));
SET64(3, RD(3) + (s64)1);
wr64(c, (RW(4) + 16), RD(3)); return;
}

void JP_F_002AD570(Ctx *c) { /* func_002AD570 */
ENTER(0x2ad570);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x2ad58c); SET64(5, RD(16) + RD(0)); JP_F_002ABF00(c);
{ int t = RD(16) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_002AD598; }
SET32(5, RW(16) + 4);
L_002AD598:;
SET64(31, 0x2ad5a0); SET64(4, (s32)rd32(c, (RW(28) + -29920))); JP_F_002ABC40(c);
{ int t = RD(16) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_002AD5AC; }
SET32(5, RW(16) + 8);
L_002AD5AC:;
SET64(31, 0x2ad5b4); SET64(4, (s32)rd32(c, (RW(28) + -29920))); JP_F_002AB950(c);
{ int t = RD(16) == RD(0);  if (t) goto L_002AD5C0; }
SET32(16, RW(16) + 12);
L_002AD5C0:;
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x2ad5cc); SET64(5, RD(16) + RD(0)); JP_F_002AB690(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AD5E0(Ctx *c) { /* func_002AD5E0 */
ENTER(0x2ad5e0);
SET32(29, RW(29) + -32);
SET64(6, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x2ad600); SET64(5, RD(16) + RD(0)); JP_F_002ABF80(c);
{ int t = RD(16) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_002AD60C; }
SET32(5, RW(16) + 4);
L_002AD60C:;
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x2ad618); SET64(6, RD(0) + RD(0)); JP_F_002ABCC0(c);
{ int t = RD(16) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_002AD624; }
SET32(5, RW(16) + 8);
L_002AD624:;
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x2ad630); SET64(6, RD(0) + RD(0)); JP_F_002AB9D0(c);
{ int t = RD(16) == RD(0);  if (t) goto L_002AD63C; }
SET32(16, RW(16) + 12);
L_002AD63C:;
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2ad64c); SET64(6, RD(0) + RD(0)); JP_F_002AB710(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AD660(Ctx *c) { /* func_002AD660 */
ENTER(0x2ad660);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AD6D8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5792);
SET32(3, RW(3) + 5804);
wr32(c, (RW(17) + 0), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 4), RW(3));
SET32(2, RW(2) + 5816);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 8), RW(2));
SET32(3, RW(3) + 5828);
SET32(2, RW(17) + 32);
{ int t = RD(2) != RD(0); wr32(c, (RW(17) + 12), RW(3)); if (t) goto L_002AD6E4; }
SET32(2, RW(17) + 24);
L_002AD6B8:;
{ int t = RD(2) != RD(0);  if (t) goto L_002AD724; }
SET64(2, RD(16) << 48);
L_002AD6C4:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AD6DC; }
SET64(31, 0x2ad6d8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AD6D8:;
SET64(2, RD(17) + RD(0));
L_002AD6DC:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002AD764;
L_002AD6E4:;
SET64(4, (s32)rd32(c, (RW(17) + 36)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5872);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 32), RW(2)); if (t) goto L_002AD710; }
{ int t = RD(4) == RD(0);  if (t) goto L_002AD710; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ad710); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002AD710:;
SET32(4, RW(17) + 32);
SET64(31, 0x2ad71c); SET64(5, RD(0) + RD(0)); JP_F_002AF140(c);
SET32(2, RW(17) + 24); { POLL(); goto L_002AD6B8; }
L_002AD724:;
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5872);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 24), RW(2)); if (t) goto L_002AD750; }
{ int t = RD(4) == RD(0);  if (t) goto L_002AD750; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ad750); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002AD750:;
SET32(4, RW(17) + 24);
SET64(31, 0x2ad75c); SET64(5, RD(0) + RD(0)); JP_F_002AF140(c);
SET64(2, RD(16) << 48); { POLL(); goto L_002AD6C4; }
L_002AD764:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AD780(Ctx *c) { /* func_002AD780 */
ENTER(0x2ad780);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AD7EC; }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5872);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 0), RW(2)); if (t) goto L_002AD7C8; }
{ int t = RD(4) == RD(0);  if (t) goto L_002AD7C8; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ad7c8); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002AD7C8:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ad7d4); SET64(5, RD(0) + RD(0)); JP_F_002AF140(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AD7F0; }
SET64(31, 0x2ad7ec); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AD7EC:;
SET64(2, RD(17) + RD(0));
L_002AD7F0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AD810(Ctx *c) { /* func_002AD810 */
ENTER(0x2ad810);
SET32(4, RW(4) + -4); { JP_F_002AD540(c); return; }
}

void JP_F_002AD820(Ctx *c) { /* func_002AD820 */
ENTER(0x2ad820);
SET32(4, RW(4) + -8); { JP_F_002AD530(c); return; }
}

void JP_F_002AD830(Ctx *c) { /* func_002AD830 */
ENTER(0x2ad830);
SET32(4, RW(4) + -12); { JP_F_002AD520(c); return; }
}

void JP_F_002AD840(Ctx *c) { /* func_002AD840 */
ENTER(0x2ad840);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 132), RW(5));
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ad85c); SET64(4, (s32)rd32(c, (RW(4) + 80))); JP_F_0010F5B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0); SET32(4, RW(16) + 32); if (t) goto L_002AD900; }
SET64(3, (s32)rd32(c, (RW(2) + 12)));
SET64(2, (s32)rd32(c, (RW(16) + 132)));
SET64(2, RD(3) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_002AD900; }
L_002AD87C:;
SET64(31, 0x2ad884); SET64(4, RD(16) + RD(0)); JP_F_002AC850(c);
SET64(3, (s32)rd32(c, (RW(2) + 12)));
SET64(4, RD(2) + RD(0));
SET32(2, RW(0) + 126);
{ int t = RD(3) != RD(2);  if (t) goto L_002AD8F8; }
L_002AD898:;
{ int t = RD(4) == RD(0);  if (t) goto L_002AD8B0; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ad8b0); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002AD8B0:;
SET64(31, 0x2ad8b8); SET64(4, (s32)rd32(c, (RW(16) + 80))); JP_F_0010F5B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0); SET32(4, RW(16) + 32); if (t) goto L_002AD910; }
SET64(3, (s32)rd32(c, (RW(2) + 12)));
SET64(2, (s32)rd32(c, (RW(16) + 132)));
SET64(2, RD(3) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_002AD910; }
L_002AD8D8:;
SET64(31, 0x2ad8e0); SET64(4, RD(16) + RD(0)); JP_F_002AC850(c);
SET64(3, (s32)rd32(c, (RW(2) + 12)));
SET64(4, RD(2) + RD(0));
SET32(2, RW(0) + 126);
{ int t = RD(3) == RD(2);  if (t) { POLL(); goto L_002AD898; } }
L_002AD8F8:;
SET64(2, RD(4) + RD(0)); goto L_002AD920;
L_002AD900:;
SET64(31, 0x2ad908);  JP_F_002AB0C0(c);
 { POLL(); goto L_002AD87C; }
L_002AD910:;
SET64(31, 0x2ad918);  JP_F_002AB0C0(c);
 { POLL(); goto L_002AD8D8; }
L_002AD920:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AD930(Ctx *c) { /* func_002AD930 */
ENTER(0x2ad930);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2ad94c); SET64(16, RD(4) + RD(0)); JP_F_002AC7C0(c);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) == RD(17);  if (t) goto L_002AD960; }
L_002AD958:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002AD9A4;
L_002AD960:;
SET64(4, (s32)rd32(c, (RW(3) + 12)));
SET64(3, (s32)rd32(c, (RW(16) + 132)));
SET64(3, RD(4) < RD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_002AD9A0; }
SET64(2, rd8(c, (RW(28) + -29924)));
{ int t = RD(2) == RD(0);  if (t) goto L_002AD990; }
SET64(31, 0x2ad988); SET64(4, (s32)rd32(c, (RW(16) + 80))); JP_F_00110510(c);
 { POLL(); goto L_002AD958; }
L_002AD990:;
SET64(31, 0x2ad998); SET64(4, (s32)rd32(c, (RW(16) + 80))); JP_F_0010F590(c);
 { POLL(); goto L_002AD958; }
L_002AD9A0:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002AD9A4:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AD9C0(Ctx *c) { /* func_002AD9C0 */
ENTER(0x2ad9c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2ad9e0); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(4, (s32)rd32(c, (RW(17) + 92)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2ad9f0); SET64(5, RD(16) + RD(0)); JP_F_002ADFE0(c);
SET64(2, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(2) + 1936)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2ada04); SET64(5, RD(16) + RD(0)); JP_F_002ADFE0(c);
SET64(31, 0x2ada0c); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002ADA1C; }
SET32(16, RW(16) + 32);
SET64(4, RD(16) + RD(0));
L_002ADA1C:;
SET64(31, 0x2ada24);  JP_F_002AB0D0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ADA40(Ctx *c) { /* func_002ADA40 */
ENTER(0x2ada40);
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002ADA50(Ctx *c) { /* func_002ADA50 */
ENTER(0x2ada50);
L_002ADA50:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25);  switch (t) { case 0x2ada50: goto L_002ADA50; default: rt_jump(c, t); return; } }
}

void JP_F_002ADA60(Ctx *c) { /* func_002ADA60 */
ENTER(0x2ada60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ada78); SET32(4, RW(28) + -29928); JP_F_002AB650(c);
SET64(2, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(2) + 1936)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2ada8c); SET64(5, RD(16) + RD(0)); JP_F_002ADFE0(c);
SET64(31, 0x2ada94); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002ADAA4; }
SET32(16, RW(16) + 32);
SET64(4, RD(16) + RD(0));
L_002ADAA4:;
SET64(31, 0x2adaac);  JP_F_002AB0D0(c);
SET64(31, 0x2adab4);  JP_F_0010F580(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002ADAD0(Ctx *c) { /* func_002ADAD0 */
ENTER(0x2adad0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x2adae4); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_0010F550(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(2, (s32)rd32(c, (RW(2) + 1936)));
SET64(17, (s32)rd32(c, (RW(2) + 16)));
L_002ADAF4:;
SET64(2, (s64)(s32)0x540000);
SET32(17, RW(17) + -1);
SET64(4, (s32)rd32(c, (RW(2) + 1944)));
SET64(31, 0x2adb08); SET64(5, RD(17) + RD(0)); JP_F_002ADD80(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002ADB20; }
SET64(3, (s32)rd32(c, (RW(2) + 80)));
{ int t = RD(16) != RD(3);  if (t) { POLL(); goto L_002ADAF4; } }
L_002ADB20:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ADB40(Ctx *c) { /* func_002ADB40 */
ENTER(0x2adb40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002ADBC4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5888);
SET32(2, RW(2) + 5904);
wr32(c, (RW(16) + 0), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 84), RW(2));
SET32(3, RW(3) + 5920);
SET32(2, RW(16) + 92);
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 88), RW(3)); if (t) goto L_002ADB94; }
SET32(4, RW(16) + 104);
SET64(31, 0x2adb94); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
L_002ADB94:;
SET32(4, RW(16) + 32);
SET64(31, 0x2adba0); SET64(5, RD(0) + RD(0)); JP_F_002AAFC0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2adbac); SET64(5, RD(0) + RD(0)); JP_F_002AC8A0(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_002ADBC8; }
SET64(31, 0x2adbc4); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002ADBC4:;
SET64(2, RD(16) + RD(0));
L_002ADBC8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ADBE0(Ctx *c) { /* func_002ADBE0 */
ENTER(0x2adbe0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(7) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2adc0c); SET64(16, RD(6) + RD(0)); JP_F_002AC900(c);
SET32(3, RW(0) + 127);
SET64(2, RD(16) & 0xffff);
SET64(6, RD(19) + RD(0));
SET32(4, RW(18) + 32);
SET64(31, 0x2adc24); SET32(5, RW(3) - RW(2)); JP_F_002AB030(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5888);
SET32(19, RW(18) + 92);
wr32(c, (RW(18) + 0), RW(2));
SET32(4, RW(19) + 12);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5904);
SET32(2, RW(2) + 5920);
wr32(c, (RW(18) + 84), RW(3));
wr32(c, (RW(18) + 88), RW(2));
SET32(5, RW(0) + 1);
wr32(c, (RW(18) + 92), RW(4));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2adc64); wr32(c, (RW(18) + 100), RW(4)); JP_F_002AE1F0(c);
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(19) + 4), RW(0));
wr32(c, (RW(18) + 12), RW(2));
SET32(2, RW(0) + 16);
wr32(c, (RW(18) + 128), RW(17));
wr32(c, (RW(18) + 132), RW(2));
SET64(2, RD(18) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002ADCA0(Ctx *c) { /* func_002ADCA0 */
ENTER(0x2adca0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002ADCDC; }
{ int t = RD(16) != RD(0); SET32(4, RW(17) + 12); if (t) goto L_002ADCE8; }
SET64(2, RD(16) << 48);
L_002ADCC8:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002ADCE0; }
SET64(31, 0x2adcdc); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002ADCDC:;
SET64(2, RD(17) + RD(0));
L_002ADCE0:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002ADCF8;
L_002ADCE8:;
SET64(31, 0x2adcf0); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET64(2, RD(16) << 48); { POLL(); goto L_002ADCC8; }
L_002ADCF8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002ADD10(Ctx *c) { /* func_002ADD10 */
ENTER(0x2add10);
SET32(4, RW(4) + -32); { JP_F_002ADB40(c); return; }
}

void JP_F_002ADD20(Ctx *c) { /* func_002ADD20 */
ENTER(0x2add20);
SET32(4, RW(4) + -88); { JP_F_002ADA40(c); return; }
}

void JP_F_002ADD30(Ctx *c) { /* func_002ADD30 */
ENTER(0x2add30);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_002ADD68; }
SET64(4, (s32)rd32(c, (RW(4) + 0)));
L_002ADD44:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(5) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_002ADD58; }
 goto L_002ADD6C;
L_002ADD58:;
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(3));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_002ADD44; } }
L_002ADD68:;
SET64(2, RD(0) + RD(0));
L_002ADD6C:;
 return;
}

void JP_F_002ADD80(Ctx *c) { /* func_002ADD80 */
ENTER(0x2add80);
{ int t = RSD(5) < 0;  if (t) goto L_002ADDB4; }
L_002ADD88:;
SET64(2, (s32)rd32(c, (RW(4) + 16)));
SET64(1, RSD(5) < RSD(2));
{ int t = RD(1) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002ADDC0; }
{ int t = RSD(5) < 0;  if (t) goto L_002ADDC0; }
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(5) << 2);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0))); goto L_002ADDC0;
L_002ADDB4:;
SET64(2, (s32)rd32(c, (RW(4) + 16)));
SET32(5, RW(5) + RW(2)); { POLL(); goto L_002ADD88; }
L_002ADDC0:;
 return;
}

void JP_F_002ADDD0(Ctx *c) { /* func_002ADDD0 */
ENTER(0x2addd0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 20)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002ADE28; }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET64(1, RSD(3) < RSD(4));
{ int t = RD(1) != RD(0);  if (t) goto L_002ADE04; }
L_002ADDFC:;
wr32(c, (RW(16) + 16), RW(0)); goto L_002ADE28;
L_002ADE04:;
SET64(31, 0x2ade0c); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00100430(c);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x2ade18); SET32(4, RW(2) << 2); JP_F_00100530(c);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 8), RW(3)); { POLL(); goto L_002ADDFC; }
L_002ADE28:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

