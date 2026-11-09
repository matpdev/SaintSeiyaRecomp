#include "r5900.h"
#include "functab.h"

void JP_F_00252080(Ctx *c) { /* func_00252080 */
ENTER(0x252080);
SET64(2, (s8)rd8(c, (RW(4) + 1))); return;
}

void JP_F_00252088(Ctx *c) { /* func_00252088 */
ENTER(0x252088);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(16) + 8), RW(17));
SET64(31, 0x2520ac); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00247068(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00246E80(c); return; }
}

void JP_F_002520C8(Ctx *c) { /* func_002520C8 */
ENTER(0x2520c8);
SET32(5, RW(5) << 2);
SET32(4, RW(4) + RW(5));
wr32(c, (RW(4) + 12), RW(6)); return;
}

void JP_F_002520D8(Ctx *c) { /* func_002520D8 */
ENTER(0x2520d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(16) + 56), RW(17));
SET64(31, 0x2520fc); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00247098(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00246EB0(c); return; }
}

void JP_F_00252118(Ctx *c) { /* func_00252118 */
ENTER(0x252118);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x252130); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00247128(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00246ED0(c); return; }
}

void JP_F_00252148(Ctx *c) { /* func_00252148 */
ENTER(0x252148);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25215c); SET64(16, RD(4) + RD(0)); JP_F_00251E60(c);
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 8)));
wr8(c, (RW(16) + 1), (u8)RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00252178(Ctx *c) { /* func_00252178 */
ENTER(0x252178);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x252190); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00249408(c);
wr8(c, (RW(16) + 1), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002521A8(Ctx *c) { /* func_002521A8 */
ENTER(0x2521a8);
SET32(29, RW(29) + -80);
SET32(5, RW(0) + 1);
wr64(c, (RW(29) + 56), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET64(6, RD(0) | 0xc800);
wr64(c, (RW(29) + 40), RD(17));
SET64(7, RD(29) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 72), RD(31));
SET64(16, (s32)rd32(c, (RW(19) + 8)));
SET64(18, (s32)rd32(c, (RW(19) + 4)));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x2521ec); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(29) + 4)));
{ int t = RSD(4) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_0025223C; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET32(2, RW(5) >> 31); if (t) goto L_00252240; }
SET64(6, RD(4) + RD(0));
SET64(4, RD(3) + RD(0));
SET32(5, RW(5) + 1);
L_00252218:;
SET64(2, RSD(5) < RSD(6));
{ int t = RD(2) == RD(0); SET32(3, RW(4) + RW(5)); if (t) goto L_0025223C; }
SET64(2, (s8)rd8(c, (RW(3) + 0)));
if (RD(2) == RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00252218; } }
L_0025223C:;
SET32(2, RW(5) >> 31);
L_00252240:;
SET32(3, RW(5) + -1);
SET32(2, RW(5) + RW(2));
SET32(2, RSW(2) >> 1);
SET32(2, RW(2) << 1);
{ int t = RD(2) != RD(3); SET32(20, RW(29) + 16); if (t) goto L_002522A0; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x252270); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(31, 0x252278);  JP_F_00248828(c);
if (RD(2) != RD(0)) { SET32(2, RW(0) + 4); goto L_0025248C; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 5920);
SET64(31, 0x252294); SET32(5, RW(5) + 5952); JP_F_0024BE40(c);
SET32(2, RW(0) + 4); goto L_0025248C;
L_002522A0:;
SET64(4, RD(29) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(31, 0x2522b0); SET64(7, RD(29) + RD(0)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(6, RD(20) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x2522c8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(2, RSD(6) < (s64)16);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_00252300; }
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x2522e4); SET64(4, RD(18) + RD(0)); JP_F_00248E38(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_002522FC; }
SET64(2, RSD(2) < RSD(17));
{ int t = RD(2) == RD(0);  if (t) goto L_00252320; }
L_002522FC:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
L_00252300:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x252314); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 32))); goto L_00252494;
L_00252320:;
if (RSD(17) >= 0) { wr32(c, (RW(19) + 152), RW(17)); goto L_00252390; }
SET64(2, (s16)rd16(c, (RW(18) + 154)));
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_00252348; }
SET64(31, 0x25233c); SET64(17, RD(0) + RD(0)); JP_F_00248D98(c);
wr32(c, (RW(19) + 152), RW(17)); goto L_00252390;
L_00252348:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x252360); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(31, 0x252368);  JP_F_00248828(c);
if (RD(2) != RD(0)) { SET32(2, RW(0) + 4); goto L_0025248C; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 5984);
SET64(31, 0x252384); SET32(5, RW(5) + 6016); JP_F_0024BE40(c);
SET32(2, RW(0) + 4); goto L_0025248C;
L_00252390:;
SET64(31, 0x252398); SET64(4, RD(18) + RD(0)); JP_F_00248FD8(c);
SET32(3, RW(0) + 4);
{ int t = RD(2) != RD(3); SET32(2, RW(0) + 1); if (t) goto L_002523A8; }
wr8(c, (RW(19) + 3), (u8)RW(2));
L_002523A8:;
SET64(31, 0x2523b0); SET64(4, RD(18) + RD(0)); JP_F_00248FD8(c);
SET32(3, RW(0) + 2);
{ int t = RD(2) != RD(3); SET32(3, RW(0) + 64); if (t) goto L_002523D4; }
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(19) + 88);
SET64(2, RSD(6) < (s64)65);
SET64(31, 0x2523d4); if (RD(2) == 0) SET64(6, RD(3)); JP_F_00127218(c);
L_002523D4:;
SET64(31, 0x2523dc); SET64(4, RD(18) + RD(0)); JP_F_00248FD8(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(3) + -10);
SET64(2, RD(2) < (u64)(s64)3);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_00252408; }
SET32(2, RW(0) + 20);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 15); if (t) goto L_00252404; }
{ int t = RD(3) != RD(2); SET64(4, RD(29) + RD(0)); if (t) goto L_00252428; }
L_00252404:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
L_00252408:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x25241c); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 232))); goto L_0025246C;
L_00252428:;
SET64(6, RD(29) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x252438); SET64(7, RD(20) + RD(0)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x252450); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x252468); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 232)));
L_0025246C:;
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x400000); if (t) goto L_00252488; }
SET64(2, (s32)rd32(c, (RW(2) + -12720)));
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_00252488; }
{ u32 t = RW(2); SET64(31, 0x252488); SET64(5, (s32)rd32(c, (RW(4) + 20))); rt_call(c, t); }
L_00252488:;
SET32(2, RW(0) + 2);
L_0025248C:;
wr8(c, (RW(19) + 1), (u8)RW(2));
SET64(16, rd64(c, (RW(29) + 32)));
L_00252494:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002524B0(Ctx *c) { /* func_002524B0 */
ENTER(0x2524b0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(23));
SET64(23, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET32(17, RW(18) + 28);
wr64(c, (RW(29) + 64), RD(31));
SET32(16, RW(18) + 12);
SET64(20, (s32)rd32(c, (RW(18) + 12))); goto L_00252518;
L_00252500:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(16, RW(16) + 4);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(8, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(8); SET64(31, 0x252518); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
L_00252518:;
SET64(31, 0x252520); SET64(4, (s32)rd32(c, (RW(18) + 4))); JP_F_00248FE8(c);
SET64(5, RD(0) + RD(0));
SET64(2, RSD(19) < RSD(2));
SET32(19, RW(19) + 1);
SET64(7, RD(17) + RD(0));
SET32(17, RW(17) + 8);
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 16384); if (t) { POLL(); goto L_00252500; } }
SET64(31, 0x252544); SET64(4, RD(20) + RD(0)); JP_F_0026A4D0(c);
SET64(3, (s32)rd32(c, (RW(18) + 28)));
SET32(3, RW(3) - RW(2));
SET32(2, RW(3) >> 31);
SET32(3, RW(3) + RW(2));
SET32(3, RSW(3) >> 1);
wr32(c, (RW(22) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 32)));
SET64(4, (s32)rd32(c, (RW(18) + 56)));
SET32(3, RW(2) >> 31);
SET32(2, RW(2) + RW(3));
SET32(2, RSW(2) >> 1);
SET64(3, RSD(2) < RSD(4));
if (RD(3) != 0) SET64(4, RD(2));
wr32(c, (RW(23) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(18) + 60)));
if (RSD(3) < 0) { SET64(2, (s64)(s32)0x1fff0000); goto L_00252598; }
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET32(2, RW(3) - RW(2)); goto L_0025259C;
L_00252598:;
SET64(2, RD(2) | 0xffff);
L_0025259C:;
wr32(c, (RW(21) + 0), RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(23, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); { JP_F_00248FD0(c); return; }
}

void JP_F_002525D0(Ctx *c) { /* func_002525D0 */
ENTER(0x2525d0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 72), RD(31));
SET64(3, (s32)rd32(c, (RW(18) + 60)));
SET64(20, (s32)rd32(c, (RW(18) + 4)));
{ int t = RSD(3) < 0; SET64(17, (s32)rd32(c, (RW(18) + 8))); if (t) goto L_00252624; }
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET64(2, RSD(2) < RSD(3));
if (RD(2) != RD(0)) { SET64(3, (s8)rd8(c, (RW(18) + 3))); goto L_00252628; }
SET64(2, (s32)rd32(c, (RW(18) + 72)));
if (RD(2) == RD(0)) { SET64(3, (s8)rd8(c, (RW(18) + 3))); goto L_00252628; }
{ u32 t = RW(2); SET64(31, 0x252624); SET64(4, (s32)rd32(c, (RW(18) + 76))); rt_call(c, t); }
L_00252624:;
SET64(3, (s8)rd8(c, (RW(18) + 3)));
L_00252628:;
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_00252660; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x252648); SET32(5, RW(0) + 1); rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_00252660; }
SET32(2, RW(0) + 3);
wr8(c, (RW(18) + 1), (u8)RW(2)); goto L_00252914;
L_00252660:;
SET32(19, RW(18) + 20);
SET64(6, (s64)(s32)0x7fff0000);
SET64(4, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET32(5, RW(0) + 1);
SET64(6, RD(6) | 0xffff);
{ u32 t = RW(3); SET64(31, 0x252680); SET64(7, RD(19) + RD(0)); rt_call(c, t); }
SET64(31, 0x252688); SET64(4, RD(20) + RD(0)); JP_F_00248FD8(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00252810; }
SET64(6, (s32)rd32(c, (RW(18) + 24)));
SET64(2, RSD(6) < (s64)4);
{ int t = RD(2) != RD(0); SET64(5, RD(0) | 0x8001); if (t) goto L_00252810; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(3, rd16(c, (RW(4) + 0)));
SET64(2, rd8(c, (RW(4) + 1)));
SET32(3, RW(3) << 8);
SET64(2, RD(2) | RD(3));
SET64(2, RD(2) & 0xffff);
{ int t = RD(2) != RD(5); SET32(2, RW(0) + 3); if (t) goto L_00252810; }
SET64(5, RD(6) + RD(0));
wr8(c, (RW(18) + 1), (u8)RW(2));
SET64(31, 0x2526d0); SET32(6, RW(29) + 16); JP_F_0024B338(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 156))); goto L_00252730; }
SET64(5, (s16)rd16(c, (RW(29) + 16)));
SET64(2, (s32)rd32(c, (RW(18) + 24)));
SET64(2, RSD(2) < RSD(5));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_0025288C; }
SET64(4, RD(19) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(31, 0x2526fc); SET64(7, RD(29) + RD(0)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x252714); SET64(6, RD(19) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x25272c); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 156)));
L_00252730:;
{ int t = RD(2) == RD(0); SET64(20, RD(19) + RD(0)); if (t) goto L_00252914; }
SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_002527DC;
L_00252740:;
SET64(16, RSD(5) < RSD(4));
if (RD(16) == RD(0)) { SET64(4, RD(20) + RD(0)); goto L_00252794; }
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(3, (s8)rd8(c, (RW(2) + 0)));
if (RD(3) != RD(0)) { SET64(4, RD(20) + RD(0)); goto L_00252794; }
SET64(6, RD(4) + RD(0));
SET32(5, RW(5) + 1);
L_00252768:;
SET64(2, RSD(5) < RSD(6));
if (RD(2) == RD(0)) { SET64(16, RSD(5) < RSD(4)); goto L_00252790; }
SET64(2, (s32)rd32(c, (RW(18) + 20)));
SET32(2, RW(2) + RW(5));
SET64(3, (s8)rd8(c, (RW(2) + 0)));
if (RD(3) == RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00252768; } }
SET64(16, RSD(5) < RSD(4));
L_00252790:;
SET64(4, RD(20) + RD(0));
L_00252794:;
SET64(6, RD(20) + RD(0));
SET64(31, 0x2527a0); SET64(7, RD(29) + RD(0)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x2527b8); SET64(6, RD(20) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x2527d0); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
{ int t = RD(16) != RD(0); SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_00252918; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_002527DC:;
SET64(6, (s64)(s32)0x7fff0000);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET64(6, RD(6) | 0xffff);
{ u32 t = RW(2); SET64(31, 0x2527f8); SET64(7, RD(19) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 24)));
{ int t = RD(4) != RD(0); SET64(5, RD(0) + RD(0)); if (t) { POLL(); goto L_00252740; } }
SET64(16, rd64(c, (RW(29) + 32))); goto L_00252918;
L_00252810:;
SET64(31, 0x252818); SET64(4, RD(18) + RD(0)); JP_F_002531F0(c);
SET64(3, (s32)rd32(c, (RW(18) + 52)));
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) != RD(0); SET32(2, RW(0) + 3); if (t) goto L_00252850; }
SET64(4, RD(17) + RD(0));
wr8(c, (RW(18) + 1), (u8)RW(2));
SET64(6, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 28)));
{ u32 t = RW(3); SET64(31, 0x252844); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 32))); goto L_00252918;
L_00252850:;
SET64(31, 0x252858); SET64(4, RD(18) + RD(0)); JP_F_002531C0(c);
SET64(4, (s32)rd32(c, (RW(18) + 12)));
SET64(16, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x252870); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(2) >> 31);
SET32(3, RW(3) + RW(2));
SET32(3, RSW(3) >> 1);
SET64(3, RSD(3) < RSD(16));
{ int t = RD(3) == RD(0);  if (t) goto L_002528A8; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_0025288C:;
SET64(4, RD(17) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x2528a0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 32))); goto L_00252918;
L_002528A8:;
SET64(31, 0x2528b0); SET64(4, RD(20) + RD(0)); JP_F_00248FD8(c);
SET32(3, RW(0) + 10);
{ int t = RD(2) != RD(3); SET32(5, RW(0) + 1); if (t) goto L_002528D0; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x2528d0); SET64(6, RD(19) + RD(0)); rt_call(c, t); }
L_002528D0:;
SET64(31, 0x2528d8); SET64(4, RD(20) + RD(0)); JP_F_00248FD8(c);
SET32(3, RW(0) + 15);
if (RD(2) != RD(3)) { SET64(6, (s32)rd32(c, (RW(18) + 24))); goto L_00252900; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x2528fc); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(6, (s32)rd32(c, (RW(18) + 24)));
L_00252900:;
SET64(4, RD(20) + RD(0));
SET64(31, 0x25290c); SET64(5, (s32)rd32(c, (RW(18) + 20))); JP_F_00249370(c);
SET64(31, 0x252914); SET64(4, RD(20) + RD(0)); JP_F_002493F0(c);
L_00252914:;
SET64(16, rd64(c, (RW(29) + 32)));
L_00252918:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00252938(Ctx *c) { /* func_00252938 */
ENTER(0x252938);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 64), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 72), RD(19));
wr64(c, (RW(29) + 80), RD(20));
SET32(20, RW(18) + 12);
wr64(c, (RW(29) + 88), RD(21));
SET32(21, RW(18) + 28);
wr64(c, (RW(29) + 96), RD(22));
SET64(22, RD(0) + RD(0));
wr64(c, (RW(29) + 112), RD(30));
wr64(c, (RW(29) + 56), RD(17));
wr64(c, (RW(29) + 104), RD(23));
wr64(c, (RW(29) + 120), RD(31));
SET64(23, (s32)rd32(c, (RW(18) + 4)));
SET64(17, (s32)rd32(c, (RW(18) + 8)));
SET64(31, 0x252984); SET64(4, RD(23) + RD(0)); JP_F_00249090(c);
SET64(4, RD(23) + RD(0));
SET64(31, 0x252990); SET64(16, RD(2) + RD(0)); JP_F_00249490(c);
SET64(4, RD(23) + RD(0));
SET64(31, 0x25299c); wr32(c, (RW(29) + 32), RW(2)); JP_F_00249498(c);
SET32(4, RW(18) + 20);
SET64(19, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 52)));
SET32(30, RW(29) + 16);
SET64(5, (s32)rd32(c, (RW(29) + 32)));
SET32(16, RW(16) - RW(2));
SET64(6, RD(29) + RD(0));
SET64(2, RSD(19) < RSD(16));
SET64(7, RD(30) + RD(0));
SET64(31, 0x2529c8); if (RD(2) == 0) SET64(19, RD(16)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(6, RD(29) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x2529e0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x2529f8); SET64(6, RD(30) + RD(0)); rt_call(c, t); }
 goto L_00252A60;
L_00252A00:;
SET64(31, 0x252a08);  JP_F_0026B318(c);
SET64(2, (s32)rd32(c, (RW(18) + 80)));
SET64(5, RD(22) + RD(0));
{ int t = RD(2) == RD(0); SET32(22, RW(22) + 1); if (t) goto L_00252A28; }
SET64(4, (s32)rd32(c, (RW(18) + 84)));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
{ u32 t = RW(2); SET64(31, 0x252a28); SET64(7, (s32)rd32(c, (RW(29) + 4))); rt_call(c, t); }
L_00252A28:;
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET64(6, RD(29) + RD(0));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x252a44); SET32(21, RW(21) + 8); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET64(5, RD(0) + RD(0));
SET64(6, RD(30) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x252a60); SET32(20, RW(20) + 4); rt_call(c, t); }
L_00252A60:;
SET64(31, 0x252a68); SET64(4, (s32)rd32(c, (RW(18) + 4))); JP_F_00248FE8(c);
SET64(4, RD(21) + RD(0));
SET64(2, RSD(22) < RSD(2));
SET32(5, RW(19) << 1);
SET64(6, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET64(7, RD(30) + RD(0)); if (t) { POLL(); goto L_00252A00; } }
SET64(3, (s32)rd32(c, (RW(18) + 44)));
SET64(4, RD(23) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 32)));
SET32(3, RW(3) + RW(19));
SET64(5, (s32)rd32(c, (RW(18) + 48)));
wr32(c, (RW(18) + 44), RW(3));
SET64(7, (s32)rd32(c, (RW(18) + 52)));
SET32(5, RW(5) + RW(2));
SET64(3, (s32)rd32(c, (RW(29) + 32)));
SET64(6, (s32)rd32(c, (RW(18) + 64)));
SET32(7, RW(7) + RW(19));
SET64(2, (s32)rd32(c, (RW(18) + 68)));
SET32(6, RW(6) + RW(19));
wr32(c, (RW(18) + 48), RW(5));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(18) + 52), RW(7));
wr32(c, (RW(18) + 68), RW(2));
SET64(31, 0x252acc); wr32(c, (RW(18) + 64), RW(6)); JP_F_00249450(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(21, rd64(c, (RW(29) + 88)));
SET64(22, rd64(c, (RW(29) + 96)));
SET64(23, rd64(c, (RW(29) + 104)));
SET64(30, rd64(c, (RW(29) + 112)));
SET64(31, rd64(c, (RW(29) + 120)));
SET32(29, RW(29) + 128); return;
}

void JP_F_00252B00(Ctx *c) { /* func_00252B00 */
ENTER(0x252b00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x252b28); SET64(4, RD(17) + RD(0)); JP_F_00249090(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x252b34); SET64(16, RD(2) + RD(0)); JP_F_00249490(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x252b40); SET64(19, RD(2) + RD(0)); JP_F_00249498(c);
SET64(4, (s32)rd32(c, (RW(18) + 52)));
SET64(6, (s32)rd32(c, (RW(18) + 44)));
SET32(16, RW(16) - RW(4));
SET64(5, (s32)rd32(c, (RW(18) + 48)));
SET64(3, RSD(2) < RSD(16));
SET64(17, rd64(c, (RW(29) + 8)));
if (RD(3) != 0) SET64(16, RD(2));
SET32(5, RW(5) + RW(19));
SET32(4, RW(4) + RW(16));
SET32(6, RW(6) + RW(16));
wr32(c, (RW(18) + 52), RW(4));
wr32(c, (RW(18) + 44), RW(6));
wr32(c, (RW(18) + 48), RW(5));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00252B90(Ctx *c) { /* func_00252B90 */
ENTER(0x252b90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(16, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x252bb0); SET64(4, RD(16) + RD(0)); JP_F_00249368(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00252BC0; }
SET64(31, 0x252bc0); SET64(4, RD(17) + RD(0)); JP_F_002525D0(c);
L_00252BC0:;
SET64(31, 0x252bc8); SET64(4, RD(16) + RD(0)); JP_F_00249A58(c);
SET64(31, 0x252bd0); SET64(4, RD(16) + RD(0)); JP_F_00249368(c);
SET32(3, RW(0) + 3);
if (RD(2) != RD(3)) { SET64(4, (s16)rd16(c, (RW(16) + 152))); goto L_00252BE8; }
SET64(31, 0x252be4); SET64(4, RD(17) + RD(0)); JP_F_00252938(c);
SET64(4, (s16)rd16(c, (RW(16) + 152)));
L_00252BE8:;
SET32(2, RW(0) + 10);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 20); if (t) goto L_00252C14; }
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 11); if (t) goto L_00252C14; }
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 12); if (t) goto L_00252C14; }
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 15); if (t) goto L_00252C14; }
{ int t = RD(4) != RD(2); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00252C30; }
L_00252C14:;
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00252B00(c); return; }
L_00252C30:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00252C40(Ctx *c) { /* func_00252C40 */
ENTER(0x252c40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 160)));
if (RSD(2) <= 0) { SET64(3, (s8)rd8(c, (RW(16) + 1))); goto L_00252C78; }
SET64(31, 0x252c64);  JP_F_0024A8C0(c);
SET64(31, 0x252c6c); SET64(4, RD(16) + RD(0)); JP_F_00252CE8(c);
SET64(31, 0x252c74);  JP_F_0024A8D8(c);
SET64(3, (s8)rd8(c, (RW(16) + 1)));
L_00252C78:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 1); goto L_00252C98; }
SET64(31, 0x252c8c); SET64(4, RD(16) + RD(0)); JP_F_00252B90(c);
SET64(2, (s32)rd32(c, (RW(16) + 164))); goto L_00252CAC;
L_00252C98:;
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(16) + 164))); goto L_00252CAC; }
SET64(31, 0x252ca8); SET64(4, RD(16) + RD(0)); JP_F_002521A8(c);
SET64(2, (s32)rd32(c, (RW(16) + 164)));
L_00252CAC:;
if (RSD(2) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00252CD8; }
SET64(31, 0x252cbc);  JP_F_0024A8C0(c);
SET64(31, 0x252cc4); SET64(4, RD(16) + RD(0)); JP_F_00252E38(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8D8(c); return; }
L_00252CD8:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00252CE8(Ctx *c) { /* func_00252CE8 */
ENTER(0x252ce8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET64(3, (s8)rd8(c, (RW(18) + 2)));
SET32(17, RW(2) << 1);
{ int t = RSD(3) <= 0; SET64(4, rd8(c, (RW(18) + 2))); if (t) goto L_00252D84; }
SET32(16, RW(18) + 12);
L_00252D28:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(6, (s64)(s32)0x7fff0000);
SET64(7, RD(29) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(6, RD(6) | 0xffff);
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x252d4c); SET32(19, RW(19) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(8, (s32)rd32(c, (RW(29) + 4)));
SET64(5, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(4) + 0)));
SET64(6, RD(29) + RD(0));
SET64(2, RSD(17) < RSD(8));
SET32(16, RW(16) + 4);
SET64(3, (s32)rd32(c, (RW(7) + 28)));
{ u32 t = RW(3); SET64(31, 0x252d74); if (RD(2) == 0) SET64(17, RD(8)); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(18) + 2)));
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(18) + 2))); if (t) { POLL(); goto L_00252D28; } }
L_00252D84:;
SET32(2, RW(17) >> 31);
SET32(2, RW(17) + RW(2));
SET32(20, RSW(2) >> 1);
SET32(17, RW(20) << 1);
{ int t = RSD(17) <= 0; SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_00252E18; }
SET32(2, RW(4) << 24);
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00252E08; }
SET32(16, RW(18) + 12);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_00252DB0:;
SET64(7, RD(29) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x252dcc); SET32(19, RW(19) + 1); rt_call(c, t); }
SET64(5, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x252ddc); SET64(6, RD(17) + RD(0)); JP_F_001273D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(5, RW(0) + 1);
SET64(6, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(3); SET64(31, 0x252df8); SET32(16, RW(16) + 4); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(18) + 2)));
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00252DB0; } }
L_00252E08:;
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET32(2, RW(2) - RW(20));
wr32(c, (RW(18) + 160), RW(2));
SET64(16, rd64(c, (RW(29) + 16)));
L_00252E18:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00252E38(Ctx *c) { /* func_00252E38 */
ENTER(0x252e38);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, (s32)rd32(c, (RW(18) + 164)));
SET64(3, (s8)rd8(c, (RW(18) + 2)));
SET32(17, RW(2) << 1);
{ int t = RSD(3) <= 0; SET64(4, rd8(c, (RW(18) + 2))); if (t) goto L_00252ED4; }
SET32(16, RW(18) + 12);
L_00252E78:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(6, (s64)(s32)0x7fff0000);
SET64(7, RD(29) + RD(0));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(6, RD(6) | 0xffff);
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x252e9c); SET32(19, RW(19) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(8, (s32)rd32(c, (RW(29) + 4)));
SET32(5, RW(0) + 1);
SET64(7, (s32)rd32(c, (RW(4) + 0)));
SET64(6, RD(29) + RD(0));
SET64(2, RSD(17) < RSD(8));
SET32(16, RW(16) + 4);
SET64(3, (s32)rd32(c, (RW(7) + 28)));
{ u32 t = RW(3); SET64(31, 0x252ec4); if (RD(2) == 0) SET64(17, RD(8)); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(18) + 2)));
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(18) + 2))); if (t) { POLL(); goto L_00252E78; } }
L_00252ED4:;
SET32(2, RW(17) >> 31);
SET32(2, RW(17) + RW(2));
SET32(20, RSW(2) >> 1);
SET32(17, RW(20) << 1);
{ int t = RSD(17) <= 0; SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_00252F58; }
SET32(2, RW(4) << 24);
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00252F48; }
SET32(16, RW(18) + 12);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_00252F00:;
SET32(5, RW(0) + 1);
SET64(6, RD(17) + RD(0));
SET64(7, RD(29) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x252f1c); SET32(19, RW(19) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(0) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(3); SET64(31, 0x252f38); SET32(16, RW(16) + 4); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(18) + 2)));
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00252F00; } }
L_00252F48:;
SET64(2, (s32)rd32(c, (RW(18) + 164)));
SET32(2, RW(2) - RW(20));
wr32(c, (RW(18) + 164), RW(2));
SET64(16, rd64(c, (RW(29) + 16)));
L_00252F58:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00252F78(Ctx *c) { /* func_00252F78 */
ENTER(0x252f78);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -12712);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
L_00252FA0:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00252FB8; }
SET64(31, 0x252fb4); SET64(4, RD(16) + RD(0)); JP_F_00252C40(c);
SET32(17, RW(17) + -1);
L_00252FB8:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 168); if (t) { POLL(); goto L_00252FA0; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00252FD8(Ctx *c) { /* func_00252FD8 */
ENTER(0x252fd8);
SET64(2, (s32)rd32(c, (RW(4) + 48))); return;
}

void JP_F_00252FE0(Ctx *c) { /* func_00252FE0 */
ENTER(0x252fe0);
SET64(2, (s32)rd32(c, (RW(4) + 44))); return;
}

void JP_F_00252FE8(Ctx *c) { /* func_00252FE8 */
ENTER(0x252fe8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002494A0(c); return; }
}

void JP_F_00253000(Ctx *c) { /* func_00253000 */
ENTER(0x253000);
wr32(c, (RW(4) + 52), RW(5)); return;
}

void JP_F_00253008(Ctx *c) { /* func_00253008 */
ENTER(0x253008);
SET64(2, (s32)rd32(c, (RW(4) + 52))); return;
}

void JP_F_00253010(Ctx *c) { /* func_00253010 */
ENTER(0x253010);
wr32(c, (RW(4) + 156), RW(5)); return;
}

void JP_F_00253018(Ctx *c) { /* func_00253018 */
ENTER(0x253018);
SET64(2, (s32)rd32(c, (RW(4) + 156))); return;
}

void JP_F_00253020(Ctx *c) { /* func_00253020 */
ENTER(0x253020);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00249188(c); return; }
}

void JP_F_00253038(Ctx *c) { /* func_00253038 */
ENTER(0x253038);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002491F0(c); return; }
}

static void JP_B_00253050(Ctx *c, u32 entry) { /* func_00253050 */
ENTER(entry);
switch (entry) { case 0x253064: goto L_00253064; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00249238(c); return; }
if (0) { L_00253064:; SET32(29, RW(29) + 16); }
}
void JP_F_00253050(Ctx *c) { JP_B_00253050(c, 0x253050); }
void JP_F_00253064(Ctx *c) { JP_B_00253050(c, 0x253064); }

void JP_F_00253068(Ctx *c) { /* func_00253068 */
ENTER(0x253068);
SET32(29, RW(29) + -16);
SET32(5, RW(5) << 16);
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(6) << 16);
SET32(7, RW(7) << 16);
SET32(5, RSW(5) >> 16);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET32(6, RSW(6) >> 16);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(7, RSW(7) >> 16);
SET32(29, RW(29) + 16); { JP_F_00249258(c); return; }
}

void JP_F_00253098(Ctx *c) { /* func_00253098 */
ENTER(0x253098);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00248D90(c); return; }
}

