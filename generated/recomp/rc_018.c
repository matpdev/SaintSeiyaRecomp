#include "r5900.h"
#include "functab.h"

void F_00250100(Ctx *c) { /* func_00250100 */
ENTER(0x250100);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002462E8(c); return; }
}

void F_00250118(Ctx *c) { /* func_00250118 */
ENTER(0x250118);
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
SET32(29, RW(29) + 16); { F_00246308(c); return; }
}

void F_00250148(Ctx *c) { /* func_00250148 */
ENTER(0x250148);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00245E40(c); return; }
}

void F_00250160(Ctx *c) { /* func_00250160 */
ENTER(0x250160);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25017c); SET64(16, RD(4) + RD(0)); F_00247970(c);
if (RSD(17) <= 0) { SET64(2, (s32)rd32(c, (RW(16) + 164))); goto L_00250198; }
SET64(2, (s32)rd32(c, (RW(16) + 160)));
SET32(2, RW(2) + RW(17));
wr32(c, (RW(16) + 160), RW(2)); goto L_002501A0;
L_00250198:;
SET32(2, RW(2) - RW(17));
wr32(c, (RW(16) + 164), RW(2));
L_002501A0:;
SET64(31, 0x2501a8);  F_00247988(c);
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002501C0(Ctx *c) { /* func_002501C0 */
ENTER(0x2501c0);
wr32(c, (RW(4) + 84), RW(6));
wr32(c, (RW(4) + 80), RW(5)); return;
}

void F_002501D0(Ctx *c) { /* func_002501D0 */
ENTER(0x2501d0);
wr32(c, (RW(4) + 76), RW(6));
wr32(c, (RW(4) + 72), RW(5)); return;
}

void F_002501E0(Ctx *c) { /* func_002501E0 */
ENTER(0x2501e0);
wr32(c, (RW(4) + 60), RW(5)); return;
}

void F_002501E8(Ctx *c) { /* func_002501E8 */
ENTER(0x2501e8);
SET64(2, (s32)rd32(c, (RW(4) + 60))); return;
}

void F_002501F0(Ctx *c) { /* func_002501F0 */
ENTER(0x2501f0);
wr32(c, (RW(4) + 64), RW(5)); return;
}

void F_002501F8(Ctx *c) { /* func_002501F8 */
ENTER(0x2501f8);
SET64(2, (s32)rd32(c, (RW(4) + 64))); return;
}

void F_00250200(Ctx *c) { /* func_00250200 */
ENTER(0x250200);
wr32(c, (RW(4) + 68), RW(5)); return;
}

void F_00250208(Ctx *c) { /* func_00250208 */
ENTER(0x250208);
SET64(2, (s32)rd32(c, (RW(4) + 68))); return;
}

void F_00250210(Ctx *c) { /* func_00250210 */
ENTER(0x250210);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246088(c); return; }
}

void F_00250228(Ctx *c) { /* func_00250228 */
ENTER(0x250228);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246090(c); return; }
}

void F_00250240(Ctx *c) { /* func_00250240 */
ENTER(0x250240);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246098(c); return; }
}

void F_00250258(Ctx *c) { /* func_00250258 */
ENTER(0x250258);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002460D0(c); return; }
}

void F_00250270(Ctx *c) { /* func_00250270 */
ENTER(0x250270);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246130(c); return; }
}

void F_00250288(Ctx *c) { /* func_00250288 */
ENTER(0x250288);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246138(c); return; }
}

void F_002502A0(Ctx *c) { /* func_002502A0 */
ENTER(0x2502a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246140(c); return; }
}

void F_002502B8(Ctx *c) { /* func_002502B8 */
ENTER(0x2502b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246148(c); return; }
}

void F_002502D0(Ctx *c) { /* func_002502D0 */
ENTER(0x2502d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246158(c); return; }
}

void F_002502E8(Ctx *c) { /* func_002502E8 */
ENTER(0x2502e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246150(c); return; }
}

void F_00250300(Ctx *c) { /* func_00250300 */
ENTER(0x250300);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246160(c); return; }
}

void F_00250318(Ctx *c) { /* func_00250318 */
ENTER(0x250318);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00250338; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246168(c); return; }
L_00250338:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00250348(Ctx *c) { /* func_00250348 */
ENTER(0x250348);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246180(c); return; }
}

void F_00250360(Ctx *c) { /* func_00250360 */
ENTER(0x250360);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246188(c); return; }
}

void F_00250378(Ctx *c) { /* func_00250378 */
ENTER(0x250378);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246190(c); return; }
}

void F_00250390(Ctx *c) { /* func_00250390 */
ENTER(0x250390);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2503a8); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00246190(c);
{ int t = RSD(2) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_002503D8; }
SET64(2, rd8(c, (RW(16) + 1)));
SET32(2, RW(2) + -2);
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002503D8; }
SET64(31, 0x2503cc); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00246198(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_002503DC;
L_002503D8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002503DC:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002503E8(Ctx *c) { /* func_002503E8 */
ENTER(0x2503e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x250408); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00246190(c);
{ int t = RSD(2) <= 0; SET32(2, RW(0) + -128); if (t) goto L_00250438; }
SET64(2, rd8(c, (RW(16) + 1)));
SET32(2, RW(2) + -2);
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) == RD(0)) { SET32(2, RW(0) + -128); goto L_00250438; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x250430); SET64(5, RD(17) + RD(0)); F_002461A0(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0025043C;
L_00250438:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0025043C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00250450(Ctx *c) { /* func_00250450 */
ENTER(0x250450);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x250468); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00246190(c);
if (RSD(2) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00250498; }
SET64(2, rd8(c, (RW(16) + 1)));
SET32(2, RW(2) + -2);
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00250498; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002461B0(c); return; }
L_00250498:;
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002504A8(Ctx *c) { /* func_002504A8 */
ENTER(0x2504a8);
SET64(2, (s32)rd32(c, (RW(4) + 152))); return;
}

void F_002504B0(Ctx *c) { /* func_002504B0 */
ENTER(0x2504b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002460C8(c); return; }
}

void F_002504C8(Ctx *c) { /* func_002504C8 */
ENTER(0x2504c8);
SET32(2, RW(4) + 88); return;
}

void F_002504D0(Ctx *c) { /* func_002504D0 */
ENTER(0x2504d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002461B8(c); return; }
}

void F_002504E8(Ctx *c) { /* func_002504E8 */
ENTER(0x2504e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002461F8(c); return; }
}

void F_00250500(Ctx *c) { /* func_00250500 */
ENTER(0x250500);
SET64(2, RD(0) + RD(0)); return;
}

void F_00250508(Ctx *c) { /* func_00250508 */
ENTER(0x250508);
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(2) + 28764), RW(4));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(3) + 28768), RW(5)); return;
}

void F_00250520(Ctx *c) { /* func_00250520 */
ENTER(0x250520);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + 28764)));
SET64(5, RD(4) + RD(0));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00250544; }
SET64(2, (s64)(s32)0x3f0000);
{ u32 t = RW(3); SET64(31, 0x250544); SET64(4, (s32)rd32(c, (RW(2) + 28768))); rt_call(c, t); }
L_00250544:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_00250558(Ctx *c) { /* func_00250558 */
ENTER(0x250558);
SET64(4, (s64)(s32)0x3f0000);
SET64(2, RD(0) + RD(0));
SET32(4, RW(4) + 28760);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 0), RW(3)); return;
}

void F_00250578(Ctx *c) { /* func_00250578 */
ENTER(0x250578);
SET64(4, (s64)(s32)0x3f0000);
SET64(2, RD(0) + RD(0));
SET32(4, RW(4) + 28760);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + -1);
wr32(c, (RW(4) + 0), RW(3)); return;
}

void F_00250598(Ctx *c) { /* func_00250598 */
ENTER(0x250598);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -48);
SET64(3, (s32)rd32(c, (RW(2) + 28760)));
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
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_002505DC; }
SET64(31, 0x2505dc);  F_00250558(c);
L_002505DC:;
wr16(c, (RW(18) + 0), (u16)RW(0));
wr16(c, (RW(19) + 0), (u16)RW(0));
{ int t = RD(17) != RD(0); wr16(c, (RW(20) + 0), (u16)RW(0)); if (t) goto L_002505F4; }
{ int t = RSD(16) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0025072C; }
L_002505F4:;
SET64(11, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET32(2, RW(11) + -25648);
{ int t = RSD(16) <= 0; SET64(10, (s16)rd16(c, (RW(2) + 512))); if (t) goto L_00250664; }
SET64(8, RD(2) + RD(0));
L_00250610:;
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
{ int t = RD(6) != RD(0); SET64(10, (s16)rd16(c, (RW(3) + 0))); if (t) { POLL(); goto L_00250610; } }
SET32(2, RW(11) + -25648);
SET64(7, RD(0) + RD(0));
L_00250664:;
{ int t = RSD(16) <= 0; SET64(8, (s16)rd16(c, (RW(2) + 1024))); if (t) goto L_002506BC; }
SET64(9, RD(2) + RD(0));
L_00250670:;
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
{ int t = RD(6) != RD(0); SET64(8, (s16)rd16(c, (RW(3) + 0))); if (t) { POLL(); goto L_00250670; } }
L_002506BC:;
SET32(2, RW(11) + -25648);
SET64(7, RD(0) + RD(0));
{ int t = RSD(16) <= 0; SET64(4, (s16)rd16(c, (RW(2) + 1536))); if (t) goto L_0025071C; }
SET64(9, RD(2) + RD(0));
L_002506D0:;
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
{ int t = RD(6) != RD(0); SET64(4, (s16)rd16(c, (RW(3) + 0))); if (t) { POLL(); goto L_002506D0; } }
L_0025071C:;
wr16(c, (RW(18) + 0), (u16)RW(10));
SET64(2, RD(0) + RD(0));
wr16(c, (RW(19) + 0), (u16)RW(8));
wr16(c, (RW(20) + 0), (u16)RW(4));
L_0025072C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00250750(Ctx *c) { /* func_00250750 */
ENTER(0x250750);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -32);
SET64(3, (s32)rd32(c, (RW(2) + 28760)));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00250784; }
SET64(31, 0x250784);  F_00250558(c);
L_00250784:;
SET64(4, (s64)(s32)0x4b0000);
SET64(6, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(8, RD(18) + RD(0));
SET32(4, RW(4) + -20632);
SET64(31, 0x2507a0); SET32(5, RW(0) + 6); F_00250598(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002507C0(Ctx *c) { /* func_002507C0 */
ENTER(0x2507c0);
SET64(7, rd16(c, (RW(5) + 0)));
SET64(2, RD(0) + RD(0));
SET64(5, rd16(c, (RW(4) + 0)));
SET64(3, rd16(c, (RW(6) + 0)));
mul_s(c, 0, 5, RSW(5), RSW(7));
SET32(3, RW(3) + RW(5));
wr16(c, (RW(4) + 0), (u16)RW(3)); return;
}

void F_002507E0(Ctx *c) { /* func_002507E0 */
ENTER(0x2507e0);
SET32(2, RW(0) + 256); return;
}

void F_002507E8(Ctx *c) { /* func_002507E8 */
ENTER(0x2507e8);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + -20568); return;
}

void F_002507F8(Ctx *c) { /* func_002507F8 */
ENTER(0x2507f8);
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

void F_00250828(Ctx *c) { /* func_00250828 */
ENTER(0x250828);
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
if (RD(3) == RD(0)) { rt_break(c, 0x250888); goto L_0025088C; }
L_0025088C:;
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
SET64(31, 0x2508d0); SET32(16, RW(16) + RW(2)); F_00248448(c);
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
SET64(31, 0x250938); SET32(6, RW(17) + RW(6)); F_002507F8(c);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(21) + 0), RW(2));
SET64(6, (s32)rd32(c, (RW(19) + 0)));
SET64(5, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x250950); SET32(6, RW(23) + RW(6)); F_002507F8(c);
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

void F_00250980(Ctx *c) { /* func_00250980 */
ENTER(0x250980);
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
SET64(31, 0x2509c0); wr32(c, (RW(29) + 8), RW(2)); F_00247C38(c);
SET64(3, (s8)rd8(c, (RW(29) + 21)));
SET64(4, (s8)rd8(c, (RW(29) + 19)));
wr32(c, (RW(16) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
wr32(c, (RW(17) + 0), RW(4));
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 64); return;
}

void F_002509E8(Ctx *c) { /* func_002509E8 */
ENTER(0x2509e8);
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
{ u32 t = RW(3); SET64(31, 0x250a34); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_00250A68; }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x250a5c); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) + RD(0)); goto L_00250B84;
L_00250A68:;
{ int t = RD(17) != RD(2); SET32(2, RW(0) + 2); if (t) goto L_00250AD0; }
SET64(7, RD(19) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
{ int t = RSD(18) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00250B68; }
SET64(9, (s64)(s32)0xff0000);
L_00250A88:;
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
{ int t = RD(4) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_00250A88; } }
SET64(3, (s32)rd32(c, (RW(20) + 0))); goto L_00250B6C;
L_00250AD0:;
{ int t = RD(17) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_00250B28; }
SET64(5, RD(19) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
{ int t = RSD(18) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00250B68; }
SET32(7, RW(0) + -256);
L_00250AF0:;
SET64(2, rd16(c, (RW(5) + 0)));
SET32(8, RW(8) + 1);
SET64(3, rd8(c, (RW(5) + 1)));
SET32(5, RW(5) + 2);
SET32(2, RW(2) << 8);
SET64(4, RSD(8) < RSD(18));
SET64(2, RD(2) & RD(7));
SET64(3, RD(3) | RD(2));
wr16(c, (RW(6) + 0), (u16)RW(3));
{ int t = RD(4) != RD(0); SET32(6, RW(6) + 2); if (t) { POLL(); goto L_00250AF0; } }
SET64(3, (s32)rd32(c, (RW(20) + 0))); goto L_00250B6C;
L_00250B28:;
{ int t = RD(17) != RD(2); SET64(4, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_00250B48; }
SET64(5, RD(19) + RD(0));
SET64(31, 0x250b3c); SET64(6, RD(18) & 0xffff); F_00127218(c);
SET64(3, (s32)rd32(c, (RW(20) + 0))); goto L_00250B6C;
L_00250B48:;
 { POLL(); goto L_00250B48; }
L_00250B68:;
SET64(3, (s32)rd32(c, (RW(20) + 0)));
L_00250B6C:;
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x250b80); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, RD(18) + RD(0));
L_00250B84:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_00250BA8(Ctx *c) { /* func_00250BA8 */
ENTER(0x250ba8);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -30672);
SET32(6, RW(0) + 192);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
}

void F_00250BD0(Ctx *c) { /* func_00250BD0 */
ENTER(0x250bd0);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + -30672);
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_00250C20; }
SET64(6, RD(3) + RD(0));
SET64(5, RD(3) + RD(0));
L_00250BF0:;
SET32(7, RW(7) + 1);
SET32(6, RW(6) + 12);
SET64(4, RSD(7) < (s64)16);
{ int t = RD(4) == RD(0); SET32(5, RW(5) + 12); if (t) goto L_00250C24; }
SET64(2, (s8)rd8(c, (RW(6) + 0)));
{ int t = RD(2) != RD(0); SET64(3, RD(5) + RD(0)); if (t) { POLL(); goto L_00250BF0; } }
SET64(2, RD(0) + RD(0)); goto L_00250C28;
L_00250C20:;
SET32(4, RW(0) + 1);
L_00250C24:;
SET64(2, RD(0) + RD(0));
L_00250C28:;
if (RD(4) != 0) SET64(2, RD(3)); return;
}

void F_00250C30(Ctx *c) { /* func_00250C30 */
ENTER(0x250c30);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00250C58; }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 12);
wr8(c, (RW(2) + 0), (u8)RW(0));
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
L_00250C58:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00250C68(Ctx *c) { /* func_00250C68 */
ENTER(0x250c68);
wr16(c, (RW(4) + 6), (u16)RW(6));
wr16(c, (RW(4) + 4), (u16)RW(5)); return;
}

void F_00250C78(Ctx *c) { /* func_00250C78 */
ENTER(0x250c78);
wr16(c, (RW(4) + 10), (u16)RW(6));
wr16(c, (RW(4) + 8), (u16)RW(5)); return;
}

void F_00250C88(Ctx *c) { /* func_00250C88 */
ENTER(0x250c88);
SET64(2, rd16(c, (RW(4) + 8)));
wr16(c, (RW(5) + 0), (u16)RW(2));
SET64(3, rd16(c, (RW(4) + 10)));
wr16(c, (RW(6) + 0), (u16)RW(3)); return;
}

void F_00250CA0(Ctx *c) { /* func_00250CA0 */
ENTER(0x250ca0);
SET32(5, RW(5) << 16);
SET64(6, RD(4) + RD(0));
{ int t = RD(6) == RD(0); SET32(7, RSW(5) >> 16); if (t) goto L_00250D10; }
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
{ int t = RD(2) == RD(0); SET64(3, RSD(5) < (s64)-32768); if (t) goto L_00250CF8; }
SET32(2, RW(0) + -32768);
if (RD(3) == 0) SET64(2, RD(5));
SET32(2, RW(2) << 16);
SET32(3, RSW(2) >> 16); goto L_00250CFC;
L_00250CF8:;
SET32(3, RW(0) + 32767);
L_00250CFC:;
wr16(c, (RW(6) + 10), (u16)RW(4));
SET64(2, RD(3) + RD(0));
wr16(c, (RW(6) + 8), (u16)RW(3)); return;
L_00250D10:;
SET64(2, RD(7) + RD(0)); return;
}

void F_00250D18(Ctx *c) { /* func_00250D18 */
ENTER(0x250d18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x250d2c); SET64(16, RD(4) + RD(0)); F_00250BD0(c);
SET64(8, RD(2) + RD(0));
{ int t = RD(8) == RD(0); SET64(3, (s64)(s32)0x400000); if (t) goto L_00250DA4; }
SET32(4, RW(3) + -30480);
SET64(2, (s8)rd8(c, (RW(4) + 0)));
{ int t = RD(2) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_00250D80; }
SET64(6, RD(4) + RD(0));
SET64(5, RD(4) + RD(0));
L_00250D50:;
SET32(7, RW(7) + 1);
SET32(6, RW(6) + 144);
SET64(3, RSD(7) < (s64)16);
{ int t = RD(3) == RD(0); SET32(5, RW(5) + 144); if (t) goto L_00250D84; }
SET64(2, (s8)rd8(c, (RW(6) + 0)));
{ int t = RD(2) != RD(0); SET64(4, RD(5) + RD(0)); if (t) { POLL(); goto L_00250D50; } }
wr32(c, (RW(4) + 20), RW(16)); goto L_00250D88;
L_00250D80:;
SET32(3, RW(0) + 1);
L_00250D84:;
wr32(c, (RW(4) + 20), RW(16));
L_00250D88:;
{ int t = RD(3) == RD(0); wr32(c, (RW(4) + 136), RW(8)); if (t) goto L_00250DA0; }
SET32(3, RW(0) + 1);
SET64(2, RD(4) + RD(0));
wr8(c, (RW(4) + 0), (u8)RW(3)); goto L_00250DA4;
L_00250DA0:;
SET64(2, RD(0) + RD(0));
L_00250DA4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00250DB8(Ctx *c) { /* func_00250DB8 */
ENTER(0x250db8);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00250DE0; }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 144);
wr8(c, (RW(2) + 0), (u8)RW(0));
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
L_00250DE0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00250DF0(Ctx *c) { /* func_00250DF0 */
ENTER(0x250df0);
wr16(c, (RW(4) + 6), (u16)RW(6));
wr16(c, (RW(4) + 4), (u16)RW(5)); return;
}

void F_00250E00(Ctx *c) { /* func_00250E00 */
ENTER(0x250e00);
SET32(29, RW(29) + -32);
SET32(2, RW(5) << 16);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
SET32(7, RW(29) + 2);
SET64(5, RD(6) + RD(0));
SET32(4, RSW(2) >> 16);
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x250e28); SET64(6, RD(29) + RD(0)); F_002479B0(c);
SET64(5, (s16)rd16(c, (RW(29) + 0)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x250e38); SET64(6, (s16)rd16(c, (RW(29) + 2))); F_00250DF0(c);
SET64(4, (s32)rd32(c, (RW(16) + 136)));
SET64(5, (s16)rd16(c, (RW(29) + 0)));
SET64(31, 0x250e48); SET64(6, (s16)rd16(c, (RW(29) + 2))); F_00250C68(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00250E58(Ctx *c) { /* func_00250E58 */
ENTER(0x250e58);
wr16(c, (RW(4) + 10), (u16)RW(6));
wr16(c, (RW(4) + 8), (u16)RW(5)); return;
}

void F_00250E68(Ctx *c) { /* func_00250E68 */
ENTER(0x250e68);
SET32(6, RW(6) << 16);
SET64(8, RD(4) + RD(0));
{ int t = RD(5) != RD(0); SET32(9, RSW(6) >> 16); if (t) goto L_00250EB0; }
SET64(3, (s32)rd32(c, (RW(8) + 20)));
SET64(2, RSD(5) < RSD(3));
if (RD(2) == RD(0)) { wr32(c, (RW(8) + 120), RW(0)); goto L_00250EB0; }
SET32(2, RW(8) + 24);
L_00250E90:;
SET32(3, RW(3) + -1);
wr16(c, (RW(2) + 0), (u16)RW(0));
{ int t = RD(3) != RD(0); SET32(2, RW(2) + 2); if (t) { POLL(); goto L_00250E90; } }
wr32(c, (RW(8) + 120), RW(0));
L_00250EB0:;
{ int t = RD(8) == RD(0);  if (t) goto L_00250F44; }
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
{ int t = RD(5) != RD(0); SET32(4, RW(4) + 24); if (t) goto L_00250F10; }
SET32(2, RW(0) + -32768);
SET64(3, RSD(6) < (s64)-32768);
SET64(5, RD(2) + RD(0));
if (RD(3) == 0) SET64(5, RD(6)); goto L_00250F14;
L_00250F10:;
SET32(5, RW(0) + 32767);
L_00250F14:;
SET32(2, RW(5) << 16);
SET64(3, (s32)rd32(c, (RW(8) + 120)));
SET32(2, RSW(2) >> 16);
if (RSD(2) < 0) { SET32(2, RW(0) - RW(2)); goto L_00250F28; }
L_00250F28:;
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) == RD(0); wr16(c, (RW(4) + 0), (u16)RW(5)); if (t) goto L_00250F38; }
wr32(c, (RW(8) + 120), RW(2));
L_00250F38:;
SET64(2, rd16(c, (RW(8) + 8)));
wr16(c, (RW(8) + 8), (u16)RW(9));
wr16(c, (RW(8) + 10), (u16)RW(2));
L_00250F44:;
 return;
}

void F_00250F50(Ctx *c) { /* func_00250F50 */
ENTER(0x250f50);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 7);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
if (RD(5) == RD(0)) { rt_break(c, 0x250f68); goto L_00250F6C; }
L_00250F6C:;
SET64(4, (s64)(s32)0x3f0000);
SET32(8, RW(0) + 1);
SET64(7, (s32)rd32(c, (RW(16) + 120)));
SET64(3, (s32)rd32(c, (RW(4) + 28776)));
SET32(2, RW(7) + -1);
SET64(4, RD(7) + RD(0));
div_s(c, 0, RSW(2), RSW(5));
SET64(2, c->lo.d[0]);
SET32(2, RW(2) + 1);
SET64(5, RSD(2) < RSD(3));
if (RD(5) != 0) SET64(3, RD(2));
SET64(6, RSD(3) < (s64)1);
if (RD(6) != 0) SET64(3, RD(8));
{ int t = RD(7) != RD(0); wr16(c, (RW(16) + 124), (u16)RW(3)); if (t) goto L_00250FB8; }
SET64(1, (s64)(s32)0x4b0000);
SET64(2, rd64(c, (RW(1) + -20536))); goto L_00250FD0;
L_00250FB8:;
SET64(31, 0x250fc0);  F_00122158(c);
SET64(1, (s64)(s32)0x4b0000);
SET64(4, rd64(c, (RW(1) + -20528)));
SET64(31, 0x250fd0); SET64(5, RD(2) + RD(0)); F_00121EA8(c);
L_00250FD0:;
wr64(c, (RW(16) + 128), RD(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00250FE8(Ctx *c) { /* func_00250FE8 */
ENTER(0x250fe8);
SET32(5, RW(5) << 1);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); SET32(5, RW(5) + RW(4)); if (t) goto L_00250FFC; }
SET64(2, (s16)rd16(c, (RW(5) + 24)));
L_00250FFC:;
 return;
}

void F_00251008(Ctx *c) { /* func_00251008 */
ENTER(0x251008);
SET32(5, RW(5) + RW(4));
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00251018; }
SET64(2, (s8)rd8(c, (RW(5) + 88)));
L_00251018:;
 return;
}

void F_00251020(Ctx *c) { /* func_00251020 */
ENTER(0x251020);
SET32(4, RW(5) + RW(4));
wr8(c, (RW(4) + 88), (u8)RW(6)); return;
}

