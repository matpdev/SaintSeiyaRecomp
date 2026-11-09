#include "r5900.h"
#include "functab.h"

void JP_F_0010FA00(Ctx *c) { /* func_0010FA00 */
ENTER(0x10fa00);
SET32(3, RW(0) + 118);
rt_syscall(c, 0x10fa04);
 return;
}

void JP_F_0010FA10(Ctx *c) { /* func_0010FA10 */
ENTER(0x10fa10);
SET32(3, RW(0) + -118);
rt_syscall(c, 0x10fa14);
 return;
}

void JP_F_0010FA20(Ctx *c) { /* func_0010FA20 */
ENTER(0x10fa20);
SET32(3, RW(0) + 119);
rt_syscall(c, 0x10fa24);
 return;
}

void JP_F_0010FA30(Ctx *c) { /* func_0010FA30 */
ENTER(0x10fa30);
SET32(3, RW(0) + -119);
rt_syscall(c, 0x10fa34);
 return;
}

void JP_F_0010FA40(Ctx *c) { /* func_0010FA40 */
ENTER(0x10fa40);
SET32(3, RW(0) + 120);
rt_syscall(c, 0x10fa44);
 return;
}

void JP_F_0010FA50(Ctx *c) { /* func_0010FA50 */
ENTER(0x10fa50);
SET32(3, RW(0) + -120);
rt_syscall(c, 0x10fa54);
 return;
}

void JP_F_0010FA60(Ctx *c) { /* func_0010FA60 */
ENTER(0x10fa60);
SET32(3, RW(0) + 121);
rt_syscall(c, 0x10fa64);
 return;
}

void JP_F_0010FA70(Ctx *c) { /* func_0010FA70 */
ENTER(0x10fa70);
SET32(3, RW(0) + 122);
rt_syscall(c, 0x10fa74);
 return;
}

void JP_F_0010FA80(Ctx *c) { /* func_0010FA80 */
ENTER(0x10fa80);
SET32(3, RW(0) + 123);
rt_syscall(c, 0x10fa84);
 return;
}

void JP_F_0010FA90(Ctx *c) { /* func_0010FA90 */
ENTER(0x10fa90);
SET32(3, RW(0) + 124);
rt_syscall(c, 0x10fa94);
 return;
}

void JP_F_0010FAA0(Ctx *c) { /* func_0010FAA0 */
ENTER(0x10faa0);
SET32(3, RW(0) + 125);
rt_syscall(c, 0x10faa4);
 return;
}

void JP_F_0010FAB0(Ctx *c) { /* func_0010FAB0 */
ENTER(0x10fab0);
SET32(3, RW(0) + 126);
rt_syscall(c, 0x10fab4);
 return;
}

void JP_F_0010FAC0(Ctx *c) { /* func_0010FAC0 */
ENTER(0x10fac0);
SET32(3, RW(0) + 127);
rt_syscall(c, 0x10fac4);
 return;
}

void JP_F_0010FAD0(Ctx *c) { /* func_0010FAD0 */
ENTER(0x10fad0);
SET32(3, RW(0) + 130);
rt_syscall(c, 0x10fad4);
 return;
}

void JP_F_0010FAE0(Ctx *c) { /* func_0010FAE0 */
ENTER(0x10fae0);
SET64(2, (s64)(s32)0x3e0000);
wr32(c, (RW(2) + -12464), RW(0)); return;
}

void JP_F_0010FAF0(Ctx *c) { /* func_0010FAF0 */
ENTER(0x10faf0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x10fb00);  JP_F_001186A0(c);
SET64(3, (s64)(s32)0x10000000);
SET32(4, RW(0) + 4);
SET64(3, RD(3) | 0xf000);
wr32(c, (RW(3) + 0), RW(4));
{ int t = RD(2) == RD(0); SET64(3, (s64)(s32)0x10000000); if (t) goto L_0010FB28; }
SET64(31, 0x10fb24);  JP_F_001186F8(c);
SET64(3, (s64)(s32)0x10000000);
L_0010FB28:;
SET64(3, RD(3) | 0xf000);
L_0010FB30:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(2) & 0x4);
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_0010FB30; } }
SET64(31, 0x10fb54);  JP_F_001186A0(c);
SET64(3, (s64)(s32)0x10000000);
SET32(4, RW(0) + 4);
SET64(3, RD(3) | 0xf000);
wr32(c, (RW(3) + 0), RW(4));
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0010FB78; }
SET32(29, RW(29) + 16); { JP_F_001186F8(c); return; }
L_0010FB78:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0010FB80(Ctx *c) { /* func_0010FB80 */
ENTER(0x10fb80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
SET64(4, RD(29) + RD(0));
wr32(c, (RW(29) + 0), RW(0));
SET64(31, 0x10fb98); SET64(5, RD(29) | 0x8); JP_F_0010F9D0(c);
SET64(31, 0x10fba0);  JP_F_001186A0(c);
SET64(3, (s64)(s32)0x10000000);
SET32(4, RW(0) + 4);
SET64(3, RD(3) | 0xf000);
wr32(c, (RW(3) + 0), RW(4));
{ int t = RD(2) == RD(0); SET64(3, (s64)(s32)0x10000000); if (t) goto L_0010FBC8; }
SET64(31, 0x10fbc4);  JP_F_001186F8(c);
SET64(3, (s64)(s32)0x10000000);
L_0010FBC8:;
SET64(3, RD(3) | 0xf000);
L_0010FBD0:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(2) & 0x4);
{ int t = RD(2) != RD(0);  if (t) goto L_0010FBEC; }
SET64(2, (s32)rd32(c, (RW(29) + 0)));
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_0010FBD0; } }
L_0010FBEC:;
SET64(31, 0x10fbf4);  JP_F_001186A0(c);
SET32(3, RW(0) + 4);
SET64(1, (s64)(s32)0x10010000);
wr32(c, (RW(1) + -4096), RW(3));
{ int t = RD(2) == RD(0);  if (t) goto L_0010FC14; }
SET64(31, 0x10fc14);  JP_F_001186F8(c);
L_0010FC14:;
SET64(2, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0010FC28(Ctx *c) { /* func_0010FC28 */
ENTER(0x10fc28);
SET32(29, RW(29) + -64);
SET32(4, RW(4) + -1);
wr64(c, (RW(29) + 32), RD(18));
SET64(4, RD(4) < (u64)(s64)2);
wr64(c, (RW(29) + 16), RD(17));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(17, RD(5) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(16)); if (t) goto L_0010FC88; }
SET64(16, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(16) + -12464)));
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0010FC78; }
SET64(31, 0x10fc68);  JP_F_00110E70(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0010FC88; }
wr32(c, (RW(16) + -12464), RW(2));
SET64(4, RD(17) + RD(0));
L_0010FC78:;
SET64(31, 0x10fc80); SET64(5, RD(18) + RD(0)); JP_F_00110C28(c);
SET64(31, rd64(c, (RW(29) + 48))); goto L_0010FC90;
L_0010FC88:;
SET32(2, RW(0) + -1);
SET64(31, rd64(c, (RW(29) + 48)));
L_0010FC90:;
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0010FCA8(Ctx *c) { /* func_0010FCA8 */
ENTER(0x10fca8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(17, RD(5) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(16)); if (t) goto L_0010FD00; }
SET64(16, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(16) + -12464)));
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0010FCF0; }
SET64(31, 0x10fce0);  JP_F_00110E70(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0010FD00; }
wr32(c, (RW(16) + -12464), RW(2));
SET64(4, RD(17) + RD(0));
L_0010FCF0:;
SET64(31, 0x10fcf8); SET64(5, RD(18) + RD(0)); JP_F_00110DA0(c);
SET64(31, rd64(c, (RW(29) + 48))); goto L_0010FD08;
L_0010FD00:;
SET32(2, RW(0) + -1);
SET64(31, rd64(c, (RW(29) + 48)));
L_0010FD08:;
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0010FD20(Ctx *c) { /* func_0010FD20 */
ENTER(0x10fd20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x10fd30);  JP_F_001254D0(c);
SET32(3, RW(0) + 5);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + 0), RW(3));
SET32(2, RW(0) + -1);
SET32(29, RW(29) + 16); return;
}

void JP_F_0010FD48(Ctx *c) { /* func_0010FD48 */
ENTER(0x10fd48);
SET32(2, RW(0) + -1); return;
}

void JP_F_0010FD50(Ctx *c) { /* func_0010FD50 */
ENTER(0x10fd50);
SET32(2, RW(0) + -1); return;
}

void JP_F_0010FD58(Ctx *c) { /* func_0010FD58 */
ENTER(0x10fd58);
SET32(2, RW(0) + -1); return;
}

void JP_F_0010FD60(Ctx *c) { /* func_0010FD60 */
ENTER(0x10fd60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, (s32)rt_mfc0(c, 12));
SET64(2, (s64)(s32)0x10000);
SET64(17, RD(17) & RD(2));
{ int t = RD(17) == RD(0); SET64(18, (s64)(s32)0x3e0000); if (t) goto L_0010FDAC; }
L_0010FD88:;
rt_di(c);
SET64(2, (s32)rt_mfc0(c, 12));
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(2) & RD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0010FD88; } }
SET64(2, (s32)rd32(c, (RW(18) + -12460))); goto L_0010FDB0;
L_0010FDAC:;
SET64(2, (s32)rd32(c, (RW(18) + -12460)));
L_0010FDB0:;
SET64(31, 0x10fdb8); SET32(16, RW(2) + RW(4)); JP_F_0010F640(c);
SET64(2, RD(2) < RD(16));
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(18) + -12460))); if (t) goto L_0010FDE8; }
SET64(31, 0x10fdcc);  JP_F_001254D0(c);
SET32(3, RW(0) + 12);
{ int t = RD(17) == RD(0); wr32(c, (RW(2) + 0), RW(3)); if (t) goto L_0010FDDC; }
rt_ei(c);
L_0010FDDC:;
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0xffff); goto L_0010FDF4;
L_0010FDE8:;
{ int t = RD(17) == RD(0); wr32(c, (RW(18) + -12460), RW(16)); if (t) goto L_0010FDF4; }
rt_ei(c);
L_0010FDF4:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0010FE10(Ctx *c) { /* func_0010FE10 */
ENTER(0x10fe10);
SET32(2, RW(0) + 1); return;
}

void JP_F_0010FE18(Ctx *c) { /* func_0010FE18 */
ENTER(0x10fe18);
SET32(2, RW(0) + 8192);
wr64(c, (RW(5) + 72), RD(0));
wr32(c, (RW(5) + 4), RW(2));
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0010FE30(Ctx *c) { /* func_0010FE30 */
ENTER(0x10fe30);
SET32(2, RW(0) + 1); return;
}

void JP_F_0010FE38(Ctx *c) { /* func_0010FE38 */
ENTER(0x10fe38);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
{ int t = RD(4) != RD(2); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0010FE50; }
SET64(31, 0x10fe50); SET64(4, RD(5) + RD(0)); JP_F_00118D48(c);
L_0010FE50:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0010FE60(Ctx *c) { /* func_0010FE60 */
ENTER(0x10fe60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x10fe70);  JP_F_001254D0(c);
SET32(3, RW(0) + 5);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + 0), RW(3));
SET32(2, RW(0) + -1);
SET32(29, RW(29) + 16); return;
}

void JP_F_0010FE88(Ctx *c) { /* func_0010FE88 */
ENTER(0x10fe88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x10fe98);  JP_F_001254D0(c);
SET32(3, RW(0) + 5);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + 0), RW(3));
SET32(2, RW(0) + -1);
SET32(29, RW(29) + 16); return;
}

void JP_F_0010FEB0(Ctx *c) { /* func_0010FEB0 */
ENTER(0x10feb0);
SET64(7, (s64)(s32)0xffff0000);
SET64(6, RD(0) + RD(0));
SET64(7, RD(7) | 0xf000);
L_0010FEC0:;
SET64(2, (s32)rt_mfc0(c, 28));
SET64(2, RD(2) & RD(7));
SET32(2, RW(2) + RW(6));
SET64(3, RD(5) < RD(2));
SET64(2, RD(2) < RD(4));
{ int t = RD(2) != RD(0);  if (t) goto L_0010FEFC; }
{ int t = RD(3) != RD(0);  if (t) goto L_0010FEFC; }
L_0010FEFC:;
SET64(2, (s32)rt_mfc0(c, 28));
SET64(2, RD(2) & RD(7));
SET32(2, RW(2) + RW(6));
SET64(3, RD(5) < RD(2));
SET64(2, RD(2) < RD(4));
{ int t = RD(2) != RD(0);  if (t) goto L_0010FF38; }
{ int t = RD(3) != RD(0);  if (t) goto L_0010FF38; }
L_0010FF38:;
SET32(6, RW(6) + 64);
SET64(2, RSD(6) < (s64)4096);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0010FEC0; } }
 return;
}

void JP_F_0010FF58(Ctx *c) { /* func_0010FF58 */
ENTER(0x10ff58);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s32)rt_mfc0(c, 12));
SET64(2, (s64)(s32)0x10000);
SET64(16, RD(16) & RD(2));
{ int t = RD(16) == RD(0);  if (t) goto L_0010FF90; }
SET64(31, 0x10ff90);  JP_F_001186A0(c);
L_0010FF90:;
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) | 0xffc0);
SET64(5, RD(17) & RD(4));
SET64(31, 0x10ffa4); SET64(4, RD(18) & RD(4)); JP_F_0010FEB0(c);
{ int t = RD(16) == RD(0); SET64(31, rd64(c, (RW(29) + 48))); if (t) goto L_0010FFC0; }
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); { JP_F_001186F8(c); return; }
L_0010FFC0:;
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0010FFD8(Ctx *c) { /* func_0010FFD8 */
ENTER(0x10ffd8);
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0xffc0);
SET64(5, RD(5) & RD(2));
SET64(4, RD(4) & RD(2)); { JP_F_0010FEB0(c); return; }
}

static void JP_B_0010FFF0(Ctx *c, u32 entry) { /* func_0010FFF0 */
ENTER(entry);
switch (entry) { case 0x110004: goto L_00110004; case 0x11000c: goto L_0011000C; case 0x110010: goto L_00110010; case 0x11003c: goto L_0011003C; }
SET64(7, (s64)(s32)0xffff0000);
SET64(6, RD(0) + RD(0));
SET64(7, RD(7) | 0xf000);
L_00110000:;
L_00110004:;
L_0011000C:;
SET64(2, (s32)rt_mfc0(c, 28));
L_00110010:;
SET64(2, RD(2) & RD(7));
SET32(2, RW(2) + RW(6));
SET64(3, RD(5) < RD(2));
SET64(2, RD(2) < RD(4));
{ int t = RD(2) != RD(0);  if (t) goto L_0011003C; }
{ int t = RD(3) != RD(0);  if (t) goto L_0011003C; }
L_0011003C:;
SET64(2, (s32)rt_mfc0(c, 28));
SET64(2, RD(2) & RD(7));
SET32(2, RW(2) + RW(6));
SET64(3, RD(5) < RD(2));
SET64(2, RD(2) < RD(4));
{ int t = RD(2) != RD(0);  if (t) goto L_00110078; }
{ int t = RD(3) != RD(0);  if (t) goto L_00110078; }
L_00110078:;
SET32(6, RW(6) + 64);
SET64(2, RSD(6) < (s64)4096);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00110000; } }
 return;
}
void JP_F_0010FFF0(Ctx *c) { JP_B_0010FFF0(c, 0x10fff0); }
void JP_F_00110004(Ctx *c) { JP_B_0010FFF0(c, 0x110004); }
void JP_F_0011000C(Ctx *c) { JP_B_0010FFF0(c, 0x11000c); }
void JP_F_00110010(Ctx *c) { JP_B_0010FFF0(c, 0x110010); }
void JP_F_0011003C(Ctx *c) { JP_B_0010FFF0(c, 0x11003c); }

void JP_F_00110098(Ctx *c) { /* func_00110098 */
ENTER(0x110098);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s32)rt_mfc0(c, 12));
SET64(2, (s64)(s32)0x10000);
SET64(16, RD(16) & RD(2));
{ int t = RD(16) == RD(0);  if (t) goto L_001100D0; }
SET64(31, 0x1100d0);  JP_F_001186A0(c);
L_001100D0:;
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) | 0xffc0);
SET64(5, RD(17) & RD(4));
SET64(31, 0x1100e4); SET64(4, RD(18) & RD(4)); JP_F_0010FFF0(c);
{ int t = RD(16) == RD(0); SET64(31, rd64(c, (RW(29) + 48))); if (t) goto L_00110100; }
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); { JP_F_001186F8(c); return; }
L_00110100:;
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00110118(Ctx *c) { /* func_00110118 */
ENTER(0x110118);
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0xffc0);
SET64(5, RD(5) & RD(2));
SET64(4, RD(4) & RD(2)); { JP_F_0010FFF0(c); return; }
}

void JP_F_00110130(Ctx *c) { /* func_00110130 */
ENTER(0x110130);
SET64(2, (s32)rt_mfc0(c, 12));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) & 0x1); return;
}

void JP_F_00110140(Ctx *c) { /* func_00110140 */
ENTER(0x110140);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s32)rt_mfc0(c, 12));
SET64(2, (s64)(s32)0x10000);
SET64(16, RD(16) & RD(2));
{ int t = RD(16) == RD(0);  if (t) goto L_00110170; }
SET64(31, 0x110170);  JP_F_001186A0(c);
L_00110170:;
SET64(31, 0x110178); SET64(4, RD(17) + RD(0)); JP_F_0010F3B0(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_00110194; }
SET64(31, 0x110190);  JP_F_001186F8(c);
SET64(2, RD(17) + RD(0));
L_00110194:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_001101A8(Ctx *c) { /* func_001101A8 */
ENTER(0x1101a8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s32)rt_mfc0(c, 12));
SET64(2, (s64)(s32)0x10000);
SET64(16, RD(16) & RD(2));
{ int t = RD(16) == RD(0);  if (t) goto L_001101D8; }
SET64(31, 0x1101d8);  JP_F_001186A0(c);
L_001101D8:;
SET64(31, 0x1101e0); SET64(4, RD(17) + RD(0)); JP_F_0010F3A0(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_001101FC; }
SET64(31, 0x1101f8);  JP_F_001186F8(c);
SET64(2, RD(17) + RD(0));
L_001101FC:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00110210(Ctx *c) { /* func_00110210 */
ENTER(0x110210);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s32)rt_mfc0(c, 12));
SET64(2, (s64)(s32)0x10000);
SET64(16, RD(16) & RD(2));
{ int t = RD(16) == RD(0);  if (t) goto L_00110240; }
SET64(31, 0x110240);  JP_F_001186A0(c);
L_00110240:;
SET64(31, 0x110248); SET64(4, RD(17) + RD(0)); JP_F_0010F3D0(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_00110264; }
SET64(31, 0x110260);  JP_F_001186F8(c);
SET64(2, RD(17) + RD(0));
L_00110264:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00110278(Ctx *c) { /* func_00110278 */
ENTER(0x110278);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s32)rt_mfc0(c, 12));
SET64(2, (s64)(s32)0x10000);
SET64(16, RD(16) & RD(2));
{ int t = RD(16) == RD(0);  if (t) goto L_001102A8; }
SET64(31, 0x1102a8);  JP_F_001186A0(c);
L_001102A8:;
SET64(31, 0x1102b0); SET64(4, RD(17) + RD(0)); JP_F_0010F3C0(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_001102CC; }
SET64(31, 0x1102c8);  JP_F_001186F8(c);
SET64(2, RD(17) + RD(0));
L_001102CC:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_001102E0(Ctx *c) { /* func_001102E0 */
ENTER(0x1102e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1102f0);  JP_F_0010F400(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00110300(Ctx *c) { /* func_00110300 */
ENTER(0x110300);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x110310);  JP_F_0010F410(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00110320(Ctx *c) { /* func_00110320 */
ENTER(0x110320);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x110330);  JP_F_0010F420(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00110340(Ctx *c) { /* func_00110340 */
ENTER(0x110340);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x110350);  JP_F_0010F430(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00110360(Ctx *c) { /* func_00110360 */
ENTER(0x110360);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 16), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 96), RD(22));
wr64(c, (RW(29) + 80), RD(21));
SET64(22, (s64)(s32)0x500000);
wr64(c, (RW(29) + 64), RD(20));
SET64(21, (s64)(s32)0x420000);
wr64(c, (RW(29) + 48), RD(19));
SET32(20, RW(0) + 1);
wr64(c, (RW(29) + 32), RD(18));
SET32(19, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET32(18, RW(17) + 8);
wr64(c, (RW(29) + 112), RD(31));
SET32(16, RW(17) + 9);
L_001103A0:;
SET64(31, 0x1103a8); SET64(4, (s32)rd32(c, (RW(22) + 31360))); JP_F_0010F6A0(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(3, RD(3) & 0x1ff);
SET32(4, RW(3) + 1);
SET32(3, RW(3) << 1);
wr32(c, (RW(17) + 0), RW(4));
SET32(2, RW(18) + RW(3));
SET32(6, RW(16) + RW(3));
SET64(2, rd8(c, (RW(2) + 0)));
{ int t = RD(2) == RD(20); SET64(5, RSD(2) < (s64)2); if (t) goto L_00110408; }
{ int t = RD(5) == RD(0); SET32(4, RW(21) + -12896); if (t) goto L_001103E8; }
{ int t = RD(2) == RD(0); SET64(3, RD(6) + RD(0)); if (t) goto L_001103F8; }
 goto L_00110428;
L_001103E8:;
{ int t = RD(2) == RD(19); SET32(3, RW(16) + RW(3)); if (t) goto L_00110418; }
 goto L_00110428;
L_001103F8:;
SET64(31, 0x110400); SET64(4, rd8(c, (RW(3) + 0))); JP_F_0010F590(c);
 { POLL(); goto L_001103A0; }
L_00110408:;
SET64(31, 0x110410); SET64(4, rd8(c, (RW(6) + 0))); JP_F_0010F510(c);
 { POLL(); goto L_001103A0; }
L_00110418:;
SET64(31, 0x110420); SET64(4, rd8(c, (RW(3) + 0))); JP_F_0010F5D0(c);
 { POLL(); goto L_001103A0; }
L_00110428:;
SET64(31, 0x110430);  JP_F_00111850(c);
 { POLL(); goto L_001103A0; }
}

void JP_F_00110438(Ctx *c) { /* func_00110438 */
ENTER(0x110438);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 80), RD(16));
SET64(16, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 112), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + -12456)));
{ int t = RSD(2) > 0; wr64(c, (RW(29) + 96), RD(17)); if (t) goto L_001104C0; }
SET32(2, RW(0) + 255);
wr32(c, (RW(29) + 56), RW(0));
wr32(c, (RW(29) + 52), RW(2));
SET64(31, 0x110468); SET32(4, RW(29) + 48); JP_F_0010F660(c);
SET64(17, (s64)(s32)0x500000);
{ int t = RSD(2) < 0; wr32(c, (RW(17) + 31360), RW(2)); if (t) goto L_001104C0; }
SET64(2, (s64)(s32)0x110000);
SET64(3, (s64)(s32)0x500000);
SET64(5, (s64)(s32)0x510000);
SET32(2, RW(2) + 864);
SET32(3, RW(3) + 30336);
SET32(5, RW(5) + -6800);
SET32(6, RW(0) + 1024);
wr32(c, (RW(29) + 4), RW(2));
wr32(c, (RW(29) + 8), RW(3));
SET64(4, RD(29) + RD(0));
wr32(c, (RW(29) + 12), RW(6));
wr32(c, (RW(29) + 16), RW(5));
SET64(31, 0x1104ac); wr32(c, (RW(29) + 20), RW(0)); JP_F_0010F460(c);
SET64(4, RD(2) + RD(0));
{ int t = RSD(4) >= 0; wr32(c, (RW(16) + -12456), RW(4)); if (t) goto L_001104C8; }
SET64(31, 0x1104c0); SET64(4, (s32)rd32(c, (RW(17) + 31360))); JP_F_0010F670(c);
L_001104C0:;
SET32(2, RW(0) + -1); goto L_001104F8;
L_001104C8:;
SET64(2, (s64)(s32)0x500000);
SET32(3, RW(2) + 31368);
wr32(c, (RW(2) + 31368), RW(0));
SET64(5, RD(3) + RD(0));
SET64(31, 0x1104e0); wr32(c, (RW(3) + 4), RW(0)); JP_F_0010F480(c);
SET64(31, 0x1104e8);  JP_F_0010F550(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x1104f4); SET32(5, RW(0) + 1); JP_F_0010F4F0(c);
SET64(2, (s32)rd32(c, (RW(16) + -12456)));
L_001104F8:;
SET64(31, rd64(c, (RW(29) + 112)));
SET64(17, rd64(c, (RW(29) + 96)));
SET64(16, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 128); return;
}

void JP_F_00110510(Ctx *c) { /* func_00110510 */
ENTER(0x110510);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(0) + -47);
rt_syscall(c, 0x110520);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(4); SET64(2, RD(16) < (u64)(s64)256); if (t) goto L_00110540; }
SET64(31, 0x110538);  JP_F_0010F5A0(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_00110598;
L_00110540:;
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00110554; }
SET64(3, (s32)rd32(c, (RW(2) + -12456)));
{ int t = RD(3) != RD(0); SET64(3, (s64)(s32)0x500000); if (t) goto L_0011055C; }
L_00110554:;
SET32(2, RW(0) + -1); goto L_00110594;
L_0011055C:;
SET64(5, (s64)(s32)0x500000);
SET32(3, RW(3) + 31368);
SET64(4, (s32)rd32(c, (RW(5) + 31360)));
SET64(2, (s32)rd32(c, (RW(3) + 4)));
SET64(2, RD(2) & 0x1ff);
SET32(6, RW(2) << 1);
SET32(2, RW(2) + 1);
SET32(5, RW(3) + RW(6));
wr32(c, (RW(3) + 4), RW(2));
SET64(3, RD(5) + RD(0));
wr8(c, (RW(5) + 8), (u8)RW(0));
SET64(31, 0x110590); wr8(c, (RW(3) + 9), (u8)RW(16)); JP_F_0010F690(c);
SET64(2, RD(16) + RD(0));
L_00110594:;
SET64(31, rd64(c, (RW(29) + 16)));
L_00110598:;
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001105A8(Ctx *c) { /* func_001105A8 */
ENTER(0x1105a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET64(2, RD(16) < (u64)(s64)128);
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_001105D0; }
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12456)));
{ int t = RD(3) != RD(0); SET64(3, (s64)(s32)0x500000); if (t) goto L_001105D8; }
L_001105D0:;
SET32(2, RW(0) + -1); goto L_00110614;
L_001105D8:;
SET64(5, (s64)(s32)0x500000);
SET32(3, RW(3) + 31368);
SET64(4, (s32)rd32(c, (RW(5) + 31360)));
SET64(2, (s32)rd32(c, (RW(3) + 4)));
SET32(7, RW(0) + 1);
SET64(2, RD(2) & 0x1ff);
SET32(6, RW(2) << 1);
SET32(2, RW(2) + 1);
SET32(5, RW(3) + RW(6));
wr32(c, (RW(3) + 4), RW(2));
wr8(c, (RW(5) + 8), (u8)RW(7));
SET64(3, RD(5) + RD(0));
SET64(31, 0x110610); wr8(c, (RW(3) + 9), (u8)RW(16)); JP_F_0010F690(c);
SET64(2, RD(16) + RD(0));
L_00110614:;
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00110628(Ctx *c) { /* func_00110628 */
ENTER(0x110628);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(0) + -47);
rt_syscall(c, 0x110638);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(4); SET64(2, RD(16) < (u64)(s64)256); if (t) goto L_00110658; }
SET64(31, 0x110650);  JP_F_0010F5E0(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_001106B4;
L_00110658:;
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_0011066C; }
SET64(3, (s32)rd32(c, (RW(2) + -12456)));
{ int t = RD(3) != RD(0); SET64(3, (s64)(s32)0x500000); if (t) goto L_00110674; }
L_0011066C:;
SET32(2, RW(0) + -1); goto L_001106B0;
L_00110674:;
SET64(5, (s64)(s32)0x500000);
SET32(3, RW(3) + 31368);
SET64(4, (s32)rd32(c, (RW(5) + 31360)));
SET64(2, (s32)rd32(c, (RW(3) + 4)));
SET32(7, RW(0) + 2);
SET64(2, RD(2) & 0x1ff);
SET32(6, RW(2) << 1);
SET32(2, RW(2) + 1);
SET32(5, RW(3) + RW(6));
wr32(c, (RW(3) + 4), RW(2));
wr8(c, (RW(5) + 8), (u8)RW(7));
SET64(3, RD(5) + RD(0));
SET64(31, 0x1106ac); wr8(c, (RW(3) + 9), (u8)RW(16)); JP_F_0010F690(c);
SET64(2, RD(16) + RD(0));
L_001106B0:;
SET64(31, rd64(c, (RW(29) + 16)));
L_001106B4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001106C0(Ctx *c) { /* func_001106C0 */
ENTER(0x1106c0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(17));
wr64(c, (RW(29) + 64), RD(31));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET64(2, (s32)rt_mfc0(c, 12));
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(2) & RD(3));
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x420000); goto L_001106F4; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8008); goto L_00110774;
L_001106F4:;
SET32(3, RW(0) + 1);
SET32(2, RW(2) + -12856);
wr32(c, (RW(29) + 4), RW(3));
wr32(c, (RW(29) + 20), RW(2));
SET64(4, RD(29) + RD(0));
SET64(31, 0x110710); wr32(c, (RW(29) + 8), RW(0)); JP_F_0010F660(c);
SET64(16, RD(2) + RD(0));
{ int t = RSD(16) >= 0; SET64(5, RD(17) + RD(0)); if (t) goto L_00110728; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8003); goto L_00110774;
L_00110728:;
SET64(31, 0x110730); SET64(4, RD(0) + RD(0)); JP_F_0011A168(c);
SET64(5, (s64)(s32)0x110000);
SET64(4, RD(2) + RD(0));
SET32(5, RW(5) + 1928);
SET64(31, 0x110744); SET64(6, RD(16) + RD(0)); JP_F_0011A318(c);
SET64(17, RD(2) + RD(0));
{ int t = RSD(17) >= 0;  if (t) goto L_00110760; }
SET64(31, 0x110758); SET64(4, RD(16) + RD(0)); JP_F_0010F670(c);
SET64(2, RD(17) + RD(0)); goto L_00110774;
L_00110760:;
SET64(31, 0x110768); SET64(4, RD(16) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x110770); SET64(4, RD(16) + RD(0)); JP_F_0010F670(c);
SET64(2, RD(0) + RD(0));
L_00110774:;
SET64(31, rd64(c, (RW(29) + 64)));
SET64(17, rd64(c, (RW(29) + 48)));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00110788(Ctx *c) { /* func_00110788 */
ENTER(0x110788);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x110798); SET64(4, RD(7) + RD(0)); JP_F_0010F690(c);
rt_ei(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_001107B0(Ctx *c) { /* func_001107B0 */
ENTER(0x1107b0);
SET64(2, (s64)(s32)0x500000);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x20000000);
SET32(2, RW(2) + 32400);
SET64(4, RD(4) & 0xffff);
SET64(2, RD(2) | RD(3));
wr32(c, (RW(29) + 4), RW(5));
wr32(c, (RW(29) + 0), RW(4));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(4, RW(0) + 1);
wr32(c, (RW(29) + 8), RW(6));
SET64(31, 0x1107e8); wr32(c, (RW(29) + 12), RW(2)); JP_F_0010FA90(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001107F8(Ctx *c) { /* func_001107F8 */
ENTER(0x1107f8);
SET32(29, RW(29) + -32);
wr32(c, (RW(29) + 0), RW(4));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x110810); SET32(4, RW(0) + 2); JP_F_0010FA90(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00110820(Ctx *c) { /* func_00110820 */
ENTER(0x110820);
SET32(5, RW(5) << 24);
SET32(29, RW(29) + -32);
SET32(5, RSW(5) >> 24);
wr32(c, (RW(29) + 0), RW(4));
wr32(c, (RW(29) + 4), RW(5));
SET32(4, RW(0) + 3);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x110844); SET64(5, RD(29) + RD(0)); JP_F_0010FA90(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00110850(Ctx *c) { /* func_00110850 */
ENTER(0x110850);
SET32(29, RW(29) + -32);
wr32(c, (RW(29) + 0), RW(4));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x110868); SET32(4, RW(0) + 4); JP_F_0010FA90(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00110878(Ctx *c) { /* func_00110878 */
ENTER(0x110878);
SET32(29, RW(29) + -48);
SET64(4, RD(4) & 0xff);
wr32(c, (RW(29) + 4), RW(5));
wr32(c, (RW(29) + 0), RW(4));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET32(4, RW(0) + 32);
SET64(31, 0x11089c); wr32(c, (RW(29) + 8), RW(6)); JP_F_0010FA90(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_001108A8(Ctx *c) { /* func_001108A8 */
ENTER(0x1108a8);
SET32(29, RW(29) + -32);
wr32(c, (RW(29) + 0), RW(4));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x1108c0); SET32(4, RW(0) + 33); JP_F_0010FA90(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001108D0(Ctx *c) { /* func_001108D0 */
ENTER(0x1108d0);
SET32(29, RW(29) + -32);
SET64(2, RD(5) + RD(0));
SET64(6, RD(6) & 0xffff);
wr32(c, (RW(29) + 0), RW(4));
wr64(c, (RW(29) + 16), RD(31));
SET64(5, RD(29) + RD(0));
wr32(c, (RW(29) + 4), RW(2));
SET32(4, RW(0) + -5);
SET64(31, 0x1108f8); wr32(c, (RW(29) + 8), RW(6)); JP_F_0010FA90(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00110908(Ctx *c) { /* func_00110908 */
ENTER(0x110908);
SET32(29, RW(29) + -32);
SET64(2, RD(5) + RD(0));
SET64(6, RD(6) & 0xffff);
wr32(c, (RW(29) + 0), RW(4));
wr64(c, (RW(29) + 16), RD(31));
SET64(5, RD(29) + RD(0));
wr32(c, (RW(29) + 4), RW(2));
SET32(4, RW(0) + -6);
SET64(31, 0x110930); wr32(c, (RW(29) + 8), RW(6)); JP_F_0010FA90(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00110940(Ctx *c) { /* func_00110940 */
ENTER(0x110940);
SET32(5, RW(5) << 24);
SET32(29, RW(29) + -32);
SET32(5, RSW(5) >> 24);
wr32(c, (RW(29) + 0), RW(4));
wr32(c, (RW(29) + 4), RW(5));
SET32(4, RW(0) + -7);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x110964); SET64(5, RD(29) + RD(0)); JP_F_0010FA90(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00110970(Ctx *c) { /* func_00110970 */
ENTER(0x110970);
SET32(29, RW(29) + -32);
wr32(c, (RW(29) + 0), RW(4));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x110988); SET32(4, RW(0) + -8); JP_F_0010FA90(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00110998(Ctx *c) { /* func_00110998 */
ENTER(0x110998);
SET32(29, RW(29) + -32);
wr32(c, (RW(29) + 0), RW(4));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x1109b0); SET32(4, RW(0) + -9); JP_F_0010FA90(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001109C0(Ctx *c) { /* func_001109C0 */
ENTER(0x1109c0);
SET32(29, RW(29) + -32);
wr32(c, (RW(29) + 0), RW(4));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x1109d8); SET32(4, RW(0) + 16); JP_F_0010FA90(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001109E8(Ctx *c) { /* func_001109E8 */
ENTER(0x1109e8);
SET64(2, (s64)(s32)0x500000);
SET32(3, RW(2) + 32448);
wr32(c, (RW(2) + 32448), RW(4));
SET32(4, RW(3) + 16);
SET64(2, RD(3) + RD(0));
wr32(c, (RW(3) + 8), RW(4));
wr32(c, (RW(3) + 4), RW(0));
wr32(c, (RW(3) + 12), RW(4)); return;
}

void JP_F_00110A10(Ctx *c) { /* func_00110A10 */
ENTER(0x110a10);
SET64(5, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(5) + 4)));
SET64(4, (s32)rd32(c, (RW(5) + 12)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(2, RW(2) + 1);
SET32(4, RW(4) + 1);
wr32(c, (RW(5) + 4), RW(2));
SET32(3, RW(3) + 16);
SET32(3, RW(5) + RW(3));
{ int t = RD(4) != RD(3); wr32(c, (RW(5) + 12), RW(4)); if (t) goto L_00110A44; }
SET32(2, RW(5) + 16);
wr32(c, (RW(5) + 12), RW(2));
L_00110A44:;
 return;
}

void JP_F_00110A50(Ctx *c) { /* func_00110A50 */
ENTER(0x110a50);
SET64(5, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(5) + 4)));
SET64(4, (s32)rd32(c, (RW(5) + 8)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(2, RW(2) + -1);
SET32(4, RW(4) + 1);
wr32(c, (RW(5) + 4), RW(2));
SET32(3, RW(3) + 16);
SET32(3, RW(5) + RW(3));
{ int t = RD(4) != RD(3); wr32(c, (RW(5) + 8), RW(4)); if (t) goto L_00110A84; }
SET32(2, RW(5) + 16);
wr32(c, (RW(5) + 8), RW(2));
L_00110A84:;
 return;
}

void JP_F_00110A90(Ctx *c) { /* func_00110A90 */
ENTER(0x110a90);
SET32(29, RW(29) + -64);
SET32(2, RW(0) + 3);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(16, RD(5) + RD(0));
{ int t = RD(4) == RD(2); wr64(c, (RW(29) + 32), RD(18)); if (t) goto L_00110B9C; }
SET64(2, RSD(4) < (s64)4);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 4); if (t) goto L_00110AD0; }
{ int t = RD(4) == RD(2); SET64(31, rd64(c, (RW(29) + 48))); if (t) goto L_00110BEC; }
SET64(18, rd64(c, (RW(29) + 32))); goto L_00110C14;
L_00110AD0:;
{ int t = RSD(4) <= 0; SET64(31, rd64(c, (RW(29) + 48))); if (t) goto L_00110C10; }
if (RD(16) == RD(0)) { SET64(18, (s32)rd32(c, (RW(17) + 20))); goto L_00110B40; }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(2, RW(2) + RW(16));
SET64(2, RD(2) < (u64)(s64)321);
{ int t = RD(2) != RD(0); SET64(4, (s64)(s32)0x420000); if (t) goto L_00110AFC; }
SET64(31, 0x110afc); SET32(4, RW(4) + -12840); JP_F_00111850(c);
L_00110AFC:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(6, RD(16) & 0xffff);
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x110b14); SET32(5, RW(5) + RW(2)); JP_F_001108D0(c);
SET64(16, RD(2) + RD(0));
{ int t = RSD(16) >= 0;  if (t) goto L_00110B2C; }
SET64(4, (s64)(s32)0x420000);
SET64(31, 0x110b2c); SET32(4, RW(4) + -12800); JP_F_00111850(c);
L_00110B2C:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(17) + 8), RW(2));
SET64(31, rd64(c, (RW(29) + 48))); goto L_00110C10;
L_00110B40:;
SET32(16, RW(0) + 12);
SET64(2, rd16(c, (RW(18) + 0)));
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) == RD(0); SET64(3, RD(18) + RD(0)); if (t) goto L_00110B90; }
SET64(4, (s32)rd32(c, (RW(17) + 24))); goto L_00110B64;
L_00110B60:;
SET64(4, (s32)rd32(c, (RW(17) + 24)));
L_00110B64:;
SET32(2, RW(3) + RW(16));
SET64(3, rd8(c, (RW(2) + 0)));
SET32(16, RW(16) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
wr8(c, (RW(2) + 0), (u8)RW(3));
SET64(31, 0x110b80); SET64(4, (s32)rd32(c, (RW(17) + 24))); JP_F_00110A10(c);
SET64(2, rd16(c, (RW(18) + 0)));
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 20))); { POLL(); goto L_00110B60; } }
L_00110B90:;
wr32(c, (RW(17) + 8), RW(0));
SET64(31, rd64(c, (RW(29) + 48))); goto L_00110C10;
L_00110B9C:;
SET64(6, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(17) + 16)));
SET64(31, 0x110bb0); SET64(6, RD(6) & 0xffff); JP_F_00110908(c);
SET64(5, RD(2) + RD(0));
if (RSD(5) >= 0) { SET64(2, (s32)rd32(c, (RW(17) + 16))); goto L_00110BD0; }
SET64(4, (s64)(s32)0x420000);
SET64(31, 0x110bc8); SET32(4, RW(4) + -12776); JP_F_00111850(c);
 goto L_00110C08;
L_00110BD0:;
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(2) + RW(5));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 4), RW(3));
SET64(31, rd64(c, (RW(29) + 48))); goto L_00110C10;
L_00110BEC:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(2) == RD(0);  if (t) goto L_00110C08; }
SET64(4, (s64)(s32)0x420000);
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x110c08); SET32(4, RW(4) + -12752); JP_F_00111850(c);
L_00110C08:;
wr32(c, (RW(17) + 12), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
L_00110C10:;
SET64(18, rd64(c, (RW(29) + 32)));
L_00110C14:;
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00110C28(Ctx *c) { hle_tty_write(c); } /* func_00110C28 */

void JP_F_00110DA0(Ctx *c) { /* func_00110DA0 */
ENTER(0x110da0);
SET32(29, RW(29) + -96);
SET64(3, RD(0) + RD(0));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 32), RD(18));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 80), RD(31));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(19));
wr64(c, (RW(29) + 16), RD(17));
{ int t = RSD(18) <= 0; wr64(c, (RW(29) + 0), RD(16)); if (t) goto L_00110E4C; }
SET64(19, (s64)(s32)0x500000);
SET64(2, (s64)(s32)0x500000);
L_00110DD8:;
SET32(17, RW(3) + 1);
SET64(4, (s32)rd32(c, (RW(2) + 32744)));
SET32(16, RW(20) + RW(3));
L_00110DE8:;
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_00110DE8; } }
SET32(5, RW(19) + 32720);
SET64(2, (s32)rd32(c, (RW(5) + 24)));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(4, rd8(c, (RW(3) + 0)));
wr8(c, (RW(16) + 0), (u8)RW(4));
SET64(31, 0x110e20); SET64(4, (s32)rd32(c, (RW(5) + 24))); JP_F_00110A50(c);
SET64(3, (s8)rd8(c, (RW(16) + 0)));
SET32(2, RW(0) + 10);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 13); if (t) goto L_00110E38; }
{ int t = RD(3) != RD(2); SET64(3, RD(17) + RD(0)); if (t) goto L_00110E40; }
L_00110E38:;
SET64(2, RD(17) + RD(0)); goto L_00110E50;
L_00110E40:;
SET64(2, RSD(3) < RSD(18));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x500000); if (t) { POLL(); goto L_00110DD8; } }
L_00110E4C:;
SET64(2, RD(3) + RD(0));
L_00110E50:;
SET64(31, rd64(c, (RW(29) + 80)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 96); return;
}

void JP_F_00110E70(Ctx *c) { /* func_00110E70 */
ENTER(0x110e70);
SET32(29, RW(29) + -48);
SET64(4, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x110e8c); SET64(16, (s64)(s32)0x500000); JP_F_0010F8E0(c);
SET32(17, RW(16) + 32720);
SET64(6, (s64)(s32)0x110000);
SET32(4, RW(0) + 528);
SET32(6, RW(6) + 2704);
SET64(31, 0x110ea4); SET64(5, RD(17) + RD(0)); JP_F_001107B0(c);
wr32(c, (RW(16) + 32720), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 32720)));
{ int t = RSD(2) >= 0; SET64(4, (s64)(s32)0x510000); if (t) goto L_00110EBC; }
SET64(2, RD(0) + RD(0)); goto L_00110F18;
L_00110EBC:;
SET64(2, (s64)(s32)0x510000);
wr32(c, (RW(17) + 12), RW(0));
SET64(3, (s64)(s32)0x20000000);
SET32(4, RW(4) + -32448);
SET32(2, RW(2) + -32768);
SET64(2, RD(2) | RD(3));
wr32(c, (RW(17) + 4), RW(0));
SET64(4, RD(4) | RD(3));
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 20), RW(4));
SET32(6, RW(0) + 528);
wr32(c, (RW(17) + 16), RW(2));
SET32(5, RW(0) + 69);
SET32(3, RW(0) + 72);
SET32(4, RW(0) + 256);
wr16(c, (RW(2) + 4), (u16)RW(6));
wr8(c, (RW(2) + 6), (u8)RW(5));
wr8(c, (RW(2) + 7), (u8)RW(3));
wr32(c, (RW(2) + 8), RW(0));
SET64(31, 0x110f10); wr16(c, (RW(2) + 2), (u16)RW(0)); JP_F_001109E8(c);
wr32(c, (RW(17) + 24), RW(2));
SET32(2, RW(0) + 1);
L_00110F18:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00110F30(Ctx *c) { /* func_00110F30 */
ENTER(0x110f30);
SET64(3, (s64)(s32)0x10000000);
SET64(3, RD(3) | 0xf130);
L_00110F38:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(2) & 0x8000);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00110F38; } }
SET64(3, (s64)(s32)0x10000000);
SET64(2, RD(4) + RD(0));
SET64(3, RD(3) | 0xf180);
wr8(c, (RW(3) + 0), (u8)RW(4));
 return;
}

void JP_F_00110F70(Ctx *c) { /* func_00110F70 */
ENTER(0x110f70);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(17));
SET64(17, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 0), RD(16));
SET64(5, (s32)rd32(c, (RW(17) + -12448)));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(2, RSD(5) < (s64)126);
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 32), RD(18)); if (t) goto L_00110FB8; }
SET64(18, (s64)(s32)0x510000);
wr32(c, (RW(17) + -12448), RW(0));
SET32(2, RW(18) + -32128);
SET64(4, RD(2) + RD(0));
SET64(31, 0x110fb0); wr8(c, (RW(2) + 127), (u8)RW(0)); JP_F_001109C0(c);
SET64(5, (s32)rd32(c, (RW(17) + -12448))); goto L_00110FBC;
L_00110FB8:;
SET64(18, (s64)(s32)0x510000);
L_00110FBC:;
SET32(2, RW(0) + 10);
{ int t = RD(16) != RD(2); SET32(2, RW(18) + -32128); if (t) goto L_00110FF8; }
SET32(4, RW(18) + -32128);
wr32(c, (RW(17) + -12448), RW(0));
SET32(2, RW(5) + RW(4));
SET64(31, rd64(c, (RW(29) + 48)));
wr8(c, (RW(2) + 0), (u8)RW(16));
SET64(3, RD(2) + RD(0));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
wr8(c, (RW(3) + 1), (u8)RW(0));
SET32(29, RW(29) + 64); { JP_F_001109C0(c); return; }
L_00110FF8:;
SET32(3, RW(5) + 1);
wr32(c, (RW(17) + -12448), RW(3));
SET32(2, RW(5) + RW(2));
wr8(c, (RW(2) + 0), (u8)RW(16));
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00111020(Ctx *c) { /* func_00111020 */
ENTER(0x111020);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 10);
{ int t = RD(4) != RD(2); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00111048; }
SET64(31, 0x111038); SET32(4, RW(0) + 13); JP_F_00110F30(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(0) + 10);
SET32(29, RW(29) + 16); { JP_F_00110F30(c); return; }
L_00111048:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00110F30(c); return; }
}

void JP_F_00111058(Ctx *c) { /* func_00111058 */
ENTER(0x111058);
SET64(5, RD(4) + RD(0));
SET64(2, RD(5) << 1);
SET64(6, RD(2) >> 53);
SET64(6, RD(6) + (s64)-1075);
SET64(2, RSD(6) < (s64)-53);
{ int t = RD(2) == RD(0); SET64(2, RSD(6) < (s64)13); if (t) goto L_0011107C; }
SET64(2, RD(0) + RD(0)); return;
L_0011107C:;
{ int t = RD(2) != RD(0); SET64(2, RD(5) << 12); if (t) goto L_0011108C; }
SET32(2, RW(0) + 9999); return;
L_0011108C:;
SET64(3, RD(0) | 0x8000);
SET64(3, RD(3) << 37);
SET64(5, RD(2) >> 12);
{ int t = RSD(6) >= 0; SET64(5, RD(5) | RD(3)); if (t) goto L_001110D0; }
SET64(6, RD(0) - RD(6));
SET32(2, RW(0) + 3);
SET64(3, RD(6) + (s64)-2);
SET64(3, RD(3) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RD(5) >> (RW(3) & 63));
SET64(4, RD(5) & 0x3);
if (RD(4) != RD(2)) { SET64(5, RD(5) >> 2); goto L_001110DC; }
SET64(2, RD(5) >> 2);
SET64(5, RD(2) + (s64)1); goto L_001110DC;
L_001110D0:;
SET64(2, RD(6) << 32);
SET64(2, RSD(2) >> 32);
SET64(5, RD(5) << (RW(2) & 63));
L_001110DC:;
SET64(2, RD(5) << 32);
SET64(2, RSD(2) >> 32);
 return;
}

void JP_F_001110F0(Ctx *c) { /* func_001110F0 */
ENTER(0x1110f0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 0), RD(16));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(17));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(17, RD(0) + RD(0));
SET64(31, 0x111118); SET64(5, RD(18) + RD(0)); JP_F_00122108(c);
{ int t = RSD(2) >= 0; SET64(5, RD(16) + RD(0)); if (t) goto L_0011113C; }
SET64(31, 0x111128); SET64(4, RD(18) + RD(0)); JP_F_00121BB8(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(16, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + -12444)));
{ u32 t = RW(2); SET64(31, 0x11113c); SET32(4, RW(0) + 45); rt_call(c, t); }
L_0011113C:;
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -12696)));
SET64(31, 0x11114c); SET64(4, RD(16) + RD(0)); JP_F_00122108(c);
{ int t = RSD(2) >= 0; SET64(18, (s64)(s32)0x420000); if (t) goto L_00111194; }
 goto L_00111174;
L_00111160:;
SET64(5, RD(0) | 0x8048);
SET64(5, RD(5) << 47);
SET64(31, 0x111170); SET32(17, RW(17) + -1); JP_F_00121C20(c);
SET64(16, RD(2) + RD(0));
L_00111174:;
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -12688)));
SET64(31, 0x111184); SET64(4, RD(16) + RD(0)); JP_F_00122108(c);
{ int t = RSD(2) < 0; SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_00111160; } }
 goto L_001111E4;
L_00111194:;
SET64(5, RD(0) | 0xffc0);
SET64(5, RD(5) << 46);
SET64(31, 0x1111a4); SET64(4, RD(16) + RD(0)); JP_F_00122108(c);
{ int t = RSD(2) < 0; SET64(18, (s64)(s32)0x420000); if (t) goto L_001111E4; }
 goto L_001111CC;
L_001111B8:;
SET64(5, RD(0) | 0x8048);
SET64(5, RD(5) << 47);
SET64(31, 0x1111c8); SET32(17, RW(17) + 1); JP_F_00121EA8(c);
SET64(16, RD(2) + RD(0));
L_001111CC:;
SET64(5, RD(0) | 0xffc0);
SET64(5, RD(5) << 46);
SET64(31, 0x1111dc); SET64(4, RD(16) + RD(0)); JP_F_00122108(c);
{ int t = RSD(2) >= 0; SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_001111B8; } }
L_001111E4:;
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -12680)));
SET64(31, 0x1111f4); SET64(4, RD(16) + RD(0)); JP_F_00121C20(c);
SET64(31, 0x1111fc); SET64(4, RD(2) + RD(0)); JP_F_00121328(c);
SET64(31, 0x111204); SET64(4, RD(2) + RD(0)); JP_F_00111058(c);
SET32(4, RW(18) + -12720);
SET64(31, 0x111210); SET64(5, RD(2) + RD(0)); JP_F_00111850(c);
{ int t = RSD(17) < 0; SET64(5, RD(17) + RD(0)); if (t) goto L_00111238; }
SET64(4, (s64)(s32)0x420000);
SET64(31, rd64(c, (RW(29) + 48)));
SET32(4, RW(4) + -12712);
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); { JP_F_00111850(c); return; }
L_00111238:;
SET64(4, (s64)(s32)0x420000);
SET64(31, rd64(c, (RW(29) + 48)));
SET32(4, RW(4) + -12704);
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); { JP_F_00111850(c); return; }
}

static void JP_B_00111258(Ctx *c, u32 entry) { /* func_00111258 */
ENTER(entry);
switch (entry) { case 0x1112ec: goto L_001112EC; case 0x111370: goto L_00111370; case 0x11137c: goto L_0011137C; case 0x111384: goto L_00111384; case 0x111440: goto L_00111440; case 0x111500: goto L_00111500; case 0x1115f0: goto L_001115F0; case 0x1116c0: goto L_001116C0; case 0x111714: goto L_00111714; case 0x1117b8: goto L_001117B8; case 0x111800: goto L_00111800; }
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 80), RD(19));
wr64(c, (RW(29) + 32), RD(16));
SET64(19, RD(5) + RD(0));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 128), RD(22));
wr64(c, (RW(29) + 144), RD(31));
wr64(c, (RW(29) + 112), RD(21));
wr64(c, (RW(29) + 96), RD(20));
wr64(c, (RW(29) + 64), RD(18));
SET64(31, 0x111288); wr64(c, (RW(29) + 48), RD(17)); JP_F_001186A0(c);
SET64(22, RD(2) + RD(0));
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(3, rd8(c, (RW(16) + 0))); if (t) goto L_00111814; }
L_00111298:;
SET32(2, RW(3) << 24);
SET64(20, RD(0) + RD(0));
SET32(4, RSW(2) >> 24);
SET32(2, RW(0) + 37);
{ int t = RD(4) != RD(2); SET64(7, RD(0) + RD(0)); if (t) goto L_001117E0; }
L_001112B0:;
SET32(18, RW(16) + 1);
L_001112B4:;
SET64(16, RD(18) + RD(0));
L_001112B8:;
SET64(2, rd8(c, (RW(16) + 0)));
SET32(2, RW(2) + -48);
SET32(2, RW(2) << 24);
SET32(4, RSW(2) >> 24);
SET64(3, RD(4) < (u64)(s64)73);
{ int t = RD(3) == RD(0); SET64(2, (s64)(s32)0x420000); if (t) goto L_001117F8; }
SET32(3, RW(4) << 2);
SET32(2, RW(2) + -12672);
SET32(3, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(4);  switch (t) { case 0x1112ec: goto L_001112EC; case 0x111370: goto L_00111370; case 0x11137c: goto L_0011137C; case 0x111384: goto L_00111384; case 0x111440: goto L_00111440; case 0x111500: goto L_00111500; case 0x1115f0: goto L_001115F0; case 0x1116c0: goto L_001116C0; case 0x111714: goto L_00111714; case 0x1117b8: goto L_001117B8; case 0x111800: goto L_00111800; default: rt_jump(c, t); return; } }
L_001112EC:;
SET64(3, (s8)rd8(c, (RW(18) + 1)));
SET32(5, RW(3) + -48);
SET64(2, RD(5) & 0xff);
SET64(2, RD(2) < (u64)(s64)10);
{ int t = RD(2) == RD(0); SET64(6, (s8)rd8(c, (RW(18) + 2))); if (t) goto L_00111374; }
SET32(2, RW(6) + -48);
SET64(2, RD(2) < (u64)(s64)10);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 10); if (t) goto L_00111334; }
SET32(4, RW(0) + 31);
mul_s(c, 0, 3, RSW(5), RSW(3));
SET32(16, RW(18) + 2);
SET32(3, RW(3) + -48);
SET32(5, RW(3) + RW(6));
SET64(2, RSD(5) < (s64)32);
if (RD(2) == 0) SET64(5, RD(4)); goto L_00111338;
L_00111334:;
SET32(16, RW(18) + 1);
L_00111338:;
SET32(2, RW(29) + 31);
{ int t = RSD(5) <= 0; SET32(20, RW(2) - RW(5)); if (t) { POLL(); goto L_001112B0; } }
SET32(18, RW(16) + 1);
L_00111348:;
SET32(2, RW(0) + 31);
SET32(4, RW(0) + 48);
SET32(2, RW(2) - RW(5));
SET32(3, RW(29) + RW(2));
SET32(5, RW(5) + -1);
wr8(c, (RW(3) + 0), (u8)RW(4));
{ int t = RSD(5) > 0;  if (t) { POLL(); goto L_00111348; } }
SET64(16, RD(18) + RD(0)); { POLL(); goto L_001112B8; }
L_00111370:;
SET32(7, RW(0) + 108);
L_00111374:;
SET32(18, RW(18) + 1); { POLL(); goto L_001112B4; }
L_0011137C:;
SET32(7, RW(0) + 104); { POLL(); goto L_00111374; }
L_00111384:;
SET32(2, RW(0) + 108);
{ int t = RD(7) != RD(2); SET32(2, RW(0) + 104); if (t) goto L_0011139C; }
SET32(19, RW(19) + 8);
SET64(17, rd64(c, (RW(19) + -8))); goto L_001113B0;
L_0011139C:;
{ int t = RD(7) != RD(2); SET32(19, RW(19) + 8); if (t) goto L_001113AC; }
SET64(17, rd16(c, (RW(19) + -8))); goto L_001113B0;
L_001113AC:;
SET64(17, rd32(c, (RW(19) + -8)));
L_001113B0:;
SET32(16, RW(29) + 31);
{ int t = RD(17) != RD(0); wr8(c, (RW(29) + 31), (u8)RW(0)); if (t) goto L_001113D0; }
SET32(2, RW(0) + 48);
SET32(16, RW(29) + 30);
wr8(c, (RW(29) + 30), (u8)RW(2));
SET32(18, RW(18) + 1); goto L_001113F8;
L_001113D0:;
SET32(18, RW(18) + 1);
L_001113D8:;
SET64(2, RD(17) & 0x7);
SET32(16, RW(16) + -1);
SET64(2, RD(2) + (s64)48);
SET64(17, RD(17) >> 3);
SET64(2, RD(2) & 0xff);
wr8(c, (RW(16) + 0), (u8)RW(2));
{ int t = RD(17) != RD(0);  if (t) { POLL(); goto L_001113D8; } }
L_001113F8:;
{ int t = RD(20) == RD(0); SET64(2, RD(20) < RD(16)); if (t) goto L_00111404; }
if (RD(2) != 0) SET64(16, RD(20));
L_00111404:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(4, rd8(c, (RW(16) + 0))); if (t) goto L_00111804; }
SET64(21, (s64)(s32)0x3e0000);
L_00111418:;
SET32(4, RW(4) << 24);
SET64(2, (s32)rd32(c, (RW(21) + -12444)));
SET32(4, RSW(4) >> 24);
{ u32 t = RW(2); SET64(31, 0x11142c); SET32(16, RW(16) + 1); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(16) + 0))); if (t) { POLL(); goto L_00111418; } }
SET64(16, RD(18) + RD(0)); goto L_00111808;
L_00111440:;
SET32(2, RW(0) + 108);
{ int t = RD(7) != RD(2); SET32(2, RW(0) + 104); if (t) goto L_00111458; }
SET32(19, RW(19) + 8);
SET64(17, rd64(c, (RW(19) + -8))); goto L_0011146C;
L_00111458:;
{ int t = RD(7) != RD(2); SET32(19, RW(19) + 8); if (t) goto L_00111468; }
SET64(17, rd16(c, (RW(19) + -8))); goto L_0011146C;
L_00111468:;
SET64(17, rd32(c, (RW(19) + -8)));
L_0011146C:;
SET32(16, RW(29) + 31);
{ int t = RD(17) != RD(0); wr8(c, (RW(29) + 31), (u8)RW(0)); if (t) goto L_0011148C; }
SET32(2, RW(0) + 48);
SET32(16, RW(29) + 30);
wr8(c, (RW(29) + 30), (u8)RW(2));
SET32(18, RW(18) + 1); goto L_001114B8;
L_0011148C:;
SET32(18, RW(18) + 1);
L_00111490:;
SET64(3, RD(17) & 0xf);
SET64(2, RD(3) < (u64)(s64)10);
{ int t = RD(2) != RD(0); SET64(2, RD(3) + (s64)48); if (t) goto L_001114A4; }
SET64(2, RD(3) + (s64)87);
L_001114A4:;
SET32(16, RW(16) + -1);
SET64(2, RD(2) & 0xff);
SET64(17, RD(17) >> 4);
{ int t = RD(17) != RD(0); wr8(c, (RW(16) + 0), (u8)RW(2)); if (t) { POLL(); goto L_00111490; } }
L_001114B8:;
{ int t = RD(20) == RD(0); SET64(2, RD(20) < RD(16)); if (t) goto L_001114C4; }
if (RD(2) != 0) SET64(16, RD(20));
L_001114C4:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(4, rd8(c, (RW(16) + 0))); if (t) goto L_00111804; }
SET64(21, (s64)(s32)0x3e0000);
L_001114D8:;
SET32(4, RW(4) << 24);
SET64(2, (s32)rd32(c, (RW(21) + -12444)));
SET32(4, RSW(4) >> 24);
{ u32 t = RW(2); SET64(31, 0x1114ec); SET32(16, RW(16) + 1); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(16) + 0))); if (t) { POLL(); goto L_001114D8; } }
SET64(16, RD(18) + RD(0)); goto L_00111808;
L_00111500:;
SET32(2, RW(0) + 108);
{ int t = RD(7) != RD(2); SET32(2, RW(0) + 104); if (t) goto L_00111518; }
SET32(19, RW(19) + 8);
SET64(17, rd64(c, (RW(19) + -8))); goto L_0011152C;
L_00111518:;
{ int t = RD(7) != RD(2); SET32(19, RW(19) + 8); if (t) goto L_00111528; }
SET64(17, (s16)rd16(c, (RW(19) + -8))); goto L_0011152C;
L_00111528:;
SET64(17, (s32)rd32(c, (RW(19) + -8)));
L_0011152C:;
SET32(16, RW(29) + 31);
{ int t = RD(17) != RD(0); wr8(c, (RW(29) + 31), (u8)RW(0)); if (t) goto L_00111548; }
SET32(2, RW(0) + 48);
SET32(16, RW(29) + 30);
wr8(c, (RW(29) + 30), (u8)RW(2)); goto L_001115A8;
L_00111548:;
{ int t = RSD(17) >= 0; SET64(21, (s64)(s32)0x3e0000); if (t) goto L_00111560; }
SET64(17, RD(0) - RD(17));
SET64(2, (s32)rd32(c, (RW(21) + -12444)));
{ u32 t = RW(2); SET64(31, 0x111560); SET32(4, RW(0) + 45); rt_call(c, t); }
L_00111560:;
{ int t = RD(17) == RD(0); SET32(18, RW(18) + 1); if (t) goto L_001115AC; }
SET64(4, RD(17) + RD(0));
L_00111570:;
SET64(31, 0x111578); SET32(5, RW(0) + 10); JP_F_00120020(c);
SET32(16, RW(16) + -1);
SET64(2, RD(2) + (s64)48);
SET64(4, RD(17) + RD(0));
SET64(2, RD(2) & 0xff);
SET32(5, RW(0) + 10);
SET64(31, 0x111594); wr8(c, (RW(16) + 0), (u8)RW(2)); JP_F_0011F988(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(0); SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_00111570; } }
 goto L_001115AC;
L_001115A8:;
SET32(18, RW(18) + 1);
L_001115AC:;
{ int t = RD(20) == RD(0); SET64(2, RD(20) < RD(16)); if (t) goto L_001115B8; }
if (RD(2) != 0) SET64(16, RD(20));
L_001115B8:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(4, rd8(c, (RW(16) + 0))); if (t) goto L_00111804; }
SET64(21, (s64)(s32)0x3e0000);
L_001115C8:;
SET32(4, RW(4) << 24);
SET64(2, (s32)rd32(c, (RW(21) + -12444)));
SET32(4, RSW(4) >> 24);
{ u32 t = RW(2); SET64(31, 0x1115dc); SET32(16, RW(16) + 1); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(16) + 0))); if (t) { POLL(); goto L_001115C8; } }
SET64(16, RD(18) + RD(0)); goto L_00111808;
L_001115F0:;
SET32(2, RW(0) + 108);
{ int t = RD(7) != RD(2); SET32(2, RW(0) + 104); if (t) goto L_00111608; }
SET32(19, RW(19) + 8);
SET64(17, rd64(c, (RW(19) + -8))); goto L_0011161C;
L_00111608:;
{ int t = RD(7) != RD(2); SET32(19, RW(19) + 8); if (t) goto L_00111618; }
SET64(17, rd16(c, (RW(19) + -8))); goto L_0011161C;
L_00111618:;
SET64(17, rd32(c, (RW(19) + -8)));
L_0011161C:;
SET32(16, RW(29) + 31);
{ int t = RD(17) != RD(0); wr8(c, (RW(29) + 31), (u8)RW(0)); if (t) goto L_0011163C; }
SET32(2, RW(0) + 48);
SET32(16, RW(29) + 30);
wr8(c, (RW(29) + 30), (u8)RW(2));
SET32(18, RW(18) + 1); goto L_00111678;
L_0011163C:;
SET32(18, RW(18) + 1);
SET64(4, RD(17) + RD(0));
L_00111648:;
SET64(31, 0x111650); SET32(5, RW(0) + 10); JP_F_00120C30(c);
SET32(16, RW(16) + -1);
SET64(2, RD(2) + (s64)48);
SET64(4, RD(17) + RD(0));
SET64(2, RD(2) & 0xff);
SET32(5, RW(0) + 10);
SET64(31, 0x11166c); wr8(c, (RW(16) + 0), (u8)RW(2)); JP_F_001206B0(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(0); SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_00111648; } }
L_00111678:;
{ int t = RD(20) == RD(0); SET64(2, RD(20) < RD(16)); if (t) goto L_00111684; }
if (RD(2) != 0) SET64(16, RD(20));
L_00111684:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(4, rd8(c, (RW(16) + 0))); if (t) goto L_00111804; }
SET64(21, (s64)(s32)0x3e0000);
L_00111698:;
SET32(4, RW(4) << 24);
SET64(2, (s32)rd32(c, (RW(21) + -12444)));
SET32(4, RSW(4) >> 24);
{ u32 t = RW(2); SET64(31, 0x1116ac); SET32(16, RW(16) + 1); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(16) + 0))); if (t) { POLL(); goto L_00111698; } }
SET64(16, RD(18) + RD(0)); goto L_00111808;
L_001116C0:;
SET32(19, RW(19) + 8);
SET64(31, 0x1116cc); SET64(4, rd64(c, (RW(19) + -8))); JP_F_001222E0(c);
c->f[12].u = c->f[0].u;
c->f[0].u = RW(0);
c->fcc = F(12) == F(0);
{ int t = !c->fcc; SET64(21, (s64)(s32)0x3e0000); if (t) goto L_001116FC; }
SET32(4, RW(0) + 48);
SET64(2, (s32)rd32(c, (RW(21) + -12444)));
{ u32 t = RW(2); SET64(31, 0x1116f4); SET32(18, RW(18) + 1); rt_call(c, t); }
SET64(16, RD(18) + RD(0)); goto L_00111808;
L_001116FC:;
SET64(31, 0x111704); SET32(18, RW(18) + 1); JP_F_00121728(c);
SET64(31, 0x11170c); SET64(4, RD(2) + RD(0)); JP_F_001110F0(c);
SET64(16, RD(18) + RD(0)); goto L_00111808;
L_00111714:;
SET32(19, RW(19) + 8);
SET64(3, (s32)rd32(c, (RW(19) + -8)));
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(3) + 0))); if (t) goto L_00111780; }
SET64(21, (s64)(s32)0x3e0000);
SET32(4, RW(0) + 40);
SET64(2, (s32)rd32(c, (RW(21) + -12444)));
{ u32 t = RW(2); SET64(31, 0x11173c); SET32(18, RW(18) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(21) + -12444)));
{ u32 t = RW(3); SET64(31, 0x111748); SET32(4, RW(0) + 110); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(21) + -12444)));
{ u32 t = RW(2); SET64(31, 0x111754); SET32(4, RW(0) + 117); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(21) + -12444)));
{ u32 t = RW(3); SET64(31, 0x111760); SET32(4, RW(0) + 108); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(21) + -12444)));
{ u32 t = RW(2); SET64(31, 0x11176c); SET32(4, RW(0) + 108); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(21) + -12444)));
{ u32 t = RW(3); SET64(31, 0x111778); SET32(4, RW(0) + 41); rt_call(c, t); }
SET64(16, RD(18) + RD(0)); goto L_00111808;
L_00111780:;
SET64(16, RD(3) + RD(0));
SET32(18, RW(18) + 1);
SET64(21, (s64)(s32)0x3e0000);
L_00111790:;
SET32(4, RW(4) << 24);
SET64(3, (s32)rd32(c, (RW(21) + -12444)));
SET32(4, RSW(4) >> 24);
{ u32 t = RW(3); SET64(31, 0x1117a4); SET32(16, RW(16) + 1); rt_call(c, t); }
SET64(2, rd8(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0); SET64(4, RD(2) + RD(0)); if (t) { POLL(); goto L_00111790; } }
SET64(16, RD(18) + RD(0)); goto L_00111808;
L_001117B8:;
SET32(19, RW(19) + 8);
SET64(21, (s64)(s32)0x3e0000);
SET64(17, (s8)rd8(c, (RW(19) + -8)));
SET64(2, (s32)rd32(c, (RW(21) + -12444)));
SET64(4, RD(17) << 32);
SET64(4, RSD(4) >> 32);
{ u32 t = RW(2); SET64(31, 0x1117d8); SET32(18, RW(18) + 1); rt_call(c, t); }
SET64(16, RD(18) + RD(0)); goto L_00111808;
L_001117E0:;
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12444)));
{ u32 t = RW(3); SET64(31, 0x1117f0); SET32(18, RW(16) + 1); rt_call(c, t); }
SET64(16, RD(18) + RD(0)); goto L_00111808;
L_001117F8:;
SET32(18, RW(16) + 1); goto L_00111804;
L_00111800:;
SET32(18, RW(18) + 1);
L_00111804:;
SET64(16, RD(18) + RD(0));
L_00111808:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0); SET64(3, rd8(c, (RW(16) + 0))); if (t) { POLL(); goto L_00111298; } }
L_00111814:;
{ int t = RD(22) == RD(0); SET64(31, rd64(c, (RW(29) + 144))); if (t) goto L_00111828; }
SET64(31, 0x111824);  JP_F_001186F8(c);
SET64(31, rd64(c, (RW(29) + 144)));
L_00111828:;
SET64(22, rd64(c, (RW(29) + 128)));
SET64(21, rd64(c, (RW(29) + 112)));
SET64(20, rd64(c, (RW(29) + 96)));
SET64(19, rd64(c, (RW(29) + 80)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(17, rd64(c, (RW(29) + 48)));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 160); return;
}
void JP_F_00111258(Ctx *c) { JP_B_00111258(c, 0x111258); }
void JP_F_001112EC(Ctx *c) { JP_B_00111258(c, 0x1112ec); }
void JP_F_00111370(Ctx *c) { JP_B_00111258(c, 0x111370); }
void JP_F_0011137C(Ctx *c) { JP_B_00111258(c, 0x11137c); }
void JP_F_00111384(Ctx *c) { JP_B_00111258(c, 0x111384); }
void JP_F_00111440(Ctx *c) { JP_B_00111258(c, 0x111440); }
void JP_F_00111500(Ctx *c) { JP_B_00111258(c, 0x111500); }
void JP_F_001115F0(Ctx *c) { JP_B_00111258(c, 0x1115f0); }
void JP_F_001116C0(Ctx *c) { JP_B_00111258(c, 0x1116c0); }
void JP_F_00111714(Ctx *c) { JP_B_00111258(c, 0x111714); }
void JP_F_001117B8(Ctx *c) { JP_B_00111258(c, 0x1117b8); }
void JP_F_00111800(Ctx *c) { JP_B_00111258(c, 0x111800); }

void JP_F_00111850(Ctx *c) { /* func_00111850 */
ENTER(0x111850);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 88), RD(5));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(29) + 88);
wr64(c, (RW(29) + 96), RD(6));
wr64(c, (RW(29) + 104), RD(7));
wr64(c, (RW(29) + 112), RD(8));
wr64(c, (RW(29) + 120), RD(9));
wr64(c, (RW(29) + 128), RD(10));
SET64(31, 0x11187c); wr64(c, (RW(29) + 136), RD(11)); JP_F_00111258(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 144); return;
}

void JP_F_00111888(Ctx *c) { /* func_00111888 */
ENTER(0x111888);
SET32(29, RW(29) + -176);
SET64(2, (s64)(s32)0x110000);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) + 3952);
SET64(16, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 16), RD(17));
SET64(17, (s32)rd32(c, (RW(16) + -12444)));
wr64(c, (RW(29) + 120), RD(5));
wr32(c, (RW(16) + -12444), RW(2));
SET32(5, RW(29) + 120);
wr64(c, (RW(29) + 32), RD(31));
wr64(c, (RW(29) + 128), RD(6));
wr64(c, (RW(29) + 136), RD(7));
wr64(c, (RW(29) + 144), RD(8));
wr64(c, (RW(29) + 152), RD(9));
wr64(c, (RW(29) + 160), RD(10));
SET64(31, 0x1118d0); wr64(c, (RW(29) + 168), RD(11)); JP_F_00111258(c);
wr32(c, (RW(16) + -12444), RW(17));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 176); return;
}

void JP_F_001118E8(Ctx *c) { /* func_001118E8 */
ENTER(0x1118e8);
SET64(2, (s32)rd32(c, (RW(4) + 16)));
SET64(6, (s32)rd32(c, (RW(5) + 28)));
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(6));
wr32(c, (RW(2) + 0), RW(3)); return;
}

void JP_F_00111908(Ctx *c) { /* func_00111908 */
ENTER(0x111908);
SET64(2, (s32)rd32(c, (RW(4) + 16)));
wr32(c, (RW(5) + 8), RW(2)); return;
}

void JP_F_00111918(Ctx *c) { /* func_00111918 */
ENTER(0x111918);
SET64(2, (s64)(s32)0x510000);
SET32(4, RW(4) << 2);
SET32(2, RW(2) + -31360);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 0))); return;
}

void JP_F_00111930(Ctx *c) { /* func_00111930 */
ENTER(0x111930);
SET64(2, (s64)(s32)0x510000);
SET32(4, RW(4) << 2);
SET32(2, RW(2) + -31360);
SET32(4, RW(4) + RW(2));
SET64(2, RD(5) + RD(0));
wr32(c, (RW(4) + 0), RW(5)); return;
}

void JP_F_00111950(Ctx *c) { /* func_00111950 */
ENTER(0x111950);
SET64(2, (s64)(s32)0x510000);
SET32(2, RW(2) + -31784); return;
}

void JP_F_00111960(Ctx *c) { /* func_00111960 */
ENTER(0x111960);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 48), RD(19));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
SET64(31, 0x111980); wr64(c, (RW(29) + 0), RD(16)); JP_F_001186A0(c);
SET64(10, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(10) + -12440)));
{ int t = RD(2) == RD(0); SET64(19, (s64)(s32)0x510000); if (t) goto L_001119B0; }
SET64(31, rd64(c, (RW(29) + 80)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 96); { JP_F_001186F8(c); return; }
L_001119B0:;
SET64(5, (s64)(s32)0x510000);
SET64(2, (s64)(s32)0x20000000);
SET32(5, RW(5) + -31872);
SET32(6, RW(19) + -32000);
SET64(18, (s64)(s32)0x510000);
SET64(5, RD(5) | RD(2));
SET64(6, RD(6) | RD(2));
SET32(3, RW(0) + 1);
SET64(9, (s64)(s32)0x510000);
SET64(4, (s64)(s32)0x510000);
SET32(2, RW(18) + -31784);
wr32(c, (RW(10) + -12440), RW(3));
SET32(4, RW(4) + -31360);
SET32(8, RW(9) + -31744);
wr32(c, (RW(18) + -31784), RW(6));
SET32(7, RW(0) + 32);
wr32(c, (RW(2) + 28), RW(4));
SET64(3, RD(8) + RD(0));
wr32(c, (RW(2) + 4), RW(5));
wr32(c, (RW(2) + 16), RW(7));
SET32(4, RW(3) + 384);
wr32(c, (RW(2) + 8), RW(0));
SET64(20, (s64)(s32)0x510000);
wr32(c, (RW(2) + 12), RW(8));
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 24), RW(0));
L_00111A18:;
wr32(c, (RW(3) + 0), RW(0));
wr32(c, (RW(3) + 4), RW(0));
SET32(3, RW(3) + 12);
SET64(2, RSD(3) < RSD(4));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00111A18; } }
SET64(2, (s64)(s32)0x510000);
SET32(16, RW(0) + 31);
SET32(2, RW(2) + -31360);
SET32(2, RW(2) + 124);
L_00111A48:;
wr32(c, (RW(2) + 0), RW(0));
SET32(16, RW(16) + -1);
SET32(2, RW(2) + -4);
{ int t = RSD(16) >= 0;  if (t) { POLL(); goto L_00111A48; } }
SET64(2, (s64)(s32)0x110000);
SET64(3, (s64)(s32)0x110000);
SET32(2, RW(2) + 6408);
SET32(4, RW(9) + -31744);
SET32(3, RW(3) + 6376);
SET32(17, RW(18) + -31784);
wr32(c, (RW(9) + -31744), RW(2));
SET32(16, RW(0) + 32);
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(4) + 16), RW(17));
SET64(31, 0x111a94); wr32(c, (RW(4) + 4), RW(17)); JP_F_001186F8(c);
SET64(31, 0x111a9c); SET64(4, RD(0) + RD(0)); JP_F_0010F8E0(c);
SET64(2, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0xe010);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(3, RD(3) & 0x20);
{ int t = RD(3) == RD(0); SET64(2, (s64)(s32)0x10000000); if (t) goto L_00111AC0; }
SET64(1, (s64)(s32)0x10010000);
wr32(c, (RW(1) + -8176), RW(16));
SET64(2, (s64)(s32)0x10000000);
L_00111AC0:;
SET64(2, RD(2) | 0xc000);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(3, RD(3) & 0x100);
{ int t = RD(3) != RD(0); SET64(5, (s64)(s32)0x110000); if (t) goto L_00111AE0; }
SET64(31, 0x111adc);  JP_F_0010FA40(c);
SET64(5, (s64)(s32)0x110000);
L_00111AE0:;
SET32(4, RW(0) + 5);
SET32(5, RW(5) + 7880);
SET64(31, 0x111af0); SET64(6, RD(0) + RD(0)); JP_F_0010F370(c);
SET64(3, (s64)(s32)0x510000);
SET32(4, RW(0) + 5);
SET64(31, 0x111b00); wr32(c, (RW(3) + -31788), RW(2)); JP_F_00110278(c);
SET64(4, (s64)(s32)0x80000000);
SET64(31, 0x111b0c);  JP_F_0010FA70(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 8), RW(2)); if (t) goto L_00111B54; }
SET32(5, RW(20) + -31808);
SET32(2, RW(19) + -32000);
SET64(31, rd64(c, (RW(29) + 80)));
SET64(4, (s64)(s32)0x80000000);
SET64(20, rd64(c, (RW(29) + 64)));
SET32(6, RW(0) + 20);
SET64(19, rd64(c, (RW(29) + 48)));
SET64(7, RD(0) + RD(0));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(8, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(9, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(5) + 16), RW(2));
SET32(29, RW(29) + 96); { JP_F_00111E48(c); return; }
L_00111B54:;
SET64(16, (s64)(s32)0x20000);
L_00111B58:;
SET64(31, 0x111b60); SET32(4, RW(0) + 4); JP_F_0010FA70(c);
SET64(2, RD(2) & RD(16));
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 2); if (t) { POLL(); goto L_00111B58; } }
SET64(31, 0x111b74); SET32(16, RW(18) + -31784); JP_F_0010FA70(c);
wr32(c, (RW(16) + 8), RW(2));
SET64(4, (s64)(s32)0x80000000);
SET64(31, 0x111b84); SET64(5, RD(2) + RD(0)); JP_F_0010FA60(c);
SET64(4, (s64)(s32)0x80000000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x111b94); SET64(4, RD(4) | 0x1); JP_F_0010FA60(c);
SET32(3, RW(20) + -31808);
SET32(2, RW(19) + -32000);
SET64(4, (s64)(s32)0x80000000);
SET64(31, rd64(c, (RW(29) + 80)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(5, RD(3) + RD(0));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(4, RD(4) | 0x2);
SET64(18, rd64(c, (RW(29) + 32)));
SET32(6, RW(0) + 20);
SET64(17, rd64(c, (RW(29) + 16)));
SET64(7, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(8, RD(0) + RD(0));
wr32(c, (RW(3) + 16), RW(2));
SET64(9, RD(0) + RD(0));
wr32(c, (RW(3) + 12), RW(0));
SET32(29, RW(29) + 96); { JP_F_00111E48(c); return; }
}

void JP_F_00111BE0(Ctx *c) { /* func_00111BE0 */
ENTER(0x111be0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x111bf0); SET32(4, RW(0) + 5); JP_F_00110210(c);
SET64(3, (s64)(s32)0x510000);
SET32(4, RW(0) + 5);
SET64(31, 0x111c00); SET64(5, (s32)rd32(c, (RW(3) + -31788))); JP_F_0010F390(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + -12440), RW(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00111C18(Ctx *c) { /* func_00111C18 */
ENTER(0x111c18);
SET64(3, (s64)(s32)0x510000);
SET32(3, RW(3) + -31784);
SET64(2, (s32)rd32(c, (RW(3) + 20)));
wr32(c, (RW(3) + 24), RW(5));
wr32(c, (RW(3) + 20), RW(4)); return;
}

void JP_F_00111C30(Ctx *c) { /* func_00111C30 */
ENTER(0x111c30);
SET64(3, (s64)(s32)0x510000);
SET32(3, RW(3) + -31784);
SET64(2, (s32)rd32(c, (RW(3) + 12)));
wr32(c, (RW(3) + 16), RW(5));
wr32(c, (RW(3) + 12), RW(4)); return;
}

void JP_F_00111C48(Ctx *c) { /* func_00111C48 */
ENTER(0x111c48);
SET64(2, RD(4) + RD(0));
{ int t = RSD(2) >= 0; SET64(7, RD(5) + RD(0)); if (t) goto L_00111C8C; }
SET64(3, (s64)(s32)0x7fff0000);
SET32(5, RW(0) + 12);
SET64(3, RD(3) | 0xffff);
SET64(4, (s64)(s32)0x510000);
SET64(3, RD(2) & RD(3));
SET32(4, RW(4) + -31784);
mul_s(c, 0, 3, RSW(3), RSW(5));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(2, RW(3) + RW(2));
wr32(c, (RW(2) + 4), RW(6));
wr32(c, (RW(2) + 0), RW(7));
SET64(5, RD(28) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 12))); goto L_00111CB4;
L_00111C8C:;
SET32(3, RW(0) + 12);
SET64(4, (s64)(s32)0x510000);
mul_s(c, 0, 3, RSW(2), RSW(3));
SET32(4, RW(4) + -31784);
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET32(2, RW(3) + RW(2));
wr32(c, (RW(2) + 4), RW(6));
wr32(c, (RW(2) + 0), RW(7));
SET64(5, RD(28) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 20)));
L_00111CB4:;
SET32(3, RW(3) + RW(2));
wr32(c, (RW(3) + 8), RW(5)); return;
}

void JP_F_00111CC0(Ctx *c) { /* func_00111CC0 */
ENTER(0x111cc0);
SET64(6, RD(4) + RD(0));
{ int t = RSD(6) >= 0; SET32(2, RW(0) + 12); if (t) goto L_00111CF4; }
SET64(2, (s64)(s32)0x7fff0000);
SET32(5, RW(0) + 12);
SET64(2, RD(2) | 0xffff);
SET64(3, (s64)(s32)0x510000);
SET64(2, RD(6) & RD(2));
SET64(4, (s32)rd32(c, (RW(3) + -31772)));
mul_s(c, 0, 2, RSW(2), RSW(5));
SET32(2, RW(2) + RW(4));
wr32(c, (RW(2) + 0), RW(0)); return;
L_00111CF4:;
SET64(4, (s64)(s32)0x510000);
mul_s(c, 0, 2, RSW(6), RSW(2));
SET64(3, (s32)rd32(c, (RW(4) + -31764)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(2) + 0), RW(0)); return;
}

void JP_F_00111D10(Ctx *c) { /* func_00111D10 */
ENTER(0x111d10);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 48), RD(17));
wr64(c, (RW(29) + 96), RD(20));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 80), RD(19));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET32(2, RW(17) + -16);
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 112), RD(31));
wr64(c, (RW(29) + 64), RD(18));
SET64(16, RD(6) + RD(0));
SET64(4, RD(8) + RD(0));
SET64(2, RD(2) < (u64)(s64)97);
{ int t = RD(2) != RD(0); SET64(5, RD(10) + RD(0)); if (t) goto L_00111D58; }
SET64(2, RD(0) + RD(0)); goto L_00111E24;
L_00111D58:;
{ int t = RSD(5) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00111DA0; }
SET64(2, rd8(c, (RW(16) + 0)));
SET32(3, RW(5) << 8);
wr32(c, (RW(16) + 4), RW(9));
SET32(18, RW(0) + 1);
SET64(2, RD(2) | RD(3));
wr32(c, (RW(29) + 0), RW(4));
wr32(c, (RW(16) + 0), RW(2));
SET64(3, RD(19) & 0x4);
wr32(c, (RW(29) + 4), RW(9));
wr32(c, (RW(29) + 8), RW(5));
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 12), RW(0)); if (t) goto L_00111DAC; }
SET64(31, 0x111d98);  JP_F_00112010(c);
SET32(5, RW(18) << 4); goto L_00111DB0;
L_00111DA0:;
SET64(2, rd8(c, (RW(16) + 0)));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 0), RW(2));
L_00111DAC:;
SET32(5, RW(18) << 4);
L_00111DB0:;
SET64(2, (s64)(s32)0x510000);
SET64(4, (s32)rd32(c, (RW(2) + -31776)));
SET32(3, RW(29) + RW(5));
wr32(c, (RW(3) + 0), RW(16));
SET32(2, RW(29) + 4);
SET32(2, RW(2) + RW(5));
SET32(3, RW(29) + 8);
wr32(c, (RW(2) + 0), RW(4));
SET32(3, RW(3) + RW(5));
wr32(c, (RW(3) + 0), RW(17));
SET32(4, RW(29) + 12);
SET32(4, RW(4) + RW(5));
wr32(c, (RW(16) + 8), RW(20));
wr8(c, (RW(16) + 0), (u8)RW(17));
SET32(2, RW(0) + 68);
wr32(c, (RW(4) + 0), RW(2));
SET64(5, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x111e00); SET32(18, RW(18) + 1); JP_F_00112010(c);
SET64(2, RD(19) & 0x1);
{ int t = RD(2) == RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_00111E1C; }
SET64(31, 0x111e14); SET64(4, RD(29) + RD(0)); JP_F_0010FA30(c);
SET64(31, rd64(c, (RW(29) + 112))); goto L_00111E28;
L_00111E1C:;
SET64(31, 0x111e24); SET64(4, RD(29) + RD(0)); JP_F_0010FA20(c);
L_00111E24:;
SET64(31, rd64(c, (RW(29) + 112)));
L_00111E28:;
SET64(20, rd64(c, (RW(29) + 96)));
SET64(19, rd64(c, (RW(29) + 80)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(17, rd64(c, (RW(29) + 48)));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 128); return;
}

void JP_F_00111E48(Ctx *c) { /* func_00111E48 */
ENTER(0x111e48);
SET64(2, RD(6) + RD(0));
SET64(3, RD(7) + RD(0));
SET64(11, RD(8) + RD(0));
SET32(29, RW(29) + -16);
SET64(10, RD(9) + RD(0));
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(7, RD(2) + RD(0));
SET64(8, RD(3) + RD(0));
SET64(9, RD(11) + RD(0));
SET64(31, 0x111e78); SET64(5, RD(0) + RD(0)); JP_F_00111D10(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00111E88(Ctx *c) { /* func_00111E88 */
ENTER(0x111e88);
SET64(2, RD(6) + RD(0));
SET64(3, RD(7) + RD(0));
SET64(11, RD(8) + RD(0));
SET32(29, RW(29) + -16);
SET64(10, RD(9) + RD(0));
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(7, RD(2) + RD(0));
SET64(8, RD(3) + RD(0));
SET64(9, RD(11) + RD(0));
SET64(31, 0x111eb8); SET32(5, RW(0) + 1); JP_F_00111D10(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00111EC8(Ctx *c) { /* func_00111EC8 */
ENTER(0x111ec8);
SET32(29, RW(29) + -160);
SET64(3, (s64)(s32)0x510000);
wr64(c, (RW(29) + 128), RD(17));
wr64(c, (RW(29) + 144), RD(31));
SET32(17, RW(3) + -31784);
wr64(c, (RW(29) + 112), RD(16));
SET64(7, (s32)rd32(c, (RW(3) + -31784)));
SET64(2, rd8(c, (RW(7) + 0)));
SET64(5, RD(2) & 0xff);
{ int t = RD(5) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00111FFC; }
SET32(2, RW(5) + 15);
SET32(3, RW(0) + -1);
SET32(4, RW(5) + 30);
SET64(3, RSD(3) < RSD(2));
if (RD(3) != 0) SET64(4, RD(2));
SET64(6, RD(7) + RD(0));
SET32(5, RSW(4) >> 4);
wr8(c, (RW(7) + 0), (u8)RW(0));
{ int t = RSD(5) <= 0; SET64(4, RD(5) + RD(0)); if (t) goto L_00111F3C; }
SET64(3, RD(29) + RD(0));
L_00111F20:;
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
SET32(4, RW(4) + -1);
SET32(6, RW(6) + 16);
wr128(c, (RW(3) + 0) & ~15u, &c->r[2]);
SET32(3, RW(3) + 16);
{ int t = RD(4) != RD(0);  if (t) { POLL(); goto L_00111F20; } }
L_00111F3C:;
SET64(31, 0x111f44);  JP_F_0010FA50(c);
SET64(3, (s32)rd32(c, (RW(29) + 8)));
{ int t = RSD(3) >= 0;  if (t) goto L_00111F9C; }
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET64(3, (s64)(s32)0x7fff0000);
SET64(3, RD(3) | 0xffff);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(5, RD(2) & RD(3));
SET64(4, RSD(5) < RSD(4));
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 12); if (t) goto L_00111FF0; }
SET64(3, (s32)rd32(c, (RW(17) + 12)));
mul_s(c, 0, 5, RSW(5), RSW(2));
SET32(2, RW(5) + RW(3));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(6) == RD(0);  if (t) goto L_00111FF0; }
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(16, RD(28) + RD(0));
SET64(28, RD(3) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 12))); goto L_00111FD8;
L_00111F9C:;
SET64(5, (s32)rd32(c, (RW(29) + 8)));
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(2, RSD(5) < RSD(2));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 12); if (t) goto L_00111FF0; }
SET64(3, (s32)rd32(c, (RW(17) + 20)));
mul_s(c, 0, 5, RSW(5), RSW(2));
SET32(2, RW(5) + RW(3));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(6) == RD(0);  if (t) goto L_00111FF0; }
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(16, RD(28) + RD(0));
SET64(28, RD(3) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 20)));
L_00111FD8:;
SET64(4, RD(29) + RD(0));
SET32(2, RW(5) + RW(2));
{ u32 t = RW(6); SET64(31, 0x111fe8); SET64(5, (s32)rd32(c, (RW(2) + 4))); rt_call(c, t); }
SET64(2, RD(28) + RD(0));
SET64(28, RD(16) + RD(0));
L_00111FF0:;
rt_ei(c);
SET64(2, RD(0) + RD(0));
L_00111FFC:;
SET64(31, rd64(c, (RW(29) + 144)));
SET64(17, rd64(c, (RW(29) + 128)));
SET64(16, rd64(c, (RW(29) + 112)));
SET32(29, RW(29) + 160); return;
}

void JP_F_00112010(Ctx *c) { /* func_00112010 */
ENTER(0x112010);
SET64(25, (s64)(s32)0xffff0000);
SET64(25, RD(25) | 0xffc0);
{ int t = RSD(5) <= 0; SET32(10, RW(4) + RW(5)); if (t) goto L_001120B4; }
SET64(8, RD(4) & RD(25));
SET32(10, RW(10) + -1);
SET64(9, RD(10) & RD(25));
SET32(10, RW(9) - RW(8));
SET32(11, RW(10) >> 6);
SET32(11, RW(11) + 1);
SET64(9, RD(11) & 0x7);
{ int t = RD(9) == RD(0); SET32(10, RW(11) >> 3); if (t) goto L_00112060; }
L_00112044:;
SET32(9, RW(9) + -1);
{ int t = RSD(9) > 0; SET32(8, RW(8) + 64); if (t) { POLL(); goto L_00112044; } }
L_00112060:;
{ int t = RD(10) == RD(0); SET32(10, RW(10) + -1); if (t) goto L_001120B4; }
if (0) { L_00112064:; SET32(10, RW(10) + -1); }
{ int t = RSD(10) > 0; SET32(8, RW(8) + 512); if (t) { POLL(); goto L_00112064; } }
L_001120B4:;
 return;
}

void JP_F_001120BC(Ctx *c) { /* func_001120BC */
ENTER(0x1120bc);
 return;
JP_F_001120C0(c); return;
}

void JP_F_001120C0(Ctx *c) { /* func_001120C0 */
ENTER(0x1120c0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
SET64(31, 0x1120d8); wr64(c, (RW(29) + 0), RD(16)); JP_F_001186A0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12432)));
{ int t = RD(2) == RD(0); SET32(17, RW(0) + 1); if (t) goto L_00112100; }
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); { JP_F_001186F8(c); return; }
L_00112100:;
SET64(31, 0x112108); wr32(c, (RW(3) + -12432), RW(17)); JP_F_001186F8(c);
SET64(31, 0x112110);  JP_F_00111960(c);
SET64(31, 0x112118);  JP_F_001186A0(c);
SET64(3, (s64)(s32)0x510000);
SET64(8, (s64)(s32)0x510000);
SET32(18, RW(3) + -31232);
SET64(6, (s64)(s32)0x510000);
SET64(7, (s64)(s32)0x510000);
SET32(16, RW(8) + -25088);
SET32(3, RW(0) + 32);
SET64(2, (s64)(s32)0x20000000);
SET32(6, RW(6) + -29184);
SET32(7, RW(7) + -27136);
SET64(6, RD(6) | RD(2));
SET64(7, RD(7) | RD(2));
wr32(c, (RW(16) + 32), RW(3));
SET64(2, RD(18) | RD(2));
wr32(c, (RW(8) + -25088), RW(17));
SET64(5, (s64)(s32)0x110000);
wr32(c, (RW(16) + 20), RW(6));
SET64(4, (s64)(s32)0x80000000);
wr32(c, (RW(16) + 4), RW(2));
SET32(5, RW(5) + 9152);
wr32(c, (RW(16) + 28), RW(7));
SET64(4, RD(4) | 0x8);
SET64(6, RD(16) + RD(0));
wr32(c, (RW(16) + 8), RW(3));
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 24), RW(3));
SET64(31, 0x11218c); wr32(c, (RW(16) + 36), RW(0)); JP_F_00111C48(c);
SET64(5, (s64)(s32)0x110000);
SET64(4, (s64)(s32)0x80000000);
SET32(5, RW(5) + 10120);
SET64(4, RD(4) | 0x9);
SET64(31, 0x1121a4); SET64(6, RD(16) + RD(0)); JP_F_00111C48(c);
SET64(5, (s64)(s32)0x110000);
SET64(4, (s64)(s32)0x80000000);
SET32(5, RW(5) + 10648);
SET64(4, RD(4) | 0xa);
SET64(31, 0x1121bc); SET64(6, RD(16) + RD(0)); JP_F_00111C48(c);
SET64(5, (s64)(s32)0x110000);
SET64(4, (s64)(s32)0x80000000);
SET32(5, RW(5) + 9424);
SET64(6, RD(16) + RD(0));
SET64(31, 0x1121d4); SET64(4, RD(4) | 0xc); JP_F_00111C48(c);
SET64(31, 0x1121dc);  JP_F_001186F8(c);
SET64(4, (s64)(s32)0x80000000);
SET64(31, 0x1121e8); SET64(4, RD(4) | 0x2); JP_F_0010FA70(c);
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 48))); if (t) goto L_00112248; }
SET32(5, RW(18) + 64);
SET64(4, (s64)(s32)0x80000000);
wr32(c, (RW(5) + 12), RW(17));
SET64(4, RD(4) | 0x2);
SET32(6, RW(0) + 16);
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x112214); SET64(9, RD(0) + RD(0)); JP_F_00111E48(c);
L_00112218:;
SET64(31, 0x112220); SET64(4, RD(0) + RD(0)); JP_F_00111918(c);
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 48))); if (t) { POLL(); goto L_00112218; } }
SET64(4, (s64)(s32)0x80000000);
SET64(18, rd64(c, (RW(29) + 32)));
SET32(5, RW(0) + 1);
SET64(17, rd64(c, (RW(29) + 16)));
SET64(4, RD(4) | 0x2);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); { JP_F_0010FA60(c); return; }
L_00112248:;
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00112260(Ctx *c) { /* func_00112260 */
ENTER(0x112260);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x112270);  JP_F_00111BE0(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + -12432), RW(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00112288(Ctx *c) { /* func_00112288 */
ENTER(0x112288);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x1122a0); SET64(17, RD(4) + RD(0)); JP_F_001186A0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(3, RD(0) + RD(0));
{ int t = RSD(4) <= 0; SET64(16, (s32)rd32(c, (RW(17) + 4))); if (t) goto L_00112310; }
SET32(5, RW(0) + 1);
L_001122B8:;
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(2, RD(2) & 0x1);
if (RD(2) != RD(0)) { SET32(3, RW(3) + 1); goto L_00112304; }
SET32(2, RW(3) << 16);
SET64(2, RD(2) | 0x5);
wr32(c, (RW(16) + 16), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(2) + 1);
{ int t = RD(3) != RD(5); wr32(c, (RW(17) + 0), RW(3)); if (t) goto L_001122F0; }
SET32(2, RW(2) + 2);
SET32(3, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(2));
L_001122F0:;
wr32(c, (RW(16) + 20), RW(16));
SET64(31, 0x1122fc); wr32(c, (RW(16) + 24), RW(3)); JP_F_001186F8(c);
SET64(2, RD(16) + RD(0)); goto L_0011231C;
L_00112304:;
SET64(2, RSD(3) < RSD(4));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 64); if (t) { POLL(); goto L_001122B8; } }
L_00112310:;
SET64(31, 0x112318);  JP_F_001186F8(c);
SET64(2, RD(0) + RD(0));
L_0011231C:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00112330(Ctx *c) { /* func_00112330 */
ENTER(0x112330);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0xfffe);
wr32(c, (RW(4) + 24), RW(0));
SET64(3, RD(3) & RD(2));
wr32(c, (RW(4) + 16), RW(3)); return;
}

void JP_F_00112350(Ctx *c) { /* func_00112350 */
ENTER(0x112350);
SET64(5, (s32)rd32(c, (RW(4) + 36)));
SET64(3, (s32)rd32(c, (RW(4) + 24)));
div_s(c, 0, RSW(5), RSW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x112360); goto L_00112364; }
L_00112364:;
SET64(5, (s32)rd32(c, (RW(4) + 20)));
SET64(2, c->hi.d[0]);
SET32(3, RW(2) + 1);
SET32(2, RW(2) << 6);
wr32(c, (RW(4) + 36), RW(3));
SET32(2, RW(5) + RW(2)); return;
}

void JP_F_00112380(Ctx *c) { /* func_00112380 */
ENTER(0x112380);
SET32(29, RW(29) + -16);
{ int t = RSD(5) < 0; wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0011239C; }
SET64(2, (s32)rd32(c, (RW(4) + 32)));
SET64(2, RSD(5) < RSD(2));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 28))); goto L_001123AC; }
L_0011239C:;
SET64(31, 0x1123a4);  JP_F_00112350(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_001123B8;
L_001123AC:;
SET32(2, RW(5) << 6);
SET32(2, RW(3) + RW(2));
SET64(31, rd64(c, (RW(29) + 0)));
L_001123B8:;
SET32(29, RW(29) + 16); return;
}

void JP_F_001123C0(Ctx *c) { /* func_001123C0 */
ENTER(0x1123c0);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x80000000);
wr64(c, (RW(29) + 32), RD(18));
SET64(2, RD(2) | 0xa);
wr64(c, (RW(29) + 48), RD(31));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(3, (s32)rd32(c, (RW(18) + 32)));
{ int t = RD(3) == RD(2); SET64(2, RD(2) < RD(3)); if (t) goto L_0011240C; }
{ int t = RD(2) != RD(0); SET64(17, (s32)rd32(c, (RW(18) + 28))); if (t) goto L_00112454; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x9);
{ int t = RD(3) == RD(2);  if (t) goto L_00112444; }
SET64(4, (s32)rd32(c, (RW(17) + 8))); goto L_00112458;
L_0011240C:;
SET64(17, (s32)rd32(c, (RW(18) + 28)));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 8))); goto L_00112458; }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(16, RD(28) + RD(0));
SET64(28, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 28)));
{ u32 t = RW(2); SET64(31, 0x112434); SET64(4, (s32)rd32(c, (RW(17) + 32))); rt_call(c, t); }
SET64(3, RD(28) + RD(0));
SET64(28, RD(16) + RD(0));
SET64(17, (s32)rd32(c, (RW(18) + 28))); goto L_00112454;
L_00112444:;
SET64(2, (s32)rd32(c, (RW(18) + 36)));
wr32(c, (RW(17) + 36), RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 40)));
wr32(c, (RW(17) + 20), RW(3));
L_00112454:;
SET64(4, (s32)rd32(c, (RW(17) + 8)));
L_00112458:;
{ int t = RSD(4) < 0;  if (t) goto L_00112468; }
SET64(31, 0x112468);  JP_F_0010F690(c);
L_00112468:;
SET64(31, 0x112470); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_00112330(c);
wr32(c, (RW(17) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00112490(Ctx *c) { /* func_00112490 */
ENTER(0x112490);
SET32(29, RW(29) + -16);
SET64(5, RD(7) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s64)(s32)0x80000000);
SET64(4, RD(4) | 0x8);
SET32(6, RW(0) + 64);
SET64(7, (s32)rd32(c, (RW(5) + 36)));
SET64(8, (s32)rd32(c, (RW(5) + 40)));
SET64(31, 0x1124b8); SET64(9, (s32)rd32(c, (RW(5) + 44))); JP_F_00111E88(c);
SET32(3, RW(0) + 2048);
SET64(31, rd64(c, (RW(29) + 0)));
if (RD(2) != 0) SET64(3, RD(0));
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_001124D0(Ctx *c) { /* func_001124D0 */
ENTER(0x1124d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET64(4, RD(5) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 16)));
SET64(2, RD(5) & 0x4);
{ int t = RD(2) == RD(0);  if (t) goto L_00112508; }
SET64(31, 0x112500); SET32(5, RW(5) >> 16); JP_F_00112380(c);
SET64(16, RD(2) + RD(0)); goto L_00112514;
L_00112508:;
SET64(31, 0x112510);  JP_F_00112350(c);
SET64(16, RD(2) + RD(0));
L_00112514:;
SET64(3, (s32)rd32(c, (RW(17) + 20)));
SET64(2, (s64)(s32)0x80000000);
SET64(5, (s32)rd32(c, (RW(17) + 28)));
SET64(2, RD(2) | 0xc);
wr32(c, (RW(16) + 20), RW(3));
SET64(4, (s64)(s32)0x80000000);
wr32(c, (RW(16) + 28), RW(5));
SET64(4, RD(4) | 0x8);
wr32(c, (RW(16) + 32), RW(2));
SET64(5, RD(16) + RD(0));
SET32(6, RW(0) + 64);
SET64(2, (s32)rd32(c, (RW(17) + 32)));
wr32(c, (RW(16) + 36), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 36)));
wr32(c, (RW(16) + 40), RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 40)));
wr32(c, (RW(16) + 44), RW(2));
SET64(9, (s32)rd32(c, (RW(17) + 40)));
SET64(7, (s32)rd32(c, (RW(17) + 32)));
SET64(31, 0x112568); SET64(8, (s32)rd32(c, (RW(17) + 36))); JP_F_00111E88(c);
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 32))); if (t) goto L_00112590; }
SET64(6, RD(16) + RD(0));
SET64(5, (s64)(s32)0x110000);
SET32(5, RW(5) + 9360);
SET64(17, rd64(c, (RW(29) + 16)));
SET32(4, RW(0) + 2048);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); { JP_F_0011A448(c); return; }
L_00112590:;
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_001125A0(Ctx *c) { /* func_001125A0 */
ENTER(0x1125a0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 48), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 112), RD(21));
wr64(c, (RW(29) + 96), RD(20));
SET64(4, (s64)(s32)0x510000);
wr64(c, (RW(29) + 80), RD(19));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 64), RD(18));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 128), RD(31));
SET64(18, RD(8) + RD(0));
SET64(31, 0x1125e0); SET32(4, RW(4) + -25088); JP_F_00112288(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_001126D4; }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(3, RD(18) & 0x1);
wr32(c, (RW(17) + 0), RW(16));
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(16) + 32), RW(19));
wr32(c, (RW(16) + 36), RW(20));
wr32(c, (RW(16) + 40), RW(21));
wr32(c, (RW(16) + 20), RW(16));
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 28), RW(17)); if (t) goto L_00112698; }
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 4), RW(2));
SET64(31, 0x112628); SET64(4, RD(29) + RD(0)); JP_F_0010F660(c);
{ int t = RSD(2) >= 0; wr32(c, (RW(17) + 8), RW(2)); if (t) goto L_00112640; }
SET64(31, 0x112638); SET64(4, RD(16) + RD(0)); JP_F_00112330(c);
SET32(2, RW(0) + -3); goto L_001126D4;
L_00112640:;
SET64(4, (s64)(s32)0x80000000);
SET64(5, RD(16) + RD(0));
SET64(4, RD(4) | 0xc);
SET32(6, RW(0) + 64);
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x112660); SET64(9, RD(0) + RD(0)); JP_F_00111E48(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00112680; }
SET64(31, 0x112670); SET64(4, RD(16) + RD(0)); JP_F_00112330(c);
SET64(31, 0x112678); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_0010F670(c);
SET32(2, RW(0) + -2); goto L_001126D4;
L_00112680:;
SET64(31, 0x112688); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_0010F6A0(c);
SET64(31, 0x112690); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_0010F670(c);
SET64(2, RD(0) + RD(0)); goto L_001126D4;
L_00112698:;
SET32(2, RW(0) + -1);
SET64(4, (s64)(s32)0x80000000);
wr32(c, (RW(17) + 8), RW(2));
SET64(4, RD(4) | 0xc);
SET64(5, RD(16) + RD(0));
SET32(6, RW(0) + 64);
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x1126c0); SET64(9, RD(0) + RD(0)); JP_F_00111E48(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_001126D4; }
SET64(31, 0x1126d0); SET64(4, RD(16) + RD(0)); JP_F_00112330(c);
SET32(2, RW(0) + -2);
L_001126D4:;
SET64(31, rd64(c, (RW(29) + 128)));
SET64(21, rd64(c, (RW(29) + 112)));
SET64(20, rd64(c, (RW(29) + 96)));
SET64(19, rd64(c, (RW(29) + 80)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(17, rd64(c, (RW(29) + 48)));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 144); return;
}

void JP_F_001126F8(Ctx *c) { /* func_001126F8 */
ENTER(0x1126f8);
SET64(5, (s32)rd32(c, (RW(5) + 40)));
{ int t = RD(5) == RD(0);  if (t) goto L_0011273C; }
SET64(3, (s32)rd32(c, (RW(5) + 8)));
L_00112708:;
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(5) + 20))); goto L_00112734; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
L_00112718:;
if (RD(2) != RD(4)) { SET64(3, (s32)rd32(c, (RW(3) + 56))); goto L_00112728; }
SET64(2, RD(3) + RD(0)); return;
L_00112728:;
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(3) + 0))); { POLL(); goto L_00112718; } }
SET64(5, (s32)rd32(c, (RW(5) + 20)));
L_00112734:;
if (RD(5) != RD(0)) { SET64(3, (s32)rd32(c, (RW(5) + 8))); { POLL(); goto L_00112708; } }
L_0011273C:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00112748(Ctx *c) { /* func_00112748 */
ENTER(0x112748);
SET32(29, RW(29) + -16);
SET64(5, RD(7) + RD(0));
SET64(4, (s64)(s32)0x80000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, RD(4) | 0x8);
SET32(6, RW(0) + 64);
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x112770); SET64(9, RD(0) + RD(0)); JP_F_00111E88(c);
SET32(3, RW(0) + 2048);
SET64(31, rd64(c, (RW(29) + 0)));
if (RD(2) != 0) SET64(3, RD(0));
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00112788(Ctx *c) { /* func_00112788 */
ENTER(0x112788);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(5) + RD(0));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x1127ac); SET64(4, RD(17) + RD(0)); JP_F_00112350(c);
SET64(18, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET64(3, (s32)rd32(c, (RW(16) + 20)));
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x9);
wr32(c, (RW(18) + 28), RW(4));
wr32(c, (RW(18) + 20), RW(3));
SET64(5, RD(17) + RD(0));
wr32(c, (RW(18) + 32), RW(2));
SET64(31, 0x1127d8); SET64(4, (s32)rd32(c, (RW(16) + 32))); JP_F_001126F8(c);
if (RD(2) != RD(0)) { wr32(c, (RW(18) + 36), RW(2)); goto L_001127EC; }
wr32(c, (RW(18) + 36), RW(0));
wr32(c, (RW(18) + 40), RW(0)); goto L_001127F4;
L_001127EC:;
SET64(2, (s32)rd32(c, (RW(2) + 8)));
wr32(c, (RW(18) + 40), RW(2));
L_001127F4:;
SET64(4, (s64)(s32)0x80000000);
SET64(5, RD(18) + RD(0));
SET64(4, RD(4) | 0x8);
SET32(6, RW(0) + 64);
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x112814); SET64(9, RD(0) + RD(0)); JP_F_00111E88(c);
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 48))); if (t) goto L_00112840; }
SET64(6, RD(18) + RD(0));
SET64(5, (s64)(s32)0x110000);
SET32(5, RW(5) + 10056);
SET64(18, rd64(c, (RW(29) + 32)));
SET32(4, RW(0) + 2048);
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); { JP_F_0011A448(c); return; }
L_00112840:;
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00112858(Ctx *c) { /* func_00112858 */
ENTER(0x112858);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(17));
wr64(c, (RW(29) + 80), RD(19));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(18));
SET64(4, (s64)(s32)0x510000);
wr64(c, (RW(29) + 32), RD(16));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 96), RD(31));
SET64(18, RD(6) + RD(0));
wr32(c, (RW(17) + 16), RW(0));
SET32(4, RW(4) + -25088);
SET64(31, 0x112890); wr32(c, (RW(17) + 36), RW(0)); JP_F_00112288(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_0011297C; }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(3, RD(18) & 0x1);
wr32(c, (RW(17) + 0), RW(16));
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(16) + 32), RW(19));
wr32(c, (RW(16) + 20), RW(16));
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 28), RW(17)); if (t) goto L_00112940; }
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 4), RW(2));
SET64(31, 0x1128d0); SET64(4, RD(29) + RD(0)); JP_F_0010F660(c);
{ int t = RSD(2) >= 0; wr32(c, (RW(17) + 8), RW(2)); if (t) goto L_001128E8; }
SET64(31, 0x1128e0); SET64(4, RD(16) + RD(0)); JP_F_00112330(c);
SET32(2, RW(0) + -3); goto L_0011297C;
L_001128E8:;
SET64(4, (s64)(s32)0x80000000);
SET64(5, RD(16) + RD(0));
SET64(4, RD(4) | 0x9);
SET32(6, RW(0) + 64);
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x112908); SET64(9, RD(0) + RD(0)); JP_F_00111E48(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00112928; }
SET64(31, 0x112918); SET64(4, RD(16) + RD(0)); JP_F_00112330(c);
SET64(31, 0x112920); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_0010F670(c);
SET32(2, RW(0) + -2); goto L_0011297C;
L_00112928:;
SET64(31, 0x112930); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_0010F6A0(c);
SET64(31, 0x112938); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_0010F670(c);
SET64(2, RD(0) + RD(0)); goto L_0011297C;
L_00112940:;
SET32(2, RW(0) + -1);
SET64(4, (s64)(s32)0x80000000);
wr32(c, (RW(17) + 8), RW(2));
SET64(4, RD(4) | 0x9);
SET64(5, RD(16) + RD(0));
SET32(6, RW(0) + 64);
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x112968); SET64(9, RD(0) + RD(0)); JP_F_00111E48(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0011297C; }
SET64(31, 0x112978); SET64(4, RD(16) + RD(0)); JP_F_00112330(c);
SET32(2, RW(0) + -2);
L_0011297C:;
SET64(31, rd64(c, (RW(29) + 96)));
SET64(19, rd64(c, (RW(29) + 80)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(17, rd64(c, (RW(29) + 48)));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 112); return;
}

void JP_F_00112998(Ctx *c) { /* func_00112998 */
ENTER(0x112998);
SET64(5, (s32)rd32(c, (RW(4) + 52)));
SET64(6, (s32)rd32(c, (RW(5) + 64)));
SET64(2, (s32)rd32(c, (RW(6) + 12)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(6) + 16))); goto L_001129B4; }
wr32(c, (RW(6) + 12), RW(5)); goto L_001129B8;
L_001129B4:;
wr32(c, (RW(2) + 60), RW(5));
L_001129B8:;
wr32(c, (RW(6) + 16), RW(5));
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET64(3, (s32)rd32(c, (RW(4) + 28)));
wr32(c, (RW(5) + 32), RW(2));
wr32(c, (RW(5) + 28), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 32)));
wr32(c, (RW(5) + 36), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 36)));
wr32(c, (RW(5) + 12), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 40)));
wr32(c, (RW(5) + 40), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 44)));
wr32(c, (RW(5) + 44), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 48)));
wr32(c, (RW(5) + 48), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 16)));
wr32(c, (RW(5) + 52), RW(3));
SET64(4, (s32)rd32(c, (RW(6) + 0)));
{ int t = RSD(4) < 0;  if (t) goto L_00112A1C; }
SET64(2, (s32)rd32(c, (RW(6) + 4)));
{ int t = RD(2) != RD(0);  if (t) goto L_00112A1C; }
 { JP_F_00110510(c); return; }
L_00112A1C:;
 return;
}

void JP_F_00112A28(Ctx *c) { /* func_00112A28 */
ENTER(0x112a28);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 48), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(30));
wr64(c, (RW(29) + 144), RD(23));
SET64(4, (s64)(s32)0x510000);
wr64(c, (RW(29) + 128), RD(22));
SET64(30, RD(6) + RD(0));
wr64(c, (RW(29) + 112), RD(21));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 96), RD(20));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 80), RD(19));
SET64(20, RD(9) + RD(0));
wr64(c, (RW(29) + 64), RD(18));
SET64(19, RD(10) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET64(18, RD(8) + RD(0));
wr64(c, (RW(29) + 176), RD(31));
SET64(23, RD(11) + RD(0));
SET64(31, 0x112a80); SET32(4, RW(4) + -25088); JP_F_00112288(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_00112BEC; }
SET64(2, (s32)rd32(c, (RW(29) + 192)));
SET64(3, (s32)rd32(c, (RW(16) + 24)));
wr32(c, (RW(17) + 32), RW(2));
wr32(c, (RW(17) + 4), RW(3));
wr32(c, (RW(17) + 0), RW(16));
wr32(c, (RW(17) + 28), RW(23));
SET64(2, RD(28) + RD(0));
wr32(c, (RW(17) + 24), RW(2));
SET64(3, RD(30) & 0x2);
wr32(c, (RW(16) + 32), RW(22));
wr32(c, (RW(16) + 36), RW(18));
wr32(c, (RW(16) + 40), RW(20));
wr32(c, (RW(16) + 44), RW(19));
wr32(c, (RW(16) + 20), RW(16));
SET64(2, (s32)rd32(c, (RW(17) + 36)));
wr32(c, (RW(16) + 28), RW(17));
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 52), RW(2)); if (t) goto L_00112B14; }
{ int t = RD(21) != RD(20); SET64(2, RSD(18) < RSD(19)); if (t) goto L_00112AF4; }
SET64(5, RD(19) + RD(0));
SET64(4, RD(21) + RD(0));
SET64(31, 0x112aec); if (RD(2) == 0) SET64(5, RD(18)); JP_F_00112010(c);
SET64(2, RD(30) & 0x1); goto L_00112B18;
L_00112AF4:;
{ int t = RSD(18) <= 0; SET64(4, RD(21) + RD(0)); if (t) goto L_00112B04; }
SET64(31, 0x112b04); SET64(5, RD(18) + RD(0)); JP_F_00112010(c);
L_00112B04:;
{ int t = RSD(19) <= 0; SET64(4, RD(20) + RD(0)); if (t) goto L_00112B14; }
SET64(31, 0x112b14); SET64(5, RD(19) + RD(0)); JP_F_00112010(c);
L_00112B14:;
SET64(2, RD(30) & 0x1);
L_00112B18:;
if (RD(2) == RD(0)) { SET32(19, RW(0) + 1); goto L_00112B6C; }
{ int t = RD(23) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00112B30; }
wr32(c, (RW(16) + 48), RW(0)); goto L_00112B34;
L_00112B30:;
wr32(c, (RW(16) + 48), RW(2));
L_00112B34:;
SET32(2, RW(0) + -1);
SET64(4, (s64)(s32)0x80000000);
SET64(8, (s32)rd32(c, (RW(17) + 20)));
SET64(7, RD(21) + RD(0));
wr32(c, (RW(17) + 8), RW(2));
SET64(9, RD(18) + RD(0));
SET64(4, RD(4) | 0xa);
SET64(5, RD(16) + RD(0));
SET64(31, 0x112b5c); SET32(6, RW(0) + 64); JP_F_00111E48(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00112BEC; }
 goto L_00112BC8;
L_00112B6C:;
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 4), RW(19));
SET64(31, 0x112b7c); SET64(4, RD(29) + RD(0)); JP_F_0010F660(c);
{ int t = RSD(2) >= 0; wr32(c, (RW(17) + 8), RW(2)); if (t) goto L_00112B94; }
SET64(31, 0x112b8c); SET64(4, RD(16) + RD(0)); JP_F_00112330(c);
SET32(2, RW(0) + -3); goto L_00112BEC;
L_00112B94:;
wr32(c, (RW(16) + 48), RW(19));
SET64(4, (s64)(s32)0x80000000);
SET64(7, RD(21) + RD(0));
SET64(9, RD(18) + RD(0));
SET64(8, (s32)rd32(c, (RW(17) + 20)));
SET64(4, RD(4) | 0xa);
SET64(5, RD(16) + RD(0));
SET64(31, 0x112bb8); SET32(6, RW(0) + 64); JP_F_00111E48(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00112BD8; }
SET64(31, 0x112bc8); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_0010F670(c);
L_00112BC8:;
SET64(31, 0x112bd0); SET64(4, RD(16) + RD(0)); JP_F_00112330(c);
SET32(2, RW(0) + -2); goto L_00112BEC;
L_00112BD8:;
SET64(31, 0x112be0); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_0010F6A0(c);
SET64(31, 0x112be8); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_0010F670(c);
SET64(2, RD(0) + RD(0));
L_00112BEC:;
SET64(31, rd64(c, (RW(29) + 176)));
SET64(30, rd64(c, (RW(29) + 160)));
SET64(23, rd64(c, (RW(29) + 144)));
SET64(22, rd64(c, (RW(29) + 128)));
SET64(21, rd64(c, (RW(29) + 112)));
SET64(20, rd64(c, (RW(29) + 96)));
SET64(19, rd64(c, (RW(29) + 80)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(17, rd64(c, (RW(29) + 48)));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 192); return;
}

void JP_F_00112C20(Ctx *c) { /* func_00112C20 */
ENTER(0x112c20);
SET64(5, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(5) == RD(0);  if (t) goto L_00112C4C; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(2, (s32)rd32(c, (RW(5) + 24)));
{ int t = RD(3) != RD(2);  if (t) goto L_00112C4C; }
SET64(2, (s32)rd32(c, (RW(5) + 16)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_00112C54; }
L_00112C4C:;
SET64(2, RD(0) + RD(0)); return;
L_00112C54:;
SET32(2, RW(0) + 1); return;
}

void JP_F_00112C60(Ctx *c) { /* func_00112C60 */
ENTER(0x112c60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x112c7c); SET64(16, RD(5) + RD(0)); JP_F_001186A0(c);
SET64(3, (s64)(s32)0x510000);
wr32(c, (RW(17) + 0), RW(16));
SET32(3, RW(3) + -25088);
wr32(c, (RW(17) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 40)));
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(0));
wr32(c, (RW(17) + 16), RW(0));
{ int t = RD(2) != RD(0); wr32(c, (RW(17) + 20), RW(0)); if (t) goto L_00112CAC; }
wr32(c, (RW(3) + 40), RW(17)); goto L_00112CE0;
L_00112CAC:;
SET64(4, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 20)));
if (RD(3) == RD(0)) { wr32(c, (RW(4) + 20), RW(17)); goto L_00112CE0; }
L_00112CC0:;
SET64(4, RD(3) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET64(3, RD(2) + RD(0));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00112CC0; } }
wr32(c, (RW(4) + 20), RW(17));
L_00112CE0:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); { JP_F_001186F8(c); return; }
}

void JP_F_00112CF8(Ctx *c) { /* func_00112CF8 */
ENTER(0x112cf8);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(22));
wr64(c, (RW(29) + 80), RD(21));
SET64(22, RD(10) + RD(0));
wr64(c, (RW(29) + 64), RD(20));
SET64(21, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(19));
SET64(20, RD(9) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(19, RD(8) + RD(0));
wr64(c, (RW(29) + 16), RD(17));
SET64(18, RD(7) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 112), RD(31));
SET64(31, 0x112d3c); SET64(16, RD(5) + RD(0)); JP_F_001186A0(c);
wr32(c, (RW(21) + 60), RW(0));
wr32(c, (RW(21) + 56), RW(0));
wr32(c, (RW(21) + 0), RW(16));
SET64(2, (s32)rd32(c, (RW(22) + 8)));
wr32(c, (RW(21) + 4), RW(17));
wr32(c, (RW(21) + 8), RW(18));
wr32(c, (RW(21) + 16), RW(19));
wr32(c, (RW(21) + 20), RW(20));
{ int t = RD(2) != RD(0); wr32(c, (RW(21) + 64), RW(22)); if (t) goto L_00112D6C; }
wr32(c, (RW(22) + 8), RW(21)); goto L_00112DA0;
L_00112D6C:;
SET64(4, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 56)));
if (RD(3) == RD(0)) { wr32(c, (RW(4) + 56), RW(21)); goto L_00112DA0; }
L_00112D80:;
SET64(4, RD(3) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 56)));
SET64(3, RD(2) + RD(0));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00112D80; } }
wr32(c, (RW(4) + 56), RW(21));
L_00112DA0:;
SET64(31, rd64(c, (RW(29) + 112)));
SET64(22, rd64(c, (RW(29) + 96)));
SET64(21, rd64(c, (RW(29) + 80)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 128); { JP_F_001186F8(c); return; }
}

void JP_F_00112DC8(Ctx *c) { /* func_00112DC8 */
ENTER(0x112dc8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x112de8); SET64(17, RD(4) + RD(0)); JP_F_001186A0(c);
SET64(16, (s32)rd32(c, (RW(18) + 8)));
{ int t = RD(16) != RD(17);  if (t) goto L_00112E00; }
SET64(2, (s32)rd32(c, (RW(16) + 56)));
wr32(c, (RW(18) + 8), RW(2)); goto L_00112E38;
L_00112E00:;
{ int t = RD(16) == RD(0);  if (t) goto L_00112E38; }
SET64(3, (s32)rd32(c, (RW(16) + 56)));
if (RD(3) == RD(17)) { SET64(2, (s32)rd32(c, (RW(17) + 56))); goto L_00112E34; }
L_00112E18:;
SET64(16, RD(3) + RD(0));
{ int t = RD(16) == RD(0);  if (t) goto L_00112E38; }
SET64(2, (s32)rd32(c, (RW(16) + 56)));
{ int t = RD(2) != RD(17); SET64(3, RD(2) + RD(0)); if (t) { POLL(); goto L_00112E18; } }
SET64(2, (s32)rd32(c, (RW(17) + 56)));
L_00112E34:;
wr32(c, (RW(16) + 56), RW(2));
L_00112E38:;
SET64(31, 0x112e40);  JP_F_001186F8(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00112E60(Ctx *c) { /* func_00112E60 */
ENTER(0x112e60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x112e78); SET64(17, RD(4) + RD(0)); JP_F_001186A0(c);
SET64(3, (s64)(s32)0x510000);
SET32(3, RW(3) + -25088);
SET64(16, (s32)rd32(c, (RW(3) + 40)));
{ int t = RD(16) != RD(17);  if (t) goto L_00112E98; }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
wr32(c, (RW(3) + 40), RW(2)); goto L_00112ED0;
L_00112E98:;
{ int t = RD(16) == RD(0);  if (t) goto L_00112ED0; }
SET64(3, (s32)rd32(c, (RW(16) + 20)));
if (RD(3) == RD(17)) { SET64(2, (s32)rd32(c, (RW(17) + 20))); goto L_00112ECC; }
L_00112EB0:;
SET64(16, RD(3) + RD(0));
{ int t = RD(16) == RD(0);  if (t) goto L_00112ED0; }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
{ int t = RD(2) != RD(17); SET64(3, RD(2) + RD(0)); if (t) { POLL(); goto L_00112EB0; } }
SET64(2, (s32)rd32(c, (RW(17) + 20)));
L_00112ECC:;
wr32(c, (RW(16) + 20), RW(2));
L_00112ED0:;
SET64(31, 0x112ed8);  JP_F_001186F8(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00112EF0(Ctx *c) { /* func_00112EF0 */
ENTER(0x112ef0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x112f08); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
SET64(17, (s32)rd32(c, (RW(16) + 12)));
if (RD(17) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 60))); goto L_00112F1C; }
wr32(c, (RW(16) + 4), RW(0)); goto L_00112F28;
L_00112F1C:;
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 4), RW(2));
wr32(c, (RW(16) + 12), RW(3));
L_00112F28:;
SET64(31, 0x112f30);  JP_F_001186F8(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

static void JP_B_00112F48(Ctx *c, u32 entry) { /* func_00112F48 */
ENTER(entry);
switch (entry) { case 0x113050: goto L_00113050; }
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(20));
wr64(c, (RW(29) + 64), RD(18));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(17));
wr64(c, (RW(29) + 112), RD(31));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 80), RD(19));
wr64(c, (RW(29) + 32), RD(16));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s32)rd32(c, (RW(17) + 36)));
SET64(5, (s32)rd32(c, (RW(17) + 8)));
{ u32 t = RW(2); SET64(31, 0x112f80); SET64(6, (s32)rd32(c, (RW(17) + 12))); rt_call(c, t); }
SET64(18, RD(2) + RD(0));
if (RD(18) != RD(0)) { SET64(20, (s32)rd32(c, (RW(17) + 44))); goto L_00112F8C; }
L_00112F8C:;
SET64(5, (s32)rd32(c, (RW(17) + 12)));
{ int t = RSD(5) <= 0;  if (t) goto L_00112FA0; }
SET64(31, 0x112fa0); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_00112010(c);
L_00112FA0:;
{ int t = RSD(20) <= 0; SET64(4, RD(18) + RD(0)); if (t) goto L_00112FB0; }
SET64(31, 0x112fb0); SET64(5, RD(20) + RD(0)); JP_F_00112010(c);
L_00112FB0:;
SET64(31, 0x112fb8);  JP_F_001186A0(c);
SET64(5, (s32)rd32(c, (RW(17) + 52)));
SET64(2, RD(5) & 0x4);
{ int t = RD(2) == RD(0); SET32(5, RW(5) >> 16); if (t) goto L_00112FDC; }
SET64(4, (s64)(s32)0x510000);
SET64(31, 0x112fd4); SET32(4, RW(4) + -25088); JP_F_00112380(c);
SET64(16, RD(2) + RD(0)); goto L_00112FEC;
L_00112FDC:;
SET64(4, (s64)(s32)0x510000);
SET64(31, 0x112fe8); SET32(4, RW(4) + -25088); JP_F_00112350(c);
SET64(16, RD(2) + RD(0));
L_00112FEC:;
SET64(31, 0x112ff4);  JP_F_001186F8(c);
SET64(3, (s64)(s32)0x80000000);
SET64(4, (s32)rd32(c, (RW(17) + 28)));
SET64(3, RD(3) | 0xa);
wr32(c, (RW(16) + 32), RW(3));
wr32(c, (RW(16) + 28), RW(4));
SET64(2, (s32)rd32(c, (RW(17) + 48)));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 24), RW(0)); goto L_00113048; }
L_00113018:;
SET64(4, (s64)(s32)0x80000000);
SET64(8, (s32)rd32(c, (RW(17) + 40)));
SET64(4, RD(4) | 0x8);
SET64(5, RD(16) + RD(0));
SET32(6, RW(0) + 64);
SET64(7, RD(18) + RD(0));
SET64(31, 0x113038); SET64(9, RD(20) + RD(0)); JP_F_00111E48(c);
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 112))); if (t) { POLL(); goto L_00113018; } }
SET64(20, rd64(c, (RW(29) + 96))); goto L_001130F4;
L_00113048:;
SET64(19, RD(0) + RD(0));
{ int t = RSD(20) <= 0; wr32(c, (RW(16) + 16), RW(0)); if (t) goto L_0011306C; }
if (0) { L_00113050:; wr32(c, (RW(16) + 16), RW(0)); }
SET64(2, (s32)rd32(c, (RW(17) + 40)));
SET32(19, RW(0) + 1);
wr32(c, (RW(29) + 0), RW(18));
wr32(c, (RW(29) + 4), RW(2));
wr32(c, (RW(29) + 8), RW(20));
wr32(c, (RW(29) + 12), RW(0));
L_0011306C:;
SET32(5, RW(19) << 4);
SET64(4, (s32)rd32(c, (RW(17) + 32)));
SET32(3, RW(29) + RW(5));
SET32(2, RW(29) + 4);
wr32(c, (RW(3) + 0), RW(16));
SET32(2, RW(2) + RW(5));
wr32(c, (RW(2) + 0), RW(4));
SET32(3, RW(29) + 8);
SET32(3, RW(3) + RW(5));
SET32(4, RW(0) + 64);
SET32(2, RW(29) + 12);
wr32(c, (RW(3) + 0), RW(4));
SET32(2, RW(2) + RW(5));
SET32(19, RW(19) + 1);
wr32(c, (RW(2) + 0), RW(0));
SET64(4, RD(29) + RD(0));
L_001130B0:;
SET64(31, 0x1130b8); SET64(5, RD(19) + RD(0)); JP_F_0010FA20(c);
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 112))); if (t) goto L_001130F0; }
SET64(3, (s64)(s32)0x100000);
SET32(4, RW(0) + -1);
L_001130C8:;
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(4);  if (t) { POLL(); goto L_001130C8; } }
if (RD(2) == RD(0)) { SET64(4, RD(29) + RD(0)); { POLL(); goto L_001130B0; } }
SET64(31, rd64(c, (RW(29) + 112)));
L_001130F0:;
SET64(20, rd64(c, (RW(29) + 96)));
L_001130F4:;
SET64(19, rd64(c, (RW(29) + 80)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(17, rd64(c, (RW(29) + 48)));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 128); return;
}
void JP_F_00112F48(Ctx *c) { JP_B_00112F48(c, 0x112f48); }
void JP_F_00113050(Ctx *c) { JP_B_00112F48(c, 0x113050); }

void JP_F_00113110(Ctx *c) { /* func_00113110 */
ENTER(0x113110);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(16, RD(4) + RD(0)); goto L_00113130;
L_00113128:;
SET64(31, 0x113130);  JP_F_00112F48(c);
L_00113130:;
SET64(31, 0x113138); SET64(4, RD(16) + RD(0)); JP_F_00112EF0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(2) + RD(0)); if (t) { POLL(); goto L_00113128; } }
SET64(31, 0x113148);  JP_F_0010F580(c);
 { POLL(); goto L_00113130; }
}

void JP_F_00113150(Ctx *c) { /* func_00113150 */
ENTER(0x113150);
SET32(29, RW(29) + -64);
SET32(3, RW(0) + -1);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 48), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + -12280)));
{ int t = RD(2) != RD(3); SET64(31, rd64(c, (RW(29) + 48))); if (t) goto L_001131A0; }
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 4), RW(2));
SET64(4, RD(29) + RD(0));
SET64(31, 0x113188); wr32(c, (RW(29) + 8), RW(2)); JP_F_0010F660(c);
wr32(c, (RW(16) + -12280), RW(2));
SET64(31, 0x113194); SET64(4, RD(29) + RD(0)); JP_F_0010F660(c);
SET64(3, (s64)(s32)0x3e0000);
wr32(c, (RW(3) + -12276), RW(2));
SET64(31, rd64(c, (RW(29) + 48)));
L_001131A0:;
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 64); return;
}

void JP_F_001131B0(Ctx *c) { /* func_001131B0 */
ENTER(0x1131b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x1131c8); SET64(17, (s64)(s32)0x3e0000); JP_F_00113150(c);
SET64(31, 0x1131d0); SET64(4, (s32)rd32(c, (RW(17) + -12280))); JP_F_0010F6A0(c);
SET64(3, (s64)(s32)0x510000);
SET32(16, RW(3) + -19584);
SET32(3, RW(16) + 512);
SET64(2, RD(16) < RD(3));
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x10000000); if (t) goto L_00113218; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
L_001131F0:;
if (RD(2) != RD(0)) { SET32(16, RW(16) + 16); goto L_0011320C; }
SET64(4, (s32)rd32(c, (RW(17) + -12280)));
SET64(31, 0x113204); wr32(c, (RW(16) + 4), RW(5)); JP_F_0010F680(c);
SET64(2, RD(16) + RD(0)); goto L_00113224;
L_0011320C:;
SET64(2, RD(16) < RD(3));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 4))); { POLL(); goto L_001131F0; } }
L_00113218:;
SET64(31, 0x113220); SET64(4, (s32)rd32(c, (RW(17) + -12280))); JP_F_0010F680(c);
SET64(2, RD(0) + RD(0));
L_00113224:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00113238(Ctx *c) { /* func_00113238 */
ENTER(0x113238);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(17));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x113254); SET64(17, (s64)(s32)0x3e0000); JP_F_00113150(c);
SET64(31, 0x11325c); SET64(4, (s32)rd32(c, (RW(17) + -12280))); JP_F_0010F6A0(c);
SET64(3, RD(16) < (u64)(s64)32);
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x510000); if (t) goto L_00113278; }
SET64(31, 0x113270); SET64(4, (s32)rd32(c, (RW(17) + -12280))); JP_F_0010F680(c);
SET64(2, RD(0) + RD(0)); goto L_00113290;
L_00113278:;
SET32(16, RW(16) << 4);
SET32(2, RW(2) + -19584);
SET64(4, (s32)rd32(c, (RW(17) + -12280)));
SET64(31, 0x11328c); SET32(16, RW(16) + RW(2)); JP_F_0010F680(c);
SET64(2, RD(16) + RD(0));
L_00113290:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

static void JP_B_001132A8(Ctx *c, u32 entry) { /* func_001132A8 */
ENTER(entry);
switch (entry) { case 0x113370: goto L_00113370; case 0x113418: goto L_00113418; case 0x1134f4: goto L_001134F4; case 0x113590: goto L_00113590; case 0x1135d8: goto L_001135D8; }
SET64(2, (s64)(s32)0x3e0000);
SET32(29, RW(29) + -64);
SET64(3, (s32)rd32(c, (RW(2) + -12288)));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 32), RD(16)); if (t) goto L_001132C8; }
SET64(5, (s32)rd32(c, (RW(4) + 12)));
L_001132C8:;
SET32(3, RW(0) + 1088);
SET64(2, (s64)(s32)0x3e0000);
mul_s(c, 0, 3, RSW(5), RSW(3));
SET64(4, (s64)(s32)0x510000);
wr32(c, (RW(2) + -12296), RW(5));
SET32(4, RW(4) + -21760);
SET64(5, (s64)(s32)0x20000000);
SET32(3, RW(3) + RW(4));
SET64(16, RD(3) | RD(5));
lwl(c, 2, (RW(16) + 3));
lwr(c, 2, (RW(16) + 0));
swl(c, 2, (RW(29) + 3));
swr(c, 2, (RW(29) + 0));
lwl(c, 6, (RW(16) + 7));
lwr(c, 6, (RW(16) + 4));
swl(c, 6, (RW(29) + 7));
swr(c, 6, (RW(29) + 4));
lwl(c, 3, (RW(16) + 11));
lwr(c, 3, (RW(16) + 8));
swl(c, 3, (RW(29) + 11));
swr(c, 3, (RW(29) + 8));
lwl(c, 7, (RW(16) + 15));
lwr(c, 7, (RW(16) + 12));
swl(c, 7, (RW(29) + 15));
swr(c, 7, (RW(29) + 12));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
{ int t = RSD(2) < 0; SET64(4, (s32)rd32(c, (RW(29) + 8))); if (t) goto L_00113344; }
SET32(5, RW(16) + 16);
SET64(31, 0x113344); SET64(6, (s32)rd32(c, (RW(29) + 12))); JP_F_00127218(c);
L_00113344:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(4, RW(2) + -2);
SET64(3, RD(4) < (u64)(s64)25);
{ int t = RD(3) == RD(0); SET64(2, (s64)(s32)0x420000); if (t) goto L_001135D8; }
SET32(3, RW(4) << 2);
SET32(2, RW(2) + -12368);
SET32(3, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(4);  switch (t) { case 0x113370: goto L_00113370; case 0x113418: goto L_00113418; case 0x1134f4: goto L_001134F4; case 0x113590: goto L_00113590; case 0x1135d8: goto L_001135D8; default: rt_jump(c, t); return; } }
L_00113370:;
SET64(3, (s32)rd32(c, (RW(16) + 20)));
{ int t = RSD(3) <= 0; SET32(7, RW(16) + 20); if (t) goto L_001133C0; }
SET64(8, (s32)rd32(c, (RW(7) + 8)));
SET64(2, (s64)(s32)0x20000000);
SET64(6, RD(0) + RD(0));
{ int t = RSD(3) <= 0; SET64(10, RD(8) | RD(2)); if (t) goto L_001133C0; }
SET32(9, RW(16) + 36);
SET32(2, RW(9) + RW(6));
L_00113398:;
SET32(5, RW(10) + RW(6));
SET64(3, rd8(c, (RW(2) + 0)));
SET32(4, RW(8) + RW(6));
SET32(6, RW(6) + 1);
wr8(c, (RW(5) + 0), (u8)RW(3));
wr8(c, (RW(4) + 0), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(7) + 0)));
SET64(2, RSD(6) < RSD(2));
{ int t = RD(2) != RD(0); SET32(2, RW(9) + RW(6)); if (t) { POLL(); goto L_00113398; } }
L_001133C0:;
SET64(3, (s32)rd32(c, (RW(7) + 4)));
{ int t = RSD(3) <= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_001135D8; }
SET64(8, (s32)rd32(c, (RW(7) + 12)));
SET64(6, RD(0) + RD(0));
{ int t = RSD(3) <= 0; SET64(10, RD(8) | RD(2)); if (t) goto L_001135D8; }
SET32(9, RW(7) + 80);
SET32(2, RW(9) + RW(6));
L_001133E8:;
SET32(5, RW(10) + RW(6));
SET64(3, rd8(c, (RW(2) + 0)));
SET32(4, RW(8) + RW(6));
SET32(6, RW(6) + 1);
wr8(c, (RW(5) + 0), (u8)RW(3));
wr8(c, (RW(4) + 0), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(7) + 4)));
SET64(2, RSD(6) < RSD(2));
{ int t = RD(2) != RD(0); SET32(2, RW(9) + RW(6)); if (t) { POLL(); goto L_001133E8; } }
SET64(4, (s32)rd32(c, (RW(29) + 0))); goto L_001135DC;
L_00113418:;
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RSD(3) <= 0; SET64(4, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_001135DC; }
lwl(c, 4, (RW(16) + 23));
lwr(c, 4, (RW(16) + 20));
swl(c, 4, (RW(29) + 19));
swr(c, 4, (RW(29) + 16));
SET32(4, RW(16) + 24);
SET64(6, (s32)rd32(c, (RW(29) + 16)));
SET64(2, RD(4) | RD(6));
SET64(2, RD(2) & 0x7);
{ int t = RD(2) == RD(0); SET32(2, RW(16) + 344); if (t) goto L_001134AC; }
L_00113450:;
ldl(c, 8, (RW(4) + 7));
ldr(c, 8, (RW(4) + 0));
ldl(c, 3, (RW(4) + 15));
ldr(c, 3, (RW(4) + 8));
ldl(c, 5, (RW(4) + 23));
ldr(c, 5, (RW(4) + 16));
ldl(c, 7, (RW(4) + 31));
ldr(c, 7, (RW(4) + 24));
sdl(c, 8, (RW(6) + 7));
sdr(c, 8, (RW(6) + 0));
sdl(c, 3, (RW(6) + 15));
sdr(c, 3, (RW(6) + 8));
sdl(c, 5, (RW(6) + 23));
sdr(c, 5, (RW(6) + 16));
sdl(c, 7, (RW(6) + 31));
sdr(c, 7, (RW(6) + 24));
SET32(4, RW(4) + 32);
SET32(6, RW(6) + 32);
{ int t = RD(4) != RD(2);  if (t) { POLL(); goto L_00113450; } }
 goto L_001134E0;
L_001134AC:;
SET64(8, rd64(c, (RW(4) + 0)));
SET64(3, rd64(c, (RW(4) + 8)));
SET64(5, rd64(c, (RW(4) + 16)));
SET64(7, rd64(c, (RW(4) + 24)));
wr64(c, (RW(6) + 0), RD(8));
wr64(c, (RW(6) + 8), RD(3));
wr64(c, (RW(6) + 16), RD(5));
wr64(c, (RW(6) + 24), RD(7));
SET32(4, RW(4) + 32);
SET32(6, RW(6) + 32);
{ int t = RD(4) != RD(2);  if (t) { POLL(); goto L_001134AC; } }
L_001134E0:;
lwl(c, 8, (RW(4) + 3));
lwr(c, 8, (RW(4) + 0));
swl(c, 8, (RW(6) + 3));
swr(c, 8, (RW(6) + 0)); goto L_001135D8;
L_001134F4:;
lwl(c, 6, (RW(16) + 23));
lwr(c, 6, (RW(16) + 20));
swl(c, 6, (RW(29) + 19));
swr(c, 6, (RW(29) + 16));
SET64(2, (s32)rd32(c, (RW(29) + 16)));
ldl(c, 3, (RW(16) + 31));
ldr(c, 3, (RW(16) + 24));
ldl(c, 4, (RW(16) + 39));
ldr(c, 4, (RW(16) + 32));
ldl(c, 5, (RW(16) + 47));
ldr(c, 5, (RW(16) + 40));
ldl(c, 6, (RW(16) + 55));
ldr(c, 6, (RW(16) + 48));
sdl(c, 3, (RW(2) + 7));
sdr(c, 3, (RW(2) + 0));
sdl(c, 4, (RW(2) + 15));
sdr(c, 4, (RW(2) + 8));
sdl(c, 5, (RW(2) + 23));
sdr(c, 5, (RW(2) + 16));
sdl(c, 6, (RW(2) + 31));
sdr(c, 6, (RW(2) + 24));
ldl(c, 3, (RW(16) + 63));
ldr(c, 3, (RW(16) + 56));
ldl(c, 4, (RW(16) + 71));
ldr(c, 4, (RW(16) + 64));
ldl(c, 5, (RW(16) + 79));
ldr(c, 5, (RW(16) + 72));
ldl(c, 6, (RW(16) + 87));
ldr(c, 6, (RW(16) + 80));
sdl(c, 3, (RW(2) + 39));
sdr(c, 3, (RW(2) + 32));
sdl(c, 4, (RW(2) + 47));
sdr(c, 4, (RW(2) + 40));
sdl(c, 5, (RW(2) + 55));
sdr(c, 5, (RW(2) + 48));
sdl(c, 6, (RW(2) + 63));
sdr(c, 6, (RW(2) + 56));
SET64(4, (s32)rd32(c, (RW(29) + 0))); goto L_001135DC;
L_00113590:;
lwl(c, 7, (RW(16) + 23));
lwr(c, 7, (RW(16) + 20));
swl(c, 7, (RW(29) + 19));
swr(c, 7, (RW(29) + 16));
lwl(c, 4, (RW(16) + 27));
lwr(c, 4, (RW(16) + 24));
swl(c, 4, (RW(29) + 23));
swr(c, 4, (RW(29) + 20));
SET64(6, (s32)rd32(c, (RW(29) + 20)));
SET64(2, RD(6) < (u64)(s64)1025);
{ int t = RD(2) != RD(0); SET64(4, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_001135D0; }
SET32(2, RW(0) + 1024);
SET32(6, RW(0) + 1024);
wr32(c, (RW(29) + 20), RW(2));
SET64(4, (s32)rd32(c, (RW(29) + 16)));
L_001135D0:;
SET64(31, 0x1135d8); SET32(5, RW(16) + 28); JP_F_00127218(c);
L_001135D8:;
SET64(4, (s32)rd32(c, (RW(29) + 0)));
L_001135DC:;
{ int t = RSD(4) >= 0; SET64(7, (s64)(s32)0x3e0000); if (t) goto L_00113644; }
SET32(2, RW(0) - RW(4));
SET64(3, (s32)rd32(c, (RW(7) + -12424)));
SET64(5, RD(2) + RD(0));
wr32(c, (RW(29) + 0), RW(2));
{ int t = RD(3) != RD(5); SET64(6, RD(0) + RD(0)); if (t) goto L_00113610; }
SET32(2, RW(0) + -1);
wr32(c, (RW(7) + -12424), RW(2));
SET64(31, rd64(c, (RW(29) + 48))); goto L_00113650;
L_00113610:;
SET32(6, RW(6) + 1);
L_00113614:;
SET64(2, RSD(6) < (s64)32);
{ int t = RD(2) == RD(0); SET32(2, RW(7) + -12424); if (t) goto L_0011364C; }
SET32(3, RW(6) << 2);
SET32(3, RW(3) + RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) != RD(5); SET32(6, RW(6) + 1); if (t) { POLL(); goto L_00113614; } }
SET32(2, RW(0) + -1);
wr32(c, (RW(3) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 48))); goto L_00113650;
L_00113644:;
SET64(31, 0x11364c);  JP_F_0010F690(c);
L_0011364C:;
SET64(31, rd64(c, (RW(29) + 48)));
L_00113650:;
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 64); return;
}
void JP_F_001132A8(Ctx *c) { JP_B_001132A8(c, 0x1132a8); }
void JP_F_00113370(Ctx *c) { JP_B_001132A8(c, 0x113370); }
void JP_F_00113418(Ctx *c) { JP_B_001132A8(c, 0x113418); }
void JP_F_001134F4(Ctx *c) { JP_B_001132A8(c, 0x1134f4); }
void JP_F_00113590(Ctx *c) { JP_B_001132A8(c, 0x113590); }
void JP_F_001135D8(Ctx *c) { JP_B_001132A8(c, 0x1135d8); }

void JP_F_00113660(Ctx *c) { /* func_00113660 */
ENTER(0x113660);
SET32(29, RW(29) + -64);
SET32(3, RW(0) + -1);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 48), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + -12284)));
{ int t = RD(2) != RD(3); SET64(31, rd64(c, (RW(29) + 48))); if (t) goto L_001136A0; }
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 4), RW(2));
SET64(4, RD(29) + RD(0));
SET64(31, 0x113698); wr32(c, (RW(29) + 8), RW(2)); JP_F_0010F660(c);
wr32(c, (RW(16) + -12284), RW(2));
SET64(31, rd64(c, (RW(29) + 48)));
L_001136A0:;
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 64); return;
}

void JP_F_001136B0(Ctx *c) { /* func_001136B0 */
ENTER(0x1136b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1136c0);  JP_F_00113660(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(31, 0x1136cc); SET64(4, (s32)rd32(c, (RW(2) + -12284))); JP_F_0010F6A0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_001136E0(Ctx *c) { /* func_001136E0 */
ENTER(0x1136e0);
SET64(2, (s64)(s32)0x3e0000);
SET64(4, (s32)rd32(c, (RW(2) + -12284))); { JP_F_0010F680(c); return; }
}

void JP_F_001136F0(Ctx *c) { /* func_001136F0 */
ENTER(0x1136f0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(19));
wr64(c, (RW(29) + 32), RD(18));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(20));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(4, RW(0) + 27);
wr64(c, (RW(29) + 80), RD(31));
SET64(16, (s64)(s32)0x510000);
wr64(c, (RW(29) + 16), RD(17));
SET64(31, 0x113724); SET32(20, RW(16) + -18944); JP_F_001136B0(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12292)));
{ int t = RD(3) != RD(0);  if (t) goto L_0011373C; }
SET64(31, 0x11373c);  JP_F_001137E0(c);
L_0011373C:;
SET64(31, 0x113744);  JP_F_001186A0(c);
SET64(17, (s32)rd32(c, (RW(16) + -18944)));
SET64(3, (s64)(s32)0x510000);
wr32(c, (RW(20) + 4), RW(18));
wr32(c, (RW(16) + -18944), RW(19));
wr32(c, (RW(3) + -18880), RW(28));
{ int t = RD(2) == RD(0);  if (t) goto L_00113768; }
SET64(31, 0x113768);  JP_F_001186F8(c);
L_00113768:;
SET64(31, 0x113770);  JP_F_001136E0(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 80)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 96); return;
}

void JP_F_00113798(Ctx *c) { /* func_00113798 */
ENTER(0x113798);
SET32(29, RW(29) + -32);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
wr64(c, (RW(29) + 16), RD(31));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 0), RD(16)); if (t) goto L_001137C4; }
SET64(2, (s64)(s32)0x510000);
SET64(16, RD(28) + RD(0));
SET64(28, (s32)rd32(c, (RW(2) + -18880)));
{ u32 t = RW(3); SET64(31, 0x1137c0); SET64(4, (s32)rd32(c, (RW(5) + 4))); rt_call(c, t); }
SET64(28, RD(16) + RD(0));
L_001137C4:;
rt_ei(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001137E0(Ctx *c) { /* func_001137E0 */
ENTER(0x1137e0);
SET32(29, RW(29) + -128);
SET64(4, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET64(16, (s64)(s32)0x510000);
wr64(c, (RW(29) + 48), RD(17));
wr64(c, (RW(29) + 112), RD(31));
SET32(17, RW(16) + -18944);
wr64(c, (RW(29) + 96), RD(20));
wr64(c, (RW(29) + 80), RD(19));
SET64(31, 0x11380c); wr64(c, (RW(29) + 64), RD(18)); JP_F_001120C0(c);
wr32(c, (RW(16) + -18944), RW(0));
SET64(31, 0x113818); wr32(c, (RW(17) + 4), RW(0)); JP_F_001186A0(c);
SET64(5, (s64)(s32)0x110000);
SET64(6, (s64)(s32)0x510000);
SET64(4, (s64)(s32)0x80000000);
SET64(16, RD(2) + RD(0));
SET32(5, RW(5) + 12968);
SET32(6, RW(6) + -19008);
SET64(31, 0x113838); SET64(4, RD(4) | 0x11); JP_F_00111C48(c);
SET64(5, (s64)(s32)0x110000);
SET64(4, (s64)(s32)0x80000000);
SET32(5, RW(5) + 14232);
SET64(6, RD(17) + RD(0));
SET64(31, 0x113850); SET64(4, RD(4) | 0x13); JP_F_00111C48(c);
{ int t = RD(16) == RD(0); SET64(19, (s64)(s32)0x510000); if (t) goto L_0011388C; }
SET64(31, 0x113860); SET32(16, RW(19) + -19072); JP_F_001186F8(c);
 goto L_00113890;
L_00113868:;
SET32(3, RW(0) + -1);
L_00113870:;
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_00113870; } }
L_0011388C:;
SET32(16, RW(19) + -19072);
L_00113890:;
SET64(5, (s64)(s32)0x80000000);
SET64(4, RD(16) + RD(0));
SET64(5, RD(5) | 0x1);
SET64(31, 0x1138a4); SET64(6, RD(0) + RD(0)); JP_F_00112858(c);
{ int t = RSD(2) < 0; SET32(2, RW(0) + -1); if (t) goto L_001139C4; }
SET64(2, (s32)rd32(c, (RW(16) + 36)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x100000); if (t) { POLL(); goto L_00113868; } }
SET64(31, 0x1138c0); SET64(20, (s64)(s32)0x3e0000); JP_F_00113150(c);
SET64(31, 0x1138c8); SET64(4, (s32)rd32(c, (RW(20) + -12280))); JP_F_0010F6A0(c);
SET64(3, (s64)(s32)0x510000);
SET32(3, RW(3) + -19584);
SET32(4, RW(3) + 512);
SET64(2, RD(3) < RD(4));
{ int t = RD(2) == RD(0); SET64(18, (s64)(s32)0x510000); if (t) goto L_0011390C; }
SET64(17, (s64)(s32)0x510000);
SET64(16, (s64)(s32)0x510000);
L_001138E8:;
wr32(c, (RW(3) + 4), RW(0));
SET32(3, RW(3) + 16);
SET64(2, RD(3) < RD(4));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001138E8; } }
SET64(4, (s32)rd32(c, (RW(20) + -12280))); goto L_00113918;
L_0011390C:;
SET64(17, (s64)(s32)0x510000);
SET64(16, (s64)(s32)0x510000);
SET64(4, (s32)rd32(c, (RW(20) + -12280)));
L_00113918:;
SET64(31, 0x113920); SET32(16, RW(16) + -21824); JP_F_0010F680(c);
SET32(3, RW(17) + -21760);
SET32(7, RW(18) + -25024);
wr32(c, (RW(18) + -25024), RW(3));
SET32(4, RW(19) + -19072);
SET32(3, RW(3) + 1088);
SET32(5, RW(0) + 255);
wr32(c, (RW(7) + 4), RW(3));
SET64(6, RD(0) + RD(0));
wr32(c, (RW(29) + 0), RW(0));
SET32(8, RW(0) + 8);
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 8);
SET64(31, 0x113958); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(4, (s64)(s32)0x20000000); if (t) goto L_0011396C; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xffff); goto L_001139C4;
L_0011396C:;
SET32(2, RW(16) + 4);
SET64(3, RD(16) | RD(4));
SET64(2, RD(2) | RD(4));
SET64(5, (s64)(s32)0x510000);
SET32(8, RW(5) + -19032);
lwl(c, 4, (RW(3) + 3));
lwr(c, 4, (RW(3) + 0));
swl(c, 4, (RW(8) + 3));
swr(c, 4, (RW(8) + 0));
lwl(c, 3, (RW(2) + 3));
lwr(c, 3, (RW(2) + 0));
swl(c, 3, (RW(29) + 19));
swr(c, 3, (RW(29) + 16));
SET64(6, (s64)(s32)0x3e0000);
SET64(5, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(29) + 16)));
SET32(4, RW(0) + 1);
wr32(c, (RW(5) + -12292), RW(4));
SET64(2, RD(0) + RD(0));
SET64(3, RD(3) ^ 0x2);
SET64(3, RD(3) < (u64)(s64)1);
wr32(c, (RW(6) + -12288), RW(3));
L_001139C4:;
SET64(31, rd64(c, (RW(29) + 112)));
SET64(20, rd64(c, (RW(29) + 96)));
SET64(19, rd64(c, (RW(29) + 80)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(17, rd64(c, (RW(29) + 48)));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 128); return;
}

void JP_F_001139E8(Ctx *c) { /* func_001139E8 */
ENTER(0x1139e8);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 48), RD(19));
SET64(3, (s64)(s32)0x510000);
wr64(c, (RW(29) + 16), RD(17));
SET32(19, RW(2) + -12468);
wr64(c, (RW(29) + 32), RD(18));
SET32(17, RW(3) + -19032);
wr64(c, (RW(29) + 64), RD(31));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(4, RD(17) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x113a24); SET32(6, RW(0) + 4); JP_F_00127180(c);
{ int t = RD(2) == RD(0); SET64(16, (s64)(s32)0x3e0000); if (t) goto L_00113A54; }
SET64(4, RD(17) + RD(0));
SET64(5, (s32)rd32(c, (RW(16) + -12272)));
SET64(31, 0x113a3c); SET32(6, RW(0) + 4); JP_F_00127180(c);
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(16) + -12272))); if (t) goto L_00113A54; }
SET64(4, RD(19) + RD(0));
SET64(31, 0x113a50); SET32(6, RW(0) + 4); JP_F_00127180(c);
SET64(18, RD(0) < RD(2));
L_00113A54:;
SET64(2, RD(18) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00113A78(Ctx *c) { /* func_00113A78 */
ENTER(0x113a78);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3e0000);
SET64(4, (s64)(s32)0x510000);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(2) + -12292), RW(0));
SET32(4, RW(4) + -19032);
SET64(5, RD(0) + RD(0));
SET64(31, 0x113a9c); SET32(6, RW(0) + 4); JP_F_001273D0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00113AB0(Ctx *c) { /* func_00113AB0 */
ENTER(0x113ab0);
SET32(29, RW(29) + -336);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 176), RD(23));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 192), RD(30));
SET64(23, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(17));
SET64(4, RD(0) + RD(0));
wr64(c, (RW(29) + 208), RD(31));
SET64(30, (s64)(s32)0x510000);
wr64(c, (RW(29) + 160), RD(22));
SET32(17, RW(30) + -24960);
wr64(c, (RW(29) + 144), RD(21));
wr64(c, (RW(29) + 128), RD(20));
wr64(c, (RW(29) + 112), RD(19));
wr64(c, (RW(29) + 96), RD(18));
wr64(c, (RW(29) + 288), RD(6));
wr64(c, (RW(29) + 296), RD(7));
wr64(c, (RW(29) + 304), RD(8));
wr64(c, (RW(29) + 312), RD(9));
wr64(c, (RW(29) + 320), RD(10));
SET64(31, 0x113b0c); wr64(c, (RW(29) + 328), RD(11)); JP_F_001136B0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12292)));
{ int t = RD(2) != RD(0);  if (t) goto L_00113B24; }
SET64(31, 0x113b24);  JP_F_001137E0(c);
L_00113B24:;
SET64(31, 0x113b2c);  JP_F_001139E8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00113B48; }
SET64(31, 0x113b3c);  JP_F_001136E0(c);
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xfffc); goto L_00113D04;
L_00113B48:;
SET64(31, 0x113b50);  JP_F_001131B0(c);
SET64(19, RD(2) + RD(0));
if (RD(19) != RD(0)) { SET64(3, rd8(c, (RW(16) + 0))); goto L_00113B6C; }
SET64(31, 0x113b64);  JP_F_001136E0(c);
SET32(2, RW(0) + -19); goto L_00113D04;
L_00113B6C:;
SET64(5, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(29) + 288)));
SET32(2, RW(3) << 24);
{ int t = RD(2) == RD(0); wr8(c, (RW(17) + 20), (u8)RW(3)); if (t) goto L_00113BC4; }
SET64(6, (s64)(s32)0x510000);
SET32(18, RW(29) + 48);
SET64(22, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
SET32(5, RW(5) + 1);
L_00113B98:;
SET64(2, RSD(5) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(16) + RW(5)); if (t) goto L_00113BD4; }
SET32(4, RW(17) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 20), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00113B98; } }
SET32(2, RW(0) + 1024); goto L_00113BD8;
L_00113BC4:;
SET64(6, (s64)(s32)0x510000);
SET32(18, RW(29) + 48);
SET64(22, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
L_00113BD4:;
SET32(2, RW(0) + 1024);
L_00113BD8:;
if (RD(5) == RD(2)) { wr8(c, (RW(17) + 1043), (u8)RW(0)); goto L_00113BE0; }
L_00113BE0:;
SET32(2, RW(6) + -19584);
SET64(3, (s64)(s32)0x7fff0000);
SET32(2, RW(19) - RW(2));
SET64(3, RD(3) | 0xffff);
SET32(21, RSW(2) >> 4);
SET64(3, RD(23) & RD(3));
wr32(c, (RW(17) + 12), RW(3));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 16), RW(7));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 20), RW(2));
SET32(20, RW(20) + -21824);
wr32(c, (RW(17) + 1044), RW(21));
wr32(c, (RW(29) + 24), RW(0));
SET64(31, 0x113c20); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(16, RD(2) + RD(0));
wr32(c, (RW(17) + 4), RW(18));
SET32(2, RW(0) + 4);
wr32(c, (RW(17) + 0), RW(16));
wr32(c, (RW(17) + 8), RW(2));
SET32(4, RW(22) + -19072);
SET32(7, RW(30) + -24960);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 1048);
SET64(9, RD(20) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x113c5c); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00113C7C; }
SET64(31, 0x113c6c); SET64(4, RD(16) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x113c74);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00113D04;
L_00113C7C:;
SET64(2, RD(20) | RD(2));
SET64(31, 0x113c88); SET64(17, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(17) != RD(0);  if (t) goto L_00113CA0; }
SET64(31, 0x113c98); SET64(4, RD(16) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00113D04;
L_00113CA0:;
SET64(31, 0x113ca8); SET64(4, RD(16) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x113cb0); SET64(4, RD(16) + RD(0)); JP_F_0010F670(c);
SET64(3, (s32)rd32(c, (RW(29) + 48)));
{ int t = RSD(3) >= 0; SET64(16, (s64)(s32)0x3e0000); if (t) goto L_00113CD8; }
SET64(31, 0x113cc4); SET64(4, (s32)rd32(c, (RW(16) + -12280))); JP_F_0010F6A0(c);
wr32(c, (RW(19) + 4), RW(0));
SET64(31, 0x113cd0); SET64(4, (s32)rd32(c, (RW(16) + -12280))); JP_F_0010F680(c);
SET64(2, (s32)rd32(c, (RW(29) + 48))); goto L_00113D04;
L_00113CD8:;
SET64(17, RD(21) + RD(0));
SET64(31, 0x113ce4); SET64(4, (s32)rd32(c, (RW(16) + -12280))); JP_F_0010F6A0(c);
SET64(3, (s32)rd32(c, (RW(19) + 4)));
SET64(2, (s32)rd32(c, (RW(29) + 48)));
SET64(4, (s32)rd32(c, (RW(16) + -12280)));
SET64(3, RD(3) | RD(23));
wr32(c, (RW(19) + 4), RW(3));
SET64(31, 0x113d00); wr32(c, (RW(19) + 0), RW(2)); JP_F_0010F680(c);
SET64(2, RD(17) + RD(0));
L_00113D04:;
SET64(31, rd64(c, (RW(29) + 208)));
SET64(30, rd64(c, (RW(29) + 192)));
SET64(23, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 336); return;
}

void JP_F_00113D38(Ctx *c) { /* func_00113D38 */
ENTER(0x113d38);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 128), RD(20));
wr64(c, (RW(29) + 96), RD(18));
SET64(20, (s64)(s32)0x510000);
wr64(c, (RW(29) + 64), RD(16));
SET32(18, RW(20) + -24960);
wr64(c, (RW(29) + 144), RD(31));
wr64(c, (RW(29) + 112), RD(19));
SET64(31, 0x113d60); wr64(c, (RW(29) + 80), RD(17)); JP_F_00113238(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x113d6c); SET32(4, RW(0) + 1); JP_F_001136B0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12292)));
{ int t = RD(2) != RD(0);  if (t) goto L_00113D8C; }
SET64(31, 0x113d84);  JP_F_001136E0(c);
SET32(2, RW(0) + -1); goto L_00113E94;
L_00113D8C:;
{ int t = RD(16) == RD(0);  if (t) goto L_00113DA0; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_00113DB0; }
L_00113DA0:;
SET64(31, 0x113da8);  JP_F_001136E0(c);
SET32(2, RW(0) + -9); goto L_00113E94;
L_00113DB0:;
SET64(2, (s64)(s32)0x510000);
SET32(2, RW(2) + -19584);
SET32(4, RW(0) + 1);
wr32(c, (RW(18) + 12), RW(3));
SET32(2, RW(16) - RW(2));
wr32(c, (RW(29) + 20), RW(4));
SET32(2, RSW(2) >> 4);
wr32(c, (RW(18) + 16), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 24), RW(0));
SET64(31, 0x113de0); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
SET32(3, RW(29) + 48);
SET64(2, (s64)(s32)0x510000);
wr32(c, (RW(20) + -24960), RW(17));
SET32(19, RW(2) + -21824);
SET64(4, (s64)(s32)0x510000);
SET32(2, RW(0) + 4);
wr32(c, (RW(18) + 4), RW(3));
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(4) + -19072);
SET64(7, RD(18) + RD(0));
SET32(5, RW(0) + 1);
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 20);
SET64(9, RD(19) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x113e2c); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { wr32(c, (RW(16) + 4), RW(0)); goto L_00113E4C; }
SET64(31, 0x113e3c); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x113e44);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00113E94;
L_00113E4C:;
SET64(2, (s64)(s32)0x20000000);
SET64(2, RD(19) | RD(2));
SET64(31, 0x113e5c); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00113E74; }
SET64(31, 0x113e6c); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00113E94;
L_00113E74:;
SET64(31, 0x113e7c); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x113e84); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
SET32(3, RW(0) + -1);
SET64(3, RSD(3) < RSD(2));
if (RD(3) != 0) SET64(2, RD(0));
L_00113E94:;
SET64(31, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 160); return;
}

void JP_F_00113EB8(Ctx *c) { /* func_00113EB8 */
ENTER(0x113eb8);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 128), RD(20));
wr64(c, (RW(29) + 96), RD(18));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 144), RD(21));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(17));
SET64(21, (s64)(s32)0x510000);
wr64(c, (RW(29) + 64), RD(16));
SET32(17, RW(21) + -24960);
wr64(c, (RW(29) + 176), RD(31));
wr64(c, (RW(29) + 160), RD(22));
SET64(31, 0x113ef0); wr64(c, (RW(29) + 112), RD(19)); JP_F_00113238(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x113efc); SET32(4, RW(0) + 4); JP_F_001136B0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12292)));
{ int t = RD(2) != RD(0);  if (t) goto L_00113F1C; }
SET64(31, 0x113f14);  JP_F_001136E0(c);
SET32(2, RW(0) + -1); goto L_001140C8;
L_00113F1C:;
{ int t = RD(16) == RD(0);  if (t) goto L_00113F30; }
SET64(19, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(19) != RD(0); SET64(2, (s64)(s32)0x510000); if (t) goto L_00113F40; }
L_00113F30:;
SET64(31, 0x113f38);  JP_F_001136E0(c);
SET32(2, RW(0) + -9); goto L_001140C8;
L_00113F40:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(2) + -19584);
wr32(c, (RW(17) + 16), RW(18));
SET32(2, RW(16) - RW(2));
wr32(c, (RW(17) + 12), RW(3));
SET32(2, RSW(2) >> 4);
wr32(c, (RW(17) + 20), RW(20));
wr32(c, (RW(17) + 24), RW(2));
SET32(5, RW(0) + 1);
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 20), RW(5));
wr32(c, (RW(29) + 24), RW(0));
SET64(31, 0x113f78); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(18, RD(2) + RD(0));
SET32(3, RW(0) + 4);
SET32(2, RW(29) + 48);
wr32(c, (RW(17) + 8), RW(3));
wr32(c, (RW(17) + 4), RW(2));
SET64(2, RD(19) & 0x8000);
{ int t = RD(2) == RD(0); wr32(c, (RW(21) + -24960), RW(18)); if (t) goto L_00114024; }
SET64(20, (s64)(s32)0x3e0000);
SET64(31, 0x113fa4); SET64(4, (s32)rd32(c, (RW(20) + -12276))); JP_F_0010F6A0(c);
SET64(7, (s64)(s32)0x3e0000);
SET64(6, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(7) + -12424)));
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2); SET64(22, (s64)(s32)0x510000); if (t) goto L_00113FD8; }
SET64(3, (s32)rd32(c, (RW(21) + -24960)));
SET64(16, (s64)(s32)0x510000);
SET32(2, RW(0) - RW(3));
wr32(c, (RW(7) + -12424), RW(3));
wr32(c, (RW(21) + -24960), RW(2)); goto L_00114014;
L_00113FD8:;
SET64(16, (s64)(s32)0x510000);
SET32(6, RW(6) + 1);
L_00113FE0:;
SET64(2, RSD(6) < (s64)32);
{ int t = RD(2) == RD(0); SET32(2, RW(6) << 2); if (t) goto L_00114014; }
SET32(3, RW(7) + -12424);
SET32(5, RW(2) + RW(3));
SET32(4, RW(0) + -1);
SET64(2, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(2) != RD(4); SET32(6, RW(6) + 1); if (t) { POLL(); goto L_00113FE0; } }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(0) - RW(2));
wr32(c, (RW(5) + 0), RW(2));
wr32(c, (RW(17) + 0), RW(3));
L_00114014:;
SET64(31, 0x11401c); SET64(4, (s32)rd32(c, (RW(20) + -12276))); JP_F_0010F680(c);
SET32(16, RW(16) + -21824); goto L_00114030;
L_00114024:;
SET64(22, (s64)(s32)0x510000);
SET64(16, (s64)(s32)0x510000);
SET32(16, RW(16) + -21824);
L_00114030:;
SET32(4, RW(22) + -19072);
SET32(7, RW(21) + -24960);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 4);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 28);
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x114058); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00114078; }
SET64(31, 0x114068); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x114070);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_001140C8;
L_00114078:;
SET64(2, RD(16) | RD(2));
SET64(31, 0x114084); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0); SET64(2, RD(19) & 0x8000); if (t) goto L_0011409C; }
SET64(31, 0x114094); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_001140C8;
L_0011409C:;
{ int t = RD(2) == RD(0);  if (t) goto L_001140B4; }
SET64(31, 0x1140ac); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(2, RD(0) + RD(0)); goto L_001140C8;
L_001140B4:;
SET64(31, 0x1140bc); SET64(4, RD(18) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x1140c4); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_001140C8:;
SET64(31, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 192); return;
}

void JP_F_001140F0(Ctx *c) { /* func_001140F0 */
ENTER(0x1140f0);
SET32(29, RW(29) + -224);
wr64(c, (RW(29) + 176), RD(23));
wr64(c, (RW(29) + 160), RD(22));
SET64(23, RD(6) + RD(0));
wr64(c, (RW(29) + 128), RD(20));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(17));
SET64(20, (s64)(s32)0x510000);
wr64(c, (RW(29) + 64), RD(16));
SET32(17, RW(20) + -24960);
wr64(c, (RW(29) + 208), RD(31));
wr64(c, (RW(29) + 192), RD(30));
wr64(c, (RW(29) + 144), RD(21));
wr64(c, (RW(29) + 112), RD(19));
SET64(31, 0x114130); wr64(c, (RW(29) + 96), RD(18)); JP_F_00113238(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x11413c); SET32(4, RW(0) + 2); JP_F_001136B0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12292)));
{ int t = RD(2) != RD(0);  if (t) goto L_0011415C; }
SET64(31, 0x114154);  JP_F_001136E0(c);
SET32(2, RW(0) + -1); goto L_00114320;
L_0011415C:;
{ int t = RD(16) == RD(0);  if (t) goto L_00114170; }
SET64(19, (s32)rd32(c, (RW(16) + 4)));
if (RD(19) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_00114180; }
L_00114170:;
SET64(31, 0x114178);  JP_F_001136E0(c);
SET32(2, RW(0) + -9); goto L_00114320;
L_00114180:;
SET64(2, (s64)(s32)0x510000);
SET32(2, RW(2) + -19584);
SET32(4, RW(0) + 1);
wr32(c, (RW(17) + 12), RW(3));
SET32(2, RW(16) - RW(2));
wr32(c, (RW(29) + 20), RW(4));
SET32(2, RSW(2) >> 4);
wr32(c, (RW(17) + 28), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(17) + 16), RW(22));
wr32(c, (RW(17) + 20), RW(23));
wr32(c, (RW(29) + 24), RW(0));
SET64(31, 0x1141b8); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(18, RD(2) + RD(0));
SET32(3, RW(0) + 4);
SET32(2, RW(29) + 48);
wr32(c, (RW(17) + 8), RW(3));
wr32(c, (RW(17) + 4), RW(2));
SET64(2, RD(19) & 0x8000);
{ int t = RD(2) == RD(0); wr32(c, (RW(20) + -24960), RW(18)); if (t) goto L_00114258; }
SET64(16, (s64)(s32)0x3e0000);
SET64(31, 0x1141e4); SET64(4, (s32)rd32(c, (RW(16) + -12276))); JP_F_0010F6A0(c);
SET64(7, (s64)(s32)0x3e0000);
SET64(6, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(7) + -12424)));
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2); SET64(30, (s64)(s32)0x510000); if (t) goto L_00114210; }
SET64(3, (s32)rd32(c, (RW(20) + -24960)));
SET32(2, RW(0) - RW(3));
wr32(c, (RW(7) + -12424), RW(3));
wr32(c, (RW(20) + -24960), RW(2)); goto L_00114248;
L_00114210:;
SET32(6, RW(6) + 1);
L_00114214:;
SET64(2, RSD(6) < (s64)32);
{ int t = RD(2) == RD(0); SET32(2, RW(6) << 2); if (t) goto L_00114248; }
SET32(3, RW(7) + -12424);
SET32(5, RW(2) + RW(3));
SET32(4, RW(0) + -1);
SET64(2, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(2) != RD(4); SET32(6, RW(6) + 1); if (t) { POLL(); goto L_00114214; } }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(0) - RW(2));
wr32(c, (RW(5) + 0), RW(2));
wr32(c, (RW(17) + 0), RW(3));
L_00114248:;
SET64(31, 0x114250); SET64(4, (s32)rd32(c, (RW(16) + -12276))); JP_F_0010F680(c);
SET64(21, (s64)(s32)0x20000000); goto L_00114260;
L_00114258:;
SET64(30, (s64)(s32)0x510000);
SET64(21, (s64)(s32)0x20000000);
L_00114260:;
SET64(2, RD(19) & RD(21));
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0011427C; }
SET64(4, RD(22) + RD(0));
SET64(31, 0x114278); SET64(5, RD(23) + RD(0)); JP_F_00112010(c);
SET64(4, RD(17) + RD(0));
L_0011427C:;
SET64(31, 0x114284); SET32(5, RW(0) + 32); JP_F_00112010(c);
SET32(16, RW(30) + -21824);
SET64(2, (s64)(s32)0x510000);
SET32(7, RW(20) + -24960);
SET32(4, RW(2) + -19072);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 2);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 32);
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x1142b4); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, RD(21) | RD(16)); if (t) goto L_001142D4; }
SET64(31, 0x1142c4); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x1142cc);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00114320;
L_001142D4:;
SET64(31, 0x1142dc); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0); SET64(2, RD(19) & 0x8000); if (t) goto L_001142F4; }
SET64(31, 0x1142ec); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00114320;
L_001142F4:;
{ int t = RD(2) == RD(0);  if (t) goto L_0011430C; }
SET64(31, 0x114304); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(2, RD(0) + RD(0)); goto L_00114320;
L_0011430C:;
SET64(31, 0x114314); SET64(4, RD(18) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x11431c); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_00114320:;
SET64(31, rd64(c, (RW(29) + 208)));
SET64(30, rd64(c, (RW(29) + 192)));
SET64(23, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 224); return;
}

void JP_F_00114350(Ctx *c) { /* func_00114350 */
ENTER(0x114350);
SET32(29, RW(29) + -224);
wr64(c, (RW(29) + 144), RD(21));
wr64(c, (RW(29) + 80), RD(17));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 176), RD(23));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET64(23, (s64)(s32)0x510000);
wr64(c, (RW(29) + 64), RD(16));
SET32(18, RW(23) + -24960);
wr64(c, (RW(29) + 208), RD(31));
wr64(c, (RW(29) + 192), RD(30));
wr64(c, (RW(29) + 160), RD(22));
wr64(c, (RW(29) + 128), RD(20));
SET64(31, 0x114390); wr64(c, (RW(29) + 112), RD(19)); JP_F_00113238(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x11439c); SET32(4, RW(0) + 3); JP_F_001136B0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12292)));
{ int t = RD(2) != RD(0);  if (t) goto L_001143BC; }
SET64(31, 0x1143b4);  JP_F_001136E0(c);
SET32(2, RW(0) + -1); goto L_001145E0;
L_001143BC:;
{ int t = RD(16) == RD(0);  if (t) goto L_001143D0; }
SET64(22, (s32)rd32(c, (RW(16) + 4)));
if (RD(22) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_001143E0; }
L_001143D0:;
SET64(31, 0x1143d8);  JP_F_001136E0(c);
SET32(2, RW(0) + -9); goto L_001145E0;
L_001143E0:;
SET64(2, (s64)(s32)0x510000);
SET32(2, RW(2) + -19584);
SET32(4, RW(0) + 1);
wr32(c, (RW(18) + 12), RW(3));
SET32(2, RW(16) - RW(2));
wr32(c, (RW(29) + 20), RW(4));
SET32(2, RSW(2) >> 4);
wr32(c, (RW(18) + 44), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(18) + 20), RW(21));
wr32(c, (RW(18) + 16), RW(17));
wr32(c, (RW(29) + 24), RW(0));
SET64(31, 0x114418); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(20, RD(2) + RD(0));
SET32(3, RW(0) + 4);
SET32(2, RW(29) + 48);
wr32(c, (RW(18) + 8), RW(3));
wr32(c, (RW(18) + 4), RW(2));
SET64(2, RD(22) & 0x8000);
{ int t = RD(2) == RD(0); wr32(c, (RW(23) + -24960), RW(20)); if (t) goto L_001144C4; }
SET64(19, (s64)(s32)0x3e0000);
SET64(31, 0x114444); SET64(4, (s32)rd32(c, (RW(19) + -12276))); JP_F_0010F6A0(c);
SET64(7, (s64)(s32)0x3e0000);
SET64(6, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(7) + -12424)));
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2); SET64(16, RD(17) & 0xf); if (t) goto L_00114478; }
SET64(3, (s32)rd32(c, (RW(23) + -24960)));
SET64(30, (s64)(s32)0x510000);
SET32(2, RW(0) - RW(3));
wr32(c, (RW(7) + -12424), RW(3));
wr32(c, (RW(23) + -24960), RW(2)); goto L_001144B4;
L_00114478:;
SET64(30, (s64)(s32)0x510000);
SET32(6, RW(6) + 1);
L_00114480:;
SET64(2, RSD(6) < (s64)32);
{ int t = RD(2) == RD(0); SET32(2, RW(6) << 2); if (t) goto L_001144B4; }
SET32(3, RW(7) + -12424);
SET32(5, RW(2) + RW(3));
SET32(4, RW(0) + -1);
SET64(2, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(2) != RD(4); SET32(6, RW(6) + 1); if (t) { POLL(); goto L_00114480; } }
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET32(3, RW(0) - RW(2));
wr32(c, (RW(5) + 0), RW(2));
wr32(c, (RW(18) + 0), RW(3));
L_001144B4:;
SET64(31, 0x1144bc); SET64(4, (s32)rd32(c, (RW(19) + -12276))); JP_F_0010F680(c);
 goto L_001144CC;
L_001144C4:;
SET64(16, RD(17) & 0xf);
SET64(30, (s64)(s32)0x510000);
L_001144CC:;
{ int t = RD(16) != RD(0); SET32(2, RW(17) >> 4); if (t) goto L_001144DC; }
SET64(16, RD(0) + RD(0)); goto L_001144E8;
L_001144DC:;
SET32(3, RW(17) + -16);
SET32(2, RW(2) << 4);
SET32(16, RW(2) - RW(3));
L_001144E8:;
SET64(3, RSD(21) < RSD(16));
SET64(19, (s64)(s32)0x20000000);
SET64(2, RD(22) & RD(19));
{ int t = RD(2) != RD(0); if (RD(3) != 0) SET64(16, RD(21)); if (t) goto L_00114508; }
SET64(5, RD(21) + RD(0));
SET64(31, 0x114508); SET64(4, RD(17) + RD(0)); JP_F_00112010(c);
L_00114508:;
SET64(17, RD(17) | RD(19));
wr32(c, (RW(18) + 24), RW(16));
{ int t = RSD(16) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00114540; }
SET32(6, RW(18) + 28);
L_00114520:;
SET32(2, RW(17) + RW(5));
SET32(4, RW(6) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < RSD(16));
wr8(c, (RW(4) + 0), (u8)RW(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00114520; } }
L_00114540:;
SET32(16, RW(30) + -21824);
SET64(2, (s64)(s32)0x510000);
SET32(4, RW(2) + -19072);
SET32(7, RW(23) + -24960);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 3);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 48);
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x114570); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00114590; }
SET64(31, 0x114580); SET64(4, RD(20) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x114588);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_001145E0;
L_00114590:;
SET64(2, RD(16) | RD(2));
SET64(31, 0x11459c); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0); SET64(2, RD(22) & 0x8000); if (t) goto L_001145B4; }
SET64(31, 0x1145ac); SET64(4, RD(20) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_001145E0;
L_001145B4:;
{ int t = RD(2) == RD(0);  if (t) goto L_001145CC; }
SET64(31, 0x1145c4); SET64(4, RD(20) + RD(0)); JP_F_0010F670(c);
SET64(2, RD(0) + RD(0)); goto L_001145E0;
L_001145CC:;
SET64(31, 0x1145d4); SET64(4, RD(20) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x1145dc); SET64(4, RD(20) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_001145E0:;
SET64(31, rd64(c, (RW(29) + 208)));
SET64(30, rd64(c, (RW(29) + 192)));
SET64(23, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 224); return;
}

void JP_F_00114610(Ctx *c) { /* func_00114610 */
ENTER(0x114610);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 96), RD(18));
wr64(c, (RW(29) + 80), RD(17));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 160), RD(22));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 144), RD(21));
SET64(22, (s64)(s32)0x510000);
wr64(c, (RW(29) + 128), RD(20));
SET32(21, RW(0) + 1);
wr64(c, (RW(29) + 112), RD(19));
SET64(20, (s64)(s32)0x510000);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 176), RD(31));
SET64(31, 0x114650); SET32(19, RW(22) + -24960); JP_F_00113238(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x11465c); SET32(4, RW(0) + 5); JP_F_001136B0(c);
SET64(2, (s64)(s32)0x3e0000);
wr32(c, (RW(20) + -25016), RW(18));
SET64(3, (s32)rd32(c, (RW(2) + -12292)));
{ int t = RD(3) != RD(0);  if (t) goto L_00114678; }
SET64(31, 0x114678);  JP_F_001137E0(c);
L_00114678:;
{ int t = RD(16) == RD(0);  if (t) goto L_0011468C; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(0)) { wr32(c, (RW(19) + 1044), RW(0)); goto L_0011469C; }
L_0011468C:;
SET64(31, 0x114694);  JP_F_001136E0(c);
SET32(2, RW(0) + -9); goto L_0011495C;
L_0011469C:;
SET32(2, RW(0) + 2);
{ int t = RD(17) == RD(2); wr32(c, (RW(19) + 1048), RW(0)); if (t) goto L_00114748; }
SET64(2, RSD(17) < (s64)3);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_001146C4; }
if (RD(17) == RD(21)) { SET64(16, (s64)(s32)0x3e0000); goto L_001146D4; }
SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_001147B0;
L_001146C4:;
{ int t = RD(17) == RD(2); SET64(4, (s64)(s32)0x3e0000); if (t) goto L_00114778; }
SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_001147B0;
L_001146D4:;
SET64(31, 0x1146dc); SET64(4, (s32)rd32(c, (RW(16) + -12276))); JP_F_0010F6A0(c);
SET64(5, (s64)(s32)0x3e0000);
SET64(4, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(5) + -12424)));
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 32); if (t) goto L_0011471C; }
SET32(3, RW(5) + -12424);
SET32(5, RW(0) + -1);
SET32(4, RW(4) + 1);
L_00114700:;
SET64(2, RSD(4) < (s64)32);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 4); if (t) goto L_00114718; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
if (RD(2) == RD(5)) { SET32(4, RW(4) + 1); { POLL(); goto L_00114700; } }
L_00114718:;
SET32(2, RW(0) + 32);
L_0011471C:;
{ int t = RD(4) != RD(2); SET64(3, (s32)rd32(c, (RW(20) + -25016))); if (t) goto L_00114730; }
SET64(2, (s32)rd32(c, (RW(20) + -25016)));
wr32(c, (RW(2) + 0), RW(0)); goto L_00114738;
L_00114730:;
SET32(2, RW(0) + 1);
wr32(c, (RW(3) + 0), RW(2));
L_00114738:;
SET64(31, 0x114740); SET64(4, (s32)rd32(c, (RW(16) + -12276))); JP_F_0010F680(c);
 goto L_001147A0;
L_00114748:;
SET64(4, (s64)(s32)0x3e0000);
SET32(5, RW(0) + 1088);
SET64(2, (s32)rd32(c, (RW(4) + -12296)));
SET64(3, (s64)(s32)0x510000);
SET32(3, RW(3) + -21744);
SET64(4, (s64)(s32)0x20000000);
mul_s(c, 0, 2, RSW(2), RSW(5));
SET32(2, RW(2) + RW(3));
SET64(2, RD(2) | RD(4));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(18) + 0), RW(3)); goto L_001147A0;
L_00114778:;
SET32(5, RW(0) + 1088);
SET64(2, (s32)rd32(c, (RW(4) + -12296)));
SET64(3, (s64)(s32)0x510000);
SET32(3, RW(3) + -21744);
SET64(4, (s64)(s32)0x20000000);
mul_s(c, 0, 2, RSW(2), RSW(5));
SET32(2, RW(2) + RW(3));
SET64(2, RD(2) | RD(4));
SET64(3, rd64(c, (RW(2) + 0)));
wr64(c, (RW(18) + 0), RD(3));
L_001147A0:;
SET64(31, 0x1147a8);  JP_F_001136E0(c);
SET64(2, RD(0) + RD(0)); goto L_0011495C;
L_001147B0:;
wr32(c, (RW(19) + 16), RW(17));
{ int t = RD(18) != RD(0); wr32(c, (RW(19) + 12), RW(2)); if (t) goto L_001147D0; }
wr32(c, (RW(19) + 1052), RW(0));
SET32(18, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(17, (s64)(s32)0x510000); goto L_0011489C;
L_001147D0:;
SET64(6, RD(18) + RD(0));
SET32(4, RW(19) + 20);
SET32(3, RW(0) + 1024);
SET64(2, RD(6) | RD(4));
SET64(2, RD(2) & 0x7);
{ int t = RD(2) == RD(0); wr32(c, (RW(19) + 1052), RW(3)); if (t) goto L_00114858; }
SET32(2, RW(6) + 1024);
SET32(18, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(17, (s64)(s32)0x510000);
L_001147FC:;
ldl(c, 3, (RW(6) + 7));
ldr(c, 3, (RW(6) + 0));
ldl(c, 5, (RW(6) + 15));
ldr(c, 5, (RW(6) + 8));
ldl(c, 7, (RW(6) + 23));
ldr(c, 7, (RW(6) + 16));
ldl(c, 8, (RW(6) + 31));
ldr(c, 8, (RW(6) + 24));
sdl(c, 3, (RW(4) + 7));
sdr(c, 3, (RW(4) + 0));
sdl(c, 5, (RW(4) + 15));
sdr(c, 5, (RW(4) + 8));
sdl(c, 7, (RW(4) + 23));
sdr(c, 7, (RW(4) + 16));
sdl(c, 8, (RW(4) + 31));
sdr(c, 8, (RW(4) + 24));
SET32(6, RW(6) + 32);
SET32(4, RW(4) + 32);
{ int t = RD(6) != RD(2);  if (t) { POLL(); goto L_001147FC; } }
SET32(2, RW(0) + 1); goto L_001148A0;
L_00114858:;
SET32(2, RW(6) + 1024);
SET32(18, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(17, (s64)(s32)0x510000);
L_00114868:;
SET64(3, rd64(c, (RW(6) + 0)));
SET64(5, rd64(c, (RW(6) + 8)));
SET64(7, rd64(c, (RW(6) + 16)));
SET64(8, rd64(c, (RW(6) + 24)));
wr64(c, (RW(4) + 0), RD(3));
wr64(c, (RW(4) + 8), RD(5));
wr64(c, (RW(4) + 16), RD(7));
wr64(c, (RW(4) + 24), RD(8));
SET32(6, RW(6) + 32);
SET32(4, RW(4) + 32);
{ int t = RD(6) != RD(2);  if (t) { POLL(); goto L_00114868; } }
L_0011489C:;
SET32(2, RW(0) + 1);
L_001148A0:;
wr32(c, (RW(29) + 24), RW(0));
wr32(c, (RW(29) + 20), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 36), RW(0));
SET64(31, 0x1148b8); SET32(20, RW(17) + -21824); JP_F_0010F660(c);
SET32(16, RW(22) + -24960);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET32(2, RW(0) + 4);
wr32(c, (RW(19) + 4), RW(18));
wr32(c, (RW(19) + 8), RW(2));
SET32(5, RW(0) + 1056);
SET64(31, 0x1148dc); wr32(c, (RW(19) + 0), RW(17)); JP_F_00112010(c);
SET32(4, RW(21) + -19072);
SET64(7, RD(16) + RD(0));
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 5);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 1056);
SET64(9, RD(20) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x114904); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00114924; }
SET64(31, 0x114914); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x11491c);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_0011495C;
L_00114924:;
SET64(2, RD(20) | RD(2));
SET64(31, 0x114930); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00114948; }
SET64(31, 0x114940); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_0011495C;
L_00114948:;
SET64(31, 0x114950); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x114958); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_0011495C:;
SET64(31, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 192); return;
}

void JP_F_00114988(Ctx *c) { /* func_00114988 */
ENTER(0x114988);
SET32(29, RW(29) + -208);
wr64(c, (RW(29) + 176), RD(23));
wr64(c, (RW(29) + 144), RD(21));
SET64(23, RD(8) + RD(0));
wr64(c, (RW(29) + 128), RD(20));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 112), RD(19));
SET64(20, RD(9) + RD(0));
wr64(c, (RW(29) + 64), RD(16));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 160), RD(22));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET64(22, (s64)(s32)0x510000);
wr64(c, (RW(29) + 80), RD(17));
wr64(c, (RW(29) + 192), RD(31));
SET64(31, 0x1149d0); SET32(17, RW(22) + -24960); JP_F_00113238(c);
SET64(18, RD(2) + RD(0));
SET64(31, 0x1149dc); SET32(4, RW(0) + 26); JP_F_001136B0(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12292)));
{ int t = RD(3) != RD(0);  if (t) goto L_001149F4; }
SET64(31, 0x1149f4);  JP_F_001137E0(c);
L_001149F4:;
{ int t = RD(18) == RD(0);  if (t) goto L_00114A08; }
SET64(2, (s32)rd32(c, (RW(18) + 4)));
{ int t = RD(2) != RD(0); SET64(2, RD(19) < (u64)(s64)1025); if (t) goto L_00114A18; }
L_00114A08:;
SET64(31, 0x114a10);  JP_F_001136E0(c);
SET32(2, RW(0) + -9); goto L_00114B38;
L_00114A18:;
{ int t = RD(2) == RD(0); SET64(2, RD(20) < (u64)(s64)1025); if (t) goto L_00114A28; }
{ int t = RD(2) != RD(0);  if (t) goto L_00114A38; }
L_00114A28:;
SET64(31, 0x114a30);  JP_F_001136E0(c);
SET32(2, RW(0) + -22); goto L_00114B38;
L_00114A38:;
{ int t = RD(16) != RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00114A48; }
wr32(c, (RW(17) + 1052), RW(0)); goto L_00114A54;
L_00114A48:;
SET32(4, RW(17) + 20);
SET64(31, 0x114a54); SET64(6, RD(19) + RD(0)); JP_F_00127218(c);
L_00114A54:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET32(3, RW(0) + 1);
wr32(c, (RW(17) + 16), RW(21));
SET32(4, RW(29) + 16);
wr32(c, (RW(17) + 12), RW(2));
SET32(16, RW(22) + -24960);
wr32(c, (RW(17) + 1052), RW(19));
wr32(c, (RW(29) + 20), RW(3));
wr32(c, (RW(29) + 24), RW(0));
SET64(31, 0x114a80); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(18, RD(2) + RD(0));
SET32(3, RW(0) + 4);
SET32(2, RW(29) + 48);
wr32(c, (RW(17) + 1048), RW(20));
wr32(c, (RW(17) + 4), RW(2));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(17) + 8), RW(3));
SET32(5, RW(0) + 1056);
wr32(c, (RW(17) + 1044), RW(23));
SET64(31, 0x114aac); wr32(c, (RW(17) + 0), RW(18)); JP_F_00112010(c);
SET64(2, (s64)(s32)0x510000);
SET64(4, (s64)(s32)0x510000);
SET32(17, RW(2) + -21824);
SET32(4, RW(4) + -19072);
SET64(7, RD(16) + RD(0));
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 26);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 1056);
SET64(9, RD(17) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x114ae0); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00114B00; }
SET64(31, 0x114af0); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x114af8);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00114B38;
L_00114B00:;
SET64(2, RD(17) | RD(2));
SET64(31, 0x114b0c); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00114B24; }
SET64(31, 0x114b1c); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00114B38;
L_00114B24:;
SET64(31, 0x114b2c); SET64(4, RD(18) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x114b34); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_00114B38:;
SET64(31, rd64(c, (RW(29) + 192)));
SET64(23, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 208); return;
}

void JP_F_00114B68(Ctx *c) { /* func_00114B68 */
ENTER(0x114b68);
SET32(29, RW(29) + -208);
wr64(c, (RW(29) + 160), RD(22));
wr64(c, (RW(29) + 80), RD(17));
SET64(22, RD(5) + RD(0));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 176), RD(23));
wr64(c, (RW(29) + 96), RD(18));
SET64(4, RD(22) + RD(0));
wr64(c, (RW(29) + 192), RD(31));
SET64(23, (s64)(s32)0x510000);
wr64(c, (RW(29) + 144), RD(21));
SET32(18, RW(23) + -24960);
wr64(c, (RW(29) + 128), RD(20));
wr64(c, (RW(29) + 112), RD(19));
SET64(31, 0x114ba8); wr64(c, (RW(29) + 64), RD(16)); JP_F_001136B0(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12292)));
if (RD(3) != RD(0)) { SET64(2, rd8(c, (RW(17) + 0))); goto L_00114BC4; }
SET64(31, 0x114bc0);  JP_F_001137E0(c);
SET64(2, rd8(c, (RW(17) + 0)));
L_00114BC4:;
SET64(16, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(18) + 12), (u8)RW(2)); if (t) goto L_00114C14; }
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
SET32(16, RW(16) + 1);
L_00114BE8:;
SET64(2, RSD(16) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(17) + RW(16)); if (t) goto L_00114C20; }
SET32(4, RW(18) + RW(16));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 12), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(16, RW(16) + 1); { POLL(); goto L_00114BE8; } }
SET32(2, RW(0) + 1024); goto L_00114C24;
L_00114C14:;
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
L_00114C20:;
SET32(2, RW(0) + 1024);
L_00114C24:;
{ int t = RD(16) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_00114C34; }
wr8(c, (RW(18) + 1035), (u8)RW(0));
SET32(16, RW(0) + 1023);
L_00114C34:;
wr32(c, (RW(29) + 24), RW(0));
wr32(c, (RW(29) + 20), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 36), RW(0));
SET64(31, 0x114c4c); SET32(20, RW(20) + -21824); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
wr32(c, (RW(18) + 4), RW(19));
SET32(2, RW(0) + 4);
wr32(c, (RW(18) + 0), RW(17));
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(21) + -19072);
SET64(5, RD(22) + RD(0));
SET32(7, RW(23) + -24960);
SET32(8, RW(16) + 13);
SET64(6, RD(0) + RD(0));
wr32(c, (RW(29) + 0), RW(0));
SET64(9, RD(20) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x114c88); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00114CA8; }
SET64(31, 0x114c98); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x114ca0);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00114CE0;
L_00114CA8:;
SET64(2, RD(20) | RD(2));
SET64(31, 0x114cb4); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00114CCC; }
SET64(31, 0x114cc4); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00114CE0;
L_00114CCC:;
SET64(31, 0x114cd4); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x114cdc); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_00114CE0:;
SET64(31, rd64(c, (RW(29) + 192)));
SET64(23, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 208); return;
}

void JP_F_00114D10(Ctx *c) { /* func_00114D10 */
ENTER(0x114d10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x114d20); SET32(5, RW(0) + 6); JP_F_00114B68(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00114D30(Ctx *c) { /* func_00114D30 */
ENTER(0x114d30);
SET32(29, RW(29) + -208);
wr64(c, (RW(29) + 80), RD(17));
wr64(c, (RW(29) + 160), RD(22));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 176), RD(23));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET32(4, RW(0) + 7);
wr64(c, (RW(29) + 192), RD(31));
SET64(23, (s64)(s32)0x510000);
wr64(c, (RW(29) + 144), RD(21));
SET32(18, RW(23) + -24960);
wr64(c, (RW(29) + 128), RD(20));
wr64(c, (RW(29) + 112), RD(19));
SET64(31, 0x114d70); wr64(c, (RW(29) + 64), RD(16)); JP_F_001136B0(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12292)));
if (RD(3) != RD(0)) { SET64(2, rd8(c, (RW(17) + 0))); goto L_00114D8C; }
SET64(31, 0x114d88);  JP_F_001137E0(c);
SET64(2, rd8(c, (RW(17) + 0)));
L_00114D8C:;
SET64(16, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(18) + 16), (u8)RW(2)); if (t) goto L_00114DDC; }
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
SET32(16, RW(16) + 1);
L_00114DB0:;
SET64(2, RSD(16) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(17) + RW(16)); if (t) goto L_00114DE8; }
SET32(4, RW(18) + RW(16));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 16), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(16, RW(16) + 1); { POLL(); goto L_00114DB0; } }
SET32(2, RW(0) + 1024); goto L_00114DEC;
L_00114DDC:;
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
L_00114DE8:;
SET32(2, RW(0) + 1024);
L_00114DEC:;
if (RD(16) != RD(2)) { wr32(c, (RW(18) + 12), RW(22)); goto L_00114E00; }
wr8(c, (RW(18) + 1039), (u8)RW(0));
SET32(16, RW(0) + 1023);
wr32(c, (RW(18) + 12), RW(22));
L_00114E00:;
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 20), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 24), RW(0));
SET32(20, RW(20) + -21824);
SET64(31, 0x114e1c); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
wr32(c, (RW(18) + 4), RW(19));
SET32(2, RW(0) + 4);
wr32(c, (RW(18) + 0), RW(17));
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(21) + -19072);
SET32(7, RW(23) + -24960);
SET32(8, RW(16) + 17);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 7);
SET64(6, RD(0) + RD(0));
SET64(9, RD(20) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x114e58); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00114E78; }
SET64(31, 0x114e68); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x114e70);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00114EB0;
L_00114E78:;
SET64(2, RD(20) | RD(2));
SET64(31, 0x114e84); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00114E9C; }
SET64(31, 0x114e94); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00114EB0;
L_00114E9C:;
SET64(31, 0x114ea4); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x114eac); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_00114EB0:;
SET64(31, rd64(c, (RW(29) + 192)));
SET64(23, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 208); return;
}

void JP_F_00114EE0(Ctx *c) { /* func_00114EE0 */
ENTER(0x114ee0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x114ef0); SET32(5, RW(0) + 8); JP_F_00114B68(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00114F00(Ctx *c) { /* func_00114F00 */
ENTER(0x114f00);
SET32(29, RW(29) + -208);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 160), RD(22));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET64(22, RD(6) + RD(0));
wr64(c, (RW(29) + 80), RD(17));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 176), RD(23));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 112), RD(19));
SET32(4, RW(0) + 14);
wr64(c, (RW(29) + 192), RD(31));
SET64(23, (s64)(s32)0x510000);
wr64(c, (RW(29) + 144), RD(21));
SET32(19, RW(23) + -24960);
SET64(31, 0x114f48); wr64(c, (RW(29) + 128), RD(20)); JP_F_001136B0(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12292)));
if (RD(3) != RD(0)) { SET64(2, rd8(c, (RW(16) + 0))); goto L_00114F64; }
SET64(31, 0x114f60);  JP_F_001137E0(c);
SET64(2, rd8(c, (RW(16) + 0)));
L_00114F64:;
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(19) + 12), (u8)RW(2)); if (t) goto L_00114FAC; }
SET64(7, RSD(17) < (s64)1025);
SET32(5, RW(5) + 1);
L_00114F80:;
SET64(2, RSD(5) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(16) + RW(5)); if (t) goto L_00114FB0; }
SET32(4, RW(19) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 12), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00114F80; } }
SET32(2, RW(0) + 1024); goto L_00114FB4;
L_00114FAC:;
SET64(7, RSD(17) < (s64)1025);
L_00114FB0:;
SET32(2, RW(0) + 1024);
L_00114FB4:;
if (RD(5) == RD(2)) { wr8(c, (RW(19) + 1035), (u8)RW(0)); goto L_00114FBC; }
L_00114FBC:;
if (RD(18) != RD(0)) { SET64(2, rd8(c, (RW(18) + 0))); goto L_00114FCC; }
wr8(c, (RW(19) + 1036), (u8)RW(0)); goto L_00115018;
L_00114FCC:;
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(19) + 1036), (u8)RW(2)); if (t) goto L_0011500C; }
SET32(6, RW(19) + 1036);
SET32(5, RW(5) + 1);
L_00114FE8:;
SET64(2, RSD(5) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(18) + RW(5)); if (t) goto L_0011500C; }
SET32(4, RW(6) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 0), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00114FE8; } }
L_0011500C:;
SET32(2, RW(0) + 1024);
if (RD(5) == RD(2)) { wr8(c, (RW(19) + 2059), (u8)RW(0)); goto L_00115018; }
L_00115018:;
{ int t = RD(7) != RD(0);  if (t) goto L_00115030; }
SET64(31, 0x115028);  JP_F_001136E0(c);
SET32(2, RW(0) + -7); goto L_00115140;
L_00115030:;
{ int t = RSD(17) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00115070; }
SET32(6, RW(19) + 2060);
SET32(18, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
L_00115048:;
SET32(2, RW(22) + RW(5));
SET32(4, RW(6) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < RSD(17));
wr8(c, (RW(4) + 0), (u8)RW(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00115048; } }
wr32(c, (RW(19) + 3084), RW(17)); goto L_00115080;
L_00115070:;
SET32(18, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
wr32(c, (RW(19) + 3084), RW(17));
L_00115080:;
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 20), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 24), RW(0));
SET32(16, RW(23) + -24960);
wr32(c, (RW(29) + 36), RW(0));
SET64(31, 0x1150a0); SET32(20, RW(20) + -21824); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET32(2, RW(0) + 4);
wr32(c, (RW(19) + 4), RW(18));
wr32(c, (RW(19) + 8), RW(2));
SET32(5, RW(0) + 3088);
SET64(31, 0x1150c0); wr32(c, (RW(19) + 0), RW(17)); JP_F_00112010(c);
SET32(4, RW(21) + -19072);
SET64(7, RD(16) + RD(0));
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 14);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 3088);
SET64(9, RD(20) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x1150e8); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00115108; }
SET64(31, 0x1150f8); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x115100);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00115140;
L_00115108:;
SET64(2, RD(20) | RD(2));
SET64(31, 0x115114); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_0011512C; }
SET64(31, 0x115124); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00115140;
L_0011512C:;
SET64(31, 0x115134); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x11513c); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_00115140:;
SET64(31, rd64(c, (RW(29) + 192)));
SET64(23, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 208); return;
}

void JP_F_00115170(Ctx *c) { /* func_00115170 */
ENTER(0x115170);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 80), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 112), RD(19));
wr64(c, (RW(29) + 64), RD(16));
SET32(4, RW(0) + 15);
wr64(c, (RW(29) + 128), RD(31));
SET64(19, (s64)(s32)0x510000);
wr64(c, (RW(29) + 96), RD(18));
SET64(31, 0x11519c); SET32(16, RW(19) + -24960); JP_F_001136B0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12292)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 12), RW(17)); goto L_001151B8; }
SET64(31, 0x1151b4);  JP_F_001137E0(c);
wr32(c, (RW(16) + 12), RW(17));
L_001151B8:;
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 20), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 24), RW(0));
SET64(31, 0x1151d0); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
SET32(3, RW(29) + 48);
SET64(2, (s64)(s32)0x510000);
wr32(c, (RW(19) + -24960), RW(17));
SET32(18, RW(2) + -21824);
SET64(4, (s64)(s32)0x510000);
SET32(2, RW(0) + 4);
wr32(c, (RW(16) + 4), RW(3));
wr32(c, (RW(16) + 8), RW(2));
SET32(4, RW(4) + -19072);
SET64(7, RD(16) + RD(0));
SET32(5, RW(0) + 15);
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 16);
SET64(9, RD(18) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x11521c); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_0011523C; }
SET64(31, 0x11522c); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x115234);  JP_F_001136E0(c);
SET32(2, RW(0) + -1); goto L_00115274;
L_0011523C:;
SET64(2, RD(18) | RD(2));
SET64(31, 0x115248); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00115260; }
SET64(31, 0x115258); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -1); goto L_00115274;
L_00115260:;
SET64(31, 0x115268); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x115270); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_00115274:;
SET64(31, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 144); return;
}

void JP_F_00115290(Ctx *c) { /* func_00115290 */
ENTER(0x115290);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1152a0); SET32(5, RW(0) + 16); JP_F_00114B68(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001152B0(Ctx *c) { /* func_001152B0 */
ENTER(0x1152b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
wr64(c, (RW(29) + 32), RD(18));
SET32(4, RW(0) + 9);
SET64(31, 0x1152d0); wr64(c, (RW(29) + 16), RD(17)); JP_F_001136B0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12292)));
{ int t = RD(2) != RD(0);  if (t) goto L_001152E8; }
SET64(31, 0x1152e8);  JP_F_001137E0(c);
L_001152E8:;
SET64(31, 0x1152f0);  JP_F_001136E0(c);
SET64(31, 0x1152f8);  JP_F_001131B0(c);
SET64(18, RD(2) + RD(0));
{ int t = RD(18) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0011530C; }
SET32(2, RW(0) + -19); goto L_00115360;
L_0011530C:;
SET64(31, 0x115314); SET32(5, RW(0) + 9); JP_F_00114B68(c);
SET64(17, RD(2) + RD(0));
{ int t = RSD(17) >= 0; SET64(16, (s64)(s32)0x3e0000); if (t) goto L_00115334; }
SET64(31, 0x115328); SET64(4, (s32)rd32(c, (RW(16) + -12280))); JP_F_0010F6A0(c);
wr32(c, (RW(18) + 4), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + -12280))); goto L_00115354;
L_00115334:;
SET64(31, 0x11533c); SET64(4, (s32)rd32(c, (RW(16) + -12280))); JP_F_0010F6A0(c);
SET64(3, (s64)(s32)0x510000);
wr32(c, (RW(18) + 0), RW(17));
SET32(3, RW(3) + -19584);
SET64(4, (s32)rd32(c, (RW(16) + -12280)));
SET32(3, RW(18) - RW(3));
SET32(17, RSW(3) >> 4);
L_00115354:;
SET64(31, 0x11535c);  JP_F_0010F680(c);
SET64(2, RD(17) + RD(0));
L_00115360:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00115378(Ctx *c) { /* func_00115378 */
ENTER(0x115378);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 128), RD(20));
wr64(c, (RW(29) + 96), RD(18));
SET64(20, (s64)(s32)0x510000);
wr64(c, (RW(29) + 64), RD(16));
SET32(18, RW(20) + -24960);
wr64(c, (RW(29) + 144), RD(31));
wr64(c, (RW(29) + 112), RD(19));
SET64(31, 0x1153a0); wr64(c, (RW(29) + 80), RD(17)); JP_F_00113238(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x1153ac); SET32(4, RW(0) + 10); JP_F_001136B0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12292)));
{ int t = RD(2) != RD(0);  if (t) goto L_001153CC; }
SET64(31, 0x1153c4);  JP_F_001136E0(c);
SET32(2, RW(0) + -1); goto L_001154C0;
L_001153CC:;
{ int t = RD(16) == RD(0);  if (t) goto L_001153E0; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_001153F0; }
L_001153E0:;
SET64(31, 0x1153e8);  JP_F_001136E0(c);
SET32(2, RW(0) + -9); goto L_001154C0;
L_001153F0:;
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 20), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(29) + 24), RW(0));
SET64(31, 0x11540c); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
SET32(3, RW(29) + 48);
SET64(2, (s64)(s32)0x510000);
wr32(c, (RW(20) + -24960), RW(17));
SET32(19, RW(2) + -21824);
SET64(4, (s64)(s32)0x510000);
SET32(2, RW(0) + 4);
wr32(c, (RW(18) + 4), RW(3));
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(4) + -19072);
SET64(7, RD(18) + RD(0));
SET32(5, RW(0) + 10);
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 20);
SET64(9, RD(19) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x115458); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { wr32(c, (RW(16) + 4), RW(0)); goto L_00115478; }
SET64(31, 0x115468); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x115470);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_001154C0;
L_00115478:;
SET64(2, (s64)(s32)0x20000000);
SET64(2, RD(19) | RD(2));
SET64(31, 0x115488); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_001154A0; }
SET64(31, 0x115498); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_001154C0;
L_001154A0:;
SET64(31, 0x1154a8); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x1154b0); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
SET32(3, RW(0) + -1);
SET64(3, RSD(3) < RSD(2));
if (RD(3) != 0) SET64(2, RD(0));
L_001154C0:;
SET64(31, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 160); return;
}

void JP_F_001154E0(Ctx *c) { /* func_001154E0 */
ENTER(0x1154e0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 80), RD(17));
wr64(c, (RW(29) + 112), RD(19));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET64(19, (s64)(s32)0x510000);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 128), RD(31));
SET64(31, 0x115508); SET32(18, RW(19) + -24960); JP_F_00113238(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x115514); SET32(4, RW(0) + 11); JP_F_001136B0(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12292)));
{ int t = RD(3) != RD(0);  if (t) goto L_00115534; }
SET64(31, 0x11552c);  JP_F_001136E0(c);
SET32(2, RW(0) + -1); goto L_0011561C;
L_00115534:;
{ int t = RD(16) == RD(0);  if (t) goto L_00115548; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_00115558; }
L_00115548:;
SET64(31, 0x115550);  JP_F_001136E0(c);
SET32(2, RW(0) + -9); goto L_0011561C;
L_00115558:;
SET32(3, RW(0) + 1);
wr32(c, (RW(18) + 16), RW(17));
SET32(4, RW(29) + 16);
wr32(c, (RW(18) + 12), RW(2));
wr32(c, (RW(29) + 20), RW(3));
wr32(c, (RW(29) + 24), RW(0));
SET64(31, 0x115578); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
SET32(3, RW(29) + 48);
SET64(2, (s64)(s32)0x510000);
wr32(c, (RW(19) + -24960), RW(17));
SET32(16, RW(2) + -21824);
SET64(4, (s64)(s32)0x510000);
SET32(2, RW(0) + 4);
wr32(c, (RW(18) + 4), RW(3));
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(4) + -19072);
SET64(7, RD(18) + RD(0));
SET32(5, RW(0) + 11);
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 32);
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x1155c4); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_001155E4; }
SET64(31, 0x1155d4); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x1155dc);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_0011561C;
L_001155E4:;
SET64(2, RD(16) | RD(2));
SET64(31, 0x1155f0); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00115608; }
SET64(31, 0x115600); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_0011561C;
L_00115608:;
SET64(31, 0x115610); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x115618); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_0011561C:;
SET64(31, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 144); return;
}

void JP_F_00115638(Ctx *c) { /* func_00115638 */
ENTER(0x115638);
SET32(29, RW(29) + -208);
wr64(c, (RW(29) + 80), RD(17));
wr64(c, (RW(29) + 160), RD(22));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 176), RD(23));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET32(4, RW(0) + 12);
wr64(c, (RW(29) + 192), RD(31));
SET64(23, (s64)(s32)0x510000);
wr64(c, (RW(29) + 144), RD(21));
SET32(18, RW(23) + -24960);
wr64(c, (RW(29) + 128), RD(20));
wr64(c, (RW(29) + 112), RD(19));
SET64(31, 0x115678); wr64(c, (RW(29) + 64), RD(16)); JP_F_001136B0(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12292)));
if (RD(3) != RD(0)) { SET64(2, rd8(c, (RW(17) + 0))); goto L_00115694; }
SET64(31, 0x115690);  JP_F_001137E0(c);
SET64(2, rd8(c, (RW(17) + 0)));
L_00115694:;
SET64(16, RD(0) + RD(0));
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); wr8(c, (RW(18) + 16), (u8)RW(2)); if (t) goto L_001156D8; }
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
L_001156B0:;
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(17) + RW(16)); if (t) goto L_001156E4; }
SET32(4, RW(18) + RW(16));
SET64(3, rd8(c, (RW(2) + 0)));
{ int t = RD(3) != RD(0); wr8(c, (RW(4) + 16), (u8)RW(3)); if (t) { POLL(); goto L_001156B0; } }
SET32(2, RW(0) + 1024); goto L_001156E8;
L_001156D8:;
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
L_001156E4:;
SET32(2, RW(0) + 1024);
L_001156E8:;
if (RD(16) != RD(2)) { wr32(c, (RW(18) + 12), RW(22)); goto L_001156FC; }
wr8(c, (RW(18) + 1039), (u8)RW(0));
SET32(16, RW(0) + 1023);
wr32(c, (RW(18) + 12), RW(22));
L_001156FC:;
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 20), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 24), RW(0));
SET32(20, RW(20) + -21824);
SET64(31, 0x115718); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
wr32(c, (RW(18) + 4), RW(19));
SET32(2, RW(0) + 4);
wr32(c, (RW(18) + 0), RW(17));
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(21) + -19072);
SET32(7, RW(23) + -24960);
SET32(8, RW(16) + 17);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 12);
SET64(6, RD(0) + RD(0));
SET64(9, RD(20) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x115754); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00115774; }
SET64(31, 0x115764); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x11576c);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_001157AC;
L_00115774:;
SET64(2, RD(20) | RD(2));
SET64(31, 0x115780); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00115798; }
SET64(31, 0x115790); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_001157AC;
L_00115798:;
SET64(31, 0x1157a0); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x1157a8); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_001157AC:;
SET64(31, rd64(c, (RW(29) + 192)));
SET64(23, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 208); return;
}

void JP_F_001157D8(Ctx *c) { /* func_001157D8 */
ENTER(0x1157d8);
SET32(29, RW(29) + -224);
wr64(c, (RW(29) + 96), RD(18));
wr64(c, (RW(29) + 176), RD(23));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(16));
SET64(23, RD(6) + RD(0));
wr64(c, (RW(29) + 192), RD(30));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 112), RD(19));
SET32(4, RW(0) + 13);
wr64(c, (RW(29) + 208), RD(31));
SET64(30, (s64)(s32)0x510000);
wr64(c, (RW(29) + 160), RD(22));
SET32(19, RW(30) + -24960);
wr64(c, (RW(29) + 144), RD(21));
wr64(c, (RW(29) + 128), RD(20));
SET64(31, 0x115820); wr64(c, (RW(29) + 80), RD(17)); JP_F_001136B0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12292)));
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(18) + 0))); goto L_0011583C; }
SET64(31, 0x115838);  JP_F_001137E0(c);
SET64(2, rd8(c, (RW(18) + 0)));
L_0011583C:;
SET64(17, RD(0) + RD(0));
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); wr8(c, (RW(19) + 80), (u8)RW(2)); if (t) goto L_00115880; }
SET32(20, RW(29) + 48);
SET64(22, (s64)(s32)0x510000);
SET64(21, (s64)(s32)0x510000);
L_00115858:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(18) + RW(17)); if (t) goto L_0011588C; }
SET32(4, RW(19) + RW(17));
SET64(3, rd8(c, (RW(2) + 0)));
{ int t = RD(3) != RD(0); wr8(c, (RW(4) + 80), (u8)RW(3)); if (t) { POLL(); goto L_00115858; } }
SET32(2, RW(0) + 1024); goto L_00115890;
L_00115880:;
SET32(20, RW(29) + 48);
SET64(22, (s64)(s32)0x510000);
SET64(21, (s64)(s32)0x510000);
L_0011588C:;
SET32(2, RW(0) + 1024);
L_00115890:;
{ int t = RD(17) != RD(2);  if (t) goto L_001158A0; }
wr8(c, (RW(19) + 1103), (u8)RW(0));
SET32(17, RW(0) + 1023);
L_001158A0:;
ldl(c, 3, (RW(16) + 7));
ldr(c, 3, (RW(16) + 0));
ldl(c, 4, (RW(16) + 15));
ldr(c, 4, (RW(16) + 8));
ldl(c, 5, (RW(16) + 23));
ldr(c, 5, (RW(16) + 16));
ldl(c, 6, (RW(16) + 31));
ldr(c, 6, (RW(16) + 24));
sdl(c, 3, (RW(19) + 23));
sdr(c, 3, (RW(19) + 16));
sdl(c, 4, (RW(19) + 31));
sdr(c, 4, (RW(19) + 24));
sdl(c, 5, (RW(19) + 39));
sdr(c, 5, (RW(19) + 32));
sdl(c, 6, (RW(19) + 47));
sdr(c, 6, (RW(19) + 40));
ldl(c, 3, (RW(16) + 39));
ldr(c, 3, (RW(16) + 32));
ldl(c, 4, (RW(16) + 47));
ldr(c, 4, (RW(16) + 40));
ldl(c, 5, (RW(16) + 55));
ldr(c, 5, (RW(16) + 48));
ldl(c, 6, (RW(16) + 63));
ldr(c, 6, (RW(16) + 56));
sdl(c, 3, (RW(19) + 55));
sdr(c, 3, (RW(19) + 48));
sdl(c, 4, (RW(19) + 63));
sdr(c, 4, (RW(19) + 56));
sdl(c, 5, (RW(19) + 71));
sdr(c, 5, (RW(19) + 64));
sdl(c, 6, (RW(19) + 79));
sdr(c, 6, (RW(19) + 72));
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 12), RW(23));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 20), RW(2));
SET32(16, RW(30) + -24960);
wr32(c, (RW(29) + 24), RW(0));
SET32(21, RW(21) + -21824);
SET64(31, 0x115944); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET32(2, RW(0) + 4);
wr32(c, (RW(19) + 4), RW(20));
wr32(c, (RW(19) + 8), RW(2));
SET32(5, RW(0) + 1104);
SET64(31, 0x115964); wr32(c, (RW(19) + 0), RW(18)); JP_F_00112010(c);
SET32(4, RW(22) + -19072);
SET64(7, RD(16) + RD(0));
SET32(8, RW(17) + 81);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 13);
SET64(6, RD(0) + RD(0));
SET64(9, RD(21) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x11598c); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_001159AC; }
SET64(31, 0x11599c); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x1159a4);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_001159E4;
L_001159AC:;
SET64(2, RD(21) | RD(2));
SET64(31, 0x1159b8); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_001159D0; }
SET64(31, 0x1159c8); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_001159E4;
L_001159D0:;
SET64(31, 0x1159d8); SET64(4, RD(18) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x1159e0); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_001159E4:;
SET64(31, rd64(c, (RW(29) + 208)));
SET64(30, rd64(c, (RW(29) + 192)));
SET64(23, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 224); return;
}

void JP_F_00115A18(Ctx *c) { /* func_00115A18 */
ENTER(0x115a18);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 80), RD(17));
wr64(c, (RW(29) + 64), RD(16));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(22));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET32(4, RW(0) + 17);
wr64(c, (RW(29) + 176), RD(31));
SET64(22, (s64)(s32)0x510000);
wr64(c, (RW(29) + 144), RD(21));
SET32(18, RW(22) + -24960);
wr64(c, (RW(29) + 128), RD(20));
SET64(31, 0x115a54); wr64(c, (RW(29) + 112), RD(19)); JP_F_001136B0(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12292)));
if (RD(3) != RD(0)) { SET64(2, rd8(c, (RW(17) + 0))); goto L_00115A70; }
SET64(31, 0x115a6c);  JP_F_001137E0(c);
SET64(2, rd8(c, (RW(17) + 0)));
L_00115A70:;
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(18) + 12), (u8)RW(2)); if (t) goto L_00115ABC; }
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
SET32(5, RW(5) + 1);
L_00115A90:;
SET64(2, RSD(5) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(17) + RW(5)); if (t) goto L_00115AC8; }
SET32(4, RW(18) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 12), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00115A90; } }
SET32(2, RW(0) + 1024); goto L_00115ACC;
L_00115ABC:;
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
L_00115AC8:;
SET32(2, RW(0) + 1024);
L_00115ACC:;
if (RD(5) == RD(2)) { wr8(c, (RW(18) + 1035), (u8)RW(0)); goto L_00115AD4; }
L_00115AD4:;
SET64(2, rd8(c, (RW(16) + 0)));
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(18) + 1036), (u8)RW(2)); if (t) goto L_00115B14; }
SET32(6, RW(18) + 1036);
SET32(5, RW(5) + 1);
L_00115AF0:;
SET64(2, RSD(5) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(16) + RW(5)); if (t) goto L_00115B14; }
SET32(4, RW(6) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 0), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00115AF0; } }
L_00115B14:;
SET32(2, RW(0) + 1024);
if (RD(5) == RD(2)) { wr8(c, (RW(18) + 2059), (u8)RW(0)); goto L_00115B20; }
L_00115B20:;
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 24), RW(0));
wr32(c, (RW(29) + 20), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 36), RW(0));
SET64(31, 0x115b3c); SET32(16, RW(22) + -24960); JP_F_0010F660(c);
SET32(20, RW(20) + -21824);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET32(2, RW(0) + 4);
wr32(c, (RW(18) + 4), RW(19));
wr32(c, (RW(18) + 8), RW(2));
SET32(5, RW(0) + 2060);
SET64(31, 0x115b60); wr32(c, (RW(18) + 0), RW(17)); JP_F_00112010(c);
SET32(4, RW(21) + -19072);
SET64(7, RD(16) + RD(0));
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 17);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 2060);
SET64(9, RD(20) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x115b88); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00115BA8; }
SET64(31, 0x115b98); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x115ba0);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00115BE0;
L_00115BA8:;
SET64(2, RD(20) | RD(2));
SET64(31, 0x115bb4); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00115BCC; }
SET64(31, 0x115bc4); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00115BE0;
L_00115BCC:;
SET64(31, 0x115bd4); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x115bdc); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_00115BE0:;
SET64(31, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 192); return;
}

void JP_F_00115C08(Ctx *c) { /* func_00115C08 */
ENTER(0x115c08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x115c18); SET32(5, RW(0) + 18); JP_F_00114B68(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00115C28(Ctx *c) { /* func_00115C28 */
ENTER(0x115c28);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 80), RD(17));
wr64(c, (RW(29) + 144), RD(21));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(22));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 64), RD(16));
SET32(4, RW(0) + 19);
wr64(c, (RW(29) + 176), RD(31));
SET64(22, (s64)(s32)0x510000);
wr64(c, (RW(29) + 128), RD(20));
SET32(16, RW(22) + -24960);
wr64(c, (RW(29) + 112), RD(19));
SET64(31, 0x115c64); wr64(c, (RW(29) + 96), RD(18)); JP_F_001136B0(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12292)));
if (RD(3) != RD(0)) { SET64(2, rd8(c, (RW(17) + 0))); goto L_00115C80; }
SET64(31, 0x115c7c);  JP_F_001137E0(c);
SET64(2, rd8(c, (RW(17) + 0)));
L_00115C80:;
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(16) + 20), (u8)RW(2)); if (t) goto L_00115CCC; }
SET32(18, RW(29) + 48);
SET64(20, (s64)(s32)0x510000);
SET64(19, (s64)(s32)0x510000);
SET32(5, RW(5) + 1);
L_00115CA0:;
SET64(2, RSD(5) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(17) + RW(5)); if (t) goto L_00115CD8; }
SET32(4, RW(16) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 20), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00115CA0; } }
SET32(2, RW(0) + 1024); goto L_00115CDC;
L_00115CCC:;
SET32(18, RW(29) + 48);
SET64(20, (s64)(s32)0x510000);
SET64(19, (s64)(s32)0x510000);
L_00115CD8:;
SET32(2, RW(0) + 1024);
L_00115CDC:;
if (RD(5) == RD(2)) { wr8(c, (RW(16) + 1043), (u8)RW(0)); goto L_00115CE4; }
L_00115CE4:;
wr32(c, (RW(16) + 16), RW(21));
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 20), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 24), RW(0));
SET32(19, RW(19) + -21824);
SET64(31, 0x115d04); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
wr32(c, (RW(16) + 4), RW(18));
SET32(2, RW(0) + 4);
wr32(c, (RW(16) + 0), RW(17));
wr32(c, (RW(16) + 8), RW(2));
SET32(4, RW(20) + -19072);
SET32(7, RW(22) + -24960);
SET32(5, RW(0) + 19);
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 1044);
SET64(9, RD(19) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x115d40); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00115D60; }
SET64(31, 0x115d50); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x115d58);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00115D98;
L_00115D60:;
SET64(2, RD(19) | RD(2));
SET64(31, 0x115d6c); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00115D84; }
SET64(31, 0x115d7c); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00115D98;
L_00115D84:;
SET64(31, 0x115d8c); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x115d94); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_00115D98:;
SET64(31, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 192); return;
}

void JP_F_00115DC0(Ctx *c) { /* func_00115DC0 */
ENTER(0x115dc0);
SET32(29, RW(29) + -224);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 176), RD(23));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(22));
SET64(23, RD(6) + RD(0));
wr64(c, (RW(29) + 112), RD(19));
SET64(22, RD(7) + RD(0));
wr64(c, (RW(29) + 80), RD(17));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 192), RD(30));
SET64(17, RD(8) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET32(4, RW(0) + 20);
wr64(c, (RW(29) + 208), RD(31));
SET64(30, (s64)(s32)0x510000);
wr64(c, (RW(29) + 144), RD(21));
SET32(18, RW(30) + -24960);
SET64(31, 0x115e10); wr64(c, (RW(29) + 128), RD(20)); JP_F_001136B0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12292)));
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(16) + 0))); goto L_00115E2C; }
SET64(31, 0x115e28);  JP_F_001137E0(c);
SET64(2, rd8(c, (RW(16) + 0)));
L_00115E2C:;
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(18) + 12), (u8)RW(2)); if (t) goto L_00115E74; }
SET64(7, RSD(17) < (s64)1025);
SET32(5, RW(5) + 1);
L_00115E48:;
SET64(2, RSD(5) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(16) + RW(5)); if (t) goto L_00115E78; }
SET32(4, RW(18) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 12), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00115E48; } }
SET32(2, RW(0) + 1024); goto L_00115E7C;
L_00115E74:;
SET64(7, RSD(17) < (s64)1025);
L_00115E78:;
SET32(2, RW(0) + 1024);
L_00115E7C:;
if (RD(5) == RD(2)) { wr8(c, (RW(18) + 1035), (u8)RW(0)); goto L_00115E84; }
L_00115E84:;
SET64(2, rd8(c, (RW(19) + 0)));
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(18) + 1036), (u8)RW(2)); if (t) goto L_00115EC4; }
SET32(6, RW(18) + 1036);
SET32(5, RW(5) + 1);
L_00115EA0:;
SET64(2, RSD(5) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(19) + RW(5)); if (t) goto L_00115EC4; }
SET32(4, RW(6) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 0), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00115EA0; } }
L_00115EC4:;
SET32(2, RW(0) + 1024);
if (RD(5) == RD(2)) { wr8(c, (RW(18) + 2059), (u8)RW(0)); goto L_00115ED0; }
L_00115ED0:;
{ int t = RD(7) != RD(0);  if (t) goto L_00115EE8; }
SET64(31, 0x115ee0);  JP_F_001136E0(c);
SET32(2, RW(0) + -7); goto L_00115FFC;
L_00115EE8:;
{ int t = RSD(17) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00115F28; }
SET32(6, RW(18) + 2060);
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
L_00115F00:;
SET32(2, RW(22) + RW(5));
SET32(4, RW(6) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < RSD(17));
wr8(c, (RW(4) + 0), (u8)RW(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00115F00; } }
wr32(c, (RW(18) + 3088), RW(17)); goto L_00115F38;
L_00115F28:;
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
wr32(c, (RW(18) + 3088), RW(17));
L_00115F38:;
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 3084), RW(23));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 20), RW(2));
SET32(16, RW(30) + -24960);
wr32(c, (RW(29) + 24), RW(0));
SET32(20, RW(20) + -21824);
SET64(31, 0x115f5c); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET32(2, RW(0) + 4);
wr32(c, (RW(18) + 4), RW(19));
wr32(c, (RW(18) + 8), RW(2));
SET32(5, RW(0) + 3092);
SET64(31, 0x115f7c); wr32(c, (RW(18) + 0), RW(17)); JP_F_00112010(c);
SET32(4, RW(21) + -19072);
SET64(7, RD(16) + RD(0));
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 20);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 3092);
SET64(9, RD(20) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x115fa4); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00115FC4; }
SET64(31, 0x115fb4); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x115fbc);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00115FFC;
L_00115FC4:;
SET64(2, RD(20) | RD(2));
SET64(31, 0x115fd0); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00115FE8; }
SET64(31, 0x115fe0); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00115FFC;
L_00115FE8:;
SET64(31, 0x115ff0); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x115ff8); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_00115FFC:;
SET64(31, rd64(c, (RW(29) + 208)));
SET64(30, rd64(c, (RW(29) + 192)));
SET64(23, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 224); return;
}

void JP_F_00116030(Ctx *c) { /* func_00116030 */
ENTER(0x116030);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x116040); SET32(5, RW(0) + 21); JP_F_00114B68(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00116050(Ctx *c) { /* func_00116050 */
ENTER(0x116050);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 128), RD(20));
wr64(c, (RW(29) + 96), RD(18));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 144), RD(21));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(17));
SET64(21, (s64)(s32)0x510000);
wr64(c, (RW(29) + 64), RD(16));
SET32(17, RW(21) + -24960);
wr64(c, (RW(29) + 176), RD(31));
wr64(c, (RW(29) + 160), RD(22));
SET64(31, 0x116088); wr64(c, (RW(29) + 112), RD(19)); JP_F_00113238(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x116094); SET32(4, RW(0) + 22); JP_F_001136B0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12292)));
{ int t = RD(2) != RD(0);  if (t) goto L_001160B4; }
SET64(31, 0x1160ac);  JP_F_001136E0(c);
SET32(2, RW(0) + -1); goto L_00116260;
L_001160B4:;
{ int t = RD(16) == RD(0);  if (t) goto L_001160C8; }
SET64(19, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(19) != RD(0); SET64(2, (s64)(s32)0x510000); if (t) goto L_001160D8; }
L_001160C8:;
SET64(31, 0x1160d0);  JP_F_001136E0(c);
SET32(2, RW(0) + -9); goto L_00116260;
L_001160D8:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(2) + -19584);
wr64(c, (RW(17) + 16), RD(18));
SET32(2, RW(16) - RW(2));
wr32(c, (RW(17) + 12), RW(3));
SET32(2, RSW(2) >> 4);
wr32(c, (RW(17) + 24), RW(20));
wr32(c, (RW(17) + 28), RW(2));
SET32(5, RW(0) + 1);
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 20), RW(5));
wr32(c, (RW(29) + 24), RW(0));
SET64(31, 0x116110); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(18, RD(2) + RD(0));
SET32(3, RW(0) + 8);
SET32(2, RW(29) + 48);
wr32(c, (RW(17) + 8), RW(3));
wr32(c, (RW(17) + 4), RW(2));
SET64(2, RD(19) & 0x8000);
{ int t = RD(2) == RD(0); wr32(c, (RW(21) + -24960), RW(18)); if (t) goto L_001161BC; }
SET64(20, (s64)(s32)0x3e0000);
SET64(31, 0x11613c); SET64(4, (s32)rd32(c, (RW(20) + -12276))); JP_F_0010F6A0(c);
SET64(7, (s64)(s32)0x3e0000);
SET64(6, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(7) + -12424)));
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2); SET64(22, (s64)(s32)0x510000); if (t) goto L_00116170; }
SET64(3, (s32)rd32(c, (RW(21) + -24960)));
SET64(16, (s64)(s32)0x510000);
SET32(2, RW(0) - RW(3));
wr32(c, (RW(7) + -12424), RW(3));
wr32(c, (RW(21) + -24960), RW(2)); goto L_001161AC;
L_00116170:;
SET64(16, (s64)(s32)0x510000);
SET32(6, RW(6) + 1);
L_00116178:;
SET64(2, RSD(6) < (s64)32);
{ int t = RD(2) == RD(0); SET32(2, RW(6) << 2); if (t) goto L_001161AC; }
SET32(3, RW(7) + -12424);
SET32(5, RW(2) + RW(3));
SET32(4, RW(0) + -1);
SET64(2, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(2) != RD(4); SET32(6, RW(6) + 1); if (t) { POLL(); goto L_00116178; } }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(0) - RW(2));
wr32(c, (RW(5) + 0), RW(2));
wr32(c, (RW(17) + 0), RW(3));
L_001161AC:;
SET64(31, 0x1161b4); SET64(4, (s32)rd32(c, (RW(20) + -12276))); JP_F_0010F680(c);
SET32(16, RW(16) + -21824); goto L_001161C8;
L_001161BC:;
SET64(22, (s64)(s32)0x510000);
SET64(16, (s64)(s32)0x510000);
SET32(16, RW(16) + -21824);
L_001161C8:;
SET32(4, RW(22) + -19072);
SET32(7, RW(21) + -24960);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 22);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 32);
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x1161f0); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00116210; }
SET64(31, 0x116200); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x116208);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00116260;
L_00116210:;
SET64(2, RD(16) | RD(2));
SET64(31, 0x11621c); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0); SET64(2, RD(19) & 0x8000); if (t) goto L_00116234; }
SET64(31, 0x11622c); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00116260;
L_00116234:;
{ int t = RD(2) == RD(0);  if (t) goto L_0011624C; }
SET64(31, 0x116244); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(2, RD(0) + RD(0)); goto L_00116260;
L_0011624C:;
SET64(31, 0x116254); SET64(4, RD(18) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x11625c); SET64(4, RD(18) + RD(0)); JP_F_0010F670(c);
SET64(2, rd64(c, (RW(29) + 48)));
L_00116260:;
SET64(31, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 192); return;
}

void JP_F_00116288(Ctx *c) { /* func_00116288 */
ENTER(0x116288);
SET32(29, RW(29) + -224);
wr64(c, (RW(29) + 80), RD(17));
wr64(c, (RW(29) + 192), RD(30));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 176), RD(23));
SET64(30, RD(8) + RD(0));
wr64(c, (RW(29) + 160), RD(22));
SET64(23, RD(5) + RD(0));
wr64(c, (RW(29) + 128), RD(20));
SET64(22, RD(9) + RD(0));
wr64(c, (RW(29) + 64), RD(16));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 208), RD(31));
SET32(4, RW(0) + 23);
wr64(c, (RW(29) + 144), RD(21));
SET64(31, 0x1162d4); wr64(c, (RW(29) + 112), RD(19)); JP_F_001136B0(c);
SET64(2, (s64)(s32)0x510000);
SET32(18, RW(2) + -24960);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12292)));
if (RD(3) != RD(0)) { SET64(2, rd8(c, (RW(17) + 0))); goto L_001162F8; }
SET64(31, 0x1162f4);  JP_F_001137E0(c);
SET64(2, rd8(c, (RW(17) + 0)));
L_001162F8:;
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(18) + 12), (u8)RW(2)); if (t) goto L_0011633C; }
SET64(6, RD(16) < (u64)(s64)1025);
SET32(5, RW(5) + 1);
L_00116310:;
SET64(2, RSD(5) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(17) + RW(5)); if (t) goto L_00116340; }
SET32(4, RW(18) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 12), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00116310; } }
SET32(2, RW(0) + 1024); goto L_00116344;
L_0011633C:;
SET64(6, RD(16) < (u64)(s64)1025);
L_00116340:;
SET32(2, RW(0) + 1024);
L_00116344:;
if (RD(5) == RD(2)) { wr8(c, (RW(18) + 1035), (u8)RW(0)); goto L_0011634C; }
L_0011634C:;
{ int t = RD(6) == RD(0); SET64(2, RD(22) < (u64)(s64)1025); if (t) goto L_0011635C; }
{ int t = RD(2) != RD(0);  if (t) goto L_0011636C; }
L_0011635C:;
SET64(31, 0x116364);  JP_F_001136E0(c);
SET32(2, RW(0) + -22); goto L_00116490;
L_0011636C:;
{ int t = RD(16) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_001163B0; }
SET32(6, RW(18) + 1036);
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(17, (s64)(s32)0x510000);
L_00116388:;
SET32(2, RW(20) + RW(5));
SET32(4, RW(6) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
SET32(5, RW(5) + 1);
SET64(2, RD(5) < RD(16));
wr8(c, (RW(4) + 0), (u8)RW(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00116388; } }
wr32(c, (RW(18) + 2064), RW(16)); goto L_001163C0;
L_001163B0:;
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(17, (s64)(s32)0x510000);
wr32(c, (RW(18) + 2064), RW(16));
L_001163C0:;
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 2060), RW(23));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 20), RW(2));
SET32(20, RW(17) + -21824);
SET64(2, (s64)(s32)0x510000);
wr32(c, (RW(29) + 24), RW(0));
SET32(16, RW(2) + -24960);
SET64(31, 0x1163e8); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
wr32(c, (RW(18) + 2072), RW(22));
SET32(2, RW(0) + 4);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(18) + 4), RW(19));
SET32(5, RW(0) + 2076);
wr32(c, (RW(18) + 8), RW(2));
wr32(c, (RW(18) + 2068), RW(30));
SET64(31, 0x116410); wr32(c, (RW(18) + 0), RW(17)); JP_F_00112010(c);
SET32(4, RW(21) + -19072);
SET64(7, RD(16) + RD(0));
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 23);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 2076);
SET64(9, RD(20) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x116438); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00116458; }
SET64(31, 0x116448); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x116450);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00116490;
L_00116458:;
SET64(2, RD(20) | RD(2));
SET64(31, 0x116464); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_0011647C; }
SET64(31, 0x116474); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00116490;
L_0011647C:;
SET64(31, 0x116484); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x11648c); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_00116490:;
SET64(31, rd64(c, (RW(29) + 208)));
SET64(30, rd64(c, (RW(29) + 192)));
SET64(23, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 224); return;
}

void JP_F_001164C0(Ctx *c) { /* func_001164C0 */
ENTER(0x1164c0);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 80), RD(17));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(22));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET32(4, RW(0) + 17);
wr64(c, (RW(29) + 176), RD(31));
SET64(22, (s64)(s32)0x510000);
wr64(c, (RW(29) + 144), RD(21));
SET32(18, RW(22) + -24960);
wr64(c, (RW(29) + 128), RD(20));
SET64(31, 0x1164fc); wr64(c, (RW(29) + 112), RD(19)); JP_F_001136B0(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -12292)));
if (RD(3) != RD(0)) { SET64(2, rd8(c, (RW(16) + 0))); goto L_00116518; }
SET64(31, 0x116514);  JP_F_001137E0(c);
SET64(2, rd8(c, (RW(16) + 0)));
L_00116518:;
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(18) + 12), (u8)RW(2)); if (t) goto L_00116564; }
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
SET32(5, RW(5) + 1);
L_00116538:;
SET64(2, RSD(5) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(16) + RW(5)); if (t) goto L_00116570; }
SET32(4, RW(18) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 12), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00116538; } }
SET32(2, RW(0) + 1024); goto L_00116574;
L_00116564:;
SET32(19, RW(29) + 48);
SET64(21, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
L_00116570:;
SET32(2, RW(0) + 1024);
L_00116574:;
if (RD(5) == RD(2)) { wr8(c, (RW(18) + 1035), (u8)RW(0)); goto L_0011657C; }
L_0011657C:;
SET64(2, rd8(c, (RW(17) + 0)));
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(18) + 1036), (u8)RW(2)); if (t) goto L_001165BC; }
SET32(6, RW(18) + 1036);
SET32(5, RW(5) + 1);
L_00116598:;
SET64(2, RSD(5) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(17) + RW(5)); if (t) goto L_001165BC; }
SET32(4, RW(6) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 0), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00116598; } }
L_001165BC:;
SET32(2, RW(0) + 1024);
if (RD(5) == RD(2)) { wr8(c, (RW(18) + 2059), (u8)RW(0)); goto L_001165C8; }
L_001165C8:;
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 24), RW(0));
wr32(c, (RW(29) + 20), RW(2));
SET32(4, RW(29) + 16);
wr32(c, (RW(29) + 36), RW(0));
SET64(31, 0x1165e4); SET32(16, RW(20) + -21824); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
wr32(c, (RW(18) + 4), RW(19));
SET32(2, RW(0) + 4);
wr32(c, (RW(18) + 0), RW(17));
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(21) + -19072);
SET32(7, RW(22) + -24960);
SET32(5, RW(0) + 24);
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 2060);
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x116620); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00116640; }
SET64(31, 0x116630); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x116638);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_00116678;
L_00116640:;
SET64(2, RD(16) | RD(2));
SET64(31, 0x11664c); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00116664; }
SET64(31, 0x11665c); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_00116678;
L_00116664:;
SET64(31, 0x11666c); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x116674); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_00116678:;
SET64(31, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 192); return;
}

void JP_F_001166A0(Ctx *c) { /* func_001166A0 */
ENTER(0x1166a0);
SET32(29, RW(29) + -208);
wr64(c, (RW(29) + 80), RD(17));
wr64(c, (RW(29) + 144), RD(21));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(16));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 176), RD(23));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 96), RD(18));
SET32(4, RW(0) + 17);
wr64(c, (RW(29) + 192), RD(31));
SET64(23, (s64)(s32)0x510000);
wr64(c, (RW(29) + 160), RD(22));
SET32(18, RW(23) + -24960);
wr64(c, (RW(29) + 128), RD(20));
SET64(31, 0x1166e4); wr64(c, (RW(29) + 112), RD(19)); JP_F_001136B0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -12292)));
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(17) + 0))); goto L_00116700; }
SET64(31, 0x1166fc);  JP_F_001137E0(c);
SET64(2, rd8(c, (RW(17) + 0)));
L_00116700:;
SET64(5, RD(0) + RD(0));
SET32(3, RW(2) << 24);
{ int t = RD(3) == RD(0); wr8(c, (RW(18) + 20), (u8)RW(2)); if (t) goto L_00116754; }
SET64(6, RD(16) < (u64)(s64)1024);
SET32(19, RW(29) + 48);
SET64(22, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
SET32(5, RW(5) + 1);
L_00116728:;
SET64(2, RSD(5) < (s64)1024);
{ int t = RD(2) == RD(0); SET32(2, RW(17) + RW(5)); if (t) goto L_00116764; }
SET32(4, RW(18) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
wr8(c, (RW(4) + 20), (u8)RW(3));
SET32(3, RW(3) << 24);
if (RD(3) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00116728; } }
SET32(2, RW(0) + 1024); goto L_00116768;
L_00116754:;
SET64(6, RD(16) < (u64)(s64)1024);
SET32(19, RW(29) + 48);
SET64(22, (s64)(s32)0x510000);
SET64(20, (s64)(s32)0x510000);
L_00116764:;
SET32(2, RW(0) + 1024);
L_00116768:;
if (RD(5) == RD(2)) { wr8(c, (RW(18) + 1043), (u8)RW(0)); goto L_00116770; }
L_00116770:;
SET32(2, RW(0) + 1023);
SET64(4, RD(21) + RD(0));
if (RD(6) == 0) SET64(16, RD(2));
wr32(c, (RW(18) + 16), RW(21));
SET64(5, RD(16) + RD(0));
SET64(31, 0x11678c); wr32(c, (RW(18) + 12), RW(16)); JP_F_00112010(c);
SET32(16, RW(20) + -21824);
SET32(2, RW(0) + 1);
wr32(c, (RW(29) + 24), RW(0));
wr32(c, (RW(29) + 20), RW(2));
SET32(4, RW(29) + 16);
SET64(31, 0x1167a8); wr32(c, (RW(29) + 36), RW(0)); JP_F_0010F660(c);
SET64(17, RD(2) + RD(0));
wr32(c, (RW(18) + 4), RW(19));
SET32(2, RW(0) + 4);
wr32(c, (RW(18) + 0), RW(17));
wr32(c, (RW(18) + 8), RW(2));
SET32(4, RW(22) + -19072);
SET32(7, RW(23) + -24960);
SET32(5, RW(0) + 25);
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 2060);
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x1167e4); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00116804; }
SET64(31, 0x1167f4); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(31, 0x1167fc);  JP_F_001136E0(c);
SET32(2, RW(0) + -11); goto L_0011683C;
L_00116804:;
SET64(2, RD(16) | RD(2));
SET64(31, 0x116810); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_001136E0(c);
{ int t = RD(16) != RD(0);  if (t) goto L_00116828; }
SET64(31, 0x116820); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET32(2, RW(0) + -11); goto L_0011683C;
L_00116828:;
SET64(31, 0x116830); SET64(4, RD(17) + RD(0)); JP_F_0010F6A0(c);
SET64(31, 0x116838); SET64(4, RD(17) + RD(0)); JP_F_0010F670(c);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_0011683C:;
SET64(31, rd64(c, (RW(29) + 192)));
SET64(23, rd64(c, (RW(29) + 176)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(21, rd64(c, (RW(29) + 144)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 112)));
SET64(18, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 80)));
SET64(16, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 208); return;
}

void JP_F_00116868(Ctx *c) { /* func_00116868 */
ENTER(0x116868);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(17, (s64)(s32)0x510000);
wr64(c, (RW(29) + 0), RD(16)); goto L_001168A4;
L_00116880:;
SET64(2, (s64)(s32)0x100000);
SET32(3, RW(0) + -1);
L_00116888:;
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_00116888; } }
L_001168A4:;
SET32(16, RW(17) + -18816);
SET64(5, (s64)(s32)0x80000000);
SET64(4, RD(16) + RD(0));
SET64(5, RD(5) | 0x3);
SET64(31, 0x1168bc); SET64(6, RD(0) + RD(0)); JP_F_00112858(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + 36))); goto L_001168CC; }
SET32(2, RW(0) + -1); goto L_001168DC;
L_001168CC:;
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3e0000); if (t) { POLL(); goto L_00116880; } }
wr32(c, (RW(2) + -12264), RW(0));
SET64(2, RD(0) + RD(0));
L_001168DC:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_001168F0(Ctx *c) { /* func_001168F0 */
ENTER(0x1168f0);
SET64(3, (s64)(s32)0x3e0000);
SET32(29, RW(29) + -48);
SET64(2, (s32)rd32(c, (RW(3) + -12264)));
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
{ int t = RSD(2) < 0; wr64(c, (RW(29) + 16), RD(16)); if (t) goto L_0011694C; }
SET64(7, (s64)(s32)0x510000);
SET64(4, (s64)(s32)0x510000);
wr32(c, (RW(7) + -18688), RW(5));
SET64(16, (s64)(s32)0x510000);
SET32(4, RW(4) + -18816);
SET32(7, RW(7) + -18688);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 4);
SET32(9, RW(16) + -18752);
SET32(10, RW(0) + 4);
SET64(31, 0x116944); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s32)rd32(c, (RW(16) + -18752))); if (t) goto L_00116950; }
L_0011694C:;
SET64(2, RD(0) + RD(0));
L_00116950:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00116960(Ctx *c) { /* func_00116960 */
ENTER(0x116960);
SET64(2, (s64)(s32)0x3e0000);
SET32(29, RW(29) + -48);
SET64(3, (s32)rd32(c, (RW(2) + -12264)));
SET64(7, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
wr64(c, (RW(29) + 16), RD(16));
{ int t = RSD(3) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_001169D0; }
SET64(2, (s64)(s32)0x510000);
SET64(4, (s64)(s32)0x510000);
SET32(3, RW(2) + -18688);
wr32(c, (RW(2) + -18688), RW(5));
wr32(c, (RW(3) + 4), RW(7));
SET64(16, (s64)(s32)0x510000);
wr32(c, (RW(3) + 8), RW(6));
SET32(4, RW(4) + -18816);
SET64(7, RD(3) + RD(0));
SET32(5, RW(0) + 4);
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 12);
SET32(9, RW(16) + -18752);
SET32(10, RW(0) + 4);
SET64(31, 0x1169c4); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s32)rd32(c, (RW(16) + -18752))); if (t) goto L_001169D0; }
SET64(2, RD(0) + RD(0));
L_001169D0:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 48); return;
}

void JP_F_001169E0(Ctx *c) { /* func_001169E0 */
ENTER(0x1169e0);
SET64(3, (s64)(s32)0x3e0000);
SET32(29, RW(29) + -48);
SET64(2, (s32)rd32(c, (RW(3) + -12264)));
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
{ int t = RSD(2) >= 0; wr64(c, (RW(29) + 16), RD(16)); if (t) goto L_00116A04; }
SET64(2, RD(0) + RD(0)); goto L_00116A48;
L_00116A04:;
SET64(7, (s64)(s32)0x510000);
SET64(4, (s64)(s32)0x510000);
wr32(c, (RW(7) + -18688), RW(5));
SET64(16, (s64)(s32)0x510000);
SET32(4, RW(4) + -18816);
SET32(7, RW(7) + -18688);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 2);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 4);
SET32(9, RW(16) + -18752);
SET32(10, RW(0) + 4);
SET64(31, 0x116a3c); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s32)rd32(c, (RW(16) + -18752))); if (t) goto L_00116A48; }
SET32(2, RW(0) + -1);
L_00116A48:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00116A58(Ctx *c) { /* func_00116A58 */
ENTER(0x116a58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x116a68);  JP_F_001169E0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00116A78(Ctx *c) { /* func_00116A78 */
ENTER(0x116a78);
SET64(2, (s64)(s32)0x3e0000);
SET32(29, RW(29) + -48);
SET64(3, (s32)rd32(c, (RW(2) + -12264)));
SET64(6, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
{ int t = RSD(3) >= 0; wr64(c, (RW(29) + 16), RD(16)); if (t) goto L_00116A9C; }
SET64(2, RD(0) + RD(0)); goto L_00116B58;
L_00116A9C:;
SET64(2, rd8(c, (RW(6) + 0)));
SET64(7, (s64)(s32)0x510000);
SET32(3, RW(7) + -18624);
wr8(c, (RW(3) + 4), (u8)RW(2));
SET32(2, RW(2) << 24);
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_00116AF8; }
SET64(9, (s64)(s32)0x510000);
SET64(16, (s64)(s32)0x510000);
SET32(8, RW(8) + 1);
L_00116AC8:;
SET64(2, RSD(8) < (s64)252);
{ int t = RD(2) == RD(0); SET32(2, RW(6) + RW(8)); if (t) goto L_00116B00; }
SET32(3, RW(7) + -18624);
SET64(4, rd8(c, (RW(2) + 0)));
SET32(3, RW(3) + RW(8));
wr8(c, (RW(3) + 4), (u8)RW(4));
SET32(4, RW(4) << 24);
if (RD(4) != RD(0)) { SET32(8, RW(8) + 1); { POLL(); goto L_00116AC8; } }
SET32(2, RW(0) + 252); goto L_00116B04;
L_00116AF8:;
SET64(9, (s64)(s32)0x510000);
SET64(16, (s64)(s32)0x510000);
L_00116B00:;
SET32(2, RW(0) + 252);
L_00116B04:;
if (RD(8) != RD(2)) { wr32(c, (RW(7) + -18624), RW(5)); goto L_00116B1C; }
SET32(2, RW(7) + -18624);
SET32(8, RW(0) + 251);
wr8(c, (RW(2) + 255), (u8)RW(0));
wr32(c, (RW(7) + -18624), RW(5));
L_00116B1C:;
SET32(2, RW(7) + -18624);
SET32(4, RW(9) + -18816);
wr8(c, (RW(2) + 255), (u8)RW(0));
SET64(7, RD(2) + RD(0));
SET32(8, RW(8) + 5);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 3);
SET64(6, RD(0) + RD(0));
SET32(9, RW(16) + -18752);
SET32(10, RW(0) + 4);
SET64(31, 0x116b4c); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(2, (s32)rd32(c, (RW(16) + -18752))); if (t) goto L_00116B58; }
SET32(2, RW(0) + -1);
L_00116B58:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00116B68(Ctx *c) { /* func_00116B68 */
ENTER(0x116b68);
SET64(2, (s64)(s32)0x3e0000);
SET32(29, RW(29) + -48);
SET64(3, (s32)rd32(c, (RW(2) + -12264)));
wr64(c, (RW(29) + 32), RD(31));
{ int t = RSD(3) >= 0; wr64(c, (RW(29) + 16), RD(16)); if (t) goto L_00116B88; }
SET64(2, RD(0) + RD(0)); goto L_00116BC8;
L_00116B88:;
SET64(4, (s64)(s32)0x510000);
SET64(16, (s64)(s32)0x510000);
SET32(4, RW(4) + -18816);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 5);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET32(9, RW(16) + -18752);
SET32(10, RW(0) + 4);
SET64(31, 0x116bb8); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + -18752))); goto L_00116BC8; }
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0xffff);
L_00116BC8:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00116BD8(Ctx *c) { /* func_00116BD8 */
ENTER(0x116bd8);
SET64(2, (s64)(s32)0x3e0000);
SET32(29, RW(29) + -48);
SET64(3, (s32)rd32(c, (RW(2) + -12264)));
wr64(c, (RW(29) + 32), RD(31));
{ int t = RSD(3) >= 0; wr64(c, (RW(29) + 16), RD(16)); if (t) goto L_00116BF8; }
SET64(2, RD(0) + RD(0)); goto L_00116C38;
L_00116BF8:;
SET64(4, (s64)(s32)0x510000);
SET64(16, (s64)(s32)0x510000);
SET32(4, RW(4) + -18816);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 6);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET32(9, RW(16) + -18752);
SET32(10, RW(0) + 4);
SET64(31, 0x116c28); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + -18752))); goto L_00116C38; }
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0xffff);
L_00116C38:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00116C48(Ctx *c) { /* func_00116C48 */
ENTER(0x116c48);
SET64(2, (s64)(s32)0x3e0000);
SET32(29, RW(29) + -48);
SET64(3, (s32)rd32(c, (RW(2) + -12264)));
wr64(c, (RW(29) + 32), RD(31));
{ int t = RSD(3) >= 0; wr64(c, (RW(29) + 16), RD(16)); if (t) goto L_00116C68; }
SET64(2, RD(0) + RD(0)); goto L_00116CA8;
L_00116C68:;
SET64(4, (s64)(s32)0x510000);
SET64(16, (s64)(s32)0x510000);
SET32(4, RW(4) + -18816);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 7);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET32(9, RW(16) + -18752);
SET32(10, RW(0) + 4);
SET64(31, 0x116c98); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + -18752))); goto L_00116CA8; }
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0xffff);
L_00116CA8:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00116CB8(Ctx *c) { /* func_00116CB8 */
ENTER(0x116cb8);
SET64(3, (s64)(s32)0x3e0000);
SET32(29, RW(29) + -48);
SET64(2, (s32)rd32(c, (RW(3) + -12264)));
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
{ int t = RSD(2) >= 0; wr64(c, (RW(29) + 16), RD(16)); if (t) goto L_00116CDC; }
SET64(2, RD(0) + RD(0)); goto L_00116D24;
L_00116CDC:;
SET64(7, (s64)(s32)0x510000);
SET64(4, (s64)(s32)0x510000);
wr32(c, (RW(7) + -18688), RW(5));
SET64(16, (s64)(s32)0x510000);
SET32(4, RW(4) + -18816);
SET32(7, RW(7) + -18688);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 8);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 4);
SET32(9, RW(16) + -18752);
SET32(10, RW(0) + 4);
SET64(31, 0x116d14); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + -18752))); goto L_00116D24; }
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0xffff);
L_00116D24:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00116D38(Ctx *c) { /* func_00116D38 */
ENTER(0x116d38);
SET64(3, (s64)(s32)0x3e0000);
SET32(29, RW(29) + -48);
SET64(2, (s32)rd32(c, (RW(3) + -12264)));
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
{ int t = RSD(2) >= 0; wr64(c, (RW(29) + 16), RD(16)); if (t) goto L_00116D5C; }
SET64(2, RD(0) + RD(0)); goto L_00116DA4;
L_00116D5C:;
SET64(7, (s64)(s32)0x510000);
SET64(4, (s64)(s32)0x510000);
wr32(c, (RW(7) + -18688), RW(5));
SET64(16, (s64)(s32)0x510000);
SET32(4, RW(4) + -18816);
SET32(7, RW(7) + -18688);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 9);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 4);
SET32(9, RW(16) + -18752);
SET32(10, RW(0) + 4);
SET64(31, 0x116d94); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + -18752))); goto L_00116DA4; }
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0xffff);
L_00116DA4:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00116DB8(Ctx *c) { /* func_00116DB8 */
ENTER(0x116db8);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(18));
SET64(18, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 64), RD(31));
SET64(2, (s32)rd32(c, (RW(18) + -12256)));
wr64(c, (RW(29) + 32), RD(17));
{ int t = RSD(2) >= 0; wr64(c, (RW(29) + 16), RD(16)); if (t) goto L_00116E9C; }
SET64(17, (s64)(s32)0x510000);
SET32(16, RW(17) + -17856);
L_00116DE0:;
SET64(5, (s64)(s32)0x80000000);
SET64(4, RD(16) + RD(0));
SET64(5, RD(5) | 0x6);
SET64(31, 0x116df4); SET64(6, RD(0) + RD(0)); JP_F_00112858(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + 36))); goto L_00116E04; }
SET32(2, RW(0) + -1); goto L_00116EA0;
L_00116E04:;
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00116E6C; }
SET64(17, (s64)(s32)0x510000);
wr32(c, (RW(18) + -12256), RW(0));
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 255);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET32(9, RW(17) + -18368);
SET32(10, RW(0) + 4);
SET64(31, 0x116e38); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(3, (s64)(s32)0x510000); if (t) goto L_00116E4C; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xffff); goto L_00116EA0;
L_00116E4C:;
SET32(7, RW(17) + -18368);
SET32(6, RW(3) + -17816);
lwl(c, 4, (RW(7) + 3));
lwr(c, 4, (RW(7) + 0));
swl(c, 4, (RW(6) + 3));
swr(c, 4, (RW(6) + 0));
SET64(2, RD(0) + RD(0)); goto L_00116EA0;
L_00116E6C:;
SET64(2, (s64)(s32)0x100000);
SET32(3, RW(0) + -1);
L_00116E78:;
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_00116E78; } }
SET32(16, RW(17) + -17856); { POLL(); goto L_00116DE0; }
L_00116E9C:;
SET64(2, RD(0) + RD(0));
L_00116EA0:;
SET64(31, rd64(c, (RW(29) + 64)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00116EB8(Ctx *c) { /* func_00116EB8 */
ENTER(0x116eb8);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 48), RD(19));
SET64(3, (s64)(s32)0x510000);
wr64(c, (RW(29) + 16), RD(17));
SET32(19, RW(2) + -12468);
wr64(c, (RW(29) + 32), RD(18));
SET32(17, RW(3) + -17816);
wr64(c, (RW(29) + 64), RD(31));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(4, RD(17) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x116ef4); SET32(6, RW(0) + 4); JP_F_00127180(c);
{ int t = RD(2) == RD(0); SET64(16, (s64)(s32)0x3e0000); if (t) goto L_00116F24; }
SET64(4, RD(17) + RD(0));
SET64(5, (s32)rd32(c, (RW(16) + -12252)));
SET64(31, 0x116f0c); SET32(6, RW(0) + 4); JP_F_00127180(c);
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(16) + -12252))); if (t) goto L_00116F24; }
SET64(4, RD(19) + RD(0));
SET64(31, 0x116f20); SET32(6, RW(0) + 4); JP_F_00127180(c);
SET64(18, RD(0) < RD(2));
L_00116F24:;
SET64(2, RD(18) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00116F48(Ctx *c) { /* func_00116F48 */
ENTER(0x116f48);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3e0000);
SET32(3, RW(0) + -1);
SET64(4, (s64)(s32)0x510000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(4) + -17816);
wr32(c, (RW(2) + -12256), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x116f70); SET32(6, RW(0) + 4); JP_F_001273D0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00116F80(Ctx *c) { /* func_00116F80 */
ENTER(0x116f80);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 112), RD(22));
wr64(c, (RW(29) + 64), RD(19));
SET64(22, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(17));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 128), RD(31));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 96), RD(21));
wr64(c, (RW(29) + 80), RD(20));
SET64(31, 0x116fb8); wr64(c, (RW(29) + 48), RD(18)); JP_F_00116DB8(c);
{ int t = RSD(2) < 0; SET64(2, (s64)(s32)0xffff0000); if (t) goto L_00117160; }
SET64(31, 0x116fc8);  JP_F_00116EB8(c);
{ int t = RD(2) == RD(0); SET64(20, (s64)(s32)0x510000); if (t) goto L_00116FDC; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xfffc); goto L_00117160;
L_00116FDC:;
SET64(21, RD(20) + RD(0));
SET32(18, RW(20) + -18368);
{ int t = RD(16) == RD(0); wr32(c, (RW(20) + -18368), RW(19)); if (t) goto L_00117110; }
SET64(2, RSD(17) < (s64)253);
{ int t = RD(2) != RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_001170FC; }
SET32(4, RW(18) + 260);
SET64(2, RD(16) | RD(4));
SET64(2, RD(2) & 0x7);
{ int t = RD(2) == RD(0); SET64(7, RD(16) + RD(0)); if (t) goto L_00117070; }
SET32(2, RW(16) + 224);
SET64(5, (s64)(s32)0x510000);
L_00117014:;
ldl(c, 3, (RW(7) + 7));
ldr(c, 3, (RW(7) + 0));
ldl(c, 6, (RW(7) + 15));
ldr(c, 6, (RW(7) + 8));
ldl(c, 8, (RW(7) + 23));
ldr(c, 8, (RW(7) + 16));
ldl(c, 9, (RW(7) + 31));
ldr(c, 9, (RW(7) + 24));
sdl(c, 3, (RW(4) + 7));
sdr(c, 3, (RW(4) + 0));
sdl(c, 6, (RW(4) + 15));
sdr(c, 6, (RW(4) + 8));
sdl(c, 8, (RW(4) + 23));
sdr(c, 8, (RW(4) + 16));
sdl(c, 9, (RW(4) + 31));
sdr(c, 9, (RW(4) + 24));
SET32(7, RW(7) + 32);
SET32(4, RW(4) + 32);
{ int t = RD(7) != RD(2);  if (t) { POLL(); goto L_00117014; } }
 goto L_001170AC;
L_00117070:;
SET32(2, RW(16) + 224);
SET64(5, (s64)(s32)0x510000);
L_00117078:;
SET64(10, rd64(c, (RW(7) + 0)));
SET64(3, rd64(c, (RW(7) + 8)));
SET64(6, rd64(c, (RW(7) + 16)));
SET64(8, rd64(c, (RW(7) + 24)));
wr64(c, (RW(4) + 0), RD(10));
wr64(c, (RW(4) + 8), RD(3));
wr64(c, (RW(4) + 16), RD(6));
wr64(c, (RW(4) + 24), RD(8));
SET32(7, RW(7) + 32);
SET32(4, RW(4) + 32);
{ int t = RD(7) != RD(2);  if (t) { POLL(); goto L_00117078; } }
L_001170AC:;
ldl(c, 9, (RW(7) + 7));
ldr(c, 9, (RW(7) + 0));
ldl(c, 10, (RW(7) + 15));
ldr(c, 10, (RW(7) + 8));
ldl(c, 6, (RW(7) + 23));
ldr(c, 6, (RW(7) + 16));
lwl(c, 8, (RW(7) + 27));
lwr(c, 8, (RW(7) + 24));
sdl(c, 9, (RW(4) + 7));
sdr(c, 9, (RW(4) + 0));
sdl(c, 10, (RW(4) + 15));
sdr(c, 10, (RW(4) + 8));
sdl(c, 6, (RW(4) + 23));
sdr(c, 6, (RW(4) + 16));
swl(c, 8, (RW(4) + 27));
SET32(3, RW(21) + -18368);
SET32(2, RW(0) + 252);
swr(c, 8, (RW(4) + 24));
wr32(c, (RW(3) + 4), RW(2)); goto L_00117118;
L_001170FC:;
SET32(4, RW(18) + 260);
SET64(31, 0x117108); SET64(6, RD(17) + RD(0)); JP_F_00127218(c);
wr32(c, (RW(18) + 4), RW(17)); goto L_00117114;
L_00117110:;
wr32(c, (RW(18) + 4), RW(0));
L_00117114:;
SET64(5, (s64)(s32)0x510000);
L_00117118:;
SET32(16, RW(21) + -18368);
SET32(4, RW(5) + -17856);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 6);
SET64(6, RD(0) + RD(0));
SET64(7, RD(16) + RD(0));
SET32(8, RW(0) + 512);
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 8);
SET64(31, 0x117144); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_00117158; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xffff); goto L_00117160;
L_00117158:;
SET64(2, (s32)rd32(c, (RW(20) + -18368)));
wr32(c, (RW(22) + 0), RW(3));
L_00117160:;
SET64(31, rd64(c, (RW(29) + 128)));
SET64(22, rd64(c, (RW(29) + 112)));
SET64(21, rd64(c, (RW(29) + 96)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 64)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 144); return;
}

void JP_F_00117188(Ctx *c) { /* func_00117188 */
ENTER(0x117188);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 112), RD(22));
wr64(c, (RW(29) + 64), RD(19));
SET64(22, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(17));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 128), RD(31));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 96), RD(21));
wr64(c, (RW(29) + 80), RD(20));
SET64(31, 0x1171c0); wr64(c, (RW(29) + 48), RD(18)); JP_F_00116DB8(c);
{ int t = RSD(2) < 0; SET64(2, (s64)(s32)0xffff0000); if (t) goto L_00117368; }
SET64(31, 0x1171d0);  JP_F_00116EB8(c);
{ int t = RD(2) == RD(0); SET64(20, (s64)(s32)0x510000); if (t) goto L_001171E4; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xfffc); goto L_00117368;
L_001171E4:;
SET64(21, RD(20) + RD(0));
SET32(18, RW(20) + -18368);
{ int t = RD(16) == RD(0); wr32(c, (RW(20) + -18368), RW(19)); if (t) goto L_00117318; }
SET64(2, RSD(17) < (s64)253);
{ int t = RD(2) != RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00117304; }
SET32(4, RW(18) + 260);
SET64(2, RD(16) | RD(4));
SET64(2, RD(2) & 0x7);
{ int t = RD(2) == RD(0); SET64(7, RD(16) + RD(0)); if (t) goto L_00117278; }
SET32(2, RW(16) + 224);
SET64(5, (s64)(s32)0x510000);
L_0011721C:;
ldl(c, 3, (RW(7) + 7));
ldr(c, 3, (RW(7) + 0));
ldl(c, 6, (RW(7) + 15));
ldr(c, 6, (RW(7) + 8));
ldl(c, 8, (RW(7) + 23));
ldr(c, 8, (RW(7) + 16));
ldl(c, 9, (RW(7) + 31));
ldr(c, 9, (RW(7) + 24));
sdl(c, 3, (RW(4) + 7));
sdr(c, 3, (RW(4) + 0));
sdl(c, 6, (RW(4) + 15));
sdr(c, 6, (RW(4) + 8));
sdl(c, 8, (RW(4) + 23));
sdr(c, 8, (RW(4) + 16));
sdl(c, 9, (RW(4) + 31));
sdr(c, 9, (RW(4) + 24));
SET32(7, RW(7) + 32);
SET32(4, RW(4) + 32);
{ int t = RD(7) != RD(2);  if (t) { POLL(); goto L_0011721C; } }
 goto L_001172B4;
L_00117278:;
SET32(2, RW(16) + 224);
SET64(5, (s64)(s32)0x510000);
L_00117280:;
SET64(10, rd64(c, (RW(7) + 0)));
SET64(3, rd64(c, (RW(7) + 8)));
SET64(6, rd64(c, (RW(7) + 16)));
SET64(8, rd64(c, (RW(7) + 24)));
wr64(c, (RW(4) + 0), RD(10));
wr64(c, (RW(4) + 8), RD(3));
wr64(c, (RW(4) + 16), RD(6));
wr64(c, (RW(4) + 24), RD(8));
SET32(7, RW(7) + 32);
SET32(4, RW(4) + 32);
{ int t = RD(7) != RD(2);  if (t) { POLL(); goto L_00117280; } }
L_001172B4:;
ldl(c, 9, (RW(7) + 7));
ldr(c, 9, (RW(7) + 0));
ldl(c, 10, (RW(7) + 15));
ldr(c, 10, (RW(7) + 8));
ldl(c, 6, (RW(7) + 23));
ldr(c, 6, (RW(7) + 16));
lwl(c, 8, (RW(7) + 27));
lwr(c, 8, (RW(7) + 24));
sdl(c, 9, (RW(4) + 7));
sdr(c, 9, (RW(4) + 0));
sdl(c, 10, (RW(4) + 15));
sdr(c, 10, (RW(4) + 8));
sdl(c, 6, (RW(4) + 23));
sdr(c, 6, (RW(4) + 16));
swl(c, 8, (RW(4) + 27));
SET32(3, RW(21) + -18368);
SET32(2, RW(0) + 252);
swr(c, 8, (RW(4) + 24));
wr32(c, (RW(3) + 4), RW(2)); goto L_00117320;
L_00117304:;
SET32(4, RW(18) + 260);
SET64(31, 0x117310); SET64(6, RD(17) + RD(0)); JP_F_00127218(c);
wr32(c, (RW(18) + 4), RW(17)); goto L_0011731C;
L_00117318:;
wr32(c, (RW(18) + 4), RW(0));
L_0011731C:;
SET64(5, (s64)(s32)0x510000);
L_00117320:;
SET32(16, RW(21) + -18368);
SET32(4, RW(5) + -17856);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 7);
SET64(6, RD(0) + RD(0));
SET64(7, RD(16) + RD(0));
SET32(8, RW(0) + 512);
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 8);
SET64(31, 0x11734c); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_00117360; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xffff); goto L_00117368;
L_00117360:;
SET64(2, (s32)rd32(c, (RW(20) + -18368)));
wr32(c, (RW(22) + 0), RW(3));
L_00117368:;
SET64(31, rd64(c, (RW(29) + 128)));
SET64(22, rd64(c, (RW(29) + 112)));
SET64(21, rd64(c, (RW(29) + 96)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 64)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 144); return;
}

void JP_F_00117390(Ctx *c) { /* func_00117390 */
ENTER(0x117390);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(17));
wr64(c, (RW(29) + 48), RD(31));
SET64(17, RD(4) + RD(0));
SET64(31, 0x1173a8); wr64(c, (RW(29) + 16), RD(16)); JP_F_00116DB8(c);
{ int t = RSD(2) < 0; SET64(2, (s64)(s32)0xffff0000); if (t) goto L_0011740C; }
SET64(31, 0x1173b8);  JP_F_00116EB8(c);
{ int t = RD(2) == RD(0); SET64(16, (s64)(s32)0x510000); if (t) goto L_001173CC; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xfffc); goto L_0011740C;
L_001173CC:;
SET64(4, (s64)(s32)0x510000);
SET32(7, RW(16) + -18368);
wr32(c, (RW(16) + -18368), RW(17));
SET32(4, RW(4) + -17856);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 8);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 4);
SET64(9, RD(7) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x1173fc); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + -18368))); goto L_0011740C; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xffff);
L_0011740C:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00117420(Ctx *c) { /* func_00117420 */
ENTER(0x117420);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x117434); SET64(16, RD(4) + RD(0)); JP_F_00116DB8(c);
{ int t = RSD(2) < 0; SET64(2, (s64)(s32)0xffff0000); if (t) goto L_001174B0; }
SET64(31, 0x117444);  JP_F_00116EB8(c);
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x510000); goto L_00117458; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xfffc); goto L_001174B0;
L_00117458:;
SET64(5, RD(16) + RD(0));
SET32(16, RW(2) + -18360);
SET32(6, RW(0) + 252);
SET64(31, 0x11746c); SET64(4, RD(16) + RD(0)); JP_F_0012A978(c);
SET32(3, RW(16) + -8);
SET64(4, (s64)(s32)0x510000);
SET64(7, RD(3) + RD(0));
wr8(c, (RW(3) + 259), (u8)RW(0));
SET32(4, RW(4) + -17856);
SET32(5, RW(0) + 9);
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 512);
SET64(9, RD(7) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x1174a0); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + -8))); goto L_001174B0; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xffff);
L_001174B0:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 48); return;
}

void JP_F_001174C0(Ctx *c) { /* func_001174C0 */
ENTER(0x1174c0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(17));
wr64(c, (RW(29) + 48), RD(31));
SET64(17, RD(4) + RD(0));
SET64(31, 0x1174d8); wr64(c, (RW(29) + 16), RD(16)); JP_F_00116DB8(c);
{ int t = RSD(2) < 0; SET64(2, (s64)(s32)0xffff0000); if (t) goto L_0011753C; }
SET64(31, 0x1174e8);  JP_F_00116EB8(c);
{ int t = RD(2) == RD(0); SET64(16, (s64)(s32)0x510000); if (t) goto L_001174FC; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xfffc); goto L_0011753C;
L_001174FC:;
SET64(4, (s64)(s32)0x510000);
SET32(7, RW(16) + -18368);
wr32(c, (RW(16) + -18368), RW(17));
SET32(4, RW(4) + -17856);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 10);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 4);
SET64(9, RD(7) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x11752c); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + -18368))); goto L_0011753C; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xffff);
L_0011753C:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00117550(Ctx *c) { /* func_00117550 */
ENTER(0x117550);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x117560); SET64(7, RD(29) + RD(0)); JP_F_00116F80(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00117570(Ctx *c) { /* func_00117570 */
ENTER(0x117570);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x117580);  JP_F_00116F80(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00117590(Ctx *c) { /* func_00117590 */
ENTER(0x117590);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 80), RD(20));
wr64(c, (RW(29) + 64), RD(19));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(19, RD(8) + RD(0));
wr64(c, (RW(29) + 32), RD(17));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 112), RD(31));
SET64(16, RD(6) + RD(0));
SET64(31, 0x1175c8); wr64(c, (RW(29) + 96), RD(21)); JP_F_00116DB8(c);
{ int t = RSD(2) < 0; SET64(2, (s64)(s32)0xffff0000); if (t) goto L_00117790; }
SET64(31, 0x1175d8);  JP_F_00116EB8(c);
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x510000); goto L_001175EC; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xfffc); goto L_00117790;
L_001175EC:;
SET64(5, RD(17) + RD(0));
SET32(17, RW(2) + -18360);
SET32(6, RW(0) + 252);
SET64(31, 0x117600); SET64(4, RD(17) + RD(0)); JP_F_0012A978(c);
SET32(2, RW(17) + -8);
{ int t = RD(16) == RD(0); wr8(c, (RW(2) + 259), (u8)RW(0)); if (t) goto L_00117738; }
SET64(2, RSD(18) < (s64)253);
{ int t = RD(2) != RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00117720; }
SET32(4, RW(17) + 252);
SET64(2, RD(16) | RD(4));
SET64(2, RD(2) & 0x7);
{ int t = RD(2) == RD(0); SET64(3, RD(16) + RD(0)); if (t) goto L_00117694; }
SET32(2, RW(16) + 224);
SET64(21, (s64)(s32)0x510000);
SET64(5, (s64)(s32)0x510000);
L_00117638:;
ldl(c, 6, (RW(3) + 7));
ldr(c, 6, (RW(3) + 0));
ldl(c, 7, (RW(3) + 15));
ldr(c, 7, (RW(3) + 8));
ldl(c, 8, (RW(3) + 23));
ldr(c, 8, (RW(3) + 16));
ldl(c, 9, (RW(3) + 31));
ldr(c, 9, (RW(3) + 24));
sdl(c, 6, (RW(4) + 7));
sdr(c, 6, (RW(4) + 0));
sdl(c, 7, (RW(4) + 15));
sdr(c, 7, (RW(4) + 8));
sdl(c, 8, (RW(4) + 23));
sdr(c, 8, (RW(4) + 16));
sdl(c, 9, (RW(4) + 31));
sdr(c, 9, (RW(4) + 24));
SET32(3, RW(3) + 32);
SET32(4, RW(4) + 32);
{ int t = RD(3) != RD(2);  if (t) { POLL(); goto L_00117638; } }
 goto L_001176D4;
L_00117694:;
SET32(2, RW(16) + 224);
SET64(21, (s64)(s32)0x510000);
SET64(5, (s64)(s32)0x510000);
L_001176A0:;
SET64(6, rd64(c, (RW(3) + 0)));
SET64(7, rd64(c, (RW(3) + 8)));
SET64(8, rd64(c, (RW(3) + 16)));
SET64(9, rd64(c, (RW(3) + 24)));
wr64(c, (RW(4) + 0), RD(6));
wr64(c, (RW(4) + 8), RD(7));
wr64(c, (RW(4) + 16), RD(8));
wr64(c, (RW(4) + 24), RD(9));
SET32(3, RW(3) + 32);
SET32(4, RW(4) + 32);
{ int t = RD(3) != RD(2);  if (t) { POLL(); goto L_001176A0; } }
L_001176D4:;
ldl(c, 6, (RW(3) + 7));
ldr(c, 6, (RW(3) + 0));
ldl(c, 7, (RW(3) + 15));
ldr(c, 7, (RW(3) + 8));
ldl(c, 8, (RW(3) + 23));
ldr(c, 8, (RW(3) + 16));
lwl(c, 9, (RW(3) + 27));
lwr(c, 9, (RW(3) + 24));
sdl(c, 6, (RW(4) + 7));
sdr(c, 6, (RW(4) + 0));
sdl(c, 7, (RW(4) + 15));
sdr(c, 7, (RW(4) + 8));
sdl(c, 8, (RW(4) + 23));
sdr(c, 8, (RW(4) + 16));
swl(c, 9, (RW(4) + 27));
SET32(2, RW(0) + 252);
swr(c, 9, (RW(4) + 24));
wr32(c, (RW(21) + -18368), RW(2)); goto L_00117748;
L_00117720:;
SET32(4, RW(17) + 252);
SET64(6, RD(18) + RD(0));
SET64(31, 0x117730); SET64(21, (s64)(s32)0x510000); JP_F_00127218(c);
wr32(c, (RW(17) + -8), RW(18)); goto L_00117744;
L_00117738:;
wr8(c, (RW(2) + 260), (u8)RW(0));
SET64(21, (s64)(s32)0x510000);
wr32(c, (RW(17) + -8), RW(0));
L_00117744:;
SET64(5, (s64)(s32)0x510000);
L_00117748:;
SET32(16, RW(21) + -18368);
SET32(4, RW(5) + -17856);
SET64(5, RD(19) + RD(0));
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(16) + RD(0));
SET32(8, RW(0) + 512);
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 8);
SET64(31, 0x117774); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_00117788; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xffff); goto L_00117790;
L_00117788:;
SET64(2, (s32)rd32(c, (RW(21) + -18368)));
wr32(c, (RW(20) + 0), RW(3));
L_00117790:;
SET64(31, rd64(c, (RW(29) + 112)));
SET64(21, rd64(c, (RW(29) + 96)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 64)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 128); return;
}

void JP_F_001177B8(Ctx *c) { /* func_001177B8 */
ENTER(0x1177b8);
SET32(29, RW(29) + -32);
SET64(8, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x1177cc); SET64(7, RD(29) + RD(0)); JP_F_00117590(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001177D8(Ctx *c) { /* func_001177D8 */
ENTER(0x1177d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1177e8); SET64(8, RD(0) + RD(0)); JP_F_00117590(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_001177F8(Ctx *c) { /* func_001177F8 */
ENTER(0x1177f8);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(20));
wr64(c, (RW(29) + 64), RD(19));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 96), RD(31));
SET64(16, RD(4) + RD(0));
SET64(31, 0x117828); wr64(c, (RW(29) + 32), RD(17)); JP_F_00116DB8(c);
{ int t = RSD(2) < 0; SET64(2, (s64)(s32)0xffff0000); if (t) goto L_001178DC; }
SET64(31, 0x117838);  JP_F_00116EB8(c);
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x510000); goto L_0011784C; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xfffc); goto L_001178DC;
L_0011784C:;
SET64(5, RD(16) + RD(0));
SET32(17, RW(2) + -18360);
SET32(6, RW(0) + 252);
SET64(4, RD(17) + RD(0));
SET64(31, 0x117864); SET32(16, RW(17) + -8); JP_F_0012A978(c);
SET64(5, RD(18) + RD(0));
wr8(c, (RW(16) + 259), (u8)RW(0));
SET32(4, RW(17) + 252);
SET64(31, 0x117878); SET32(6, RW(0) + 252); JP_F_0012A978(c);
SET64(4, (s64)(s32)0x510000);
wr8(c, (RW(16) + 511), (u8)RW(0));
SET64(5, RD(19) + RD(0));
SET32(4, RW(4) + -17856);
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(16) + RD(0));
SET32(8, RW(0) + 512);
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 16);
SET64(31, 0x1178a8); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(17) + -8))); goto L_001178BC; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xffff); goto L_001178DC;
L_001178BC:;
if (RD(2) != RD(0)) { wr32(c, (RW(20) + 0), RW(2)); goto L_001178D0; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xfffd); goto L_001178DC;
L_001178D0:;
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
wr32(c, (RW(20) + 4), RW(3));
L_001178DC:;
SET64(31, rd64(c, (RW(29) + 96)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 64)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 112); return;
}

void JP_F_00117900(Ctx *c) { /* func_00117900 */
ENTER(0x117900);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x117910); SET32(7, RW(0) + 1); JP_F_001177F8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00117920(Ctx *c) { /* func_00117920 */
ENTER(0x117920);
SET64(6, RD(5) + RD(0));
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0x420000);
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(5) + -12248);
SET64(31, 0x11793c); SET32(7, RW(0) + 1); JP_F_001177F8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00117948(Ctx *c) { /* func_00117948 */
ENTER(0x117948);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(19));
wr64(c, (RW(29) + 48), RD(18));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(31));
SET64(16, RD(6) + RD(0));
SET64(31, 0x117970); wr64(c, (RW(29) + 32), RD(17)); JP_F_00116DB8(c);
{ int t = RSD(2) >= 0; SET64(2, RD(16) < (u64)(s64)3); if (t) goto L_00117980; }
SET64(2, (s64)(s32)0xffff0000); goto L_00117A18;
L_00117980:;
{ int t = RD(2) == RD(0); SET64(17, (s64)(s32)0x510000); if (t) goto L_00117A04; }
SET64(4, (s64)(s32)0x510000);
SET32(2, RW(17) + -18368);
wr32(c, (RW(17) + -18368), RW(19));
SET64(7, RD(2) + RD(0));
wr32(c, (RW(2) + 4), RW(16));
SET32(4, RW(4) + -17856);
SET32(5, RW(0) + 3);
wr32(c, (RW(29) + 0), RW(0));
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 32);
SET64(9, RD(7) + RD(0));
SET32(10, RW(0) + 32);
SET64(31, 0x1179c0); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0;  if (t) goto L_001179D4; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xffff); goto L_00117A18;
L_001179D4:;
{ int t = RD(16) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_001179E8; }
SET64(2, rd8(c, (RW(17) + -18368)));
wr8(c, (RW(18) + 0), (u8)RW(2)); goto L_00117A14;
L_001179E8:;
{ int t = RD(16) != RD(2); SET32(2, RW(0) + 2); if (t) goto L_001179FC; }
SET64(2, rd16(c, (RW(17) + -18368)));
wr16(c, (RW(18) + 0), (u16)RW(2)); goto L_00117A14;
L_001179FC:;
if (RD(16) == RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + -18368))); goto L_00117A10; }
L_00117A04:;
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xfffe); goto L_00117A18;
L_00117A10:;
wr32(c, (RW(18) + 0), RW(2));
L_00117A14:;
SET64(2, RD(0) + RD(0));
L_00117A18:;
SET64(31, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 64)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 96); return;
}

void JP_F_00117A38(Ctx *c) { /* func_00117A38 */
ENTER(0x117a38);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 32), RD(17));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x117a5c); SET64(16, RD(6) + RD(0)); JP_F_00116DB8(c);
{ int t = RSD(2) >= 0; SET64(7, (s64)(s32)0x510000); if (t) goto L_00117A6C; }
SET64(2, (s64)(s32)0xffff0000); goto L_00117AFC;
L_00117A6C:;
SET32(3, RW(7) + -18368);
wr32(c, (RW(7) + -18368), RW(18));
{ int t = RD(16) != RD(0); wr32(c, (RW(3) + 4), RW(16)); if (t) goto L_00117A88; }
SET64(2, rd8(c, (RW(17) + 0)));
wr8(c, (RW(3) + 8), (u8)RW(2)); goto L_00117AB8;
L_00117A88:;
SET32(2, RW(0) + 1);
{ int t = RD(16) != RD(2); SET32(2, RW(0) + 2); if (t) goto L_00117AA0; }
SET64(2, rd16(c, (RW(17) + 0)));
wr16(c, (RW(3) + 8), (u16)RW(2)); goto L_00117AB8;
L_00117AA0:;
if (RD(16) == RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_00117AB4; }
SET64(2, (s64)(s32)0xfffe0000);
SET64(2, RD(2) | 0xfffe); goto L_00117AFC;
L_00117AB4:;
wr32(c, (RW(3) + 8), RW(2));
L_00117AB8:;
SET32(7, RW(7) + -18368);
SET64(4, (s64)(s32)0x510000);
SET32(4, RW(4) + -17856);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 2);
SET64(6, RD(0) + RD(0));
SET32(8, RW(0) + 32);
SET64(9, RD(7) + RD(0));
SET32(10, RW(0) + 16);
SET64(31, 0x117ae4); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
SET64(4, (s64)(s32)0xfffe0000);
SET32(3, RW(0) + -1);
SET64(3, RSD(3) < RSD(2));
SET64(4, RD(4) | 0xffff);
SET64(2, RD(4) + RD(0));
if (RD(3) != 0) SET64(2, RD(0));
L_00117AFC:;
SET64(31, rd64(c, (RW(29) + 64)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00117B18(Ctx *c) { /* func_00117B18 */
ENTER(0x117b18);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(17));
wr64(c, (RW(29) + 16), RD(16));
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(4, RD(0) + RD(0));
SET64(31, 0x117b3c); SET64(5, RD(0) + RD(0)); JP_F_0011A810(c);
SET32(4, RW(0) + 1);
SET64(31, 0x117b48); SET64(5, RD(0) + RD(0)); JP_F_0011A810(c);
SET64(31, 0x117b50);  JP_F_0010F930(c);
SET64(4, (s64)(s32)0x80000000);
SET64(31, 0x117b5c);  JP_F_0010FA70(c);
SET64(10, (s64)(s32)0x510000);
SET64(11, RD(2) + RD(0));
SET32(3, RW(10) + -17792);
wr32(c, (RW(3) + 20), RW(16));
SET64(2, (s8)rd8(c, (RW(17) + 0)));
{ int t = RD(2) == RD(0); SET64(9, RD(0) + RD(0)); if (t) goto L_00117BA0; }
SET64(2, RD(17) + RD(0));
SET64(4, rd8(c, (RW(2) + 0)));
L_00117B80:;
SET32(3, RW(10) + -17792);
SET32(3, RW(3) + RW(9));
SET32(9, RW(9) + 1);
wr8(c, (RW(3) + 24), (u8)RW(4));
SET32(2, RW(17) + RW(9));
SET64(3, (s8)rd8(c, (RW(2) + 0)));
if (RD(3) != RD(0)) { SET64(4, rd8(c, (RW(2) + 0))); { POLL(); goto L_00117B80; } }
L_00117BA0:;
SET32(6, RW(10) + -17792);
SET64(3, (s64)(s32)0x80000000);
wr32(c, (RW(6) + 4), RW(0));
SET32(4, RW(0) + -1);
SET64(4, RD(4) << 32);
SET64(4, RD(4) | 0xff);
SET64(3, RD(3) | 0x3);
SET32(5, RW(0) + 104);
SET64(2, rd64(c, (RW(10) + -17792)));
SET32(7, RW(0) + 104);
wr32(c, (RW(6) + 16), RW(9));
SET32(8, RW(0) + 68);
wr32(c, (RW(6) + 8), RW(3));
SET64(2, RD(2) & RD(4));
wr64(c, (RW(10) + -17792), RD(2));
SET64(4, RD(6) + RD(0));
wr8(c, (RW(10) + -17792), (u8)RW(5));
SET32(5, RW(0) + 104);
wr32(c, (RW(29) + 4), RW(11));
wr32(c, (RW(29) + 8), RW(7));
wr32(c, (RW(29) + 12), RW(8));
SET64(31, 0x117bfc); wr32(c, (RW(29) + 0), RW(6)); JP_F_00112010(c);
SET32(4, RW(0) + 4);
SET64(31, 0x117c08); SET64(5, (s64)(s32)0x40000); JP_F_0010FA60(c);
SET64(4, RD(29) + RD(0));
SET64(31, 0x117c14); SET32(5, RW(0) + 1); JP_F_0010FA20(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 4); if (t) goto L_00117C54; }
SET64(31, 0x117c24); SET64(5, (s64)(s32)0x10000); JP_F_0010FA60(c);
SET32(4, RW(0) + 4);
SET64(31, 0x117c30); SET64(5, (s64)(s32)0x20000); JP_F_0010FA60(c);
SET64(4, (s64)(s32)0x80000000);
SET64(5, RD(0) + RD(0));
SET64(31, 0x117c40); SET64(4, RD(4) | 0x2); JP_F_0010FA60(c);
SET64(4, (s64)(s32)0x80000000);
SET64(31, 0x117c4c); SET64(5, RD(0) + RD(0)); JP_F_0010FA60(c);
SET32(2, RW(0) + 1); goto L_00117C58;
L_00117C54:;
SET64(2, RD(0) + RD(0));
L_00117C58:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00117C70(Ctx *c) { /* func_00117C70 */
ENTER(0x117c70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x117c80); SET32(4, RW(0) + 4); JP_F_0010FA70(c);
SET64(3, (s64)(s32)0x10000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) & RD(3));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00117C98(Ctx *c) { /* func_00117C98 */
ENTER(0x117c98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x117ca8); SET32(4, RW(0) + 4); JP_F_0010FA70(c);
SET64(3, (s64)(s32)0x40000);
SET64(2, RD(2) & RD(3));
{ int t = RD(2) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00117CDC; }
SET64(31, 0x117cc0);  JP_F_0010FAE0(c);
SET32(4, RW(0) + 1);
SET64(31, 0x117ccc); SET32(5, RW(0) + 1); JP_F_0011A810(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x117cd8); SET32(5, RW(0) + 1); JP_F_0011A810(c);
SET32(2, RW(0) + 1);
L_00117CDC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00117CE8(Ctx *c) { /* func_00117CE8 */
ENTER(0x117ce8);
SET32(29, RW(29) + -128);
SET64(2, (s64)(s32)0x420000);
wr64(c, (RW(29) + 96), RD(17));
wr64(c, (RW(29) + 80), RD(16));
wr64(c, (RW(29) + 112), RD(31));
SET64(16, RD(4) + RD(0));
SET64(3, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0); SET32(17, RW(2) + -12240); if (t) goto L_00117D34; }
SET32(3, RW(16) + -11);
L_00117D10:;
SET32(4, RW(4) + 1);
SET64(2, (s8)rd8(c, (RW(4) + 0)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00117D10; } }
SET32(2, RW(4) - RW(3)); goto L_00117D3C;
L_00117D34:;
SET32(3, RW(16) + -11);
SET32(2, RW(4) - RW(3));
L_00117D3C:;
SET64(2, RD(2) < (u64)(s64)81);
{ int t = RD(2) != RD(0); SET64(4, (s64)(s32)0x420000); if (t) goto L_00117D5C; }
SET64(5, RD(16) + RD(0));
SET64(31, 0x117d54); SET32(4, RW(4) + -12224); JP_F_00111888(c);
SET64(2, RD(0) + RD(0)); goto L_00117DE4;
L_00117D5C:;
SET64(31, 0x117d64); SET64(4, RD(0) + RD(0)); JP_F_001120C0(c);
SET64(31, 0x117d6c);  JP_F_00112260(c);
SET64(2, (s8)rd8(c, (RW(17) + 0)));
SET64(3, RD(29) + RD(0));
{ int t = RD(2) == RD(0); SET64(4, rd8(c, (RW(17) + 0))); if (t) goto L_00117DA4; }
SET64(5, rd8(c, (RW(16) + 0)));
L_00117D80:;
wr8(c, (RW(3) + 0), (u8)RW(4));
SET32(17, RW(17) + 1);
SET32(3, RW(3) + 1);
SET64(4, rd8(c, (RW(17) + 0)));
SET64(2, (s8)rd8(c, (RW(17) + 0)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00117D80; } }
SET64(4, RD(5) + RD(0)); goto L_00117DAC;
L_00117DA4:;
SET64(5, rd8(c, (RW(16) + 0)));
SET64(4, RD(5) + RD(0));
L_00117DAC:;
if (RD(4) == RD(0)) { wr8(c, (RW(3) + 0), (u8)RW(0)); goto L_00117DD8; }
L_00117DB8:;
wr8(c, (RW(3) + 0), (u8)RW(4));
SET32(16, RW(16) + 1);
SET32(3, RW(3) + 1);
SET64(2, (s8)rd8(c, (RW(16) + 0)));
SET64(4, RD(2) + RD(0));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00117DB8; } }
wr8(c, (RW(3) + 0), (u8)RW(0));
L_00117DD8:;
SET64(4, RD(29) + RD(0));
SET64(31, 0x117de4); SET64(5, RD(0) + RD(0)); JP_F_00117B18(c);
L_00117DE4:;
SET64(31, rd64(c, (RW(29) + 112)));
SET64(17, rd64(c, (RW(29) + 96)));
SET64(16, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 128); return;
}

void JP_F_00117DF8(Ctx *c) { /* func_00117DF8 */
ENTER(0x117df8);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(17));
SET64(16, (s64)(s32)0x120000);
SET32(16, RW(16) + -31936);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(2) + -11432), RW(17));
SET64(5, RD(16) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x117e28); SET32(4, RW(0) + 1); JP_F_0010F310(c);
SET64(5, RD(16) + RD(0));
SET64(31, 0x117e34); SET32(4, RW(0) + 2); JP_F_0010F310(c);
SET64(5, RD(16) + RD(0));
SET64(31, 0x117e40); SET32(4, RW(0) + 3); JP_F_0010F310(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00117E58(Ctx *c) { /* func_00117E58 */
ENTER(0x117e58);
SET64(6, RD(4) + RD(0));
SET32(29, RW(29) + -32);
SET32(4, RW(6) + -1);
wr64(c, (RW(29) + 16), RD(31));
SET64(2, RD(4) < (u64)(s64)13);
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 0), RD(16)); if (t) goto L_00117E80; }
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0xffff); goto L_00117ECC;
L_00117E80:;
SET64(2, (s64)(s32)0x3e0000);
SET32(3, RW(6) << 2);
SET32(2, RW(2) + -11424);
SET64(4, RD(4) < (u64)(s64)3);
SET32(3, RW(3) + RW(2));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) == RD(0); wr32(c, (RW(3) + 0), RW(5)); if (t) goto L_00117EB8; }
SET64(5, (s64)(s32)0x120000);
SET64(4, RD(6) + RD(0));
SET64(31, 0x117eb0); SET32(5, RW(5) + -31360); JP_F_0010F310(c);
SET64(2, RD(16) + RD(0)); goto L_00117ECC;
L_00117EB8:;
SET64(5, (s64)(s32)0x120000);
SET64(4, RD(6) + RD(0));
SET64(31, 0x117ec8); SET32(5, RW(5) + -31360); JP_F_0010F320(c);
SET64(2, RD(16) + RD(0));
L_00117ECC:;
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00117EE0(Ctx *c) { /* func_00117EE0 */
ENTER(0x117ee0);
SET32(3, RW(0) + 90);
rt_syscall(c, 0x117ee4);
 return;
}

void JP_F_00117EF0(Ctx *c) { /* func_00117EF0 */
ENTER(0x117ef0);
SET32(6, RW(6) >> 2);
{ int t = RD(6) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_00117F20; }
L_00117F00:;
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(7, RW(7) + 1);
SET32(5, RW(5) + 4);
SET64(2, RD(7) < RD(6));
wr32(c, (RW(4) + 0), RW(3));
SET32(4, RW(4) + 4);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00117F00; } }
L_00117F20:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00117F28(Ctx *c) { /* func_00117F28 */
ENTER(0x117f28);
SET32(3, RW(0) + 91);
rt_syscall(c, 0x117f2c);
 return;
}

void JP_F_00117F38(Ctx *c) { /* func_00117F38 */
ENTER(0x117f38);
SET32(3, RW(0) + 116);
rt_syscall(c, 0x117f3c);
 return;
}

void JP_F_00117F48(Ctx *c) { /* func_00117F48 */
ENTER(0x117f48);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
SET32(18, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 48), RD(31));
SET32(16, RW(2) + -11352);
SET64(4, (s32)rd32(c, (RW(2) + -11352)));
SET32(17, RW(16) + 24);
SET64(31, 0x117f78); SET64(5, (s32)rd32(c, (RW(16) + 4))); JP_F_00117F38(c);
SET64(5, (s64)(s32)0x3e0000);
SET64(4, (s64)(s32)0x80070000);
SET32(6, RW(0) + 816);
SET32(5, RW(5) + -12248);
SET64(31, 0x117f90); SET64(4, RD(4) | 0x5000); JP_F_00117EE0(c);
SET64(31, 0x117f98); SET64(4, RD(0) + RD(0)); JP_F_0010F8E0(c);
SET64(31, 0x117fa0); SET32(4, RW(0) + 2); JP_F_0010F8E0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x117fac); SET64(5, (s32)rd32(c, (RW(16) + 12))); JP_F_00117F38(c);
SET64(4, (s32)rd32(c, (RW(16) + 16)));
SET64(31, 0x117fb8); SET64(5, (s32)rd32(c, (RW(16) + 20))); JP_F_00117F38(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
L_00117FC0:;
SET64(31, 0x117fc8); SET32(18, RW(18) + 1); JP_F_00117F28(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x117fd8); SET32(17, RW(17) + 8); JP_F_00117F38(c);
SET64(2, RD(18) < (u64)(s64)8);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_00117FC0; } }
SET64(31, 0x117fec); SET32(4, RW(0) + 3); JP_F_00117F28(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + -11360), RW(2));
SET32(29, RW(29) + 64); return;
}

void JP_F_00118010(Ctx *c) { /* func_00118010 */
ENTER(0x118010);
SET32(3, RW(0) + 85);
rt_syscall(c, 0x118014);
 return;
}

void JP_F_00118020(Ctx *c) { /* func_00118020 */
ENTER(0x118020);
SET32(3, RW(0) + -85);
rt_syscall(c, 0x118024);
 return;
}

void JP_F_00118030(Ctx *c) { /* func_00118030 */
ENTER(0x118030);
SET32(3, RW(0) + 86);
rt_syscall(c, 0x118034);
 return;
}

void JP_F_00118040(Ctx *c) { /* func_00118040 */
ENTER(0x118040);
SET32(29, RW(29) + -16);
SET32(2, RW(4) + -13);
SET64(2, RD(2) < (u64)(s64)35);
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0011805C; }
SET32(2, RW(0) + -1); goto L_00118064;
L_0011805C:;
SET64(31, 0x118064);  JP_F_00118030(c);
L_00118064:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00118070(Ctx *c) { /* func_00118070 */
ENTER(0x118070);
SET32(3, RW(0) + -86);
rt_syscall(c, 0x118074);
 return;
}

void JP_F_00118080(Ctx *c) { /* func_00118080 */
ENTER(0x118080);
SET32(3, RW(0) + 87);
rt_syscall(c, 0x118084);
 return;
}

void JP_F_00118090(Ctx *c) { /* func_00118090 */
ENTER(0x118090);
SET32(3, RW(0) + -87);
rt_syscall(c, 0x118094);
 return;
}

void JP_F_001180A0(Ctx *c) { /* func_001180A0 */
ENTER(0x1180a0);
SET32(3, RW(0) + 88);
rt_syscall(c, 0x1180a4);
 return;
}

void JP_F_001180B0(Ctx *c) { /* func_001180B0 */
ENTER(0x1180b0);
SET32(3, RW(0) + -88);
rt_syscall(c, 0x1180b4);
 return;
}

void JP_F_001180C0(Ctx *c) { /* func_001180C0 */
ENTER(0x1180c0);
SET32(3, RW(0) + 89);
rt_syscall(c, 0x1180c4);
 return;
}

void JP_F_001180D0(Ctx *c) { /* func_001180D0 */
ENTER(0x1180d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x1180e0);  JP_F_0010FAC0(c);
SET64(3, (s64)(s32)0x2000000);
{ int t = RD(2) != RD(3);  if (t) goto L_001180FC; }
SET64(31, 0x1180f4);  JP_F_00118110(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_00118108;
L_001180FC:;
SET64(31, 0x118104);  JP_F_0010FAD0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_00118108:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00118110(Ctx *c) { /* func_00118110 */
ENTER(0x118110);
SET32(29, RW(29) + -64);
SET64(4, (s64)(s32)0x420000);
wr64(c, (RW(29) + 32), RD(18));
SET32(4, RW(4) + -12192);
wr64(c, (RW(29) + 16), RD(17));
SET64(18, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 48), RD(31));
SET32(16, RW(18) + -10664);
SET64(5, (s32)rd32(c, (RW(18) + -10664)));
SET64(7, (s32)rd32(c, (RW(16) + 4)));
SET64(9, (s32)rd32(c, (RW(16) + 8)));
SET64(6, RD(5) + RD(0));
SET32(7, RW(5) + RW(7));
SET32(9, RW(7) + RW(9));
SET64(8, RD(7) + RD(0));
SET32(5, RW(5) + -1);
SET32(9, RW(9) + -1);
SET64(31, 0x118160); SET32(7, RW(7) + -1); JP_F_00111850(c);
rt_mtc0(c, 6, RW(0));
SET64(17, (s32)rd32(c, (RW(18) + -10664)));
SET64(2, RSD(17) < (s64)49);
{ int t = RD(2) != RD(0); SET64(25, RD(0) + RD(0)); if (t) goto L_0011818C; }
SET64(4, (s64)(s32)0x420000);
SET64(31, 0x118184); SET32(4, RW(4) + -12136); JP_F_00111850(c);
SET64(31, 0x11818c); SET32(4, RW(0) + 1); JP_F_00118D48(c);
L_0011818C:;
SET64(2, RSD(25) < RSD(17));
{ int t = RD(2) == RD(0); SET64(16, (s32)rd32(c, (RW(16) + 16))); if (t) goto L_001181C8; }
SET64(5, (s32)rd32(c, (RW(16) + 0)));
L_001181A0:;
SET64(4, RD(25) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 4)));
SET64(7, (s32)rd32(c, (RW(16) + 8)));
SET64(8, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x1181b8); SET32(16, RW(16) + 16); JP_F_00118030(c);
SET32(25, RW(25) + 1);
SET64(2, RSD(25) < RSD(17));
if (RD(2) != RD(0)) { SET64(5, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_001181A0; } }
L_001181C8:;
SET32(16, RW(18) + -10664);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET32(17, RW(25) + RW(2));
SET64(3, RSD(17) < (s64)49);
{ int t = RD(3) != RD(0); SET64(2, RSD(25) < RSD(17)); if (t) goto L_001181F8; }
SET64(4, (s64)(s32)0x420000);
SET64(31, 0x1181ec); SET32(4, RW(4) + -12112); JP_F_00111850(c);
SET64(31, 0x1181f4); SET32(4, RW(0) + 1); JP_F_00118D48(c);
SET64(2, RSD(25) < RSD(17));
L_001181F8:;
{ int t = RD(2) == RD(0); SET64(16, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_00118230; }
SET64(5, (s32)rd32(c, (RW(16) + 0)));
L_00118208:;
SET64(4, RD(25) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 4)));
SET64(7, (s32)rd32(c, (RW(16) + 8)));
SET64(8, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x118220); SET32(16, RW(16) + 16); JP_F_00118030(c);
SET32(25, RW(25) + 1);
SET64(2, RSD(25) < RSD(17));
if (RD(2) != RD(0)) { SET64(5, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00118208; } }
L_00118230:;
SET32(16, RW(18) + -10664);
wr32(c, (RW(16) + 12), RW(25));
rt_mtc0(c, 6, RW(25));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RSD(2) <= 0) { SET64(16, RD(25) + RD(0)); goto L_001182AC; }
SET32(17, RW(25) + RW(2));
SET64(2, RSD(17) < (s64)49);
{ int t = RD(2) != RD(0); SET64(2, RSD(25) < RSD(17)); if (t) goto L_00118274; }
SET64(4, (s64)(s32)0x420000);
SET64(31, 0x118268); SET32(4, RW(4) + -12088); JP_F_00111850(c);
SET64(31, 0x118270); SET32(4, RW(0) + 1); JP_F_00118D48(c);
SET64(2, RSD(25) < RSD(17));
L_00118274:;
{ int t = RD(2) == RD(0); SET64(16, (s32)rd32(c, (RW(16) + 24))); if (t) goto L_001182A8; }
SET64(5, (s32)rd32(c, (RW(16) + 0)));
L_00118280:;
SET64(4, RD(25) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 4)));
SET64(7, (s32)rd32(c, (RW(16) + 8)));
SET64(8, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x118298); SET32(16, RW(16) + 16); JP_F_00118030(c);
SET32(25, RW(25) + 1);
SET64(2, RSD(25) < RSD(17));
if (RD(2) != RD(0)) { SET64(5, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00118280; } }
L_001182A8:;
SET64(16, RD(25) + RD(0));
L_001182AC:;
SET64(2, RSD(16) < (s64)48);
{ int t = RD(2) == RD(0); SET32(25, RW(25) << 13); if (t) goto L_001182E8; }
SET64(2, (s64)(s32)0xe0000000);
SET32(17, RW(25) + RW(2));
L_001182C0:;
SET64(4, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x1182dc); SET32(16, RW(16) + 1); JP_F_00118030(c);
SET64(2, RSD(16) < (s64)48);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 8192); if (t) { POLL(); goto L_001182C0; } }
L_001182E8:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(2, RD(25) + RD(0));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

static void JP_B_00118340(Ctx *c, u32 entry) { /* func_00118340 */
ENTER(entry);
switch (entry) { case 0x118480: goto L_00118480; }
SET64(26, (s64)(s32)0x510000);
SET32(26, RW(26) + -13568);
wr128(c, (RW(26) + 16) & ~15u, &c->r[1]);
wr128(c, (RW(26) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(26) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(26) + 64) & ~15u, &c->r[4]);
wr128(c, (RW(26) + 80) & ~15u, &c->r[5]);
wr128(c, (RW(26) + 96) & ~15u, &c->r[6]);
wr128(c, (RW(26) + 112) & ~15u, &c->r[7]);
wr128(c, (RW(26) + 128) & ~15u, &c->r[8]);
wr128(c, (RW(26) + 144) & ~15u, &c->r[9]);
wr128(c, (RW(26) + 160) & ~15u, &c->r[10]);
wr128(c, (RW(26) + 176) & ~15u, &c->r[11]);
wr128(c, (RW(26) + 192) & ~15u, &c->r[12]);
wr128(c, (RW(26) + 208) & ~15u, &c->r[13]);
wr128(c, (RW(26) + 224) & ~15u, &c->r[14]);
wr128(c, (RW(26) + 240) & ~15u, &c->r[15]);
wr128(c, (RW(26) + 256) & ~15u, &c->r[16]);
wr128(c, (RW(26) + 272) & ~15u, &c->r[17]);
wr128(c, (RW(26) + 288) & ~15u, &c->r[18]);
wr128(c, (RW(26) + 304) & ~15u, &c->r[19]);
wr128(c, (RW(26) + 320) & ~15u, &c->r[20]);
wr128(c, (RW(26) + 336) & ~15u, &c->r[21]);
wr128(c, (RW(26) + 352) & ~15u, &c->r[22]);
wr128(c, (RW(26) + 368) & ~15u, &c->r[23]);
wr128(c, (RW(26) + 384) & ~15u, &c->r[24]);
wr128(c, (RW(26) + 400) & ~15u, &c->r[25]);
wr128(c, (RW(26) + 448) & ~15u, &c->r[28]);
wr128(c, (RW(26) + 464) & ~15u, &c->r[29]);
wr128(c, (RW(26) + 480) & ~15u, &c->r[30]);
wr128(c, (RW(26) + 496) & ~15u, &c->r[31]);
SET64(2, c->hi.d[0]);
SET64(1, (s64)(s32)0x510000);
wr64(c, (RW(1) + -13056), RD(2));
SET64(2, c->hi.d[1]);
SET64(1, (s64)(s32)0x510000);
wr64(c, (RW(1) + -13048), RD(2));
SET64(2, c->lo.d[0]);
SET64(1, (s64)(s32)0x510000);
wr64(c, (RW(1) + -13040), RD(2));
SET64(2, c->lo.d[1]);
SET64(1, (s64)(s32)0x510000);
wr64(c, (RW(1) + -13032), RD(2));
SET64(2, c->sa);
SET64(1, (s64)(s32)0x510000);
wr64(c, (RW(1) + -13024), RD(2));
SET64(4, (s32)rt_mfc0(c, 12));
SET64(5, (s32)rt_mfc0(c, 13));
SET64(6, (s32)rt_mfc0(c, 14));
SET64(7, (s32)rt_mfc0(c, 8));
SET64(8, (s64)(s32)0x510000);
SET32(8, RW(8) + -13568);
SET64(1, (s64)(s32)0x510000);
wr32(c, (RW(1) + -13016), RW(6));
SET64(1, (s64)(s32)0x120000);
SET32(1, RW(1) + -31680);
rt_mtc0(c, 14, RW(1));
SET64(1, (s32)rt_mfc0(c, 12));
SET32(2, RW(0) + -2);
SET64(1, RD(1) & RD(2));
rt_mtc0(c, 12, RW(1));
return;
SET64(1, (s64)(s32)0x3e0000);
SET64(1, (s32)rd32(c, (RW(1) + -11432)));
SET64(29, (s64)(s32)0x510000);
{ u32 t = RW(1); SET64(31, 0x118454); SET32(29, RW(29) + -13568); rt_call(c, t); }
SET32(3, RW(0) + -84);
rt_syscall(c, 0x118458);
L_00118480:;
SET64(1, (s32)rt_mfc0(c, 12));
SET32(26, RW(0) + -28);
SET64(1, RD(1) & RD(26));
rt_mtc0(c, 12, RW(1));
SET64(2, (s64)(s32)0x510000);
SET64(2, (s32)rd32(c, (RW(2) + -13016)));
rt_mtc0(c, 14, RW(2));
SET64(2, (s64)(s32)0x510000);
SET64(2, rd64(c, (RW(2) + -13056)));
c->hi.d[0] = RD(2);
SET64(2, (s64)(s32)0x510000);
SET64(2, rd64(c, (RW(2) + -13048)));
c->hi.d[1] = RD(2);
SET64(2, (s64)(s32)0x510000);
SET64(2, rd64(c, (RW(2) + -13040)));
c->lo.d[0] = RD(2);
SET64(2, (s64)(s32)0x510000);
SET64(2, rd64(c, (RW(2) + -13032)));
c->lo.d[1] = RD(2);
SET64(2, (s64)(s32)0x510000);
SET64(2, rd64(c, (RW(2) + -13024)));
c->sa = RW(2) & 15;
SET64(26, (s64)(s32)0x510000);
SET32(26, RW(26) + -13568);
rd128(c, (RW(26) + 16) & ~15u, &c->r[1]);
rd128(c, (RW(26) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(26) + 48) & ~15u, &c->r[3]);
rd128(c, (RW(26) + 64) & ~15u, &c->r[4]);
rd128(c, (RW(26) + 80) & ~15u, &c->r[5]);
rd128(c, (RW(26) + 96) & ~15u, &c->r[6]);
rd128(c, (RW(26) + 112) & ~15u, &c->r[7]);
rd128(c, (RW(26) + 128) & ~15u, &c->r[8]);
rd128(c, (RW(26) + 144) & ~15u, &c->r[9]);
rd128(c, (RW(26) + 160) & ~15u, &c->r[10]);
rd128(c, (RW(26) + 176) & ~15u, &c->r[11]);
rd128(c, (RW(26) + 192) & ~15u, &c->r[12]);
rd128(c, (RW(26) + 208) & ~15u, &c->r[13]);
rd128(c, (RW(26) + 224) & ~15u, &c->r[14]);
rd128(c, (RW(26) + 240) & ~15u, &c->r[15]);
rd128(c, (RW(26) + 256) & ~15u, &c->r[16]);
rd128(c, (RW(26) + 272) & ~15u, &c->r[17]);
rd128(c, (RW(26) + 288) & ~15u, &c->r[18]);
rd128(c, (RW(26) + 304) & ~15u, &c->r[19]);
rd128(c, (RW(26) + 320) & ~15u, &c->r[20]);
rd128(c, (RW(26) + 336) & ~15u, &c->r[21]);
rd128(c, (RW(26) + 352) & ~15u, &c->r[22]);
rd128(c, (RW(26) + 368) & ~15u, &c->r[23]);
rd128(c, (RW(26) + 384) & ~15u, &c->r[24]);
rd128(c, (RW(26) + 400) & ~15u, &c->r[25]);
rd128(c, (RW(26) + 448) & ~15u, &c->r[28]);
rd128(c, (RW(26) + 464) & ~15u, &c->r[29]);
rd128(c, (RW(26) + 480) & ~15u, &c->r[30]);
rd128(c, (RW(26) + 496) & ~15u, &c->r[31]);
SET64(26, (s32)rt_mfc0(c, 12));
SET64(26, RD(26) | 0x13);
rt_mtc0(c, 12, RW(26));
return;
SET64(26, (s64)(s32)0x510000);
SET32(26, RW(26) + -13568);
wr128(c, (RW(26) + 16) & ~15u, &c->r[1]);
wr128(c, (RW(26) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(26) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(26) + 64) & ~15u, &c->r[4]);
wr128(c, (RW(26) + 80) & ~15u, &c->r[5]);
wr128(c, (RW(26) + 96) & ~15u, &c->r[6]);
wr128(c, (RW(26) + 112) & ~15u, &c->r[7]);
wr128(c, (RW(26) + 128) & ~15u, &c->r[8]);
wr128(c, (RW(26) + 144) & ~15u, &c->r[9]);
wr128(c, (RW(26) + 160) & ~15u, &c->r[10]);
wr128(c, (RW(26) + 176) & ~15u, &c->r[11]);
wr128(c, (RW(26) + 192) & ~15u, &c->r[12]);
wr128(c, (RW(26) + 208) & ~15u, &c->r[13]);
wr128(c, (RW(26) + 224) & ~15u, &c->r[14]);
wr128(c, (RW(26) + 240) & ~15u, &c->r[15]);
wr128(c, (RW(26) + 256) & ~15u, &c->r[16]);
wr128(c, (RW(26) + 272) & ~15u, &c->r[17]);
wr128(c, (RW(26) + 288) & ~15u, &c->r[18]);
wr128(c, (RW(26) + 304) & ~15u, &c->r[19]);
wr128(c, (RW(26) + 320) & ~15u, &c->r[20]);
wr128(c, (RW(26) + 336) & ~15u, &c->r[21]);
wr128(c, (RW(26) + 352) & ~15u, &c->r[22]);
wr128(c, (RW(26) + 368) & ~15u, &c->r[23]);
wr128(c, (RW(26) + 384) & ~15u, &c->r[24]);
wr128(c, (RW(26) + 400) & ~15u, &c->r[25]);
wr128(c, (RW(26) + 448) & ~15u, &c->r[28]);
wr128(c, (RW(26) + 464) & ~15u, &c->r[29]);
wr128(c, (RW(26) + 480) & ~15u, &c->r[30]);
wr128(c, (RW(26) + 496) & ~15u, &c->r[31]);
SET64(2, c->hi.d[0]);
SET64(1, (s64)(s32)0x510000);
wr64(c, (RW(1) + -13056), RD(2));
SET64(2, c->hi.d[1]);
SET64(1, (s64)(s32)0x510000);
wr64(c, (RW(1) + -13048), RD(2));
SET64(2, c->lo.d[0]);
SET64(1, (s64)(s32)0x510000);
wr64(c, (RW(1) + -13040), RD(2));
SET64(2, c->lo.d[1]);
SET64(1, (s64)(s32)0x510000);
wr64(c, (RW(1) + -13032), RD(2));
SET64(2, c->sa);
SET64(1, (s64)(s32)0x510000);
wr64(c, (RW(1) + -13024), RD(2));
SET64(4, (s32)rt_mfc0(c, 12));
SET64(5, (s32)rt_mfc0(c, 13));
SET64(6, (s32)rt_mfc0(c, 14));
SET64(7, (s32)rt_mfc0(c, 8));
SET64(8, (s32)rt_mfc0(c, 23));
SET64(9, (s64)(s32)0x510000);
SET32(9, RW(9) + -13568);
SET64(1, (s64)(s32)0x120000);
SET32(1, RW(1) + -31108);
rt_mtc0(c, 14, RW(1));
SET64(1, (s32)rt_mfc0(c, 12));
SET32(2, RW(0) + -2);
SET64(1, RD(1) & RD(2));
rt_mtc0(c, 12, RW(1));
return;
SET64(2, RD(5) & 0x7c);
SET64(1, (s64)(s32)0x3e0000);
SET32(1, RW(1) + RW(2));
SET64(1, (s32)rd32(c, (RW(1) + -11424)));
SET64(29, (s64)(s32)0x510000);
{ u32 t = RW(1); SET64(31, 0x118698); SET32(29, RW(29) + -13568); rt_call(c, t); }
rt_break(c, 0x118698);
rt_fell_off(c, 0x11869c);
}
void JP_F_00118340(Ctx *c) { JP_B_00118340(c, 0x118340); }
void JP_F_00118480(Ctx *c) { JP_B_00118340(c, 0x118480); }

void JP_F_001186A0(Ctx *c) { /* func_001186A0 */
ENTER(0x1186a0);
SET64(3, (s32)rt_mfc0(c, 12));
SET64(2, (s64)(s32)0x10000);
SET64(3, RD(3) & RD(2));
{ int t = RD(3) == RD(0); SET64(4, RD(0) < RD(3)); if (t) goto L_001186E4; }
L_001186B8:;
rt_di(c);
SET64(2, (s32)rt_mfc0(c, 12));
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(2) & RD(3));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001186B8; } }
SET64(2, RD(4) + RD(0)); return;
L_001186E4:;
SET64(4, RD(0) + RD(0));
SET64(2, RD(4) + RD(0));
 return;
}

void JP_F_001186F8(Ctx *c) { /* func_001186F8 */
ENTER(0x1186f8);
SET64(2, (s32)rt_mfc0(c, 12));
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(2) & RD(3));
rt_ei(c);
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_00118710(Ctx *c) { /* func_00118710 */
ENTER(0x118710);
SET32(29, RW(29) + -80);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 64), RD(31));
SET64(4, RD(29) + RD(0));
wr32(c, (RW(29) + 40), RW(2));
wr32(c, (RW(29) + 4), RW(2));
wr32(c, (RW(29) + 8), RW(2));
SET64(31, 0x118734); wr32(c, (RW(29) + 36), RW(2)); JP_F_0010F660(c);
SET64(3, (s64)(s32)0x3e0000);
SET32(4, RW(29) + 32);
SET64(31, 0x118744); wr32(c, (RW(3) + -10608), RW(2)); JP_F_0010F660(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(31, rd64(c, (RW(29) + 64)));
wr32(c, (RW(3) + -10604), RW(2));
SET32(29, RW(29) + 80); return;
}

void JP_F_00118758(Ctx *c) { /* func_00118758 */
ENTER(0x118758);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -10604))); return;
}

void JP_F_00118768(Ctx *c) { /* func_00118768 */
ENTER(0x118768);
SET32(3, RW(0) + 90);
rt_syscall(c, 0x11876c);
 return;
}

void JP_F_00118778(Ctx *c) { /* func_00118778 */
ENTER(0x118778);
SET32(6, RW(6) >> 2);
{ int t = RD(6) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_001187A8; }
L_00118788:;
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(7, RW(7) + 1);
SET32(5, RW(5) + 4);
SET64(2, RD(7) < RD(6));
wr32(c, (RW(4) + 0), RW(3));
SET32(4, RW(4) + 4);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00118788; } }
L_001187A8:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_001187B0(Ctx *c) { /* func_001187B0 */
ENTER(0x1187b0);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) == RD(6); SET64(2, RD(4) < RD(5)); if (t) goto L_001187E4; }
if (RD(2) == RD(0)) { if (RD(2) == 0) SET64(4, RD(0)); goto L_001187E8; }
SET32(4, RW(4) + 4);
L_001187C8:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) == RD(6); SET64(2, RD(4) < RD(5)); if (t) goto L_001187E4; }
if (RD(2) != RD(0)) { SET32(4, RW(4) + 4); { POLL(); goto L_001187C8; } }
if (RD(2) == 0) SET64(4, RD(0)); goto L_001187E8;
L_001187E4:;
if (RD(2) == 0) SET64(4, RD(0));
L_001187E8:;
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_001187F0(Ctx *c) { /* func_001187F0 */
ENTER(0x1187f0);
SET32(3, RW(0) + 131);
rt_syscall(c, 0x1187f4);
 return;
}

void JP_F_00118800(Ctx *c) { /* func_00118800 */
ENTER(0x118800);
SET64(2, (s64)(s32)0x3e0000);
SET32(29, RW(29) + -32);
SET64(5, (s32)rd32(c, (RW(2) + -10632)));
SET32(3, RW(4) << 2);
wr64(c, (RW(29) + 16), RD(31));
SET64(4, RD(29) + RD(0));
SET32(6, RW(0) + 4);
SET64(31, 0x118824); SET32(5, RW(5) + RW(3)); JP_F_00118768(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00118838(Ctx *c) { /* func_00118838 */
ENTER(0x118838);
SET32(29, RW(29) + -128);
SET64(2, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 80), RD(21));
wr64(c, (RW(29) + 64), RD(20));
SET64(21, (s64)(s32)0x120000);
wr64(c, (RW(29) + 48), RD(19));
SET64(20, (s64)(s32)0x120000);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 112), RD(31));
SET32(16, RW(2) + -10624);
wr64(c, (RW(29) + 96), RD(22));
SET64(4, (s32)rd32(c, (RW(2) + -10624)));
SET64(31, 0x118878); SET64(5, (s32)rd32(c, (RW(16) + 4))); JP_F_00118938(c);
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x118884); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00118938(c);
SET64(4, (s64)(s32)0x80000000);
SET64(5, (s64)(s32)0x80080000);
SET64(31, 0x118894); SET32(6, RW(21) + -30800); JP_F_001187F0(c);
SET64(19, RD(2) + RD(0));
SET64(4, (s64)(s32)0x80000000);
SET64(5, (s64)(s32)0x80080000);
SET64(31, 0x1188a8); SET32(6, RW(20) + -30856); JP_F_001187F0(c);
SET32(17, RW(19) + -524);
SET64(18, RD(2) + RD(0));
SET32(16, RW(18) + -360);
{ int t = RD(17) == RD(16); SET64(22, (s64)(s32)0x3e0000); if (t) goto L_00118908; }
SET64(2, RD(17) < RD(16));
L_001188C0:;
{ int t = RD(2) == RD(0); SET32(4, RW(19) + 4); if (t) goto L_001188E0; }
SET64(5, (s64)(s32)0x80080000);
SET64(31, 0x1188d4); SET32(6, RW(21) + -30800); JP_F_001187F0(c);
SET64(19, RD(2) + RD(0));
SET32(17, RW(19) + -524); goto L_001188F8;
L_001188E0:;
SET32(4, RW(18) + 4);
SET64(5, (s64)(s32)0x80080000);
SET64(31, 0x1188f0); SET32(6, RW(20) + -30856); JP_F_001187F0(c);
SET64(18, RD(2) + RD(0));
SET32(16, RW(18) + -360);
L_001188F8:;
{ int t = RD(17) != RD(16); SET64(2, RD(17) < RD(16)); if (t) { POLL(); goto L_001188C0; } }
wr32(c, (RW(22) + -10632), RW(17)); goto L_0011890C;
L_00118908:;
wr32(c, (RW(22) + -10632), RW(17));
L_0011890C:;
SET64(31, rd64(c, (RW(29) + 112)));
SET64(22, rd64(c, (RW(29) + 96)));
SET64(21, rd64(c, (RW(29) + 80)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 128); return;
}

void JP_F_00118938(Ctx *c) { /* func_00118938 */
ENTER(0x118938);
SET32(3, RW(0) + 116);
rt_syscall(c, 0x11893c);
 return;
}

void JP_F_00118948(Ctx *c) { /* func_00118948 */
ENTER(0x118948);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x118958);  JP_F_00118710(c);
SET64(31, 0x118960);  JP_F_00118838(c);
SET64(31, 0x118968);  JP_F_00118E28(c);
SET64(31, 0x118970); SET32(4, RW(0) + 2); JP_F_00118FA0(c);
SET64(31, 0x118978);  JP_F_001191E0(c);
SET64(31, 0x118980);  JP_F_00110438(c);
SET64(31, 0x118988);  JP_F_00118A70(c);
SET64(31, 0x118990);  JP_F_00117F48(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0011A658(c); return; }
}

void JP_F_001189A0(Ctx *c) { /* func_001189A0 */
ENTER(0x1189a0);
SET32(3, RW(0) + 116);
rt_syscall(c, 0x1189a4);
 return;
}

void JP_F_001189B0(Ctx *c) { /* func_001189B0 */
ENTER(0x1189b0);
SET32(3, RW(0) + 90);
rt_syscall(c, 0x1189b4);
 return;
}

void JP_F_001189C0(Ctx *c) { /* func_001189C0 */
ENTER(0x1189c0);
SET32(6, RW(6) >> 2);
{ int t = RD(6) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_001189F0; }
L_001189D0:;
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(7, RW(7) + 1);
SET32(5, RW(5) + 4);
SET64(2, RD(7) < RD(6));
wr32(c, (RW(4) + 0), RW(3));
SET32(4, RW(4) + 4);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_001189D0; } }
L_001189F0:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_001189F8(Ctx *c) { /* func_001189F8 */
ENTER(0x1189f8);
SET32(3, RW(0) + 91);
rt_syscall(c, 0x1189fc);
 return;
}

void JP_F_00118A08(Ctx *c) { /* func_00118A08 */
ENTER(0x118a08);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x118a1c); SET64(4, RD(29) + RD(0)); JP_F_0010F710(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0x1fff);
SET32(16, RW(29) + 4);
SET64(3, RD(3) & RD(2));
SET64(4, RD(16) + RD(0));
SET64(3, RD(3) | 0x2000);
SET64(31, 0x118a40); wr32(c, (RW(29) + 4), RW(3)); JP_F_0010F700(c);
SET64(31, 0x118a48); SET64(4, RD(16) + RD(0)); JP_F_0010F710(c);
SET64(31, 0x118a50); SET64(4, RD(29) + RD(0)); JP_F_0010F700(c);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(2, RW(2) >> 13);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(2, RD(2) & 0x7);
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 48); return;
}

void JP_F_00118A70(Ctx *c) { /* func_00118A70 */
ENTER(0x118a70);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
SET64(31, 0x118a88); wr64(c, (RW(29) + 0), RD(16)); JP_F_00118A08(c);
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00118B04; }
SET32(18, RW(0) + 2);
SET32(16, RW(2) + -8640);
SET64(4, (s32)rd32(c, (RW(2) + -8640)));
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x118aa8); SET32(17, RW(16) + 16); JP_F_001189A0(c);
SET64(5, (s64)(s32)0x3e0000);
SET64(4, (s64)(s32)0x80070000);
SET32(6, RW(0) + 1960);
SET32(5, RW(5) + -10600);
SET64(31, 0x118ac0); SET64(4, RD(4) | 0x4000); JP_F_001189B0(c);
SET64(31, 0x118ac8); SET64(4, RD(0) + RD(0)); JP_F_0010F8E0(c);
SET64(31, 0x118ad0); SET32(4, RW(0) + 2); JP_F_0010F8E0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x118adc); SET64(5, (s32)rd32(c, (RW(16) + 12))); JP_F_001189A0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
L_00118AE0:;
SET64(31, 0x118ae8); SET32(18, RW(18) + 1); JP_F_001189F8(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x118af8); SET32(17, RW(17) + 8); JP_F_001189A0(c);
SET64(2, RD(18) < (u64)(s64)3);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_00118AE0; } }
L_00118B04:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00118B20(Ctx *c) { /* func_00118B20 */
ENTER(0x118b20);
SET32(3, RW(0) + 90);
rt_syscall(c, 0x118b24);
 return;
}

void JP_F_00118B30(Ctx *c) { /* func_00118B30 */
ENTER(0x118b30);
{ int t = RD(6) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_00118B58; }
L_00118B38:;
SET64(3, rd8(c, (RW(5) + 0)));
SET32(7, RW(7) + 1);
SET32(5, RW(5) + 1);
SET64(2, RD(7) < RD(6));
wr8(c, (RW(4) + 0), (u8)RW(3));
SET32(4, RW(4) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00118B38; } }
L_00118B58:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00118B60(Ctx *c) { /* func_00118B60 */
ENTER(0x118b60);
SET32(3, RW(0) + 116);
rt_syscall(c, 0x118b64);
 return;
}

void JP_F_00118B70(Ctx *c) { /* func_00118B70 */
ENTER(0x118b70);
SET32(29, RW(29) + -128);
SET64(2, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 64), RD(19));
SET64(3, (s64)(s32)0x3e0000);
SET64(19, (s32)rd32(c, (RW(2) + -11360)));
SET32(7, RW(3) + -8616);
wr64(c, (RW(29) + 96), RD(21));
wr64(c, (RW(29) + 80), RD(20));
SET32(2, RW(19) + 64);
wr64(c, (RW(29) + 48), RD(18));
SET64(21, RD(2) + RD(0));
wr64(c, (RW(29) + 32), RD(17));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 112), RD(31));
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(3) + -8616)));
SET64(5, (s32)rd32(c, (RW(7) + 4)));
SET64(31, 0x118bc4); wr32(c, (RW(29) + 0), RW(2)); JP_F_00118B60(c);
SET64(3, RSD(18) < (s64)16);
SET32(2, RW(0) + 15);
SET64(4, RD(19) + RD(0));
if (RD(3) == 0) SET64(18, RD(2));
SET64(5, RD(29) + RD(0));
SET64(31, 0x118be0); SET32(6, RW(0) + 4); JP_F_00118B20(c);
SET32(19, RW(19) + 4);
SET64(31, 0x118bec); SET64(4, RD(16) + RD(0)); JP_F_0012A4D8(c);
SET32(17, RW(2) + 1);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x118c00); SET64(6, RD(17) + RD(0)); JP_F_00118B20(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(3, RW(3) + RW(17));
{ int t = RSD(18) <= 0; wr32(c, (RW(29) + 0), RW(3)); if (t) goto L_00118C60; }
SET64(16, RD(20) + RD(0));
L_00118C18:;
SET64(4, RD(19) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(6, RW(0) + 4);
SET64(31, 0x118c2c); SET32(19, RW(19) + 4); JP_F_00118B20(c);
SET32(18, RW(18) + -1);
SET64(31, 0x118c38); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0012A4D8(c);
SET32(17, RW(2) + 1);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(17) + RD(0));
SET64(31, 0x118c50); SET32(16, RW(16) + 4); JP_F_00118B20(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(3, RW(3) + RW(17));
{ int t = RD(18) != RD(0); wr32(c, (RW(29) + 0), RW(3)); if (t) { POLL(); goto L_00118C18; } }
L_00118C60:;
SET64(2, RD(21) + RD(0));
SET64(31, rd64(c, (RW(29) + 112)));
SET64(21, rd64(c, (RW(29) + 96)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 64)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 128); return;
}

void JP_F_00118C88(Ctx *c) { /* func_00118C88 */
ENTER(0x118c88);
 { JP_F_001180D0(c); return; }
}

void JP_F_00118C90(Ctx *c) { /* func_00118C90 */
ENTER(0x118c90);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 0), RD(16));
SET64(18, RD(5) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(4, (s64)(s32)0x420000);
SET64(5, RD(16) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET32(4, RW(4) + -12064);
SET64(31, 0x118cc4); SET64(6, RD(7) + RD(0)); JP_F_00118B70(c);
SET64(31, 0x118ccc);  JP_F_00118C88(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(4, RD(17) + RD(0));
SET64(7, (s32)rd32(c, (RW(2) + -11360)));
SET64(5, RD(18) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x118ce8); SET32(7, RW(7) + 4); JP_F_0010F2B0(c);
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00118D00(Ctx *c) { /* func_00118D00 */
ENTER(0x118d00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x118d18); SET64(17, RD(5) + RD(0)); JP_F_00118B70(c);
SET64(31, 0x118d20); SET64(16, RD(2) + RD(0)); JP_F_00118C88(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(2) + -11360)));
SET64(5, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET32(6, RW(6) + 4);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); { JP_F_0010F2A0(c); return; }
}

void JP_F_00118D48(Ctx *c) { /* func_00118D48 */
ENTER(0x118d48);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x118d5c); SET64(16, RD(4) + RD(0)); JP_F_00118C88(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); { JP_F_0010F280(c); return; }
}

void JP_F_00118D70(Ctx *c) { /* func_00118D70 */
ENTER(0x118d70);
SET32(29, RW(29) + -32);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(4, (s64)(s32)0x420000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x118d94); SET32(4, RW(4) + -12064); JP_F_00118B70(c);
SET64(31, 0x118d9c);  JP_F_00118C88(c);
SET64(2, (s64)(s32)0x3e0000);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -11360)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(5) + 4);
SET32(29, RW(29) + 32); { JP_F_0010FA80(c); return; }
}

void JP_F_00118DC0(Ctx *c) { /* func_00118DC0 */
ENTER(0x118dc0);
SET32(3, RW(0) + 116);
rt_syscall(c, 0x118dc4);
 return;
}

void JP_F_00118DD0(Ctx *c) { /* func_00118DD0 */
ENTER(0x118dd0);
SET32(3, RW(0) + 90);
rt_syscall(c, 0x118dd4);
 return;
}

void JP_F_00118DE0(Ctx *c) { /* func_00118DE0 */
ENTER(0x118de0);
SET32(6, RW(6) >> 2);
{ int t = RD(6) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_00118E10; }
L_00118DF0:;
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(7, RW(7) + 1);
SET32(5, RW(5) + 4);
SET64(2, RD(7) < RD(6));
wr32(c, (RW(4) + 0), RW(3));
SET32(4, RW(4) + 4);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00118DF0; } }
L_00118E10:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00118E18(Ctx *c) { /* func_00118E18 */
ENTER(0x118e18);
SET32(3, RW(0) + 91);
rt_syscall(c, 0x118e1c);
 return;
}

void JP_F_00118E28(Ctx *c) { /* func_00118E28 */
ENTER(0x118e28);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x10000000);
wr64(c, (RW(29) + 48), RD(31));
SET64(2, RD(2) | 0x1810);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(3, RD(3) & 0x100);
{ int t = RD(3) != RD(0); SET64(31, rd64(c, (RW(29) + 48))); if (t) goto L_00118EE8; }
SET64(2, (s64)(s32)0x3e0000);
SET32(18, RW(0) + 2);
SET32(16, RW(2) + -6712);
SET64(4, (s32)rd32(c, (RW(2) + -6712)));
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x118e70); SET32(17, RW(16) + 16); JP_F_00118DC0(c);
SET64(5, (s64)(s32)0x3e0000);
SET64(4, (s64)(s32)0x80070000);
SET32(5, RW(5) + -8608);
SET64(4, RD(4) | 0x6000);
SET64(31, 0x118e88); SET32(6, RW(0) + 1856); JP_F_00118DD0(c);
SET64(5, (s64)(s32)0x3e0000);
SET64(4, (s64)(s32)0x80000);
SET32(5, RW(5) + -6752);
SET64(4, RD(4) | 0x2000);
SET64(31, 0x118ea0); SET32(6, RW(0) + 40); JP_F_00118DD0(c);
SET64(31, 0x118ea8); SET64(4, RD(0) + RD(0)); JP_F_0010F8E0(c);
SET64(31, 0x118eb0); SET32(4, RW(0) + 2); JP_F_0010F8E0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x118ebc); SET64(5, (s32)rd32(c, (RW(16) + 12))); JP_F_00118DC0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
L_00118EC0:;
SET64(31, 0x118ec8); SET32(18, RW(18) + 1); JP_F_00118E18(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x118ed8); SET32(17, RW(17) + 8); JP_F_00118DC0(c);
SET64(2, RD(18) < (u64)(s64)8);
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_00118EC0; } }
SET64(31, rd64(c, (RW(29) + 48)));
L_00118EE8:;
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00118F00(Ctx *c) { /* func_00118F00 */
ENTER(0x118f00);
SET64(3, (s32)rt_mfc0(c, 12));
SET64(2, (s64)(s32)0x10000);
SET64(3, RD(3) & RD(2));
{ int t = RD(3) == RD(0); SET64(6, (s64)(s32)0x10000); if (t) goto L_00118F3C; }
L_00118F18:;
rt_di(c);
SET64(2, (s32)rt_mfc0(c, 12));
SET64(2, RD(2) & RD(6));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00118F18; } }
L_00118F3C:;
SET64(2, (s32)rt_mfc0(c, 12));
SET64(2, RD(2) | 0x6);
SET64(2, RD(2) ^ 0x2);
SET64(2, RD(2) | RD(3));
rt_mtc0(c, 12, RW(2));
wr32(c, (RW(4) + 0), RW(5));
rt_mtc0(c, 30, RW(31));
return;
 return;
}

void JP_F_00118F70(Ctx *c) { /* func_00118F70 */
ENTER(0x118f70);
SET64(5, RD(4) + RD(0));
SET64(4, (s64)(s32)0xb0000000);
SET64(4, RD(4) | 0x1000); { JP_F_00118F00(c); return; }
}

void JP_F_00118F80(Ctx *c) { /* func_00118F80 */
ENTER(0x118f80);
SET64(5, RD(4) + RD(0));
SET64(4, (s64)(s32)0xb0000000);
SET64(4, RD(4) | 0x1010); { JP_F_00118F00(c); return; }
}

void JP_F_00118F90(Ctx *c) { /* func_00118F90 */
ENTER(0x118f90);
SET64(5, RD(4) + RD(0));
SET64(4, (s64)(s32)0xb0000000);
SET64(4, RD(4) | 0x1020); { JP_F_00118F00(c); return; }
}

void JP_F_00118FA0(Ctx *c) { /* func_00118FA0 */
ENTER(0x118fa0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 64), RD(20));
SET64(18, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 80), RD(31));
SET32(17, RW(18) + -6648);
wr64(c, (RW(29) + 48), RD(19));
wr64(c, (RW(29) + 0), RD(16));
SET64(2, (s32)rd32(c, (RW(17) + 8)));
{ int t = RSD(2) < 0; SET64(20, RD(4) + RD(0)); if (t) goto L_00118FDC; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8001); goto L_001190D4;
L_00118FDC:;
SET64(19, (s64)(s32)0x510000);
wr64(c, (RW(18) + -6648), RD(0));
SET32(16, RW(19) + -12992);
wr32(c, (RW(17) + 16), RW(0));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x118ffc); SET32(6, RW(0) + 8192); JP_F_001273D0(c);
wr32(c, (RW(17) + 20), RW(16));
SET32(3, RW(16) + 8192);
SET32(2, RW(0) + 127);
SET32(16, RW(16) + 8128);
L_00119010:;
wr32(c, (RW(16) + 0), RW(3));
SET32(2, RW(2) + -1);
SET32(16, RW(16) + -64);
SET32(3, RW(3) + -64);
{ int t = RSD(2) >= 0;  if (t) { POLL(); goto L_00119010; } }
SET32(2, RW(19) + -12992);
SET64(31, 0x119038); wr32(c, (RW(2) + 8128), RW(0)); JP_F_0011A268(c);
SET64(5, (s64)(s32)0x120000);
SET32(4, RW(0) + 11);
SET32(5, RW(5) + -27328);
SET64(6, RD(0) + RD(0));
SET64(31, 0x119050); SET64(7, RD(0) + RD(0)); JP_F_0010F350(c);
SET64(3, RD(2) + RD(0));
if (RSD(3) >= 0) { SET32(2, RW(18) + -6648); goto L_00119068; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x9021); goto L_001190D4;
L_00119068:;
SET64(31, 0x119070); wr32(c, (RW(2) + 8), RW(3)); JP_F_001186A0(c);
SET64(3, (s64)(s32)0x10000000);
SET64(17, RD(2) + RD(0));
SET64(3, RD(3) | 0x1010);
SET64(2, (s64)(s32)0xffff0000);
SET64(16, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(2) | 0xfffc);
SET64(2, RD(16) & RD(2));
SET64(16, RD(2) | RD(20));
SET64(16, RD(16) | 0x300);
SET64(2, RD(16) & 0x80);
{ int t = RD(2) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_001190B0; }
SET64(31, 0x1190a8); SET64(16, RD(16) | 0xc80); JP_F_00118F70(c);
SET64(31, 0x1190b0); SET64(4, RD(0) | 0xffff); JP_F_00118F90(c);
L_001190B0:;
SET64(31, 0x1190b8); SET64(4, RD(16) + RD(0)); JP_F_00118F80(c);
SET64(31, 0x1190c0); SET32(4, RW(0) + 11); JP_F_001101A8(c);
{ int t = RD(17) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_001190D4; }
SET64(31, 0x1190d0);  JP_F_001186F8(c);
SET64(2, RD(0) + RD(0));
L_001190D4:;
SET64(31, rd64(c, (RW(29) + 80)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 96); return;
}

void JP_F_001190F8(Ctx *c) { /* func_001190F8 */
ENTER(0x1190f8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 0), RD(16));
SET64(18, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 48), RD(31));
SET32(16, RW(18) + -6648);
wr64(c, (RW(29) + 16), RD(17));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
{ int t = RSD(2) >= 0;  if (t) goto L_0011912C; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8001); goto L_00119198;
L_0011912C:;
SET64(2, (s32)rd32(c, (RW(16) + 16)));
{ int t = RD(2) == RD(0);  if (t) goto L_00119144; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x10); goto L_00119198;
L_00119144:;
SET64(31, 0x11914c);  JP_F_001186A0(c);
SET64(5, (s32)rd32(c, (RW(16) + 8)));
SET64(17, RD(2) + RD(0));
SET64(31, 0x11915c); SET32(4, RW(0) + 11); JP_F_0010F360(c);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_00119180; }
SET64(31, 0x11916c); SET32(4, RW(0) + 11); JP_F_00110140(c);
SET64(31, 0x119174); SET32(4, RW(0) + 3072); JP_F_00118F80(c);
SET64(31, 0x11917c); SET64(4, RD(0) + RD(0)); JP_F_00118F70(c);
SET32(2, RW(0) + -1);
L_00119180:;
wr64(c, (RW(18) + -6648), RD(0));
{ int t = RD(17) == RD(0); wr32(c, (RW(16) + 8), RW(2)); if (t) goto L_00119194; }
SET64(31, 0x119194);  JP_F_001186F8(c);
L_00119194:;
SET64(2, RD(0) + RD(0));
L_00119198:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_001191B0(Ctx *c) { /* func_001191B0 */
ENTER(0x1191b0);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -6640)));
{ int t = RSD(3) >= 0; SET64(3, (s64)(s32)0x10000000); if (t) goto L_001191CC; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8001); return;
L_001191CC:;
SET64(3, RD(3) | 0x1010);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(2) & 0x3); return;
}

void JP_F_001191E0(Ctx *c) { /* func_001191E0 */
ENTER(0x1191e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x1191f4);  JP_F_001186A0(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0x1010);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, RD(2) & 0x80);
{ int t = RD(3) == RD(0);  if (t) goto L_00119228; }
{ int t = RD(16) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00119260; }
SET64(31, 0x119220);  JP_F_001186F8(c);
SET32(2, RW(0) + 1); goto L_00119260;
L_00119228:;
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) | 0xf3ff);
SET64(4, RD(2) & RD(4));
SET64(31, 0x11923c); SET64(4, RD(4) | 0x80); JP_F_00118F80(c);
SET64(31, 0x119244);  JP_F_001197E0(c);
SET64(31, 0x11924c); SET64(4, RD(2) + RD(0)); JP_F_001192F0(c);
{ int t = RD(16) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00119260; }
SET64(31, 0x11925c);  JP_F_001186F8(c);
SET64(2, RD(0) + RD(0));
L_00119260:;
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00119270(Ctx *c) { /* func_00119270 */
ENTER(0x119270);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x119284);  JP_F_001186A0(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0x1010);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, RD(2) & 0x80);
{ int t = RD(3) != RD(0);  if (t) goto L_001192B8; }
{ int t = RD(16) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_001192DC; }
SET64(31, 0x1192b0);  JP_F_001186F8(c);
SET64(2, RD(0) + RD(0)); goto L_001192DC;
L_001192B8:;
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) | 0xf37f);
SET64(31, 0x1192c8); SET64(4, RD(2) & RD(4)); JP_F_00118F80(c);
{ int t = RD(16) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_001192DC; }
SET64(31, 0x1192d8);  JP_F_001186F8(c);
SET32(2, RW(0) + 1);
L_001192DC:;
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001192F0(Ctx *c) { /* func_001192F0 */
ENTER(0x1192f0);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 48), RD(31));
SET32(2, RW(2) + -6648);
wr64(c, (RW(29) + 32), RD(18));
SET64(7, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(3, (s32)rd32(c, (RW(2) + 28)));
{ int t = RSD(3) >= 0; SET64(6, (s32)rd32(c, (RW(2) + 24))); if (t) goto L_00119468; }
SET64(2, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0x1010);
SET64(18, (s32)rd32(c, (RW(2) + 0)));
if (RD(6) != RD(0)) { SET64(2, rd64(c, (RW(6) + 32))); goto L_0011935C; }
SET64(31, 0x119338); SET64(4, RD(0) + RD(0)); JP_F_00118F90(c);
SET64(4, (s64)(s32)0xffff0000);
SET64(31, rd64(c, (RW(29) + 48)));
SET64(4, RD(4) | 0xf7ff);
SET64(17, rd64(c, (RW(29) + 16)));
SET64(4, RD(18) & RD(4));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 64); { JP_F_00118F80(c); return; }
L_0011935C:;
SET64(3, rd64(c, (RW(6) + 16)));
SET64(4, rd64(c, (RW(6) + 24)));
SET64(2, RD(2) + RD(3));
SET64(6, (s32)rd32(c, (RW(6) + 0)));
{ int t = RD(6) == RD(0); SET64(16, RD(2) - RD(4)); if (t) goto L_001193D4; }
SET64(2, rd64(c, (RW(6) + 32)));
SET64(3, RD(16) + (s64)29491);
SET64(4, rd64(c, (RW(6) + 16)));
SET64(5, rd64(c, (RW(6) + 24)));
SET64(2, RD(2) + RD(4));
SET64(2, RD(2) - RD(5));
SET64(3, RD(2) < RD(3));
{ int t = RD(3) == RD(0); SET64(17, RD(18) & 0x3); if (t) goto L_001193D4; }
SET64(16, RD(2) + RD(0));
L_001193A0:;
SET64(6, (s32)rd32(c, (RW(6) + 0)));
{ int t = RD(6) == RD(0); SET64(3, RD(16) + (s64)29491); if (t) goto L_001193D8; }
SET64(2, rd64(c, (RW(6) + 32)));
SET64(4, rd64(c, (RW(6) + 16)));
SET64(5, rd64(c, (RW(6) + 24)));
SET64(2, RD(2) + RD(4));
SET64(2, RD(2) - RD(5));
SET64(3, RD(2) < RD(3));
if (RD(3) == RD(0)) { SET64(2, RD(16) - RD(7)); goto L_001193DC; }
SET64(16, RD(2) + RD(0)); { POLL(); goto L_001193A0; }
L_001193D4:;
SET64(17, RD(18) & 0x3);
L_001193D8:;
SET64(2, RD(16) - RD(7));
L_001193DC:;
SET64(2, RSD(2) < (s64)29491);
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x10000000); if (t) goto L_00119430; }
SET32(5, RW(17) << 2);
SET64(2, RD(2) | 0x1000);
SET32(4, RW(0) + 29491);
SET64(4, RD(4) >> (RW(5) & 63));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(4, RD(4) << 32);
SET64(4, RSD(4) >> 32);
SET64(31, 0x11940c); SET32(4, RW(3) + RW(4)); JP_F_00118F90(c);
SET64(4, (s64)(s32)0xffff0000);
SET64(31, rd64(c, (RW(29) + 48)));
SET64(4, RD(4) | 0xf7ff);
SET64(17, rd64(c, (RW(29) + 16)));
SET64(4, RD(18) & RD(4));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 64); { JP_F_00118F80(c); return; }
L_00119430:;
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) | 0xf7ff);
SET64(31, 0x119440); SET64(4, RD(18) & RD(4)); JP_F_00118F80(c);
SET32(4, RW(17) << 2);
SET64(31, rd64(c, (RW(29) + 48)));
SET64(4, RD(16) >> (RW(4) & 63));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(4, RD(4) << 32);
SET64(4, RSD(4) >> 32);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); { JP_F_00118F90(c); return; }
L_00119468:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00119480(Ctx *c) { /* func_00119480 */
ENTER(0x119480);
SET64(6, RD(4) + RD(0));
SET64(9, (s64)(s32)0x3e0000);
SET64(2, rd64(c, (RW(6) + 32)));
SET32(5, RW(9) + -6648);
SET64(3, rd64(c, (RW(6) + 16)));
SET64(8, RD(0) + RD(0));
SET64(4, rd64(c, (RW(6) + 24)));
SET64(2, RD(2) + RD(3));
SET64(5, (s32)rd32(c, (RW(5) + 24)));
SET64(7, RD(2) - RD(4)); goto L_001194B4;
L_001194B0:;
SET64(5, (s32)rd32(c, (RW(8) + 0)));
L_001194B4:;
if (RD(5) == RD(0)) { wr32(c, (RW(6) + 4), RW(8)); goto L_001194E0; }
SET64(2, rd64(c, (RW(5) + 32)));
SET64(3, rd64(c, (RW(5) + 16)));
SET64(4, rd64(c, (RW(5) + 24)));
SET64(2, RD(2) + RD(3));
SET64(2, RD(2) - RD(4));
SET64(2, RD(7) < RD(2));
if (RD(2) == RD(0)) { SET64(8, RD(5) + RD(0)); { POLL(); goto L_001194B0; } }
wr32(c, (RW(6) + 4), RW(8));
L_001194E0:;
{ int t = RD(5) == RD(0); wr32(c, (RW(6) + 0), RW(5)); if (t) goto L_001194EC; }
wr32(c, (RW(5) + 4), RW(6));
L_001194EC:;
{ int t = RD(8) == RD(0); SET32(2, RW(9) + -6648); if (t) goto L_001194FC; }
wr32(c, (RW(8) + 0), RW(6)); return;
L_001194FC:;
wr32(c, (RW(2) + 24), RW(6)); return;
}

void JP_F_00119508(Ctx *c) { /* func_00119508 */
ENTER(0x119508);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(4) + 0))); if (t) goto L_0011951C; }
wr32(c, (RW(2) + 0), RW(3)); goto L_00119524;
L_0011951C:;
SET64(2, (s64)(s32)0x3e0000);
wr32(c, (RW(2) + -6624), RW(3));
L_00119524:;
if (RD(3) == RD(0)) { wr32(c, (RW(4) + 4), RW(0)); goto L_00119538; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(3) + 4), RW(2));
wr32(c, (RW(4) + 4), RW(0));
L_00119538:;
SET64(2, RD(3) + RD(0)); return;
}

void JP_F_00119540(Ctx *c) { /* func_00119540 */
ENTER(0x119540);
SET32(29, RW(29) + -144);
SET64(3, (s64)(s32)0x10000000);
wr64(c, (RW(29) + 96), RD(22));
SET64(3, RD(3) | 0x1010);
wr64(c, (RW(29) + 128), RD(31));
SET64(22, RD(6) + RD(0));
wr64(c, (RW(29) + 112), RD(23));
wr64(c, (RW(29) + 80), RD(21));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 48), RD(19));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(2) & 0x400);
{ int t = RD(2) == RD(0); SET64(21, (s64)(s32)0x3e0000); if (t) goto L_001196E4; }
SET32(2, RW(21) + -6648);
SET64(16, (s32)rd32(c, (RW(2) + 24)));
{ int t = RD(16) == RD(0); SET64(20, RD(21) + RD(0)); if (t) goto L_001196E4; }
SET32(23, RW(0) + 14745);
SET64(2, (s64)(s32)0x10000000);
L_001195A0:;
SET64(3, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0x1000);
SET64(3, RD(3) | 0x1010);
SET64(6, (s32)rd32(c, (RW(2) + 0)));
SET64(17, (s32)rd32(c, (RW(3) + 0)));
SET64(4, rd64(c, (RW(16) + 32)));
SET64(2, rd64(c, (RW(16) + 16)));
SET64(5, RD(17) & 0x800);
SET64(3, rd64(c, (RW(16) + 24)));
SET64(4, RD(4) + RD(2));
{ int t = RD(5) == RD(0); SET64(18, RD(4) - RD(3)); if (t) goto L_001195F8; }
SET64(2, rd64(c, (RW(20) + -6648)));
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) | 0xfbff);
SET64(2, RD(2) + (s64)1);
SET64(4, RD(17) & RD(4));
wr64(c, (RW(20) + -6648), RD(2));
SET64(31, 0x1195f0);  JP_F_00118F80(c);
SET64(6, (s64)(s32)0x10000000);
SET64(6, (s32)rd32(c, (RW(6) + 4096)));
L_001195F8:;
SET64(4, rd64(c, (RW(20) + -6648)));
SET64(2, RD(6) << 32);
SET64(2, RD(2) >> 32);
SET64(3, RD(17) & 0x3);
SET64(4, RD(4) << 16);
SET32(3, RW(3) << 2);
SET64(4, RD(4) | RD(2));
SET64(17, RD(4) << (RW(3) & 63));
SET64(2, RD(17) < RD(18));
{ int t = RD(2) != RD(0); SET32(19, RW(20) + -6648); if (t) goto L_001196E4; }
SET64(31, 0x11962c); SET64(4, RD(16) + RD(0)); JP_F_00119508(c);
SET64(18, RD(2) + RD(0));
SET64(6, rd64(c, (RW(16) + 24)));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET32(7, RW(16) << 4);
SET64(3, rd64(c, (RW(16) + 16)));
SET64(6, RD(17) + RD(6));
SET64(2, RD(7) | RD(2));
wr32(c, (RW(19) + 28), RW(2));
SET64(6, RD(6) - RD(3));
SET64(28, (s32)rd32(c, (RW(16) + 44)));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(8, RD(22) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 40)));
SET64(4, RD(7) | RD(4));
SET64(5, rd64(c, (RW(16) + 32)));
{ u32 t = RW(2); SET64(31, 0x119670); SET64(7, (s32)rd32(c, (RW(16) + 48))); rt_call(c, t); }
SET64(5, RD(2) + RD(0));
{ int t = RD(5) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_00119694; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0xfffd);
SET64(3, RD(3) & RD(2));
wr32(c, (RW(16) + 12), RW(3)); goto L_001196D0;
L_00119694:;
{ int t = RD(5) != RD(2); SET32(2, RW(0) + 14744); if (t) goto L_001196B4; }
SET64(2, (s32)rd32(c, (RW(19) + 20)));
wr32(c, (RW(19) + 20), RW(16));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 12), RW(0)); goto L_001196D0;
L_001196B4:;
SET64(3, rd64(c, (RW(16) + 32)));
SET64(2, RD(2) < RD(5));
SET64(4, RD(16) + RD(0));
if (RD(2) == 0) SET64(5, RD(23));
SET64(3, RD(3) + RD(5));
SET64(31, 0x1196d0); wr64(c, (RW(16) + 32), RD(3)); JP_F_00119480(c);
L_001196D0:;
SET64(16, RD(18) + RD(0));
{ int t = RD(16) != RD(0); SET64(2, (s64)(s32)0x10000000); if (t) { POLL(); goto L_001195A0; } }
SET32(4, RW(21) + -6648); goto L_001196E8;
L_001196E4:;
SET32(4, RW(21) + -6648);
L_001196E8:;
SET32(3, RW(0) + -1);
wr32(c, (RW(4) + 28), RW(3));
SET64(2, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0x1000);
SET64(3, (s64)(s32)0x10000000);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(3, RD(3) | 0x1010);
SET64(16, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(16) & 0x800);
{ int t = RD(2) == RD(0);  if (t) goto L_0011973C; }
SET64(2, rd64(c, (RW(21) + -6648)));
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) | 0xfbff);
SET64(2, RD(2) + (s64)1);
SET64(4, RD(16) & RD(4));
wr64(c, (RW(21) + -6648), RD(2));
SET64(31, 0x119734);  JP_F_00118F80(c);
SET64(4, (s64)(s32)0x10000000);
SET64(4, (s32)rd32(c, (RW(4) + 4096)));
L_0011973C:;
SET64(2, rd64(c, (RW(21) + -6648)));
SET64(3, RD(4) << 32);
SET64(3, RD(3) >> 32);
SET64(4, RD(16) & 0x3);
SET64(2, RD(2) << 16);
SET32(4, RW(4) << 2);
SET64(2, RD(2) | RD(3));
SET64(31, 0x119760); SET64(4, RD(2) << (RW(4) & 63)); JP_F_001192F0(c);
SET64(2, (s64)(s32)0x10000000);
SET64(2, (s32)rd32(c, (RW(2) + 4096)));
SET64(3, (s64)(s32)0x10000000);
SET64(3, (s32)rd32(c, (RW(3) + 4112)));
SET64(2, RD(3) & 0x800);
{ int t = RD(2) == RD(0);  if (t) goto L_001197A4; }
SET64(2, rd64(c, (RW(21) + -6648)));
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) | 0xfbff);
SET64(2, RD(2) + (s64)1);
SET64(4, RD(3) & RD(4));
wr64(c, (RW(21) + -6648), RD(2));
SET64(31, 0x11979c);  JP_F_00118F80(c);
SET64(2, (s64)(s32)0x10000000);
SET64(2, (s32)rd32(c, (RW(2) + 4096)));
L_001197A4:;
SET64(2, rd64(c, (RW(21) + -6648)));
rt_ei(c);
SET64(31, rd64(c, (RW(29) + 128)));
SET64(2, RD(0) + RD(0));
SET64(23, rd64(c, (RW(29) + 112)));
SET64(22, rd64(c, (RW(29) + 96)));
SET64(21, rd64(c, (RW(29) + 80)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 144); return;
}

void JP_F_001197E0(Ctx *c) { /* func_001197E0 */
ENTER(0x1197e0);
SET64(3, (s64)(s32)0x10000000);
SET64(4, (s64)(s32)0x3e0000);
SET64(3, RD(3) | 0x1000);
SET64(2, rd32(c, (RW(3) + 0)));
SET64(8, (s32)rd32(c, (RW(3) + 16)));
SET64(10, rd64(c, (RW(4) + -6648)));
SET64(9, RD(8) & 0x800);
{ int t = RD(9) == RD(0); SET32(9, RW(0) + 2); if (t) goto L_0011980C; }
SET64(2, rd32(c, (RW(3) + 0)));
SET64(10, RD(10) + (s64)1);
L_0011980C:;
SET64(8, RD(8) & 0x3);
SET64(10, RD(10) << 16);
if (RD(8) == 0) SET64(9, RD(0));
SET64(2, RD(2) | RD(10));
SET64(9, RD(9) << (RW(8) & 63));
SET64(2, RD(2) << (RW(9) & 63));
 return;
}

void JP_F_00119830(Ctx *c) { /* func_00119830 */
ENTER(0x119830);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x119844);  JP_F_001186A0(c);
SET64(3, (s64)(s32)0x10000000);
SET64(4, (s64)(s32)0x3e0000);
SET64(3, RD(3) | 0x1000);
SET64(16, rd32(c, (RW(3) + 0)));
SET64(8, (s32)rd32(c, (RW(3) + 16)));
SET64(10, rd64(c, (RW(4) + -6648)));
SET64(9, RD(8) & 0x800);
{ int t = RD(9) == RD(0); SET32(9, RW(0) + 2); if (t) goto L_00119870; }
SET64(16, rd32(c, (RW(3) + 0)));
SET64(10, RD(10) + (s64)1);
L_00119870:;
SET64(8, RD(8) & 0x3);
SET64(10, RD(10) << 16);
if (RD(8) == 0) SET64(9, RD(0));
SET64(16, RD(16) | RD(10));
SET64(9, RD(9) << (RW(8) & 63));
SET64(16, RD(16) << (RW(9) & 63));
{ int t = RD(2) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_0011989C; }
SET64(31, 0x119898);  JP_F_001186F8(c);
SET64(2, RD(16) + RD(0));
L_0011989C:;
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001198B0(Ctx *c) { /* func_001198B0 */
ENTER(0x1198b0);
SET64(2, (s64)(s32)0x3e0000);
SET32(7, RW(2) + -6648);
SET64(6, (s32)rd32(c, (RW(7) + 20)));
{ int t = RD(6) != RD(0);  if (t) goto L_001198D0; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8005); return;
L_001198D0:;
SET64(2, (s32)rd32(c, (RW(7) + 16)));
SET32(5, RW(6) << 4);
SET64(4, (s32)rd32(c, (RW(6) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(6) + 40), RW(0));
wr32(c, (RW(7) + 16), RW(2));
wr32(c, (RW(6) + 12), RW(0));
wr32(c, (RW(7) + 20), RW(4));
SET64(3, (s32)rd32(c, (RW(7) + 12)));
wr64(c, (RW(6) + 24), RD(0));
SET32(3, RW(3) + 1);
wr32(c, (RW(7) + 12), RW(3));
SET64(2, (s32)rd32(c, (RW(7) + 12)));
SET32(2, RW(2) << 1);
SET64(2, RD(2) & 0x3fe);
SET64(2, RD(2) | 0x1);
wr32(c, (RW(6) + 8), RW(2));
SET64(2, (s32)rd32(c, (RW(6) + 8)));
SET64(2, RD(5) | RD(2)); return;
}

void JP_F_00119920(Ctx *c) { /* func_00119920 */
ENTER(0x119920);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x119938);  JP_F_001186A0(c);
SET64(31, 0x119940); SET64(16, RD(2) + RD(0)); JP_F_001198B0(c);
{ int t = RD(16) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_00119950; }
SET64(31, 0x119950);  JP_F_001186F8(c);
L_00119950:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00119968(Ctx *c) { /* func_00119968 */
ENTER(0x119968);
SET32(29, RW(29) + -48);
SET32(2, RW(4) >> 10);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET32(16, RW(2) << 6);
{ int t = RSD(4) < 0; wr64(c, (RW(29) + 16), RD(17)); if (t) goto L_00119994; }
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, RD(4) & 0x3ff);
if (RD(2) == RD(3)) { SET64(2, (s64)(s32)0x3e0000); goto L_001199A0; }
L_00119994:;
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8002); goto L_001199F4;
L_001199A0:;
SET32(17, RW(2) + -6648);
SET64(3, (s32)rd32(c, (RW(17) + 28)));
if (RD(3) != RD(4)) { SET64(2, (s32)rd32(c, (RW(16) + 12))); goto L_001199BC; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x10); goto L_001199F4;
L_001199BC:;
SET64(2, RD(2) & 0x2);
{ int t = RD(2) == RD(0);  if (t) goto L_001199D0; }
SET64(31, 0x1199d0); SET64(4, RD(16) + RD(0)); JP_F_00119508(c);
L_001199D0:;
wr32(c, (RW(16) + 8), RW(0));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 12), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET64(3, (s32)rd32(c, (RW(17) + 16)));
wr32(c, (RW(16) + 0), RW(4));
SET32(3, RW(3) + -1);
wr32(c, (RW(17) + 20), RW(16));
wr32(c, (RW(17) + 16), RW(3));
L_001199F4:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00119A08(Ctx *c) { /* func_00119A08 */
ENTER(0x119a08);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x119a20); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x119a2c); SET64(17, RD(2) + RD(0)); JP_F_00119968(c);
{ int t = RD(17) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00119A3C; }
SET64(31, 0x119a3c);  JP_F_001186F8(c);
L_00119A3C:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00119A58(Ctx *c) { /* func_00119A58 */
ENTER(0x119a58);
SET64(2, (s64)(s32)0x3e0000);
SET32(3, RW(2) + -6648);
SET64(2, (s32)rd32(c, (RW(3) + 8)));
{ int t = RSD(2) >= 0;  if (t) goto L_00119A78; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8001); return;
L_00119A78:;
{ int t = RD(4) == RD(0);  if (t) goto L_00119A88; }
SET64(2, (s32)rd32(c, (RW(3) + 16)));
wr32(c, (RW(4) + 0), RW(2));
L_00119A88:;
{ int t = RD(5) == RD(0);  if (t) goto L_00119AA0; }
SET64(3, (s32)rd32(c, (RW(3) + 16)));
SET32(2, RW(0) + 128);
SET32(2, RW(2) - RW(3));
wr32(c, (RW(5) + 0), RW(2));
L_00119AA0:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00119AA8(Ctx *c) { /* func_00119AA8 */
ENTER(0x119aa8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x119ac8); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
SET64(4, RD(16) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(31, 0x119ad8); SET64(5, RD(17) + RD(0)); JP_F_00119A58(c);
{ int t = RD(18) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00119AE8; }
SET64(31, 0x119ae8);  JP_F_001186F8(c);
L_00119AE8:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00119B08(Ctx *c) { /* func_00119B08 */
ENTER(0x119b08);
SET32(29, RW(29) + -48);
SET32(2, RW(4) >> 10);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET32(16, RW(2) << 6);
{ int t = RSD(4) < 0; wr64(c, (RW(29) + 16), RD(17)); if (t) goto L_00119B34; }
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, RD(4) & 0x3ff);
if (RD(2) == RD(3)) { SET64(2, (s64)(s32)0x3e0000); goto L_00119B40; }
L_00119B34:;
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8002); goto L_00119BA0;
L_00119B40:;
SET32(2, RW(2) + -6648);
SET64(3, (s32)rd32(c, (RW(2) + 28)));
if (RD(3) != RD(4)) { SET64(2, (s32)rd32(c, (RW(16) + 12))); goto L_00119B5C; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x10); goto L_00119BA0;
L_00119B5C:;
SET64(2, RD(2) & 0x1);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00119BA0; }
SET64(31, 0x119b70);  JP_F_001197E0(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
wr64(c, (RW(16) + 16), RD(17));
SET64(2, RD(2) | 0x1);
SET64(3, RD(2) & 0x2);
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 12), RW(2)); if (t) goto L_00119B9C; }
SET64(31, 0x119b94); SET64(4, RD(16) + RD(0)); JP_F_00119480(c);
SET64(31, 0x119b9c); SET64(4, RD(17) + RD(0)); JP_F_001192F0(c);
L_00119B9C:;
SET64(2, RD(0) + RD(0));
L_00119BA0:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00119BB8(Ctx *c) { /* func_00119BB8 */
ENTER(0x119bb8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x119bd0); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x119bdc); SET64(17, RD(2) + RD(0)); JP_F_00119B08(c);
{ int t = RD(17) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00119BEC; }
SET64(31, 0x119bec);  JP_F_001186F8(c);
L_00119BEC:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00119C08(Ctx *c) { /* func_00119C08 */
ENTER(0x119c08);
SET32(29, RW(29) + -48);
SET32(2, RW(4) >> 10);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET32(16, RW(2) << 6);
{ int t = RSD(4) < 0; wr64(c, (RW(29) + 16), RD(17)); if (t) goto L_00119C34; }
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, RD(4) & 0x3ff);
if (RD(2) == RD(3)) { SET64(2, (s64)(s32)0x3e0000); goto L_00119C40; }
L_00119C34:;
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8002); goto L_00119CB8;
L_00119C40:;
SET32(2, RW(2) + -6648);
SET64(3, (s32)rd32(c, (RW(2) + 28)));
if (RD(3) != RD(4)) { SET64(2, (s32)rd32(c, (RW(16) + 12))); goto L_00119C5C; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x10); goto L_00119CB8;
L_00119C5C:;
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00119CB8; }
SET64(31, 0x119c70);  JP_F_001197E0(c);
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET64(17, RD(2) + RD(0));
SET64(4, rd64(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0xffff0000);
SET64(3, rd64(c, (RW(16) + 24)));
SET64(2, RD(2) | 0xfffe);
SET64(4, RD(17) - RD(4));
SET64(6, RD(5) & 0x2);
SET64(3, RD(3) + RD(4));
SET64(5, RD(5) & RD(2));
wr64(c, (RW(16) + 24), RD(3));
{ int t = RD(6) == RD(0); wr32(c, (RW(16) + 12), RW(5)); if (t) goto L_00119CB4; }
SET64(31, 0x119cac); SET64(4, RD(16) + RD(0)); JP_F_00119508(c);
SET64(31, 0x119cb4); SET64(4, RD(17) + RD(0)); JP_F_001192F0(c);
L_00119CB4:;
SET32(2, RW(0) + 1);
L_00119CB8:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00119CD0(Ctx *c) { /* func_00119CD0 */
ENTER(0x119cd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x119ce8); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x119cf4); SET64(17, RD(2) + RD(0)); JP_F_00119C08(c);
{ int t = RD(17) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00119D04; }
SET64(31, 0x119d04);  JP_F_001186F8(c);
L_00119D04:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00119D20(Ctx *c) { /* func_00119D20 */
ENTER(0x119d20);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(17) >> 10);
wr64(c, (RW(29) + 48), RD(19));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x119d4c); SET32(16, RW(2) << 6); JP_F_001186A0(c);
{ int t = RSD(17) < 0; SET64(19, RD(2) + RD(0)); if (t) goto L_00119D74; }
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, RD(17) & 0x3ff);
{ int t = RD(2) != RD(3); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00119D74; }
SET32(2, RW(2) + -6648);
SET64(3, (s32)rd32(c, (RW(2) + 28)));
if (RD(3) != RD(17)) { SET64(2, (s32)rd32(c, (RW(16) + 12))); goto L_00119D8C; }
L_00119D74:;
{ int t = RD(19) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_00119DD0; }
SET64(31, 0x119d84);  JP_F_001186F8(c);
SET32(2, RW(0) + -1); goto L_00119DD0;
L_00119D8C:;
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0); SET64(17, rd64(c, (RW(16) + 24))); if (t) goto L_00119DB8; }
SET64(31, 0x119da0);  JP_F_001197E0(c);
SET64(3, rd64(c, (RW(16) + 16)));
wr64(c, (RW(16) + 24), RD(18));
SET64(3, RD(2) - RD(3));
wr64(c, (RW(16) + 16), RD(2));
SET64(17, RD(17) + RD(3)); goto L_00119DBC;
L_00119DB8:;
wr64(c, (RW(16) + 24), RD(18));
L_00119DBC:;
{ int t = RD(19) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_00119DD0; }
SET64(31, 0x119dcc);  JP_F_001186F8(c);
SET64(2, RD(17) + RD(0));
L_00119DD0:;
SET64(31, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00119DF0(Ctx *c) { /* func_00119DF0 */
ENTER(0x119df0);
SET32(2, RW(4) >> 10);
{ int t = RSD(4) < 0; SET32(5, RW(2) << 6); if (t) goto L_00119E0C; }
SET64(3, (s32)rd32(c, (RW(5) + 8)));
SET64(2, RD(4) & 0x3ff);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(5) + 12))); goto L_00119E14; }
L_00119E0C:;
SET32(2, RW(0) + -1); return;
L_00119E14:;
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_00119E30; }
SET64(3, rd64(c, (RW(5) + 24)));
SET64(2, rd64(c, (RW(5) + 16)));
SET64(2, RD(2) - RD(3)); return;
L_00119E30:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00119E38(Ctx *c) { /* func_00119E38 */
ENTER(0x119e38);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x119e50); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x119e5c); SET64(17, RD(2) + RD(0)); JP_F_00119DF0(c);
{ int t = RD(17) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00119E6C; }
SET64(31, 0x119e6c);  JP_F_001186F8(c);
L_00119E6C:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00119E88(Ctx *c) { /* func_00119E88 */
ENTER(0x119e88);
SET32(29, RW(29) + -48);
SET32(2, RW(4) >> 10);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET32(17, RW(2) << 6);
{ int t = RSD(4) < 0; wr64(c, (RW(29) + 0), RD(16)); if (t) goto L_00119EB4; }
SET64(3, (s32)rd32(c, (RW(17) + 8)));
SET64(2, RD(4) & 0x3ff);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 12))); goto L_00119EBC; }
L_00119EB4:;
SET32(2, RW(0) + -1); goto L_00119EE0;
L_00119EBC:;
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(17) + 24))); if (t) goto L_00119EDC; }
SET64(31, 0x119ed0);  JP_F_001197E0(c);
SET64(3, rd64(c, (RW(17) + 16)));
SET64(2, RD(2) - RD(3));
SET64(16, RD(16) + RD(2));
L_00119EDC:;
SET64(2, RD(16) + RD(0));
L_00119EE0:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00119EF8(Ctx *c) { /* func_00119EF8 */
ENTER(0x119ef8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x119f10); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x119f1c); SET64(17, RD(2) + RD(0)); JP_F_00119E88(c);
{ int t = RD(17) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_00119F2C; }
SET64(31, 0x119f2c);  JP_F_001186F8(c);
L_00119F2C:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00119F48(Ctx *c) { /* func_00119F48 */
ENTER(0x119f48);
SET32(29, RW(29) + -80);
SET32(2, RW(4) >> 10);
wr64(c, (RW(29) + 48), RD(19));
wr64(c, (RW(29) + 32), RD(18));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(17));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
{ int t = RSD(4) < 0; SET32(16, RW(2) << 6); if (t) goto L_00119F88; }
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, RD(4) & 0x3ff);
if (RD(2) == RD(3)) { SET64(2, (s64)(s32)0x3e0000); goto L_00119F94; }
L_00119F88:;
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8002); goto L_0011A020;
L_00119F94:;
SET32(2, RW(2) + -6648);
SET64(3, (s32)rd32(c, (RW(2) + 28)));
if (RD(3) != RD(4)) { SET64(3, (s32)rd32(c, (RW(16) + 12))); goto L_00119FB0; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x10); goto L_0011A020;
L_00119FB0:;
SET64(2, RD(3) & 0x2);
{ int t = RD(2) == RD(0);  if (t) goto L_00119FC8; }
SET64(31, 0x119fc4); SET64(4, RD(16) + RD(0)); JP_F_00119508(c);
SET64(3, (s32)rd32(c, (RW(16) + 12)));
L_00119FC8:;
{ int t = RD(17) != RD(0); wr32(c, (RW(16) + 40), RW(17)); if (t) goto L_00119FE4; }
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0xfffd);
SET64(2, RD(3) & RD(2));
wr32(c, (RW(16) + 12), RW(2)); goto L_0011A00C;
L_00119FE4:;
SET64(2, RD(3) | 0x2);
wr64(c, (RW(16) + 32), RD(18));
wr32(c, (RW(16) + 12), RW(2));
wr32(c, (RW(16) + 44), RW(28));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 48), RW(19)); if (t) goto L_0011A00C; }
SET64(31, 0x11a00c); SET64(4, RD(16) + RD(0)); JP_F_00119480(c);
L_0011A00C:;
SET64(31, 0x11a014);  JP_F_001197E0(c);
SET64(31, 0x11a01c); SET64(4, RD(2) + RD(0)); JP_F_001192F0(c);
SET64(2, RD(0) + RD(0));
L_0011A020:;
SET64(31, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0011A040(Ctx *c) { /* func_0011A040 */
ENTER(0x11a040);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(19));
wr64(c, (RW(29) + 32), RD(18));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(17));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 80), RD(31));
SET64(31, 0x11a070); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
SET64(4, RD(16) + RD(0));
SET64(20, RD(2) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x11a088); SET64(7, RD(19) + RD(0)); JP_F_00119F48(c);
{ int t = RD(20) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0011A098; }
SET64(31, 0x11a098);  JP_F_001186F8(c);
L_0011A098:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 80)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 96); return;
}

void JP_F_0011A0C0(Ctx *c) { /* func_0011A0C0 */
ENTER(0x11a0c0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(18, RD(6) + RD(0));
SET64(31, 0x11a0e8); SET64(5, (s64)(s32)0x8ca0000); JP_F_001206B0(c);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
if (RD(16) != RD(0)) { wr32(c, (RW(16) + 0), RW(2)); goto L_0011A0F8; }
L_0011A0F8:;
{ int t = RD(18) == RD(0); SET64(3, (s64)(s32)0x8ca0000); if (t) goto L_0011A150; }
SET64(5, (s64)(s32)0x8ca0000);
mul_u(c, 0, 0, RW(2), RW(3));
SET64(6, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(6, RD(6) << 32);
SET64(3, RD(3) << 32);
SET64(6, RD(6) >> 32);
SET64(3, RD(3) | RD(6));
SET64(3, RD(17) - RD(3));
SET64(2, RD(3) << 5);
SET64(2, RD(2) - RD(3));
SET64(4, RD(2) << 6);
SET64(4, RD(4) - RD(2));
SET64(4, RD(4) << 3);
SET64(4, RD(4) + RD(3));
SET64(31, 0x11a144); SET64(4, RD(4) << 6); JP_F_001206B0(c);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
wr32(c, (RW(18) + 0), RW(2));
L_0011A150:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0011A168(Ctx *c) { /* func_0011A168 */
ENTER(0x11a168);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x8ca0000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(4, RD(5) + RD(0));
mul_u(c, 1, 0, RW(16), RW(2));
mul_u(c, 0, 0, RW(4), RW(2));
SET64(5, (s64)(s32)0xf0000);
SET64(5, RD(5) | 0x4240);
SET64(16, c->hi.d[1]);
SET64(6, c->lo.d[0]);
SET64(16, RD(16) << 32);
SET64(6, RD(6) << 32);
SET64(4, c->hi.d[0]);
SET64(6, RD(6) >> 32);
SET64(4, RD(4) << 32);
SET64(4, RD(4) | RD(6));
SET64(6, c->lo.d[1]);
SET64(6, RD(6) << 32);
SET64(6, RD(6) >> 32);
SET64(31, 0x11a1c4); SET64(16, RD(16) | RD(6)); JP_F_001206B0(c);
SET64(2, RD(16) + RD(2));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0011A1D8(Ctx *c) { /* func_0011A1D8 */
ENTER(0x11a1d8);
SET32(29, RW(29) + -16);
{ int t = RSD(4) < 0; wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0011A1F4; }
SET64(31, 0x11a1ec);  JP_F_00121240(c);
c->f[1].u = c->f[0].u; goto L_0011A208;
L_0011A1F4:;
SET64(2, RD(4) >> 1);
SET64(4, RD(4) & 0x1);
SET64(31, 0x11a204); SET64(4, RD(4) | RD(2)); JP_F_00121240(c);
c->f[1].f = fpu(F(0) + F(0));
L_0011A208:;
SET64(1, (s64)(s32)0x4d0c0000);
SET64(1, RD(1) | 0xa000);
c->f[0].u = RW(1);
SET64(31, rd64(c, (RW(29) + 0)));
c->f[0].f = fpu_div(F(0), F(1));
SET32(29, RW(29) + 16); return;
}

void JP_F_0011A230(Ctx *c) { /* func_0011A230 */
ENTER(0x11a230);
SET64(1, (s64)(s32)0x4d0c0000);
SET64(1, RD(1) | 0xa000);
c->f[0].u = RW(1);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
c->f[12].f = fpu_div(F(0), F(12));
SET64(31, 0x11a258);  JP_F_001214B8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0011A268(Ctx *c) { /* func_0011A268 */
ENTER(0x11a268);
SET64(5, (s64)(s32)0x510000);
SET64(3, (s64)(s32)0x510000);
SET32(2, RW(5) + -4800);
SET32(4, RW(0) + 63);
wr32(c, (RW(3) + -3776), RW(2));
SET32(3, RW(2) + 1024);
SET32(2, RW(2) + 1008);
L_0011A288:;
wr32(c, (RW(2) + 0), RW(3));
SET32(4, RW(4) + -1);
SET32(2, RW(2) + -16);
SET32(3, RW(3) + -16);
{ int t = RSD(4) >= 0;  if (t) { POLL(); goto L_0011A288; } }
SET32(3, RW(5) + -4800);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(3) + 1008), RW(0)); return;
}

void JP_F_0011A2B8(Ctx *c) { /* func_0011A2B8 */
ENTER(0x11a2b8);
SET32(29, RW(29) + -32);
SET64(4, RD(4) & 0xfe);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(3, RW(16) << 4);
SET64(3, RD(3) | RD(4));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(7, (s32)rd32(c, (RW(16) + 12)));
{ u32 t = RW(2); SET64(31, 0x11a2e4); SET64(4, RD(3) | 0x1); rt_call(c, t); }
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 16))); if (t) goto L_0011A308; }
SET64(3, (s64)(s32)0x510000);
SET32(2, RW(0) + -1);
SET64(4, (s32)rd32(c, (RW(3) + -3776)));
wr32(c, (RW(3) + -3776), RW(16));
wr32(c, (RW(16) + 0), RW(4));
wr32(c, (RW(16) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
L_0011A308:;
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0011A318(Ctx *c) { /* func_0011A318 */
ENTER(0x11a318);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(22));
wr64(c, (RW(29) + 80), RD(21));
SET64(22, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(20));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 112), RD(31));
SET64(20, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(19));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
{ int t = RD(20) != RD(0); wr64(c, (RW(29) + 0), RD(16)); if (t) goto L_0011A358; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x16); goto L_0011A41C;
L_0011A358:;
SET64(31, 0x11a360); SET64(18, (s64)(s32)0x510000); JP_F_001186A0(c);
SET64(16, (s32)rd32(c, (RW(18) + -3776)));
{ int t = RD(16) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0011A374; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(18) + -3776), RW(2));
L_0011A374:;
{ int t = RD(16) != RD(0);  if (t) goto L_0011A398; }
{ int t = RD(19) == RD(0);  if (t) goto L_0011A38C; }
SET64(31, 0x11a38c);  JP_F_001186F8(c);
L_0011A38C:;
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8005); goto L_0011A41C;
L_0011A398:;
SET64(31, 0x11a3a0);  JP_F_00119920(c);
SET64(17, RD(2) + RD(0));
if (RSD(17) >= 0) { wr32(c, (RW(16) + 8), RW(20)); goto L_0011A3D4; }
SET64(2, (s32)rd32(c, (RW(18) + -3776)));
wr32(c, (RW(18) + -3776), RW(16));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 4), RW(0));
{ int t = RD(19) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_0011A41C; }
SET64(31, 0x11a3cc);  JP_F_001186F8(c);
SET64(2, RD(17) + RD(0)); goto L_0011A41C;
L_0011A3D4:;
SET64(6, (s64)(s32)0x120000);
wr32(c, (RW(16) + 12), RW(21));
SET32(6, RW(6) + -23880);
wr32(c, (RW(16) + 4), RW(17));
SET64(5, RD(22) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x11a3f4); SET64(7, RD(16) + RD(0)); JP_F_0011A040(c);
SET64(31, 0x11a3fc); SET64(4, RD(17) + RD(0)); JP_F_00119BB8(c);
{ int t = RD(19) == RD(0); SET32(2, RW(16) << 4); if (t) goto L_0011A410; }
SET64(31, 0x11a40c);  JP_F_001186F8(c);
SET32(2, RW(16) << 4);
L_0011A410:;
SET64(3, RD(17) & 0xfe);
SET64(2, RD(2) | RD(3));
SET64(2, RD(2) | 0x1);
L_0011A41C:;
SET64(31, rd64(c, (RW(29) + 112)));
SET64(22, rd64(c, (RW(29) + 96)));
SET64(21, rd64(c, (RW(29) + 80)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 128); return;
}

void JP_F_0011A448(Ctx *c) { /* func_0011A448 */
ENTER(0x11a448);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(21));
wr64(c, (RW(29) + 64), RD(20));
SET64(21, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(19));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 96), RD(31));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
{ int t = RD(19) != RD(0); wr64(c, (RW(29) + 0), RD(16)); if (t) goto L_0011A484; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x16); goto L_0011A514;
L_0011A484:;
SET64(18, (s64)(s32)0x510000);
SET64(16, (s32)rd32(c, (RW(18) + -3776)));
{ int t = RD(16) == RD(0);  if (t) goto L_0011A49C; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(18) + -3776), RW(2));
L_0011A49C:;
{ int t = RD(16) != RD(0);  if (t) goto L_0011A4B0; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8005); goto L_0011A514;
L_0011A4B0:;
SET64(31, 0x11a4b8);  JP_F_001198B0(c);
SET64(17, RD(2) + RD(0));
if (RSD(17) >= 0) { wr32(c, (RW(16) + 8), RW(19)); goto L_0011A4DC; }
SET64(3, (s32)rd32(c, (RW(18) + -3776)));
wr32(c, (RW(18) + -3776), RW(16));
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(16) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 96))); goto L_0011A518;
L_0011A4DC:;
SET64(6, (s64)(s32)0x120000);
wr32(c, (RW(16) + 12), RW(20));
SET32(6, RW(6) + -23880);
wr32(c, (RW(16) + 4), RW(17));
SET64(5, RD(21) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x11a4fc); SET64(7, RD(16) + RD(0)); JP_F_00119F48(c);
SET64(31, 0x11a504); SET64(4, RD(17) + RD(0)); JP_F_00119B08(c);
SET32(2, RW(16) << 4);
SET64(3, RD(17) & 0xfe);
SET64(2, RD(2) | RD(3));
SET64(2, RD(2) | 0x1);
L_0011A514:;
SET64(31, rd64(c, (RW(29) + 96)));
L_0011A518:;
SET64(21, rd64(c, (RW(29) + 80)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 112); return;
}

void JP_F_0011A538(Ctx *c) { /* func_0011A538 */
ENTER(0x11a538);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(17));
SET32(2, RW(16) >> 8);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x11a55c); SET32(17, RW(2) << 4); JP_F_001186A0(c);
{ int t = RSD(16) < 0; SET64(18, RD(2) + RD(0)); if (t) goto L_0011A578; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(2, RD(16) ^ RD(2));
SET64(2, RD(2) & 0xff);
{ int t = RD(2) == RD(0);  if (t) goto L_0011A594; }
L_0011A578:;
{ int t = RD(18) == RD(0);  if (t) goto L_0011A588; }
SET64(31, 0x11a588);  JP_F_001186F8(c);
L_0011A588:;
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8002); goto L_0011A5C8;
L_0011A594:;
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x11a5a0);  JP_F_00119A08(c);
SET64(3, (s64)(s32)0x510000);
SET64(2, (s32)rd32(c, (RW(3) + -3776)));
wr32(c, (RW(3) + -3776), RW(17));
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(17) + 4), RW(0));
{ int t = RD(18) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0011A5C8; }
SET64(31, 0x11a5c4);  JP_F_001186F8(c);
SET64(2, RD(0) + RD(0));
L_0011A5C8:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0011A5E0(Ctx *c) { /* func_0011A5E0 */
ENTER(0x11a5e0);
SET32(29, RW(29) + -32);
SET32(2, RW(4) >> 8);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
{ int t = RSD(4) < 0; SET32(16, RW(2) << 4); if (t) goto L_0011A60C; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(2, RD(4) ^ RD(2));
SET64(2, RD(2) & 0xff);
{ int t = RD(2) == RD(0);  if (t) goto L_0011A618; }
L_0011A60C:;
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x8002); goto L_0011A648;
L_0011A618:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x11a624);  JP_F_00119968(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) != RD(0); SET64(2, RD(4) + RD(0)); if (t) goto L_0011A648; }
SET64(2, (s64)(s32)0x510000);
SET64(3, (s32)rd32(c, (RW(2) + -3776)));
wr32(c, (RW(2) + -3776), RW(16));
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(16) + 4), RW(0));
SET64(2, RD(4) + RD(0));
L_0011A648:;
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0011A658(Ctx *c) { /* func_0011A658 */
ENTER(0x11a658);
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s64)(s32)0x3e0000);
SET64(4, (s64)(s32)0x510000);
wr32(c, (RW(2) + -6616), RW(0));
wr32(c, (RW(3) + -6612), RW(0));
SET32(4, RW(4) + -3768);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 512); { JP_F_001273D0(c); return; }
}

void JP_F_0011A680(Ctx *c) { /* func_0011A680 */
ENTER(0x11a680);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(19));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x11a6a4); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(5, (s64)(s32)0x3e0000);
SET64(19, (s32)rd32(c, (RW(3) + -6616)));
SET64(18, RD(2) + RD(0));
wr32(c, (RW(5) + -6612), RW(17));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(3) + -6616), RW(16));
SET32(6, RW(17) << 4);
SET64(31, 0x11a6cc); SET64(5, RD(0) + RD(0)); JP_F_001273D0(c);
{ int t = RD(18) == RD(0); SET64(2, RD(19) + RD(0)); if (t) goto L_0011A6E0; }
SET64(31, 0x11a6dc);  JP_F_001186F8(c);
SET64(2, RD(19) + RD(0));
L_0011A6E0:;
SET64(31, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0011A700(Ctx *c) { /* func_0011A700 */
ENTER(0x11a700);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(19));
wr64(c, (RW(29) + 32), RD(18));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET64(16, RD(4) + RD(0));
{ int t = RSD(16) >= 0; wr64(c, (RW(29) + 16), RD(17)); if (t) goto L_0011A744; }
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, (s64)(s32)0x510000);
SET64(2, RD(2) | 0xffff);
SET32(17, RW(3) + -3768);
SET64(16, RD(16) & RD(2));
SET32(2, RW(0) + 32); goto L_0011A754;
L_0011A744:;
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s64)(s32)0x3e0000);
SET64(17, (s32)rd32(c, (RW(2) + -6616)));
SET64(2, (s32)rd32(c, (RW(3) + -6612)));
L_0011A754:;
SET64(2, RD(16) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_0011A76C; }
SET64(2, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0x69); goto L_0011A79C;
L_0011A76C:;
SET64(31, 0x11a774);  JP_F_001186A0(c);
SET32(3, RW(16) << 4);
SET32(3, RW(3) + RW(17));
wr32(c, (RW(3) + 0), RW(18));
wr32(c, (RW(3) + 4), RW(19));
SET64(4, RD(28) + RD(0));
{ int t = RD(2) == RD(0); wr32(c, (RW(3) + 8), RW(4)); if (t) goto L_0011A798; }
SET64(31, 0x11a798);  JP_F_001186F8(c);
L_0011A798:;
SET64(2, RD(0) + RD(0));
L_0011A79C:;
SET64(31, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0011A7B8(Ctx *c) { /* func_0011A7B8 */
ENTER(0x11a7b8);
if (RSD(4) >= 0) { SET64(2, (s64)(s32)0x3e0000); goto L_0011A7DC; }
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, (s64)(s32)0x510000);
SET64(2, RD(2) | 0xffff);
SET32(5, RW(3) + -3768);
SET64(4, RD(4) & RD(2));
SET32(2, RW(0) + 32); goto L_0011A7E8;
L_0011A7DC:;
SET64(3, (s64)(s32)0x3e0000);
SET64(5, (s32)rd32(c, (RW(2) + -6616)));
SET64(2, (s32)rd32(c, (RW(3) + -6612)));
L_0011A7E8:;
SET64(2, RD(4) < RD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(4) << 4); if (t) goto L_0011A7FC; }
SET32(2, RW(0) + -105); return;
L_0011A7FC:;
SET64(2, RD(0) + RD(0));
SET32(3, RW(3) + RW(5));
wr32(c, (RW(3) + 0), RW(0)); return;
}

void JP_F_0011A810(Ctx *c) { /* func_0011A810 */
ENTER(0x11a810);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(19));
wr64(c, (RW(29) + 64), RD(31));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(16)); if (t) goto L_0011A840; }
SET64(2, (s64)(s32)0x510000);
SET32(3, RW(0) + 32);
SET32(2, RW(2) + -3768); goto L_0011A850;
L_0011A840:;
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(2) + -6616)));
SET64(3, (s32)rd32(c, (RW(3) + -6612)));
L_0011A850:;
SET64(18, RD(28) + RD(0));
{ int t = RSD(3) <= 0; SET64(16, RD(2) + RD(0)); if (t) goto L_0011A894; }
SET64(17, RD(3) + RD(0));
L_0011A860:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) == RD(0)) { SET32(17, RW(17) + -1); goto L_0011A88C; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(3, RD(28) + RD(0));
SET64(28, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(19) + RD(0));
{ u32 t = RW(6); SET64(31, 0x11a888); SET64(5, (s32)rd32(c, (RW(16) + 4))); rt_call(c, t); }
SET32(17, RW(17) + -1);
L_0011A88C:;
{ int t = RD(17) != RD(0); SET32(16, RW(16) + 16); if (t) { POLL(); goto L_0011A860; } }
L_0011A894:;
SET64(2, RD(28) + RD(0));
SET64(28, RD(18) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0011A8B8(Ctx *c) { /* func_0011A8B8 */
ENTER(0x11a8b8);
SET32(29, RW(29) + -16);
SET64(12, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(3, RD(5) + RD(0));
SET64(7, RD(3) << 32);
SET64(7, RSD(7) >> 32);
SET64(11, RSD(3) >> 32);
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xffff);
SET64(9, RD(11) & RD(2));
SET64(3, RD(12) + RD(0));
SET64(6, RD(3) << 32);
SET64(6, RSD(6) >> 32);
SET64(10, RSD(3) >> 32);
SET64(8, RD(10) & RD(2));
SET64(3, (s64)(s32)0x7ff00000);
SET32(2, RW(0) - RW(7));
SET64(2, RD(7) | RD(2));
SET32(2, RW(2) >> 31);
SET64(2, RD(9) | RD(2));
SET64(2, RD(3) < RD(2));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0011A930; }
SET32(2, RW(0) - RW(6));
SET64(2, RD(6) | RD(2));
SET32(2, RW(2) >> 31);
SET64(2, RD(8) | RD(2));
SET64(2, RD(3) < RD(2));
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0xc0100000); goto L_0011A948; }
L_0011A930:;
SET64(4, RD(5) + RD(0));
SET64(5, RD(12) + RD(0));
SET64(31, 0x11a940);  JP_F_00121B60(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8;
L_0011A948:;
SET32(2, RW(11) + RW(2));
SET64(2, RD(2) | RD(7));
if (RD(2) != RD(0)) { SET32(2, RSW(11) >> 30); goto L_0011A968; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0011E550(c); return; }
L_0011A968:;
SET32(3, RW(10) >> 31);
SET64(2, RD(2) & 0x2);
SET64(4, RD(8) | RD(6));
{ int t = RD(4) != RD(0); SET64(16, RD(3) | RD(2)); if (t) goto L_0011A9C0; }
SET32(3, RW(0) + 2);
SET64(1, (s64)(s32)0x420000);
SET64(2, rd64(c, (RW(1) + -12000)));
if (RD(16) == RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8; }
SET64(2, RSD(16) < (s64)3);
if (RD(2) == RD(0)) { SET32(3, RW(0) + 3); goto L_0011A9B0; }
if (RSD(16) < 0) { SET64(2, RD(9) | RD(7)); goto L_0011A9C4; }
SET64(2, RD(12) + RD(0));
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8;
L_0011A9B0:;
SET64(1, (s64)(s32)0x420000);
SET64(2, rd64(c, (RW(1) + -11992)));
if (RD(16) == RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8; }
L_0011A9C0:;
SET64(2, RD(9) | RD(7));
L_0011A9C4:;
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x7ff00000); if (t) goto L_0011AAB0; }
{ int t = RD(9) != RD(2);  if (t) goto L_0011AAA8; }
{ int t = RD(8) != RD(9); SET32(2, RW(0) + 1); if (t) goto L_0011AA48; }
SET32(3, RW(0) + 1);
SET64(1, (s64)(s32)0x420000);
SET64(2, rd64(c, (RW(1) + -11984)));
if (RD(16) == RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8; }
SET64(2, RSD(16) < (s64)2);
if (RD(2) == RD(0)) { SET32(3, RW(0) + 2); goto L_0011AA18; }
SET64(1, (s64)(s32)0x420000);
SET64(2, rd64(c, (RW(1) + -11976)));
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8; }
SET64(2, (s64)(s32)0x7ff00000); goto L_0011AAA8;
L_0011AA18:;
SET64(1, (s64)(s32)0x420000);
SET64(2, rd64(c, (RW(1) + -11968)));
if (RD(16) == RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8; }
SET32(2, RW(0) + 3);
if (RD(16) != RD(2)) { SET64(2, (s64)(s32)0x7ff00000); goto L_0011AAA8; }
SET64(1, (s64)(s32)0x420000);
SET64(2, rd64(c, (RW(1) + -11960)));
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8;
L_0011AA48:;
{ int t = RD(16) == RD(2); SET64(3, (s64)(s32)0x420000); if (t) goto L_0011AA98; }
SET64(2, RSD(16) < (s64)2);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 2); if (t) goto L_0011AA70; }
SET64(2, RD(0) + RD(0));
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8; }
SET64(2, (s64)(s32)0x7ff00000); goto L_0011AAA8;
L_0011AA70:;
SET64(1, (s64)(s32)0x420000);
SET64(2, rd64(c, (RW(1) + -11952)));
{ int t = RD(16) == RD(3); SET32(3, RW(0) + 3); if (t) goto L_0011ABE4; }
SET64(1, (s64)(s32)0x420000);
SET64(2, rd64(c, (RW(1) + -11944)));
if (RD(16) == RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8; }
SET64(2, (s64)(s32)0x7ff00000); goto L_0011AAA8;
L_0011AA98:;
SET64(2, rd64(c, (RW(3) + -12008)));
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8;
L_0011AAA8:;
{ int t = RD(8) != RD(2); SET32(3, RW(8) - RW(9)); if (t) goto L_0011AAD0; }
L_0011AAB0:;
SET64(1, (s64)(s32)0x420000);
SET64(2, rd64(c, (RW(1) + -11936)));
{ int t = RSD(10) < 0; SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0011ABE4; }
SET64(1, (s64)(s32)0x420000);
SET64(2, rd64(c, (RW(1) + -11928)));
SET64(31, rd64(c, (RW(29) + 8))); goto L_0011ABEC;
L_0011AAD0:;
SET64(1, (s64)(s32)0x420000);
SET64(4, rd64(c, (RW(1) + -11920)));
SET32(3, RSW(3) >> 20);
SET64(2, RSD(3) < (s64)61);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0011AB28; }
{ int t = RSD(11) >= 0; SET64(2, RSD(3) < (s64)-60); if (t) goto L_0011AAFC; }
SET64(4, RD(0) + RD(0));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0011AB28; }
L_0011AAFC:;
SET64(4, RD(12) + RD(0));
SET64(31, 0x11ab08);  JP_F_00121EA8(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11ab14);  JP_F_0011EB88(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11ab20);  JP_F_0011E550(c);
SET64(4, RD(2) + RD(0));
SET32(2, RW(0) + 1);
L_0011AB28:;
{ int t = RD(16) == RD(2); SET64(3, (s64)(s32)0x80000000); if (t) goto L_0011AB60; }
SET64(2, RSD(16) < (s64)2);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 2); if (t) goto L_0011AB50; }
SET64(2, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0011ABE8; }
 goto L_0011ABC0;
L_0011AB50:;
{ int t = RD(16) == RD(2);  if (t) goto L_0011AB90; }
 goto L_0011ABC0;
L_0011AB60:;
SET64(2, RD(4) + RD(0));
SET64(2, RSD(2) >> 32);
SET64(5, (s64)(s32)0xffff0000);
SET64(5, RD(5) >> 32);
SET64(2, RD(2) ^ RD(3));
SET64(4, RD(4) & RD(5));
SET64(2, RD(2) << 32);
SET64(4, RD(4) | RD(2));
SET64(2, RD(4) + RD(0));
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8;
L_0011AB90:;
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11912)));
SET64(31, 0x11aba0);  JP_F_00121BB8(c);
SET64(1, (s64)(s32)0x420000);
SET64(4, rd64(c, (RW(1) + -11904)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11abb4);  JP_F_00121BB8(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011ABE8;
L_0011ABC0:;
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11896)));
SET64(31, 0x11abd0);  JP_F_00121BB8(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11888)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11abe4);  JP_F_00121BB8(c);
L_0011ABE4:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0011ABE8:;
SET64(31, rd64(c, (RW(29) + 8)));
L_0011ABEC:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0011ABF8(Ctx *c) { /* func_0011ABF8 */
ENTER(0x11abf8);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(20));
SET64(20, RD(5) + RD(0));
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 72), RD(21));
wr64(c, (RW(29) + 80), RD(22));
wr64(c, (RW(29) + 88), RD(23));
wr64(c, (RW(29) + 96), RD(30));
SET64(2, RD(5) + RD(0));
SET64(30, RSD(2) >> 32);
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, (s64)(s32)0x3fe90000);
SET64(3, RD(3) | 0xffff);
SET64(2, RD(2) | 0x21fb);
SET64(16, RD(30) & RD(3));
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 104), RD(31)); if (t) goto L_0011AC68; }
SET64(2, RD(0) + RD(0));
wr64(c, (RW(20) + 0), RD(5));
wr64(c, (RW(20) + 8), RD(2));
SET64(2, RD(0) + RD(0)); goto L_0011B180;
L_0011AC68:;
SET64(2, (s64)(s32)0x40020000);
SET64(2, RD(2) | 0xd97b);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x41390000); if (t) goto L_0011ADC0; }
{ int t = RSD(30) <= 0;  if (t) goto L_0011AD20; }
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11408)));
SET64(31, 0x11ac94);  JP_F_00121BB8(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3ff90000);
SET64(2, RD(2) | 0x21fb);
{ int t = RD(16) == RD(2);  if (t) goto L_0011ACC0; }
SET64(1, (s64)(s32)0x420000);
SET64(16, rd64(c, (RW(1) + -11400)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
 goto L_0011ACE8;
L_0011ACC0:;
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11392)));
SET64(4, RD(17) + RD(0));
SET64(1, (s64)(s32)0x420000);
SET64(16, rd64(c, (RW(1) + -11384)));
SET64(31, 0x11acdc);  JP_F_00121BB8(c);
SET64(17, RD(2) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
L_0011ACE8:;
SET64(31, 0x11acf0);  JP_F_00121BB8(c);
SET64(4, RD(17) + RD(0));
wr64(c, (RW(20) + 0), RD(2));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11ad04);  JP_F_00121BB8(c);
SET64(5, RD(16) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11ad14);  JP_F_00121BB8(c);
wr64(c, (RW(20) + 8), RD(2));
SET32(2, RW(0) + 1); goto L_0011B180;
L_0011AD20:;
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11376)));
SET64(31, 0x11ad30);  JP_F_00121B60(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3ff90000);
SET64(2, RD(2) | 0x21fb);
{ int t = RD(16) == RD(2);  if (t) goto L_0011AD60; }
SET64(1, (s64)(s32)0x420000);
SET64(16, rd64(c, (RW(1) + -11368)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
 goto L_0011AD88;
L_0011AD60:;
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11360)));
SET64(4, RD(17) + RD(0));
SET64(1, (s64)(s32)0x420000);
SET64(16, rd64(c, (RW(1) + -11352)));
SET64(31, 0x11ad7c);  JP_F_00121B60(c);
SET64(17, RD(2) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
L_0011AD88:;
SET64(31, 0x11ad90);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
wr64(c, (RW(20) + 0), RD(2));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11ada4);  JP_F_00121BB8(c);
SET64(5, RD(16) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11adb4);  JP_F_00121B60(c);
wr64(c, (RW(20) + 8), RD(2));
SET32(2, RW(0) + -1); goto L_0011B180;
L_0011ADC0:;
SET64(2, RD(2) | 0x21fb);
SET64(2, RSD(2) < RSD(16));
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x7fef0000); goto L_0011B058; }
SET64(31, 0x11add8);  JP_F_0011EB88(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11344)));
SET64(17, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x11adf0);  JP_F_00121C20(c);
SET64(5, RD(0) | 0xff80);
SET64(5, RD(5) << 46);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11ae04);  JP_F_00121B60(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11ae10);  JP_F_00122210(c);
SET64(22, RD(2) + RD(0));
SET64(31, 0x11ae1c); SET64(4, RD(22) + RD(0)); JP_F_00122158(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11336)));
SET64(21, RD(2) + RD(0));
SET64(4, RD(21) + RD(0));
SET64(31, 0x11ae34);  JP_F_00121C20(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11ae44);  JP_F_00121BB8(c);
SET64(4, RD(21) + RD(0));
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11328)));
SET64(19, RD(2) + RD(0));
SET64(31, 0x11ae5c);  JP_F_00121C20(c);
SET64(18, RD(2) + RD(0));
SET64(2, RSD(22) < (s64)32);
{ int t = RD(2) == RD(0); SET32(2, RW(22) << 2); if (t) goto L_0011AE90; }
SET64(3, (s64)(s32)0x420000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + -11620)));
{ int t = RD(16) == RD(3);  if (t) goto L_0011AE90; }
SET64(4, RD(19) + RD(0));
 goto L_0011AFEC;
L_0011AE90:;
SET64(4, RD(19) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x11aea0); SET32(23, RSW(16) >> 20); JP_F_00121BB8(c);
wr64(c, (RW(20) + 0), RD(2));
SET64(3, RD(2) + RD(0));
SET64(3, RD(3) >> 52);
SET64(3, RD(3) & 0x7ff);
SET32(16, RW(23) - RW(3));
SET64(2, RSD(16) < (s64)17);
{ int t = RD(2) != RD(0);  if (t) goto L_0011AFFC; }
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11320)));
SET64(4, RD(21) + RD(0));
SET64(17, RD(19) + RD(0));
SET64(31, 0x11aed8);  JP_F_00121C20(c);
SET64(4, RD(17) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11aeec);  JP_F_00121BB8(c);
SET64(4, RD(21) + RD(0));
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11312)));
SET64(19, RD(2) + RD(0));
SET64(31, 0x11af04);  JP_F_00121C20(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x11af18);  JP_F_00121BB8(c);
SET64(5, RD(18) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11af28);  JP_F_00121BB8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11af38);  JP_F_00121BB8(c);
SET64(4, RD(19) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11af4c);  JP_F_00121BB8(c);
wr64(c, (RW(20) + 0), RD(2));
SET64(3, RD(2) + RD(0));
SET64(3, RD(3) >> 52);
SET64(3, RD(3) & 0x7ff);
SET32(16, RW(23) - RW(3));
SET64(2, RSD(16) < (s64)50);
{ int t = RD(2) != RD(0);  if (t) goto L_0011AFFC; }
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11304)));
SET64(4, RD(21) + RD(0));
SET64(17, RD(19) + RD(0));
SET64(31, 0x11af84);  JP_F_00121C20(c);
SET64(4, RD(17) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11af98);  JP_F_00121BB8(c);
SET64(4, RD(21) + RD(0));
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -11296)));
SET64(19, RD(2) + RD(0));
SET64(31, 0x11afb0);  JP_F_00121C20(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x11afc4);  JP_F_00121BB8(c);
SET64(5, RD(18) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11afd4);  JP_F_00121BB8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11afe4);  JP_F_00121BB8(c);
SET64(4, RD(19) + RD(0));
SET64(18, RD(2) + RD(0));
L_0011AFEC:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x11aff8);  JP_F_00121BB8(c);
wr64(c, (RW(20) + 0), RD(2));
L_0011AFFC:;
SET64(21, rd64(c, (RW(20) + 0)));
SET64(4, RD(19) + RD(0));
SET64(5, RD(21) + RD(0));
SET64(31, 0x11b010);  JP_F_00121BB8(c);
SET64(5, RD(18) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11b020);  JP_F_00121BB8(c);
SET64(17, RD(2) + RD(0));
wr64(c, (RW(20) + 8), RD(17));
{ int t = RSD(30) >= 0; SET64(2, RD(22) + RD(0)); if (t) goto L_0011B180; }
SET64(16, RD(0) + RD(0));
SET64(5, RD(21) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x11b044);  JP_F_00121BB8(c);
SET64(4, RD(16) + RD(0));
wr64(c, (RW(20) + 0), RD(2));
SET64(5, RD(17) + RD(0));
 goto L_0011B170;
L_0011B058:;
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(16));
if (RD(2) == RD(0)) { SET32(4, RSW(16) >> 20); goto L_0011B088; }
SET64(31, 0x11b070);  JP_F_00121BB8(c);
SET64(3, RD(2) + RD(0));
wr64(c, (RW(20) + 0), RD(3));
wr64(c, (RW(20) + 8), RD(3));
SET64(2, RD(0) + RD(0)); goto L_0011B180;
L_0011B088:;
SET64(2, RD(5) + RD(0));
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET64(2, RD(2) << 32);
SET32(19, RW(4) + -1046);
SET32(3, RW(19) << 20);
SET32(3, RW(16) - RW(3));
SET64(2, RD(2) >> 32);
SET64(3, RD(3) << 32);
SET64(17, RD(2) | RD(3));
SET64(18, RD(29) + RD(0));
SET32(16, RW(0) + 1);
L_0011B0B8:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x11b0c4); SET32(16, RW(16) + -1); JP_F_00122210(c);
SET64(31, 0x11b0cc); SET64(4, RD(2) + RD(0)); JP_F_00122158(c);
SET64(4, RD(17) + RD(0));
wr64(c, (RW(18) + 0), RD(2));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11b0e0); SET32(18, RW(18) + 8); JP_F_00121BB8(c);
SET64(5, RD(0) | 0x82e0);
SET64(5, RD(5) << 47);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11b0f4);  JP_F_00121C20(c);
SET64(17, RD(2) + RD(0));
{ int t = RSD(16) >= 0;  if (t) { POLL(); goto L_0011B0B8; } }
SET32(18, RW(0) + 3);
wr64(c, (RW(29) + 16), RD(17));
SET32(16, RW(29) + 16); goto L_0011B114;
L_0011B110:;
SET32(18, RW(18) + -1);
L_0011B114:;
SET64(4, rd64(c, (RW(16) + 0)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x11b124); SET32(16, RW(16) + -8); JP_F_00122108(c);
{ int t = RD(2) == RD(0); SET64(9, (s64)(s32)0x420000); if (t) { POLL(); goto L_0011B110; } }
SET64(6, RD(19) + RD(0));
SET64(7, RD(18) + RD(0));
SET32(9, RW(9) + -11880);
SET64(4, RD(29) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(31, 0x11b148); SET32(8, RW(0) + 2); JP_F_0011CA80(c);
{ int t = RSD(30) >= 0; SET64(22, RD(2) + RD(0)); if (t) goto L_0011B180; }
SET64(5, rd64(c, (RW(20) + 0)));
SET64(16, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x11b164);  JP_F_00121BB8(c);
SET64(4, RD(16) + RD(0));
SET64(5, rd64(c, (RW(20) + 8)));
wr64(c, (RW(20) + 0), RD(2));
L_0011B170:;
SET64(31, 0x11b178);  JP_F_00121BB8(c);
wr64(c, (RW(20) + 8), RD(2));
SET32(2, RW(0) - RW(22));
L_0011B180:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(22, rd64(c, (RW(29) + 80)));
SET64(23, rd64(c, (RW(29) + 88)));
SET64(30, rd64(c, (RW(29) + 96)));
SET64(31, rd64(c, (RW(29) + 104)));
SET32(29, RW(29) + 112); return;
}

void JP_F_0011B1B0(Ctx *c) { /* func_0011B1B0 */
ENTER(0x11b1b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, (s64)(s32)0x80000000);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 40), RD(21));
SET64(2, RD(16) + RD(0));
SET64(7, RD(2) << 32);
SET64(7, RSD(7) >> 32);
SET64(5, RSD(2) >> 32);
SET64(3, (s64)(s32)0x7ff00000);
SET64(2, RD(5) & RD(3));
{ int t = RD(2) != RD(3); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_0011B218; }
SET64(5, RD(16) + RD(0));
SET64(31, 0x11b200);  JP_F_00121C20(c);
SET64(5, RD(16) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11b210);  JP_F_00121B60(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011B4AC;
L_0011B218:;
{ int t = RSD(5) > 0; SET32(17, RSW(5) >> 20); if (t) goto L_0011B268; }
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, RD(16) + RD(0));
SET64(3, RD(3) | 0xffff);
SET64(3, RD(5) & RD(3));
SET64(3, RD(3) | RD(7));
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0011B4AC; }
{ int t = RSD(5) >= 0;  if (t) goto L_0011B268; }
SET64(5, RD(16) + RD(0));
SET64(31, 0x11b250);  JP_F_00121BB8(c);
SET64(4, RD(2) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11b260);  JP_F_00121EA8(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011B4AC;
L_0011B268:;
{ int t = RD(17) != RD(0); SET64(2, (s64)(s32)0xf0000); if (t) goto L_0011B2E0; }
{ int t = RD(5) != RD(0); SET64(2, (s64)(s32)0x100000); if (t) goto L_0011B298; }
L_0011B278:;
SET32(2, RW(7) >> 11);
SET32(7, RW(7) << 21);
SET64(5, RD(5) | RD(2));
{ int t = RD(5) == RD(0); SET32(17, RW(17) + -21); if (t) { POLL(); goto L_0011B278; } }
SET64(2, (s64)(s32)0x100000);
L_0011B298:;
SET64(2, RD(5) & RD(2));
{ int t = RD(2) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0011B2C4; }
SET64(3, (s64)(s32)0x100000);
L_0011B2A8:;
SET32(5, RW(5) << 1);
SET64(2, RD(5) & RD(3));
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 1); if (t) { POLL(); goto L_0011B2A8; } }
L_0011B2C4:;
SET32(2, RW(0) - RW(4));
SET32(3, RW(17) - RW(4));
SET32(2, RW(7) >> (RW(2) & 31));
SET32(7, RW(7) << (RW(4) & 31));
SET32(17, RW(3) + 1);
SET64(5, RD(5) | RD(2));
SET64(2, (s64)(s32)0xf0000);
L_0011B2E0:;
SET32(17, RW(17) + -1023);
SET64(2, RD(2) | 0xffff);
SET64(4, (s64)(s32)0x100000);
SET64(2, RD(5) & RD(2));
SET64(3, RD(17) & 0x1);
{ int t = RD(3) == RD(0); SET64(5, RD(2) | RD(4)); if (t) goto L_0011B310; }
SET64(2, RD(7) & RD(20));
SET32(7, RW(7) << 1);
SET32(2, RW(2) >> 31);
SET32(2, RW(5) + RW(2));
SET32(5, RW(5) + RW(2));
L_0011B310:;
SET64(2, RD(7) & RD(20));
SET32(7, RW(7) << 1);
SET32(2, RW(2) >> 31);
SET32(17, RSW(17) >> 1);
SET32(2, RW(5) + RW(2));
SET64(12, RD(0) + RD(0));
SET32(5, RW(5) + RW(2));
SET64(11, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
SET64(9, (s64)(s32)0x200000);
L_0011B340:;
SET32(3, RW(11) + RW(9));
SET64(2, RSD(5) < RSD(3));
{ int t = RD(2) != RD(0); SET64(2, RD(7) & RD(20)); if (t) goto L_0011B35C; }
SET32(5, RW(5) - RW(3));
SET32(11, RW(3) + RW(9));
SET32(19, RW(19) + RW(9));
L_0011B35C:;
SET32(7, RW(7) << 1);
SET32(2, RW(2) >> 31);
SET32(9, RW(9) >> 1);
SET32(2, RW(5) + RW(2));
{ int t = RD(9) != RD(0); SET32(5, RW(5) + RW(2)); if (t) { POLL(); goto L_0011B340; } }
SET64(9, (s64)(s32)0x80000000);
L_0011B378:;
SET64(3, RD(11) + RD(0));
SET32(4, RW(12) + RW(9));
SET64(2, RSD(3) < RSD(5));
SET64(10, RD(4) & RD(20));
{ int t = RD(2) != RD(0); SET64(8, RD(7) < RD(4)); if (t) goto L_0011B3A0; }
{ int t = RD(3) != RD(5); SET64(2, RD(7) & RD(20)); if (t) goto L_0011B3C8; }
if (RD(8) != RD(0)) { SET32(7, RW(7) << 1); goto L_0011B3CC; }
L_0011B3A0:;
SET32(12, RW(4) + RW(9));
{ int t = RD(10) != RD(20); SET64(6, RD(12) & RD(20)); if (t) goto L_0011B3B4; }
SET32(2, RW(11) + 1);
if (RD(6) == 0) SET64(11, RD(2));
L_0011B3B4:;
SET32(5, RW(5) - RW(3));
SET32(7, RW(7) - RW(4));
SET32(18, RW(18) + RW(9));
SET32(5, RW(5) - RW(8));
SET64(2, RD(7) & RD(20));
L_0011B3C8:;
SET32(7, RW(7) << 1);
L_0011B3CC:;
SET32(2, RW(2) >> 31);
SET32(9, RW(9) >> 1);
SET32(2, RW(5) + RW(2));
{ int t = RD(9) != RD(0); SET32(5, RW(5) + RW(2)); if (t) { POLL(); goto L_0011B378; } }
SET64(2, RD(5) | RD(7));
{ int t = RD(2) == RD(0); SET32(7, RW(18) >> 1); if (t) goto L_0011B458; }
SET64(16, RD(0) | 0xffc0);
SET64(16, RD(16) << 46);
SET64(4, RD(16) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x11b404);  JP_F_00122108(c);
{ int t = RSD(2) < 0; SET32(2, RW(0) + -1); if (t) goto L_0011B454; }
{ int t = RD(18) != RD(2);  if (t) goto L_0011B420; }
SET64(18, RD(0) + RD(0));
SET32(19, RW(19) + 1); goto L_0011B454;
L_0011B420:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x11b430);  JP_F_00122108(c);
{ int t = RSD(2) <= 0; SET64(2, RD(18) & 0x1); if (t) goto L_0011B450; }
SET32(2, RW(0) + -2);
SET32(3, RW(19) + 1);
SET64(2, RD(18) ^ RD(2));
SET32(18, RW(18) + 2);
if (RD(2) == 0) SET64(19, RD(3)); goto L_0011B454;
L_0011B450:;
SET32(18, RW(18) + RW(2));
L_0011B454:;
SET32(7, RW(18) >> 1);
L_0011B458:;
SET32(2, RSW(19) >> 1);
SET64(5, (s64)(s32)0x3fe00000);
SET32(5, RW(5) + RW(2));
SET64(2, RD(7) | RD(20));
SET64(4, RD(19) & 0x1);
SET32(3, RW(17) << 20);
if (RD(4) != 0) SET64(7, RD(2));
SET32(5, RW(5) + RW(3));
SET64(4, RD(5) << 32);
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) >> 32);
SET64(21, RD(21) & RD(2));
SET32(2, RW(0) + -1);
SET64(2, RD(2) << 32);
SET64(3, RD(7) << 32);
SET64(21, RD(21) | RD(4));
SET64(3, RD(3) >> 32);
SET64(21, RD(21) & RD(2));
SET64(16, RD(21) | RD(3));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_0011B4AC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0011B4D0(Ctx *c) { /* func_0011B4D0 */
ENTER(0x11b4d0);
SET32(29, RW(29) + -48);
c->f[11].u = c->f[12].u;
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(29) + 40), c->f[22].u);
wr32(c, (RW(29) + 32), c->f[21].u);
SET64(4, (s32)c->f[11].u);
SET64(2, (s64)(s32)0x7fff0000);
SET64(5, (s64)(s32)0x3f800000);
SET64(2, RD(2) | 0xffff);
SET64(3, RD(4) & RD(2));
{ int t = RD(3) != RD(5); wr32(c, (RW(29) + 24), c->f[20].u); if (t) goto L_0011B520; }
c->f[0].u = RW(0);
{ int t = RSD(4) > 0; SET64(31, rd64(c, (RW(29) + 16))); if (t) goto L_0011B8E0; }
SET64(1, (s64)(s32)0x40490000);
SET64(1, RD(1) | 0xfda);
c->f[0].u = RW(1);
c->f[22].u = rd32(c, (RW(29) + 40)); goto L_0011B8E4;
L_0011B520:;
SET64(2, RSD(5) < RSD(3));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3eff0000); if (t) goto L_0011B548; }
c->f[0].f = fpu(F(11) - F(11));
c->f[0].f = fpu_div(F(0), F(0));
SET64(31, rd64(c, (RW(29) + 16))); goto L_0011B8E0;
L_0011B548:;
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x23000000); if (t) goto L_0011B678; }
SET64(1, (s64)(s32)0x3fc90000);
SET64(1, RD(1) | 0xfda);
c->f[0].u = RW(1);
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 16))); if (t) goto L_0011B8E0; }
c->f[21].f = fpu(F(11) * F(11));
SET64(1, (s64)(s32)0x38110000);
SET64(1, RD(1) | 0xef08);
c->f[1].u = RW(1);
SET64(1, (s64)(s32)0x3a4f0000);
SET64(1, RD(1) | 0x7f04);
c->f[3].u = RW(1);
SET64(1, (s64)(s32)0xbd240000);
SET64(1, RD(1) | 0x1146);
c->f[7].u = RW(1);
SET64(1, (s64)(s32)0x3d9d0000);
SET64(1, RD(1) | 0xc62d);
c->f[2].u = RW(1);
c->f[1].f = fpu(F(21) * F(1));
SET64(1, (s64)(s32)0xbf300000);
SET64(1, RD(1) | 0x3360);
c->f[0].u = RW(1);
c->f[2].f = fpu(F(21) * F(2));
SET64(1, (s64)(s32)0x3e4e0000);
SET64(1, RD(1) | 0xaa8);
c->f[6].u = RW(1);
SET64(1, (s64)(s32)0x40010000);
SET64(1, RD(1) | 0x572c);
c->f[4].u = RW(1);
SET64(1, (s64)(s32)0xbea60000);
SET64(1, RD(1) | 0xb08f);
c->f[9].u = RW(1);
c->f[1].f = fpu(F(1) + F(3));
SET64(1, (s64)(s32)0x3f800000);
c->f[3].u = RW(1);
c->f[2].f = fpu(F(2) + F(0));
SET64(1, (s64)(s32)0x33a20000);
SET64(1, RD(1) | 0x2168);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0xc0190000);
SET64(1, RD(1) | 0xd138);
c->f[5].u = RW(1);
SET64(1, (s64)(s32)0x3e2a0000);
SET64(1, RD(1) | 0xaaaa);
c->f[8].u = RW(1);
c->f[1].f = fpu(F(21) * F(1));
SET64(1, (s64)(s32)0x3fc90000);
SET64(1, RD(1) | 0xfda);
c->f[10].u = RW(1);
c->f[2].f = fpu(F(21) * F(2));
c->f[1].f = fpu(F(1) + F(7));
c->f[2].f = fpu(F(2) + F(4));
c->f[1].f = fpu(F(21) * F(1));
c->f[2].f = fpu(F(21) * F(2));
c->f[1].f = fpu(F(1) + F(6));
c->f[2].f = fpu(F(2) + F(5));
c->f[1].f = fpu(F(21) * F(1));
c->f[2].f = fpu(F(21) * F(2));
c->f[1].f = fpu(F(1) + F(9));
c->f[22].f = fpu(F(2) + F(3));
c->f[1].f = fpu(F(21) * F(1));
c->f[1].f = fpu(F(1) + F(8));
c->f[20].f = fpu(F(21) * F(1));
c->f[12].f = fpu_div(F(20), F(22));
c->f[1].f = fpu(F(11) * F(12));
c->f[0].f = fpu(F(0) - F(1));
c->f[0].f = fpu(F(11) - F(0));
c->f[0].f = fpu(F(10) - F(0)); goto L_0011B8E0;
L_0011B678:;
{ int t = RSD(4) >= 0;  if (t) goto L_0011B7A8; }
SET64(1, (s64)(s32)0x3f800000);
c->f[10].u = RW(1);
SET64(1, (s64)(s32)0x3f000000);
c->f[3].u = RW(1);
c->f[2].f = fpu(F(11) + F(10));
SET64(1, (s64)(s32)0x38110000);
SET64(1, RD(1) | 0xef08);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x3a4f0000);
SET64(1, RD(1) | 0x7f04);
c->f[5].u = RW(1);
SET64(1, (s64)(s32)0xbd240000);
SET64(1, RD(1) | 0x1146);
c->f[6].u = RW(1);
SET64(1, (s64)(s32)0x3d9d0000);
SET64(1, RD(1) | 0xc62d);
c->f[1].u = RW(1);
c->f[21].f = fpu(F(2) * F(3));
SET64(1, (s64)(s32)0x40010000);
SET64(1, RD(1) | 0x572c);
c->f[2].u = RW(1);
SET64(1, (s64)(s32)0xbf300000);
SET64(1, RD(1) | 0x3360);
c->f[4].u = RW(1);
SET64(1, (s64)(s32)0x3e4e0000);
SET64(1, RD(1) | 0xaa8);
c->f[7].u = RW(1);
SET64(1, (s64)(s32)0xbea60000);
SET64(1, RD(1) | 0xb08f);
c->f[9].u = RW(1);
c->f[0].f = fpu(F(21) * F(0));
SET64(1, (s64)(s32)0xc0190000);
SET64(1, RD(1) | 0xd138);
c->f[3].u = RW(1);
c->f[1].f = fpu(F(21) * F(1));
SET64(1, (s64)(s32)0x3e2a0000);
SET64(1, RD(1) | 0xaaaa);
c->f[8].u = RW(1);
c->f[12].u = c->f[21].u;
c->f[0].f = fpu(F(0) + F(5));
c->f[1].f = fpu(F(1) + F(4));
c->f[0].f = fpu(F(21) * F(0));
c->f[1].f = fpu(F(21) * F(1));
c->f[0].f = fpu(F(0) + F(6));
c->f[1].f = fpu(F(1) + F(2));
c->f[0].f = fpu(F(21) * F(0));
c->f[1].f = fpu(F(21) * F(1));
c->f[0].f = fpu(F(0) + F(7));
c->f[1].f = fpu(F(1) + F(3));
c->f[0].f = fpu(F(21) * F(0));
c->f[1].f = fpu(F(21) * F(1));
c->f[0].f = fpu(F(0) + F(9));
c->f[22].f = fpu(F(1) + F(10));
c->f[0].f = fpu(F(21) * F(0));
c->f[0].f = fpu(F(0) + F(8));
SET64(31, 0x11b764); c->f[20].f = fpu(F(21) * F(0)); JP_F_0011C6D8(c);
c->f[13].u = c->f[0].u;
SET64(1, (s64)(s32)0x33a20000);
SET64(1, RD(1) | 0x2168);
c->f[1].u = RW(1);
SET64(1, (s64)(s32)0x40490000);
SET64(1, RD(1) | 0xfda);
c->f[2].u = RW(1);
c->f[12].f = fpu_div(F(20), F(22));
c->f[0].f = fpu(F(12) * F(13));
c->f[0].f = fpu(F(0) - F(1));
c->f[0].f = fpu(F(13) + F(0));
c->f[0].f = fpu(F(0) + F(0));
c->f[0].f = fpu(F(2) - F(0)); goto L_0011B8DC;
L_0011B7A8:;
SET64(1, (s64)(s32)0x3f800000);
c->f[20].u = RW(1);
SET64(1, (s64)(s32)0x3f000000);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(20) - F(11));
c->f[21].f = fpu(F(0) * F(1));
SET64(31, 0x11b7c8); c->f[12].u = c->f[21].u; JP_F_0011C6D8(c);
c->f[11].u = c->f[0].u;
c->f[13].u = c->f[11].u;
wr32(c, (RW(29) + 0), c->f[0].u);
SET32(2, RW(0) + -4096);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(3, RD(3) & RD(2));
c->f[11].u = RW(3);
c->f[3].f = fpu(F(11) * F(11));
SET64(1, (s64)(s32)0x38110000);
SET64(1, RD(1) | 0xef08);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x3a4f0000);
SET64(1, RD(1) | 0x7f04);
c->f[5].u = RW(1);
SET64(1, (s64)(s32)0xbd240000);
SET64(1, RD(1) | 0x1146);
c->f[9].u = RW(1);
SET64(1, (s64)(s32)0x3d9d0000);
SET64(1, RD(1) | 0xc62d);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(21) * F(0));
SET64(1, (s64)(s32)0xbf300000);
SET64(1, RD(1) | 0x3360);
c->f[4].u = RW(1);
c->f[1].f = fpu(F(21) * F(1));
SET64(1, (s64)(s32)0x3e4e0000);
SET64(1, RD(1) | 0xaa8);
c->f[8].u = RW(1);
SET64(1, (s64)(s32)0x40010000);
SET64(1, RD(1) | 0x572c);
c->f[7].u = RW(1);
c->f[3].f = fpu(F(21) - F(3));
SET64(1, (s64)(s32)0xbea60000);
SET64(1, RD(1) | 0xb08f);
c->f[10].u = RW(1);
c->f[2].f = fpu(F(13) + F(11));
c->f[0].f = fpu(F(0) + F(5));
SET64(1, (s64)(s32)0x3e2a0000);
SET64(1, RD(1) | 0xaaaa);
c->f[5].u = RW(1);
c->f[1].f = fpu(F(1) + F(4));
SET64(1, (s64)(s32)0xc0190000);
SET64(1, RD(1) | 0xd138);
c->f[6].u = RW(1);
c->f[3].f = fpu_div(F(3), F(2));
c->f[0].f = fpu(F(21) * F(0));
c->f[1].f = fpu(F(21) * F(1));
c->f[0].f = fpu(F(0) + F(9));
c->f[1].f = fpu(F(1) + F(7));
c->f[0].f = fpu(F(21) * F(0));
c->f[1].f = fpu(F(21) * F(1));
c->f[0].f = fpu(F(0) + F(8));
c->f[1].f = fpu(F(1) + F(6));
c->f[0].f = fpu(F(21) * F(0));
c->f[1].f = fpu(F(21) * F(1));
c->f[0].f = fpu(F(0) + F(10));
c->f[22].f = fpu(F(1) + F(20));
c->f[0].f = fpu(F(21) * F(0));
c->f[0].f = fpu(F(0) + F(5));
c->f[20].f = fpu(F(21) * F(0));
c->f[12].f = fpu_div(F(20), F(22));
c->f[0].f = fpu(F(12) * F(13));
c->f[0].f = fpu(F(0) + F(3));
c->f[0].f = fpu(F(11) + F(0));
c->f[0].f = fpu(F(0) + F(0));
L_0011B8DC:;
SET64(31, rd64(c, (RW(29) + 16)));
L_0011B8E0:;
c->f[22].u = rd32(c, (RW(29) + 40));
L_0011B8E4:;
c->f[21].u = rd32(c, (RW(29) + 32));
c->f[20].u = rd32(c, (RW(29) + 24));
SET32(29, RW(29) + 48); return;
}

void JP_F_0011B8F8(Ctx *c) { /* func_0011B8F8 */
ENTER(0x11b8f8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, (s32)c->f[12].u);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(29) + 40), c->f[22].u);
wr32(c, (RW(29) + 32), c->f[21].u);
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xffff);
SET64(3, (s64)(s32)0x3f800000);
SET64(16, RD(17) & RD(2));
{ int t = RD(16) != RD(3); wr32(c, (RW(29) + 24), c->f[20].u); if (t) goto L_0011B958; }
SET64(1, (s64)(s32)0x3fc90000);
SET64(1, RD(1) | 0xfda);
c->f[1].u = RW(1);
SET64(1, (s64)(s32)0x33a20000);
SET64(1, RD(1) | 0x2168);
c->f[0].u = RW(1);
c->f[1].f = fpu(F(12) * F(1));
c->f[0].f = fpu(F(12) * F(0));
c->f[0].f = fpu(F(1) + F(0)); goto L_0011BC78;
L_0011B958:;
SET64(2, RSD(3) < RSD(16));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3eff0000); if (t) goto L_0011B980; }
c->f[0].f = fpu(F(12) - F(12));
c->f[0].f = fpu_div(F(0), F(0));
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011BC7C;
L_0011B980:;
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x31ff0000); if (t) goto L_0011BAB8; }
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(16));
if (RD(2) != RD(0)) { c->f[20].f = fpu(F(12) * F(12)); goto L_0011B9D0; }
SET64(1, (s64)(s32)0x71490000);
SET64(1, RD(1) | 0xf2c9);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x3f800000);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(12) + F(0));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[0].u = c->f[12].u; if (t) goto L_0011BAB8; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011BC7C;
L_0011B9D0:;
SET64(1, (s64)(s32)0x38110000);
SET64(1, RD(1) | 0xef08);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x3a4f0000);
SET64(1, RD(1) | 0x7f04);
c->f[3].u = RW(1);
SET64(1, (s64)(s32)0xbd240000);
SET64(1, RD(1) | 0x1146);
c->f[7].u = RW(1);
SET64(1, (s64)(s32)0x3d9d0000);
SET64(1, RD(1) | 0xc62d);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(20) * F(0));
SET64(1, (s64)(s32)0xbf300000);
SET64(1, RD(1) | 0x3360);
c->f[2].u = RW(1);
c->f[1].f = fpu(F(20) * F(1));
SET64(1, (s64)(s32)0x3e4e0000);
SET64(1, RD(1) | 0xaa8);
c->f[6].u = RW(1);
SET64(1, (s64)(s32)0x40010000);
SET64(1, RD(1) | 0x572c);
c->f[4].u = RW(1);
SET64(1, (s64)(s32)0xbea60000);
SET64(1, RD(1) | 0xb08f);
c->f[8].u = RW(1);
c->f[0].f = fpu(F(0) + F(3));
SET64(1, (s64)(s32)0x3e2a0000);
SET64(1, RD(1) | 0xaaaa);
c->f[3].u = RW(1);
c->f[1].f = fpu(F(1) + F(2));
SET64(1, (s64)(s32)0x3f800000);
c->f[2].u = RW(1);
SET64(1, (s64)(s32)0xc0190000);
SET64(1, RD(1) | 0xd138);
c->f[5].u = RW(1);
c->f[0].f = fpu(F(20) * F(0));
c->f[1].f = fpu(F(20) * F(1));
c->f[0].f = fpu(F(0) + F(7));
c->f[1].f = fpu(F(1) + F(4));
c->f[0].f = fpu(F(20) * F(0));
c->f[1].f = fpu(F(20) * F(1));
c->f[0].f = fpu(F(0) + F(6));
c->f[1].f = fpu(F(1) + F(5));
c->f[0].f = fpu(F(20) * F(0));
c->f[1].f = fpu(F(20) * F(1));
c->f[0].f = fpu(F(0) + F(8));
c->f[22].f = fpu(F(1) + F(2));
c->f[0].f = fpu(F(20) * F(0));
c->f[0].f = fpu(F(0) + F(3));
c->f[21].f = fpu(F(20) * F(0));
c->f[7].f = fpu_div(F(21), F(22));
c->f[0].f = fpu(F(12) * F(7));
c->f[0].f = fpu(F(12) + F(0)); goto L_0011BC78;
L_0011BAB8:;
SET64(31, 0x11bac0);  JP_F_0011F528(c);
SET64(1, (s64)(s32)0x3f800000);
c->f[10].u = RW(1);
SET64(1, (s64)(s32)0x3f000000);
c->f[2].u = RW(1);
c->f[7].f = fpu(F(10) - F(0));
SET64(1, (s64)(s32)0x38110000);
SET64(1, RD(1) | 0xef08);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x3a4f0000);
SET64(1, RD(1) | 0x7f04);
c->f[4].u = RW(1);
SET64(1, (s64)(s32)0xbd240000);
SET64(1, RD(1) | 0x1146);
c->f[6].u = RW(1);
SET64(1, (s64)(s32)0x3d9d0000);
SET64(1, RD(1) | 0xc62d);
c->f[1].u = RW(1);
c->f[20].f = fpu(F(7) * F(2));
SET64(1, (s64)(s32)0x3e4e0000);
SET64(1, RD(1) | 0xaa8);
c->f[7].u = RW(1);
SET64(1, (s64)(s32)0xbf300000);
SET64(1, RD(1) | 0x3360);
c->f[3].u = RW(1);
SET64(1, (s64)(s32)0x40010000);
SET64(1, RD(1) | 0x572c);
c->f[2].u = RW(1);
SET64(1, (s64)(s32)0xbea60000);
SET64(1, RD(1) | 0xb08f);
c->f[9].u = RW(1);
c->f[0].f = fpu(F(20) * F(0));
SET64(1, (s64)(s32)0xc0190000);
SET64(1, RD(1) | 0xd138);
c->f[5].u = RW(1);
c->f[1].f = fpu(F(20) * F(1));
SET64(1, (s64)(s32)0x3e2a0000);
SET64(1, RD(1) | 0xaaaa);
c->f[8].u = RW(1);
c->f[12].u = c->f[20].u;
c->f[0].f = fpu(F(0) + F(4));
c->f[1].f = fpu(F(1) + F(3));
c->f[0].f = fpu(F(20) * F(0));
c->f[1].f = fpu(F(20) * F(1));
c->f[0].f = fpu(F(0) + F(6));
c->f[1].f = fpu(F(1) + F(2));
c->f[0].f = fpu(F(20) * F(0));
c->f[1].f = fpu(F(20) * F(1));
c->f[0].f = fpu(F(0) + F(7));
c->f[1].f = fpu(F(1) + F(5));
c->f[0].f = fpu(F(20) * F(0));
c->f[1].f = fpu(F(20) * F(1));
c->f[0].f = fpu(F(0) + F(9));
c->f[22].f = fpu(F(1) + F(10));
c->f[0].f = fpu(F(20) * F(0));
c->f[0].f = fpu(F(0) + F(8));
SET64(31, 0x11bba4); c->f[21].f = fpu(F(20) * F(0)); JP_F_0011C6D8(c);
SET64(2, (s64)(s32)0x3f790000);
SET64(2, RD(2) | 0x9999);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) == RD(0); c->f[8].u = c->f[0].u; if (t) goto L_0011BBF8; }
c->f[7].f = fpu_div(F(21), F(22));
SET64(1, (s64)(s32)0x33a20000);
SET64(1, RD(1) | 0x2168);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x3fc90000);
SET64(1, RD(1) | 0xfda);
c->f[2].u = RW(1);
c->f[1].f = fpu(F(8) * F(7));
c->f[1].f = fpu(F(8) + F(1));
c->f[1].f = fpu(F(1) + F(1));
c->f[1].f = fpu(F(1) - F(0));
c->f[20].f = fpu(F(2) - F(1)); goto L_0011BC6C;
L_0011BBF8:;
SET64(2, (s32)c->f[8].u);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + -4096);
SET64(3, RD(3) & RD(2));
c->f[7].u = RW(3);
c->f[0].f = fpu(F(7) * F(7));
SET64(1, (s64)(s32)0x33a20000);
SET64(1, RD(1) | 0x2168);
c->f[3].u = RW(1);
SET64(1, (s64)(s32)0x3f490000);
SET64(1, RD(1) | 0xfda);
c->f[6].u = RW(1);
c->f[0].f = fpu(F(20) - F(0));
c->f[4].f = fpu(F(8) + F(7));
c->f[5].f = fpu_div(F(21), F(22));
c->f[1].f = fpu(F(8) + F(8));
c->f[2].f = fpu(F(7) + F(7));
c->f[0].f = fpu_div(F(0), F(4));
c->f[22].f = fpu(F(6) - F(2));
c->f[1].f = fpu(F(1) * F(5));
c->f[0].f = fpu(F(0) + F(0));
c->f[3].f = fpu(F(3) - F(0));
c->f[21].f = fpu(F(1) - F(3));
c->f[0].f = fpu(F(21) - F(22));
c->f[20].f = fpu(F(6) - F(0));
L_0011BC6C:;
{ int t = RSD(17) > 0; c->f[0].u = c->f[20].u; if (t) goto L_0011BC78; }
c->f[0].u = c->f[20].u ^ 0x80000000u;
L_0011BC78:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0011BC7C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
c->f[22].u = rd32(c, (RW(29) + 40));
c->f[21].u = rd32(c, (RW(29) + 32));
c->f[20].u = rd32(c, (RW(29) + 24));
SET32(29, RW(29) + 48); return;
}

void JP_F_0011BC98(Ctx *c) { /* func_0011BC98 */
ENTER(0x11bc98);
SET32(29, RW(29) + -32);
c->f[1].u = c->f[12].u;
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(6, (s32)c->f[13].u);
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xffff);
SET64(8, RD(6) & RD(2));
SET64(5, (s32)c->f[1].u);
SET64(3, (s64)(s32)0x3f800000);
{ int t = RD(6) != RD(3); SET64(7, RD(5) & RD(2)); if (t) goto L_0011BCD8; }
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0011F180(c); return; }
L_0011BCD8:;
SET64(2, (s64)(s32)0x7f0000);
SET32(4, RSW(6) >> 30);
SET64(2, RD(2) | 0xffff);
SET64(4, RD(4) & 0x2);
SET32(3, RW(5) >> 31);
SET64(2, RSD(2) < RSD(7));
{ int t = RD(2) != RD(0); SET64(16, RD(3) | RD(4)); if (t) goto L_0011BD3C; }
SET32(2, RW(0) + 2);
SET64(1, (s64)(s32)0x40490000);
SET64(1, RD(1) | 0xfda);
c->f[0].u = RW(1);
{ int t = RD(16) == RD(2); SET64(2, RSD(16) < (s64)3); if (t) goto L_0011BE68; }
if (RD(2) == RD(0)) { SET32(2, RW(0) + 3); goto L_0011BD28; }
{ int t = RSD(16) < 0; SET64(2, (s64)(s32)0x7f0000); if (t) goto L_0011BD40; }
c->f[0].u = c->f[1].u; goto L_0011BE68;
L_0011BD28:;
SET64(1, (s64)(s32)0xc0490000);
SET64(1, RD(1) | 0xfda);
c->f[0].u = RW(1);
if (RD(16) == RD(2)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0011BE6C; }
L_0011BD3C:;
SET64(2, (s64)(s32)0x7f0000);
L_0011BD40:;
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(8));
{ int t = RD(2) != RD(0); SET32(3, RW(7) - RW(8)); if (t) goto L_0011BD78; }
SET64(1, (s64)(s32)0xbfc90000);
SET64(1, RD(1) | 0xfda);
c->f[0].u = RW(1);
{ int t = RSD(5) < 0; SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0011BE68; }
SET64(1, (s64)(s32)0x3fc90000);
SET64(1, RD(1) | 0xfda);
c->f[0].u = RW(1);
SET64(31, rd64(c, (RW(29) + 24))); goto L_0011BE70;
L_0011BD78:;
SET64(1, (s64)(s32)0x3fc90000);
SET64(1, RD(1) | 0xfda);
c->f[2].u = RW(1);
SET32(3, RSW(3) >> 23);
SET64(2, RSD(3) < (s64)61);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0011BDCC; }
{ int t = RSD(6) >= 0; SET64(2, RSD(3) < (s64)-60); if (t) goto L_0011BDA8; }
c->f[2].u = RW(0);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0011BDCC; }
L_0011BDA8:;
c->f[12].f = fpu_div(F(1), F(13));
SET64(31, 0x11bdbc);  JP_F_0011F528(c);
SET64(31, 0x11bdc4); c->f[12].u = c->f[0].u; JP_F_0011F180(c);
c->f[2].u = c->f[0].u;
SET32(2, RW(0) + 1);
L_0011BDCC:;
{ int t = RD(16) == RD(2); SET64(2, RSD(16) < (s64)2); if (t) goto L_0011BE00; }
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2); goto L_0011BDF0; }
{ int t = RD(16) == RD(0); c->f[0].u = c->f[2].u; if (t) goto L_0011BE68; }
 goto L_0011BE48;
L_0011BDF0:;
{ int t = RD(16) == RD(2);  if (t) goto L_0011BE20; }
 goto L_0011BE48;
L_0011BE00:;
wr32(c, (RW(29) + 0), c->f[2].u);
SET64(2, (s64)(s32)0x80000000);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(3, RD(3) ^ RD(2));
c->f[2].u = RW(3);
c->f[0].u = c->f[2].u; goto L_0011BE68;
L_0011BE20:;
SET64(1, (s64)(s32)0x34220000);
SET64(1, RD(1) | 0x2168);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x40490000);
SET64(1, RD(1) | 0xfda);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(2) - F(0));
c->f[0].f = fpu(F(1) - F(0)); goto L_0011BE68;
L_0011BE48:;
SET64(1, (s64)(s32)0x34220000);
SET64(1, RD(1) | 0x2168);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x40490000);
SET64(1, RD(1) | 0xfda);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(2) - F(0));
c->f[0].f = fpu(F(0) - F(1));
L_0011BE68:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0011BE6C:;
SET64(31, rd64(c, (RW(29) + 24)));
L_0011BE70:;
SET32(29, RW(29) + 32); return;
}

void JP_F_0011BE78(Ctx *c) { /* func_0011BE78 */
ENTER(0x11be78);
SET32(29, RW(29) + -16);
c->f[0].u = c->f[12].u;
SET64(2, (s32)c->f[0].u);
SET64(5, RD(2) + RD(0));
c->f[1].u = c->f[13].u;
wr32(c, (RW(29) + 0), c->f[1].u);
SET64(3, (s64)(s32)0x80000000);
SET64(7, (s32)rd32(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xffff);
SET64(4, (s64)(s32)0x7f0000);
SET64(6, RD(7) & RD(2));
SET64(4, RD(4) | 0xffff);
SET64(10, RD(5) & RD(3));
SET64(2, RSD(4) < RSD(6));
{ int t = RD(2) != RD(0); SET64(5, RD(5) ^ RD(10)); if (t) goto L_0011BED8; }
c->f[0].f = fpu(F(0) * F(13));
c->f[0].f = fpu_div(F(0), F(0));
 goto L_0011C040;
L_0011BED8:;
SET64(2, RSD(5) < RSD(6));
{ int t = RD(2) != RD(0);  if (t) goto L_0011C040; }
{ int t = RD(5) == RD(6); SET32(2, RSW(5) >> 23); if (t) goto L_0011BFA8; }
SET32(8, RW(2) + -127);
SET32(3, RSW(6) >> 23);
SET64(2, RSD(8) < (s64)-126);
{ int t = RD(2) != RD(0); SET32(7, RW(3) + -127); if (t) goto L_0011BF10; }
SET64(3, RD(5) & RD(4));
SET64(2, (s64)(s32)0x800000);
SET64(5, RD(3) | RD(2)); goto L_0011BF1C;
L_0011BF10:;
SET32(2, RW(0) + -126);
SET32(4, RW(2) - RW(8));
SET32(5, RW(5) << (RW(4) & 31));
L_0011BF1C:;
SET64(9, RSD(7) < (s64)-126);
{ int t = RD(9) != RD(0); SET32(2, RW(0) + -126); if (t) goto L_0011BF40; }
SET64(2, (s64)(s32)0x7f0000);
SET64(3, (s64)(s32)0x800000);
SET64(2, RD(2) | 0xffff);
SET64(2, RD(6) & RD(2));
SET64(6, RD(2) | RD(3)); goto L_0011BF48;
L_0011BF40:;
SET32(4, RW(2) - RW(7));
SET32(6, RW(6) << (RW(4) & 31));
L_0011BF48:;
SET32(4, RW(8) - RW(7));
SET32(2, RW(0) + -1);
L_0011BF50:;
SET32(4, RW(4) + -1);
{ int t = RD(4) == RD(2); SET32(3, RW(5) - RW(6)); if (t) goto L_0011BF98; }
{ int t = RSD(3) < 0; SET32(5, RW(5) << 1); if (t) { POLL(); goto L_0011BF50; } }
if (RD(3) == RD(0)) { SET32(2, RW(10) >> 31); goto L_0011BFAC; }
SET32(5, RW(3) << 1); { POLL(); goto L_0011BF50; }
L_0011BF98:;
SET64(2, RSD(3) < (s64)0);
if (RD(2) == 0) SET64(5, RD(3));
{ int t = RD(5) != RD(0); SET64(2, (s64)(s32)0x7f0000); if (t) goto L_0011BFC8; }
L_0011BFA8:;
SET32(2, RW(10) >> 31);
L_0011BFAC:;
SET32(2, RW(2) << 2);
SET64(1, (s64)(s32)0x420000);
SET32(1, RW(1) + RW(2));
c->f[0].u = rd32(c, (RW(1) + -11280));
 goto L_0011C040;
L_0011BFC8:;
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(5));
{ int t = RD(2) != RD(0);  if (t) goto L_0011C000; }
SET64(3, (s64)(s32)0x7f0000);
SET64(3, RD(3) | 0xffff);
L_0011BFE0:;
SET32(5, RW(5) << 1);
SET64(2, RSD(3) < RSD(5));
{ int t = RD(2) == RD(0); SET32(7, RW(7) + -1); if (t) { POLL(); goto L_0011BFE0; } }
SET64(9, RSD(7) < (s64)-126);
L_0011C000:;
{ int t = RD(9) != RD(0); SET32(2, RW(0) + -126); if (t) goto L_0011C030; }
SET32(3, RW(7) + 127);
SET64(2, (s64)(s32)0xff800000);
SET32(2, RW(5) + RW(2));
SET32(3, RW(3) << 23);
SET64(5, RD(2) | RD(3));
SET64(5, RD(5) | RD(10));
c->f[0].u = RW(5);
 goto L_0011C040;
L_0011C030:;
SET32(4, RW(2) - RW(7));
SET32(5, RSW(5) >> (RW(4) & 31));
SET64(5, RD(5) | RD(10));
c->f[0].u = RW(5);
L_0011C040:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0011C048(Ctx *c) { /* func_0011C048 */
ENTER(0x11c048);
SET64(3, (s32)c->f[12].u);
SET64(5, RD(3) + RD(0));
SET64(2, (s64)(s32)0x7fff0000);
SET64(6, (s64)(s32)0x7f0000);
SET64(2, RD(2) | 0xffff);
SET64(6, RD(6) | 0xffff);
SET64(2, RD(5) & RD(2));
SET64(2, RSD(6) < RSD(2));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x420000); if (t) goto L_0011C078; }
c->f[0].u = rd32(c, (RW(2) + -11228)); return;
L_0011C078:;
{ int t = RSD(5) >= 0; SET32(4, RSW(5) >> 23); if (t) goto L_0011C0A0; }
c->f[1].f = fpu(F(12) - F(12));
c->f[0].u = RW(0);
c->f[0].f = fpu_div(F(1), F(0));
 return;
L_0011C0A0:;
SET64(5, RD(5) & RD(6));
SET64(3, (s64)(s32)0x4a0000);
SET64(3, RD(3) | 0xfb20);
SET32(3, RW(3) + RW(5));
SET64(2, (s64)(s32)0x800000);
SET64(3, RD(3) & RD(2));
SET32(4, RW(4) + -127);
SET64(2, (s64)(s32)0x3f800000);
SET64(2, RD(3) ^ RD(2));
SET64(2, RD(5) | RD(2));
c->f[12].u = RW(2);
SET32(3, RSW(3) >> 23);
SET64(1, (s64)(s32)0x3f800000);
c->f[0].u = RW(1);
SET32(2, RW(5) + 15);
SET32(4, RW(4) + RW(3));
SET64(2, RD(2) & RD(6));
SET64(2, RSD(2) < (s64)16);
{ int t = RD(2) == RD(0); c->f[12].f = fpu(F(12) - F(0)); if (t) goto L_0011C1A0; }
c->f[0].u = RW(0);
c->fcc = F(12) == F(0);
if (!c->fcc) { c->f[2].f = fpu(F(12) * F(12)); goto L_0011C138; }
{ int t = RD(4) == RD(0);  if (t) goto L_0011C320; }
c->f[9].u = RW(4);
c->f[9].f = (f32)(s32)c->f[9].u;
SET64(1, (s64)(s32)0x3f310000);
SET64(1, RD(1) | 0x7180);
c->f[1].u = RW(1);
SET64(1, (s64)(s32)0x37170000);
SET64(1, RD(1) | 0xf7d1);
c->f[0].u = RW(1);
c->f[1].f = fpu(F(9) * F(1));
c->f[0].f = fpu(F(9) * F(0));
c->f[0].f = fpu(F(1) + F(0)); return;
L_0011C138:;
SET64(1, (s64)(s32)0x3eaa0000);
SET64(1, RD(1) | 0xaaaa);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x3f000000);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(12) * F(0));
c->f[1].f = fpu(F(1) - F(0));
{ int t = RD(4) != RD(0); c->f[2].f = fpu(F(2) * F(1)); if (t) goto L_0011C168; }
c->f[0].f = fpu(F(12) - F(2)); return;
L_0011C168:;
c->f[9].u = RW(4);
c->f[9].f = (f32)(s32)c->f[9].u;
SET64(1, (s64)(s32)0x37170000);
SET64(1, RD(1) | 0xf7d1);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x3f310000);
SET64(1, RD(1) | 0x7180);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(9) * F(0));
c->f[1].f = fpu(F(9) * F(1));
c->f[0].f = fpu(F(2) - F(0));
c->f[0].f = fpu(F(0) - F(12));
c->f[0].f = fpu(F(1) - F(0)); return;
L_0011C1A0:;
SET64(1, (s64)(s32)0x40000000);
c->f[0].u = RW(1);
SET64(3, (s64)(s32)0xffcf0000);
SET64(1, (s64)(s32)0x3e170000);
SET64(1, RD(1) | 0x8896);
c->f[1].u = RW(1);
SET64(2, (s64)(s32)0x350000);
c->f[0].f = fpu(F(12) + F(0));
SET64(1, (s64)(s32)0x3e3a0000);
SET64(1, RD(1) | 0x3324);
c->f[8].u = RW(1);
SET64(1, (s64)(s32)0x3e1c0000);
SET64(1, RD(1) | 0xd04e);
c->f[2].u = RW(1);
SET64(3, RD(3) | 0x5c30);
SET64(1, (s64)(s32)0x3e630000);
SET64(1, RD(1) | 0x8e29);
c->f[5].u = RW(1);
SET64(2, RD(2) | 0xc288);
SET64(1, (s64)(s32)0x3e920000);
SET64(1, RD(1) | 0x4925);
c->f[6].u = RW(1);
SET32(2, RW(2) - RW(5));
c->f[10].f = fpu_div(F(12), F(0));
SET64(1, (s64)(s32)0x3ecc0000);
SET64(1, RD(1) | 0xcccc);
c->f[4].u = RW(1);
SET64(1, (s64)(s32)0x3f2a0000);
SET64(1, RD(1) | 0xaaaa);
c->f[7].u = RW(1);
SET32(3, RW(5) + RW(3));
SET64(3, RD(3) | RD(2));
c->f[9].u = RW(4);
c->f[9].f = (f32)(s32)c->f[9].u;
c->f[3].f = fpu(F(10) * F(10));
c->f[0].f = fpu(F(3) * F(3));
c->f[1].f = fpu(F(0) * F(1));
c->f[2].f = fpu(F(0) * F(2));
c->f[1].f = fpu(F(1) + F(8));
c->f[2].f = fpu(F(2) + F(5));
c->f[1].f = fpu(F(0) * F(1));
c->f[2].f = fpu(F(0) * F(2));
c->f[1].f = fpu(F(1) + F(6));
c->f[2].f = fpu(F(2) + F(4));
c->f[1].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(0) * F(2));
c->f[1].f = fpu(F(1) + F(7));
c->f[3].f = fpu(F(3) * F(1));
{ int t = RSD(3) <= 0; c->f[2].f = fpu(F(3) + F(0)); if (t) goto L_0011C2D8; }
SET64(1, (s64)(s32)0x3f000000);
c->f[0].u = RW(1);
c->f[0].f = fpu(F(12) * F(0));
{ int t = RD(4) != RD(0); c->f[4].f = fpu(F(0) * F(12)); if (t) goto L_0011C298; }
c->f[0].f = fpu(F(4) + F(2));
c->f[0].f = fpu(F(10) * F(0));
c->f[0].f = fpu(F(4) - F(0));
c->f[0].f = fpu(F(12) - F(0)); return;
L_0011C298:;
c->f[0].f = fpu(F(4) + F(2));
SET64(1, (s64)(s32)0x3f310000);
SET64(1, RD(1) | 0x7180);
c->f[2].u = RW(1);
SET64(1, (s64)(s32)0x37170000);
SET64(1, RD(1) | 0xf7d1);
c->f[1].u = RW(1);
c->f[2].f = fpu(F(9) * F(2));
c->f[1].f = fpu(F(9) * F(1));
c->f[0].f = fpu(F(10) * F(0));
c->f[0].f = fpu(F(0) + F(1));
c->f[0].f = fpu(F(4) - F(0));
c->f[0].f = fpu(F(0) - F(12));
c->f[0].f = fpu(F(2) - F(0)); return;
L_0011C2D8:;
{ int t = RD(4) != RD(0); c->f[0].f = fpu(F(12) - F(2)); if (t) goto L_0011C2F0; }
c->f[0].f = fpu(F(10) * F(0));
c->f[0].f = fpu(F(12) - F(0)); return;
L_0011C2F0:;
SET64(1, (s64)(s32)0x3f310000);
SET64(1, RD(1) | 0x7180);
c->f[2].u = RW(1);
SET64(1, (s64)(s32)0x37170000);
SET64(1, RD(1) | 0xf7d1);
c->f[1].u = RW(1);
c->f[2].f = fpu(F(9) * F(2));
c->f[1].f = fpu(F(9) * F(1));
c->f[0].f = fpu(F(10) * F(0));
c->f[0].f = fpu(F(0) - F(1));
c->f[0].f = fpu(F(0) - F(12));
c->f[0].f = fpu(F(2) - F(0));
L_0011C320:;
 return;
}

void JP_F_0011C328(Ctx *c) { /* func_0011C328 */
ENTER(0x11c328);
SET32(29, RW(29) + -64);
c->f[1].u = c->f[12].u;
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, (s32)c->f[1].u);
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, (s64)(s32)0x3f490000);
SET64(3, RD(3) | 0xffff);
SET64(2, RD(2) | 0xfd8);
SET64(16, RD(18) & RD(3));
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_0011C378; }
wr32(c, (RW(17) + 0), c->f[1].u);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(17) + 4), RW(0)); goto L_0011C6C0;
L_0011C378:;
SET64(2, (s64)(s32)0x40160000);
SET64(2, RD(2) | 0xcbe3);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x43490000); if (t) goto L_0011C470; }
{ int t = RSD(18) <= 0; SET32(3, RW(0) + -16); if (t) goto L_0011C400; }
SET64(1, (s64)(s32)0x3fc90000);
SET64(1, RD(1) | 0xf80);
c->f[0].u = RW(1);
SET64(2, (s64)(s32)0x3fc90000);
SET64(3, RD(16) & RD(3));
SET64(2, RD(2) | 0xfd0);
{ int t = RD(3) == RD(2); c->f[12].f = fpu(F(1) - F(0)); if (t) goto L_0011C3C8; }
SET64(1, (s64)(s32)0x37350000);
SET64(1, RD(1) | 0x4442);
c->f[2].u = RW(1);
c->f[1].f = fpu(F(12) - F(2)); goto L_0011C3E8;
L_0011C3C8:;
SET64(1, (s64)(s32)0x37350000);
SET64(1, RD(1) | 0x43ff);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x2e850000);
SET64(1, RD(1) | 0xa308);
c->f[2].u = RW(1);
c->f[12].f = fpu(F(12) - F(0));
c->f[1].f = fpu(F(12) - F(2));
L_0011C3E8:;
c->f[0].f = fpu(F(12) - F(1));
wr32(c, (RW(17) + 0), c->f[1].u);
c->f[0].f = fpu(F(0) - F(2));
wr32(c, (RW(17) + 4), c->f[0].u);
SET32(2, RW(0) + 1); goto L_0011C6C0;
L_0011C400:;
SET64(1, (s64)(s32)0x3fc90000);
SET64(1, RD(1) | 0xf80);
c->f[0].u = RW(1);
SET64(2, (s64)(s32)0x3fc90000);
SET64(3, RD(16) & RD(3));
SET64(2, RD(2) | 0xfd0);
{ int t = RD(3) == RD(2); c->f[12].f = fpu(F(1) + F(0)); if (t) goto L_0011C438; }
SET64(1, (s64)(s32)0x37350000);
SET64(1, RD(1) | 0x4442);
c->f[2].u = RW(1);
c->f[1].f = fpu(F(12) + F(2)); goto L_0011C458;
L_0011C438:;
SET64(1, (s64)(s32)0x37350000);
SET64(1, RD(1) | 0x43ff);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x2e850000);
SET64(1, RD(1) | 0xa308);
c->f[2].u = RW(1);
c->f[12].f = fpu(F(12) + F(0));
c->f[1].f = fpu(F(12) + F(2));
L_0011C458:;
c->f[0].f = fpu(F(12) - F(1));
wr32(c, (RW(17) + 0), c->f[1].u);
c->f[0].f = fpu(F(0) + F(2));
wr32(c, (RW(17) + 4), c->f[0].u);
SET32(2, RW(0) + -1); goto L_0011C6C0;
L_0011C470:;
SET64(2, RD(2) | 0xf80);
SET64(2, RSD(2) < RSD(16));
if (RD(2) != RD(0)) { SET32(2, RSW(16) >> 23); goto L_0011C600; }
SET64(31, 0x11c488);  JP_F_0011F528(c);
SET64(1, (s64)(s32)0x3f000000);
c->f[2].u = RW(1);
c->f[5].u = c->f[0].u;
SET64(1, (s64)(s32)0x3f220000);
SET64(1, RD(1) | 0xf984);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x3fc90000);
SET64(1, RD(1) | 0xf80);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(5) * F(0));
SET64(1, (s64)(s32)0x37350000);
SET64(1, RD(1) | 0x4442);
c->f[3].u = RW(1);
c->f[0].f = fpu(F(0) + F(2));
c->f[2].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[2].u);
c->f[6].u = RW(5);
c->f[6].f = (f32)(s32)c->f[6].u;
SET64(2, RSD(5) < (s64)32);
c->f[1].f = fpu(F(6) * F(1));
c->f[3].f = fpu(F(6) * F(3));
{ int t = RD(2) == RD(0); c->f[4].f = fpu(F(5) - F(1)); if (t) goto L_0011C510; }
SET32(2, RW(5) << 2);
SET32(3, RW(0) + -256);
SET64(4, (s64)(s32)0x420000);
SET32(4, RW(4) + RW(2));
SET64(4, (s32)rd32(c, (RW(4) + -10436)));
SET64(3, RD(16) & RD(3));
{ int t = RD(3) == RD(4); c->f[0].f = fpu(F(4) - F(3)); if (t) goto L_0011C514; }
wr32(c, (RW(17) + 0), c->f[0].u); goto L_0011C5D4;
L_0011C510:;
c->f[0].f = fpu(F(4) - F(3));
L_0011C514:;
SET32(4, RSW(16) >> 23);
wr32(c, (RW(17) + 0), c->f[0].u);
wr32(c, (RW(29) + 16), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(29) + 16)));
SET32(2, RW(3) >> 23);
SET64(2, RD(2) & 0xff);
SET32(3, RW(4) - RW(2));
SET64(3, RSD(3) < (s64)9);
if (RD(3) != RD(0)) { c->f[1].u = rd32(c, (RW(17) + 0)); goto L_0011C5D8; }
SET64(1, (s64)(s32)0x37350000);
SET64(1, RD(1) | 0x43ff);
c->f[0].u = RW(1);
c->f[5].u = c->f[4].u;
SET64(1, (s64)(s32)0x2e850000);
SET64(1, RD(1) | 0xa308);
c->f[2].u = RW(1);
c->f[3].f = fpu(F(6) * F(0));
c->f[2].f = fpu(F(6) * F(2));
c->f[4].f = fpu(F(4) - F(3));
c->f[0].f = fpu(F(5) - F(4));
c->f[0].f = fpu(F(0) - F(3));
c->f[3].f = fpu(F(2) - F(0));
c->f[1].f = fpu(F(4) - F(3));
wr32(c, (RW(17) + 0), c->f[1].u);
wr32(c, (RW(29) + 20), c->f[1].u);
SET64(3, (s32)rd32(c, (RW(29) + 20)));
SET32(2, RW(3) >> 23);
SET64(2, RD(2) & 0xff);
SET32(3, RW(4) - RW(2));
SET64(3, RSD(3) < (s64)26);
if (RD(3) != RD(0)) { c->f[1].u = rd32(c, (RW(17) + 0)); goto L_0011C5D8; }
SET64(1, (s64)(s32)0x2e850000);
SET64(1, RD(1) | 0xa300);
c->f[0].u = RW(1);
c->f[5].u = c->f[4].u;
SET64(1, (s64)(s32)0x248d0000);
SET64(1, RD(1) | 0x3131);
c->f[2].u = RW(1);
c->f[3].f = fpu(F(6) * F(0));
c->f[2].f = fpu(F(6) * F(2));
c->f[4].f = fpu(F(4) - F(3));
c->f[0].f = fpu(F(5) - F(4));
c->f[0].f = fpu(F(0) - F(3));
c->f[3].f = fpu(F(2) - F(0));
c->f[1].f = fpu(F(4) - F(3));
wr32(c, (RW(17) + 0), c->f[1].u);
L_0011C5D4:;
c->f[1].u = rd32(c, (RW(17) + 0));
L_0011C5D8:;
c->f[0].f = fpu(F(4) - F(1));
c->f[0].f = fpu(F(0) - F(3));
{ int t = RSD(18) >= 0; wr32(c, (RW(17) + 4), c->f[0].u); if (t) goto L_0011C5F8; }
c->f[1].u = c->f[1].u ^ 0x80000000u;
SET32(2, RW(0) - RW(5)); goto L_0011C6B4;
L_0011C5F8:;
SET64(2, RD(5) + RD(0)); goto L_0011C6C0;
L_0011C600:;
SET32(6, RW(2) + -134);
SET32(3, RW(6) << 23);
SET32(16, RW(16) - RW(3));
c->f[12].u = RW(16);
SET64(1, (s64)(s32)0x43800000);
c->f[2].u = RW(1);
SET32(3, RW(0) + 1);
SET64(4, RD(29) + RD(0));
L_0011C620:;
c->f[0].u = (u32)fpu_cvtw(F(12));
SET64(2, (s32)c->f[0].u);
SET32(3, RW(3) + -1);
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(12) - F(0));
wr32(c, (RW(4) + 0), c->f[0].u);
SET32(4, RW(4) + 4);
{ int t = RSD(3) >= 0; c->f[12].f = fpu(F(1) * F(2)); if (t) { POLL(); goto L_0011C620; } }
c->f[1].u = RW(0);
c->f[0].u = c->f[12].u;
wr32(c, (RW(29) + 8), c->f[12].u);
c->fcc = F(0) == F(1);
{ int t = !c->fcc; SET32(7, RW(0) + 3); if (t) goto L_0011C684; }
SET32(2, RW(29) + 8);
L_0011C668:;
SET32(2, RW(2) + -4);
c->f[0].u = rd32(c, (RW(2) + 0));
c->fcc = F(0) == F(1);
{ int t = c->fcc; SET32(7, RW(7) + -1); if (t) { POLL(); goto L_0011C668; } }
L_0011C684:;
SET64(9, (s64)(s32)0x420000);
SET64(5, RD(17) + RD(0));
SET32(9, RW(9) + -11224);
SET64(4, RD(29) + RD(0));
SET64(31, 0x11c69c); SET32(8, RW(0) + 2); JP_F_0011D958(c);
{ int t = RSD(18) >= 0; SET64(5, RD(2) + RD(0)); if (t) goto L_0011C6C0; }
c->f[1].u = rd32(c, (RW(17) + 0));
SET32(2, RW(0) - RW(5));
c->f[0].u = rd32(c, (RW(17) + 4));
c->f[1].u = c->f[1].u ^ 0x80000000u;
L_0011C6B4:;
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(17) + 0), c->f[1].u);
wr32(c, (RW(17) + 4), c->f[0].u);
L_0011C6C0:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0011C6D8(Ctx *c) { /* func_0011C6D8 */
ENTER(0x11c6d8);
SET64(3, (s32)c->f[12].u);
SET64(5, RD(3) + RD(0));
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, (s64)(s32)0x7f0000);
SET64(2, RD(2) | 0xffff);
SET64(3, RD(3) | 0xffff);
SET64(2, RD(5) & RD(2));
SET64(2, RD(3) < RD(2));
{ int t = RD(2) == RD(0); c->f[0].u = c->f[12].u; if (t) goto L_0011C718; }
{ int t = RSD(5) >= 0; SET32(7, RSW(5) >> 23); if (t) goto L_0011C720; }
c->f[0].f = fpu(F(12) - F(12));
c->f[0].f = fpu_div(F(0), F(0));
L_0011C718:;
 return;
L_0011C720:;
SET32(7, RW(7) + -127);
SET64(2, (s64)(s32)0x800000);
SET64(3, RD(5) & RD(3));
SET64(4, RD(7) & 0x1);
SET64(5, RD(3) | RD(2));
SET64(8, RD(0) + RD(0));
SET32(5, RW(5) << (RW(4) & 31));
SET64(4, (s64)(s32)0x1000000);
SET32(7, RSW(7) >> 1);
SET32(5, RW(5) << 1);
SET64(6, RD(0) + RD(0));
L_0011C750:;
SET32(3, RW(8) + RW(4));
SET64(2, RSD(5) < RSD(3));
if (RD(2) != RD(0)) { SET32(4, RW(4) >> 1); goto L_0011C770; }
SET32(5, RW(5) - RW(3));
SET32(8, RW(3) + RW(4));
SET32(6, RW(6) + RW(4));
SET32(4, RW(4) >> 1);
L_0011C770:;
{ int t = RD(4) != RD(0); SET32(5, RW(5) << 1); if (t) { POLL(); goto L_0011C750; } }
{ int t = RD(5) == RD(0); SET64(2, RD(6) & 0x1); if (t) goto L_0011C784; }
SET32(6, RW(6) + RW(2));
L_0011C784:;
SET32(2, RSW(6) >> 1);
SET32(3, RW(7) << 23);
SET64(5, (s64)(s32)0x3f000000);
SET32(5, RW(5) + RW(2));
SET32(5, RW(5) + RW(3));
c->f[0].u = RW(5);
 return;
}

void JP_F_0011C7A8(Ctx *c) { /* func_0011C7A8 */
ENTER(0x11c7a8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 40), RD(21));
SET64(2, RD(20) + RD(0));
SET64(18, RSD(2) >> 32);
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, (s64)(s32)0x3e3f0000);
SET64(3, RD(3) | 0xffff);
SET64(2, RD(2) | 0xffff);
SET64(18, RD(18) & RD(3));
SET64(2, RSD(2) < RSD(18));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_0011C818; }
SET64(31, 0x11c800);  JP_F_00122210(c);
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0011C818; }
SET64(2, RD(0) | 0xffc0);
SET64(2, RD(2) << 46);
SET64(17, rd64(c, (RW(29) + 8))); goto L_0011CA5C;
L_0011C818:;
SET64(5, RD(20) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x11c828);  JP_F_00121C20(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -10208)));
SET64(16, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x11c840);  JP_F_00121C20(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -10200)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11c854);  JP_F_00121B60(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11c864);  JP_F_00121C20(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -10192)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11c878);  JP_F_00121B60(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11c888);  JP_F_00121C20(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -10184)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11c89c);  JP_F_00121B60(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11c8ac);  JP_F_00121C20(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -10176)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11c8c0);  JP_F_00121B60(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11c8d0);  JP_F_00121C20(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -10168)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11c8e4);  JP_F_00121B60(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11c8f4);  JP_F_00121C20(c);
SET64(21, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3fd30000);
SET64(2, RD(2) | 0x3332);
SET64(2, RSD(2) < RSD(18));
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x3fe90000); goto L_0011C988; }
SET64(5, RD(0) | 0xff80);
SET64(5, RD(5) << 46);
SET64(4, RD(16) + RD(0));
SET64(31, 0x11c920);  JP_F_00121C20(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(21) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(31, 0x11c934);  JP_F_00121C20(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(22) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x11c948);  JP_F_00121C20(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11c958);  JP_F_00121BB8(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11c968);  JP_F_00121BB8(c);
SET64(4, RD(0) | 0xffc0);
SET64(4, RD(4) << 46);
SET64(5, RD(2) + RD(0));
SET64(31, 0x11c97c);  JP_F_00121BB8(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011CA58;
L_0011C988:;
SET64(17, RD(0) | 0xff48);
SET64(17, RD(17) << 46);
SET64(2, RSD(2) < RSD(18));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xffe00000); if (t) goto L_0011C9C0; }
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET32(2, RW(18) + RW(2));
SET64(19, RD(19) & RD(3));
SET64(2, RD(2) << 32);
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET64(19, RD(19) | RD(2));
SET64(17, RD(19) & RD(3));
L_0011C9C0:;
SET64(5, RD(0) | 0xff80);
SET64(5, RD(5) << 46);
SET64(4, RD(16) + RD(0));
SET64(31, 0x11c9d4);  JP_F_00121C20(c);
SET64(5, RD(17) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11c9e4);  JP_F_00121BB8(c);
SET64(4, RD(0) | 0xffc0);
SET64(4, RD(4) << 46);
SET64(5, RD(17) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(31, 0x11c9fc);  JP_F_00121BB8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(21) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(31, 0x11ca10);  JP_F_00121C20(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(22) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x11ca24);  JP_F_00121C20(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11ca34);  JP_F_00121BB8(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11ca44);  JP_F_00121BB8(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11ca54);  JP_F_00121BB8(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_0011CA58:;
SET64(17, rd64(c, (RW(29) + 8)));
L_0011CA5C:;
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0011CA80(Ctx *c) { /* func_0011CA80 */
ENTER(0x11ca80);
SET32(3, RW(0) + 24);
SET32(10, RW(6) + -3);
div_s(c, 0, RSW(10), RSW(3));
SET32(2, RW(8) << 2);
SET64(1, (s64)(s32)0x420000);
SET32(1, RW(1) + RW(2));
SET64(2, (s32)rd32(c, (RW(1) + -10160)));
SET32(29, RW(29) + -704);
SET32(7, RW(7) + -1);
wr64(c, (RW(29) + 624), RD(16));
wr32(c, (RW(29) + 584), RW(2));
wr64(c, (RW(29) + 632), RD(17));
wr64(c, (RW(29) + 640), RD(18));
wr64(c, (RW(29) + 648), RD(19));
wr64(c, (RW(29) + 656), RD(20));
wr64(c, (RW(29) + 664), RD(21));
wr64(c, (RW(29) + 672), RD(22));
wr64(c, (RW(29) + 680), RD(23));
wr64(c, (RW(29) + 688), RD(30));
wr64(c, (RW(29) + 696), RD(31));
wr32(c, (RW(29) + 568), RW(8));
wr32(c, (RW(29) + 576), RW(7));
if (RD(3) == RD(0)) { rt_break(c, 0x11cadc); goto L_0011CAE0; }
L_0011CAE0:;
wr32(c, (RW(29) + 560), RW(4));
SET32(4, RW(7) + RW(2));
wr32(c, (RW(29) + 564), RW(5));
wr32(c, (RW(29) + 572), RW(9));
SET64(10, c->lo.d[0]);
SET64(3, RSD(10) < (s64)0);
SET64(2, RD(10) + RD(0));
if (RD(3) != 0) SET64(2, RD(0));
wr32(c, (RW(29) + 580), RW(10));
wr32(c, (RW(29) + 580), RW(2));
SET32(2, RW(2) << 1);
SET64(3, (s32)rd32(c, (RW(29) + 580)));
SET32(2, RW(2) + RW(3));
SET32(16, RW(3) - RW(7));
SET32(2, RW(2) << 3);
SET32(6, RW(6) - RW(2));
SET32(6, RW(6) + -24);
{ int t = RSD(4) < 0; wr32(c, (RW(29) + 592), RW(6)); if (t) goto L_0011CB78; }
SET32(2, RW(16) << 2);
SET32(18, RW(4) + 1);
SET32(19, RW(2) + RW(9));
SET32(17, RW(29) + 80);
L_0011CB40:;
if (RSD(16) < 0) { SET32(18, RW(18) + -1); goto L_0011CB60; }
SET64(31, 0x11cb50); SET64(4, (s32)rd32(c, (RW(19) + 0))); JP_F_00122158(c);
wr64(c, (RW(17) + 0), RD(2));
SET32(18, RW(18) + -1); goto L_0011CB68;
L_0011CB60:;
SET64(4, RD(0) + RD(0));
wr64(c, (RW(17) + 0), RD(4));
L_0011CB68:;
SET32(17, RW(17) + 8);
SET32(19, RW(19) + 4);
{ int t = RD(18) != RD(0); SET32(16, RW(16) + 1); if (t) { POLL(); goto L_0011CB40; } }
L_0011CB78:;
SET64(5, (s32)rd32(c, (RW(29) + 584)));
{ int t = RSD(5) < 0; SET64(18, RD(0) + RD(0)); if (t) goto L_0011CC04; }
SET32(6, RW(29) + 400);
SET64(21, RD(6) + RD(0));
L_0011CB90:;
SET64(8, (s32)rd32(c, (RW(29) + 576)));
SET64(20, RD(0) + RD(0));
{ int t = RSD(8) < 0; SET32(2, RW(8) + RW(18)); if (t) goto L_0011CBEC; }
SET32(3, RW(29) + 80);
SET32(2, RW(2) << 3);
SET64(19, (s32)rd32(c, (RW(29) + 560)));
SET32(17, RW(2) + RW(3));
SET32(16, RW(8) + 1);
L_0011CBB8:;
SET64(4, rd64(c, (RW(19) + 0)));
SET32(19, RW(19) + 8);
SET64(5, rd64(c, (RW(17) + 0)));
SET32(17, RW(17) + -8);
SET64(31, 0x11cbd0); SET32(16, RW(16) + -1); JP_F_00121C20(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11cbe0);  JP_F_00121B60(c);
SET64(20, RD(2) + RD(0));
{ int t = RD(16) != RD(0);  if (t) { POLL(); goto L_0011CBB8; } }
L_0011CBEC:;
wr64(c, (RW(21) + 0), RD(20));
SET32(18, RW(18) + 1);
SET64(4, (s32)rd32(c, (RW(29) + 584)));
SET64(2, RSD(4) < RSD(18));
{ int t = RD(2) == RD(0); SET32(21, RW(21) + 8); if (t) { POLL(); goto L_0011CB90; } }
L_0011CC04:;
SET64(22, (s32)rd32(c, (RW(29) + 584)));
L_0011CC08:;
SET32(2, RW(22) << 3);
SET32(5, RW(29) + 400);
SET32(4, RW(5) + RW(2));
SET64(19, rd64(c, (RW(4) + 0)));
{ int t = RSD(22) <= 0; SET64(16, RD(22) + RD(0)); if (t) goto L_0011CCA8; }
SET32(17, RW(4) + -8);
SET64(18, RD(29) + RD(0));
L_0011CC28:;
SET64(5, RD(0) | 0xf9c0);
SET64(5, RD(5) << 46);
SET64(4, RD(19) + RD(0));
SET64(31, 0x11cc3c); SET32(16, RW(16) + -1); JP_F_00121C20(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11cc48);  JP_F_00122210(c);
SET64(31, 0x11cc50); SET64(4, RD(2) + RD(0)); JP_F_00122158(c);
SET64(5, RD(0) | 0x82e0);
SET64(5, RD(5) << 47);
SET64(20, RD(2) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x11cc68);  JP_F_00121C20(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11cc78);  JP_F_00121BB8(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11cc84);  JP_F_00122210(c);
SET64(4, rd64(c, (RW(17) + 0)));
wr32(c, (RW(18) + 0), RW(2));
SET32(18, RW(18) + 4);
SET64(5, RD(20) + RD(0));
SET64(31, 0x11cc9c); SET32(17, RW(17) + -8); JP_F_00121B60(c);
SET64(19, RD(2) + RD(0));
{ int t = RSD(16) > 0;  if (t) { POLL(); goto L_0011CC28; } }
L_0011CCA8:;
SET64(4, RD(19) + RD(0));
SET64(31, 0x11ccb4); SET64(5, (s32)rd32(c, (RW(29) + 592))); JP_F_0011EE60(c);
SET64(5, RD(0) | 0xff00);
SET64(5, RD(5) << 46);
SET64(19, RD(2) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(31, 0x11cccc);  JP_F_00121C20(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11ccd8);  JP_F_0011EBC0(c);
SET64(5, RD(0) | 0x8040);
SET64(5, RD(5) << 47);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11ccec);  JP_F_00121C20(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11ccfc);  JP_F_00121BB8(c);
SET64(19, RD(2) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(31, 0x11cd0c);  JP_F_00122210(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11cd18); wr32(c, (RW(29) + 588), RW(2)); JP_F_00122158(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11cd28);  JP_F_00121BB8(c);
SET64(6, (s32)rd32(c, (RW(29) + 592)));
SET64(19, RD(2) + RD(0));
{ int t = RSD(6) <= 0; SET64(2, (s32)rd32(c, (RW(29) + 592))); if (t) goto L_0011CD80; }
SET32(2, RW(22) << 2);
SET32(3, RW(0) + 24);
SET32(2, RW(2) + -4);
SET32(3, RW(3) - RW(6));
SET32(5, RW(29) + RW(2));
SET64(8, (s32)rd32(c, (RW(29) + 588)));
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET32(4, RW(0) + 23);
SET32(4, RW(4) - RW(6));
SET32(18, RSW(2) >> (RW(3) & 31));
SET32(3, RW(18) << (RW(3) & 31));
SET32(8, RW(8) + RW(18));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(29) + 588), RW(8));
SET32(30, RSW(2) >> (RW(4) & 31));
wr32(c, (RW(5) + 0), RW(2)); goto L_0011CDB4;
L_0011CD80:;
{ int t = RD(2) != RD(0); SET32(2, RW(22) << 2); if (t) goto L_0011CD98; }
SET32(2, RW(2) + RW(29));
SET64(3, (s32)rd32(c, (RW(2) + -4)));
SET32(30, RSW(3) >> 23); goto L_0011CDB4;
L_0011CD98:;
SET64(5, RD(0) | 0xff80);
SET64(5, RD(5) << 46);
SET64(4, RD(19) + RD(0));
SET64(31, 0x11cdac); SET32(30, RW(0) + 2); JP_F_00122108(c);
SET64(2, RSD(2) < (s64)0);
if (RD(2) != 0) SET64(30, RD(0));
L_0011CDB4:;
{ int t = RSD(30) <= 0; SET64(3, (s32)rd32(c, (RW(29) + 588))); if (t) goto L_0011CEBC; }
SET64(17, RD(0) + RD(0));
SET32(3, RW(3) + 1);
{ int t = RSD(22) <= 0; wr32(c, (RW(29) + 588), RW(3)); if (t) goto L_0011CE14; }
SET64(4, (s64)(s32)0xff0000);
SET64(5, (s64)(s32)0x1000000);
SET64(4, RD(4) | 0xffff);
SET64(3, RD(29) + RD(0));
SET64(18, RD(22) + RD(0));
L_0011CDE0:;
{ int t = RD(17) != RD(0); SET64(16, (s32)rd32(c, (RW(3) + 0))); if (t) goto L_0011CDF8; }
{ int t = RD(16) == RD(0); SET32(2, RW(5) - RW(16)); if (t) goto L_0011CE00; }
SET32(17, RW(0) + 1); goto L_0011CDFC;
L_0011CDF8:;
SET32(2, RW(4) - RW(16));
L_0011CDFC:;
wr32(c, (RW(3) + 0), RW(2));
L_0011CE00:;
SET32(18, RW(18) + -1);
{ int t = RD(18) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_0011CDE0; } }
L_0011CE14:;
SET64(4, (s32)rd32(c, (RW(29) + 592)));
{ int t = RSD(4) <= 0; SET32(2, RW(0) + 2); if (t) goto L_0011CE70; }
SET32(2, RW(0) + 1);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 2); if (t) goto L_0011CE40; }
{ int t = RD(4) == RD(2); SET32(3, RW(22) << 2); if (t) goto L_0011CE50; }
 goto L_0011CE70;
L_0011CE40:;
SET32(3, RW(22) << 2);
SET64(4, (s64)(s32)0x7f0000); goto L_0011CE54;
L_0011CE50:;
SET64(4, (s64)(s32)0x3f0000);
L_0011CE54:;
SET32(3, RW(3) + -4);
SET64(4, RD(4) | 0xffff);
SET32(5, RW(29) + RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET64(2, RD(2) & RD(4));
wr32(c, (RW(5) + 0), RW(2));
SET32(2, RW(0) + 2);
L_0011CE70:;
{ int t = RD(30) != RD(2);  if (t) goto L_0011CEBC; }
SET64(16, RD(0) | 0xffc0);
SET64(16, RD(16) << 46);
SET64(5, RD(19) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x11ce90);  JP_F_00121BB8(c);
SET64(19, RD(2) + RD(0));
{ int t = RD(17) == RD(0);  if (t) goto L_0011CEBC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x11cea8); SET64(5, (s32)rd32(c, (RW(29) + 592))); JP_F_0011EE60(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11ceb8);  JP_F_00121BB8(c);
SET64(19, RD(2) + RD(0));
L_0011CEBC:;
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x11cecc);  JP_F_00122108(c);
{ int t = RD(2) != RD(0); SET64(5, (s32)rd32(c, (RW(29) + 584))); if (t) goto L_0011D030; }
SET32(18, RW(22) + -1);
SET64(2, RSD(18) < RSD(5));
{ int t = RD(2) != RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_0011CF0C; }
SET32(2, RW(18) << 2);
SET32(4, RW(2) + RW(29));
SET64(6, (s32)rd32(c, (RW(29) + 584)));
L_0011CEF0:;
SET32(18, RW(18) + -1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(4, RW(4) + -4);
SET64(2, RSD(18) < RSD(6));
{ int t = RD(2) == RD(0); SET64(16, RD(16) | RD(3)); if (t) { POLL(); goto L_0011CEF0; } }
L_0011CF0C:;
{ int t = RD(16) != RD(0); SET64(8, (s32)rd32(c, (RW(29) + 584))); if (t) goto L_0011D030; }
SET32(2, RW(8) + -1);
SET32(2, RW(2) << 2);
SET32(3, RW(29) + RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) != RD(0); SET32(21, RW(0) + 1); if (t) goto L_0011CF54; }
SET32(2, RW(8) << 2);
SET32(2, RW(2) + RW(29));
SET32(3, RW(2) + -4);
L_0011CF38:;
SET32(3, RW(3) + -4);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET32(21, RW(21) + 1); if (t) { POLL(); goto L_0011CF38; } }
L_0011CF54:;
SET32(30, RW(22) + RW(21));
SET32(18, RW(22) + 1);
SET64(2, RSD(30) < RSD(18));
{ int t = RD(2) != RD(0); SET64(22, RD(30) + RD(0)); if (t) { POLL(); goto L_0011CC08; } }
SET64(3, (s32)rd32(c, (RW(29) + 576)));
SET32(8, RW(29) + 80);
SET64(5, (s32)rd32(c, (RW(29) + 580)));
SET32(6, RW(29) + 400);
SET32(2, RW(3) + RW(18));
SET32(3, RW(18) << 3);
SET32(2, RW(2) << 3);
SET32(4, RW(5) + RW(18));
SET32(22, RW(2) + RW(8));
SET64(2, (s32)rd32(c, (RW(29) + 572)));
SET32(4, RW(4) << 2);
SET32(23, RW(3) + RW(6));
SET32(21, RW(4) + RW(2));
L_0011CFA0:;
SET64(3, (s32)rd32(c, (RW(29) + 576)));
SET64(20, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(21) + 0)));
SET64(31, 0x11cfb4); SET32(16, RW(3) + RW(18)); JP_F_00122158(c);
wr64(c, (RW(22) + 0), RD(2));
SET64(4, (s32)rd32(c, (RW(29) + 576)));
if (RSD(4) < 0) { SET32(18, RW(18) + 1); goto L_0011D010; }
SET32(2, RW(16) << 3);
SET32(16, RW(4) + 1);
SET32(5, RW(29) + 80);
SET64(19, (s32)rd32(c, (RW(29) + 560)));
SET32(17, RW(2) + RW(5));
L_0011CFD8:;
SET64(4, rd64(c, (RW(19) + 0)));
SET32(19, RW(19) + 8);
SET64(5, rd64(c, (RW(17) + 0)));
SET32(17, RW(17) + -8);
SET64(31, 0x11cff0); SET32(16, RW(16) + -1); JP_F_00121C20(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d000);  JP_F_00121B60(c);
SET64(20, RD(2) + RD(0));
{ int t = RD(16) != RD(0);  if (t) { POLL(); goto L_0011CFD8; } }
SET32(18, RW(18) + 1);
L_0011D010:;
wr64(c, (RW(23) + 0), RD(20));
SET64(2, RSD(30) < RSD(18));
SET32(22, RW(22) + 8);
SET32(23, RW(23) + 8);
{ int t = RD(2) == RD(0); SET32(21, RW(21) + 4); if (t) { POLL(); goto L_0011CFA0; } }
SET64(22, RD(30) + RD(0)); { POLL(); goto L_0011CC08; }
L_0011D030:;
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x11d040);  JP_F_00122108(c);
{ int t = RD(2) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 592))); if (t) goto L_0011D098; }
SET64(6, (s32)rd32(c, (RW(29) + 592)));
SET32(22, RW(22) + -1);
SET32(2, RW(22) << 2);
SET32(6, RW(6) + -24);
SET32(2, RW(29) + RW(2));
wr32(c, (RW(29) + 592), RW(6));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) != RD(0); SET64(3, RD(2) + RD(0)); if (t) goto L_0011D158; }
L_0011D070:;
SET64(8, (s32)rd32(c, (RW(29) + 592)));
SET32(3, RW(3) + -4);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(22, RW(22) + -1);
SET32(8, RW(8) + -24);
{ int t = RD(2) == RD(0); wr32(c, (RW(29) + 592), RW(8)); if (t) { POLL(); goto L_0011D070; } }
 goto L_0011D158;
L_0011D098:;
SET64(4, RD(19) + RD(0));
SET64(16, RD(0) | 0x82e0);
SET64(16, RD(16) << 47);
SET64(31, 0x11d0ac); SET32(5, RW(0) - RW(2)); JP_F_0011EE60(c);
SET64(5, RD(16) + RD(0));
SET64(19, RD(2) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(31, 0x11d0c0);  JP_F_00122108(c);
{ int t = RSD(2) < 0; SET64(3, (s32)rd32(c, (RW(29) + 592))); if (t) goto L_0011D140; }
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) | 0xf9c0);
SET64(5, RD(5) << 46);
SET32(3, RW(3) + 24);
SET64(31, 0x11d0e0); wr32(c, (RW(29) + 592), RW(3)); JP_F_00121C20(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11d0ec);  JP_F_00122210(c);
SET64(31, 0x11d0f4); SET64(4, RD(2) + RD(0)); JP_F_00122158(c);
SET64(5, RD(16) + RD(0));
SET64(20, RD(2) + RD(0));
SET32(2, RW(22) << 2);
SET64(4, RD(20) + RD(0));
SET64(31, 0x11d10c); SET32(17, RW(29) + RW(2)); JP_F_00121C20(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d11c); SET32(22, RW(22) + 1); JP_F_00121BB8(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11d128);  JP_F_00122210(c);
SET32(3, RW(22) << 2);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(20) + RD(0));
SET32(16, RW(29) + RW(3)); goto L_0011D14C;
L_0011D140:;
SET32(2, RW(22) << 2);
SET64(4, RD(19) + RD(0));
SET32(16, RW(29) + RW(2));
L_0011D14C:;
SET64(31, 0x11d154);  JP_F_00122210(c);
wr32(c, (RW(16) + 0), RW(2));
L_0011D158:;
SET64(4, RD(0) | 0xffc0);
SET64(4, RD(4) << 46);
SET64(18, RD(22) + RD(0));
SET64(31, 0x11d16c); SET64(5, (s32)rd32(c, (RW(29) + 592))); JP_F_0011EE60(c);
SET64(20, RD(2) + RD(0));
{ int t = RSD(18) < 0; SET32(2, RW(18) << 3); if (t) goto L_0011D1D0; }
SET32(3, RW(18) << 2);
SET32(4, RW(29) + 400);
SET32(16, RW(3) + RW(29));
SET32(17, RW(2) + RW(4));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_0011D190:;
SET32(16, RW(16) + -4);
SET64(31, 0x11d19c); SET32(18, RW(18) + -1); JP_F_00122158(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d1ac);  JP_F_00121C20(c);
SET64(4, RD(20) + RD(0));
wr64(c, (RW(17) + 0), RD(2));
SET64(5, RD(0) | 0xf9c0);
SET64(5, RD(5) << 46);
SET64(31, 0x11d1c4); SET32(17, RW(17) + -8); JP_F_00121C20(c);
SET64(20, RD(2) + RD(0));
if (RSD(18) >= 0) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_0011D190; } }
L_0011D1D0:;
SET64(18, RD(22) + RD(0));
{ int t = RSD(18) < 0; SET64(5, (s32)rd32(c, (RW(29) + 568))); if (t) goto L_0011D290; }
SET32(6, RW(29) + 240);
SET64(5, (s32)rd32(c, (RW(29) + 584)));
L_0011D1E8:;
SET64(20, RD(0) + RD(0));
{ int t = RSD(5) < 0; SET64(21, RD(0) + RD(0)); if (t) goto L_0011D270; }
SET32(19, RW(22) - RW(18));
{ int t = RSD(19) < 0; SET64(23, RD(19) + RD(0)); if (t) goto L_0011D274; }
SET32(2, RW(18) << 3);
SET64(8, (s64)(s32)0x420000);
SET32(3, RW(29) + 400);
SET32(17, RW(8) + -10144);
SET32(16, RW(2) + RW(3));
L_0011D218:;
SET64(4, rd64(c, (RW(17) + 0)));
SET32(17, RW(17) + 8);
SET64(5, rd64(c, (RW(16) + 0)));
SET32(16, RW(16) + 8);
wr128(c, (RW(29) + 608) & ~15u, &c->r[6]);
SET64(31, 0x11d234); SET32(21, RW(21) + 1); JP_F_00121C20(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d244);  JP_F_00121B60(c);
SET64(3, RSD(23) < RSD(21));
SET64(4, (s32)rd32(c, (RW(29) + 584)));
SET64(20, RD(2) + RD(0));
SET64(2, RSD(4) < RSD(21));
{ int t = RD(2) != RD(0); rd128(c, (RW(29) + 608) & ~15u, &c->r[6]); if (t) goto L_0011D274; }
{ int t = RD(3) == RD(0); SET32(2, RW(19) << 3); if (t) { POLL(); goto L_0011D218; } }
SET32(18, RW(18) + -1); goto L_0011D27C;
L_0011D270:;
SET32(19, RW(22) - RW(18));
L_0011D274:;
SET32(2, RW(19) << 3);
SET32(18, RW(18) + -1);
L_0011D27C:;
SET32(2, RW(6) + RW(2));
wr64(c, (RW(2) + 0), RD(20));
{ int t = RSD(18) >= 0; SET64(5, (s32)rd32(c, (RW(29) + 584))); if (t) { POLL(); goto L_0011D1E8; } }
SET64(5, (s32)rd32(c, (RW(29) + 568)));
L_0011D290:;
SET64(2, RSD(5) < (s64)3);
if (RD(2) == RD(0)) { SET64(6, (s32)rd32(c, (RW(29) + 568))); goto L_0011D2B8; }
{ int t = RSD(5) > 0; SET64(18, RD(22) + RD(0)); if (t) goto L_0011D338; }
{ int t = RD(5) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 588))); if (t) goto L_0011D2D0; }
SET64(16, rd64(c, (RW(29) + 624))); goto L_0011D59C;
L_0011D2B8:;
SET32(2, RW(0) + 3);
{ int t = RD(6) == RD(2); SET64(3, (s32)rd32(c, (RW(29) + 588))); if (t) goto L_0011D410; }
SET64(16, rd64(c, (RW(29) + 624))); goto L_0011D59C;
L_0011D2D0:;
SET64(20, RD(0) + RD(0));
{ int t = RSD(18) < 0; SET32(6, RW(29) + 240); if (t) goto L_0011D308; }
SET32(2, RW(18) << 3);
SET32(16, RW(2) + RW(6));
L_0011D2E8:;
SET64(5, rd64(c, (RW(16) + 0)));
SET32(16, RW(16) + -8);
SET64(4, RD(20) + RD(0));
SET64(31, 0x11d2fc); SET32(18, RW(18) + -1); JP_F_00121B60(c);
SET64(20, RD(2) + RD(0));
{ int t = RSD(18) >= 0;  if (t) { POLL(); goto L_0011D2E8; } }
L_0011D308:;
SET64(8, (s32)rd32(c, (RW(29) + 564)));
wr64(c, (RW(8) + 0), RD(20));
if (RD(30) == RD(0)) { SET64(3, (s32)rd32(c, (RW(29) + 588))); goto L_0011D598; }
SET64(5, RD(20) + RD(0));
SET64(4, RD(0) + RD(0));
SET64(31, 0x11d328);  JP_F_00121BB8(c);
SET64(3, (s32)rd32(c, (RW(29) + 564)));
wr64(c, (RW(3) + 0), RD(2));
SET64(3, (s32)rd32(c, (RW(29) + 588))); goto L_0011D598;
L_0011D338:;
SET64(20, RD(0) + RD(0));
{ int t = RSD(18) < 0; SET32(6, RW(29) + 240); if (t) goto L_0011D370; }
SET32(2, RW(18) << 3);
SET32(16, RW(2) + RW(6));
L_0011D350:;
SET64(5, rd64(c, (RW(16) + 0)));
SET32(16, RW(16) + -8);
SET64(4, RD(20) + RD(0));
SET64(31, 0x11d364); SET32(18, RW(18) + -1); JP_F_00121B60(c);
SET64(20, RD(2) + RD(0));
{ int t = RSD(18) >= 0;  if (t) { POLL(); goto L_0011D350; } }
L_0011D370:;
SET64(4, (s32)rd32(c, (RW(29) + 564)));
wr64(c, (RW(4) + 0), RD(20));
{ int t = RD(30) == RD(0);  if (t) goto L_0011D398; }
SET64(5, RD(20) + RD(0));
SET64(4, RD(0) + RD(0));
SET64(31, 0x11d390);  JP_F_00121BB8(c);
SET64(5, (s32)rd32(c, (RW(29) + 564)));
wr64(c, (RW(5) + 0), RD(2));
L_0011D398:;
SET64(4, rd64(c, (RW(29) + 240)));
SET64(5, RD(20) + RD(0));
SET64(31, 0x11d3a8);  JP_F_00121BB8(c);
SET64(20, RD(2) + RD(0));
{ int t = RSD(22) <= 0; SET64(6, (s32)rd32(c, (RW(29) + 564))); if (t) goto L_0011D3E0; }
SET64(18, RD(22) + RD(0));
SET32(16, RW(29) + 248);
L_0011D3C0:;
SET64(5, rd64(c, (RW(16) + 0)));
SET32(16, RW(16) + 8);
SET64(4, RD(20) + RD(0));
SET64(31, 0x11d3d4); SET32(18, RW(18) + -1); JP_F_00121B60(c);
SET64(20, RD(2) + RD(0));
{ int t = RD(18) != RD(0); SET64(6, (s32)rd32(c, (RW(29) + 564))); if (t) { POLL(); goto L_0011D3C0; } }
L_0011D3E0:;
wr64(c, (RW(6) + 8), RD(20));
if (RD(30) == RD(0)) { SET64(3, (s32)rd32(c, (RW(29) + 588))); goto L_0011D598; }
SET64(5, RD(20) + RD(0));
SET64(4, RD(0) + RD(0));
SET64(31, 0x11d3fc);  JP_F_00121BB8(c);
SET64(8, (s32)rd32(c, (RW(29) + 564)));
wr64(c, (RW(8) + 8), RD(2));
SET64(3, (s32)rd32(c, (RW(29) + 588))); goto L_0011D598;
L_0011D410:;
SET64(18, RD(22) + RD(0));
{ int t = RSD(18) <= 0; SET64(2, RSD(18) < (s64)2); if (t) goto L_0011D47C; }
SET32(2, RW(18) << 3);
SET32(3, RW(29) + RW(2));
SET32(19, RW(3) + 232);
L_0011D428:;
SET64(16, rd64(c, (RW(19) + 0)));
SET64(17, rd64(c, (RW(19) + 8)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x11d440); SET32(18, RW(18) + -1); JP_F_00121B60(c);
SET64(4, RD(16) + RD(0));
SET64(20, RD(2) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(31, 0x11d454);  JP_F_00121BB8(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d464);  JP_F_00121B60(c);
wr64(c, (RW(19) + 0), RD(20));
wr64(c, (RW(19) + 8), RD(2));
{ int t = RSD(18) > 0; SET32(19, RW(19) + -8); if (t) { POLL(); goto L_0011D428; } }
SET64(18, RD(22) + RD(0));
SET64(2, RSD(18) < (s64)2);
L_0011D47C:;
if (RD(2) != RD(0)) { SET64(18, RD(22) + RD(0)); goto L_0011D4E4; }
SET32(2, RW(18) << 3);
SET32(3, RW(29) + RW(2));
SET32(19, RW(3) + 232);
L_0011D490:;
SET64(16, rd64(c, (RW(19) + 0)));
SET64(17, rd64(c, (RW(19) + 8)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x11d4a8); SET32(18, RW(18) + -1); JP_F_00121B60(c);
SET64(4, RD(16) + RD(0));
SET64(20, RD(2) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(31, 0x11d4bc);  JP_F_00121BB8(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d4cc);  JP_F_00121B60(c);
wr64(c, (RW(19) + 0), RD(20));
SET64(3, RSD(18) < (s64)2);
wr64(c, (RW(19) + 8), RD(2));
{ int t = RD(3) == RD(0); SET32(19, RW(19) + -8); if (t) { POLL(); goto L_0011D490; } }
SET64(18, RD(22) + RD(0));
L_0011D4E4:;
SET64(20, RD(0) + RD(0));
SET64(2, RSD(18) < (s64)2);
{ int t = RD(2) != RD(0); SET32(6, RW(29) + 240); if (t) goto L_0011D524; }
SET32(2, RW(18) << 3);
SET32(16, RW(2) + RW(6));
L_0011D500:;
SET64(5, rd64(c, (RW(16) + 0)));
SET32(16, RW(16) + -8);
SET64(4, RD(20) + RD(0));
SET64(31, 0x11d514); SET32(18, RW(18) + -1); JP_F_00121B60(c);
SET64(20, RD(2) + RD(0));
SET64(2, RSD(18) < (s64)2);
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_0011D500; } }
L_0011D524:;
{ int t = RD(30) != RD(0); SET64(4, (s32)rd32(c, (RW(29) + 564))); if (t) goto L_0011D548; }
SET64(2, rd64(c, (RW(29) + 240)));
SET64(3, rd64(c, (RW(29) + 248)));
wr64(c, (RW(4) + 16), RD(20));
wr64(c, (RW(4) + 0), RD(2));
wr64(c, (RW(4) + 8), RD(3));
SET64(3, (s32)rd32(c, (RW(29) + 588))); goto L_0011D598;
L_0011D548:;
SET64(5, rd64(c, (RW(29) + 240)));
SET64(16, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x11d55c);  JP_F_00121BB8(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 564)));
wr64(c, (RW(5) + 0), RD(2));
SET64(5, rd64(c, (RW(29) + 248)));
SET64(31, 0x11d574);  JP_F_00121BB8(c);
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 564)));
SET64(5, RD(20) + RD(0));
wr64(c, (RW(6) + 8), RD(2));
SET64(31, 0x11d58c);  JP_F_00121BB8(c);
SET64(8, (s32)rd32(c, (RW(29) + 564)));
wr64(c, (RW(8) + 16), RD(2));
SET64(3, (s32)rd32(c, (RW(29) + 588)));
L_0011D598:;
SET64(16, rd64(c, (RW(29) + 624)));
L_0011D59C:;
SET64(17, rd64(c, (RW(29) + 632)));
SET64(2, RD(3) & 0x7);
SET64(18, rd64(c, (RW(29) + 640)));
SET64(19, rd64(c, (RW(29) + 648)));
SET64(20, rd64(c, (RW(29) + 656)));
SET64(21, rd64(c, (RW(29) + 664)));
SET64(22, rd64(c, (RW(29) + 672)));
SET64(23, rd64(c, (RW(29) + 680)));
SET64(30, rd64(c, (RW(29) + 688)));
SET64(31, rd64(c, (RW(29) + 696)));
SET32(29, RW(29) + 704); return;
}

void JP_F_0011D5D0(Ctx *c) { /* func_0011D5D0 */
ENTER(0x11d5d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(20));
SET64(5, RD(19) + RD(0));
SET64(5, RSD(5) >> 32);
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, (s64)(s32)0x3e3f0000);
SET64(3, RD(3) | 0xffff);
SET64(2, RD(2) | 0xffff);
SET64(5, RD(5) & RD(3));
SET64(2, RSD(2) < RSD(5));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_0011D640; }
SET64(31, 0x11d628);  JP_F_00122210(c);
{ int t = RD(2) != RD(0);  if (t) goto L_0011D640; }
SET64(2, RD(19) + RD(0));
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011D7E8;
L_0011D640:;
SET64(4, RD(19) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x11d650);  JP_F_00121C20(c);
SET64(5, RD(19) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x11d664);  JP_F_00121C20(c);
SET64(4, RD(17) + RD(0));
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -9992)));
SET64(20, RD(2) + RD(0));
SET64(31, 0x11d67c);  JP_F_00121C20(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -9984)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11d690);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d6a0);  JP_F_00121C20(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -9976)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11d6b4);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d6c4);  JP_F_00121C20(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -9968)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11d6d8);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d6e8);  JP_F_00121C20(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -9960)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11d6fc);  JP_F_00121B60(c);
SET64(4, RD(21) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(5, RD(0) | 0xff80);
SET64(5, RD(5) << 46);
{ int t = RD(16) != RD(0);  if (t) goto L_0011D760; }
SET64(5, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x11d724);  JP_F_00121C20(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -9952)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11d738);  JP_F_00121B60(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d748);  JP_F_00121C20(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d758);  JP_F_00121B60(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011D7E8;
L_0011D760:;
SET64(31, 0x11d768);  JP_F_00121C20(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x11d77c);  JP_F_00121C20(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d78c);  JP_F_00121BB8(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d79c);  JP_F_00121C20(c);
SET64(5, RD(21) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11d7ac);  JP_F_00121BB8(c);
SET64(4, RD(20) + RD(0));
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -9944)));
SET64(16, RD(2) + RD(0));
SET64(31, 0x11d7c4);  JP_F_00121C20(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d7d4);  JP_F_00121BB8(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11d7e4);  JP_F_00121BB8(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_0011D7E8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0011D808(Ctx *c) { /* func_0011D808 */
ENTER(0x11d808);
SET32(29, RW(29) + -16);
c->f[0].u = c->f[12].u;
wr32(c, (RW(29) + 0), c->f[0].u);
SET64(3, (s64)(s32)0x7fff0000);
SET64(6, (s32)rd32(c, (RW(29) + 0)));
c->f[0].u = (u32)fpu_cvtw(F(12));
SET64(5, (s32)c->f[0].u);
SET64(3, RD(3) | 0xffff);
SET64(2, (s64)(s32)0x31ff0000);
SET64(3, RD(6) & RD(3));
SET64(4, (s64)(s32)0x3e990000);
SET64(2, RD(2) | 0xffff);
SET64(4, RD(4) | 0x9999);
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) != RD(0); SET64(4, RSD(4) < RSD(3)); if (t) goto L_0011D858; }
SET64(1, (s64)(s32)0x3f800000);
c->f[0].u = RW(1);
{ int t = RD(5) == RD(0);  if (t) goto L_0011D950; }
L_0011D858:;
c->f[4].f = fpu(F(12) * F(12));
SET64(1, (s64)(s32)0xad470000);
SET64(1, RD(1) | 0xd74e);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x310f0000);
SET64(1, RD(1) | 0x74f5);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(4) * F(0));
c->f[0].f = fpu(F(0) + F(1));
SET64(1, (s64)(s32)0xb4930000);
SET64(1, RD(1) | 0xf27b);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(4) * F(0));
c->f[0].f = fpu(F(0) + F(1));
SET64(1, (s64)(s32)0x37d00000);
SET64(1, RD(1) | 0xd00);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(4) * F(0));
c->f[0].f = fpu(F(0) + F(1));
SET64(1, (s64)(s32)0xbab60000);
SET64(1, RD(1) | 0xb60);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(4) * F(0));
c->f[0].f = fpu(F(0) + F(1));
SET64(1, (s64)(s32)0x3d2a0000);
SET64(1, RD(1) | 0xaaaa);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(4) * F(0));
c->f[0].f = fpu(F(0) + F(1));
{ int t = RD(4) != RD(0); c->f[1].f = fpu(F(4) * F(0)); if (t) goto L_0011D900; }
c->f[1].f = fpu(F(4) * F(1));
SET64(1, (s64)(s32)0x3f000000);
c->f[0].u = RW(1);
c->f[2].f = fpu(F(12) * F(13));
SET64(1, (s64)(s32)0x3f800000);
c->f[3].u = RW(1);
c->f[0].f = fpu(F(4) * F(0));
c->f[1].f = fpu(F(1) - F(2));
c->f[0].f = fpu(F(0) - F(1));
c->f[0].f = fpu(F(3) - F(0)); goto L_0011D950;
L_0011D900:;
SET64(2, (s64)(s32)0x3f480000);
SET64(1, (s64)(s32)0x3e900000);
c->f[5].u = RW(1);
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff000000); if (t) goto L_0011D920; }
SET32(3, RW(3) + RW(2));
c->f[5].u = RW(3);
L_0011D920:;
SET64(1, (s64)(s32)0x3f000000);
c->f[0].u = RW(1);
c->f[2].f = fpu(F(4) * F(1));
c->f[3].f = fpu(F(12) * F(13));
SET64(1, (s64)(s32)0x3f800000);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(4) * F(0));
c->f[1].f = fpu(F(1) - F(5));
c->f[2].f = fpu(F(2) - F(3));
c->f[0].f = fpu(F(0) - F(5));
c->f[0].f = fpu(F(0) - F(2));
c->f[0].f = fpu(F(1) - F(0));
L_0011D950:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0011D958(Ctx *c) { /* func_0011D958 */
ENTER(0x11d958);
SET32(2, RW(6) + -3);
SET32(10, RW(6) + 4);
SET64(3, RSD(2) < (s64)0);
SET32(29, RW(29) + -432);
if (RD(3) != 0) SET64(2, RD(10));
wr64(c, (RW(29) + 392), RD(23));
SET32(23, RSW(2) >> 3);
wr32(c, (RW(29) + 324), RW(8));
SET64(2, RSD(23) < (s64)0);
SET32(8, RW(8) << 2);
if (RD(2) != 0) SET64(23, RD(0));
wr64(c, (RW(29) + 368), RD(20));
SET64(20, (s64)(s32)0x420000);
SET32(20, RW(20) + RW(8));
SET64(20, (s32)rd32(c, (RW(20) + -9936)));
SET32(2, RW(23) << 3);
wr64(c, (RW(29) + 352), RD(18));
SET32(18, RW(7) + -1);
SET32(6, RW(6) - RW(2));
SET32(3, RW(18) + RW(20));
wr64(c, (RW(29) + 344), RD(17));
SET32(17, RW(6) + -8);
wr64(c, (RW(29) + 400), RD(30));
SET64(30, RD(5) + RD(0));
wr64(c, (RW(29) + 336), RD(16));
SET32(5, RW(23) - RW(18));
wr64(c, (RW(29) + 360), RD(19));
wr64(c, (RW(29) + 376), RD(21));
wr64(c, (RW(29) + 384), RD(22));
wr64(c, (RW(29) + 408), RD(31));
wr32(c, (RW(29) + 416), c->f[20].u);
wr32(c, (RW(29) + 320), RW(4));
{ int t = RSD(3) < 0; wr32(c, (RW(29) + 328), RW(9)); if (t) goto L_0011DA18; }
SET32(2, RW(5) << 2);
SET32(6, RW(3) + 1);
SET32(2, RW(2) + RW(9));
SET32(3, RW(29) + 80);
L_0011D9F0:;
if (RSD(5) < 0) { wr32(c, (RW(3) + 0), RW(0)); goto L_0011DA04; }
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(3) + 0), c->f[0].u);
L_0011DA04:;
SET32(6, RW(6) + -1);
SET32(3, RW(3) + 4);
SET32(2, RW(2) + 4);
{ int t = RD(6) != RD(0); SET32(5, RW(5) + 1); if (t) { POLL(); goto L_0011D9F0; } }
L_0011DA18:;
{ int t = RSD(20) < 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0011DA88; }
SET32(2, RW(29) + 240);
SET64(4, RD(18) + RD(0));
SET64(7, RD(2) + RD(0));
L_0011DA30:;
c->f[2].u = RW(0);
if (RSD(18) < 0) { SET32(6, RW(6) + 1); goto L_0011DA74; }
SET32(5, RW(29) + 80);
SET32(2, RW(4) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 320)));
SET32(2, RW(2) + RW(5));
SET32(5, RW(18) + 1);
L_0011DA50:;
c->f[0].u = rd32(c, (RW(3) + 0));
SET32(3, RW(3) + 4);
c->f[1].u = rd32(c, (RW(2) + 0));
SET32(2, RW(2) + -4);
SET32(5, RW(5) + -1);
c->f[0].f = fpu(F(0) * F(1));
{ int t = RD(5) != RD(0); c->f[2].f = fpu(F(2) + F(0)); if (t) { POLL(); goto L_0011DA50; } }
SET32(6, RW(6) + 1);
L_0011DA74:;
wr32(c, (RW(7) + 0), c->f[2].u);
SET64(2, RSD(20) < RSD(6));
SET32(4, RW(4) + 1);
{ int t = RD(2) == RD(0); SET32(7, RW(7) + 4); if (t) { POLL(); goto L_0011DA30; } }
L_0011DA88:;
SET64(16, RD(20) + RD(0));
L_0011DA8C:;
SET32(19, RW(16) << 2);
SET32(3, RW(29) + 240);
SET32(2, RW(3) + RW(19));
SET64(5, RD(16) + RD(0));
{ int t = RSD(16) <= 0; c->f[20].u = rd32(c, (RW(2) + 0)); if (t) goto L_0011DAFC; }
SET64(1, (s64)(s32)0x3b800000);
c->f[4].u = RW(1);
SET32(3, RW(2) + -4);
SET64(1, (s64)(s32)0x43800000);
c->f[3].u = RW(1);
SET64(4, RD(29) + RD(0));
L_0011DAC0:;
c->f[0].f = fpu(F(20) * F(4));
c->f[1].u = rd32(c, (RW(3) + 0));
SET32(5, RW(5) + -1);
SET32(3, RW(3) + -4);
c->f[2].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[2].u);
c->f[2].u = RW(2);
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[0].f = fpu(F(2) * F(3));
c->f[0].f = fpu(F(20) - F(0));
c->f[20].f = fpu(F(1) + F(2));
c->f[1].u = (u32)fpu_cvtw(F(0));
wr32(c, (RW(4) + 0), c->f[1].u);
{ int t = RSD(5) > 0; SET32(4, RW(4) + 4); if (t) { POLL(); goto L_0011DAC0; } }
L_0011DAFC:;
c->f[12].u = c->f[20].u;
SET64(31, 0x11db08); SET64(4, RD(17) + RD(0)); JP_F_0011F628(c);
SET64(1, (s64)(s32)0x3e000000);
c->f[12].u = RW(1);
c->f[20].u = c->f[0].u;
SET64(22, RD(0) + RD(0));
SET64(31, 0x11db20); c->f[12].f = fpu(F(20) * F(12)); JP_F_0011F550(c);
SET64(1, (s64)(s32)0x41000000);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(0) * F(1));
c->f[20].f = fpu(F(20) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(20));
SET64(21, (s32)c->f[0].u);
c->f[0].u = RW(21);
c->f[0].f = (f32)(s32)c->f[0].u;
{ int t = RSD(17) <= 0; c->f[20].f = fpu(F(20) - F(0)); if (t) goto L_0011DB80; }
SET32(3, RW(19) + -4);
SET32(2, RW(0) + 8);
SET32(5, RW(29) + RW(3));
SET32(2, RW(2) - RW(17));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(4, RW(0) + 7);
SET32(4, RW(4) - RW(17));
SET32(6, RSW(3) >> (RW(2) & 31));
SET32(2, RW(6) << (RW(2) & 31));
SET32(21, RW(21) + RW(6));
SET32(3, RW(3) - RW(2));
wr32(c, (RW(5) + 0), RW(3));
SET32(22, RSW(3) >> (RW(4) & 31)); goto L_0011DBAC;
L_0011DB80:;
{ int t = RD(17) != RD(0); SET32(2, RW(19) + RW(29)); if (t) goto L_0011DB98; }
SET64(3, (s32)rd32(c, (RW(2) + -4)));
SET32(22, RSW(3) >> 8); goto L_0011DBAC;
L_0011DB98:;
SET64(1, (s64)(s32)0x3f000000);
c->f[0].u = RW(1);
c->fcc = F(0) <= F(20);
if (c->fcc) { SET32(22, RW(0) + 2); goto L_0011DBAC; }
L_0011DBAC:;
{ int t = RSD(22) <= 0;  if (t) goto L_0011DC78; }
SET32(21, RW(21) + 1);
{ int t = RSD(16) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_0011DC04; }
SET32(8, RW(0) + 256);
SET32(4, RW(0) + 255);
SET64(3, RD(29) + RD(0));
SET64(6, RD(16) + RD(0));
L_0011DBD0:;
{ int t = RD(7) != RD(0); SET64(5, (s32)rd32(c, (RW(3) + 0))); if (t) goto L_0011DBE8; }
{ int t = RD(5) == RD(0); SET32(2, RW(8) - RW(5)); if (t) goto L_0011DBF0; }
SET32(7, RW(0) + 1); goto L_0011DBEC;
L_0011DBE8:;
SET32(2, RW(4) - RW(5));
L_0011DBEC:;
wr32(c, (RW(3) + 0), RW(2));
L_0011DBF0:;
SET32(6, RW(6) + -1);
{ int t = RD(6) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_0011DBD0; } }
L_0011DC04:;
{ int t = RSD(17) <= 0; SET32(2, RW(0) + 2); if (t) goto L_0011DC54; }
SET32(2, RW(0) + 1);
{ int t = RD(17) == RD(2); SET32(2, RW(0) + 2); if (t) goto L_0011DC28; }
if (RD(17) == RD(2)) { SET32(2, RW(19) + -4); goto L_0011DC40; }
 goto L_0011DC54;
L_0011DC28:;
SET32(2, RW(19) + -4);
SET32(4, RW(29) + RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, RD(3) & 0x7f); goto L_0011DC4C;
L_0011DC40:;
SET32(4, RW(29) + RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, RD(3) & 0x3f);
L_0011DC4C:;
wr32(c, (RW(4) + 0), RW(3));
SET32(2, RW(0) + 2);
L_0011DC54:;
{ int t = RD(22) != RD(2);  if (t) goto L_0011DC78; }
SET64(1, (s64)(s32)0x3f800000);
c->f[12].u = RW(1);
{ int t = RD(7) == RD(0); c->f[20].f = fpu(F(12) - F(20)); if (t) goto L_0011DC78; }
SET64(31, 0x11dc74); SET64(4, RD(17) + RD(0)); JP_F_0011F628(c);
c->f[20].f = fpu(F(20) - F(0));
L_0011DC78:;
c->f[0].u = RW(0);
c->fcc = F(20) == F(0);
{ int t = !c->fcc; SET32(6, RW(16) + -1); if (t) goto L_0011DDC8; }
SET64(2, RSD(6) < RSD(20));
{ int t = RD(2) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0011DCBC; }
SET32(2, RW(6) << 2);
SET32(4, RW(2) + RW(29));
L_0011DCA0:;
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(4, RW(4) + -4);
SET32(6, RW(6) + -1);
SET64(2, RSD(6) < RSD(20));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | RD(3)); if (t) { POLL(); goto L_0011DCA0; } }
L_0011DCBC:;
{ int t = RD(5) != RD(0); SET32(2, RW(20) + -1); if (t) goto L_0011DDC0; }
SET32(2, RW(2) << 2);
SET32(3, RW(29) + RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) != RD(0); SET32(8, RW(0) + 1); if (t) goto L_0011DD04; }
SET32(2, RW(20) << 2);
SET32(2, RW(2) + RW(29));
SET32(3, RW(2) + -4);
L_0011DCE8:;
SET32(3, RW(3) + -4);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET32(8, RW(8) + 1); if (t) { POLL(); goto L_0011DCE8; } }
L_0011DD04:;
SET32(9, RW(16) + RW(8));
SET32(6, RW(16) + 1);
SET64(2, RSD(9) < RSD(6));
{ int t = RD(2) != RD(0); SET64(16, RD(9) + RD(0)); if (t) { POLL(); goto L_0011DA8C; } }
SET64(11, (s32)rd32(c, (RW(29) + 328)));
SET32(2, RW(18) + RW(6));
SET32(4, RW(23) + RW(6));
SET32(5, RW(29) + 80);
SET32(2, RW(2) << 2);
SET32(4, RW(4) << 2);
SET32(3, RW(6) << 2);
SET32(7, RW(29) + 240);
SET32(4, RW(4) + RW(11));
SET64(11, RD(5) + RD(0));
SET32(3, RW(3) + RW(7));
SET32(8, RW(2) + RW(5));
SET64(10, RD(9) + RD(0));
L_0011DD50:;
c->f[0].u = rd32(c, (RW(4) + 0));
c->f[0].f = (f32)(s32)c->f[0].u;
SET32(2, RW(18) + RW(6));
c->f[2].u = RW(0);
{ int t = RSD(18) < 0; wr32(c, (RW(8) + 0), c->f[0].u); if (t) goto L_0011DD98; }
SET32(2, RW(2) << 2);
SET64(7, (s32)rd32(c, (RW(29) + 320)));
SET32(2, RW(2) + RW(11));
SET32(5, RW(18) + 1);
L_0011DD78:;
c->f[0].u = rd32(c, (RW(7) + 0));
SET32(7, RW(7) + 4);
c->f[1].u = rd32(c, (RW(2) + 0));
SET32(2, RW(2) + -4);
SET32(5, RW(5) + -1);
c->f[0].f = fpu(F(0) * F(1));
{ int t = RD(5) != RD(0); c->f[2].f = fpu(F(2) + F(0)); if (t) { POLL(); goto L_0011DD78; } }
L_0011DD98:;
SET32(6, RW(6) + 1);
wr32(c, (RW(3) + 0), c->f[2].u);
SET64(2, RSD(10) < RSD(6));
SET32(8, RW(8) + 4);
SET32(3, RW(3) + 4);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_0011DD50; } }
SET64(16, RD(9) + RD(0)); { POLL(); goto L_0011DA8C; }
L_0011DDC0:;
c->f[0].u = RW(0);
c->fcc = F(20) == F(0);
L_0011DDC8:;
{ int t = !c->fcc; c->f[12].u = c->f[20].u; if (t) goto L_0011DE18; }
SET32(16, RW(16) + -1);
SET32(2, RW(16) << 2);
SET32(2, RW(29) + RW(2));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + -8); if (t) goto L_0011DE90; }
SET64(3, RD(2) + RD(0));
L_0011DDF0:;
SET32(3, RW(3) + -4);
SET32(16, RW(16) + -1);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET32(17, RW(17) + -8); if (t) { POLL(); goto L_0011DDF0; } }
 goto L_0011DE90;
L_0011DE18:;
SET64(31, 0x11de20); SET32(4, RW(0) - RW(17)); JP_F_0011F628(c);
SET64(1, (s64)(s32)0x43800000);
c->f[1].u = RW(1);
c->f[20].u = c->f[0].u;
c->fcc = F(1) <= F(20);
{ int t = !c->fcc; SET32(2, RW(29) + RW(19)); if (t) goto L_0011DE88; }
SET64(1, (s64)(s32)0x3b800000);
c->f[0].u = RW(1);
SET32(16, RW(16) + 1);
SET32(2, RW(16) << 2);
SET32(4, RW(29) + RW(19));
c->f[0].f = fpu(F(20) * F(0));
SET32(3, RW(29) + RW(2));
c->f[2].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[2].u);
c->f[2].u = RW(2);
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[0].f = fpu(F(2) * F(1));
c->f[0].f = fpu(F(20) - F(0));
c->f[1].u = (u32)fpu_cvtw(F(0));
wr32(c, (RW(4) + 0), c->f[1].u);
c->f[0].u = (u32)fpu_cvtw(F(2));
wr32(c, (RW(3) + 0), c->f[0].u);
SET32(17, RW(17) + 8); goto L_0011DE90;
L_0011DE88:;
c->f[0].u = (u32)fpu_cvtw(F(20));
wr32(c, (RW(2) + 0), c->f[0].u);
L_0011DE90:;
SET64(1, (s64)(s32)0x3f800000);
c->f[12].u = RW(1);
SET64(31, 0x11dea0); SET64(4, RD(17) + RD(0)); JP_F_0011F628(c);
SET64(6, RD(16) + RD(0));
{ int t = RSD(6) < 0; c->f[2].u = c->f[0].u; if (t) goto L_0011DEEC; }
SET32(2, RW(29) + 240);
SET64(1, (s64)(s32)0x3b800000);
c->f[1].u = RW(1);
SET64(4, RD(2) + RD(0));
L_0011DEC0:;
SET32(2, RW(6) << 2);
SET32(6, RW(6) + -1);
SET32(3, RW(29) + RW(2));
SET32(2, RW(4) + RW(2));
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(2) * F(0));
c->f[2].f = fpu(F(2) * F(1));
{ int t = RSD(6) >= 0; wr32(c, (RW(2) + 0), c->f[0].u); if (t) { POLL(); goto L_0011DEC0; } }
SET64(6, RD(16) + RD(0));
L_0011DEEC:;
{ int t = RSD(6) < 0; SET64(2, (s64)(s32)0x420000); if (t) goto L_0011DF80; }
SET32(3, RW(29) + 240);
SET64(10, RD(3) + RD(0));
SET32(12, RW(2) + -9920);
SET32(11, RW(29) + 160);
L_0011DF08:;
c->f[2].u = RW(0);
{ int t = RSD(20) < 0; SET64(8, RD(0) + RD(0)); if (t) goto L_0011DF68; }
SET32(7, RW(16) - RW(6));
{ int t = RSD(7) < 0; SET64(9, RD(7) + RD(0)); if (t) goto L_0011DF6C; }
SET32(2, RW(6) << 2);
SET64(5, RD(12) + RD(0));
SET32(4, RW(2) + RW(10));
c->f[0].u = rd32(c, (RW(5) + 0));
L_0011DF30:;
SET32(5, RW(5) + 4);
c->f[1].u = rd32(c, (RW(4) + 0));
SET32(4, RW(4) + 4);
SET32(8, RW(8) + 1);
c->f[0].f = fpu(F(0) * F(1));
SET64(2, RSD(20) < RSD(8));
SET64(3, RSD(9) < RSD(8));
{ int t = RD(2) != RD(0); c->f[2].f = fpu(F(2) + F(0)); if (t) goto L_0011DF6C; }
if (RD(3) == RD(0)) { c->f[0].u = rd32(c, (RW(5) + 0)); { POLL(); goto L_0011DF30; } }
SET32(2, RW(7) << 2); goto L_0011DF70;
L_0011DF68:;
SET32(7, RW(16) - RW(6));
L_0011DF6C:;
SET32(2, RW(7) << 2);
L_0011DF70:;
SET32(6, RW(6) + -1);
SET32(2, RW(11) + RW(2));
{ int t = RSD(6) >= 0; wr32(c, (RW(2) + 0), c->f[2].u); if (t) { POLL(); goto L_0011DF08; } }
L_0011DF80:;
SET64(5, (s32)rd32(c, (RW(29) + 324)));
SET64(2, RSD(5) < (s64)3);
if (RD(2) == RD(0)) { SET64(6, (s32)rd32(c, (RW(29) + 324))); goto L_0011DFA8; }
if (RSD(5) > 0) { SET64(6, RD(16) + RD(0)); goto L_0011E008; }
{ int t = RD(5) == RD(0); SET64(2, RD(21) & 0x7); if (t) goto L_0011DFC0; }
SET64(16, rd64(c, (RW(29) + 336))); goto L_0011E18C;
L_0011DFA8:;
SET32(2, RW(0) + 3);
{ int t = RD(6) == RD(2); SET64(2, RD(21) & 0x7); if (t) goto L_0011E090; }
SET64(16, rd64(c, (RW(29) + 336))); goto L_0011E18C;
L_0011DFC0:;
SET64(6, RD(16) + RD(0));
c->f[2].u = RW(0);
{ int t = RSD(6) < 0; SET32(3, RW(29) + 160); if (t) goto L_0011DFF4; }
SET32(2, RW(6) << 2);
SET32(2, RW(2) + RW(3));
L_0011DFD8:;
c->f[0].u = rd32(c, (RW(2) + 0));
SET32(2, RW(2) + -4);
SET32(6, RW(6) + -1);
{ int t = RSD(6) >= 0; c->f[2].f = fpu(F(2) + F(0)); if (t) { POLL(); goto L_0011DFD8; } }
L_0011DFF4:;
{ int t = RD(22) == RD(0); wr32(c, (RW(30) + 0), c->f[2].u); if (t) goto L_0011E184; }
c->f[0].u = c->f[2].u ^ 0x80000000u;
wr32(c, (RW(30) + 0), c->f[0].u); goto L_0011E184;
L_0011E008:;
c->f[2].u = RW(0);
{ int t = RSD(6) < 0; SET32(3, RW(29) + 160); if (t) goto L_0011E03C; }
SET32(2, RW(6) << 2);
SET32(2, RW(2) + RW(3));
L_0011E020:;
c->f[0].u = rd32(c, (RW(2) + 0));
SET32(2, RW(2) + -4);
SET32(6, RW(6) + -1);
{ int t = RSD(6) >= 0; c->f[2].f = fpu(F(2) + F(0)); if (t) { POLL(); goto L_0011E020; } }
L_0011E03C:;
{ int t = RD(22) == RD(0); wr32(c, (RW(30) + 0), c->f[2].u); if (t) goto L_0011E04C; }
c->f[0].u = c->f[2].u ^ 0x80000000u;
wr32(c, (RW(30) + 0), c->f[0].u);
L_0011E04C:;
c->f[0].u = rd32(c, (RW(29) + 160));
{ int t = RSD(16) <= 0; c->f[2].f = fpu(F(0) - F(2)); if (t) goto L_0011E07C; }
SET64(6, RD(16) + RD(0));
SET32(2, RW(29) + 164);
L_0011E060:;
c->f[0].u = rd32(c, (RW(2) + 0));
SET32(2, RW(2) + 4);
SET32(6, RW(6) + -1);
{ int t = RD(6) != RD(0); c->f[2].f = fpu(F(2) + F(0)); if (t) { POLL(); goto L_0011E060; } }
L_0011E07C:;
{ int t = RD(22) == RD(0); wr32(c, (RW(30) + 4), c->f[2].u); if (t) goto L_0011E184; }
c->f[0].u = c->f[2].u ^ 0x80000000u;
wr32(c, (RW(30) + 4), c->f[0].u); goto L_0011E184;
L_0011E090:;
SET64(6, RD(16) + RD(0));
{ int t = RSD(6) <= 0; SET64(2, RSD(6) < (s64)2); if (t) goto L_0011E0D8; }
SET32(2, RW(6) << 2);
SET32(3, RW(29) + RW(2));
SET32(3, RW(3) + 156);
L_0011E0A8:;
c->f[1].u = rd32(c, (RW(3) + 0));
SET32(6, RW(6) + -1);
c->f[0].u = rd32(c, (RW(3) + 4));
c->f[2].f = fpu(F(1) + F(0));
c->f[1].f = fpu(F(1) - F(2));
wr32(c, (RW(3) + 0), c->f[2].u);
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(3) + 4), c->f[0].u);
{ int t = RSD(6) > 0; SET32(3, RW(3) + -4); if (t) { POLL(); goto L_0011E0A8; } }
SET64(6, RD(16) + RD(0));
SET64(2, RSD(6) < (s64)2);
L_0011E0D8:;
if (RD(2) != RD(0)) { SET64(6, RD(16) + RD(0)); goto L_0011E120; }
SET32(2, RW(6) << 2);
SET32(3, RW(29) + RW(2));
SET32(3, RW(3) + 156);
L_0011E0F0:;
c->f[0].u = rd32(c, (RW(3) + 0));
SET32(6, RW(6) + -1);
c->f[1].u = rd32(c, (RW(3) + 4));
SET64(2, RSD(6) < (s64)2);
c->f[2].f = fpu(F(0) + F(1));
c->f[0].f = fpu(F(0) - F(2));
wr32(c, (RW(3) + 0), c->f[2].u);
c->f[1].f = fpu(F(1) + F(0));
wr32(c, (RW(3) + 4), c->f[1].u);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + -4); if (t) { POLL(); goto L_0011E0F0; } }
SET64(6, RD(16) + RD(0));
L_0011E120:;
c->f[2].u = RW(0);
SET64(2, RSD(6) < (s64)2);
{ int t = RD(2) != RD(0); SET32(2, RW(6) << 2); if (t) goto L_0011E154; }
SET32(3, RW(29) + 160);
SET32(3, RW(2) + RW(3));
L_0011E138:;
c->f[0].u = rd32(c, (RW(3) + 0));
SET32(3, RW(3) + -4);
SET32(6, RW(6) + -1);
SET64(2, RSD(6) < (s64)2);
{ int t = RD(2) == RD(0); c->f[2].f = fpu(F(2) + F(0)); if (t) { POLL(); goto L_0011E138; } }
L_0011E154:;
{ int t = RD(22) != RD(0); c->f[0].u = rd32(c, (RW(29) + 160)); if (t) goto L_0011E168; }
c->f[1].u = rd32(c, (RW(29) + 164)); goto L_0011E178;
L_0011E168:;
c->f[2].u = c->f[2].u ^ 0x80000000u;
c->f[1].u = rd32(c, (RW(29) + 164));
c->f[0].u = c->f[0].u ^ 0x80000000u;
c->f[1].u = c->f[1].u ^ 0x80000000u;
L_0011E178:;
wr32(c, (RW(30) + 8), c->f[2].u);
wr32(c, (RW(30) + 0), c->f[0].u);
wr32(c, (RW(30) + 4), c->f[1].u);
L_0011E184:;
SET64(2, RD(21) & 0x7);
SET64(16, rd64(c, (RW(29) + 336)));
L_0011E18C:;
SET64(17, rd64(c, (RW(29) + 344)));
SET64(18, rd64(c, (RW(29) + 352)));
SET64(19, rd64(c, (RW(29) + 360)));
SET64(20, rd64(c, (RW(29) + 368)));
SET64(21, rd64(c, (RW(29) + 376)));
SET64(22, rd64(c, (RW(29) + 384)));
SET64(23, rd64(c, (RW(29) + 392)));
SET64(30, rd64(c, (RW(29) + 400)));
SET64(31, rd64(c, (RW(29) + 408)));
c->f[20].u = rd32(c, (RW(29) + 416));
SET32(29, RW(29) + 432); return;
}

void JP_F_0011E1C0(Ctx *c) { /* func_0011E1C0 */
ENTER(0x11e1c0);
SET32(29, RW(29) + -16);
c->f[0].u = c->f[12].u;
wr32(c, (RW(29) + 0), c->f[0].u);
SET64(3, (s64)(s32)0x7fff0000);
SET64(6, (s32)rd32(c, (RW(29) + 0)));
c->f[0].u = (u32)fpu_cvtw(F(12));
SET64(5, (s32)c->f[0].u);
SET64(3, RD(3) | 0xffff);
SET64(2, (s64)(s32)0x31ff0000);
SET64(3, RD(6) & RD(3));
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(3));
if (RD(2) != RD(0)) { c->f[3].f = fpu(F(12) * F(12)); goto L_0011E204; }
{ int t = RD(5) == RD(0); c->f[0].u = c->f[12].u; if (t) goto L_0011E2BC; }
c->f[3].f = fpu(F(12) * F(12));
L_0011E204:;
SET64(1, (s64)(s32)0x2f2e0000);
SET64(1, RD(1) | 0xc9d2);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0xb2d70000);
SET64(1, RD(1) | 0x2f34);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(3) * F(0));
c->f[4].f = fpu(F(3) * F(12));
c->f[0].f = fpu(F(0) + F(1));
SET64(1, (s64)(s32)0x36380000);
SET64(1, RD(1) | 0xef1a);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(3) * F(0));
c->f[0].f = fpu(F(0) + F(1));
SET64(1, (s64)(s32)0xb9500000);
SET64(1, RD(1) | 0xd01);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(3) * F(0));
c->f[0].f = fpu(F(0) + F(1));
SET64(1, (s64)(s32)0x3c080000);
SET64(1, RD(1) | 0x8889);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(3) * F(0));
{ int t = RD(4) != RD(0); c->f[1].f = fpu(F(0) + F(1)); if (t) goto L_0011E288; }
c->f[0].f = fpu(F(3) * F(1));
SET64(1, (s64)(s32)0xbe2a0000);
SET64(1, RD(1) | 0xaaaa);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(0) + F(1));
c->f[0].f = fpu(F(4) * F(0));
c->f[0].f = fpu(F(12) + F(0)); goto L_0011E2BC;
L_0011E288:;
SET64(1, (s64)(s32)0x3f000000);
c->f[0].u = RW(1);
c->f[2].f = fpu(F(4) * F(1));
SET64(1, (s64)(s32)0xbe2a0000);
SET64(1, RD(1) | 0xaaaa);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(13) * F(0));
c->f[1].f = fpu(F(4) * F(1));
c->f[0].f = fpu(F(0) - F(2));
c->f[0].f = fpu(F(3) * F(0));
c->f[0].f = fpu(F(0) - F(13));
c->f[0].f = fpu(F(0) - F(1));
c->f[0].f = fpu(F(12) - F(0));
L_0011E2BC:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0011E2C8(Ctx *c) { /* func_0011E2C8 */
ENTER(0x11e2c8);
SET32(29, RW(29) + -32);
c->f[16].u = c->f[12].u;
SET64(6, (s32)c->f[16].u);
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, (s64)(s32)0x317f0000);
SET64(3, RD(3) | 0xffff);
SET64(2, RD(2) | 0xffff);
SET64(5, RD(6) & RD(3));
SET64(2, RSD(2) < RSD(5));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0011E368; }
c->f[0].u = (u32)fpu_cvtw(F(16));
SET64(2, (s32)c->f[0].u);
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x3f2c0000); if (t) goto L_0011E36C; }
SET32(2, RW(4) + 1);
SET64(2, RD(5) | RD(2));
if (RD(2) != RD(0)) { SET32(2, RW(0) + 1); goto L_0011E338; }
SET64(31, 0x11e31c);  JP_F_0011F528(c);
SET64(1, (s64)(s32)0x3f800000);
c->f[1].u = RW(1);
c->f[0].f = fpu_div(F(1), F(0));
SET64(31, rd64(c, (RW(29) + 16))); goto L_0011E544;
L_0011E338:;
{ int t = RD(4) == RD(2); SET64(31, rd64(c, (RW(29) + 16))); if (t) goto L_0011E360; }
SET64(1, (s64)(s32)0xbf800000);
c->f[0].u = RW(1);
c->f[0].f = fpu_div(F(0), F(16));
 goto L_0011E544;
L_0011E360:;
c->f[0].u = c->f[16].u; goto L_0011E540;
L_0011E368:;
SET64(2, (s64)(s32)0x3f2c0000);
L_0011E36C:;
SET64(2, RD(2) | 0xa13f);
SET64(2, RSD(2) < RSD(5));
if (RD(2) == RD(0)) { c->f[15].f = fpu(F(16) * F(16)); goto L_0011E3B8; }
{ int t = RSD(6) >= 0;  if (t) goto L_0011E38C; }
c->f[16].u = c->f[16].u ^ 0x80000000u;
c->f[13].u = c->f[13].u ^ 0x80000000u;
L_0011E38C:;
SET64(1, (s64)(s32)0x3f490000);
SET64(1, RD(1) | 0xfda);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x33220000);
SET64(1, RD(1) | 0x2167);
c->f[1].u = RW(1);
c->f[15].f = fpu(F(0) - F(16));
c->f[14].f = fpu(F(1) - F(13));
c->f[13].u = RW(0);
c->f[16].f = fpu(F(15) + F(14));
c->f[15].f = fpu(F(16) * F(16));
L_0011E3B8:;
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + -9840);
SET64(3, (s64)(s32)0x3f2c0000);
c->f[8].u = rd32(c, (RW(2) + 48));
SET64(3, RD(3) | 0xa13f);
c->f[9].u = rd32(c, (RW(2) + 44));
SET64(3, RSD(3) < RSD(5));
c->f[14].f = fpu(F(15) * F(15));
c->f[0].u = rd32(c, (RW(2) + 40));
c->f[1].u = rd32(c, (RW(2) + 36));
c->f[12].f = fpu(F(15) * F(16));
c->f[2].u = rd32(c, (RW(2) + 32));
c->f[3].u = rd32(c, (RW(2) + 28));
c->f[8].f = fpu(F(14) * F(8));
c->f[5].u = rd32(c, (RW(2) + 24));
c->f[9].f = fpu(F(14) * F(9));
c->f[4].u = rd32(c, (RW(2) + 20));
c->f[6].u = rd32(c, (RW(2) + 16));
c->f[7].u = rd32(c, (RW(2) + 12));
c->f[0].f = fpu(F(0) + F(8));
c->f[8].u = rd32(c, (RW(2) + 0));
c->f[1].f = fpu(F(1) + F(9));
c->f[10].u = rd32(c, (RW(2) + 8));
c->f[11].u = rd32(c, (RW(2) + 4));
c->f[8].f = fpu(F(8) * F(12));
c->f[0].f = fpu(F(14) * F(0));
c->f[1].f = fpu(F(14) * F(1));
c->f[2].f = fpu(F(2) + F(0));
c->f[3].f = fpu(F(3) + F(1));
c->f[2].f = fpu(F(14) * F(2));
c->f[3].f = fpu(F(14) * F(3));
c->f[5].f = fpu(F(5) + F(2));
c->f[4].f = fpu(F(4) + F(3));
c->f[5].f = fpu(F(14) * F(5));
c->f[4].f = fpu(F(14) * F(4));
c->f[6].f = fpu(F(6) + F(5));
c->f[7].f = fpu(F(7) + F(4));
c->f[6].f = fpu(F(14) * F(6));
c->f[7].f = fpu(F(14) * F(7));
c->f[10].f = fpu(F(10) + F(6));
c->f[3].f = fpu(F(11) + F(7));
c->f[5].f = fpu(F(15) * F(10));
c->f[0].f = fpu(F(3) + F(5));
c->f[0].f = fpu(F(12) * F(0));
c->f[0].f = fpu(F(0) + F(13));
c->f[0].f = fpu(F(15) * F(0));
c->f[3].f = fpu(F(13) + F(0));
c->f[3].f = fpu(F(3) + F(8));
{ int t = RD(3) == RD(0); c->f[14].f = fpu(F(16) + F(3)); if (t) goto L_0011E4D0; }
c->f[5].u = RW(4);
c->f[5].f = (f32)(s32)c->f[5].u;
SET32(3, RSW(6) >> 30);
c->f[0].f = fpu(F(14) * F(14));
SET64(3, RD(3) & 0x2);
SET32(2, RW(0) + 1);
SET32(2, RW(2) - RW(3));
c->f[1].f = fpu(F(14) + F(5));
c->f[2].u = RW(2);
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[0].f = fpu_div(F(0), F(1));
c->f[0].f = fpu(F(0) - F(3));
c->f[0].f = fpu(F(16) - F(0));
c->f[0].f = fpu(F(0) + F(0));
c->f[0].f = fpu(F(5) - F(0));
c->f[0].f = fpu(F(2) * F(0)); goto L_0011E540;
L_0011E4D0:;
SET32(2, RW(0) + 1);
{ int t = RD(4) == RD(2); c->f[0].u = c->f[14].u; if (t) goto L_0011E540; }
SET64(3, (s32)c->f[14].u);
SET64(2, RD(3) + RD(0));
SET32(3, RW(0) + -4096);
SET64(2, RD(2) & RD(3));
c->f[15].u = RW(2);
c->f[1].f = fpu(F(15) - F(16));
SET64(1, (s64)(s32)0xbf800000);
c->f[0].u = RW(1);
c->f[0].f = fpu_div(F(0), F(14));
c->f[5].f = fpu(F(3) - F(1));
c->f[1].u = c->f[0].u;
wr32(c, (RW(29) + 0), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) & RD(3));
c->f[3].u = RW(2);
c->f[4].f = fpu(F(3) * F(15));
SET64(1, (s64)(s32)0x3f800000);
c->f[2].u = RW(1);
c->f[1].f = fpu(F(3) * F(5));
c->f[12].f = fpu(F(4) + F(2));
c->f[1].f = fpu(F(12) + F(1));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].f = fpu(F(3) + F(0));
L_0011E540:;
SET64(31, rd64(c, (RW(29) + 16)));
L_0011E544:;
SET32(29, RW(29) + 32); return;
}

void JP_F_0011E550(Ctx *c) { /* func_0011E550 */
ENTER(0x11e550);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
SET64(2, RD(19) + RD(0));
SET64(21, RSD(2) >> 32);
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, (s64)(s32)0x440f0000);
SET64(3, RD(3) | 0xffff);
SET64(2, RD(2) | 0xffff);
SET64(16, RD(21) & RD(3));
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_0011E630; }
SET64(2, RD(19) + RD(0));
SET64(5, RD(2) << 32);
SET64(5, RSD(5) >> 32);
SET64(3, (s64)(s32)0x7ff00000);
SET64(2, RSD(3) < RSD(16));
{ int t = RD(2) != RD(0);  if (t) goto L_0011E5C4; }
{ int t = RD(16) != RD(3);  if (t) goto L_0011E5D8; }
{ int t = RD(5) == RD(0);  if (t) goto L_0011E5D8; }
L_0011E5C4:;
SET64(5, RD(19) + RD(0));
SET64(31, 0x11e5d0);  JP_F_00121B60(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011E9F8;
L_0011E5D8:;
{ int t = RSD(21) <= 0; SET64(2, (s64)(s32)0x420000); if (t) goto L_0011E600; }
SET64(3, (s64)(s32)0x420000);
SET64(4, rd64(c, (RW(2) + -9760)));
SET64(5, rd64(c, (RW(3) + -9728)));
SET64(31, 0x11e5f4);  JP_F_00121B60(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011E9F8;
L_0011E600:;
SET64(4, RD(0) + RD(0));
SET64(5, rd64(c, (RW(2) + -9760)));
SET64(31, 0x11e610);  JP_F_00121BB8(c);
SET64(3, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(3) + -9728)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11e624);  JP_F_00121BB8(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011E9F8;
L_0011E630:;
SET64(2, (s64)(s32)0x3fdb0000);
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x3e1f0000); if (t) goto L_0011E690; }
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0); SET32(20, RW(0) + -1); if (t) goto L_0011E7C8; }
SET64(2, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(2) + -9616)));
SET64(31, 0x11e664);  JP_F_00121B60(c);
SET64(5, RD(0) | 0xffc0);
SET64(5, RD(5) << 46);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11e678);  JP_F_00122108(c);
{ int t = RSD(2) <= 0; SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0011E7C8; }
SET64(2, RD(19) + RD(0));
SET64(17, rd64(c, (RW(29) + 8))); goto L_0011E9FC;
L_0011E690:;
SET64(31, 0x11e698);  JP_F_0011EB88(c);
SET64(19, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3ff20000);
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x40030000); if (t) goto L_0011E750; }
SET64(2, (s64)(s32)0x3fe50000);
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0);  if (t) goto L_0011E710; }
SET64(5, RD(19) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(31, 0x11e6d4); SET64(20, RD(0) + RD(0)); JP_F_00121B60(c);
SET64(5, RD(0) | 0xffc0);
SET64(5, RD(5) << 46);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11e6e8);  JP_F_00121BB8(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) | 0x8000);
SET64(5, RD(5) << 47);
SET64(16, RD(2) + RD(0));
SET64(31, 0x11e700);  JP_F_00121B60(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
 goto L_0011E7BC;
L_0011E710:;
SET64(17, RD(0) | 0xffc0);
SET64(17, RD(17) << 46);
SET64(4, RD(19) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x11e728); SET32(20, RW(0) + 1); JP_F_00121BB8(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x11e73c);  JP_F_00121B60(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
 goto L_0011E7BC;
L_0011E750:;
SET64(2, RD(2) | 0x7fff);
SET64(2, RSD(2) < RSD(16));
if (RD(2) != RD(0)) { SET32(20, RW(0) + 3); goto L_0011E7B0; }
SET64(16, RD(0) | 0xffe0);
SET64(16, RD(16) << 46);
SET64(4, RD(19) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x11e778); SET32(20, RW(0) + 2); JP_F_00121BB8(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(31, 0x11e78c);  JP_F_00121C20(c);
SET64(5, RD(0) | 0xffc0);
SET64(5, RD(5) << 46);
SET64(4, RD(2) + RD(0));
SET64(31, 0x11e7a0);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
 goto L_0011E7BC;
L_0011E7B0:;
SET64(4, RD(0) | 0xbff0);
SET64(4, RD(4) << 48);
SET64(5, RD(19) + RD(0));
L_0011E7BC:;
SET64(31, 0x11e7c4);  JP_F_00121EA8(c);
SET64(19, RD(2) + RD(0));
L_0011E7C8:;
SET64(4, RD(19) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x11e7d8); SET64(16, (s64)(s32)0x420000); JP_F_00121C20(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(18) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x11e7ec); SET32(16, RW(16) + -9720); JP_F_00121C20(c);
SET64(5, rd64(c, (RW(16) + 80)));
SET64(17, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x11e800);  JP_F_00121C20(c);
SET64(4, rd64(c, (RW(16) + 64)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e810);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e820);  JP_F_00121C20(c);
SET64(4, rd64(c, (RW(16) + 48)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e830);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e840);  JP_F_00121C20(c);
SET64(4, rd64(c, (RW(16) + 32)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e850);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e860);  JP_F_00121C20(c);
SET64(4, rd64(c, (RW(16) + 16)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e870);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e880);  JP_F_00121C20(c);
SET64(4, rd64(c, (RW(16) + 0)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e890);  JP_F_00121B60(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e8a0);  JP_F_00121C20(c);
SET64(4, RD(17) + RD(0));
SET64(5, rd64(c, (RW(16) + 72)));
SET64(18, RD(2) + RD(0));
SET64(31, 0x11e8b4);  JP_F_00121C20(c);
SET64(4, rd64(c, (RW(16) + 56)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e8c4);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e8d4);  JP_F_00121C20(c);
SET64(4, rd64(c, (RW(16) + 40)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e8e4);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e8f4);  JP_F_00121C20(c);
SET64(4, rd64(c, (RW(16) + 24)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e904);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e914);  JP_F_00121C20(c);
SET64(4, rd64(c, (RW(16) + 8)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e924);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e934);  JP_F_00121C20(c);
{ int t = RSD(20) >= 0;  if (t) goto L_0011E978; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e94c);  JP_F_00121B60(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e95c);  JP_F_00121C20(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e96c);  JP_F_00121BB8(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011E9F8;
L_0011E978:;
SET64(4, RD(18) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e988); SET32(16, RW(20) << 3); JP_F_00121B60(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e998);  JP_F_00121C20(c);
SET64(5, (s64)(s32)0x420000);
SET32(5, RW(5) + RW(16));
SET64(5, rd64(c, (RW(5) + -9752)));
SET64(4, RD(2) + RD(0));
SET64(1, (s64)(s32)0x420000);
SET32(1, RW(1) + -9784);
SET32(16, RW(1) + RW(16));
SET64(31, 0x11e9bc);  JP_F_00121BB8(c);
SET64(5, RD(19) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11e9cc);  JP_F_00121BB8(c);
SET64(4, rd64(c, (RW(16) + 0)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11e9dc);  JP_F_00121BB8(c);
{ int t = RSD(21) >= 0; SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0011E9F8; }
SET64(5, RD(2) + RD(0));
SET64(4, RD(0) + RD(0));
SET64(31, 0x11e9f4);  JP_F_00121BB8(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_0011E9F8:;
SET64(17, rd64(c, (RW(29) + 8)));
L_0011E9FC:;
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0011EA18(Ctx *c) { /* func_0011EA18 */
ENTER(0x11ea18);
SET64(2, RD(4) + RD(0));
SET64(3, RD(2) + RD(0));
SET64(3, RSD(3) >> 32);
SET64(5, RSD(5) >> 32);
SET64(6, RD(2) + RD(0));
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xffff);
SET64(4, (s64)(s32)0x80000000);
SET64(3, RD(3) & RD(2));
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) >> 32);
SET64(5, RD(5) & RD(4));
SET64(6, RD(6) & RD(2));
SET64(3, RD(3) | RD(5));
SET64(3, RD(3) << 32);
SET64(2, RD(6) | RD(3)); return;
}

void JP_F_0011EA60(Ctx *c) { /* func_0011EA60 */
ENTER(0x11ea60);
SET32(29, RW(29) + -32);
SET64(5, RD(4) + RD(0));
SET64(2, RD(5) + RD(0));
SET64(6, RSD(2) >> 32);
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, (s64)(s32)0x3fe90000);
SET64(3, RD(3) | 0xffff);
SET64(2, RD(2) | 0x21fb);
SET64(6, RD(6) & RD(3));
SET64(2, RSD(2) < RSD(6));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0011EAA8; }
SET64(5, RD(0) + RD(0));
SET64(31, 0x11ea9c);  JP_F_0011C7A8(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0011EB7C;
L_0011EAA8:;
SET64(2, (s64)(s32)0x7fef0000);
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(6));
{ int t = RD(2) == RD(0);  if (t) goto L_0011EAD0; }
SET64(31, 0x11eac4);  JP_F_00121BB8(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0011EB7C;
L_0011EAD0:;
SET64(31, 0x11ead8); SET64(5, RD(29) + RD(0)); JP_F_0011ABF8(c);
SET32(3, RW(0) + 1);
SET64(4, RD(2) & 0x3);
{ int t = RD(4) == RD(3); SET64(2, RSD(4) < (s64)2); if (t) goto L_0011EB28; }
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2); goto L_0011EB00; }
{ int t = RD(4) == RD(0);  if (t) goto L_0011EB10; }
 goto L_0011EB68;
L_0011EB00:;
{ int t = RD(4) == RD(2);  if (t) goto L_0011EB40; }
 goto L_0011EB68;
L_0011EB10:;
SET64(4, rd64(c, (RW(29) + 0)));
SET64(5, rd64(c, (RW(29) + 8)));
SET64(31, 0x11eb20);  JP_F_0011C7A8(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0011EB7C;
L_0011EB28:;
SET64(4, rd64(c, (RW(29) + 0)));
SET64(5, rd64(c, (RW(29) + 8)));
SET64(31, 0x11eb38); SET32(6, RW(0) + 1); JP_F_0011D5D0(c);
 goto L_0011EB50;
L_0011EB40:;
SET64(4, rd64(c, (RW(29) + 0)));
SET64(5, rd64(c, (RW(29) + 8)));
SET64(31, 0x11eb50);  JP_F_0011C7A8(c);
L_0011EB50:;
SET64(4, RD(0) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11eb60);  JP_F_00121BB8(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0011EB7C;
L_0011EB68:;
SET64(4, rd64(c, (RW(29) + 0)));
SET64(5, rd64(c, (RW(29) + 8)));
SET64(31, 0x11eb78); SET32(6, RW(0) + 1); JP_F_0011D5D0(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_0011EB7C:;
SET32(29, RW(29) + 32); return;
}

void JP_F_0011EB88(Ctx *c) { /* func_0011EB88 */
ENTER(0x11eb88);
SET64(2, RD(4) + RD(0));
SET64(2, RSD(2) >> 32);
SET64(3, (s64)(s32)0x7fff0000);
SET64(5, (s64)(s32)0xffff0000);
SET64(5, RD(5) >> 32);
SET64(3, RD(3) | 0xffff);
SET64(4, RD(4) & RD(5));
SET64(2, RD(2) & RD(3));
SET64(2, RD(2) << 32);
SET64(4, RD(4) | RD(2));
SET64(2, RD(4) + RD(0));
 return;
}

void JP_F_0011EBC0(Ctx *c) { /* func_0011EBC0 */
ENTER(0x11ebc0);
SET32(29, RW(29) + -48);
SET64(6, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
SET64(2, RD(6) + RD(0));
SET64(18, RD(2) << 32);
SET64(18, RSD(18) >> 32);
SET64(16, RSD(2) >> 32);
SET32(3, RSW(16) >> 20);
SET64(3, RD(3) & 0x7ff);
SET32(17, RW(3) + -1023);
SET64(2, RSD(17) < (s64)20);
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_0011ECD0; }
{ int t = RSD(17) >= 0; SET64(5, (s64)(s32)0xf0000); if (t) goto L_0011EC68; }
SET64(2, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(2) + -9600)));
SET64(31, 0x11ec1c);  JP_F_00121B60(c);
SET64(5, RD(0) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11ec2c);  JP_F_00122108(c);
{ int t = RSD(2) <= 0;  if (t) goto L_0011ED84; }
{ int t = RSD(16) < 0; SET64(2, (s64)(s32)0x7fff0000); if (t) goto L_0011EC48; }
SET64(18, RD(0) + RD(0));
SET64(16, RD(0) + RD(0)); goto L_0011ED84;
L_0011EC48:;
SET64(2, RD(2) | 0xffff);
SET64(2, RD(16) & RD(2));
SET64(2, RD(2) | RD(18));
{ int t = RD(2) == RD(0);  if (t) goto L_0011ED84; }
SET64(16, (s64)(s32)0xbff00000);
SET64(18, RD(0) + RD(0)); goto L_0011ED84;
L_0011EC68:;
SET64(2, RD(6) + RD(0));
SET64(5, RD(5) | 0xffff);
SET32(19, RSW(5) >> (RW(17) & 31));
SET64(3, RD(16) & RD(19));
SET64(3, RD(3) | RD(18));
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0011EDB8; }
SET64(2, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(2) + -9600)));
SET64(31, 0x11ec94);  JP_F_00121B60(c);
SET64(5, RD(0) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11eca4);  JP_F_00122108(c);
{ int t = RSD(2) <= 0;  if (t) goto L_0011ED84; }
{ int t = RSD(16) >= 0; SET64(2, ~(RD(0) | RD(19))); if (t) goto L_0011ECC4; }
SET64(2, (s64)(s32)0x100000);
SET32(2, RSW(2) >> (RW(17) & 31));
SET32(16, RW(16) + RW(2));
SET64(2, ~(RD(0) | RD(19)));
L_0011ECC4:;
SET64(18, RD(0) + RD(0));
SET64(16, RD(16) & RD(2)); goto L_0011ED84;
L_0011ECD0:;
SET64(2, RSD(17) < (s64)52);
{ int t = RD(2) != RD(0); SET32(2, RW(3) + -1043); if (t) goto L_0011ED00; }
SET32(2, RW(0) + 1024);
{ int t = RD(17) != RD(2);  if (t) goto L_0011EDB0; }
SET64(5, RD(6) + RD(0));
SET64(31, 0x11ecf4);  JP_F_00121B60(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011EDB8;
L_0011ED00:;
SET32(3, RW(0) + -1);
SET32(19, RW(3) >> (RW(2) & 31));
SET64(2, RD(6) + RD(0));
SET64(3, RD(18) & RD(19));
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0011EDB8; }
SET64(2, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(2) + -9600)));
SET64(31, 0x11ed28);  JP_F_00121B60(c);
SET64(5, RD(0) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11ed38);  JP_F_00122108(c);
{ int t = RSD(2) <= 0;  if (t) goto L_0011ED84; }
{ int t = RSD(16) >= 0; SET64(2, ~(RD(0) | RD(19))); if (t) goto L_0011ED80; }
SET32(2, RW(0) + 20);
{ int t = RD(17) != RD(2); SET32(2, RW(0) + 52); if (t) goto L_0011ED60; }
SET32(16, RW(16) + 1); goto L_0011ED7C;
L_0011ED60:;
SET32(3, RW(0) + 1);
SET32(2, RW(2) - RW(17));
SET32(3, RW(3) << (RW(2) & 31));
SET32(3, RW(18) + RW(3));
SET64(2, RD(3) < RD(18));
SET64(18, RD(3) + RD(0));
SET32(16, RW(16) + RW(2));
L_0011ED7C:;
SET64(2, ~(RD(0) | RD(19)));
L_0011ED80:;
SET64(18, RD(18) & RD(2));
L_0011ED84:;
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET64(4, RD(16) << 32);
SET64(20, RD(20) & RD(3));
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET64(2, RD(18) << 32);
SET64(20, RD(20) | RD(4));
SET64(2, RD(2) >> 32);
SET64(20, RD(20) & RD(3));
SET64(6, RD(20) | RD(2));
L_0011EDB0:;
SET64(2, RD(6) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_0011EDB8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0011EDD8(Ctx *c) { /* func_0011EDD8 */
ENTER(0x11edd8);
SET64(3, RD(4) << 32);
SET64(3, RSD(3) >> 32);
SET64(4, RSD(4) >> 32);
SET64(2, (s64)(s32)0x7fff0000);
SET64(6, (s64)(s32)0x7ff00000);
SET32(5, RW(0) - RW(3));
SET64(2, RD(2) | 0xffff);
SET64(3, RD(3) | RD(5));
SET64(4, RD(4) & RD(2));
SET32(3, RW(3) >> 31);
SET32(2, RW(0) + 1);
SET64(4, RD(4) | RD(3));
SET32(4, RW(6) - RW(4));
SET32(3, RW(0) - RW(4));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) >> 31);
SET32(2, RW(2) - RW(4)); return;
}

void JP_F_0011EE20(Ctx *c) { /* func_0011EE20 */
ENTER(0x11ee20);
SET64(2, RD(4) + RD(0));
SET64(4, RD(2) << 32);
SET64(4, RSD(4) >> 32);
SET64(2, RSD(2) >> 32);
SET64(3, (s64)(s32)0x7fff0000);
SET64(6, (s64)(s32)0x7ff00000);
SET32(5, RW(0) - RW(4));
SET64(3, RD(3) | 0xffff);
SET64(4, RD(4) | RD(5));
SET64(2, RD(2) & RD(3));
SET32(4, RW(4) >> 31);
SET64(2, RD(2) | RD(4));
SET32(2, RW(6) - RW(2));
SET32(2, RW(2) >> 31); return;
}

void JP_F_0011EE60(Ctx *c) { /* func_0011EE60 */
ENTER(0x11ee60);
SET32(29, RW(29) + -32);
SET64(6, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(2, RD(6) + RD(0));
SET64(5, RD(2) << 32);
SET64(5, RSD(5) >> 32);
SET64(7, RSD(2) >> 32);
SET64(17, (s64)(s32)0x7ff00000);
SET64(2, RD(7) & RD(17));
SET32(3, RSW(2) >> 20);
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0011EF08; }
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, RD(6) + RD(0));
SET64(3, RD(3) | 0xffff);
SET64(3, RD(7) & RD(3));
SET64(3, RD(5) | RD(3));
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0011F034; }
SET64(5, RD(0) | 0x86a0);
SET64(5, RD(5) << 47);
SET64(31, 0x11eec4);  JP_F_00121C20(c);
SET64(6, RD(2) + RD(0));
SET64(7, RSD(2) >> 32);
SET64(3, RD(7) & RD(17));
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) | 0x3cb0);
SET32(3, RSW(3) >> 20);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) == RD(0); SET32(3, RW(3) + -54); if (t) goto L_0011EF08; }
SET64(2, (s64)(s32)0x420000);
SET64(4, RD(6) + RD(0));
SET64(5, rd64(c, (RW(2) + -9552)));
SET64(31, 0x11eefc);  JP_F_00121C20(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011F034;
L_0011EF08:;
SET32(2, RW(0) + 2047);
{ int t = RD(3) != RD(2); SET32(3, RW(3) + RW(16)); if (t) goto L_0011EF30; }
SET64(4, RD(6) + RD(0));
SET64(5, RD(4) + RD(0));
SET64(31, 0x11ef24);  JP_F_00121B60(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011F034;
L_0011EF30:;
SET64(2, RSD(3) < (s64)2047);
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x420000); if (t) goto L_0011EF50; }
SET64(5, RD(6) + RD(0));
SET64(16, rd64(c, (RW(2) + -9544)));
 goto L_0011EFC8;
L_0011EF50:;
if (RSD(3) <= 0) { SET64(2, RSD(3) < (s64)-53); goto L_0011EF90; }
SET64(2, (s64)(s32)0x800f0000);
SET32(5, RW(3) << 20);
SET64(2, RD(2) | 0xffff);
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) >> 32);
SET64(2, RD(7) & RD(2));
SET64(3, RD(6) + RD(0));
SET64(2, RD(2) | RD(5));
SET64(3, RD(3) & RD(4));
SET64(2, RD(2) << 32);
SET64(6, RD(3) | RD(2));
SET64(2, RD(6) + RD(0));
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011F034;
L_0011EF90:;
if (RD(2) == RD(0)) { SET32(3, RW(3) + 54); goto L_0011EFF0; }
SET64(2, RD(0) | 0xc350);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x420000); if (t) goto L_0011EFC0; }
SET64(2, (s64)(s32)0x420000);
SET64(5, RD(6) + RD(0));
SET64(16, rd64(c, (RW(2) + -9544)));
 goto L_0011EFC8;
L_0011EFC0:;
SET64(5, RD(6) + RD(0));
SET64(16, rd64(c, (RW(2) + -9552)));
L_0011EFC8:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x11efd4);  JP_F_0011EA18(c);
SET64(5, RD(16) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x11efe4);  JP_F_00121C20(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0011F034;
L_0011EFF0:;
SET64(4, RD(6) + RD(0));
SET64(2, (s64)(s32)0x800f0000);
SET64(2, RD(2) | 0xffff);
SET32(5, RW(3) << 20);
SET64(2, RD(7) & RD(2));
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET64(2, RD(2) | RD(5));
SET64(4, RD(4) & RD(3));
SET64(2, RD(2) << 32);
SET64(6, RD(4) | RD(2));
SET64(4, RD(6) + RD(0));
SET64(5, RD(0) | 0xf240);
SET64(5, RD(5) << 46);
SET64(31, 0x11f030);  JP_F_00121C20(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_0011F034:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0011F048(Ctx *c) { /* func_0011F048 */
ENTER(0x11f048);
SET32(29, RW(29) + -32);
SET64(5, RD(4) + RD(0));
SET64(2, RD(5) + RD(0));
SET64(6, RSD(2) >> 32);
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, (s64)(s32)0x3fe90000);
SET64(3, RD(3) | 0xffff);
SET64(2, RD(2) | 0x21fb);
SET64(6, RD(6) & RD(3));
SET64(2, RSD(2) < RSD(6));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0011F090; }
SET64(5, RD(0) + RD(0));
SET64(31, 0x11f084); SET64(6, RD(0) + RD(0)); JP_F_0011D5D0(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0011F174;
L_0011F090:;
SET64(2, (s64)(s32)0x7fef0000);
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(6));
{ int t = RD(2) == RD(0);  if (t) goto L_0011F0B8; }
SET64(31, 0x11f0ac);  JP_F_00121BB8(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0011F174;
L_0011F0B8:;
SET64(31, 0x11f0c0); SET64(5, RD(29) + RD(0)); JP_F_0011ABF8(c);
SET32(3, RW(0) + 1);
SET64(4, RD(2) & 0x3);
{ int t = RD(4) == RD(3); SET64(2, RSD(4) < (s64)2); if (t) goto L_0011F110; }
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2); goto L_0011F0E8; }
{ int t = RD(4) == RD(0);  if (t) goto L_0011F0F8; }
 goto L_0011F150;
L_0011F0E8:;
{ int t = RD(4) == RD(2);  if (t) goto L_0011F128; }
 goto L_0011F150;
L_0011F0F8:;
SET64(4, rd64(c, (RW(29) + 0)));
SET64(5, rd64(c, (RW(29) + 8)));
SET64(31, 0x11f108); SET32(6, RW(0) + 1); JP_F_0011D5D0(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0011F174;
L_0011F110:;
SET64(4, rd64(c, (RW(29) + 0)));
SET64(5, rd64(c, (RW(29) + 8)));
SET64(31, 0x11f120);  JP_F_0011C7A8(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0011F174;
L_0011F128:;
SET64(4, rd64(c, (RW(29) + 0)));
SET64(5, rd64(c, (RW(29) + 8)));
SET64(31, 0x11f138); SET32(6, RW(0) + 1); JP_F_0011D5D0(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11f148);  JP_F_00121BB8(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0011F174;
L_0011F150:;
SET64(4, rd64(c, (RW(29) + 0)));
SET64(5, rd64(c, (RW(29) + 8)));
SET64(31, 0x11f160);  JP_F_0011C7A8(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x11f170);  JP_F_00121BB8(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_0011F174:;
SET32(29, RW(29) + 32); return;
}

void JP_F_0011F180(Ctx *c) { /* func_0011F180 */
ENTER(0x11f180);
SET32(29, RW(29) + -32);
c->f[13].u = c->f[12].u;
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, (s32)c->f[13].u);
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, (s64)(s32)0x507f0000);
SET64(3, RD(3) | 0xffff);
SET64(2, RD(2) | 0xffff);
SET64(16, RD(17) & RD(3));
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0011F1E8; }
{ int t = RSD(17) <= 0; SET64(2, (s64)(s32)0x420000); if (t) goto L_0011F1D0; }
SET64(3, (s64)(s32)0x420000);
c->f[1].u = rd32(c, (RW(2) + -9524));
c->f[0].u = rd32(c, (RW(3) + -9508));
c->f[0].f = fpu(F(1) + F(0)); goto L_0011F3F8;
L_0011F1D0:;
SET64(3, (s64)(s32)0x420000);
c->f[0].u = rd32(c, (RW(2) + -9524));
c->f[1].u = rd32(c, (RW(3) + -9508));
c->f[0].u = c->f[0].u ^ 0x80000000u;
c->f[0].f = fpu(F(0) - F(1)); goto L_0011F3F8;
L_0011F1E8:;
SET64(2, (s64)(s32)0x3edf0000);
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x30ff0000); if (t) goto L_0011F238; }
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0); SET32(3, RW(0) + -1); if (t) goto L_0011F31C; }
SET64(1, (s64)(s32)0x71490000);
SET64(1, RD(1) | 0xf2c9);
c->f[1].u = RW(1);
SET64(1, (s64)(s32)0x3f800000);
c->f[2].u = RW(1);
c->f[1].f = fpu(F(13) + F(1));
c->fcc = F(2) < F(1);
{ int t = c->fcc; c->f[0].u = c->f[13].u; if (t) goto L_0011F3F8; }
c->f[12].f = fpu(F(13) * F(13)); goto L_0011F320;
L_0011F238:;
SET64(31, 0x11f240);  JP_F_0011F528(c);
SET64(2, (s64)(s32)0x3f970000);
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0); c->f[13].u = c->f[0].u; if (t) goto L_0011F2C0; }
SET64(2, (s64)(s32)0x3f2f0000);
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) != RD(0);  if (t) goto L_0011F298; }
c->f[0].f = fpu(F(13) + F(13));
SET64(1, (s64)(s32)0x3f800000);
c->f[2].u = RW(1);
SET64(1, (s64)(s32)0x40000000);
c->f[1].u = RW(1);
c->f[1].f = fpu(F(13) + F(1));
c->f[0].f = fpu(F(0) - F(2));
c->f[13].f = fpu_div(F(0), F(1));
SET64(3, RD(0) + RD(0)); goto L_0011F31C;
L_0011F298:;
SET64(1, (s64)(s32)0x3f800000);
c->f[0].u = RW(1);
c->f[1].f = fpu(F(13) + F(0));
c->f[0].f = fpu(F(13) - F(0));
c->f[13].f = fpu_div(F(0), F(1));
SET32(3, RW(0) + 1); goto L_0011F31C;
L_0011F2C0:;
SET64(2, (s64)(s32)0x401b0000);
SET64(2, RD(2) | 0xffff);
SET64(2, RSD(2) < RSD(16));
if (RD(2) != RD(0)) { SET32(3, RW(0) + 3); goto L_0011F308; }
SET64(1, (s64)(s32)0x3fc00000);
c->f[0].u = RW(1);
SET64(1, (s64)(s32)0x3f800000);
c->f[2].u = RW(1);
c->f[1].f = fpu(F(13) * F(0));
c->f[0].f = fpu(F(13) - F(0));
c->f[1].f = fpu(F(1) + F(2));
c->f[13].f = fpu_div(F(0), F(1));
SET32(3, RW(0) + 2); goto L_0011F31C;
L_0011F308:;
SET64(1, (s64)(s32)0xbf800000);
c->f[0].u = RW(1);
c->f[13].f = fpu_div(F(0), F(13));
L_0011F31C:;
c->f[12].f = fpu(F(13) * F(13));
L_0011F320:;
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + -9504);
c->f[7].u = rd32(c, (RW(2) + 40));
c->f[4].u = rd32(c, (RW(2) + 32));
c->f[0].f = fpu(F(12) * F(12));
c->f[5].u = rd32(c, (RW(2) + 36));
c->f[6].u = rd32(c, (RW(2) + 24));
c->f[1].u = rd32(c, (RW(2) + 28));
c->f[8].u = rd32(c, (RW(2) + 16));
c->f[7].f = fpu(F(0) * F(7));
c->f[2].u = rd32(c, (RW(2) + 20));
c->f[5].f = fpu(F(0) * F(5));
c->f[9].u = rd32(c, (RW(2) + 8));
c->f[3].u = rd32(c, (RW(2) + 12));
c->f[10].u = rd32(c, (RW(2) + 4));
c->f[4].f = fpu(F(4) + F(7));
c->f[11].u = rd32(c, (RW(2) + 0));
c->f[1].f = fpu(F(1) + F(5));
c->f[4].f = fpu(F(0) * F(4));
c->f[1].f = fpu(F(0) * F(1));
c->f[6].f = fpu(F(6) + F(4));
c->f[2].f = fpu(F(2) + F(1));
c->f[6].f = fpu(F(0) * F(6));
c->f[2].f = fpu(F(0) * F(2));
c->f[8].f = fpu(F(8) + F(6));
c->f[3].f = fpu(F(3) + F(2));
c->f[8].f = fpu(F(0) * F(8));
c->f[3].f = fpu(F(0) * F(3));
c->f[9].f = fpu(F(9) + F(8));
c->f[10].f = fpu(F(10) + F(3));
c->f[9].f = fpu(F(0) * F(9));
c->f[1].f = fpu(F(0) * F(10));
c->f[11].f = fpu(F(11) + F(9));
{ int t = RSD(3) >= 0; c->f[0].f = fpu(F(12) * F(11)); if (t) goto L_0011F3C0; }
c->f[0].f = fpu(F(0) + F(1));
c->f[0].f = fpu(F(13) * F(0));
c->f[0].f = fpu(F(13) - F(0)); goto L_0011F3F8;
L_0011F3C0:;
c->f[0].f = fpu(F(0) + F(1));
SET32(2, RW(3) << 2);
SET64(1, (s64)(s32)0x420000);
SET32(1, RW(1) + RW(2));
c->f[1].u = rd32(c, (RW(1) + -9520));
SET64(1, (s64)(s32)0x420000);
SET32(1, RW(1) + RW(2));
c->f[2].u = rd32(c, (RW(1) + -9536));
c->f[0].f = fpu(F(13) * F(0));
c->f[0].f = fpu(F(0) - F(1));
c->f[0].f = fpu(F(0) - F(13));
{ int t = RSD(17) >= 0; c->f[0].f = fpu(F(2) - F(0)); if (t) goto L_0011F3F8; }
c->f[0].u = c->f[0].u ^ 0x80000000u;
L_0011F3F8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0011F410(Ctx *c) { /* func_0011F410 */
ENTER(0x11f410);
SET32(29, RW(29) + -16);
c->f[0].u = c->f[12].u;
wr32(c, (RW(29) + 0), c->f[0].u);
wr32(c, (RW(29) + 4), c->f[13].u);
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, (s64)(s32)0x80000000);
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET64(2, RD(2) | 0xffff);
SET64(3, RD(4) & RD(3));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(4) & RD(2));
SET64(2, RD(2) | RD(3));
c->f[0].u = RW(2);
SET32(29, RW(29) + 16); return;
}

void JP_F_0011F450(Ctx *c) { /* func_0011F450 */
ENTER(0x11f450);
SET32(29, RW(29) + -48);
c->f[0].u = c->f[12].u;
wr64(c, (RW(29) + 32), RD(31));
wr32(c, (RW(29) + 16), c->f[0].u);
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, (s64)(s32)0x3f490000);
SET64(4, (s32)rd32(c, (RW(29) + 16)));
SET64(2, RD(2) | 0xffff);
SET64(3, RD(3) | 0xfd8);
SET64(2, RD(4) & RD(2));
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) != RD(0);  if (t) goto L_0011F498; }
c->f[13].u = RW(0);
SET64(31, 0x11f490);  JP_F_0011D808(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_0011F51C;
L_0011F498:;
SET64(31, 0x11f4a0); SET64(4, RD(29) + RD(0)); JP_F_0011C328(c);
SET32(3, RW(0) + 1);
SET64(4, RD(2) & 0x3);
{ int t = RD(4) == RD(3); SET64(2, RSD(4) < (s64)2); if (t) goto L_0011F4E8; }
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2); goto L_0011F4C8; }
{ int t = RD(4) == RD(0); c->f[12].u = rd32(c, (RW(29) + 0)); if (t) goto L_0011F4D8; }
SET32(4, RW(0) + 1); goto L_0011F510;
L_0011F4C8:;
{ int t = RD(4) == RD(2); c->f[12].u = rd32(c, (RW(29) + 0)); if (t) goto L_0011F500; }
SET32(4, RW(0) + 1); goto L_0011F510;
L_0011F4D8:;
SET64(31, 0x11f4e0); c->f[13].u = rd32(c, (RW(29) + 4)); JP_F_0011D808(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_0011F51C;
L_0011F4E8:;
c->f[12].u = rd32(c, (RW(29) + 0));
SET32(4, RW(0) + 1);
SET64(31, 0x11f4f8); c->f[13].u = rd32(c, (RW(29) + 4)); JP_F_0011E1C0(c);
c->f[0].u = c->f[0].u ^ 0x80000000u; goto L_0011F518;
L_0011F500:;
SET64(31, 0x11f508); c->f[13].u = rd32(c, (RW(29) + 4)); JP_F_0011D808(c);
c->f[0].u = c->f[0].u ^ 0x80000000u; goto L_0011F518;
L_0011F510:;
SET64(31, 0x11f518); c->f[13].u = rd32(c, (RW(29) + 4)); JP_F_0011E1C0(c);
L_0011F518:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0011F51C:;
SET32(29, RW(29) + 48); return;
}

void JP_F_0011F528(Ctx *c) { /* func_0011F528 */
ENTER(0x11f528);
SET32(29, RW(29) + -16);
c->f[0].u = c->f[12].u;
wr32(c, (RW(29) + 0), c->f[0].u);
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) | 0xffff);
SET64(3, RD(3) & RD(2));
c->f[0].u = RW(3);
SET32(29, RW(29) + 16); return;
}

void JP_F_0011F550(Ctx *c) { /* func_0011F550 */
ENTER(0x11f550);
SET64(3, (s32)c->f[12].u);
SET64(4, RD(3) + RD(0));
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xffff);
SET64(6, RD(4) & RD(2));
SET32(3, RW(6) >> 23);
SET32(5, RW(3) + -127);
SET64(2, RSD(5) < (s64)23);
{ int t = RD(2) == RD(0); c->f[0].u = c->f[12].u; if (t) goto L_0011F620; }
if (RSD(5) >= 0) { SET64(2, (s64)(s32)0x7f0000); goto L_0011F5C8; }
SET64(1, (s64)(s32)0x71490000);
SET64(1, RD(1) | 0xf2c9);
c->f[0].u = RW(1);
c->f[1].u = RW(0);
c->f[0].f = fpu(F(12) + F(0));
c->fcc = F(1) < F(0);
{ int t = !c->fcc;  if (t) goto L_0011F618; }
{ int t = RSD(4) < 0; SET64(2, (s64)(s32)0x7f0000); if (t) goto L_0011F5B0; }
SET64(4, RD(0) + RD(0)); goto L_0011F618;
L_0011F5B0:;
SET64(2, RD(2) | 0xffff);
SET64(2, RD(2) < RD(6));
if (RD(2) != RD(0)) { SET64(4, (s64)(s32)0xbf800000); goto L_0011F618; }
 goto L_0011F618;
L_0011F5C8:;
SET64(2, RD(2) | 0xffff);
SET32(6, RSW(2) >> (RW(5) & 31));
SET64(3, RD(4) & RD(6));
{ int t = RD(3) == RD(0); c->f[0].u = c->f[12].u; if (t) goto L_0011F620; }
SET64(1, (s64)(s32)0x71490000);
SET64(1, RD(1) | 0xf2c9);
c->f[0].u = RW(1);
c->f[1].u = RW(0);
c->f[0].f = fpu(F(12) + F(0));
c->fcc = F(1) < F(0);
{ int t = !c->fcc;  if (t) goto L_0011F618; }
{ int t = RSD(4) >= 0; SET64(2, ~(RD(0) | RD(6))); if (t) goto L_0011F614; }
SET64(2, (s64)(s32)0x800000);
SET32(2, RSW(2) >> (RW(5) & 31));
SET32(4, RW(4) + RW(2));
SET64(2, ~(RD(0) | RD(6)));
L_0011F614:;
SET64(4, RD(4) & RD(2));
L_0011F618:;
c->f[12].u = RW(4);
c->f[0].u = RW(4);
L_0011F620:;
 return;
}

void JP_F_0011F628(Ctx *c) { /* func_0011F628 */
ENTER(0x11f628);
SET64(6, (s32)c->f[12].u);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(29) + 8), c->f[20].u);
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xffff);
SET64(3, (s64)(s32)0x7f0000);
SET64(2, RD(6) & RD(2));
SET64(3, RD(3) | 0xffff);
SET32(5, RW(2) >> 23);
SET64(3, RD(3) < RD(2));
c->f[0].u = c->f[12].u;
{ int t = RD(3) == RD(0); SET32(5, RW(5) + RW(4)); if (t) goto L_0011F6E0; }
SET64(2, RSD(5) < (s64)256);
{ int t = RD(2) != RD(0); c->f[13].u = c->f[12].u; if (t) goto L_0011F680; }
SET64(1, (s64)(s32)0x71490000);
SET64(1, RD(1) | 0xf2c9);
c->f[20].u = RW(1);
 goto L_0011F6D4;
L_0011F680:;
{ int t = RSD(5) <= 0; SET64(2, RD(0) | 0xc350); if (t) goto L_0011F6A8; }
SET64(2, (s64)(s32)0x807f0000);
SET32(3, RW(5) << 23);
SET64(2, RD(2) | 0xffff);
SET64(2, RD(6) & RD(2));
SET64(2, RD(2) | RD(3));
c->f[12].u = RW(2);
c->f[0].u = c->f[12].u; goto L_0011F6E0;
L_0011F6A8:;
SET64(2, RSD(2) < RSD(4));
{ int t = RD(2) == RD(0); c->f[13].u = c->f[12].u; if (t) goto L_0011F6C8; }
SET64(1, (s64)(s32)0x71490000);
SET64(1, RD(1) | 0xf2c9);
c->f[20].u = RW(1);
 goto L_0011F6D4;
L_0011F6C8:;
SET64(1, (s64)(s32)0xda20000);
SET64(1, RD(1) | 0x425f);
c->f[20].u = RW(1);
L_0011F6D4:;
SET64(31, 0x11f6dc); c->f[12].u = c->f[20].u; JP_F_0011F410(c);
c->f[0].f = fpu(F(0) * F(20));
L_0011F6E0:;
SET64(31, rd64(c, (RW(29) + 0)));
c->f[20].u = rd32(c, (RW(29) + 8));
SET32(29, RW(29) + 16); return;
}

void JP_F_0011F6F0(Ctx *c) { /* func_0011F6F0 */
ENTER(0x11f6f0);
SET32(29, RW(29) + -48);
c->f[0].u = c->f[12].u;
wr64(c, (RW(29) + 32), RD(31));
wr32(c, (RW(29) + 16), c->f[0].u);
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, (s64)(s32)0x3f490000);
SET64(4, (s32)rd32(c, (RW(29) + 16)));
SET64(2, RD(2) | 0xffff);
SET64(3, RD(3) | 0xfd8);
SET64(2, RD(4) & RD(2));
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) != RD(0);  if (t) goto L_0011F738; }
c->f[13].u = RW(0);
SET64(31, 0x11f730); SET64(4, RD(0) + RD(0)); JP_F_0011E1C0(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_0011F7D0;
L_0011F738:;
SET64(31, 0x11f740); SET64(4, RD(29) + RD(0)); JP_F_0011C328(c);
SET32(3, RW(0) + 1);
SET64(4, RD(2) & 0x3);
{ int t = RD(4) == RD(3); SET64(2, RSD(4) < (s64)2); if (t) goto L_0011F790; }
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2); goto L_0011F768; }
{ int t = RD(4) == RD(0); c->f[12].u = rd32(c, (RW(29) + 0)); if (t) goto L_0011F778; }
 goto L_0011F7C0;
L_0011F768:;
{ int t = RD(4) == RD(2); c->f[12].u = rd32(c, (RW(29) + 0)); if (t) goto L_0011F7A8; }
 goto L_0011F7C0;
L_0011F778:;
SET32(4, RW(0) + 1);
SET64(31, 0x11f784); c->f[13].u = rd32(c, (RW(29) + 4)); JP_F_0011E1C0(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_0011F7D0;
L_0011F790:;
c->f[12].u = rd32(c, (RW(29) + 0));
SET64(31, 0x11f79c); c->f[13].u = rd32(c, (RW(29) + 4)); JP_F_0011D808(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_0011F7D0;
L_0011F7A8:;
SET32(4, RW(0) + 1);
SET64(31, 0x11f7b4); c->f[13].u = rd32(c, (RW(29) + 4)); JP_F_0011E1C0(c);
c->f[0].u = c->f[0].u ^ 0x80000000u; goto L_0011F7CC;
L_0011F7C0:;
SET64(31, 0x11f7c8); c->f[13].u = rd32(c, (RW(29) + 4)); JP_F_0011D808(c);
c->f[0].u = c->f[0].u ^ 0x80000000u;
L_0011F7CC:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0011F7D0:;
SET32(29, RW(29) + 48); return;
}

void JP_F_0011F7D8(Ctx *c) { /* func_0011F7D8 */
ENTER(0x11f7d8);
SET32(29, RW(29) + -48);
c->f[0].u = c->f[12].u;
wr64(c, (RW(29) + 32), RD(31));
wr32(c, (RW(29) + 16), c->f[0].u);
SET64(3, (s64)(s32)0x7fff0000);
c->f[13].u = RW(0);
SET64(5, (s32)rd32(c, (RW(29) + 16)));
SET64(3, RD(3) | 0xffff);
SET64(2, (s64)(s32)0x3f490000);
SET64(3, RD(5) & RD(3));
SET64(2, RD(2) | 0xfda);
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) != RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0011F820; }
SET64(31, 0x11f818); SET32(4, RW(0) + 1); JP_F_0011E2C8(c);
SET64(31, rd64(c, (RW(29) + 32))); goto L_0011F848;
L_0011F820:;
SET64(31, 0x11f828);  JP_F_0011C328(c);
SET32(4, RW(0) + 1);
SET64(2, RD(2) & 0x1);
c->f[12].u = rd32(c, (RW(29) + 0));
SET32(2, RW(2) << 1);
c->f[13].u = rd32(c, (RW(29) + 4));
SET64(31, 0x11f844); SET32(4, RW(4) - RW(2)); JP_F_0011E2C8(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_0011F848:;
SET32(29, RW(29) + 48); return;
}

void JP_F_0011F850(Ctx *c) { /* func_0011F850 */
ENTER(0x11f850);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0011A8B8(c); return; }
}

void JP_F_0011F868(Ctx *c) { /* func_0011F868 */
ENTER(0x11f868);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0011B1B0(c); return; }
}

void JP_F_0011F880(Ctx *c) { /* func_0011F880 */
ENTER(0x11f880);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0011B4D0(c); return; }
}

void JP_F_0011F898(Ctx *c) { /* func_0011F898 */
ENTER(0x11f898);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0011B8F8(c); return; }
}

void JP_F_0011F8B0(Ctx *c) { /* func_0011F8B0 */
ENTER(0x11f8b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0011BC98(c); return; }
}

void JP_F_0011F8C8(Ctx *c) { /* func_0011F8C8 */
ENTER(0x11f8c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0011BE78(c); return; }
}

void JP_F_0011F8E0(Ctx *c) { /* func_0011F8E0 */
ENTER(0x11f8e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0011C048(c); return; }
}

void JP_F_0011F8F8(Ctx *c) { /* func_0011F8F8 */
ENTER(0x11f8f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0011C6D8(c); return; }
}

void JP_F_0011F910(Ctx *c) { /* func_0011F910 */
ENTER(0x11f910);
SET64(2, RD(5) << 32);
SET64(2, RSD(2) >> 32);
SET64(5, RSD(5) >> 32);
SET64(3, RD(4) << 32);
SET64(3, RSD(3) >> 32);
mul_u(c, 0, 0, RW(3), RW(2));
SET64(6, c->lo.d[0]);
SET64(8, c->hi.d[0]);
SET64(6, RD(6) << 32);
SET64(4, RSD(4) >> 32);
mul_s(c, 0, 3, RSW(3), RSW(5));
SET32(5, RW(0) + -1);
SET64(5, RD(5) << 32);
mul_s(c, 1, 4, RSW(4), RSW(2));
SET64(6, RD(6) >> 32);
SET64(9, RD(9) & RD(5));
SET64(7, (s64)(s32)0xffff0000);
SET64(7, RD(7) >> 32);
SET64(9, RD(9) | RD(6));
SET64(8, RD(8) << 32);
SET64(9, RD(9) & RD(7));
SET64(9, RD(9) | RD(8));
SET32(3, RW(3) + RW(4));
SET64(2, RSD(9) >> 32);
SET64(7, RD(9) & RD(7));
SET32(2, RW(2) + RW(3));
SET64(2, RD(2) << 32);
SET64(2, RD(7) | RD(2)); return;
}

static void JP_B_0011F988(Ctx *c, u32 entry) { /* func_0011F988 */
ENTER(entry);
switch (entry) { case 0x120008: goto L_00120008; case 0x120018: goto L_00120018; }
SET64(9, RD(4) + RD(0));
SET64(10, RSD(9) >> 32);
SET64(4, RD(10) << 32);
SET64(4, RSD(4) >> 32);
{ int t = RSD(4) >= 0; SET64(24, RD(0) + RD(0)); if (t) goto L_0011F9F4; }
SET64(2, RD(9) << 32);
SET64(2, RSD(2) >> 32);
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET32(2, RW(0) - RW(2));
SET64(6, RD(6) & RD(3));
SET64(2, RD(2) << 32);
SET32(3, RW(0) - RW(4));
SET64(2, RD(2) >> 32);
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) >> 32);
SET64(6, RD(6) | RD(2));
SET32(24, RW(0) + -1);
SET64(2, RD(6) << 32);
SET64(2, RSD(2) >> 32);
SET64(6, RD(6) & RD(4));
SET64(2, RD(0) < RD(2));
SET32(3, RW(3) - RW(2));
SET64(3, RD(3) << 32);
SET64(9, RD(6) | RD(3));
SET64(10, RSD(9) >> 32);
L_0011F9F4:;
SET64(4, RSD(5) >> 32);
{ int t = RSD(4) >= 0;  if (t) goto L_0011FA50; }
SET64(2, RD(5) << 32);
SET64(2, RSD(2) >> 32);
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET32(2, RW(0) - RW(2));
SET64(7, RD(7) & RD(3));
SET64(2, RD(2) << 32);
SET32(3, RW(0) - RW(4));
SET64(2, RD(2) >> 32);
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) >> 32);
SET64(7, RD(7) | RD(2));
SET64(24, ~(RD(0) | RD(24)));
SET64(2, RD(7) << 32);
SET64(2, RSD(2) >> 32);
SET64(7, RD(7) & RD(4));
SET64(2, RD(0) < RD(2));
SET32(3, RW(3) - RW(2));
SET64(3, RD(3) << 32);
SET64(5, RD(7) | RD(3));
L_0011FA50:;
SET64(8, RSD(5) >> 32);
SET64(11, RD(9) << 32);
SET64(11, RSD(11) >> 32);
SET64(10, RD(10) << 32);
SET64(10, RSD(10) >> 32);
SET64(9, RD(5) << 32);
SET64(9, RSD(9) >> 32);
{ int t = RD(8) != RD(0); SET64(2, RD(10) < RD(8)); if (t) goto L_0011FDF8; }
SET64(2, RD(10) < RD(9));
{ int t = RD(2) == RD(0); SET64(2, RD(0) | 0xffff); if (t) goto L_0011FBB8; }
SET64(2, RD(2) < RD(9));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff0000); if (t) goto L_0011FAA0; }
SET64(2, RD(9) < (u64)(s64)256);
SET32(4, RW(0) + 8);
if (RD(2) != 0) SET64(4, RD(0)); goto L_0011FAB4;
L_0011FAA0:;
SET32(3, RW(0) + 24);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + 16);
SET64(2, RD(2) < RD(9));
if (RD(2) != 0) SET64(4, RD(3));
L_0011FAB4:;
SET32(3, RW(9) >> (RW(4) & 31));
SET32(5, RW(0) + 32);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + -9448)));
SET32(2, RW(2) + RW(4));
SET32(6, RW(5) - RW(2));
{ int t = RD(6) == RD(0); SET32(2, RW(5) - RW(6)); if (t) goto L_0011FAEC; }
SET32(3, RW(10) << (RW(6) & 31));
SET32(2, RW(11) >> (RW(2) & 31));
SET32(11, RW(11) << (RW(6) & 31));
SET64(10, RD(3) | RD(2));
SET32(9, RW(9) << (RW(6) & 31));
L_0011FAEC:;
SET32(6, RW(9) >> 16);
SET64(8, RD(9) & 0xffff);
div_u(c, 0, RW(10), RW(6));
SET32(4, RW(11) >> 16);
if (RD(6) == RD(0)) { rt_break(c, 0x11fb00); goto L_0011FB04; }
L_0011FB04:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(7, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 5, RSW(7), RSW(8));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(5));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(5)); goto L_0011FB54; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + -1); if (t) goto L_0011FB50; }
SET64(2, RD(3) < RD(5));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(5)); goto L_0011FB54; }
SET32(7, RW(7) + -1);
SET32(3, RW(3) + RW(9));
L_0011FB50:;
SET32(3, RW(3) - RW(5));
L_0011FB54:;
if (RD(6) == RD(0)) { rt_break(c, 0x11fb58); goto L_0011FB5C; }
L_0011FB5C:;
div_u(c, 0, RW(3), RW(6));
SET64(4, RD(11) & 0xffff);
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(6, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 5, RSW(6), RSW(8));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(5));
{ int t = RD(2) == RD(0); SET32(2, RW(7) << 16); if (t) goto L_0011FBAC; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + -1); if (t) goto L_0011FBA8; }
SET64(2, RD(3) < RD(5));
SET32(3, RW(6) + -1);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_0011FBA8:;
SET32(2, RW(7) << 16);
L_0011FBAC:;
SET64(6, RD(2) | RD(6)); goto L_0011FFA0;
L_0011FBB8:;
{ int t = RD(9) != RD(0); SET64(2, RD(2) < RD(9)); if (t) goto L_0011FBE0; }
SET32(2, RW(0) + 1);
if (RD(9) == RD(0)) { rt_break(c, 0x11fbc8); goto L_0011FBCC; }
L_0011FBCC:;
div_u(c, 0, RW(2), RW(8));
SET64(2, c->lo.d[0]);
SET64(9, RD(2) + RD(0));
SET64(2, RD(0) | 0xffff);
SET64(2, RD(2) < RD(9));
L_0011FBE0:;
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff0000); if (t) goto L_0011FBF8; }
SET64(2, RD(9) < (u64)(s64)256);
SET32(4, RW(0) + 8);
if (RD(2) != 0) SET64(4, RD(0)); goto L_0011FC0C;
L_0011FBF8:;
SET32(3, RW(0) + 24);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + 16);
SET64(2, RD(2) < RD(9));
if (RD(2) != 0) SET64(4, RD(3));
L_0011FC0C:;
SET32(3, RW(9) >> (RW(4) & 31));
SET32(5, RW(0) + 32);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + -9448)));
SET32(2, RW(2) + RW(4));
SET32(6, RW(5) - RW(2));
{ int t = RD(6) != RD(0); SET32(7, RW(5) - RW(6)); if (t) goto L_0011FC48; }
SET32(10, RW(10) - RW(9));
SET32(13, RW(0) + 1);
SET32(8, RW(9) >> 16);
SET64(12, RD(9) & 0xffff); goto L_0011FD30;
L_0011FC48:;
SET32(3, RW(10) << (RW(6) & 31));
SET32(2, RW(11) >> (RW(7) & 31));
SET32(11, RW(11) << (RW(6) & 31));
SET32(4, RW(10) >> (RW(7) & 31));
SET64(10, RD(3) | RD(2));
SET32(9, RW(9) << (RW(6) & 31));
SET32(8, RW(9) >> 16);
div_u(c, 0, RW(4), RW(8));
SET32(4, RW(10) >> 16);
SET64(12, RD(9) & 0xffff);
SET64(6, RD(8) + RD(0));
if (RD(6) == RD(0)) { rt_break(c, 0x11fc78); goto L_0011FC7C; }
L_0011FC7C:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(7, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 5, RSW(7), RSW(12));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(5));
{ int t = RD(2) == RD(0); SET64(13, RD(12) + RD(0)); if (t) goto L_0011FCC8; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + -1); if (t) goto L_0011FCC8; }
SET64(2, RD(3) < RD(5));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(5)); goto L_0011FCCC; }
SET32(7, RW(7) + -1);
SET32(3, RW(3) + RW(9));
L_0011FCC8:;
SET32(3, RW(3) - RW(5));
L_0011FCCC:;
if (RD(6) == RD(0)) { rt_break(c, 0x11fcd0); goto L_0011FCD4; }
L_0011FCD4:;
div_u(c, 0, RW(3), RW(6));
SET64(4, RD(10) & 0xffff);
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(6, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 5, RSW(6), RSW(13));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(5));
{ int t = RD(2) == RD(0); SET32(2, RW(7) << 16); if (t) goto L_0011FD28; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + -1); if (t) goto L_0011FD24; }
SET64(2, RD(3) < RD(5));
{ int t = RD(2) == RD(0); SET32(2, RW(7) << 16); if (t) goto L_0011FD28; }
SET32(6, RW(6) + -1);
SET32(3, RW(3) + RW(9));
L_0011FD24:;
SET32(2, RW(7) << 16);
L_0011FD28:;
SET32(10, RW(3) - RW(5));
SET64(13, RD(2) | RD(6));
L_0011FD30:;
SET64(6, RD(8) + RD(0));
SET64(8, RD(12) + RD(0));
div_u(c, 0, RW(10), RW(6));
SET32(4, RW(11) >> 16);
if (RD(6) == RD(0)) { rt_break(c, 0x11fd44); goto L_0011FD48; }
L_0011FD48:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(7, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 5, RSW(7), RSW(8));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(5));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(5)); goto L_0011FD94; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + -1); if (t) goto L_0011FD90; }
SET64(2, RD(3) < RD(5));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(5)); goto L_0011FD94; }
SET32(7, RW(7) + -1);
SET32(3, RW(3) + RW(9));
L_0011FD90:;
SET32(3, RW(3) - RW(5));
L_0011FD94:;
if (RD(6) == RD(0)) { rt_break(c, 0x11fd98); goto L_0011FD9C; }
L_0011FD9C:;
div_u(c, 0, RW(3), RW(6));
SET64(4, RD(11) & 0xffff);
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(6, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 5, RSW(6), RSW(8));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(5));
{ int t = RD(2) == RD(0); SET32(2, RW(7) << 16); if (t) goto L_0011FDEC; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + -1); if (t) goto L_0011FDE8; }
SET64(2, RD(3) < RD(5));
SET32(3, RW(6) + -1);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_0011FDE8:;
SET32(2, RW(7) << 16);
L_0011FDEC:;
SET64(6, RD(2) | RD(6)); goto L_0011FFA4;
L_0011FDF8:;
{ int t = RD(2) == RD(0); SET64(2, RD(0) | 0xffff); if (t) goto L_0011FE08; }
SET64(6, RD(0) + RD(0)); goto L_0011FFA0;
L_0011FE08:;
SET64(2, RD(2) < RD(8));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff0000); if (t) goto L_0011FE28; }
SET64(2, RD(8) < (u64)(s64)256);
SET32(4, RW(0) + 8);
if (RD(2) != 0) SET64(4, RD(0)); goto L_0011FE3C;
L_0011FE28:;
SET32(3, RW(0) + 24);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + 16);
SET64(2, RD(2) < RD(8));
if (RD(2) != 0) SET64(4, RD(3));
L_0011FE3C:;
SET32(3, RW(8) >> (RW(4) & 31));
SET32(5, RW(0) + 32);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + -9448)));
SET32(2, RW(2) + RW(4));
SET32(6, RW(5) - RW(2));
{ int t = RD(6) != RD(0); SET32(7, RW(5) - RW(6)); if (t) goto L_0011FE80; }
SET64(2, RD(8) < RD(10));
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 1); if (t) goto L_0011FFA0; }
SET64(2, RD(11) < RD(9));
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_0011FFA0; }
SET32(6, RW(0) + 1); goto L_0011FFA0;
L_0011FE80:;
SET32(4, RW(8) << (RW(6) & 31));
SET32(5, RW(11) >> (RW(7) & 31));
SET32(11, RW(11) << (RW(6) & 31));
SET32(2, RW(9) >> (RW(7) & 31));
SET32(9, RW(9) << (RW(6) & 31));
SET32(3, RW(10) << (RW(6) & 31));
SET64(8, RD(4) | RD(2));
SET32(4, RW(10) >> (RW(7) & 31));
SET64(10, RD(3) | RD(5));
SET32(5, RW(8) >> 16);
div_u(c, 0, RW(4), RW(5));
SET32(4, RW(10) >> 16);
SET64(12, RD(8) & 0xffff);
if (RD(5) == RD(0)) { rt_break(c, 0x11feb8); goto L_0011FEBC; }
L_0011FEBC:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(7, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 6, RSW(7), RSW(12));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(6));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(6)); goto L_0011FF0C; }
SET32(3, RW(3) + RW(8));
SET64(2, RD(3) < RD(8));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + -1); if (t) goto L_0011FF08; }
SET64(2, RD(3) < RD(6));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(6)); goto L_0011FF0C; }
SET32(7, RW(7) + -1);
SET32(3, RW(3) + RW(8));
L_0011FF08:;
SET32(3, RW(3) - RW(6));
L_0011FF0C:;
if (RD(5) == RD(0)) { rt_break(c, 0x11ff10); goto L_0011FF14; }
L_0011FF14:;
div_u(c, 0, RW(3), RW(5));
SET64(4, RD(10) & 0xffff);
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(5, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 6, RSW(5), RSW(12));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(6));
{ int t = RD(2) == RD(0); SET32(2, RW(7) << 16); if (t) goto L_0011FF68; }
SET32(3, RW(3) + RW(8));
SET64(2, RD(3) < RD(8));
{ int t = RD(2) != RD(0); SET32(5, RW(5) + -1); if (t) goto L_0011FF64; }
SET64(2, RD(3) < RD(6));
{ int t = RD(2) == RD(0); SET32(2, RW(7) << 16); if (t) goto L_0011FF68; }
SET32(3, RW(3) + RW(8));
SET32(5, RW(5) + -1);
L_0011FF64:;
SET32(2, RW(7) << 16);
L_0011FF68:;
SET32(3, RW(3) - RW(6));
SET64(6, RD(2) | RD(5));
mul_u(c, 0, 0, RW(6), RW(9));
SET64(7, c->hi.d[0]);
SET64(4, c->lo.d[0]);
SET64(2, RD(3) < RD(7));
if (RD(2) != RD(0)) { SET32(6, RW(6) + -1); goto L_0011FFA0; }
{ int t = RD(7) != RD(3); SET64(13, RD(0) + RD(0)); if (t) goto L_0011FFA4; }
SET64(2, RD(11) < RD(4));
{ int t = RD(2) == RD(0); SET64(2, RD(6) << 32); if (t) goto L_0011FFA8; }
SET32(6, RW(6) + -1);
L_0011FFA0:;
SET64(13, RD(0) + RD(0));
L_0011FFA4:;
SET64(2, RD(6) << 32);
L_0011FFA8:;
SET32(4, RW(0) + -1);
SET64(4, RD(4) << 32);
SET64(2, RD(2) >> 32);
SET64(15, RD(15) & RD(4));
SET64(15, RD(15) | RD(2));
SET64(2, RD(13) << 32);
SET64(5, (s64)(s32)0xffff0000);
SET64(5, RD(5) >> 32);
SET64(15, RD(15) & RD(5));
{ int t = RD(24) == RD(0); SET64(3, RD(15) | RD(2)); if (t) goto L_00120014; }
SET64(2, RD(3) << 32);
SET64(2, RSD(2) >> 32);
SET64(14, RD(14) & RD(4));
SET32(2, RW(0) - RW(2));
SET64(4, RSD(3) >> 32);
SET64(2, RD(2) << 32);
SET32(4, RW(0) - RW(4));
SET64(2, RD(2) >> 32);
SET64(14, RD(14) | RD(2));
SET64(3, RD(14) << 32);
SET64(3, RSD(3) >> 32);
SET64(14, RD(14) & RD(5));
SET64(3, RD(0) < RD(3));
L_00120008:;
SET32(4, RW(4) - RW(3));
SET64(4, RD(4) << 32);
SET64(3, RD(14) | RD(4));
L_00120014:;
SET64(2, RD(3) + RD(0)); return;
if (0) { L_00120018:; SET64(2, RD(3) + RD(0)); }
}
void JP_F_0011F988(Ctx *c) { JP_B_0011F988(c, 0x11f988); }
void JP_F_00120008(Ctx *c) { JP_B_0011F988(c, 0x120008); }
void JP_F_00120018(Ctx *c) { JP_B_0011F988(c, 0x120018); }

static void JP_B_00120020(Ctx *c, u32 entry) { /* func_00120020 */
ENTER(entry);
switch (entry) { case 0x120028: goto L_00120028; case 0x120034: goto L_00120034; case 0x12004c: goto L_0012004C; case 0x12028c: goto L_0012028C; }
SET64(8, RD(4) + RD(0));
SET32(29, RW(29) + -32);
L_00120028:;
SET64(10, RSD(8) >> 32);
wr64(c, (RW(29) + 16), RD(16));
SET64(4, RD(10) << 32);
L_00120034:;
SET64(4, RSD(4) >> 32);
{ int t = RSD(4) >= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00120094; }
SET64(2, RD(8) << 32);
SET64(2, RSD(2) >> 32);
SET32(3, RW(0) + -1);
L_0012004C:;
SET64(3, RD(3) << 32);
SET32(2, RW(0) - RW(2));
SET64(6, RD(6) & RD(3));
SET64(2, RD(2) << 32);
SET32(3, RW(0) - RW(4));
SET64(2, RD(2) >> 32);
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) >> 32);
SET64(6, RD(6) | RD(2));
SET32(16, RW(0) + -1);
SET64(2, RD(6) << 32);
SET64(2, RSD(2) >> 32);
SET64(6, RD(6) & RD(4));
SET64(2, RD(0) < RD(2));
SET32(3, RW(3) - RW(2));
SET64(3, RD(3) << 32);
SET64(8, RD(6) | RD(3));
SET64(10, RSD(8) >> 32);
L_00120094:;
SET64(4, RSD(5) >> 32);
{ int t = RSD(4) >= 0; SET32(4, RW(0) - RW(4)); if (t) goto L_001200E8; }
SET64(2, RD(5) << 32);
SET64(2, RSD(2) >> 32);
SET64(5, (s64)(s32)0xffff0000);
SET64(5, RD(5) >> 32);
SET32(2, RW(0) - RW(2));
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET64(2, RD(2) << 32);
SET64(7, RD(7) & RD(3));
SET64(2, RD(2) >> 32);
SET64(7, RD(7) | RD(2));
SET64(3, RD(7) << 32);
SET64(3, RSD(3) >> 32);
SET64(7, RD(7) & RD(5));
SET64(3, RD(0) < RD(3));
SET32(4, RW(4) - RW(3));
SET64(4, RD(4) << 32);
SET64(5, RD(7) | RD(4));
L_001200E8:;
SET64(9, RSD(5) >> 32);
SET64(13, RD(8) << 32);
SET64(13, RSD(13) >> 32);
SET64(10, RD(10) << 32);
SET64(10, RSD(10) >> 32);
SET64(7, RD(5) << 32);
SET64(7, RSD(7) >> 32);
{ int t = RD(9) != RD(0); SET64(25, RD(29) + RD(0)); if (t) goto L_001203C8; }
SET64(2, RD(10) < RD(7));
{ int t = RD(2) == RD(0); SET64(2, RD(0) | 0xffff); if (t) goto L_00120190; }
SET64(2, RD(2) < RD(7));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff0000); if (t) goto L_00120138; }
SET64(2, RD(7) < (u64)(s64)256);
SET32(4, RW(0) + 8);
if (RD(2) != 0) SET64(4, RD(0)); goto L_0012014C;
L_00120138:;
SET32(3, RW(0) + 24);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + 16);
SET64(2, RD(2) < RD(7));
if (RD(2) != 0) SET64(4, RD(3));
L_0012014C:;
SET32(3, RW(7) >> (RW(4) & 31));
SET32(5, RW(0) + 32);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + -9192)));
SET32(2, RW(2) + RW(4));
SET32(12, RW(5) - RW(2));
{ int t = RD(12) == RD(0); SET32(2, RW(5) - RW(12)); if (t) goto L_00120184; }
SET32(3, RW(10) << (RW(12) & 31));
SET32(2, RW(13) >> (RW(2) & 31));
SET32(13, RW(13) << (RW(12) & 31));
SET64(10, RD(3) | RD(2));
SET32(7, RW(7) << (RW(12) & 31));
L_00120184:;
SET32(6, RW(7) >> 16);
SET64(9, RD(7) & 0xffff); goto L_001202F0;
L_00120190:;
{ int t = RD(7) != RD(0); SET64(2, RD(2) < RD(7)); if (t) goto L_001201B8; }
SET32(2, RW(0) + 1);
if (RD(7) == RD(0)) { rt_break(c, 0x1201a0); goto L_001201A4; }
L_001201A4:;
div_u(c, 0, RW(2), RW(9));
SET64(2, c->lo.d[0]);
SET64(7, RD(2) + RD(0));
SET64(2, RD(0) | 0xffff);
SET64(2, RD(2) < RD(7));
L_001201B8:;
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff0000); if (t) goto L_001201D0; }
SET64(2, RD(7) < (u64)(s64)256);
SET32(4, RW(0) + 8);
if (RD(2) != 0) SET64(4, RD(0)); goto L_001201E4;
L_001201D0:;
SET32(3, RW(0) + 24);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + 16);
SET64(2, RD(2) < RD(7));
if (RD(2) != 0) SET64(4, RD(3));
L_001201E4:;
SET32(3, RW(7) >> (RW(4) & 31));
SET32(5, RW(0) + 32);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + -9192)));
SET32(2, RW(2) + RW(4));
SET32(12, RW(5) - RW(2));
{ int t = RD(12) != RD(0); SET32(15, RW(5) - RW(12)); if (t) goto L_00120218; }
SET32(10, RW(10) - RW(7));
SET32(5, RW(7) >> 16);
SET64(14, RD(7) & 0xffff); goto L_001202E8;
L_00120218:;
SET32(3, RW(10) << (RW(12) & 31));
SET32(2, RW(13) >> (RW(15) & 31));
SET32(13, RW(13) << (RW(12) & 31));
SET32(4, RW(10) >> (RW(15) & 31));
SET64(10, RD(3) | RD(2));
SET32(7, RW(7) << (RW(12) & 31));
SET32(5, RW(7) >> 16);
div_u(c, 0, RW(4), RW(5));
SET32(4, RW(10) >> 16);
SET64(14, RD(7) & 0xffff);
SET64(9, RD(5) + RD(0));
if (RD(9) == RD(0)) { rt_break(c, 0x120248); goto L_0012024C; }
L_0012024C:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
mul_s(c, 0, 8, RSW(2), RSW(14));
SET32(3, RW(3) << 16);
SET64(6, RD(3) | RD(4));
SET64(2, RD(6) < RD(8));
{ int t = RD(2) == RD(0); SET64(15, RD(14) + RD(0)); if (t) goto L_00120290; }
SET32(6, RW(6) + RW(7));
SET64(2, RD(6) < RD(7));
if (RD(2) != RD(0)) { SET32(6, RW(6) - RW(8)); goto L_00120294; }
SET64(2, RD(6) < RD(8));
SET32(3, RW(6) + RW(7));
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_0012028C:;
L_00120290:;
SET32(6, RW(6) - RW(8));
L_00120294:;
SET64(4, RD(10) & 0xffff);
div_u(c, 0, RW(6), RW(9));
if (RD(9) == RD(0)) { rt_break(c, 0x1202a0); goto L_001202A4; }
L_001202A4:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
mul_s(c, 0, 8, RSW(2), RSW(15));
SET32(3, RW(3) << 16);
SET64(4, RD(3) | RD(4));
SET64(2, RD(4) < RD(8));
{ int t = RD(2) == RD(0); SET32(10, RW(4) - RW(8)); if (t) goto L_001202E8; }
SET32(4, RW(4) + RW(7));
SET64(2, RD(4) < RD(7));
{ int t = RD(2) != RD(0); SET32(10, RW(4) - RW(8)); if (t) goto L_001202E8; }
SET64(2, RD(4) < RD(8));
SET32(3, RW(4) + RW(7));
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(4, RD(3));
SET32(10, RW(4) - RW(8));
L_001202E8:;
SET64(6, RD(5) + RD(0));
SET64(9, RD(14) + RD(0));
L_001202F0:;
div_u(c, 0, RW(10), RW(6));
SET32(4, RW(13) >> 16);
if (RD(6) == RD(0)) { rt_break(c, 0x1202fc); goto L_00120300; }
L_00120300:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
mul_s(c, 0, 8, RSW(2), RSW(9));
SET32(3, RW(3) << 16);
SET64(5, RD(3) | RD(4));
SET64(2, RD(5) < RD(8));
if (RD(2) == RD(0)) { SET32(5, RW(5) - RW(8)); goto L_00120344; }
SET32(5, RW(5) + RW(7));
SET64(2, RD(5) < RD(7));
if (RD(2) != RD(0)) { SET32(5, RW(5) - RW(8)); goto L_00120344; }
SET64(2, RD(5) < RD(8));
SET32(3, RW(5) + RW(7));
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(5, RD(3));
SET32(5, RW(5) - RW(8));
L_00120344:;
SET64(4, RD(13) & 0xffff);
div_u(c, 0, RW(5), RW(6));
if (RD(6) == RD(0)) { rt_break(c, 0x120350); goto L_00120354; }
L_00120354:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
mul_s(c, 0, 8, RSW(2), RSW(9));
SET32(3, RW(3) << 16);
SET64(4, RD(3) | RD(4));
SET64(2, RD(4) < RD(8));
{ int t = RD(2) == RD(0);  if (t) goto L_00120390; }
SET32(4, RW(4) + RW(7));
SET64(2, RD(4) < RD(7));
{ int t = RD(2) != RD(0); SET64(2, RD(4) < RD(8)); if (t) goto L_00120390; }
SET32(3, RW(4) + RW(7));
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(4, RD(3));
L_00120390:;
{ int t = RD(25) == RD(0); SET32(13, RW(4) - RW(8)); if (t) goto L_00120644; }
SET32(2, RW(13) >> (RW(12) & 31));
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET64(2, RD(2) << 32);
SET64(11, RD(11) & RD(3));
SET64(2, RD(2) >> 32);
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET64(11, RD(11) | RD(2));
SET64(11, RD(11) & RD(3)); goto L_00120640;
L_001203C8:;
SET64(2, RD(10) < RD(9));
{ int t = RD(2) == RD(0); SET64(2, RD(0) | 0xffff); if (t) goto L_00120408; }
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET64(2, RD(13) << 32);
SET64(2, RD(2) >> 32);
SET64(11, RD(11) & RD(3));
SET64(11, RD(11) | RD(2));
SET64(2, RD(10) << 32);
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET64(11, RD(11) & RD(3));
SET64(11, RD(11) | RD(2));
wr64(c, (RW(29) + 0), RD(11)); goto L_00120644;
L_00120408:;
SET64(2, RD(2) < RD(9));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff0000); if (t) goto L_00120428; }
SET64(2, RD(9) < (u64)(s64)256);
SET32(4, RW(0) + 8);
if (RD(2) != 0) SET64(4, RD(0)); goto L_0012043C;
L_00120428:;
SET32(3, RW(0) + 24);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + 16);
SET64(2, RD(2) < RD(9));
if (RD(2) != 0) SET64(4, RD(3));
L_0012043C:;
SET32(3, RW(9) >> (RW(4) & 31));
SET32(5, RW(0) + 32);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + -9192)));
SET32(2, RW(2) + RW(4));
SET32(12, RW(5) - RW(2));
{ int t = RD(12) != RD(0); SET32(15, RW(5) - RW(12)); if (t) goto L_001204C0; }
SET64(2, RD(9) < RD(10));
{ int t = RD(2) != RD(0); SET32(2, RW(13) - RW(7)); if (t) goto L_00120478; }
SET64(2, RD(13) < RD(7));
{ int t = RD(2) != RD(0); SET32(2, RW(13) - RW(7)); if (t) goto L_00120488; }
L_00120478:;
SET32(4, RW(10) - RW(9));
SET64(3, RD(13) < RD(2));
SET64(13, RD(2) + RD(0));
SET32(10, RW(4) - RW(3));
L_00120488:;
{ int t = RD(25) == RD(0); SET64(2, RD(13) << 32); if (t) goto L_00120644; }
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET64(2, RD(2) >> 32);
SET64(11, RD(11) & RD(3));
SET64(11, RD(11) | RD(2));
SET64(2, RD(10) << 32);
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET64(11, RD(11) & RD(3));
SET64(11, RD(11) | RD(2)); goto L_00120640;
L_001204C0:;
SET32(5, RW(10) << (RW(12) & 31));
SET32(4, RW(9) << (RW(12) & 31));
SET32(2, RW(7) >> (RW(15) & 31));
SET32(3, RW(13) >> (RW(15) & 31));
SET32(13, RW(13) << (RW(12) & 31));
SET64(9, RD(4) | RD(2));
SET32(4, RW(10) >> (RW(15) & 31));
SET32(7, RW(7) << (RW(12) & 31));
SET64(10, RD(5) | RD(3));
SET32(6, RW(9) >> 16);
div_u(c, 0, RW(4), RW(6));
SET32(4, RW(10) >> 16);
SET64(5, RD(9) & 0xffff);
if (RD(6) == RD(0)) { rt_break(c, 0x1204f8); goto L_001204FC; }
L_001204FC:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(14, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 8, RSW(14), RSW(5));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(8));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(8)); goto L_0012054C; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(14, RW(14) + -1); if (t) goto L_00120548; }
SET64(2, RD(3) < RD(8));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(8)); goto L_0012054C; }
SET32(14, RW(14) + -1);
SET32(3, RW(3) + RW(9));
L_00120548:;
SET32(3, RW(3) - RW(8));
L_0012054C:;
if (RD(6) == RD(0)) { rt_break(c, 0x120550); goto L_00120554; }
L_00120554:;
div_u(c, 0, RW(3), RW(6));
SET64(4, RD(10) & 0xffff);
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(6, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 8, RSW(6), RSW(5));
SET64(5, RD(3) | RD(4));
SET64(2, RD(5) < RD(8));
if (RD(2) == RD(0)) { SET32(5, RW(5) - RW(8)); goto L_001205A8; }
SET32(5, RW(5) + RW(9));
SET64(2, RD(5) < RD(9));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + -1); if (t) goto L_001205A4; }
SET64(2, RD(5) < RD(8));
if (RD(2) == RD(0)) { SET32(5, RW(5) - RW(8)); goto L_001205A8; }
SET32(6, RW(6) + -1);
SET32(5, RW(5) + RW(9));
L_001205A4:;
SET32(5, RW(5) - RW(8));
L_001205A8:;
SET32(2, RW(14) << 16);
SET64(2, RD(2) | RD(6));
SET64(10, RD(5) + RD(0));
mul_u(c, 0, 0, RW(2), RW(7));
SET64(6, c->hi.d[0]);
SET64(8, c->lo.d[0]);
SET64(3, RD(10) < RD(6));
{ int t = RD(3) != RD(0); SET32(2, RW(8) - RW(7)); if (t) goto L_001205E0; }
{ int t = RD(6) != RD(10); SET64(2, RD(13) < RD(8)); if (t) goto L_001205F0; }
{ int t = RD(2) == RD(0); SET32(2, RW(8) - RW(7)); if (t) goto L_001205F0; }
L_001205E0:;
SET32(4, RW(6) - RW(9));
SET64(3, RD(8) < RD(2));
SET64(8, RD(2) + RD(0));
SET32(6, RW(4) - RW(3));
L_001205F0:;
{ int t = RD(25) == RD(0); SET32(4, RW(13) - RW(8)); if (t) goto L_00120644; }
SET32(5, RW(5) - RW(6));
SET64(3, RD(13) < RD(4));
SET32(10, RW(5) - RW(3));
SET32(2, RW(10) << (RW(15) & 31));
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET32(4, RW(4) >> (RW(12) & 31));
SET64(11, RD(11) & RD(3));
SET64(2, RD(2) | RD(4));
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) >> 32);
SET64(2, RD(2) << 32);
SET32(3, RW(10) >> (RW(12) & 31));
SET64(2, RD(2) >> 32);
SET64(3, RD(3) << 32);
SET64(11, RD(11) | RD(2));
SET64(11, RD(11) & RD(4));
SET64(11, RD(11) | RD(3));
L_00120640:;
wr64(c, (RW(25) + 0), RD(11));
L_00120644:;
{ int t = RD(16) == RD(0); SET64(3, rd64(c, (RW(29) + 0))); if (t) goto L_001206A0; }
SET32(4, RW(0) + -1);
SET64(4, RD(4) << 32);
SET64(24, RD(24) & RD(4));
SET64(2, RD(3) << 32);
SET64(2, RSD(2) >> 32);
SET64(3, RSD(3) >> 32);
SET32(2, RW(0) - RW(2));
SET32(3, RW(0) - RW(3));
SET64(2, RD(2) << 32);
SET64(2, RD(2) >> 32);
SET64(24, RD(24) | RD(2));
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) >> 32);
SET64(4, RD(24) << 32);
SET64(4, RSD(4) >> 32);
SET64(24, RD(24) & RD(2));
SET64(4, RD(0) < RD(4));
SET32(3, RW(3) - RW(4));
SET64(3, RD(3) << 32);
SET64(24, RD(24) | RD(3));
wr64(c, (RW(29) + 0), RD(24));
L_001206A0:;
SET64(2, rd64(c, (RW(29) + 0)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}
void JP_F_00120020(Ctx *c) { JP_B_00120020(c, 0x120020); }
void JP_F_00120028(Ctx *c) { JP_B_00120020(c, 0x120028); }
void JP_F_00120034(Ctx *c) { JP_B_00120020(c, 0x120034); }
void JP_F_0012004C(Ctx *c) { JP_B_00120020(c, 0x12004c); }
void JP_F_0012028C(Ctx *c) { JP_B_00120020(c, 0x12028c); }

void JP_F_001206B0(Ctx *c) { /* func_001206B0 */
ENTER(0x1206b0);
SET64(8, RSD(5) >> 32);
SET64(10, RSD(4) >> 32);
SET64(9, RD(5) << 32);
SET64(9, RSD(9) >> 32);
SET64(11, RD(4) << 32);
SET64(11, RSD(11) >> 32);
{ int t = RD(8) != RD(0); SET64(2, RD(10) < RD(8)); if (t) goto L_00120A50; }
SET64(2, RD(10) < RD(9));
{ int t = RD(2) == RD(0); SET64(2, RD(0) | 0xffff); if (t) goto L_00120810; }
SET64(2, RD(2) < RD(9));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff0000); if (t) goto L_001206F8; }
SET64(2, RD(9) < (u64)(s64)256);
SET32(4, RW(0) + 8);
if (RD(2) != 0) SET64(4, RD(0)); goto L_0012070C;
L_001206F8:;
SET32(3, RW(0) + 24);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + 16);
SET64(2, RD(2) < RD(9));
if (RD(2) != 0) SET64(4, RD(3));
L_0012070C:;
SET32(3, RW(9) >> (RW(4) & 31));
SET32(5, RW(0) + 32);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + -8936)));
SET32(2, RW(2) + RW(4));
SET32(6, RW(5) - RW(2));
{ int t = RD(6) == RD(0); SET32(2, RW(5) - RW(6)); if (t) goto L_00120744; }
SET32(3, RW(10) << (RW(6) & 31));
SET32(2, RW(11) >> (RW(2) & 31));
SET32(11, RW(11) << (RW(6) & 31));
SET64(10, RD(3) | RD(2));
SET32(9, RW(9) << (RW(6) & 31));
L_00120744:;
SET32(6, RW(9) >> 16);
SET64(8, RD(9) & 0xffff);
div_u(c, 0, RW(10), RW(6));
SET32(4, RW(11) >> 16);
if (RD(6) == RD(0)) { rt_break(c, 0x120758); goto L_0012075C; }
L_0012075C:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(7, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 5, RSW(7), RSW(8));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(5));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(5)); goto L_001207AC; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + -1); if (t) goto L_001207A8; }
SET64(2, RD(3) < RD(5));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(5)); goto L_001207AC; }
SET32(7, RW(7) + -1);
SET32(3, RW(3) + RW(9));
L_001207A8:;
SET32(3, RW(3) - RW(5));
L_001207AC:;
if (RD(6) == RD(0)) { rt_break(c, 0x1207b0); goto L_001207B4; }
L_001207B4:;
div_u(c, 0, RW(3), RW(6));
SET64(4, RD(11) & 0xffff);
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(6, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 5, RSW(6), RSW(8));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(5));
{ int t = RD(2) == RD(0); SET32(2, RW(7) << 16); if (t) goto L_00120804; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + -1); if (t) goto L_00120800; }
SET64(2, RD(3) < RD(5));
SET32(3, RW(6) + -1);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_00120800:;
SET32(2, RW(7) << 16);
L_00120804:;
SET64(6, RD(2) | RD(6)); goto L_00120BF8;
L_00120810:;
{ int t = RD(9) != RD(0); SET64(2, RD(2) < RD(9)); if (t) goto L_00120838; }
SET32(2, RW(0) + 1);
if (RD(9) == RD(0)) { rt_break(c, 0x120820); goto L_00120824; }
L_00120824:;
div_u(c, 0, RW(2), RW(8));
SET64(2, c->lo.d[0]);
SET64(9, RD(2) + RD(0));
SET64(2, RD(0) | 0xffff);
SET64(2, RD(2) < RD(9));
L_00120838:;
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff0000); if (t) goto L_00120850; }
SET64(2, RD(9) < (u64)(s64)256);
SET32(4, RW(0) + 8);
if (RD(2) != 0) SET64(4, RD(0)); goto L_00120864;
L_00120850:;
SET32(3, RW(0) + 24);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + 16);
SET64(2, RD(2) < RD(9));
if (RD(2) != 0) SET64(4, RD(3));
L_00120864:;
SET32(3, RW(9) >> (RW(4) & 31));
SET32(5, RW(0) + 32);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + -8936)));
SET32(2, RW(2) + RW(4));
SET32(6, RW(5) - RW(2));
{ int t = RD(6) != RD(0); SET32(7, RW(5) - RW(6)); if (t) goto L_001208A0; }
SET32(10, RW(10) - RW(9));
SET32(13, RW(0) + 1);
SET32(8, RW(9) >> 16);
SET64(12, RD(9) & 0xffff); goto L_00120988;
L_001208A0:;
SET32(3, RW(10) << (RW(6) & 31));
SET32(2, RW(11) >> (RW(7) & 31));
SET32(11, RW(11) << (RW(6) & 31));
SET32(4, RW(10) >> (RW(7) & 31));
SET64(10, RD(3) | RD(2));
SET32(9, RW(9) << (RW(6) & 31));
SET32(8, RW(9) >> 16);
div_u(c, 0, RW(4), RW(8));
SET32(4, RW(10) >> 16);
SET64(12, RD(9) & 0xffff);
SET64(6, RD(8) + RD(0));
if (RD(6) == RD(0)) { rt_break(c, 0x1208d0); goto L_001208D4; }
L_001208D4:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(7, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 5, RSW(7), RSW(12));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(5));
{ int t = RD(2) == RD(0); SET64(13, RD(12) + RD(0)); if (t) goto L_00120920; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + -1); if (t) goto L_00120920; }
SET64(2, RD(3) < RD(5));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(5)); goto L_00120924; }
SET32(7, RW(7) + -1);
SET32(3, RW(3) + RW(9));
L_00120920:;
SET32(3, RW(3) - RW(5));
L_00120924:;
if (RD(6) == RD(0)) { rt_break(c, 0x120928); goto L_0012092C; }
L_0012092C:;
div_u(c, 0, RW(3), RW(6));
SET64(4, RD(10) & 0xffff);
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(6, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 5, RSW(6), RSW(13));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(5));
{ int t = RD(2) == RD(0); SET32(2, RW(7) << 16); if (t) goto L_00120980; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + -1); if (t) goto L_0012097C; }
SET64(2, RD(3) < RD(5));
{ int t = RD(2) == RD(0); SET32(2, RW(7) << 16); if (t) goto L_00120980; }
SET32(6, RW(6) + -1);
SET32(3, RW(3) + RW(9));
L_0012097C:;
SET32(2, RW(7) << 16);
L_00120980:;
SET32(10, RW(3) - RW(5));
SET64(13, RD(2) | RD(6));
L_00120988:;
SET64(6, RD(8) + RD(0));
SET64(8, RD(12) + RD(0));
div_u(c, 0, RW(10), RW(6));
SET32(4, RW(11) >> 16);
if (RD(6) == RD(0)) { rt_break(c, 0x12099c); goto L_001209A0; }
L_001209A0:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(7, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 5, RSW(7), RSW(8));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(5));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(5)); goto L_001209EC; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + -1); if (t) goto L_001209E8; }
SET64(2, RD(3) < RD(5));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(5)); goto L_001209EC; }
SET32(7, RW(7) + -1);
SET32(3, RW(3) + RW(9));
L_001209E8:;
SET32(3, RW(3) - RW(5));
L_001209EC:;
if (RD(6) == RD(0)) { rt_break(c, 0x1209f0); goto L_001209F4; }
L_001209F4:;
div_u(c, 0, RW(3), RW(6));
SET64(4, RD(11) & 0xffff);
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(6, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 5, RSW(6), RSW(8));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(5));
{ int t = RD(2) == RD(0); SET32(2, RW(7) << 16); if (t) goto L_00120A44; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + -1); if (t) goto L_00120A40; }
SET64(2, RD(3) < RD(5));
SET32(3, RW(6) + -1);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_00120A40:;
SET32(2, RW(7) << 16);
L_00120A44:;
SET64(6, RD(2) | RD(6)); goto L_00120BFC;
L_00120A50:;
if (RD(2) == RD(0)) { SET64(2, RD(0) | 0xffff); goto L_00120A60; }
SET64(6, RD(0) + RD(0)); goto L_00120BF8;
L_00120A60:;
SET64(2, RD(2) < RD(8));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff0000); if (t) goto L_00120A80; }
SET64(2, RD(8) < (u64)(s64)256);
SET32(4, RW(0) + 8);
if (RD(2) != 0) SET64(4, RD(0)); goto L_00120A94;
L_00120A80:;
SET32(3, RW(0) + 24);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + 16);
SET64(2, RD(2) < RD(8));
if (RD(2) != 0) SET64(4, RD(3));
L_00120A94:;
SET32(3, RW(8) >> (RW(4) & 31));
SET32(5, RW(0) + 32);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + -8936)));
SET32(2, RW(2) + RW(4));
SET32(6, RW(5) - RW(2));
{ int t = RD(6) != RD(0); SET32(7, RW(5) - RW(6)); if (t) goto L_00120AD8; }
SET64(2, RD(8) < RD(10));
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 1); if (t) goto L_00120BF8; }
SET64(2, RD(11) < RD(9));
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_00120BF8; }
SET32(6, RW(0) + 1); goto L_00120BF8;
L_00120AD8:;
SET32(4, RW(8) << (RW(6) & 31));
SET32(5, RW(11) >> (RW(7) & 31));
SET32(11, RW(11) << (RW(6) & 31));
SET32(2, RW(9) >> (RW(7) & 31));
SET32(9, RW(9) << (RW(6) & 31));
SET32(3, RW(10) << (RW(6) & 31));
SET64(8, RD(4) | RD(2));
SET32(4, RW(10) >> (RW(7) & 31));
SET64(10, RD(3) | RD(5));
SET32(5, RW(8) >> 16);
div_u(c, 0, RW(4), RW(5));
SET32(4, RW(10) >> 16);
SET64(12, RD(8) & 0xffff);
if (RD(5) == RD(0)) { rt_break(c, 0x120b10); goto L_00120B14; }
L_00120B14:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(7, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 6, RSW(7), RSW(12));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(6));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(6)); goto L_00120B64; }
SET32(3, RW(3) + RW(8));
SET64(2, RD(3) < RD(8));
{ int t = RD(2) != RD(0); SET32(7, RW(7) + -1); if (t) goto L_00120B60; }
SET64(2, RD(3) < RD(6));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(6)); goto L_00120B64; }
SET32(7, RW(7) + -1);
SET32(3, RW(3) + RW(8));
L_00120B60:;
SET32(3, RW(3) - RW(6));
L_00120B64:;
if (RD(5) == RD(0)) { rt_break(c, 0x120b68); goto L_00120B6C; }
L_00120B6C:;
div_u(c, 0, RW(3), RW(5));
SET64(4, RD(10) & 0xffff);
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(5, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 6, RSW(5), RSW(12));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(6));
{ int t = RD(2) == RD(0); SET32(2, RW(7) << 16); if (t) goto L_00120BC0; }
SET32(3, RW(3) + RW(8));
SET64(2, RD(3) < RD(8));
{ int t = RD(2) != RD(0); SET32(5, RW(5) + -1); if (t) goto L_00120BBC; }
SET64(2, RD(3) < RD(6));
{ int t = RD(2) == RD(0); SET32(2, RW(7) << 16); if (t) goto L_00120BC0; }
SET32(3, RW(3) + RW(8));
SET32(5, RW(5) + -1);
L_00120BBC:;
SET32(2, RW(7) << 16);
L_00120BC0:;
SET32(3, RW(3) - RW(6));
SET64(6, RD(2) | RD(5));
mul_u(c, 0, 0, RW(6), RW(9));
SET64(7, c->hi.d[0]);
SET64(4, c->lo.d[0]);
SET64(2, RD(3) < RD(7));
if (RD(2) != RD(0)) { SET32(6, RW(6) + -1); goto L_00120BF8; }
{ int t = RD(7) != RD(3); SET64(13, RD(0) + RD(0)); if (t) goto L_00120BFC; }
SET64(2, RD(11) < RD(4));
{ int t = RD(2) == RD(0);  if (t) goto L_00120BFC; }
SET32(6, RW(6) + -1);
L_00120BF8:;
SET64(13, RD(0) + RD(0));
L_00120BFC:;
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET64(2, RD(6) << 32);
SET64(2, RD(2) >> 32);
SET64(14, RD(14) & RD(3));
SET64(14, RD(14) | RD(2));
SET64(2, RD(13) << 32);
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET64(14, RD(14) & RD(3));
SET64(2, RD(14) | RD(2)); return;
}

void JP_F_00120C30(Ctx *c) { /* func_00120C30 */
ENTER(0x120c30);
SET32(29, RW(29) + -16);
SET64(9, RSD(5) >> 32);
SET64(10, RSD(4) >> 32);
SET64(7, RD(5) << 32);
SET64(7, RSD(7) >> 32);
SET64(13, RD(4) << 32);
SET64(13, RSD(13) >> 32);
{ int t = RD(9) != RD(0); SET64(24, RD(29) + RD(0)); if (t) goto L_00120F10; }
SET64(2, RD(10) < RD(7));
{ int t = RD(2) == RD(0); SET64(2, RD(0) | 0xffff); if (t) goto L_00120CD8; }
SET64(2, RD(2) < RD(7));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff0000); if (t) goto L_00120C80; }
SET64(2, RD(7) < (u64)(s64)256);
SET32(4, RW(0) + 8);
if (RD(2) != 0) SET64(4, RD(0)); goto L_00120C94;
L_00120C80:;
SET32(3, RW(0) + 24);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + 16);
SET64(2, RD(2) < RD(7));
if (RD(2) != 0) SET64(4, RD(3));
L_00120C94:;
SET32(3, RW(7) >> (RW(4) & 31));
SET32(5, RW(0) + 32);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + -8680)));
SET32(2, RW(2) + RW(4));
SET32(12, RW(5) - RW(2));
{ int t = RD(12) == RD(0); SET32(2, RW(5) - RW(12)); if (t) goto L_00120CCC; }
SET32(3, RW(10) << (RW(12) & 31));
SET32(2, RW(13) >> (RW(2) & 31));
SET32(13, RW(13) << (RW(12) & 31));
SET64(10, RD(3) | RD(2));
SET32(7, RW(7) << (RW(12) & 31));
L_00120CCC:;
SET32(6, RW(7) >> 16);
SET64(9, RD(7) & 0xffff); goto L_00120E38;
L_00120CD8:;
{ int t = RD(7) != RD(0); SET64(2, RD(2) < RD(7)); if (t) goto L_00120D00; }
SET32(2, RW(0) + 1);
if (RD(7) == RD(0)) { rt_break(c, 0x120ce8); goto L_00120CEC; }
L_00120CEC:;
div_u(c, 0, RW(2), RW(9));
SET64(2, c->lo.d[0]);
SET64(7, RD(2) + RD(0));
SET64(2, RD(0) | 0xffff);
SET64(2, RD(2) < RD(7));
L_00120D00:;
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff0000); if (t) goto L_00120D18; }
SET64(2, RD(7) < (u64)(s64)256);
SET32(4, RW(0) + 8);
if (RD(2) != 0) SET64(4, RD(0)); goto L_00120D2C;
L_00120D18:;
SET32(3, RW(0) + 24);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + 16);
SET64(2, RD(2) < RD(7));
if (RD(2) != 0) SET64(4, RD(3));
L_00120D2C:;
SET32(3, RW(7) >> (RW(4) & 31));
SET32(5, RW(0) + 32);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + -8680)));
SET32(2, RW(2) + RW(4));
SET32(12, RW(5) - RW(2));
{ int t = RD(12) != RD(0); SET32(15, RW(5) - RW(12)); if (t) goto L_00120D60; }
SET32(10, RW(10) - RW(7));
SET32(5, RW(7) >> 16);
SET64(14, RD(7) & 0xffff); goto L_00120E30;
L_00120D60:;
SET32(3, RW(10) << (RW(12) & 31));
SET32(2, RW(13) >> (RW(15) & 31));
SET32(13, RW(13) << (RW(12) & 31));
SET32(4, RW(10) >> (RW(15) & 31));
SET64(10, RD(3) | RD(2));
SET32(7, RW(7) << (RW(12) & 31));
SET32(5, RW(7) >> 16);
div_u(c, 0, RW(4), RW(5));
SET32(4, RW(10) >> 16);
SET64(14, RD(7) & 0xffff);
SET64(9, RD(5) + RD(0));
if (RD(9) == RD(0)) { rt_break(c, 0x120d90); goto L_00120D94; }
L_00120D94:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
mul_s(c, 0, 8, RSW(2), RSW(14));
SET32(3, RW(3) << 16);
SET64(6, RD(3) | RD(4));
SET64(2, RD(6) < RD(8));
{ int t = RD(2) == RD(0); SET64(15, RD(14) + RD(0)); if (t) goto L_00120DD8; }
SET32(6, RW(6) + RW(7));
SET64(2, RD(6) < RD(7));
if (RD(2) != RD(0)) { SET32(6, RW(6) - RW(8)); goto L_00120DDC; }
SET64(2, RD(6) < RD(8));
SET32(3, RW(6) + RW(7));
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_00120DD8:;
SET32(6, RW(6) - RW(8));
L_00120DDC:;
SET64(4, RD(10) & 0xffff);
div_u(c, 0, RW(6), RW(9));
if (RD(9) == RD(0)) { rt_break(c, 0x120de8); goto L_00120DEC; }
L_00120DEC:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
mul_s(c, 0, 8, RSW(2), RSW(15));
SET32(3, RW(3) << 16);
SET64(4, RD(3) | RD(4));
SET64(2, RD(4) < RD(8));
{ int t = RD(2) == RD(0); SET32(10, RW(4) - RW(8)); if (t) goto L_00120E30; }
SET32(4, RW(4) + RW(7));
SET64(2, RD(4) < RD(7));
{ int t = RD(2) != RD(0); SET32(10, RW(4) - RW(8)); if (t) goto L_00120E30; }
SET64(2, RD(4) < RD(8));
SET32(3, RW(4) + RW(7));
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(4, RD(3));
SET32(10, RW(4) - RW(8));
L_00120E30:;
SET64(6, RD(5) + RD(0));
SET64(9, RD(14) + RD(0));
L_00120E38:;
div_u(c, 0, RW(10), RW(6));
SET32(4, RW(13) >> 16);
if (RD(6) == RD(0)) { rt_break(c, 0x120e44); goto L_00120E48; }
L_00120E48:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
mul_s(c, 0, 8, RSW(2), RSW(9));
SET32(3, RW(3) << 16);
SET64(5, RD(3) | RD(4));
SET64(2, RD(5) < RD(8));
if (RD(2) == RD(0)) { SET32(5, RW(5) - RW(8)); goto L_00120E8C; }
SET32(5, RW(5) + RW(7));
SET64(2, RD(5) < RD(7));
if (RD(2) != RD(0)) { SET32(5, RW(5) - RW(8)); goto L_00120E8C; }
SET64(2, RD(5) < RD(8));
SET32(3, RW(5) + RW(7));
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(5, RD(3));
SET32(5, RW(5) - RW(8));
L_00120E8C:;
SET64(4, RD(13) & 0xffff);
div_u(c, 0, RW(5), RW(6));
if (RD(6) == RD(0)) { rt_break(c, 0x120e98); goto L_00120E9C; }
L_00120E9C:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
mul_s(c, 0, 8, RSW(2), RSW(9));
SET32(3, RW(3) << 16);
SET64(4, RD(3) | RD(4));
SET64(2, RD(4) < RD(8));
{ int t = RD(2) == RD(0);  if (t) goto L_00120ED8; }
SET32(4, RW(4) + RW(7));
SET64(2, RD(4) < RD(7));
{ int t = RD(2) != RD(0); SET64(2, RD(4) < RD(8)); if (t) goto L_00120ED8; }
SET32(3, RW(4) + RW(7));
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(4, RD(3));
L_00120ED8:;
{ int t = RD(24) == RD(0); SET32(13, RW(4) - RW(8)); if (t) goto L_0012118C; }
SET32(2, RW(13) >> (RW(12) & 31));
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET64(2, RD(2) << 32);
SET64(11, RD(11) & RD(3));
SET64(2, RD(2) >> 32);
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET64(11, RD(11) | RD(2));
SET64(11, RD(11) & RD(3)); goto L_00121188;
L_00120F10:;
SET64(2, RD(10) < RD(9));
{ int t = RD(2) == RD(0); SET64(2, RD(0) | 0xffff); if (t) goto L_00120F50; }
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET64(2, RD(13) << 32);
SET64(2, RD(2) >> 32);
SET64(11, RD(11) & RD(3));
SET64(11, RD(11) | RD(2));
SET64(2, RD(10) << 32);
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET64(11, RD(11) & RD(3));
SET64(11, RD(11) | RD(2));
wr64(c, (RW(29) + 0), RD(11)); goto L_0012118C;
L_00120F50:;
SET64(2, RD(2) < RD(9));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0xff0000); if (t) goto L_00120F70; }
SET64(2, RD(9) < (u64)(s64)256);
SET32(4, RW(0) + 8);
if (RD(2) != 0) SET64(4, RD(0)); goto L_00120F84;
L_00120F70:;
SET32(3, RW(0) + 24);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + 16);
SET64(2, RD(2) < RD(9));
if (RD(2) != 0) SET64(4, RD(3));
L_00120F84:;
SET32(3, RW(9) >> (RW(4) & 31));
SET32(5, RW(0) + 32);
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + -8680)));
SET32(2, RW(2) + RW(4));
SET32(12, RW(5) - RW(2));
{ int t = RD(12) != RD(0); SET32(15, RW(5) - RW(12)); if (t) goto L_00121008; }
SET64(2, RD(9) < RD(10));
{ int t = RD(2) != RD(0); SET32(2, RW(13) - RW(7)); if (t) goto L_00120FC0; }
SET64(2, RD(13) < RD(7));
{ int t = RD(2) != RD(0); SET32(2, RW(13) - RW(7)); if (t) goto L_00120FD0; }
L_00120FC0:;
SET32(4, RW(10) - RW(9));
SET64(3, RD(13) < RD(2));
SET64(13, RD(2) + RD(0));
SET32(10, RW(4) - RW(3));
L_00120FD0:;
{ int t = RD(24) == RD(0); SET64(2, RD(13) << 32); if (t) goto L_0012118C; }
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET64(2, RD(2) >> 32);
SET64(11, RD(11) & RD(3));
SET64(11, RD(11) | RD(2));
SET64(2, RD(10) << 32);
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET64(11, RD(11) & RD(3));
SET64(11, RD(11) | RD(2)); goto L_00121188;
L_00121008:;
SET32(5, RW(10) << (RW(12) & 31));
SET32(4, RW(9) << (RW(12) & 31));
SET32(2, RW(7) >> (RW(15) & 31));
SET32(3, RW(13) >> (RW(15) & 31));
SET32(13, RW(13) << (RW(12) & 31));
SET64(9, RD(4) | RD(2));
SET32(4, RW(10) >> (RW(15) & 31));
SET32(7, RW(7) << (RW(12) & 31));
SET64(10, RD(5) | RD(3));
SET32(6, RW(9) >> 16);
div_u(c, 0, RW(4), RW(6));
SET32(4, RW(10) >> 16);
SET64(5, RD(9) & 0xffff);
if (RD(6) == RD(0)) { rt_break(c, 0x121040); goto L_00121044; }
L_00121044:;
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(14, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 8, RSW(14), RSW(5));
SET64(3, RD(3) | RD(4));
SET64(2, RD(3) < RD(8));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(8)); goto L_00121094; }
SET32(3, RW(3) + RW(9));
SET64(2, RD(3) < RD(9));
{ int t = RD(2) != RD(0); SET32(14, RW(14) + -1); if (t) goto L_00121090; }
SET64(2, RD(3) < RD(8));
if (RD(2) == RD(0)) { SET32(3, RW(3) - RW(8)); goto L_00121094; }
SET32(14, RW(14) + -1);
SET32(3, RW(3) + RW(9));
L_00121090:;
SET32(3, RW(3) - RW(8));
L_00121094:;
if (RD(6) == RD(0)) { rt_break(c, 0x121098); goto L_0012109C; }
L_0012109C:;
div_u(c, 0, RW(3), RW(6));
SET64(4, RD(10) & 0xffff);
SET64(2, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(6, RD(2) + RD(0));
SET32(3, RW(3) << 16);
mul_s(c, 0, 8, RSW(6), RSW(5));
SET64(5, RD(3) | RD(4));
SET64(2, RD(5) < RD(8));
if (RD(2) == RD(0)) { SET32(5, RW(5) - RW(8)); goto L_001210F0; }
SET32(5, RW(5) + RW(9));
SET64(2, RD(5) < RD(9));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + -1); if (t) goto L_001210EC; }
SET64(2, RD(5) < RD(8));
if (RD(2) == RD(0)) { SET32(5, RW(5) - RW(8)); goto L_001210F0; }
SET32(6, RW(6) + -1);
SET32(5, RW(5) + RW(9));
L_001210EC:;
SET32(5, RW(5) - RW(8));
L_001210F0:;
SET32(2, RW(14) << 16);
SET64(2, RD(2) | RD(6));
SET64(10, RD(5) + RD(0));
mul_u(c, 0, 0, RW(2), RW(7));
SET64(6, c->hi.d[0]);
SET64(8, c->lo.d[0]);
SET64(3, RD(10) < RD(6));
{ int t = RD(3) != RD(0); SET32(2, RW(8) - RW(7)); if (t) goto L_00121128; }
{ int t = RD(6) != RD(10); SET64(2, RD(13) < RD(8)); if (t) goto L_00121138; }
{ int t = RD(2) == RD(0); SET32(2, RW(8) - RW(7)); if (t) goto L_00121138; }
L_00121128:;
SET32(4, RW(6) - RW(9));
SET64(3, RD(8) < RD(2));
SET64(8, RD(2) + RD(0));
SET32(6, RW(4) - RW(3));
L_00121138:;
{ int t = RD(24) == RD(0); SET32(4, RW(13) - RW(8)); if (t) goto L_0012118C; }
SET32(5, RW(5) - RW(6));
SET64(3, RD(13) < RD(4));
SET32(10, RW(5) - RW(3));
SET32(2, RW(10) << (RW(15) & 31));
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 32);
SET32(4, RW(4) >> (RW(12) & 31));
SET64(11, RD(11) & RD(3));
SET64(2, RD(2) | RD(4));
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) >> 32);
SET64(2, RD(2) << 32);
SET32(3, RW(10) >> (RW(12) & 31));
SET64(2, RD(2) >> 32);
SET64(3, RD(3) << 32);
SET64(11, RD(11) | RD(2));
SET64(11, RD(11) & RD(4));
SET64(11, RD(11) | RD(3));
L_00121188:;
wr64(c, (RW(24) + 0), RD(11));
L_0012118C:;
SET64(2, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00121198(Ctx *c) { /* func_00121198 */
ENTER(0x121198);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(4, RSD(16) >> 32);
SET64(17, RD(0) | 0x81e0);
SET64(17, RD(17) << 47);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x1211c0);  JP_F_00122158(c);
SET64(4, RD(2) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x1211d0);  JP_F_00121C20(c);
SET64(5, RD(17) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x1211e0);  JP_F_00121C20(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(2) >> 32);
SET64(16, RD(16) & RD(2));
SET64(16, RD(16) << 32);
SET64(16, RSD(16) >> 32);
SET64(31, 0x121200); SET64(4, RD(16) + RD(0)); JP_F_00122158(c);
SET64(5, RD(0) | 0x83e0);
SET64(5, RD(5) << 47);
{ int t = RSD(16) >= 0;  if (t) goto L_0012121C; }
SET64(4, RD(2) + RD(0));
SET64(31, 0x12121c);  JP_F_00121B60(c);
L_0012121C:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x12122c);  JP_F_00121B60(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00121240(Ctx *c) { /* func_00121240 */
ENTER(0x121240);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 11);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET64(2, RD(17) + RD(2));
SET32(3, RW(0) + -1);
SET64(3, RD(3) << 11);
SET64(3, RD(3) >> 10);
SET64(3, RD(3) < RD(2));
SET64(2, RD(17) & 0x7ff);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00121288; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 2048); if (t) goto L_00121288; }
SET64(17, RD(17) | RD(2));
L_00121288:;
SET64(16, RD(0) | 0x81e0);
SET64(16, RD(16) << 47);
SET64(4, RSD(17) >> 32);
SET64(31, 0x12129c);  JP_F_00122158(c);
SET64(4, RD(2) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x1212ac);  JP_F_00121C20(c);
SET64(5, RD(16) + RD(0));
SET64(16, (s64)(s32)0xffff0000);
SET64(16, RD(16) >> 32);
SET64(4, RD(2) + RD(0));
SET64(31, 0x1212c4); SET64(16, RD(17) & RD(16)); JP_F_00121C20(c);
SET64(16, RD(16) << 32);
SET64(16, RSD(16) >> 32);
SET64(18, RD(2) + RD(0));
SET64(31, 0x1212d8); SET64(4, RD(16) + RD(0)); JP_F_00122158(c);
SET64(5, RD(0) | 0x83e0);
SET64(5, RD(5) << 47);
{ int t = RSD(16) >= 0;  if (t) goto L_001212F4; }
SET64(4, RD(2) + RD(0));
SET64(31, 0x1212f4);  JP_F_00121B60(c);
L_001212F4:;
SET64(5, RD(2) + RD(0));
SET64(4, RD(18) + RD(0));
SET64(31, 0x121304);  JP_F_00121B60(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x121310);  JP_F_001222E0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00121328(Ctx *c) { /* func_00121328 */
ENTER(0x121328);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x12134c);  JP_F_00122108(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) | 0xf7c0);
SET64(5, RD(5) << 46);
{ int t = RSD(2) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00121428; }
SET64(31, 0x121368);  JP_F_00121C20(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x121374);  JP_F_00122338(c);
SET64(16, RD(2) << 32);
SET64(2, RD(16) & 0x1);
SET64(4, RD(16) >> 1);
{ int t = RSD(16) < 0; SET64(4, RD(2) | RD(4)); if (t) goto L_00121398; }
SET64(31, 0x121390); SET64(4, RD(16) + RD(0)); JP_F_00121198(c);
 goto L_001213B0;
L_00121398:;
SET64(31, 0x1213a0);  JP_F_00121198(c);
SET64(4, RD(2) + RD(0));
SET64(5, RD(4) + RD(0));
SET64(31, 0x1213b0);  JP_F_00121B60(c);
L_001213B0:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x1213c0);  JP_F_00121BB8(c);
SET64(18, RD(0) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1213d8);  JP_F_00122108(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(17) + RD(0));
{ int t = RSD(2) >= 0;  if (t) goto L_00121410; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x1213f4);  JP_F_00121BB8(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x121400);  JP_F_00122338(c);
SET64(2, RD(2) << 32);
SET64(2, RD(2) >> 32);
SET64(16, RD(16) - RD(2)); goto L_00121424;
L_00121410:;
SET64(31, 0x121418);  JP_F_00122338(c);
SET64(2, RD(2) << 32);
SET64(2, RD(2) >> 32);
SET64(16, RD(16) + RD(2));
L_00121424:;
SET64(2, RD(16) + RD(0));
L_00121428:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00121440(Ctx *c) { /* func_00121440 */
ENTER(0x121440);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(0) + RD(0));
SET64(5, RD(17) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(16, RD(4) + RD(0));
SET64(31, 0x121464);  JP_F_00122108(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(16) + RD(0));
if (RSD(2) >= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_001214A8; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x121480);  JP_F_00121BB8(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x12148c);  JP_F_00121328(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) - RD(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
L_001214A8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00121328(c); return; }
}

void JP_F_001214B8(Ctx *c) { /* func_001214B8 */
ENTER(0x1214b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x1214d4);  JP_F_00121728(c);
SET64(17, RD(2) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1214e8);  JP_F_00122108(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) | 0xf7c0);
SET64(5, RD(5) << 46);
{ int t = RSD(2) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_001215C8; }
SET64(31, 0x121504);  JP_F_00121C20(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x121510);  JP_F_00122338(c);
SET64(16, RD(2) << 32);
SET64(2, RD(16) & 0x1);
SET64(4, RD(16) >> 1);
{ int t = RSD(16) < 0; SET64(4, RD(2) | RD(4)); if (t) goto L_00121538; }
SET64(31, 0x12152c); SET64(4, RD(16) + RD(0)); JP_F_00121198(c);
 goto L_00121550;
L_00121538:;
SET64(31, 0x121540);  JP_F_00121198(c);
SET64(4, RD(2) + RD(0));
SET64(5, RD(4) + RD(0));
SET64(31, 0x121550);  JP_F_00121B60(c);
L_00121550:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x121560);  JP_F_00121BB8(c);
SET64(18, RD(0) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x121578);  JP_F_00122108(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(17) + RD(0));
{ int t = RSD(2) >= 0;  if (t) goto L_001215B0; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x121594);  JP_F_00121BB8(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x1215a0);  JP_F_00122338(c);
SET64(2, RD(2) << 32);
SET64(2, RD(2) >> 32);
SET64(16, RD(16) - RD(2)); goto L_001215C4;
L_001215B0:;
SET64(31, 0x1215b8);  JP_F_00122338(c);
SET64(2, RD(2) << 32);
SET64(2, RD(2) >> 32);
SET64(16, RD(16) + RD(2));
L_001215C4:;
SET64(2, RD(16) + RD(0));
L_001215C8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001215E0(Ctx *c) { /* func_001215E0 */
ENTER(0x1215e0);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 12)));
SET64(2, RD(2) ^ 0x2);
{ int t = RD(2) == RD(0); SET64(8, (s32)rd32(c, (RW(4) + 4))); if (t) goto L_00121634; }
{ int t = RD(5) == RD(0); SET64(2, (s64)(s32)0x7f0000); if (t) goto L_00121648; }
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(2, RSD(4) < (s64)-126);
if (RD(2) != RD(0)) { SET64(5, RD(0) + RD(0)); goto L_00121644; }
SET64(2, RSD(4) < (s64)129);
if (RD(2) == RD(0)) { SET32(7, RW(0) + 255); goto L_00121634; }
SET32(2, RW(0) + 128);
{ int t = RD(4) != RD(2); SET32(7, RW(4) + 127); if (t) goto L_00121640; }
if (RSD(5) >= 0) { SET32(5, RW(5) >> 7); goto L_00121644; }
SET32(7, RW(0) + 255);
L_00121634:;
SET64(5, RD(0) + RD(0)); goto L_00121644;
L_00121640:;
SET32(5, RW(5) >> 7);
L_00121644:;
SET64(2, (s64)(s32)0x7f0000);
L_00121648:;
SET64(3, (s64)(s32)0xff800000);
SET64(2, RD(2) | 0xffff);
SET64(6, RD(6) & RD(3));
SET64(2, RD(5) & RD(2));
SET64(3, (s64)(s32)0x807f0000);
SET64(6, RD(6) | RD(2));
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, RD(3) | 0xffff);
SET64(4, RD(7) & 0xff);
SET64(6, RD(6) & RD(3));
SET32(3, RW(8) << 31);
SET32(4, RW(4) << 23);
SET64(2, RD(2) | 0xffff);
SET64(6, RD(6) | RD(4));
SET64(6, RD(6) & RD(2));
SET64(6, RD(6) | RD(3));
c->f[0].u = RW(6);
 return;
}

void JP_F_00121698(Ctx *c) { /* func_00121698 */
ENTER(0x121698);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(4, (s64)(s32)0x7f0000);
SET64(4, RD(4) | 0xffff);
SET64(6, RD(5) + RD(0));
SET32(2, RW(3) >> 23);
SET32(5, RW(3) >> 31);
SET64(2, RD(2) & 0xff);
SET64(3, RD(3) & RD(4));
wr32(c, (RW(6) + 4), RW(5));
SET32(5, RW(2) + -127);
{ int t = RD(2) != RD(0); SET32(4, RW(3) << 7); if (t) goto L_001216D8; }
SET32(2, RW(0) + 2);
wr32(c, (RW(6) + 0), RW(2)); return;
L_001216D8:;
SET64(2, (s64)(s32)0x40000000);
SET32(3, RW(0) + 3);
SET64(2, RD(4) | RD(2));
wr32(c, (RW(6) + 8), RW(5));
wr32(c, (RW(6) + 0), RW(3));
wr32(c, (RW(6) + 12), RW(2)); return;
}

void JP_F_001216F8(Ctx *c) { /* func_001216F8 */
ENTER(0x1216f8);
SET32(29, RW(29) + -32);
wr32(c, (RW(29) + 0), RW(4));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(29) + 4), RW(5));
wr32(c, (RW(29) + 8), RW(6));
SET64(31, 0x121718); wr32(c, (RW(29) + 12), RW(7)); JP_F_001215E0(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00121728(Ctx *c) { /* func_00121728 */
ENTER(0x121728);
SET32(29, RW(29) + -48);
SET32(4, RW(29) + 16);
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x121740); wr32(c, (RW(29) + 16), c->f[12].u); JP_F_00121698(c);
SET64(7, rd32(c, (RW(29) + 12)));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(7, RD(7) << 30);
SET64(31, 0x121758); SET64(6, (s32)rd32(c, (RW(29) + 8))); JP_F_001222B0(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00121768(Ctx *c) { /* func_00121768 */
ENTER(0x121768);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(7, RD(0) + RD(0));
SET64(5, rd64(c, (RW(4) + 16)));
SET64(2, RD(3) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET64(8, (s32)rd32(c, (RW(4) + 4))); if (t) goto L_00121798; }
SET64(2, RD(0) | 0x8000);
SET64(2, RD(2) << 36);
SET32(7, RW(0) + 2047);
SET64(5, RD(5) | RD(2)); goto L_001217E4;
L_00121798:;
SET64(2, RD(3) ^ 0x4);
if (RD(2) == RD(0)) { SET32(7, RW(0) + 2047); goto L_001217D8; }
SET64(2, RD(3) ^ 0x2);
if (RD(2) == RD(0)) { SET64(5, RD(0) + RD(0)); goto L_001217E4; }
{ int t = RD(5) == RD(0);  if (t) goto L_001217E4; }
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(2, RSD(4) < (s64)-1022);
if (RD(2) != RD(0)) { SET64(5, RD(0) + RD(0)); goto L_001217E4; }
SET64(2, RSD(4) < (s64)1024);
if (RD(2) != RD(0)) { SET32(7, RW(4) + 1023); goto L_001217E0; }
SET32(7, RW(0) + 2047);
L_001217D8:;
SET64(5, RD(0) + RD(0)); goto L_001217E4;
L_001217E0:;
SET64(5, RD(5) >> 8);
L_001217E4:;
SET64(3, RD(0) | 0xfff0);
SET64(3, RD(3) << 48);
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 12);
SET64(2, RD(5) & RD(2));
SET64(6, RD(6) & RD(3));
SET64(6, RD(6) | RD(2));
SET64(2, (s64)(s32)0x800f0000);
SET64(2, RD(2) | 0xffff);
SET64(2, RD(2) << 16);
SET64(2, RD(2) | 0xffff);
SET64(2, RD(2) << 16);
SET64(2, RD(2) | 0xffff);
SET64(3, RD(7) & 0x7ff);
SET64(6, RD(6) & RD(2));
SET64(3, RD(3) << 52);
SET32(4, RW(0) + -1);
SET64(4, RD(4) >> 1);
SET64(6, RD(6) | RD(3));
SET64(2, RD(8) << 63);
SET64(6, RD(6) & RD(4));
SET64(2, RD(6) | RD(2)); return;
}

void JP_F_00121840(Ctx *c) { /* func_00121840 */
ENTER(0x121840);
SET64(2, rd64(c, (RW(4) + 0)));
SET64(6, RD(5) + RD(0));
SET32(5, RW(0) + -1);
SET64(5, RD(5) >> 12);
SET64(3, RD(2) >> 52);
SET64(4, RD(2) >> 63);
SET64(7, RD(3) & 0x7ff);
SET64(3, RD(2) & RD(5));
{ int t = RD(7) != RD(0); wr32(c, (RW(6) + 4), RW(4)); if (t) goto L_00121878; }
SET32(2, RW(0) + 2);
wr32(c, (RW(6) + 0), RW(2)); return;
L_00121878:;
SET32(2, RW(0) + 2047);
if (RD(7) != RD(2)) { SET64(3, RD(3) << 8); goto L_001218D8; }
SET32(2, RW(0) + 1023);
{ int t = RD(3) != RD(0); wr32(c, (RW(6) + 8), RW(2)); if (t) goto L_001218A8; }
SET32(3, RW(0) + 4);
SET64(2, RD(0) | 0x8000);
SET64(2, RD(2) << 45);
wr64(c, (RW(6) + 16), RD(2));
wr32(c, (RW(6) + 0), RW(3)); return;
L_001218A8:;
SET64(2, RD(0) | 0x8000);
SET64(2, RD(2) << 36);
SET64(2, RD(3) & RD(2));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_001218C8; }
wr32(c, (RW(6) + 0), RW(2)); goto L_001218CC;
L_001218C8:;
wr32(c, (RW(6) + 0), RW(0));
L_001218CC:;
wr64(c, (RW(6) + 16), RD(3)); return;
L_001218D8:;
SET64(2, RD(0) | 0x8000);
SET64(2, RD(2) << 45);
SET64(3, RD(3) | RD(2));
SET32(2, RW(0) + 3);
SET32(4, RW(7) + -1023);
wr64(c, (RW(6) + 16), RD(3));
wr32(c, (RW(6) + 8), RW(4));
wr32(c, (RW(6) + 0), RW(2)); return;
}

void JP_F_00121900(Ctx *c) { /* func_00121900 */
ENTER(0x121900);
SET64(11, RD(4) + RD(0));
SET64(7, (s32)rd32(c, (RW(11) + 0)));
SET64(3, RD(7) < (u64)(s64)2);
{ int t = RD(3) != RD(0); SET64(2, RD(11) + RD(0)); if (t) goto L_00121B54; }
SET64(4, (s32)rd32(c, (RW(5) + 0)));
SET64(3, RD(4) < (u64)(s64)2);
{ int t = RD(3) != RD(0); SET64(2, RD(5) + RD(0)); if (t) goto L_00121B54; }
SET64(2, RD(7) ^ 0x4);
{ int t = RD(2) != RD(0); SET64(3, RD(4) ^ 0x4); if (t) goto L_00121958; }
SET64(2, RD(4) ^ 0x4);
{ int t = RD(2) != RD(0);  if (t) goto L_001219A8; }
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET64(2, (s32)rd32(c, (RW(11) + 4)));
{ int t = RD(2) == RD(3);  if (t) goto L_001219A8; }
SET64(2, (s64)(s32)0x420000);
SET32(2, RW(2) + -8424); return;
L_00121958:;
{ int t = RD(3) == RD(0); SET64(2, RD(5) + RD(0)); if (t) goto L_00121B54; }
SET64(2, RD(4) ^ 0x2);
{ int t = RD(2) != RD(0); SET64(3, RD(7) ^ 0x2); if (t) goto L_001219B0; }
SET64(2, RD(7) ^ 0x2);
{ int t = RD(2) != RD(0);  if (t) goto L_001219A8; }
SET64(4, rd64(c, (RW(11) + 0)));
SET64(2, RD(6) + RD(0));
wr64(c, (RW(6) + 0), RD(4));
SET64(3, rd64(c, (RW(11) + 8)));
wr64(c, (RW(6) + 8), RD(3));
SET64(4, rd64(c, (RW(11) + 16)));
wr64(c, (RW(6) + 16), RD(4));
SET64(3, (s32)rd32(c, (RW(11) + 4)));
SET64(4, (s32)rd32(c, (RW(5) + 4)));
SET64(3, RD(3) & RD(4));
wr32(c, (RW(6) + 4), RW(3)); return;
L_001219A8:;
SET64(2, RD(11) + RD(0)); return;
L_001219B0:;
{ int t = RD(3) == RD(0); SET64(2, RD(5) + RD(0)); if (t) goto L_00121B54; }
SET64(8, (s32)rd32(c, (RW(11) + 8)));
SET64(7, (s32)rd32(c, (RW(5) + 8)));
SET64(10, rd64(c, (RW(11) + 16)));
SET32(2, RW(8) - RW(7));
SET32(4, RW(0) - RW(2));
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(4));
SET64(2, RSD(2) < (s64)64);
{ int t = RD(2) == RD(0); SET64(9, rd64(c, (RW(5) + 16))); if (t) goto L_00121A50; }
SET64(2, RSD(7) < RSD(8));
{ int t = RD(2) == RD(0); SET64(2, RSD(8) < RSD(7)); if (t) goto L_00121A1C; }
SET32(4, RW(0) + 1);
SET32(7, RW(8) - RW(7));
L_001219F8:;
SET64(3, RD(9) >> 1);
SET64(2, RD(9) & RD(4));
SET32(7, RW(7) + -1);
{ int t = RD(7) != RD(0); SET64(9, RD(2) | RD(3)); if (t) { POLL(); goto L_001219F8; } }
SET64(7, RD(8) + RD(0));
SET64(2, RSD(8) < RSD(7));
L_00121A1C:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(11) + 4))); goto L_00121A70; }
SET32(12, RW(0) + 1);
L_00121A28:;
SET32(8, RW(8) + 1);
SET64(2, RD(10) >> 1);
SET64(3, RD(10) & RD(12));
SET64(4, RSD(8) < RSD(7));
{ int t = RD(4) != RD(0); SET64(10, RD(3) | RD(2)); if (t) { POLL(); goto L_00121A28; } }
SET64(4, (s32)rd32(c, (RW(11) + 4))); goto L_00121A70;
L_00121A50:;
SET64(2, RSD(7) < RSD(8));
if (RD(2) == RD(0)) { SET64(8, RD(7) + RD(0)); goto L_00121A68; }
SET64(9, RD(0) + RD(0)); goto L_00121A6C;
L_00121A68:;
SET64(10, RD(0) + RD(0));
L_00121A6C:;
SET64(4, (s32)rd32(c, (RW(11) + 4)));
L_00121A70:;
SET64(2, (s32)rd32(c, (RW(5) + 4)));
{ int t = RD(4) == RD(2); SET64(2, RD(10) - RD(9)); if (t) goto L_00121B08; }
SET64(3, RD(9) - RD(10));
if (RD(4) == 0) SET64(3, RD(2));
if (RSD(3) < 0) { SET64(3, RD(0) - RD(3)); goto L_00121AA0; }
wr32(c, (RW(6) + 8), RW(8));
wr64(c, (RW(6) + 16), RD(3));
wr32(c, (RW(6) + 4), RW(0)); goto L_00121AB0;
L_00121AA0:;
SET32(2, RW(0) + 1);
wr32(c, (RW(6) + 4), RW(2));
wr32(c, (RW(6) + 8), RW(8));
wr64(c, (RW(6) + 16), RD(3));
L_00121AB0:;
SET64(7, rd64(c, (RW(6) + 16)));
SET32(2, RW(0) + -1);
SET64(2, RD(2) << 5);
SET64(2, RD(2) >> 4);
SET64(3, RD(7) + (s64)-1);
SET64(2, RD(2) < RD(3));
{ int t = RD(2) != RD(0);  if (t) goto L_00121B1C; }
L_00121AD0:;
SET64(5, RD(7) << 1);
SET64(2, (s32)rd32(c, (RW(6) + 8)));
SET64(3, RD(5) + (s64)-1);
SET32(4, RW(0) + -1);
SET64(4, RD(4) << 5);
SET64(4, RD(4) >> 4);
SET32(2, RW(2) + -1);
SET64(4, RD(4) < RD(3));
wr32(c, (RW(6) + 8), RW(2));
SET64(7, RD(5) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(6) + 16), RD(5)); if (t) { POLL(); goto L_00121AD0; } }
 goto L_00121B1C;
L_00121B08:;
SET64(2, RD(10) + RD(9));
wr32(c, (RW(6) + 4), RW(4));
wr32(c, (RW(6) + 8), RW(8));
SET64(7, RD(2) + RD(0));
wr64(c, (RW(6) + 16), RD(2));
L_00121B1C:;
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 3);
SET32(3, RW(0) + 3);
SET64(2, RD(2) < RD(7));
{ int t = RD(2) == RD(0); wr32(c, (RW(6) + 0), RW(3)); if (t) goto L_00121B50; }
SET64(2, (s32)rd32(c, (RW(6) + 8)));
SET64(4, RD(7) >> 1);
SET64(3, RD(7) & 0x1);
SET64(3, RD(3) | RD(4));
SET32(2, RW(2) + 1);
wr64(c, (RW(6) + 16), RD(3));
wr32(c, (RW(6) + 8), RW(2));
L_00121B50:;
SET64(2, RD(6) + RD(0));
L_00121B54:;
 return;
}

void JP_F_00121B60(Ctx *c) { /* func_00121B60 */
ENTER(0x121b60);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(4));
SET32(4, RW(29) + 96);
wr64(c, (RW(29) + 104), RD(5));
wr64(c, (RW(29) + 112), RD(16));
wr64(c, (RW(29) + 120), RD(31));
SET64(31, 0x121b80); SET64(5, RD(29) + RD(0)); JP_F_00121840(c);
SET32(16, RW(29) + 32);
SET32(4, RW(29) + 104);
SET64(31, 0x121b90); SET64(5, RD(16) + RD(0)); JP_F_00121840(c);
SET64(5, RD(16) + RD(0));
SET64(4, RD(29) + RD(0));
SET64(31, 0x121ba0); SET32(6, RW(29) + 64); JP_F_00121900(c);
SET64(31, 0x121ba8); SET64(4, RD(2) + RD(0)); JP_F_00121768(c);
SET64(16, rd64(c, (RW(29) + 112)));
SET64(31, rd64(c, (RW(29) + 120)));
SET32(29, RW(29) + 128); return;
}

void JP_F_00121BB8(Ctx *c) { /* func_00121BB8 */
ENTER(0x121bb8);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(4));
SET32(4, RW(29) + 96);
wr64(c, (RW(29) + 104), RD(5));
wr64(c, (RW(29) + 112), RD(16));
wr64(c, (RW(29) + 120), RD(31));
SET64(31, 0x121bd8); SET64(5, RD(29) + RD(0)); JP_F_00121840(c);
SET32(16, RW(29) + 32);
SET32(4, RW(29) + 104);
SET64(31, 0x121be8); SET64(5, RD(16) + RD(0)); JP_F_00121840(c);
SET64(5, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 36)));
SET64(4, RD(29) + RD(0));
SET32(6, RW(29) + 64);
SET64(2, RD(2) ^ 0x1);
SET64(31, 0x121c04); wr32(c, (RW(29) + 36), RW(2)); JP_F_00121900(c);
SET64(31, 0x121c0c); SET64(4, RD(2) + RD(0)); JP_F_00121768(c);
SET64(16, rd64(c, (RW(29) + 112)));
SET64(31, rd64(c, (RW(29) + 120)));
SET32(29, RW(29) + 128); return;
}

void JP_F_00121C20(Ctx *c) { /* func_00121C20 */
ENTER(0x121c20);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 96), RD(4));
SET32(4, RW(29) + 96);
wr64(c, (RW(29) + 104), RD(5));
wr64(c, (RW(29) + 112), RD(16));
wr64(c, (RW(29) + 120), RD(17));
wr64(c, (RW(29) + 128), RD(18));
wr64(c, (RW(29) + 136), RD(19));
wr64(c, (RW(29) + 144), RD(20));
wr64(c, (RW(29) + 152), RD(21));
wr64(c, (RW(29) + 160), RD(22));
wr64(c, (RW(29) + 168), RD(31));
SET64(31, 0x121c58); SET64(5, RD(29) + RD(0)); JP_F_00121840(c);
SET32(16, RW(29) + 32);
SET32(4, RW(29) + 104);
SET64(31, 0x121c68); SET64(5, RD(16) + RD(0)); JP_F_00121840(c);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(4) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_00121CD4; }
SET64(3, (s32)rd32(c, (RW(29) + 32)));
SET64(2, RD(3) < (u64)(s64)2);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(29) + 36))); goto L_00121CFC; }
SET64(2, RD(4) ^ 0x4);
{ int t = RD(2) != RD(0); SET64(2, RD(3) ^ 0x4); if (t) goto L_00121CA8; }
SET64(2, RD(3) ^ 0x2);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 4))); goto L_00121CD4; }
SET64(2, (s64)(s32)0x420000); goto L_00121CBC;
L_00121CA8:;
{ int t = RD(2) != RD(0); SET64(2, RD(4) ^ 0x2); if (t) goto L_00121CC8; }
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(29) + 36))); goto L_00121CFC; }
SET64(2, (s64)(s32)0x420000);
L_00121CBC:;
SET32(4, RW(2) + -8424); goto L_00121E74;
L_00121CC8:;
{ int t = RD(2) != RD(0); SET64(2, RD(3) ^ 0x2); if (t) goto L_00121CF0; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
L_00121CD4:;
SET64(4, RD(29) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 36)));
SET64(2, RD(2) ^ RD(3));
SET64(2, RD(0) < RD(2));
wr32(c, (RW(29) + 4), RW(2)); goto L_00121E74;
L_00121CF0:;
{ int t = RD(2) != RD(0); SET64(19, rd64(c, (RW(29) + 16))); if (t) goto L_00121D18; }
SET64(3, (s32)rd32(c, (RW(29) + 36)));
L_00121CFC:;
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(2, RD(2) ^ RD(3));
SET64(2, RD(0) < RD(2));
wr32(c, (RW(29) + 36), RW(2)); goto L_00121E74;
L_00121D18:;
SET64(21, (s64)(s32)0xffff0000);
SET64(21, RD(21) >> 32);
SET64(18, rd64(c, (RW(29) + 48)));
SET64(16, RD(19) & RD(21));
SET64(19, RD(19) >> 32);
SET64(22, RD(18) & RD(21));
SET64(18, RD(18) >> 32);
SET64(5, RD(16) + RD(0));
SET64(31, 0x121d40); SET64(4, RD(22) + RD(0)); JP_F_0011F910(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x121d50); SET64(20, RD(2) + RD(0)); JP_F_0011F910(c);
SET64(4, RD(22) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x121d60); SET64(17, RD(2) + RD(0)); JP_F_0011F910(c);
SET64(4, RD(18) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x121d74); SET64(16, RD(17) + RD(16)); JP_F_0011F910(c);
SET64(17, RD(16) < RD(17));
SET64(6, RD(16) << 32);
SET64(16, RD(16) >> 32);
SET64(6, RD(20) + RD(6));
SET64(16, RD(16) & RD(21));
SET64(17, RD(17) << 32);
SET64(16, RD(16) + RD(2));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(20, RD(6) < RD(20));
SET64(4, (s32)rd32(c, (RW(29) + 8)));
SET64(7, (s32)rd32(c, (RW(29) + 40)));
SET64(17, RD(17) + RD(20));
SET64(5, (s32)rd32(c, (RW(29) + 36)));
SET64(17, RD(17) + RD(16));
SET32(4, RW(4) + RW(7));
SET32(3, RW(0) + -1);
SET64(3, RD(3) >> 3);
SET64(2, RD(2) ^ RD(5));
SET32(4, RW(4) + 4);
SET64(2, RD(0) < RD(2));
SET64(3, RD(3) < RD(17));
wr32(c, (RW(29) + 68), RW(2));
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 72), RW(4)); if (t) goto L_00121E14; }
SET64(7, RD(0) | 0x8000);
SET64(7, RD(7) << 48);
SET32(5, RW(0) + -1);
SET64(5, RD(5) >> 3);
SET64(2, RD(17) & 0x1);
L_00121DE8:;
SET64(17, RD(17) >> 1);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET64(3, RD(5) < RD(17));
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 1); if (t) goto L_00121E08; }
SET64(6, RD(6) >> 1);
SET64(6, RD(6) | RD(7));
L_00121E08:;
{ int t = RD(3) != RD(0); SET64(2, RD(17) & 0x1); if (t) { POLL(); goto L_00121DE8; } }
wr32(c, (RW(29) + 72), RW(4));
L_00121E14:;
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 4);
SET64(2, RD(2) < RD(17));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 3); if (t) goto L_00121E68; }
SET64(4, (s32)rd32(c, (RW(29) + 72)));
SET64(8, RD(0) | 0x8000);
SET64(8, RD(8) << 48);
SET32(7, RW(0) + 1);
SET32(5, RW(0) + -1);
SET64(5, RD(5) >> 4);
L_00121E40:;
SET64(17, RD(17) << 1);
SET64(3, RD(6) & RD(8));
SET64(2, RD(17) | RD(7));
SET32(4, RW(4) + -1);
if (RD(3) != 0) SET64(17, RD(2));
SET64(2, RD(5) < RD(17));
{ int t = RD(2) == RD(0); SET64(6, RD(6) << 1); if (t) { POLL(); goto L_00121E40; } }
wr32(c, (RW(29) + 72), RW(4));
SET32(2, RW(0) + 3);
L_00121E68:;
wr64(c, (RW(29) + 80), RD(17));
wr32(c, (RW(29) + 64), RW(2));
SET32(4, RW(29) + 64);
L_00121E74:;
SET64(31, 0x121e7c);  JP_F_00121768(c);
SET64(16, rd64(c, (RW(29) + 112)));
SET64(17, rd64(c, (RW(29) + 120)));
SET64(18, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 136)));
SET64(20, rd64(c, (RW(29) + 144)));
SET64(21, rd64(c, (RW(29) + 152)));
SET64(22, rd64(c, (RW(29) + 160)));
SET64(31, rd64(c, (RW(29) + 168)));
SET32(29, RW(29) + 176); return;
}

void JP_F_00121EA8(Ctx *c) { /* func_00121EA8 */
ENTER(0x121ea8);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(4));
SET32(4, RW(29) + 64);
wr64(c, (RW(29) + 72), RD(5));
wr64(c, (RW(29) + 80), RD(16));
wr64(c, (RW(29) + 88), RD(31));
SET64(31, 0x121ec8); SET64(5, RD(29) + RD(0)); JP_F_00121840(c);
SET32(16, RW(29) + 32);
SET32(4, RW(29) + 72);
SET64(31, 0x121ed8); SET64(5, RD(16) + RD(0)); JP_F_00121840(c);
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET64(8, RD(29) + RD(0));
SET64(2, RD(6) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_00121FD0; }
SET64(5, (s32)rd32(c, (RW(29) + 32)));
SET64(2, RD(5) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00121FD0; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(4, RD(6) ^ 0x4);
SET64(3, (s32)rd32(c, (RW(29) + 36)));
SET64(2, RD(2) ^ RD(3));
{ int t = RD(4) == RD(0); wr32(c, (RW(29) + 4), RW(2)); if (t) goto L_00121F20; }
SET64(2, RD(6) ^ 0x2);
{ int t = RD(2) != RD(0); SET64(2, RD(5) ^ 0x4); if (t) goto L_00121F38; }
L_00121F20:;
if (RD(6) != RD(5)) { SET64(4, RD(29) + RD(0)); goto L_00121FD0; }
SET64(2, (s64)(s32)0x420000);
SET32(4, RW(2) + -8424); goto L_00121FD0;
L_00121F38:;
if (RD(2) != RD(0)) { SET64(2, RD(5) ^ 0x2); goto L_00121F50; }
wr64(c, (RW(29) + 16), RD(0));
SET64(4, RD(29) + RD(0));
wr32(c, (RW(29) + 8), RW(0)); goto L_00121FD0;
L_00121F50:;
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(29) + 8))); goto L_00121F68; }
SET32(2, RW(0) + 4);
SET64(4, RD(29) + RD(0));
wr32(c, (RW(29) + 0), RW(2)); goto L_00121FD0;
L_00121F68:;
SET64(2, (s32)rd32(c, (RW(29) + 40)));
SET64(4, rd64(c, (RW(29) + 16)));
SET64(6, rd64(c, (RW(29) + 48)));
SET32(2, RW(3) - RW(2));
SET64(5, RD(4) < RD(6));
{ int t = RD(5) == RD(0); wr32(c, (RW(29) + 8), RW(2)); if (t) goto L_00121F94; }
SET32(2, RW(2) + -1);
SET64(4, RD(4) << 1);
wr32(c, (RW(29) + 8), RW(2));
SET64(5, RD(4) < RD(6));
L_00121F94:;
SET64(3, RD(0) | 0x8000);
SET64(3, RD(3) << 45);
SET64(7, RD(0) + RD(0));
L_00121FA0:;
{ int t = RD(5) != RD(0); SET64(2, RD(4) << 1); if (t) goto L_00121FB8; }
SET64(4, RD(4) - RD(6));
SET64(7, RD(7) | RD(3));
SET64(2, RD(4) << 1);
L_00121FB8:;
SET64(3, RD(3) >> 1);
SET64(5, RD(2) < RD(6));
{ int t = RD(3) != RD(0); SET64(4, RD(2) + RD(0)); if (t) { POLL(); goto L_00121FA0; } }
wr64(c, (RW(8) + 16), RD(7));
SET64(4, RD(8) + RD(0));
L_00121FD0:;
SET64(31, 0x121fd8);  JP_F_00121768(c);
SET64(16, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void JP_F_00121FE8(Ctx *c) { /* func_00121FE8 */
ENTER(0x121fe8);
SET64(6, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(6) < (u64)(s64)2);
{ int t = RD(2) != RD(0);  if (t) goto L_00122008; }
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(2, RD(3) < (u64)(s64)2);
if (RD(2) == RD(0)) { SET64(2, RD(6) ^ 0x4); goto L_00122010; }
L_00122008:;
SET32(2, RW(0) + 1); return;
L_00122010:;
{ int t = RD(2) != RD(0); SET64(2, RD(3) ^ 0x4); if (t) goto L_00122030; }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(4) + 4))); goto L_00122084; }
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(2, RW(3) - RW(2)); return;
L_00122030:;
if (RD(2) != RD(0)) { SET64(2, RD(6) ^ 0x2); goto L_00122050; }
SET64(4, (s32)rd32(c, (RW(5) + 4)));
SET32(3, RW(0) + -1);
SET32(2, RW(0) + 1);
if (RD(4) == 0) SET64(2, RD(3)); return;
L_00122050:;
if (RD(2) != RD(0)) { SET64(2, RD(3) ^ 0x2); goto L_00122078; }
SET64(3, RD(3) ^ 0x2);
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00122100; }
SET64(4, (s32)rd32(c, (RW(5) + 4)));
SET32(3, RW(0) + 1);
SET32(2, RW(0) + -1);
if (RD(4) != 0) SET64(2, RD(3)); return;
L_00122078:;
if (RD(2) != RD(0)) { SET64(7, (s32)rd32(c, (RW(4) + 4))); goto L_00122098; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
L_00122084:;
SET32(3, RW(0) + 1);
SET32(2, RW(0) + -1);
if (RD(4) == 0) SET64(2, RD(3)); return;
L_00122098:;
SET64(2, (s32)rd32(c, (RW(5) + 4)));
{ int t = RD(7) != RD(2); SET32(3, RW(0) + 1); if (t) goto L_001220DC; }
SET64(6, (s32)rd32(c, (RW(4) + 8)));
SET64(3, (s32)rd32(c, (RW(5) + 8)));
SET64(2, RSD(3) < RSD(6));
if (RD(2) != RD(0)) { SET32(3, RW(0) + 1); goto L_001220DC; }
SET64(2, RSD(6) < RSD(3));
{ int t = RD(2) != RD(0); SET32(3, RW(0) + -1); if (t) goto L_001220F4; }
SET64(3, rd64(c, (RW(4) + 16)));
SET64(4, rd64(c, (RW(5) + 16)));
SET64(2, RD(4) < RD(3));
if (RD(2) == RD(0)) { SET64(2, RD(3) < RD(4)); goto L_001220E8; }
SET32(3, RW(0) + 1);
L_001220DC:;
SET32(2, RW(0) + -1);
if (RD(7) == 0) SET64(2, RD(3)); return;
L_001220E8:;
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00122100; }
SET32(3, RW(0) + -1);
L_001220F4:;
SET32(2, RW(0) + 1);
if (RD(7) == 0) SET64(2, RD(3)); return;
L_00122100:;
 return;
}

void JP_F_00122108(Ctx *c) { /* func_00122108 */
ENTER(0x122108);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(4));
SET32(4, RW(29) + 64);
wr64(c, (RW(29) + 72), RD(5));
wr64(c, (RW(29) + 80), RD(16));
wr64(c, (RW(29) + 88), RD(31));
SET64(31, 0x122128); SET64(5, RD(29) + RD(0)); JP_F_00121840(c);
SET32(16, RW(29) + 32);
SET32(4, RW(29) + 72);
SET64(31, 0x122138); SET64(5, RD(16) + RD(0)); JP_F_00121840(c);
SET64(5, RD(16) + RD(0));
SET64(31, 0x122144); SET64(4, RD(29) + RD(0)); JP_F_00121FE8(c);
SET64(16, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void JP_F_00122158(Ctx *c) { /* func_00122158 */
ENTER(0x122158);
SET32(29, RW(29) + -48);
SET32(2, RW(0) + 3);
SET32(3, RW(4) >> 31);
wr64(c, (RW(29) + 32), RD(31));
wr32(c, (RW(29) + 0), RW(2));
{ int t = RD(4) != RD(0); wr32(c, (RW(29) + 4), RW(3)); if (t) goto L_00122180; }
SET32(2, RW(0) + 2);
wr32(c, (RW(29) + 0), RW(2)); goto L_001221FC;
L_00122180:;
SET32(2, RW(0) + 60);
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 8), RW(2)); if (t) goto L_001221B0; }
SET64(3, (s64)(s32)0x80000000);
SET64(2, RD(0) | 0xc1e0);
SET64(2, RD(2) << 48);
{ int t = RD(4) == RD(3); SET64(31, rd64(c, (RW(29) + 32))); if (t) goto L_00122208; }
SET32(2, RW(0) - RW(4));
wr64(c, (RW(29) + 16), RD(2)); goto L_001221B4;
L_001221B0:;
wr64(c, (RW(29) + 16), RD(4));
L_001221B4:;
SET64(4, rd64(c, (RW(29) + 16)));
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 4);
SET64(2, RD(2) < RD(4));
{ int t = RD(2) != RD(0); SET64(5, (s32)rd32(c, (RW(29) + 8))); if (t) goto L_001221FC; }
SET32(6, RW(0) + -1);
SET64(6, RD(6) >> 4);
L_001221D8:;
SET64(3, RD(4) << 1);
SET32(5, RW(5) + -1);
SET64(2, RD(6) < RD(3));
{ int t = RD(2) == RD(0); SET64(4, RD(3) + RD(0)); if (t) { POLL(); goto L_001221D8; } }
wr32(c, (RW(29) + 8), RW(5));
wr64(c, (RW(29) + 16), RD(3));
L_001221FC:;
SET64(31, 0x122204); SET64(4, RD(29) + RD(0)); JP_F_00121768(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_00122208:;
SET32(29, RW(29) + 48); return;
}

void JP_F_00122210(Ctx *c) { /* func_00122210 */
ENTER(0x122210);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(4));
SET32(4, RW(29) + 32);
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x122228); SET64(5, RD(29) + RD(0)); JP_F_00121840(c);
SET64(2, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(3, RD(4) ^ 0x2);
{ int t = RD(3) == RD(0); SET64(5, RD(4) < (u64)(s64)2); if (t) goto L_001222A0; }
{ int t = RD(5) != RD(0); SET64(31, rd64(c, (RW(29) + 48))); if (t) goto L_001222A4; }
SET64(2, RD(4) ^ 0x4);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_0012226C; }
SET64(5, (s32)rd32(c, (RW(29) + 8)));
SET64(2, RD(0) + RD(0));
{ int t = RSD(5) < 0; SET64(3, RSD(5) < (s64)31); if (t) goto L_001222A4; }
{ int t = RD(3) != RD(0); SET32(3, RW(0) + 60); if (t) goto L_00122280; }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
L_0012226C:;
SET64(2, (s64)(s32)0x7fff0000);
SET64(4, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0xffff);
if (RD(3) != 0) SET64(2, RD(4)); goto L_001222A0;
L_00122280:;
SET64(2, rd64(c, (RW(29) + 16)));
SET32(3, RW(3) - RW(5));
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET64(2, RD(2) >> (RW(3) & 63));
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET32(3, RW(0) - RW(2));
if (RD(4) != 0) SET64(2, RD(3));
L_001222A0:;
SET64(31, rd64(c, (RW(29) + 48)));
L_001222A4:;
SET32(29, RW(29) + 64); return;
}

void JP_F_001222B0(Ctx *c) { /* func_001222B0 */
ENTER(0x1222b0);
SET32(29, RW(29) + -48);
wr32(c, (RW(29) + 0), RW(4));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
wr32(c, (RW(29) + 4), RW(5));
wr32(c, (RW(29) + 8), RW(6));
SET64(31, 0x1222d0); wr64(c, (RW(29) + 16), RD(7)); JP_F_00121768(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_001222E0(Ctx *c) { /* func_001222E0 */
ENTER(0x1222e0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(4));
SET32(4, RW(29) + 32);
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x1222f8); SET64(5, RD(29) + RD(0)); JP_F_00121840(c);
SET64(5, (s64)(s32)0x3fff0000);
SET64(5, RD(5) | 0xffff);
SET64(2, rd64(c, (RW(29) + 16)));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(3, RD(2) << 2);
SET64(3, RSD(3) >> 32);
SET64(2, RD(2) & RD(5));
SET64(7, RD(3) | 0x1);
SET64(6, (s32)rd32(c, (RW(29) + 8)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x122328); if (RD(2) == 0) SET64(7, RD(3)); JP_F_001216F8(c);
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00122338(Ctx *c) { /* func_00122338 */
ENTER(0x122338);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(4));
SET32(4, RW(29) + 32);
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x122350); SET64(5, RD(29) + RD(0)); JP_F_00121840(c);
SET64(2, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(3, RD(4) ^ 0x2);
{ int t = RD(3) == RD(0); SET64(5, RD(4) < (u64)(s64)2); if (t) goto L_001223CC; }
{ int t = RD(5) != RD(0); SET64(31, rd64(c, (RW(29) + 48))); if (t) goto L_001223D0; }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(3) != RD(0); SET64(3, RD(4) ^ 0x4); if (t) goto L_001223D0; }
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_001223D0; }
SET64(4, (s32)rd32(c, (RW(29) + 8)));
SET64(2, RD(0) + RD(0));
{ int t = RSD(4) < 0; SET64(3, RSD(4) < (s64)32); if (t) goto L_001223D0; }
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_001223D0; }
SET64(2, RSD(4) < (s64)61);
{ int t = RD(2) != RD(0); SET32(3, RW(0) + 60); if (t) goto L_001223B8; }
SET64(2, rd64(c, (RW(29) + 16)));
SET32(3, RW(4) + -60);
SET64(2, RD(2) << (RW(3) & 63)); goto L_001223C4;
L_001223B8:;
SET64(2, rd64(c, (RW(29) + 16)));
SET32(3, RW(3) - RW(4));
SET64(2, RD(2) >> (RW(3) & 63));
L_001223C4:;
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
L_001223CC:;
SET64(31, rd64(c, (RW(29) + 48)));
L_001223D0:;
SET32(29, RW(29) + 64); return;
}

void JP_F_001223D8(Ctx *c) { /* func_001223D8 */
ENTER(0x1223d8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET64(31, 0x1223f4); SET32(4, RW(0) + 1); JP_F_00122F20(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0012242C; }
SET64(31, 0x122404);  JP_F_001186A0(c);
SET64(3, (s64)(s32)0x510000);
SET64(4, (s64)(s32)0x510000);
SET64(16, (s32)rd32(c, (RW(3) + -3200)));
wr32(c, (RW(3) + -3200), RW(17));
wr32(c, (RW(4) + -3196), RW(28));
{ int t = RD(2) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_0012242C; }
SET64(31, 0x122428);  JP_F_001186F8(c);
SET64(2, RD(16) + RD(0));
L_0012242C:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00122440(Ctx *c) { /* func_00122440 */
ENTER(0x122440);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 11);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(16, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(4, (s64)(s32)0x3e0000);
wr32(c, (RW(16) + -6504), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + -6504)));
wr32(c, (RW(4) + -6500), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + -6504)));
{ int t = RD(3) != RD(5); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00122488; }
wr32(c, (RW(16) + -6504), RW(0));
SET64(2, (s64)(s32)0x3e0000);
wr32(c, (RW(2) + -6540), RW(0));
SET64(31, rd64(c, (RW(29) + 16))); goto L_001224D4;
L_00122488:;
SET64(4, (s32)rd32(c, (RW(2) + -6552)));
SET64(31, 0x122494);  JP_F_0010F690(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + -6572)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x510000); if (t) goto L_001224C4; }
SET64(3, (s32)rd32(c, (RW(2) + -3200)));
{ int t = RD(3) == RD(0); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_001224C4; }
SET64(4, (s32)rd32(c, (RW(2) + -6560)));
SET64(31, 0x1224bc);  JP_F_0010F690(c);
 goto L_001224CC;
L_001224C4:;
SET64(2, (s64)(s32)0x3e0000);
wr32(c, (RW(2) + -6540), RW(0));
L_001224CC:;
wr32(c, (RW(16) + -6504), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
L_001224D4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001224E0(Ctx *c) { /* func_001224E0 */
ENTER(0x1224e0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 128), RD(30));
wr64(c, (RW(29) + 112), RD(23));
SET64(30, (s64)(s32)0x510000);
wr64(c, (RW(29) + 96), RD(22));
SET64(23, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 80), RD(21));
SET64(22, (s64)(s32)0x420000);
wr64(c, (RW(29) + 64), RD(20));
SET64(21, (s64)(s32)0x510000);
wr64(c, (RW(29) + 48), RD(19));
SET64(20, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 32), RD(18));
SET64(19, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 16), RD(17));
SET64(18, (s64)(s32)0x510000);
wr64(c, (RW(29) + 144), RD(31));
SET64(17, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 0), RD(16));
SET64(2, (s64)(s32)0x3e0000);
L_00122530:;
SET64(31, 0x122538); SET64(4, (s32)rd32(c, (RW(2) + -6560))); JP_F_0010F6A0(c);
SET64(3, (s32)rd32(c, (RW(20) + -6504)));
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2); SET64(2, (s32)rd32(c, (RW(23) + -6576))); if (t) goto L_00122564; }
wr32(c, (RW(19) + -6540), RW(0));
SET64(2, (s64)(s32)0x3e0000);
wr32(c, (RW(20) + -6504), RW(0));
wr32(c, (RW(2) + -6572), RW(0));
SET64(31, 0x122560); wr32(c, (RW(30) + -3180), RW(0)); JP_F_0010F4A0(c);
SET64(2, (s32)rd32(c, (RW(23) + -6576)));
L_00122564:;
{ int t = RSD(2) <= 0; SET32(4, RW(22) + -8400); if (t) goto L_00122578; }
SET64(5, (s32)rd32(c, (RW(18) + -3200)));
SET64(31, 0x122578); SET64(6, (s32)rd32(c, (RW(17) + -6500))); JP_F_00111888(c);
L_00122578:;
SET64(3, (s32)rd32(c, (RW(18) + -3200)));
{ int t = RD(3) == RD(0);  if (t) goto L_001225A4; }
SET64(2, (s32)rd32(c, (RW(17) + -6500)));
{ int t = RD(2) == RD(0);  if (t) goto L_001225A4; }
SET64(16, RD(28) + RD(0));
SET64(28, (s32)rd32(c, (RW(21) + -3196)));
{ u32 t = RW(3); SET64(31, 0x1225a0); SET64(4, (s32)rd32(c, (RW(17) + -6500))); rt_call(c, t); }
SET64(28, RD(16) + RD(0));
L_001225A4:;
wr32(c, (RW(19) + -6540), RW(0));
SET64(2, (s64)(s32)0x3e0000); { POLL(); goto L_00122530; }
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 16), RD(17));
SET64(20, (s64)(s32)0x3e0000);
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(19));
wr64(c, (RW(29) + 32), RD(18));
SET32(19, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(18, RD(5) + RD(0));
SET64(4, (s32)rd32(c, (RW(20) + -6572)));
SET64(16, RD(6) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 80), RD(31)); if (t) goto L_0012264C; }
SET64(31, 0x1225f0);  JP_F_0010F550(c);
SET64(3, (s64)(s32)0x510000);
SET64(5, (s64)(s32)0x510000);
wr32(c, (RW(3) + -3176), RW(2));
SET64(4, RD(2) + RD(0));
SET64(31, 0x122608); SET32(5, RW(5) + -3168); JP_F_0010F560(c);
SET64(3, (s64)(s32)0x510000);
SET64(2, (s64)(s32)0x120000);
SET32(3, RW(3) + -3120);
SET32(2, RW(2) + 9440);
wr32(c, (RW(3) + 12), RW(16));
SET64(4, RD(3) + RD(0));
wr32(c, (RW(3) + 4), RW(2));
wr32(c, (RW(3) + 8), RW(18));
wr32(c, (RW(3) + 20), RW(17));
SET64(31, 0x122634); wr32(c, (RW(3) + 16), RW(0)); JP_F_0010F460(c);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(20) + -6572), RW(2));
SET64(31, 0x122644); SET64(4, RD(2) + RD(0)); JP_F_0010F480(c);
SET64(2, RD(19) + RD(0)); goto L_0012265C;
L_0012264C:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x122658); SET64(19, RD(0) + RD(0)); JP_F_0010F4F0(c);
SET64(2, RD(19) + RD(0));
L_0012265C:;
SET64(31, rd64(c, (RW(29) + 80)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 96); return;
}

void JP_F_00122680(Ctx *c) { /* func_00122680 */
ENTER(0x122680);
SET64(5, (s64)(s32)0x20000000);
SET64(7, RD(4) | RD(5));
SET64(2, (s32)rd32(c, (RW(7) + 0)));
{ int t = RSD(2) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_001226E0; }
SET64(9, (s32)rd32(c, (RW(7) + 8)));
{ int t = RSD(2) <= 0; SET64(10, RD(9) | RD(5)); if (t) goto L_001226E0; }
SET32(8, RW(7) + 16);
SET64(11, (s64)(s32)0x3e0000);
SET32(2, RW(8) + RW(6));
L_001226B0:;
SET32(5, RW(10) + RW(6));
SET64(3, rd8(c, (RW(2) + 0)));
SET32(4, RW(9) + RW(6));
SET32(6, RW(6) + 1);
wr8(c, (RW(5) + 0), (u8)RW(3));
wr8(c, (RW(4) + 0), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(7) + 0)));
SET64(2, RSD(6) < RSD(2));
{ int t = RD(2) != RD(0); SET32(2, RW(8) + RW(6)); if (t) { POLL(); goto L_001226B0; } }
SET64(3, (s32)rd32(c, (RW(7) + 4))); goto L_001226E8;
L_001226E0:;
SET64(11, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(7) + 4)));
L_001226E8:;
{ int t = RSD(3) <= 0; SET64(2, (s64)(s32)0x20000000); if (t) goto L_00122730; }
SET64(9, (s32)rd32(c, (RW(7) + 12)));
SET64(6, RD(0) + RD(0));
{ int t = RSD(3) <= 0; SET64(10, RD(9) | RD(2)); if (t) goto L_00122730; }
SET32(8, RW(7) + 80);
SET32(2, RW(8) + RW(6));
L_00122708:;
SET32(5, RW(10) + RW(6));
SET64(3, rd8(c, (RW(2) + 0)));
SET32(4, RW(9) + RW(6));
SET32(6, RW(6) + 1);
wr8(c, (RW(5) + 0), (u8)RW(3));
wr8(c, (RW(4) + 0), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(7) + 4)));
SET64(2, RSD(6) < RSD(2));
{ int t = RD(2) != RD(0); SET32(2, RW(8) + RW(6)); if (t) { POLL(); goto L_00122708; } }
L_00122730:;
SET32(4, RW(11) + -6504); { JP_F_00122440(c); return; }
}

void JP_F_00122738(Ctx *c) { /* func_00122738 */
ENTER(0x122738);
SET32(29, RW(29) + -96);
SET32(3, RW(0) + -1);
wr64(c, (RW(29) + 48), RD(17));
SET64(17, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 80), RD(31));
SET64(2, (s32)rd32(c, (RW(17) + -6552)));
wr64(c, (RW(29) + 64), RD(18));
{ int t = RD(2) == RD(3); wr64(c, (RW(29) + 32), RD(16)); if (t) goto L_00122780; }
SET64(16, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(16) + -6548)));
{ int t = RD(2) == RD(3); SET64(18, (s64)(s32)0x3e0000); if (t) goto L_00122784; }
SET64(2, (s32)rd32(c, (RW(18) + -6544)));
{ int t = RD(2) != RD(3); SET64(31, rd64(c, (RW(29) + 80))); if (t) goto L_001227DC; }
SET32(2, RW(0) + 1); goto L_0012278C;
L_00122780:;
SET64(16, (s64)(s32)0x3e0000);
L_00122784:;
SET64(18, (s64)(s32)0x3e0000);
SET32(2, RW(0) + 1);
L_0012278C:;
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 4), RW(2));
SET64(4, RD(29) + RD(0));
SET64(31, 0x1227a0); wr32(c, (RW(29) + 8), RW(2)); JP_F_0010F660(c);
SET64(4, RD(29) + RD(0));
SET64(31, 0x1227ac); wr32(c, (RW(17) + -6552), RW(2)); JP_F_0010F660(c);
SET64(4, RD(29) + RD(0));
SET64(31, 0x1227b8); wr32(c, (RW(16) + -6548), RW(2)); JP_F_0010F660(c);
wr32(c, (RW(18) + -6544), RW(2));
SET64(4, RD(29) + RD(0));
SET64(31, 0x1227c8); wr32(c, (RW(29) + 8), RW(0)); JP_F_0010F660(c);
SET64(3, (s64)(s32)0x3e0000);
wr32(c, (RW(3) + -6560), RW(2));
SET64(2, (s64)(s32)0x3e0000);
wr32(c, (RW(2) + -6540), RW(0));
SET64(31, rd64(c, (RW(29) + 80)));
L_001227DC:;
SET64(18, rd64(c, (RW(29) + 64)));
SET64(17, rd64(c, (RW(29) + 48)));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 96); return;
}

void JP_F_001227F0(Ctx *c) { /* func_001227F0 */
ENTER(0x1227f0);
SET64(2, (s64)(s32)0x3e0000);
SET32(29, RW(29) + -32);
SET64(3, (s32)rd32(c, (RW(2) + -6572)));
wr64(c, (RW(29) + 16), RD(31));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 0), RD(16)); if (t) goto L_00122828; }
SET64(3, (s64)(s32)0x3e0000);
SET32(2, RW(0) + -1);
wr32(c, (RW(3) + -6504), RW(2));
SET64(16, (s64)(s32)0x3e0000);
SET64(31, 0x122820); SET64(4, (s32)rd32(c, (RW(16) + -6560))); JP_F_0010F680(c);
SET64(2, (s64)(s32)0x3e0000); goto L_00122830;
L_00122828:;
SET64(16, (s64)(s32)0x3e0000);
SET64(2, (s64)(s32)0x3e0000);
L_00122830:;
SET64(31, 0x122838); SET64(4, (s32)rd32(c, (RW(2) + -6552))); JP_F_0010F670(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(31, 0x122844); SET64(4, (s32)rd32(c, (RW(3) + -6548))); JP_F_0010F670(c);
SET64(3, (s64)(s32)0x3e0000);
SET64(31, 0x122850); SET64(4, (s32)rd32(c, (RW(3) + -6544))); JP_F_0010F670(c);
SET64(31, 0x122858); SET64(4, (s32)rd32(c, (RW(16) + -6560))); JP_F_0010F670(c);
SET64(31, 0x122860);  JP_F_001186A0(c);
SET64(4, (s64)(s32)0x80000000);
SET64(16, RD(2) + RD(0));
SET64(31, 0x122870); SET64(4, RD(4) | 0x12); JP_F_00111CC0(c);
{ int t = RD(16) == RD(0); SET64(31, rd64(c, (RW(29) + 16))); if (t) goto L_00122884; }
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); { JP_F_001186F8(c); return; }
L_00122884:;
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00122890(Ctx *c) { /* func_00122890 */
ENTER(0x122890);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 0), RD(16));
SET64(18, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + -6528)));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
{ int t = RSD(3) >= 0; wr64(c, (RW(29) + 16), RD(17)); if (t) goto L_001228C0; }
SET64(31, 0x1228c0);  JP_F_00122968(c);
L_001228C0:;
SET64(31, 0x1228c8);  JP_F_001186A0(c);
SET64(5, (s64)(s32)0x510000);
SET64(4, (s64)(s32)0x510000);
SET64(17, (s32)rd32(c, (RW(5) + -3192)));
SET64(3, (s64)(s32)0x510000);
wr32(c, (RW(4) + -3184), RW(16));
wr32(c, (RW(5) + -3192), RW(18));
wr32(c, (RW(3) + -3188), RW(28));
{ int t = RD(2) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_001228F8; }
SET64(31, 0x1228f4);  JP_F_001186F8(c);
SET64(2, RD(17) + RD(0));
L_001228F8:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00122910(Ctx *c) { /* func_00122910 */
ENTER(0x122910);
SET64(2, (s64)(s32)0x510000);
SET32(29, RW(29) + -32);
SET64(5, (s32)rd32(c, (RW(2) + -3192)));
wr64(c, (RW(29) + 16), RD(31));
{ int t = RD(5) == RD(0); wr64(c, (RW(29) + 0), RD(16)); if (t) goto L_00122954; }
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -6556)));
{ int t = RD(3) != RD(0); SET64(31, rd64(c, (RW(29) + 16))); if (t) goto L_00122958; }
SET64(2, (s64)(s32)0x510000);
SET64(16, RD(28) + RD(0));
SET64(28, (s32)rd32(c, (RW(2) + -3188)));
SET64(3, (s64)(s32)0x510000);
{ u32 t = RW(5); SET64(31, 0x122950); SET64(4, (s32)rd32(c, (RW(3) + -3184))); rt_call(c, t); }
SET64(28, RD(16) + RD(0));
L_00122954:;
SET64(31, rd64(c, (RW(29) + 16)));
L_00122958:;
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00122968(Ctx *c) { /* func_00122968 */
ENTER(0x122968);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(17));
SET32(18, RW(0) + 1);
SET64(17, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x12298c); wr32(c, (RW(17) + -6556), RW(18)); JP_F_001186A0(c);
SET64(5, (s64)(s32)0x120000);
SET64(4, (s64)(s32)0x80000000);
SET64(16, RD(2) + RD(0));
SET32(5, RW(5) + 10512);
SET64(4, RD(4) | 0x12);
SET64(31, 0x1229a8); SET64(6, RD(0) + RD(0)); JP_F_00111C48(c);
{ int t = RD(16) == RD(0); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_001229BC; }
SET64(31, 0x1229b8);  JP_F_001186F8(c);
SET64(2, (s64)(s32)0x3e0000);
L_001229BC:;
wr32(c, (RW(17) + -6556), RW(0));
wr32(c, (RW(2) + -6528), RW(18));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(2, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_001229E0(Ctx *c) { hle_sceCdSearchFile(c); } /* func_001229E0 */

void JP_F_00122CF8(Ctx *c) { /* func_00122CF8 */
ENTER(0x122cf8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x122d08); SET64(6, RD(0) + RD(0)); JP_F_001229E0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00122D18(Ctx *c) { /* func_00122D18 */
ENTER(0x122d18);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(16, (s64)(s32)0x3e0000);
SET64(31, 0x122d38); wr64(c, (RW(29) + 32), RD(18)); JP_F_00122738(c);
SET64(4, (s32)rd32(c, (RW(16) + -6552)));
SET64(31, 0x122d44);  JP_F_0010F6B0(c);
SET64(3, (s32)rd32(c, (RW(16) + -6552)));
{ int t = RD(3) == RD(2); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00122D78; }
SET64(3, (s32)rd32(c, (RW(2) + -6576)));
{ int t = RSD(3) <= 0; SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00122DB0; }
SET64(4, (s64)(s32)0x420000);
SET64(6, (s32)rd32(c, (RW(2) + -6564)));
SET32(4, RW(4) + -8248);
SET64(31, 0x122d70); SET64(5, RD(17) + RD(0)); JP_F_00111888(c);
SET64(2, RD(0) + RD(0)); goto L_00122E70;
L_00122D78:;
SET64(2, (s64)(s32)0x510000);
SET64(3, (s64)(s32)0x3e0000);
SET64(4, (s32)rd32(c, (RW(2) + -3176)));
SET64(5, (s64)(s32)0x510000);
wr32(c, (RW(3) + -6564), RW(17));
SET64(31, 0x122d94); SET32(5, RW(5) + -3168); JP_F_0010F560(c);
SET64(31, 0x122d9c); SET32(4, RW(0) + 1); JP_F_00122F20(c);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00122DB8; }
SET64(4, (s32)rd32(c, (RW(16) + -6552)));
SET64(31, 0x122db0);  JP_F_0010F680(c);
L_00122DB0:;
SET64(2, RD(0) + RD(0)); goto L_00122E70;
L_00122DB8:;
SET64(31, 0x122dc0); SET64(18, (s64)(s32)0x3e0000); JP_F_001120C0(c);
SET64(2, (s32)rd32(c, (RW(18) + -6532)));
{ int t = RSD(2) >= 0; SET32(2, RW(0) + 1); if (t) goto L_00122E70; }
SET64(17, (s64)(s32)0x3e0000); goto L_00122DFC;
L_00122DD8:;
SET64(2, (s64)(s32)0x100000);
SET32(3, RW(0) + -1);
L_00122DE0:;
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_00122DE0; } }
L_00122DFC:;
SET32(16, RW(17) + -2032);
L_00122E00:;
SET64(5, (s64)(s32)0x80000000);
SET64(4, RD(16) + RD(0));
SET64(5, RD(5) | 0x595);
SET64(31, 0x122e14); SET64(6, RD(0) + RD(0)); JP_F_00112858(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + 36))); goto L_00122E64; }
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -6576)));
{ int t = RSD(3) <= 0; SET64(2, (s64)(s32)0x100000); if (t) goto L_00122E3C; }
SET64(4, (s64)(s32)0x420000);
SET64(31, 0x122e38); SET32(4, RW(4) + -8208); JP_F_00111888(c);
SET64(2, (s64)(s32)0x100000);
L_00122E3C:;
SET32(3, RW(0) + -1);
L_00122E40:;
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_00122E40; } }
SET32(16, RW(17) + -2032); { POLL(); goto L_00122E00; }
L_00122E64:;
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) { POLL(); goto L_00122DD8; } }
wr32(c, (RW(18) + -6532), RW(0));
L_00122E70:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00122E88(Ctx *c) { /* func_00122E88 */
ENTER(0x122e88);
SET32(29, RW(29) + -48);
SET32(4, RW(0) + 2);
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x122e9c); wr64(c, (RW(29) + 16), RD(16)); JP_F_00122D18(c);
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00122EAC; }
SET64(2, RD(0) + RD(0)); goto L_00122F10;
L_00122EAC:;
SET64(4, (s64)(s32)0x3e0000);
SET32(16, RW(2) + -6464);
SET32(4, RW(4) + -2032);
wr32(c, (RW(29) + 0), RW(0));
SET32(5, RW(0) + 14);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(9, RD(16) + RD(0));
SET32(10, RW(0) + 4);
SET64(31, 0x122edc); SET64(11, RD(0) + RD(0)); JP_F_00112A28(c);
{ int t = RSD(2) >= 0; SET64(3, (s64)(s32)0x3e0000); if (t) goto L_00122EF8; }
SET64(2, (s64)(s32)0x3e0000);
SET64(31, 0x122ef0); SET64(4, (s32)rd32(c, (RW(2) + -6552))); JP_F_0010F680(c);
SET64(2, RD(0) + RD(0)); goto L_00122F10;
L_00122EF8:;
SET64(2, (s64)(s32)0x20000000);
SET64(2, RD(16) | RD(2));
SET64(4, (s32)rd32(c, (RW(3) + -6552)));
SET64(31, 0x122f0c); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_0010F680(c);
SET64(2, RD(16) + RD(0));
L_00122F10:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00122F20(Ctx *c) { hle_sceCdSync(c); } /* func_00122F20 */

void JP_F_00122FC0(Ctx *c) { /* func_00122FC0 */
ENTER(0x122fc0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(16)); if (t) goto L_00123010; }
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -6576)));
{ int t = RSD(3) <= 0; SET64(4, (s64)(s32)0x420000); if (t) goto L_00122FE8; }
SET64(31, 0x122fe8); SET32(4, RW(4) + -8168); JP_F_00111888(c);
L_00122FE8:;
SET64(16, (s64)(s32)0x3e0000); goto L_00122FF8;
L_00122FF0:;
SET64(31, 0x122ff8); SET32(4, RW(0) + 4000); JP_F_001106C0(c);
L_00122FF8:;
SET64(31, 0x123000); SET32(4, RW(16) + 448); JP_F_00112C20(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) { POLL(); goto L_00122FF0; } }
SET64(31, rd64(c, (RW(29) + 16))); goto L_00123020;
L_00123010:;
SET64(4, (s64)(s32)0x3e0000);
SET64(31, 0x12301c); SET32(4, RW(4) + 448); JP_F_00112C20(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_00123020:;
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00123030(Ctx *c) { /* func_00123030 */
ENTER(0x123030);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(16, (s64)(s32)0x3e0000);
SET64(31, 0x123050); wr64(c, (RW(29) + 32), RD(18)); JP_F_00122738(c);
SET64(4, (s32)rd32(c, (RW(16) + -6548)));
SET64(31, 0x12305c);  JP_F_0010F6B0(c);
SET64(3, (s32)rd32(c, (RW(16) + -6548)));
{ int t = RD(3) == RD(2); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00123090; }
SET64(3, (s32)rd32(c, (RW(2) + -6576)));
{ int t = RSD(3) <= 0; SET64(2, (s64)(s32)0x3e0000); if (t) goto L_001230C8; }
SET64(4, (s64)(s32)0x420000);
SET64(6, (s32)rd32(c, (RW(2) + -6568)));
SET32(4, RW(4) + -8152);
SET64(31, 0x123088); SET64(5, RD(17) + RD(0)); JP_F_00111888(c);
SET64(2, RD(0) + RD(0)); goto L_00123188;
L_00123090:;
SET64(2, (s64)(s32)0x510000);
SET64(3, (s64)(s32)0x3e0000);
SET64(4, (s32)rd32(c, (RW(2) + -3176)));
SET64(5, (s64)(s32)0x510000);
wr32(c, (RW(3) + -6568), RW(17));
SET64(31, 0x1230ac); SET32(5, RW(5) + -3168); JP_F_0010F560(c);
SET64(31, 0x1230b4); SET32(4, RW(0) + 1); JP_F_00122FC0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_001230D0; }
SET64(4, (s32)rd32(c, (RW(16) + -6548)));
SET64(31, 0x1230c8);  JP_F_0010F680(c);
L_001230C8:;
SET64(2, RD(0) + RD(0)); goto L_00123188;
L_001230D0:;
SET64(31, 0x1230d8); SET64(18, (s64)(s32)0x3e0000); JP_F_001120C0(c);
SET64(2, (s32)rd32(c, (RW(18) + -6516)));
{ int t = RSD(2) >= 0; SET32(2, RW(0) + 1); if (t) goto L_00123188; }
SET64(17, (s64)(s32)0x3e0000); goto L_00123114;
L_001230F0:;
SET64(2, (s64)(s32)0x100000);
SET32(3, RW(0) + -1);
L_001230F8:;
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_001230F8; } }
L_00123114:;
SET32(16, RW(17) + 448);
L_00123118:;
SET64(5, (s64)(s32)0x80000000);
SET64(4, RD(16) + RD(0));
SET64(5, RD(5) | 0x593);
SET64(31, 0x12312c); SET64(6, RD(0) + RD(0)); JP_F_00112858(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + 36))); goto L_0012317C; }
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + -6576)));
{ int t = RSD(3) <= 0; SET64(2, (s64)(s32)0x100000); if (t) goto L_00123154; }
SET64(4, (s64)(s32)0x420000);
SET64(31, 0x123150); SET32(4, RW(4) + -8112); JP_F_00111888(c);
SET64(2, (s64)(s32)0x100000);
L_00123154:;
SET32(3, RW(0) + -1);
L_00123158:;
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_00123158; } }
SET32(16, RW(17) + 448); { POLL(); goto L_00123118; }
L_0012317C:;
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) { POLL(); goto L_001230F0; } }
wr32(c, (RW(18) + -6516), RW(0));
L_00123188:;
SET64(31, rd64(c, (RW(29) + 48)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 64); return;
}

void JP_F_001231A0(Ctx *c) { /* func_001231A0 */
ENTER(0x1231a0);
SET64(2, RD(0) | 0x8001);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00123240; }
SET64(2, RD(0) | 0x8003);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00123238; }
SET64(2, RD(0) | 0x8002);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00123230; }
SET64(2, RD(0) | 0x8004);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00123228; }
SET64(2, RD(0) | 0x8011);
{ int t = RD(4) == RD(2); SET64(2, RD(0) | 0x8013); if (t) goto L_00123218; }
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00123210; }
SET64(2, RD(0) | 0x8012);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0x3e0000); if (t) goto L_00123208; }
SET64(2, RD(0) | 0x8014);
if (RD(4) != RD(2)) { SET64(2, RD(0) + RD(0)); goto L_00123244; }
SET64(2, (s64)(s32)0x3e0000);
SET32(2, RW(2) + 448); goto L_00123244;
L_00123208:;
SET32(2, RW(2) + -896); goto L_00123244;
L_00123210:;
SET32(2, RW(2) + -1984); goto L_00123244;
L_00123218:;
SET64(2, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(2) + -6548)));
wr32(c, (RW(5) + 0), RW(2)); goto L_00123248;
L_00123228:;
SET32(2, RW(2) + -2032); goto L_00123244;
L_00123230:;
SET32(2, RW(2) + -6336); goto L_00123244;
L_00123238:;
SET32(2, RW(2) + -6464); goto L_00123244;
L_00123240:;
SET64(2, (s32)rd32(c, (RW(2) + -6552)));
L_00123244:;
wr32(c, (RW(5) + 0), RW(2));
L_00123248:;
SET32(2, RW(0) + 1); return;
}

void JP_F_00123250(Ctx *c) { hle_sceCdInit(c); } /* func_00123250 */

void JP_F_00123530(Ctx *c) { hle_sceCdDiskReady(c); } /* func_00123530 */

void JP_F_00123728(Ctx *c) { hle_sceCdDiskReady(c); } /* func_00123728 */

void JP_F_00123930(Ctx *c) { hle_sceCdRead(c); } /* func_00123930 */

void JP_F_00123B10(Ctx *c) { /* func_00123B10 */
ENTER(0x123b10);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 48), RD(18));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(17));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x123b30); SET64(17, (s64)(s32)0x3e0000); JP_F_00122E88(c);
SET32(3, RW(0) + 6);
{ int t = RD(2) == RD(3); SET32(18, RW(17) + -6336); if (t) goto L_00123BC0; }
SET64(31, 0x123b44); SET32(4, RW(0) + 9); JP_F_00122D18(c);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_00123BC0; }
wr32(c, (RW(17) + -6336), RW(16));
SET32(5, RW(0) + 4);
SET64(31, 0x123b5c); SET64(16, (s64)(s32)0x3e0000); JP_F_00112010(c);
SET64(17, (s64)(s32)0x3e0000);
SET32(5, RW(16) + -6504);
SET32(2, RW(0) + 4);
wr32(c, (RW(16) + -6504), RW(2));
SET32(3, RW(0) + 1);
SET64(4, (s64)(s32)0x3e0000);
SET64(11, (s64)(s32)0x120000);
wr32(c, (RW(29) + 0), RW(5));
SET32(4, RW(4) + -2032);
wr32(c, (RW(17) + -6540), RW(3));
SET64(7, RD(18) + RD(0));
SET32(11, RW(11) + 9280);
SET32(5, RW(0) + 5);
SET32(6, RW(0) + 1);
SET32(8, RW(0) + 4);
SET64(9, RD(0) + RD(0));
SET64(31, 0x123ba4); SET64(10, RD(0) + RD(0)); JP_F_00112A28(c);
if (RSD(2) >= 0) { SET32(2, RW(0) + 1); goto L_00123BC4; }
wr32(c, (RW(16) + -6504), RW(0));
SET64(2, (s64)(s32)0x3e0000);
wr32(c, (RW(17) + -6540), RW(0));
SET64(31, 0x123bc0); SET64(4, (s32)rd32(c, (RW(2) + -6552))); JP_F_0010F680(c);
L_00123BC0:;
SET64(2, RD(0) + RD(0));
L_00123BC4:;
SET64(31, rd64(c, (RW(29) + 64)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00123BE0(Ctx *c) { hle_sceCdGetDiskType(c); } /* func_00123BE0 */

void JP_F_00123C78(Ctx *c) { hle_sceCdGetError(c); } /* func_00123C78 */

void JP_F_00123D10(Ctx *c) { hle_sceCdBreak(c); } /* func_00123D10 */

void JP_F_00123DC8(Ctx *c) { hle_sceCdMmode(c); } /* func_00123DC8 */

static void JP_B_00123E98(Ctx *c, u32 entry) { /* func_00123E98 */
ENTER(entry);
switch (entry) { case 0x123eb0: goto L_00123EB0; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x123ea8); SET32(4, RW(0) + 6); JP_F_00129AA8(c);
SET64(31, 0x123eb0); SET32(4, RW(0) + 1); JP_F_00100218(c);
L_00123EB0:;
{ int t = RSD(4) >= 0; SET64(2, RD(4) + RD(0)); if (t) goto L_00123EBC; }
SET32(2, RW(0) - RW(2));
L_00123EBC:;
 return;
}
void JP_F_00123E98(Ctx *c) { JP_B_00123E98(c, 0x123e98); }
void JP_F_00123EB0(Ctx *c) { JP_B_00123E98(c, 0x123eb0); }

void JP_F_00123EC8(Ctx *c) { /* func_00123EC8 */
ENTER(0x123ec8);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0012BB28(c); return; }
}

void JP_F_00123EE0(Ctx *c) { /* func_00123EE0 */
ENTER(0x123ee0);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x123ef4); SET32(6, RW(0) + 10); JP_F_0012BDB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET32(29, RW(29) + 16); return;
}

void JP_F_00123F08(Ctx *c) { /* func_00123F08 */
ENTER(0x123f08);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 10);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0012BDB0(c); return; }
}

void JP_F_00123F28(Ctx *c) { /* func_00123F28 */
ENTER(0x123f28);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x123f3c); mul_s(c, 0, 5, RSW(5), RSW(6)); JP_F_00126940(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET32(3, RW(0) + -4); if (t) goto L_00123FCC; }
SET64(2, (s32)rd32(c, (RW(16) + -4)));
SET64(2, RD(2) & RD(3));
SET32(7, RW(2) + -4);
SET64(5, RD(0) + RD(0));
SET64(2, RD(7) < (u64)(s64)37);
SET64(6, RD(7) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(8, RD(7) < (u64)(s64)20); if (t) goto L_00123FC0; }
{ int t = RD(8) != RD(0); SET64(3, RD(16) + RD(0)); if (t) goto L_00123FA8; }
SET64(2, RD(7) < (u64)(s64)28);
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 4), RW(0));
{ int t = RD(2) != RD(0); SET32(3, RW(16) + 8); if (t) goto L_00123FA8; }
SET64(2, RD(7) < (u64)(s64)36);
wr32(c, (RW(3) + 0), RW(0));
SET32(3, RW(16) + 16);
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 12), RW(0)); if (t) goto L_00123FA8; }
wr32(c, (RW(3) + 0), RW(0));
SET32(3, RW(16) + 24);
wr32(c, (RW(16) + 20), RW(0));
L_00123FA8:;
wr32(c, (RW(3) + 0), RW(0));
SET32(3, RW(3) + 4);
wr32(c, (RW(3) + 4), RW(0));
wr32(c, (RW(3) + 0), RW(0)); goto L_00123FC8;
L_00123FC0:;
SET64(31, 0x123fc8);  JP_F_001273D0(c);
L_00123FC8:;
SET64(2, RD(16) + RD(0));
L_00123FCC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00123FE0(Ctx *c) { /* func_00123FE0 */
ENTER(0x123fe0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(2) + 12224);
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x124008); wr32(c, (RW(17) + 0), RW(0)); JP_F_0010FD48(c);
SET64(4, RD(2) + RD(0));
SET32(3, RW(0) + -1);
if (RD(4) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00124028; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
if (RD(3) != RD(0)) { wr32(c, (RW(16) + 0), RW(3)); goto L_00124024; }
L_00124024:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00124028:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00124038(Ctx *c) { /* func_00124038 */
ENTER(0x124038);
SET32(29, RW(29) + -64);
SET64(14, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(31));
SET64(16, (s32)rd32(c, (RW(14) + 16)));
SET64(3, (s32)rd32(c, (RW(20) + 16)));
SET64(3, RSD(3) < RSD(16));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0012423C; }
SET32(16, RW(16) + -1);
SET32(11, RW(14) + 20);
SET32(2, RW(16) << 2);
SET32(17, RW(20) + 20);
SET32(19, RW(11) + RW(2));
SET32(9, RW(17) + RW(2));
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET64(22, RD(11) + RD(0));
SET64(13, (s32)rd32(c, (RW(9) + 0)));
SET64(10, RD(17) + RD(0));
SET32(3, RW(3) + 1);
div_u(c, 0, RW(13), RW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x1240ac); goto L_001240B0; }
L_001240B0:;
SET64(21, c->lo.d[0]);
SET64(18, RD(21) + RD(0));
{ int t = RD(18) == RD(0); SET64(12, RD(0) + RD(0)); if (t) goto L_00124168; }
SET64(3, RD(0) + RD(0));
L_001240C8:;
SET64(4, (s32)rd32(c, (RW(11) + 0)));
SET32(11, RW(11) + 4);
SET64(6, (s32)rd32(c, (RW(10) + 0)));
SET64(7, RD(19) < RD(11));
SET64(2, RD(4) & 0xffff);
SET32(4, RW(4) >> 16);
mul_s(c, 0, 5, RSW(2), RSW(18));
mul_s(c, 0, 4, RSW(4), RSW(18));
SET32(2, RW(5) + RW(3));
SET64(3, RD(6) & 0xffff);
SET64(5, RD(2) & 0xffff);
SET32(2, RW(2) >> 16);
SET32(8, RW(4) + RW(2));
SET32(3, RW(3) - RW(5));
SET32(3, RW(3) + RW(12));
SET32(6, RW(6) >> 16);
SET64(2, RD(8) & 0xffff);
SET32(12, RSW(3) >> 16);
SET32(6, RW(6) - RW(2));
wr16(c, (RW(10) + 0), (u16)RW(3));
SET32(5, RW(6) + RW(12));
SET32(3, RW(8) >> 16);
wr16(c, (RW(10) + 2), (u16)RW(5));
SET32(10, RW(10) + 4);
{ int t = RD(7) == RD(0); SET32(12, RSW(5) >> 16); if (t) { POLL(); goto L_001240C8; } }
if (RD(13) != RD(0)) { SET64(5, RD(14) + RD(0)); goto L_0012416C; }
SET32(9, RW(9) + -4); goto L_00124144;
L_00124140:;
SET32(16, RW(16) + -1);
L_00124144:;
SET64(2, RD(17) < RD(9));
if (RD(2) == RD(0)) { wr32(c, (RW(20) + 16), RW(16)); goto L_00124168; }
SET64(2, (s32)rd32(c, (RW(9) + 0)));
if (RD(2) == RD(0)) { SET32(9, RW(9) + -4); { POLL(); goto L_00124140; } }
wr32(c, (RW(20) + 16), RW(16));
L_00124168:;
SET64(5, RD(14) + RD(0));
L_0012416C:;
SET64(31, 0x124174); SET64(4, RD(20) + RD(0)); JP_F_00127E50(c);
{ int t = RSD(2) < 0; SET64(11, RD(22) + RD(0)); if (t) goto L_00124238; }
SET32(18, RW(21) + 1);
SET64(12, RD(0) + RD(0));
SET64(3, RD(0) + RD(0));
SET64(10, RD(17) + RD(0));
L_00124190:;
SET64(4, (s32)rd32(c, (RW(11) + 0)));
SET32(11, RW(11) + 4);
SET64(5, (s32)rd32(c, (RW(10) + 0)));
SET64(7, RD(19) < RD(11));
SET64(2, RD(4) & 0xffff);
SET32(6, RW(4) >> 16);
SET32(2, RW(2) + RW(3));
SET64(3, RD(5) & 0xffff);
SET64(4, RD(2) & 0xffff);
SET32(2, RW(2) >> 16);
SET32(8, RW(6) + RW(2));
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) + RW(12));
SET32(5, RW(5) >> 16);
SET64(2, RD(8) & 0xffff);
SET32(12, RSW(3) >> 16);
SET32(5, RW(5) - RW(2));
wr16(c, (RW(10) + 0), (u16)RW(3));
SET32(5, RW(5) + RW(12));
SET32(3, RW(8) >> 16);
wr16(c, (RW(10) + 2), (u16)RW(5));
SET32(10, RW(10) + 4);
{ int t = RD(7) == RD(0); SET32(12, RSW(5) >> 16); if (t) { POLL(); goto L_00124190; } }
SET32(2, RW(16) << 2);
SET32(9, RW(17) + RW(2));
SET64(3, (s32)rd32(c, (RW(9) + 0)));
{ int t = RD(3) != RD(0); SET64(2, RD(18) + RD(0)); if (t) goto L_0012423C; }
SET32(9, RW(9) + -4); goto L_00124214;
L_00124210:;
SET32(16, RW(16) + -1);
L_00124214:;
SET64(2, RD(17) < RD(9));
if (RD(2) == RD(0)) { wr32(c, (RW(20) + 16), RW(16)); goto L_00124238; }
SET64(2, (s32)rd32(c, (RW(9) + 0)));
if (RD(2) == RD(0)) { SET32(9, RW(9) + -4); { POLL(); goto L_00124210; } }
wr32(c, (RW(20) + 16), RW(16));
L_00124238:;
SET64(2, RD(18) + RD(0));
L_0012423C:;
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

static void JP_B_00124268(Ctx *c, u32 entry) { /* func_00124268 */
ENTER(entry);
switch (entry) { case 0x124690: goto L_00124690; case 0x1246a0: goto L_001246A0; case 0x1246a4: goto L_001246A4; case 0x1246c8: goto L_001246C8; case 0x1246cc: goto L_001246CC; }
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 96), RD(16));
SET64(16, RD(9) + RD(0));
wr64(c, (RW(29) + 128), RD(20));
SET64(20, RD(5) + RD(0));
wr64(c, (RW(29) + 152), RD(23));
SET64(23, RD(4) + RD(0));
wr64(c, (RW(29) + 104), RD(17));
wr64(c, (RW(29) + 112), RD(18));
wr64(c, (RW(29) + 120), RD(19));
wr64(c, (RW(29) + 136), RD(21));
wr64(c, (RW(29) + 144), RD(22));
wr64(c, (RW(29) + 160), RD(30));
wr64(c, (RW(29) + 168), RD(31));
wr32(c, (RW(29) + 8), RW(6));
SET64(11, (s32)rd32(c, (RW(23) + 64)));
wr32(c, (RW(29) + 12), RW(7));
wr32(c, (RW(29) + 16), RW(8));
{ int t = RD(11) == RD(0); wr32(c, (RW(29) + 20), RW(10)); if (t) goto L_001242DC; }
SET64(6, (s32)rd32(c, (RW(23) + 68)));
SET32(3, RW(0) + 1);
SET64(5, RD(11) + RD(0));
wr32(c, (RW(11) + 4), RW(6));
SET64(2, (s32)rd32(c, (RW(23) + 68)));
SET32(3, RW(3) << (RW(2) & 31));
SET64(31, 0x1242d8); wr32(c, (RW(11) + 8), RW(3)); JP_F_00127608(c);
wr32(c, (RW(23) + 64), RW(0));
L_001242DC:;
SET64(2, RD(20) >> 32);
SET64(4, RD(2) << 32);
SET64(4, RSD(4) >> 32);
if (RSD(4) >= 0) { wr32(c, (RW(16) + 0), RW(0)); goto L_0012431C; }
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, (s64)(s32)0xffff0000);
SET64(3, RD(3) >> 32);
SET64(2, RD(2) | 0xffff);
SET64(20, RD(20) & RD(3));
SET64(2, RD(4) & RD(2));
SET32(3, RW(0) + 1);
SET64(2, RD(2) << 32);
wr32(c, (RW(16) + 0), RW(3));
SET64(20, RD(20) | RD(2));
SET64(2, RD(20) >> 32);
L_0012431C:;
SET64(16, RD(2) << 32);
SET64(16, RSD(16) >> 32);
SET64(3, (s64)(s32)0x7ff00000);
SET64(2, RD(16) & RD(3));
{ int t = RD(2) != RD(3); SET64(4, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_00124388; }
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 12);
SET32(3, RW(0) + 9999);
SET64(2, RD(20) & RD(2));
{ int t = RD(2) != RD(0); wr32(c, (RW(4) + 0), RW(3)); if (t) goto L_00124358; }
SET64(2, (s64)(s32)0x420000);
SET32(21, RW(2) + -7632); goto L_00124360;
L_00124358:;
SET64(2, (s64)(s32)0x420000);
SET32(21, RW(2) + -7616);
L_00124360:;
SET64(2, (s32)rd32(c, (RW(29) + 20)));
{ int t = RD(2) == RD(0); SET32(3, RW(21) + 8); if (t) goto L_001243C8; }
SET64(2, (s8)rd8(c, (RW(21) + 3)));
SET32(4, RW(21) + 3);
if (RD(2) == 0) SET64(3, RD(4));
SET64(4, (s32)rd32(c, (RW(29) + 20)));
wr32(c, (RW(4) + 0), RW(3)); goto L_001243C8;
L_00124388:;
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x124398);  JP_F_00122108(c);
{ int t = RD(2) != RD(0); SET64(4, RD(23) + RD(0)); if (t) goto L_001243D0; }
SET64(4, (s32)rd32(c, (RW(29) + 16)));
SET32(2, RW(0) + 1);
SET64(3, (s64)(s32)0x420000);
wr32(c, (RW(4) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 20)));
{ int t = RD(2) == RD(0); SET32(21, RW(3) + -7608); if (t) goto L_001243C8; }
SET64(3, (s32)rd32(c, (RW(29) + 20)));
SET32(2, RW(21) + 1);
wr32(c, (RW(3) + 0), RW(2));
L_001243C8:;
SET64(2, RD(21) + RD(0)); goto L_0012549C;
L_001243D0:;
SET64(5, RD(20) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x1243e0); SET32(7, RW(29) + 4); JP_F_001282B0(c);
wr32(c, (RW(29) + 68), RW(2));
SET32(2, RW(16) >> 20);
SET64(19, RD(2) & 0x7ff);
{ int t = RD(19) == RD(0); SET64(2, (s64)(s32)0xf0000); if (t) goto L_00124440; }
SET64(22, RD(20) + RD(0));
SET64(3, RSD(22) >> 32);
SET64(2, RD(2) | 0xffff);
SET64(3, RD(3) & RD(2));
SET64(5, (s64)(s32)0xffff0000);
SET64(5, RD(5) >> 32);
SET64(3, RD(3) << 32);
SET64(22, RD(22) & RD(5));
SET64(22, RD(22) | RD(3));
SET64(4, (s64)(s32)0x3ff00000);
SET64(2, RSD(22) >> 32);
SET64(22, RD(22) & RD(5));
SET64(2, RD(2) | RD(4));
SET32(19, RW(19) + -1023);
SET64(2, RD(2) << 32);
wr32(c, (RW(29) + 64), RW(0));
SET64(22, RD(22) | RD(2));
SET64(18, (s32)rd32(c, (RW(29) + 4))); goto L_001244E0;
L_00124440:;
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(18, (s32)rd32(c, (RW(29) + 4)));
SET32(4, RW(18) + RW(2));
SET32(19, RW(4) + 1074);
SET64(2, RSD(19) < (s64)33);
{ int t = RD(2) != RD(0); SET32(2, RW(0) - RW(19)); if (t) goto L_00124480; }
SET32(4, RW(4) + 1042);
SET32(3, RW(0) - RW(19));
SET64(2, RD(20) << 32);
SET64(2, RSD(2) >> 32);
SET32(3, RW(16) << (RW(3) & 31));
SET32(2, RW(2) >> (RW(4) & 31));
SET64(16, RD(3) | RD(2)); goto L_0012448C;
L_00124480:;
SET64(3, RD(20) << 32);
SET64(3, RSD(3) >> 32);
SET32(16, RW(3) << (RW(2) & 31));
L_0012448C:;
SET64(31, 0x124494); SET64(4, RD(16) + RD(0)); JP_F_00122158(c);
{ int t = RSD(16) >= 0;  if (t) goto L_001244B0; }
SET64(5, RD(0) | 0x83e0);
SET64(5, RD(5) << 47);
SET64(4, RD(2) + RD(0));
SET64(31, 0x1244b0);  JP_F_00121B60(c);
L_001244B0:;
SET64(22, RD(2) + RD(0));
SET64(2, (s64)(s32)0xfe100000);
SET64(3, RSD(22) >> 32);
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) >> 32);
SET64(22, RD(22) & RD(4));
SET32(4, RW(0) + 1);
SET32(3, RW(3) + RW(2));
wr32(c, (RW(29) + 64), RW(4));
SET64(3, RD(3) << 32);
SET32(19, RW(19) + -1075);
SET64(22, RD(22) | RD(3));
L_001244E0:;
SET64(5, RD(0) | 0xffe0);
SET64(5, RD(5) << 46);
SET64(4, RD(22) + RD(0));
SET64(31, 0x1244f4);  JP_F_00121BB8(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -7600)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x124508);  JP_F_00121C20(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -7592)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x12451c);  JP_F_00121B60(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x124528); SET64(4, RD(19) + RD(0)); JP_F_00122158(c);
SET64(1, (s64)(s32)0x420000);
SET64(5, rd64(c, (RW(1) + -7584)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x12453c);  JP_F_00121C20(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x12454c);  JP_F_00121B60(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x12455c);  JP_F_00122210(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x12456c); SET64(30, RD(2) + RD(0)); JP_F_00122108(c);
{ int t = RSD(2) >= 0; SET32(3, RW(0) + 1); if (t) goto L_00124598; }
SET64(31, 0x12457c); SET64(4, RD(30) + RD(0)); JP_F_00122158(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x12458c);  JP_F_00122108(c);
SET32(3, RW(30) + -1);
if (RD(2) != 0) SET64(30, RD(3));
SET32(3, RW(0) + 1);
L_00124598:;
SET64(2, RD(30) < (u64)(s64)23);
{ int t = RD(2) == RD(0); wr32(c, (RW(29) + 48), RW(3)); if (t) goto L_001245CC; }
SET32(2, RW(30) << 3);
SET64(4, RD(20) + RD(0));
SET64(5, (s64)(s32)0x420000);
SET32(5, RW(5) + RW(2));
SET64(5, rd64(c, (RW(5) + -7448)));
SET64(31, 0x1245c0); wr32(c, (RW(29) + 48), RW(0)); JP_F_00122108(c);
SET32(3, RW(30) + -1);
SET64(2, RSD(2) < (s64)0);
if (RD(2) != 0) SET64(30, RD(3));
L_001245CC:;
SET32(2, RW(18) - RW(19));
SET32(16, RW(2) + -1);
if (RSD(16) < 0) { SET32(16, RW(0) - RW(16)); goto L_001245E8; }
wr32(c, (RW(29) + 56), RW(16));
wr32(c, (RW(29) + 24), RW(0)); goto L_001245F0;
L_001245E8:;
wr32(c, (RW(29) + 56), RW(0));
wr32(c, (RW(29) + 24), RW(16));
L_001245F0:;
{ int t = RSD(30) < 0; SET64(4, (s32)rd32(c, (RW(29) + 56))); if (t) goto L_00124610; }
wr32(c, (RW(29) + 28), RW(0));
SET32(4, RW(4) + RW(30));
wr32(c, (RW(29) + 60), RW(30));
wr32(c, (RW(29) + 56), RW(4)); goto L_00124628;
L_00124610:;
SET64(2, (s32)rd32(c, (RW(29) + 24)));
SET32(3, RW(0) - RW(30));
wr32(c, (RW(29) + 28), RW(3));
SET32(2, RW(2) - RW(30));
wr32(c, (RW(29) + 60), RW(0));
wr32(c, (RW(29) + 24), RW(2));
L_00124628:;
SET64(4, (s32)rd32(c, (RW(29) + 8)));
SET32(17, RW(0) + 1);
SET64(3, RD(4) < (u64)(s64)10);
if (RD(3) == 0) SET64(4, RD(0));
SET64(2, RSD(4) < (s64)6);
{ int t = RD(2) != RD(0); wr32(c, (RW(29) + 8), RW(4)); if (t) goto L_00124650; }
SET32(4, RW(4) + -4);
SET64(17, RD(0) + RD(0));
wr32(c, (RW(29) + 8), RW(4));
L_00124650:;
SET64(3, (s32)rd32(c, (RW(29) + 8)));
SET32(4, RW(0) + 1);
wr32(c, (RW(29) + 52), RW(4));
SET64(2, RD(3) < (u64)(s64)6);
SET32(3, RW(0) + -1);
wr32(c, (RW(29) + 40), RW(3));
{ int t = RD(2) == RD(0); wr32(c, (RW(29) + 32), RW(3)); if (t) goto L_001246EC; }
SET64(4, (s32)rd32(c, (RW(29) + 8)));
SET32(2, RW(4) << 2);
SET64(3, (s64)(s32)0x420000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + -7568)));
{ u32 t = RW(3);  switch (t) { case 0x124690: goto L_00124690; case 0x1246a0: goto L_001246A0; case 0x1246a4: goto L_001246A4; case 0x1246c8: goto L_001246C8; case 0x1246cc: goto L_001246CC; default: rt_jump(c, t); return; } }
L_00124690:;
SET32(19, RW(0) + 18);
wr32(c, (RW(29) + 12), RW(0)); goto L_001246EC;
L_001246A0:;
wr32(c, (RW(29) + 52), RW(0));
L_001246A4:;
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET32(19, RW(0) + 1);
SET64(2, RSD(0) < RSD(3));
if (RD(2) != 0) SET64(19, RD(3));
wr32(c, (RW(29) + 12), RW(19));
wr32(c, (RW(29) + 40), RW(19));
wr32(c, (RW(29) + 32), RW(19)); goto L_001246EC;
L_001246C8:;
wr32(c, (RW(29) + 52), RW(0));
L_001246CC:;
SET64(4, (s32)rd32(c, (RW(29) + 12)));
SET32(2, RW(4) + RW(30));
SET32(4, RW(0) + 1);
SET32(19, RW(2) + 1);
wr32(c, (RW(29) + 40), RW(2));
SET64(3, RSD(0) < RSD(19));
wr32(c, (RW(29) + 32), RW(19));
if (RD(3) == 0) SET64(19, RD(4));
L_001246EC:;
SET64(2, RD(19) < (u64)(s64)24);
wr32(c, (RW(23) + 68), RW(0));
{ int t = RD(2) != RD(0); SET32(16, RW(0) + 4); if (t) goto L_00124720; }
SET64(3, RD(0) + RD(0));
L_00124700:;
SET32(16, RW(16) << 1);
SET32(2, RW(16) + 20);
SET64(2, RD(19) < RD(2));
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 1); if (t) { POLL(); goto L_00124700; } }
wr32(c, (RW(23) + 68), RW(3));
L_00124720:;
SET64(5, (s32)rd32(c, (RW(23) + 68)));
SET64(31, 0x12472c); SET64(4, RD(23) + RD(0)); JP_F_00127560(c);
wr32(c, (RW(29) + 84), RW(2));
SET64(3, (s32)rd32(c, (RW(29) + 32)));
SET64(4, (s32)rd32(c, (RW(29) + 84)));
SET64(2, RD(3) < (u64)(s64)15);
wr32(c, (RW(23) + 64), RW(4));
{ int t = RD(2) == RD(0); SET64(21, (s32)rd32(c, (RW(29) + 84))); if (t) goto L_00124B90; }
if (RD(17) == RD(0)) { SET64(3, (s32)rd32(c, (RW(29) + 0))); goto L_00124B94; }
SET64(22, RD(20) + RD(0));
wr32(c, (RW(29) + 44), RW(30));
wr32(c, (RW(29) + 36), RW(3));
{ int t = RSD(30) <= 0; SET32(19, RW(0) + 2); if (t) goto L_001247F8; }
SET64(2, RD(30) & 0xf);
SET32(16, RSW(30) >> 4);
SET32(2, RW(2) << 3);
SET64(3, RD(16) & 0x10);
SET64(17, (s64)(s32)0x420000);
SET32(17, RW(17) + RW(2));
SET64(17, rd64(c, (RW(17) + -7448)));
{ int t = RD(3) == RD(0); SET64(2, (s64)(s32)0x420000); if (t) goto L_001247A0; }
SET64(4, RD(20) + RD(0));
SET64(5, rd64(c, (RW(2) + -7216)));
SET64(16, RD(16) & 0xf);
SET64(31, 0x12479c); SET32(19, RW(0) + 3); JP_F_00121EA8(c);
SET64(20, RD(2) + RD(0));
L_001247A0:;
{ int t = RD(16) == RD(0); SET64(2, (s64)(s32)0x420000); if (t) goto L_001247DC; }
SET32(18, RW(2) + -7248);
L_001247B0:;
SET64(2, RD(16) & 0x1);
if (RD(2) == RD(0)) { SET32(16, RSW(16) >> 1); goto L_001247D4; }
SET64(5, rd64(c, (RW(18) + 0)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x1247cc); SET32(19, RW(19) + 1); JP_F_00121C20(c);
SET64(17, RD(2) + RD(0));
SET32(16, RSW(16) >> 1);
L_001247D4:;
{ int t = RD(16) != RD(0); SET32(18, RW(18) + 8); if (t) { POLL(); goto L_001247B0; } }
L_001247DC:;
SET64(4, RD(20) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x1247ec);  JP_F_00121EA8(c);
SET64(20, RD(2) + RD(0)); goto L_0012485C;
L_001247F8:;
SET32(17, RW(0) - RW(30));
{ int t = RD(17) == RD(0); SET64(2, RD(17) & 0xf); if (t) goto L_0012485C; }
SET64(5, RD(20) + RD(0));
SET32(2, RW(2) << 3);
SET64(4, (s64)(s32)0x420000);
SET32(4, RW(4) + RW(2));
SET64(4, rd64(c, (RW(4) + -7448)));
SET64(31, 0x124820); SET32(16, RSW(17) >> 4); JP_F_00121C20(c);
{ int t = RD(16) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_0012485C; }
SET64(2, (s64)(s32)0x420000);
SET32(17, RW(2) + -7248);
L_00124830:;
SET64(2, RD(16) & 0x1);
if (RD(2) == RD(0)) { SET32(16, RSW(16) >> 1); goto L_00124854; }
SET64(4, rd64(c, (RW(17) + 0)));
SET64(5, RD(20) + RD(0));
SET64(31, 0x12484c); SET32(19, RW(19) + 1); JP_F_00121C20(c);
SET64(20, RD(2) + RD(0));
SET32(16, RSW(16) >> 1);
L_00124854:;
{ int t = RD(16) != RD(0); SET32(17, RW(17) + 8); if (t) { POLL(); goto L_00124830; } }
L_0012485C:;
SET64(2, (s32)rd32(c, (RW(29) + 48)));
{ int t = RD(2) == RD(0);  if (t) goto L_001248B8; }
SET64(5, RD(0) | 0xffc0);
SET64(5, RD(5) << 46);
SET64(4, RD(20) + RD(0));
SET64(31, 0x12487c);  JP_F_00122108(c);
{ int t = RSD(2) >= 0; SET64(3, (s32)rd32(c, (RW(29) + 32))); if (t) goto L_001248B8; }
{ int t = RSD(3) <= 0; SET64(4, (s32)rd32(c, (RW(29) + 40))); if (t) goto L_001248B8; }
{ int t = RSD(4) <= 0; SET64(2, (s32)rd32(c, (RW(29) + 36))); if (t) goto L_00124B80; }
SET64(2, (s32)rd32(c, (RW(29) + 40)));
SET64(5, RD(20) + RD(0));
SET64(4, RD(0) | 0x8048);
SET64(4, RD(4) << 47);
SET32(30, RW(30) + -1);
wr32(c, (RW(29) + 32), RW(2));
SET64(31, 0x1248b4); SET32(19, RW(19) + 1); JP_F_00121C20(c);
SET64(20, RD(2) + RD(0));
L_001248B8:;
SET64(31, 0x1248c0); SET64(4, RD(19) + RD(0)); JP_F_00122158(c);
SET64(5, RD(20) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x1248d0);  JP_F_00121C20(c);
SET64(5, RD(0) | 0x8038);
SET64(5, RD(5) << 47);
SET64(4, RD(2) + RD(0));
SET64(31, 0x1248e4);  JP_F_00121B60(c);
SET64(4, (s64)(s32)0xffff0000);
SET64(4, RD(4) >> 32);
SET64(18, RD(2) + RD(0));
SET64(2, (s64)(s32)0xfcc00000);
SET64(3, RSD(18) >> 32);
SET64(18, RD(18) & RD(4));
SET32(3, RW(3) + RW(2));
SET64(3, RD(3) << 32);
SET64(18, RD(18) | RD(3));
SET64(3, (s32)rd32(c, (RW(29) + 32)));
{ int t = RD(3) != RD(0); SET64(4, (s32)rd32(c, (RW(29) + 52))); if (t) goto L_00124978; }
SET64(5, RD(0) | 0x8028);
SET64(5, RD(5) << 47);
SET64(4, RD(20) + RD(0));
wr32(c, (RW(29) + 76), RW(0));
SET64(31, 0x12492c); wr32(c, (RW(29) + 80), RW(0)); JP_F_00121BB8(c);
SET64(16, RD(2) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x124940);  JP_F_00122108(c);
{ int t = RSD(2) > 0; SET64(3, (s32)rd32(c, (RW(29) + 84))); if (t) goto L_001250D0; }
SET64(5, RD(18) + RD(0));
SET64(4, RD(0) + RD(0));
SET64(31, 0x124958);  JP_F_00121BB8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x124968);  JP_F_00122108(c);
{ int t = RSD(2) < 0; SET64(2, (s32)rd32(c, (RW(29) + 36))); if (t) goto L_001250C0; }
 goto L_00124B80;
L_00124978:;
{ int t = RD(4) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 32))); if (t) goto L_00124A78; }
SET64(4, RD(0) | 0xff80);
SET64(4, RD(4) << 46);
SET32(2, RW(3) << 3);
SET64(5, (s64)(s32)0x420000);
SET32(5, RW(5) + RW(2));
SET64(5, rd64(c, (RW(5) + -7456)));
SET64(31, 0x1249a0); SET64(19, RD(0) + RD(0)); JP_F_00121EA8(c);
SET64(5, RD(18) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x1249b0);  JP_F_00121BB8(c);
SET64(18, RD(2) + RD(0)); goto L_001249E4;
L_001249B8:;
SET64(4, RD(0) | 0x8048);
SET64(4, RD(4) << 47);
SET64(5, RD(18) + RD(0));
SET64(31, 0x1249cc);  JP_F_00121C20(c);
SET64(4, RD(0) | 0x8048);
SET64(4, RD(4) << 47);
SET64(5, RD(17) + RD(0));
SET64(31, 0x1249e0); SET64(18, RD(2) + RD(0)); JP_F_00121C20(c);
SET64(20, RD(2) + RD(0));
L_001249E4:;
SET64(4, RD(20) + RD(0));
SET64(31, 0x1249f0);  JP_F_00122210(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x1249fc); SET64(4, RD(16) + RD(0)); JP_F_00122158(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x124a0c);  JP_F_00121BB8(c);
SET64(5, RD(18) + RD(0));
SET64(17, RD(2) + RD(0));
SET32(2, RW(16) + 48);
wr8(c, (RW(21) + 0), (u8)RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x124a28); SET32(21, RW(21) + 1); JP_F_00122108(c);
{ int t = RSD(2) < 0; SET64(5, (s32)rd32(c, (RW(29) + 68))); if (t) goto L_00125474; }
SET64(4, RD(0) | 0xffc0);
SET64(4, RD(4) << 46);
SET64(5, RD(17) + RD(0));
SET64(31, 0x124a44);  JP_F_00121BB8(c);
SET64(5, RD(18) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x124a54);  JP_F_00122108(c);
{ int t = RSD(2) < 0; SET32(3, RW(0) + 57); if (t) goto L_00124CBC; }
SET64(4, (s32)rd32(c, (RW(29) + 32)));
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(4));
{ int t = RD(2) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 36))); if (t) { POLL(); goto L_001249B8; } }
 goto L_00124B80;
L_00124A78:;
SET64(5, RD(18) + RD(0));
SET32(2, RW(3) << 3);
SET64(4, (s64)(s32)0x420000);
SET32(4, RW(4) + RW(2));
SET64(4, rd64(c, (RW(4) + -7456)));
SET64(31, 0x124a94); SET32(19, RW(0) + 1); JP_F_00121C20(c);
SET64(18, RD(2) + RD(0));
L_00124A98:;
SET64(4, RD(20) + RD(0));
SET64(31, 0x124aa4);  JP_F_00122210(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x124ab0); SET64(4, RD(16) + RD(0)); JP_F_00122158(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x124ac0);  JP_F_00121BB8(c);
SET64(17, RD(2) + RD(0));
SET32(2, RW(16) + 48);
wr8(c, (RW(21) + 0), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(29) + 32)));
{ int t = RD(19) != RD(4); SET32(21, RW(21) + 1); if (t) goto L_00124B60; }
SET64(4, RD(0) | 0xff80);
SET64(4, RD(4) << 46);
SET64(5, RD(18) + RD(0));
SET64(31, 0x124aec);  JP_F_00121B60(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x124afc);  JP_F_00122108(c);
{ int t = RSD(2) > 0; SET32(3, RW(0) + 57); if (t) goto L_00124CBC; }
SET64(4, RD(0) | 0xff80);
SET64(4, RD(4) << 46);
SET64(5, RD(18) + RD(0));
SET64(31, 0x124b18);  JP_F_00121BB8(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x124b28);  JP_F_00122108(c);
{ int t = RSD(2) >= 0; SET64(2, (s32)rd32(c, (RW(29) + 36))); if (t) goto L_00124B80; }
SET32(3, RW(0) + 48);
SET32(21, RW(21) + -1);
L_00124B38:;
SET64(2, (s8)rd8(c, (RW(21) + 0)));
if (RD(2) == RD(3)) { SET32(21, RW(21) + -1); { POLL(); goto L_00124B38; } }
SET32(21, RW(21) + 1); goto L_00125470;
L_00124B60:;
SET64(4, RD(0) | 0x8048);
SET64(4, RD(4) << 47);
SET64(5, RD(17) + RD(0));
SET64(31, 0x124b74); SET32(19, RW(19) + 1); JP_F_00121C20(c);
SET64(20, RD(2) + RD(0)); { POLL(); goto L_00124A98; }
L_00124B80:;
SET64(20, RD(22) + RD(0));
SET64(30, (s32)rd32(c, (RW(29) + 44)));
wr32(c, (RW(29) + 32), RW(2));
SET64(21, (s32)rd32(c, (RW(29) + 84)));
L_00124B90:;
SET64(3, (s32)rd32(c, (RW(29) + 0)));
L_00124B94:;
{ int t = RSD(3) < 0; SET64(2, RSD(30) < (s64)15); if (t) goto L_00124D40; }
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 8))); if (t) goto L_00124D44; }
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET32(2, RW(30) << 3);
SET64(17, (s64)(s32)0x420000);
SET32(17, RW(17) + RW(2));
SET64(17, rd64(c, (RW(17) + -7448)));
{ int t = RSD(3) >= 0; SET32(19, RW(0) + 1); if (t) goto L_00124C10; }
SET64(4, (s32)rd32(c, (RW(29) + 32)));
{ int t = RSD(4) > 0;  if (t) goto L_00124C10; }
wr32(c, (RW(29) + 76), RW(0));
{ int t = RSD(4) < 0; wr32(c, (RW(29) + 80), RW(0)); if (t) goto L_001250C0; }
SET64(5, RD(0) | 0x8028);
SET64(5, RD(5) << 47);
SET64(4, RD(17) + RD(0));
SET64(31, 0x124bec);  JP_F_00121C20(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x124bfc);  JP_F_00122108(c);
{ int t = RSD(2) <= 0; SET64(2, (s32)rd32(c, (RW(29) + 12))); if (t) goto L_001250C4; }
SET64(3, (s32)rd32(c, (RW(29) + 84))); goto L_001250D0;
L_00124C10:;
SET64(5, RD(17) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x124c20);  JP_F_00121EA8(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x124c2c);  JP_F_00122210(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x124c38); SET64(4, RD(16) + RD(0)); JP_F_00122158(c);
SET64(5, RD(17) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x124c48);  JP_F_00121C20(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(31, 0x124c58);  JP_F_00121BB8(c);
SET64(5, RD(2) + RD(0));
SET32(2, RW(16) + 48);
wr8(c, (RW(21) + 0), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 32)));
{ int t = RD(19) != RD(2); SET32(21, RW(21) + 1); if (t) goto L_00124D08; }
SET64(4, RD(5) + RD(0));
SET64(31, 0x124c7c);  JP_F_00121B60(c);
SET64(5, RD(17) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(4, RD(18) + RD(0));
SET64(31, 0x124c90);  JP_F_00122108(c);
{ int t = RSD(2) > 0; SET32(3, RW(0) + 57); if (t) goto L_00124CBC; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x124ca8);  JP_F_00122108(c);
{ int t = RD(2) != RD(0); SET64(5, (s32)rd32(c, (RW(29) + 68))); if (t) goto L_00125474; }
SET64(2, RD(16) & 0x1);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 57); if (t) goto L_00125474; }
L_00124CBC:;
SET32(5, RW(0) + 48);
SET32(21, RW(21) + -1);
L_00124CC8:;
SET64(2, (s8)rd8(c, (RW(21) + 0)));
{ int t = RD(2) != RD(3); SET64(4, rd8(c, (RW(21) + 0))); if (t) goto L_00124CF8; }
SET64(4, (s32)rd32(c, (RW(29) + 84)));
if (RD(21) != RD(4)) { SET32(21, RW(21) + -1); { POLL(); goto L_00124CC8; } }
wr8(c, (RW(4) + 0), (u8)RW(5));
SET64(4, RD(5) + RD(0));
SET32(30, RW(30) + 1);
L_00124CF8:;
SET32(2, RW(4) + 1);
wr8(c, (RW(21) + 0), (u8)RW(2));
SET32(21, RW(21) + 1); goto L_00125470;
L_00124D08:;
SET64(4, RD(0) | 0x8048);
SET64(4, RD(4) << 47);
SET64(31, 0x124d18);  JP_F_00121C20(c);
SET64(5, RD(0) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(20, RD(2) + RD(0));
SET64(31, 0x124d2c);  JP_F_00122108(c);
{ int t = RD(2) == RD(0); SET32(19, RW(19) + 1); if (t) goto L_00125470; }
 { POLL(); goto L_00124C10; }
L_00124D40:;
SET64(2, (s32)rd32(c, (RW(29) + 8)));
L_00124D44:;
SET64(4, (s32)rd32(c, (RW(29) + 52)));
SET64(17, (s32)rd32(c, (RW(29) + 24)));
SET64(22, RSD(2) < (s64)2);
SET64(18, (s32)rd32(c, (RW(29) + 28)));
wr32(c, (RW(29) + 72), RW(0));
{ int t = RD(4) == RD(0); wr32(c, (RW(29) + 76), RW(0)); if (t) goto L_00124DFC; }
if (RD(22) == RD(0)) { SET64(3, (s32)rd32(c, (RW(29) + 32))); goto L_00124D88; }
SET64(2, (s32)rd32(c, (RW(29) + 64)));
{ int t = RD(2) != RD(0); SET32(19, RW(3) + 1075); if (t) goto L_00124DD4; }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(0) + 54);
SET32(19, RW(2) - RW(3)); goto L_00124DD4;
L_00124D88:;
SET64(4, (s32)rd32(c, (RW(29) + 28)));
SET32(16, RW(3) + -1);
SET64(2, RSD(4) < RSD(16));
{ int t = RD(2) == RD(0); SET32(18, RW(4) - RW(16)); if (t) goto L_00124DBC; }
SET64(2, (s32)rd32(c, (RW(29) + 28)));
SET64(18, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 60)));
SET32(16, RW(16) - RW(2));
SET32(2, RW(2) + RW(16));
SET32(3, RW(3) + RW(16));
wr32(c, (RW(29) + 28), RW(2));
wr32(c, (RW(29) + 60), RW(3));
L_00124DBC:;
SET64(19, (s32)rd32(c, (RW(29) + 32)));
{ int t = RSD(19) >= 0; SET64(2, (s32)rd32(c, (RW(29) + 56))); if (t) goto L_00124DD8; }
SET64(4, (s32)rd32(c, (RW(29) + 24)));
SET32(17, RW(4) - RW(19));
SET64(19, RD(0) + RD(0));
L_00124DD4:;
SET64(2, (s32)rd32(c, (RW(29) + 56)));
L_00124DD8:;
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(2, RW(2) + RW(19));
SET64(31, 0x124dec); wr32(c, (RW(29) + 56), RW(2)); JP_F_001279B0(c);
SET64(3, (s32)rd32(c, (RW(29) + 24)));
wr32(c, (RW(29) + 76), RW(2));
SET32(3, RW(3) + RW(19));
wr32(c, (RW(29) + 24), RW(3));
L_00124DFC:;
{ int t = RSD(17) <= 0; SET64(3, (s32)rd32(c, (RW(29) + 28))); if (t) goto L_00124E34; }
SET64(4, (s32)rd32(c, (RW(29) + 56)));
{ int t = RSD(4) <= 0; SET64(19, RD(4) + RD(0)); if (t) goto L_00124E34; }
SET64(2, RSD(17) < RSD(19));
if (RD(2) != 0) SET64(19, RD(17));
SET64(2, (s32)rd32(c, (RW(29) + 24)));
SET32(4, RW(4) - RW(19));
SET32(17, RW(17) - RW(19));
SET32(2, RW(2) - RW(19));
wr32(c, (RW(29) + 56), RW(4));
wr32(c, (RW(29) + 24), RW(2));
SET64(3, (s32)rd32(c, (RW(29) + 28)));
L_00124E34:;
{ int t = RSD(3) <= 0; SET64(4, RD(23) + RD(0)); if (t) goto L_00124EC4; }
SET64(4, (s32)rd32(c, (RW(29) + 52)));
{ int t = RD(4) == RD(0); SET64(5, (s32)rd32(c, (RW(29) + 68))); if (t) goto L_00124EB0; }
{ int t = RSD(18) <= 0; SET64(2, (s32)rd32(c, (RW(29) + 28))); if (t) goto L_00124E8C; }
SET64(5, (s32)rd32(c, (RW(29) + 76)));
SET64(4, RD(23) + RD(0));
SET64(31, 0x124e60); SET64(6, RD(18) + RD(0)); JP_F_00127BF8(c);
SET64(4, RD(23) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 68)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x124e74); wr32(c, (RW(29) + 76), RW(2)); JP_F_001279E8(c);
SET64(4, RD(23) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 68)));
SET64(31, 0x124e84); SET64(16, RD(2) + RD(0)); JP_F_00127608(c);
wr32(c, (RW(29) + 68), RW(16));
SET64(2, (s32)rd32(c, (RW(29) + 28)));
L_00124E8C:;
SET32(16, RW(2) - RW(18));
if (RD(16) == RD(0)) { SET64(4, RD(23) + RD(0)); goto L_00124EC4; }
SET64(5, (s32)rd32(c, (RW(29) + 68)));
SET64(6, RD(16) + RD(0));
SET64(31, 0x124ea8); SET64(4, RD(23) + RD(0)); JP_F_00127BF8(c);
wr32(c, (RW(29) + 68), RW(2)); goto L_00124EC0;
L_00124EB0:;
SET64(4, RD(23) + RD(0));
SET64(31, 0x124ebc); SET64(6, (s32)rd32(c, (RW(29) + 28))); JP_F_00127BF8(c);
wr32(c, (RW(29) + 68), RW(2));
L_00124EC0:;
SET64(4, RD(23) + RD(0));
L_00124EC4:;
SET64(31, 0x124ecc); SET32(5, RW(0) + 1); JP_F_001279B0(c);
SET64(3, (s32)rd32(c, (RW(29) + 60)));
{ int t = RSD(3) <= 0; wr32(c, (RW(29) + 80), RW(2)); if (t) goto L_00124EEC; }
SET64(5, RD(2) + RD(0));
SET64(4, RD(23) + RD(0));
SET64(31, 0x124ee8); SET64(6, RD(3) + RD(0)); JP_F_00127BF8(c);
wr32(c, (RW(29) + 80), RW(2));
L_00124EEC:;
{ int t = RD(22) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_00124F34; }
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 12);
SET64(2, RD(20) & RD(2));
{ int t = RD(2) != RD(0); SET64(3, (s32)rd32(c, (RW(29) + 60))); if (t) goto L_00124F38; }
SET64(2, RSD(20) >> 32);
SET64(3, (s64)(s32)0x7ff00000);
SET64(2, RD(2) & RD(3));
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(29) + 24))); if (t) goto L_00124F34; }
SET32(16, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET32(4, RW(4) + 1);
SET32(2, RW(2) + 1);
wr32(c, (RW(29) + 24), RW(4));
wr32(c, (RW(29) + 56), RW(2));
L_00124F34:;
SET64(3, (s32)rd32(c, (RW(29) + 60)));
L_00124F38:;
{ int t = RD(3) == RD(0); SET64(4, (s32)rd32(c, (RW(29) + 80))); if (t) goto L_00124F60; }
SET64(2, (s32)rd32(c, (RW(4) + 16)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(4));
SET64(31, 0x124f54); SET64(4, (s32)rd32(c, (RW(2) + 16))); JP_F_00127870(c);
SET64(3, (s32)rd32(c, (RW(29) + 56)));
SET32(2, RW(3) - RW(2)); goto L_00124F68;
L_00124F60:;
SET64(4, (s32)rd32(c, (RW(29) + 56)));
SET32(2, RW(4) + 1);
L_00124F68:;
SET64(19, RD(2) & 0x1f);
{ int t = RD(19) == RD(0); SET32(2, RW(0) + 32); if (t) goto L_00124F78; }
SET32(19, RW(2) - RW(19));
L_00124F78:;
SET64(2, RSD(19) < (s64)5);
{ int t = RD(2) != RD(0); SET64(2, RSD(19) < (s64)4); if (t) goto L_00124FA8; }
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET32(19, RW(19) + -4);
SET64(3, (s32)rd32(c, (RW(29) + 24)));
SET32(17, RW(17) + RW(19));
SET32(2, RW(2) + RW(19));
SET32(3, RW(3) + RW(19));
wr32(c, (RW(29) + 56), RW(2));
wr32(c, (RW(29) + 24), RW(3)); goto L_00124FD0;
L_00124FA8:;
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 24))); if (t) goto L_00124FD4; }
SET64(4, (s32)rd32(c, (RW(29) + 56)));
SET32(19, RW(19) + 28);
SET64(2, (s32)rd32(c, (RW(29) + 24)));
SET32(17, RW(17) + RW(19));
SET32(4, RW(4) + RW(19));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(29) + 56), RW(4));
wr32(c, (RW(29) + 24), RW(2));
L_00124FD0:;
SET64(3, (s32)rd32(c, (RW(29) + 24)));
L_00124FD4:;
if (RSD(3) <= 0) { SET64(4, (s32)rd32(c, (RW(29) + 56))); goto L_00124FF4; }
SET64(5, (s32)rd32(c, (RW(29) + 68)));
SET64(6, RD(3) + RD(0));
SET64(31, 0x124fec); SET64(4, RD(23) + RD(0)); JP_F_00127CF8(c);
wr32(c, (RW(29) + 68), RW(2));
SET64(4, (s32)rd32(c, (RW(29) + 56)));
L_00124FF4:;
{ int t = RSD(4) <= 0; SET64(2, (s32)rd32(c, (RW(29) + 48))); if (t) goto L_00125014; }
SET64(5, (s32)rd32(c, (RW(29) + 80)));
SET64(6, RD(4) + RD(0));
SET64(31, 0x12500c); SET64(4, RD(23) + RD(0)); JP_F_00127CF8(c);
wr32(c, (RW(29) + 80), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 48)));
L_00125014:;
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(29) + 68))); if (t) goto L_00125070; }
SET64(31, 0x125024); SET64(5, (s32)rd32(c, (RW(29) + 80))); JP_F_00127E50(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(29) + 32))); goto L_00125074; }
SET64(5, (s32)rd32(c, (RW(29) + 68)));
SET64(4, RD(23) + RD(0));
SET32(6, RW(0) + 10);
SET64(31, 0x125040); SET64(7, RD(0) + RD(0)); JP_F_00127638(c);
SET32(30, RW(30) + -1);
SET64(3, (s32)rd32(c, (RW(29) + 52)));
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 68), RW(2)); if (t) goto L_00125068; }
SET64(5, (s32)rd32(c, (RW(29) + 76)));
SET64(4, RD(23) + RD(0));
SET32(6, RW(0) + 10);
SET64(31, 0x125064); SET64(7, RD(0) + RD(0)); JP_F_00127638(c);
wr32(c, (RW(29) + 76), RW(2));
L_00125068:;
SET64(4, (s32)rd32(c, (RW(29) + 40)));
wr32(c, (RW(29) + 32), RW(4));
L_00125070:;
SET64(2, (s32)rd32(c, (RW(29) + 32)));
L_00125074:;
{ int t = RSD(2) > 0; SET64(4, (s32)rd32(c, (RW(29) + 52))); if (t) goto L_001250E8; }
SET64(3, (s32)rd32(c, (RW(29) + 8)));
SET64(2, RSD(3) < (s64)3);
{ int t = RD(2) != RD(0);  if (t) goto L_001250E8; }
SET64(4, (s32)rd32(c, (RW(29) + 32)));
{ int t = RSD(4) < 0; SET64(5, (s32)rd32(c, (RW(29) + 80))); if (t) goto L_001250C0; }
SET64(4, RD(23) + RD(0));
SET32(6, RW(0) + 5);
SET64(31, 0x1250a8); SET64(7, RD(0) + RD(0)); JP_F_00127638(c);
SET64(4, (s32)rd32(c, (RW(29) + 68)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x1250b8); wr32(c, (RW(29) + 80), RW(2)); JP_F_00127E50(c);
if (RSD(2) > 0) { SET64(3, (s32)rd32(c, (RW(29) + 84))); goto L_001250D0; }
L_001250C0:;
SET64(2, (s32)rd32(c, (RW(29) + 12)));
L_001250C4:;
SET64(30, ~(RD(0) | RD(2))); goto L_00125434;
L_001250D0:;
SET32(2, RW(0) + 49);
SET32(30, RW(30) + 1);
SET32(21, RW(3) + 1);
wr8(c, (RW(3) + 0), (u8)RW(2)); goto L_00125434;
L_001250E8:;
{ int t = RD(4) == RD(0); SET32(19, RW(0) + 1); if (t) goto L_00125354; }
{ int t = RSD(17) <= 0; SET64(2, (s32)rd32(c, (RW(29) + 76))); if (t) goto L_00125110; }
SET64(5, (s32)rd32(c, (RW(29) + 76)));
SET64(6, RD(17) + RD(0));
SET64(31, 0x125108); SET64(4, RD(23) + RD(0)); JP_F_00127CF8(c);
wr32(c, (RW(29) + 76), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 76)));
L_00125110:;
{ int t = RD(16) == RD(0); wr32(c, (RW(29) + 72), RW(2)); if (t) goto L_00125158; }
SET64(5, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x125124); SET64(4, RD(23) + RD(0)); JP_F_00127560(c);
SET64(3, (s32)rd32(c, (RW(29) + 72)));
SET32(4, RW(2) + 12);
wr32(c, (RW(29) + 76), RW(2));
SET32(5, RW(3) + 12);
SET64(6, (s32)rd32(c, (RW(3) + 16)));
SET32(6, RW(6) << 2);
SET64(31, 0x125144); SET32(6, RW(6) + 8); JP_F_00127218(c);
SET64(4, RD(23) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 76)));
SET64(31, 0x125154); SET32(6, RW(0) + 1); JP_F_00127CF8(c);
wr32(c, (RW(29) + 76), RW(2));
L_00125158:;
SET64(2, RD(20) << 32);
SET64(2, RSD(2) >> 32);
SET32(19, RW(0) + 1);
SET64(22, RD(2) & 0x1); goto L_001251E8;
L_00125170:;
SET64(5, (s32)rd32(c, (RW(29) + 68)));
SET64(4, RD(23) + RD(0));
SET32(6, RW(0) + 10);
SET64(31, 0x125184); SET64(7, RD(0) + RD(0)); JP_F_00127638(c);
wr32(c, (RW(29) + 68), RW(2));
SET64(4, (s32)rd32(c, (RW(29) + 72)));
SET64(2, (s32)rd32(c, (RW(29) + 76)));
{ int t = RD(4) != RD(2); SET64(5, (s32)rd32(c, (RW(29) + 72))); if (t) goto L_001251B8; }
SET64(5, RD(2) + RD(0));
SET64(4, RD(23) + RD(0));
SET32(6, RW(0) + 10);
SET64(31, 0x1251ac); SET64(7, RD(0) + RD(0)); JP_F_00127638(c);
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 72), RW(2)); goto L_001251E4;
L_001251B8:;
SET32(6, RW(0) + 10);
SET64(7, RD(0) + RD(0));
SET64(31, 0x1251c8); SET64(4, RD(23) + RD(0)); JP_F_00127638(c);
SET64(4, RD(23) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 76)));
SET32(6, RW(0) + 10);
SET64(7, RD(0) + RD(0));
SET64(31, 0x1251e0); wr32(c, (RW(29) + 72), RW(2)); JP_F_00127638(c);
wr32(c, (RW(29) + 76), RW(2));
L_001251E4:;
SET32(19, RW(19) + 1);
L_001251E8:;
SET64(4, (s32)rd32(c, (RW(29) + 68)));
SET64(31, 0x1251f4); SET64(5, (s32)rd32(c, (RW(29) + 80))); JP_F_00124038(c);
SET64(4, (s32)rd32(c, (RW(29) + 68)));
SET32(20, RW(2) + 48);
SET64(31, 0x125204); SET64(5, (s32)rd32(c, (RW(29) + 72))); JP_F_00127E50(c);
SET64(4, RD(23) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 80)));
SET64(16, RD(2) + RD(0));
SET64(31, 0x125218); SET64(6, (s32)rd32(c, (RW(29) + 76))); JP_F_00127EB8(c);
SET64(18, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 12)));
{ int t = RD(2) != RD(0); SET32(17, RW(0) + 1); if (t) goto L_00125238; }
SET64(4, (s32)rd32(c, (RW(29) + 68)));
SET64(31, 0x125234); SET64(5, RD(18) + RD(0)); JP_F_00127E50(c);
SET64(17, RD(2) + RD(0));
L_00125238:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x125244); SET64(4, RD(23) + RD(0)); JP_F_00127608(c);
{ int t = RD(17) != RD(0); SET64(3, (s32)rd32(c, (RW(29) + 8))); if (t) goto L_00125270; }
{ int t = RD(3) != RD(0);  if (t) goto L_00125270; }
{ int t = RD(22) != RD(0); SET32(4, RW(0) + 57); if (t) goto L_00125270; }
{ int t = RD(20) == RD(4); SET64(2, RSD(17) < RSD(16)); if (t) goto L_00125304; }
SET32(20, RW(20) + RW(2));
wr8(c, (RW(21) + 0), (u8)RW(20)); goto L_00125430;
L_00125270:;
{ int t = RSD(16) < 0;  if (t) goto L_00125290; }
{ int t = RD(16) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 8))); if (t) goto L_001252F0; }
{ int t = RD(2) != RD(0);  if (t) goto L_001252F0; }
{ int t = RD(22) != RD(0);  if (t) goto L_001252F0; }
L_00125290:;
if (RSD(17) <= 0) { wr8(c, (RW(21) + 0), (u8)RW(20)); goto L_00125430; }
SET64(5, (s32)rd32(c, (RW(29) + 68)));
SET32(6, RW(0) + 1);
SET64(31, 0x1252a8); SET64(4, RD(23) + RD(0)); JP_F_00127CF8(c);
SET64(5, (s32)rd32(c, (RW(29) + 80)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x1252b8); wr32(c, (RW(29) + 68), RW(2)); JP_F_00127E50(c);
SET64(17, RD(2) + RD(0));
if (RSD(17) > 0) { SET32(20, RW(20) + 1); goto L_001252DC; }
if (RD(17) != RD(0)) { wr8(c, (RW(21) + 0), (u8)RW(20)); goto L_00125430; }
SET64(2, RD(20) & 0x1);
if (RD(2) == RD(0)) { wr8(c, (RW(21) + 0), (u8)RW(20)); goto L_00125430; }
SET32(20, RW(20) + 1);
L_001252DC:;
SET32(2, RW(0) + 58);
if (RD(20) == RD(2)) { SET32(4, RW(0) + 57); goto L_00125308; }
wr8(c, (RW(21) + 0), (u8)RW(20)); goto L_00125430;
L_001252F0:;
if (RSD(17) <= 0) { wr8(c, (RW(21) + 0), (u8)RW(20)); goto L_00125320; }
SET32(3, RW(0) + 57);
{ int t = RD(20) != RD(3); SET32(2, RW(20) + 1); if (t) goto L_00125318; }
L_00125304:;
SET32(4, RW(0) + 57);
L_00125308:;
wr8(c, (RW(21) + 0), (u8)RW(4));
SET32(21, RW(21) + 1); goto L_001253B8;
L_00125318:;
wr8(c, (RW(21) + 0), (u8)RW(2)); goto L_00125430;
L_00125320:;
SET64(2, (s32)rd32(c, (RW(29) + 32)));
{ int t = RD(19) != RD(2); SET32(21, RW(21) + 1); if (t) { POLL(); goto L_00125170; } }
SET64(5, (s32)rd32(c, (RW(29) + 68))); goto L_0012537C;
L_00125338:;
SET64(5, (s32)rd32(c, (RW(29) + 68)));
SET64(4, RD(23) + RD(0));
SET32(6, RW(0) + 10);
SET64(31, 0x12534c); SET64(7, RD(0) + RD(0)); JP_F_00127638(c);
SET32(19, RW(19) + 1);
wr32(c, (RW(29) + 68), RW(2));
L_00125354:;
SET64(4, (s32)rd32(c, (RW(29) + 68)));
SET64(31, 0x125360); SET64(5, (s32)rd32(c, (RW(29) + 80))); JP_F_00124038(c);
SET64(4, (s32)rd32(c, (RW(29) + 32)));
SET32(20, RW(2) + 48);
wr8(c, (RW(21) + 0), (u8)RW(20));
SET64(3, RSD(19) < RSD(4));
{ int t = RD(3) != RD(0); SET32(21, RW(21) + 1); if (t) { POLL(); goto L_00125338; } }
SET64(5, (s32)rd32(c, (RW(29) + 68)));
L_0012537C:;
SET32(6, RW(0) + 1);
SET64(31, 0x125388); SET64(4, RD(23) + RD(0)); JP_F_00127CF8(c);
SET64(5, (s32)rd32(c, (RW(29) + 80)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x125398); wr32(c, (RW(29) + 68), RW(2)); JP_F_00127E50(c);
SET64(16, RD(2) + RD(0));
if (RSD(16) > 0) { SET32(21, RW(21) + -1); goto L_001253BC; }
{ int t = RD(16) != RD(0); SET32(3, RW(0) + 48); if (t) goto L_00125410; }
SET64(2, RD(20) & 0x1);
if (RD(2) == RD(0)) { SET32(21, RW(21) + -1); goto L_00125414; }
L_001253B8:;
SET32(21, RW(21) + -1);
L_001253BC:;
SET32(3, RW(0) + 57); goto L_001253D8;
L_001253C8:;
SET64(2, (s32)rd32(c, (RW(29) + 84)));
if (RD(21) == RD(2)) { SET64(3, (s32)rd32(c, (RW(29) + 84))); goto L_001253F8; }
SET32(21, RW(21) + -1);
L_001253D8:;
SET64(2, (s8)rd8(c, (RW(21) + 0)));
{ int t = RD(2) == RD(3); SET64(4, rd8(c, (RW(21) + 0))); if (t) { POLL(); goto L_001253C8; } }
SET32(2, RW(4) + 1);
wr8(c, (RW(21) + 0), (u8)RW(2)); goto L_00125430;
L_001253F8:;
SET32(2, RW(0) + 49);
SET32(30, RW(30) + 1);
wr8(c, (RW(3) + 0), (u8)RW(2));
SET32(21, RW(3) + 1); goto L_00125434;
L_00125410:;
SET32(21, RW(21) + -1);
L_00125414:;
SET64(2, (s8)rd8(c, (RW(21) + 0)));
if (RD(2) == RD(3)) { SET32(21, RW(21) + -1); { POLL(); goto L_00125414; } }
L_00125430:;
SET32(21, RW(21) + 1);
L_00125434:;
SET64(5, (s32)rd32(c, (RW(29) + 80)));
SET64(31, 0x125440); SET64(4, RD(23) + RD(0)); JP_F_00127608(c);
SET64(4, (s32)rd32(c, (RW(29) + 76)));
{ int t = RD(4) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 72))); if (t) goto L_00125470; }
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(29) + 76))); if (t) goto L_00125468; }
{ int t = RD(2) == RD(4); SET64(5, RD(2) + RD(0)); if (t) goto L_00125464; }
SET64(31, 0x125464); SET64(4, RD(23) + RD(0)); JP_F_00127608(c);
L_00125464:;
SET64(5, (s32)rd32(c, (RW(29) + 76)));
L_00125468:;
SET64(31, 0x125470); SET64(4, RD(23) + RD(0)); JP_F_00127608(c);
L_00125470:;
SET64(5, (s32)rd32(c, (RW(29) + 68)));
L_00125474:;
SET64(31, 0x12547c); SET64(4, RD(23) + RD(0)); JP_F_00127608(c);
wr8(c, (RW(21) + 0), (u8)RW(0));
SET32(2, RW(30) + 1);
SET64(3, (s32)rd32(c, (RW(29) + 16)));
wr32(c, (RW(3) + 0), RW(2));
SET64(4, (s32)rd32(c, (RW(29) + 20)));
if (RD(4) != RD(0)) { wr32(c, (RW(4) + 0), RW(21)); goto L_00125498; }
L_00125498:;
SET64(2, (s32)rd32(c, (RW(29) + 84)));
L_0012549C:;
SET64(16, rd64(c, (RW(29) + 96)));
SET64(17, rd64(c, (RW(29) + 104)));
SET64(18, rd64(c, (RW(29) + 112)));
SET64(19, rd64(c, (RW(29) + 120)));
SET64(20, rd64(c, (RW(29) + 128)));
SET64(21, rd64(c, (RW(29) + 136)));
SET64(22, rd64(c, (RW(29) + 144)));
SET64(23, rd64(c, (RW(29) + 152)));
SET64(30, rd64(c, (RW(29) + 160)));
SET64(31, rd64(c, (RW(29) + 168)));
SET32(29, RW(29) + 176); return;
}
void JP_F_00124268(Ctx *c) { JP_B_00124268(c, 0x124268); }
void JP_F_00124690(Ctx *c) { JP_B_00124268(c, 0x124690); }
void JP_F_001246A0(Ctx *c) { JP_B_00124268(c, 0x1246a0); }
void JP_F_001246A4(Ctx *c) { JP_B_00124268(c, 0x1246a4); }
void JP_F_001246C8(Ctx *c) { JP_B_00124268(c, 0x1246c8); }
void JP_F_001246CC(Ctx *c) { JP_B_00124268(c, 0x1246cc); }

void JP_F_001254D0(Ctx *c) { /* func_001254D0 */
ENTER(0x1254d0);
SET64(3, (s64)(s32)0x3e0000);
SET64(2, (s32)rd32(c, (RW(3) + 1256))); return;
}

void JP_F_001254E0(Ctx *c) { /* func_001254E0 */
ENTER(0x1254e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(20));
SET64(20, (s64)(s32)0x3e0000);
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(2, (s32)rd32(c, (RW(20) + 1256)));
SET64(18, (s32)rd32(c, (RW(2) + 328)));
{ int t = RD(18) == RD(0); SET64(19, RD(4) + RD(0)); if (t) goto L_00125550; }
SET64(16, (s32)rd32(c, (RW(18) + 4)));
L_00125518:;
SET32(16, RW(16) + -1);
{ int t = RSD(16) < 0; SET32(3, RW(18) + 8); if (t) goto L_00125544; }
SET32(2, RW(16) << 2);
SET32(17, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
L_00125530:;
SET32(17, RW(17) + -4);
{ u32 t = RW(2); SET64(31, 0x12553c); SET32(16, RW(16) + -1); rt_call(c, t); }
if (RSD(16) >= 0) { SET64(2, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_00125530; } }
L_00125544:;
SET64(18, (s32)rd32(c, (RW(18) + 0)));
if (RD(18) != RD(0)) { SET64(16, (s32)rd32(c, (RW(18) + 4))); { POLL(); goto L_00125518; } }
L_00125550:;
SET64(4, (s32)rd32(c, (RW(20) + 1256)));
SET64(2, (s32)rd32(c, (RW(4) + 60)));
if (RD(2) == RD(0)) { SET64(4, RD(19) + RD(0)); goto L_0012556C; }
{ u32 t = RW(2); SET64(31, 0x125568);  rt_call(c, t); }
SET64(4, RD(19) + RD(0));
L_0012556C:;
SET64(19, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_00100218(c); return; }
}

void JP_F_00125590(Ctx *c) { /* func_00125590 */
ENTER(0x125590);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_001255D8; }
SET64(2, (s64)(s32)0x3e0000);
SET64(5, (s64)(s32)0x120000);
SET64(4, (s32)rd32(c, (RW(2) + 1256)));
SET32(5, RW(5) + 21904);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00126310(c); return; }
L_001255D8:;
SET64(3, (s32)rd32(c, (RW(17) + 84)));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(3) + 56))); goto L_001255F8; }
SET64(2, (s64)(s32)0x3e0000);
SET64(3, (s32)rd32(c, (RW(2) + 1256)));
wr32(c, (RW(17) + 84), RW(3));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
L_001255F8:;
if (RD(2) != RD(0)) { SET64(3, (s16)rd16(c, (RW(17) + 12))); goto L_0012560C; }
SET64(31, 0x125608); SET64(4, RD(3) + RD(0)); JP_F_001258B8(c);
SET64(3, (s16)rd16(c, (RW(17) + 12)));
L_0012560C:;
SET64(2, RD(3) & 0x8);
{ int t = RD(2) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0012568C; }
SET64(18, (s32)rd32(c, (RW(17) + 16)));
{ int t = RD(18) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0012568C; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(3, RD(3) & 0x3);
wr32(c, (RW(17) + 0), RW(18));
{ int t = RD(3) != RD(0); SET32(16, RW(2) - RW(18)); if (t) goto L_00125658; }
SET64(4, (s32)rd32(c, (RW(17) + 20))); goto L_00125658;
L_00125640:;
SET64(3, rd16(c, (RW(17) + 12)));
SET32(2, RW(0) + -1);
SET64(3, RD(3) | 0x40);
wr16(c, (RW(17) + 12), (u16)RW(3)); goto L_0012568C;
L_00125658:;
{ int t = RSD(16) <= 0; wr32(c, (RW(17) + 8), RW(4)); if (t) goto L_00125688; }
L_00125660:;
SET64(2, (s32)rd32(c, (RW(17) + 36)));
SET64(6, RD(16) + RD(0));
SET64(4, (s32)rd32(c, (RW(17) + 28)));
{ u32 t = RW(2); SET64(31, 0x125674); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) + RD(0));
{ int t = RSD(3) <= 0; SET32(16, RW(16) - RW(3)); if (t) { POLL(); goto L_00125640; } }
{ int t = RSD(16) > 0; SET32(18, RW(18) + RW(3)); if (t) { POLL(); goto L_00125660; } }
L_00125688:;
SET64(2, RD(0) + RD(0));
L_0012568C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_001256A8(Ctx *c) { /* func_001256A8 */
ENTER(0x1256a8);
SET64(2, (s64)(s32)0x130000);
SET64(3, (s64)(s32)0x130000);
SET64(8, (s64)(s32)0x130000);
SET64(9, (s64)(s32)0x130000);
SET32(2, RW(2) + -25232);
SET32(3, RW(3) + -25128);
SET32(8, RW(8) + -25000);
SET32(9, RW(9) + -24896);
wr32(c, (RW(4) + 84), RW(7));
wr16(c, (RW(4) + 12), (u16)RW(5));
wr16(c, (RW(4) + 14), (u16)RW(6));
wr32(c, (RW(4) + 32), RW(2));
wr32(c, (RW(4) + 36), RW(3));
wr32(c, (RW(4) + 40), RW(8));
wr32(c, (RW(4) + 44), RW(9));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(4)); return;
}