void JP_F_002530B0(Ctx *c) { /* func_002530B0 */
ENTER(0x2530b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2530cc); SET64(16, RD(4) + RD(0)); JP_F_0024A8C0(c);
if (RSD(17) <= 0) { SET64(2, (s32)rd32(c, (RW(16) + 164))); goto L_002530E8; }
SET64(2, (s32)rd32(c, (RW(16) + 160)));
SET32(2, RW(2) + RW(17));
wr32(c, (RW(16) + 160), RW(2)); goto L_002530F0;
L_002530E8:;
SET32(2, RW(2) - RW(17));
wr32(c, (RW(16) + 164), RW(2));
L_002530F0:;
SET64(31, 0x2530f8);  JP_F_0024A8D8(c);
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00253110(Ctx *c) { /* func_00253110 */
ENTER(0x253110);
wr32(c, (RW(4) + 84), RW(6));
wr32(c, (RW(4) + 80), RW(5)); return;
}

void JP_F_00253120(Ctx *c) { /* func_00253120 */
ENTER(0x253120);
wr32(c, (RW(4) + 76), RW(6));
wr32(c, (RW(4) + 72), RW(5)); return;
}

void JP_F_00253130(Ctx *c) { /* func_00253130 */
ENTER(0x253130);
wr32(c, (RW(4) + 60), RW(5)); return;
}

void JP_F_00253138(Ctx *c) { /* func_00253138 */
ENTER(0x253138);
SET64(2, (s32)rd32(c, (RW(4) + 60))); return;
}

void JP_F_00253140(Ctx *c) { /* func_00253140 */
ENTER(0x253140);
wr32(c, (RW(4) + 64), RW(5)); return;
}

void JP_F_00253148(Ctx *c) { /* func_00253148 */
ENTER(0x253148);
SET64(2, (s32)rd32(c, (RW(4) + 64))); return;
}

void JP_F_00253150(Ctx *c) { /* func_00253150 */
ENTER(0x253150);
wr32(c, (RW(4) + 68), RW(5)); return;
}

void JP_F_00253158(Ctx *c) { /* func_00253158 */
ENTER(0x253158);
SET64(2, (s32)rd32(c, (RW(4) + 68))); return;
}

void JP_F_00253160(Ctx *c) { /* func_00253160 */
ENTER(0x253160);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00248FD8(c); return; }
}

void JP_F_00253178(Ctx *c) { /* func_00253178 */
ENTER(0x253178);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00248FE0(c); return; }
}

void JP_F_00253190(Ctx *c) { /* func_00253190 */
ENTER(0x253190);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00248FE8(c); return; }
}

void JP_F_002531A8(Ctx *c) { /* func_002531A8 */
ENTER(0x2531a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00249020(c); return; }
}

void JP_F_002531C0(Ctx *c) { /* func_002531C0 */
ENTER(0x2531c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00249080(c); return; }
}

void JP_F_002531D8(Ctx *c) { /* func_002531D8 */
ENTER(0x2531d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00249088(c); return; }
}

void JP_F_002531F0(Ctx *c) { /* func_002531F0 */
ENTER(0x2531f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00249090(c); return; }
}

void JP_F_00253208(Ctx *c) { /* func_00253208 */
ENTER(0x253208);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00249098(c); return; }
}

void JP_F_00253220(Ctx *c) { /* func_00253220 */
ENTER(0x253220);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002490A8(c); return; }
}

void JP_F_00253238(Ctx *c) { /* func_00253238 */
ENTER(0x253238);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002490A0(c); return; }
}

void JP_F_00253250(Ctx *c) { /* func_00253250 */
ENTER(0x253250);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002490B0(c); return; }
}

void JP_F_00253268(Ctx *c) { /* func_00253268 */
ENTER(0x253268);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00253288; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002490B8(c); return; }
L_00253288:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00253298(Ctx *c) { /* func_00253298 */
ENTER(0x253298);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002490D0(c); return; }
}

void JP_F_002532B0(Ctx *c) { /* func_002532B0 */
ENTER(0x2532b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002490D8(c); return; }
}

void JP_F_002532C8(Ctx *c) { /* func_002532C8 */
ENTER(0x2532c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002490E0(c); return; }
}

void JP_F_002532E0(Ctx *c) { /* func_002532E0 */
ENTER(0x2532e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2532f8); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002490E0(c);
{ int t = RSD(2) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00253328; }
SET64(2, rd8(c, (RW(16) + 1)));
SET32(2, RW(2) + -2);
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00253328; }
SET64(31, 0x25331c); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002490E8(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0025332C;
L_00253328:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0025332C:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00253338(Ctx *c) { /* func_00253338 */
ENTER(0x253338);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x253358); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002490E0(c);
{ int t = RSD(2) <= 0; SET32(2, RW(0) + -128); if (t) goto L_00253388; }
SET64(2, rd8(c, (RW(16) + 1)));
SET32(2, RW(2) + -2);
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) == RD(0)) { SET32(2, RW(0) + -128); goto L_00253388; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x253380); SET64(5, RD(17) + RD(0)); JP_F_002490F0(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0025338C;
L_00253388:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0025338C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002533A0(Ctx *c) { /* func_002533A0 */
ENTER(0x2533a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2533b8); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002490E0(c);
if (RSD(2) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002533E8; }
SET64(2, rd8(c, (RW(16) + 1)));
SET32(2, RW(2) + -2);
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002533E8; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00249100(c); return; }
L_002533E8:;
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002533F8(Ctx *c) { /* func_002533F8 */
ENTER(0x2533f8);
SET64(2, (s32)rd32(c, (RW(4) + 152))); return;
}

void JP_F_00253400(Ctx *c) { /* func_00253400 */
ENTER(0x253400);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00249018(c); return; }
}

void JP_F_00253418(Ctx *c) { /* func_00253418 */
ENTER(0x253418);
SET32(2, RW(4) + 88); return;
}

void JP_F_00253420(Ctx *c) { /* func_00253420 */
ENTER(0x253420);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00249108(c); return; }
}

void JP_F_00253438(Ctx *c) { /* func_00253438 */
ENTER(0x253438);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00249148(c); return; }
}

void JP_F_00253450(Ctx *c) { /* func_00253450 */
ENTER(0x253450);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00253458(Ctx *c) { /* func_00253458 */
ENTER(0x253458);
SET64(2, (s64)(s32)0x400000);
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(2) + -10020), RW(4));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(3) + -10016), RW(5)); return;
}

void JP_F_00253470(Ctx *c) { /* func_00253470 */
ENTER(0x253470);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + -10020)));
SET64(5, RD(4) + RD(0));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00253494; }
SET64(2, (s64)(s32)0x400000);
{ u32 t = RW(3); SET64(31, 0x253494); SET64(4, (s32)rd32(c, (RW(2) + -10016))); rt_call(c, t); }
L_00253494:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_002534A8(Ctx *c) { /* func_002534A8 */
ENTER(0x2534a8);
SET64(4, (s64)(s32)0x400000);
SET64(2, RD(0) + RD(0));
SET32(4, RW(4) + -10024);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 0), RW(3)); return;
}

void JP_F_002534C8(Ctx *c) { /* func_002534C8 */
ENTER(0x2534c8);
SET64(4, (s64)(s32)0x400000);
SET64(2, RD(0) + RD(0));
SET32(4, RW(4) + -10024);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + -1);
wr32(c, (RW(4) + 0), RW(3)); return;
}

void JP_F_002534E8(Ctx *c) { /* func_002534E8 */
ENTER(0x2534e8);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -48);
SET64(3, (s32)rd32(c, (RW(2) + -10024)));
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
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_0025352C; }
SET64(31, 0x25352c);  JP_F_002534A8(c);
L_0025352C:;
wr16(c, (RW(18) + 0), (u16)RW(0));
wr16(c, (RW(19) + 0), (u16)RW(0));
{ int t = RD(17) != RD(0); wr16(c, (RW(20) + 0), (u16)RW(0)); if (t) goto L_00253544; }
{ int t = RSD(16) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0025367C; }
L_00253544:;
SET64(11, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET32(2, RW(11) + 1040);
{ int t = RSD(16) <= 0; SET64(10, (s16)rd16(c, (RW(2) + 512))); if (t) goto L_002535B4; }
SET64(8, RD(2) + RD(0));
L_00253560:;
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
{ int t = RD(6) != RD(0); SET64(10, (s16)rd16(c, (RW(3) + 0))); if (t) { POLL(); goto L_00253560; } }
SET32(2, RW(11) + 1040);
SET64(7, RD(0) + RD(0));
L_002535B4:;
{ int t = RSD(16) <= 0; SET64(8, (s16)rd16(c, (RW(2) + 1024))); if (t) goto L_0025360C; }
SET64(9, RD(2) + RD(0));
L_002535C0:;
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
{ int t = RD(6) != RD(0); SET64(8, (s16)rd16(c, (RW(3) + 0))); if (t) { POLL(); goto L_002535C0; } }
L_0025360C:;
SET32(2, RW(11) + 1040);
SET64(7, RD(0) + RD(0));
{ int t = RSD(16) <= 0; SET64(4, (s16)rd16(c, (RW(2) + 1536))); if (t) goto L_0025366C; }
SET64(9, RD(2) + RD(0));
L_00253620:;
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
{ int t = RD(6) != RD(0); SET64(4, (s16)rd16(c, (RW(3) + 0))); if (t) { POLL(); goto L_00253620; } }
L_0025366C:;
wr16(c, (RW(18) + 0), (u16)RW(10));
SET64(2, RD(0) + RD(0));
wr16(c, (RW(19) + 0), (u16)RW(8));
wr16(c, (RW(20) + 0), (u16)RW(4));
L_0025367C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002536A0(Ctx *c) { /* func_002536A0 */
ENTER(0x2536a0);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -32);
SET64(3, (s32)rd32(c, (RW(2) + -10024)));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_002536D4; }
SET64(31, 0x2536d4);  JP_F_002534A8(c);
L_002536D4:;
SET64(4, (s64)(s32)0x4b0000);
SET64(6, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(8, RD(18) + RD(0));
SET32(4, RW(4) + 6056);
SET64(31, 0x2536f0); SET32(5, RW(0) + 6); JP_F_002534E8(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00253710(Ctx *c) { /* func_00253710 */
ENTER(0x253710);
SET64(7, rd16(c, (RW(5) + 0)));
SET64(2, RD(0) + RD(0));
SET64(5, rd16(c, (RW(4) + 0)));
SET64(3, rd16(c, (RW(6) + 0)));
mul_s(c, 0, 5, RSW(5), RSW(7));
SET32(3, RW(3) + RW(5));
wr16(c, (RW(4) + 0), (u16)RW(3)); return;
}

void JP_F_00253730(Ctx *c) { /* func_00253730 */
ENTER(0x253730);
SET32(2, RW(0) + 256); return;
}

void JP_F_00253738(Ctx *c) { /* func_00253738 */
ENTER(0x253738);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 6120); return;
}

void JP_F_00253748(Ctx *c) { /* func_00253748 */
ENTER(0x253748);
SET32(3, RW(6) + 31);
SET32(6, RW(6) + 62);
SET64(2, RSD(3) < (s64)0);
if (RD(2) != 0) SET64(3, RD(6));
SET32(3, RSW(3) >> 5);
mul_s(c, 0, 3, RSW(3), RSW(4));
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) + 4); return;
}

void JP_F_00253778(Ctx *c) { /* func_00253778 */
ENTER(0x253778);
SET32(29, RW(29) + -80);
SET32(11, RW(0) + 32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
SET64(2, RD(18) ^ 0x1);
SET32(3, RW(0) + 64);
if (RD(2) != 0) SET64(3, RD(11));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET64(5, RD(0) + RD(0));
div_s(c, 0, RSW(17), RSW(3));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(8) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(9) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(10) + RD(0));
wr64(c, (RW(29) + 56), RD(23));
SET64(23, RD(6) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
if (RD(3) == RD(0)) { rt_break(c, 0x2537d8); goto L_002537DC; }
L_002537DC:;
SET32(4, RW(0) + 1);
SET32(6, RW(0) + 4);
SET32(7, RW(0) + 4);
SET64(11, c->hi.d[0]);
SET32(11, RW(3) - RW(11));
div_s(c, 0, RSW(11), RSW(3));
SET64(8, c->hi.d[0]);
SET32(2, RW(17) + RW(8));
wr32(c, (RW(19) + 0), RW(8));
SET32(9, RW(2) + 31);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(9));
SET32(2, RSW(2) >> 5);
mul_s(c, 0, 2, RSW(2), RSW(18));
SET32(16, RW(2) << 3);
SET64(31, 0x253820); SET32(16, RW(16) + RW(2)); JP_F_0024B398(c);
SET32(16, RW(16) << 1);
SET32(6, RW(0) + 2048);
SET32(16, RW(16) + RW(2));
SET32(5, RW(16) + 4);
SET32(16, RW(16) + 2051);
SET64(4, RSD(5) < (s64)0);
SET64(3, RD(5) + RD(0));
if (RD(4) != 0) SET64(3, RD(16));
SET64(4, RD(18) + RD(0));
SET32(3, RSW(3) >> 11);
SET32(3, RW(3) << 11);
SET32(5, RW(5) - RW(3));
SET32(6, RW(6) - RW(5));
SET32(7, RW(6) + 2047);
SET64(5, RSD(6) < (s64)0);
SET64(3, RD(6) + RD(0));
if (RD(5) != 0) SET64(3, RD(7));
SET32(3, RSW(3) >> 11);
SET32(5, RW(3) << 11);
SET32(3, RW(6) - RW(5));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(20) + 0), RW(2));
SET64(5, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(19) + 0)));
SET64(31, 0x253888); SET32(6, RW(17) + RW(6)); JP_F_00253748(c);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(21) + 0), RW(2));
SET64(6, (s32)rd32(c, (RW(19) + 0)));
SET64(5, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x2538a0); SET32(6, RW(23) + RW(6)); JP_F_00253748(c);
wr32(c, (RW(22) + 0), RW(2));
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

void JP_F_002538D0(Ctx *c) { /* func_002538D0 */
ENTER(0x2538d0);
SET32(29, RW(29) + -64);
SET64(11, RD(8) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(6) + RD(0));
wr32(c, (RW(29) + 0), RW(9));
SET32(9, RW(29) + 20);
SET32(2, RW(29) + 24);
SET32(8, RW(29) + 19);
SET32(6, RW(29) + 16);
SET32(7, RW(29) + 18);
SET32(10, RW(29) + 21);
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x253910); wr32(c, (RW(29) + 8), RW(2)); JP_F_0024AB88(c);
SET64(3, (s8)rd8(c, (RW(29) + 21)));
SET64(4, (s8)rd8(c, (RW(29) + 19)));
wr32(c, (RW(16) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
wr32(c, (RW(17) + 0), RW(4));
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00253938(Ctx *c) { /* func_00253938 */
ENTER(0x253938);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
mul_s(c, 0, 16, RSW(17), RSW(18));
SET64(5, RD(0) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(7, RD(29) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
{ u32 t = RW(3); SET64(31, 0x253984); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_002539B8; }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x2539ac); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) + RD(0)); goto L_00253AD4;
L_002539B8:;
{ int t = RD(17) != RD(2); SET32(2, RW(0) + 2); if (t) goto L_00253A20; }
SET64(7, RD(19) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
{ int t = RSD(18) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00253AB8; }
SET64(9, (s64)(s32)0xff0000);
L_002539D8:;
SET64(4, (s32)rd32(c, (RW(7) + 0)));
SET32(7, RW(7) + 4);
SET32(8, RW(8) + 1);
SET32(5, RSW(4) >> 8);
SET32(3, RW(4) << 8);
SET32(2, RW(4) >> 24);
SET32(4, RW(4) << 24);
SET64(3, RD(3) & RD(9));
SET64(5, RD(5) & 0xff00);
SET64(2, RD(2) | RD(4));
SET64(4, RSD(8) < RSD(18));
SET64(3, RD(3) | RD(5));
SET64(2, RD(2) | RD(3));
wr32(c, (RW(6) + 0), RW(2));
{ int t = RD(4) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_002539D8; } }
SET64(3, (s32)rd32(c, (RW(20) + 0))); goto L_00253ABC;
L_00253A20:;
{ int t = RD(17) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_00253A78; }
SET64(5, RD(19) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
{ int t = RSD(18) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00253AB8; }
SET32(7, RW(0) + -256);
L_00253A40:;
SET64(2, rd16(c, (RW(5) + 0)));
SET32(8, RW(8) + 1);
SET64(3, rd8(c, (RW(5) + 1)));
SET32(5, RW(5) + 2);
SET32(2, RW(2) << 8);
SET64(4, RSD(8) < RSD(18));
SET64(2, RD(2) & RD(7));
SET64(3, RD(3) | RD(2));
wr16(c, (RW(6) + 0), (u16)RW(3));
{ int t = RD(4) != RD(0); SET32(6, RW(6) + 2); if (t) { POLL(); goto L_00253A40; } }
SET64(3, (s32)rd32(c, (RW(20) + 0))); goto L_00253ABC;
L_00253A78:;
{ int t = RD(17) != RD(2); SET64(4, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_00253A98; }
SET64(5, RD(19) + RD(0));
SET64(31, 0x253a8c); SET64(6, RD(18) & 0xffff); JP_F_00127218(c);
SET64(3, (s32)rd32(c, (RW(20) + 0))); goto L_00253ABC;
L_00253A98:;
 { POLL(); goto L_00253A98; }
L_00253AB8:;
SET64(3, (s32)rd32(c, (RW(20) + 0)));
L_00253ABC:;
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x253ad0); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, RD(18) + RD(0));
L_00253AD4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00253AF8(Ctx *c) { /* func_00253AF8 */
ENTER(0x253af8);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -3920);
SET32(6, RW(0) + 192);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_00253B20(Ctx *c) { /* func_00253B20 */
ENTER(0x253b20);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + -3920);
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_00253B70; }
SET64(6, RD(3) + RD(0));
SET64(5, RD(3) + RD(0));
L_00253B40:;
SET32(7, RW(7) + 1);
SET32(6, RW(6) + 12);
SET64(4, RSD(7) < (s64)16);
{ int t = RD(4) == RD(0); SET32(5, RW(5) + 12); if (t) goto L_00253B74; }
SET64(2, (s8)rd8(c, (RW(6) + 0)));
{ int t = RD(2) != RD(0); SET64(3, RD(5) + RD(0)); if (t) { POLL(); goto L_00253B40; } }
SET64(2, RD(0) + RD(0)); goto L_00253B78;
L_00253B70:;
SET32(4, RW(0) + 1);
L_00253B74:;
SET64(2, RD(0) + RD(0));
L_00253B78:;
if (RD(4) != 0) SET64(2, RD(3)); return;
}

void JP_F_00253B80(Ctx *c) { /* func_00253B80 */
ENTER(0x253b80);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00253BA8; }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 12);
wr8(c, (RW(2) + 0), (u8)RW(0));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
L_00253BA8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00253BB8(Ctx *c) { /* func_00253BB8 */
ENTER(0x253bb8);
wr16(c, (RW(4) + 6), (u16)RW(6));
wr16(c, (RW(4) + 4), (u16)RW(5)); return;
}

void JP_F_00253BC8(Ctx *c) { /* func_00253BC8 */
ENTER(0x253bc8);
wr16(c, (RW(4) + 10), (u16)RW(6));
wr16(c, (RW(4) + 8), (u16)RW(5)); return;
}

void JP_F_00253BD8(Ctx *c) { /* func_00253BD8 */
ENTER(0x253bd8);
SET64(2, rd16(c, (RW(4) + 8)));
wr16(c, (RW(5) + 0), (u16)RW(2));
SET64(3, rd16(c, (RW(4) + 10)));
wr16(c, (RW(6) + 0), (u16)RW(3)); return;
}

void JP_F_00253BF0(Ctx *c) { /* func_00253BF0 */
ENTER(0x253bf0);
SET32(5, RW(5) << 16);
SET64(6, RD(4) + RD(0));
{ int t = RD(6) == RD(0); SET32(7, RSW(5) >> 16); if (t) goto L_00253C60; }
SET64(4, (s16)rd16(c, (RW(6) + 8)));
SET64(5, (s16)rd16(c, (RW(6) + 10)));
SET64(2, (s16)rd16(c, (RW(6) + 4)));
SET64(3, (s16)rd16(c, (RW(6) + 6)));
mul_s(c, 0, 2, RSW(2), RSW(4));
SET64(4, rd16(c, (RW(6) + 8)));
mul_s(c, 0, 3, RSW(3), RSW(5));
SET32(2, RW(2) + RW(3));
SET32(2, RSW(2) >> 12);
SET32(5, RW(2) + RW(7));
SET64(2, RSD(5) < (s64)32767);
{ int t = RD(2) == RD(0); SET64(3, RSD(5) < (s64)-32768); if (t) goto L_00253C48; }
SET32(2, RW(0) + -32768);
if (RD(3) == 0) SET64(2, RD(5));
SET32(2, RW(2) << 16);
SET32(3, RSW(2) >> 16); goto L_00253C4C;
L_00253C48:;
SET32(3, RW(0) + 32767);
L_00253C4C:;
wr16(c, (RW(6) + 10), (u16)RW(4));
SET64(2, RD(3) + RD(0));
wr16(c, (RW(6) + 8), (u16)RW(3)); return;
L_00253C60:;
SET64(2, RD(7) + RD(0)); return;
}

void JP_F_00253C68(Ctx *c) { /* func_00253C68 */
ENTER(0x253c68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x253c7c); SET64(16, RD(4) + RD(0)); JP_F_00253B20(c);
SET64(8, RD(2) + RD(0));
{ int t = RD(8) == RD(0); SET64(3, (s64)(s32)0x400000); if (t) goto L_00253CF4; }
SET32(4, RW(3) + -3728);
SET64(2, (s8)rd8(c, (RW(4) + 0)));
{ int t = RD(2) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_00253CD0; }
SET64(6, RD(4) + RD(0));
SET64(5, RD(4) + RD(0));
L_00253CA0:;
SET32(7, RW(7) + 1);
SET32(6, RW(6) + 144);
SET64(3, RSD(7) < (s64)16);
{ int t = RD(3) == RD(0); SET32(5, RW(5) + 144); if (t) goto L_00253CD4; }
SET64(2, (s8)rd8(c, (RW(6) + 0)));
{ int t = RD(2) != RD(0); SET64(4, RD(5) + RD(0)); if (t) { POLL(); goto L_00253CA0; } }
wr32(c, (RW(4) + 20), RW(16)); goto L_00253CD8;
L_00253CD0:;
SET32(3, RW(0) + 1);
L_00253CD4:;
wr32(c, (RW(4) + 20), RW(16));
L_00253CD8:;
{ int t = RD(3) == RD(0); wr32(c, (RW(4) + 136), RW(8)); if (t) goto L_00253CF0; }
SET32(3, RW(0) + 1);
SET64(2, RD(4) + RD(0));
wr8(c, (RW(4) + 0), (u8)RW(3)); goto L_00253CF4;
L_00253CF0:;
SET64(2, RD(0) + RD(0));
L_00253CF4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00253D08(Ctx *c) { /* func_00253D08 */
ENTER(0x253d08);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00253D30; }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 144);
wr8(c, (RW(2) + 0), (u8)RW(0));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
L_00253D30:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00253D40(Ctx *c) { /* func_00253D40 */
ENTER(0x253d40);
wr16(c, (RW(4) + 6), (u16)RW(6));
wr16(c, (RW(4) + 4), (u16)RW(5)); return;
}

void JP_F_00253D50(Ctx *c) { /* func_00253D50 */
ENTER(0x253d50);
SET32(29, RW(29) + -32);
SET32(2, RW(5) << 16);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
SET32(7, RW(29) + 2);
SET64(5, RD(6) + RD(0));
SET32(4, RSW(2) >> 16);
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x253d78); SET64(6, RD(29) + RD(0)); JP_F_0024A900(c);
SET64(5, (s16)rd16(c, (RW(29) + 0)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x253d88); SET64(6, (s16)rd16(c, (RW(29) + 2))); JP_F_00253D40(c);
SET64(4, (s32)rd32(c, (RW(16) + 136)));
SET64(5, (s16)rd16(c, (RW(29) + 0)));
SET64(31, 0x253d98); SET64(6, (s16)rd16(c, (RW(29) + 2))); JP_F_00253BB8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00253DA8(Ctx *c) { /* func_00253DA8 */
ENTER(0x253da8);
wr16(c, (RW(4) + 10), (u16)RW(6));
wr16(c, (RW(4) + 8), (u16)RW(5)); return;
}

void JP_F_00253DB8(Ctx *c) { /* func_00253DB8 */
ENTER(0x253db8);
SET32(6, RW(6) << 16);
SET64(8, RD(4) + RD(0));
{ int t = RD(5) != RD(0); SET32(9, RSW(6) >> 16); if (t) goto L_00253E00; }
SET64(3, (s32)rd32(c, (RW(8) + 20)));
SET64(2, RSD(5) < RSD(3));
if (RD(2) == RD(0)) { wr32(c, (RW(8) + 120), RW(0)); goto L_00253E00; }
SET32(2, RW(8) + 24);
L_00253DE0:;
SET32(3, RW(3) + -1);
wr16(c, (RW(2) + 0), (u16)RW(0));
{ int t = RD(3) != RD(0); SET32(2, RW(2) + 2); if (t) { POLL(); goto L_00253DE0; } }
wr32(c, (RW(8) + 120), RW(0));
L_00253E00:;
{ int t = RD(8) == RD(0);  if (t) goto L_00253E94; }
SET64(2, (s16)rd16(c, (RW(8) + 4)));
SET32(4, RW(5) << 1);
SET64(7, (s16)rd16(c, (RW(8) + 8)));
SET32(5, RW(0) + 32767);
SET64(6, (s16)rd16(c, (RW(8) + 10)));
SET32(4, RW(4) + RW(8));
SET64(3, (s16)rd16(c, (RW(8) + 6)));
mul_s(c, 0, 2, RSW(2), RSW(7));
mul_s(c, 0, 3, RSW(3), RSW(6));
SET32(2, RSW(2) >> 12);
SET32(2, RW(9) - RW(2));
SET32(3, RSW(3) >> 12);
SET32(6, RW(2) - RW(3));
SET64(5, RSD(5) < RSD(6));
{ int t = RD(5) != RD(0); SET32(4, RW(4) + 24); if (t) goto L_00253E60; }
SET32(2, RW(0) + -32768);
SET64(3, RSD(6) < (s64)-32768);
SET64(5, RD(2) + RD(0));
if (RD(3) == 0) SET64(5, RD(6)); goto L_00253E64;
L_00253E60:;
SET32(5, RW(0) + 32767);
L_00253E64:;
SET32(2, RW(5) << 16);
SET64(3, (s32)rd32(c, (RW(8) + 120)));
SET32(2, RSW(2) >> 16);
if (RSD(2) < 0) { SET32(2, RW(0) - RW(2)); goto L_00253E78; }
L_00253E78:;
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) == RD(0); wr16(c, (RW(4) + 0), (u16)RW(5)); if (t) goto L_00253E88; }
wr32(c, (RW(8) + 120), RW(2));
L_00253E88:;
SET64(2, rd16(c, (RW(8) + 8)));
wr16(c, (RW(8) + 8), (u16)RW(9));
wr16(c, (RW(8) + 10), (u16)RW(2));
L_00253E94:;
 return;
}

void JP_F_00253EA0(Ctx *c) { /* func_00253EA0 */
ENTER(0x253ea0);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 7);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
if (RD(5) == RD(0)) { rt_break(c, 0x253eb8); goto L_00253EBC; }
L_00253EBC:;
SET64(4, (s64)(s32)0x400000);
SET32(8, RW(0) + 1);
SET64(7, (s32)rd32(c, (RW(16) + 120)));
SET64(3, (s32)rd32(c, (RW(4) + -10008)));
SET32(2, RW(7) + -1);
SET64(4, RD(7) + RD(0));
div_s(c, 0, RSW(2), RSW(5));
SET64(2, c->lo.d[0]);
SET32(2, RW(2) + 1);
SET64(5, RSD(2) < RSD(3));
if (RD(5) != 0) SET64(3, RD(2));
SET64(6, RSD(3) < (s64)1);
if (RD(6) != 0) SET64(3, RD(8));
{ int t = RD(7) != RD(0); wr16(c, (RW(16) + 124), (u16)RW(3)); if (t) goto L_00253F08; }
SET64(1, (s64)(s32)0x4b0000);
SET64(2, rd64(c, (RW(1) + 6152))); goto L_00253F20;
L_00253F08:;
SET64(31, 0x253f10);  JP_F_00122158(c);
SET64(1, (s64)(s32)0x4b0000);
SET64(4, rd64(c, (RW(1) + 6160)));
SET64(31, 0x253f20); SET64(5, RD(2) + RD(0)); JP_F_00121EA8(c);
L_00253F20:;
wr64(c, (RW(16) + 128), RD(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00253F38(Ctx *c) { /* func_00253F38 */
ENTER(0x253f38);
SET32(5, RW(5) << 1);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); SET32(5, RW(5) + RW(4)); if (t) goto L_00253F4C; }
SET64(2, (s16)rd16(c, (RW(5) + 24)));
L_00253F4C:;
 return;
}

void JP_F_00253F58(Ctx *c) { /* func_00253F58 */
ENTER(0x253f58);
SET32(5, RW(5) + RW(4));
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00253F68; }
SET64(2, (s8)rd8(c, (RW(5) + 88)));
L_00253F68:;
 return;
}

void JP_F_00253F70(Ctx *c) { /* func_00253F70 */
ENTER(0x253f70);
SET32(4, RW(5) + RW(4));
wr8(c, (RW(4) + 88), (u8)RW(6)); return;
}

void JP_F_00253F80(Ctx *c) { /* func_00253F80 */
ENTER(0x253f80);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 64), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 88), RD(23));
SET64(23, RD(4) + RD(0));
wr64(c, (RW(29) + 96), RD(30));
SET32(30, RW(23) + 4);
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 72), RD(21));
wr64(c, (RW(29) + 80), RD(22));
wr64(c, (RW(29) + 104), RD(31));
SET64(3, (s32)rd32(c, (RW(23) + 88)));
{ int t = RSD(3) <= 0; wr32(c, (RW(29) + 16), RW(7)); if (t) goto L_00254010; }
SET64(16, RD(30) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_00253FD8:;
SET32(16, RW(16) + 4);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x253fec); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(17, RW(2) >> 1);
SET64(3, RSD(17) < RSD(18));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002540BC; }
SET64(3, (s32)rd32(c, (RW(23) + 88)));
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(3));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00253FD8; } }
L_00254010:;
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_002540B8; }
SET64(21, RD(0) + RD(0));
L_00254020:;
{ int t = RSD(18) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_002540A8; }
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET32(22, RW(18) << 1);
SET32(16, RW(21) + RW(30));
SET32(19, RW(21) + RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_00254040:;
SET64(7, RD(29) + RD(0));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x254058); SET64(6, RD(22) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(17) << 1);
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x254070); SET32(4, RW(4) + RW(3)); JP_F_00127218(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(5, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(4) + 0)));
SET64(6, RD(29) + RD(0));
SET32(2, RW(2) << 15);
SET32(2, RSW(2) >> 16);
SET64(3, (s32)rd32(c, (RW(7) + 32)));
{ u32 t = RW(3); SET64(31, 0x254098); SET32(17, RW(17) + RW(2)); rt_call(c, t); }
SET64(2, RSD(17) < RSD(18));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00254040; } }
SET64(3, (s32)rd32(c, (RW(23) + 88)));
L_002540A8:;
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(3));
{ int t = RD(2) != RD(0); SET32(21, RW(21) + 4); if (t) { POLL(); goto L_00254020; } }
L_002540B8:;
SET64(2, RD(17) + RD(0));
L_002540BC:;
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