void F_00251030(Ctx *c) { /* func_00251030 */
ENTER(0x251030);
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
{ int t = RSD(3) <= 0; wr32(c, (RW(29) + 16), RW(7)); if (t) goto L_002510C0; }
SET64(16, RD(30) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_00251088:;
SET32(16, RW(16) + 4);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x25109c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(17, RW(2) >> 1);
SET64(3, RSD(17) < RSD(18));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0025116C; }
SET64(3, (s32)rd32(c, (RW(23) + 88)));
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(3));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00251088; } }
L_002510C0:;
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_00251168; }
SET64(21, RD(0) + RD(0));
L_002510D0:;
{ int t = RSD(18) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_00251158; }
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET32(22, RW(18) << 1);
SET32(16, RW(21) + RW(30));
SET32(19, RW(21) + RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_002510F0:;
SET64(7, RD(29) + RD(0));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x251108); SET64(6, RD(22) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(17) << 1);
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x251120); SET32(4, RW(4) + RW(3)); F_00127218(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(5, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(4) + 0)));
SET64(6, RD(29) + RD(0));
SET32(2, RW(2) << 15);
SET32(2, RSW(2) >> 16);
SET64(3, (s32)rd32(c, (RW(7) + 32)));
{ u32 t = RW(3); SET64(31, 0x251148); SET32(17, RW(17) + RW(2)); rt_call(c, t); }
SET64(2, RSD(17) < RSD(18));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_002510F0; } }
SET64(3, (s32)rd32(c, (RW(23) + 88)));
L_00251158:;
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(3));
{ int t = RD(2) != RD(0); SET32(21, RW(21) + 4); if (t) { POLL(); goto L_002510D0; } }
L_00251168:;
SET64(2, RD(17) + RD(0));
L_0025116C:;
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

void F_002511A0(Ctx *c) { /* func_002511A0 */
ENTER(0x2511a0);
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
SET64(31, 0x251214); wr32(c, (RW(29) + 4), RW(2)); F_00250E58(c);
SET64(2, (s32)rd32(c, (RW(19) + 68)));
{ int t = RSD(2) <= 0; SET64(4, RD(17) + RD(0)); if (t) goto L_00251258; }
SET32(21, RW(20) << 6);
SET32(2, RW(21) + RW(19));
SET32(16, RW(2) + 144);
SET64(6, (s16)rd16(c, (RW(16) + 0)));
L_00251230:;
SET32(16, RW(16) + 2);
SET64(5, RD(18) + RD(0));
SET32(18, RW(18) + 1);
SET64(31, 0x251244); SET64(4, RD(17) + RD(0)); F_00250E68(c);
SET64(2, (s32)rd32(c, (RW(19) + 68)));
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(6, (s16)rd16(c, (RW(16) + 0))); { POLL(); goto L_00251230; } }
SET64(4, RD(17) + RD(0));
L_00251258:;
SET64(31, 0x251260); SET64(18, RD(0) + RD(0)); F_00250F50(c);
SET32(2, RW(30) + 128);
SET32(3, RW(22) + RW(2));
SET32(2, RW(23) + RW(2));
SET64(5, (s16)rd16(c, (RW(2) + 0)));
SET64(6, (s16)rd16(c, (RW(3) + 0)));
SET64(31, 0x25127c); SET64(4, (s32)rd32(c, (RW(17) + 136))); F_00250C78(c);
SET64(2, (s32)rd32(c, (RW(19) + 68)));
{ int t = RSD(2) <= 0; SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_002513D0; }
SET32(21, RW(20) << 6);
SET32(20, RW(0) + 4681);
SET32(30, RW(29) + 2);
SET32(23, RW(0) + 32767);
SET32(22, RW(0) + -32768);
SET64(4, (s32)rd32(c, (RW(29) + 4)));
L_002512A0:;
SET32(2, RW(21) + RW(19));
SET32(3, RW(18) << 1);
SET64(5, RD(29) + RD(0));
SET32(3, RW(3) + RW(2));
SET64(6, RD(30) + RD(0));
SET64(31, 0x2512bc); SET64(16, (s16)rd16(c, (RW(3) + 144))); F_00250C88(c);
SET64(5, (s16)rd16(c, (RW(29) + 0)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2512cc); SET64(6, (s16)rd16(c, (RW(29) + 2))); F_00250E58(c);
SET64(4, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x2512dc); SET64(5, RD(18) + RD(0)); F_00250E68(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2512e8); SET64(5, RD(18) + RD(0)); F_00250FE8(c);
SET64(31, 0x2512f0); SET64(4, RD(2) + RD(0)); F_00122158(c);
SET64(5, rd64(c, (RW(17) + 128)));
SET64(31, 0x2512fc); SET64(4, RD(2) + RD(0)); F_00121C20(c);
SET64(31, 0x251304); SET64(4, RD(2) + RD(0)); F_00122210(c);
SET64(16, RD(2) + RD(0));
SET64(2, RSD(23) < RSD(16));
if (RD(2) != RD(0)) { SET32(2, RW(0) + 32767); goto L_00251328; }
SET64(3, RSD(16) < (s64)-32768);
SET64(2, RD(22) + RD(0));
if (RD(3) == 0) SET64(2, RD(16));
SET32(2, RW(2) << 16);
SET32(2, RSW(2) >> 16);
L_00251328:;
SET64(16, RD(2) + RD(0));
if (RSD(16) >= 0) { SET32(2, RW(16) + 2340); goto L_00251338; }
SET32(2, RW(16) + -2340);
L_00251338:;
if (RD(20) == RD(0)) { rt_break(c, 0x25133c); goto L_00251340; }
L_00251340:;
div_s(c, 0, RSW(2), RSW(20));
SET64(2, c->lo.d[0]);
SET64(16, RD(2) + RD(0));
SET64(2, RSD(16) < (s64)7);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 7); if (t) goto L_00251370; }
SET64(3, RD(16) + RD(0));
SET64(2, RSD(3) < (s64)-8);
if (RD(2) != RD(0)) { SET32(3, RW(0) + -8); goto L_00251370; }
SET64(16, RD(3) + RD(0)); goto L_00251374;
L_00251370:;
SET64(16, RD(3) + RD(0));
L_00251374:;
SET64(4, RD(17) + RD(0));
SET32(6, RW(16) << 24);
SET64(5, RD(18) + RD(0));
SET64(31, 0x251388); SET32(6, RSW(6) >> 24); F_00251020(c);
SET64(2, (s16)rd16(c, (RW(17) + 124)));
mul_s(c, 0, 16, RSW(16), RSW(2));
SET64(3, RSD(23) < RSD(16));
if (RD(3) != RD(0)) { SET32(5, RW(0) + 32767); goto L_002513B0; }
SET64(3, RSD(16) < (s64)-32768);
SET64(2, RD(22) + RD(0));
if (RD(3) == 0) SET64(2, RD(16));
SET32(2, RW(2) << 16);
SET32(5, RSW(2) >> 16);
L_002513B0:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2513bc); SET32(18, RW(18) + 1); F_00250CA0(c);
SET64(3, (s32)rd32(c, (RW(19) + 68)));
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0); SET64(4, (s32)rd32(c, (RW(29) + 4))); if (t) { POLL(); goto L_002512A0; } }
SET64(16, rd64(c, (RW(29) + 16)));
L_002513D0:;
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

void F_00251400(Ctx *c) { /* func_00251400 */
ENTER(0x251400);
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
if (RD(2) == RD(0)) { rt_break(c, 0x251470); goto L_00251474; }
L_00251474:;
SET64(2, (s32)rd32(c, (RW(19) + 68)));
SET32(7, RW(3) + 272);
wr32(c, (RW(29) + 12), RW(6));
SET32(3, RW(3) + 400);
wr32(c, (RW(29) + 16), RW(5));
SET64(22, (s32)rd32(c, (RW(29) + 20)));
SET64(23, (s32)rd32(c, (RW(4) + 128)));
wr32(c, (RW(29) + 0), RW(0));
wr32(c, (RW(29) + 4), RW(7));
{ int t = RSD(2) <= 0; wr32(c, (RW(29) + 8), RW(3)); if (t) goto L_00251654; }
SET32(21, RW(0) + 4681);
SET64(5, RD(20) + RD(0));
L_002514A8:;
SET64(31, 0x2514b0); SET64(4, RD(23) + RD(0)); F_00250FE8(c);
SET32(17, RW(20) << 1);
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET32(3, RW(17) + RW(4));
SET32(4, RW(2) << 16);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET64(31, 0x2514cc); SET32(4, RSW(4) >> 16); F_00122158(c);
SET64(18, rd64(c, (RW(23) + 128)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x2514dc); SET64(5, RD(18) + RD(0)); F_00121C20(c);
SET64(31, 0x2514e4); SET64(4, RD(2) + RD(0)); F_00122210(c);
SET32(5, RW(0) + 32767);
SET64(4, RD(2) + RD(0));
SET64(2, RSD(5) < RSD(4));
{ int t = RD(2) != RD(0); SET32(3, RW(0) + 32767); if (t) goto L_00251510; }
SET64(3, RD(4) + RD(0));
SET64(2, RSD(3) < (s64)-32768);
if (RD(2) != RD(0)) { SET32(3, RW(0) + -32768); goto L_00251510; }
SET64(6, (s32)rd32(c, (RW(29) + 8))); goto L_00251514;
L_00251510:;
SET64(6, (s32)rd32(c, (RW(29) + 8)));
L_00251514:;
SET64(4, RD(3) + RD(0));
SET32(3, RW(4) << 16);
SET32(2, RW(17) + RW(6));
{ int t = RSD(3) >= 0; wr16(c, (RW(2) + 0), (u16)RW(4)); if (t) goto L_00251530; }
SET32(2, RW(4) + -2340); goto L_00251534;
L_00251530:;
SET32(2, RW(4) + 2340);
L_00251534:;
if (RD(21) == RD(0)) { rt_break(c, 0x251538); goto L_0025153C; }
L_0025153C:;
div_s(c, 0, RSW(2), RSW(21));
SET64(2, c->lo.d[0]);
SET64(4, RD(2) + RD(0));
SET64(2, RSD(4) < (s64)7);
{ int t = RD(2) == RD(0); SET32(16, RW(0) + 7); if (t) goto L_00251570; }
SET64(16, RD(4) + RD(0));
SET64(2, RSD(16) < (s64)-8);
if (RD(2) != RD(0)) { SET32(16, RW(0) + -8); goto L_00251570; }
SET64(4, (s16)rd16(c, (RW(23) + 124))); goto L_00251574;
L_00251570:;
SET64(4, (s16)rd16(c, (RW(23) + 124)));
L_00251574:;
SET64(31, 0x25157c); mul_s(c, 0, 4, RSW(16), RSW(4)); F_00122158(c);
SET64(5, RD(18) + RD(0));
SET64(31, 0x251588); SET64(4, RD(2) + RD(0)); F_00121C20(c);
SET64(31, 0x251590); SET64(4, RD(2) + RD(0)); F_00122210(c);
SET32(3, RW(0) + 32767);
SET64(4, RD(2) + RD(0));
SET64(2, RSD(3) < RSD(4));
if (RD(2) != RD(0)) { SET32(4, RW(0) + 32767); goto L_002515B8; }
SET64(2, RSD(4) < (s64)-32768);
if (RD(2) != RD(0)) { SET32(4, RW(0) + -32768); goto L_002515B8; }
div_s(c, 0, RSW(20), RSW(22)); goto L_002515BC;
L_002515B8:;
div_s(c, 0, RSW(20), RSW(22));
L_002515BC:;
SET64(5, (s32)rd32(c, (RW(29) + 12)));
SET32(2, RW(17) + RW(5));
wr16(c, (RW(2) + 0), (u16)RW(4));
if (RD(22) == RD(0)) { rt_break(c, 0x2515cc); goto L_002515D0; }
L_002515D0:;
SET64(3, c->hi.d[0]);
{ int t = RD(3) != RD(0); SET64(3, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_002515F8; }
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET32(30, RW(30) + 1);
SET32(6, RW(0) + 1);
SET32(7, RW(2) + RW(30));
wr32(c, (RW(29) + 0), RW(6));
wr8(c, (RW(7) + 0), (u8)RW(0)); goto L_002515FC;
L_002515F8:;
SET32(7, RW(3) + RW(30));
L_002515FC:;
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
{ int t = RD(2) != RD(0); SET64(5, RD(20) + RD(0)); if (t) { POLL(); goto L_002514A8; } }
L_00251654:;
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

void F_00251688(Ctx *c) { /* func_00251688 */
ENTER(0x251688);
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
SET64(31, 0x2516f0); SET64(6, RD(17) + RD(0)); F_00251030(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0025181C; }
SET64(6, (s32)rd32(c, (RW(16) + 68)));
SET64(2, RSD(17) < RSD(6));
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(16) + 88))); if (t) goto L_00251760; }
{ int t = RSD(3) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_00251760; }
SET32(20, RW(17) << 1);
SET64(18, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
L_00251720:;
SET32(18, RW(18) + 4);
{ int t = RD(2) == RD(0); SET32(4, RW(20) + RW(2)); if (t) goto L_00251744; }
SET32(6, RW(6) - RW(17));
SET64(5, RD(0) + RD(0));
SET64(31, 0x25173c); SET32(6, RW(6) << 1); F_001273D0(c);
SET64(6, (s32)rd32(c, (RW(16) + 68)));
SET64(3, (s32)rd32(c, (RW(16) + 88)));
L_00251744:;
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(3));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 0))); { POLL(); goto L_00251720; } }
SET64(2, (s32)rd32(c, (RW(16) + 48))); goto L_00251764;
L_00251760:;
SET64(2, (s32)rd32(c, (RW(16) + 48)));
L_00251764:;
SET64(21, RD(0) + RD(0));
SET32(2, RW(2) + RW(6));
{ int t = RSD(3) <= 0; wr32(c, (RW(16) + 48), RW(2)); if (t) goto L_00251814; }
SET32(30, RW(29) + 18);
SET32(23, RW(16) + 12);
SET32(22, RW(16) + 8);
SET32(20, RW(16) + 664);
SET32(19, RW(16) + 656);
SET32(17, RW(16) + 128);
SET32(18, RW(0) + 128);
SET64(5, RD(21) + RD(0));
L_00251798:;
SET64(31, 0x2517a0); SET64(4, RD(16) + RD(0)); F_002511A0(c);
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
SET64(31, 0x2517d4); SET32(20, RW(20) + 8); F_00250C88(c);
SET32(4, RW(22) + RW(18));
SET64(2, rd16(c, (RW(29) + 16)));
SET32(6, RW(23) + RW(18));
SET64(3, rd16(c, (RW(29) + 18)));
SET64(5, RD(21) + RD(0));
wr16(c, (RW(4) + 0), (u16)RW(2));
SET64(4, RD(16) + RD(0));
wr16(c, (RW(6) + 0), (u16)RW(3));
SET32(21, RW(21) + 1);
SET64(31, 0x251800); SET32(18, RW(18) + 2); F_00251400(c);
SET64(2, (s32)rd32(c, (RW(16) + 88)));
SET64(2, RSD(21) < RSD(2));
{ int t = RD(2) != RD(0); SET64(5, RD(21) + RD(0)); if (t) { POLL(); goto L_00251798; } }
SET64(6, (s32)rd32(c, (RW(16) + 68)));
L_00251814:;
SET64(2, RD(6) + RD(0));
SET64(16, rd64(c, (RW(29) + 32)));
L_0025181C:;
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

void F_00251848(Ctx *c) { /* func_00251848 */
ENTER(0x251848);
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
{ int t = RSD(2) <= 0; SET64(20, (s32)rd32(c, (RW(18) + 12))); if (t) goto L_0025194C; }
SET32(17, RW(18) + 680);
SET32(19, RW(18) + 656);
SET64(4, rd16(c, (RW(18) + 720)));
L_00251890:;
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
{ int t = RD(6) != RD(0); wr16(c, (RW(18) + 720), (u16)RW(2)); if (t) goto L_002518E8; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(2) != RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_002518EC; }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 1); if (t) goto L_002518F0; }
SET64(2, (s32)rd32(c, (RW(17) + 12)));
if (RD(2) == 0) SET64(16, RD(0));
L_002518E8:;
SET64(4, RD(29) + RD(0));
L_002518EC:;
SET32(5, RW(0) + 1);
L_002518F0:;
SET32(6, RW(0) + 1);
SET64(7, RD(20) + RD(0));
SET32(2, RSW(16) >> 8);
SET32(21, RW(21) + 1);
SET64(31, 0x251908); wr8(c, (RW(29) + 0), (u8)RW(2)); F_002509E8(c);
SET64(4, RD(29) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(7, RD(20) + RD(0));
SET64(31, 0x251920); wr8(c, (RW(29) + 0), (u8)RW(16)); F_002509E8(c);
SET64(4, RD(17) + RD(0));
SET32(17, RW(17) + 16);
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 16);
SET64(7, RD(20) + RD(0));
SET64(31, 0x25193c); SET32(22, RW(22) + 18); F_002509E8(c);
SET64(3, (s32)rd32(c, (RW(18) + 88)));
SET64(3, RSD(21) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(18) + 720))); { POLL(); goto L_00251890; } }
L_0025194C:;
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

void F_00251978(Ctx *c) { /* func_00251978 */
ENTER(0x251978);
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
L_002519A0:;
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x2519b4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
div_s(c, 0, RSW(2), RSW(18));
if (RD(18) == RD(0)) { rt_break(c, 0x2519c0); goto L_002519C4; }
L_002519C4:;
SET64(3, (s32)rd32(c, (RW(16) + 88)));
SET64(2, c->lo.d[0]);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
{ int t = RSD(2) <= 0; SET64(2, RD(19) + RD(0)); if (t) goto L_00251A0C; }
SET64(31, 0x2519e4);  F_00251688(c);
{ int t = RD(2) == RD(0); SET64(2, RD(19) + RD(0)); if (t) goto L_00251A0C; }
SET64(31, 0x2519f4); SET64(4, RD(16) + RD(0)); F_00251848(c);
SET64(3, (s32)rd32(c, (RW(16) + 48)));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(3, RSD(3) < RSD(4));
{ int t = RD(3) != RD(0); SET32(19, RW(19) + RW(2)); if (t) { POLL(); goto L_002519A0; } }
SET64(2, RD(19) + RD(0));
L_00251A0C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00251A28(Ctx *c) { /* func_00251A28 */
ENTER(0x251a28);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 108)));
SET64(18, (s32)rd32(c, (RW(4) + 12)));
{ int t = RSD(2) > 0; SET64(5, (s32)rd32(c, (RW(4) + 44))); if (t) goto L_00251A58; }
SET64(17, (s32)rd32(c, (RW(4) + 80))); goto L_00251A7C;
L_00251A58:;
SET64(2, (s32)rd32(c, (RW(4) + 80)));
SET32(2, RW(5) + RW(2));
SET32(3, RW(2) + 2047);
SET32(2, RW(2) + 4094);
SET64(4, RSD(3) < (s64)0);
if (RD(4) != 0) SET64(3, RD(2));
SET32(3, RSW(3) >> 11);
SET32(3, RW(3) << 11);
SET32(17, RW(3) - RW(5));
L_00251A7C:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x251a94); SET32(16, RW(17) + -4); rt_call(c, t); }
SET64(3, RSD(2) < RSD(17));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00251B08; }
SET64(4, RD(29) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(18) + RD(0));
SET64(2, RD(0) | 0x8001);
SET64(31, 0x251abc); wr16(c, (RW(29) + 0), (u16)RW(2)); F_002509E8(c);
SET64(4, RD(29) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(18) + RD(0));
SET64(31, 0x251ad4); wr16(c, (RW(29) + 0), (u16)RW(16)); F_002509E8(c);
{ int t = RSD(16) <= 0; wr8(c, (RW(29) + 2), (u8)RW(0)); if (t) goto L_00251B04; }
SET32(19, RW(29) + 2);
SET32(16, RW(17) + -4);
SET32(16, RW(16) + -1);
L_00251AE8:;
SET64(4, RD(19) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(31, 0x251afc); SET64(7, RD(18) + RD(0)); F_002509E8(c);
{ int t = RD(16) != RD(0); SET32(16, RW(16) + -1); if (t) { POLL(); goto L_00251AE8; } }
L_00251B04:;
SET64(2, RD(17) + RD(0));
L_00251B08:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_00251B28(Ctx *c) { /* func_00251B28 */
ENTER(0x251b28);
SET32(29, RW(29) + -112);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 64), RD(20));
SET64(20, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 28780)));
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 96), RD(30));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 72), RD(21));
wr64(c, (RW(29) + 80), RD(22));
wr64(c, (RW(29) + 88), RD(23));
wr64(c, (RW(29) + 104), RD(31));
SET64(31, 0x251b68); SET64(19, RD(5) + RD(0)); F_0012A4D8(c);
SET64(30, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(6, (s64)(s32)0x7fff0000);
SET64(7, RD(29) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) + RD(0));
{ u32 t = RW(3); SET64(31, 0x251b8c); SET64(6, RD(6) | 0xffff); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(2) + 28)));
SET64(6, RD(29) + RD(0));
{ u32 t = RW(7); SET64(31, 0x251ba8); SET64(16, (s32)rd32(c, (RW(29) + 4))); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 72)));
SET32(3, RW(3) + 4);
SET64(16, RSD(16) < RSD(3));
{ int t = RD(16) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, RD(0) | 0x8000);
SET32(4, RW(29) + 16);
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251bd8); wr16(c, (RW(29) + 16), (u16)RW(2)); F_002509E8(c);
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + 1);
{ int t = RD(17) != RD(2); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, (s16)rd16(c, (RW(20) + 72)));
SET32(4, RW(29) + 18);
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251c04); wr16(c, (RW(29) + 18), (u16)RW(2)); F_002509E8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, (s8)rd8(c, (RW(20) + 76)));
SET32(23, RW(29) + 20);
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251c30); wr8(c, (RW(29) + 20), (u8)RW(2)); F_002509E8(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, rd8(c, (RW(20) + 80)));
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251c54); wr8(c, (RW(29) + 20), (u8)RW(2)); F_002509E8(c);
SET32(18, RW(0) + 1);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(18); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, rd8(c, (RW(20) + 84)));
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251c80); wr8(c, (RW(29) + 20), (u8)RW(2)); F_002509E8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, rd8(c, (RW(20) + 88)));
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251ca8); wr8(c, (RW(29) + 20), (u8)RW(2)); F_002509E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, (s32)rd32(c, (RW(20) + 92)));
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251cd0); wr32(c, (RW(29) + 24), RW(2)); F_002509E8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, (s32)rd32(c, (RW(20) + 96)));
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251cf8); wr32(c, (RW(29) + 24), RW(2)); F_002509E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, (s16)rd16(c, (RW(20) + 100)));
SET32(22, RW(29) + 22);
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251d24); wr16(c, (RW(29) + 22), (u16)RW(2)); F_002509E8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET32(2, RW(0) + 4);
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251d4c); wr8(c, (RW(29) + 20), (u8)RW(2)); F_002509E8(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, (s16)rd16(c, (RW(20) + 720)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 8); if (t) goto L_00251D68; }
wr8(c, (RW(29) + 20), (u8)RW(0)); goto L_00251D6C;
L_00251D68:;
wr8(c, (RW(29) + 20), (u8)RW(2));
L_00251D6C:;
SET64(4, RD(23) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(31, 0x251d80); SET64(7, RD(19) + RD(0)); F_002509E8(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 1);
{ int t = RD(16) != RD(2); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251da8); wr32(c, (RW(29) + 24), RW(0)); F_002509E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, rd16(c, (RW(20) + 712)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251dd0); wr16(c, (RW(29) + 22), (u16)RW(2)); F_002509E8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, rd16(c, (RW(20) + 716)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251df8); wr16(c, (RW(29) + 22), (u16)RW(2)); F_002509E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, rd16(c, (RW(20) + 714)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251e20); wr16(c, (RW(29) + 22), (u16)RW(2)); F_002509E8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, rd16(c, (RW(20) + 718)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251e48); wr16(c, (RW(29) + 22), (u16)RW(2)); F_002509E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(3, (s32)rd32(c, (RW(20) + 108)));
{ int t = RSD(3) <= 0; SET32(18, RW(0) + 28); if (t) goto L_00251FB8; }
SET64(2, rd16(c, (RW(20) + 104)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251e7c); wr16(c, (RW(29) + 22), (u16)RW(2)); F_002509E8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, rd16(c, (RW(20) + 108)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251ea4); wr16(c, (RW(29) + 22), (u16)RW(2)); F_002509E8(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(3, (s32)rd32(c, (RW(20) + 108)));
SET32(18, RW(0) + 32);
{ int t = RSD(3) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00251FB8; }
SET64(4, RD(22) + RD(0));
L_00251EC0:;
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
wr16(c, (RW(29) + 22), (u16)RW(21));
SET64(31, 0x251ed8); SET32(21, RW(21) + 1); F_002509E8(c);
SET64(4, RD(22) + RD(0));
SET64(16, RD(2) + RD(0));
SET32(6, RW(0) + 1);
SET32(5, RW(0) + 2);
{ int t = RD(16) != RD(6); SET64(7, RD(19) + RD(0)); if (t) goto L_00252248; }
SET32(18, RW(18) + 2);
wr16(c, (RW(29) + 22), (u16)RW(16));
SET64(31, 0x251f00); SET32(18, RW(18) + 2); F_002509E8(c);
SET32(18, RW(18) + 4);
SET64(17, RD(2) + RD(0));
SET32(18, RW(18) + 4);
SET32(5, RW(0) + 4);
SET32(18, RW(18) + 4);
SET32(4, RW(29) + 24);
SET32(18, RW(18) + 4);
SET32(6, RW(0) + 1);
{ int t = RD(17) != RD(16); SET64(7, RD(19) + RD(0)); if (t) goto L_00252248; }
SET64(2, (s32)rd32(c, (RW(20) + 112)));
SET64(31, 0x251f34); wr32(c, (RW(29) + 24), RW(2)); F_002509E8(c);
SET64(16, RD(2) + RD(0));
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
{ int t = RD(16) != RD(17); SET64(7, RD(19) + RD(0)); if (t) goto L_00252248; }
SET64(2, (s32)rd32(c, (RW(20) + 116)));
SET64(31, 0x251f58); wr32(c, (RW(29) + 24), RW(2)); F_002509E8(c);
SET64(17, RD(2) + RD(0));
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
{ int t = RD(17) != RD(16); SET64(7, RD(19) + RD(0)); if (t) goto L_00252248; }
SET64(2, (s32)rd32(c, (RW(20) + 120)));
SET64(31, 0x251f7c); wr32(c, (RW(29) + 24), RW(2)); F_002509E8(c);
SET64(16, RD(2) + RD(0));
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
{ int t = RD(16) != RD(17); SET64(7, RD(19) + RD(0)); if (t) goto L_00252248; }
SET64(2, (s32)rd32(c, (RW(20) + 124)));
SET64(31, 0x251fa0); wr32(c, (RW(29) + 24), RW(2)); F_002509E8(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(3, (s32)rd32(c, (RW(20) + 108)));
SET64(2, RSD(21) < RSD(3));
{ int t = RD(2) != RD(0); SET64(4, RD(22) + RD(0)); if (t) { POLL(); goto L_00251EC0; } }
L_00251FB8:;
SET64(16, (s8)rd8(c, (RW(20) + 726)));
SET32(2, RW(0) + 1);
if (RD(16) != RD(2)) { SET64(16, (s8)rd8(c, (RW(20) + 750))); goto L_00252110; }
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x41490000); if (t) goto L_00251FF8; }
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x251fe8); wr32(c, (RW(29) + 24), RW(0)); F_002509E8(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET32(18, RW(18) + 4);
SET64(2, (s64)(s32)0x41490000);
L_00251FF8:;
SET32(4, RW(29) + 24);
SET64(2, RD(2) | 0x4e46);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x252014); wr32(c, (RW(29) + 24), RW(2)); F_002509E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET32(2, RW(0) + 24);
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x25203c); wr32(c, (RW(29) + 24), RW(2)); F_002509E8(c);
SET64(21, RD(2) + RD(0));
{ int t = RD(21) != RD(17); SET32(18, RW(18) + 4); if (t) goto L_00252248; }
SET32(4, RW(20) + 727);
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 16);
SET64(31, 0x25205c); SET64(7, RD(19) + RD(0)); F_002509E8(c);
SET32(3, RW(0) + 16);
{ int t = RD(2) != RD(3); SET32(18, RW(18) + 4); if (t) goto L_00252248; }
SET64(2, rd16(c, (RW(20) + 744)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x252084); wr16(c, (RW(29) + 22), (u16)RW(2)); F_002509E8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(21); SET32(18, RW(18) + 16); if (t) goto L_00252248; }
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x2520a8); wr16(c, (RW(29) + 22), (u16)RW(0)); F_002509E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET32(18, RW(18) + 2); if (t) goto L_00252248; }
SET64(2, rd16(c, (RW(20) + 746)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x2520d0); wr16(c, (RW(29) + 22), (u16)RW(2)); F_002509E8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(17); SET32(18, RW(18) + 2); if (t) goto L_00252248; }
SET64(2, rd16(c, (RW(20) + 748)));
SET64(4, RD(22) + RD(0));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
wr16(c, (RW(29) + 22), (u16)RW(2));
SET64(31, 0x2520fc); SET32(18, RW(18) + 2); F_002509E8(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET32(18, RW(18) + 2);
SET64(16, (s8)rd8(c, (RW(20) + 750)));
SET32(2, RW(0) + 1);
L_00252110:;
if (RD(16) != RD(2)) { SET64(3, (s32)rd32(c, (RW(20) + 72))); goto L_002521D4; }
SET64(2, (s32)rd32(c, (RW(20) + 108)));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x43490000); if (t) goto L_0025214C; }
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x25213c); wr32(c, (RW(29) + 24), RW(0)); F_002509E8(c);
{ int t = RD(2) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET32(18, RW(18) + 4);
SET64(2, (s64)(s32)0x43490000);
L_0025214C:;
SET32(4, RW(29) + 24);
SET64(2, RD(2) | 0x4e46);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
SET64(31, 0x252168); wr32(c, (RW(29) + 24), RW(2)); F_002509E8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET64(2, (s32)rd32(c, (RW(20) + 756)));
SET32(4, RW(29) + 24);
SET32(5, RW(0) + 4);
SET32(6, RW(0) + 1);
SET64(7, RD(19) + RD(0));
wr32(c, (RW(29) + 24), RW(2));
SET64(31, 0x252194); SET32(18, RW(18) + 4); F_002509E8(c);
if (RD(2) != RD(17)) { SET64(2, RD(0) + RD(0)); goto L_0025224C; }
SET64(6, (s32)rd32(c, (RW(20) + 756)));
{ int t = RD(6) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_002521D0; }
SET64(4, (s32)rd32(c, (RW(20) + 752)));
{ int t = RD(4) == RD(0); SET32(5, RW(0) + 1); if (t) goto L_002521D0; }
SET64(31, 0x2521bc); SET64(7, RD(19) + RD(0)); F_002509E8(c);
SET64(3, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(20) + 756)));
{ int t = RD(3) != RD(2); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET32(18, RW(18) + RW(3));
L_002521D0:;
SET64(3, (s32)rd32(c, (RW(20) + 72)));
L_002521D4:;
SET32(16, RW(3) - RW(30));
SET64(2, RSD(18) < RSD(16));
{ int t = RD(2) == RD(0); wr8(c, (RW(29) + 20), (u8)RW(0)); if (t) goto L_00252218; }
SET32(17, RW(0) + 1);
SET64(4, RD(23) + RD(0));
L_002521F0:;
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 1);
SET64(31, 0x252200); SET64(7, RD(19) + RD(0)); F_002509E8(c);
{ int t = RD(2) != RD(17); SET64(2, RD(0) + RD(0)); if (t) goto L_0025224C; }
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < RSD(16));
{ int t = RD(2) != RD(0); SET64(4, RD(23) + RD(0)); if (t) { POLL(); goto L_002521F0; } }
L_00252218:;
SET64(2, (s64)(s32)0x3f0000);
SET64(7, RD(19) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 28780)));
SET32(5, RW(0) + 1);
SET64(31, 0x252230); SET64(6, RD(30) + RD(0)); F_002509E8(c);
if (RD(2) != RD(30)) { SET64(2, RD(0) + RD(0)); goto L_0025224C; }
SET32(18, RW(18) + RW(30));
SET32(2, RW(18) + 4); goto L_0025224C;
L_00252248:;
SET64(2, RD(0) + RD(0));
L_0025224C:;
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

