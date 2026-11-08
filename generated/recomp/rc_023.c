#include "r5900.h"
#include "functab.h"

void F_00289EC0(Ctx *c) { /* func_00289EC0 */
ENTER(0x289ec0);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(10, (s32)rd32(c, (RW(4) + 4)));
SET32(2, RW(3) + 15);
SET32(3, RW(3) + 30);
SET64(6, RSD(2) < (s64)0);
SET32(9, RW(10) + 15);
if (RD(6) != 0) SET64(2, RD(3));
SET64(11, RSD(9) < (s64)0);
SET32(2, RSW(2) >> 4);
SET32(10, RW(10) + 30);
SET32(8, RW(2) << 4);
SET32(2, RW(2) << 3);
SET32(7, RW(8) + 63);
SET32(8, RW(8) + 126);
SET32(6, RW(2) + 63);
SET32(2, RW(2) + 126);
SET64(3, RSD(7) < (s64)0);
if (RD(11) != 0) SET64(9, RD(10));
if (RD(3) != 0) SET64(7, RD(8));
SET64(3, RSD(6) < (s64)0);
if (RD(3) != 0) SET64(6, RD(2));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET32(7, RSW(7) >> 6);
SET32(9, RSW(9) >> 4);
mul_s(c, 0, 2, RSW(7), RSW(9));
SET32(7, RW(7) << 6);
SET32(6, RSW(6) >> 6);
wr16(c, (RW(5) + 14), (u16)RW(7));
mul_s(c, 1, 9, RSW(6), RSW(9));
SET32(6, RW(6) << 6);
wr16(c, (RW(5) + 12), (u16)RW(6));
SET32(2, RW(2) << 10);
wr32(c, (RW(5) + 8), RW(3));
SET32(2, RW(3) + RW(2));
SET32(9, RW(9) << 9);
wr32(c, (RW(5) + 0), RW(2));
SET32(9, RW(2) + RW(9));
wr32(c, (RW(5) + 4), RW(9)); return;
}

void F_00289F60(Ctx *c) { /* func_00289F60 */
ENTER(0x289f60);
SET32(2, RW(5) + 15);
SET32(5, RW(5) + 30);
SET64(3, RSD(2) < (s64)0);
SET32(10, RW(6) + 15);
if (RD(3) != 0) SET64(2, RD(5));
SET64(11, RSD(10) < (s64)0);
SET32(2, RSW(2) >> 4);
SET32(6, RW(6) + 30);
SET32(5, RW(2) << 4);
SET32(2, RW(2) << 3);
SET32(8, RW(5) + 63);
SET32(5, RW(5) + 126);
SET32(9, RW(2) + 63);
SET32(2, RW(2) + 126);
SET64(3, RSD(8) < (s64)0);
if (RD(11) != 0) SET64(10, RD(6));
if (RD(3) != 0) SET64(8, RD(5));
SET64(3, RSD(9) < (s64)0);
if (RD(3) != 0) SET64(9, RD(2));
SET32(8, RSW(8) >> 6);
SET32(10, RSW(10) >> 4);
SET32(9, RSW(9) >> 6);
mul_s(c, 0, 2, RSW(8), RSW(10));
mul_s(c, 1, 10, RSW(9), RSW(10));
SET32(8, RW(8) << 6);
SET32(9, RW(9) << 6);
wr16(c, (RW(7) + 14), (u16)RW(8));
wr16(c, (RW(7) + 12), (u16)RW(9));
SET32(2, RW(2) << 10);
SET32(10, RW(10) << 9);
SET32(2, RW(4) + RW(2));
wr32(c, (RW(7) + 8), RW(4));
SET32(10, RW(2) + RW(10));
wr32(c, (RW(7) + 0), RW(2));
wr32(c, (RW(7) + 4), RW(10)); return;
}

void F_00289FF0(Ctx *c) { /* func_00289FF0 */
ENTER(0x289ff0);
SET32(29, RW(29) + -32);
SET64(3, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0028A050; }
SET64(31, 0x28a020);  F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0028A048; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x181);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_0028A048:;
SET64(2, (s32)rd32(c, (RW(16) + 8120)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
L_0028A050:;
SET64(2, RD(17) ^ 0x5);
SET64(6, RD(0) + RD(0));
SET64(4, RD(3) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x28a068); if (RD(2) != 0) SET64(6, RD(18)); F_00278040(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028A090; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0xf12);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_0028A090:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0028A0A8(Ctx *c) { /* func_0028A0A8 */
ENTER(0x28a0a8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET64(19, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(19) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028A114; }
SET32(16, RW(6) >> 2);
SET32(3, RW(0) + 16);
SET64(2, RD(16) < (u64)(s64)17);
if (RD(2) == 0) SET64(16, RD(3));
{ int t = RD(16) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_0028A110; }
SET64(17, RD(5) + RD(0));
SET64(5, RD(18) + RD(0));
L_0028A0F0:;
SET32(18, RW(18) + 1);
SET64(6, RD(17) + RD(0));
SET32(17, RW(17) + 4);
SET64(31, 0x28a104); SET64(4, RD(19) + RD(0)); F_00278158(c);
SET64(3, RSD(18) < RSD(16));
{ int t = RD(3) != RD(0); SET64(5, RD(18) + RD(0)); if (t) { POLL(); goto L_0028A0F0; } }
L_0028A110:;
SET64(2, RD(16) + RD(0));
L_0028A114:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028A130(Ctx *c) { /* func_0028A130 */
ENTER(0x28a130);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
SET64(18, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(18) == RD(0); SET64(19, RD(6) + RD(0)); if (t) goto L_0028A188; }
{ int t = RSD(19) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0028A188; }
SET64(16, RD(5) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 0)));
L_0028A168:;
SET32(16, RW(16) + 4);
SET64(5, RD(17) + RD(0));
SET32(17, RW(17) + 1);
SET64(31, 0x28a17c); SET64(4, RD(18) + RD(0)); F_00278040(c);
SET64(3, RSD(17) < RSD(19));
if (RD(3) != RD(0)) { SET64(6, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_0028A168; } }
L_0028A188:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028A1A8(Ctx *c) { /* func_0028A1A8 */
ENTER(0x28a1a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28a1c8); wr32(c, (RW(16) + 0), RW(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0028A1F0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x182);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_0028A1F0:;
SET64(31, 0x28a1f8); SET64(4, RD(17) + RD(0)); F_0028F2F0(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0028A218(Ctx *c) { /* func_0028A218 */
ENTER(0x28a218);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(8) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x28a24c); SET64(20, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(6, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(8, RD(18) + RD(0));
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x184); if (t) goto L_0028A288; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_002879A8(c); return; }
L_0028A288:;
SET64(2, (s32)rd32(c, (RW(19) + 8120)));
SET64(5, RD(20) + RD(0));
SET64(31, 0x28a298); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_00275E88(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0028A2C0(Ctx *c) { /* func_0028A2C0 */
ENTER(0x28a2c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28a2ec); SET64(19, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x185); if (t) goto L_0028A320; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_002879A8(c); return; }
L_0028A320:;
SET64(4, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0028A348(c); return; }
}

void F_0028A348(Ctx *c) { /* func_0028A348 */
ENTER(0x28a348);
SET32(29, RW(29) + -16);
SET64(9, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(9) + 8120)));
{ int t = RD(5) == RD(0); SET32(8, RW(2) + 4096); if (t) goto L_0028A370; }
{ int t = RD(6) == RD(0);  if (t) goto L_0028A370; }
if (RD(7) != RD(0)) { SET64(2, (s32)rd32(c, (RW(9) + 44))); goto L_0028A380; }
L_0028A370:;
SET64(31, 0x28a378); SET64(4, RD(8) + RD(0)); F_0028E8E0(c);
SET64(2, RD(0) + RD(0)); goto L_0028A40C;
L_0028A380:;
SET32(2, RW(2) + 4);
SET64(2, RSD(6) < RSD(2));
if (RD(2) == RD(0)) { wr32(c, (RW(8) + 0), RW(5)); goto L_0028A3A8; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0xf1d);
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_0028A3A8:;
SET64(4, RD(0) + RD(0));
wr32(c, (RW(8) + 12), RW(5));
SET32(5, RW(5) + RW(7));
wr32(c, (RW(8) + 4), RW(6));
SET32(6, RW(6) + -2);
wr32(c, (RW(8) + 20), RW(5));
SET32(5, RW(5) + RW(7));
wr32(c, (RW(8) + 8), RW(7));
wr32(c, (RW(8) + 16), RW(0));
wr32(c, (RW(8) + 24), RW(0));
SET64(9, RSD(6) < (s64)17); goto L_0028A3F4;
L_0028A3D8:;
SET32(4, RW(4) + 1);
SET32(2, RW(2) + 16);
SET32(3, RW(8) + RW(2));
SET64(2, RD(3) + RD(0));
wr32(c, (RW(3) + 16), RW(0));
wr32(c, (RW(2) + 12), RW(5));
SET32(5, RW(5) + RW(7));
L_0028A3F4:;
SET32(2, RW(0) + 16);
if (RD(9) != 0) SET64(2, RD(6));
SET64(2, RSD(4) < RSD(2));
{ int t = RD(2) != RD(0); SET32(2, RW(4) << 3); if (t) { POLL(); goto L_0028A3D8; } }
SET64(2, RD(0) + RD(0));
L_0028A40C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0028A418(Ctx *c) { /* func_0028A418 */
ENTER(0x28a418);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x28a428);  F_002904E0(c);
SET64(31, 0x28a430);  F_0028A4F8(c);
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x530000); if (t) goto L_0028A458; }
L_0028A438:;
 { POLL(); goto L_0028A438; }
L_0028A458:;
SET32(4, RW(0) + 8);
SET64(31, 0x28a464); SET32(5, RW(5) + 21232); F_002779C0(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0028A4A0; }
SET64(2, (s64)(s32)0xff030000);
SET64(3, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xff05);
SET64(5, (s64)(s32)0xff000000);
SET64(2, RD(4) ^ RD(2));
SET64(4, RD(0) + RD(0));
SET64(3, RD(3) | 0xf01);
SET64(5, RD(5) | 0xf13);
if (RD(2) != 0) SET64(5, RD(3));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_0028A4A0:;
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -27856);
SET64(31, 0x28a4b4); SET32(6, RW(0) + 36); F_001273D0(c);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + -27816);
SET64(5, RD(0) + RD(0));
SET64(31, 0x28a4c8); SET32(6, RW(0) + 8); F_001273D0(c);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + -27808);
SET64(5, RD(0) + RD(0));
SET64(31, 0x28a4dc); SET32(6, RW(0) + 64); F_001273D0(c);
SET64(3, (s64)(s32)0x410000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(3) + -1304), RW(0));
SET32(29, RW(29) + 16); return;
}

void F_0028A4F8(Ctx *c) { /* func_0028A4F8 */
ENTER(0x28a4f8);
SET64(2, RD(0) + RD(0)); return;
}

void F_0028A500(Ctx *c) { /* func_0028A500 */
ENTER(0x28a500);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x28a510);  F_00277E10(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0028A520(Ctx *c) { /* func_0028A520 */
ENTER(0x28a520);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0028A538(c); return; }
}

void F_0028A538(Ctx *c) { /* func_0028A538 */
ENTER(0x28a538);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 5);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28a554); SET64(17, RD(4) + RD(0)); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028A5B8; }
SET64(31, 0x28a564);  F_0028A6E0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_0028A578; }
SET64(2, RD(0) + RD(0)); goto L_0028A5B8;
L_0028A578:;
SET64(31, 0x28a580);  F_0028A5D0(c);
SET32(3, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(17) + 72)));
{ int t = RD(2) != RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_0028A598; }
SET64(31, 0x28a598);  F_0028A640(c);
L_0028A598:;
SET64(31, 0x28a5a0); SET64(4, RD(17) + RD(0)); F_0028AA28(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a5ac); SET64(16, RD(2) + RD(0)); F_0028A6F8(c);
SET64(31, 0x28a5b4); SET64(4, RD(17) + RD(0)); F_0028A960(c);
SET64(2, RD(16) + RD(0));
L_0028A5B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0028A5D0(Ctx *c) { /* func_0028A5D0 */
ENTER(0x28a5d0);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 28);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28a5e8); SET64(16, RD(4) + RD(0)); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028A630; }
SET64(31, 0x28a5f8);  F_00287750(c);
SET32(6, RW(0) + 1);
SET64(3, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(3) == RD(0); SET32(5, RW(0) + 5); if (t) goto L_0028A620; }
{ int t = RSD(3) > 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0028A620; }
SET32(2, RW(0) + -1);
{ int t = RD(3) == RD(2); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0028A634; }
L_0028A620:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00289FF0(c); return; }
L_0028A630:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028A634:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0028A640(Ctx *c) { /* func_0028A640 */
ENTER(0x28a640);
SET32(29, RW(29) + -64);
SET32(5, RW(0) + 93);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 56), RD(31));
SET64(17, (s32)rd32(c, (RW(16) + 8120)));
SET64(31, 0x28a668); SET64(18, (s32)rd32(c, (RW(17) + 0))); F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 94);
SET64(31, 0x28a678); wr32(c, (RW(29) + 0), RW(2)); F_00294A30(c);
SET64(3, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
{ int t = RD(2) == RD(0); wr32(c, (RW(29) + 4), RW(3)); if (t) goto L_0028A6C4; }
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 192); if (t) goto L_0028A6C4; }
SET64(3, (s32)rd32(c, (RW(17) + 120)));
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028A6C8; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(31, 0x28a6ac); SET32(6, RW(29) + 16); F_00276150(c);
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_0028A6C8; }
SET32(2, RW(0) + 200);
SET32(3, RW(0) + 2);
wr32(c, (RW(17) + 120), RW(2));
wr32(c, (RW(17) + 116), RW(3));
L_0028A6C4:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0028A6C8:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0028A6E0(Ctx *c) { /* func_0028A6E0 */
ENTER(0x28a6e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8132)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00285878(c); return; }
}

void F_0028A6F8(Ctx *c) { /* func_0028A6F8 */
ENTER(0x28a6f8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(17) + 8112);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(18, (s32)rd32(c, (RW(2) + 20)));
SET64(16, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x28a72c); SET64(5, RD(18) + RD(0)); F_00285838(c);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(19); SET64(5, RD(16) + RD(0)); if (t) goto L_0028A788; }
SET64(31, 0x28a740);  F_00285838(c);
if (RD(2) != RD(19)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028A78C; }
SET64(31, 0x28a750); SET64(4, RD(17) + RD(0)); F_0028A7A8(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028A788; }
SET64(5, RD(18) + RD(0));
SET64(31, 0x28a764); SET32(6, RW(0) + 1); F_00285818(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0028A938(c); return; }
L_0028A788:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028A78C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028A7A8(Ctx *c) { /* func_0028A7A8 */
ENTER(0x28a7a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28a7bc); SET64(16, RD(4) + RD(0)); F_0028F2D0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028A7E4; }
SET64(31, 0x28a7cc);  F_0028A808(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028A7F0; }
SET64(31, 0x28a7dc);  F_0028A850(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0028A7F4; }
L_0028A7E4:;
SET32(2, RW(0) + 1); goto L_0028A7F4;
L_0028A7F0:;
SET64(2, RD(0) + RD(0));
L_0028A7F4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0028A808(Ctx *c) { /* func_0028A808 */
ENTER(0x28a808);
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s32)rd32(c, (RW(5) + 2656)));
SET64(2, (s32)rd32(c, (RW(5) + 44)));
SET64(3, ~(RD(0) | RD(16)));
if (RD(3) == 0) SET64(16, RD(2));
SET64(5, RSD(2) < RSD(16));
SET64(31, 0x28a834); if (RD(5) != 0) SET64(16, RD(2)); F_0028F2F0(c);
SET64(2, RSD(2) < RSD(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_0028A850(Ctx *c) { /* func_0028A850 */
ENTER(0x28a850);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET32(16, RW(18) + 120);
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(31));
SET64(19, (s32)rd32(c, (RW(18) + 8120)));
SET64(31, 0x28a87c); SET64(17, (s32)rd32(c, (RW(19) + 0))); F_0028B9A0(c);
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0028A91C; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028A8A4; }
SET64(3, (s32)rd32(c, (RW(16) + 124)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028A918; }
SET64(4, RD(17) + RD(0));
L_0028A8A4:;
SET64(31, 0x28a8ac); SET64(5, RD(29) + RD(0)); F_00275CE0(c);
SET64(4, RD(18) + RD(0));
SET64(3, (s64)(s32)0x30000);
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET64(3, RD(3) | 0xffff);
SET32(5, RW(0) + 1);
{ int t = RD(6) == RD(3); SET32(2, RW(0) + 1); if (t) goto L_0028A918; }
SET64(31, 0x28a8d0);  F_002850C0(c);
SET64(4, RD(18) + RD(0));
SET64(3, (s32)rd32(c, (RW(19) + 276)));
SET32(5, RW(0) + 1);
SET64(6, RSD(2) < RSD(3));
{ int t = RD(6) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028A918; }
SET64(31, 0x28a8f0);  F_002971D8(c);
SET64(4, RD(18) + RD(0));
SET64(17, RD(2) < (u64)(s64)1);
SET64(31, 0x28a900); SET64(5, RD(17) + RD(0)); F_002850C0(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x28a910); SET64(16, RD(2) + RD(0)); F_00285080(c);
SET64(16, RSD(16) < RSD(2));
SET64(2, RD(16) < (u64)(s64)1);
L_0028A918:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0028A91C:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0028A938(Ctx *c) { /* func_0028A938 */
ENTER(0x28a938);
SET32(4, RW(4) + 3648);
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, (s32)rd32(c, (RW(4) + 36)));
SET64(2, RD(2) | 0xffff);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_0028A954; }
wr32(c, (RW(4) + 0), RW(2));
L_0028A954:;
 return;
}

void F_0028A960(Ctx *c) { /* func_0028A960 */
ENTER(0x28a960);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28a980); SET32(18, RW(16) + 2384); F_0028F2F0(c);
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + -1);
{ int t = RD(17) == RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_0028A9B4; }
SET64(31, 0x28a998);  F_0028F2D0(c);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 1); if (t) goto L_0028A9F0; }
if (RD(17) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028A9F4; }
SET64(2, (s32)rd32(c, (RW(18) + 24)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028A9F4; }
L_0028A9B4:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x28a9c0); SET32(5, RW(0) + 1); F_0028AA08(c);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET32(5, RW(0) + 5);
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_0028A9F0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00294868(c); return; }
L_0028A9F0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028A9F4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0028AA08(Ctx *c) { /* func_0028AA08 */
ENTER(0x28aa08);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8132)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00285858(c); return; }
}

void F_0028AA28(Ctx *c) { /* func_0028AA28 */
ENTER(0x28aa28);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
SET64(4, RD(17) + RD(0));
L_0028AA40:;
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET64(31, 0x28aa50); SET32(7, RW(29) + 8); F_0028AAA8(c);
SET64(4, RD(17) + RD(0));
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET32(8, RW(29) + 12); if (t) goto L_0028AA84; }
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x28aa70); SET64(7, (s32)rd32(c, (RW(29) + 8))); F_0028B258(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 12))); if (t) goto L_0028AA84; }
if (RD(2) != RD(0)) { SET64(4, RD(17) + RD(0)); { POLL(); goto L_0028AA40; } }
L_0028AA84:;
SET64(31, 0x28aa8c); SET64(4, RD(17) + RD(0)); F_0028E3A8(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028AAA8(Ctx *c) { /* func_0028AAA8 */
ENTER(0x28aaa8);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 72), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 48), RD(16));
SET64(6, RD(29) + RD(0));
wr64(c, (RW(29) + 88), RD(31));
wr32(c, (RW(19) + 0), RW(0));
SET64(16, (s32)rd32(c, (RW(17) + 8128)));
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(20) + 0), RW(0));
SET64(31, 0x28aaf0); SET64(5, RD(16) + RD(0)); F_00284B88(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 48))); goto L_0028ACCC; }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(3) == RD(0); SET32(5, RW(0) + 206); if (t) goto L_0028ACC8; }
SET64(4, RD(29) + RD(0));
SET64(31, 0x28ab10); SET32(6, RW(29) + 32); F_0028AF98(c);
SET64(5, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
{ int t = RD(5) == RD(2); SET64(3, (s32)rd32(c, (RW(29) + 32))); if (t) goto L_0028AB68; }
{ int t = RD(5) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 12))); if (t) goto L_0028AB38; }
SET64(31, 0x28ab30); SET64(4, RD(29) + RD(0)); F_0028AEA8(c);
wr32(c, (RW(19) + 0), RW(2)); goto L_0028AB50;
L_0028AB38:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) + -3);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(0));
wr32(c, (RW(19) + 0), RW(2));
L_0028AB50:;
SET64(2, (s32)rd32(c, (RW(19) + 0)));
{ int t = RSD(2) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0028ACC8; }
SET32(2, RW(0) + 1);
wr32(c, (RW(20) + 0), RW(2)); goto L_0028ACC4;
L_0028AB68:;
SET32(2, RW(0) + 4);
wr32(c, (RW(19) + 0), RW(2));
SET64(2, RD(0) + RD(0));
SET64(4, RD(3) & 0x80);
{ int t = RD(4) != RD(0); wr32(c, (RW(18) + 0), RW(3)); if (t) goto L_0028ACC8; }
SET64(5, RD(16) + RD(0));
SET32(6, RW(29) + 36);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28ab94); SET32(7, RW(29) + 40); F_00284FA8(c);
SET64(5, (s32)rd32(c, (RW(29) + 32)));
SET64(4, RD(29) + RD(0));
SET64(31, 0x28aba4); SET64(6, (s32)rd32(c, (RW(29) + 36))); F_0028ACE8(c);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 12))); if (t) goto L_0028AC04; }
{ int t = RD(3) != RD(0); wr32(c, (RW(29) + 36), RW(0)); if (t) goto L_0028ABC8; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(3, RW(3) + RW(2)); goto L_0028ABD0;
L_0028ABC8:;
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET32(3, RW(2) + RW(3));
L_0028ABD0:;
SET64(2, (s32)rd32(c, (RW(29) + 40)));
{ int t = RD(2) == RD(3); SET64(4, RD(29) + RD(0)); if (t) goto L_0028AC04; }
SET32(5, RW(0) + 204);
SET32(6, RW(29) + 44);
SET64(31, 0x28abec); wr32(c, (RW(29) + 40), RW(3)); F_0028B0F0(c);
SET64(4, RD(17) + RD(0));
SET64(7, (s32)rd32(c, (RW(29) + 40)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x28ac04); wr32(c, (RW(29) + 36), RW(2)); F_00285018(c);
L_0028AC04:;
SET64(4, (s32)rd32(c, (RW(29) + 36)));
{ int t = RD(4) == RD(0);  if (t) goto L_0028AC9C; }
SET64(31, 0x28ac18);  F_00274A68(c);
SET64(4, RD(2) + RD(0));
SET32(2, RW(0) + 8);
SET64(3, RD(4) + RD(0));
{ int t = RD(3) == RD(2); wr32(c, (RW(29) + 44), RW(4)); if (t) goto L_0028AC50; }
SET64(2, RSD(3) < (s64)9);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 64); if (t) goto L_0028ACB0; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET64(2, (s32)rd32(c, (RW(29) + 36))); if (t) goto L_0028AC68; }
SET64(5, RD(2) + RD(0)); goto L_0028ACB8;
L_0028AC50:;
SET64(2, (s32)rd32(c, (RW(29) + 32)));
SET64(2, RD(2) & 0x40);
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 8); if (t) goto L_0028ACB0; }
SET64(4, RD(29) + RD(0)); goto L_0028AC7C;
L_0028AC68:;
SET64(2, (s32)rd32(c, (RW(29) + 32)));
SET64(2, RD(2) & 0x48);
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 4); if (t) goto L_0028ACB0; }
SET64(4, RD(29) + RD(0));
L_0028AC7C:;
SET64(31, 0x28ac84); SET32(6, RW(29) + 32); F_0028AF98(c);
SET64(5, RD(2) + RD(0));
{ int t = RD(5) == RD(0);  if (t) goto L_0028AC9C; }
SET64(2, (s32)rd32(c, (RW(29) + 36)));
{ int t = RD(5) != RD(2); SET64(5, RD(2) + RD(0)); if (t) goto L_0028ACB8; }
L_0028AC9C:;
SET64(31, 0x28aca4); SET64(4, RD(17) + RD(0)); F_0028AF10(c);
SET64(16, rd64(c, (RW(29) + 48))); goto L_0028ACCC;
L_0028ACB0:;
SET64(2, (s32)rd32(c, (RW(29) + 36)));
SET64(5, RD(2) + RD(0));
L_0028ACB8:;
SET64(31, 0x28acc0); SET64(4, RD(29) + RD(0)); F_0028AEA8(c);
wr32(c, (RW(19) + 0), RW(2));
L_0028ACC4:;
SET64(2, RD(0) + RD(0));
L_0028ACC8:;
SET64(16, rd64(c, (RW(29) + 48)));
L_0028ACCC:;
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void F_0028ACE8(Ctx *c) { /* func_0028ACE8 */
ENTER(0x28ace8);
SET32(29, RW(29) + -64);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 56), RD(31));
{ int t = RD(17) == RD(0); wr32(c, (RW(29) + 16), RW(5)); if (t) goto L_0028AE8C; }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
if (RD(17) == RD(4)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028AE90; }
SET64(2, RD(4) < RD(17));
{ int t = RD(2) == RD(0); SET64(2, RD(17) < RD(4)); if (t) goto L_0028AD3C; }
SET32(3, RW(17) - RW(4));
SET64(3, RSD(3) < (s64)4);
{ int t = RD(3) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028AE8C; }
SET64(2, RD(17) < RD(4));
L_0028AD3C:;
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 8))); goto L_0028ADA8; }
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(2, RW(4) + RW(2));
SET64(3, RD(17) < RD(2));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 8))); goto L_0028ADA8; }
SET32(2, RW(17) - RW(2));
SET32(16, RW(2) + 4);
{ int t = RSD(16) <= 0;  if (t) goto L_0028ADD8; }
SET64(3, (s32)rd32(c, (RW(18) + 12)));
SET64(3, RSD(3) < RSD(16));
{ int t = RD(3) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028AE8C; }
SET32(6, RW(0) + 4);
SET64(4, RD(29) + RD(0));
SET32(6, RW(6) - RW(16));
SET64(31, 0x28ad8c); SET64(5, RD(17) + RD(0)); F_00127218(c);
SET64(5, (s32)rd32(c, (RW(18) + 8)));
SET32(4, RW(29) - RW(16));
SET64(6, RD(16) + RD(0));
SET64(31, 0x28ada0); SET32(4, RW(4) + 4); F_00127218(c);
 goto L_0028ADE8;
L_0028ADA8:;
SET64(2, RD(17) < RD(3));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028AE8C; }
SET64(2, (s32)rd32(c, (RW(18) + 12)));
SET32(2, RW(3) + RW(2));
SET64(3, RD(17) < RD(2));
if (RD(3) == RD(0)) { SET32(2, RW(0) + 1); goto L_0028AE8C; }
SET32(3, RW(17) - RW(2));
SET32(16, RW(3) + 4);
{ int t = RSD(16) > 0; SET32(2, RW(0) + 1); if (t) goto L_0028AE8C; }
L_0028ADD8:;
lwl(c, 2, (RW(17) + 3));
lwr(c, 2, (RW(17) + 0));
swl(c, 2, (RW(29) + 3));
swr(c, 2, (RW(29) + 0));
L_0028ADE8:;
SET64(31, 0x28adf0); SET64(4, RD(29) + RD(0)); F_00274A68(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 8);
{ int t = RD(3) == RD(2); SET64(2, RSD(3) < (s64)9); if (t) goto L_0028AE38; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 64); if (t) goto L_0028AE20; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_0028AE50; }
SET64(16, rd64(c, (RW(29) + 32))); goto L_0028AE90;
L_0028AE20:;
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 128); if (t) goto L_0028AE88; }
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_0028AE88; }
SET64(16, rd64(c, (RW(29) + 32))); goto L_0028AE90;
L_0028AE38:;
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET64(2, RD(2) & 0x40);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0028AE88; }
SET32(5, RW(0) + 8); goto L_0028AE64;
L_0028AE50:;
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET64(2, RD(2) & 0x48);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0028AE88; }
SET32(5, RW(0) + 4);
L_0028AE64:;
SET64(31, 0x28ae6c); SET32(6, RW(29) + 16); F_0028AF98(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_0028AE8C; }
if (RD(2) != RD(17)) { SET64(2, RD(0) + RD(0)); goto L_0028AE8C; }
SET32(2, RW(0) + 1); goto L_0028AE8C;
L_0028AE88:;
SET64(2, RD(0) + RD(0));
L_0028AE8C:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0028AE90:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0028AEA8(Ctx *c) { /* func_0028AEA8 */
ENTER(0x28aea8);
SET64(7, RD(4) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(7) + 0)));
SET64(2, RD(6) < RD(3));
{ int t = RD(2) != RD(0); SET32(4, RW(6) - RW(3)); if (t) goto L_0028AED4; }
SET64(2, (s32)rd32(c, (RW(7) + 4)));
SET32(2, RW(3) + RW(2));
SET64(2, RD(6) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_0028AF04; }
L_0028AED4:;
SET64(5, (s32)rd32(c, (RW(7) + 8)));
SET64(2, RD(6) < RD(5));
{ int t = RD(2) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0028AF04; }
SET64(2, (s32)rd32(c, (RW(7) + 12)));
SET32(2, RW(5) + RW(2));
SET64(2, RD(6) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_0028AF04; }
SET64(3, (s32)rd32(c, (RW(7) + 4)));
SET32(2, RW(6) - RW(5));
SET32(4, RW(2) + RW(3));
L_0028AF04:;
SET64(2, RD(4) + RD(0)); return;
}

void F_0028AF10(Ctx *c) { /* func_0028AF10 */
ENTER(0x28af10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(18, (s32)rd32(c, (RW(16) + 8128)));
SET64(31, 0x28af34); SET64(5, RD(18) + RD(0)); F_00285080(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x28af44); SET64(17, RD(2) + RD(0)); F_00285898(c);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 40)));
SET32(17, RW(17) - RW(2));
SET64(5, (s64)(s32)0xff000000);
SET64(2, RD(0) + RD(0));
SET64(17, RSD(17) < RSD(3));
{ int t = RD(17) == RD(0); SET64(5, RD(5) | 0xf1c); if (t) goto L_0028AF80; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_0028AF80:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0028AF98(Ctx *c) { /* func_0028AF98 */
ENTER(0x28af98);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 64), RD(22));
SET64(22, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(6, RD(21) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 72), RD(31));
wr32(c, (RW(22) + 0), RW(0));
SET64(5, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x28afdc); SET64(4, (s32)rd32(c, (RW(18) + 0))); F_00274C00(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(7, (s32)rd32(c, (RW(18) + 12))); goto L_0028B008; }
 goto L_0028B0B4;
L_0028AFF0:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(22) + 0), RW(6));
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) - RW(19));
SET32(2, RW(2) + RW(20)); goto L_0028B0C4;
L_0028B008:;
{ int t = RD(7) == RD(0); SET32(3, RW(0) + 3); if (t) goto L_0028B0C4; }
SET64(19, (s32)rd32(c, (RW(18) + 4)));
SET64(5, (s32)rd32(c, (RW(18) + 0)));
SET64(16, RD(3) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(2, RSD(19) < (s64)4);
if (RD(2) == 0) SET64(19, RD(3));
SET64(2, RSD(7) < (s64)4);
SET32(5, RW(5) + RW(6));
SET64(6, RD(19) + RD(0));
if (RD(2) != 0) SET64(16, RD(7));
SET64(4, RD(29) + RD(0));
SET32(5, RW(5) - RW(19));
SET64(31, 0x28b048); SET64(20, RD(0) + RD(0)); F_00127218(c);
SET64(5, (s32)rd32(c, (RW(18) + 8)));
SET64(6, RD(16) + RD(0));
SET32(16, RW(19) + RW(16));
SET32(4, RW(29) + RW(19));
SET64(31, 0x28b060); SET32(16, RW(16) + -3); F_00127218(c);
SET64(2, RSD(17) < RSD(16));
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(18) + 12))); goto L_0028B09C; }
L_0028B070:;
SET64(31, 0x28b078); SET32(4, RW(29) + RW(20)); F_00274A68(c);
SET64(6, RD(2) + RD(0));
SET64(2, RD(6) & RD(21));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 4))); { POLL(); goto L_0028AFF0; } }
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(16));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0028B070; } }
SET64(5, (s32)rd32(c, (RW(18) + 12)));
L_0028B09C:;
SET64(6, RD(21) + RD(0));
SET64(31, 0x28b0a8); SET64(4, (s32)rd32(c, (RW(18) + 8))); F_00274C00(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0028B0C8; }
L_0028B0B4:;
SET64(31, 0x28b0bc); SET64(4, RD(17) + RD(0)); F_00274A68(c);
wr32(c, (RW(22) + 0), RW(2));
SET64(2, RD(17) + RD(0));
L_0028B0C4:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0028B0C8:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_0028B0F0(Ctx *c) { /* func_0028B0F0 */
ENTER(0x28b0f0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
wr64(c, (RW(29) + 64), RD(22));
SET64(22, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 72), RD(31));
wr32(c, (RW(22) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 12)));
{ int t = RD(2) == RD(0); SET64(21, RD(5) + RD(0)); if (t) goto L_0028B1F8; }
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(21) + RD(0));
SET64(31, 0x28b140); SET32(4, RW(4) + RW(2)); F_00274B00(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(19, (s32)rd32(c, (RW(18) + 4))); goto L_0028B170; }
 goto L_0028B21C;
L_0028B158:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(22) + 0), RW(6));
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) - RW(19));
SET32(2, RW(2) + RW(20)); goto L_0028B22C;
L_0028B170:;
SET32(7, RW(0) + 3);
SET64(16, (s32)rd32(c, (RW(18) + 12)));
SET64(4, RD(29) + RD(0));
SET64(5, (s32)rd32(c, (RW(18) + 0)));
SET64(3, RD(19) + RD(0));
SET64(2, RSD(19) < (s64)4);
SET64(20, RD(0) + RD(0));
if (RD(2) == 0) SET64(19, RD(7));
SET64(2, RSD(16) < (s64)4);
SET32(5, RW(5) + RW(3));
if (RD(2) == 0) SET64(16, RD(7));
SET64(6, RD(19) + RD(0));
SET64(31, 0x28b1a8); SET32(5, RW(5) - RW(19)); F_00127218(c);
SET64(5, (s32)rd32(c, (RW(18) + 8)));
SET64(6, RD(16) + RD(0));
SET32(16, RW(19) + RW(16));
SET32(4, RW(29) + RW(19));
SET64(31, 0x28b1c0); SET32(16, RW(16) + -3); F_00127218(c);
SET64(2, RSD(17) < RSD(16));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 4))); goto L_0028B1FC; }
L_0028B1D0:;
SET64(31, 0x28b1d8); SET32(4, RW(29) + RW(20)); F_00274A68(c);
SET64(6, RD(2) + RD(0));
SET64(2, RD(6) & RD(21));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 4))); { POLL(); goto L_0028B158; } }
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(16));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0028B1D0; } }
L_0028B1F8:;
SET64(2, (s32)rd32(c, (RW(18) + 4)));
L_0028B1FC:;
SET64(6, RD(21) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x28b210); SET32(4, RW(4) + RW(2)); F_00274B00(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0028B230; }
L_0028B21C:;
SET64(31, 0x28b224); SET64(4, RD(17) + RD(0)); F_00274A68(c);
wr32(c, (RW(22) + 0), RW(2));
SET64(2, RD(17) + RD(0));
L_0028B22C:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0028B230:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_0028B258(Ctx *c) { /* func_0028B258 */
ENTER(0x28b258);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 72), RD(21));
SET64(21, RD(8) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 64), RD(20));
SET32(20, RW(16) + 2384);
wr64(c, (RW(29) + 80), RD(22));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 88), RD(23));
SET64(23, RD(7) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET32(2, RW(16) + 8112);
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 96), RD(31));
wr32(c, (RW(21) + 0), RW(0));
SET64(18, (s32)rd32(c, (RW(2) + 16)));
SET64(19, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x28b2b0); wr32(c, (RW(20) + 36), RW(0)); F_00291070(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 120))); goto L_0028B2F0; }
SET64(31, 0x28b2c0); SET64(4, RD(16) + RD(0)); F_0028B9A0(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { wr32(c, (RW(20) + 36), RW(3)); goto L_0028B2E0; }
SET64(31, 0x28b2d4); SET64(4, RD(16) + RD(0)); F_0028F2C0(c);
SET64(2, RD(0) + RD(0)); goto L_0028B4F4;
L_0028B2E0:;
SET64(31, 0x28b2e8); SET64(4, RD(16) + RD(0)); F_0028AF10(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0028B4F8;
L_0028B2F0:;
SET32(2, RW(0) + 204);
if (RD(3) != RD(2)) { SET64(17, RD(17) & 0xcc); goto L_0028B30C; }
SET64(2, (s32)rd32(c, (RW(19) + 368)));
{ int t = RD(2) != RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_0028B310; }
SET64(17, RD(17) & 0xcc);
L_0028B30C:;
SET64(5, RD(18) + RD(0));
L_0028B310:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x28b31c); SET32(6, RW(29) + 16); F_00285160(c);
SET64(18, RD(2) + RD(0));
{ int t = RD(18) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_0028B330; }
SET64(2, RD(0) + RD(0)); goto L_0028B4F4;
L_0028B330:;
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028B4F8; }
SET64(2, RD(17) & 0xc8);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028B34C; }
SET64(31, 0x28b34c); SET32(5, RW(0) + 1); F_0028F2E0(c);
L_0028B34C:;
SET32(2, RW(0) + 128);
{ int t = RD(17) != RD(2);  if (t) goto L_0028B3A8; }
SET64(31, 0x28b360); SET64(4, RD(16) + RD(0)); F_0028B570(c);
SET64(31, 0x28b368); SET64(4, RD(16) + RD(0)); F_00285B38(c);
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_0028B388; }
SET64(31, 0x28b378); SET64(4, RD(16) + RD(0)); F_0028B628(c);
if (RD(2) != RD(0)) { SET64(2, RD(18) + RD(0)); goto L_0028B4F4; }
SET32(2, RW(0) + 1); goto L_0028B4EC;
L_0028B388:;
SET64(31, 0x28b390); SET64(4, RD(16) + RD(0)); F_00285BA0(c);
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_0028B3A8; }
SET64(31, 0x28b3a0); SET64(4, RD(16) + RD(0)); F_0028B850(c);
SET32(2, RW(0) + 1); goto L_0028B4EC;
L_0028B3A8:;
{ int t = RD(23) != RD(0); SET64(2, RD(17) & 0x4c); if (t) goto L_0028B3F0; }
SET64(4, RD(16) + RD(0));
SET64(5, RD(22) + RD(0));
SET64(31, 0x28b3c0); SET64(6, RD(17) + RD(0)); F_0028B958(c);
if (RD(2) == RD(0)) { SET64(2, RSD(22) < (s64)5); goto L_0028B3D8; }
SET64(31, 0x28b3d0); SET64(4, RD(16) + RD(0)); F_0028F2C0(c);
SET64(2, RD(18) + RD(0)); goto L_0028B4F4;
L_0028B3D8:;
{ int t = RD(2) == RD(0); SET64(2, RD(17) & 0x4c); if (t) goto L_0028B3F0; }
SET32(2, RW(0) + 1);
wr32(c, (RW(20) + 36), RW(2)); goto L_0028B4F0;
L_0028B3F0:;
{ int t = RD(2) == RD(0); SET64(5, RD(29) + RD(0)); if (t) goto L_0028B470; }
SET64(31, 0x28b400); SET64(4, RD(16) + RD(0)); F_0028B520(c);
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 16)));
SET64(5, RD(29) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(31, 0x28b418); SET32(8, RW(29) + 20); F_0028BA50(c);
SET64(18, RD(2) + RD(0));
if (RD(18) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028B4F8; }
SET64(3, (s32)rd32(c, (RW(29) + 20)));
{ int t = RD(3) != RD(0); SET32(2, RW(0) + 64); if (t) goto L_0028B450; }
SET64(2, (s32)rd32(c, (RW(19) + 120)));
SET64(2, RD(17) & RD(2));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 204); if (t) goto L_0028B444; }
wr32(c, (RW(19) + 120), RW(2));
L_0028B444:;
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 368), RW(2));
SET32(2, RW(0) + 64);
L_0028B450:;
{ int t = RD(17) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_0028B4EC; }
SET32(2, RW(0) + -2);
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_0028B4EC; }
SET32(2, RW(0) + 192);
wr32(c, (RW(19) + 120), RW(2)); goto L_0028B4E8;
L_0028B470:;
SET64(2, RD(17) & 0x2);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028B4C8; }
SET64(31, 0x28b484); SET64(5, RD(29) + RD(0)); F_0028B520(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x28b490); SET64(5, RD(29) + RD(0)); F_0028D000(c);
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_0028B4B8; }
SET64(31, 0x28b4a0); SET64(4, RD(16) + RD(0)); F_0028D570(c);
SET64(18, RD(2) + RD(0));
if (RD(18) != RD(0)) { SET64(2, RD(18) + RD(0)); goto L_0028B4F4; }
SET32(2, RW(0) + 1); goto L_0028B4EC;
L_0028B4B8:;
SET64(31, 0x28b4c0); SET64(4, RD(16) + RD(0)); F_0028D6D8(c);
SET64(18, RD(2) + RD(0)); goto L_0028B4F0;
L_0028B4C8:;
SET32(2, RW(0) + 128);
{ int t = RD(17) == RD(2); SET64(5, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_0028B4F0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x28b4e0); SET32(6, RW(0) + 204); F_0028E228(c);
{ int t = RSD(2) <= 0; SET64(2, RD(18) + RD(0)); if (t) goto L_0028B4F4; }
L_0028B4E8:;
SET32(2, RW(0) + 1);
L_0028B4EC:;
wr32(c, (RW(21) + 0), RW(2));
L_0028B4F0:;
SET64(2, RD(18) + RD(0));
L_0028B4F4:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0028B4F8:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(22, rd64(c, (RW(29) + 80)));
SET64(23, rd64(c, (RW(29) + 88)));
SET64(31, rd64(c, (RW(29) + 96)));
SET32(29, RW(29) + 112); return;
}

void F_0028B520(Ctx *c) { /* func_0028B520 */
ENTER(0x28b520);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(6, RD(29) + RD(0));
SET64(31, 0x28b53c); SET64(5, (s32)rd32(c, (RW(4) + 8128))); F_00284B88(c);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0028B550; }
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 0), RW(0)); goto L_0028B55C;
L_0028B550:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(16) + 4), RW(2));
L_0028B55C:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0028B570(Ctx *c) { /* func_0028B570 */
ENTER(0x28b570);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(17) + 3516);
wr64(c, (RW(29) + 24), RD(31));
SET32(16, RW(17) + 8112);
SET64(2, (s32)rd32(c, (RW(16) + 32)));
{ int t = RSD(2) >= 0; SET64(5, (s32)rd32(c, (RW(16) + 16))); if (t) goto L_0028B5AC; }
SET64(31, 0x28b5a4);  F_002850A0(c);
SET32(2, RW(2) + 4);
wr32(c, (RW(16) + 32), RW(2));
L_0028B5AC:;
SET64(2, (s32)rd32(c, (RW(18) + 36)));
{ int t = RSD(2) >= 0; SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0028B610; }
ldl(c, 2, (RW(17) + 3479));
ldr(c, 2, (RW(17) + 3472));
ldl(c, 3, (RW(17) + 3487));
ldr(c, 3, (RW(17) + 3480));
ldl(c, 4, (RW(17) + 3495));
ldr(c, 4, (RW(17) + 3488));
ldl(c, 5, (RW(17) + 3503));
ldr(c, 5, (RW(17) + 3496));
sdl(c, 2, (RW(18) + 7));
sdr(c, 2, (RW(18) + 0));
sdl(c, 3, (RW(18) + 15));
sdr(c, 3, (RW(18) + 8));
sdl(c, 4, (RW(18) + 23));
sdr(c, 4, (RW(18) + 16));
sdl(c, 5, (RW(18) + 31));
sdr(c, 5, (RW(18) + 24));
ldl(c, 2, (RW(17) + 3511));
ldr(c, 2, (RW(17) + 3504));
SET64(3, (s32)rd32(c, (RW(17) + 3512)));
sdl(c, 2, (RW(18) + 39));
sdr(c, 2, (RW(18) + 32));
wr32(c, (RW(18) + 40), RW(3));
L_0028B610:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0028B628(Ctx *c) { /* func_0028B628 */
ENTER(0x28b628);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28b644); SET64(17, RD(5) + RD(0)); F_0028B678(c);
SET32(3, RW(0) + -1);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(3); SET64(5, RD(17) + RD(0)); if (t) goto L_0028B660; }
SET64(31, 0x28b65c);  F_0028B850(c);
SET64(2, RD(0) + RD(0));
L_0028B660:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0028B678(Ctx *c) { /* func_0028B678 */
ENTER(0x28b678);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 3368);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28b6a0); SET64(18, (s32)rd32(c, (RW(16) + 8120))); F_00294A30(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028B6B8; }
SET64(31, 0x28b6b0);  F_0028B748(c);
SET64(5, RD(2) + RD(0)); goto L_0028B6CC;
L_0028B6B8:;
SET64(31, 0x28b6c0);  F_0028B7A8(c);
SET64(5, RD(2) + RD(0));
{ int t = RSD(5) < 0; SET32(2, RW(0) + -1); if (t) goto L_0028B730; }
L_0028B6CC:;
if (RSD(5) <= 0) { SET64(5, (s64)(s32)0x7fff0000); goto L_0028B70C; }
SET64(31, 0x28b6dc); SET64(4, RD(16) + RD(0)); F_00285BE8(c);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 136)));
SET32(2, RW(2) + 1);
SET64(31, 0x28b6f0); wr32(c, (RW(18) + 136), RW(2)); F_002904D0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028B708; }
SET64(31, 0x28b700);  F_00290E30(c);
SET32(2, RW(2) + 1);
wr32(c, (RW(17) + 352), RW(2));
L_0028B708:;
SET64(5, (s64)(s32)0x7fff0000);
L_0028B70C:;
SET32(4, RW(17) + 60);
SET64(31, 0x28b718); SET64(5, RD(5) | 0xffff); F_00295038(c);
SET32(4, RW(17) + 104);
SET64(31, 0x28b724); SET32(5, RW(0) + -1); F_00295038(c);
SET32(2, RW(0) + 192);
wr32(c, (RW(18) + 120), RW(2));
SET64(2, RD(0) + RD(0));
L_0028B730:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0028B748(Ctx *c) { /* func_0028B748 */
ENTER(0x28b748);
SET32(29, RW(29) + -64);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(16));
SET32(16, RW(3) + 3428);
wr64(c, (RW(29) + 56), RD(31));
SET64(2, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(3) + 3472)));
{ int t = RD(5) == RD(0); SET32(4, RW(3) + 3476); if (t) goto L_0028B794; }
SET64(31, 0x28b774); SET64(5, RD(29) + RD(0)); F_0028C840(c);
SET64(4, RD(29) + RD(0));
SET32(5, RW(29) + 32);
SET32(6, RW(29) + 36);
SET64(31, 0x28b788); wr32(c, (RW(29) + 24), RW(0)); F_00295E60(c);
SET64(3, (s32)rd32(c, (RW(16) + 36)));
SET64(2, (s32)rd32(c, (RW(29) + 32)));
SET32(2, RW(2) - RW(3));
L_0028B794:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0028B7A8(Ctx *c) { /* func_0028B7A8 */
ENTER(0x28b7a8);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET32(2, RW(2) + 4312);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(5) + 12)));
{ int t = RD(3) == RD(2); SET32(17, RW(16) + 3368); if (t) goto L_0028B7E8; }
SET64(2, RD(0) | 0xac44);
wr32(c, (RW(29) + 0), RW(0));
wr32(c, (RW(29) + 4), RW(2)); goto L_0028B808;
L_0028B7E8:;
SET64(5, RD(29) + RD(0));
SET64(31, 0x28b7f4); SET32(6, RW(29) + 4); F_00285D28(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 496))); goto L_0028B80C; }
SET32(2, RW(0) + -1); goto L_0028B838;
L_0028B808:;
SET64(2, (s32)rd32(c, (RW(17) + 496)));
L_0028B80C:;
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(16) + 3468)));
SET32(2, RW(2) + RW(3));
SET64(6, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(17) + 496), RW(2));
SET64(31, 0x28b828); SET64(4, RD(2) + RD(0)); F_002784E8(c);
SET64(3, (s32)rd32(c, (RW(17) + 356)));
SET32(2, RW(2) - RW(3));
SET64(4, RSD(2) < (s64)0);
if (RD(4) != 0) SET64(2, RD(0));
L_0028B838:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028B850(Ctx *c) { /* func_0028B850 */
ENTER(0x28b850);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET32(18, RW(0) + 128);
wr64(c, (RW(29) + 40), RD(19));
SET32(19, RW(0) + 4);
wr64(c, (RW(29) + 48), RD(31)); goto L_0028B8A0;
L_0028B880:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x28b894); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x28b8a0); SET32(5, RW(0) + 4); F_0028B910(c);
L_0028B8A0:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(2) + 24)));
{ u32 t = RW(3); SET64(31, 0x28b8bc); SET64(7, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
if (RD(2) != RD(19)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_0028B8DC; }
SET64(31, 0x28b8d0); SET64(4, (s32)rd32(c, (RW(29) + 0))); F_00274A68(c);
{ int t = RD(2) == RD(18); SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_0028B880; } }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
L_0028B8DC:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x28b8f0); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0028B910(Ctx *c) { /* func_0028B910 */
ENTER(0x28b910);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(6, RD(17) + RD(0));
SET64(31, 0x28b934); SET64(5, (s32)rd32(c, (RW(16) + 8128))); F_002851C0(c);
SET64(2, rd64(c, (RW(16) + 2464)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(17) + RD(2));
SET64(17, rd64(c, (RW(29) + 8)));
wr64(c, (RW(16) + 2464), RD(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_0028B958(Ctx *c) { /* func_0028B958 */
ENTER(0x28b958);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 128);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RSD(5) < (s64)5);
{ int t = RD(6) == RD(3); SET32(2, RW(0) + 1); if (t) goto L_0028B990; }
if (RD(5) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0028B990; }
SET64(31, 0x28b980);  F_0028B9A0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0028B994; }
SET64(2, RD(0) + RD(0));
L_0028B990:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0028B994:;
SET32(29, RW(29) + 16); return;
}

void F_0028B9A0(Ctx *c) { /* func_0028B9A0 */
ENTER(0x28b9a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8128)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00285878(c); return; }
}

void F_0028B9B8(Ctx *c) { /* func_0028B9B8 */
ENTER(0x28b9b8);
SET32(29, RW(29) + -16);
SET64(3, RD(5) + RD(0));
SET32(2, RW(0) + -2);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(3) == RD(2); SET64(8, RD(4) + RD(0)); if (t) goto L_0028BA00; }
SET64(2, RSD(3) < (s64)-1);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + -3); if (t) goto L_0028B9F0; }
{ int t = RD(3) == RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0028BA18; }
SET64(4, RD(8) + RD(0)); goto L_0028BA34;
L_0028B9F0:;
{ int t = RD(3) != RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0028BA30; }
SET64(2, RD(0) + RD(0)); goto L_0028BA44;
L_0028BA00:;
{ int t = RSD(6) > 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0028BA40; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_0028BA18:;
{ int t = RSD(6) > 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0028BA40; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_0028BA30:;
SET64(4, RD(8) + RD(0));
L_0028BA34:;
SET64(5, RD(7) + RD(0));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_0028BA40:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0028BA44:;
SET32(29, RW(29) + 16); return;
}

void F_0028BA50(Ctx *c) { /* func_0028BA50 */
ENTER(0x28ba50);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 64), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 72), RD(21));
wr64(c, (RW(29) + 80), RD(22));
SET64(22, RD(8) + RD(0));
wr64(c, (RW(29) + 88), RD(23));
wr64(c, (RW(29) + 96), RD(30));
SET64(30, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 104), RD(31));
SET64(19, (s32)rd32(c, (RW(20) + 8120)));
wr32(c, (RW(29) + 16), RW(7));
SET32(23, RW(19) + 4096);
SET32(21, RW(19) + 140);
SET64(2, (s32)rd32(c, (RW(19) + 0)));
wr32(c, (RW(29) + 20), RW(2));
wr32(c, (RW(23) + 16), RW(0));
SET64(5, (s32)rd32(c, (RW(23) + 12)));
SET64(4, (s32)rd32(c, (RW(29) + 20)));
SET64(31, 0x28bab8); SET64(6, (s32)rd32(c, (RW(23) + 8))); F_00275EB0(c);
SET64(4, RD(16) + RD(0));
SET32(6, RW(0) + 1);
SET64(31, 0x28bac8); SET64(5, RD(0) + RD(0)); F_002675B0(c);
SET64(5, RD(16) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 20)));
SET64(31, 0x28bad8); SET64(18, RD(2) + RD(0)); F_00275EF0(c);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(22) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(31, 0x28baec); SET32(6, RW(0) + 1); F_002675B0(c);
SET64(4, RD(20) + RD(0));
SET32(17, RW(2) - RW(18));
SET64(5, (s32)rd32(c, (RW(22) + 0)));
SET64(7, (s64)(s32)0xff000000);
SET64(6, RD(17) + RD(0));
SET64(31, 0x28bb08); SET64(7, RD(7) | 0xf04); F_0028B9B8(c);
SET64(4, RD(20) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x28bb18); SET64(5, RD(17) + RD(0)); F_0028B910(c);
{ int t = RD(16) != RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_0028BD78; }
SET64(3, (s32)rd32(c, (RW(22) + 0)));
SET32(16, RW(0) + -2);
{ int t = RD(3) == RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0028BD78; }
SET64(4, (s32)rd32(c, (RW(29) + 20)));
SET64(31, 0x28bb3c); SET64(5, RD(21) + RD(0)); F_00275BD8(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); wr32(c, (RW(22) + 0), RW(3)); if (t) goto L_0028BB60; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(20) + RD(0));
SET64(31, 0x28bb58); SET64(5, RD(5) | 0xf05); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0028BD7C;
L_0028BB60:;
SET64(3, (s32)rd32(c, (RW(29) + 16)));
SET64(17, RD(3) & 0x40);
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(21) + 24))); goto L_0028BBE4; }
SET64(4, (s32)rd32(c, (RW(20) + 2316)));
{ int t = RSD(4) <= 0; SET32(5, RW(0) + 95); if (t) goto L_0028BBA0; }
SET64(3, (s32)rd32(c, (RW(21) + 0)));
if (RD(4) != RD(3)) { wr32(c, (RW(22) + 0), RW(16)); goto L_0028BD78; }
SET64(4, (s32)rd32(c, (RW(20) + 2320)));
SET64(3, (s32)rd32(c, (RW(21) + 4)));
{ int t = RD(4) == RD(3);  if (t) goto L_0028BBA0; }
wr32(c, (RW(22) + 0), RW(16)); goto L_0028BD78;
L_0028BBA0:;
SET64(31, 0x28bba8); SET64(4, RD(20) + RD(0)); F_00294A30(c);
SET64(4, RD(20) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x28bbb8); SET32(5, RW(0) + 95); F_00294A30(c);
{ int t = RD(16) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0028BBE0; }
SET64(5, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(16); SET64(31, 0x28bbcc); SET64(6, (s32)rd32(c, (RW(21) + 4))); rt_call(c, t); }
{ int t = RD(2) == RD(0); SET32(3, RW(0) + -2); if (t) goto L_0028BBE0; }
SET64(2, RD(0) + RD(0));
wr32(c, (RW(22) + 0), RW(3)); goto L_0028BD78;
L_0028BBE0:;
SET64(4, (s32)rd32(c, (RW(21) + 24)));
L_0028BBE4:;
SET32(6, RW(0) + 1);
if (RD(4) != RD(6)) { SET64(5, (s32)rd32(c, (RW(20) + 56))); goto L_0028BBF8; }
wr32(c, (RW(19) + 372), RW(0)); goto L_0028BC58;
L_0028BBF8:;
SET32(2, RW(0) + 3);
if (RD(5) != RD(2)) { SET64(4, (s32)rd32(c, (RW(29) + 20))); goto L_0028BC5C; }
SET64(3, (s32)rd32(c, (RW(19) + 356)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 2); if (t) goto L_0028BC58; }
{ int t = RD(4) != RD(2); SET64(3, (s32)rd32(c, (RW(3) + 108))); if (t) goto L_0028BC40; }
SET64(2, (s32)rd32(c, (RW(21) + 20)));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_0028BC5C; }
SET64(2, RSD(3) < (s64)512);
if (RD(2) == RD(0)) { SET32(6, RW(23) + 16); goto L_0028BC60; }
wr32(c, (RW(19) + 372), RW(6)); goto L_0028BC58;
L_0028BC40:;
{ int t = RD(4) != RD(5); SET64(4, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_0028BC5C; }
SET64(2, (s32)rd32(c, (RW(21) + 20)));
SET64(2, RSD(2) < RSD(3));
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 372), RW(6)); goto L_0028BC58; }
L_0028BC58:;
SET64(4, (s32)rd32(c, (RW(29) + 20)));
L_0028BC5C:;
SET32(6, RW(23) + 16);
L_0028BC60:;
SET64(31, 0x28bc68); SET64(5, RD(0) + RD(0)); F_00275EC8(c);
SET64(2, (s32)rd32(c, (RW(19) + 268)));
SET64(3, (s32)rd32(c, (RW(21) + 48)));
{ int t = RD(2) == RD(3); SET32(2, RW(0) + 1); if (t) goto L_0028BC88; }
wr32(c, (RW(19) + 268), RW(3));
wr32(c, (RW(19) + 272), RW(2)); goto L_0028BC8C;
L_0028BC88:;
wr32(c, (RW(19) + 272), RW(0));
L_0028BC8C:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(30) + 0))); goto L_0028BCE4; }
SET32(5, RW(0) + 77);
SET64(31, 0x28bca0); SET64(4, RD(20) + RD(0)); F_00294A30(c);
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 78);
SET64(31, 0x28bcb0); SET64(17, RD(2) + RD(0)); F_00294A30(c);
{ int t = RD(17) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0028BCE0; }
SET64(4, (s32)rd32(c, (RW(30) + 0)));
SET32(6, RW(0) + 1);
SET64(31, 0x28bcc8); SET64(5, (s32)rd32(c, (RW(30) + 4))); F_00274C00(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028BCE0; }
SET64(5, (s32)rd32(c, (RW(30) + 0)));
SET32(6, RW(2) - RW(5));
{ u32 t = RW(17); SET64(31, 0x28bce0); SET32(6, RW(6) + 4); rt_call(c, t); }
L_0028BCE0:;
SET64(4, (s32)rd32(c, (RW(30) + 0)));
L_0028BCE4:;
SET32(6, RW(0) + 4);
SET64(31, 0x28bcf0); SET64(5, (s32)rd32(c, (RW(30) + 4))); F_00274C00(c);
SET64(4, RD(20) + RD(0));
SET64(9, (s32)rd32(c, (RW(19) + 272)));
SET64(5, RD(21) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(7, RD(29) + RD(0));
SET64(31, 0x28bd0c); SET32(8, RW(29) + 8); F_0028BDA8(c);
SET64(3, (s32)rd32(c, (RW(19) + 120)));
SET64(5, (s32)rd32(c, (RW(29) + 16)));
SET64(2, RD(0) + RD(0));
SET64(4, rd64(c, (RW(29) + 8)));
SET64(3, RD(5) & RD(3));
{ int t = RD(3) == RD(0); wr64(c, (RW(19) + 4256), RD(4)); if (t) goto L_0028BD78; }
SET64(6, (s32)rd32(c, (RW(19) + 272)));
SET64(4, RD(20) + RD(0));
SET64(31, 0x28bd38); SET64(5, RD(21) + RD(0)); F_0028C038(c);
SET64(4, RD(20) + RD(0));
SET64(7, (s32)rd32(c, (RW(19) + 272)));
SET64(5, RD(21) + RD(0));
SET64(31, 0x28bd4c); SET64(6, rd64(c, (RW(29) + 0))); F_0028C390(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x28bd58); SET64(5, RD(21) + RD(0)); F_0028C938(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x28bd64); SET64(5, RD(21) + RD(0)); F_0028CA18(c);
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 20)));
SET64(6, RD(21) + RD(0));
SET64(31, 0x28bd78); SET64(7, RD(30) + RD(0)); F_0028CBB0(c);
L_0028BD78:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0028BD7C:;
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

void F_0028BDA8(Ctx *c) { /* func_0028BDA8 */
ENTER(0x28bda8);
SET32(29, RW(29) + -80);
SET32(3, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(8) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(9) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET32(2, RW(16) + 8112);
wr64(c, (RW(29) + 64), RD(31));
SET64(7, RD(29) + RD(0));
SET64(19, (s32)rd32(c, (RW(2) + 8)));
SET64(5, (s32)rd32(c, (RW(2) + 16)));
wr64(c, (RW(20) + 0), RD(3));
{ int t = RD(6) == RD(0); wr64(c, (RW(17) + 0), RD(3)); if (t) goto L_0028BE2C; }
SET64(31, 0x28be04);  F_00293708(c);
SET32(4, RW(16) + 3368);
SET64(2, rd64(c, (RW(29) + 0)));
SET64(7, RD(29) + RD(0));
SET64(9, RD(17) + RD(0));
{ int t = RSD(2) < 0; SET64(8, RD(18) + RD(0)); if (t) goto L_0028BE2C; }
SET32(5, RW(19) + 280);
SET64(31, 0x28be28); SET64(6, RD(21) + RD(0)); F_0028BE78(c);
wr64(c, (RW(20) + 0), RD(2));
L_0028BE2C:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_0028BE50(Ctx *c) { /* func_0028BE50 */
ENTER(0x28be50);
SET32(2, RW(4) + 16);
SET32(3, RW(0) + -1);
SET32(5, RW(0) + -1);
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr64(c, (RW(2) + 0), RD(3));
wr32(c, (RW(2) + 12), RW(5));
wr32(c, (RW(2) + 8), RW(0)); return;
}

void F_0028BE78(Ctx *c) { /* func_0028BE78 */
ENTER(0x28be78);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(23));
SET64(23, RD(8) + RD(0));
wr64(c, (RW(29) + 64), RD(30));
SET64(30, RD(9) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 72), RD(31));
SET64(2, (s32)rd32(c, (RW(19) + 16)));
SET64(3, rd64(c, (RW(17) + 336)));
SET32(2, RW(2) << 2);
SET64(22, (s64)(s32)0x4b0000);
SET32(22, RW(22) + RW(2));
SET64(22, (s32)rd32(c, (RW(22) + 5664)));
{ int t = RSD(3) >= 0; SET64(21, (s32)rd32(c, (RW(19) + 20))); if (t) goto L_0028BEFC; }
SET64(4, RD(21) + RD(0));
SET64(31, 0x28bee8); SET64(5, RD(22) + RD(0)); F_0028BFF8(c);
SET64(3, rd64(c, (RW(18) + 0)));
SET64(3, RD(3) - RD(2));
SET64(2, RSD(3) < (s64)0);
if (RD(2) != 0) SET64(3, RD(0));
wr64(c, (RW(17) + 336), RD(3));
L_0028BEFC:;
SET64(2, rd64(c, (RW(18) + 0)));
SET32(20, RW(16) + 16);
SET64(4, RD(20) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(17, RD(2) - RD(3));
SET32(6, RW(0) + 4);
SET64(2, RSD(17) < (s64)0);
SET64(31, 0x28bf20); if (RD(2) != 0) SET64(17, RD(0)); F_00127180(c);
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 3); if (t) goto L_0028BF68; }
SET64(3, rd64(c, (RW(18) + 0)));
SET64(4, (s32)rd32(c, (RW(19) + 24)));
wr64(c, (RW(20) + 0), RD(3));
SET64(2, rd64(c, (RW(18) + 8)));
wr32(c, (RW(16) + 0), RW(21));
wr64(c, (RW(16) + 24), RD(2));
{ int t = RD(4) != RD(5); wr32(c, (RW(16) + 4), RW(0)); if (t) goto L_0028BF58; }
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 8), RW(2)); goto L_0028BF5C;
L_0028BF58:;
wr32(c, (RW(16) + 8), RW(0));
L_0028BF5C:;
SET64(2, rd64(c, (RW(18) + 0)));
wr64(c, (RW(30) + 0), RD(2)); goto L_0028BFC0;
L_0028BF68:;
if (RD(23) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_0028BF90; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(16) + 0), RW(0));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(16) + 8), RW(0));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 4), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_0028BF90:;
SET64(5, RD(22) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET32(4, RW(21) - RW(4));
SET64(6, (s32)rd32(c, (RW(16) + 4)));
SET64(2, RSD(4) < RSD(3));
if (RD(2) == 0) SET64(3, RD(4));
SET32(4, RW(6) + RW(4));
SET64(31, 0x28bfb4); wr32(c, (RW(16) + 8), RW(3)); F_0028BFF8(c);
SET64(17, RD(17) + RD(2));
SET64(2, RSD(17) < (s64)0);
if (RD(2) != 0) SET64(17, RD(0));
L_0028BFC0:;
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(23, rd64(c, (RW(29) + 56)));
SET64(30, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_0028BFF8(Ctx *c) { /* func_0028BFF8 */
ENTER(0x28bff8);
SET64(2, (s64)(s32)0x55d0000);
SET32(29, RW(29) + -16);
SET64(2, RD(2) | 0x4a80);
mul_s(c, 0, 0, RSW(4), RSW(2));
wr64(c, (RW(29) + 0), RD(31));
SET64(3, c->lo.d[0]);
SET64(4, c->hi.d[0]);
SET64(3, RD(3) << 32);
SET64(4, RD(4) << 32);
SET64(3, RD(3) >> 32);
SET64(31, 0x28c028); SET64(4, RD(4) | RD(3)); F_0011F988(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0028C038(Ctx *c) { /* func_0028C038 */
ENTER(0x28c038);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET32(21, RW(18) + 3368);
wr64(c, (RW(29) + 24), RD(19));
SET64(4, RD(16) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET32(5, RW(18) + 3396);
SET32(17, RW(18) + 4568);
SET64(31, 0x28c07c); SET64(19, (s32)rd32(c, (RW(18) + 8120))); F_0028CB60(c);
{ int t = RD(20) == RD(0); SET32(3, RW(0) + -1); if (t) goto L_0028C0C0; }
SET32(6, RW(0) + 63);
SET32(2, RW(18) + 4820);
L_0028C090:;
SET32(6, RW(6) + -1);
wr16(c, (RW(2) + 0), (u16)RW(3));
{ int t = RSD(6) >= 0; SET32(2, RW(2) + -4); if (t) { POLL(); goto L_0028C090; } }
SET32(2, RW(0) + -1);
SET64(7, (s32)rd32(c, (RW(16) + 20)));
wr16(c, (RW(17) + 2), (u16)RW(2));
SET64(10, (s32)rd32(c, (RW(16) + 24))); goto L_0028C140;
L_0028C0C0:;
SET64(10, (s32)rd32(c, (RW(16) + 24)));
SET32(2, RW(10) + -1);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET64(7, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_0028C140; }
SET64(2, (s32)rd32(c, (RW(19) + 356)));
SET64(4, (s32)rd32(c, (RW(2) + 108)));
SET32(5, RW(7) + 1024);
SET64(8, RD(7) + RD(0));
SET64(3, RSD(7) < RSD(4));
SET32(6, RW(4) + 1);
if (RD(3) != 0) SET64(8, RD(5));
SET64(2, RSD(6) < RSD(8));
{ int t = RD(2) == RD(0); SET64(3, RSD(7) < (s64)0); if (t) goto L_0028C144; }
SET32(5, RW(0) + -1);
L_0028C100:;
SET64(3, RSD(6) < (s64)0);
SET32(4, RW(6) + 63);
SET64(2, RD(6) + RD(0));
if (RD(3) != 0) SET64(2, RD(4));
SET32(2, RSW(2) >> 6);
SET32(2, RW(2) << 6);
SET32(2, RW(6) - RW(2));
SET32(6, RW(6) + 1);
SET32(2, RW(2) << 2);
SET64(3, RSD(6) < RSD(8));
SET32(2, RW(2) + RW(17));
{ int t = RD(3) != RD(0); wr16(c, (RW(2) + 0), (u16)RW(5)); if (t) { POLL(); goto L_0028C100; } }
SET64(3, RSD(7) < (s64)0); goto L_0028C144;
L_0028C140:;
SET64(3, RSD(7) < (s64)0);
L_0028C144:;
SET32(4, RW(7) + 63);
SET64(2, RD(7) + RD(0));
SET64(5, rd16(c, (RW(21) + 56)));
if (RD(3) != 0) SET64(2, RD(4));
SET32(8, RSW(2) >> 6);
SET32(3, RW(8) << 6);
SET32(8, RW(7) - RW(3));
SET32(9, RW(8) << 2);
SET32(2, RW(9) + RW(17));
{ int t = RD(20) == RD(0); wr16(c, (RW(2) + 0), (u16)RW(5)); if (t) goto L_0028C178; }
wr16(c, (RW(2) + 2), (u16)RW(0)); goto L_0028C200;
L_0028C178:;
{ int t = RD(7) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_0028C1B0; }
SET64(3, (s16)rd16(c, (RW(17) + 2)));
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET32(7, RW(0) + -1); goto L_0028C1B8; }
wr16(c, (RW(17) + 2), (u16)RW(0)); goto L_0028C200;
L_0028C198:;
SET64(2, rd16(c, (RW(2) + 2)));
SET32(3, RW(9) + RW(17));
SET32(2, RW(5) + RW(2));
wr16(c, (RW(3) + 2), (u16)RW(2)); goto L_0028C200;
L_0028C1B0:;
SET32(7, RW(0) + -1);
L_0028C1B8:;
SET32(3, RW(8) - RW(6));
L_0028C1BC:;
SET32(6, RW(6) + 1);
SET32(5, RW(3) + 63);
SET32(3, RW(3) + 126);
SET64(4, RSD(5) < (s64)0);
SET64(2, RD(5) + RD(0));
if (RD(4) != 0) SET64(2, RD(3));
SET64(4, RSD(6) < (s64)64);
SET32(2, RSW(2) >> 6);
SET32(3, RW(2) << 6);
SET32(2, RW(5) - RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(17));
SET64(3, (s16)rd16(c, (RW(2) + 0)));
{ int t = RD(3) != RD(7); SET64(5, rd16(c, (RW(2) + 0))); if (t) { POLL(); goto L_0028C198; } }
{ int t = RD(4) != RD(0); SET32(3, RW(8) - RW(6)); if (t) { POLL(); goto L_0028C1BC; } }
L_0028C200:;
SET32(5, RW(9) + RW(17));
SET32(3, RW(0) + 3);
SET64(2, rd16(c, (RW(5) + 2)));
{ int t = RD(10) != RD(3); wr16(c, (RW(21) + 58), (u16)RW(2)); if (t) goto L_0028C298; }
SET64(2, (s16)rd16(c, (RW(5) + 0)));
{ int t = RD(2) == RD(0); SET64(3, rd16(c, (RW(5) + 0))); if (t) goto L_0028C298; }
SET64(9, (s32)rd32(c, (RW(19) + 356)));
SET64(4, RD(18) + RD(0));
SET64(7, rd16(c, (RW(5) + 2)));
SET64(6, (s32)rd32(c, (RW(9) + 108)));
SET64(5, RD(9) + RD(0));
SET32(7, RW(3) + RW(7));
SET32(8, RW(6) + 63);
SET64(2, RD(6) + RD(0));
SET64(3, RSD(6) < (s64)0);
if (RD(3) != 0) SET64(2, RD(8));
SET32(2, RSW(2) >> 6);
SET32(3, RW(2) << 6);
SET32(2, RW(6) - RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(17));
wr16(c, (RW(2) + 2), (u16)RW(7));
SET64(31, 0x28c268); wr16(c, (RW(9) + 46), (u16)RW(7)); F_0028C2C0(c);
SET64(4, RD(18) + RD(0));
SET64(5, (s32)rd32(c, (RW(19) + 356)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); { F_0028DED8(c); return; }
L_0028C298:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0028C2C0(Ctx *c) { /* func_0028C2C0 */
ENTER(0x28c2c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x28c2ec); SET32(4, RW(17) + 16); F_00295E60(c);
SET32(16, RW(18) + 3368);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(16) + 96)));
SET32(2, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET32(3, RW(3) - RW(5));
wr32(c, (RW(17) + 12), RW(2));
wr32(c, (RW(17) + 48), RW(3));
wr32(c, (RW(17) + 52), RW(4));
SET64(2, (s32)rd32(c, (RW(16) + 140)));
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) != RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0028C378; }
ldl(c, 2, (RW(17) + 19));
ldr(c, 2, (RW(17) + 12));
ldl(c, 3, (RW(17) + 27));
ldr(c, 3, (RW(17) + 20));
ldl(c, 4, (RW(17) + 35));
ldr(c, 4, (RW(17) + 28));
ldl(c, 5, (RW(17) + 43));
ldr(c, 5, (RW(17) + 36));
sdl(c, 2, (RW(18) + 3479));
sdr(c, 2, (RW(18) + 3472));
sdl(c, 3, (RW(18) + 3487));
sdr(c, 3, (RW(18) + 3480));
sdl(c, 4, (RW(18) + 3495));
sdr(c, 4, (RW(18) + 3488));
sdl(c, 5, (RW(18) + 3503));
sdr(c, 5, (RW(18) + 3496));
ldl(c, 2, (RW(17) + 51));
ldr(c, 2, (RW(17) + 44));
SET64(3, (s32)rd32(c, (RW(17) + 52)));
sdl(c, 2, (RW(18) + 3511));
sdr(c, 2, (RW(18) + 3504));
wr32(c, (RW(18) + 3512), RW(3));
L_0028C378:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0028C390(Ctx *c) { /* func_0028C390 */
ENTER(0x28c390);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 52);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x28c3c4); SET64(20, RD(7) + RD(0)); F_00294A30(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028C41C; }
{ int t = RSD(19) >= 0; SET64(4, RD(18) + RD(0)); if (t) goto L_0028C408; }
SET64(2, (s32)rd32(c, (RW(17) + 48)));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 52); if (t) goto L_0028C40C; }
SET64(2, (s8)rd8(c, (RW(17) + 87)));
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 1); if (t) goto L_0028C410; }
if (RD(20) == RD(0)) { SET32(2, RW(0) + 1); goto L_0028C41C; }
SET64(31, 0x28c400); SET64(5, RD(17) + RD(0)); F_0028C470(c);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0028C418; }
L_0028C408:;
SET32(5, RW(0) + 52);
L_0028C40C:;
SET32(6, RW(0) + 1);
L_0028C410:;
SET64(31, 0x28c418); SET32(16, RW(0) + 1); F_00294868(c);
L_0028C418:;
SET32(2, RW(0) + 1);
L_0028C41C:;
{ int t = RD(16) != RD(2); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0028C450; }
SET64(4, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(7, RD(20) + RD(0));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_0028C530(c); return; }
L_0028C450:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0028C470(Ctx *c) { /* func_0028C470 */
ENTER(0x28c470);
SET32(29, RW(29) + -64);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 3472)));
{ int t = RD(3) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0028C520; }
SET32(5, RW(29) + 32);
ldl(c, 2, (RW(16) + 3403));
ldr(c, 2, (RW(16) + 3396));
ldl(c, 3, (RW(16) + 3411));
ldr(c, 3, (RW(16) + 3404));
ldl(c, 7, (RW(16) + 3419));
ldr(c, 7, (RW(16) + 3412));
ldl(c, 8, (RW(16) + 3427));
ldr(c, 8, (RW(16) + 3420));
sdl(c, 2, (RW(29) + 7));
sdr(c, 2, (RW(29) + 0));
sdl(c, 3, (RW(29) + 15));
sdr(c, 3, (RW(29) + 8));
sdl(c, 7, (RW(29) + 23));
sdr(c, 7, (RW(29) + 16));
sdl(c, 8, (RW(29) + 31));
sdr(c, 8, (RW(29) + 24));
SET64(31, 0x28c4dc); SET32(6, RW(29) + 36); F_00295E60(c);
SET32(5, RW(29) + 40);
SET32(6, RW(29) + 36);
SET64(31, 0x28c4ec); SET32(4, RW(16) + 3476); F_00295E60(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x28c4f8); SET32(5, RW(0) + 53); F_00294A30(c);
SET64(6, (s32)rd32(c, (RW(29) + 32)));
SET64(5, (s32)rd32(c, (RW(29) + 40)));
SET64(3, (s32)rd32(c, (RW(29) + 36)));
SET64(4, RSD(5) < RSD(6));
mul_s(c, 0, 3, RSW(2), RSW(3));
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028C520; }
SET32(2, RW(5) + RW(3));
SET64(2, RSD(6) < RSD(2));
SET64(2, RD(2) < (u64)(s64)1);
L_0028C520:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0028C530(Ctx *c) { /* func_0028C530 */
ENTER(0x28c530);
SET32(29, RW(29) + -32);
SET64(8, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(8) + 3368);
wr64(c, (RW(29) + 8), RD(17));
SET64(4, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(17, (s32)rd32(c, (RW(5) + 20)));
SET64(6, (s32)rd32(c, (RW(5) + 28)));
{ int t = RD(7) == RD(0); SET64(5, (s32)rd32(c, (RW(5) + 16))); if (t) goto L_0028C580; }
{ int t = RSD(4) < 0; SET64(31, rd64(c, (RW(29) + 16))); if (t) goto L_0028C580; }
SET64(7, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(8, RW(8) + 3396);
SET32(29, RW(29) + 32); { F_0028C628(c); return; }
L_0028C580:;
SET64(2, (s32)rd32(c, (RW(16) + 104)));
{ int t = RD(2) != RD(0);  if (t) goto L_0028C5B8; }
SET64(2, (s32)rd32(c, (RW(8) + 13864)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028C614; }
wr32(c, (RW(16) + 28), RW(5));
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 44), RW(0)); goto L_0028C610;
L_0028C5B8:;
{ int t = RD(7) == RD(0); SET32(4, RW(16) + 108); if (t) goto L_0028C5E0; }
SET64(31, 0x28c5c8); SET32(5, RW(16) + 28); F_0028C840(c);
SET32(2, RW(17) << 2);
SET64(3, rd16(c, (RW(16) + 58)));
SET32(2, RW(2) + RW(16));
wr16(c, (RW(16) + 1202), (u16)RW(3));
wr16(c, (RW(2) + 1202), (u16)RW(3)); goto L_0028C610;
L_0028C5E0:;
SET64(3, (s32)rd32(c, (RW(16) + 108)));
SET64(4, (s32)rd32(c, (RW(16) + 112)));
SET64(5, (s32)rd32(c, (RW(16) + 116)));
SET64(6, (s32)rd32(c, (RW(16) + 120)));
SET64(7, (s32)rd32(c, (RW(16) + 124)));
SET64(2, (s32)rd32(c, (RW(16) + 128)));
wr32(c, (RW(16) + 28), RW(3));
wr32(c, (RW(16) + 48), RW(2));
wr32(c, (RW(16) + 32), RW(4));
wr32(c, (RW(16) + 36), RW(5));
wr32(c, (RW(16) + 40), RW(6));
wr32(c, (RW(16) + 44), RW(7));
L_0028C610:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028C614:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0028C628(Ctx *c) { /* func_0028C628 */
ENTER(0x28c628);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
SET32(2, RW(16) << 2);
wr64(c, (RW(29) + 32), RD(20));
SET64(20, (s64)(s32)0x4b0000);
SET32(20, RW(20) + RW(2));
SET64(20, (s32)rd32(c, (RW(20) + 5664)));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
SET32(5, RW(20) << 1);
SET64(6, (s64)(s32)0x55d0000);
SET64(6, RD(6) | 0x4a80);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(31));
SET64(19, (s64)(s32)0x4b0000);
SET32(19, RW(19) + RW(2));
SET64(19, (s32)rd32(c, (RW(19) + 5064)));
SET64(31, 0x28c684); SET64(21, RD(8) + RD(0)); F_00278608(c);
SET64(5, RD(2) << 32);
SET64(5, RSD(5) >> 32);
wr32(c, (RW(21) + 0), RW(16));
SET64(3, RD(5) & 0x1);
SET32(5, RSW(5) >> 1);
SET32(5, RW(5) - RW(17));
wr32(c, (RW(21) + 4), RW(18));
SET64(2, RSD(5) < (s64)0);
wr16(c, (RW(21) + 30), (u16)RW(3));
{ int t = RD(18) == RD(0); if (RD(2) != 0) SET64(5, RD(0)); if (t) goto L_0028C7C0; }
SET32(2, RW(0) + 29970);
{ int t = RD(20) == RD(2); SET64(2, RD(0) | 0xea24); if (t) goto L_0028C6D0; }
if (RD(20) != RD(2)) { div_s(c, 0, RSW(5), RSW(19)); goto L_0028C7C4; }
SET64(2, (s64)(s32)0x4b0000); goto L_0028C6E0;
L_0028C6D0:;
SET64(2, (s64)(s32)0x4b0000);
SET32(8, RW(2) + 5104); goto L_0028C6E4;
L_0028C6E0:;
SET32(8, RW(2) + 5136);
L_0028C6E4:;
SET64(2, (s32)rd32(c, (RW(8) + 0)));
div_s(c, 0, RSW(5), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x28c6f0); goto L_0028C6F4; }
L_0028C6F4:;
SET64(3, (s32)rd32(c, (RW(8) + 4)));
SET64(6, (s32)rd32(c, (RW(8) + 8)));
SET64(4, c->hi.d[0]);
SET64(5, c->lo.d[0]);
div_s(c, 0, RSW(4), RSW(3));
SET64(10, RD(5) + RD(0));
SET64(2, c->hi.d[0]);
SET64(4, c->lo.d[0]);
SET64(5, RD(2) + RD(0));
SET64(2, RSD(5) < RSD(6));
{ int t = RD(2) == RD(0); SET64(11, RD(4) + RD(0)); if (t) goto L_0028C748; }
SET64(2, (s32)rd32(c, (RW(8) + 20)));
SET64(9, RD(0) + RD(0));
div_s(c, 0, RSW(5), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x28c734); goto L_0028C738; }
L_0028C738:;
SET64(4, c->hi.d[0]);
SET64(3, c->lo.d[0]);
SET64(7, RD(4) + RD(0)); goto L_0028C7AC;
L_0028C748:;
SET64(2, (s32)rd32(c, (RW(8) + 12)));
SET32(5, RW(5) - RW(6));
div_s(c, 0, RSW(5), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x28c758); goto L_0028C75C; }
L_0028C75C:;
SET64(6, (s32)rd32(c, (RW(8) + 16)));
SET64(3, c->hi.d[0]);
SET64(4, c->lo.d[0]);
SET64(5, RD(3) + RD(0));
SET64(2, RSD(5) < RSD(6));
{ int t = RD(2) == RD(0); SET32(9, RW(4) + 1); if (t) goto L_0028C788; }
SET64(2, (s32)rd32(c, (RW(8) + 28)));
SET64(3, RD(0) + RD(0));
SET32(7, RW(5) + RW(2)); goto L_0028C7AC;
L_0028C788:;
SET64(2, (s32)rd32(c, (RW(8) + 20)));
SET32(5, RW(5) - RW(6));
div_s(c, 0, RSW(5), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x28c798); goto L_0028C79C; }
L_0028C79C:;
SET64(3, c->lo.d[0]);
SET64(4, c->hi.d[0]);
SET32(3, RW(3) + 1);
SET64(7, RD(4) + RD(0));
L_0028C7AC:;
SET64(2, (s32)rd32(c, (RW(8) + 24)));
mul_s(c, 0, 4, RSW(2), RSW(11));
SET32(9, RW(4) + RW(9)); goto L_0028C808;
L_0028C7C0:;
div_s(c, 0, RSW(5), RSW(19));
L_0028C7C4:;
SET32(5, RW(0) + 60);
SET32(3, RW(0) + 60);
SET32(4, RW(0) + 60);
if (RD(19) == RD(0)) { rt_break(c, 0x28c7d4); goto L_0028C7D8; }
L_0028C7D8:;
SET32(6, RW(0) + 60);
SET64(2, c->lo.d[0]);
SET64(7, c->hi.d[0]);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
SET64(4, c->hi.d[0]);
div_s(c, 0, RSW(2), RSW(3));
SET64(3, RD(4) + RD(0));
SET64(2, c->lo.d[0]);
SET64(5, c->hi.d[0]);
SET64(10, RD(2) + RD(0));
SET64(9, RD(5) + RD(0));
L_0028C808:;
wr32(c, (RW(21) + 20), RW(7));
wr32(c, (RW(21) + 8), RW(10));
wr32(c, (RW(21) + 12), RW(9));
wr32(c, (RW(21) + 16), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0028C840(Ctx *c) { /* func_0028C840 */
ENTER(0x28c840);
SET64(13, RD(4) + RD(0));
SET32(8, RW(0) + 60);
SET64(3, (s16)rd16(c, (RW(13) + 28)));
SET32(10, RW(0) + 60);
SET64(2, (s16)rd16(c, (RW(13) + 30)));
SET32(12, RW(0) + 60);
SET64(7, (s32)rd32(c, (RW(13) + 24)));
SET32(11, RW(0) + 60);
SET32(14, RW(3) + RW(2));
SET64(15, (s32)rd32(c, (RW(13) + 0)));
SET64(4, (s32)rd32(c, (RW(13) + 20)));
SET32(2, RW(14) >> 31);
SET32(2, RW(14) + RW(2));
SET32(6, RW(15) << 2);
SET32(4, RW(4) + RW(7));
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(6));
SET64(3, (s32)rd32(c, (RW(3) + 5064)));
SET32(2, RSW(2) >> 1);
SET32(9, RW(4) + 1);
SET32(9, RW(9) + RW(2));
SET32(2, RW(2) << 1);
div_s(c, 0, RSW(9), RSW(3));
SET64(4, (s32)rd32(c, (RW(13) + 16)));
SET64(6, (s32)rd32(c, (RW(13) + 12)));
if (RD(3) == RD(0)) { rt_break(c, 0x28c8a8); goto L_0028C8AC; }
L_0028C8AC:;
SET64(10, (s32)rd32(c, (RW(13) + 8)));
SET64(3, (s32)rd32(c, (RW(13) + 4)));
SET32(14, RW(14) - RW(2));
SET64(7, c->lo.d[0]);
SET64(9, c->hi.d[0]);
SET32(4, RW(4) + RW(7));
div_s(c, 0, RSW(4), RSW(8));
SET64(4, c->lo.d[0]);
SET64(7, c->hi.d[0]);
SET32(6, RW(6) + RW(4));
div_s(c, 0, RSW(6), RSW(8));
SET64(6, c->lo.d[0]);
SET64(4, c->hi.d[0]);
{ int t = RD(3) == RD(0); SET32(10, RW(10) + RW(6)); if (t) goto L_0028C914; }
if (RD(7) != RD(0)) { wr32(c, (RW(5) + 0), RW(15)); goto L_0028C918; }
SET32(2, RW(0) + 10);
div_s(c, 0, RSW(4), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x28c8fc); goto L_0028C900; }
L_0028C900:;
SET64(3, c->hi.d[0]);
{ int t = RD(3) == RD(0); SET64(3, RD(9) < (u64)(s64)2); if (t) goto L_0028C914; }
SET32(2, RW(0) + 2);
if (RD(3) != 0) SET64(9, RD(2));
L_0028C914:;
wr32(c, (RW(5) + 0), RW(15));
L_0028C918:;
wr16(c, (RW(5) + 30), (u16)RW(14));
SET64(2, (s32)rd32(c, (RW(13) + 4)));
wr32(c, (RW(5) + 8), RW(10));
wr32(c, (RW(5) + 4), RW(2));
wr32(c, (RW(5) + 12), RW(4));
wr32(c, (RW(5) + 16), RW(7));
wr32(c, (RW(5) + 20), RW(9)); return;
}

void F_0028C938(Ctx *c) { /* func_0028C938 */
ENTER(0x28c938);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET32(16, RW(17) + 3428);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0028CA04; }
SET32(5, RW(29) + 32);
SET32(6, RW(29) + 36);
ldl(c, 2, (RW(17) + 3403));
ldr(c, 2, (RW(17) + 3396));
ldl(c, 3, (RW(17) + 3411));
ldr(c, 3, (RW(17) + 3404));
ldl(c, 7, (RW(17) + 3419));
ldr(c, 7, (RW(17) + 3412));
ldl(c, 8, (RW(17) + 3427));
ldr(c, 8, (RW(17) + 3420));
sdl(c, 2, (RW(29) + 7));
sdr(c, 2, (RW(29) + 0));
sdl(c, 3, (RW(29) + 15));
sdr(c, 3, (RW(29) + 8));
sdl(c, 7, (RW(29) + 23));
sdr(c, 7, (RW(29) + 16));
sdl(c, 8, (RW(29) + 31));
sdr(c, 8, (RW(29) + 24));
SET64(31, 0x28c9ac); wr32(c, (RW(29) + 24), RW(0)); F_00295E60(c);
SET64(2, (s32)rd32(c, (RW(29) + 32)));
SET32(3, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(29) + 36)));
ldl(c, 5, (RW(29) + 7));
ldr(c, 5, (RW(29) + 0));
ldl(c, 6, (RW(29) + 15));
ldr(c, 6, (RW(29) + 8));
ldl(c, 7, (RW(29) + 23));
ldr(c, 7, (RW(29) + 16));
ldl(c, 8, (RW(29) + 31));
ldr(c, 8, (RW(29) + 24));
sdl(c, 5, (RW(17) + 3439));
sdr(c, 5, (RW(17) + 3432));
sdl(c, 6, (RW(17) + 3447));
sdr(c, 6, (RW(17) + 3440));
sdl(c, 7, (RW(17) + 3455));
sdr(c, 7, (RW(17) + 3448));
sdl(c, 8, (RW(17) + 3463));
sdr(c, 8, (RW(17) + 3456));
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 40), RW(4));
L_0028CA04:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_0028CA18(Ctx *c) { /* func_0028CA18 */
ENTER(0x28ca18);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET32(5, RW(29) + 32);
SET64(4, RD(29) + RD(0));
ldl(c, 2, (RW(16) + 3403));
ldr(c, 2, (RW(16) + 3396));
ldl(c, 3, (RW(16) + 3411));
ldr(c, 3, (RW(16) + 3404));
ldl(c, 7, (RW(16) + 3419));
ldr(c, 7, (RW(16) + 3412));
ldl(c, 8, (RW(16) + 3427));
ldr(c, 8, (RW(16) + 3420));
sdl(c, 2, (RW(29) + 7));
sdr(c, 2, (RW(29) + 0));
sdl(c, 3, (RW(29) + 15));
sdr(c, 3, (RW(29) + 8));
sdl(c, 7, (RW(29) + 23));
sdr(c, 7, (RW(29) + 16));
sdl(c, 8, (RW(29) + 31));
sdr(c, 8, (RW(29) + 24));
SET64(31, 0x28ca78); SET32(6, RW(29) + 36); F_00295E60(c);
ldl(c, 2, (RW(29) + 7));
ldr(c, 2, (RW(29) + 0));
ldl(c, 3, (RW(29) + 15));
ldr(c, 3, (RW(29) + 8));
ldl(c, 4, (RW(29) + 23));
ldr(c, 4, (RW(29) + 16));
ldl(c, 5, (RW(29) + 31));
ldr(c, 5, (RW(29) + 24));
sdl(c, 2, (RW(16) + 3571));
sdr(c, 2, (RW(16) + 3564));
sdl(c, 3, (RW(16) + 3579));
sdr(c, 3, (RW(16) + 3572));
sdl(c, 4, (RW(16) + 3587));
sdr(c, 4, (RW(16) + 3580));
sdl(c, 5, (RW(16) + 3595));
sdr(c, 5, (RW(16) + 3588));
SET32(2, RW(16) + 3428);
SET32(6, RW(16) + 3560);
SET32(16, RW(16) + 3472);
SET64(4, (s32)rd32(c, (RW(2) + 36)));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(29) + 32)));
SET64(2, (s32)rd32(c, (RW(29) + 36)));
SET32(3, RW(3) - RW(4));
wr32(c, (RW(6) + 0), RW(5));
wr32(c, (RW(6) + 36), RW(3));
wr32(c, (RW(6) + 40), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 36)));
SET64(3, RSD(3) < RSD(2));
if (RD(3) != RD(0)) { SET64(16, rd64(c, (RW(29) + 48))); goto L_0028CB50; }
ldl(c, 7, (RW(6) + 7));
ldr(c, 7, (RW(6) + 0));
ldl(c, 8, (RW(6) + 15));
ldr(c, 8, (RW(6) + 8));
ldl(c, 2, (RW(6) + 23));
ldr(c, 2, (RW(6) + 16));
ldl(c, 3, (RW(6) + 31));
ldr(c, 3, (RW(6) + 24));
sdl(c, 7, (RW(16) + 7));
sdr(c, 7, (RW(16) + 0));
sdl(c, 8, (RW(16) + 15));
sdr(c, 8, (RW(16) + 8));
sdl(c, 2, (RW(16) + 23));
sdr(c, 2, (RW(16) + 16));
sdl(c, 3, (RW(16) + 31));
sdr(c, 3, (RW(16) + 24));
ldl(c, 7, (RW(6) + 39));
ldr(c, 7, (RW(6) + 32));
SET64(8, (s32)rd32(c, (RW(6) + 40)));
sdl(c, 7, (RW(16) + 39));
sdr(c, 7, (RW(16) + 32));
wr32(c, (RW(16) + 40), RW(8));
SET64(16, rd64(c, (RW(29) + 48)));
L_0028CB50:;
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0028CB60(Ctx *c) { /* func_0028CB60 */
ENTER(0x28cb60);
SET64(2, (s32)rd32(c, (RW(4) + 16)));
wr32(c, (RW(5) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 28)));
wr32(c, (RW(5) + 4), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 32)));
wr32(c, (RW(5) + 8), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 36)));
wr32(c, (RW(5) + 12), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 40)));
wr32(c, (RW(5) + 16), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 44)));
wr32(c, (RW(5) + 20), RW(3));
SET64(6, (s32)rd32(c, (RW(4) + 20)));
wr32(c, (RW(5) + 24), RW(6));
SET64(2, rd8(c, (RW(4) + 84)));
wr16(c, (RW(5) + 30), (u16)RW(0));
SET32(2, RW(2) << 24);
SET32(2, RSW(2) >> 24);
wr16(c, (RW(5) + 28), (u16)RW(2)); return;
}

void F_0028CBB0(Ctx *c) { /* func_0028CBB0 */
ENTER(0x28cbb0);
SET32(29, RW(29) + -80);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET32(18, RW(16) + 2316);
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(4, RD(17) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET64(5, RD(29) + RD(0));
SET64(3, (s32)rd32(c, (RW(18) + 16)));
{ int t = RD(3) != RD(0); SET64(19, (s32)rd32(c, (RW(16) + 8120))); if (t) goto L_0028CCB8; }
SET64(31, 0x28cc04);  F_00275CE0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028CC28; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET64(31, 0x28cc1c); SET64(5, RD(5) | 0xf16); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0028CCBC;
L_0028CC28:;
SET32(5, RW(29) + 4);
SET32(6, RW(29) + 8);
SET64(31, 0x28cc38); SET32(7, RW(29) + 12); F_00275D40(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x28cc44); SET32(5, RW(0) + 60); F_00294A30(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 1); if (t) goto L_0028CC58; }
wr32(c, (RW(19) + 276), RW(0)); goto L_0028CC88;
L_0028CC58:;
SET64(31, 0x28cc60);  F_00285080(c);
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET64(4, RD(2) + RD(0));
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2); SET64(2, RSD(3) < RSD(4)); if (t) goto L_0028CC80; }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(29) + 12), RW(3));
SET64(2, RSD(3) < RSD(4));
L_0028CC80:;
if (RD(2) == 0) SET64(3, RD(4));
wr32(c, (RW(19) + 276), RW(3));
L_0028CC88:;
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(20) + RD(0));
SET64(31, 0x28cc98); SET64(4, RD(16) + RD(0)); F_0028CCE0(c);
SET64(4, RD(18) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(21) + RD(0));
SET64(31, 0x28ccac); SET64(7, (s32)rd32(c, (RW(29) + 4))); F_0028CE00(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x28ccb8); SET64(5, RD(18) + RD(0)); F_0028CE38(c);
L_0028CCB8:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0028CCBC:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_0028CCE0(Ctx *c) { /* func_0028CCE0 */
ENTER(0x28cce0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28cd08); SET64(19, RD(4) + RD(0)); F_0028F0B8(c);
SET64(16, RD(2) + RD(0));
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028CDE4; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028CDE4; }
SET64(6, (s32)rd32(c, (RW(18) + 4)));
SET32(7, RW(0) + 512);
SET32(3, RW(16) + 56);
SET64(5, (s32)rd32(c, (RW(18) + 0)));
SET64(2, RSD(6) < (s64)513);
SET64(4, RD(3) + RD(0));
if (RD(2) == 0) SET64(6, RD(7));
SET32(18, RW(19) + 3368);
SET64(31, 0x28cd48); wr32(c, (RW(3) + 512), RW(6)); F_00271EB0(c);
SET32(3, RW(17) << 1);
SET64(2, (s64)(s32)0x30000);
SET32(3, RW(3) + RW(17));
SET32(3, RW(3) << 3);
SET64(2, RD(2) | 0xffff);
{ int t = RD(17) != RD(2); SET32(3, RW(3) + RW(17)); if (t) goto L_0028CD70; }
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 8), RW(0)); goto L_0028CD80;
L_0028CD70:;
SET32(3, RW(3) << 1);
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 8), RW(2));
wr32(c, (RW(16) + 4), RW(3));
L_0028CD80:;
ldl(c, 2, (RW(18) + 67));
ldr(c, 2, (RW(18) + 60));
ldl(c, 3, (RW(18) + 75));
ldr(c, 3, (RW(18) + 68));
ldl(c, 4, (RW(18) + 83));
ldr(c, 4, (RW(18) + 76));
ldl(c, 5, (RW(18) + 91));
ldr(c, 5, (RW(18) + 84));
sdl(c, 2, (RW(16) + 19));
sdr(c, 2, (RW(16) + 12));
sdl(c, 3, (RW(16) + 27));
sdr(c, 3, (RW(16) + 20));
sdl(c, 4, (RW(16) + 35));
sdr(c, 4, (RW(16) + 28));
sdl(c, 5, (RW(16) + 43));
sdr(c, 5, (RW(16) + 36));
ldl(c, 2, (RW(18) + 99));
ldr(c, 2, (RW(18) + 92));
SET64(3, (s32)rd32(c, (RW(18) + 100)));
sdl(c, 2, (RW(16) + 51));
sdr(c, 2, (RW(16) + 44));
wr32(c, (RW(16) + 52), RW(3));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_0028CDE4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028CE00(Ctx *c) { /* func_0028CE00 */
ENTER(0x28ce00);
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET64(8, (s32)rd32(c, (RW(6) + 16)));
wr32(c, (RW(4) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(4) + 4), RW(2));
SET64(3, (s32)rd32(c, (RW(6) + 8)));
wr32(c, (RW(4) + 8), RW(3));
SET64(2, (s32)rd32(c, (RW(6) + 12)));
wr32(c, (RW(4) + 32), RW(7));
wr32(c, (RW(4) + 12), RW(2));
wr32(c, (RW(4) + 20), RW(8));
wr32(c, (RW(4) + 16), RW(5)); return;
}

void F_0028CE38(Ctx *c) { /* func_0028CE38 */
ENTER(0x28ce38);
SET32(29, RW(29) + -16);
SET64(13, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(12, (s32)rd32(c, (RW(13) + 8120)));
SET64(7, (s32)rd32(c, (RW(5) + 4)));
SET32(11, RW(12) + 4);
SET64(6, (s32)rd32(c, (RW(5) + 0)));
SET64(2, (s32)rd32(c, (RW(11) + 8)));
SET64(3, (s32)rd32(c, (RW(11) + 12)));
mul_s(c, 0, 5, RSW(6), RSW(7));
SET64(14, (s32)rd32(c, (RW(13) + 56)));
mul_s(c, 0, 2, RSW(2), RSW(3));
SET64(2, RSD(2) < RSD(5));
{ int t = RD(2) == RD(0); SET64(9, (s32)rd32(c, (RW(11) + 28))); if (t) goto L_0028CE88; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0xf17);
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_0028CE88:;
SET32(5, RW(6) + 15);
SET64(3, RSD(6) < (s64)0);
SET64(2, RSD(7) < (s64)0);
SET32(4, RW(7) + 15);
if (RD(3) != 0) SET64(6, RD(5));
SET32(3, RW(0) + 2);
if (RD(2) != 0) SET64(7, RD(4));
SET32(5, RSW(6) >> 4);
{ int t = RD(14) != RD(3); SET32(2, RSW(7) >> 4); if (t) goto L_0028CEC0; }
mul_s(c, 0, 2, RSW(5), RSW(2));
SET32(2, RW(2) << 10); goto L_0028CED0;
L_0028CEC0:;
mul_s(c, 0, 3, RSW(5), RSW(2));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 7);
L_0028CED0:;
SET32(10, RW(2) + 64);
SET64(3, (s32)rd32(c, (RW(11) + 20)));
SET32(8, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(11) + 24)));
SET32(7, RW(3) + 15);
SET64(5, RSD(3) < (s64)0);
SET32(6, RW(2) + 15);
SET64(4, RSD(2) < (s64)0);
if (RD(5) != 0) SET64(3, RD(7));
if (RD(4) != 0) SET64(2, RD(6));
SET32(3, RSW(3) >> 4);
{ int t = RD(14) != RD(8); SET32(2, RSW(2) >> 4); if (t) goto L_0028CF28; }
mul_s(c, 0, 2, RSW(3), RSW(2));
SET32(2, RW(2) << 10);
SET32(2, RW(2) + 64);
SET64(2, RD(2) < RD(10));
{ int t = RD(2) != RD(0);  if (t) goto L_0028CF48; }
SET64(2, (s32)rd32(c, (RW(11) + 32))); goto L_0028CF60;
L_0028CF28:;
mul_s(c, 0, 3, RSW(3), RSW(2));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 7);
SET32(2, RW(2) + 64);
SET64(2, RD(2) < RD(10));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(11) + 32))); goto L_0028CF60; }
L_0028CF48:;
SET64(5, (s64)(s32)0xff000000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(13) + RD(0));
SET64(5, RD(5) | 0xf18);
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_0028CF60:;
{ int t = RD(2) == RD(0);  if (t) goto L_0028CFA0; }
{ int t = RSD(9) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_0028CFCC; }
SET64(4, RD(2) + RD(0));
SET32(3, RW(12) + 48);
L_0028CF78:;
SET32(5, RW(5) + 1);
wr32(c, (RW(3) + 0), RW(4));
SET64(2, RSD(5) < RSD(9));
SET32(3, RW(3) + 4);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + RW(10)); if (t) { POLL(); goto L_0028CF78; } }
wr32(c, (RW(12) + 376), RW(9)); goto L_0028CFD0;
L_0028CFA0:;
if (RSD(9) <= 0) { wr32(c, (RW(12) + 376), RW(9)); goto L_0028CFD0; }
SET64(5, RD(9) + RD(0));
SET32(5, RW(5) + -1);
L_0028CFB0:;
{ int t = RD(5) != RD(0); SET32(5, RW(5) + -1); if (t) { POLL(); goto L_0028CFB0; } }
L_0028CFCC:;
wr32(c, (RW(12) + 376), RW(9));
L_0028CFD0:;
SET32(5, RW(12) + 48);
SET64(6, RD(9) + RD(0));
SET64(31, 0x28cfe0); SET32(4, RW(12) + 384); F_0028E820(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0028CFF0(Ctx *c) { /* func_0028CFF0 */
ENTER(0x28cff0);
SET64(2, (s32)rd32(c, (RW(4) + 3724)));
SET64(2, ~(RD(0) | RD(2)));
SET32(2, RW(2) >> 31); return;
}

void F_0028D000(Ctx *c) { /* func_0028D000 */
ENTER(0x28d000);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(0) + 1);
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(5, RW(0) + 47);
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x28d034); SET64(17, (s32)rd32(c, (RW(16) + 8120))); F_00294A30(c);
{ int t = RD(2) == RD(19); SET32(18, RW(17) + 140); if (t) goto L_0028D0D4; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x28d048); SET32(5, RW(0) + 39); F_00294A30(c);
if (RD(2) != RD(19)) { SET64(2, (s8)rd8(c, (RW(18) + 88))); goto L_0028D058; }
SET64(2, RD(0) + RD(0)); goto L_0028D0D4;
L_0028D058:;
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028D068; }
SET64(2, (s32)rd32(c, (RW(17) + 364))); goto L_0028D0D4;
L_0028D068:;
SET64(31, 0x28d070); SET64(17, (s32)rd32(c, (RW(18) + 24))); F_0028D260(c);
{ int t = RD(2) != RD(0); SET32(19, RW(0) + 1); if (t) goto L_0028D0C0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x28d084); SET64(5, RD(17) + RD(0)); F_0028D2B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028D0C4; }
SET64(6, RD(20) + RD(0));
SET64(31, 0x28d098); SET64(5, RD(17) + RD(0)); F_0028D300(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028D0C4; }
SET64(31, 0x28d0a8); SET64(5, RD(17) + RD(0)); F_0028D0F8(c);
if (RD(2) != RD(0)) { SET64(4, RD(16) + RD(0)); goto L_0028D0C4; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x28d0bc); SET64(4, RD(16) + RD(0)); F_0028D3E0(c);
SET64(19, RD(0) < RD(2));
L_0028D0C0:;
SET64(4, RD(16) + RD(0));
L_0028D0C4:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x28d0d0); SET64(6, RD(19) + RD(0)); F_0028D158(c);
SET64(2, RD(19) + RD(0));
L_0028D0D4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0028D0F8(Ctx *c) { /* func_0028D0F8 */
ENTER(0x28d0f8);
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
SET64(4, RD(5) + RD(0));
SET32(3, RW(0) + 3);
SET64(6, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 116)));
{ int t = RD(5) == RD(3); SET64(2, RD(5) < (u64)(s64)4); if (t) goto L_0028D140; }
{ int t = RD(2) == RD(0); SET64(2, RD(6) + RD(0)); if (t) goto L_0028D14C; }
SET32(2, RW(0) + 2);
{ int t = RD(5) != RD(2); SET64(2, RD(6) + RD(0)); if (t) goto L_0028D14C; }
SET32(2, RW(4) + -2);
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) != RD(0)) { SET32(6, RW(0) + 1); goto L_0028D148; }
SET64(2, RD(6) + RD(0)); return;
L_0028D140:;
SET64(2, RD(4) ^ RD(5));
SET64(6, RD(2) < (u64)(s64)1);
L_0028D148:;
SET64(2, RD(6) + RD(0));
L_0028D14C:;
 return;
}

void F_0028D158(Ctx *c) { /* func_0028D158 */
ENTER(0x28d158);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 64), RD(31));
SET64(19, (s32)rd32(c, (RW(17) + 8120)));
SET64(2, (s32)rd32(c, (RW(19) + 272)));
SET64(4, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(2) == RD(0); SET64(16, (s32)rd32(c, (RW(19) + 116))); if (t) goto L_0028D1F4; }
SET64(5, RD(29) + RD(0));
SET64(31, 0x28d1a4); SET32(6, RW(29) + 4); F_00275E08(c);
SET32(18, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
if (RD(3) != RD(18)) { SET64(2, (s32)rd32(c, (RW(17) + 3648))); goto L_0028D1C0; }
SET32(16, RW(0) + 5); goto L_0028D1F4;
L_0028D1C0:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 4))); goto L_0028D1E8; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x28d1d4); SET32(5, RW(0) + 73); F_00294A30(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(4, RD(2) ^ RD(18));
if (RD(4) == 0) SET64(3, RD(2));
wr32(c, (RW(29) + 4), RW(3));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
L_0028D1E8:;
SET32(3, RW(0) + 2);
SET64(2, RD(2) ^ RD(18));
if (RD(2) == 0) SET64(16, RD(3));
L_0028D1F4:;
SET32(2, RW(0) + 1);
{ int t = RD(20) != RD(2); SET32(2, RW(0) + 2); if (t) goto L_0028D220; }
SET64(2, (s32)rd32(c, (RW(21) + 24)));
SET32(2, RW(2) + -1);
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) != RD(0)) { SET32(16, RW(0) + 2); goto L_0028D238; }
wr32(c, (RW(19) + 116), RW(16)); goto L_0028D23C;
L_0028D220:;
{ int t = RD(16) != RD(2); SET32(3, RW(0) + 5); if (t) goto L_0028D230; }
SET32(16, RW(0) + 3); goto L_0028D238;
L_0028D230:;
SET64(2, RD(16) ^ 0x3);
if (RD(2) == 0) SET64(16, RD(3));
L_0028D238:;
wr32(c, (RW(19) + 116), RW(16));
L_0028D23C:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_0028D260(Ctx *c) { /* func_0028D260 */
ENTER(0x28d260);
SET32(29, RW(29) + -16);
SET32(5, RW(4) + 13868);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, RD(0) + RD(0));
SET32(3, RW(4) + 3648);
SET64(6, (s32)rd32(c, (RW(5) + 4)));
{ int t = RSD(6) < 0; SET32(8, RW(4) + 3560); if (t) goto L_0028D2A4; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0028D2A8; }
SET64(4, RD(6) + RD(0));
SET64(6, (s32)rd32(c, (RW(8) + 36)));
SET64(5, (s32)rd32(c, (RW(5) + 8)));
SET64(31, 0x28d2a0); SET64(7, (s32)rd32(c, (RW(8) + 40))); F_0026BF08(c);
SET64(2, RD(2) < (u64)(s64)1);
L_0028D2A4:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0028D2A8:;
SET32(29, RW(29) + 16); return;
}

void F_0028D2B0(Ctx *c) { /* func_0028D2B0 */
ENTER(0x28d2b0);
SET32(2, RW(0) + 2);
{ int t = RD(5) == RD(2); SET32(4, RW(4) + 2564); if (t) goto L_0028D2F0; }
SET64(2, RD(5) < (u64)(s64)3);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_0028D2E0; }
SET32(2, RW(0) + 1);
if (RD(5) == RD(2)) { SET64(2, (s32)rd32(c, (RW(4) + 8))); goto L_0028D2F4; }
 goto L_0028D2F8;
L_0028D2E0:;
if (RD(5) == RD(2)) { SET64(2, (s32)rd32(c, (RW(4) + 16))); goto L_0028D2F4; }
SET32(2, RW(0) + 1); return;
L_0028D2F0:;
SET64(2, (s32)rd32(c, (RW(4) + 12)));
L_0028D2F4:;
SET64(2, RD(2) < (u64)(s64)1);
L_0028D2F8:;
 return;
}

void F_0028D300(Ctx *c) { /* func_0028D300 */
ENTER(0x28d300);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
SET32(5, RW(0) + 7);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28d32c); SET64(16, RD(4) + RD(0)); F_00294A30(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028D3C4; }
SET32(2, RW(0) + 3);
SET32(18, RW(16) + 2384);
{ int t = RD(19) != RD(2); SET32(4, RW(16) + 2316); if (t) goto L_0028D380; }
SET64(6, (s32)rd32(c, (RW(4) + 8)));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
mul_s(c, 0, 0, RSW(6), RSW(2));
SET64(6, c->lo.d[0]);
SET64(31, 0x28d360); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_00274E18(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET64(2, RD(3) + RD(0)); if (t) goto L_0028D3C4; }
SET64(2, (s32)rd32(c, (RW(18) + 16)));
SET32(2, RW(2) + 1);
wr32(c, (RW(18) + 16), RW(2)); goto L_0028D3C0;
L_0028D380:;
SET32(2, RW(0) + 2);
{ int t = RD(19) != RD(2); SET64(3, RD(0) + RD(0)); if (t) goto L_0028D3C0; }
SET64(6, (s32)rd32(c, (RW(4) + 8)));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
mul_s(c, 0, 0, RSW(6), RSW(2));
SET64(6, c->lo.d[0]);
SET64(31, 0x28d3a8); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_002752C0(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET64(2, RD(3) + RD(0)); if (t) goto L_0028D3C4; }
SET64(2, (s32)rd32(c, (RW(18) + 20)));
SET32(2, RW(2) + 1);
wr32(c, (RW(18) + 20), RW(2));
L_0028D3C0:;
SET64(2, RD(3) + RD(0));
L_0028D3C4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028D3E0(Ctx *c) { /* func_0028D3E0 */
ENTER(0x28d3e0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET32(17, RW(16) + 3368);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET32(3, RW(16) + 3648);
wr64(c, (RW(29) + 56), RD(21));
SET32(6, RW(16) + 3560);
wr64(c, (RW(29) + 64), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET64(21, (s32)rd32(c, (RW(16) + 8120))); if (t) goto L_0028D438; }
SET64(2, (s32)rd32(c, (RW(3) + 36)));
SET64(3, (s32)rd32(c, (RW(6) + 36)));
SET64(4, (s32)rd32(c, (RW(17) + 356)));
SET32(3, RW(3) - RW(2));
SET32(20, RW(3) + RW(4));
L_0028D438:;
SET64(2, (s32)rd32(c, (RW(17) + 24)));
{ int t = RD(2) == RD(0); SET64(19, (s32)rd32(c, (RW(6) + 40))); if (t) goto L_0028D460; }
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(20) + RD(0));
{ u32 t = RW(2); SET64(31, 0x28d458); SET64(7, RD(19) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 16))); goto L_0028D538;
L_0028D460:;
SET32(2, RW(0) + 1);
if (RD(18) != RD(2)) { SET32(2, RW(18) + -1); goto L_0028D47C; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x28d478); SET64(5, RD(20) + RD(0)); F_002950A8(c);
SET32(2, RW(18) + -1);
L_0028D47C:;
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET64(5, RD(20) + RD(0)); if (t) goto L_0028D494; }
SET64(31, 0x28d490); SET64(4, RD(17) + RD(0)); F_00295148(c);
SET64(20, RD(2) + RD(0));
L_0028D494:;
SET64(31, 0x28d49c); SET64(4, RD(16) + RD(0)); F_00296990(c);
SET64(2, RSD(2) < (s64)1001);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028D4C0; }
SET64(3, (s32)rd32(c, (RW(21) + 132)));
SET64(4, (s32)rd32(c, (RW(16) + 2716)));
SET64(3, RSD(3) < RSD(4));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028D534; }
SET64(4, RD(16) + RD(0));
L_0028D4C0:;
SET64(5, RD(29) + RD(0));
SET64(31, 0x28d4cc); SET32(6, RW(29) + 4); F_00295758(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
{ int t = RSD(3) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0028D534; }
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET32(6, RW(29) + 8);
SET64(31, 0x28d4ec); SET32(7, RW(29) + 12); F_0028D558(c);
SET64(7, RD(19) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 8)));
SET64(2, (s32)rd32(c, (RW(29) + 12)));
mul_s(c, 0, 6, RSW(19), RSW(6));
if (RD(2) == RD(0)) { rt_break(c, 0x28d500); goto L_0028D504; }
L_0028D504:;
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
div_s(c, 0, RSW(6), RSW(2));
SET64(6, c->lo.d[0]);
SET64(31, 0x28d51c); SET32(6, RW(20) - RW(6)); F_0026BF08(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028D534; }
SET64(3, (s32)rd32(c, (RW(21) + 132)));
SET32(2, RW(0) + 1);
SET32(3, RW(3) + 1);
wr32(c, (RW(21) + 132), RW(3));
L_0028D534:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0028D538:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_0028D558(Ctx *c) { /* func_0028D558 */
ENTER(0x28d558);
SET32(4, RW(4) + 2564);
SET64(2, (s32)rd32(c, (RW(4) + 172)));
wr32(c, (RW(7) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 168)));
wr32(c, (RW(6) + 0), RW(3)); return;
}

void F_0028D570(Ctx *c) { /* func_0028D570 */
ENTER(0x28d570);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 56), RD(31));
SET64(21, (s32)rd32(c, (RW(18) + 8120)));
SET64(31, 0x28d5a8); SET64(17, (s32)rd32(c, (RW(21) + 0))); F_0028D660(c);
SET64(4, RD(16) + RD(0));
SET32(6, RW(0) + 1);
SET64(5, RD(0) + RD(0));
SET64(31, 0x28d5bc); SET32(22, RW(21) + 140); F_002675B0(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x28d5cc); SET64(20, RD(2) + RD(0)); F_00275B20(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1);
SET64(31, 0x28d5e0); SET64(19, RD(2) + RD(0)); F_002675B0(c);
SET32(17, RW(2) - RW(20));
SET64(7, (s64)(s32)0xff000000);
SET64(4, RD(18) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x28d5fc); SET64(7, RD(7) | 0xf07); F_0028B9B8(c);
SET64(4, RD(18) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x28d60c); SET64(5, RD(17) + RD(0)); F_0028B910(c);
SET64(2, RD(16) + RD(0));
SET64(4, RD(18) + RD(0));
{ int t = RD(16) != RD(0); SET32(5, RW(0) + 1); if (t) goto L_0028D638; }
SET64(2, (s8)rd8(c, (RW(22) + 88)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028D62C; }
wr32(c, (RW(21) + 364), RW(2));
L_0028D62C:;
SET64(31, 0x28d634); SET64(6, (s32)rd32(c, (RW(22) + 24))); F_00292A88(c);
SET64(2, RD(0) + RD(0));
L_0028D638:;
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

void F_0028D660(Ctx *c) { /* func_0028D660 */
ENTER(0x28d660);
SET32(5, RW(4) + 3560);
SET64(3, (s32)rd32(c, (RW(4) + 3684)));
SET64(2, (s32)rd32(c, (RW(5) + 36)));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 3604); if (t) goto L_0028D6D0; }
ldl(c, 2, (RW(5) + 7));
ldr(c, 2, (RW(5) + 0));
ldl(c, 3, (RW(5) + 15));
ldr(c, 3, (RW(5) + 8));
ldl(c, 6, (RW(5) + 23));
ldr(c, 6, (RW(5) + 16));
ldl(c, 7, (RW(5) + 31));
ldr(c, 7, (RW(5) + 24));
sdl(c, 2, (RW(4) + 7));
sdr(c, 2, (RW(4) + 0));
sdl(c, 3, (RW(4) + 15));
sdr(c, 3, (RW(4) + 8));
sdl(c, 6, (RW(4) + 23));
sdr(c, 6, (RW(4) + 16));
sdl(c, 7, (RW(4) + 31));
sdr(c, 7, (RW(4) + 24));
ldl(c, 2, (RW(5) + 39));
ldr(c, 2, (RW(5) + 32));
SET64(3, (s32)rd32(c, (RW(5) + 40)));
sdl(c, 2, (RW(4) + 39));
sdr(c, 2, (RW(4) + 32));
wr32(c, (RW(4) + 40), RW(3));
L_0028D6D0:;
 return;
}

void F_0028D6D8(Ctx *c) { /* func_0028D6D8 */
ENTER(0x28d6d8);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 112), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 128), RD(22));
SET32(22, RW(20) + 2544);
wr64(c, (RW(29) + 136), RD(23));
SET64(23, RD(5) + RD(0));
wr64(c, (RW(29) + 144), RD(30));
SET32(2, RW(20) + 2384);
wr64(c, (RW(29) + 80), RD(16));
SET64(6, RD(29) + RD(0));
wr64(c, (RW(29) + 88), RD(17));
SET32(7, RW(29) + 48);
wr64(c, (RW(29) + 96), RD(18));
wr64(c, (RW(29) + 104), RD(19));
wr64(c, (RW(29) + 120), RD(21));
wr64(c, (RW(29) + 152), RD(31));
SET64(19, (s32)rd32(c, (RW(20) + 8120)));
wr32(c, (RW(29) + 60), RW(2));
SET32(30, RW(19) + 140);
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(30) + RD(0));
SET64(31, 0x28d738); wr32(c, (RW(29) + 64), RW(2)); F_0028D988(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0028D954; }
SET32(6, RW(29) + 52);
SET32(7, RW(29) + 56);
SET64(4, RD(20) + RD(0));
SET64(31, 0x28d754); SET64(5, RD(19) + RD(0)); F_0028DC90(c);
SET32(5, RW(19) + 4108);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
SET64(31, 0x28d764); SET64(4, (s32)rd32(c, (RW(2) + 84))); F_0028E1E0(c);
SET64(31, 0x28d76c); SET64(4, RD(20) + RD(0)); F_0028DD18(c);
SET64(31, 0x28d774);  F_0029C800(c);
SET64(4, RD(23) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1);
SET64(31, 0x28d788); SET64(18, RD(2) + RD(0)); F_002675B0(c);
SET64(5, RD(23) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 64)));
SET64(6, RD(29) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(31, 0x28d7a0); SET64(16, RD(2) + RD(0)); F_00290CE8(c);
SET64(4, RD(23) + RD(0));
SET32(6, RW(0) + 1);
SET64(5, RD(0) + RD(0));
SET64(31, 0x28d7b4); SET64(17, RD(2) + RD(0)); F_002675B0(c);
SET64(31, 0x28d7bc); SET32(21, RW(2) - RW(16)); F_0029C800(c);
SET64(4, (s32)rd32(c, (RW(30) + 24)));
SET64(5, RD(2) - RD(18));
SET32(4, RW(4) << 5);
SET32(4, RW(20) + RW(4));
SET64(31, 0x28d7d4); SET32(4, RW(4) + 13880); F_002969B8(c);
SET64(2, (s32)rd32(c, (RW(22) + 12)));
SET64(6, (s32)rd32(c, (RW(29) + 40)));
SET64(7, (s64)(s32)0xff000000);
SET64(8, (s32)rd32(c, (RW(29) + 44)));
SET64(5, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(22) + 16)));
SET32(2, RW(2) + RW(6));
wr32(c, (RW(22) + 12), RW(2));
SET64(4, RD(20) + RD(0));
SET32(3, RW(3) + RW(8));
SET64(6, RD(21) + RD(0));
wr32(c, (RW(22) + 16), RW(3));
SET64(31, 0x28d80c); SET64(7, RD(7) | 0xf06); F_0028B9B8(c);
SET64(4, RD(20) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x28d81c); SET64(5, RD(21) + RD(0)); F_0028B910(c);
{ int t = RD(16) == RD(0);  if (t) goto L_0028D838; }
SET64(31, 0x28d82c); SET64(4, (s32)rd32(c, (RW(29) + 48))); F_0028F418(c);
SET64(2, RD(16) + RD(0)); goto L_0028D954;
L_0028D838:;
if (RSD(21) <= 0) { SET64(2, (s32)rd32(c, (RW(19) + 360))); goto L_0028D940; }
SET64(5, RD(0) + RD(0));
SET64(31, 0x28d84c); SET64(4, RD(20) + RD(0)); F_0028F2E0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x28d858); SET64(5, (s32)rd32(c, (RW(29) + 48))); F_0028DE30(c);
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 48)));
SET64(31, 0x28d868); SET64(6, RD(23) + RD(0)); F_0028DFC0(c);
SET64(2, (s32)rd32(c, (RW(19) + 136)));
SET64(8, (s32)rd32(c, (RW(29) + 48)));
SET32(7, RW(0) + 3);
SET64(5, (s32)rd32(c, (RW(29) + 56)));
wr32(c, (RW(8) + 72), RW(2));
SET64(6, (s32)rd32(c, (RW(30) + 56)));
SET64(2, (s32)rd32(c, (RW(29) + 52)));
SET64(3, (s32)rd32(c, (RW(29) + 40)));
SET64(4, (s32)rd32(c, (RW(19) + 372)));
SET32(3, RW(3) + RW(2));
SET32(3, RW(3) + RW(4));
wr32(c, (RW(8) + 64), RW(3));
SET64(2, (s32)rd32(c, (RW(29) + 44)));
SET32(2, RW(2) + RW(5));
{ int t = RD(6) == RD(7); wr32(c, (RW(8) + 68), RW(2)); if (t) goto L_0028D8C0; }
SET64(2, (s32)rd32(c, (RW(19) + 360)));
if (RD(2) != RD(0)) { wr32(c, (RW(19) + 360), RW(0)); goto L_0028D8C4; }
wr32(c, (RW(19) + 360), RW(8)); goto L_0028D8C4;
L_0028D8C0:;
wr32(c, (RW(19) + 360), RW(0));
L_0028D8C4:;
SET64(2, (s32)rd32(c, (RW(19) + 360)));
wr32(c, (RW(19) + 364), RW(0));
{ int t = RD(2) != RD(0); wr32(c, (RW(19) + 368), RW(0)); if (t) goto L_0028D928; }
SET64(3, (s32)rd32(c, (RW(20) + 56)));
SET32(2, RW(0) + 3);
{ int t = RD(3) != RD(2);  if (t) goto L_0028D908; }
SET64(2, (s32)rd32(c, (RW(30) + 24)));
SET32(2, RW(2) + -1);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0);  if (t) goto L_0028D908; }
SET64(31, 0x28d900); SET64(4, RD(8) + RD(0)); F_0028F440(c);
SET64(2, (s32)rd32(c, (RW(29) + 60))); goto L_0028D914;
L_0028D908:;
SET64(31, 0x28d910); SET64(4, RD(8) + RD(0)); F_0028F428(c);
SET64(2, (s32)rd32(c, (RW(29) + 60)));
L_0028D914:;
SET64(4, (s32)rd32(c, (RW(29) + 64)));
SET32(6, RW(2) + 12);
SET64(31, 0x28d924); SET32(5, RW(2) + 8); F_00277FA8(c);
wr32(c, (RW(19) + 132), RW(0));
L_0028D928:;
SET64(6, (s32)rd32(c, (RW(30) + 24)));
SET64(4, RD(20) + RD(0));
SET64(31, 0x28d938); SET32(5, RW(0) + 1); F_00292A20(c);
SET64(2, RD(0) + RD(0)); goto L_0028D954;
L_0028D940:;
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0028D954; }
SET64(31, 0x28d950); SET64(4, (s32)rd32(c, (RW(29) + 48))); F_0028F418(c);
SET64(2, RD(0) + RD(0));
L_0028D954:;
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

void F_0028D988(Ctx *c) { /* func_0028D988 */
ENTER(0x28d988);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 48), RD(31));
SET64(16, (s32)rd32(c, (RW(19) + 8120)));
SET64(2, (s32)rd32(c, (RW(16) + 360)));
{ int t = RD(2) == RD(0); SET32(21, RW(19) + 2384); if (t) goto L_0028D9D0; }
wr32(c, (RW(20) + 0), RW(2)); goto L_0028D9F0;
L_0028D9D0:;
SET64(31, 0x28d9d8);  F_0028F390(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(20) + 0), RW(2)); if (t) goto L_0028D9F0; }
SET32(3, RW(0) + 1);
SET32(2, RW(0) + -1);
wr32(c, (RW(21) + 40), RW(3)); goto L_0028DC6C;
L_0028D9F0:;
SET64(10, (s32)rd32(c, (RW(20) + 0)));
SET64(3, RD(18) + RD(0));
SET32(4, RW(10) + 88);
SET64(2, RD(18) | RD(4));
SET64(2, RD(2) & 0x7);
{ int t = RD(2) == RD(0); SET64(5, RD(10) + RD(0)); if (t) goto L_0028DA70; }
SET32(2, RW(18) + 128);
L_0028DA10:;
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
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_0028DA10; } }
SET64(2, rd64(c, (RW(16) + 4256))); goto L_0028DAAC;
L_0028DA70:;
SET32(2, RW(18) + 128);
L_0028DA74:;
SET64(6, rd64(c, (RW(3) + 0)));
SET64(7, rd64(c, (RW(3) + 8)));
SET64(8, rd64(c, (RW(3) + 16)));
SET64(9, rd64(c, (RW(3) + 24)));
wr64(c, (RW(4) + 0), RD(6));
wr64(c, (RW(4) + 8), RD(7));
wr64(c, (RW(4) + 16), RD(8));
wr64(c, (RW(4) + 24), RD(9));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_0028DA74; } }
SET64(2, rd64(c, (RW(16) + 4256)));
L_0028DAAC:;
SET32(3, RW(0) + 3);
SET64(4, (s32)rd32(c, (RW(19) + 56)));
{ int t = RD(4) != RD(3); wr64(c, (RW(5) + 216), RD(2)); if (t) goto L_0028DBC0; }
SET64(2, (s32)rd32(c, (RW(18) + 24)));
SET32(2, RW(2) + -1);
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 0))); goto L_0028DAFC; }
SET64(2, (s32)rd32(c, (RW(16) + 360)));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 0))); goto L_0028DAFC; }
SET64(31, 0x28dae4); SET64(4, (s32)rd32(c, (RW(16) + 352))); F_0028F480(c);
SET64(2, (s32)rd32(c, (RW(16) + 356)));
wr32(c, (RW(16) + 352), RW(2));
SET64(3, (s32)rd32(c, (RW(20) + 0)));
wr32(c, (RW(16) + 356), RW(3));
SET64(10, (s32)rd32(c, (RW(20) + 0)));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
L_0028DAFC:;
SET64(8, (s32)rd32(c, (RW(18) + 4)));
SET32(2, RW(3) + 15);
SET32(3, RW(3) + 30);
SET64(4, RSD(2) < (s64)0);
SET32(5, RW(8) + 15);
if (RD(4) != 0) SET64(2, RD(3));
SET64(9, RSD(5) < (s64)0);
SET32(2, RSW(2) >> 4);
SET32(8, RW(8) + 30);
SET32(4, RW(2) << 4);
SET32(2, RW(2) << 3);
SET32(7, RW(4) + 63);
SET32(4, RW(4) + 126);
SET32(6, RW(2) + 63);
SET32(2, RW(2) + 126);
SET64(3, RSD(7) < (s64)0);
if (RD(9) != 0) SET64(5, RD(8));
if (RD(3) != 0) SET64(7, RD(4));
SET64(3, RSD(6) < (s64)0);
if (RD(3) != 0) SET64(6, RD(2));
SET64(3, (s32)rd32(c, (RW(16) + 352)));
SET32(7, RSW(7) >> 6);
SET32(5, RSW(5) >> 4);
mul_s(c, 0, 2, RSW(7), RSW(5));
SET32(7, RW(7) << 6);
SET32(6, RSW(6) >> 6);
SET64(4, (s32)rd32(c, (RW(16) + 356)));
mul_s(c, 1, 5, RSW(6), RSW(5));
SET32(6, RW(6) << 6);
SET64(8, (s32)rd32(c, (RW(3) + 8)));
SET64(9, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(2) << 10);
wr16(c, (RW(17) + 30), (u16)RW(7));
SET32(4, RW(9) + RW(2));
SET32(2, RW(8) + RW(2));
SET32(5, RW(5) << 9);
wr16(c, (RW(17) + 28), (u16)RW(6));
SET32(3, RW(4) + RW(5));
SET32(5, RW(2) + RW(5));
wr32(c, (RW(17) + 4), RW(5));
wr32(c, (RW(17) + 20), RW(3));
wr16(c, (RW(17) + 14), (u16)RW(7));
wr16(c, (RW(17) + 12), (u16)RW(6));
wr32(c, (RW(17) + 8), RW(8));
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(17) + 24), RW(9));
wr32(c, (RW(17) + 16), RW(4)); goto L_0028DC4C;
L_0028DBC0:;
SET64(2, (s32)rd32(c, (RW(18) + 24)));
SET32(2, RW(2) + -1);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(16) + 312))); if (t) goto L_0028DBF4; }
SET64(3, (s32)rd32(c, (RW(16) + 316)));
wr32(c, (RW(16) + 356), RW(5));
SET64(2, RD(2) ^ 0x1);
SET64(3, RD(3) ^ 0x1);
wr32(c, (RW(16) + 312), RW(2));
wr32(c, (RW(16) + 316), RW(3));
SET64(10, (s32)rd32(c, (RW(20) + 0)));
SET64(2, (s32)rd32(c, (RW(16) + 312)));
L_0028DBF4:;
SET32(4, RW(16) + 320);
SET64(3, (s32)rd32(c, (RW(16) + 316)));
SET32(2, RW(2) << 4);
SET32(2, RW(2) + RW(4));
SET32(3, RW(3) << 4);
ldl(c, 5, (RW(2) + 7));
ldr(c, 5, (RW(2) + 0));
ldl(c, 6, (RW(2) + 15));
ldr(c, 6, (RW(2) + 8));
sdl(c, 5, (RW(17) + 7));
sdr(c, 5, (RW(17) + 0));
sdl(c, 6, (RW(17) + 15));
SET32(3, RW(3) + RW(4));
sdr(c, 6, (RW(17) + 8));
ldl(c, 9, (RW(3) + 7));
ldr(c, 9, (RW(3) + 0));
ldl(c, 2, (RW(3) + 15));
ldr(c, 2, (RW(3) + 8));
sdl(c, 9, (RW(17) + 23));
sdr(c, 9, (RW(17) + 16));
sdl(c, 2, (RW(17) + 31));
sdr(c, 2, (RW(17) + 24));
L_0028DC4C:;
SET64(3, (s32)rd32(c, (RW(10) + 8)));
SET32(4, RW(10) + 88);
wr32(c, (RW(17) + 44), RW(0));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(17) + 40), RW(0));
wr32(c, (RW(17) + 32), RW(3));
wr32(c, (RW(17) + 36), RW(4));
wr32(c, (RW(21) + 40), RW(0));
L_0028DC6C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0028DC90(Ctx *c) { /* func_0028DC90 */
ENTER(0x28dc90);
SET64(8, (s32)rd32(c, (RW(4) + 56)));
SET32(2, RW(0) + 3);
{ int t = RD(8) != RD(2); SET64(4, RD(5) + RD(0)); if (t) goto L_0028DD08; }
SET64(3, (s32)rd32(c, (RW(4) + 164)));
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2); SET64(5, RD(3) < (u64)(s64)3); if (t) goto L_0028DCC8; }
if (RD(5) != RD(0)) { wr32(c, (RW(6) + 0), RW(0)); goto L_0028DD0C; }
if (RD(3) == RD(8)) { SET64(5, (s32)rd32(c, (RW(4) + 356))); goto L_0028DCE0; }
wr32(c, (RW(6) + 0), RW(0)); goto L_0028DD0C;
L_0028DCC8:;
SET64(2, (s32)rd32(c, (RW(4) + 352)));
SET64(3, (s32)rd32(c, (RW(2) + 64)));
wr32(c, (RW(6) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 68)));
wr32(c, (RW(7) + 0), RW(4)); return;
L_0028DCE0:;
SET64(4, (s32)rd32(c, (RW(4) + 352)));
SET64(3, (s32)rd32(c, (RW(5) + 64)));
SET64(2, (s32)rd32(c, (RW(4) + 64)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(6) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 68)));
SET64(2, (s32)rd32(c, (RW(5) + 68)));
SET32(3, RW(3) + RW(2));
wr32(c, (RW(7) + 0), RW(3)); return;
L_0028DD08:;
wr32(c, (RW(6) + 0), RW(0));
L_0028DD0C:;
wr32(c, (RW(7) + 0), RW(0)); return;
}

void F_0028DD18(Ctx *c) { /* func_0028DD18 */
ENTER(0x28dd18);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET32(17, RW(16) + 3648);
wr64(c, (RW(29) + 64), RD(18));
wr64(c, (RW(29) + 72), RD(31));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(2) != RD(0); SET32(18, RW(16) + 3428); if (t) goto L_0028DE18; }
ldl(c, 2, (RW(16) + 3571));
ldr(c, 2, (RW(16) + 3564));
ldl(c, 3, (RW(16) + 3579));
ldr(c, 3, (RW(16) + 3572));
ldl(c, 6, (RW(16) + 3587));
ldr(c, 6, (RW(16) + 3580));
ldl(c, 7, (RW(16) + 3595));
ldr(c, 7, (RW(16) + 3588));
sdl(c, 2, (RW(29) + 7));
sdr(c, 2, (RW(29) + 0));
sdl(c, 3, (RW(29) + 15));
sdr(c, 3, (RW(29) + 8));
sdl(c, 6, (RW(29) + 23));
sdr(c, 6, (RW(29) + 16));
sdl(c, 7, (RW(29) + 31));
sdr(c, 7, (RW(29) + 24));
SET64(31, 0x28dd88); SET32(5, RW(0) + 3); F_0028D0F8(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 3); if (t) goto L_0028DDA8; }
SET64(31, 0x28dd9c);  F_0028D2B0(c);
SET64(3, (s32)rd32(c, (RW(29) + 24)));
if (RD(2) == 0) SET64(3, RD(0));
wr32(c, (RW(29) + 24), RW(3));
L_0028DDA8:;
SET64(4, RD(29) + RD(0));
SET32(5, RW(29) + 32);
SET64(31, 0x28ddb8); SET32(6, RW(29) + 36); F_00295E60(c);
SET32(5, RW(0) + 1);
ldl(c, 2, (RW(29) + 7));
ldr(c, 2, (RW(29) + 0));
ldl(c, 3, (RW(29) + 15));
ldr(c, 3, (RW(29) + 8));
ldl(c, 4, (RW(29) + 23));
ldr(c, 4, (RW(29) + 16));
ldl(c, 6, (RW(29) + 31));
ldr(c, 6, (RW(29) + 24));
sdl(c, 2, (RW(16) + 3659));
sdr(c, 2, (RW(16) + 3652));
sdl(c, 3, (RW(16) + 3667));
sdr(c, 3, (RW(16) + 3660));
sdl(c, 4, (RW(16) + 3675));
sdr(c, 4, (RW(16) + 3668));
sdl(c, 6, (RW(16) + 3683));
sdr(c, 6, (RW(16) + 3676));
SET64(2, (s32)rd32(c, (RW(29) + 32)));
SET64(3, (s32)rd32(c, (RW(18) + 36)));
SET64(4, (s32)rd32(c, (RW(29) + 36)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(17) + 0), RW(5));
wr32(c, (RW(17) + 36), RW(2));
wr32(c, (RW(17) + 40), RW(4));
L_0028DE18:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_0028DE30(Ctx *c) { /* func_0028DE30 */
ENTER(0x28de30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
ldl(c, 2, (RW(16) + 3567));
ldr(c, 2, (RW(16) + 3560));
ldl(c, 3, (RW(16) + 3575));
ldr(c, 3, (RW(16) + 3568));
ldl(c, 5, (RW(16) + 3583));
ldr(c, 5, (RW(16) + 3576));
ldl(c, 6, (RW(16) + 3591));
ldr(c, 6, (RW(16) + 3584));
sdl(c, 2, (RW(17) + 19));
sdr(c, 2, (RW(17) + 12));
sdl(c, 3, (RW(17) + 27));
sdr(c, 3, (RW(17) + 20));
sdl(c, 5, (RW(17) + 35));
sdr(c, 5, (RW(17) + 28));
sdl(c, 6, (RW(17) + 43));
sdr(c, 6, (RW(17) + 36));
ldl(c, 2, (RW(16) + 3599));
ldr(c, 2, (RW(16) + 3592));
SET64(3, (s32)rd32(c, (RW(16) + 3600)));
sdl(c, 2, (RW(17) + 51));
sdr(c, 2, (RW(17) + 44));
SET64(31, 0x28dea4); wr32(c, (RW(17) + 52), RW(3)); F_002904D0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028DEB8; }
SET64(31, 0x28deb4);  F_00290E30(c);
wr32(c, (RW(17) + 224), RW(2));
L_0028DEB8:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0028DED8(c); return; }
}

void F_0028DED8(Ctx *c) { /* func_0028DED8 */
ENTER(0x28ded8);
SET32(29, RW(29) + -32);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(3) + 3368);
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(16) + 12);
SET64(2, (s32)rd32(c, (RW(5) + 40)));
wr32(c, (RW(16) + 60), RW(2));
SET64(6, (s32)rd32(c, (RW(3) + 3684)));
SET64(2, (s32)rd32(c, (RW(5) + 36)));
SET64(3, (s32)rd32(c, (RW(17) + 356)));
SET32(2, RW(2) - RW(6));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(16) + 56), RW(2));
SET64(3, (s32)rd32(c, (RW(5) + 36)));
wr32(c, (RW(16) + 76), RW(3));
SET64(2, RD(3) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 356)));
SET32(2, RW(2) + RW(3));
SET64(31, 0x28df34); wr32(c, (RW(16) + 80), RW(2)); F_002904D0(c);
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 56))); goto L_0028DF90; }
SET64(5, (s32)rd32(c, (RW(17) + 352)));
SET64(3, (s32)rd32(c, (RW(16) + 224)));
SET64(2, (s32)rd32(c, (RW(16) + 104)));
SET32(3, RW(3) - RW(5));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET32(5, RW(3) << 5);
SET32(2, RW(2) << 2);
SET32(5, RW(5) - RW(3));
SET64(6, (s64)(s32)0x4b0000);
SET32(6, RW(6) + RW(2));
SET64(6, (s32)rd32(c, (RW(6) + 5664)));
SET32(5, RW(5) << 2);
SET32(5, RW(5) + RW(3));
SET64(31, 0x28df78); SET32(5, RW(5) << 3); F_002784E8(c);
wr32(c, (RW(16) + 76), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 356)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(16) + 56), RW(2));
wr32(c, (RW(16) + 80), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 56)));
L_0028DF90:;
SET64(2, (s32)rd32(c, (RW(17) + 644)));
SET64(2, RSD(2) < RSD(3));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028DFB0; }
wr32(c, (RW(17) + 644), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 60)));
wr32(c, (RW(17) + 648), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_0028DFB0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0028DFC0(Ctx *c) { /* func_0028DFC0 */
ENTER(0x28dfc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 112)));
SET64(18, (s32)rd32(c, (RW(4) + 8120)));
SET32(2, RW(2) + -1);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET32(4, RW(18) + 4116); if (t) goto L_0028DFFC; }
SET64(31, 0x28dffc); SET64(5, (s32)rd32(c, (RW(16) + 84))); F_0028E1E0(c);
L_0028DFFC:;
SET64(5, RD(29) + RD(0));
SET64(4, RD(17) + RD(0));
SET32(6, RW(29) + 4);
SET64(31, 0x28e010); SET32(7, RW(29) + 8); F_0028E068(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(3, RW(0) + 3);
{ int t = RD(2) != RD(3); SET32(5, RW(18) + 4116); if (t) goto L_0028E048; }
SET64(2, (s32)rd32(c, (RW(16) + 84)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(6, (s32)rd32(c, (RW(29) + 8)));
SET64(31, 0x28e034); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_00127218(c);
SET64(3, (s32)rd32(c, (RW(16) + 84)));
SET64(2, (s32)rd32(c, (RW(29) + 8)));
wr32(c, (RW(3) + 4), RW(2)); goto L_0028E050;
L_0028E048:;
SET64(31, 0x28e050); SET64(4, (s32)rd32(c, (RW(16) + 84))); F_0028E1E0(c);
L_0028E050:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0028E068(Ctx *c) { /* func_0028E068 */
ENTER(0x28e068);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(6, (s64)(s32)0x7fff0000);
wr64(c, (RW(29) + 64), RD(31));
SET64(7, RD(29) + RD(0));
wr32(c, (RW(17) + 0), RW(0));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET64(6, RD(6) | 0xffff);
wr32(c, (RW(20) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x28e0c0); wr32(c, (RW(21) + 0), RW(0)); rt_call(c, t); }
SET32(6, RW(0) + 204);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x28e0d0); SET64(5, (s32)rd32(c, (RW(29) + 4))); F_00274C00(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(3, (s64)(s32)0x410000); if (t) goto L_0028E180; }
SET64(31, 0x28e0e4); SET64(4, RD(16) + RD(0)); F_00274A68(c);
SET64(2, RD(2) & 0x4);
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_0028E1A0; }
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(16) - RW(6));
SET32(2, RW(2) + 6);
SET64(2, RSD(5) < RSD(2));
{ int t = RD(2) != RD(0); SET64(3, (s64)(s32)0x410000); if (t) goto L_0028E180; }
SET64(2, rd8(c, (RW(16) + 5)));
SET32(4, RW(0) + 3);
SET64(2, RD(2) >> 3);
SET64(2, RD(2) & 0x7);
SET32(2, RW(2) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 5168)));
{ int t = RD(3) != RD(4); wr32(c, (RW(17) + 0), RW(3)); if (t) goto L_0028E1A0; }
SET32(2, RW(6) - RW(16));
SET32(6, RW(0) + 34);
SET32(18, RW(2) + RW(5));
SET64(4, RD(16) + RD(0));
SET64(31, 0x28e148); SET64(5, RD(18) + RD(0)); F_00274C00(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 0))); goto L_0028E1A4; }
SET64(31, 0x28e15c); SET64(4, RD(17) + RD(0)); F_00274A68(c);
SET64(2, RD(2) & 0x20);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028E1A0; }
SET64(5, RD(18) + RD(0));
SET64(31, 0x28e174); SET32(6, RW(0) + 2); F_00274C00(c);
{ int t = RD(2) != RD(0); SET32(2, RW(2) - RW(17)); if (t) goto L_0028E198; }
SET64(3, (s64)(s32)0x410000);
L_0028E180:;
SET32(3, RW(3) + -1300);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2)); goto L_0028E1A0;
L_0028E198:;
wr32(c, (RW(20) + 0), RW(17));
wr32(c, (RW(21) + 0), RW(2));
L_0028E1A0:;
SET64(3, (s32)rd32(c, (RW(19) + 0)));
L_0028E1A4:;
SET64(4, RD(19) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x28e1b8); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_0028E1E0(Ctx *c) { /* func_0028E1E0 */
ENTER(0x28e1e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x28e208); SET64(6, (s32)rd32(c, (RW(16) + 4))); F_00127218(c);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET64(31, rd64(c, (RW(29) + 16)));
wr32(c, (RW(17) + 4), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void F_0028E228(Ctx *c) { /* func_0028E228 */
ENTER(0x28e228);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET64(6, RD(29) + RD(0));
SET64(31, 0x28e24c); SET64(5, (s32)rd32(c, (RW(17) + 8128))); F_00284B88(c);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_0028E260; }
SET64(2, RD(0) + RD(0)); goto L_0028E370;
L_0028E260:;
{ int t = RD(3) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0028E370; }
SET64(5, RD(16) + RD(0));
SET64(31, 0x28e274); SET32(6, RW(29) + 32); F_0028AF98(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) != RD(0); SET64(3, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0028E2A0; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET32(2, RW(2) + RW(3));
SET32(16, RW(2) + -3);
{ int t = RSD(16) >= 0; SET64(4, RD(17) + RD(0)); if (t) goto L_0028E2F4; }
SET64(16, RD(0) + RD(0)); goto L_0028E2F4;
L_0028E2A0:;
SET64(2, RD(4) < RD(3));
{ int t = RD(2) != RD(0); SET64(6, (s32)rd32(c, (RW(29) + 8))); if (t) goto L_0028E2C4; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(3) + RW(2));
SET64(2, RD(4) < RD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(4) - RW(3)); if (t) goto L_0028E2F0; }
SET64(6, (s32)rd32(c, (RW(29) + 8)));
L_0028E2C4:;
SET64(2, RD(4) < RD(6));
{ int t = RD(2) != RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_0028E2F0; }
SET64(2, (s32)rd32(c, (RW(29) + 12)));
SET32(2, RW(6) + RW(2));
SET64(2, RD(4) < RD(2));
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_0028E2F4; }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(4) - RW(6));
SET32(16, RW(2) + RW(3));
L_0028E2F0:;
SET64(4, RD(17) + RD(0));
L_0028E2F4:;
SET64(31, 0x28e2fc); SET64(5, RD(16) + RD(0)); F_0028E388(c);
SET64(6, RD(0) + RD(0));
SET64(4, RD(0) + RD(0));
SET64(5, RSD(16) < (s64)4);
L_0028E308:;
SET32(2, RW(0) + 3);
if (RD(5) != 0) SET64(2, RD(16));
SET64(2, RSD(4) < RSD(2));
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_0028E34C; }
SET32(3, RW(4) - RW(2));
SET64(2, RSD(4) < RSD(2));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 8))); goto L_0028E338; }
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(2) + RW(4)); goto L_0028E33C;
L_0028E338:;
SET32(2, RW(2) + RW(3));
L_0028E33C:;
SET64(2, (s8)rd8(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 1); if (t) { POLL(); goto L_0028E308; } }
SET32(6, RW(0) + 1);
L_0028E34C:;
{ int t = RD(6) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028E360; }
SET64(2, rd64(c, (RW(17) + 2472)));
SET64(2, RD(2) + RD(4));
wr64(c, (RW(17) + 2472), RD(2));
L_0028E360:;
SET64(3, rd64(c, (RW(17) + 2464)));
SET64(2, RD(16) + RD(0));
SET64(3, RD(3) + RD(4));
wr64(c, (RW(17) + 2464), RD(3));
L_0028E370:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_0028E388(Ctx *c) { /* func_0028E388 */
ENTER(0x28e388);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x28e39c); SET64(5, (s32)rd32(c, (RW(4) + 8128))); F_00284C60(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0028E3A8(Ctx *c) { /* func_0028E3A8 */
ENTER(0x28e3a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(6, RD(29) + RD(0));
SET64(31, 0x28e3c4); SET64(5, (s32)rd32(c, (RW(16) + 8128))); F_00285160(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(5, RW(29) + 4);
SET32(6, RW(29) + 8);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0028E3F0; }
SET64(31, 0x28e3e0);  F_002858E8(c);
SET64(4, rd64(c, (RW(16) + 2456)));
SET64(31, 0x28e3ec); SET64(5, (s32)rd32(c, (RW(29) + 4))); F_00285AA0(c);
wr64(c, (RW(16) + 2456), RD(2));
L_0028E3F0:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0028E400(Ctx *c) { /* func_0028E400 */
ENTER(0x28e400);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 5);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28e424); SET32(18, RW(17) + 9120); F_00294A30(c);
SET64(5, RD(18) + RD(0));
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028E544; }
SET64(31, 0x28e438); wr32(c, (RW(17) + 8120), RW(18)); F_0028E560(c);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028E544; }
SET64(31, 0x28e448);  F_00290590(c);
SET64(31, 0x28e450);  F_00277E38(c);
SET64(16, RD(2) + RD(0));
SET64(5, (s64)(s32)0x290000);
SET32(5, RW(5) + -5832);
SET64(4, RD(16) + RD(0));
{ int t = RD(16) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_0028E490; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, RD(0) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(5) | 0xf0a);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_0028E490:;
SET64(31, 0x28e498);  F_00275838(c);
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0028E4D0; }
SET64(31, 0x28e4a8); SET64(4, RD(16) + RD(0)); F_0028EB08(c);
SET64(4, RD(0) + RD(0));
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0xf0b);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_0028E4D0:;
SET64(31, 0x28e4d8); SET64(4, RD(17) + RD(0)); F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x28e4e8); SET32(5, RW(0) + 1); F_00278040(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28e4f4); SET32(5, RW(0) + 1); F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 2);
SET64(31, 0x28e504); SET64(6, RD(2) + RD(0)); F_00278040(c);
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(17) + 56)));
SET64(31, 0x28e514); SET32(5, RW(0) + 6); F_00278040(c);
SET64(31, 0x28e51c); wr32(c, (RW(18) + 0), RW(16)); F_00292D58(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028E540; }
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
SET64(5, (s32)rd32(c, (RW(2) + -27744)));
SET64(2, (s64)(s32)0x540000);
SET64(6, (s32)rd32(c, (RW(3) + -27740)));
SET64(31, 0x28e540); SET64(7, (s32)rd32(c, (RW(2) + -27736))); F_0028A348(c);
L_0028E540:;
SET64(2, RD(0) + RD(0));
L_0028E544:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0028E560(Ctx *c) { /* func_0028E560 */
ENTER(0x28e560);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28e574); SET64(16, RD(5) + RD(0)); F_0028E758(c);
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 8))); if (t) goto L_0028E598; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0xf15);
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_0028E598:;
SET64(2, (s64)(s32)0x540000);
SET64(4, (s64)(s32)0x540000);
SET32(7, RW(2) + -27856);
ldl(c, 3, (RW(7) + 7));
ldr(c, 3, (RW(7) + 0));
ldl(c, 5, (RW(7) + 15));
ldr(c, 5, (RW(7) + 8));
ldl(c, 6, (RW(7) + 23));
ldr(c, 6, (RW(7) + 16));
sdl(c, 3, (RW(16) + 11));
sdr(c, 3, (RW(16) + 4));
sdl(c, 5, (RW(16) + 19));
sdr(c, 5, (RW(16) + 12));
sdl(c, 6, (RW(16) + 27));
sdr(c, 6, (RW(16) + 20));
ldl(c, 3, (RW(7) + 31));
ldr(c, 3, (RW(7) + 24));
SET64(5, (s32)rd32(c, (RW(7) + 32)));
sdl(c, 3, (RW(16) + 35));
sdr(c, 3, (RW(16) + 28));
wr32(c, (RW(16) + 36), RW(5));
SET32(3, RW(16) + 48);
SET32(7, RW(0) + 5);
SET64(2, (s64)(s32)0x540000);
SET32(11, RW(4) + -27816);
ldl(c, 8, (RW(11) + 7));
ldr(c, 8, (RW(11) + 0));
sdl(c, 8, (RW(16) + 47));
sdr(c, 8, (RW(16) + 40));
SET32(8, RW(0) + 192);
SET32(9, RW(0) + 1);
SET64(5, RD(3) + RD(0));
SET32(11, RW(2) + -27808);
ldl(c, 4, (RW(11) + 7));
ldr(c, 4, (RW(11) + 0));
ldl(c, 6, (RW(11) + 15));
ldr(c, 6, (RW(11) + 8));
ldl(c, 10, (RW(11) + 23));
ldr(c, 10, (RW(11) + 16));
sdl(c, 4, (RW(3) + 7));
sdr(c, 4, (RW(3) + 0));
sdl(c, 6, (RW(3) + 15));
sdr(c, 6, (RW(3) + 8));
sdl(c, 10, (RW(3) + 23));
sdr(c, 10, (RW(3) + 16));
ldl(c, 4, (RW(11) + 31));
ldr(c, 4, (RW(11) + 24));
ldl(c, 6, (RW(11) + 39));
ldr(c, 6, (RW(11) + 32));
ldl(c, 10, (RW(11) + 47));
ldr(c, 10, (RW(11) + 40));
sdl(c, 4, (RW(3) + 31));
sdr(c, 4, (RW(3) + 24));
sdl(c, 6, (RW(3) + 39));
sdr(c, 6, (RW(3) + 32));
sdl(c, 10, (RW(3) + 47));
sdr(c, 10, (RW(3) + 40));
ldl(c, 4, (RW(11) + 55));
ldr(c, 4, (RW(11) + 48));
ldl(c, 6, (RW(11) + 63));
ldr(c, 6, (RW(11) + 56));
sdl(c, 4, (RW(3) + 55));
sdr(c, 4, (RW(3) + 48));
sdl(c, 6, (RW(3) + 63));
sdr(c, 6, (RW(3) + 56));
SET32(6, RW(0) + 16);
wr32(c, (RW(16) + 116), RW(7));
SET32(4, RW(16) + 384);
wr32(c, (RW(16) + 120), RW(8));
wr32(c, (RW(16) + 316), RW(9));
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 112), RW(0));
wr32(c, (RW(16) + 312), RW(0));
wr32(c, (RW(16) + 124), RW(0));
wr32(c, (RW(16) + 128), RW(0));
wr32(c, (RW(16) + 352), RW(0));
wr32(c, (RW(16) + 356), RW(0));
wr32(c, (RW(16) + 360), RW(0));
wr32(c, (RW(16) + 364), RW(0));
wr32(c, (RW(16) + 368), RW(0));
SET64(31, 0x28e6e0); wr32(c, (RW(16) + 372), RW(0)); F_0028E820(c);
wr32(c, (RW(16) + 132), RW(0));
wr32(c, (RW(16) + 136), RW(0));
SET64(31, 0x28e6f0); SET32(4, RW(16) + 140); F_0028E8C0(c);
SET32(3, RW(0) + -1);
SET64(2, (s64)(s32)0x7fff0000);
wr32(c, (RW(16) + 268), RW(3));
SET64(2, RD(2) | 0xffff);
wr32(c, (RW(16) + 272), RW(0));
wr32(c, (RW(16) + 276), RW(2));
SET64(31, 0x28e710); SET32(4, RW(16) + 280); F_0028BE50(c);
SET64(31, 0x28e718); SET32(4, RW(16) + 4096); F_0028E8E0(c);
SET32(4, RW(0) + 15);
SET32(2, RW(16) + 4244);
SET32(3, RW(16) + 3948);
L_0028E728:;
SET32(4, RW(4) + -1);
wr32(c, (RW(3) + 0), RW(2));
SET32(3, RW(3) + -232);
{ int t = RSD(4) >= 0; SET32(2, RW(2) + -8); if (t) { POLL(); goto L_0028E728; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0028E758(Ctx *c) { /* func_0028E758 */
ENTER(0x28e758);
SET64(5, (s64)(s32)0x540000);
SET32(3, RW(5) + -27856);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
SET32(2, RW(2) + -1);
SET64(2, RD(2) < (u64)(s64)16);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(3) + 16))); goto L_0028E780; }
L_0028E774:;
SET32(2, RW(0) + -1); return;
L_0028E780:;
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x540000); if (t) goto L_0028E798; }
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ int t = RD(2) != RD(0);  if (t) goto L_0028E814; }
SET64(2, (s64)(s32)0x540000);
L_0028E798:;
SET64(3, RD(0) + RD(0));
SET32(4, RW(2) + -27816);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
L_0028E7A8:;
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_0028E774; } }
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 0))); { POLL(); goto L_0028E7A8; } }
SET32(2, RW(5) + -27856);
SET64(4, (s32)rd32(c, (RW(2) + 28)));
{ int t = RSD(4) <= 0; SET64(3, RD(0) + RD(0)); if (t) goto L_0028E814; }
SET64(2, (s64)(s32)0x540000);
SET64(5, RD(4) + RD(0));
SET32(4, RW(2) + -27808);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
L_0028E7F0:;
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_0028E774; } }
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < RSD(5));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 0))); { POLL(); goto L_0028E7F0; } }
L_0028E814:;
SET64(2, RD(0) + RD(0)); return;
}

void F_0028E820(Ctx *c) { /* func_0028E820 */
ENTER(0x28e820);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
{ int t = RSD(6) <= 0; wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_0028E8A4; }
SET64(18, RD(5) + RD(0));
SET64(17, RD(6) + RD(0));
SET32(19, RW(0) + 1);
L_0028E850:;
wr32(c, (RW(16) + 0), RW(0));
SET32(4, RW(16) + 12);
wr32(c, (RW(16) + 4), RW(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x28e868); SET32(17, RW(17) + -1); F_00295038(c);
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(16) + 56), RW(0));
SET32(4, RW(16) + 88);
wr32(c, (RW(16) + 8), RW(2));
SET32(18, RW(18) + 4);
wr32(c, (RW(16) + 60), RW(19));
wr32(c, (RW(16) + 64), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
SET64(31, 0x28e898); wr32(c, (RW(16) + 80), RW(0)); F_0028E8C0(c);
wr32(c, (RW(16) + 224), RW(0));
{ int t = RD(17) != RD(0); SET32(16, RW(16) + 232); if (t) { POLL(); goto L_0028E850; } }
L_0028E8A4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028E8C0(Ctx *c) { /* func_0028E8C0 */
ENTER(0x28e8c0);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + -1);
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 32);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00272320(c); return; }
}

void F_0028E8E0(Ctx *c) { /* func_0028E8E0 */
ENTER(0x28e8e0);
wr32(c, (RW(4) + 0), RW(0));
SET32(5, RW(0) + 16);
wr32(c, (RW(4) + 4), RW(0));
SET32(8, RW(4) + 16);
wr32(c, (RW(4) + 8), RW(0));
SET32(7, RW(4) + 12);
wr32(c, (RW(4) + 12), RW(0));
SET32(6, RW(0) + 15);
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
L_0028E910:;
SET32(2, RW(7) + RW(5));
SET32(3, RW(8) + RW(5));
SET32(6, RW(6) + -1);
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(3) + 0), RW(0));
{ int t = RSD(6) >= 0; SET32(5, RW(5) + 8); if (t) { POLL(); goto L_0028E910; } }
 return;
}

void F_0028E938(Ctx *c) { /* func_0028E938 */
ENTER(0x28e938);
SET64(3, RD(5) + RD(0));
SET32(29, RW(29) + -16);
SET64(2, RSD(3) < (s64)-3);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(2) != RD(0); SET64(6, RSD(3) < (s64)-1); if (t) goto L_0028E960; }
{ int t = RD(6) != RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0028E970; }
{ int t = RD(3) == RD(0);  if (t) goto L_0028E970; }
L_0028E960:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_0028E970:;
SET32(29, RW(29) + 16); return;
}

void F_0028E978(Ctx *c) { /* func_0028E978 */
ENTER(0x28e978);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(16, (s32)rd32(c, (RW(18) + 8120)));
SET64(17, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(17) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028EAEC; }
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
SET32(12, RW(2) + -27856);
ldl(c, 9, (RW(16) + 11));
ldr(c, 9, (RW(16) + 4));
ldl(c, 10, (RW(16) + 19));
ldr(c, 10, (RW(16) + 12));
ldl(c, 11, (RW(16) + 27));
ldr(c, 11, (RW(16) + 20));
sdl(c, 9, (RW(12) + 7));
sdr(c, 9, (RW(12) + 0));
sdl(c, 10, (RW(12) + 15));
sdr(c, 10, (RW(12) + 8));
sdl(c, 11, (RW(12) + 23));
sdr(c, 11, (RW(12) + 16));
ldl(c, 9, (RW(16) + 35));
ldr(c, 9, (RW(16) + 28));
SET64(10, (s32)rd32(c, (RW(16) + 36)));
sdl(c, 9, (RW(12) + 31));
sdr(c, 9, (RW(12) + 24));
wr32(c, (RW(12) + 32), RW(10));
SET64(5, (s64)(s32)0x540000);
SET64(6, (s64)(s32)0x540000);
SET64(7, (s64)(s32)0x540000);
SET32(11, RW(3) + -27816);
ldl(c, 2, (RW(16) + 47));
ldr(c, 2, (RW(16) + 40));
sdl(c, 2, (RW(11) + 7));
sdr(c, 2, (RW(11) + 0));
SET64(8, (s64)(s32)0x540000);
SET32(9, RW(5) + -27808);
ldl(c, 12, (RW(16) + 55));
ldr(c, 12, (RW(16) + 48));
ldl(c, 2, (RW(16) + 63));
ldr(c, 2, (RW(16) + 56));
ldl(c, 3, (RW(16) + 71));
ldr(c, 3, (RW(16) + 64));
sdl(c, 12, (RW(9) + 7));
sdr(c, 12, (RW(9) + 0));
sdl(c, 2, (RW(9) + 15));
sdr(c, 2, (RW(9) + 8));
sdl(c, 3, (RW(9) + 23));
sdr(c, 3, (RW(9) + 16));
ldl(c, 12, (RW(16) + 79));
ldr(c, 12, (RW(16) + 72));
ldl(c, 2, (RW(16) + 87));
ldr(c, 2, (RW(16) + 80));
ldl(c, 3, (RW(16) + 95));
ldr(c, 3, (RW(16) + 88));
sdl(c, 12, (RW(9) + 31));
sdr(c, 12, (RW(9) + 24));
sdl(c, 2, (RW(9) + 39));
sdr(c, 2, (RW(9) + 32));
sdl(c, 3, (RW(9) + 47));
sdr(c, 3, (RW(9) + 40));
ldl(c, 12, (RW(16) + 103));
ldr(c, 12, (RW(16) + 96));
ldl(c, 2, (RW(16) + 111));
ldr(c, 2, (RW(16) + 104));
sdl(c, 12, (RW(9) + 55));
sdr(c, 12, (RW(9) + 48));
sdl(c, 2, (RW(9) + 63));
sdr(c, 2, (RW(9) + 56));
SET64(2, (s32)rd32(c, (RW(16) + 4096)));
wr32(c, (RW(6) + -27744), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 4100)));
wr32(c, (RW(7) + -27740), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 4104)));
SET64(31, 0x28eab8); wr32(c, (RW(8) + -27736), RW(2)); F_002909B8(c);
SET64(31, 0x28eac0); SET64(4, RD(17) + RD(0)); F_0028EB08(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0028EAE8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0xf0c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_0028EAE8:;
wr32(c, (RW(16) + 0), RW(0));
L_0028EAEC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0028EB08(Ctx *c) { /* func_0028EB08 */
ENTER(0x28eb08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00277FC0(c); return; }
}

void F_0028EB20(Ctx *c) { /* func_0028EB20 */
ENTER(0x28eb20);
SET64(2, RD(0) + RD(0)); return;
}

void F_0028EB28(Ctx *c) { /* func_0028EB28 */
ENTER(0x28eb28);
SET64(2, RD(0) + RD(0)); return;
}

void F_0028EB30(Ctx *c) { /* func_0028EB30 */
ENTER(0x28eb30);
SET64(2, RD(0) + RD(0)); return;
}

void F_0028EB38(Ctx *c) { /* func_0028EB38 */
ENTER(0x28eb38);
SET64(2, RD(0) + RD(0)); return;
}

void F_0028EB40(Ctx *c) { /* func_0028EB40 */
ENTER(0x28eb40);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xf0d);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_0028EB60(Ctx *c) { /* func_0028EB60 */
ENTER(0x28eb60);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xf0d);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_0028EB80(Ctx *c) { /* func_0028EB80 */
ENTER(0x28eb80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x28eba4); SET32(18, RW(16) + 3368); F_0028F2F0(c);
SET32(3, RW(0) + -1);
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_0028EBC0; }
wr32(c, (RW(17) + 0), RW(0));
SET64(2, RD(0) + RD(0)); goto L_0028EC08;
L_0028EBC0:;
SET64(31, 0x28ebc8);  F_0028F4A8(c);
SET64(4, RD(16) + RD(0));
SET64(3, RD(2) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(3) != RD(0); SET64(5, RD(3) + RD(0)); if (t) goto L_0028EBE8; }
wr32(c, (RW(17) + 0), RW(0)); goto L_0028EC08;
L_0028EBE8:;
SET64(31, 0x28ebf0);  F_0028EC20(c);
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s32)rd32(c, (RW(3) + 20)));
wr32(c, (RW(18) + 636), RW(4));
SET64(5, (s32)rd32(c, (RW(3) + 24)));
wr32(c, (RW(18) + 640), RW(5));
L_0028EC08:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0028EC20(Ctx *c) { /* func_0028EC20 */
ENTER(0x28ec20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28ec4c); SET64(17, (s32)rd32(c, (RW(16) + 8120))); F_0028F278(c);
SET32(10, RW(0) + 1);
SET32(9, RW(19) + 88);
wr32(c, (RW(2) + 0), RW(10));
SET32(8, RW(2) + 8);
SET64(3, (s32)rd32(c, (RW(9) + 24)));
SET64(2, (s32)rd32(c, (RW(9) + 0)));
wr32(c, (RW(8) + 16), RW(3));
wr32(c, (RW(8) + 0), RW(2));
SET64(6, (s32)rd32(c, (RW(16) + 56)));
SET64(2, (s32)rd32(c, (RW(9) + 4)));
SET64(4, (s32)rd32(c, (RW(19) + 8)));
wr32(c, (RW(8) + 4), RW(2));
SET64(5, (s32)rd32(c, (RW(19) + 84)));
SET64(2, (s32)rd32(c, (RW(9) + 8)));
SET64(7, (s32)rd32(c, (RW(9) + 64)));
wr32(c, (RW(8) + 8), RW(2));
wr32(c, (RW(17) + 112), RW(19));
SET64(2, (s32)rd32(c, (RW(9) + 12)));
wr32(c, (RW(8) + 28), RW(6));
wr32(c, (RW(8) + 12), RW(2));
wr32(c, (RW(8) + 32), RW(4));
SET64(2, (s32)rd32(c, (RW(19) + 56)));
wr32(c, (RW(8) + 56), RW(5));
wr32(c, (RW(8) + 20), RW(2));
wr32(c, (RW(18) + 0), RW(8));
SET64(2, (s32)rd32(c, (RW(19) + 60)));
wr32(c, (RW(8) + 24), RW(2));
SET64(3, (s32)rd32(c, (RW(19) + 64)));
wr32(c, (RW(8) + 36), RW(3));
SET64(2, (s32)rd32(c, (RW(19) + 68)));
wr32(c, (RW(8) + 40), RW(2));
SET64(3, (s32)rd32(c, (RW(19) + 72)));
wr32(c, (RW(8) + 44), RW(3));
SET64(2, (s32)rd32(c, (RW(19) + 76)));
wr32(c, (RW(8) + 48), RW(2));
SET64(3, (s32)rd32(c, (RW(19) + 80)));
wr32(c, (RW(8) + 52), RW(3));
SET64(2, (s32)rd32(c, (RW(9) + 68)));
wr32(c, (RW(8) + 60), RW(7));
{ int t = RD(7) != RD(0); wr32(c, (RW(8) + 64), RW(2)); if (t) goto L_0028ED00; }
SET32(2, RW(0) + 2);
wr32(c, (RW(8) + 72), RW(2)); goto L_0028ED04;
L_0028ED00:;
wr32(c, (RW(8) + 72), RW(10));
L_0028ED04:;
SET64(3, rd64(c, (RW(19) + 216)));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr64(c, (RW(2) + 80), RD(3));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s32)rd32(c, (RW(9) + 56)));
wr32(c, (RW(4) + 88), RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s32)rd32(c, (RW(9) + 60)));
wr32(c, (RW(3) + 92), RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s32)rd32(c, (RW(9) + 72)));
wr32(c, (RW(4) + 96), RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s32)rd32(c, (RW(9) + 76)));
wr32(c, (RW(3) + 100), RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd16(c, (RW(9) + 80)));
wr16(c, (RW(4) + 104), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd16(c, (RW(9) + 82)));
wr16(c, (RW(3) + 106), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 85)));
wr8(c, (RW(4) + 108), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 86)));
wr8(c, (RW(3) + 109), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 87)));
wr8(c, (RW(4) + 110), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 89)));
wr8(c, (RW(3) + 111), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 90)));
wr8(c, (RW(4) + 112), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 91)));
SET64(16, rd64(c, (RW(29) + 0)));
wr8(c, (RW(3) + 113), (u8)RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 92)));
SET64(19, rd64(c, (RW(29) + 24)));
wr8(c, (RW(4) + 114), (u8)RW(2));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 93)));
wr8(c, (RW(3) + 115), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 94)));
wr8(c, (RW(4) + 116), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 95)));
wr8(c, (RW(3) + 117), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 96)));
wr8(c, (RW(4) + 118), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 97)));
wr8(c, (RW(3) + 119), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 98)));
wr8(c, (RW(4) + 120), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 99)));
wr8(c, (RW(3) + 121), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(2, rd8(c, (RW(9) + 100)));
SET64(18, rd64(c, (RW(29) + 16)));
wr8(c, (RW(4) + 122), (u8)RW(2));
SET32(29, RW(29) + 48); return;
}

void F_0028EE28(Ctx *c) { /* func_0028EE28 */
ENTER(0x28ee28);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28ee48); SET64(4, RD(29) + RD(0)); F_00287C60(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x28ee54); SET64(5, RD(17) + RD(0)); F_0028EE78(c);
SET64(4, RD(29) + RD(0));
SET64(31, 0x28ee60); SET64(16, RD(2) + RD(0)); F_00287C78(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028EE78(Ctx *c) { /* func_0028EE78 */
ENTER(0x28ee78);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28eea0); SET64(19, (s32)rd32(c, (RW(17) + 8120))); F_0028EF48(c);
SET64(18, RD(2) + RD(0));
SET32(2, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(16) + RD(0));
{ int t = RD(3) == RD(2); SET64(4, RD(17) + RD(0)); if (t) goto L_0028EEE0; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0xf0e);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_002879A8(c); return; }
L_0028EEE0:;
SET64(31, 0x28eee8);  F_0028F230(c);
SET64(5, (s64)(s32)0xff000000);
SET64(3, (s32)rd32(c, (RW(19) + 112)));
SET64(4, RD(17) + RD(0));
{ int t = RD(3) == RD(2); SET64(5, RD(5) | 0xf0f); if (t) goto L_0028EF18; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_002879A8(c); return; }
L_0028EF18:;
wr32(c, (RW(18) + 0), RW(0));
SET64(31, 0x28ef24); SET64(4, RD(3) + RD(0)); F_0028F458(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028EF48(Ctx *c) { /* func_0028EF48 */
ENTER(0x28ef48);
SET32(2, RW(5) + -8); return;
}

void F_0028EF50(Ctx *c) { /* func_0028EF50 */
ENTER(0x28ef50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(6, RD(29) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(16, (s32)rd32(c, (RW(17) + 8120)));
SET64(31, 0x28ef74); SET64(5, RD(16) + RD(0)); F_0028EFC0(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0028EFB0; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 116), RW(2)); if (t) goto L_0028EFA0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x28ef98); SET32(5, RW(0) + 48); F_00294A30(c);
if (RD(2) != RD(0)) { SET32(2, RW(0) + 200); goto L_0028EFA4; }
L_0028EFA0:;
SET32(2, RW(0) + 192);
L_0028EFA4:;
wr32(c, (RW(16) + 120), RW(2));
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
L_0028EFB0:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028EFC0(Ctx *c) { /* func_0028EFC0 */
ENTER(0x28efc0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x28efe8); wr32(c, (RW(18) + 0), RW(0)); F_0028F0B8(c);
SET64(4, RD(2) + RD(0));
if (RD(4) == RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028F0A4; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028F0A0; }
ldl(c, 2, (RW(4) + 19));
ldr(c, 2, (RW(4) + 12));
ldl(c, 3, (RW(4) + 27));
ldr(c, 3, (RW(4) + 20));
ldl(c, 5, (RW(4) + 35));
ldr(c, 5, (RW(4) + 28));
ldl(c, 6, (RW(4) + 43));
ldr(c, 6, (RW(4) + 36));
sdl(c, 2, (RW(17) + 3435));
sdr(c, 2, (RW(17) + 3428));
sdl(c, 3, (RW(17) + 3443));
sdr(c, 3, (RW(17) + 3436));
sdl(c, 5, (RW(17) + 3451));
sdr(c, 5, (RW(17) + 3444));
sdl(c, 6, (RW(17) + 3459));
sdr(c, 6, (RW(17) + 3452));
ldl(c, 2, (RW(4) + 51));
ldr(c, 2, (RW(4) + 44));
SET64(3, (s32)rd32(c, (RW(4) + 52)));
sdl(c, 2, (RW(17) + 3467));
sdr(c, 2, (RW(17) + 3460));
wr32(c, (RW(17) + 3468), RW(3));
SET32(3, RW(4) + 56);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 512)));
SET32(6, RW(29) + 16);
wr32(c, (RW(29) + 0), RW(3));
SET64(31, 0x28f078); wr32(c, (RW(29) + 4), RW(2)); F_00276150(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0xf1b); if (t) goto L_0028F098; }
SET64(31, 0x28f090);  F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0028F0A4;
L_0028F098:;
SET32(3, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_0028F0A0:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0028F0A4:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0028F0B8(Ctx *c) { /* func_0028F0B8 */
ENTER(0x28f0b8);
SET64(3, (s32)rd32(c, (RW(4) + 13864)));
SET64(2, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 8120)));
{ int t = RD(3) == RD(0); SET32(5, RW(3) + 2768); if (t) goto L_0028F0E0; }
SET64(2, (s32)rd32(c, (RW(4) + 136)));
SET64(3, RD(0) + RD(0));
SET64(3, RSD(3) < RSD(2));
SET64(2, RD(0) + RD(0));
if (RD(3) == 0) SET64(2, RD(5));
L_0028F0E0:;
 return;
}

void F_0028F0E8(Ctx *c) { /* func_0028F0E8 */
ENTER(0x28f0e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28f104); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0028F128; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x188);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_0028F128:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x28f134); SET64(4, RD(16) + RD(0)); F_0028F230(c);
SET64(3, RD(2) + RD(0));
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(3) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028F158; }
SET64(31, 0x28f14c); SET64(5, RD(5) | 0xf30); F_002879A8(c);
SET64(2, (s32)rd32(c, (RW(16) + 2428))); goto L_0028F168;
L_0028F158:;
SET64(2, (s32)rd32(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 4), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 2428)));
L_0028F168:;
SET64(17, rd64(c, (RW(29) + 8)));
SET32(2, RW(2) + 1);
SET64(31, rd64(c, (RW(29) + 16)));
wr32(c, (RW(16) + 2428), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_0028F188(Ctx *c) { /* func_0028F188 */
ENTER(0x28f188);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28f1a4); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0028F1C8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x189);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_0028F1C8:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x28f1d4); SET64(4, RD(16) + RD(0)); F_0028F230(c);
SET64(6, RD(2) + RD(0));
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(6) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028F1F8; }
SET64(31, 0x28f1ec); SET64(5, RD(5) | 0xf31); F_002879A8(c);
SET64(2, (s32)rd32(c, (RW(16) + 2428))); goto L_0028F210;
L_0028F1F8:;
SET64(2, (s32)rd32(c, (RW(6) + 4)));
SET32(2, RW(2) + -1);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(0));
wr32(c, (RW(6) + 4), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 2428)));
L_0028F210:;
SET64(17, rd64(c, (RW(29) + 8)));
SET32(2, RW(2) + -1);
SET64(31, rd64(c, (RW(29) + 16)));
wr32(c, (RW(16) + 2428), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_0028F230(Ctx *c) { /* func_0028F230 */
ENTER(0x28f230);
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
SET32(4, RW(4) + 5800);
SET64(7, RD(0) + RD(0));
SET32(6, RW(2) + 384);
SET32(3, RW(4) + 8);
L_0028F248:;
SET32(4, RW(4) + 136);
SET64(2, RD(6) + RD(0));
{ int t = RD(3) == RD(5); SET32(6, RW(6) + 232); if (t) goto L_0028F270; }
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < (s64)16);
{ int t = RD(2) != RD(0); SET32(3, RW(4) + 8); if (t) { POLL(); goto L_0028F248; } }
SET64(2, RD(0) + RD(0));
L_0028F270:;
 return;
}

void F_0028F278(Ctx *c) { /* func_0028F278 */
ENTER(0x28f278);
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
SET64(7, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(2) + 376)));
{ int t = RSD(6) <= 0; SET32(3, RW(2) + 384); if (t) goto L_0028F2B4; }
SET32(4, RW(4) + 5800);
L_0028F290:;
SET64(2, RD(4) + RD(0));
{ int t = RD(3) == RD(5); SET32(4, RW(4) + 136); if (t) goto L_0028F2B8; }
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < RSD(6));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 232); if (t) { POLL(); goto L_0028F290; } }
L_0028F2B4:;
SET64(2, RD(0) + RD(0));
L_0028F2B8:;
 return;
}

void F_0028F2C0(Ctx *c) { /* func_0028F2C0 */
ENTER(0x28f2c0);
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET32(2, RW(0) + 1);
wr32(c, (RW(3) + 124), RW(2)); return;
}

void F_0028F2D0(Ctx *c) { /* func_0028F2D0 */
ENTER(0x28f2d0);
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET64(2, (s32)rd32(c, (RW(3) + 124))); return;
}

void F_0028F2E0(Ctx *c) { /* func_0028F2E0 */
ENTER(0x28f2e0);
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
wr32(c, (RW(2) + 128), RW(5)); return;
}

void F_0028F2F0(Ctx *c) { /* func_0028F2F0 */
ENTER(0x28f2f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28f308); SET64(4, RD(29) + RD(0)); F_00287C60(c);
SET64(5, (s32)rd32(c, (RW(16) + 8120)));
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(5) + 376)));
{ int t = RSD(2) <= 0; SET32(4, RW(5) + 384); if (t) goto L_0028F35C; }
SET64(3, RD(2) + RD(0));
SET32(7, RW(0) + 2);
SET32(6, RW(0) + 4);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
L_0028F330:;
{ int t = RD(2) == RD(7); SET32(4, RW(4) + 232); if (t) goto L_0028F340; }
if (RD(2) != RD(6)) { SET32(3, RW(3) + -1); goto L_0028F348; }
L_0028F340:;
SET32(16, RW(16) + 1);
SET32(3, RW(3) + -1);
L_0028F348:;
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 0))); { POLL(); goto L_0028F330; } }
L_0028F35C:;
SET64(3, (s32)rd32(c, (RW(5) + 124)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET32(2, RW(0) + -1); if (t) goto L_0028F370; }
if (RD(16) == 0) SET64(16, RD(2));
L_0028F370:;
SET64(31, 0x28f378); SET64(4, RD(29) + RD(0)); F_00287C78(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0028F390(Ctx *c) { /* func_0028F390 */
ENTER(0x28f390);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28f3a8); SET64(4, RD(29) + RD(0)); F_00287C60(c);
SET64(2, (s32)rd32(c, (RW(16) + 8120)));
SET64(3, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 376)));
{ int t = RSD(4) <= 0; SET32(16, RW(2) + 384); if (t) goto L_0028F3F4; }
SET64(2, rd64(c, (RW(16) + 0))); goto L_0028F3D8;
L_0028F3C8:;
SET64(2, RSD(3) < RSD(4));
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 232); if (t) goto L_0028F3F4; }
SET64(2, rd64(c, (RW(16) + 0)));
L_0028F3D8:;
if (RD(2) != RD(0)) { SET32(3, RW(3) + 1); { POLL(); goto L_0028F3C8; } }
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(2));
L_0028F3F4:;
SET64(2, RD(3) ^ RD(4));
SET64(4, RD(29) + RD(0));
SET64(31, 0x28f404); if (RD(2) == 0) SET64(16, RD(0)); F_00287C78(c);
SET64(31, rd64(c, (RW(29) + 24)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0028F418(Ctx *c) { /* func_0028F418 */
ENTER(0x28f418);
if (RD(4) != RD(0)) { wr32(c, (RW(4) + 0), RW(0)); goto L_0028F420; }
L_0028F420:;
 return;
}

void F_0028F428(Ctx *c) { /* func_0028F428 */
ENTER(0x28f428);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 2); if (t) goto L_0028F434; }
wr32(c, (RW(4) + 0), RW(2));
L_0028F434:;
 return;
}

void F_0028F440(Ctx *c) { /* func_0028F440 */
ENTER(0x28f440);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_0028F44C; }
wr32(c, (RW(4) + 0), RW(2));
L_0028F44C:;
 return;
}

void F_0028F458(Ctx *c) { /* func_0028F458 */
ENTER(0x28f458);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_0028F478; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) != RD(2)) { wr32(c, (RW(4) + 0), RW(0)); goto L_0028F478; }
SET32(2, RW(0) + 3);
wr32(c, (RW(4) + 0), RW(2)); return;
L_0028F478:;
 return;
}

void F_0028F480(Ctx *c) { /* func_0028F480 */
ENTER(0x28f480);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_0028F4A0; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) != RD(2)) { wr32(c, (RW(4) + 0), RW(0)); goto L_0028F4A0; }
SET32(2, RW(0) + 2);
wr32(c, (RW(4) + 0), RW(2)); return;
L_0028F4A0:;
 return;
}

void F_0028F4A8(Ctx *c) { /* func_0028F4A8 */
ENTER(0x28f4a8);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(19));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 72), RD(23));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 56), RD(21));
wr64(c, (RW(29) + 64), RD(22));
wr64(c, (RW(29) + 80), RD(31));
SET64(31, 0x28f4e8); SET64(23, RD(5) + RD(0)); F_00287C60(c);
SET64(19, (s32)rd32(c, (RW(16) + 8120)));
SET64(2, (s32)rd32(c, (RW(19) + 376)));
SET32(16, RW(19) + 384);
{ int t = RSD(2) <= 0; wr32(c, (RW(23) + 0), RW(0)); if (t) goto L_0028F53C; }
SET64(17, RD(2) + RD(0));
SET32(22, RW(0) + 2);
SET32(21, RW(0) + 4);
L_0028F508:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) == RD(22); SET64(4, RD(18) + RD(0)); if (t) goto L_0028F520; }
if (RD(2) != RD(21)) { SET32(17, RW(17) + -1); goto L_0028F534; }
SET64(4, RD(18) + RD(0));
L_0028F520:;
SET64(31, 0x28f528); SET64(5, RD(16) + RD(0)); F_0028F920(c);
SET32(20, RW(20) + 1);
if (RD(2) != 0) SET64(18, RD(16));
SET32(17, RW(17) + -1);
L_0028F534:;
{ int t = RD(17) != RD(0); SET32(16, RW(16) + 232); if (t) { POLL(); goto L_0028F508; } }
L_0028F53C:;
SET32(2, RW(0) + 1);
{ int t = RD(20) != RD(2);  if (t) goto L_0028F554; }
SET64(2, (s32)rd32(c, (RW(19) + 124)));
if (RD(2) != RD(0)) { wr32(c, (RW(23) + 0), RW(20)); goto L_0028F554; }
L_0028F554:;
SET64(31, 0x28f55c); SET64(4, RD(29) + RD(0)); F_00287C78(c);
SET64(2, RD(18) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
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

void F_0028F590(Ctx *c) { /* func_0028F590 */
ENTER(0x28f590);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28f5ac); SET64(17, RD(6) + RD(0)); F_0028F788(c);
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_0028F5C4; }
SET64(3, (s32)rd32(c, (RW(2) + 84)));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(3) + 4))); goto L_0028F5D0; }
wr32(c, (RW(16) + 0), RW(0));
L_0028F5C4:;
wr32(c, (RW(17) + 0), RW(0)); goto L_0028F5DC;
L_0028F5D0:;
SET64(3, (s32)rd32(c, (RW(3) + 0)));
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(16) + 0), RW(3));
L_0028F5DC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0028F5F0(Ctx *c) { /* func_0028F5F0 */
ENTER(0x28f5f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28f608); SET64(17, RD(4) + RD(0)); F_00287BC8(c);
SET64(16, RD(2) + RD(0));
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(17) + RD(0));
{ int t = RD(16) == RD(0); SET64(5, RD(5) | 0x187); if (t) goto L_0028F630; }
SET64(31, 0x28f624); SET64(4, RD(0) + RD(0)); F_002879A8(c);
SET64(2, RD(0) + RD(0)); goto L_0028F654;
L_0028F630:;
SET64(31, 0x28f638);  F_0028F668(c);
SET32(3, RW(0) + 1);
SET64(5, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 2408)));
{ int t = RD(2) != RD(3); SET64(4, RSD(16) < RSD(5)); if (t) goto L_0028F650; }
SET32(5, RW(5) - RW(4));
L_0028F650:;
SET64(2, RD(5) + RD(0));
L_0028F654:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0028F668(Ctx *c) { /* func_0028F668 */
ENTER(0x28f668);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28f684); SET64(4, RD(29) + RD(0)); F_00287C60(c);
SET32(5, RW(29) + 4);
SET32(6, RW(29) + 8);
SET64(31, 0x28f694); SET64(4, RD(16) + RD(0)); F_0028F820(c);
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET64(3, (s32)rd32(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(2, RD(2) ^ 0x4);
SET32(5, RW(0) + 15);
if (RD(2) != 0) SET64(3, RD(0));
SET64(31, 0x28f6b4); wr32(c, (RW(29) + 8), RW(3)); F_00294A30(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
if (RD(2) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_0028F710; }
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028F6E0; }
SET64(6, (s32)rd32(c, (RW(2) + 60)));
SET64(31, 0x28f6d8); SET64(5, (s32)rd32(c, (RW(2) + 56))); F_002964B0(c);
if (RD(2) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_0028F710; }
L_0028F6E0:;
SET64(2, (s32)rd32(c, (RW(29) + 8)));
if (RD(2) == RD(0)) { SET32(16, RW(0) + 1); goto L_0028F710; }
if (RD(17) == RD(0)) { SET32(16, RW(0) + 2); goto L_0028F710; }
SET64(6, (s32)rd32(c, (RW(2) + 60)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x28f704); SET64(5, (s32)rd32(c, (RW(2) + 56))); F_002964B0(c);
if (RD(2) == RD(0)) { SET32(16, RW(0) + 1); goto L_0028F710; }
SET32(16, RW(0) + 2);
L_0028F710:;
SET64(31, 0x28f718); SET64(4, RD(29) + RD(0)); F_00287C78(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028F730(Ctx *c) { /* func_0028F730 */
ENTER(0x28f730);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28f744); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x183); if (t) goto L_0028F768; }
SET64(31, 0x28f75c); SET64(4, RD(0) + RD(0)); F_002879A8(c);
SET64(2, RD(0) + RD(0)); goto L_0028F774;
L_0028F768:;
SET64(31, 0x28f770);  F_0028F788(c);
SET64(2, RD(0) < RD(2));
L_0028F774:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0028F788(Ctx *c) { /* func_0028F788 */
ENTER(0x28f788);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28f7a0); SET64(4, RD(29) + RD(0)); F_00287C60(c);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 72)));
SET32(2, RW(0) + 4);
SET32(5, RW(29) + 4);
{ int t = RD(3) == RD(2); SET32(6, RW(29) + 8); if (t) goto L_0028F7C0; }
wr32(c, (RW(29) + 8), RW(0)); goto L_0028F804;
L_0028F7C0:;
SET64(31, 0x28f7c8);  F_0028F820(c);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 8)));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 15); if (t) goto L_0028F804; }
SET64(31, 0x28f7e0);  F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028F804; }
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET64(6, (s32)rd32(c, (RW(2) + 60)));
SET64(31, 0x28f7f8); SET64(5, (s32)rd32(c, (RW(2) + 56))); F_002964B0(c);
SET64(3, (s32)rd32(c, (RW(29) + 8)));
if (RD(2) == 0) SET64(3, RD(0));
wr32(c, (RW(29) + 8), RW(3));
L_0028F804:;
SET64(31, 0x28f80c); SET64(4, RD(29) + RD(0)); F_00287C78(c);
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0028F820(Ctx *c) { /* func_0028F820 */
ENTER(0x28f820);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
wr32(c, (RW(18) + 0), RW(0));
SET64(3, (s32)rd32(c, (RW(2) + 376)));
SET32(16, RW(2) + 384);
{ int t = RSD(3) <= 0; wr32(c, (RW(17) + 0), RW(0)); if (t) goto L_0028F8D4; }
SET64(19, RD(3) + RD(0));
SET32(22, RW(0) + 2);
SET32(21, RW(0) + 4);
L_0028F878:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) == RD(22)) { SET64(4, (s32)rd32(c, (RW(18) + 0))); goto L_0028F890; }
if (RD(2) != RD(21)) { SET32(19, RW(19) + -1); goto L_0028F8CC; }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
L_0028F890:;
SET64(5, RD(16) + RD(0));
SET64(31, 0x28f89c); SET32(20, RW(20) + 1); F_0028F920(c);
{ int t = RD(2) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_0028F8B8; }
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(18) + 0), RW(16)); goto L_0028F8C8;
L_0028F8B8:;
SET64(31, 0x28f8c0); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_0028F920(c);
if (RD(2) != RD(0)) { wr32(c, (RW(17) + 0), RW(16)); goto L_0028F8C8; }
L_0028F8C8:;
SET32(19, RW(19) + -1);
L_0028F8CC:;
{ int t = RD(19) != RD(0); SET32(16, RW(16) + 232); if (t) { POLL(); goto L_0028F878; } }
L_0028F8D4:;
{ int t = RSD(20) > 0; SET32(2, RW(0) + 1); if (t) goto L_0028F8E8; }
wr32(c, (RW(18) + 0), RW(0)); goto L_0028F8F0;
L_0028F8E8:;
{ int t = RD(20) != RD(2); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0028F8F8; }
L_0028F8F0:;
wr32(c, (RW(17) + 0), RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_0028F8F8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0028F920(Ctx *c) { /* func_0028F920 */
ENTER(0x28f920);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028F934; }
SET64(3, (s32)rd32(c, (RW(4) + 56)));
SET64(2, (s32)rd32(c, (RW(5) + 56)));
SET64(2, RSD(2) < RSD(3));
L_0028F934:;
 return;
}

void F_0028F940(Ctx *c) { /* func_0028F940 */
ENTER(0x28f940);
SET64(7, RD(4) + RD(0));
SET64(3, (s64)(s32)0xfff0000);
SET64(4, (s32)rd32(c, (RW(7) + 8)));
SET64(3, RD(3) | 0xffff);
SET64(6, (s32)rd32(c, (RW(7) + 4)));
SET32(4, RW(4) << 4);
SET32(4, RW(4) + RW(6));
SET32(4, RW(4) + 16);
SET64(4, RD(4) & RD(3));
{ int t = RD(5) == RD(4); SET64(2, RD(0) + RD(0)); if (t) goto L_0028F984; }
SET64(2, (s32)rd32(c, (RW(7) + 0)));
SET32(2, RW(5) - RW(2));
SET32(4, RW(2) + 2047);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(4));
SET32(2, RSW(2) >> 11);
L_0028F984:;
 return;
}

void F_0028F990(Ctx *c) { /* func_0028F990 */
ENTER(0x28f990);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28f9a4); SET64(16, RD(4) + RD(0)); F_001186A0(c);
SET64(5, (s64)(s32)0x10000000);
SET64(7, (s64)(s32)0x10000);
SET64(5, RD(5) | 0xf520);
SET64(6, (s64)(s32)0x10000000);
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET64(4, (s64)(s32)0x10000000);
SET64(6, RD(6) | 0xf590);
SET64(4, RD(4) | 0xb000);
SET64(2, RD(2) | RD(7));
SET64(3, (s64)(s32)0xfffe0000);
wr32(c, (RW(6) + 0), RW(2));
SET64(3, RD(3) | 0xffff);
wr32(c, (RW(4) + 0), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) & RD(3));
wr32(c, (RW(6) + 0), RW(2));
SET32(29, RW(29) + 16); { F_001186F8(c); return; }
}

void F_0028F9F8(Ctx *c) { /* func_0028F9F8 */
ENTER(0x28f9f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28fa0c); SET64(16, RD(4) + RD(0)); F_001186A0(c);
SET64(5, (s64)(s32)0x10000000);
SET64(7, (s64)(s32)0x10000);
SET64(5, RD(5) | 0xf520);
SET64(6, (s64)(s32)0x10000000);
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET64(4, (s64)(s32)0x10000000);
SET64(6, RD(6) | 0xf590);
SET64(4, RD(4) | 0xb400);
SET64(2, RD(2) | RD(7));
SET64(3, (s64)(s32)0xfffe0000);
wr32(c, (RW(6) + 0), RW(2));
SET64(3, RD(3) | 0xffff);
wr32(c, (RW(4) + 0), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) & RD(3));
wr32(c, (RW(6) + 0), RW(2));
SET32(29, RW(29) + 16); { F_001186F8(c); return; }
}

void F_0028FA60(Ctx *c) { /* func_0028FA60 */
ENTER(0x28fa60);
SET64(6, RD(6) << 32);
SET64(5, RD(5) << 32);
SET64(6, RD(6) >> 4);
SET64(7, RD(7) << 32);
SET64(5, RD(5) | RD(6));
SET64(7, RD(7) >> 32);
SET64(5, RD(5) | RD(7));
wr64(c, (RW(4) + 0), RD(5)); return;
}

void F_0028FA88(Ctx *c) { /* func_0028FA88 */
ENTER(0x28fa88);
SET64(2, (s64)(s32)0xfff0000);
SET32(29, RW(29) + -48);
SET64(2, RD(2) | 0xffff);
SET64(3, (s64)(s32)0x20000000);
SET64(6, RD(6) & RD(2));
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
SET64(6, RD(6) | RD(3));
SET32(10, RW(7) << 11);
wr64(c, (RW(29) + 40), RD(31));
SET64(4, RD(29) + RD(0));
wr32(c, (RW(16) + 84), RW(9));
wr32(c, (RW(16) + 24), RW(10));
wr32(c, (RW(16) + 8), RW(7));
wr32(c, (RW(16) + 0), RW(5));
wr32(c, (RW(16) + 80), RW(8));
wr32(c, (RW(16) + 4), RW(6));
wr32(c, (RW(29) + 4), RW(2));
SET64(31, 0x28fadc); wr32(c, (RW(29) + 8), RW(2)); F_0010F660(c);
wr32(c, (RW(16) + 64), RW(2));
SET64(31, 0x28fae8); SET64(4, RD(16) + RD(0)); F_0028FB00(c);
wr64(c, (RW(16) + 72), RD(0));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0028FB00(Ctx *c) { /* func_0028FB00 */
ENTER(0x28fb00);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
wr32(c, (RW(17) + 68), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 84)));
wr32(c, (RW(17) + 12), RW(0));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 88), RW(0));
{ int t = RSD(3) <= 0; wr32(c, (RW(17) + 92), RW(0)); if (t) goto L_0028FB6C; }
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET32(4, RW(0) + -1);
L_0028FB48:;
wr32(c, (RW(3) + 16), RW(0));
SET32(18, RW(18) + 1);
wr32(c, (RW(3) + 20), RW(0));
wr64(c, (RW(3) + 0), RD(4));
SET64(2, (s32)rd32(c, (RW(17) + 84)));
wr64(c, (RW(3) + 8), RD(4));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 24); if (t) { POLL(); goto L_0028FB48; } }
L_0028FB6C:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_0028FBC0; }
SET64(16, (s64)(s32)0xfff0000);
SET64(16, RD(16) | 0xffff);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
L_0028FB88:;
SET32(5, RW(18) << 11);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(4, RW(18) << 4);
SET32(5, RW(5) + RW(2));
SET32(6, RW(0) + 3);
SET32(4, RW(3) + RW(4));
SET64(5, RD(5) & RD(16));
SET32(7, RW(0) + 128);
SET64(31, 0x28fbb0); SET32(18, RW(18) + 1); F_0028FA60(c);
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_0028FB88; } }
L_0028FBC0:;
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(16, (s64)(s32)0xfff0000);
SET64(16, RD(16) | 0xffff);
SET32(4, RW(18) << 4);
SET32(4, RW(5) + RW(4));
SET64(5, RD(5) & RD(16));
SET64(7, RD(0) + RD(0));
SET64(31, 0x28fbe4); SET32(6, RW(0) + 2); F_0028FA60(c);
SET64(4, (s64)(s32)0x10000000);
SET64(6, (s32)rd32(c, (RW(17) + 4)));
SET64(3, (s64)(s32)0x10000000);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s64)(s32)0x10000000);
SET64(6, RD(6) & RD(16));
SET64(3, RD(3) | 0xb410);
SET64(2, RD(2) & RD(16));
SET64(5, RD(5) | 0xb430);
SET64(4, RD(4) | 0xb420);
wr32(c, (RW(4) + 0), RW(0));
SET32(4, RW(0) + 5);
wr32(c, (RW(3) + 0), RW(2));
SET64(31, 0x28fc20); wr32(c, (RW(5) + 0), RW(6)); F_0028F9F8(c);
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0028FC40(Ctx *c) { /* func_0028FC40 */
ENTER(0x28fc40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(8) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x28fc78); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_0010F6A0(c);
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(5, (s32)rd32(c, (RW(16) + 16)));
SET64(6, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(3) + RW(5));
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET32(3, RW(3) << 11);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET32(3, RW(3) + RW(6));
if (RD(4) == RD(0)) { rt_break(c, 0x28fc9c); goto L_0028FCA0; }
L_0028FCA0:;
div_s(c, 0, RSW(3), RSW(4));
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 11);
SET32(2, RW(2) + -4096);
SET32(5, RW(2) - RW(6));
SET64(7, c->hi.d[0]);
SET32(4, RW(4) - RW(7));
SET64(2, RSD(4) < RSD(5));
if (RD(2) != RD(0)) { wr32(c, (RW(17) + 0), RW(4)); goto L_0028FCE8; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(17) + 0), RW(5));
SET32(2, RW(2) + RW(7));
wr32(c, (RW(20) + 0), RW(0));
wr32(c, (RW(18) + 0), RW(2));
wr32(c, (RW(19) + 0), RW(0)); goto L_0028FD08;
L_0028FCE8:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET32(3, RW(4) + RW(7));
SET32(2, RW(2) - RW(7));
wr32(c, (RW(18) + 0), RW(3));
SET32(2, RW(5) - RW(2));
wr32(c, (RW(19) + 0), RW(4));
wr32(c, (RW(20) + 0), RW(2));
L_0028FD08:;
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_0010F680(c); return; }
}

void F_0028FD30(Ctx *c) { /* func_0028FD30 */
ENTER(0x28fd30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28fd50); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_0010F6A0(c);
SET64(3, (s32)rd32(c, (RW(16) + 20)));
SET64(2, rd64(c, (RW(16) + 72)));
SET32(3, RW(3) + RW(17));
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(2, RD(17) + RD(2));
SET64(17, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 20), RW(3));
wr64(c, (RW(16) + 72), RD(2));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); { F_0010F680(c); return; }
}

void F_0028FD80(Ctx *c) { /* func_0028FD80 */
ENTER(0x28fd80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28fda0); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_0010F6A0(c);
SET64(3, (s32)rd32(c, (RW(16) + 20)));
SET64(2, rd64(c, (RW(16) + 72)));
SET32(3, RW(3) - RW(17));
SET64(2, RD(2) - RD(17));
wr32(c, (RW(16) + 20), RW(3));
{ int t = RSD(3) >= 0; wr64(c, (RW(16) + 72), RD(2)); if (t) goto L_0028FDE0; }
L_0028FDC0:;
 { POLL(); goto L_0028FDC0; }
L_0028FDE0:;
SET64(31, 0x28fde8); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_0010F680(c);
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0028FE00(Ctx *c) { /* func_0028FE00 */
ENTER(0x28fe00);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(23));
SET64(23, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x28fe38); SET64(4, (s32)rd32(c, (RW(17) + 64))); F_0010F6A0(c);
SET64(3, (s32)rd32(c, (RW(17) + 68)));
{ int t = RD(3) != RD(0);  if (t) goto L_0028FE58; }
SET64(31, 0x28fe4c); SET64(4, (s32)rd32(c, (RW(17) + 64))); F_0010F680(c);
SET64(2, RD(0) + RD(0)); goto L_0028FFD0;
L_0028FE58:;
SET64(31, 0x28fe60); SET32(4, RW(0) + 5); F_0028F9F8(c);
SET64(2, (s64)(s32)0x10000000);
SET64(3, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0xb400);
SET64(3, RD(3) | 0xb410);
SET64(21, (s32)rd32(c, (RW(2) + 0)));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x28fe80); SET64(4, RD(17) + RD(0)); F_0028F940(c);
SET64(6, (s32)rd32(c, (RW(17) + 8)));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) + RW(6));
if (RD(6) == RD(0)) { rt_break(c, 0x28fe90); goto L_0028FE94; }
L_0028FE94:;
SET32(2, RW(2) - RW(3));
div_s(c, 0, RSW(2), RSW(6));
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET64(4, c->hi.d[0]);
SET32(3, RW(3) + RW(4));
SET32(2, RW(2) - RW(4));
div_s(c, 0, RSW(3), RSW(6));
wr32(c, (RW(17) + 16), RW(2));
SET64(5, c->hi.d[0]);
SET32(7, RW(5) + RW(2));
wr32(c, (RW(17) + 12), RW(5));
div_s(c, 0, RSW(7), RSW(6));
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET64(3, RSD(4) < (s64)0);
SET32(5, RW(4) + 2047);
SET64(2, RD(4) + RD(0));
if (RD(3) != 0) SET64(2, RD(5));
SET32(19, RSW(2) >> 11);
SET32(3, RW(19) << 11);
SET32(4, RW(4) - RW(3));
SET64(16, c->hi.d[0]);
{ int t = RSD(19) <= 0; wr32(c, (RW(17) + 20), RW(4)); if (t) goto L_0028FF30; }
SET32(2, RW(7) + RW(6));
SET32(7, RW(0) + 128);
SET32(2, RW(2) + -1);
if (RD(6) == RD(0)) { rt_break(c, 0x28ff00); goto L_0028FF04; }
L_0028FF04:;
div_s(c, 0, RSW(2), RSW(6));
SET32(6, RW(0) + 3);
SET64(8, (s32)rd32(c, (RW(17) + 4)));
SET32(23, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, c->hi.d[0]);
SET32(5, RW(4) << 11);
SET32(4, RW(4) << 4);
SET32(4, RW(8) + RW(4));
SET64(31, 0x28ff30); SET32(5, RW(3) + RW(5)); F_0028FA60(c);
L_0028FF30:;
{ int t = RSD(19) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_0028FF94; }
SET32(20, RW(19) + -1);
SET32(22, RW(0) + 3);
L_0028FF40:;
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET64(7, RD(18) ^ RD(20));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(4, RW(16) << 4);
SET32(5, RW(16) << 11);
SET64(6, RD(0) + RD(0));
SET32(4, RW(3) + RW(4));
SET32(5, RW(2) + RW(5));
if (RD(7) != 0) SET64(6, RD(22));
SET64(31, 0x28ff6c); SET32(7, RW(0) + 128); F_0028FA60(c);
SET32(3, RW(16) + 1);
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(18, RW(18) + 1);
SET64(5, RSD(18) < RSD(19));
div_s(c, 0, RSW(3), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x28ff84); goto L_0028FF88; }
L_0028FF88:;
SET64(4, c->hi.d[0]);
{ int t = RD(5) != RD(0); SET64(16, RD(4) + RD(0)); if (t) { POLL(); goto L_0028FF40; } }
L_0028FF94:;
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET32(2, RW(2) + RW(19));
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 16), RW(2)); if (t) goto L_0028FFC4; }
{ int t = RD(23) == RD(0); SET64(2, (s64)(s32)0xfff0000); if (t) goto L_0028FFBC; }
SET64(3, (s64)(s32)0x30000000);
SET64(2, RD(2) | 0xffff);
SET64(2, RD(21) & RD(2));
SET64(21, RD(2) | RD(3));
L_0028FFBC:;
SET64(31, 0x28ffc4); SET64(4, RD(21) | 0x100); F_0028F9F8(c);
L_0028FFC4:;
SET64(31, 0x28ffcc); SET64(4, (s32)rd32(c, (RW(17) + 64))); F_0010F680(c);
SET32(2, RW(0) + 1);
L_0028FFD0:;
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

static void B_00290000(Ctx *c, u32 entry) { /* func_00290000 */
ENTER(entry);
switch (entry) { case 0x290014: goto L_00290014; case 0x290018: goto L_00290018; case 0x290020: goto L_00290020; case 0x290024: goto L_00290024; case 0x290028: goto L_00290028; case 0x29002c: goto L_0029002C; case 0x290034: goto L_00290034; case 0x290048: goto L_00290048; case 0x290050: goto L_00290050; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x290018); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_0010F6A0(c);
if (0) { L_00290014:; SET64(4, (s32)rd32(c, (RW(16) + 64))); }
L_00290018:;
wr32(c, (RW(16) + 68), RW(0));
SET64(31, 0x290024); SET32(4, RW(0) + 5); F_0028F9F8(c);
if (0) { L_00290020:; SET32(4, RW(0) + 5); }
L_00290024:;
SET64(2, (s64)(s32)0x10000000);
L_00290028:;
SET64(2, RD(2) | 0xb410);
L_0029002C:;
SET64(4, (s64)(s32)0x10000000);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
L_00290034:;
SET64(4, RD(4) | 0xb430);
SET64(5, (s64)(s32)0x10000000);
SET64(6, (s64)(s32)0x10000000);
wr32(c, (RW(16) + 28), RW(3));
SET64(5, RD(5) | 0xb420);
L_00290048:;
SET64(6, RD(6) | 0xb400);
SET64(7, (s64)(s32)0x10000000);
L_00290050:;
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(7, RD(7) | 0x2010);
wr32(c, (RW(16) + 32), RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 0)));
wr32(c, (RW(16) + 36), RW(2));
SET64(3, (s32)rd32(c, (RW(6) + 0)));
wr32(c, (RW(16) + 40), RW(3));
L_00290070:;
SET64(2, (s32)rd32(c, (RW(7) + 0)));
SET64(2, RD(2) & 0xf0);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00290070; } }
SET64(31, 0x290094); SET64(4, RD(0) + RD(0)); F_0028F990(c);
SET64(2, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0xb010);
SET64(3, (s64)(s32)0x10000000);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(3, RD(3) | 0xb020);
SET64(6, (s64)(s32)0x10000000);
SET64(7, (s64)(s32)0x10000000);
wr32(c, (RW(16) + 44), RW(4));
SET64(6, RD(6) | 0xb000);
SET64(7, RD(7) | 0x2020);
SET64(5, (s64)(s32)0x10000000);
SET64(8, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RD(5) | 0x2010);
SET64(4, (s32)rd32(c, (RW(16) + 64)));
wr32(c, (RW(16) + 48), RW(8));
SET64(2, (s32)rd32(c, (RW(6) + 0)));
wr32(c, (RW(16) + 52), RW(2));
SET64(3, (s32)rd32(c, (RW(7) + 0)));
wr32(c, (RW(16) + 56), RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET64(31, 0x2900ec); wr32(c, (RW(16) + 60), RW(2)); F_0010F680(c);
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}
void F_00290000(Ctx *c) { B_00290000(c, 0x290000); }
void F_00290014(Ctx *c) { B_00290000(c, 0x290014); }
void F_00290018(Ctx *c) { B_00290000(c, 0x290018); }
void F_00290020(Ctx *c) { B_00290000(c, 0x290020); }
void F_00290024(Ctx *c) { B_00290000(c, 0x290024); }
void F_00290028(Ctx *c) { B_00290000(c, 0x290028); }
void F_0029002C(Ctx *c) { B_00290000(c, 0x29002c); }
void F_00290034(Ctx *c) { B_00290000(c, 0x290034); }
void F_00290048(Ctx *c) { B_00290000(c, 0x290048); }
void F_00290050(Ctx *c) { B_00290000(c, 0x290050); }

static void B_00290100(Ctx *c, u32 entry) { /* func_00290100 */
ENTER(entry);
switch (entry) { case 0x29020c: goto L_0029020C; }
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x290130); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_0010F6A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 56)));
SET64(9, (s32)rd32(c, (RW(16) + 28)));
SET32(2, RW(4) >> 8);
SET32(3, RW(4) >> 16);
SET64(2, RD(2) & 0xf);
SET64(3, RD(3) & 0x3);
SET32(3, RW(3) + RW(2));
SET64(7, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(3) << 4);
SET64(5, (s32)rd32(c, (RW(16) + 36)));
SET32(18, RW(9) - RW(2));
SET64(10, (s32)rd32(c, (RW(16) + 40)));
SET64(2, RD(18) < RD(7));
SET32(21, RW(5) + RW(3));
SET64(22, RD(4) & 0x7f);
SET64(20, (s32)rd32(c, (RW(16) + 32)));
{ int t = RD(2) == RD(0); SET64(19, RD(10) | 0x100); if (t) goto L_00290220; }
SET64(6, (s32)rd32(c, (RW(16) + 8)));
SET64(2, (s64)(s32)0xfff0000);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET32(4, RW(7) - RW(18));
SET32(8, RW(6) << 11);
SET64(2, RD(2) | 0xffff);
SET64(20, RD(3) & RD(2));
SET32(21, RW(4) >> 4);
{ int t = RD(9) == RD(7); SET32(18, RW(18) + RW(8)); if (t) goto L_002901AC; }
SET32(2, RW(7) + RW(8));
{ int t = RD(9) != RD(2); SET32(4, RW(0) + 3); if (t) goto L_002901B0; }
L_002901AC:;
SET64(4, RD(0) + RD(0));
L_002901B0:;
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(2, (s64)(s32)0xfff0000);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(4) << 28);
SET32(3, RW(6) - RW(3));
SET64(2, RD(10) & RD(2));
div_s(c, 0, RSW(3), RSW(6));
SET64(2, RD(2) | RD(4));
SET64(19, RD(2) | 0x100);
if (RD(6) == RD(0)) { rt_break(c, 0x2901d8); goto L_002901DC; }
L_002901DC:;
SET64(5, c->hi.d[0]);
if (RSD(5) < 0) { SET64(3, (s32)rd32(c, (RW(16) + 16))); goto L_00290208; }
if (RD(6) == RD(0)) { rt_break(c, 0x2901ec); goto L_002901F0; }
L_002901F0:;
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, RSD(5) < RSD(3));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 44))); goto L_00290308; }
SET32(2, RW(6) + -1); goto L_0029020C;
L_00290208:;
SET32(2, RW(6) + -1);
L_0029020C:;
SET32(3, RW(3) + 1);
wr32(c, (RW(16) + 12), RW(2));
wr32(c, (RW(16) + 16), RW(3)); goto L_00290304;
L_00290220:;
SET64(5, RD(9) + RD(0));
SET64(31, 0x29022c); SET64(4, RD(16) + RD(0)); F_0028F940(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x29023c); SET64(17, RD(2) + RD(0)); F_0028F940(c);
SET64(14, RD(2) + RD(0));
{ int t = RD(17) == RD(14); SET64(9, (s64)(s32)0xfff0000); if (t) goto L_00290304; }
SET64(12, (s32)rd32(c, (RW(16) + 8)));
SET64(8, (s32)rd32(c, (RW(16) + 0)));
SET32(11, RW(0) + 3);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
SET32(3, RW(12) << 11);
if (RD(3) == RD(0)) { rt_break(c, 0x290260); goto L_00290264; }
L_00290264:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET32(2, RW(2) - RW(8));
SET64(13, (s32)rd32(c, (RW(16) + 16)));
div_u(c, 0, RW(2), RW(3));
SET32(3, RW(17) << 11);
SET32(2, RW(4) + RW(13));
SET32(5, RW(14) + RW(12));
SET32(5, RW(5) - RW(4));
SET32(3, RW(8) + RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 40)));
SET64(10, (s32)rd32(c, (RW(16) + 4)));
SET64(9, RD(9) | 0xffff);
SET64(4, RD(4) & RD(9));
SET32(3, RW(3) - RW(18));
SET32(21, RW(3) >> 4);
SET64(6, c->hi.d[0]);
div_s(c, 0, RSW(2), RSW(12));
SET32(6, RW(8) + RW(6));
SET32(2, RW(17) << 4);
SET32(2, RW(2) + RW(10));
SET64(20, RD(2) & RD(9));
SET64(7, c->hi.d[0]);
div_s(c, 0, RSW(5), RSW(12));
SET32(7, RW(7) << 11);
SET32(8, RW(8) + RW(7));
SET64(6, RD(6) ^ RD(8));
if (RD(6) == 0) SET64(11, RD(0));
SET32(11, RW(11) << 28);
SET64(4, RD(4) | RD(11));
SET64(2, c->hi.d[0]);
{ int t = RSD(2) < 0; SET64(19, RD(4) | 0x100); if (t) goto L_002902F8; }
SET64(2, RSD(2) < RSD(13));
if (RD(12) == RD(0)) { rt_break(c, 0x2902ec); goto L_002902F0; }
L_002902F0:;
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 44))); goto L_00290308; }
L_002902F8:;
SET32(2, RW(13) + 1);
wr32(c, (RW(16) + 12), RW(14));
wr32(c, (RW(16) + 16), RW(2));
L_00290304:;
SET64(3, (s32)rd32(c, (RW(16) + 44)));
L_00290308:;
if (RD(3) == RD(0)) { SET64(3, (s64)(s32)0x10000000); goto L_00290344; }
SET64(2, (s32)rd32(c, (RW(16) + 48)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x10000000); if (t) goto L_00290340; }
SET64(4, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0xb010);
SET64(4, RD(4) | 0xb020);
wr32(c, (RW(2) + 0), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 48)));
wr32(c, (RW(4) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET64(31, 0x290340); SET64(4, RD(4) | 0x100); F_0028F990(c);
L_00290340:;
SET64(3, (s64)(s32)0x10000000);
L_00290344:;
SET64(3, RD(3) | 0x2010);
L_00290348:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RSD(2) < 0; SET64(2, (s64)(s32)0x10000000); if (t) { POLL(); goto L_00290348; } }
SET64(3, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0x2000);
SET64(3, RD(3) | 0x2010);
wr32(c, (RW(2) + 0), RW(22));
L_00290378:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RSD(2) < 0; SET64(2, (s64)(s32)0x10000000); if (t) { POLL(); goto L_00290378; } }
SET64(3, (s64)(s32)0x10000000);
SET64(4, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0xb410);
SET64(3, RD(3) | 0xb430);
SET64(4, RD(4) | 0xb420);
wr32(c, (RW(2) + 0), RW(18));
wr32(c, (RW(3) + 0), RW(20));
wr32(c, (RW(4) + 0), RW(21));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 60))); goto L_002903CC; }
SET64(31, 0x2903c8); SET64(4, RD(19) + RD(0)); F_0028F9F8(c);
SET64(2, (s32)rd32(c, (RW(16) + 60)));
L_002903CC:;
SET64(3, (s64)(s32)0x10000000);
SET64(3, RD(3) | 0x2010);
SET32(4, RW(0) + 1);
wr32(c, (RW(3) + 0), RW(2));
wr32(c, (RW(16) + 68), RW(4));
SET64(31, 0x2903e8); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_0010F680(c);
SET32(2, RW(0) + 1);
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
void F_00290100(Ctx *c) { B_00290100(c, 0x290100); }
void F_0029020C(Ctx *c) { B_00290100(c, 0x29020c); }

void F_00290418(Ctx *c) { /* func_00290418 */
ENTER(0x290418);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x290430); SET32(4, RW(0) + 5); F_0028F9F8(c);
SET64(2, (s64)(s32)0x10000000);
SET64(3, (s64)(s32)0x10000000);
SET64(4, (s64)(s32)0x10000000);
SET64(3, RD(3) | 0xb410);
SET64(2, RD(2) | 0xb420);
SET64(4, RD(4) | 0xb430);
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(3) + 0), RW(0));
wr32(c, (RW(4) + 0), RW(0));
SET64(31, 0x29045c); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_0010F670(c);
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00290470(Ctx *c) { /* func_00290470 */
ENTER(0x290470);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x290488); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_0010F6A0(c);
SET64(3, (s32)rd32(c, (RW(16) + 20)));
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET32(2, RW(3) + 2051);
SET32(3, RW(3) + 4098);
SET64(5, RSD(2) < (s64)0);
SET64(31, rd64(c, (RW(29) + 8)));
if (RD(5) != 0) SET64(2, RD(3));
SET32(2, RSW(2) >> 11);
SET32(2, RW(2) << 11);
wr32(c, (RW(16) + 20), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0010F680(c); return; }
}

void F_002904C0(Ctx *c) { /* func_002904C0 */
ENTER(0x2904c0);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -1296), RW(4)); return;
}

void F_002904D0(Ctx *c) { /* func_002904D0 */
ENTER(0x2904d0);
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET64(2, (s32)rd32(c, (RW(3) + 4264)));
SET64(2, RD(0) < RD(2)); return;
}

void F_002904E0(Ctx *c) { /* func_002904E0 */
ENTER(0x2904e0);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + -1296)));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00290518; }
SET64(31, 0x2904fc);  F_0010D428(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -27728);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 72);
SET32(29, RW(29) + 16); { F_00272250(c); return; }
L_00290518:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00290528(Ctx *c) { /* func_00290528 */
ENTER(0x290528);
SET64(9, (s32)rd32(c, (RW(4) + 8120)));
SET32(9, RW(9) + 4376);
SET64(3, (s32)rd32(c, (RW(9) + 24)));
wr32(c, (RW(5) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(9) + 12)));
SET32(2, RW(2) << 11);
wr32(c, (RW(7) + 0), RW(2));
SET64(4, (s32)rd32(c, (RW(9) + 16)));
SET64(3, (s32)rd32(c, (RW(9) + 12)));
SET64(5, (s32)rd32(c, (RW(9) + 20)));
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(9) + 24)));
SET32(3, RW(3) << 11);
SET32(3, RW(3) + RW(5));
if (RD(2) == RD(0)) { rt_break(c, 0x290564); goto L_00290568; }
L_00290568:;
div_s(c, 0, RSW(3), RSW(2));
SET64(4, c->hi.d[0]);
wr32(c, (RW(6) + 0), RW(4));
SET64(2, (s32)rd32(c, (RW(9) + 16)));
SET64(3, (s32)rd32(c, (RW(9) + 20)));
SET32(2, RW(2) << 11);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(8) + 0), RW(2)); return;
}

void F_00290590(Ctx *c) { /* func_00290590 */
ENTER(0x290590);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 64), RD(30));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(23));
wr64(c, (RW(29) + 72), RD(31));
SET64(3, (s32)rd32(c, (RW(2) + -1296)));
SET64(5, (s32)rd32(c, (RW(18) + 8120)));
SET32(6, RW(5) + 4);
SET32(17, RW(5) + 4264);
SET32(19, RW(5) + 4304);
{ int t = RD(3) != RD(0); SET32(30, RW(5) + 4472); if (t) goto L_002905E8; }
wr32(c, (RW(17) + 0), RW(0)); goto L_00290774;
L_002905E8:;
SET64(4, (s32)rd32(c, (RW(6) + 12)));
SET64(3, (s32)rd32(c, (RW(6) + 8)));
SET64(7, (s32)rd32(c, (RW(5) + 40)));
mul_s(c, 0, 3, RSW(3), RSW(4));
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(4, RW(2) >> 31);
SET32(2, RW(2) + RW(4));
SET32(2, RSW(2) >> 1);
{ int t = RD(7) != RD(0); SET32(20, RW(2) + 10240); if (t) goto L_00290638; }
SET64(2, (s32)rd32(c, (RW(6) + 16)));
SET32(4, RW(0) + -64);
SET32(2, RW(2) + 63);
SET64(2, RD(2) & RD(4));
SET32(3, RW(2) + RW(20));
wr32(c, (RW(5) + 40), RW(2));
SET32(3, RW(3) + 63);
SET64(2, RD(3) & RD(4)); goto L_00290654;
L_00290638:;
SET64(2, (s32)rd32(c, (RW(5) + 44)));
SET32(4, RW(0) + -64);
SET32(3, RW(7) + 63);
SET32(2, RW(2) + 63);
SET64(3, RD(3) & RD(4));
SET64(2, RD(2) & RD(4));
wr32(c, (RW(5) + 40), RW(3));
L_00290654:;
wr32(c, (RW(5) + 44), RW(2));
SET64(22, (s32)rd32(c, (RW(5) + 44)));
SET32(4, RW(0) + -64);
SET64(16, (s32)rd32(c, (RW(5) + 40)));
SET64(2, (s64)(s32)0x80000);
SET64(2, RD(2) | 0x3f);
SET32(2, RW(2) + RW(22));
SET64(21, RD(2) & RD(4));
SET32(3, RW(21) + 4175);
SET64(31, 0x290680); SET64(23, RD(3) & RD(4)); F_00292D58(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(5, RD(16) + RD(0)); if (t) goto L_00290700; }
SET64(6, RD(20) + RD(0));
SET64(31, 0x290698); SET64(4, RD(19) + RD(0)); F_0010D4D8(c);
SET64(6, (s64)(s32)0x290000);
SET32(6, RW(6) + 1976);
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2906b0); SET64(7, RD(18) + RD(0)); F_0010D930(c);
SET64(6, (s64)(s32)0x290000);
SET32(6, RW(6) + 2240);
SET64(4, RD(19) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2906c8); SET64(7, RD(18) + RD(0)); F_0010D930(c);
SET64(6, (s64)(s32)0x290000);
SET32(6, RW(6) + 2408);
SET64(4, RD(19) + RD(0));
SET32(5, RW(0) + 2);
SET64(31, 0x2906e0); SET64(7, RD(18) + RD(0)); F_0010D930(c);
SET64(6, (s64)(s32)0x290000);
SET64(4, RD(19) + RD(0));
SET32(6, RW(6) + 2448);
SET64(7, RD(18) + RD(0));
SET64(31, 0x2906f8); SET32(5, RW(0) + 3); F_0010D930(c);
SET32(16, RW(17) + 112); goto L_0029070C;
L_00290700:;
SET64(31, 0x290708); SET64(4, RD(18) + RD(0)); F_00290A68(c);
SET32(16, RW(17) + 112);
L_0029070C:;
SET64(5, RD(22) + RD(0));
SET64(6, RD(21) + RD(0));
SET64(8, RD(23) + RD(0));
SET32(7, RW(0) + 256);
SET32(9, RW(0) + 512);
SET64(31, 0x290728); SET64(4, RD(16) + RD(0)); F_0028FA88(c);
SET64(31, 0x290730); SET64(4, RD(16) + RD(0)); F_0028FE00(c);
SET64(31, 0x290738); SET64(4, RD(16) + RD(0)); F_00290000(c);
SET32(3, RW(0) + 1);
SET32(2, RW(0) + -1);
wr8(c, (RW(17) + 16), (u8)RW(0));
wr8(c, (RW(17) + 17), (u8)RW(0));
wr8(c, (RW(17) + 18), (u8)RW(0));
wr32(c, (RW(17) + 0), RW(3));
wr32(c, (RW(17) + 32), RW(0));
wr32(c, (RW(30) + 0), RW(2));
wr32(c, (RW(30) + 4), RW(0));
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(0));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(0));
L_00290774:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(23, rd64(c, (RW(29) + 56)));
SET64(30, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_002907A8(Ctx *c) { /* func_002907A8 */
ENTER(0x2907a8);
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET64(2, (s32)rd32(c, (RW(3) + 4476))); return;
}

void F_002907B8(Ctx *c) { /* func_002907B8 */
ENTER(0x2907b8);
SET64(3, (s64)(s32)0x540000);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(3) + -27656), RW(2));
SET64(2, (s64)(s32)0x540000);
SET64(7, RD(5) + RD(0));
SET32(8, RW(2) + -27648);
ldl(c, 3, (RW(7) + 7));
ldr(c, 3, (RW(7) + 0));
sdl(c, 3, (RW(8) + 7));
sdr(c, 3, (RW(8) + 0));
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(6) + RD(0));
SET64(2, (s32)rd32(c, (RW(6) + 8120)));
ldl(c, 9, (RW(7) + 7));
ldr(c, 9, (RW(7) + 0));
sdl(c, 9, (RW(2) + 4479));
sdr(c, 9, (RW(2) + 4472));
SET64(31, 0x29080c); SET64(5, RD(5) | 0xf40); F_002879A8(c);
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00290820(Ctx *c) { /* func_00290820 */
ENTER(0x290820);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
SET32(6, RW(29) + 4);
SET32(7, RW(29) + 8);
SET64(5, RD(29) + RD(0));
SET32(8, RW(29) + 12);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x290854); SET64(18, RD(4) + RD(0)); F_0028FC40(c);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0xfff0000);
SET64(6, (s32)rd32(c, (RW(29) + 8)));
SET64(2, RD(2) | 0xffff);
SET64(3, (s64)(s32)0x20000000);
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(7, (s32)rd32(c, (RW(29) + 12)));
SET64(4, RD(4) & RD(2));
SET64(6, RD(6) & RD(2));
SET64(8, RD(17) + RD(0));
SET64(9, RD(16) + RD(0));
SET64(4, RD(4) | RD(3));
SET64(6, RD(6) | RD(3));
SET64(10, RD(0) + RD(0));
SET64(31, 0x290894); SET64(11, RD(0) + RD(0)); F_00290BB8(c);
SET64(4, RD(18) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x2908a4); SET64(5, RD(16) + RD(0)); F_0028FD30(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_002908C0(Ctx *c) { /* func_002908C0 */
ENTER(0x2908c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(6) + 8120)));
SET32(17, RW(2) + 4264);
SET32(4, RW(2) + 4304);
SET64(3, (s32)rd32(c, (RW(17) + 24)));
{ int t = RD(3) != RD(18); SET32(16, RW(2) + 4376); if (t) goto L_00290900; }
SET64(31, 0x2908f8);  F_0010D810(c);
SET32(2, RW(0) + 1); goto L_0029094C;
L_00290900:;
SET64(31, 0x290908); SET64(4, RD(16) + RD(0)); F_0028FE00(c);
SET64(3, (s32)rd32(c, (RW(17) + 20)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0029094C; }
SET64(2, (s32)rd32(c, (RW(16) + 16)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0029094C; }
wr32(c, (RW(17) + 24), RW(18));
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 5192);
SET64(31, 0x290938); SET32(6, RW(0) + 16); F_00290820(c);
SET64(3, (s32)rd32(c, (RW(16) + 24)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x290948); wr32(c, (RW(16) + 20), RW(3)); F_0028FE00(c);
SET32(2, RW(0) + 1);
L_0029094C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00290968(Ctx *c) { /* func_00290968 */
ENTER(0x290968);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(6) + 8120)));
SET64(31, 0x29097c); SET32(4, RW(4) + 4376); F_00290000(c);
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00290990(Ctx *c) { /* func_00290990 */
ENTER(0x290990);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(6) + 8120)));
SET64(31, 0x2909a4); SET32(4, RW(4) + 4376); F_00290100(c);
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002909B8(Ctx *c) { /* func_002909B8 */
ENTER(0x2909b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2909d0); SET64(17, RD(4) + RD(0)); F_002904D0(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00290A30; }
SET64(16, (s32)rd32(c, (RW(17) + 8120)));
SET64(31, 0x2909e4); SET32(4, RW(16) + 4376); F_00290418(c);
SET64(31, 0x2909ec);  F_00292D58(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET32(4, RW(16) + 4304); if (t) goto L_00290A10; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0010D6E8(c); return; }
L_00290A10:;
SET64(31, 0x290a18);  F_0010D878(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00290A40(c); return; }
L_00290A30:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00290A40(Ctx *c) { /* func_00290A40 */
ENTER(0x290a40);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 72);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8120)));
SET64(4, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -27728);
SET32(5, RW(5) + 4304);
SET32(29, RW(29) + 16); { F_00271F70(c); return; }
}

void F_00290A68(Ctx *c) { /* func_00290A68 */
ENTER(0x290a68);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(5) + -27728);
SET32(6, RW(0) + 72);
SET64(4, (s32)rd32(c, (RW(4) + 8120)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 4304);
SET32(29, RW(29) + 16); { F_00271F70(c); return; }
}

void F_00290A90(Ctx *c) { /* func_00290A90 */
ENTER(0x290a90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x290ab4); SET64(18, RD(4) + RD(0)); F_002904D0(c);
SET64(5, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_00290AE0; }
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
L_00290AE0:;
SET64(4, (s32)rd32(c, (RW(18) + 8120)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 4376);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00290820(c); return; }
}

void F_00290B00(Ctx *c) { /* func_00290B00 */
ENTER(0x290b00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x290b1c); SET64(17, RD(4) + RD(0)); F_002904D0(c);
{ int t = RD(2) != RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00290B40; }
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
L_00290B40:;
SET64(4, (s32)rd32(c, (RW(17) + 8120)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 4376);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0028FD80(c); return; }
}

void F_00290B60(Ctx *c) { /* func_00290B60 */
ENTER(0x290b60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
wr64(c, (RW(29) + 24), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8120)));
SET32(16, RW(4) + 4264);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
{ int t = RD(2) == RD(18); SET32(4, RW(4) + 4376); if (t) goto L_00290BA0; }
SET64(31, 0x290b98);  F_00290470(c);
wr32(c, (RW(16) + 32), RW(17));
wr32(c, (RW(16) + 28), RW(18));
L_00290BA0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00290BB8(Ctx *c) { /* func_00290BB8 */
ENTER(0x290bb8);
SET32(29, RW(29) + -80);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(9) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(11) + RD(0));
wr64(c, (RW(29) + 64), RD(30));
SET32(30, RW(16) + RW(21));
SET32(7, RW(17) + RW(7));
wr64(c, (RW(29) + 16), RD(18));
SET64(7, RSD(7) < RSD(30));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(23));
SET64(23, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(3, RSD(16) < RSD(17));
wr64(c, (RW(29) + 72), RD(31));
SET64(18, RD(8) + RD(0));
{ int t = RD(7) != RD(0); SET64(20, RD(10) + RD(0)); if (t) goto L_00290CB4; }
if (RD(3) != RD(0)) { SET32(19, RW(17) - RW(16)); goto L_00290C58; }
SET64(5, RD(18) + RD(0));
SET64(31, 0x290c2c); SET64(6, RD(17) + RD(0)); F_00127218(c);
SET64(4, RD(22) + RD(0));
SET32(5, RW(18) + RW(17));
SET64(31, 0x290c3c); SET32(6, RW(16) - RW(17)); F_00127218(c);
SET32(4, RW(22) + RW(16));
SET32(4, RW(4) - RW(17));
SET64(5, RD(20) + RD(0));
SET64(31, 0x290c50); SET64(6, RD(21) + RD(0)); F_00127218(c);
SET64(2, RD(30) + RD(0)); goto L_00290CB4;
L_00290C58:;
SET64(2, RSD(21) < RSD(19));
{ int t = RD(2) != RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_00290C98; }
SET64(31, 0x290c6c); SET64(6, RD(16) + RD(0)); F_00127218(c);
SET64(6, RD(19) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(31, 0x290c7c); SET32(4, RW(23) + RW(16)); F_00127218(c);
SET32(5, RW(20) + RW(17));
SET32(5, RW(5) - RW(16));
SET32(6, RW(21) - RW(19));
SET64(31, 0x290c90); SET64(4, RD(22) + RD(0)); F_00127218(c);
SET64(2, RD(30) + RD(0)); goto L_00290CB4;
L_00290C98:;
SET64(31, 0x290ca0); SET64(6, RD(16) + RD(0)); F_00127218(c);
SET64(6, RD(21) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(31, 0x290cb0); SET32(4, RW(23) + RW(16)); F_00127218(c);
SET64(2, RD(30) + RD(0));
L_00290CB4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(23, rd64(c, (RW(29) + 56)));
SET64(30, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_00290CE8(Ctx *c) { /* func_00290CE8 */
ENTER(0x290ce8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET64(4, RD(21) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x290d24); SET64(16, RD(5) + RD(0)); F_002904D0(c);
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(20) + RD(0)); if (t) goto L_00290D60; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); { F_00275B18(c); return; }
L_00290D60:;
SET64(31, 0x290d68); SET64(18, (s32)rd32(c, (RW(21) + 8120))); F_00275B20(c);
SET64(22, RD(2) + RD(0));
SET32(16, RW(18) + 4376);
SET32(19, RW(18) + 4264);
SET64(4, RD(16) + RD(0));
SET64(31, 0x290d80); SET32(17, RW(18) + 4); F_00290100(c);
SET64(31, 0x290d88); SET64(4, RD(16) + RD(0)); F_0028FE00(c);
SET32(4, RW(18) + 4304);
SET32(2, RW(0) + 1);
SET64(10, (s32)rd32(c, (RW(21) + 56)));
wr32(c, (RW(19) + 20), RW(2));
SET32(9, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(8, RW(3) + 15);
SET64(7, RSD(3) < (s64)0);
SET32(6, RW(2) + 15);
SET64(5, RSD(2) < (s64)0);
if (RD(5) != 0) SET64(2, RD(6));
if (RD(7) != 0) SET64(3, RD(8));
SET32(2, RSW(2) >> 4);
SET32(3, RSW(3) >> 4);
{ int t = RD(10) != RD(9); mul_s(c, 0, 6, RSW(2), RSW(3)); if (t) goto L_00290DE0; }
SET64(31, 0x290dd4); SET64(5, (s32)rd32(c, (RW(20) + 32))); F_0010D730(c);
wr32(c, (RW(19) + 20), RW(0)); goto L_00290DEC;
L_00290DE0:;
SET64(31, 0x290de8); SET64(5, (s32)rd32(c, (RW(20) + 32))); F_0010D778(c);
wr32(c, (RW(19) + 20), RW(0));
L_00290DEC:;
SET64(31, 0x290df4); SET32(4, RW(19) + 112); F_00290000(c);
SET64(31, 0x290dfc); SET64(4, RD(21) + RD(0)); F_00291058(c);
SET64(3, (s32)rd32(c, (RW(19) + 24)));
SET32(2, RW(0) + -3);
SET64(16, rd64(c, (RW(29) + 0)));
if (RD(3) == 0) SET64(2, RD(22));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_00290E30(Ctx *c) { /* func_00290E30 */
ENTER(0x290e30);
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET64(2, (s32)rd32(c, (RW(3) + 4312))); return;
}

void F_00290E40(Ctx *c) { /* func_00290E40 */
ENTER(0x290e40);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(6, RD(0) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET64(3, (s32)rd32(c, (RW(20) + 8120)));
SET32(17, RW(3) + 4264);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(5, rd8(c, (RW(17) + 16)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(17) + 12), RW(2));
wr32(c, (RW(17) + 4), RW(4));
wr32(c, (RW(17) + 8), RW(0));
wr8(c, (RW(29) + 0), (u8)RW(5));
SET64(2, rd8(c, (RW(17) + 17)));
wr8(c, (RW(29) + 1), (u8)RW(2));
SET64(3, rd8(c, (RW(17) + 18)));
wr8(c, (RW(29) + 2), (u8)RW(3));
SET64(2, rd8(c, (RW(19) + 0)));
wr8(c, (RW(29) + 3), (u8)RW(2));
SET64(3, rd8(c, (RW(19) + 1)));
wr8(c, (RW(29) + 4), (u8)RW(3));
SET64(2, rd8(c, (RW(19) + 2)));
wr8(c, (RW(29) + 5), (u8)RW(2));
SET64(7, RSD(18) < (s64)4); goto L_00290F24;
L_00290ED0:;
SET64(3, rd8(c, (RW(2) + 0)));
{ int t = RD(3) != RD(0); SET32(5, RW(6) + 1); if (t) goto L_00290F20; }
SET32(2, RW(29) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
if (RD(3) != RD(0)) { SET64(6, RD(5) + RD(0)); goto L_00290F24; }
SET32(2, RW(6) + RW(29));
SET32(4, RW(0) + 1);
SET64(3, rd8(c, (RW(2) + 2)));
if (RD(3) != RD(4)) { SET64(6, RD(5) + RD(0)); goto L_00290F24; }
SET64(3, rd8(c, (RW(2) + 3)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 183); if (t) goto L_00290F70; }
if (RD(3) != RD(2)) { SET64(6, RD(5) + RD(0)); goto L_00290F24; }
SET32(21, RW(0) + 1); goto L_00290F38;
L_00290F20:;
SET64(6, RD(5) + RD(0));
L_00290F24:;
SET32(2, RW(0) + 3);
if (RD(7) != 0) SET64(2, RD(18));
SET64(2, RSD(6) < RSD(2));
{ int t = RD(2) != RD(0); SET32(2, RW(29) + RW(6)); if (t) { POLL(); goto L_00290ED0; } }
L_00290F38:;
SET64(2, RSD(18) < (s64)3);
{ int t = RD(2) == RD(0); SET32(4, RW(19) + RW(18)); if (t) goto L_00290F80; }
SET32(2, RW(29) + RW(18));
SET32(4, RW(18) + RW(29));
SET64(3, rd8(c, (RW(2) + 0)));
SET64(5, RD(4) + RD(0));
wr8(c, (RW(17) + 16), (u8)RW(3));
SET64(2, rd8(c, (RW(4) + 1)));
wr8(c, (RW(17) + 17), (u8)RW(2));
SET64(3, rd8(c, (RW(5) + 2)));
wr8(c, (RW(17) + 18), (u8)RW(3)); goto L_00290FD4;
L_00290F70:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(2, RW(2) + 1);
wr32(c, (RW(17) + 8), RW(2)); { POLL(); goto L_00290F38; }
L_00290F80:;
SET64(2, rd8(c, (RW(4) + -3)));
wr8(c, (RW(17) + 16), (u8)RW(2));
SET64(3, rd8(c, (RW(4) + -2)));
wr8(c, (RW(17) + 17), (u8)RW(3));
SET64(2, rd8(c, (RW(4) + -1)));
wr8(c, (RW(17) + 18), (u8)RW(2)); goto L_00290FD4;
L_00290FA0:;
SET64(31, 0x290fa8);  F_00274A68(c);
SET64(2, RD(2) & 0x4);
if (RD(2) == RD(0)) { SET32(21, RW(0) + 1); goto L_00290FC0; }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(2, RW(2) + 1);
wr32(c, (RW(17) + 8), RW(2));
L_00290FC0:;
SET32(16, RW(16) + 4);
SET32(2, RW(16) - RW(19));
SET64(19, RD(16) + RD(0));
SET32(18, RW(18) - RW(2));
SET64(7, RSD(18) < (s64)4);
L_00290FD4:;
{ int t = RD(7) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00290FFC; }
SET64(4, RD(19) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x290fec); SET32(6, RW(0) + 132); F_00274C00(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_00290FA0; } }
SET32(2, RW(0) + 1);
L_00290FFC:;
if (RD(21) != RD(2)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00291034; }
SET64(31, 0x29100c); SET64(4, RD(20) + RD(0)); F_00285B38(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00291034; }
SET64(31, 0x29101c); SET64(4, RD(20) + RD(0)); F_00285BA0(c);
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_00291034; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x291030); SET32(5, RW(0) + 1); F_00290B60(c);
SET64(16, rd64(c, (RW(29) + 16)));
L_00291034:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_00291058(Ctx *c) { /* func_00291058 */
ENTER(0x291058);
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET32(3, RW(3) + 4264);
SET64(2, (s32)rd32(c, (RW(3) + 12)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 12), RW(2)); return;
}

void F_00291070(Ctx *c) { /* func_00291070 */
ENTER(0x291070);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x291084); SET64(16, RD(4) + RD(0)); F_002904D0(c);
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 1); if (t) goto L_00291098; }
SET32(2, RW(0) + 1); goto L_002910B8;
L_00291098:;
SET64(4, (s32)rd32(c, (RW(16) + 8120)));
SET32(4, RW(4) + 4264);
SET64(3, (s32)rd32(c, (RW(4) + 32)));
{ int t = RD(3) == RD(5); SET32(2, RW(0) + 1); if (t) goto L_002910B8; }
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(2, RSD(2) < (s64)3);
SET64(2, RD(2) < (u64)(s64)1);
L_002910B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002910C8(Ctx *c) { /* func_002910C8 */
ENTER(0x2910c8);
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
SET32(2, RW(2) + 4304); return;
}

void F_002910D8(Ctx *c) { /* func_002910D8 */
ENTER(0x2910d8);
SET32(2, RW(0) + 72); return;
}

void F_002910E0(Ctx *c) { /* func_002910E0 */
ENTER(0x2910e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2910f4); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x141); if (t) goto L_00291118; }
SET64(31, 0x29110c);  F_002879A8(c);
SET64(2, RD(0) + RD(0)); goto L_0029111C;
L_00291118:;
SET64(2, (s32)rd32(c, (RW(16) + 80)));
L_0029111C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00291130(Ctx *c) { /* func_00291130 */
ENTER(0x291130);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29114c); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x142);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 1); if (t) goto L_00291178; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00291178:;
SET64(4, (s32)rd32(c, (RW(16) + 80)));
SET32(3, RW(0) + 2);
{ int t = RD(17) != RD(0); if (RD(4) != 0) SET64(6, RD(3)); if (t) goto L_00291190; }
{ int t = RD(4) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_002911A8; }
L_00291190:;
wr32(c, (RW(16) + 80), RW(17));
SET64(5, RD(6) + RD(0));
SET64(31, 0x2911a0); SET64(4, RD(16) + RD(0)); F_002911C0(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 68), RW(3));
L_002911A8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002911C0(Ctx *c) { /* func_002911C0 */
ENTER(0x2911c0);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, RD(4) + RD(0));
{ int t = RD(6) == RD(2); SET64(7, RD(0) + RD(0)); if (t) goto L_00291208; }
if (RD(6) == RD(0)) { SET64(2, (s32)rd32(c, (RW(3) + 84))); goto L_00291220; }
SET32(2, RW(0) + 2);
{ int t = RD(6) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00291240; }
SET64(3, (s32)rd32(c, (RW(3) + 72)));
SET32(2, RW(0) + 4);
{ int t = RD(3) != RD(2); SET64(2, RD(7) + RD(0)); if (t) goto L_00291244; }
 goto L_00291230;
L_00291208:;
SET64(2, (s32)rd32(c, (RW(3) + 84)));
SET32(2, RW(2) + 1);
{ int t = RD(2) != RD(6); wr32(c, (RW(3) + 84), RW(2)); if (t) goto L_0029123C; }
 goto L_00291230;
L_00291220:;
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 84), RW(2)); if (t) goto L_0029123C; }
SET64(5, RD(0) + RD(0));
L_00291230:;
SET64(31, 0x291238);  F_00291250(c);
SET64(7, RD(2) + RD(0));
L_0029123C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_00291240:;
SET64(2, RD(7) + RD(0));
L_00291244:;
SET32(29, RW(29) + 16); return;
}

void F_00291250(Ctx *c) { /* func_00291250 */
ENTER(0x291250);
SET32(29, RW(29) + -32);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 76)));
SET32(3, RW(3) + -3);
SET64(3, RD(3) < (u64)(s64)2);
{ int t = RD(3) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002912A0; }
SET64(31, 0x291284);  F_00296218(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002912B8(c); return; }
L_002912A0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002912B8(Ctx *c) { /* func_002912B8 */
ENTER(0x2912b8);
SET32(29, RW(29) + -16);
SET64(7, RD(5) + RD(0));
SET32(6, RW(0) + 8);
SET64(8, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2912d4); SET32(5, RW(0) + 7); F_00297128(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002912E0(Ctx *c) { /* func_002912E0 */
ENTER(0x2912e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2912f4); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x143); if (t) goto L_00291318; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00291318:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00291328(c); return; }
}

void F_00291328(Ctx *c) { /* func_00291328 */
ENTER(0x291328);
SET32(3, RW(0) + 3);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(4) + 76), RW(3)); return;
}

void F_00291338(Ctx *c) { /* func_00291338 */
ENTER(0x291338);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x291354); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00291378; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x144);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00291378:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x291384); SET64(5, RD(17) + RD(0)); F_00296988(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x291390); SET64(5, RD(17) + RD(0)); F_00283ED0(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002913A8(Ctx *c) { /* func_002913A8 */
ENTER(0x2913a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2913c4); SET64(17, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(6, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x145); if (t) goto L_002913F0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_002913F0:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2913fc); SET32(5, RW(0) + 30); F_00294740(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00291418(Ctx *c) { /* func_00291418 */
ENTER(0x291418);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x291434); SET64(17, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(6, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x146); if (t) goto L_00291460; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00291460:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x29146c); SET32(5, RW(0) + 29); F_00294740(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00291488(Ctx *c) { /* func_00291488 */
ENTER(0x291488);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x291498);  F_002914B0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -1276), RW(0));
SET32(29, RW(29) + 16); return;
}

void F_002914B0(Ctx *c) { /* func_002914B0 */
ENTER(0x2914b0);
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x5a5a0000);
SET64(4, (s32)rd32(c, (RW(2) + 5600)));
SET32(29, RW(29) + -16);
SET64(3, RD(3) | 0x5a5a);
{ int t = RD(4) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002914E8; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x201);
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_002914E8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002914F8(Ctx *c) { /* func_002914F8 */
ENTER(0x2914f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00295188(c); return; }
}

void F_00291510(Ctx *c) { /* func_00291510 */
ENTER(0x291510);
 return;
}

void F_00291518(Ctx *c) { /* func_00291518 */
ENTER(0x291518);
SET64(3, (s32)rd32(c, (RW(4) + 72)));
SET32(3, RW(3) + -1);
SET64(3, RD(3) < (u64)(s64)4);
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00291534; }
SET64(2, (s32)rd32(c, (RW(4) + 68)));
SET64(2, RD(2) < (u64)(s64)1);
L_00291534:;
 return;
}

void F_00291540(Ctx *c) { /* func_00291540 */
ENTER(0x291540);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -1348);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
L_00291560:;
SET32(16, RW(16) + 4);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0029157C; }
SET64(31, 0x291574);  F_00291518(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00291594; }
L_0029157C:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)8);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00291560; } }
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
L_00291594:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002915A8(Ctx *c) { /* func_002915A8 */
ENTER(0x2915a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2915bc); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x138); if (t) goto L_002915E0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_002915E0:;
SET64(31, 0x2915e8);  F_00291658(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00291600(Ctx *c) { /* func_00291600 */
ENTER(0x291600);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -1348);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 7);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
L_00291620:;
SET32(16, RW(16) + 4);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00291634; }
SET64(31, 0x291634);  F_00291658(c);
L_00291634:;
SET32(17, RW(17) + -1);
if (RSD(17) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00291620; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002924A8(c); return; }
}

static void B_00291658(Ctx *c, u32 entry) { /* func_00291658 */
ENTER(entry);
switch (entry) { case 0x2916e0: goto L_002916E0; case 0x2916f0: goto L_002916F0; case 0x291700: goto L_00291700; case 0x291710: goto L_00291710; case 0x291720: goto L_00291720; case 0x29172c: goto L_0029172C; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(16, (s32)rd32(c, (RW(17) + 72)));
SET32(2, RW(16) + -1);
SET64(2, RD(2) < (u64)(s64)4);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00291758; }
SET64(2, (s32)rd32(c, (RW(17) + 68)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00291758; }
wr32(c, (RW(17) + 68), RW(0));
SET64(31, 0x29169c);  F_0029C800(c);
SET64(18, RD(2) + RD(0));
SET32(2, RW(16) + -2);
SET64(2, RD(2) < (u64)(s64)3);
if (RD(2) == RD(0)) { SET64(16, (s32)rd32(c, (RW(17) + 72))); goto L_002916BC; }
SET64(31, 0x2916b8); SET64(4, RD(17) + RD(0)); F_00291770(c);
SET64(16, (s32)rd32(c, (RW(17) + 72)));
L_002916BC:;
SET64(2, RD(16) < (u64)(s64)7);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 72), RW(16)); goto L_00291730; }
SET32(2, RW(16) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 5632)));
{ u32 t = RW(3);  switch (t) { case 0x2916e0: goto L_002916E0; case 0x2916f0: goto L_002916F0; case 0x291700: goto L_00291700; case 0x291710: goto L_00291710; case 0x291720: goto L_00291720; case 0x29172c: goto L_0029172C; default: rt_jump(c, t); return; } }
L_002916E0:;
SET64(31, 0x2916e8); SET64(4, RD(17) + RD(0)); F_002917B0(c);
SET64(16, RD(2) + RD(0)); goto L_0029172C;
L_002916F0:;
SET64(31, 0x2916f8); SET64(4, RD(17) + RD(0)); F_002917E0(c);
SET64(16, RD(2) + RD(0)); goto L_0029172C;
L_00291700:;
SET64(31, 0x291708); SET64(4, RD(17) + RD(0)); F_00291B78(c);
SET64(16, RD(2) + RD(0)); goto L_0029172C;
L_00291710:;
SET64(31, 0x291718); SET64(4, RD(17) + RD(0)); F_00291C18(c);
SET64(16, RD(2) + RD(0)); goto L_0029172C;
L_00291720:;
SET64(31, 0x291728); SET64(4, RD(17) + RD(0)); F_00291C88(c);
SET64(16, RD(2) + RD(0));
L_0029172C:;
wr32(c, (RW(17) + 72), RW(16));
L_00291730:;
SET64(31, 0x291738); SET32(16, RW(17) + 14040); F_0029C800(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) - RD(18));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002969B8(c); return; }
L_00291758:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}
void F_00291658(Ctx *c) { B_00291658(c, 0x291658); }
void F_002916E0(Ctx *c) { B_00291658(c, 0x2916e0); }
void F_002916F0(Ctx *c) { B_00291658(c, 0x2916f0); }
void F_00291700(Ctx *c) { B_00291658(c, 0x291700); }
void F_00291710(Ctx *c) { B_00291658(c, 0x291710); }
void F_00291720(Ctx *c) { B_00291658(c, 0x291720); }
void F_0029172C(Ctx *c) { B_00291658(c, 0x29172c); }

void F_00291770(Ctx *c) { /* func_00291770 */
ENTER(0x291770);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x291784); SET64(16, RD(4) + RD(0)); F_00291798(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00293C80(c); return; }
}

void F_00291798(Ctx *c) { /* func_00291798 */
ENTER(0x291798);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00297090(c); return; }
}

void F_002917B0(Ctx *c) { /* func_002917B0 */
ENTER(0x2917b0);
SET64(3, (s32)rd32(c, (RW(4) + 76)));
SET64(5, (s32)rd32(c, (RW(4) + 72)));
SET64(2, RSD(3) < (s64)2);
{ int t = RD(2) != RD(0); SET64(4, RSD(3) < (s64)5); if (t) goto L_002917D8; }
if (RD(4) != RD(0)) { SET32(5, RW(0) + 2); goto L_002917D8; }
SET32(2, RW(0) + 6);
if (RD(3) == RD(2)) { SET32(5, RW(0) + 2); goto L_002917D8; }
L_002917D8:;
SET64(2, RD(5) + RD(0)); return;
}

void F_002917E0(Ctx *c) { /* func_002917E0 */
ENTER(0x2917e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(18, (s32)rd32(c, (RW(17) + 72)));
SET64(31, 0x291804); SET64(16, (s32)rd32(c, (RW(17) + 76))); F_002918A0(c);
if (RD(2) == RD(0)) { SET64(2, RD(18) + RD(0)); goto L_00291888; }
SET64(31, 0x291814); SET64(4, RD(17) + RD(0)); F_00291950(c);
SET32(2, RW(0) + 3);
{ int t = RD(16) == RD(2); SET64(2, RSD(16) < (s64)4); if (t) goto L_00291880; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_00291840; }
SET32(2, RW(0) + 2);
{ int t = RD(16) == RD(2); SET64(2, RD(18) + RD(0)); if (t) goto L_00291858; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_0029188C;
L_00291840:;
{ int t = RD(16) == RD(2); SET32(2, RW(0) + 6); if (t) goto L_00291860; }
{ int t = RD(16) == RD(2); SET64(2, RD(18) + RD(0)); if (t) goto L_00291860; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_0029188C;
L_00291858:;
SET32(18, RW(0) + 2); goto L_00291884;
L_00291860:;
SET64(31, 0x291868); SET64(4, RD(17) + RD(0)); F_00291C90(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00291880; }
SET64(31, 0x291878); SET32(18, RW(0) + 4); F_00292C60(c);
SET64(2, RD(18) + RD(0)); goto L_00291888;
L_00291880:;
SET32(18, RW(0) + 3);
L_00291884:;
SET64(2, RD(18) + RD(0));
L_00291888:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029188C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002918A0(Ctx *c) { /* func_002918A0 */
ENTER(0x2918a0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 5);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2918c4); SET32(18, RW(0) + 1); F_00294A30(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 6); if (t) goto L_002918F0; }
SET64(31, 0x2918d8);  F_00297190(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 6);
SET64(31, 0x2918e8); SET64(18, RD(2) + RD(0)); F_002971C0(c);
SET64(18, RD(18) | RD(2));
SET64(4, RD(16) + RD(0));
L_002918F0:;
SET64(31, 0x2918f8); SET32(5, RW(0) + 6); F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 7);
{ int t = RD(2) == RD(0); SET32(17, RW(0) + 1); if (t) goto L_00291924; }
SET64(31, 0x291910);  F_00297190(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 7);
SET64(31, 0x291920); SET64(17, RD(2) + RD(0)); F_002971C0(c);
SET64(17, RD(17) | RD(2));
L_00291924:;
{ int t = RD(18) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00291938; }
{ int t = RD(17) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00291938; }
SET64(2, RD(0) + RD(0));
L_00291938:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00291950(Ctx *c) { /* func_00291950 */
ENTER(0x291950);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x291964); SET64(16, RD(4) + RD(0)); F_00291980(c);
SET64(31, 0x29196c); SET64(4, RD(16) + RD(0)); F_00291A28(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00291AB0(c); return; }
}

void F_00291980(Ctx *c) { /* func_00291980 */
ENTER(0x291980);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(16, RW(17) + 2564);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
if (RD(2) != RD(3)) { SET64(6, (s32)rd32(c, (RW(16) + 24))); goto L_002919D0; }
SET64(31, 0x2919b0); SET32(5, RW(0) + 1); F_002850C0(c);
if (RD(2) != RD(0)) { SET64(6, (s32)rd32(c, (RW(16) + 24))); goto L_002919D0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2919c4); SET32(5, RW(0) + 1); F_002850A0(c);
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 20), RW(0)); goto L_002919CC; }
L_002919CC:;
SET64(6, (s32)rd32(c, (RW(16) + 24)));
L_002919D0:;
SET32(2, RW(0) + 1);
if (RD(6) != RD(2)) { SET64(5, (s32)rd32(c, (RW(16) + 20))); goto L_00291A10; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2919e8); SET32(5, RW(0) + 2); F_002850C0(c);
if (RD(2) != RD(0)) { SET64(6, (s32)rd32(c, (RW(16) + 24))); goto L_00291A0C; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2919fc); SET32(5, RW(0) + 2); F_002850A0(c);
if (RD(2) != RD(0)) { SET64(6, (s32)rd32(c, (RW(16) + 24))); goto L_00291A0C; }
wr32(c, (RW(16) + 24), RW(0));
SET64(6, RD(0) + RD(0));
L_00291A0C:;
SET64(5, (s32)rd32(c, (RW(16) + 20)));
L_00291A10:;
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00293C50(c); return; }
}

void F_00291A28(Ctx *c) { /* func_00291A28 */
ENTER(0x291a28);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(16, RW(17) + 2564);
SET64(2, (s32)rd32(c, (RW(16) + 24)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 20))); goto L_00291A6C; }
SET64(3, (s32)rd32(c, (RW(16) + 60)));
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(16) + 20))); goto L_00291A6C; }
SET32(5, RW(0) + 15);
SET64(31, 0x291a68); SET32(6, RW(0) + 1); F_00294868(c);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
L_00291A6C:;
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00291AA0; }
SET64(3, (s32)rd32(c, (RW(16) + 60)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00291AA0; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 15);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 2);
SET32(29, RW(29) + 32); { F_00294868(c); return; }
L_00291AA0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00291AB0(Ctx *c) { /* func_00291AB0 */
ENTER(0x291ab0);
SET32(29, RW(29) + -32);
SET32(7, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(17) + 2564);
SET32(6, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(5) + 24)));
SET64(3, (s32)rd32(c, (RW(5) + 20)));
SET64(2, RD(2) ^ RD(7));
SET64(5, RD(2) < (u64)(s64)1);
SET64(3, RD(3) ^ RD(7));
SET64(2, RD(5) | 0x2);
if (RD(3) == 0) SET64(5, RD(2));
{ int t = RD(5) == RD(6); SET32(16, RW(0) + 2); if (t) goto L_00291B54; }
SET64(2, RD(5) < (u64)(s64)3);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 3); goto L_00291B10; }
{ int t = RD(5) == RD(7); SET32(16, RW(0) + 1); if (t) goto L_00291B54; }
SET32(16, RW(0) + 3); goto L_00291B54;
L_00291B10:;
{ int t = RD(5) != RD(2); SET32(16, RW(0) + 3); if (t) goto L_00291B54; }
SET64(31, 0x291b20); SET32(5, RW(0) + 25); F_00294A30(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00291B58; }
SET64(31, 0x291b34);  F_0029C928(c);
if (RD(2) != RD(0)) { SET32(16, RW(0) + 3); goto L_00291B54; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x291b48); SET32(5, RW(0) + 72); F_00294A30(c);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00291B58; }
SET32(16, RW(0) + 3);
L_00291B54:;
SET64(4, RD(17) + RD(0));
L_00291B58:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(5, RW(0) + 25);
SET32(29, RW(29) + 32); { F_00294868(c); return; }
}

void F_00291B78(Ctx *c) { /* func_00291B78 */
ENTER(0x291b78);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 76)));
{ int t = RD(3) == RD(2); SET64(17, (s32)rd32(c, (RW(16) + 72))); if (t) goto L_00291BE0; }
SET64(2, RSD(3) < (s64)4);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_00291BC0; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2); SET64(2, RD(17) + RD(0)); if (t) goto L_00291BD8; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00291C08;
L_00291BC0:;
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 6); if (t) goto L_00291BE8; }
{ int t = RD(3) == RD(2); SET64(2, RD(17) + RD(0)); if (t) goto L_00291BE8; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00291C08;
L_00291BD8:;
SET32(17, RW(0) + 2); goto L_00291C00;
L_00291BE0:;
SET32(17, RW(0) + 3); goto L_00291C00;
L_00291BE8:;
SET64(31, 0x291bf0); SET64(4, RD(16) + RD(0)); F_00291C90(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00291C00; }
SET64(31, 0x291c00); SET32(17, RW(0) + 4); F_00292C60(c);
L_00291C00:;
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00291C08:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00291C18(Ctx *c) { /* func_00291C18 */
ENTER(0x291c18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x291c2c); SET64(16, RD(4) + RD(0)); F_002921E0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00291C44; }
SET64(31, 0x291c3c);  F_00291CF8(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(16) + 76))); goto L_00291C50; }
L_00291C44:;
SET64(2, (s32)rd32(c, (RW(16) + 72))); goto L_00291C78;
L_00291C50:;
SET64(4, (s32)rd32(c, (RW(16) + 72)));
SET64(2, RSD(5) < (s64)2);
{ int t = RD(2) != RD(0); SET64(3, RSD(5) < (s64)5); if (t) goto L_00291C74; }
{ int t = RD(3) != RD(0); SET64(2, RD(4) + RD(0)); if (t) goto L_00291C78; }
SET32(3, RW(0) + 6);
SET64(2, RD(5) ^ RD(3));
if (RD(2) == 0) SET64(4, RD(3));
L_00291C74:;
SET64(2, RD(4) + RD(0));
L_00291C78:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00291C88(Ctx *c) { /* func_00291C88 */
ENTER(0x291c88);
SET64(2, (s32)rd32(c, (RW(4) + 72))); return;
}

void F_00291C90(Ctx *c) { /* func_00291C90 */
ENTER(0x291c90);
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(5) + 2564);
SET32(2, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(6) + 56)));
{ int t = RD(3) == RD(0); SET32(5, RW(5) + 3368); if (t) goto L_00291CE8; }
SET64(3, (s32)rd32(c, (RW(6) + 20)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00291CEC; }
SET64(3, (s32)rd32(c, (RW(5) + 688)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00291CEC; }
SET64(3, (s32)rd32(c, (RW(5) + 716)));
SET64(5, (s32)rd32(c, (RW(6) + 180)));
SET64(3, RSD(3) < RSD(5));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00291CEC; }
SET64(31, 0x291ce4);  F_002922C0(c);
SET64(2, RD(0) < RD(2));
L_00291CE8:;
SET64(31, rd64(c, (RW(29) + 0)));
L_00291CEC:;
SET32(29, RW(29) + 16); return;
}

void F_00291CF8(Ctx *c) { /* func_00291CF8 */
ENTER(0x291cf8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET32(17, RW(16) + 2384);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x291d1c); SET64(4, RD(29) + RD(0)); F_00287C60(c);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(18, RD(0) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00291D60; }
SET64(31, 0x291d34);  F_00291DA8(c);
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 1); if (t) goto L_00291D80; }
SET64(3, (s32)rd32(c, (RW(17) + 32)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 28), RW(2));
SET64(4, RD(16) + RD(0));
SET32(3, RW(3) + 1);
SET64(31, 0x291d58); wr32(c, (RW(17) + 32), RW(3)); F_002911C0(c);
SET64(18, RD(2) + RD(0)); goto L_00291D80;
L_00291D60:;
SET64(31, 0x291d68); SET64(4, RD(16) + RD(0)); F_00291F28(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00291D80; }
SET64(31, 0x291d7c); wr32(c, (RW(17) + 28), RW(0)); F_002911C0(c);
SET64(18, RD(2) + RD(0));
L_00291D80:;
SET64(31, 0x291d88); SET64(4, RD(29) + RD(0)); F_00287C78(c);
SET64(2, RD(18) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00291DA8(Ctx *c) { /* func_00291DA8 */
ENTER(0x291da8);
SET32(29, RW(29) + -48);
SET32(5, RW(0) + 67);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x291dc8); SET32(17, RW(16) + 2384); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00291F10; }
SET64(31, 0x291dd8); SET32(5, RW(0) + 15); F_00294A30(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00291F14; }
SET64(3, (s32)rd32(c, (RW(16) + 80)));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00291F10; }
SET64(4, (s32)rd32(c, (RW(16) + 72)));
SET32(3, RW(0) + 4);
if (RD(4) != RD(3)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00291F14; }
SET64(31, 0x291e04); SET64(4, RD(16) + RD(0)); F_00292008(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00291F10; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x291e18); SET32(5, RW(0) + 5); F_00294A30(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00291E34; }
SET64(3, (s32)rd32(c, (RW(17) + 36)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00291F10; }
SET64(4, RD(16) + RD(0));
L_00291E34:;
SET64(31, 0x291e3c); SET32(5, RW(0) + 6); F_00294A30(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00291E5C; }
SET64(31, 0x291e50); SET32(5, RW(0) + 2); F_00285898(c);
{ int t = RSD(2) > 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00291F10; }
SET64(4, RD(16) + RD(0));
L_00291E5C:;
SET64(31, 0x291e64); SET32(5, RW(0) + 1); F_002971D8(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00291E7C; }
SET64(31, 0x291e74); SET64(5, RD(0) + RD(0)); F_00285898(c);
{ int t = RSD(2) > 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00291F10; }
L_00291E7C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x291e88); SET32(5, RW(0) + 5); F_00294A30(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(5, RD(29) + RD(0)); goto L_00291EA8; }
SET64(31, 0x291e9c); SET64(4, RD(16) + RD(0)); F_002920A8(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00291F10; }
SET64(5, RD(29) + RD(0));
L_00291EA8:;
SET32(6, RW(29) + 4);
SET64(31, 0x291eb4); SET64(4, RD(16) + RD(0)); F_00295758(c);
SET32(3, RW(16) + 3368);
SET64(17, (s32)rd32(c, (RW(3) + 648)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 68);
SET64(31, 0x291ecc); SET64(16, (s32)rd32(c, (RW(3) + 644))); F_00294A30(c);
SET64(5, RD(17) + RD(0));
SET64(6, (s64)(s32)0xf0000);
SET64(4, RD(2) + RD(0));
SET64(31, 0x291ee0); SET64(6, RD(6) | 0x4240); F_002784E8(c);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
{ int t = RSD(4) <= 0; SET32(16, RW(16) - RW(2)); if (t) goto L_00291EF4; }
{ int t = RSD(16) > 0; SET64(5, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_00291F00; }
L_00291EF4:;
SET64(2, RD(0) + RD(0)); goto L_00291F10;
L_00291F00:;
SET64(6, RD(16) + RD(0));
SET64(31, 0x291f0c); SET64(7, RD(17) + RD(0)); F_00295B50(c);
SET64(2, RD(2) < (u64)(s64)1);
L_00291F10:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00291F14:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00291F28(Ctx *c) { /* func_00291F28 */
ENTER(0x291f28);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x291f40); SET64(17, RD(4) + RD(0)); F_00292008(c);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 5); if (t) goto L_00291F98; }
SET64(31, 0x291f54);  F_00294A30(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_00291F70; }
SET64(31, 0x291f68);  F_002920A8(c);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00291FF4; }
L_00291F70:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x291f7c); SET32(5, RW(0) + 6); F_00294A30(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_00291FA0; }
SET64(31, 0x291f90);  F_00292160(c);
if (RD(2) == RD(0)) { SET64(5, RD(29) + RD(0)); goto L_00291FA4; }
L_00291F98:;
SET32(2, RW(0) + 1); goto L_00291FF4;
L_00291FA0:;
SET64(5, RD(29) + RD(0));
L_00291FA4:;
SET32(6, RW(29) + 4);
SET64(31, 0x291fb0); SET64(4, RD(17) + RD(0)); F_00295758(c);
SET32(3, RW(17) + 3368);
SET64(16, (s32)rd32(c, (RW(3) + 648)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 69);
SET64(31, 0x291fc8); SET64(17, (s32)rd32(c, (RW(3) + 644))); F_00294A30(c);
SET64(5, RD(16) + RD(0));
SET64(6, (s64)(s32)0xf0000);
SET64(4, RD(2) + RD(0));
SET64(31, 0x291fdc); SET64(6, RD(6) | 0x4240); F_002784E8(c);
SET64(7, RD(16) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET32(6, RW(17) - RW(2));
SET64(31, 0x291ff0); SET64(5, (s32)rd32(c, (RW(29) + 4))); F_00295B50(c);
SET64(2, RD(0) < RD(2));
L_00291FF4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00292008(Ctx *c) { /* func_00292008 */
ENTER(0x292008);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 5);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x292024); SET64(17, RD(4) + RD(0)); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0029203C; }
SET64(31, 0x292034); SET32(5, RW(0) + 6); F_002971C0(c);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00292090; }
L_0029203C:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x292048); SET32(5, RW(0) + 6); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_00292070; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x29205c); SET32(5, RW(0) + 7); F_002971C0(c);
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_00292070; }
L_00292064:;
SET32(2, RW(0) + 1); goto L_00292090;
L_00292070:;
SET64(5, RD(16) + RD(0));
L_00292074:;
SET32(16, RW(16) + 1);
SET64(31, 0x292080); SET64(4, RD(17) + RD(0)); F_00285878(c);
{ int t = RD(2) != RD(0); SET64(3, RD(16) < (u64)(s64)8); if (t) { POLL(); goto L_00292064; } }
{ int t = RD(3) != RD(0); SET64(5, RD(16) + RD(0)); if (t) { POLL(); goto L_00292074; } }
L_00292090:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002920A8(Ctx *c) { /* func_002920A8 */
ENTER(0x2920a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(17) + 8128)));
SET32(16, RW(2) << 3);
SET32(16, RW(16) - RW(2));
SET32(16, RW(16) << 2);
SET32(16, RW(16) + RW(2));
SET32(16, RW(16) << 2);
SET32(16, RW(17) + RW(16));
SET32(16, RW(16) + 4888);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x2920f4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 12)));
SET64(18, RD(2) + RD(0));
SET32(3, RW(0) + 100);
SET32(5, RW(0) + 70);
SET32(2, RW(6) << 2);
if (RD(3) == RD(0)) { rt_break(c, 0x292110); goto L_00292114; }
L_00292114:;
SET32(2, RW(2) + RW(6));
SET32(2, RW(2) << 4);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
SET64(2, RSD(18) < RSD(2));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_00292148; }
SET64(31, 0x292138);  F_00294A30(c);
SET64(3, RSD(18) < RSD(2));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00292148; }
SET32(2, RW(0) + 1);
L_00292148:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00292160(Ctx *c) { /* func_00292160 */
ENTER(0x292160);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 8196)));
SET32(2, RW(3) << 3);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(16, RW(16) + RW(2));
SET32(16, RW(16) + 4888);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x2921a4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET32(4, RW(0) + 100);
SET32(3, RW(5) << 2);
if (RD(4) == RD(0)) { rt_break(c, 0x2921b4); goto L_002921B8; }
L_002921B8:;
SET32(3, RW(3) + RW(5));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(3, RW(3) << 4);
SET64(31, rd64(c, (RW(29) + 8)));
div_s(c, 0, RSW(3), RSW(4));
SET64(3, c->lo.d[0]);
SET64(2, RSD(2) < RSD(3));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_002921E0(Ctx *c) { /* func_002921E0 */
ENTER(0x2921e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2921f4); SET64(16, RD(4) + RD(0)); F_00292250(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029222C; }
SET64(31, 0x292204);  F_002922C0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029222C; }
SET64(31, 0x292214);  F_00292388(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029222C; }
SET64(31, 0x292224);  F_002923E0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00292240; }
L_0029222C:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00292470(c); return; }
L_00292240:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00292250(Ctx *c) { /* func_00292250 */
ENTER(0x292250);
SET32(29, RW(29) + -48);
SET32(3, RW(4) + 2564);
wr64(c, (RW(29) + 16), RD(16));
SET32(5, RW(0) + -4);
wr64(c, (RW(29) + 24), RD(17));
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(16, (s32)rd32(c, (RW(3) + 80)));
{ int t = RD(16) == RD(5); SET64(17, (s32)rd32(c, (RW(3) + 84))); if (t) goto L_002922A8; }
SET32(6, RW(29) + 4);
SET64(31, 0x292284); SET64(5, RD(29) + RD(0)); F_00295758(c);
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
{ int t = RSD(3) < 0; SET64(4, RD(3) + RD(0)); if (t) goto L_002922A8; }
SET64(31, 0x2922a4); SET64(5, (s32)rd32(c, (RW(29) + 4))); F_0026BF08(c);
SET64(2, RD(2) < (u64)(s64)1);
L_002922A8:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002922C0(Ctx *c) { /* func_002922C0 */
ENTER(0x2922c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(3, RW(16) + 2564);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 6); if (t) goto L_002922F8; }
SET64(3, (s32)rd32(c, (RW(3) + 20)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00292370; }
SET32(5, RW(0) + 6);
L_002922F8:;
SET64(31, 0x292300); SET64(4, RD(16) + RD(0)); F_002971C0(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 7);
SET64(31, 0x292310); SET64(18, RD(2) + RD(0)); F_002971C0(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 25);
SET64(31, 0x292320); SET64(17, RD(2) + RD(0)); F_00294A30(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_00292358; }
if (RD(3) == RD(0)) { SET64(4, RD(17) & RD(18)); goto L_0029236C; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 3); if (t) goto L_00292360; }
{ int t = RD(3) == RD(2); SET64(2, RD(4) + RD(0)); if (t) goto L_00292368; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00292374;
L_00292358:;
SET64(4, RD(17) + RD(0)); goto L_0029236C;
L_00292360:;
SET64(4, RD(18) + RD(0)); goto L_0029236C;
L_00292368:;
SET64(4, RD(17) | RD(18));
L_0029236C:;
SET64(2, RD(4) + RD(0));
L_00292370:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00292374:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00292388(Ctx *c) { /* func_00292388 */
ENTER(0x292388);
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(0) + 4);
SET64(2, (s32)rd32(c, (RW(5) + 72)));
{ int t = RD(2) != RD(3); SET32(6, RW(5) + 2384); if (t) goto L_002923C0; }
SET64(2, (s32)rd32(c, (RW(5) + 80)));
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_002923D4; }
SET64(2, (s32)rd32(c, (RW(6) + 28)));
{ int t = RD(2) != RD(3);  if (t) goto L_002923C8; }
L_002923C0:;
SET64(2, RD(0) + RD(0)); goto L_002923D4;
L_002923C8:;
SET64(31, 0x2923d0);  F_002953F8(c);
SET64(2, RD(0) < RD(2));
L_002923D4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002923E0(Ctx *c) { /* func_002923E0 */
ENTER(0x2923e0);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 4);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 72)));
{ int t = RD(2) != RD(3); SET32(5, RW(16) + 2384); if (t) goto L_0029242C; }
SET64(2, (s32)rd32(c, (RW(16) + 80)));
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00292460; }
SET64(2, (s32)rd32(c, (RW(5) + 28)));
{ int t = RD(2) == RD(3); SET64(5, RD(29) + RD(0)); if (t) goto L_0029242C; }
SET64(31, 0x292424); SET32(6, RW(29) + 4); F_00295618(c);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_00292438; }
L_0029242C:;
SET64(2, RD(0) + RD(0)); goto L_00292460;
L_00292438:;
{ int t = RSD(3) < 0; SET64(4, RD(16) + RD(0)); if (t) goto L_00292460; }
SET64(31, 0x292448); SET32(5, RW(0) + 54); F_00294A30(c);
SET32(5, RW(0) + 1000);
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x29245c); SET64(7, (s32)rd32(c, (RW(29) + 4))); F_00295B50(c);
SET64(2, RD(0) < RD(2));
L_00292460:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00292470(Ctx *c) { /* func_00292470 */
ENTER(0x292470);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x292484); SET64(16, RD(4) + RD(0)); F_00292D68(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00292498; }
SET32(3, RW(0) + 6);
wr32(c, (RW(16) + 76), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_00292498:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002924A8(Ctx *c) { /* func_002924A8 */
ENTER(0x2924a8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x2924bc); SET32(4, RW(29) + 16); F_00287C60(c);
wr32(c, (RW(29) + 0), RW(0));
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(29) + 4), RW(0));
SET32(6, RW(2) + -1348);
wr32(c, (RW(29) + 8), RW(0));
SET32(7, RW(0) + 6);
SET32(5, RW(0) + 7);
SET64(2, (s32)rd32(c, (RW(6) + 0)));
L_002924E0:;
{ int t = RD(2) == RD(0); SET32(6, RW(6) + 4); if (t) goto L_0029251C; }
SET64(2, (s32)rd32(c, (RW(2) + 72)));
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_00292508; }
{ int t = RD(2) == RD(7); SET32(16, RW(0) + 2); if (t) goto L_00292508; }
{ int t = RSD(2) >= 0; SET32(16, RW(0) + 1); if (t) goto L_00292508; }
SET32(16, RW(0) + 2);
L_00292508:;
SET32(2, RW(16) << 2);
SET32(4, RW(29) + RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 0), RW(3));
L_0029251C:;
SET32(5, RW(5) + -1);
if (RSD(5) >= 0) { SET64(2, (s32)rd32(c, (RW(6) + 0))); { POLL(); goto L_002924E0; } }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(2) != RD(0); SET32(16, RW(0) + 1); if (t) goto L_00292540; }
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET32(16, RW(0) + 2);
if (RD(2) == 0) SET64(16, RD(0));
L_00292540:;
SET64(2, (s64)(s32)0x410000);
SET32(4, RW(29) + 16);
SET64(31, 0x292550); wr32(c, (RW(2) + -1456), RW(16)); F_00287C78(c);
SET64(31, rd64(c, (RW(29) + 40)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00292568(Ctx *c) { /* func_00292568 */
ENTER(0x292568);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x292594); SET32(19, RW(2) + -1348); F_00292600(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002925E4; }
SET64(31, 0x2925a4);  F_00292668(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + -1);
{ int t = RD(16) != RD(2); SET64(4, RD(17) + RD(0)); if (t) goto L_002925D0; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(31, 0x2925c4); SET64(5, RD(5) | 0x206); F_002879A8(c);
SET64(2, RD(0) + RD(0)); goto L_002925E4;
L_002925D0:;
SET64(31, 0x2925d8); SET64(5, RD(18) + RD(0)); F_002926A8(c);
SET32(3, RW(16) << 2);
SET32(3, RW(3) + RW(19));
wr32(c, (RW(3) + 0), RW(2));
L_002925E4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00292600(Ctx *c) { /* func_00292600 */
ENTER(0x292600);
SET32(29, RW(29) + -16);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(2) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00292630; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x204);
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00292630:;
SET64(2, (s32)rd32(c, (RW(3) + 64)));
SET64(2, RD(2) < (u64)(s64)14104);
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00292658; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x205);
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00292658:;
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_00292668(Ctx *c) { /* func_00292668 */
ENTER(0x292668);
SET64(2, (s64)(s32)0x410000);
SET64(5, RD(0) + RD(0));
SET32(6, RW(2) + -1348);
SET64(3, (s32)rd32(c, (RW(6) + 0)));
L_00292678:;
SET32(6, RW(6) + 4);
SET64(2, RD(5) + RD(0));
SET32(5, RW(5) + 1);
{ int t = RD(3) == RD(0); SET64(4, RSD(5) < (s64)8); if (t) goto L_002926A0; }
if (RD(4) != RD(0)) { SET64(3, (s32)rd32(c, (RW(6) + 0))); { POLL(); goto L_00292678; } }
SET32(2, RW(0) + -1);
L_002926A0:;
 return;
}

void F_002926A8(Ctx *c) { /* func_002926A8 */
ENTER(0x2926a8);
SET32(29, RW(29) + -48);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 40), RD(31));
SET64(7, (s32)rd32(c, (RW(18) + 64)));
SET64(16, (s32)rd32(c, (RW(18) + 60)));
{ int t = RD(16) == RD(0); SET32(6, RW(7) >> 2); if (t) goto L_002928AC; }
SET32(3, RW(7) + -1);
SET64(3, RD(3) < (u64)(s64)28208);
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002928B0; }
SET64(8, (s64)(s32)0x410000);
SET64(3, (s32)rd32(c, (RW(8) + -1280)));
{ int t = RD(3) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029270C; }
if (RD(3) != RD(7)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002928B0; }
SET64(4, RD(16) + RD(0));
L_0029270C:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x292718); wr32(c, (RW(8) + -1280), RW(7)); F_00272320(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(3, RW(16) + 31);
SET32(4, RW(0) + -32);
SET64(5, RD(18) & 0x7);
SET32(2, RW(2) + 31);
SET64(17, RD(3) & RD(4));
SET64(2, RD(2) & RD(4));
wr32(c, (RW(17) + 76), RW(0));
wr32(c, (RW(18) + 4), RW(2));
SET64(2, RD(18) + RD(0));
wr32(c, (RW(17) + 72), RW(0));
{ int t = RD(5) == RD(0); SET64(3, RD(17) + RD(0)); if (t) goto L_002927B0; }
SET32(4, RW(18) + 64);
L_00292750:;
ldl(c, 5, (RW(2) + 7));
ldr(c, 5, (RW(2) + 0));
ldl(c, 6, (RW(2) + 15));
ldr(c, 6, (RW(2) + 8));
ldl(c, 7, (RW(2) + 23));
ldr(c, 7, (RW(2) + 16));
ldl(c, 8, (RW(2) + 31));
ldr(c, 8, (RW(2) + 24));
sdl(c, 5, (RW(3) + 7));
sdr(c, 5, (RW(3) + 0));
sdl(c, 6, (RW(3) + 15));
sdr(c, 6, (RW(3) + 8));
sdl(c, 7, (RW(3) + 23));
sdr(c, 7, (RW(3) + 16));
sdl(c, 8, (RW(3) + 31));
sdr(c, 8, (RW(3) + 24));
SET32(2, RW(2) + 32);
{ int t = RD(2) != RD(4); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_00292750; } }
 goto L_002927E8;
L_002927B0:;
SET32(4, RW(18) + 64);
L_002927B4:;
SET64(5, rd64(c, (RW(2) + 0)));
SET64(6, rd64(c, (RW(2) + 8)));
SET64(7, rd64(c, (RW(2) + 16)));
SET64(8, rd64(c, (RW(2) + 24)));
wr64(c, (RW(3) + 0), RD(5));
wr64(c, (RW(3) + 8), RD(6));
wr64(c, (RW(3) + 16), RD(7));
wr64(c, (RW(3) + 24), RD(8));
SET32(2, RW(2) + 32);
{ int t = RD(2) != RD(4); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_002927B4; } }
L_002927E8:;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(19, RW(0) + 1);
SET64(16, (s64)(s32)0x410000);
wr32(c, (RW(3) + 0), RW(4));
SET32(4, RW(17) + 120);
wr32(c, (RW(17) + 80), RW(0));
SET32(16, RW(16) + -1864);
wr32(c, (RW(17) + 68), RW(19));
SET64(31, 0x292810); wr32(c, (RW(17) + 84), RW(0)); F_00286CA8(c);
SET64(31, 0x292818); SET32(4, RW(17) + 2316); F_002928D0(c);
SET64(31, 0x292820); SET32(4, RW(17) + 2384); F_00292938(c);
SET64(31, 0x292828); SET32(4, RW(17) + 13880); F_002929C0(c);
SET64(31, 0x292830); SET32(4, RW(17) + 2544); F_00287990(c);
SET32(4, RW(17) + 2564);
SET64(5, RD(16) + RD(0));
SET64(31, 0x292840); SET32(6, RW(0) + 400); F_00271EB0(c);
SET32(4, RW(17) + 2964);
SET32(6, RW(0) + 400);
SET64(31, 0x292850); SET64(5, RD(16) + RD(0)); F_00271EB0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x29285c); SET32(5, RW(17) + 3368); F_00294E18(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(17) + 4872);
SET64(31, 0x29286c); SET64(6, RD(18) + RD(0)); F_002842B0(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002928AC; }
SET64(6, RD(18) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x292888); SET32(5, RW(17) + 7976); F_00296B28(c);
SET64(31, 0x292890); SET32(4, RW(17) + 13864); F_00293920(c);
SET64(31, 0x292898); SET64(4, RD(17) + RD(0)); F_00292AF0(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002928AC; }
wr32(c, (RW(17) + 72), RW(19));
SET64(2, RD(17) + RD(0));
wr32(c, (RW(17) + 76), RW(19));
L_002928AC:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002928B0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_002928D0(Ctx *c) { /* func_002928D0 */
ENTER(0x2928d0);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2928ec); SET64(16, RD(4) + RD(0)); F_00272320(c);
SET32(3, RW(0) + -1);
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 44), RW(3));
wr32(c, (RW(16) + 28), RW(2));
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 40), RW(3));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00292938(Ctx *c) { /* func_00292938 */
ENTER(0x292938);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x292954); SET32(6, RW(0) + 40); F_00272320(c);
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 4), RW(0));
SET32(4, RW(16) + 48);
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
SET64(31, 0x292988); wr32(c, (RW(16) + 44), RW(0)); F_002929B0(c);
SET64(31, 0x292990); SET32(4, RW(16) + 72); F_002929B0(c);
SET64(31, 0x292998); SET32(4, RW(16) + 96); F_002929B0(c);
SET32(4, RW(16) + 120);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002929B0(c); return; }
}

void F_002929B0(Ctx *c) { /* func_002929B0 */
ENTER(0x2929b0);
wr64(c, (RW(4) + 16), RD(0));
wr64(c, (RW(4) + 0), RD(0));
wr64(c, (RW(4) + 8), RD(0)); return;
}

void F_002929C0(Ctx *c) { /* func_002929C0 */
ENTER(0x2929c0);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
SET32(6, RW(0) + 48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2929e8); SET32(17, RW(0) + 4); F_00272320(c);
SET64(16, RD(18) + RD(0));
SET64(4, RD(16) + RD(0));
L_002929F0:;
SET32(16, RW(16) + 32);
SET64(31, 0x2929fc); SET32(17, RW(17) + -1); F_00296998(c);
{ int t = RSD(17) >= 0; SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_002929F0; } }
SET32(4, RW(18) + 160);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00296998(c); return; }
}

void F_00292A20(Ctx *c) { /* func_00292A20 */
ENTER(0x292a20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET32(16, RW(17) + 2384);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(2) + RW(5));
SET32(5, RW(0) + 36);
SET64(31, 0x292a54); wr32(c, (RW(16) + 0), RW(2)); F_00294A30(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
{ int t = RD(2) == RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_00292A6C; }
{ u32 t = RW(2); SET64(31, 0x292a6c);  rt_call(c, t); }
L_00292A6C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00292A88(Ctx *c) { /* func_00292A88 */
ENTER(0x292a88);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET32(16, RW(17) + 2384);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET32(2, RW(2) + RW(5));
SET32(5, RW(0) + 37);
SET64(31, 0x292abc); wr32(c, (RW(16) + 4), RW(2)); F_00294A30(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
{ int t = RD(2) == RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_00292AD4; }
{ u32 t = RW(2); SET64(31, 0x292ad4);  rt_call(c, t); }
L_00292AD4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00292AF0(Ctx *c) { /* func_00292AF0 */
ENTER(0x292af0);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00297090(c); return; }
}

void F_00292B08(Ctx *c) { /* func_00292B08 */
ENTER(0x292b08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x292b1c); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 8))); if (t) goto L_00292B40; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x131);
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00292B40:;
SET64(31, 0x292b48); SET64(4, RD(16) + RD(0)); F_00292CE0(c);
SET64(31, 0x292b50); SET32(4, RW(16) + 120); F_00286CC0(c);
SET64(31, 0x292b58); SET64(4, RD(16) + RD(0)); F_00284580(c);
SET64(31, 0x292b60); SET64(4, RD(16) + RD(0)); F_00292BA8(c);
SET32(4, RW(0) + 7);
SET64(5, RD(2) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(2) + -1348);
L_00292B70:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
if (RD(2) == RD(16)) { wr32(c, (RW(3) + 0), RW(0)); goto L_00292B7C; }
L_00292B7C:;
SET32(4, RW(4) + -1);
{ int t = RSD(4) >= 0; SET32(3, RW(3) + 4); if (t) { POLL(); goto L_00292B70; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(5) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00292BA8(Ctx *c) { /* func_00292BA8 */
ENTER(0x292ba8);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 4);
wr32(c, (RW(2) + 76), RW(0));
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + 72), RW(0));
SET32(29, RW(29) + 16); { F_00297090(c); return; }
}

void F_00292BD0(Ctx *c) { /* func_00292BD0 */
ENTER(0x292bd0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x292be4); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x132); if (t) goto L_00292C08; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00292C08:;
SET64(31, 0x292c10); SET32(5, RW(0) + 47); F_00294A30(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00292C30; }
SET64(31, 0x292c24);  F_00291328(c);
SET32(3, RW(0) + 1); goto L_00292C3C;
L_00292C30:;
SET64(31, 0x292c38);  F_00292C50(c);
SET32(3, RW(0) + 1);
L_00292C3C:;
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 68), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00292C50(Ctx *c) { /* func_00292C50 */
ENTER(0x292c50);
SET32(3, RW(0) + 4);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(4) + 76), RW(3)); return;
}

void F_00292C60(Ctx *c) { /* func_00292C60 */
ENTER(0x292c60);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 7);
SET32(6, RW(0) + 6);
SET64(7, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x292c7c); SET64(8, RD(0) + RD(0)); F_00297128(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00292C88(Ctx *c) { /* func_00292C88 */
ENTER(0x292c88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x292c9c); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x133); if (t) goto L_00292CC0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00292CC0:;
SET64(31, 0x292cc8);  F_00292CE0(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 68), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00292CE0(Ctx *c) { /* func_00292CE0 */
ENTER(0x292ce0);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 72)));
{ int t = RD(3) == RD(5); SET64(2, RD(0) + RD(0)); if (t) goto L_00292D34; }
SET64(31, 0x292d08);  F_00292D68(c);
{ int t = RD(2) != RD(0); SET32(4, RW(0) + 1); if (t) goto L_00292D34; }
wr32(c, (RW(16) + 76), RW(0));
SET64(31, 0x292d1c); wr32(c, (RW(16) + 72), RW(0)); F_00292D48(c);
SET64(31, 0x292d24); SET64(4, RD(16) + RD(0)); F_00292DC8(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x292d30); SET64(16, RD(2) + RD(0)); F_00292D48(c);
SET64(2, RD(16) + RD(0));
L_00292D34:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00292D48(Ctx *c) { /* func_00292D48 */
ENTER(0x292d48);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -1356), RW(4)); return;
}

void F_00292D58(Ctx *c) { /* func_00292D58 */
ENTER(0x292d58);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + -1356))); return;
}

void F_00292D68(Ctx *c) { /* func_00292D68 */
ENTER(0x292d68);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 4);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 72)));
if (RD(2) != RD(3)) { SET32(3, RW(0) + 1); goto L_00292DA8; }
SET32(5, RW(0) + 7);
SET32(6, RW(0) + 7);
SET64(7, RD(0) + RD(0));
SET64(31, 0x292d9c); SET64(8, RD(0) + RD(0)); F_00297128(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00292DB8; }
SET32(3, RW(0) + 1);
L_00292DA8:;
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 76), RW(3));
wr32(c, (RW(16) + 72), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_00292DB8:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

static void B_00292DC8(Ctx *c, u32 entry) { /* func_00292DC8 */
ENTER(entry);
switch (entry) { case 0x293128: goto L_00293128; }
SET32(29, RW(29) + -736);
wr64(c, (RW(29) + 656), RD(16));
SET64(16, RD(4) + RD(0));
SET64(2, RD(16) & 0x7);
wr64(c, (RW(29) + 664), RD(17));
wr64(c, (RW(29) + 672), RD(18));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 680), RD(19));
SET64(3, RD(16) + RD(0));
wr64(c, (RW(29) + 688), RD(20));
wr64(c, (RW(29) + 696), RD(21));
wr64(c, (RW(29) + 704), RD(22));
wr64(c, (RW(29) + 712), RD(23));
wr64(c, (RW(29) + 720), RD(30));
wr64(c, (RW(29) + 728), RD(31));
{ int t = RD(2) == RD(0); wr32(c, (RW(29) + 592), RW(0)); if (t) goto L_00292E70; }
SET32(2, RW(16) + 64);
L_00292E10:;
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
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_00292E10; } }
 goto L_00292EA8;
L_00292E70:;
SET32(2, RW(16) + 64);
L_00292E74:;
SET64(5, rd64(c, (RW(3) + 0)));
SET64(6, rd64(c, (RW(3) + 8)));
SET64(7, rd64(c, (RW(3) + 16)));
SET64(8, rd64(c, (RW(3) + 24)));
wr64(c, (RW(4) + 0), RD(5));
wr64(c, (RW(4) + 8), RD(6));
wr64(c, (RW(4) + 16), RD(7));
wr64(c, (RW(4) + 24), RD(8));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_00292E74; } }
L_00292EA8:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
wr32(c, (RW(4) + 0), RW(2));
SET64(21, (s32)rd32(c, (RW(16) + 2596)));
{ int t = RD(21) == RD(0);  if (t) goto L_00292ED0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x292ec8); SET32(5, RW(29) + 80); F_00293198(c);
SET64(8, (s32)rd32(c, (RW(29) + 100)));
wr32(c, (RW(29) + 592), RW(8));
L_00292ED0:;
SET64(31, 0x292ed8); SET32(4, RW(16) + 120); F_00286CC0(c);
SET64(31, 0x292ee0); SET64(4, RD(16) + RD(0)); F_00284580(c);
SET64(22, (s32)rd32(c, (RW(16) + 2544)));
SET64(6, (s32)rd32(c, (RW(16) + 2548)));
ldl(c, 2, (RW(16) + 4831));
ldr(c, 2, (RW(16) + 4824));
SET64(3, (s32)rd32(c, (RW(16) + 4832)));
sdl(c, 2, (RW(29) + 583));
sdr(c, 2, (RW(29) + 576));
wr32(c, (RW(29) + 584), RW(3));
SET64(18, (s32)rd32(c, (RW(16) + 13864)));
wr32(c, (RW(29) + 596), RW(6));
SET64(7, (s32)rd32(c, (RW(16) + 4108)));
SET64(23, (s32)rd32(c, (RW(16) + 3384)));
SET64(30, (s32)rd32(c, (RW(16) + 4092)));
wr32(c, (RW(29) + 600), RW(7));
SET64(8, (s32)rd32(c, (RW(16) + 4112)));
wr32(c, (RW(29) + 604), RW(8));
SET64(2, (s32)rd32(c, (RW(16) + 3392)));
wr32(c, (RW(29) + 608), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 4052)));
{ int t = RD(18) == RD(0); wr32(c, (RW(29) + 612), RW(3)); if (t) goto L_00292F60; }
SET64(4, (s32)rd32(c, (RW(18) + 3536)));
wr32(c, (RW(29) + 616), RW(4));
SET64(5, (s32)rd32(c, (RW(18) + 3524)));
wr32(c, (RW(29) + 620), RW(5));
SET64(6, (s32)rd32(c, (RW(18) + 3528)));
wr32(c, (RW(29) + 624), RW(6));
SET64(7, (s32)rd32(c, (RW(18) + 3532)));
wr32(c, (RW(29) + 628), RW(7));
SET64(8, (s32)rd32(c, (RW(18) + 3540)));
wr32(c, (RW(29) + 632), RW(8)); goto L_00292F74;
L_00292F60:;
wr32(c, (RW(29) + 632), RW(0));
wr32(c, (RW(29) + 628), RW(0));
wr32(c, (RW(29) + 624), RW(0));
wr32(c, (RW(29) + 620), RW(0));
wr32(c, (RW(29) + 616), RW(0));
L_00292F74:;
SET32(3, RW(16) + 5044);
SET32(20, RW(29) + 512);
SET64(2, (s32)rd32(c, (RW(3) + 4)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(20) + RD(0));
SET32(6, RW(0) + 64);
SET32(2, RW(2) << 4);
wr32(c, (RW(29) + 640), RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x292fa0); wr32(c, (RW(29) + 636), RW(3)); F_0028A0A8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x292fac); SET64(19, RD(2) + RD(0)); F_00292BA8(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 656))); goto L_00293168; }
SET32(17, RW(29) + 112);
SET32(5, RW(16) + 2964);
SET32(6, RW(0) + 400);
SET64(31, 0x292fc8); SET64(4, RD(17) + RD(0)); F_00271EB0(c);
SET64(5, RD(0) + RD(0));
SET64(31, 0x292fd4); SET64(4, RD(29) + RD(0)); F_002926A8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET32(4, RW(16) + 2564); if (t) goto L_00292FF8; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(31, 0x292ff0); SET64(5, RD(5) | 0x202); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 656))); goto L_00293168;
L_00292FF8:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x293004); SET32(6, RW(0) + 400); F_00271EB0(c);
SET32(4, RW(16) + 2964);
SET64(5, RD(17) + RD(0));
SET64(31, 0x293014); SET32(6, RW(0) + 400); F_00271EB0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(31, 0x293024); SET64(6, RD(19) + RD(0)); F_0028A130(c);
{ int t = RD(21) == RD(0);  if (t) goto L_00293060; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x293038); SET32(5, RW(29) + 80); F_00293198(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 656))); goto L_00293168; }
SET64(6, (s32)rd32(c, (RW(29) + 100)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x293050); SET64(5, (s32)rd32(c, (RW(29) + 592))); F_00293208(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 656))); goto L_00293168; }
SET64(31, 0x293060); SET64(4, RD(16) + RD(0)); F_00293288(c);
L_00293060:;
{ int t = RD(22) == RD(0); SET64(6, (s32)rd32(c, (RW(29) + 596))); if (t) goto L_00293074; }
SET64(5, RD(22) + RD(0));
SET64(31, 0x293074); SET64(4, RD(16) + RD(0)); F_00287A58(c);
L_00293074:;
{ int t = RD(23) == RD(0); SET64(5, RD(23) + RD(0)); if (t) goto L_00293084; }
SET64(31, 0x293084); SET64(4, RD(16) + RD(0)); F_00295B68(c);
L_00293084:;
{ int t = RD(30) == RD(0); SET64(6, (s32)rd32(c, (RW(29) + 600))); if (t) goto L_0029309C; }
SET64(5, RD(30) + RD(0));
SET64(7, (s32)rd32(c, (RW(29) + 604)));
SET64(31, 0x29309c); SET64(4, RD(16) + RD(0)); F_00295BF0(c);
L_0029309C:;
SET64(2, (s32)rd32(c, (RW(29) + 608)));
{ int t = RD(2) == RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_002930B0; }
SET64(31, 0x2930b0); SET64(4, RD(16) + RD(0)); F_00295AF8(c);
L_002930B0:;
SET64(3, (s32)rd32(c, (RW(29) + 612)));
SET32(2, RW(0) + 1000);
{ int t = RD(3) == RD(2); SET64(5, RD(3) + RD(0)); if (t) goto L_002930C8; }
SET64(31, 0x2930c8); SET64(4, RD(16) + RD(0)); F_00291338(c);
L_002930C8:;
SET64(2, (s32)rd32(c, (RW(29) + 576)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x410000); if (t) goto L_00293100; }
ldl(c, 4, (RW(29) + 583));
ldr(c, 4, (RW(29) + 576));
SET64(5, (s32)rd32(c, (RW(29) + 584)));
sdl(c, 4, (RW(16) + 4831));
sdr(c, 4, (RW(16) + 4824));
wr32(c, (RW(16) + 4832), RW(5));
SET64(2, (s32)rd32(c, (RW(2) + -1288)));
{ int t = RD(2) == RD(0); SET32(8, RW(29) + 576); if (t) goto L_00293100; }
{ u32 t = RW(2); SET64(31, 0x293100); SET64(4, RD(8) + RD(0)); rt_call(c, t); }
L_00293100:;
{ int t = RD(18) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 636))); if (t) goto L_0029314C; }
SET64(5, RD(18) + RD(0));
SET64(31, 0x293114); SET64(4, RD(16) + RD(0)); F_00293AB0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x293120); SET64(5, (s32)rd32(c, (RW(29) + 616))); F_00294458(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x29312c); SET64(5, (s32)rd32(c, (RW(29) + 620))); F_00294360(c);
if (0) { L_00293128:; SET64(5, (s32)rd32(c, (RW(29) + 620))); }
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 624)));
SET64(31, 0x29313c); SET64(6, (s32)rd32(c, (RW(29) + 628))); F_002943D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x293148); SET64(5, (s32)rd32(c, (RW(29) + 632))); F_002944C8(c);
SET64(2, (s32)rd32(c, (RW(29) + 636)));
L_0029314C:;
{ int t = RD(2) == RD(0); SET64(6, (s32)rd32(c, (RW(29) + 640))); if (t) goto L_00293160; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x293160); SET64(5, RD(2) + RD(0)); F_002934D8(c);
L_00293160:;
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 656)));
L_00293168:;
SET64(17, rd64(c, (RW(29) + 664)));
SET64(18, rd64(c, (RW(29) + 672)));
SET64(19, rd64(c, (RW(29) + 680)));
SET64(20, rd64(c, (RW(29) + 688)));
SET64(21, rd64(c, (RW(29) + 696)));
SET64(22, rd64(c, (RW(29) + 704)));
SET64(23, rd64(c, (RW(29) + 712)));
SET64(30, rd64(c, (RW(29) + 720)));
SET64(31, rd64(c, (RW(29) + 728)));
SET32(29, RW(29) + 736); return;
}
void F_00292DC8(Ctx *c) { B_00292DC8(c, 0x292dc8); }
void F_00293128(Ctx *c) { B_00292DC8(c, 0x293128); }

void F_00293198(Ctx *c) { /* func_00293198 */
ENTER(0x293198);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2931b4); SET64(17, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(5, RD(5) | 0x134);
SET32(6, RW(0) + 9);
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_002931E8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_002931E8:;
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00297128(c); return; }
}

static void B_00293208(Ctx *c, u32 entry) { /* func_00293208 */
ENTER(entry);
switch (entry) { case 0x293228: goto L_00293228; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29322c); SET64(18, RD(6) + RD(0)); F_00287BC8(c);
if (0) { L_00293228:; SET64(18, RD(6) + RD(0)); }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(17) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(8, RD(18) + RD(0));
SET64(5, RD(5) | 0x135);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 10); if (t) goto L_00293268; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00293268:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00297128(c); return; }
}
void F_00293208(Ctx *c) { B_00293208(c, 0x293208); }
void F_00293228(Ctx *c) { B_00293208(c, 0x293228); }

void F_00293288(Ctx *c) { /* func_00293288 */
ENTER(0x293288);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2932a4); SET64(17, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x135); if (t) goto L_002932D0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_002932D0:;
SET64(16, (s32)rd32(c, (RW(17) + 7996)));
SET32(18, RW(0) + 1);
SET64(31, 0x2932e0); SET64(5, RD(16) + RD(0)); F_00285878(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
{ int t = RD(2) == RD(18); SET32(6, RW(0) + 1); if (t) goto L_002932FC; }
SET64(31, 0x2932f8);  F_00285858(c);
wr32(c, (RW(17) + 68), RW(18));
L_002932FC:;
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

static void B_00293318(Ctx *c, u32 entry) { /* func_00293318 */
ENTER(entry);
switch (entry) { case 0x293328: goto L_00293328; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x293328); SET64(5, (s32)rd32(c, (RW(4) + 7996))); F_00285878(c);
L_00293328:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}
void F_00293318(Ctx *c) { B_00293318(c, 0x293318); }
void F_00293328(Ctx *c) { B_00293318(c, 0x293328); }

void F_00293338(Ctx *c) { /* func_00293338 */
ENTER(0x293338);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29335c); wr32(c, (RW(16) + 0), RW(0)); F_00287BC8(c);
SET64(4, RD(0) + RD(0));
SET32(5, RW(0) + 6);
SET32(6, RW(0) + 11);
SET64(7, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_00293398; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0x136);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00293398:;
SET64(31, 0x2933a0); SET64(4, RD(17) + RD(0)); F_00297128(c);
SET64(4, RD(17) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_002933BC; }
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 2408), RW(2));
L_002933BC:;
SET64(2, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(2) + -1276)));
if (RD(2) == RD(0)) { SET64(2, RD(18) + RD(0)); goto L_002933D8; }
{ u32 t = RW(2); SET64(31, 0x2933d4);  rt_call(c, t); }
SET64(2, RD(18) + RD(0));
L_002933D8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002933F0(Ctx *c) { /* func_002933F0 */
ENTER(0x2933f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29340c); SET64(17, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(5, RD(5) | 0x137);
SET32(6, RW(0) + 12);
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_00293440; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00293440:;
wr32(c, (RW(17) + 2408), RW(0));
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 6);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00297128(c); return; }
}

void F_00293460(Ctx *c) { /* func_00293460 */
ENTER(0x293460);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29347c); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002934A0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x139);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_002934A0:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002848A8(c); return; }
}

void F_002934C0(Ctx *c) { /* func_002934C0 */
ENTER(0x2934c0);
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void F_002934D8(Ctx *c) { /* func_002934D8 */
ENTER(0x2934d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00293544; }
{ int t = RSD(16) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00293548; }
SET64(31, 0x29350c);  F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x165);
{ int t = RD(2) == RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_00293538; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00293538:;
SET32(4, RW(18) + 5044);
SET64(31, 0x293544); SET64(5, RD(17) + RD(0)); F_00293560(c);
L_00293544:;
SET64(2, RD(0) + RD(0));
L_00293548:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00293560(Ctx *c) { /* func_00293560 */
ENTER(0x293560);
SET32(29, RW(29) + -32);
SET64(3, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(3) + 7);
SET32(2, RW(0) + -8);
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(17) & RD(2));
wr64(c, (RW(29) + 16), RD(18));
SET32(3, RW(17) - RW(3));
SET64(5, RD(0) + RD(0));
SET32(16, RW(6) - RW(3));
SET64(18, RD(4) + RD(0));
SET64(6, RD(16) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2935a0); SET64(4, RD(17) + RD(0)); F_001273D0(c);
SET32(3, RW(16) + 15);
SET64(2, RSD(16) < (s64)0);
if (RD(2) != 0) SET64(16, RD(3));
wr32(c, (RW(18) + 0), RW(17));
SET32(16, RSW(16) >> 4);
wr32(c, (RW(18) + 16), RW(0));
wr32(c, (RW(18) + 4), RW(16));
wr32(c, (RW(18) + 8), RW(0));
wr32(c, (RW(18) + 12), RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002935E0(Ctx *c) { /* func_002935E0 */
ENTER(0x2935e0);
SET32(29, RW(29) + -16);
SET64(8, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET32(3, RW(5) << 3);
SET32(3, RW(3) - RW(5));
wr32(c, (RW(7) + 0), RW(0));
SET64(6, rd64(c, (RW(8) + 0)));
SET32(3, RW(3) << 2);
SET64(2, RD(0) + RD(0));
{ int t = RSD(6) < 0; SET32(3, RW(3) + RW(5)); if (t) goto L_0029365C; }
SET32(4, RW(3) << 2);
SET32(4, RW(16) + RW(4));
SET32(4, RW(4) + 4928);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(5, RD(8) + RD(0)); if (t) goto L_0029365C; }
SET64(31, 0x293634); SET64(6, RD(7) + RD(0)); F_00293670(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s64)(s32)0xff000000);
SET32(3, RW(0) + -1);
{ int t = RD(2) != RD(3); SET64(5, RD(5) | 0x421); if (t) goto L_00293658; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00293658:;
SET64(2, RD(0) + RD(0));
L_0029365C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00293670(Ctx *c) { /* func_00293670 */
ENTER(0x293670);
SET64(7, RD(4) + RD(0));
SET64(9, RD(6) + RD(0));
SET64(3, (s32)rd32(c, (RW(7) + 8)));
SET64(2, (s32)rd32(c, (RW(7) + 4)));
{ int t = RD(3) != RD(2); SET64(8, RD(5) + RD(0)); if (t) goto L_00293698; }
SET32(3, RW(0) + 1);
SET32(2, RW(0) + -1);
wr32(c, (RW(9) + 0), RW(3)); return;
L_00293698:;
SET64(5, (s32)rd32(c, (RW(7) + 12)));
SET64(2, (s32)rd32(c, (RW(7) + 0)));
SET64(6, rd64(c, (RW(8) + 0)));
SET32(3, RW(5) << 4);
SET32(3, RW(3) + RW(2));
SET32(4, RW(5) + 1);
wr64(c, (RW(3) + 0), RD(6));
SET64(6, RD(4) + RD(0));
SET64(2, rd64(c, (RW(8) + 8)));
wr64(c, (RW(3) + 8), RD(2));
SET64(3, (s32)rd32(c, (RW(7) + 4)));
SET64(4, RSD(4) < RSD(3));
{ int t = RD(4) != RD(0); SET32(5, RW(5) - RW(3)); if (t) goto L_002936D4; }
SET32(6, RW(5) + 1);
L_002936D4:;
SET64(2, (s32)rd32(c, (RW(7) + 8)));
wr32(c, (RW(7) + 12), RW(6));
SET32(2, RW(2) + 1);
SET64(3, RSD(2) < RSD(3));
{ int t = RD(3) != RD(0); wr32(c, (RW(7) + 8), RW(2)); if (t) goto L_002936F8; }
SET32(2, RW(0) + 1);
wr32(c, (RW(9) + 0), RW(2)); goto L_002936FC;
L_002936F8:;
wr32(c, (RW(9) + 0), RW(0));
L_002936FC:;
SET64(2, RD(0) + RD(0)); return;
}

void F_00293708(Ctx *c) { /* func_00293708 */
ENTER(0x293708);
SET32(2, RW(5) << 3);
SET32(3, RW(4) + 4872);
SET32(2, RW(2) - RW(5));
SET32(29, RW(29) + -16);
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + RW(5));
SET32(4, RW(0) + -1);
SET32(2, RW(2) << 2);
wr64(c, (RW(7) + 0), RD(4));
SET32(3, RW(3) + RW(2));
SET64(2, RD(0) + RD(0));
SET32(4, RW(3) + 56);
SET32(3, RW(3) + 16);
SET64(5, (s32)rd32(c, (RW(4) + 0)));
SET64(9, RD(6) + RD(0));
SET64(8, (s32)rd32(c, (RW(3) + 12)));
SET64(6, RD(7) + RD(0));
{ int t = RD(5) == RD(0); SET64(7, (s32)rd32(c, (RW(3) + 8))); if (t) goto L_00293770; }
SET32(2, RW(7) + RW(8));
SET32(5, RW(9) - RW(8));
SET64(2, RD(9) < RD(2));
SET64(31, 0x29376c); if (RD(2) != 0) SET64(5, RD(9)); F_00293780(c);
SET64(2, RD(0) + RD(0));
L_00293770:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00293780(Ctx *c) { /* func_00293780 */
ENTER(0x293780);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(6, RD(7) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(2) == RD(0); SET64(7, RD(8) + RD(0)); if (t) goto L_00293804; }
SET64(31, 0x2937b0);  F_00293818(c);
SET64(6, RD(2) + RD(0));
SET32(2, RW(0) + -1);
if (RD(6) == RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00293808; }
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET64(5, (s32)rd32(c, (RW(16) + 8)));
SET32(2, RW(2) + RW(6));
SET32(4, RW(2) - RW(3));
SET64(3, RSD(2) < RSD(3));
if (RD(3) == 0) SET64(2, RD(4));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET32(5, RW(5) - RW(6));
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 8), RW(5));
SET32(4, RW(2) << 4);
SET32(4, RW(4) + RW(3));
SET64(2, rd64(c, (RW(4) + 0)));
wr64(c, (RW(17) + 0), RD(2));
SET64(3, rd64(c, (RW(4) + 8)));
wr64(c, (RW(17) + 8), RD(3));
L_00293804:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00293808:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00293818(Ctx *c) { /* func_00293818 */
ENTER(0x293818);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET32(12, RW(6) + RW(7));
SET64(11, (s32)rd32(c, (RW(4) + 4)));
SET64(10, RD(0) + RD(0));
{ int t = RSD(2) <= 0; SET64(9, (s32)rd32(c, (RW(4) + 16))); if (t) goto L_002938D8; }
SET64(15, (s32)rd32(c, (RW(4) + 0)));
SET64(6, RD(5) < RD(6));
SET64(14, RD(2) + RD(0));
SET64(13, RD(5) < RD(12));
SET32(2, RW(9) << 4);
L_00293848:;
SET32(2, RW(15) + RW(2));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(8, RD(5) < RD(3));
SET32(4, RW(3) + RW(4));
SET64(2, RD(12) < RD(4));
{ int t = RD(2) != RD(0); SET64(3, RD(8) + RD(0)); if (t) goto L_00293888; }
{ int t = RD(8) != RD(0); SET32(2, RW(9) + 1); if (t) goto L_002938B4; }
SET64(2, RD(5) < RD(4));
if (RD(2) == RD(0)) { SET32(2, RW(9) + 1); goto L_002938B4; }
L_0029387C:;
SET64(2, RD(10) + RD(0)); return;
L_00293888:;
{ int t = RD(3) != RD(0);  if (t) goto L_00293898; }
{ int t = RD(13) != RD(0);  if (t) { POLL(); goto L_0029387C; } }
L_00293898:;
{ int t = RD(6) != RD(0); SET32(2, RW(9) + 1); if (t) goto L_002938B4; }
SET32(2, RW(4) - RW(7));
SET64(2, RD(5) < RD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0029387C; } }
SET32(2, RW(9) + 1);
L_002938B4:;
SET64(3, RSD(2) < RSD(11));
{ int t = RD(3) != RD(0); SET32(10, RW(10) + 1); if (t) goto L_002938C8; }
SET32(2, RW(9) - RW(11));
SET32(2, RW(2) + 1);
L_002938C8:;
SET64(9, RD(2) + RD(0));
SET64(2, RSD(10) < RSD(14));
if (RD(2) != RD(0)) { SET32(2, RW(9) << 4); { POLL(); goto L_00293848; } }
L_002938D8:;
SET32(2, RW(0) + -1); return;
}

void F_002938E0(Ctx *c) { /* func_002938E0 */
ENTER(0x2938e0);
SET32(3, RW(5) << 3);
SET32(3, RW(3) - RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(4, RW(4) + RW(3));
SET32(4, RW(4) + 4928);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00293918; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET64(2, RSD(2) < RSD(3));
SET64(2, RD(2) ^ 0x1);
L_00293918:;
 return;
}

void F_00293920(Ctx *c) { /* func_00293920 */
ENTER(0x293920);
SET32(3, RW(4) + 4);
SET32(5, RW(0) + -3);
SET32(2, RW(0) + 1);
wr32(c, (RW(3) + 4), RW(5));
wr32(c, (RW(3) + 8), RW(2));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(3) + 0), RW(0)); return;
}

void F_00293940(Ctx *c) { /* func_00293940 */
ENTER(0x293940);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RSD(5) <= 0; wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00293974; }
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(4, RD(17) + RD(0));
L_00293960:;
SET32(17, RW(17) + 3544);
SET64(31, 0x29396c); SET32(16, RW(16) + -1); F_00293988(c);
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_00293960; } }
L_00293974:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00293988(Ctx *c) { /* func_00293988 */
ENTER(0x293988);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2939a4); SET32(6, RW(0) + 886); F_00272320(c);
SET64(31, 0x2939ac); SET64(4, RD(16) + RD(0)); F_002939F8(c);
wr32(c, (RW(16) + 3496), RW(0));
SET32(2, RW(0) + -1);
SET32(3, RW(0) + -8);
SET32(4, RW(0) + 1);
wr32(c, (RW(16) + 3540), RW(2));
wr32(c, (RW(16) + 3528), RW(3));
wr32(c, (RW(16) + 3532), RW(4));
wr32(c, (RW(16) + 3500), RW(0));
wr32(c, (RW(16) + 3504), RW(3));
wr32(c, (RW(16) + 3508), RW(4));
wr32(c, (RW(16) + 3512), RW(2));
wr32(c, (RW(16) + 3516), RW(2));
wr32(c, (RW(16) + 3520), RW(0));
wr32(c, (RW(16) + 3524), RW(0));
wr32(c, (RW(16) + 3536), RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002939F8(Ctx *c) { /* func_002939F8 */
ENTER(0x2939f8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 2208);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(16) + 3340);
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(16) + 2768);
wr64(c, (RW(29) + 32), RD(31));
SET32(4, RW(16) + 12);
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 4), RW(0));
SET64(31, 0x293a34); wr32(c, (RW(16) + 8), RW(0)); F_00286CA8(c);
wr32(c, (RW(17) + 0), RW(0));
wr32(c, (RW(17) + 44), RW(0));
SET64(5, (s64)(s32)0x7fff0000);
wr32(c, (RW(17) + 4), RW(0));
SET32(4, RW(16) + 2780);
wr32(c, (RW(17) + 8), RW(0));
SET64(5, RD(5) | 0xffff);
wr32(c, (RW(17) + 12), RW(0));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 40), RW(0));
wr64(c, (RW(17) + 24), RD(0));
wr32(c, (RW(19) + 8), RW(0));
wr64(c, (RW(17) + 32), RD(0));
wr32(c, (RW(19) + 0), RW(0));
SET64(31, 0x293a74); wr32(c, (RW(19) + 4), RW(0)); F_00295038(c);
wr32(c, (RW(18) + 0), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 4), RW(0));
wr32(c, (RW(18) + 8), RW(2));
wr32(c, (RW(18) + 12), RW(0));
wr32(c, (RW(18) + 16), RW(0));
wr32(c, (RW(18) + 20), RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00293AB0(Ctx *c) { /* func_00293AB0 */
ENTER(0x293ab0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x293acc); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00293AF0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x151);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00293AF0:;
wr32(c, (RW(16) + 13864), RW(17));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00293B08(Ctx *c) { /* func_00293B08 */
ENTER(0x293b08);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x293b24); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00293B48; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x152);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00293B48:;
SET64(3, (s32)rd32(c, (RW(16) + 13864)));
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + 3520), RW(17));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void F_00293B68(Ctx *c) { /* func_00293B68 */
ENTER(0x293b68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x293b7c); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET32(6, RW(0) + 1);
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x153); if (t) goto L_00293BA8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00293BA8:;
SET64(31, 0x293bb0); SET32(5, RW(0) + 47); F_00294868(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00291328(c); return; }
}

void F_00293BC8(Ctx *c) { /* func_00293BC8 */
ENTER(0x293bc8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x293be8); wr32(c, (RW(16) + 0), RW(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00293C10; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x154);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00293C10:;
SET64(4, (s32)rd32(c, (RW(17) + 13864)));
SET64(31, 0x293c1c); SET64(5, RD(16) + RD(0)); F_00293C38(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00293C38(Ctx *c) { /* func_00293C38 */
ENTER(0x293c38);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, RD(2) ^ 0x1);
if (RD(3) != 0) SET64(2, RD(0));
wr32(c, (RW(5) + 0), RW(2)); return;
}

void F_00293C50(Ctx *c) { /* func_00293C50 */
ENTER(0x293c50);
SET64(3, (s32)rd32(c, (RW(4) + 13864)));
{ int t = RD(3) == RD(0);  if (t) goto L_00293C74; }
SET64(2, (s32)rd32(c, (RW(3) + 3512)));
if (RSD(2) < 0) { wr32(c, (RW(3) + 3512), RW(5)); goto L_00293C68; }
L_00293C68:;
SET64(2, (s32)rd32(c, (RW(3) + 3516)));
if (RSD(2) < 0) { wr32(c, (RW(3) + 3516), RW(6)); goto L_00293C74; }
L_00293C74:;
 return;
}

void F_00293C80(Ctx *c) { /* func_00293C80 */
ENTER(0x293c80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 13864)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00293CB8; }
SET64(31, 0x293ca4);  F_00293CC8(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00294528(c); return; }
L_00293CB8:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00293CC8(Ctx *c) { /* func_00293CC8 */
ENTER(0x293cc8);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 64), RD(31));
SET64(16, (s32)rd32(c, (RW(21) + 13864)));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(19, RW(16) + 12);
SET32(20, RW(16) + 2208);
SET32(17, RW(16) + 2768);
{ int t = RD(2) != RD(0); SET32(18, RW(16) + 3340); if (t) goto L_00293E08; }
SET64(5, RD(18) + RD(0));
SET64(31, 0x293d14); SET64(6, RD(29) + RD(0)); F_00293E30(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00293E0C; }
SET64(4, RD(21) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x293d2c); SET32(6, RW(29) + 4); F_00293EB0(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00293E0C; }
SET64(31, 0x293d3c); SET64(4, RD(21) + RD(0)); F_00293F30(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00293DC8; }
wr32(c, (RW(20) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(19) + 0)));
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(20) + 4))); goto L_00293DBC; }
SET64(2, (s32)rd32(c, (RW(19) + 12)));
{ int t = RSD(2) <= 0;  if (t) goto L_00293D88; }
SET64(4, (s32)rd32(c, (RW(16) + 3524)));
{ int t = RSD(4) <= 0; SET64(6, (s32)rd32(c, (RW(19) + 52))); if (t) goto L_00293D7C; }
if (RSD(6) <= 0) { SET64(5, RD(2) + RD(0)); goto L_00293DBC; }
SET64(31, 0x293d7c); SET32(5, RW(0) + 1000); F_002784E8(c);
L_00293D7C:;
SET64(5, RD(2) + RD(0)); goto L_00293DBC;
L_00293D88:;
SET64(31, 0x293d90); SET64(4, RD(21) + RD(0)); F_00287718(c);
SET64(2, RSD(2) < (s64)108);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(20) + 4))); goto L_00293DBC; }
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(3, RW(0) + 2018);
if (RD(3) == RD(0)) { rt_break(c, 0x293da8); goto L_00293DAC; }
L_00293DAC:;
SET32(2, RW(2) << 11);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
SET64(5, RD(2) + RD(0));
L_00293DBC:;
SET64(3, (s32)rd32(c, (RW(20) + 8))); goto L_00293DF0;
L_00293DC8:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_00293DE0; }
SET64(3, (s32)rd32(c, (RW(17) + 8)));
SET64(5, (s32)rd32(c, (RW(17) + 4))); goto L_00293DF0;
L_00293DE0:;
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00293E0C; }
SET64(3, (s32)rd32(c, (RW(18) + 8)));
SET64(5, (s32)rd32(c, (RW(18) + 4)));
L_00293DF0:;
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 4), RW(5));
wr32(c, (RW(16) + 0), RW(2));
SET64(4, RD(21) + RD(0));
SET64(31, 0x293e08); wr32(c, (RW(16) + 8), RW(3)); F_00294660(c);
L_00293E08:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00293E0C:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_00293E30(Ctx *c) { /* func_00293E30 */
ENTER(0x293e30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
SET32(5, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x293e58); SET64(16, RD(4) + RD(0)); F_002971D8(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 6); if (t) goto L_00293E90; }
SET64(31, 0x293e6c);  F_00294A30(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { wr32(c, (RW(17) + 0), RW(0)); goto L_00293E94; }
wr32(c, (RW(17) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET64(2, RD(2) < (u64)(s64)1); goto L_00293E98;
L_00293E90:;
wr32(c, (RW(17) + 0), RW(0));
L_00293E94:;
SET64(2, RD(0) + RD(0));
L_00293E98:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00293EB0(Ctx *c) { /* func_00293EB0 */
ENTER(0x293eb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
SET32(5, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x293ed8); SET64(16, RD(4) + RD(0)); F_002971D8(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 5); if (t) goto L_00293F10; }
SET64(31, 0x293eec);  F_00294A30(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { wr32(c, (RW(17) + 0), RW(0)); goto L_00293F14; }
wr32(c, (RW(17) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET64(2, RD(2) < (u64)(s64)1); goto L_00293F18;
L_00293F10:;
wr32(c, (RW(17) + 0), RW(0));
L_00293F14:;
SET64(2, RD(0) + RD(0));
L_00293F18:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00293F30(Ctx *c) { /* func_00293F30 */
ENTER(0x293f30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x293f40); SET32(5, RW(0) + 1); F_002971D8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void F_00293F50(Ctx *c) { /* func_00293F50 */
ENTER(0x293f50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x293f70); wr32(c, (RW(16) + 0), RW(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00293F98; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x155);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00293F98:;
SET64(4, (s32)rd32(c, (RW(17) + 13864)));
SET64(31, 0x293fa4); SET64(5, RD(16) + RD(0)); F_00293FC0(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00293FC0(Ctx *c) { /* func_00293FC0 */
ENTER(0x293fc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(5, RD(29) + RD(0));
{ int t = RD(16) == RD(0); wr32(c, (RW(17) + 0), RW(0)); if (t) goto L_00294018; }
SET64(31, 0x293fec);  F_00293C38(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0029401C; }
SET64(2, (s32)rd32(c, (RW(16) + 3520)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00294014; }
SET64(2, (s32)rd32(c, (RW(16) + 3496)));
{ int t = RSD(2) <= 0; SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0029401C; }
SET32(2, RW(0) + 1);
L_00294014:;
wr32(c, (RW(17) + 0), RW(2));
L_00294018:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0029401C:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00294030(Ctx *c) { /* func_00294030 */
ENTER(0x294030);
SET32(29, RW(29) + -64);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET32(16, RW(2) + 13864);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x294064); wr32(c, (RW(17) + 0), RW(0)); F_00287BC8(c);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(29) + RD(0)); if (t) goto L_00294088; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x29407c); SET64(5, RD(5) | 0x156); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_002940B8;
L_00294088:;
SET64(31, 0x294090); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_00293FC0(c);
SET64(5, RD(18) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(19) + RD(0));
SET64(7, RD(17) + RD(0));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002940B4; }
SET64(31, 0x2940b0); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_002940D0(c);
SET64(2, RD(0) + RD(0));
L_002940B4:;
SET64(16, rd64(c, (RW(29) + 16)));
L_002940B8:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_002940D0(Ctx *c) { /* func_002940D0 */
ENTER(0x2940d0);
SET32(29, RW(29) + -16);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 3520)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00294100; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00294120(c); return; }
L_00294100:;
SET64(31, 0x294108); SET64(4, (s32)rd32(c, (RW(3) + 3496))); F_002784E8(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00294120(Ctx *c) { /* func_00294120 */
ENTER(0x294120);
wr32(c, (RW(7) + 0), RW(0)); return;
}

void F_00294128(Ctx *c) { /* func_00294128 */
ENTER(0x294128);
SET32(29, RW(29) + -64);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(19) + 0), RW(2));
SET64(2, RD(4) + RD(0));
SET64(31, 0x294164); SET32(16, RW(2) + 13864); F_00287BC8(c);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(29) + RD(0)); if (t) goto L_00294188; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x29417c); SET64(5, RD(5) | 0x157); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_002941B8;
L_00294188:;
SET64(31, 0x294190); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_00293FC0(c);
SET64(5, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002941B4; }
SET64(31, 0x2941b0); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_002941D0(c);
SET64(2, RD(0) + RD(0));
L_002941B4:;
SET64(16, rd64(c, (RW(29) + 16)));
L_002941B8:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_002941D0(Ctx *c) { /* func_002941D0 */
ENTER(0x2941d0);
SET32(29, RW(29) + -32);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(8, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 3520)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00294210; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00294258(c); return; }
L_00294210:;
SET64(2, (s32)rd32(c, (RW(3) + 3496)));
{ int t = RSD(2) > 0; SET64(6, RD(2) + RD(0)); if (t) goto L_00294228; }
wr32(c, (RW(16) + 0), RW(0)); goto L_00294238;
L_00294228:;
SET64(4, RD(8) + RD(0));
SET64(31, 0x294234); SET32(5, RW(0) + 1000); F_002784E8(c);
wr32(c, (RW(16) + 0), RW(2));
L_00294238:;
SET32(2, RW(0) + 1000);
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(17) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void F_00294258(Ctx *c) { /* func_00294258 */
ENTER(0x294258);
SET32(2, RW(0) + 1000);
wr32(c, (RW(6) + 0), RW(0));
wr32(c, (RW(7) + 0), RW(2)); return;
}

void F_00294268(Ctx *c) { /* func_00294268 */
ENTER(0x294268);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x294288); SET64(18, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002942B0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x158);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_002942B0:;
SET64(17, (s32)rd32(c, (RW(16) + 13864)));
if (RD(17) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029434C; }
SET64(31, 0x2942c4); SET64(4, RD(16) + RD(0)); F_00292CE0(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 47);
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_00294348; }
SET64(31, 0x2942dc);  F_00294868(c);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 3512)));
SET32(5, RW(0) + 5);
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_002942F8; }
SET64(31, 0x2942f8);  F_00294868(c);
L_002942F8:;
SET64(2, (s32)rd32(c, (RW(17) + 3516)));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00294310; }
SET32(5, RW(0) + 6);
SET64(31, 0x294310); SET64(6, RD(0) + RD(0)); F_00294868(c);
L_00294310:;
ldl(c, 2, (RW(18) + 7));
ldr(c, 2, (RW(18) + 0));
SET64(3, (s32)rd32(c, (RW(18) + 8)));
sdl(c, 2, (RW(16) + 13875));
sdr(c, 2, (RW(16) + 13868));
wr32(c, (RW(16) + 13876), RW(3));
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 13);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00297090(c); return; }
L_00294348:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029434C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00294360(Ctx *c) { /* func_00294360 */
ENTER(0x294360);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29437c); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002943A0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x159);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_002943A0:;
SET64(3, (s32)rd32(c, (RW(16) + 13864)));
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002943C0; }
wr32(c, (RW(3) + 3524), RW(17));
SET64(31, 0x2943b8); SET64(4, RD(16) + RD(0)); F_00294660(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_002943C0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002943D0(Ctx *c) { /* func_002943D0 */
ENTER(0x2943d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2943f4); SET64(18, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x15a); if (t) goto L_00294420; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00294420:;
SET64(3, (s32)rd32(c, (RW(16) + 13864)));
{ int t = RD(3) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029443C; }
wr32(c, (RW(3) + 3532), RW(17));
SET64(31, 0x294438); wr32(c, (RW(3) + 3528), RW(18)); F_00294660(c);
SET64(2, RD(0) + RD(0));
L_0029443C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00294458(Ctx *c) { /* func_00294458 */
ENTER(0x294458);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x294474); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00294498; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x15b);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00294498:;
SET64(3, (s32)rd32(c, (RW(16) + 13864)));
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002944B8; }
wr32(c, (RW(3) + 3536), RW(17));
SET64(31, 0x2944b0); SET64(4, RD(16) + RD(0)); F_00294660(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_002944B8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002944C8(Ctx *c) { /* func_002944C8 */
ENTER(0x2944c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2944e4); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00294508; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x15c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00294508:;
SET64(4, (s32)rd32(c, (RW(16) + 13864)));
if (RD(4) != RD(0)) { wr32(c, (RW(4) + 3540), RW(17)); goto L_00294514; }
L_00294514:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00294528(Ctx *c) { /* func_00294528 */
ENTER(0x294528);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET32(20, RW(18) + 3516);
wr64(c, (RW(29) + 0), RD(16));
SET32(17, RW(18) + 13868);
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x294558); SET64(16, (s32)rd32(c, (RW(18) + 13864))); F_00285B38(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002945FC; }
SET64(2, (s32)rd32(c, (RW(16) + 3500)));
{ int t = RSD(2) > 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002945A8; }
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(0) + -3);
{ int t = RD(3) == RD(2); SET64(17, RD(0) + RD(0)); if (t) goto L_00294580; }
SET64(17, (s32)rd32(c, (RW(16) + 3540)));
L_00294580:;
if (RSD(17) < 0) { SET64(2, (s32)rd32(c, (RW(16) + 3504))); goto L_002945AC; }
SET64(31, 0x294590); SET64(4, RD(18) + RD(0)); F_00294618(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + -1);
{ int t = RD(3) == RD(2); SET32(2, RW(17) + RW(3)); if (t) goto L_002945A8; }
SET32(19, RW(0) + 1);
wr32(c, (RW(16) + 3500), RW(2));
L_002945A8:;
SET64(2, (s32)rd32(c, (RW(16) + 3504)));
L_002945AC:;
{ int t = RSD(2) > 0;  if (t) goto L_002945D0; }
SET64(2, (s32)rd32(c, (RW(20) + 36)));
{ int t = RSD(2) <= 0;  if (t) goto L_002945D0; }
wr32(c, (RW(16) + 3504), RW(2));
SET32(19, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(20) + 40)));
wr32(c, (RW(16) + 3508), RW(2));
L_002945D0:;
{ int t = RD(19) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_002945F8; }
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_00294660(c); return; }
L_002945F8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002945FC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00294618(Ctx *c) { /* func_00294618 */
ENTER(0x294618);
SET32(5, RW(4) + 7976);
SET32(6, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(5) + 20)));
SET32(2, RW(3) << 3);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 4952)));
SET32(2, RW(3) << 4);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(5, RW(5) + RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 32)));
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(6)); return;
}

void F_00294660(Ctx *c) { /* func_00294660 */
ENTER(0x294660);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(16, (s32)rd32(c, (RW(4) + 13864)));
SET64(2, (s32)rd32(c, (RW(16) + 3536)));
if (RSD(2) > 0) { wr32(c, (RW(16) + 3496), RW(2)); goto L_002946D4; }
SET64(4, (s32)rd32(c, (RW(16) + 3524)));
SET64(6, (s32)rd32(c, (RW(16) + 3528)));
{ int t = RSD(4) <= 0; SET64(5, (s32)rd32(c, (RW(16) + 3532))); if (t) goto L_00294694; }
{ int t = RSD(6) > 0;  if (t) goto L_002946C8; }
L_00294694:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RSD(2) > 0) { wr32(c, (RW(16) + 3496), RW(2)); goto L_002946D4; }
if (RSD(4) <= 0) { SET64(4, (s32)rd32(c, (RW(16) + 3500))); goto L_002946A8; }
L_002946A8:;
{ int t = RSD(6) > 0;  if (t) goto L_002946B8; }
SET64(6, (s32)rd32(c, (RW(16) + 3504)));
SET64(5, (s32)rd32(c, (RW(16) + 3508)));
L_002946B8:;
if (RSD(4) <= 0) { wr32(c, (RW(16) + 3496), RW(2)); goto L_002946D4; }
if (RSD(6) <= 0) { wr32(c, (RW(16) + 3496), RW(2)); goto L_002946D4; }
L_002946C8:;
SET64(31, 0x2946d0);  F_002784E8(c);
wr32(c, (RW(16) + 3496), RW(2));
L_002946D4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002946E8(Ctx *c) { /* func_002946E8 */
ENTER(0x2946e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002924A8(c); return; }
}

void F_00294700(Ctx *c) { /* func_00294700 */
ENTER(0x294700);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x294714); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x111); if (t) goto L_0029472C; }
SET64(31, 0x29472c);  F_002879A8(c);
L_0029472C:;
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00294740(Ctx *c) { /* func_00294740 */
ENTER(0x294740);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00294788; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x294770); SET64(5, RD(18) + RD(0)); F_002947F8(c);
SET32(2, RW(17) << 2);
SET64(1, (s64)(s32)0x410000);
SET32(1, RW(1) + RW(2));
wr32(c, (RW(1) + -1864), RW(18));
SET64(16, rd64(c, (RW(29) + 0))); goto L_002947DC;
L_00294788:;
SET64(31, 0x294790);  F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002947B8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x112);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_002947B8:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2947c8); SET64(6, RD(18) + RD(0)); F_00294868(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2947d8); SET64(6, RD(18) + RD(0)); F_002948B8(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_002947DC:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002947F8(Ctx *c) { /* func_002947F8 */
ENTER(0x2947f8);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 32), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 7);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(2) + -1348);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
L_00294828:;
SET32(17, RW(17) + 4);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00294840; }
SET64(5, RD(19) + RD(0));
SET64(31, 0x294840); SET64(6, RD(18) + RD(0)); F_00294868(c);
L_00294840:;
SET32(16, RW(16) + -1);
if (RSD(16) >= 0) { SET64(2, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_00294828; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00294868(Ctx *c) { /* func_00294868 */
ENTER(0x294868);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29488c); SET64(18, RD(4) + RD(0)); F_00294908(c);
{ int t = RD(2) == RD(0); SET32(16, RW(16) << 2); if (t) goto L_0029489C; }
SET32(2, RW(16) + RW(18));
wr32(c, (RW(2) + 2564), RW(17));
L_0029489C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002948B8(Ctx *c) { /* func_002948B8 */
ENTER(0x2948b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2948dc); SET64(18, RD(4) + RD(0)); F_00294908(c);
{ int t = RD(2) == RD(0); SET32(16, RW(16) << 2); if (t) goto L_002948EC; }
SET32(2, RW(16) + RW(18));
wr32(c, (RW(2) + 2964), RW(17));
L_002948EC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00294908(Ctx *c) { /* func_00294908 */
ENTER(0x294908);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
{ int t = RD(16) != RD(2); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0029494C; }
SET32(2, RW(0) + 1);
if (RD(17) != RD(2)) { SET32(2, RW(0) + 5); goto L_00294950; }
SET64(31, 0x294944); SET32(5, RW(0) + 3); F_002971D8(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029497C; }
L_0029494C:;
SET32(2, RW(0) + 5);
L_00294950:;
{ int t = RD(16) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_00294978; }
if (RD(17) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029497C; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x29496c); SET32(5, RW(0) + 2); F_002971D8(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0029497C; }
SET32(2, RW(0) + 1);
L_00294978:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029497C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00294990(Ctx *c) { /* func_00294990 */
ENTER(0x294990);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
{ int t = RD(16) != RD(0); SET32(2, RW(17) << 2); if (t) goto L_002949D0; }
SET64(1, (s64)(s32)0x410000);
SET32(1, RW(1) + RW(2));
SET64(2, (s32)rd32(c, (RW(1) + -1864)));
wr32(c, (RW(18) + 0), RW(2)); goto L_00294A10;
L_002949D0:;
SET64(31, 0x2949d8);  F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00294A00; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x113);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00294A00:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x294a0c); SET64(5, RD(17) + RD(0)); F_00294A30(c);
wr32(c, (RW(18) + 0), RW(2));
L_00294A10:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00294A30(Ctx *c) { /* func_00294A30 */
ENTER(0x294a30);
SET32(5, RW(5) << 2);
SET32(5, RW(5) + RW(4));
SET64(2, (s32)rd32(c, (RW(5) + 2564))); return;
}

void F_00294A40(Ctx *c) { /* func_00294A40 */
ENTER(0x294a40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x294a5c); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00294A80; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x114);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00294A80:;
ldl(c, 3, (RW(16) + 2323));
ldr(c, 3, (RW(16) + 2316));
ldl(c, 4, (RW(16) + 2331));
ldr(c, 4, (RW(16) + 2324));
ldl(c, 5, (RW(16) + 2339));
ldr(c, 5, (RW(16) + 2332));
ldl(c, 6, (RW(16) + 2347));
ldr(c, 6, (RW(16) + 2340));
sdl(c, 3, (RW(17) + 7));
sdr(c, 3, (RW(17) + 0));
sdl(c, 4, (RW(17) + 15));
sdr(c, 4, (RW(17) + 8));
sdl(c, 5, (RW(17) + 23));
sdr(c, 5, (RW(17) + 16));
sdl(c, 6, (RW(17) + 31));
sdr(c, 6, (RW(17) + 24));
ldl(c, 3, (RW(16) + 2355));
ldr(c, 3, (RW(16) + 2348));
ldl(c, 4, (RW(16) + 2363));
ldr(c, 4, (RW(16) + 2356));
ldl(c, 5, (RW(16) + 2371));
ldr(c, 5, (RW(16) + 2364));
ldl(c, 6, (RW(16) + 2379));
ldr(c, 6, (RW(16) + 2372));
sdl(c, 3, (RW(17) + 39));
sdr(c, 3, (RW(17) + 32));
sdl(c, 4, (RW(17) + 47));
sdr(c, 4, (RW(17) + 40));
sdl(c, 5, (RW(17) + 55));
sdr(c, 5, (RW(17) + 48));
sdl(c, 6, (RW(17) + 63));
sdr(c, 6, (RW(17) + 56));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00294B18(Ctx *c) { /* func_00294B18 */
ENTER(0x294b18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x294b34); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00294B58; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(5, RD(5) | 0x119);
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00294B58:;
SET64(5, RD(17) + RD(0));
SET32(2, RW(16) + 2544);
SET32(4, RW(16) + 2384);
L_00294B64:;
SET64(3, rd64(c, (RW(4) + 0)));
SET64(6, rd64(c, (RW(4) + 8)));
SET64(7, rd64(c, (RW(4) + 16)));
SET64(8, rd64(c, (RW(4) + 24)));
wr64(c, (RW(5) + 0), RD(3));
wr64(c, (RW(5) + 8), RD(6));
wr64(c, (RW(5) + 16), RD(7));
wr64(c, (RW(5) + 24), RD(8));
SET32(4, RW(4) + 32);
{ int t = RD(4) != RD(2); SET32(5, RW(5) + 32); if (t) { POLL(); goto L_00294B64; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00294BB0(Ctx *c) { /* func_00294BB0 */
ENTER(0x294bb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x294bcc); SET64(17, RD(4) + RD(0)); F_00287BC8(c);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00294BF0; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(5, RD(5) | 0x11a);
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00294BF0:;
SET32(3, RW(17) + 14072);
SET64(2, RD(16) + RD(0));
SET32(4, RW(17) + 13880);
L_00294BFC:;
SET64(5, rd64(c, (RW(4) + 0)));
SET64(6, rd64(c, (RW(4) + 8)));
SET64(7, rd64(c, (RW(4) + 16)));
SET64(8, rd64(c, (RW(4) + 24)));
wr64(c, (RW(2) + 0), RD(5));
wr64(c, (RW(2) + 8), RD(6));
wr64(c, (RW(2) + 16), RD(7));
wr64(c, (RW(2) + 24), RD(8));
SET32(4, RW(4) + 32);
{ int t = RD(4) != RD(3); SET32(2, RW(2) + 32); if (t) { POLL(); goto L_00294BFC; } }
SET32(12, RW(16) + 8);
SET32(10, RW(0) + 1);
SET64(11, RD(12) + RD(0));
SET32(9, RW(16) + 48);
L_00294C40:;
SET64(3, rd64(c, (RW(9) + -16)));
SET32(6, RW(10) << 5);
SET64(2, rd64(c, (RW(16) + 0)));
SET32(6, RW(11) + RW(6));
SET64(7, (s32)rd32(c, (RW(9) + 8)));
SET32(10, RW(10) + 1);
SET64(2, RD(2) + RD(3));
SET64(4, (s32)rd32(c, (RW(16) + 24)));
wr64(c, (RW(16) + 0), RD(2));
SET64(8, RSD(10) < (s64)4);
SET32(4, RW(4) + RW(7));
SET64(5, rd64(c, (RW(6) + 0)));
SET64(3, rd64(c, (RW(11) + 0)));
wr32(c, (RW(16) + 24), RW(4));
SET64(2, RSD(5) < RSD(3));
if (RD(2) != 0) SET64(3, RD(5));
wr64(c, (RW(12) + 0), RD(3));
SET64(4, rd64(c, (RW(9) + 0)));
SET32(9, RW(9) + 32);
SET64(2, rd64(c, (RW(16) + 16)));
SET64(3, RSD(2) < RSD(4));
if (RD(3) != 0) SET64(2, RD(4));
{ int t = RD(8) != RD(0); wr64(c, (RW(16) + 16), RD(2)); if (t) { POLL(); goto L_00294C40; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00294CB8(Ctx *c) { /* func_00294CB8 */
ENTER(0x294cb8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x294cdc); SET64(18, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x117); if (t) goto L_00294D10; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00294D10:;
SET64(31, 0x294d18); SET64(5, RD(18) + RD(0)); F_00294D38(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00294D38(Ctx *c) { /* func_00294D38 */
ENTER(0x294d38);
SET32(2, RW(5) << 4);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 7984)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(2) + 0))); goto L_00294D60; }
wr32(c, (RW(6) + 0), RW(0)); return;
L_00294D60:;
wr32(c, (RW(6) + 0), RW(2)); return;
}

void F_00294D68(Ctx *c) { /* func_00294D68 */
ENTER(0x294d68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x294d8c); SET64(18, RD(6) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x11c); if (t) goto L_00294DB8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00294DB8:;
SET64(2, (s32)rd32(c, (RW(16) + 120)));
{ int t = RD(2) == RD(0); SET32(2, RW(16) + 268); if (t) goto L_00294DD8; }
SET64(3, (s32)rd32(c, (RW(16) + 264)));
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(18) + 0), RW(3)); goto L_00294DE0;
L_00294DD8:;
wr32(c, (RW(17) + 0), RW(0));
wr32(c, (RW(18) + 0), RW(0));
L_00294DE0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00294E00(Ctx *c) { /* func_00294E00 */
ENTER(0x294e00);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 8), RW(5));
wr32(c, (RW(4) + 4), RW(0)); return;
}

void F_00294E10(Ctx *c) { /* func_00294E10 */
ENTER(0x294e10);
 return;
}

void F_00294E18(Ctx *c) { /* func_00294E18 */
ENTER(0x294e18);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x290000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET64(6, RD(0) + RD(0));
SET32(5, RW(2) + 22664);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x294e40); SET64(16, RD(4) + RD(0)); F_00295E50(c);
SET64(5, (s64)(s32)0x290000);
SET32(6, RW(0) + 1);
SET32(5, RW(5) + 22736);
SET64(31, 0x294e54); SET64(4, RD(16) + RD(0)); F_00295E50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x294e64); SET32(6, RW(0) + 2); F_00295E50(c);
SET64(5, (s64)(s32)0x290000);
SET32(5, RW(5) + 22832);
SET32(6, RW(0) + 3);
SET64(31, 0x294e78); SET64(4, RD(16) + RD(0)); F_00295E50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x294e88); SET32(6, RW(0) + 4); F_00295E50(c);
SET64(5, (s64)(s32)0x290000);
SET32(6, RW(0) + 5);
SET32(5, RW(5) + 22864);
SET64(31, 0x294e9c); SET64(4, RD(16) + RD(0)); F_00295E50(c);
wr32(c, (RW(17) + 24), RW(0));
SET64(31, 0x294ea8); SET32(4, RW(17) + 28); F_00295080(c);
SET32(4, RW(17) + 192);
SET64(31, 0x294eb4); SET64(5, RD(0) + RD(0)); F_00295038(c);
SET32(4, RW(17) + 60);
SET64(5, (s64)(s32)0x7fff0000);
SET64(31, 0x294ec4); SET64(5, RD(5) | 0xffff); F_00295038(c);
SET32(4, RW(17) + 104);
SET64(31, 0x294ed0); SET32(5, RW(0) + -1); F_00295038(c);
SET32(4, RW(17) + 148);
SET64(31, 0x294edc); SET32(5, RW(0) + -1); F_00295038(c);
SET32(4, RW(17) + 236);
SET64(31, 0x294ee8); SET32(5, RW(0) + -1); F_00295038(c);
SET32(4, RW(17) + 280);
SET64(5, (s64)(s32)0x7fff0000);
SET64(31, 0x294ef8); SET64(5, RD(5) | 0xffff); F_00295038(c);
wr32(c, (RW(17) + 324), RW(0));
SET32(2, RW(0) + -1);
wr32(c, (RW(17) + 328), RW(0));
wr32(c, (RW(17) + 352), RW(0));
SET32(4, RW(17) + 12);
wr32(c, (RW(17) + 356), RW(0));
SET32(3, RW(0) + 31);
wr32(c, (RW(17) + 360), RW(0));
wr64(c, (RW(17) + 344), RD(2));
wr64(c, (RW(17) + 336), RD(2));
SET32(2, RW(17) + 488);
L_00294F28:;
SET32(3, RW(3) + -1);
wr32(c, (RW(2) + 0), RW(0));
{ int t = RSD(3) >= 0; SET32(2, RW(2) + -4); if (t) { POLL(); goto L_00294F28; } }
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 496), RW(0));
wr32(c, (RW(17) + 500), RW(0));
SET32(3, RW(0) + 31);
wr32(c, (RW(17) + 504), RW(0));
wr32(c, (RW(17) + 492), RW(2));
SET32(2, RW(4) + 620);
L_00294F60:;
SET32(3, RW(3) + -1);
wr32(c, (RW(2) + 0), RW(0));
{ int t = RSD(3) >= 0; SET32(2, RW(2) + -4); if (t) { POLL(); goto L_00294F60; } }
SET32(7, RW(0) + -1);
wr32(c, (RW(17) + 680), RW(0));
wr32(c, (RW(17) + 716), RW(7));
SET64(6, (s64)(s32)0x7fff0000);
SET64(1, (s64)(s32)0xbf800000);
c->f[0].u = RW(1);
SET32(5, RW(0) + 1);
SET64(8, (s32)rd32(c, (RW(17) + 680)));
SET32(2, RW(0) + -5);
SET64(6, RD(6) | 0xffff);
SET32(3, RW(0) + 1000);
SET32(4, RW(0) + 100);
wr32(c, (RW(17) + 728), RW(2));
wr32(c, (RW(17) + 672), RW(6));
wr32(c, (RW(17) + 732), RW(0));
wr32(c, (RW(17) + 684), RW(3));
wr32(c, (RW(17) + 736), RW(5));
wr32(c, (RW(17) + 700), RW(4));
wr32(c, (RW(17) + 712), c->f[0].u);
wr32(c, (RW(17) + 720), RW(8));
wr32(c, (RW(17) + 1464), RW(0));
wr32(c, (RW(17) + 740), RW(7));
wr32(c, (RW(17) + 636), RW(2));
wr32(c, (RW(17) + 640), RW(5));
wr32(c, (RW(17) + 644), RW(2));
wr32(c, (RW(17) + 648), RW(5));
wr32(c, (RW(17) + 652), RW(7));
wr32(c, (RW(17) + 656), RW(5));
wr32(c, (RW(17) + 660), RW(2));
wr32(c, (RW(17) + 664), RW(6));
wr32(c, (RW(17) + 668), RW(0));
wr32(c, (RW(17) + 676), RW(0));
wr32(c, (RW(17) + 688), RW(0));
wr32(c, (RW(17) + 692), RW(0));
wr32(c, (RW(17) + 696), RW(5));
wr32(c, (RW(17) + 704), c->f[0].u);
wr32(c, (RW(17) + 708), RW(0));
wr32(c, (RW(17) + 724), RW(0));
wr32(c, (RW(17) + 744), RW(0));
wr32(c, (RW(17) + 1456), RW(0));
wr32(c, (RW(17) + 1460), RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00295038(Ctx *c) { /* func_00295038 */
ENTER(0x295038);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(4, RW(16) + 4);
SET64(31, 0x29505c); wr32(c, (RW(16) + 0), RW(0)); F_00295080(c);
wr32(c, (RW(16) + 36), RW(17));
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 16)));
wr32(c, (RW(16) + 40), RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_00295080(Ctx *c) { /* func_00295080 */
ENTER(0x295080);
wr16(c, (RW(4) + 30), (u16)RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr16(c, (RW(4) + 28), (u16)RW(0)); return;
}

void F_002950A8(Ctx *c) { /* func_002950A8 */
ENTER(0x2950a8);
SET64(8, RD(4) + RD(0));
SET32(2, RW(0) + -5);
SET64(6, (s32)rd32(c, (RW(8) + 660)));
{ int t = RD(6) != RD(2); SET64(10, RD(5) + RD(0)); if (t) goto L_002950C8; }
wr32(c, (RW(8) + 660), RW(10)); return;
L_002950C8:;
SET32(7, RW(10) - RW(6));
{ int t = RD(7) == RD(0); SET64(5, (s64)(s32)0x7fff0000); if (t) goto L_0029513C; }
SET64(3, (s32)rd32(c, (RW(8) + 668)));
SET64(2, (s32)rd32(c, (RW(8) + 672)));
SET64(5, RD(5) | 0xffff);
SET64(6, RSD(7) < RSD(3));
SET64(9, (s32)rd32(c, (RW(8) + 664)));
SET64(4, RSD(2) < RSD(7));
if (RD(6) == 0) SET64(3, RD(7));
if (RD(4) == 0) SET64(2, RD(7));
wr32(c, (RW(8) + 660), RW(10));
wr32(c, (RW(8) + 668), RW(3));
{ int t = RD(9) == RD(5); wr32(c, (RW(8) + 672), RW(2)); if (t) goto L_00295138; }
SET64(2, RSD(7) < RSD(9));
if (RD(2) == RD(0)) { wr32(c, (RW(8) + 664), RW(7)); goto L_0029513C; }
SET32(2, RW(9) - RW(7));
SET32(4, RW(2) + 7);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(4));
SET32(2, RSW(2) >> 3);
{ int t = RD(2) == RD(0); SET32(2, RW(9) - RW(2)); if (t) goto L_00295138; }
wr32(c, (RW(8) + 664), RW(2)); return;
L_00295138:;
wr32(c, (RW(8) + 664), RW(7));
L_0029513C:;
 return;
}

void F_00295148(Ctx *c) { /* func_00295148 */
ENTER(0x295148);
SET64(6, RD(5) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 660)));
SET64(2, (s32)rd32(c, (RW(4) + 664)));
SET64(3, (s32)rd32(c, (RW(4) + 668)));
SET32(2, RW(5) + RW(2));
SET64(4, RSD(6) < RSD(2));
SET32(5, RW(5) + RW(3));
{ int t = RD(4) != RD(0); SET64(3, RD(2) + RD(0)); if (t) goto L_0029517C; }
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, RSD(6) < RSD(5));
SET64(3, RD(3) | 0xffff);
if (RD(2) != 0) SET64(3, RD(5));
L_0029517C:;
SET64(2, RD(3) + RD(0)); return;
}

void F_00295188(Ctx *c) { /* func_00295188 */
ENTER(0x295188);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(3) + -1432);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 7);
wr64(c, (RW(29) + 16), RD(31));
SET32(16, RW(3) + 84);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_002951B8:;
{ int t = RD(4) == RD(0); SET32(16, RW(16) + 4); if (t) goto L_002951D4; }
SET64(2, (s32)rd32(c, (RW(4) + 76)));
if (RD(2) == RD(0)) { SET32(17, RW(17) + -1); goto L_002951D8; }
SET64(31, 0x2951d4);  F_002951F8(c);
L_002951D4:;
SET32(17, RW(17) + -1);
L_002951D8:;
if (RSD(17) >= 0) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_002951B8; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002951F8(Ctx *c) { /* func_002951F8 */
ENTER(0x2951f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29520c); SET64(16, RD(4) + RD(0)); F_00295248(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x295218); SET32(5, RW(0) + 71); F_00294A30(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00295238; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00295DD0(c); return; }
L_00295238:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00295248(Ctx *c) { /* func_00295248 */
ENTER(0x295248);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x295264); SET32(17, RW(16) + 3368); F_002952B8(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00295280; }
SET64(2, (s32)rd32(c, (RW(17) + 680)));
SET64(3, (s32)rd32(c, (RW(17) + 684)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(17) + 680), RW(2));
L_00295280:;
SET64(31, 0x295288);  F_002952F0(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_002952A4; }
SET64(2, (s32)rd32(c, (RW(17) + 716)));
SET64(3, (s32)rd32(c, (RW(17) + 684)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(17) + 716), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_002952A4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002952B8(Ctx *c) { /* func_002952B8 */
ENTER(0x2952b8);
SET64(5, RD(4) + RD(0));
SET32(4, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(5) + 72)));
SET64(2, RD(0) + RD(0));
{ int t = RD(3) != RD(4); SET32(6, RW(5) + 2384); if (t) goto L_002952E4; }
SET64(3, (s32)rd32(c, (RW(5) + 80)));
{ int t = RD(3) != RD(0);  if (t) goto L_002952E4; }
SET64(2, (s32)rd32(c, (RW(6) + 28)));
SET64(2, RD(2) < (u64)(s64)1);
L_002952E4:;
 return;
}

void F_002952F0(Ctx *c) { /* func_002952F0 */
ENTER(0x2952f0);
SET64(3, (s32)rd32(c, (RW(5) + 716)));
SET32(6, RW(0) + -1);
{ int t = RD(3) == RD(6); SET64(2, RD(0) + RD(0)); if (t) goto L_0029530C; }
SET64(2, (s32)rd32(c, (RW(4) + 76)));
SET64(2, RD(2) ^ 0x4);
SET64(2, RD(2) < (u64)(s64)1);
L_0029530C:;
 return;
}

void F_00295318(Ctx *c) { /* func_00295318 */
ENTER(0x295318);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x295330); SET32(5, RW(0) + 71); F_00294A30(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_00295348; }
SET64(2, (s32)rd32(c, (RW(16) + 680)));
wr32(c, (RW(16) + 720), RW(2)); goto L_00295350;
L_00295348:;
SET64(2, (s32)rd32(c, (RW(16) + 732)));
wr32(c, (RW(16) + 720), RW(2));
L_00295350:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00295360(Ctx *c) { /* func_00295360 */
ENTER(0x295360);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
SET32(5, RW(0) + 71);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(2) + -1432);
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x295394); SET64(17, RD(6) + RD(0)); F_00294A30(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002953C0; }
SET64(2, (s32)rd32(c, (RW(16) + 720)));
SET64(3, (s32)rd32(c, (RW(16) + 680)));
SET32(3, RW(3) - RW(2));
wr32(c, (RW(17) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(19) + 8)));
wr32(c, (RW(18) + 0), RW(2)); goto L_002953D8;
L_002953C0:;
SET64(2, (s32)rd32(c, (RW(16) + 732)));
SET64(3, (s32)rd32(c, (RW(16) + 720)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(17) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 736)));
wr32(c, (RW(18) + 0), RW(3));
L_002953D8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002953F8(Ctx *c) { /* func_002953F8 */
ENTER(0x2953f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29540c); SET64(16, RD(4) + RD(0)); F_00295438(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00295424; }
SET64(31, 0x295420); SET64(5, RD(5) | 0x222); F_002879A8(c);
SET32(2, RW(0) + 1);
L_00295424:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00295438(Ctx *c) { /* func_00295438 */
ENTER(0x295438);
SET32(29, RW(29) + -48);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x295454); SET64(16, RD(4) + RD(0)); F_00294A30(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 51); if (t) goto L_002954A4; }
SET64(31, 0x295468);  F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET64(17, RD(2) + RD(0));
SET32(5, RW(4) + 3368);
SET64(6, RD(29) + RD(0));
{ int t = RD(17) == RD(0); SET32(7, RW(29) + 4); if (t) goto L_002954A4; }
SET64(31, 0x295488);  F_00295360(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
if (RD(3) == RD(0)) { rt_break(c, 0x295494); goto L_00295498; }
L_00295498:;
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
SET64(2, RSD(17) < RSD(2));
L_002954A4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002954B8(Ctx *c) { /* func_002954B8 */
ENTER(0x2954b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 8), RD(31));
SET64(16, rd64(c, (RW(4) + 344)));
{ int t = RSD(16) < 0; SET64(4, RD(16) + RD(0)); if (t) goto L_00295508; }
SET64(31, 0x2954dc);  F_0011F910(c);
SET64(5, (s64)(s32)0x10000);
SET64(5, RD(5) | 0x5f90);
SET64(31, 0x2954ec); SET64(4, RD(2) + RD(0)); F_0011F988(c);
SET64(3, (s64)(s32)0x410000);
SET64(4, RD(2) << 32);
SET64(4, RSD(4) >> 32);
SET64(5, (s64)(s32)0x410000);
wr64(c, (RW(3) + -1272), RD(16));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(5) + -1264), RW(4));
L_00295508:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00295518(Ctx *c) { /* func_00295518 */
ENTER(0x295518);
SET32(29, RW(29) + -16);
SET32(3, RW(4) + 280);
wr64(c, (RW(29) + 0), RD(16));
SET32(4, RW(4) + 236);
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); wr32(c, (RW(6) + 0), RW(2)); if (t) goto L_00295548; }
SET64(6, (s32)rd32(c, (RW(3) + 40)));
SET64(16, (s32)rd32(c, (RW(3) + 36))); goto L_00295568;
L_00295548:;
SET64(2, (s32)rd32(c, (RW(4) + 36)));
{ int t = RSD(2) < 0; SET64(16, RD(2) + RD(0)); if (t) goto L_00295560; }
SET64(6, (s32)rd32(c, (RW(4) + 40))); goto L_00295568;
L_00295560:;
SET32(2, RW(0) + -1); goto L_00295580;
L_00295568:;
SET64(31, 0x295570); SET64(4, RD(16) + RD(0)); F_002784E8(c);
SET64(3, (s64)(s32)0x410000);
SET64(4, (s64)(s32)0x410000);
wr32(c, (RW(3) + -1260), RW(16));
wr32(c, (RW(4) + -1256), RW(2));
L_00295580:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00295590(Ctx *c) { /* func_00295590 */
ENTER(0x295590);
wr32(c, (RW(4) + 328), RW(6));
wr32(c, (RW(4) + 324), RW(5)); return;
}

void F_002955A0(Ctx *c) { /* func_002955A0 */
ENTER(0x2955a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2955c4); SET64(18, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x121); if (t) goto L_002955F8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_002955F8:;
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00295618(c); return; }
}

void F_00295618(Ctx *c) { /* func_00295618 */
ENTER(0x295618);
SET32(29, RW(29) + -48);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(2) + 3648);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x29564c); SET32(19, RW(2) + 3368); F_00295740(c);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3); SET64(20, RD(2) + RD(0)); if (t) goto L_002956A4; }
SET64(2, (s32)rd32(c, (RW(19) + 328)));
if (RD(5) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_00295680; }
SET64(3, (s32)rd32(c, (RW(19) + 324)));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(18) + 0), RW(2)); goto L_002956A0;
L_00295680:;
if (RD(2) == RD(0)) { SET64(2, RD(20) + RD(0)); goto L_002956A4; }
SET64(6, (s32)rd32(c, (RW(17) + 40)));
SET64(31, 0x295694); SET64(4, (s32)rd32(c, (RW(17) + 36))); F_002784E8(c);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET32(3, RW(3) + RW(2));
wr32(c, (RW(18) + 0), RW(3));
L_002956A0:;
SET64(2, RD(20) + RD(0));
L_002956A4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_002956C8(Ctx *c) { /* func_002956C8 */
ENTER(0x2956c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2956ec); SET64(18, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x127); if (t) goto L_00295720; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00295720:;
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00295740(c); return; }
}

void F_00295740(Ctx *c) { /* func_00295740 */
ENTER(0x295740);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00295758(c); return; }
}

void F_00295758(Ctx *c) { /* func_00295758 */
ENTER(0x295758);
SET32(4, RW(4) + 3368);
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 652)));
wr32(c, (RW(5) + 0), RW(3));
SET64(5, (s32)rd32(c, (RW(4) + 656)));
wr32(c, (RW(6) + 0), RW(5)); return;
}

void F_00295778(Ctx *c) { /* func_00295778 */
ENTER(0x295778);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29579c); SET64(18, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x128); if (t) goto L_002957D0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_002957D0:;
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002957F0(c); return; }
}

static void B_002957F0(Ctx *c, u32 entry) { /* func_002957F0 */
ENTER(entry);
switch (entry) { case 0x295838: goto L_00295838; }
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x29581c); SET64(19, RD(6) + RD(0)); F_00287C60(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x295828); SET32(5, RW(0) + 15); F_00294A30(c);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) << 2);
SET32(16, RW(17) + 3368);
SET32(16, RW(16) + RW(2));
L_00295838:;
SET64(5, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0); SET64(6, RD(19) + RD(0)); if (t) goto L_00295850; }
SET64(2, (s64)(s32)0x290000);
SET32(2, RW(2) + 22664);
L_00295850:;
{ u32 t = RW(2); SET64(31, 0x295858);  rt_call(c, t); }
SET64(4, RD(29) + RD(0));
SET64(31, 0x295864); SET64(16, RD(2) + RD(0)); F_00287C78(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}
void F_002957F0(Ctx *c) { B_002957F0(c, 0x2957f0); }
void F_00295838(Ctx *c) { B_002957F0(c, 0x295838); }

void F_00295888(Ctx *c) { /* func_00295888 */
ENTER(0x295888);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2958a4); SET64(17, RD(6) + RD(0)); F_00295A48(c);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 1); if (t) goto L_002958BC; }
SET32(2, RW(0) + -2);
wr32(c, (RW(16) + 0), RW(2));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(17) + 0), RW(3));
L_002958BC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002958D0(Ctx *c) { /* func_002958D0 */
ENTER(0x2958d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2958f4); SET64(18, RD(6) + RD(0)); F_00295A48(c);
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 3368); if (t) goto L_00295914; }
SET64(3, (s32)rd32(c, (RW(16) + 680)));
SET64(4, (s64)(s32)0x410000);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(17) + 0), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + -1424)));
wr32(c, (RW(18) + 0), RW(3));
L_00295914:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00295930(Ctx *c) { /* func_00295930 */
ENTER(0x295930);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x295940);  F_00295A48(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_00295950(Ctx *c) { /* func_00295950 */
ENTER(0x295950);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x29597c); SET64(20, RD(6) + RD(0)); F_00295A48(c);
{ int t = RD(2) == RD(0); SET32(16, RW(17) + 3368); if (t) goto L_00295A28; }
SET64(2, (s32)rd32(c, (RW(16) + 724)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 744))); goto L_002959A8; }
SET32(2, RW(0) + -2);
SET32(3, RW(0) + 1);
wr32(c, (RW(19) + 0), RW(2));
SET64(2, RD(0) + RD(0)); goto L_00295A24;
L_002959A8:;
SET64(5, RD(29) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2959b4); SET32(6, RW(29) + 4); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2959c0); SET64(18, RD(2) + RD(0)); F_002952B8(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_00295A08; }
SET64(3, (s32)rd32(c, (RW(16) + 728)));
SET32(2, RW(0) + -5);
{ int t = RD(3) == RD(2); SET64(3, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_00295A0C; }
SET64(2, (s32)rd32(c, (RW(16) + 728)));
SET32(3, RW(4) - RW(2));
{ int t = RSD(3) >= 0;  if (t) goto L_002959F4; }
SET64(2, (s32)rd32(c, (RW(16) + 740)));
SET32(2, RW(3) + RW(2));
SET32(3, RW(2) + 1);
L_002959F4:;
SET64(2, (s32)rd32(c, (RW(16) + 732)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(16) + 732), RW(2));
SET64(3, (s32)rd32(c, (RW(29) + 4))); goto L_00295A0C;
L_00295A08:;
SET64(3, (s32)rd32(c, (RW(29) + 4)));
L_00295A0C:;
SET64(2, RD(18) + RD(0));
wr32(c, (RW(16) + 728), RW(4));
wr32(c, (RW(16) + 736), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 732)));
wr32(c, (RW(19) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(16) + 736)));
L_00295A24:;
wr32(c, (RW(20) + 0), RW(3));
L_00295A28:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_00295A48(Ctx *c) { /* func_00295A48 */
ENTER(0x295a48);
SET64(3, (s32)rd32(c, (RW(4) + 72)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_00295A90; }
SET32(2, RW(0) + -4);
{ int t = RD(3) == RD(2);  if (t) goto L_00295A90; }
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2);  if (t) goto L_00295A90; }
SET32(2, RW(0) + -6);
{ int t = RD(3) == RD(2); SET32(3, RW(0) + -1); if (t) goto L_00295A90; }
SET32(4, RW(0) + 1);
wr32(c, (RW(5) + 0), RW(3));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(6) + 0), RW(4)); return;
L_00295A90:;
SET32(2, RW(0) + 1); return;
}

void F_00295A98(Ctx *c) { /* func_00295A98 */
ENTER(0x295a98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x295aac); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET32(6, RW(16) + 3368);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x122); if (t) goto L_00295AD0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00295AD0:;
SET64(3, (s32)rd32(c, (RW(6) + 676)));
SET32(4, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 8)));
SET32(3, RW(3) + 1);
wr32(c, (RW(6) + 676), RW(3));
wr32(c, (RW(16) + 68), RW(4));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00295AF8(Ctx *c) { /* func_00295AF8 */
ENTER(0x295af8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x295b14); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00295B38; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x124);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00295B38:;
wr32(c, (RW(16) + 3392), RW(17));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00295B50(Ctx *c) { /* func_00295B50 */
ENTER(0x295b50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0026BF08(c); return; }
}

void F_00295B68(Ctx *c) { /* func_00295B68 */
ENTER(0x295b68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x295b84); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET32(6, RW(0) + 4);
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x123); if (t) goto L_00295BB0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00295BB0:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x295bbc); SET64(5, RD(17) + RD(0)); F_00295E50(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 15);
{ int t = RD(17) == RD(0); SET32(6, RW(0) + 4); if (t) goto L_00295BD4; }
SET64(31, 0x295bd4);  F_00294868(c);
L_00295BD4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00295BF0(Ctx *c) { /* func_00295BF0 */
ENTER(0x295bf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x295c20); SET64(20, RD(6) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00295C50; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x129);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_002879A8(c); return; }
L_00295C50:;
{ int t = RD(18) == RD(0); SET32(16, RW(17) + 3368); if (t) goto L_00295C90; }
wr32(c, (RW(16) + 744), RW(19));
SET32(5, RW(0) + 15);
wr32(c, (RW(16) + 724), RW(18));
SET32(6, RW(0) + 5);
wr32(c, (RW(16) + 740), RW(20));
SET64(31, 0x295c74); SET64(4, RD(17) + RD(0)); F_00294868(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 71);
SET64(31, 0x295c84); SET64(6, RD(0) + RD(0)); F_00294868(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_00295CC0;
L_00295C90:;
SET32(5, RW(0) + 71);
SET32(6, RW(0) + 1);
SET64(31, 0x295ca0); SET64(4, RD(17) + RD(0)); F_00294868(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 15);
SET64(31, 0x295cb0); SET32(6, RW(0) + 1); F_00294868(c);
wr32(c, (RW(16) + 744), RW(19));
wr32(c, (RW(16) + 740), RW(20));
wr32(c, (RW(16) + 724), RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00295CC0:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00295CE0(Ctx *c) { /* func_00295CE0 */
ENTER(0x295ce0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00295D50; }
SET64(2, (s64)(s32)0x410000);
SET64(18, RD(0) + RD(0));
SET32(17, RW(2) + -1348);
SET32(16, RW(0) + 7);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
L_00295D10:;
SET32(17, RW(17) + 4);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00295D28; }
SET64(31, 0x295d24);  F_00295D68(c);
if (RD(2) != 0) SET64(18, RD(2));
L_00295D28:;
SET32(16, RW(16) + -1);
if (RSD(16) >= 0) { SET64(2, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_00295D10; } }
SET64(2, RD(18) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
L_00295D50:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00295D68(c); return; }
}

void F_00295D68(Ctx *c) { /* func_00295D68 */
ENTER(0x295d68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x295d7c); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x12a); if (t) goto L_00295DA0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00295DA0:;
SET64(31, 0x295da8); SET32(5, RW(0) + 71); F_00294A30(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00295DBC; }
SET64(31, 0x295dbc);  F_00295DD0(c);
L_00295DBC:;
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00295DD0(Ctx *c) { /* func_00295DD0 */
ENTER(0x295dd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x295df4); SET32(16, RW(17) + 3368); F_002957F0(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(4, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 652)));
{ int t = RD(3) != RD(2); SET64(5, RD(16) + RD(0)); if (t) goto L_00295E18; }
SET64(3, (s32)rd32(c, (RW(16) + 656)));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_00295E34; }
L_00295E18:;
SET64(31, 0x295e20);  F_00295318(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(16) + 652), RW(2));
wr32(c, (RW(16) + 656), RW(3));
SET32(2, RW(0) + 1);
L_00295E34:;
SET64(16, rd64(c, (RW(29) + 16)));
wr32(c, (RW(17) + 68), RW(2));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 48); return;
}

void F_00295E50(Ctx *c) { /* func_00295E50 */
ENTER(0x295e50);
SET32(6, RW(6) << 2);
SET32(4, RW(4) + RW(6));
wr32(c, (RW(4) + 3368), RW(5)); return;
}

void F_00295E60(Ctx *c) { /* func_00295E60 */
ENTER(0x295e60);
SET32(29, RW(29) + -32);
SET64(8, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x221);
SET64(2, (s32)rd32(c, (RW(8) + 0)));
SET64(6, RD(17) + RD(0));
SET64(7, (s32)rd32(c, (RW(8) + 4)));
SET32(3, RW(2) << 1);
SET32(2, RW(2) << 2);
SET32(3, RW(3) + RW(7));
SET32(3, RW(3) << 2);
SET64(1, (s64)(s32)0x4b0000);
SET32(1, RW(1) + RW(2));
SET64(2, (s32)rd32(c, (RW(1) + 5664)));
SET64(1, (s64)(s32)0x4b0000);
SET32(1, RW(1) + RW(3));
SET64(3, (s32)rd32(c, (RW(1) + 5704)));
{ int t = RD(3) != RD(0); SET64(7, RD(16) + RD(0)); if (t) goto L_00295EE0; }
SET64(31, 0x295ecc);  F_002879A8(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(0));
wr32(c, (RW(16) + 0), RW(3)); goto L_00295EEC;
L_00295EE0:;
SET64(4, RD(2) + RD(0));
{ u32 t = RW(3); SET64(31, 0x295eec); SET64(5, RD(8) + RD(0)); rt_call(c, t); }
L_00295EEC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00295F00(Ctx *c) { /* func_00295F00 */
ENTER(0x295f00);
SET64(10, (s32)rd32(c, (RW(5) + 8)));
SET64(12, (s32)rd32(c, (RW(5) + 12)));
mul_s(c, 0, 10, RSW(10), RSW(4));
SET64(2, (s32)rd32(c, (RW(5) + 24)));
SET64(11, (s32)rd32(c, (RW(5) + 20)));
mul_s(c, 0, 12, RSW(12), RSW(4));
SET64(13, (s16)rd16(c, (RW(5) + 30)));
SET32(11, RW(11) + RW(2));
SET64(9, (s32)rd32(c, (RW(5) + 16)));
SET32(2, RW(10) << 3);
SET32(3, RW(11) << 5);
SET32(5, RW(13) << 5);
SET32(2, RW(2) - RW(10));
mul_s(c, 0, 9, RSW(9), RSW(4));
SET32(5, RW(5) - RW(13));
SET32(2, RW(2) << 5);
SET32(3, RW(3) - RW(11));
SET32(8, RW(12) << 4);
SET32(2, RW(2) + RW(10));
SET32(8, RW(8) - RW(12));
SET32(5, RW(5) << 2);
SET32(3, RW(3) << 2);
SET32(5, RW(5) + RW(13));
SET32(3, RW(3) + RW(11));
SET32(2, RW(2) << 4);
SET32(8, RW(8) << 2);
SET32(5, RW(5) << 2);
SET32(2, RW(2) + RW(8));
SET32(3, RW(3) << 3);
SET32(9, RW(9) + RW(5));
SET32(2, RW(2) + RW(3));
SET32(9, RW(9) + RW(2));
wr32(c, (RW(6) + 0), RW(9));
wr32(c, (RW(7) + 0), RW(4)); return;
}

void F_00295F90(Ctx *c) { /* func_00295F90 */
ENTER(0x295f90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET32(4, RW(0) + 24000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x295fb0); SET64(16, RD(7) + RD(0)); F_00295F00(c);
wr32(c, (RW(16) + 0), RW(17));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void F_00295FC8(Ctx *c) { /* func_00295FC8 */
ENTER(0x295fc8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET32(4, RW(0) + 30000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x295fe8); SET64(16, RD(7) + RD(0)); F_00295F00(c);
wr32(c, (RW(16) + 0), RW(17));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void F_00296000(Ctx *c) { /* func_00296000 */
ENTER(0x296000);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET64(4, RD(0) | 0xea60);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x296020); SET64(16, RD(7) + RD(0)); F_00295F00(c);
wr32(c, (RW(16) + 0), RW(17));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void F_00296038(Ctx *c) { /* func_00296038 */
ENTER(0x296038);
SET64(8, (s32)rd32(c, (RW(5) + 12)));
SET32(11, RW(0) + 10);
SET64(12, (s32)rd32(c, (RW(5) + 16)));
SET64(2, (s64)(s32)0x10000);
div_s(c, 0, RSW(8), RSW(11));
SET64(10, (s32)rd32(c, (RW(5) + 8)));
SET64(2, RD(2) | 0x5114);
SET32(9, RW(0) + 1438);
SET32(3, RW(12) << 1);
if (RD(11) == RD(0)) { rt_break(c, 0x296060); goto L_00296064; }
L_00296064:;
SET32(3, RW(3) + RW(12));
SET64(12, (s32)rd32(c, (RW(5) + 20)));
SET32(3, RW(3) << 2);
SET64(13, c->lo.d[0]);
mul_s(c, 0, 10, RSW(10), RSW(2));
mul_s(c, 0, 8, RSW(8), RSW(9));
SET64(9, (s32)rd32(c, (RW(5) + 24)));
SET64(2, (s16)rd16(c, (RW(5) + 30)));
SET32(3, RW(3) + RW(13));
SET32(3, RW(3) << 1);
SET32(12, RW(12) + RW(9));
SET32(5, RW(2) << 5);
SET32(10, RW(10) + RW(8));
SET32(5, RW(5) - RW(2));
SET32(3, RW(3) + RW(10));
SET32(5, RW(5) << 2);
SET32(3, RW(3) + RW(12));
SET32(5, RW(5) + RW(2));
SET32(2, RW(3) << 5);
SET32(5, RW(5) << 2);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(5));
wr32(c, (RW(6) + 0), RW(2));
wr32(c, (RW(7) + 0), RW(4)); return;
}

void F_002960D8(Ctx *c) { /* func_002960D8 */
ENTER(0x2960d8);
SET64(9, (s32)rd32(c, (RW(5) + 12)));
SET32(11, RW(0) + 10);
SET64(13, (s32)rd32(c, (RW(5) + 8)));
SET64(2, (s64)(s32)0x10000);
div_s(c, 0, RSW(9), RSW(11));
SET64(10, (s32)rd32(c, (RW(5) + 16)));
SET64(2, RD(2) | 0xa574);
SET32(3, RW(0) + 1798);
mul_s(c, 1, 9, RSW(9), RSW(3));
SET32(8, RW(10) << 4);
if (RD(11) == RD(0)) { rt_break(c, 0x296104); goto L_00296108; }
L_00296108:;
SET32(8, RW(8) - RW(10));
SET64(12, (s32)rd32(c, (RW(5) + 20)));
SET64(10, (s32)rd32(c, (RW(5) + 24)));
SET32(12, RW(12) + RW(10));
SET64(14, c->lo.d[0]);
mul_s(c, 0, 13, RSW(13), RSW(2));
SET64(2, (s16)rd16(c, (RW(5) + 30)));
SET32(8, RW(8) + RW(14));
SET32(8, RW(8) << 1);
SET32(3, RW(2) << 5);
SET32(13, RW(13) + RW(9));
SET32(3, RW(3) - RW(2));
SET32(8, RW(8) + RW(13));
SET32(3, RW(3) << 2);
SET32(8, RW(8) + RW(12));
SET32(3, RW(3) + RW(2));
SET32(2, RW(8) << 5);
SET32(3, RW(3) << 2);
SET32(2, RW(2) - RW(8));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(8));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(6) + 0), RW(2));
wr32(c, (RW(7) + 0), RW(4)); return;
}

void F_00296170(Ctx *c) { /* func_00296170 */
ENTER(0x296170);
SET64(8, (s32)rd32(c, (RW(5) + 12)));
SET32(12, RW(0) + 10);
SET64(11, (s32)rd32(c, (RW(5) + 16)));
SET64(9, (s64)(s32)0x30000);
div_s(c, 0, RSW(8), RSW(12));
SET64(10, (s32)rd32(c, (RW(5) + 8)));
SET64(9, RD(9) | 0x4b54);
SET32(2, RW(8) << 3);
SET32(3, RW(11) << 4);
SET32(2, RW(2) - RW(8));
SET32(3, RW(3) - RW(11));
SET64(11, (s32)rd32(c, (RW(5) + 24)));
SET32(8, RW(2) << 8);
SET32(3, RW(3) << 1);
SET32(2, RW(2) + RW(8));
SET64(8, (s16)rd16(c, (RW(5) + 30)));
SET32(2, RW(2) << 1);
if (RD(12) == RD(0)) { rt_break(c, 0x2961b8); goto L_002961BC; }
L_002961BC:;
SET64(13, c->lo.d[0]);
mul_s(c, 0, 10, RSW(10), RSW(9));
SET32(3, RW(3) + RW(13));
SET64(9, (s32)rd32(c, (RW(5) + 20)));
SET32(3, RW(3) << 1);
SET32(5, RW(8) << 5);
SET32(9, RW(9) + RW(11));
SET32(5, RW(5) - RW(8));
SET32(10, RW(10) + RW(2));
SET32(5, RW(5) << 2);
SET32(3, RW(3) + RW(10));
SET32(5, RW(5) + RW(8));
SET32(3, RW(3) + RW(9));
SET32(5, RW(5) << 2);
SET32(2, RW(3) << 5);
SET32(2, RW(2) - RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(5));
wr32(c, (RW(6) + 0), RW(2));
wr32(c, (RW(7) + 0), RW(4)); return;
}

void F_00296218(Ctx *c) { /* func_00296218 */
ENTER(0x296218);
SET32(29, RW(29) + -32);
SET64(2, RD(5) < (u64)(s64)2);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00296268; }
SET32(2, RW(0) + 2);
if (RD(5) != RD(2)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0029626C; }
SET64(5, RD(29) + RD(0));
SET64(31, 0x296248); SET32(6, RW(29) + 4); F_00296330(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x296258); SET64(6, (s32)rd32(c, (RW(29) + 4))); F_00296278(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x296268); SET64(6, (s32)rd32(c, (RW(29) + 4))); F_002962E0(c);
L_00296268:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0029626C:;
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00296278(Ctx *c) { /* func_00296278 */
ENTER(0x296278);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 16), RD(16));
SET32(16, RW(4) + 3368);
SET64(4, (s32)rd32(c, (RW(2) + -1424)));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x29629c);  F_002784E8(c);
SET64(4, RD(29) + RD(0));
SET64(31, 0x2962a8); SET64(17, RD(2) + RD(0)); F_00287C60(c);
SET64(3, (s32)rd32(c, (RW(16) + 680)));
SET64(4, RD(29) + RD(0));
SET32(3, RW(3) + RW(17));
wr32(c, (RW(16) + 680), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 716)));
SET32(2, RW(2) + RW(17));
SET64(31, 0x2962c8); wr32(c, (RW(16) + 716), RW(2)); F_00287C78(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002962E0(Ctx *c) { /* func_002962E0 */
ENTER(0x2962e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET32(16, RW(4) + 3368);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2962fc); SET64(4, (s32)rd32(c, (RW(16) + 736))); F_002784E8(c);
SET64(4, RD(29) + RD(0));
SET64(31, 0x296308); SET64(17, RD(2) + RD(0)); F_00287C60(c);
SET64(2, (s32)rd32(c, (RW(16) + 732)));
SET64(4, RD(29) + RD(0));
SET32(2, RW(2) + RW(17));
SET64(31, 0x29631c); wr32(c, (RW(16) + 732), RW(2)); F_00287C78(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00296330(Ctx *c) { /* func_00296330 */
ENTER(0x296330);
SET64(2, (s32)rd32(c, (RW(4) + 2336)));
{ int t = RD(2) != RD(0); SET32(3, RW(2) << 2); if (t) goto L_00296350; }
SET32(2, RW(0) + 29970);
wr32(c, (RW(5) + 0), RW(0));
wr32(c, (RW(6) + 0), RW(2)); return;
L_00296350:;
SET64(1, (s64)(s32)0x4b0000);
SET32(1, RW(1) + RW(3));
SET64(3, (s32)rd32(c, (RW(1) + 5664)));
SET32(2, RW(0) + 1000);
wr32(c, (RW(5) + 0), RW(2));
wr32(c, (RW(6) + 0), RW(3)); return;
}

void F_00296370(Ctx *c) { /* func_00296370 */
ENTER(0x296370);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x296394); wr32(c, (RW(17) + 0), RW(2)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002963B8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x11b);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_002963B8:;
SET64(3, (s32)rd32(c, (RW(16) + 2336)));
{ int t = RD(3) == RD(0); SET32(3, RW(3) << 2); if (t) goto L_002963D4; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + RW(3));
SET64(4, (s32)rd32(c, (RW(4) + 5664)));
wr32(c, (RW(17) + 0), RW(4));
L_002963D4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002963E8(Ctx *c) { /* func_002963E8 */
ENTER(0x2963e8);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29640c); wr32(c, (RW(17) + 0), RW(2)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00296430; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x118);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00296430:;
SET64(3, (s32)rd32(c, (RW(16) + 2336)));
{ int t = RD(3) == RD(0); SET32(4, RW(16) + 3368); if (t) goto L_00296460; }
SET32(2, RW(3) << 2);
SET64(5, (s32)rd32(c, (RW(4) + 684)));
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + RW(2));
SET64(4, (s32)rd32(c, (RW(4) + 5664)));
SET64(31, 0x296458); SET32(6, RW(0) + 1000); F_002784E8(c);
wr32(c, (RW(17) + 0), RW(2));
SET64(2, RD(0) + RD(0));
L_00296460:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00296478(Ctx *c) { /* func_00296478 */
ENTER(0x296478);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(5) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002964A0; }
SET64(6, (s32)rd32(c, (RW(5) + 24)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(5) + 20)));
SET32(29, RW(29) + 16); { F_002964B0(c); return; }
L_002964A0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002964B0(Ctx *c) { /* func_002964B0 */
ENTER(0x2964b0);
SET32(29, RW(29) + -32);
SET32(7, RW(4) + 2564);
wr64(c, (RW(29) + 16), RD(31));
SET64(3, (s32)rd32(c, (RW(7) + 56)));
{ int t = RD(3) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_002964D8; }
SET64(8, (s32)rd32(c, (RW(7) + 176)));
SET64(31, 0x2964d4); SET64(7, RD(29) + RD(0)); F_00296638(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_002964D8:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002964E8(Ctx *c) { /* func_002964E8 */
ENTER(0x2964e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29650c); SET64(18, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET32(6, RW(16) + 3368);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x125); if (t) goto L_00296538; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00296538:;
SET64(3, (s32)rd32(c, (RW(6) + 688)));
SET32(4, RW(0) + 1);
wr32(c, (RW(6) + 696), RW(17));
SET32(3, RW(3) + 1);
wr32(c, (RW(6) + 692), RW(18));
wr32(c, (RW(6) + 688), RW(3));
SET64(17, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 68), RW(4));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00296570(Ctx *c) { /* func_00296570 */
ENTER(0x296570);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2965a0); wr32(c, (RW(17) + 0), RW(0)); F_00287BC8(c);
SET64(4, RD(0) + RD(0));
SET64(5, (s64)(s32)0xff000000);
SET32(6, RW(16) + 2564);
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x126); if (t) goto L_002965D0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_002879A8(c); return; }
L_002965D0:;
SET64(3, (s32)rd32(c, (RW(6) + 56)));
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 76))); goto L_002965E8; }
SET32(3, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3)); goto L_00296618;
L_002965E8:;
SET32(3, RW(0) + 4);
if (RD(4) == RD(3)) { SET64(8, (s32)rd32(c, (RW(6) + 180))); goto L_00296600; }
wr32(c, (RW(17) + 0), RW(0)); goto L_00296618;
L_00296600:;
SET64(6, RD(18) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x296614); SET64(7, RD(17) + RD(0)); F_00296638(c);
SET64(2, RD(0) + RD(0));
L_00296618:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00296638(Ctx *c) { /* func_00296638 */
ENTER(0x296638);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(6) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(8) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x296680); SET32(21, RW(2) + -1432); F_00295758(c);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(6, RW(0) + 1);
SET64(1, (s64)(s32)0x461c0000);
SET64(1, RD(1) | 0x4000);
c->f[3].u = RW(1);
SET32(3, RW(0) + -2);
{ int t = RD(2) != RD(6); mul_s(c, 0, 4, RSW(2), RSW(16)); if (t) goto L_002966D0; }
SET64(2, (s32)rd32(c, (RW(29) + 0)));
if (RD(2) != RD(3)) { SET64(4, RD(18) + RD(0)); goto L_002966B8; }
wr32(c, (RW(17) + 0), RW(6)); goto L_00296760;
L_002966B8:;
SET64(5, RD(19) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(31, 0x2966c8); SET64(7, RD(17) + RD(0)); F_00296788(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00296764;
L_002966D0:;
SET64(3, (s32)rd32(c, (RW(21) + 8)));
c->f[0].u = RW(19);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[1].u = RW(20);
c->f[1].f = (f32)(s32)c->f[1].u;
div_s(c, 0, RSW(4), RSW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x2966ec); goto L_002966F0; }
L_002966F0:;
c->f[2].u = RW(2);
c->f[2].f = (f32)(s32)c->f[2].u;
SET64(2, (s32)rd32(c, (RW(29) + 0)));
c->f[0].f = fpu(F(0) * F(3));
SET64(5, (s32)rd32(c, (RW(18) + 2624)));
c->f[1].f = fpu_div(F(0), F(1));
c->f[12].u = c->f[1].u;
SET64(3, c->lo.d[0]);
SET32(2, RW(2) + RW(3));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) * F(3));
c->f[13].f = fpu_div(F(0), F(2));
{ int t = RD(5) == RD(6); wr32(c, (RW(29) + 0), RW(2)); if (t) goto L_00296750; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x296748); SET64(5, RD(17) + RD(0)); F_00296800(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00296764;
L_00296750:;
c->fcc = F(1) <= F(13);
if (!c->fcc) { wr32(c, (RW(17) + 0), RW(0)); goto L_00296760; }
wr32(c, (RW(17) + 0), RW(5));
L_00296760:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00296764:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_00296788(Ctx *c) { /* func_00296788 */
ENTER(0x296788);
SET32(29, RW(29) + -16);
SET32(8, RW(4) + 3368);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s64)(s32)0x410000);
SET64(4, RD(5) + RD(0));
SET64(5, RD(6) + RD(0));
SET64(3, (s32)rd32(c, (RW(8) + 716)));
{ int t = RSD(3) >= 0; SET32(2, RW(2) + -1432); if (t) goto L_002967C8; }
SET32(2, RW(0) + 1);
wr32(c, (RW(8) + 716), RW(0));
wr32(c, (RW(16) + 0), RW(2)); goto L_002967EC;
L_002967C8:;
SET64(6, (s32)rd32(c, (RW(8) + 716)));
SET64(31, 0x2967d4); SET64(7, (s32)rd32(c, (RW(2) + 8))); F_0026BF08(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_002967E8; }
wr32(c, (RW(16) + 0), RW(2)); goto L_002967EC;
L_002967E8:;
wr32(c, (RW(16) + 0), RW(0));
L_002967EC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00296800(Ctx *c) { /* func_00296800 */
ENTER(0x296800);
SET64(7, RD(4) + RD(0));
c->f[1].u = rd32(c, (RW(7) + 2748));
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu(F(13) + F(1));
c->fcc = F(0) < F(12);
{ int t = !c->fcc; SET32(6, RW(7) + 3368); if (t) goto L_00296828; }
wr32(c, (RW(5) + 0), RW(0)); return;
L_00296828:;
c->f[0].f = fpu(F(13) - F(1));
c->fcc = F(12) <= F(0);
{ int t = !c->fcc; SET64(2, (s64)(s32)0x410000); if (t) goto L_00296870; }
c->f[0].u = rd32(c, (RW(6) + 712));
SET32(2, RW(0) + 1);
c->fcc = F(0) == F(12);
{ int t = c->fcc; wr32(c, (RW(5) + 0), RW(2)); if (t) goto L_002968E4; }
c->f[0].u = rd32(c, (RW(6) + 704));
c->fcc = F(0) == F(12);
{ int t = c->fcc;  if (t) goto L_002968E4; }
SET64(2, (s32)rd32(c, (RW(6) + 700)));
wr32(c, (RW(6) + 704), c->f[12].u);
SET32(2, RW(2) + 1);
wr32(c, (RW(6) + 700), RW(2)); return;
L_00296870:;
SET64(4, RD(0) | 0xea24);
SET64(3, (s32)rd32(c, (RW(2) + -1424)));
{ int t = RD(3) != RD(4); SET64(8, RD(0) + RD(0)); if (t) goto L_0029689C; }
SET64(2, (s32)rd32(c, (RW(7) + 2336)));
SET64(2, RSD(2) < (s64)3);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(6) + 700))); goto L_002968A0; }
SET64(2, (s32)rd32(c, (RW(6) + 684)));
SET64(2, RD(2) ^ 0x3e8);
SET64(8, RD(2) < (u64)(s64)1);
L_0029689C:;
SET64(2, (s32)rd32(c, (RW(6) + 700)));
L_002968A0:;
SET64(2, RSD(8) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_002968B8; }
SET64(2, (s32)rd32(c, (RW(6) + 708))); goto L_002968D0;
L_002968B8:;
c->fcc = F(13) < F(12);
{ int t = !c->fcc; SET32(2, RW(0) + 1); if (t) goto L_002968D0; }
wr32(c, (RW(5) + 0), RW(0)); goto L_002968D4;
L_002968D0:;
wr32(c, (RW(5) + 0), RW(2));
L_002968D4:;
wr32(c, (RW(6) + 700), RW(0));
wr32(c, (RW(6) + 712), c->f[12].u);
SET64(2, (s32)rd32(c, (RW(5) + 0)));
wr32(c, (RW(6) + 708), RW(2));
L_002968E4:;
 return;
}

void F_002968F0(Ctx *c) { /* func_002968F0 */
ENTER(0x2968f0);
SET32(29, RW(29) + -48);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(5, (s32)rd32(c, (RW(3) + 2384)));
SET32(3, RW(3) + 3368);
SET64(16, (s32)rd32(c, (RW(3) + 640)));
{ int t = RD(5) == RD(0); SET64(17, (s32)rd32(c, (RW(3) + 636))); if (t) goto L_00296974; }
SET32(3, RW(0) + -5);
{ int t = RD(17) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00296974; }
SET64(5, RD(29) + RD(0));
SET64(31, 0x296934); SET32(6, RW(29) + 4); F_00295758(c);
SET64(3, RD(0) | 0xea24);
SET32(4, RW(16) << 5);
if (RD(3) == RD(0)) { rt_break(c, 0x296940); goto L_00296944; }
L_00296944:;
SET32(4, RW(4) - RW(16));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(4) << 2);
SET64(7, (s32)rd32(c, (RW(29) + 4)));
SET32(4, RW(4) + RW(16));
SET64(5, RD(16) + RD(0));
SET32(4, RW(4) << 4);
div_s(c, 0, RSW(4), RSW(3));
SET64(4, c->lo.d[0]);
SET64(31, 0x296970); SET32(4, RW(17) + RW(4)); F_0026BF08(c);
SET64(2, RD(0) < RD(2));
L_00296974:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00296988(Ctx *c) { /* func_00296988 */
ENTER(0x296988);
wr32(c, (RW(4) + 4052), RW(5)); return;
}

void F_00296990(Ctx *c) { /* func_00296990 */
ENTER(0x296990);
SET64(2, (s32)rd32(c, (RW(4) + 4052))); return;
}

void F_00296998(Ctx *c) { /* func_00296998 */
ENTER(0x296998);
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 1);
wr32(c, (RW(4) + 24), RW(0));
wr64(c, (RW(4) + 8), RD(2));
wr64(c, (RW(4) + 0), RD(0));
wr64(c, (RW(4) + 16), RD(0)); return;
}

void F_002969B8(Ctx *c) { /* func_002969B8 */
ENTER(0x2969b8);
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

void F_002969F8(Ctx *c) { /* func_002969F8 */
ENTER(0x2969f8);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(0) + RD(0));
ldl(c, 3, (RW(2) + 7));
ldr(c, 3, (RW(2) + 0));
ldl(c, 6, (RW(2) + 15));
ldr(c, 6, (RW(2) + 8));
ldl(c, 7, (RW(2) + 23));
ldr(c, 7, (RW(2) + 16));
ldl(c, 8, (RW(2) + 31));
ldr(c, 8, (RW(2) + 24));
sdl(c, 3, (RW(4) + 7));
sdr(c, 3, (RW(4) + 0));
sdl(c, 6, (RW(4) + 15));
sdr(c, 6, (RW(4) + 8));
sdl(c, 7, (RW(4) + 23));
sdr(c, 7, (RW(4) + 16));
sdl(c, 8, (RW(4) + 31));
sdr(c, 8, (RW(4) + 24));
ldl(c, 3, (RW(2) + 39));
ldr(c, 3, (RW(2) + 32));
ldl(c, 6, (RW(2) + 47));
ldr(c, 6, (RW(2) + 40));
ldl(c, 7, (RW(2) + 55));
ldr(c, 7, (RW(2) + 48));
SET64(8, (s32)rd32(c, (RW(2) + 56)));
sdl(c, 3, (RW(4) + 39));
sdr(c, 3, (RW(4) + 32));
sdl(c, 6, (RW(4) + 47));
sdr(c, 6, (RW(4) + 40));
sdl(c, 7, (RW(4) + 55));
sdr(c, 7, (RW(4) + 48));
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(4) + 56), RW(8));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { F_00296AA8(c); return; }
}

void F_00296A90(Ctx *c) { /* func_00296A90 */
ENTER(0x296a90);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00296AA8(c); return; }
}

void F_00296AA8(Ctx *c) { /* func_00296AA8 */
ENTER(0x296aa8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(5) << 2);
SET64(4, RD(0) + RD(0));
SET64(2, RSD(17) < (s64)15);
L_00296AD0:;
{ int t = RD(2) == RD(0); SET32(17, RW(17) + 1); if (t) goto L_00296B0C; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(16, RW(16) + 4);
{ int t = RD(2) == RD(0); SET32(3, RW(18) + RW(2)); if (t) goto L_00296B0C; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
{ u32 t = RW(2); SET64(31, 0x296b00); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET64(2, RSD(17) < (s64)15); if (t) { POLL(); goto L_00296AD0; } }
L_00296B0C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(4) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00296B28(Ctx *c) { /* func_00296B28 */
ENTER(0x296b28);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, (s32)rd32(c, (RW(6) + 0)));
wr64(c, (RW(29) + 40), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(19) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 8);
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(4) + RD(0));
wr32(c, (RW(16) + 8), RW(0));
L_00296B60:;
SET64(4, RD(16) + RD(0));
SET32(18, RW(18) + -1);
SET32(16, RW(16) + 68);
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x296b78); SET32(17, RW(17) + 4); F_00296BE0(c);
if (RSD(18) >= 0) { wr32(c, (RW(16) + 8), RW(0)); { POLL(); goto L_00296B60; } }
SET64(5, RD(19) + RD(0));
SET64(31, 0x296b8c); SET64(4, RD(20) + RD(0)); F_00296C28(c);
{ int t = RD(2) == RD(0); SET64(4, RD(20) + RD(0)); if (t) goto L_00296BC0; }
SET64(20, rd64(c, (RW(29) + 32)));
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0x302);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_002879A8(c); return; }
L_00296BC0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00296BE0(Ctx *c) { /* func_00296BE0 */
ENTER(0x296be0);
SET32(2, RW(0) + 8);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 0), RW(0));
SET32(3, RW(0) + 2);
wr32(c, (RW(4) + 12), RW(5));
SET32(5, RW(0) + 8);
wr32(c, (RW(4) + 16), RW(2));
SET32(2, RW(4) + 28);
L_00296C00:;
SET32(3, RW(3) + -1);
wr32(c, (RW(2) + 0), RW(5));
{ int t = RSD(3) >= 0; SET32(2, RW(2) + -4); if (t) { POLL(); goto L_00296C00; } }
SET32(2, RW(0) + -1);
wr32(c, (RW(4) + 32), RW(2)); return;
}

static void B_00296C28(Ctx *c, u32 entry) { /* func_00296C28 */
ENTER(entry);
switch (entry) { case 0x296c6c: goto L_00296C6C; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_00296C68; }
SET64(5, RD(0) + RD(0));
SET64(31, 0x296c54); SET64(6, RD(0) + RD(0)); F_00296F98(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x296c60); SET64(5, RD(16) + RD(0)); F_00296D48(c);
SET64(2, RD(0) + RD(0)); goto L_00296D34;
L_00296C68:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
L_00296C6C:;
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 1); if (t) goto L_00296CA0; }
SET64(31, 0x296c7c); SET64(5, RD(0) + RD(0)); F_00296F98(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x296c88); SET64(5, RD(16) + RD(0)); F_00296E38(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 6);
SET64(31, 0x296c98); SET64(6, RD(0) + RD(0)); F_00294868(c);
wr32(c, (RW(17) + 2988), RW(0)); goto L_00296D30;
L_00296CA0:;
SET64(2, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 2); if (t) goto L_00296CD8; }
SET64(31, 0x296cb4); SET64(5, RD(0) + RD(0)); F_00296F98(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x296cc0); SET64(5, RD(16) + RD(0)); F_00296ED8(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 5);
SET64(31, 0x296cd0); SET64(6, RD(0) + RD(0)); F_00294868(c);
wr32(c, (RW(17) + 2984), RW(0)); goto L_00296D30;
L_00296CD8:;
SET64(2, (s32)rd32(c, (RW(16) + 32)));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 7); if (t) goto L_00296D28; }
SET64(31, 0x296cec); SET64(5, RD(0) + RD(0)); F_00296F98(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x296cf8); SET64(5, RD(16) + RD(0)); F_00296F78(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 6);
SET64(31, 0x296d08); SET64(6, RD(0) + RD(0)); F_00294868(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 5);
SET64(31, 0x296d18); SET64(6, RD(0) + RD(0)); F_00294868(c);
wr32(c, (RW(17) + 2988), RW(0));
wr32(c, (RW(17) + 2984), RW(0)); goto L_00296D30;
L_00296D28:;
SET32(2, RW(0) + -1); goto L_00296D34;
L_00296D30:;
SET64(2, RD(0) + RD(0));
L_00296D34:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}
void F_00296C28(Ctx *c) { B_00296C28(c, 0x296c28); }
void F_00296C6C(Ctx *c) { B_00296C28(c, 0x296c6c); }

void F_00296D48(Ctx *c) { /* func_00296D48 */
ENTER(0x296d48);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x296d6c); SET64(16, RD(4) + RD(0)); F_00297058(c);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(5, RW(0) + 5);
{ int t = RD(2) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_00296DA0; }
SET32(5, RW(0) + 1);
SET64(31, 0x296d8c); SET32(6, RW(0) + 1); F_00296FB8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x296d98); SET64(5, RD(17) + RD(0)); F_00296E38(c);
SET64(2, (s32)rd32(c, (RW(17) + 12))); goto L_00296DB0;
L_00296DA0:;
SET64(31, 0x296da8);  F_00294868(c);
wr32(c, (RW(16) + 2984), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 12)));
L_00296DB0:;
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00296DD8; }
SET32(5, RW(0) + 1);
SET64(31, 0x296dc4); SET32(6, RW(0) + 2); F_00296FD8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x296dd0); SET64(5, RD(17) + RD(0)); F_00296ED8(c);
SET64(2, (s32)rd32(c, (RW(17) + 32))); goto L_00296DEC;
L_00296DD8:;
SET32(5, RW(0) + 6);
SET64(31, 0x296de4); SET64(6, RD(0) + RD(0)); F_00294868(c);
wr32(c, (RW(16) + 2988), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 32)));
L_00296DEC:;
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00296E20; }
SET32(5, RW(0) + 1);
SET64(31, 0x296e00); SET32(6, RW(0) + 7); F_00296FF8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00296F78(c); return; }
L_00296E20:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00296E38(Ctx *c) { /* func_00296E38 */
ENTER(0x296e38);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x296e5c); SET32(5, RW(0) + 1); F_00297058(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 2);
SET64(31, 0x296e6c); SET32(6, RW(0) + 3); F_00296F98(c);
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET32(5, RW(0) + 3);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 4); if (t) goto L_00296EB8; }
SET64(31, 0x296e88);  F_00297058(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 4);
SET64(31, 0x296e98); SET32(6, RW(0) + 5); F_00296F98(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 5);
SET64(17, rd64(c, (RW(29) + 8)));
SET32(6, RW(0) + 6);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00297058(c); return; }
L_00296EB8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 3);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 6);
SET32(29, RW(29) + 32); { F_00297058(c); return; }
}

void F_00296ED8(Ctx *c) { /* func_00296ED8 */
ENTER(0x296ed8);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x296efc); SET32(5, RW(0) + 2); F_00297058(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 3);
SET64(31, 0x296f0c); SET32(6, RW(0) + 4); F_00296F98(c);
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(5, RW(0) + 4);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 5); if (t) goto L_00296F58; }
SET64(31, 0x296f28);  F_00297058(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 5);
SET64(31, 0x296f38); SET32(6, RW(0) + 6); F_00296F98(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 6);
SET64(17, rd64(c, (RW(29) + 8)));
SET32(6, RW(0) + 7);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00297058(c); return; }
L_00296F58:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 4);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 7);
SET32(29, RW(29) + 32); { F_00297058(c); return; }
}

void F_00296F78(Ctx *c) { /* func_00296F78 */
ENTER(0x296f78);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 7);
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 8);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00297058(c); return; }
}

void F_00296F98(Ctx *c) { /* func_00296F98 */
ENTER(0x296f98);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00297018(c); return; }
}

void F_00296FB8(Ctx *c) { /* func_00296FB8 */
ENTER(0x296fb8);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00297018(c); return; }
}

void F_00296FD8(Ctx *c) { /* func_00296FD8 */
ENTER(0x296fd8);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00297018(c); return; }
}

void F_00296FF8(Ctx *c) { /* func_00296FF8 */
ENTER(0x296ff8);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 2);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00297018(c); return; }
}

void F_00297018(Ctx *c) { /* func_00297018 */
ENTER(0x297018);
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

void F_00297058(Ctx *c) { /* func_00297058 */
ENTER(0x297058);
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

void F_00297090(Ctx *c) { /* func_00297090 */
ENTER(0x297090);
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
L_002970C0:;
SET64(2, RSD(17) < (s64)9);
L_002970C4:;
{ int t = RD(2) == RD(0); SET32(17, RW(17) + 1); if (t) goto L_00297108; }
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET32(16, RW(16) + 68);
{ int t = RD(2) == RD(0); SET32(3, RW(19) + RW(2)); if (t) { POLL(); goto L_002970C0; } }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2970fc); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET64(2, RSD(17) < (s64)9); if (t) { POLL(); goto L_002970C4; } }
L_00297108:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(4) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00297128(Ctx *c) { /* func_00297128 */
ENTER(0x297128);
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
{ int t = RD(9) == RD(0); SET64(6, RD(8) + RD(0)); if (t) goto L_0029716C; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(2); SET64(31, 0x29716c);  rt_call(c, t); }
L_0029716C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00297178(Ctx *c) { /* func_00297178 */
ENTER(0x297178);
SET32(2, RW(5) << 4);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
wr32(c, (RW(4) + 7976), RW(6)); return;
}

void F_00297190(Ctx *c) { /* func_00297190 */
ENTER(0x297190);
SET32(2, RW(5) << 4);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 7976))); return;
}

void F_002971A8(Ctx *c) { /* func_002971A8 */
ENTER(0x2971a8);
SET32(2, RW(5) << 4);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
wr32(c, (RW(4) + 7980), RW(6)); return;
}

void F_002971C0(Ctx *c) { /* func_002971C0 */
ENTER(0x2971c0);
SET32(2, RW(5) << 4);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 7980))); return;
}

void F_002971D8(Ctx *c) { /* func_002971D8 */
ENTER(0x2971d8);
SET32(2, RW(5) << 4);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 7988)));
SET64(2, RD(0) < RD(2)); return;
}

void F_002971F8(Ctx *c) { /* func_002971F8 */
ENTER(0x2971f8);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 448);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x297214); SET64(16, RD(4) + RD(0)); F_001273D0(c);
SET32(3, RW(0) + 1);
SET32(2, RW(0) + 10);
wr32(c, (RW(16) + 12), RW(3));
wr32(c, (RW(16) + 16), RW(2));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(16) + 4), RW(0));
SET64(31, 0x297238); wr32(c, (RW(16) + 8), RW(0)); F_002972D8(c);
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
SET32(29, RW(29) + 16); { F_00297988(c); return; }
}

void F_002972D8(Ctx *c) { /* func_002972D8 */
ENTER(0x2972d8);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET32(4, RW(16) + 24);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2972f8); SET32(6, RW(0) + 240); F_001273D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 412)));
wr32(c, (RW(16) + 20), RW(0));
SET32(2, RW(2) + 1);
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 412), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00297318(Ctx *c) { /* func_00297318 */
ENTER(0x297318);
wr32(c, (RW(4) + 0), RW(5)); return;
}

void F_00297320(Ctx *c) { /* func_00297320 */
ENTER(0x297320);
SET64(2, rd64(c, (RW(5) + 0)));
wr64(c, (RW(4) + 312), RD(2));
SET64(3, rd64(c, (RW(5) + 8)));
wr64(c, (RW(4) + 320), RD(3)); return;
}

void F_00297338(Ctx *c) { /* func_00297338 */
ENTER(0x297338);
SET64(2, rd64(c, (RW(5) + 0)));
wr64(c, (RW(4) + 328), RD(2));
SET64(3, rd64(c, (RW(5) + 8)));
wr64(c, (RW(4) + 336), RD(3)); return;
}

void F_00297350(Ctx *c) { /* func_00297350 */
ENTER(0x297350);
SET64(2, rd64(c, (RW(5) + 0)));
wr64(c, (RW(4) + 344), RD(2));
SET64(3, rd64(c, (RW(5) + 8)));
wr64(c, (RW(4) + 352), RD(3)); return;
}

void F_00297368(Ctx *c) { /* func_00297368 */
ENTER(0x297368);
SET64(2, rd64(c, (RW(5) + 0)));
wr64(c, (RW(4) + 360), RD(2));
SET64(3, rd64(c, (RW(5) + 8)));
wr64(c, (RW(4) + 368), RD(3)); return;
}

void F_00297380(Ctx *c) { /* func_00297380 */
ENTER(0x297380);
if (RSD(5) > 0) { wr32(c, (RW(4) + 16), RW(5)); goto L_00297388; }
L_00297388:;
 return;
}

void F_00297390(Ctx *c) { /* func_00297390 */
ENTER(0x297390);
wr32(c, (RW(4) + 4), RW(5)); return;
}

void F_00297398(Ctx *c) { /* func_00297398 */
ENTER(0x297398);
wr32(c, (RW(4) + 12), RW(5)); return;
}

void F_002973A0(Ctx *c) { /* func_002973A0 */
ENTER(0x2973a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(2) != RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002973E4; }
SET64(5, rd64(c, (RW(17) + 0)));
SET64(31, 0x2973cc); SET64(4, rd64(c, (RW(16) + 304))); F_0011F910(c);
SET64(5, rd64(c, (RW(17) + 8)));
SET64(31, 0x2973d8); SET64(4, RD(2) + RD(0)); F_0011F988(c);
SET64(3, rd64(c, (RW(16) + 296)));
SET64(3, RD(3) + RD(2));
wr64(c, (RW(16) + 296), RD(3));
L_002973E4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

static void B_002973F8(Ctx *c, u32 entry) { /* func_002973F8 */
ENTER(entry);
switch (entry) { case 0x297838: goto L_00297838; }
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
{ int t = RD(2) == RD(3); SET64(22, RD(7) + RD(0)); if (t) goto L_00297444; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET64(5, rd64(c, (RW(19) + 0))); goto L_00297480; }
L_00297444:;
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
L_00297480:;
SET32(7, RW(0) + 1);
SET64(2, rd64(c, (RW(16) + 392)));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(3, RSD(5) < RSD(2));
if (RD(3) != 0) SET64(5, RD(2));
{ int t = RD(4) != RD(7); wr64(c, (RW(19) + 0), RD(5)); if (t) goto L_002974A8; }
wr32(c, (RW(16) + 8), RW(0));
SET64(18, RD(0) + RD(0)); goto L_00297548;
L_002974A8:;
SET64(18, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(18) != RD(0); SET64(6, rd64(c, (RW(16) + 392))); if (t) goto L_0029754C; }
SET64(2, RSD(6) < RSD(5));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 12))); goto L_00297530; }
SET64(3, rd64(c, (RW(16) + 376)));
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2); wr32(c, (RW(16) + 8), RW(7)); if (t) goto L_002974E8; }
SET64(5, rd64(c, (RW(16) + 344)));
SET64(31, 0x2974dc); SET64(4, rd64(c, (RW(19) + 8))); F_0011F910(c);
SET64(5, rd64(c, (RW(16) + 352))); goto L_002974F8;
L_002974E8:;
SET64(5, rd64(c, (RW(16) + 360)));
SET64(31, 0x2974f4); SET64(4, rd64(c, (RW(19) + 8))); F_0011F910(c);
SET64(5, rd64(c, (RW(16) + 368)));
L_002974F8:;
SET64(31, 0x297500); SET64(4, RD(2) + RD(0)); F_0011F988(c);
SET64(5, RD(2) + RD(0));
SET64(3, rd64(c, (RW(21) + 0)));
SET64(4, RD(16) + RD(0));
wr64(c, (RW(16) + 376), RD(3));
SET64(2, rd64(c, (RW(19) + 0)));
SET64(2, RD(2) + RD(5));
SET64(31, 0x297520); wr64(c, (RW(16) + 384), RD(2)); F_002972D8(c);
SET64(6, rd64(c, (RW(16) + 392)));
SET64(18, (s32)rd32(c, (RW(16) + 8))); goto L_0029754C;
L_00297530:;
if (RD(2) != RD(0)) { SET64(2, rd64(c, (RW(19) + 0))); goto L_00297550; }
wr32(c, (RW(16) + 8), RW(7));
SET32(18, RW(0) + 1); goto L_0029754C;
L_00297548:;
SET64(6, rd64(c, (RW(16) + 392)));
L_0029754C:;
SET64(2, rd64(c, (RW(19) + 0)));
L_00297550:;
SET32(4, RW(0) + -1);
SET64(17, rd64(c, (RW(16) + 376)));
SET64(3, RSD(2) < RSD(6));
if (RD(3) != 0) SET64(2, RD(6));
{ int t = RD(17) == RD(4); wr64(c, (RW(16) + 392), RD(2)); if (t) goto L_00297590; }
SET64(5, rd64(c, (RW(21) + 0)));
SET64(4, rd64(c, (RW(19) + 8)));
SET64(31, 0x297578); SET64(5, RD(5) - RD(17)); F_0011F910(c);
SET64(5, rd64(c, (RW(21) + 8)));
SET64(31, 0x297584); SET64(4, RD(2) + RD(0)); F_0011F988(c);
SET64(3, rd64(c, (RW(16) + 384)));
SET64(20, RD(3) + RD(2)); goto L_00297594;
L_00297590:;
SET64(20, RD(0) + RD(0));
L_00297594:;
if (RD(18) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 12))); goto L_002975E8; }
SET64(3, rd64(c, (RW(16) + 392)));
SET64(2, RSD(3) < RSD(20));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_00297748; }
SET64(2, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(2) == RD(0); SET64(2, rd64(c, (RW(21) + 0))); if (t) goto L_002975C8; }
wr64(c, (RW(16) + 384), RD(3));
wr64(c, (RW(16) + 376), RD(2)); goto L_002975D4;
L_002975C8:;
SET64(3, rd64(c, (RW(16) + 296)));
wr64(c, (RW(16) + 376), RD(2));
wr64(c, (RW(16) + 384), RD(3));
L_002975D4:;
SET64(2, (s32)rd32(c, (RW(16) + 400)));
SET64(17, rd64(c, (RW(16) + 376)));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 400), RW(2)); goto L_00297744;
L_002975E8:;
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET32(2, RW(0) + -1); if (t) goto L_00297748; }
SET64(5, rd64(c, (RW(16) + 328)));
SET64(31, 0x297600); SET64(4, rd64(c, (RW(19) + 8))); F_0011F910(c);
SET64(5, rd64(c, (RW(16) + 336)));
SET64(31, 0x29760c); SET64(4, RD(2) + RD(0)); F_0011F988(c);
SET64(5, rd64(c, (RW(19) + 0)));
SET64(3, RD(2) + RD(0));
SET64(2, RD(5) - RD(20));
{ int t = RSD(2) < 0; SET64(2, RSD(3) < RSD(2)); if (t) goto L_00297630; }
if (RD(2) != RD(0)) { SET64(2, rd64(c, (RW(21) + 0))); goto L_00297644; }
SET64(5, RD(5) - RD(20)); goto L_00297670;
L_00297630:;
SET64(2, RD(20) - RD(5));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) == RD(0); SET64(5, RD(5) - RD(20)); if (t) goto L_00297670; }
SET64(2, rd64(c, (RW(21) + 0)));
L_00297644:;
SET64(4, RD(16) + RD(0));
wr64(c, (RW(16) + 376), RD(2));
SET64(3, rd64(c, (RW(19) + 0)));
SET64(31, 0x297658); wr64(c, (RW(16) + 384), RD(3)); F_002972D8(c);
SET64(2, (s32)rd32(c, (RW(16) + 416)));
SET64(18, (s32)rd32(c, (RW(16) + 8)));
SET32(2, RW(2) + 1);
SET64(17, rd64(c, (RW(16) + 376)));
wr32(c, (RW(16) + 416), RW(2)); goto L_00297744;
L_00297670:;
SET64(5, RD(5) << 32);
SET64(5, RSD(5) >> 32);
SET64(31, 0x297680); SET64(4, RD(16) + RD(0)); F_00297860(c);
SET64(4, rd64(c, (RW(19) + 8)));
SET64(5, rd64(c, (RW(16) + 312)));
SET64(31, 0x297690); SET64(17, RD(2) + RD(0)); F_0011F910(c);
SET64(5, rd64(c, (RW(16) + 320)));
SET64(31, 0x29769c); SET64(4, RD(2) + RD(0)); F_0011F988(c);
SET64(18, RD(2) + RD(0));
{ int t = RSD(17) >= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002976AC; }
SET64(2, RD(0) - RD(2));
L_002976AC:;
SET64(2, RSD(18) < RSD(2));
if (RD(2) == RD(0)) { SET64(18, (s32)rd32(c, (RW(16) + 8))); goto L_00297740; }
SET64(2, RSD(18) < RSD(17));
{ int t = RD(2) == RD(0); SET64(4, RD(17) << 1); if (t) goto L_002976E8; }
SET64(31, 0x2976cc); SET64(5, RD(18) + RD(0)); F_0011F988(c);
SET64(3, (s32)rd32(c, (RW(16) + 404)));
SET64(4, RD(2) + (s64)-1);
SET64(2, RD(4) << 32);
SET64(2, RSD(2) >> 32);
SET32(3, RW(3) + RW(2));
wr32(c, (RW(16) + 404), RW(3)); goto L_00297708;
L_002976E8:;
SET64(31, 0x2976f0); SET64(5, RD(18) + RD(0)); F_0011F988(c);
SET64(3, (s32)rd32(c, (RW(16) + 408)));
SET64(4, RD(2) + (s64)1);
SET64(2, RD(4) << 32);
SET64(2, RSD(2) >> 32);
SET32(3, RW(3) - RW(2));
wr32(c, (RW(16) + 408), RW(3));
L_00297708:;
SET64(31, 0x297710); SET64(5, RD(18) + RD(0)); F_0011F910(c);
SET64(3, rd64(c, (RW(21) + 0)));
SET64(5, RD(2) >> 63);
SET64(4, RD(16) + RD(0));
SET64(5, RD(5) + RD(2));
wr64(c, (RW(16) + 376), RD(3));
SET64(5, RSD(5) >> 1);
SET64(2, RD(20) + RD(5));
SET64(5, RD(5) << 32);
SET64(5, RSD(5) >> 32);
SET64(31, 0x29773c); wr64(c, (RW(16) + 384), RD(2)); F_002978C0(c);
SET64(18, (s32)rd32(c, (RW(16) + 8)));
L_00297740:;
SET64(17, rd64(c, (RW(16) + 376)));
L_00297744:;
SET32(2, RW(0) + -1);
L_00297748:;
if (RD(17) == RD(2)) { SET64(3, RD(0) + RD(0)); goto L_00297774; }
SET64(5, rd64(c, (RW(21) + 0)));
SET64(4, rd64(c, (RW(19) + 8)));
SET64(31, 0x297760); SET64(5, RD(5) - RD(17)); F_0011F910(c);
SET64(5, rd64(c, (RW(21) + 8)));
SET64(31, 0x29776c); SET64(4, RD(2) + RD(0)); F_0011F988(c);
SET64(3, rd64(c, (RW(16) + 384)));
SET64(3, RD(3) + RD(2));
L_00297774:;
wr64(c, (RW(22) + 0), RD(3));
SET64(2, rd64(c, (RW(19) + 8)));
wr64(c, (RW(22) + 8), RD(2));
SET64(4, rd64(c, (RW(16) + 296)));
SET64(2, RSD(3) < RSD(4));
if (RD(2) == RD(0)) { SET64(2, rd64(c, (RW(19) + 0))); goto L_002977A0; }
wr64(c, (RW(22) + 0), RD(4));
SET64(2, rd64(c, (RW(16) + 304)));
wr64(c, (RW(22) + 8), RD(2));
SET64(2, rd64(c, (RW(19) + 0)));
L_002977A0:;
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
if (RD(18) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 436))); goto L_00297810; }
SET64(2, (s32)rd32(c, (RW(16) + 428)));
SET64(3, (s32)rd32(c, (RW(16) + 432)));
SET64(4, RSD(7) < RSD(2));
SET64(5, RSD(3) < RSD(7));
if (RD(4) == 0) SET64(2, RD(7));
if (RD(5) == 0) SET64(3, RD(7));
wr32(c, (RW(16) + 428), RW(2));
wr32(c, (RW(16) + 432), RW(3)); goto L_0029782C;
L_00297810:;
SET64(3, (s32)rd32(c, (RW(16) + 440)));
SET64(4, RSD(7) < RSD(2));
SET64(5, RSD(3) < RSD(7));
if (RD(4) == 0) SET64(2, RD(7));
if (RD(5) == 0) SET64(3, RD(7));
wr32(c, (RW(16) + 436), RW(2));
wr32(c, (RW(16) + 440), RW(3));
L_0029782C:;
SET64(2, (s64)(s32)0x410000);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(2) + -1240), RW(16));
L_00297838:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); { F_00297AE8(c); return; }
}
void F_002973F8(Ctx *c) { B_002973F8(c, 0x2973f8); }
void F_00297838(Ctx *c) { B_002973F8(c, 0x297838); }

void F_00297860(Ctx *c) { /* func_00297860 */
ENTER(0x297860);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET32(7, RW(16) + 20);
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(6, (s32)rd32(c, (RW(7) + 0)));
if (RD(3) == RD(0)) { rt_break(c, 0x297880); goto L_00297884; }
L_00297884:;
div_s(c, 0, RSW(6), RSW(3));
SET32(6, RW(6) + 1);
SET64(2, c->hi.d[0]);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 24), RW(5));
SET64(31, 0x2978a4); wr32(c, (RW(7) + 0), RW(6)); F_00297920(c);
SET64(3, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 424), RW(3));
wr32(c, (RW(16) + 420), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

