#include "r5900.h"
#include "functab.h"

void JP_F_001F04E0(Ctx *c) { /* func_001F04E0 */
ENTER(0x1f04e0);
SET32(4, RW(4) + -1168); { JP_F_0018A970(c); return; }
}

void JP_F_001F04F0(Ctx *c) { /* func_001F04F0 */
ENTER(0x1f04f0);
SET32(4, RW(4) + -1216); { JP_F_0018A970(c); return; }
}

void JP_F_001F0500(Ctx *c) { /* func_001F0500 */
ENTER(0x1f0500);
SET32(4, RW(4) + -96); { JP_F_001EC710(c); return; }
}

void JP_F_001F0510(Ctx *c) { /* func_001F0510 */
ENTER(0x1f0510);
SET32(4, RW(4) + -144); { JP_F_001EF090(c); return; }
}

void JP_F_001F0520(Ctx *c) { /* func_001F0520 */
ENTER(0x1f0520);
SET32(4, RW(4) + -144); { JP_F_001EC710(c); return; }
}

void JP_F_001F0530(Ctx *c) { /* func_001F0530 */
ENTER(0x1f0530);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -1416);
SET32(4, RW(4) + RW(25)); { JP_F_001EEE30(c); return; }
}

void JP_F_001F0540(Ctx *c) { /* func_001F0540 */
ENTER(0x1f0540);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -1416);
SET32(4, RW(4) + RW(25)); { JP_F_001EEE40(c); return; }
}

void JP_F_001F0550(Ctx *c) { /* func_001F0550 */
ENTER(0x1f0550);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -1416);
SET32(4, RW(4) + RW(25)); { JP_F_001EEE50(c); return; }
}

void JP_F_001F0560(Ctx *c) { /* func_001F0560 */
ENTER(0x1f0560);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -1416);
SET32(4, RW(4) + RW(25)); { JP_F_001EEEA0(c); return; }
}

void JP_F_001F0570(Ctx *c) { /* func_001F0570 */
ENTER(0x1f0570);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -1416);
SET32(4, RW(4) + RW(25)); { JP_F_001EF090(c); return; }
}

void JP_F_001F0580(Ctx *c) { /* func_001F0580 */
ENTER(0x1f0580);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -1416);
SET32(4, RW(4) + RW(25)); { JP_F_001EC710(c); return; }
}

void JP_F_001F0590(Ctx *c) { /* func_001F0590 */
ENTER(0x1f0590);
SET32(4, RW(4) + -480); { JP_F_001EDE50(c); return; }
}

void JP_F_001F05A0(Ctx *c) { /* func_001F05A0 */
ENTER(0x1f05a0);
SET32(4, RW(4) + -480); { JP_F_001EC710(c); return; }
}

void JP_F_001F05B0(Ctx *c) { /* func_001F05B0 */
ENTER(0x1f05b0);
SET32(4, RW(4) + -896); { JP_F_001EC710(c); return; }
}

void JP_F_001F05C0(Ctx *c) { /* func_001F05C0 */
ENTER(0x1f05c0);
SET32(4, RW(4) + -192); { JP_F_001EF090(c); return; }
}

void JP_F_001F05D0(Ctx *c) { /* func_001F05D0 */
ENTER(0x1f05d0);
SET32(4, RW(4) + -192); { JP_F_001EC710(c); return; }
}

void JP_F_001F05E0(Ctx *c) { /* func_001F05E0 */
ENTER(0x1f05e0);
SET32(4, RW(4) + -1104); { JP_F_001EC710(c); return; }
}

void JP_F_001F05F0(Ctx *c) { /* func_001F05F0 */
ENTER(0x1f05f0);
SET32(4, RW(4) + -1168); { JP_F_001EF090(c); return; }
}

void JP_F_001F0600(Ctx *c) { /* func_001F0600 */
ENTER(0x1f0600);
SET32(4, RW(4) + -1168); { JP_F_001EC710(c); return; }
}

void JP_F_001F0610(Ctx *c) { /* func_001F0610 */
ENTER(0x1f0610);
SET32(4, RW(4) + -1216); { JP_F_001EF090(c); return; }
}

void JP_F_001F0620(Ctx *c) { /* func_001F0620 */
ENTER(0x1f0620);
SET32(4, RW(4) + -1216); { JP_F_001EC710(c); return; }
}

void JP_F_001F0630(Ctx *c) { /* func_001F0630 */
ENTER(0x1f0630);
 return;
}

void JP_F_001F0640(Ctx *c) { /* func_001F0640 */
ENTER(0x1f0640);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + -1928); return;
}

void JP_F_001F0650(Ctx *c) { /* func_001F0650 */
ENTER(0x1f0650);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001F06F4; }
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
wr32(c, (RW(17) + 112), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 140), RW(0)); goto L_001F06B4; }
SET64(31, 0x1f06b0); SET32(4, RW(2) + -16); JP_F_00100430(c);
wr32(c, (RW(17) + 140), RW(0));
L_001F06B4:;
SET32(4, RW(17) + 76);
wr16(c, (RW(17) + 136), (u16)RW(0));
SET64(31, 0x1f06c4); wr16(c, (RW(17) + 138), (u16)RW(0)); JP_F_00139AB0(c);
SET32(4, RW(17) + 76);
SET64(31, 0x1f06d0); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1f06dc); SET64(5, RD(0) + RD(0)); JP_F_001B7980(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001F06F8; }
SET64(31, 0x1f06f4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001F06F4:;
SET64(2, RD(17) + RD(0));
L_001F06F8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F0710(Ctx *c) { /* func_001F0710 */
ENTER(0x1f0710);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x427c0000);
wr64(c, (RW(29) + 0), RD(31));
c->f[1].u = RW(2);
c->f[3].u = rd32(c, (RW(6) + 0));
c->f[2].u = rd32(c, (RW(4) + 144));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[2].f = fpu_div(F(3), F(2));
c->f[1].f = fpu(c->facc + F(1) * F(2));
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x42fe0000); goto L_001F0754; }
c->f[1].u = c->f[0].u;
SET64(2, (s64)(s32)0x42fe0000);
L_001F0754:;
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_001F0770; }
c->f[1].u = c->f[0].u;
c->f[0].u = (u32)fpu_cvtw(F(1));
L_001F0770:;
SET64(7, (s32)c->f[0].u);
SET64(31, 0x1f077c); SET32(6, RW(0) + 127); JP_F_001F0AB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001F0790(Ctx *c) { /* func_001F0790 */
ENTER(0x1f0790);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x427c0000);
wr64(c, (RW(29) + 0), RD(31));
c->f[1].u = RW(2);
c->f[3].u = rd32(c, (RW(6) + 0));
c->f[2].u = rd32(c, (RW(4) + 144));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[2].f = fpu_div(F(3), F(2));
c->f[1].f = fpu(c->facc + F(1) * F(2));
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(2, (s64)(s32)0x42fe0000); goto L_001F07D4; }
c->f[1].u = c->f[0].u;
SET64(2, (s64)(s32)0x42fe0000);
L_001F07D4:;
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
if (c->fcc) { c->f[0].u = (u32)fpu_cvtw(F(1)); goto L_001F07F0; }
c->f[1].u = c->f[0].u;
c->f[0].u = (u32)fpu_cvtw(F(1));
L_001F07F0:;
SET64(7, (s32)c->f[0].u);
SET64(31, 0x1f07fc); SET32(6, RW(0) + 127); JP_F_001B7420(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001F0810(Ctx *c) { /* func_001F0810 */
ENTER(0x1f0810);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f0824); SET64(16, RD(4) + RD(0)); JP_F_001B7250(c);
SET64(3, (s32)rd32(c, (RW(16) + 140)));
{ int t = RD(3) == RD(0);  if (t) goto L_001F0878; }
SET64(3, rd16(c, (RW(16) + 136)));
{ int t = RSD(3) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_001F0878; }
SET32(4, RW(0) + -1);
SET64(3, RD(7) & 0xffff);
L_001F0844:;
SET64(5, (s32)rd32(c, (RW(16) + 140)));
SET32(6, RW(3) << 4);
SET32(3, RW(7) + 1);
SET64(7, RD(3) & 0xffff);
SET32(3, RW(5) + RW(6));
wr32(c, (RW(3) + 0), RW(4));
wr32(c, (RW(3) + 4), RW(4));
wr32(c, (RW(3) + 8), RW(0));
wr8(c, (RW(3) + 12), (u8)RW(0));
SET64(3, rd16(c, (RW(16) + 136)));
SET64(3, RSD(7) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, RD(7) & 0xffff); { POLL(); goto L_001F0844; } }
L_001F0878:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F0890(Ctx *c) { /* func_001F0890 */
ENTER(0x1f0890);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x1f08b4); SET64(16, RD(4) + RD(0)); JP_F_001B70C0(c);
SET64(2, rd16(c, (RW(17) + 136)));
wr16(c, (RW(16) + 136), (u16)RW(2));
SET64(17, RD(0) + RD(0));
wr16(c, (RW(16) + 138), (u16)RW(0));
SET64(18, rd16(c, (RW(16) + 136)));
SET32(2, RW(18) << 4);
SET64(31, 0x1f08d4); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001F0900; }
SET64(5, (s64)(s32)0x1f0000);
SET64(8, RD(18) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + 2352);
SET64(6, RD(0) + RD(0));
SET64(31, 0x1f08fc); SET32(7, RW(0) + 16); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_001F0900:;
SET64(31, 0x1f0908); wr32(c, (RW(16) + 140), RW(19)); JP_F_0013AA20(c);
SET32(5, RW(16) + 76);
SET64(31, 0x1f0914); SET64(4, RD(2) + RD(0)); JP_F_0013A4F0(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001F0930(Ctx *c) { /* func_001F0930 */
ENTER(0x1f0930);
SET32(3, RW(0) + -1);
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 0), RW(3));
wr32(c, (RW(4) + 4), RW(3));
wr32(c, (RW(4) + 8), RW(0));
wr8(c, (RW(4) + 12), (u8)RW(0)); return;
}

void JP_F_001F0950(Ctx *c) { /* func_001F0950 */
ENTER(0x1f0950);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 136)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001F0A28; }
SET64(3, (s32)rd32(c, (RW(18) + 140)));
L_001F0978:;
SET64(4, RD(17) & 0xffff);
SET32(16, RW(4) << 4);
SET32(4, RW(3) + RW(16));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, ~(RD(3) | RD(0)));
SET64(3, RD(3) < (u64)(s64)1);
{ int t = RD(3) != RD(0);  if (t) goto L_001F0A10; }
SET64(3, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(3) == RD(0); SET64(5, RD(0) + (s64)1); if (t) goto L_001F09B8; }
SET32(3, RW(3) + -1);
{ int t = RD(3) == RD(0); wr32(c, (RW(4) + 8), RW(3)); if (t) goto L_001F09B8; }
SET64(5, RD(0) + RD(0));
L_001F09B8:;
{ int t = RD(5) == RD(0);  if (t) goto L_001F0A10; }
SET64(3, (s32)rd32(c, (RW(18) + 140)));
SET32(5, RW(3) + RW(16));
SET64(3, rd8(c, (RW(5) + 12)));
{ int t = RD(3) != RD(0); SET32(4, RW(5) + 12); if (t) goto L_001F0A08; }
SET64(5, (s32)rd32(c, (RW(5) + 4)));
SET64(4, RD(18) + RD(0));
SET64(31, 0x1f09e4); SET32(6, RW(0) + 1); JP_F_001B72C0(c);
SET64(4, (s32)rd32(c, (RW(18) + 140)));
SET32(3, RW(0) + -1);
SET32(4, RW(4) + RW(16));
wr32(c, (RW(4) + 0), RW(3));
wr32(c, (RW(4) + 4), RW(3));
wr32(c, (RW(4) + 8), RW(0));
wr8(c, (RW(4) + 12), (u8)RW(0)); goto L_001F0A10;
L_001F0A08:;
wr8(c, (RW(4) + 0), (u8)RW(0));
L_001F0A10:;
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(18) + 136)));
SET64(3, RSD(17) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 140))); { POLL(); goto L_001F0978; } }
L_001F0A28:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001F0A40(Ctx *c) { /* func_001F0A40 */
ENTER(0x1f0a40);
SET64(8, rd16(c, (RW(4) + 136)));
SET64(2, RD(0) + RD(0));
{ int t = RSD(8) <= 0; SET64(9, RD(0) + RD(0)); if (t) goto L_001F0AA0; }
SET64(7, (s32)rd32(c, (RW(4) + 140)));
SET64(3, RD(9) & 0xffff);
L_001F0A58:;
SET32(3, RW(3) << 4);
SET32(6, RW(7) + RW(3));
SET64(3, (s32)rd32(c, (RW(6) + 0)));
if (RD(5) != RD(3)) { SET32(3, RW(9) + 1); goto L_001F0A8C; }
SET64(3, rd8(c, (RW(6) + 12)));
{ int t = RD(3) != RD(0); SET32(4, RW(6) + 12); if (t) goto L_001F0A88; }
SET32(3, RW(0) + 1);
SET64(2, RD(0) + (s64)1);
wr8(c, (RW(4) + 0), (u8)RW(3)); goto L_001F0AA0;
L_001F0A88:;
SET32(3, RW(9) + 1);
L_001F0A8C:;
SET64(9, RD(3) & 0xffff);
SET64(3, RSD(9) < RSD(8));
if (RD(3) != RD(0)) { SET64(3, RD(9) & 0xffff); { POLL(); goto L_001F0A58; } }
L_001F0AA0:;
 return;
}

void JP_F_001F0AB0(Ctx *c) { /* func_001F0AB0 */
ENTER(0x1f0ab0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 138)));
SET64(2, rd16(c, (RW(4) + 136)));
SET64(1, RSD(3) < RSD(2));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_001F0BFC; }
SET64(5, rd16(c, (RW(19) + 136)));
SET32(16, RW(0) + -1);
{ int t = RSD(5) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_001F0B30; }
SET64(4, (s32)rd32(c, (RW(19) + 140)));
SET64(3, RD(8) & 0xffff);
L_001F0AFC:;
SET32(2, RW(3) << 4);
SET32(2, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
if (RD(2) != RD(16)) { SET64(2, rd16(c, (RW(19) + 136))); goto L_001F0B18; }
SET64(16, RD(3) + RD(0)); goto L_001F0B30;
L_001F0B18:;
SET32(3, RW(8) + 1);
SET64(8, RD(3) & 0xffff);
SET64(2, RSD(8) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, RD(8) & 0xffff); { POLL(); goto L_001F0AFC; } }
L_001F0B30:;
SET32(9, RW(0) + -1);
if (RD(16) == RD(9)) { SET64(2, RD(17) + RD(0)); goto L_001F0C00; }
{ int t = RSD(5) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_001F0B80; }
SET64(4, (s32)rd32(c, (RW(19) + 140)));
SET64(3, RD(8) & 0xffff);
L_001F0B4C:;
SET32(2, RW(3) << 4);
SET32(2, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
if (RD(18) != RD(2)) { SET64(2, rd16(c, (RW(19) + 136))); goto L_001F0B68; }
SET64(9, RD(3) + RD(0)); goto L_001F0B80;
L_001F0B68:;
SET32(3, RW(8) + 1);
SET64(8, RD(3) & 0xffff);
SET64(2, RSD(8) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, RD(8) & 0xffff); { POLL(); goto L_001F0B4C; } }
L_001F0B80:;
SET32(2, RW(0) + -1);
if (RD(9) == RD(2)) { SET64(5, RD(18) & 0xff); goto L_001F0BA0; }
SET64(2, (s32)rd32(c, (RW(19) + 140)));
SET32(3, RW(9) << 4);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 4))); goto L_001F0C00;
L_001F0BA0:;
SET64(31, 0x1f0ba8); SET64(4, RD(19) + RD(0)); JP_F_001B7420(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0);  if (t) goto L_001F0BFC; }
SET64(2, (s32)rd32(c, (RW(19) + 140)));
SET32(7, RW(16) << 4);
SET32(6, RW(0) + 2);
SET32(3, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET64(5, RD(17) + RD(0));
SET32(2, RW(2) + RW(7));
wr32(c, (RW(2) + 0), RW(18));
SET64(2, (s32)rd32(c, (RW(19) + 140)));
SET32(2, RW(2) + RW(7));
wr32(c, (RW(2) + 4), RW(17));
SET64(2, (s32)rd32(c, (RW(19) + 140)));
SET32(2, RW(2) + RW(7));
wr32(c, (RW(2) + 8), RW(6));
SET64(2, (s32)rd32(c, (RW(19) + 140)));
SET32(2, RW(2) + RW(7));
SET64(31, 0x1f0bfc); wr8(c, (RW(2) + 12), (u8)RW(3)); JP_F_001B7050(c);
L_001F0BFC:;
SET64(2, RD(17) + RD(0));
L_001F0C00:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001F0C20(Ctx *c) { /* func_001F0C20 */
ENTER(0x1f0c20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 140)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001F0C40; }
SET64(31, 0x1f0c40); SET32(4, RW(2) + -16); JP_F_00100430(c);
L_001F0C40:;
wr32(c, (RW(16) + 140), RW(0));
SET32(4, RW(16) + 76);
wr16(c, (RW(16) + 136), (u16)RW(0));
SET64(31, 0x1f0c54); wr16(c, (RW(16) + 138), (u16)RW(0)); JP_F_00139AB0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F0C70(Ctx *c) { /* func_001F0C70 */
ENTER(0x1f0c70);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f0c94); SET64(16, RD(5) + RD(0)); JP_F_001B7940(c);
wr16(c, (RW(19) + 136), (u16)RW(16));
wr16(c, (RW(19) + 138), (u16)RW(0));
SET64(16, RD(0) + RD(0));
SET64(17, rd16(c, (RW(19) + 136)));
SET32(2, RW(17) << 4);
SET64(31, 0x1f0cb0); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001F0CDC; }
SET64(5, (s64)(s32)0x1f0000);
SET64(8, RD(17) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + 2352);
SET64(6, RD(0) + RD(0));
SET64(31, 0x1f0cd8); SET32(7, RW(0) + 16); JP_F_00102580(c);
SET64(18, RD(2) + RD(0));
L_001F0CDC:;
SET64(31, 0x1f0ce4); wr32(c, (RW(19) + 140), RW(18)); JP_F_0013AA20(c);
SET32(5, RW(19) + 76);
SET64(31, 0x1f0cf0); SET64(4, RD(2) + RD(0)); JP_F_0013A4F0(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001F0D10(Ctx *c) { /* func_001F0D10 */
ENTER(0x1f0d10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f0d24); SET64(16, RD(4) + RD(0)); JP_F_001B7A60(c);
SET32(4, RW(16) + 76);
SET64(31, 0x1f0d30); SET32(5, RW(0) + 2560); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31968);
SET32(3, RW(3) + -31948);
wr32(c, (RW(16) + 72), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 132), RW(3));
SET32(2, RW(2) + -31940);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 96), RW(2));
SET32(3, RW(3) + -31928);
wr32(c, (RW(16) + 112), RW(3));
SET64(2, RD(16) + RD(0));
wr16(c, (RW(16) + 136), (u16)RW(0));
wr16(c, (RW(16) + 138), (u16)RW(0));
wr32(c, (RW(16) + 140), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F0D80(Ctx *c) { /* func_001F0D80 */
ENTER(0x1f0d80);
SET32(4, RW(4) + -80); { JP_F_001F0650(c); return; }
}

void JP_F_001F0D90(Ctx *c) { /* func_001F0D90 */
ENTER(0x1f0d90);
SET32(4, RW(4) + -100); { JP_F_001F0650(c); return; }
}

void JP_F_001F0DA0(Ctx *c) { /* func_001F0DA0 */
ENTER(0x1f0da0);
SET32(4, RW(4) + -76); { JP_F_001F0950(c); return; }
}

void JP_F_001F0DB0(Ctx *c) { /* func_001F0DB0 */
ENTER(0x1f0db0);
SET32(4, RW(4) + -76); { JP_F_001F0630(c); return; }
}

void JP_F_001F0DC0(Ctx *c) { /* func_001F0DC0 */
ENTER(0x1f0dc0);
SET32(4, RW(4) + -76); { JP_F_001F0640(c); return; }
}

void JP_F_001F0DD0(Ctx *c) { /* func_001F0DD0 */
ENTER(0x1f0dd0);
SET32(4, RW(4) + -76); { JP_F_001F0650(c); return; }
}

void JP_F_001F0DE0(Ctx *c) { /* func_001F0DE0 */
ENTER(0x1f0de0);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 256) & ~15u, &c->r[3]); return;
}

void JP_F_001F0DF0(Ctx *c) { /* func_001F0DF0 */
ENTER(0x1f0df0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1f0e1c); SET64(17, RD(5) + RD(0)); rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_001F0EA4; }
SET64(25, (s32)rd32(c, (RW(18) + 176)));
SET32(4, RW(18) + 32);
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1f0e38); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 472)));
SET32(4, RW(18) + 464);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1f0e4c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 568)));
SET32(4, RW(18) + 560);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1f0e60); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 448)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001F0EA0; }
SET64(19, RD(0) + RD(0));
L_001F0E70:;
SET64(2, (s32)rd32(c, (RW(18) + 452)));
SET32(4, RW(2) + RW(19));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1f0e88); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 448)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0); SET32(19, RW(19) + 128); if (t) { POLL(); goto L_001F0E70; } }
L_001F0EA0:;
SET64(31, rd64(c, (RW(29) + 64)));
L_001F0EA4:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001F0EC0(Ctx *c) { /* func_001F0EC0 */
ENTER(0x1f0ec0);
SET32(29, RW(29) + -16);
SET64(4, (s32)rd32(c, (RW(4) + 452)));
{ int t = RD(4) == RD(0);  if (t) goto L_001F0EF4; }
SET32(3, RW(5) << 7);
SET32(3, RW(4) + RW(3));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 12), c->f[12].u);
wr32(c, (RW(29) + 0), RW(4));
wr32(c, (RW(29) + 4), RW(4));
wr32(c, (RW(29) + 8), RW(4));
rd128(c, (RW(29) + 0) & ~15u, &c->r[4]);
wr128(c, (RW(3) + 64) & ~15u, &c->r[4]);
L_001F0EF4:;
SET32(29, RW(29) + 16); return;
}

void JP_F_001F0F00(Ctx *c) { /* func_001F0F00 */
ENTER(0x1f0f00);
SET64(4, (s32)rd32(c, (RW(4) + 452)));
{ int t = RD(4) == RD(0);  if (t) goto L_001F0F18; }
SET32(3, RW(6) << 7);
SET32(3, RW(4) + RW(3));
wr8(c, (RW(3) + 56), (u8)RW(5));
L_001F0F18:;
 return;
}

void JP_F_001F0F20(Ctx *c) { /* func_001F0F20 */
ENTER(0x1f0f20);
SET64(4, (s32)rd32(c, (RW(4) + 452)));
{ int t = RD(4) == RD(0);  if (t) goto L_001F0F38; }
SET32(3, RW(6) << 7);
SET32(3, RW(4) + RW(3));
wr32(c, (RW(3) + 80), RW(5));
L_001F0F38:;
 return;
}

void JP_F_001F0F40(Ctx *c) { /* func_001F0F40 */
ENTER(0x1f0f40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 452)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_001F0F64; }
SET32(2, RW(6) << 7);
SET64(31, 0x1f0f60); SET32(4, RW(3) + RW(2)); JP_F_002A55C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_001F0F64:;
SET32(29, RW(29) + 16); return;
}

void JP_F_001F0F70(Ctx *c) { /* func_001F0F70 */
ENTER(0x1f0f70);
SET64(4, (s32)rd32(c, (RW(4) + 452)));
{ int t = RD(4) == RD(0);  if (t) goto L_001F0F9C; }
SET32(3, RW(6) << 7);
SET32(4, RW(4) + RW(3));
{ int t = RD(5) == RD(0); wr32(c, (RW(4) + 60), RW(5)); if (t) goto L_001F0F98; }
SET64(3, (s32)rd32(c, (RW(5) + 16)));
wr32(c, (RW(4) + 96), RW(3)); goto L_001F0F9C;
L_001F0F98:;
wr32(c, (RW(4) + 96), RW(0));
L_001F0F9C:;
 return;
}

void JP_F_001F0FB0(Ctx *c) { /* func_001F0FB0 */
ENTER(0x1f0fb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 608)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 612))); goto L_001F0FE8; }
{ int t = RD(16) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_001F0FD8; }
SET32(5, RW(5) + 32);
L_001F0FD8:;
SET64(31, 0x1f0fe0);  JP_F_00243880(c);
wr32(c, (RW(16) + 608), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 612)));
L_001F0FE8:;
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_001F100C; }
{ int t = RD(16) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_001F0FFC; }
SET32(5, RW(16) + 32);
L_001F0FFC:;
SET64(31, 0x1f1004);  JP_F_002A6160(c);
wr32(c, (RW(16) + 612), RW(0));
SET64(4, RD(16) + RD(0));
L_001F100C:;
SET64(31, 0x1f1014);  JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001F1038; }
SET32(2, RW(0) + 2);
SET64(31, 0x1f102c); wr32(c, (RW(16) + 0), RW(2)); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(16) + 12), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
L_001F1038:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F1050(Ctx *c) { /* func_001F1050 */
ENTER(0x1f1050);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 608)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001F11AC; }
SET64(3, (s32)rd32(c, (RW(16) + 612)));
{ int t = RD(3) == RD(0);  if (t) goto L_001F1084; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_001F11B0;
L_001F1084:;
{ int t = RD(6) == RD(0);  if (t) goto L_001F1094; }
wr32(c, (RW(16) + 608), RW(6)); goto L_001F10A0;
L_001F1094:;
SET64(6, (s64)(s32)0x540000);
SET32(6, RW(6) + 1264);
wr32(c, (RW(16) + 608), RW(6));
L_001F10A0:;
{ int t = RD(16) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_001F10AC; }
SET32(5, RW(16) + 32);
L_001F10AC:;
SET64(31, 0x1f10b4); SET64(4, (s32)rd32(c, (RW(16) + 608))); JP_F_002438D0(c);
{ int t = RD(17) == RD(0);  if (t) goto L_001F10C4; }
wr32(c, (RW(16) + 612), RW(17)); goto L_001F10D4;
L_001F10C4:;
SET64(31, 0x1f10cc);  JP_F_00139590(c);
SET64(17, (s32)rd32(c, (RW(2) + 12)));
wr32(c, (RW(16) + 612), RW(17));
L_001F10D4:;
SET32(3, RW(0) + 2);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(3)) { SET64(17, RD(16) + RD(0)); goto L_001F1174; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(17, RD(16) + RD(0)); goto L_001F113C; }
if (RD(4) == RD(0)) { SET64(17, RD(16) + RD(0)); goto L_001F1104; }
wr8(c, (RW(16) + 8), (u8)RW(0)); goto L_001F11A4;
SET64(17, RD(16) + RD(0));
L_001F1104:;
if (RD(16) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 612))); goto L_001F1114; }
SET32(17, RW(16) + 32);
SET64(2, (s32)rd32(c, (RW(16) + 612)));
L_001F1114:;
SET64(4, (s32)rd32(c, (RW(2) + 208)));
SET64(31, 0x1f1120); SET32(5, RW(0) + 1); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1f1130); SET64(5, RD(17) + RD(0)); JP_F_002ADFE0(c);
 goto L_001F11A0;
SET64(17, RD(16) + RD(0));
L_001F113C:;
if (RD(16) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 612))); goto L_001F114C; }
SET32(17, RW(16) + 32);
SET64(2, (s32)rd32(c, (RW(16) + 612)));
L_001F114C:;
SET64(4, (s32)rd32(c, (RW(2) + 208)));
SET64(31, 0x1f1158); SET32(5, RW(0) + 2); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1f1168); SET64(5, RD(17) + RD(0)); JP_F_002ADFE0(c);
 goto L_001F11A0;
SET64(17, RD(16) + RD(0));
L_001F1174:;
if (RD(16) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 612))); goto L_001F1184; }
SET32(17, RW(16) + 32);
SET64(2, (s32)rd32(c, (RW(16) + 612)));
L_001F1184:;
SET64(4, (s32)rd32(c, (RW(2) + 208)));
SET64(31, 0x1f1190); SET64(5, RD(0) + RD(0)); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x1f11a0); SET64(5, RD(17) + RD(0)); JP_F_002ADFE0(c);
L_001F11A0:;
wr8(c, (RW(16) + 8), (u8)RW(0));
L_001F11A4:;
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(3));
L_001F11AC:;
SET64(31, rd64(c, (RW(29) + 32)));
L_001F11B0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F11C0(Ctx *c) { /* func_001F11C0 */
ENTER(0x1f11c0);
SET32(29, RW(29) + -32);
SET64(5, (s64)(s32)0x1f0000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 452)));
SET64(31, 0x1f11e0); SET32(5, RW(5) + 4624); JP_F_001022C0(c);
wr32(c, (RW(16) + 452), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 448), RW(0));
wr32(c, (RW(16) + 608), RW(0));
SET64(31, 0x1f11f8); wr32(c, (RW(16) + 612), RW(0)); JP_F_00141BF0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F1210(Ctx *c) { /* func_001F1210 */
ENTER(0x1f1210);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001F1278; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31744);
wr32(c, (RW(17) + 0), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1f1248);  rt_call(c, t); }
SET32(4, RW(17) + 64);
SET64(31, 0x1f1254); SET32(5, RW(0) + -1); JP_F_002B5710(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1f1260); SET64(5, RD(0) + RD(0)); JP_F_002A5820(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001F127C; }
SET64(31, 0x1f1278); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001F1278:;
SET64(2, RD(17) + RD(0));
L_001F127C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F1290(Ctx *c) { /* func_001F1290 */
ENTER(0x1f1290);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(2, RW(19) << 7);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(18, RD(7) + RD(0));
wr32(c, (RW(4) + 448), RW(19));
SET64(16, RD(0) + RD(0));
SET64(31, 0x1f12d4); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001F1304; }
SET64(5, (s64)(s32)0x1f0000);
SET64(6, (s64)(s32)0x1f0000);
SET32(16, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET32(5, RW(5) + 5056);
SET32(6, RW(6) + 4624);
SET32(7, RW(0) + 128);
SET64(31, 0x1f1300); SET64(8, RD(19) + RD(0)); JP_F_00102580(c);
SET64(17, RD(2) + RD(0));
L_001F1304:;
wr32(c, (RW(21) + 452), RW(17));
{ int t = RSD(19) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001F1378; }
SET64(16, RD(0) + RD(0));
L_001F1314:;
SET64(4, (s32)rd32(c, (RW(21) + 452)));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(3));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 116), RW(3));
SET64(5, RD(20) + RD(0));
SET32(4, RW(4) + RW(16));
wr32(c, (RW(29) + 120), RW(3));
wr8(c, (RW(4) + 56), (u8)RW(2));
SET64(6, RD(18) + RD(0));
wr32(c, (RW(29) + 124), RW(3));
SET32(2, RW(4) + 64);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr16(c, (RW(4) + 48), (u16)RW(0));
wr128(c, (RW(4) + 64) & ~15u, &c->r[3]);
wr32(c, (RW(4) + 60), RW(0));
wr32(c, (RW(4) + 80), RW(0));
wr32(c, (RW(4) + 96), RW(0));
SET64(31, 0x1f1364); wr32(c, (RW(4) + 32), RW(2)); JP_F_001F1470(c);
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(19));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 128); if (t) { POLL(); goto L_001F1314; } }
L_001F1378:;
SET64(31, 0x1f1380); SET32(4, RW(21) + 464); JP_F_001EC500(c);
SET32(4, RW(21) + 560);
SET64(31, 0x1f138c); SET32(5, RW(0) + 120); JP_F_001EC230(c);
wr32(c, (RW(21) + 608), RW(0));
wr32(c, (RW(21) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_001F13C0(Ctx *c) { /* func_001F13C0 */
ENTER(0x1f13c0);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f13d8); SET64(16, RD(4) + RD(0)); JP_F_002A58A0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(16) + 64);
SET32(2, RW(2) + -31744);
wr32(c, (RW(16) + 0), RW(2));
wr16(c, (RW(16) + 48), (u16)RW(0));
wr32(c, (RW(16) + 52), RW(0));
wr8(c, (RW(16) + 56), (u8)RW(0));
SET64(31, 0x1f13fc); wr32(c, (RW(16) + 60), RW(0)); JP_F_002B5760(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F1410(Ctx *c) { /* func_001F1410 */
ENTER(0x1f1410);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd8(c, (RW(4) + 56)));
{ int t = RD(3) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001F1458; }
SET64(4, (s32)rd32(c, (RW(17) + 60)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001F1450; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1f144c);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
L_001F1450:;
SET64(31, 0x1f1458); SET64(5, RD(16) + RD(0)); JP_F_002A5540(c);
L_001F1458:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F1470(Ctx *c) { /* func_001F1470 */
ENTER(0x1f1470);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
SET64(30, RD(4) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(23, rd16(c, (RW(5) + 264)));
wr8(c, (RW(29) + 187), (u8)RW(6));
wr32(c, (RW(29) + 188), RW(5));
SET64(6, RD(0) + RD(0));
{ int t = RSD(23) <= 0; wr16(c, (RW(4) + 48), (u16)RW(0)); if (t) goto L_001F1510; }
SET64(5, RD(0) + RD(0));
L_001F14BC:;
SET64(3, (s32)rd32(c, (RW(29) + 188)));
SET64(3, (s32)rd32(c, (RW(3) + 272)));
SET32(3, RW(3) + RW(5));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_001F1500; }
SET64(3, rd16(c, (RW(4) + 48)));
SET64(3, RD(3) & 0x27);
{ int t = RD(3) == RD(0);  if (t) goto L_001F14F0; }
SET64(3, rd8(c, (RW(29) + 187)));
{ int t = RD(3) != RD(0);  if (t) goto L_001F1500; }
L_001F14F0:;
SET64(3, rd16(c, (RW(4) + 52)));
SET64(4, rd16(c, (RW(30) + 48)));
SET32(3, RW(4) + RW(3));
wr16(c, (RW(30) + 48), (u16)RW(3));
L_001F1500:;
SET32(6, RW(6) + 1);
SET64(3, RSD(6) < RSD(23));
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_001F14BC; } }
L_001F1510:;
SET64(17, rd16(c, (RW(30) + 48)));
if (RD(17) == RD(0)) { SET64(31, rd64(c, (RW(29) + 144))); goto L_001F16B0; }
SET32(2, RW(17) << 3);
SET64(16, RD(0) + RD(0));
SET32(2, RW(2) - RW(17));
SET32(2, RW(2) << 2);
SET64(31, 0x1f1534); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_001F1564; }
SET64(5, (s64)(s32)0x140000);
SET64(6, (s64)(s32)0x140000);
SET64(8, RD(17) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + 6768);
SET32(6, RW(6) + 6864);
SET64(31, 0x1f1560); SET32(7, RW(0) + 28); JP_F_00102580(c);
SET64(18, RD(2) + RD(0));
L_001F1564:;
wr32(c, (RW(30) + 52), RW(18));
{ int t = RSD(23) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_001F1660; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_001F1578:;
SET64(2, (s32)rd32(c, (RW(29) + 188)));
SET64(2, (s32)rd32(c, (RW(2) + 272)));
SET32(2, RW(2) + RW(18));
SET64(22, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(22) == RD(0);  if (t) goto L_001F1650; }
SET64(2, rd16(c, (RW(22) + 48)));
SET64(2, RD(2) & 0x27);
{ int t = RD(2) == RD(0);  if (t) goto L_001F15B0; }
SET64(2, rd8(c, (RW(29) + 187)));
{ int t = RD(2) != RD(0);  if (t) goto L_001F1650; }
L_001F15B0:;
SET64(2, rd16(c, (RW(22) + 52)));
{ int t = RSD(2) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_001F1650; }
SET64(16, RD(0) + RD(0));
L_001F15C0:;
SET64(3, (s32)rd32(c, (RW(30) + 52)));
SET64(2, (s64)(s32)0x10000000);
SET64(4, (s32)rd32(c, (RW(22) + 56)));
SET64(5, RD(2) | 0x1);
SET32(19, RW(3) + RW(17));
SET32(2, RW(4) + RW(16));
wr32(c, (RW(29) + 160), RW(2));
SET64(31, 0x1f15e4); SET64(4, RD(19) + RD(0)); JP_F_00141980(c);
SET64(5, (s32)rd32(c, (RW(29) + 160)));
SET64(2, (s64)(s32)0x10000000);
SET64(4, RD(19) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x1f15fc); SET64(7, RD(2) | 0x1); JP_F_00140410(c);
SET64(31, 0x1f1604); SET64(4, RD(19) + RD(0)); JP_F_001416E0(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(4, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x1f1618); SET32(5, RW(0) + 128); rt_call(c, t); }
SET64(31, 0x1f1620); SET64(4, RD(19) + RD(0)); JP_F_001416E0(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(4, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f1634); SET32(5, RW(0) + 64); rt_call(c, t); }
SET64(2, rd16(c, (RW(22) + 52)));
SET32(20, RW(20) + 1);
SET32(17, RW(17) + 28);
SET64(2, RSD(20) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 28); if (t) { POLL(); goto L_001F15C0; } }
L_001F1650:;
SET32(21, RW(21) + 1);
SET64(2, RSD(21) < RSD(23));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_001F1578; } }
L_001F1660:;
SET64(2, rd16(c, (RW(30) + 48)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001F16A0; }
SET64(17, RD(0) + RD(0));
L_001F1670:;
SET64(2, (s32)rd32(c, (RW(30) + 52)));
SET64(31, 0x1f167c); SET32(4, RW(2) + RW(17)); JP_F_001416E0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f1688); SET64(4, RD(30) + RD(0)); JP_F_002A5740(c);
SET64(2, rd16(c, (RW(30) + 48)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 28); if (t) { POLL(); goto L_001F1670; } }
L_001F16A0:;
SET64(4, RD(30) + RD(0));
SET64(31, 0x1f16ac); SET64(5, RD(0) | 0x8002); JP_F_002A55C0(c);
SET64(31, rd64(c, (RW(29) + 144)));
L_001F16B0:;
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

void JP_F_001F16E0(Ctx *c) { /* func_001F16E0 */
ENTER(0x1f16e0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 52)));
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_001F1740; }
SET64(2, rd16(c, (RW(17) + 48)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001F1740; }
SET64(18, RD(0) + RD(0));
L_001F1710:;
SET64(2, (s32)rd32(c, (RW(17) + 52)));
SET64(31, 0x1f171c); SET32(4, RW(2) + RW(18)); JP_F_001416E0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f1728); SET64(4, RD(17) + RD(0)); JP_F_002A56F0(c);
SET64(2, rd16(c, (RW(17) + 48)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 28); if (t) { POLL(); goto L_001F1710; } }
L_001F1740:;
wr32(c, (RW(17) + 60), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 52)));
SET64(5, (s64)(s32)0x140000);
SET64(31, 0x1f1754); SET32(5, RW(5) + 6864); JP_F_001022C0(c);
wr32(c, (RW(17) + 52), RW(0));
wr16(c, (RW(17) + 48), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001F1780(Ctx *c) { /* func_001F1780 */
ENTER(0x1f1780);
SET32(29, RW(29) + -48);
SET32(7, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f1798); SET64(16, RD(4) + RD(0)); JP_F_001F1E00(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 44), RW(3));
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 512) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F17D0(Ctx *c) { /* func_001F17D0 */
ENTER(0x1f17d0);
SET32(29, RW(29) + -48);
SET32(7, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 912), RW(5));
SET64(6, (s32)rd32(c, (RW(5) + 900)));
SET64(31, 0x1f17f0); SET64(16, RD(4) + RD(0)); JP_F_001F1A50(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 44), RW(3));
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 512) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F1820(Ctx *c) { /* func_001F1820 */
ENTER(0x1f1820);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 256)));
SET64(3, rd8(c, (RW(3) + 8)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_001F1864; }
SET64(3, (s32)rd32(c, (RW(4) + 912)));
rd128(c, (RW(3) + 352) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 528) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 368) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 544) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 384) & ~15u, &c->r[2]);
wr128(c, (RW(4) + 560) & ~15u, &c->r[2]);
rd128(c, (RW(3) + 400) & ~15u, &c->r[2]);
SET64(31, 0x1f1860); wr128(c, (RW(4) + 576) & ~15u, &c->r[2]); JP_F_00152630(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_001F1864:;
SET32(29, RW(29) + 16); return;
}

void JP_F_001F1870(Ctx *c) { /* func_001F1870 */
ENTER(0x1f1870);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 256)));
SET64(31, 0x1f18a8); SET64(16, RD(7) + RD(0)); JP_F_00141B90(c);
SET64(31, 0x1f18b0); SET64(4, RD(19) + RD(0)); JP_F_001400A0(c);
SET64(19, rd16(c, (RW(2) + 2)));
SET64(20, RD(2) + RD(0));
SET32(2, RW(0) + 1);
wr16(c, (RW(18) + 264), (u16)RW(2));
SET64(2, rd16(c, (RW(18) + 264)));
SET64(31, 0x1f18cc); SET32(4, RW(2) << 2); JP_F_00100530(c);
wr32(c, (RW(18) + 272), RW(2));
SET64(31, 0x1f18d8); SET32(4, RW(0) + 288); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_001F18E8; }
SET64(31, 0x1f18e8); SET64(4, RD(21) + RD(0)); JP_F_00154FD0(c);
L_001F18E8:;
SET64(2, (s32)rd32(c, (RW(18) + 272)));
wr32(c, (RW(2) + 0), RW(21));
SET64(2, (s32)rd32(c, (RW(18) + 272)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1f1900); SET64(5, RD(19) + RD(0)); JP_F_00154F10(c);
SET64(19, RD(19) & 0xffff);
{ int t = RSD(19) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_001F1958; }
SET64(4, RD(21) & 0xffff);
L_001F1910:;
SET64(5, (s32)rd32(c, (RW(18) + 272)));
SET32(3, RW(4) << 1);
SET64(2, (s32)rd32(c, (RW(20) + 8)));
SET32(3, RW(3) + RW(4));
SET64(6, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(3) << 4);
SET64(7, RD(0) + RD(0));
SET64(8, RD(17) + RD(0));
SET64(9, RD(16) + RD(0));
SET64(31, 0x1f1940); SET32(5, RW(2) + RW(3)); JP_F_001547E0(c);
SET32(2, RW(21) + 1);
SET64(21, RD(2) & 0xffff);
SET64(2, RSD(21) < RSD(19));
if (RD(2) != RD(0)) { SET64(4, RD(21) & 0xffff); { POLL(); goto L_001F1910; } }
L_001F1958:;
SET64(2, (s32)rd32(c, (RW(18) + 272)));
SET32(6, RW(0) + 1);
SET64(5, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(9, RD(0) + RD(0));
wr16(c, (RW(2) + 48), (u16)RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1f1988); SET32(4, RW(2) + 144); JP_F_002B3EF0(c);
SET64(2, (s32)rd32(c, (RW(18) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f19a0); SET32(4, RW(2) + 144); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 272)));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(16, RW(2) + 240);
SET64(31, 0x1f19c4); SET64(4, RD(16) + RD(0)); JP_F_002B42A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x1f19d4); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(5, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f19e4); SET64(6, RD(5) + RD(0)); JP_F_002B4230(c);
SET64(2, (s32)rd32(c, (RW(18) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 248)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f19fc); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 272)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1f1a0c); SET32(5, RW(0) + 216); JP_F_001546C0(c);
SET64(2, (s32)rd32(c, (RW(18) + 272)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1f1a1c); SET64(5, RD(0) | 0x8000); JP_F_002A55C0(c);
SET64(31, rd64(c, (RW(29) + 96)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_001F1A50(Ctx *c) { /* func_001F1A50 */
ENTER(0x1f1a50);
SET32(29, RW(29) + -240);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(23, RD(4) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 256)));
wr32(c, (RW(29) + 236), RW(5));
SET64(31, 0x1f1a94); wr32(c, (RW(29) + 232), RW(6)); JP_F_00141B90(c);
SET64(2, (s32)rd32(c, (RW(29) + 236)));
SET64(16, RD(0) + RD(0));
SET64(3, rd16(c, (RW(2) + 264)));
{ int t = RSD(3) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_001F1AD0; }
SET64(4, (s32)rd32(c, (RW(2) + 272)));
L_001F1AAC:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_001F1AC0; }
SET64(2, rd16(c, (RW(2) + 52)));
SET32(16, RW(16) + RW(2));
L_001F1AC0:;
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < RSD(3));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_001F1AAC; } }
L_001F1AD0:;
SET32(2, RW(0) + 216);
wr32(c, (RW(29) + 192), RW(2));
SET64(2, RD(17) & 0x1);
{ int t = RD(2) == RD(0); wr32(c, (RW(29) + 208), RW(0)); if (t) goto L_001F1AF0; }
SET64(2, RD(0) + RD(0));
SET64(2, RD(2) | 0x1);
wr32(c, (RW(29) + 208), RW(2));
L_001F1AF0:;
SET64(2, RD(17) & 0x10);
if (RD(2) == RD(0)) { SET64(2, RD(17) & 0x100); goto L_001F1B1C; }
SET64(2, (s32)rd32(c, (RW(29) + 208)));
SET32(3, RW(0) + -17);
SET64(2, RD(2) | 0x10);
wr32(c, (RW(29) + 208), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 192)));
SET64(2, RD(2) & RD(3));
wr32(c, (RW(29) + 192), RW(2));
SET64(2, RD(17) & 0x100);
L_001F1B1C:;
if (RD(2) == RD(0)) { SET64(2, RD(17) & 0x1000); goto L_001F1B44; }
SET64(2, (s32)rd32(c, (RW(29) + 208)));
SET32(3, RW(0) + -9);
SET64(2, RD(2) | 0x100);
wr32(c, (RW(29) + 208), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 192)));
SET64(2, RD(2) & RD(3));
wr32(c, (RW(29) + 192), RW(2));
SET64(2, RD(17) & 0x1000);
L_001F1B44:;
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x10000); goto L_001F1B5C; }
SET64(2, (s32)rd32(c, (RW(29) + 208)));
SET64(2, RD(2) | 0x1000);
wr32(c, (RW(29) + 208), RW(2));
SET64(2, (s64)(s32)0x10000);
L_001F1B5C:;
SET64(2, RD(17) & RD(2));
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x100000); goto L_001F1B7C; }
SET64(2, (s32)rd32(c, (RW(29) + 192)));
SET32(3, RW(0) + -65);
SET64(2, RD(2) & RD(3));
wr32(c, (RW(29) + 192), RW(2));
SET64(2, (s64)(s32)0x100000);
L_001F1B7C:;
SET64(2, RD(17) & RD(2));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_001F1B9C; }
SET64(2, (s32)rd32(c, (RW(29) + 192)));
SET32(3, RW(0) + -129);
SET64(2, RD(2) & RD(3));
wr32(c, (RW(29) + 192), RW(2));
SET32(2, RW(0) + 1);
L_001F1B9C:;
wr16(c, (RW(23) + 264), (u16)RW(2));
SET64(2, rd16(c, (RW(23) + 264)));
SET64(31, 0x1f1bac); SET32(4, RW(2) << 2); JP_F_00100530(c);
wr32(c, (RW(23) + 272), RW(2));
SET64(31, 0x1f1bb8); SET32(4, RW(0) + 288); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001F1BC8; }
SET64(31, 0x1f1bc8); SET64(4, RD(17) + RD(0)); JP_F_00154FD0(c);
L_001F1BC8:;
SET64(2, (s32)rd32(c, (RW(23) + 272)));
wr32(c, (RW(2) + 0), RW(17));
SET64(2, (s32)rd32(c, (RW(23) + 272)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1f1be0); SET64(5, RD(16) & 0xffff); JP_F_00154F10(c);
SET64(2, (s32)rd32(c, (RW(29) + 236)));
SET64(21, RD(0) + RD(0));
SET64(2, rd16(c, (RW(2) + 264)));
{ int t = RSD(2) <= 0; wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); if (t) goto L_001F1CB8; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_001F1BFC:;
SET64(2, (s32)rd32(c, (RW(29) + 236)));
SET64(2, (s32)rd32(c, (RW(2) + 272)));
SET32(2, RW(2) + RW(18));
SET64(22, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(22) == RD(0);  if (t) goto L_001F1CA0; }
SET64(2, rd16(c, (RW(22) + 52)));
{ int t = RSD(2) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_001F1CA0; }
SET64(16, RD(0) + RD(0));
L_001F1C28:;
SET64(4, (s32)rd32(c, (RW(22) + 56)));
SET64(3, (s32)rd32(c, (RW(23) + 272)));
SET64(2, (s64)(s32)0x110000);
SET32(30, RW(4) + RW(16));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(30) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 56)));
SET64(3, RD(3) & RD(2));
SET64(2, (s32)rd32(c, (RW(29) + 208)));
SET32(19, RW(4) + RW(17));
SET64(4, RD(19) + RD(0));
SET64(2, RD(3) | RD(2));
wr32(c, (RW(29) + 176), RW(2));
SET64(31, 0x1f1c64); SET64(5, RD(2) + RD(0)); JP_F_00141980(c);
SET64(7, (s32)rd32(c, (RW(29) + 176)));
SET64(5, RD(30) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 232)));
SET64(31, 0x1f1c78); SET64(4, RD(19) + RD(0)); JP_F_00140410(c);
SET64(2, (s32)rd32(c, (RW(23) + 272)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1f1c88); SET64(4, RD(19) + RD(0)); JP_F_00141890(c);
SET64(2, rd16(c, (RW(22) + 52)));
SET32(20, RW(20) + 1);
SET32(17, RW(17) + 28);
SET64(2, RSD(20) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 28); if (t) { POLL(); goto L_001F1C28; } }
L_001F1CA0:;
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
SET32(21, RW(21) + 1);
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_001F1BFC; } }
L_001F1CB8:;
SET64(2, (s32)rd32(c, (RW(23) + 272)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1f1cc8); SET64(5, (s32)rd32(c, (RW(29) + 192))); JP_F_001546C0(c);
SET64(2, (s32)rd32(c, (RW(23) + 272)));
SET32(6, RW(0) + 1);
SET64(5, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
wr16(c, (RW(2) + 48), (u16)RW(0));
SET64(2, (s32)rd32(c, (RW(23) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1f1cf8); SET32(4, RW(2) + 144); JP_F_002B3EF0(c);
SET64(2, (s32)rd32(c, (RW(23) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f1d10); SET32(4, RW(2) + 144); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(23) + 272)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1);
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(16, RW(2) + 240);
SET64(31, 0x1f1d34); SET64(4, RD(16) + RD(0)); JP_F_002B42A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x1f1d44); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(5, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f1d54); SET64(6, RD(5) + RD(0)); JP_F_002B4230(c);
SET64(2, (s32)rd32(c, (RW(23) + 272)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 248)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f1d6c); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(23) + 272)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1f1d7c); SET64(5, RD(0) | 0x8000); JP_F_002A55C0(c);
SET64(31, rd64(c, (RW(29) + 144)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 128) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[23]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 240); return;
}

void JP_F_001F1DB0(Ctx *c) { /* func_001F1DB0 */
ENTER(0x1f1db0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1f1dc0); wr32(c, (RW(4) + 912), RW(0)); JP_F_00152920(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001F1DD0(Ctx *c) { /* func_001F1DD0 */
ENTER(0x1f1dd0);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 912), RW(5));
SET64(31, 0x1f1de8); SET64(6, (s32)rd32(c, (RW(5) + 900))); JP_F_001F1A50(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001F1E00(Ctx *c) { /* func_001F1E00 */
ENTER(0x1f1e00);
SET32(29, RW(29) + -6912);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(6) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(19, RW(29) + 192);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(4) + 912), RW(20));
SET64(16, RD(7) + RD(0));
SET64(21, (s32)rd32(c, (RW(6) + 900)));
L_001F1E40:;
SET64(31, 0x1f1e48); SET64(4, RD(19) + RD(0)); JP_F_002AF080(c);
SET32(19, RW(19) + 64);
SET32(2, RW(29) + 6912);
SET64(2, RD(19) < RD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001F1E40; } }
SET64(2, rd16(c, (RW(20) + 898)));
SET64(1, RSD(2) < (s64)105);
if (RD(1) == RD(0)) { SET32(2, RW(0) + 105); goto L_001F1E6C; }
L_001F1E6C:;
SET64(20, RD(2) & 0xffff);
{ int t = RSD(20) <= 0; SET64(22, RD(0) + RD(0)); if (t) goto L_001F1ED0; }
L_001F1E78:;
SET64(19, RD(22) & 0xffff);
SET32(4, RW(29) + 128);
SET32(2, RW(19) << 3);
SET32(2, RW(2) + RW(19));
SET32(2, RW(2) << 5);
SET64(31, 0x1f1e94); SET32(5, RW(21) + RW(2)); JP_F_00142A30(c);
rd128(c, (RW(29) + 128) & ~15u, &c->r[6]);
SET32(2, RW(19) << 6);
rd128(c, (RW(29) + 144) & ~15u, &c->r[4]);
SET32(2, RW(2) + RW(29));
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
SET32(5, RW(2) + 192);
wr128(c, (RW(2) + 192) & ~15u, &c->r[6]);
wr128(c, (RW(5) + 16) & ~15u, &c->r[4]);
SET32(2, RW(22) + 1);
wr128(c, (RW(5) + 32) & ~15u, &c->r[3]);
SET64(22, RD(2) & 0xffff);
rd128(c, (RW(29) + 176) & ~15u, &c->r[3]);
SET64(2, RSD(22) < RSD(20));
{ int t = RD(2) != RD(0); wr128(c, (RW(5) + 48) & ~15u, &c->r[3]); if (t) { POLL(); goto L_001F1E78; } }
L_001F1ED0:;
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(21) + RD(0));
SET64(8, RD(16) + RD(0));
SET64(31, 0x1f1ee8); SET32(7, RW(29) + 192); JP_F_001F1870(c);
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 6912); return;
}

void JP_F_001F1F10(Ctx *c) { /* func_001F1F10 */
ENTER(0x1f1f10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001F2030; }
SET64(2, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31712);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(7, RW(7) + -31544);
SET32(5, RW(5) + -31640);
SET32(3, RW(3) + -31608);
SET32(2, RW(17) + 916);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 432), RW(5));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f1f80);  rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_001F1FE8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31504);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(7, RW(7) + -31344);
SET32(5, RW(5) + -31432);
SET32(3, RW(3) + -31400);
SET32(2, RW(17) + 916);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 432), RW(5));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f1fdc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x1f1fe8); SET64(5, RD(0) + RD(0)); JP_F_00151D80(c);
L_001F1FE8:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_001F201C; }
SET32(4, RW(17) + 916);
{ int t = RD(4) == RD(0);  if (t) goto L_001F2018; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 932), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f2018);  rt_call(c, t); }
L_001F2018:;
SET64(2, RD(16) << 48);
L_001F201C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001F2034; }
SET64(31, 0x1f2030); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001F2030:;
SET64(2, RD(17) + RD(0));
L_001F2034:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F2050(Ctx *c) { /* func_001F2050 */
ENTER(0x1f2050);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001F2188; }
SET64(2, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31504);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(7, RW(7) + -31344);
SET32(5, RW(5) + -31432);
SET32(3, RW(3) + -31400);
SET32(2, RW(17) + 916);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 432), RW(5));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f20c0);  rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_001F2140; }
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
{ u32 t = RW(25); SET64(31, 0x1f211c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 704);
SET64(31, 0x1f2128); SET64(5, RD(0) + RD(0)); JP_F_001531B0(c);
SET32(4, RW(17) + 288);
SET64(31, 0x1f2134); SET64(5, RD(0) + RD(0)); JP_F_002A5490(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x1f2140); SET64(5, RD(0) + RD(0)); JP_F_00150CE0(c);
L_001F2140:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_001F2174; }
SET32(4, RW(17) + 916);
{ int t = RD(4) == RD(0);  if (t) goto L_001F2170; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 932), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f2170);  rt_call(c, t); }
L_001F2170:;
SET64(2, RD(16) << 48);
L_001F2174:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001F218C; }
SET64(31, 0x1f2188); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001F2188:;
SET64(2, RD(17) + RD(0));
L_001F218C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F21A0(Ctx *c) { /* func_001F21A0 */
ENTER(0x1f21a0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -916);
SET32(4, RW(4) + RW(25)); { JP_F_001F2050(c); return; }
}

void JP_F_001F21B0(Ctx *c) { /* func_001F21B0 */
ENTER(0x1f21b0);
SET32(4, RW(4) + -288); { JP_F_001F2050(c); return; }
}

void JP_F_001F21C0(Ctx *c) { /* func_001F21C0 */
ENTER(0x1f21c0);
SET32(4, RW(4) + -704); { JP_F_001F2050(c); return; }
}

void JP_F_001F21D0(Ctx *c) { /* func_001F21D0 */
ENTER(0x1f21d0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -916);
SET32(4, RW(4) + RW(25)); { JP_F_00151D30(c); return; }
}

void JP_F_001F21E0(Ctx *c) { /* func_001F21E0 */
ENTER(0x1f21e0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -916);
SET32(4, RW(4) + RW(25)); { JP_F_001F1DB0(c); return; }
}

void JP_F_001F21F0(Ctx *c) { /* func_001F21F0 */
ENTER(0x1f21f0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -916);
SET32(4, RW(4) + RW(25)); { JP_F_001F1F10(c); return; }
}

void JP_F_001F2200(Ctx *c) { /* func_001F2200 */
ENTER(0x1f2200);
SET32(4, RW(4) + -288); { JP_F_001F1820(c); return; }
}

void JP_F_001F2210(Ctx *c) { /* func_001F2210 */
ENTER(0x1f2210);
SET32(4, RW(4) + -288); { JP_F_001F1F10(c); return; }
}

void JP_F_001F2220(Ctx *c) { /* func_001F2220 */
ENTER(0x1f2220);
SET32(4, RW(4) + -704); { JP_F_001F1F10(c); return; }
}

void JP_F_001F2230(Ctx *c) { /* func_001F2230 */
ENTER(0x1f2230);
SET32(4, RW(4) + -32); { JP_F_001F0DF0(c); return; }
}

void JP_F_001F2240(Ctx *c) { /* func_001F2240 */
ENTER(0x1f2240);
SET32(4, RW(4) + -32); { JP_F_0016C470(c); return; }
}

void JP_F_001F2250(Ctx *c) { /* func_001F2250 */
ENTER(0x1f2250);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001F22B0; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31296);
SET32(3, RW(3) + -31288);
wr32(c, (RW(17) + 56), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -31276);
SET64(31, 0x1f2298); wr32(c, (RW(17) + 36), RW(2)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001F22B4; }
SET64(31, 0x1f22b0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001F22B0:;
SET64(2, RD(17) + RD(0));
L_001F22B4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F22D0(Ctx *c) { /* func_001F22D0 */
ENTER(0x1f22d0);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + -1920); return;
}

void JP_F_001F22E0(Ctx *c) { /* func_001F22E0 */
ENTER(0x1f22e0);
 return;
}

void JP_F_001F22F0(Ctx *c) { /* func_001F22F0 */
ENTER(0x1f22f0);
SET32(29, RW(29) + -256);
SET32(3, RW(0) + 1027);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(4) + 0)));
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 148))); goto L_001F27EC; }
SET32(3, RW(0) + 1026);
if (RD(4) == RD(3)) { SET64(5, (s32)rd32(c, (RW(16) + 148))); goto L_001F2744; }
SET32(3, RW(0) + 1025);
if (RD(4) == RD(3)) { SET64(3, rd16(c, (RW(16) + 0))); goto L_001F2738; }
SET32(3, RW(0) + 1024);
if (RD(4) == RD(3)) { SET32(17, RW(29) + 68); goto L_001F254C; }
SET32(3, RW(0) + 513);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 60))); goto L_001F2418; }
SET32(3, RW(0) + 512);
if (RD(4) == RD(3)) { SET32(4, RW(0) + 356); goto L_001F2384; }
{ int t = RD(4) == RD(0);  if (t) goto L_001F2360; }
SET64(31, rd64(c, (RW(29) + 48))); goto L_001F2858;
L_001F2360:;
SET64(31, 0x1f2368);  JP_F_0017F070(c);
wr32(c, (RW(16) + 112), RW(2));
SET32(4, RW(0) + 1);
wr16(c, (RW(16) + 116), (u16)RW(0));
SET32(3, RW(0) + 512);
wr16(c, (RW(16) + 118), (u16)RW(4));
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001F2854;
L_001F2384:;
SET64(31, 0x1f238c);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001F239C; }
SET64(31, 0x1f239c); SET64(4, RD(17) + RD(0)); JP_F_00179820(c);
L_001F239C:;
wr32(c, (RW(16) + 60), RW(17));
SET32(2, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(16) + 100)));
SET64(3, RD(3) & 0x1);
if (RD(3) != RD(2)) { SET64(5, (s32)rd32(c, (RW(16) + 112))); goto L_001F23B8; }
SET64(5, (s32)rd32(c, (RW(16) + 132)));
L_001F23B8:;
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(6, (s16)rd16(c, (RW(16) + 116))); goto L_001F23C8; }
SET64(6, (s16)rd16(c, (RW(16) + 136)));
L_001F23C8:;
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(7, (s16)rd16(c, (RW(16) + 118))); goto L_001F23D8; }
SET64(7, (s16)rd16(c, (RW(16) + 138)));
L_001F23D8:;
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(8, (s32)rd32(c, (RW(16) + 124))); goto L_001F23E8; }
SET64(8, (s32)rd32(c, (RW(16) + 144)));
L_001F23E8:;
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x1f23fc);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 60)));
SET64(31, 0x1f2408); SET64(4, RD(16) + RD(0)); JP_F_0013A470(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
L_001F2418:;
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(4) != RD(3);  if (t) goto L_001F2854; }
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 216);
SET32(2, RW(2) + 6560);
wr32(c, (RW(29) + 208), RW(0));
SET64(31, 0x1f2440); wr32(c, (RW(29) + 212), RW(2)); JP_F_0017CD20(c);
SET64(31, 0x1f2448); SET32(4, RW(29) + 236); JP_F_0017CD20(c);
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(3, (s32)rd32(c, (RW(4) + 60)));
wr32(c, (RW(29) + 208), RW(3));
c->f[3].u = rd32(c, (RW(4) + 68));
c->f[2].u = rd32(c, (RW(4) + 72));
c->f[1].u = rd32(c, (RW(4) + 76));
c->f[0].u = rd32(c, (RW(4) + 80));
wr32(c, (RW(29) + 216), c->f[3].u);
wr32(c, (RW(29) + 220), c->f[2].u);
wr32(c, (RW(29) + 224), c->f[1].u);
wr32(c, (RW(29) + 228), c->f[0].u);
c->f[0].u = rd32(c, (RW(4) + 84));
wr32(c, (RW(29) + 232), c->f[0].u);
c->f[3].u = rd32(c, (RW(4) + 88));
c->f[2].u = rd32(c, (RW(4) + 92));
c->f[1].u = rd32(c, (RW(4) + 96));
c->f[0].u = rd32(c, (RW(4) + 100));
wr32(c, (RW(29) + 236), c->f[3].u);
wr32(c, (RW(29) + 240), c->f[2].u);
wr32(c, (RW(29) + 244), c->f[1].u);
wr32(c, (RW(29) + 248), c->f[0].u);
c->f[0].u = rd32(c, (RW(4) + 104));
wr32(c, (RW(29) + 252), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(16) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 60), RW(0)); goto L_001F24C4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1f24c0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 60), RW(0));
L_001F24C4:;
SET32(3, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(29) + 208)));
SET64(4, RD(4) & 0x1);
if (RD(4) != RD(3)) { SET64(4, RD(16) + RD(0)); goto L_001F253C; }
SET64(4, (s32)rd32(c, (RW(29) + 208)));
SET32(3, RW(0) + 1024);
wr32(c, (RW(16) + 100), RW(4));
c->f[3].u = rd32(c, (RW(29) + 216));
c->f[2].u = rd32(c, (RW(29) + 220));
c->f[1].u = rd32(c, (RW(29) + 224));
c->f[0].u = rd32(c, (RW(29) + 228));
wr32(c, (RW(16) + 108), c->f[3].u);
wr32(c, (RW(16) + 112), c->f[2].u);
wr32(c, (RW(16) + 116), c->f[1].u);
wr32(c, (RW(16) + 120), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 232));
wr32(c, (RW(16) + 124), c->f[0].u);
c->f[3].u = rd32(c, (RW(29) + 236));
c->f[2].u = rd32(c, (RW(29) + 240));
c->f[1].u = rd32(c, (RW(29) + 244));
c->f[0].u = rd32(c, (RW(29) + 248));
wr32(c, (RW(16) + 128), c->f[3].u);
wr32(c, (RW(16) + 132), c->f[2].u);
wr32(c, (RW(16) + 136), c->f[1].u);
wr32(c, (RW(16) + 140), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 252));
wr32(c, (RW(16) + 144), c->f[0].u);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001F2854;
L_001F253C:;
SET64(31, 0x1f2544);  JP_F_00139AB0(c);
 goto L_001F2854;
L_001F254C:;
c->f[12].u = RW(0);
SET64(4, RD(17) + RD(0));
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
SET64(31, 0x1f2584); c->f[15].u = c->f[12].u; JP_F_0013C6B0(c);
SET32(17, RW(17) + 52);
SET32(2, RW(29) + 172);
SET64(2, RD(17) < RD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001F254C; } }
SET64(31, 0x1f25a0); SET32(4, RW(29) + 64); JP_F_00356210(c);
wr16(c, (RW(29) + 64), (u16)RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 172), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 100)));
SET64(3, RD(3) & 0x1);
if (RD(3) != RD(2)) { SET64(2, (s16)rd16(c, (RW(16) + 116))); goto L_001F25C0; }
SET64(2, (s16)rd16(c, (RW(16) + 136)));
L_001F25C0:;
wr16(c, (RW(29) + 68), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 100)));
SET32(2, RW(0) + 1);
SET64(3, RD(3) & 0x1);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(16) + 112))); goto L_001F25DC; }
SET64(2, (s32)rd32(c, (RW(16) + 132)));
L_001F25DC:;
SET64(2, RSD(2) < (s64)3);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001F25EC; }
SET32(2, RW(0) + 1);
L_001F25EC:;
wr16(c, (RW(29) + 70), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 100)));
SET32(2, RW(0) + 1);
SET64(3, RD(3) & 0x1);
if (RD(3) != RD(2)) { SET64(2, rd8(c, (RW(16) + 120))); goto L_001F2608; }
SET64(2, rd8(c, (RW(16) + 140)));
L_001F2608:;
SET64(3, RD(2) & 0xff);
wr16(c, (RW(29) + 76), (u16)RW(3));
SET32(2, RW(0) + 1);
wr16(c, (RW(29) + 72), (u16)RW(0));
wr16(c, (RW(29) + 74), (u16)RW(0));
wr32(c, (RW(29) + 84), RW(0));
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 92), RW(0));
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
wr32(c, (RW(29) + 108), RW(0));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 176), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 100)));
SET64(3, RD(3) & 0x1);
if (RD(3) != RD(2)) { SET64(2, (s16)rd16(c, (RW(16) + 118))); goto L_001F2654; }
SET64(2, (s16)rd16(c, (RW(16) + 138)));
L_001F2654:;
wr16(c, (RW(29) + 120), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 100)));
SET32(2, RW(0) + 1);
SET64(3, RD(3) & 0x1);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(16) + 112))); goto L_001F2670; }
SET64(2, (s32)rd32(c, (RW(16) + 132)));
L_001F2670:;
SET64(2, RD(2) & 0x1);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_001F2680; }
SET64(2, RD(0) + RD(0));
L_001F2680:;
wr16(c, (RW(29) + 122), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 100)));
SET32(2, RW(0) + 1);
SET64(3, RD(3) & 0x1);
if (RD(3) != RD(2)) { SET64(2, rd8(c, (RW(16) + 121))); goto L_001F269C; }
SET64(2, rd8(c, (RW(16) + 141)));
L_001F269C:;
SET64(2, RD(2) & 0xff);
SET32(3, RW(0) + 1);
wr16(c, (RW(29) + 128), (u16)RW(2));
wr16(c, (RW(29) + 124), (u16)RW(3));
wr16(c, (RW(29) + 126), (u16)RW(3));
wr32(c, (RW(29) + 136), RW(0));
wr32(c, (RW(29) + 140), RW(0));
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 156), RW(0));
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 164), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 100)));
SET64(2, RD(2) & 0x1);
if (RD(2) != RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 124))); goto L_001F26E4; }
SET64(2, (s32)rd32(c, (RW(16) + 144)));
L_001F26E4:;
wr16(c, (RW(29) + 180), (u16)RW(2));
SET64(31, 0x1f26f0); SET32(4, RW(29) + 64); JP_F_003561A0(c);
SET32(4, RW(0) + 1952);
SET64(31, 0x1f26fc); wr16(c, (RW(29) + 186), (u16)RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001F270C; }
SET64(31, 0x1f270c); SET64(4, RD(17) + RD(0)); JP_F_002FF230(c);
L_001F270C:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 64);
SET64(31, 0x1f271c); wr32(c, (RW(16) + 148), RW(17)); JP_F_002FEC10(c);
SET64(5, (s32)rd32(c, (RW(16) + 148)));
SET64(31, 0x1f2728); SET64(4, RD(16) + RD(0)); JP_F_0013A470(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 0)));
L_001F2738:;
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
L_001F2744:;
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(5) + 48)));
{ int t = RD(4) != RD(3);  if (t) goto L_001F2854; }
SET64(3, rd8(c, (RW(5) + 1892)));
wr8(c, (RW(16) + 64), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 1893)));
wr8(c, (RW(16) + 65), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 1894)));
wr8(c, (RW(16) + 66), (u8)RW(3));
SET64(3, (s16)rd16(c, (RW(5) + 1896)));
wr16(c, (RW(16) + 68), (u16)RW(3));
SET64(3, rd8(c, (RW(5) + 1898)));
wr8(c, (RW(16) + 70), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 1899)));
wr8(c, (RW(16) + 71), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 1900)));
wr8(c, (RW(16) + 72), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 1901)));
wr8(c, (RW(16) + 73), (u8)RW(3));
c->f[0].u = rd32(c, (RW(5) + 1904));
wr32(c, (RW(16) + 76), c->f[0].u);
SET64(3, rd8(c, (RW(5) + 1908)));
wr8(c, (RW(16) + 80), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 1909)));
wr8(c, (RW(16) + 81), (u8)RW(3));
SET64(3, rd16(c, (RW(5) + 1910)));
wr16(c, (RW(16) + 82), (u16)RW(3));
SET64(3, rd16(c, (RW(5) + 1912)));
wr16(c, (RW(16) + 84), (u16)RW(3));
c->f[0].u = rd32(c, (RW(5) + 1916));
wr32(c, (RW(16) + 88), c->f[0].u);
SET64(3, rd8(c, (RW(5) + 1920)));
wr8(c, (RW(16) + 92), (u8)RW(3));
SET64(4, (s16)rd16(c, (RW(5) + 1922)));
SET64(3, (s16)rd16(c, (RW(5) + 1924)));
wr16(c, (RW(16) + 94), (u16)RW(4));
wr16(c, (RW(16) + 96), (u16)RW(3));
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_001F2854;
L_001F27EC:;
SET64(31, 0x1f27f4);  JP_F_002F7390(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001F2854; }
SET64(4, (s32)rd32(c, (RW(16) + 148)));
if (RD(4) == RD(0)) { SET64(4, RD(0) + RD(0)); goto L_001F281C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x1f2818); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(0) + RD(0));
L_001F281C:;
SET64(31, 0x1f2824); wr32(c, (RW(16) + 148), RW(0)); JP_F_00138B20(c);
SET64(2, rd8(c, (RW(16) + 72)));
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 104))); goto L_001F2840; }
SET64(31, 0x1f2838); SET64(4, RD(16) + RD(0)); JP_F_00139AB0(c);
 goto L_001F2854;
L_001F2840:;
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f284c); SET32(4, RW(16) + 100); rt_call(c, t); }
SET32(3, RW(0) + 512);
wr16(c, (RW(16) + 0), (u16)RW(3));
L_001F2854:;
SET64(31, rd64(c, (RW(29) + 48)));
L_001F2858:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}

void JP_F_001F2870(Ctx *c) { /* func_001F2870 */
ENTER(0x1f2870);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001F2A8C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15824);
SET32(3, RW(3) + 15832);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 15844);
SET64(31, 0x1f28b4); wr32(c, (RW(17) + 36), RW(2)); JP_F_002FEBD0(c);
SET64(5, (s64)(s32)0x160000);
SET32(4, RW(17) + 1356);
SET32(5, RW(5) + -32496);
SET32(6, RW(0) + 20);
SET32(7, RW(0) + 6);
SET64(31, 0x1f28d0); wr32(c, (RW(28) + -29872), RW(0)); JP_F_00102360(c);
SET32(2, RW(17) + 992);
{ int t = RD(2) == RD(0);  if (t) goto L_001F2970; }
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(17) + 1056);
SET32(2, RW(2) + 16416);
{ int t = RD(3) == RD(0); wr32(c, (RW(17) + 1004), RW(2)); if (t) goto L_001F2914; }
if (RD(3) == RD(0)) { SET32(4, RW(17) + 992); goto L_001F2918; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 16448);
{ int t = RD(3) == RD(0); wr32(c, (RW(17) + 1120), RW(2)); if (t) goto L_001F2914; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 656);
wr32(c, (RW(17) + 1120), RW(2));
L_001F2914:;
SET32(4, RW(17) + 992);
L_001F2918:;
{ int t = RD(4) == RD(0);  if (t) goto L_001F2970; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 624);
SET64(31, 0x1f2930); wr32(c, (RW(17) + 1004), RW(2)); JP_F_0015CB10(c);
SET32(4, RW(17) + 992);
{ int t = RD(4) == RD(0);  if (t) goto L_001F2970; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 1004), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1f2958);  rt_call(c, t); }
SET32(2, RW(17) + 992);
{ int t = RD(2) == RD(0);  if (t) goto L_001F2970; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 1004), RW(2));
L_001F2970:;
SET64(5, (s64)(s32)0x1f0000);
SET32(4, RW(17) + 864);
SET32(5, RW(5) + 10928);
SET32(6, RW(0) + 52);
SET64(31, 0x1f2988); SET32(7, RW(0) + 2); JP_F_00102360(c);
SET32(2, RW(17) + 564);
{ int t = RD(2) == RD(0);  if (t) goto L_001F2A14; }
SET32(4, RW(17) + 608);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 564); goto L_001F29D8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 620), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1f29bc);  rt_call(c, t); }
SET32(2, RW(17) + 608);
{ int t = RD(2) == RD(0);  if (t) goto L_001F29D4; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 620), RW(2));
L_001F29D4:;
SET32(4, RW(17) + 564);
L_001F29D8:;
{ int t = RD(4) == RD(0);  if (t) goto L_001F2A14; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 576), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1f29fc);  rt_call(c, t); }
SET32(2, RW(17) + 564);
{ int t = RD(2) == RD(0);  if (t) goto L_001F2A14; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 576), RW(2));
L_001F2A14:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001F2A78; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31120);
SET32(3, RW(3) + -31112);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -31100);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 36), RW(2)); if (t) goto L_001F2A74; }
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
SET64(31, 0x1f2a74); wr32(c, (RW(17) + 36), RW(2)); JP_F_00139F30(c);
L_001F2A74:;
SET64(2, RD(16) << 48);
L_001F2A78:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001F2A90; }
SET64(31, 0x1f2a8c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001F2A8C:;
SET64(2, RD(17) + RD(0));
L_001F2A90:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F2AB0(Ctx *c) { /* func_001F2AB0 */
ENTER(0x1f2ab0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001F2B28; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 15776);
SET64(31, 0x1f2adc); wr32(c, (RW(17) + 12), RW(2)); JP_F_002F0EE0(c);
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001F2B14; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 12), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(25); SET64(31, 0x1f2afc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
{ int t = RD(17) == RD(0);  if (t) goto L_001F2B10; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 12), RW(2));
L_001F2B10:;
SET64(2, RD(16) << 48);
L_001F2B14:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001F2B2C; }
SET64(31, 0x1f2b28); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001F2B28:;
SET64(2, RD(17) + RD(0));
L_001F2B2C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F2B40(Ctx *c) { /* func_001F2B40 */
ENTER(0x1f2b40);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + -1904); return;
}

void JP_F_001F2B50(Ctx *c) { /* func_001F2B50 */
ENTER(0x1f2b50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr16(c, (RW(4) + 0), (u16)RW(5));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x1f2b6c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001F2B80(Ctx *c) { /* func_001F2B80 */
ENTER(0x1f2b80);
wr16(c, (RW(4) + 60), (u16)RW(5)); return;
}

void JP_F_001F2B90(Ctx *c) { /* func_001F2B90 */
ENTER(0x1f2b90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001F2BF0; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31216);
SET32(3, RW(3) + -31208);
wr32(c, (RW(17) + 56), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -31196);
SET64(31, 0x1f2bd8); wr32(c, (RW(17) + 36), RW(2)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001F2BF4; }
SET64(31, 0x1f2bf0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001F2BF0:;
SET64(2, RD(17) + RD(0));
L_001F2BF4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F2C10(Ctx *c) { /* func_001F2C10 */
ENTER(0x1f2c10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr8(c, (RW(4) + 64), (u8)RW(0));
wr8(c, (RW(4) + 65), (u8)RW(0));
wr16(c, (RW(4) + 0), (u16)RW(5));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x1f2c34); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001F2C40(Ctx *c) { /* func_001F2C40 */
ENTER(0x1f2c40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001F2CC8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31120);
SET32(3, RW(3) + -31112);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -31100);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 36), RW(2)); if (t) goto L_001F2CB0; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31216);
SET32(3, RW(3) + -31208);
wr32(c, (RW(17) + 56), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -31196);
SET64(31, 0x1f2cb0); wr32(c, (RW(17) + 36), RW(2)); JP_F_00139F30(c);
L_001F2CB0:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001F2CCC; }
SET64(31, 0x1f2cc8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001F2CC8:;
SET64(2, RD(17) + RD(0));
L_001F2CCC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F2CE0(Ctx *c) { /* func_001F2CE0 */
ENTER(0x1f2ce0);
SET32(4, RW(4) + -4); { JP_F_001F2C40(c); return; }
}

void JP_F_001F2CF0(Ctx *c) { /* func_001F2CF0 */
ENTER(0x1f2cf0);
SET32(4, RW(4) + -24); { JP_F_001F2C40(c); return; }
}

void JP_F_001F2D00(Ctx *c) { /* func_001F2D00 */
ENTER(0x1f2d00);
SET32(4, RW(4) + -4); { JP_F_001F2B90(c); return; }
}

void JP_F_001F2D10(Ctx *c) { /* func_001F2D10 */
ENTER(0x1f2d10);
SET32(4, RW(4) + -24); { JP_F_001F2B90(c); return; }
}

void JP_F_001F2D20(Ctx *c) { /* func_001F2D20 */
ENTER(0x1f2d20);
SET32(4, RW(4) + -4); { JP_F_001F2250(c); return; }
}

void JP_F_001F2D30(Ctx *c) { /* func_001F2D30 */
ENTER(0x1f2d30);
SET32(4, RW(4) + -24); { JP_F_001F2250(c); return; }
}

void JP_F_001F2D40(Ctx *c) { /* func_001F2D40 */
ENTER(0x1f2d40);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, (s32)rd32(c, (RW(4) + 12)));
if (RD(17) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_001F2DE8; }
SET64(16, RD(5) << 48);
SET64(16, RSD(16) >> 48);
if (RSD(16) >= 0) { SET32(18, RW(29) + 64); goto L_001F2D7C; }
SET64(2, RD(0) + RD(0));
 goto L_001F2DE8;
L_001F2D7C:;
SET64(31, 0x1f2d84); SET64(4, RD(18) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(17) + RD(0));
SET32(2, RW(2) + -32);
SET64(4, RD(18) + RD(0));
SET64(31, 0x1f2d9c); wr32(c, (RW(29) + 80), RW(2)); JP_F_00157540(c);
SET64(2, rd16(c, (RW(29) + 96)));
SET64(1, RSD(16) < RSD(2));
if (RD(1) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_001F2DC4; }
SET64(3, (s32)rd32(c, (RW(29) + 84)));
SET32(4, RW(16) << 2);
SET64(2, (s32)rd32(c, (RW(29) + 88)));
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(16, RW(2) + RW(3));
L_001F2DC4:;
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 64);
SET32(2, RW(2) + -32);
SET64(31, 0x1f2dd8); wr32(c, (RW(29) + 80), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 64);
SET64(31, 0x1f2de4); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(2, RD(16) + RD(0));
L_001F2DE8:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_001F2E00(Ctx *c) { /* func_001F2E00 */
ENTER(0x1f2e00);
SET64(3, (s32)rd32(c, (RW(4) + 20)));
{ int t = RSD(3) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_001F2E30; }
SET64(6, (s32)rd32(c, (RW(4) + 24)));
L_001F2E10:;
SET64(2, (s32)rd32(c, (RW(6) + 0)));
{ int t = RD(5) == RD(2);  if (t) goto L_001F2E30; }
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < RSD(3));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 28); if (t) { POLL(); goto L_001F2E10; } }
L_001F2E30:;
SET32(3, RW(7) << 3);
SET32(3, RW(3) - RW(7));
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3)); return;
}

void JP_F_001F2E50(Ctx *c) { /* func_001F2E50 */
ENTER(0x1f2e50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_001F2E74; }
SET64(2, RD(0) + RD(0)); goto L_001F3060;
L_001F2E74:;
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(25, (s32)rd32(c, (RW(4) + 16))); goto L_001F3008; }
SET32(2, RW(0) + 3);
if (RD(3) == RD(2)) { SET64(8, (s32)rd32(c, (RW(16) + 20))); goto L_001F2F78; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_001F2EF0; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(25, (s32)rd32(c, (RW(4) + 16))); goto L_001F2EAC; }
SET32(2, RW(0) + 1); goto L_001F3060;
L_001F2EAC:;
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1f2eb8);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001F305C; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1f2ed4);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x1f2ee0); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00157540(c);
wr32(c, (RW(16) + 20), RW(0));
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 0), RW(2)); goto L_001F305C;
L_001F2EF0:;
SET64(3, (s32)rd32(c, (RW(4) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x1f2f00); SET32(4, RW(3) + RW(2)); JP_F_001575F0(c);
if (RD(2) != RD(0)) { SET32(2, RW(0) + 3); goto L_001F2F70; }
SET64(6, (s32)rd32(c, (RW(16) + 20)));
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(5, (s32)rd32(c, (RW(16) + 8)));
SET32(3, RW(6) << 3);
SET32(3, RW(3) - RW(6));
SET32(3, RW(3) << 2);
SET32(4, RW(2) + RW(3));
SET64(31, 0x1f2f2c); wr32(c, (RW(4) + 0), RW(6)); JP_F_001F3530(c);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 20), RW(2));
SET64(31, 0x1f2f40); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_001004B0(c);
wr32(c, (RW(16) + 8), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_001F2F64; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1f2f60); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_001F2F64:;
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(0)); goto L_001F3060;
L_001F2F70:;
wr32(c, (RW(16) + 0), RW(2));
SET64(8, (s32)rd32(c, (RW(16) + 20)));
L_001F2F78:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET32(3, RW(8) << 3);
SET32(7, RW(8) << 2);
SET32(3, RW(3) - RW(8));
SET64(6, (s32)rd32(c, (RW(4) + 20)));
SET64(5, (s32)rd32(c, (RW(4) + 24)));
SET32(3, RW(3) << 2);
SET32(4, RW(2) + RW(3));
SET32(2, RW(6) + RW(7));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(5, RW(5) + RW(2));
SET64(31, 0x1f2fb0); wr32(c, (RW(4) + 0), RW(8)); JP_F_001F3530(c);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(2) + 1);
wr32(c, (RW(16) + 20), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(2, rd16(c, (RW(2) + 32)));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_001F305C; }
SET64(31, 0x1f2fd8); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_001004B0(c);
wr32(c, (RW(16) + 8), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_001F2FFC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1f2ff8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_001F2FFC:;
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(0)); goto L_001F3060;
L_001F3008:;
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x1f3014);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_001F305C; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x1f3030);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_001F3050; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1f304c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_001F3050:;
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(0)); goto L_001F3060;
L_001F305C:;
SET32(2, RW(0) + 1);
L_001F3060:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F3070(Ctx *c) { /* func_001F3070 */
ENTER(0x1f3070);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) != RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_001F3098; }
SET64(2, RD(0) + RD(0)); goto L_001F3124;
L_001F3098:;
SET64(31, 0x1f30a0);  JP_F_00139590(c);
SET64(2, rd8(c, (RW(2) + 32)));
if (RD(2) == RD(0)) { SET32(16, RW(0) + 1); goto L_001F30B0; }
SET32(16, RW(0) + 2);
L_001F30B0:;
SET64(31, 0x1f30b8);  JP_F_002C2AD0(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 256); goto L_001F30C4; }
SET32(2, RW(0) + 240);
L_001F30C4:;
mul_s(c, 0, 4, RSW(2), RSW(16));
SET32(3, RW(4) << 2);
SET64(2, (s64)(s32)0x51eb0000);
SET32(3, RW(3) + RW(4));
SET64(2, RD(2) | 0x851f);
SET32(3, RW(3) << 4);
SET64(16, RD(0) + (s64)1);
mul_u(c, 0, 0, RW(2), RW(3));
SET64(2, c->hi.d[0]);
SET32(18, RW(2) >> 5); goto L_001F3100;
L_001F30F0:;
SET64(31, 0x1f30f8); SET64(4, RD(17) + RD(0)); JP_F_001F2E50(c);
SET64(16, RD(2) & 0xff);
L_001F3100:;
SET64(31, 0x1f3108);  JP_F_002AA820(c);
SET64(1, RD(2) < RD(18));
{ int t = RD(1) == RD(0);  if (t) goto L_001F3120; }
{ int t = RD(16) != RD(0);  if (t) { POLL(); goto L_001F30F0; } }
L_001F3120:;
SET64(2, RD(16) + RD(0));
L_001F3124:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001F3140(Ctx *c) { /* func_001F3140 */
ENTER(0x1f3140);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
{ int t = RD(17) != RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_001F3168; }
SET64(16, RD(0) + RD(0)); goto L_001F31F4;
L_001F3168:;
SET64(31, 0x1f3170); SET32(4, RW(0) + 36); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001F31A0; }
SET64(31, 0x1f3180); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_001F31A0:;
wr32(c, (RW(18) + 4), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f31b8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1f31cc);  rt_call(c, t); }
SET64(31, 0x1f31d4); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(16, RD(2) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1f31f4); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
L_001F31F4:;
{ int t = RD(16) == RD(0); wr32(c, (RW(18) + 12), RW(16)); if (t) goto L_001F3204; }
SET32(3, RW(0) + 4);
wr32(c, (RW(18) + 0), RW(3));
L_001F3204:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001F3220(Ctx *c) { /* func_001F3220 */
ENTER(0x1f3220);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
{ int t = RD(17) != RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_001F3248; }
SET64(16, RD(0) + RD(0)); goto L_001F32D4;
L_001F3248:;
SET64(31, 0x1f3250); SET32(4, RW(0) + 36); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001F3280; }
SET64(31, 0x1f3260); SET64(4, RD(16) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr16(c, (RW(16) + 32), (u16)RW(0));
wr16(c, (RW(16) + 34), (u16)RW(0));
L_001F3280:;
wr32(c, (RW(18) + 4), RW(16));
SET64(5, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f3298); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1f32ac);  rt_call(c, t); }
SET64(31, 0x1f32b4); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(16, RD(2) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1f32d4); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
L_001F32D4:;
{ int t = RD(16) == RD(0); wr32(c, (RW(18) + 8), RW(16)); if (t) goto L_001F32E4; }
SET32(3, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_001F32E4:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001F3300(Ctx *c) { /* func_001F3300 */
ENTER(0x1f3300);
SET32(29, RW(29) + -32);
SET64(5, (s64)(s32)0x1f0000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 16), RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 20), RW(0));
SET64(4, (s32)rd32(c, (RW(4) + 24)));
SET64(31, 0x1f3328); SET32(5, RW(5) + 13184); JP_F_001022C0(c);
wr32(c, (RW(16) + 24), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_001F334C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1f3348); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_001F334C:;
SET64(31, 0x1f3354); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_001004B0(c);
wr32(c, (RW(16) + 8), RW(0));
SET64(31, 0x1f3360); SET64(4, (s32)rd32(c, (RW(16) + 12))); JP_F_001004B0(c);
wr32(c, (RW(16) + 12), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F3380(Ctx *c) { /* func_001F3380 */
ENTER(0x1f3380);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001F343C; }
SET32(2, RW(0) + -1);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_001F33C4; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1f33c0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_001F33C4:;
SET64(4, (s32)rd32(c, (RW(17) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 8), RW(0)); goto L_001F33E4; }
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1f33e0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 8), RW(0));
L_001F33E4:;
SET64(31, 0x1f33ec); SET64(4, (s32)rd32(c, (RW(17) + 12))); JP_F_00100430(c);
wr32(c, (RW(17) + 12), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 16), RW(0)); goto L_001F3410; }
SET64(25, (s32)rd32(c, (RW(4) + 44)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1f340c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 16), RW(0));
L_001F3410:;
SET64(31, 0x1f3418); SET64(4, (s32)rd32(c, (RW(17) + 20))); JP_F_00100430(c);
wr32(c, (RW(17) + 20), RW(0));
SET64(31, 0x1f3424); SET64(4, (s32)rd32(c, (RW(17) + 24))); JP_F_001004B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(17) + 24), RW(0)); if (t) goto L_001F343C; }
SET64(31, 0x1f343c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001F343C:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F3460(Ctx *c) { /* func_001F3460 */
ENTER(0x1f3460);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(2, RW(18) << 3);
wr32(c, (RW(4) + 4), RW(0));
SET32(2, RW(2) - RW(18));
wr32(c, (RW(4) + 8), RW(0));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 12), RW(0));
SET32(2, RW(2) << 2);
wr32(c, (RW(4) + 16), RW(5));
SET64(17, RD(0) + RD(0));
wr32(c, (RW(4) + 20), RW(0));
SET64(31, 0x1f34ac); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001F34DC; }
SET64(5, (s64)(s32)0x1f0000);
SET64(6, (s64)(s32)0x1f0000);
SET64(8, RD(18) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + 13568);
SET32(6, RW(6) + 13184);
SET64(31, 0x1f34d8); SET32(7, RW(0) + 28); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_001F34DC:;
wr32(c, (RW(16) + 24), RW(19));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001F3500(Ctx *c) { /* func_001F3500 */
ENTER(0x1f3500);
SET32(2, RW(0) + -1);
wr32(c, (RW(4) + 0), RW(2));
wr32(c, (RW(4) + 4), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0)); return;
}

void JP_F_001F3530(Ctx *c) { /* func_001F3530 */
ENTER(0x1f3530);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(4, RW(29) + 80);
SET64(31, 0x1f3558); SET64(16, RD(5) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(16) + RD(0));
SET32(2, RW(2) + -32);
SET32(4, RW(29) + 80);
wr32(c, (RW(29) + 96), RW(2));
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
wr32(c, (RW(29) + 108), RW(0));
wr16(c, (RW(29) + 112), (u16)RW(0));
SET64(31, 0x1f3584); wr16(c, (RW(29) + 114), (u16)RW(0)); JP_F_00157540(c);
SET64(16, rd16(c, (RW(29) + 112)));
SET64(3, RD(0) + RD(0));
{ int t = RSD(16) <= 0; wr32(c, (RW(29) + 124), RW(0)); if (t) goto L_001F3828; }
L_001F3594:;
SET64(5, RD(3) << 32);
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(29) + 108)));
SET64(5, RSD(5) >> 32);
SET32(4, RW(5) << 1);
SET32(3, RW(3) + RW(4));
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) == RD(2);  if (t) goto L_001F3810; }
SET32(2, RW(0) + 3);
{ int t = RD(3) == RD(2);  if (t) goto L_001F3798; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_001F3748; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_001F36B8; }
{ int t = RD(3) == RD(0);  if (t) goto L_001F35F0; }
 goto L_001F3810;
L_001F35F0:;
SET64(3, (s32)rd32(c, (RW(29) + 100)));
SET32(4, RW(5) << 2);
SET64(2, (s32)rd32(c, (RW(29) + 104)));
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(17, RW(2) + RW(3));
SET64(31, 0x1f3610); SET64(4, RD(17) + RD(0)); JP_F_001400B0(c);
SET64(31, 0x1f3618); SET64(4, RD(17) + RD(0)); JP_F_001400A0(c);
SET64(3, rd16(c, (RW(2) + 12)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2);  if (t) goto L_001F3670; }
SET64(31, 0x1f3630); SET32(4, RW(0) + 768); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001F3648; }
SET64(4, RD(19) + RD(0));
SET64(31, 0x1f3644); SET32(5, RW(0) + 1); JP_F_001518B0(c);
L_001F3648:;
wr32(c, (RW(18) + 8), RW(19));
SET64(25, (s32)rd32(c, (RW(19) + 12)));
SET32(6, RW(0) + 1);
SET64(5, RD(17) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x1f3668); SET64(7, RD(6) + RD(0)); rt_call(c, t); }
 goto L_001F3810;
L_001F3670:;
SET64(31, 0x1f3678); SET32(4, RW(0) + 960); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001F3690; }
SET64(4, RD(19) + RD(0));
SET64(31, 0x1f368c); SET32(5, RW(0) + 1); JP_F_001530D0(c);
L_001F3690:;
wr32(c, (RW(18) + 4), RW(19));
SET64(25, (s32)rd32(c, (RW(19) + 276)));
SET64(5, RD(17) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x1f36ac); SET32(6, RW(0) + 1); rt_call(c, t); }
 goto L_001F3810;
L_001F36B8:;
SET32(4, RW(29) + 80);
SET64(31, 0x1f36c4); SET32(5, RW(29) + 124); JP_F_001573C0(c);
SET64(31, 0x1f36cc); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
wr32(c, (RW(18) + 12), RW(2));
SET32(4, RW(29) + 80);
SET64(6, (s32)rd32(c, (RW(29) + 124)));
SET32(5, RW(29) + 124);
SET64(3, (s32)rd32(c, (RW(29) + 100)));
SET64(2, (s32)rd32(c, (RW(29) + 104)));
SET32(6, RW(6) << 2);
SET32(3, RW(3) + RW(6));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x1f36f8); SET32(17, RW(2) + RW(3)); JP_F_001573C0(c);
SET64(4, (s32)rd32(c, (RW(18) + 12)));
SET64(5, RD(17) + RD(0));
SET64(31, 0x1f3708); SET64(6, RD(2) + RD(0)); JP_F_00127218(c);
SET64(31, 0x1f3710); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_001F3720; }
SET64(31, 0x1f3720); SET64(4, RD(17) + RD(0)); JP_F_00156540(c);
L_001F3720:;
wr32(c, (RW(18) + 16), RW(17));
SET64(17, (s32)rd32(c, (RW(18) + 12)));
SET64(31, 0x1f3730); SET64(4, RD(17) + RD(0)); JP_F_00140290(c);
SET64(4, (s32)rd32(c, (RW(18) + 16)));
SET64(31, 0x1f373c); SET64(5, RD(17) + RD(0)); JP_F_00156090(c);
 goto L_001F3810;
L_001F3748:;
SET32(4, RW(29) + 80);
SET64(31, 0x1f3754); SET32(5, RW(29) + 124); JP_F_001573C0(c);
SET64(17, RD(2) + RD(0));
SET64(31, 0x1f3760); SET64(4, RD(17) + RD(0)); JP_F_00100530(c);
wr32(c, (RW(18) + 20), RW(2));
SET64(4, RD(2) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 124)));
SET64(6, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 100)));
SET64(2, (s32)rd32(c, (RW(29) + 104)));
SET32(5, RW(5) << 2);
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x1f378c); SET32(5, RW(2) + RW(3)); JP_F_00127218(c);
 goto L_001F3810;
L_001F3798:;
SET32(4, RW(29) + 80);
SET64(31, 0x1f37a4); SET32(5, RW(29) + 124); JP_F_001573C0(c);
SET64(31, 0x1f37ac); SET32(4, RW(0) + 24); JP_F_00100670(c);
{ int t = RD(2) == RD(0);  if (t) goto L_001F37E0; }
SET64(3, (s64)(s32)0x20040000);
SET64(3, RD(3) | 0x402);
wr32(c, (RW(2) + 0), RW(3));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(0));
wr8(c, (RW(2) + 20), (u8)RW(0));
wr8(c, (RW(2) + 21), (u8)RW(0));
wr16(c, (RW(2) + 22), (u16)RW(0));
L_001F37E0:;
wr32(c, (RW(18) + 24), RW(2));
SET64(5, (s32)rd32(c, (RW(29) + 124)));
SET64(4, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 100)));
SET32(6, RW(0) + 24);
SET64(2, (s32)rd32(c, (RW(29) + 104)));
SET32(5, RW(5) << 2);
SET32(3, RW(3) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x1f380c); SET32(5, RW(2) + RW(3)); JP_F_00127218(c);
L_001F3810:;
SET64(2, (s32)rd32(c, (RW(29) + 124)));
SET32(3, RW(2) + 1);
SET64(2, RSD(3) < RSD(16));
{ int t = RD(2) != RD(0); wr32(c, (RW(29) + 124), RW(3)); if (t) { POLL(); goto L_001F3594; } }
L_001F3828:;
SET64(31, 0x1f3830); SET32(4, RW(29) + 80); JP_F_00157620(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 80);
SET32(2, RW(2) + -32);
SET64(31, 0x1f3844); wr32(c, (RW(29) + 96), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 80);
SET64(31, 0x1f3850); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_001F3870(Ctx *c) { /* func_001F3870 */
ENTER(0x1f3870);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
if (RD(16) == RD(0)) { SET64(2, RD(16) + RD(0)); goto L_001F38A4; }
SET64(2, RD(5) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0;  if (t) goto L_001F38A0; }
SET64(31, 0x1f38a0);  JP_F_001004B0(c);
L_001F38A0:;
SET64(2, RD(16) + RD(0));
L_001F38A4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F38C0(Ctx *c) { /* func_001F38C0 */
ENTER(0x1f38c0);
wr8(c, (RW(4) + 0), (u8)RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 16), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(3));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(3)); return;
}

void JP_F_001F38F0(Ctx *c) { /* func_001F38F0 */
ENTER(0x1f38f0);
c->f[1].u = RW(0);
c->fcc = F(12) <= F(1);
c->f[3].u = c->f[1].u;
{ int t = c->fcc; c->f[2].u = c->f[1].u; if (t) goto L_001F3C38; }
c->f[5].u = rd32(c, (RW(4) + 48));
c->f[4].u = rd32(c, (RW(4) + 52));
c->fcc = F(4) < F(5);
if (c->fcc) { c->f[1].u = rd32(c, (RW(4) + 52)); goto L_001F3C04; }
SET64(5, (s16)rd16(c, (RW(4) + 2)));
SET32(3, RW(0) + 3);
if (RD(5) == RD(3)) { SET64(3, (s64)(s32)0x40000000); goto L_001F3A98; }
SET32(3, RW(0) + 2);
{ int t = RD(5) == RD(3);  if (t) goto L_001F3A18; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3);  if (t) goto L_001F399C; }
if (RD(5) == RD(0)) { c->f[3].u = rd32(c, (RW(4) + 32)); goto L_001F3954; }
c->f[0].u = rd32(c, (RW(4) + 16)); goto L_001F3BD4;
L_001F3954:;
c->f[2].u = rd32(c, (RW(4) + 16));
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[0].u = rd32(c, (RW(4) + 20));
c->f[4].f = fpu(F(4) - F(5));
c->f[0].f = fpu(F(1) - F(0));
c->f[2].f = fpu(F(3) - F(2));
c->f[1].f = fpu_div(F(2), F(4));
c->f[0].f = fpu_div(F(0), F(4));
c->f[3].f = fpu(F(12) * F(1));
c->f[2].f = fpu(F(12) * F(0));
c->f[1].u = rd32(c, (RW(4) + 40));
c->f[0].u = rd32(c, (RW(4) + 24));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].f = fpu_div(F(0), F(4));
c->f[1].f = fpu(F(12) * F(0)); goto L_001F3BD0;
L_001F399C:;
c->f[6].f = fpu_div(F(5), F(4));
c->f[3].u = rd32(c, (RW(4) + 56));
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[2].u = rd32(c, (RW(4) + 16));
c->f[0].f = fpu(F(6) * F(3));
c->f[0].f = fpu(F(6) * F(0));
c->f[1].f = fpu(F(1) - F(3));
c->f[1].f = fpu(F(2) - F(1));
c->f[0].f = fpu(F(6) * F(0));
c->f[3].f = fpu(F(0) - F(1));
c->f[4].u = rd32(c, (RW(4) + 60));
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[2].u = rd32(c, (RW(4) + 20));
c->f[0].f = fpu(F(6) * F(4));
c->f[1].f = fpu(F(1) - F(4));
c->f[0].f = fpu(F(6) * F(0));
c->f[0].f = fpu(F(6) * F(0));
c->f[1].f = fpu(F(2) - F(1));
c->f[2].f = fpu(F(0) - F(1));
c->f[5].u = rd32(c, (RW(4) + 64));
c->f[1].u = rd32(c, (RW(4) + 40));
c->f[4].u = rd32(c, (RW(4) + 24));
c->f[0].f = fpu(F(6) * F(5));
c->f[0].f = fpu(F(6) * F(0));
c->f[1].f = fpu(F(1) - F(5));
c->f[0].f = fpu(F(6) * F(0));
c->f[1].f = fpu(F(4) - F(1));
c->f[1].f = fpu(F(0) - F(1)); goto L_001F3BD0;
L_001F3A18:;
c->f[2].f = fpu_div(F(5), F(4));
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->f[6].f = fpu(F(0) - F(2));
c->f[3].u = rd32(c, (RW(4) + 56));
c->f[2].u = rd32(c, (RW(4) + 32));
c->f[0].u = rd32(c, (RW(4) + 16));
c->f[3].f = fpu(F(6) * F(3));
c->f[0].f = fpu(F(2) - F(0));
c->facc = fpu(F(1) + F(0));
c->f[0].f = fpu(F(6) * F(3));
c->f[3].f = fpu(c->facc - F(6) * F(0));
c->f[4].u = rd32(c, (RW(4) + 60));
c->f[2].u = rd32(c, (RW(4) + 36));
c->f[0].u = rd32(c, (RW(4) + 20));
c->f[4].f = fpu(F(6) * F(4));
c->f[0].f = fpu(F(2) - F(0));
c->facc = fpu(F(1) + F(0));
c->f[0].f = fpu(F(6) * F(4));
c->f[2].f = fpu(c->facc - F(6) * F(0));
c->f[5].u = rd32(c, (RW(4) + 64));
c->f[4].u = rd32(c, (RW(4) + 40));
c->f[0].u = rd32(c, (RW(4) + 24));
c->f[5].f = fpu(F(6) * F(5));
c->f[0].f = fpu(F(4) - F(0));
c->facc = fpu(F(1) + F(0));
c->f[0].f = fpu(F(6) * F(5));
c->f[1].f = fpu(c->facc - F(6) * F(0)); goto L_001F3BD0;
L_001F3A98:;
c->f[0].u = RW(3);
c->f[2].f = fpu_div(F(4), F(0));
c->fcc = F(5) < F(2);
{ int t = !c->fcc;  if (t) goto L_001F3B44; }
c->f[1].f = fpu_div(F(5), F(4));
c->f[6].f = fpu(F(0) * F(1));
c->f[4].u = rd32(c, (RW(4) + 56));
c->f[2].u = rd32(c, (RW(4) + 32));
c->f[3].u = rd32(c, (RW(4) + 16));
c->f[1].f = fpu_div(F(4), F(0));
c->f[1].f = fpu(F(6) * F(1));
c->f[2].f = fpu(F(2) - F(4));
c->f[1].f = fpu(F(6) * F(1));
c->f[1].f = fpu(F(6) * F(1));
c->f[2].f = fpu(F(3) - F(2));
c->f[3].f = fpu(F(1) - F(2));
c->f[5].u = rd32(c, (RW(4) + 60));
c->f[2].u = rd32(c, (RW(4) + 36));
c->f[4].u = rd32(c, (RW(4) + 20));
c->f[1].f = fpu_div(F(5), F(0));
c->f[2].f = fpu(F(2) - F(5));
c->f[5].u = rd32(c, (RW(4) + 64));
c->f[1].f = fpu(F(6) * F(1));
c->f[0].f = fpu_div(F(5), F(0));
c->f[1].f = fpu(F(6) * F(1));
c->f[2].f = fpu(F(4) - F(2));
c->f[1].f = fpu(F(6) * F(1));
c->f[2].f = fpu(F(1) - F(2));
c->f[0].f = fpu(F(6) * F(0));
c->f[1].u = rd32(c, (RW(4) + 40));
c->f[0].f = fpu(F(6) * F(0));
c->f[1].f = fpu(F(1) - F(5));
c->f[4].u = rd32(c, (RW(4) + 24));
c->f[0].f = fpu(F(6) * F(0));
c->f[1].f = fpu(F(4) - F(1));
c->f[1].f = fpu(F(0) - F(1)); goto L_001F3BD0;
L_001F3B44:;
c->f[3].f = fpu_div(F(5), F(4));
SET64(3, (s64)(s32)0x3f800000);
c->f[4].u = rd32(c, (RW(4) + 56));
c->f[2].u = RW(3);
c->f[2].f = fpu(F(2) - F(3));
c->f[4].f = fpu_div(F(4), F(0));
c->f[5].u = rd32(c, (RW(4) + 60));
c->f[7].f = fpu(F(0) * F(2));
c->f[6].u = rd32(c, (RW(4) + 64));
c->f[5].f = fpu_div(F(5), F(0));
c->f[3].u = rd32(c, (RW(4) + 32));
c->f[2].u = rd32(c, (RW(4) + 16));
c->f[6].f = fpu_div(F(6), F(0));
c->f[2].f = fpu(F(3) - F(2));
c->facc = fpu(F(1) + F(2));
c->f[2].f = fpu(F(7) * F(4));
c->f[2].f = fpu(F(7) * F(2));
c->f[3].f = fpu(c->facc - F(7) * F(2));
c->f[4].u = rd32(c, (RW(4) + 36));
c->f[2].u = rd32(c, (RW(4) + 20));
c->f[2].f = fpu(F(4) - F(2));
c->facc = fpu(F(1) + F(2));
c->f[2].f = fpu(F(7) * F(5));
c->f[2].f = fpu(F(7) * F(2));
c->f[5].u = rd32(c, (RW(4) + 40));
c->f[4].u = rd32(c, (RW(4) + 24));
c->f[2].f = fpu(c->facc - F(7) * F(2));
c->f[0].f = fpu(F(5) - F(4));
c->facc = fpu(F(1) + F(0));
c->f[0].f = fpu(F(7) * F(6));
c->f[0].f = fpu(F(7) * F(0));
c->f[1].f = fpu(c->facc - F(7) * F(0));
L_001F3BD0:;
c->f[0].u = rd32(c, (RW(4) + 16));
L_001F3BD4:;
c->f[0].f = fpu(F(3) + F(0));
wr32(c, (RW(4) + 16), c->f[0].u);
c->f[0].u = rd32(c, (RW(4) + 20));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(4) + 20), c->f[0].u);
c->f[0].u = rd32(c, (RW(4) + 24));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(4) + 24), c->f[0].u);
c->f[0].u = rd32(c, (RW(4) + 48));
c->f[0].f = fpu(F(0) + F(12));
wr32(c, (RW(4) + 48), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 52));
L_001F3C04:;
c->f[0].u = rd32(c, (RW(4) + 48));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc;  if (t) goto L_001F3C38; }
c->f[2].u = rd32(c, (RW(4) + 40));
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[0].u = rd32(c, (RW(4) + 32));
wr32(c, (RW(4) + 16), c->f[0].u);
wr32(c, (RW(4) + 20), c->f[1].u);
wr32(c, (RW(4) + 24), c->f[2].u);
SET64(3, rd8(c, (RW(4) + 0)));
SET64(3, RD(3) & 0xfd);
wr8(c, (RW(4) + 0), (u8)RW(3));
L_001F3C38:;
 return;
}

void JP_F_001F3C40(Ctx *c) { /* func_001F3C40 */
ENTER(0x1f3c40);
wr8(c, (RW(4) + 0), (u8)RW(0));
wr16(c, (RW(4) + 2), (u16)RW(0));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0)); return;
}

void JP_F_001F3C60(Ctx *c) { /* func_001F3C60 */
ENTER(0x1f3c60);
SET64(3, rd16(c, (RW(4) + 16)));
{ int t = RSD(3) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_001F3C98; }
SET64(6, RD(0) + RD(0));
SET32(5, RW(0) + 1);
L_001F3C74:;
SET64(3, (s32)rd32(c, (RW(4) + 12)));
SET32(7, RW(7) + 1);
SET32(3, RW(3) + RW(6));
wr8(c, (RW(3) + 57), (u8)RW(5));
SET64(3, rd16(c, (RW(4) + 16)));
SET64(3, RSD(7) < RSD(3));
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 64); if (t) { POLL(); goto L_001F3C74; } }
L_001F3C98:;
 return;
}

void JP_F_001F3CA0(Ctx *c) { /* func_001F3CA0 */
ENTER(0x1f3ca0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f3cb4); SET64(16, RD(4) + RD(0)); JP_F_001F3CD0(c);
SET64(31, 0x1f3cbc); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00100430(c);
wr32(c, (RW(16) + 8), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F3CD0(Ctx *c) { /* func_001F3CD0 */
ENTER(0x1f3cd0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, rd16(c, (RW(4) + 16)));
{ int t = RD(4) == RD(0);  if (t) goto L_001F3DE0; }
SET64(3, (s32)rd32(c, (RW(18) + 8)));
{ int t = RD(3) == RD(0);  if (t) goto L_001F3DE0; }
SET64(3, rd16(c, (RW(18) + 18)));
SET64(3, RD(3) & 0x3);
{ int t = RD(3) == RD(0);  if (t) goto L_001F3DE0; }
SET64(3, RD(4) & 0xffff);
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001F3DA0; }
SET64(16, RD(0) + RD(0));
L_001F3D20:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(18) + 4))); goto L_001F3D44; }
SET64(4, (s32)rd32(c, (RW(3) + 20)));
SET32(5, RW(17) << 2);
SET32(4, RW(4) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 24)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(5, RW(3) + RW(4));
L_001F3D44:;
SET64(3, rd16(c, (RW(5) + 30)));
if (RD(3) == RD(0)) { SET64(4, RD(0) + RD(0)); goto L_001F3D68; }
SET64(4, rd16(c, (RW(5) + 28)));
SET64(3, (s32)rd32(c, (RW(5) + 24)));
SET32(4, RW(4) + 8);
SET32(4, RW(5) + RW(4));
SET32(4, RW(4) + 8);
SET32(4, RW(3) + RW(4));
L_001F3D68:;
{ int t = RD(4) == RD(0);  if (t) goto L_001F3D88; }
SET64(2, rd16(c, (RW(5) + 30)));
SET64(3, (s32)rd32(c, (RW(18) + 8)));
SET32(6, RW(2) << 2);
SET64(31, 0x1f3d84); SET32(5, RW(3) + RW(16)); JP_F_00127218(c);
L_001F3D88:;
SET64(3, rd16(c, (RW(18) + 16)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 1024); if (t) { POLL(); goto L_001F3D20; } }
L_001F3DA0:;
SET64(3, rd16(c, (RW(18) + 18)));
SET64(3, RD(3) & 0xfffc);
wr16(c, (RW(18) + 18), (u16)RW(3));
SET64(3, rd16(c, (RW(18) + 16)));
{ int t = RSD(3) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_001F3DE0; }
SET64(5, RD(0) + RD(0));
SET32(4, RW(0) + 1);
L_001F3DC0:;
SET64(3, (s32)rd32(c, (RW(18) + 12)));
SET32(6, RW(6) + 1);
SET32(3, RW(3) + RW(5));
wr8(c, (RW(3) + 57), (u8)RW(4));
SET64(3, rd16(c, (RW(18) + 16)));
SET64(3, RSD(6) < RSD(3));
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 64); if (t) { POLL(); goto L_001F3DC0; } }
L_001F3DE0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001F3E00(Ctx *c) { /* func_001F3E00 */
ENTER(0x1f3e00);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd16(c, (RW(4) + 16)));
SET64(31, 0x1f3e24); SET32(4, RW(2) << 10); JP_F_00100530(c);
wr32(c, (RW(18) + 8), RW(2));
SET64(3, rd16(c, (RW(18) + 16)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001F3EB8; }
SET64(16, RD(0) + RD(0));
L_001F3E38:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
if (RD(3) == RD(0)) { SET64(6, (s32)rd32(c, (RW(18) + 4))); goto L_001F3E5C; }
SET64(4, (s32)rd32(c, (RW(3) + 20)));
SET32(5, RW(17) << 2);
SET32(4, RW(4) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 24)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(6, RW(3) + RW(4));
L_001F3E5C:;
SET64(3, rd16(c, (RW(6) + 30)));
if (RD(3) == RD(0)) { SET64(5, RD(0) + RD(0)); goto L_001F3E80; }
SET64(4, rd16(c, (RW(6) + 28)));
SET64(3, (s32)rd32(c, (RW(6) + 24)));
SET32(4, RW(4) + 8);
SET32(4, RW(6) + RW(4));
SET32(4, RW(4) + 8);
SET32(5, RW(3) + RW(4));
L_001F3E80:;
{ int t = RD(5) == RD(0);  if (t) goto L_001F3EA0; }
SET64(2, rd16(c, (RW(6) + 30)));
SET64(3, (s32)rd32(c, (RW(18) + 8)));
SET32(6, RW(2) << 2);
SET64(31, 0x1f3e9c); SET32(4, RW(3) + RW(16)); JP_F_00127218(c);
L_001F3EA0:;
SET64(3, rd16(c, (RW(18) + 16)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 1024); if (t) { POLL(); goto L_001F3E38; } }
L_001F3EB8:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001F3ED0(Ctx *c) { /* func_001F3ED0 */
ENTER(0x1f3ed0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, rd16(c, (RW(5) + 0)));
{ int t = RD(6) != RD(0); SET64(20, RD(4) + RD(0)); if (t) goto L_001F3F08; }
SET64(31, 0x1f3f00);  JP_F_001F3CA0(c);
SET64(31, rd64(c, (RW(29) + 80))); goto L_001F4084;
L_001F3F08:;
SET64(3, rd16(c, (RW(20) + 16)));
{ int t = RD(3) == RD(0);  if (t) goto L_001F4080; }
SET64(7, rd16(c, (RW(20) + 18)));
SET64(3, RD(6) & 0xffff);
SET64(3, RD(3) & 0x3);
SET64(6, RD(7) & 0x3);
{ int t = RD(6) == RD(3);  if (t) goto L_001F4080; }
SET64(3, RD(7) & 0xfffc);
wr16(c, (RW(20) + 18), (u16)RW(3));
SET64(5, rd16(c, (RW(5) + 0)));
SET64(3, rd16(c, (RW(20) + 18)));
SET64(5, RD(5) & 0x3);
SET64(3, RD(3) | RD(5));
wr16(c, (RW(20) + 18), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(20) + 8)));
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(20) + 16))); goto L_001F3F60; }
SET64(31, 0x1f3f5c);  JP_F_001F3E00(c);
SET64(4, rd16(c, (RW(20) + 16)));
L_001F3F60:;
{ int t = RSD(4) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_001F4050; }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
L_001F3F6C:;
if (RD(3) == RD(0)) { SET64(16, (s32)rd32(c, (RW(20) + 4))); goto L_001F3F8C; }
SET64(4, (s32)rd32(c, (RW(3) + 20)));
SET32(5, RW(18) << 2);
SET32(4, RW(4) + RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 24)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(16, RW(3) + RW(4));
L_001F3F8C:;
SET64(3, rd16(c, (RW(16) + 30)));
if (RD(3) == RD(0)) { SET64(19, RD(0) + RD(0)); goto L_001F3FB0; }
SET64(4, rd16(c, (RW(16) + 28)));
SET64(3, (s32)rd32(c, (RW(16) + 24)));
SET32(4, RW(4) + 8);
SET32(4, RW(16) + RW(4));
SET32(4, RW(4) + 8);
SET32(19, RW(3) + RW(4));
L_001F3FB0:;
{ int t = RD(19) == RD(0);  if (t) goto L_001F4038; }
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(3));
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
SET64(3, rd16(c, (RW(16) + 30)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001F4038; }
L_001F3FD8:;
SET32(4, RW(29) + 96);
SET64(31, 0x1f3fe4); SET64(5, RD(19) + RD(0)); JP_F_001635F0(c);
SET64(2, rd16(c, (RW(20) + 18)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_001F4000; }
SET64(31, 0x1f3ffc); SET32(4, RW(29) + 96); JP_F_00163530(c);
L_001F4000:;
SET64(2, rd16(c, (RW(20) + 18)));
SET64(2, RD(2) & 0x2);
{ int t = RD(2) == RD(0);  if (t) goto L_001F4018; }
SET64(31, 0x1f4018); SET32(4, RW(29) + 96); JP_F_001634C0(c);
L_001F4018:;
SET64(31, 0x1f4020); SET32(4, RW(29) + 96); JP_F_00163730(c);
wr32(c, (RW(19) + 0), RW(2));
SET32(17, RW(17) + 1);
SET64(3, rd16(c, (RW(16) + 30)));
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_001F3FD8; } }
L_001F4038:;
SET64(4, rd16(c, (RW(20) + 16)));
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < RSD(4));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(20) + 0))); { POLL(); goto L_001F3F6C; } }
L_001F4050:;
{ int t = RSD(4) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_001F4080; }
SET64(5, RD(0) + RD(0));
SET32(4, RW(0) + 1);
L_001F4060:;
SET64(3, (s32)rd32(c, (RW(20) + 12)));
SET32(6, RW(6) + 1);
SET32(3, RW(3) + RW(5));
wr8(c, (RW(3) + 57), (u8)RW(4));
SET64(3, rd16(c, (RW(20) + 16)));
SET64(3, RSD(6) < RSD(3));
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 64); if (t) { POLL(); goto L_001F4060; } }
L_001F4080:;
SET64(31, rd64(c, (RW(29) + 80)));
L_001F4084:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_001F40A0(Ctx *c) { /* func_001F40A0 */
ENTER(0x1f40a0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, rd16(c, (RW(4) + 16)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_001F4100; }
SET64(19, RD(0) + RD(0));
L_001F40D0:;
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x1f40e8); SET32(5, RW(2) + RW(19)); rt_call(c, t); }
SET64(3, rd16(c, (RW(18) + 16)));
SET32(16, RW(16) + 1);
SET64(3, RSD(16) < RSD(3));
{ int t = RD(3) != RD(0); SET32(19, RW(19) + 64); if (t) { POLL(); goto L_001F40D0; } }
L_001F4100:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001F4120(Ctx *c) { /* func_001F4120 */
ENTER(0x1f4120);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd16(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(5) + 276)));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(3, RW(3) + -1);
SET64(25, (s32)rd32(c, (RW(25) + 36)));
SET32(3, RW(3) << 6);
SET64(4, RD(5) + RD(0));
{ u32 t = RW(25); SET64(31, 0x1f414c); SET32(5, RW(2) + RW(3)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001F4160(Ctx *c) { /* func_001F4160 */
ENTER(0x1f4160);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 16)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001F41D8; }
SET64(16, RD(0) + RD(0));
L_001F4190:;
SET64(3, rd16(c, (RW(18) + 264)));
SET64(1, RSD(17) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_001F41C0; }
SET64(25, (s32)rd32(c, (RW(18) + 276)));
SET64(6, RD(17) & 0xffff);
SET64(2, (s32)rd32(c, (RW(19) + 12)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x1f41bc); SET32(5, RW(2) + RW(16)); rt_call(c, t); }
L_001F41C0:;
SET64(3, rd16(c, (RW(19) + 16)));
SET32(17, RW(17) + 1);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 64); if (t) { POLL(); goto L_001F4190; } }
L_001F41D8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001F4200(Ctx *c) { /* func_001F4200 */
ENTER(0x1f4200);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 18)));
SET64(2, RD(3) & 0x8000);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_001F4230; }
SET64(2, RD(3) & 0x7fff);
wr16(c, (RW(16) + 18), (u16)RW(2));
SET64(31, 0x1f422c); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00100430(c);
wr32(c, (RW(16) + 4), RW(0));
L_001F4230:;
wr32(c, (RW(16) + 4), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x1f4244); SET32(5, RW(5) + 1040); JP_F_001022C0(c);
wr32(c, (RW(16) + 12), RW(0));
SET64(31, 0x1f4250); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00100430(c);
wr32(c, (RW(16) + 8), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_001F4274; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x1f4270); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
L_001F4274:;
wr16(c, (RW(16) + 16), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F4290(Ctx *c) { /* func_001F4290 */
ENTER(0x1f4290);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(8) + RD(0));
SET64(16, RD(9) + RD(0));
SET64(31, 0x1f42cc); SET64(6, RD(7) + RD(0)); JP_F_001F4360(c);
SET64(3, rd16(c, (RW(19) + 16)));
{ int t = RSD(3) <= 0; SET64(22, RD(0) + RD(0)); if (t) goto L_001F4330; }
SET64(21, RD(0) + RD(0));
SET64(20, RD(0) + RD(0));
L_001F42E0:;
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET64(2, (s32)rd32(c, (RW(19) + 12)));
SET64(7, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(3) + 20)));
SET32(4, RW(2) + RW(20));
SET32(2, RW(5) + RW(21));
SET64(3, (s32)rd32(c, (RW(3) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(7) != RD(0); SET32(5, RW(3) + RW(2)); if (t) goto L_001F430C; }
SET64(7, RD(5) + RD(0));
L_001F430C:;
SET64(6, RD(18) + RD(0));
SET64(31, 0x1f4318); SET64(8, RD(16) + RD(0)); JP_F_0014FC00(c);
SET64(3, rd16(c, (RW(19) + 16)));
SET32(22, RW(22) + 1);
SET32(21, RW(21) + 4);
SET64(3, RSD(22) < RSD(3));
{ int t = RD(3) != RD(0); SET32(20, RW(20) + 64); if (t) { POLL(); goto L_001F42E0; } }
L_001F4330:;
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

void JP_F_001F4360(Ctx *c) { /* func_001F4360 */
ENTER(0x1f4360);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(6) + 0)));
{ int t = RD(4) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_001F43BC; }
SET64(31, 0x1f4394);  JP_F_00100530(c);
wr32(c, (RW(18) + 4), RW(2));
SET64(5, RD(17) + RD(0));
SET64(6, (s32)rd32(c, (RW(19) + 0)));
SET64(31, 0x1f43a8); SET64(4, RD(2) + RD(0)); JP_F_00127218(c);
SET64(2, rd16(c, (RW(18) + 18)));
SET64(17, (s32)rd32(c, (RW(18) + 4)));
SET64(2, RD(2) | 0x8000);
wr16(c, (RW(18) + 18), (u16)RW(2)); goto L_001F43C0;
L_001F43BC:;
wr32(c, (RW(18) + 4), RW(17));
L_001F43C0:;
SET64(31, 0x1f43c8); SET32(4, RW(0) + 36); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_001F43F8; }
SET64(31, 0x1f43d8); SET64(4, RD(19) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(19) + 16), RW(2));
wr32(c, (RW(19) + 20), RW(0));
wr32(c, (RW(19) + 24), RW(0));
wr32(c, (RW(19) + 28), RW(0));
wr16(c, (RW(19) + 32), (u16)RW(0));
wr16(c, (RW(19) + 34), (u16)RW(0));
L_001F43F8:;
SET64(5, RD(17) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(31, 0x1f4408); wr32(c, (RW(18) + 0), RW(19)); JP_F_00157540(c);
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET64(17, RD(0) + RD(0));
SET64(2, rd16(c, (RW(2) + 32)));
wr16(c, (RW(18) + 16), (u16)RW(2));
SET64(19, rd16(c, (RW(18) + 16)));
SET32(2, RW(19) << 6);
SET64(31, 0x1f4428); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_001F4458; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(8, RD(19) + RD(0));
SET32(17, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 1152);
SET32(6, RW(6) + 1040);
SET64(31, 0x1f4454); SET32(7, RW(0) + 64); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_001F4458:;
wr32(c, (RW(18) + 12), RW(16));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001F4480(Ctx *c) { /* func_001F4480 */
ENTER(0x1f4480);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 376);
wr32(c, (RW(4) + 20), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr16(c, (RW(4) + 16), (u16)RW(0));
wr16(c, (RW(4) + 18), (u16)RW(0)); return;
}

void JP_F_001F44B0(Ctx *c) { /* func_001F44B0 */
ENTER(0x1f44b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_001F45A4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -31024);
SET32(2, RW(2) + -31000);
wr32(c, (RW(17) + 144), RW(3));
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 172), RW(2)); if (t) goto L_001F458C; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 16496);
SET32(2, RW(2) + 16520);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1f4510);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_001F4590; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 16640);
SET32(2, RW(2) + 16664);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x1f4540); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 160);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_001F4584; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x1f4568);  rt_call(c, t); }
SET32(2, RW(17) + 160);
{ int t = RD(2) == RD(0);  if (t) goto L_001F4580; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 172), RW(2));
L_001F4580:;
SET64(4, RD(17) + RD(0));
L_001F4584:;
SET64(31, 0x1f458c); SET64(5, RD(0) + RD(0)); JP_F_00243920(c);
L_001F458C:;
SET64(2, RD(16) << 48);
L_001F4590:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_001F45A8; }
SET64(31, 0x1f45a4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_001F45A4:;
SET64(2, RD(17) + RD(0));
L_001F45A8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F45C0(Ctx *c) { /* func_001F45C0 */
ENTER(0x1f45c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f45d4); SET64(16, RD(4) + RD(0)); JP_F_001B6420(c);
wr16(c, (RW(16) + 380), (u16)RW(0));
SET32(3, RW(0) + 30);
wr16(c, (RW(16) + 382), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F45F0(Ctx *c) { /* func_001F45F0 */
ENTER(0x1f45f0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x41880000);
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(0) + 3);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[12].u = RW(2);
SET64(16, RD(4) + RD(0));
SET32(6, RW(0) + 2);
SET64(31, 0x1f4618); SET64(7, RD(0) + RD(0)); JP_F_001B2B60(c);
c->f[12].u = RW(0);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 5);
SET64(6, RD(0) + RD(0));
SET64(31, 0x1f4630); SET64(7, RD(0) + RD(0)); JP_F_001B2B60(c);
SET64(31, 0x1f4638); SET64(4, RD(16) + RD(0)); JP_F_001B2AD0(c);
c->f[1].u = rd32(c, (RW(16) + 180));
SET64(3, (s64)(s32)0x40400000);
c->f[0].u = RW(3);
c->fcc = F(1) == F(0);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 16))); goto L_001F467C; }
wr32(c, (RW(16) + 200), RW(0));
SET32(4, RW(16) + 160);
wr32(c, (RW(16) + 196), RW(0));
wr8(c, (RW(16) + 192), (u8)RW(0));
wr32(c, (RW(16) + 180), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 184));
c->f[0].u = rd32(c, (RW(16) + 180));
SET64(31, 0x1f4678); c->f[12].f = fpu(F(1) * F(0)); JP_F_00141D40(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_001F467C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F4690(Ctx *c) { /* func_001F4690 */
ENTER(0x1f4690);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1f46a0);  JP_F_001B65A0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_001F46B0(Ctx *c) { /* func_001F46B0 */
ENTER(0x1f46b0);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_001F46F0; }
SET32(3, RW(0) + 5);
if (RD(5) == RD(3)) { SET64(25, (s32)rd32(c, (RW(4) + 144))); goto L_001F46DC; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_001F474C;
L_001F46DC:;
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x1f46e8); c->f[12].u = rd32(c, (RW(6) + 0)); rt_call(c, t); }
 goto L_001F4748;
L_001F46F0:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 44), RW(2));
SET32(4, RW(16) + 352);
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x1f4720); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1624)));
SET32(4, RW(16) + 1616);
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x1f4734); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 2888)));
SET32(4, RW(16) + 2880);
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x1f4748); SET32(5, RW(29) + 32); rt_call(c, t); }
L_001F4748:;
SET64(31, rd64(c, (RW(29) + 16)));
L_001F474C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F4760(Ctx *c) { /* func_001F4760 */
ENTER(0x1f4760);
SET32(29, RW(29) + -752);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET32(4, RW(29) + 240);
c->f[21].u = c->f[12].u;
wr32(c, (RW(29) + 672), RW(2));
wr32(c, (RW(29) + 676), RW(2));
wr32(c, (RW(29) + 680), RW(2));
SET64(31, 0x1f4798); wr32(c, (RW(29) + 684), RW(2)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 240);
SET64(31, 0x1f47a4); SET32(5, RW(29) + 672); JP_F_00181B20(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f47b0); SET32(4, RW(29) + 688); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 688) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f000000);
c->f[0].u = RW(2);
SET32(4, RW(29) + 176);
c->f[20].f = fpu(F(0) * F(21));
SET64(2, (s64)(s32)0x3f800000);
wr128(c, (RW(16) + 768) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 704) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 784) & ~15u, &c->r[3]);
c->f[0].f = fpu(F(0) + F(20));
rd128(c, (RW(29) + 720) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 800) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 736) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 816) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 456), c->f[0].u);
wr32(c, (RW(29) + 460), RW(2));
wr32(c, (RW(29) + 448), RW(0));
SET64(31, 0x1f47fc); wr32(c, (RW(29) + 452), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 176);
SET64(31, 0x1f4808); SET32(5, RW(29) + 448); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f4814); SET32(4, RW(29) + 464); JP_F_0013ADA0(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 112);
wr32(c, (RW(29) + 528), RW(2));
wr32(c, (RW(29) + 536), c->f[21].u);
wr32(c, (RW(29) + 532), RW(2));
SET64(31, 0x1f4830); wr32(c, (RW(29) + 540), RW(2)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 112);
SET64(31, 0x1f483c); SET32(5, RW(29) + 528); JP_F_00181B20(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f4848); SET32(4, RW(29) + 544); JP_F_0013ADA0(c);
SET32(4, RW(29) + 304);
SET32(5, RW(29) + 544);
SET64(31, 0x1f4858); SET32(6, RW(29) + 464); JP_F_002AEAE0(c);
SET64(31, 0x1f4860); SET32(4, RW(29) + 608); JP_F_002AF080(c);
rd128(c, (RW(29) + 304) & ~15u, &c->r[5]);
SET64(2, (s64)(s32)0x40000000);
rd128(c, (RW(29) + 320) & ~15u, &c->r[4]);
c->f[1].u = RW(2);
rd128(c, (RW(29) + 336) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
wr128(c, (RW(29) + 608) & ~15u, &c->r[5]);
c->f[2].u = RW(0);
wr128(c, (RW(29) + 624) & ~15u, &c->r[4]);
c->f[0].u = RW(2);
wr128(c, (RW(29) + 640) & ~15u, &c->r[3]);
c->facc = fpu(F(2) + F(0));
rd128(c, (RW(29) + 352) & ~15u, &c->r[3]);
c->f[0].f = fpu(c->facc + F(1) * F(20));
SET32(4, RW(29) + 48);
wr128(c, (RW(29) + 656) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 608) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2032) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 624) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2048) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 640) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2064) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 656) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2080) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 376), c->f[0].u);
wr32(c, (RW(29) + 380), RW(2));
wr32(c, (RW(29) + 368), RW(0));
SET64(31, 0x1f48d4); wr32(c, (RW(29) + 372), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x1f48e0); SET32(5, RW(29) + 368); JP_F_00165780(c);
SET32(4, RW(29) + 384);
SET64(31, 0x1f48ec); SET64(5, RD(2) + RD(0)); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 384) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 3296) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 400) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 3312) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 416) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 3328) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 432) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 3344) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 752); return;
}

void JP_F_001F4930(Ctx *c) { /* func_001F4930 */
ENTER(0x1f4930);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f4944); SET64(16, RD(4) + RD(0)); JP_F_001B6A00(c);
SET64(4, (s32)rd32(c, (RW(16) + 528)));
SET64(31, 0x1f4950); SET32(5, RW(0) + 1); JP_F_00153560(c);
SET64(4, (s32)rd32(c, (RW(16) + 1792)));
SET64(31, 0x1f495c); SET32(5, RW(0) + 1); JP_F_00153560(c);
SET64(4, (s32)rd32(c, (RW(16) + 3056)));
SET64(31, 0x1f4968); SET32(5, RW(0) + 1); JP_F_00153560(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F4980(Ctx *c) { /* func_001F4980 */
ENTER(0x1f4980);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f49a0); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1624)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f49b0); SET32(4, RW(16) + 1616); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 2888)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f49c0); SET32(4, RW(16) + 2880); rt_call(c, t); }
SET64(31, 0x1f49c8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F49E0(Ctx *c) { /* func_001F49E0 */
ENTER(0x1f49e0);
SET32(29, RW(29) + -352);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f49f4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 352);
c->f[12].u = RW(2);
SET64(31, 0x1f4a08); SET32(5, RW(0) + 31); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f4a14); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 1616);
c->f[12].u = RW(2);
SET64(31, 0x1f4a28); SET32(5, RW(0) + 30); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f4a34); SET32(5, RW(16) + 1616); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 2880);
c->f[12].u = RW(2);
SET64(31, 0x1f4a48); SET32(5, RW(0) + 29); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f4a54); SET32(5, RW(16) + 2880); JP_F_001B6520(c);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0xbf800000);
wr32(c, (RW(29) + 320), RW(2));
SET32(4, RW(29) + 64);
wr32(c, (RW(29) + 336), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 340), RW(0));
SET32(5, RW(29) + 304);
wr32(c, (RW(29) + 344), RW(3));
SET32(6, RW(29) + 288);
wr32(c, (RW(29) + 348), RW(3));
wr32(c, (RW(29) + 324), RW(0));
wr32(c, (RW(29) + 328), RW(0));
wr32(c, (RW(29) + 332), RW(3));
wr32(c, (RW(29) + 300), RW(3));
wr32(c, (RW(29) + 316), RW(3));
rd128(c, (RW(29) + 320) & ~15u, &c->r[7]);
rd128(c, (RW(29) + 336) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 288), RW(0));
wr32(c, (RW(29) + 292), RW(0));
wr32(c, (RW(29) + 296), RW(0));
wr32(c, (RW(29) + 304), RW(0));
wr32(c, (RW(29) + 308), RW(0));
wr32(c, (RW(29) + 312), RW(0));
wr128(c, (RW(29) + 288) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 304) & ~15u, &c->r[3]);
wr8(c, (RW(16) + 864), (u8)RW(2));
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET64(31, 0x1f4acc); wr128(c, (RW(16) + 832) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 124), RW(2));
SET32(4, RW(29) + 112);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
SET64(31, 0x1f4af0); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[5]);
SET64(8, (s64)(s32)0x3f800000);
rd128(c, (RW(29) + 320) & ~15u, &c->r[7]);
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 336) & ~15u, &c->r[3]);
SET32(4, RW(29) + 48);
wr128(c, (RW(16) + 848) & ~15u, &c->r[5]);
SET32(6, RW(29) + 256);
wr32(c, (RW(29) + 256), RW(0));
SET32(5, RW(29) + 272);
wr32(c, (RW(29) + 260), RW(0));
wr32(c, (RW(29) + 264), RW(0));
wr32(c, (RW(29) + 268), RW(8));
wr32(c, (RW(29) + 284), RW(8));
wr32(c, (RW(29) + 272), RW(0));
wr32(c, (RW(29) + 276), RW(0));
wr32(c, (RW(29) + 280), RW(0));
wr128(c, (RW(29) + 256) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 272) & ~15u, &c->r[3]);
wr8(c, (RW(16) + 2128), (u8)RW(2));
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
SET64(31, 0x1f4b4c); wr128(c, (RW(16) + 2096) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET32(4, RW(29) + 96);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
SET64(31, 0x1f4b70); wr128(c, (RW(29) + 96) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[5]);
SET64(8, (s64)(s32)0x3f800000);
rd128(c, (RW(29) + 320) & ~15u, &c->r[7]);
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 336) & ~15u, &c->r[3]);
SET32(4, RW(29) + 32);
wr128(c, (RW(16) + 2112) & ~15u, &c->r[5]);
SET32(6, RW(29) + 224);
wr32(c, (RW(29) + 224), RW(0));
SET32(5, RW(29) + 240);
wr32(c, (RW(29) + 228), RW(0));
wr32(c, (RW(29) + 232), RW(0));
wr32(c, (RW(29) + 236), RW(8));
wr32(c, (RW(29) + 252), RW(8));
wr32(c, (RW(29) + 240), RW(0));
wr32(c, (RW(29) + 244), RW(0));
wr32(c, (RW(29) + 248), RW(0));
wr128(c, (RW(29) + 224) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 240) & ~15u, &c->r[3]);
wr8(c, (RW(16) + 3392), (u8)RW(2));
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
SET64(31, 0x1f4bcc); wr128(c, (RW(16) + 3360) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 92), RW(2));
SET32(4, RW(29) + 80);
rd128(c, (RW(29) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 84), RW(0));
wr32(c, (RW(29) + 88), RW(0));
SET64(31, 0x1f4bf0); wr128(c, (RW(29) + 80) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3dcc0000);
SET64(2, RD(2) | 0xcccd);
c->f[12].u = RW(2);
wr128(c, (RW(16) + 3376) & ~15u, &c->r[3]);
SET64(25, (s32)rd32(c, (RW(16) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x1f4c14); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 352); return;
}

void JP_F_001F4C30(Ctx *c) { /* func_001F4C30 */
ENTER(0x1f4c30);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x41200000);
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(0) + 26);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[12].u = RW(2);
SET64(16, RD(4) + RD(0));
SET32(6, RW(0) + 2);
SET64(31, 0x1f4c58); SET64(7, RD(0) + RD(0)); JP_F_001B2B60(c);
SET64(2, (s64)(s32)0x4c0000);
SET64(4, RD(16) + RD(0));
c->f[12].u = rd32(c, (RW(2) + -21696));
SET32(5, RW(0) + 27);
SET32(6, RW(0) + 2);
SET64(31, 0x1f4c74); SET64(7, RD(0) + RD(0)); JP_F_001B2B60(c);
c->f[12].u = RW(0);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 28);
SET64(6, RD(0) + RD(0));
SET64(31, 0x1f4c8c); SET64(7, RD(0) + RD(0)); JP_F_001B2B60(c);
SET64(31, 0x1f4c94); SET64(4, RD(16) + RD(0)); JP_F_001B2AD0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F4CB0(Ctx *c) { /* func_001F4CB0 */
ENTER(0x1f4cb0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x41200000);
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(0) + 23);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[12].u = RW(2);
SET64(16, RD(4) + RD(0));
SET32(6, RW(0) + 2);
SET64(31, 0x1f4cd8); SET64(7, RD(0) + RD(0)); JP_F_001B2B60(c);
SET64(2, (s64)(s32)0x4c0000);
SET64(4, RD(16) + RD(0));
c->f[12].u = rd32(c, (RW(2) + -21704));
SET32(5, RW(0) + 24);
SET32(6, RW(0) + 2);
SET64(31, 0x1f4cf4); SET64(7, RD(0) + RD(0)); JP_F_001B2B60(c);
c->f[12].u = RW(0);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 25);
SET64(6, RD(0) + RD(0));
SET64(31, 0x1f4d0c); SET64(7, RD(0) + RD(0)); JP_F_001B2B60(c);
SET64(31, 0x1f4d14); SET64(4, RD(16) + RD(0)); JP_F_001B2AD0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F4D30(Ctx *c) { /* func_001F4D30 */
ENTER(0x1f4d30);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x41200000);
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(0) + 20);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
c->f[12].u = RW(2);
SET64(16, RD(4) + RD(0));
SET32(6, RW(0) + 2);
SET64(31, 0x1f4d58); SET64(7, RD(0) + RD(0)); JP_F_001B2B60(c);
SET64(2, (s64)(s32)0x4c0000);
SET64(4, RD(16) + RD(0));
c->f[12].u = rd32(c, (RW(2) + -21712));
SET32(5, RW(0) + 21);
SET32(6, RW(0) + 2);
SET64(31, 0x1f4d74); SET64(7, RD(0) + RD(0)); JP_F_001B2B60(c);
c->f[12].u = RW(0);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 22);
SET64(6, RD(0) + RD(0));
SET64(31, 0x1f4d8c); SET64(7, RD(0) + RD(0)); JP_F_001B2B60(c);
SET64(31, 0x1f4d94); SET64(4, RD(16) + RD(0)); JP_F_001B2AD0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F4DB0(Ctx *c) { /* func_001F4DB0 */
ENTER(0x1f4db0);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) == RD(3); SET64(7, RD(4) + RD(0)); if (t) goto L_001F4E28; }
SET32(3, RW(0) + 11);
if (RD(5) == RD(3)) { SET64(5, (s32)rd32(c, (RW(6) + 0))); goto L_001F4E18; }
SET32(3, RW(0) + 3);
if (RD(5) == RD(3)) { SET64(2, (s64)(s32)0x3f800000); goto L_001F4DE4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_001F4E30;
L_001F4DE4:;
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 28), RW(2));
SET32(4, RW(7) + 352);
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 24), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(7) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x1f4e10); SET32(5, RW(29) + 16); rt_call(c, t); }
 goto L_001F4E2C;
L_001F4E18:;
SET64(31, 0x1f4e20); SET32(4, RW(7) + 352); JP_F_001EC5A0(c);
 goto L_001F4E2C;
L_001F4E28:;
wr8(c, (RW(7) + 1008), (u8)RW(0));
L_001F4E2C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_001F4E30:;
SET32(29, RW(29) + 32); return;
}

void JP_F_001F4E40(Ctx *c) { /* func_001F4E40 */
ENTER(0x1f4e40);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) == RD(3); SET64(7, RD(4) + RD(0)); if (t) goto L_001F4EB8; }
SET32(3, RW(0) + 11);
if (RD(5) == RD(3)) { SET64(5, (s32)rd32(c, (RW(6) + 0))); goto L_001F4EA8; }
SET32(3, RW(0) + 3);
if (RD(5) == RD(3)) { SET64(2, (s64)(s32)0x3f800000); goto L_001F4E74; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_001F4EC0;
L_001F4E74:;
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 28), RW(2));
SET32(4, RW(7) + 352);
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 24), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(7) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x1f4ea0); SET32(5, RW(29) + 16); rt_call(c, t); }
 goto L_001F4EBC;
L_001F4EA8:;
SET64(31, 0x1f4eb0); SET32(4, RW(7) + 352); JP_F_001EC5A0(c);
 goto L_001F4EBC;
L_001F4EB8:;
wr8(c, (RW(7) + 1008), (u8)RW(0));
L_001F4EBC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_001F4EC0:;
SET32(29, RW(29) + 32); return;
}

void JP_F_001F4ED0(Ctx *c) { /* func_001F4ED0 */
ENTER(0x1f4ed0);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) == RD(3); SET64(7, RD(4) + RD(0)); if (t) goto L_001F4F48; }
SET32(3, RW(0) + 11);
if (RD(5) == RD(3)) { SET64(5, (s32)rd32(c, (RW(6) + 0))); goto L_001F4F38; }
SET32(3, RW(0) + 3);
if (RD(5) == RD(3)) { SET64(2, (s64)(s32)0x3f800000); goto L_001F4F04; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_001F4F50;
L_001F4F04:;
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 28), RW(2));
SET32(4, RW(7) + 352);
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 24), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(7) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x1f4f30); SET32(5, RW(29) + 16); rt_call(c, t); }
 goto L_001F4F4C;
L_001F4F38:;
SET64(31, 0x1f4f40); SET32(4, RW(7) + 352); JP_F_001EC5A0(c);
 goto L_001F4F4C;
L_001F4F48:;
wr8(c, (RW(7) + 1008), (u8)RW(0));
L_001F4F4C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_001F4F50:;
SET32(29, RW(29) + 32); return;
}

void JP_F_001F4F60(Ctx *c) { /* func_001F4F60 */
ENTER(0x1f4f60);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) == RD(3); SET64(7, RD(4) + RD(0)); if (t) goto L_001F4FD8; }
SET32(3, RW(0) + 11);
if (RD(5) == RD(3)) { SET64(5, (s32)rd32(c, (RW(6) + 0))); goto L_001F4FC8; }
SET32(3, RW(0) + 3);
if (RD(5) == RD(3)) { SET64(2, (s64)(s32)0x3f800000); goto L_001F4F94; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_001F4FE0;
L_001F4F94:;
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 28), RW(2));
SET32(4, RW(7) + 352);
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 24), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(7) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x1f4fc0); SET32(5, RW(29) + 16); rt_call(c, t); }
 goto L_001F4FDC;
L_001F4FC8:;
SET64(31, 0x1f4fd0); SET32(4, RW(7) + 352); JP_F_001EC5A0(c);
 goto L_001F4FDC;
L_001F4FD8:;
wr8(c, (RW(7) + 1008), (u8)RW(0));
L_001F4FDC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_001F4FE0:;
SET32(29, RW(29) + 32); return;
}

void JP_F_001F4FF0(Ctx *c) { /* func_001F4FF0 */
ENTER(0x1f4ff0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f5010); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1f5018); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F5030(Ctx *c) { /* func_001F5030 */
ENTER(0x1f5030);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f5050); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1f5058); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F5070(Ctx *c) { /* func_001F5070 */
ENTER(0x1f5070);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f5090); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1f5098); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F50B0(Ctx *c) { /* func_001F50B0 */
ENTER(0x1f50b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f50d0); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1f50d8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F50F0(Ctx *c) { /* func_001F50F0 */
ENTER(0x1f50f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f5104); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f710000);
SET64(3, (s64)(s32)0x3ea20000);
wr32(c, (RW(29) + 36), RW(2));
SET32(4, RW(16) + 352);
SET64(2, (s64)(s32)0x3f7f0000);
wr32(c, (RW(29) + 32), RW(3));
wr32(c, (RW(29) + 44), RW(2));
SET64(3, (s64)(s32)0x3ebe0000);
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 40), RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 15952)));
SET64(3, (s64)(s32)0x4c0000);
c->f[15].u = rd32(c, (RW(3) + 15968));
SET64(2, (s64)(s32)0x4c0000);
c->f[12].u = rd32(c, (RW(2) + 15956));
SET64(3, (s64)(s32)0x4c0000);
c->f[17].u = rd32(c, (RW(3) + 15976));
SET64(2, (s64)(s32)0x4c0000);
c->f[13].u = rd32(c, (RW(2) + 15960));
SET64(2, (s64)(s32)0x4c0000);
c->f[14].u = rd32(c, (RW(2) + 15964));
SET64(2, (s64)(s32)0x4c0000);
c->f[16].u = rd32(c, (RW(2) + 15972));
SET64(2, (s64)(s32)0x4c0000);
c->f[18].u = rd32(c, (RW(2) + 15980));
SET64(31, 0x1f5170); SET32(6, RW(29) + 32); JP_F_001D1350(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f517c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F5190(Ctx *c) { /* func_001F5190 */
ENTER(0x1f5190);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f51a4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f710000);
SET64(3, (s64)(s32)0x3ea20000);
wr32(c, (RW(29) + 36), RW(2));
SET32(4, RW(16) + 352);
SET64(2, (s64)(s32)0x3f7f0000);
wr32(c, (RW(29) + 32), RW(3));
wr32(c, (RW(29) + 44), RW(2));
SET64(3, (s64)(s32)0x3ebe0000);
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 40), RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 15920)));
SET64(3, (s64)(s32)0x4c0000);
c->f[15].u = rd32(c, (RW(3) + 15936));
SET64(2, (s64)(s32)0x4c0000);
c->f[12].u = rd32(c, (RW(2) + 15924));
SET64(3, (s64)(s32)0x4c0000);
c->f[17].u = rd32(c, (RW(3) + 15944));
SET64(2, (s64)(s32)0x4c0000);
c->f[13].u = rd32(c, (RW(2) + 15928));
SET64(2, (s64)(s32)0x4c0000);
c->f[14].u = rd32(c, (RW(2) + 15932));
SET64(2, (s64)(s32)0x4c0000);
c->f[16].u = rd32(c, (RW(2) + 15940));
SET64(2, (s64)(s32)0x4c0000);
c->f[18].u = rd32(c, (RW(2) + 15948));
SET64(31, 0x1f5210); SET32(6, RW(29) + 32); JP_F_001D15B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f521c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F5230(Ctx *c) { /* func_001F5230 */
ENTER(0x1f5230);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f5244); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f710000);
SET64(3, (s64)(s32)0x3ea20000);
wr32(c, (RW(29) + 36), RW(2));
SET32(4, RW(16) + 352);
SET64(2, (s64)(s32)0x3f7f0000);
wr32(c, (RW(29) + 32), RW(3));
wr32(c, (RW(29) + 44), RW(2));
SET64(3, (s64)(s32)0x3ebe0000);
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 40), RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 15888)));
SET64(3, (s64)(s32)0x4c0000);
c->f[15].u = rd32(c, (RW(3) + 15904));
SET64(2, (s64)(s32)0x4c0000);
c->f[12].u = rd32(c, (RW(2) + 15892));
SET64(3, (s64)(s32)0x4c0000);
c->f[17].u = rd32(c, (RW(3) + 15912));
SET64(2, (s64)(s32)0x4c0000);
c->f[13].u = rd32(c, (RW(2) + 15896));
SET64(2, (s64)(s32)0x4c0000);
c->f[14].u = rd32(c, (RW(2) + 15900));
SET64(2, (s64)(s32)0x4c0000);
c->f[16].u = rd32(c, (RW(2) + 15908));
SET64(2, (s64)(s32)0x4c0000);
c->f[18].u = rd32(c, (RW(2) + 15916));
SET64(31, 0x1f52b0); SET32(6, RW(29) + 32); JP_F_001D1350(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f52bc); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F52D0(Ctx *c) { /* func_001F52D0 */
ENTER(0x1f52d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f52e4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f710000);
SET64(3, (s64)(s32)0x3ea20000);
wr32(c, (RW(29) + 36), RW(2));
SET32(4, RW(16) + 352);
SET64(2, (s64)(s32)0x3f7f0000);
wr32(c, (RW(29) + 32), RW(3));
wr32(c, (RW(29) + 44), RW(2));
SET64(3, (s64)(s32)0x3ebe0000);
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 40), RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 15856)));
SET64(3, (s64)(s32)0x4c0000);
c->f[15].u = rd32(c, (RW(3) + 15872));
SET64(2, (s64)(s32)0x4c0000);
c->f[12].u = rd32(c, (RW(2) + 15860));
SET64(3, (s64)(s32)0x4c0000);
c->f[17].u = rd32(c, (RW(3) + 15880));
SET64(2, (s64)(s32)0x4c0000);
c->f[13].u = rd32(c, (RW(2) + 15864));
SET64(2, (s64)(s32)0x4c0000);
c->f[14].u = rd32(c, (RW(2) + 15868));
SET64(2, (s64)(s32)0x4c0000);
c->f[16].u = rd32(c, (RW(2) + 15876));
SET64(2, (s64)(s32)0x4c0000);
c->f[18].u = rd32(c, (RW(2) + 15884));
SET64(31, 0x1f5350); SET32(6, RW(29) + 32); JP_F_001D15B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f535c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F5370(Ctx *c) { /* func_001F5370 */
ENTER(0x1f5370);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f5384); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3e440000);
SET64(3, (s64)(s32)0x3ed20000);
wr32(c, (RW(29) + 36), RW(2));
SET32(4, RW(16) + 352);
SET64(2, (s64)(s32)0x3e9e0000);
wr32(c, (RW(29) + 32), RW(3));
wr32(c, (RW(29) + 44), RW(2));
SET64(3, (s64)(s32)0x3f070000);
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 40), RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 15824)));
SET64(3, (s64)(s32)0x4c0000);
c->f[15].u = rd32(c, (RW(3) + 15840));
SET64(2, (s64)(s32)0x4c0000);
c->f[12].u = rd32(c, (RW(2) + 15828));
SET64(2, (s64)(s32)0x4c0000);
c->f[13].u = rd32(c, (RW(2) + 15832));
SET64(2, (s64)(s32)0x4c0000);
c->f[14].u = rd32(c, (RW(2) + 15836));
SET64(2, (s64)(s32)0x4c0000);
c->f[16].u = rd32(c, (RW(2) + 15844));
SET64(31, 0x1f53e0); SET32(6, RW(29) + 32); JP_F_002244C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f53ec); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F5400(Ctx *c) { /* func_001F5400 */
ENTER(0x1f5400);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f5414); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3e440000);
SET64(3, (s64)(s32)0x3ed20000);
wr32(c, (RW(29) + 36), RW(2));
SET32(4, RW(16) + 352);
SET64(2, (s64)(s32)0x3e9e0000);
wr32(c, (RW(29) + 32), RW(3));
wr32(c, (RW(29) + 44), RW(2));
SET64(3, (s64)(s32)0x3f070000);
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 40), RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 15792)));
SET64(3, (s64)(s32)0x4c0000);
c->f[15].u = rd32(c, (RW(3) + 15808));
SET64(2, (s64)(s32)0x4c0000);
c->f[12].u = rd32(c, (RW(2) + 15796));
SET64(2, (s64)(s32)0x4c0000);
c->f[13].u = rd32(c, (RW(2) + 15800));
SET64(2, (s64)(s32)0x4c0000);
c->f[14].u = rd32(c, (RW(2) + 15804));
SET64(2, (s64)(s32)0x4c0000);
c->f[16].u = rd32(c, (RW(2) + 15812));
SET64(31, 0x1f5470); SET32(6, RW(29) + 32); JP_F_002244C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f547c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F5490(Ctx *c) { /* func_001F5490 */
ENTER(0x1f5490);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f54a4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3e440000);
SET64(3, (s64)(s32)0x3ed20000);
wr32(c, (RW(29) + 36), RW(2));
SET32(4, RW(16) + 352);
SET64(2, (s64)(s32)0x3e9e0000);
wr32(c, (RW(29) + 32), RW(3));
wr32(c, (RW(29) + 44), RW(2));
SET64(3, (s64)(s32)0x3f070000);
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 40), RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 15760)));
SET64(3, (s64)(s32)0x4c0000);
c->f[15].u = rd32(c, (RW(3) + 15776));
SET64(2, (s64)(s32)0x4c0000);
c->f[12].u = rd32(c, (RW(2) + 15764));
SET64(2, (s64)(s32)0x4c0000);
c->f[13].u = rd32(c, (RW(2) + 15768));
SET64(2, (s64)(s32)0x4c0000);
c->f[14].u = rd32(c, (RW(2) + 15772));
SET64(2, (s64)(s32)0x4c0000);
c->f[16].u = rd32(c, (RW(2) + 15780));
SET64(31, 0x1f5500); SET32(6, RW(29) + 32); JP_F_002244C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f550c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F5520(Ctx *c) { /* func_001F5520 */
ENTER(0x1f5520);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f5534); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3e440000);
SET64(3, (s64)(s32)0x3ed20000);
wr32(c, (RW(29) + 36), RW(2));
SET32(4, RW(16) + 352);
SET64(2, (s64)(s32)0x3e9e0000);
wr32(c, (RW(29) + 32), RW(3));
wr32(c, (RW(29) + 44), RW(2));
SET64(3, (s64)(s32)0x3f070000);
SET64(2, (s64)(s32)0x4c0000);
wr32(c, (RW(29) + 40), RW(3));
SET64(5, (s32)rd32(c, (RW(2) + 15728)));
SET64(3, (s64)(s32)0x4c0000);
c->f[15].u = rd32(c, (RW(3) + 15744));
SET64(2, (s64)(s32)0x4c0000);
c->f[12].u = rd32(c, (RW(2) + 15732));
SET64(2, (s64)(s32)0x4c0000);
c->f[13].u = rd32(c, (RW(2) + 15736));
SET64(2, (s64)(s32)0x4c0000);
c->f[14].u = rd32(c, (RW(2) + 15740));
SET64(2, (s64)(s32)0x4c0000);
c->f[16].u = rd32(c, (RW(2) + 15748));
SET64(31, 0x1f5590); SET32(6, RW(29) + 32); JP_F_002244C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f559c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F55B0(Ctx *c) { /* func_001F55B0 */
ENTER(0x1f55b0);
SET32(29, RW(29) + -288);
SET32(2, RW(0) + 17);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RD(5) == RD(2); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_001F55E0; }
SET64(2, RD(0) + RD(0)); goto L_001F580C;
L_001F55E0:;
SET64(5, (s16)rd16(c, (RW(4) + 360)));
SET64(21, RD(0) + RD(0));
{ int t = RSD(5) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_001F5620; }
SET64(7, (s32)rd32(c, (RW(4) + 356)));
SET32(3, RW(0) + 4);
L_001F55F8:;
SET64(2, (s16)rd16(c, (RW(7) + 174)));
{ int t = RD(2) != RD(3);  if (t) goto L_001F5608; }
SET64(21, (s32)rd32(c, (RW(4) + 204)));
L_001F5608:;
SET32(8, RW(8) + 1);
SET64(2, RSD(8) < RSD(5));
SET32(7, RW(7) + 208);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_001F55F8; } }
L_001F5620:;
if (RD(21) != RD(0)) { SET64(2, (s64)(s32)0x3f800000); goto L_001F5630; }
SET64(2, RD(0) + RD(0)); goto L_001F580C;
L_001F5630:;
wr32(c, (RW(29) + 192), RW(0));
wr32(c, (RW(29) + 196), RW(0));
SET64(20, RD(6) + RD(0));
wr32(c, (RW(29) + 200), RW(0));
wr32(c, (RW(29) + 204), RW(2));
rd128(c, (RW(29) + 192) & ~15u, &c->r[4]);
wr32(c, (RW(29) + 176), RW(0));
wr32(c, (RW(29) + 180), RW(0));
wr32(c, (RW(29) + 184), RW(0));
wr32(c, (RW(29) + 188), RW(2));
wr32(c, (RW(29) + 172), RW(2));
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 164), RW(0));
wr32(c, (RW(29) + 168), RW(0));
rd128(c, (RW(29) + 176) & ~15u, &c->r[3]);
wr128(c, (RW(6) + 0) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(6) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(6) + 32) & ~15u, &c->r[2]);
SET64(2, rd16(c, (RW(21) + 456)));
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_001F5788; }
SET64(16, RD(0) + RD(0));
L_001F568C:;
SET64(2, (s32)rd32(c, (RW(21) + 464)));
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_001F5770; }
SET64(18, (s32)rd32(c, (RW(2) + 36)));
{ int t = RD(18) == RD(0);  if (t) goto L_001F5770; }
L_001F56B0:;
SET64(2, rd16(c, (RW(18) + 28)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_001F5758; }
L_001F56C0:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x1f56cc); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
rd128(c, (RW(2) + 0) & ~15u, &c->r[2]);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 284), RW(3));
c->f[1].u = rd32(c, (RW(20) + 8));
wr32(c, (RW(29) + 272), RW(0));
wr32(c, (RW(29) + 276), RW(0));
wr32(c, (RW(29) + 280), RW(0));
wr128(c, (RW(29) + 272) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 280));
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_001F5700; }
wr128(c, (RW(20) + 0) & ~15u, &c->r[2]);
L_001F5700:;
c->f[0].u = rd32(c, (RW(29) + 272));
c->f[1].u = rd32(c, (RW(20) + 16));
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_001F5720; }
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
wr128(c, (RW(20) + 16) & ~15u, &c->r[2]);
L_001F5720:;
c->f[0].u = rd32(c, (RW(29) + 272));
c->f[1].u = rd32(c, (RW(20) + 32));
c->fcc = F(0) < F(1);
{ int t = !c->fcc;  if (t) goto L_001F5740; }
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
wr128(c, (RW(20) + 32) & ~15u, &c->r[2]);
L_001F5740:;
SET64(2, rd16(c, (RW(18) + 28)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001F56C0; } }
L_001F5758:;
SET64(18, (s32)rd32(c, (RW(18) + 68)));
{ int t = RD(18) == RD(0);  if (t) goto L_001F5768; }
SET32(18, RW(18) + -64);
L_001F5768:;
{ int t = RD(18) != RD(0);  if (t) { POLL(); goto L_001F56B0; } }
L_001F5770:;
SET64(2, rd16(c, (RW(21) + 456)));
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_001F568C; } }
L_001F5788:;
SET32(4, RW(21) + 192);
SET64(31, 0x1f5794); SET32(5, RW(0) + 1); JP_F_001520B0(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x1f57a0); SET32(4, RW(29) + 208); JP_F_002AF080(c);
rd128(c, (RW(16) + 64) & ~15u, &c->r[2]);
SET32(6, RW(29) + 208);
SET32(4, RW(29) + 144);
SET64(5, RD(20) + RD(0));
wr128(c, (RW(29) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 80) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 224) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 240) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 112) & ~15u, &c->r[2]);
SET64(31, 0x1f57d0); wr128(c, (RW(29) + 256) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET32(4, RW(29) + 128);
SET32(5, RW(20) + 16);
SET32(6, RW(29) + 208);
SET64(31, 0x1f57e8); wr128(c, (RW(20) + 0) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET32(4, RW(29) + 112);
SET32(5, RW(20) + 32);
SET32(6, RW(29) + 208);
SET64(31, 0x1f5800); wr128(c, (RW(20) + 16) & ~15u, &c->r[2]); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
SET32(2, RW(0) + 1);
wr128(c, (RW(20) + 32) & ~15u, &c->r[3]);
L_001F580C:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 288); return;
}

void JP_F_001F5830(Ctx *c) { /* func_001F5830 */
ENTER(0x1f5830);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) == RD(3); SET64(7, RD(4) + RD(0)); if (t) goto L_001F584C; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_001F5880;
L_001F584C:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 28), RW(2));
SET32(4, RW(7) + 352);
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 24), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(7) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 200)));
{ u32 t = RW(25); SET64(31, 0x1f587c); SET32(5, RW(29) + 16); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_001F5880:;
SET32(29, RW(29) + 32); return;
}

void JP_F_001F5890(Ctx *c) { /* func_001F5890 */
ENTER(0x1f5890);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f58b0); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1f58b8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F58D0(Ctx *c) { /* func_001F58D0 */
ENTER(0x1f58d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f58e4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 7);
SET32(4, RW(16) + 352);
wr32(c, (RW(29) + 32), RW(2));
SET32(5, RW(0) + 12);
SET32(2, RW(0) + 86);
SET32(6, RW(29) + 32);
wr32(c, (RW(29) + 40), RW(2));
SET32(7, RW(0) + 4);
SET32(2, RW(0) + 16);
SET32(8, RW(0) + 5);
wr32(c, (RW(29) + 44), RW(2));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x1f5920); wr32(c, (RW(29) + 36), RW(0)); JP_F_001D4100(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f592c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F5940(Ctx *c) { /* func_001F5940 */
ENTER(0x1f5940);
SET32(29, RW(29) + -352);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f5954); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 352);
c->f[12].u = RW(2);
SET64(31, 0x1f5968); SET32(5, RW(0) + 28); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5974); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 1616);
c->f[12].u = RW(2);
SET64(31, 0x1f5988); SET32(5, RW(0) + 29); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5994); SET32(5, RW(16) + 1616); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 2880);
c->f[12].u = RW(2);
SET64(31, 0x1f59a8); SET32(5, RW(0) + 30); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f59b4); SET32(5, RW(16) + 2880); JP_F_001B6520(c);
SET32(4, RW(16) + 4160);
SET64(31, 0x1f59c0); SET32(5, RW(0) + 17); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f59cc); SET32(5, RW(16) + 4160); JP_F_001B6520(c);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0xbf800000);
wr32(c, (RW(29) + 320), RW(2));
SET32(4, RW(29) + 64);
wr32(c, (RW(29) + 336), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 340), RW(0));
SET32(5, RW(29) + 304);
wr32(c, (RW(29) + 344), RW(3));
SET32(6, RW(29) + 288);
wr32(c, (RW(29) + 348), RW(3));
wr32(c, (RW(29) + 324), RW(0));
wr32(c, (RW(29) + 328), RW(0));
wr32(c, (RW(29) + 332), RW(3));
wr32(c, (RW(29) + 300), RW(3));
wr32(c, (RW(29) + 316), RW(3));
rd128(c, (RW(29) + 320) & ~15u, &c->r[7]);
rd128(c, (RW(29) + 336) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 288), RW(0));
wr32(c, (RW(29) + 292), RW(0));
wr32(c, (RW(29) + 296), RW(0));
wr32(c, (RW(29) + 304), RW(0));
wr32(c, (RW(29) + 308), RW(0));
wr32(c, (RW(29) + 312), RW(0));
wr128(c, (RW(29) + 288) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 304) & ~15u, &c->r[3]);
wr8(c, (RW(16) + 864), (u8)RW(2));
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET64(31, 0x1f5a44); wr128(c, (RW(16) + 832) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 124), RW(2));
SET32(4, RW(29) + 112);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
SET64(31, 0x1f5a68); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[5]);
SET64(8, (s64)(s32)0x3f800000);
rd128(c, (RW(29) + 320) & ~15u, &c->r[7]);
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 336) & ~15u, &c->r[3]);
SET32(4, RW(29) + 48);
wr128(c, (RW(16) + 848) & ~15u, &c->r[5]);
SET32(6, RW(29) + 256);
wr32(c, (RW(29) + 256), RW(0));
SET32(5, RW(29) + 272);
wr32(c, (RW(29) + 260), RW(0));
wr32(c, (RW(29) + 264), RW(0));
wr32(c, (RW(29) + 268), RW(8));
wr32(c, (RW(29) + 284), RW(8));
wr32(c, (RW(29) + 272), RW(0));
wr32(c, (RW(29) + 276), RW(0));
wr32(c, (RW(29) + 280), RW(0));
wr128(c, (RW(29) + 256) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 272) & ~15u, &c->r[3]);
wr8(c, (RW(16) + 2128), (u8)RW(2));
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
SET64(31, 0x1f5ac4); wr128(c, (RW(16) + 2096) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET32(4, RW(29) + 96);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
SET64(31, 0x1f5ae8); wr128(c, (RW(29) + 96) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[5]);
SET64(8, (s64)(s32)0x3f800000);
rd128(c, (RW(29) + 320) & ~15u, &c->r[7]);
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 336) & ~15u, &c->r[3]);
SET32(4, RW(29) + 32);
wr128(c, (RW(16) + 2112) & ~15u, &c->r[5]);
SET32(6, RW(29) + 224);
wr32(c, (RW(29) + 224), RW(0));
SET32(5, RW(29) + 240);
wr32(c, (RW(29) + 228), RW(0));
wr32(c, (RW(29) + 232), RW(0));
wr32(c, (RW(29) + 236), RW(8));
wr32(c, (RW(29) + 252), RW(8));
wr32(c, (RW(29) + 240), RW(0));
wr32(c, (RW(29) + 244), RW(0));
wr32(c, (RW(29) + 248), RW(0));
wr128(c, (RW(29) + 224) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 240) & ~15u, &c->r[3]);
wr8(c, (RW(16) + 3392), (u8)RW(2));
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
SET64(31, 0x1f5b44); wr128(c, (RW(16) + 3360) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 92), RW(2));
SET32(4, RW(29) + 80);
rd128(c, (RW(29) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 84), RW(0));
wr32(c, (RW(29) + 88), RW(0));
SET64(31, 0x1f5b68); wr128(c, (RW(29) + 80) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3dcc0000);
SET64(2, RD(2) | 0xcccd);
SET64(4, RD(16) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x1f5b84); wr128(c, (RW(16) + 3376) & ~15u, &c->r[3]); JP_F_001FEC40(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 352); return;
}

void JP_F_001F5BA0(Ctx *c) { /* func_001F5BA0 */
ENTER(0x1f5ba0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f5bb8); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 3);
SET32(4, RW(16) + 384);
SET64(31, 0x1f5bc8); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5bd4); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 4);
SET32(4, RW(16) + 1984);
SET64(31, 0x1f5be4); wr32(c, (RW(16) + 3496), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5bf0); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 96);
c->f[12].u = RW(0);
c->f[14].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x1f5c0c); c->f[15].u = c->f[14].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 80);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
c->f[15].u = c->f[12].u;
SET64(31, 0x1f5c30); c->f[14].u = c->f[13].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 384);
SET64(31, 0x1f5c44); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 64);
c->f[12].u = RW(0);
c->f[14].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x1f5c60); c->f[15].u = c->f[14].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 48);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
c->f[15].u = c->f[12].u;
SET64(31, 0x1f5c84); c->f[14].u = c->f[13].u; JP_F_0013E810(c);
SET32(4, RW(16) + 1984);
SET64(6, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x1f5c98); SET64(7, RD(2) + RD(0)); JP_F_00182120(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_001F5CB0(Ctx *c) { /* func_001F5CB0 */
ENTER(0x1f5cb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f5cc4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 21);
SET32(4, RW(16) + 16064);
SET64(31, 0x1f5cd4); wr32(c, (RW(16) + 17576), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5ce0); SET32(5, RW(16) + 16064); JP_F_001B6520(c);
SET32(4, RW(16) + 17664);
SET64(31, 0x1f5cec); SET32(5, RW(0) + 23); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5cf8); SET32(5, RW(16) + 17664); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 17672)));
c->f[12].u = RW(0);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f5d0c); SET32(4, RW(16) + 17664); rt_call(c, t); }
SET32(4, RW(16) + 19072);
SET64(31, 0x1f5d18); SET32(5, RW(0) + 23); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5d24); SET32(5, RW(16) + 19072); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 19080)));
SET64(2, (s64)(s32)0x41400000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f5d3c); SET32(4, RW(16) + 19072); rt_call(c, t); }
SET32(4, RW(16) + 20480);
SET64(31, 0x1f5d48); SET32(5, RW(0) + 23); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5d54); SET32(5, RW(16) + 20480); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 20488)));
SET64(2, (s64)(s32)0x41c00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f5d6c); SET32(4, RW(16) + 20480); rt_call(c, t); }
SET32(4, RW(16) + 21888);
SET64(31, 0x1f5d78); SET32(5, RW(0) + 23); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5d84); SET32(5, RW(16) + 21888); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 21896)));
SET64(2, (s64)(s32)0x42100000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f5d9c); SET32(4, RW(16) + 21888); rt_call(c, t); }
SET32(4, RW(16) + 23296);
SET64(31, 0x1f5da8); SET32(5, RW(0) + 23); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5db4); SET32(5, RW(16) + 23296); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 23304)));
SET64(2, (s64)(s32)0x42400000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f5dcc); SET32(4, RW(16) + 23296); rt_call(c, t); }
SET32(4, RW(16) + 24704);
SET64(31, 0x1f5dd8); SET32(5, RW(0) + 24); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5de4); SET32(5, RW(16) + 24704); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 24712)));
SET64(2, (s64)(s32)0x40c00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f5dfc); SET32(4, RW(16) + 24704); rt_call(c, t); }
SET32(4, RW(16) + 26112);
SET64(31, 0x1f5e08); SET32(5, RW(0) + 24); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5e14); SET32(5, RW(16) + 26112); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 26120)));
SET64(2, (s64)(s32)0x41900000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f5e2c); SET32(4, RW(16) + 26112); rt_call(c, t); }
SET32(4, RW(16) + 27520);
SET64(31, 0x1f5e38); SET32(5, RW(0) + 24); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5e44); SET32(5, RW(16) + 27520); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 27528)));
SET64(2, (s64)(s32)0x41f00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f5e5c); SET32(4, RW(16) + 27520); rt_call(c, t); }
SET32(4, RW(16) + 28928);
SET64(31, 0x1f5e68); SET32(5, RW(0) + 24); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5e74); SET32(5, RW(16) + 28928); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 28936)));
SET64(2, (s64)(s32)0x42280000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f5e8c); SET32(4, RW(16) + 28928); rt_call(c, t); }
SET32(4, RW(16) + 30336);
SET64(31, 0x1f5e98); SET32(5, RW(0) + 24); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5ea4); SET32(5, RW(16) + 30336); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 30344)));
SET64(2, (s64)(s32)0x42580000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f5ebc); SET32(4, RW(16) + 30336); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F5ED0(Ctx *c) { /* func_001F5ED0 */
ENTER(0x1f5ed0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f5ee4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 352);
c->f[12].u = RW(2);
SET64(31, 0x1f5ef8); SET32(5, RW(0) + 18); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5f04); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET32(2, RW(0) + 176);
SET32(3, RW(0) + 112);
wr32(c, (RW(29) + 32), RW(2));
SET32(4, RW(16) + 1536);
SET32(2, RW(0) + 208);
wr32(c, (RW(29) + 36), RW(3));
wr32(c, (RW(29) + 40), RW(2));
SET32(3, RW(0) + 144);
SET64(2, (s64)(s32)0x40e00000);
wr32(c, (RW(29) + 44), RW(3));
c->f[12].u = RW(2);
SET32(5, RW(0) + 8);
SET64(31, 0x1f5f3c); SET32(6, RW(29) + 32); JP_F_001D4470(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5f48); SET32(5, RW(16) + 1536); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F5F60(Ctx *c) { /* func_001F5F60 */
ENTER(0x1f5f60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f5f74); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f5f80); SET32(5, RW(0) + 4); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5f8c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F5FA0(Ctx *c) { /* func_001F5FA0 */
ENTER(0x1f5fa0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f5fb4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f5fc0); SET32(5, RW(0) + 2); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f5fcc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F5FE0(Ctx *c) { /* func_001F5FE0 */
ENTER(0x1f5fe0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f5ff4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f6000); SET32(5, RW(0) + 3); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f600c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F6020(Ctx *c) { /* func_001F6020 */
ENTER(0x1f6020);
SET32(29, RW(29) + -400);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f6034); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 3392);
SET64(31, 0x1f6040); SET64(5, RD(0) + RD(0)); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f604c); SET32(5, RW(16) + 3392); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 96);
wr32(c, (RW(29) + 324), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 320), RW(0));
wr32(c, (RW(29) + 332), RW(2));
SET64(31, 0x1f606c); wr32(c, (RW(29) + 328), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1f6078); SET32(5, RW(29) + 320); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f6084); SET32(4, RW(29) + 336); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 3400)));
SET32(4, RW(16) + 3392);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f6098); SET32(5, RW(29) + 336); rt_call(c, t); }
SET32(2, RW(0) + 1);
SET32(4, RW(16) + 4800);
SET64(31, 0x1f60a8); wr32(c, (RW(16) + 6312), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f60b4); SET32(5, RW(16) + 4800); JP_F_001B6520(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 288), RW(0));
wr32(c, (RW(29) + 292), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 296), RW(3));
SET32(4, RW(29) + 160);
wr32(c, (RW(29) + 300), RW(3));
SET32(5, RW(29) + 304);
wr32(c, (RW(29) + 304), RW(0));
SET32(6, RW(29) + 288);
wr32(c, (RW(29) + 308), RW(3));
wr32(c, (RW(29) + 316), RW(3));
wr32(c, (RW(29) + 312), RW(0));
wr8(c, (RW(16) + 6304), (u8)RW(2));
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET64(31, 0x1f60f8); wr128(c, (RW(16) + 6272) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 176), RW(0));
wr32(c, (RW(29) + 188), RW(2));
SET32(4, RW(29) + 176);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 180), RW(0));
wr32(c, (RW(29) + 184), RW(0));
SET64(31, 0x1f611c); wr128(c, (RW(29) + 176) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET32(4, RW(29) + 32);
SET64(31, 0x1f612c); wr128(c, (RW(16) + 6288) & ~15u, &c->r[2]); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f6138); SET32(5, RW(28) + -31552); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f6144); SET32(4, RW(29) + 224); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 4808)));
SET32(4, RW(16) + 4800);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f6158); SET32(5, RW(29) + 224); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 400); return;
}

void JP_F_001F6170(Ctx *c) { /* func_001F6170 */
ENTER(0x1f6170);
SET32(29, RW(29) + -416);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f6184); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 352);
c->f[12].u = RW(2);
SET64(31, 0x1f6198); SET32(5, RW(0) + 34); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f61a4); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 1616);
c->f[12].u = RW(2);
SET64(31, 0x1f61b8); SET32(5, RW(0) + 35); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f61c4); SET32(5, RW(16) + 1616); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 2880);
c->f[12].u = RW(2);
SET64(31, 0x1f61d8); SET32(5, RW(0) + 38); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f61e4); SET32(5, RW(16) + 2880); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 5696);
c->f[12].u = RW(2);
SET64(31, 0x1f61f8); SET32(5, RW(0) + 36); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6204); SET32(5, RW(16) + 5696); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 6960);
c->f[12].u = RW(2);
SET64(31, 0x1f6218); SET32(5, RW(0) + 37); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6224); SET32(5, RW(16) + 6960); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 384), RW(2));
SET32(4, RW(29) + 80);
wr32(c, (RW(29) + 388), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 392), RW(0));
SET32(5, RW(29) + 400);
wr32(c, (RW(29) + 396), RW(3));
SET32(6, RW(29) + 384);
wr32(c, (RW(29) + 400), RW(0));
wr32(c, (RW(29) + 404), RW(0));
wr32(c, (RW(29) + 408), RW(3));
wr32(c, (RW(29) + 412), RW(3));
wr8(c, (RW(16) + 864), (u8)RW(2));
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
SET64(31, 0x1f626c); wr128(c, (RW(16) + 832) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 156), RW(2));
SET32(4, RW(29) + 144);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
SET64(31, 0x1f6290); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[6]);
SET64(7, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0xbf800000);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 64);
SET32(5, RW(29) + 368);
wr128(c, (RW(16) + 848) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 352), RW(3));
SET32(6, RW(29) + 352);
wr32(c, (RW(29) + 356), RW(0));
wr32(c, (RW(29) + 360), RW(0));
wr32(c, (RW(29) + 364), RW(7));
wr32(c, (RW(29) + 368), RW(0));
wr32(c, (RW(29) + 372), RW(0));
wr32(c, (RW(29) + 376), RW(7));
wr32(c, (RW(29) + 380), RW(7));
wr8(c, (RW(16) + 2128), (u8)RW(2));
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
SET64(31, 0x1f62e0); wr128(c, (RW(16) + 2096) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 140), RW(2));
SET32(4, RW(29) + 128);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
SET64(31, 0x1f6304); wr128(c, (RW(29) + 128) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 128) & ~15u, &c->r[6]);
SET64(7, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0xbf800000);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 48);
SET32(5, RW(29) + 336);
wr128(c, (RW(16) + 2112) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 320), RW(3));
SET32(6, RW(29) + 320);
wr32(c, (RW(29) + 324), RW(0));
wr32(c, (RW(29) + 328), RW(0));
wr32(c, (RW(29) + 332), RW(7));
wr32(c, (RW(29) + 336), RW(0));
wr32(c, (RW(29) + 340), RW(0));
wr32(c, (RW(29) + 344), RW(7));
wr32(c, (RW(29) + 348), RW(7));
wr8(c, (RW(16) + 6208), (u8)RW(2));
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
SET64(31, 0x1f6354); wr128(c, (RW(16) + 6176) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 124), RW(2));
SET32(4, RW(29) + 112);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
SET64(31, 0x1f6378); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[6]);
SET64(7, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0xbf800000);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 32);
SET32(5, RW(29) + 304);
wr128(c, (RW(16) + 6192) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 288), RW(3));
SET32(6, RW(29) + 288);
wr32(c, (RW(29) + 292), RW(0));
wr32(c, (RW(29) + 296), RW(0));
wr32(c, (RW(29) + 300), RW(7));
wr32(c, (RW(29) + 304), RW(0));
wr32(c, (RW(29) + 308), RW(0));
wr32(c, (RW(29) + 312), RW(7));
wr32(c, (RW(29) + 316), RW(7));
wr8(c, (RW(16) + 7472), (u8)RW(2));
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET64(31, 0x1f63c8); wr128(c, (RW(16) + 7440) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET32(4, RW(29) + 96);
rd128(c, (RW(29) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
SET64(31, 0x1f63ec); wr128(c, (RW(29) + 96) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3dcc0000);
SET64(2, RD(2) | 0xcccd);
c->f[12].u = RW(2);
wr128(c, (RW(16) + 7456) & ~15u, &c->r[3]);
SET64(25, (s32)rd32(c, (RW(16) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x1f6410); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 416); return;
}

void JP_F_001F6420(Ctx *c) { /* func_001F6420 */
ENTER(0x1f6420);
SET32(29, RW(29) + -416);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f6434); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 352);
c->f[12].u = RW(2);
SET64(31, 0x1f6448); SET32(5, RW(0) + 10); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6454); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 1616);
c->f[12].u = RW(2);
SET64(31, 0x1f6468); SET32(5, RW(0) + 9); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6474); SET32(5, RW(16) + 1616); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 2880);
c->f[12].u = RW(2);
SET64(31, 0x1f6488); SET32(5, RW(0) + 8); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6494); SET32(5, RW(16) + 2880); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 5696);
c->f[12].u = RW(2);
SET64(31, 0x1f64a8); SET32(5, RW(0) + 10); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f64b4); SET32(5, RW(16) + 5696); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 6960);
c->f[12].u = RW(2);
SET64(31, 0x1f64c8); SET32(5, RW(0) + 9); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f64d4); SET32(5, RW(16) + 6960); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 384), RW(2));
SET32(4, RW(29) + 80);
wr32(c, (RW(29) + 388), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 392), RW(0));
SET32(5, RW(29) + 400);
wr32(c, (RW(29) + 396), RW(3));
SET32(6, RW(29) + 384);
wr32(c, (RW(29) + 400), RW(0));
wr32(c, (RW(29) + 404), RW(0));
wr32(c, (RW(29) + 408), RW(3));
wr32(c, (RW(29) + 412), RW(3));
wr8(c, (RW(16) + 864), (u8)RW(2));
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
SET64(31, 0x1f651c); wr128(c, (RW(16) + 832) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 156), RW(2));
SET32(4, RW(29) + 144);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
SET64(31, 0x1f6540); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[6]);
SET64(7, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0xbf800000);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 64);
SET32(5, RW(29) + 368);
wr128(c, (RW(16) + 848) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 352), RW(3));
SET32(6, RW(29) + 352);
wr32(c, (RW(29) + 356), RW(0));
wr32(c, (RW(29) + 360), RW(0));
wr32(c, (RW(29) + 364), RW(7));
wr32(c, (RW(29) + 368), RW(0));
wr32(c, (RW(29) + 372), RW(0));
wr32(c, (RW(29) + 376), RW(7));
wr32(c, (RW(29) + 380), RW(7));
wr8(c, (RW(16) + 2128), (u8)RW(2));
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
SET64(31, 0x1f6590); wr128(c, (RW(16) + 2096) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 140), RW(2));
SET32(4, RW(29) + 128);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
SET64(31, 0x1f65b4); wr128(c, (RW(29) + 128) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 128) & ~15u, &c->r[6]);
SET64(7, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0xbf800000);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 48);
SET32(5, RW(29) + 336);
wr128(c, (RW(16) + 2112) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 320), RW(3));
SET32(6, RW(29) + 320);
wr32(c, (RW(29) + 324), RW(0));
wr32(c, (RW(29) + 328), RW(0));
wr32(c, (RW(29) + 332), RW(7));
wr32(c, (RW(29) + 336), RW(0));
wr32(c, (RW(29) + 340), RW(0));
wr32(c, (RW(29) + 344), RW(7));
wr32(c, (RW(29) + 348), RW(7));
wr8(c, (RW(16) + 6208), (u8)RW(2));
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
SET64(31, 0x1f6604); wr128(c, (RW(16) + 6176) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 124), RW(2));
SET32(4, RW(29) + 112);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
SET64(31, 0x1f6628); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[6]);
SET64(7, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0xbf800000);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 32);
SET32(5, RW(29) + 304);
wr128(c, (RW(16) + 6192) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 288), RW(3));
SET32(6, RW(29) + 288);
wr32(c, (RW(29) + 292), RW(0));
wr32(c, (RW(29) + 296), RW(0));
wr32(c, (RW(29) + 300), RW(7));
wr32(c, (RW(29) + 304), RW(0));
wr32(c, (RW(29) + 308), RW(0));
wr32(c, (RW(29) + 312), RW(7));
wr32(c, (RW(29) + 316), RW(7));
wr8(c, (RW(16) + 7472), (u8)RW(2));
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET64(31, 0x1f6678); wr128(c, (RW(16) + 7440) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET32(4, RW(29) + 96);
rd128(c, (RW(29) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
SET64(31, 0x1f669c); wr128(c, (RW(29) + 96) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3dcc0000);
SET64(2, RD(2) | 0xcccd);
c->f[12].u = RW(2);
wr128(c, (RW(16) + 7456) & ~15u, &c->r[3]);
SET64(25, (s32)rd32(c, (RW(16) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x1f66c0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 416); return;
}

void JP_F_001F66D0(Ctx *c) { /* func_001F66D0 */
ENTER(0x1f66d0);
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { wr8(c, (RW(4) + 1008), (u8)RW(0)); goto L_001F66DC; }
L_001F66DC:;
 return;
}

void JP_F_001F66F0(Ctx *c) { /* func_001F66F0 */
ENTER(0x1f66f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6710); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1f6718); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F6730(Ctx *c) { /* func_001F6730 */
ENTER(0x1f6730);
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x3f110000);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s64)(s32)0x3ee20000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 32), RW(3));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 36), RW(2));
SET64(3, (s64)(s32)0x3f2f0000);
SET64(2, (s64)(s32)0x3f0f0000);
wr32(c, (RW(29) + 40), RW(3));
SET64(31, 0x1f6764); wr32(c, (RW(29) + 44), RW(2)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x40000000);
SET64(3, (s64)(s32)0x40800000);
c->f[12].u = RW(2);
SET32(4, RW(16) + 352);
SET64(2, (s64)(s32)0x3f800000);
SET32(5, RW(0) + 64);
c->f[13].u = RW(3);
c->f[14].u = RW(2);
SET64(3, (s64)(s32)0x42200000);
SET64(2, (s64)(s32)0x41a00000);
c->f[15].u = RW(3);
c->f[16].u = RW(2);
SET64(31, 0x1f679c); SET32(6, RW(29) + 32); JP_F_002244C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f67a8); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F67C0(Ctx *c) { /* func_001F67C0 */
ENTER(0x1f67c0);
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { wr8(c, (RW(4) + 1008), (u8)RW(0)); goto L_001F67CC; }
L_001F67CC:;
 return;
}

void JP_F_001F67E0(Ctx *c) { /* func_001F67E0 */
ENTER(0x1f67e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6800); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1f6808); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F6820(Ctx *c) { /* func_001F6820 */
ENTER(0x1f6820);
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x3f110000);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s64)(s32)0x3ee20000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 32), RW(3));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 36), RW(2));
SET64(3, (s64)(s32)0x3f2f0000);
SET64(2, (s64)(s32)0x3f0f0000);
wr32(c, (RW(29) + 40), RW(3));
SET64(31, 0x1f6854); wr32(c, (RW(29) + 44), RW(2)); JP_F_001B6B80(c);
SET64(3, (s64)(s32)0x40000000);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(2);
SET32(4, RW(16) + 352);
c->f[12].u = RW(3);
SET64(2, (s64)(s32)0x42200000);
SET64(3, (s64)(s32)0x42480000);
SET32(5, RW(0) + 64);
c->f[15].u = RW(3);
SET32(6, RW(29) + 32);
c->f[16].u = RW(2);
SET64(31, 0x1f6888); c->f[14].u = c->f[13].u; JP_F_002244C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6894); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F68B0(Ctx *c) { /* func_001F68B0 */
ENTER(0x1f68b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f68d0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f68e0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1f68e8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F6900(Ctx *c) { /* func_001F6900 */
ENTER(0x1f6900);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f6914); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f6920); SET32(5, RW(0) + 14); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f692c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f6938); SET32(5, RW(0) + 15); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6944); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F6960(Ctx *c) { /* func_001F6960 */
ENTER(0x1f6960);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6980); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6990); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3592)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f69a0); SET32(4, RW(16) + 3584); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 5192)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f69b0); SET32(4, RW(16) + 5184); rt_call(c, t); }
SET64(31, 0x1f69b8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F69D0(Ctx *c) { /* func_001F69D0 */
ENTER(0x1f69d0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f69e8); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 16);
SET32(4, RW(16) + 384);
SET64(31, 0x1f69f8); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6a04); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 17);
SET32(4, RW(16) + 1984);
SET64(31, 0x1f6a14); wr32(c, (RW(16) + 3496), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6a20); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET32(2, RW(0) + 18);
SET32(4, RW(16) + 3584);
SET64(31, 0x1f6a30); wr32(c, (RW(16) + 5096), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6a3c); SET32(5, RW(16) + 3584); JP_F_001B6520(c);
SET32(2, RW(0) + 19);
SET32(4, RW(16) + 5184);
SET64(31, 0x1f6a4c); wr32(c, (RW(16) + 6696), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6a58); SET32(5, RW(16) + 5184); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 160);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1f6a78); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 144);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1f6a9c); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 384);
SET64(31, 0x1f6ab0); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 128);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1f6ad0); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 112);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1f6af4); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 1984);
SET64(31, 0x1f6b08); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 96);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1f6b28); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 80);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1f6b4c); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 3584);
SET64(31, 0x1f6b60); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 64);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1f6b80); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 48);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1f6ba4); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET32(4, RW(16) + 5184);
SET64(6, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x1f6bb8); SET64(7, RD(2) + RD(0)); JP_F_00182120(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_001F6BD0(Ctx *c) { /* func_001F6BD0 */
ENTER(0x1f6bd0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6bf0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1f6bf8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F6C10(Ctx *c) { /* func_001F6C10 */
ENTER(0x1f6c10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f6c24); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f6c30); SET32(5, RW(0) + 13); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6c3c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F6C50(Ctx *c) { /* func_001F6C50 */
ENTER(0x1f6c50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6c70); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6c80); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3400)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6c90); SET32(4, RW(16) + 3392); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4808)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6ca0); SET32(4, RW(16) + 4800); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 9032)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6cb0); SET32(4, RW(16) + 9024); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 10440)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6cc0); SET32(4, RW(16) + 10432); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 11848)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6cd0); SET32(4, RW(16) + 11840); rt_call(c, t); }
SET64(31, 0x1f6cd8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F6CF0(Ctx *c) { /* func_001F6CF0 */
ENTER(0x1f6cf0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f6d04); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 9);
SET32(4, RW(16) + 384);
SET64(31, 0x1f6d14); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6d20); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1984);
SET64(31, 0x1f6d2c); SET32(5, RW(0) + 11); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6d38); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
c->f[12].u = RW(0);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f6d4c); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET32(4, RW(16) + 3392);
SET64(31, 0x1f6d58); SET32(5, RW(0) + 11); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6d64); SET32(5, RW(16) + 3392); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 3400)));
SET64(2, (s64)(s32)0x41400000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f6d7c); SET32(4, RW(16) + 3392); rt_call(c, t); }
SET32(4, RW(16) + 4800);
SET64(31, 0x1f6d88); SET32(5, RW(0) + 11); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6d94); SET32(5, RW(16) + 4800); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 4808)));
SET64(2, (s64)(s32)0x41c00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f6dac); SET32(4, RW(16) + 4800); rt_call(c, t); }
SET32(4, RW(16) + 6208);
SET64(31, 0x1f6db8); SET32(5, RW(0) + 11); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6dc4); SET32(5, RW(16) + 6208); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 6216)));
SET64(2, (s64)(s32)0x42100000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f6ddc); SET32(4, RW(16) + 6208); rt_call(c, t); }
SET32(4, RW(16) + 7616);
SET64(31, 0x1f6de8); SET32(5, RW(0) + 11); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6df4); SET32(5, RW(16) + 7616); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 7624)));
SET64(2, (s64)(s32)0x42400000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f6e0c); SET32(4, RW(16) + 7616); rt_call(c, t); }
SET32(4, RW(16) + 9024);
SET64(31, 0x1f6e18); SET32(5, RW(0) + 12); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6e24); SET32(5, RW(16) + 9024); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 9032)));
SET64(2, (s64)(s32)0x40c00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f6e3c); SET32(4, RW(16) + 9024); rt_call(c, t); }
SET32(4, RW(16) + 10432);
SET64(31, 0x1f6e48); SET32(5, RW(0) + 12); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6e54); SET32(5, RW(16) + 10432); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 10440)));
SET64(2, (s64)(s32)0x41900000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f6e6c); SET32(4, RW(16) + 10432); rt_call(c, t); }
SET32(4, RW(16) + 11840);
SET64(31, 0x1f6e78); SET32(5, RW(0) + 12); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6e84); SET32(5, RW(16) + 11840); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 11848)));
SET64(2, (s64)(s32)0x41f00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f6e9c); SET32(4, RW(16) + 11840); rt_call(c, t); }
SET32(4, RW(16) + 13248);
SET64(31, 0x1f6ea8); SET32(5, RW(0) + 12); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6eb4); SET32(5, RW(16) + 13248); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 13256)));
SET64(2, (s64)(s32)0x42280000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f6ecc); SET32(4, RW(16) + 13248); rt_call(c, t); }
SET32(4, RW(16) + 14656);
SET64(31, 0x1f6ed8); SET32(5, RW(0) + 12); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f6ee4); SET32(5, RW(16) + 14656); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 14664)));
SET64(2, (s64)(s32)0x42580000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f6efc); SET32(4, RW(16) + 14656); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F6F10(Ctx *c) { /* func_001F6F10 */
ENTER(0x1f6f10);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_001F6F30; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_001F6F78;
L_001F6F30:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 44), RW(2));
SET32(4, RW(16) + 352);
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x1f6f60); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1544)));
SET32(4, RW(16) + 1536);
SET64(25, (s32)rd32(c, (RW(25) + 200)));
{ u32 t = RW(25); SET64(31, 0x1f6f74); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
L_001F6F78:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F6F90(Ctx *c) { /* func_001F6F90 */
ENTER(0x1f6f90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6fb0); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1544)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f6fc0); SET32(4, RW(16) + 1536); rt_call(c, t); }
SET64(31, 0x1f6fc8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F6FE0(Ctx *c) { /* func_001F6FE0 */
ENTER(0x1f6fe0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f6ff4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 352);
c->f[12].u = RW(2);
SET64(31, 0x1f7008); SET32(5, RW(0) + 6); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7014); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET32(2, RW(0) + 176);
SET32(3, RW(0) + 112);
wr32(c, (RW(29) + 32), RW(2));
SET32(4, RW(16) + 1536);
SET32(2, RW(0) + 208);
wr32(c, (RW(29) + 36), RW(3));
wr32(c, (RW(29) + 40), RW(2));
SET32(3, RW(0) + 144);
SET64(2, (s64)(s32)0x40e00000);
wr32(c, (RW(29) + 44), RW(3));
c->f[12].u = RW(2);
SET32(5, RW(0) + 8);
SET64(31, 0x1f704c); SET32(6, RW(29) + 32); JP_F_001D4470(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7058); SET32(5, RW(16) + 1536); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F7070(Ctx *c) { /* func_001F7070 */
ENTER(0x1f7070);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7090); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1f7098); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F70B0(Ctx *c) { /* func_001F70B0 */
ENTER(0x1f70b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f70c4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f70d0); SET32(5, RW(0) + 5); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f70dc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F70F0(Ctx *c) { /* func_001F70F0 */
ENTER(0x1f70f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7110); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1f7118); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F7130(Ctx *c) { /* func_001F7130 */
ENTER(0x1f7130);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f7144); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f7150); SET32(5, RW(0) + 4); JP_F_001D6DB0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f715c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F7170(Ctx *c) { /* func_001F7170 */
ENTER(0x1f7170);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7190); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f71a0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f71b0); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(31, 0x1f71b8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F71D0(Ctx *c) { /* func_001F71D0 */
ENTER(0x1f71d0);
SET32(29, RW(29) + -464);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f71e4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f71f0); SET64(5, RD(0) + RD(0)); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f71fc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f7208); SET32(5, RW(0) + 1); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7214); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1f7220); SET32(5, RW(0) + 2); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f722c); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xc0000000);
SET32(4, RW(29) + 160);
wr32(c, (RW(29) + 392), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 384), RW(0));
wr32(c, (RW(29) + 396), RW(2));
SET64(31, 0x1f724c); wr32(c, (RW(29) + 388), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 160);
SET64(31, 0x1f7258); SET32(5, RW(29) + 384); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f7264); SET32(4, RW(29) + 400); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f7278); SET32(5, RW(29) + 400); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 96);
wr32(c, (RW(29) + 312), RW(2));
wr32(c, (RW(29) + 316), RW(2));
wr32(c, (RW(29) + 304), RW(0));
SET64(31, 0x1f7294); wr32(c, (RW(29) + 308), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1f72a0); SET32(5, RW(29) + 304); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f72ac); SET32(4, RW(29) + 320); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET32(4, RW(16) + 1792);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f72c0); SET32(5, RW(29) + 320); rt_call(c, t); }
SET64(2, (s64)(s32)0x40000000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 232), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 224), RW(0));
wr32(c, (RW(29) + 236), RW(2));
SET64(31, 0x1f72e0); wr32(c, (RW(29) + 228), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f72ec); SET32(5, RW(29) + 224); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f72f8); SET32(4, RW(29) + 240); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET32(4, RW(16) + 3200);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f730c); SET32(5, RW(29) + 240); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 464); return;
}

void JP_F_001F7320(Ctx *c) { /* func_001F7320 */
ENTER(0x1f7320);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7340); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1f7348); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F7360(Ctx *c) { /* func_001F7360 */
ENTER(0x1f7360);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f7374); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f7380); SET32(5, RW(0) + 16); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f738c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1f7394); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f73a0); SET32(5, RW(28) + -31556); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f73ac); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f73c0); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001F73D0(Ctx *c) { /* func_001F73D0 */
ENTER(0x1f73d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f73f0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1f73f8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F7410(Ctx *c) { /* func_001F7410 */
ENTER(0x1f7410);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f7424); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f7430); SET32(5, RW(0) + 15); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f743c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1f7444); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f7450); SET32(5, RW(28) + -31560); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f745c); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f7470); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001F7480(Ctx *c) { /* func_001F7480 */
ENTER(0x1f7480);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f74a0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f74b0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1f74b8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F74D0(Ctx *c) { /* func_001F74D0 */
ENTER(0x1f74d0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f74e4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f74f0); SET32(5, RW(0) + 10); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f74fc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f7508); SET32(5, RW(0) + 14); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7514); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x41000000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 104), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET64(31, 0x1f7534); wr32(c, (RW(29) + 100), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f7540); SET32(5, RW(29) + 96); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f754c); SET32(4, RW(29) + 112); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET32(4, RW(16) + 1792);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f7560); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_001F7570(Ctx *c) { /* func_001F7570 */
ENTER(0x1f7570);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7590); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f75a0); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3592)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f75b0); SET32(4, RW(16) + 3584); rt_call(c, t); }
SET64(31, 0x1f75b8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F75D0(Ctx *c) { /* func_001F75D0 */
ENTER(0x1f75d0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f75e8); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 11);
SET32(4, RW(16) + 384);
SET64(31, 0x1f75f8); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7604); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 12);
SET32(4, RW(16) + 1984);
SET64(31, 0x1f7614); wr32(c, (RW(16) + 3496), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7620); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET32(2, RW(0) + 13);
SET32(4, RW(16) + 3584);
SET64(31, 0x1f7630); wr32(c, (RW(16) + 5096), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f763c); SET32(5, RW(16) + 3584); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 96);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1f765c); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 80);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1f7680); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 384);
SET64(31, 0x1f7694); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 64);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1f76b4); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 48);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1f76d8); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET32(4, RW(16) + 3584);
SET64(6, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x1f76ec); SET64(7, RD(2) + RD(0)); JP_F_00182120(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_001F7700(Ctx *c) { /* func_001F7700 */
ENTER(0x1f7700);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7720); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7730); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7740); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(31, 0x1f7748); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F7760(Ctx *c) { /* func_001F7760 */
ENTER(0x1f7760);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f7774); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f7780); SET32(5, RW(0) + 6); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f778c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f7798); SET32(5, RW(0) + 8); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f77a4); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1f77b0); SET32(5, RW(0) + 9); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f77bc); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F77D0(Ctx *c) { /* func_001F77D0 */
ENTER(0x1f77d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f77f0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7800); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3592)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7810); SET32(4, RW(16) + 3584); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 5192)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7820); SET32(4, RW(16) + 5184); rt_call(c, t); }
SET64(31, 0x1f7828); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F7840(Ctx *c) { /* func_001F7840 */
ENTER(0x1f7840);
SET32(29, RW(29) + -752);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f7858); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 2);
SET32(4, RW(16) + 384);
SET64(31, 0x1f7868); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7874); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 3);
SET32(4, RW(16) + 1984);
SET64(31, 0x1f7884); wr32(c, (RW(16) + 3496), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7890); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET32(2, RW(0) + 4);
SET32(4, RW(16) + 3584);
SET64(31, 0x1f78a0); wr32(c, (RW(16) + 5096), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f78ac); SET32(5, RW(16) + 3584); JP_F_001B6520(c);
SET32(2, RW(0) + 5);
SET32(4, RW(16) + 5184);
SET64(31, 0x1f78bc); wr32(c, (RW(16) + 6696), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f78c8); SET32(5, RW(16) + 5184); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 416);
c->f[12].u = RW(0);
c->f[14].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x1f78e4); c->f[15].u = c->f[14].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 400);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
c->f[15].u = c->f[12].u;
SET64(31, 0x1f7908); c->f[14].u = c->f[13].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 384);
SET64(31, 0x1f791c); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 384);
c->f[12].u = RW(0);
c->f[14].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x1f7938); c->f[15].u = c->f[14].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 368);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
c->f[15].u = c->f[12].u;
SET64(31, 0x1f795c); c->f[14].u = c->f[13].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 1984);
SET64(31, 0x1f7970); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 352);
c->f[12].u = RW(0);
c->f[14].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x1f798c); c->f[15].u = c->f[14].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 336);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
c->f[15].u = c->f[12].u;
SET64(31, 0x1f79b0); c->f[14].u = c->f[13].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 3584);
SET64(31, 0x1f79c4); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 320);
c->f[12].u = RW(0);
c->f[14].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x1f79e0); c->f[15].u = c->f[14].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 304);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
c->f[15].u = c->f[12].u;
SET64(31, 0x1f7a04); c->f[14].u = c->f[13].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 5184);
SET64(31, 0x1f7a18); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(2, (s64)(s32)0xc0c00000);
SET32(4, RW(29) + 240);
wr32(c, (RW(29) + 680), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 672), RW(0));
wr32(c, (RW(29) + 684), RW(2));
SET64(31, 0x1f7a38); wr32(c, (RW(29) + 676), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 240);
SET64(31, 0x1f7a44); SET32(5, RW(29) + 672); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f7a50); SET32(4, RW(29) + 688); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 688) & ~15u, &c->r[5]);
SET64(3, (s64)(s32)0xc0c00000);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 176);
wr128(c, (RW(16) + 1792) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 704) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 1808) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 720) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 1824) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 736) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 1840) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 600), RW(3));
wr32(c, (RW(29) + 604), RW(2));
wr32(c, (RW(29) + 592), RW(0));
SET64(31, 0x1f7a90); wr32(c, (RW(29) + 596), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 176);
SET64(31, 0x1f7a9c); SET32(5, RW(29) + 592); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f7aa8); SET32(4, RW(29) + 608); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 608) & ~15u, &c->r[5]);
SET64(3, (s64)(s32)0xc0c00000);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 112);
wr128(c, (RW(16) + 3392) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 624) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 3408) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 640) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 3424) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 656) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 3440) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 520), RW(3));
wr32(c, (RW(29) + 524), RW(2));
wr32(c, (RW(29) + 512), RW(0));
SET64(31, 0x1f7ae8); wr32(c, (RW(29) + 516), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 112);
SET64(31, 0x1f7af4); SET32(5, RW(29) + 512); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f7b00); SET32(4, RW(29) + 528); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 528) & ~15u, &c->r[5]);
SET64(3, (s64)(s32)0xc0c00000);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 48);
wr128(c, (RW(16) + 4992) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 544) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 5008) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 560) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 5024) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 576) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 5040) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 440), RW(3));
wr32(c, (RW(29) + 444), RW(2));
wr32(c, (RW(29) + 432), RW(0));
SET64(31, 0x1f7b40); wr32(c, (RW(29) + 436), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x1f7b4c); SET32(5, RW(29) + 432); JP_F_00165780(c);
SET32(4, RW(29) + 448);
SET64(31, 0x1f7b58); SET64(5, RD(2) + RD(0)); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 448) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 6592) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 464) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 6608) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 480) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 6624) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 496) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 6640) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 752); return;
}

void JP_F_001F7B90(Ctx *c) { /* func_001F7B90 */
ENTER(0x1f7b90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7bb0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7bc0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1f7bc8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F7BE0(Ctx *c) { /* func_001F7BE0 */
ENTER(0x1f7be0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f7bf4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f7c00); SET64(5, RD(0) + RD(0)); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7c0c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f7c18); SET32(5, RW(0) + 1); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7c24); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F7C40(Ctx *c) { /* func_001F7C40 */
ENTER(0x1f7c40);
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { wr8(c, (RW(4) + 1008), (u8)RW(0)); goto L_001F7C4C; }
L_001F7C4C:;
 return;
}

void JP_F_001F7C60(Ctx *c) { /* func_001F7C60 */
ENTER(0x1f7c60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7c80); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1f7c88); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F7CA0(Ctx *c) { /* func_001F7CA0 */
ENTER(0x1f7ca0);
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x3f010000);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s64)(s32)0x3f490000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 32), RW(3));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 36), RW(2));
SET64(3, (s64)(s32)0x3f1f0000);
SET64(2, (s64)(s32)0x3f670000);
wr32(c, (RW(29) + 40), RW(3));
SET64(31, 0x1f7cd4); wr32(c, (RW(29) + 44), RW(2)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x40000000);
SET64(3, (s64)(s32)0x40800000);
c->f[12].u = RW(2);
SET32(4, RW(16) + 352);
SET64(2, (s64)(s32)0x3f800000);
SET32(5, RW(0) + 64);
c->f[13].u = RW(3);
c->f[14].u = RW(2);
SET64(3, (s64)(s32)0x42200000);
SET64(2, (s64)(s32)0x41a00000);
c->f[15].u = RW(3);
c->f[16].u = RW(2);
SET64(31, 0x1f7d0c); SET32(6, RW(29) + 32); JP_F_002244C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7d18); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F7D30(Ctx *c) { /* func_001F7D30 */
ENTER(0x1f7d30);
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { wr8(c, (RW(4) + 1008), (u8)RW(0)); goto L_001F7D3C; }
L_001F7D3C:;
 return;
}

void JP_F_001F7D50(Ctx *c) { /* func_001F7D50 */
ENTER(0x1f7d50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f7d70); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1f7d78); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F7D90(Ctx *c) { /* func_001F7D90 */
ENTER(0x1f7d90);
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x3f010000);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s64)(s32)0x3f490000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 32), RW(3));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 36), RW(2));
SET64(3, (s64)(s32)0x3f1f0000);
SET64(2, (s64)(s32)0x3f670000);
wr32(c, (RW(29) + 40), RW(3));
SET64(31, 0x1f7dc4); wr32(c, (RW(29) + 44), RW(2)); JP_F_001B6B80(c);
SET64(3, (s64)(s32)0x40000000);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(2);
SET32(4, RW(16) + 352);
c->f[12].u = RW(3);
SET64(2, (s64)(s32)0x42200000);
SET64(3, (s64)(s32)0x42480000);
SET32(5, RW(0) + 64);
c->f[15].u = RW(3);
SET32(6, RW(29) + 32);
c->f[16].u = RW(2);
SET64(31, 0x1f7df8); c->f[14].u = c->f[13].u; JP_F_002244C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7e04); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F7E20(Ctx *c) { /* func_001F7E20 */
ENTER(0x1f7e20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f7e34); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 22);
SET32(4, RW(16) + 384);
SET64(31, 0x1f7e44); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7e50); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 23);
SET32(4, RW(16) + 1984);
SET64(31, 0x1f7e60); wr32(c, (RW(16) + 3496), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7e6c); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F7E80(Ctx *c) { /* func_001F7E80 */
ENTER(0x1f7e80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f7e94); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f7ea0); SET32(5, RW(0) + 21); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7eac); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F7EC0(Ctx *c) { /* func_001F7EC0 */
ENTER(0x1f7ec0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f7ed4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 17);
SET32(4, RW(16) + 384);
SET64(31, 0x1f7ee4); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7ef0); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1f7ef8);  JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001F7F0C; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001F7F24;
L_001F7F0C:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001F7F24:;
SET64(3, (s64)(s32)0x4f800000);
SET64(2, (s64)(s32)0x40490000);
c->f[0].u = RW(3);
SET64(2, RD(2) | 0xfdb);
c->f[2].f = fpu_div(F(1), F(0));
SET32(4, RW(29) + 32);
c->f[0].u = RW(0);
c->f[1].u = RW(2);
c->facc = fpu(F(0) + F(0));
c->f[0].f = fpu(c->facc + F(1) * F(2));
SET64(31, 0x1f7f58); wr32(c, (RW(29) + 172), c->f[0].u); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f7f64); SET32(5, RW(29) + 172); JP_F_0013AD00(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1f7f70); SET64(5, RD(2) + RD(0)); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1792) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1808) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1824) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1840) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_001F7FA0(Ctx *c) { /* func_001F7FA0 */
ENTER(0x1f7fa0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f7fb4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f7fc0); SET32(5, RW(0) + 16); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7fcc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 20);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f7fdc); wr32(c, (RW(16) + 3304), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f7fe8); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(31, 0x1f7ff0); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f7ffc); SET32(5, RW(28) + -31564); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f8008); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x40800000);
c->f[12].u = RW(2);
wr128(c, (RW(16) + 3200) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 3216) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 3232) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 3248) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f8040); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(2, (s64)(s32)0x40800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f8058); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001F8070(Ctx *c) { /* func_001F8070 */
ENTER(0x1f8070);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8090); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f80a0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f80b0); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(31, 0x1f80b8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F80D0(Ctx *c) { /* func_001F80D0 */
ENTER(0x1f80d0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f80e4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f80f0); SET32(5, RW(0) + 13); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f80fc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f8108); SET32(5, RW(0) + 14); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8114); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1f8120); SET32(5, RW(0) + 15); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f812c); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 100), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET64(31, 0x1f814c); wr32(c, (RW(29) + 104), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f8158); SET32(5, RW(29) + 96); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f8164); SET32(4, RW(29) + 112); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f8178); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_001F8190(Ctx *c) { /* func_001F8190 */
ENTER(0x1f8190);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f81b0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1864)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f81c0); SET32(4, RW(16) + 1856); rt_call(c, t); }
SET64(31, 0x1f81c8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F81E0(Ctx *c) { /* func_001F81E0 */
ENTER(0x1f81e0);
SET32(29, RW(29) + -288);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f81f4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 8);
SET32(4, RW(16) + 384);
SET64(31, 0x1f8204); wr32(c, (RW(16) + 1796), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8210); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 9);
SET32(4, RW(16) + 1856);
SET64(31, 0x1f8220); wr32(c, (RW(16) + 3268), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f822c); SET32(5, RW(16) + 1856); JP_F_001B6520(c);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 96);
wr8(c, (RW(16) + 1792), (u8)RW(2));
SET64(31, 0x1f8240); wr8(c, (RW(16) + 3264), (u8)RW(2)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1f824c); SET32(5, RW(28) + -31572); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f8258); SET32(4, RW(29) + 224); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f826c); SET32(5, RW(29) + 224); rt_call(c, t); }
SET64(31, 0x1f8274); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f8280); SET32(5, RW(28) + -31568); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f828c); SET32(4, RW(29) + 160); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 1864)));
SET32(4, RW(16) + 1856);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f82a0); SET32(5, RW(29) + 160); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 288); return;
}

void JP_F_001F82B0(Ctx *c) { /* func_001F82B0 */
ENTER(0x1f82b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f82d0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f82e0); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(31, 0x1f82e8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F8300(Ctx *c) { /* func_001F8300 */
ENTER(0x1f8300);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f8314); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 11);
SET32(4, RW(16) + 384);
SET64(31, 0x1f8324); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8330); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 12);
SET32(4, RW(16) + 1984);
SET64(31, 0x1f8340); wr32(c, (RW(16) + 3496), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f834c); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F8360(Ctx *c) { /* func_001F8360 */
ENTER(0x1f8360);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8380); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1f8388); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F83A0(Ctx *c) { /* func_001F83A0 */
ENTER(0x1f83a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f83b4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f83c0); SET32(5, RW(0) + 10); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f83cc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F83E0(Ctx *c) { /* func_001F83E0 */
ENTER(0x1f83e0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f83f4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f8400); SET32(5, RW(0) + 5); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f840c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1f8414); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f8420); SET32(5, RW(28) + -31576); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f842c); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f8440); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001F8450(Ctx *c) { /* func_001F8450 */
ENTER(0x1f8450);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8470); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8480); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8490); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f84a0); SET32(4, RW(16) + 4608); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 6024)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f84b0); SET32(4, RW(16) + 6016); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 7624)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f84c0); SET32(4, RW(16) + 7616); rt_call(c, t); }
SET64(31, 0x1f84c8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F84E0(Ctx *c) { /* func_001F84E0 */
ENTER(0x1f84e0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f84f8); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f8504); SET64(5, RD(0) + RD(0)); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8510); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f851c); SET64(5, RD(0) + RD(0)); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8528); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1f8534); SET64(5, RD(0) + RD(0)); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8540); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET32(4, RW(16) + 4608);
SET64(31, 0x1f854c); SET32(5, RW(0) + 1); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8558); SET32(5, RW(16) + 4608); JP_F_001B6520(c);
SET32(2, RW(0) + 2);
SET32(4, RW(16) + 6016);
SET64(31, 0x1f8568); wr32(c, (RW(16) + 7528), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8574); SET32(5, RW(16) + 6016); JP_F_001B6520(c);
SET32(4, RW(16) + 7616);
SET64(31, 0x1f8580); SET32(5, RW(0) + 3); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f858c); SET32(5, RW(16) + 7616); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
c->f[12].u = RW(0);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f85a0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(2, (s64)(s32)0x40000000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f85b8); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(2, (s64)(s32)0x40800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f85d0); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 64);
c->f[12].u = RW(0);
c->f[14].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x1f85ec); c->f[15].u = c->f[14].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 48);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
c->f[13].u = RW(0);
c->f[15].u = c->f[12].u;
SET64(31, 0x1f8610); c->f[14].u = c->f[13].u; JP_F_0013E810(c);
SET32(4, RW(16) + 6016);
SET64(6, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x1f8624); SET64(7, RD(2) + RD(0)); JP_F_00182120(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001F8640(Ctx *c) { /* func_001F8640 */
ENTER(0x1f8640);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8660); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8670); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8680); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8690); SET32(4, RW(16) + 4608); rt_call(c, t); }
SET64(31, 0x1f8698); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F86B0(Ctx *c) { /* func_001F86B0 */
ENTER(0x1f86b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f86c4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f86d0); SET32(5, RW(0) + 19); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f86dc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f86e8); SET32(5, RW(0) + 19); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f86f4); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1f8700); SET32(5, RW(0) + 20); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f870c); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET32(4, RW(16) + 4608);
SET64(31, 0x1f8718); SET32(5, RW(0) + 20); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8724); SET32(5, RW(16) + 4608); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
c->f[12].u = RW(0);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f8738); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(2, (s64)(s32)0x40800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f8750); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(2, (s64)(s32)0x41000000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f8768); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET64(2, (s64)(s32)0x41400000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f8780); SET32(4, RW(16) + 4608); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F8790(Ctx *c) { /* func_001F8790 */
ENTER(0x1f8790);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f87b0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f87c0); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(31, 0x1f87c8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F87E0(Ctx *c) { /* func_001F87E0 */
ENTER(0x1f87e0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f87f4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 17);
SET32(4, RW(16) + 384);
SET64(31, 0x1f8804); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8810); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1984);
SET64(31, 0x1f881c); SET32(5, RW(0) + 18); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8828); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET64(31, 0x1f8830); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f883c); SET32(5, RW(28) + -31580); JP_F_0013AE00(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1f8848); SET64(5, RD(2) + RD(0)); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1792) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1808) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1824) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1840) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001F8880(Ctx *c) { /* func_001F8880 */
ENTER(0x1f8880);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f88a0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f88b0); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3592)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f88c0); SET32(4, RW(16) + 3584); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 5000)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f88d0); SET32(4, RW(16) + 4992); rt_call(c, t); }
SET64(31, 0x1f88d8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F88F0(Ctx *c) { /* func_001F88F0 */
ENTER(0x1f88f0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f8908); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 15);
SET32(4, RW(16) + 384);
SET64(31, 0x1f8918); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8924); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 15);
SET32(4, RW(16) + 1984);
SET64(31, 0x1f8934); wr32(c, (RW(16) + 3496), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8940); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET32(4, RW(16) + 3584);
SET64(31, 0x1f894c); SET32(5, RW(0) + 16); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8958); SET32(5, RW(16) + 3584); JP_F_001B6520(c);
SET32(4, RW(16) + 4992);
SET64(31, 0x1f8964); SET32(5, RW(0) + 16); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8970); SET32(5, RW(16) + 4992); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 96);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1f8990); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 80);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1f89b4); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 384);
SET64(31, 0x1f89c8); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 64);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1f89e8); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 48);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1f8a0c); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 1984);
SET64(31, 0x1f8a20); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(25, (s32)rd32(c, (RW(16) + 5000)));
SET64(2, (s64)(s32)0x41a00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f8a38); SET32(4, RW(16) + 4992); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_001F8A50(Ctx *c) { /* func_001F8A50 */
ENTER(0x1f8a50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8a70); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1f8a78); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F8A90(Ctx *c) { /* func_001F8A90 */
ENTER(0x1f8a90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f8aa4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(31, 0x1f8aac); SET32(4, RW(16) + 352); JP_F_001D02B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8ab8); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F8AD0(Ctx *c) { /* func_001F8AD0 */
ENTER(0x1f8ad0);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_001F8AF0; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_001F8B4C;
L_001F8AF0:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 44), RW(2));
SET32(4, RW(16) + 384);
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f8b20); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET32(4, RW(16) + 1984);
SET64(25, (s32)rd32(c, (RW(25) + 200)));
{ u32 t = RW(25); SET64(31, 0x1f8b34); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 2632)));
SET32(4, RW(16) + 2624);
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f8b48); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
L_001F8B4C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F8B60(Ctx *c) { /* func_001F8B60 */
ENTER(0x1f8b60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8b80); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8b90); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 2632)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8ba0); SET32(4, RW(16) + 2624); rt_call(c, t); }
SET64(31, 0x1f8ba8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F8BC0(Ctx *c) { /* func_001F8BC0 */
ENTER(0x1f8bc0);
SET32(29, RW(29) + -304);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f8bd4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 4);
SET32(4, RW(16) + 384);
SET64(31, 0x1f8be4); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8bf0); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 224);
SET32(3, RW(0) + 32);
wr32(c, (RW(29) + 288), RW(2));
SET32(4, RW(16) + 1984);
SET32(2, RW(0) + 256);
wr32(c, (RW(29) + 292), RW(3));
wr32(c, (RW(29) + 296), RW(2));
SET32(3, RW(0) + 64);
SET64(2, (s64)(s32)0x40000000);
wr32(c, (RW(29) + 300), RW(3));
c->f[12].u = RW(2);
SET32(5, RW(0) + 4);
SET64(31, 0x1f8c28); SET32(6, RW(29) + 288); JP_F_001D4470(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8c34); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET32(2, RW(0) + 5);
SET32(4, RW(16) + 2624);
SET64(31, 0x1f8c44); wr32(c, (RW(16) + 4136), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8c50); SET32(5, RW(16) + 2624); JP_F_001B6520(c);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 96);
wr8(c, (RW(16) + 1716), (u8)RW(2));
SET64(31, 0x1f8c64); wr8(c, (RW(16) + 3956), (u8)RW(2)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1f8c70); SET32(5, RW(28) + -31588); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f8c7c); SET32(4, RW(29) + 224); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
SET32(4, RW(29) + 32);
wr128(c, (RW(16) + 1792) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 1808) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 1824) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
SET64(31, 0x1f8ca4); wr128(c, (RW(16) + 1840) & ~15u, &c->r[2]); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f8cb0); SET32(5, RW(28) + -31584); JP_F_0013AE00(c);
SET32(4, RW(29) + 160);
SET64(31, 0x1f8cbc); SET64(5, RD(2) + RD(0)); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 4032) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 4048) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 4064) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 208) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 4080) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 304); return;
}

void JP_F_001F8CF0(Ctx *c) { /* func_001F8CF0 */
ENTER(0x1f8cf0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8d10); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8d20); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1f8d28); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F8D40(Ctx *c) { /* func_001F8D40 */
ENTER(0x1f8d40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f8d54); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f8d60); SET32(5, RW(0) + 13); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8d6c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f8d78); SET32(5, RW(0) + 14); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f8d84); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F8DA0(Ctx *c) { /* func_001F8DA0 */
ENTER(0x1f8da0);
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { SET64(3, (s64)(s32)0x41a00000); goto L_001F8DB4; }
 goto L_001F8DB8;
L_001F8DB4:;
wr32(c, (RW(4) + 7428), RW(3));
L_001F8DB8:;
 return;
}

void JP_F_001F8DC0(Ctx *c) { /* func_001F8DC0 */
ENTER(0x1f8dc0);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x42700000);
wr64(c, (RW(29) + 32), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[1].u = rd32(c, (RW(4) + 7424));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[20].u = c->f[12].u; if (t) goto L_001F8DF8; }
c->f[0].f = fpu(F(1) + F(20));
wr32(c, (RW(16) + 7424), c->f[0].u); goto L_001F8EAC;
L_001F8DF8:;
c->f[1].u = rd32(c, (RW(16) + 7428));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(4, RD(16) + RD(0)); goto L_001F8EB0; }
c->f[1].f = fpu(F(1) - F(20));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; wr32(c, (RW(16) + 7428), c->f[1].u); if (t) goto L_001F8E28; }
SET32(2, RW(0) + 1); goto L_001F8EB8;
L_001F8E28:;
SET64(2, (s64)(s32)0x41a00000);
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
wr32(c, (RW(29) + 48), RW(3));
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(29) + 52), RW(3));
wr32(c, (RW(29) + 56), RW(3));
SET32(4, RW(16) + 384);
wr32(c, (RW(29) + 60), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f8e5c); SET32(5, RW(29) + 48); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET32(4, RW(16) + 1792);
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f8e70); SET32(5, RW(29) + 48); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET32(4, RW(16) + 3200);
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f8e84); SET32(5, RW(29) + 48); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET32(4, RW(16) + 4608);
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f8e98); SET32(5, RW(29) + 48); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 6024)));
SET32(4, RW(16) + 6016);
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f8eac); SET32(5, RW(29) + 48); rt_call(c, t); }
L_001F8EAC:;
SET64(4, RD(16) + RD(0));
L_001F8EB0:;
SET64(31, 0x1f8eb8); c->f[12].u = c->f[20].u; JP_F_001B65A0(c);
L_001F8EB8:;
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001F8ED0(Ctx *c) { /* func_001F8ED0 */
ENTER(0x1f8ed0);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
wr32(c, (RW(4) + 7424), RW(0));
SET64(16, RD(7) + RD(0));
wr32(c, (RW(4) + 7428), RW(0));
SET32(5, RW(29) + 80);
wr32(c, (RW(29) + 80), RW(2));
wr32(c, (RW(29) + 84), RW(2));
wr32(c, (RW(29) + 88), RW(2));
wr32(c, (RW(29) + 92), RW(2));
SET64(25, (s32)rd32(c, (RW(19) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f8f28); SET32(4, RW(19) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 1800)));
SET32(4, RW(19) + 1792);
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f8f3c); SET32(5, RW(29) + 80); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 3208)));
SET32(4, RW(19) + 3200);
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f8f50); SET32(5, RW(29) + 80); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 4616)));
SET32(4, RW(19) + 4608);
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f8f64); SET32(5, RW(29) + 80); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(19) + 6024)));
SET32(4, RW(19) + 6016);
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f8f78); SET32(5, RW(29) + 80); rt_call(c, t); }
SET64(4, RD(19) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x1f8f8c); SET64(7, RD(16) + RD(0)); JP_F_001B67E0(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_001F8FB0(Ctx *c) { /* func_001F8FB0 */
ENTER(0x1f8fb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8fd0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8fe0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f8ff0); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9000); SET32(4, RW(16) + 4608); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 6024)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9010); SET32(4, RW(16) + 6016); rt_call(c, t); }
SET64(31, 0x1f9018); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9030(Ctx *c) { /* func_001F9030 */
ENTER(0x1f9030);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9044); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f9050); SET32(5, RW(0) + 6); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f905c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f9068); SET32(5, RW(0) + 7); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9074); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1f9080); SET32(5, RW(0) + 8); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f908c); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET32(4, RW(16) + 4608);
SET64(31, 0x1f9098); SET32(5, RW(0) + 9); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f90a4); SET32(5, RW(16) + 4608); JP_F_001B6520(c);
SET32(4, RW(16) + 6016);
SET64(31, 0x1f90b0); SET32(5, RW(0) + 10); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f90bc); SET32(5, RW(16) + 6016); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x41500000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 100), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET64(31, 0x1f90dc); wr32(c, (RW(29) + 104), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f90e8); SET32(5, RW(29) + 96); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f90f4); SET32(4, RW(29) + 112); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f9108); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET32(4, RW(16) + 1792);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f911c); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET32(4, RW(16) + 3200);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f9130); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET32(4, RW(16) + 4608);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f9144); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 6024)));
SET32(4, RW(16) + 6016);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f9158); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_001F9170(Ctx *c) { /* func_001F9170 */
ENTER(0x1f9170);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9190); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1f9198); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F91B0(Ctx *c) { /* func_001F91B0 */
ENTER(0x1f91b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f91c4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f91d0); SET32(5, RW(0) + 3); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f91dc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F91F0(Ctx *c) { /* func_001F91F0 */
ENTER(0x1f91f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9210); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1f9218); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9230(Ctx *c) { /* func_001F9230 */
ENTER(0x1f9230);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9244); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f9250); SET32(5, RW(0) + 2); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f925c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9270(Ctx *c) { /* func_001F9270 */
ENTER(0x1f9270);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9290); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1f9298); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F92B0(Ctx *c) { /* func_001F92B0 */
ENTER(0x1f92b0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f92c4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 1);
SET32(4, RW(16) + 384);
SET64(31, 0x1f92d4); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f92e0); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1f92e8); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f92f4); SET32(5, RW(28) + -31592); JP_F_0013AE00(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1f9300); SET64(5, RD(2) + RD(0)); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1792) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1808) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1824) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1840) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001F9330(Ctx *c) { /* func_001F9330 */
ENTER(0x1f9330);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9350); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1f9358); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9370(Ctx *c) { /* func_001F9370 */
ENTER(0x1f9370);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9384); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f9390); SET64(5, RD(0) + RD(0)); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f939c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F93B0(Ctx *c) { /* func_001F93B0 */
ENTER(0x1f93b0);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) == RD(3); SET64(7, RD(4) + RD(0)); if (t) goto L_001F93CC; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_001F9400;
L_001F93CC:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 28), RW(2));
SET32(4, RW(7) + 384);
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 24), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(7) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f93fc); SET32(5, RW(29) + 16); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_001F9400:;
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9410(Ctx *c) { /* func_001F9410 */
ENTER(0x1f9410);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9424); SET64(16, RD(4) + RD(0)); JP_F_001B6A00(c);
SET32(4, RW(16) + 576);
SET64(31, 0x1f9430); SET64(5, RD(0) | 0x8000); JP_F_00153560(c);
SET64(31, 0x1f9438); SET32(4, RW(16) + 480); JP_F_001EC380(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9450(Ctx *c) { /* func_001F9450 */
ENTER(0x1f9450);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9470); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9480); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9490); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(31, 0x1f9498); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F94B0(Ctx *c) { /* func_001F94B0 */
ENTER(0x1f94b0);
SET32(29, RW(29) + -576);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f94c4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f94d0); SET32(5, RW(0) + 48); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f94dc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f94e8); SET32(5, RW(0) + 49); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f94f4); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1f9500); SET32(5, RW(0) + 50); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f950c); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xc1a80000);
SET32(4, RW(29) + 160);
wr32(c, (RW(29) + 372), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 368), RW(0));
wr32(c, (RW(29) + 380), RW(2));
SET64(31, 0x1f952c); wr32(c, (RW(29) + 376), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 160);
SET64(31, 0x1f9538); SET32(5, RW(29) + 368); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f9544); SET32(4, RW(29) + 384); JP_F_0013ADA0(c);
SET64(31, 0x1f954c); SET32(4, RW(29) + 96); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1f9558); SET32(5, RW(28) + -31596); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f9564); SET32(4, RW(29) + 448); JP_F_0013ADA0(c);
SET32(4, RW(29) + 224);
SET32(5, RW(29) + 448);
SET64(31, 0x1f9574); SET32(6, RW(29) + 384); JP_F_002AEAE0(c);
SET64(31, 0x1f957c); SET32(4, RW(29) + 512); JP_F_002AF080(c);
rd128(c, (RW(29) + 224) & ~15u, &c->r[6]);
SET32(5, RW(29) + 512);
rd128(c, (RW(29) + 240) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 512) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 528) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 544) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 560) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f95b0); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 292), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 288), RW(0));
wr32(c, (RW(29) + 300), RW(2));
SET64(31, 0x1f95d0); wr32(c, (RW(29) + 296), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f95dc); SET32(5, RW(29) + 288); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f95e8); SET32(4, RW(29) + 304); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET32(4, RW(16) + 1792);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f95fc); SET32(5, RW(29) + 304); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 576); return;
}

void JP_F_001F9610(Ctx *c) { /* func_001F9610 */
ENTER(0x1f9610);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9630); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9640); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1f9648); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9660(Ctx *c) { /* func_001F9660 */
ENTER(0x1f9660);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9674); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f9680); SET32(5, RW(0) + 46); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f968c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f9698); SET32(5, RW(0) + 47); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f96a4); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 100), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET64(31, 0x1f96c4); wr32(c, (RW(29) + 104), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f96d0); SET32(5, RW(29) + 96); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f96dc); SET32(4, RW(29) + 112); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET32(4, RW(16) + 1792);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f96f0); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_001F9700(Ctx *c) { /* func_001F9700 */
ENTER(0x1f9700);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9720); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9730); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1f9738); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9750(Ctx *c) { /* func_001F9750 */
ENTER(0x1f9750);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9764); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f9770); SET32(5, RW(0) + 44); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f977c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 45);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f978c); wr32(c, (RW(16) + 3304), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9798); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F97B0(Ctx *c) { /* func_001F97B0 */
ENTER(0x1f97b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f97d0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f97e0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f97f0); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(31, 0x1f97f8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9810(Ctx *c) { /* func_001F9810 */
ENTER(0x1f9810);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9824); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f9830); SET32(5, RW(0) + 42); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f983c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f9848); SET32(5, RW(0) + 42); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9854); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1f9860); SET32(5, RW(0) + 43); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f986c); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(2, (s64)(s32)0x41600000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f9884); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 100), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET64(31, 0x1f98a4); wr32(c, (RW(29) + 104), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f98b0); SET32(5, RW(29) + 96); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f98bc); SET32(4, RW(29) + 112); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET32(4, RW(16) + 3200);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f98d0); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_001F98E0(Ctx *c) { /* func_001F98E0 */
ENTER(0x1f98e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9900); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9910); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3400)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9920); SET32(4, RW(16) + 3392); rt_call(c, t); }
SET64(31, 0x1f9928); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9940(Ctx *c) { /* func_001F9940 */
ENTER(0x1f9940);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9958); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 40);
SET32(4, RW(16) + 384);
SET64(31, 0x1f9968); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9974); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1984);
SET64(31, 0x1f9980); SET32(5, RW(0) + 41); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f998c); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET32(4, RW(16) + 3392);
SET64(31, 0x1f9998); SET32(5, RW(0) + 41); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f99a4); SET32(5, RW(16) + 3392); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 64);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1f99c4); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 48);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1f99e8); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 384);
SET64(31, 0x1f99fc); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(25, (s32)rd32(c, (RW(16) + 3400)));
SET64(2, (s64)(s32)0x41a00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f9a14); SET32(4, RW(16) + 3392); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_001F9A30(Ctx *c) { /* func_001F9A30 */
ENTER(0x1f9a30);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) == RD(3); SET64(7, RD(4) + RD(0)); if (t) goto L_001F9A4C; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_001F9A80;
L_001F9A4C:;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 28), RW(2));
SET32(4, RW(7) + 352);
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 24), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(7) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 220)));
{ u32 t = RW(25); SET64(31, 0x1f9a7c); SET32(5, RW(29) + 16); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_001F9A80:;
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9A90(Ctx *c) { /* func_001F9A90 */
ENTER(0x1f9a90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9aa4); SET64(16, RD(4) + RD(0)); JP_F_001B6A00(c);
SET64(4, (s32)rd32(c, (RW(16) + 528)));
SET64(31, 0x1f9ab0); SET64(5, RD(0) | 0x8000); JP_F_00153560(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9AC0(Ctx *c) { /* func_001F9AC0 */
ENTER(0x1f9ac0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9ae0); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1f9ae8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9B00(Ctx *c) { /* func_001F9B00 */
ENTER(0x1f9b00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9b14); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 352);
c->f[12].u = RW(2);
SET64(31, 0x1f9b28); SET32(5, RW(0) + 27); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9b34); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1f9b3c); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, 0x1f9b44); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9B60(Ctx *c) { /* func_001F9B60 */
ENTER(0x1f9b60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9b80); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9b90); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9ba0); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1f9bb0); SET32(4, RW(16) + 4608); rt_call(c, t); }
SET64(31, 0x1f9bb8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9BD0(Ctx *c) { /* func_001F9BD0 */
ENTER(0x1f9bd0);
SET32(29, RW(29) + -320);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9be4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f9bf0); SET32(5, RW(0) + 31); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9bfc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f9c08); SET32(5, RW(0) + 32); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9c14); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1f9c20); SET32(5, RW(0) + 39); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9c2c); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET32(4, RW(16) + 4608);
SET64(31, 0x1f9c38); SET32(5, RW(0) + 38); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9c44); SET32(5, RW(16) + 4608); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 96);
wr32(c, (RW(29) + 244), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 240), RW(0));
wr32(c, (RW(29) + 252), RW(2));
SET64(31, 0x1f9c64); wr32(c, (RW(29) + 248), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1f9c70); SET32(5, RW(29) + 240); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f9c7c); SET32(4, RW(29) + 256); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET32(4, RW(16) + 3200);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f9c90); SET32(5, RW(29) + 256); rt_call(c, t); }
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 164), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 172), RW(2));
SET64(31, 0x1f9cb0); wr32(c, (RW(29) + 168), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f9cbc); SET32(5, RW(29) + 160); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f9cc8); SET32(4, RW(29) + 176); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET32(4, RW(16) + 4608);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f9cdc); SET32(5, RW(29) + 176); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 320); return;
}

void JP_F_001F9CF0(Ctx *c) { /* func_001F9CF0 */
ENTER(0x1f9cf0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9d04); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f9d10); SET32(5, RW(0) + 26); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9d1c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1f9d24); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f9d30); SET32(5, RW(28) + -31600); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f9d3c); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f9d50); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001F9D60(Ctx *c) { /* func_001F9D60 */
ENTER(0x1f9d60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9d74); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f9d80); SET32(5, RW(0) + 21); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9d8c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f9d98); SET32(5, RW(0) + 22); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9da4); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1f9db0); SET32(5, RW(0) + 23); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9dbc); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET32(4, RW(16) + 4608);
SET64(31, 0x1f9dc8); SET32(5, RW(0) + 23); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9dd4); SET32(5, RW(16) + 4608); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET64(2, (s64)(s32)0x41a00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f9dec); SET32(4, RW(16) + 4608); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9E00(Ctx *c) { /* func_001F9E00 */
ENTER(0x1f9e00);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9e14); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1f9e20); SET32(5, RW(0) + 24); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9e2c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 25);
SET32(4, RW(16) + 1792);
SET64(31, 0x1f9e3c); wr32(c, (RW(16) + 3304), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9e48); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(2, RW(0) + 25);
SET32(4, RW(16) + 3392);
SET64(31, 0x1f9e58); wr32(c, (RW(16) + 4904), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9e64); SET32(5, RW(16) + 3392); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 3400)));
SET64(2, (s64)(s32)0x40800000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1f9e7c); SET32(4, RW(16) + 3392); rt_call(c, t); }
SET64(31, 0x1f9e84); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1f9e90); SET32(5, RW(28) + -31604); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1f9e9c); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1f9eb0); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001F9EC0(Ctx *c) { /* func_001F9EC0 */
ENTER(0x1f9ec0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9ed4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(31, 0x1f9edc); SET32(4, RW(16) + 352); JP_F_001D54F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1f9ee8); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001F9F00(Ctx *c) { /* func_001F9F00 */
ENTER(0x1f9f00);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_001F9F9C; }
SET32(3, RW(0) + 3);
if (RD(5) == RD(3)) { SET64(2, (s64)(s32)0x3f800000); goto L_001F9F2C; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_001F9FA4;
L_001F9F2C:;
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 44), RW(2));
SET32(4, RW(16) + 384);
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f9f58); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET32(4, RW(16) + 1792);
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f9f6c); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET32(4, RW(16) + 3200);
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f9f80); SET32(5, RW(29) + 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET32(4, RW(16) + 4608);
SET64(25, (s32)rd32(c, (RW(25) + 348)));
{ u32 t = RW(25); SET64(31, 0x1f9f94); SET32(5, RW(29) + 32); rt_call(c, t); }
 goto L_001F9FA0;
L_001F9F9C:;
wr8(c, (RW(16) + 6672), (u8)RW(0));
L_001F9FA0:;
SET64(31, rd64(c, (RW(29) + 16)));
L_001F9FA4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001F9FB0(Ctx *c) { /* func_001F9FB0 */
ENTER(0x1f9fb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1f9fc4); SET64(16, RD(4) + RD(0)); JP_F_001B6A00(c);
SET32(4, RW(16) + 576);
SET64(31, 0x1f9fd0); SET64(5, RD(0) | 0x8000); JP_F_00153560(c);
SET32(4, RW(16) + 1984);
SET64(31, 0x1f9fdc); SET64(5, RD(0) | 0x8000); JP_F_00153560(c);
SET32(4, RW(16) + 3392);
SET64(31, 0x1f9fe8); SET64(5, RD(0) | 0x8000); JP_F_00153560(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FA000(Ctx *c) { /* func_001FA000 */
ENTER(0x1fa000);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa020); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa030); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa040); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa050); SET32(4, RW(16) + 4608); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 6024)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa060); SET32(4, RW(16) + 6016); rt_call(c, t); }
SET64(31, 0x1fa068); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FA080(Ctx *c) { /* func_001FA080 */
ENTER(0x1fa080);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fa094); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fa0a0); SET32(5, RW(0) + 11); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa0ac); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fa0b8); SET32(5, RW(0) + 12); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa0c4); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1fa0d0); SET32(5, RW(0) + 13); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa0dc); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET32(4, RW(16) + 4608);
SET64(31, 0x1fa0e8); SET32(5, RW(0) + 14); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa0f4); SET32(5, RW(16) + 4608); JP_F_001B6520(c);
SET32(2, RW(0) + 1);
SET32(4, RW(16) + 480);
wr8(c, (RW(16) + 1716), (u8)RW(2));
wr8(c, (RW(16) + 3124), (u8)RW(2));
wr8(c, (RW(16) + 4532), (u8)RW(2));
SET64(31, 0x1fa110); wr8(c, (RW(16) + 5940), (u8)RW(2)); JP_F_001EC380(c);
SET64(31, 0x1fa118); SET32(4, RW(16) + 1888); JP_F_001EC380(c);
SET64(31, 0x1fa120); SET32(4, RW(16) + 3296); JP_F_001EC380(c);
SET64(2, (s64)(s32)0x3e820000);
SET64(3, (s64)(s32)0x3f610000);
wr32(c, (RW(29) + 48), RW(2));
SET32(5, RW(0) + 64);
SET64(2, (s64)(s32)0x3ebe0000);
wr32(c, (RW(29) + 52), RW(3));
wr32(c, (RW(29) + 56), RW(2));
SET64(3, (s64)(s32)0x3f7f0000);
SET64(2, (s64)(s32)0x40a00000);
wr32(c, (RW(29) + 60), RW(3));
c->f[12].u = RW(2);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x3dcc0000);
SET32(6, RW(29) + 48);
SET64(4, RD(2) | 0xcccd);
SET64(2, (s64)(s32)0x42700000);
c->f[13].u = RW(4);
c->f[15].u = RW(2);
SET32(4, RW(16) + 6016);
c->f[14].u = RW(3);
SET64(31, 0x1fa178); c->f[16].u = c->f[15].u; JP_F_002244C0(c);
SET64(31, 0x1fa180); SET32(4, RW(16) + 6016); JP_F_001EC500(c);
SET64(31, 0x1fa188); SET32(4, RW(16) + 6112); JP_F_001EC310(c);
SET64(3, (s64)(s32)0x3e990000);
SET64(2, (s64)(s32)0x3e4c0000);
SET64(4, RD(3) | 0x999a);
SET32(5, RW(29) + 32);
SET64(3, RD(2) | 0xcccd);
wr32(c, (RW(29) + 32), RW(4));
SET64(2, (s64)(s32)0x3dcc0000);
wr32(c, (RW(29) + 36), RW(3));
SET64(2, RD(2) | 0xcccd);
wr32(c, (RW(29) + 40), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 44), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 6024)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x1fa1c8); SET32(4, RW(16) + 6016); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa1d4); SET32(5, RW(16) + 6016); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001FA1F0(Ctx *c) { /* func_001FA1F0 */
ENTER(0x1fa1f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa210); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa220); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1fa228); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FA240(Ctx *c) { /* func_001FA240 */
ENTER(0x1fa240);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fa254); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fa260); SET32(5, RW(0) + 9); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa26c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fa278); SET32(5, RW(0) + 10); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa284); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FA2A0(Ctx *c) { /* func_001FA2A0 */
ENTER(0x1fa2a0);
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { wr8(c, (RW(4) + 1008), (u8)RW(0)); goto L_001FA2AC; }
L_001FA2AC:;
 return;
}

void JP_F_001FA2C0(Ctx *c) { /* func_001FA2C0 */
ENTER(0x1fa2c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa2e0); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1fa2e8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FA300(Ctx *c) { /* func_001FA300 */
ENTER(0x1fa300);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fa314); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(31, 0x1fa31c); SET32(4, RW(16) + 352); JP_F_001D54F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa328); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FA340(Ctx *c) { /* func_001FA340 */
ENTER(0x1fa340);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fa354); SET64(16, RD(4) + RD(0)); JP_F_001B6A00(c);
SET32(4, RW(16) + 576);
SET64(31, 0x1fa360); SET64(5, RD(0) | 0x8000); JP_F_00153560(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FA370(Ctx *c) { /* func_001FA370 */
ENTER(0x1fa370);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa390); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa3a0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3400)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa3b0); SET32(4, RW(16) + 3392); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 5000)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa3c0); SET32(4, RW(16) + 4992); rt_call(c, t); }
SET64(31, 0x1fa3c8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FA3E0(Ctx *c) { /* func_001FA3E0 */
ENTER(0x1fa3e0);
SET32(29, RW(29) + -928);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fa3f4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fa400); SET64(5, RD(0) + RD(0)); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa40c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 1);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fa41c); wr32(c, (RW(16) + 3304), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa428); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(2, RW(0) + 2);
SET32(4, RW(16) + 3392);
SET64(31, 0x1fa438); wr32(c, (RW(16) + 4904), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa444); SET32(5, RW(16) + 3392); JP_F_001B6520(c);
SET32(4, RW(16) + 4992);
SET64(31, 0x1fa450); SET32(5, RW(0) + 3); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa45c); SET32(5, RW(16) + 4992); JP_F_001B6520(c);
SET64(31, 0x1fa464); SET32(4, RW(29) + 288); JP_F_0013AEA0(c);
SET32(4, RW(29) + 288);
SET64(31, 0x1fa470); SET32(5, RW(28) + -31624); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fa47c); SET32(4, RW(29) + 832); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fa490); SET32(5, RW(29) + 832); rt_call(c, t); }
SET64(31, 0x1fa498); SET32(4, RW(29) + 224); JP_F_0013AEA0(c);
SET32(4, RW(29) + 224);
SET64(31, 0x1fa4a4); SET32(5, RW(28) + -31620); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fa4b0); SET32(4, RW(29) + 768); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 768) & ~15u, &c->r[2]);
SET32(4, RW(29) + 160);
wr128(c, (RW(16) + 3200) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 784) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 3216) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 800) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 3232) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 816) & ~15u, &c->r[2]);
SET64(31, 0x1fa4d8); wr128(c, (RW(16) + 3248) & ~15u, &c->r[2]); JP_F_0013AEA0(c);
SET32(4, RW(29) + 160);
SET64(31, 0x1fa4e4); SET32(5, RW(28) + -31616); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fa4f0); SET32(4, RW(29) + 704); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 704) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 96);
wr128(c, (RW(16) + 4800) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 720) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 4816) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 736) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 4832) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 752) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 4848) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 916), RW(2));
wr32(c, (RW(29) + 924), RW(2));
wr32(c, (RW(29) + 904), RW(2));
wr32(c, (RW(29) + 908), RW(2));
wr32(c, (RW(29) + 912), RW(0));
wr32(c, (RW(29) + 920), RW(0));
wr32(c, (RW(29) + 896), RW(0));
SET64(31, 0x1fa53c); wr32(c, (RW(29) + 900), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1fa548); SET32(5, RW(28) + -31612); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fa554); SET32(4, RW(29) + 640); JP_F_0013ADA0(c);
SET32(4, RW(29) + 496);
SET32(5, RW(29) + 912);
SET64(31, 0x1fa564); SET32(6, RW(29) + 640); JP_F_002AFDD0(c);
rd128(c, (RW(29) + 496) & ~15u, &c->r[2]);
SET32(4, RW(29) + 32);
SET64(31, 0x1fa574); wr128(c, (RW(29) + 912) & ~15u, &c->r[2]); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fa580); SET32(5, RW(28) + -31608); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fa58c); SET32(4, RW(29) + 576); JP_F_0013ADA0(c);
SET32(4, RW(29) + 480);
SET32(5, RW(29) + 896);
SET64(31, 0x1fa59c); SET32(6, RW(29) + 576); JP_F_002AFDD0(c);
SET64(3, (s64)(s32)0x3f800000);
rd128(c, (RW(29) + 480) & ~15u, &c->r[7]);
wr32(c, (RW(29) + 556), RW(3));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 572), RW(3));
SET32(4, RW(29) + 368);
rd128(c, (RW(29) + 912) & ~15u, &c->r[3]);
SET32(5, RW(29) + 560);
wr32(c, (RW(29) + 544), RW(0));
SET32(6, RW(29) + 544);
wr32(c, (RW(29) + 548), RW(0));
wr32(c, (RW(29) + 552), RW(0));
wr32(c, (RW(29) + 560), RW(0));
wr32(c, (RW(29) + 564), RW(0));
wr32(c, (RW(29) + 568), RW(0));
wr128(c, (RW(29) + 896) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 544) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 560) & ~15u, &c->r[3]);
wr8(c, (RW(16) + 3296), (u8)RW(2));
rd128(c, (RW(29) + 560) & ~15u, &c->r[2]);
SET64(31, 0x1fa5f4); wr128(c, (RW(16) + 3264) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 400), RW(0));
wr32(c, (RW(29) + 412), RW(2));
SET32(4, RW(29) + 400);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 404), RW(0));
wr32(c, (RW(29) + 408), RW(0));
SET64(31, 0x1fa618); wr128(c, (RW(29) + 400) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 400) & ~15u, &c->r[3]);
SET64(7, (s64)(s32)0x3f800000);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 352);
SET32(5, RW(29) + 528);
SET32(6, RW(29) + 512);
wr128(c, (RW(16) + 3280) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 524), RW(7));
wr32(c, (RW(29) + 540), RW(7));
rd128(c, (RW(29) + 896) & ~15u, &c->r[7]);
rd128(c, (RW(29) + 912) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 512), RW(0));
wr32(c, (RW(29) + 516), RW(0));
wr32(c, (RW(29) + 520), RW(0));
wr32(c, (RW(29) + 528), RW(0));
wr32(c, (RW(29) + 532), RW(0));
wr32(c, (RW(29) + 536), RW(0));
wr128(c, (RW(29) + 512) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 528) & ~15u, &c->r[3]);
wr8(c, (RW(16) + 4896), (u8)RW(2));
rd128(c, (RW(29) + 528) & ~15u, &c->r[2]);
SET64(31, 0x1fa674); wr128(c, (RW(16) + 4864) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 384), RW(0));
wr32(c, (RW(29) + 396), RW(2));
SET32(4, RW(29) + 384);
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 388), RW(0));
wr32(c, (RW(29) + 392), RW(0));
SET64(31, 0x1fa698); wr128(c, (RW(29) + 384) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET32(4, RW(16) + 384);
SET64(31, 0x1fa6a8); wr128(c, (RW(16) + 4880) & ~15u, &c->r[2]); JP_F_001EC500(c);
SET64(31, 0x1fa6b0); SET32(4, RW(16) + 480); JP_F_001EC380(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 928); return;
}

void JP_F_001FA6C0(Ctx *c) { /* func_001FA6C0 */
ENTER(0x1fa6c0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fa6d4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3e990000);
SET64(3, (s64)(s32)0x3f800000);
SET64(4, RD(2) | 0x999a);
wr32(c, (RW(29) + 44), RW(3));
SET64(2, (s64)(s32)0x42700000);
wr32(c, (RW(29) + 32), RW(4));
c->f[13].u = RW(2);
wr32(c, (RW(29) + 36), RW(4));
SET64(2, (s64)(s32)0x42f00000);
wr32(c, (RW(29) + 40), RW(4));
c->f[14].u = RW(2);
wr32(c, (RW(29) + 48), RW(3));
SET64(2, (s64)(s32)0x3f280000);
wr32(c, (RW(29) + 52), RW(3));
SET64(2, RD(2) | 0xf5c3);
wr32(c, (RW(29) + 56), RW(3));
c->f[12].u = RW(3);
wr32(c, (RW(29) + 60), RW(3));
c->f[15].u = RW(2);
SET32(4, RW(16) + 352);
c->f[16].u = RW(0);
SET32(5, RW(0) + 64);
SET32(6, RW(0) + 2);
SET32(7, RW(0) + 1);
SET32(8, RW(29) + 48);
SET64(31, 0x1fa740); SET32(9, RW(29) + 32); JP_F_001D21A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa74c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1fa754); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1fa75c); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001FA770(Ctx *c) { /* func_001FA770 */
ENTER(0x1fa770);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fa784); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3e990000);
SET64(3, (s64)(s32)0x3f800000);
SET64(4, RD(2) | 0x999a);
SET32(6, RW(0) + 1);
SET64(2, (s64)(s32)0x42700000);
wr32(c, (RW(29) + 32), RW(4));
c->f[13].u = RW(2);
wr32(c, (RW(29) + 36), RW(4));
SET64(2, (s64)(s32)0x42f00000);
wr32(c, (RW(29) + 40), RW(4));
c->f[14].u = RW(2);
wr32(c, (RW(29) + 44), RW(3));
SET64(2, (s64)(s32)0x3f280000);
wr32(c, (RW(29) + 48), RW(3));
SET64(2, RD(2) | 0xf5c3);
wr32(c, (RW(29) + 52), RW(3));
c->f[12].u = RW(3);
wr32(c, (RW(29) + 56), RW(3));
wr32(c, (RW(29) + 60), RW(3));
c->f[15].u = RW(2);
SET32(4, RW(16) + 352);
SET32(5, RW(0) + 64);
c->f[16].u = RW(0);
SET32(8, RW(29) + 48);
SET64(7, RD(6) + RD(0));
SET64(31, 0x1fa7f0); SET32(9, RW(29) + 32); JP_F_001D21A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa7fc); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1fa804); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1fa80c); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001FA820(Ctx *c) { /* func_001FA820 */
ENTER(0x1fa820);
SET32(3, RW(0) + 13);
if (RD(5) == RD(3)) { c->f[0].u = rd32(c, (RW(6) + 0)); goto L_001FA854; }
SET32(3, RW(0) + 12);
if (RD(5) == RD(3)) { c->f[0].u = rd32(c, (RW(6) + 0)); goto L_001FA84C; }
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { wr8(c, (RW(4) + 988), (u8)RW(0)); goto L_001FA858; }
 goto L_001FA858;
L_001FA84C:;
wr32(c, (RW(4) + 996), c->f[0].u); goto L_001FA858;
L_001FA854:;
wr32(c, (RW(4) + 1020), c->f[0].u);
L_001FA858:;
 return;
}

void JP_F_001FA860(Ctx *c) { /* func_001FA860 */
ENTER(0x1fa860);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 996), RW(2));
SET64(2, (s64)(s32)0x42200000);
SET64(31, 0x1fa87c); wr32(c, (RW(4) + 1020), RW(2)); JP_F_001B67E0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001FA890(Ctx *c) { /* func_001FA890 */
ENTER(0x1fa890);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fa8b0); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1fa8b8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FA8D0(Ctx *c) { /* func_001FA8D0 */
ENTER(0x1fa8d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fa8e4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3e990000);
SET64(3, (s64)(s32)0x3f800000);
SET64(4, RD(2) | 0x999a);
wr32(c, (RW(29) + 44), RW(3));
SET64(2, (s64)(s32)0x42700000);
wr32(c, (RW(29) + 32), RW(4));
c->f[13].u = RW(2);
wr32(c, (RW(29) + 36), RW(4));
SET64(2, (s64)(s32)0x42f00000);
wr32(c, (RW(29) + 40), RW(4));
c->f[14].u = RW(2);
wr32(c, (RW(29) + 48), RW(3));
SET64(2, (s64)(s32)0x3f280000);
wr32(c, (RW(29) + 52), RW(3));
SET64(2, RD(2) | 0xf5c3);
wr32(c, (RW(29) + 56), RW(3));
c->f[15].u = RW(2);
wr32(c, (RW(29) + 60), RW(3));
SET64(2, (s64)(s32)0x42200000);
SET32(4, RW(16) + 352);
c->f[12].u = RW(3);
SET32(5, RW(0) + 64);
c->f[16].u = RW(2);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET32(8, RW(29) + 48);
SET64(31, 0x1fa954); SET32(9, RW(29) + 32); JP_F_001D21A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa960); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1fa968); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1fa970); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001FA980(Ctx *c) { /* func_001FA980 */
ENTER(0x1fa980);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fa994); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f280000);
SET32(4, RW(16) + 352);
SET64(2, RD(2) | 0xf5c3);
SET32(5, RW(0) + 32);
c->f[12].u = RW(2);
SET64(31, 0x1fa9b0); SET32(6, RW(0) + 2); JP_F_001D3210(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fa9bc); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1fa9c4); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1fa9cc); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FA9E0(Ctx *c) { /* func_001FA9E0 */
ENTER(0x1fa9e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fa9f4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f280000);
SET32(4, RW(16) + 352);
SET64(2, RD(2) | 0xf5c3);
SET32(5, RW(0) + 32);
c->f[12].u = RW(2);
SET64(31, 0x1faa10); SET64(6, RD(0) + RD(0)); JP_F_001D3210(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1faa1c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1faa24); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1faa2c); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FAA40(Ctx *c) { /* func_001FAA40 */
ENTER(0x1faa40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1faa60); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1faa68); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FAA80(Ctx *c) { /* func_001FAA80 */
ENTER(0x1faa80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1faa94); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f280000);
SET32(4, RW(16) + 352);
SET64(2, RD(2) | 0xf5c3);
SET32(5, RW(0) + 32);
c->f[12].u = RW(2);
SET64(31, 0x1faab0); SET32(6, RW(0) + 1); JP_F_001D3210(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1faabc); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1faac4); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1faacc); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FAAE0(Ctx *c) { /* func_001FAAE0 */
ENTER(0x1faae0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1faaf4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f280000);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, RD(2) | 0xf5c3);
SET32(4, RW(16) + 352);
c->f[12].u = RW(3);
SET32(5, RW(0) + 32);
c->f[13].u = RW(2);
SET32(6, RW(0) + 2);
SET64(31, 0x1fab1c); SET32(7, RW(0) + 1); JP_F_001D27B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fab28); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1fab30); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1fab38); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FAB50(Ctx *c) { /* func_001FAB50 */
ENTER(0x1fab50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fab64); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f280000);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, RD(2) | 0xf5c3);
SET32(4, RW(16) + 352);
c->f[12].u = RW(3);
SET32(5, RW(0) + 32);
c->f[13].u = RW(2);
SET64(6, RD(0) + RD(0));
SET64(31, 0x1fab8c); SET32(7, RW(0) + 1); JP_F_001D27B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fab98); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1faba0); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1faba8); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FABC0(Ctx *c) { /* func_001FABC0 */
ENTER(0x1fabc0);
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { wr8(c, (RW(4) + 988), (u8)RW(0)); goto L_001FABCC; }
L_001FABCC:;
 return;
}

void JP_F_001FABE0(Ctx *c) { /* func_001FABE0 */
ENTER(0x1fabe0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fac00); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1fac08); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FAC20(Ctx *c) { /* func_001FAC20 */
ENTER(0x1fac20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fac34); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f280000);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, RD(2) | 0xf5c3);
SET32(6, RW(0) + 1);
c->f[12].u = RW(3);
SET32(4, RW(16) + 352);
c->f[13].u = RW(2);
SET32(5, RW(0) + 32);
SET64(31, 0x1fac5c); SET64(7, RD(6) + RD(0)); JP_F_001D27B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fac68); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1fac70); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1fac78); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FAC90(Ctx *c) { /* func_001FAC90 */
ENTER(0x1fac90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1facb0); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1facb8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FACD0(Ctx *c) { /* func_001FACD0 */
ENTER(0x1facd0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1face4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f280000);
SET32(4, RW(16) + 352);
SET64(2, RD(2) | 0xf5c3);
SET32(5, RW(0) + 128);
c->f[12].u = RW(2);
SET64(31, 0x1fad00); SET32(6, RW(0) + 2); JP_F_001D3210(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fad0c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1fad14); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1fad1c); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FAD30(Ctx *c) { /* func_001FAD30 */
ENTER(0x1fad30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fad50); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1fad58); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FAD70(Ctx *c) { /* func_001FAD70 */
ENTER(0x1fad70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fad84); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f280000);
SET32(4, RW(16) + 352);
SET64(2, RD(2) | 0xf5c3);
SET32(5, RW(0) + 128);
c->f[12].u = RW(2);
SET64(31, 0x1fada0); SET64(6, RD(0) + RD(0)); JP_F_001D3210(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fadac); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1fadb4); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1fadbc); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FADD0(Ctx *c) { /* func_001FADD0 */
ENTER(0x1fadd0);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_001FADF0; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_001FAE18;
L_001FADF0:;
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x1fae00); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1528)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x1fae10); SET32(4, RW(16) + 1520); rt_call(c, t); }
wr8(c, (RW(16) + 3420), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
L_001FAE18:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FAE30(Ctx *c) { /* func_001FAE30 */
ENTER(0x1fae30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fae50); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1528)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fae60); SET32(4, RW(16) + 1520); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 2792)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fae70); SET32(4, RW(16) + 2784); rt_call(c, t); }
SET64(31, 0x1fae78); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FAE90(Ctx *c) { /* func_001FAE90 */
ENTER(0x1fae90);
SET32(29, RW(29) + -288);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1faea4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 352);
c->f[12].u = RW(2);
SET64(31, 0x1faeb8); SET32(5, RW(0) + 8); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1faec4); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1faecc); SET32(4, RW(29) + 96); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1faed8); SET32(5, RW(28) + -31632); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1faee4); SET32(4, RW(29) + 224); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET32(4, RW(16) + 352);
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x1faef8); SET32(5, RW(29) + 224); rt_call(c, t); }
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 1520);
c->f[12].u = RW(2);
SET64(31, 0x1faf0c); SET32(5, RW(0) + 1); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1faf18); SET32(5, RW(16) + 1520); JP_F_001B6520(c);
SET64(31, 0x1faf20); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1faf2c); SET32(5, RW(28) + -31628); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1faf38); SET32(4, RW(29) + 160); JP_F_0013ADA0(c);
SET64(2, (s64)(s32)0x40000000);
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
c->f[12].u = RW(2);
SET32(4, RW(16) + 2784);
SET64(2, (s64)(s32)0x3f280000);
SET32(5, RW(0) + 64);
SET64(2, RD(2) | 0xf5c3);
wr128(c, (RW(16) + 1936) & ~15u, &c->r[3]);
c->f[13].u = RW(2);
SET32(6, RW(0) + 2);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET64(7, RD(0) + RD(0));
wr128(c, (RW(16) + 1952) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 1968) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
SET64(31, 0x1faf80); wr128(c, (RW(16) + 1984) & ~15u, &c->r[2]); JP_F_001D27B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1faf8c); SET32(5, RW(16) + 2784); JP_F_001B6520(c);
SET64(31, 0x1faf94); SET32(4, RW(16) + 2880); JP_F_001EC380(c);
SET64(31, 0x1faf9c); SET32(4, RW(16) + 2784); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 288); return;
}

void JP_F_001FAFB0(Ctx *c) { /* func_001FAFB0 */
ENTER(0x1fafb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fafd0); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1fafd8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FAFF0(Ctx *c) { /* func_001FAFF0 */
ENTER(0x1faff0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fb004); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f280000);
SET32(4, RW(16) + 352);
SET64(2, RD(2) | 0xf5c3);
SET32(5, RW(0) + 128);
c->f[12].u = RW(2);
SET64(31, 0x1fb020); SET32(6, RW(0) + 2); JP_F_001D3210(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb02c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1fb034); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1fb03c); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FB050(Ctx *c) { /* func_001FB050 */
ENTER(0x1fb050);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fb070); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fb080); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1fb088); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FB0A0(Ctx *c) { /* func_001FB0A0 */
ENTER(0x1fb0a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fb0b4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fb0c0); SET32(5, RW(0) + 6); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb0cc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fb0d8); SET32(5, RW(0) + 7); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb0e4); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FB100(Ctx *c) { /* func_001FB100 */
ENTER(0x1fb100);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fb120); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fb128); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FB140(Ctx *c) { /* func_001FB140 */
ENTER(0x1fb140);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fb154); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fb160); SET32(5, RW(0) + 4); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb16c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1fb174); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fb180); SET32(5, RW(28) + -31636); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fb18c); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fb1a0); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001FB1B0(Ctx *c) { /* func_001FB1B0 */
ENTER(0x1fb1b0);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_001FB1D0; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_001FB1F8;
L_001FB1D0:;
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x1fb1e0); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1528)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x1fb1f0); SET32(4, RW(16) + 1520); rt_call(c, t); }
wr8(c, (RW(16) + 3420), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
L_001FB1F8:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FB210(Ctx *c) { /* func_001FB210 */
ENTER(0x1fb210);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fb230); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1528)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fb240); SET32(4, RW(16) + 1520); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 2792)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fb250); SET32(4, RW(16) + 2784); rt_call(c, t); }
SET64(31, 0x1fb258); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FB270(Ctx *c) { /* func_001FB270 */
ENTER(0x1fb270);
SET32(29, RW(29) + -304);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fb284); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 1520);
c->f[12].u = RW(2);
SET64(31, 0x1fb298); SET32(5, RW(0) + 1); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb2a4); SET32(5, RW(16) + 1520); JP_F_001B6520(c);
SET64(31, 0x1fb2ac); SET32(4, RW(29) + 96); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1fb2b8); SET32(5, RW(28) + -31640); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fb2c4); SET32(4, RW(29) + 240); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 240) & ~15u, &c->r[5]);
SET64(2, (s64)(s32)0x3ecc0000);
SET64(3, RD(2) | 0xcccd);
SET32(4, RW(29) + 32);
SET64(2, (s64)(s32)0x3f800000);
wr128(c, (RW(16) + 1936) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 256) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 1952) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 272) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 1968) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 288) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 1984) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 168), RW(3));
wr32(c, (RW(29) + 172), RW(2));
wr32(c, (RW(29) + 160), RW(0));
SET64(31, 0x1fb308); wr32(c, (RW(29) + 164), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fb314); SET32(5, RW(29) + 160); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fb320); SET32(4, RW(29) + 176); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 1528)));
SET32(4, RW(16) + 1520);
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x1fb334); SET32(5, RW(29) + 176); rt_call(c, t); }
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 352);
c->f[12].u = RW(2);
SET64(31, 0x1fb348); SET64(5, RD(0) + RD(0)); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb354); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f280000);
SET64(3, (s64)(s32)0x40000000);
SET64(2, RD(2) | 0xf5c3);
SET32(4, RW(16) + 2784);
c->f[12].u = RW(3);
SET32(5, RW(0) + 64);
c->f[13].u = RW(2);
SET32(6, RW(0) + 1);
SET64(31, 0x1fb37c); SET64(7, RD(0) + RD(0)); JP_F_001D27B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb388); SET32(5, RW(16) + 2784); JP_F_001B6520(c);
SET64(31, 0x1fb390); SET32(4, RW(16) + 2880); JP_F_001EC380(c);
SET64(31, 0x1fb398); SET32(4, RW(16) + 2784); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 304); return;
}

void JP_F_001FB3B0(Ctx *c) { /* func_001FB3B0 */
ENTER(0x1fb3b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fb3d0); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, 0x1fb3d8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FB3F0(Ctx *c) { /* func_001FB3F0 */
ENTER(0x1fb3f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fb404); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0x3f280000);
SET32(4, RW(16) + 352);
SET64(2, RD(2) | 0xf5c3);
SET32(5, RW(0) + 128);
c->f[12].u = RW(2);
SET64(31, 0x1fb420); SET32(6, RW(0) + 1); JP_F_001D3210(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb42c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, 0x1fb434); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(31, 0x1fb43c); SET32(4, RW(16) + 352); JP_F_001EC500(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FB450(Ctx *c) { /* func_001FB450 */
ENTER(0x1fb450);
SET32(29, RW(29) + -768);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fb464); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fb470); SET32(5, RW(0) + 17); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb47c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fb488); SET32(5, RW(0) + 18); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb494); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1fb4a0); SET32(5, RW(0) + 19); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb4ac); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET32(4, RW(16) + 4608);
SET64(31, 0x1fb4b8); SET32(5, RW(0) + 20); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb4c4); SET32(5, RW(16) + 4608); JP_F_001B6520(c);
SET32(4, RW(16) + 6016);
SET64(31, 0x1fb4d0); SET32(5, RW(0) + 25); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb4dc); SET32(5, RW(16) + 6016); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f310000);
SET64(3, (s64)(s32)0x3f490000);
wr32(c, (RW(29) + 752), RW(2));
SET32(4, RW(16) + 7424);
SET64(2, (s64)(s32)0x3f4f0000);
wr32(c, (RW(29) + 756), RW(3));
wr32(c, (RW(29) + 760), RW(2));
SET64(3, (s64)(s32)0x3f670000);
SET64(2, (s64)(s32)0x40c00000);
wr32(c, (RW(29) + 764), RW(3));
c->f[12].u = RW(2);
SET64(3, (s64)(s32)0x3cf50000);
SET64(2, (s64)(s32)0x3ea80000);
SET64(3, RD(3) | 0xc28f);
SET64(2, RD(2) | 0xf5c3);
SET32(5, RW(0) + 30);
c->f[13].u = RW(3);
c->f[14].u = RW(2);
SET64(31, 0x1fb52c); SET32(6, RW(29) + 752); JP_F_001D65B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb538); SET32(5, RW(16) + 7424); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xc0a00000);
SET32(4, RW(29) + 288);
wr32(c, (RW(29) + 680), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 672), RW(0));
wr32(c, (RW(29) + 684), RW(2));
SET64(31, 0x1fb558); wr32(c, (RW(29) + 676), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 288);
SET64(31, 0x1fb564); SET32(5, RW(29) + 672); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fb570); SET32(4, RW(29) + 688); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fb584); SET32(5, RW(29) + 688); rt_call(c, t); }
SET64(2, (s64)(s32)0xc0800000);
SET32(4, RW(29) + 224);
wr32(c, (RW(29) + 600), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 592), RW(0));
wr32(c, (RW(29) + 604), RW(2));
SET64(31, 0x1fb5a4); wr32(c, (RW(29) + 596), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 224);
SET64(31, 0x1fb5b0); SET32(5, RW(29) + 592); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fb5bc); SET32(4, RW(29) + 608); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET32(4, RW(16) + 1792);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fb5d0); SET32(5, RW(29) + 608); rt_call(c, t); }
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 160);
wr32(c, (RW(29) + 516), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 512), RW(0));
wr32(c, (RW(29) + 524), RW(2));
SET64(31, 0x1fb5f0); wr32(c, (RW(29) + 520), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 160);
SET64(31, 0x1fb5fc); SET32(5, RW(29) + 512); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fb608); SET32(4, RW(29) + 528); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET32(4, RW(16) + 3200);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fb61c); SET32(5, RW(29) + 528); rt_call(c, t); }
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 96);
wr32(c, (RW(29) + 436), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 432), RW(0));
wr32(c, (RW(29) + 444), RW(2));
SET64(31, 0x1fb63c); wr32(c, (RW(29) + 440), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1fb648); SET32(5, RW(29) + 432); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fb654); SET32(4, RW(29) + 448); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET32(4, RW(16) + 4608);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fb668); SET32(5, RW(29) + 448); rt_call(c, t); }
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 356), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 352), RW(0));
wr32(c, (RW(29) + 364), RW(2));
SET64(31, 0x1fb688); wr32(c, (RW(29) + 360), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fb694); SET32(5, RW(29) + 352); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fb6a0); SET32(4, RW(29) + 368); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 6024)));
SET32(4, RW(16) + 6016);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fb6b4); SET32(5, RW(29) + 368); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 768); return;
}

void JP_F_001FB6D0(Ctx *c) { /* func_001FB6D0 */
ENTER(0x1fb6d0);
SET32(29, RW(29) + -480);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fb6e4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fb6f0); SET32(5, RW(0) + 16); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb6fc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fb708); SET32(5, RW(0) + 17); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb714); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1fb720); SET32(5, RW(0) + 18); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb72c); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET32(4, RW(16) + 4608);
SET64(31, 0x1fb738); SET32(5, RW(0) + 19); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb744); SET32(5, RW(16) + 4608); JP_F_001B6520(c);
SET32(4, RW(16) + 6016);
SET64(31, 0x1fb750); SET32(5, RW(0) + 20); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb75c); SET32(5, RW(16) + 6016); JP_F_001B6520(c);
SET32(4, RW(16) + 7424);
SET64(31, 0x1fb768); SET32(5, RW(0) + 25); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb774); SET32(5, RW(16) + 7424); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f310000);
SET64(3, (s64)(s32)0x3f490000);
wr32(c, (RW(29) + 464), RW(2));
SET32(4, RW(16) + 8832);
SET64(2, (s64)(s32)0x3f4f0000);
wr32(c, (RW(29) + 468), RW(3));
wr32(c, (RW(29) + 472), RW(2));
SET64(3, (s64)(s32)0x3f670000);
SET64(2, (s64)(s32)0x40c00000);
wr32(c, (RW(29) + 476), RW(3));
c->f[12].u = RW(2);
SET64(3, (s64)(s32)0x3cf50000);
SET64(2, (s64)(s32)0x3ea80000);
SET64(3, RD(3) | 0xc28f);
SET64(2, RD(2) | 0xf5c3);
SET32(5, RW(0) + 60);
c->f[13].u = RW(3);
c->f[14].u = RW(2);
SET64(31, 0x1fb7c4); SET32(6, RW(29) + 464); JP_F_001D65B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fb7d0); SET32(5, RW(16) + 8832); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 160);
wr32(c, (RW(29) + 388), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 384), RW(0));
wr32(c, (RW(29) + 396), RW(2));
SET64(31, 0x1fb7f0); wr32(c, (RW(29) + 392), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 160);
SET64(31, 0x1fb7fc); SET32(5, RW(29) + 384); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fb808); SET32(4, RW(29) + 400); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET32(4, RW(16) + 4608);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fb81c); SET32(5, RW(29) + 400); rt_call(c, t); }
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 96);
wr32(c, (RW(29) + 308), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 304), RW(0));
wr32(c, (RW(29) + 316), RW(2));
SET64(31, 0x1fb83c); wr32(c, (RW(29) + 312), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1fb848); SET32(5, RW(29) + 304); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fb854); SET32(4, RW(29) + 320); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 6024)));
SET32(4, RW(16) + 6016);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fb868); SET32(5, RW(29) + 320); rt_call(c, t); }
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 228), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 224), RW(0));
wr32(c, (RW(29) + 236), RW(2));
SET64(31, 0x1fb888); wr32(c, (RW(29) + 232), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fb894); SET32(5, RW(29) + 224); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fb8a0); SET32(4, RW(29) + 240); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 7432)));
SET32(4, RW(16) + 7424);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fb8b4); SET32(5, RW(29) + 240); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 480); return;
}

void JP_F_001FB8D0(Ctx *c) { /* func_001FB8D0 */
ENTER(0x1fb8d0);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 5);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_001FB8E8; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_001FB8FC;
L_001FB8E8:;
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x1fb8f8); c->f[12].u = rd32(c, (RW(6) + 0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_001FB8FC:;
SET32(29, RW(29) + 16); return;
}

void JP_F_001FB910(Ctx *c) { /* func_001FB910 */
ENTER(0x1fb910);
SET32(29, RW(29) + -752);
SET64(2, (s64)(s32)0x42040000);
wr64(c, (RW(29) + 32), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
c->f[21].u = c->f[12].u;
c->fcc = F(21) < F(0);
{ int t = !c->fcc; wr32(c, (RW(29) + 0), c->f[20].u); if (t) goto L_001FB95C; }
c->f[2].f = fpu_div(F(21), F(0));
c->f[20].u = RW(0);
SET64(2, (s64)(s32)0x3f800000); goto L_001FB97C;
L_001FB95C:;
c->f[1].f = fpu(F(21) - F(0));
SET64(2, (s64)(s32)0x41d80000);
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[20].f = fpu_div(F(1), F(0));
c->f[2].u = RW(3);
SET64(2, (s64)(s32)0x3f800000);
L_001FB97C:;
SET32(4, RW(29) + 240);
wr32(c, (RW(29) + 552), c->f[2].u);
wr32(c, (RW(29) + 544), RW(2));
wr32(c, (RW(29) + 548), RW(2));
SET64(31, 0x1fb994); wr32(c, (RW(29) + 556), RW(2)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 240);
SET64(31, 0x1fb9a0); SET32(5, RW(29) + 544); JP_F_00181B20(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fb9ac); SET32(4, RW(29) + 688); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 688) & ~15u, &c->r[4]);
SET64(3, (s64)(s32)0x42040000);
SET64(2, (s64)(s32)0x41700000);
c->f[1].u = RW(2);
wr128(c, (RW(16) + 768) & ~15u, &c->r[4]);
c->f[0].u = RW(3);
rd128(c, (RW(29) + 704) & ~15u, &c->r[3]);
c->f[2].u = RW(0);
c->facc = fpu(F(2) + F(0));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].f = fpu(c->facc + F(1) * F(20));
SET32(4, RW(29) + 176);
wr128(c, (RW(16) + 784) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 720) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 800) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 736) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 816) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 688) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 6112) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 704) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 6128) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 720) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 6144) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 736) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 6160) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 392), c->f[0].u);
wr32(c, (RW(29) + 396), RW(2));
wr32(c, (RW(29) + 384), RW(0));
SET64(31, 0x1fba28); wr32(c, (RW(29) + 388), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 176);
SET64(31, 0x1fba34); SET32(5, RW(29) + 384); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fba40); SET32(4, RW(29) + 400); JP_F_0013ADA0(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 112);
wr32(c, (RW(29) + 464), RW(2));
wr32(c, (RW(29) + 472), c->f[20].u);
wr32(c, (RW(29) + 468), RW(2));
SET64(31, 0x1fba5c); wr32(c, (RW(29) + 476), RW(2)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 112);
SET64(31, 0x1fba68); SET32(5, RW(29) + 464); JP_F_00181B20(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fba74); SET32(4, RW(29) + 480); JP_F_0013ADA0(c);
SET32(4, RW(29) + 304);
SET32(5, RW(29) + 480);
SET64(31, 0x1fba84); SET32(6, RW(29) + 400); JP_F_002AEAE0(c);
SET64(31, 0x1fba8c); SET32(4, RW(29) + 624); JP_F_002AF080(c);
rd128(c, (RW(29) + 304) & ~15u, &c->r[5]);
SET64(2, (s64)(s32)0xbf800000);
rd128(c, (RW(29) + 320) & ~15u, &c->r[4]);
c->f[0].u = RW(2);
rd128(c, (RW(29) + 336) & ~15u, &c->r[3]);
c->f[0].f = fpu(F(0) + F(21));
wr128(c, (RW(29) + 624) & ~15u, &c->r[5]);
SET64(2, (s64)(s32)0x3f800000);
wr128(c, (RW(29) + 640) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 656) & ~15u, &c->r[3]);
SET32(4, RW(29) + 48);
rd128(c, (RW(29) + 352) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 672) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 624) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2032) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 640) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2048) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 656) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2064) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 672) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2080) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 624) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 7376) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 640) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 7392) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 656) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 7408) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 672) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 7424) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 376), c->f[0].u);
wr32(c, (RW(29) + 380), RW(2));
wr32(c, (RW(29) + 368), RW(0));
SET64(31, 0x1fbb14); wr32(c, (RW(29) + 372), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x1fbb20); SET32(5, RW(29) + 368); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fbb2c); SET32(4, RW(29) + 560); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 2888)));
SET32(4, RW(16) + 2880);
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x1fbb40); SET32(5, RW(29) + 560); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 752); return;
}

void JP_F_001FBB60(Ctx *c) { /* func_001FBB60 */
ENTER(0x1fbb60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fbb80); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1624)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fbb90); SET32(4, RW(16) + 1616); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 2888)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fbba0); SET32(4, RW(16) + 2880); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 5704)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fbbb0); SET32(4, RW(16) + 5696); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 6968)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fbbc0); SET32(4, RW(16) + 6960); rt_call(c, t); }
SET64(31, 0x1fbbc8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FBBE0(Ctx *c) { /* func_001FBBE0 */
ENTER(0x1fbbe0);
SET32(29, RW(29) + -416);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fbbf4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 352);
c->f[12].u = RW(2);
SET64(31, 0x1fbc08); SET32(5, RW(0) + 9); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fbc14); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 1616);
c->f[12].u = RW(2);
SET64(31, 0x1fbc28); SET32(5, RW(0) + 10); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fbc34); SET32(5, RW(16) + 1616); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 2880);
c->f[12].u = RW(2);
SET64(31, 0x1fbc48); SET32(5, RW(0) + 13); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fbc54); SET32(5, RW(16) + 2880); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 5696);
c->f[12].u = RW(2);
SET64(31, 0x1fbc68); SET32(5, RW(0) + 11); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fbc74); SET32(5, RW(16) + 5696); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 6960);
c->f[12].u = RW(2);
SET64(31, 0x1fbc88); SET32(5, RW(0) + 12); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fbc94); SET32(5, RW(16) + 6960); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 384), RW(2));
SET32(4, RW(29) + 80);
wr32(c, (RW(29) + 388), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 392), RW(0));
SET32(5, RW(29) + 400);
wr32(c, (RW(29) + 396), RW(3));
SET32(6, RW(29) + 384);
wr32(c, (RW(29) + 400), RW(0));
wr32(c, (RW(29) + 404), RW(0));
wr32(c, (RW(29) + 408), RW(3));
wr32(c, (RW(29) + 412), RW(3));
wr8(c, (RW(16) + 864), (u8)RW(2));
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
SET64(31, 0x1fbcdc); wr128(c, (RW(16) + 832) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 156), RW(2));
SET32(4, RW(29) + 144);
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
SET64(31, 0x1fbd00); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 144) & ~15u, &c->r[6]);
SET64(7, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0xbf800000);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 64);
SET32(5, RW(29) + 368);
wr128(c, (RW(16) + 848) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 352), RW(3));
SET32(6, RW(29) + 352);
wr32(c, (RW(29) + 356), RW(0));
wr32(c, (RW(29) + 360), RW(0));
wr32(c, (RW(29) + 364), RW(7));
wr32(c, (RW(29) + 368), RW(0));
wr32(c, (RW(29) + 372), RW(0));
wr32(c, (RW(29) + 376), RW(7));
wr32(c, (RW(29) + 380), RW(7));
wr8(c, (RW(16) + 2128), (u8)RW(2));
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
SET64(31, 0x1fbd50); wr128(c, (RW(16) + 2096) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 140), RW(2));
SET32(4, RW(29) + 128);
rd128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
SET64(31, 0x1fbd74); wr128(c, (RW(29) + 128) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 128) & ~15u, &c->r[6]);
SET64(7, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0xbf800000);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 48);
SET32(5, RW(29) + 336);
wr128(c, (RW(16) + 2112) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 320), RW(3));
SET32(6, RW(29) + 320);
wr32(c, (RW(29) + 324), RW(0));
wr32(c, (RW(29) + 328), RW(0));
wr32(c, (RW(29) + 332), RW(7));
wr32(c, (RW(29) + 336), RW(0));
wr32(c, (RW(29) + 340), RW(0));
wr32(c, (RW(29) + 344), RW(7));
wr32(c, (RW(29) + 348), RW(7));
wr8(c, (RW(16) + 6208), (u8)RW(2));
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
SET64(31, 0x1fbdc4); wr128(c, (RW(16) + 6176) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 124), RW(2));
SET32(4, RW(29) + 112);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
SET64(31, 0x1fbde8); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[6]);
SET64(7, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0xbf800000);
SET32(2, RW(0) + 1);
SET32(4, RW(29) + 32);
SET32(5, RW(29) + 304);
wr128(c, (RW(16) + 6192) & ~15u, &c->r[6]);
wr32(c, (RW(29) + 288), RW(3));
SET32(6, RW(29) + 288);
wr32(c, (RW(29) + 292), RW(0));
wr32(c, (RW(29) + 296), RW(0));
wr32(c, (RW(29) + 300), RW(7));
wr32(c, (RW(29) + 304), RW(0));
wr32(c, (RW(29) + 308), RW(0));
wr32(c, (RW(29) + 312), RW(7));
wr32(c, (RW(29) + 316), RW(7));
wr8(c, (RW(16) + 7472), (u8)RW(2));
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET64(31, 0x1fbe38); wr128(c, (RW(16) + 7440) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET32(4, RW(29) + 96);
rd128(c, (RW(29) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
SET64(31, 0x1fbe5c); wr128(c, (RW(29) + 96) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x3dcc0000);
SET64(2, RD(2) | 0xcccd);
c->f[12].u = RW(2);
wr128(c, (RW(16) + 7456) & ~15u, &c->r[3]);
SET64(25, (s32)rd32(c, (RW(16) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x1fbe80); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 416); return;
}

void JP_F_001FBE90(Ctx *c) { /* func_001FBE90 */
ENTER(0x1fbe90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fbeb0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fbec0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1fbec8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FBEE0(Ctx *c) { /* func_001FBEE0 */
ENTER(0x1fbee0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fbef4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fbf00); SET32(5, RW(0) + 4); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fbf0c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fbf18); SET32(5, RW(0) + 6); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fbf24); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FBF40(Ctx *c) { /* func_001FBF40 */
ENTER(0x1fbf40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fbf60); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fbf68); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FBF80(Ctx *c) { /* func_001FBF80 */
ENTER(0x1fbf80);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fbf94); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fbfa0); SET32(5, RW(0) + 5); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fbfac); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1fbfb4); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fbfc0); SET32(5, RW(28) + -31644); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fbfcc); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fbfe0); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001FBFF0(Ctx *c) { /* func_001FBFF0 */
ENTER(0x1fbff0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fc004); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fc010); SET32(5, RW(0) + 3); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc01c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(3, (s64)(s32)0x3f000000);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 108), RW(2));
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 96), RW(3));
wr32(c, (RW(29) + 100), RW(3));
SET64(31, 0x1fc03c); wr32(c, (RW(29) + 104), RW(3)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fc048); SET32(5, RW(29) + 96); JP_F_00181B20(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fc054); SET32(4, RW(29) + 112); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fc068); SET32(5, RW(29) + 112); rt_call(c, t); }
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x40800000);
wr8(c, (RW(16) + 1716), (u8)RW(3));
c->f[13].u = RW(2);
c->f[12].u = RW(0);
SET64(31, 0x1fc084); SET32(4, RW(16) + 1792); JP_F_001D5990(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc090); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_001FC0A0(Ctx *c) { /* func_001FC0A0 */
ENTER(0x1fc0a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fc0b4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fc0c0); SET32(5, RW(0) + 3); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc0cc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fc0d8); SET32(5, RW(0) + 3); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc0e4); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1fc0f0); SET32(5, RW(0) + 3); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc0fc); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET32(4, RW(16) + 4608);
SET64(31, 0x1fc108); SET32(5, RW(0) + 3); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc114); SET32(5, RW(16) + 4608); JP_F_001B6520(c);
SET32(4, RW(16) + 6016);
SET64(31, 0x1fc120); SET32(5, RW(0) + 3); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc12c); SET32(5, RW(16) + 6016); JP_F_001B6520(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 1716), (u8)RW(3));
wr8(c, (RW(16) + 3124), (u8)RW(3));
wr8(c, (RW(16) + 4532), (u8)RW(3));
wr8(c, (RW(16) + 5940), (u8)RW(3));
wr8(c, (RW(16) + 7348), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC160(Ctx *c) { /* func_001FC160 */
ENTER(0x1fc160);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fc174); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fc180); wr32(c, (RW(16) + 1896), RW(0)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc18c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1984);
SET64(31, 0x1fc198); SET32(5, RW(0) + 1); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc1a4); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET32(4, RW(16) + 3392);
SET64(31, 0x1fc1b0); SET32(5, RW(0) + 2); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc1bc); SET32(5, RW(16) + 3392); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC1D0(Ctx *c) { /* func_001FC1D0 */
ENTER(0x1fc1d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc1f0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc200); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3592)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc210); SET32(4, RW(16) + 3584); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 5000)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc220); SET32(4, RW(16) + 4992); rt_call(c, t); }
SET64(31, 0x1fc228); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC240(Ctx *c) { /* func_001FC240 */
ENTER(0x1fc240);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fc258); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 16);
SET32(4, RW(16) + 384);
SET64(31, 0x1fc268); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc274); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 16);
SET32(4, RW(16) + 1984);
SET64(31, 0x1fc284); wr32(c, (RW(16) + 3496), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc290); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET32(4, RW(16) + 3584);
SET64(31, 0x1fc29c); SET32(5, RW(0) + 17); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc2a8); SET32(5, RW(16) + 3584); JP_F_001B6520(c);
SET32(4, RW(16) + 4992);
SET64(31, 0x1fc2b4); SET32(5, RW(0) + 17); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc2c0); SET32(5, RW(16) + 4992); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 96);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1fc2e0); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 80);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1fc304); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 384);
SET64(31, 0x1fc318); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 64);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1fc338); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 48);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1fc35c); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 1984);
SET64(31, 0x1fc370); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(25, (s32)rd32(c, (RW(16) + 5000)));
SET64(2, (s64)(s32)0x41a00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fc388); SET32(4, RW(16) + 4992); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_001FC3A0(Ctx *c) { /* func_001FC3A0 */
ENTER(0x1fc3a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc3c0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fc3c8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC3E0(Ctx *c) { /* func_001FC3E0 */
ENTER(0x1fc3e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fc3f4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fc400); SET32(5, RW(0) + 13); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc40c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC420(Ctx *c) { /* func_001FC420 */
ENTER(0x1fc420);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc440); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fc448); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC460(Ctx *c) { /* func_001FC460 */
ENTER(0x1fc460);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fc474); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fc480); SET32(5, RW(0) + 12); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc48c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC4A0(Ctx *c) { /* func_001FC4A0 */
ENTER(0x1fc4a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc4c0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc4d0); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(31, 0x1fc4d8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC4F0(Ctx *c) { /* func_001FC4F0 */
ENTER(0x1fc4f0);
SET32(29, RW(29) + -400);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fc504); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 14);
SET32(4, RW(16) + 384);
SET64(31, 0x1fc514); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc520); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 368), RW(0));
wr32(c, (RW(29) + 372), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 376), RW(3));
SET32(4, RW(29) + 160);
wr32(c, (RW(29) + 380), RW(3));
SET32(5, RW(29) + 384);
wr32(c, (RW(29) + 384), RW(0));
SET32(6, RW(29) + 368);
wr32(c, (RW(29) + 388), RW(3));
wr32(c, (RW(29) + 396), RW(3));
wr32(c, (RW(29) + 392), RW(0));
wr8(c, (RW(16) + 1888), (u8)RW(2));
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(31, 0x1fc564); wr128(c, (RW(16) + 1856) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 176), RW(0));
wr32(c, (RW(29) + 188), RW(2));
SET32(4, RW(29) + 176);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 180), RW(0));
wr32(c, (RW(29) + 184), RW(0));
SET64(31, 0x1fc588); wr128(c, (RW(29) + 176) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET32(4, RW(29) + 96);
SET64(31, 0x1fc598); wr128(c, (RW(16) + 1872) & ~15u, &c->r[2]); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1fc5a4); SET32(5, RW(28) + -31648); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fc5b0); SET32(4, RW(29) + 304); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fc5c4); SET32(5, RW(29) + 304); rt_call(c, t); }
SET32(4, RW(16) + 1984);
SET64(31, 0x1fc5d0); SET32(5, RW(0) + 15); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc5dc); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 228), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 224), RW(0));
wr32(c, (RW(29) + 236), RW(2));
SET64(31, 0x1fc5fc); wr32(c, (RW(29) + 232), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fc608); SET32(5, RW(29) + 224); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fc614); SET32(4, RW(29) + 240); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET32(4, RW(16) + 1984);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fc628); SET32(5, RW(29) + 240); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 400); return;
}

void JP_F_001FC640(Ctx *c) { /* func_001FC640 */
ENTER(0x1fc640);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc660); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fc668); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC680(Ctx *c) { /* func_001FC680 */
ENTER(0x1fc680);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fc694); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fc6a0); SET32(5, RW(0) + 1); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc6ac); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1fc6b4); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fc6c0); SET32(5, RW(28) + -31652); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fc6cc); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fc6e0); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001FC6F0(Ctx *c) { /* func_001FC6F0 */
ENTER(0x1fc6f0);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 16);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) == RD(3); SET64(7, RD(4) + RD(0)); if (t) goto L_001FC70C; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_001FC724;
L_001FC70C:;
SET64(25, (s32)rd32(c, (RW(7) + 392)));
c->f[12].u = rd32(c, (RW(6) + 0));
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fc720); SET32(4, RW(7) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_001FC724:;
SET32(29, RW(29) + 16); return;
}

void JP_F_001FC730(Ctx *c) { /* func_001FC730 */
ENTER(0x1fc730);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc750); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fc758); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC770(Ctx *c) { /* func_001FC770 */
ENTER(0x1fc770);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fc784); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fc790); SET32(5, RW(0) + 11); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc79c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC7B0(Ctx *c) { /* func_001FC7B0 */
ENTER(0x1fc7b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc7d0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fc7d8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC7F0(Ctx *c) { /* func_001FC7F0 */
ENTER(0x1fc7f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fc804); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fc810); SET32(5, RW(0) + 10); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc81c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC830(Ctx *c) { /* func_001FC830 */
ENTER(0x1fc830);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 16);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) == RD(3); SET64(7, RD(4) + RD(0)); if (t) goto L_001FC84C; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_001FC864;
L_001FC84C:;
SET64(25, (s32)rd32(c, (RW(7) + 392)));
c->f[12].u = rd32(c, (RW(6) + 0));
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fc860); SET32(4, RW(7) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_001FC864:;
SET32(29, RW(29) + 16); return;
}

void JP_F_001FC870(Ctx *c) { /* func_001FC870 */
ENTER(0x1fc870);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc890); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fc898); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC8B0(Ctx *c) { /* func_001FC8B0 */
ENTER(0x1fc8b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fc8c4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fc8d0); SET32(5, RW(0) + 9); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc8dc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC8F0(Ctx *c) { /* func_001FC8F0 */
ENTER(0x1fc8f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc910); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fc920); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1fc928); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FC940(Ctx *c) { /* func_001FC940 */
ENTER(0x1fc940);
SET32(29, RW(29) + -400);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fc954); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fc960); SET32(5, RW(0) + 5); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc96c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf000000);
SET32(4, RW(29) + 96);
wr32(c, (RW(29) + 324), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 320), RW(0));
wr32(c, (RW(29) + 332), RW(2));
SET64(31, 0x1fc98c); wr32(c, (RW(29) + 328), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1fc998); SET32(5, RW(29) + 320); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fc9a4); SET32(4, RW(29) + 336); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fc9b8); SET32(5, RW(29) + 336); rt_call(c, t); }
SET32(2, RW(0) + 6);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fc9c8); wr32(c, (RW(16) + 3304), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fc9d4); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 288), RW(0));
wr32(c, (RW(29) + 292), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 296), RW(3));
SET32(4, RW(29) + 160);
wr32(c, (RW(29) + 300), RW(3));
SET32(5, RW(29) + 304);
wr32(c, (RW(29) + 304), RW(0));
SET32(6, RW(29) + 288);
wr32(c, (RW(29) + 308), RW(3));
wr32(c, (RW(29) + 316), RW(3));
wr32(c, (RW(29) + 312), RW(0));
wr8(c, (RW(16) + 3296), (u8)RW(2));
rd128(c, (RW(29) + 304) & ~15u, &c->r[2]);
SET64(31, 0x1fca18); wr128(c, (RW(16) + 3264) & ~15u, &c->r[2]); JP_F_002B0150(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 176), RW(0));
wr32(c, (RW(29) + 188), RW(2));
SET32(4, RW(29) + 176);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 180), RW(0));
wr32(c, (RW(29) + 184), RW(0));
SET64(31, 0x1fca3c); wr128(c, (RW(29) + 176) & ~15u, &c->r[2]); JP_F_002B0360(c);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET32(4, RW(29) + 32);
SET64(31, 0x1fca4c); wr128(c, (RW(16) + 3280) & ~15u, &c->r[2]); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fca58); SET32(5, RW(28) + -31656); JP_F_00181A80(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fca64); SET32(4, RW(29) + 224); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET32(4, RW(16) + 1792);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fca78); SET32(5, RW(29) + 224); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 400); return;
}

void JP_F_001FCA90(Ctx *c) { /* func_001FCA90 */
ENTER(0x1fca90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fcab0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fcab8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FCAD0(Ctx *c) { /* func_001FCAD0 */
ENTER(0x1fcad0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fcae4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fcaf0); SET32(5, RW(0) + 1); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fcafc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1fcb04); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fcb10); SET32(5, RW(28) + -31660); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fcb1c); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fcb30); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001FCB40(Ctx *c) { /* func_001FCB40 */
ENTER(0x1fcb40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fcb60); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fcb68); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FCB80(Ctx *c) { /* func_001FCB80 */
ENTER(0x1fcb80);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fcb94); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fcba0); SET32(5, RW(0) + 4); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fcbac); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1fcbb4); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fcbc0); SET32(5, RW(28) + -31664); JP_F_0013AD00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fcbcc); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fcbe0); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001FCBF0(Ctx *c) { /* func_001FCBF0 */
ENTER(0x1fcbf0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fcc10); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fcc18); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FCC30(Ctx *c) { /* func_001FCC30 */
ENTER(0x1fcc30);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fcc44); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fcc50); SET64(5, RD(0) + RD(0)); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fcc5c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1fcc64); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fcc70); SET32(5, RW(28) + -31668); JP_F_0013AD00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fcc7c); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fcc90); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001FCCA0(Ctx *c) { /* func_001FCCA0 */
ENTER(0x1fcca0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fccc0); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1032)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fccd0); SET32(4, RW(16) + 1024); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1704)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fcce0); SET32(4, RW(16) + 1696); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 2376)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fccf0); SET32(4, RW(16) + 2368); rt_call(c, t); }
SET64(31, 0x1fccf8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FCD10(Ctx *c) { /* func_001FCD10 */
ENTER(0x1fcd10);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fcd24); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 232);
SET32(4, RW(16) + 352);
wr32(c, (RW(29) + 52), RW(2));
SET32(5, RW(0) + 4);
SET32(2, RW(0) + 64);
SET32(6, RW(29) + 48);
wr32(c, (RW(29) + 56), RW(2));
SET32(7, RW(29) + 32);
SET32(2, RW(0) + 256);
wr32(c, (RW(29) + 48), RW(0));
wr32(c, (RW(29) + 60), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 32), RW(2));
c->f[14].u = RW(2);
wr32(c, (RW(29) + 44), RW(2));
SET64(2, (s64)(s32)0x40800000);
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x42200000);
c->f[13].u = RW(2);
SET64(31, 0x1fcd7c); wr32(c, (RW(29) + 40), RW(0)); JP_F_001CFA30(c);
SET64(2, (s64)(s32)0x40800000);
SET64(3, (s64)(s32)0x42200000);
c->f[12].u = RW(2);
SET32(4, RW(16) + 1024);
SET64(2, (s64)(s32)0x3f800000);
SET32(5, RW(0) + 4);
c->f[13].u = RW(3);
SET32(6, RW(29) + 48);
c->f[14].u = RW(2);
SET64(31, 0x1fcda8); SET32(7, RW(29) + 32); JP_F_001CFA30(c);
SET64(2, (s64)(s32)0x40800000);
SET64(3, (s64)(s32)0x42200000);
c->f[12].u = RW(2);
SET32(4, RW(16) + 1696);
SET64(2, (s64)(s32)0x3f800000);
SET32(5, RW(0) + 4);
c->f[13].u = RW(3);
SET32(6, RW(29) + 48);
c->f[14].u = RW(2);
SET64(31, 0x1fcdd4); SET32(7, RW(29) + 32); JP_F_001CFA30(c);
SET64(2, (s64)(s32)0x40800000);
SET64(3, (s64)(s32)0x42200000);
c->f[12].u = RW(2);
SET32(4, RW(16) + 2368);
SET64(2, (s64)(s32)0x3f800000);
SET32(5, RW(0) + 4);
c->f[13].u = RW(3);
SET32(6, RW(29) + 48);
c->f[14].u = RW(2);
SET64(31, 0x1fce00); SET32(7, RW(29) + 32); JP_F_001CFA30(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fce0c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fce18); SET32(5, RW(16) + 1024); JP_F_001B6520(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fce24); SET32(5, RW(16) + 1696); JP_F_001B6520(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fce30); SET32(5, RW(16) + 2368); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_001FCE40(Ctx *c) { /* func_001FCE40 */
ENTER(0x1fce40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fce60); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fce70); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1fce78); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FCE90(Ctx *c) { /* func_001FCE90 */
ENTER(0x1fce90);
SET32(29, RW(29) + -320);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fcea4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fceb0); SET32(5, RW(0) + 4); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fcebc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 1792);
c->f[12].u = RW(2);
SET64(31, 0x1fced0); SET32(5, RW(0) + 3); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fcedc); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x40800000);
SET64(3, (s64)(s32)0x40000000);
wr32(c, (RW(29) + 244), RW(2));
SET32(4, RW(29) + 96);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 240), RW(3));
wr32(c, (RW(29) + 252), RW(2));
SET64(31, 0x1fcf00); wr32(c, (RW(29) + 248), RW(3)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1fcf0c); SET32(5, RW(29) + 240); JP_F_00181B20(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fcf18); SET32(4, RW(29) + 256); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fcf2c); SET32(5, RW(29) + 256); rt_call(c, t); }
SET64(3, (s64)(s32)0x40400000);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 172), RW(2));
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 160), RW(3));
wr32(c, (RW(29) + 164), RW(3));
SET64(31, 0x1fcf4c); wr32(c, (RW(29) + 168), RW(3)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fcf58); SET32(5, RW(29) + 160); JP_F_00181B20(c);
SET32(4, RW(29) + 176);
SET64(31, 0x1fcf64); SET64(5, RD(2) + RD(0)); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 176) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2208) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2224) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 208) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2240) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 224) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 2256) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 320); return;
}

void JP_F_001FCFA0(Ctx *c) { /* func_001FCFA0 */
ENTER(0x1fcfa0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fcfc0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fcfc8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FCFE0(Ctx *c) { /* func_001FCFE0 */
ENTER(0x1fcfe0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fcff4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fd000); SET64(5, RD(0) + RD(0)); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd00c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD020(Ctx *c) { /* func_001FD020 */
ENTER(0x1fd020);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd040); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fd048); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD060(Ctx *c) { /* func_001FD060 */
ENTER(0x1fd060);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd074); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fd080); SET32(5, RW(0) + 12); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd08c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD0A0(Ctx *c) { /* func_001FD0A0 */
ENTER(0x1fd0a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd0c0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fd0c8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD0E0(Ctx *c) { /* func_001FD0E0 */
ENTER(0x1fd0e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd0f4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fd100); SET32(5, RW(0) + 8); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd10c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD120(Ctx *c) { /* func_001FD120 */
ENTER(0x1fd120);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd140); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fd148); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD160(Ctx *c) { /* func_001FD160 */
ENTER(0x1fd160);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd174); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fd180); SET32(5, RW(0) + 5); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd18c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD1A0(Ctx *c) { /* func_001FD1A0 */
ENTER(0x1fd1a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd1c0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd1d0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1fd1d8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD1F0(Ctx *c) { /* func_001FD1F0 */
ENTER(0x1fd1f0);
SET32(29, RW(29) + -576);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd204); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fd210); SET32(5, RW(0) + 7); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd21c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f000000);
SET32(4, RW(29) + 160);
wr32(c, (RW(29) + 500), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 496), RW(0));
wr32(c, (RW(29) + 508), RW(2));
SET64(31, 0x1fd23c); wr32(c, (RW(29) + 504), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 160);
SET64(31, 0x1fd248); SET32(5, RW(29) + 496); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fd254); SET32(4, RW(29) + 512); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fd268); SET32(5, RW(29) + 512); rt_call(c, t); }
SET32(2, RW(0) + 9);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fd278); wr32(c, (RW(16) + 3304), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd284); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f000000);
SET32(4, RW(29) + 96);
wr32(c, (RW(29) + 292), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 288), RW(0));
wr32(c, (RW(29) + 300), RW(2));
SET64(31, 0x1fd2a4); wr32(c, (RW(29) + 296), RW(0)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1fd2b0); SET32(5, RW(29) + 288); JP_F_00165780(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fd2bc); SET32(4, RW(29) + 304); JP_F_0013ADA0(c);
SET64(31, 0x1fd2c4); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fd2d0); SET32(5, RW(28) + -31672); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fd2dc); SET32(4, RW(29) + 368); JP_F_0013ADA0(c);
SET32(4, RW(29) + 224);
SET32(5, RW(29) + 368);
SET64(31, 0x1fd2ec); SET32(6, RW(29) + 304); JP_F_002AEAE0(c);
SET64(31, 0x1fd2f4); SET32(4, RW(29) + 432); JP_F_002AF080(c);
rd128(c, (RW(29) + 224) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 240) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 256) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 432) & ~15u, &c->r[5]);
wr128(c, (RW(29) + 448) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 464) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 272) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 480) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 432) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 3200) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 448) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 3216) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 464) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 3232) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 480) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 3248) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 576); return;
}

void JP_F_001FD350(Ctx *c) { /* func_001FD350 */
ENTER(0x1fd350);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd370); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fd378); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD390(Ctx *c) { /* func_001FD390 */
ENTER(0x1fd390);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd3a4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fd3b0); SET32(5, RW(0) + 6); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd3bc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1fd3c4); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fd3d0); SET32(5, RW(28) + -31676); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fd3dc); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fd3f0); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001FD400(Ctx *c) { /* func_001FD400 */
ENTER(0x1fd400);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x40000000);
wr64(c, (RW(29) + 32), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
c->f[1].u = rd32(c, (RW(4) + 352));
c->f[20].u = c->f[12].u;
c->f[1].f = fpu(F(1) + F(20));
c->fcc = F(1) < F(0);
{ int t = c->fcc; wr32(c, (RW(4) + 352), c->f[1].u); if (t) goto L_001FD448; }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET32(4, RW(16) + 1792);
SET64(25, (s32)rd32(c, (RW(25) + 196)));
{ u32 t = RW(25); SET64(31, 0x1fd448); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
L_001FD448:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd454); c->f[12].u = c->f[20].u; JP_F_001B65A0(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_001FD470(Ctx *c) { /* func_001FD470 */
ENTER(0x1fd470);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd484); SET64(16, RD(4) + RD(0)); JP_F_001B67E0(c);
wr32(c, (RW(16) + 352), RW(0));
SET32(4, RW(16) + 1792);
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 196)));
{ u32 t = RW(25); SET64(31, 0x1fd49c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD4B0(Ctx *c) { /* func_001FD4B0 */
ENTER(0x1fd4b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd4d0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd4e0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1fd4e8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD500(Ctx *c) { /* func_001FD500 */
ENTER(0x1fd500);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd514); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fd520); SET32(5, RW(0) + 4); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd52c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(16) + 1792);
c->f[12].u = RW(2);
SET64(31, 0x1fd540); SET32(5, RW(0) + 3); JP_F_001ED9D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd54c); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(2, (s64)(s32)0x40000000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fd564); SET32(4, RW(16) + 384); rt_call(c, t); }
wr32(c, (RW(16) + 352), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD580(Ctx *c) { /* func_001FD580 */
ENTER(0x1fd580);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd5a0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fd5a8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD5C0(Ctx *c) { /* func_001FD5C0 */
ENTER(0x1fd5c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd5d4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fd5e0); SET64(5, RD(0) + RD(0)); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd5ec); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD600(Ctx *c) { /* func_001FD600 */
ENTER(0x1fd600);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd620); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd630); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(31, 0x1fd638); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD650(Ctx *c) { /* func_001FD650 */
ENTER(0x1fd650);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd664); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 1);
SET32(4, RW(16) + 384);
SET64(31, 0x1fd674); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd680); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1984);
SET64(31, 0x1fd68c); SET32(5, RW(0) + 2); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd698); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD6B0(Ctx *c) { /* func_001FD6B0 */
ENTER(0x1fd6b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd6c4); SET64(16, RD(4) + RD(0)); JP_F_001B6A00(c);
SET32(4, RW(16) + 576);
SET64(31, 0x1fd6d0); SET64(5, RD(0) | 0x8000); JP_F_00153560(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD6E0(Ctx *c) { /* func_001FD6E0 */
ENTER(0x1fd6e0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd6f4); SET64(16, RD(4) + RD(0)); JP_F_001B67E0(c);
SET64(31, 0x1fd6fc);  JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_001FD710; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_001FD728;
L_001FD710:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_001FD728:;
SET64(3, (s64)(s32)0x4f800000);
SET64(2, (s64)(s32)0x40c90000);
c->f[0].u = RW(3);
SET64(2, RD(2) | 0xfdb);
c->f[2].f = fpu_div(F(1), F(0));
SET32(4, RW(29) + 32);
c->f[0].u = RW(0);
c->f[1].u = RW(2);
c->facc = fpu(F(0) + F(0));
c->f[0].f = fpu(c->facc + F(1) * F(2));
SET64(31, 0x1fd75c); wr32(c, (RW(29) + 172), c->f[0].u); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fd768); SET32(5, RW(29) + 172); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fd774); SET32(4, RW(29) + 96); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fd788); SET32(5, RW(29) + 96); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_001FD7A0(Ctx *c) { /* func_001FD7A0 */
ENTER(0x1fd7a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd7c0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fd7c8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD7E0(Ctx *c) { /* func_001FD7E0 */
ENTER(0x1fd7e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd7f4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fd800); SET32(5, RW(0) + 27); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd80c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD820(Ctx *c) { /* func_001FD820 */
ENTER(0x1fd820);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd840); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd850); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(31, 0x1fd858); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD870(Ctx *c) { /* func_001FD870 */
ENTER(0x1fd870);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd884); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 25);
SET32(4, RW(16) + 384);
SET64(31, 0x1fd894); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd8a0); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1984);
SET64(31, 0x1fd8ac); SET32(5, RW(0) + 26); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd8b8); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET64(31, 0x1fd8c0); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fd8cc); SET32(5, RW(28) + -31680); JP_F_0013AE00(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1fd8d8); SET64(5, RD(2) + RD(0)); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1792) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1808) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1824) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 1840) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_001FD910(Ctx *c) { /* func_001FD910 */
ENTER(0x1fd910);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd930); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd940); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1fd948); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD960(Ctx *c) { /* func_001FD960 */
ENTER(0x1fd960);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fd974); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fd980); SET32(5, RW(0) + 23); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd98c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fd998); SET32(5, RW(0) + 24); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fd9a4); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FD9C0(Ctx *c) { /* func_001FD9C0 */
ENTER(0x1fd9c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd9e0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1992)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fd9f0); SET32(4, RW(16) + 1984); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3592)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fda00); SET32(4, RW(16) + 3584); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 5000)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fda10); SET32(4, RW(16) + 4992); rt_call(c, t); }
SET64(31, 0x1fda18); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FDA30(Ctx *c) { /* func_001FDA30 */
ENTER(0x1fda30);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fda48); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(2, RW(0) + 21);
SET32(4, RW(16) + 384);
SET64(31, 0x1fda58); wr32(c, (RW(16) + 1896), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fda64); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 21);
SET32(4, RW(16) + 1984);
SET64(31, 0x1fda74); wr32(c, (RW(16) + 3496), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fda80); SET32(5, RW(16) + 1984); JP_F_001B6520(c);
SET32(4, RW(16) + 3584);
SET64(31, 0x1fda8c); SET32(5, RW(0) + 22); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fda98); SET32(5, RW(16) + 3584); JP_F_001B6520(c);
SET32(4, RW(16) + 4992);
SET64(31, 0x1fdaa4); SET32(5, RW(0) + 22); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fdab0); SET32(5, RW(16) + 4992); JP_F_001B6520(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 96);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1fdad0); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 80);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1fdaf4); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 384);
SET64(31, 0x1fdb08); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 64);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
c->f[14].u = c->f[12].u;
SET64(31, 0x1fdb28); c->f[15].u = c->f[13].u; JP_F_0013E810(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 48);
SET64(2, (s64)(s32)0xbf800000);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(0);
c->f[15].u = RW(2);
SET64(31, 0x1fdb4c); c->f[13].u = c->f[12].u; JP_F_0013E810(c);
SET64(6, RD(17) + RD(0));
SET64(7, RD(2) + RD(0));
SET32(4, RW(16) + 1984);
SET64(31, 0x1fdb60); SET32(5, RW(0) + 1); JP_F_00182120(c);
SET64(25, (s32)rd32(c, (RW(16) + 5000)));
SET64(2, (s64)(s32)0x41a00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fdb78); SET32(4, RW(16) + 4992); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_001FDB90(Ctx *c) { /* func_001FDB90 */
ENTER(0x1fdb90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdbb0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdbc0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdbd0); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdbe0); SET32(4, RW(16) + 4608); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 6024)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdbf0); SET32(4, RW(16) + 6016); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 7432)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdc00); SET32(4, RW(16) + 7424); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 8840)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdc10); SET32(4, RW(16) + 8832); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 10248)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdc20); SET32(4, RW(16) + 10240); rt_call(c, t); }
SET64(31, 0x1fdc28); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FDC40(Ctx *c) { /* func_001FDC40 */
ENTER(0x1fdc40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdc60); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdc70); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdc80); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdc90); SET32(4, RW(16) + 4608); rt_call(c, t); }
SET64(31, 0x1fdc98); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FDCB0(Ctx *c) { /* func_001FDCB0 */
ENTER(0x1fdcb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdcd0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdce0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdcf0); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdd00); SET32(4, RW(16) + 4608); rt_call(c, t); }
SET64(31, 0x1fdd08); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FDD20(Ctx *c) { /* func_001FDD20 */
ENTER(0x1fdd20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdd40); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdd50); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fdd60); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(31, 0x1fdd68); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FDD80(Ctx *c) { /* func_001FDD80 */
ENTER(0x1fdd80);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fdd94); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fdda0); SET32(5, RW(0) + 15); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fddac); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fddb8); SET32(5, RW(0) + 16); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fddc4); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1fddd0); SET32(5, RW(0) + 17); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fdddc); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET32(4, RW(16) + 4608);
SET64(31, 0x1fdde8); SET32(5, RW(0) + 18); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fddf4); SET32(5, RW(16) + 4608); JP_F_001B6520(c);
SET32(4, RW(16) + 6016);
SET64(31, 0x1fde00); SET32(5, RW(0) + 15); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fde0c); SET32(5, RW(16) + 6016); JP_F_001B6520(c);
SET32(4, RW(16) + 7424);
SET64(31, 0x1fde18); SET32(5, RW(0) + 16); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fde24); SET32(5, RW(16) + 7424); JP_F_001B6520(c);
SET32(4, RW(16) + 8832);
SET64(31, 0x1fde30); SET32(5, RW(0) + 17); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fde3c); SET32(5, RW(16) + 8832); JP_F_001B6520(c);
SET32(4, RW(16) + 10240);
SET64(31, 0x1fde48); SET32(5, RW(0) + 18); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fde54); SET32(5, RW(16) + 10240); JP_F_001B6520(c);
SET64(3, (s64)(s32)0x40000000);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 108), RW(2));
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 96), RW(3));
wr32(c, (RW(29) + 100), RW(3));
SET64(31, 0x1fde74); wr32(c, (RW(29) + 104), RW(3)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fde80); SET32(5, RW(29) + 96); JP_F_00181B20(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fde8c); SET32(4, RW(29) + 112); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fdea0); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 6024)));
SET32(4, RW(16) + 6016);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fdeb4); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET32(4, RW(16) + 1792);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fdec8); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 7432)));
SET32(4, RW(16) + 7424);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fdedc); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET32(4, RW(16) + 3200);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fdef0); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 8840)));
SET32(4, RW(16) + 8832);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fdf04); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET32(4, RW(16) + 4608);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fdf18); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 10248)));
SET32(4, RW(16) + 10240);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fdf2c); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 6024)));
SET64(2, (s64)(s32)0x41f00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fdf44); SET32(4, RW(16) + 6016); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 7432)));
SET64(2, (s64)(s32)0x41f00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fdf5c); SET32(4, RW(16) + 7424); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 8840)));
SET64(2, (s64)(s32)0x41f00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fdf74); SET32(4, RW(16) + 8832); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 10248)));
SET64(2, (s64)(s32)0x41f00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fdf8c); SET32(4, RW(16) + 10240); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_001FDFA0(Ctx *c) { /* func_001FDFA0 */
ENTER(0x1fdfa0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fdfb4); SET64(16, RD(4) + RD(0)); JP_F_001B6A00(c);
SET32(4, RW(16) + 576);
SET64(31, 0x1fdfc0); SET64(5, RD(0) | 0x8000); JP_F_00153560(c);
SET32(4, RW(16) + 1984);
SET64(31, 0x1fdfcc); SET64(5, RD(0) | 0x8001); JP_F_00153560(c);
SET32(4, RW(16) + 3392);
SET64(31, 0x1fdfd8); SET64(5, RD(0) | 0x8000); JP_F_00153560(c);
SET32(4, RW(16) + 4800);
SET64(31, 0x1fdfe4); SET64(5, RD(0) | 0x8001); JP_F_00153560(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FE000(Ctx *c) { /* func_001FE000 */
ENTER(0x1fe000);
SET32(29, RW(29) + -1088);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fe014); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fe020); SET32(5, RW(0) + 14); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe02c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET64(31, 0x1fe034); SET32(4, RW(29) + 352); JP_F_0013AEA0(c);
SET32(4, RW(29) + 352);
SET64(31, 0x1fe040); SET32(5, RW(28) + -31696); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fe04c); SET32(4, RW(29) + 1024); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET32(4, RW(16) + 384);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fe060); SET32(5, RW(29) + 1024); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 392)));
c->f[12].u = RW(0);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fe074); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(31, 0x1fe07c); SET32(4, RW(16) + 480); JP_F_001EC380(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fe088); SET32(5, RW(0) + 14); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe094); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET64(31, 0x1fe09c); SET32(4, RW(29) + 288); JP_F_0013AEA0(c);
SET32(4, RW(29) + 288);
SET64(31, 0x1fe0a8); SET32(5, RW(28) + -31692); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fe0b4); SET32(4, RW(29) + 816); JP_F_0013ADA0(c);
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0xbf800000);
wr32(c, (RW(29) + 880), RW(3));
SET32(4, RW(29) + 224);
wr32(c, (RW(29) + 884), RW(2));
wr32(c, (RW(29) + 888), RW(2));
SET64(31, 0x1fe0d4); wr32(c, (RW(29) + 892), RW(2)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 224);
SET64(31, 0x1fe0e0); SET32(5, RW(29) + 880); JP_F_00181B20(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fe0ec); SET32(4, RW(29) + 896); JP_F_0013ADA0(c);
SET32(4, RW(29) + 480);
SET32(5, RW(29) + 896);
SET64(31, 0x1fe0fc); SET32(6, RW(29) + 816); JP_F_002AEAE0(c);
SET64(31, 0x1fe104); SET32(4, RW(29) + 960); JP_F_002AF080(c);
rd128(c, (RW(29) + 480) & ~15u, &c->r[6]);
SET32(5, RW(29) + 960);
rd128(c, (RW(29) + 496) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 512) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 960) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 976) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 992) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 528) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 1008) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fe138); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(2, (s64)(s32)0x41700000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fe150); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(31, 0x1fe158); SET32(4, RW(16) + 1888); JP_F_001EC380(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1fe164); SET32(5, RW(0) + 14); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe170); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET64(31, 0x1fe178); SET32(4, RW(29) + 160); JP_F_0013AEA0(c);
SET32(4, RW(29) + 160);
SET64(31, 0x1fe184); SET32(5, RW(28) + -31688); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fe190); SET32(4, RW(29) + 752); JP_F_0013ADA0(c);
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET32(4, RW(16) + 3200);
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fe1a4); SET32(5, RW(29) + 752); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3208)));
SET64(2, (s64)(s32)0x41f00000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fe1bc); SET32(4, RW(16) + 3200); rt_call(c, t); }
SET64(31, 0x1fe1c4); SET32(4, RW(16) + 3296); JP_F_001EC380(c);
SET32(4, RW(16) + 4608);
SET64(31, 0x1fe1d0); SET32(5, RW(0) + 14); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe1dc); SET32(5, RW(16) + 4608); JP_F_001B6520(c);
SET64(31, 0x1fe1e4); SET32(4, RW(29) + 96); JP_F_0013AEA0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1fe1f0); SET32(5, RW(28) + -31684); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fe1fc); SET32(4, RW(29) + 544); JP_F_0013ADA0(c);
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0xbf800000);
wr32(c, (RW(29) + 608), RW(3));
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 612), RW(2));
wr32(c, (RW(29) + 616), RW(2));
SET64(31, 0x1fe21c); wr32(c, (RW(29) + 620), RW(2)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fe228); SET32(5, RW(29) + 608); JP_F_00181B20(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x1fe234); SET32(4, RW(29) + 624); JP_F_0013ADA0(c);
SET32(4, RW(29) + 416);
SET32(5, RW(29) + 624);
SET64(31, 0x1fe244); SET32(6, RW(29) + 544); JP_F_002AEAE0(c);
SET64(31, 0x1fe24c); SET32(4, RW(29) + 688); JP_F_002AF080(c);
rd128(c, (RW(29) + 416) & ~15u, &c->r[6]);
SET32(5, RW(29) + 688);
rd128(c, (RW(29) + 432) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 448) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 688) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 704) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 720) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 464) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 736) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET64(25, (s32)rd32(c, (RW(25) + 336)));
{ u32 t = RW(25); SET64(31, 0x1fe280); SET32(4, RW(16) + 4608); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 4616)));
SET64(2, (s64)(s32)0x42340000);
c->f[12].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 328)));
{ u32 t = RW(25); SET64(31, 0x1fe298); SET32(4, RW(16) + 4608); rt_call(c, t); }
SET64(31, 0x1fe2a0); SET32(4, RW(16) + 4704); JP_F_001EC380(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 1088); return;
}

void JP_F_001FE2B0(Ctx *c) { /* func_001FE2B0 */
ENTER(0x1fe2b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fe2c4); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fe2d0); SET32(5, RW(0) + 10); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe2dc); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fe2e8); SET32(5, RW(0) + 11); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe2f4); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1fe300); SET32(5, RW(0) + 12); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe30c); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET32(4, RW(16) + 4608);
SET64(31, 0x1fe318); SET32(5, RW(0) + 13); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe324); SET32(5, RW(16) + 4608); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FE340(Ctx *c) { /* func_001FE340 */
ENTER(0x1fe340);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fe354); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fe360); SET32(5, RW(0) + 7); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe36c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fe378); SET32(5, RW(0) + 8); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe384); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(4, RW(16) + 3200);
SET64(31, 0x1fe390); SET32(5, RW(0) + 9); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe39c); SET32(5, RW(16) + 3200); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FE3B0(Ctx *c) { /* func_001FE3B0 */
ENTER(0x1fe3b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fe3d0); SET32(4, RW(16) + 384); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 1800)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fe3e0); SET32(4, RW(16) + 1792); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 3400)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x1fe3f0); SET32(4, RW(16) + 3392); rt_call(c, t); }
SET64(31, 0x1fe3f8); SET64(4, RD(16) + RD(0)); JP_F_001B6B00(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_001FE410(Ctx *c) { /* func_001FE410 */
ENTER(0x1fe410);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x1fe424); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
SET32(4, RW(16) + 384);
SET64(31, 0x1fe430); SET32(5, RW(0) + 4); JP_F_001ECAD0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe43c); SET32(5, RW(16) + 384); JP_F_001B6520(c);
SET32(2, RW(0) + 5);
SET32(4, RW(16) + 1792);
SET64(31, 0x1fe44c); wr32(c, (RW(16) + 3304), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe458); SET32(5, RW(16) + 1792); JP_F_001B6520(c);
SET32(2, RW(0) + 6);
SET32(4, RW(16) + 3392);
SET64(31, 0x1fe468); wr32(c, (RW(16) + 4904), RW(2)); JP_F_001EF0E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x1fe474); SET32(5, RW(16) + 3392); JP_F_001B6520(c);
SET64(31, 0x1fe47c); SET32(4, RW(29) + 32); JP_F_0013AEA0(c);
SET32(4, RW(29) + 32);
SET64(31, 0x1fe488); SET32(5, RW(28) + -31700); JP_F_0013AE00(c);
SET32(4, RW(29) + 96);
SET64(31, 0x1fe494); SET64(5, RD(2) + RD(0)); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 4800) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 4816) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 4832) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 4848) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