void F_00252280(Ctx *c) { /* func_00252280 */
ENTER(0x252280);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x252290);  F_00250558(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + 28784);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 6080);
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
}

void F_002522B0(Ctx *c) { /* func_002522B0 */
ENTER(0x2522b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2522c0);  F_00250578(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + 28784);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 6080);
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
}

void F_002522E0(Ctx *c) { /* func_002522E0 */
ENTER(0x2522e0);
SET32(29, RW(29) + -32);
SET64(7, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(7) + 28784);
wr64(c, (RW(29) + 8), RD(17));
SET64(8, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(9, RD(6) + RD(0));
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0025233C; }
SET32(5, RW(5) + 1);
L_00252318:;
SET64(2, RSD(5) < (s64)8);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 760); if (t) goto L_0025233C; }
SET64(2, (s8)rd8(c, (RW(3) + 0)));
if (RD(2) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00252318; } }
L_0025233C:;
SET32(3, RW(0) + 8);
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00252498; }
SET32(2, RW(5) << 1);
SET32(3, RW(7) + 28784);
SET32(2, RW(2) + RW(5));
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) << 5);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 3);
SET32(17, RW(2) + RW(3));
{ int t = RSD(18) <= 0; wr8(c, (RW(17) + 2), (u8)RW(18)); if (t) goto L_00252398; }
SET32(7, RW(17) + 4);
L_00252378:;
SET32(2, RW(6) << 2);
SET32(6, RW(6) + 1);
SET32(3, RW(2) + RW(8));
SET32(2, RW(7) + RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(6) < RSD(18));
{ int t = RD(5) != RD(0); wr32(c, (RW(2) + 0), RW(4)); if (t) { POLL(); goto L_00252378; } }
L_00252398:;
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
SET64(31, 0x2523c8); wr32(c, (RW(17) + 52), RW(16)); F_00248448(c);
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
if (RD(9) == RD(0)) { rt_break(c, 0x25240c); goto L_00252410; }
L_00252410:;
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
SET64(31, 0x252448); wr32(c, (RW(17) + 64), RW(16)); F_00250D18(c);
SET64(4, (s32)rd32(c, (RW(17) + 68)));
SET64(31, 0x252454); wr32(c, (RW(17) + 128), RW(2)); F_00250D18(c);
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
SET64(31, 0x25248c); wr16(c, (RW(17) + 744), (u16)RW(0)); F_001273D0(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(17) + 0), (u8)RW(3));
SET64(2, RD(17) + RD(0));
L_00252498:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002524B0(Ctx *c) { /* func_002524B0 */
ENTER(0x2524b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00252508; }
SET64(31, 0x2524cc);  F_00247970(c);
SET64(2, (s32)rd32(c, (RW(16) + 128)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002524E0; }
SET64(31, 0x2524e0);  F_00250DB8(c);
L_002524E0:;
SET64(4, (s32)rd32(c, (RW(16) + 132)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_002524F8; }
SET64(31, 0x2524f4);  F_00250DB8(c);
wr32(c, (RW(16) + 0), RW(0));
L_002524F8:;
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00247988(c); return; }
L_00252508:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00252518(Ctx *c) { /* func_00252518 */
ENTER(0x252518);
SET64(2, (s8)rd8(c, (RW(4) + 1))); return;
}

void F_00252520(Ctx *c) { /* func_00252520 */
ENTER(0x252520);
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
{ int t = RSD(3) <= 0; SET64(21, RD(0) + RD(0)); if (t) goto L_00252608; }
SET64(20, RD(0) + RD(0));
L_00252558:;
SET64(2, (s32)rd32(c, (RW(17) + 104)));
SET32(16, RW(2) << 1);
{ int t = RSD(16) <= 0; SET64(6, RD(16) + RD(0)); if (t) goto L_002525F8; }
SET32(19, RW(17) + 4);
SET64(5, RD(0) + RD(0));
SET32(18, RW(19) + RW(20));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x252588); SET64(7, RD(29) + RD(0)); rt_call(c, t); }
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(2) == RD(16); SET64(6, RD(2) + RD(0)); if (t) goto L_002525D0; }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x2525ac); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
L_002525B0:;
 { POLL(); goto L_002525B0; }
L_002525D0:;
SET64(31, 0x2525d8); SET64(4, (s32)rd32(c, (RW(29) + 0))); F_001273D0(c);
SET32(3, RW(19) + RW(20));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x2525f4); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 88)));
L_002525F8:;
SET32(21, RW(21) + 1);
SET64(2, RSD(21) < RSD(3));
{ int t = RD(2) != RD(0); SET32(20, RW(20) + 4); if (t) { POLL(); goto L_00252558; } }
L_00252608:;
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

void F_00252648(Ctx *c) { /* func_00252648 */
ENTER(0x252648);
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 3), (u8)RW(2)); return;
}

void F_00252658(Ctx *c) { /* func_00252658 */
ENTER(0x252658);
wr32(c, (RW(4) + 92), RW(5)); return;
}

void F_00252660(Ctx *c) { /* func_00252660 */
ENTER(0x252660);
wr32(c, (RW(4) + 72), RW(5)); return;
}

void F_00252668(Ctx *c) { /* func_00252668 */
ENTER(0x252668);
wr32(c, (RW(4) + 88), RW(5)); return;
}

void F_00252670(Ctx *c) { /* func_00252670 */
ENTER(0x252670);
wr32(c, (RW(4) + 84), RW(5)); return;
}

void F_00252678(Ctx *c) { /* func_00252678 */
ENTER(0x252678);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
wr32(c, (RW(16) + 68), RW(5));
SET64(2, (s32)rd32(c, (RW(16) + 128)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002526A0; }
SET64(31, 0x2526a0);  F_00250DB8(c);
L_002526A0:;
SET64(31, 0x2526a8); SET64(4, (s32)rd32(c, (RW(16) + 68))); F_00250D18(c);
SET64(3, (s32)rd32(c, (RW(16) + 132)));
wr32(c, (RW(16) + 128), RW(2));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_002526C0; }
SET64(31, 0x2526c0);  F_00250DB8(c);
L_002526C0:;
SET64(31, 0x2526c8); SET64(4, (s32)rd32(c, (RW(16) + 68))); F_00250D18(c);
wr32(c, (RW(16) + 132), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002526E0(Ctx *c) { /* func_002526E0 */
ENTER(0x2526e0);
wr32(c, (RW(4) + 80), RW(5)); return;
}

void F_002526E8(Ctx *c) { /* func_002526E8 */
ENTER(0x2526e8);
wr32(c, (RW(4) + 96), RW(5));
wr32(c, (RW(4) + 60), RW(5)); return;
}

void F_002526F8(Ctx *c) { /* func_002526F8 */
ENTER(0x2526f8);
wr32(c, (RW(4) + 100), RW(5)); return;
}

void F_00252700(Ctx *c) { /* func_00252700 */
ENTER(0x252700);
wr32(c, (RW(4) + 108), RW(5)); return;
}

void F_00252708(Ctx *c) { /* func_00252708 */
ENTER(0x252708);
wr32(c, (RW(4) + 104), RW(5)); return;
}

void F_00252710(Ctx *c) { /* func_00252710 */
ENTER(0x252710);
wr32(c, (RW(4) + 112), RW(5)); return;
}

void F_00252718(Ctx *c) { /* func_00252718 */
ENTER(0x252718);
wr32(c, (RW(4) + 116), RW(5)); return;
}

void F_00252720(Ctx *c) { /* func_00252720 */
ENTER(0x252720);
wr32(c, (RW(4) + 120), RW(5)); return;
}

void F_00252728(Ctx *c) { /* func_00252728 */
ENTER(0x252728);
wr32(c, (RW(4) + 124), RW(5)); return;
}

void F_00252730(Ctx *c) { /* func_00252730 */
ENTER(0x252730);
SET64(2, (s8)rd8(c, (RW(4) + 726)));
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_00252750; }
SET64(2, (s32)rd32(c, (RW(4) + 72)));
wr8(c, (RW(4) + 726), (u8)RW(3));
SET32(2, RW(2) + 36);
wr32(c, (RW(4) + 72), RW(2));
L_00252750:;
wr16(c, (RW(4) + 744), (u16)RW(5)); return;
}

void F_00252758(Ctx *c) { /* func_00252758 */
ENTER(0x252758);
SET64(2, (s8)rd8(c, (RW(4) + 726)));
SET32(5, RW(5) << 1);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET32(5, RW(5) + RW(4)); if (t) goto L_0025277C; }
SET64(2, (s32)rd32(c, (RW(4) + 72)));
wr8(c, (RW(4) + 726), (u8)RW(3));
SET32(2, RW(2) + 36);
wr32(c, (RW(4) + 72), RW(2));
L_0025277C:;
wr16(c, (RW(5) + 746), (u16)RW(6)); return;
}

void F_00252788(Ctx *c) { /* func_00252788 */
ENTER(0x252788);
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
{ int t = RD(2) == RD(6); SET64(5, RD(0) + RD(0)); if (t) goto L_002527C8; }
SET64(2, (s32)rd32(c, (RW(3) + 72)));
wr8(c, (RW(3) + 726), (u8)RW(6));
SET32(2, RW(2) + 36);
wr32(c, (RW(3) + 72), RW(2));
L_002527C8:;
SET64(31, 0x2527d0); SET32(6, RW(0) + 16); F_001273D0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 16);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0012A978(c); return; }
}

void F_002527F0(Ctx *c) { /* func_002527F0 */
ENTER(0x2527f0);
SET32(29, RW(29) + -16);
SET64(7, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(0) + 1);
SET64(2, (s8)rd8(c, (RW(7) + 726)));
{ int t = RD(2) != RD(3); SET32(4, RW(7) + 727); if (t) goto L_0025281C; }
SET64(2, (s32)rd32(c, (RW(7) + 72)));
wr8(c, (RW(7) + 726), (u8)RW(0));
SET32(2, RW(2) + 36);
wr32(c, (RW(7) + 72), RW(2));
L_0025281C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + -128);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 16);
wr16(c, (RW(7) + 744), (u16)RW(0));
wr16(c, (RW(7) + 748), (u16)RW(2));
wr16(c, (RW(7) + 746), (u16)RW(2));
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
}

void F_00252840(Ctx *c) { /* func_00252840 */
ENTER(0x252840);
SET64(8, RD(4) + RD(0));
SET32(7, RW(6) + 2047);
SET64(4, (s8)rd8(c, (RW(8) + 750)));
SET32(3, RW(6) + 4094);
SET64(2, RSD(7) < (s64)0);
SET32(9, RW(0) + 1);
{ int t = RD(4) == RD(9); if (RD(2) != 0) SET64(7, RD(3)); if (t) goto L_00252884; }
SET64(3, (s32)rd32(c, (RW(8) + 72)));
SET32(2, RSW(7) >> 11);
SET32(2, RW(2) << 11);
wr8(c, (RW(8) + 750), (u8)RW(9));
SET32(3, RW(3) + RW(2));
wr32(c, (RW(8) + 752), RW(5));
SET32(3, RW(3) + 4);
wr32(c, (RW(8) + 756), RW(6));
wr32(c, (RW(8) + 72), RW(3));
L_00252884:;
 return;
}

void F_00252890(Ctx *c) { /* func_00252890 */
ENTER(0x252890);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2528b4); SET64(18, RD(7) + RD(0)); F_00252668(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2528c0); SET64(5, RD(16) + RD(0)); F_00252658(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2528cc); SET64(5, RD(18) + RD(0)); F_002526E8(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 284);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00252660(c); return; }
}

void F_002528F0(Ctx *c) { /* func_002528F0 */
ENTER(0x2528f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x252910); SET64(4, RD(16) + RD(0)); F_0012A4D8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(6, RD(29) + RD(0));
SET32(7, RW(29) + 2);
SET64(31, 0x252928); SET32(8, RW(29) + 4); F_00250598(c);
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

void F_00252958(Ctx *c) { /* func_00252958 */
ENTER(0x252958);
SET64(2, (s32)rd32(c, (RW(4) + 44))); return;
}

void F_00252960(Ctx *c) { /* func_00252960 */
ENTER(0x252960);
SET64(2, (s32)rd32(c, (RW(4) + 48))); return;
}

void F_00252968(Ctx *c) { /* func_00252968 */
ENTER(0x252968);
wr32(c, (RW(4) + 48), RW(5)); return;
}

void F_00252970(Ctx *c) { /* func_00252970 */
ENTER(0x252970);
SET64(2, (s32)rd32(c, (RW(4) + 48))); return;
}

void F_00252978(Ctx *c) { /* func_00252978 */
ENTER(0x252978);
SET32(2, RW(5) << 2);
SET64(5, RD(5) < (u64)(s64)2);
{ int t = RD(5) == RD(0); SET32(4, RW(4) + RW(2)); if (t) goto L_0025298C; }
wr32(c, (RW(4) + 4), RW(6));
L_0025298C:;
 return;
}

void F_00252998(Ctx *c) { /* func_00252998 */
ENTER(0x252998);
wr32(c, (RW(4) + 12), RW(5)); return;
}

void F_002529A0(Ctx *c) { /* func_002529A0 */
ENTER(0x2529a0);
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
SET64(20, (s32)rd32(c, (RW(17) + 12))); goto L_00252A08;
L_002529D8:;
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
{ u32 t = RW(2); SET64(31, 0x252a08); SET32(18, RW(18) + 2); rt_call(c, t); }
L_00252A08:;
SET64(3, (s32)rd32(c, (RW(17) + 88)));
SET64(2, RSD(19) < RSD(3));
{ int t = RD(2) == RD(0); SET64(7, RD(29) + RD(0)); if (t) goto L_00252A54; }
SET64(8, (s32)rd32(c, (RW(16) + 0)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(8) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
{ u32 t = RW(3); SET64(31, 0x252a34); SET64(4, RD(8) + RD(0)); rt_call(c, t); }
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(2) != RD(0); SET64(6, RD(29) + RD(0)); if (t) { POLL(); goto L_002529D8; } }
SET64(3, (s32)rd32(c, (RW(17) + 88)));
SET64(2, RSD(19) < RSD(3));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00252AF0; }
L_00252A54:;
if (RSD(3) <= 0) { SET64(4, RD(17) + RD(0)); goto L_00252A8C; }
SET64(19, RD(3) + RD(0));
SET32(3, RW(17) + 136);
SET32(4, RW(17) + 140);
L_00252A68:;
SET64(2, rd16(c, (RW(3) + 576)));
SET32(19, RW(19) + -1);
wr16(c, (RW(3) + 0), (u16)RW(2));
SET32(3, RW(3) + 2);
SET64(2, rd16(c, (RW(4) + 576)));
wr16(c, (RW(4) + 0), (u16)RW(2));
{ int t = RD(19) != RD(0); SET32(4, RW(4) + 2); if (t) { POLL(); goto L_00252A68; } }
SET64(4, RD(17) + RD(0));
L_00252A8C:;
SET64(31, 0x252a94); SET64(5, RD(20) + RD(0)); F_00251B28(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET64(19, RD(0) + RD(0)); if (t) goto L_00252AEC; }
SET64(2, (s32)rd32(c, (RW(17) + 44)));
SET64(3, (s32)rd32(c, (RW(17) + 88)));
SET32(2, RW(2) + RW(4));
{ int t = RSD(3) <= 0; wr32(c, (RW(17) + 44), RW(2)); if (t) goto L_00252AE4; }
SET32(16, RW(17) + 128);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_00252AC0:;
SET32(16, RW(16) + 4);
SET64(5, (s32)rd32(c, (RW(17) + 100)));
SET32(19, RW(19) + 1);
SET64(31, 0x252ad4); SET64(6, (s32)rd32(c, (RW(17) + 92))); F_00250E00(c);
SET64(2, (s32)rd32(c, (RW(17) + 88)));
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00252AC0; } }
L_00252AE4:;
SET32(2, RW(0) + 2);
wr8(c, (RW(17) + 1), (u8)RW(2));
L_00252AEC:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00252AF0:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_00252B10(Ctx *c) { /* func_00252B10 */
ENTER(0x252b10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
L_00252B24:;
SET64(2, (s8)rd8(c, (RW(16) + 3)));
{ int t = RD(2) != RD(0); SET32(17, RW(0) + 1); if (t) goto L_00252B78; }
 goto L_00252B58;
L_00252B38:;
SET64(3, (s32)rd32(c, (RW(16) + 48)));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET32(2, RW(2) + RW(5));
SET64(3, RSD(3) < RSD(4));
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 44), RW(2)); if (t) goto L_00252B58; }
wr8(c, (RW(16) + 3), (u8)RW(17)); { POLL(); goto L_00252B24; }
L_00252B58:;
SET64(31, 0x252b60); SET64(4, RD(16) + RD(0)); F_00251978(c);
SET64(5, RD(2) + RD(0));
if (RD(5) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 44))); { POLL(); goto L_00252B38; } }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00252B94;
L_00252B78:;
SET64(31, 0x252b80); SET64(4, RD(16) + RD(0)); F_00251A28(c);
if (RSD(2) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00252B94; }
SET32(2, RW(0) + 3);
wr8(c, (RW(16) + 1), (u8)RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00252B94:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00252BA8(Ctx *c) { /* func_00252BA8 */
ENTER(0x252ba8);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s8)rd8(c, (RW(4) + 1)));
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 2); if (t) goto L_00252BD0; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002529A0(c); return; }
L_00252BD0:;
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00252BE0; }
SET32(29, RW(29) + 16); { F_00252B10(c); return; }
L_00252BE0:;
SET32(29, RW(29) + 16); return;
}

void F_00252BE8(Ctx *c) { /* func_00252BE8 */
ENTER(0x252be8);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 28784);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 7);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
L_00252C10:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00252C28; }
SET64(31, 0x252c24); SET64(4, RD(16) + RD(0)); F_00252BA8(c);
SET32(17, RW(17) + -1);
L_00252C28:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 760); if (t) { POLL(); goto L_00252C10; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00252C48(Ctx *c) { /* func_00252C48 */
ENTER(0x252c48);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269118(c); return; }
}

void F_00252C60(Ctx *c) { /* func_00252C60 */
ENTER(0x252c60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269130(c); return; }
}

void F_00252C78(Ctx *c) { /* func_00252C78 */
ENTER(0x252c78);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269CD0(c); return; }
}

void F_00252C90(Ctx *c) { /* func_00252C90 */
ENTER(0x252c90);
 return;
}

void F_00252C98(Ctx *c) { /* func_00252C98 */
ENTER(0x252c98);
 return;
}

void F_00252CA0(Ctx *c) { /* func_00252CA0 */
ENTER(0x252ca0);
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + -28168), RW(4)); return;
}

void F_00252CB0(Ctx *c) { /* func_00252CB0 */
ENTER(0x252cb0);
SET32(2, RW(0) + 40);
SET64(3, (s64)(s32)0x400000);
SET32(2, RW(2) - RW(4));
SET64(5, (s64)(s32)0x400000);
wr32(c, (RW(3) + -28164), RW(2));
wr32(c, (RW(5) + -28160), RW(4)); return;
}