void JP_F_002540F0(Ctx *c) { /* func_002540F0 */
ENTER(0x2540f0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(22));
SET32(22, RW(19) + 12);
wr64(c, (RW(29) + 72), RD(23));
SET32(23, RW(19) + 8);
wr64(c, (RW(29) + 80), RD(30));
SET32(30, RW(20) << 1);
wr64(c, (RW(29) + 16), RD(16));
SET32(3, RW(20) << 2);
wr64(c, (RW(29) + 24), RD(17));
SET32(3, RW(3) + RW(19));
wr64(c, (RW(29) + 56), RD(21));
SET32(2, RW(30) + 128);
wr64(c, (RW(29) + 88), RD(31));
SET32(4, RW(22) + RW(2));
SET32(2, RW(23) + RW(2));
SET64(17, (s32)rd32(c, (RW(3) + 128)));
SET64(6, (s16)rd16(c, (RW(4) + 0)));
SET64(5, (s16)rd16(c, (RW(2) + 0)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x254164); wr32(c, (RW(29) + 4), RW(2)); JP_F_00253DA8(c);
SET64(2, (s32)rd32(c, (RW(19) + 68)));
{ int t = RSD(2) <= 0; SET64(4, RD(17) + RD(0)); if (t) goto L_002541A8; }
SET32(21, RW(20) << 6);
SET32(2, RW(21) + RW(19));
SET32(16, RW(2) + 144);
SET64(6, (s16)rd16(c, (RW(16) + 0)));
L_00254180:;
SET32(16, RW(16) + 2);
SET64(5, RD(18) + RD(0));
SET32(18, RW(18) + 1);
SET64(31, 0x254194); SET64(4, RD(17) + RD(0)); JP_F_00253DB8(c);
SET64(2, (s32)rd32(c, (RW(19) + 68)));
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(6, (s16)rd16(c, (RW(16) + 0))); { POLL(); goto L_00254180; } }
SET64(4, RD(17) + RD(0));
L_002541A8:;
SET64(31, 0x2541b0); SET64(18, RD(0) + RD(0)); JP_F_00253EA0(c);
SET32(2, RW(30) + 128);
SET32(3, RW(22) + RW(2));
SET32(2, RW(23) + RW(2));
SET64(5, (s16)rd16(c, (RW(2) + 0)));
SET64(6, (s16)rd16(c, (RW(3) + 0)));
SET64(31, 0x2541cc); SET64(4, (s32)rd32(c, (RW(17) + 136))); JP_F_00253BC8(c);
SET64(2, (s32)rd32(c, (RW(19) + 68)));
{ int t = RSD(2) <= 0; SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_00254320; }
SET32(21, RW(20) << 6);
SET32(20, RW(0) + 4681);
SET32(30, RW(29) + 2);
SET32(23, RW(0) + 32767);
SET32(22, RW(0) + -32768);
SET64(4, (s32)rd32(c, (RW(29) + 4)));
L_002541F0:;
SET32(2, RW(21) + RW(19));
SET32(3, RW(18) << 1);
SET64(5, RD(29) + RD(0));
SET32(3, RW(3) + RW(2));
SET64(6, RD(30) + RD(0));
SET64(31, 0x25420c); SET64(16, (s16)rd16(c, (RW(3) + 144))); JP_F_00253BD8(c);
SET64(5, (s16)rd16(c, (RW(29) + 0)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x25421c); SET64(6, (s16)rd16(c, (RW(29) + 2))); JP_F_00253DA8(c);
SET64(4, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x25422c); SET64(5, RD(18) + RD(0)); JP_F_00253DB8(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x254238); SET64(5, RD(18) + RD(0)); JP_F_00253F38(c);
SET64(31, 0x254240); SET64(4, RD(2) + RD(0)); JP_F_00122158(c);
SET64(5, rd64(c, (RW(17) + 128)));
SET64(31, 0x25424c); SET64(4, RD(2) + RD(0)); JP_F_00121C20(c);
SET64(31, 0x254254); SET64(4, RD(2) + RD(0)); JP_F_00122210(c);
SET64(16, RD(2) + RD(0));
SET64(2, RSD(23) < RSD(16));
if (RD(2) != RD(0)) { SET32(2, RW(0) + 32767); goto L_00254278; }
SET64(3, RSD(16) < (s64)-32768);
SET64(2, RD(22) + RD(0));
if (RD(3) == 0) SET64(2, RD(16));
SET32(2, RW(2) << 16);
SET32(2, RSW(2) >> 16);
L_00254278:;
SET64(16, RD(2) + RD(0));
if (RSD(16) >= 0) { SET32(2, RW(16) + 2340); goto L_00254288; }
SET32(2, RW(16) + -2340);
L_00254288:;
if (RD(20) == RD(0)) { rt_break(c, 0x25428c); goto L_00254290; }
L_00254290:;
div_s(c, 0, RSW(2), RSW(20));
SET64(2, c->lo.d[0]);
SET64(16, RD(2) + RD(0));
SET64(2, RSD(16) < (s64)7);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 7); if (t) goto L_002542C0; }
SET64(3, RD(16) + RD(0));
SET64(2, RSD(3) < (s64)-8);
if (RD(2) != RD(0)) { SET32(3, RW(0) + -8); goto L_002542C0; }
SET64(16, RD(3) + RD(0)); goto L_002542C4;
L_002542C0:;
SET64(16, RD(3) + RD(0));
L_002542C4:;
SET64(4, RD(17) + RD(0));
SET32(6, RW(16) << 24);
SET64(5, RD(18) + RD(0));
SET64(31, 0x2542d8); SET32(6, RSW(6) >> 24); JP_F_00253F70(c);
SET64(2, (s16)rd16(c, (RW(17) + 124)));
mul_s(c, 0, 16, RSW(16), RSW(2));
SET64(3, RSD(23) < RSD(16));
if (RD(3) != RD(0)) { SET32(5, RW(0) + 32767); goto L_00254300; }
SET64(3, RSD(16) < (s64)-32768);
SET64(2, RD(22) + RD(0));
if (RD(3) == 0) SET64(2, RD(16));
SET32(2, RW(2) << 16);
SET32(5, RSW(2) >> 16);
L_00254300:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x25430c); SET32(18, RW(18) + 1); JP_F_00253BF0(c);
SET64(3, (s32)rd32(c, (RW(19) + 68)));
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET64(4, (s32)rd32(c, (RW(29) + 4))); if (t) { POLL(); goto L_002541F0; } }
SET64(16, rd64(c, (RW(29) + 16)));
L_00254320:;
SET64(2, RD(0) + RD(0));
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

void JP_F_00254350(Ctx *c) { /* func_00254350 */
ENTER(0x254350);
SET32(29, RW(29) + -112);
SET32(6, RW(0) + 8);
wr64(c, (RW(29) + 56), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 80), RD(22));
SET32(4, RW(5) << 2);
wr64(c, (RW(29) + 88), RD(23));
SET32(3, RW(5) << 6);
wr64(c, (RW(29) + 96), RD(30));
SET32(30, RW(0) + -1);
wr64(c, (RW(29) + 32), RD(16));
SET32(5, RW(5) << 4);
wr64(c, (RW(29) + 40), RD(17));
SET32(3, RW(19) + RW(3));
wr64(c, (RW(29) + 48), RD(18));
SET32(5, RW(19) + RW(5));
wr64(c, (RW(29) + 72), RD(21));
SET32(5, RW(5) + 680);
wr64(c, (RW(29) + 104), RD(31));
SET32(4, RW(4) + RW(19));
SET64(2, (s32)rd32(c, (RW(19) + 84)));
div_s(c, 0, RSW(6), RSW(2));
SET32(6, RW(3) + 528);
SET64(7, c->lo.d[0]);
wr32(c, (RW(29) + 20), RW(7));
if (RD(2) == RD(0)) { rt_break(c, 0x2543c0); goto L_002543C4; }
L_002543C4:;
SET64(2, (s32)rd32(c, (RW(19) + 68)));
SET32(7, RW(3) + 272);
wr32(c, (RW(29) + 12), RW(6));
SET32(3, RW(3) + 400);
wr32(c, (RW(29) + 16), RW(5));
SET64(22, (s32)rd32(c, (RW(29) + 20)));
SET64(23, (s32)rd32(c, (RW(4) + 128)));
wr32(c, (RW(29) + 0), RW(0));
wr32(c, (RW(29) + 4), RW(7));
{ int t = RSD(2) <= 0; wr32(c, (RW(29) + 8), RW(3)); if (t) goto L_002545A4; }
SET32(21, RW(0) + 4681);
SET64(5, RD(20) + RD(0));
L_002543F8:;
SET64(31, 0x254400); SET64(4, RD(23) + RD(0)); JP_F_00253F38(c);
SET32(17, RW(20) << 1);
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET32(3, RW(17) + RW(4));
SET32(4, RW(2) << 16);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(31, 0x25441c); SET32(4, RSW(4) >> 16); JP_F_00122158(c);
SET64(18, rd64(c, (RW(23) + 128)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x25442c); SET64(5, RD(18) + RD(0)); JP_F_00121C20(c);
SET64(31, 0x254434); SET64(4, RD(2) + RD(0)); JP_F_00122210(c);
SET32(5, RW(0) + 32767);
SET64(4, RD(2) + RD(0));
SET64(2, RSD(5) < RSD(4));
{ int t = RD(2) != RD(0); SET32(3, RW(0) + 32767); if (t) goto L_00254460; }
SET64(3, RD(4) + RD(0));
SET64(2, RSD(3) < (s64)-32768);
if (RD(2) != RD(0)) { SET32(3, RW(0) + -32768); goto L_00254460; }
SET64(6, (s32)rd32(c, (RW(29) + 8))); goto L_00254464;
L_00254460:;
SET64(6, (s32)rd32(c, (RW(29) + 8)));
L_00254464:;
SET64(4, RD(3) + RD(0));
SET32(3, RW(4) << 16);
SET32(2, RW(17) + RW(6));
{ int t = RSD(3) >= 0; wr16(c, (RW(2) + 0), (u16)RW(4)); if (t) goto L_00254480; }
SET32(2, RW(4) + -2340); goto L_00254484;
L_00254480:;
SET32(2, RW(4) + 2340);
L_00254484:;
if (RD(21) == RD(0)) { rt_break(c, 0x254488); goto L_0025448C; }
L_0025448C:;
div_s(c, 0, RSW(2), RSW(21));
SET64(2, c->lo.d[0]);
SET64(4, RD(2) + RD(0));
SET64(2, RSD(4) < (s64)7);
{ int t = RD(2) == RD(0); SET32(16, RW(0) + 7); if (t) goto L_002544C0; }
SET64(16, RD(4) + RD(0));
SET64(2, RSD(16) < (s64)-8);
if (RD(2) != RD(0)) { SET32(16, RW(0) + -8); goto L_002544C0; }
SET64(4, (s16)rd16(c, (RW(23) + 124))); goto L_002544C4;
L_002544C0:;
SET64(4, (s16)rd16(c, (RW(23) + 124)));
L_002544C4:;
SET64(31, 0x2544cc); mul_s(c, 0, 4, RSW(16), RSW(4)); JP_F_00122158(c);
SET64(5, RD(18) + RD(0));
SET64(31, 0x2544d8); SET64(4, RD(2) + RD(0)); JP_F_00121C20(c);
SET64(31, 0x2544e0); SET64(4, RD(2) + RD(0)); JP_F_00122210(c);
SET32(3, RW(0) + 32767);
SET64(4, RD(2) + RD(0));
SET64(2, RSD(3) < RSD(4));
if (RD(2) != RD(0)) { SET32(4, RW(0) + 32767); goto L_00254508; }
SET64(2, RSD(4) < (s64)-32768);
if (RD(2) != RD(0)) { SET32(4, RW(0) + -32768); goto L_00254508; }
div_s(c, 0, RSW(20), RSW(22)); goto L_0025450C;
L_00254508:;
div_s(c, 0, RSW(20), RSW(22));
L_0025450C:;
SET64(5, (s32)rd32(c, (RW(29) + 12)));
SET32(2, RW(17) + RW(5));
wr16(c, (RW(2) + 0), (u16)RW(4));
if (RD(22) == RD(0)) { rt_break(c, 0x25451c); goto L_00254520; }
L_00254520:;
SET64(3, c->hi.d[0]);
{ int t = RD(3) != RD(0); SET64(3, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_00254548; }
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET32(30, RW(30) + 1);
SET32(6, RW(0) + 1);
SET32(7, RW(2) + RW(30));
wr32(c, (RW(29) + 0), RW(6));
wr8(c, (RW(7) + 0), (u8)RW(0)); goto L_0025454C;
L_00254548:;
SET32(7, RW(3) + RW(30));
L_0025454C:;
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(3, RW(0) + 8);
SET64(6, (s32)rd32(c, (RW(29) + 20)));
SET32(20, RW(20) + 1);
SET64(5, (s32)rd32(c, (RW(19) + 84)));
SET32(4, RW(6) - RW(2));
SET64(6, rd8(c, (RW(7) + 0)));
SET32(3, RW(3) - RW(5));
mul_s(c, 0, 4, RSW(4), RSW(5));
SET32(2, RW(16) << (RW(3) & 31));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) & 0xff);
SET32(16, RSW(2) >> (RW(3) & 31));
SET32(5, RW(5) + 1);
SET32(4, RW(16) << (RW(4) & 31));
wr32(c, (RW(29) + 0), RW(5));
SET64(6, RD(6) | RD(4));
wr8(c, (RW(7) + 0), (u8)RW(6));
SET64(2, (s32)rd32(c, (RW(19) + 68)));
SET64(2, RSD(20) < RSD(2));
{ int t = RD(2) != RD(0); SET64(5, RD(20) + RD(0)); if (t) { POLL(); goto L_002543F8; } }
L_002545A4:;
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

void JP_F_002545D8(Ctx *c) { /* func_002545D8 */
ENTER(0x2545d8);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET32(8, RW(16) + 144);
wr64(c, (RW(29) + 48), RD(18));
SET32(9, RW(16) + 208);
wr64(c, (RW(29) + 56), RD(19));
SET64(7, RD(29) + RD(0));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 72), RD(21));
wr64(c, (RW(29) + 80), RD(22));
wr64(c, (RW(29) + 88), RD(23));
wr64(c, (RW(29) + 96), RD(30));
wr64(c, (RW(29) + 104), RD(31));
wr32(c, (RW(29) + 0), RW(8));
SET64(2, (s32)rd32(c, (RW(16) + 48)));
SET64(3, (s32)rd32(c, (RW(16) + 60)));
SET64(6, (s32)rd32(c, (RW(16) + 68)));
SET64(5, RD(2) + RD(0));
SET32(17, RW(3) - RW(2));
wr32(c, (RW(29) + 4), RW(9));
SET64(2, RSD(6) < RSD(17));
if (RD(2) != 0) SET64(17, RD(6));
SET64(31, 0x254640); SET64(6, RD(17) + RD(0)); JP_F_00253F80(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0025476C; }
SET64(6, (s32)rd32(c, (RW(16) + 68)));
SET64(2, RSD(17) < RSD(6));
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(16) + 88))); if (t) goto L_002546B0; }
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002546B0; }
SET32(20, RW(17) << 1);
SET64(18, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
L_00254670:;
SET32(18, RW(18) + 4);
{ int t = RD(2) == RD(0); SET32(4, RW(20) + RW(2)); if (t) goto L_00254694; }
SET32(6, RW(6) - RW(17));
SET64(5, RD(0) + RD(0));
SET64(31, 0x25468c); SET32(6, RW(6) << 1); JP_F_001273D0(c);
SET64(6, (s32)rd32(c, (RW(16) + 68)));
SET64(3, (s32)rd32(c, (RW(16) + 88)));
L_00254694:;
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(3));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 0))); { POLL(); goto L_00254670; } }
SET64(2, (s32)rd32(c, (RW(16) + 48))); goto L_002546B4;
L_002546B0:;
SET64(2, (s32)rd32(c, (RW(16) + 48)));
L_002546B4:;
SET64(21, RD(0) + RD(0));
SET32(2, RW(2) + RW(6));
{ int t = RSD(3) <= 0; wr32(c, (RW(16) + 48), RW(2)); if (t) goto L_00254764; }
SET32(30, RW(29) + 18);
SET32(23, RW(16) + 12);
SET32(22, RW(16) + 8);
SET32(20, RW(16) + 664);
SET32(19, RW(16) + 656);
SET32(17, RW(16) + 128);
SET32(18, RW(0) + 128);
SET64(5, RD(21) + RD(0));
L_002546E8:;
SET64(31, 0x2546f0); SET64(4, RD(16) + RD(0)); JP_F_002540F0(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(2, RW(29) + 16);
SET64(6, RD(30) + RD(0));
SET64(7, rd64(c, (RW(3) + 128)));
SET64(5, RD(2) + RD(0));
SET64(2, rd16(c, (RW(3) + 124)));
SET32(17, RW(17) + 4);
SET64(4, (s32)rd32(c, (RW(3) + 136)));
wr16(c, (RW(19) + 0), (u16)RW(2));
SET32(19, RW(19) + 2);
wr64(c, (RW(20) + 0), RD(7));
SET64(31, 0x254724); SET32(20, RW(20) + 8); JP_F_00253BD8(c);
SET32(4, RW(22) + RW(18));
SET64(2, rd16(c, (RW(29) + 16)));
SET32(6, RW(23) + RW(18));
SET64(3, rd16(c, (RW(29) + 18)));
SET64(5, RD(21) + RD(0));
wr16(c, (RW(4) + 0), (u16)RW(2));
SET64(4, RD(16) + RD(0));
wr16(c, (RW(6) + 0), (u16)RW(3));
SET32(21, RW(21) + 1);
SET64(31, 0x254750); SET32(18, RW(18) + 2); JP_F_00254350(c);
SET64(2, (s32)rd32(c, (RW(16) + 88)));
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0); SET64(5, RD(21) + RD(0)); if (t) { POLL(); goto L_002546E8; } }
SET64(6, (s32)rd32(c, (RW(16) + 68)));
L_00254764:;
SET64(2, RD(6) + RD(0));
SET64(16, rd64(c, (RW(29) + 32)));
L_0025476C:;
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

void JP_F_00254798(Ctx *c) { /* func_00254798 */
ENTER(0x254798);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(0) + RD(0));
wr64(c, (RW(29) + 64), RD(22));
SET64(22, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 72), RD(31));
SET64(2, (s32)rd32(c, (RW(18) + 88)));
{ int t = RSD(2) <= 0; SET64(20, (s32)rd32(c, (RW(18) + 12))); if (t) goto L_0025489C; }
SET32(17, RW(18) + 680);
SET32(19, RW(18) + 656);
SET64(4, rd16(c, (RW(18) + 720)));
L_002547E0:;
SET64(5, rd16(c, (RW(18) + 722)));
SET64(3, rd16(c, (RW(19) + 0)));
SET32(19, RW(19) + 2);
mul_s(c, 0, 5, RSW(4), RSW(5));
SET64(2, rd16(c, (RW(18) + 724)));
SET32(3, RW(3) + -1);
SET64(6, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(4) ^ RD(3));
SET32(4, RW(4) << 16);
SET32(2, RW(2) + RW(5));
SET32(16, RSW(4) >> 16);
SET64(2, RD(2) & 0x7fff);
{ int t = RD(6) != RD(0); wr16(c, (RW(18) + 720), (u16)RW(2)); if (t) goto L_00254838; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(2) != RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0025483C; }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 1); if (t) goto L_00254840; }
SET64(2, (s32)rd32(c, (RW(17) + 12)));
if (RD(2) == 0) SET64(16, RD(0));
L_00254838:;
SET64(4, RD(29) + RD(0));
L_0025483C:;
SET32(5, RW(0) + 1);
L_00254840:;
SET32(6, RW(0) + 1);
SET64(7, RD(20) + RD(0));
SET32(2, RSW(16) >> 8);
SET32(21, RW(21) + 1);
SET64(31, 0x254858); wr8(c, (RW(29) + 0), (u8)RW(2)); JP_F_00253938(c);
SET64(4, RD(29) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(7, RD(20) + RD(0));
SET64(31, 0x254870); wr8(c, (RW(29) + 0), (u8)RW(16)); JP_F_00253938(c);
SET64(4, RD(17) + RD(0));
SET32(17, RW(17) + 16);
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 16);
SET64(7, RD(20) + RD(0));
SET64(31, 0x25488c); SET32(22, RW(22) + 18); JP_F_00253938(c);
SET64(3, (s32)rd32(c, (RW(18) + 88)));
SET64(3, RSD(21) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(18) + 720))); { POLL(); goto L_002547E0; } }
L_0025489C:;
SET64(2, RD(22) + RD(0));
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

