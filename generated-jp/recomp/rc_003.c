#include "r5900.h"
#include "functab.h"

void JP_F_0013DE40(Ctx *c) { /* func_0013DE40 */
ENTER(0x13de40);
SET32(4, RW(4) + -60); { JP_F_002DD300(c); return; }
}

void JP_F_0013DE50(Ctx *c) { /* func_0013DE50 */
ENTER(0x13de50);
SET32(4, RW(4) + -60); { JP_F_002DD3C0(c); return; }
}

void JP_F_0013DE60(Ctx *c) { /* func_0013DE60 */
ENTER(0x13de60);
SET32(4, RW(4) + -60); { JP_F_0013DCB0(c); return; }
}

void JP_F_0013DE70(Ctx *c) { /* func_0013DE70 */
ENTER(0x13de70);
SET32(4, RW(4) + -4); { JP_F_00138EF0(c); return; }
}

void JP_F_0013DE80(Ctx *c) { /* func_0013DE80 */
ENTER(0x13de80);
SET32(4, RW(4) + -24); { JP_F_00138EF0(c); return; }
}

void JP_F_0013DE90(Ctx *c) { /* func_0013DE90 */
ENTER(0x13de90);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + -3056); return;
}

void JP_F_0013DEA0(Ctx *c) { /* func_0013DEA0 */
ENTER(0x13dea0);
 return;
}

void JP_F_0013DEB0(Ctx *c) { /* func_0013DEB0 */
ENTER(0x13deb0);
SET64(6, RD(6) << 48);
SET32(3, RW(0) + -1);
SET64(6, RSD(6) >> 48);
if (RD(6) == RD(3)) { wr8(c, (RW(4) + 64), (u8)RW(5)); goto L_0013DEE4; }
SET32(3, RW(6) << 3);
SET32(3, RW(3) - RW(6));
SET32(3, RW(3) << 3);
SET32(3, RW(3) + RW(6));
SET32(3, RW(3) << 2);
SET32(3, RW(4) + RW(3));
wr8(c, (RW(3) + 64), (u8)RW(5)); goto L_0013DEE8;
L_0013DEE4:;
wr8(c, (RW(4) + 292), (u8)RW(5));
L_0013DEE8:;
 return;
}

void JP_F_0013DEF0(Ctx *c) { /* func_0013DEF0 */
ENTER(0x13def0);
SET64(3, RD(5) << 48);
SET32(2, RW(0) + -1);
SET64(3, RSD(3) >> 48);
c->f[2].u = RW(0);
if (RD(3) == RD(2)) { c->f[1].u = rd32(c, (RW(4) + 100)); goto L_0013DF28; }
SET32(2, RW(3) << 3);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + 100)); goto L_0013DF34;
L_0013DF28:;
c->f[0].u = rd32(c, (RW(4) + 328));
c->f[1].f = fpu(F(2) + F(1));
c->f[0].f = fpu(F(1) + F(0));
L_0013DF34:;
 return;
}

void JP_F_0013DF40(Ctx *c) { /* func_0013DF40 */
ENTER(0x13df40);
SET64(3, RD(5) << 48);
SET32(2, RW(0) + -1);
SET64(3, RSD(3) >> 48);
c->f[2].u = RW(0);
if (RD(3) == RD(2)) { c->f[1].u = rd32(c, (RW(4) + 96)); goto L_0013DF78; }
SET32(2, RW(3) << 3);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + 96)); goto L_0013DF84;
L_0013DF78:;
c->f[0].u = rd32(c, (RW(4) + 324));
c->f[1].f = fpu(F(2) + F(1));
c->f[0].f = fpu(F(1) + F(0));
L_0013DF84:;
 return;
}

void JP_F_0013DF90(Ctx *c) { /* func_0013DF90 */
ENTER(0x13df90);
SET64(3, RD(5) << 48);
SET32(2, RW(0) + -1);
SET64(3, RSD(3) >> 48);
c->f[2].u = RW(0);
if (RD(3) == RD(2)) { c->f[1].u = rd32(c, (RW(4) + 92)); goto L_0013DFC8; }
SET32(2, RW(3) << 3);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + 92)); goto L_0013DFD4;
L_0013DFC8:;
c->f[0].u = rd32(c, (RW(4) + 320));
c->f[1].f = fpu(F(2) + F(1));
c->f[0].f = fpu(F(1) + F(0));
L_0013DFD4:;
 return;
}

void JP_F_0013DFE0(Ctx *c) { /* func_0013DFE0 */
ENTER(0x13dfe0);
SET64(3, RD(5) << 48);
SET32(2, RW(0) + -1);
SET64(3, RSD(3) >> 48);
c->f[2].u = RW(0);
if (RD(3) == RD(2)) { c->f[1].u = rd32(c, (RW(4) + 88)); goto L_0013E018; }
SET32(2, RW(3) << 3);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(2) + 88)); goto L_0013E024;
L_0013E018:;
c->f[0].u = rd32(c, (RW(4) + 316));
c->f[1].f = fpu(F(2) + F(1));
c->f[0].f = fpu(F(1) + F(0));
L_0013E024:;
 return;
}

void JP_F_0013E030(Ctx *c) { /* func_0013E030 */
ENTER(0x13e030);
SET64(6, RD(6) << 48);
SET32(3, RW(0) + -1);
SET64(6, RSD(6) >> 48);
{ int t = RD(6) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0013E0F0; }
SET32(2, RW(6) << 3);
SET64(8, RD(5) & 0xffff);
SET32(2, RW(2) - RW(6));
SET64(3, RD(0) + RD(0));
SET32(5, RW(2) << 3);
SET32(5, RW(5) + RW(6));
SET64(2, RD(0) + RD(0));
SET32(5, RW(5) << 2);
SET32(4, RW(4) + RW(5));
{ int t = RSD(8) <= 0; SET32(9, RW(4) + 60); if (t) goto L_0013E0E8; }
SET64(7, rd16(c, (RW(9) + 24)));
SET64(6, (s32)rd32(c, (RW(9) + 20)));
L_0013E078:;
SET64(4, RD(2) & 0xffff);
SET32(4, RW(7) - RW(4));
SET64(4, RD(4) << 48);
SET64(4, RSD(4) >> 48);
{ int t = RSD(4) >= 0;  if (t) goto L_0013E0B8; }
SET64(5, (s16)rd16(c, (RW(9) + 16)));
L_0013E098:;
SET32(4, RW(4) + RW(5));
SET64(4, RD(4) << 48);
SET64(4, RSD(4) >> 48);
{ int t = RSD(4) < 0;  if (t) { POLL(); goto L_0013E098; } }
L_0013E0B8:;
SET64(5, RD(4) & 0xffff);
SET32(4, RW(5) << 1);
SET32(2, RW(2) + 1);
SET32(4, RW(4) + RW(5));
SET64(2, RD(2) & 0xffff);
SET32(5, RW(4) << 1);
SET32(5, RW(6) + RW(5));
SET64(4, RSD(2) < RSD(8));
SET64(5, rd16(c, (RW(5) + 0)));
SET64(3, RD(3) | RD(5));
{ int t = RD(4) != RD(0); SET64(3, RD(3) & 0xffff); if (t) { POLL(); goto L_0013E078; } }
L_0013E0E8:;
SET64(2, RD(3) & 0xffff); goto L_0013E198;
L_0013E0F0:;
SET64(11, RD(5) & 0xffff);
SET64(3, RD(0) + RD(0));
L_0013E0F8:;
SET32(10, RW(4) + 60);
SET64(13, RD(0) + RD(0));
{ int t = RSD(11) <= 0; SET64(12, RD(0) + RD(0)); if (t) goto L_0013E180; }
SET64(9, rd16(c, (RW(10) + 24)));
SET64(8, (s32)rd32(c, (RW(10) + 20)));
L_0013E110:;
SET64(5, RD(12) & 0xffff);
SET32(5, RW(9) - RW(5));
SET64(5, RD(5) << 48);
SET64(5, RSD(5) >> 48);
{ int t = RSD(5) >= 0;  if (t) goto L_0013E150; }
SET64(6, (s16)rd16(c, (RW(10) + 16)));
L_0013E130:;
SET32(5, RW(5) + RW(6));
SET64(5, RD(5) << 48);
SET64(5, RSD(5) >> 48);
{ int t = RSD(5) < 0;  if (t) { POLL(); goto L_0013E130; } }
L_0013E150:;
SET64(7, RD(5) & 0xffff);
SET32(6, RW(7) << 1);
SET32(5, RW(12) + 1);
SET32(6, RW(6) + RW(7));
SET64(12, RD(5) & 0xffff);
SET32(6, RW(6) << 1);
SET64(5, RSD(12) < RSD(11));
SET32(6, RW(8) + RW(6));
SET64(6, rd16(c, (RW(6) + 0)));
SET64(6, RD(13) | RD(6));
{ int t = RD(5) != RD(0); SET64(13, RD(6) & 0xffff); if (t) { POLL(); goto L_0013E110; } }
L_0013E180:;
SET32(3, RW(3) + 1);
SET64(2, RD(2) | RD(13));
SET64(5, RD(3) < (u64)(s64)2);
SET64(2, RD(2) & 0xffff);
{ int t = RD(5) != RD(0); SET32(4, RW(4) + 228); if (t) { POLL(); goto L_0013E0F8; } }
L_0013E198:;
 return;
}

void JP_F_0013E1A0(Ctx *c) { /* func_0013E1A0 */
ENTER(0x13e1a0);
SET64(5, RD(5) << 48);
SET32(3, RW(0) + -1);
SET64(5, RSD(5) >> 48);
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0013E1D4; }
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
SET64(2, rd16(c, (RW(2) + 72))); goto L_0013E1EC;
L_0013E1D4:;
SET64(5, rd16(c, (RW(4) + 72)));
SET64(3, rd16(c, (RW(4) + 300)));
SET64(2, RD(2) | RD(5));
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) | RD(3));
SET64(2, RD(2) & 0xffff);
L_0013E1EC:;
 return;
}

void JP_F_0013E200(Ctx *c) { /* func_0013E200 */
ENTER(0x13e200);
SET64(5, RD(5) << 48);
SET32(3, RW(0) + -1);
SET64(5, RSD(5) >> 48);
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0013E234; }
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
SET64(2, rd16(c, (RW(2) + 68))); goto L_0013E24C;
L_0013E234:;
SET64(5, rd16(c, (RW(4) + 68)));
SET64(3, rd16(c, (RW(4) + 296)));
SET64(2, RD(2) | RD(5));
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) | RD(3));
SET64(2, RD(2) & 0xffff);
L_0013E24C:;
 return;
}

void JP_F_0013E260(Ctx *c) { /* func_0013E260 */
ENTER(0x13e260);
SET64(5, RD(5) << 48);
SET32(3, RW(0) + -1);
SET64(5, RSD(5) >> 48);
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0013E294; }
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
SET64(2, rd16(c, (RW(2) + 66))); goto L_0013E2AC;
L_0013E294:;
SET64(5, rd16(c, (RW(4) + 66)));
SET64(3, rd16(c, (RW(4) + 294)));
SET64(2, RD(2) | RD(5));
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) | RD(3));
SET64(2, RD(2) & 0xffff);
L_0013E2AC:;
 return;
}

void JP_F_0013E2C0(Ctx *c) { /* func_0013E2C0 */
ENTER(0x13e2c0);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
SET32(2, RW(2) + 60); return;
}

void JP_F_0013E2E0(Ctx *c) { /* func_0013E2E0 */
ENTER(0x13e2e0);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
SET32(2, RW(2) + 60); return;
}

void JP_F_0013E300(Ctx *c) { /* func_0013E300 */
ENTER(0x13e300);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(4) + RW(2));
SET64(2, rd8(c, (RW(2) + 63))); return;
}

void JP_F_0013E320(Ctx *c) { /* func_0013E320 */
ENTER(0x13e320);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(4) + RD(0));
L_0013E338:;
SET64(31, 0x13e340); SET32(4, RW(16) + 60); JP_F_0013EB70(c);
SET32(17, RW(17) + 1);
SET32(16, RW(16) + 228);
SET64(3, RD(17) < (u64)(s64)2);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_0013E338; } }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0013E370(Ctx *c) { /* func_0013E370 */
ENTER(0x13e370);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
SET64(16, RD(4) + RD(0));
L_0013E388:;
SET32(4, RW(16) + 60);
SET64(31, 0x13e394); SET64(5, RD(17) + RD(0)); JP_F_0013FED0(c);
SET32(17, RW(17) + 1);
SET64(3, RD(17) < (u64)(s64)2);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 228); if (t) { POLL(); goto L_0013E388; } }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0013E3C0(Ctx *c) { /* func_0013E3C0 */
ENTER(0x13e3c0);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x13e3d8); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3280);
SET64(5, (s64)(s32)0x140000);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + -3272);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x140000);
SET32(2, RW(2) + -3260);
wr32(c, (RW(16) + 20), RW(3));
SET32(4, RW(16) + 60);
wr32(c, (RW(16) + 36), RW(2));
SET32(5, RW(5) + -48);
SET32(6, RW(6) + -28656);
SET32(7, RW(0) + 228);
SET64(31, 0x13e41c); SET32(8, RW(0) + 2); JP_F_001023D0(c);
SET32(3, RW(0) + 1);
SET64(2, RD(16) + RD(0));
wr8(c, (RW(16) + 52), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0013E440(Ctx *c) { /* func_0013E440 */
ENTER(0x13e440);
SET64(3, rd16(c, (RW(4) + 8)));
SET64(2, RD(5) & 0xffff);
SET32(2, RW(3) - RW(2));
SET64(2, RD(2) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) >= 0;  if (t) goto L_0013E480; }
SET64(3, (s16)rd16(c, (RW(4) + 0)));
L_0013E460:;
SET32(2, RW(2) + RW(3));
SET64(2, RD(2) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) < 0;  if (t) { POLL(); goto L_0013E460; } }
L_0013E480:;
SET64(5, RD(2) & 0xffff);
SET32(3, RW(5) << 1);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3)); return;
}

void JP_F_0013E4A0(Ctx *c) { /* func_0013E4A0 */
ENTER(0x13e4a0);
SET64(9, rd16(c, (RW(4) + 8)));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET32(8, RW(9) << 1);
SET32(8, RW(8) + RW(9));
SET32(8, RW(8) << 1);
SET32(3, RW(3) + RW(8));
wr16(c, (RW(3) + 0), (u16)RW(5));
wr16(c, (RW(3) + 2), (u16)RW(6));
wr16(c, (RW(3) + 4), (u16)RW(7));
SET64(3, rd16(c, (RW(4) + 8)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 8), (u16)RW(3));
SET64(5, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(4) + 0)));
SET64(3, RSD(5) < RSD(3));
if (RD(3) != RD(0)) { SET64(5, rd16(c, (RW(4) + 8))); goto L_0013E4EC; }
wr16(c, (RW(4) + 8), (u16)RW(0));
SET64(5, rd16(c, (RW(4) + 8)));
L_0013E4EC:;
SET64(6, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(5) << 1);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 1);
SET32(3, RW(3) + RW(6));
wr16(c, (RW(3) + 4), (u16)RW(0));
SET64(5, rd16(c, (RW(4) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(5) << 1);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 1);
SET32(3, RW(3) + RW(6));
wr16(c, (RW(3) + 2), (u16)RW(0));
SET64(5, rd16(c, (RW(4) + 8)));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET32(4, RW(5) << 1);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(4));
wr16(c, (RW(3) + 0), (u16)RW(0)); return;
}

void JP_F_0013E540(Ctx *c) { /* func_0013E540 */
ENTER(0x13e540);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 0), (u16)RW(5));
SET64(16, RD(4) + RD(0));
SET64(3, rd16(c, (RW(4) + 0)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(31, 0x13e568); SET32(4, RW(2) << 1); JP_F_00100530(c);
wr32(c, (RW(16) + 4), RW(2));
SET64(3, rd16(c, (RW(16) + 0)));
{ int t = RSD(3) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_0013E5B8; }
SET64(6, RD(7) & 0xffff);
L_0013E57C:;
SET32(3, RW(7) + 1);
SET32(5, RW(6) << 1);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET32(5, RW(5) + RW(6));
SET64(7, RD(3) & 0xffff);
SET32(3, RW(5) << 1);
SET32(3, RW(4) + RW(3));
wr16(c, (RW(3) + 0), (u16)RW(0));
wr16(c, (RW(3) + 2), (u16)RW(0));
wr16(c, (RW(3) + 4), (u16)RW(0));
SET64(3, rd16(c, (RW(16) + 0)));
SET64(3, RSD(7) < RSD(3));
if (RD(3) != RD(0)) { SET64(6, RD(7) & 0xffff); { POLL(); goto L_0013E57C; } }
L_0013E5B8:;
wr16(c, (RW(16) + 8), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0013E5D0(Ctx *c) { /* func_0013E5D0 */
ENTER(0x13e5d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x13e5e8); SET64(4, (s32)rd32(c, (RW(4) + 4))); JP_F_00100430(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0013E600(Ctx *c) { /* func_0013E600 */
ENTER(0x13e600);
wr32(c, (RW(4) + 4), RW(0));
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_0013E610(Ctx *c) { /* func_0013E610 */
ENTER(0x13e610);
SET32(29, RW(29) + -128);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 12), c->f[23].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
SET32(4, RW(29) + 96);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[23].u = c->f[12].u;
wr32(c, (RW(29) + 108), RW(2));
c->f[20].u = c->f[13].u;
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 96), c->f[23].u);
SET64(31, 0x13e654); wr32(c, (RW(29) + 104), c->f[20].u); JP_F_002B0290(c);
c->f[22].u = c->f[0].u;
c->f[0].u = rd32(c, (RW(28) + -32720));
c->f[21].u = RW(0);
c->fcc = F(0) == F(23);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(28) + -32720)); goto L_0013E680; }
c->f[0].u = rd32(c, (RW(28) + -32716));
c->fcc = F(0) == F(20);
if (c->fcc) { wr32(c, (RW(16) + 0), c->f[21].u); goto L_0013E72C; }
c->f[1].u = rd32(c, (RW(28) + -32720));
L_0013E680:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(28) + -32716));
SET32(4, RW(29) + 64);
c->f[15].u = RW(2);
c->f[12].f = fpu(F(23) - F(1));
c->f[14].u = RW(0);
SET64(31, 0x13e6a0); c->f[13].f = fpu(F(20) - F(0)); JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x13e6ac); SET32(4, RW(29) + 80); JP_F_0013E7B0(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(29) + 48);
c->f[13].u = RW(2);
c->f[12].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
c->f[15].u = RW(2);
SET64(31, 0x13e6cc); c->f[14].u = c->f[12].u; JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x13e6d8); SET32(4, RW(29) + 80); JP_F_0013E790(c);
wr32(c, (RW(29) + 124), c->f[0].u);
SET32(4, RW(29) + 124);
SET32(5, RW(28) + -32708);
SET64(31, 0x13e6ec); SET32(6, RW(28) + -32712); JP_F_0013E750(c);
wr32(c, (RW(29) + 124), c->f[0].u);
SET64(31, 0x13e6f8); c->f[12].u = c->f[0].u; JP_F_0011F880(c);
c->f[20].u = c->f[0].u;
SET64(31, 0x13e704); c->f[12].u = c->f[20].u; JP_F_00121728(c);
SET64(31, 0x13e70c); SET64(4, RD(2) + RD(0)); JP_F_0011EE20(c);
{ int t = RD(2) != RD(0);  if (t) goto L_0013E728; }
c->f[0].u = rd32(c, (RW(28) + -32720));
c->fcc = F(23) < F(0);
if (c->fcc) { c->f[20].u = c->f[20].u ^ 0x80000000u; goto L_0013E724; }
L_0013E724:;
c->f[21].u = c->f[20].u;
L_0013E728:;
wr32(c, (RW(16) + 0), c->f[21].u);
L_0013E72C:;
wr32(c, (RW(16) + 4), c->f[22].u);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 128); return;
}

void JP_F_0013E750(Ctx *c) { /* func_0013E750 */
ENTER(0x13e750);
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[1].u = rd32(c, (RW(4) + 0));
c->fcc = F(1) < F(0);
if (!c->fcc) { c->f[0].u = rd32(c, (RW(6) + 0)); goto L_0013E76C; }
 goto L_0013E780;
L_0013E76C:;
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].u = c->f[1].u; goto L_0013E780; }
 goto L_0013E780;
L_0013E780:;
 return;
}

void JP_F_0013E790(Ctx *c) { /* func_0013E790 */
ENTER(0x13e790);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x13e7a0);  JP_F_002B0230(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0013E7B0(Ctx *c) { /* func_0013E7B0 */
ENTER(0x13e7b0);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 32), RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 36), RW(0));
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 40), RW(0));
wr32(c, (RW(29) + 44), RW(2));
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
SET64(31, 0x13e7e4); wr128(c, (RW(29) + 32) & ~15u, &c->r[2]); JP_F_002B0360(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 12), RW(3));
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0013E810(Ctx *c) { /* func_0013E810 */
ENTER(0x13e810);
wr32(c, (RW(4) + 0), c->f[12].u);
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), c->f[13].u);
wr32(c, (RW(4) + 8), c->f[14].u);
wr32(c, (RW(4) + 12), c->f[15].u); return;
}

void JP_F_0013E830(Ctx *c) { /* func_0013E830 */
ENTER(0x13e830);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x13e844); SET64(16, RD(4) + RD(0)); JP_F_002C81A0(c);
SET64(5, (s16)rd16(c, (RW(16) + 0)));
SET64(31, 0x13e850); SET64(4, RD(2) + RD(0)); JP_F_002C8360(c);
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0013E924; }
SET64(31, 0x13e860);  JP_F_002C81A0(c);
SET64(5, (s16)rd16(c, (RW(16) + 0)));
SET64(31, 0x13e86c); SET64(4, RD(2) + RD(0)); JP_F_002C8360(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0013E8E0; }
SET64(2, (s32)rd32(c, (RW(16) + 220)));
{ int t = RD(2) == RD(0);  if (t) goto L_0013E8E0; }
c->f[0].u = RW(0);
c->fcc = F(0) <= F(0);
{ int t = c->fcc; wr32(c, (RW(16) + 212), RW(0)); if (t) goto L_0013E8CC; }
SET64(31, 0x13e89c);  JP_F_002C81A0(c);
SET64(5, (s16)rd16(c, (RW(16) + 0)));
SET64(31, 0x13e8a8); SET64(4, RD(2) + RD(0)); JP_F_002C8360(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0013E8E0; }
SET64(4, (s32)rd32(c, (RW(16) + 220)));
SET64(31, 0x13e8bc); SET32(5, RW(0) + 1); JP_F_002B5910(c);
SET64(31, 0x13e8c4); SET64(4, (s32)rd32(c, (RW(16) + 220))); JP_F_002B59D0(c);
 goto L_0013E8E0;
L_0013E8CC:;
SET64(4, (s32)rd32(c, (RW(16) + 220)));
SET64(31, 0x13e8d8); SET64(5, RD(0) + RD(0)); JP_F_002B5910(c);
SET64(31, 0x13e8e0); SET64(4, (s32)rd32(c, (RW(16) + 220))); JP_F_002B5970(c);
L_0013E8E0:;
SET64(31, 0x13e8e8);  JP_F_002C81A0(c);
SET64(5, (s16)rd16(c, (RW(16) + 0)));
SET64(31, 0x13e8f4); SET64(4, RD(2) + RD(0)); JP_F_002C8360(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0013E920; }
SET64(3, (s32)rd32(c, (RW(16) + 220)));
{ int t = RD(3) == RD(0);  if (t) goto L_0013E920; }
wr32(c, (RW(16) + 216), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 220)));
SET64(31, 0x13e918); SET64(5, RD(0) + RD(0)); JP_F_002B58B0(c);
SET64(31, 0x13e920); SET64(4, (s32)rd32(c, (RW(16) + 220))); JP_F_002B5970(c);
L_0013E920:;
SET64(31, rd64(c, (RW(29) + 16)));
L_0013E924:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0013E930(Ctx *c) { /* func_0013E930 */
ENTER(0x13e930);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x13e944); SET64(16, RD(4) + RD(0)); JP_F_002C81A0(c);
SET64(5, (s16)rd16(c, (RW(16) + 0)));
SET64(31, 0x13e950); SET64(4, RD(2) + RD(0)); JP_F_002C8360(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0013E978; }
SET64(4, (s32)rd32(c, (RW(16) + 220)));
{ int t = RD(4) == RD(0);  if (t) goto L_0013E974; }
SET64(31, 0x13e96c);  JP_F_002B58A0(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0013E97C;
L_0013E974:;
SET64(2, RD(0) + RD(0));
L_0013E978:;
SET64(31, rd64(c, (RW(29) + 16)));
L_0013E97C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0013E990(Ctx *c) { /* func_0013E990 */
ENTER(0x13e990);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x13e9b4); c->f[20].u = c->f[12].u; JP_F_002C81A0(c);
SET64(5, (s16)rd16(c, (RW(17) + 0)));
SET64(31, 0x13e9c0); SET64(4, RD(2) + RD(0)); JP_F_002C8360(c);
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_0013EA24; }
SET64(3, (s32)rd32(c, (RW(17) + 220)));
{ int t = RD(3) == RD(0);  if (t) goto L_0013EA20; }
wr32(c, (RW(17) + 216), c->f[20].u);
SET64(4, (s32)rd32(c, (RW(17) + 220)));
SET64(31, 0x13e9e4); SET64(5, RD(16) & 0xff); JP_F_002B58B0(c);
if (RD(16) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 220))); goto L_0013EA18; }
SET64(31, 0x13e9f4);  JP_F_002C81A0(c);
SET64(5, (s16)rd16(c, (RW(17) + 0)));
SET64(31, 0x13ea00); SET64(4, RD(2) + RD(0)); JP_F_002C8360(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0013EA20; }
SET64(31, 0x13ea10); SET64(4, (s32)rd32(c, (RW(17) + 220))); JP_F_002B59D0(c);
 goto L_0013EA20;
L_0013EA18:;
SET64(31, 0x13ea20);  JP_F_002B5970(c);
L_0013EA20:;
SET64(31, rd64(c, (RW(29) + 48)));
L_0013EA24:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0013EA40(Ctx *c) { /* func_0013EA40 */
ENTER(0x13ea40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x13ea5c); c->f[20].u = c->f[12].u; JP_F_002C81A0(c);
SET64(5, (s16)rd16(c, (RW(16) + 0)));
SET64(31, 0x13ea68); SET64(4, RD(2) + RD(0)); JP_F_002C8360(c);
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0013EAE0; }
SET64(3, (s32)rd32(c, (RW(16) + 220)));
{ int t = RD(3) == RD(0);  if (t) goto L_0013EADC; }
c->f[0].u = RW(0);
c->fcc = F(20) <= F(0);
{ int t = c->fcc; wr32(c, (RW(16) + 212), c->f[20].u); if (t) goto L_0013EAC8; }
SET64(31, 0x13ea98);  JP_F_002C81A0(c);
SET64(5, (s16)rd16(c, (RW(16) + 0)));
SET64(31, 0x13eaa4); SET64(4, RD(2) + RD(0)); JP_F_002C8360(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0013EADC; }
SET64(4, (s32)rd32(c, (RW(16) + 220)));
SET64(31, 0x13eab8); SET32(5, RW(0) + 1); JP_F_002B5910(c);
SET64(31, 0x13eac0); SET64(4, (s32)rd32(c, (RW(16) + 220))); JP_F_002B59D0(c);
 goto L_0013EADC;
L_0013EAC8:;
SET64(4, (s32)rd32(c, (RW(16) + 220)));
SET64(31, 0x13ead4); SET64(5, RD(0) + RD(0)); JP_F_002B5910(c);
SET64(31, 0x13eadc); SET64(4, (s32)rd32(c, (RW(16) + 220))); JP_F_002B5970(c);
L_0013EADC:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0013EAE0:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0013EAF0(Ctx *c) { /* func_0013EAF0 */
ENTER(0x13eaf0);
SET64(3, rd16(c, (RW(4) + 8)));
SET64(3, RD(3) | RD(5));
wr16(c, (RW(4) + 8), (u16)RW(3));
SET64(6, (s32)rd32(c, (RW(4) + 20)));
SET64(4, rd16(c, (RW(4) + 24)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(4, RW(3) + RW(6));
SET64(3, rd16(c, (RW(4) + 2)));
SET64(3, RD(3) | RD(5));
wr16(c, (RW(4) + 2), (u16)RW(3)); return;
}

void JP_F_0013EB30(Ctx *c) { /* func_0013EB30 */
ENTER(0x13eb30);
SET64(3, rd16(c, (RW(4) + 6)));
SET64(3, RD(3) | RD(5));
wr16(c, (RW(4) + 6), (u16)RW(3));
SET64(6, rd16(c, (RW(4) + 24)));
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(6) << 1);
SET32(4, RW(4) + RW(6));
SET32(4, RW(4) << 1);
SET32(4, RW(3) + RW(4));
SET64(3, rd16(c, (RW(4) + 0)));
SET64(3, RD(3) | RD(5));
wr16(c, (RW(4) + 0), (u16)RW(3)); return;
}

void JP_F_0013EB70(Ctx *c) { /* func_0013EB70 */
ENTER(0x13eb70);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 3), (u8)RW(0));
SET64(16, (s16)rd16(c, (RW(4) + 0)));
{ int t = RSD(16) < 0; SET64(17, RD(4) + RD(0)); if (t) goto L_0013F250; }
SET64(31, 0x13eb9c);  JP_F_002A7400(c);
SET64(5, RD(16) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x13ebac); SET64(6, RD(0) + RD(0)); JP_F_002A7090(c);
SET64(16, RD(2) + RD(0));
if (RD(16) == RD(0)) { SET64(3, rd8(c, (RW(17) + 3))); goto L_0013F254; }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x13ebc8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
if (RD(2) == RD(0)) { wr8(c, (RW(17) + 2), (u8)RW(0)); goto L_0013F128; }
SET64(3, rd8(c, (RW(17) + 2)));
if (RD(3) != RD(0)) { SET64(18, rd16(c, (RW(17) + 6))); goto L_0013EBE8; }
SET32(3, RW(0) + 1);
wr8(c, (RW(17) + 2), (u8)RW(3)); goto L_0013F128;
L_0013EBE8:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x13ebf4); SET64(5, RD(0) + RD(0)); JP_F_002A78F0(c);
wr16(c, (RW(17) + 6), (u16)RW(2));
SET64(6, RD(18) & 0xffff);
SET64(2, (s64)(s32)0x3ecc0000);
SET64(3, rd16(c, (RW(17) + 6)));
SET64(2, RD(2) | 0xcccd);
SET64(4, RD(16) + RD(0));
c->f[12].u = RW(2);
SET32(5, RW(0) + 6);
SET64(2, RD(3) ^ RD(6));
SET64(2, RD(3) & RD(2));
wr16(c, (RW(17) + 8), (u16)RW(2));
SET64(3, rd16(c, (RW(17) + 6)));
SET64(2, RD(3) ^ RD(6));
SET64(3, ~(RD(3) | RD(0)));
SET64(2, RD(3) & RD(2));
SET64(31, 0x13ec38); wr16(c, (RW(17) + 10), (u16)RW(2)); JP_F_002A7620(c);
SET64(2, (s64)(s32)0x3ecc0000);
SET64(4, RD(16) + RD(0));
SET64(2, RD(2) | 0xcccd);
SET32(5, RW(0) + 7);
c->f[12].u = RW(2);
SET64(31, 0x13ec54); wr32(c, (RW(17) + 28), c->f[0].u); JP_F_002A7620(c);
SET64(2, (s64)(s32)0x3ecc0000);
SET64(4, RD(16) + RD(0));
SET64(2, RD(2) | 0xcccd);
SET32(5, RW(0) + 4);
c->f[12].u = RW(2);
SET64(31, 0x13ec70); wr32(c, (RW(17) + 32), c->f[0].u); JP_F_002A7620(c);
SET64(2, (s64)(s32)0x3ecc0000);
SET64(4, RD(16) + RD(0));
SET64(2, RD(2) | 0xcccd);
SET32(5, RW(0) + 5);
c->f[12].u = RW(2);
SET64(31, 0x13ec8c); wr32(c, (RW(17) + 36), c->f[0].u); JP_F_002A7620(c);
wr32(c, (RW(17) + 40), c->f[0].u);
SET64(31, 0x13ec98); SET64(4, RD(17) + RD(0)); JP_F_0013F360(c);
SET64(2, rd8(c, (RW(17) + 4)));
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_0013EF40; }
SET64(3, rd8(c, (RW(17) + 60)));
SET32(2, RW(0) + 8);
SET64(3, RD(3) & 0x1);
{ int t = RD(3) == RD(2); SET64(5, RD(0) + RD(0)); if (t) goto L_0013ECE4; }
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)128); goto L_0013ECE8; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)64); goto L_0013ECE8; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)16); goto L_0013ECE8; }
SET64(3, rd16(c, (RW(17) + 6))); goto L_0013ECEC;
L_0013ECE4:;
SET64(5, RD(0) + (s64)32);
L_0013ECE8:;
SET64(3, rd16(c, (RW(17) + 6)));
L_0013ECEC:;
SET32(2, RW(0) + 8);
SET64(3, RD(3) | RD(5));
wr16(c, (RW(17) + 6), (u16)RW(3));
SET64(3, rd8(c, (RW(17) + 60)));
SET64(3, RD(3) & 0x2);
SET64(3, RD(3) & 0xff);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_0013ED38; }
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)128); goto L_0013ED3C; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)64); goto L_0013ED3C; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)16); goto L_0013ED3C; }
SET64(3, rd16(c, (RW(17) + 6))); goto L_0013ED40;
L_0013ED38:;
SET64(4, RD(0) + (s64)32);
L_0013ED3C:;
SET64(3, rd16(c, (RW(17) + 6)));
L_0013ED40:;
SET32(2, RW(0) + 8);
SET64(3, RD(3) | RD(4));
wr16(c, (RW(17) + 6), (u16)RW(3));
SET64(3, rd8(c, (RW(17) + 60)));
SET64(3, RD(3) & 0x4);
SET64(3, RD(3) & 0xff);
{ int t = RD(3) == RD(2); SET64(5, RD(0) + RD(0)); if (t) goto L_0013ED8C; }
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)128); goto L_0013ED90; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)64); goto L_0013ED90; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)16); goto L_0013ED90; }
SET64(3, rd16(c, (RW(17) + 6))); goto L_0013ED94;
L_0013ED8C:;
SET64(5, RD(0) + (s64)32);
L_0013ED90:;
SET64(3, rd16(c, (RW(17) + 6)));
L_0013ED94:;
SET32(2, RW(0) + 8);
SET64(3, RD(3) | RD(5));
wr16(c, (RW(17) + 6), (u16)RW(3));
SET64(3, rd8(c, (RW(17) + 60)));
SET64(3, RD(3) & 0x8);
SET64(3, RD(3) & 0xff);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_0013EDE0; }
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)128); goto L_0013EDE4; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)64); goto L_0013EDE4; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)16); goto L_0013EDE4; }
SET64(3, rd16(c, (RW(17) + 6))); goto L_0013EDE8;
L_0013EDE0:;
SET64(4, RD(0) + (s64)32);
L_0013EDE4:;
SET64(3, rd16(c, (RW(17) + 6)));
L_0013EDE8:;
SET32(2, RW(0) + 8);
SET64(3, RD(3) | RD(4));
wr16(c, (RW(17) + 6), (u16)RW(3));
SET64(3, rd8(c, (RW(17) + 61)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) == RD(2); SET64(5, RD(0) + RD(0)); if (t) goto L_0013EE30; }
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)128); goto L_0013EE34; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)64); goto L_0013EE34; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)16); goto L_0013EE34; }
SET64(3, rd16(c, (RW(17) + 8))); goto L_0013EE38;
L_0013EE30:;
SET64(5, RD(0) + (s64)32);
L_0013EE34:;
SET64(3, rd16(c, (RW(17) + 8)));
L_0013EE38:;
SET32(2, RW(0) + 8);
SET64(3, RD(3) | RD(5));
wr16(c, (RW(17) + 8), (u16)RW(3));
SET64(3, rd8(c, (RW(17) + 61)));
SET64(3, RD(3) & 0x2);
SET64(3, RD(3) & 0xff);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_0013EE84; }
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)128); goto L_0013EE88; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)64); goto L_0013EE88; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)16); goto L_0013EE88; }
SET64(3, rd16(c, (RW(17) + 8))); goto L_0013EE8C;
L_0013EE84:;
SET64(4, RD(0) + (s64)32);
L_0013EE88:;
SET64(3, rd16(c, (RW(17) + 8)));
L_0013EE8C:;
SET32(2, RW(0) + 8);
SET64(3, RD(3) | RD(4));
wr16(c, (RW(17) + 8), (u16)RW(3));
SET64(3, rd8(c, (RW(17) + 61)));
SET64(3, RD(3) & 0x4);
SET64(3, RD(3) & 0xff);
{ int t = RD(3) == RD(2); SET64(5, RD(0) + RD(0)); if (t) goto L_0013EED8; }
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)128); goto L_0013EEDC; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)64); goto L_0013EEDC; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(5, RD(0) + (s64)16); goto L_0013EEDC; }
SET64(3, rd16(c, (RW(17) + 8))); goto L_0013EEE0;
L_0013EED8:;
SET64(5, RD(0) + (s64)32);
L_0013EEDC:;
SET64(3, rd16(c, (RW(17) + 8)));
L_0013EEE0:;
SET32(2, RW(0) + 8);
SET64(3, RD(3) | RD(5));
wr16(c, (RW(17) + 8), (u16)RW(3));
SET64(3, rd8(c, (RW(17) + 61)));
SET64(3, RD(3) & 0x8);
SET64(3, RD(3) & 0xff);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_0013EF2C; }
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)128); goto L_0013EF30; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)64); goto L_0013EF30; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(4, RD(0) + (s64)16); goto L_0013EF30; }
SET64(2, rd16(c, (RW(17) + 8))); goto L_0013EF34;
L_0013EF2C:;
SET64(4, RD(0) + (s64)32);
L_0013EF30:;
SET64(2, rd16(c, (RW(17) + 8)));
L_0013EF34:;
SET64(2, RD(2) | RD(4));
wr16(c, (RW(17) + 8), (u16)RW(2));
SET64(4, RD(17) + RD(0));
L_0013EF40:;
SET64(31, 0x13ef48);  JP_F_0013FCF0(c);
SET64(31, 0x13ef50); SET64(4, RD(17) + RD(0)); JP_F_0013FAE0(c);
SET64(31, 0x13ef58); SET64(4, RD(17) + RD(0)); JP_F_0013F4E0(c);
SET64(2, (s64)(s32)0x530000);
c->f[1].u = rd32(c, (RW(2) + -22384));
c->f[0].u = RW(0);
c->fcc = F(1) == F(0);
{ int t = c->fcc;  if (t) goto L_0013F0D8; }
SET64(5, rd16(c, (RW(17) + 24)));
SET64(3, (s32)rd32(c, (RW(17) + 20)));
SET64(7, rd16(c, (RW(17) + 10)));
SET32(4, RW(5) << 1);
SET64(6, rd16(c, (RW(17) + 8)));
SET32(4, RW(4) + RW(5));
SET64(2, rd16(c, (RW(17) + 6)));
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(4));
wr16(c, (RW(3) + 0), (u16)RW(2));
wr16(c, (RW(3) + 2), (u16)RW(6));
wr16(c, (RW(3) + 4), (u16)RW(7));
SET64(2, rd16(c, (RW(17) + 24)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 24), (u16)RW(2));
SET64(3, RD(2) & 0xffff);
SET64(2, rd16(c, (RW(17) + 16)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(17) + 24))); goto L_0013EFCC; }
wr16(c, (RW(17) + 24), (u16)RW(0));
SET64(3, rd16(c, (RW(17) + 24)));
L_0013EFCC:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
SET64(4, (s32)rd32(c, (RW(17) + 20)));
c->fcc = F(1) <= F(0);
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(4));
wr16(c, (RW(2) + 4), (u16)RW(0));
SET64(3, rd16(c, (RW(17) + 24)));
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(4));
wr16(c, (RW(2) + 2), (u16)RW(0));
SET64(4, rd16(c, (RW(17) + 24)));
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
{ int t = c->fcc; wr16(c, (RW(2) + 0), (u16)RW(0)); if (t) goto L_0013F0D8; }
L_0013F02C:;
SET64(5, rd16(c, (RW(17) + 24)));
SET64(3, (s32)rd32(c, (RW(17) + 20)));
SET64(2, rd16(c, (RW(17) + 6)));
SET32(4, RW(5) << 1);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(4));
wr16(c, (RW(3) + 0), (u16)RW(2));
wr16(c, (RW(3) + 2), (u16)RW(0));
wr16(c, (RW(3) + 4), (u16)RW(0));
SET64(2, rd16(c, (RW(17) + 24)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 24), (u16)RW(2));
SET64(3, RD(2) & 0xffff);
SET64(2, rd16(c, (RW(17) + 16)));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0); c->f[1].f = fpu(F(1) - F(0)); if (t) goto L_0013F078; }
wr16(c, (RW(17) + 24), (u16)RW(0));
L_0013F078:;
SET64(4, rd16(c, (RW(17) + 24)));
SET64(2, (s32)rd32(c, (RW(17) + 20)));
c->fcc = F(1) <= F(0);
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
wr16(c, (RW(2) + 4), (u16)RW(0));
SET64(4, rd16(c, (RW(17) + 24)));
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
wr16(c, (RW(2) + 2), (u16)RW(0));
SET64(4, rd16(c, (RW(17) + 24)));
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
{ int t = !c->fcc; wr16(c, (RW(2) + 0), (u16)RW(0)); if (t) { POLL(); goto L_0013F02C; } }
L_0013F0D8:;
c->f[12].u = rd32(c, (RW(17) + 28));
c->f[13].u = rd32(c, (RW(17) + 32));
SET64(31, 0x13f0e8); SET32(4, RW(29) + 72); JP_F_0013E610(c);
c->f[0].u = rd32(c, (RW(29) + 72));
wr32(c, (RW(17) + 44), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 76));
wr32(c, (RW(17) + 48), c->f[0].u);
c->f[12].u = rd32(c, (RW(17) + 36));
c->f[13].u = rd32(c, (RW(17) + 40));
SET64(31, 0x13f108); SET32(4, RW(29) + 64); JP_F_0013E610(c);
c->f[0].u = rd32(c, (RW(29) + 64));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 52), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 68));
SET64(31, 0x13f120); wr32(c, (RW(17) + 56), c->f[0].u); JP_F_0013F280(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(17) + 3), (u8)RW(3));
L_0013F128:;
c->f[2].u = rd32(c, (RW(17) + 212));
c->f[1].u = RW(0);
c->fcc = F(2) <= F(1);
if (c->fcc) { c->f[2].u = rd32(c, (RW(17) + 216)); goto L_0013F1E4; }
SET64(3, (s64)(s32)0x530000);
c->f[0].u = rd32(c, (RW(3) + -22428));
c->f[0].f = fpu(F(2) - F(0));
c->fcc = F(0) <= F(1);
{ int t = !c->fcc; wr32(c, (RW(17) + 212), c->f[0].u); if (t) goto L_0013F1E0; }
SET64(31, 0x13f160);  JP_F_002C81A0(c);
SET64(5, (s16)rd16(c, (RW(17) + 0)));
SET64(31, 0x13f16c); SET64(4, RD(2) + RD(0)); JP_F_002C8360(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0013F1E0; }
SET64(3, (s32)rd32(c, (RW(17) + 220)));
{ int t = RD(3) == RD(0);  if (t) goto L_0013F1E0; }
c->f[0].u = RW(0);
c->fcc = F(0) <= F(0);
{ int t = c->fcc; wr32(c, (RW(17) + 212), RW(0)); if (t) goto L_0013F1CC; }
SET64(31, 0x13f19c);  JP_F_002C81A0(c);
SET64(5, (s16)rd16(c, (RW(17) + 0)));
SET64(31, 0x13f1a8); SET64(4, RD(2) + RD(0)); JP_F_002C8360(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0013F1E0; }
SET64(4, (s32)rd32(c, (RW(17) + 220)));
SET64(31, 0x13f1bc); SET32(5, RW(0) + 1); JP_F_002B5910(c);
SET64(31, 0x13f1c4); SET64(4, (s32)rd32(c, (RW(17) + 220))); JP_F_002B59D0(c);
 goto L_0013F1E0;
L_0013F1CC:;
SET64(4, (s32)rd32(c, (RW(17) + 220)));
SET64(31, 0x13f1d8); SET64(5, RD(0) + RD(0)); JP_F_002B5910(c);
SET64(31, 0x13f1e0); SET64(4, (s32)rd32(c, (RW(17) + 220))); JP_F_002B5970(c);
L_0013F1E0:;
c->f[2].u = rd32(c, (RW(17) + 216));
L_0013F1E4:;
c->f[1].u = RW(0);
c->fcc = F(2) <= F(1);
{ int t = c->fcc;  if (t) goto L_0013F250; }
SET64(3, (s64)(s32)0x530000);
c->f[0].u = rd32(c, (RW(3) + -22428));
c->f[0].f = fpu(F(2) - F(0));
c->fcc = F(0) <= F(1);
{ int t = !c->fcc; wr32(c, (RW(17) + 216), c->f[0].u); if (t) goto L_0013F250; }
SET64(31, 0x13f218);  JP_F_002C81A0(c);
SET64(5, (s16)rd16(c, (RW(17) + 0)));
SET64(31, 0x13f224); SET64(4, RD(2) + RD(0)); JP_F_002C8360(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0013F250; }
SET64(3, (s32)rd32(c, (RW(17) + 220)));
{ int t = RD(3) == RD(0);  if (t) goto L_0013F250; }
wr32(c, (RW(17) + 216), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 220)));
SET64(31, 0x13f248); SET64(5, RD(0) + RD(0)); JP_F_002B58B0(c);
SET64(31, 0x13f250); SET64(4, (s32)rd32(c, (RW(17) + 220))); JP_F_002B5970(c);
L_0013F250:;
SET64(3, rd8(c, (RW(17) + 3)));
L_0013F254:;
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_0013F268; }
SET64(31, 0x13f264); SET64(4, RD(17) + RD(0)); JP_F_0013FDA0(c);
SET64(31, rd64(c, (RW(29) + 48)));
L_0013F268:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_0013F280(Ctx *c) { /* func_0013F280 */
ENTER(0x13f280);
SET64(3, (s64)(s32)0x3dcc0000);
SET64(3, RD(3) | 0xcccd);
c->f[1].u = rd32(c, (RW(4) + 56));
c->f[0].u = RW(3);
c->fcc = F(1) <= F(0);
if (c->fcc) { wr8(c, (RW(4) + 63), (u8)RW(0)); goto L_0013F34C; }
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(3, rd8(c, (RW(4) + 63))); goto L_0013F2C8; }
SET64(3, rd8(c, (RW(4) + 63)));
SET64(3, RD(3) | 0x40);
wr8(c, (RW(4) + 63), (u8)RW(3)); goto L_0013F2D0;
L_0013F2C8:;
SET64(3, RD(3) | 0x80);
wr8(c, (RW(4) + 63), (u8)RW(3));
L_0013F2D0:;
c->f[1].u = rd32(c, (RW(4) + 40));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(3, rd8(c, (RW(4) + 63))); goto L_0013F2F8; }
SET64(3, rd8(c, (RW(4) + 63)));
SET64(3, RD(3) | 0x10);
wr8(c, (RW(4) + 63), (u8)RW(3)); goto L_0013F300;
L_0013F2F8:;
SET64(3, RD(3) | 0x20);
wr8(c, (RW(4) + 63), (u8)RW(3));
L_0013F300:;
SET64(5, rd8(c, (RW(4) + 63)));
SET32(3, RW(0) + 48);
if (RD(5) == RD(3)) { wr8(c, (RW(4) + 63), (u8)RW(0)); goto L_0013F34C; }
SET32(3, RW(0) + 192);
if (RD(5) != RD(3)) { SET32(3, RW(0) + 240); goto L_0013F328; }
wr8(c, (RW(4) + 63), (u8)RW(0));
 goto L_0013F34C;
L_0013F328:;
{ int t = RD(5) != RD(3);  if (t) goto L_0013F34C; }
SET64(3, rd8(c, (RW(4) + 62)));
SET64(1, RSD(3) < (s64)255);
if (RD(1) == RD(0)) { wr8(c, (RW(4) + 63), (u8)RW(0)); goto L_0013F34C; }
SET32(3, RW(3) + 1);
wr8(c, (RW(4) + 62), (u8)RW(3));
wr8(c, (RW(4) + 63), (u8)RW(0));
L_0013F34C:;
 return;
}

void JP_F_0013F360(Ctx *c) { /* func_0013F360 */
ENTER(0x13f360);
SET64(3, rd8(c, (RW(4) + 60)));
SET64(5, (s64)(s32)0xbecc0000);
SET64(5, RD(5) | 0xcccd);
c->f[0].u = RW(5);
wr8(c, (RW(4) + 60), (u8)RW(0));
c->f[1].u = rd32(c, (RW(4) + 28));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(5, (s64)(s32)0x3ecc0000); goto L_0013F394; }
SET64(5, rd8(c, (RW(4) + 60)));
SET64(5, RD(5) | 0x4);
wr8(c, (RW(4) + 60), (u8)RW(5));
SET64(5, (s64)(s32)0x3ecc0000);
L_0013F394:;
SET64(5, RD(5) | 0xcccd);
c->f[1].u = rd32(c, (RW(4) + 28));
c->f[0].u = RW(5);
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(5, (s64)(s32)0xbecc0000); goto L_0013F3C0; }
SET64(5, rd8(c, (RW(4) + 60)));
SET64(5, RD(5) | 0x8);
wr8(c, (RW(4) + 60), (u8)RW(5));
SET64(5, (s64)(s32)0xbecc0000);
L_0013F3C0:;
SET64(5, RD(5) | 0xcccd);
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[0].u = RW(5);
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(5, (s64)(s32)0x3ecc0000); goto L_0013F3EC; }
SET64(5, rd8(c, (RW(4) + 60)));
SET64(5, RD(5) | 0x40);
wr8(c, (RW(4) + 60), (u8)RW(5));
SET64(5, (s64)(s32)0x3ecc0000);
L_0013F3EC:;
SET64(5, RD(5) | 0xcccd);
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[0].u = RW(5);
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(5, (s64)(s32)0xbecc0000); goto L_0013F418; }
SET64(5, rd8(c, (RW(4) + 60)));
SET64(5, RD(5) | 0x80);
wr8(c, (RW(4) + 60), (u8)RW(5));
SET64(5, (s64)(s32)0xbecc0000);
L_0013F418:;
SET64(5, RD(5) | 0xcccd);
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[0].u = RW(5);
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(5, (s64)(s32)0x3ecc0000); goto L_0013F444; }
SET64(5, rd8(c, (RW(4) + 60)));
SET64(5, RD(5) | 0x1);
wr8(c, (RW(4) + 60), (u8)RW(5));
SET64(5, (s64)(s32)0x3ecc0000);
L_0013F444:;
SET64(5, RD(5) | 0xcccd);
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[0].u = RW(5);
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(5, (s64)(s32)0xbecc0000); goto L_0013F470; }
SET64(5, rd8(c, (RW(4) + 60)));
SET64(5, RD(5) | 0x2);
wr8(c, (RW(4) + 60), (u8)RW(5));
SET64(5, (s64)(s32)0xbecc0000);
L_0013F470:;
SET64(5, RD(5) | 0xcccd);
c->f[1].u = rd32(c, (RW(4) + 40));
c->f[0].u = RW(5);
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(5, (s64)(s32)0x3ecc0000); goto L_0013F49C; }
SET64(5, rd8(c, (RW(4) + 60)));
SET64(5, RD(5) | 0x10);
wr8(c, (RW(4) + 60), (u8)RW(5));
SET64(5, (s64)(s32)0x3ecc0000);
L_0013F49C:;
SET64(5, RD(5) | 0xcccd);
c->f[1].u = rd32(c, (RW(4) + 40));
c->f[0].u = RW(5);
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(5, rd8(c, (RW(4) + 60))); goto L_0013F4C8; }
SET64(5, rd8(c, (RW(4) + 60)));
SET64(5, RD(5) | 0x20);
wr8(c, (RW(4) + 60), (u8)RW(5));
SET64(5, rd8(c, (RW(4) + 60)));
L_0013F4C8:;
SET64(3, RD(3) & 0xff);
SET64(3, RD(5) ^ RD(3));
SET64(3, RD(5) & RD(3));
wr8(c, (RW(4) + 61), (u8)RW(3)); return;
}

static void JP_B_0013F4E0(Ctx *c, u32 entry) { /* func_0013F4E0 */
ENTER(entry);
switch (entry) { case 0x13f580: goto L_0013F580; case 0x13f5f0: goto L_0013F5F0; case 0x13f660: goto L_0013F660; case 0x13f6d0: goto L_0013F6D0; case 0x13f740: goto L_0013F740; case 0x13f7b0: goto L_0013F7B0; case 0x13f820: goto L_0013F820; case 0x13f890: goto L_0013F890; case 0x13f900: goto L_0013F900; case 0x13f970: goto L_0013F970; case 0x13f9e0: goto L_0013F9E0; case 0x13fa50: goto L_0013FA50; }
L_0013F4E0:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x13f4f8); SET64(16, RD(4) + RD(0)); JP_F_00139590(c);
SET64(2, rd8(c, (RW(2) + 32)));
if (RD(2) == RD(0)) { SET32(17, RW(0) + 1); goto L_0013F508; }
SET32(17, RW(0) + 2);
L_0013F508:;
SET64(31, 0x13f510);  JP_F_002C2AA0(c);
SET64(3, (s64)(s32)0x42700000);
SET64(6, (s64)(s32)0x3f800000);
c->f[2].u = RW(3);
SET64(4, (s64)(s32)0x447a0000);
c->f[2].f = fpu_div(F(2), F(0));
SET64(3, (s64)(s32)0x3f590000);
SET64(3, RD(3) | 0x999a);
SET64(5, RD(0) + RD(0));
c->f[1].u = RW(17);
c->f[0].f = (f32)(s32)c->f[1].u;
c->f[4].f = fpu(F(2) * F(0));
c->f[0].u = RW(3);
SET64(3, (s64)(s32)0x420000);
SET32(3, RW(3) + -3152);
c->f[2].u = RW(6);
c->f[1].u = RW(4);
c->f[3].u = RW(0);
SET64(4, RD(5) & 0xffff);
L_0013F55C:;
SET64(1, RD(4) < (u64)(s64)12);
{ int t = RD(1) == RD(0);  if (t) goto L_0013FAB8; }
SET32(6, RW(4) << 2);
SET32(6, RW(6) + RW(3));
SET64(6, (s32)rd32(c, (RW(6) + 0)));
{ u32 t = RW(6);  switch (t) { case 0x13f4e0: goto L_0013F4E0; case 0x13f580: goto L_0013F580; case 0x13f5f0: goto L_0013F5F0; case 0x13f660: goto L_0013F660; case 0x13f6d0: goto L_0013F6D0; case 0x13f740: goto L_0013F740; case 0x13f7b0: goto L_0013F7B0; case 0x13f820: goto L_0013F820; case 0x13f890: goto L_0013F890; case 0x13f900: goto L_0013F900; case 0x13f970: goto L_0013F970; case 0x13f9e0: goto L_0013F9E0; case 0x13fa50: goto L_0013FA50; default: rt_jump(c, t); return; } }
L_0013F580:;
SET64(6, rd16(c, (RW(16) + 8)));
SET64(6, RD(6) & 0x10);
{ int t = RD(6) == RD(0);  if (t) goto L_0013F5C8; }
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->fcc = F(5) == F(3);
{ int t = c->fcc; wr32(c, (RW(4) + 116), RW(0)); if (t) goto L_0013FAB8; }
c->f[6].f = fpu_div(F(2), F(5));
c->f[5].u = rd32(c, (RW(4) + 120));
c->facc = fpu(F(3) + F(5));
c->f[5].f = fpu(c->facc + F(1) * F(6));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F5C8:;
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->f[5].f = fpu(F(5) + F(4));
wr32(c, (RW(4) + 116), c->f[5].u);
c->f[5].u = rd32(c, (RW(4) + 120));
c->f[5].f = fpu(F(5) * F(0));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F5F0:;
SET64(6, rd16(c, (RW(16) + 8)));
SET64(6, RD(6) & 0x40);
{ int t = RD(6) == RD(0);  if (t) goto L_0013F638; }
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->fcc = F(5) == F(3);
{ int t = c->fcc; wr32(c, (RW(4) + 116), RW(0)); if (t) goto L_0013FAB8; }
c->f[6].f = fpu_div(F(2), F(5));
c->f[5].u = rd32(c, (RW(4) + 120));
c->facc = fpu(F(3) + F(5));
c->f[5].f = fpu(c->facc + F(1) * F(6));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F638:;
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->f[5].f = fpu(F(5) + F(4));
wr32(c, (RW(4) + 116), c->f[5].u);
c->f[5].u = rd32(c, (RW(4) + 120));
c->f[5].f = fpu(F(5) * F(0));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F660:;
SET64(6, rd16(c, (RW(16) + 8)));
SET64(6, RD(6) & 0x80);
{ int t = RD(6) == RD(0);  if (t) goto L_0013F6A8; }
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->fcc = F(5) == F(3);
{ int t = c->fcc; wr32(c, (RW(4) + 116), RW(0)); if (t) goto L_0013FAB8; }
c->f[6].f = fpu_div(F(2), F(5));
c->f[5].u = rd32(c, (RW(4) + 120));
c->facc = fpu(F(3) + F(5));
c->f[5].f = fpu(c->facc + F(1) * F(6));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F6A8:;
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->f[5].f = fpu(F(5) + F(4));
wr32(c, (RW(4) + 116), c->f[5].u);
c->f[5].u = rd32(c, (RW(4) + 120));
c->f[5].f = fpu(F(5) * F(0));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F6D0:;
SET64(6, rd16(c, (RW(16) + 8)));
SET64(6, RD(6) & 0x20);
{ int t = RD(6) == RD(0);  if (t) goto L_0013F718; }
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->fcc = F(5) == F(3);
{ int t = c->fcc; wr32(c, (RW(4) + 116), RW(0)); if (t) goto L_0013FAB8; }
c->f[6].f = fpu_div(F(2), F(5));
c->f[5].u = rd32(c, (RW(4) + 120));
c->facc = fpu(F(3) + F(5));
c->f[5].f = fpu(c->facc + F(1) * F(6));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F718:;
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->f[5].f = fpu(F(5) + F(4));
wr32(c, (RW(4) + 116), c->f[5].u);
c->f[5].u = rd32(c, (RW(4) + 120));
c->f[5].f = fpu(F(5) * F(0));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F740:;
SET64(6, rd16(c, (RW(16) + 8)));
SET64(6, RD(6) & 0x1000);
{ int t = RD(6) == RD(0);  if (t) goto L_0013F788; }
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->fcc = F(5) == F(3);
{ int t = c->fcc; wr32(c, (RW(4) + 116), RW(0)); if (t) goto L_0013FAB8; }
c->f[6].f = fpu_div(F(2), F(5));
c->f[5].u = rd32(c, (RW(4) + 120));
c->facc = fpu(F(3) + F(5));
c->f[5].f = fpu(c->facc + F(1) * F(6));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F788:;
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->f[5].f = fpu(F(5) + F(4));
wr32(c, (RW(4) + 116), c->f[5].u);
c->f[5].u = rd32(c, (RW(4) + 120));
c->f[5].f = fpu(F(5) * F(0));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F7B0:;
SET64(6, rd16(c, (RW(16) + 8)));
SET64(6, RD(6) & 0x4000);
{ int t = RD(6) == RD(0);  if (t) goto L_0013F7F8; }
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->fcc = F(5) == F(3);
{ int t = c->fcc; wr32(c, (RW(4) + 116), RW(0)); if (t) goto L_0013FAB8; }
c->f[6].f = fpu_div(F(2), F(5));
c->f[5].u = rd32(c, (RW(4) + 120));
c->facc = fpu(F(3) + F(5));
c->f[5].f = fpu(c->facc + F(1) * F(6));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F7F8:;
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->f[5].f = fpu(F(5) + F(4));
wr32(c, (RW(4) + 116), c->f[5].u);
c->f[5].u = rd32(c, (RW(4) + 120));
c->f[5].f = fpu(F(5) * F(0));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F820:;
SET64(6, rd16(c, (RW(16) + 8)));
SET64(6, RD(6) & 0x8000);
{ int t = RD(6) == RD(0);  if (t) goto L_0013F868; }
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->fcc = F(5) == F(3);
{ int t = c->fcc; wr32(c, (RW(4) + 116), RW(0)); if (t) goto L_0013FAB8; }
c->f[6].f = fpu_div(F(2), F(5));
c->f[5].u = rd32(c, (RW(4) + 120));
c->facc = fpu(F(3) + F(5));
c->f[5].f = fpu(c->facc + F(1) * F(6));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F868:;
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->f[5].f = fpu(F(5) + F(4));
wr32(c, (RW(4) + 116), c->f[5].u);
c->f[5].u = rd32(c, (RW(4) + 120));
c->f[5].f = fpu(F(5) * F(0));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F890:;
SET64(6, rd16(c, (RW(16) + 8)));
SET64(6, RD(6) & 0x2000);
{ int t = RD(6) == RD(0);  if (t) goto L_0013F8D8; }
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->fcc = F(5) == F(3);
{ int t = c->fcc; wr32(c, (RW(4) + 116), RW(0)); if (t) goto L_0013FAB8; }
c->f[6].f = fpu_div(F(2), F(5));
c->f[5].u = rd32(c, (RW(4) + 120));
c->facc = fpu(F(3) + F(5));
c->f[5].f = fpu(c->facc + F(1) * F(6));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F8D8:;
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->f[5].f = fpu(F(5) + F(4));
wr32(c, (RW(4) + 116), c->f[5].u);
c->f[5].u = rd32(c, (RW(4) + 120));
c->f[5].f = fpu(F(5) * F(0));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F900:;
SET64(6, rd16(c, (RW(16) + 8)));
SET64(6, RD(6) & 0x400);
{ int t = RD(6) == RD(0);  if (t) goto L_0013F948; }
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->fcc = F(5) == F(3);
{ int t = c->fcc; wr32(c, (RW(4) + 116), RW(0)); if (t) goto L_0013FAB8; }
c->f[6].f = fpu_div(F(2), F(5));
c->f[5].u = rd32(c, (RW(4) + 120));
c->facc = fpu(F(3) + F(5));
c->f[5].f = fpu(c->facc + F(1) * F(6));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F948:;
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->f[5].f = fpu(F(5) + F(4));
wr32(c, (RW(4) + 116), c->f[5].u);
c->f[5].u = rd32(c, (RW(4) + 120));
c->f[5].f = fpu(F(5) * F(0));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F970:;
SET64(6, rd16(c, (RW(16) + 8)));
SET64(6, RD(6) & 0x100);
{ int t = RD(6) == RD(0);  if (t) goto L_0013F9B8; }
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->fcc = F(5) == F(3);
{ int t = c->fcc; wr32(c, (RW(4) + 116), RW(0)); if (t) goto L_0013FAB8; }
c->f[6].f = fpu_div(F(2), F(5));
c->f[5].u = rd32(c, (RW(4) + 120));
c->facc = fpu(F(3) + F(5));
c->f[5].f = fpu(c->facc + F(1) * F(6));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F9B8:;
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->f[5].f = fpu(F(5) + F(4));
wr32(c, (RW(4) + 116), c->f[5].u);
c->f[5].u = rd32(c, (RW(4) + 120));
c->f[5].f = fpu(F(5) * F(0));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013F9E0:;
SET64(6, rd16(c, (RW(16) + 8)));
SET64(6, RD(6) & 0x800);
{ int t = RD(6) == RD(0);  if (t) goto L_0013FA28; }
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->fcc = F(5) == F(3);
{ int t = c->fcc; wr32(c, (RW(4) + 116), RW(0)); if (t) goto L_0013FAB8; }
c->f[6].f = fpu_div(F(2), F(5));
c->f[5].u = rd32(c, (RW(4) + 120));
c->facc = fpu(F(3) + F(5));
c->f[5].f = fpu(c->facc + F(1) * F(6));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013FA28:;
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->f[5].f = fpu(F(5) + F(4));
wr32(c, (RW(4) + 116), c->f[5].u);
c->f[5].u = rd32(c, (RW(4) + 120));
c->f[5].f = fpu(F(5) * F(0));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013FA50:;
SET64(6, rd16(c, (RW(16) + 8)));
SET64(6, RD(6) & 0x200);
{ int t = RD(6) == RD(0);  if (t) goto L_0013FA98; }
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->fcc = F(5) == F(3);
{ int t = c->fcc; wr32(c, (RW(4) + 116), RW(0)); if (t) goto L_0013FAB8; }
c->f[6].f = fpu_div(F(2), F(5));
c->f[5].u = rd32(c, (RW(4) + 120));
c->facc = fpu(F(3) + F(5));
c->f[5].f = fpu(c->facc + F(1) * F(6));
wr32(c, (RW(4) + 120), c->f[5].u); goto L_0013FAB8;
L_0013FA98:;
SET32(4, RW(4) << 3);
SET32(4, RW(16) + RW(4));
c->f[5].u = rd32(c, (RW(4) + 116));
c->f[5].f = fpu(F(5) + F(4));
wr32(c, (RW(4) + 116), c->f[5].u);
c->f[5].u = rd32(c, (RW(4) + 120));
c->f[5].f = fpu(F(5) * F(0));
wr32(c, (RW(4) + 120), c->f[5].u);
L_0013FAB8:;
SET32(4, RW(5) + 1);
SET64(5, RD(4) & 0xffff);
SET64(4, RSD(5) < (s64)12);
if (RD(4) != RD(0)) { SET64(4, RD(5) & 0xffff); { POLL(); goto L_0013F55C; } }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_0013F4E0(Ctx *c) { JP_B_0013F4E0(c, 0x13f4e0); }
void JP_F_0013F580(Ctx *c) { JP_B_0013F4E0(c, 0x13f580); }
void JP_F_0013F5F0(Ctx *c) { JP_B_0013F4E0(c, 0x13f5f0); }
void JP_F_0013F660(Ctx *c) { JP_B_0013F4E0(c, 0x13f660); }
void JP_F_0013F6D0(Ctx *c) { JP_B_0013F4E0(c, 0x13f6d0); }
void JP_F_0013F740(Ctx *c) { JP_B_0013F4E0(c, 0x13f740); }
void JP_F_0013F7B0(Ctx *c) { JP_B_0013F4E0(c, 0x13f7b0); }
void JP_F_0013F820(Ctx *c) { JP_B_0013F4E0(c, 0x13f820); }
void JP_F_0013F890(Ctx *c) { JP_B_0013F4E0(c, 0x13f890); }
void JP_F_0013F900(Ctx *c) { JP_B_0013F4E0(c, 0x13f900); }
void JP_F_0013F970(Ctx *c) { JP_B_0013F4E0(c, 0x13f970); }
void JP_F_0013F9E0(Ctx *c) { JP_B_0013F4E0(c, 0x13f9e0); }
void JP_F_0013FA50(Ctx *c) { JP_B_0013F4E0(c, 0x13fa50); }

static void JP_B_0013FAE0(Ctx *c, u32 entry) { /* func_0013FAE0 */
ENTER(entry);
switch (entry) { case 0x13fb50: goto L_0013FB50; case 0x13fb70: goto L_0013FB70; case 0x13fb90: goto L_0013FB90; case 0x13fbb0: goto L_0013FBB0; case 0x13fbd0: goto L_0013FBD0; case 0x13fbf0: goto L_0013FBF0; case 0x13fc10: goto L_0013FC10; case 0x13fc30: goto L_0013FC30; case 0x13fc50: goto L_0013FC50; case 0x13fc70: goto L_0013FC70; case 0x13fc90: goto L_0013FC90; case 0x13fcb0: goto L_0013FCB0; }
SET64(7, RD(0) + RD(0));
SET64(5, (s64)(s32)0x477f0000);
SET64(3, (s64)(s32)0x420000);
SET64(6, RD(5) | 0xff00);
SET32(3, RW(3) + -3104);
c->f[1].u = RW(0);
SET64(8, (s64)(s32)0x530000);
SET64(5, RD(5) | 0xfe00);
c->f[2].u = RW(6);
SET64(6, RD(7) & 0xffff);
L_0013FB08:;
SET32(6, RW(6) << 2);
SET32(9, RW(4) + RW(6));
c->f[0].u = rd32(c, (RW(9) + 68));
c->f[3].u = rd32(c, (RW(8) + -22472));
c->fcc = F(2) == F(0);
{ int t = !c->fcc; SET32(6, RW(9) + 68); if (t) goto L_0013FB28; }
wr32(c, (RW(6) + 0), RW(5));
L_0013FB28:;
SET64(9, RD(7) & 0xffff);
SET64(1, RD(9) < (u64)(s64)12);
{ int t = RD(1) == RD(0);  if (t) goto L_0013FCD0; }
SET32(9, RW(9) << 2);
SET32(9, RW(9) + RW(3));
SET64(9, (s32)rd32(c, (RW(9) + 0)));
{ u32 t = RW(9);  switch (t) { case 0x13fb50: goto L_0013FB50; case 0x13fb70: goto L_0013FB70; case 0x13fb90: goto L_0013FB90; case 0x13fbb0: goto L_0013FBB0; case 0x13fbd0: goto L_0013FBD0; case 0x13fbf0: goto L_0013FBF0; case 0x13fc10: goto L_0013FC10; case 0x13fc30: goto L_0013FC30; case 0x13fc50: goto L_0013FC50; case 0x13fc70: goto L_0013FC70; case 0x13fc90: goto L_0013FC90; case 0x13fcb0: goto L_0013FCB0; default: rt_jump(c, t); return; } }
L_0013FB50:;
SET64(9, rd16(c, (RW(4) + 6)));
SET64(9, RD(9) & 0x10);
if (RD(9) == RD(0)) { c->f[0].u = c->f[1].u; goto L_0013FB68; }
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(3));
L_0013FB68:;
wr32(c, (RW(6) + 0), c->f[0].u); goto L_0013FCD0;
L_0013FB70:;
SET64(9, rd16(c, (RW(4) + 6)));
SET64(9, RD(9) & 0x40);
if (RD(9) == RD(0)) { c->f[0].u = c->f[1].u; goto L_0013FB88; }
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(3));
L_0013FB88:;
wr32(c, (RW(6) + 0), c->f[0].u); goto L_0013FCD0;
L_0013FB90:;
SET64(9, rd16(c, (RW(4) + 6)));
SET64(9, RD(9) & 0x80);
if (RD(9) == RD(0)) { c->f[0].u = c->f[1].u; goto L_0013FBA8; }
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(3));
L_0013FBA8:;
wr32(c, (RW(6) + 0), c->f[0].u); goto L_0013FCD0;
L_0013FBB0:;
SET64(9, rd16(c, (RW(4) + 6)));
SET64(9, RD(9) & 0x20);
if (RD(9) == RD(0)) { c->f[0].u = c->f[1].u; goto L_0013FBC8; }
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(3));
L_0013FBC8:;
wr32(c, (RW(6) + 0), c->f[0].u); goto L_0013FCD0;
L_0013FBD0:;
SET64(9, rd16(c, (RW(4) + 6)));
SET64(9, RD(9) & 0x1000);
if (RD(9) == RD(0)) { c->f[0].u = c->f[1].u; goto L_0013FBE8; }
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(3));
L_0013FBE8:;
wr32(c, (RW(6) + 0), c->f[0].u); goto L_0013FCD0;
L_0013FBF0:;
SET64(9, rd16(c, (RW(4) + 6)));
SET64(9, RD(9) & 0x4000);
if (RD(9) == RD(0)) { c->f[0].u = c->f[1].u; goto L_0013FC08; }
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(3));
L_0013FC08:;
wr32(c, (RW(6) + 0), c->f[0].u); goto L_0013FCD0;
L_0013FC10:;
SET64(9, rd16(c, (RW(4) + 6)));
SET64(9, RD(9) & 0x8000);
if (RD(9) == RD(0)) { c->f[0].u = c->f[1].u; goto L_0013FC28; }
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(3));
L_0013FC28:;
wr32(c, (RW(6) + 0), c->f[0].u); goto L_0013FCD0;
L_0013FC30:;
SET64(9, rd16(c, (RW(4) + 6)));
SET64(9, RD(9) & 0x2000);
if (RD(9) == RD(0)) { c->f[0].u = c->f[1].u; goto L_0013FC48; }
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(3));
L_0013FC48:;
wr32(c, (RW(6) + 0), c->f[0].u); goto L_0013FCD0;
L_0013FC50:;
SET64(9, rd16(c, (RW(4) + 6)));
SET64(9, RD(9) & 0x400);
if (RD(9) == RD(0)) { c->f[0].u = c->f[1].u; goto L_0013FC68; }
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(3));
L_0013FC68:;
wr32(c, (RW(6) + 0), c->f[0].u); goto L_0013FCD0;
L_0013FC70:;
SET64(9, rd16(c, (RW(4) + 6)));
SET64(9, RD(9) & 0x100);
if (RD(9) == RD(0)) { c->f[0].u = c->f[1].u; goto L_0013FC88; }
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(3));
L_0013FC88:;
wr32(c, (RW(6) + 0), c->f[0].u); goto L_0013FCD0;
L_0013FC90:;
SET64(9, rd16(c, (RW(4) + 6)));
SET64(9, RD(9) & 0x800);
if (RD(9) == RD(0)) { c->f[0].u = c->f[1].u; goto L_0013FCA8; }
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(3));
L_0013FCA8:;
wr32(c, (RW(6) + 0), c->f[0].u); goto L_0013FCD0;
L_0013FCB0:;
SET64(9, rd16(c, (RW(4) + 6)));
SET64(9, RD(9) & 0x200);
if (RD(9) == RD(0)) { c->f[0].u = c->f[1].u; goto L_0013FCC8; }
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(0) + F(3));
L_0013FCC8:;
wr32(c, (RW(6) + 0), c->f[0].u);
L_0013FCD0:;
SET32(6, RW(7) + 1);
SET64(7, RD(6) & 0xffff);
SET64(6, RSD(7) < (s64)12);
if (RD(6) != RD(0)) { SET64(6, RD(7) & 0xffff); { POLL(); goto L_0013FB08; } }
 return;
}
void JP_F_0013FAE0(Ctx *c) { JP_B_0013FAE0(c, 0x13fae0); }
void JP_F_0013FB50(Ctx *c) { JP_B_0013FAE0(c, 0x13fb50); }
void JP_F_0013FB70(Ctx *c) { JP_B_0013FAE0(c, 0x13fb70); }
void JP_F_0013FB90(Ctx *c) { JP_B_0013FAE0(c, 0x13fb90); }
void JP_F_0013FBB0(Ctx *c) { JP_B_0013FAE0(c, 0x13fbb0); }
void JP_F_0013FBD0(Ctx *c) { JP_B_0013FAE0(c, 0x13fbd0); }
void JP_F_0013FBF0(Ctx *c) { JP_B_0013FAE0(c, 0x13fbf0); }
void JP_F_0013FC10(Ctx *c) { JP_B_0013FAE0(c, 0x13fc10); }
void JP_F_0013FC30(Ctx *c) { JP_B_0013FAE0(c, 0x13fc30); }
void JP_F_0013FC50(Ctx *c) { JP_B_0013FAE0(c, 0x13fc50); }
void JP_F_0013FC70(Ctx *c) { JP_B_0013FAE0(c, 0x13fc70); }
void JP_F_0013FC90(Ctx *c) { JP_B_0013FAE0(c, 0x13fc90); }
void JP_F_0013FCB0(Ctx *c) { JP_B_0013FAE0(c, 0x13fcb0); }

void JP_F_0013FCF0(Ctx *c) { /* func_0013FCF0 */
ENTER(0x13fcf0);
wr16(c, (RW(4) + 12), (u16)RW(0));
SET64(3, rd16(c, (RW(4) + 8)));
if (RD(3) == RD(0)) { c->f[1].u = rd32(c, (RW(4) + 64)); goto L_0013FD14; }
SET64(3, (s64)(s32)0x41400000);
wr32(c, (RW(4) + 64), RW(3));
SET64(3, rd16(c, (RW(4) + 6)));
wr16(c, (RW(4) + 12), (u16)RW(3)); goto L_0013FD88;
L_0013FD14:;
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(5, rd16(c, (RW(4) + 12))); goto L_0013FD8C; }
SET64(3, (s64)(s32)0x530000);
SET64(5, (s64)(s32)0x3f800000);
c->f[2].u = rd32(c, (RW(3) + -22472));
c->f[0].u = RW(5);
c->fcc = F(2) < F(0);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(4) + 64)); goto L_0013FD50; }
c->f[2].u = c->f[0].u;
c->f[1].u = rd32(c, (RW(4) + 64));
L_0013FD50:;
c->f[0].u = RW(0);
c->f[1].f = fpu(F(1) - F(2));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; wr32(c, (RW(4) + 64), c->f[1].u); if (t) goto L_0013FD88; }
SET64(3, rd16(c, (RW(4) + 6)));
wr16(c, (RW(4) + 12), (u16)RW(3));
SET64(3, rd16(c, (RW(4) + 6)));
{ int t = RD(3) == RD(0);  if (t) goto L_0013FD84; }
SET64(3, (s64)(s32)0x40e00000);
c->f[0].u = RW(3);
L_0013FD84:;
wr32(c, (RW(4) + 64), c->f[0].u);
L_0013FD88:;
SET64(5, rd16(c, (RW(4) + 12)));
L_0013FD8C:;
SET64(3, rd16(c, (RW(4) + 8)));
SET64(3, RD(5) | RD(3));
wr16(c, (RW(4) + 12), (u16)RW(3)); return;
}

void JP_F_0013FDA0(Ctx *c) { /* func_0013FDA0 */
ENTER(0x13fda0);
wr16(c, (RW(4) + 12), (u16)RW(0));
SET64(6, RD(0) + RD(0));
wr16(c, (RW(4) + 8), (u16)RW(0));
wr16(c, (RW(4) + 10), (u16)RW(0));
wr16(c, (RW(4) + 6), (u16)RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 44), RW(0));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0));
wr32(c, (RW(4) + 56), RW(0));
wr8(c, (RW(4) + 61), (u8)RW(0));
wr8(c, (RW(4) + 60), (u8)RW(0));
wr8(c, (RW(4) + 62), (u8)RW(0));
wr8(c, (RW(4) + 63), (u8)RW(0));
wr32(c, (RW(4) + 64), RW(0));
L_0013FDE8:;
SET64(5, RD(6) & 0xffff);
SET32(3, RW(6) + 6);
SET32(5, RW(5) << 2);
SET64(6, RD(3) & 0xffff);
SET32(5, RW(4) + RW(5));
SET64(3, RSD(6) < (s64)12);
wr32(c, (RW(5) + 68), RW(0));
wr32(c, (RW(5) + 72), RW(0));
wr32(c, (RW(5) + 76), RW(0));
wr32(c, (RW(5) + 80), RW(0));
wr32(c, (RW(5) + 84), RW(0));
{ int t = RD(3) != RD(0); wr32(c, (RW(5) + 88), RW(0)); if (t) { POLL(); goto L_0013FDE8; } }
SET64(7, RD(0) + RD(0));
SET64(5, (s64)(s32)0x447a0000);
c->f[0].u = RW(0);
L_0013FE28:;
SET64(6, RD(7) & 0xffff);
SET32(3, RW(7) + 6);
SET32(6, RW(6) << 3);
SET64(7, RD(3) & 0xffff);
SET32(6, RW(4) + RW(6));
SET64(3, RSD(7) < (s64)12);
wr32(c, (RW(6) + 116), RW(5));
wr32(c, (RW(6) + 120), RW(0));
wr32(c, (RW(6) + 124), RW(5));
wr32(c, (RW(6) + 128), RW(0));
wr32(c, (RW(6) + 132), RW(5));
wr32(c, (RW(6) + 136), RW(0));
wr32(c, (RW(6) + 140), RW(5));
wr32(c, (RW(6) + 144), RW(0));
wr32(c, (RW(6) + 148), RW(5));
wr32(c, (RW(6) + 152), RW(0));
wr32(c, (RW(6) + 156), RW(5));
{ int t = RD(3) != RD(0); wr32(c, (RW(6) + 160), RW(0)); if (t) { POLL(); goto L_0013FE28; } }
wr32(c, (RW(4) + 216), c->f[0].u);
wr32(c, (RW(4) + 212), c->f[0].u);
SET64(3, rd16(c, (RW(4) + 16)));
{ int t = RSD(3) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_0013FEC8; }
SET64(7, RD(8) & 0xffff);
L_0013FE8C:;
SET32(3, RW(8) + 1);
SET32(6, RW(7) << 1);
SET64(5, (s32)rd32(c, (RW(4) + 20)));
SET32(6, RW(6) + RW(7));
SET64(8, RD(3) & 0xffff);
SET32(3, RW(6) << 1);
SET32(3, RW(5) + RW(3));
wr16(c, (RW(3) + 0), (u16)RW(0));
wr16(c, (RW(3) + 2), (u16)RW(0));
wr16(c, (RW(3) + 4), (u16)RW(0));
SET64(3, rd16(c, (RW(4) + 16)));
SET64(3, RSD(8) < RSD(3));
if (RD(3) != RD(0)) { SET64(7, RD(8) & 0xffff); { POLL(); goto L_0013FE8C; } }
L_0013FEC8:;
wr16(c, (RW(4) + 24), (u16)RW(0)); return;
}

void JP_F_0013FED0(Ctx *c) { /* func_0013FED0 */
ENTER(0x13fed0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 0), (u16)RW(5));
SET64(16, RD(4) + RD(0));
SET64(31, 0x13fef4); wr8(c, (RW(4) + 2), (u8)RW(0)); JP_F_002A7400(c);
SET64(5, (s16)rd16(c, (RW(16) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x13ff04); SET64(6, RD(0) + RD(0)); JP_F_002A7090(c);
SET64(18, RD(2) + RD(0));
SET64(31, 0x13ff10); SET32(4, RW(0) + 16); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0013FF24; }
SET64(5, RD(18) + RD(0));
SET64(31, 0x13ff24); SET64(4, RD(17) + RD(0)); JP_F_002B5B00(c);
L_0013FF24:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x13ff34); wr32(c, (RW(16) + 220), RW(17)); JP_F_002B58B0(c);
SET64(4, (s32)rd32(c, (RW(16) + 220)));
SET64(31, 0x13ff40); SET64(5, RD(0) + RD(0)); JP_F_002B5910(c);
SET32(2, RW(0) + 60);
wr16(c, (RW(16) + 16), (u16)RW(2));
SET64(3, rd16(c, (RW(16) + 16)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(31, 0x13ff5c); SET32(4, RW(2) << 1); JP_F_00100530(c);
wr32(c, (RW(16) + 20), RW(2));
SET64(2, rd16(c, (RW(16) + 16)));
{ int t = RSD(2) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0013FFA8; }
SET64(5, RD(6) & 0xffff);
L_0013FF70:;
SET32(2, RW(6) + 1);
SET32(4, RW(5) << 1);
SET64(3, (s32)rd32(c, (RW(16) + 20)));
SET32(4, RW(4) + RW(5));
SET64(6, RD(2) & 0xffff);
SET32(2, RW(4) << 1);
SET32(2, RW(3) + RW(2));
wr16(c, (RW(2) + 0), (u16)RW(0));
wr16(c, (RW(2) + 2), (u16)RW(0));
wr16(c, (RW(2) + 4), (u16)RW(0));
SET64(2, rd16(c, (RW(16) + 16)));
SET64(2, RSD(6) < RSD(2));
if (RD(2) != RD(0)) { SET64(5, RD(6) & 0xffff); { POLL(); goto L_0013FF70; } }
L_0013FFA8:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x13ffb4); wr16(c, (RW(16) + 24), (u16)RW(0)); JP_F_0013FDA0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

static void JP_B_0013FFD0(Ctx *c, u32 entry) { /* func_0013FFD0 */
ENTER(entry);
switch (entry) { case 0x140000: goto L_00140000; case 0x140008: goto L_00140008; }
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(0) + 1);
SET32(2, RW(2) + -3896);
wr32(c, (RW(4) + 224), RW(2));
SET32(2, RW(0) + -1);
wr16(c, (RW(4) + 0), (u16)RW(2));
wr8(c, (RW(4) + 2), (u8)RW(0));
SET64(2, RD(4) + RD(0));
wr8(c, (RW(4) + 3), (u8)RW(0));
wr8(c, (RW(4) + 4), (u8)RW(3));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 44), RW(0));
L_00140000:;
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0));
L_00140008:;
wr32(c, (RW(4) + 56), RW(0));
wr32(c, (RW(4) + 220), RW(0)); return;
}
void JP_F_0013FFD0(Ctx *c) { JP_B_0013FFD0(c, 0x13ffd0); }
void JP_F_00140000(Ctx *c) { JP_B_0013FFD0(c, 0x140000); }
void JP_F_00140008(Ctx *c) { JP_B_0013FFD0(c, 0x140008); }

static void JP_B_00140020(Ctx *c, u32 entry) { /* func_00140020 */
ENTER(entry);
switch (entry) { case 0x140024: goto L_00140024; }
SET32(4, RW(4) + -4); { JP_F_00138F70(c); return; }
if (0) { L_00140024:; SET32(4, RW(4) + -4); }
}
void JP_F_00140020(Ctx *c) { JP_B_00140020(c, 0x140020); }
void JP_F_00140024(Ctx *c) { JP_B_00140020(c, 0x140024); }

void JP_F_00140030(Ctx *c) { /* func_00140030 */
ENTER(0x140030);
SET32(4, RW(4) + -24); { JP_F_00138F70(c); return; }
}

void JP_F_00140040(Ctx *c) { /* func_00140040 */
ENTER(0x140040);
SET64(6, (s32)rd32(c, (RW(4) + 8)));
SET64(3, rd16(c, (RW(6) + 2)));
{ int t = RSD(3) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00140090; }
SET64(7, RD(0) + RD(0));
L_00140054:;
SET64(3, (s32)rd32(c, (RW(6) + 8)));
SET32(8, RW(8) + 1);
SET32(4, RW(3) + RW(7));
SET64(3, rd16(c, (RW(4) + 8)));
SET64(3, RD(3) & 0xfff8);
wr16(c, (RW(4) + 8), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(6) + 8)));
SET32(4, RW(3) + RW(7));
SET64(3, rd16(c, (RW(4) + 8)));
SET64(3, RD(3) | RD(5));
wr16(c, (RW(4) + 8), (u16)RW(3));
SET64(3, rd16(c, (RW(6) + 2)));
SET64(3, RSD(8) < RSD(3));
{ int t = RD(3) != RD(0); SET32(7, RW(7) + 48); if (t) { POLL(); goto L_00140054; } }
L_00140090:;
 return;
}

void JP_F_001400A0(Ctx *c) { /* func_001400A0 */
ENTER(0x1400a0);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

static void JP_B_001400B0(Ctx *c, u32 entry) { /* func_001400B0 */
ENTER(entry);
switch (entry) { case 0x1400e0: goto L_001400E0; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001400F0; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_001400E0; }
SET32(2, RW(16) + RW(2));
wr32(c, (RW(16) + 8), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_001400E0:;
SET64(31, 0x1400e8); SET64(5, RD(16) + RD(0)); JP_F_00140100(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 12), RW(3));
L_001400F0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void JP_F_001400B0(Ctx *c) { JP_B_001400B0(c, 0x1400b0); }
void JP_F_001400E0(Ctx *c) { JP_B_001400B0(c, 0x1400e0); }

void JP_F_00140100(Ctx *c) { /* func_00140100 */
ENTER(0x140100);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_00140130; }
SET32(3, RW(17) + RW(3));
wr32(c, (RW(18) + 4), RW(3));
L_00140130:;
SET64(3, (s32)rd32(c, (RW(18) + 8)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 8))); goto L_00140148; }
SET32(3, RW(17) + RW(3));
wr32(c, (RW(18) + 8), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 8)));
L_00140148:;
{ int t = RD(3) == RD(0);  if (t) goto L_00140188; }
SET64(3, rd16(c, (RW(18) + 2)));
{ int t = RD(3) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_00140188; }
SET64(19, RD(0) + RD(0));
L_00140160:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET64(5, RD(17) + RD(0));
SET64(31, 0x140170); SET32(4, RW(2) + RW(19)); JP_F_001401B0(c);
SET64(3, rd16(c, (RW(18) + 2)));
SET32(16, RW(16) + 1);
SET64(3, RD(16) < RD(3));
{ int t = RD(3) != RD(0); SET32(19, RW(19) + 48); if (t) { POLL(); goto L_00140160; } }
L_00140188:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001401B0(Ctx *c) { /* func_001401B0 */
ENTER(0x1401b0);
SET64(3, (s32)rd32(c, (RW(4) + 12)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 16))); goto L_001401C8; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 12), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 16)));
L_001401C8:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 20))); goto L_001401DC; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 16), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 20)));
L_001401DC:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 24))); goto L_001401F0; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 20), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 24)));
L_001401F0:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 28))); goto L_00140204; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 24), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 28)));
L_00140204:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 32))); goto L_00140218; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 28), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
L_00140218:;
if (RD(3) == RD(0)) { SET64(7, (s32)rd32(c, (RW(4) + 32))); goto L_0014022C; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 32), RW(3));
SET64(7, (s32)rd32(c, (RW(4) + 32)));
L_0014022C:;
{ int t = RD(7) == RD(0);  if (t) goto L_00140288; }
SET64(5, rd16(c, (RW(4) + 2)));
SET64(8, RD(0) + RD(0));
{ int t = RSD(5) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_00140278; }
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = RW(3);
L_0014024C:;
c->f[0].u = rd32(c, (RW(7) + 0));
c->fcc = F(1) == F(0);
if (c->fcc) { SET32(3, RW(6) + 1); goto L_00140264; }
SET64(8, RD(0) + (s64)1); goto L_00140278;
L_00140264:;
SET64(6, RD(3) & 0xffff);
SET64(3, RSD(6) < RSD(5));
{ int t = RD(3) != RD(0); SET32(7, RW(7) + 8); if (t) { POLL(); goto L_0014024C; } }
L_00140278:;
SET64(3, RD(8) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_00140288; }
wr32(c, (RW(4) + 32), RW(0));
L_00140288:;
 return;
}

void JP_F_00140290(Ctx *c) { /* func_00140290 */
ENTER(0x140290);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(3) != RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_00140310; }
SET64(3, rd16(c, (RW(17) + 8)));
{ int t = RD(3) == RD(0);  if (t) goto L_00140308; }
SET64(3, (s32)rd32(c, (RW(17) + 12)));
if (RD(3) == RD(0)) { SET64(3, rd16(c, (RW(17) + 8))); goto L_001402D4; }
SET32(3, RW(17) + RW(3));
wr32(c, (RW(17) + 12), RW(3));
SET64(3, rd16(c, (RW(17) + 8)));
L_001402D4:;
{ int t = RD(3) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_00140308; }
SET64(18, RD(0) + RD(0));
L_001402E0:;
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(5, RD(17) + RD(0));
SET64(31, 0x1402f0); SET32(4, RW(2) + RW(18)); JP_F_00140330(c);
SET64(3, rd16(c, (RW(17) + 8)));
SET32(16, RW(16) + 1);
SET64(3, RD(16) < RD(3));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 48); if (t) { POLL(); goto L_001402E0; } }
L_00140308:;
SET32(3, RW(0) + 1);
wr32(c, (RW(17) + 16), RW(3));
L_00140310:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00140330(Ctx *c) { /* func_00140330 */
ENTER(0x140330);
SET64(3, (s32)rd32(c, (RW(4) + 36)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 40))); goto L_0014037C; }
if (RD(3) == RD(0)) { SET64(6, (s32)rd32(c, (RW(4) + 36))); goto L_00140350; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 36), RW(3));
SET64(6, (s32)rd32(c, (RW(4) + 36)));
L_00140350:;
SET64(3, (s32)rd32(c, (RW(6) + 8)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(6) + 12))); goto L_00140368; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(6) + 8), RW(3));
SET64(3, (s32)rd32(c, (RW(6) + 12)));
L_00140368:;
{ int t = RD(3) == RD(0);  if (t) goto L_00140378; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(6) + 12), RW(3));
L_00140378:;
SET64(3, (s32)rd32(c, (RW(4) + 40)));
L_0014037C:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 44))); goto L_001403C4; }
if (RD(3) == RD(0)) { SET64(6, (s32)rd32(c, (RW(4) + 40))); goto L_00140398; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 40), RW(3));
SET64(6, (s32)rd32(c, (RW(4) + 40)));
L_00140398:;
SET64(3, (s32)rd32(c, (RW(6) + 8)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(6) + 12))); goto L_001403B0; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(6) + 8), RW(3));
SET64(3, (s32)rd32(c, (RW(6) + 12)));
L_001403B0:;
{ int t = RD(3) == RD(0);  if (t) goto L_001403C0; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(6) + 12), RW(3));
L_001403C0:;
SET64(3, (s32)rd32(c, (RW(4) + 44)));
L_001403C4:;
{ int t = RD(3) == RD(0);  if (t) goto L_00140408; }
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(4) + 44))); goto L_001403E0; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 44), RW(3));
SET64(4, (s32)rd32(c, (RW(4) + 44)));
L_001403E0:;
SET64(3, (s32)rd32(c, (RW(4) + 8)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 12))); goto L_001403F8; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 8), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 12)));
L_001403F8:;
{ int t = RD(3) == RD(0);  if (t) goto L_00140408; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 12), RW(3));
L_00140408:;
 return;
}

void JP_F_00140410(Ctx *c) { /* func_00140410 */
ENTER(0x140410);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(6) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(5) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 0), RW(7));
SET64(31, 0x140454); SET64(4, RD(22) + RD(0)); JP_F_001416E0(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(20, RD(2) + RD(0));
SET64(3, rd16(c, (RW(2) + 28)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x140470); wr16(c, (RW(29) + 160), (u16)RW(3)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(21) + 0)));
SET64(7, RD(2) + RD(0));
SET64(4, RD(21) + RD(0));
SET64(31, 0x140484); SET64(6, RD(0) + RD(0)); JP_F_00140FF0(c);
SET64(31, 0x14048c); SET64(4, RD(21) + RD(0)); JP_F_001416E0(c);
SET64(19, RD(2) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x14049c); SET64(5, RD(0) + RD(0)); JP_F_002A5B00(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(21) + 0))); goto L_001404FC; }
SET64(4, (s32)rd32(c, (RW(21) + 0)));
SET64(3, (s64)(s32)0x100000);
SET64(3, RD(4) & RD(3));
if (RD(3) != RD(0)) { SET64(5, RD(2) + RD(0)); goto L_001404DC; }
SET64(5, RD(2) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(2, rd16(c, (RW(29) + 160)));
SET32(7, RW(0) + 1);
SET64(8, RD(0) + RD(0));
SET64(31, 0x1404d4); SET64(6, RD(2) + RD(0)); JP_F_002A5E50(c);
 goto L_001404F8;
L_001404DC:;
SET64(4, RD(19) + RD(0));
SET64(2, rd16(c, (RW(29) + 160)));
SET32(7, RW(0) + 2);
SET64(8, RD(0) + RD(0));
SET64(2, RD(2) + RD(0));
SET64(31, 0x1404f8); SET32(6, RW(2) << 1); JP_F_002A5E50(c);
L_001404F8:;
SET64(2, (s32)rd32(c, (RW(21) + 0)));
L_001404FC:;
SET64(2, RD(2) & 0x100);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(21) + 0))); goto L_00140574; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x140514); SET64(5, RD(0) + RD(0)); JP_F_002A5AD0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00140570; }
SET64(4, (s32)rd32(c, (RW(21) + 0)));
SET64(3, (s64)(s32)0x100000);
SET64(3, RD(4) & RD(3));
if (RD(3) != RD(0)) { SET64(5, RD(2) + RD(0)); goto L_00140554; }
SET64(5, RD(2) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(2, rd16(c, (RW(29) + 160)));
SET32(7, RW(0) + 1);
SET64(8, RD(0) + RD(0));
SET64(31, 0x14054c); SET64(6, RD(2) + RD(0)); JP_F_002A5D90(c);
 goto L_00140570;
L_00140554:;
SET64(4, RD(19) + RD(0));
SET64(2, rd16(c, (RW(29) + 160)));
SET32(7, RW(0) + 2);
SET64(8, RD(0) + RD(0));
SET64(2, RD(2) + RD(0));
SET64(31, 0x140570); SET32(6, RW(2) << 1); JP_F_002A5D90(c);
L_00140570:;
SET64(2, (s32)rd32(c, (RW(21) + 0)));
L_00140574:;
SET64(2, RD(2) & 0x10);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(21) + 0))); goto L_001405B4; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x14058c); SET64(5, RD(0) + RD(0)); JP_F_002A5AA0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001405B0; }
SET64(5, RD(2) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(2, rd16(c, (RW(29) + 160)));
SET32(7, RW(0) + 1);
SET64(8, RD(0) + RD(0));
SET64(31, 0x1405b0); SET64(6, RD(2) + RD(0)); JP_F_002A5CD0(c);
L_001405B0:;
SET64(2, (s32)rd32(c, (RW(21) + 0)));
L_001405B4:;
SET64(2, RD(2) & 0x1000);
if (RD(2) == RD(0)) { SET64(4, RD(20) + RD(0)); goto L_001405F4; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x1405cc); SET64(5, RD(0) + RD(0)); JP_F_002A5A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001405F0; }
SET64(5, RD(2) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(2, rd16(c, (RW(29) + 160)));
SET32(7, RW(0) + 1);
SET64(8, RD(0) + RD(0));
SET64(31, 0x1405f0); SET64(6, RD(2) + RD(0)); JP_F_002A5C10(c);
L_001405F0:;
SET64(4, RD(20) + RD(0));
L_001405F4:;
SET64(31, 0x1405fc); SET64(5, RD(0) + RD(0)); JP_F_002A5A50(c);
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(21) + 0))); goto L_00140624; }
SET64(5, RD(2) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(2, rd16(c, (RW(29) + 160)));
SET32(7, RW(0) + 1);
SET64(8, RD(0) + RD(0));
SET64(31, 0x140620); SET64(6, RD(2) + RD(0)); JP_F_002A5B30(c);
SET64(3, (s32)rd32(c, (RW(21) + 0)));
L_00140624:;
SET64(2, (s64)(s32)0x10000);
SET64(2, RD(3) & RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_001406C8; }
SET64(5, RD(0) + RD(0));
SET32(3, RW(0) + 255);
L_0014063C:;
SET64(4, RD(5) & 0xffff);
SET32(2, RW(5) + 6);
SET32(4, RW(21) + RW(4));
SET64(5, RD(2) & 0xffff);
wr8(c, (RW(4) + 8), (u8)RW(3));
SET64(2, RSD(5) < (s64)12);
wr8(c, (RW(4) + 9), (u8)RW(3));
wr8(c, (RW(4) + 10), (u8)RW(3));
wr8(c, (RW(4) + 11), (u8)RW(3));
wr8(c, (RW(4) + 12), (u8)RW(3));
{ int t = RD(2) != RD(0); wr8(c, (RW(4) + 13), (u8)RW(3)); if (t) { POLL(); goto L_0014063C; } }
SET64(31, 0x140674); SET64(4, RD(21) + RD(0)); JP_F_00141620(c);
SET64(30, RD(2) + RD(0));
SET64(18, RD(0) + RD(0));
L_0014067C:;
SET64(17, RD(18) & 0xffff);
SET32(2, RW(0) + 255);
SET32(3, RW(22) + RW(17));
SET64(16, rd8(c, (RW(3) + 8)));
{ int t = RD(16) == RD(2);  if (t) goto L_001406C8; }
SET32(2, RW(16) << 3);
SET64(4, RD(30) + RD(0));
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 5);
SET32(2, RW(23) + RW(2));
SET64(31, 0x1406b0); SET32(5, RW(2) + 64); JP_F_002B9240(c);
SET32(2, RW(18) + 1);
SET32(3, RW(21) + RW(17));
SET64(18, RD(2) & 0xffff);
SET64(2, RSD(18) < (s64)12);
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 8), (u8)RW(16)); if (t) { POLL(); goto L_0014067C; } }
L_001406C8:;
SET64(25, (s32)rd32(c, (RW(20) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1406d8); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1406ec); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(5, rd16(c, (RW(29) + 160)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x140700); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
wr32(c, (RW(21) + 4), RW(22));
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

void JP_F_00140740(Ctx *c) { /* func_00140740 */
ENTER(0x140740);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x140750); SET64(7, (s32)rd32(c, (RW(5) + 0))); JP_F_00140410(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00140760(Ctx *c) { /* func_00140760 */
ENTER(0x140760);
SET32(29, RW(29) + -432);
SET64(3, (s64)(s32)0x45800000);
wr64(c, (RW(29) + 80), RD(31));
c->f[2].u = RW(3);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(2, RD(18) & 0xffff);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(17, RD(7) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(8) + RD(0));
SET64(4, (s32)rd32(c, (RW(5) + 16)));
c->f[21].u = c->f[12].u;
c->f[20].u = c->f[13].u;
SET32(5, RW(2) << 3);
SET32(6, RW(4) + RW(5));
SET64(2, (s64)(s32)0x3f800000);
SET64(5, (s16)rd16(c, (RW(6) + 4)));
c->f[0].u = RW(2);
SET64(4, (s16)rd16(c, (RW(6) + 2)));
c->fcc = F(0) == F(21);
SET64(3, (s16)rd16(c, (RW(6) + 0)));
c->f[1].u = RW(5);
c->f[1].f = (f32)(s32)c->f[1].u;
wr32(c, (RW(29) + 396), RW(2));
c->f[1].f = fpu_div(F(1), F(2));
wr32(c, (RW(29) + 392), c->f[1].u);
c->f[1].u = RW(4);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[1].f = fpu_div(F(1), F(2));
wr32(c, (RW(29) + 388), c->f[1].u);
c->f[1].u = RW(3);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[1].f = fpu_div(F(1), F(2));
wr32(c, (RW(29) + 384), c->f[1].u);
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
{ int t = c->fcc; wr128(c, (RW(29) + 368) & ~15u, &c->r[2]); if (t) goto L_00140918; }
c->fcc = F(0) == F(20);
if (c->fcc) { SET64(2, (s64)(s32)0x3f800000); goto L_0014091C; }
SET64(31, 0x140828); SET32(4, RW(29) + 304); JP_F_002AF080(c);
rd128(c, (RW(17) + 0) & ~15u, &c->r[2]);
SET32(4, RW(29) + 240);
wr128(c, (RW(29) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 336) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 48) & ~15u, &c->r[2]);
SET64(31, 0x140850); wr128(c, (RW(29) + 352) & ~15u, &c->r[2]); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[7]);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 160), RW(0));
SET32(4, RW(29) + 128);
wr32(c, (RW(29) + 164), RW(0));
SET32(5, RW(29) + 384);
wr128(c, (RW(29) + 240) & ~15u, &c->r[7]);
SET32(6, RW(29) + 304);
rd128(c, (RW(16) + 16) & ~15u, &c->r[7]);
wr32(c, (RW(29) + 168), RW(0));
wr32(c, (RW(29) + 172), RW(2));
wr128(c, (RW(29) + 256) & ~15u, &c->r[7]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[7]);
wr32(c, (RW(29) + 156), RW(2));
wr32(c, (RW(29) + 144), RW(0));
wr128(c, (RW(29) + 272) & ~15u, &c->r[7]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[7]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 288) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 352) & ~15u, &c->r[3]);
SET64(31, 0x1408b4); wr128(c, (RW(29) + 288) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET32(4, RW(29) + 112);
SET32(5, RW(29) + 368);
SET32(6, RW(29) + 240);
SET64(31, 0x1408cc); wr128(c, (RW(29) + 384) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET32(4, RW(29) + 384);
SET64(31, 0x1408dc); wr128(c, (RW(29) + 368) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(31, 0x1408e4); SET32(4, RW(29) + 368); JP_F_002B0360(c);
c->f[12].u = c->f[21].u;
SET32(4, RW(29) + 208);
SET64(31, 0x1408f4); SET32(5, RW(29) + 384); JP_F_002AFF20(c);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
c->f[12].u = c->f[20].u;
SET32(4, RW(29) + 176);
SET32(5, RW(29) + 368);
SET64(31, 0x14090c); wr128(c, (RW(29) + 384) & ~15u, &c->r[2]); JP_F_002AFF20(c);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 368) & ~15u, &c->r[2]); goto L_00140944;
L_00140918:;
SET64(2, (s64)(s32)0x3f800000);
L_0014091C:;
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(2));
c->f[1].u = rd32(c, (RW(28) + -32692));
wr32(c, (RW(29) + 100), RW(0));
c->f[0].u = rd32(c, (RW(28) + -32688));
wr32(c, (RW(29) + 104), RW(0));
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 396), c->f[1].u);
wr128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 380), c->f[0].u);
L_00140944:;
SET32(3, RW(29) + 408);
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 8); if (t) goto L_0014096C; }
L_00140950:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00140950; } }
L_0014096C:;
c->f[0].u = rd32(c, (RW(29) + 384));
SET64(2, (s64)(s32)0x45800000);
c->f[1].u = RW(2);
SET64(31, 0x140980); c->f[12].f = fpu(F(1) * F(0)); JP_F_0011F550(c);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(2, (s64)(s32)0x45800000);
c->f[0].u = rd32(c, (RW(29) + 388));
SET64(3, (s32)c->f[1].u);
c->f[1].u = RW(2);
wr16(c, (RW(29) + 408), (u16)RW(3));
SET64(31, 0x1409a0); c->f[12].f = fpu(F(1) * F(0)); JP_F_0011F550(c);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(2, (s64)(s32)0x45800000);
c->f[0].u = rd32(c, (RW(29) + 392));
SET64(3, (s32)c->f[1].u);
c->f[1].u = RW(2);
wr16(c, (RW(29) + 410), (u16)RW(3));
SET64(31, 0x1409c0); c->f[12].f = fpu(F(1) * F(0)); JP_F_0011F550(c);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(2, (s64)(s32)0x45800000);
c->f[0].u = rd32(c, (RW(29) + 396));
SET64(3, (s32)c->f[1].u);
c->f[1].u = RW(2);
wr16(c, (RW(29) + 412), (u16)RW(3));
SET64(31, 0x1409e0); c->f[12].f = fpu(F(1) * F(0)); JP_F_0011F550(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(16, RD(18) & 0xffff);
SET64(4, RD(19) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(2, (s32)c->f[0].u);
wr16(c, (RW(29) + 414), (u16)RW(2));
SET64(2, rd64(c, (RW(29) + 408)));
SET64(31, 0x140a08); wr64(c, (RW(29) + 424), RD(2)); JP_F_002A5AD0(c);
SET64(5, rd64(c, (RW(29) + 424)));
SET32(4, RW(29) + 400);
SET32(3, RW(0) + 8);
{ int t = RD(4) == RD(0); wr64(c, (RW(2) + 0), RD(5)); if (t) goto L_00140A38; }
L_00140A1C:;
wr8(c, (RW(4) + 0), (u8)RW(0));
SET32(3, RW(3) + -1);
SET32(4, RW(4) + 1);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_00140A1C; } }
L_00140A38:;
c->f[0].u = rd32(c, (RW(29) + 368));
SET64(2, (s64)(s32)0x45800000);
c->f[1].u = RW(2);
SET64(31, 0x140a4c); c->f[12].f = fpu(F(1) * F(0)); JP_F_0011F550(c);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(2, (s64)(s32)0x45800000);
c->f[0].u = rd32(c, (RW(29) + 372));
SET64(3, (s32)c->f[1].u);
c->f[1].u = RW(2);
wr16(c, (RW(29) + 400), (u16)RW(3));
SET64(31, 0x140a6c); c->f[12].f = fpu(F(1) * F(0)); JP_F_0011F550(c);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(2, (s64)(s32)0x45800000);
c->f[0].u = rd32(c, (RW(29) + 376));
SET64(3, (s32)c->f[1].u);
c->f[1].u = RW(2);
wr16(c, (RW(29) + 402), (u16)RW(3));
SET64(31, 0x140a8c); c->f[12].f = fpu(F(1) * F(0)); JP_F_0011F550(c);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(2, (s64)(s32)0x45800000);
c->f[0].u = rd32(c, (RW(29) + 380));
SET64(3, (s32)c->f[1].u);
c->f[1].u = RW(2);
wr16(c, (RW(29) + 404), (u16)RW(3));
SET64(31, 0x140aac); c->f[12].f = fpu(F(1) * F(0)); JP_F_0011F550(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, RD(19) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(2, (s32)c->f[0].u);
wr16(c, (RW(29) + 406), (u16)RW(2));
SET64(2, rd64(c, (RW(29) + 400)));
SET64(31, 0x140ad0); wr64(c, (RW(29) + 416), RD(2)); JP_F_002A5AD0(c);
SET64(3, rd64(c, (RW(29) + 416)));
wr64(c, (RW(2) + 8), RD(3));
SET64(31, rd64(c, (RW(29) + 80)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 432); return;
}

void JP_F_00140B00(Ctx *c) { /* func_00140B00 */
ENTER(0x140b00);
SET32(29, RW(29) + -240);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(2, RD(17) & 0xffff);
wr32(c, (RW(29) + 0), c->f[20].u);
SET32(4, RW(2) << 4);
SET64(3, (s32)rd32(c, (RW(5) + 12)));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
SET64(16, RD(8) + RD(0));
c->f[21].u = c->f[12].u;
SET32(2, RW(3) + RW(4));
rd128(c, (RW(2) + 0) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(28) + -32704));
c->fcc = F(1) == F(21);
wr32(c, (RW(29) + 224), RW(0));
c->f[20].u = c->f[13].u;
wr32(c, (RW(29) + 228), RW(0));
wr32(c, (RW(29) + 232), RW(0));
wr128(c, (RW(29) + 224) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 236), c->f[0].u);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
{ int t = c->fcc; wr128(c, (RW(29) + 208) & ~15u, &c->r[2]); if (t) goto L_00140BE4; }
c->fcc = F(1) == F(20);
if (c->fcc) { SET64(2, (s64)(s32)0x3f800000); goto L_00140BE8; }
SET64(6, RD(7) + RD(0));
SET32(4, RW(29) + 112);
SET64(31, 0x140b90); SET32(5, RW(29) + 224); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET64(6, RD(16) + RD(0));
SET32(4, RW(29) + 96);
SET32(5, RW(29) + 208);
SET64(31, 0x140ba8); wr128(c, (RW(29) + 224) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
c->f[12].u = c->f[21].u;
SET32(4, RW(29) + 160);
SET32(5, RW(29) + 224);
SET64(31, 0x140bc0); wr128(c, (RW(29) + 208) & ~15u, &c->r[2]); JP_F_002AFF20(c);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
c->f[12].u = c->f[20].u;
SET32(4, RW(29) + 128);
SET32(5, RW(29) + 208);
SET64(31, 0x140bd8); wr128(c, (RW(29) + 224) & ~15u, &c->r[2]); JP_F_002AFF20(c);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[2]); goto L_00140C10;
L_00140BE4:;
SET64(2, (s64)(s32)0x3f800000);
L_00140BE8:;
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 92), RW(2));
c->f[1].u = rd32(c, (RW(28) + -32700));
wr32(c, (RW(29) + 84), RW(0));
c->f[0].u = rd32(c, (RW(28) + -32696));
wr32(c, (RW(29) + 88), RW(0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 236), c->f[1].u);
wr128(c, (RW(29) + 208) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 220), c->f[0].u);
L_00140C10:;
SET64(16, RD(17) & 0xffff);
SET64(4, RD(18) + RD(0));
SET64(31, 0x140c20); SET64(5, RD(16) + RD(0)); JP_F_002A5B00(c);
rd128(c, (RW(29) + 224) & ~15u, &c->r[3]);
SET64(4, RD(18) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x140c34); wr128(c, (RW(2) + 0) & ~15u, &c->r[3]); JP_F_002A5B00(c);
rd128(c, (RW(29) + 208) & ~15u, &c->r[3]);
wr128(c, (RW(2) + 16) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 240); return;
}

void JP_F_00140C60(Ctx *c) { /* func_00140C60 */
ENTER(0x140c60);
SET32(29, RW(29) + -224);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
SET64(30, RD(6) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(7) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x140ca0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_001416E0(c);
SET64(3, rd16(c, (RW(20) + 2)));
SET64(19, RD(2) + RD(0));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00140F50; }
SET64(17, RD(18) & 0xffff);
L_00140CB4:;
SET64(4, RD(19) + RD(0));
SET64(31, 0x140cc0); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(3, (s32)rd32(c, (RW(21) + 0)));
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x100000);
SET64(2, RD(3) & RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00140D80; }
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET64(23, RD(17) + RD(0));
SET32(3, RW(23) << 4);
SET64(4, RD(19) + RD(0));
SET64(5, RD(17) + RD(0));
SET32(2, RW(2) + RW(3));
rd128(c, (RW(2) + 0) & ~15u, &c->r[2]);
SET64(31, 0x140cfc); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); JP_F_002A5B00(c);
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
wr128(c, (RW(2) + 0) & ~15u, &c->r[3]);
SET64(3, (s32)rd32(c, (RW(21) + 0)));
SET64(3, RD(3) & 0x100);
{ int t = RD(3) == RD(0);  if (t) goto L_00140D40; }
SET64(2, (s32)rd32(c, (RW(20) + 16)));
SET32(3, RW(23) << 3);
SET64(4, RD(19) + RD(0));
SET64(5, RD(17) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(2, rd64(c, (RW(2) + 0)));
SET64(31, 0x140d34); wr64(c, (RW(29) + 192), RD(2)); JP_F_002A5AD0(c);
SET64(3, rd64(c, (RW(29) + 192)));
wr64(c, (RW(2) + 0), RD(3));
L_00140D40:;
SET64(4, (s32)rd32(c, (RW(21) + 0)));
SET64(3, (s64)(s32)0x10000);
SET64(3, RD(4) & RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_00140E50; }
SET64(4, (s32)rd32(c, (RW(20) + 28)));
SET32(5, RW(23) << 2);
SET64(3, (s16)rd16(c, (RW(16) + 6)));
SET32(4, RW(4) + RW(5));
SET64(4, rd8(c, (RW(4) + 0)));
SET64(3, RD(3) & 0x8000);
SET32(4, RW(4) << 2);
SET64(4, RD(4) & 0x7fff);
SET64(3, RD(3) | RD(4));
wr16(c, (RW(16) + 6), (u16)RW(3)); goto L_00140E50;
L_00140D80:;
SET64(4, RD(20) + RD(0));
SET64(5, RD(18) + RD(0));
SET32(6, RW(29) + 222);
SET32(7, RW(29) + 220);
SET32(8, RW(29) + 218);
SET32(9, RW(29) + 216);
SET32(10, RW(29) + 212);
SET64(31, 0x140da4); SET32(11, RW(29) + 208); JP_F_00141510(c);
SET64(3, rd16(c, (RW(29) + 222)));
c->f[12].u = rd32(c, (RW(29) + 212));
SET64(2, rd16(c, (RW(29) + 220)));
c->f[13].u = rd32(c, (RW(29) + 208));
SET64(4, RD(19) + RD(0));
SET64(5, RD(20) + RD(0));
SET32(3, RW(3) << 6);
SET64(6, RD(18) + RD(0));
SET32(2, RW(2) << 6);
SET32(7, RW(22) + RW(3));
SET64(31, 0x140dd4); SET32(8, RW(22) + RW(2)); JP_F_00140B00(c);
SET64(3, (s32)rd32(c, (RW(21) + 0)));
SET64(3, RD(3) & 0x100);
{ int t = RD(3) == RD(0);  if (t) goto L_00140E18; }
SET64(3, rd16(c, (RW(29) + 222)));
c->f[12].u = rd32(c, (RW(29) + 212));
SET64(2, rd16(c, (RW(29) + 220)));
c->f[13].u = rd32(c, (RW(29) + 208));
SET64(4, RD(19) + RD(0));
SET64(5, RD(20) + RD(0));
SET32(3, RW(3) << 6);
SET64(6, RD(18) + RD(0));
SET32(2, RW(2) << 6);
SET32(7, RW(22) + RW(3));
SET64(31, 0x140e14); SET32(8, RW(22) + RW(2)); JP_F_00140760(c);
L_00140E18:;
SET64(3, rd16(c, (RW(29) + 218)));
SET64(4, (s16)rd16(c, (RW(16) + 6)));
SET32(3, RW(3) << 2);
SET64(4, RD(4) & 0x8000);
SET64(3, RD(3) & 0x7fff);
SET64(3, RD(4) | RD(3));
wr16(c, (RW(16) + 6), (u16)RW(3));
SET64(3, rd16(c, (RW(29) + 216)));
SET64(4, (s16)rd16(c, (RW(16) + 4)));
SET32(3, RW(3) << 2);
SET64(4, RD(4) & 0x8000);
SET64(3, RD(3) & 0x7fff);
SET64(3, RD(4) | RD(3));
wr16(c, (RW(16) + 4), (u16)RW(3));
L_00140E50:;
SET64(3, (s32)rd32(c, (RW(21) + 0)));
SET64(3, RD(3) & 0x1000);
{ int t = RD(3) == RD(0);  if (t) goto L_00140E90; }
SET64(2, (s32)rd32(c, (RW(20) + 20)));
SET64(3, RD(18) & 0xffff);
SET32(3, RW(3) << 2);
SET64(4, RD(19) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(23, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x140e80); SET64(5, RD(17) + RD(0)); JP_F_002A5A70(c);
SET64(3, RD(23) << 32);
SET64(3, RSD(3) >> 32);
wr32(c, (RW(2) + 0), RW(3));
L_00140E90:;
SET64(3, (s32)rd32(c, (RW(21) + 0)));
SET64(3, RD(3) & 0x10);
{ int t = RD(3) == RD(0);  if (t) goto L_00140ED8; }
SET64(2, (s32)rd32(c, (RW(20) + 24)));
SET64(3, RD(18) & 0xffff);
SET32(3, RW(3) << 3);
SET64(4, RD(19) + RD(0));
SET64(5, RD(17) + RD(0));
SET32(2, RW(2) + RW(3));
c->f[1].u = rd32(c, (RW(2) + 4));
c->f[0].u = rd32(c, (RW(2) + 0));
wr32(c, (RW(29) + 188), c->f[1].u);
SET64(31, 0x140ecc); wr32(c, (RW(29) + 184), c->f[0].u); JP_F_002A5AA0(c);
SET64(3, rd64(c, (RW(29) + 184)));
wr64(c, (RW(2) + 0), RD(3));
L_00140ED8:;
SET64(3, RD(18) & 0xffff);
SET32(5, RW(3) << 4);
SET64(4, (s32)rd32(c, (RW(20) + 12)));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
SET32(3, RW(4) + RW(5));
c->f[1].u = rd32(c, (RW(3) + 12));
c->fcc = F(0) == F(1);
{ int t = c->fcc;  if (t) goto L_00140F38; }
SET64(4, (s32)rd32(c, (RW(21) + 0)));
SET64(3, (s64)(s32)0x100000);
SET64(3, RD(4) & RD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_00140F28; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x140f20); SET64(4, RD(19) + RD(0)); JP_F_002A5B00(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 12), RW(3));
L_00140F28:;
SET64(3, (s16)rd16(c, (RW(16) + 6)));
SET64(3, RD(3) & 0x7fff);
SET64(3, RD(3) | 0x8000);
wr16(c, (RW(16) + 6), (u16)RW(3));
L_00140F38:;
SET32(3, RW(18) + 1);
SET64(18, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(20) + 2)));
SET64(3, RSD(18) < RSD(3));
if (RD(3) != RD(0)) { SET64(17, RD(18) & 0xffff); { POLL(); goto L_00140CB4; } }
L_00140F50:;
SET64(4, (s32)rd32(c, (RW(21) + 0)));
SET64(3, (s64)(s32)0x10000);
SET64(3, RD(4) & RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_00140FC0; }
SET64(31, 0x140f6c); SET64(4, RD(21) + RD(0)); JP_F_00141620(c);
SET64(19, RD(2) + RD(0));
SET64(18, RD(0) + RD(0));
L_00140F74:;
SET64(17, RD(18) & 0xffff);
SET32(3, RW(0) + 255);
SET32(4, RW(20) + RW(17));
SET64(16, rd8(c, (RW(4) + 36)));
{ int t = RD(16) == RD(3);  if (t) goto L_00140FC0; }
SET32(2, RW(16) << 3);
SET64(4, RD(19) + RD(0));
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 5);
SET32(2, RW(30) + RW(2));
SET64(31, 0x140fa8); SET32(5, RW(2) + 64); JP_F_002B9240(c);
SET32(3, RW(18) + 1);
SET32(4, RW(21) + RW(17));
SET64(18, RD(3) & 0xffff);
SET64(3, RSD(18) < (s64)12);
{ int t = RD(3) != RD(0); wr8(c, (RW(4) + 8), (u8)RW(16)); if (t) { POLL(); goto L_00140F74; } }
L_00140FC0:;
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
SET32(29, RW(29) + 224); return;
}

void JP_F_00140FF0(Ctx *c) { /* func_00140FF0 */
ENTER(0x140ff0);
SET32(29, RW(29) + -80);
SET64(3, (s64)(s32)0x20110000);
wr64(c, (RW(29) + 64), RD(31));
SET64(3, RD(3) | 0x101);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
{ int t = RD(5) == RD(3); SET64(16, RD(7) + RD(0)); if (t) goto L_001414C0; }
SET64(3, (s64)(s32)0x20010000);
SET64(3, RD(3) | 0x101);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 224); goto L_00141484; }
SET64(3, (s64)(s32)0x10000000);
SET64(3, RD(3) | 0x1);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 160); goto L_00141448; }
SET64(3, (s64)(s32)0x1110000);
SET64(3, RD(3) | 0x101);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 224); goto L_0014140C; }
SET64(3, (s64)(s32)0x1010000);
SET64(3, RD(3) | 0x101);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 224); goto L_001413D0; }
SET64(6, (s64)(s32)0x110000);
SET64(3, RD(6) | 0x111);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 224); goto L_00141394; }
SET64(4, (s64)(s32)0x10000);
SET64(3, RD(4) | 0x111);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 224); goto L_00141358; }
SET64(3, RD(6) | 0x1011);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 224); goto L_0014131C; }
SET64(3, RD(4) | 0x1011);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 224); goto L_001412E0; }
SET32(3, RW(0) + 4113);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 160); goto L_001412A4; }
SET32(3, RW(0) + 273);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 160); goto L_00141268; }
SET64(3, RD(6) | 0x1001);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 224); goto L_0014122C; }
SET64(3, RD(4) | 0x1001);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 224); goto L_001411F0; }
SET32(3, RW(0) + 4097);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 160); goto L_001411B4; }
SET64(3, RD(6) | 0x1);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 224); goto L_00141178; }
SET64(3, RD(4) | 0x1);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 224); goto L_0014113C; }
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { SET32(4, RW(0) + 160); goto L_00141100; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_001414F8;
L_00141100:;
SET64(31, 0x141108);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0014111C; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x14111c); SET64(4, RD(19) + RD(0)); JP_F_002B6840(c);
L_0014111C:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x141134); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_0014113C:;
SET64(31, 0x141144);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00141158; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x141158); SET64(4, RD(19) + RD(0)); JP_F_002B6B90(c);
L_00141158:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x141170); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_00141178:;
SET64(31, 0x141180);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00141194; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x141194); SET64(4, RD(19) + RD(0)); JP_F_002B6440(c);
L_00141194:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1411ac); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_001411B4:;
SET64(31, 0x1411bc);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001411D0; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x1411d0); SET64(4, RD(19) + RD(0)); JP_F_002B6FD0(c);
L_001411D0:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1411e8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_001411F0:;
SET64(31, 0x1411f8);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0014120C; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x14120c); SET64(4, RD(19) + RD(0)); JP_F_002B7380(c);
L_0014120C:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x141224); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_0014122C:;
SET64(31, 0x141234);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00141248; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x141248); SET64(4, RD(19) + RD(0)); JP_F_002B7710(c);
L_00141248:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x141260); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_00141268:;
SET64(31, 0x141270);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00141284; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x141284); SET64(4, RD(19) + RD(0)); JP_F_002B8870(c);
L_00141284:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14129c); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_001412A4:;
SET64(31, 0x1412ac);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001412C0; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x1412c0); SET64(4, RD(19) + RD(0)); JP_F_002B7BB0(c);
L_001412C0:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1412d8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_001412E0:;
SET64(31, 0x1412e8);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001412FC; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x1412fc); SET64(4, RD(19) + RD(0)); JP_F_002B7FC0(c);
L_001412FC:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x141314); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_0014131C:;
SET64(31, 0x141324);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00141338; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x141338); SET64(4, RD(19) + RD(0)); JP_F_002B83B0(c);
L_00141338:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x141350); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_00141358:;
SET64(31, 0x141360);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00141374; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x141374); SET64(4, RD(19) + RD(0)); JP_F_002B8C80(c);
L_00141374:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14138c); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_00141394:;
SET64(31, 0x14139c);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001413B0; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x1413b0); SET64(4, RD(19) + RD(0)); JP_F_002BA680(c);
L_001413B0:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1413c8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_001413D0:;
SET64(31, 0x1413d8);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001413EC; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x1413ec); SET64(4, RD(19) + RD(0)); JP_F_002B9940(c);
L_001413EC:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x141404); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_0014140C:;
SET64(31, 0x141414);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00141428; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x141428); SET64(4, RD(19) + RD(0)); JP_F_002B9AA0(c);
L_00141428:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x141440); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_00141448:;
SET64(31, 0x141450);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00141464; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x141464); SET64(4, RD(19) + RD(0)); JP_F_002B9760(c);
L_00141464:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14147c); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_00141484:;
SET64(31, 0x14148c);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001414A0; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x1414a0); SET64(4, RD(19) + RD(0)); JP_F_002BA320(c);
L_001414A0:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1414b8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
 goto L_001414F4;
L_001414C0:;
SET64(31, 0x1414c8); SET32(4, RW(0) + 224); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001414DC; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x1414dc); SET64(4, RD(19) + RD(0)); JP_F_002BA480(c);
L_001414DC:;
wr32(c, (RW(18) + 20), RW(19));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(19) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1414f4); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
L_001414F4:;
SET64(31, rd64(c, (RW(29) + 64)));
L_001414F8:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00141510(Ctx *c) { /* func_00141510 */
ENTER(0x141510);
SET64(12, (s32)rd32(c, (RW(4) + 28)));
SET64(3, RD(5) & 0xffff);
SET32(13, RW(3) << 2);
SET32(5, RW(0) + 255);
SET32(12, RW(12) + RW(13));
SET64(12, rd8(c, (RW(12) + 0)));
wr16(c, (RW(8) + 0), (u16)RW(12));
SET64(12, (s32)rd32(c, (RW(4) + 28)));
SET32(12, RW(13) + RW(12));
SET64(12, rd8(c, (RW(12) + 1)));
wr16(c, (RW(9) + 0), (u16)RW(12));
SET64(12, rd16(c, (RW(8) + 0)));
if (RD(12) == RD(5)) { wr16(c, (RW(6) + 0), (u16)RW(5)); goto L_00141554; }
SET32(5, RW(12) + RW(4));
SET64(5, rd8(c, (RW(5) + 36)));
wr16(c, (RW(6) + 0), (u16)RW(5));
L_00141554:;
SET64(12, rd16(c, (RW(9) + 0)));
SET32(5, RW(0) + 255);
if (RD(12) == RD(5)) { wr16(c, (RW(7) + 0), (u16)RW(5)); goto L_00141570; }
SET32(5, RW(12) + RW(4));
SET64(5, rd8(c, (RW(5) + 36)));
wr16(c, (RW(7) + 0), (u16)RW(5));
L_00141570:;
SET32(12, RW(3) << 3);
SET32(5, RW(0) + 255);
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET32(3, RW(3) + RW(12));
c->f[0].u = rd32(c, (RW(3) + 0));
wr32(c, (RW(10) + 0), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET32(3, RW(12) + RW(3));
c->f[0].u = rd32(c, (RW(3) + 4));
wr32(c, (RW(11) + 0), c->f[0].u);
SET64(12, rd16(c, (RW(6) + 0)));
if (RD(12) != RD(5)) { SET64(4, rd16(c, (RW(7) + 0))); goto L_001415D0; }
SET64(3, rd16(c, (RW(7) + 0)));
{ int t = RD(3) == RD(5);  if (t) goto L_001415CC; }
wr16(c, (RW(6) + 0), (u16)RW(3));
SET64(4, rd16(c, (RW(9) + 0)));
SET64(3, (s64)(s32)0x3f800000);
wr16(c, (RW(8) + 0), (u16)RW(4));
wr32(c, (RW(10) + 0), RW(0));
wr32(c, (RW(11) + 0), RW(3)); goto L_00141614;
L_001415CC:;
SET64(4, rd16(c, (RW(7) + 0)));
L_001415D0:;
SET32(3, RW(0) + 255);
{ int t = RD(4) != RD(3);  if (t) goto L_00141600; }
{ int t = RD(12) == RD(3);  if (t) goto L_00141600; }
wr16(c, (RW(7) + 0), (u16)RW(12));
SET64(3, (s64)(s32)0x3f800000);
SET64(4, rd16(c, (RW(8) + 0)));
wr16(c, (RW(9) + 0), (u16)RW(4));
wr32(c, (RW(11) + 0), RW(0));
wr32(c, (RW(10) + 0), RW(3)); goto L_00141614;
L_00141600:;
{ int t = RD(12) != RD(4);  if (t) goto L_00141614; }
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(10) + 0), RW(3));
wr32(c, (RW(11) + 0), RW(0));
L_00141614:;
 return;
}

void JP_F_00141620(Ctx *c) { /* func_00141620 */
ENTER(0x141620);
SET64(7, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s64)(s32)0x20110000);
SET64(3, RD(3) | 0x101);
{ int t = RD(7) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_001416D4; }
SET64(3, (s64)(s32)0x20010000);
SET64(3, RD(3) | 0x101);
if (RD(7) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001416D8; }
SET64(3, (s64)(s32)0x1110000);
SET64(3, RD(3) | 0x101);
if (RD(7) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001416D8; }
SET64(3, (s64)(s32)0x1010000);
SET64(3, RD(3) | 0x101);
if (RD(7) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001416D8; }
SET64(6, (s64)(s32)0x110000);
SET64(3, RD(6) | 0x111);
if (RD(7) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001416D8; }
SET64(3, RD(6) | 0x1011);
if (RD(7) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001416D8; }
SET64(5, (s64)(s32)0x10000);
SET64(3, RD(5) | 0x1011);
if (RD(7) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001416D8; }
SET64(3, RD(5) | 0x111);
if (RD(7) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001416D8; }
SET64(3, RD(6) | 0x1001);
if (RD(7) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001416D8; }
SET64(3, RD(5) | 0x1001);
if (RD(7) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001416D8; }
SET64(3, RD(6) | 0x1);
if (RD(7) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001416D8; }
SET64(3, RD(5) | 0x1);
if (RD(7) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001416D8; }
 goto L_001416D8;
L_001416D4:;
SET64(2, (s32)rd32(c, (RW(4) + 20)));
L_001416D8:;
 return;
}

void JP_F_001416E0(Ctx *c) { /* func_001416E0 */
ENTER(0x1416e0);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(5, (s64)(s32)0x20110000);
SET64(5, RD(5) | 0x101);
{ int t = RD(3) == RD(5); SET64(2, RD(0) + RD(0)); if (t) goto L_001417D4; }
SET64(5, (s64)(s32)0x20010000);
SET64(5, RD(5) | 0x101);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET64(5, (s64)(s32)0x10000000);
SET64(5, RD(5) | 0x1);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET64(5, (s64)(s32)0x1110000);
SET64(5, RD(5) | 0x101);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET64(5, (s64)(s32)0x1010000);
SET64(5, RD(5) | 0x101);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET64(7, (s64)(s32)0x110000);
SET64(5, RD(7) | 0x111);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET64(5, RD(7) | 0x1011);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET64(6, (s64)(s32)0x10000);
SET64(5, RD(6) | 0x1011);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET64(5, RD(6) | 0x111);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET32(5, RW(0) + 4113);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET32(5, RW(0) + 273);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET64(5, RD(7) | 0x1001);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET64(5, RD(6) | 0x1001);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET32(5, RW(0) + 4097);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET64(5, RD(7) | 0x1);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET64(5, RD(6) | 0x1);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
SET32(5, RW(0) + 1);
if (RD(3) == RD(5)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001417D8; }
 goto L_001417D8;
L_001417D4:;
SET64(2, (s32)rd32(c, (RW(4) + 20)));
L_001417D8:;
 return;
}

void JP_F_001417E0(Ctx *c) { /* func_001417E0 */
ENTER(0x1417e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x1417fc); SET64(16, RD(6) + RD(0)); JP_F_001416E0(c);
SET64(4, RD(2) + RD(0));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_00141838; }
if (RD(17) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 0))); goto L_00141828; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x141820); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
 goto L_00141834;
L_00141828:;
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x141834); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_00141834:;
SET64(31, rd64(c, (RW(29) + 32)));
L_00141838:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00141850(Ctx *c) { /* func_00141850 */
ENTER(0x141850);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x141864); SET64(16, RD(5) + RD(0)); JP_F_001416E0(c);
SET64(5, RD(2) + RD(0));
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0014187C; }
SET64(31, 0x141878); SET64(4, RD(16) + RD(0)); JP_F_002A56F0(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_0014187C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00141890(Ctx *c) { /* func_00141890 */
ENTER(0x141890);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1418a4); SET64(16, RD(5) + RD(0)); JP_F_001416E0(c);
SET64(5, RD(2) + RD(0));
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001418BC; }
SET64(31, 0x1418b8); SET64(4, RD(16) + RD(0)); JP_F_002A5740(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_001418BC:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001418D0(Ctx *c) { /* func_001418D0 */
ENTER(0x1418d0);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x11000000);
wr64(c, (RW(29) + 64), RD(31));
SET64(2, RD(2) | 0x10);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 0)));
SET64(16, RD(8) + RD(0));
SET64(2, RD(5) & RD(2));
{ int t = RD(2) == RD(0); SET32(7, RW(0) + 12); if (t) goto L_00141914; }
SET64(7, RD(7) | 0x10);
L_00141914:;
if (RD(6) == RD(0)) { SET64(6, rd16(c, (RW(18) + 2))); goto L_00141924; }
SET64(7, RD(7) | 0x40);
SET64(6, rd16(c, (RW(18) + 2)));
L_00141924:;
SET64(31, 0x14192c); SET64(4, RD(19) + RD(0)); JP_F_00140FF0(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(31, 0x141940); SET64(5, RD(18) + RD(0)); JP_F_00140C60(c);
SET64(31, 0x141948); SET64(4, RD(19) + RD(0)); JP_F_001416E0(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(5, rd16(c, (RW(18) + 2)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x14195c); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00141980(Ctx *c) { /* func_00141980 */
ENTER(0x141980);
wr32(c, (RW(4) + 0), RW(5)); return;
}

void JP_F_00141990(Ctx *c) { /* func_00141990 */
ENTER(0x141990);
wr32(c, (RW(4) + 0), RW(0));
SET32(3, RW(0) + 2);
SET64(7, rd16(c, (RW(5) + 0)));
if (RD(7) != RD(3)) { SET64(7, rd16(c, (RW(5) + 4))); goto L_001419B4; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, RD(3) | 0x1);
wr32(c, (RW(4) + 0), RW(3));
SET64(7, rd16(c, (RW(5) + 4)));
L_001419B4:;
SET64(3, RD(0) | 0xffff);
if (RD(7) == RD(3)) { SET64(3, (s32)rd32(c, (RW(5) + 16))); goto L_001419D0; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, RD(3) | 0x10);
wr32(c, (RW(4) + 0), RW(3));
SET64(3, (s32)rd32(c, (RW(5) + 16)));
L_001419D0:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(5) + 20))); goto L_001419E8; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, RD(3) | 0x100);
wr32(c, (RW(4) + 0), RW(3));
SET64(3, (s32)rd32(c, (RW(5) + 20)));
L_001419E8:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(5) + 28))); goto L_00141A00; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, RD(3) | 0x1000);
wr32(c, (RW(4) + 0), RW(3));
SET64(3, (s32)rd32(c, (RW(5) + 28)));
L_00141A00:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(5) + 32))); goto L_00141A1C; }
SET64(7, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s64)(s32)0x10000);
SET64(3, RD(7) | RD(3));
wr32(c, (RW(4) + 0), RW(3));
SET64(3, (s32)rd32(c, (RW(5) + 32)));
L_00141A1C:;
{ int t = RD(3) == RD(0);  if (t) goto L_00141A34; }
SET64(7, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s64)(s32)0x100000);
SET64(3, RD(7) | RD(3));
wr32(c, (RW(4) + 0), RW(3));
L_00141A34:;
{ int t = RD(6) == RD(0);  if (t) goto L_00141A68; }
SET64(3, rd16(c, (RW(5) + 8)));
SET64(3, RD(3) & 0x8);
{ int t = RD(3) == RD(0);  if (t) goto L_00141A68; }
SET64(6, (s32)rd32(c, (RW(4) + 0)));
SET64(5, (s64)(s32)0x1000000);
SET32(3, RW(0) + -4113);
SET64(5, RD(6) | RD(5));
SET64(3, RD(5) & RD(3));
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(4) + 0), RW(3));
L_00141A68:;
 return;
}

void JP_F_00141A70(Ctx *c) { /* func_00141A70 */
ENTER(0x141a70);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) + -3200);
wr32(c, (RW(4) + 24), RW(2));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
SET32(3, RW(0) + 255);
L_00141A8C:;
SET64(5, RD(6) & 0xffff);
SET32(2, RW(6) + 6);
SET32(5, RW(4) + RW(5));
SET64(6, RD(2) & 0xffff);
wr8(c, (RW(5) + 8), (u8)RW(3));
SET64(2, RSD(6) < (s64)12);
wr8(c, (RW(5) + 9), (u8)RW(3));
wr8(c, (RW(5) + 10), (u8)RW(3));
wr8(c, (RW(5) + 11), (u8)RW(3));
wr8(c, (RW(5) + 12), (u8)RW(3));
{ int t = RD(2) != RD(0); wr8(c, (RW(5) + 13), (u8)RW(3)); if (t) { POLL(); goto L_00141A8C; } }
wr32(c, (RW(4) + 20), RW(0));
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_00141AD0(Ctx *c) { /* func_00141AD0 */
ENTER(0x141ad0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00141B70; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3200);
SET64(31, 0x141afc); wr32(c, (RW(17) + 24), RW(2)); JP_F_001416E0(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 20), RW(0)); goto L_00141B1C; }
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(4, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x141b18); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 20), RW(0));
L_00141B1C:;
SET64(5, RD(0) + RD(0));
wr32(c, (RW(17) + 4), RW(0));
SET32(3, RW(0) + 255);
L_00141B28:;
SET64(4, RD(5) & 0xffff);
SET32(2, RW(5) + 6);
SET32(4, RW(17) + RW(4));
SET64(5, RD(2) & 0xffff);
wr8(c, (RW(4) + 8), (u8)RW(3));
SET64(2, RSD(5) < (s64)12);
wr8(c, (RW(4) + 9), (u8)RW(3));
wr8(c, (RW(4) + 10), (u8)RW(3));
wr8(c, (RW(4) + 11), (u8)RW(3));
wr8(c, (RW(4) + 12), (u8)RW(3));
{ int t = RD(2) != RD(0); wr8(c, (RW(4) + 13), (u8)RW(3)); if (t) { POLL(); goto L_00141B28; } }
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(17) + 0), RW(0)); if (t) goto L_00141B70; }
SET64(31, 0x141b70); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00141B70:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00141B90(Ctx *c) { /* func_00141B90 */
ENTER(0x141b90);
hle_csel_closing(c);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) != RD(2); SET64(16, RD(4) + RD(0)); if (t) goto L_00141BD8; }
SET64(31, 0x141bb4);  JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x141bc4); SET32(4, RW(2) - RW(3)); JP_F_00123EB0(c);
SET64(1, RSD(2) < (s64)2);
if (RD(1) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_00141BDC; }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 0), RW(2));
L_00141BD8:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
L_00141BDC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00141BF0(Ctx *c) { /* func_00141BF0 */
ENTER(0x141bf0);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
if (RD(4) != RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_00141C40; }
SET64(31, 0x141c18);  JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x141c28); SET32(4, RW(2) - RW(3)); JP_F_00123EB0(c);
SET64(1, RSD(2) < (s64)2);
{ int t = RD(1) != RD(0);  if (t) goto L_00141C3C; }
SET32(3, RW(0) + 3);
wr32(c, (RW(16) + 0), RW(3));
L_00141C3C:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_00141C40:;
SET32(3, RW(0) + 2);
{ int t = RD(4) == RD(3);  if (t) goto L_00141C60; }
SET32(3, RW(0) + 1);
{ int t = RD(4) == RD(3);  if (t) goto L_00141C60; }
wr32(c, (RW(16) + 0), RW(0)); goto L_00141C6C;
L_00141C60:;
SET64(31, 0x141c68);  JP_F_00139590(c);
wr32(c, (RW(16) + 0), RW(0));
L_00141C6C:;
wr32(c, (RW(16) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00141C80(Ctx *c) { /* func_00141C80 */
ENTER(0x141c80);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(4) + 16), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(0));
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void JP_F_00141CB0(Ctx *c) { /* func_00141CB0 */
ENTER(0x141cb0);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) == RD(0)) { wr32(c, (RW(4) + 24), RW(0)); goto L_00141D30; }
c->f[0].u = rd32(c, (RW(4) + 28));
c->f[1].u = RW(0);
c->f[3].u = rd32(c, (RW(4) + 20));
c->fcc = F(0) <= F(1);
{ int t = c->fcc; c->f[4].u = rd32(c, (RW(3) + 24)); if (t) goto L_00141CDC; }
c->f[3].u = c->f[1].u; goto L_00141CF0;
L_00141CDC:;
c->f[0].u = rd32(c, (RW(4) + 36));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = rd32(c, (RW(3) + 28)); goto L_00141CF4; }
c->f[3].u = rd32(c, (RW(4) + 40));
L_00141CF0:;
c->f[0].u = rd32(c, (RW(3) + 28));
L_00141CF4:;
c->f[1].u = RW(0);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; c->f[2].u = rd32(c, (RW(3) + 20)); if (t) goto L_00141D10; }
c->f[2].u = c->f[1].u; goto L_00141D24;
L_00141D10:;
c->f[0].u = rd32(c, (RW(3) + 36));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(4) * F(2)); goto L_00141D28; }
c->f[2].u = rd32(c, (RW(3) + 40));
L_00141D24:;
c->f[0].f = fpu(F(4) * F(2));
L_00141D28:;
c->f[0].f = fpu(F(3) * F(0));
wr32(c, (RW(4) + 24), c->f[0].u);
L_00141D30:;
 return;
}

void JP_F_00141D40(Ctx *c) { /* func_00141D40 */
ENTER(0x141d40);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
c->f[1].u = RW(0);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[0].u = rd32(c, (RW(4) + 28));
c->f[2].u = rd32(c, (RW(4) + 20));
c->fcc = F(0) <= F(1);
{ int t = c->fcc; c->f[23].u = c->f[12].u; if (t) goto L_00141D88; }
c->f[2].u = c->f[1].u; goto L_00141D9C;
L_00141D88:;
c->f[0].u = rd32(c, (RW(18) + 36));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[20].f = fpu(F(23) * F(2)); goto L_00141DA0; }
c->f[2].u = rd32(c, (RW(18) + 40));
L_00141D9C:;
c->f[20].f = fpu(F(23) * F(2));
L_00141DA0:;
wr32(c, (RW(18) + 24), c->f[20].u);
SET64(16, (s32)rd32(c, (RW(18) + 4)));
if (RD(16) == RD(0)) { SET64(16, (s32)rd32(c, (RW(18) + 8))); goto L_00141ED8; }
c->f[0].u = rd32(c, (RW(16) + 28));
c->f[1].u = RW(0);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; c->f[2].u = rd32(c, (RW(16) + 20)); if (t) goto L_00141DD0; }
c->f[2].u = c->f[1].u; goto L_00141DE4;
L_00141DD0:;
c->f[0].u = rd32(c, (RW(16) + 36));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[22].f = fpu(F(23) * F(2)); goto L_00141DE8; }
c->f[2].u = rd32(c, (RW(16) + 40));
L_00141DE4:;
c->f[22].f = fpu(F(23) * F(2));
L_00141DE8:;
wr32(c, (RW(16) + 24), c->f[22].u);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 8))); goto L_00141E64; }
SET64(31, 0x141e00); SET64(4, RD(16) + RD(0)); JP_F_00142040(c);
SET64(17, RD(2) + RD(0));
SET64(31, 0x141e0c); SET64(4, RD(17) + RD(0)); JP_F_00142210(c);
c->f[21].f = fpu(F(23) * F(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x141e1c); wr32(c, (RW(17) + 24), c->f[21].u); JP_F_00142040(c);
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00141E3C; }
SET64(31, 0x141e2c); SET64(4, RD(17) + RD(0)); JP_F_00142040(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x141e38); c->f[12].u = c->f[23].u; JP_F_00141D40(c);
SET64(4, RD(17) + RD(0));
L_00141E3C:;
SET64(31, 0x141e44);  JP_F_00142030(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00141E60; }
SET64(31, 0x141e54); SET64(4, RD(17) + RD(0)); JP_F_00142030(c);
c->f[12].u = c->f[21].u;
SET64(31, 0x141e60); SET64(4, RD(2) + RD(0)); JP_F_00141D40(c);
L_00141E60:;
SET64(3, (s32)rd32(c, (RW(16) + 8)));
L_00141E64:;
{ int t = RD(3) == RD(0);  if (t) goto L_00141ED4; }
SET64(31, 0x141e74); SET64(4, RD(16) + RD(0)); JP_F_00142030(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x141e80); SET64(4, RD(16) + RD(0)); JP_F_00142210(c);
c->f[21].f = fpu(F(22) * F(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x141e90); wr32(c, (RW(16) + 24), c->f[21].u); JP_F_00142040(c);
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_00141EB0; }
SET64(31, 0x141ea0); SET64(4, RD(16) + RD(0)); JP_F_00142040(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x141eac); c->f[12].u = c->f[22].u; JP_F_00141D40(c);
SET64(4, RD(16) + RD(0));
L_00141EB0:;
SET64(31, 0x141eb8);  JP_F_00142030(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00141ED4; }
SET64(31, 0x141ec8); SET64(4, RD(16) + RD(0)); JP_F_00142030(c);
c->f[12].u = c->f[21].u;
SET64(31, 0x141ed4); SET64(4, RD(2) + RD(0)); JP_F_00141D40(c);
L_00141ED4:;
SET64(16, (s32)rd32(c, (RW(18) + 8)));
L_00141ED8:;
if (RD(16) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_00142008; }
c->f[0].u = rd32(c, (RW(16) + 28));
c->f[1].u = RW(0);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; c->f[2].u = rd32(c, (RW(16) + 20)); if (t) goto L_00141F00; }
c->f[2].u = c->f[1].u; goto L_00141F14;
L_00141F00:;
c->f[0].u = rd32(c, (RW(16) + 36));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[22].f = fpu(F(20) * F(2)); goto L_00141F18; }
c->f[2].u = rd32(c, (RW(16) + 40));
L_00141F14:;
c->f[22].f = fpu(F(20) * F(2));
L_00141F18:;
wr32(c, (RW(16) + 24), c->f[22].u);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 8))); goto L_00141F94; }
SET64(31, 0x141f30); SET64(4, RD(16) + RD(0)); JP_F_00142040(c);
SET64(17, RD(2) + RD(0));
SET64(31, 0x141f3c); SET64(4, RD(17) + RD(0)); JP_F_00142210(c);
c->f[21].f = fpu(F(20) * F(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x141f4c); wr32(c, (RW(17) + 24), c->f[21].u); JP_F_00142040(c);
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00141F6C; }
SET64(31, 0x141f5c); SET64(4, RD(17) + RD(0)); JP_F_00142040(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x141f68); c->f[12].u = c->f[20].u; JP_F_00141D40(c);
SET64(4, RD(17) + RD(0));
L_00141F6C:;
SET64(31, 0x141f74);  JP_F_00142030(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00141F90; }
SET64(31, 0x141f84); SET64(4, RD(17) + RD(0)); JP_F_00142030(c);
c->f[12].u = c->f[21].u;
SET64(31, 0x141f90); SET64(4, RD(2) + RD(0)); JP_F_00141D40(c);
L_00141F90:;
SET64(3, (s32)rd32(c, (RW(16) + 8)));
L_00141F94:;
{ int t = RD(3) == RD(0);  if (t) goto L_00142004; }
SET64(31, 0x141fa4); SET64(4, RD(16) + RD(0)); JP_F_00142030(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x141fb0); SET64(4, RD(16) + RD(0)); JP_F_00142210(c);
c->f[20].f = fpu(F(22) * F(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x141fc0); wr32(c, (RW(16) + 24), c->f[20].u); JP_F_00142040(c);
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_00141FE0; }
SET64(31, 0x141fd0); SET64(4, RD(16) + RD(0)); JP_F_00142040(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x141fdc); c->f[12].u = c->f[22].u; JP_F_00141D40(c);
SET64(4, RD(16) + RD(0));
L_00141FE0:;
SET64(31, 0x141fe8);  JP_F_00142030(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00142004; }
SET64(31, 0x141ff8); SET64(4, RD(16) + RD(0)); JP_F_00142030(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x142004); SET64(4, RD(2) + RD(0)); JP_F_00141D40(c);
L_00142004:;
SET64(31, rd64(c, (RW(29) + 64)));
L_00142008:;
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 80); return;
}

void JP_F_00142030(Ctx *c) { /* func_00142030 */
ENTER(0x142030);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void JP_F_00142040(Ctx *c) { /* func_00142040 */
ENTER(0x142040);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void JP_F_00142050(Ctx *c) { /* func_00142050 */
ENTER(0x142050);
c->f[0].u = RW(0);
c->fcc = F(0) == F(12);
if (!c->fcc) { wr32(c, (RW(4) + 36), c->f[12].u); goto L_00142074; }
wr32(c, (RW(4) + 40), c->f[0].u);
wr32(c, (RW(4) + 36), c->f[0].u);
wr8(c, (RW(4) + 32), (u8)RW(0)); goto L_0014207C;
L_00142074:;
wr32(c, (RW(4) + 40), c->f[13].u);
wr8(c, (RW(4) + 32), (u8)RW(0));
L_0014207C:;
 return;
}

void JP_F_00142090(Ctx *c) { /* func_00142090 */
ENTER(0x142090);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
c->f[1].u = RW(0);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[0].u = rd32(c, (RW(4) + 28));
c->f[2].u = rd32(c, (RW(4) + 20));
c->fcc = F(0) <= F(1);
{ int t = c->fcc; SET64(16, RD(4) + RD(0)); if (t) goto L_001420C0; }
c->f[2].u = c->f[1].u; goto L_001420D4;
L_001420C0:;
c->f[0].u = rd32(c, (RW(16) + 36));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = rd32(c, (RW(16) + 28)); goto L_001420D8; }
c->f[2].u = rd32(c, (RW(16) + 40));
L_001420D4:;
c->f[0].u = rd32(c, (RW(16) + 28));
L_001420D8:;
c->f[1].u = RW(0);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; c->f[20].f = fpu(F(12) * F(2)); if (t) goto L_00142118; }
c->f[2].u = rd32(c, (RW(16) + 36));
c->fcc = F(2) <= F(1);
if (c->fcc) { c->f[2].u = rd32(c, (RW(16) + 20)); goto L_001420FC; }
L_001420FC:;
c->f[1].u = rd32(c, (RW(16) + 28));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc - F(12) * F(2));
wr32(c, (RW(16) + 28), c->f[0].u); goto L_0014215C;
L_00142118:;
wr32(c, (RW(16) + 28), c->f[1].u);
c->f[0].u = rd32(c, (RW(16) + 36));
c->fcc = F(0) <= F(1);
if (c->fcc) { SET64(3, (s64)(s32)0x461c0000); goto L_00142160; }
SET64(3, rd8(c, (RW(16) + 32)));
if (RD(3) != RD(0)) { c->f[0].f = fpu(F(0) - F(20)); goto L_00142144; }
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 32), (u8)RW(3)); goto L_0014215C;
L_00142144:;
c->fcc = F(0) <= F(1);
{ int t = !c->fcc; wr32(c, (RW(16) + 36), c->f[0].u); if (t) goto L_0014215C; }
wr32(c, (RW(16) + 40), c->f[1].u);
wr32(c, (RW(16) + 36), c->f[1].u);
wr8(c, (RW(16) + 32), (u8)RW(0));
L_0014215C:;
SET64(3, (s64)(s32)0x461c0000);
L_00142160:;
SET64(3, RD(3) | 0x4000);
c->f[1].u = rd32(c, (RW(16) + 16));
c->f[0].u = RW(3);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[1].u = rd32(c, (RW(16) + 16)); goto L_00142188; }
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(16) + 16), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 16));
L_00142188:;
SET64(3, (s64)(s32)0x41000000);
c->f[0].u = RW(3);
c->f[2].f = fpu(F(1) + F(20));
c->f[1].f = fpu(F(2) - F(1));
c->fcc = F(1) <= F(0);
wr32(c, (RW(16) + 16), c->f[2].u);
{ int t = c->fcc; wr32(c, (RW(16) + 24), c->f[1].u); if (t) goto L_001421B0; }
wr32(c, (RW(16) + 24), c->f[0].u);
L_001421B0:;
c->f[1].u = rd32(c, (RW(16) + 24));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_001421D0; }
wr32(c, (RW(16) + 24), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
L_001421D0:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_001421E4; }
SET64(31, 0x1421e0);  JP_F_00142090(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_001421E4:;
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_001421F8; }
SET64(31, 0x1421f4); c->f[12].u = c->f[20].u; JP_F_00142090(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_001421F8:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00142210(Ctx *c) { /* func_00142210 */
ENTER(0x142210);
c->f[1].u = rd32(c, (RW(4) + 28));
c->f[2].u = RW(0);
c->fcc = F(1) <= F(2);
{ int t = c->fcc; c->f[0].u = rd32(c, (RW(4) + 20)); if (t) goto L_00142230; }
c->f[0].u = c->f[2].u; goto L_00142244;
L_00142230:;
c->f[1].u = rd32(c, (RW(4) + 36));
c->fcc = F(1) <= F(2);
{ int t = c->fcc;  if (t) goto L_00142244; }
c->f[0].u = rd32(c, (RW(4) + 40));
L_00142244:;
 return;
}

void JP_F_00142250(Ctx *c) { /* func_00142250 */
ENTER(0x142250);
SET32(29, RW(29) + -16);
SET64(6, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s64)(s32)0x530000);
wr32(c, (RW(2) + -22496), RW(0));
SET32(6, RW(6) + -22452);
SET64(2, (s64)(s32)0x530000);
SET64(7, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + -22492), RW(0));
SET64(3, (s64)(s32)0x530000);
SET64(2, (s64)(s32)0x530000);
wr32(c, (RW(3) + -22476), RW(7));
wr32(c, (RW(2) + -22488), RW(0));
SET64(3, (s64)(s32)0x530000);
SET64(2, (s64)(s32)0x530000);
wr32(c, (RW(3) + -22468), RW(0));
wr32(c, (RW(2) + -22480), RW(0));
SET64(4, (s64)(s32)0x530000);
SET64(2, (s64)(s32)0x530000);
SET64(3, (s64)(s32)0x530000);
wr32(c, (RW(2) + -22472), RW(0));
SET32(4, RW(4) + -22496);
SET64(2, (s64)(s32)0x530000);
wr32(c, (RW(3) + -22460), RW(0));
wr32(c, (RW(2) + -22456), RW(0));
SET64(5, RD(4) + RD(0));
SET64(2, (s64)(s32)0x530000);
wr32(c, (RW(6) + 0), RW(0));
wr8(c, (RW(2) + -22464), (u8)RW(0));
SET64(2, (s64)(s32)0x530000);
wr32(c, (RW(6) + 4), RW(0));
SET32(2, RW(2) + -22408);
wr32(c, (RW(6) + 8), RW(0));
wr32(c, (RW(6) + 16), RW(0));
wr32(c, (RW(6) + 20), RW(7));
wr32(c, (RW(2) + 20), RW(7));
wr32(c, (RW(6) + 24), RW(0));
wr32(c, (RW(6) + 28), RW(0));
wr32(c, (RW(6) + 40), RW(0));
wr32(c, (RW(6) + 36), RW(0));
wr8(c, (RW(6) + 32), (u8)RW(0));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 16), RW(0));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 28), RW(0));
wr32(c, (RW(2) + 40), RW(0));
wr32(c, (RW(2) + 36), RW(0));
SET64(31, 0x14231c); wr8(c, (RW(2) + 32), (u8)RW(0)); JP_F_001423A0(c);
SET64(4, (s64)(s32)0x530000);
SET64(31, 0x142328); SET32(4, RW(4) + -22452); JP_F_00142370(c);
SET64(4, (s64)(s32)0x530000);
SET64(31, 0x142334); SET32(4, RW(4) + -22452); JP_F_00141CB0(c);
SET64(4, (s64)(s32)0x530000);
SET64(6, (s64)(s32)0x530000);
SET32(4, RW(4) + -22496);
SET32(6, RW(6) + -22408);
SET64(31, 0x14234c); SET64(5, RD(4) + RD(0)); JP_F_001423A0(c);
SET64(4, (s64)(s32)0x530000);
SET64(31, 0x142358); SET32(4, RW(4) + -22408); JP_F_00142370(c);
SET64(4, (s64)(s32)0x530000);
SET64(31, 0x142364); SET32(4, RW(4) + -22408); JP_F_00141CB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00142370(Ctx *c) { /* func_00142370 */
ENTER(0x142370);
wr32(c, (RW(4) + 16), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr8(c, (RW(4) + 32), (u8)RW(0)); return;
}

void JP_F_001423A0(Ctx *c) { /* func_001423A0 */
ENTER(0x1423a0);
SET64(3, (s32)rd32(c, (RW(4) + 8)));
if (RD(3) == RD(0)) { wr32(c, (RW(4) + 8), RW(6)); goto L_001423EC; }
SET32(4, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
if (RD(3) == RD(0)) { wr32(c, (RW(4) + 0), RW(6)); goto L_001423EC; }
SET32(4, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(0);  if (t) goto L_001423E8; }
L_001423CC:;
SET32(4, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_001423CC; } }
L_001423E8:;
wr32(c, (RW(4) + 0), RW(6));
L_001423EC:;
wr32(c, (RW(6) + 0), RW(5)); return;
}

void JP_F_00142400(Ctx *c) { /* func_00142400 */
ENTER(0x142400);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x530000);
SET64(5, (s64)(s32)0x140000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(4) + -22496);
SET32(5, RW(5) + 9264);
SET32(6, RW(0) + 44);
SET64(31, 0x142424); SET32(7, RW(0) + 3); JP_F_00102360(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00142430(Ctx *c) { /* func_00142430 */
ENTER(0x142430);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00142494; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x142468);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_00142480; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 12), RW(2));
SET64(2, RD(16) << 48);
L_00142480:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00142498; }
SET64(31, 0x142494); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00142494:;
SET64(2, RD(17) + RD(0));
L_00142498:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001424B0(Ctx *c) { /* func_001424B0 */
ENTER(0x1424b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, (s32)rd32(c, (RW(4) + 0)));
SET64(16, RD(4) + RD(0));
SET64(31, 0x1424d0); SET64(5, RD(16) + RD(0)); JP_F_001425B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_00142574; }
SET64(4, (s32)rd32(c, (RW(2) + 4)));
wr32(c, (RW(2) + 0), RW(17));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_001424F8; }
wr32(c, (RW(3) + 4), RW(0));
L_001424F8:;
{ int t = RD(4) == RD(0);  if (t) goto L_00142520; }
L_00142500:;
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(17) != RD(0); wr32(c, (RW(4) + 0), RW(17)); if (t) goto L_00142510; }
wr32(c, (RW(4) + 4), RW(0));
L_00142510:;
SET64(4, RD(2) + RD(0));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00142500; } }
L_00142520:;
{ int t = RD(17) == RD(0);  if (t) goto L_00142570; }
SET64(3, (s32)rd32(c, (RW(17) + 8)));
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 8))); goto L_0014256C; }
SET64(2, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(2) == RD(0);  if (t) goto L_00142560; }
L_00142540:;
SET64(3, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 4)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00142540; } }
L_00142560:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(3) + 4), RW(2)); goto L_00142570;
L_0014256C:;
wr32(c, (RW(17) + 8), RW(2));
L_00142570:;
wr32(c, (RW(16) + 4), RW(0));
L_00142574:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x142580); wr32(c, (RW(16) + 8), RW(0)); JP_F_001425A0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001425A0(Ctx *c) { /* func_001425A0 */
ENTER(0x1425a0);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0)); return;
}

void JP_F_001425B0(Ctx *c) { /* func_001425B0 */
ENTER(0x1425b0);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) == RD(0)) { wr32(c, (RW(4) + 4), RW(0)); goto L_00142614; }
SET32(6, RW(3) + 8);
SET64(3, (s32)rd32(c, (RW(3) + 8)));
if (RD(3) != RD(5)) { SET32(6, RW(3) + 4); goto L_001425E0; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
if (RD(3) != RD(0)) { wr32(c, (RW(6) + 0), RW(3)); goto L_00142610; }
wr32(c, (RW(6) + 0), RW(0)); goto L_00142610;
L_001425E0:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(5);  if (t) goto L_00142608; }
L_001425EC:;
SET32(6, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(5);  if (t) { POLL(); goto L_001425EC; } }
L_00142608:;
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 0), RW(3));
L_00142610:;
wr32(c, (RW(4) + 4), RW(0));
L_00142614:;
wr32(c, (RW(4) + 0), RW(0)); return;
}

void JP_F_00142620(Ctx *c) { /* func_00142620 */
ENTER(0x142620);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
SET32(5, RW(5) + -3104);
wr32(c, (RW(4) + 12), RW(2));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(5));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr8(c, (RW(4) + 32), (u8)RW(0)); return;
}

void JP_F_00142670(Ctx *c) { /* func_00142670 */
ENTER(0x142670);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_001426AC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -3136);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 12), RW(3)); if (t) goto L_001426A8; }
SET64(31, 0x1426a8);  JP_F_001004B0(c);
L_001426A8:;
SET64(2, RD(16) + RD(0));
L_001426AC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001426C0(Ctx *c) { /* func_001426C0 */
ENTER(0x1426c0);
SET64(3, (s32)rd32(c, (RW(4) + 8)));
if (RD(3) == RD(0)) { wr32(c, (RW(4) + 8), RW(5)); goto L_0014270C; }
SET32(6, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
if (RD(3) == RD(0)) { wr32(c, (RW(6) + 0), RW(5)); goto L_0014270C; }
SET32(6, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(0);  if (t) goto L_00142708; }
L_001426EC:;
SET32(6, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_001426EC; } }
L_00142708:;
wr32(c, (RW(6) + 0), RW(5));
L_0014270C:;
wr32(c, (RW(5) + 0), RW(4));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(5) + 16), RW(0));
c->f[1].u = RW(0);
wr32(c, (RW(5) + 20), RW(3));
wr32(c, (RW(5) + 24), RW(0));
wr32(c, (RW(5) + 28), RW(0));
wr32(c, (RW(5) + 40), RW(0));
wr32(c, (RW(5) + 36), RW(0));
wr8(c, (RW(5) + 32), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
if (RD(3) == RD(0)) { wr32(c, (RW(5) + 24), c->f[1].u); goto L_001427B0; }
c->f[0].u = rd32(c, (RW(5) + 28));
c->f[3].u = rd32(c, (RW(5) + 20));
c->fcc = F(0) <= F(1);
{ int t = c->fcc; c->f[4].u = rd32(c, (RW(3) + 24)); if (t) goto L_0014275C; }
c->f[3].u = c->f[1].u; goto L_00142770;
L_0014275C:;
c->f[0].u = rd32(c, (RW(5) + 36));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].u = rd32(c, (RW(3) + 28)); goto L_00142774; }
c->f[3].u = rd32(c, (RW(5) + 40));
L_00142770:;
c->f[0].u = rd32(c, (RW(3) + 28));
L_00142774:;
c->f[1].u = RW(0);
c->fcc = F(0) <= F(1);
{ int t = c->fcc; c->f[2].u = rd32(c, (RW(3) + 20)); if (t) goto L_00142790; }
c->f[2].u = c->f[1].u; goto L_001427A4;
L_00142790:;
c->f[0].u = rd32(c, (RW(3) + 36));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(4) * F(2)); goto L_001427A8; }
c->f[2].u = rd32(c, (RW(3) + 40));
L_001427A4:;
c->f[0].f = fpu(F(4) * F(2));
L_001427A8:;
c->f[0].f = fpu(F(3) * F(0));
wr32(c, (RW(5) + 24), c->f[0].u);
L_001427B0:;
 return;
}

void JP_F_001427C0(Ctx *c) { /* func_001427C0 */
ENTER(0x1427c0);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) == RD(0)) { wr32(c, (RW(4) + 4), RW(0)); goto L_00142824; }
SET32(5, RW(3) + 8);
SET64(3, (s32)rd32(c, (RW(3) + 8)));
if (RD(3) != RD(4)) { SET32(5, RW(3) + 4); goto L_001427F0; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
if (RD(3) != RD(0)) { wr32(c, (RW(5) + 0), RW(3)); goto L_00142820; }
wr32(c, (RW(5) + 0), RW(0)); goto L_00142820;
L_001427F0:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) == RD(4);  if (t) goto L_00142818; }
L_001427FC:;
SET32(5, RW(3) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(3) != RD(4);  if (t) { POLL(); goto L_001427FC; } }
L_00142818:;
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(5) + 0), RW(3));
L_00142820:;
wr32(c, (RW(4) + 4), RW(0));
L_00142824:;
wr32(c, (RW(4) + 0), RW(0)); return;
}

void JP_F_00142830(Ctx *c) { /* func_00142830 */
ENTER(0x142830);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s8)rd8(c, (RW(28) + -30312)));
{ int t = RD(2) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001428A8; }
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
SET64(31, 0x1428a0); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30312), (u8)RW(2));
L_001428A8:;
SET64(31, 0x1428b0); SET32(4, RW(29) + 112); JP_F_002AF080(c);
SET64(8, (s64)(s32)0x420000);
SET64(4, RD(17) + RD(0));
SET32(8, RW(8) + -17024);
SET64(5, RD(16) + RD(0));
rd128(c, (RW(8) + 0) & ~15u, &c->r[7]);
SET32(6, RW(29) + 112);
rd128(c, (RW(8) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(8) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
rd128(c, (RW(8) + 48) & ~15u, &c->r[2]);
SET64(31, 0x1428e8); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); JP_F_00142900(c);
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_00142900(Ctx *c) { /* func_00142900 */
ENTER(0x142900);
SET32(29, RW(29) + -400);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x14292c); SET32(4, RW(29) + 80); JP_F_002AF080(c);
rd128(c, (RW(17) + 208) & ~15u, &c->r[2]);
SET32(4, RW(29) + 80);
wr128(c, (RW(29) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 224) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 256) & ~15u, &c->r[2]);
SET64(31, 0x142954); wr128(c, (RW(29) + 128) & ~15u, &c->r[2]); JP_F_002AE990(c);
SET64(19, RD(2) + RD(0));
SET64(31, 0x142960); SET32(4, RW(29) + 272); JP_F_002AF080(c);
rd128(c, (RW(19) + 0) & ~15u, &c->r[2]);
SET64(6, RD(16) + RD(0));
SET32(5, RW(29) + 272);
SET32(4, RW(29) + 144);
wr128(c, (RW(29) + 272) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 48) & ~15u, &c->r[2]);
SET64(31, 0x142990); wr128(c, (RW(29) + 320) & ~15u, &c->r[2]); JP_F_002AEAE0(c);
SET64(31, 0x142998); SET32(4, RW(29) + 336); JP_F_002AF080(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 336) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 352) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 368) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(5, (s32)rd32(c, (RW(17) + 160)));
{ int t = RD(5) != RD(0); SET32(16, RW(29) + 336); if (t) goto L_001429CC; }
SET64(4, RD(18) + RD(0)); goto L_001429E0;
L_001429CC:;
SET64(6, RD(16) + RD(0));
SET64(31, 0x1429d8); SET32(4, RW(29) + 208); JP_F_00142900(c);
SET32(16, RW(29) + 208);
SET64(4, RD(18) + RD(0));
L_001429E0:;
SET64(31, 0x1429e8);  JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 400); return;
}

void JP_F_00142A30(Ctx *c) { /* func_00142A30 */
ENTER(0x142a30);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s8)rd8(c, (RW(28) + -30312)));
{ int t = RD(2) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00142AA8; }
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
SET64(31, 0x142aa0); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30312), (u8)RW(2));
L_00142AA8:;
SET64(31, 0x142ab0); SET32(4, RW(29) + 112); JP_F_002AF080(c);
SET64(8, (s64)(s32)0x420000);
SET64(4, RD(17) + RD(0));
SET32(8, RW(8) + -17024);
SET64(5, RD(16) + RD(0));
rd128(c, (RW(8) + 0) & ~15u, &c->r[7]);
SET32(6, RW(29) + 112);
rd128(c, (RW(8) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(8) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
rd128(c, (RW(8) + 48) & ~15u, &c->r[2]);
SET64(31, 0x142ae8); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); JP_F_00142B00(c);
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_00142B00(Ctx *c) { /* func_00142B00 */
ENTER(0x142b00);
SET32(29, RW(29) + -400);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x142b2c); SET32(4, RW(29) + 80); JP_F_002AF080(c);
rd128(c, (RW(17) + 0) & ~15u, &c->r[2]);
SET32(4, RW(29) + 80);
wr128(c, (RW(29) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[2]);
rd128(c, (RW(17) + 48) & ~15u, &c->r[2]);
SET64(31, 0x142b54); wr128(c, (RW(29) + 128) & ~15u, &c->r[2]); JP_F_002AE990(c);
SET64(19, RD(2) + RD(0));
SET64(31, 0x142b60); SET32(4, RW(29) + 272); JP_F_002AF080(c);
rd128(c, (RW(19) + 0) & ~15u, &c->r[2]);
SET64(6, RD(16) + RD(0));
SET32(5, RW(29) + 272);
SET32(4, RW(29) + 144);
wr128(c, (RW(29) + 272) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(19) + 48) & ~15u, &c->r[2]);
SET64(31, 0x142b90); wr128(c, (RW(29) + 320) & ~15u, &c->r[2]); JP_F_002AEAE0(c);
SET64(31, 0x142b98); SET32(4, RW(29) + 336); JP_F_002AF080(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 336) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 352) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 368) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(5, (s32)rd32(c, (RW(17) + 160)));
{ int t = RD(5) != RD(0); SET32(16, RW(29) + 336); if (t) goto L_00142BCC; }
SET64(4, RD(18) + RD(0)); goto L_00142BE0;
L_00142BCC:;
SET64(6, RD(16) + RD(0));
SET64(31, 0x142bd8); SET32(4, RW(29) + 208); JP_F_00142B00(c);
SET32(16, RW(29) + 208);
SET64(4, RD(18) + RD(0));
L_00142BE0:;
SET64(31, 0x142be8);  JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 400); return;
}

void JP_F_00142C30(Ctx *c) { /* func_00142C30 */
ENTER(0x142c30);
SET32(29, RW(29) + -240);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 72), c->f[22].u);
wr32(c, (RW(29) + 68), c->f[21].u);
wr32(c, (RW(29) + 64), c->f[20].u);
SET64(2, (s8)rd8(c, (RW(28) + -30312)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00142CAC; }
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
SET64(31, 0x142ca4); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30312), (u8)RW(2));
L_00142CAC:;
SET64(31, 0x142cb4); SET32(4, RW(29) + 176); JP_F_002AF080(c);
SET64(6, (s64)(s32)0x420000);
SET32(6, RW(6) + -17024);
rd128(c, (RW(6) + 0) & ~15u, &c->r[5]);
rd128(c, (RW(6) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(6) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 176) & ~15u, &c->r[5]);
wr128(c, (RW(29) + 192) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(6) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 224) & ~15u, &c->r[2]);
c->f[22].u = rd32(c, (RW(29) + 216));
c->f[21].u = rd32(c, (RW(29) + 196));
c->f[20].u = rd32(c, (RW(29) + 176));
SET64(31, 0x142cf0); SET64(4, RD(16) + RD(0)); JP_F_002A4D70(c);
SET64(31, 0x142cf8); SET32(4, RW(29) + 112); JP_F_002AF080(c);
SET64(31, 0x142d00); SET32(4, RW(29) + 112); JP_F_002AF080(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(16) + RD(0));
SET32(6, RW(29) + 112);
wr32(c, (RW(29) + 112), c->f[20].u);
wr32(c, (RW(29) + 132), c->f[21].u);
SET64(31, 0x142d1c); wr32(c, (RW(29) + 152), c->f[22].u); JP_F_00106578(c);
SET64(31, rd64(c, (RW(29) + 96)));
c->f[22].u = rd32(c, (RW(29) + 72));
rd128(c, (RW(29) + 80) & ~15u, &c->r[16]);
c->f[21].u = rd32(c, (RW(29) + 68));
c->f[20].u = rd32(c, (RW(29) + 64));
SET32(29, RW(29) + 240); return;
}

void JP_F_00142D40(Ctx *c) { /* func_00142D40 */
ENTER(0x142d40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
rd128(c, (RW(16) + 256) & ~15u, &c->r[2]);
SET64(31, 0x142d5c); wr128(c, (RW(29) + 32) & ~15u, &c->r[2]); JP_F_002A4D70(c);
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00142D80(Ctx *c) { /* func_00142D80 */
ENTER(0x142d80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x142d94); SET64(16, RD(4) + RD(0)); JP_F_002A4D70(c);
c->f[0].u = rd32(c, (RW(16) + 208));
wr32(c, (RW(16) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 224));
wr32(c, (RW(16) + 16), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 240));
wr32(c, (RW(16) + 32), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 212));
wr32(c, (RW(16) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 228));
wr32(c, (RW(16) + 20), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 244));
wr32(c, (RW(16) + 36), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 216));
wr32(c, (RW(16) + 8), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 232));
wr32(c, (RW(16) + 24), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 248));
wr32(c, (RW(16) + 40), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00142DF0(Ctx *c) { /* func_00142DF0 */
ENTER(0x142df0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
rd128(c, (RW(4) + 208) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(4) + 224) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(4) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(4) + 256) & ~15u, &c->r[2]);
SET64(31, 0x142e1c); wr128(c, (RW(4) + 48) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00142E30(Ctx *c) { /* func_00142E30 */
ENTER(0x142e30);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 166);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x142e44); SET32(6, RW(0) + 32); JP_F_0012A7C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) ^ RD(0));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00142E60(Ctx *c) { /* func_00142E60 */
ENTER(0x142e60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x142e80); SET64(4, RD(16) + RD(0)); JP_F_0012A4D8(c);
SET64(31, 0x142e88); SET64(4, RD(16) + RD(0)); JP_F_0012A4D8(c);
SET32(4, RW(17) + 166);
SET64(31, 0x142e94); SET64(5, RD(16) + RD(0)); JP_F_0012A3C0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00142EB0(Ctx *c) { /* func_00142EB0 */
ENTER(0x142eb0);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 160), RW(5));
SET64(4, RD(5) + RD(0));
SET64(31, 0x142ecc); SET64(5, RD(2) + RD(0)); JP_F_002438D0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00142EE0(Ctx *c) { /* func_00142EE0 */
ENTER(0x142ee0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00142F34; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -3072);
SET64(31, 0x142f10); wr32(c, (RW(17) + 144), RW(2)); JP_F_002437E0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x142f1c); SET64(5, RD(0) + RD(0)); JP_F_00243920(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00142F38; }
SET64(31, 0x142f34); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00142F34:;
SET64(2, RD(17) + RD(0));
L_00142F38:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00142F50(Ctx *c) { /* func_00142F50 */
ENTER(0x142f50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x142f64); SET64(16, RD(4) + RD(0)); JP_F_00243A30(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(16) + 208);
SET32(2, RW(2) + -3072);
wr32(c, (RW(16) + 144), RW(2));
SET64(31, 0x142f7c); wr32(c, (RW(16) + 160), RW(0)); JP_F_002AF080(c);
wr8(c, (RW(16) + 272), (u8)RW(0));
SET64(2, RD(16) + RD(0));
wr8(c, (RW(16) + 166), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00142FA0(Ctx *c) { /* func_00142FA0 */
ENTER(0x142fa0);
 return;
}

void JP_F_00142FB0(Ctx *c) { /* func_00142FB0 */
ENTER(0x142fb0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00143074; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2512);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(7, RW(7) + -2372);
SET32(5, RW(5) + -2464);
SET32(3, RW(3) + -2444);
SET32(2, RW(17) + 488);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 216), RW(5));
wr32(c, (RW(17) + 220), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x143020);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x14302c); SET64(5, RD(0) + RD(0)); JP_F_00156F00(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_00143060; }
SET32(4, RW(17) + 488);
{ int t = RD(4) == RD(0);  if (t) goto L_0014305C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 504), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14305c);  rt_call(c, t); }
L_0014305C:;
SET64(2, RD(16) << 48);
L_00143060:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00143078; }
SET64(31, 0x143074); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00143074:;
SET64(2, RD(17) + RD(0));
L_00143078:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00143090(Ctx *c) { /* func_00143090 */
ENTER(0x143090);
SET32(29, RW(29) + -48);
SET32(15, RW(0) + 1);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(24, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(13, RD(0) + (s64)1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(14, RD(15) + RD(0));
SET64(12, RD(0) + RD(0));
{ int t = RSD(5) >= 0; SET64(11, RD(0) < RD(7)); if (t) goto L_001430C4; }
SET32(14, RW(0) + -1);
SET32(5, RW(0) - RW(5));
L_001430C4:;
SET64(2, (s64)(s32)0x66660000);
SET64(3, RD(5) + RD(0));
SET64(8, RD(2) | 0x6667);
L_001430D0:;
mul_s(c, 0, 0, RSW(8), RSW(3));
SET64(2, c->hi.d[0]);
SET32(3, RW(3) >> 31);
SET32(2, RSW(2) >> 2);
SET32(3, RW(2) + RW(3));
{ int t = RSD(3) > 0; SET32(12, RW(12) + 1); if (t) { POLL(); goto L_001430D0; } }
if (RD(5) != RD(0)) { SET64(1, RSD(12) < RSD(6)); goto L_00143108; }
SET32(2, RW(0) + 2);
{ int t = RD(7) != RD(2);  if (t) goto L_00143104; }
SET64(12, RD(0) + RD(0));
L_00143104:;
SET64(1, RSD(12) < RSD(6));
L_00143108:;
{ int t = RD(1) == RD(0);  if (t) goto L_00143114; }
SET64(12, RD(6) + RD(0));
L_00143114:;
if (RSD(6) > 0) { SET64(1, RSD(6) < RSD(12)); goto L_00143124; }
SET64(6, RD(12) + RD(0));
SET64(1, RSD(6) < RSD(12));
L_00143124:;
if (RD(1) == RD(0)) { SET32(2, RW(12) + -1); goto L_00143134; }
SET64(6, RD(12) + RD(0));
SET32(2, RW(12) + -1);
L_00143134:;
{ int t = RSD(2) <= 0; SET64(9, RD(0) + RD(0)); if (t) goto L_001431C8; }
SET64(1, RSD(2) < (s64)9);
{ int t = RD(1) != RD(0); SET32(8, RW(12) + -9); if (t) goto L_00143198; }
{ int t = RSD(2) < 0; SET64(3, RD(0) + RD(0)); if (t) goto L_00143168; }
SET64(1, (s64)(s32)0x7fff0000);
SET64(1, RD(1) | 0xffff);
SET64(1, RSD(2) < RSD(1));
{ int t = RD(1) == RD(0);  if (t) goto L_00143168; }
SET64(3, RD(0) + (s64)1);
L_00143168:;
{ int t = RD(3) == RD(0);  if (t) goto L_00143198; }
SET64(2, (s64)(s32)0x5f50000);
SET64(3, RD(2) | 0xe100);
L_00143178:;
mul_s(c, 0, 15, RSW(15), RSW(3));
SET32(9, RW(9) + 8);
SET64(2, RSD(9) < RSD(8));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00143178; } }
L_00143198:;
SET32(8, RW(12) + -1);
SET64(1, RSD(9) < RSD(8));
{ int t = RD(1) == RD(0);  if (t) goto L_001431C8; }
L_001431A8:;
SET32(2, RW(15) << 2);
SET32(9, RW(9) + 1);
SET32(3, RW(2) + RW(15));
SET64(2, RSD(9) < RSD(8));
SET32(15, RW(3) << 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001431A8; } }
L_001431C8:;
{ int t = RSD(12) <= 0; SET64(10, RD(12) + RD(0)); if (t) goto L_001432A8; }
SET64(3, (s64)(s32)0x420000);
SET64(2, (s64)(s32)0x420000);
SET64(9, rd16(c, (RW(3) + -3018)));
SET64(17, (s64)(s32)0x420000);
SET64(8, rd16(c, (RW(2) + -3020)));
SET64(25, (s64)(s32)0x66660000);
SET32(17, RW(17) + -3040);
SET64(16, RD(25) | 0x6667);
SET32(3, RW(0) + 1);
SET32(2, RW(0) + 2);
L_001431F8:;
div_s(c, 0, RSW(5), RSW(15));
SET64(18, c->lo.d[0]);
mul_s(c, 0, 25, RSW(18), RSW(15));
{ int t = RD(18) != RD(0); SET32(5, RW(5) - RW(25)); if (t) goto L_00143248; }
SET64(1, RSD(6) < RSD(10));
{ int t = RD(1) != RD(0);  if (t) goto L_00143288; }
SET64(25, RD(11) & 0xff);
{ int t = RD(25) != RD(3);  if (t) goto L_00143248; }
{ int t = RD(10) != RD(3);  if (t) goto L_00143238; }
{ int t = RD(7) != RD(2);  if (t) goto L_00143248; }
L_00143238:;
wr16(c, (RW(24) + 0), (u16)RW(9));
SET32(24, RW(24) + 2); goto L_00143288;
L_00143248:;
SET64(25, RD(13) & 0xff);
{ int t = RD(25) != RD(3); SET64(11, RD(0) + RD(0)); if (t) goto L_00143270; }
{ int t = RSD(14) >= 0; SET64(13, RD(0) + RD(0)); if (t) goto L_00143270; }
if (RD(4) == RD(24)) { wr16(c, (RW(24) + 0), (u16)RW(8)); goto L_0014326C; }
SET32(24, RW(24) + -2); goto L_001432A8;
L_0014326C:;
SET32(24, RW(24) + 2);
L_00143270:;
SET32(25, RW(18) << 1);
SET32(25, RW(17) + RW(25));
SET64(25, rd16(c, (RW(25) + 0)));
wr16(c, (RW(24) + 0), (u16)RW(25));
SET32(24, RW(24) + 2);
L_00143288:;
SET32(25, RW(15) >> 31);
mul_s(c, 0, 0, RSW(16), RSW(15));
SET32(10, RW(10) + -1);
SET64(15, c->hi.d[0]);
SET32(15, RSW(15) >> 2);
{ int t = RSD(10) > 0; SET32(15, RW(15) + RW(25)); if (t) { POLL(); goto L_001431F8; } }
L_001432A8:;
wr16(c, (RW(24) + 0), (u16)RW(0));
SET64(3, RD(0) | 0xffff);
SET64(2, RD(12) << 48);
wr16(c, (RW(24) + 2), (u16)RW(3));
SET64(2, RSD(2) >> 48);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001432D0(Ctx *c) { /* func_001432D0 */
ENTER(0x1432d0);
SET32(3, RW(0) + 5500);
wr16(c, (RW(4) + 604), (u16)RW(3)); return;
}

void JP_F_001432E0(Ctx *c) { /* func_001432E0 */
ENTER(0x1432e0);
SET32(3, RW(0) + 6000);
wr16(c, (RW(4) + 604), (u16)RW(3)); return;
}

void JP_F_001432F0(Ctx *c) { /* func_001432F0 */
ENTER(0x1432f0);
SET64(2, (s32)rd32(c, (RW(4) + 512))); return;
}

void JP_F_00143300(Ctx *c) { /* func_00143300 */
ENTER(0x143300);
wr32(c, (RW(4) + 512), RW(5));
SET64(3, (s32)rd32(c, (RW(4) + 508)));
wr32(c, (RW(3) + 0), RW(5)); return;
}

void JP_F_00143310(Ctx *c) { /* func_00143310 */
ENTER(0x143310);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00143440; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -2944);
SET64(7, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 768), RW(3));
SET32(2, RW(2) + -2936);
wr32(c, (RW(17) + 24), RW(2));
SET64(5, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 28)));
SET32(7, RW(7) + -2752);
SET64(3, (s64)(s32)0x4d0000);
SET32(5, RW(5) + -2888);
SET32(3, RW(3) + -2868);
SET32(2, RW(17) + 812);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 232), RW(5));
wr32(c, (RW(17) + 236), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 28)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x14338c);  rt_call(c, t); }
SET32(4, RW(17) + 16);
{ int t = RD(4) == RD(0);  if (t) goto L_001433F8; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2512);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 24), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 28)));
SET32(7, RW(7) + -2372);
SET32(5, RW(5) + -2464);
SET32(3, RW(3) + -2444);
SET32(2, RW(17) + 504);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 232), RW(5));
wr32(c, (RW(17) + 236), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 28)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1433ec);  rt_call(c, t); }
SET32(4, RW(17) + 16);
SET64(31, 0x1433f8); SET64(5, RD(0) + RD(0)); JP_F_00156F00(c);
L_001433F8:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0014342C; }
SET32(4, RW(17) + 812);
{ int t = RD(4) == RD(0);  if (t) goto L_00143428; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 828), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x143428);  rt_call(c, t); }
L_00143428:;
SET64(2, RD(16) << 48);
L_0014342C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00143444; }
SET64(31, 0x143440); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_00143440:;
SET64(2, RD(17) + RD(0));
L_00143444:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00143460(Ctx *c) { /* func_00143460 */
ENTER(0x143460);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00143490; }
SET32(4, RW(16) + 812);
SET64(31, 0x143490); wr32(c, (RW(16) + 28), RW(4)); JP_F_00141C80(c);
L_00143490:;
SET32(4, RW(16) + 16);
SET64(31, 0x14349c); SET64(5, RD(0) + RD(0)); JP_F_00147390(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -2944);
SET64(6, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 768), RW(3));
SET32(2, RW(2) + -2936);
wr32(c, (RW(16) + 24), RW(2));
SET64(4, (s64)(s32)0x4d0000);
SET64(5, (s32)rd32(c, (RW(16) + 28)));
SET32(6, RW(6) + -2752);
SET64(3, (s64)(s32)0x4d0000);
SET32(4, RW(4) + -2888);
SET32(3, RW(3) + -2868);
SET32(2, RW(16) + 812);
wr32(c, (RW(5) + 16), RW(6));
SET64(9, RD(0) + RD(0));
wr32(c, (RW(16) + 232), RW(4));
SET64(8, RD(16) + RD(0));
wr32(c, (RW(16) + 236), RW(3));
SET64(7, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 28)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
wr8(c, (RW(16) + 504), (u8)RW(0));
wr8(c, (RW(16) + 505), (u8)RW(0));
wr32(c, (RW(16) + 508), RW(0));
wr32(c, (RW(16) + 512), RW(0));
wr32(c, (RW(16) + 608), RW(0));
wr32(c, (RW(16) + 640), RW(0));
wr32(c, (RW(16) + 652), RW(0));
wr32(c, (RW(16) + 656), RW(0));
wr32(c, (RW(16) + 660), RW(0));
wr32(c, (RW(16) + 664), RW(0));
wr16(c, (RW(16) + 532), (u16)RW(0));
wr32(c, (RW(16) + 536), RW(0));
wr16(c, (RW(16) + 540), (u16)RW(0));
wr16(c, (RW(16) + 542), (u16)RW(0));
wr16(c, (RW(16) + 606), (u16)RW(0));
L_00143534:;
wr32(c, (RW(8) + 544), RW(0));
SET32(9, RW(9) + 5);
wr16(c, (RW(7) + 584), (u16)RW(0));
SET64(2, RSD(9) < (s64)10);
wr32(c, (RW(8) + 548), RW(0));
wr16(c, (RW(7) + 586), (u16)RW(0));
wr32(c, (RW(8) + 552), RW(0));
wr16(c, (RW(7) + 588), (u16)RW(0));
wr32(c, (RW(8) + 556), RW(0));
wr16(c, (RW(7) + 590), (u16)RW(0));
wr32(c, (RW(8) + 560), RW(0));
wr16(c, (RW(7) + 592), (u16)RW(0));
SET32(8, RW(8) + 20);
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 10); if (t) { POLL(); goto L_00143534; } }
wr32(c, (RW(16) + 792), RW(0));
SET64(3, RD(0) | 0xf000);
wr32(c, (RW(16) + 796), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 800), RW(0));
wr32(c, (RW(16) + 804), RW(0));
wr32(c, (RW(16) + 516), RW(0));
wr32(c, (RW(16) + 520), RW(0));
wr32(c, (RW(16) + 524), RW(0));
wr32(c, (RW(16) + 528), RW(0));
wr16(c, (RW(16) + 774), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001435B0(Ctx *c) { /* func_001435B0 */
ENTER(0x1435b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 508)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 508), RW(0)); goto L_001435E0; }
SET64(31, 0x1435dc);  JP_F_001004B0(c);
wr32(c, (RW(18) + 508), RW(0));
L_001435E0:;
SET64(31, 0x1435e8); SET64(4, (s32)rd32(c, (RW(18) + 608))); JP_F_001004B0(c);
wr32(c, (RW(18) + 608), RW(0));
SET64(17, RD(0) + RD(0));
SET64(16, RD(18) + RD(0));
L_001435F4:;
SET64(31, 0x1435fc); SET64(4, (s32)rd32(c, (RW(16) + 792))); JP_F_001004B0(c);
SET32(17, RW(17) + 1);
wr32(c, (RW(16) + 792), RW(0));
SET64(3, RSD(17) < (s64)4);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001435F4; } }
wr32(c, (RW(18) + 516), RW(0));
wr32(c, (RW(18) + 520), RW(0));
wr32(c, (RW(18) + 524), RW(0));
wr32(c, (RW(18) + 528), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00143640(Ctx *c) { /* func_00143640 */
ENTER(0x143640);
SET64(2, rd8(c, (RW(4) + 772))); return;
}

void JP_F_00143650(Ctx *c) { /* func_00143650 */
ENTER(0x143650);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr8(c, (RW(4) + 772), (u8)RW(5));
SET64(2, rd8(c, (RW(4) + 772)));
{ int t = RD(2) == RD(0); SET64(3, RD(4) + RD(0)); if (t) goto L_0014367C; }
SET32(4, RW(3) + 16);
SET64(31, 0x143674); SET32(5, RW(0) + 1); JP_F_00146360(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_0014368C;
L_0014367C:;
SET64(5, rd8(c, (RW(3) + 773)));
SET64(31, 0x143688); SET32(4, RW(3) + 16); JP_F_00146360(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0014368C:;
SET32(29, RW(29) + 16); return;
}

void JP_F_001436A0(Ctx *c) { /* func_001436A0 */
ENTER(0x1436a0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
wr8(c, (RW(4) + 772), (u8)RW(2));
SET64(31, 0x1436b8); SET32(4, RW(4) + 16); JP_F_00146560(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001436D0(Ctx *c) { /* func_001436D0 */
ENTER(0x1436d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x1436e8); SET32(4, RW(16) + 16); JP_F_00146610(c);
wr8(c, (RW(16) + 772), (u8)RW(0));
SET64(5, rd8(c, (RW(16) + 773)));
SET64(31, 0x1436f8); SET32(4, RW(16) + 16); JP_F_00146360(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00143710(Ctx *c) { /* func_00143710 */
ENTER(0x143710);
SET32(29, RW(29) + -80);
SET32(5, RW(0) + 750);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, rd16(c, (RW(4) + 604)));
{ int t = RD(3) == RD(5); SET64(16, RD(4) + RD(0)); if (t) goto L_00143D4C; }
SET32(5, RW(0) + 800);
if (RD(3) == RD(5)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_00143D50; }
SET32(5, RW(0) + 300);
{ int t = RD(3) == RD(5);  if (t) goto L_00143D4C; }
SET32(5, RW(0) + 150);
{ int t = RD(3) == RD(5);  if (t) goto L_00143D4C; }
SET32(5, RW(0) + 500);
{ int t = RD(3) == RD(5);  if (t) goto L_00143D4C; }
SET32(5, RW(0) + 450);
{ int t = RD(3) == RD(5);  if (t) goto L_00143D4C; }
SET32(6, RW(0) + 100);
{ int t = RD(3) == RD(6);  if (t) goto L_00143D4C; }
SET32(5, RW(0) + 5000);
{ int t = RD(3) == RD(5);  if (t) goto L_00143D4C; }
SET32(5, RW(0) + 400);
{ int t = RD(3) == RD(5);  if (t) goto L_00143D4C; }
SET32(5, RW(0) + 600);
{ int t = RD(3) == RD(5);  if (t) goto L_00143D4C; }
SET32(5, RW(0) + 700);
if (RD(3) == RD(5)) { SET64(3, rd8(c, (RW(16) + 505))); goto L_00143D34; }
SET32(5, RW(0) + 650);
if (RD(3) == RD(5)) { SET64(4, rd16(c, (RW(16) + 606))); goto L_00143C94; }
SET32(5, RW(0) + 9001);
{ int t = RD(3) == RD(5);  if (t) goto L_00143D4C; }
SET32(5, RW(0) + 9000);
if (RD(3) == RD(5)) { SET64(25, (s32)rd32(c, (RW(4) + 768))); goto L_00143C78; }
SET32(4, RW(0) + 350);
if (RD(3) == RD(4)) { SET64(4, rd16(c, (RW(16) + 606))); goto L_00143BE0; }
SET32(4, RW(0) + 251);
{ int t = RD(3) == RD(4);  if (t) goto L_00143BA0; }
SET32(4, RW(0) + 250);
if (RD(3) == RD(4)) { wr16(c, (RW(16) + 532), (u16)RW(0)); goto L_00143B84; }
SET32(4, RW(0) + 201);
{ int t = RD(3) == RD(4);  if (t) goto L_00143B4C; }
SET32(4, RW(0) + 200);
if (RD(3) == RD(4)) { SET32(3, RW(3) + 1); goto L_00143B44; }
SET32(5, RW(0) + 50);
{ int t = RD(3) == RD(5);  if (t) goto L_00143D4C; }
SET32(4, RW(0) + 6000);
if (RD(3) == RD(4)) { SET64(6, (s32)rd32(c, (RW(16) + 508))); goto L_0014388C; }
SET32(4, RW(0) + 5500);
if (RD(3) == RD(4)) { c->f[1].u = rd32(c, (RW(16) + 436)); goto L_0014383C; }
if (RD(3) == RD(0)) { wr16(c, (RW(16) + 604), (u16)RW(5)); goto L_00143D4C; }
 goto L_00143D4C;
L_0014383C:;
SET64(2, (s64)(s32)0x40000000);
c->f[0].u = rd32(c, (RW(16) + 456));
SET64(25, (s32)rd32(c, (RW(16) + 24)));
c->f[4].u = rd32(c, (RW(16) + 432));
SET32(4, RW(16) + 16);
c->f[3].u = rd32(c, (RW(16) + 464));
c->f[1].f = fpu(F(1) + F(0));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
c->f[0].u = rd32(c, (RW(16) + 452));
c->f[3].f = fpu(F(4) + F(3));
c->f[2].u = RW(2);
c->f[12].f = fpu(F(2) * F(3));
{ u32 t = RW(25); SET64(31, 0x143878); c->f[13].f = fpu(F(0) + F(1)); rt_call(c, t); }
wr32(c, (RW(16) + 432), RW(0));
SET32(3, RW(0) + 6000);
wr32(c, (RW(16) + 436), RW(0));
wr16(c, (RW(16) + 604), (u16)RW(3));
L_00143888:;
SET64(6, (s32)rd32(c, (RW(16) + 508)));
L_0014388C:;
SET32(3, RW(0) + -1);
SET64(4, (s16)rd16(c, (RW(6) + 4)));
SET64(5, (s32)rd32(c, (RW(6) + 0)));
SET32(4, RW(4) << 1);
SET32(4, RW(5) + RW(4));
SET64(4, (s16)rd16(c, (RW(4) + 0)));
{ int t = RD(4) != RD(3);  if (t) goto L_001438C4; }
SET64(3, (s16)rd16(c, (RW(16) + 542)));
{ int t = RD(3) != RD(0);  if (t) goto L_001438C4; }
SET32(3, RW(0) + 50);
wr16(c, (RW(16) + 604), (u16)RW(3)); goto L_00143B20;
L_001438C4:;
if (RD(4) != RD(0)) { SET64(5, RD(4) & 0xffff); goto L_00143918; }
SET64(2, (s16)rd16(c, (RW(6) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(6) + 4), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 508)));
SET64(25, (s32)rd32(c, (RW(16) + 768)));
SET64(3, (s16)rd16(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(5, (s16)rd16(c, (RW(2) + 0)));
{ u32 t = RW(25); SET64(31, 0x143900); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, rd16(c, (RW(16) + 604)));
SET32(3, RW(0) + 6000);
{ int t = RD(4) == RD(3);  if (t) { POLL(); goto L_00143888; } }
 goto L_00143B20;
L_00143918:;
SET64(31, 0x143920); SET32(4, RW(16) + 16); JP_F_00146C10(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00143958; }
SET64(25, (s32)rd32(c, (RW(16) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x143938); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, 0x143940); SET32(4, RW(16) + 16); JP_F_00146BE0(c);
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_00143888; } }
wr16(c, (RW(16) + 532), (u16)RW(0));
SET32(3, RW(0) + 350);
wr16(c, (RW(16) + 604), (u16)RW(3)); goto L_00143B20;
L_00143958:;
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 48);
SET32(2, RW(2) + -2992);
wr32(c, (RW(29) + 64), RW(2));
SET64(3, rd8(c, (RW(16) + 505)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(2, (s32)rd32(c, (RW(16) + 508)));
SET64(3, RD(3) & 0x20);
SET64(6, RD(0) < RD(3));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
SET64(3, (s16)rd16(c, (RW(2) + 4)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
{ u32 t = RW(25); SET64(31, 0x143998); SET64(5, rd16(c, (RW(2) + 0))); rt_call(c, t); }
SET64(2, rd8(c, (RW(16) + 505)));
SET64(2, RD(2) & 0x2);
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_001439C0; }
SET64(6, (s32)rd32(c, (RW(16) + 644)));
SET32(4, RW(16) + 16);
SET64(31, 0x1439bc); SET32(5, RW(29) + 48); JP_F_00146DF0(c);
L_001439C0:;
SET32(4, RW(29) + 48);
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1439d4); c->f[20].u = rd32(c, (RW(16) + 432)); rt_call(c, t); }
SET32(4, RW(16) + 16);
SET64(31, 0x1439e0); c->f[12].u = c->f[0].u; JP_F_00146DE0(c);
c->f[0].f = fpu(F(20) + F(0));
wr32(c, (RW(16) + 432), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(16) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(4, rd8(c, (RW(16) + 505)));
SET64(3, RD(4) & 0x10);
SET64(3, RD(0) < RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_00143AA8; }
SET64(3, (s16)rd16(c, (RW(16) + 612)));
SET32(3, RW(3) + -1);
wr16(c, (RW(16) + 612), (u16)RW(3));
SET64(3, RD(3) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RD(3) != RD(0);  if (t) goto L_00143B10; }
SET64(3, (s64)(s32)0x40000000);
SET64(4, rd8(c, (RW(16) + 505)));
c->f[3].u = RW(3);
SET64(3, (s64)(s32)0x41a00000);
c->f[0].u = RW(3);
SET64(3, RD(4) & 0xef);
wr8(c, (RW(16) + 505), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 505)));
SET64(3, RD(3) | 0x20);
wr8(c, (RW(16) + 505), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(3, rd8(c, (RW(16) + 424)));
SET64(3, RD(3) | 0x1);
wr8(c, (RW(16) + 424), (u8)RW(3));
c->f[2].u = rd32(c, (RW(16) + 616));
SET64(3, (s32)rd32(c, (RW(16) + 608)));
c->f[1].u = rd32(c, (RW(16) + 624));
c->f[2].f = fpu_div(F(2), F(3));
c->f[4].u = rd32(c, (RW(3) + 0));
c->f[1].f = fpu_div(F(1), F(3));
c->f[2].f = fpu(F(4) + F(2));
c->f[1].f = fpu(F(2) - F(1));
wr32(c, (RW(16) + 432), c->f[1].u);
SET64(3, (s32)rd32(c, (RW(16) + 608)));
c->f[1].u = rd32(c, (RW(3) + 4));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(16) + 436), c->f[0].u); goto L_00143B10;
L_00143AA8:;
SET64(3, RD(4) & 0x20);
SET64(3, RD(0) < RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_00143B10; }
SET64(3, (s16)rd16(c, (RW(16) + 620)));
SET32(3, RW(3) + -1);
wr16(c, (RW(16) + 620), (u16)RW(3));
SET64(3, RD(3) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RD(3) != RD(0);  if (t) goto L_00143B10; }
SET64(3, rd8(c, (RW(16) + 505)));
SET64(3, RD(3) & 0xdf);
wr8(c, (RW(16) + 505), (u8)RW(3));
SET64(3, rd8(c, (RW(16) + 424)));
SET64(3, RD(3) & 0xfe);
wr8(c, (RW(16) + 424), (u8)RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 608)));
c->f[0].u = rd32(c, (RW(16) + 616));
c->f[1].u = rd32(c, (RW(3) + 0));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 432), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(16) + 608)));
c->f[0].u = rd32(c, (RW(3) + 4));
wr32(c, (RW(16) + 436), c->f[0].u);
L_00143B10:;
SET64(3, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -2336);
wr32(c, (RW(29) + 64), RW(3)); { POLL(); goto L_00143888; }
L_00143B20:;
wr8(c, (RW(16) + 773), (u8)RW(0));
SET64(3, rd8(c, (RW(16) + 772)));
{ int t = RD(3) != RD(0);  if (t) goto L_00143D4C; }
SET64(5, rd8(c, (RW(16) + 773)));
SET64(31, 0x143b3c); SET32(4, RW(16) + 16); JP_F_00146360(c);
 goto L_00143D4C;
L_00143B44:;
wr16(c, (RW(16) + 604), (u16)RW(3)); goto L_00143D4C;
L_00143B4C:;
SET64(3, (s64)(s32)0x530000);
SET64(4, (s64)(s32)0x3f000000);
c->f[1].u = rd32(c, (RW(16) + 536));
c->f[0].u = RW(0);
c->f[2].u = rd32(c, (RW(3) + -22384));
c->f[3].u = RW(4);
c->facc = fpu(F(0) + F(1));
c->f[1].f = fpu(c->facc - F(3) * F(2));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; wr32(c, (RW(16) + 536), c->f[1].u); if (t) goto L_00143D4C; }
SET32(3, RW(0) + 6000);
wr16(c, (RW(16) + 604), (u16)RW(3)); goto L_00143D4C;
L_00143B84:;
SET64(3, rd8(c, (RW(16) + 505)));
SET64(3, RD(3) | 0x40);
wr8(c, (RW(16) + 505), (u8)RW(3));
SET64(3, rd16(c, (RW(16) + 604)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 604), (u16)RW(3)); goto L_00143D4C;
L_00143BA0:;
SET64(31, 0x143ba8);  JP_F_00138DE0(c);
SET64(5, (s16)rd16(c, (RW(16) + 810)));
SET64(31, 0x143bb4); SET64(4, RD(2) + RD(0)); JP_F_0013E200(c);
SET64(3, rd16(c, (RW(16) + 774)));
SET64(4, RD(2) & 0xffff);
SET64(3, RD(3) & RD(4));
{ int t = RD(3) == RD(0);  if (t) goto L_00143D4C; }
SET64(4, rd8(c, (RW(16) + 505)));
SET32(3, RW(0) + 6000);
SET64(4, RD(4) & 0xbf);
wr8(c, (RW(16) + 505), (u8)RW(4));
wr16(c, (RW(16) + 604), (u16)RW(3)); goto L_00143D4C;
L_00143BE0:;
if (RD(4) == RD(6)) { wr32(c, (RW(16) + 632), RW(0)); goto L_00143C6C; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(25, (s32)rd32(c, (RW(16) + 24))); goto L_00143C4C; }
if (RD(4) == RD(0)) { wr8(c, (RW(16) + 773), (u8)RW(3)); goto L_00143C04; }
 goto L_00143D4C;
L_00143C04:;
SET64(3, rd8(c, (RW(16) + 772)));
if (RD(3) != RD(0)) { SET64(3, (s16)rd16(c, (RW(16) + 532))); goto L_00143C20; }
SET64(5, rd8(c, (RW(16) + 773)));
SET64(31, 0x143c1c); SET32(4, RW(16) + 16); JP_F_00146360(c);
SET64(3, (s16)rd16(c, (RW(16) + 532)));
L_00143C20:;
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 532), (u16)RW(3));
SET64(3, RD(3) << 48);
SET64(3, RSD(3) >> 48);
SET64(1, RSD(3) < (s64)3);
{ int t = RD(1) != RD(0);  if (t) goto L_00143D4C; }
SET64(3, rd16(c, (RW(16) + 606)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 606), (u16)RW(3)); goto L_00143D4C;
L_00143C4C:;
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x143c58); SET32(4, RW(16) + 16); rt_call(c, t); }
wr32(c, (RW(16) + 432), RW(0));
SET32(3, RW(0) + 100);
wr32(c, (RW(16) + 436), RW(0));
wr16(c, (RW(16) + 606), (u16)RW(3)); goto L_00143D4C;
L_00143C6C:;
SET32(3, RW(0) + 6000);
wr16(c, (RW(16) + 604), (u16)RW(3)); goto L_00143D4C;
L_00143C78:;
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x143c84);  rt_call(c, t); }
SET64(3, rd16(c, (RW(16) + 604)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 604), (u16)RW(3)); goto L_00143D4C;
L_00143C94:;
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 764))); goto L_00143D04; }
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 764))); goto L_00143CB0; }
 goto L_00143D4C;
L_00143CB0:;
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x143cc8);  rt_call(c, t); }
SET64(31, 0x143cd0);  JP_F_00138DE0(c);
SET64(5, (s16)rd16(c, (RW(16) + 810)));
SET64(31, 0x143cdc); SET64(4, RD(2) + RD(0)); JP_F_0013E200(c);
SET64(3, RD(2) & 0xffff);
SET64(3, RD(3) & 0x4000);
{ int t = RD(3) == RD(0);  if (t) goto L_00143D4C; }
SET64(31, 0x143cf4); SET64(4, (s32)rd32(c, (RW(16) + 764))); JP_F_00174580(c);
SET64(3, rd16(c, (RW(16) + 606)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 606), (u16)RW(3)); goto L_00143D4C;
L_00143D04:;
SET64(31, 0x143d0c);  JP_F_00174490(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00143D4C; }
SET64(4, (s32)rd32(c, (RW(16) + 764)));
SET64(31, 0x143d20); SET32(5, RW(0) + 1); JP_F_00174B60(c);
wr32(c, (RW(16) + 764), RW(0));
SET32(3, RW(0) + 6000);
wr32(c, (RW(16) + 764), RW(0));
wr16(c, (RW(16) + 604), (u16)RW(3)); goto L_00143D4C;
L_00143D34:;
SET64(3, RD(3) & 0x4);
SET64(3, RD(0) < RD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_00143D4C; }
SET32(3, RW(0) + 6000);
wr16(c, (RW(16) + 604), (u16)RW(3));
L_00143D4C:;
SET64(31, rd64(c, (RW(29) + 32)));
L_00143D50:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00143D60(Ctx *c) { /* func_00143D60 */
ENTER(0x143d60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_00143DB0; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2992);
{ int t = RD(16) == RD(0); wr32(c, (RW(16) + 16), RW(2)); if (t) goto L_00143D94; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2336);
wr32(c, (RW(16) + 16), RW(2));
L_00143D94:;
SET64(2, RD(5) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0;  if (t) goto L_00143DAC; }
SET64(31, 0x143dac); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_00143DAC:;
SET64(2, RD(16) + RD(0));
L_00143DB0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00143DC0(Ctx *c) { /* func_00143DC0 */
ENTER(0x143dc0);
c->f[0].u = rd32(c, (RW(4) + 0)); return;
}

void JP_F_00143DD0(Ctx *c) { /* func_00143DD0 */
ENTER(0x143dd0);
SET32(29, RW(29) + -144);
SET64(3, RD(5) << 48);
wr64(c, (RW(29) + 48), RD(31));
SET64(3, RSD(3) >> 48);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(6, RW(0) + 26);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
{ int t = RD(3) == RD(6); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_00144B80; }
SET32(6, RW(0) + 25);
if (RD(3) == RD(6)) { SET64(3, (s32)rd32(c, (RW(18) + 508))); goto L_00144AE4; }
SET32(6, RW(0) + 24);
if (RD(3) == RD(6)) { SET64(4, (s32)rd32(c, (RW(18) + 508))); goto L_00144A7C; }
SET32(6, RW(0) + 23);
if (RD(3) == RD(6)) { SET64(4, (s32)rd32(c, (RW(18) + 508))); goto L_001449B8; }
SET32(6, RW(0) + 22);
if (RD(3) == RD(6)) { SET64(4, (s32)rd32(c, (RW(18) + 508))); goto L_0014496C; }
SET32(6, RW(0) + 20);
if (RD(3) == RD(6)) { SET64(4, (s32)rd32(c, (RW(18) + 508))); goto L_00144914; }
SET32(6, RW(0) + 19);
if (RD(3) == RD(6)) { SET64(4, (s32)rd32(c, (RW(18) + 508))); goto L_001448BC; }
SET32(6, RW(0) + 18);
if (RD(3) == RD(6)) { SET64(4, (s32)rd32(c, (RW(18) + 508))); goto L_0014485C; }
SET32(6, RW(0) + 17);
if (RD(3) == RD(6)) { SET64(4, (s32)rd32(c, (RW(18) + 508))); goto L_001447FC; }
SET32(6, RW(0) + 16);
if (RD(3) == RD(6)) { wr16(c, (RW(18) + 606), (u16)RW(0)); goto L_00144BEC; }
SET32(6, RW(0) + 31);
if (RD(3) == RD(6)) { wr16(c, (RW(18) + 606), (u16)RW(0)); goto L_00144674; }
SET32(6, RW(0) + 12);
if (RD(3) == RD(6)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_00144BF0; }
SET32(6, RW(0) + 11);
if (RD(3) == RD(6)) { SET64(5, (s32)rd32(c, (RW(18) + 508))); goto L_00144650; }
SET32(6, RW(0) + 30);
if (RD(3) == RD(6)) { SET64(4, (s32)rd32(c, (RW(18) + 508))); goto L_00144604; }
SET32(6, RW(0) + 29);
if (RD(3) == RD(6)) { SET64(3, (s32)rd32(c, (RW(18) + 508))); goto L_00144530; }
SET32(5, RW(0) + 8);
if (RD(3) == RD(5)) { SET64(3, (s32)rd32(c, (RW(18) + 508))); goto L_001444B0; }
SET32(5, RW(0) + 7);
if (RD(3) == RD(5)) { SET64(3, (s32)rd32(c, (RW(18) + 508))); goto L_001443EC; }
SET32(5, RW(0) + 6);
if (RD(3) == RD(5)) { c->f[1].u = rd32(c, (RW(18) + 432)); goto L_001443B4; }
SET32(5, RW(0) + 28);
if (RD(3) == RD(5)) { SET64(4, (s32)rd32(c, (RW(18) + 508))); goto L_001443A4; }
SET32(5, RW(0) + 27);
if (RD(3) == RD(5)) { c->f[0].u = rd32(c, (RW(18) + 432)); goto L_0014418C; }
SET32(5, RW(0) + 5);
if (RD(3) == RD(5)) { SET64(3, (s32)rd32(c, (RW(18) + 508))); goto L_0014410C; }
SET32(5, RW(0) + 2);
if (RD(3) == RD(5)) { SET64(3, (s32)rd32(c, (RW(18) + 508))); goto L_001440D4; }
SET32(5, RW(0) + 1);
if (RD(3) == RD(5)) { SET64(3, (s32)rd32(c, (RW(18) + 508))); goto L_00144098; }
SET32(4, RW(0) + -1);
if (RD(3) == RD(4)) { SET64(3, (s16)rd16(c, (RW(18) + 542))); goto L_00143FCC; }
SET32(4, RW(0) + 255);
{ int t = RD(3) == RD(4);  if (t) goto L_00143FC8; }
SET32(4, RW(0) + 4);
if (RD(3) == RD(4)) { SET64(5, (s32)rd32(c, (RW(18) + 508))); goto L_00143FB0; }
SET32(4, RW(0) + 3);
if (RD(3) == RD(4)) { c->f[1].u = rd32(c, (RW(18) + 432)); goto L_00143F38; }
 goto L_00144BEC;
L_00143F38:;
c->f[0].u = rd32(c, (RW(18) + 632));
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(5, (s32)rd32(c, (RW(18) + 508))); goto L_00143F50; }
wr32(c, (RW(18) + 632), c->f[1].u);
SET64(5, (s32)rd32(c, (RW(18) + 508)));
L_00143F50:;
SET32(3, RW(0) + 200);
SET64(4, (s16)rd16(c, (RW(5) + 4)));
SET32(4, RW(4) + 1);
wr16(c, (RW(5) + 4), (u16)RW(4));
SET64(5, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(5) + 4)));
SET32(4, RW(4) + 1);
wr16(c, (RW(5) + 4), (u16)RW(4));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(5, (s16)rd16(c, (RW(4) + 4)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(5, RW(5) << 1);
SET32(4, RW(4) + RW(5));
SET64(4, (s16)rd16(c, (RW(4) + 0)));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(18) + 536), c->f[0].u);
SET64(5, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(5) + 4)));
SET32(4, RW(4) + 1);
wr16(c, (RW(5) + 4), (u16)RW(4));
wr16(c, (RW(18) + 604), (u16)RW(3)); goto L_00144BEC;
L_00143FB0:;
SET32(3, RW(0) + 250);
SET64(4, (s16)rd16(c, (RW(5) + 4)));
SET32(4, RW(4) + 1);
wr16(c, (RW(5) + 4), (u16)RW(4));
wr16(c, (RW(18) + 604), (u16)RW(3)); goto L_00144BEC;
L_00143FC8:;
SET64(3, (s16)rd16(c, (RW(18) + 542)));
L_00143FCC:;
if (RD(3) == RD(0)) { c->f[1].u = rd32(c, (RW(18) + 432)); goto L_00144014; }
SET32(3, RW(3) + -1);
wr16(c, (RW(18) + 542), (u16)RW(3));
SET64(3, RD(3) << 48);
SET64(3, RSD(3) >> 48);
SET32(4, RW(3) << 2);
SET32(4, RW(4) + RW(18));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s32)rd32(c, (RW(4) + 544)));
wr32(c, (RW(3) + 0), RW(4));
SET64(4, (s16)rd16(c, (RW(18) + 542)));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET32(4, RW(4) << 1);
SET32(4, RW(4) + RW(18));
SET64(4, (s16)rd16(c, (RW(4) + 584)));
wr16(c, (RW(3) + 4), (u16)RW(4)); goto L_00144BEC;
L_00144014:;
c->f[0].u = rd32(c, (RW(18) + 632));
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(3, rd8(c, (RW(18) + 504))); goto L_0014402C; }
wr32(c, (RW(18) + 632), c->f[1].u);
SET64(3, rd8(c, (RW(18) + 504)));
L_0014402C:;
SET64(3, RD(3) | 0x1);
wr8(c, (RW(18) + 504), (u8)RW(3));
SET64(3, rd8(c, (RW(18) + 505)));
SET64(3, RD(3) & 0x8);
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET32(3, RW(0) + 50); goto L_00144090; }
c->f[2].u = rd32(c, (RW(18) + 432));
SET64(25, (s32)rd32(c, (RW(18) + 24)));
c->f[1].u = rd32(c, (RW(18) + 464));
SET64(3, (s32)rd32(c, (RW(18) + 408)));
c->f[0].u = rd32(c, (RW(18) + 436));
SET64(8, (s32)rd32(c, (RW(18) + 412)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
SET32(4, RW(18) + 16);
c->f[1].f = fpu(F(2) + F(1));
c->f[1].u = (u32)fpu_cvtw(F(1));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[1].u);
SET32(2, RW(5) << 1);
SET64(6, (s32)c->f[0].u);
{ u32 t = RW(25); SET64(31, 0x14408c); SET32(7, RW(3) - RW(2)); rt_call(c, t); }
SET32(3, RW(0) + 50);
L_00144090:;
wr16(c, (RW(18) + 604), (u16)RW(3)); goto L_00144BEC;
L_00144098:;
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
wr16(c, (RW(18) + 606), (u16)RW(0));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x1440b8);  rt_call(c, t); }
SET64(31, 0x1440c0); SET32(4, RW(18) + 16); JP_F_00146BE0(c);
if (RD(2) == RD(0)) { SET32(3, RW(0) + 6000); goto L_001440CC; }
SET32(3, RW(0) + 350);
L_001440CC:;
wr16(c, (RW(18) + 604), (u16)RW(3)); goto L_00144BEC;
L_001440D4:;
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 508)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(3, (s16)rd16(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
{ u32 t = RW(25); SET64(31, 0x144104); SET64(5, rd16(c, (RW(2) + 0))); rt_call(c, t); }
 goto L_00144BEC;
L_0014410C:;
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
SET64(6, (s32)rd32(c, (RW(18) + 508)));
SET64(2, (s16)rd16(c, (RW(6) + 4)));
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET32(5, RW(2) << 1);
SET32(3, RW(3) + RW(5));
SET32(2, RW(2) + 1);
SET64(5, rd16(c, (RW(3) + 0)));
wr16(c, (RW(6) + 4), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(2, (s16)rd16(c, (RW(18) + 542)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 544), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(2, (s16)rd16(c, (RW(18) + 542)));
SET64(3, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(18));
wr16(c, (RW(2) + 584), (u16)RW(3));
SET64(2, (s16)rd16(c, (RW(18) + 542)));
SET32(2, RW(2) + 1);
wr16(c, (RW(18) + 542), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x144184);  rt_call(c, t); }
 goto L_00144BEC;
L_0014418C:;
SET64(4, (s32)rd32(c, (RW(18) + 608)));
SET64(3, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -2992);
wr32(c, (RW(4) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(18) + 436));
SET64(4, (s32)rd32(c, (RW(18) + 608)));
wr32(c, (RW(4) + 4), c->f[0].u);
SET64(5, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(5) + 4)));
SET32(4, RW(4) + 1);
wr16(c, (RW(5) + 4), (u16)RW(4));
wr32(c, (RW(18) + 616), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(5, (s16)rd16(c, (RW(4) + 4)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(5, RW(5) << 1);
SET32(4, RW(4) + RW(5));
SET64(4, rd16(c, (RW(4) + 0)));
wr16(c, (RW(18) + 612), (u16)RW(4));
SET64(5, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(5) + 4)));
SET32(4, RW(4) + 1);
wr16(c, (RW(5) + 4), (u16)RW(4));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(16, (s16)rd16(c, (RW(4) + 4)));
wr32(c, (RW(29) + 128), RW(3));
SET64(3, (s16)rd16(c, (RW(18) + 612)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00144280; }
SET64(2, (s32)rd32(c, (RW(18) + 508)));
L_00144204:;
SET32(4, RW(29) + 112);
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(3, (s16)rd16(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
{ u32 t = RW(25); SET64(31, 0x14422c); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET32(4, RW(29) + 112);
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x144240);  rt_call(c, t); }
SET32(4, RW(18) + 16);
SET64(31, 0x14424c); c->f[12].u = c->f[0].u; JP_F_00146DE0(c);
c->f[1].u = rd32(c, (RW(18) + 616));
SET32(17, RW(17) + 1);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(18) + 616), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(3, (s16)rd16(c, (RW(18) + 612)));
SET64(3, RSD(17) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 508))); { POLL(); goto L_00144204; } }
L_00144280:;
SET64(3, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -2336);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 128), RW(3));
SET32(5, RW(5) + -2992);
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(3) + 4)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET64(3, rd16(c, (RW(3) + 0)));
wr16(c, (RW(18) + 620), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
wr32(c, (RW(18) + 624), RW(0));
wr32(c, (RW(29) + 96), RW(5));
SET64(3, rd8(c, (RW(18) + 424)));
SET64(3, RD(3) | 0x1);
wr8(c, (RW(18) + 424), (u8)RW(3));
SET64(3, (s16)rd16(c, (RW(18) + 620)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00144360; }
SET64(2, (s32)rd32(c, (RW(18) + 508)));
L_001442E4:;
SET32(4, RW(29) + 80);
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(3, (s16)rd16(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
{ u32 t = RW(25); SET64(31, 0x14430c); SET32(6, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(29) + 80);
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x144320);  rt_call(c, t); }
SET32(4, RW(18) + 16);
SET64(31, 0x14432c); c->f[12].u = c->f[0].u; JP_F_00146DE0(c);
c->f[1].u = rd32(c, (RW(18) + 624));
SET32(17, RW(17) + 1);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(18) + 624), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(3, (s16)rd16(c, (RW(18) + 620)));
SET64(3, RSD(17) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 508))); { POLL(); goto L_001442E4; } }
L_00144360:;
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(18) + 624));
c->f[0].u = RW(3);
SET64(3, (s64)(s32)0x4d0000);
c->f[0].f = fpu(F(1) - F(0));
SET32(3, RW(3) + -2336);
wr32(c, (RW(18) + 624), c->f[0].u);
SET64(4, rd8(c, (RW(18) + 424)));
SET64(4, RD(4) & 0xfe);
wr8(c, (RW(18) + 424), (u8)RW(4));
wr32(c, (RW(29) + 96), RW(3));
SET64(3, rd8(c, (RW(18) + 505)));
SET64(3, RD(3) | 0x10);
wr8(c, (RW(18) + 505), (u8)RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
wr16(c, (RW(3) + 4), (u16)RW(16)); goto L_00144BEC;
L_001443A4:;
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3)); goto L_00144BEC;
L_001443B4:;
c->f[0].u = rd32(c, (RW(18) + 632));
c->fcc = F(1) < F(0);
if (c->fcc) { wr16(c, (RW(18) + 606), (u16)RW(0)); goto L_001443CC; }
wr32(c, (RW(18) + 632), c->f[1].u);
wr16(c, (RW(18) + 606), (u16)RW(0));
L_001443CC:;
SET32(3, RW(0) + 350);
wr16(c, (RW(18) + 532), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(5) + 4)));
SET32(4, RW(4) + 1);
wr16(c, (RW(5) + 4), (u16)RW(4));
wr16(c, (RW(18) + 604), (u16)RW(3)); goto L_00144BEC;
L_001443EC:;
SET32(6, RW(0) + -1);
SET32(7, RW(0) + 1);
SET64(8, RD(0) + RD(0));
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(2) + 4)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, (s16)rd16(c, (RW(2) + 0)));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 792)));
SET64(5, (s32)rd32(c, (RW(2) + 776)));
SET64(31, 0x14444c); SET32(16, RW(2) + 792); JP_F_00143090(c);
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(18) + 542)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
wr32(c, (RW(3) + 544), RW(4));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(18) + 542)));
SET64(4, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) << 1);
SET32(3, RW(3) + RW(18));
wr16(c, (RW(3) + 584), (u16)RW(4));
SET64(3, (s16)rd16(c, (RW(18) + 542)));
SET32(3, RW(3) + 1);
wr16(c, (RW(18) + 542), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
wr32(c, (RW(3) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
wr16(c, (RW(3) + 4), (u16)RW(0)); goto L_00144BEC;
L_001444B0:;
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(18) + 808)));
{ int t = RSD(2) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_00144500; }
SET64(3, (s32)rd32(c, (RW(18) + 508)));
L_001444DC:;
SET32(4, RW(4) + 1);
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(18) + 808)));
SET64(2, RSD(4) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 508))); { POLL(); goto L_001444DC; } }
L_00144500:;
SET64(2, (s32)rd32(c, (RW(18) + 508)));
SET64(25, (s32)rd32(c, (RW(18) + 768)));
SET64(3, (s16)rd16(c, (RW(2) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
{ u32 t = RW(25); SET64(31, 0x144528); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
 goto L_00144BEC;
L_00144530:;
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(2) + 4)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(4, (s16)rd16(c, (RW(2) + 0)));
{ int t = RSD(4) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_001445A0; }
SET64(3, (s32)rd32(c, (RW(18) + 508)));
L_00144560:;
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(18) + 808)));
{ int t = RD(2) != RD(6);  if (t) goto L_00144590; }
SET64(2, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(2) + 4)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
L_00144590:;
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(4));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 508))); { POLL(); goto L_00144560; } }
L_001445A0:;
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(2, (s16)rd16(c, (RW(18) + 542)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 544), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(2, (s16)rd16(c, (RW(18) + 542)));
SET64(3, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(18));
wr16(c, (RW(2) + 584), (u16)RW(3));
SET64(2, (s16)rd16(c, (RW(18) + 542)));
SET32(2, RW(2) + 1);
wr16(c, (RW(18) + 542), (u16)RW(2));
SET64(25, (s32)rd32(c, (RW(18) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x1445fc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
 goto L_00144BEC;
L_00144604:;
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(3) + 4)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET64(3, rd16(c, (RW(3) + 0)));
wr16(c, (RW(18) + 808), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3)); goto L_00144BEC;
L_00144650:;
SET32(3, RW(0) + 700);
SET64(4, (s16)rd16(c, (RW(5) + 4)));
SET32(4, RW(4) + 1);
wr16(c, (RW(5) + 4), (u16)RW(4));
SET64(4, rd8(c, (RW(18) + 505)));
SET64(4, RD(4) | 0x4);
wr8(c, (RW(18) + 505), (u8)RW(4));
wr16(c, (RW(18) + 604), (u16)RW(3)); goto L_00144BEC;
L_00144674:;
SET64(2, (s64)(s32)0x42800000);
SET64(6, (s32)rd32(c, (RW(18) + 508)));
c->f[0].u = RW(2);
SET64(5, (s64)(s32)0x42c80000);
SET64(3, (s64)(s32)0x44190000);
SET32(4, RW(0) + 208);
SET64(2, (s16)rd16(c, (RW(6) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(6) + 4), (u16)RW(2));
SET64(6, (s32)rd32(c, (RW(18) + 508)));
SET64(2, (s16)rd16(c, (RW(6) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(6) + 4), (u16)RW(2));
SET64(8, (s32)rd32(c, (RW(18) + 508)));
SET64(2, (s16)rd16(c, (RW(8) + 4)));
SET64(6, (s32)rd32(c, (RW(8) + 0)));
SET32(7, RW(2) << 1);
SET32(6, RW(6) + RW(7));
SET32(2, RW(2) + 1);
SET64(6, (s16)rd16(c, (RW(6) + 0)));
c->f[1].u = RW(6);
wr16(c, (RW(8) + 4), (u16)RW(2));
c->f[1].f = (f32)(s32)c->f[1].u;
wr32(c, (RW(18) + 652), RW(5));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(18) + 656), c->f[1].u);
wr32(c, (RW(18) + 660), RW(3));
wr32(c, (RW(18) + 664), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 512)));
wr32(c, (RW(18) + 668), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 512)));
wr32(c, (RW(18) + 672), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(2) + 4)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 0)));
wr16(c, (RW(18) + 732), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(2) + 4)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 0)));
wr16(c, (RW(18) + 734), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
SET64(31, 0x144750); wr16(c, (RW(3) + 4), (u16)RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00144760; }
SET64(31, 0x144760); SET64(4, RD(16) + RD(0)); JP_F_00174BD0(c);
L_00144760:;
wr32(c, (RW(18) + 764), RW(16));
SET32(5, RW(29) + 64);
c->f[3].u = rd32(c, (RW(18) + 664));
c->f[2].u = rd32(c, (RW(18) + 660));
c->f[1].u = rd32(c, (RW(18) + 656));
c->f[0].u = rd32(c, (RW(18) + 652));
wr32(c, (RW(29) + 64), c->f[0].u);
wr32(c, (RW(29) + 68), c->f[1].u);
wr32(c, (RW(29) + 72), c->f[2].u);
wr32(c, (RW(29) + 76), c->f[3].u);
SET64(4, (s32)rd32(c, (RW(18) + 764)));
SET64(31, 0x144794); SET32(6, RW(18) + 668); JP_F_00174890(c);
SET64(4, (s32)rd32(c, (RW(18) + 764)));
SET64(31, 0x1447a0); SET64(5, RD(0) + RD(0)); JP_F_001747F0(c);
SET64(6, rd16(c, (RW(18) + 732)));
SET64(4, (s32)rd32(c, (RW(18) + 764)));
SET64(31, 0x1447b0); SET64(5, RD(0) + RD(0)); JP_F_00174640(c);
SET64(6, rd16(c, (RW(18) + 734)));
SET64(4, (s32)rd32(c, (RW(18) + 764)));
SET64(31, 0x1447c0); SET32(5, RW(0) + 1); JP_F_00174640(c);
SET64(31, 0x1447c8); SET64(4, (s32)rd32(c, (RW(18) + 764))); JP_F_00174810(c);
SET64(2, (s32)rd32(c, (RW(18) + 764)));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + 200), (u16)RW(3));
SET64(31, 0x1447dc); SET64(4, (s32)rd32(c, (RW(18) + 764))); JP_F_00174510(c);
SET64(3, RD(2) & 0xff);
if (RD(3) != RD(0)) { SET32(3, RW(0) + 650); goto L_001447F4; }
SET64(31, 0x1447f0); SET64(4, (s32)rd32(c, (RW(18) + 764))); JP_F_001745D0(c);
SET32(3, RW(0) + 650);
L_001447F4:;
wr16(c, (RW(18) + 604), (u16)RW(3)); goto L_00144BEC;
L_001447FC:;
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
c->f[0].u = rd32(c, (RW(18) + 432));
SET64(4, (s16)rd16(c, (RW(3) + 4)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET64(3, (s16)rd16(c, (RW(3) + 0)));
c->f[1].u = RW(3);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(18) + 432), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3)); goto L_00144BEC;
L_0014485C:;
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
c->f[0].u = rd32(c, (RW(18) + 436));
SET64(4, (s16)rd16(c, (RW(3) + 4)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET64(3, (s16)rd16(c, (RW(3) + 0)));
c->f[1].u = RW(3);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(18) + 436), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3)); goto L_00144BEC;
L_001448BC:;
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(3) + 4)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET64(3, (s16)rd16(c, (RW(3) + 0)));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(18) + 432), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3)); goto L_00144BEC;
L_00144914:;
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(3) + 4)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET64(3, (s16)rd16(c, (RW(3) + 0)));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(18) + 436), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3)); goto L_00144BEC;
L_0014496C:;
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(3) + 4)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET64(3, rd16(c, (RW(3) + 0)));
wr32(c, (RW(18) + 644), RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3)); goto L_00144BEC;
L_001449B8:;
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(6, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(6) + 4)));
SET64(4, (s32)rd32(c, (RW(6) + 0)));
SET32(5, RW(3) << 1);
SET32(4, RW(4) + RW(5));
SET32(3, RW(3) + 1);
SET64(4, rd16(c, (RW(4) + 0)));
wr16(c, (RW(6) + 4), (u16)RW(3));
SET64(7, (s32)rd32(c, (RW(18) + 508)));
SET32(3, RW(4) << 2);
SET32(3, RW(3) + RW(18));
SET64(4, (s16)rd16(c, (RW(7) + 4)));
SET64(5, (s32)rd32(c, (RW(7) + 0)));
SET32(6, RW(4) << 1);
SET32(5, RW(5) + RW(6));
SET32(4, RW(4) + 1);
SET64(5, rd16(c, (RW(5) + 0)));
wr16(c, (RW(7) + 4), (u16)RW(4));
SET32(5, RW(5) << 2);
SET64(6, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(18) + 542)));
SET64(6, (s32)rd32(c, (RW(6) + 0)));
SET32(4, RW(4) << 2);
SET32(4, RW(4) + RW(18));
wr32(c, (RW(4) + 544), RW(6));
SET64(6, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(18) + 542)));
SET64(6, (s16)rd16(c, (RW(6) + 4)));
SET32(4, RW(4) << 1);
SET32(4, RW(4) + RW(18));
wr16(c, (RW(4) + 584), (u16)RW(6));
SET64(4, (s16)rd16(c, (RW(18) + 542)));
SET32(4, RW(4) + 1);
wr16(c, (RW(18) + 542), (u16)RW(4));
SET64(4, (s32)rd32(c, (RW(3) + 516)));
SET32(4, RW(4) + RW(5));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(3) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
wr16(c, (RW(3) + 4), (u16)RW(0)); goto L_00144BEC;
L_00144A7C:;
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(4, (s16)rd16(c, (RW(3) + 4)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET64(3, (s16)rd16(c, (RW(3) + 0)));
if (RD(3) == RD(0)) { SET64(3, rd8(c, (RW(18) + 505))); goto L_00144AC8; }
SET64(3, rd8(c, (RW(18) + 505)));
SET64(3, RD(3) & 0x7f);
wr8(c, (RW(18) + 505), (u8)RW(3)); goto L_00144AD0;
L_00144AC8:;
SET64(3, RD(3) | 0x80);
wr8(c, (RW(18) + 505), (u8)RW(3));
L_00144AD0:;
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3)); goto L_00144BEC;
L_00144AE4:;
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 508)));
SET64(2, (s16)rd16(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr16(c, (RW(3) + 4), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(2) + 4)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x144b20); SET32(4, RW(18) + 16); JP_F_00145B10(c);
SET64(3, RD(2) & 0xffff);
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_00144B38; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00144B50;
L_00144B38:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00144B50:;
SET64(3, (s64)(s32)0x40000000);
c->f[0].u = RW(3);
c->f[1].f = fpu_div(F(1), F(0));
c->f[0].u = rd32(c, (RW(18) + 432));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(18) + 432), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3)); goto L_00144BEC;
L_00144B80:;
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(4) + 4)));
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
SET64(6, (s32)rd32(c, (RW(18) + 508)));
SET64(3, (s16)rd16(c, (RW(6) + 4)));
SET64(4, (s32)rd32(c, (RW(6) + 0)));
SET32(5, RW(3) << 1);
SET32(4, RW(4) + RW(5));
SET32(3, RW(3) + 1);
SET64(4, rd16(c, (RW(4) + 0)));
wr16(c, (RW(6) + 4), (u16)RW(3));
SET64(7, (s32)rd32(c, (RW(18) + 508)));
SET32(3, RW(4) << 2);
SET32(3, RW(3) + RW(18));
SET64(4, (s16)rd16(c, (RW(7) + 4)));
SET64(5, (s32)rd32(c, (RW(7) + 0)));
SET32(6, RW(4) << 1);
SET32(5, RW(5) + RW(6));
SET32(4, RW(4) + 1);
SET64(5, (s16)rd16(c, (RW(5) + 0)));
wr16(c, (RW(7) + 4), (u16)RW(4));
wr32(c, (RW(3) + 776), RW(5));
L_00144BEC:;
SET64(31, rd64(c, (RW(29) + 48)));
L_00144BF0:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_00144C10(Ctx *c) { /* func_00144C10 */
ENTER(0x144c10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[1].u = rd32(c, (RW(4) + 432));
c->f[0].u = rd32(c, (RW(4) + 632));
c->fcc = F(1) < F(0);
if (c->fcc) { SET32(4, RW(4) + 16); goto L_00144C34; }
wr32(c, (RW(4) + 632), c->f[1].u);
SET32(4, RW(4) + 16);
L_00144C34:;
SET64(31, 0x144c3c);  JP_F_00146C80(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00144C50(Ctx *c) { /* func_00144C50 */
ENTER(0x144c50);
c->f[0].u = rd32(c, (RW(4) + 632)); return;
}

void JP_F_00144C60(Ctx *c) { /* func_00144C60 */
ENTER(0x144c60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(6) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_00144C94; }
SET64(25, (s32)rd32(c, (RW(17) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x144c8c); SET32(4, RW(17) + 16); rt_call(c, t); }
wr32(c, (RW(17) + 432), RW(0));
wr32(c, (RW(17) + 436), RW(0));
L_00144C94:;
SET64(2, rd8(c, (RW(17) + 504)));
SET64(5, RD(16) + RD(0));
SET64(2, RD(2) & 0xfe);
wr8(c, (RW(17) + 504), (u8)RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x144cb4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 632), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00144CD0(Ctx *c) { /* func_00144CD0 */
ENTER(0x144cd0);
SET64(6, (s32)rd32(c, (RW(4) + 512)));
SET64(3, RD(5) & 0xffff);
SET32(5, RW(3) << 1);
SET64(3, (s32)rd32(c, (RW(4) + 508)));
SET32(5, RW(5) + RW(6));
SET64(5, rd16(c, (RW(5) + 2)));
SET32(5, RW(5) << 1);
SET32(5, RW(6) + RW(5));
wr32(c, (RW(3) + 0), RW(5));
SET64(3, (s32)rd32(c, (RW(4) + 508)));
wr16(c, (RW(3) + 4), (u16)RW(0)); return;
}

void JP_F_00144D00(Ctx *c) { /* func_00144D00 */
ENTER(0x144d00);
SET32(29, RW(29) + -192);
SET32(3, RW(0) + 20);
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(0) + -1);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
wr8(c, (RW(4) + 504), (u8)RW(0));
SET64(16, RD(7) + RD(0));
wr8(c, (RW(4) + 505), (u8)RW(0));
SET64(5, rd8(c, (RW(4) + 505)));
SET64(5, RD(5) & 0xfd);
wr8(c, (RW(4) + 505), (u8)RW(5));
wr32(c, (RW(4) + 636), RW(0));
wr32(c, (RW(4) + 632), RW(0));
wr16(c, (RW(4) + 532), (u16)RW(0));
wr16(c, (RW(4) + 604), (u16)RW(0));
wr16(c, (RW(4) + 606), (u16)RW(0));
wr16(c, (RW(4) + 540), (u16)RW(3));
wr16(c, (RW(4) + 542), (u16)RW(0));
wr16(c, (RW(4) + 808), (u16)RW(0));
wr32(c, (RW(4) + 764), RW(0));
wr16(c, (RW(4) + 810), (u16)RW(2));
SET64(31, 0x144d74); SET32(4, RW(0) + 8); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 508), RW(2)); goto L_00144D88; }
wr32(c, (RW(2) + 0), RW(0));
wr16(c, (RW(2) + 4), (u16)RW(0));
wr32(c, (RW(19) + 508), RW(2));
L_00144D88:;
SET32(4, RW(29) + 80);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(18) + RD(0));
SET32(2, RW(2) + -3040);
SET64(31, 0x144da0); wr32(c, (RW(29) + 176), RW(2)); JP_F_00144EF0(c);
c->f[0].u = rd32(c, (RW(18) + 16));
SET32(4, RW(29) + 100);
SET32(5, RW(18) + 20);
SET64(31, 0x144db4); wr32(c, (RW(29) + 96), c->f[0].u); JP_F_00144EF0(c);
SET32(4, RW(29) + 116);
SET64(31, 0x144dc0); SET32(5, RW(18) + 36); JP_F_00144EE0(c);
c->f[3].u = rd32(c, (RW(18) + 40));
SET64(2, (s16)rd16(c, (RW(18) + 38)));
c->f[2].u = rd32(c, (RW(18) + 44));
SET32(4, RW(29) + 152);
c->f[1].u = rd32(c, (RW(18) + 48));
SET32(5, RW(18) + 72);
c->f[0].u = rd32(c, (RW(18) + 52));
wr16(c, (RW(29) + 118), (u16)RW(2));
wr32(c, (RW(29) + 120), c->f[3].u);
wr32(c, (RW(29) + 124), c->f[2].u);
c->f[3].u = rd32(c, (RW(18) + 56));
c->f[2].u = rd32(c, (RW(18) + 60));
wr32(c, (RW(29) + 128), c->f[1].u);
wr32(c, (RW(29) + 132), c->f[0].u);
c->f[1].u = rd32(c, (RW(18) + 64));
c->f[0].u = rd32(c, (RW(18) + 68));
wr32(c, (RW(29) + 136), c->f[3].u);
wr32(c, (RW(29) + 140), c->f[2].u);
wr32(c, (RW(29) + 144), c->f[1].u);
SET64(31, 0x144e14); wr32(c, (RW(29) + 148), c->f[0].u); JP_F_00144EF0(c);
c->f[1].u = rd32(c, (RW(18) + 88));
SET64(6, RD(16) + RD(0));
c->f[0].u = rd32(c, (RW(18) + 92));
SET32(4, RW(19) + 16);
SET32(5, RW(29) + 80);
wr32(c, (RW(29) + 168), c->f[1].u);
SET64(31, 0x144e34); wr32(c, (RW(29) + 172), c->f[0].u); JP_F_00147150(c);
SET32(2, RW(0) + 50);
{ int t = RD(17) == RD(0); wr16(c, (RW(19) + 604), (u16)RW(2)); if (t) goto L_00144E60; }
wr32(c, (RW(19) + 512), RW(17));
SET64(4, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 508)));
wr32(c, (RW(2) + 0), RW(17));
SET64(25, (s32)rd32(c, (RW(19) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x144e60); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
L_00144E60:;
SET64(31, 0x144e68); SET32(4, RW(0) + 16); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 608), RW(2)); goto L_00144E84; }
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(19) + 608), RW(2));
L_00144E84:;
SET64(17, RD(0) + RD(0));
SET64(16, RD(19) + RD(0));
L_00144E8C:;
SET32(4, RW(0) + 16);
SET64(31, 0x144e98); wr32(c, (RW(16) + 776), RW(0)); JP_F_00100530(c);
SET32(17, RW(17) + 1);
wr32(c, (RW(16) + 792), RW(2));
SET64(3, RSD(17) < (s64)4);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00144E8C; } }
wr32(c, (RW(19) + 644), RW(0));
SET32(3, RW(0) + 1);
wr8(c, (RW(19) + 772), (u8)RW(3));
wr8(c, (RW(19) + 773), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 192); return;
}

void JP_F_00144EE0(Ctx *c) { /* func_00144EE0 */
ENTER(0x144ee0);
SET64(3, rd8(c, (RW(5) + 0)));
SET64(2, RD(4) + RD(0));
wr8(c, (RW(4) + 0), (u8)RW(3)); return;
}

void JP_F_00144EF0(Ctx *c) { /* func_00144EF0 */
ENTER(0x144ef0);
c->f[3].u = rd32(c, (RW(5) + 12));
SET64(2, RD(4) + RD(0));
c->f[2].u = rd32(c, (RW(5) + 8));
c->f[1].u = rd32(c, (RW(5) + 4));
c->f[0].u = rd32(c, (RW(5) + 0));
wr32(c, (RW(4) + 0), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[1].u);
wr32(c, (RW(4) + 8), c->f[2].u);
wr32(c, (RW(4) + 12), c->f[3].u); return;
}

void JP_F_00144F20(Ctx *c) { /* func_00144F20 */
ENTER(0x144f20);
SET32(29, RW(29) + -128);
SET32(3, RW(0) + 20);
wr64(c, (RW(29) + 80), RD(31));
SET32(2, RW(0) + -1);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
wr8(c, (RW(4) + 505), (u8)RW(0));
SET64(16, RD(8) + RD(0));
wr32(c, (RW(4) + 636), RW(0));
wr32(c, (RW(4) + 632), RW(0));
wr16(c, (RW(4) + 532), (u16)RW(0));
wr16(c, (RW(4) + 604), (u16)RW(0));
wr16(c, (RW(4) + 606), (u16)RW(0));
wr16(c, (RW(4) + 540), (u16)RW(3));
wr16(c, (RW(4) + 542), (u16)RW(0));
wr16(c, (RW(4) + 808), (u16)RW(0));
wr32(c, (RW(4) + 764), RW(0));
wr16(c, (RW(4) + 810), (u16)RW(2));
SET64(31, 0x144f8c); SET32(4, RW(0) + 8); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(20) + 508), RW(2)); goto L_00144FA0; }
wr32(c, (RW(2) + 0), RW(0));
wr16(c, (RW(2) + 4), (u16)RW(0));
wr32(c, (RW(20) + 508), RW(2));
L_00144FA0:;
c->f[3].u = rd32(c, (RW(18) + 12));
SET64(5, (s32)rd32(c, (RW(20) + 512)));
c->f[2].u = rd32(c, (RW(18) + 8));
rd128(c, (RW(19) + 0) & ~15u, &c->r[3]);
c->f[1].u = rd32(c, (RW(18) + 4));
c->f[0].u = rd32(c, (RW(18) + 0));
SET64(8, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 0), RW(5));
SET64(7, RD(16) + RD(0));
wr32(c, (RW(29) + 124), RW(8));
SET32(4, RW(20) + 16);
wr32(c, (RW(29) + 112), RW(0));
SET32(5, RW(29) + 112);
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 100), c->f[1].u);
wr32(c, (RW(29) + 120), RW(0));
SET32(6, RW(29) + 96);
wr32(c, (RW(29) + 96), c->f[0].u);
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 104), c->f[2].u);
SET64(31, 0x144ff8); wr32(c, (RW(29) + 108), c->f[3].u); JP_F_00147270(c);
SET32(2, RW(0) + 50);
{ int t = RD(17) == RD(0); wr16(c, (RW(20) + 604), (u16)RW(2)); if (t) goto L_00145024; }
wr32(c, (RW(20) + 512), RW(17));
SET64(4, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(20) + 508)));
wr32(c, (RW(2) + 0), RW(17));
SET64(25, (s32)rd32(c, (RW(20) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x145024); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
L_00145024:;
SET64(31, 0x14502c); SET32(4, RW(0) + 16); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(20) + 608), RW(2)); goto L_00145048; }
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(20) + 608), RW(2));
L_00145048:;
SET64(17, RD(0) + RD(0));
SET64(16, RD(20) + RD(0));
L_00145050:;
SET32(4, RW(0) + 16);
SET64(31, 0x14505c); wr32(c, (RW(16) + 776), RW(0)); JP_F_00100530(c);
SET32(17, RW(17) + 1);
wr32(c, (RW(16) + 792), RW(2));
SET64(3, RSD(17) < (s64)4);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00145050; } }
wr32(c, (RW(20) + 644), RW(0));
SET32(3, RW(0) + 1);
wr8(c, (RW(20) + 772), (u8)RW(3));
wr8(c, (RW(20) + 773), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_001450A0(Ctx *c) { /* func_001450A0 */
ENTER(0x1450a0);
wr8(c, (RW(4) + 36), (u8)RW(0));
SET64(3, (s64)(s32)0x42c80000);
wr16(c, (RW(4) + 38), (u16)RW(0));
SET64(6, (s64)(s32)0x40000000);
wr32(c, (RW(4) + 40), RW(0));
SET64(5, (s64)(s32)0x40a00000);
wr32(c, (RW(4) + 44), RW(0));
wr32(c, (RW(4) + 48), RW(3));
SET64(3, (s64)(s32)0x3dcc0000);
wr32(c, (RW(4) + 52), RW(6));
SET64(3, RD(3) | 0xcccd);
wr32(c, (RW(4) + 56), RW(5));
wr32(c, (RW(4) + 60), RW(3)); return;
}

void JP_F_001450E0(Ctx *c) { /* func_001450E0 */
ENTER(0x1450e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[1].u = rd32(c, (RW(4) + 8));
c->f[0].u = rd32(c, (RW(4) + 0));
c->f[2].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(4) + 8), c->f[0].u);
wr32(c, (RW(4) + 0), c->f[12].u);
c->f[1].u = rd32(c, (RW(4) + 12));
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(4) + 12), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[2].u);
c->f[1].u = rd32(c, (RW(4) + 28));
c->f[0].u = rd32(c, (RW(4) + 20));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(4) + 28), c->f[0].u);
wr32(c, (RW(4) + 20), c->f[12].u);
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[0].u = rd32(c, (RW(4) + 24));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(4) + 32), c->f[0].u);
wr32(c, (RW(4) + 24), c->f[2].u);
SET64(25, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14515c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00145170(Ctx *c) { /* func_00145170 */
ENTER(0x145170);
c->f[0].u = rd32(c, (RW(4) + 0)); return;
}

void JP_F_00145180(Ctx *c) { /* func_00145180 */
ENTER(0x145180);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[1].u = rd32(c, (RW(4) + 8));
c->f[0].u = rd32(c, (RW(4) + 0));
c->f[2].u = rd32(c, (RW(4) + 0));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(4) + 8), c->f[0].u);
wr32(c, (RW(4) + 0), c->f[2].u);
c->f[1].u = rd32(c, (RW(4) + 12));
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(4) + 12), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[12].u);
c->f[1].u = rd32(c, (RW(4) + 28));
c->f[0].u = rd32(c, (RW(4) + 20));
c->f[2].u = rd32(c, (RW(4) + 0));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(4) + 28), c->f[0].u);
wr32(c, (RW(4) + 20), c->f[2].u);
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[0].u = rd32(c, (RW(4) + 24));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(4) + 32), c->f[0].u);
wr32(c, (RW(4) + 24), c->f[12].u);
SET64(25, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x145200);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00145210(Ctx *c) { /* func_00145210 */
ENTER(0x145210);
c->f[0].u = rd32(c, (RW(4) + 4)); return;
}

void JP_F_00145220(Ctx *c) { /* func_00145220 */
ENTER(0x145220);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 16), c->f[12].u);
SET64(25, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x14523c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00145250(Ctx *c) { /* func_00145250 */
ENTER(0x145250);
c->f[0].u = rd32(c, (RW(4) + 16)); return;
}

void JP_F_00145260(Ctx *c) { /* func_00145260 */
ENTER(0x145260);
c->f[1].u = rd32(c, (RW(4) + 8));
c->f[0].u = rd32(c, (RW(4) + 0));
c->f[0].f = fpu(F(1) - F(0)); return;
}

void JP_F_00145270(Ctx *c) { /* func_00145270 */
ENTER(0x145270);
c->f[1].u = rd32(c, (RW(4) + 12));
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(1) - F(0)); return;
}

void JP_F_00145280(Ctx *c) { /* func_00145280 */
ENTER(0x145280);
SET64(2, rd16(c, (RW(4) + 8))); return;
}

void JP_F_00145290(Ctx *c) { /* func_00145290 */
ENTER(0x145290);
c->f[0].u = rd32(c, (RW(4) + 4)); return;
}

void JP_F_001452A0(Ctx *c) { /* func_001452A0 */
ENTER(0x1452a0);
SET64(2, (s16)rd16(c, (RW(4) + 10))); return;
}

void JP_F_001452B0(Ctx *c) { /* func_001452B0 */
ENTER(0x1452b0);
SET64(2, rd8(c, (RW(4) + 12))); return;
}

void JP_F_001452C0(Ctx *c) { /* func_001452C0 */
ENTER(0x1452c0);
SET64(2, (s32)rd32(c, (RW(4) + 20))); return;
}

void JP_F_001452D0(Ctx *c) { /* func_001452D0 */
ENTER(0x1452d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1452e0);  JP_F_00143710(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001452F0(Ctx *c) { /* func_001452F0 */
ENTER(0x1452f0);
SET64(3, (s16)rd16(c, (RW(5) + 0)));
wr16(c, (RW(4) + 810), (u16)RW(3)); return;
}

void JP_F_00145300(Ctx *c) { /* func_00145300 */
ENTER(0x145300);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -812);
SET32(4, RW(4) + RW(25)); { JP_F_00143650(c); return; }
}

void JP_F_00145310(Ctx *c) { /* func_00145310 */
ENTER(0x145310);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -796);
SET32(4, RW(4) + RW(25)); { JP_F_00146440(c); return; }
}

void JP_F_00145320(Ctx *c) { /* func_00145320 */
ENTER(0x145320);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -812);
SET32(4, RW(4) + RW(25)); { JP_F_001436A0(c); return; }
}

void JP_F_00145330(Ctx *c) { /* func_00145330 */
ENTER(0x145330);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -796);
SET32(4, RW(4) + RW(25)); { JP_F_0014DD40(c); return; }
}

void JP_F_00145340(Ctx *c) { /* func_00145340 */
ENTER(0x145340);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -812);
SET32(4, RW(4) + RW(25)); { JP_F_001435B0(c); return; }
}

void JP_F_00145350(Ctx *c) { /* func_00145350 */
ENTER(0x145350);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -812);
SET32(4, RW(4) + RW(25)); { JP_F_00143310(c); return; }
}

void JP_F_00145360(Ctx *c) { /* func_00145360 */
ENTER(0x145360);
SET32(4, RW(4) + -224); { JP_F_00143310(c); return; }
}

void JP_F_00145370(Ctx *c) { /* func_00145370 */
ENTER(0x145370);
SET32(4, RW(4) + -16); { JP_F_00143650(c); return; }
}

void JP_F_00145380(Ctx *c) { /* func_00145380 */
ENTER(0x145380);
SET32(4, RW(4) + -16); { JP_F_001436A0(c); return; }
}

void JP_F_00145390(Ctx *c) { /* func_00145390 */
ENTER(0x145390);
SET32(4, RW(4) + -16); { JP_F_001436D0(c); return; }
}

void JP_F_001453A0(Ctx *c) { /* func_001453A0 */
ENTER(0x1453a0);
SET32(4, RW(4) + -16); { JP_F_00144C10(c); return; }
}

void JP_F_001453B0(Ctx *c) { /* func_001453B0 */
ENTER(0x1453b0);
SET32(4, RW(4) + -16); { JP_F_001435B0(c); return; }
}

void JP_F_001453C0(Ctx *c) { /* func_001453C0 */
ENTER(0x1453c0);
SET32(4, RW(4) + -16); { JP_F_00143310(c); return; }
}

void JP_F_001453D0(Ctx *c) { /* func_001453D0 */
ENTER(0x1453d0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -496);
SET32(4, RW(4) + RW(25)); { JP_F_00146360(c); return; }
}

void JP_F_001453E0(Ctx *c) { /* func_001453E0 */
ENTER(0x1453e0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -496);
SET32(4, RW(4) + RW(25)); { JP_F_00146440(c); return; }
}

void JP_F_001453F0(Ctx *c) { /* func_001453F0 */
ENTER(0x1453f0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -496);
SET32(4, RW(4) + RW(25)); { JP_F_00146560(c); return; }
}

void JP_F_00145400(Ctx *c) { /* func_00145400 */
ENTER(0x145400);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -496);
SET32(4, RW(4) + RW(25)); { JP_F_0014DD40(c); return; }
}

void JP_F_00145410(Ctx *c) { /* func_00145410 */
ENTER(0x145410);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -496);
SET32(4, RW(4) + RW(25)); { JP_F_00147310(c); return; }
}

void JP_F_00145420(Ctx *c) { /* func_00145420 */
ENTER(0x145420);
SET32(4, RW(4) + -208); { JP_F_0014DF70(c); return; }
}

void JP_F_00145430(Ctx *c) { /* func_00145430 */
ENTER(0x145430);
SET32(4, RW(4) + -12); { JP_F_002A9FF0(c); return; }
}

void JP_F_00145440(Ctx *c) { /* func_00145440 */
ENTER(0x145440);
SET32(4, RW(4) + -12); { JP_F_002AA040(c); return; }
}

void JP_F_00145450(Ctx *c) { /* func_00145450 */
ENTER(0x145450);
SET32(4, RW(4) + -12); { JP_F_002AA090(c); return; }
}

void JP_F_00145460(Ctx *c) { /* func_00145460 */
ENTER(0x145460);
SET32(4, RW(4) + -208); { JP_F_0014DED0(c); return; }
}

void JP_F_00145470(Ctx *c) { /* func_00145470 */
ENTER(0x145470);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x145480);  JP_F_0014DDA0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00145490(Ctx *c) { /* func_00145490 */
ENTER(0x145490);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1454a0); SET64(4, (s32)rd32(c, (RW(4) + 12))); JP_F_00141B90(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_001454C0(Ctx *c) { /* func_001454C0 */
ENTER(0x1454c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, 0x1454d8); SET64(16, RD(0) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET64(16, RD(0) + (s64)1); goto L_001454F8; }
{ int t = RD(2) == RD(0);  if (t) goto L_001454F4; }
SET64(2, RD(16) + RD(0)); goto L_001454FC;
L_001454F4:;
SET64(16, RD(0) + (s64)1);
L_001454F8:;
SET64(2, RD(16) + RD(0));
L_001454FC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00145510(Ctx *c) { /* func_00145510 */
ENTER(0x145510);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x145520);  JP_F_0014DCE0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00145530(Ctx *c) { /* func_00145530 */
ENTER(0x145530);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x145540);  JP_F_0014E9E0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00145550(Ctx *c) { /* func_00145550 */
ENTER(0x145550);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x3d080000);
wr64(c, (RW(29) + 16), RD(31));
SET64(3, RD(3) | 0x8889);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = rd32(c, (RW(4) + 424));
SET64(16, RD(4) + RD(0));
c->f[1].u = RW(0);
c->f[3].u = RW(3);
c->facc = fpu(F(1) + F(2));
c->f[2].f = fpu(c->facc + F(3) * F(12));
c->f[0].u = RW(2);
c->fcc = F(2) < F(0);
{ int t = c->fcc; wr32(c, (RW(4) + 424), c->f[2].u); if (t) goto L_0014559C; }
wr32(c, (RW(16) + 424), c->f[1].u);
L_0014559C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1455a8); SET32(5, RW(16) + 432); JP_F_0014E980(c);
c->f[1].u = rd32(c, (RW(16) + 424));
SET64(3, (s64)(s32)0x3e800000);
c->f[2].u = RW(3);
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->f[1].f = fpu_div(F(1), F(2));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001455E8; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xffff); goto L_00145600;
L_001455E8:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xffff);
L_00145600:;
SET64(2, RD(3) & 0xffff);
SET64(3, (s64)(s32)0x420000);
SET32(5, RW(2) << 3);
SET32(3, RW(3) + 4496);
SET64(2, (s64)(s32)0x420000);
SET32(4, RW(3) + RW(5));
SET32(2, RW(2) + 4500);
SET32(3, RW(2) + RW(5));
c->f[2].u = rd32(c, (RW(4) + 0));
SET64(2, (s64)(s32)0x41c00000);
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[1].u = RW(2);
wr32(c, (RW(16) + 172), c->f[2].u);
wr32(c, (RW(16) + 176), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 172));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 180), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 176));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 184), c->f[0].u);
wr32(c, (RW(16) + 164), RW(2));
wr32(c, (RW(16) + 168), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x145668); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00145680(Ctx *c) { /* func_00145680 */
ENTER(0x145680);
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(4) + 12))); goto L_001456A8; }
SET64(3, (s32)rd32(c, (RW(4) + 12)));
SET64(3, rd8(c, (RW(3) + 8)));
{ int t = RD(3) == RD(0);  if (t) goto L_001456BC; }
wr32(c, (RW(4) + 424), RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 12)));
wr8(c, (RW(3) + 8), (u8)RW(0)); goto L_001456BC;
L_001456A8:;
SET64(3, rd8(c, (RW(4) + 8)));
{ int t = RD(3) != RD(0);  if (t) goto L_001456BC; }
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(3));
L_001456BC:;
 return;
}

void JP_F_001456D0(Ctx *c) { /* func_001456D0 */
ENTER(0x1456d0);
SET32(29, RW(29) + -64);
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
{ int t = RD(7) == RD(0); wr128(c, (RW(17) + 432) & ~15u, &c->r[2]); if (t) goto L_00145700; }
wr32(c, (RW(17) + 420), RW(7)); goto L_0014574C;
L_00145700:;
SET64(2, (s32)rd32(c, (RW(28) + -30264)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(28) + -30264))); goto L_00145744; }
SET64(31, 0x145714); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_00145724; }
SET64(31, 0x145724); SET64(4, RD(18) + RD(0)); JP_F_001509B0(c);
L_00145724:;
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 128);
SET32(6, RW(0) + 256);
SET64(7, RD(0) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x145740); wr32(c, (RW(28) + -30268), RW(18)); JP_F_00150830(c);
SET64(2, (s32)rd32(c, (RW(28) + -30264)));
L_00145744:;
SET32(2, RW(2) + 1);
wr32(c, (RW(28) + -30264), RW(2));
L_0014574C:;
SET64(6, (s32)rd32(c, (RW(17) + 420)));
if (RD(6) == RD(0)) { SET64(6, (s32)rd32(c, (RW(28) + -30268))); goto L_00145758; }
L_00145758:;
SET32(4, RW(17) + 356);
SET64(5, RD(16) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(31, 0x14576c); SET64(8, RD(0) + RD(0)); JP_F_0014F9B0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x145778); wr32(c, (RW(17) + 424), RW(0)); JP_F_0014E3D0(c);
{ int t = RD(17) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_00145784; }
SET32(2, RW(17) + 356);
L_00145784:;
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(17) + 432);
SET64(31, 0x1457a0); wr8(c, (RW(2) + 8), (u8)RW(3)); JP_F_0014E980(c);
c->f[1].u = rd32(c, (RW(17) + 424));
SET64(3, (s64)(s32)0x3e800000);
c->f[2].u = RW(3);
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->f[1].f = fpu_div(F(1), F(2));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_001457E0; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xffff); goto L_001457F8;
L_001457E0:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xffff);
L_001457F8:;
SET64(2, RD(3) & 0xffff);
SET64(3, (s64)(s32)0x420000);
SET32(5, RW(2) << 3);
SET32(3, RW(3) + 4496);
SET64(2, (s64)(s32)0x420000);
SET32(4, RW(3) + RW(5));
SET32(2, RW(2) + 4500);
SET32(3, RW(2) + RW(5));
c->f[2].u = rd32(c, (RW(4) + 0));
SET64(2, (s64)(s32)0x41c00000);
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[1].u = RW(2);
wr32(c, (RW(17) + 172), c->f[2].u);
wr32(c, (RW(17) + 176), c->f[0].u);
c->f[0].u = rd32(c, (RW(17) + 172));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(17) + 180), c->f[0].u);
c->f[0].u = rd32(c, (RW(17) + 176));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(17) + 184), c->f[0].u);
wr32(c, (RW(17) + 164), RW(2));
wr32(c, (RW(17) + 168), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x145860); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00145880(Ctx *c) { /* func_00145880 */
ENTER(0x145880);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014598C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2704);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(4, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(7, RW(7) + -2560);
SET64(3, (s64)(s32)0x4d0000);
SET32(5, RW(5) + -2656);
SET32(4, RW(4) + -2636);
SET32(3, RW(3) + -2588);
wr32(c, (RW(6) + 16), RW(7));
SET32(2, RW(17) + 448);
wr32(c, (RW(17) + 216), RW(5));
wr32(c, (RW(17) + 220), RW(4));
wr32(c, (RW(17) + 416), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 420)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(28) + -30264))); goto L_00145900; }
wr32(c, (RW(17) + 420), RW(0)); goto L_0014592C;
L_00145900:;
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(28) + -30264), RW(2)); if (t) goto L_0014592C; }
SET64(4, (s32)rd32(c, (RW(28) + -30268)));
if (RD(4) == RD(0)) { wr32(c, (RW(28) + -30268), RW(0)); goto L_0014592C; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x145928); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(28) + -30268), RW(0));
L_0014592C:;
SET32(4, RW(17) + 356);
SET64(31, 0x145938); SET64(5, RD(0) + RD(0)); JP_F_00150410(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x145944); SET64(5, RD(0) + RD(0)); JP_F_0014E490(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_00145978; }
SET32(4, RW(17) + 448);
{ int t = RD(4) == RD(0);  if (t) goto L_00145974; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 464), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x145974);  rt_call(c, t); }
L_00145974:;
SET64(2, RD(16) << 48);
L_00145978:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_00145990; }
SET64(31, 0x14598c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014598C:;
SET64(2, RD(17) + RD(0));
L_00145990:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001459B0(Ctx *c) { /* func_001459B0 */
ENTER(0x1459b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001459E0; }
SET32(4, RW(16) + 448);
SET64(31, 0x1459e0); wr32(c, (RW(16) + 12), RW(4)); JP_F_00141C80(c);
L_001459E0:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1459ec); SET64(5, RD(0) + RD(0)); JP_F_0014E610(c);
SET64(31, 0x1459f4); SET32(4, RW(16) + 356); JP_F_00150480(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2704);
SET64(7, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 8), RW(2));
SET64(6, (s64)(s32)0x4d0000);
SET64(8, (s32)rd32(c, (RW(16) + 12)));
SET32(9, RW(9) + -2560);
SET64(5, (s64)(s32)0x4d0000);
SET32(7, RW(7) + -2656);
SET32(6, RW(6) + -2636);
SET32(5, RW(5) + -2588);
wr32(c, (RW(8) + 16), RW(9));
SET32(4, RW(16) + 448);
wr32(c, (RW(16) + 216), RW(7));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 220), RW(6));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 416), RW(5));
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 20), RW(4));
wr32(c, (RW(16) + 420), RW(0));
wr32(c, (RW(16) + 432), RW(0));
wr32(c, (RW(16) + 436), RW(0));
wr32(c, (RW(16) + 440), RW(0));
wr32(c, (RW(16) + 444), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00145A80(Ctx *c) { /* func_00145A80 */
ENTER(0x145a80);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(31, 0x145a9c); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_0014DFC0(c);
SET64(3, rd8(c, (RW(18) + 464)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_00145AF4; }
SET64(3, rd16(c, (RW(18) + 472)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00145AF0; }
SET64(16, RD(0) + RD(0));
L_00145AB8:;
SET64(3, (s32)rd32(c, (RW(18) + 484)));
SET32(3, RW(3) + RW(16));
SET64(3, rd8(c, (RW(3) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_00145AD8; }
SET64(5, RD(17) & 0xffff);
SET64(31, 0x145ad8); SET64(4, RD(18) + RD(0)); JP_F_00145BF0(c);
L_00145AD8:;
SET64(3, rd16(c, (RW(18) + 472)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 48); if (t) { POLL(); goto L_00145AB8; } }
L_00145AF0:;
SET64(31, rd64(c, (RW(29) + 48)));
L_00145AF4:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00145B10(Ctx *c) { /* func_00145B10 */
ENTER(0x145b10);
SET32(29, RW(29) + -32);
SET32(8, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(31));
SET64(7, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 472)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00145B58; }
SET64(6, (s32)rd32(c, (RW(4) + 484)));
L_00145B34:;
SET64(2, rd8(c, (RW(6) + 0)));
if (RD(2) != RD(0)) { SET32(7, RW(7) + 1); goto L_00145B4C; }
SET64(8, RD(7) << 48);
SET64(8, RSD(8) >> 48); goto L_00145B58;
L_00145B4C:;
SET64(2, RSD(7) < RSD(3));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 48); if (t) { POLL(); goto L_00145B34; } }
L_00145B58:;
SET64(3, RD(8) << 48);
SET64(3, RSD(3) >> 48);
SET32(2, RW(0) + -1);
if (RD(3) == RD(2)) { SET64(2, RD(16) + RD(0)); goto L_00145BE0; }
SET32(2, RW(3) << 1);
SET64(6, (s32)rd32(c, (RW(4) + 484)));
SET32(2, RW(2) + RW(3));
SET32(7, RW(2) << 4);
SET32(3, RW(0) + 1);
SET32(6, RW(6) + RW(7));
SET64(2, (s64)(s32)0x40000000);
wr8(c, (RW(6) + 0), (u8)RW(3));
c->f[0].u = RW(2);
c->f[2].u = rd32(c, (RW(4) + 416));
c->f[1].u = rd32(c, (RW(4) + 448));
c->f[1].f = fpu(F(2) + F(1));
c->f[0].f = fpu(F(0) * F(1));
wr32(c, (RW(6) + 16), c->f[0].u);
c->f[2].u = rd32(c, (RW(4) + 420));
c->f[1].u = rd32(c, (RW(4) + 440));
c->f[0].u = rd32(c, (RW(4) + 436));
c->f[1].f = fpu(F(2) + F(1));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(6) + 20), c->f[0].u);
wr16(c, (RW(6) + 32), (u16)RW(5));
SET64(3, rd16(c, (RW(6) + 32)));
SET64(2, (s32)rd32(c, (RW(4) + 468)));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
SET64(16, rd16(c, (RW(2) + 4)));
SET64(31, 0x145bdc); SET64(5, RD(8) & 0xffff); JP_F_00145BF0(c);
SET64(2, RD(16) + RD(0));
L_00145BE0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00145BF0(Ctx *c) { /* func_00145BF0 */
ENTER(0x145bf0);
SET32(29, RW(29) + -112);
SET64(3, RD(5) & 0xffff);
wr64(c, (RW(29) + 48), RD(31));
SET32(2, RW(3) << 1);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(3, RW(2) + RW(3));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(6, RW(3) << 7);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(5, RW(3) << 4);
SET64(3, (s32)rd32(c, (RW(4) + 484)));
SET64(2, (s32)rd32(c, (RW(4) + 480)));
SET32(16, RW(3) + RW(5));
SET32(17, RW(2) + RW(6));
SET64(3, rd16(c, (RW(16) + 32)));
SET64(2, (s32)rd32(c, (RW(4) + 468)));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
SET64(3, rd16(c, (RW(2) + 8)));
{ int t = RSD(3) < 0; SET64(18, RD(4) + RD(0)); if (t) goto L_00145C50; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00145C6C;
L_00145C50:;
SET32(4, RW(3) >> 1);
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00145C6C:;
SET64(3, (s64)(s32)0x3f000000);
c->f[0].u = RW(3);
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(17) + 172), c->f[0].u);
SET64(3, rd16(c, (RW(2) + 10)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_00145C98; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00145CB0;
L_00145C98:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00145CB0:;
SET64(3, (s64)(s32)0x3f000000);
c->f[0].u = RW(3);
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(17) + 176), c->f[0].u);
SET64(3, rd16(c, (RW(2) + 12)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_00145CDC; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00145CF4;
L_00145CDC:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00145CF4:;
SET64(3, (s64)(s32)0x3f000000);
c->f[0].u = RW(3);
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(17) + 180), c->f[0].u);
SET64(3, rd16(c, (RW(2) + 14)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_00145D20; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00145D38;
L_00145D20:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00145D38:;
SET64(3, (s64)(s32)0x3f000000);
c->f[0].u = RW(3);
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(17) + 184), c->f[0].u);
SET64(3, rd16(c, (RW(2) + 4)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_00145D64; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_00145D7C;
L_00145D64:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_00145D7C:;
wr32(c, (RW(17) + 164), c->f[0].u);
SET64(3, rd16(c, (RW(2) + 6)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_00145D98; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_00145DB0;
L_00145D98:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_00145DB0:;
wr32(c, (RW(17) + 168), c->f[0].u);
SET64(4, (s64)(s32)0x3f800000);
rd128(c, (RW(18) + 32) & ~15u, &c->r[3]);
c->f[5].u = rd32(c, (RW(16) + 24));
wr32(c, (RW(29) + 80), RW(0));
c->f[1].u = rd32(c, (RW(16) + 16));
wr32(c, (RW(29) + 84), RW(0));
c->f[3].u = rd32(c, (RW(16) + 20));
wr32(c, (RW(29) + 88), RW(0));
c->f[6].u = RW(0);
wr32(c, (RW(29) + 92), RW(4));
wr128(c, (RW(29) + 80) & ~15u, &c->r[3]);
c->f[4].u = rd32(c, (RW(29) + 88));
wr32(c, (RW(29) + 76), RW(4));
c->f[0].u = rd32(c, (RW(29) + 80));
wr32(c, (RW(29) + 108), RW(4));
c->f[2].u = rd32(c, (RW(29) + 84));
c->f[4].f = fpu(F(4) + F(5));
c->f[1].f = fpu(F(0) + F(1));
c->f[2].f = fpu(F(2) + F(3));
c->f[0].f = fpu(F(4) + F(6));
wr32(c, (RW(29) + 104), c->f[4].u);
wr32(c, (RW(29) + 100), c->f[2].u);
wr32(c, (RW(29) + 96), c->f[1].u);
SET64(4, (s16)rd16(c, (RW(2) + 2)));
wr32(c, (RW(29) + 72), c->f[0].u);
SET64(3, (s16)rd16(c, (RW(2) + 0)));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(29) + 68), c->f[0].u);
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 64), c->f[0].u);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[3]);
SET64(2, rd16(c, (RW(2) + 6)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_00145E64; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00145E7C;
L_00145E64:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00145E7C:;
c->f[0].u = rd32(c, (RW(29) + 100));
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 96);
c->f[0].f = fpu(F(0) - F(1));
SET64(31, 0x145e94); wr32(c, (RW(29) + 100), c->f[0].u); JP_F_0014E980(c);
c->f[12].u = rd32(c, (RW(18) + 204));
SET64(31, 0x145ea0); SET32(4, RW(17) + 192); JP_F_001638D0(c);
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x145eb0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 12)));
SET64(2, rd8(c, (RW(2) + 8)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 12))); goto L_00145ED0; }
SET64(2, rd8(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 12))); goto L_00145EE8; }
SET64(4, (s32)rd32(c, (RW(17) + 12)));
L_00145ED0:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x145ee0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48))); goto L_00145EFC;
L_00145EE8:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x145ef8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
L_00145EFC:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_00145F10(Ctx *c) { /* func_00145F10 */
ENTER(0x145f10);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x145f30); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_001568A0(c);
SET64(3, rd8(c, (RW(19) + 464)));
{ int t = RD(3) == RD(0);  if (t) goto L_00145F90; }
SET64(3, rd16(c, (RW(19) + 472)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00145F90; }
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_00145F50:;
SET64(2, (s32)rd32(c, (RW(19) + 484)));
SET32(2, RW(2) + RW(17));
wr8(c, (RW(2) + 0), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(19) + 480)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x145f78); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 472)));
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 48);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_00145F50; } }
L_00145F90:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00145FB0(Ctx *c) { /* func_00145FB0 */
ENTER(0x145fb0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x145fd0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00156860(c);
SET64(3, rd8(c, (RW(19) + 464)));
{ int t = RD(3) == RD(0);  if (t) goto L_00146030; }
SET64(3, rd16(c, (RW(19) + 472)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00146030; }
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_00145FF0:;
SET64(2, (s32)rd32(c, (RW(19) + 484)));
SET32(2, RW(2) + RW(17));
wr8(c, (RW(2) + 0), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(19) + 480)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x146018); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 472)));
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 48);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_00145FF0; } }
L_00146030:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00146050(Ctx *c) { /* func_00146050 */
ENTER(0x146050);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x146070); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00156800(c);
SET64(3, rd8(c, (RW(19) + 464)));
{ int t = RD(3) == RD(0);  if (t) goto L_001460D0; }
SET64(3, rd16(c, (RW(19) + 472)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001460D0; }
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_00146090:;
SET64(2, (s32)rd32(c, (RW(19) + 484)));
SET32(2, RW(2) + RW(17));
wr8(c, (RW(2) + 0), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(19) + 480)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1460b8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 472)));
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 48);
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_00146090; } }
L_001460D0:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001460F0(Ctx *c) { /* func_001460F0 */
ENTER(0x1460f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x14610c); SET64(16, RD(5) + RD(0)); JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x146118); SET32(5, RW(0) + 4); JP_F_0022CB50(c);
SET64(6, (s64)(s32)0x420000);
SET64(4, RD(17) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x146130); SET32(6, RW(6) + 3936); JP_F_00146150(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00146150(Ctx *c) { /* func_00146150 */
ENTER(0x146150);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 472), (u16)RW(7));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 468), RW(6));
SET64(31, 0x146184); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00146194; }
SET64(31, 0x146194); SET64(4, RD(17) + RD(0)); JP_F_00150480(c);
L_00146194:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1461a0); wr32(c, (RW(16) + 476), RW(17)); JP_F_00156E70(c);
SET64(4, (s32)rd32(c, (RW(16) + 476)));
SET64(5, RD(18) + RD(0));
SET64(6, RD(2) + RD(0));
SET32(7, RW(0) + -1);
SET64(31, 0x1461b8); SET64(8, RD(0) + RD(0)); JP_F_0014F9B0(c);
SET64(18, rd16(c, (RW(16) + 472)));
SET64(17, RD(0) + RD(0));
SET32(2, RW(18) << 1);
SET32(2, RW(2) + RW(18));
SET32(2, RW(2) << 7);
SET64(31, 0x1461d4); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_00146204; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(8, RD(18) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + -6640);
SET32(6, RW(6) + -7024);
SET64(31, 0x146200); SET32(7, RW(0) + 384); JP_F_00102580(c);
SET64(20, RD(2) + RD(0));
L_00146204:;
wr32(c, (RW(16) + 480), RW(20));
SET64(18, RD(0) + RD(0));
SET64(17, rd16(c, (RW(16) + 472)));
SET32(2, RW(17) << 1);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) << 4);
SET64(31, 0x146224); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_00146250; }
SET64(5, (s64)(s32)0x140000);
SET64(8, RD(17) + RD(0));
SET32(18, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + 25408);
SET64(6, RD(0) + RD(0));
SET64(31, 0x14624c); SET32(7, RW(0) + 48); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_00146250:;
wr32(c, (RW(16) + 484), RW(19));
SET64(3, rd16(c, (RW(16) + 472)));
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00146310; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_00146268:;
SET64(2, (s32)rd32(c, (RW(16) + 480)));
SET32(19, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x146280); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 476)));
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(19) + RD(0));
SET32(5, RW(29) + 112);
wr32(c, (RW(19) + 160), RW(3));
wr32(c, (RW(19) + 172), RW(0));
wr32(c, (RW(19) + 180), RW(2));
wr32(c, (RW(19) + 176), RW(0));
wr32(c, (RW(19) + 184), RW(2));
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(0));
SET64(31, 0x1462b8); wr32(c, (RW(29) + 120), RW(0)); JP_F_0014E980(c);
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x1462c8); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
SET64(4, (s32)rd32(c, (RW(16) + 484)));
wr32(c, (RW(29) + 96), RW(0));
SET32(20, RW(20) + 1);
wr32(c, (RW(29) + 100), RW(0));
SET32(18, RW(18) + 384);
SET32(4, RW(4) + RW(17));
wr32(c, (RW(29) + 104), RW(3));
wr32(c, (RW(29) + 108), RW(3));
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
wr8(c, (RW(4) + 0), (u8)RW(0));
wr128(c, (RW(4) + 16) & ~15u, &c->r[3]);
wr16(c, (RW(4) + 32), (u16)RW(0));
SET64(3, rd16(c, (RW(16) + 472)));
SET64(3, RSD(20) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 48); if (t) { POLL(); goto L_00146268; } }
L_00146310:;
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 464), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_00146340(Ctx *c) { /* func_00146340 */
ENTER(0x146340);
wr32(c, (RW(4) + 16), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 20), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(3)); return;
}

void JP_F_00146360(Ctx *c) { /* func_00146360 */
ENTER(0x146360);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 12)));
wr8(c, (RW(3) + 8), (u8)RW(5));
SET64(3, rd8(c, (RW(4) + 464)));
{ int t = RD(3) == RD(0); SET64(20, RD(4) + RD(0)); if (t) goto L_00146420; }
SET64(3, rd16(c, (RW(20) + 472)));
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00146420; }
SET64(16, RD(5) & 0xff);
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_001463A8:;
SET64(2, (s32)rd32(c, (RW(20) + 484)));
SET32(2, RW(2) + RW(18));
SET64(2, rd8(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_001463E8; }
{ int t = RD(16) != RD(0);  if (t) goto L_001463E8; }
SET64(2, (s32)rd32(c, (RW(20) + 480)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1463e0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
 goto L_00146408;
L_001463E8:;
SET64(2, (s32)rd32(c, (RW(20) + 480)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x146404); SET32(5, RW(0) + 1); rt_call(c, t); }
L_00146408:;
SET64(3, rd16(c, (RW(20) + 472)));
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 48);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_001463A8; } }
L_00146420:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00146440(Ctx *c) { /* func_00146440 */
ENTER(0x146440);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(0) + (s64)1);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, 0x146470); SET64(16, RD(0) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET64(16, RD(0) + (s64)1); goto L_00146490; }
{ int t = RD(2) == RD(0);  if (t) goto L_0014648C; }
 goto L_00146490;
L_0014648C:;
SET64(16, RD(0) + (s64)1);
L_00146490:;
if (RD(16) != RD(0)) { SET64(4, (s32)rd32(c, (RW(20) + 12))); goto L_001464A0; }
SET64(19, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(20) + 12)));
L_001464A0:;
SET64(31, 0x1464a8); SET64(16, RD(0) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET64(16, RD(0) + (s64)1); goto L_001464C8; }
{ int t = RD(2) == RD(0);  if (t) goto L_001464C4; }
 goto L_001464C8;
L_001464C4:;
SET64(16, RD(0) + (s64)1);
L_001464C8:;
if (RD(16) != RD(0)) { SET64(2, rd8(c, (RW(20) + 464))); goto L_001464D8; }
SET64(19, RD(0) + RD(0));
SET64(2, rd8(c, (RW(20) + 464)));
L_001464D8:;
{ int t = RD(2) == RD(0); SET64(18, RD(0) + (s64)1); if (t) goto L_00146530; }
SET64(2, rd16(c, (RW(20) + 472)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00146530; }
SET64(16, RD(0) + RD(0));
L_001464F0:;
SET64(2, (s32)rd32(c, (RW(20) + 480)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14650c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_00146518; }
SET64(18, RD(0) + RD(0));
L_00146518:;
SET64(2, rd16(c, (RW(20) + 472)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_001464F0; } }
L_00146530:;
if (RD(18) != RD(0)) { SET64(2, RD(19) + RD(0)); goto L_00146540; }
SET64(19, RD(0) + RD(0));
SET64(2, RD(19) + RD(0));
L_00146540:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00146560(Ctx *c) { /* func_00146560 */
ENTER(0x146560);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x14657c); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_0014DCE0(c);
SET64(2, rd8(c, (RW(17) + 464)));
{ int t = RD(2) == RD(0);  if (t) goto L_001465C8; }
SET64(2, rd16(c, (RW(17) + 472)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001465C8; }
SET64(18, RD(0) + RD(0));
L_00146598:;
SET64(2, (s32)rd32(c, (RW(17) + 480)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1465b0);  rt_call(c, t); }
SET64(2, rd16(c, (RW(17) + 472)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 384); if (t) { POLL(); goto L_00146598; } }
L_001465C8:;
SET64(16, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x1465d4); SET64(4, RD(16) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_001465F8; }
SET32(2, RW(0) + 2);
SET64(31, 0x1465ec); wr32(c, (RW(16) + 0), RW(2)); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(16) + 12), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
L_001465F8:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00146610(Ctx *c) { /* func_00146610 */
ENTER(0x146610);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x146634); SET64(16, RD(4) + RD(0)); JP_F_0014DDA0(c);
SET64(3, rd8(c, (RW(16) + 464)));
{ int t = RD(3) == RD(0);  if (t) goto L_00146710; }
SET64(4, rd16(c, (RW(16) + 472)));
{ int t = RSD(4) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00146680; }
SET64(17, RD(0) + RD(0));
L_00146650:;
SET64(2, (s32)rd32(c, (RW(16) + 480)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x146668); SET64(5, RD(19) + RD(0)); rt_call(c, t); }
SET64(4, rd16(c, (RW(16) + 472)));
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(4));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_00146650; } }
L_00146680:;
SET64(3, rd8(c, (RW(16) + 464)));
{ int t = RD(3) == RD(0);  if (t) goto L_00146710; }
{ int t = RSD(4) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00146710; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_0014669C:;
SET64(2, (s32)rd32(c, (RW(16) + 484)));
SET32(2, RW(2) + RW(18));
SET64(2, rd8(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_001466D8; }
SET64(2, (s32)rd32(c, (RW(16) + 480)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1466cc); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
 goto L_001466F8;
L_001466D8:;
SET64(2, (s32)rd32(c, (RW(16) + 480)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1466f4); SET32(5, RW(0) + 1); rt_call(c, t); }
L_001466F8:;
SET64(3, rd16(c, (RW(16) + 472)));
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 48);
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_0014669C; } }
L_00146710:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_00146740(Ctx *c) { /* func_00146740 */
ENTER(0x146740);
SET32(29, RW(29) + -128);
SET64(3, (s64)(s32)0x420000);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(3) + 3920));
c->f[22].u = RW(0);
c->f[23].u = c->f[22].u;
SET64(3, (s64)(s32)0x420000);
c->f[21].u = rd32(c, (RW(3) + 3920));
SET64(3, (s64)(s32)0x420000);
SET64(16, rd16(c, (RW(3) + -3008)));
SET64(4, RD(18) & 0xffff);
L_001467A0:;
SET32(3, RW(0) + -1);
SET32(4, RW(4) << 1);
SET32(4, RW(19) + RW(4));
SET64(5, (s16)rd16(c, (RW(4) + 0)));
{ int t = RD(5) == RD(3);  if (t) goto L_00146968; }
SET32(3, RW(0) + 255);
{ int t = RD(5) == RD(3);  if (t) goto L_00146968; }
SET32(3, RW(0) + 12);
{ int t = RD(5) == RD(3);  if (t) goto L_00146968; }
SET32(4, RW(0) + 1);
{ int t = RD(5) != RD(4);  if (t) goto L_00146800; }
c->fcc = F(22) < F(23);
{ int t = !c->fcc; c->f[21].f = fpu(F(20) + F(21)); if (t) goto L_001467F0; }
c->f[22].u = c->f[23].u;
L_001467F0:;
c->f[23].u = RW(0);
 goto L_00146950;
L_00146800:;
SET32(3, RW(0) + 21);
{ int t = RD(5) == RD(3);  if (t) goto L_00146950; }
{ int t = RD(5) == RD(0);  if (t) goto L_00146950; }
SET32(3, RW(0) + 22);
{ int t = RD(5) != RD(3);  if (t) goto L_00146830; }
SET32(3, RW(18) + 2);
SET64(18, RD(3) & 0xffff); goto L_00146950;
L_00146830:;
SET32(3, RW(0) + 25);
{ int t = RD(5) != RD(3);  if (t) goto L_00146848; }
SET32(3, RW(18) + 2);
SET64(18, RD(3) & 0xffff); goto L_00146950;
L_00146848:;
SET64(7, RD(4) & 0xffff);
SET64(5, RD(5) & 0xffff);
SET64(17, RD(0) + RD(0));
SET64(6, RD(16) & 0xffff);
SET64(4, (s64)(s32)0x420000);
SET32(4, RW(4) + -3008);
L_00146860:;
SET64(3, RD(6) & 0xffff);
SET64(2, RD(7) & 0xffff);
SET32(2, RW(3) + RW(2));
SET32(2, RSW(2) >> 1);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(3) << 2);
SET32(2, RW(4) + RW(2));
SET64(2, rd16(c, (RW(2) + 0)));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_00146898; }
SET32(2, RW(3) + 1);
SET64(7, RD(2) & 0xffff); goto L_001468A0;
L_00146898:;
SET64(6, RD(3) + RD(0));
L_001468A0:;
SET64(3, RD(7) & 0xffff);
SET64(2, RD(6) & 0xffff);
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00146860; } }
SET64(2, (s64)(s32)0x420000);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + -3008);
SET32(3, RW(2) + RW(3));
SET64(2, rd16(c, (RW(3) + 0)));
{ int t = RD(5) != RD(2);  if (t) goto L_001468D8; }
SET64(17, (s16)rd16(c, (RW(3) + 2)));
L_001468D8:;
SET64(31, 0x1468e0);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(3, RD(17) << 48);
SET64(3, RSD(3) >> 48);
SET32(5, RW(3) << 2);
c->f[1].u = rd32(c, (RW(4) + 0));
c->f[0].u = rd32(c, (RW(4) + 4));
wr32(c, (RW(29) + 120), c->f[1].u);
wr32(c, (RW(29) + 124), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(29) + 124)));
SET64(4, (s32)rd32(c, (RW(3) + 20)));
SET32(4, RW(4) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 24)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + RW(4));
SET64(3, rd16(c, (RW(3) + 36)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_00146930; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_00146948;
L_00146930:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_00146948:;
c->f[23].f = fpu(F(23) + F(0));
L_00146950:;
SET32(3, RW(18) + 1);
SET64(18, RD(3) & 0xffff);
SET64(3, RSD(18) < (s64)512);
if (RD(3) != RD(0)) { SET64(4, RD(18) & 0xffff); { POLL(); goto L_001467A0; } }
L_00146968:;
c->fcc = F(22) < F(23);
if (!c->fcc) { SET64(3, (s64)(s32)0x40000000); goto L_0014697C; }
c->f[22].u = c->f[23].u;
SET64(3, (s64)(s32)0x40000000);
L_0014697C:;
c->f[0].u = RW(3);
c->f[0].f = fpu(F(0) * F(22));
wr32(c, (RW(20) + 0), c->f[0].u);
wr32(c, (RW(20) + 4), c->f[21].u);
SET64(31, rd64(c, (RW(29) + 96)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_001469C0(Ctx *c) { /* func_001469C0 */
ENTER(0x1469c0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[1].u = rd32(c, (RW(4) + 436));
c->f[0].u = rd32(c, (RW(4) + 460));
c->fcc = F(0) < F(1);
{ int t = !c->fcc; SET64(17, RD(6) + RD(0)); if (t) goto L_001469FC; }
wr32(c, (RW(19) + 460), c->f[1].u);
L_001469FC:;
c->f[20].u = rd32(c, (RW(19) + 416));
SET64(16, RD(0) + RD(0));
L_00146A04:;
SET32(4, RW(16) << 1);
SET32(3, RW(0) + -1);
SET32(4, RW(18) + RW(4));
SET64(4, (s16)rd16(c, (RW(4) + 0)));
{ int t = RD(4) == RD(3);  if (t) goto L_00146B98; }
SET32(3, RW(0) + 255);
{ int t = RD(4) == RD(3);  if (t) goto L_00146B98; }
SET32(3, RW(0) + 12);
{ int t = RD(4) == RD(3);  if (t) goto L_00146B98; }
SET32(3, RW(0) + 1);
{ int t = RD(4) != RD(3);  if (t) goto L_00146A68; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x146a50); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(19) + 436));
c->f[0].u = rd32(c, (RW(19) + 460));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(19) + 460), c->f[0].u); goto L_00146B90;
L_00146A68:;
SET32(3, RW(0) + 21);
{ int t = RD(4) == RD(3);  if (t) goto L_00146B90; }
{ int t = RD(4) == RD(0);  if (t) goto L_00146B90; }
SET32(3, RW(0) + 22);
{ int t = RD(4) != RD(3);  if (t) goto L_00146AA0; }
SET32(16, RW(16) + 2);
SET32(3, RW(16) << 1);
SET32(3, RW(18) + RW(3));
SET64(17, (s16)rd16(c, (RW(3) + 0))); goto L_00146B90;
L_00146AA0:;
SET32(3, RW(0) + 25);
{ int t = RD(4) != RD(3);  if (t) goto L_00146B18; }
SET32(16, RW(16) + 2);
SET32(2, RW(16) << 1);
SET32(2, RW(18) + RW(2));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x146ac4); SET64(4, RD(19) + RD(0)); JP_F_00145B10(c);
SET64(3, RD(2) & 0xffff);
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_00146ADC; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_00146AF4;
L_00146ADC:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_00146AF4:;
SET64(3, (s64)(s32)0x40000000);
c->f[0].u = RW(3);
c->f[1].f = fpu_div(F(1), F(0));
c->f[0].u = rd32(c, (RW(19) + 416));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(19) + 416), c->f[0].u); goto L_00146B90;
L_00146B18:;
SET32(3, RW(0) + 19);
{ int t = RD(4) != RD(3);  if (t) goto L_00146B68; }
SET32(16, RW(16) + 2);
SET32(3, RW(16) << 1);
SET32(3, RW(18) + RW(3));
SET64(3, rd16(c, (RW(3) + 0)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_00146B48; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_00146B60;
L_00146B48:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_00146B60:;
wr32(c, (RW(19) + 416), c->f[0].u); goto L_00146B90;
L_00146B68:;
SET64(5, RD(4) & 0xffff);
SET64(4, RD(19) + RD(0));
SET64(31, 0x146b78); SET64(6, RD(17) + RD(0)); JP_F_00146F10(c);
c->f[1].u = rd32(c, (RW(19) + 432));
c->f[2].u = rd32(c, (RW(19) + 416));
c->f[0].f = fpu(F(0) + F(1));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(19) + 416), c->f[0].u);
L_00146B90:;
SET32(16, RW(16) + 1); { POLL(); goto L_00146A04; }
L_00146B98:;
SET64(3, (s64)(s32)0x40000000);
c->f[2].u = rd32(c, (RW(19) + 416));
c->f[1].u = RW(3);
c->f[0].u = rd32(c, (RW(19) + 456));
c->f[2].f = fpu(F(2) - F(20));
c->f[1].f = fpu(F(1) * F(2));
c->fcc = F(0) < F(1);
if (!c->fcc) { SET64(31, rd64(c, (RW(29) + 80))); goto L_00146BC4; }
wr32(c, (RW(19) + 456), c->f[1].u);
SET64(31, rd64(c, (RW(29) + 80)));
L_00146BC4:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00146BE0(Ctx *c) { /* func_00146BE0 */
ENTER(0x146be0);
c->f[3].u = rd32(c, (RW(4) + 420));
c->f[2].u = rd32(c, (RW(4) + 440));
c->f[1].u = rd32(c, (RW(4) + 436));
c->f[0].u = rd32(c, (RW(4) + 168));
c->f[2].f = fpu(F(3) + F(2));
c->f[1].f = fpu(F(1) + F(2));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; SET32(2, RW(0) + 1); if (t) goto L_00146C08; }
SET64(2, RD(0) + RD(0));
L_00146C08:;
 return;
}

void JP_F_00146C10(Ctx *c) { /* func_00146C10 */
ENTER(0x146c10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[1].u = rd32(c, (RW(4) + 416));
c->f[0].u = rd32(c, (RW(4) + 448));
c->f[20].u = rd32(c, (RW(4) + 164));
SET64(31, 0x146c34); c->f[21].f = fpu(F(1) + F(0)); JP_F_00146CA0(c);
c->f[1].f = fpu(F(21) + F(0));
SET64(3, (s64)(s32)0x40000000);
SET32(2, RW(0) + 1);
c->f[0].u = RW(3);
c->f[0].f = fpu_div(F(20), F(0));
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(31, rd64(c, (RW(29) + 16))); goto L_00146C68; }
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
L_00146C68:;
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 32); return;
}

void JP_F_00146C80(Ctx *c) { /* func_00146C80 */
ENTER(0x146c80);
wr32(c, (RW(4) + 416), RW(0));
c->f[1].u = rd32(c, (RW(4) + 420));
c->f[0].u = rd32(c, (RW(4) + 436));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(4) + 420), c->f[0].u); return;
}

void JP_F_00146CA0(Ctx *c) { /* func_00146CA0 */
ENTER(0x146ca0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(4) + 408)));
SET64(7, RD(2) & 0x1);
{ int t = RD(7) == RD(0);  if (t) goto L_00146CC8; }
SET64(6, (s64)(s32)0x420000);
SET32(6, RW(6) + 3264); goto L_00146CD0;
L_00146CC8:;
SET64(6, (s64)(s32)0x420000);
SET32(6, RW(6) + -3008);
L_00146CD0:;
SET64(4, RD(5) & 0xffff);
SET64(9, RD(0) + RD(0));
SET64(5, rd16(c, (RW(6) + 0)));
SET64(8, RD(0) + (s64)1);
SET64(3, RD(5) & 0xffff);
L_00146CE4:;
SET64(2, RD(8) & 0xffff);
SET32(2, RW(3) + RW(2));
SET32(2, RSW(2) >> 1);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(3) << 2);
SET32(2, RW(6) + RW(2));
SET64(2, rd16(c, (RW(2) + 0)));
SET64(1, RSD(2) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_00146D18; }
SET32(2, RW(3) + 1);
SET64(8, RD(2) & 0xffff); goto L_00146D20;
L_00146D18:;
SET64(5, RD(3) + RD(0));
L_00146D20:;
SET64(3, RD(8) & 0xffff);
SET64(2, RD(5) & 0xffff);
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, RD(5) & 0xffff); { POLL(); goto L_00146CE4; } }
SET32(2, RW(3) << 2);
SET32(3, RW(6) + RW(2));
SET64(2, rd16(c, (RW(3) + 0)));
if (RD(4) != RD(2)) { SET64(16, RD(9) << 48); goto L_00146D50; }
SET64(9, (s16)rd16(c, (RW(3) + 2)));
SET64(16, RD(9) << 48);
L_00146D50:;
SET64(2, RD(0) < RD(7));
{ int t = RD(2) == RD(0); SET64(16, RSD(16) >> 48); if (t) goto L_00146D70; }
SET64(2, (s64)(s32)0x420000);
SET64(2, (s16)rd16(c, (RW(2) + -3008)));
SET32(2, RW(16) + RW(2));
SET64(16, RD(2) << 48);
SET64(16, RSD(16) >> 48);
L_00146D70:;
SET64(31, 0x146d78);  JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
c->f[1].u = rd32(c, (RW(3) + 0));
SET64(2, RD(16) << 48);
c->f[0].u = rd32(c, (RW(3) + 4));
SET64(2, RSD(2) >> 48);
SET32(4, RW(2) << 2);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 40), c->f[1].u);
wr32(c, (RW(29) + 44), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(29) + 44)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 36)));
SET32(2, RSW(2) >> 1);
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
SET32(29, RW(29) + 48); return;
}

void JP_F_00146DE0(Ctx *c) { /* func_00146DE0 */
ENTER(0x146de0);
c->f[0].u = rd32(c, (RW(4) + 432));
c->f[0].f = fpu(F(12) + F(0)); return;
}

void JP_F_00146DF0(Ctx *c) { /* func_00146DF0 */
ENTER(0x146df0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[3].u = rd32(c, (RW(4) + 420));
SET64(25, (s32)rd32(c, (RW(5) + 16)));
c->f[2].u = rd32(c, (RW(4) + 440));
c->f[0].u = rd32(c, (RW(4) + 436));
c->f[1].u = rd32(c, (RW(4) + 416));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
c->f[2].f = fpu(F(3) + F(2));
c->f[21].f = fpu(F(0) + F(2));
c->f[0].u = rd32(c, (RW(4) + 448));
c->f[20].f = fpu(F(1) + F(0));
{ u32 t = RW(25); SET64(31, 0x146e58); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
c->f[0].u = (u32)fpu_cvtw(F(20));
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(18, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
SET64(17, (s32)c->f[0].u);
{ u32 t = RW(25); SET64(31, 0x146e74); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
c->f[0].f = fpu(F(21) - F(0));
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(16, (s32)c->f[0].u);
{ u32 t = RW(25); SET64(31, 0x146e90); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
SET64(2, (s32)c->f[0].u);
{ u32 t = RW(25); SET64(31, 0x146eac); SET32(22, RW(2) << 1); rt_call(c, t); }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, RD(21) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(8, RD(22) + RD(0));
SET64(9, (s32)c->f[0].u);
SET64(31, 0x146ed0); SET64(10, RD(19) + RD(0)); JP_F_00156990(c);
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x146ee0); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 128)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 112) & ~15u, &c->r[22]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_00146F10(Ctx *c) { /* func_00146F10 */
ENTER(0x146f10);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(4) + 408)));
SET64(7, RD(2) & 0x1);
{ int t = RD(7) == RD(0); SET64(17, RD(6) + RD(0)); if (t) goto L_00146F44; }
SET64(6, (s64)(s32)0x420000);
SET32(6, RW(6) + 3264); goto L_00146F4C;
L_00146F44:;
SET64(6, (s64)(s32)0x420000);
SET32(6, RW(6) + -3008);
L_00146F4C:;
SET64(4, RD(5) & 0xffff);
SET64(9, RD(0) + RD(0));
SET64(5, rd16(c, (RW(6) + 0)));
SET64(8, RD(0) + (s64)1);
SET64(3, RD(5) & 0xffff);
L_00146F60:;
SET64(2, RD(8) & 0xffff);
SET32(2, RW(3) + RW(2));
SET32(2, RSW(2) >> 1);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(3) << 2);
SET32(2, RW(6) + RW(2));
SET64(2, rd16(c, (RW(2) + 0)));
SET64(1, RSD(2) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_00146F98; }
SET32(2, RW(3) + 1);
SET64(8, RD(2) & 0xffff); goto L_00146FA0;
L_00146F98:;
SET64(5, RD(3) + RD(0));
L_00146FA0:;
SET64(3, RD(8) & 0xffff);
SET64(2, RD(5) & 0xffff);
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, RD(5) & 0xffff); { POLL(); goto L_00146F60; } }
SET32(2, RW(3) << 2);
SET32(3, RW(6) + RW(2));
SET64(2, rd16(c, (RW(3) + 0)));
if (RD(4) != RD(2)) { SET64(16, RD(9) << 48); goto L_00146FD0; }
SET64(9, (s16)rd16(c, (RW(3) + 2)));
SET64(16, RD(9) << 48);
L_00146FD0:;
SET64(2, RD(0) < RD(7));
{ int t = RD(2) == RD(0); SET64(16, RSD(16) >> 48); if (t) goto L_00146FF0; }
SET64(2, (s64)(s32)0x420000);
SET64(2, (s16)rd16(c, (RW(2) + -3008)));
SET32(2, RW(16) + RW(2));
SET64(16, RD(2) << 48);
SET64(16, RSD(16) >> 48);
L_00146FF0:;
SET64(31, 0x146ff8);  JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
c->f[3].u = rd32(c, (RW(18) + 416));
c->f[2].u = rd32(c, (RW(18) + 448));
c->f[1].u = rd32(c, (RW(3) + 0));
SET64(2, RD(16) << 48);
c->f[0].u = rd32(c, (RW(3) + 4));
SET64(2, RSD(2) >> 48);
SET32(4, RW(2) << 2);
wr32(c, (RW(29) + 72), c->f[1].u);
wr32(c, (RW(29) + 76), c->f[0].u);
c->f[1].u = rd32(c, (RW(18) + 420));
SET64(2, (s32)rd32(c, (RW(29) + 76)));
c->f[0].u = rd32(c, (RW(18) + 440));
c->f[2].f = fpu(F(3) + F(2));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
c->f[1].f = fpu(F(1) + F(0));
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
c->f[0].u = (u32)fpu_cvtw(F(2));
SET32(16, RW(2) + RW(3));
SET64(2, rd16(c, (RW(16) + 28)));
SET64(9, rd16(c, (RW(16) + 38)));
SET64(4, rd16(c, (RW(16) + 36)));
SET32(2, RW(2) + 8);
SET64(6, (s32)c->f[0].u);
SET32(2, RW(16) + RW(2));
c->f[0].u = rd32(c, (RW(18) + 436));
SET32(5, RW(2) + 8);
{ int t = RSD(9) < 0; c->f[1].f = fpu(F(0) + F(1)); if (t) goto L_00147080; }
c->f[0].u = RW(9);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_0014709C;
L_00147080:;
SET32(3, RW(9) >> 1);
SET64(2, RD(9) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_0014709C:;
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(7, (s32)c->f[0].u);
if (RSD(4) < 0) { SET32(3, RW(4) >> 1); goto L_001470BC; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_001470D4;
L_001470BC:;
SET64(2, RD(4) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_001470D4:;
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(8, (s32)c->f[0].u);
if (RSD(9) < 0) { SET32(3, RW(9) >> 1); goto L_001470F0; }
c->f[0].u = RW(9);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_00147108;
L_001470F0:;
SET64(2, RD(9) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_00147108:;
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, RD(18) + RD(0));
SET64(9, (s32)c->f[0].u);
SET64(31, 0x14711c); SET64(10, RD(17) + RD(0)); JP_F_00156990(c);
SET64(2, rd16(c, (RW(16) + 36)));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(2, RSW(2) >> 1);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
c->f[0].u = RW(2);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[0].f = (f32)(s32)c->f[0].u;
SET32(29, RW(29) + 80); return;
}

void JP_F_00147150(Ctx *c) { /* func_00147150 */
ENTER(0x147150);
SET32(29, RW(29) + -176);
SET64(2, (s64)(s32)0x4d0000);
wr64(c, (RW(29) + 48), RD(31));
SET64(7, (s64)(s32)0x41000000);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(3, (s64)(s32)0x42100000);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(2, RW(2) + -3040);
wr8(c, (RW(4) + 408), (u8)RW(0));
SET64(16, RD(6) + RD(0));
wr32(c, (RW(4) + 416), RW(0));
SET64(6, (s64)(s32)0xbf800000);
wr32(c, (RW(4) + 420), RW(0));
SET64(17, RD(5) + RD(0));
wr32(c, (RW(4) + 440), RW(7));
wr32(c, (RW(4) + 444), RW(7));
wr32(c, (RW(4) + 448), RW(7));
wr32(c, (RW(4) + 452), RW(7));
wr32(c, (RW(4) + 432), RW(6));
wr32(c, (RW(4) + 436), RW(3));
wr32(c, (RW(4) + 456), RW(0));
wr32(c, (RW(4) + 460), RW(0));
wr32(c, (RW(29) + 160), RW(2));
SET64(31, 0x1471bc); SET32(4, RW(29) + 64); JP_F_00144EF0(c);
c->f[0].u = rd32(c, (RW(17) + 16));
SET32(4, RW(29) + 84);
SET32(5, RW(17) + 20);
SET64(31, 0x1471d0); wr32(c, (RW(29) + 80), c->f[0].u); JP_F_00144EF0(c);
SET32(4, RW(29) + 100);
SET64(31, 0x1471dc); SET32(5, RW(17) + 36); JP_F_00144EE0(c);
c->f[3].u = rd32(c, (RW(17) + 40));
SET64(2, (s16)rd16(c, (RW(17) + 38)));
c->f[2].u = rd32(c, (RW(17) + 44));
SET32(4, RW(29) + 136);
c->f[1].u = rd32(c, (RW(17) + 48));
SET32(5, RW(17) + 72);
c->f[0].u = rd32(c, (RW(17) + 52));
wr16(c, (RW(29) + 102), (u16)RW(2));
wr32(c, (RW(29) + 104), c->f[3].u);
wr32(c, (RW(29) + 108), c->f[2].u);
c->f[3].u = rd32(c, (RW(17) + 56));
c->f[2].u = rd32(c, (RW(17) + 60));
wr32(c, (RW(29) + 112), c->f[1].u);
wr32(c, (RW(29) + 116), c->f[0].u);
c->f[1].u = rd32(c, (RW(17) + 64));
c->f[0].u = rd32(c, (RW(17) + 68));
wr32(c, (RW(29) + 120), c->f[3].u);
wr32(c, (RW(29) + 124), c->f[2].u);
wr32(c, (RW(29) + 128), c->f[1].u);
SET64(31, 0x147230); wr32(c, (RW(29) + 132), c->f[0].u); JP_F_00144EF0(c);
c->f[1].u = rd32(c, (RW(17) + 88));
SET64(4, RD(18) + RD(0));
c->f[0].u = rd32(c, (RW(17) + 92));
SET64(6, RD(16) + RD(0));
SET32(5, RW(29) + 64);
wr32(c, (RW(29) + 152), c->f[1].u);
SET64(31, 0x147250); wr32(c, (RW(29) + 156), c->f[0].u); JP_F_00156A70(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_00147270(Ctx *c) { /* func_00147270 */
ENTER(0x147270);
SET32(29, RW(29) + -48);
SET64(8, (s64)(s32)0x41000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s64)(s32)0xbf800000);
wr8(c, (RW(4) + 408), (u8)RW(0));
SET64(2, (s64)(s32)0x42100000);
wr32(c, (RW(4) + 416), RW(0));
c->f[3].u = rd32(c, (RW(6) + 12));
wr32(c, (RW(4) + 420), RW(0));
c->f[2].u = rd32(c, (RW(6) + 8));
wr32(c, (RW(4) + 440), RW(8));
c->f[1].u = rd32(c, (RW(6) + 4));
wr32(c, (RW(4) + 444), RW(8));
c->f[0].u = rd32(c, (RW(6) + 0));
wr32(c, (RW(4) + 448), RW(8));
wr32(c, (RW(4) + 452), RW(8));
wr32(c, (RW(4) + 432), RW(3));
SET32(6, RW(29) + 16);
wr32(c, (RW(4) + 436), RW(2));
wr32(c, (RW(4) + 456), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 460), RW(0));
wr32(c, (RW(29) + 44), RW(2));
wr32(c, (RW(29) + 16), c->f[0].u);
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 20), c->f[1].u);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 24), c->f[2].u);
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 28), c->f[3].u);
wr32(c, (RW(29) + 40), RW(0));
SET32(5, RW(29) + 32);
SET64(31, 0x1472f8); wr128(c, (RW(29) + 32) & ~15u, &c->r[2]); JP_F_00156A30(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00147310(Ctx *c) { /* func_00147310 */
ENTER(0x147310);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 476)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 476), RW(0)); goto L_00147340; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x14733c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 476), RW(0));
L_00147340:;
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 480)));
SET64(31, 0x147350); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(16) + 480), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 484)));
if (RD(3) == RD(0)) { wr32(c, (RW(16) + 484), RW(0)); goto L_0014736C; }
SET64(31, 0x147368); SET32(4, RW(3) + -16); JP_F_00100430(c);
wr32(c, (RW(16) + 484), RW(0));
L_0014736C:;
wr32(c, (RW(16) + 468), RW(0));
wr8(c, (RW(16) + 464), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_00147390(Ctx *c) { /* func_00147390 */
ENTER(0x147390);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001473C0; }
SET32(4, RW(16) + 488);
SET64(31, 0x1473c0); wr32(c, (RW(16) + 12), RW(4)); JP_F_00141C80(c);
L_001473C0:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1473cc); SET64(5, RD(0) + RD(0)); JP_F_00157040(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(8, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2512);
SET64(6, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 8), RW(2));
SET64(5, (s64)(s32)0x4d0000);
SET64(7, (s32)rd32(c, (RW(16) + 12)));
SET32(8, RW(8) + -2372);
SET32(6, RW(6) + -2464);
SET32(5, RW(5) + -2444);
SET32(4, RW(16) + 488);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(7) + 16), RW(8));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 216), RW(6));
wr32(c, (RW(16) + 220), RW(5));
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 20), RW(4));
wr8(c, (RW(16) + 408), (u8)RW(0));
wr32(c, (RW(16) + 416), RW(0));
wr32(c, (RW(16) + 420), RW(0));
wr32(c, (RW(16) + 424), RW(0));
wr32(c, (RW(16) + 428), RW(3));
wr32(c, (RW(16) + 456), RW(0));
wr32(c, (RW(16) + 460), RW(0));
wr8(c, (RW(16) + 464), (u8)RW(0));
wr32(c, (RW(16) + 468), RW(0));
wr32(c, (RW(16) + 476), RW(0));
wr32(c, (RW(16) + 480), RW(0));
wr32(c, (RW(16) + 484), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00147460(Ctx *c) { /* func_00147460 */
ENTER(0x147460);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr8(c, (RW(4) + 12), (u8)RW(6));
wr16(c, (RW(4) + 8), (u16)RW(5));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x147488); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(17, RD(2) << 48);
wr16(c, (RW(16) + 10), (u16)RW(2));
SET64(31, 0x147498); SET64(17, RSD(17) >> 48); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(5, RW(17) << 2);
c->f[1].u = rd32(c, (RW(3) + 0));
c->f[0].u = rd32(c, (RW(3) + 4));
wr32(c, (RW(29) + 56), c->f[1].u);
wr32(c, (RW(29) + 60), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(29) + 60)));
SET64(4, (s32)rd32(c, (RW(3) + 20)));
SET32(4, RW(4) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 24)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(5, RW(3) + RW(4));
SET64(3, rd16(c, (RW(5) + 36)));
SET32(3, RSW(3) >> 1);
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(16) + 0), c->f[0].u);
SET64(3, rd16(c, (RW(5) + 38)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_001474F8; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_00147510;
L_001474F8:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_00147510:;
wr32(c, (RW(16) + 4), c->f[0].u);
SET64(3, rd16(c, (RW(5) + 28)));
SET32(3, RW(3) + 8);
SET32(3, RW(5) + RW(3));
SET32(3, RW(3) + 8);
wr32(c, (RW(16) + 20), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00147540(Ctx *c) { /* func_00147540 */
ENTER(0x147540);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x147564); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_00147578; }
SET64(5, (s64)(s32)0x420000);
SET32(5, RW(5) + 3264); goto L_00147580;
L_00147578:;
SET64(5, (s64)(s32)0x420000);
SET32(5, RW(5) + -3008);
L_00147580:;
SET64(6, rd16(c, (RW(5) + 0)));
SET64(4, RD(17) & 0xffff);
SET64(8, RD(0) + RD(0));
SET64(7, RD(0) + (s64)1);
SET64(3, RD(6) & 0xffff);
L_00147594:;
SET64(2, RD(7) & 0xffff);
SET32(2, RW(3) + RW(2));
SET32(2, RSW(2) >> 1);
SET64(3, RD(2) & 0xffff);
SET32(2, RW(3) << 2);
SET32(2, RW(5) + RW(2));
SET64(2, rd16(c, (RW(2) + 0)));
SET64(1, RSD(2) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_001475C8; }
SET32(2, RW(3) + 1);
SET64(7, RD(2) & 0xffff); goto L_001475D0;
L_001475C8:;
SET64(6, RD(3) + RD(0));
L_001475D0:;
SET64(3, RD(7) & 0xffff);
SET64(2, RD(6) & 0xffff);
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, RD(6) & 0xffff); { POLL(); goto L_00147594; } }
SET32(2, RW(3) << 2);
SET32(3, RW(5) + RW(2));
SET64(2, rd16(c, (RW(3) + 0)));
if (RD(4) != RD(2)) { SET64(25, (s32)rd32(c, (RW(16) + 16))); goto L_00147600; }
SET64(8, (s16)rd16(c, (RW(3) + 2)));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
L_00147600:;
SET64(17, RD(8) << 48);
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x147614); SET64(17, RSD(17) >> 48); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(2, RD(17) + RD(0)); goto L_00147634; }
SET64(2, (s64)(s32)0x420000);
SET64(2, (s16)rd16(c, (RW(2) + -3008)));
SET32(2, RW(17) + RW(2));
SET64(17, RD(2) << 48);
SET64(17, RSD(17) >> 48);
SET64(2, RD(17) + RD(0));
L_00147634:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_00147650(Ctx *c) { /* func_00147650 */
ENTER(0x147650);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -488);
SET32(4, RW(4) + RW(25)); { JP_F_00146360(c); return; }
}

void JP_F_00147660(Ctx *c) { /* func_00147660 */
ENTER(0x147660);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -488);
SET32(4, RW(4) + RW(25)); { JP_F_00146440(c); return; }
}

void JP_F_00147670(Ctx *c) { /* func_00147670 */
ENTER(0x147670);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -488);
SET32(4, RW(4) + RW(25)); { JP_F_00146560(c); return; }
}

void JP_F_00147680(Ctx *c) { /* func_00147680 */
ENTER(0x147680);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -488);
SET32(4, RW(4) + RW(25)); { JP_F_0014DD40(c); return; }
}

void JP_F_00147690(Ctx *c) { /* func_00147690 */
ENTER(0x147690);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -488);
SET32(4, RW(4) + RW(25)); { JP_F_00147310(c); return; }
}

void JP_F_001476A0(Ctx *c) { /* func_001476A0 */
ENTER(0x1476a0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -488);
SET32(4, RW(4) + RW(25)); { JP_F_00142FB0(c); return; }
}

void JP_F_001476B0(Ctx *c) { /* func_001476B0 */
ENTER(0x1476b0);
SET32(4, RW(4) + -208); { JP_F_00142FB0(c); return; }
}

void JP_F_001476C0(Ctx *c) { /* func_001476C0 */
ENTER(0x1476c0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -448);
SET32(4, RW(4) + RW(25)); { JP_F_001454C0(c); return; }
}

void JP_F_001476D0(Ctx *c) { /* func_001476D0 */
ENTER(0x1476d0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -448);
SET32(4, RW(4) + RW(25)); { JP_F_00145510(c); return; }
}

void JP_F_001476E0(Ctx *c) { /* func_001476E0 */
ENTER(0x1476e0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -448);
SET32(4, RW(4) + RW(25)); { JP_F_0014DD40(c); return; }
}

void JP_F_001476F0(Ctx *c) { /* func_001476F0 */
ENTER(0x1476f0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -448);
SET32(4, RW(4) + RW(25)); { JP_F_00145530(c); return; }
}

void JP_F_00147700(Ctx *c) { /* func_00147700 */
ENTER(0x147700);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -448);
SET32(4, RW(4) + RW(25)); { JP_F_00145880(c); return; }
}

void JP_F_00147710(Ctx *c) { /* func_00147710 */
ENTER(0x147710);
SET32(4, RW(4) + -208); { JP_F_00145880(c); return; }
}

void JP_F_00147720(Ctx *c) { /* func_00147720 */
ENTER(0x147720);
SET32(4, RW(4) + -356); { JP_F_00145880(c); return; }
}

void JP_F_00147730(Ctx *c) { /* func_00147730 */
ENTER(0x147730);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x147758); SET32(4, RW(29) + 64); JP_F_002B0150(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x14776c); wr128(c, (RW(29) + 80) & ~15u, &c->r[2]); JP_F_002B0230(c);
SET64(3, (s64)(s32)0x3f800000);
SET64(4, (s64)(s32)0x40000000);
c->f[3].u = RW(3);
c->f[3].f = fpu(F(3) + F(0));
c->f[5].u = RW(4);
c->f[3].f = fpu(F(5) * F(3));
c->f[4].f = fpu_sqrt(F(3));
c->f[2].u = rd32(c, (RW(29) + 88));
c->f[1].u = rd32(c, (RW(29) + 84));
c->f[0].u = rd32(c, (RW(29) + 80));
c->f[3].f = fpu_div(F(2), F(4));
c->f[2].f = fpu_div(F(1), F(4));
c->f[1].f = fpu_div(F(0), F(4));
c->f[0].f = fpu_div(F(4), F(5));
wr32(c, (RW(18) + 0), c->f[1].u);
wr32(c, (RW(18) + 4), c->f[2].u);
wr32(c, (RW(18) + 8), c->f[3].u);
wr32(c, (RW(18) + 12), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001477E0(Ctx *c) { /* func_001477E0 */
ENTER(0x1477e0);
SET32(29, RW(29) + -96);
SET64(3, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 64), RD(31));
c->f[1].u = RW(3);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
SET64(16, RD(6) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
c->f[22].u = c->f[12].u;
c->fcc = F(22) < F(1);
wr32(c, (RW(29) + 4), c->f[21].u);
{ int t = c->fcc; wr32(c, (RW(29) + 0), c->f[20].u); if (t) goto L_00147840; }
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(18) + 4), RW(0));
wr32(c, (RW(18) + 8), RW(0));
wr32(c, (RW(18) + 12), c->f[1].u);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]); goto L_00147A38;
L_00147840:;
c->f[0].u = RW(0);
c->fcc = F(22) <= F(0);
if (!c->fcc) { c->f[1].u = rd32(c, (RW(16) + 12)); goto L_00147870; }
wr32(c, (RW(18) + 0), c->f[0].u);
wr32(c, (RW(18) + 4), c->f[0].u);
wr32(c, (RW(18) + 8), c->f[0].u);
wr32(c, (RW(18) + 12), c->f[1].u);
rd128(c, (RW(17) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]); goto L_00147A38;
L_00147870:;
c->f[0].u = rd32(c, (RW(17) + 12));
c->fcc = F(1) == F(0);
if (c->fcc) { c->f[1].u = rd32(c, (RW(16) + 0)); goto L_00147888; }
SET64(3, RD(0) + RD(0)); goto L_001478CC;
L_00147888:;
c->f[0].u = rd32(c, (RW(17) + 0));
c->fcc = F(1) == F(0);
if (c->fcc) { c->f[1].u = rd32(c, (RW(16) + 4)); goto L_001478A0; }
SET64(3, RD(0) + RD(0)); goto L_001478CC;
L_001478A0:;
c->f[0].u = rd32(c, (RW(17) + 4));
c->fcc = F(1) == F(0);
if (c->fcc) { c->f[1].u = rd32(c, (RW(16) + 8)); goto L_001478B8; }
SET64(3, RD(0) + RD(0)); goto L_001478CC;
L_001478B8:;
c->f[0].u = rd32(c, (RW(17) + 8));
c->fcc = F(1) == F(0);
if (c->fcc) { SET64(3, RD(0) + (s64)1); goto L_001478CC; }
SET64(3, RD(0) + RD(0));
L_001478CC:;
if (RD(3) == RD(0)) { SET64(3, (s64)(s32)0x3f800000); goto L_001478F4; }
wr32(c, (RW(18) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(18) + 4), RW(0));
wr32(c, (RW(18) + 8), RW(0));
wr32(c, (RW(18) + 12), RW(3));
rd128(c, (RW(17) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]); goto L_00147A38;
L_001478F4:;
wr32(c, (RW(29) + 80), RW(0));
c->f[21].u = RW(3);
wr32(c, (RW(29) + 92), RW(3));
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
c->f[1].u = rd32(c, (RW(17) + 4));
wr32(c, (RW(29) + 84), RW(0));
c->f[3].u = rd32(c, (RW(17) + 0));
wr32(c, (RW(29) + 88), RW(0));
c->f[5].u = rd32(c, (RW(17) + 8));
wr128(c, (RW(29) + 80) & ~15u, &c->r[3]);
c->f[7].u = rd32(c, (RW(17) + 12));
c->f[0].u = rd32(c, (RW(29) + 84));
c->f[2].u = rd32(c, (RW(29) + 80));
c->f[4].u = rd32(c, (RW(29) + 88));
c->facc = fpu(F(1) * F(0));
c->facc = fpu(c->facc + F(3) * F(2));
c->f[6].u = rd32(c, (RW(29) + 92));
c->facc = fpu(c->facc + F(5) * F(4));
c->f[8].u = RW(0);
c->f[12].f = fpu(c->facc + F(7) * F(6));
c->fcc = F(12) < F(8);
if (!c->fcc) { SET64(3, (s64)(s32)0x3f7f0000); goto L_0014795C; }
c->f[12].u = c->f[12].u ^ 0x80000000u;
c->f[21].u = c->f[21].u ^ 0x80000000u;
SET64(3, (s64)(s32)0x3f7f0000);
L_0014795C:;
SET64(3, RD(3) | 0xf972);
c->f[0].u = RW(3);
c->fcc = F(12) <= F(0);
if (!c->fcc) { SET64(3, (s64)(s32)0x3f800000); goto L_001479DC; }
SET64(31, 0x14797c);  JP_F_0011F880(c);
c->f[20].u = c->f[0].u;
SET64(31, 0x147988); c->f[12].u = c->f[20].u; JP_F_0011F6F0(c);
c->f[23].u = c->f[0].u;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu(F(0) - F(22));
SET64(31, 0x1479a4); c->f[12].f = fpu(F(0) * F(20)); JP_F_0011F6F0(c);
c->f[12].f = fpu(F(22) * F(20));
c->f[20].f = fpu_div(F(0), F(23));
SET64(31, 0x1479c0);  JP_F_0011F6F0(c);
c->f[0].f = fpu_div(F(0), F(23));
c->f[21].f = fpu(F(21) * F(0)); goto L_001479E8;
L_001479DC:;
c->f[0].u = RW(3);
c->f[21].f = fpu(F(21) * F(22));
c->f[20].f = fpu(F(0) - F(22));
L_001479E8:;
c->f[2].u = rd32(c, (RW(16) + 12));
c->f[3].u = rd32(c, (RW(17) + 12));
c->f[0].u = rd32(c, (RW(16) + 8));
c->facc = fpu(F(21) * F(2));
c->f[5].f = fpu(c->facc + F(20) * F(3));
c->facc = fpu(F(21) * F(0));
c->f[1].u = rd32(c, (RW(17) + 8));
c->f[2].u = rd32(c, (RW(16) + 4));
c->f[3].u = rd32(c, (RW(17) + 4));
c->f[4].f = fpu(c->facc + F(20) * F(1));
c->facc = fpu(F(21) * F(2));
c->f[0].u = rd32(c, (RW(16) + 0));
c->f[2].f = fpu(c->facc + F(20) * F(3));
c->f[1].u = rd32(c, (RW(17) + 0));
c->facc = fpu(F(21) * F(0));
c->f[0].f = fpu(c->facc + F(20) * F(1));
wr32(c, (RW(18) + 0), c->f[0].u);
wr32(c, (RW(18) + 4), c->f[2].u);
wr32(c, (RW(18) + 8), c->f[4].u);
wr32(c, (RW(18) + 12), c->f[5].u);
L_00147A38:;
SET64(31, rd64(c, (RW(29) + 64)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 96); return;
}

void JP_F_00147A60(Ctx *c) { /* func_00147A60 */
ENTER(0x147a60);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x147a78); SET32(4, RW(29) + 32); JP_F_002AF7E0(c);
SET64(31, 0x147a80); SET64(4, RD(16) + RD(0)); JP_F_002AF080(c);
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_00147AB0(Ctx *c) { /* func_00147AB0 */
ENTER(0x147ab0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(5) + RD(0));
c->f[21].u = c->f[12].u;
SET64(4, RD(16) + RD(0));
SET64(31, 0x147adc); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_002B0290(c);
c->f[20].u = c->f[0].u;
c->f[0].u = RW(0);
c->fcc = F(0) == F(20);
if (!c->fcc) { SET64(2, (s64)(s32)0x40490000); goto L_00147B0C; }
wr32(c, (RW(17) + 0), c->f[0].u);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 4), c->f[0].u);
wr32(c, (RW(17) + 8), c->f[0].u);
wr32(c, (RW(17) + 12), RW(3)); goto L_00147BA4;
L_00147B0C:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(21), F(0));
SET64(31, 0x147b2c);  JP_F_0011F550(c);
SET64(3, (s64)(s32)0x40490000);
SET64(2, (s64)(s32)0x3f000000);
SET64(3, RD(3) | 0xfdb);
c->f[2].u = RW(0);
c->f[3].u = RW(3);
c->facc = fpu(F(2) + F(21));
c->f[1].u = RW(2);
c->f[0].f = fpu(c->facc - F(3) * F(0));
c->f[21].f = fpu(F(1) * F(0));
SET64(31, 0x147b60); c->f[12].u = c->f[21].u; JP_F_0011F6F0(c);
c->f[20].f = fpu_div(F(0), F(20));
SET64(31, 0x147b7c); c->f[12].u = c->f[21].u; JP_F_0011F450(c);
c->f[1].u = rd32(c, (RW(16) + 0));
c->f[2].u = rd32(c, (RW(16) + 4));
c->f[3].u = rd32(c, (RW(16) + 8));
c->f[1].f = fpu(F(20) * F(1));
c->f[2].f = fpu(F(20) * F(2));
wr32(c, (RW(17) + 0), c->f[1].u);
c->f[3].f = fpu(F(20) * F(3));
wr32(c, (RW(17) + 4), c->f[2].u);
wr32(c, (RW(17) + 8), c->f[3].u);
wr32(c, (RW(17) + 12), c->f[0].u);
L_00147BA4:;
SET64(31, rd64(c, (RW(29) + 48)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_00147BC0(Ctx *c) { /* func_00147BC0 */
ENTER(0x147bc0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET32(4, RW(29) + 96);
SET64(31, 0x147be4); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_00147D10(c);
c->f[1].u = rd32(c, (RW(29) + 96));
c->f[0].u = rd32(c, (RW(28) + -32684));
c->f[22].u = c->f[1].u ^ 0x80000000u;
c->fcc = F(0) == F(22);
c->f[21].u = RW(0);
{ int t = !c->fcc; c->f[2].u = rd32(c, (RW(29) + 104)); if (t) goto L_00147C10; }
c->f[0].u = rd32(c, (RW(28) + -32680));
c->fcc = F(0) == F(2);
{ int t = c->fcc;  if (t) goto L_00147CBC; }
L_00147C10:;
c->f[1].u = rd32(c, (RW(28) + -32684));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(28) + -32680));
SET32(4, RW(29) + 64);
c->f[15].u = RW(2);
c->f[12].f = fpu(F(22) - F(1));
c->f[14].u = RW(0);
SET64(31, 0x147c34); c->f[13].f = fpu(F(2) - F(0)); JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x147c40); SET32(4, RW(29) + 80); JP_F_0013E7B0(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(29) + 48);
c->f[13].u = RW(2);
c->f[12].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
c->f[15].u = RW(2);
SET64(31, 0x147c60); c->f[14].u = c->f[12].u; JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x147c6c); SET32(4, RW(29) + 80); JP_F_0013E790(c);
wr32(c, (RW(29) + 124), c->f[0].u);
SET32(4, RW(29) + 124);
SET32(5, RW(28) + -32672);
SET64(31, 0x147c80); SET32(6, RW(28) + -32676); JP_F_0013E750(c);
wr32(c, (RW(29) + 124), c->f[0].u);
SET64(31, 0x147c8c); c->f[12].u = c->f[0].u; JP_F_0011F880(c);
c->f[20].u = c->f[0].u;
SET64(31, 0x147c98); c->f[12].u = c->f[20].u; JP_F_00121728(c);
SET64(31, 0x147ca0); SET64(4, RD(2) + RD(0)); JP_F_0011EE20(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00147CBC; }
c->f[0].u = rd32(c, (RW(28) + -32684));
c->fcc = F(22) < F(0);
if (c->fcc) { c->f[20].u = c->f[20].u ^ 0x80000000u; goto L_00147CB8; }
L_00147CB8:;
c->f[21].u = c->f[20].u;
L_00147CBC:;
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x40490000);
SET32(3, RW(3) + -3584);
SET64(2, RD(2) | 0xfdb);
wr32(c, (RW(16) + 4), RW(3));
c->f[0].u = RW(2);
SET64(25, (s32)rd32(c, (RW(16) + 4)));
c->f[12].f = fpu(F(0) + F(21));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x147ce8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 128); return;
}

void JP_F_00147D10(Ctx *c) { /* func_00147D10 */
ENTER(0x147d10);
SET32(29, RW(29) + -192);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 184), RW(2));
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 188), RW(2));
wr32(c, (RW(29) + 176), RW(0));
SET64(31, 0x147d3c); wr32(c, (RW(29) + 180), RW(0)); JP_F_0013ADA0(c);
SET64(31, 0x147d44); SET32(4, RW(29) + 32); JP_F_00147DD0(c);
SET64(31, 0x147d4c); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 112);
SET64(31, 0x147d58); SET32(5, RW(29) + 32); JP_F_0013ADA0(c);
SET32(4, RW(29) + 96);
SET32(5, RW(29) + 176);
SET64(31, 0x147d68); SET32(6, RW(29) + 112); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[4]);
SET64(3, (s64)(s32)0x3f800000);
wr128(c, (RW(29) + 176) & ~15u, &c->r[4]);
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 12), RW(3));
rd128(c, (RW(29) + 176) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 192); return;
}

void JP_F_00147DA0(Ctx *c) { /* func_00147DA0 */
ENTER(0x147da0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 12), RW(2));
wr32(c, (RW(29) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(29) + 4), RW(0));
wr32(c, (RW(29) + 8), RW(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]);
SET32(29, RW(29) + 16); return;
}

void JP_F_00147DD0(Ctx *c) { /* func_00147DD0 */
ENTER(0x147dd0);
SET32(2, RW(4) + 48); return;
}

void JP_F_00147DE0(Ctx *c) { /* func_00147DE0 */
ENTER(0x147de0);
SET32(29, RW(29) + -352);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[17]);
SET64(18, RD(7) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x147e0c); SET64(16, RD(5) + RD(0)); JP_F_002AF080(c);
c->f[2].u = rd32(c, (RW(19) + 8));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(16) + 8));
SET32(4, RW(29) + 336);
c->f[3].u = rd32(c, (RW(19) + 4));
c->f[1].u = rd32(c, (RW(19) + 0));
c->f[4].f = fpu(F(2) - F(0));
c->f[2].u = rd32(c, (RW(16) + 4));
c->f[0].u = rd32(c, (RW(16) + 0));
c->f[2].f = fpu(F(3) - F(2));
wr32(c, (RW(29) + 348), RW(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 344), c->f[4].u);
wr32(c, (RW(29) + 340), c->f[2].u);
SET64(31, 0x147e4c); wr32(c, (RW(29) + 336), c->f[0].u); JP_F_002B0360(c);
c->f[0].u = rd32(c, (RW(29) + 336));
c->f[13].u = RW(0);
c->fcc = F(13) == F(0);
if (!c->fcc) { SET64(6, RD(18) + RD(0)); goto L_00147E78; }
c->f[0].u = rd32(c, (RW(29) + 344));
c->fcc = F(13) == F(0);
if (c->fcc) { c->f[0].u = rd32(c, (RW(29) + 340)); goto L_00147F20; }
SET64(6, RD(18) + RD(0));
L_00147E78:;
SET32(4, RW(29) + 160);
SET64(31, 0x147e84); SET32(5, RW(29) + 336); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 320), RW(0));
wr32(c, (RW(29) + 332), RW(2));
SET32(4, RW(29) + 320);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 324), RW(0));
wr32(c, (RW(29) + 328), RW(0));
SET64(31, 0x147ea8); wr128(c, (RW(29) + 320) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET32(4, RW(29) + 144);
SET32(5, RW(29) + 336);
SET64(31, 0x147eb8); SET32(6, RW(29) + 320); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 304), RW(0));
wr32(c, (RW(29) + 316), RW(2));
c->f[0].u = rd32(c, (RW(29) + 320));
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 308), RW(0));
wr32(c, (RW(29) + 312), RW(0));
wr32(c, (RW(17) + 0), c->f[0].u);
wr128(c, (RW(29) + 304) & ~15u, &c->r[2]);
c->f[3].u = rd32(c, (RW(29) + 324));
c->f[2].u = rd32(c, (RW(29) + 304));
c->f[1].u = rd32(c, (RW(29) + 308));
wr32(c, (RW(17) + 4), c->f[3].u);
c->f[3].u = rd32(c, (RW(29) + 328));
c->f[0].u = rd32(c, (RW(29) + 312));
wr32(c, (RW(17) + 8), c->f[3].u);
wr32(c, (RW(17) + 16), c->f[2].u);
wr32(c, (RW(17) + 20), c->f[1].u);
wr32(c, (RW(17) + 24), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 336));
wr32(c, (RW(17) + 32), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 340));
wr32(c, (RW(17) + 36), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 344));
wr32(c, (RW(17) + 40), c->f[0].u); goto L_00148024;
L_00147F20:;
c->fcc = F(0) <= F(13);
{ int t = c->fcc;  if (t) goto L_00147FA0; }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0xbf800000);
wr32(c, (RW(29) + 0), c->f[13].u);
SET32(4, RW(29) + 240);
wr32(c, (RW(29) + 8), RW(3));
c->f[12].u = RW(3);
wr32(c, (RW(29) + 16), c->f[13].u);
wr32(c, (RW(29) + 24), c->f[13].u);
wr32(c, (RW(29) + 32), c->f[13].u);
wr32(c, (RW(29) + 40), c->f[13].u);
wr32(c, (RW(29) + 48), c->f[13].u);
c->f[18].u = RW(2);
wr32(c, (RW(29) + 56), RW(3));
c->f[14].u = c->f[13].u;
c->f[15].u = c->f[13].u;
c->f[16].u = c->f[13].u;
c->f[17].u = c->f[13].u;
SET64(31, 0x147f7c); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 288) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 48) & ~15u, &c->r[2]); goto L_00148024;
L_00147FA0:;
c->fcc = F(0) < F(13);
if (!c->fcc) { SET64(4, RD(17) + RD(0)); goto L_0014801C; }
wr32(c, (RW(29) + 0), c->f[13].u);
SET64(2, (s64)(s32)0xbf800000);
wr32(c, (RW(29) + 8), RW(2));
SET32(4, RW(29) + 176);
wr32(c, (RW(29) + 16), c->f[13].u);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 24), c->f[13].u);
wr32(c, (RW(29) + 32), c->f[13].u);
wr32(c, (RW(29) + 40), c->f[13].u);
wr32(c, (RW(29) + 48), c->f[13].u);
c->f[12].u = RW(2);
wr32(c, (RW(29) + 56), RW(2));
c->f[14].u = c->f[13].u;
c->f[15].u = c->f[13].u;
c->f[16].u = c->f[13].u;
c->f[17].u = c->f[13].u;
c->f[18].u = c->f[12].u;
SET64(31, 0x147ff8); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 48) & ~15u, &c->r[2]); goto L_00148024;
L_0014801C:;
SET64(31, 0x148024);  JP_F_002AF080(c);
L_00148024:;
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(2, RD(17) + RD(0));
wr128(c, (RW(17) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 128)));
rd128(c, (RW(29) + 112) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[16]);
SET32(29, RW(29) + 352); return;
}

void JP_F_00148050(Ctx *c) { /* func_00148050 */
ENTER(0x148050);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
c->f[4].u = RW(0);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[3].u = RW(2);
wr32(c, (RW(29) + 48), RW(0));
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 56), RW(0));
wr32(c, (RW(29) + 60), RW(2));
c->f[2].u = rd32(c, (RW(5) + 20));
c->f[1].u = rd32(c, (RW(5) + 0));
c->f[5].u = rd32(c, (RW(5) + 40));
c->f[0].f = fpu(F(1) + F(2));
c->f[0].f = fpu(F(5) + F(0));
c->fcc = F(0) <= F(4);
{ int t = c->fcc; SET64(16, RD(4) + RD(0)); if (t) goto L_001480F8; }
c->f[0].f = fpu(F(3) + F(0));
SET64(2, (s64)(s32)0x3f000000);
c->f[2].f = fpu_sqrt(F(0));
c->f[1].u = RW(2);
c->f[0].f = fpu(F(1) * F(2));
c->f[2].f = fpu_div(F(1), F(2));
wr32(c, (RW(29) + 60), c->f[0].u);
c->f[1].u = rd32(c, (RW(5) + 24));
c->f[0].u = rd32(c, (RW(5) + 36));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) * F(0));
wr32(c, (RW(29) + 48), c->f[0].u);
c->f[1].u = rd32(c, (RW(5) + 32));
c->f[0].u = rd32(c, (RW(5) + 8));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) * F(0));
wr32(c, (RW(29) + 52), c->f[0].u);
c->f[1].u = rd32(c, (RW(5) + 4));
c->f[0].u = rd32(c, (RW(5) + 16));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(2) * F(0));
wr32(c, (RW(29) + 56), c->f[0].u); goto L_00148250;
L_001480F8:;
c->fcc = F(2) <= F(1);
SET64(4, (s64)(s32)0x3e0000);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s64)(s32)0x3e0000);
c->f[2].u = rd32(c, (RW(4) + 3344));
c->f[1].u = rd32(c, (RW(3) + 3348));
c->f[0].u = rd32(c, (RW(2) + 3352));
wr32(c, (RW(29) + 64), c->f[2].u);
SET64(4, RD(0) + RD(0));
wr32(c, (RW(29) + 68), c->f[1].u);
{ int t = c->fcc; wr32(c, (RW(29) + 72), c->f[0].u); if (t) goto L_0014812C; }
SET32(4, RW(0) + 1);
L_0014812C:;
SET32(3, RW(4) << 4);
SET32(2, RW(4) << 2);
SET32(3, RW(5) + RW(3));
SET32(2, RW(3) + RW(2));
c->f[0].u = rd32(c, (RW(2) + 0));
c->fcc = F(5) <= F(0);
if (c->fcc) { SET32(2, RW(4) << 4); goto L_00148154; }
SET32(4, RW(0) + 2);
SET32(2, RW(4) << 4);
L_00148154:;
SET32(10, RW(4) << 2);
SET32(3, RW(5) + RW(2));
SET32(7, RW(10) + RW(29));
SET32(2, RW(3) + RW(10));
SET64(4, (s32)rd32(c, (RW(7) + 64)));
c->f[3].u = rd32(c, (RW(2) + 0));
c->f[0].u = RW(0);
SET32(9, RW(4) << 2);
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x3f000000);
c->f[1].u = RW(2);
SET32(2, RW(4) << 4);
SET32(4, RW(9) + RW(29));
SET64(6, (s32)rd32(c, (RW(4) + 64)));
SET32(4, RW(5) + RW(2));
SET32(8, RW(6) << 2);
SET32(2, RW(4) + RW(9));
c->f[5].u = rd32(c, (RW(2) + 0));
SET32(2, RW(6) << 4);
SET32(5, RW(5) + RW(2));
SET32(2, RW(5) + RW(8));
c->f[4].u = rd32(c, (RW(2) + 0));
c->f[4].f = fpu(F(5) + F(4));
c->f[3].f = fpu(F(3) - F(4));
c->f[2].f = fpu(F(2) + F(3));
c->f[4].f = fpu_sqrt(F(2));
c->fcc = F(0) == F(4);
c->f[0].f = fpu(F(1) * F(4));
{ int t = c->fcc; wr32(c, (RW(7) + 80), c->f[0].u); if (t) goto L_001481DC; }
c->f[4].f = fpu_div(F(1), F(4));
L_001481DC:;
SET32(2, RW(4) + RW(8));
SET32(7, RW(4) + RW(10));
c->f[1].u = rd32(c, (RW(2) + 0));
SET32(6, RW(3) + RW(9));
SET32(4, RW(5) + RW(10));
SET32(3, RW(3) + RW(8));
SET32(2, RW(5) + RW(9));
c->f[0].u = rd32(c, (RW(2) + 0));
SET32(5, RW(9) + RW(29));
c->f[0].f = fpu(F(1) - F(0));
SET32(2, RW(8) + RW(29));
c->f[0].f = fpu(F(4) * F(0));
wr32(c, (RW(29) + 60), c->f[0].u);
c->f[3].u = rd32(c, (RW(7) + 0));
c->f[2].u = rd32(c, (RW(6) + 0));
c->f[1].u = rd32(c, (RW(4) + 0));
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[2].f = fpu(F(3) + F(2));
c->f[0].f = fpu(F(1) + F(0));
c->f[1].f = fpu(F(4) * F(2));
c->f[0].f = fpu(F(4) * F(0));
wr32(c, (RW(5) + 80), c->f[1].u);
wr32(c, (RW(2) + 80), c->f[0].u);
c->f[2].u = rd32(c, (RW(29) + 80));
c->f[1].u = rd32(c, (RW(29) + 84));
c->f[0].u = rd32(c, (RW(29) + 88));
wr32(c, (RW(29) + 48), c->f[2].u);
wr32(c, (RW(29) + 52), c->f[1].u);
wr32(c, (RW(29) + 56), c->f[0].u);
L_00148250:;
SET64(31, 0x148258); SET32(4, RW(29) + 48); JP_F_002AF8F0(c);
c->f[12].u = c->f[0].u;
SET32(4, RW(29) + 32);
SET64(31, 0x148268); SET32(5, RW(29) + 48); JP_F_002AFC30(c);
rd128(c, (RW(29) + 32) & ~15u, &c->r[4]);
SET64(3, (s64)(s32)0x3f800000);
wr128(c, (RW(29) + 48) & ~15u, &c->r[4]);
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 12), RW(3));
rd128(c, (RW(29) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001482A0(Ctx *c) { /* func_001482A0 */
ENTER(0x1482a0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, RD(4) + RD(0));
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 28), RW(2));
wr32(c, (RW(29) + 20), RW(0));
{ int t = RD(6) == RD(0); wr32(c, (RW(29) + 24), RW(0)); if (t) goto L_001482CC; }
SET64(7, RD(6) + RD(0)); goto L_001482D0;
L_001482CC:;
SET32(7, RW(29) + 16);
L_001482D0:;
SET64(4, RD(5) + RD(0));
SET32(6, RW(3) + 16);
SET64(5, RD(3) + RD(0));
SET64(31, 0x1482e4); SET64(8, RD(0) + RD(0)); JP_F_00149100(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001482F0(Ctx *c) { /* func_001482F0 */
ENTER(0x1482f0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 24), RW(0));
wr32(c, (RW(29) + 28), RW(2));
c->f[12].u = rd32(c, (RW(4) + 16));
{ int t = RD(6) == RD(0); SET64(3, RD(4) + RD(0)); if (t) goto L_00148320; }
SET64(4, RD(5) + RD(0)); goto L_00148328;
L_00148320:;
SET32(6, RW(29) + 16);
SET64(4, RD(5) + RD(0));
L_00148328:;
SET64(31, 0x148330); SET64(5, RD(3) + RD(0)); JP_F_00148B10(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00148340(Ctx *c) { /* func_00148340 */
ENTER(0x148340);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 24), RW(0));
wr32(c, (RW(29) + 28), RW(2));
c->f[0].u = rd32(c, (RW(4) + 16));
{ int t = RD(6) == RD(0); SET64(3, RD(4) + RD(0)); if (t) goto L_00148370; }
c->f[12].f = fpu(F(12) + F(0)); goto L_00148378;
L_00148370:;
SET32(6, RW(29) + 16);
c->f[12].f = fpu(F(12) + F(0));
L_00148378:;
SET64(4, RD(5) + RD(0));
SET64(31, 0x148384); SET64(5, RD(3) + RD(0)); JP_F_00149C10(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00148390(Ctx *c) { /* func_00148390 */
ENTER(0x148390);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 28), RW(2));
{ int t = RD(6) == RD(0); wr32(c, (RW(29) + 24), RW(0)); if (t) goto L_001483B8; }
 goto L_001483BC;
L_001483B8:;
SET32(6, RW(29) + 16);
L_001483BC:;
SET64(31, 0x1483c4);  JP_F_00149C10(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001483D0(Ctx *c) { /* func_001483D0 */
ENTER(0x1483d0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[1].u = rd32(c, (RW(5) + 0));
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[2].u = rd32(c, (RW(5) + 8));
c->f[23].u = c->f[1].u ^ 0x80000000u;
c->f[22].u = c->f[0].u ^ 0x80000000u;
c->f[1].u = rd32(c, (RW(6) + 8));
c->fcc = F(23) == F(22);
c->f[21].u = RW(0);
{ int t = !c->fcc; SET64(16, RD(4) + RD(0)); if (t) goto L_00148420; }
c->fcc = F(2) == F(1);
{ int t = c->fcc;  if (t) goto L_001484C0; }
L_00148420:;
c->f[13].f = fpu(F(1) - F(2));
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 64);
c->f[15].u = RW(2);
c->f[14].u = RW(0);
SET64(31, 0x14843c); c->f[12].f = fpu(F(22) - F(23)); JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x148448); SET32(4, RW(29) + 80); JP_F_0013E7B0(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(29) + 48);
c->f[13].u = RW(2);
c->f[12].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
c->f[15].u = RW(2);
SET64(31, 0x148468); c->f[14].u = c->f[12].u; JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x148474); SET32(4, RW(29) + 80); JP_F_0013E790(c);
wr32(c, (RW(29) + 108), c->f[0].u);
SET32(4, RW(29) + 108);
SET32(5, RW(28) + -32644);
SET64(31, 0x148488); SET32(6, RW(28) + -32648); JP_F_0013E750(c);
wr32(c, (RW(29) + 108), c->f[0].u);
SET64(31, 0x148494); c->f[12].u = c->f[0].u; JP_F_0011F880(c);
c->f[20].u = c->f[0].u;
SET64(31, 0x1484a0); c->f[12].u = c->f[20].u; JP_F_00121728(c);
SET64(31, 0x1484a8); SET64(4, RD(2) + RD(0)); JP_F_0011EE20(c);
{ int t = RD(2) != RD(0);  if (t) goto L_001484C0; }
c->fcc = F(22) < F(23);
if (c->fcc) { c->f[20].u = c->f[20].u ^ 0x80000000u; goto L_001484BC; }
L_001484BC:;
c->f[21].u = c->f[20].u;
L_001484C0:;
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x40490000);
SET32(3, RW(3) + -3584);
SET64(2, RD(2) | 0xfdb);
wr32(c, (RW(16) + 4), RW(3));
c->f[0].u = RW(2);
SET64(25, (s32)rd32(c, (RW(16) + 4)));
c->f[12].f = fpu(F(0) + F(21));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1484ec); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 112); return;
}

void JP_F_00148510(Ctx *c) { /* func_00148510 */
ENTER(0x148510);
SET32(29, RW(29) + -368);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(0) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[3].u = rd32(c, (RW(4) + 8));
c->f[2].u = rd32(c, (RW(5) + 8));
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = rd32(c, (RW(5) + 4));
c->f[3].f = fpu(F(3) - F(2));
c->f[2].f = fpu(F(1) - F(0));
c->f[1].u = rd32(c, (RW(4) + 0));
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[21].u = c->f[12].u;
SET32(4, RW(29) + 160);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 172), RW(2));
wr32(c, (RW(29) + 164), c->f[2].u);
wr32(c, (RW(29) + 168), c->f[3].u);
SET64(31, 0x14857c); wr32(c, (RW(29) + 160), c->f[0].u); JP_F_002B0290(c);
c->f[20].u = c->f[0].u;
c->fcc = F(21) < F(20);
if (!c->fcc) { SET64(2, RD(16) + RD(0)); goto L_00148688; }
SET32(4, RW(29) + 304);
SET64(31, 0x148598); SET64(16, RD(0) + (s64)1); JP_F_002AF080(c);
SET64(31, 0x1485a0); SET32(4, RW(29) + 304); JP_F_002AF080(c);
rd128(c, (RW(17) + 0) & ~15u, &c->r[8]);
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0xbf800000);
SET64(6, RD(18) + RD(0));
SET32(4, RW(29) + 304);
SET32(5, RW(29) + 144);
wr32(c, (RW(29) + 156), RW(2));
SET32(7, RW(29) + 272);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 276), RW(3));
wr128(c, (RW(29) + 352) & ~15u, &c->r[8]);
wr32(c, (RW(29) + 284), RW(2));
wr128(c, (RW(29) + 144) & ~15u, &c->r[8]);
wr32(c, (RW(29) + 272), RW(0));
SET64(31, 0x1485e8); wr32(c, (RW(29) + 280), RW(0)); JP_F_00147DE0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x1485f4); SET32(5, RW(29) + 304); JP_F_0013ADA0(c);
SET64(31, 0x1485fc); SET32(4, RW(29) + 80); JP_F_00147DD0(c);
SET64(31, 0x148604); SET64(4, RD(2) + RD(0)); JP_F_00147DA0(c);
SET32(4, RW(29) + 176);
SET64(31, 0x148610); SET32(5, RW(29) + 80); JP_F_0013ADA0(c);
c->f[0].f = fpu(F(20) - F(21));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 252), RW(2));
SET32(4, RW(29) + 256);
SET32(5, RW(29) + 240);
SET32(6, RW(29) + 176);
wr32(c, (RW(29) + 240), RW(0));
wr32(c, (RW(29) + 248), c->f[0].u);
SET64(31, 0x148638); wr32(c, (RW(29) + 244), RW(0)); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 288), RW(0));
wr32(c, (RW(29) + 300), RW(2));
c->f[3].u = rd32(c, (RW(17) + 0));
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 292), RW(0));
wr32(c, (RW(29) + 296), RW(0));
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 288));
c->f[1].u = rd32(c, (RW(29) + 292));
c->f[0].u = rd32(c, (RW(29) + 296));
c->f[2].f = fpu(F(3) + F(2));
wr32(c, (RW(17) + 0), c->f[2].u);
c->f[2].u = rd32(c, (RW(17) + 4));
c->f[1].f = fpu(F(2) + F(1));
wr32(c, (RW(17) + 4), c->f[1].u);
c->f[1].u = rd32(c, (RW(17) + 8));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(17) + 8), c->f[0].u);
SET64(2, RD(16) + RD(0));
L_00148688:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 368); return;
}

void JP_F_001486B0(Ctx *c) { /* func_001486B0 */
ENTER(0x1486b0);
SET32(29, RW(29) + -272);
SET64(2, (s64)(s32)0x3f800000);
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
wr32(c, (RW(29) + 12), c->f[23].u);
SET64(16, RD(0) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[3].u = rd32(c, (RW(4) + 8));
c->f[2].u = rd32(c, (RW(5) + 8));
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = rd32(c, (RW(5) + 4));
c->f[3].f = fpu(F(3) - F(2));
c->f[2].f = fpu(F(1) - F(0));
c->f[1].u = rd32(c, (RW(4) + 0));
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[20].u = c->f[12].u;
c->f[23].u = c->f[13].u;
SET32(4, RW(29) + 112);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 124), RW(2));
wr32(c, (RW(29) + 116), c->f[2].u);
wr32(c, (RW(29) + 120), c->f[3].u);
SET64(31, 0x148738); wr32(c, (RW(29) + 112), c->f[0].u); JP_F_002B0290(c);
c->f[1].f = fpu(F(20) + F(23));
c->fcc = F(0) < F(1);
if (!c->fcc) { SET64(2, RD(16) + RD(0)); goto L_00148894; }
c->f[1].u = rd32(c, (RW(19) + 8));
SET64(2, (s64)(s32)0x3f000000);
c->f[0].u = rd32(c, (RW(20) + 8));
SET64(3, (s64)(s32)0x3f800000);
c->f[3].u = rd32(c, (RW(19) + 4));
SET32(4, RW(29) + 240);
c->f[2].u = rd32(c, (RW(20) + 4));
SET32(5, RW(29) + 224);
c->f[4].f = fpu(F(1) - F(0));
c->f[1].u = rd32(c, (RW(19) + 0));
c->f[0].u = rd32(c, (RW(20) + 0));
c->f[2].f = fpu(F(3) - F(2));
wr32(c, (RW(29) + 236), RW(3));
c->f[0].f = fpu(F(1) - F(0));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 232), c->f[4].u);
wr32(c, (RW(29) + 228), c->f[2].u);
SET64(31, 0x148794); wr32(c, (RW(29) + 224), c->f[0].u); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 256), RW(0));
wr32(c, (RW(29) + 268), RW(2));
c->f[5].u = rd32(c, (RW(20) + 8));
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
c->f[3].u = rd32(c, (RW(20) + 4));
wr32(c, (RW(29) + 260), RW(0));
c->f[1].u = rd32(c, (RW(20) + 0));
wr32(c, (RW(29) + 264), RW(0));
c->f[12].u = c->f[20].u;
wr128(c, (RW(29) + 256) & ~15u, &c->r[2]);
SET64(5, RD(18) + RD(0));
c->f[4].u = rd32(c, (RW(29) + 264));
SET32(4, RW(29) + 176);
c->f[2].u = rd32(c, (RW(29) + 260));
c->f[0].u = rd32(c, (RW(29) + 256));
c->f[20].f = fpu(F(5) + F(4));
c->f[21].f = fpu(F(3) + F(2));
SET64(31, 0x1487e4); c->f[22].f = fpu(F(1) + F(0)); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 192), RW(0));
wr32(c, (RW(29) + 204), RW(2));
SET64(5, RD(17) + RD(0));
wr32(c, (RW(29) + 220), RW(2));
c->f[12].u = c->f[23].u;
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET32(4, RW(29) + 128);
wr32(c, (RW(29) + 196), RW(0));
wr32(c, (RW(29) + 200), RW(0));
wr128(c, (RW(29) + 192) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 192));
c->f[1].u = rd32(c, (RW(29) + 196));
c->f[0].u = rd32(c, (RW(29) + 200));
c->f[2].f = fpu(F(22) + F(2));
c->f[1].f = fpu(F(21) + F(1));
c->f[0].f = fpu(F(20) + F(0));
wr32(c, (RW(29) + 208), c->f[2].u);
wr32(c, (RW(29) + 212), c->f[1].u);
wr32(c, (RW(29) + 216), c->f[0].u);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
SET64(31, 0x148840); wr128(c, (RW(20) + 0) & ~15u, &c->r[2]); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 156), RW(2));
SET64(16, RD(0) + (s64)1);
wr32(c, (RW(29) + 172), RW(2));
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 144));
c->f[1].u = rd32(c, (RW(29) + 148));
c->f[0].u = rd32(c, (RW(29) + 152));
c->f[2].f = fpu(F(22) + F(2));
c->f[1].f = fpu(F(21) + F(1));
c->f[0].f = fpu(F(20) + F(0));
wr32(c, (RW(29) + 160), c->f[2].u);
wr32(c, (RW(29) + 164), c->f[1].u);
wr32(c, (RW(29) + 168), c->f[0].u);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(19) + 0) & ~15u, &c->r[2]);
SET64(2, RD(16) + RD(0));
L_00148894:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 272); return;
}

void JP_F_001488D0(Ctx *c) { /* func_001488D0 */
ENTER(0x1488d0);
SET32(29, RW(29) + -352);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 16), c->f[24].u);
SET64(16, RD(0) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[3].u = rd32(c, (RW(4) + 8));
c->f[2].u = rd32(c, (RW(5) + 8));
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = rd32(c, (RW(5) + 4));
c->f[3].f = fpu(F(3) - F(2));
c->f[2].f = fpu(F(1) - F(0));
c->f[1].u = rd32(c, (RW(4) + 0));
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[20].f = fpu(F(12) + F(13));
SET32(4, RW(29) + 208);
wr32(c, (RW(29) + 220), RW(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 212), c->f[2].u);
wr32(c, (RW(29) + 216), c->f[3].u);
SET64(31, 0x148948); wr32(c, (RW(29) + 208), c->f[0].u); JP_F_002B0290(c);
c->fcc = F(0) < F(20);
if (!c->fcc) { SET64(2, RD(16) + RD(0)); goto L_00148AE0; }
c->f[24].f = fpu(F(20) - F(0));
c->f[1].u = rd32(c, (RW(17) + 0));
c->f[0].u = rd32(c, (RW(18) + 0));
c->f[2].u = rd32(c, (RW(17) + 8));
c->f[23].u = c->f[1].u ^ 0x80000000u;
c->f[22].u = c->f[0].u ^ 0x80000000u;
c->f[1].u = rd32(c, (RW(18) + 8));
c->fcc = F(23) == F(22);
c->f[21].u = RW(0);
{ int t = !c->fcc; SET64(16, RD(0) + (s64)1); if (t) goto L_0014898C; }
c->fcc = F(2) == F(1);
{ int t = c->fcc;  if (t) goto L_00148A2C; }
L_0014898C:;
c->f[13].f = fpu(F(1) - F(2));
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 176);
c->f[15].u = RW(2);
c->f[14].u = RW(0);
SET64(31, 0x1489a8); c->f[12].f = fpu(F(22) - F(23)); JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1489b4); SET32(4, RW(29) + 192); JP_F_0013E7B0(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(29) + 160);
c->f[13].u = RW(2);
c->f[12].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
c->f[15].u = RW(2);
SET64(31, 0x1489d4); c->f[14].u = c->f[12].u; JP_F_0013E810(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1489e0); SET32(4, RW(29) + 192); JP_F_0013E790(c);
wr32(c, (RW(29) + 348), c->f[0].u);
SET32(4, RW(29) + 348);
SET32(5, RW(28) + -32644);
SET64(31, 0x1489f4); SET32(6, RW(28) + -32648); JP_F_0013E750(c);
wr32(c, (RW(29) + 348), c->f[0].u);
SET64(31, 0x148a00); c->f[12].u = c->f[0].u; JP_F_0011F880(c);
c->f[20].u = c->f[0].u;
SET64(31, 0x148a0c); c->f[12].u = c->f[20].u; JP_F_00121728(c);
SET64(31, 0x148a14); SET64(4, RD(2) + RD(0)); JP_F_0011EE20(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00148A2C; }
c->fcc = F(22) < F(23);
if (c->fcc) { c->f[20].u = c->f[20].u ^ 0x80000000u; goto L_00148A28; }
L_00148A28:;
c->f[21].u = c->f[20].u;
L_00148A2C:;
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 336);
SET32(2, RW(2) + -3584);
wr32(c, (RW(29) + 340), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x148a4c); c->f[12].u = c->f[21].u; rt_call(c, t); }
SET64(31, 0x148a54); SET32(4, RW(29) + 96); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x148a60); SET32(5, RW(29) + 336); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x148a6c); SET32(4, RW(29) + 224); JP_F_0013ADA0(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 304);
wr32(c, (RW(29) + 300), RW(2));
SET32(5, RW(29) + 288);
SET32(6, RW(29) + 224);
wr32(c, (RW(29) + 288), RW(0));
wr32(c, (RW(29) + 296), c->f[24].u);
SET64(31, 0x148a90); wr32(c, (RW(29) + 292), RW(0)); JP_F_002AFDD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 320), RW(0));
wr32(c, (RW(29) + 332), RW(2));
c->f[3].u = rd32(c, (RW(17) + 0));
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 324), RW(0));
wr32(c, (RW(29) + 328), RW(0));
wr128(c, (RW(29) + 320) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 320));
c->f[1].u = rd32(c, (RW(29) + 324));
c->f[0].u = rd32(c, (RW(29) + 328));
c->f[2].f = fpu(F(3) + F(2));
wr32(c, (RW(17) + 0), c->f[2].u);
c->f[2].u = rd32(c, (RW(17) + 4));
c->f[1].f = fpu(F(2) + F(1));
wr32(c, (RW(17) + 4), c->f[1].u);
c->f[1].u = rd32(c, (RW(17) + 8));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(17) + 8), c->f[0].u);
SET64(2, RD(16) + RD(0));
L_00148AE0:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 352); return;
}

void JP_F_00148B10(Ctx *c) { /* func_00148B10 */
ENTER(0x148b10);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(6) + RD(0));
SET64(31, 0x148b3c); c->f[20].u = c->f[12].u; JP_F_00148B90(c);
if (RD(2) == RD(0)) { SET64(5, RD(18) + RD(0)); goto L_00148B4C; }
SET32(2, RW(0) + 1); goto L_00148B68;
L_00148B4C:;
SET64(31, 0x148b54); SET32(4, RW(29) + 80); JP_F_001496A0(c);
SET64(5, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
c->f[12].u = c->f[20].u;
SET64(31, 0x148b68); SET32(4, RW(29) + 80); JP_F_00148B90(c);
L_00148B68:;
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_00148B90(Ctx *c) { /* func_00148B90 */
ENTER(0x148b90);
SET32(29, RW(29) + -528);
wr64(c, (RW(29) + 160), RD(31));
wr128(c, (RW(29) + 144) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET32(4, RW(20) + 48);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(5, RD(20) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 188), RW(6));
c->f[21].u = c->f[12].u;
SET64(31, 0x148be0); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_002B0230(c);
c->f[20].u = c->f[0].u;
SET64(4, RD(19) + RD(0));
SET64(31, 0x148bf0); SET32(5, RW(20) + 48); JP_F_002B0230(c);
c->f[1].u = c->f[20].u ^ 0x80000000u;
c->f[20].f = fpu(F(1) + F(0));
c->f[0].u = c->f[20].u & 0x7FFFFFFFu;
c->fcc = F(0) < F(21);
{ int t = !c->fcc; SET64(2, RD(0) + (s64)1); if (t) goto L_00148C0C; }
SET64(2, RD(0) + RD(0));
L_00148C0C:;
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x3f800000); goto L_00148C1C; }
SET64(2, RD(0) + RD(0)); goto L_001490C0;
L_00148C1C:;
wr32(c, (RW(29) + 464), RW(0));
wr32(c, (RW(29) + 468), RW(0));
SET64(30, RD(0) + RD(0));
wr32(c, (RW(29) + 472), RW(0));
SET64(18, RD(0) + RD(0));
wr32(c, (RW(29) + 476), RW(2));
wr32(c, (RW(29) + 480), RW(0));
wr32(c, (RW(29) + 484), RW(0));
wr32(c, (RW(29) + 488), RW(0));
wr32(c, (RW(29) + 492), RW(2));
wr32(c, (RW(29) + 508), RW(2));
wr32(c, (RW(29) + 496), RW(0));
wr32(c, (RW(29) + 500), RW(0));
wr32(c, (RW(29) + 504), RW(0));
SET64(17, RD(18) & 0xffff);
L_00148C58:;
SET32(2, RW(0) + 3);
SET32(3, RW(17) + 1);
SET32(21, RW(17) << 4);
div_s(c, 0, RSW(3), RSW(2));
SET32(16, RW(20) + RW(21));
c->f[4].u = rd32(c, (RW(16) + 8));
SET32(4, RW(29) + 192);
c->f[2].u = rd32(c, (RW(16) + 4));
SET32(6, RW(20) + 48);
c->f[0].u = rd32(c, (RW(16) + 0));
SET32(22, RW(16) + 8);
SET32(23, RW(16) + 4);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 428), RW(2));
SET32(2, RW(21) + RW(29));
SET32(5, RW(2) + 464);
SET64(2, c->hi.d[0]);
SET32(2, RW(2) << 4);
SET32(2, RW(20) + RW(2));
c->f[5].u = rd32(c, (RW(2) + 8));
c->f[3].u = rd32(c, (RW(2) + 4));
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[4].f = fpu(F(5) - F(4));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 424), c->f[4].u);
wr32(c, (RW(29) + 420), c->f[2].u);
wr32(c, (RW(29) + 416), c->f[0].u);
rd128(c, (RW(29) + 416) & ~15u, &c->r[2]);
SET64(31, 0x148cd4); wr128(c, (RW(5) + 0) & ~15u, &c->r[2]); JP_F_002B0150(c);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 448), RW(0));
SET32(4, RW(29) + 448);
wr32(c, (RW(29) + 452), RW(0));
SET32(5, RW(29) + 400);
wr32(c, (RW(29) + 456), RW(0));
wr32(c, (RW(29) + 460), RW(3));
wr128(c, (RW(29) + 448) & ~15u, &c->r[2]);
c->f[4].u = rd32(c, (RW(22) + 0));
c->f[5].u = rd32(c, (RW(19) + 8));
c->f[2].u = rd32(c, (RW(23) + 0));
c->f[3].u = rd32(c, (RW(19) + 4));
c->f[0].u = rd32(c, (RW(16) + 0));
c->f[1].u = rd32(c, (RW(19) + 0));
c->f[4].f = fpu(F(5) - F(4));
wr32(c, (RW(29) + 412), RW(3));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 408), c->f[4].u);
wr32(c, (RW(29) + 404), c->f[2].u);
SET64(31, 0x148d30); wr32(c, (RW(29) + 400), c->f[0].u); JP_F_002B0230(c);
c->f[1].u = RW(0);
c->fcc = F(0) < F(1);
{ int t = c->fcc;  if (t) goto L_00148D48; }
SET64(30, RD(0) + (s64)1);
L_00148D48:;
SET32(2, RW(21) + RW(29));
SET32(3, RW(2) + 464);
c->f[3].u = rd32(c, (RW(3) + 4));
SET64(2, (s64)(s32)0x38d10000);
c->f[2].u = rd32(c, (RW(3) + 0));
SET64(2, RD(2) | 0xb717);
c->f[1].u = rd32(c, (RW(3) + 8));
c->facc = fpu(F(3) * F(3));
c->facc = fpu(c->facc + F(2) * F(2));
c->f[0].u = RW(2);
c->f[1].f = fpu(c->facc + F(1) * F(1));
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_00148DE8; }
c->f[0].f = fpu_sqrt(F(1));
SET32(2, RW(17) << 2);
SET32(3, RW(2) + RW(29));
SET32(4, RW(29) + 368);
SET32(2, RW(17) << 4);
SET32(3, RW(3) + 512);
SET32(2, RW(2) + RW(29));
SET32(16, RW(2) + 464);
SET64(2, (s64)(s32)0x3f800000);
SET64(5, RD(16) + RD(0));
wr32(c, (RW(3) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[1].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x148dd8);  JP_F_002AFF20(c);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[2]); goto L_00148DF0;
L_00148DE8:;
SET64(2, RD(0) + RD(0)); goto L_001490C0;
L_00148DF0:;
SET32(2, RW(18) + 1);
SET64(18, RD(2) & 0xffff);
SET64(2, RSD(18) < (s64)3);
if (RD(2) != RD(0)) { SET64(17, RD(18) & 0xffff); { POLL(); goto L_00148C58; } }
SET64(2, RD(30) & 0xff);
if (RD(2) != RD(0)) { c->f[21].f = fpu(F(21) * F(21)); goto L_00148E8C; }
SET32(5, RW(20) + 48);
SET32(4, RW(29) + 320);
SET64(31, 0x148e20); c->f[12].u = c->f[20].u; JP_F_002AFF20(c);
rd128(c, (RW(29) + 320) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 336), RW(0));
c->f[5].u = rd32(c, (RW(19) + 8));
wr32(c, (RW(29) + 340), RW(0));
c->f[3].u = rd32(c, (RW(19) + 4));
wr32(c, (RW(29) + 344), RW(0));
c->f[1].u = rd32(c, (RW(19) + 0));
wr32(c, (RW(29) + 348), RW(2));
wr128(c, (RW(29) + 336) & ~15u, &c->r[3]);
c->f[4].u = rd32(c, (RW(29) + 344));
wr32(c, (RW(29) + 364), RW(2));
c->f[2].u = rd32(c, (RW(29) + 340));
SET64(3, (s32)rd32(c, (RW(29) + 188)));
c->f[0].u = rd32(c, (RW(29) + 336));
SET32(2, RW(0) + 1);
c->f[4].f = fpu(F(5) - F(4));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 360), c->f[4].u);
wr32(c, (RW(29) + 356), c->f[2].u);
wr32(c, (RW(29) + 352), c->f[0].u);
rd128(c, (RW(29) + 352) & ~15u, &c->r[4]);
wr128(c, (RW(3) + 0) & ~15u, &c->r[4]);
c->f[0].u = rd32(c, (RW(28) + -32660));
wr32(c, (RW(3) + 12), c->f[0].u); goto L_001490C0;
L_00148E8C:;
SET64(18, RD(0) + RD(0));
SET64(16, RD(18) & 0xffff);
L_00148E94:;
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(16) << 4);
SET32(4, RW(29) + 304);
SET32(6, RW(20) + RW(2));
c->f[3].u = rd32(c, (RW(19) + 8));
SET32(2, RW(2) + RW(29));
c->f[2].u = rd32(c, (RW(6) + 8));
SET32(17, RW(2) + 464);
c->f[1].u = rd32(c, (RW(19) + 4));
SET32(21, RW(6) + 8);
c->f[0].u = rd32(c, (RW(6) + 4));
SET32(22, RW(6) + 4);
c->f[3].f = fpu(F(3) - F(2));
SET64(5, RD(17) + RD(0));
c->f[2].f = fpu(F(1) - F(0));
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[1].u = rd32(c, (RW(19) + 0));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 316), RW(3));
wr32(c, (RW(29) + 308), c->f[2].u);
wr32(c, (RW(29) + 312), c->f[3].u);
SET64(31, 0x148ef0); wr32(c, (RW(29) + 304), c->f[0].u); JP_F_002B0230(c);
c->f[20].u = c->f[0].u;
c->f[0].u = RW(0);
c->fcc = F(20) < F(0);
if (c->fcc) { SET32(2, RW(18) + 1); goto L_0014901C; }
SET32(2, RW(16) << 2);
SET32(2, RW(2) + RW(29));
c->f[0].u = rd32(c, (RW(2) + 512));
c->fcc = F(20) <= F(0);
{ int t = !c->fcc;  if (t) goto L_00149018; }
SET32(4, RW(29) + 272);
SET64(5, RD(17) + RD(0));
SET64(31, 0x148f30); c->f[12].u = c->f[20].u; JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(16, RW(16) << 4);
wr32(c, (RW(29) + 300), RW(2));
c->f[8].u = rd32(c, (RW(19) + 8));
wr32(c, (RW(29) + 444), RW(2));
c->f[6].u = rd32(c, (RW(19) + 4));
wr32(c, (RW(29) + 268), RW(2));
c->f[4].u = rd32(c, (RW(19) + 0));
SET32(2, RW(20) + RW(16));
wr32(c, (RW(29) + 288), RW(0));
c->f[0].u = rd32(c, (RW(2) + 0));
wr32(c, (RW(29) + 292), RW(0));
wr32(c, (RW(29) + 296), RW(0));
c->f[2].u = rd32(c, (RW(21) + 0));
c->f[1].u = rd32(c, (RW(22) + 0));
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
c->f[7].u = rd32(c, (RW(29) + 296));
c->f[5].u = rd32(c, (RW(29) + 292));
c->f[3].u = rd32(c, (RW(29) + 288));
c->f[7].f = fpu(F(8) - F(7));
c->f[5].f = fpu(F(6) - F(5));
c->f[3].f = fpu(F(4) - F(3));
c->f[2].f = fpu(F(7) - F(2));
c->f[1].f = fpu(F(5) - F(1));
c->f[0].f = fpu(F(3) - F(0));
wr32(c, (RW(29) + 264), c->f[2].u);
wr32(c, (RW(29) + 260), c->f[1].u);
wr32(c, (RW(29) + 256), c->f[0].u);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 440), c->f[7].u);
wr32(c, (RW(29) + 436), c->f[5].u);
wr32(c, (RW(29) + 432), c->f[3].u);
wr128(c, (RW(29) + 432) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 436));
c->f[0].u = rd32(c, (RW(29) + 432));
c->f[1].u = rd32(c, (RW(29) + 440));
c->facc = fpu(F(2) * F(2));
c->facc = fpu(c->facc + F(0) * F(0));
c->f[0].f = fpu(c->facc + F(1) * F(1));
c->fcc = F(0) <= F(21);
{ int t = !c->fcc;  if (t) goto L_00149018; }
SET64(5, RD(17) + RD(0));
SET32(4, RW(29) + 208);
SET64(31, 0x148fec); c->f[12].u = c->f[20].u; JP_F_002AFF20(c);
SET32(6, RW(20) + RW(16));
SET32(4, RW(29) + 224);
SET64(31, 0x148ffc); SET32(5, RW(29) + 208); JP_F_002B0040(c);
rd128(c, (RW(29) + 224) & ~15u, &c->r[4]);
SET32(2, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(29) + 188)));
wr128(c, (RW(3) + 0) & ~15u, &c->r[4]);
c->f[0].u = rd32(c, (RW(28) + -32656));
wr32(c, (RW(3) + 12), c->f[0].u); goto L_001490C0;
L_00149018:;
SET32(2, RW(18) + 1);
L_0014901C:;
SET64(18, RD(2) & 0xffff);
SET64(2, RSD(18) < (s64)3);
if (RD(2) != RD(0)) { SET64(16, RD(18) & 0xffff); { POLL(); goto L_00148E94; } }
c->f[5].u = rd32(c, (RW(19) + 8));
SET64(6, RD(0) + RD(0));
c->f[4].u = rd32(c, (RW(19) + 4));
SET32(3, RW(0) + 1);
c->f[3].u = rd32(c, (RW(19) + 0));
SET64(4, RD(6) & 0xffff);
L_00149044:;
SET32(5, RW(4) << 4);
SET32(4, RW(20) + RW(5));
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = rd32(c, (RW(4) + 0));
c->f[2].u = rd32(c, (RW(4) + 8));
c->f[1].f = fpu(F(4) - F(1));
c->f[0].f = fpu(F(3) - F(0));
c->facc = fpu(F(1) * F(1));
c->f[2].f = fpu(F(5) - F(2));
c->facc = fpu(c->facc + F(0) * F(0));
c->f[0].f = fpu(c->facc + F(2) * F(2));
c->fcc = F(0) <= F(21);
{ int t = c->fcc; SET64(2, RD(3) + RD(0)); if (t) goto L_00149080; }
SET64(2, RD(0) + RD(0));
L_00149080:;
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET32(2, RW(6) + 1); goto L_001490AC; }
SET32(3, RW(20) + RW(5));
SET32(2, RW(0) + 1);
rd128(c, (RW(3) + 0) & ~15u, &c->r[4]);
SET64(3, (s32)rd32(c, (RW(29) + 188)));
wr128(c, (RW(3) + 0) & ~15u, &c->r[4]);
c->f[0].u = rd32(c, (RW(28) + -32652));
wr32(c, (RW(3) + 12), c->f[0].u); goto L_001490C0;
L_001490AC:;
SET64(6, RD(2) & 0xffff);
SET64(2, RSD(6) < (s64)3);
if (RD(2) != RD(0)) { SET64(4, RD(6) & 0xffff); { POLL(); goto L_00149044; } }
SET64(2, RD(0) + RD(0));
L_001490C0:;
SET64(31, rd64(c, (RW(29) + 160)));
c->f[21].u = rd32(c, (RW(29) + 4));
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

void JP_F_00149100(Ctx *c) { /* func_00149100 */
ENTER(0x149100);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
SET64(31, 0x149134); SET64(16, RD(8) + RD(0)); JP_F_00149190(c);
if (RD(2) == RD(0)) { SET64(5, RD(20) + RD(0)); goto L_00149144; }
SET32(2, RW(0) + 1); goto L_00149164;
L_00149144:;
SET64(31, 0x14914c); SET32(4, RW(29) + 96); JP_F_001496A0(c);
SET64(5, RD(19) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(8, RD(16) + RD(0));
SET64(31, 0x149164); SET32(4, RW(29) + 96); JP_F_00149190(c);
L_00149164:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_00149190(Ctx *c) { /* func_00149190 */
ENTER(0x149190);
SET32(29, RW(29) + -496);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 64), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(7) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 480), RW(0));
wr32(c, (RW(29) + 484), RW(0));
wr32(c, (RW(29) + 492), RW(2));
{ int t = RD(8) == RD(0); wr32(c, (RW(29) + 488), RW(0)); if (t) goto L_001491E0; }
rd128(c, (RW(8) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 480) & ~15u, &c->r[2]); goto L_0014921C;
L_001491E0:;
wr32(c, (RW(29) + 412), c->f[0].u);
c->f[2].u = rd32(c, (RW(6) + 8));
c->f[0].u = rd32(c, (RW(17) + 8));
c->f[3].u = rd32(c, (RW(6) + 4));
c->f[1].u = rd32(c, (RW(6) + 0));
c->f[0].f = fpu(F(2) - F(0));
wr32(c, (RW(29) + 408), c->f[0].u);
c->f[2].u = rd32(c, (RW(17) + 4));
c->f[0].u = rd32(c, (RW(17) + 0));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 404), c->f[2].u);
wr32(c, (RW(29) + 400), c->f[0].u);
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 480) & ~15u, &c->r[2]);
L_0014921C:;
c->f[8].u = rd32(c, (RW(18) + 52));
SET64(2, (s64)(s32)0xbf800000);
c->f[3].u = rd32(c, (RW(18) + 4));
SET32(4, RW(18) + 48);
c->f[7].u = rd32(c, (RW(18) + 48));
SET32(5, RW(29) + 480);
c->f[4].u = rd32(c, (RW(18) + 0));
c->facc = fpu(F(8) * F(3));
c->f[6].u = rd32(c, (RW(18) + 56));
c->f[5].u = rd32(c, (RW(18) + 8));
c->facc = fpu(c->facc + F(7) * F(4));
c->f[0].u = RW(2);
c->f[3].f = fpu(c->facc + F(6) * F(5));
c->f[21].f = fpu(F(0) * F(3));
c->f[0].u = rd32(c, (RW(17) + 4));
c->f[1].u = rd32(c, (RW(17) + 0));
c->f[2].u = rd32(c, (RW(17) + 8));
c->facc = fpu(F(0) * F(8));
c->facc = fpu(c->facc + F(1) * F(7));
SET64(31, 0x149270); c->f[20].f = fpu(c->facc + F(2) * F(6)); JP_F_002B0230(c);
c->f[1].f = fpu(F(20) + F(21));
c->f[1].u = c->f[1].u ^ 0x80000000u;
c->f[12].f = fpu_div(F(1), F(0));
c->f[0].u = RW(0);
c->fcc = F(12) < F(0);
if (c->fcc) { SET64(2, RD(0) + RD(0)); goto L_0014964C; }
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(12) <= F(0);
if (c->fcc) { SET32(4, RW(29) + 368); goto L_001492B8; }
SET64(2, RD(0) + RD(0));
 goto L_0014964C;
L_001492B8:;
SET64(31, 0x1492c0); SET32(5, RW(29) + 480); JP_F_002AFF20(c);
SET64(6, RD(17) + RD(0));
SET32(4, RW(29) + 384);
SET64(31, 0x1492d0); SET32(5, RW(29) + 368); JP_F_002B0040(c);
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 464), RW(0));
c->f[5].u = rd32(c, (RW(18) + 8));
wr32(c, (RW(29) + 468), RW(0));
c->f[4].u = rd32(c, (RW(18) + 4));
wr32(c, (RW(29) + 472), RW(0));
c->f[3].u = rd32(c, (RW(18) + 0));
wr32(c, (RW(29) + 476), RW(3));
SET32(4, RW(29) + 112);
wr128(c, (RW(29) + 464) & ~15u, &c->r[2]);
SET32(5, RW(29) + 320);
c->f[2].u = rd32(c, (RW(29) + 472));
wr32(c, (RW(29) + 300), RW(3));
c->f[1].u = rd32(c, (RW(29) + 468));
wr32(c, (RW(29) + 316), RW(3));
c->f[0].u = rd32(c, (RW(29) + 464));
SET32(6, RW(29) + 288);
c->f[2].f = fpu(F(2) - F(5));
c->f[1].f = fpu(F(1) - F(4));
c->f[0].f = fpu(F(0) - F(3));
wr32(c, (RW(29) + 296), c->f[2].u);
wr32(c, (RW(29) + 292), c->f[1].u);
wr32(c, (RW(29) + 288), c->f[0].u);
c->f[2].u = rd32(c, (RW(18) + 24));
c->f[1].u = rd32(c, (RW(18) + 20));
c->f[0].u = rd32(c, (RW(18) + 16));
c->f[2].f = fpu(F(2) - F(5));
wr32(c, (RW(29) + 332), RW(3));
wr32(c, (RW(29) + 320), RW(0));
c->f[1].f = fpu(F(1) - F(4));
wr32(c, (RW(29) + 324), RW(0));
wr32(c, (RW(29) + 328), RW(0));
c->f[0].f = fpu(F(0) - F(3));
wr32(c, (RW(29) + 312), c->f[2].u);
wr32(c, (RW(29) + 308), c->f[1].u);
wr32(c, (RW(29) + 304), c->f[0].u);
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET64(31, 0x149370); wr128(c, (RW(29) + 320) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 336), RW(0));
wr32(c, (RW(29) + 348), RW(2));
SET32(4, RW(29) + 352);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET32(5, RW(29) + 336);
wr32(c, (RW(29) + 340), RW(0));
SET32(6, RW(18) + 48);
wr32(c, (RW(29) + 344), RW(0));
SET64(31, 0x14939c); wr128(c, (RW(29) + 336) & ~15u, &c->r[2]); JP_F_002B00F0(c);
rd128(c, (RW(29) + 352) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 448), RW(0));
c->f[6].u = RW(2);
wr32(c, (RW(29) + 460), RW(2));
c->f[7].u = RW(0);
wr32(c, (RW(29) + 452), RW(0));
SET64(2, (s64)(s32)0xbc230000);
wr32(c, (RW(29) + 456), RW(0));
SET64(2, RD(2) | 0xd70a);
wr128(c, (RW(29) + 448) & ~15u, &c->r[3]);
c->f[1].u = RW(2);
c->f[0].u = rd32(c, (RW(29) + 448));
c->fcc = F(0) < F(1);
if (c->fcc) { SET64(2, RD(0) + RD(0)); goto L_0014964C; }
c->f[0].u = rd32(c, (RW(29) + 452));
c->fcc = F(0) < F(1);
{ int t = c->fcc;  if (t) goto L_001493FC; }
c->f[0].u = rd32(c, (RW(29) + 456));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[5].u = rd32(c, (RW(18) + 24)); goto L_00149408; }
L_001493FC:;
SET64(2, RD(0) + RD(0));
 goto L_0014964C;
L_00149408:;
SET32(4, RW(29) + 96);
c->f[2].u = rd32(c, (RW(29) + 472));
SET32(5, RW(29) + 240);
c->f[4].u = rd32(c, (RW(18) + 20));
SET32(6, RW(29) + 208);
c->f[1].u = rd32(c, (RW(29) + 468));
c->f[3].u = rd32(c, (RW(18) + 16));
c->f[0].u = rd32(c, (RW(29) + 464));
c->f[2].f = fpu(F(2) - F(5));
c->f[1].f = fpu(F(1) - F(4));
c->f[0].f = fpu(F(0) - F(3));
wr32(c, (RW(29) + 220), c->f[6].u);
wr32(c, (RW(29) + 216), c->f[2].u);
wr32(c, (RW(29) + 212), c->f[1].u);
wr32(c, (RW(29) + 208), c->f[0].u);
c->f[2].u = rd32(c, (RW(18) + 40));
c->f[1].u = rd32(c, (RW(18) + 36));
c->f[0].u = rd32(c, (RW(18) + 32));
c->f[2].f = fpu(F(2) - F(5));
c->f[1].f = fpu(F(1) - F(4));
c->f[0].f = fpu(F(0) - F(3));
wr32(c, (RW(29) + 236), c->f[6].u);
wr32(c, (RW(29) + 232), c->f[2].u);
wr32(c, (RW(29) + 228), c->f[1].u);
wr32(c, (RW(29) + 224), c->f[0].u);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 252), c->f[6].u);
wr32(c, (RW(29) + 240), c->f[7].u);
wr32(c, (RW(29) + 244), c->f[7].u);
wr32(c, (RW(29) + 248), c->f[7].u);
SET64(31, 0x149488); wr128(c, (RW(29) + 240) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 256), RW(0));
wr32(c, (RW(29) + 268), RW(2));
SET32(4, RW(29) + 272);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
SET32(5, RW(29) + 256);
wr32(c, (RW(29) + 260), RW(0));
SET32(6, RW(18) + 48);
wr32(c, (RW(29) + 264), RW(0));
SET64(31, 0x1494b4); wr128(c, (RW(29) + 256) & ~15u, &c->r[2]); JP_F_002B00F0(c);
rd128(c, (RW(29) + 272) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 432), RW(0));
c->f[6].u = RW(2);
wr32(c, (RW(29) + 444), RW(2));
c->f[7].u = RW(0);
wr32(c, (RW(29) + 436), RW(0));
SET64(2, (s64)(s32)0xbc230000);
wr32(c, (RW(29) + 440), RW(0));
SET64(2, RD(2) | 0xd70a);
wr128(c, (RW(29) + 432) & ~15u, &c->r[3]);
c->f[1].u = RW(2);
c->f[0].u = rd32(c, (RW(29) + 432));
c->fcc = F(0) < F(1);
if (c->fcc) { SET64(2, RD(0) + RD(0)); goto L_0014964C; }
c->f[0].u = rd32(c, (RW(29) + 436));
c->fcc = F(0) < F(1);
{ int t = c->fcc;  if (t) goto L_00149514; }
c->f[0].u = rd32(c, (RW(29) + 440));
c->fcc = F(0) < F(1);
if (!c->fcc) { c->f[5].u = rd32(c, (RW(18) + 40)); goto L_00149520; }
L_00149514:;
SET64(2, RD(0) + RD(0));
 goto L_0014964C;
L_00149520:;
SET32(4, RW(29) + 80);
c->f[2].u = rd32(c, (RW(29) + 472));
SET32(5, RW(29) + 160);
c->f[4].u = rd32(c, (RW(18) + 36));
SET32(6, RW(29) + 128);
c->f[1].u = rd32(c, (RW(29) + 468));
c->f[3].u = rd32(c, (RW(18) + 32));
c->f[0].u = rd32(c, (RW(29) + 464));
c->f[2].f = fpu(F(2) - F(5));
c->f[1].f = fpu(F(1) - F(4));
c->f[0].f = fpu(F(0) - F(3));
wr32(c, (RW(29) + 140), c->f[6].u);
wr32(c, (RW(29) + 136), c->f[2].u);
wr32(c, (RW(29) + 132), c->f[1].u);
wr32(c, (RW(29) + 128), c->f[0].u);
c->f[2].u = rd32(c, (RW(18) + 8));
c->f[1].u = rd32(c, (RW(18) + 4));
c->f[0].u = rd32(c, (RW(18) + 0));
c->f[2].f = fpu(F(2) - F(5));
c->f[1].f = fpu(F(1) - F(4));
c->f[0].f = fpu(F(0) - F(3));
wr32(c, (RW(29) + 156), c->f[6].u);
wr32(c, (RW(29) + 152), c->f[2].u);
wr32(c, (RW(29) + 148), c->f[1].u);
wr32(c, (RW(29) + 144), c->f[0].u);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 172), c->f[6].u);
wr32(c, (RW(29) + 160), c->f[7].u);
wr32(c, (RW(29) + 164), c->f[7].u);
wr32(c, (RW(29) + 168), c->f[7].u);
SET64(31, 0x1495a0); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 176), RW(0));
wr32(c, (RW(29) + 188), RW(2));
SET32(6, RW(18) + 48);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
SET32(4, RW(29) + 192);
wr32(c, (RW(29) + 180), RW(0));
SET32(5, RW(29) + 176);
wr32(c, (RW(29) + 184), RW(0));
SET64(31, 0x1495cc); wr128(c, (RW(29) + 176) & ~15u, &c->r[2]); JP_F_002B00F0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 416), RW(0));
wr32(c, (RW(29) + 428), RW(2));
SET64(2, (s64)(s32)0xbc230000);
wr32(c, (RW(29) + 420), RW(0));
SET64(2, RD(2) | 0xd70a);
wr32(c, (RW(29) + 424), RW(0));
c->f[1].u = RW(2);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 416) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 416));
c->fcc = F(0) < F(1);
if (c->fcc) { SET64(2, RD(0) + RD(0)); goto L_0014964C; }
c->f[0].u = rd32(c, (RW(29) + 420));
c->fcc = F(0) < F(1);
{ int t = c->fcc;  if (t) goto L_00149624; }
c->f[0].u = rd32(c, (RW(29) + 424));
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_00149630; }
L_00149624:;
SET64(2, RD(0) + RD(0));
 goto L_0014964C;
L_00149630:;
if (RD(16) == RD(0)) { SET32(2, RW(0) + 1); goto L_0014964C; }
rd128(c, (RW(29) + 464) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(28) + -32664));
wr32(c, (RW(16) + 12), c->f[0].u);
SET32(2, RW(0) + 1);
L_0014964C:;
SET64(31, rd64(c, (RW(29) + 64)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 496); return;
}

void JP_F_00149670(Ctx *c) { /* func_00149670 */
ENTER(0x149670);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
SET64(2, RD(4) + RD(0));
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]); return;
}

void JP_F_00149680(Ctx *c) { /* func_00149680 */
ENTER(0x149680);
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3)); return;
}

void JP_F_001496A0(Ctx *c) { /* func_001496A0 */
ENTER(0x1496a0);
SET32(29, RW(29) + -160);
SET64(2, (s64)(s32)0x3f000000);
wr64(c, (RW(29) + 80), RD(31));
SET64(3, (s64)(s32)0x3f800000);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
c->f[12].u = RW(2);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(4, RW(29) + 128);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[3].u = rd32(c, (RW(5) + 40));
c->f[2].u = rd32(c, (RW(5) + 24));
c->f[1].u = rd32(c, (RW(5) + 36));
c->f[0].u = rd32(c, (RW(5) + 20));
c->f[3].f = fpu(F(3) - F(2));
c->f[2].f = fpu(F(1) - F(0));
c->f[1].u = rd32(c, (RW(5) + 32));
c->f[0].u = rd32(c, (RW(5) + 16));
c->f[0].f = fpu(F(1) - F(0));
SET32(5, RW(29) + 112);
wr32(c, (RW(29) + 124), RW(3));
wr32(c, (RW(29) + 116), c->f[2].u);
wr32(c, (RW(29) + 120), c->f[3].u);
SET64(31, 0x149710); wr32(c, (RW(29) + 112), c->f[0].u); JP_F_002AFF20(c);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
c->f[7].u = rd32(c, (RW(19) + 24));
wr32(c, (RW(29) + 148), RW(0));
c->f[0].u = rd32(c, (RW(19) + 8));
wr32(c, (RW(29) + 152), RW(0));
c->f[6].u = rd32(c, (RW(19) + 20));
wr32(c, (RW(29) + 156), RW(3));
c->f[4].u = rd32(c, (RW(19) + 16));
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(19) + 4));
c->f[3].u = rd32(c, (RW(29) + 152));
SET32(17, RW(19) + 16);
c->f[5].u = rd32(c, (RW(29) + 148));
SET32(18, RW(19) + 32);
c->f[1].u = rd32(c, (RW(19) + 0));
SET64(16, RD(20) + RD(0));
c->f[7].f = fpu(F(7) + F(3));
wr32(c, (RW(29) + 108), RW(3));
c->f[0].f = fpu(F(0) - F(7));
c->f[0].f = fpu(F(7) - F(0));
c->f[5].f = fpu(F(6) + F(5));
wr32(c, (RW(29) + 104), c->f[0].u);
c->f[0].f = fpu(F(2) - F(5));
c->f[3].u = rd32(c, (RW(29) + 144));
c->f[0].f = fpu(F(5) - F(0));
c->f[3].f = fpu(F(4) + F(3));
wr32(c, (RW(29) + 100), c->f[0].u);
c->f[0].f = fpu(F(1) - F(3));
c->f[0].f = fpu(F(3) - F(0));
wr32(c, (RW(29) + 96), c->f[0].u);
L_00149790:;
SET64(31, 0x149798); SET64(4, RD(16) + RD(0)); JP_F_00149680(c);
SET32(16, RW(16) + 16);
SET32(4, RW(20) + 48);
SET64(2, RD(16) < RD(4));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00149790; } }
SET64(31, 0x1497b4);  JP_F_00149680(c);
SET64(5, RD(18) + RD(0));
SET64(31, 0x1497c0); SET64(4, RD(20) + RD(0)); JP_F_00149670(c);
SET64(5, RD(17) + RD(0));
SET64(31, 0x1497cc); SET32(4, RW(20) + 16); JP_F_00149670(c);
SET32(4, RW(20) + 32);
SET64(31, 0x1497d8); SET32(5, RW(29) + 96); JP_F_00149670(c);
SET64(31, 0x1497e0); SET64(4, RD(20) + RD(0)); JP_F_00149800(c);
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_00149800(Ctx *c) { /* func_00149800 */
ENTER(0x149800);
SET32(29, RW(29) + -160);
SET64(3, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(29) + 144);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(6, RW(29) + 128);
c->f[1].u = rd32(c, (RW(4) + 20));
wr32(c, (RW(29) + 108), RW(3));
c->f[0].u = rd32(c, (RW(4) + 4));
wr32(c, (RW(29) + 92), RW(3));
c->f[3].u = rd32(c, (RW(4) + 24));
SET64(16, RD(4) + RD(0));
c->f[2].u = rd32(c, (RW(4) + 8));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 100), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 16));
c->f[0].u = rd32(c, (RW(4) + 0));
c->f[2].f = fpu(F(3) - F(2));
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 148), RW(0));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 156), RW(3));
wr32(c, (RW(29) + 104), c->f[2].u);
wr32(c, (RW(29) + 96), c->f[0].u);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[0].u = rd32(c, (RW(4) + 20));
c->f[3].u = rd32(c, (RW(4) + 40));
c->f[2].u = rd32(c, (RW(4) + 24));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 84), c->f[0].u);
c->f[2].f = fpu(F(3) - F(2));
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[0].u = rd32(c, (RW(4) + 16));
wr32(c, (RW(29) + 88), c->f[2].u);
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 140), RW(3));
wr32(c, (RW(29) + 128), RW(0));
SET32(4, RW(29) + 48);
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
wr32(c, (RW(29) + 80), c->f[0].u);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
SET64(31, 0x1498bc); wr128(c, (RW(29) + 128) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 44), RW(2));
SET32(4, RW(29) + 32);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
SET64(31, 0x1498e0); wr128(c, (RW(29) + 32) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_00149900(Ctx *c) { /* func_00149900 */
ENTER(0x149900);
SET32(29, RW(29) + -320);
wr64(c, (RW(29) + 48), RD(31));
c->f[8].u = RW(0);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(6) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(6, (s64)(s32)0x3f800000);
rd128(c, (RW(4) + 0) & ~15u, &c->r[3]);
c->f[21].u = c->f[12].u;
rd128(c, (RW(4) + 16) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(5) + 0));
wr32(c, (RW(29) + 304), RW(0));
c->f[2].u = rd32(c, (RW(5) + 4));
wr32(c, (RW(29) + 308), RW(0));
c->f[5].u = rd32(c, (RW(5) + 8));
wr32(c, (RW(29) + 312), RW(0));
c->f[20].f = fpu(F(21) * F(21));
wr32(c, (RW(29) + 316), RW(6));
wr128(c, (RW(29) + 304) & ~15u, &c->r[3]);
c->f[1].u = rd32(c, (RW(29) + 304));
c->f[6].u = rd32(c, (RW(29) + 312));
c->f[4].u = rd32(c, (RW(29) + 308));
c->f[0].f = fpu(F(1) - F(0));
c->f[1].f = fpu(F(4) - F(2));
c->facc = fpu(F(1) * F(1));
c->f[5].f = fpu(F(6) - F(5));
c->facc = fpu(c->facc + F(0) * F(0));
c->f[0].f = fpu(c->facc + F(5) * F(5));
c->f[3].u = rd32(c, (RW(29) + 304));
c->fcc = F(0) <= F(20);
c->f[7].u = RW(6);
{ int t = !c->fcc; wr128(c, (RW(29) + 288) & ~15u, &c->r[2]); if (t) goto L_00149A64; }
c->f[2].u = rd32(c, (RW(29) + 288));
SET32(4, RW(29) + 80);
c->f[1].u = rd32(c, (RW(29) + 292));
c->f[0].u = rd32(c, (RW(29) + 296));
c->f[2].f = fpu(F(3) - F(2));
c->f[1].f = fpu(F(4) - F(1));
c->f[0].f = fpu(F(6) - F(0));
wr32(c, (RW(29) + 188), c->f[7].u);
wr32(c, (RW(29) + 176), c->f[2].u);
wr32(c, (RW(29) + 180), c->f[1].u);
wr32(c, (RW(29) + 184), c->f[0].u);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 92), c->f[7].u);
wr32(c, (RW(29) + 80), c->f[8].u);
wr32(c, (RW(29) + 84), c->f[8].u);
wr32(c, (RW(29) + 88), c->f[8].u);
SET64(31, 0x1499d8); wr128(c, (RW(29) + 80) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 192), RW(0));
wr32(c, (RW(29) + 204), RW(2));
SET32(4, RW(29) + 208);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
SET32(5, RW(29) + 192);
wr32(c, (RW(29) + 196), RW(0));
c->f[12].u = c->f[21].u;
wr32(c, (RW(29) + 200), RW(0));
SET64(31, 0x149a04); wr128(c, (RW(29) + 192) & ~15u, &c->r[2]); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x40000000);
SET32(4, RW(29) + 224);
c->f[12].u = RW(2);
SET64(31, 0x149a18); SET32(5, RW(29) + 208); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 240), RW(0));
wr32(c, (RW(29) + 252), RW(2));
c->f[4].u = rd32(c, (RW(29) + 304));
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
c->f[3].u = rd32(c, (RW(29) + 308));
wr32(c, (RW(29) + 244), RW(0));
c->f[1].u = rd32(c, (RW(29) + 312));
wr32(c, (RW(29) + 248), RW(0));
wr128(c, (RW(29) + 240) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 240));
c->f[2].u = rd32(c, (RW(29) + 244));
c->f[4].f = fpu(F(4) + F(0));
c->f[0].u = rd32(c, (RW(29) + 248));
c->f[2].f = fpu(F(3) + F(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 304), c->f[4].u);
wr32(c, (RW(29) + 308), c->f[2].u);
wr32(c, (RW(29) + 312), c->f[0].u);
L_00149A64:;
c->f[6].u = rd32(c, (RW(29) + 296));
c->f[1].u = rd32(c, (RW(17) + 8));
c->f[0].u = rd32(c, (RW(17) + 0));
c->f[4].u = rd32(c, (RW(29) + 292));
c->f[5].f = fpu(F(6) - F(1));
c->f[1].u = rd32(c, (RW(29) + 288));
c->f[2].u = rd32(c, (RW(17) + 4));
c->f[0].f = fpu(F(1) - F(0));
c->f[1].f = fpu(F(4) - F(2));
c->facc = fpu(F(1) * F(1));
c->facc = fpu(c->facc + F(0) * F(0));
c->f[0].f = fpu(c->facc + F(5) * F(5));
c->fcc = F(0) <= F(20);
c->f[0].u = RW(0);
{ int t = !c->fcc; c->f[3].u = rd32(c, (RW(29) + 288)); if (t) goto L_00149B7C; }
wr32(c, (RW(29) + 64), c->f[0].u);
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = rd32(c, (RW(29) + 304));
wr32(c, (RW(29) + 108), RW(2));
c->f[1].u = rd32(c, (RW(29) + 308));
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 68), c->f[0].u);
SET32(4, RW(29) + 64);
wr32(c, (RW(29) + 72), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 312));
c->f[2].f = fpu(F(3) - F(2));
c->f[1].f = fpu(F(4) - F(1));
c->f[0].f = fpu(F(6) - F(0));
wr32(c, (RW(29) + 96), c->f[2].u);
wr32(c, (RW(29) + 100), c->f[1].u);
wr32(c, (RW(29) + 104), c->f[0].u);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
SET64(31, 0x149af0); wr128(c, (RW(29) + 64) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 124), RW(2));
SET32(4, RW(29) + 128);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
SET32(5, RW(29) + 112);
wr32(c, (RW(29) + 116), RW(0));
c->f[12].u = c->f[21].u;
wr32(c, (RW(29) + 120), RW(0));
SET64(31, 0x149b1c); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x40000000);
SET32(4, RW(29) + 144);
c->f[12].u = RW(2);
SET64(31, 0x149b30); SET32(5, RW(29) + 128); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 172), RW(2));
c->f[4].u = rd32(c, (RW(29) + 288));
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
c->f[3].u = rd32(c, (RW(29) + 292));
wr32(c, (RW(29) + 164), RW(0));
c->f[1].u = rd32(c, (RW(29) + 296));
wr32(c, (RW(29) + 168), RW(0));
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 160));
c->f[2].u = rd32(c, (RW(29) + 164));
c->f[4].f = fpu(F(4) + F(0));
c->f[0].u = rd32(c, (RW(29) + 168));
c->f[2].f = fpu(F(3) + F(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 288), c->f[4].u);
wr32(c, (RW(29) + 292), c->f[2].u);
wr32(c, (RW(29) + 296), c->f[0].u);
L_00149B7C:;
wr32(c, (RW(29) + 256), RW(0));
SET32(2, RW(29) + 256);
wr32(c, (RW(29) + 260), RW(0));
SET32(5, RW(2) + 16);
SET32(3, RW(29) + 288);
wr32(c, (RW(29) + 264), RW(0));
SET64(4, (s64)(s32)0x3f800000);
SET64(1, RD(5) < RD(3));
{ int t = RD(1) == RD(0); wr32(c, (RW(29) + 268), RW(4)); if (t) goto L_00149BD0; }
SET64(1, RD(5) < RD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_00149BD0; }
wr32(c, (RW(5) + 0), RW(0));
L_00149BB4:;
wr32(c, (RW(5) + 4), RW(0));
wr32(c, (RW(5) + 8), RW(0));
wr32(c, (RW(5) + 12), RW(4));
SET32(5, RW(5) + 16);
SET64(2, RD(5) < RD(3));
if (RD(2) != RD(0)) { wr32(c, (RW(5) + 0), RW(0)); { POLL(); goto L_00149BB4; } }
L_00149BD0:;
rd128(c, (RW(29) + 304) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 288) & ~15u, &c->r[2]);
SET64(5, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET32(4, RW(29) + 256);
c->f[12].u = c->f[21].u;
wr128(c, (RW(29) + 256) & ~15u, &c->r[3]);
SET64(31, 0x149bf4); wr128(c, (RW(29) + 272) & ~15u, &c->r[2]); JP_F_00149C10(c);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 320); return;
}

void JP_F_00149C10(Ctx *c) { /* func_00149C10 */
ENTER(0x149c10);
SET32(29, RW(29) + -192);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(0) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[1].u = rd32(c, (RW(4) + 24));
c->f[5].u = rd32(c, (RW(4) + 8));
c->f[0].u = rd32(c, (RW(4) + 20));
c->f[4].u = rd32(c, (RW(4) + 4));
c->f[2].f = fpu(F(1) - F(5));
c->f[1].f = fpu(F(0) - F(4));
c->f[0].u = rd32(c, (RW(4) + 16));
c->f[3].u = rd32(c, (RW(4) + 0));
c->f[20].f = fpu(F(12) * F(12));
wr32(c, (RW(29) + 188), RW(2));
SET32(4, RW(29) + 176);
c->f[0].f = fpu(F(0) - F(3));
wr32(c, (RW(29) + 180), c->f[1].u);
wr32(c, (RW(29) + 184), c->f[2].u);
wr32(c, (RW(29) + 176), c->f[0].u);
c->f[2].u = rd32(c, (RW(5) + 8));
c->f[1].u = rd32(c, (RW(5) + 4));
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[2].f = fpu(F(2) - F(5));
wr32(c, (RW(29) + 172), RW(2));
SET32(5, RW(29) + 160);
c->f[1].f = fpu(F(1) - F(4));
c->f[0].f = fpu(F(0) - F(3));
wr32(c, (RW(29) + 168), c->f[2].u);
wr32(c, (RW(29) + 164), c->f[1].u);
SET64(31, 0x149cb0); wr32(c, (RW(29) + 160), c->f[0].u); JP_F_002B0230(c);
c->f[3].u = rd32(c, (RW(29) + 180));
SET32(4, RW(29) + 96);
c->f[1].u = rd32(c, (RW(29) + 176));
SET32(5, RW(29) + 176);
c->f[2].u = rd32(c, (RW(29) + 184));
c->facc = fpu(F(3) * F(3));
c->facc = fpu(c->facc + F(1) * F(1));
c->f[1].f = fpu(c->facc + F(2) * F(2));
c->f[12].f = fpu_div(F(0), F(1));
SET64(31, 0x149ce4);  JP_F_002AFF20(c);
SET64(6, RD(19) + RD(0));
SET32(4, RW(29) + 112);
SET64(31, 0x149cf4); SET32(5, RW(29) + 96); JP_F_002B0040(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 140), RW(2));
c->f[0].u = rd32(c, (RW(28) + -32668));
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
c->f[3].u = rd32(c, (RW(18) + 4));
wr32(c, (RW(29) + 148), RW(0));
c->f[1].u = rd32(c, (RW(18) + 0));
wr32(c, (RW(29) + 152), RW(0));
c->f[5].u = rd32(c, (RW(18) + 8));
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 156), c->f[0].u);
wr32(c, (RW(29) + 128), RW(0));
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 132));
c->f[0].u = rd32(c, (RW(29) + 128));
c->f[4].u = rd32(c, (RW(29) + 136));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
c->facc = fpu(F(2) * F(2));
c->f[4].f = fpu(F(5) - F(4));
c->facc = fpu(c->facc + F(0) * F(0));
c->f[0].f = fpu(c->facc + F(4) * F(4));
c->fcc = F(0) <= F(20);
if (!c->fcc) { SET64(2, RD(16) + RD(0)); goto L_00149E24; }
SET32(4, RW(29) + 160);
SET64(31, 0x149d74); SET64(5, RD(4) + RD(0)); JP_F_002B0230(c);
c->f[21].u = c->f[0].u;
SET32(4, RW(29) + 176);
SET64(31, 0x149d84); SET32(5, RW(29) + 160); JP_F_002B0230(c);
c->f[1].u = c->f[0].u ^ 0x80000000u;
c->f[0].f = fpu(F(1) * F(1));
c->f[0].f = fpu(F(0) - F(21));
c->f[0].f = fpu(F(20) + F(0));
c->f[3].u = RW(0);
c->fcc = F(0) < F(3);
{ int t = c->fcc;  if (t) goto L_00149E20; }
c->f[2].f = fpu_sqrt(F(0));
c->f[0].u = c->f[1].u ^ 0x80000000u;
c->f[1].f = fpu(F(0) + F(2));
c->f[0].f = fpu(F(0) - F(2));
c->fcc = F(0) < F(3);
if (!c->fcc) { c->f[0].u = rd32(c, (RW(29) + 164)); goto L_00149DDC; }
c->fcc = F(1) < F(3);
{ int t = c->fcc;  if (t) goto L_00149E20; }
c->f[0].u = rd32(c, (RW(29) + 164));
L_00149DDC:;
c->f[1].u = rd32(c, (RW(29) + 168));
c->f[4].u = rd32(c, (RW(29) + 180));
c->facc = fpu(F(0) * F(0));
c->f[0].u = rd32(c, (RW(29) + 160));
c->f[2].u = rd32(c, (RW(29) + 176));
c->f[3].u = rd32(c, (RW(29) + 184));
c->facc = fpu(c->facc + F(0) * F(0));
c->f[1].f = fpu(c->facc + F(1) * F(1));
c->facc = fpu(F(4) * F(4));
c->facc = fpu(c->facc + F(2) * F(2));
c->f[0].f = fpu(c->facc + F(3) * F(3));
c->fcc = F(1) < F(0);
{ int t = !c->fcc;  if (t) goto L_00149E20; }
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET64(16, RD(0) + (s64)1);
wr128(c, (RW(17) + 0) & ~15u, &c->r[2]);
L_00149E20:;
SET64(2, RD(16) + RD(0));
L_00149E24:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 192); return;
}

void JP_F_00149E50(Ctx *c) { /* func_00149E50 */
ENTER(0x149e50);
SET32(29, RW(29) + -240);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(4, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(4) != RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_00149E9C; }
wr32(c, (RW(19) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(19) + 4), RW(0));
wr32(c, (RW(19) + 8), RW(0));
wr32(c, (RW(19) + 12), RW(3)); goto L_0014A058;
L_00149E9C:;
SET32(3, RW(0) + 1);
if (RD(4) != RD(3)) { SET64(2, (s64)(s32)0x3f800000); goto L_00149ECC; }
SET64(4, (s32)rd32(c, (RW(18) + 12)));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(19) + 0), RW(0));
wr32(c, (RW(19) + 4), RW(0));
wr32(c, (RW(19) + 8), RW(0));
wr32(c, (RW(19) + 12), RW(3));
rd128(c, (RW(4) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(19) + 0) & ~15u, &c->r[3]); goto L_0014A058;
L_00149ECC:;
c->f[0].u = RW(2);
c->fcc = F(12) <= F(0);
if (c->fcc) { SET32(2, RW(0) + -1); goto L_00149EE8; }
c->f[12].u = c->f[0].u;
SET32(2, RW(0) + -1);
L_00149EE8:;
{ int t = RD(6) != RD(2);  if (t) goto L_00149F64; }
SET64(3, (s32)rd32(c, (RW(18) + 8)));
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2); SET64(5, RD(0) + RD(0)); if (t) goto L_00149F10; }
if (RD(3) == RD(0)) { SET32(5, RW(4) + -1); goto L_00149F14; }
 goto L_00149F14;
L_00149F10:;
SET64(5, RD(4) + RD(0));
L_00149F14:;
c->f[0].u = RW(5);
SET64(2, (s64)(s32)0x3f800000);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(6, RD(0) + RD(0));
c->f[12].f = fpu(F(12) * F(0));
c->f[2].u = RW(2);
c->f[0].u = RW(0);
L_00149F30:;
c->f[1].f = fpu(F(12) - F(2));
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_00149F50; }
c->f[12].u = c->f[1].u;
SET32(6, RW(6) + 1); { POLL(); goto L_00149F30; }
L_00149F50:;
SET64(2, RSD(6) < RSD(5));
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x3f800000); goto L_00149F68; }
SET32(6, RW(5) + -1);
c->f[12].u = c->f[2].u;
L_00149F64:;
SET64(2, (s64)(s32)0x3f800000);
L_00149F68:;
SET64(3, (s64)(s32)0x40400000);
c->f[0].u = RW(2);
SET32(4, RW(6) + 1);
c->f[2].f = fpu(F(0) - F(12));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
c->f[0].u = RW(3);
c->f[1].f = fpu(F(0) * F(12));
c->f[3].f = fpu(F(12) * F(12));
c->f[0].f = fpu(F(0) * F(2));
c->f[21].f = fpu(F(3) * F(0));
c->f[0].f = fpu(F(2) * F(2));
c->f[20].f = fpu(F(3) * F(12));
c->f[22].f = fpu(F(1) * F(0));
{ int t = RD(4) != RD(2); c->f[12].f = fpu(F(0) * F(2)); if (t) goto L_00149FAC; }
SET64(4, RD(0) + RD(0));
L_00149FAC:;
SET64(2, (s32)rd32(c, (RW(18) + 12)));
SET32(16, RW(6) << 6);
SET32(17, RW(4) << 6);
SET32(4, RW(29) + 144);
SET32(2, RW(2) + RW(16));
SET64(31, 0x149fc8); SET32(5, RW(2) + 16); JP_F_002AFF20(c);
SET64(2, (s32)rd32(c, (RW(18) + 12)));
c->f[12].u = c->f[22].u;
SET32(4, RW(29) + 128);
SET64(31, 0x149fdc); SET32(5, RW(2) + RW(16)); JP_F_002AFF20(c);
SET32(4, RW(29) + 160);
SET32(5, RW(29) + 144);
SET64(31, 0x149fec); SET32(6, RW(29) + 128); JP_F_002B0040(c);
SET64(2, (s32)rd32(c, (RW(18) + 12)));
c->f[12].u = c->f[21].u;
SET32(4, RW(29) + 112);
SET32(2, RW(2) + RW(17));
SET64(31, 0x14a004); SET32(5, RW(2) + 32); JP_F_002AFF20(c);
SET32(4, RW(29) + 176);
SET32(5, RW(29) + 160);
SET64(31, 0x14a014); SET32(6, RW(29) + 112); JP_F_002B0040(c);
SET64(2, (s32)rd32(c, (RW(18) + 12)));
c->f[12].u = c->f[20].u;
SET32(4, RW(29) + 96);
SET32(2, RW(2) + RW(17));
SET64(31, 0x14a02c); SET32(5, RW(2) + 16); JP_F_002AFF20(c);
SET32(4, RW(29) + 192);
SET32(5, RW(29) + 176);
SET64(31, 0x14a03c); SET32(6, RW(29) + 96); JP_F_002B0040(c);
rd128(c, (RW(29) + 192) & ~15u, &c->r[3]);
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(19) + 0), RW(0));
wr32(c, (RW(19) + 4), RW(0));
wr32(c, (RW(19) + 8), RW(0));
wr32(c, (RW(19) + 12), RW(4));
wr128(c, (RW(19) + 0) & ~15u, &c->r[3]);
L_0014A058:;
SET64(31, rd64(c, (RW(29) + 80)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 240); return;
}

void JP_F_0014A080(Ctx *c) { /* func_0014A080 */
ENTER(0x14a080);
SET32(29, RW(29) + -192);
SET32(6, RW(5) + -1);
wr64(c, (RW(29) + 48), RD(31));
SET32(3, RW(5) + 1);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RSD(6) >= 0; wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_0014A0A8; }
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(6, RW(2) + -1);
L_0014A0A8:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(7, (s32)rd32(c, (RW(4) + 12))); goto L_0014A0C0; }
SET64(3, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(4) + 12)));
L_0014A0C0:;
SET32(6, RW(6) << 6);
SET32(3, RW(3) << 6);
SET64(2, (s64)(s32)0x3f800000);
SET32(17, RW(7) + RW(6));
SET32(16, RW(7) + RW(3));
c->f[3].u = rd32(c, (RW(17) + 24));
SET32(4, RW(5) << 6);
c->f[2].u = rd32(c, (RW(16) + 24));
SET32(18, RW(7) + RW(4));
c->f[1].u = rd32(c, (RW(17) + 20));
SET32(5, RW(29) + 128);
c->f[0].u = rd32(c, (RW(16) + 20));
c->f[3].f = fpu(F(3) - F(2));
c->f[2].f = fpu(F(1) - F(0));
c->f[1].u = rd32(c, (RW(17) + 16));
c->f[0].u = rd32(c, (RW(16) + 16));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 140), RW(2));
wr32(c, (RW(29) + 132), c->f[2].u);
wr32(c, (RW(29) + 136), c->f[3].u);
wr32(c, (RW(29) + 128), c->f[0].u);
c->f[12].u = rd32(c, (RW(18) + 48));
SET64(31, 0x14a120); SET32(4, RW(29) + 144); JP_F_002AFF20(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 160), RW(0));
c->f[5].u = rd32(c, (RW(18) + 24));
wr32(c, (RW(29) + 164), RW(0));
c->f[3].u = rd32(c, (RW(18) + 20));
wr32(c, (RW(29) + 168), RW(0));
c->f[1].u = rd32(c, (RW(18) + 16));
wr32(c, (RW(29) + 172), RW(3));
SET32(4, RW(29) + 80);
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
c->f[4].u = rd32(c, (RW(29) + 168));
wr32(c, (RW(29) + 188), RW(3));
c->f[2].u = rd32(c, (RW(29) + 164));
c->f[0].u = rd32(c, (RW(29) + 160));
c->f[4].f = fpu(F(5) + F(4));
c->f[2].f = fpu(F(3) + F(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 184), c->f[4].u);
wr32(c, (RW(29) + 180), c->f[2].u);
wr32(c, (RW(29) + 176), c->f[0].u);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 32) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(16) + 24));
c->f[0].u = rd32(c, (RW(17) + 24));
c->f[3].u = rd32(c, (RW(16) + 20));
c->f[1].u = rd32(c, (RW(16) + 16));
c->f[4].f = fpu(F(2) - F(0));
c->f[2].u = rd32(c, (RW(17) + 20));
c->f[0].u = rd32(c, (RW(17) + 16));
c->f[2].f = fpu(F(3) - F(2));
wr32(c, (RW(29) + 76), RW(3));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 72), c->f[4].u);
wr32(c, (RW(29) + 68), c->f[2].u);
wr32(c, (RW(29) + 64), c->f[0].u);
c->f[12].u = rd32(c, (RW(18) + 52));
SET64(31, 0x14a1bc); SET32(5, RW(29) + 64); JP_F_002AFF20(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(3));
c->f[5].u = rd32(c, (RW(18) + 24));
wr32(c, (RW(29) + 124), RW(3));
c->f[3].u = rd32(c, (RW(18) + 20));
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
c->f[1].u = rd32(c, (RW(18) + 16));
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[3]);
c->f[4].u = rd32(c, (RW(29) + 104));
c->f[2].u = rd32(c, (RW(29) + 100));
c->f[0].u = rd32(c, (RW(29) + 96));
c->f[4].f = fpu(F(5) + F(4));
c->f[2].f = fpu(F(3) + F(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 120), c->f[4].u);
wr32(c, (RW(29) + 116), c->f[2].u);
wr32(c, (RW(29) + 112), c->f[0].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 192); return;
}

void JP_F_0014A230(Ctx *c) { /* func_0014A230 */
ENTER(0x14a230);
wr32(c, (RW(4) + 0), RW(0)); return;
}

void JP_F_0014A240(Ctx *c) { /* func_0014A240 */
ENTER(0x14a240);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_0014A2A4; }
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 12))); goto L_0014A26C; }
SET32(3, RW(0) + 1); goto L_0014A2C0;
L_0014A26C:;
rd128(c, (RW(4) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(4) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET32(4, RW(4) + -1);
SET32(4, RW(4) << 6);
SET32(4, RW(3) + RW(4));
rd128(c, (RW(4) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(4) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]); goto L_0014A2BC;
L_0014A2A4:;
SET64(31, 0x14a2ac); SET64(5, RD(0) + RD(0)); JP_F_0014A080(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x14a2bc); SET32(5, RW(2) + -1); JP_F_0014A080(c);
L_0014A2BC:;
SET32(3, RW(0) + 1);
L_0014A2C0:;
wr8(c, (RW(16) + 17), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014A2E0(Ctx *c) { /* func_0014A2E0 */
ENTER(0x14a2e0);
wr32(c, (RW(4) + 8), RW(5)); return;
}

void JP_F_0014A2F0(Ctx *c) { /* func_0014A2F0 */
ENTER(0x14a2f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(7, (s32)rd32(c, (RW(4) + 0)));
SET64(16, RD(4) + RD(0));
SET64(6, (s32)rd32(c, (RW(4) + 12)));
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
SET32(7, RW(7) << 6);
SET32(6, RW(6) + RW(7));
wr128(c, (RW(6) + 32) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(6) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(6) + 0) & ~15u, &c->r[3]);
wr32(c, (RW(6) + 48), c->f[12].u);
wr32(c, (RW(6) + 52), c->f[13].u);
SET64(6, (s32)rd32(c, (RW(4) + 0)));
SET32(5, RW(6) + 1);
SET64(3, RSD(6) < (s64)2);
{ int t = RD(3) != RD(0); wr32(c, (RW(4) + 0), RW(5)); if (t) goto L_0014A34C; }
SET64(31, 0x14a34c); SET32(5, RW(6) + -1); JP_F_0014A080(c);
L_0014A34C:;
wr8(c, (RW(16) + 17), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014A360(Ctx *c) { /* func_0014A360 */
ENTER(0x14a360);
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

void JP_F_0014A3A0(Ctx *c) { /* func_0014A3A0 */
ENTER(0x14a3a0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(2) == RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_0014A3D0; }
SET64(31, 0x14a3d0); SET32(4, RW(2) + -16); JP_F_00100430(c);
L_0014A3D0:;
wr32(c, (RW(19) + 12), RW(0));
SET32(2, RW(18) << 6);
wr32(c, (RW(19) + 0), RW(0));
SET64(16, RD(0) + RD(0));
wr32(c, (RW(19) + 4), RW(0));
SET32(4, RW(2) + 16);
wr32(c, (RW(19) + 8), RW(0));
wr8(c, (RW(19) + 16), (u8)RW(0));
wr32(c, (RW(19) + 0), RW(0));
SET64(31, 0x14a3fc); wr32(c, (RW(19) + 4), RW(18)); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0014A428; }
SET64(5, (s64)(s32)0x150000);
SET64(8, RD(18) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET32(5, RW(5) + -23712);
SET64(6, RD(0) + RD(0));
SET64(31, 0x14a424); SET32(7, RW(0) + 64); JP_F_00102580(c);
SET64(17, RD(2) + RD(0));
L_0014A428:;
wr32(c, (RW(19) + 12), RW(17));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_0014A450(Ctx *c) { /* func_0014A450 */
ENTER(0x14a450);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014A470; }
SET64(31, 0x14a470); SET32(4, RW(3) + -16); JP_F_00100430(c);
L_0014A470:;
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 8), RW(0));
wr8(c, (RW(16) + 16), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014A4A0(Ctx *c) { /* func_0014A4A0 */
ENTER(0x14a4a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014A4F8; }
SET64(2, (s32)rd32(c, (RW(17) + 12)));
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 12), RW(0)); goto L_0014A4D4; }
SET64(31, 0x14a4d0); SET32(4, RW(2) + -16); JP_F_00100430(c);
wr32(c, (RW(17) + 12), RW(0));
L_0014A4D4:;
SET64(2, RD(16) << 48);
wr32(c, (RW(17) + 0), RW(0));
SET64(2, RSD(2) >> 48);
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 8), RW(0));
{ int t = RSD(2) <= 0; wr8(c, (RW(17) + 16), (u8)RW(0)); if (t) goto L_0014A4F8; }
SET64(31, 0x14a4f8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014A4F8:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014A510(Ctx *c) { /* func_0014A510 */
ENTER(0x14a510);
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr8(c, (RW(4) + 16), (u8)RW(0)); return;
}

void JP_F_0014A530(Ctx *c) { /* func_0014A530 */
ENTER(0x14a530);
SET32(29, RW(29) + -272);
SET64(6, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 220), RW(6));
c->f[0].u = RW(6);
wr32(c, (RW(29) + 236), RW(6));
SET32(3, RW(0) + 3);
wr32(c, (RW(29) + 252), RW(6));
c->f[5].u = RW(0);
wr32(c, (RW(29) + 268), RW(6));
wr32(c, (RW(29) + 204), RW(6));
SET64(6, rd16(c, (RW(5) + 64)));
wr32(c, (RW(29) + 208), RW(0));
wr32(c, (RW(29) + 212), RW(0));
wr32(c, (RW(29) + 216), RW(0));
wr32(c, (RW(29) + 224), RW(0));
wr32(c, (RW(29) + 228), RW(0));
wr32(c, (RW(29) + 232), RW(0));
wr32(c, (RW(29) + 240), RW(0));
wr32(c, (RW(29) + 244), RW(0));
wr32(c, (RW(29) + 248), RW(0));
wr32(c, (RW(29) + 256), RW(0));
wr32(c, (RW(29) + 260), RW(0));
wr32(c, (RW(29) + 264), RW(0));
wr32(c, (RW(29) + 192), RW(0));
wr32(c, (RW(29) + 196), RW(0));
{ int t = RD(6) == RD(3); wr32(c, (RW(29) + 200), RW(0)); if (t) goto L_0014A668; }
SET32(3, RW(0) + 2);
if (RD(6) == RD(3)) { rd128(c, (RW(5) + 0) & ~15u, &c->r[6]); goto L_0014A5EC; }
SET32(3, RW(0) + 1);
if (RD(6) == RD(3)) { wr32(c, (RW(4) + 0), c->f[5].u); goto L_0014A5D4; }
if (RD(6) == RD(0)) { wr32(c, (RW(4) + 0), c->f[5].u); goto L_0014A5C4; }
rd128(c, (RW(5) + 32) & ~15u, &c->r[3]); goto L_0014A688;
L_0014A5C4:;
wr32(c, (RW(4) + 4), c->f[5].u);
wr32(c, (RW(4) + 8), c->f[5].u);
wr32(c, (RW(4) + 12), c->f[5].u); goto L_0014A7A4;
L_0014A5D4:;
wr32(c, (RW(4) + 4), c->f[5].u);
wr32(c, (RW(4) + 8), c->f[5].u);
wr32(c, (RW(4) + 12), c->f[0].u);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]); goto L_0014A7A4;
L_0014A5EC:;
wr32(c, (RW(29) + 176), c->f[5].u);
rd128(c, (RW(5) + 16) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 180), c->f[5].u);
wr32(c, (RW(29) + 184), c->f[5].u);
wr32(c, (RW(29) + 188), c->f[0].u);
wr128(c, (RW(29) + 176) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 172), c->f[0].u);
c->f[1].u = rd32(c, (RW(29) + 180));
wr32(c, (RW(29) + 160), c->f[5].u);
wr32(c, (RW(29) + 164), c->f[5].u);
wr32(c, (RW(29) + 168), c->f[5].u);
wr128(c, (RW(29) + 160) & ~15u, &c->r[3]);
c->f[3].u = rd32(c, (RW(29) + 184));
c->f[0].u = rd32(c, (RW(29) + 164));
c->f[2].u = rd32(c, (RW(29) + 168));
c->facc = fpu(F(5) + F(1));
c->f[4].f = fpu(F(0) - F(1));
c->f[4].f = fpu(c->facc + F(12) * F(4));
c->f[1].u = rd32(c, (RW(29) + 176));
c->f[0].u = rd32(c, (RW(29) + 160));
c->f[2].f = fpu(F(2) - F(3));
c->facc = fpu(F(5) + F(3));
c->f[2].f = fpu(c->facc + F(12) * F(2));
c->f[0].f = fpu(F(0) - F(1));
c->facc = fpu(F(5) + F(1));
c->f[0].f = fpu(c->facc + F(12) * F(0));
wr32(c, (RW(4) + 0), c->f[0].u);
wr32(c, (RW(4) + 4), c->f[4].u);
wr32(c, (RW(4) + 8), c->f[2].u);
wr32(c, (RW(4) + 12), c->f[5].u); goto L_0014A7A4;
L_0014A668:;
rd128(c, (RW(5) + 16) & ~15u, &c->r[6]);
rd128(c, (RW(5) + 0) & ~15u, &c->r[7]);
rd128(c, (RW(5) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 240) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 224) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 256) & ~15u, &c->r[3]); goto L_0014A6A4;
L_0014A688:;
rd128(c, (RW(5) + 0) & ~15u, &c->r[7]);
rd128(c, (RW(5) + 16) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 240) & ~15u, &c->r[3]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 208) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 224) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 256) & ~15u, &c->r[3]);
L_0014A6A4:;
SET64(5, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0x40400000);
c->f[0].u = RW(5);
wr32(c, (RW(4) + 0), RW(0));
c->f[16].f = fpu(F(0) - F(12));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
rd128(c, (RW(29) + 224) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 156), RW(5));
c->f[0].f = fpu(F(16) * F(16));
wr32(c, (RW(29) + 140), RW(5));
wr32(c, (RW(29) + 124), RW(5));
wr32(c, (RW(4) + 12), RW(5));
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 148), RW(0));
c->f[15].f = fpu(F(0) * F(16));
wr32(c, (RW(29) + 152), RW(0));
wr128(c, (RW(29) + 144) & ~15u, &c->r[6]);
rd128(c, (RW(29) + 240) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 132), RW(0));
c->f[14].u = RW(3);
wr32(c, (RW(29) + 136), RW(0));
c->f[18].f = fpu(F(12) * F(12));
wr128(c, (RW(29) + 128) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 256) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
c->f[0].f = fpu(F(14) * F(0));
wr128(c, (RW(29) + 112) & ~15u, &c->r[3]);
c->f[13].f = fpu(F(0) * F(12));
c->f[17].f = fpu(F(18) * F(12));
c->f[12].f = fpu(F(14) * F(16));
c->f[8].u = rd32(c, (RW(29) + 144));
c->f[12].f = fpu(F(12) * F(18));
c->f[9].u = rd32(c, (RW(29) + 208));
c->facc = fpu(F(13) * F(8));
c->f[10].u = rd32(c, (RW(29) + 128));
c->facc = fpu(c->facc + F(15) * F(9));
c->f[11].u = rd32(c, (RW(29) + 112));
c->facc = fpu(c->facc + F(12) * F(10));
c->f[4].u = rd32(c, (RW(29) + 148));
c->f[8].f = fpu(c->facc + F(17) * F(11));
c->f[5].u = rd32(c, (RW(29) + 212));
c->facc = fpu(F(13) * F(4));
c->f[6].u = rd32(c, (RW(29) + 132));
c->facc = fpu(c->facc + F(15) * F(5));
c->f[7].u = rd32(c, (RW(29) + 116));
c->facc = fpu(c->facc + F(12) * F(6));
c->f[0].u = rd32(c, (RW(29) + 152));
c->f[4].f = fpu(c->facc + F(17) * F(7));
c->f[1].u = rd32(c, (RW(29) + 216));
c->facc = fpu(F(13) * F(0));
c->f[2].u = rd32(c, (RW(29) + 136));
c->facc = fpu(c->facc + F(15) * F(1));
c->f[3].u = rd32(c, (RW(29) + 120));
c->facc = fpu(c->facc + F(12) * F(2));
wr32(c, (RW(29) + 192), c->f[8].u);
c->f[0].f = fpu(c->facc + F(17) * F(3));
wr32(c, (RW(29) + 196), c->f[4].u);
wr32(c, (RW(29) + 200), c->f[0].u);
rd128(c, (RW(29) + 192) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]);
L_0014A7A4:;
SET32(29, RW(29) + 272); return;
}

void JP_F_0014A7B0(Ctx *c) { /* func_0014A7B0 */
ENTER(0x14a7b0);
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(14) <= F(0);
if (c->fcc) { c->f[1].f = fpu(F(13) - F(12)); goto L_0014A7D4; }
c->f[14].u = c->f[0].u;
c->f[1].f = fpu(F(13) - F(12));
L_0014A7D4:;
SET64(2, (s64)(s32)0xc0490000);
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x40490000); goto L_0014A808; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(1) + F(0));
SET64(2, (s64)(s32)0x40490000);
L_0014A808:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].u = c->f[1].u & 0x7FFFFFFFu; goto L_0014A838; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(1) - F(0));
c->f[0].u = c->f[1].u & 0x7FFFFFFFu;
L_0014A838:;
c->fcc = F(0) < F(14);
{ int t = !c->fcc;  if (t) goto L_0014A84C; }
c->f[0].u = c->f[13].u; goto L_0014A8C4;
L_0014A84C:;
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (!c->fcc) { c->f[0].f = fpu(F(12) + F(14)); goto L_0014A864; }
c->f[0].f = fpu(F(12) - F(14));
L_0014A864:;
SET64(2, (s64)(s32)0xc0490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->fcc = F(0) < F(1);
if (!c->fcc) { SET64(2, (s64)(s32)0x40490000); goto L_0014A898; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[0].f = fpu(F(0) + F(1));
SET64(2, (s64)(s32)0x40490000);
L_0014A898:;
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->fcc = F(0) < F(1);
{ int t = c->fcc;  if (t) goto L_0014A8C4; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[0].f = fpu(F(0) - F(1));
L_0014A8C4:;
 return;
}

void JP_F_0014A8D0(Ctx *c) { /* func_0014A8D0 */
ENTER(0x14a8d0);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void JP_F_0014A8E0(Ctx *c) { /* func_0014A8E0 */
ENTER(0x14a8e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014A920; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_0014A910; }
SET32(2, RW(16) + RW(2));
wr32(c, (RW(16) + 8), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_0014A910:;
SET64(31, 0x14a918); SET64(5, RD(16) + RD(0)); JP_F_0014A930(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 12), RW(3));
L_0014A920:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014A930(Ctx *c) { /* func_0014A930 */
ENTER(0x14a930);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(3) == RD(0);  if (t) goto L_0014AA18; }
if (RD(3) == RD(0)) { SET64(6, rd16(c, (RW(4) + 14))); goto L_0014A950; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 16), RW(3));
SET64(6, rd16(c, (RW(4) + 14)));
L_0014A950:;
{ int t = RSD(6) <= 0; SET64(3, RD(0) + RD(0)); if (t) goto L_0014AA18; }
SET64(7, rd16(c, (RW(4) + 12)));
L_0014A95C:;
{ int t = RSD(7) <= 0; SET64(9, RD(0) + RD(0)); if (t) goto L_0014AA00; }
L_0014A968:;
SET64(6, (s32)rd32(c, (RW(4) + 16)));
mul_s(c, 0, 7, RSW(3), RSW(7));
SET32(7, RW(9) + RW(7));
SET32(7, RW(7) << 3);
SET32(8, RW(6) + RW(7));
SET64(6, (s32)rd32(c, (RW(8) + 0)));
{ int t = RD(6) == RD(0);  if (t) goto L_0014A9B0; }
{ int t = RD(6) == RD(0);  if (t) goto L_0014A998; }
SET32(6, RW(5) + RW(6));
wr32(c, (RW(8) + 0), RW(6));
L_0014A998:;
SET64(7, (s32)rd32(c, (RW(8) + 0)));
SET64(6, (s32)rd32(c, (RW(7) + 4)));
{ int t = RD(6) == RD(0);  if (t) goto L_0014A9B0; }
SET32(6, RW(5) + RW(6));
wr32(c, (RW(7) + 4), RW(6));
L_0014A9B0:;
SET64(6, (s32)rd32(c, (RW(8) + 4)));
{ int t = RD(6) == RD(0);  if (t) goto L_0014A9E8; }
{ int t = RD(6) == RD(0);  if (t) goto L_0014A9D0; }
SET32(6, RW(5) + RW(6));
wr32(c, (RW(8) + 4), RW(6));
L_0014A9D0:;
SET64(7, (s32)rd32(c, (RW(8) + 4)));
SET64(6, (s32)rd32(c, (RW(7) + 4)));
{ int t = RD(6) == RD(0);  if (t) goto L_0014A9E8; }
SET32(6, RW(5) + RW(6));
wr32(c, (RW(7) + 4), RW(6));
L_0014A9E8:;
SET64(7, rd16(c, (RW(4) + 12)));
SET32(9, RW(9) + 1);
SET64(6, RSD(9) < RSD(7));
{ int t = RD(6) != RD(0);  if (t) { POLL(); goto L_0014A968; } }
L_0014AA00:;
SET64(6, rd16(c, (RW(4) + 14)));
SET32(3, RW(3) + 1);
SET64(6, RSD(3) < RSD(6));
if (RD(6) != RD(0)) { SET64(7, rd16(c, (RW(4) + 12))); { POLL(); goto L_0014A95C; } }
L_0014AA18:;
SET64(3, (s32)rd32(c, (RW(4) + 20)));
{ int t = RD(3) == RD(0);  if (t) goto L_0014AAA0; }
if (RD(3) == RD(0)) { SET64(6, (s32)rd32(c, (RW(4) + 20))); goto L_0014AA38; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 20), RW(3));
SET64(6, (s32)rd32(c, (RW(4) + 20)));
L_0014AA38:;
SET64(3, (s32)rd32(c, (RW(6) + 4)));
{ int t = RD(3) == RD(0);  if (t) goto L_0014AAA0; }
if (RD(3) == RD(0)) { SET64(3, rd16(c, (RW(6) + 0))); goto L_0014AA58; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(6) + 4), RW(3));
SET64(3, rd16(c, (RW(6) + 0)));
L_0014AA58:;
{ int t = RSD(3) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_0014AAA0; }
SET64(7, RD(0) + RD(0));
L_0014AA64:;
SET64(3, (s32)rd32(c, (RW(6) + 4)));
SET32(4, RW(3) + RW(7));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) == RD(0);  if (t) goto L_0014AA88; }
{ int t = RD(3) == RD(0);  if (t) goto L_0014AA88; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 4), RW(3));
L_0014AA88:;
SET64(3, rd16(c, (RW(6) + 0)));
SET32(8, RW(8) + 1);
SET64(3, RSD(8) < RSD(3));
{ int t = RD(3) != RD(0); SET32(7, RW(7) + 8); if (t) { POLL(); goto L_0014AA64; } }
L_0014AAA0:;
 return;
}

void JP_F_0014AAB0(Ctx *c) { /* func_0014AAB0 */
ENTER(0x14aab0);
SET64(6, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(6) == RD(0);  if (t) goto L_0014AAE8; }
SET64(3, rd16(c, (RW(4) + 0)));
{ int t = RSD(3) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_0014AAE8; }
L_0014AAC8:;
SET32(3, RW(5) + 1);
wr16(c, (RW(6) + 70), (u16)RW(0));
SET64(5, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(4) + 0)));
SET64(3, RSD(5) < RSD(3));
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 96); if (t) { POLL(); goto L_0014AAC8; } }
L_0014AAE8:;
 return;
}

void JP_F_0014AAF0(Ctx *c) { /* func_0014AAF0 */
ENTER(0x14aaf0);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void JP_F_0014AB00(Ctx *c) { /* func_0014AB00 */
ENTER(0x14ab00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014AB40; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_0014AB30; }
SET32(2, RW(16) + RW(2));
wr32(c, (RW(16) + 8), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_0014AB30:;
SET64(31, 0x14ab38); SET64(5, RD(16) + RD(0)); JP_F_0014AB50(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 12), RW(3));
L_0014AB40:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014AB50(Ctx *c) { /* func_0014AB50 */
ENTER(0x14ab50);
SET64(3, (s32)rd32(c, (RW(4) + 28)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 32))); goto L_0014AB70; }
{ int t = RD(3) == RD(0);  if (t) goto L_0014AB6C; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 28), RW(3));
L_0014AB6C:;
SET64(3, (s32)rd32(c, (RW(4) + 32)));
L_0014AB70:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 36))); goto L_0014AB8C; }
{ int t = RD(3) == RD(0);  if (t) goto L_0014AB88; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 32), RW(3));
L_0014AB88:;
SET64(3, (s32)rd32(c, (RW(4) + 36)));
L_0014AB8C:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 40))); goto L_0014ABA8; }
{ int t = RD(3) == RD(0);  if (t) goto L_0014ABA4; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 36), RW(3));
L_0014ABA4:;
SET64(3, (s32)rd32(c, (RW(4) + 40)));
L_0014ABA8:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 44))); goto L_0014ABC4; }
{ int t = RD(3) == RD(0);  if (t) goto L_0014ABC0; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 40), RW(3));
L_0014ABC0:;
SET64(3, (s32)rd32(c, (RW(4) + 44)));
L_0014ABC4:;
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 48))); goto L_0014ABE0; }
{ int t = RD(3) == RD(0);  if (t) goto L_0014ABDC; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 44), RW(3));
L_0014ABDC:;
SET64(3, (s32)rd32(c, (RW(4) + 48)));
L_0014ABE0:;
{ int t = RD(3) == RD(0);  if (t) goto L_0014ABF8; }
{ int t = RD(3) == RD(0);  if (t) goto L_0014ABF8; }
SET32(3, RW(5) + RW(3));
wr32(c, (RW(4) + 48), RW(3));
L_0014ABF8:;
 return;
}

void JP_F_0014AC00(Ctx *c) { /* func_0014AC00 */
ENTER(0x14ac00);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void JP_F_0014AC10(Ctx *c) { /* func_0014AC10 */
ENTER(0x14ac10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014AC50; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_0014AC40; }
SET32(2, RW(16) + RW(2));
wr32(c, (RW(16) + 8), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_0014AC40:;
SET64(31, 0x14ac48); SET64(5, RD(16) + RD(0)); JP_F_0014AC60(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 12), RW(3));
L_0014AC50:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014AC60(Ctx *c) { /* func_0014AC60 */
ENTER(0x14ac60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0014AC8C; }
SET32(3, RW(17) + RW(3));
wr32(c, (RW(18) + 0), RW(3));
L_0014AC8C:;
SET64(4, (s32)rd32(c, (RW(18) + 0)));
if (RD(4) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 4))); goto L_0014ACB0; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) == RD(0);  if (t) goto L_0014ACAC; }
SET32(3, RW(17) + RW(3));
wr32(c, (RW(4) + 4), RW(3));
L_0014ACAC:;
SET64(3, (s32)rd32(c, (RW(18) + 4)));
L_0014ACB0:;
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 4))); goto L_0014ACC4; }
SET32(3, RW(17) + RW(3));
wr32(c, (RW(18) + 4), RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 4)));
L_0014ACC4:;
if (RD(4) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_0014ACE4; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) == RD(0);  if (t) goto L_0014ACE0; }
SET32(3, RW(17) + RW(3));
wr32(c, (RW(4) + 4), RW(3));
L_0014ACE0:;
SET64(16, RD(0) + RD(0));
L_0014ACE4:;
SET64(3, RD(16) & 0xffff);
L_0014ACE8:;
SET32(3, RW(3) << 2);
SET32(3, RW(18) + RW(3));
SET32(4, RW(3) + 8);
SET64(3, (s32)rd32(c, (RW(3) + 8)));
{ int t = RD(3) == RD(0);  if (t) goto L_0014AD08; }
SET32(3, RW(17) + RW(3));
wr32(c, (RW(4) + 0), RW(3));
L_0014AD08:;
SET64(4, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_0014AD20; }
SET64(31, 0x14ad1c);  JP_F_001400B0(c);
L_0014AD20:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(3, RSD(16) < (s64)3);
if (RD(3) != RD(0)) { SET64(3, RD(16) & 0xffff); { POLL(); goto L_0014ACE8; } }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0014AD50(Ctx *c) { /* func_0014AD50 */
ENTER(0x14ad50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x14ad78); SET64(17, RD(5) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_0014ADF0; }
SET64(31, 0x14ad8c); SET64(4, RD(16) + RD(0)); JP_F_0014AE10(c);
SET64(25, (s32)rd32(c, (RW(16) + 24)));
SET32(4, RW(16) + 16);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14ada0); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(16) == RD(0);  if (t) goto L_0014ADF0; }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
L_0014ADB0:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x14adc0);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0014ADE0; }
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14addc); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_0014ADE0:;
SET64(16, (s32)rd32(c, (RW(16) + 16)));
if (RD(16) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 12))); { POLL(); goto L_0014ADB0; } }
L_0014ADF0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014AE10(Ctx *c) { /* func_0014AE10 */
ENTER(0x14ae10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(7, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(7) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_0014AEE0; }
L_0014AE30:;
SET64(3, rd8(c, (RW(7) + 24)));
{ int t = RD(3) == RD(0); SET64(6, (s32)rd32(c, (RW(7) + 16))); if (t) goto L_0014AED8; }
SET64(5, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(5) == RD(7);  if (t) goto L_0014AE68; }
L_0014AE48:;
SET64(5, (s32)rd32(c, (RW(5) + 16)));
{ int t = RD(5) != RD(7);  if (t) { POLL(); goto L_0014AE48; } }
L_0014AE68:;
SET64(4, (s32)rd32(c, (RW(5) + 16)));
{ int t = RD(4) == RD(0);  if (t) goto L_0014AE80; }
SET64(3, (s32)rd32(c, (RW(5) + 20)));
wr32(c, (RW(4) + 20), RW(3));
L_0014AE80:;
SET64(4, (s32)rd32(c, (RW(5) + 20)));
{ int t = RD(4) == RD(0);  if (t) goto L_0014AE98; }
SET64(3, (s32)rd32(c, (RW(5) + 16)));
wr32(c, (RW(4) + 16), RW(3)); goto L_0014AEA0;
L_0014AE98:;
SET64(3, (s32)rd32(c, (RW(5) + 16)));
wr32(c, (RW(17) + 8), RW(3));
L_0014AEA0:;
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); wr32(c, (RW(17) + 12), RW(3)); if (t) goto L_0014AEB8; }
wr32(c, (RW(17) + 8), RW(0));
L_0014AEB8:;
{ int t = RD(16) == RD(0);  if (t) goto L_0014AED0; }
wr32(c, (RW(7) + 16), RW(16));
SET64(16, RD(7) + RD(0)); goto L_0014AED8;
L_0014AED0:;
wr32(c, (RW(7) + 16), RW(0));
SET64(16, RD(7) + RD(0));
L_0014AED8:;
{ int t = RD(6) != RD(0); SET64(7, RD(6) + RD(0)); if (t) { POLL(); goto L_0014AE30; } }
L_0014AEE0:;
{ int t = RD(16) == RD(0);  if (t) goto L_0014AF08; }
L_0014AEE8:;
SET64(5, RD(16) + RD(0));
SET64(16, (s32)rd32(c, (RW(16) + 16)));
SET64(31, 0x14aef8); SET64(4, RD(17) + RD(0)); JP_F_0014AF50(c);
{ int t = RD(16) != RD(0);  if (t) { POLL(); goto L_0014AEE8; } }
L_0014AF08:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014AF20(Ctx *c) { /* func_0014AF20 */
ENTER(0x14af20);
 return;
}

void JP_F_0014AF30(Ctx *c) { /* func_0014AF30 */
ENTER(0x14af30);
 return;
}

void JP_F_0014AF40(Ctx *c) { /* func_0014AF40 */
ENTER(0x14af40);
 return;
}

void JP_F_0014AF50(Ctx *c) { /* func_0014AF50 */
ENTER(0x14af50);
wr8(c, (RW(5) + 24), (u8)RW(0));
SET64(7, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(7) == RD(0); SET64(9, RD(0) + RD(0)); if (t) goto L_0014B004; }
c->f[1].u = rd32(c, (RW(5) + 40));
SET64(8, RD(7) + RD(0));
SET32(3, RW(0) + 1); goto L_0014AF90;
L_0014AF70:;
SET64(6, (s32)rd32(c, (RW(8) + 16)));
L_0014AF74:;
{ int t = RD(6) == RD(0);  if (t) goto L_0014AF88; }
SET64(8, RD(6) + RD(0)); goto L_0014AF90;
L_0014AF88:;
SET64(9, RD(0) + (s64)1); goto L_0014AFB0;
L_0014AF90:;
c->f[0].u = rd32(c, (RW(8) + 40));
c->fcc = F(0) < F(1);
if (c->fcc) { SET64(6, (s32)rd32(c, (RW(8) + 16))); { POLL(); goto L_0014AF74; } }
SET64(6, rd8(c, (RW(8) + 24)));
{ int t = RD(6) == RD(3);  if (t) { POLL(); goto L_0014AF70; } }
L_0014AFB0:;
{ int t = RD(9) == RD(0);  if (t) goto L_0014AFCC; }
SET64(3, (s32)rd32(c, (RW(8) + 16)));
wr32(c, (RW(5) + 16), RW(3));
wr32(c, (RW(5) + 20), RW(8));
wr32(c, (RW(8) + 16), RW(5)); goto L_0014B014;
L_0014AFCC:;
if (RD(8) != RD(7)) { wr32(c, (RW(5) + 16), RW(8)); goto L_0014AFEC; }
wr32(c, (RW(5) + 16), RW(8));
SET64(3, (s32)rd32(c, (RW(8) + 20)));
wr32(c, (RW(5) + 20), RW(3));
wr32(c, (RW(8) + 20), RW(5));
wr32(c, (RW(4) + 8), RW(5)); goto L_0014B014;
L_0014AFEC:;
SET64(3, (s32)rd32(c, (RW(8) + 20)));
wr32(c, (RW(5) + 20), RW(3));
wr32(c, (RW(8) + 20), RW(5));
SET64(3, (s32)rd32(c, (RW(5) + 20)));
wr32(c, (RW(3) + 16), RW(5)); goto L_0014B014;
L_0014B004:;
wr32(c, (RW(4) + 8), RW(5));
wr32(c, (RW(5) + 16), RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(3) + 20), RW(0));
L_0014B014:;
SET64(3, (s32)rd32(c, (RW(4) + 12)));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 12), RW(3)); return;
}

void JP_F_0014B030(Ctx *c) { /* func_0014B030 */
ENTER(0x14b030);
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 8), RW(0)); return;
}

void JP_F_0014B040(Ctx *c) { /* func_0014B040 */
ENTER(0x14b040);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
SET32(6, RW(0) + 5);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(7, RW(0) + 128);
wr32(c, (RW(4) + 8), RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 12), RW(0));
SET64(8, RD(5) + RD(0));
SET64(31, 0x14b070); SET32(4, RW(16) + 16); JP_F_002B42A0(c);
SET32(4, RW(16) + 16);
SET64(5, RD(0) + RD(0));
SET64(31, 0x14b080); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(4, RW(16) + 16);
SET32(5, RW(0) + 1);
SET64(31, 0x14b090); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET64(25, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14b0a0); SET32(4, RW(16) + 16); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014B0B0(Ctx *c) { /* func_0014B0B0 */
ENTER(0x14b0b0);
wr32(c, (RW(4) + 0), RW(0)); return;
}

void JP_F_0014B0C0(Ctx *c) { /* func_0014B0C0 */
ENTER(0x14b0c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014B198; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2288);
SET64(6, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 64), RW(2));
SET32(7, RW(7) + -2256);
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(6, RW(6) + -2236);
SET32(3, RW(17) + 68);
SET32(2, RW(17) + 84);
wr32(c, (RW(5) + 8), RW(7));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(5) + 16), RW(6));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 12), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14b138);  rt_call(c, t); }
SET32(4, RW(17) + 16);
SET64(31, 0x14b144); SET32(5, RW(0) + -1); JP_F_002B4320(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0014B184; }
SET32(4, RW(17) + 84);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 68); goto L_0014B178; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 100), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14b174);  rt_call(c, t); }
SET32(4, RW(17) + 68);
L_0014B178:;
SET64(31, 0x14b180); SET64(5, RD(0) + RD(0)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
L_0014B184:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0014B19C; }
SET64(31, 0x14b198); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014B198:;
SET64(2, RD(17) + RD(0));
L_0014B19C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014B1B0(Ctx *c) { /* func_0014B1B0 */
ENTER(0x14b1b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_0014B1F0; }
SET32(4, RW(17) + 68);
SET32(2, RW(17) + 84);
wr32(c, (RW(17) + 0), RW(4));
SET64(31, 0x14b1e8); wr32(c, (RW(17) + 4), RW(2)); JP_F_002B0400(c);
SET64(31, 0x14b1f0); SET32(4, RW(17) + 84); JP_F_00141C80(c);
L_0014B1F0:;
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2288);
SET64(6, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 64), RW(2));
SET32(7, RW(7) + -2256);
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(6, RW(6) + -2236);
SET32(3, RW(17) + 68);
SET32(2, RW(17) + 84);
SET32(4, RW(17) + 16);
wr32(c, (RW(5) + 8), RW(7));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(5) + 16), RW(6));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(5) + 12), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(31, 0x14b248); wr32(c, (RW(17) + 8), RW(0)); JP_F_002B4380(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014B260(Ctx *c) { /* func_0014B260 */
ENTER(0x14b260);
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3)); return;
}

void JP_F_0014B280(Ctx *c) { /* func_0014B280 */
ENTER(0x14b280);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014B368; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2192);
SET32(5, RW(5) + -2144);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 184);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
{ int t = RD(17) == RD(0); wr32(c, (RW(3) + 20), RW(2)); if (t) goto L_0014B320; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1328);
SET32(5, RW(5) + -1280);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 160);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14b308);  rt_call(c, t); }
SET32(4, RW(17) + 48);
SET64(31, 0x14b314); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x14b320); SET64(5, RD(0) + RD(0)); JP_F_002B03B0(c);
L_0014B320:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0014B354; }
SET32(4, RW(17) + 184);
{ int t = RD(4) == RD(0);  if (t) goto L_0014B350; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 200), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14b350);  rt_call(c, t); }
L_0014B350:;
SET64(2, RD(16) << 48);
L_0014B354:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0014B36C; }
SET64(31, 0x14b368); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014B368:;
SET64(2, RD(17) + RD(0));
L_0014B36C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014B380(Ctx *c) { /* func_0014B380 */
ENTER(0x14b380);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x14b39c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x14b3a8); SET64(4, RD(16) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0014B3CC; }
SET32(2, RW(0) + 2);
SET64(31, 0x14b3c0); wr32(c, (RW(16) + 0), RW(2)); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(16) + 12), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
L_0014B3CC:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014B3E0(Ctx *c) { /* func_0014B3E0 */
ENTER(0x14b3e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x14b3f4); SET64(16, RD(4) + RD(0)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 8))); goto L_0014B408; }
SET32(5, RW(5) + 672);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
L_0014B408:;
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x14b414); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014B440(Ctx *c) { /* func_0014B440 */
ENTER(0x14b440);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x14b45c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014B480(Ctx *c) { /* func_0014B480 */
ENTER(0x14b480);
SET64(6, (s32)rd32(c, (RW(4) + 144)));
{ int t = RD(6) == RD(0);  if (t) goto L_0014B500; }
SET64(7, (s32)rd32(c, (RW(6) + 8)));
{ int t = RD(7) == RD(4);  if (t) goto L_0014B4B8; }
L_0014B498:;
SET64(7, (s32)rd32(c, (RW(7) + 16)));
{ int t = RD(7) != RD(4);  if (t) { POLL(); goto L_0014B498; } }
L_0014B4B8:;
SET64(5, (s32)rd32(c, (RW(7) + 16)));
if (RD(5) == RD(0)) { SET64(5, (s32)rd32(c, (RW(7) + 20))); goto L_0014B4D0; }
SET64(3, (s32)rd32(c, (RW(7) + 20)));
wr32(c, (RW(5) + 20), RW(3));
SET64(5, (s32)rd32(c, (RW(7) + 20)));
L_0014B4D0:;
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(7) + 16))); goto L_0014B4E4; }
SET64(3, (s32)rd32(c, (RW(7) + 16)));
wr32(c, (RW(5) + 16), RW(3)); goto L_0014B4E8;
L_0014B4E4:;
wr32(c, (RW(6) + 8), RW(3));
L_0014B4E8:;
SET64(3, (s32)rd32(c, (RW(6) + 12)));
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); wr32(c, (RW(6) + 12), RW(3)); if (t) goto L_0014B4FC; }
wr32(c, (RW(6) + 8), RW(0));
L_0014B4FC:;
wr32(c, (RW(4) + 144), RW(0));
L_0014B500:;
 return;
}

void JP_F_0014B510(Ctx *c) { /* func_0014B510 */
ENTER(0x14b510);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 184)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014B548; }
wr32(c, (RW(16) + 144), RW(5));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14b53c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 144)));
SET64(31, 0x14b548); SET64(5, RD(16) + RD(0)); JP_F_0014AF50(c);
L_0014B548:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014B560(Ctx *c) { /* func_0014B560 */
ENTER(0x14b560);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, 0x14b580); SET64(16, RD(5) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0014B5B8; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET32(4, RW(17) + 48);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14b5a0); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 184)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14b5b4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
L_0014B5B8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014B5D0(Ctx *c) { /* func_0014B5D0 */
ENTER(0x14b5d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 148)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014B614; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 148), (u8)RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14b600); SET32(4, RW(16) + 48); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 184)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14b614);  rt_call(c, t); }
L_0014B614:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014B630(Ctx *c) { /* func_0014B630 */
ENTER(0x14b630);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 20), c->f[25].u);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, (s32)rd32(c, (RW(4) + 184)));
SET64(2, rd16(c, (RW(4) + 168)));
SET64(17, (s32)rd32(c, (RW(3) + 44)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_0014B8E8; }
SET64(16, RD(0) + RD(0));
L_0014B67C:;
SET64(31, 0x14b684);  JP_F_002C2AD0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_0014B698; }
SET64(2, rd8(c, (RW(19) + 25)));
{ int t = RD(2) != RD(0);  if (t) goto L_0014B790; }
L_0014B698:;
c->f[12].u = rd32(c, (RW(19) + 172));
c->f[0].u = RW(0);
c->f[23].u = rd32(c, (RW(19) + 36));
c->fcc = F(0) == F(12);
{ int t = !c->fcc; c->f[20].u = rd32(c, (RW(19) + 40)); if (t) goto L_0014B6D0; }
SET64(4, (s32)rd32(c, (RW(19) + 160)));
SET64(3, RD(18) & 0xffff);
SET32(2, RW(3) << 3);
SET32(2, RW(4) + RW(2));
c->f[22].u = rd32(c, (RW(2) + 4));
c->f[3].u = c->f[22].u; goto L_0014B708;
L_0014B6D0:;
SET64(31, 0x14b6d8);  JP_F_0011F6F0(c);
c->f[12].u = rd32(c, (RW(19) + 172));
SET64(31, 0x14b6e4); c->f[21].u = c->f[0].u; JP_F_0011F450(c);
SET64(4, (s32)rd32(c, (RW(19) + 160)));
SET64(3, RD(18) & 0xffff);
SET32(2, RW(3) << 3);
SET32(2, RW(4) + RW(2));
c->f[22].u = rd32(c, (RW(2) + 4));
c->f[1].u = rd32(c, (RW(2) + 0));
c->facc = fpu(F(0) * F(22));
c->f[3].f = fpu(c->facc + F(21) * F(1));
L_0014B708:;
c->f[2].u = rd32(c, (RW(19) + 176));
c->f[0].u = RW(0);
c->f[12].u = rd32(c, (RW(19) + 172));
c->f[2].f = fpu(F(3) * F(2));
c->f[1].u = rd32(c, (RW(19) + 180));
c->facc = fpu(F(0) + F(23));
c->f[24].u = rd32(c, (RW(19) + 32));
c->fcc = F(0) == F(12);
{ int t = !c->fcc; c->f[25].f = fpu(c->facc + F(2) * F(1)); if (t) goto L_0014B738; }
c->f[2].u = rd32(c, (RW(2) + 0)); goto L_0014B760;
L_0014B738:;
SET32(2, RW(3) << 3);
SET32(2, RW(4) + RW(2));
SET64(31, 0x14b748); c->f[23].u = rd32(c, (RW(2) + 0)); JP_F_0011F6F0(c);
c->f[12].u = rd32(c, (RW(19) + 172));
SET64(31, 0x14b754); c->f[21].u = c->f[0].u; JP_F_0011F450(c);
c->facc = fpu(F(23) * F(0));
c->f[2].f = fpu(c->facc - F(22) * F(21));
L_0014B760:;
wr32(c, (RW(29) + 156), RW(0));
c->f[0].u = RW(0);
c->f[1].u = rd32(c, (RW(19) + 176));
c->facc = fpu(F(0) + F(24));
wr32(c, (RW(29) + 148), c->f[25].u);
c->f[0].f = fpu(c->facc + F(2) * F(1));
wr32(c, (RW(29) + 152), c->f[20].u);
wr32(c, (RW(29) + 144), c->f[0].u);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[2]); goto L_0014B890;
L_0014B790:;
c->f[12].u = rd32(c, (RW(19) + 172));
c->f[0].u = RW(0);
c->f[23].u = rd32(c, (RW(19) + 36));
c->fcc = F(0) == F(12);
{ int t = !c->fcc; c->f[20].u = rd32(c, (RW(19) + 40)); if (t) goto L_0014B7C8; }
SET64(4, (s32)rd32(c, (RW(19) + 160)));
SET64(3, RD(18) & 0xffff);
SET32(2, RW(3) << 3);
SET32(5, RW(4) + RW(2));
c->f[22].u = rd32(c, (RW(5) + 4));
c->f[4].u = c->f[22].u; goto L_0014B800;
L_0014B7C8:;
SET64(31, 0x14b7d0);  JP_F_0011F6F0(c);
c->f[12].u = rd32(c, (RW(19) + 172));
SET64(31, 0x14b7dc); c->f[21].u = c->f[0].u; JP_F_0011F450(c);
SET64(4, (s32)rd32(c, (RW(19) + 160)));
SET64(3, RD(18) & 0xffff);
SET32(2, RW(3) << 3);
SET32(5, RW(4) + RW(2));
c->f[22].u = rd32(c, (RW(5) + 4));
c->f[1].u = rd32(c, (RW(5) + 0));
c->facc = fpu(F(0) * F(22));
c->f[4].f = fpu(c->facc + F(21) * F(1));
L_0014B800:;
SET64(2, (s64)(s32)0x3f920000);
c->f[3].u = rd32(c, (RW(19) + 176));
SET64(2, RD(2) | 0x4925);
c->f[1].u = RW(0);
c->f[12].u = rd32(c, (RW(19) + 172));
c->f[3].f = fpu(F(4) * F(3));
c->f[2].u = rd32(c, (RW(19) + 180));
c->facc = fpu(F(1) + F(23));
c->f[0].u = RW(2);
c->f[2].f = fpu(c->facc + F(3) * F(2));
c->f[24].u = rd32(c, (RW(19) + 32));
c->fcc = F(1) == F(12);
{ int t = !c->fcc; c->f[25].f = fpu(F(0) * F(2)); if (t) goto L_0014B840; }
c->f[2].u = rd32(c, (RW(5) + 0)); goto L_0014B868;
L_0014B840:;
SET32(2, RW(3) << 3);
SET32(2, RW(4) + RW(2));
SET64(31, 0x14b850); c->f[23].u = rd32(c, (RW(2) + 0)); JP_F_0011F6F0(c);
c->f[12].u = rd32(c, (RW(19) + 172));
SET64(31, 0x14b85c); c->f[21].u = c->f[0].u; JP_F_0011F450(c);
c->facc = fpu(F(23) * F(0));
c->f[2].f = fpu(c->facc - F(22) * F(21));
L_0014B868:;
wr32(c, (RW(29) + 140), RW(0));
c->f[0].u = RW(0);
c->f[1].u = rd32(c, (RW(19) + 176));
c->facc = fpu(F(0) + F(24));
wr32(c, (RW(29) + 132), c->f[25].u);
c->f[0].f = fpu(c->facc + F(2) * F(1));
wr32(c, (RW(29) + 136), c->f[20].u);
wr32(c, (RW(29) + 128), c->f[0].u);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[2]);
L_0014B890:;
SET64(3, (s32)rd32(c, (RW(19) + 164)));
SET64(2, (s64)(s32)0x40000000);
SET32(18, RW(18) + 1);
c->f[0].u = RW(2);
SET32(2, RW(3) + RW(16));
c->f[3].u = rd32(c, (RW(2) + 12));
SET32(16, RW(16) + 16);
c->f[2].u = rd32(c, (RW(2) + 8));
c->f[1].u = rd32(c, (RW(2) + 4));
c->f[0].f = fpu_div(F(3), F(0));
wr32(c, (RW(29) + 124), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 0));
wr32(c, (RW(29) + 120), c->f[2].u);
wr32(c, (RW(29) + 116), c->f[1].u);
wr32(c, (RW(29) + 112), c->f[0].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[2]);
SET64(2, rd16(c, (RW(19) + 168)));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 32); if (t) { POLL(); goto L_0014B67C; } }
L_0014B8E8:;
SET64(3, (s32)rd32(c, (RW(19) + 164)));
SET64(2, (s64)(s32)0x43000000);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(3) + 12));
SET64(31, 0x14b900); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014B928; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014B940;
L_0014B928:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014B940:;
SET64(5, RD(3) & 0xff);
SET32(4, RW(19) + 48);
SET64(6, RD(0) + RD(0));
SET64(31, 0x14b954); SET64(7, RD(5) + RD(0)); JP_F_002B3EB0(c);
SET64(5, (s32)rd32(c, (RW(19) + 156)));
if (RD(5) == RD(0)) { SET64(5, (s32)rd32(c, (RW(19) + 152))); goto L_0014B97C; }
SET64(4, (s32)rd32(c, (RW(19) + 184)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x14b974);  rt_call(c, t); }
wr32(c, (RW(19) + 156), RW(0));
SET64(5, (s32)rd32(c, (RW(19) + 152)));
L_0014B97C:;
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 96))); goto L_0014B9A0; }
SET64(4, (s32)rd32(c, (RW(19) + 184)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x14b998);  rt_call(c, t); }
wr32(c, (RW(19) + 152), RW(0));
SET64(31, rd64(c, (RW(29) + 96)));
L_0014B9A0:;
c->f[25].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 160); return;
}

void JP_F_0014B9D0(Ctx *c) { /* func_0014B9D0 */
ENTER(0x14b9d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 184)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 184), RW(0)); goto L_0014BA00; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x14b9fc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 184), RW(0));
L_0014BA00:;
SET64(31, 0x14ba08); SET64(4, (s32)rd32(c, (RW(16) + 160))); JP_F_00100430(c);
wr32(c, (RW(16) + 160), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 164)));
if (RD(3) == RD(0)) { wr32(c, (RW(16) + 164), RW(0)); goto L_0014BA24; }
SET64(31, 0x14ba20); SET32(4, RW(3) + -16); JP_F_00100430(c);
wr32(c, (RW(16) + 164), RW(0));
L_0014BA24:;
wr32(c, (RW(16) + 144), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014BA40(Ctx *c) { /* func_0014BA40 */
ENTER(0x14ba40);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 168), (u16)RW(5));
SET64(16, RD(4) + RD(0));
SET64(31, 0x14ba68); SET32(4, RW(0) + 52); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0014BA80; }
SET64(5, rd16(c, (RW(16) + 168)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x14ba80); SET32(6, RW(0) + 1); JP_F_002A9440(c);
L_0014BA80:;
wr32(c, (RW(16) + 184), RW(17));
SET64(2, rd16(c, (RW(16) + 168)));
SET64(31, 0x14ba90); SET32(4, RW(2) << 3); JP_F_00100530(c);
wr32(c, (RW(16) + 160), RW(2));
SET64(17, RD(0) + RD(0));
SET64(18, rd16(c, (RW(16) + 168)));
SET32(2, RW(18) << 4);
SET64(31, 0x14baa8); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0014BAD4; }
SET64(5, (s64)(s32)0x150000);
SET64(8, RD(18) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -19872);
SET64(6, RD(0) + RD(0));
SET64(31, 0x14bad0); SET32(7, RW(0) + 16); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_0014BAD4:;
wr32(c, (RW(16) + 164), RW(19));
SET64(2, rd16(c, (RW(16) + 168)));
{ int t = RSD(2) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0014BB20; }
SET64(5, RD(0) + RD(0));
SET64(4, (s64)(s32)0x3f800000);
L_0014BAEC:;
SET64(2, (s32)rd32(c, (RW(16) + 164)));
SET32(6, RW(6) + 1);
wr32(c, (RW(29) + 80), RW(4));
wr32(c, (RW(29) + 84), RW(4));
SET32(2, RW(2) + RW(5));
wr32(c, (RW(29) + 88), RW(4));
wr32(c, (RW(29) + 92), RW(4));
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(2) + 0) & ~15u, &c->r[3]);
SET64(2, rd16(c, (RW(16) + 168)));
SET64(2, RSD(6) < RSD(2));
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 16); if (t) { POLL(); goto L_0014BAEC; } }
L_0014BB20:;
wr8(c, (RW(16) + 24), (u8)RW(0));
SET32(2, RW(0) + 64);
SET32(6, RW(0) + 1);
wr32(c, (RW(16) + 152), RW(2));
SET32(4, RW(16) + 48);
wr32(c, (RW(16) + 156), RW(0));
SET64(5, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x14bb50); wr8(c, (RW(16) + 148), (u8)RW(0)); JP_F_002B3EF0(c);
SET32(4, RW(16) + 48);
SET64(31, 0x14bb5c); SET64(5, RD(0) + RD(0)); JP_F_002B3EE0(c);
wr32(c, (RW(16) + 172), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0014BB80(Ctx *c) { /* func_0014BB80 */
ENTER(0x14bb80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014BCAC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2096);
SET32(5, RW(5) + -2044);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 188);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14bbd8);  rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_0014BC64; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2192);
SET32(4, RW(4) + -2144);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 184);
wr32(c, (RW(3) + 16), RW(4));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
{ int t = RD(17) == RD(0); wr32(c, (RW(3) + 20), RW(2)); if (t) goto L_0014BC64; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1328);
SET32(5, RW(5) + -1280);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 160);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14bc4c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 48);
SET64(31, 0x14bc58); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x14bc64); SET64(5, RD(0) + RD(0)); JP_F_002B03B0(c);
L_0014BC64:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0014BC98; }
SET32(4, RW(17) + 188);
{ int t = RD(4) == RD(0);  if (t) goto L_0014BC94; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 204), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14bc94);  rt_call(c, t); }
L_0014BC94:;
SET64(2, RD(16) << 48);
L_0014BC98:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0014BCB0; }
SET64(31, 0x14bcac); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014BCAC:;
SET64(2, RD(17) + RD(0));
L_0014BCB0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014BCD0(Ctx *c) { /* func_0014BCD0 */
ENTER(0x14bcd0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(18) << 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014BD04; }
SET32(4, RW(16) + 188);
SET64(31, 0x14bd04); wr32(c, (RW(16) + 12), RW(4)); JP_F_00141C80(c);
L_0014BD04:;
SET64(17, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x14bd14); SET64(5, RD(0) + RD(0)); JP_F_0014EC40(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2192);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 8), RW(2));
SET64(5, (s64)(s32)0x4d0000);
SET64(8, (s32)rd32(c, (RW(16) + 12)));
SET32(9, RW(9) + -2144);
SET32(7, RW(16) + 184);
SET64(6, (s64)(s32)0x3f800000);
SET32(4, RW(4) + -2096);
SET32(5, RW(5) + -2044);
wr32(c, (RW(8) + 16), RW(9));
SET32(3, RW(16) + 188);
SET64(8, (s32)rd32(c, (RW(16) + 12)));
SET64(2, RD(16) + RD(0));
SET32(7, RW(7) - RW(8));
wr32(c, (RW(8) + 20), RW(7));
wr32(c, (RW(16) + 160), RW(0));
wr32(c, (RW(16) + 164), RW(0));
wr32(c, (RW(16) + 172), RW(0));
wr32(c, (RW(16) + 176), RW(6));
wr32(c, (RW(16) + 180), RW(6));
wr32(c, (RW(16) + 8), RW(4));
SET64(4, (s32)rd32(c, (RW(16) + 12)));
wr32(c, (RW(4) + 16), RW(5));
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(16) + 184), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0014BDB0(Ctx *c) { /* func_0014BDB0 */
ENTER(0x14bdb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x14bdcc); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x14bdd8); SET64(4, RD(16) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0014BDFC; }
SET32(2, RW(0) + 2);
SET64(31, 0x14bdf0); wr32(c, (RW(16) + 0), RW(2)); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(16) + 12), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
L_0014BDFC:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014BE10(Ctx *c) { /* func_0014BE10 */
ENTER(0x14be10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x14be24); SET64(16, RD(4) + RD(0)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 8))); goto L_0014BE38; }
SET32(5, RW(5) + 672);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
L_0014BE38:;
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x14be44); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014BE70(Ctx *c) { /* func_0014BE70 */
ENTER(0x14be70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x14be8c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014BEB0(Ctx *c) { /* func_0014BEB0 */
ENTER(0x14beb0);
SET64(6, (s32)rd32(c, (RW(4) + 144)));
{ int t = RD(6) == RD(0);  if (t) goto L_0014BF30; }
SET64(7, (s32)rd32(c, (RW(6) + 8)));
{ int t = RD(7) == RD(4);  if (t) goto L_0014BEE8; }
L_0014BEC8:;
SET64(7, (s32)rd32(c, (RW(7) + 16)));
{ int t = RD(7) != RD(4);  if (t) { POLL(); goto L_0014BEC8; } }
L_0014BEE8:;
SET64(5, (s32)rd32(c, (RW(7) + 16)));
if (RD(5) == RD(0)) { SET64(5, (s32)rd32(c, (RW(7) + 20))); goto L_0014BF00; }
SET64(3, (s32)rd32(c, (RW(7) + 20)));
wr32(c, (RW(5) + 20), RW(3));
SET64(5, (s32)rd32(c, (RW(7) + 20)));
L_0014BF00:;
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(7) + 16))); goto L_0014BF14; }
SET64(3, (s32)rd32(c, (RW(7) + 16)));
wr32(c, (RW(5) + 16), RW(3)); goto L_0014BF18;
L_0014BF14:;
wr32(c, (RW(6) + 8), RW(3));
L_0014BF18:;
SET64(3, (s32)rd32(c, (RW(6) + 12)));
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); wr32(c, (RW(6) + 12), RW(3)); if (t) goto L_0014BF2C; }
wr32(c, (RW(6) + 8), RW(0));
L_0014BF2C:;
wr32(c, (RW(4) + 144), RW(0));
L_0014BF30:;
 return;
}

void JP_F_0014BF40(Ctx *c) { /* func_0014BF40 */
ENTER(0x14bf40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 184)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014BF78; }
wr32(c, (RW(16) + 144), RW(5));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14bf6c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 144)));
SET64(31, 0x14bf78); SET64(5, RD(16) + RD(0)); JP_F_0014AF50(c);
L_0014BF78:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014BF90(Ctx *c) { /* func_0014BF90 */
ENTER(0x14bf90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, 0x14bfb0); SET64(16, RD(5) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0014C004; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET32(4, RW(17) + 48);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14bfd0); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 188)));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14bfe4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 184)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14bff8); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, 0x14c000); SET64(4, (s32)rd32(c, (RW(17) + 188))); JP_F_0014F720(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_0014C004:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014C020(Ctx *c) { /* func_0014C020 */
ENTER(0x14c020);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 148)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014C064; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 148), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 184)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14c054);  rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14c064); SET32(4, RW(16) + 48); rt_call(c, t); }
L_0014C064:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014C080(Ctx *c) { /* func_0014C080 */
ENTER(0x14c080);
SET32(29, RW(29) + -192);
SET64(3, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 28), c->f[27].u);
wr32(c, (RW(29) + 24), c->f[26].u);
wr32(c, (RW(29) + 20), c->f[25].u);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(4) + 188)));
c->f[24].u = RW(3);
{ int t = RD(2) == RD(0); c->f[23].u = c->f[24].u; if (t) goto L_0014C194; }
SET64(3, (s32)rd32(c, (RW(2) + 16)));
SET64(2, (s32)rd32(c, (RW(20) + 184)));
wr32(c, (RW(2) + 44), RW(3));
SET64(4, (s32)rd32(c, (RW(20) + 188)));
SET64(3, rd16(c, (RW(4) + 52)));
SET64(1, RSD(3) < (s64)3);
{ int t = RD(1) != RD(0); SET64(5, RD(0) + (s64)2); if (t) goto L_0014C110; }
L_0014C0F4:;
SET32(2, RW(5) << 1);
SET64(5, RD(2) & 0xffff);
SET64(1, RSD(5) < RSD(3));
{ int t = RD(1) != RD(0);  if (t) { POLL(); goto L_0014C0F4; } }
L_0014C110:;
if (RSD(5) < 0) { SET32(3, RW(5) >> 1); goto L_0014C124; }
c->f[0].u = RW(5);
c->f[24].f = (f32)(s32)c->f[0].u; goto L_0014C13C;
L_0014C124:;
SET64(2, RD(5) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[24].f = (f32)(s32)c->f[0].u;
c->f[24].f = fpu(F(24) + F(24));
L_0014C13C:;
SET64(3, rd16(c, (RW(4) + 54)));
SET64(1, RSD(3) < (s64)3);
{ int t = RD(1) != RD(0); SET64(2, RD(0) + (s64)2); if (t) goto L_0014C168; }
L_0014C14C:;
SET32(2, RW(2) << 1);
SET64(2, RD(2) & 0xffff);
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) != RD(0);  if (t) { POLL(); goto L_0014C14C; } }
L_0014C168:;
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_0014C17C; }
c->f[0].u = RW(2);
c->f[23].f = (f32)(s32)c->f[0].u; goto L_0014C194;
L_0014C17C:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[23].f = (f32)(s32)c->f[0].u;
c->f[23].f = fpu(F(23) + F(23));
L_0014C194:;
SET64(2, (s32)rd32(c, (RW(20) + 184)));
SET64(18, (s32)rd32(c, (RW(2) + 48)));
{ int t = RD(18) == RD(0);  if (t) goto L_0014C460; }
SET64(2, rd16(c, (RW(20) + 168)));
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_0014C460; }
SET64(17, RD(0) + RD(0));
L_0014C1B4:;
SET64(31, 0x14c1bc);  JP_F_002C2AD0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_0014C1D0; }
SET64(2, rd8(c, (RW(20) + 25)));
{ int t = RD(2) != RD(0);  if (t) goto L_0014C2C8; }
L_0014C1D0:;
c->f[12].u = rd32(c, (RW(20) + 172));
c->f[0].u = RW(0);
c->f[25].u = rd32(c, (RW(20) + 36));
c->fcc = F(0) == F(12);
{ int t = !c->fcc; c->f[20].u = rd32(c, (RW(20) + 40)); if (t) goto L_0014C208; }
SET64(3, (s32)rd32(c, (RW(20) + 160)));
SET64(16, RD(19) & 0xffff);
SET32(2, RW(16) << 3);
SET32(2, RW(3) + RW(2));
c->f[22].u = rd32(c, (RW(2) + 4));
c->f[3].u = c->f[22].u; goto L_0014C240;
L_0014C208:;
SET64(31, 0x14c210);  JP_F_0011F6F0(c);
c->f[12].u = rd32(c, (RW(20) + 172));
SET64(31, 0x14c21c); c->f[21].u = c->f[0].u; JP_F_0011F450(c);
SET64(3, (s32)rd32(c, (RW(20) + 160)));
SET64(16, RD(19) & 0xffff);
SET32(2, RW(16) << 3);
SET32(2, RW(3) + RW(2));
c->f[22].u = rd32(c, (RW(2) + 4));
c->f[1].u = rd32(c, (RW(2) + 0));
c->facc = fpu(F(0) * F(22));
c->f[3].f = fpu(c->facc + F(21) * F(1));
L_0014C240:;
c->f[2].u = rd32(c, (RW(20) + 176));
c->f[0].u = RW(0);
c->f[12].u = rd32(c, (RW(20) + 172));
c->f[2].f = fpu(F(3) * F(2));
c->f[1].u = rd32(c, (RW(20) + 180));
c->facc = fpu(F(0) + F(25));
c->f[26].u = rd32(c, (RW(20) + 32));
c->fcc = F(0) == F(12);
{ int t = !c->fcc; c->f[27].f = fpu(c->facc + F(2) * F(1)); if (t) goto L_0014C270; }
c->f[2].u = rd32(c, (RW(2) + 0)); goto L_0014C298;
L_0014C270:;
SET32(2, RW(16) << 3);
SET32(2, RW(3) + RW(2));
SET64(31, 0x14c280); c->f[25].u = rd32(c, (RW(2) + 0)); JP_F_0011F6F0(c);
c->f[12].u = rd32(c, (RW(20) + 172));
SET64(31, 0x14c28c); c->f[21].u = c->f[0].u; JP_F_0011F450(c);
c->facc = fpu(F(25) * F(0));
c->f[2].f = fpu(c->facc - F(22) * F(21));
L_0014C298:;
wr32(c, (RW(29) + 188), RW(0));
c->f[0].u = RW(0);
c->f[1].u = rd32(c, (RW(20) + 176));
c->facc = fpu(F(0) + F(26));
wr32(c, (RW(29) + 180), c->f[27].u);
c->f[0].f = fpu(c->facc + F(2) * F(1));
wr32(c, (RW(29) + 184), c->f[20].u);
wr32(c, (RW(29) + 176), c->f[0].u);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[2]); goto L_0014C3C8;
L_0014C2C8:;
c->f[12].u = rd32(c, (RW(20) + 172));
c->f[0].u = RW(0);
c->f[21].u = rd32(c, (RW(20) + 36));
c->fcc = F(0) == F(12);
{ int t = !c->fcc; c->f[22].u = rd32(c, (RW(20) + 40)); if (t) goto L_0014C300; }
SET64(3, (s32)rd32(c, (RW(20) + 160)));
SET64(16, RD(19) & 0xffff);
SET32(2, RW(16) << 3);
SET32(4, RW(3) + RW(2));
c->f[20].u = rd32(c, (RW(4) + 4));
c->f[4].u = c->f[20].u; goto L_0014C338;
L_0014C300:;
SET64(31, 0x14c308);  JP_F_0011F6F0(c);
c->f[12].u = rd32(c, (RW(20) + 172));
SET64(31, 0x14c314); c->f[25].u = c->f[0].u; JP_F_0011F450(c);
SET64(3, (s32)rd32(c, (RW(20) + 160)));
SET64(16, RD(19) & 0xffff);
SET32(2, RW(16) << 3);
SET32(4, RW(3) + RW(2));
c->f[20].u = rd32(c, (RW(4) + 4));
c->f[1].u = rd32(c, (RW(4) + 0));
c->facc = fpu(F(0) * F(20));
c->f[4].f = fpu(c->facc + F(25) * F(1));
L_0014C338:;
SET64(2, (s64)(s32)0x3f920000);
c->f[3].u = rd32(c, (RW(20) + 176));
SET64(2, RD(2) | 0x4925);
c->f[1].u = RW(0);
c->f[12].u = rd32(c, (RW(20) + 172));
c->f[3].f = fpu(F(4) * F(3));
c->f[2].u = rd32(c, (RW(20) + 180));
c->facc = fpu(F(1) + F(21));
c->f[0].u = RW(2);
c->f[2].f = fpu(c->facc + F(3) * F(2));
c->f[26].u = rd32(c, (RW(20) + 32));
c->fcc = F(1) == F(12);
{ int t = !c->fcc; c->f[27].f = fpu(F(0) * F(2)); if (t) goto L_0014C378; }
c->f[2].u = rd32(c, (RW(4) + 0)); goto L_0014C3A0;
L_0014C378:;
SET32(2, RW(16) << 3);
SET32(2, RW(3) + RW(2));
SET64(31, 0x14c388); c->f[25].u = rd32(c, (RW(2) + 0)); JP_F_0011F6F0(c);
c->f[12].u = rd32(c, (RW(20) + 172));
SET64(31, 0x14c394); c->f[21].u = c->f[0].u; JP_F_0011F450(c);
c->facc = fpu(F(25) * F(0));
c->f[2].f = fpu(c->facc - F(20) * F(21));
L_0014C3A0:;
wr32(c, (RW(29) + 172), RW(0));
c->f[0].u = RW(0);
c->f[1].u = rd32(c, (RW(20) + 176));
c->facc = fpu(F(0) + F(26));
wr32(c, (RW(29) + 164), c->f[27].u);
c->f[0].f = fpu(c->facc + F(2) * F(1));
wr32(c, (RW(29) + 168), c->f[22].u);
wr32(c, (RW(29) + 160), c->f[0].u);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[2]);
L_0014C3C8:;
SET64(2, (s64)(s32)0x40000000);
c->f[2].u = RW(2);
SET64(4, (s32)rd32(c, (RW(20) + 164)));
SET64(2, (s64)(s32)0x3f800000);
SET32(3, RW(16) << 3);
wr32(c, (RW(29) + 136), RW(2));
SET32(19, RW(19) + 1);
wr32(c, (RW(29) + 140), RW(2));
SET32(2, RW(4) + RW(17));
c->f[0].u = rd32(c, (RW(2) + 8));
SET32(17, RW(17) + 16);
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[4].u = rd32(c, (RW(2) + 12));
c->f[0].f = fpu_div(F(0), F(2));
wr32(c, (RW(29) + 152), c->f[0].u);
c->f[0].f = fpu_div(F(1), F(2));
c->f[3].u = rd32(c, (RW(2) + 4));
wr32(c, (RW(29) + 144), c->f[0].u);
c->f[0].f = fpu_div(F(4), F(2));
c->f[1].f = fpu_div(F(3), F(2));
wr32(c, (RW(29) + 148), c->f[1].u);
wr32(c, (RW(29) + 156), c->f[0].u);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 16) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(20) + 192)));
SET32(2, RW(2) + RW(3));
c->f[1].u = rd32(c, (RW(2) + 4));
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[1].f = fpu_div(F(1), F(23));
c->f[0].f = fpu_div(F(0), F(24));
wr32(c, (RW(29) + 132), c->f[1].u);
wr32(c, (RW(29) + 128), c->f[0].u);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 32) & ~15u, &c->r[2]);
SET64(2, rd16(c, (RW(20) + 168)));
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 48); if (t) { POLL(); goto L_0014C1B4; } }
L_0014C460:;
SET64(3, (s32)rd32(c, (RW(20) + 164)));
SET64(2, (s64)(s32)0x43000000);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(3) + 12));
SET64(31, 0x14c478); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014C4A0; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014C4B8;
L_0014C4A0:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014C4B8:;
SET64(5, RD(3) & 0xff);
SET32(4, RW(20) + 48);
SET64(6, RD(0) + RD(0));
SET64(31, 0x14c4cc); SET64(7, RD(5) + RD(0)); JP_F_002B3EB0(c);
SET64(5, (s32)rd32(c, (RW(20) + 156)));
if (RD(5) == RD(0)) { SET64(5, (s32)rd32(c, (RW(20) + 152))); goto L_0014C4F4; }
SET64(4, (s32)rd32(c, (RW(20) + 184)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x14c4ec);  rt_call(c, t); }
wr32(c, (RW(20) + 156), RW(0));
SET64(5, (s32)rd32(c, (RW(20) + 152)));
L_0014C4F4:;
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 112))); goto L_0014C518; }
SET64(4, (s32)rd32(c, (RW(20) + 184)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x14c510);  rt_call(c, t); }
wr32(c, (RW(20) + 152), RW(0));
SET64(31, rd64(c, (RW(29) + 112)));
L_0014C518:;
c->f[27].u = rd32(c, (RW(29) + 28));
rd128(c, (RW(29) + 96) & ~15u, &c->r[20]);
c->f[26].u = rd32(c, (RW(29) + 24));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
c->f[25].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 192); return;
}

void JP_F_0014C560(Ctx *c) { /* func_0014C560 */
ENTER(0x14c560);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 184)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 184), RW(0)); goto L_0014C590; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x14c58c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 184), RW(0));
L_0014C590:;
SET64(31, 0x14c598); SET64(4, (s32)rd32(c, (RW(16) + 160))); JP_F_00100430(c);
wr32(c, (RW(16) + 160), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 164)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 164), RW(0)); goto L_0014C5B4; }
SET64(31, 0x14c5b0); SET32(4, RW(2) + -16); JP_F_00100430(c);
wr32(c, (RW(16) + 164), RW(0));
L_0014C5B4:;
SET64(31, 0x14c5bc); SET64(4, (s32)rd32(c, (RW(16) + 192))); JP_F_00100430(c);
wr32(c, (RW(16) + 192), RW(0));
wr32(c, (RW(16) + 144), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014C5E0(Ctx *c) { /* func_0014C5E0 */
ENTER(0x14c5e0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 168), (u16)RW(5));
SET64(16, RD(4) + RD(0));
SET64(31, 0x14c608); SET32(4, RW(0) + 56); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0014C624; }
SET64(6, rd16(c, (RW(16) + 168)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x14c624); SET32(7, RW(0) + 1); JP_F_002A8EC0(c);
L_0014C624:;
wr32(c, (RW(16) + 184), RW(17));
SET64(2, rd16(c, (RW(16) + 168)));
SET64(31, 0x14c634); SET32(4, RW(2) << 3); JP_F_00100530(c);
wr32(c, (RW(16) + 160), RW(2));
SET64(17, RD(0) + RD(0));
SET64(18, rd16(c, (RW(16) + 168)));
SET32(2, RW(18) << 4);
SET64(31, 0x14c64c); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0014C678; }
SET64(5, (s64)(s32)0x150000);
SET64(8, RD(18) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -19872);
SET64(6, RD(0) + RD(0));
SET64(31, 0x14c674); SET32(7, RW(0) + 16); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_0014C678:;
wr32(c, (RW(16) + 164), RW(19));
SET64(3, rd16(c, (RW(16) + 168)));
{ int t = RSD(3) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0014C6C8; }
SET64(5, RD(0) + RD(0));
SET64(4, (s64)(s32)0x3f800000);
L_0014C690:;
SET64(2, (s32)rd32(c, (RW(16) + 164)));
SET32(6, RW(6) + 1);
wr32(c, (RW(29) + 80), RW(4));
wr32(c, (RW(29) + 84), RW(4));
SET32(2, RW(2) + RW(5));
wr32(c, (RW(29) + 88), RW(4));
wr32(c, (RW(29) + 92), RW(4));
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(2) + 0) & ~15u, &c->r[3]);
SET64(3, rd16(c, (RW(16) + 168)));
SET64(2, RSD(6) < RSD(3));
{ int t = RD(2) != RD(0); SET32(5, RW(5) + 16); if (t) { POLL(); goto L_0014C690; } }
L_0014C6C8:;
SET64(2, RD(3) & 0xffff);
SET64(31, 0x14c6d4); SET32(4, RW(2) << 3); JP_F_00100530(c);
wr32(c, (RW(16) + 192), RW(2));
SET32(6, RW(0) + 1);
SET32(2, RW(0) + 64);
wr8(c, (RW(16) + 24), (u8)RW(0));
wr32(c, (RW(16) + 152), RW(2));
SET32(4, RW(16) + 48);
wr32(c, (RW(16) + 156), RW(0));
SET64(5, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x14c708); wr8(c, (RW(16) + 148), (u8)RW(0)); JP_F_002B3EF0(c);
SET32(4, RW(16) + 48);
SET64(31, 0x14c714); SET64(5, RD(0) + RD(0)); JP_F_002B3EE0(c);
wr32(c, (RW(16) + 172), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0014C740(Ctx *c) { /* func_0014C740 */
ENTER(0x14c740);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014C86C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2000);
SET32(5, RW(5) + -1948);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 196);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14c798);  rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_0014C824; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2192);
SET32(4, RW(4) + -2144);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 184);
wr32(c, (RW(3) + 16), RW(4));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
{ int t = RD(17) == RD(0); wr32(c, (RW(3) + 20), RW(2)); if (t) goto L_0014C824; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1328);
SET32(5, RW(5) + -1280);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 160);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14c80c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 48);
SET64(31, 0x14c818); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x14c824); SET64(5, RD(0) + RD(0)); JP_F_002B03B0(c);
L_0014C824:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0014C858; }
SET32(4, RW(17) + 196);
{ int t = RD(4) == RD(0);  if (t) goto L_0014C854; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 212), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14c854);  rt_call(c, t); }
L_0014C854:;
SET64(2, RD(16) << 48);
L_0014C858:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0014C870; }
SET64(31, 0x14c86c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014C86C:;
SET64(2, RD(17) + RD(0));
L_0014C870:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014C890(Ctx *c) { /* func_0014C890 */
ENTER(0x14c890);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(18) << 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014C8C4; }
SET32(4, RW(16) + 196);
SET64(31, 0x14c8c4); wr32(c, (RW(16) + 12), RW(4)); JP_F_00141C80(c);
L_0014C8C4:;
SET64(17, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x14c8d4); SET64(5, RD(0) + RD(0)); JP_F_0014EC40(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -2192);
SET64(4, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 8), RW(2));
SET64(5, (s64)(s32)0x4d0000);
SET64(8, (s32)rd32(c, (RW(16) + 12)));
SET32(9, RW(9) + -2144);
SET32(7, RW(16) + 184);
SET64(6, (s64)(s32)0x3f800000);
SET32(4, RW(4) + -2000);
SET32(5, RW(5) + -1948);
wr32(c, (RW(8) + 16), RW(9));
SET32(3, RW(16) + 196);
SET64(8, (s32)rd32(c, (RW(16) + 12)));
SET64(2, RD(16) + RD(0));
SET32(7, RW(7) - RW(8));
wr32(c, (RW(8) + 20), RW(7));
wr32(c, (RW(16) + 160), RW(0));
wr32(c, (RW(16) + 164), RW(0));
wr32(c, (RW(16) + 172), RW(0));
wr32(c, (RW(16) + 176), RW(6));
wr32(c, (RW(16) + 180), RW(6));
wr32(c, (RW(16) + 8), RW(4));
SET64(4, (s32)rd32(c, (RW(16) + 12)));
wr32(c, (RW(4) + 16), RW(5));
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 20), RW(3));
wr32(c, (RW(16) + 184), RW(0));
wr32(c, (RW(16) + 188), RW(0));
wr32(c, (RW(16) + 192), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0014C970(Ctx *c) { /* func_0014C970 */
ENTER(0x14c970);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
c->f[0].u = RW(0);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[12].u = rd32(c, (RW(4) + 172));
c->fcc = F(0) == F(12);
{ int t = !c->fcc; SET64(16, RD(4) + RD(0)); if (t) goto L_0014C9B4; }
SET64(3, (s32)rd32(c, (RW(16) + 160)));
SET64(2, RD(17) & 0xffff);
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
c->f[2].u = rd32(c, (RW(2) + 4)); goto L_0014C9E8;
L_0014C9B4:;
SET64(31, 0x14c9bc);  JP_F_0011F6F0(c);
c->f[12].u = rd32(c, (RW(16) + 172));
SET64(31, 0x14c9c8); c->f[20].u = c->f[0].u; JP_F_0011F450(c);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
SET64(3, RD(17) & 0xffff);
SET32(3, RW(3) << 3);
SET32(2, RW(2) + RW(3));
c->f[1].u = rd32(c, (RW(2) + 4));
c->f[2].u = rd32(c, (RW(2) + 0));
c->facc = fpu(F(0) * F(1));
c->f[2].f = fpu(c->facc + F(20) * F(2));
L_0014C9E8:;
c->f[1].u = rd32(c, (RW(16) + 176));
SET64(31, rd64(c, (RW(29) + 48)));
c->f[0].u = rd32(c, (RW(16) + 180));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
c->f[1].f = fpu(F(2) * F(1));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[0].f = fpu(F(1) * F(0));
SET32(29, RW(29) + 64); return;
}

void JP_F_0014CA10(Ctx *c) { /* func_0014CA10 */
ENTER(0x14ca10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
c->f[0].u = RW(0);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[12].u = rd32(c, (RW(4) + 172));
c->fcc = F(0) == F(12);
{ int t = !c->fcc; SET64(16, RD(4) + RD(0)); if (t) goto L_0014CA54; }
SET64(2, (s32)rd32(c, (RW(16) + 160)));
SET64(3, RD(5) & 0xffff);
SET32(3, RW(3) << 3);
SET32(2, RW(2) + RW(3));
c->f[1].u = rd32(c, (RW(2) + 0)); goto L_0014CA84;
L_0014CA54:;
SET64(2, (s32)rd32(c, (RW(16) + 160)));
SET64(3, RD(5) & 0xffff);
SET32(3, RW(3) << 3);
SET32(2, RW(3) + RW(2));
c->f[21].u = rd32(c, (RW(2) + 0));
SET64(31, 0x14ca70); c->f[22].u = rd32(c, (RW(2) + 4)); JP_F_0011F6F0(c);
c->f[12].u = rd32(c, (RW(16) + 172));
SET64(31, 0x14ca7c); c->f[20].u = c->f[0].u; JP_F_0011F450(c);
c->facc = fpu(F(21) * F(0));
c->f[1].f = fpu(c->facc - F(22) * F(20));
L_0014CA84:;
c->f[0].u = rd32(c, (RW(16) + 176));
SET64(31, rd64(c, (RW(29) + 32)));
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[0].f = fpu(F(1) * F(0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void JP_F_0014CAB0(Ctx *c) { /* func_0014CAB0 */
ENTER(0x14cab0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x14cacc); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x14cad8); SET64(4, RD(16) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0014CAFC; }
SET32(2, RW(0) + 2);
SET64(31, 0x14caf0); wr32(c, (RW(16) + 0), RW(2)); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(16) + 12), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
L_0014CAFC:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014CB10(Ctx *c) { /* func_0014CB10 */
ENTER(0x14cb10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x14cb24); SET64(16, RD(4) + RD(0)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 8))); goto L_0014CB38; }
SET32(5, RW(5) + 672);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
L_0014CB38:;
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x14cb44); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014CB70(Ctx *c) { /* func_0014CB70 */
ENTER(0x14cb70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x14cb8c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014CBB0(Ctx *c) { /* func_0014CBB0 */
ENTER(0x14cbb0);
SET64(6, (s32)rd32(c, (RW(4) + 144)));
{ int t = RD(6) == RD(0);  if (t) goto L_0014CC30; }
SET64(7, (s32)rd32(c, (RW(6) + 8)));
{ int t = RD(7) == RD(4);  if (t) goto L_0014CBE8; }
L_0014CBC8:;
SET64(7, (s32)rd32(c, (RW(7) + 16)));
{ int t = RD(7) != RD(4);  if (t) { POLL(); goto L_0014CBC8; } }
L_0014CBE8:;
SET64(5, (s32)rd32(c, (RW(7) + 16)));
if (RD(5) == RD(0)) { SET64(5, (s32)rd32(c, (RW(7) + 20))); goto L_0014CC00; }
SET64(3, (s32)rd32(c, (RW(7) + 20)));
wr32(c, (RW(5) + 20), RW(3));
SET64(5, (s32)rd32(c, (RW(7) + 20)));
L_0014CC00:;
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(7) + 16))); goto L_0014CC14; }
SET64(3, (s32)rd32(c, (RW(7) + 16)));
wr32(c, (RW(5) + 16), RW(3)); goto L_0014CC18;
L_0014CC14:;
wr32(c, (RW(6) + 8), RW(3));
L_0014CC18:;
SET64(3, (s32)rd32(c, (RW(6) + 12)));
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); wr32(c, (RW(6) + 12), RW(3)); if (t) goto L_0014CC2C; }
wr32(c, (RW(6) + 8), RW(0));
L_0014CC2C:;
wr32(c, (RW(4) + 144), RW(0));
L_0014CC30:;
 return;
}

void JP_F_0014CC40(Ctx *c) { /* func_0014CC40 */
ENTER(0x14cc40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 144), RW(5));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14cc60); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 144)));
SET64(31, 0x14cc6c); SET64(5, RD(16) + RD(0)); JP_F_0014AF50(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014CC80(Ctx *c) { /* func_0014CC80 */
ENTER(0x14cc80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, 0x14cca0); SET64(16, RD(5) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0014CCD0; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET32(4, RW(17) + 48);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14ccc0); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 160);
SET64(31, 0x14cccc); SET64(5, RD(16) + RD(0)); JP_F_002AA400(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_0014CCD0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014CCE0(Ctx *c) { /* func_0014CCE0 */
ENTER(0x14cce0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd8(c, (RW(4) + 148)));
{ int t = RD(3) != RD(0); SET64(5, RD(4) + RD(0)); if (t) goto L_0014CD10; }
SET32(2, RW(0) + 1);
wr8(c, (RW(5) + 148), (u8)RW(2));
wr32(c, (RW(5) + 160), RW(0));
SET64(25, (s32)rd32(c, (RW(5) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14cd10); SET32(4, RW(5) + 48); rt_call(c, t); }
L_0014CD10:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0014CD20(Ctx *c) { /* func_0014CD20 */
ENTER(0x14cd20);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x14cd40); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002C2AD0(c);
if (RD(2) != RD(0)) { c->f[0].u = rd32(c, (RW(19) + 36)); goto L_0014CD58; }
SET64(2, rd8(c, (RW(19) + 25)));
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x3f920000); goto L_0014CDAC; }
c->f[0].u = rd32(c, (RW(19) + 36));
L_0014CD58:;
c->f[2].u = rd32(c, (RW(19) + 244));
c->f[1].u = rd32(c, (RW(19) + 240));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
c->f[0].u = rd32(c, (RW(19) + 32));
wr32(c, (RW(29) + 100), RW(3));
c->f[2].u = (u32)fpu_cvtw(F(2));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[2].u);
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(29) + 108), RW(2));
c->f[1].u = (u32)fpu_cvtw(F(1));
wr32(c, (RW(29) + 96), RW(3));
SET64(3, rd64(c, (RW(29) + 96)));
wr64(c, (RW(19) + 224), RD(3));
SET64(2, (s32)c->f[1].u);
wr32(c, (RW(29) + 104), RW(2));
SET64(2, rd64(c, (RW(29) + 104)));
wr64(c, (RW(19) + 232), RD(2)); goto L_0014CE10;
L_0014CDAC:;
SET64(2, RD(2) | 0x4925);
c->f[0].u = rd32(c, (RW(19) + 244));
c->f[3].u = RW(2);
c->f[1].u = rd32(c, (RW(19) + 36));
c->f[0].f = fpu(F(3) * F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
c->f[1].f = fpu(F(3) * F(1));
wr32(c, (RW(29) + 92), RW(2));
c->f[0].u = rd32(c, (RW(19) + 32));
c->f[2].u = rd32(c, (RW(19) + 240));
c->f[1].u = (u32)fpu_cvtw(F(1));
c->f[2].u = (u32)fpu_cvtw(F(2));
SET64(3, (s32)c->f[1].u);
SET64(2, (s32)c->f[2].u);
wr32(c, (RW(29) + 84), RW(3));
c->f[0].u = (u32)fpu_cvtw(F(0));
wr32(c, (RW(29) + 88), RW(2));
SET64(2, rd64(c, (RW(29) + 88)));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(29) + 80), RW(3));
SET64(3, rd64(c, (RW(29) + 80)));
wr64(c, (RW(19) + 224), RD(3));
wr64(c, (RW(19) + 232), RD(2));
L_0014CE10:;
c->f[1].u = rd32(c, (RW(19) + 268));
SET64(2, (s64)(s32)0x43000000);
c->f[0].u = RW(2);
SET64(31, 0x14ce24); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014CE4C; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014CE64;
L_0014CE4C:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014CE64:;
c->f[1].u = rd32(c, (RW(19) + 264));
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(18, RD(3) & 0xff);
SET64(31, 0x14ce7c); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014CEA4; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014CEBC;
L_0014CEA4:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014CEBC:;
c->f[1].u = rd32(c, (RW(19) + 260));
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(17, RD(3) & 0xff);
SET64(31, 0x14ced4); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014CEFC; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014CF14;
L_0014CEFC:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014CF14:;
c->f[1].u = rd32(c, (RW(19) + 256));
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(16, RD(3) & 0xff);
SET64(31, 0x14cf2c); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014CF54; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014CF6C;
L_0014CF54:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014CF6C:;
wr8(c, (RW(29) + 124), (u8)RW(3));
SET32(4, RW(19) + 160);
SET32(5, RW(29) + 124);
wr8(c, (RW(29) + 125), (u8)RW(16));
wr8(c, (RW(29) + 126), (u8)RW(17));
SET64(31, 0x14cf88); wr8(c, (RW(29) + 127), (u8)RW(18)); JP_F_002AA5C0(c);
SET64(5, RD(18) & 0xff);
SET32(4, RW(19) + 48);
SET64(6, RD(0) + RD(0));
SET64(31, 0x14cf9c); SET64(7, RD(5) + RD(0)); JP_F_002B3EB0(c);
c->f[0].u = rd32(c, (RW(19) + 40));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
SET64(31, 0x14cfb0); SET32(4, RW(19) + 160); JP_F_002AA560(c);
SET64(5, (s32)rd32(c, (RW(19) + 156)));
if (RD(5) == RD(0)) { SET64(5, (s32)rd32(c, (RW(19) + 152))); goto L_0014CFCC; }
SET64(31, 0x14cfc4); SET32(4, RW(19) + 160); JP_F_002AA4F0(c);
wr32(c, (RW(19) + 156), RW(0));
SET64(5, (s32)rd32(c, (RW(19) + 152)));
L_0014CFCC:;
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_0014CFE4; }
SET64(31, 0x14cfdc); SET32(4, RW(19) + 160); JP_F_002AA510(c);
wr32(c, (RW(19) + 152), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
L_0014CFE4:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_0014D000(Ctx *c) { /* func_0014D000 */
ENTER(0x14d000);
wr32(c, (RW(4) + 144), RW(0)); return;
}

void JP_F_0014D010(Ctx *c) { /* func_0014D010 */
ENTER(0x14d010);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(0) + 64);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, RD(0) + RD(0));
wr8(c, (RW(4) + 24), (u8)RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 152), RW(2));
SET64(7, RD(0) + RD(0));
wr32(c, (RW(4) + 156), RW(0));
SET64(8, RD(6) + RD(0));
wr8(c, (RW(4) + 148), (u8)RW(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x14d050); SET32(4, RW(16) + 48); JP_F_002B3EF0(c);
SET32(4, RW(16) + 48);
SET64(31, 0x14d05c); SET64(5, RD(0) + RD(0)); JP_F_002B3EE0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14d06c); SET32(4, RW(16) + 256); JP_F_00163900(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14d07c); SET32(4, RW(16) + 256); JP_F_001638F0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14d08c); SET32(4, RW(16) + 256); JP_F_001638E0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14d09c); SET32(4, RW(16) + 256); JP_F_001638D0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014D0B0(Ctx *c) { /* func_0014D0B0 */
ENTER(0x14d0b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014D1D0; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1904);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(7, RW(7) + -1788);
SET32(5, RW(5) + -1856);
SET32(3, RW(3) + -1836);
SET32(2, RW(17) + 272);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 168), RW(5));
wr32(c, (RW(17) + 172), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14d120);  rt_call(c, t); }
SET32(4, RW(17) + 160);
SET64(31, 0x14d12c); SET64(5, RD(0) + RD(0)); JP_F_002AA640(c);
{ int t = RD(17) == RD(0);  if (t) goto L_0014D188; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1328);
SET32(5, RW(5) + -1280);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 160);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14d170); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 48);
SET64(31, 0x14d17c); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x14d188); SET64(5, RD(0) + RD(0)); JP_F_002B03B0(c);
L_0014D188:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0014D1BC; }
SET32(4, RW(17) + 272);
{ int t = RD(4) == RD(0);  if (t) goto L_0014D1B8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 288), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14d1b8);  rt_call(c, t); }
L_0014D1B8:;
SET64(2, RD(16) << 48);
L_0014D1BC:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0014D1D4; }
SET64(31, 0x14d1d0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014D1D0:;
SET64(2, RD(17) + RD(0));
L_0014D1D4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014D1F0(Ctx *c) { /* func_0014D1F0 */
ENTER(0x14d1f0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(18) << 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_0014D224; }
SET32(4, RW(17) + 272);
SET64(31, 0x14d224); wr32(c, (RW(17) + 12), RW(4)); JP_F_00141C80(c);
L_0014D224:;
SET64(16, RD(0) + RD(0));
SET64(31, 0x14d230); SET64(4, RD(17) + RD(0)); JP_F_002B0400(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1328);
SET32(7, RW(7) + -1280);
wr32(c, (RW(17) + 8), RW(2));
SET32(5, RW(17) + 160);
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(17) + 48);
wr32(c, (RW(6) + 16), RW(7));
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
wr8(c, (RW(17) + 25), (u8)RW(3));
wr32(c, (RW(17) + 32), RW(0));
wr32(c, (RW(17) + 36), RW(0));
wr32(c, (RW(17) + 40), RW(0));
SET64(31, 0x14d280); wr32(c, (RW(17) + 44), RW(2)); JP_F_002B3FD0(c);
wr32(c, (RW(17) + 144), RW(0));
SET32(2, RW(0) + 128);
wr8(c, (RW(29) + 92), (u8)RW(2));
SET32(4, RW(17) + 160);
wr8(c, (RW(29) + 93), (u8)RW(2));
SET32(5, RW(29) + 64);
wr8(c, (RW(29) + 94), (u8)RW(2));
SET32(6, RW(29) + 92);
wr8(c, (RW(29) + 95), (u8)RW(2));
SET64(7, RD(0) + RD(0));
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 72), RW(0));
SET64(31, 0x14d2bc); wr32(c, (RW(29) + 76), RW(0)); JP_F_002AA6B0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(8, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1904);
SET64(6, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(5, (s64)(s32)0x4d0000);
SET64(7, (s32)rd32(c, (RW(17) + 12)));
SET32(8, RW(8) + -1788);
SET32(6, RW(6) + -1856);
SET32(5, RW(5) + -1836);
SET32(4, RW(17) + 272);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(7) + 16), RW(8));
SET64(2, RD(17) + RD(0));
wr32(c, (RW(17) + 168), RW(6));
wr32(c, (RW(17) + 172), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 20), RW(4));
wr32(c, (RW(17) + 256), RW(0));
wr32(c, (RW(17) + 260), RW(0));
wr32(c, (RW(17) + 264), RW(0));
wr32(c, (RW(17) + 268), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0014D330(Ctx *c) { /* func_0014D330 */
ENTER(0x14d330);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x14d34c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x14d358); SET64(4, RD(16) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0014D37C; }
SET32(2, RW(0) + 2);
SET64(31, 0x14d370); wr32(c, (RW(16) + 0), RW(2)); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(16) + 12), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
L_0014D37C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014D390(Ctx *c) { /* func_0014D390 */
ENTER(0x14d390);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x14d3a4); SET64(16, RD(4) + RD(0)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 8))); goto L_0014D3B8; }
SET32(5, RW(5) + 672);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
L_0014D3B8:;
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x14d3c4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014D3F0(Ctx *c) { /* func_0014D3F0 */
ENTER(0x14d3f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x14d40c); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014D430(Ctx *c) { /* func_0014D430 */
ENTER(0x14d430);
SET64(6, (s32)rd32(c, (RW(4) + 144)));
{ int t = RD(6) == RD(0);  if (t) goto L_0014D4B0; }
SET64(7, (s32)rd32(c, (RW(6) + 8)));
{ int t = RD(7) == RD(4);  if (t) goto L_0014D468; }
L_0014D448:;
SET64(7, (s32)rd32(c, (RW(7) + 16)));
{ int t = RD(7) != RD(4);  if (t) { POLL(); goto L_0014D448; } }
L_0014D468:;
SET64(5, (s32)rd32(c, (RW(7) + 16)));
if (RD(5) == RD(0)) { SET64(5, (s32)rd32(c, (RW(7) + 20))); goto L_0014D480; }
SET64(3, (s32)rd32(c, (RW(7) + 20)));
wr32(c, (RW(5) + 20), RW(3));
SET64(5, (s32)rd32(c, (RW(7) + 20)));
L_0014D480:;
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(7) + 16))); goto L_0014D494; }
SET64(3, (s32)rd32(c, (RW(7) + 16)));
wr32(c, (RW(5) + 16), RW(3)); goto L_0014D498;
L_0014D494:;
wr32(c, (RW(6) + 8), RW(3));
L_0014D498:;
SET64(3, (s32)rd32(c, (RW(6) + 12)));
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); wr32(c, (RW(6) + 12), RW(3)); if (t) goto L_0014D4AC; }
wr32(c, (RW(6) + 8), RW(0));
L_0014D4AC:;
wr32(c, (RW(4) + 144), RW(0));
L_0014D4B0:;
 return;
}

void JP_F_0014D4C0(Ctx *c) { /* func_0014D4C0 */
ENTER(0x14d4c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 160)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014D4F8; }
wr32(c, (RW(16) + 144), RW(5));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14d4ec);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 144)));
SET64(31, 0x14d4f8); SET64(5, RD(16) + RD(0)); JP_F_0014AF50(c);
L_0014D4F8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014D510(Ctx *c) { /* func_0014D510 */
ENTER(0x14d510);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, 0x14d530); SET64(16, RD(5) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0014D598; }
SET64(4, (s32)rd32(c, (RW(17) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x14d550);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0014D594; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET32(4, RW(17) + 48);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14d56c); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14d580); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, RD(16) + RD(0));
SET64(31, 0x14d58c); SET32(4, RW(17) + 208); JP_F_002A9620(c);
SET64(31, 0x14d594); SET64(4, (s32)rd32(c, (RW(17) + 160))); JP_F_0014F720(c);
L_0014D594:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0014D598:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014D5B0(Ctx *c) { /* func_0014D5B0 */
ENTER(0x14d5b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd8(c, (RW(4) + 148)));
{ int t = RD(3) != RD(0); SET64(5, RD(4) + RD(0)); if (t) goto L_0014D5E0; }
SET32(2, RW(0) + 1);
wr8(c, (RW(5) + 148), (u8)RW(2));
wr32(c, (RW(5) + 208), RW(0));
SET64(25, (s32)rd32(c, (RW(5) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14d5e0); SET32(4, RW(5) + 48); rt_call(c, t); }
L_0014D5E0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0014D5F0(Ctx *c) { /* func_0014D5F0 */
ENTER(0x14d5f0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 160)));
{ int t = RD(2) == RD(0); SET64(19, RD(4) + RD(0)); if (t) goto L_0014D61C; }
SET64(2, (s32)rd32(c, (RW(2) + 16)));
wr32(c, (RW(19) + 404), RW(2));
L_0014D61C:;
SET64(31, 0x14d624);  JP_F_002C2AD0(c);
if (RD(2) != RD(0)) { c->f[0].u = rd32(c, (RW(19) + 36)); goto L_0014D63C; }
SET64(2, rd8(c, (RW(19) + 25)));
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x3f920000); goto L_0014D690; }
c->f[0].u = rd32(c, (RW(19) + 36));
L_0014D63C:;
c->f[2].u = rd32(c, (RW(19) + 168));
c->f[1].u = rd32(c, (RW(19) + 164));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
c->f[0].u = rd32(c, (RW(19) + 32));
wr32(c, (RW(29) + 116), RW(3));
c->f[2].u = (u32)fpu_cvtw(F(2));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[2].u);
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(29) + 124), RW(2));
c->f[1].u = (u32)fpu_cvtw(F(1));
wr32(c, (RW(29) + 112), RW(3));
SET64(3, rd64(c, (RW(29) + 112)));
wr64(c, (RW(19) + 368), RD(3));
SET64(2, (s32)c->f[1].u);
wr32(c, (RW(29) + 120), RW(2));
SET64(2, rd64(c, (RW(29) + 120)));
wr64(c, (RW(19) + 376), RD(2)); goto L_0014D6F4;
L_0014D690:;
SET64(2, RD(2) | 0x4925);
c->f[0].u = rd32(c, (RW(19) + 168));
c->f[3].u = RW(2);
c->f[1].u = rd32(c, (RW(19) + 36));
c->f[0].f = fpu(F(3) * F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
c->f[1].f = fpu(F(3) * F(1));
wr32(c, (RW(29) + 108), RW(2));
c->f[0].u = rd32(c, (RW(19) + 32));
c->f[2].u = rd32(c, (RW(19) + 164));
c->f[1].u = (u32)fpu_cvtw(F(1));
c->f[2].u = (u32)fpu_cvtw(F(2));
SET64(3, (s32)c->f[1].u);
SET64(2, (s32)c->f[2].u);
wr32(c, (RW(29) + 100), RW(3));
c->f[0].u = (u32)fpu_cvtw(F(0));
wr32(c, (RW(29) + 104), RW(2));
SET64(2, rd64(c, (RW(29) + 104)));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(29) + 96), RW(3));
SET64(3, rd64(c, (RW(29) + 96)));
wr64(c, (RW(19) + 368), RD(3));
wr64(c, (RW(19) + 376), RD(2));
L_0014D6F4:;
c->f[3].u = rd32(c, (RW(19) + 176));
SET32(4, RW(19) + 208);
c->f[2].u = rd32(c, (RW(19) + 184));
SET32(5, RW(29) + 80);
c->f[1].u = rd32(c, (RW(19) + 172));
c->f[0].u = rd32(c, (RW(19) + 180));
c->f[2].f = fpu(F(2) - F(3));
c->f[0].f = fpu(F(0) - F(1));
c->f[2].u = (u32)fpu_cvtw(F(2));
SET64(2, (s32)c->f[2].u);
c->f[0].u = (u32)fpu_cvtw(F(0));
wr32(c, (RW(29) + 92), RW(2));
SET64(2, (s32)c->f[0].u);
c->f[0].u = (u32)fpu_cvtw(F(1));
wr32(c, (RW(29) + 88), RW(2));
SET64(2, (s32)c->f[0].u);
c->f[0].u = (u32)fpu_cvtw(F(3));
wr32(c, (RW(29) + 80), RW(2));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x14d748); wr32(c, (RW(29) + 84), RW(2)); JP_F_002A9B70(c);
c->f[1].u = rd32(c, (RW(19) + 204));
SET64(2, (s64)(s32)0x43000000);
c->f[0].u = RW(2);
SET64(31, 0x14d75c); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014D784; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014D79C;
L_0014D784:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014D79C:;
c->f[1].u = rd32(c, (RW(19) + 200));
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(18, RD(3) & 0xff);
SET64(31, 0x14d7b4); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014D7DC; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014D7F4;
L_0014D7DC:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014D7F4:;
c->f[1].u = rd32(c, (RW(19) + 196));
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(17, RD(3) & 0xff);
SET64(31, 0x14d80c); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014D834; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014D84C;
L_0014D834:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014D84C:;
c->f[1].u = rd32(c, (RW(19) + 192));
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(16, RD(3) & 0xff);
SET64(31, 0x14d864); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014D88C; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014D8A4;
L_0014D88C:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014D8A4:;
SET64(3, RD(3) & 0xff);
SET64(2, RD(16) & 0xff);
SET32(3, RSW(3) >> 1);
SET32(2, RSW(2) >> 1);
SET64(3, RD(3) & 0xff);
SET64(2, RD(2) & 0xff);
SET32(4, RW(3) + 1);
SET32(5, RW(29) + 140);
SET32(3, RW(2) + 1);
wr8(c, (RW(29) + 140), (u8)RW(4));
SET64(2, RD(17) & 0xff);
wr8(c, (RW(29) + 141), (u8)RW(3));
SET32(2, RSW(2) >> 1);
SET32(4, RW(19) + 208);
SET64(2, RD(2) & 0xff);
wr8(c, (RW(29) + 143), (u8)RW(18));
SET32(2, RW(2) + 1);
SET64(31, 0x14d8f0); wr8(c, (RW(29) + 142), (u8)RW(2)); JP_F_002A9AE0(c);
SET64(5, RD(18) & 0xff);
SET32(4, RW(19) + 48);
SET64(6, RD(0) + RD(0));
SET64(31, 0x14d904); SET64(7, RD(5) + RD(0)); JP_F_002B3EB0(c);
c->f[0].u = rd32(c, (RW(19) + 40));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
SET64(31, 0x14d918); SET32(4, RW(19) + 208); JP_F_002A9A40(c);
c->f[12].u = rd32(c, (RW(19) + 416));
SET64(31, 0x14d924); SET32(4, RW(19) + 208); JP_F_002A9BF0(c);
SET64(5, (s32)rd32(c, (RW(19) + 156)));
if (RD(5) == RD(0)) { SET64(5, (s32)rd32(c, (RW(19) + 152))); goto L_0014D940; }
SET64(31, 0x14d938); SET32(4, RW(19) + 208); JP_F_002A9960(c);
wr32(c, (RW(19) + 156), RW(0));
SET64(5, (s32)rd32(c, (RW(19) + 152)));
L_0014D940:;
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_0014D958; }
SET64(31, 0x14d950); SET32(4, RW(19) + 208); JP_F_002A99B0(c);
wr32(c, (RW(19) + 152), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
L_0014D958:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_0014D970(Ctx *c) { /* func_0014D970 */
ENTER(0x14d970);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(29) + 32);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 32), RW(2));
SET32(4, RW(16) + 208);
wr32(c, (RW(29) + 36), RW(2));
wr32(c, (RW(29) + 44), RW(2));
SET64(31, 0x14d9a0); wr32(c, (RW(29) + 40), RW(0)); JP_F_002A9BD0(c);
wr32(c, (RW(16) + 416), RW(0));
SET32(6, RW(0) + 1);
SET32(2, RW(0) + 64);
wr8(c, (RW(16) + 24), (u8)RW(0));
wr32(c, (RW(16) + 152), RW(2));
SET32(4, RW(16) + 48);
wr32(c, (RW(16) + 156), RW(0));
SET64(5, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x14d9d4); wr8(c, (RW(16) + 148), (u8)RW(0)); JP_F_002B3EF0(c);
SET32(4, RW(16) + 48);
SET64(31, 0x14d9e0); SET64(5, RD(0) + RD(0)); JP_F_002B3EE0(c);
wr32(c, (RW(16) + 184), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 180), RW(0));
c->f[12].u = RW(2);
wr32(c, (RW(16) + 176), RW(0));
SET32(4, RW(16) + 192);
SET64(31, 0x14da00); wr32(c, (RW(16) + 172), RW(0)); JP_F_00163900(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14da10); SET32(4, RW(16) + 192); JP_F_001638F0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14da20); SET32(4, RW(16) + 192); JP_F_001638E0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14da30); SET32(4, RW(16) + 192); JP_F_001638D0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014DA40(Ctx *c) { /* func_0014DA40 */
ENTER(0x14da40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014DBA4; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1744);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(7, RW(7) + -1628);
SET32(5, RW(5) + -1696);
SET32(3, RW(3) + -1676);
SET32(2, RW(17) + 420);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 216), RW(5));
wr32(c, (RW(17) + 220), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14dab0);  rt_call(c, t); }
SET32(4, RW(17) + 208);
SET64(31, 0x14dabc); SET64(5, RD(0) + RD(0)); JP_F_002A9C00(c);
{ int t = RD(17) == RD(0);  if (t) goto L_0014DB5C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1424);
SET32(5, RW(5) + -1376);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 208);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14db00); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_0014DB5C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1328);
SET32(5, RW(5) + -1280);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 160);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14db44); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 48);
SET64(31, 0x14db50); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x14db5c); SET64(5, RD(0) + RD(0)); JP_F_002B03B0(c);
L_0014DB5C:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0014DB90; }
SET32(4, RW(17) + 420);
{ int t = RD(4) == RD(0);  if (t) goto L_0014DB8C; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 436), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14db8c);  rt_call(c, t); }
L_0014DB8C:;
SET64(2, RD(16) << 48);
L_0014DB90:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0014DBA8; }
SET64(31, 0x14dba4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014DBA4:;
SET64(2, RD(17) + RD(0));
L_0014DBA8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014DBC0(Ctx *c) { /* func_0014DBC0 */
ENTER(0x14dbc0);
wr32(c, (RW(4) + 160), RW(0)); return;
}

void JP_F_0014DBD0(Ctx *c) { /* func_0014DBD0 */
ENTER(0x14dbd0);
wr32(c, (RW(4) + 144), RW(0)); return;
}

void JP_F_0014DBE0(Ctx *c) { /* func_0014DBE0 */
ENTER(0x14dbe0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_0014DC10; }
SET32(4, RW(17) + 420);
SET64(31, 0x14dc10); wr32(c, (RW(17) + 12), RW(4)); JP_F_00141C80(c);
L_0014DC10:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x14dc1c); SET64(5, RD(0) + RD(0)); JP_F_0014E880(c);
SET32(4, RW(0) + 128);
SET64(2, (s64)(s32)0x3eef0000);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, RD(2) | 0x1aa0);
wr8(c, (RW(29) + 92), (u8)RW(4));
SET32(5, RW(29) + 64);
wr8(c, (RW(29) + 93), (u8)RW(4));
SET32(6, RW(29) + 48);
wr8(c, (RW(29) + 94), (u8)RW(4));
SET64(7, RD(0) + RD(0));
wr8(c, (RW(29) + 95), (u8)RW(4));
SET32(8, RW(29) + 92);
SET32(4, RW(17) + 208);
wr32(c, (RW(29) + 52), RW(2));
wr32(c, (RW(29) + 48), RW(3));
SET64(9, RD(0) + RD(0));
wr32(c, (RW(29) + 56), RW(3));
wr32(c, (RW(29) + 60), RW(3));
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 68), RW(0));
wr32(c, (RW(29) + 72), RW(0));
SET64(31, 0x14dc78); wr32(c, (RW(29) + 76), RW(0)); JP_F_002A9C70(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1744);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(4, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(7, RW(7) + -1628);
SET32(5, RW(5) + -1696);
SET32(4, RW(4) + -1676);
SET32(3, RW(17) + 420);
SET64(2, RD(17) + RD(0));
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 216), RW(5));
wr32(c, (RW(17) + 220), RW(4));
SET64(4, (s32)rd32(c, (RW(17) + 12)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 20), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_0014DCE0(Ctx *c) { /* func_0014DCE0 */
ENTER(0x14dce0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x14dcfc); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x14dd08); SET64(4, RD(16) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_0014DD2C; }
SET32(2, RW(0) + 2);
SET64(31, 0x14dd20); wr32(c, (RW(16) + 0), RW(2)); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(16) + 12), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
L_0014DD2C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014DD40(Ctx *c) { /* func_0014DD40 */
ENTER(0x14dd40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x14dd54); SET64(16, RD(4) + RD(0)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 8))); goto L_0014DD68; }
SET32(5, RW(5) + 672);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
L_0014DD68:;
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x14dd74); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014DDA0(Ctx *c) { /* func_0014DDA0 */
ENTER(0x14dda0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x14ddbc); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 8), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014DDE0(Ctx *c) { /* func_0014DDE0 */
ENTER(0x14dde0);
SET64(6, (s32)rd32(c, (RW(4) + 144)));
{ int t = RD(6) == RD(0);  if (t) goto L_0014DE60; }
SET64(7, (s32)rd32(c, (RW(6) + 8)));
{ int t = RD(7) == RD(4);  if (t) goto L_0014DE18; }
L_0014DDF8:;
SET64(7, (s32)rd32(c, (RW(7) + 16)));
{ int t = RD(7) != RD(4);  if (t) { POLL(); goto L_0014DDF8; } }
L_0014DE18:;
SET64(5, (s32)rd32(c, (RW(7) + 16)));
if (RD(5) == RD(0)) { SET64(5, (s32)rd32(c, (RW(7) + 20))); goto L_0014DE30; }
SET64(3, (s32)rd32(c, (RW(7) + 20)));
wr32(c, (RW(5) + 20), RW(3));
SET64(5, (s32)rd32(c, (RW(7) + 20)));
L_0014DE30:;
if (RD(5) == RD(0)) { SET64(3, (s32)rd32(c, (RW(7) + 16))); goto L_0014DE44; }
SET64(3, (s32)rd32(c, (RW(7) + 16)));
wr32(c, (RW(5) + 16), RW(3)); goto L_0014DE48;
L_0014DE44:;
wr32(c, (RW(6) + 8), RW(3));
L_0014DE48:;
SET64(3, (s32)rd32(c, (RW(6) + 12)));
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); wr32(c, (RW(6) + 12), RW(3)); if (t) goto L_0014DE5C; }
wr32(c, (RW(6) + 8), RW(0));
L_0014DE5C:;
wr32(c, (RW(4) + 144), RW(0));
L_0014DE60:;
 return;
}

void JP_F_0014DE70(Ctx *c) { /* func_0014DE70 */
ENTER(0x14de70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014DEB0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14dea0);  rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x14deb0); wr32(c, (RW(17) + 144), RW(16)); JP_F_0014AF50(c);
L_0014DEB0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014DED0(Ctx *c) { /* func_0014DED0 */
ENTER(0x14ded0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, 0x14def0); SET64(16, RD(5) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_0014DF58; }
SET64(4, (s32)rd32(c, (RW(17) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x14df10);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_0014DF54; }
SET64(25, (s32)rd32(c, (RW(17) + 56)));
SET32(4, RW(17) + 48);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14df2c); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 160)));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x14df40); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, RD(16) + RD(0));
SET64(31, 0x14df4c); SET32(4, RW(17) + 208); JP_F_002A9EA0(c);
SET64(31, 0x14df54); SET64(4, (s32)rd32(c, (RW(17) + 160))); JP_F_0014F720(c);
L_0014DF54:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0014DF58:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014DF70(Ctx *c) { /* func_0014DF70 */
ENTER(0x14df70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 148)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014DFAC; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 148), (u8)RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14dfa0); SET32(4, RW(16) + 48); rt_call(c, t); }
SET64(31, 0x14dfa8); SET64(4, (s32)rd32(c, (RW(16) + 160))); JP_F_0014F730(c);
wr32(c, (RW(16) + 208), RW(0));
L_0014DFAC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014DFC0(Ctx *c) { /* func_0014DFC0 */
ENTER(0x14dfc0);
SET32(29, RW(29) + -144);
SET64(2, (s64)(s32)0x43000000);
wr64(c, (RW(29) + 64), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[1].u = rd32(c, (RW(4) + 204));
SET64(31, 0x14dff0); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014E018; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014E030;
L_0014E018:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014E030:;
SET64(2, (s32)rd32(c, (RW(19) + 160)));
{ int t = RD(2) == RD(0); SET64(18, RD(3) & 0xff); if (t) goto L_0014E084; }
SET64(3, (s32)rd32(c, (RW(2) + 16)));
wr32(c, (RW(19) + 320), RW(3));
SET32(2, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(19) + 160)));
SET64(3, (s32)rd32(c, (RW(3) + 44)));
if (RD(3) != RD(2)) { SET64(5, RD(18) & 0xff); goto L_0014E074; }
SET64(7, RD(18) & 0xff);
SET32(4, RW(19) + 48);
SET64(5, RD(0) + RD(0));
SET64(31, 0x14e06c); SET64(6, RD(0) + RD(0)); JP_F_002B3EB0(c);
 goto L_0014E084;
L_0014E074:;
SET32(4, RW(19) + 48);
SET64(6, RD(0) + RD(0));
SET64(31, 0x14e084); SET64(7, RD(5) + RD(0)); JP_F_002B3EB0(c);
L_0014E084:;
SET64(31, 0x14e08c);  JP_F_002C2AD0(c);
if (RD(2) != RD(0)) { c->f[1].u = rd32(c, (RW(19) + 168)); goto L_0014E0A4; }
SET64(2, rd8(c, (RW(19) + 25)));
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x3f920000); goto L_0014E110; }
c->f[1].u = rd32(c, (RW(19) + 168));
L_0014E0A4:;
SET64(2, (s64)(s32)0x41800000);
c->f[2].u = RW(2);
c->f[0].u = rd32(c, (RW(19) + 164));
c->f[1].f = fpu(F(2) * F(1));
c->f[0].f = fpu(F(2) * F(0));
c->f[1].u = (u32)fpu_cvtw(F(1));
SET64(2, (s32)c->f[1].u);
c->f[1].u = rd32(c, (RW(19) + 36));
wr32(c, (RW(29) + 124), RW(2));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
c->f[0].u = rd32(c, (RW(19) + 32));
wr32(c, (RW(29) + 120), RW(2));
c->f[1].f = fpu(F(2) * F(1));
SET64(2, rd64(c, (RW(29) + 120)));
c->f[0].f = fpu(F(2) * F(0));
c->f[1].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[1].u);
c->f[0].u = (u32)fpu_cvtw(F(0));
wr32(c, (RW(29) + 116), RW(3));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(29) + 112), RW(3));
SET64(3, rd64(c, (RW(29) + 112)));
wr64(c, (RW(19) + 336), RD(3));
wr64(c, (RW(19) + 344), RD(2)); goto L_0014E190;
L_0014E110:;
SET64(3, RD(2) | 0x4925);
c->f[0].u = rd32(c, (RW(19) + 168));
SET64(2, (s64)(s32)0x41800000);
c->f[4].u = RW(3);
c->f[1].u = rd32(c, (RW(19) + 36));
c->f[0].f = fpu(F(4) * F(0));
c->f[3].u = RW(2);
c->f[0].f = fpu(F(3) * F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
c->f[1].f = fpu(F(4) * F(1));
wr32(c, (RW(29) + 108), RW(2));
c->f[0].u = rd32(c, (RW(19) + 32));
c->f[2].u = rd32(c, (RW(19) + 164));
c->f[1].f = fpu(F(3) * F(1));
c->f[0].f = fpu(F(3) * F(0));
c->f[2].f = fpu(F(3) * F(2));
c->f[1].u = (u32)fpu_cvtw(F(1));
c->f[2].u = (u32)fpu_cvtw(F(2));
SET64(3, (s32)c->f[1].u);
SET64(2, (s32)c->f[2].u);
wr32(c, (RW(29) + 100), RW(3));
c->f[0].u = (u32)fpu_cvtw(F(0));
wr32(c, (RW(29) + 104), RW(2));
SET64(2, rd64(c, (RW(29) + 104)));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(29) + 96), RW(3));
SET64(3, rd64(c, (RW(29) + 96)));
wr64(c, (RW(19) + 336), RD(3));
wr64(c, (RW(19) + 344), RD(2));
L_0014E190:;
c->f[1].u = rd32(c, (RW(19) + 176));
SET64(2, (s64)(s32)0x41800000);
c->f[0].u = rd32(c, (RW(19) + 184));
SET64(6, rd8(c, (RW(19) + 352)));
c->f[3].u = RW(2);
SET32(4, RW(19) + 208);
c->f[2].u = rd32(c, (RW(19) + 172));
SET32(5, RW(29) + 80);
c->f[0].f = fpu(F(0) - F(1));
c->f[0].f = fpu(F(3) * F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
c->f[0].f = fpu(F(3) * F(1));
SET32(3, RW(2) - RW(6));
c->f[1].u = rd32(c, (RW(19) + 180));
c->f[0].u = (u32)fpu_cvtw(F(0));
wr32(c, (RW(29) + 92), RW(3));
c->f[1].f = fpu(F(1) - F(2));
SET64(2, (s32)c->f[0].u);
c->f[1].f = fpu(F(3) * F(1));
SET32(2, RW(6) + RW(2));
wr32(c, (RW(29) + 84), RW(2));
c->f[0].f = fpu(F(3) * F(2));
c->f[1].u = (u32)fpu_cvtw(F(1));
SET64(2, (s32)c->f[1].u);
SET32(2, RW(2) - RW(6));
c->f[0].u = (u32)fpu_cvtw(F(0));
wr32(c, (RW(29) + 88), RW(2));
SET64(2, (s32)c->f[0].u);
SET32(2, RW(6) + RW(2));
SET64(31, 0x14e218); wr32(c, (RW(29) + 80), RW(2)); JP_F_002AA190(c);
c->f[1].u = rd32(c, (RW(19) + 200));
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(31, 0x14e22c); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014E254; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014E26C;
L_0014E254:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014E26C:;
c->f[1].u = rd32(c, (RW(19) + 196));
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(17, RD(3) & 0xff);
SET64(31, 0x14e284); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014E2AC; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014E2C4;
L_0014E2AC:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014E2C4:;
c->f[1].u = rd32(c, (RW(19) + 192));
SET64(2, (s64)(s32)0x437f0000);
c->f[0].u = RW(2);
SET64(16, RD(3) & 0xff);
SET64(31, 0x14e2dc); c->f[12].f = fpu(F(0) * F(1)); JP_F_0011F550(c);
SET64(2, (s64)(s32)0x4f000000);
c->f[1].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].f = fpu(F(0) - F(1)); goto L_0014E304; }
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) & 0xff); goto L_0014E31C;
L_0014E304:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
SET64(3, RD(3) | RD(2));
SET64(3, RD(3) & 0xff);
L_0014E31C:;
SET64(2, RD(3) & 0xff);
SET32(4, RW(19) + 208);
SET32(3, RSW(2) >> 1);
SET32(5, RW(29) + 140);
SET64(2, RD(16) & 0xff);
SET64(3, RD(3) & 0xff);
SET32(2, RSW(2) >> 1);
SET32(3, RW(3) + 1);
SET64(2, RD(2) & 0xff);
wr8(c, (RW(29) + 140), (u8)RW(3));
SET32(2, RW(2) + 1);
wr8(c, (RW(29) + 143), (u8)RW(18));
wr8(c, (RW(29) + 141), (u8)RW(2));
SET64(2, RD(17) & 0xff);
SET32(2, RSW(2) >> 1);
SET64(2, RD(2) & 0xff);
SET32(2, RW(2) + 1);
SET64(31, 0x14e368); wr8(c, (RW(29) + 142), (u8)RW(2)); JP_F_002AA110(c);
c->f[0].u = rd32(c, (RW(19) + 40));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
SET64(31, 0x14e37c); SET32(4, RW(19) + 208); JP_F_002AA0B0(c);
SET64(5, (s32)rd32(c, (RW(19) + 156)));
if (RD(5) == RD(0)) { SET64(5, (s32)rd32(c, (RW(19) + 152))); goto L_0014E398; }
SET64(31, 0x14e390); SET32(4, RW(19) + 208); JP_F_002A9FF0(c);
wr32(c, (RW(19) + 156), RW(0));
SET64(5, (s32)rd32(c, (RW(19) + 152)));
L_0014E398:;
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_0014E3B0; }
SET64(31, 0x14e3a8); SET32(4, RW(19) + 208); JP_F_002AA040(c);
wr32(c, (RW(19) + 152), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
L_0014E3B0:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_0014E3D0(Ctx *c) { /* func_0014E3D0 */
ENTER(0x14e3d0);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(0) + 64);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(4) + 212), RW(0));
SET64(16, RD(4) + RD(0));
wr8(c, (RW(4) + 24), (u8)RW(0));
SET64(7, RD(0) + RD(0));
wr32(c, (RW(4) + 152), RW(2));
SET64(8, RD(6) + RD(0));
wr32(c, (RW(4) + 156), RW(0));
SET64(9, RD(0) + RD(0));
wr8(c, (RW(4) + 148), (u8)RW(0));
SET64(31, 0x14e414); SET32(4, RW(16) + 48); JP_F_002B3EF0(c);
SET32(4, RW(16) + 48);
SET64(31, 0x14e420); SET64(5, RD(0) + RD(0)); JP_F_002B3EE0(c);
wr32(c, (RW(16) + 184), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 180), RW(0));
c->f[12].u = RW(2);
wr32(c, (RW(16) + 176), RW(0));
SET32(4, RW(16) + 192);
SET64(31, 0x14e440); wr32(c, (RW(16) + 172), RW(0)); JP_F_00163900(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14e450); SET32(4, RW(16) + 192); JP_F_001638F0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14e460); SET32(4, RW(16) + 192); JP_F_001638E0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14e470); SET32(4, RW(16) + 192); JP_F_001638D0(c);
SET64(3, rd8(c, (RW(28) + -32640)));
wr8(c, (RW(16) + 352), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014E490(Ctx *c) { /* func_0014E490 */
ENTER(0x14e490);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014E5F4; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1584);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(7, RW(7) + -1468);
SET32(5, RW(5) + -1536);
SET32(3, RW(3) + -1516);
SET32(2, RW(17) + 356);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 216), RW(5));
wr32(c, (RW(17) + 220), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14e500);  rt_call(c, t); }
SET32(4, RW(17) + 208);
SET64(31, 0x14e50c); SET64(5, RD(0) + RD(0)); JP_F_002AA1E0(c);
{ int t = RD(17) == RD(0);  if (t) goto L_0014E5AC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1424);
SET32(5, RW(5) + -1376);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 208);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14e550); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_0014E5AC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1328);
SET32(5, RW(5) + -1280);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 160);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14e594); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 48);
SET64(31, 0x14e5a0); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x14e5ac); SET64(5, RD(0) + RD(0)); JP_F_002B03B0(c);
L_0014E5AC:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0014E5E0; }
SET32(4, RW(17) + 356);
{ int t = RD(4) == RD(0);  if (t) goto L_0014E5DC; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 372), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14e5dc);  rt_call(c, t); }
L_0014E5DC:;
SET64(2, RD(16) << 48);
L_0014E5E0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0014E5F8; }
SET64(31, 0x14e5f4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014E5F4:;
SET64(2, RD(17) + RD(0));
L_0014E5F8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014E610(Ctx *c) { /* func_0014E610 */
ENTER(0x14e610);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0014E640; }
SET32(4, RW(16) + 356);
SET64(31, 0x14e640); wr32(c, (RW(16) + 12), RW(4)); JP_F_00141C80(c);
L_0014E640:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x14e64c); SET64(5, RD(0) + RD(0)); JP_F_0014E880(c);
SET32(2, RW(0) + 128);
SET32(4, RW(16) + 208);
wr8(c, (RW(29) + 76), (u8)RW(2));
SET32(5, RW(29) + 48);
wr8(c, (RW(29) + 77), (u8)RW(2));
SET64(6, RD(0) + RD(0));
wr8(c, (RW(29) + 78), (u8)RW(2));
SET32(7, RW(29) + 76);
wr8(c, (RW(29) + 79), (u8)RW(2));
SET64(8, RD(0) + RD(0));
wr32(c, (RW(29) + 48), RW(0));
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 56), RW(0));
SET64(31, 0x14e688); wr32(c, (RW(29) + 60), RW(0)); JP_F_002AA250(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1584);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 8), RW(2));
SET64(4, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(16) + 12)));
SET32(7, RW(7) + -1468);
SET32(5, RW(5) + -1536);
SET32(4, RW(4) + -1516);
SET32(3, RW(16) + 356);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(16) + 216), RW(5));
wr32(c, (RW(16) + 220), RW(4));
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(4) + 20), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_0014E6F0(Ctx *c) { /* func_0014E6F0 */
ENTER(0x14e6f0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 16), RD(31));
c->f[12].u = RW(2);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 184), RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 180), RW(0));
wr32(c, (RW(4) + 176), RW(0));
wr32(c, (RW(4) + 172), RW(0));
SET64(31, 0x14e720); SET32(4, RW(16) + 192); JP_F_00163900(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14e730); SET32(4, RW(16) + 192); JP_F_001638F0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14e740); SET32(4, RW(16) + 192); JP_F_001638E0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x14e750); SET32(4, RW(16) + 192); JP_F_001638D0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014E760(Ctx *c) { /* func_0014E760 */
ENTER(0x14e760);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014E85C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1424);
SET32(5, RW(5) + -1376);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 208);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14e7b8);  rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_0014E814; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1328);
SET32(5, RW(5) + -1280);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 160);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14e7fc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 48);
SET64(31, 0x14e808); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x14e814); SET64(5, RD(0) + RD(0)); JP_F_002B03B0(c);
L_0014E814:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0014E848; }
SET32(4, RW(17) + 208);
{ int t = RD(4) == RD(0);  if (t) goto L_0014E844; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 224), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14e844);  rt_call(c, t); }
L_0014E844:;
SET64(2, RD(16) << 48);
L_0014E848:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0014E860; }
SET64(31, 0x14e85c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014E85C:;
SET64(2, RD(17) + RD(0));
L_0014E860:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014E880(Ctx *c) { /* func_0014E880 */
ENTER(0x14e880);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(18) << 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_0014E8B4; }
SET32(4, RW(17) + 208);
SET64(31, 0x14e8b4); wr32(c, (RW(17) + 12), RW(4)); JP_F_00141C80(c);
L_0014E8B4:;
SET64(16, RD(0) + RD(0));
SET64(31, 0x14e8c0); SET64(4, RD(17) + RD(0)); JP_F_002B0400(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1328);
SET32(7, RW(7) + -1280);
wr32(c, (RW(17) + 8), RW(2));
SET32(5, RW(17) + 160);
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(17) + 48);
wr32(c, (RW(6) + 16), RW(7));
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
wr8(c, (RW(17) + 25), (u8)RW(3));
wr32(c, (RW(17) + 32), RW(0));
wr32(c, (RW(17) + 36), RW(0));
wr32(c, (RW(17) + 40), RW(0));
SET64(31, 0x14e910); wr32(c, (RW(17) + 44), RW(2)); JP_F_002B3FD0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 144), RW(0));
SET32(2, RW(2) + -1424);
wr32(c, (RW(17) + 8), RW(2));
SET32(6, RW(6) + -1376);
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET32(4, RW(17) + 208);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, RD(17) + RD(0));
wr32(c, (RW(5) + 16), RW(6));
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 20), RW(4));
wr32(c, (RW(17) + 160), RW(0));
wr32(c, (RW(17) + 192), RW(0));
wr32(c, (RW(17) + 196), RW(0));
wr32(c, (RW(17) + 200), RW(0));
wr32(c, (RW(17) + 204), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_0014E980(Ctx *c) { /* func_0014E980 */
ENTER(0x14e980);
c->f[1].u = rd32(c, (RW(4) + 40));
c->f[0].u = rd32(c, (RW(5) + 8));
c->fcc = F(1) == F(0);
if (c->fcc) { rd128(c, (RW(5) + 0) & ~15u, &c->r[3]); goto L_0014E9A0; }
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 24), (u8)RW(3));
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
L_0014E9A0:;
wr128(c, (RW(4) + 32) & ~15u, &c->r[3]); return;
}

void JP_F_0014E9B0(Ctx *c) { /* func_0014E9B0 */
ENTER(0x14e9b0);
c->f[0].u = rd32(c, (RW(4) + 40));
c->fcc = F(12) == F(0);
if (c->fcc) { wr32(c, (RW(4) + 40), c->f[12].u); goto L_0014E9CC; }
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 24), (u8)RW(3));
wr32(c, (RW(4) + 40), c->f[12].u);
L_0014E9CC:;
 return;
}

void JP_F_0014E9E0(Ctx *c) { /* func_0014E9E0 */
ENTER(0x14e9e0);
wr32(c, (RW(4) + 144), RW(0)); return;
}

void JP_F_0014E9F0(Ctx *c) { /* func_0014E9F0 */
ENTER(0x14e9f0);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(0) + 64);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, RD(0) + RD(0));
wr8(c, (RW(4) + 24), (u8)RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 152), RW(2));
SET64(7, RD(0) + RD(0));
wr32(c, (RW(4) + 156), RW(0));
SET64(8, RD(6) + RD(0));
wr8(c, (RW(4) + 148), (u8)RW(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x14ea30); SET32(4, RW(16) + 48); JP_F_002B3EF0(c);
SET32(4, RW(16) + 48);
SET64(31, 0x14ea3c); SET64(5, RD(0) + RD(0)); JP_F_002B3EE0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_0014EA50(Ctx *c) { /* func_0014EA50 */
ENTER(0x14ea50);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(4) + 48);
SET64(5, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(31, 0x14ea74); SET64(9, RD(0) + RD(0)); JP_F_002B3EF0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0014EA80(Ctx *c) { /* func_0014EA80 */
ENTER(0x14ea80);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(4) + 48);
SET64(5, RD(0) + RD(0));
SET64(7, RD(6) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(31, 0x14eaa4); SET32(9, RW(0) + 128); JP_F_002B3EF0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0014EAB0(Ctx *c) { /* func_0014EAB0 */
ENTER(0x14eab0);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(4) + 48);
SET64(5, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(31, 0x14ead4); SET64(9, RD(0) + RD(0)); JP_F_002B3EF0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0014EAE0(Ctx *c) { /* func_0014EAE0 */
ENTER(0x14eae0);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(4) + 48);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(5) + RD(0));
SET64(31, 0x14eb04); SET64(9, RD(0) + RD(0)); JP_F_002B3EF0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0014EB10(Ctx *c) { /* func_0014EB10 */
ENTER(0x14eb10);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(4) + 48);
SET64(5, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(31, 0x14eb34); SET64(9, RD(0) + RD(0)); JP_F_002B3EF0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0014EB40(Ctx *c) { /* func_0014EB40 */
ENTER(0x14eb40);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 48);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 2);
SET64(7, RD(0) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x14eb64); SET64(9, RD(0) + RD(0)); JP_F_002B3EF0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0014EB70(Ctx *c) { /* func_0014EB70 */
ENTER(0x14eb70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0014EC28; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1328);
SET32(5, RW(5) + -1280);
wr32(c, (RW(17) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(17) + 160);
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x14ebc8);  rt_call(c, t); }
SET32(4, RW(17) + 48);
SET64(31, 0x14ebd4); SET32(5, RW(0) + -1); JP_F_002B3F70(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x14ebe0); SET64(5, RD(0) + RD(0)); JP_F_002B03B0(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_0014EC14; }
SET32(4, RW(17) + 160);
{ int t = RD(4) == RD(0);  if (t) goto L_0014EC10; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 176), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x14ec10);  rt_call(c, t); }
L_0014EC10:;
SET64(2, RD(16) << 48);
L_0014EC14:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_0014EC2C; }
SET64(31, 0x14ec28); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_0014EC28:;
SET64(2, RD(17) + RD(0));
L_0014EC2C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014EC40(Ctx *c) { /* func_0014EC40 */
ENTER(0x14ec40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(5) + RD(0));
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_0014EC70; }
SET32(4, RW(17) + 160);
SET64(31, 0x14ec70); wr32(c, (RW(17) + 12), RW(4)); JP_F_00141C80(c);
L_0014EC70:;
SET64(31, 0x14ec78); SET64(4, RD(17) + RD(0)); JP_F_002B0400(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -1328);
SET32(7, RW(7) + -1280);
wr32(c, (RW(17) + 8), RW(2));
SET32(5, RW(17) + 160);
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(17) + 48);
wr32(c, (RW(6) + 16), RW(7));
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(6) + 20), RW(5));
wr8(c, (RW(17) + 25), (u8)RW(3));
wr32(c, (RW(17) + 32), RW(0));
wr32(c, (RW(17) + 36), RW(0));
wr32(c, (RW(17) + 40), RW(0));
SET64(31, 0x14ecc8); wr32(c, (RW(17) + 44), RW(2)); JP_F_002B3FD0(c);
wr32(c, (RW(17) + 144), RW(0));
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_0014ECF0(Ctx *c) { /* func_0014ECF0 */
ENTER(0x14ecf0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -160);
SET32(4, RW(4) + RW(25)); { JP_F_0014E9E0(c); return; }
}

void JP_F_0014ED00(Ctx *c) { /* func_0014ED00 */
ENTER(0x14ed00);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -160);
SET32(4, RW(4) + RW(25)); { JP_F_0014EB70(c); return; }
}

void JP_F_0014ED10(Ctx *c) { /* func_0014ED10 */
ENTER(0x14ed10);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -208);
SET32(4, RW(4) + RW(25)); { JP_F_0014DBC0(c); return; }
}

void JP_F_0014ED20(Ctx *c) { /* func_0014ED20 */
ENTER(0x14ed20);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -208);
SET32(4, RW(4) + RW(25)); { JP_F_0014E760(c); return; }
}

void JP_F_0014ED30(Ctx *c) { /* func_0014ED30 */
ENTER(0x14ed30);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -356);
SET32(4, RW(4) + RW(25)); { JP_F_0014DCE0(c); return; }
}

void JP_F_0014ED40(Ctx *c) { /* func_0014ED40 */
ENTER(0x14ed40);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -356);
SET32(4, RW(4) + RW(25)); { JP_F_0014DD40(c); return; }
}

void JP_F_0014ED50(Ctx *c) { /* func_0014ED50 */
ENTER(0x14ed50);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -356);
SET32(4, RW(4) + RW(25)); { JP_F_00145530(c); return; }
}

void JP_F_0014ED60(Ctx *c) { /* func_0014ED60 */
ENTER(0x14ed60);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -356);
SET32(4, RW(4) + RW(25)); { JP_F_0014E490(c); return; }
}

void JP_F_0014ED70(Ctx *c) { /* func_0014ED70 */
ENTER(0x14ed70);
SET32(4, RW(4) + -208); { JP_F_0014E490(c); return; }
}

void JP_F_0014ED80(Ctx *c) { /* func_0014ED80 */
ENTER(0x14ed80);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -420);
SET32(4, RW(4) + RW(25)); { JP_F_0014D330(c); return; }
}

void JP_F_0014ED90(Ctx *c) { /* func_0014ED90 */
ENTER(0x14ed90);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -420);
SET32(4, RW(4) + RW(25)); { JP_F_0014D390(c); return; }
}

void JP_F_0014EDA0(Ctx *c) { /* func_0014EDA0 */
ENTER(0x14eda0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -420);
SET32(4, RW(4) + RW(25)); { JP_F_0014DBD0(c); return; }
}

void JP_F_0014EDB0(Ctx *c) { /* func_0014EDB0 */
ENTER(0x14edb0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -420);
SET32(4, RW(4) + RW(25)); { JP_F_0014DA40(c); return; }
}

void JP_F_0014EDC0(Ctx *c) { /* func_0014EDC0 */
ENTER(0x14edc0);
SET32(4, RW(4) + -208); { JP_F_0014D5B0(c); return; }
}

void JP_F_0014EDD0(Ctx *c) { /* func_0014EDD0 */
ENTER(0x14edd0);
SET32(4, RW(4) + -12); { JP_F_002A9960(c); return; }
}

void JP_F_0014EDE0(Ctx *c) { /* func_0014EDE0 */
ENTER(0x14ede0);
SET32(4, RW(4) + -12); { JP_F_002A99B0(c); return; }
}

void JP_F_0014EDF0(Ctx *c) { /* func_0014EDF0 */
ENTER(0x14edf0);
SET32(4, RW(4) + -12); { JP_F_002A9A00(c); return; }
}

void JP_F_0014EE00(Ctx *c) { /* func_0014EE00 */
ENTER(0x14ee00);
SET32(4, RW(4) + -208); { JP_F_0014D510(c); return; }
}

void JP_F_0014EE10(Ctx *c) { /* func_0014EE10 */
ENTER(0x14ee10);
SET32(4, RW(4) + -208); { JP_F_0014DA40(c); return; }
}

void JP_F_0014EE20(Ctx *c) { /* func_0014EE20 */
ENTER(0x14ee20);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -272);
SET32(4, RW(4) + RW(25)); { JP_F_0014CAB0(c); return; }
}

void JP_F_0014EE30(Ctx *c) { /* func_0014EE30 */
ENTER(0x14ee30);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -272);
SET32(4, RW(4) + RW(25)); { JP_F_0014CB10(c); return; }
}

void JP_F_0014EE40(Ctx *c) { /* func_0014EE40 */
ENTER(0x14ee40);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -272);
SET32(4, RW(4) + RW(25)); { JP_F_0014D000(c); return; }
}

void JP_F_0014EE50(Ctx *c) { /* func_0014EE50 */
ENTER(0x14ee50);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -272);
SET32(4, RW(4) + RW(25)); { JP_F_0014D0B0(c); return; }
}

void JP_F_0014EE60(Ctx *c) { /* func_0014EE60 */
ENTER(0x14ee60);
SET32(4, RW(4) + -160); { JP_F_0014CCE0(c); return; }
}

void JP_F_0014EE70(Ctx *c) { /* func_0014EE70 */
ENTER(0x14ee70);
SET32(4, RW(4) + -12); { JP_F_002AA4F0(c); return; }
}

void JP_F_0014EE80(Ctx *c) { /* func_0014EE80 */
ENTER(0x14ee80);
SET32(4, RW(4) + -12); { JP_F_002AA510(c); return; }
}

void JP_F_0014EE90(Ctx *c) { /* func_0014EE90 */
ENTER(0x14ee90);
SET32(4, RW(4) + -12); { JP_F_002AA530(c); return; }
}

void JP_F_0014EEA0(Ctx *c) { /* func_0014EEA0 */
ENTER(0x14eea0);
SET32(4, RW(4) + -160); { JP_F_0014CC80(c); return; }
}

void JP_F_0014EEB0(Ctx *c) { /* func_0014EEB0 */
ENTER(0x14eeb0);
SET32(4, RW(4) + -160); { JP_F_0014D0B0(c); return; }
}

void JP_F_0014EEC0(Ctx *c) { /* func_0014EEC0 */
ENTER(0x14eec0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -196);
SET32(4, RW(4) + RW(25)); { JP_F_0014BDB0(c); return; }
}

void JP_F_0014EED0(Ctx *c) { /* func_0014EED0 */
ENTER(0x14eed0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -196);
SET32(4, RW(4) + RW(25)); { JP_F_0014BE10(c); return; }
}

void JP_F_0014EEE0(Ctx *c) { /* func_0014EEE0 */
ENTER(0x14eee0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -196);
SET32(4, RW(4) + RW(25)); { JP_F_0014C560(c); return; }
}

void JP_F_0014EEF0(Ctx *c) { /* func_0014EEF0 */
ENTER(0x14eef0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -196);
SET32(4, RW(4) + RW(25)); { JP_F_0014C740(c); return; }
}

void JP_F_0014EF00(Ctx *c) { /* func_0014EF00 */
ENTER(0x14ef00);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -188);
SET32(4, RW(4) + RW(25)); { JP_F_0014B380(c); return; }
}