void F_00252CD0(Ctx *c) { /* func_00252CD0 */
ENTER(0x252cd0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + -28176);
SET32(4, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) + 1);
{ int t = RD(3) != RD(4); wr32(c, (RW(2) + 0), RW(3)); if (t) goto L_00252D08; }
SET64(4, (s64)(s32)0x400000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -28144);
SET64(31, 0x252d08); SET32(6, RW(0) + 3840); F_001273D0(c);
L_00252D08:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void F_00252D18(Ctx *c) { /* func_00252D18 */
ENTER(0x252d18);
 return;
}

void F_00252D20(Ctx *c) { /* func_00252D20 */
ENTER(0x252d20);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + -28176);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_00252D60; }
SET64(4, (s64)(s32)0x400000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -28144);
SET32(6, RW(0) + 3840);
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
L_00252D60:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00252D70(Ctx *c) { /* func_00252D70 */
ENTER(0x252d70);
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
SET64(31, 0x252dac); SET32(21, RW(0) + 1); F_00247970(c);
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
{ int t = RD(20) == RD(0); wr32(c, (RW(19) + 88), RW(0)); if (t) goto L_00252E4C; }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x252e24);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(16, RD(2) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x252e3c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(16, RW(16) + RW(2));
wr32(c, (RW(19) + 28), RW(16));
wr32(c, (RW(19) + 64), RW(16));
wr32(c, (RW(19) + 24), RW(16));
L_00252E4C:;
wr8(c, (RW(19) + 0), (u8)RW(21));
wr8(c, (RW(19) + 68), (u8)RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); { F_00247988(c); return; }
}

void F_00252E78(Ctx *c) { /* func_00252E78 */
ENTER(0x252e78);
SET64(13, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(9, (s32)rd32(c, (RW(13) + -28168)));
SET64(10, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(12, RD(4) + RD(0));
SET64(11, RD(6) + RD(0));
SET64(8, RD(7) + RD(0));
{ int t = RSD(9) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00252F10; }
SET64(2, (s64)(s32)0x400000);
SET64(4, (s64)(s32)0x400000);
SET32(7, RW(2) + -28172);
SET32(4, RW(4) + -28144);
SET64(3, (s32)rd32(c, (RW(7) + 0)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 5);
SET32(16, RW(2) + RW(4));
SET64(3, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0); SET64(3, (s32)rd32(c, (RW(13) + -28168))); if (t) goto L_00252F14; }
SET64(6, RD(9) + RD(0));
SET32(5, RW(5) + 1);
L_00252EE0:;
SET64(2, RSD(5) < RSD(6));
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(13) + -28168))); if (t) goto L_00252F14; }
SET64(2, (s32)rd32(c, (RW(7) + 0)));
SET32(2, RW(2) + RW(5));
SET32(3, RW(2) << 1);
SET32(3, RW(3) + RW(2));
SET32(3, RW(3) << 5);
SET32(16, RW(3) + RW(4));
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00252EE0; } }
L_00252F10:;
SET64(3, (s32)rd32(c, (RW(13) + -28168)));
L_00252F14:;
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00252F3C; }
SET64(5, RD(12) + RD(0));
SET64(6, RD(10) + RD(0));
SET64(7, RD(11) + RD(0));
SET64(31, 0x252f30); SET64(4, RD(16) + RD(0)); F_00252D70(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 74), (u8)RW(2));
SET64(2, RD(16) + RD(0));
L_00252F3C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00252F50(Ctx *c) { /* func_00252F50 */
ENTER(0x252f50);
SET64(13, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(9, (s32)rd32(c, (RW(13) + -28160)));
SET64(10, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(12, RD(4) + RD(0));
SET64(11, RD(6) + RD(0));
SET64(8, RD(7) + RD(0));
{ int t = RSD(9) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00252FE8; }
SET64(2, (s64)(s32)0x400000);
SET64(4, (s64)(s32)0x400000);
SET32(7, RW(2) + -28164);
SET32(4, RW(4) + -28144);
SET64(3, (s32)rd32(c, (RW(7) + 0)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 5);
SET32(16, RW(2) + RW(4));
SET64(3, (s8)rd8(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0); SET64(3, (s32)rd32(c, (RW(13) + -28160))); if (t) goto L_00252FEC; }
SET64(6, RD(9) + RD(0));
SET32(5, RW(5) + 1);
L_00252FB8:;
SET64(2, RSD(5) < RSD(6));
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(13) + -28160))); if (t) goto L_00252FEC; }
SET64(2, (s32)rd32(c, (RW(7) + 0)));
SET32(2, RW(2) + RW(5));
SET32(3, RW(2) << 1);
SET32(3, RW(3) + RW(2));
SET32(3, RW(3) << 5);
SET32(16, RW(3) + RW(4));
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00252FB8; } }
L_00252FE8:;
SET64(3, (s32)rd32(c, (RW(13) + -28160)));
L_00252FEC:;
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00253010; }
SET64(5, RD(12) + RD(0));
SET64(6, RD(10) + RD(0));
SET64(7, RD(11) + RD(0));
SET64(31, 0x253008); SET64(4, RD(16) + RD(0)); F_00252D70(c);
wr8(c, (RW(16) + 74), (u8)RW(0));
SET64(2, RD(16) + RD(0));
L_00253010:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00253020(Ctx *c) { /* func_00253020 */
ENTER(0x253020);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25303c); SET64(17, RD(5) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x253048); SET64(5, RD(17) + RD(0)); F_00253068(c);
SET64(31, 0x253050); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_00253068(Ctx *c) { /* func_00253068 */
ENTER(0x253068);
SET64(3, RD(4) + RD(0));
SET64(4, RD(0) + RD(0));
SET32(29, RW(29) + -16);
SET64(2, RSD(5) < (s64)256);
wr64(c, (RW(29) + 0), RD(31));
SET64(7, RD(3) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00253098; }
SET64(31, 0x253090); SET64(6, RD(0) + RD(0)); F_00252E78(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_002530A4;
L_00253098:;
SET64(31, 0x2530a0); SET64(6, RD(0) + RD(0)); F_00252F50(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_002530A4:;
SET32(29, RW(29) + 16); return;
}

void F_002530B0(Ctx *c) { /* func_002530B0 */
ENTER(0x2530b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2530c4); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x2530cc); SET64(4, RD(16) + RD(0)); F_002530E0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00252C98(c); return; }
}

void F_002530E0(Ctx *c) { /* func_002530E0 */
ENTER(0x2530e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00253128; }
SET64(31, 0x2530fc);  F_00253690(c);
SET64(31, 0x253104); SET64(4, RD(16) + RD(0)); F_00253338(c);
wr8(c, (RW(16) + 0), (u8)RW(0));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 96);
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
L_00253128:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00253138(Ctx *c) { /* func_00253138 */
ENTER(0x253138);
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
SET64(31, 0x25316c); SET64(20, RD(8) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(31, 0x253184); SET64(8, RD(20) + RD(0)); F_002531A8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_00252C98(c); return; }
}

void F_002531A8(Ctx *c) { /* func_002531A8 */
ENTER(0x2531a8);
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
SET64(31, 0x2531dc); SET64(20, RD(6) + RD(0)); F_00252C48(c);
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
SET32(29, RW(29) + 48); { F_00252C60(c); return; }
}

void F_00253220(Ctx *c) { /* func_00253220 */
ENTER(0x253220);
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
SET64(31, 0x253254); SET64(20, RD(8) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(31, 0x25326c); SET64(8, RD(20) + RD(0)); F_00253290(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_00252C98(c); return; }
}

void F_00253290(Ctx *c) { /* func_00253290 */
ENTER(0x253290);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2532a4); SET64(16, RD(4) + RD(0)); F_00253138(c);
L_002532A8:;
SET64(31, 0x2532b0);  F_0024BC60(c);
SET64(2, (s8)rd8(c, (RW(16) + 69)));
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 8))); if (t) { POLL(); goto L_002532A8; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002532C8(Ctx *c) { /* func_002532C8 */
ENTER(0x2532c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2532dc); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x2532e4); SET64(4, RD(16) + RD(0)); F_002532F8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00252C98(c); return; }
}

void F_002532F8(Ctx *c) { /* func_002532F8 */
ENTER(0x2532f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25330c); SET64(16, RD(4) + RD(0)); F_002535F8(c);
SET64(31, 0x253314);  F_00252C48(c);
SET64(3, (s8)rd8(c, (RW(16) + 73)));
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { wr8(c, (RW(16) + 70), (u8)RW(3)); goto L_00253324; }
L_00253324:;
wr8(c, (RW(16) + 69), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00252C60(c); return; }
}

void F_00253338(Ctx *c) { /* func_00253338 */
ENTER(0x253338);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25334c); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x253354); SET64(4, RD(16) + RD(0)); F_00253368(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00252C98(c); return; }
}

void F_00253368(Ctx *c) { /* func_00253368 */
ENTER(0x253368);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25337c); SET64(16, RD(4) + RD(0)); F_00253690(c);
SET64(31, 0x253384); SET64(4, RD(16) + RD(0)); F_002532C8(c);
SET64(2, (s8)rd8(c, (RW(16) + 73)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002533A8; }
L_00253390:;
SET64(31, 0x253398);  F_0024BC60(c);
SET64(2, (s8)rd8(c, (RW(16) + 73)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00253390; } }
SET64(16, rd64(c, (RW(29) + 0)));
L_002533A8:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002533B8(Ctx *c) { /* func_002533B8 */
ENTER(0x2533b8);
SET64(2, (s8)rd8(c, (RW(4) + 73))); return;
}

void F_002533C0(Ctx *c) { /* func_002533C0 */
ENTER(0x2533c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2533d4); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x2533dc); SET64(4, RD(16) + RD(0)); F_002533F8(c);
SET64(31, 0x2533e4); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002533F8(Ctx *c) { /* func_002533F8 */
ENTER(0x2533f8);
SET64(2, (s8)rd8(c, (RW(4) + 1))); return;
}

void F_00253400(Ctx *c) { /* func_00253400 */
ENTER(0x253400);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25341c); SET64(17, RD(5) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x253428); SET64(5, RD(17) + RD(0)); F_00253448(c);
SET64(31, 0x253430); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_00253448(Ctx *c) { /* func_00253448 */
ENTER(0x253448);
SET64(2, (s32)rd32(c, (RW(4) + 20)));
wr32(c, (RW(4) + 88), RW(5));
SET64(5, RSD(2) < RSD(5));
if (RD(5) != RD(0)) { wr32(c, (RW(4) + 88), RW(2)); goto L_0025345C; }
L_0025345C:;
SET64(2, (s32)rd32(c, (RW(4) + 88))); return;
}

void F_00253468(Ctx *c) { /* func_00253468 */
ENTER(0x253468);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25347c); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x253484); SET64(4, RD(16) + RD(0)); F_002534A0(c);
SET64(31, 0x25348c); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002534A0(Ctx *c) { /* func_002534A0 */
ENTER(0x2534a0);
SET64(3, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002534B0; }
SET64(2, (s32)rd32(c, (RW(4) + 88)));
L_002534B0:;
 return;
}

void F_002534B8(Ctx *c) { /* func_002534B8 */
ENTER(0x2534b8);
SET64(2, (s32)rd32(c, (RW(4) + 20)));
wr32(c, (RW(4) + 52), RW(0));
{ int t = RD(2) != RD(0); wr8(c, (RW(4) + 3), (u8)RW(0)); if (t) goto L_002534D0; }
SET32(2, RW(0) + 3); goto L_002534D4;
L_002534D0:;
SET32(2, RW(0) + 2);
L_002534D4:;
wr8(c, (RW(4) + 1), (u8)RW(2));
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 2), (u8)RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr8(c, (RW(4) + 71), (u8)RW(2)); return;
}

void F_002534F0(Ctx *c) { /* func_002534F0 */
ENTER(0x2534f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x253504); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x25350c); SET64(4, RD(16) + RD(0)); F_00253528(c);
SET64(31, 0x253514); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00253528(Ctx *c) { /* func_00253528 */
ENTER(0x253528);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25353c); SET64(16, RD(4) + RD(0)); F_00247970(c);
SET64(31, 0x253544); SET64(4, RD(16) + RD(0)); F_002534B8(c);
SET64(2, (s64)(s32)0xf0000);
SET64(2, RD(2) | 0xffff);
SET64(31, 0x253554); wr32(c, (RW(16) + 92), RW(2)); F_00247988(c);
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00253568(Ctx *c) { /* func_00253568 */
ENTER(0x253568);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x253584); SET64(17, RD(5) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x253590); SET64(5, RD(17) + RD(0)); F_002535B0(c);
SET64(31, 0x253598); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_002535B0(Ctx *c) { /* func_002535B0 */
ENTER(0x2535b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2535cc); SET64(17, RD(5) + RD(0)); F_00247970(c);
SET64(31, 0x2535d4); SET64(4, RD(16) + RD(0)); F_002534B8(c);
SET64(31, 0x2535dc); wr32(c, (RW(16) + 92), RW(17)); F_00247988(c);
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002535F8(Ctx *c) { /* func_002535F8 */
ENTER(0x2535f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25360c); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x253614); SET64(4, RD(16) + RD(0)); F_00253628(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00252C98(c); return; }
}

void F_00253628(Ctx *c) { /* func_00253628 */
ENTER(0x253628);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25363c); SET64(16, RD(4) + RD(0)); F_00252C48(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s64)(s32)0xff0000);
SET64(3, RD(3) | 0xff00);
SET64(4, (s64)(s32)0x10000);
SET64(2, RD(2) & RD(3));
SET64(4, RD(4) | 0x200);
{ int t = RD(2) != RD(4); SET32(5, RW(0) + 1); if (t) goto L_00253678; }
SET64(3, (s8)rd8(c, (RW(16) + 71)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(5); wr8(c, (RW(16) + 72), (u8)RW(2)); if (t) goto L_00253680; }
wr8(c, (RW(16) + 71), (u8)RW(0)); goto L_00253680;
L_00253678:;
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 1), (u8)RW(2));
L_00253680:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00252C60(c); return; }
}

void F_00253690(Ctx *c) { /* func_00253690 */
ENTER(0x253690);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2536a4); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x2536ac); SET64(4, RD(16) + RD(0)); F_002536C0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00252C98(c); return; }
}

void F_002536C0(Ctx *c) { /* func_002536C0 */
ENTER(0x2536c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2536dc); SET32(17, RW(0) + 1); F_002535F8(c);
L_002536E0:;
SET64(31, 0x2536e8);  F_0024BC60(c);
SET64(2, (s8)rd8(c, (RW(16) + 1)));
{ int t = RD(2) != RD(17);  if (t) { POLL(); goto L_002536E0; } }
SET64(2, (s32)rd32(c, (RW(16) + 36)));
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 16))); if (t) { POLL(); goto L_002536E0; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void F_00253710(Ctx *c) { /* func_00253710 */
ENTER(0x253710);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x253734); SET64(18, RD(6) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x253744); SET64(6, RD(18) + RD(0)); F_00253760(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00252C98(c); return; }
}

void F_00253760(Ctx *c) { /* func_00253760 */
ENTER(0x253760);
wr32(c, (RW(4) + 60), RW(6));
wr32(c, (RW(4) + 56), RW(5)); return;
}

void F_00253770(Ctx *c) { /* func_00253770 */
ENTER(0x253770);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25378c); SET64(17, RD(5) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x253798); SET64(5, RD(17) + RD(0)); F_002537B0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00252C98(c); return; }
}

void F_002537B0(Ctx *c) { /* func_002537B0 */
ENTER(0x2537b0);
if (RSD(5) < 0) { SET64(2, (s32)rd32(c, (RW(4) + 20))); goto L_002537C0; }
wr32(c, (RW(4) + 48), RW(5)); return;
L_002537C0:;
wr32(c, (RW(4) + 48), RW(2)); return;
}

void F_002537C8(Ctx *c) { /* func_002537C8 */
ENTER(0x2537c8);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + -28148);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2)); return;
}

void F_002537E0(Ctx *c) { /* func_002537E0 */
ENTER(0x2537e0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 56), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 72), RD(31));
SET64(4, (s32)rd32(c, (RW(19) + 8)));
SET64(31, 0x25380c); SET64(20, (s32)rd32(c, (RW(19) + 4))); F_0025AE10(c);
SET64(31, 0x253814); SET64(16, RD(2) + RD(0)); F_00252C48(c);
SET64(4, (s8)rd8(c, (RW(19) + 2)));
SET32(2, RW(0) + 1);
{ int t = RD(4) != RD(2); SET64(3, rd8(c, (RW(19) + 2))); if (t) goto L_0025399C; }
{ int t = RD(16) != RD(4); SET32(2, RW(0) + 3); if (t) goto L_00253918; }
wr8(c, (RW(19) + 2), (u8)RW(0));
SET64(31, 0x253838); SET32(18, RW(19) + 36); F_00252C60(c);
SET64(16, (s32)rd32(c, (RW(19) + 32)));
SET32(17, RW(29) + 16);
SET64(6, RD(29) + RD(0));
SET32(16, RW(16) << 11);
SET64(7, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x253858); SET64(4, RD(18) + RD(0)); F_002683C8(c);
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(6, RD(29) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x253870); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x253888); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
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
{ int t = RD(3) != RD(5); SET64(16, (s32)rd32(c, (RW(19) + 20))); if (t) goto L_002538CC; }
SET64(2, (s32)rd32(c, (RW(19) + 56)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 88))); goto L_002538D0; }
{ u32 t = RW(2); SET64(31, 0x2538cc); SET64(4, (s32)rd32(c, (RW(19) + 60))); rt_call(c, t); }
L_002538CC:;
SET64(2, (s32)rd32(c, (RW(19) + 88)));
L_002538D0:;
SET64(2, RSD(2) < RSD(16));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_0025390C; }
SET64(2, (s32)rd32(c, (RW(19) + 52)));
SET64(3, (s32)rd32(c, (RW(19) + 92)));
SET32(2, RW(2) >> 11);
SET64(2, RD(2) < RD(3));
if (RD(2) != RD(0)) { wr8(c, (RW(19) + 3), (u8)RW(0)); goto L_00253998; }
SET64(2, (s64)(s32)0xf0000);
SET64(2, RD(2) | 0xfffe);
SET64(2, RD(2) < RD(3));
if (RD(2) != RD(0)) { wr8(c, (RW(19) + 3), (u8)RW(0)); goto L_00253998; }
SET32(2, RW(0) + 3);
L_0025390C:;
wr8(c, (RW(19) + 1), (u8)RW(2));
wr8(c, (RW(19) + 3), (u8)RW(0)); goto L_00253998;
L_00253918:;
{ int t = RD(16) != RD(2);  if (t) goto L_00253990; }
wr8(c, (RW(19) + 2), (u8)RW(0));
SET64(31, 0x25392c); SET32(16, RW(19) + 36); F_00252C60(c);
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x253944); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(19) + 40), RW(0));
SET64(2, (s64)(s32)0x400000);
SET64(3, (s32)rd32(c, (RW(2) + -28152)));
if (RSD(3) < 0) { SET64(3, rd8(c, (RW(19) + 2))); goto L_0025399C; }
SET64(2, (s8)rd8(c, (RW(19) + 3)));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(19) + 3))); if (t) goto L_00253980; }
SET32(2, RW(0) + 4);
SET64(3, rd8(c, (RW(19) + 2)));
wr8(c, (RW(19) + 1), (u8)RW(2)); goto L_0025399C;
L_00253980:;
SET32(2, RW(4) + 1);
SET64(3, rd8(c, (RW(19) + 2)));
wr8(c, (RW(19) + 3), (u8)RW(2)); goto L_0025399C;
L_00253990:;
SET64(31, 0x253998);  F_00252C60(c);
L_00253998:;
SET64(3, rd8(c, (RW(19) + 2)));
L_0025399C:;
{ int t = RD(3) != RD(0); SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_00253BBC; }
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 36), RW(0));
wr8(c, (RW(19) + 2), (u8)RW(2));
SET32(17, RW(0) + 1);
SET64(31, 0x2539bc); wr32(c, (RW(19) + 40), RW(0)); F_00252C60(c);
SET64(2, (s8)rd8(c, (RW(19) + 68)));
if (RD(2) == RD(17)) { wr8(c, (RW(19) + 2), (u8)RW(0)); goto L_00253BB8; }
SET64(2, (s8)rd8(c, (RW(19) + 72)));
if (RD(2) == RD(17)) { wr8(c, (RW(19) + 2), (u8)RW(0)); goto L_00253BB8; }
SET64(2, (s32)rd32(c, (RW(19) + 20)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 3); if (t) goto L_002539F0; }
wr8(c, (RW(19) + 2), (u8)RW(0));
wr8(c, (RW(19) + 1), (u8)RW(2));
wr32(c, (RW(19) + 32), RW(0)); goto L_00253BB8;
L_002539F0:;
{ int t = RD(20) == RD(0);  if (t) goto L_00253A04; }
SET64(2, (s32)rd32(c, (RW(20) + 0)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(2) + 36))); goto L_00253A18; }
L_00253A04:;
SET64(31, 0x253a0c); wr8(c, (RW(19) + 2), (u8)RW(0)); F_002537C8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_00253BBC;
L_00253A18:;
SET64(4, RD(20) + RD(0));
{ u32 t = RW(2); SET64(31, 0x253a24); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 64)));
SET64(4, (s32)rd32(c, (RW(19) + 28)));
SET32(3, RW(3) - RW(2));
SET64(3, RSD(3) < RSD(4));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(20) + 0))); goto L_00253A48; }
wr8(c, (RW(19) + 2), (u8)RW(0)); goto L_00253BB8;
L_00253A48:;
SET32(7, RW(29) + 16);
SET64(6, (s32)rd32(c, (RW(19) + 24)));
SET64(4, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x253a60); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
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
SET64(31, 0x253ab8); if (RD(2) == 0) SET64(16, RD(8)); F_0025AC20(c);
SET64(3, (s64)(s32)0x400000);
SET64(4, (s32)rd32(c, (RW(3) + -24256)));
{ int t = RD(4) != RD(17); SET64(2, (s64)(s32)0xf0000); if (t) goto L_00253AF0; }
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + -23040), RW(4));
SET64(3, (s8)rd8(c, (RW(19) + 74)));
{ int t = RD(3) != RD(4); SET64(2, (s64)(s32)0x400000); if (t) goto L_00253AE8; }
wr8(c, (RW(2) + -23036), (u8)RW(0)); goto L_00253AEC;
L_00253AE8:;
wr8(c, (RW(2) + -23036), (u8)RW(4));
L_00253AEC:;
SET64(2, (s64)(s32)0xf0000);
L_00253AF0:;
SET64(5, (s32)rd32(c, (RW(19) + 92)));
SET64(2, RD(2) | 0xffff);
if (RD(5) == RD(2)) { SET64(4, (s32)rd32(c, (RW(19) + 8))); goto L_00253B24; }
SET64(2, (s32)rd32(c, (RW(19) + 52)));
SET64(3, RSD(2) < (s64)0);
SET32(4, RW(2) + 2047);
if (RD(3) != 0) SET64(2, RD(4));
SET32(2, RSW(2) >> 11);
SET32(2, RW(5) - RW(2));
SET64(3, RSD(16) < RSD(2));
if (RD(3) == 0) SET64(16, RD(2));
SET64(4, (s32)rd32(c, (RW(19) + 8)));
L_00253B24:;
SET64(5, RD(16) + RD(0));
SET64(31, 0x253b30); SET64(6, (s32)rd32(c, (RW(29) + 16))); F_0025AC88(c);
SET64(4, (s32)rd32(c, (RW(29) + 20)));
SET64(3, (s32)rd32(c, (RW(29) + 16)));
wr32(c, (RW(19) + 40), RW(4));
wr32(c, (RW(19) + 36), RW(3));
{ int t = RSD(2) > 0; wr32(c, (RW(19) + 32), RW(2)); if (t) goto L_00253BB8; }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET32(16, RW(19) + 36);
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x253b64); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(19) + 40), RW(0));
wr8(c, (RW(19) + 2), (u8)RW(0));
SET64(31, 0x253b78); SET64(4, (s32)rd32(c, (RW(19) + 8))); F_0025AE10(c);
SET32(3, RW(0) + 3);
{ int t = RD(2) != RD(3); SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_00253BBC; }
SET64(2, (s64)(s32)0x400000);
SET64(3, (s32)rd32(c, (RW(2) + -28152)));
{ int t = RSD(3) < 0; SET64(17, rd64(c, (RW(29) + 40))); if (t) goto L_00253BC0; }
SET64(2, (s8)rd8(c, (RW(19) + 3)));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(19) + 3))); if (t) goto L_00253BB0; }
SET32(2, RW(0) + 4);
wr8(c, (RW(19) + 1), (u8)RW(2)); goto L_00253BC0;
L_00253BB0:;
SET32(2, RW(4) + 1);
wr8(c, (RW(19) + 3), (u8)RW(2));
L_00253BB8:;
SET64(16, rd64(c, (RW(29) + 32)));
L_00253BBC:;
SET64(17, rd64(c, (RW(29) + 40)));
L_00253BC0:;
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_00253BD8(Ctx *c) { /* adxstmf_stat_exec */
ENTER(0x253bd8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s8)rd8(c, (RW(16) + 2)));
if (RD(2) != RD(0)) { SET64(3, (s8)rd8(c, (RW(16) + 1))); goto L_00253D7C; }
SET64(3, (s8)rd8(c, (RW(16) + 72)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(3, (s8)rd8(c, (RW(16) + 70))); goto L_00253C24; }
SET64(2, (s8)rd8(c, (RW(16) + 71)));
{ int t = RD(2) != RD(0); wr8(c, (RW(16) + 72), (u8)RW(0)); if (t) goto L_00253C1C; }
wr8(c, (RW(16) + 1), (u8)RW(3));
L_00253C1C:;
SET64(3, (s8)rd8(c, (RW(16) + 70)));
SET32(2, RW(0) + 1);
L_00253C24:;
{ int t = RD(3) != RD(2);  if (t) goto L_00253C48; }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { wr8(c, (RW(16) + 70), (u8)RW(0)); goto L_00253C44; }
SET64(31, 0x253c40); wr32(c, (RW(16) + 8), RW(0)); F_0025AB40(c);
wr8(c, (RW(16) + 70), (u8)RW(0));
L_00253C44:;
wr8(c, (RW(16) + 73), (u8)RW(0));
L_00253C48:;
SET64(31, 0x253c50);  F_00252C48(c);
SET64(3, (s8)rd8(c, (RW(16) + 69)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2);  if (t) goto L_00253D60; }
SET64(31, 0x253c68); wr8(c, (RW(16) + 73), (u8)RW(3)); F_00252C60(c);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) != RD(0)) { SET64(3, (s8)rd8(c, (RW(16) + 71))); goto L_00253D6C; }
SET64(4, (s32)rd32(c, (RW(16) + 80)));
SET64(6, RD(0) + RD(0));
SET64(31, 0x253c84); SET64(5, (s32)rd32(c, (RW(16) + 84))); F_0025A7F0(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 8), RW(2)); if (t) goto L_00253CB0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(16) + 80)));
SET64(31, 0x253c9c); SET32(4, RW(4) + -20512); F_00248EF0(c);
SET32(2, RW(0) + 4);
wr8(c, (RW(16) + 1), (u8)RW(2));
wr8(c, (RW(16) + 69), (u8)RW(0));
wr8(c, (RW(16) + 73), (u8)RW(0)); goto L_00253DA0;
L_00253CB0:;
SET64(4, RD(2) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x253cc0); SET32(6, RW(0) + 2); F_0025AC20(c);
SET64(31, 0x253cc8); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_0025ABB8(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 84)));
{ int t = RD(2) != RD(0); SET32(18, RW(17) << 11); if (t) goto L_00253CE4; }
SET64(31, 0x253ce0); SET64(4, (s32)rd32(c, (RW(16) + 80))); F_0025AE78(c);
SET64(18, RD(2) + RD(0));
L_00253CE4:;
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x253cf4); SET64(6, RD(0) + RD(0)); F_0025AC20(c);
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xf800);
if (RD(3) != RD(2)) { SET64(3, (s32)rd32(c, (RW(16) + 12))); goto L_00253D14; }
wr32(c, (RW(16) + 16), RW(18));
wr32(c, (RW(16) + 20), RW(17));
SET64(3, (s32)rd32(c, (RW(16) + 12)));
L_00253D14:;
SET64(2, RSD(17) < RSD(3));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 20))); goto L_00253D2C; }
wr32(c, (RW(16) + 12), RW(17));
SET64(3, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
L_00253D2C:;
SET32(2, RW(2) + RW(3));
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00253D4C; }
SET32(2, RW(17) - RW(3));
SET32(3, RW(2) << 11);
wr32(c, (RW(16) + 20), RW(2));
wr32(c, (RW(16) + 16), RW(3));
L_00253D4C:;
SET64(31, 0x253d54); SET64(5, RD(0) + RD(0)); F_00253400(c);
wr8(c, (RW(16) + 69), (u8)RW(0)); goto L_00253D68;
L_00253D60:;
SET64(31, 0x253d68);  F_00252C60(c);
L_00253D68:;
SET64(3, (s8)rd8(c, (RW(16) + 71)));
L_00253D6C:;
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { wr8(c, (RW(16) + 71), (u8)RW(0)); goto L_00253D78; }
L_00253D78:;
SET64(3, (s8)rd8(c, (RW(16) + 1)));
L_00253D7C:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00253DA4; }
SET64(3, (s8)rd8(c, (RW(16) + 73)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00253DA4; }
SET64(31, 0x253da0); SET64(4, RD(16) + RD(0)); F_002537E0(c);
L_00253DA0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00253DA4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00253DB8(Ctx *c) { /* func_00253DB8 */
ENTER(0x253db8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x253dc8);  F_00252C90(c);
SET64(31, 0x253dd0);  F_00253DE0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00252C98(c); return; }
}