void JP_F_002548C8(Ctx *c) { /* func_002548C8 */
ENTER(0x2548c8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 18);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(17, (s32)rd32(c, (RW(16) + 12)));
L_002548F0:;
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x254904); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
div_s(c, 0, RSW(2), RSW(18));
if (RD(18) == RD(0)) { rt_break(c, 0x254910); goto L_00254914; }
L_00254914:;
SET64(3, (s32)rd32(c, (RW(16) + 88)));
SET64(2, c->lo.d[0]);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
{ int t = RSD(2) <= 0; SET64(2, RD(19) + RD(0)); if (t) goto L_0025495C; }
SET64(31, 0x254934);  JP_F_002545D8(c);
{ int t = RD(2) == RD(0); SET64(2, RD(19) + RD(0)); if (t) goto L_0025495C; }
SET64(31, 0x254944); SET64(4, RD(16) + RD(0)); JP_F_00254798(c);
SET64(3, (s32)rd32(c, (RW(16) + 48)));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(3, RSD(3) < RSD(4));
{ int t = RD(3) != RD(0); SET32(19, RW(19) + RW(2)); if (t) { POLL(); goto L_002548F0; } }
SET64(2, RD(19) + RD(0));
L_0025495C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00254978(Ctx *c) { /* func_00254978 */
ENTER(0x254978);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 108)));
SET64(18, (s32)rd32(c, (RW(4) + 12)));
{ int t = RSD(2) > 0; SET64(5, (s32)rd32(c, (RW(4) + 44))); if (t) goto L_002549A8; }
SET64(17, (s32)rd32(c, (RW(4) + 80))); goto L_002549CC;
L_002549A8:;
SET64(2, (s32)rd32(c, (RW(4) + 80)));
SET32(2, RW(5) + RW(2));
SET32(3, RW(2) + 2047);
SET32(2, RW(2) + 4094);
SET64(4, RSD(3) < (s64)0);
if (RD(4) != 0) SET64(3, RD(2));
SET32(3, RSW(3) >> 11);
SET32(3, RW(3) << 11);
SET32(17, RW(3) - RW(5));
L_002549CC:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x2549e4); SET32(16, RW(17) + -4); rt_call(c, t); }
SET64(3, RSD(2) < RSD(17));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00254A58; }
SET64(4, RD(29) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(18) + RD(0));
SET64(2, RD(0) | 0x8001);
SET64(31, 0x254a0c); wr16(c, (RW(29) + 0), (u16)RW(2)); JP_F_00253938(c);
SET64(4, RD(29) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(18) + RD(0));
SET64(31, 0x254a24); wr16(c, (RW(29) + 0), (u16)RW(16)); JP_F_00253938(c);
{ int t = RSD(16) <= 0; wr8(c, (RW(29) + 2), (u8)RW(0)); if (t) goto L_00254A54; }
SET32(19, RW(29) + 2);
SET32(16, RW(17) + -4);
SET32(16, RW(16) + -1);
L_00254A38:;
SET64(4, RD(19) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(31, 0x254a4c); SET64(7, RD(18) + RD(0)); JP_F_00253938(c);
{ int t = RD(16) != RD(0); SET32(16, RW(16) + -1); if (t) { POLL(); goto L_00254A38; } }
L_00254A54:;
SET64(2, RD(17) + RD(0));
L_00254A58:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00254A78(Ctx *c) { /* func_00254A78 */
ENTER(0x254a78);
SET32(29, RW(29) + -112);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 64), RD(20));
SET64(20, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + -10004)));
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 96), RD(30));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 72), RD(21));
wr64(c, (RW(29) + 80), RD(22));
wr64(c, (RW(29) + 88), RD(23));
wr64(c, (RW(29) + 104), RD(31));
SET64(31, 0x254ab8); SET64(19, RD(5) + RD(0)); JP_F_0012A4D8(c);
SET64(30, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(6, (s64)(s32)0x7fff0000);
SET64(7, RD(29) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) + RD(0));
{ u32 t = RW(3); SET64(31, 0x254adc); SET64(6, RD(6) | 0xffff); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(2) + 28)));
SET64(6, RD(29) + RD(0));
{ u32 t = RW(7); SET64(31, 0x254af8); SET64(16, (s32)rd32(c, (RW(29) + 4))); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 72)));
SET32(3, RW(3) + 4);
SET64(16, RSD(16) < RSD(3));
{ int t = RD(16) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, RD(0) | 0x8000);
SET32(4, RW(29) + 16);
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254b28); wr16(c, (RW(29) + 16), (u16)RW(2)); JP_F_00253938(c);
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + 1);
{ int t = RD(17) != RD(2); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, (s16)rd16(c, (RW(20) + 72)));
SET32(4, RW(29) + 18);
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254b54); wr16(c, (RW(29) + 18), (u16)RW(2)); JP_F_00253938(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, (s8)rd8(c, (RW(20) + 76)));
SET32(23, RW(29) + 20);
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254b80); wr8(c, (RW(29) + 20), (u8)RW(2)); JP_F_00253938(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, rd8(c, (RW(20) + 80)));
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254ba4); wr8(c, (RW(29) + 20), (u8)RW(2)); JP_F_00253938(c);
SET32(18, RW(0) + 1);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(18); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, rd8(c, (RW(20) + 84)));
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254bd0); wr8(c, (RW(29) + 20), (u8)RW(2)); JP_F_00253938(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, rd8(c, (RW(20) + 88)));
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254bf8); wr8(c, (RW(29) + 20), (u8)RW(2)); JP_F_00253938(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, (s32)rd32(c, (RW(20) + 92)));
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254c20); wr32(c, (RW(29) + 24), RW(2)); JP_F_00253938(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, (s32)rd32(c, (RW(20) + 96)));
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254c48); wr32(c, (RW(29) + 24), RW(2)); JP_F_00253938(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, (s16)rd16(c, (RW(20) + 100)));
SET32(22, RW(29) + 22);
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254c74); wr16(c, (RW(29) + 22), (u16)RW(2)); JP_F_00253938(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET32(2, RW(0) + 4);
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254c9c); wr8(c, (RW(29) + 20), (u8)RW(2)); JP_F_00253938(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, (s16)rd16(c, (RW(20) + 720)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 8); if (t) goto L_00254CB8; }
wr8(c, (RW(29) + 20), (u8)RW(0)); goto L_00254CBC;
L_00254CB8:;
wr8(c, (RW(29) + 20), (u8)RW(2));
L_00254CBC:;
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(31, 0x254cd0); SET64(7, RD(19) + RD(0)); JP_F_00253938(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 1);
{ int t = RD(16) != RD(2); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254cf8); wr32(c, (RW(29) + 24), RW(0)); JP_F_00253938(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, rd16(c, (RW(20) + 712)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254d20); wr16(c, (RW(29) + 22), (u16)RW(2)); JP_F_00253938(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, rd16(c, (RW(20) + 716)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254d48); wr16(c, (RW(29) + 22), (u16)RW(2)); JP_F_00253938(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, rd16(c, (RW(20) + 714)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254d70); wr16(c, (RW(29) + 22), (u16)RW(2)); JP_F_00253938(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, rd16(c, (RW(20) + 718)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254d98); wr16(c, (RW(29) + 22), (u16)RW(2)); JP_F_00253938(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(3, (s32)rd32(c, (RW(20) + 108)));
{ int t = RSD(3) <= 0; SET32(18, RW(0) + 28); if (t) goto L_00254F08; }
SET64(2, rd16(c, (RW(20) + 104)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254dcc); wr16(c, (RW(29) + 22), (u16)RW(2)); JP_F_00253938(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, rd16(c, (RW(20) + 108)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254df4); wr16(c, (RW(29) + 22), (u16)RW(2)); JP_F_00253938(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(3, (s32)rd32(c, (RW(20) + 108)));
SET32(18, RW(0) + 32);
{ int t = RSD(3) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00254F08; }
SET64(4, RD(22) + RD(0));
L_00254E10:;
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
wr16(c, (RW(29) + 22), (u16)RW(21));
SET64(31, 0x254e28); SET32(21, RW(21) + 1); JP_F_00253938(c);
SET64(4, RD(22) + RD(0));
SET64(16, RD(2) + RD(0));
SET32(6, RW(0) + 1);
SET32(5, RW(0) + 2);
{ int t = RD(16) != RD(6); SET64(7, RD(19) + RD(0)); if (t) goto L_00255198; }
SET32(18, RW(18) + 2);
wr16(c, (RW(29) + 22), (u16)RW(16));
SET64(31, 0x254e50); SET32(18, RW(18) + 2); JP_F_00253938(c);
SET32(18, RW(18) + 4);
SET64(17, RD(2) + RD(0));
SET32(18, RW(18) + 4);
SET32(5, RW(0) + 4);
SET32(18, RW(18) + 4);
SET32(4, RW(29) + 24);
SET32(18, RW(18) + 4);
SET32(6, RW(0) + 1);
{ int t = RD(17) != RD(16); SET64(7, RD(19) + RD(0)); if (t) goto L_00255198; }
SET64(2, (s32)rd32(c, (RW(20) + 112)));
SET64(31, 0x254e84); wr32(c, (RW(29) + 24), RW(2)); JP_F_00253938(c);
SET64(16, RD(2) + RD(0));
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
{ int t = RD(16) != RD(17); SET64(7, RD(19) + RD(0)); if (t) goto L_00255198; }
SET64(2, (s32)rd32(c, (RW(20) + 116)));
SET64(31, 0x254ea8); wr32(c, (RW(29) + 24), RW(2)); JP_F_00253938(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
{ int t = RD(17) != RD(16); SET64(7, RD(19) + RD(0)); if (t) goto L_00255198; }
SET64(2, (s32)rd32(c, (RW(20) + 120)));
SET64(31, 0x254ecc); wr32(c, (RW(29) + 24), RW(2)); JP_F_00253938(c);
SET64(16, RD(2) + RD(0));
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
{ int t = RD(16) != RD(17); SET64(7, RD(19) + RD(0)); if (t) goto L_00255198; }
SET64(2, (s32)rd32(c, (RW(20) + 124)));
SET64(31, 0x254ef0); wr32(c, (RW(29) + 24), RW(2)); JP_F_00253938(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(3, (s32)rd32(c, (RW(20) + 108)));
SET64(2, RSD(21) < RSD(3));
{ int t = RD(2) != RD(0); SET64(4, RD(22) + RD(0)); if (t) { POLL(); goto L_00254E10; } }
L_00254F08:;
SET64(16, (s8)rd8(c, (RW(20) + 726)));
SET32(2, RW(0) + 1);
if (RD(16) != RD(2)) { SET64(16, (s8)rd8(c, (RW(20) + 750))); goto L_00255060; }
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x41490000); if (t) goto L_00254F48; }
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254f38); wr32(c, (RW(29) + 24), RW(0)); JP_F_00253938(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET32(18, RW(18) + 4);
SET64(2, (s64)(s32)0x41490000);
L_00254F48:;
SET32(4, RW(29) + 24);
SET64(2, RD(2) | 0x4e46);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254f64); wr32(c, (RW(29) + 24), RW(2)); JP_F_00253938(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET32(2, RW(0) + 24);
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254f8c); wr32(c, (RW(29) + 24), RW(2)); JP_F_00253938(c);
SET64(21, RD(2) + RD(0));
{ int t = RD(21) != RD(17); SET32(18, RW(18) + 4); if (t) goto L_00255198; }
SET32(4, RW(20) + 727);
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 16);
SET64(31, 0x254fac); SET64(7, RD(19) + RD(0)); JP_F_00253938(c);
SET32(3, RW(0) + 16);
{ int t = RD(2) != RD(3); SET32(18, RW(18) + 4); if (t) goto L_00255198; }
SET64(2, rd16(c, (RW(20) + 744)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254fd4); wr16(c, (RW(29) + 22), (u16)RW(2)); JP_F_00253938(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(21); SET32(18, RW(18) + 16); if (t) goto L_00255198; }
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x254ff8); wr16(c, (RW(29) + 22), (u16)RW(0)); JP_F_00253938(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET32(18, RW(18) + 2); if (t) goto L_00255198; }
SET64(2, rd16(c, (RW(20) + 746)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x255020); wr16(c, (RW(29) + 22), (u16)RW(2)); JP_F_00253938(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET32(18, RW(18) + 2); if (t) goto L_00255198; }
SET64(2, rd16(c, (RW(20) + 748)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
wr16(c, (RW(29) + 22), (u16)RW(2));
SET64(31, 0x25504c); SET32(18, RW(18) + 2); JP_F_00253938(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET32(18, RW(18) + 2);
SET64(16, (s8)rd8(c, (RW(20) + 750)));
SET32(2, RW(0) + 1);
L_00255060:;
if (RD(16) != RD(2)) { SET64(3, (s32)rd32(c, (RW(20) + 72))); goto L_00255124; }
SET64(2, (s32)rd32(c, (RW(20) + 108)));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x43490000); if (t) goto L_0025509C; }
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x25508c); wr32(c, (RW(29) + 24), RW(0)); JP_F_00253938(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET32(18, RW(18) + 4);
SET64(2, (s64)(s32)0x43490000);
L_0025509C:;
SET32(4, RW(29) + 24);
SET64(2, RD(2) | 0x4e46);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x2550b8); wr32(c, (RW(29) + 24), RW(2)); JP_F_00253938(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET64(2, (s32)rd32(c, (RW(20) + 756)));
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
wr32(c, (RW(29) + 24), RW(2));
SET64(31, 0x2550e4); SET32(18, RW(18) + 4); JP_F_00253938(c);
if (RD(2) != RD(17)) { SET64(2, RD(0) + RD(0)); goto L_0025519C; }
SET64(6, (s32)rd32(c, (RW(20) + 756)));
{ int t = RD(6) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_00255120; }
SET64(4, (s32)rd32(c, (RW(20) + 752)));
{ int t = RD(4) == RD(0); SET32(5, RW(0) + 1); if (t) goto L_00255120; }
SET64(31, 0x25510c); SET64(7, RD(19) + RD(0)); JP_F_00253938(c);
SET64(3, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(20) + 756)));
{ int t = RD(3) != RD(2); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET32(18, RW(18) + RW(3));
L_00255120:;
SET64(3, (s32)rd32(c, (RW(20) + 72)));
L_00255124:;
SET32(16, RW(3) - RW(30));
SET64(2, RSD(18) < RSD(16));
{ int t = RD(2) == RD(0); wr8(c, (RW(29) + 20), (u8)RW(0)); if (t) goto L_00255168; }
SET32(17, RW(0) + 1);
SET64(4, RD(23) + RD(0));
L_00255140:;
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(31, 0x255150); SET64(7, RD(19) + RD(0)); JP_F_00253938(c);
{ int t = RD(2) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025519C; }
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(16));
{ int t = RD(2) != RD(0); SET64(4, RD(23) + RD(0)); if (t) { POLL(); goto L_00255140; } }
L_00255168:;
SET64(2, (s64)(s32)0x400000);
SET64(7, RD(19) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + -10004)));
SET32(5, RW(0) + 1);
SET64(31, 0x255180); SET64(6, RD(30) + RD(0)); JP_F_00253938(c);
if (RD(2) != RD(30)) { SET64(2, RD(0) + RD(0)); goto L_0025519C; }
SET32(18, RW(18) + RW(30));
SET32(2, RW(18) + 4); goto L_0025519C;
L_00255198:;
SET64(2, RD(0) + RD(0));
L_0025519C:;
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

void JP_F_002551D0(Ctx *c) { /* func_002551D0 */
ENTER(0x2551d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2551e0);  JP_F_002534A8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s64)(s32)0x400000);
SET32(4, RW(4) + -10000);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 6080);
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_00255200(Ctx *c) { /* func_00255200 */
ENTER(0x255200);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x255210);  JP_F_002534C8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s64)(s32)0x400000);
SET32(4, RW(4) + -10000);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 6080);
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_00255230(Ctx *c) { /* func_00255230 */
ENTER(0x255230);
SET32(29, RW(29) + -32);
SET64(7, (s64)(s32)0x400000);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(7) + -10000);
wr64(c, (RW(29) + 8), RD(17));
SET64(8, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(9, RD(6) + RD(0));
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0025528C; }
SET32(5, RW(5) + 1);
L_00255268:;
SET64(2, RSD(5) < (s64)8);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 760); if (t) goto L_0025528C; }
SET64(2, (s8)rd8(c, (RW(3) + 0)));
if (RD(2) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00255268; } }
L_0025528C:;
SET32(3, RW(0) + 8);
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_002553E8; }
SET32(2, RW(5) << 1);
SET32(3, RW(7) + -10000);
SET32(2, RW(2) + RW(5));
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) << 5);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 3);
SET32(17, RW(2) + RW(3));
{ int t = RSD(18) <= 0; wr8(c, (RW(17) + 2), (u8)RW(18)); if (t) goto L_002552E8; }
SET32(7, RW(17) + 4);
L_002552C8:;
SET32(2, RW(6) << 2);
SET32(6, RW(6) + 1);
SET32(3, RW(2) + RW(8));
SET32(2, RW(7) + RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(6) < RSD(18));
{ int t = RD(5) != RD(0); wr32(c, (RW(2) + 0), RW(4)); if (t) { POLL(); goto L_002552C8; } }
L_002552E8:;
SET64(16, (s64)(s32)0x7fff0000);
wr32(c, (RW(17) + 12), RW(9));
wr8(c, (RW(17) + 1), (u8)RW(0));
SET64(5, RD(0) + RD(0));
wr32(c, (RW(17) + 40), RW(0));
SET32(6, RW(0) + 4);
wr32(c, (RW(17) + 44), RW(0));
SET32(7, RW(0) + 4);
wr32(c, (RW(17) + 48), RW(0));
SET64(4, RD(0) + RD(0));
SET64(31, 0x255318); wr32(c, (RW(17) + 52), RW(16)); JP_F_0024B398(c);
SET32(3, RW(0) + 4);
SET32(5, RW(0) + 128);
SET32(6, RW(0) + 3);
div_s(c, 0, RSW(5), RSW(3));
SET64(7, RD(0) | 0xac44);
SET32(8, RW(0) + 18);
SET32(9, RW(0) + 4);
SET32(10, RW(0) + 500);
SET32(11, RW(0) + 32);
wr32(c, (RW(17) + 76), RW(6));
SET32(4, RW(0) + 32);
wr32(c, (RW(17) + 92), RW(7));
wr32(c, (RW(17) + 80), RW(8));
wr32(c, (RW(17) + 84), RW(3));
wr32(c, (RW(17) + 72), RW(2));
wr32(c, (RW(17) + 88), RW(18));
if (RD(9) == RD(0)) { rt_break(c, 0x25535c); goto L_00255360; }
L_00255360:;
wr32(c, (RW(17) + 100), RW(10));
wr32(c, (RW(17) + 96), RW(16));
wr32(c, (RW(17) + 104), RW(0));
wr32(c, (RW(17) + 108), RW(0));
wr32(c, (RW(17) + 112), RW(0));
wr32(c, (RW(17) + 116), RW(0));
wr32(c, (RW(17) + 120), RW(0));
wr32(c, (RW(17) + 124), RW(0));
wr32(c, (RW(17) + 56), RW(0));
wr32(c, (RW(17) + 60), RW(0));
SET64(5, c->lo.d[0]);
wr32(c, (RW(17) + 68), RW(5));
SET64(31, 0x255398); wr32(c, (RW(17) + 64), RW(16)); JP_F_00253C68(c);
SET64(4, (s32)rd32(c, (RW(17) + 68)));
SET64(31, 0x2553a4); wr32(c, (RW(17) + 128), RW(2)); JP_F_00253C68(c);
wr16(c, (RW(17) + 716), (u16)RW(0));
SET32(3, RW(0) + -128);
wr32(c, (RW(17) + 132), RW(2));
wr16(c, (RW(17) + 748), (u16)RW(3));
SET32(4, RW(17) + 727);
wr16(c, (RW(17) + 746), (u16)RW(3));
SET64(5, RD(0) + RD(0));
wr16(c, (RW(17) + 712), (u16)RW(0));
SET32(6, RW(0) + 16);
wr16(c, (RW(17) + 718), (u16)RW(0));
wr16(c, (RW(17) + 714), (u16)RW(0));
wr8(c, (RW(17) + 726), (u8)RW(0));
SET64(31, 0x2553dc); wr16(c, (RW(17) + 744), (u16)RW(0)); JP_F_001273D0(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(17) + 0), (u8)RW(3));
SET64(2, RD(17) + RD(0));
L_002553E8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00255400(Ctx *c) { /* func_00255400 */
ENTER(0x255400);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00255458; }
SET64(31, 0x25541c);  JP_F_0024A8C0(c);
SET64(2, (s32)rd32(c, (RW(16) + 128)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00255430; }
SET64(31, 0x255430);  JP_F_00253D08(c);
L_00255430:;
SET64(4, (s32)rd32(c, (RW(16) + 132)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_00255448; }
SET64(31, 0x255444);  JP_F_00253D08(c);
wr32(c, (RW(16) + 0), RW(0));
L_00255448:;
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024A8D8(c); return; }
L_00255458:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00255468(Ctx *c) { /* func_00255468 */
ENTER(0x255468);
SET64(2, (s8)rd8(c, (RW(4) + 1))); return;
}

void JP_F_00255470(Ctx *c) { /* func_00255470 */
ENTER(0x255470);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 64), RD(31));
SET64(3, (s32)rd32(c, (RW(17) + 88)));
{ int t = RSD(3) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00255558; }
SET64(20, RD(0) + RD(0));
L_002554A8:;
SET64(2, (s32)rd32(c, (RW(17) + 104)));
SET32(16, RW(2) << 1);
{ int t = RSD(16) <= 0; SET64(6, RD(16) + RD(0)); if (t) goto L_00255548; }
SET32(19, RW(17) + 4);
SET64(5, RD(0) + RD(0));
SET32(18, RW(19) + RW(20));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x2554d8); SET64(7, RD(29) + RD(0)); rt_call(c, t); }
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(2) == RD(16); SET64(6, RD(2) + RD(0)); if (t) goto L_00255520; }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x2554fc); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
L_00255500:;
 { POLL(); goto L_00255500; }
L_00255520:;
SET64(31, 0x255528); SET64(4, (s32)rd32(c, (RW(29) + 0))); JP_F_001273D0(c);
SET32(3, RW(19) + RW(20));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x255544); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 88)));
L_00255548:;
SET32(21, RW(21) + 1);
SET64(2, RSD(21) < RSD(3));
{ int t = RD(2) != RD(0); SET32(20, RW(20) + 4); if (t) { POLL(); goto L_002554A8; } }
L_00255558:;
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 40), RW(0));
wr8(c, (RW(17) + 1), (u8)RW(2));
wr32(c, (RW(17) + 44), RW(0));
wr32(c, (RW(17) + 48), RW(0));
wr8(c, (RW(17) + 3), (u8)RW(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00255598(Ctx *c) { /* func_00255598 */
ENTER(0x255598);
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 3), (u8)RW(2)); return;
}

void JP_F_002555A8(Ctx *c) { /* func_002555A8 */
ENTER(0x2555a8);
wr32(c, (RW(4) + 92), RW(5)); return;
}

void JP_F_002555B0(Ctx *c) { /* func_002555B0 */
ENTER(0x2555b0);
wr32(c, (RW(4) + 72), RW(5)); return;
}

void JP_F_002555B8(Ctx *c) { /* func_002555B8 */
ENTER(0x2555b8);
wr32(c, (RW(4) + 88), RW(5)); return;
}

void JP_F_002555C0(Ctx *c) { /* func_002555C0 */
ENTER(0x2555c0);
wr32(c, (RW(4) + 84), RW(5)); return;
}

void JP_F_002555C8(Ctx *c) { /* func_002555C8 */
ENTER(0x2555c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
wr32(c, (RW(16) + 68), RW(5));
SET64(2, (s32)rd32(c, (RW(16) + 128)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002555F0; }
SET64(31, 0x2555f0);  JP_F_00253D08(c);
L_002555F0:;
SET64(31, 0x2555f8); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_00253C68(c);
SET64(3, (s32)rd32(c, (RW(16) + 132)));
wr32(c, (RW(16) + 128), RW(2));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_00255610; }
SET64(31, 0x255610);  JP_F_00253D08(c);
L_00255610:;
SET64(31, 0x255618); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_00253C68(c);
wr32(c, (RW(16) + 132), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00255630(Ctx *c) { /* func_00255630 */
ENTER(0x255630);
wr32(c, (RW(4) + 80), RW(5)); return;
}

void JP_F_00255638(Ctx *c) { /* func_00255638 */
ENTER(0x255638);
wr32(c, (RW(4) + 96), RW(5));
wr32(c, (RW(4) + 60), RW(5)); return;
}

void JP_F_00255648(Ctx *c) { /* func_00255648 */
ENTER(0x255648);
wr32(c, (RW(4) + 100), RW(5)); return;
}

void JP_F_00255650(Ctx *c) { /* func_00255650 */
ENTER(0x255650);
wr32(c, (RW(4) + 108), RW(5)); return;
}

void JP_F_00255658(Ctx *c) { /* func_00255658 */
ENTER(0x255658);
wr32(c, (RW(4) + 104), RW(5)); return;
}

void JP_F_00255660(Ctx *c) { /* func_00255660 */
ENTER(0x255660);
wr32(c, (RW(4) + 112), RW(5)); return;
}

void JP_F_00255668(Ctx *c) { /* func_00255668 */
ENTER(0x255668);
wr32(c, (RW(4) + 116), RW(5)); return;
}

void JP_F_00255670(Ctx *c) { /* func_00255670 */
ENTER(0x255670);
wr32(c, (RW(4) + 120), RW(5)); return;
}

void JP_F_00255678(Ctx *c) { /* func_00255678 */
ENTER(0x255678);
wr32(c, (RW(4) + 124), RW(5)); return;
}

void JP_F_00255680(Ctx *c) { /* func_00255680 */
ENTER(0x255680);
SET64(2, (s8)rd8(c, (RW(4) + 726)));
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_002556A0; }
SET64(2, (s32)rd32(c, (RW(4) + 72)));
wr8(c, (RW(4) + 726), (u8)RW(3));
SET32(2, RW(2) + 36);
wr32(c, (RW(4) + 72), RW(2));
L_002556A0:;
wr16(c, (RW(4) + 744), (u16)RW(5)); return;
}

void JP_F_002556A8(Ctx *c) { /* func_002556A8 */
ENTER(0x2556a8);
SET64(2, (s8)rd8(c, (RW(4) + 726)));
SET32(5, RW(5) << 1);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET32(5, RW(5) + RW(4)); if (t) goto L_002556CC; }
SET64(2, (s32)rd32(c, (RW(4) + 72)));
wr8(c, (RW(4) + 726), (u8)RW(3));
SET32(2, RW(2) + 36);
wr32(c, (RW(4) + 72), RW(2));
L_002556CC:;
wr16(c, (RW(5) + 746), (u16)RW(6)); return;
}

void JP_F_002556D8(Ctx *c) { /* func_002556D8 */
ENTER(0x2556d8);
SET32(29, RW(29) + -32);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(3) + 727);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(6, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET64(2, (s8)rd8(c, (RW(3) + 726)));
{ int t = RD(2) == RD(6); SET64(5, RD(0) + RD(0)); if (t) goto L_00255718; }
SET64(2, (s32)rd32(c, (RW(3) + 72)));
wr8(c, (RW(3) + 726), (u8)RW(6));
SET32(2, RW(2) + 36);
wr32(c, (RW(3) + 72), RW(2));
L_00255718:;
SET64(31, 0x255720); SET32(6, RW(0) + 16); JP_F_001273D0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 16);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0012A978(c); return; }
}

void JP_F_00255740(Ctx *c) { /* func_00255740 */
ENTER(0x255740);
SET32(29, RW(29) + -16);
SET64(7, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(0) + 1);
SET64(2, (s8)rd8(c, (RW(7) + 726)));
{ int t = RD(2) != RD(3); SET32(4, RW(7) + 727); if (t) goto L_0025576C; }
SET64(2, (s32)rd32(c, (RW(7) + 72)));
wr8(c, (RW(7) + 726), (u8)RW(0));
SET32(2, RW(2) + 36);
wr32(c, (RW(7) + 72), RW(2));
L_0025576C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + -128);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 16);
wr16(c, (RW(7) + 744), (u16)RW(0));
wr16(c, (RW(7) + 748), (u16)RW(2));
wr16(c, (RW(7) + 746), (u16)RW(2));
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_00255790(Ctx *c) { /* func_00255790 */
ENTER(0x255790);
SET64(8, RD(4) + RD(0));
SET32(7, RW(6) + 2047);
SET64(4, (s8)rd8(c, (RW(8) + 750)));
SET32(3, RW(6) + 4094);
SET64(2, RSD(7) < (s64)0);
SET32(9, RW(0) + 1);
{ int t = RD(4) == RD(9); if (RD(2) != 0) SET64(7, RD(3)); if (t) goto L_002557D4; }
SET64(3, (s32)rd32(c, (RW(8) + 72)));
SET32(2, RSW(7) >> 11);
SET32(2, RW(2) << 11);
wr8(c, (RW(8) + 750), (u8)RW(9));
SET32(3, RW(3) + RW(2));
wr32(c, (RW(8) + 752), RW(5));
SET32(3, RW(3) + 4);
wr32(c, (RW(8) + 756), RW(6));
wr32(c, (RW(8) + 72), RW(3));
L_002557D4:;
 return;
}

void JP_F_002557E0(Ctx *c) { /* func_002557E0 */
ENTER(0x2557e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x255804); SET64(18, RD(7) + RD(0)); JP_F_002555B8(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x255810); SET64(5, RD(16) + RD(0)); JP_F_002555A8(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25581c); SET64(5, RD(18) + RD(0)); JP_F_00255638(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 284);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_002555B0(c); return; }
}

void JP_F_00255840(Ctx *c) { /* func_00255840 */
ENTER(0x255840);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x255860); SET64(4, RD(16) + RD(0)); JP_F_0012A4D8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(6, RD(29) + RD(0));
SET32(7, RW(29) + 2);
SET64(31, 0x255878); SET32(8, RW(29) + 4); JP_F_002534E8(c);
SET64(3, rd16(c, (RW(29) + 0)));
SET64(4, rd16(c, (RW(29) + 2)));
SET64(2, rd16(c, (RW(29) + 4)));
SET64(16, rd64(c, (RW(29) + 16)));
wr16(c, (RW(17) + 720), (u16)RW(3));
wr16(c, (RW(17) + 724), (u16)RW(2));
wr16(c, (RW(17) + 722), (u16)RW(4));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002558A8(Ctx *c) { /* func_002558A8 */
ENTER(0x2558a8);
SET64(2, (s32)rd32(c, (RW(4) + 44))); return;
}

void JP_F_002558B0(Ctx *c) { /* func_002558B0 */
ENTER(0x2558b0);
SET64(2, (s32)rd32(c, (RW(4) + 48))); return;
}

void JP_F_002558B8(Ctx *c) { /* func_002558B8 */
ENTER(0x2558b8);
wr32(c, (RW(4) + 48), RW(5)); return;
}

void JP_F_002558C0(Ctx *c) { /* func_002558C0 */
ENTER(0x2558c0);
SET64(2, (s32)rd32(c, (RW(4) + 48))); return;
}

void JP_F_002558C8(Ctx *c) { /* func_002558C8 */
ENTER(0x2558c8);
SET32(2, RW(5) << 2);
SET64(5, RD(5) < (u64)(s64)2);
{ int t = RD(5) == RD(0); SET32(4, RW(4) + RW(2)); if (t) goto L_002558DC; }
wr32(c, (RW(4) + 4), RW(6));
L_002558DC:;
 return;
}

void JP_F_002558E8(Ctx *c) { /* func_002558E8 */
ENTER(0x2558e8);
wr32(c, (RW(4) + 12), RW(5)); return;
}

void JP_F_002558F0(Ctx *c) { /* func_002558F0 */
ENTER(0x2558f0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET32(18, RW(17) + 712);
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET32(16, RW(17) + 4);
wr64(c, (RW(29) + 56), RD(31));
SET64(20, (s32)rd32(c, (RW(17) + 12))); goto L_00255958;
L_00255928:;
SET64(7, (s32)rd32(c, (RW(16) + 0)));
SET32(16, RW(16) + 4);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(19, RW(19) + 1);
SET64(8, (s32)rd32(c, (RW(7) + 0)));
SET64(4, RD(7) + RD(0));
SET64(2, rd16(c, (RW(3) + 0)));
wr16(c, (RW(18) + 0), (u16)RW(2));
wr16(c, (RW(18) + 4), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(8) + 28)));
{ u32 t = RW(2); SET64(31, 0x255958); SET32(18, RW(18) + 2); rt_call(c, t); }
L_00255958:;
SET64(3, (s32)rd32(c, (RW(17) + 88)));
SET64(2, RSD(19) < RSD(3));
{ int t = RD(2) == RD(0); SET64(7, RD(29) + RD(0)); if (t) goto L_002559A4; }
SET64(8, (s32)rd32(c, (RW(16) + 0)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(8) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
{ u32 t = RW(3); SET64(31, 0x255984); SET64(4, RD(8) + RD(0)); rt_call(c, t); }
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(2) != RD(0); SET64(6, RD(29) + RD(0)); if (t) { POLL(); goto L_00255928; } }
SET64(3, (s32)rd32(c, (RW(17) + 88)));
SET64(2, RSD(19) < RSD(3));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00255A40; }
L_002559A4:;
if (RSD(3) <= 0) { SET64(4, RD(17) + RD(0)); goto L_002559DC; }
SET64(19, RD(3) + RD(0));
SET32(3, RW(17) + 136);
SET32(4, RW(17) + 140);
L_002559B8:;
SET64(2, rd16(c, (RW(3) + 576)));
SET32(19, RW(19) + -1);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET32(3, RW(3) + 2);
SET64(2, rd16(c, (RW(4) + 576)));
wr16(c, (RW(4) + 0), (u16)RW(2));
{ int t = RD(19) != RD(0); SET32(4, RW(4) + 2); if (t) { POLL(); goto L_002559B8; } }
SET64(4, RD(17) + RD(0));
L_002559DC:;
SET64(31, 0x2559e4); SET64(5, RD(20) + RD(0)); JP_F_00254A78(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET64(19, RD(0) + RD(0)); if (t) goto L_00255A3C; }
SET64(2, (s32)rd32(c, (RW(17) + 44)));
SET64(3, (s32)rd32(c, (RW(17) + 88)));
SET32(2, RW(2) + RW(4));
{ int t = RSD(3) <= 0; wr32(c, (RW(17) + 44), RW(2)); if (t) goto L_00255A34; }
SET32(16, RW(17) + 128);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_00255A10:;
SET32(16, RW(16) + 4);
SET64(5, (s32)rd32(c, (RW(17) + 100)));
SET32(19, RW(19) + 1);
SET64(31, 0x255a24); SET64(6, (s32)rd32(c, (RW(17) + 92))); JP_F_00253D50(c);
SET64(2, (s32)rd32(c, (RW(17) + 88)));
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00255A10; } }
L_00255A34:;
SET32(2, RW(0) + 2);
wr8(c, (RW(17) + 1), (u8)RW(2));
L_00255A3C:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00255A40:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00255A60(Ctx *c) { /* func_00255A60 */
ENTER(0x255a60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
L_00255A74:;
SET64(2, (s8)rd8(c, (RW(16) + 3)));
{ int t = RD(2) != RD(0); SET32(17, RW(0) + 1); if (t) goto L_00255AC8; }
 goto L_00255AA8;
L_00255A88:;
SET64(3, (s32)rd32(c, (RW(16) + 48)));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET32(2, RW(2) + RW(5));
SET64(3, RSD(3) < RSD(4));
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 44), RW(2)); if (t) goto L_00255AA8; }
wr8(c, (RW(16) + 3), (u8)RW(17)); { POLL(); goto L_00255A74; }
L_00255AA8:;
SET64(31, 0x255ab0); SET64(4, RD(16) + RD(0)); JP_F_002548C8(c);
SET64(5, RD(2) + RD(0));
if (RD(5) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 44))); { POLL(); goto L_00255A88; } }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00255AE4;
L_00255AC8:;
SET64(31, 0x255ad0); SET64(4, RD(16) + RD(0)); JP_F_00254978(c);
if (RSD(2) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00255AE4; }
SET32(2, RW(0) + 3);
wr8(c, (RW(16) + 1), (u8)RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00255AE4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00255AF8(Ctx *c) { /* func_00255AF8 */
ENTER(0x255af8);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s8)rd8(c, (RW(4) + 1)));
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 2); if (t) goto L_00255B20; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002558F0(c); return; }
L_00255B20:;
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00255B30; }
SET32(29, RW(29) + 16); { JP_F_00255A60(c); return; }
L_00255B30:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00255B38(Ctx *c) { /* func_00255B38 */
ENTER(0x255b38);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -10000);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 7);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
L_00255B60:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00255B78; }
SET64(31, 0x255b74); SET64(4, RD(16) + RD(0)); JP_F_00255AF8(c);
SET32(17, RW(17) + -1);
L_00255B78:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 760); if (t) { POLL(); goto L_00255B60; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00255B98(Ctx *c) { /* func_00255B98 */
ENTER(0x255b98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C068(c); return; }
}

void JP_F_00255BB0(Ctx *c) { /* func_00255BB0 */
ENTER(0x255bb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C080(c); return; }
}

void JP_F_00255BC8(Ctx *c) { /* func_00255BC8 */
ENTER(0x255bc8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CC20(c); return; }
}

void JP_F_00255BE0(Ctx *c) { /* func_00255BE0 */
ENTER(0x255be0);
 return;
}

void JP_F_00255BE8(Ctx *c) { /* func_00255BE8 */
ENTER(0x255be8);
 return;
}

void JP_F_00255BF0(Ctx *c) { /* func_00255BF0 */
ENTER(0x255bf0);
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + -1416), RW(4)); return;
}

void JP_F_00255C00(Ctx *c) { /* func_00255C00 */
ENTER(0x255c00);
SET32(2, RW(0) + 40);
SET64(3, (s64)(s32)0x400000);
SET32(2, RW(2) - RW(4));
SET64(5, (s64)(s32)0x400000);
wr32(c, (RW(3) + -1412), RW(2));
wr32(c, (RW(5) + -1408), RW(4)); return;
}

void JP_F_00255C20(Ctx *c) { /* func_00255C20 */
ENTER(0x255c20);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + -1424);
SET32(4, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) + 1);
{ int t = RD(3) != RD(4); wr32(c, (RW(2) + 0), RW(3)); if (t) goto L_00255C58; }
SET64(4, (s64)(s32)0x400000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -1392);
SET64(31, 0x255c58); SET32(6, RW(0) + 3840); JP_F_001273D0(c);
L_00255C58:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00255C68(Ctx *c) { /* func_00255C68 */
ENTER(0x255c68);
 return;
}

void JP_F_00255C70(Ctx *c) { /* func_00255C70 */
ENTER(0x255c70);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + -1424);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_00255CB0; }
SET64(4, (s64)(s32)0x400000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -1392);
SET32(6, RW(0) + 3840);
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
L_00255CB0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00255CC0(Ctx *c) { /* func_00255CC0 */
ENTER(0x255cc0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(8) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x255cfc); SET32(21, RW(0) + 1); JP_F_0024A8C0(c);
SET32(7, RW(16) + 2047);
SET64(2, RSD(16) < (s64)0);
SET64(3, RD(16) + RD(0));
SET64(6, (s64)(s32)0xf0000);
if (RD(2) != 0) SET64(3, RD(7));
SET32(7, RW(0) + 512);
SET32(3, RSW(3) >> 11);
SET64(6, RD(6) | 0xffff);
SET32(2, RW(3) << 11);
SET64(4, RD(20) + RD(0));
SET32(2, RW(16) - RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, RSD(0) < RSD(2));
wr32(c, (RW(19) + 8), RW(17));
SET32(3, RW(3) + RW(2));
wr32(c, (RW(19) + 12), RW(18));
wr32(c, (RW(19) + 44), RW(7));
wr32(c, (RW(19) + 92), RW(6));
wr32(c, (RW(19) + 48), RW(3));
wr8(c, (RW(19) + 1), (u8)RW(21));
wr8(c, (RW(19) + 2), (u8)RW(0));
wr32(c, (RW(19) + 4), RW(20));
wr32(c, (RW(19) + 16), RW(16));
wr32(c, (RW(19) + 20), RW(3));
{ int t = RD(20) == RD(0); wr32(c, (RW(19) + 88), RW(0)); if (t) goto L_00255D9C; }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x255d74);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(16, RD(2) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x255d8c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(16, RW(16) + RW(2));
wr32(c, (RW(19) + 28), RW(16));
wr32(c, (RW(19) + 64), RW(16));
wr32(c, (RW(19) + 24), RW(16));
L_00255D9C:;
wr8(c, (RW(19) + 0), (u8)RW(21));
wr8(c, (RW(19) + 68), (u8)RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); { JP_F_0024A8D8(c); return; }
}