void F_00253DE0(Ctx *c) { /* func_00253DE0 */
ENTER(0x253de0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x253e04); SET32(4, RW(19) + -28156); F_00252C78(c);
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x400000); if (t) goto L_00253E40; }
SET32(18, RW(0) + 1);
SET32(16, RW(2) + -28144);
SET32(17, RW(0) + 39);
L_00253E18:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00253E30; }
SET64(31, 0x253e2c); SET64(4, RD(16) + RD(0)); F_00253BD8(c);
SET32(17, RW(17) + -1);
L_00253E30:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 96); if (t) { POLL(); goto L_00253E18; } }
SET32(2, RW(19) + -28156);
wr32(c, (RW(2) + 0), RW(0));
L_00253E40:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00253E60(Ctx *c) { /* func_00253E60 */
ENTER(0x253e60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x253e70);  F_00252C90(c);
SET64(31, 0x253e78);  F_00253E88(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00252C98(c); return; }
}

void F_00253E88(Ctx *c) { /* func_00253E88 */
ENTER(0x253e88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0025ADB0(c); return; }
}

void F_00253EA0(Ctx *c) { /* func_00253EA0 */
ENTER(0x253ea0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x253ebc); SET64(17, RD(5) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x253ec8); SET64(5, RD(17) + RD(0)); F_00253EE8(c);
SET64(31, 0x253ed0); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_00253EE8(Ctx *c) { /* func_00253EE8 */
ENTER(0x253ee8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x253efc); SET64(16, RD(5) + RD(0)); F_00253468(c);
wr32(c, (RW(16) + 0), RW(2));
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00253F18(Ctx *c) { /* func_00253F18 */
ENTER(0x253f18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x253f3c); SET64(18, RD(6) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x253f4c); SET64(6, RD(18) + RD(0)); F_00253F70(c);
SET64(31, 0x253f54); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00253F70(Ctx *c) { /* func_00253F70 */
ENTER(0x253f70);
SET64(3, (s32)rd32(c, (RW(4) + 28)));
SET32(2, RW(0) + 1);
wr32(c, (RW(5) + 0), RW(3));
SET64(5, (s32)rd32(c, (RW(4) + 24)));
wr32(c, (RW(6) + 0), RW(5)); return;
}

void F_00253F88(Ctx *c) { /* func_00253F88 */
ENTER(0x253f88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x253f9c); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x253fa4); SET64(4, RD(16) + RD(0)); F_00253FC0(c);
SET64(31, 0x253fac); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00253FC0(Ctx *c) { /* func_00253FC0 */
ENTER(0x253fc0);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void F_00253FC8(Ctx *c) { /* func_00253FC8 */
ENTER(0x253fc8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x253fec); SET64(18, RD(6) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x253ffc); SET64(6, RD(18) + RD(0)); F_00254020(c);
SET64(31, 0x254004); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00254020(Ctx *c) { /* func_00254020 */
ENTER(0x254020);
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 24), RW(6));
wr32(c, (RW(4) + 28), RW(5)); return;
}

void F_00254030(Ctx *c) { /* func_00254030 */
ENTER(0x254030);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25404c); SET64(17, RD(5) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x254058); SET64(5, RD(17) + RD(0)); F_00254078(c);
SET64(31, 0x254060); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_00254078(Ctx *c) { /* func_00254078 */
ENTER(0x254078);
wr32(c, (RW(4) + 44), RW(5));
SET32(2, RW(0) + 1); return;
}

void F_00254088(Ctx *c) { /* func_00254088 */
ENTER(0x254088);
 return;
}

void F_00254090(Ctx *c) { /* func_00254090 */
ENTER(0x254090);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2540a4); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x2540ac); SET64(4, RD(16) + RD(0)); F_002540C8(c);
SET64(31, 0x2540b4); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002540C8(Ctx *c) { /* func_002540C8 */
ENTER(0x2540c8);
SET64(2, (s32)rd32(c, (RW(4) + 16))); return;
}

void F_002540D0(Ctx *c) { /* func_002540D0 */
ENTER(0x2540d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2540e4); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x2540ec); SET64(4, RD(16) + RD(0)); F_00254108(c);
SET64(31, 0x2540f4); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00254108(Ctx *c) { /* func_00254108 */
ENTER(0x254108);
SET64(2, (s32)rd32(c, (RW(4) + 20))); return;
}

void F_00254110(Ctx *c) { /* func_00254110 */
ENTER(0x254110);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x254124); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x25412c); SET64(4, RD(16) + RD(0)); F_00254148(c);
SET64(31, 0x254134); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00254148(Ctx *c) { /* func_00254148 */
ENTER(0x254148);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0025AE78(c); return; }
}

void F_00254160(Ctx *c) { /* func_00254160 */
ENTER(0x254160);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25417c); SET64(17, RD(5) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x254188); SET64(5, RD(17) + RD(0)); F_002541A0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00252C98(c); return; }
}

void F_002541A0(Ctx *c) { /* func_002541A0 */
ENTER(0x2541a0);
wr8(c, (RW(4) + 68), (u8)RW(5)); return;
}

void F_002541A8(Ctx *c) { /* func_002541A8 */
ENTER(0x2541a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2541bc); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x2541c4); SET64(4, RD(16) + RD(0)); F_002541E0(c);
SET64(31, 0x2541cc); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002541E0(Ctx *c) { /* func_002541E0 */
ENTER(0x2541e0);
SET64(2, (s8)rd8(c, (RW(4) + 68))); return;
}

void F_002541E8(Ctx *c) { /* func_002541E8 */
ENTER(0x2541e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x254200); SET64(4, (s32)rd32(c, (RW(4) + 8))); F_0025AE10(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00254218(Ctx *c) { /* func_00254218 */
ENTER(0x254218);
wr32(c, (RW(5) + 0), RW(0));
SET32(2, RW(0) + 1); return;
}

void F_00254228(Ctx *c) { /* func_00254228 */
ENTER(0x254228);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x254244); SET64(17, RD(5) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x254250); SET64(5, RD(17) + RD(0)); F_00254270(c);
SET64(31, 0x254258); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_00254270(Ctx *c) { /* func_00254270 */
ENTER(0x254270);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x254284); SET64(16, RD(5) + RD(0)); F_0025AE78(c);
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
{ int t = RSD(5) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002542B8; }
wr32(c, (RW(16) + 0), RW(6));
L_002542B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002542C8(Ctx *c) { /* func_002542C8 */
ENTER(0x2542c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2542e4); SET64(17, RD(5) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2542f0); SET64(5, RD(17) + RD(0)); F_00254310(c);
SET64(31, 0x2542f8); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_00254310(Ctx *c) { /* func_00254310 */
ENTER(0x254310);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x254324); SET64(16, RD(5) + RD(0)); F_0025AE78(c);
wr32(c, (RW(16) + 0), RW(2));
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00254340(Ctx *c) { /* func_00254340 */
ENTER(0x254340);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25435c); SET64(17, RD(5) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x254368); SET64(5, RD(17) + RD(0)); F_00254380(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00252C98(c); return; }
}

void F_00254380(Ctx *c) { /* func_00254380 */
ENTER(0x254380);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2543a4); wr32(c, (RW(18) + 4), RW(16)); F_00247970(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x2543b8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x2543d0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(17, RW(17) + RW(2));
SET64(31, 0x2543dc); wr32(c, (RW(18) + 64), RW(17)); F_00247988(c);
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(18) + 28), RW(2));
wr32(c, (RW(18) + 24), RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00254400(Ctx *c) { /* func_00254400 */
ENTER(0x254400);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25441c); SET64(17, RD(5) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x254428); SET64(5, RD(17) + RD(0)); F_00254440(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00252C98(c); return; }
}

void F_00254440(Ctx *c) { /* func_00254440 */
ENTER(0x254440);
SET32(2, RW(5) << 11);
wr32(c, (RW(4) + 20), RW(5));
wr32(c, (RW(4) + 16), RW(2)); return;
}

void F_00254450(Ctx *c) { /* func_00254450 */
ENTER(0x254450);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25446c); SET64(17, RD(5) + RD(0)); F_00252C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x254478); SET64(5, RD(17) + RD(0)); F_00254490(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00252C98(c); return; }
}

void F_00254490(Ctx *c) { /* func_00254490 */
ENTER(0x254490);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 12), RW(5));
SET64(5, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00253400(c); return; }
}

void F_002544B0(Ctx *c) { /* func_002544B0 */
ENTER(0x2544b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2544c4); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x2544cc); SET64(4, RD(16) + RD(0)); F_002544E0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_002544E0(Ctx *c) { /* func_002544E0 */
ENTER(0x2544e0);
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + -28152), RW(4)); return;
}

void F_002544F0(Ctx *c) { /* func_002544F0 */
ENTER(0x2544f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x254504); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x25450c); SET64(4, RD(16) + RD(0)); F_00254528(c);
SET64(31, 0x254514); SET64(16, RD(2) + RD(0)); F_00252C98(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00254528(Ctx *c) { /* func_00254528 */
ENTER(0x254528);
SET64(2, (s8)rd8(c, (RW(4) + 2))); return;
}

void F_00254530(Ctx *c) { /* func_00254530 */
ENTER(0x254530);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x254544); SET64(16, RD(4) + RD(0)); F_00252C90(c);
SET64(31, 0x25454c); SET64(4, RD(16) + RD(0)); F_00254560(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00252C98(c); return; }
}

void F_00254560(Ctx *c) { /* func_00254560 */
ENTER(0x254560);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 80)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002545D4; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002545D4; }
SET32(2, RW(0) + 1);
SET64(3, (s64)(s32)0x400000);
wr8(c, (RW(16) + 69), (u8)RW(2));
SET32(17, RW(3) + -28156);
SET32(18, RW(0) + 1);
L_002545A8:;
SET64(31, 0x2545b0); SET64(4, RD(17) + RD(0)); F_00252C78(c);
{ int t = RD(2) != RD(18); SET64(4, RD(16) + RD(0)); if (t) goto L_002545C4; }
SET64(31, 0x2545c0);  F_00253BD8(c);
wr32(c, (RW(17) + 0), RW(0));
L_002545C4:;
SET64(2, (s8)rd8(c, (RW(16) + 69)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002545A8; } }
SET64(16, rd64(c, (RW(29) + 0)));
L_002545D4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002545E8(Ctx *c) { /* func_002545E8 */
ENTER(0x2545e8);
SET32(29, RW(29) + -16);
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
}

void F_00254600(Ctx *c) { /* ADXPS2_SetupDvdFs */
ENTER(0x254600);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -32);
SET32(2, RW(2) + -24304);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(4, RD(2) + RD(0));
SET64(5, RD(4) + RD(0));
SET64(31, 0x25462c); SET32(6, RW(0) + 128); F_00127180(c);
SET64(4, (s64)(s32)0x400000);
SET32(4, RW(4) + -24288);
SET64(16, (s64)(s32)0x250000);
SET32(6, RW(0) + 232);
SET64(5, RD(4) + RD(0));
SET64(31, 0x254648); SET32(16, RW(16) + 17896); F_00127180(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x254654); SET64(5, RD(0) + RD(0)); F_0025B940(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s64)(s32)0x260000);
SET64(6, RD(0) + RD(0));
SET32(4, RW(4) + -20464);
SET64(31, 0x25466c); SET32(5, RW(5) + 10592); F_0025A2B8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x25467c); SET64(16, (s64)(s32)0x4b0000); F_0025B940(c);
SET64(5, (s64)(s32)0x260000);
SET32(16, RW(16) + -20456);
SET32(5, RW(5) + -6888);
SET64(6, RD(0) + RD(0));
SET64(31, 0x254694); SET64(4, RD(16) + RD(0)); F_0025A2B8(c);
SET64(31, 0x25469c); SET64(4, RD(16) + RD(0)); F_0025A5F0(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
{ int t = RD(17) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_002546E0; }
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET64(6, (s32)rd32(c, (RW(17) + 16)));
SET64(31, 0x2546c4); SET64(7, (s32)rd32(c, (RW(17) + 4))); F_0025FD90(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0025FDB0(c); return; }
L_002546E0:;
SET64(31, 0x2546e8);  F_0025FD90(c);
SET64(4, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0025FDB0(c); return; }
}

void F_00254700(Ctx *c) { /* func_00254700 */
ENTER(0x254700);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00254738; }
SET64(7, (s32)rd32(c, (RW(2) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(5, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x25472c); SET64(6, (s32)rd32(c, (RW(2) + 12))); F_0025FAA0(c);
SET64(16, RD(2) + RD(0)); goto L_00254748;
L_00254738:;
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x254748); SET64(7, RD(0) + RD(0)); F_0025FAA0(c);
L_00254748:;
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00254760(Ctx *c) { /* func_00254760 */
ENTER(0x254760);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(0) + RD(0));
SET64(3, RD(5) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(7, RD(6) + RD(0));
SET64(6, RD(0) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_002547A8; }
SET64(5, RD(7) + RD(0));
SET64(7, (s32)rd32(c, (RW(2) + 12)));
SET64(8, (s32)rd32(c, (RW(2) + 4)));
SET64(4, RD(3) + RD(0));
SET64(31, 0x2547a0); SET64(6, (s32)rd32(c, (RW(2) + 8))); F_0025FC20(c);
SET64(16, RD(2) + RD(0)); goto L_002547B0;
L_002547A8:;
SET64(31, 0x2547b0); SET64(7, RD(0) + RD(0)); F_0025FAA0(c);
L_002547B0:;
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002547C8(Ctx *c) { /* func_002547C8 */
ENTER(0x2547c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00254808; }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET64(6, (s32)rd32(c, (RW(16) + 16)));
SET64(31, 0x2547f0); SET64(7, (s32)rd32(c, (RW(16) + 4))); F_0025FD90(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0025FDB0(c); return; }
L_00254808:;
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x254818); SET64(7, RD(0) + RD(0)); F_0025FD90(c);
SET64(4, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0025FDB0(c); return; }
}

void F_00254830(Ctx *c) { /* func_00254830 */
ENTER(0x254830);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0025FD68(c); return; }
}

void F_00254848(Ctx *c) { /* func_00254848 */
ENTER(0x254848);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0025EF70(c); return; }
}

void F_00254860(Ctx *c) { /* func_00254860 */
ENTER(0x254860);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0025EF90(c); return; }
}

void F_00254878(Ctx *c) { /* func_00254878 */
ENTER(0x254878);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0025FE88(c); return; }
}

void F_00254890(Ctx *c) { /* func_00254890 */
ENTER(0x254890);
SET32(29, RW(29) + -48);
SET64(2, RD(5) + RD(0));
SET32(7, RW(6) + 2047);
SET64(6, RD(2) + RD(0));
SET64(5, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 32), RD(16));
SET32(7, RW(7) >> 11);
SET32(5, RW(5) + -20448);
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x2548c0); SET64(4, RD(29) + RD(0)); F_00129C30(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x2548cc); SET64(4, RD(16) + RD(0)); F_002581A0(c);
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_002548E0(Ctx *c) { /* func_002548E0 */
ENTER(0x2548e0);
SET32(29, RW(29) + -48);
SET64(2, RD(5) + RD(0));
SET32(7, RW(6) + 2047);
SET64(6, RD(2) + RD(0));
SET64(5, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 32), RD(16));
SET32(7, RW(7) >> 11);
SET32(5, RW(5) + -20448);
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x254910); SET64(4, RD(29) + RD(0)); F_00129C30(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x25491c); SET64(4, RD(16) + RD(0)); F_0024C6E8(c);
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00254930(Ctx *c) { /* func_00254930 */
ENTER(0x254930);
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
SET64(31, 0x254960); SET32(5, RW(5) + -20448); F_00129C30(c);
SET64(4, RD(29) + RD(0));
SET64(31, 0x25496c); SET64(5, RD(16) + RD(0)); F_0024A4D8(c);
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00254980(Ctx *c) { /* func_00254980 */
ENTER(0x254980);
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + -24256), RW(4)); return;
}

void F_00254990(Ctx *c) { /* func_00254990 */
ENTER(0x254990);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + -24256))); return;
}

void F_002549A0(Ctx *c) { /* func_002549A0 */
ENTER(0x2549a0);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + -24248))); return;
}

void F_002549B0(Ctx *c) { /* func_002549B0 */
ENTER(0x2549b0);
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(2) + -24248), RW(4)); return;
}

void F_002549C0(Ctx *c) { /* func_002549C0 */
ENTER(0x2549c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2549d4); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x2549dc); SET64(4, RD(16) + RD(0)); F_002549F0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_002549F0(Ctx *c) { /* func_002549F0 */
ENTER(0x2549f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024EE88(c); return; }
}

void F_00254A08(Ctx *c) { /* func_00254A08 */
ENTER(0x254a08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x254a1c);  F_002479A0(c);
SET64(31, 0x254a24);  F_00254A40(c);
SET64(31, 0x254a2c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00254A40(Ctx *c) { /* func_00254A40 */
ENTER(0x254a40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024EEA0(c); return; }
}

void F_00254A58(Ctx *c) { /* func_00254A58 */
ENTER(0x254a58);
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
SET64(31, 0x254a88); SET64(4, RD(16) + RD(0)); F_00265E68(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x254a98); SET64(17, RD(2) + RD(0)); F_00265E28(c);
SET32(5, RW(0) + 1);
SET64(16, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x254ab0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(18, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x254ac8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x254ad8); SET64(19, RD(2) + RD(0)); F_002689B8(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x254ae8); SET64(16, RD(2) + RD(0)); F_002689B8(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(7, RW(18) + RW(19));
SET64(5, RD(18) + RD(0));
SET64(6, RD(19) + RD(0));
SET32(4, RW(4) + -20432);
SET64(31, 0x254b04); SET64(17, RD(2) + RD(0)); F_00111888(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(7, RW(16) + RW(17));
SET64(5, RD(16) + RD(0));
SET32(16, RW(16) + RW(19));
SET64(6, RD(17) + RD(0));
SET64(31, 0x254b20); SET32(4, RW(4) + -20400); F_00111888(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(18, RW(18) + RW(17));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(6, RW(18) + RW(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, (s8)rd8(c, (RW(20) + 1)));
SET32(4, RW(4) + -20368);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_00111888(c); return; }
}

void F_00254B58(Ctx *c) { /* func_00254B58 */
ENTER(0x254b58);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x254b7c); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x254b8c); SET64(6, RD(18) + RD(0)); F_00254BB0(c);
SET64(31, 0x254b94); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00254BB0(Ctx *c) { /* adxt_Create */
ENTER(0x254bb0);
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
{ int t = RSD(19) < 0; wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_00254BF4; }
if (RD(5) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_00254BF8; }
{ int t = RSD(6) >= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_00254C00; }
L_00254BF4:;
SET64(4, (s64)(s32)0x4b0000);
L_00254BF8:;
SET32(4, RW(4) + -20344); goto L_00254C48;
L_00254C00:;
SET64(2, RSD(4) < (s64)16);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 16); if (t) goto L_00254C38; }
SET32(2, RW(4) << 1);
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 4);
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 2);
SET64(3, (s64)(s32)0x3f0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s8)rd8(c, (RW(3) + -9216)));
if (RD(3) != RD(0)) { SET32(4, RW(4) + 1); { POLL(); goto L_00254C00; } }
SET32(2, RW(0) + 16);
L_00254C38:;
{ int t = RD(4) != RD(2); SET32(2, RW(4) << 1); if (t) goto L_00254C58; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -20304);
L_00254C48:;
SET64(31, 0x254c50);  F_00248E98(c);
SET64(2, RD(0) + RD(0)); goto L_00254EAC;
L_00254C58:;
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + RW(4));
SET32(6, RW(0) + 196);
SET32(2, RW(2) << 4);
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 2);
SET64(17, (s64)(s32)0x3f0000);
SET32(17, RW(17) + -9216);
SET32(17, RW(17) + RW(2));
SET64(31, 0x254c84); SET64(4, RD(17) + RD(0)); F_001273D0(c);
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
SET64(31, 0x254d00); wr32(c, (RW(17) + 20), RW(0)); F_00266B28(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 16), RW(2)); if (t) goto L_00254DB0; }
SET64(4, RD(2) + RD(0));
SET64(31, 0x254d14); SET64(5, RD(0) + RD(0)); F_00253020(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 8), RW(2)); if (t) goto L_00254DB0; }
{ int t = RSD(19) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00254D70; }
SET32(18, RW(17) + 24);
SET64(6, (s32)rd32(c, (RW(17) + 52)));
L_00254D30:;
SET64(5, (s32)rd32(c, (RW(17) + 48)));
mul_s(c, 0, 4, RSW(6), RSW(16));
SET32(16, RW(16) + 1);
SET64(2, (s32)rd32(c, (RW(17) + 44)));
SET32(6, RW(6) - RW(5));
SET32(6, RW(6) << 1);
SET32(5, RW(5) << 1);
SET32(4, RW(4) << 1);
SET64(31, 0x254d58); SET32(4, RW(2) + RW(4)); F_00266B28(c);
SET64(3, RSD(16) < RSD(19));
wr32(c, (RW(18) + 0), RW(2));
{ int t = RD(2) == RD(0); SET32(18, RW(18) + 4); if (t) goto L_00254DB0; }
if (RD(3) != RD(0)) { SET64(6, (s32)rd32(c, (RW(17) + 52))); { POLL(); goto L_00254D30; } }
L_00254D70:;
SET32(16, RW(17) + 24);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(5, RD(19) + RD(0));
SET64(31, 0x254d84); SET64(6, RD(16) + RD(0)); F_0024EF50(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 4), RW(2)); if (t) goto L_00254DB0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x254d98); SET64(5, RD(19) + RD(0)); F_0024EB68(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 12), RW(2)); if (t) goto L_00254DB0; }
SET64(31, 0x254da8); SET64(4, (s32)rd32(c, (RW(17) + 16))); F_00261A40(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(17) + 148), RW(2)); if (t) goto L_00254DC0; }
L_00254DB0:;
SET64(31, 0x254db8); SET64(4, RD(17) + RD(0)); F_00255010(c);
SET64(2, RD(0) + RD(0)); goto L_00254EAC;
L_00254DC0:;
SET64(5, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x254dcc); SET64(4, RD(2) + RD(0)); F_00261B98(c);
SET64(31, 0x254dd4);  F_00247970(c);
SET64(2, (s32)rd32(c, (RW(17) + 36)));
SET64(6, (s64)(s32)0x400000);
SET64(1, (s64)(s32)0x3f590000);
SET64(1, RD(1) | 0x9999);
c->f[1].u = RW(1);
SET64(3, RSD(2) < (s64)0);
SET32(4, RW(2) + 2047);
if (RD(3) != 0) SET64(2, RD(4));
SET64(5, (s32)rd32(c, (RW(6) + -24236)));
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
{ int t = RSD(19) <= 0; wr16(c, (RW(17) + 62), (u16)RW(2)); if (t) goto L_00254E54; }
SET64(16, RD(19) + RD(0));
SET32(3, RW(0) + -128);
SET32(2, RW(17) + 66);
L_00254E38:;
SET32(16, RW(16) + -1);
wr16(c, (RW(2) + 0), (u16)RW(3));
{ int t = RD(16) != RD(0); SET32(2, RW(2) + 2); if (t) { POLL(); goto L_00254E38; } }
L_00254E54:;
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
SET64(31, 0x254e94); wr32(c, (RW(17) + 136), RW(0)); F_00257820(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x254ea0); SET32(5, RW(0) + 1); F_00256730(c);
SET64(31, 0x254ea8); wr8(c, (RW(17) + 0), (u8)RW(16)); F_00247988(c);
SET64(2, RD(17) + RD(0));
L_00254EAC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00254EC8(Ctx *c) { /* func_00254EC8 */
ENTER(0x254ec8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x254ee4); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x254ef0); SET64(5, RD(17) + RD(0)); F_00254F10(c);
SET64(31, 0x254ef8); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_00254F10(Ctx *c) { /* func_00254F10 */
ENTER(0x254f10);
SET32(29, RW(29) + -32);
SET32(6, RW(5) + -1024);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET32(5, RW(16) + 1024);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x254f34); SET32(4, RW(0) + 2); F_00254BB0(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00254F50; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x254f4c); SET32(6, RW(0) + 1024); F_00263B30(c);
SET64(2, RD(17) + RD(0));
L_00254F50:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00254F68(Ctx *c) { /* func_00254F68 */
ENTER(0x254f68);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(2, (s32)rd32(c, (RW(2) + -24228)));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00254F84; }
{ u32 t = RW(2); SET64(31, 0x254f84);  rt_call(c, t); }
L_00254F84:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00254F90(Ctx *c) { /* func_00254F90 */
ENTER(0x254f90);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(2, (s32)rd32(c, (RW(2) + -24224)));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00254FAC; }
{ u32 t = RW(2); SET64(31, 0x254fac);  rt_call(c, t); }
L_00254FAC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00254FB8(Ctx *c) { /* func_00254FB8 */
ENTER(0x254fb8);
SET64(2, (s64)(s32)0x400000);
SET32(29, RW(29) + -16);
SET64(2, (s32)rd32(c, (RW(2) + -24216)));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00254FD4; }
{ u32 t = RW(2); SET64(31, 0x254fd4);  rt_call(c, t); }
L_00254FD4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00254FE0(Ctx *c) { /* func_00254FE0 */
ENTER(0x254fe0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x254ff4); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x254ffc); SET64(4, RD(16) + RD(0)); F_00255010(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00255010(Ctx *c) { /* adxt_Destroy */
ENTER(0x255010);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_00255058; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -20256);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00248E98(c); return; }
L_00255058:;
SET64(31, 0x255060);  F_00254F68(c);
SET64(31, 0x255068); SET64(4, RD(17) + RD(0)); F_00254F90(c);
SET64(31, 0x255070); SET64(4, RD(17) + RD(0)); F_00254FB8(c);
SET64(3, (s8)rd8(c, (RW(17) + 0)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(17) + 12))); goto L_0025508C; }
SET64(31, 0x255088); SET64(4, RD(17) + RD(0)); F_00255638(c);
SET64(4, (s32)rd32(c, (RW(17) + 12)));
L_0025508C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002550A0; }
SET64(31, 0x25509c); wr32(c, (RW(17) + 12), RW(0)); F_0024EB80(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002550A0:;
if (RD(4) == RD(0)) { SET64(16, (s32)rd32(c, (RW(17) + 8))); goto L_002550B4; }
SET64(31, 0x2550b0); wr32(c, (RW(17) + 4), RW(0)); F_0024F0D0(c);
SET64(16, (s32)rd32(c, (RW(17) + 8)));
L_002550B4:;
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002550D4; }
wr32(c, (RW(17) + 8), RW(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2550cc); SET64(6, RD(0) + RD(0)); F_00253710(c);
SET64(31, 0x2550d4); SET64(4, RD(16) + RD(0)); F_002530B0(c);
L_002550D4:;
SET64(4, (s32)rd32(c, (RW(17) + 148)));
{ int t = RD(4) == RD(0);  if (t) goto L_002550E8; }
SET64(31, 0x2550e8); wr32(c, (RW(17) + 148), RW(0)); F_00261B48(c);
L_002550E8:;
SET64(31, 0x2550f0);  F_00247970(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { SET64(2, (s8)rd8(c, (RW(17) + 3))); goto L_00255114; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(17) + 16), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x255110);  rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(17) + 3)));
L_00255114:;
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002551A0; }
SET32(18, RW(17) + 128);
SET32(16, RW(17) + 120);
L_00255128:;
SET64(3, (s32)rd32(c, (RW(16) + -96)));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_00255148; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
wr32(c, (RW(16) + -96), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x255148);  rt_call(c, t); }
L_00255148:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 0))); goto L_0025516C; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(16) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x255168);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
L_0025516C:;
if (RD(4) == RD(0)) { SET64(2, (s8)rd8(c, (RW(17) + 3))); goto L_0025518C; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(18) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x255188);  rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(17) + 3)));
L_0025518C:;
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 4);
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_00255128; } }
L_002551A0:;
SET64(4, (s32)rd32(c, (RW(17) + 116)));
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002551B8; }
SET64(31, 0x2551b4); wr32(c, (RW(17) + 116), RW(0)); F_002439E0(c);
SET64(4, RD(17) + RD(0));
L_002551B8:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x2551c4); SET32(6, RW(0) + 196); F_001273D0(c);
wr8(c, (RW(17) + 0), (u8)RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00247988(c); return; }
}

void F_002551E8(Ctx *c) { /* func_002551E8 */
ENTER(0x2551e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2551f8);  F_002479A0(c);
SET64(31, 0x255200);  F_00255210(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00255210(Ctx *c) { /* func_00255210 */
ENTER(0x255210);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -9216);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
L_00255238:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00255250; }
SET64(31, 0x25524c); SET64(4, RD(16) + RD(0)); F_00255010(c);
SET32(17, RW(17) + -1);
L_00255250:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 196); if (t) { POLL(); goto L_00255238; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00255270(Ctx *c) { /* func_00255270 */
ENTER(0x255270);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x255280);  F_002479A0(c);
SET64(31, 0x255288);  F_00255298(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00255298(Ctx *c) { /* func_00255298 */
ENTER(0x255298);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00255210(c); return; }
}

void F_002552B0(Ctx *c) { /* func_002552B0 */
ENTER(0x2552b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s8)rd8(c, (RW(16) + 3)));
{ int t = RSD(2) <= 0; SET64(19, RD(5) + RD(0)); if (t) goto L_0025530C; }
SET32(17, RW(16) + 24);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
L_002552E8:;
SET32(17, RW(17) + 4);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(3); SET64(31, 0x2552fc); SET32(18, RW(18) + 1); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(16) + 3)));
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_002552E8; } }
L_0025530C:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x255318); SET64(5, RD(19) + RD(0)); F_0024F138(c);
wr32(c, (RW(16) + 20), RW(19));
SET64(31, 0x255324); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_0024F1F8(c);
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
SET64(2, (s32)rd32(c, (RW(3) + -9224)));
{ int t = RD(4) == RD(0); wr32(c, (RW(16) + 160), RW(2)); if (t) goto L_00255380; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00243A38(c); return; }
L_00255380:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002553A0(Ctx *c) { /* func_002553A0 */
ENTER(0x2553a0);
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
SET64(31, 0x2553e8); SET32(6, RW(6) << 11); F_00253FC8(c);
SET64(3, (s64)(s32)0x400000);
SET64(5, (s32)rd32(c, (RW(3) + -24248)));
SET64(31, 0x2553f8); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00253770(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(6, RD(0) + RD(0));
SET64(31, 0x255408); SET64(5, RD(0) + RD(0)); F_00253710(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x255414); SET64(5, RD(0) + RD(0)); F_00253400(c);
SET64(31, 0x25541c); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_002535F8(c);
SET64(31, 0x255424); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_002532C8(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(5, RD(20) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(18) + RD(0));
SET64(31, 0x25543c); SET64(8, RD(17) + RD(0)); F_00253138(c);
SET64(31, 0x255444); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_002534F0(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_002552B0(c); return; }
}

void F_00255470(Ctx *c) { /* func_00255470 */
ENTER(0x255470);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25548c); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x255498); SET64(5, RD(17) + RD(0)); F_002554B0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_002554B0(Ctx *c) { /* adxt_StartSj */
ENTER(0x2554b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_002554D4; }
{ int t = RD(17) != RD(0);  if (t) goto L_002554F0; }
L_002554D4:;
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -20216);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00248E98(c); return; }
L_002554F0:;
SET64(31, 0x2554f8);  F_00255638(c);
SET64(31, 0x255500);  F_00247970(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x25550c); SET64(5, RD(17) + RD(0)); F_002552B0(c);
SET32(2, RW(0) + 3);
wr8(c, (RW(16) + 2), (u8)RW(2));
SET64(4, RD(16) + RD(0));
SET64(31, 0x255520); SET32(5, RW(0) + 1); F_00257820(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00247988(c); return; }
}

void F_00255538(Ctx *c) { /* func_00255538 */
ENTER(0x255538);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25554c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x255554); SET64(4, RD(16) + RD(0)); F_00255568(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00255568(Ctx *c) { /* func_00255568 */
ENTER(0x255568);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25557c); SET64(16, RD(4) + RD(0)); F_00247970(c);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x255588); SET64(5, RD(0) + RD(0)); F_0024EBE8(c);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x255594); SET64(5, RD(0) + RD(0)); F_0024EC00(c);
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x2555a0); SET32(5, RW(0) + 1); F_00265558(c);
SET64(31, 0x2555a8); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_0024F228(c);
SET64(3, (s8)rd8(c, (RW(16) + 2)));
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(16) + 116))); goto L_002555DC; }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 116))); goto L_002555DC; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(16) + 20), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x2555d8);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 116)));
L_002555DC:;
if (RD(4) == RD(0)) { wr8(c, (RW(16) + 172), (u8)RW(0)); goto L_002555F0; }
SET64(31, 0x2555ec);  F_00243BD8(c);
wr8(c, (RW(16) + 172), (u8)RW(0));
L_002555F0:;
wr32(c, (RW(16) + 20), RW(0));
wr8(c, (RW(16) + 1), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00247988(c); return; }
}

void F_00255608(Ctx *c) { /* func_00255608 */
ENTER(0x255608);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25561c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x255624); SET64(4, RD(16) + RD(0)); F_00255638(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00255638(Ctx *c) { /* adxt_Stop */
ENTER(0x255638);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00255670; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -20176);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00248E98(c); return; }
L_00255670:;
SET64(2, (s64)(s32)0x400000);
SET32(17, RW(2) + -24220);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_0025569C; }
SET64(31, 0x25568c); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_0024F228(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
{ u32 t = RW(2); SET64(31, 0x255698); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_0025569C:;
if (RD(4) == RD(0)) { SET64(3, (s8)rd8(c, (RW(16) + 2))); goto L_002556B0; }
SET64(31, 0x2556ac);  F_002532C8(c);
SET64(3, (s8)rd8(c, (RW(16) + 2)));
L_002556B0:;
SET32(2, RW(0) + 4);
if (RD(3) != RD(2)) { SET64(4, RD(16) + RD(0)); goto L_002556E4; }
SET64(31, 0x2556c4); SET64(4, (s32)rd32(c, (RW(16) + 148))); F_00261E08(c);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002556E0; }
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(3); SET64(31, 0x2556e0);  rt_call(c, t); }
L_002556E0:;
SET64(4, RD(16) + RD(0));
L_002556E4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00255568(c); return; }
}

void F_002556F8(Ctx *c) { /* func_002556F8 */
ENTER(0x2556f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25570c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x255714); SET64(4, RD(16) + RD(0)); F_00255730(c);
SET64(31, 0x25571c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00255730(Ctx *c) { /* adxt_GetStat */
ENTER(0x255730);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00255750; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x255748); SET32(4, RW(4) + -20136); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_00255754;
L_00255750:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
L_00255754:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00255760(Ctx *c) { /* func_00255760 */
ENTER(0x255760);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x255774); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x25577c); SET64(4, RD(16) + RD(0)); F_00255790(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00255790(Ctx *c) { /* func_00255790 */
ENTER(0x255790);
SET32(2, RW(0) + 1);
if (RD(4) != RD(2)) { SET32(2, RW(0) + 2); goto L_002557A8; }
SET64(3, (s64)(s32)0x400000);
SET32(2, RW(0) + 5994); goto L_002557B8;
L_002557A8:;
if (RD(4) != RD(2)) { SET64(2, (s64)(s32)0x400000); goto L_002557C0; }
SET64(3, (s64)(s32)0x400000);
SET32(2, RW(0) + 5000);
L_002557B8:;
wr32(c, (RW(3) + -24168), RW(2));
SET64(2, (s64)(s32)0x400000);
L_002557C0:;
wr32(c, (RW(2) + -24244), RW(4)); return;
}

void F_002557C8(Ctx *c) { /* func_002557C8 */
ENTER(0x2557c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2557ec); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2557fc); SET64(6, RD(18) + RD(0)); F_00255818(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00255818(Ctx *c) { /* func_00255818 */
ENTER(0x255818);
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
{ int t = RD(2) == RD(0); SET32(3, RSW(3) >> 24); if (t) goto L_00255860; }
SET64(31, 0x255858); SET64(4, (s32)rd32(c, (RW(16) + 12))); F_0024EC18(c);
SET64(3, (s32)rd32(c, (RW(16) + 136))); goto L_002558BC;
L_00255860:;
SET32(2, RW(0) + 5);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 1); goto L_002558B0; }
SET64(31, 0x255874); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002502A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x255880); wr32(c, (RW(17) + 0), RW(2)); F_00250228(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x25588c); wr32(c, (RW(18) + 0), RW(2)); F_00250258(c);
SET32(3, RW(0) + 16);
div_s(c, 0, RSW(3), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x255898); goto L_0025589C; }
L_0025589C:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(3, c->lo.d[0]);
mul_s(c, 0, 2, RSW(2), RSW(3));
wr32(c, (RW(17) + 0), RW(2)); goto L_002558B8;
L_002558B0:;
wr32(c, (RW(17) + 0), RW(0));
wr32(c, (RW(18) + 0), RW(2));
L_002558B8:;
SET64(3, (s32)rd32(c, (RW(16) + 136)));
L_002558BC:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) + RW(3));
SET64(18, rd64(c, (RW(29) + 16)));
wr32(c, (RW(17) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 24)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void F_002558E0(Ctx *c) { /* func_002558E0 */
ENTER(0x2558e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x255904); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x255914); SET64(6, RD(18) + RD(0)); F_00255930(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00255930(Ctx *c) { /* func_00255930 */
ENTER(0x255930);
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
{ int t = RD(2) == RD(0); SET32(3, RSW(3) >> 24); if (t) goto L_002559C0; }
SET64(31, 0x255974); SET64(4, (s32)rd32(c, (RW(18) + 4))); F_00250228(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x255980); wr32(c, (RW(16) + 0), RW(2)); F_00250090(c);
SET64(4, (s32)rd32(c, (RW(18) + 12)));
SET64(31, 0x25598c); SET64(17, RD(2) + RD(0)); F_0024EC30(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x25599c); SET64(16, RD(2) + RD(0)); F_00256B40(c);
SET64(3, (s32)rd32(c, (RW(18) + 168)));
SET64(4, (s32)rd32(c, (RW(18) + 164)));
SET32(16, RW(16) - RW(3));
SET32(16, RW(16) + RW(2));
SET32(17, RW(17) - RW(16));
SET32(17, RW(17) + RW(4));
wr32(c, (RW(19) + 0), RW(17)); goto L_00255A28;
L_002559C0:;
SET32(2, RW(0) + 5);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 1); goto L_00255A20; }
SET64(31, 0x2559d4); SET64(4, (s32)rd32(c, (RW(18) + 4))); F_002502A0(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x2559e0); wr32(c, (RW(19) + 0), RW(2)); F_00250228(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x2559ec); wr32(c, (RW(16) + 0), RW(2)); F_00250258(c);
SET32(3, RW(0) + 16);
div_s(c, 0, RSW(3), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x2559f8); goto L_002559FC; }
L_002559FC:;
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(3, c->lo.d[0]);
mul_s(c, 0, 2, RSW(2), RSW(3));
wr32(c, (RW(19) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 164)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(19) + 0), RW(2)); goto L_00255A28;
L_00255A20:;
wr32(c, (RW(19) + 0), RW(0));
wr32(c, (RW(16) + 0), RW(2));
L_00255A28:;
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

void F_00255A60(Ctx *c) { /* func_00255A60 */
ENTER(0x255a60);
SET64(3, (s64)(s32)0x400000);
SET32(3, RW(3) + -24212);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2)); return;
}

void F_00255A78(Ctx *c) { /* func_00255A78 */
ENTER(0x255a78);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x255a9c); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x255aac); SET64(6, RD(18) + RD(0)); F_00255AC8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00255AC8(Ctx *c) { /* adxt_GetTime */
ENTER(0x255ac8);
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
{ int t = RD(18) == RD(0); wr64(c, (RW(29) + 72), RD(31)); if (t) goto L_00255B0C; }
if (RD(19) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_00255B10; }
{ int t = RD(21) != RD(0); SET64(16, (s64)(s32)0x400000); if (t) goto L_00255B20; }
L_00255B0C:;
SET64(4, (s64)(s32)0x4b0000);
L_00255B10:;
SET64(31, 0x255b18); SET32(4, RW(4) + -20096); F_00248E98(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00255D98;
L_00255B20:;
SET64(2, (s32)rd32(c, (RW(16) + -24244)));
{ int t = RD(2) != RD(0); SET64(17, (s64)(s32)0x400000); if (t) goto L_00255B40; }
SET64(31, 0x255b34);  F_00255930(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00255D98;
L_00255B40:;
wr32(c, (RW(17) + -24164), RW(0));
SET64(3, rd8(c, (RW(18) + 1)));
SET32(2, RW(3) + -3);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET32(2, RW(3) << 24); if (t) goto L_00255CD8; }
SET64(2, (s8)rd8(c, (RW(18) + 114)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 156))); goto L_00255B90; }
SET64(2, (s64)(s32)0x3f0000);
SET64(4, (s32)rd32(c, (RW(18) + 160)));
SET64(3, (s32)rd32(c, (RW(2) + -9224)));
SET64(5, (s32)rd32(c, (RW(18) + 156)));
SET32(3, RW(3) - RW(4));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
L_00255B90:;
wr32(c, (RW(19) + 0), RW(2));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET64(4, RD(18) + RD(0));
SET64(31, 0x255ba8); SET64(22, (s64)(s32)0x400000); F_00255930(c);
c->f[1].u = rd32(c, (RW(19) + 0));
c->f[1].f = (f32)(s32)c->f[1].u;
SET32(20, RW(22) + -24168);
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
{ int t = c->fcc; wr32(c, (RW(17) + -24164), c->f[1].u); if (t) goto L_00255C28; }
SET64(1, (s64)(s32)0xc2700000);
c->f[0].u = RW(1);
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(2, (s32)rd32(c, (RW(18) + 136))); goto L_00255D80; }
L_00255C28:;
SET64(2, (s64)(s32)0x400000);
SET32(4, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(2) + -24208)));
{ int t = RD(3) != RD(4); SET32(16, RW(16) + -24244); if (t) goto L_00255C68; }
SET64(5, RD(29) + RD(0));
SET64(17, (s32)rd32(c, (RW(16) + 0)));
SET32(6, RW(29) + 4);
wr32(c, (RW(16) + 0), RW(0));
SET64(31, 0x255c54); SET64(4, RD(18) + RD(0)); F_00255AC8(c);
SET64(31, 0x255c5c); wr32(c, (RW(16) + 0), RW(17)); F_00255A60(c);
SET64(7, (s32)rd32(c, (RW(20) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, (s32)rd32(c, (RW(29) + 4)));
L_00255C68:;
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
if (!c->fcc) { wr32(c, (RW(18) + 156), RW(3)); goto L_00255CC4; }
c->f[0].f = fpu(F(0) - F(3));
SET64(2, (s64)(s32)0x80000000);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[1].u);
SET64(3, RD(3) | RD(2));
wr32(c, (RW(18) + 156), RW(3));
L_00255CC4:;
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + -9224)));
wr32(c, (RW(18) + 160), RW(2)); goto L_00255D7C;
L_00255CD8:;
SET32(3, RW(0) + 5);
SET32(2, RSW(2) >> 24);
if (RD(2) != RD(3)) { wr32(c, (RW(19) + 0), RW(0)); goto L_00255D78; }
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x255cf4); SET64(22, (s64)(s32)0x400000); F_002502A0(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x255d00); wr32(c, (RW(29) + 0), RW(2)); F_00250228(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x255d0c); wr32(c, (RW(29) + 4), RW(2)); F_00250258(c);
SET32(3, RW(0) + 16);
div_s(c, 0, RSW(3), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x255d18); goto L_00255D1C; }
L_00255D1C:;
SET64(2, (s32)rd32(c, (RW(29) + 0)));
c->f[2].u = rd32(c, (RW(29) + 4));
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[1].u = rd32(c, (RW(22) + -24168));
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
wr32(c, (RW(19) + 0), RW(3)); goto L_00255D7C;
L_00255D78:;
SET64(22, (s64)(s32)0x400000);
L_00255D7C:;
SET64(2, (s32)rd32(c, (RW(18) + 136)));
L_00255D80:;
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET32(3, RW(3) + RW(2));
wr32(c, (RW(19) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(22) + -24168)));
wr32(c, (RW(21) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 16)));
L_00255D98:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_00255DC0(Ctx *c) { /* func_00255DC0 */
ENTER(0x255dc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x255dd4); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x255ddc); SET64(4, RD(16) + RD(0)); F_00255DF8(c);
SET64(31, 0x255de4); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00255DF8(Ctx *c) { /* func_00255DF8 */
ENTER(0x255df8);
SET32(29, RW(29) + -32);
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x255e0c); SET32(6, RW(29) + 4); F_00255AC8(c);
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