void JP_F_00255DC8(Ctx *c) { /* func_00255DC8 */
ENTER(0x255dc8);
SET64(13, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(9, (s32)rd32(c, (RW(13) + -1416)));
SET64(10, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(12, RD(4) + RD(0));
SET64(11, RD(6) + RD(0));
SET64(8, RD(7) + RD(0));
{ int t = RSD(9) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00255E60; }
SET64(2, (s64)(s32)0x400000);
SET64(4, (s64)(s32)0x400000);
SET32(7, RW(2) + -1420);
SET32(4, RW(4) + -1392);
SET64(3, (s32)rd32(c, (RW(7) + 0)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 5);
SET32(16, RW(2) + RW(4));
SET64(3, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0); SET64(3, (s32)rd32(c, (RW(13) + -1416))); if (t) goto L_00255E64; }
SET64(6, RD(9) + RD(0));
SET32(5, RW(5) + 1);
L_00255E30:;
SET64(2, RSD(5) < RSD(6));
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(13) + -1416))); if (t) goto L_00255E64; }
SET64(2, (s32)rd32(c, (RW(7) + 0)));
SET32(2, RW(2) + RW(5));
SET32(3, RW(2) << 1);
SET32(3, RW(3) + RW(2));
SET32(3, RW(3) << 5);
SET32(16, RW(3) + RW(4));
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00255E30; } }
L_00255E60:;
SET64(3, (s32)rd32(c, (RW(13) + -1416)));
L_00255E64:;
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00255E8C; }
SET64(5, RD(12) + RD(0));
SET64(6, RD(10) + RD(0));
SET64(7, RD(11) + RD(0));
SET64(31, 0x255e80); SET64(4, RD(16) + RD(0)); JP_F_00255CC0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 74), (u8)RW(2));
SET64(2, RD(16) + RD(0));
L_00255E8C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00255EA0(Ctx *c) { /* func_00255EA0 */
ENTER(0x255ea0);
SET64(13, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(9, (s32)rd32(c, (RW(13) + -1408)));
SET64(10, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(12, RD(4) + RD(0));
SET64(11, RD(6) + RD(0));
SET64(8, RD(7) + RD(0));
{ int t = RSD(9) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00255F38; }
SET64(2, (s64)(s32)0x400000);
SET64(4, (s64)(s32)0x400000);
SET32(7, RW(2) + -1412);
SET32(4, RW(4) + -1392);
SET64(3, (s32)rd32(c, (RW(7) + 0)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 5);
SET32(16, RW(2) + RW(4));
SET64(3, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0); SET64(3, (s32)rd32(c, (RW(13) + -1408))); if (t) goto L_00255F3C; }
SET64(6, RD(9) + RD(0));
SET32(5, RW(5) + 1);
L_00255F08:;
SET64(2, RSD(5) < RSD(6));
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(13) + -1408))); if (t) goto L_00255F3C; }
SET64(2, (s32)rd32(c, (RW(7) + 0)));
SET32(2, RW(2) + RW(5));
SET32(3, RW(2) << 1);
SET32(3, RW(3) + RW(2));
SET32(3, RW(3) << 5);
SET32(16, RW(3) + RW(4));
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00255F08; } }
L_00255F38:;
SET64(3, (s32)rd32(c, (RW(13) + -1408)));
L_00255F3C:;
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00255F60; }
SET64(5, RD(12) + RD(0));
SET64(6, RD(10) + RD(0));
SET64(7, RD(11) + RD(0));
SET64(31, 0x255f58); SET64(4, RD(16) + RD(0)); JP_F_00255CC0(c);
wr8(c, (RW(16) + 74), (u8)RW(0));
SET64(2, RD(16) + RD(0));
L_00255F60:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00255F70(Ctx *c) { /* func_00255F70 */
ENTER(0x255f70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x255f8c); SET64(17, RD(5) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x255f98); SET64(5, RD(17) + RD(0)); JP_F_00255FB8(c);
SET64(31, 0x255fa0); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00255FB8(Ctx *c) { /* func_00255FB8 */
ENTER(0x255fb8);
SET64(3, RD(4) + RD(0));
SET64(4, RD(0) + RD(0));
SET32(29, RW(29) + -16);
SET64(2, RSD(5) < (s64)256);
wr64(c, (RW(29) + 0), RD(31));
SET64(7, RD(3) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00255FE8; }
SET64(31, 0x255fe0); SET64(6, RD(0) + RD(0)); JP_F_00255DC8(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_00255FF4;
L_00255FE8:;
SET64(31, 0x255ff0); SET64(6, RD(0) + RD(0)); JP_F_00255EA0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_00255FF4:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00256000(Ctx *c) { /* func_00256000 */
ENTER(0x256000);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256014); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x25601c); SET64(4, RD(16) + RD(0)); JP_F_00256030(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00255BE8(c); return; }
}

void JP_F_00256030(Ctx *c) { /* func_00256030 */
ENTER(0x256030);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00256078; }
SET64(31, 0x25604c);  JP_F_002565E0(c);
SET64(31, 0x256054); SET64(4, RD(16) + RD(0)); JP_F_00256288(c);
wr8(c, (RW(16) + 0), (u8)RW(0));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 96);
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
L_00256078:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00256088(Ctx *c) { /* func_00256088 */
ENTER(0x256088);
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
SET64(31, 0x2560bc); SET64(20, RD(8) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(31, 0x2560d4); SET64(8, RD(20) + RD(0)); JP_F_002560F8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_00255BE8(c); return; }
}

void JP_F_002560F8(Ctx *c) { /* func_002560F8 */
ENTER(0x2560f8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(8) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x25612c); SET64(20, RD(6) + RD(0)); JP_F_00255B98(c);
SET32(3, RW(18) << 11);
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 12), RW(17));
wr32(c, (RW(16) + 20), RW(18));
wr32(c, (RW(16) + 80), RW(19));
wr32(c, (RW(16) + 84), RW(20));
wr8(c, (RW(16) + 69), (u8)RW(2));
wr32(c, (RW(16) + 16), RW(3));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_00255BB0(c); return; }
}

void JP_F_00256170(Ctx *c) { /* func_00256170 */
ENTER(0x256170);
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
SET64(31, 0x2561a4); SET64(20, RD(8) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(31, 0x2561bc); SET64(8, RD(20) + RD(0)); JP_F_002561E0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_00255BE8(c); return; }
}

void JP_F_002561E0(Ctx *c) { /* func_002561E0 */
ENTER(0x2561e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2561f4); SET64(16, RD(4) + RD(0)); JP_F_00256088(c);
L_002561F8:;
SET64(31, 0x256200);  JP_F_0024EBB0(c);
SET64(2, (s8)rd8(c, (RW(16) + 69)));
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 8))); if (t) { POLL(); goto L_002561F8; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00256218(Ctx *c) { /* func_00256218 */
ENTER(0x256218);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25622c); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x256234); SET64(4, RD(16) + RD(0)); JP_F_00256248(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00255BE8(c); return; }
}

void JP_F_00256248(Ctx *c) { /* func_00256248 */
ENTER(0x256248);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25625c); SET64(16, RD(4) + RD(0)); JP_F_00256548(c);
SET64(31, 0x256264);  JP_F_00255B98(c);
SET64(3, (s8)rd8(c, (RW(16) + 73)));
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { wr8(c, (RW(16) + 70), (u8)RW(3)); goto L_00256274; }
L_00256274:;
wr8(c, (RW(16) + 69), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00255BB0(c); return; }
}

void JP_F_00256288(Ctx *c) { /* func_00256288 */
ENTER(0x256288);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25629c); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x2562a4); SET64(4, RD(16) + RD(0)); JP_F_002562B8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00255BE8(c); return; }
}

void JP_F_002562B8(Ctx *c) { /* func_002562B8 */
ENTER(0x2562b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2562cc); SET64(16, RD(4) + RD(0)); JP_F_002565E0(c);
SET64(31, 0x2562d4); SET64(4, RD(16) + RD(0)); JP_F_00256218(c);
SET64(2, (s8)rd8(c, (RW(16) + 73)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002562F8; }
L_002562E0:;
SET64(31, 0x2562e8);  JP_F_0024EBB0(c);
SET64(2, (s8)rd8(c, (RW(16) + 73)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002562E0; } }
SET64(16, rd64(c, (RW(29) + 0)));
L_002562F8:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00256308(Ctx *c) { /* func_00256308 */
ENTER(0x256308);
SET64(2, (s8)rd8(c, (RW(4) + 73))); return;
}

void JP_F_00256310(Ctx *c) { /* func_00256310 */
ENTER(0x256310);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256324); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x25632c); SET64(4, RD(16) + RD(0)); JP_F_00256348(c);
SET64(31, 0x256334); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00256348(Ctx *c) { /* func_00256348 */
ENTER(0x256348);
SET64(2, (s8)rd8(c, (RW(4) + 1))); return;
}

void JP_F_00256350(Ctx *c) { /* func_00256350 */
ENTER(0x256350);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25636c); SET64(17, RD(5) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x256378); SET64(5, RD(17) + RD(0)); JP_F_00256398(c);
SET64(31, 0x256380); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00256398(Ctx *c) { /* func_00256398 */
ENTER(0x256398);
SET64(2, (s32)rd32(c, (RW(4) + 20)));
wr32(c, (RW(4) + 88), RW(5));
SET64(5, RSD(2) < RSD(5));
if (RD(5) != RD(0)) { wr32(c, (RW(4) + 88), RW(2)); goto L_002563AC; }
L_002563AC:;
SET64(2, (s32)rd32(c, (RW(4) + 88))); return;
}

void JP_F_002563B8(Ctx *c) { /* func_002563B8 */
ENTER(0x2563b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2563cc); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x2563d4); SET64(4, RD(16) + RD(0)); JP_F_002563F0(c);
SET64(31, 0x2563dc); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002563F0(Ctx *c) { /* func_002563F0 */
ENTER(0x2563f0);
SET64(3, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00256400; }
SET64(2, (s32)rd32(c, (RW(4) + 88)));
L_00256400:;
 return;
}

void JP_F_00256408(Ctx *c) { /* func_00256408 */
ENTER(0x256408);
SET64(2, (s32)rd32(c, (RW(4) + 20)));
wr32(c, (RW(4) + 52), RW(0));
{ int t = RD(2) != RD(0); wr8(c, (RW(4) + 3), (u8)RW(0)); if (t) goto L_00256420; }
SET32(2, RW(0) + 3); goto L_00256424;
L_00256420:;
SET32(2, RW(0) + 2);
L_00256424:;
wr8(c, (RW(4) + 1), (u8)RW(2));
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 2), (u8)RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr8(c, (RW(4) + 71), (u8)RW(2)); return;
}

void JP_F_00256440(Ctx *c) { /* func_00256440 */
ENTER(0x256440);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256454); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x25645c); SET64(4, RD(16) + RD(0)); JP_F_00256478(c);
SET64(31, 0x256464); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00256478(Ctx *c) { /* func_00256478 */
ENTER(0x256478);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25648c); SET64(16, RD(4) + RD(0)); JP_F_0024A8C0(c);
SET64(31, 0x256494); SET64(4, RD(16) + RD(0)); JP_F_00256408(c);
SET64(2, (s64)(s32)0xf0000);
SET64(2, RD(2) | 0xffff);
SET64(31, 0x2564a4); wr32(c, (RW(16) + 92), RW(2)); JP_F_0024A8D8(c);
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002564B8(Ctx *c) { /* func_002564B8 */
ENTER(0x2564b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2564d4); SET64(17, RD(5) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2564e0); SET64(5, RD(17) + RD(0)); JP_F_00256500(c);
SET64(31, 0x2564e8); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00256500(Ctx *c) { /* func_00256500 */
ENTER(0x256500);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25651c); SET64(17, RD(5) + RD(0)); JP_F_0024A8C0(c);
SET64(31, 0x256524); SET64(4, RD(16) + RD(0)); JP_F_00256408(c);
SET64(31, 0x25652c); wr32(c, (RW(16) + 92), RW(17)); JP_F_0024A8D8(c);
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00256548(Ctx *c) { /* func_00256548 */
ENTER(0x256548);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25655c); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x256564); SET64(4, RD(16) + RD(0)); JP_F_00256578(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00255BE8(c); return; }
}

void JP_F_00256578(Ctx *c) { /* func_00256578 */
ENTER(0x256578);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25658c); SET64(16, RD(4) + RD(0)); JP_F_00255B98(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s64)(s32)0xff0000);
SET64(3, RD(3) | 0xff00);
SET64(4, (s64)(s32)0x10000);
SET64(2, RD(2) & RD(3));
SET64(4, RD(4) | 0x200);
{ int t = RD(2) != RD(4); SET32(5, RW(0) + 1); if (t) goto L_002565C8; }
SET64(3, (s8)rd8(c, (RW(16) + 71)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(5); wr8(c, (RW(16) + 72), (u8)RW(2)); if (t) goto L_002565D0; }
wr8(c, (RW(16) + 71), (u8)RW(0)); goto L_002565D0;
L_002565C8:;
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 1), (u8)RW(2));
L_002565D0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00255BB0(c); return; }
}

void JP_F_002565E0(Ctx *c) { /* func_002565E0 */
ENTER(0x2565e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2565f4); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x2565fc); SET64(4, RD(16) + RD(0)); JP_F_00256610(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00255BE8(c); return; }
}

void JP_F_00256610(Ctx *c) { /* func_00256610 */
ENTER(0x256610);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25662c); SET32(17, RW(0) + 1); JP_F_00256548(c);
L_00256630:;
SET64(31, 0x256638);  JP_F_0024EBB0(c);
SET64(2, (s8)rd8(c, (RW(16) + 1)));
{ int t = RD(2) != RD(17);  if (t) { POLL(); goto L_00256630; } }
SET64(2, (s32)rd32(c, (RW(16) + 36)));
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 16))); if (t) { POLL(); goto L_00256630; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00256660(Ctx *c) { /* func_00256660 */
ENTER(0x256660);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x256684); SET64(18, RD(6) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x256694); SET64(6, RD(18) + RD(0)); JP_F_002566B0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00255BE8(c); return; }
}

void JP_F_002566B0(Ctx *c) { /* func_002566B0 */
ENTER(0x2566b0);
wr32(c, (RW(4) + 60), RW(6));
wr32(c, (RW(4) + 56), RW(5)); return;
}

void JP_F_002566C0(Ctx *c) { /* func_002566C0 */
ENTER(0x2566c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2566dc); SET64(17, RD(5) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2566e8); SET64(5, RD(17) + RD(0)); JP_F_00256700(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00255BE8(c); return; }
}

void JP_F_00256700(Ctx *c) { /* func_00256700 */
ENTER(0x256700);
if (RSD(5) < 0) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_00256710; }
wr32(c, (RW(4) + 48), RW(5)); return;
L_00256710:;
wr32(c, (RW(4) + 48), RW(2)); return;
}

void JP_F_00256718(Ctx *c) { /* func_00256718 */
ENTER(0x256718);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + -1396);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2)); return;
}

void JP_F_00256730(Ctx *c) { /* func_00256730 */
ENTER(0x256730);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 56), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 72), RD(31));
SET64(4, (s32)rd32(c, (RW(19) + 8)));
SET64(31, 0x25675c); SET64(20, (s32)rd32(c, (RW(19) + 4))); JP_F_0025DD60(c);
SET64(31, 0x256764); SET64(16, RD(2) + RD(0)); JP_F_00255B98(c);
SET64(4, (s8)rd8(c, (RW(19) + 2)));
SET32(2, RW(0) + 1);
{ int t = RD(4) != RD(2); SET64(3, rd8(c, (RW(19) + 2))); if (t) goto L_002568EC; }
{ int t = RD(16) != RD(4); SET32(2, RW(0) + 3); if (t) goto L_00256868; }
wr8(c, (RW(19) + 2), (u8)RW(0));
SET64(31, 0x256788); SET32(18, RW(19) + 36); JP_F_00255BB0(c);
SET64(16, (s32)rd32(c, (RW(19) + 32)));
SET32(17, RW(29) + 16);
SET64(6, RD(29) + RD(0));
SET32(16, RW(16) << 11);
SET64(7, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2567a8); SET64(4, RD(18) + RD(0)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(6, RD(29) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x2567c0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x2567d8); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 88)));
SET64(2, (s32)rd32(c, (RW(19) + 52)));
SET64(4, (s32)rd32(c, (RW(19) + 32)));
SET64(5, (s32)rd32(c, (RW(19) + 48)));
SET32(2, RW(2) + RW(16));
SET32(3, RW(3) + RW(4));
wr32(c, (RW(19) + 52), RW(2));
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(19) + 88), RW(3));
wr32(c, (RW(19) + 40), RW(0));
{ int t = RD(3) != RD(5); SET64(16, (s32)rd32(c, (RW(19) + 20))); if (t) goto L_0025681C; }
SET64(2, (s32)rd32(c, (RW(19) + 56)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 88))); goto L_00256820; }
{ u32 t = RW(2); SET64(31, 0x25681c); SET64(4, (s32)rd32(c, (RW(19) + 60))); rt_call(c, t); }
L_0025681C:;
SET64(2, (s32)rd32(c, (RW(19) + 88)));
L_00256820:;
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_0025685C; }
SET64(2, (s32)rd32(c, (RW(19) + 52)));
SET64(3, (s32)rd32(c, (RW(19) + 92)));
SET32(2, RW(2) >> 11);
SET64(2, RD(2) < RD(3));
if (RD(2) != RD(0)) { wr8(c, (RW(19) + 3), (u8)RW(0)); goto L_002568E8; }
SET64(2, (s64)(s32)0xf0000);
SET64(2, RD(2) | 0xfffe);
SET64(2, RD(2) < RD(3));
if (RD(2) != RD(0)) { wr8(c, (RW(19) + 3), (u8)RW(0)); goto L_002568E8; }
SET32(2, RW(0) + 3);
L_0025685C:;
wr8(c, (RW(19) + 1), (u8)RW(2));
wr8(c, (RW(19) + 3), (u8)RW(0)); goto L_002568E8;
L_00256868:;
{ int t = RD(16) != RD(2);  if (t) goto L_002568E0; }
wr8(c, (RW(19) + 2), (u8)RW(0));
SET64(31, 0x25687c); SET32(16, RW(19) + 36); JP_F_00255BB0(c);
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x256894); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(19) + 40), RW(0));
SET64(2, (s64)(s32)0x400000);
SET64(3, (s32)rd32(c, (RW(2) + -1400)));
if (RSD(3) < 0) { SET64(3, rd8(c, (RW(19) + 2))); goto L_002568EC; }
SET64(2, (s8)rd8(c, (RW(19) + 3)));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(19) + 3))); if (t) goto L_002568D0; }
SET32(2, RW(0) + 4);
SET64(3, rd8(c, (RW(19) + 2)));
wr8(c, (RW(19) + 1), (u8)RW(2)); goto L_002568EC;
L_002568D0:;
SET32(2, RW(4) + 1);
SET64(3, rd8(c, (RW(19) + 2)));
wr8(c, (RW(19) + 3), (u8)RW(2)); goto L_002568EC;
L_002568E0:;
SET64(31, 0x2568e8);  JP_F_00255BB0(c);
L_002568E8:;
SET64(3, rd8(c, (RW(19) + 2)));
L_002568EC:;
{ int t = RD(3) != RD(0); SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_00256B0C; }
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 36), RW(0));
wr8(c, (RW(19) + 2), (u8)RW(2));
SET32(17, RW(0) + 1);
SET64(31, 0x25690c); wr32(c, (RW(19) + 40), RW(0)); JP_F_00255BB0(c);
SET64(2, (s8)rd8(c, (RW(19) + 68)));
if (RD(2) == RD(17)) { wr8(c, (RW(19) + 2), (u8)RW(0)); goto L_00256B08; }
SET64(2, (s8)rd8(c, (RW(19) + 72)));
if (RD(2) == RD(17)) { wr8(c, (RW(19) + 2), (u8)RW(0)); goto L_00256B08; }
SET64(2, (s32)rd32(c, (RW(19) + 20)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 3); if (t) goto L_00256940; }
wr8(c, (RW(19) + 2), (u8)RW(0));
wr8(c, (RW(19) + 1), (u8)RW(2));
wr32(c, (RW(19) + 32), RW(0)); goto L_00256B08;
L_00256940:;
{ int t = RD(20) == RD(0);  if (t) goto L_00256954; }
SET64(2, (s32)rd32(c, (RW(20) + 0)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(2) + 36))); goto L_00256968; }
L_00256954:;
SET64(31, 0x25695c); wr8(c, (RW(19) + 2), (u8)RW(0)); JP_F_00256718(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_00256B0C;
L_00256968:;
SET64(4, RD(20) + RD(0));
{ u32 t = RW(2); SET64(31, 0x256974); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 64)));
SET64(4, (s32)rd32(c, (RW(19) + 28)));
SET32(3, RW(3) - RW(2));
SET64(3, RSD(3) < RSD(4));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(20) + 0))); goto L_00256998; }
wr8(c, (RW(19) + 2), (u8)RW(0)); goto L_00256B08;
L_00256998:;
SET32(7, RW(29) + 16);
SET64(6, (s32)rd32(c, (RW(19) + 24)));
SET64(4, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x2569b0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(19) + 48)));
SET64(3, (s32)rd32(c, (RW(29) + 20)));
SET64(6, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(19) + 88)));
SET32(4, RW(3) + 2047);
SET64(2, RSD(3) < (s64)0);
if (RD(2) != 0) SET64(3, RD(4));
SET64(2, (s32)rd32(c, (RW(19) + 20)));
SET32(5, RW(5) - RW(7));
SET32(16, RSW(3) >> 11);
SET64(3, RSD(16) < RSD(5));
SET32(2, RW(2) - RW(7));
if (RD(3) == 0) SET64(16, RD(5));
SET64(5, (s32)rd32(c, (RW(19) + 12)));
SET64(3, RSD(16) < RSD(2));
SET64(8, (s32)rd32(c, (RW(19) + 44)));
if (RD(3) == 0) SET64(16, RD(2));
SET64(4, (s32)rd32(c, (RW(19) + 8)));
SET64(2, RSD(16) < RSD(8));
SET32(5, RW(5) + RW(7));
SET64(31, 0x256a08); if (RD(2) == 0) SET64(16, RD(8)); JP_F_0025DB70(c);
SET64(3, (s64)(s32)0x400000);
SET64(4, (s32)rd32(c, (RW(3) + 2496)));
{ int t = RD(4) != RD(17); SET64(2, (s64)(s32)0xf0000); if (t) goto L_00256A40; }
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + 3712), RW(4));
SET64(3, (s8)rd8(c, (RW(19) + 74)));
{ int t = RD(3) != RD(4); SET64(2, (s64)(s32)0x400000); if (t) goto L_00256A38; }
wr8(c, (RW(2) + 3716), (u8)RW(0)); goto L_00256A3C;
L_00256A38:;
wr8(c, (RW(2) + 3716), (u8)RW(4));
L_00256A3C:;
SET64(2, (s64)(s32)0xf0000);
L_00256A40:;
SET64(5, (s32)rd32(c, (RW(19) + 92)));
SET64(2, RD(2) | 0xffff);
if (RD(5) == RD(2)) { SET64(4, (s32)rd32(c, (RW(19) + 8))); goto L_00256A74; }
SET64(2, (s32)rd32(c, (RW(19) + 52)));
SET64(3, RSD(2) < (s64)0);
SET32(4, RW(2) + 2047);
if (RD(3) != 0) SET64(2, RD(4));
SET32(2, RSW(2) >> 11);
SET32(2, RW(5) - RW(2));
SET64(3, RSD(16) < RSD(2));
if (RD(3) == 0) SET64(16, RD(2));
SET64(4, (s32)rd32(c, (RW(19) + 8)));
L_00256A74:;
SET64(5, RD(16) + RD(0));
SET64(31, 0x256a80); SET64(6, (s32)rd32(c, (RW(29) + 16))); JP_F_0025DBD8(c);
SET64(4, (s32)rd32(c, (RW(29) + 20)));
SET64(3, (s32)rd32(c, (RW(29) + 16)));
wr32(c, (RW(19) + 40), RW(4));
wr32(c, (RW(19) + 36), RW(3));
{ int t = RSD(2) > 0; wr32(c, (RW(19) + 32), RW(2)); if (t) goto L_00256B08; }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET32(16, RW(19) + 36);
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x256ab4); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(19) + 40), RW(0));
wr8(c, (RW(19) + 2), (u8)RW(0));
SET64(31, 0x256ac8); SET64(4, (s32)rd32(c, (RW(19) + 8))); JP_F_0025DD60(c);
SET32(3, RW(0) + 3);
{ int t = RD(2) != RD(3); SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_00256B0C; }
SET64(2, (s64)(s32)0x400000);
SET64(3, (s32)rd32(c, (RW(2) + -1400)));
{ int t = RSD(3) < 0; SET64(17, rd64(c, (RW(29) + 40))); if (t) goto L_00256B10; }
SET64(2, (s8)rd8(c, (RW(19) + 3)));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(19) + 3))); if (t) goto L_00256B00; }
SET32(2, RW(0) + 4);
wr8(c, (RW(19) + 1), (u8)RW(2)); goto L_00256B10;
L_00256B00:;
SET32(2, RW(4) + 1);
wr8(c, (RW(19) + 3), (u8)RW(2));
L_00256B08:;
SET64(16, rd64(c, (RW(29) + 32)));
L_00256B0C:;
SET64(17, rd64(c, (RW(29) + 40)));
L_00256B10:;
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00256B28(Ctx *c) { /* func_00256B28 */
ENTER(0x256b28);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s8)rd8(c, (RW(16) + 2)));
if (RD(2) != RD(0)) { SET64(3, (s8)rd8(c, (RW(16) + 1))); goto L_00256CCC; }
SET64(3, (s8)rd8(c, (RW(16) + 72)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(3, (s8)rd8(c, (RW(16) + 70))); goto L_00256B74; }
SET64(2, (s8)rd8(c, (RW(16) + 71)));
{ int t = RD(2) != RD(0); wr8(c, (RW(16) + 72), (u8)RW(0)); if (t) goto L_00256B6C; }
wr8(c, (RW(16) + 1), (u8)RW(3));
L_00256B6C:;
SET64(3, (s8)rd8(c, (RW(16) + 70)));
SET32(2, RW(0) + 1);
L_00256B74:;
{ int t = RD(3) != RD(2);  if (t) goto L_00256B98; }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { wr8(c, (RW(16) + 70), (u8)RW(0)); goto L_00256B94; }
SET64(31, 0x256b90); wr32(c, (RW(16) + 8), RW(0)); JP_F_0025DA90(c);
wr8(c, (RW(16) + 70), (u8)RW(0));
L_00256B94:;
wr8(c, (RW(16) + 73), (u8)RW(0));
L_00256B98:;
SET64(31, 0x256ba0);  JP_F_00255B98(c);
SET64(3, (s8)rd8(c, (RW(16) + 69)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2);  if (t) goto L_00256CB0; }
SET64(31, 0x256bb8); wr8(c, (RW(16) + 73), (u8)RW(3)); JP_F_00255BB0(c);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) != RD(0)) { SET64(3, (s8)rd8(c, (RW(16) + 71))); goto L_00256CBC; }
SET64(4, (s32)rd32(c, (RW(16) + 80)));
SET64(6, RD(0) + RD(0));
SET64(31, 0x256bd4); SET64(5, (s32)rd32(c, (RW(16) + 84))); JP_F_0025D740(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 8), RW(2)); if (t) goto L_00256C00; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(16) + 80)));
SET64(31, 0x256bec); SET32(4, RW(4) + 6176); JP_F_0024BE40(c);
SET32(2, RW(0) + 4);
wr8(c, (RW(16) + 1), (u8)RW(2));
wr8(c, (RW(16) + 69), (u8)RW(0));
wr8(c, (RW(16) + 73), (u8)RW(0)); goto L_00256CF0;
L_00256C00:;
SET64(4, RD(2) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x256c10); SET32(6, RW(0) + 2); JP_F_0025DB70(c);
SET64(31, 0x256c18); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_0025DB08(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 84)));
{ int t = RD(2) != RD(0); SET32(18, RW(17) << 11); if (t) goto L_00256C34; }
SET64(31, 0x256c30); SET64(4, (s32)rd32(c, (RW(16) + 80))); JP_F_0025DDC8(c);
SET64(18, RD(2) + RD(0));
L_00256C34:;
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x256c44); SET64(6, RD(0) + RD(0)); JP_F_0025DB70(c);
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xf800);
if (RD(3) != RD(2)) { SET64(3, (s32)rd32(c, (RW(16) + 12))); goto L_00256C64; }
wr32(c, (RW(16) + 16), RW(18));
wr32(c, (RW(16) + 20), RW(17));
SET64(3, (s32)rd32(c, (RW(16) + 12)));
L_00256C64:;
SET64(2, RSD(17) < RSD(3));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 20))); goto L_00256C7C; }
wr32(c, (RW(16) + 12), RW(17));
SET64(3, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
L_00256C7C:;
SET32(2, RW(2) + RW(3));
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00256C9C; }
SET32(2, RW(17) - RW(3));
SET32(3, RW(2) << 11);
wr32(c, (RW(16) + 20), RW(2));
wr32(c, (RW(16) + 16), RW(3));
L_00256C9C:;
SET64(31, 0x256ca4); SET64(5, RD(0) + RD(0)); JP_F_00256350(c);
wr8(c, (RW(16) + 69), (u8)RW(0)); goto L_00256CB8;
L_00256CB0:;
SET64(31, 0x256cb8);  JP_F_00255BB0(c);
L_00256CB8:;
SET64(3, (s8)rd8(c, (RW(16) + 71)));
L_00256CBC:;
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { wr8(c, (RW(16) + 71), (u8)RW(0)); goto L_00256CC8; }
L_00256CC8:;
SET64(3, (s8)rd8(c, (RW(16) + 1)));
L_00256CCC:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00256CF4; }
SET64(3, (s8)rd8(c, (RW(16) + 73)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00256CF4; }
SET64(31, 0x256cf0); SET64(4, RD(16) + RD(0)); JP_F_00256730(c);
L_00256CF0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00256CF4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00256D08(Ctx *c) { /* func_00256D08 */
ENTER(0x256d08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x256d18);  JP_F_00255BE0(c);
SET64(31, 0x256d20);  JP_F_00256D30(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00255BE8(c); return; }
}

void JP_F_00256D30(Ctx *c) { /* func_00256D30 */
ENTER(0x256d30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x256d54); SET32(4, RW(19) + -1404); JP_F_00255BC8(c);
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x400000); if (t) goto L_00256D90; }
SET32(18, RW(0) + 1);
SET32(16, RW(2) + -1392);
SET32(17, RW(0) + 39);
L_00256D68:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00256D80; }
SET64(31, 0x256d7c); SET64(4, RD(16) + RD(0)); JP_F_00256B28(c);
SET32(17, RW(17) + -1);
L_00256D80:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 96); if (t) { POLL(); goto L_00256D68; } }
SET32(2, RW(19) + -1404);
wr32(c, (RW(2) + 0), RW(0));
L_00256D90:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00256DB0(Ctx *c) { /* func_00256DB0 */
ENTER(0x256db0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x256dc0);  JP_F_00255BE0(c);
SET64(31, 0x256dc8);  JP_F_00256DD8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00255BE8(c); return; }
}

void JP_F_00256DD8(Ctx *c) { /* func_00256DD8 */
ENTER(0x256dd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025DD00(c); return; }
}

void JP_F_00256DF0(Ctx *c) { /* func_00256DF0 */
ENTER(0x256df0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x256e0c); SET64(17, RD(5) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x256e18); SET64(5, RD(17) + RD(0)); JP_F_00256E38(c);
SET64(31, 0x256e20); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00256E38(Ctx *c) { /* func_00256E38 */
ENTER(0x256e38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256e4c); SET64(16, RD(5) + RD(0)); JP_F_002563B8(c);
wr32(c, (RW(16) + 0), RW(2));
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00256E68(Ctx *c) { /* func_00256E68 */
ENTER(0x256e68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x256e8c); SET64(18, RD(6) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x256e9c); SET64(6, RD(18) + RD(0)); JP_F_00256EC0(c);
SET64(31, 0x256ea4); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00256EC0(Ctx *c) { /* func_00256EC0 */
ENTER(0x256ec0);
SET64(3, (s32)rd32(c, (RW(4) + 28)));
SET32(2, RW(0) + 1);
wr32(c, (RW(5) + 0), RW(3));
SET64(5, (s32)rd32(c, (RW(4) + 24)));
wr32(c, (RW(6) + 0), RW(5)); return;
}

void JP_F_00256ED8(Ctx *c) { /* func_00256ED8 */
ENTER(0x256ed8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256eec); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x256ef4); SET64(4, RD(16) + RD(0)); JP_F_00256F10(c);
SET64(31, 0x256efc); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00256F10(Ctx *c) { /* func_00256F10 */
ENTER(0x256f10);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void JP_F_00256F18(Ctx *c) { /* func_00256F18 */
ENTER(0x256f18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x256f3c); SET64(18, RD(6) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x256f4c); SET64(6, RD(18) + RD(0)); JP_F_00256F70(c);
SET64(31, 0x256f54); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00256F70(Ctx *c) { /* func_00256F70 */
ENTER(0x256f70);
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 24), RW(6));
wr32(c, (RW(4) + 28), RW(5)); return;
}

void JP_F_00256F80(Ctx *c) { /* func_00256F80 */
ENTER(0x256f80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x256f9c); SET64(17, RD(5) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x256fa8); SET64(5, RD(17) + RD(0)); JP_F_00256FC8(c);
SET64(31, 0x256fb0); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00256FC8(Ctx *c) { /* func_00256FC8 */
ENTER(0x256fc8);
wr32(c, (RW(4) + 44), RW(5));
SET32(2, RW(0) + 1); return;
}

void JP_F_00256FD8(Ctx *c) { /* func_00256FD8 */
ENTER(0x256fd8);
 return;
}

void JP_F_00256FE0(Ctx *c) { /* func_00256FE0 */
ENTER(0x256fe0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256ff4); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x256ffc); SET64(4, RD(16) + RD(0)); JP_F_00257018(c);
SET64(31, 0x257004); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257018(Ctx *c) { /* func_00257018 */
ENTER(0x257018);
SET64(2, (s32)rd32(c, (RW(4) + 16))); return;
}

void JP_F_00257020(Ctx *c) { /* func_00257020 */
ENTER(0x257020);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257034); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x25703c); SET64(4, RD(16) + RD(0)); JP_F_00257058(c);
SET64(31, 0x257044); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257058(Ctx *c) { /* func_00257058 */
ENTER(0x257058);
SET64(2, (s32)rd32(c, (RW(4) + 20))); return;
}

void JP_F_00257060(Ctx *c) { /* func_00257060 */
ENTER(0x257060);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257074); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x25707c); SET64(4, RD(16) + RD(0)); JP_F_00257098(c);
SET64(31, 0x257084); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257098(Ctx *c) { /* func_00257098 */
ENTER(0x257098);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025DDC8(c); return; }
}

void JP_F_002570B0(Ctx *c) { /* func_002570B0 */
ENTER(0x2570b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2570cc); SET64(17, RD(5) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2570d8); SET64(5, RD(17) + RD(0)); JP_F_002570F0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00255BE8(c); return; }
}

void JP_F_002570F0(Ctx *c) { /* func_002570F0 */
ENTER(0x2570f0);
wr8(c, (RW(4) + 68), (u8)RW(5)); return;
}

void JP_F_002570F8(Ctx *c) { /* func_002570F8 */
ENTER(0x2570f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25710c); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x257114); SET64(4, RD(16) + RD(0)); JP_F_00257130(c);
SET64(31, 0x25711c); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257130(Ctx *c) { /* func_00257130 */
ENTER(0x257130);
SET64(2, (s8)rd8(c, (RW(4) + 68))); return;
}

void JP_F_00257138(Ctx *c) { /* func_00257138 */
ENTER(0x257138);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257150); SET64(4, (s32)rd32(c, (RW(4) + 8))); JP_F_0025DD60(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257168(Ctx *c) { /* func_00257168 */
ENTER(0x257168);
wr32(c, (RW(5) + 0), RW(0));
SET32(2, RW(0) + 1); return;
}

void JP_F_00257178(Ctx *c) { /* func_00257178 */
ENTER(0x257178);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x257194); SET64(17, RD(5) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2571a0); SET64(5, RD(17) + RD(0)); JP_F_002571C0(c);
SET64(31, 0x2571a8); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002571C0(Ctx *c) { /* func_002571C0 */
ENTER(0x2571c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2571d4); SET64(16, RD(5) + RD(0)); JP_F_0025DDC8(c);
SET64(5, RD(2) + RD(0));
SET32(2, RW(0) + 1);
SET32(6, RW(5) + 2047);
SET64(4, RSD(5) < (s64)0);
SET64(3, RD(5) + RD(0));
if (RD(4) != 0) SET64(3, RD(6));
SET32(3, RSW(3) >> 11);
SET32(4, RW(3) << 11);
SET32(6, RW(3) + 1);
SET32(5, RW(5) - RW(4));
{ int t = RSD(5) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_00257208; }
wr32(c, (RW(16) + 0), RW(6));
L_00257208:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257218(Ctx *c) { /* func_00257218 */
ENTER(0x257218);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x257234); SET64(17, RD(5) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x257240); SET64(5, RD(17) + RD(0)); JP_F_00257260(c);
SET64(31, 0x257248); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00257260(Ctx *c) { /* func_00257260 */
ENTER(0x257260);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257274); SET64(16, RD(5) + RD(0)); JP_F_0025DDC8(c);
wr32(c, (RW(16) + 0), RW(2));
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257290(Ctx *c) { /* func_00257290 */
ENTER(0x257290);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2572ac); SET64(17, RD(5) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2572b8); SET64(5, RD(17) + RD(0)); JP_F_002572D0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00255BE8(c); return; }
}

void JP_F_002572D0(Ctx *c) { /* func_002572D0 */
ENTER(0x2572d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2572f4); wr32(c, (RW(18) + 4), RW(16)); JP_F_0024A8C0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x257308); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x257320); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(17, RW(17) + RW(2));
SET64(31, 0x25732c); wr32(c, (RW(18) + 64), RW(17)); JP_F_0024A8D8(c);
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(18) + 28), RW(2));
wr32(c, (RW(18) + 24), RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00257350(Ctx *c) { /* func_00257350 */
ENTER(0x257350);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25736c); SET64(17, RD(5) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x257378); SET64(5, RD(17) + RD(0)); JP_F_00257390(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00255BE8(c); return; }
}

void JP_F_00257390(Ctx *c) { /* func_00257390 */
ENTER(0x257390);
SET32(2, RW(5) << 11);
wr32(c, (RW(4) + 20), RW(5));
wr32(c, (RW(4) + 16), RW(2)); return;
}

void JP_F_002573A0(Ctx *c) { /* func_002573A0 */
ENTER(0x2573a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2573bc); SET64(17, RD(5) + RD(0)); JP_F_00255BE0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2573c8); SET64(5, RD(17) + RD(0)); JP_F_002573E0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00255BE8(c); return; }
}

void JP_F_002573E0(Ctx *c) { /* func_002573E0 */
ENTER(0x2573e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 12), RW(5));
SET64(5, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00256350(c); return; }
}

void JP_F_00257400(Ctx *c) { /* func_00257400 */
ENTER(0x257400);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257414); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25741c); SET64(4, RD(16) + RD(0)); JP_F_00257430(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_00257430(Ctx *c) { /* func_00257430 */
ENTER(0x257430);
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + -1400), RW(4)); return;
}

void JP_F_00257440(Ctx *c) { /* func_00257440 */
ENTER(0x257440);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257454); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x25745c); SET64(4, RD(16) + RD(0)); JP_F_00257478(c);
SET64(31, 0x257464); SET64(16, RD(2) + RD(0)); JP_F_00255BE8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257478(Ctx *c) { /* func_00257478 */
ENTER(0x257478);
SET64(2, (s8)rd8(c, (RW(4) + 2))); return;
}

void JP_F_00257480(Ctx *c) { /* func_00257480 */
ENTER(0x257480);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257494); SET64(16, RD(4) + RD(0)); JP_F_00255BE0(c);
SET64(31, 0x25749c); SET64(4, RD(16) + RD(0)); JP_F_002574B0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00255BE8(c); return; }
}

void JP_F_002574B0(Ctx *c) { /* func_002574B0 */
ENTER(0x2574b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 80)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00257524; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00257524; }
SET32(2, RW(0) + 1);
SET64(3, (s64)(s32)0x400000);
wr8(c, (RW(16) + 69), (u8)RW(2));
SET32(17, RW(3) + -1404);
SET32(18, RW(0) + 1);
L_002574F8:;
SET64(31, 0x257500); SET64(4, RD(17) + RD(0)); JP_F_00255BC8(c);
{ int t = RD(2) != RD(18); SET64(4, RD(16) + RD(0)); if (t) goto L_00257514; }
SET64(31, 0x257510);  JP_F_00256B28(c);
wr32(c, (RW(17) + 0), RW(0));
L_00257514:;
SET64(2, (s8)rd8(c, (RW(16) + 69)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002574F8; } }
SET64(16, rd64(c, (RW(29) + 0)));
L_00257524:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00257538(Ctx *c) { /* func_00257538 */
ENTER(0x257538);
SET32(29, RW(29) + -16);
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
}

void JP_F_00257550(Ctx *c) { /* func_00257550 */
ENTER(0x257550);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -32);
SET32(2, RW(2) + 2448);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(4, RD(2) + RD(0));
SET64(5, RD(4) + RD(0));
SET64(31, 0x25757c); SET32(6, RW(0) + 128); JP_F_00127180(c);
SET64(4, (s64)(s32)0x400000);
SET32(4, RW(4) + 2464);
SET64(16, (s64)(s32)0x250000);
SET32(6, RW(0) + 232);
SET64(5, RD(4) + RD(0));
SET64(31, 0x257598); SET32(16, RW(16) + 30008); JP_F_00127180(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2575a4); SET64(5, RD(0) + RD(0)); JP_F_0025E890(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s64)(s32)0x260000);
SET64(6, RD(0) + RD(0));
SET32(4, RW(4) + 6224);
SET64(31, 0x2575bc); SET32(5, RW(5) + 22704); JP_F_0025D208(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2575cc); SET64(16, (s64)(s32)0x4b0000); JP_F_0025E890(c);
SET64(5, (s64)(s32)0x260000);
SET32(16, RW(16) + 6232);
SET32(5, RW(5) + 5224);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2575e4); SET64(4, RD(16) + RD(0)); JP_F_0025D208(c);
SET64(31, 0x2575ec); SET64(4, RD(16) + RD(0)); JP_F_0025D540(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
{ int t = RD(17) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_00257630; }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET64(6, (s32)rd32(c, (RW(17) + 16)));
SET64(31, 0x257614); SET64(7, (s32)rd32(c, (RW(17) + 4))); JP_F_00262CE0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00262D00(c); return; }
L_00257630:;
SET64(31, 0x257638);  JP_F_00262CE0(c);
SET64(4, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00262D00(c); return; }
}

void JP_F_00257650(Ctx *c) { /* func_00257650 */
ENTER(0x257650);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00257688; }
SET64(7, (s32)rd32(c, (RW(2) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(5, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x25767c); SET64(6, (s32)rd32(c, (RW(2) + 12))); JP_F_002629F0(c);
SET64(16, RD(2) + RD(0)); goto L_00257698;
L_00257688:;
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x257698); SET64(7, RD(0) + RD(0)); JP_F_002629F0(c);
L_00257698:;
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002576B0(Ctx *c) { /* func_002576B0 */
ENTER(0x2576b0);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
SET64(3, RD(5) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(7, RD(6) + RD(0));
SET64(6, RD(0) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_002576F8; }
SET64(5, RD(7) + RD(0));
SET64(7, (s32)rd32(c, (RW(2) + 12)));
SET64(8, (s32)rd32(c, (RW(2) + 4)));
SET64(4, RD(3) + RD(0));
SET64(31, 0x2576f0); SET64(6, (s32)rd32(c, (RW(2) + 8))); JP_F_00262B70(c);
SET64(16, RD(2) + RD(0)); goto L_00257700;
L_002576F8:;
SET64(31, 0x257700); SET64(7, RD(0) + RD(0)); JP_F_002629F0(c);
L_00257700:;
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257718(Ctx *c) { /* func_00257718 */
ENTER(0x257718);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00257758; }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET64(6, (s32)rd32(c, (RW(16) + 16)));
SET64(31, 0x257740); SET64(7, (s32)rd32(c, (RW(16) + 4))); JP_F_00262CE0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00262D00(c); return; }
L_00257758:;
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x257768); SET64(7, RD(0) + RD(0)); JP_F_00262CE0(c);
SET64(4, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00262D00(c); return; }
}

void JP_F_00257780(Ctx *c) { /* func_00257780 */
ENTER(0x257780);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00262CB8(c); return; }
}

void JP_F_00257798(Ctx *c) { /* func_00257798 */
ENTER(0x257798);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00261EC0(c); return; }
}

void JP_F_002577B0(Ctx *c) { /* func_002577B0 */
ENTER(0x2577b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00261EE0(c); return; }
}

void JP_F_002577C8(Ctx *c) { /* func_002577C8 */
ENTER(0x2577c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00262DD8(c); return; }
}

void JP_F_002577E0(Ctx *c) { /* func_002577E0 */
ENTER(0x2577e0);
SET32(29, RW(29) + -48);
SET64(2, RD(5) + RD(0));
SET32(7, RW(6) + 2047);
SET64(6, RD(2) + RD(0));
SET64(5, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 32), RD(16));
SET32(7, RW(7) >> 11);
SET32(5, RW(5) + 6240);
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x257810); SET64(4, RD(29) + RD(0)); JP_F_00129C30(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x25781c); SET64(4, RD(16) + RD(0)); JP_F_0025B0F0(c);
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00257830(Ctx *c) { /* func_00257830 */
ENTER(0x257830);
SET32(29, RW(29) + -48);
SET64(2, RD(5) + RD(0));
SET32(7, RW(6) + 2047);
SET64(6, RD(2) + RD(0));
SET64(5, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 32), RD(16));
SET32(7, RW(7) >> 11);
SET32(5, RW(5) + 6240);
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x257860); SET64(4, RD(29) + RD(0)); JP_F_00129C30(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x25786c); SET64(4, RD(16) + RD(0)); JP_F_0024F638(c);
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00257880(Ctx *c) { /* func_00257880 */
ENTER(0x257880);
SET32(29, RW(29) + -48);
SET64(2, RD(4) + RD(0));
SET32(7, RW(5) + 2047);
SET64(5, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(6) + RD(0));
SET64(4, RD(29) + RD(0));
SET32(7, RW(7) >> 11);
SET64(6, RD(2) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x2578b0); SET32(5, RW(5) + 6240); JP_F_00129C30(c);
SET64(4, RD(29) + RD(0));
SET64(31, 0x2578bc); SET64(5, RD(16) + RD(0)); JP_F_0024D428(c);
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002578D0(Ctx *c) { /* func_002578D0 */
ENTER(0x2578d0);
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + 2496), RW(4)); return;
}

void JP_F_002578E0(Ctx *c) { /* func_002578E0 */
ENTER(0x2578e0);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 2496))); return;
}

void JP_F_002578F0(Ctx *c) { /* func_002578F0 */
ENTER(0x2578f0);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 2504))); return;
}

void JP_F_00257900(Ctx *c) { /* func_00257900 */
ENTER(0x257900);
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + 2504), RW(4)); return;
}

void JP_F_00257910(Ctx *c) { /* func_00257910 */
ENTER(0x257910);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257924); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25792c); SET64(4, RD(16) + RD(0)); JP_F_00257940(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_00257940(Ctx *c) { /* func_00257940 */
ENTER(0x257940);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00251DD8(c); return; }
}

void JP_F_00257958(Ctx *c) { /* func_00257958 */
ENTER(0x257958);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25796c);  JP_F_0024A8F0(c);
SET64(31, 0x257974);  JP_F_00257990(c);
SET64(31, 0x25797c); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257990(Ctx *c) { /* func_00257990 */
ENTER(0x257990);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00251DF0(c); return; }
}

void JP_F_002579A8(Ctx *c) { /* func_002579A8 */
ENTER(0x2579a8);
SET32(29, RW(29) + -48);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s32)rd32(c, (RW(20) + 12)));
SET64(31, 0x2579d8); SET64(4, RD(16) + RD(0)); JP_F_00268DB8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2579e8); SET64(17, RD(2) + RD(0)); JP_F_00268D78(c);
SET32(5, RW(0) + 1);
SET64(16, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x257a00); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(18, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x257a18); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x257a28); SET64(19, RD(2) + RD(0)); JP_F_0026B908(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x257a38); SET64(16, RD(2) + RD(0)); JP_F_0026B908(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(7, RW(18) + RW(19));
SET64(5, RD(18) + RD(0));
SET64(6, RD(19) + RD(0));
SET32(4, RW(4) + 6256);
SET64(31, 0x257a54); SET64(17, RD(2) + RD(0)); JP_F_00111888(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(7, RW(16) + RW(17));
SET64(5, RD(16) + RD(0));
SET32(16, RW(16) + RW(19));
SET64(6, RD(17) + RD(0));
SET64(31, 0x257a70); SET32(4, RW(4) + 6288); JP_F_00111888(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(18, RW(18) + RW(17));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(6, RW(18) + RW(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, (s8)rd8(c, (RW(20) + 1)));
SET32(4, RW(4) + 6320);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_00111888(c); return; }
}

void JP_F_00257AA8(Ctx *c) { /* func_00257AA8 */
ENTER(0x257aa8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x257acc); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x257adc); SET64(6, RD(18) + RD(0)); JP_F_00257B00(c);
SET64(31, 0x257ae4); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00257B00(Ctx *c) { /* func_00257B00 */
ENTER(0x257b00);
SET32(29, RW(29) + -48);
SET32(2, RW(5) + 63);
SET32(3, RW(0) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(2) & RD(3));
wr64(c, (RW(29) + 24), RD(19));
SET32(2, RW(16) - RW(5));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(6) - RW(2));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RSD(19) < 0; wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_00257B44; }
if (RD(5) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_00257B48; }
{ int t = RSD(6) >= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_00257B50; }
L_00257B44:;
SET64(4, (s64)(s32)0x4b0000);
L_00257B48:;
SET32(4, RW(4) + 6344); goto L_00257B98;
L_00257B50:;
SET64(2, RSD(4) < (s64)16);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 16); if (t) goto L_00257B88; }
SET32(2, RW(4) << 1);
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 4);
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 2);
SET64(3, (s64)(s32)0x3f0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s8)rd8(c, (RW(3) + 17536)));
if (RD(3) != RD(0)) { SET32(4, RW(4) + 1); { POLL(); goto L_00257B50; } }
SET32(2, RW(0) + 16);
L_00257B88:;
{ int t = RD(4) != RD(2); SET32(2, RW(4) << 1); if (t) goto L_00257BA8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 6384);
L_00257B98:;
SET64(31, 0x257ba0);  JP_F_0024BDE8(c);
SET64(2, RD(0) + RD(0)); goto L_00257DFC;
L_00257BA8:;
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + RW(4));
SET32(6, RW(0) + 196);
SET32(2, RW(2) << 4);
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 2);
SET64(17, (s64)(s32)0x3f0000);
SET32(17, RW(17) + 17536);
SET32(17, RW(17) + RW(2));
SET64(31, 0x257bd4); SET64(4, RD(17) + RD(0)); JP_F_001273D0(c);
wr8(c, (RW(17) + 3), (u8)RW(19));
SET32(2, RW(19) << 6);
SET32(10, RW(0) + 36);
SET32(2, RW(2) + RW(19));
SET32(8, RW(0) + 8192);
SET32(2, RW(2) << 2);
SET32(9, RW(0) + 8288);
SET32(2, RW(2) - RW(19));
SET32(6, RW(0) + 36);
SET32(2, RW(2) << 6);
wr32(c, (RW(17) + 44), RW(16));
SET32(5, RW(18) - RW(2));
SET32(2, RW(16) + RW(2));
SET32(3, RW(5) + -292);
SET32(5, RW(5) + 1755);
SET64(7, RSD(3) < (s64)0);
SET64(4, RD(2) + RD(0));
if (RD(7) != 0) SET64(3, RD(5));
wr32(c, (RW(17) + 32), RW(2));
SET32(3, RSW(3) >> 11);
wr32(c, (RW(17) + 48), RW(8));
SET32(3, RW(3) << 11);
wr32(c, (RW(17) + 52), RW(9));
SET32(7, RW(3) + RW(10));
SET64(5, RD(3) + RD(0));
SET32(2, RW(2) + RW(7));
wr32(c, (RW(17) + 36), RW(3));
wr32(c, (RW(17) + 176), RW(2));
wr32(c, (RW(17) + 40), RW(10));
SET64(31, 0x257c50); wr32(c, (RW(17) + 20), RW(0)); JP_F_00269A78(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 16), RW(2)); if (t) goto L_00257D00; }
SET64(4, RD(2) + RD(0));
SET64(31, 0x257c64); SET64(5, RD(0) + RD(0)); JP_F_00255F70(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 8), RW(2)); if (t) goto L_00257D00; }
{ int t = RSD(19) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00257CC0; }
SET32(18, RW(17) + 24);
SET64(6, (s32)rd32(c, (RW(17) + 52)));
L_00257C80:;
SET64(5, (s32)rd32(c, (RW(17) + 48)));
mul_s(c, 0, 4, RSW(6), RSW(16));
SET32(16, RW(16) + 1);
SET64(2, (s32)rd32(c, (RW(17) + 44)));
SET32(6, RW(6) - RW(5));
SET32(6, RW(6) << 1);
SET32(5, RW(5) << 1);
SET32(4, RW(4) << 1);
SET64(31, 0x257ca8); SET32(4, RW(2) + RW(4)); JP_F_00269A78(c);
SET64(3, RSD(16) < RSD(19));
wr32(c, (RW(18) + 0), RW(2));
{ int t = RD(2) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_00257D00; }
if (RD(3) != RD(0)) { SET64(6, (s32)rd32(c, (RW(17) + 52))); { POLL(); goto L_00257C80; } }
L_00257CC0:;
SET32(16, RW(17) + 24);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(5, RD(19) + RD(0));
SET64(31, 0x257cd4); SET64(6, RD(16) + RD(0)); JP_F_00251EA0(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 4), RW(2)); if (t) goto L_00257D00; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x257ce8); SET64(5, RD(19) + RD(0)); JP_F_00251AB8(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 12), RW(2)); if (t) goto L_00257D00; }
SET64(31, 0x257cf8); SET64(4, (s32)rd32(c, (RW(17) + 16))); JP_F_00264990(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(17) + 148), RW(2)); if (t) goto L_00257D10; }
L_00257D00:;
SET64(31, 0x257d08); SET64(4, RD(17) + RD(0)); JP_F_00257F60(c);
SET64(2, RD(0) + RD(0)); goto L_00257DFC;
L_00257D10:;
SET64(5, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x257d1c); SET64(4, RD(2) + RD(0)); JP_F_00264AE8(c);
SET64(31, 0x257d24);  JP_F_0024A8C0(c);
SET64(2, (s32)rd32(c, (RW(17) + 36)));
SET64(6, (s64)(s32)0x400000);
SET64(1, (s64)(s32)0x3f590000);
SET64(1, RD(1) | 0x9999);
c->f[1].u = RW(1);
SET64(3, RSD(2) < (s64)0);
SET32(4, RW(2) + 2047);
if (RD(3) != 0) SET64(2, RD(4));
SET64(5, (s32)rd32(c, (RW(6) + 2516)));
SET32(2, RSW(2) >> 11);
wr16(c, (RW(17) + 64), (u16)RW(0));
SET32(3, RW(2) << 16);
wr16(c, (RW(17) + 60), (u16)RW(2));
SET32(3, RSW(3) >> 16);
wr32(c, (RW(17) + 56), RW(5));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) * F(1));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[1].u);
{ int t = RSD(19) <= 0; wr16(c, (RW(17) + 62), (u16)RW(2)); if (t) goto L_00257DA4; }
SET64(16, RD(19) + RD(0));
SET32(3, RW(0) + -128);
SET32(2, RW(17) + 66);
L_00257D88:;
SET32(16, RW(16) + -1);
wr16(c, (RW(2) + 0), (u16)RW(3));
{ int t = RD(16) != RD(0); SET32(2, RW(2) + 2); if (t) { POLL(); goto L_00257D88; } }
L_00257DA4:;
SET32(16, RW(0) + 1);
SET64(5, RD(0) + RD(0));
SET64(4, RD(17) + RD(0));
wr16(c, (RW(17) + 70), (u16)RW(0));
wr8(c, (RW(17) + 108), (u8)RW(16));
wr32(c, (RW(17) + 84), RW(0));
wr32(c, (RW(17) + 88), RW(0));
wr32(c, (RW(17) + 92), RW(0));
wr16(c, (RW(17) + 96), (u16)RW(0));
wr32(c, (RW(17) + 100), RW(0));
wr16(c, (RW(17) + 104), (u16)RW(0));
wr16(c, (RW(17) + 106), (u16)RW(0));
wr8(c, (RW(17) + 109), (u8)RW(16));
wr8(c, (RW(17) + 114), (u8)RW(0));
SET64(31, 0x257de4); wr32(c, (RW(17) + 136), RW(0)); JP_F_0025A770(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x257df0); SET32(5, RW(0) + 1); JP_F_00259680(c);
SET64(31, 0x257df8); wr8(c, (RW(17) + 0), (u8)RW(16)); JP_F_0024A8D8(c);
SET64(2, RD(17) + RD(0));
L_00257DFC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00257E18(Ctx *c) { /* func_00257E18 */
ENTER(0x257e18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x257e34); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x257e40); SET64(5, RD(17) + RD(0)); JP_F_00257E60(c);
SET64(31, 0x257e48); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00257E60(Ctx *c) { /* func_00257E60 */
ENTER(0x257e60);
SET32(29, RW(29) + -32);
SET32(6, RW(5) + -1024);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET32(5, RW(16) + 1024);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x257e84); SET32(4, RW(0) + 2); JP_F_00257B00(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00257EA0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x257e9c); SET32(6, RW(0) + 1024); JP_F_00266A80(c);
SET64(2, RD(17) + RD(0));
L_00257EA0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00257EB8(Ctx *c) { /* func_00257EB8 */
ENTER(0x257eb8);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(2, (s32)rd32(c, (RW(2) + 2524)));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00257ED4; }
{ u32 t = RW(2); SET64(31, 0x257ed4);  rt_call(c, t); }
L_00257ED4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257EE0(Ctx *c) { /* func_00257EE0 */
ENTER(0x257ee0);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(2, (s32)rd32(c, (RW(2) + 2528)));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00257EFC; }
{ u32 t = RW(2); SET64(31, 0x257efc);  rt_call(c, t); }
L_00257EFC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257F08(Ctx *c) { /* func_00257F08 */
ENTER(0x257f08);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(2, (s32)rd32(c, (RW(2) + 2536)));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00257F24; }
{ u32 t = RW(2); SET64(31, 0x257f24);  rt_call(c, t); }
L_00257F24:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00257F30(Ctx *c) { /* func_00257F30 */
ENTER(0x257f30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257f44); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x257f4c); SET64(4, RD(16) + RD(0)); JP_F_00257F60(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_00257F60(Ctx *c) { /* func_00257F60 */
ENTER(0x257f60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_00257FA8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 6432);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024BDE8(c); return; }
L_00257FA8:;
SET64(31, 0x257fb0);  JP_F_00257EB8(c);
SET64(31, 0x257fb8); SET64(4, RD(17) + RD(0)); JP_F_00257EE0(c);
SET64(31, 0x257fc0); SET64(4, RD(17) + RD(0)); JP_F_00257F08(c);
SET64(3, (s8)rd8(c, (RW(17) + 0)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(17) + 12))); goto L_00257FDC; }
SET64(31, 0x257fd8); SET64(4, RD(17) + RD(0)); JP_F_00258588(c);
SET64(4, (s32)rd32(c, (RW(17) + 12)));
L_00257FDC:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_00257FF0; }
SET64(31, 0x257fec); wr32(c, (RW(17) + 12), RW(0)); JP_F_00251AD0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_00257FF0:;
if (RD(4) == RD(0)) { SET64(16, (s32)rd32(c, (RW(17) + 8))); goto L_00258004; }
SET64(31, 0x258000); wr32(c, (RW(17) + 4), RW(0)); JP_F_00252020(c);
SET64(16, (s32)rd32(c, (RW(17) + 8)));
L_00258004:;
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00258024; }
wr32(c, (RW(17) + 8), RW(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x25801c); SET64(6, RD(0) + RD(0)); JP_F_00256660(c);
SET64(31, 0x258024); SET64(4, RD(16) + RD(0)); JP_F_00256000(c);
L_00258024:;
SET64(4, (s32)rd32(c, (RW(17) + 148)));
{ int t = RD(4) == RD(0);  if (t) goto L_00258038; }
SET64(31, 0x258038); wr32(c, (RW(17) + 148), RW(0)); JP_F_00264A98(c);
L_00258038:;
SET64(31, 0x258040);  JP_F_0024A8C0(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { SET64(2, (s8)rd8(c, (RW(17) + 3))); goto L_00258064; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(17) + 16), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x258060);  rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(17) + 3)));
L_00258064:;
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002580F0; }
SET32(18, RW(17) + 128);
SET32(16, RW(17) + 120);
L_00258078:;
SET64(3, (s32)rd32(c, (RW(16) + -96)));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_00258098; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
wr32(c, (RW(16) + -96), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x258098);  rt_call(c, t); }
L_00258098:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 0))); goto L_002580BC; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(16) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x2580b8);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
L_002580BC:;
if (RD(4) == RD(0)) { SET64(2, (s8)rd8(c, (RW(17) + 3))); goto L_002580DC; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(18) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x2580d8);  rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(17) + 3)));
L_002580DC:;
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 4);
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00258078; } }
L_002580F0:;
SET64(4, (s32)rd32(c, (RW(17) + 116)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00258108; }
SET64(31, 0x258104); wr32(c, (RW(17) + 116), RW(0)); JP_F_00246930(c);
SET64(4, RD(17) + RD(0));
L_00258108:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x258114); SET32(6, RW(0) + 196); JP_F_001273D0(c);
wr8(c, (RW(17) + 0), (u8)RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024A8D8(c); return; }
}