void F_00255E48(Ctx *c) { /* func_00255E48 */
ENTER(0x255e48);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x255e5c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x255e64); SET64(4, RD(16) + RD(0)); F_00255E80(c);
SET64(31, 0x255e6c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00255E80(Ctx *c) { /* adxt_GetNumSmpl */
ENTER(0x255e80);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00255EA0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x255e98); SET32(4, RW(4) + -20056); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_00255EC0;
L_00255EA0:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
SET64(2, RSD(2) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00255EC0; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002502A0(c); return; }
L_00255EC0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00255ED0(Ctx *c) { /* func_00255ED0 */
ENTER(0x255ed0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x255ee4); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x255eec); SET64(4, RD(16) + RD(0)); F_00255F08(c);
SET64(31, 0x255ef4); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00255F08(Ctx *c) { /* adxt_GetSfreq */
ENTER(0x255f08);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00255F28; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x255f20); SET32(4, RW(4) + -20008); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_00255F48;
L_00255F28:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
SET64(2, RSD(2) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00255F48; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00250228(c); return; }
L_00255F48:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00255F58(Ctx *c) { /* func_00255F58 */
ENTER(0x255f58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x255f6c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x255f74); SET64(4, RD(16) + RD(0)); F_00255F90(c);
SET64(31, 0x255f7c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00255F90(Ctx *c) { /* adxt_GetNumChan */
ENTER(0x255f90);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00255FB0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x255fa8); SET32(4, RW(4) + -19960); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_00255FD0;
L_00255FB0:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
SET64(2, RSD(2) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00255FD0; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00250240(c); return; }
L_00255FD0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00255FE0(Ctx *c) { /* func_00255FE0 */
ENTER(0x255fe0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x255ff4); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x255ffc); SET64(4, RD(16) + RD(0)); F_00256018(c);
SET64(31, 0x256004); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256018(Ctx *c) { /* adxt_GetHdrLen */
ENTER(0x256018);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00256038; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x256030); SET32(4, RW(4) + -19912); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_00256058;
L_00256038:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
SET64(2, RSD(2) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00256058; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002504A8(c); return; }
L_00256058:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256068(Ctx *c) { /* func_00256068 */
ENTER(0x256068);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25607c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x256084); SET64(4, RD(16) + RD(0)); F_002560A0(c);
SET64(31, 0x25608c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002560A0(Ctx *c) { /* adxt_GetFmtBps */
ENTER(0x2560a0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002560C0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2560b8); SET32(4, RW(4) + -19864); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_002560E0;
L_002560C0:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
SET64(2, RSD(2) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002560E0; }
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002504B0(c); return; }
L_002560E0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002560F0(Ctx *c) { /* func_002560F0 */
ENTER(0x2560f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x256114); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x256124); SET64(6, RD(18) + RD(0)); F_00256140(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00256140(Ctx *c) { /* adxt_SetOutPan */
ENTER(0x256140);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_00256190; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -19816);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00248E98(c); return; }
L_00256190:;
SET64(3, (s8)rd8(c, (RW(16) + 173)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET64(17, RD(0) + RD(0)); if (t) goto L_002561BC; }
SET64(31, 0x2561a8); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002503E8(c);
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + -128);
{ int t = RD(17) != RD(2); SET64(3, (s64)(s32)0x3f0000); if (t) goto L_002561C0; }
SET64(17, RD(0) + RD(0));
L_002561BC:;
SET64(3, (s64)(s32)0x3f0000);
L_002561C0:;
SET64(2, (s32)rd32(c, (RW(3) + -9232)));
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_002561FC; }
SET32(2, RW(0) + -128);
if (RD(19) != RD(2)) { SET32(6, RW(19) + RW(17)); goto L_002561FC; }
SET64(31, 0x2561e0); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00250240(c);
SET32(3, RW(0) + 2);
if (RD(2) != RD(3)) { SET64(6, RD(0) + RD(0)); goto L_002561F8; }
SET32(2, RW(0) + 15);
SET32(6, RW(0) + -15);
if (RD(18) != 0) SET64(6, RD(2));
L_002561F8:;
SET32(6, RW(6) + RW(17));
L_002561FC:;
SET32(2, RW(18) << 1);
SET32(2, RW(2) + RW(16));
wr16(c, (RW(2) + 66), (u16)RW(19));
SET64(3, (s8)rd8(c, (RW(16) + 3)));
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00256230; }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x256224); SET64(5, RD(18) + RD(0)); F_0024ED10(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0025623C;
L_00256230:;
SET64(31, 0x256238); SET32(4, RW(4) + -19768); F_00248E98(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_0025623C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00256258(Ctx *c) { /* func_00256258 */
ENTER(0x256258);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x256274); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x256280); SET64(5, RD(17) + RD(0)); F_002562A0(c);
SET64(31, 0x256288); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_002562A0(Ctx *c) { /* adxt_GetOutPan */
ENTER(0x2562a0);
SET32(29, RW(29) + -16);
SET32(3, RW(5) << 1);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002562C8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2562bc); SET32(4, RW(4) + -19720); F_00248E98(c);
SET64(2, RD(0) + RD(0)); goto L_002562D0;
L_002562C8:;
SET32(3, RW(3) + RW(4));
SET64(2, (s16)rd16(c, (RW(3) + 66)));
L_002562D0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002562E0(Ctx *c) { /* func_002562E0 */
ENTER(0x2562e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2562fc); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x256308); SET64(5, RD(17) + RD(0)); F_00256320(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00256320(Ctx *c) { /* adxt_SetOutBalance */
ENTER(0x256320);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00256340; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -19672);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_00256340:;
SET64(2, RSD(5) < (s64)-15);
{ int t = RD(2) == RD(0); SET64(2, RSD(5) < (s64)16); if (t) goto L_00256358; }
SET32(2, RW(0) + -15);
wr16(c, (RW(4) + 70), (u16)RW(2)); goto L_00256368;
L_00256358:;
if (RD(2) != RD(0)) { wr16(c, (RW(4) + 70), (u16)RW(5)); goto L_00256368; }
SET32(2, RW(0) + 15);
wr16(c, (RW(4) + 70), (u16)RW(2));
L_00256368:;
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(2) + -9232)));
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(4) + 12))); goto L_00256390; }
SET64(5, (s16)rd16(c, (RW(4) + 70)));
SET64(31, 0x256384); SET64(4, (s32)rd32(c, (RW(4) + 12))); F_0024ED28(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_0025639C;
L_00256390:;
SET64(31, 0x256398); SET32(5, RW(0) + -128); F_0024ED28(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0025639C:;
SET32(29, RW(29) + 16); return;
}

void F_002563A8(Ctx *c) { /* func_002563A8 */
ENTER(0x2563a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2563bc); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x2563c4); SET64(4, RD(16) + RD(0)); F_002563E0(c);
SET64(31, 0x2563cc); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002563E0(Ctx *c) { /* adxt_GetOutBalance */
ENTER(0x2563e0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00256400; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2563f8); SET32(4, RW(4) + -19624); F_00248E98(c);
SET64(2, RD(0) + RD(0)); goto L_00256404;
L_00256400:;
SET64(2, (s16)rd16(c, (RW(4) + 70)));
L_00256404:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256410(Ctx *c) { /* func_00256410 */
ENTER(0x256410);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25642c); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x256438); SET64(5, RD(17) + RD(0)); F_00256450(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00256450(Ctx *c) { /* adxt_SetOutVol */
ENTER(0x256450);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00256480; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -19576);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_00256480:;
SET64(3, (s8)rd8(c, (RW(16) + 173)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); wr16(c, (RW(16) + 64), (u16)RW(5)); if (t) goto L_002564A0; }
SET64(31, 0x256498); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00250390(c);
SET64(5, (s16)rd16(c, (RW(16) + 64))); goto L_002564A8;
L_002564A0:;
SET64(2, RD(0) + RD(0));
SET64(5, (s16)rd16(c, (RW(16) + 64)));
L_002564A8:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(5, RW(5) + RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024ECF8(c); return; }
}

void F_002564C0(Ctx *c) { /* func_002564C0 */
ENTER(0x2564c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2564d4); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x2564dc); SET64(4, RD(16) + RD(0)); F_002564F8(c);
SET64(31, 0x2564e4); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002564F8(Ctx *c) { /* adxt_GetOutVol */
ENTER(0x2564f8);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00256518; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x256510); SET32(4, RW(4) + -19528); F_00248E98(c);
SET64(2, RD(0) + RD(0)); goto L_0025651C;
L_00256518:;
SET64(2, (s16)rd16(c, (RW(4) + 64)));
L_0025651C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256528(Ctx *c) { /* func_00256528 */
ENTER(0x256528);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25653c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x256544); SET64(4, RD(16) + RD(0)); F_00256560(c);
SET64(31, 0x25654c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256560(Ctx *c) { /* func_00256560 */
ENTER(0x256560);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x256570); SET64(4, (s32)rd32(c, (RW(4) + 4))); F_00250390(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256580(Ctx *c) { /* func_00256580 */
ENTER(0x256580);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25659c); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2565a8); SET64(5, RD(17) + RD(0)); F_002565C8(c);
SET64(31, 0x2565b0); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_002565C8(Ctx *c) { /* func_002565C8 */
ENTER(0x2565c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2565d8); SET64(4, (s32)rd32(c, (RW(4) + 4))); F_002503E8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002565E8(Ctx *c) { /* func_002565E8 */
ENTER(0x2565e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2565fc); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x256604); SET64(4, RD(16) + RD(0)); F_00256620(c);
SET64(31, 0x25660c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256620(Ctx *c) { /* func_00256620 */
ENTER(0x256620);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00250450(c); return; }
}

void F_00256638(Ctx *c) { /* func_00256638 */
ENTER(0x256638);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25664c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x256654); SET64(4, RD(16) + RD(0)); F_00256670(c);
SET64(31, 0x25665c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256670(Ctx *c) { /* func_00256670 */
ENTER(0x256670);
SET32(29, RW(29) + -48);
SET32(5, RW(0) + 2048);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, (s64)(s32)0x520000);
SET32(16, RW(16) + 20504);
SET32(6, RW(29) + 20);
SET64(7, RD(16) + RD(0));
SET32(8, RW(29) + 16);
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x25669c); SET64(9, RD(29) + RD(0)); F_002481C8(c);
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 20)));
SET64(31, rd64(c, (RW(29) + 40)));
if (RD(3) != 0) SET64(2, RD(16));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002566B8(Ctx *c) { /* func_002566B8 */
ENTER(0x2566b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2566d4); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2566e0); SET64(5, RD(17) + RD(0)); F_00256730(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_002566F8(Ctx *c) { /* func_002566F8 */
ENTER(0x2566f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25670c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x256714); SET64(4, RD(16) + RD(0)); F_00256738(c);
SET64(31, 0x25671c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256730(Ctx *c) { /* func_00256730 */
ENTER(0x256730);
wr8(c, (RW(4) + 173), (u8)RW(5)); return;
}

void F_00256738(Ctx *c) { /* func_00256738 */
ENTER(0x256738);
SET64(2, (s8)rd8(c, (RW(4) + 173))); return;
}

void F_00256740(Ctx *c) { /* func_00256740 */
ENTER(0x256740);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256754); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x25675c); SET64(4, RD(16) + RD(0)); F_00256770(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00256770(Ctx *c) { /* func_00256770 */
ENTER(0x256770);
SET64(2, (s64)(s32)0x400000);
SET64(3, (s64)(s32)0x400000);
wr32(c, (RW(2) + -24236), RW(4));
wr32(c, (RW(3) + -24232), RW(4)); return;
}

void F_00256788(Ctx *c) { /* func_00256788 */
ENTER(0x256788);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2567a4); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2567b0); SET64(5, RD(17) + RD(0)); F_002567C8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_002567C8(Ctx *c) { /* adxt_SetSvrFreq */
ENTER(0x2567c8);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002567E8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -19480);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_002567E8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x400000);
wr32(c, (RW(4) + 56), RW(5));
wr32(c, (RW(2) + -24232), RW(5));
SET32(29, RW(29) + 16); return;
}

void F_00256800(Ctx *c) { /* func_00256800 */
ENTER(0x256800);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr32(c, (RW(29) + 32), c->f[20].u);
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x25682c); c->f[20].u = c->f[12].u; F_002479A0(c);
SET64(4, RD(16) + RD(0));
c->f[12].u = c->f[20].u;
SET64(5, RD(17) + RD(0));
SET64(31, 0x256840); SET64(6, RD(18) + RD(0)); F_00256860(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
c->f[20].u = rd32(c, (RW(29) + 32));
SET32(29, RW(29) + 48); { F_002479A8(c); return; }
}

void F_00256860(Ctx *c) { /* adxt_SetReloadTime */
ENTER(0x256860);
SET32(29, RW(29) + -16);
SET64(9, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(9) != RD(0); SET64(10, RD(5) + RD(0)); if (t) goto L_00256888; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -19432);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_00256888:;
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
{ int t = RD(8) == RD(0); SET32(5, RSW(5) >> 5); if (t) goto L_00256904; }
SET64(31, 0x256904);  F_00253FC8(c);
L_00256904:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256910(Ctx *c) { /* func_00256910 */
ENTER(0x256910);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256924); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x25692c); SET64(4, RD(16) + RD(0)); F_00256940(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00256940(Ctx *c) { /* adxt_ResetReloadTime */
ENTER(0x256940);
SET32(29, RW(29) + -16);
SET64(7, RD(4) + RD(0));
{ int t = RD(7) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00256968; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -19384);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_00256968:;
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
{ int t = RD(3) == RD(0); SET32(5, RSW(5) >> 5); if (t) goto L_002569B0; }
SET64(31, 0x2569b0);  F_00253FC8(c);
L_002569B0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002569C0(Ctx *c) { /* func_002569C0 */
ENTER(0x2569c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2569dc); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2569e8); SET64(5, RD(17) + RD(0)); F_00256A00(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00256A00(Ctx *c) { /* adxt_SetReloadSct */
ENTER(0x256a00);
SET32(29, RW(29) + -16);
SET64(3, RD(4) + RD(0));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00256A28; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -19336);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_00256A28:;
SET64(2, (s32)rd32(c, (RW(3) + 8)));
wr16(c, (RW(3) + 62), (u16)RW(5));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00256A4C; }
SET64(6, (s16)rd16(c, (RW(3) + 60)));
SET32(5, RW(5) << 16);
SET32(5, RSW(5) >> 5);
SET64(31, 0x256a4c); SET32(6, RW(6) << 11); F_00253FC8(c);
L_00256A4C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256A58(Ctx *c) { /* func_00256A58 */
ENTER(0x256a58);
SET64(2, (s16)rd16(c, (RW(4) + 62))); return;
}

void F_00256A60(Ctx *c) { /* func_00256A60 */
ENTER(0x256a60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256a74); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x256a7c); SET64(4, RD(16) + RD(0)); F_00256A98(c);
SET64(31, 0x256a84); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256A98(Ctx *c) { /* adxt_GetNumSctIbuf */
ENTER(0x256a98);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00256AB8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x256ab0); SET32(4, RW(4) + -19288); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_00256AEC;
L_00256AB8:;
SET64(3, (s32)rd32(c, (RW(4) + 20)));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_00256AE8; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x256ad4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(2) + 2047);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(4));
SET32(2, RSW(2) >> 11); goto L_00256AEC;
L_00256AE8:;
SET64(2, RD(0) + RD(0));
L_00256AEC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256AF8(Ctx *c) { /* func_00256AF8 */
ENTER(0x256af8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x256b14); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x256b20); SET64(5, RD(17) + RD(0)); F_00256B40(c);
SET64(31, 0x256b28); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_00256B40(Ctx *c) { /* adxt_GetNumSmplObuf */
ENTER(0x256b40);
SET32(29, RW(29) + -16);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00256B54; }
{ int t = RSD(5) >= 0; SET32(2, RW(5) << 2); if (t) goto L_00256B68; }
L_00256B54:;
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x256b60); SET32(4, RW(4) + -19240); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_00256B9C;
L_00256B68:;
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00256B98; }
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x256b88); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(3, RW(2) >> 31);
SET32(3, RW(3) + RW(2));
SET32(2, RSW(3) >> 1); goto L_00256B9C;
L_00256B98:;
SET64(2, RD(0) + RD(0));
L_00256B9C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256BA8(Ctx *c) { /* func_00256BA8 */
ENTER(0x256ba8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256bc0); wr32(c, (RW(29) + 16), c->f[20].u); F_002479A0(c);
SET64(31, 0x256bc8); SET64(4, RD(16) + RD(0)); F_00256BE8(c);
SET64(31, 0x256bd0); c->f[20].u = c->f[0].u; F_002479A8(c);
SET64(16, rd64(c, (RW(29) + 0)));
c->f[0].u = c->f[20].u;
SET64(31, rd64(c, (RW(29) + 8)));
c->f[20].u = rd32(c, (RW(29) + 16));
SET32(29, RW(29) + 32); return;
}

void F_00256BE8(Ctx *c) { /* adxt_GetIbufRemainTime */
ENTER(0x256be8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr32(c, (RW(29) + 32), c->f[20].u);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
c->f[20].u = RW(0);
{ int t = RD(18) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00256C28; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x256c18); SET32(4, RW(4) + -19192); F_00248E98(c);
SET64(1, (s64)(s32)0xbf800000);
c->f[0].u = RW(1);
SET64(16, rd64(c, (RW(29) + 0))); goto L_00256CB4;
L_00256C28:;
SET64(31, 0x256c30);  F_00255730(c);
SET64(2, RSD(2) < (s64)2);
{ int t = RD(2) != RD(0); c->f[0].u = c->f[20].u; if (t) goto L_00256CB0; }
SET64(3, (s32)rd32(c, (RW(18) + 20)));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_00256CB0; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x256c58); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(31, 0x256c64); SET64(16, RD(2) + RD(0)); F_00255F90(c);
SET64(17, RD(2) + RD(0));
SET64(31, 0x256c70); SET64(4, RD(18) + RD(0)); F_00255F08(c);
SET32(3, RW(17) << 3);
SET32(3, RW(3) + RW(17));
c->f[1].u = RW(2);
c->f[1].f = (f32)(s32)c->f[1].u;
SET32(3, RW(3) << 1);
div_s(c, 0, RSW(16), RSW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x256c8c); goto L_00256C90; }
L_00256C90:;
SET64(16, c->lo.d[0]);
SET32(16, RW(16) << 5);
c->f[0].u = RW(16);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[20].f = fpu_div(F(0), F(1));
c->f[0].u = c->f[20].u;
L_00256CB0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00256CB4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
c->f[20].u = rd32(c, (RW(29) + 32));
SET32(29, RW(29) + 48); return;
}

void F_00256CD0(Ctx *c) { /* func_00256CD0 */
ENTER(0x256cd0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256ce4); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x256cec); SET64(4, RD(16) + RD(0)); F_00256D08(c);
SET64(31, 0x256cf4); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256D08(Ctx *c) { /* ADXT_IsIbufSafety */
ENTER(0x256d08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00256D30; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x256d28); SET32(4, RW(4) + -19136); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_00256D64;
L_00256D30:;
SET64(3, (s32)rd32(c, (RW(16) + 20)));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_00256D60; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x256d4c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s16)rd16(c, (RW(16) + 62)));
SET32(3, RW(3) << 11);
SET64(2, RSD(2) < RSD(3));
SET64(2, RD(2) < (u64)(s64)1); goto L_00256D64;
L_00256D60:;
SET64(2, RD(0) + RD(0));
L_00256D64:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00256D78(Ctx *c) { /* func_00256D78 */
ENTER(0x256d78);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x256d94); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x256da0); SET64(5, RD(17) + RD(0)); F_00256DB8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00256DB8(Ctx *c) { /* func_00256DB8 */
ENTER(0x256db8);
wr8(c, (RW(4) + 109), (u8)RW(5)); return;
}

void F_00256DC0(Ctx *c) { /* func_00256DC0 */
ENTER(0x256dc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256dd4); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x256ddc); SET64(4, RD(16) + RD(0)); F_00256DF8(c);
SET64(31, 0x256de4); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256DF8(Ctx *c) { /* adxt_IsCompleted */
ENTER(0x256df8);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00256E18; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x256e10); SET32(4, RW(4) + -19088); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_00256E24;
L_00256E18:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
SET64(2, RD(2) ^ 0x5);
SET64(2, RD(2) < (u64)(s64)1);
L_00256E24:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256E30(Ctx *c) { /* func_00256E30 */
ENTER(0x256e30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x256e40);  F_002479A0(c);
SET64(31, 0x256e48);  F_00256E58(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00256E58(Ctx *c) { /* func_00256E58 */
ENTER(0x256e58);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, (s64)(s32)0x400000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x256e7c); SET32(16, RW(19) + -24240); F_00247970(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(18, rd64(c, (RW(29) + 16))); if (t) goto L_00256EA0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00247988(c); return; }
L_00256EA0:;
SET32(2, RW(0) + 1);
SET32(18, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(2));
SET64(31, 0x256eb4); SET32(17, RW(0) + 15); F_00247988(c);
SET64(31, 0x256ebc);  F_00247970(c);
SET64(31, 0x256ec4);  F_00250028(c);
SET32(2, RW(0) + 2);
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(16) + 0), RW(2));
SET32(16, RW(3) + -9216);
L_00256ED8:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00256EF0; }
SET64(31, 0x256eec); SET64(4, RD(16) + RD(0)); F_00259838(c);
SET32(17, RW(17) + -1);
L_00256EF0:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 196); if (t) { POLL(); goto L_00256ED8; } }
SET32(2, RW(0) + 3);
SET32(16, RW(19) + -24240);
SET64(31, 0x256f08); wr32(c, (RW(16) + 0), RW(2)); F_0024EC98(c);
SET64(3, (s64)(s32)0x400000);
SET64(2, (s32)rd32(c, (RW(3) + -24232)));
SET64(2, RSD(2) < (s64)51);
{ int t = RD(2) == RD(0);  if (t) goto L_00256F24; }
SET64(31, 0x256f24);  F_0024EC98(c);
L_00256F24:;
wr32(c, (RW(16) + 0), RW(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00247988(c); return; }
}

void F_00256F48(Ctx *c) { /* func_00256F48 */
ENTER(0x256f48);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x256f58);  F_002479A0(c);
SET64(31, 0x256f60);  F_00256F70(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00256F70(Ctx *c) { /* func_00256F70 */
ENTER(0x256f70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00256E58(c); return; }
}

void F_00256F88(Ctx *c) { /* func_00256F88 */
ENTER(0x256f88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x256f9c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x256fa4); SET64(4, RD(16) + RD(0)); F_00256FC0(c);
SET64(31, 0x256fac); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256FC0(Ctx *c) { /* adxt_GetErrCode */
ENTER(0x256fc0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00256FE0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x256fd8); SET32(4, RW(4) + -19040); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_00256FE4;
L_00256FE0:;
SET64(2, (s16)rd16(c, (RW(4) + 96)));
L_00256FE4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00256FF0(Ctx *c) { /* func_00256FF0 */
ENTER(0x256ff0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257004); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x25700c); SET64(4, RD(16) + RD(0)); F_00257020(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00257020(Ctx *c) { /* adxt_ClearErrCode */
ENTER(0x257020);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00257040; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -18992);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_00257040:;
SET64(31, rd64(c, (RW(29) + 0)));
wr16(c, (RW(4) + 106), (u16)RW(0));
wr16(c, (RW(4) + 96), (u16)RW(0));
wr32(c, (RW(4) + 100), RW(0));
wr16(c, (RW(4) + 104), (u16)RW(0));
SET32(29, RW(29) + 16); return;
}

void F_00257060(Ctx *c) { /* func_00257060 */
ENTER(0x257060);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257074); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x25707c); SET64(4, RD(16) + RD(0)); F_00257098(c);
SET64(31, 0x257084); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00257098(Ctx *c) { /* adxt_GetLpCnt */
ENTER(0x257098);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002570B8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2570b0); SET32(4, RW(4) + -18944); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_002570BC;
L_002570B8:;
SET64(2, (s32)rd32(c, (RW(4) + 76)));
L_002570BC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002570C8(Ctx *c) { /* func_002570C8 */
ENTER(0x2570c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2570e4); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2570f0); SET64(5, RD(17) + RD(0)); F_00257108(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00257108(Ctx *c) { /* adxt_SetLpFlg */
ENTER(0x257108);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00257128; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -18896);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_00257128:;
SET64(31, rd64(c, (RW(29) + 0)));
wr8(c, (RW(4) + 108), (u8)RW(5));
SET32(29, RW(29) + 16); return;
}

void F_00257138(Ctx *c) { /* func_00257138 */
ENTER(0x257138);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25714c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x257154); SET64(4, RD(16) + RD(0)); F_00257170(c);
SET64(31, 0x25715c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00257170(Ctx *c) { /* adxt_GetInputSj */
ENTER(0x257170);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00257190; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x257188); SET32(4, RW(4) + -18848); F_00248E98(c);
SET64(2, RD(0) + RD(0)); goto L_00257194;
L_00257190:;
SET64(2, (s32)rd32(c, (RW(4) + 20)));
L_00257194:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002571A0(Ctx *c) { /* func_002571A0 */
ENTER(0x2571a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2571bc); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2571c8); SET64(5, RD(17) + RD(0)); F_002571E0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_002571E0(Ctx *c) { /* adxt_SetWaitPlayStart */
ENTER(0x2571e0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00257200; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -18800);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_00257200:;
SET64(31, rd64(c, (RW(29) + 0)));
wr8(c, (RW(4) + 112), (u8)RW(5));
SET32(29, RW(29) + 16); return;
}

void F_00257210(Ctx *c) { /* func_00257210 */
ENTER(0x257210);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257224); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x25722c); SET64(4, RD(16) + RD(0)); F_00257248(c);
SET64(31, 0x257234); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00257248(Ctx *c) { /* adxt_IsReadyPlayStart */
ENTER(0x257248);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00257268; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x257260); SET32(4, RW(4) + -18744); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_0025726C;
L_00257268:;
SET64(2, (s8)rd8(c, (RW(4) + 113)));
L_0025726C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00257278(Ctx *c) { /* func_00257278 */
ENTER(0x257278);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x257294); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2572a0); SET64(5, RD(17) + RD(0)); F_002572B8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_002572B8(Ctx *c) { /* adxt_Pause */
ENTER(0x2572b8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
{ int t = RD(18) != RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_002572F0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2572e4); SET32(4, RW(4) + -18688); F_00248E98(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_002573D0;
L_002572F0:;
SET64(2, (s8)rd8(c, (RW(18) + 114)));
{ int t = RD(16) == RD(2); SET64(17, (s8)rd8(c, (RW(18) + 1))); if (t) goto L_002573CC; }
SET64(31, 0x257304);  F_00247970(c);
SET32(2, RW(17) + -3);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); wr8(c, (RW(18) + 114), (u8)RW(16)); if (t) goto L_002573C4; }
SET32(2, RW(0) + 1);
{ int t = RD(16) != RD(2); SET64(4, (s32)rd32(c, (RW(18) + 12))); if (t) goto L_00257330; }
SET64(31, 0x257328); SET64(5, RD(0) + RD(0)); F_0024EC00(c);
SET64(16, (s64)(s32)0x400000); goto L_00257348;
L_00257330:;
SET64(31, 0x257338); SET32(5, RW(0) + 1); F_0024EC00(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(2) + -9224)));
wr32(c, (RW(18) + 160), RW(3));
SET64(16, (s64)(s32)0x400000);
L_00257348:;
SET64(4, RD(18) + RD(0));
SET32(16, RW(16) + -24244);
SET64(5, RD(29) + RD(0));
SET64(17, (s32)rd32(c, (RW(16) + 0)));
SET32(6, RW(29) + 4);
SET64(31, 0x257364); wr32(c, (RW(16) + 0), RW(0)); F_00255AC8(c);
SET64(2, (s64)(s32)0x400000);
c->f[0].u = rd32(c, (RW(29) + 0));
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(1, (s64)(s32)0x4f000000);
c->f[3].u = RW(1);
c->f[2].u = rd32(c, (RW(29) + 4));
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[1].u = rd32(c, (RW(2) + -24168));
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu_div(F(0), F(2));
c->f[0].f = fpu(F(0) * F(1));
c->fcc = F(3) <= F(0);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[1].u);
{ int t = !c->fcc; wr32(c, (RW(16) + 0), RW(17)); if (t) goto L_002573C0; }
c->f[0].f = fpu(F(0) - F(3));
SET64(2, (s64)(s32)0x80000000);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[1].u);
SET64(3, RD(3) | RD(2));
L_002573C0:;
wr32(c, (RW(18) + 156), RW(3));
L_002573C4:;
SET64(31, 0x2573cc);  F_00247988(c);
L_002573CC:;
SET64(16, rd64(c, (RW(29) + 16)));
L_002573D0:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_002573E8(Ctx *c) { /* func_002573E8 */
ENTER(0x2573e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2573fc); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x257404); SET64(4, RD(16) + RD(0)); F_00257420(c);
SET64(31, 0x25740c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00257420(Ctx *c) { /* adxt_GetStatPause */
ENTER(0x257420);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00257440; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x257438); SET32(4, RW(4) + -18648); F_00248E98(c);
SET64(2, RD(0) + RD(0)); goto L_00257444;
L_00257440:;
SET64(2, (s8)rd8(c, (RW(4) + 114)));
L_00257444:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00257450(Ctx *c) { /* func_00257450 */
ENTER(0x257450);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257464); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x25746c); SET64(4, RD(16) + RD(0)); F_00257480(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00257480(Ctx *c) { /* func_00257480 */
ENTER(0x257480);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024EDF8(c); return; }
}