void JP_F_00258138(Ctx *c) { /* func_00258138 */
ENTER(0x258138);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x258148);  JP_F_0024A8F0(c);
SET64(31, 0x258150);  JP_F_00258160(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_00258160(Ctx *c) { /* func_00258160 */
ENTER(0x258160);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 17536);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
L_00258188:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_002581A0; }
SET64(31, 0x25819c); SET64(4, RD(16) + RD(0)); JP_F_00257F60(c);
SET32(17, RW(17) + -1);
L_002581A0:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 196); if (t) { POLL(); goto L_00258188; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002581C0(Ctx *c) { /* func_002581C0 */
ENTER(0x2581c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2581d0);  JP_F_0024A8F0(c);
SET64(31, 0x2581d8);  JP_F_002581E8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_002581E8(Ctx *c) { /* func_002581E8 */
ENTER(0x2581e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00258160(c); return; }
}

void JP_F_00258200(Ctx *c) { /* func_00258200 */
ENTER(0x258200);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s8)rd8(c, (RW(16) + 3)));
{ int t = RSD(2) <= 0; SET64(19, RD(5) + RD(0)); if (t) goto L_0025825C; }
SET32(17, RW(16) + 24);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
L_00258238:;
SET32(17, RW(17) + 4);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(3); SET64(31, 0x25824c); SET32(18, RW(18) + 1); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(16) + 3)));
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_00258238; } }
L_0025825C:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x258268); SET64(5, RD(19) + RD(0)); JP_F_00252088(c);
wr32(c, (RW(16) + 20), RW(19));
SET64(31, 0x258274); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00252148(c);
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x7fff0000);
SET32(4, RW(0) + -1);
SET64(2, RD(2) | 0xffff);
wr8(c, (RW(16) + 1), (u8)RW(3));
wr32(c, (RW(16) + 144), RW(4));
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(16) + 140), RW(2));
wr32(c, (RW(16) + 76), RW(0));
wr8(c, (RW(16) + 113), (u8)RW(0));
wr32(c, (RW(16) + 156), RW(0));
wr32(c, (RW(16) + 164), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 116)));
SET64(2, (s32)rd32(c, (RW(3) + 17528)));
{ int t = RD(4) == RD(0); wr32(c, (RW(16) + 160), RW(2)); if (t) goto L_002582D0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00246988(c); return; }
L_002582D0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002582F0(Ctx *c) { /* func_002582F0 */
ENTER(0x2582f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(8) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(5, (s16)rd16(c, (RW(16) + 62)));
SET64(6, (s16)rd16(c, (RW(16) + 60)));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET32(5, RW(5) << 11);
SET64(31, 0x258338); SET32(6, RW(6) << 11); JP_F_00256F18(c);
SET64(3, (s64)(s32)0x400000);
SET64(5, (s32)rd32(c, (RW(3) + 2504)));
SET64(31, 0x258348); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_002566C0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(6, RD(0) + RD(0));
SET64(31, 0x258358); SET64(5, RD(0) + RD(0)); JP_F_00256660(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x258364); SET64(5, RD(0) + RD(0)); JP_F_00256350(c);
SET64(31, 0x25836c); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00256548(c);
SET64(31, 0x258374); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00256218(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(5, RD(20) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(18) + RD(0));
SET64(31, 0x25838c); SET64(8, RD(17) + RD(0)); JP_F_00256088(c);
SET64(31, 0x258394); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00256440(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_00258200(c); return; }
}

void JP_F_002583C0(Ctx *c) { /* func_002583C0 */
ENTER(0x2583c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2583dc); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2583e8); SET64(5, RD(17) + RD(0)); JP_F_00258400(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_00258400(Ctx *c) { /* func_00258400 */
ENTER(0x258400);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00258424; }
{ int t = RD(17) != RD(0);  if (t) goto L_00258440; }
L_00258424:;
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 6472);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024BDE8(c); return; }
L_00258440:;
SET64(31, 0x258448);  JP_F_00258588(c);
SET64(31, 0x258450);  JP_F_0024A8C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25845c); SET64(5, RD(17) + RD(0)); JP_F_00258200(c);
SET32(2, RW(0) + 3);
wr8(c, (RW(16) + 2), (u8)RW(2));
SET64(4, RD(16) + RD(0));
SET64(31, 0x258470); SET32(5, RW(0) + 1); JP_F_0025A770(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8D8(c); return; }
}

void JP_F_00258488(Ctx *c) { /* func_00258488 */
ENTER(0x258488);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25849c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x2584a4); SET64(4, RD(16) + RD(0)); JP_F_002584B8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_002584B8(Ctx *c) { /* func_002584B8 */
ENTER(0x2584b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2584cc); SET64(16, RD(4) + RD(0)); JP_F_0024A8C0(c);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x2584d8); SET64(5, RD(0) + RD(0)); JP_F_00251B38(c);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x2584e4); SET64(5, RD(0) + RD(0)); JP_F_00251B50(c);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x2584f0); SET32(5, RW(0) + 1); JP_F_002684A8(c);
SET64(31, 0x2584f8); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00252178(c);
SET64(3, (s8)rd8(c, (RW(16) + 2)));
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(16) + 116))); goto L_0025852C; }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 116))); goto L_0025852C; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(16) + 20), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x258528);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 116)));
L_0025852C:;
if (RD(4) == RD(0)) { wr8(c, (RW(16) + 172), (u8)RW(0)); goto L_00258540; }
SET64(31, 0x25853c);  JP_F_00246B28(c);
wr8(c, (RW(16) + 172), (u8)RW(0));
L_00258540:;
wr32(c, (RW(16) + 20), RW(0));
wr8(c, (RW(16) + 1), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024A8D8(c); return; }
}

void JP_F_00258558(Ctx *c) { /* func_00258558 */
ENTER(0x258558);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25856c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x258574); SET64(4, RD(16) + RD(0)); JP_F_00258588(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_00258588(Ctx *c) { /* func_00258588 */
ENTER(0x258588);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_002585C0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 6512);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024BDE8(c); return; }
L_002585C0:;
SET64(2, (s64)(s32)0x400000);
SET32(17, RW(2) + 2532);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_002585EC; }
SET64(31, 0x2585dc); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00252178(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
{ u32 t = RW(2); SET64(31, 0x2585e8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_002585EC:;
if (RD(4) == RD(0)) { SET64(3, (s8)rd8(c, (RW(16) + 2))); goto L_00258600; }
SET64(31, 0x2585fc);  JP_F_00256218(c);
SET64(3, (s8)rd8(c, (RW(16) + 2)));
L_00258600:;
SET32(2, RW(0) + 4);
if (RD(3) != RD(2)) { SET64(4, RD(16) + RD(0)); goto L_00258634; }
SET64(31, 0x258614); SET64(4, (s32)rd32(c, (RW(16) + 148))); JP_F_00264D58(c);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00258630; }
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(3); SET64(31, 0x258630);  rt_call(c, t); }
L_00258630:;
SET64(4, RD(16) + RD(0));
L_00258634:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_002584B8(c); return; }
}

void JP_F_00258648(Ctx *c) { /* func_00258648 */
ENTER(0x258648);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25865c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x258664); SET64(4, RD(16) + RD(0)); JP_F_00258680(c);
SET64(31, 0x25866c); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00258680(Ctx *c) { /* func_00258680 */
ENTER(0x258680);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002586A0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x258698); SET32(4, RW(4) + 6552); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_002586A4;
L_002586A0:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
L_002586A4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002586B0(Ctx *c) { /* func_002586B0 */
ENTER(0x2586b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2586c4); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x2586cc); SET64(4, RD(16) + RD(0)); JP_F_002586E0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_002586E0(Ctx *c) { /* func_002586E0 */
ENTER(0x2586e0);
SET32(2, RW(0) + 1);
if (RD(4) != RD(2)) { SET32(2, RW(0) + 2); goto L_002586F8; }
SET64(3, (s64)(s32)0x400000);
SET32(2, RW(0) + 5994); goto L_00258708;
L_002586F8:;
if (RD(4) != RD(2)) { SET64(2, (s64)(s32)0x400000); goto L_00258710; }
SET64(3, (s64)(s32)0x400000);
SET32(2, RW(0) + 5000);
L_00258708:;
wr32(c, (RW(3) + 2584), RW(2));
SET64(2, (s64)(s32)0x400000);
L_00258710:;
wr32(c, (RW(2) + 2508), RW(4)); return;
}

void JP_F_00258718(Ctx *c) { /* func_00258718 */
ENTER(0x258718);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x25873c); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25874c); SET64(6, RD(18) + RD(0)); JP_F_00258768(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_00258768(Ctx *c) { /* func_00258768 */
ENTER(0x258768);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, rd8(c, (RW(16) + 1)));
SET32(3, RW(2) << 24);
SET32(2, RW(2) + -3);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET32(3, RSW(3) >> 24); if (t) goto L_002587B0; }
SET64(31, 0x2587a8); SET64(4, (s32)rd32(c, (RW(16) + 12))); JP_F_00251B68(c);
SET64(3, (s32)rd32(c, (RW(16) + 136))); goto L_0025880C;
L_002587B0:;
SET32(2, RW(0) + 5);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 1); goto L_00258800; }
SET64(31, 0x2587c4); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002531F0(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x2587d0); wr32(c, (RW(17) + 0), RW(2)); JP_F_00253178(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x2587dc); wr32(c, (RW(18) + 0), RW(2)); JP_F_002531A8(c);
SET32(3, RW(0) + 16);
div_s(c, 0, RSW(3), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x2587e8); goto L_002587EC; }
L_002587EC:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(3, c->lo.d[0]);
mul_s(c, 0, 2, RSW(2), RSW(3));
wr32(c, (RW(17) + 0), RW(2)); goto L_00258808;
L_00258800:;
wr32(c, (RW(17) + 0), RW(0));
wr32(c, (RW(18) + 0), RW(2));
L_00258808:;
SET64(3, (s32)rd32(c, (RW(16) + 136)));
L_0025880C:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) + RW(3));
SET64(18, rd64(c, (RW(29) + 16)));
wr32(c, (RW(17) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 24)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00258830(Ctx *c) { /* func_00258830 */
ENTER(0x258830);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x258854); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x258864); SET64(6, RD(18) + RD(0)); JP_F_00258880(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_00258880(Ctx *c) { /* func_00258880 */
ENTER(0x258880);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, rd8(c, (RW(18) + 1)));
SET32(3, RW(2) << 24);
SET32(2, RW(2) + -3);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET32(3, RSW(3) >> 24); if (t) goto L_00258910; }
SET64(31, 0x2588c4); SET64(4, (s32)rd32(c, (RW(18) + 4))); JP_F_00253178(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x2588d0); wr32(c, (RW(16) + 0), RW(2)); JP_F_00252FE0(c);
SET64(4, (s32)rd32(c, (RW(18) + 12)));
SET64(31, 0x2588dc); SET64(17, RD(2) + RD(0)); JP_F_00251B80(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2588ec); SET64(16, RD(2) + RD(0)); JP_F_00259A90(c);
SET64(3, (s32)rd32(c, (RW(18) + 168)));
SET64(4, (s32)rd32(c, (RW(18) + 164)));
SET32(16, RW(16) - RW(3));
SET32(16, RW(16) + RW(2));
SET32(17, RW(17) - RW(16));
SET32(17, RW(17) + RW(4));
wr32(c, (RW(19) + 0), RW(17)); goto L_00258978;
L_00258910:;
SET32(2, RW(0) + 5);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 1); goto L_00258970; }
SET64(31, 0x258924); SET64(4, (s32)rd32(c, (RW(18) + 4))); JP_F_002531F0(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x258930); wr32(c, (RW(19) + 0), RW(2)); JP_F_00253178(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x25893c); wr32(c, (RW(16) + 0), RW(2)); JP_F_002531A8(c);
SET32(3, RW(0) + 16);
div_s(c, 0, RSW(3), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x258948); goto L_0025894C; }
L_0025894C:;
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(3, c->lo.d[0]);
mul_s(c, 0, 2, RSW(2), RSW(3));
wr32(c, (RW(19) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 164)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(19) + 0), RW(2)); goto L_00258978;
L_00258970:;
wr32(c, (RW(19) + 0), RW(0));
wr32(c, (RW(16) + 0), RW(2));
L_00258978:;
SET64(2, (s32)rd32(c, (RW(18) + 136)));
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(3, RW(3) + RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, RSD(3) < (s64)0);
SET64(18, rd64(c, (RW(29) + 16)));
if (RD(4) != 0) SET64(3, RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
wr32(c, (RW(19) + 0), RW(3));
SET64(19, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002589B0(Ctx *c) { /* func_002589B0 */
ENTER(0x2589b0);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + 2540);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2)); return;
}

void JP_F_002589C8(Ctx *c) { /* func_002589C8 */
ENTER(0x2589c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2589ec); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2589fc); SET64(6, RD(18) + RD(0)); JP_F_00258A18(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_00258A18(Ctx *c) { /* func_00258A18 */
ENTER(0x258a18);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 64), RD(22));
{ int t = RD(18) == RD(0); wr64(c, (RW(29) + 72), RD(31)); if (t) goto L_00258A5C; }
if (RD(19) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_00258A60; }
{ int t = RD(21) != RD(0); SET64(16, (s64)(s32)0x400000); if (t) goto L_00258A70; }
L_00258A5C:;
SET64(4, (s64)(s32)0x4b0000);
L_00258A60:;
SET64(31, 0x258a68); SET32(4, RW(4) + 6592); JP_F_0024BDE8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00258CE8;
L_00258A70:;
SET64(2, (s32)rd32(c, (RW(16) + 2508)));
{ int t = RD(2) != RD(0); SET64(17, (s64)(s32)0x400000); if (t) goto L_00258A90; }
SET64(31, 0x258a84);  JP_F_00258880(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00258CE8;
L_00258A90:;
wr32(c, (RW(17) + 2588), RW(0));
SET64(3, rd8(c, (RW(18) + 1)));
SET32(2, RW(3) + -3);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET32(2, RW(3) << 24); if (t) goto L_00258C28; }
SET64(2, (s8)rd8(c, (RW(18) + 114)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 156))); goto L_00258AE0; }
SET64(2, (s64)(s32)0x3f0000);
SET64(4, (s32)rd32(c, (RW(18) + 160)));
SET64(3, (s32)rd32(c, (RW(2) + 17528)));
SET64(5, (s32)rd32(c, (RW(18) + 156)));
SET32(3, RW(3) - RW(4));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
L_00258AE0:;
wr32(c, (RW(19) + 0), RW(2));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET64(4, RD(18) + RD(0));
SET64(31, 0x258af8); SET64(22, (s64)(s32)0x400000); JP_F_00258880(c);
c->f[1].u = rd32(c, (RW(19) + 0));
c->f[1].f = (f32)(s32)c->f[1].u;
SET32(20, RW(22) + 2584);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(7, (s32)rd32(c, (RW(20) + 0)));
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[3].u = RW(6);
c->f[3].f = (f32)(s32)c->f[3].u;
SET64(1, (s64)(s32)0x447a0000);
c->f[5].u = RW(1);
c->f[2].u = RW(7);
c->f[2].f = (f32)(s32)c->f[2].u;
SET64(1, (s64)(s32)0x42700000);
c->f[4].u = RW(1);
c->f[0].f = fpu_div(F(0), F(3));
c->f[1].f = fpu_div(F(1), F(2));
c->f[0].f = fpu(F(0) - F(1));
c->f[1].f = fpu(F(0) * F(5));
c->fcc = F(4) < F(1);
{ int t = c->fcc; wr32(c, (RW(17) + 2588), c->f[1].u); if (t) goto L_00258B78; }
SET64(1, (s64)(s32)0xc2700000);
c->f[0].u = RW(1);
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(2, (s32)rd32(c, (RW(18) + 136))); goto L_00258CD0; }
L_00258B78:;
SET64(2, (s64)(s32)0x400000);
SET32(4, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(2) + 2544)));
{ int t = RD(3) != RD(4); SET32(16, RW(16) + 2508); if (t) goto L_00258BB8; }
SET64(5, RD(29) + RD(0));
SET64(17, (s32)rd32(c, (RW(16) + 0)));
SET32(6, RW(29) + 4);
wr32(c, (RW(16) + 0), RW(0));
SET64(31, 0x258ba4); SET64(4, RD(18) + RD(0)); JP_F_00258A18(c);
SET64(31, 0x258bac); wr32(c, (RW(16) + 0), RW(17)); JP_F_002589B0(c);
SET64(7, (s32)rd32(c, (RW(20) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, (s32)rd32(c, (RW(29) + 4)));
L_00258BB8:;
c->f[1].u = RW(6);
c->f[1].f = (f32)(s32)c->f[1].u;
SET64(1, (s64)(s32)0x4f000000);
c->f[3].u = RW(1);
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[2].u = RW(7);
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[0].f = fpu_div(F(0), F(1));
c->f[0].f = fpu(F(0) * F(2));
c->fcc = F(3) <= F(0);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[1].u);
if (!c->fcc) { wr32(c, (RW(18) + 156), RW(3)); goto L_00258C14; }
c->f[0].f = fpu(F(0) - F(3));
SET64(2, (s64)(s32)0x80000000);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[1].u);
SET64(3, RD(3) | RD(2));
wr32(c, (RW(18) + 156), RW(3));
L_00258C14:;
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + 17528)));
wr32(c, (RW(18) + 160), RW(2)); goto L_00258CCC;
L_00258C28:;
SET32(3, RW(0) + 5);
SET32(2, RSW(2) >> 24);
if (RD(2) != RD(3)) { wr32(c, (RW(19) + 0), RW(0)); goto L_00258CC8; }
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x258c44); SET64(22, (s64)(s32)0x400000); JP_F_002531F0(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x258c50); wr32(c, (RW(29) + 0), RW(2)); JP_F_00253178(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x258c5c); wr32(c, (RW(29) + 4), RW(2)); JP_F_002531A8(c);
SET32(3, RW(0) + 16);
div_s(c, 0, RSW(3), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x258c68); goto L_00258C6C; }
L_00258C6C:;
SET64(2, (s32)rd32(c, (RW(29) + 0)));
c->f[2].u = rd32(c, (RW(29) + 4));
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[1].u = rd32(c, (RW(22) + 2584));
c->f[1].f = (f32)(s32)c->f[1].u;
SET64(3, c->lo.d[0]);
mul_s(c, 0, 5, RSW(2), RSW(3));
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(29) + 0), RW(5));
c->f[0].f = fpu_div(F(0), F(2));
c->f[0].f = fpu(F(0) * F(1));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[1].u);
wr32(c, (RW(19) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 156)));
SET32(2, RW(2) + 1);
SET32(3, RW(3) + RW(2));
wr32(c, (RW(19) + 0), RW(3)); goto L_00258CCC;
L_00258CC8:;
SET64(22, (s64)(s32)0x400000);
L_00258CCC:;
SET64(2, (s32)rd32(c, (RW(18) + 136)));
L_00258CD0:;
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET32(3, RW(3) + RW(2));
wr32(c, (RW(19) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(22) + 2584)));
wr32(c, (RW(21) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 16)));
L_00258CE8:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00258D10(Ctx *c) { /* func_00258D10 */
ENTER(0x258d10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x258d24); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x258d2c); SET64(4, RD(16) + RD(0)); JP_F_00258D48(c);
SET64(31, 0x258d34); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00258D48(Ctx *c) { /* func_00258D48 */
ENTER(0x258d48);
SET32(29, RW(29) + -32);
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x258d5c); SET32(6, RW(29) + 4); JP_F_00258A18(c);
c->f[1].u = rd32(c, (RW(29) + 0));
c->f[1].f = (f32)(s32)c->f[1].u;
SET64(1, (s64)(s32)0x42c80000);
c->f[0].u = RW(1);
c->f[2].u = rd32(c, (RW(29) + 4));
c->f[2].f = (f32)(s32)c->f[2].u;
SET64(31, rd64(c, (RW(29) + 16)));
c->f[1].f = fpu_div(F(1), F(2));
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(2, (s32)c->f[0].u);
SET32(29, RW(29) + 32); return;
}

void JP_F_00258D98(Ctx *c) { /* func_00258D98 */
ENTER(0x258d98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x258dac); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x258db4); SET64(4, RD(16) + RD(0)); JP_F_00258DD0(c);
SET64(31, 0x258dbc); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00258DD0(Ctx *c) { /* func_00258DD0 */
ENTER(0x258dd0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00258DF0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x258de8); SET32(4, RW(4) + 6632); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_00258E10;
L_00258DF0:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
SET64(2, RSD(2) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00258E10; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002531F0(c); return; }
L_00258E10:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00258E20(Ctx *c) { /* func_00258E20 */
ENTER(0x258e20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x258e34); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x258e3c); SET64(4, RD(16) + RD(0)); JP_F_00258E58(c);
SET64(31, 0x258e44); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00258E58(Ctx *c) { /* func_00258E58 */
ENTER(0x258e58);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00258E78; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x258e70); SET32(4, RW(4) + 6680); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_00258E98;
L_00258E78:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
SET64(2, RSD(2) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00258E98; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00253178(c); return; }
L_00258E98:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00258EA8(Ctx *c) { /* func_00258EA8 */
ENTER(0x258ea8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x258ebc); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x258ec4); SET64(4, RD(16) + RD(0)); JP_F_00258EE0(c);
SET64(31, 0x258ecc); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00258EE0(Ctx *c) { /* func_00258EE0 */
ENTER(0x258ee0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00258F00; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x258ef8); SET32(4, RW(4) + 6728); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_00258F20;
L_00258F00:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
SET64(2, RSD(2) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00258F20; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00253190(c); return; }
L_00258F20:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00258F30(Ctx *c) { /* func_00258F30 */
ENTER(0x258f30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x258f44); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x258f4c); SET64(4, RD(16) + RD(0)); JP_F_00258F68(c);
SET64(31, 0x258f54); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00258F68(Ctx *c) { /* func_00258F68 */
ENTER(0x258f68);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00258F88; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x258f80); SET32(4, RW(4) + 6776); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_00258FA8;
L_00258F88:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
SET64(2, RSD(2) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00258FA8; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002533F8(c); return; }
L_00258FA8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00258FB8(Ctx *c) { /* func_00258FB8 */
ENTER(0x258fb8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x258fcc); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x258fd4); SET64(4, RD(16) + RD(0)); JP_F_00258FF0(c);
SET64(31, 0x258fdc); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00258FF0(Ctx *c) { /* func_00258FF0 */
ENTER(0x258ff0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00259010; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x259008); SET32(4, RW(4) + 6824); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_00259030;
L_00259010:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
SET64(2, RSD(2) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00259030; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00253400(c); return; }
L_00259030:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259040(Ctx *c) { /* func_00259040 */
ENTER(0x259040);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x259064); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x259074); SET64(6, RD(18) + RD(0)); JP_F_00259090(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_00259090(Ctx *c) { /* func_00259090 */
ENTER(0x259090);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_002590E0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 6872);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024BDE8(c); return; }
L_002590E0:;
SET64(3, (s8)rd8(c, (RW(16) + 173)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET64(17, RD(0) + RD(0)); if (t) goto L_0025910C; }
SET64(31, 0x2590f8); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00253338(c);
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + -128);
{ int t = RD(17) != RD(2); SET64(3, (s64)(s32)0x3f0000); if (t) goto L_00259110; }
SET64(17, RD(0) + RD(0));
L_0025910C:;
SET64(3, (s64)(s32)0x3f0000);
L_00259110:;
SET64(2, (s32)rd32(c, (RW(3) + 17520)));
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_0025914C; }
SET32(2, RW(0) + -128);
if (RD(19) != RD(2)) { SET32(6, RW(19) + RW(17)); goto L_0025914C; }
SET64(31, 0x259130); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00253190(c);
SET32(3, RW(0) + 2);
if (RD(2) != RD(3)) { SET64(6, RD(0) + RD(0)); goto L_00259148; }
SET32(2, RW(0) + 15);
SET32(6, RW(0) + -15);
if (RD(18) != 0) SET64(6, RD(2));
L_00259148:;
SET32(6, RW(6) + RW(17));
L_0025914C:;
SET32(2, RW(18) << 1);
SET32(2, RW(2) + RW(16));
wr16(c, (RW(2) + 66), (u16)RW(19));
SET64(3, (s8)rd8(c, (RW(16) + 3)));
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00259180; }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x259174); SET64(5, RD(18) + RD(0)); JP_F_00251C60(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0025918C;
L_00259180:;
SET64(31, 0x259188); SET32(4, RW(4) + 6920); JP_F_0024BDE8(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_0025918C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002591A8(Ctx *c) { /* func_002591A8 */
ENTER(0x2591a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2591c4); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2591d0); SET64(5, RD(17) + RD(0)); JP_F_002591F0(c);
SET64(31, 0x2591d8); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002591F0(Ctx *c) { /* func_002591F0 */
ENTER(0x2591f0);
SET32(29, RW(29) + -16);
SET32(3, RW(5) << 1);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00259218; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25920c); SET32(4, RW(4) + 6968); JP_F_0024BDE8(c);
SET64(2, RD(0) + RD(0)); goto L_00259220;
L_00259218:;
SET32(3, RW(3) + RW(4));
SET64(2, (s16)rd16(c, (RW(3) + 66)));
L_00259220:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259230(Ctx *c) { /* func_00259230 */
ENTER(0x259230);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25924c); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x259258); SET64(5, RD(17) + RD(0)); JP_F_00259270(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_00259270(Ctx *c) { /* func_00259270 */
ENTER(0x259270);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00259290; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 7016);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_00259290:;
SET64(2, RSD(5) < (s64)-15);
{ int t = RD(2) == RD(0); SET64(2, RSD(5) < (s64)16); if (t) goto L_002592A8; }
SET32(2, RW(0) + -15);
wr16(c, (RW(4) + 70), (u16)RW(2)); goto L_002592B8;
L_002592A8:;
if (RD(2) != RD(0)) { wr16(c, (RW(4) + 70), (u16)RW(5)); goto L_002592B8; }
SET32(2, RW(0) + 15);
wr16(c, (RW(4) + 70), (u16)RW(2));
L_002592B8:;
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(2) + 17520)));
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(4) + 12))); goto L_002592E0; }
SET64(5, (s16)rd16(c, (RW(4) + 70)));
SET64(31, 0x2592d4); SET64(4, (s32)rd32(c, (RW(4) + 12))); JP_F_00251C78(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_002592EC;
L_002592E0:;
SET64(31, 0x2592e8); SET32(5, RW(0) + -128); JP_F_00251C78(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_002592EC:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002592F8(Ctx *c) { /* func_002592F8 */
ENTER(0x2592f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25930c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x259314); SET64(4, RD(16) + RD(0)); JP_F_00259330(c);
SET64(31, 0x25931c); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259330(Ctx *c) { /* func_00259330 */
ENTER(0x259330);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00259350; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x259348); SET32(4, RW(4) + 7064); JP_F_0024BDE8(c);
SET64(2, RD(0) + RD(0)); goto L_00259354;
L_00259350:;
SET64(2, (s16)rd16(c, (RW(4) + 70)));
L_00259354:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259360(Ctx *c) { /* func_00259360 */
ENTER(0x259360);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25937c); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x259388); SET64(5, RD(17) + RD(0)); JP_F_002593A0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_002593A0(Ctx *c) { /* func_002593A0 */
ENTER(0x2593a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_002593D0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 7112);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_002593D0:;
SET64(3, (s8)rd8(c, (RW(16) + 173)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); wr16(c, (RW(16) + 64), (u16)RW(5)); if (t) goto L_002593F0; }
SET64(31, 0x2593e8); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002532E0(c);
SET64(5, (s16)rd16(c, (RW(16) + 64))); goto L_002593F8;
L_002593F0:;
SET64(2, RD(0) + RD(0));
SET64(5, (s16)rd16(c, (RW(16) + 64)));
L_002593F8:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(5, RW(5) + RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00251C48(c); return; }
}

void JP_F_00259410(Ctx *c) { /* func_00259410 */
ENTER(0x259410);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x259424); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25942c); SET64(4, RD(16) + RD(0)); JP_F_00259448(c);
SET64(31, 0x259434); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259448(Ctx *c) { /* func_00259448 */
ENTER(0x259448);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00259468; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x259460); SET32(4, RW(4) + 7160); JP_F_0024BDE8(c);
SET64(2, RD(0) + RD(0)); goto L_0025946C;
L_00259468:;
SET64(2, (s16)rd16(c, (RW(4) + 64)));
L_0025946C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259478(Ctx *c) { /* func_00259478 */
ENTER(0x259478);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25948c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x259494); SET64(4, RD(16) + RD(0)); JP_F_002594B0(c);
SET64(31, 0x25949c); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002594B0(Ctx *c) { /* func_002594B0 */
ENTER(0x2594b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2594c0); SET64(4, (s32)rd32(c, (RW(4) + 4))); JP_F_002532E0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002594D0(Ctx *c) { /* func_002594D0 */
ENTER(0x2594d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2594ec); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2594f8); SET64(5, RD(17) + RD(0)); JP_F_00259518(c);
SET64(31, 0x259500); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00259518(Ctx *c) { /* func_00259518 */
ENTER(0x259518);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x259528); SET64(4, (s32)rd32(c, (RW(4) + 4))); JP_F_00253338(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259538(Ctx *c) { /* func_00259538 */
ENTER(0x259538);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25954c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x259554); SET64(4, RD(16) + RD(0)); JP_F_00259570(c);
SET64(31, 0x25955c); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259570(Ctx *c) { /* func_00259570 */
ENTER(0x259570);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002533A0(c); return; }
}

void JP_F_00259588(Ctx *c) { /* func_00259588 */
ENTER(0x259588);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25959c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x2595a4); SET64(4, RD(16) + RD(0)); JP_F_002595C0(c);
SET64(31, 0x2595ac); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002595C0(Ctx *c) { /* func_002595C0 */
ENTER(0x2595c0);
SET32(29, RW(29) + -48);
SET32(5, RW(0) + 2048);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, (s64)(s32)0x530000);
SET32(16, RW(16) + -16744);
SET32(6, RW(29) + 20);
SET64(7, RD(16) + RD(0));
SET32(8, RW(29) + 16);
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x2595ec); SET64(9, RD(29) + RD(0)); JP_F_0024B118(c);
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 20)));
SET64(31, rd64(c, (RW(29) + 40)));
if (RD(3) != 0) SET64(2, RD(16));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00259608(Ctx *c) { /* func_00259608 */
ENTER(0x259608);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x259624); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x259630); SET64(5, RD(17) + RD(0)); JP_F_00259680(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_00259648(Ctx *c) { /* func_00259648 */
ENTER(0x259648);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25965c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x259664); SET64(4, RD(16) + RD(0)); JP_F_00259688(c);
SET64(31, 0x25966c); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259680(Ctx *c) { /* func_00259680 */
ENTER(0x259680);
wr8(c, (RW(4) + 173), (u8)RW(5)); return;
}

void JP_F_00259688(Ctx *c) { /* func_00259688 */
ENTER(0x259688);
SET64(2, (s8)rd8(c, (RW(4) + 173))); return;
}

void JP_F_00259690(Ctx *c) { /* func_00259690 */
ENTER(0x259690);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2596a4); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x2596ac); SET64(4, RD(16) + RD(0)); JP_F_002596C0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_002596C0(Ctx *c) { /* func_002596C0 */
ENTER(0x2596c0);
SET64(2, (s64)(s32)0x400000);
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(2) + 2516), RW(4));
wr32(c, (RW(3) + 2520), RW(4)); return;
}