void F_00257498(Ctx *c) { /* func_00257498 */
ENTER(0x257498);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2574ac);  F_002479A0(c);
SET64(31, 0x2574b4);  F_002574D0(c);
SET64(31, 0x2574bc); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002574D0(Ctx *c) { /* func_002574D0 */
ENTER(0x2574d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024EE10(c); return; }
}

void F_002574E8(Ctx *c) { /* func_002574E8 */
ENTER(0x2574e8);
 return;
}

void F_002574F0(Ctx *c) { /* func_002574F0 */
ENTER(0x2574f0);
 return;
}

void F_002574F8(Ctx *c) { /* func_002574F8 */
ENTER(0x2574f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25750c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x257514); SET64(4, RD(16) + RD(0)); F_00257530(c);
SET64(31, 0x25751c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00257530(Ctx *c) { /* func_00257530 */
ENTER(0x257530);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void F_00257538(Ctx *c) { /* func_00257538 */
ENTER(0x257538);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25754c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x257554); SET64(4, RD(16) + RD(0)); F_00257568(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00257568(Ctx *c) { /* func_00257568 */
ENTER(0x257568);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024F1C8(c); return; }
}

void F_00257580(Ctx *c) { /* func_00257580 */
ENTER(0x257580);
 return;
}

void F_00257588(Ctx *c) { /* func_00257588 */
ENTER(0x257588);
SET64(2, RD(0) + RD(0)); return;
}

void F_00257590(Ctx *c) { /* func_00257590 */
ENTER(0x257590);
 return;
}

void F_00257598(Ctx *c) { /* func_00257598 */
ENTER(0x257598);
 return;
}

void F_002575A0(Ctx *c) { /* func_002575A0 */
ENTER(0x2575a0);
 return;
}

void F_002575A8(Ctx *c) { /* func_002575A8 */
ENTER(0x2575a8);
 return;
}

void F_002575B0(Ctx *c) { /* func_002575B0 */
ENTER(0x2575b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00248E70(c); return; }
}

void F_002575C8(Ctx *c) { /* func_002575C8 */
ENTER(0x2575c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2575e4); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2575f0); SET64(5, RD(17) + RD(0)); F_00257610(c);
SET64(31, 0x2575f8); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_00257610(Ctx *c) { /* func_00257610 */
ENTER(0x257610);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 48), RD(31));
SET64(3, (s8)rd8(c, (RW(19) + 114)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002576D8; }
SET64(4, (s32)rd32(c, (RW(19) + 12)));
SET64(16, (s64)(s32)0x400000);
SET64(31, 0x257648); SET32(16, RW(16) + -24244); F_0024EDD0(c);
SET64(31, 0x257650); SET64(18, RD(2) + RD(0)); F_00256E30(c);
SET64(17, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(29) + RD(0));
wr32(c, (RW(16) + 0), RW(0));
SET64(4, RD(19) + RD(0));
SET64(31, 0x257668); SET32(6, RW(29) + 4); F_00255AC8(c);
SET64(2, (s64)(s32)0x400000);
c->f[0].u = rd32(c, (RW(29) + 0));
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(1, (s64)(s32)0x4f000000);
c->f[3].u = RW(1);
c->f[2].u = rd32(c, (RW(29) + 4));
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[1].u = rd32(c, (RW(2) + -24168));
c->f[1].f = (f32)(s32)c->f[1].u;
wr32(c, (RW(16) + 0), RW(17));
c->f[0].f = fpu_div(F(0), F(2));
c->f[0].f = fpu(F(0) * F(1));
c->fcc = F(3) <= F(0);
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[1].u);
{ int t = !c->fcc; SET64(2, RD(18) + RD(0)); if (t) goto L_002576C8; }
c->f[0].f = fpu(F(0) - F(3));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[1].u);
SET64(3, (s64)(s32)0x80000000);
SET64(4, RD(4) | RD(3));
L_002576C8:;
wr32(c, (RW(19) + 156), RW(4));
SET64(3, (s64)(s32)0x3f0000);
SET64(4, (s32)rd32(c, (RW(3) + -9224)));
wr32(c, (RW(19) + 160), RW(4));
L_002576D8:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_002576F8(Ctx *c) { /* func_002576F8 */
ENTER(0x2576f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25770c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x257714); SET64(4, RD(16) + RD(0)); F_00257730(c);
SET64(31, 0x25771c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00257730(Ctx *c) { /* func_00257730 */
ENTER(0x257730);
SET64(2, (s32)rd32(c, (RW(4) + 136))); return;
}

void F_00257738(Ctx *c) { /* func_00257738 */
ENTER(0x257738);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x257754); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x257760); SET64(5, RD(17) + RD(0)); F_00257778(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00257778(Ctx *c) { /* func_00257778 */
ENTER(0x257778);
wr32(c, (RW(4) + 136), RW(5)); return;
}

void F_00257780(Ctx *c) { /* func_00257780 */
ENTER(0x257780);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25779c); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2577a8); SET64(5, RD(17) + RD(0)); F_002577C8(c);
SET64(31, 0x2577b0); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_002577C8(Ctx *c) { /* func_002577C8 */
ENTER(0x2577c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00250160(c); return; }
}

void F_002577E0(Ctx *c) { /* func_002577E0 */
ENTER(0x2577e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2577fc); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x257808); SET64(5, RD(17) + RD(0)); F_00257820(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00257820(Ctx *c) { /* func_00257820 */
ENTER(0x257820);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
wr8(c, (RW(4) + 152), (u8)RW(5));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00257848; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002500C0(c); return; }
L_00257848:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00257858(Ctx *c) { /* func_00257858 */
ENTER(0x257858);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x25786c); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x257874); SET64(4, RD(16) + RD(0)); F_00257890(c);
SET64(31, 0x25787c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00257890(Ctx *c) { /* func_00257890 */
ENTER(0x257890);
SET64(2, (s8)rd8(c, (RW(4) + 152))); return;
}

void F_00257898(Ctx *c) { /* func_00257898 */
ENTER(0x257898);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2578bc); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2578cc); SET64(6, RD(18) + RD(0)); F_002578E8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_002578E8(Ctx *c) { /* func_002578E8 */
ENTER(0x2578e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002501C0(c); return; }
}

void F_00257900(Ctx *c) { /* func_00257900 */
ENTER(0x257900);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257914); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x25791c); SET64(4, RD(16) + RD(0)); F_00257938(c);
SET64(31, 0x257924); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00257938(Ctx *c) { /* adxt_GetDecNumSmpl */
ENTER(0x257938);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00257960; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x257950); SET32(4, RW(4) + -18600); F_00248E98(c);
SET32(2, RW(0) + -1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_00257960:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00250090(c); return; }
}

void F_00257970(Ctx *c) { /* func_00257970 */
ENTER(0x257970);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257984); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x25798c); SET64(4, RD(16) + RD(0)); F_002579A8(c);
SET64(31, 0x257994); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002579A8(Ctx *c) { /* adxt_GetDecDtLen */
ENTER(0x2579a8);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002579D0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2579c0); SET32(4, RW(4) + -18552); F_00248E98(c);
SET32(2, RW(0) + -1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_002579D0:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00250088(c); return; }
}

void F_002579E0(Ctx *c) { /* func_002579E0 */
ENTER(0x2579e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x257a04); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x257a14); SET64(6, RD(18) + RD(0)); F_00257A30(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00257A30(Ctx *c) { /* ADXT_SetCbDec */
ENTER(0x257a30);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00257A50; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -18504);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_00257A50:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00250098(c); return; }
}

void F_00257A60(Ctx *c) { /* func_00257A60 */
ENTER(0x257a60);
SET32(29, RW(29) + -64);
SET64(3, RSD(5) < (s64)2);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, RD(0) + RD(0));
{ int t = RD(3) != RD(0); SET64(6, RD(4) + RD(0)); if (t) goto L_00257AE8; }
SET64(3, rd16(c, (RW(6) + 0)));
SET64(7, RD(0) | 0x8000);
SET32(6, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(6));
SET64(3, RD(3) & 0xffff);
if (RD(3) != RD(7)) { SET64(16, rd64(c, (RW(29) + 48))); goto L_00257AEC; }
SET32(2, RW(29) + 24);
SET32(3, RW(29) + 28);
SET32(6, RW(29) + 16);
SET32(7, RW(29) + 18);
SET32(8, RW(29) + 19);
SET32(9, RW(29) + 20);
SET32(10, RW(29) + 21);
SET32(11, RW(29) + 32);
wr32(c, (RW(29) + 0), RW(2));
SET64(31, 0x257acc); wr32(c, (RW(29) + 8), RW(3)); F_00247C38(c);
{ int t = RSD(2) >= 0; SET64(3, (s16)rd16(c, (RW(29) + 16))); if (t) goto L_00257AE0; }
SET64(2, RD(0) + RD(0)); goto L_00257AE8;
L_00257AE0:;
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(3));
L_00257AE8:;
SET64(16, rd64(c, (RW(29) + 48)));
L_00257AEC:;
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_00257AF8(Ctx *c) { /* func_00257AF8 */
ENTER(0x257af8);
SET64(7, RD(5) + RD(0));
SET64(3, RSD(7) < (s64)2);
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00257B30; }
SET64(3, rd16(c, (RW(4) + 0)));
SET64(5, RD(0) | 0x8001);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5);  if (t) goto L_00257B30; }
wr32(c, (RW(6) + 0), RW(7));
SET32(2, RW(0) + 1);
L_00257B30:;
 return;
}

void F_00257B38(Ctx *c) { /* func_00257B38 */
ENTER(0x257b38);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x257b5c); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x257b6c); SET64(6, RD(18) + RD(0)); F_00257B90(c);
SET64(31, 0x257b74); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00257B90(Ctx *c) { /* func_00257B90 */
ENTER(0x257b90);
SET32(29, RW(29) + -96);
SET32(3, RW(6) + 31);
wr64(c, (RW(29) + 32), RD(16));
SET64(2, RSD(6) < (s64)0);
wr64(c, (RW(29) + 40), RD(17));
if (RD(2) != 0) SET64(6, RD(3));
wr64(c, (RW(29) + 48), RD(18));
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
SET32(3, RW(2) << 3);
wr64(c, (RW(29) + 64), RD(20));
SET32(3, RW(3) + RW(2));
wr64(c, (RW(29) + 72), RD(21));
SET32(6, RSW(6) >> 5);
wr64(c, (RW(29) + 80), RD(31));
SET64(5, RD(0) + RD(0));
SET64(2, RD(0) + RD(0));
SET32(16, RW(3) << 1);
SET64(20, (s32)rd32(c, (RW(4) + 20)));
{ int t = RD(20) == RD(0); SET64(4, RD(20) + RD(0)); if (t) goto L_00257D10; }
mul_s(c, 0, 19, RSW(6), RSW(16));
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(7, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x257bfc); SET64(6, RD(19) + RD(0)); rt_call(c, t); }
if (RD(16) == RD(0)) { rt_break(c, 0x257c00); goto L_00257C04; }
L_00257C04:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(5, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
div_s(c, 0, RSW(2), RSW(16));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 21, RSW(2), RSW(16));
SET64(17, RD(21) + RD(0));
SET64(31, 0x257c28); SET64(6, RD(17) + RD(0)); F_001273D0(c);
SET64(5, RD(17) + RD(0));
SET32(18, RW(29) + 16);
SET64(4, RD(29) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x257c40); SET64(7, RD(18) + RD(0)); F_002683C8(c);
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(6, RD(29) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x257c58); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x257c70); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(7, RD(29) + RD(0));
SET32(6, RW(19) - RW(17));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET64(4, RD(20) + RD(0));
{ u32 t = RW(2); SET64(31, 0x257c8c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
if (RD(16) == RD(0)) { rt_break(c, 0x257c90); goto L_00257C94; }
L_00257C94:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(5, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
div_s(c, 0, RSW(2), RSW(16));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 21, RSW(2), RSW(16));
SET64(6, RD(21) + RD(0));
SET64(31, 0x257cb8); SET32(17, RW(17) + RW(21)); F_001273D0(c);
SET64(5, RD(21) + RD(0));
SET64(4, RD(29) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x257ccc); SET64(7, RD(18) + RD(0)); F_002683C8(c);
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(6, RD(29) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x257ce4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET64(4, RD(20) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x257cfc); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
div_s(c, 0, RSW(17), RSW(16));
if (RD(16) == RD(0)) { rt_break(c, 0x257d04); goto L_00257D08; }
L_00257D08:;
SET64(17, c->lo.d[0]);
SET32(2, RW(17) << 5);
L_00257D10:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void F_00257D38(Ctx *c) { /* func_00257D38 */
ENTER(0x257d38);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
wr32(c, (RW(2) + -9232), RW(4));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(3) + -9216);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 15);
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(0) + 1);
L_00257D68:;
SET64(2, (s8)rd8(c, (RW(17) + 0)));
if (RD(2) != RD(19)) { SET32(18, RW(18) + -1); goto L_00257DCC; }
SET64(2, (s8)rd8(c, (RW(17) + 3)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_00257DB4; }
SET64(5, RD(16) + RD(0));
L_00257D88:;
SET64(31, 0x257d90); SET64(4, RD(17) + RD(0)); F_002562A0(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET32(16, RW(16) + 1);
SET64(31, 0x257da4); SET64(6, RD(2) + RD(0)); F_00256140(c);
SET64(2, (s8)rd8(c, (RW(17) + 3)));
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET64(5, RD(16) + RD(0)); if (t) { POLL(); goto L_00257D88; } }
L_00257DB4:;
SET64(31, 0x257dbc); SET64(4, RD(17) + RD(0)); F_002563E0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x257dc8); SET64(5, RD(2) + RD(0)); F_00256320(c);
SET32(18, RW(18) + -1);
L_00257DCC:;
{ int t = RSD(18) >= 0; SET32(17, RW(17) + 196); if (t) { POLL(); goto L_00257D68; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00257DF0(Ctx *c) { /* func_00257DF0 */
ENTER(0x257df0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x257e0c); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x257e18); SET64(5, RD(17) + RD(0)); F_00257E30(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00257E30(Ctx *c) { /* adxt_SetKeyString */
ENTER(0x257e30);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00257E50; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -18456);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_00257E50:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002500D0(c); return; }
}

void F_00257E60(Ctx *c) { /* func_00257E60 */
ENTER(0x257e60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257e74); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x257e7c); SET64(4, RD(16) + RD(0)); F_00257E90(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_00257E90(Ctx *c) { /* func_00257E90 */
ENTER(0x257e90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002500E8(c); return; }
}

void F_00257EA8(Ctx *c) { /* func_00257EA8 */
ENTER(0x257ea8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x257ebc); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x257ec4); SET64(4, RD(16) + RD(0)); F_00257EE0(c);
SET64(31, 0x257ecc); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00257EE0(Ctx *c) { /* func_00257EE0 */
ENTER(0x257ee0);
SET64(2, (s32)rd32(c, (RW(4) + 12))); return;
}

void F_00257EE8(Ctx *c) { /* func_00257EE8 */
ENTER(0x257ee8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x257f04); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x257f10); SET64(5, RD(17) + RD(0)); F_00257F28(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00257F28(Ctx *c) { /* func_00257F28 */
ENTER(0x257f28);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00250148(c); return; }
}

void F_00257F40(Ctx *c) { /* func_00257F40 */
ENTER(0x257f40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x257f64); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x257f74); SET64(6, RD(18) + RD(0)); F_00257F90(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00257F90(Ctx *c) { /* adxt_StartAfs */
ENTER(0x257f90);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_00257FC8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x257fc0); SET32(4, RW(4) + -18408); F_00248E98(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_00258074;
L_00257FC8:;
SET64(31, 0x257fd0);  F_00255608(c);
SET64(4, RD(17) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 176)));
SET64(5, RD(18) + RD(0));
SET32(7, RW(29) + 16);
SET32(8, RW(29) + 20);
SET64(31, 0x257fec); SET32(9, RW(29) + 24); F_0024B8D8(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_00258074; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) != RD(0)) { SET64(7, (s32)rd32(c, (RW(29) + 16))); goto L_00258038; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x258014); SET32(7, RW(0) + 16); F_00249068(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -18360);
SET64(31, 0x258024); SET64(5, RD(29) + RD(0)); F_00248EF0(c);
SET32(2, RW(0) + -1);
SET32(3, RW(0) + 6);
wr16(c, (RW(16) + 96), (u16)RW(2));
wr8(c, (RW(16) + 1), (u8)RW(3)); goto L_00258070;
L_00258038:;
SET32(2, RW(0) + 1);
SET64(6, (s32)rd32(c, (RW(29) + 20)));
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 24)));
SET64(5, RD(0) + RD(0));
SET64(8, (s32)rd32(c, (RW(16) + 176)));
wr32(c, (RW(16) + 184), RW(7));
wr32(c, (RW(16) + 180), RW(8));
wr32(c, (RW(16) + 188), RW(6));
wr32(c, (RW(16) + 192), RW(3));
wr8(c, (RW(16) + 2), (u8)RW(2));
wr8(c, (RW(16) + 1), (u8)RW(2));
SET64(31, 0x258070); wr8(c, (RW(16) + 172), (u8)RW(2)); F_002577E0(c);
L_00258070:;
SET64(16, rd64(c, (RW(29) + 32)));
L_00258074:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_00258088(Ctx *c) { /* func_00258088 */
ENTER(0x258088);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2580b4); SET64(19, RD(7) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2580c8); SET64(7, RD(19) + RD(0)); F_002580E8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_002479A8(c); return; }
}

void F_002580E8(Ctx *c) { /* adxt_StartFnameRange */
ENTER(0x2580e8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_0025811C; }
{ int t = RD(17) != RD(0);  if (t) goto L_00258140; }
L_0025811C:;
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -18320);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00248E98(c); return; }
L_00258140:;
SET64(31, 0x258148);  F_00255608(c);
SET64(4, (s32)rd32(c, (RW(16) + 176)));
SET64(31, 0x258154); SET64(5, RD(17) + RD(0)); F_0012A3C0(c);
SET64(3, (s32)rd32(c, (RW(16) + 176)));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 188), RW(18));
wr32(c, (RW(16) + 192), RW(19));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 180), RW(3));
SET64(5, RD(0) + RD(0));
wr8(c, (RW(16) + 172), (u8)RW(2));
wr32(c, (RW(16) + 184), RW(0));
wr8(c, (RW(16) + 1), (u8)RW(2));
wr8(c, (RW(16) + 2), (u8)RW(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_002577E0(c); return; }
}

void F_002581A0(Ctx *c) { /* func_002581A0 */
ENTER(0x2581a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2581bc); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2581c8); SET64(5, RD(17) + RD(0)); F_002581E0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_002581E0(Ctx *c) { /* func_002581E0 */
ENTER(0x2581e0);
SET32(29, RW(29) + -16);
SET64(7, (s64)(s32)0xf0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(7, RD(7) | 0xffff);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002580E8(c); return; }
}

void F_00258200(Ctx *c) { /* func_00258200 */
ENTER(0x258200);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x25821c); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x258228); SET64(5, RD(17) + RD(0)); F_00258240(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_00258240(Ctx *c) { /* func_00258240 */
ENTER(0x258240);
SET32(29, RW(29) + -16);
SET64(6, (s64)(s32)0x40000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002582A8(c); return; }
}

void F_00258258(Ctx *c) { /* func_00258258 */
ENTER(0x258258);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x25827c); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x25828c); SET64(6, RD(18) + RD(0)); F_002582A8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_002582A8(Ctx *c) { /* adxt_StartMem2 */
ENTER(0x2582a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_002582DC; }
if (RD(17) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_002582E0; }
{ int t = RSD(18) >= 0;  if (t) goto L_00258300; }
L_002582DC:;
SET64(4, (s64)(s32)0x4b0000);
L_002582E0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -18272);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00248E98(c); return; }
L_00258300:;
SET64(31, 0x258308);  F_00255608(c);
SET64(31, 0x258310);  F_00247970(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25831c); SET64(5, RD(18) + RD(0)); F_00266110(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_00258350; }
SET64(31, 0x258330);  F_00247988(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -18224);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00248E98(c); return; }
L_00258350:;
SET64(31, 0x258358);  F_002552B0(c);
SET32(2, RW(0) + 2);
wr8(c, (RW(16) + 2), (u8)RW(2));
SET64(4, RD(16) + RD(0));
SET64(31, 0x25836c); SET64(5, RD(0) + RD(0)); F_002577E0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00247988(c); return; }
}

void F_00258388(Ctx *c) { /* func_00258388 */
ENTER(0x258388);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2583ac); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2583bc); SET64(6, RD(18) + RD(0)); F_002583D8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_002583D8(Ctx *c) { /* adxt_StartMemIdx */
ENTER(0x2583d8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
{ int t = RD(18) == RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_00258410; }
if (RD(17) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_00258414; }
{ int t = RSD(16) >= 0;  if (t) goto L_00258438; }
L_00258410:;
SET64(4, (s64)(s32)0x4b0000);
L_00258414:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -18176);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00248E98(c); return; }
L_00258438:;
SET64(31, 0x258440); SET64(19, (s64)(s32)0xff0000); F_00255608(c);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(5, RSW(3) >> 8);
SET32(4, RW(3) << 8);
SET32(2, RW(3) >> 24);
SET32(3, RW(3) << 24);
SET64(4, RD(4) & RD(19));
SET64(5, RD(5) & 0xff00);
SET64(2, RD(2) | RD(3));
SET64(4, RD(4) | RD(5));
SET64(2, RD(2) | RD(4));
SET64(2, RSD(16) < RSD(2));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00258530; }
if (RSD(16) < 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00258530; }
SET64(31, 0x258484);  F_00247970(c);
SET64(5, (s64)(s32)0x40000000);
SET32(2, RW(16) << 3);
SET32(2, RW(2) + RW(17));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET32(6, RSW(3) >> 8);
SET32(2, RW(3) << 8);
SET64(6, RD(6) & 0xff00);
SET32(4, RW(3) >> 24);
SET64(2, RD(2) & RD(19));
SET32(3, RW(3) << 24);
SET64(4, RD(4) | RD(3));
SET64(2, RD(2) | RD(6));
SET64(4, RD(4) | RD(2));
SET64(31, 0x2584c0); SET32(4, RW(17) + RW(4)); F_00266110(c);
SET64(4, RD(18) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_002584F8; }
SET64(31, 0x2584d4);  F_00247988(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -18128);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00248E98(c); return; }
L_002584F8:;
SET64(31, 0x258500);  F_002552B0(c);
SET32(2, RW(0) + 2);
wr8(c, (RW(18) + 2), (u8)RW(2));
SET64(4, RD(18) + RD(0));
SET64(31, 0x258514); SET64(5, RD(0) + RD(0)); F_002577E0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00247988(c); return; }
L_00258530:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00258548(Ctx *c) { /* func_00258548 */
ENTER(0x258548);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(31));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x258574); SET64(4, RD(17) + RD(0)); F_00250300(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x258580); SET64(19, RD(2) + RD(0)); F_00250318(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x25858c); SET64(20, RD(2) + RD(0)); F_00250348(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x258598); SET64(16, RD(2) + RD(0)); F_002504D0(c);
SET32(16, RW(16) - RW(19));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2585a8); SET64(5, RD(0) + RD(0)); F_002501F0(c);
wr32(c, (RW(18) + 144), RW(16));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2585b8); SET64(4, RD(17) + RD(0)); F_002501E0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2585c4); SET64(5, RD(20) + RD(0)); F_00250200(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2585d0); SET64(5, RD(19) + RD(0)); F_002500B0(c);
SET64(5, (s64)(s32)0x260000);
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(5) + -31232);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_002501D0(c); return; }
}