void JP_F_002596D8(Ctx *c) { /* func_002596D8 */
ENTER(0x2596d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2596f4); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x259700); SET64(5, RD(17) + RD(0)); JP_F_00259718(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_00259718(Ctx *c) { /* func_00259718 */
ENTER(0x259718);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00259738; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 7208);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_00259738:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(4) + 56), RW(5));
wr32(c, (RW(2) + 2520), RW(5));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259750(Ctx *c) { /* func_00259750 */
ENTER(0x259750);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr32(c, (RW(29) + 32), c->f[20].u);
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x25977c); c->f[20].u = c->f[12].u; JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
c->f[12].u = c->f[20].u;
SET64(5, RD(17) + RD(0));
SET64(31, 0x259790); SET64(6, RD(18) + RD(0)); JP_F_002597B0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
c->f[20].u = rd32(c, (RW(29) + 32));
SET32(29, RW(29) + 48); { JP_F_0024A8F8(c); return; }
}

void JP_F_002597B0(Ctx *c) { /* func_002597B0 */
ENTER(0x2597b0);
SET32(29, RW(29) + -16);
SET64(9, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(9) != RD(0); SET64(10, RD(5) + RD(0)); if (t) goto L_002597D8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 7256);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_002597D8:;
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(7, (s16)rd16(c, (RW(9) + 60)));
SET64(8, (s32)rd32(c, (RW(9) + 8)));
SET64(6, RD(7) + RD(0));
SET64(4, RD(8) + RD(0));
SET32(6, RW(6) << 11);
c->f[0].f = fpu(F(12) * F(0));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[1].u);
SET32(5, RW(3) + 31);
SET64(2, RSD(3) < (s64)0);
if (RD(2) != 0) SET64(3, RD(5));
SET32(3, RSW(3) >> 5);
mul_s(c, 0, 3, RSW(3), RSW(10));
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
SET32(5, RW(2) + 2047);
SET64(3, RD(2) + RD(0));
SET64(2, RSD(2) < (s64)0);
if (RD(2) != 0) SET64(3, RD(5));
SET32(3, RSW(3) >> 11);
SET64(2, RSD(3) < RSD(7));
if (RD(2) != 0) SET64(7, RD(3));
SET32(5, RW(7) << 16);
wr16(c, (RW(9) + 62), (u16)RW(7));
{ int t = RD(8) == RD(0); SET32(5, RSW(5) >> 5); if (t) goto L_00259854; }
SET64(31, 0x259854);  JP_F_00256F18(c);
L_00259854:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259860(Ctx *c) { /* func_00259860 */
ENTER(0x259860);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x259874); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25987c); SET64(4, RD(16) + RD(0)); JP_F_00259890(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_00259890(Ctx *c) { /* func_00259890 */
ENTER(0x259890);
SET32(29, RW(29) + -16);
SET64(7, RD(4) + RD(0));
{ int t = RD(7) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002598B8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 7304);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_002598B8:;
SET64(6, (s16)rd16(c, (RW(7) + 60)));
SET64(1, (s64)(s32)0x3f590000);
SET64(1, RD(1) | 0x9999);
c->f[1].u = RW(1);
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
SET32(6, RW(6) << 11);
SET64(3, (s32)rd32(c, (RW(7) + 8)));
SET64(4, RD(3) + RD(0));
c->f[0].f = fpu(F(0) * F(1));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[1].u);
SET32(5, RW(2) << 16);
wr16(c, (RW(7) + 62), (u16)RW(2));
{ int t = RD(3) == RD(0); SET32(5, RSW(5) >> 5); if (t) goto L_00259900; }
SET64(31, 0x259900);  JP_F_00256F18(c);
L_00259900:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259910(Ctx *c) { /* func_00259910 */
ENTER(0x259910);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25992c); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x259938); SET64(5, RD(17) + RD(0)); JP_F_00259950(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_00259950(Ctx *c) { /* func_00259950 */
ENTER(0x259950);
SET32(29, RW(29) + -16);
SET64(3, RD(4) + RD(0));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00259978; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 7352);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_00259978:;
SET64(2, (s32)rd32(c, (RW(3) + 8)));
wr16(c, (RW(3) + 62), (u16)RW(5));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0025999C; }
SET64(6, (s16)rd16(c, (RW(3) + 60)));
SET32(5, RW(5) << 16);
SET32(5, RSW(5) >> 5);
SET64(31, 0x25999c); SET32(6, RW(6) << 11); JP_F_00256F18(c);
L_0025999C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002599A8(Ctx *c) { /* func_002599A8 */
ENTER(0x2599a8);
SET64(2, (s16)rd16(c, (RW(4) + 62))); return;
}

void JP_F_002599B0(Ctx *c) { /* func_002599B0 */
ENTER(0x2599b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2599c4); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x2599cc); SET64(4, RD(16) + RD(0)); JP_F_002599E8(c);
SET64(31, 0x2599d4); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002599E8(Ctx *c) { /* func_002599E8 */
ENTER(0x2599e8);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00259A08; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x259a00); SET32(4, RW(4) + 7400); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_00259A3C;
L_00259A08:;
SET64(3, (s32)rd32(c, (RW(4) + 20)));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_00259A38; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x259a24); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(2) + 2047);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(4));
SET32(2, RSW(2) >> 11); goto L_00259A3C;
L_00259A38:;
SET64(2, RD(0) + RD(0));
L_00259A3C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259A48(Ctx *c) { /* func_00259A48 */
ENTER(0x259a48);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x259a64); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x259a70); SET64(5, RD(17) + RD(0)); JP_F_00259A90(c);
SET64(31, 0x259a78); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00259A90(Ctx *c) { /* func_00259A90 */
ENTER(0x259a90);
SET32(29, RW(29) + -16);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00259AA4; }
{ int t = RSD(5) >= 0; SET32(2, RW(5) << 2); if (t) goto L_00259AB8; }
L_00259AA4:;
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x259ab0); SET32(4, RW(4) + 7448); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_00259AEC;
L_00259AB8:;
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00259AE8; }
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x259ad8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(3, RW(2) >> 31);
SET32(3, RW(3) + RW(2));
SET32(2, RSW(3) >> 1); goto L_00259AEC;
L_00259AE8:;
SET64(2, RD(0) + RD(0));
L_00259AEC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259AF8(Ctx *c) { /* func_00259AF8 */
ENTER(0x259af8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x259b10); wr32(c, (RW(29) + 16), c->f[20].u); JP_F_0024A8F0(c);
SET64(31, 0x259b18); SET64(4, RD(16) + RD(0)); JP_F_00259B38(c);
SET64(31, 0x259b20); c->f[20].u = c->f[0].u; JP_F_0024A8F8(c);
SET64(16, rd64(c, (RW(29) + 0)));
c->f[0].u = c->f[20].u;
SET64(31, rd64(c, (RW(29) + 8)));
c->f[20].u = rd32(c, (RW(29) + 16));
SET32(29, RW(29) + 32); return;
}

void JP_F_00259B38(Ctx *c) { /* func_00259B38 */
ENTER(0x259b38);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr32(c, (RW(29) + 32), c->f[20].u);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
c->f[20].u = RW(0);
{ int t = RD(18) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00259B78; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x259b68); SET32(4, RW(4) + 7496); JP_F_0024BDE8(c);
SET64(1, (s64)(s32)0xbf800000);
c->f[0].u = RW(1);
SET64(16, rd64(c, (RW(29) + 0))); goto L_00259C04;
L_00259B78:;
SET64(31, 0x259b80);  JP_F_00258680(c);
SET64(2, RSD(2) < (s64)2);
{ int t = RD(2) != RD(0); c->f[0].u = c->f[20].u; if (t) goto L_00259C00; }
SET64(3, (s32)rd32(c, (RW(18) + 20)));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_00259C00; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x259ba8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(31, 0x259bb4); SET64(16, RD(2) + RD(0)); JP_F_00258EE0(c);
SET64(17, RD(2) + RD(0));
SET64(31, 0x259bc0); SET64(4, RD(18) + RD(0)); JP_F_00258E58(c);
SET32(3, RW(17) << 3);
SET32(3, RW(3) + RW(17));
c->f[1].u = RW(2);
c->f[1].f = (f32)(s32)c->f[1].u;
SET32(3, RW(3) << 1);
div_s(c, 0, RSW(16), RSW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x259bdc); goto L_00259BE0; }
L_00259BE0:;
SET64(16, c->lo.d[0]);
SET32(16, RW(16) << 5);
c->f[0].u = RW(16);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[20].f = fpu_div(F(0), F(1));
c->f[0].u = c->f[20].u;
L_00259C00:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00259C04:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
c->f[20].u = rd32(c, (RW(29) + 32));
SET32(29, RW(29) + 48); return;
}

void JP_F_00259C20(Ctx *c) { /* func_00259C20 */
ENTER(0x259c20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x259c34); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x259c3c); SET64(4, RD(16) + RD(0)); JP_F_00259C58(c);
SET64(31, 0x259c44); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259C58(Ctx *c) { /* func_00259C58 */
ENTER(0x259c58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00259C80; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x259c78); SET32(4, RW(4) + 7552); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_00259CB4;
L_00259C80:;
SET64(3, (s32)rd32(c, (RW(16) + 20)));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_00259CB0; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x259c9c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(16) + 62)));
SET32(3, RW(3) << 11);
SET64(2, RSD(2) < RSD(3));
SET64(2, RD(2) < (u64)(s64)1); goto L_00259CB4;
L_00259CB0:;
SET64(2, RD(0) + RD(0));
L_00259CB4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259CC8(Ctx *c) { /* func_00259CC8 */
ENTER(0x259cc8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x259ce4); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x259cf0); SET64(5, RD(17) + RD(0)); JP_F_00259D08(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_00259D08(Ctx *c) { /* func_00259D08 */
ENTER(0x259d08);
wr8(c, (RW(4) + 109), (u8)RW(5)); return;
}

void JP_F_00259D10(Ctx *c) { /* func_00259D10 */
ENTER(0x259d10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x259d24); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x259d2c); SET64(4, RD(16) + RD(0)); JP_F_00259D48(c);
SET64(31, 0x259d34); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259D48(Ctx *c) { /* func_00259D48 */
ENTER(0x259d48);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00259D68; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x259d60); SET32(4, RW(4) + 7600); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_00259D74;
L_00259D68:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
SET64(2, RD(2) ^ 0x5);
SET64(2, RD(2) < (u64)(s64)1);
L_00259D74:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259D80(Ctx *c) { /* func_00259D80 */
ENTER(0x259d80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x259d90);  JP_F_0024A8F0(c);
SET64(31, 0x259d98);  JP_F_00259DA8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_00259DA8(Ctx *c) { /* func_00259DA8 */
ENTER(0x259da8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x259dcc); SET32(16, RW(19) + 2512); JP_F_0024A8C0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(18, rd64(c, (RW(29) + 16))); if (t) goto L_00259DF0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024A8D8(c); return; }
L_00259DF0:;
SET32(2, RW(0) + 1);
SET32(18, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(2));
SET64(31, 0x259e04); SET32(17, RW(0) + 15); JP_F_0024A8D8(c);
SET64(31, 0x259e0c);  JP_F_0024A8C0(c);
SET64(31, 0x259e14);  JP_F_00252F78(c);
SET32(2, RW(0) + 2);
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(16) + 0), RW(2));
SET32(16, RW(3) + 17536);
L_00259E28:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00259E40; }
SET64(31, 0x259e3c); SET64(4, RD(16) + RD(0)); JP_F_0025C788(c);
SET32(17, RW(17) + -1);
L_00259E40:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 196); if (t) { POLL(); goto L_00259E28; } }
SET32(2, RW(0) + 3);
SET32(16, RW(19) + 2512);
SET64(31, 0x259e58); wr32(c, (RW(16) + 0), RW(2)); JP_F_00251BE8(c);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + 2520)));
SET64(2, RSD(2) < (s64)51);
{ int t = RD(2) == RD(0);  if (t) goto L_00259E74; }
SET64(31, 0x259e74);  JP_F_00251BE8(c);
L_00259E74:;
wr32(c, (RW(16) + 0), RW(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0024A8D8(c); return; }
}

void JP_F_00259E98(Ctx *c) { /* func_00259E98 */
ENTER(0x259e98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x259ea8);  JP_F_0024A8F0(c);
SET64(31, 0x259eb0);  JP_F_00259EC0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_00259EC0(Ctx *c) { /* func_00259EC0 */
ENTER(0x259ec0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00259DA8(c); return; }
}

void JP_F_00259ED8(Ctx *c) { /* func_00259ED8 */
ENTER(0x259ed8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x259eec); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x259ef4); SET64(4, RD(16) + RD(0)); JP_F_00259F10(c);
SET64(31, 0x259efc); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259F10(Ctx *c) { /* func_00259F10 */
ENTER(0x259f10);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00259F30; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x259f28); SET32(4, RW(4) + 7648); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_00259F34;
L_00259F30:;
SET64(2, (s16)rd16(c, (RW(4) + 96)));
L_00259F34:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259F40(Ctx *c) { /* func_00259F40 */
ENTER(0x259f40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x259f54); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x259f5c); SET64(4, RD(16) + RD(0)); JP_F_00259F70(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_00259F70(Ctx *c) { /* func_00259F70 */
ENTER(0x259f70);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00259F90; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 7696);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_00259F90:;
SET64(31, rd64(c, (RW(29) + 0)));
wr16(c, (RW(4) + 106), (u16)RW(0));
wr16(c, (RW(4) + 96), (u16)RW(0));
wr32(c, (RW(4) + 100), RW(0));
wr16(c, (RW(4) + 104), (u16)RW(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259FB0(Ctx *c) { /* func_00259FB0 */
ENTER(0x259fb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x259fc4); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x259fcc); SET64(4, RD(16) + RD(0)); JP_F_00259FE8(c);
SET64(31, 0x259fd4); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00259FE8(Ctx *c) { /* func_00259FE8 */
ENTER(0x259fe8);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025A008; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25a000); SET32(4, RW(4) + 7744); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_0025A00C;
L_0025A008:;
SET64(2, (s32)rd32(c, (RW(4) + 76)));
L_0025A00C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A018(Ctx *c) { /* func_0025A018 */
ENTER(0x25a018);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25a034); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25a040); SET64(5, RD(17) + RD(0)); JP_F_0025A058(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025A058(Ctx *c) { /* func_0025A058 */
ENTER(0x25a058);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025A078; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 7792);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_0025A078:;
SET64(31, rd64(c, (RW(29) + 0)));
wr8(c, (RW(4) + 108), (u8)RW(5));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A088(Ctx *c) { /* func_0025A088 */
ENTER(0x25a088);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25a09c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25a0a4); SET64(4, RD(16) + RD(0)); JP_F_0025A0C0(c);
SET64(31, 0x25a0ac); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A0C0(Ctx *c) { /* func_0025A0C0 */
ENTER(0x25a0c0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025A0E0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25a0d8); SET32(4, RW(4) + 7840); JP_F_0024BDE8(c);
SET64(2, RD(0) + RD(0)); goto L_0025A0E4;
L_0025A0E0:;
SET64(2, (s32)rd32(c, (RW(4) + 20)));
L_0025A0E4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A0F0(Ctx *c) { /* func_0025A0F0 */
ENTER(0x25a0f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25a10c); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25a118); SET64(5, RD(17) + RD(0)); JP_F_0025A130(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025A130(Ctx *c) { /* func_0025A130 */
ENTER(0x25a130);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025A150; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 7888);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_0025A150:;
SET64(31, rd64(c, (RW(29) + 0)));
wr8(c, (RW(4) + 112), (u8)RW(5));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A160(Ctx *c) { /* func_0025A160 */
ENTER(0x25a160);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25a174); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25a17c); SET64(4, RD(16) + RD(0)); JP_F_0025A198(c);
SET64(31, 0x25a184); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A198(Ctx *c) { /* func_0025A198 */
ENTER(0x25a198);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025A1B8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25a1b0); SET32(4, RW(4) + 7944); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1); goto L_0025A1BC;
L_0025A1B8:;
SET64(2, (s8)rd8(c, (RW(4) + 113)));
L_0025A1BC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A1C8(Ctx *c) { /* func_0025A1C8 */
ENTER(0x25a1c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25a1e4); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25a1f0); SET64(5, RD(17) + RD(0)); JP_F_0025A208(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025A208(Ctx *c) { /* func_0025A208 */
ENTER(0x25a208);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
{ int t = RD(18) != RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_0025A240; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25a234); SET32(4, RW(4) + 8000); JP_F_0024BDE8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0025A320;
L_0025A240:;
SET64(2, (s8)rd8(c, (RW(18) + 114)));
{ int t = RD(16) == RD(2); SET64(17, (s8)rd8(c, (RW(18) + 1))); if (t) goto L_0025A31C; }
SET64(31, 0x25a254);  JP_F_0024A8C0(c);
SET32(2, RW(17) + -3);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); wr8(c, (RW(18) + 114), (u8)RW(16)); if (t) goto L_0025A314; }
SET32(2, RW(0) + 1);
{ int t = RD(16) != RD(2); SET64(4, (s32)rd32(c, (RW(18) + 12))); if (t) goto L_0025A280; }
SET64(31, 0x25a278); SET64(5, RD(0) + RD(0)); JP_F_00251B50(c);
SET64(16, (s64)(s32)0x400000); goto L_0025A298;
L_0025A280:;
SET64(31, 0x25a288); SET32(5, RW(0) + 1); JP_F_00251B50(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(2) + 17528)));
wr32(c, (RW(18) + 160), RW(3));
SET64(16, (s64)(s32)0x400000);
L_0025A298:;
SET64(4, RD(18) + RD(0));
SET32(16, RW(16) + 2508);
SET64(5, RD(29) + RD(0));
SET64(17, (s32)rd32(c, (RW(16) + 0)));
SET32(6, RW(29) + 4);
SET64(31, 0x25a2b4); wr32(c, (RW(16) + 0), RW(0)); JP_F_00258A18(c);
SET64(2, (s64)(s32)0x400000);
c->f[0].u = rd32(c, (RW(29) + 0));
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(1, (s64)(s32)0x4f000000);
c->f[3].u = RW(1);
c->f[2].u = rd32(c, (RW(29) + 4));
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[1].u = rd32(c, (RW(2) + 2584));
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu_div(F(0), F(2));
c->f[0].f = fpu(F(0) * F(1));
c->fcc = F(3) <= F(0);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[1].u);
{ int t = !c->fcc; wr32(c, (RW(16) + 0), RW(17)); if (t) goto L_0025A310; }
c->f[0].f = fpu(F(0) - F(3));
SET64(2, (s64)(s32)0x80000000);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[1].u);
SET64(3, RD(3) | RD(2));
L_0025A310:;
wr32(c, (RW(18) + 156), RW(3));
L_0025A314:;
SET64(31, 0x25a31c);  JP_F_0024A8D8(c);
L_0025A31C:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0025A320:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0025A338(Ctx *c) { /* func_0025A338 */
ENTER(0x25a338);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25a34c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25a354); SET64(4, RD(16) + RD(0)); JP_F_0025A370(c);
SET64(31, 0x25a35c); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A370(Ctx *c) { /* func_0025A370 */
ENTER(0x25a370);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025A390; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25a388); SET32(4, RW(4) + 8040); JP_F_0024BDE8(c);
SET64(2, RD(0) + RD(0)); goto L_0025A394;
L_0025A390:;
SET64(2, (s8)rd8(c, (RW(4) + 114)));
L_0025A394:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A3A0(Ctx *c) { /* func_0025A3A0 */
ENTER(0x25a3a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25a3b4); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25a3bc); SET64(4, RD(16) + RD(0)); JP_F_0025A3D0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025A3D0(Ctx *c) { /* func_0025A3D0 */
ENTER(0x25a3d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00251D48(c); return; }
}

void JP_F_0025A3E8(Ctx *c) { /* func_0025A3E8 */
ENTER(0x25a3e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25a3fc);  JP_F_0024A8F0(c);
SET64(31, 0x25a404);  JP_F_0025A420(c);
SET64(31, 0x25a40c); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A420(Ctx *c) { /* func_0025A420 */
ENTER(0x25a420);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00251D60(c); return; }
}

void JP_F_0025A438(Ctx *c) { /* func_0025A438 */
ENTER(0x25a438);
 return;
}

void JP_F_0025A440(Ctx *c) { /* func_0025A440 */
ENTER(0x25a440);
 return;
}

void JP_F_0025A448(Ctx *c) { /* func_0025A448 */
ENTER(0x25a448);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25a45c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25a464); SET64(4, RD(16) + RD(0)); JP_F_0025A480(c);
SET64(31, 0x25a46c); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A480(Ctx *c) { /* func_0025A480 */
ENTER(0x25a480);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void JP_F_0025A488(Ctx *c) { /* func_0025A488 */
ENTER(0x25a488);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25a49c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25a4a4); SET64(4, RD(16) + RD(0)); JP_F_0025A4B8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025A4B8(Ctx *c) { /* func_0025A4B8 */
ENTER(0x25a4b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00252118(c); return; }
}

void JP_F_0025A4D0(Ctx *c) { /* func_0025A4D0 */
ENTER(0x25a4d0);
 return;
}

void JP_F_0025A4D8(Ctx *c) { /* func_0025A4D8 */
ENTER(0x25a4d8);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0025A4E0(Ctx *c) { /* func_0025A4E0 */
ENTER(0x25a4e0);
 return;
}

void JP_F_0025A4E8(Ctx *c) { /* func_0025A4E8 */
ENTER(0x25a4e8);
 return;
}

void JP_F_0025A4F0(Ctx *c) { /* func_0025A4F0 */
ENTER(0x25a4f0);
 return;
}

void JP_F_0025A4F8(Ctx *c) { /* func_0025A4F8 */
ENTER(0x25a4f8);
 return;
}

void JP_F_0025A500(Ctx *c) { /* func_0025A500 */
ENTER(0x25a500);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0024BDC0(c); return; }
}

void JP_F_0025A518(Ctx *c) { /* func_0025A518 */
ENTER(0x25a518);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25a534); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25a540); SET64(5, RD(17) + RD(0)); JP_F_0025A560(c);
SET64(31, 0x25a548); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025A560(Ctx *c) { /* func_0025A560 */
ENTER(0x25a560);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 48), RD(31));
SET64(3, (s8)rd8(c, (RW(19) + 114)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0025A628; }
SET64(4, (s32)rd32(c, (RW(19) + 12)));
SET64(16, (s64)(s32)0x400000);
SET64(31, 0x25a598); SET32(16, RW(16) + 2508); JP_F_00251D20(c);
SET64(31, 0x25a5a0); SET64(18, RD(2) + RD(0)); JP_F_00259D80(c);
SET64(17, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(29) + RD(0));
wr32(c, (RW(16) + 0), RW(0));
SET64(4, RD(19) + RD(0));
SET64(31, 0x25a5b8); SET32(6, RW(29) + 4); JP_F_00258A18(c);
SET64(2, (s64)(s32)0x400000);
c->f[0].u = rd32(c, (RW(29) + 0));
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(1, (s64)(s32)0x4f000000);
c->f[3].u = RW(1);
c->f[2].u = rd32(c, (RW(29) + 4));
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[1].u = rd32(c, (RW(2) + 2584));
c->f[1].f = (f32)(s32)c->f[1].u;
wr32(c, (RW(16) + 0), RW(17));
c->f[0].f = fpu_div(F(0), F(2));
c->f[0].f = fpu(F(0) * F(1));
c->fcc = F(3) <= F(0);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[1].u);
{ int t = !c->fcc; SET64(2, RD(18) + RD(0)); if (t) goto L_0025A618; }
c->f[0].f = fpu(F(0) - F(3));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[1].u);
SET64(3, (s64)(s32)0x80000000);
SET64(4, RD(4) | RD(3));
L_0025A618:;
wr32(c, (RW(19) + 156), RW(4));
SET64(3, (s64)(s32)0x3f0000);
SET64(4, (s32)rd32(c, (RW(3) + 17528)));
wr32(c, (RW(19) + 160), RW(4));
L_0025A628:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0025A648(Ctx *c) { /* func_0025A648 */
ENTER(0x25a648);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25a65c); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25a664); SET64(4, RD(16) + RD(0)); JP_F_0025A680(c);
SET64(31, 0x25a66c); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A680(Ctx *c) { /* func_0025A680 */
ENTER(0x25a680);
SET64(2, (s32)rd32(c, (RW(4) + 136))); return;
}

void JP_F_0025A688(Ctx *c) { /* func_0025A688 */
ENTER(0x25a688);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25a6a4); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25a6b0); SET64(5, RD(17) + RD(0)); JP_F_0025A6C8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025A6C8(Ctx *c) { /* func_0025A6C8 */
ENTER(0x25a6c8);
wr32(c, (RW(4) + 136), RW(5)); return;
}

void JP_F_0025A6D0(Ctx *c) { /* func_0025A6D0 */
ENTER(0x25a6d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25a6ec); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25a6f8); SET64(5, RD(17) + RD(0)); JP_F_0025A718(c);
SET64(31, 0x25a700); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0025A718(Ctx *c) { /* func_0025A718 */
ENTER(0x25a718);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002530B0(c); return; }
}

void JP_F_0025A730(Ctx *c) { /* func_0025A730 */
ENTER(0x25a730);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25a74c); SET64(17, RD(5) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25a758); SET64(5, RD(17) + RD(0)); JP_F_0025A770(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025A770(Ctx *c) { /* func_0025A770 */
ENTER(0x25a770);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr8(c, (RW(4) + 152), (u8)RW(5));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0025A798; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00253010(c); return; }
L_0025A798:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A7A8(Ctx *c) { /* func_0025A7A8 */
ENTER(0x25a7a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25a7bc); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25a7c4); SET64(4, RD(16) + RD(0)); JP_F_0025A7E0(c);
SET64(31, 0x25a7cc); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A7E0(Ctx *c) { /* func_0025A7E0 */
ENTER(0x25a7e0);
SET64(2, (s8)rd8(c, (RW(4) + 152))); return;
}

void JP_F_0025A7E8(Ctx *c) { /* func_0025A7E8 */
ENTER(0x25a7e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x25a80c); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25a81c); SET64(6, RD(18) + RD(0)); JP_F_0025A838(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025A838(Ctx *c) { /* func_0025A838 */
ENTER(0x25a838);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00253110(c); return; }
}

void JP_F_0025A850(Ctx *c) { /* func_0025A850 */
ENTER(0x25a850);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25a864); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25a86c); SET64(4, RD(16) + RD(0)); JP_F_0025A888(c);
SET64(31, 0x25a874); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A888(Ctx *c) { /* func_0025A888 */
ENTER(0x25a888);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025A8B0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25a8a0); SET32(4, RW(4) + 8088); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_0025A8B0:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00252FE0(c); return; }
}

void JP_F_0025A8C0(Ctx *c) { /* func_0025A8C0 */
ENTER(0x25a8c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25a8d4); SET64(16, RD(4) + RD(0)); JP_F_0024A8F0(c);
SET64(31, 0x25a8dc); SET64(4, RD(16) + RD(0)); JP_F_0025A8F8(c);
SET64(31, 0x25a8e4); SET64(16, RD(2) + RD(0)); JP_F_0024A8F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0025A8F8(Ctx *c) { /* func_0025A8F8 */
ENTER(0x25a8f8);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025A920; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x25a910); SET32(4, RW(4) + 8136); JP_F_0024BDE8(c);
SET32(2, RW(0) + -1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_0025A920:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00252FD8(c); return; }
}

void JP_F_0025A930(Ctx *c) { /* func_0025A930 */
ENTER(0x25a930);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x25a954); SET64(18, RD(6) + RD(0)); JP_F_0024A8F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25a964); SET64(6, RD(18) + RD(0)); JP_F_0025A980(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0024A8F8(c); return; }
}

void JP_F_0025A980(Ctx *c) { /* func_0025A980 */
ENTER(0x25a980);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0025A9A0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 8184);
SET32(29, RW(29) + 16); { JP_F_0024BDE8(c); return; }
L_0025A9A0:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00252FE8(c); return; }
}

