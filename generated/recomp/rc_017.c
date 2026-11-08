#include "r5900.h"
#include "functab.h"

void F_00245640(Ctx *c) { /* func_00245640 */
ENTER(0x245640);
SET64(4, (s64)(s32)0x3f0000);
SET64(2, RD(0) + RD(0));
SET32(4, RW(4) + -24740);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 0), RW(3)); return;
}

void F_00245660(Ctx *c) { /* func_00245660 */
ENTER(0x245660);
SET64(4, (s64)(s32)0x3f0000);
SET64(2, RD(0) + RD(0));
SET32(4, RW(4) + -24740);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + -1);
wr32(c, (RW(4) + 0), RW(3)); return;
}

void F_00245680(Ctx *c) { /* func_00245680 */
ENTER(0x245680);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -48);
SET64(3, (s32)rd32(c, (RW(2) + -24740)));
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
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_002456C4; }
SET64(31, 0x2456c4);  F_00245640(c);
L_002456C4:;
wr16(c, (RW(18) + 0), (u16)RW(0));
wr16(c, (RW(19) + 0), (u16)RW(0));
{ int t = RD(17) != RD(0); wr16(c, (RW(20) + 0), (u16)RW(0)); if (t) goto L_002456DC; }
{ int t = RSD(16) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00245814; }
L_002456DC:;
SET64(11, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET32(2, RW(11) + -25648);
{ int t = RSD(16) <= 0; SET64(10, (s16)rd16(c, (RW(2) + 512))); if (t) goto L_0024574C; }
SET64(8, RD(2) + RD(0));
L_002456F8:;
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
{ int t = RD(6) != RD(0); SET64(10, (s16)rd16(c, (RW(3) + 0))); if (t) { POLL(); goto L_002456F8; } }
SET32(2, RW(11) + -25648);
SET64(7, RD(0) + RD(0));
L_0024574C:;
{ int t = RSD(16) <= 0; SET64(8, (s16)rd16(c, (RW(2) + 1024))); if (t) goto L_002457A4; }
SET64(9, RD(2) + RD(0));
L_00245758:;
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
{ int t = RD(6) != RD(0); SET64(8, (s16)rd16(c, (RW(3) + 0))); if (t) { POLL(); goto L_00245758; } }
L_002457A4:;
SET32(2, RW(11) + -25648);
SET64(7, RD(0) + RD(0));
{ int t = RSD(16) <= 0; SET64(4, (s16)rd16(c, (RW(2) + 1536))); if (t) goto L_00245804; }
SET64(9, RD(2) + RD(0));
L_002457B8:;
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
{ int t = RD(6) != RD(0); SET64(4, (s16)rd16(c, (RW(3) + 0))); if (t) { POLL(); goto L_002457B8; } }
L_00245804:;
wr16(c, (RW(18) + 0), (u16)RW(10));
SET64(2, RD(0) + RD(0));
wr16(c, (RW(19) + 0), (u16)RW(8));
wr16(c, (RW(20) + 0), (u16)RW(4));
L_00245814:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00245838(Ctx *c) { /* func_00245838 */
ENTER(0x245838);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -32);
SET64(3, (s32)rd32(c, (RW(2) + -24740)));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0024586C; }
SET64(31, 0x24586c);  F_00245640(c);
L_0024586C:;
SET64(4, (s64)(s32)0x4b0000);
SET64(6, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(8, RD(18) + RD(0));
SET32(4, RW(4) + -23600);
SET64(31, 0x245888); SET32(5, RW(0) + 6); F_00245680(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002458A8(Ctx *c) { /* func_002458A8 */
ENTER(0x2458a8);
SET64(7, rd16(c, (RW(5) + 0)));
SET64(2, RD(0) + RD(0));
SET64(5, rd16(c, (RW(4) + 0)));
SET64(3, rd16(c, (RW(6) + 0)));
mul_s(c, 0, 5, RSW(5), RSW(7));
SET32(3, RW(3) + RW(5));
wr16(c, (RW(4) + 0), (u16)RW(3)); return;
}

void F_002458C8(Ctx *c) { /* func_002458C8 */
ENTER(0x2458c8);
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(2) + -24708), RW(4)); return;
}

void F_002458D8(Ctx *c) { /* func_002458D8 */
ENTER(0x2458d8);
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + -24708))); return;
}

void F_002458E8(Ctx *c) { /* func_002458E8 */
ENTER(0x2458e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2458f8);  F_002599D8(c);
SET64(31, 0x245900);  F_00245640(c);
SET64(4, (s64)(s32)0x3f0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -24704);
SET64(31, 0x245914); SET32(6, RW(0) + 4160); F_001273D0(c);
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002458C8(c); return; }
}

void F_00245928(Ctx *c) { /* func_00245928 */
ENTER(0x245928);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x245938);  F_00259A00(c);
SET64(31, 0x245940);  F_00245660(c);
SET64(4, (s64)(s32)0x3f0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -24704);
SET32(6, RW(0) + 4160);
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
}

void F_00245960(Ctx *c) { /* func_00245960 */
ENTER(0x245960);
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

void F_00245990(Ctx *c) { /* func_00245990 */
ENTER(0x245990);
SET64(2, (s32)rd32(c, (RW(4) + 140)));
SET64(3, (s32)rd32(c, (RW(4) + 136)));
SET32(2, RW(2) + RW(6));
SET32(3, RW(3) + RW(6));
wr32(c, (RW(4) + 140), RW(2));
wr32(c, (RW(4) + 136), RW(3)); return;
}

void F_002459B0(Ctx *c) { /* func_002459B0 */
ENTER(0x2459b0);
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
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
}

void F_002459E8(Ctx *c) { /* func_002459E8 */
ENTER(0x2459e8);
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
SET32(3, RW(8) + -24704);
wr64(c, (RW(29) + 40), RD(31));
SET64(2, (s16)rd16(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00245A54; }
SET32(5, RW(5) + 1);
L_00245A30:;
SET64(2, RSD(5) < (s64)16);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 260); if (t) goto L_00245A54; }
SET64(2, (s16)rd16(c, (RW(3) + 0)));
if (RD(2) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00245A30; } }
L_00245A54:;
SET32(3, RW(0) + 16);
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00245AE4; }
SET32(2, RW(5) << 6);
SET32(3, RW(8) + -24704);
SET32(2, RW(2) + RW(5));
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) << 2);
SET32(6, RW(0) + 260);
SET32(16, RW(2) + RW(3));
SET64(31, 0x245a84); SET64(4, RD(16) + RD(0)); F_001273D0(c);
SET32(3, RW(0) + 1);
SET64(31, 0x245a90); wr16(c, (RW(16) + 0), (u16)RW(3)); F_00259A28(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 8), RW(2)); if (t) goto L_00245AA8; }
SET64(31, 0x245aa0); SET64(4, RD(16) + RD(0)); F_00245B08(c);
SET64(2, RD(0) + RD(0)); goto L_00245AE4;
L_00245AA8:;
SET64(2, (s64)(s32)0x240000);
SET64(3, (s64)(s32)0x240000);
SET32(2, RW(2) + 22880);
SET32(3, RW(3) + 22928);
wr32(c, (RW(16) + 120), RW(2));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 56), RW(20));
wr32(c, (RW(16) + 60), RW(19));
wr32(c, (RW(16) + 64), RW(17));
wr32(c, (RW(16) + 68), RW(18));
wr32(c, (RW(16) + 128), RW(3));
wr32(c, (RW(16) + 124), RW(16));
SET64(31, 0x245ae0); wr32(c, (RW(16) + 132), RW(16)); F_002459B0(c);
SET64(2, RD(16) + RD(0));
L_00245AE4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00245B08(Ctx *c) { /* func_00245B08 */
ENTER(0x245b08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_00245B3C; }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x245b28); wr32(c, (RW(16) + 8), RW(0)); F_00259BA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x245b38); SET32(6, RW(0) + 260); F_001273D0(c);
wr16(c, (RW(16) + 0), (u16)RW(0));
L_00245B3C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00245B50(Ctx *c) { /* ADXB_DecodeHeaderAdx */
ENTER(0x245b50);
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
SET64(31, 0x245bdc); wr32(c, (RW(29) + 8), RW(23)); F_00247C38(c);
{ int t = RSD(2) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00245E0C; }
SET64(2, (s8)rd8(c, (RW(19) + 0)));
SET64(2, RSD(2) < (s64)5);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00245CD8; }
SET64(2, (s32)rd32(c, (RW(16) + 180)));
if (RD(2) != RD(0)) { SET32(2, RW(0) + 8); goto L_00245C20; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -23592);
SET64(31, 0x245c14); SET32(5, RW(5) + -23560); F_00248EF0(c);
L_00245C14:;
SET32(2, RW(0) + -1); goto L_00245E0C;
L_00245C20:;
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
SET64(31, 0x245c80); wr32(c, (RW(16) + 136), RW(0)); F_00247DB8(c);
{ int t = RSD(2) < 0; SET64(4, RD(16) + RD(0)); if (t) goto L_00245D5C; }
SET64(7, (s32)rd32(c, (RW(20) + 0)));
SET64(5, rd8(c, (RW(29) + 66)));
SET32(8, RW(29) + 50);
SET64(6, rd8(c, (RW(29) + 67)));
SET32(9, RW(29) + 52);
SET32(10, RW(29) + 54);
SET64(31, 0x245ca8); wr16(c, (RW(29) + 48), (u16)RW(0)); F_00246318(c);
{ int t = RSD(2) < 0; SET32(2, RW(0) + -1); if (t) goto L_00245E0C; }
SET64(2, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(2) + -24728)));
if (RD(2) == RD(0)) { SET64(2, (s8)rd8(c, (RW(16) + 14))); goto L_00245DD8; }
SET64(4, (s32)rd32(c, (RW(16) + 180)));
{ u32 t = RW(2); SET64(31, 0x245ccc); SET32(5, RW(29) + 48); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(16) + 14))); goto L_00245DD8;
L_00245CD8:;
SET64(5, RD(18) + RD(0));
SET32(6, RW(29) + 66);
SET64(31, 0x245ce8); SET32(7, RW(29) + 67); F_00247DB8(c);
{ int t = RSD(2) < 0; SET64(4, RD(16) + RD(0)); if (t) goto L_00245D5C; }
SET64(7, (s32)rd32(c, (RW(20) + 0)));
SET64(5, rd8(c, (RW(29) + 66)));
SET32(8, RW(29) + 68);
SET64(6, rd8(c, (RW(29) + 67)));
SET32(9, RW(29) + 70);
SET64(31, 0x245d0c); SET32(10, RW(29) + 72); F_00246318(c);
{ int t = RSD(2) < 0; SET32(19, RW(16) + 28); if (t) { POLL(); goto L_00245C14; } }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(5, (s16)rd16(c, (RW(29) + 68)));
SET64(6, (s16)rd16(c, (RW(29) + 70)));
SET64(31, 0x245d28); SET64(7, (s16)rd16(c, (RW(29) + 72))); F_00259B70(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x245d38); SET64(6, RD(19) + RD(0)); F_00247D38(c);
{ int t = RSD(2) < 0; SET32(20, RW(29) + 32); if (t) goto L_00245D5C; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET32(6, RW(29) + 16);
SET64(31, 0x245d54); SET64(7, RD(20) + RD(0)); F_00247E30(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(29) + 76))); goto L_00245D68; }
L_00245D5C:;
SET64(2, RD(0) + RD(0)); goto L_00245E0C;
L_00245D68:;
SET64(6, (s16)rd16(c, (RW(19) + 0)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x245d78); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259AF8(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET32(5, RW(29) + 16);
SET64(31, 0x245d88); SET64(6, RD(20) + RD(0)); F_00259B20(c);
SET32(2, RW(16) + 52);
SET32(6, RW(16) + 32);
SET32(7, RW(16) + 36);
SET32(8, RW(16) + 38);
SET32(9, RW(16) + 40);
SET32(10, RW(16) + 44);
SET32(11, RW(16) + 48);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x245db4); wr32(c, (RW(29) + 0), RW(2)); F_00247F68(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET32(6, RW(16) + 204);
SET32(7, RW(16) + 208);
SET32(8, RW(16) + 224);
SET64(31, 0x245dd0); SET32(9, RW(16) + 226); F_002481C8(c);
wr16(c, (RW(16) + 152), (u16)RW(0));
SET64(2, (s8)rd8(c, (RW(16) + 14)));
L_00245DD8:;
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
L_00245E0C:;
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

void F_00245E40(Ctx *c) { /* func_00245E40 */
ENTER(0x245e40);
wr16(c, (RW(4) + 154), (u16)RW(0)); return;
}

void F_00245E48(Ctx *c) { /* func_00245E48 */
ENTER(0x245e48);
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

void F_00245EE8(Ctx *c) { /* func_00245EE8 */
ENTER(0x245ee8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x245f0c); SET64(18, RD(6) + RD(0)); F_002459B0(c);
SET64(2, rd16(c, (RW(16) + 0)));
SET64(4, RD(0) | 0x8000);
SET32(3, RW(2) << 8);
SET32(2, RW(2) >> 8);
SET64(2, RD(2) | RD(3));
SET64(2, RD(2) & 0xffff);
{ int t = RD(2) != RD(4); SET64(5, RD(16) + RD(0)); if (t) goto L_00245F50; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00245B50(c); return; }
L_00245F50:;
SET64(31, 0x245f58); SET64(4, RD(16) + RD(0)); F_00247048(c);
{ int t = RD(2) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00245F80; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00246DD8(c); return; }
L_00245F80:;
SET64(31, 0x245f88); SET64(4, RD(16) + RD(0)); F_00247850(c);
{ int t = RD(2) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00245FB0; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002472A0(c); return; }
L_00245FB0:;
SET64(31, 0x245fb8); SET64(4, RD(16) + RD(0)); F_00244598(c);
{ int t = RD(2) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00245FE0; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00244710(c); return; }
L_00245FE0:;
SET64(31, 0x245fe8); SET64(4, RD(16) + RD(0)); F_00244E80(c);
{ int t = RD(2) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00246010; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00244FE8(c); return; }
L_00246010:;
SET64(31, 0x246018); SET64(4, RD(16) + RD(0)); F_00244090(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00246040; }
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00243FE0(c); return; }
L_00246040:;
SET64(16, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + -1);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00246060(Ctx *c) { /* func_00246060 */
ENTER(0x246060);
wr32(c, (RW(4) + 124), RW(6));
wr32(c, (RW(4) + 120), RW(5)); return;
}

void F_00246070(Ctx *c) { /* func_00246070 */
ENTER(0x246070);
wr32(c, (RW(4) + 132), RW(6));
wr32(c, (RW(4) + 128), RW(5)); return;
}

void F_00246080(Ctx *c) { /* func_00246080 */
ENTER(0x246080);
SET64(2, (s32)rd32(c, (RW(4) + 60))); return;
}

void F_00246088(Ctx *c) { /* func_00246088 */
ENTER(0x246088);
SET64(2, (s16)rd16(c, (RW(4) + 152))); return;
}

void F_00246090(Ctx *c) { /* func_00246090 */
ENTER(0x246090);
SET64(2, (s32)rd32(c, (RW(4) + 20))); return;
}

void F_00246098(Ctx *c) { /* func_00246098 */
ENTER(0x246098);
SET64(2, (s8)rd8(c, (RW(4) + 14)));
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(5, rd8(c, (RW(4) + 14))); if (t) goto L_002460B4; }
SET64(3, (s32)rd32(c, (RW(4) + 232)));
{ int t = RD(3) != RD(0); SET32(2, RW(0) + 2); if (t) goto L_002460BC; }
L_002460B4:;
SET32(2, RW(5) << 24);
SET32(2, RSW(2) >> 24);
L_002460BC:;
 return;
}

void F_002460C8(Ctx *c) { /* func_002460C8 */
ENTER(0x2460c8);
SET64(2, (s8)rd8(c, (RW(4) + 13))); return;
}

void F_002460D0(Ctx *c) { /* func_002460D0 */
ENTER(0x2460d0);
SET64(5, (s16)rd16(c, (RW(4) + 152)));
{ int t = RD(5) == RD(0); SET32(2, RW(0) + 16); if (t) goto L_00246128; }
SET32(2, RW(0) + 2);
{ int t = RD(5) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_00246108; }
SET64(3, (s16)rd16(c, (RW(4) + 156)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(5); SET64(4, RD(3) ^ 0x1); if (t) goto L_00246128; }
SET32(3, RW(0) + 16);
SET32(2, RW(0) + 8);
if (RD(4) != 0) SET64(2, RD(3)); return;
L_00246108:;
if (RD(5) != RD(2)) { SET32(2, RW(0) + 16); goto L_00246128; }
SET64(3, (s16)rd16(c, (RW(4) + 156)));
SET32(4, RW(0) + 16);
SET32(2, RW(0) + 4);
SET64(3, RD(3) ^ 0x2);
if (RD(3) != 0) SET64(2, RD(4)); return;
L_00246128:;
 return;
}

void F_00246130(Ctx *c) { /* func_00246130 */
ENTER(0x246130);
SET64(2, (s32)rd32(c, (RW(4) + 16))); return;
}

void F_00246138(Ctx *c) { /* func_00246138 */
ENTER(0x246138);
SET64(2, (s8)rd8(c, (RW(4) + 15))); return;
}

void F_00246140(Ctx *c) { /* func_00246140 */
ENTER(0x246140);
SET64(2, (s32)rd32(c, (RW(4) + 24))); return;
}

void F_00246148(Ctx *c) { /* func_00246148 */
ENTER(0x246148);
SET64(2, (s16)rd16(c, (RW(4) + 28))); return;
}

void F_00246150(Ctx *c) { /* func_00246150 */
ENTER(0x246150);
SET64(2, (s32)rd32(c, (RW(4) + 32))); return;
}

void F_00246158(Ctx *c) { /* func_00246158 */
ENTER(0x246158);
SET64(2, (s16)rd16(c, (RW(4) + 36))); return;
}

void F_00246160(Ctx *c) { /* func_00246160 */
ENTER(0x246160);
SET64(2, (s32)rd32(c, (RW(4) + 40))); return;
}

void F_00246168(Ctx *c) { /* func_00246168 */
ENTER(0x246168);
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00246174; }
SET64(2, (s32)rd32(c, (RW(4) + 44)));
L_00246174:;
 return;
}

void F_00246180(Ctx *c) { /* func_00246180 */
ENTER(0x246180);
SET64(2, (s32)rd32(c, (RW(4) + 48))); return;
}

void F_00246188(Ctx *c) { /* func_00246188 */
ENTER(0x246188);
SET64(2, (s32)rd32(c, (RW(4) + 52))); return;
}

void F_00246190(Ctx *c) { /* func_00246190 */
ENTER(0x246190);
SET64(2, (s32)rd32(c, (RW(4) + 204))); return;
}

void F_00246198(Ctx *c) { /* func_00246198 */
ENTER(0x246198);
SET64(2, (s16)rd16(c, (RW(4) + 224))); return;
}

void F_002461A0(Ctx *c) { /* func_002461A0 */
ENTER(0x2461a0);
SET32(5, RW(5) << 1);
SET32(5, RW(5) + RW(4));
SET64(2, (s16)rd16(c, (RW(5) + 226))); return;
}

void F_002461B0(Ctx *c) { /* func_002461B0 */
ENTER(0x2461b0);
SET32(2, RW(4) + 208); return;
}

void F_002461B8(Ctx *c) { /* func_002461B8 */
ENTER(0x2461b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET32(5, RW(16) + 172);
SET32(6, RW(16) + 176);
SET64(31, 0x2461d8); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259B48(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET32(7, RW(16) + 170);
SET32(5, RW(16) + 166);
SET32(6, RW(16) + 168);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00259B80(c); return; }
}

void F_002461F8(Ctx *c) { /* func_002461F8 */
ENTER(0x2461f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET32(5, RW(16) + 172);
SET32(6, RW(16) + 176);
SET64(31, 0x246218); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259B20(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(7, (s16)rd16(c, (RW(16) + 170)));
SET64(5, (s16)rd16(c, (RW(16) + 166)));
SET64(6, (s16)rd16(c, (RW(16) + 168)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00259B70(c); return; }
}

void F_00246238(Ctx *c) { /* func_00246238 */
ENTER(0x246238);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x246258); SET64(4, RD(16) + RD(0)); F_0012A4D8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) + RD(0));
SET64(6, RD(29) + RD(0));
SET32(7, RW(29) + 2);
SET64(31, 0x246270); SET32(8, RW(29) + 4); F_00245680(c);
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

void F_002462A0(Ctx *c) { /* func_002462A0 */
ENTER(0x2462a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2462b4); SET64(16, RD(4) + RD(0)); F_0012A4D8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(6, (s64)(s32)0x3f0000);
SET64(7, (s64)(s32)0x3f0000);
SET64(8, (s64)(s32)0x3f0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(2) + RD(0));
SET32(6, RW(6) + -24716);
SET32(7, RW(7) + -24714);
SET32(8, RW(8) + -24712);
SET32(29, RW(29) + 16); { F_00245680(c); return; }
}

void F_002462E8(Ctx *c) { /* func_002462E8 */
ENTER(0x2462e8);
SET64(2, rd16(c, (RW(4) + 160)));
wr16(c, (RW(5) + 0), (u16)RW(2));
SET64(3, rd16(c, (RW(4) + 162)));
wr16(c, (RW(6) + 0), (u16)RW(3));
SET64(2, rd16(c, (RW(4) + 164)));
wr16(c, (RW(7) + 0), (u16)RW(2)); return;
}

void F_00246308(Ctx *c) { /* func_00246308 */
ENTER(0x246308);
wr16(c, (RW(4) + 164), (u16)RW(7));
wr16(c, (RW(4) + 160), (u16)RW(5));
wr16(c, (RW(4) + 162), (u16)RW(6)); return;
}

void F_00246318(Ctx *c) { /* func_00246318 */
ENTER(0x246318);
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
{ int t = RD(5) != RD(0); SET64(6, RD(6) & 0xff); if (t) goto L_002463F0; }
SET64(2, RD(6) < (u64)(s64)16);
if (RD(2) != RD(0)) { SET64(2, RD(6) < (u64)(s64)8); goto L_00246390; }
SET64(5, (s64)(s32)0x4b0000);
SET64(6, RD(7) + RD(0));
SET32(5, RW(5) + -23520);
SET64(31, 0x24636c); SET64(4, RD(29) + RD(0)); F_00129C30(c);
SET32(5, RW(0) + 8);
SET64(4, RD(29) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(31, 0x246384); SET64(8, RD(18) + RD(0)); F_00245680(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00246400;
L_00246390:;
if (RD(2) != RD(0)) { wr16(c, (RW(16) + 0), (u16)RW(0)); goto L_002463F4; }
SET64(2, (s32)rd32(c, (RW(11) + 160)));
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(11) + 160))); goto L_002463D8; }
SET64(2, (s16)rd16(c, (RW(11) + 164)));
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(11) + 160))); goto L_002463D8; }
SET64(2, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET64(3, rd16(c, (RW(2) + -24716)));
SET64(5, (s64)(s32)0x3f0000);
wr16(c, (RW(11) + 160), (u16)RW(3));
SET64(2, rd16(c, (RW(4) + -24714)));
wr16(c, (RW(11) + 162), (u16)RW(2));
SET64(3, rd16(c, (RW(5) + -24712)));
wr16(c, (RW(11) + 164), (u16)RW(3));
SET64(2, rd16(c, (RW(11) + 160)));
L_002463D8:;
wr16(c, (RW(16) + 0), (u16)RW(2));
SET64(3, rd16(c, (RW(11) + 162)));
wr16(c, (RW(17) + 0), (u16)RW(3));
SET64(2, rd16(c, (RW(11) + 164)));
wr16(c, (RW(18) + 0), (u16)RW(2)); goto L_002463FC;
L_002463F0:;
wr16(c, (RW(16) + 0), (u16)RW(0));
L_002463F4:;
wr16(c, (RW(17) + 0), (u16)RW(0));
wr16(c, (RW(18) + 0), (u16)RW(0));
L_002463FC:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00246400:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00246418(Ctx *c) { /* func_00246418 */
ENTER(0x246418);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void F_00246420(Ctx *c) { /* func_00246420 */
ENTER(0x246420);
SET64(7, RD(4) + RD(0));
SET64(2, (s16)rd16(c, (RW(7) + 152)));
{ int t = RD(2) != RD(0); SET64(8, RD(5) + RD(0)); if (t) goto L_00246450; }
SET64(2, (s8)rd8(c, (RW(7) + 15)));
wr32(c, (RW(7) + 72), RW(8));
div_s(c, 0, RSW(6), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x246440); goto L_00246444; }
L_00246444:;
SET64(3, c->lo.d[0]);
wr32(c, (RW(7) + 116), RW(0)); goto L_00246484;
L_00246450:;
SET64(2, (s8)rd8(c, (RW(7) + 13)));
SET64(5, (s8)rd8(c, (RW(7) + 14)));
SET64(3, RSD(2) < (s64)0);
SET32(4, RW(2) + 7);
if (RD(3) != 0) SET64(2, RD(4));
wr32(c, (RW(7) + 72), RW(8));
SET32(2, RSW(2) >> 3);
mul_s(c, 0, 2, RSW(2), RSW(5));
div_s(c, 1, RSW(6), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x246478); goto L_0024647C; }
L_0024647C:;
wr32(c, (RW(7) + 116), RW(0));
SET64(3, c->lo.d[1]);
L_00246484:;
wr32(c, (RW(7) + 76), RW(3));
wr32(c, (RW(7) + 244), RW(0));
wr32(c, (RW(7) + 144), RW(0));
wr32(c, (RW(7) + 148), RW(0));
wr32(c, (RW(7) + 248), RW(0)); return;
}

void F_002464A0(Ctx *c) { /* func_002464A0 */
ENTER(0x2464a0);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_002464B0; }
wr32(c, (RW(4) + 4), RW(2));
L_002464B0:;
 return;
}

void F_002464B8(Ctx *c) { /* func_002464B8 */
ENTER(0x2464b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 232)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_002464E0; }
SET64(3, (s32)rd32(c, (RW(2) + -24720)));
{ u32 t = RW(3); SET64(31, 0x2464e0);  rt_call(c, t); }
L_002464E0:;
SET64(31, 0x2464e8); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259C98(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00246500(Ctx *c) { /* func_00246500 */
ENTER(0x246500);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00246534; }
SET64(31, 0x246528); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259CC0(c);
wr32(c, (RW(16) + 140), RW(0));
wr32(c, (RW(16) + 4), RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00246534:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00246540(Ctx *c) { /* func_00246540 */
ENTER(0x246540);
SET64(2, (s32)rd32(c, (RW(4) + 148))); return;
}

void F_00246548(Ctx *c) { /* func_00246548 */
ENTER(0x246548);
SET64(2, (s32)rd32(c, (RW(4) + 144))); return;
}

void F_00246550(Ctx *c) { /* func_00246550 */
ENTER(0x246550);
wr32(c, (RW(4) + 256), RW(6));
wr32(c, (RW(4) + 252), RW(5)); return;
}

void F_00246560(Ctx *c) { /* func_00246560 */
ENTER(0x246560);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void F_00246568(Ctx *c) { /* func_00246568 */
ENTER(0x246568);
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
SET64(31, 0x2465a0); SET32(7, RW(3) + RW(7)); F_00259BE8(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00259C78(c); return; }
}

void F_002465B8(Ctx *c) { /* func_002465B8 */
ENTER(0x2465b8);
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
SET64(31, 0x2465fc); SET32(8, RW(7) + RW(8)); F_00259C18(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00259C78(c); return; }
}

void F_00246610(Ctx *c) { /* func_00246610 */
ENTER(0x246610);
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
SET64(31, 0x246650); SET32(8, RW(7) + RW(8)); F_00259C48(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00259C78(c); return; }
}

void F_00246668(Ctx *c) { /* func_00246668 */
ENTER(0x246668);
SET32(29, RW(29) + -16);
SET64(24, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(24) + 72);
SET64(14, (s32)rd32(c, (RW(5) + 8)));
SET64(6, (s32)rd32(c, (RW(5) + 4)));
if (RD(14) == RD(0)) { rt_break(c, 0x246684); goto L_00246688; }
L_00246688:;
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
{ int t = RD(2) == RD(0); SET32(8, RW(8) + RW(3)); if (t) goto L_002466FC; }
SET32(2, RW(8) - RW(5));
SET64(2, RSD(2) < RSD(15));
SET32(11, RW(11) + RW(2));
L_002466FC:;
mul_s(c, 0, 2, RSW(7), RSW(5));
SET32(6, RW(0) + 2);
if (RD(9) == RD(0)) { rt_break(c, 0x246708); goto L_0024670C; }
L_0024670C:;
SET32(12, RW(2) + RW(12));
div_s(c, 0, RSW(12), RSW(9));
SET64(5, c->lo.d[0]);
SET64(2, RSD(5) < RSD(10));
if (RD(2) != 0) SET64(10, RD(5));
SET64(3, RSD(13) < RSD(10));
if (RD(3) != 0) SET64(10, RD(13));
SET64(2, RSD(11) < RSD(10));
{ int t = RD(14) != RD(6); if (RD(2) != 0) SET64(10, RD(11)); if (t) goto L_00246748; }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(10) + RD(0));
SET32(29, RW(29) + 16); { F_002465B8(c); return; }
L_00246748:;
SET64(2, (s32)rd32(c, (RW(24) + 232)));
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00246760; }
SET64(5, RD(10) + RD(0));
SET32(29, RW(29) + 16); { F_00246610(c); return; }
L_00246760:;
SET64(5, RD(10) + RD(0));
SET32(29, RW(29) + 16); { F_00246568(c); return; }
}

void F_00246770(Ctx *c) { /* func_00246770 */
ENTER(0x246770);
{ int t = RSD(6) <= 0;  if (t) goto L_00246794; }
L_00246778:;
SET64(2, rd16(c, (RW(5) + 0)));
SET32(5, RW(5) + 2);
SET32(6, RW(6) + -1);
wr16(c, (RW(4) + 0), (u16)RW(2));
{ int t = RSD(6) > 0; SET32(4, RW(4) + 2); if (t) { POLL(); goto L_00246778; } }
L_00246794:;
 return;
}

void F_002467A0(Ctx *c) { /* func_002467A0 */
ENTER(0x2467a0);
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
SET64(31, 0x2467d8); SET64(6, RD(19) + RD(0)); F_00246770(c);
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
SET32(29, RW(29) + 48); { F_00246770(c); return; }
}

void F_00246810(Ctx *c) { /* func_00246810 */
ENTER(0x246810);
SET32(29, RW(29) + -16);
SET32(5, RW(5) << 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(7) + RD(0));
SET32(5, RW(4) + RW(5));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246770(c); return; }
}

void F_00246830(Ctx *c) { /* func_00246830 */
ENTER(0x246830);
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
if (RD(17) == RD(0)) { rt_break(c, 0x246870); goto L_00246874; }
L_00246874:;
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
SET64(31, 0x2468a8); SET64(21, (s32)rd32(c, (RW(20) + 32))); F_00259CD8(c);
SET64(3, (s32)rd32(c, (RW(20) + 8)));
SET32(16, RW(17) - RW(16));
mul_s(c, 0, 17, RSW(2), RSW(17));
mul_s(c, 0, 18, RSW(18), RSW(3));
SET32(16, RW(16) + -1);
mul_s(c, 1, 19, RSW(2), RSW(19));
if (RD(3) == RD(0)) { rt_break(c, 0x2468c4); goto L_002468C8; }
L_002468C8:;
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
{ int t = RD(2) != RD(0); SET32(21, RW(21) - RW(23)); if (t) goto L_00246988; }
SET64(2, RD(3) + RD(0));
{ int t = RD(2) == RD(4); SET64(4, RD(30) + RD(0)); if (t) goto L_00246910; }
SET64(2, (s32)rd32(c, (RW(22) + 232)));
{ int t = RD(2) == RD(0); SET64(30, rd64(c, (RW(29) + 80))); if (t) goto L_00246950; }
L_00246910:;
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
SET32(29, RW(29) + 96); { F_002467A0(c); return; }
L_00246950:;
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
SET32(29, RW(29) + 96); { F_00246810(c); return; }
L_00246988:;
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

void F_002469B8(Ctx *c) { /* func_002469B8 */
ENTER(0x2469b8);
SET32(29, RW(29) + -48);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
if (RD(3) != RD(2)) { SET32(2, RW(0) + 2); goto L_00246A2C; }
SET64(31, 0x2469ec); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259BE0(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_00246A28; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x246a0c); SET32(7, RW(16) + 112); rt_call(c, t); }
SET64(31, 0x246a14); SET64(4, RD(16) + RD(0)); F_00246668(c);
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 4), RW(2));
SET32(3, RW(0) + 2); goto L_00246A2C;
L_00246A28:;
SET32(2, RW(0) + 2);
L_00246A2C:;
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00246AF0; }
SET64(31, 0x246a3c); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259CF0(c);
SET64(31, 0x246a44); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259BE0(c);
SET32(3, RW(0) + 3);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00246AF0; }
SET64(2, (s32)rd32(c, (RW(16) + 232)));
{ int t = RD(2) == RD(0);  if (t) goto L_00246AC0; }
SET64(31, 0x246a64); SET64(17, (s32)rd32(c, (RW(16) + 8))); F_00247970(c);
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET32(2, RW(2) << 5);
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00246AB8; }
SET64(19, (s64)(s32)0x3f0000);
SET64(6, (s32)rd32(c, (RW(17) + 32)));
L_00246A80:;
SET32(7, RW(18) << 1);
SET64(2, (s32)rd32(c, (RW(17) + 36)));
SET64(4, RD(16) + RD(0));
SET32(6, RW(7) + RW(6));
SET64(3, (s32)rd32(c, (RW(19) + -24724)));
SET64(5, (s16)rd16(c, (RW(6) + 0)));
SET32(7, RW(2) + RW(7));
{ u32 t = RW(3); SET64(31, 0x246aa4); SET32(18, RW(18) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET32(2, RW(2) << 5);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(6, (s32)rd32(c, (RW(17) + 32))); { POLL(); goto L_00246A80; } }
L_00246AB8:;
SET64(31, 0x246ac0);  F_00247988(c);
L_00246AC0:;
SET64(31, 0x246ac8); SET64(4, RD(16) + RD(0)); F_00246830(c);
SET64(31, 0x246ad0); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259CC0(c);
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x246ae4); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00246AF0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00246B08(Ctx *c) { /* func_00246B08 */
ENTER(0x246b08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s16)rd16(c, (RW(16) + 152)));
if (RD(3) != RD(0)) { SET32(2, RW(0) + 10); goto L_00246B38; }
SET64(31, 0x246b2c);  F_002469B8(c);
SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00246BC4;
L_00246B38:;
if (RD(3) != RD(2)) { SET32(2, RW(0) + 2); goto L_00246B50; }
SET64(31, 0x246b48);  F_002441B0(c);
SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00246BC4;
L_00246B50:;
if (RD(3) != RD(2)) { SET32(2, RW(0) + 3); goto L_00246B68; }
SET64(31, 0x246b60);  F_00246ED0(c);
SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00246BC4;
L_00246B68:;
if (RD(3) != RD(2)) { SET32(2, RW(0) + 4); goto L_00246B80; }
SET64(31, 0x246b78);  F_00244B40(c);
SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00246BC4;
L_00246B80:;
if (RD(3) != RD(2)) { SET32(2, RW(0) + 1); goto L_00246B98; }
SET64(31, 0x246b90);  F_002455A8(c);
SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00246BC4;
L_00246B98:;
if (RD(3) != RD(2)) { SET32(2, RW(0) + 15); goto L_00246BB0; }
SET64(31, 0x246ba8);  F_002478B8(c);
SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00246BC4;
L_00246BB0:;
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(16) + 252))); goto L_00246BC4; }
SET64(31, 0x246bc0);  F_00243FB0(c);
SET64(2, (s32)rd32(c, (RW(16) + 252)));
L_00246BC4:;
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00246BE0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00246BF0(c); return; }
L_00246BE0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00246BF0(Ctx *c) { /* func_00246BF0 */
ENTER(0x246bf0);
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
{ u32 t = RW(7); SET64(31, 0x246c3c); SET32(6, RW(6) << 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 148)));
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 244), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00246C58(Ctx *c) { /* func_00246C58 */
ENTER(0x246c58);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -24704);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
L_00246C80:;
SET64(2, (s16)rd16(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00246C98; }
SET64(31, 0x246c94); SET64(4, RD(16) + RD(0)); F_00246B08(c);
SET32(17, RW(17) + -1);
L_00246C98:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 260); if (t) { POLL(); goto L_00246C80; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00246CB8(Ctx *c) { /* func_00246CB8 */
ENTER(0x246cb8);
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
{ int t = RD(4) == RD(15); SET64(2, RSD(4) < (s64)2); if (t) goto L_00246D58; }
if (RD(2) == RD(0)) { SET64(2, RSD(4) < (s64)4); goto L_00246D18; }
if (RD(4) == RD(0)) { SET32(3, RW(0) + 16); goto L_00246D28; }
SET32(3, RW(0) + 2); goto L_00246DA0;
L_00246D18:;
if (RD(2) == RD(0)) { SET32(3, RW(0) + 2); goto L_00246DA0; }
SET32(3, RW(0) + 4); goto L_00246D78;
L_00246D28:;
wr8(c, (RW(8) + 0), (u8)RW(3));
SET64(2, (s8)rd8(c, (RW(10) + 0)));
SET32(2, RW(2) << 1);
wr8(c, (RW(9) + 0), (u8)RW(2));
wr32(c, (RW(13) + 0), RW(15));
wr16(c, (RW(5) + 0), (u16)RW(0));
SET64(2, (s32)rd32(c, (RW(12) + 12)));
SET32(3, RW(2) >> 31);
SET32(2, RW(2) + RW(3));
SET32(2, RSW(2) >> 1); goto L_00246D98;
L_00246D58:;
SET32(2, RW(0) + 8);
wr8(c, (RW(8) + 0), (u8)RW(2));
SET64(3, (s8)rd8(c, (RW(10) + 0)));
wr8(c, (RW(9) + 0), (u8)RW(3));
wr32(c, (RW(13) + 0), RW(4));
wr16(c, (RW(5) + 0), (u16)RW(4));
SET64(2, (s32)rd32(c, (RW(12) + 12))); goto L_00246D98;
L_00246D78:;
SET32(4, RW(0) + 2);
wr8(c, (RW(8) + 0), (u8)RW(3));
SET64(2, (s8)rd8(c, (RW(10) + 0)));
wr8(c, (RW(9) + 0), (u8)RW(2));
wr32(c, (RW(13) + 0), RW(4));
wr16(c, (RW(5) + 0), (u16)RW(4));
SET64(2, (s32)rd32(c, (RW(12) + 12)));
SET32(2, RW(2) << 1);
L_00246D98:;
wr32(c, (RW(14) + 0), RW(2));
SET32(3, RW(0) + 2);
L_00246DA0:;
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

void F_00246DD8(Ctx *c) { /* func_00246DD8 */
ENTER(0x246dd8);
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
SET64(31, 0x246e40); wr32(c, (RW(29) + 8), RW(18)); F_00246CB8(c);
if (RSD(2) >= 0) { wr32(c, (RW(16) + 52), RW(0)); goto L_00246E50; }
SET64(2, RD(0) + RD(0)); goto L_00246EB0;
L_00246E50:;
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
L_00246EB0:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void F_00246ED0(Ctx *c) { /* func_00246ED0 */
ENTER(0x246ed0);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_00247004; }
SET64(31, 0x246f04); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259BE0(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_00247004; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x246f24); SET32(7, RW(16) + 112); rt_call(c, t); }
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
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_00246FB8; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 1);
{ int t = RSD(9) <= 0; SET32(11, RW(11) + RW(2)); if (t) goto L_00246FE4; }
SET64(7, RD(18) + RD(0));
L_00246F80:;
SET32(3, RW(8) << 1);
SET32(8, RW(8) + 1);
SET64(5, rd16(c, (RW(7) + 0)));
SET32(4, RW(3) + RW(10));
SET64(6, RSD(8) < RSD(9));
SET32(3, RW(3) + RW(11));
wr16(c, (RW(4) + 0), (u16)RW(5));
SET64(2, rd16(c, (RW(7) + 2)));
SET32(7, RW(7) + 4);
{ int t = RD(6) != RD(0); wr16(c, (RW(3) + 0), (u16)RW(2)); if (t) { POLL(); goto L_00246F80; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_00246FE4;
L_00246FB8:;
{ int t = RSD(9) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00246FE4; }
L_00246FC0:;
SET32(2, RW(8) << 1);
SET32(8, RW(8) + 1);
SET32(3, RW(2) + RW(18));
SET32(2, RW(2) + RW(10));
SET64(4, rd16(c, (RW(3) + 0)));
SET64(5, RSD(8) < RSD(9));
{ int t = RD(5) != RD(0); wr16(c, (RW(2) + 0), (u16)RW(4)); if (t) { POLL(); goto L_00246FC0; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_00246FE4:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(9), RSW(2));
wr32(c, (RW(16) + 144), RW(9));
SET32(2, RW(2) << 1);
wr32(c, (RW(16) + 148), RW(2));
L_00247004:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00247030; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x247024); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00247030:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00247048(Ctx *c) { /* func_00247048 */
ENTER(0x247048);
SET64(5, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 4);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x247060); SET32(5, RW(5) + -23512); F_00127180(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_00247070(Ctx *c) { /* func_00247070 */
ENTER(0x247070);
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
L_002470C8:;
SET64(2, RSD(16) < RSD(18));
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(17) + -20544))); if (t) goto L_002470E8; }
SET32(4, RW(19) + RW(16));
SET64(31, 0x2470e0); SET32(6, RW(0) + 4); F_00127180(c);
if (RD(2) != RD(0)) { SET32(16, RW(16) + 1); { POLL(); goto L_002470C8; } }
L_002470E8:;
{ int t = RD(16) == RD(18); SET32(2, RW(0) + -1); if (t) goto L_00247270; }
SET64(3, RD(16) & 0x3);
if (RD(3) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00247274; }
SET32(4, RW(19) + RW(16));
SET32(17, RW(4) + 8);
SET64(3, (s16)rd16(c, (RW(17) + 0)));
SET64(3, RSD(3) < (s64)2);
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00247274; }
SET64(16, RD(0) + RD(0));
SET64(21, (s64)(s32)0x3f0000);
L_00247120:;
SET64(2, RSD(16) < RSD(18));
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(21) + -20540))); if (t) goto L_00247140; }
SET32(4, RW(19) + RW(16));
SET64(31, 0x247138); SET32(6, RW(0) + 4); F_00127180(c);
if (RD(2) != RD(0)) { SET32(16, RW(16) + 1); { POLL(); goto L_00247120; } }
L_00247140:;
{ int t = RD(16) == RD(18); SET32(2, RW(0) + -1); if (t) goto L_00247270; }
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
if (RD(2) == RD(0)) { rt_break(c, 0x2471a0); goto L_002471A4; }
L_002471A4:;
SET64(2, (s32)rd32(c, (RW(29) + 96)));
SET64(3, c->lo.d[0]);
wr32(c, (RW(2) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(29) + 104)));
wr32(c, (RW(4) + 0), RW(7));
SET64(5, (s8)rd8(c, (RW(20) + 0)));
{ int t = RD(5) != RD(8); SET64(3, rd8(c, (RW(20) + 0))); if (t) goto L_002471D0; }
SET64(2, (s32)rd32(c, (RW(29) + 112)));
wr16(c, (RW(2) + 0), (u16)RW(0)); goto L_00247238;
L_002471D0:;
SET32(2, RW(0) + 8);
{ int t = RD(5) != RD(2); SET32(2, RW(0) + 4); if (t) goto L_002471E8; }
SET64(4, (s32)rd32(c, (RW(29) + 112)));
wr16(c, (RW(4) + 0), (u16)RW(7)); goto L_00247238;
L_002471E8:;
{ int t = RD(5) != RD(2); SET32(4, RW(0) + 2); if (t) goto L_0024723C; }
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
if (RD(2) == RD(0)) { rt_break(c, 0x24721c); goto L_00247220; }
L_00247220:;
SET64(2, (s32)rd32(c, (RW(29) + 96)));
SET64(3, c->lo.d[0]);
wr32(c, (RW(2) + 0), RW(3));
wr8(c, (RW(20) + 0), (u8)RW(8));
SET64(2, (s32)rd32(c, (RW(29) + 112)));
wr16(c, (RW(2) + 0), (u16)RW(4));
L_00247238:;
SET64(3, rd8(c, (RW(20) + 0)));
L_0024723C:;
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_00247270; }
SET64(3, (s8)rd8(c, (RW(23) + 0)));
{ int t = RD(3) == RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_00247274; }
SET64(3, rd8(c, (RW(22) + 0)));
SET32(3, RW(3) + -1);
SET64(3, RD(3) < (u64)(s64)2);
{ int t = RD(3) == RD(0); SET64(17, rd64(c, (RW(29) + 24))); if (t) goto L_00247278; }
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) != 0) SET64(2, RD(0));
L_00247270:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00247274:;
SET64(17, rd64(c, (RW(29) + 24)));
L_00247278:;
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

void F_002472A0(Ctx *c) { /* func_002472A0 */
ENTER(0x2472a0);
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
SET64(31, 0x24730c); wr32(c, (RW(29) + 8), RW(18)); F_00247070(c);
if (RSD(2) >= 0) { wr32(c, (RW(16) + 52), RW(0)); goto L_00247320; }
SET64(2, RD(0) + RD(0)); goto L_0024737C;
L_00247320:;
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
L_0024737C:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void F_002473A0(Ctx *c) { /* func_002473A0 */
ENTER(0x2473a0);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_002474D4; }
SET64(31, 0x2473d4); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259BE0(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_002474D4; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x2473f4); SET32(7, RW(16) + 112); rt_call(c, t); }
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
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_00247488; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 1);
{ int t = RSD(9) <= 0; SET32(11, RW(11) + RW(2)); if (t) goto L_002474B4; }
SET64(7, RD(18) + RD(0));
L_00247450:;
SET32(3, RW(8) << 1);
SET32(8, RW(8) + 1);
SET64(5, rd16(c, (RW(7) + 0)));
SET32(4, RW(3) + RW(10));
SET64(6, RSD(8) < RSD(9));
SET32(3, RW(3) + RW(11));
wr16(c, (RW(4) + 0), (u16)RW(5));
SET64(2, rd16(c, (RW(7) + 2)));
SET32(7, RW(7) + 4);
{ int t = RD(6) != RD(0); wr16(c, (RW(3) + 0), (u16)RW(2)); if (t) { POLL(); goto L_00247450; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_002474B4;
L_00247488:;
{ int t = RSD(9) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_002474B4; }
L_00247490:;
SET32(2, RW(8) << 1);
SET32(8, RW(8) + 1);
SET32(3, RW(2) + RW(18));
SET32(2, RW(2) + RW(10));
SET64(4, rd16(c, (RW(3) + 0)));
SET64(5, RSD(8) < RSD(9));
{ int t = RD(5) != RD(0); wr16(c, (RW(2) + 0), (u16)RW(4)); if (t) { POLL(); goto L_00247490; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_002474B4:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(9), RSW(2));
wr32(c, (RW(16) + 144), RW(9));
SET32(2, RW(2) << 1);
wr32(c, (RW(16) + 148), RW(2));
L_002474D4:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00247500; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x2474f4); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00247500:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00247518(Ctx *c) { /* func_00247518 */
ENTER(0x247518);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_0024766C; }
SET64(31, 0x24754c); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259BE0(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_0024766C; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x24756c); SET32(7, RW(16) + 112); rt_call(c, t); }
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
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_00247618; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 1);
{ int t = RSD(9) <= 0; SET32(12, RW(10) + RW(2)); if (t) goto L_00247650; }
SET64(7, RD(18) + RD(0));
SET64(10, RD(0) | 0xff80);
L_002475D0:;
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
{ int t = RD(6) != RD(0); wr16(c, (RW(4) + 0), (u16)RW(2)); if (t) { POLL(); goto L_002475D0; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_00247650;
L_00247618:;
{ int t = RSD(9) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_00247650; }
SET64(5, RD(11) + RD(0));
SET64(6, RD(0) | 0xff80);
L_00247628:;
SET32(2, RW(18) + RW(8));
SET32(8, RW(8) + 1);
SET64(3, rd8(c, (RW(2) + 0)));
SET64(4, RSD(8) < RSD(9));
SET32(3, RW(3) + RW(6));
SET32(3, RW(3) << 8);
wr16(c, (RW(5) + 0), (u16)RW(3));
{ int t = RD(4) != RD(0); SET32(5, RW(5) + 2); if (t) { POLL(); goto L_00247628; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_00247650:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(9), RSW(2));
wr32(c, (RW(16) + 144), RW(9));
wr32(c, (RW(16) + 148), RW(2));
L_0024766C:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00247698; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x24768c); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00247698:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002476B0(Ctx *c) { /* func_002476B0 */
ENTER(0x2476b0);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 72);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(3) != RD(2); SET64(18, (s32)rd32(c, (RW(17) + 0))); if (t) goto L_0024780C; }
SET64(31, 0x2476e4); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00259BE0(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 4))); goto L_0024780C; }
SET64(4, (s32)rd32(c, (RW(16) + 124)));
SET32(5, RW(16) + 104);
SET64(2, (s32)rd32(c, (RW(16) + 120)));
SET32(6, RW(16) + 108);
{ u32 t = RW(2); SET64(31, 0x247704); SET32(7, RW(16) + 112); rt_call(c, t); }
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
{ int t = RD(4) != RD(6); SET64(3, rd8(c, (RW(16) + 14))); if (t) goto L_002477B0; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 1);
{ int t = RSD(9) <= 0; SET32(11, RW(11) + RW(2)); if (t) goto L_002477EC; }
SET64(7, RD(18) + RD(0));
L_00247760:;
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
{ int t = RD(6) != RD(0); wr16(c, (RW(4) + 0), (u16)RW(3)); if (t) { POLL(); goto L_00247760; } }
SET64(3, rd8(c, (RW(16) + 14))); goto L_002477EC;
L_002477B0:;
{ int t = RSD(9) <= 0; SET64(8, RD(0) + RD(0)); if (t) goto L_002477EC; }
SET64(5, RD(18) + RD(0));
SET64(6, RD(10) + RD(0));
L_002477C0:;
SET64(2, rd8(c, (RW(5) + 1)));
SET32(8, RW(8) + 1);
SET64(3, rd8(c, (RW(5) + 0)));
SET32(5, RW(5) + 2);
SET32(2, RW(2) << 8);
SET64(4, RSD(8) < RSD(9));
SET64(3, RD(3) | RD(2));
wr16(c, (RW(6) + 0), (u16)RW(3));
{ int t = RD(4) != RD(0); SET32(6, RW(6) + 2); if (t) { POLL(); goto L_002477C0; } }
SET64(3, rd8(c, (RW(16) + 14)));
L_002477EC:;
SET32(2, RW(3) << 24);
SET32(3, RW(0) + 2);
SET32(2, RSW(2) >> 24);
wr32(c, (RW(16) + 4), RW(3));
mul_s(c, 0, 2, RSW(9), RSW(2));
wr32(c, (RW(16) + 144), RW(9));
SET32(2, RW(2) << 1);
wr32(c, (RW(16) + 148), RW(2));
L_0024780C:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00247838; }
SET64(3, (s32)rd32(c, (RW(16) + 128)));
SET64(4, (s32)rd32(c, (RW(16) + 132)));
SET64(5, (s32)rd32(c, (RW(16) + 148)));
{ u32 t = RW(3); SET64(31, 0x24782c); SET64(6, (s32)rd32(c, (RW(16) + 144))); rt_call(c, t); }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00247838:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00247850(Ctx *c) { /* func_00247850 */
ENTER(0x247850);
SET64(5, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 4);
SET32(5, RW(5) + -23488);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x247870); SET64(16, RD(4) + RD(0)); F_00127180(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(16) + 8);
SET32(5, RW(5) + -23480);
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 4); if (t) goto L_002478A0; }
SET64(31, 0x24788c);  F_00127180(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002478A4; }
SET32(2, RW(0) + 1); goto L_002478A4;
L_002478A0:;
SET64(2, RD(0) + RD(0));
L_002478A4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002478B8(Ctx *c) { /* func_002478B8 */
ENTER(0x2478b8);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s16)rd16(c, (RW(4) + 156)));
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_002478E0; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002476B0(c); return; }
L_002478E0:;
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_002478F0; }
SET32(29, RW(29) + 16); { F_00247518(c); return; }
L_002478F0:;
{ int t = RD(3) != RD(0);  if (t) goto L_00247908; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002473A0(c); return; }
L_00247908:;
SET32(29, RW(29) + 16); return;
}

void F_00247910(Ctx *c) { /* func_00247910 */
ENTER(0x247910);
SET64(3, (s64)(s32)0x3f0000);
SET32(5, RW(0) + 1);
SET32(3, RW(3) + -20528);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) != RD(5); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_00247938; }
wr32(c, (RW(2) + -20536), RW(0));
L_00247938:;
 return;
}

void F_00247940(Ctx *c) { /* func_00247940 */
ENTER(0x247940);
SET64(2, (s64)(s32)0x3f0000);
SET32(2, RW(2) + -20528);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) + -1);
wr32(c, (RW(2) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_00247964; }
wr32(c, (RW(2) + -20536), RW(0));
L_00247964:;
 return;
}

void F_00247970(Ctx *c) { /* func_00247970 */
ENTER(0x247970);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269118(c); return; }
}

void F_00247988(Ctx *c) { /* func_00247988 */
ENTER(0x247988);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269130(c); return; }
}

void F_002479A0(Ctx *c) { /* func_002479A0 */
ENTER(0x2479a0);
 return;
}

void F_002479A8(Ctx *c) { /* func_002479A8 */
ENTER(0x2479a8);
 return;
}

void F_002479B0(Ctx *c) { /* func_002479B0 */
ENTER(0x2479b0);
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
{ int t = c->fcc; c->f[21].u = c->f[20].u; if (t) goto L_00247A14; }
SET64(31, 0x247a10);  F_0011F8F8(c);
c->f[21].u = c->f[0].u;
L_00247A14:;
c->f[12].u = RW(16);
c->f[12].f = (f32)(s32)c->f[12].u;
SET64(1, (s64)(s32)0x40c90000);
SET64(1, RD(1) | 0xfda);
c->f[0].u = RW(1);
c->f[1].u = RW(17);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[12].f = fpu(F(12) * F(0));
c->f[12].f = fpu_div(F(12), F(1));
SET64(31, 0x247a48);  F_0011F450(c);
c->f[12].u = c->f[22].u;
c->f[1].u = c->f[20].u;
c->fcc = F(1) == F(1);
{ int t = c->fcc; c->f[21].f = fpu(F(21) - F(0)); if (t) goto L_00247A68; }
SET64(31, 0x247a64);  F_0011F8F8(c);
c->f[1].u = c->f[0].u;
L_00247A68:;
SET64(1, (s64)(s32)0x3f800000);
c->f[0].u = RW(1);
c->f[20].f = fpu(F(1) - F(0));
c->f[0].f = fpu(F(21) - F(20));
c->f[12].f = fpu(F(21) + F(20));
c->f[12].f = fpu(F(12) * F(0));
c->f[0].f = fpu_sqrt(F(12));
c->fcc = F(0) == F(0);
if (c->fcc) { c->f[0].f = fpu(F(21) - F(0)); goto L_00247AA4; }
SET64(31, 0x247aa0);  F_0011F8F8(c);
c->f[0].f = fpu(F(21) - F(0));
L_00247AA4:;
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

void F_00247B10(Ctx *c) { /* func_00247B10 */
ENTER(0x247b10);
SET64(8, (s64)(s32)0x7fff0000);
SET32(5, RW(5) + -1);
SET64(8, RD(8) | 0xffff);
{ int t = RSD(5) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_00247B6C; }
SET64(3, rd16(c, (RW(4) + 0)));
SET32(2, RW(0) + 128);
if (RD(3) != RD(2)) { SET32(7, RW(7) + 2); goto L_00247B40; }
SET64(8, RD(0) + RD(0)); goto L_00247B6C;
L_00247B40:;
SET64(2, RSD(7) < RSD(5));
{ int t = RD(2) == RD(0); SET32(3, RW(4) + RW(7)); if (t) goto L_00247B6C; }
SET64(3, rd16(c, (RW(3) + 0)));
SET32(2, RW(0) + 128);
if (RD(3) != RD(2)) { SET32(7, RW(7) + 2); { POLL(); goto L_00247B40; } }
SET64(2, RSD(7) < RSD(8));
if (RD(2) != 0) SET64(8, RD(7));
L_00247B6C:;
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xffff);
if (RD(8) == RD(2)) { wr16(c, (RW(6) + 0), (u16)RW(0)); goto L_00247B88; }
wr16(c, (RW(6) + 0), (u16)RW(8));
SET64(2, RD(0) + RD(0)); return;
L_00247B88:;
SET32(2, RW(0) + -1); return;
}

void F_00247B90(Ctx *c) { /* func_00247B90 */
ENTER(0x247b90);
SET64(8, RD(5) + RD(0));
SET32(29, RW(29) + -32);
SET64(3, RSD(8) < (s64)16);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(7, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(17, RD(6) + RD(0));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00247C20; }
SET64(3, rd8(c, (RW(7) + 0)));
SET64(5, RD(0) | 0x8000);
SET64(4, rd8(c, (RW(7) + 1)));
SET32(3, RW(3) << 8);
SET64(4, RD(4) | RD(3));
{ int t = RD(4) != RD(5); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00247C24; }
SET64(3, rd8(c, (RW(7) + 2)));
SET32(5, RW(0) + 32767);
SET64(4, rd8(c, (RW(7) + 3)));
SET64(5, RSD(5) < RSD(8));
SET32(3, RW(3) << 8);
SET64(3, RD(3) | RD(4));
SET32(4, RW(3) + -2);
SET32(16, RW(3) + 4);
{ int t = RD(5) == RD(0); SET32(4, RW(7) + RW(4)); if (t) goto L_00247C20; }
SET64(5, (s64)(s32)0x4b0000);
SET32(6, RW(0) + 6);
SET64(31, 0x247c0c); SET32(5, RW(5) + -23472); F_00127180(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00247C20; }
if (RD(17) != RD(0)) { wr16(c, (RW(17) + 0), (u16)RW(16)); goto L_00247C1C; }
L_00247C1C:;
SET32(2, RW(0) + 1);
L_00247C20:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00247C24:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00247C38(Ctx *c) { /* func_00247C38 */
ENTER(0x247c38);
SET64(5, RSD(5) < (s64)16);
SET64(12, RD(4) + RD(0));
SET64(13, (s32)rd32(c, (RW(29) + 8)));
{ int t = RD(5) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_00247D30; }
SET64(3, rd8(c, (RW(12) + 0)));
SET64(5, RD(0) | 0x8000);
SET64(4, rd8(c, (RW(12) + 1)));
SET32(3, RW(3) << 8);
SET64(4, RD(4) | RD(3));
{ int t = RD(4) != RD(5); SET32(2, RW(0) + -2); if (t) goto L_00247D30; }
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
if (RD(8) != RD(0)) { SET64(2, (s8)rd8(c, (RW(9) + 0))); goto L_00247D10; }
wr32(c, (RW(13) + 0), RW(0)); goto L_00247D2C;
L_00247D10:;
if (RD(8) == RD(0)) { rt_break(c, 0x247d14); goto L_00247D18; }
L_00247D18:;
SET32(2, RW(2) << 3);
SET32(2, RW(2) + -16);
div_s(c, 0, RSW(2), RSW(8));
SET64(2, c->lo.d[0]);
wr32(c, (RW(13) + 0), RW(2));
L_00247D2C:;
SET64(2, RD(0) + RD(0));
L_00247D30:;
 return;
}

void F_00247D38(Ctx *c) { /* func_00247D38 */
ENTER(0x247d38);
SET64(5, RSD(5) < (s64)18);
SET64(7, RD(4) + RD(0));
{ int t = RD(5) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_00247DB0; }
SET64(3, rd16(c, (RW(7) + 0)));
SET64(5, RD(0) | 0x8000);
SET32(8, RW(0) + -256);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5); SET32(2, RW(0) + -2); if (t) goto L_00247DB0; }
SET64(4, rd16(c, (RW(7) + 2)));
SET64(3, rd8(c, (RW(7) + 3)));
SET32(4, RW(4) << 8);
SET64(4, RD(4) & RD(8));
SET64(3, RD(3) | RD(4));
SET32(3, RW(3) << 16);
SET32(3, RSW(3) >> 16);
SET64(3, RSD(3) < (s64)14);
{ int t = RD(3) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_00247DB0; }
SET64(4, rd16(c, (RW(7) + 16)));
SET64(2, RD(0) + RD(0));
SET32(3, RW(4) << 8);
SET32(4, RW(4) >> 8);
SET64(3, RD(3) & RD(8));
SET64(4, RD(4) | RD(3));
wr16(c, (RW(6) + 0), (u16)RW(4));
L_00247DB0:;
 return;
}

void F_00247DB8(Ctx *c) { /* func_00247DB8 */
ENTER(0x247db8);
SET64(5, RSD(5) < (s64)20);
SET64(8, RD(4) + RD(0));
{ int t = RD(5) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_00247E28; }
SET64(3, rd16(c, (RW(8) + 0)));
SET64(5, RD(0) | 0x8000);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5); SET32(2, RW(0) + -2); if (t) goto L_00247E28; }
SET64(3, rd16(c, (RW(8) + 2)));
SET32(5, RW(0) + -256);
SET64(4, rd8(c, (RW(8) + 3)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(5));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
SET32(4, RSW(4) >> 16);
SET64(4, RSD(4) < (s64)16);
{ int t = RD(4) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_00247E28; }
SET64(4, rd8(c, (RW(8) + 18)));
SET64(2, RD(0) + RD(0));
wr8(c, (RW(6) + 0), (u8)RW(4));
SET64(3, rd8(c, (RW(8) + 19)));
wr8(c, (RW(7) + 0), (u8)RW(3));
L_00247E28:;
 return;
}

void F_00247E30(Ctx *c) { /* func_00247E30 */
ENTER(0x247e30);
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
SET64(31, 0x247e64); SET64(17, RD(5) + RD(0)); F_00247DB8(c);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_00247F48; }
SET64(2, rd8(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)4);
if (RD(2) != RD(0)) { wr16(c, (RW(19) + 2), (u16)RW(0)); goto L_00247F38; }
SET64(3, RSD(17) < (s64)32);
{ int t = RD(3) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_00247F48; }
SET64(3, rd16(c, (RW(16) + 0)));
SET64(5, RD(0) | 0x8000);
SET32(6, RW(0) + -256);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5); SET32(2, RW(0) + -2); if (t) goto L_00247F48; }
SET64(4, rd16(c, (RW(16) + 2)));
SET64(3, rd8(c, (RW(16) + 3)));
SET32(4, RW(4) << 8);
SET64(4, RD(4) & RD(6));
SET64(3, RD(3) | RD(4));
SET32(3, RW(3) << 16);
SET32(3, RSW(3) >> 16);
SET64(3, RSD(3) < (s64)28);
{ int t = RD(3) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_00247F48; }
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
wr16(c, (RW(19) + 2), (u16)RW(3)); goto L_00247F44;
L_00247F38:;
wr16(c, (RW(18) + 2), (u16)RW(0));
wr16(c, (RW(19) + 0), (u16)RW(0));
wr16(c, (RW(18) + 0), (u16)RW(0));
L_00247F44:;
SET64(2, RD(0) + RD(0));
L_00247F48:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_00247F68(Ctx *c) { /* func_00247F68 */
ENTER(0x247f68);
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
SET64(31, 0x247fc0); SET64(6, RD(29) + RD(0)); F_00247DB8(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_002481A0; }
SET64(3, rd8(c, (RW(29) + 0)));
SET32(6, RW(0) + 48);
SET32(4, RW(0) + 60);
SET64(7, RD(3) ^ 0x4);
if (RD(7) == 0) SET64(6, RD(4));
SET64(3, RSD(17) < RSD(6));
if (RD(3) != RD(0)) { SET32(2, RW(0) + -1); goto L_0024819C; }
SET64(3, rd16(c, (RW(16) + 0)));
SET64(5, RD(0) | 0x8000);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5); SET32(14, RW(0) + -256); if (t) goto L_002480A0; }
SET64(3, rd16(c, (RW(16) + 2)));
SET32(5, RW(6) + -4);
SET64(4, rd8(c, (RW(16) + 3)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(14));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
SET32(4, RSW(4) >> 16);
SET64(4, RSD(4) < RSD(5));
{ int t = RD(4) == RD(0); SET32(3, RW(0) + 32); if (t) goto L_00248040; }
SET32(2, RW(0) + -1); goto L_0024819C;
L_00248040:;
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
{ int t = RD(4) == RD(8); wr16(c, (RW(18) + 0), (u16)RW(6)); if (t) goto L_002480A8; }
L_002480A0:;
SET32(2, RW(0) + -2); goto L_0024819C;
L_002480A8:;
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
L_0024819C:;
SET64(16, rd64(c, (RW(29) + 16)));
L_002481A0:;
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

void F_002481C8(Ctx *c) { /* func_002481C8 */
ENTER(0x2481c8);
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
SET64(31, 0x248210); SET32(7, RW(29) + 1); F_00247DB8(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_002483C4; }
SET64(3, rd8(c, (RW(29) + 0)));
SET32(6, RW(0) + 60);
SET32(4, RW(0) + 72);
SET64(7, RD(3) ^ 0x4);
if (RD(7) == 0) SET64(6, RD(4));
SET64(3, RSD(17) < RSD(6));
if (RD(3) != RD(0)) { SET32(2, RW(0) + -1); goto L_002483C0; }
SET64(3, rd16(c, (RW(16) + 0)));
SET64(5, RD(0) | 0x8000);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5); SET32(10, RW(0) + -256); if (t) goto L_00248300; }
SET64(3, rd16(c, (RW(16) + 2)));
SET32(5, RW(6) + -4);
SET64(4, rd8(c, (RW(16) + 3)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(10));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
SET32(4, RSW(4) >> 16);
SET64(4, RSD(4) < RSD(5));
{ int t = RD(4) == RD(0); SET32(3, RW(0) + 32); if (t) goto L_00248290; }
SET32(2, RW(0) + -1); goto L_002483C0;
L_00248290:;
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
{ int t = RD(3) == RD(8); SET32(9, RW(9) + 4); if (t) goto L_00248308; }
L_00248300:;
SET32(2, RW(0) + -2); goto L_002483C0;
L_00248308:;
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
L_002483C0:;
SET64(16, rd64(c, (RW(29) + 16)));
L_002483C4:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_002483E8(Ctx *c) { /* func_002483E8 */
ENTER(0x2483e8);
SET64(5, RSD(5) < (s64)16);
SET64(7, RD(4) + RD(0));
{ int t = RD(5) != RD(0); SET32(2, RW(0) + -1); if (t) goto L_0024843C; }
SET64(3, rd16(c, (RW(7) + 0)));
SET64(5, RD(0) | 0x8001);
SET32(4, RW(3) << 8);
SET32(3, RW(3) >> 8);
SET64(3, RD(3) | RD(4));
SET64(3, RD(3) & 0xffff);
{ int t = RD(3) != RD(5); SET32(2, RW(0) + -2); if (t) goto L_0024843C; }
SET64(3, rd16(c, (RW(7) + 2)));
SET32(5, RW(0) + -256);
SET64(4, rd8(c, (RW(7) + 3)));
SET64(2, RD(0) + RD(0));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(5));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) + 4);
wr16(c, (RW(6) + 0), (u16)RW(4));
L_0024843C:;
 return;
}

void F_00248448(Ctx *c) { /* func_00248448 */
ENTER(0x248448);
SET32(3, RW(6) + RW(7));
{ int t = RD(4) != RD(0); SET64(2, RD(3) + RD(0)); if (t) goto L_00248478; }
SET32(2, RW(5) + RW(3));
if (RD(7) == RD(0)) { rt_break(c, 0x24845c); goto L_00248460; }
L_00248460:;
SET32(2, RW(2) + 33);
div_u(c, 0, RW(2), RW(7));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 2, RSW(2), RSW(7));
SET32(2, RW(2) - RW(6)); return;
L_00248478:;
SET32(2, RW(5) + RW(2));
if (RD(7) == RD(0)) { rt_break(c, 0x248480); goto L_00248484; }
L_00248484:;
SET32(2, RW(2) + 57);
div_u(c, 0, RW(2), RW(7));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 2, RSW(2), RSW(7));
SET32(2, RW(2) - RW(6)); return;
}

void F_002484A0(Ctx *c) { /* func_002484A0 */
ENTER(0x2484a0);
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
{ int t = RSD(19) <= 0; SET64(14, (s16)rd16(c, (RW(20) + 2))); if (t) goto L_00248644; }
SET32(30, RW(0) + -256);
SET64(23, (s64)(s32)0x4b0000);
SET64(3, rd16(c, (RW(13) + 0)));
L_00248510:;
SET64(4, rd8(c, (RW(13) + 1)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(30));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
SET32(4, RSW(4) >> 16);
SET64(3, RD(4) & 0x8000);
{ int t = RD(3) != RD(0); SET64(2, RD(10) + RD(0)); if (t) goto L_00248650; }
SET64(2, rd16(c, (RW(18) + 0)));
SET32(13, RW(13) + 2);
SET64(9, RD(0) | 0x8000);
SET64(8, RD(0) | 0xffff);
mul_s(c, 0, 7, RSW(2), RSW(22));
SET64(2, RD(4) ^ RD(2));
SET64(2, RD(2) & 0x1fff);
SET32(25, RW(0) + 32767);
SET32(15, RW(2) + 1);
SET32(11, RW(23) + -23464);
SET32(3, RW(7) + RW(21));
SET32(7, RW(0) + 30);
SET64(3, RD(3) & 0x7fff);
wr16(c, (RW(18) + 0), (u16)RW(3));
L_00248570:;
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
{ int t = RD(2) == RD(0); SET64(3, RD(3) ^ 0x0); if (t) goto L_002485D4; }
if (RD(5) != 0) SET64(4, RD(25));
SET32(2, RW(0) + -32768);
if (RD(3) != 0) SET64(4, RD(2));
L_002485D4:;
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
{ int t = RD(3) == RD(0); SET64(12, RD(2) ^ 0x0); if (t) goto L_00248620; }
if (RD(5) != 0) SET64(4, RD(25));
SET32(2, RW(0) + -32768);
if (RD(12) != 0) SET64(4, RD(2));
L_00248620:;
SET64(5, RD(4) + RD(0));
SET32(7, RW(7) + -2);
wr16(c, (RW(6) + 0), (u16)RW(5));
{ int t = RSD(7) >= 0; SET32(6, RW(6) + 2); if (t) { POLL(); goto L_00248570; } }
SET32(10, RW(10) + 1);
SET64(2, RSD(10) < RSD(19));
if (RD(2) != RD(0)) { SET64(3, rd16(c, (RW(13) + 0))); { POLL(); goto L_00248510; } }
L_00248644:;
wr16(c, (RW(20) + 2), (u16)RW(14));
SET64(2, RD(19) + RD(0));
wr16(c, (RW(20) + 0), (u16)RW(5));
L_00248650:;
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

void F_00248680(Ctx *c) { /* func_00248680 */
ENTER(0x248680);
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
{ int t = RSD(6) <= 0; SET64(17, (s16)rd16(c, (RW(5) + 2))); if (t) goto L_002489FC; }
L_00248710:;
SET64(3, rd16(c, (RW(15) + 0)));
SET32(5, RW(0) + -256);
SET64(4, rd8(c, (RW(15) + 1)));
SET32(3, RW(3) << 8);
SET64(3, RD(3) & RD(5));
SET64(4, RD(4) | RD(3));
SET32(4, RW(4) << 16);
SET32(5, RSW(4) >> 16);
SET64(3, RD(5) & 0x8000);
{ int t = RD(3) != RD(0); SET32(2, RW(23) << 1); if (t) goto L_00248A18; }
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
{ int t = RD(3) != RD(0); SET64(3, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_00248A18; }
SET64(4, (s64)(s32)0x4b0000);
SET32(30, RW(4) + -23464);
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
L_002487E0:;
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
{ int t = RD(2) == RD(0); SET32(7, RSW(4) >> 24); if (t) goto L_00248840; }
SET64(2, RSD(6) < (s64)-32768);
SET64(3, RSD(13) < RSD(6));
if (RD(3) != 0) SET64(6, RD(13));
SET32(3, RW(0) + -32768);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_00248840:;
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
{ int t = RD(2) == RD(0); SET64(17, RD(25) + RD(0)); if (t) goto L_00248888; }
SET64(2, RSD(6) < (s64)-32768);
SET64(3, RSD(13) < RSD(6));
if (RD(3) != 0) SET64(6, RD(13));
SET32(3, RW(0) + -32768);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_00248888:;
SET64(25, RD(6) + RD(0));
SET32(3, RW(24) + RW(25));
if (RD(10) == RD(0)) { rt_break(c, 0x248894); goto L_00248898; }
L_00248898:;
SET32(2, RW(3) << 3);
SET32(2, RW(2) - RW(3));
div_s(c, 0, RSW(2), RSW(10));
SET64(2, c->lo.d[0]);
SET64(6, RD(2) + RD(0));
SET32(3, RW(6) + RW(16));
SET64(3, RD(11) < RD(3));
{ int t = RD(3) == RD(0); SET64(2, RD(14) & 0xf); if (t) goto L_002488D8; }
SET64(2, RSD(6) < (s64)-32768);
SET64(3, RSD(13) < RSD(6));
if (RD(3) != 0) SET64(6, RD(13));
SET32(3, RW(0) + -32768);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
SET64(2, RD(14) & 0xf);
L_002488D8:;
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
{ int t = RD(2) == RD(0); SET64(7, (s32)rd32(c, (RW(3) + 0))); if (t) goto L_00248940; }
SET64(2, RSD(6) < (s64)-32768);
SET64(3, RSD(13) < RSD(6));
if (RD(3) != 0) SET64(6, RD(13));
SET32(3, RW(0) + -32768);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_00248940:;
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
{ int t = RD(2) == RD(0); SET64(17, RD(25) + RD(0)); if (t) goto L_00248988; }
SET64(2, RSD(6) < (s64)-32768);
SET64(3, RSD(13) < RSD(6));
if (RD(3) != 0) SET64(6, RD(13));
SET32(3, RW(0) + -32768);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_00248988:;
SET64(25, RD(6) + RD(0));
SET32(3, RW(24) + RW(25));
if (RD(10) == RD(0)) { rt_break(c, 0x248994); goto L_00248998; }
L_00248998:;
SET32(2, RW(3) << 3);
SET32(2, RW(2) - RW(3));
div_s(c, 0, RSW(2), RSW(10));
SET64(2, c->lo.d[0]);
SET64(6, RD(2) + RD(0));
SET32(3, RW(6) + RW(16));
SET64(3, RD(11) < RD(3));
{ int t = RD(3) == RD(0); SET32(22, RW(22) + -2); if (t) goto L_002489D4; }
SET64(2, RSD(6) < (s64)-32768);
SET64(3, RSD(13) < RSD(6));
if (RD(3) != 0) SET64(6, RD(13));
SET32(3, RW(0) + -32768);
SET64(2, RD(2) ^ 0x0);
if (RD(2) != 0) SET64(6, RD(3));
L_002489D4:;
wr16(c, (RW(8) + 0), (u16)RW(6));
wr16(c, (RW(9) + 0), (u16)RW(6));
SET32(9, RW(9) + 2);
{ int t = RSD(22) >= 0; SET32(8, RW(8) + 2); if (t) { POLL(); goto L_002487E0; } }
SET64(3, (s32)rd32(c, (RW(29) + 20)));
SET32(23, RW(23) + 1);
SET64(2, RSD(23) < RSD(3));
{ int t = RD(2) != RD(0); SET32(15, RW(15) + 18); if (t) { POLL(); goto L_00248710; } }
L_002489FC:;
SET64(5, (s32)rd32(c, (RW(29) + 4)));
wr16(c, (RW(5) + 2), (u16)RW(12));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
wr16(c, (RW(5) + 0), (u16)RW(24));
SET64(6, (s32)rd32(c, (RW(29) + 8)));
wr16(c, (RW(6) + 2), (u16)RW(17));
wr16(c, (RW(6) + 0), (u16)RW(25));
L_00248A18:;
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

void F_00248A48(Ctx *c) { /* func_00248A48 */
ENTER(0x248a48);
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
{ int t = RSD(4) <= 0; SET64(16, (s16)rd16(c, (RW(9) + 2))); if (t) goto L_00248D48; }
L_00248AD0:;
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
{ int t = RD(3) != RD(0); SET64(4, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_00248D64; }
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
{ int t = RD(3) != RD(0); SET64(3, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_00248D64; }
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
L_00248BA0:;
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
SET32(3, RW(3) + -23464);
SET32(11, RW(2) + RW(3));
SET32(2, RW(5) + RW(22));
SET64(3, RSD(5) < (s64)-32768);
SET64(2, RD(21) < RD(2));
mul_s(c, 0, 17, RSW(18), RSW(10));
SET32(15, RW(15) + 1);
SET64(4, RSD(24) < RSD(5));
SET64(3, RD(3) ^ 0x0);
{ int t = RD(2) == RD(0); SET64(9, RD(6) & 0xf); if (t) goto L_00248C24; }
if (RD(4) != 0) SET64(5, RD(24));
SET32(2, RW(0) + -32768);
if (RD(3) != 0) SET64(5, RD(2));
L_00248C24:;
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
{ int t = RD(3) == RD(0); SET64(12, RD(2) ^ 0x0); if (t) goto L_00248C78; }
if (RD(4) != 0) SET64(5, RD(24));
SET32(2, RW(0) + -32768);
if (RD(12) != 0) SET64(5, RD(2));
L_00248C78:;
SET64(12, (s32)rd32(c, (RW(11) + 0)));
SET64(14, RD(5) + RD(0));
mul_s(c, 0, 2, RSW(19), RSW(14));
SET64(5, (s64)(s32)0x4b0000);
mul_s(c, 0, 4, RSW(12), RSW(23));
SET32(5, RW(5) + -23464);
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
{ int t = RD(2) == RD(0); SET64(3, RD(3) ^ 0x0); if (t) goto L_00248CE4; }
if (RD(4) != 0) SET64(5, RD(24));
SET32(2, RW(0) + -32768);
if (RD(3) != 0) SET64(5, RD(2));
L_00248CE4:;
SET64(13, RD(5) + RD(0));
SET32(5, RW(12) + RW(6));
SET32(2, RW(5) + RW(22));
SET64(3, RSD(5) < (s64)-32768);
SET64(2, RD(21) < RD(2));
SET64(4, RSD(24) < RSD(5));
{ int t = RD(2) == RD(0); SET64(3, RD(3) ^ 0x0); if (t) goto L_00248D10; }
if (RD(4) != 0) SET64(5, RD(24));
SET32(2, RW(0) + -32768);
if (RD(3) != 0) SET64(5, RD(2));
L_00248D10:;
SET64(14, RD(5) + RD(0));
SET32(30, RW(30) + -2);
wr16(c, (RW(25) + 0), (u16)RW(13));
SET32(25, RW(25) + 2);
wr16(c, (RW(8) + 0), (u16)RW(14));
{ int t = RSD(30) >= 0; SET32(8, RW(8) + 2); if (t) { POLL(); goto L_00248BA0; } }
SET64(6, (s32)rd32(c, (RW(29) + 20)));
SET32(15, RW(15) + 18);
SET64(3, (s32)rd32(c, (RW(29) + 24)));
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(3));
{ int t = RD(2) != RD(0); wr32(c, (RW(29) + 20), RW(6)); if (t) { POLL(); goto L_00248AD0; } }
L_00248D48:;
SET64(4, (s32)rd32(c, (RW(29) + 4)));
wr16(c, (RW(4) + 2), (u16)RW(10));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
wr16(c, (RW(4) + 0), (u16)RW(13));
SET64(5, (s32)rd32(c, (RW(29) + 8)));
wr16(c, (RW(5) + 2), (u16)RW(16));
wr16(c, (RW(5) + 0), (u16)RW(14));
L_00248D64:;
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

void F_00248D90(Ctx *c) { /* func_00248D90 */
ENTER(0x248d90);
SET64(2, (s64)(s32)0x3f0000);
SET32(10, RW(10) << 16);
SET32(11, RW(11) << 16);
SET64(3, (s32)rd32(c, (RW(2) + -20520)));
SET32(29, RW(29) + -48);
SET32(12, RSW(10) >> 16);
SET32(13, RSW(11) >> 16);
wr64(c, (RW(29) + 32), RD(31));
SET64(10, RD(12) + RD(0));
SET64(11, RD(13) + RD(0));
SET64(14, (s32)rd32(c, (RW(29) + 48)));
SET64(15, (s16)rd16(c, (RW(29) + 56)));
{ int t = RD(3) != RD(0); SET64(2, (s16)rd16(c, (RW(29) + 64))); if (t) goto L_00248DE0; }
SET64(31, rd64(c, (RW(29) + 32)));
wr32(c, (RW(29) + 64), RW(2));
wr32(c, (RW(29) + 56), RW(15));
SET32(29, RW(29) + 48); { F_00248A48(c); return; }
L_00248DE0:;
SET64(31, rd64(c, (RW(29) + 32)));
SET64(10, RD(12) + RD(0));
SET64(11, RD(13) + RD(0));
wr32(c, (RW(29) + 64), RW(2));
wr32(c, (RW(29) + 48), RW(14));
wr32(c, (RW(29) + 56), RW(15));
SET32(29, RW(29) + 48); { F_00248680(c); return; }
}

void F_00248E00(Ctx *c) { /* func_00248E00 */
ENTER(0x248e00);
SET64(4, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -20504);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x248e1c); SET32(6, RW(0) + 256); F_001273D0(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(3) + -20512), RW(0));
wr32(c, (RW(2) + -20508), RW(0));
SET32(29, RW(29) + 16); return;
}

void F_00248E38(Ctx *c) { /* func_00248E38 */
ENTER(0x248e38);
SET64(4, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -20504);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x248e54); SET32(6, RW(0) + 256); F_001273D0(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(3) + -20512), RW(0));
wr32(c, (RW(2) + -20508), RW(0));
SET32(29, RW(29) + 16); return;
}

void F_00248E70(Ctx *c) { /* func_00248E70 */
ENTER(0x248e70);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(2) + -20512), RW(4));
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + -20508), RW(5));
SET32(29, RW(29) + 16); { F_002698E0(c); return; }
}

void F_00248E98(Ctx *c) { /* func_00248E98 */
ENTER(0x248e98);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -20504);
SET64(5, RD(4) + RD(0));
SET64(4, RD(16) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x248ebc); SET32(6, RW(0) + 255); F_0012A978(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(3) + -20512)));
{ int t = RD(3) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00248ED8; }
SET64(2, (s64)(s32)0x3f0000);
{ u32 t = RW(3); SET64(31, 0x248ed8); SET64(4, (s32)rd32(c, (RW(2) + -20508))); rt_call(c, t); }
L_00248ED8:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00269248(c); return; }
}

void F_00248EF0(Ctx *c) { /* func_00248EF0 */
ENTER(0x248ef0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(2) + -20504);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
SET32(6, RW(0) + 255);
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x248f1c); SET64(4, RD(17) + RD(0)); F_0012A978(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x248f2c); SET32(6, RW(0) + 255); F_0012A610(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(3) + -20512)));
{ int t = RD(3) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00248F48; }
SET64(2, (s64)(s32)0x3f0000);
{ u32 t = RW(3); SET64(31, 0x248f48); SET64(4, (s32)rd32(c, (RW(2) + -20508))); rt_call(c, t); }
L_00248F48:;
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00269248(c); return; }
}

void F_00248F60(Ctx *c) { /* func_00248F60 */
ENTER(0x248f60);
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
if (RD(2) == RD(0)) { rt_break(c, 0x248f90); goto L_00248F94; }
L_00248F94:;
SET64(8, c->lo.d[0]);
SET64(7, c->hi.d[0]);
SET64(4, RD(8) + RD(0));
wr8(c, (RW(16) + 0), (u8)RW(7));
if (RD(4) != RD(0)) { SET32(5, RW(5) + 1); goto L_00248FB8; }
wr8(c, (RW(16) + 0), (u8)RW(0)); goto L_00248FF4;
L_00248FB8:;
SET64(2, RSD(5) < (s64)32);
{ int t = RD(2) == RD(0); SET32(6, RW(16) + RW(5)); if (t) goto L_00248FF4; }
SET32(2, RW(0) + 10);
SET32(3, RW(0) + 10);
div_s(c, 0, RSW(4), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x248fd4); goto L_00248FD8; }
L_00248FD8:;
SET64(8, c->lo.d[0]);
SET64(7, c->hi.d[0]);
SET64(4, RD(8) + RD(0));
wr8(c, (RW(6) + 0), (u8)RW(7));
if (RD(4) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_00248FB8; } }
wr8(c, (RW(6) + 0), (u8)RW(0));
L_00248FF4:;
SET64(2, (s64)(s32)0x520000);
SET32(17, RW(2) + 20440);
SET64(31, 0x249004); SET64(4, RD(17) + RD(0)); F_0012A4D8(c);
SET64(7, RD(2) + RD(0));
SET32(2, RW(18) + -1);
SET64(3, RSD(7) < RSD(2));
if (RD(3) == 0) SET64(7, RD(2));
{ int t = RSD(7) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_00249044; }
SET32(2, RW(7) + RW(17));
SET32(6, RW(2) + -1);
L_00249028:;
SET32(4, RW(16) + RW(5));
SET32(5, RW(5) + 1);
SET64(3, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + -1);
SET64(2, RSD(5) < RSD(7));
{ int t = RD(2) != RD(0); wr8(c, (RW(4) + 0), (u8)RW(3)); if (t) { POLL(); goto L_00249028; } }
L_00249044:;
SET32(2, RW(16) + RW(5));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
wr8(c, (RW(2) + 0), (u8)RW(0));
SET32(29, RW(29) + 32); return;
}

void F_00249068(Ctx *c) { /* func_00249068 */
ENTER(0x249068);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
SET64(6, RD(17) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x249094); SET64(5, RD(16) + RD(0)); F_00248F60(c);
SET64(31, 0x24909c); SET64(4, RD(16) + RD(0)); F_0012A4D8(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(17, RW(17) - RW(2));
SET32(5, RW(5) + -23400);
SET32(6, RW(17) + -1);
SET64(31, 0x2490b4); SET64(4, RD(16) + RD(0)); F_0012A610(c);
SET64(31, 0x2490bc); SET64(4, RD(16) + RD(0)); F_0012A4D8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2490c8); SET32(16, RW(16) + RW(2)); F_0012A4D8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, RD(18) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 4);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(6, RW(6) - RW(2));
SET32(29, RW(29) + 32); { F_00248F60(c); return; }
}

void F_002490F0(Ctx *c) { /* func_002490F0 */
ENTER(0x2490f0);
SET32(29, RW(29) + -16);
SET32(5, RW(4) + RW(5));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(5) + -1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00110098(c); return; }
}

void F_00249110(Ctx *c) { /* func_00249110 */
ENTER(0x249110);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(4) + -20248);
SET64(3, (s64)(s32)0x520000);
SET64(2, (s64)(s32)0x4b0000);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(3) + 20472);
SET32(2, RW(2) + -23392);
wr64(c, (RW(29) + 8), RD(31));
wr32(c, (RW(3) + 0), RW(2));
if (RD(4) != RD(0)) { SET32(2, RW(4) + 1); goto L_002491D4; }
SET64(4, (s64)(s32)0x3f0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -20240);
SET64(31, 0x249158); SET32(6, RW(0) + 1088); F_001273D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + -19152);
SET64(5, RD(0) + RD(0));
SET64(31, 0x24916c); SET32(6, RW(0) + 1024); F_001273D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + -18120);
SET32(5, RW(0) + 255);
SET64(31, 0x249180); SET32(6, RW(0) + 256); F_001273D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + -17864);
SET64(5, RD(0) + RD(0));
SET64(31, 0x249194); SET32(6, RW(0) + 32); F_001273D0(c);
SET64(6, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET64(7, (s64)(s32)0x3f0000);
SET64(8, (s64)(s32)0x3f0000);
SET64(9, (s64)(s32)0x3f0000);
SET64(5, (s64)(s32)0x3f0000);
SET32(3, RW(0) + -1);
SET32(2, RW(0) + 1);
wr32(c, (RW(5) + -17820), RW(3));
wr32(c, (RW(4) + -17816), RW(2));
wr32(c, (RW(6) + -17832), RW(0));
wr32(c, (RW(7) + -18128), RW(0));
wr32(c, (RW(8) + -17828), RW(0));
wr32(c, (RW(9) + -17824), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(4) + 1);
L_002491D4:;
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002491E8(Ctx *c) { /* func_002491E8 */
ENTER(0x2491e8);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + -20248);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_002492A0; }
SET64(31, 0x249210);  F_0024AA80(c);
SET64(12, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET32(10, RW(0) + 1);
SET64(11, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET64(7, (s64)(s32)0x3f0000);
SET64(8, (s64)(s32)0x3f0000);
SET64(9, (s64)(s32)0x3f0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -17864);
SET32(6, RW(0) + 32);
SET32(2, RW(0) + -1);
wr32(c, (RW(12) + -17816), RW(10));
wr32(c, (RW(11) + -17820), RW(2));
wr32(c, (RW(3) + -17824), RW(0));
wr32(c, (RW(7) + -17828), RW(0));
wr32(c, (RW(8) + -18128), RW(0));
SET64(31, 0x24925c); wr32(c, (RW(9) + -17832), RW(0)); F_001273D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET32(5, RW(0) + 255);
SET32(4, RW(4) + -18120);
SET64(31, 0x249270); SET32(6, RW(0) + 256); F_001273D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + -19152);
SET64(5, RD(0) + RD(0));
SET64(31, 0x249284); SET32(6, RW(0) + 1024); F_001273D0(c);
SET64(4, (s64)(s32)0x3f0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -20240);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1088);
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
L_002492A0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002492B0(Ctx *c) { /* func_002492B0 */
ENTER(0x2492b0);
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

void F_002492D8(Ctx *c) { /* adxf_SetCmdHstry */
ENTER(0x2492d8);
SET64(2, (s64)(s32)0x3f0000);
SET64(10, RD(4) + RD(0));
SET32(12, RW(2) + -17832);
SET64(13, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(12) + 0)));
SET32(9, RW(10) << 1);
SET64(11, (s64)(s32)0x3f0000);
SET32(11, RW(11) + -17864);
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
SET32(5, RW(5) + -18120);
SET32(5, RW(5) + RW(4));
{ int t = RD(13) != RD(0); wr32(c, (RW(12) + 0), RW(3)); if (t) goto L_00249348; }
SET64(2, rd16(c, (RW(11) + 0)));
SET64(4, (s64)(s32)0x3f0000);
SET32(2, RW(2) + 1);
wr16(c, (RW(11) + 0), (u16)RW(2)); goto L_00249350;
L_00249348:;
SET64(4, (s64)(s32)0x3f0000);
SET32(9, RW(10) << 1);
L_00249350:;
SET64(3, (s32)rd32(c, (RW(12) + 0)));
SET32(4, RW(4) + -17864);
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

void F_00249388(Ctx *c) { /* adxf_wait_1ms */
ENTER(0x249388);
SET64(2, RD(0) | 0xc350);
SET32(2, RW(2) + -1);
L_00249390:;
if (RD(2) != RD(0)) { SET32(2, RW(2) + -1); { POLL(); goto L_00249390; } }
 return;
}

void F_002493B8(Ctx *c) { /* adxf_ChkPrmPt */
ENTER(0x2493b8);
SET32(29, RW(29) + -16);
SET64(4, RD(4) < (u64)(s64)256);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002493D8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -23312); goto L_002493E8;
L_002493D8:;
{ int t = RD(5) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002493F4; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -23256);
L_002493E8:;
SET64(31, 0x2493f0);  F_00248E98(c);
SET32(2, RW(0) + -3);
L_002493F4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00249400(Ctx *c) { /* func_00249400 */
ENTER(0x249400);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24942c); SET64(19, RD(7) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x249440); SET64(7, RD(19) + RD(0)); F_00249468(c);
SET64(31, 0x249448); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00249468(Ctx *c) { /* func_00249468 */
ENTER(0x249468);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002494F0(c); return; }
}

void F_00249488(Ctx *c) { /* func_00249488 */
ENTER(0x249488);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2494b4); SET64(19, RD(7) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2494c8); SET64(7, RD(19) + RD(0)); F_002494F0(c);
SET64(31, 0x2494d0); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002494F0(Ctx *c) { /* adxf_LoadPartitionEx */
ENTER(0x2494f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 4);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x249514); SET32(18, RW(0) + 3); F_002495D8(c);
{ int t = RSD(2) >= 0;  if (t) goto L_00249538; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00249558;
L_00249528:;
SET64(31, 0x249530);  F_0024E118(c);
SET64(31, 0x249538);  F_00249388(c);
L_00249538:;
SET64(31, 0x249540); SET64(4, RD(16) + RD(0)); F_00249E68(c);
{ int t = RD(2) == RD(18); SET64(3, RD(0) + RD(0)); if (t) goto L_00249550; }
{ int t = RD(2) != RD(17); SET32(3, RW(0) + -1); if (t) { POLL(); goto L_00249528; } }
L_00249550:;
SET64(2, RD(3) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00249558:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00249570(Ctx *c) { /* func_00249570 */
ENTER(0x249570);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24959c); SET64(19, RD(7) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2495b0); SET64(7, RD(19) + RD(0)); F_002495D8(c);
SET64(31, 0x2495b8); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002495D8(Ctx *c) { /* func_002495D8 */
ENTER(0x2495d8);
SET32(29, RW(29) + -16);
SET64(8, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(0) + -64);
SET32(8, RW(8) + -17656);
SET32(9, RW(0) + 2048);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(8, RD(8) & RD(2));
SET32(29, RW(29) + 16); { F_00249838(c); return; }
}

void F_00249600(Ctx *c) { /* func_00249600 */
ENTER(0x249600);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24962c); SET64(19, RD(7) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x249640); SET64(7, RD(19) + RD(0)); F_00249668(c);
SET64(31, 0x249648); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00249668(Ctx *c) { /* func_00249668 */
ENTER(0x249668);
SET32(29, RW(29) + -16);
SET64(8, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(0) + -64);
SET32(8, RW(8) + -17656);
SET32(9, RW(0) + 2048);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(8, RD(8) & RD(2));
SET32(29, RW(29) + 16); { F_00249908(c); return; }
}

void F_00249690(Ctx *c) { /* func_00249690 */
ENTER(0x249690);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2496bc); SET64(19, RD(7) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2496d0); SET64(7, RD(19) + RD(0)); F_002496F8(c);
SET64(31, 0x2496d8); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002496F8(Ctx *c) { /* func_002496F8 */
ENTER(0x2496f8);
SET32(29, RW(29) + -16);
SET64(8, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(0) + -64);
SET32(8, RW(8) + -17656);
SET32(9, RW(0) + 2048);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(8, RD(8) & RD(2));
SET32(29, RW(29) + 16); { F_002499C8(c); return; }
}

void F_00249720(Ctx *c) { /* func_00249720 */
ENTER(0x249720);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24974c); SET64(19, RD(7) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x249760); SET64(7, RD(19) + RD(0)); F_00249788(c);
SET64(31, 0x249768); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00249788(Ctx *c) { /* func_00249788 */
ENTER(0x249788);
SET32(29, RW(29) + -16);
SET64(8, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(0) + -64);
SET32(8, RW(8) + -17656);
SET32(9, RW(0) + 2048);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(8, RD(8) & RD(2));
SET32(29, RW(29) + 16); { F_00249A98(c); return; }
}

void F_002497B0(Ctx *c) { /* func_002497B0 */
ENTER(0x2497b0);
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
SET64(31, 0x2497ec); SET64(21, RD(9) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(20) + RD(0));
SET64(31, 0x249808); SET64(9, RD(21) + RD(0)); F_00249838(c);
SET64(31, 0x249810); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
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

void F_00249838(Ctx *c) { /* func_00249838 */
ENTER(0x249838);
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
SET64(31, 0x249870); wr32(c, (RW(29) + 0), RW(0)); F_00249AD0(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00249880(Ctx *c) { /* func_00249880 */
ENTER(0x249880);
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
SET64(31, 0x2498bc); SET64(21, RD(9) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(20) + RD(0));
SET64(31, 0x2498d8); SET64(9, RD(21) + RD(0)); F_00249908(c);
SET64(31, 0x2498e0); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
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

void F_00249908(Ctx *c) { /* func_00249908 */
ENTER(0x249908);
SET64(2, RD(7) + RD(0));
SET64(7, RD(0) + RD(0));
SET32(29, RW(29) + -32);
SET64(10, RD(8) + RD(0));
SET64(11, RD(9) + RD(0));
SET64(9, RD(2) + RD(0));
SET64(8, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x249930); wr32(c, (RW(29) + 0), RW(0)); F_00249AD0(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00249940(Ctx *c) { /* func_00249940 */
ENTER(0x249940);
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
SET64(31, 0x24997c); SET64(21, RD(9) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(20) + RD(0));
SET64(31, 0x249998); SET64(9, RD(21) + RD(0)); F_002499C8(c);
SET64(31, 0x2499a0); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
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

void F_002499C8(Ctx *c) { /* func_002499C8 */
ENTER(0x2499c8);
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
SET64(31, 0x249a04); wr32(c, (RW(29) + 0), RW(2)); F_00249AD0(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00249A10(Ctx *c) { /* func_00249A10 */
ENTER(0x249a10);
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
SET64(31, 0x249a4c); SET64(21, RD(9) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(20) + RD(0));
SET64(31, 0x249a68); SET64(9, RD(21) + RD(0)); F_00249A98(c);
SET64(31, 0x249a70); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
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

void F_00249A98(Ctx *c) { /* func_00249A98 */
ENTER(0x249a98);
SET64(2, RD(7) + RD(0));
SET64(7, RD(0) + RD(0));
SET32(29, RW(29) + -32);
SET64(10, RD(8) + RD(0));
SET64(11, RD(9) + RD(0));
SET64(9, RD(2) + RD(0));
SET64(8, RD(0) + RD(0));
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x249ac4); wr32(c, (RW(29) + 0), RW(2)); F_00249AD0(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00249AD0(Ctx *c) { /* func_00249AD0 */
ENTER(0x249ad0);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 48), RD(20));
SET32(20, RW(2) + -17816);
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
{ int t = RD(2) != RD(3); wr32(c, (RW(29) + 12), RW(6)); if (t) goto L_00249B48; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x249b3c); SET32(4, RW(4) + -23208); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_00249D2C;
L_00249B48:;
SET64(2, (s64)(s32)0x3f0000);
SET32(22, RW(2) + -17824);
SET64(4, (s32)rd32(c, (RW(22) + 0)));
if (RD(4) == RD(0)) { SET64(2, (s64)(s32)0x3f0000); goto L_00249B6C; }
SET64(31, 0x249b64);  F_0024A9C8(c);
wr32(c, (RW(22) + 0), RW(0));
SET64(2, (s64)(s32)0x3f0000);
L_00249B6C:;
SET32(4, RW(0) + -1);
SET32(16, RW(2) + -17820);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(4));
{ int t = RD(23) != RD(0); wr32(c, (RW(20) + 0), RW(3)); if (t) goto L_00249B90; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -23144); goto L_00249BA0;
L_00249B90:;
{ int t = RSD(19) > 0; SET64(4, RD(18) + RD(0)); if (t) goto L_00249BB8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -23096);
L_00249BA0:;
SET64(31, 0x249ba8);  F_00248E98(c);
SET32(2, RW(0) + 4);
wr32(c, (RW(20) + 0), RW(2));
SET32(2, RW(0) + -3); goto L_00249D2C;
L_00249BB8:;
SET64(31, 0x249bc0); SET64(5, RD(17) + RD(0)); F_002493B8(c);
{ int t = RSD(2) < 0; SET32(3, RW(0) + 4); if (t) goto L_00249C58; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RSD(2) < 0; SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00249BE0; }
SET32(4, RW(4) + -23056); goto L_00249C84;
L_00249BE0:;
SET32(3, RW(0) + 2);
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(20) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(16) + 0), RW(18));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 284);
SET64(31, 0x249c04); wr32(c, (RW(2) + -17828), RW(0)); F_001273D0(c);
SET32(3, RW(18) << 2);
SET64(1, (s64)(s32)0x3f0000);
SET32(1, RW(1) + RW(3));
wr32(c, (RW(1) + -19152), RW(17));
{ int t = RD(21) != RD(0); wr32(c, (RW(17) + 0), RW(0)); if (t) goto L_00249C68; }
SET64(5, (s32)rd32(c, (RW(29) + 12)));
SET64(31, 0x249c28); SET64(4, RD(30) + RD(0)); F_0024A888(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(22) + 0), RW(2)); if (t) goto L_00249C7C; }
SET64(5, (s32)rd32(c, (RW(29) + 12)));
SET64(4, RD(30) + RD(0));
SET32(6, RW(17) + 16);
SET64(7, RD(29) + RD(0));
SET32(8, RW(29) + 4);
SET64(31, 0x249c4c); SET32(9, RW(29) + 8); F_0024B960(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(29) + 4))); goto L_00249C60; }
SET32(3, RW(0) + 4);
L_00249C58:;
wr32(c, (RW(20) + 0), RW(3)); goto L_00249D2C;
L_00249C60:;
wr32(c, (RW(17) + 276), RW(2)); goto L_00249CB0;
L_00249C68:;
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x249c74); SET64(4, RD(21) + RD(0)); F_0024A520(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(22) + 0), RW(2)); if (t) goto L_00249CA0; }
L_00249C7C:;
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -23008);
L_00249C84:;
SET64(31, 0x249c8c);  F_00248E98(c);
SET32(2, RW(0) + 4);
wr32(c, (RW(20) + 0), RW(2));
SET32(2, RW(0) + -1); goto L_00249D2C;
L_00249CA0:;
SET64(5, RD(21) + RD(0));
SET32(4, RW(17) + 16);
SET64(31, 0x249cb0); SET32(6, RW(0) + 256); F_0012A978(c);
L_00249CB0:;
SET64(2, (s32)rd32(c, (RW(29) + 96)));
SET32(3, RW(19) + 2047);
wr8(c, (RW(17) + 14), (u8)RW(0));
SET64(6, RD(23) + RD(0));
wr8(c, (RW(17) + 15), (u8)RW(2));
SET64(2, RSD(19) < (s64)0);
if (RD(2) != 0) SET64(19, RD(3));
SET64(2, (s64)(s32)0x3f0000);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET32(18, RW(2) + -17824);
SET32(7, RSW(19) >> 11);
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(17) + 272), RW(4));
SET64(2, (s64)(s32)0x3f0000);
SET64(5, RD(7) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(2) + -17808), RW(23));
SET64(31, 0x249cfc); wr32(c, (RW(3) + -17804), RW(7)); F_0024AFA0(c);
SET64(16, RD(2) + RD(0));
if (RSD(16) >= 0) { wr32(c, (RW(17) + 8), RW(0)); goto L_00249D28; }
SET64(31, 0x249d10); SET64(4, (s32)rd32(c, (RW(18) + 0))); F_0024A9C8(c);
SET32(2, RW(0) + 4);
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(3) + -17816), RW(2));
SET64(2, RD(16) + RD(0)); goto L_00249D2C;
L_00249D28:;
SET64(2, RD(0) + RD(0));
L_00249D2C:;
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

void F_00249D60(Ctx *c) { /* adxf_CloseLdptnwHn */
ENTER(0x249d60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 8), RD(31));
SET32(16, RW(16) + -17824);
SET64(31, 0x249d7c); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024A9C8(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, (s64)(s32)0x3f0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(2) + -17828), RW(0));
wr32(c, (RW(3) + -17804), RW(0));
SET32(29, RW(29) + 16); return;
}

void F_00249DA0(Ctx *c) { /* func_00249DA0 */
ENTER(0x249da0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x249db0);  F_0024BC50(c);
SET64(31, 0x249db8);  F_00249DC8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024BC58(c); return; }
}

void F_00249DC8(Ctx *c) { /* func_00249DC8 */
ENTER(0x249dc8);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -17824);
wr64(c, (RW(29) + 8), RD(31));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_00249E20; }
SET64(3, (s32)rd32(c, (RW(2) + -17820)));
if (RSD(3) < 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00249E24; }
SET64(31, 0x249dfc);  F_0024B790(c);
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00249E14; }
SET64(31, 0x249e10); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024B018(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_00249E14:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00249D60(c); return; }
L_00249E20:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00249E24:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00249E30(Ctx *c) { /* func_00249E30 */
ENTER(0x249e30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x249e44); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x249e4c); SET64(4, RD(16) + RD(0)); F_00249E68(c);
SET64(31, 0x249e54); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00249E68(Ctx *c) { /* func_00249E68 */
ENTER(0x249e68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00249EB8(c); return; }
}

void F_00249E80(Ctx *c) { /* func_00249E80 */
ENTER(0x249e80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x249e94); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x249e9c); SET64(4, RD(16) + RD(0)); F_00249EB8(c);
SET64(31, 0x249ea4); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00249EB8(Ctx *c) { /* func_00249EB8 */
ENTER(0x249eb8);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -96);
SET64(3, (s32)rd32(c, (RW(2) + -17820)));
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
{ int t = RD(16) == RD(3); wr32(c, (RW(29) + 0), RW(0)); if (t) goto L_00249F18; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x249f10); SET32(4, RW(4) + -22960); F_00248E98(c);
SET32(2, RW(0) + -3); goto L_0024A2B4;
L_00249F18:;
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + -17824)));
{ int t = RD(2) != RD(0); SET64(6, (s64)(s32)0x3f0000); if (t) goto L_00249F40; }
SET32(2, RW(0) + -1);
{ int t = RD(16) == RD(2); SET64(3, (s64)(s32)0x3f0000); if (t) goto L_00249F40; }
SET64(2, (s32)rd32(c, (RW(3) + -17816))); goto L_0024A2B4;
L_00249F40:;
SET64(22, (s64)(s32)0x3f0000);
SET64(31, 0x249f4c); SET64(4, (s32)rd32(c, (RW(6) + -17824))); F_0024B790(c);
SET32(4, RW(0) + 3);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) != RD(4); wr32(c, (RW(22) + -17816), RW(3)); if (t) goto L_0024A2B4; }
SET32(2, RW(16) << 2);
SET32(4, RW(0) + 1);
SET64(16, (s64)(s32)0x3f0000);
SET32(16, RW(16) + RW(2));
SET64(16, (s32)rd32(c, (RW(16) + -19152)));
SET64(3, (s8)rd8(c, (RW(16) + 15)));
{ int t = RD(3) != RD(4); SET32(2, RW(16) + 282); if (t) goto L_00249F88; }
SET32(20, RW(16) + 280);
SET32(30, RW(16) + 284); goto L_00249F90;
L_00249F88:;
SET32(21, RW(16) + 280);
wr32(c, (RW(29) + 0), RW(2));
L_00249F90:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(2) != RD(0); SET32(17, RW(0) + 1); if (t) goto L_0024A128; }
SET64(23, (s64)(s32)0x3f0000);
SET64(5, (s64)(s32)0x4b0000);
SET32(17, RW(23) + -17808);
SET32(5, RW(5) + -22904);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET32(6, RW(0) + 3);
SET64(31, 0x249fbc); SET64(19, RD(23) + RD(0)); F_00127180(c);
{ int t = RD(2) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00249FD0; }
SET32(16, RW(22) + -17816);
SET32(4, RW(4) + -22896); goto L_0024A284;
L_00249FD0:;
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
{ int t = RD(6) == RD(0); SET32(17, RW(0) + 1); if (t) goto L_0024A030; }
SET64(4, (s64)(s32)0x4b0000);
SET32(16, RW(22) + -17816);
SET64(31, 0x24a028); SET32(4, RW(4) + -22840); F_00248E98(c);
wr32(c, (RW(16) + 0), RW(18)); goto L_0024A294;
L_0024A030:;
SET64(2, rd8(c, (RW(8) + 0)));
SET64(3, rd8(c, (RW(7) + 0)));
SET32(2, RW(2) << 8);
SET64(4, (s8)rd8(c, (RW(16) + 15)));
SET64(3, RD(3) | RD(2));
SET64(5, rd8(c, (RW(16) + 15)));
SET64(2, RD(3) + RD(0));
wr16(c, (RW(16) + 12), (u16)RW(3));
{ int t = RD(4) != RD(17); wr32(c, (RW(16) + 8), RW(2)); if (t) goto L_0024A068; }
SET32(2, RW(2) << 2);
SET32(2, RW(2) + 288); goto L_0024A078;
L_0024A068:;
SET32(2, RW(2) << 1);
SET32(2, RW(2) + 284);
SET32(2, RW(2) >> 2);
SET32(2, RW(2) << 2);
L_0024A078:;
wr32(c, (RW(16) + 4), RW(2));
SET32(2, RW(5) << 24);
SET32(3, RW(0) + 1);
SET32(2, RSW(2) >> 24);
{ int t = RD(2) != RD(3); SET64(3, (s32)rd32(c, (RW(19) + -17808))); if (t) goto L_0024A0D0; }
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
wr32(c, (RW(20) + 0), RW(2)); goto L_0024A10C;
L_0024A0D0:;
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
L_0024A10C:;
SET32(17, RW(0) + 3); goto L_0024A12C;
L_0024A118:;
SET64(31, 0x24a120); wr32(c, (RW(22) + -17816), RW(2)); F_00249D60(c);
 goto L_0024A238;
L_0024A128:;
SET64(23, (s64)(s32)0x3f0000);
L_0024A12C:;
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + -17804)));
SET32(20, RW(2) << 9);
SET64(19, RSD(17) < RSD(20));
{ int t = RD(19) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024A248; }
SET64(21, (s64)(s32)0x3f0000);
SET32(18, RW(21) + -17828);
SET64(3, (s8)rd8(c, (RW(16) + 15)));
L_0024A150:;
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET64(3, (s32)rd32(c, (RW(23) + -17808))); if (t) goto L_0024A1B0; }
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
SET64(31, 0x24a190); SET64(4, RD(3) | RD(4)); F_002492B0(c);
SET64(5, RD(21) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET32(3, RW(4) << 2);
SET32(4, RW(4) + 1);
SET32(3, RW(3) + RW(30));
wr32(c, (RW(3) + 0), RW(2));
wr32(c, (RW(18) + 0), RW(4)); goto L_0024A214;
L_0024A1B0:;
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
SET64(31, 0x24a1e4); SET64(4, RD(3) | RD(4)); F_002492B0(c);
SET64(4, RD(2) + RD(0));
SET64(2, (s64)(s32)0xffff0000);
SET64(2, RD(4) & RD(2));
{ int t = RD(2) != RD(0); SET64(5, RD(21) + RD(0)); if (t) goto L_0024A278; }
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(3) << 1);
SET32(3, RW(3) + 1);
SET32(2, RW(2) + RW(6));
wr16(c, (RW(2) + 0), (u16)RW(4));
wr32(c, (RW(18) + 0), RW(3));
L_0024A214:;
SET64(2, (s32)rd32(c, (RW(5) + -17828)));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, RSD(2) < RSD(3));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 3); { POLL(); goto L_0024A118; } }
SET32(17, RW(17) + 2);
SET64(19, RSD(17) < RSD(20));
if (RD(19) != RD(0)) { SET64(3, (s8)rd8(c, (RW(16) + 15))); { POLL(); goto L_0024A150; } }
L_0024A238:;
{ int t = RD(19) != RD(0); SET64(2, (s32)rd32(c, (RW(22) + -17816))); if (t) goto L_0024A2B4; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
L_0024A248:;
SET32(17, RW(2) + -17824);
SET64(5, (s32)rd32(c, (RW(3) + -17804)));
SET64(6, (s32)rd32(c, (RW(23) + -17808)));
SET64(31, 0x24a25c); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_0024AFA0(c);
if (RSD(2) >= 0) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_0024A2A8; }
SET32(2, RW(0) + 4);
SET64(31, 0x24a270); wr32(c, (RW(22) + -17816), RW(2)); F_00249D60(c);
SET64(2, (s32)rd32(c, (RW(22) + -17816))); goto L_0024A2B4;
L_0024A278:;
SET64(4, (s64)(s32)0x4b0000);
SET32(16, RW(22) + -17816);
SET32(4, RW(4) + -22784);
L_0024A284:;
SET64(31, 0x24a28c);  F_00248E98(c);
SET32(2, RW(0) + 4);
wr32(c, (RW(16) + 0), RW(2));
L_0024A294:;
SET64(31, 0x24a29c);  F_00249D60(c);
SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_0024A2B4;
L_0024A2A8:;
SET64(3, (s8)rd8(c, (RW(2) + 1)));
wr32(c, (RW(22) + -17816), RW(3));
SET64(2, (s32)rd32(c, (RW(22) + -17816)));
L_0024A2B4:;
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

void F_0024A2E8(Ctx *c) { /* func_0024A2E8 */
ENTER(0x24a2e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24a2fc); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x24a304); SET64(4, RD(16) + RD(0)); F_0024A320(c);
SET64(31, 0x24a30c); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024A320(Ctx *c) { /* func_0024A320 */
ENTER(0x24a320);
SET32(4, RW(4) << 2);
SET64(3, (s64)(s32)0x3f0000);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + -19152)));
SET64(2, (s32)rd32(c, (RW(3) + 4))); return;
}

void F_0024A338(Ctx *c) { /* func_0024A338 */
ENTER(0x24a338);
SET64(6, (s64)(s32)0x3f0000);
SET64(7, RD(0) + RD(0));
SET32(3, RW(6) + -20240);
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0024A358; }
SET64(7, RD(3) + RD(0)); goto L_0024A388;
L_0024A358:;
SET32(5, RW(5) + 1);
L_0024A35C:;
SET32(2, RW(5) << 4);
SET64(3, RSD(5) < (s64)16);
{ int t = RD(3) == RD(0); SET32(2, RW(2) + RW(5)); if (t) goto L_0024A388; }
SET32(2, RW(2) << 2);
SET32(3, RW(6) + -20240);
SET32(2, RW(2) + RW(3));
SET64(4, (s8)rd8(c, (RW(2) + 0)));
if (RD(4) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_0024A35C; } }
SET64(7, RD(2) + RD(0));
L_0024A388:;
SET64(2, RD(7) + RD(0)); return;
}

void F_0024A390(Ctx *c) { /* func_0024A390 */
ENTER(0x24a390);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24a3a4);  F_0024A338(c);
SET64(16, RD(2) + RD(0));
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -22712);
{ int t = RD(16) == RD(0); SET32(5, RW(0) + 256); if (t) goto L_0024A3D4; }
SET64(31, 0x24a3c0); SET64(4, RD(0) + RD(0)); F_00253020(c);
SET32(3, RW(0) + 1);
SET64(4, (s64)(s32)0x4b0000);
wr32(c, (RW(16) + 4), RW(2));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + -22656); if (t) goto L_0024A3E8; }
L_0024A3D4:;
SET64(31, 0x24a3dc);  F_00248E98(c);
SET64(2, RD(0) + RD(0)); goto L_0024A414;
L_0024A3E8:;
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
L_0024A414:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0024A428(Ctx *c) { /* func_0024A428 */
ENTER(0x24a428);
SET32(29, RW(29) + -16);
SET64(3, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
{ int t = RD(3) != RD(0); SET64(2, RD(6) + RD(0)); if (t) goto L_0024A458; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24a450); SET32(4, RW(4) + -22600); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_0024A4C8;
L_0024A458:;
wr32(c, (RW(16) + 56), RW(3));
SET64(8, (s64)(s32)0xf0000);
wr32(c, (RW(16) + 52), RW(2));
SET64(7, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(8, RD(8) | 0xffff);
SET64(31, 0x24a478); wr32(c, (RW(16) + 20), RW(0)); F_00253220(c);
SET64(31, 0x24a480); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002533C0(c);
SET32(3, RW(0) + 4);
{ int t = RD(2) != RD(3);  if (t) goto L_0024A4A0; }
SET64(31, 0x24a494); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00253338(c);
SET32(2, RW(0) + -1); goto L_0024A4C8;
L_0024A4A0:;
SET64(31, 0x24a4a8); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00254090(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24a4b4); wr32(c, (RW(16) + 16), RW(2)); F_002540D0(c);
wr32(c, (RW(16) + 60), RW(0));
SET64(3, RD(2) + RD(0));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 64), RW(3));
wr32(c, (RW(16) + 12), RW(3));
L_0024A4C8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0024A4D8(Ctx *c) { /* func_0024A4D8 */
ENTER(0x24a4d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24a4f4); SET64(17, RD(5) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24a500); SET64(5, RD(17) + RD(0)); F_0024A520(c);
SET64(31, 0x24a508); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_0024A520(Ctx *c) { /* adxf_Open */
ENTER(0x24a520);
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
SET64(31, 0x24a554); SET64(7, RD(17) + RD(0)); F_002492D8(c);
SET64(31, 0x24a55c);  F_0024A390(c);
SET64(5, RD(18) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0024A58C; }
SET64(31, 0x24a578);  F_0024A428(c);
{ int t = RSD(2) >= 0; SET64(6, RD(18) + RD(0)); if (t) goto L_0024A590; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x24a58c); SET64(16, RD(0) + RD(0)); F_0024A9C8(c);
L_0024A58C:;
SET64(6, RD(18) + RD(0));
L_0024A590:;
SET64(7, RD(17) + RD(0));
SET32(4, RW(0) + 1);
SET32(5, RW(0) + 1);
SET64(31, 0x24a5a4); SET32(8, RW(0) + -1); F_002492D8(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

static void B_0024A5C0(Ctx *c, u32 entry) { /* func_0024A5C0 */
ENTER(entry);
switch (entry) { case 0x24a600: goto L_0024A600; }
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
SET64(31, 0x24a5fc); wr32(c, (RW(16) + 20), RW(0)); F_00253220(c);
SET64(31, 0x24a604); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002533C0(c);
if (0) { L_0024A600:; SET64(4, (s32)rd32(c, (RW(16) + 4))); }
SET32(3, RW(0) + 4);
{ int t = RD(2) != RD(3); SET32(4, RW(17) << 11); if (t) goto L_0024A620; }
SET64(31, 0x24a618); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00253338(c);
SET32(2, RW(0) + -1); goto L_0024A62C;
L_0024A620:;
wr32(c, (RW(16) + 16), RW(4));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 12), RW(17));
L_0024A62C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}
void F_0024A5C0(Ctx *c) { B_0024A5C0(c, 0x24a5c0); }
void F_0024A600(Ctx *c) { B_0024A5C0(c, 0x24a600); }

void F_0024A640(Ctx *c) { /* func_0024A640 */
ENTER(0x24a640);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24a66c); SET64(19, RD(7) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x24a680); SET64(7, RD(19) + RD(0)); F_0024A6A8(c);
SET64(31, 0x24a688); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0024A6A8(Ctx *c) { /* adxf_OpenRange */
ENTER(0x24a6a8);
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
SET64(31, 0x24a6ec); SET64(7, RD(19) + RD(0)); F_002492D8(c);
SET64(31, 0x24a6f4);  F_0024A390(c);
SET64(7, RD(17) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(8, RD(16) + RD(0));
SET64(4, RD(18) + RD(0));
SET64(5, RD(20) + RD(0));
{ int t = RD(18) == RD(0); SET64(6, RD(19) + RD(0)); if (t) goto L_0024A72C; }
SET64(31, 0x24a718);  F_0024A5C0(c);
{ int t = RSD(2) >= 0; SET64(6, RD(20) + RD(0)); if (t) goto L_0024A730; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x24a72c); SET64(18, RD(0) + RD(0)); F_0024A9C8(c);
L_0024A72C:;
SET64(6, RD(20) + RD(0));
L_0024A730:;
SET64(7, RD(19) + RD(0));
SET32(4, RW(0) + 1);
SET32(5, RW(0) + 1);
SET64(31, 0x24a744); SET32(8, RW(0) + -1); F_002492D8(c);
SET64(2, RD(18) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0024A768(Ctx *c) { /* func_0024A768 */
ENTER(0x24a768);
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
SET64(31, 0x24a79c); SET32(9, RW(29) + 264); F_0024B960(c);
{ int t = RSD(2) >= 0; SET64(4, RD(16) + RD(0)); if (t) goto L_0024A7B0; }
SET32(2, RW(0) + -3); goto L_0024A828;
L_0024A7B0:;
SET64(3, (s32)rd32(c, (RW(29) + 256)));
SET64(2, (s32)rd32(c, (RW(29) + 260)));
wr32(c, (RW(17) + 52), RW(3));
SET64(31, 0x24a7c4); wr32(c, (RW(17) + 48), RW(2)); F_0024BAF0(c);
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
SET64(31, 0x24a7f4); SET64(4, (s32)rd32(c, (RW(17) + 4))); F_00253220(c);
SET64(31, 0x24a7fc); SET64(4, (s32)rd32(c, (RW(17) + 4))); F_002533C0(c);
SET32(3, RW(0) + 4);
if (RD(2) != RD(3)) { SET64(4, (s32)rd32(c, (RW(29) + 264))); goto L_0024A818; }
SET64(31, 0x24a810); SET64(4, (s32)rd32(c, (RW(17) + 4))); F_00253338(c);
SET32(2, RW(0) + -1); goto L_0024A828;
L_0024A818:;
SET64(2, RD(0) + RD(0));
SET32(3, RW(4) << 11);
wr32(c, (RW(17) + 12), RW(4));
wr32(c, (RW(17) + 16), RW(3));
L_0024A828:;
SET64(16, rd64(c, (RW(29) + 272)));
SET64(17, rd64(c, (RW(29) + 280)));
SET64(31, rd64(c, (RW(29) + 288)));
SET32(29, RW(29) + 304); return;
}

void F_0024A840(Ctx *c) { /* func_0024A840 */
ENTER(0x24a840);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24a85c); SET64(17, RD(5) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24a868); SET64(5, RD(17) + RD(0)); F_0024A888(c);
SET64(31, 0x24a870); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_0024A888(Ctx *c) { /* adxf_OpenAfs */
ENTER(0x24a888);
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
SET64(31, 0x24a8bc); SET64(7, RD(17) + RD(0)); F_002492D8(c);
SET64(31, 0x24a8c4);  F_0024A390(c);
SET64(5, RD(18) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0024A8F4; }
SET64(31, 0x24a8e0);  F_0024A768(c);
{ int t = RSD(2) >= 0; SET64(6, RD(18) + RD(0)); if (t) goto L_0024A8F8; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x24a8f4); SET64(16, RD(0) + RD(0)); F_0024A9C8(c);
L_0024A8F4:;
SET64(6, RD(18) + RD(0));
L_0024A8F8:;
SET64(7, RD(17) + RD(0));
SET32(4, RW(0) + 2);
SET32(5, RW(0) + 1);
SET64(31, 0x24a90c); SET32(8, RW(0) + -1); F_002492D8(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0024A928(Ctx *c) { /* func_0024A928 */
ENTER(0x24a928);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(5, (s32)rd32(c, (RW(16) + 8)));
if (RD(5) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024A98C; }
SET64(2, (s8)rd8(c, (RW(16) + 2)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024A98C; }
SET64(2, (s64)(s32)0x3f0000);
SET32(4, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(2) + -18128)));
if (RD(3) != RD(4)) { SET64(3, (s32)rd32(c, (RW(5) + 0))); goto L_0024A978; }
SET64(5, (s32)rd32(c, (RW(16) + 40)));
SET64(31, 0x24a970); SET64(4, (s32)rd32(c, (RW(16) + 36))); F_002490F0(c);
SET64(5, (s32)rd32(c, (RW(16) + 8)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
L_0024A978:;
wr32(c, (RW(16) + 8), RW(0));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x24a988); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 0)));
L_0024A98C:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0024A998(Ctx *c) { /* func_0024A998 */
ENTER(0x24a998);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24a9ac); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x24a9b4); SET64(4, RD(16) + RD(0)); F_0024A9C8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0024BC58(c); return; }
}

void F_0024A9C8(Ctx *c) { /* func_0024A9C8 */
ENTER(0x24a9c8);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET64(6, RD(17) + RD(0));
SET32(7, RW(0) + -1);
SET32(4, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24a9f4); SET32(8, RW(0) + -1); F_002492D8(c);
{ int t = RD(17) == RD(0); SET32(3, RW(0) + 2); if (t) goto L_0024AA68; }
SET64(2, (s8)rd8(c, (RW(17) + 1)));
if (RD(2) != RD(3)) { SET64(16, (s32)rd32(c, (RW(17) + 4))); goto L_0024AA14; }
SET64(31, 0x24aa10); SET64(4, RD(17) + RD(0)); F_0024B018(c);
SET64(16, (s32)rd32(c, (RW(17) + 4)));
L_0024AA14:;
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0024AA30; }
wr8(c, (RW(17) + 0), (u8)RW(0));
SET64(31, 0x24aa28); wr32(c, (RW(17) + 4), RW(0)); F_00253338(c);
SET64(31, 0x24aa30); SET64(4, RD(16) + RD(0)); F_002530B0(c);
L_0024AA30:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x24aa40); SET32(6, RW(0) + 68); F_001273D0(c);
SET32(4, RW(0) + 3);
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(7, RW(0) + -1);
SET32(8, RW(0) + -1);
SET32(29, RW(29) + 32); { F_002492D8(c); return; }
L_0024AA68:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0024AA80(Ctx *c) { /* func_0024AA80 */
ENTER(0x24aa80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24aa90);  F_0024BC50(c);
SET64(31, 0x24aa98);  F_0024AAA8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024BC58(c); return; }
}

void F_0024AAA8(Ctx *c) { /* func_0024AAA8 */
ENTER(0x24aaa8);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -20240);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 1);
L_0024AAD0:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_0024AAE8; }
SET64(31, 0x24aae4); SET64(4, RD(16) + RD(0)); F_0024A9C8(c);
SET32(17, RW(17) + -1);
L_0024AAE8:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 68); if (t) { POLL(); goto L_0024AAD0; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0024AB08(Ctx *c) { /* func_0024AB08 */
ENTER(0x24ab08);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24ab30); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002533C0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_0024AB44; }
SET64(31, 0x24ab44); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00253690(c);
L_0024AB44:;
SET64(31, 0x24ab4c);  F_00247970(c);
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
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 28), RW(2)); if (t) goto L_0024AB90; }
SET32(2, RW(0) + 3);
wr8(c, (RW(16) + 1), (u8)RW(2));
SET64(16, RD(0) + RD(0)); goto L_0024ABE4;
L_0024AB90:;
SET64(31, 0x24ab98); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00253770(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24aba4); SET64(5, RD(18) + RD(0)); F_00254340(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24abb0); SET64(5, (s32)rd32(c, (RW(16) + 44))); F_00254030(c);
SET32(3, RW(0) + 2);
wr8(c, (RW(16) + 1), (u8)RW(3));
SET64(5, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24abc8); wr8(c, (RW(16) + 3), (u8)RW(0)); F_00254160(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24abd4); SET64(5, (s32)rd32(c, (RW(16) + 20))); F_00253400(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24abe0); SET64(5, (s32)rd32(c, (RW(16) + 28))); F_00253568(c);
SET64(16, (s32)rd32(c, (RW(16) + 28)));
L_0024ABE4:;
SET64(31, 0x24abec);  F_00247988(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0024AC08(Ctx *c) { /* func_0024AC08 */
ENTER(0x24ac08);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24ac2c); SET64(18, RD(6) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24ac3c); SET64(6, RD(18) + RD(0)); F_0024AC60(c);
SET64(31, 0x24ac44); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0024AC60(Ctx *c) { /* adxf_ReadSj32 */
ENTER(0x24ac60);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
{ int t = RD(16) != RD(0); SET64(3, RD(6) + RD(0)); if (t) goto L_0024AC88; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -22536); goto L_0024ACB0;
L_0024AC88:;
{ int t = RSD(2) >= 0;  if (t) goto L_0024ACA0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -22496); goto L_0024ACB0;
L_0024ACA0:;
if (RD(3) != RD(0)) { SET64(7, (s8)rd8(c, (RW(16) + 1))); goto L_0024ACC0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -22448);
L_0024ACB0:;
SET64(31, 0x24acb8);  F_00248E98(c);
SET32(2, RW(0) + -3); goto L_0024ACDC;
L_0024ACC0:;
SET32(3, RW(0) + 2);
{ int t = RD(7) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0024ACDC; }
SET64(31, 0x24acd4);  F_0024AB08(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(16) + 2), (u8)RW(3));
L_0024ACDC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0024ACF0(Ctx *c) { /* func_0024ACF0 */
ENTER(0x24acf0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24ad14); SET64(18, RD(6) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24ad24); SET64(6, RD(18) + RD(0)); F_0024AD48(c);
SET64(31, 0x24ad2c); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0024AD48(Ctx *c) { /* func_0024AD48 */
ENTER(0x24ad48);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024AC60(c); return; }
}

void F_0024AD60(Ctx *c) { /* func_0024AD60 */
ENTER(0x24ad60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24ad84); SET64(18, RD(6) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24ad94); SET64(6, RD(18) + RD(0)); F_0024ADB8(c);
SET64(31, 0x24ad9c); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0024ADB8(Ctx *c) { /* func_0024ADB8 */
ENTER(0x24adb8);
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
SET64(31, 0x24adf8); SET64(8, RD(19) + RD(0)); F_002492D8(c);
{ int t = RD(16) != RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0024AE08; }
SET32(4, RW(4) + -22408); goto L_0024AE28;
L_0024AE08:;
{ int t = RSD(20) >= 0; SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0024AE18; }
SET32(4, RW(4) + -22368); goto L_0024AE28;
L_0024AE18:;
if (RD(19) != RD(0)) { SET64(4, (s8)rd8(c, (RW(16) + 1))); goto L_0024AE38; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -22320);
L_0024AE28:;
SET64(31, 0x24ae30);  F_00248E98(c);
SET32(2, RW(0) + -3); goto L_0024AF24;
L_0024AE38:;
SET32(3, RW(0) + 2);
{ int t = RD(4) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0024AF24; }
SET64(2, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(2) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0024AE60; }
SET64(31, 0x24ae58); SET32(4, RW(4) + -22280); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_0024AF24;
L_0024AE60:;
SET32(18, RW(20) << 11);
SET64(4, RD(19) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x24ae74); SET64(6, RD(0) + RD(0)); F_00266B28(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET32(2, RW(0) + -2); if (t) goto L_0024AF24; }
SET64(31, 0x24ae88);  F_00247970(c);
wr32(c, (RW(16) + 36), RW(19));
wr32(c, (RW(16) + 8), RW(17));
SET64(4, (s64)(s32)0x3f0000);
wr32(c, (RW(16) + 40), RW(18));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(4) + -18128)));
{ int t = RD(2) != RD(3); SET64(5, RD(18) + RD(0)); if (t) goto L_0024AEB0; }
SET64(31, 0x24aeb0); SET64(4, RD(19) + RD(0)); F_002490F0(c);
L_0024AEB0:;
SET64(31, 0x24aeb8);  F_00247988(c);
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x24aec8); SET64(5, RD(20) + RD(0)); F_0024AB08(c);
SET64(17, RD(2) + RD(0));
if (RSD(17) > 0) { wr8(c, (RW(16) + 2), (u8)RW(0)); goto L_0024AF08; }
SET64(31, 0x24aedc);  F_00247970(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(4) == RD(0);  if (t) goto L_0024AEFC; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x24aef8);  rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_0024AEFC:;
SET64(31, 0x24af04);  F_00247988(c);
wr8(c, (RW(16) + 2), (u8)RW(0));
L_0024AF08:;
SET64(6, RD(16) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(8, RD(19) + RD(0));
SET32(4, RW(0) + 4);
SET64(31, 0x24af20); SET32(5, RW(0) + 1); F_002492D8(c);
SET64(2, RD(17) + RD(0));
L_0024AF24:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0024AF48(Ctx *c) { /* func_0024AF48 */
ENTER(0x24af48);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24af6c); SET64(18, RD(6) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24af7c); SET64(6, RD(18) + RD(0)); F_0024AFA0(c);
SET64(31, 0x24af84); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0024AFA0(Ctx *c) { /* adxf_ReadNw */
ENTER(0x24afa0);
SET32(29, RW(29) + -16);
SET64(2, RD(6) & 0x3f);
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024AFD0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24afbc); SET32(4, RW(4) + -22232); F_00248E98(c);
SET32(2, RW(0) + -3);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_0024AFD0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024ADB8(c); return; }
}

void F_0024AFE0(Ctx *c) { /* func_0024AFE0 */
ENTER(0x24afe0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24aff4); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x24affc); SET64(4, RD(16) + RD(0)); F_0024B018(c);
SET64(31, 0x24b004); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024B018(Ctx *c) { /* func_0024B018 */
ENTER(0x24b018);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET64(6, RD(16) + RD(0));
SET32(7, RW(0) + -1);
SET32(4, RW(0) + 5);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24b044); SET32(8, RW(0) + -1); F_002492D8(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(16) != RD(0); SET32(4, RW(4) + -22176); if (t) goto L_0024B060; }
SET64(31, 0x24b058);  F_00248E98(c);
SET32(2, RW(0) + -3); goto L_0024B0F0;
L_0024B060:;
SET64(3, (s8)rd8(c, (RW(16) + 1)));
SET32(17, RW(0) + 1);
{ int t = RD(3) == RD(17); SET32(2, RW(0) + 3); if (t) goto L_0024B0EC; }
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_0024B080; }
wr8(c, (RW(16) + 1), (u8)RW(17)); goto L_0024B0EC;
L_0024B080:;
{ int t = RD(4) != RD(0);  if (t) goto L_0024B0A0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24b094); SET32(4, RW(4) + -22136); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_0024B0F0;
L_0024B0A0:;
SET64(31, 0x24b0a8);  F_00253690(c);
SET64(31, 0x24b0b0);  F_00247970(c);
SET64(31, 0x24b0b8); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00253468(c);
SET64(3, (s32)rd32(c, (RW(16) + 20)));
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) - RW(3));
SET64(31, 0x24b0cc); wr32(c, (RW(16) + 32), RW(2)); F_0024A928(c);
SET64(31, 0x24b0d4); wr8(c, (RW(16) + 1), (u8)RW(17)); F_00247988(c);
SET32(4, RW(0) + 5);
SET32(5, RW(0) + 1);
SET64(6, RD(16) + RD(0));
SET32(7, RW(0) + -1);
SET64(31, 0x24b0ec); SET32(8, RW(0) + -1); F_002492D8(c);
L_0024B0EC:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
L_0024B0F0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0024B108(Ctx *c) { /* func_0024B108 */
ENTER(0x24b108);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24b11c); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x24b124); SET64(4, RD(16) + RD(0)); F_0024B140(c);
SET64(31, 0x24b12c); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024B140(Ctx *c) { /* func_0024B140 */
ENTER(0x24b140);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET64(6, RD(16) + RD(0));
SET32(7, RW(0) + -1);
SET32(4, RW(0) + 7);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24b16c); SET32(8, RW(0) + -1); F_002492D8(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(16) != RD(0); SET32(4, RW(4) + -22088); if (t) goto L_0024B188; }
SET64(31, 0x24b180);  F_00248E98(c);
SET32(2, RW(0) + -3); goto L_0024B1F0;
L_0024B188:;
SET64(3, (s8)rd8(c, (RW(16) + 1)));
SET32(17, RW(0) + 1);
{ int t = RD(3) == RD(17); SET32(2, RW(0) + 3); if (t) goto L_0024B1EC; }
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_0024B1A8; }
wr8(c, (RW(16) + 1), (u8)RW(17)); goto L_0024B1EC;
L_0024B1A8:;
{ int t = RD(4) != RD(0);  if (t) goto L_0024B1C8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24b1bc); SET32(4, RW(4) + -22048); F_00248E98(c);
SET32(2, RW(0) + -1); goto L_0024B1F0;
L_0024B1C8:;
SET64(31, 0x24b1d0);  F_002535F8(c);
wr8(c, (RW(16) + 3), (u8)RW(17));
SET32(4, RW(0) + 7);
SET32(5, RW(0) + 1);
SET64(6, RD(16) + RD(0));
SET32(7, RW(0) + -1);
SET64(31, 0x24b1ec); SET32(8, RW(0) + -1); F_002492D8(c);
L_0024B1EC:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
L_0024B1F0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0024B208(Ctx *c) { /* func_0024B208 */
ENTER(0x24b208);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s8)rd8(c, (RW(16) + 1)));
if (RD(2) != RD(3)) { SET64(17, (s8)rd8(c, (RW(16) + 3))); goto L_0024B274; }
SET64(31, 0x24b238); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002533C0(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x24b244); wr8(c, (RW(16) + 1), (u8)RW(2)); F_00253468(c);
SET64(4, RD(16) + RD(0));
SET64(3, rd8(c, (RW(16) + 1)));
SET64(5, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(3) + -3);
SET32(2, RW(2) - RW(5));
SET64(3, RD(3) < (u64)(s64)2);
SET32(5, RW(5) + RW(2));
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 32), RW(2)); if (t) goto L_0024B270; }
SET64(31, 0x24b270); wr32(c, (RW(16) + 20), RW(5)); F_0024A928(c);
L_0024B270:;
SET64(17, (s8)rd8(c, (RW(16) + 3)));
L_0024B274:;
SET32(2, RW(0) + 1);
if (RD(17) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024B2BC; }
SET64(31, 0x24b288); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002533C0(c);
SET64(18, RD(2) + RD(0));
if (RD(18) != RD(17)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024B2BC; }
SET64(31, 0x24b29c); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00253468(c);
SET64(3, (s32)rd32(c, (RW(16) + 20)));
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) - RW(3));
SET64(31, 0x24b2b0); wr32(c, (RW(16) + 32), RW(2)); F_0024A928(c);
wr8(c, (RW(16) + 1), (u8)RW(18));
wr8(c, (RW(16) + 3), (u8)RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_0024B2BC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0024B2D0(Ctx *c) { /* func_0024B2D0 */
ENTER(0x24b2d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24b2e0);  F_0024BC50(c);
SET64(31, 0x24b2e8);  F_0024B2F8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024BC58(c); return; }
}

void F_0024B2F8(Ctx *c) { /* func_0024B2F8 */
ENTER(0x24b2f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24b318); SET32(18, RW(0) + 1); F_00247970(c);
SET64(2, (s64)(s32)0x3f0000);
SET32(16, RW(2) + -20240);
L_0024B320:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_0024B338; }
SET64(31, 0x24b334); SET64(4, RD(16) + RD(0)); F_0024B208(c);
SET32(17, RW(17) + -1);
L_0024B338:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 68); if (t) { POLL(); goto L_0024B320; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00247988(c); return; }
}

void F_0024B358(Ctx *c) { /* func_0024B358 */
ENTER(0x24b358);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24b37c); SET64(18, RD(6) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24b38c); SET64(6, RD(18) + RD(0)); F_0024B3B0(c);
SET64(31, 0x24b394); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0024B3B0(Ctx *c) { /* func_0024B3B0 */
ENTER(0x24b3b0);
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
SET64(31, 0x24b3ec); SET64(8, RD(17) + RD(0)); F_002492D8(c);
if (RD(16) != RD(0)) { SET64(2, (s8)rd8(c, (RW(16) + 1))); goto L_0024B400; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -22000); goto L_0024B454;
L_0024B400:;
SET32(19, RW(0) + 2);
{ int t = RD(2) != RD(19);  if (t) goto L_0024B414; }
SET64(31, 0x24b414); SET64(4, RD(16) + RD(0)); F_0024B018(c);
L_0024B414:;
{ int t = RD(17) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0024B428; }
wr32(c, (RW(16) + 20), RW(18)); goto L_0024B468;
L_0024B428:;
{ int t = RD(17) != RD(2);  if (t) goto L_0024B438; }
SET64(2, (s32)rd32(c, (RW(16) + 20))); goto L_0024B444;
L_0024B438:;
{ int t = RD(17) != RD(19); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0024B450; }
SET64(2, (s32)rd32(c, (RW(16) + 12)));
L_0024B444:;
SET32(2, RW(2) + RW(18));
wr32(c, (RW(16) + 20), RW(2)); goto L_0024B468;
L_0024B450:;
SET32(4, RW(4) + -21960);
L_0024B454:;
SET64(31, 0x24b45c);  F_00248E98(c);
SET32(2, RW(0) + -3); goto L_0024B4A8;
L_0024B468:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
if (RSD(2) >= 0) { SET64(3, (s32)rd32(c, (RW(16) + 12))); goto L_0024B480; }
wr32(c, (RW(16) + 20), RW(0)); goto L_0024B48C;
L_0024B480:;
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 20), RW(3)); goto L_0024B48C; }
L_0024B48C:;
SET64(7, RD(18) + RD(0));
SET64(8, RD(17) + RD(0));
SET32(4, RW(0) + 6);
SET32(5, RW(0) + 1);
SET64(31, 0x24b4a4); SET64(6, RD(16) + RD(0)); F_002492D8(c);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
L_0024B4A8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0024B4C8(Ctx *c) { /* func_0024B4C8 */
ENTER(0x24b4c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24b4dc); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x24b4e4); SET64(4, RD(16) + RD(0)); F_0024B500(c);
SET64(31, 0x24b4ec); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024B500(Ctx *c) { /* func_0024B500 */
ENTER(0x24b500);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024B520; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24b518); SET32(4, RW(4) + -21920); F_00248E98(c);
SET32(2, RW(0) + -3); goto L_0024B524;
L_0024B520:;
SET64(2, (s32)rd32(c, (RW(4) + 20)));
L_0024B524:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024B530(Ctx *c) { /* func_0024B530 */
ENTER(0x24b530);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24b544); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x24b54c); SET64(4, RD(16) + RD(0)); F_0024B568(c);
SET64(31, 0x24b554); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024B568(Ctx *c) { /* func_0024B568 */
ENTER(0x24b568);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24b57c); SET64(16, RD(4) + RD(0)); F_0024B5E0(c);
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

void F_0024B5A8(Ctx *c) { /* func_0024B5A8 */
ENTER(0x24b5a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24b5bc); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x24b5c4); SET64(4, RD(16) + RD(0)); F_0024B5E0(c);
SET64(31, 0x24b5cc); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024B5E0(Ctx *c) { /* func_0024B5E0 */
ENTER(0x24b5e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0024B608; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24b600); SET32(4, RW(4) + -21880); F_00248E98(c);
SET32(2, RW(0) + -3); goto L_0024B648;
L_0024B608:;
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0x7fff0000);
SET64(2, RD(2) | 0xf7ff);
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) == RD(0);  if (t) goto L_0024B63C; }
SET64(31, 0x24b628); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00254530(c);
SET64(31, 0x24b630); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002533C0(c);
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3); SET32(2, RW(0) + -5); if (t) goto L_0024B648; }
L_0024B63C:;
SET64(31, 0x24b644); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00254090(c);
wr32(c, (RW(16) + 16), RW(2));
L_0024B648:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0024B658(Ctx *c) { /* func_0024B658 */
ENTER(0x24b658);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24b674); SET64(17, RD(5) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24b680); SET64(5, RD(17) + RD(0)); F_0024B6A0(c);
SET64(31, 0x24b688); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_0024B6A0(Ctx *c) { /* adxf_GetNumReqSct */
ENTER(0x24b6a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0024B6D0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24b6c0); SET32(4, RW(4) + -21832); F_00248E98(c);
wr32(c, (RW(16) + 0), RW(0));
SET32(2, RW(0) + -3); goto L_0024B6DC;
L_0024B6D0:;
SET64(2, (s32)rd32(c, (RW(4) + 24)));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 28)));
L_0024B6DC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0024B6F0(Ctx *c) { /* func_0024B6F0 */
ENTER(0x24b6f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24b704); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x24b70c); SET64(4, RD(16) + RD(0)); F_0024B728(c);
SET64(31, 0x24b714); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024B728(Ctx *c) { /* func_0024B728 */
ENTER(0x24b728);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024B748; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24b740); SET32(4, RW(4) + -21784); F_00248E98(c);
SET32(2, RW(0) + -3); goto L_0024B74C;
L_0024B748:;
SET64(2, (s32)rd32(c, (RW(4) + 32)));
L_0024B74C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024B758(Ctx *c) { /* func_0024B758 */
ENTER(0x24b758);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24b76c); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x24b774); SET64(4, RD(16) + RD(0)); F_0024B790(c);
SET64(31, 0x24b77c); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024B790(Ctx *c) { /* adxf_GetStat */
ENTER(0x24b790);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024B7B0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24b7a8); SET32(4, RW(4) + -21736); F_00248E98(c);
SET32(2, RW(0) + -3); goto L_0024B7B4;
L_0024B7B0:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
L_0024B7B4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024B7C0(Ctx *c) { /* adxf_ChkPrmGfr */
ENTER(0x24b7c0);
SET32(29, RW(29) + -16);
SET32(2, RW(4) << 2);
SET64(4, RD(4) < (u64)(s64)256);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024B7E0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -21696); goto L_0024B820;
L_0024B7E0:;
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + RW(2));
SET64(4, (s32)rd32(c, (RW(4) + -19152)));
{ int t = RD(4) != RD(0);  if (t) goto L_0024B800; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -21696); goto L_0024B820;
L_0024B800:;
if (RSD(5) < 0) { SET64(4, (s64)(s32)0x4b0000); goto L_0024B81C; }
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET64(2, RSD(5) < RSD(2));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0024B82C; }
SET64(4, (s64)(s32)0x4b0000);
L_0024B81C:;
SET32(4, RW(4) + -21656);
L_0024B820:;
SET64(31, 0x24b828);  F_00248E98(c);
SET32(2, RW(0) + -3);
L_0024B82C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024B838(Ctx *c) { /* ADXF_GetFnameRange */
ENTER(0x24b838);
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
SET64(31, 0x24b86c); SET64(20, RD(8) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(31, 0x24b884); SET64(8, RD(20) + RD(0)); F_0024B8B0(c);
SET64(31, 0x24b88c); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0024B8B0(Ctx *c) { /* func_0024B8B0 */
ENTER(0x24b8b0);
SET32(29, RW(29) + -32);
SET64(2, RD(7) + RD(0));
SET64(9, RD(8) + RD(0));
SET64(8, RD(2) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24b8cc); SET64(7, RD(29) + RD(0)); F_0024B960(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0024B8D8(Ctx *c) { /* func_0024B8D8 */
ENTER(0x24b8d8);
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
SET64(31, 0x24b914); SET64(21, RD(9) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(8, RD(20) + RD(0));
SET64(31, 0x24b930); SET64(9, RD(21) + RD(0)); F_0024B960(c);
SET64(31, 0x24b938); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
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

void F_0024B960(Ctx *c) { /* func_0024B960 */
ENTER(0x24b960);
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
SET64(31, 0x24b9a4); SET64(23, RD(6) + RD(0)); F_0024B7C0(c);
SET64(20, RD(2) + RD(0));
if (RSD(20) >= 0) { SET32(2, RW(16) << 2); goto L_0024B9C8; }
SET32(3, RW(0) + -1);
wr32(c, (RW(21) + 0), RW(0));
wr32(c, (RW(22) + 0), RW(3));
wr32(c, (RW(19) + 0), RW(3)); goto L_0024BA8C;
L_0024B9C8:;
SET32(4, RW(0) + 1);
SET64(17, (s64)(s32)0x3f0000);
SET32(17, RW(17) + RW(2));
SET64(17, (s32)rd32(c, (RW(17) + -19152)));
SET64(3, (s8)rd8(c, (RW(17) + 15)));
if (RD(3) != RD(4)) { SET64(16, rd16(c, (RW(17) + 280))); goto L_0024BA28; }
SET64(16, (s32)rd32(c, (RW(17) + 280)));
{ int t = RSD(18) <= 0; SET32(5, RW(17) + 284); if (t) goto L_0024BA14; }
SET64(4, RD(5) + RD(0));
SET64(3, RD(18) + RD(0));
L_0024B9F8:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(4, RW(4) + 4);
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + RW(2)); if (t) { POLL(); goto L_0024B9F8; } }
L_0024BA14:;
SET32(2, RW(18) << 2);
SET32(2, RW(2) + RW(5));
SET64(3, (s32)rd32(c, (RW(2) + 0))); goto L_0024BA60;
L_0024BA28:;
{ int t = RSD(18) <= 0; SET32(5, RW(17) + 282); if (t) goto L_0024BA54; }
SET64(4, RD(5) + RD(0));
SET64(3, RD(18) + RD(0));
L_0024BA38:;
SET64(2, rd16(c, (RW(4) + 0)));
SET32(4, RW(4) + 2);
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + RW(2)); if (t) { POLL(); goto L_0024BA38; } }
L_0024BA54:;
SET32(2, RW(18) << 1);
SET32(2, RW(2) + RW(5));
SET64(3, rd16(c, (RW(2) + 0)));
L_0024BA60:;
wr32(c, (RW(19) + 0), RW(3));
SET64(4, RD(23) + RD(0));
SET32(5, RW(17) + 16);
SET64(31, 0x24ba74); SET32(6, RW(0) + 256); F_0012A978(c);
SET64(4, (s32)rd32(c, (RW(17) + 272)));
SET64(3, (s32)rd32(c, (RW(17) + 276)));
SET64(2, RD(20) + RD(0));
wr32(c, (RW(21) + 0), RW(4));
SET32(3, RW(3) + RW(16));
wr32(c, (RW(22) + 0), RW(3));
L_0024BA8C:;
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

void F_0024BAB8(Ctx *c) { /* func_0024BAB8 */
ENTER(0x24bab8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24bacc); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x24bad4); SET64(4, RD(16) + RD(0)); F_0024BAF0(c);
SET64(31, 0x24badc); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024BAF0(Ctx *c) { /* adxf_GetFnameFromPt */
ENTER(0x24baf0);
SET32(4, RW(4) << 2);
SET64(2, (s64)(s32)0x3f0000);
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + -19152)));
SET32(2, RW(2) + 16); return;
}

void F_0024BB08(Ctx *c) { /* func_0024BB08 */
ENTER(0x24bb08);
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(2) + -18128), RW(4)); return;
}

void F_0024BB18(Ctx *c) { /* func_0024BB18 */
ENTER(0x24bb18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24bb34); SET64(17, RD(5) + RD(0)); F_0024BC50(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24bb40); SET64(5, RD(17) + RD(0)); F_0024BB58(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0024BC58(c); return; }
}

void F_0024BB58(Ctx *c) { /* adxf_SetReqRdSct */
ENTER(0x24bb58);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s8)rd8(c, (RW(4) + 1)));
{ int t = RD(2) != RD(3); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0024BB80; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -21616);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_0024BB80:;
wr32(c, (RW(4) + 44), RW(5));
SET32(29, RW(29) + 16); return;
}

void F_0024BB90(Ctx *c) { /* func_0024BB90 */
ENTER(0x24bb90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24bba4); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x24bbac); SET64(4, RD(16) + RD(0)); F_0024BBC8(c);
SET64(31, 0x24bbb4); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024BBC8(Ctx *c) { /* adxf_GetStatRead */
ENTER(0x24bbc8);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024BBF0; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_0024BBF0; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002544F0(c); return; }
L_0024BBF0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024BC00(Ctx *c) { /* func_0024BC00 */
ENTER(0x24bc00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24bc14); SET64(16, RD(4) + RD(0)); F_0024BC50(c);
SET64(31, 0x24bc1c); SET64(4, RD(16) + RD(0)); F_0024BC38(c);
SET64(31, 0x24bc24); SET64(16, RD(2) + RD(0)); F_0024BC58(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024BC38(Ctx *c) { /* func_0024BC38 */
ENTER(0x24bc38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00254110(c); return; }
}

void F_0024BC50(Ctx *c) { /* func_0024BC50 */
ENTER(0x24bc50);
 return;
}

void F_0024BC58(Ctx *c) { /* func_0024BC58 */
ENTER(0x24bc58);
 return;
}

void F_0024BC60(Ctx *c) { /* func_0024BC60 */
ENTER(0x24bc60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24bc70);  F_002479A0(c);
SET64(31, 0x24bc78);  F_0024BC88(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_0024BC88(Ctx *c) { /* func_0024BC88 */
ENTER(0x24bc88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24bc9c);  F_00247970(c);
SET64(2, (s64)(s32)0x3f0000);
SET32(16, RW(2) + -9272);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0); SET64(31, rd64(c, (RW(29) + 8))); if (t) goto L_0024BCC0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00247988(c); return; }
L_0024BCC0:;
SET32(2, RW(0) + 1);
SET64(31, 0x24bccc); wr32(c, (RW(16) + 0), RW(2)); F_00247988(c);
SET32(2, RW(0) + 2);
SET64(31, 0x24bcd8); wr32(c, (RW(16) + 0), RW(2)); F_0025CCA8(c);
SET32(2, RW(0) + 3);
SET64(31, 0x24bce4); wr32(c, (RW(16) + 0), RW(2)); F_00253E60(c);
SET32(2, RW(0) + 4);
SET64(31, 0x24bcf0); wr32(c, (RW(16) + 0), RW(2)); F_00253DB8(c);
SET32(2, RW(0) + 5);
SET64(31, 0x24bcfc); wr32(c, (RW(16) + 0), RW(2)); F_0024B2D0(c);
SET32(2, RW(0) + 6);
SET64(31, 0x24bd08); wr32(c, (RW(16) + 0), RW(2)); F_00253DB8(c);
SET32(2, RW(0) + 7);
SET64(31, 0x24bd14); wr32(c, (RW(16) + 0), RW(2)); F_00253E60(c);
SET32(2, RW(0) + 8);
SET64(31, 0x24bd20); wr32(c, (RW(16) + 0), RW(2)); F_0025CCA8(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024BD38(Ctx *c) { /* func_0024BD38 */
ENTER(0x24bd38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24bd48);  F_002479A0(c);
SET64(31, 0x24bd50);  F_0024BD60(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_0024BD60(Ctx *c) { /* func_0024BD60 */
ENTER(0x24bd60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024BC60(c); return; }
}

void F_0024BD78(Ctx *c) { /* func_0024BD78 */
ENTER(0x24bd78);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24bd8c);  F_002479A0(c);
SET64(31, 0x24bd94);  F_0024BDB0(c);
SET64(31, 0x24bd9c); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024BDB0(Ctx *c) { /* func_0024BDB0 */
ENTER(0x24bdb0);
SET64(3, (s64)(s32)0x3f0000);
SET32(3, RW(3) + -9272);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(0) < RD(2)); return;
}

void F_0024BDC8(Ctx *c) { /* func_0024BDC8 */
ENTER(0x24bdc8);
SET64(2, (s64)(s32)0x3f0000);
wr32(c, (RW(2) + -9236), RW(4)); return;
}

void F_0024BDD8(Ctx *c) { /* func_0024BDD8 */
ENTER(0x24bdd8);
SET32(29, RW(29) + -16);
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
}

void F_0024BDF0(Ctx *c) { /* func_0024BDF0 */
ENTER(0x24bdf0);
SET32(29, RW(29) + -16);
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
}

void F_0024BE08(Ctx *c) { /* func_0024BE08 */
ENTER(0x24be08);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + -9224);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET32(29, RW(29) + 16); { F_00256E30(c); return; }
}

void F_0024BE30(Ctx *c) { /* func_0024BE30 */
ENTER(0x24be30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24be40);  F_00261ED0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0024BE50(Ctx *c) { /* func_0024BE50 */
ENTER(0x24be50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24be60); SET64(4, RD(0) + RD(0)); F_0024BE80(c);
SET64(31, 0x24be68); SET64(4, RD(0) + RD(0)); F_0024BEA0(c);
SET64(31, 0x24be70); SET64(4, RD(0) + RD(0)); F_0024BE30(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024BE80(Ctx *c) { /* func_0024BE80 */
ENTER(0x24be80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24be90);  F_00256E30(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0024BEA0(Ctx *c) { /* func_0024BEA0 */
ENTER(0x24bea0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24beb0);  F_0024BC60(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0024BEC0(Ctx *c) { /* func_0024BEC0 */
ENTER(0x24bec0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(4, (s32)rd32(c, (RW(16) + -9248)));
SET32(2, RW(2) + 20480);
SET32(3, RW(3) + -21568);
wr64(c, (RW(29) + 8), RD(31));
wr32(c, (RW(2) + 0), RW(3));
if (RD(4) != RD(0)) { SET32(3, RW(16) + -9248); goto L_0024C030; }
SET64(31, 0x24bef8);  F_00247910(c);
SET64(31, 0x24bf00);  F_00247970(c);
SET64(31, 0x24bf08);  F_00267630(c);
SET64(31, 0x24bf10);  F_00266A28(c);
SET64(31, 0x24bf18);  F_00266010(c);
SET64(31, 0x24bf20);  F_00248E00(c);
SET64(31, 0x24bf28);  F_00252CD0(c);
SET64(31, 0x24bf30);  F_0024EEB8(c);
SET64(31, 0x24bf38);  F_00249110(c);
SET64(31, 0x24bf40);  F_0024EB30(c);
SET64(31, 0x24bf48);  F_00262428(c);
SET64(31, 0x24bf50);  F_00269C38(c);
SET64(4, (s64)(s32)0x250000);
SET64(5, RD(0) + RD(0));
SET64(31, 0x24bf60); SET32(4, RW(4) + -16936); F_0024EB60(c);
SET64(4, (s64)(s32)0x250000);
SET32(4, RW(4) + -16912);
SET64(31, 0x24bf70); SET64(5, RD(0) + RD(0)); F_00262360(c);
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + -9216);
SET64(5, RD(0) + RD(0));
SET64(31, 0x24bf84); SET32(6, RW(0) + 3136); F_001273D0(c);
SET64(31, 0x24bf8c);  F_0024D7B8(c);
SET64(7, RD(2) + RD(0));
SET32(2, RW(0) + 1);
SET64(5, (s64)(s32)0x250000);
SET32(4, RW(0) + 5);
SET32(5, RW(5) + -16816);
{ int t = RD(7) != RD(2); SET64(6, RD(0) + RD(0)); if (t) goto L_0024BFF8; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s32)rd32(c, (RW(2) + -9236)));
{ int t = RD(3) != RD(7); SET64(7, RD(0) + RD(0)); if (t) goto L_0024BFF8; }
SET64(6, (s64)(s32)0x250000);
SET32(4, RW(0) + 2);
SET32(5, RW(0) + 1);
SET64(31, 0x24bfcc); SET32(6, RW(6) + -16768); F_00269720(c);
SET64(5, (s64)(s32)0x250000);
SET32(5, RW(5) + -16736);
SET32(4, RW(0) + 4);
SET64(31, 0x24bfe0); SET64(6, RD(0) + RD(0)); F_00269558(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(5, (s64)(s32)0x250000);
SET32(4, RW(0) + 5);
SET32(5, RW(5) + -16848);
SET64(6, RD(0) + RD(0));
wr32(c, (RW(3) + -9228), RW(2));
L_0024BFF8:;
SET64(31, 0x24c000);  F_00269558(c);
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(3) + -9240), RW(2));
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET32(2, RW(2) + -9224);
SET32(4, RW(0) + 60);
wr32(c, (RW(2) + 0), RW(0));
SET64(31, 0x24c024); wr32(c, (RW(3) + -9232), RW(0)); F_00256740(c);
SET64(31, 0x24c02c);  F_00247988(c);
SET32(3, RW(16) + -9248);
L_0024C030:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET32(29, RW(29) + 16); return;
}

void F_0024C050(Ctx *c) { /* func_0024C050 */
ENTER(0x24c050);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(2) + -9248), RW(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024BEC0(c); return; }
}

void F_0024C070(Ctx *c) { /* func_0024C070 */
ENTER(0x24c070);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(3) + -9248);
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_0024C140; }
SET64(16, (s64)(s32)0x400000);
SET32(16, RW(16) + -20964);
SET64(31, 0x24c0a4); wr32(c, (RW(16) + 0), RW(0)); F_002551E8(c);
SET64(31, 0x24c0ac);  F_0024EB48(c);
SET64(31, 0x24c0b4);  F_002491E8(c);
SET64(31, 0x24c0bc);  F_00252D20(c);
SET64(31, 0x24c0c4);  F_002624A8(c);
SET64(31, 0x24c0cc);  F_00247970(c);
SET32(4, RW(0) + 2);
SET64(31, 0x24c0d8); SET32(5, RW(0) + 1); F_00269660(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + -9228)));
SET64(31, 0x24c0e8); SET32(4, RW(0) + 4); F_00269660(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + -9240)));
SET64(31, 0x24c0f8); SET32(4, RW(0) + 5); F_00269660(c);
SET64(31, 0x24c100);  F_00269C78(c);
SET64(31, 0x24c108);  F_0024EEE8(c);
SET64(31, 0x24c110);  F_00248E38(c);
SET64(31, 0x24c118);  F_00266090(c);
SET64(31, 0x24c120);  F_00266AA8(c);
SET64(31, 0x24c128);  F_002676B0(c);
SET64(31, 0x24c130);  F_00247988(c);
SET64(31, 0x24c138);  F_00247940(c);
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(2));
L_0024C140:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0024C150(Ctx *c) { /* func_0024C150 */
ENTER(0x24c150);
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
SET64(31, 0x24c18c); SET32(16, RW(16) + -5056); F_00252280(c);
SET64(4, (s64)(s32)0x3f0000);
SET64(6, RD(0) + RD(0));
SET32(4, RW(4) + -6080);
SET64(31, 0x24c1a0); SET32(5, RW(0) + 1024); F_00266B28(c);
SET32(5, RW(0) + 32);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24c1b0); SET64(21, RD(2) + RD(0)); F_00266110(c);
SET32(4, RW(16) + 32);
SET32(5, RW(0) + 32);
SET64(31, 0x24c1c0); wr32(c, (RW(29) + 0), RW(2)); F_00266110(c);
SET64(16, (s32)rd32(c, (RW(17) + 20)));
SET64(5, RD(29) + RD(0));
SET32(4, RW(0) + 2);
SET64(6, RD(21) + RD(0));
SET64(31, 0x24c1d8); wr32(c, (RW(29) + 4), RW(2)); F_002522E0(c);
SET64(5, RD(18) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(31, 0x24c1f0); SET64(4, RD(17) + RD(0)); F_00252890(c);
SET64(31, 0x24c1f8); SET64(4, RD(17) + RD(0)); F_00252520(c);
SET64(31, 0x24c200);  F_00252BE8(c);
SET64(3, (s32)rd32(c, (RW(21) + 0)));
SET32(19, RW(29) + 16);
SET32(6, RW(0) + 1024);
SET64(4, RD(21) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET32(5, RW(0) + 1);
{ u32 t = RW(2); SET64(31, 0x24c220); SET64(7, RD(19) + RD(0)); rt_call(c, t); }
SET64(6, (s32)rd32(c, (RW(29) + 20)));
if (RD(6) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); goto L_0024C250; }
L_0024C230:;
 { POLL(); goto L_0024C230; }
L_0024C250:;
SET32(18, RW(29) + 32);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
{ u32 t = RW(3); SET64(31, 0x24c268); SET64(7, RD(18) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 36)));
SET64(6, (s32)rd32(c, (RW(29) + 20)));
SET64(2, RSD(2) < RSD(6));
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(29) + 32))); if (t) goto L_0024C2A0; }
L_0024C280:;
 { POLL(); goto L_0024C280; }
L_0024C2A0:;
SET64(31, 0x24c2a8); SET64(5, (s32)rd32(c, (RW(29) + 16))); F_00127218(c);
SET64(3, (s32)rd32(c, (RW(21) + 0)));
SET64(6, RD(19) + RD(0));
SET64(4, RD(21) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x24c2c0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(6, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x24c2d8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, 0x24c2e0); SET64(4, RD(17) + RD(0)); F_00252648(c);
SET64(31, 0x24c2e8); SET64(4, RD(17) + RD(0)); F_002524B0(c);
SET64(3, (s32)rd32(c, (RW(21) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x24c2f8); SET64(4, RD(21) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x24c30c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x24c320);  rt_call(c, t); }
SET64(31, 0x24c328);  F_002522B0(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(21, rd64(c, (RW(29) + 88)));
SET64(31, rd64(c, (RW(29) + 96)));
SET32(29, RW(29) + 112); return;
}

void F_0024C350(Ctx *c) { /* func_0024C350 */
ENTER(0x24c350);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24c36c); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24c378); SET64(5, RD(17) + RD(0)); F_0024C390(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_0024C390(Ctx *c) { /* func_0024C390 */
ENTER(0x24c390);
SET32(29, RW(29) + -16);
SET64(7, (s64)(s32)0xf0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(7, RD(7) | 0xffff);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024C410(c); return; }
}

void F_0024C3B0(Ctx *c) { /* func_0024C3B0 */
ENTER(0x24c3b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24c3dc); SET64(19, RD(7) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x24c3f0); SET64(7, RD(19) + RD(0)); F_0024C410(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_002479A8(c); return; }
}

void F_0024C410(Ctx *c) { /* adxt_EntryFnameRange */
ENTER(0x24c410);
SET32(29, RW(29) + -16);
SET64(2, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(8, RD(7) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(2) + RD(0));
{ int t = RD(4) != RD(0); SET64(2, (s32)rd32(c, (RW(4) + 148))); if (t) goto L_0024C450; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -21488);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_0024C450:;
SET64(31, 0x24c458); SET64(4, RD(2) + RD(0)); F_00261BC8(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -21440);
{ int t = RSD(2) >= 0; SET64(5, RD(16) + RD(0)); if (t) goto L_0024C470; }
SET64(31, 0x24c470);  F_00248EF0(c);
L_0024C470:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0024C480(Ctx *c) { /* func_0024C480 */
ENTER(0x24c480);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24c4a4); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24c4b4); SET64(6, RD(18) + RD(0)); F_0024C4D0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_0024C4D0(Ctx *c) { /* adxt_EntryAfs */
ENTER(0x24c4d0);
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
{ int t = RD(2) != RD(0); SET64(18, (s32)rd32(c, (RW(2) + 148))); if (t) goto L_0024C518; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24c50c); SET32(4, RW(4) + -21408); F_00248E98(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0024C584;
L_0024C518:;
SET64(6, (s32)rd32(c, (RW(2) + 176)));
SET32(7, RW(29) + 16);
SET32(8, RW(29) + 20);
SET64(31, 0x24c52c); SET32(9, RW(29) + 24); F_0024B8D8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET32(7, RW(0) + 16); if (t) goto L_0024C568; }
SET64(31, 0x24c548);  F_0024BAB8(c);
SET64(4, RD(18) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 16)));
SET64(5, RD(2) + RD(0));
SET64(7, (s32)rd32(c, (RW(29) + 20)));
SET64(31, 0x24c560); SET64(8, (s32)rd32(c, (RW(29) + 24))); F_00261BC8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0024C584;
L_0024C568:;
SET64(31, 0x24c570);  F_00249068(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -21360);
SET64(31, 0x24c580); SET64(5, RD(29) + RD(0)); F_00248EF0(c);
SET64(16, rd64(c, (RW(29) + 32)));
L_0024C584:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0024C598(Ctx *c) { /* func_0024C598 */
ENTER(0x24c598);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24c5ac); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x24c5b4); SET64(4, RD(16) + RD(0)); F_0024C5C8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_0024C5C8(Ctx *c) { /* adxt_StartSeamless */
ENTER(0x24c5c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
{ int t = RD(16) != RD(0); SET64(17, (s32)rd32(c, (RW(16) + 148))); if (t) goto L_0024C600; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -21320);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00248E98(c); return; }
L_0024C600:;
SET64(31, 0x24c608);  F_00255538(c);
SET64(31, 0x24c610);  F_00247970(c);
SET64(5, (s32)rd32(c, (RW(16) + 16)));
SET64(31, 0x24c61c); SET64(4, RD(16) + RD(0)); F_002552B0(c);
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 20)));
{ u32 t = RW(2); SET64(31, 0x24c630);  rt_call(c, t); }
SET32(3, RW(0) + 4);
SET64(5, (s16)rd16(c, (RW(16) + 62)));
SET64(4, RD(17) + RD(0));
wr8(c, (RW(16) + 2), (u8)RW(3));
SET64(31, 0x24c648); SET32(5, RW(5) << 11); F_002621E8(c);
SET64(31, 0x24c650);  F_00247988(c);
SET64(31, 0x24c658); SET64(4, RD(17) + RD(0)); F_00261DA0(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002577E0(c); return; }
}

void F_0024C678(Ctx *c) { /* func_0024C678 */
ENTER(0x24c678);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24c694); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24c6a0); SET64(5, RD(17) + RD(0)); F_0024C6B8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_0024C6B8(Ctx *c) { /* adxt_SetSeamlessLp */
ENTER(0x24c6b8);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024C6D8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -21272);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_0024C6D8:;
SET64(4, (s32)rd32(c, (RW(4) + 148)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002622F8(c); return; }
}

void F_0024C6E8(Ctx *c) { /* func_0024C6E8 */
ENTER(0x24c6e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x24c704); SET64(17, RD(5) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24c710); SET64(5, RD(17) + RD(0)); F_0024C728(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_0024C728(Ctx *c) { /* func_0024C728 */
ENTER(0x24c728);
SET32(29, RW(29) + -16);
SET64(7, (s64)(s32)0xf0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(7, RD(7) | 0xffff);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024C7A8(c); return; }
}

void F_0024C748(Ctx *c) { /* func_0024C748 */
ENTER(0x24c748);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x24c774); SET64(19, RD(7) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x24c788); SET64(7, RD(19) + RD(0)); F_0024C7A8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_002479A8(c); return; }
}

void F_0024C7A8(Ctx *c) { /* adxt_StartFnameRangeLp */
ENTER(0x24c7a8);
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
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_0024C7E0; }
if (RD(18) != RD(0)) { SET64(16, (s32)rd32(c, (RW(17) + 148))); goto L_0024C808; }
L_0024C7E0:;
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -21224);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_00248E98(c); return; }
L_0024C808:;
SET64(31, 0x24c810); SET64(4, RD(16) + RD(0)); F_00261E08(c);
SET64(4, RD(17) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(31, 0x24c824); SET64(5, RD(18) + RD(0)); F_0024C410(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24c830); SET32(5, RW(0) + 1); F_002622F8(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_0024C5C8(c); return; }
}

void F_0024C858(Ctx *c) { /* func_0024C858 */
ENTER(0x24c858);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x24c87c); SET64(18, RD(6) + RD(0)); F_002479A0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24c88c); SET64(6, RD(18) + RD(0)); F_0024C8A8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002479A8(c); return; }
}

void F_0024C8A8(Ctx *c) { /* adxt_StartAfsLp */
ENTER(0x24c8a8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_0024C8E8; }
if (RSD(18) > 0) { SET64(4, (s64)(s32)0x4b0000); goto L_0024C8EC; }
SET64(2, (s64)(s32)0x10000);
SET64(2, RD(2) < RD(19));
if (RD(2) == RD(0)) { SET64(16, (s32)rd32(c, (RW(17) + 148))); goto L_0024C910; }
L_0024C8E8:;
SET64(4, (s64)(s32)0x4b0000);
L_0024C8EC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -21168);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00248E98(c); return; }
L_0024C910:;
SET64(31, 0x24c918); SET64(4, RD(16) + RD(0)); F_00261E08(c);
SET64(4, RD(17) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(31, 0x24c928); SET64(5, RD(18) + RD(0)); F_0024C4D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24c934); SET32(5, RW(0) + 1); F_002622F8(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0024C5C8(c); return; }
}

void F_0024C958(Ctx *c) { /* func_0024C958 */
ENTER(0x24c958);
 return;
}

void F_0024C960(Ctx *c) { /* func_0024C960 */
ENTER(0x24c960);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24c974); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x24c97c); SET64(4, RD(16) + RD(0)); F_0024C998(c);
SET64(31, 0x24c984); SET64(16, RD(2) + RD(0)); F_002479A8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024C998(Ctx *c) { /* adxt_GetNumFiles */
ENTER(0x24c998);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024C9C0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x24c9b0); SET32(4, RW(4) + -21120); F_00248E98(c);
SET32(2, RW(0) + -1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_0024C9C0:;
SET64(4, (s32)rd32(c, (RW(4) + 148)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00261F60(c); return; }
}

void F_0024C9D0(Ctx *c) { /* func_0024C9D0 */
ENTER(0x24c9d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24c9e4); SET64(16, RD(4) + RD(0)); F_002479A0(c);
SET64(31, 0x24c9ec); SET64(4, RD(16) + RD(0)); F_0024CA00(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002479A8(c); return; }
}

void F_0024CA00(Ctx *c) { /* adxt_ResetEntry */
ENTER(0x24ca00);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0024CA20; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -21072);
SET32(29, RW(29) + 16); { F_00248E98(c); return; }
L_0024CA20:;
SET64(2, (s8)rd8(c, (RW(4) + 1)));
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0024CA38; }
SET64(4, (s32)rd32(c, (RW(4) + 148)));
SET32(29, RW(29) + 16); { F_00261D60(c); return; }
L_0024CA38:;
SET32(29, RW(29) + 16); return;
}

void F_0024CA40(Ctx *c) { /* func_0024CA40 */
ENTER(0x24ca40);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(2) + -4928);
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0024CAA4; }
SET64(31, 0x24ca6c); SET64(16, (s64)(s32)0x3f0000); F_0010F550(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + -4976)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x24ca84); SET32(16, RW(16) + -4840); F_0010F4F0(c);
SET64(3, (s64)(s32)0x3f0000);
wr32(c, (RW(3) + 26032), RW(2));
SET64(5, (s64)(s32)0x3f0000);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24ca9c); wr32(c, (RW(5) + 26036), RW(17)); F_0024D238(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
L_0024CAA4:;
SET32(2, RW(2) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(18) + 0), RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0024CAC8(Ctx *c) { /* func_0024CAC8 */
ENTER(0x24cac8);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(3) + -4928);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) + -1);
wr64(c, (RW(29) + 16), RD(31));
{ int t = RD(2) != RD(0); wr32(c, (RW(17) + 0), RW(2)); if (t) goto L_0024CB18; }
SET64(16, (s64)(s32)0x3f0000);
SET32(16, RW(16) + -4840);
SET64(31, 0x24cb00); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024D2A0(c);
SET64(31, 0x24cb08); SET64(3, (s32)rd32(c, (RW(16) + 0))); F_0010F550(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(3) + 26032)));
SET64(31, 0x24cb18); SET64(4, RD(2) + RD(0)); F_0010F4F0(c);
L_0024CB18:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
if (RSD(2) < 0) { wr32(c, (RW(17) + 0), RW(0)); goto L_0024CB24; }
L_0024CB24:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0024CB38(Ctx *c) { /* func_0024CB38 */
ENTER(0x24cb38);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_0024CBF8; }
SET64(2, (s64)(s32)0x3f0000);
SET64(16, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + -4976)));
SET32(2, RW(0) + 1);
SET32(16, RW(16) + -4924);
SET64(18, (s64)(s32)0xbeb0000);
wr32(c, (RW(16) + 0), RW(2));
SET64(19, RD(16) + RD(0));
SET64(18, RD(18) | 0xc1ff);
SET64(31, 0x24cb90); SET64(20, (s64)(s32)0x4b0000); F_0010F4F0(c);
SET64(16, RD(0) + RD(0));
L_0024CB98:;
SET64(31, 0x24cba0); SET64(4, RD(17) + RD(0)); F_0024D1D0(c);
SET64(31, 0x24cba8); SET64(4, RD(17) + RD(0)); F_0024D238(c);
SET64(3, RSD(18) < RSD(16));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 1); if (t) goto L_0024CBC8; }
{ int t = RD(3) == RD(0);  if (t) { POLL(); goto L_0024CB98; } }
SET64(31, 0x24cbc8); SET32(4, RW(20) + -20976); F_002692F0(c);
L_0024CBC8:;
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(21) + RD(0));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); { F_0010F4F0(c); return; }
L_0024CBF8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0024CC20(Ctx *c) { /* func_0024CC20 */
ENTER(0x24cc20);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s64)(s32)0x3f0000);
SET32(2, RW(2) + -4820);
SET64(5, (s32)rd32(c, (RW(3) + -4952)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024CB38(c); return; }
}

void F_0024CC48(Ctx *c) { /* func_0024CC48 */
ENTER(0x24cc48);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s64)(s32)0x3f0000);
SET32(2, RW(2) + -4816);
SET64(5, (s32)rd32(c, (RW(3) + -4948)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024CB38(c); return; }
}

void F_0024CC70(Ctx *c) { /* func_0024CC70 */
ENTER(0x24cc70);
SET64(3, (s64)(s32)0x3f0000);
SET32(3, RW(3) + -4896);
SET64(2, rd64(c, (RW(3) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(3) + 0), RD(2)); return;
}

void F_0024CC88(Ctx *c) { /* func_0024CC88 */
ENTER(0x24cc88);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) + -4808);
wr64(c, (RW(29) + 8), RD(31));
SET64(3, rd64(c, (RW(2) + 0)));
if (RD(3) != RD(0)) { SET64(2, (s64)(s32)0x3f0000); goto L_0024CCC4; }
SET64(16, RD(2) + RD(0));
L_0024CCB0:;
SET64(31, 0x24ccb8);  F_0024CC70(c);
SET64(2, rd64(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_0024CCB0; } }
L_0024CCC4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(3, RW(0) + 1);
SET32(2, RW(2) + -4800);
wr64(c, (RW(2) + 0), RD(3));
SET32(29, RW(29) + 16); { F_0010F4A0(c); return; }
}

void F_0024CCE0(Ctx *c) { /* func_0024CCE0 */
ENTER(0x24cce0);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(4, RW(2) + -4792);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(3, rd64(c, (RW(4) + 0)));
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024CD50; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET32(17, RW(2) + -4888);
SET32(16, RW(3) + -4916);
SET64(19, RD(4) + RD(0));
SET32(18, RW(0) + 1);
L_0024CD28:;
SET64(2, rd64(c, (RW(17) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(17) + 0), RD(2));
SET64(31, 0x24cd3c); wr32(c, (RW(16) + 0), RW(18)); F_00269AC0(c);
SET64(31, 0x24cd44); wr32(c, (RW(16) + 0), RW(0)); F_0024D220(c);
SET64(2, rd64(c, (RW(19) + 0)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_0024CD28; } }
L_0024CD50:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(3, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(2, RW(2) + -4784);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
wr64(c, (RW(2) + 0), RD(3));
SET32(29, RW(29) + 48); { F_0010F4A0(c); return; }
}

void F_0024CD78(Ctx *c) { /* func_0024CD78 */
ENTER(0x24cd78);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(7, RW(2) + -4776);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(31));
SET64(3, rd64(c, (RW(7) + 0)));
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024CE48; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET64(5, (s64)(s32)0x3f0000);
SET64(6, (s64)(s32)0x3f0000);
SET32(19, RW(2) + -4880);
SET32(22, RW(3) + -4820);
SET32(18, RW(4) + -4696);
SET32(21, RW(5) + -4816);
SET32(17, RW(6) + -4920);
SET64(20, RD(7) + RD(0));
L_0024CDE0:;
SET64(2, rd64(c, (RW(19) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(19) + 0), RD(2));
SET64(31, 0x24cdf4); SET64(4, (s32)rd32(c, (RW(22) + 0))); F_0024D2A0(c);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
{ int t = RD(3) != RD(0);  if (t) goto L_0024CE08; }
SET64(31, 0x24ce08);  F_0024E768(c);
L_0024CE08:;
wr32(c, (RW(18) + 0), RW(0));
SET64(31, 0x24ce14); SET32(16, RW(0) + 1); F_0024D6D8(c);
{ int t = RD(2) != RD(16);  if (t) goto L_0024CE24; }
SET64(31, 0x24ce24); SET64(4, (s32)rd32(c, (RW(21) + 0))); F_0024D2A0(c);
L_0024CE24:;
SET64(31, 0x24ce2c);  F_0024E1B8(c);
SET64(31, 0x24ce34); wr32(c, (RW(17) + 0), RW(16)); F_00269AD8(c);
SET64(31, 0x24ce3c); wr32(c, (RW(17) + 0), RW(0)); F_0024D220(c);
SET64(2, rd64(c, (RW(20) + 0)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_0024CDE0; } }
L_0024CE48:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(3, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(2, RW(2) + -4768);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
wr64(c, (RW(2) + 0), RD(3));
SET32(29, RW(29) + 64); { F_0010F4A0(c); return; }
}

void F_0024CE80(Ctx *c) { /* func_0024CE80 */
ENTER(0x24ce80);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 40), RD(21));
SET64(21, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(21) + -4760);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(31));
SET64(3, rd64(c, (RW(2) + 0)));
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024CF3C; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET64(18, (s64)(s32)0x12000000);
SET32(20, RW(2) + -4872);
SET32(19, RW(3) + -4912);
SET32(17, RW(4) + -4700);
SET32(22, RW(0) + 1);
SET64(18, RD(18) | 0xe0);
L_0024CEE0:;
SET64(2, rd64(c, (RW(20) + 0)));
SET64(3, rd16(c, (RW(17) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(20) + 0), RD(2));
{ int t = RD(3) == RD(0); wr32(c, (RW(19) + 0), RW(22)); if (t) goto L_0024CF00; }
SET64(2, rd16(c, (RW(17) + 0)));
wr64(c, (RW(18) + 0), RD(2));
L_0024CF00:;
SET64(31, 0x24cf08);  F_00269B08(c);
SET64(3, rd16(c, (RW(17) + 0)));
if (RD(3) != RD(0)) { wr64(c, (RW(18) + 0), RD(0)); goto L_0024CF14; }
L_0024CF14:;
wr32(c, (RW(19) + 0), RW(0));
SET32(16, RW(21) + -4760);
SET64(2, rd64(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x3f0000); goto L_0024CF3C; }
SET64(31, 0x24cf30);  F_0024D220(c);
SET64(2, rd64(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_0024CEE0; } }
L_0024CF3C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(3, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(2, RW(2) + -4752);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
wr64(c, (RW(2) + 0), RD(3));
SET32(29, RW(29) + 64); { F_0010F4A0(c); return; }
}

static void B_0024CF70(Ctx *c, u32 entry) { /* func_0024CF70 */
ENTER(entry);
switch (entry) { case 0x24d078: goto L_0024D078; }
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(6, RW(2) + -4744);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(23));
wr64(c, (RW(29) + 64), RD(31));
SET64(3, rd64(c, (RW(6) + 0)));
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024D070; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET64(5, (s64)(s32)0x3f0000);
SET32(20, RW(2) + -4864);
SET32(19, RW(3) + -4908);
SET32(18, RW(4) + -4924);
SET32(23, RW(5) + -4696);
SET64(22, RD(6) + RD(0));
SET32(17, RW(0) + 1);
SET64(21, (s64)(s32)0x3f0000);
L_0024CFD8:;
SET64(2, rd64(c, (RW(20) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(20) + 0), RD(2));
SET64(31, 0x24cfec); wr32(c, (RW(19) + 0), RW(17)); F_00269B38(c);
wr32(c, (RW(19) + 0), RW(0));
SET64(16, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
{ int t = RD(2) != RD(17);  if (t) goto L_0024D008; }
SET64(31, 0x24d008); wr32(c, (RW(18) + 0), RW(0)); F_0024D220(c);
L_0024D008:;
{ int t = RD(16) != RD(0);  if (t) goto L_0024D064; }
SET64(31, 0x24d018);  F_0024D6D8(c);
{ int t = RD(2) != RD(17); SET32(16, RW(21) + -4816); if (t) goto L_0024D040; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24d02c);  F_0024D238(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(3);  if (t) goto L_0024D040; }
SET64(31, 0x24d040); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024D1D0(c);
L_0024D040:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET32(16, RW(0) + 1);
{ int t = RD(2) == RD(16);  if (t) goto L_0024D05C; }
SET64(31, 0x24d058);  F_0024E768(c);
wr32(c, (RW(23) + 0), RW(16));
L_0024D05C:;
SET64(31, 0x24d064);  F_0024D220(c);
L_0024D064:;
SET64(2, rd64(c, (RW(22) + 0)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_0024CFD8; } }
L_0024D070:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
L_0024D078:;
SET32(3, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(2, RW(2) + -4736);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(23, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
wr64(c, (RW(2) + 0), RD(3));
SET32(29, RW(29) + 80); { F_0010F4A0(c); return; }
}
void F_0024CF70(Ctx *c) { B_0024CF70(c, 0x24cf70); }
void F_0024D078(Ctx *c) { B_0024CF70(c, 0x24d078); }

void F_0024D0A8(Ctx *c) { /* func_0024D0A8 */
ENTER(0x24d0a8);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(5, RW(2) + -4728);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(31));
SET64(3, rd64(c, (RW(5) + 0)));
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024D14C; }
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET32(20, RW(2) + -4856);
SET32(19, RW(3) + -4904);
SET32(18, RW(4) + -4924);
SET64(21, RD(5) + RD(0));
SET32(17, RW(0) + 1);
L_0024D100:;
SET64(2, rd64(c, (RW(20) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(20) + 0), RD(2));
SET64(31, 0x24d114); wr32(c, (RW(19) + 0), RW(17)); F_00269B50(c);
wr32(c, (RW(19) + 0), RW(0));
SET64(16, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
{ int t = RD(2) != RD(17);  if (t) goto L_0024D130; }
SET64(31, 0x24d130); wr32(c, (RW(18) + 0), RW(0)); F_0024D220(c);
L_0024D130:;
{ int t = RD(16) != RD(0);  if (t) goto L_0024D140; }
SET64(31, 0x24d140);  F_0024D220(c);
L_0024D140:;
SET64(2, rd64(c, (RW(21) + 0)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_0024D100; } }
L_0024D14C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(3, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(2, RW(2) + -4720);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
wr64(c, (RW(2) + 0), RD(3));
SET32(29, RW(29) + 64); { F_0010F4A0(c); return; }
}

void F_0024D180(Ctx *c) { /* func_0024D180 */
ENTER(0x24d180);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_0024D1C0; }
SET64(31, 0x24d19c); SET64(5, RD(29) + RD(0)); F_0010F570(c);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET32(5, RW(0) + 12); if (t) goto L_0024D1B8; }
{ int t = RD(3) != RD(5); SET64(16, rd64(c, (RW(29) + 48))); if (t) goto L_0024D1C4; }
L_0024D1B8:;
SET64(31, 0x24d1c0);  F_00110510(c);
L_0024D1C0:;
SET64(16, rd64(c, (RW(29) + 48)));
L_0024D1C4:;
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0024D1D0(Ctx *c) { /* func_0024D1D0 */
ENTER(0x24d1d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_0024D210; }
SET64(31, 0x24d1ec); SET64(5, RD(29) + RD(0)); F_0010F560(c);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET32(5, RW(0) + 12); if (t) goto L_0024D208; }
{ int t = RD(3) != RD(5); SET64(16, rd64(c, (RW(29) + 48))); if (t) goto L_0024D214; }
L_0024D208:;
SET64(31, 0x24d210);  F_0010F590(c);
L_0024D210:;
SET64(16, rd64(c, (RW(29) + 48)));
L_0024D214:;
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0024D220(Ctx *c) { /* func_0024D220 */
ENTER(0x24d220);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0010F580(c); return; }
}

void F_0024D238(Ctx *c) { /* func_0024D238 */
ENTER(0x24d238);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(0) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 64), RD(31)); if (t) goto L_0024D284; }
SET64(31, 0x24d25c); SET64(5, RD(29) + RD(0)); F_0010F560(c);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 8);
{ int t = RD(3) == RD(2); SET32(5, RW(0) + 12); if (t) goto L_0024D278; }
{ int t = RD(3) != RD(5); SET64(2, RD(17) + RD(0)); if (t) goto L_0024D288; }
L_0024D278:;
SET64(31, 0x24d280);  F_0010F5F0(c);
SET64(17, RD(2) + RD(0));
L_0024D284:;
SET64(2, RD(17) + RD(0));
L_0024D288:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_0024D2A0(Ctx *c) { /* func_0024D2A0 */
ENTER(0x24d2a0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(0) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 64), RD(31)); if (t) goto L_0024D2E8; }
SET64(31, 0x24d2c4); SET64(5, RD(29) + RD(0)); F_0010F560(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 8);
{ int t = RD(3) == RD(2); SET32(4, RW(0) + 12); if (t) goto L_0024D2E8; }
if (RD(3) == RD(4)) { SET64(2, RD(17) + RD(0)); goto L_0024D2EC; }
SET64(31, 0x24d2e4); SET64(4, RD(16) + RD(0)); F_0010F5D0(c);
SET64(17, RD(2) + RD(0));
L_0024D2E8:;
SET64(2, RD(17) + RD(0));
L_0024D2EC:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_0024D300(Ctx *c) { /* func_0024D300 */
ENTER(0x24d300);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -64);
SET64(7, (s32)rd32(c, (RW(2) + 26040)));
SET64(2, (s64)(s32)0x500000);
SET64(5, (s64)(s32)0x250000);
SET64(3, (s64)(s32)0x3f0000);
SET32(5, RW(5) + -13176);
SET32(3, RW(3) + -4688);
SET64(4, RD(29) + RD(0));
SET32(6, RW(0) + 2048);
SET32(2, RW(2) + 30576);
wr64(c, (RW(29) + 48), RD(16));
wr32(c, (RW(29) + 4), RW(5));
wr32(c, (RW(29) + 8), RW(3));
wr64(c, (RW(29) + 56), RD(31));
wr32(c, (RW(29) + 12), RW(6));
wr32(c, (RW(29) + 20), RW(7));
SET64(31, 0x24d34c); wr32(c, (RW(29) + 16), RW(2)); F_0010F460(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(5, RD(0) + RD(0));
SET32(16, RW(3) + -4840);
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24d368); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F480(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024D388; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24d380);  F_0024D2A0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f0000);
L_0024D388:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24d394); SET64(5, (s32)rd32(c, (RW(2) + -4972))); F_0010F4F0(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0024D3A8(Ctx *c) { /* func_0024D3A8 */
ENTER(0x24d3a8);
SET64(2, (s64)(s32)0x250000);
SET32(29, RW(29) + -64);
SET64(7, RD(5) + RD(0));
SET64(3, RD(4) + RD(0));
SET32(2, RW(2) + -13088);
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 56), RD(31));
SET64(6, RD(7) + RD(0));
SET64(5, RD(3) + RD(0));
{ int t = RD(3) != RD(0); wr32(c, (RW(29) + 4), RW(2)); if (t) goto L_0024D3F0; }
SET64(2, (s64)(s32)0x3f0000);
SET32(3, RW(0) + 4096);
SET32(2, RW(2) + -2640);
wr32(c, (RW(29) + 12), RW(3));
wr32(c, (RW(29) + 8), RW(2)); goto L_0024D404;
L_0024D3F0:;
SET64(4, (s64)(s32)0x4b0000);
wr32(c, (RW(29) + 8), RW(3));
SET32(4, RW(4) + -20928);
SET64(31, 0x24d404); wr32(c, (RW(29) + 12), RW(7)); F_0024E8D0(c);
L_0024D404:;
SET64(5, (s64)(s32)0x3f0000);
SET64(2, (s64)(s32)0x500000);
SET64(3, (s32)rd32(c, (RW(5) + 26040)));
SET64(4, RD(29) + RD(0));
SET32(2, RW(2) + 30576);
SET64(16, (s64)(s32)0x3f0000);
SET32(16, RW(16) + -4836);
wr32(c, (RW(29) + 16), RW(2));
SET64(31, 0x24d42c); wr32(c, (RW(29) + 20), RW(3)); F_0010F460(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24d440); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F480(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f0000);
SET64(31, 0x24d450); SET64(5, (s32)rd32(c, (RW(2) + -4968))); F_0010F4F0(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0024D460(Ctx *c) { /* func_0024D460 */
ENTER(0x24d460);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -64);
SET64(7, (s32)rd32(c, (RW(2) + 26040)));
SET64(2, (s64)(s32)0x500000);
SET64(5, (s64)(s32)0x250000);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, (s64)(s32)0x3f0000);
SET32(3, RW(3) + 1456);
SET64(4, RD(29) + RD(0));
SET32(6, RW(0) + 4096);
SET32(5, RW(5) + -12936);
SET32(2, RW(2) + 30576);
wr64(c, (RW(29) + 56), RD(31));
wr32(c, (RW(29) + 4), RW(5));
SET32(16, RW(16) + -4832);
wr32(c, (RW(29) + 8), RW(3));
wr32(c, (RW(29) + 12), RW(6));
wr32(c, (RW(29) + 20), RW(7));
SET64(31, 0x24d4b4); wr32(c, (RW(29) + 16), RW(2)); F_0010F460(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24d4c8); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F480(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f0000);
SET64(31, 0x24d4d8); SET64(5, (s32)rd32(c, (RW(2) + -4964))); F_0010F4F0(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0024D4E8(Ctx *c) { /* func_0024D4E8 */
ENTER(0x24d4e8);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -64);
SET64(7, (s32)rd32(c, (RW(2) + 26040)));
SET64(2, (s64)(s32)0x500000);
SET64(5, (s64)(s32)0x250000);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, (s64)(s32)0x3f0000);
SET32(3, RW(3) + 5552);
SET64(4, RD(29) + RD(0));
SET32(6, RW(0) + 4096);
SET32(5, RW(5) + -12672);
SET32(2, RW(2) + 30576);
wr64(c, (RW(29) + 56), RD(31));
wr32(c, (RW(29) + 4), RW(5));
SET32(16, RW(16) + -4828);
wr32(c, (RW(29) + 8), RW(3));
wr32(c, (RW(29) + 12), RW(6));
wr32(c, (RW(29) + 20), RW(7));
SET64(31, 0x24d53c); wr32(c, (RW(29) + 16), RW(2)); F_0010F460(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24d550); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F480(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f0000);
SET64(31, 0x24d560); SET64(5, (s32)rd32(c, (RW(2) + -4960))); F_0010F4F0(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0024D570(Ctx *c) { /* func_0024D570 */
ENTER(0x24d570);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -64);
SET64(7, (s32)rd32(c, (RW(2) + 26040)));
SET64(2, (s64)(s32)0x500000);
SET64(5, (s64)(s32)0x250000);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, (s64)(s32)0x3f0000);
SET32(3, RW(3) + 9648);
SET64(4, RD(29) + RD(0));
SET32(6, RW(0) + 8192);
SET32(5, RW(5) + -12432);
SET32(2, RW(2) + 30576);
SET32(16, RW(16) + -4820);
wr64(c, (RW(29) + 56), RD(31));
wr32(c, (RW(29) + 4), RW(5));
wr32(c, (RW(29) + 8), RW(3));
wr32(c, (RW(29) + 12), RW(6));
wr32(c, (RW(29) + 20), RW(7));
SET64(31, 0x24d5c4); wr32(c, (RW(29) + 16), RW(2)); F_0010F460(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24d5d8); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F480(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f0000);
SET64(31, 0x24d5e8); SET64(5, (s32)rd32(c, (RW(2) + -4952))); F_0010F4F0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24d5f4);  F_0024D2A0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(31, rd64(c, (RW(29) + 56)));
SET64(16, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0024D608(Ctx *c) { /* func_0024D608 */
ENTER(0x24d608);
SET64(2, (s64)(s32)0x250000);
SET32(29, RW(29) + -64);
SET64(7, RD(5) + RD(0));
SET64(3, RD(4) + RD(0));
SET32(2, RW(2) + -12120);
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 56), RD(31));
SET64(6, RD(7) + RD(0));
SET64(5, RD(3) + RD(0));
{ int t = RD(3) != RD(0); wr32(c, (RW(29) + 4), RW(2)); if (t) goto L_0024D650; }
SET64(2, (s64)(s32)0x3f0000);
SET32(3, RW(0) + 8192);
SET32(2, RW(2) + 17840);
wr32(c, (RW(29) + 12), RW(3));
wr32(c, (RW(29) + 8), RW(2)); goto L_0024D664;
L_0024D650:;
SET64(4, (s64)(s32)0x4b0000);
wr32(c, (RW(29) + 8), RW(3));
SET32(4, RW(4) + -20864);
SET64(31, 0x24d664); wr32(c, (RW(29) + 12), RW(7)); F_0024E8D0(c);
L_0024D664:;
SET64(5, (s64)(s32)0x3f0000);
SET64(2, (s64)(s32)0x500000);
SET64(3, (s32)rd32(c, (RW(5) + 26040)));
SET64(4, RD(29) + RD(0));
SET32(2, RW(2) + 30576);
SET64(16, (s64)(s32)0x3f0000);
wr32(c, (RW(29) + 20), RW(3));
SET32(16, RW(16) + -4816);
SET64(31, 0x24d68c); wr32(c, (RW(29) + 16), RW(2)); F_0010F460(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24d6a0); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F480(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s64)(s32)0x3f0000);
SET64(31, 0x24d6b0); SET64(5, (s32)rd32(c, (RW(2) + -4948))); F_0010F4F0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24d6bc);  F_0024D2A0(c);
SET64(3, (s64)(s32)0x3f0000);
SET32(3, RW(3) + -4820);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_0024D6D8(Ctx *c) { /* func_0024D6D8 */
ENTER(0x24d6d8);
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + -4984))); return;
}

void F_0024D6E8(Ctx *c) { /* func_0024D6E8 */
ENTER(0x24d6e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269AC0(c); return; }
}

void F_0024D700(Ctx *c) { /* func_0024D700 */
ENTER(0x24d700);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269AD8(c); return; }
}

void F_0024D718(Ctx *c) { /* func_0024D718 */
ENTER(0x24d718);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269B08(c); return; }
}

void F_0024D730(Ctx *c) { /* func_0024D730 */
ENTER(0x24d730);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269B20(c); return; }
}

void F_0024D748(Ctx *c) { /* func_0024D748 */
ENTER(0x24d748);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269B38(c); return; }
}

void F_0024D760(Ctx *c) { /* func_0024D760 */
ENTER(0x24d760);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269B50(c); return; }
}

void F_0024D778(Ctx *c) { /* func_0024D778 */
ENTER(0x24d778);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24d788);  F_00269AC0(c);
SET64(31, 0x24d790);  F_00269AD8(c);
SET64(31, 0x24d798);  F_00269B20(c);
SET64(31, 0x24d7a0);  F_00269B38(c);
SET64(31, 0x24d7a8);  F_00269B50(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0024D7B8(Ctx *c) { /* File_IsBusy */
ENTER(0x24d7b8);
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + -4988)));
SET64(2, RD(0) < RD(2)); return;
}

void F_0024D7C8(Ctx *c) { /* func_0024D7C8 */
ENTER(0x24d7c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002698E0(c); return; }
}

void F_0024D7E0(Ctx *c) { /* func_0024D7E0 */
ENTER(0x24d7e0);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 64), RD(18));
SET64(18, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 72), RD(31));
SET32(2, RW(2) + -4992);
SET64(5, (s32)rd32(c, (RW(18) + -4988)));
SET32(3, RW(3) + -4900);
SET64(6, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(3) + 0), RW(0));
if (RD(5) != RD(0)) { SET32(3, RW(18) + -4988); goto L_0024D94C; }
SET64(31, 0x24d828);  F_00269C38(c);
SET64(4, (s64)(s32)0x250000);
SET64(5, RD(0) + RD(0));
SET64(31, 0x24d838); SET32(4, RW(4) + -13760); F_00269920(c);
SET64(4, (s64)(s32)0x250000);
SET32(4, RW(4) + -13624);
SET64(31, 0x24d848); SET64(5, RD(0) + RD(0)); F_00269938(c);
SET64(2, (s64)(s32)0x520000);
SET64(3, (s64)(s32)0x520000);
SET32(2, RW(2) + 20488);
SET32(3, RW(3) + 20496);
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(3) + 4), RW(0));
{ int t = RD(16) != RD(0); wr32(c, (RW(3) + 0), RW(0)); if (t) goto L_0024D8A8; }
SET64(17, (s64)(s32)0x3f0000);
SET32(2, RW(0) + 25);
SET32(4, RW(17) + -4976);
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
wr32(c, (RW(4) + 16), RW(3)); goto L_0024D8E0;
L_0024D8A8:;
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(17, (s64)(s32)0x3f0000);
SET32(4, RW(17) + -4976);
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
L_0024D8E0:;
SET64(31, 0x24d8e8); SET64(16, (s64)(s32)0x3f0000); F_0010F550(c);
SET32(16, RW(16) + -4824);
SET64(5, RD(29) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(31, 0x24d8fc); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F560(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(29) + 24)));
SET64(31, 0x24d90c); wr32(c, (RW(3) + 26040), RW(2)); F_0024D300(c);
SET64(31, 0x24d914);  F_0024D460(c);
SET64(31, 0x24d91c);  F_0024D4E8(c);
SET64(31, 0x24d924);  F_0024D570(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(17) + -4976);
SET64(31, 0x24d934); SET64(5, (s32)rd32(c, (RW(2) + 20))); F_0010F4F0(c);
SET64(5, (s64)(s32)0x250000);
SET32(5, RW(5) + -13280);
SET32(4, RW(0) + 6);
SET64(31, 0x24d948); SET64(6, RD(0) + RD(0)); F_00269848(c);
SET32(3, RW(18) + -4988);
L_0024D94C:;
SET64(18, rd64(c, (RW(29) + 64)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET32(2, RW(2) + 1);
SET64(31, rd64(c, (RW(29) + 72)));
wr32(c, (RW(3) + 0), RW(2));
SET32(29, RW(29) + 80); return;
}

void F_0024D970(Ctx *c) { /* func_0024D970 */
ENTER(0x24d970);
SET64(3, (s64)(s32)0x3f0000);
SET64(4, (s64)(s32)0x3f0000);
SET64(5, (s64)(s32)0x3f0000);
SET64(6, (s64)(s32)0x3f0000);
SET64(7, (s64)(s32)0x3f0000);
SET64(8, (s64)(s32)0x3f0000);
SET32(2, RW(0) + 1);
SET32(3, RW(3) + -4808);
SET32(4, RW(4) + -4792);
SET32(5, RW(5) + -4776);
SET32(6, RW(6) + -4760);
SET32(7, RW(7) + -4744);
SET32(8, RW(8) + -4728);
wr64(c, (RW(3) + 0), RD(2));
wr64(c, (RW(4) + 0), RD(2));
wr64(c, (RW(5) + 0), RD(2));
wr64(c, (RW(6) + 0), RD(2));
wr64(c, (RW(7) + 0), RD(2));
wr64(c, (RW(8) + 0), RD(2)); return;
}

void F_0024D9C0(Ctx *c) { /* func_0024D9C0 */
ENTER(0x24d9c0);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + -4988);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_0024DA48; }
SET64(31, 0x24d9e8);  F_0024D970(c);
SET64(31, 0x24d9f0);  F_0024DB28(c);
SET64(31, 0x24d9f8);  F_0024DCC8(c);
SET64(31, 0x24da00);  F_0024DBF8(c);
SET64(31, 0x24da08);  F_0024DEC8(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET32(2, RW(2) + -4824);
SET64(5, (s32)rd32(c, (RW(3) + 26040)));
SET64(31, 0x24da20); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_0010F4F0(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x24da2c); SET64(5, RD(0) + RD(0)); F_00269920(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x24da38); SET64(5, RD(0) + RD(0)); F_00269938(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269C78(c); return; }
L_0024DA48:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024DA58(Ctx *c) { /* func_0024DA58 */
ENTER(0x24da58);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(22) + -4720);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, rd64(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(21, (s64)(s32)0x3f0000); if (t) goto L_0024DAE0; }
SET64(20, (s64)(s32)0x3f0000);
SET64(19, RD(3) + RD(0));
SET32(18, RW(21) + -4728);
SET32(17, RW(0) + 1);
SET32(16, RW(20) + -4816);
L_0024DAA8:;
wr64(c, (RW(18) + 0), RD(17));
SET32(5, RW(0) + 1);
SET64(31, 0x24dab8); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F4F0(c);
SET64(31, 0x24dac0); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F590(c);
SET64(31, 0x24dac8); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024D238(c);
SET64(3, rd64(c, (RW(19) + 0)));
{ int t = RD(3) == RD(0); SET32(2, RW(22) + -4720); if (t) { POLL(); goto L_0024DAA8; } }
SET64(22, rd64(c, (RW(29) + 48))); goto L_0024DAEC;
L_0024DAE0:;
SET64(20, (s64)(s32)0x3f0000);
SET32(2, RW(22) + -4720);
SET64(22, rd64(c, (RW(29) + 48)));
L_0024DAEC:;
SET32(3, RW(21) + -4728);
SET64(21, rd64(c, (RW(29) + 40)));
SET32(4, RW(20) + -4816);
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

void F_0024DB28(Ctx *c) { /* func_0024DB28 */
ENTER(0x24db28);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(22) + -4736);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, rd64(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(21, (s64)(s32)0x3f0000); if (t) goto L_0024DBB0; }
SET64(20, (s64)(s32)0x3f0000);
SET64(19, RD(3) + RD(0));
SET32(18, RW(21) + -4744);
SET32(17, RW(0) + 1);
SET32(16, RW(20) + -4820);
L_0024DB78:;
wr64(c, (RW(18) + 0), RD(17));
SET32(5, RW(0) + 1);
SET64(31, 0x24db88); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F4F0(c);
SET64(31, 0x24db90); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F590(c);
SET64(31, 0x24db98); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024D238(c);
SET64(3, rd64(c, (RW(19) + 0)));
{ int t = RD(3) == RD(0); SET32(2, RW(22) + -4736); if (t) { POLL(); goto L_0024DB78; } }
SET64(22, rd64(c, (RW(29) + 48))); goto L_0024DBBC;
L_0024DBB0:;
SET64(20, (s64)(s32)0x3f0000);
SET32(2, RW(22) + -4736);
SET64(22, rd64(c, (RW(29) + 48)));
L_0024DBBC:;
SET32(3, RW(21) + -4744);
SET64(21, rd64(c, (RW(29) + 40)));
SET32(4, RW(20) + -4820);
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

void F_0024DBF8(Ctx *c) { /* func_0024DBF8 */
ENTER(0x24dbf8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(22) + -4768);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, rd64(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(21, (s64)(s32)0x3f0000); if (t) goto L_0024DC80; }
SET64(20, (s64)(s32)0x3f0000);
SET64(19, RD(3) + RD(0));
SET32(18, RW(21) + -4776);
SET32(17, RW(0) + 1);
SET32(16, RW(20) + -4832);
L_0024DC48:;
wr64(c, (RW(18) + 0), RD(17));
SET32(5, RW(0) + 1);
SET64(31, 0x24dc58); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F4F0(c);
SET64(31, 0x24dc60); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F590(c);
SET64(31, 0x24dc68); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024D238(c);
SET64(3, rd64(c, (RW(19) + 0)));
{ int t = RD(3) == RD(0); SET32(2, RW(22) + -4768); if (t) { POLL(); goto L_0024DC48; } }
SET64(22, rd64(c, (RW(29) + 48))); goto L_0024DC8C;
L_0024DC80:;
SET64(20, (s64)(s32)0x3f0000);
SET32(2, RW(22) + -4768);
SET64(22, rd64(c, (RW(29) + 48)));
L_0024DC8C:;
SET32(3, RW(21) + -4776);
SET64(21, rd64(c, (RW(29) + 40)));
SET32(4, RW(20) + -4832);
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

void F_0024DCC8(Ctx *c) { /* func_0024DCC8 */
ENTER(0x24dcc8);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) + -4912);
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
{ int t = RD(3) != RD(4); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024DD38; }
SET64(21, (s64)(s32)0x3f0000);
SET32(2, RW(21) + -4752);
L_0024DD10:;
SET64(3, rd64(c, (RW(2) + 0)));
{ int t = RD(3) == RD(0); SET64(23, (s64)(s32)0x3f0000); if (t) { POLL(); goto L_0024DD10; } }
SET64(22, (s64)(s32)0x3f0000); goto L_0024DDB4;
L_0024DD38:;
SET64(21, (s64)(s32)0x3f0000);
SET32(3, RW(2) + -4692);
SET32(4, RW(21) + -4752);
wr32(c, (RW(3) + 0), RW(0));
SET64(2, rd64(c, (RW(4) + 0)));
{ int t = RD(2) != RD(0); SET64(23, (s64)(s32)0x3f0000); if (t) goto L_0024DDB0; }
SET64(22, (s64)(s32)0x3f0000);
SET64(17, RD(3) + RD(0));
SET64(20, RD(4) + RD(0));
SET32(19, RW(23) + -4760);
SET32(18, RW(0) + 1);
SET32(16, RW(22) + -4828);
L_0024DD70:;
wr64(c, (RW(19) + 0), RD(18));
SET32(5, RW(0) + 1);
SET64(31, 0x24dd80); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F4F0(c);
SET64(31, 0x24dd88); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F590(c);
SET64(31, 0x24dd90); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024D238(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(2, rd64(c, (RW(20) + 0)));
{ int t = RD(2) == RD(0); SET32(2, RW(21) + -4752); if (t) { POLL(); goto L_0024DD70; } }
SET64(21, rd64(c, (RW(29) + 40))); goto L_0024DDBC;
L_0024DDB0:;
SET64(22, (s64)(s32)0x3f0000);
L_0024DDB4:;
SET32(2, RW(21) + -4752);
SET64(21, rd64(c, (RW(29) + 40)));
L_0024DDBC:;
SET32(3, RW(23) + -4760);
SET64(23, rd64(c, (RW(29) + 56)));
SET32(4, RW(22) + -4828);
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

void F_0024DDF8(Ctx *c) { /* func_0024DDF8 */
ENTER(0x24ddf8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(22) + -4784);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, rd64(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(21, (s64)(s32)0x3f0000); if (t) goto L_0024DE80; }
SET64(20, (s64)(s32)0x3f0000);
SET64(19, RD(3) + RD(0));
SET32(18, RW(21) + -4792);
SET32(17, RW(0) + 1);
SET32(16, RW(20) + -4836);
L_0024DE48:;
wr64(c, (RW(18) + 0), RD(17));
SET32(5, RW(0) + 1);
SET64(31, 0x24de58); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F4F0(c);
SET64(31, 0x24de60); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F590(c);
SET64(31, 0x24de68); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024D238(c);
SET64(3, rd64(c, (RW(19) + 0)));
{ int t = RD(3) == RD(0); SET32(2, RW(22) + -4784); if (t) { POLL(); goto L_0024DE48; } }
SET64(22, rd64(c, (RW(29) + 48))); goto L_0024DE8C;
L_0024DE80:;
SET64(20, (s64)(s32)0x3f0000);
SET32(2, RW(22) + -4784);
SET64(22, rd64(c, (RW(29) + 48)));
L_0024DE8C:;
SET32(3, RW(21) + -4792);
SET64(21, rd64(c, (RW(29) + 40)));
SET32(4, RW(20) + -4836);
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

void F_0024DEC8(Ctx *c) { /* func_0024DEC8 */
ENTER(0x24dec8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(22) + -4800);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 56), RD(31));
SET64(2, rd64(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET64(21, (s64)(s32)0x3f0000); if (t) goto L_0024DF50; }
SET64(20, (s64)(s32)0x3f0000);
SET64(19, RD(3) + RD(0));
SET32(18, RW(21) + -4808);
SET32(17, RW(0) + 1);
SET32(16, RW(20) + -4840);
L_0024DF18:;
wr64(c, (RW(18) + 0), RD(17));
SET32(5, RW(0) + 1);
SET64(31, 0x24df28); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F4F0(c);
SET64(31, 0x24df30); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F590(c);
SET64(31, 0x24df38); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024D238(c);
SET64(3, rd64(c, (RW(19) + 0)));
{ int t = RD(3) == RD(0); SET32(2, RW(22) + -4800); if (t) { POLL(); goto L_0024DF18; } }
SET64(22, rd64(c, (RW(29) + 48))); goto L_0024DF5C;
L_0024DF50:;
SET64(20, (s64)(s32)0x3f0000);
SET32(2, RW(22) + -4800);
SET64(22, rd64(c, (RW(29) + 48)));
L_0024DF5C:;
SET32(3, RW(21) + -4808);
SET64(21, rd64(c, (RW(29) + 40)));
SET32(4, RW(20) + -4840);
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

void F_0024DF98(Ctx *c) { /* func_0024DF98 */
ENTER(0x24df98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269118(c); return; }
}

void F_0024DFB0(Ctx *c) { /* func_0024DFB0 */
ENTER(0x24dfb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269130(c); return; }
}

void F_0024DFC8(Ctx *c) { /* func_0024DFC8 */
ENTER(0x24dfc8);
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + -4928))); return;
}

void F_0024DFD8(Ctx *c) { /* func_0024DFD8 */
ENTER(0x24dfd8);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) + -9224);
wr64(c, (RW(29) + 24), RD(31));
SET32(5, RW(18) + -4708);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) + 1);
wr32(c, (RW(2) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(4) != RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024E0C8; }
SET64(2, (s64)(s32)0x3f0000);
SET32(16, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(2) + -4988)));
wr32(c, (RW(5) + 0), RW(16));
{ int t = RSD(3) <= 0; SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024E0B4; }
SET32(2, RW(2) + -4920);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) == RD(16); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024E04C; }
SET32(2, RW(2) + -4832);
SET64(31, 0x24e04c); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_0024D180(c);
L_0024E04C:;
SET64(2, (s64)(s32)0x3f0000);
SET32(2, RW(2) + -4912);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) == RD(16); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024E06C; }
SET32(2, RW(2) + -4828);
SET64(31, 0x24e06c); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_0024D180(c);
L_0024E06C:;
SET64(31, 0x24e074);  F_0024D6D8(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) != RD(16); SET64(3, (s64)(s32)0x3f0000); if (t) goto L_0024E0A4; }
SET64(2, (s64)(s32)0x3f0000);
SET32(2, RW(2) + -4916);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) == RD(4); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024E0A0; }
SET32(2, RW(2) + -4836);
SET64(31, 0x24e0a0); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_0024D180(c);
L_0024E0A0:;
SET64(3, (s64)(s32)0x3f0000);
L_0024E0A4:;
SET32(3, RW(3) + -4848);
SET64(2, rd64(c, (RW(3) + 0)));
SET64(2, RD(2) + (s64)1);
wr64(c, (RW(3) + 0), RD(2));
L_0024E0B4:;
SET64(31, 0x24e0bc);  F_00269AA8(c);
SET32(3, RW(18) + -4708);
wr32(c, (RW(3) + 0), RW(0));
SET64(2, (s64)(s32)0x3f0000);
L_0024E0C8:;
SET64(2, (s32)rd32(c, (RW(2) + -4704)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0024E0E8; }
{ u32 t = RW(2); SET64(31, 0x24e0dc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 0))); goto L_0024E0EC;
L_0024E0E8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0024E0EC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0024E100(Ctx *c) { /* func_0024E100 */
ENTER(0x24e100);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024DFD8(c); return; }
}

void F_0024E118(Ctx *c) { /* func_0024E118 */
ENTER(0x24e118);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269B20(c); return; }
}

void F_0024E130(Ctx *c) { /* func_0024E130 */
ENTER(0x24e130);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -4820);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24e14c); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024D238(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(3);  if (t) goto L_0024E160; }
SET64(31, 0x24e160); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024D1D0(c);
L_0024E160:;
SET64(31, 0x24e168);  F_0024D6D8(c);
SET64(3, (s64)(s32)0x3f0000);
SET32(4, RW(0) + 1);
{ int t = RD(2) != RD(4); SET32(16, RW(3) + -4816); if (t) goto L_0024E1A8; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24e184);  F_0024D238(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024E1AC; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024D1D0(c); return; }
L_0024E1A8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0024E1AC:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0024E1B8(Ctx *c) { /* func_0024E1B8 */
ENTER(0x24e1b8);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 56), RD(17));
SET32(17, RW(2) + -4900);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(4, RW(0) + 1);
wr64(c, (RW(29) + 48), RD(16));
{ int t = RD(3) != RD(4); wr64(c, (RW(29) + 64), RD(31)); if (t) goto L_0024E220; }
SET64(2, (s64)(s32)0x3f0000);
SET64(5, RD(29) + RD(0));
SET32(16, RW(2) + -4824);
SET64(31, 0x24e1f0); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0010F560(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET32(4, RW(0) + 12); if (t) goto L_0024E208; }
if (RD(3) != RD(4)) { SET64(16, rd64(c, (RW(29) + 48))); goto L_0024E224; }
L_0024E208:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x24e214);  F_0010F590(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) == RD(3)) { wr32(c, (RW(17) + 0), RW(0)); goto L_0024E220; }
L_0024E220:;
SET64(16, rd64(c, (RW(29) + 48)));
L_0024E224:;
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_0024E238(Ctx *c) { /* func_0024E238 */
ENTER(0x24e238);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(0) + 1);
SET32(2, RW(2) + -4900);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + 0), RW(3));
SET32(29, RW(29) + 16); { F_0024D220(c); return; }
}

void F_0024E260(Ctx *c) { /* BtlLoad_EndStageSwap */
ENTER(0x24e260);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24e270);  F_00269DA8(c);
SET64(31, 0x24e278);  F_0024E130(c);
SET64(31, 0x24e280);  F_0024E738(c);
SET64(31, 0x24e288);  F_0024E238(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269DD8(c); return; }
}

void F_0024E298(Ctx *c) { /* func_0024E298 */
ENTER(0x24e298);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024E260(c); return; }
}

void F_0024E2B0(Ctx *c) { /* func_0024E2B0 */
ENTER(0x24e2b0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -4712);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0024E2E4; }
SET32(2, RW(0) + 1);
SET64(31, 0x24e2d8); wr32(c, (RW(16) + 0), RW(2)); F_00256E30(c);
SET64(31, 0x24e2e0);  F_0024BC60(c);
wr32(c, (RW(16) + 0), RW(0));
L_0024E2E4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0024E2F8(Ctx *c) { /* func_0024E2F8 */
ENTER(0x24e2f8);
SET32(29, RW(29) + -48);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_0024E340; }
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
wr32(c, (RW(29) + 8), RW(6)); goto L_0024E344;
L_0024E340:;
SET64(8, RD(0) + RD(0));
L_0024E344:;
SET64(31, 0x24e34c); SET64(4, RD(8) + RD(0)); F_0024D7E0(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0024E358(Ctx *c) { /* func_0024E358 */
ENTER(0x24e358);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024D9C0(c); return; }
}

void F_0024E370(Ctx *c) { /* func_0024E370 */
ENTER(0x24e370);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24e384);  F_0024DF98(c);
SET64(2, (s64)(s32)0x3f0000);
SET32(16, RW(2) + -4712);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
if (RD(3) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024E3C8; }
SET32(2, RW(0) + 1);
SET64(31, 0x24e3a4); wr32(c, (RW(16) + 0), RW(2)); F_0024DFB0(c);
SET64(31, 0x24e3ac);  F_00256E30(c);
SET64(31, 0x24e3b4);  F_0024BC60(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
L_0024E3C8:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0024DFB0(c); return; }
}

void F_0024E3D8(Ctx *c) { /* func_0024E3D8 */
ENTER(0x24e3d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269118(c); return; }
}

void F_0024E3F0(Ctx *c) { /* func_0024E3F0 */
ENTER(0x24e3f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269130(c); return; }
}

void F_0024E408(Ctx *c) { /* func_0024E408 */
ENTER(0x24e408);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 64), RD(18));
SET64(18, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(16));
SET32(2, RW(2) + -4992);
wr64(c, (RW(29) + 72), RD(31));
SET64(3, (s32)rd32(c, (RW(18) + -4988)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
if (RD(3) != RD(0)) { SET32(3, RW(18) + -4988); goto L_0024E5D0; }
SET64(31, 0x24e444);  F_00269C38(c);
SET64(4, (s64)(s32)0x250000);
SET32(4, RW(4) + -13760);
SET64(31, 0x24e454); SET64(5, RD(0) + RD(0)); F_00269920(c);
SET64(4, (s64)(s32)0x250000);
SET32(4, RW(4) + -13624);
SET64(31, 0x24e464); SET64(5, RD(0) + RD(0)); F_00269938(c);
if (RD(17) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 20))); goto L_0024E4C8; }
SET64(16, (s64)(s32)0x3f0000);
SET32(10, RW(0) + 24);
SET32(2, RW(16) + -4976);
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
wr32(c, (RW(2) + 40), RW(0)); goto L_0024E52C;
L_0024E4C8:;
SET64(16, (s64)(s32)0x3f0000);
SET32(4, RW(16) + -4976);
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
L_0024E52C:;
SET64(31, 0x24e534); SET64(17, (s64)(s32)0x3f0000); F_0010F550(c);
SET32(17, RW(17) + -4824);
SET64(5, RD(29) + RD(0));
wr32(c, (RW(17) + 0), RW(2));
SET32(16, RW(16) + -4976);
SET64(31, 0x24e54c); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_0010F560(c);
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(29) + 24)));
SET64(31, 0x24e55c); wr32(c, (RW(3) + 26040), RW(2)); F_0024D300(c);
SET64(4, (s32)rd32(c, (RW(16) + 32)));
SET64(31, 0x24e568); SET64(5, (s32)rd32(c, (RW(16) + 36))); F_0024D3A8(c);
SET64(31, 0x24e570);  F_0024D460(c);
SET64(31, 0x24e578);  F_0024D4E8(c);
SET64(31, 0x24e580);  F_0024D570(c);
SET64(4, (s32)rd32(c, (RW(16) + 40)));
SET64(31, 0x24e58c); SET64(5, (s32)rd32(c, (RW(16) + 44))); F_0024D608(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x24e598); SET64(5, (s32)rd32(c, (RW(16) + 20))); F_0010F4F0(c);
SET64(5, (s64)(s32)0x250000);
SET32(5, RW(5) + -13280);
SET32(4, RW(0) + 6);
SET64(31, 0x24e5ac); SET64(6, RD(0) + RD(0)); F_00269848(c);
SET64(5, (s64)(s32)0x250000);
SET32(5, RW(5) + -13240);
SET32(4, RW(0) + 7);
SET64(31, 0x24e5c0); SET64(6, RD(0) + RD(0)); F_00269848(c);
SET64(3, (s64)(s32)0x3f0000);
SET32(2, RW(0) + 1);
wr32(c, (RW(3) + -4984), RW(2));
SET32(3, RW(18) + -4988);
L_0024E5D0:;
SET64(18, rd64(c, (RW(29) + 64)));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET32(2, RW(2) + 1);
SET64(31, rd64(c, (RW(29) + 72)));
wr32(c, (RW(3) + 0), RW(2));
SET32(29, RW(29) + 80); return;
}

void F_0024E5F8(Ctx *c) { /* func_0024E5F8 */
ENTER(0x24e5f8);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + -4988);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_0024E698; }
SET64(31, 0x24e620);  F_0024D970(c);
SET64(31, 0x24e628);  F_0024DA58(c);
SET64(31, 0x24e630);  F_0024DB28(c);
SET64(31, 0x24e638);  F_0024DCC8(c);
SET64(31, 0x24e640);  F_0024DBF8(c);
SET64(31, 0x24e648);  F_0024DDF8(c);
SET64(31, 0x24e650);  F_0024DEC8(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(3, (s64)(s32)0x3f0000);
SET32(2, RW(2) + -4824);
SET64(5, (s32)rd32(c, (RW(3) + 26040)));
SET64(31, 0x24e668); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_0010F4F0(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x24e674); SET64(5, RD(0) + RD(0)); F_00269920(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x24e680); SET64(5, RD(0) + RD(0)); F_00269938(c);
SET64(2, (s64)(s32)0x3f0000);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + -4984), RW(0));
SET32(29, RW(29) + 16); { F_00269C78(c); return; }
L_0024E698:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024E6A8(Ctx *c) { /* func_0024E6A8 */
ENTER(0x24e6a8);
SET32(29, RW(29) + -16);
SET64(6, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(7, RD(5) + RD(0));
SET32(4, RW(0) + 1);
SET64(5, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269720(c); return; }
}

void F_0024E6D0(Ctx *c) { /* func_0024E6D0 */
ENTER(0x24e6d0);
SET32(29, RW(29) + -16);
SET64(6, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(7, RD(5) + RD(0));
SET32(4, RW(0) + 7);
SET64(5, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269720(c); return; }
}

void F_0024E6F8(Ctx *c) { /* func_0024E6F8 */
ENTER(0x24e6f8);
SET32(29, RW(29) + -16);
SET32(4, RW(0) + 7);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002698A0(c); return; }
}

void F_0024E710(Ctx *c) { /* func_0024E710 */
ENTER(0x24e710);
SET64(2, (s64)(s32)0x520000);
SET64(3, (s64)(s32)0x520000);
SET32(2, RW(2) + 20488);
SET32(3, RW(3) + 20496);
wr32(c, (RW(2) + 4), RW(5));
wr32(c, (RW(2) + 0), RW(4));
wr32(c, (RW(3) + 4), RW(7));
wr32(c, (RW(3) + 0), RW(6)); return;
}

void F_0024E738(Ctx *c) { /* func_0024E738 */
ENTER(0x24e738);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + 20488);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0024E760; }
{ u32 t = RW(3); SET64(31, 0x24e75c); SET64(4, (s32)rd32(c, (RW(2) + 4))); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_0024E760:;
SET32(29, RW(29) + 16); return;
}

void F_0024E768(Ctx *c) { /* func_0024E768 */
ENTER(0x24e768);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + 20496);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_0024E790; }
{ u32 t = RW(3); SET64(31, 0x24e78c); SET64(4, (s32)rd32(c, (RW(2) + 4))); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_0024E790:;
SET32(29, RW(29) + 16); return;
}

void F_0024E798(Ctx *c) { /* func_0024E798 */
ENTER(0x24e798);
SET64(3, (s64)(s32)0x3f0000);
SET64(2, (s32)rd32(c, (RW(3) + 26048))); return;
}

void F_0024E7A8(Ctx *c) { /* func_0024E7A8 */
ENTER(0x24e7a8);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24e7c4); wr32(c, (RW(2) + 26048), RW(16)); F_002619C0(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0025EF50(c); return; }
}

void F_0024E7D8(Ctx *c) { /* func_0024E7D8 */
ENTER(0x24e7d8);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -240);
SET64(12, (s32)rd32(c, (RW(2) + 26048)));
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
{ int t = RD(12) == RD(13); wr32(c, (RW(29) + 180), c->f[19].u); if (t) goto L_0024E84C; }
SET64(31, 0x24e844);  F_0012EAC8(c);
SET64(31, 0x24e84c); SET64(4, RD(29) + RD(0)); F_00111888(c);
L_0024E84C:;
SET64(31, rd64(c, (RW(29) + 128)));
SET32(29, RW(29) + 240); return;
}

void F_0024E858(Ctx *c) { /* func_0024E858 */
ENTER(0x24e858);
SET64(2, (s64)(s32)0x3f0000);
SET32(29, RW(29) + -240);
SET64(3, (s32)rd32(c, (RW(2) + 26048)));
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
{ int t = RD(3) != RD(0); wr32(c, (RW(29) + 180), c->f[19].u); if (t) goto L_0024E8C4; }
SET64(31, 0x24e8bc);  F_0012EAC8(c);
SET64(31, 0x24e8c4); SET64(4, RD(29) + RD(0)); F_00111888(c);
L_0024E8C4:;
SET64(31, rd64(c, (RW(29) + 128)));
SET32(29, RW(29) + 240); return;
}

void F_0024E8D0(Ctx *c) { hle_cri_print(c); } /* func_0024E8D0 */

void F_0024E950(Ctx *c) { /* func_0024E950 */
ENTER(0x24e950);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00263E28(c); return; }
}

void F_0024E968(Ctx *c) { /* func_0024E968 */
ENTER(0x24e968);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(4, RW(5) << 2);
SET32(2, RW(2) + RW(4));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(4, (s32)rd32(c, (RW(3) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(6) + 36)));
{ u32 t = RW(2); SET64(31, 0x24e994); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) >> 1);
SET32(29, RW(29) + 16); return;
}

void F_0024E9A8(Ctx *c) { /* func_0024E9A8 */
ENTER(0x24e9a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(4, RW(5) << 2);
SET32(2, RW(2) + RW(4));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(4, (s32)rd32(c, (RW(3) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(6) + 36)));
{ u32 t = RW(2); SET64(31, 0x24e9d4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) >> 1);
SET32(29, RW(29) + 16); return;
}

void F_0024E9E8(Ctx *c) { /* func_0024E9E8 */
ENTER(0x24e9e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(4, RW(5) << 2);
SET32(5, RW(0) + 1);
SET32(2, RW(2) + RW(4));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x24ea0c); SET64(4, (s32)rd32(c, (RW(3) + 4))); F_002689B8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) >> 1);
SET32(29, RW(29) + 16); return;
}

void F_0024EA20(Ctx *c) { /* func_0024EA20 */
ENTER(0x24ea20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(4, RW(5) << 2);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + RW(4));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x24ea44); SET64(4, (s32)rd32(c, (RW(3) + 4))); F_002689B8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) >> 1);
SET32(29, RW(29) + 16); return;
}

void F_0024EA58(Ctx *c) { /* func_0024EA58 */
ENTER(0x24ea58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002649E0(c); return; }
}

void F_0024EA70(Ctx *c) { /* func_0024EA70 */
ENTER(0x24ea70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00264B78(c); return; }
}

void F_0024EA88(Ctx *c) { /* func_0024EA88 */
ENTER(0x24ea88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00264BE8(c); return; }
}

void F_0024EAA0(Ctx *c) { /* func_0024EAA0 */
ENTER(0x24eaa0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00264C50(c); return; }
}

void F_0024EAB8(Ctx *c) { /* func_0024EAB8 */
ENTER(0x24eab8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00264CA0(c); return; }
}

void F_0024EAD0(Ctx *c) { /* func_0024EAD0 */
ENTER(0x24ead0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00264CF0(c); return; }
}

void F_0024EAE8(Ctx *c) { /* func_0024EAE8 */
ENTER(0x24eae8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00264CF8(c); return; }
}

void F_0024EB00(Ctx *c) { /* func_0024EB00 */
ENTER(0x24eb00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00264D88(c); return; }
}

void F_0024EB18(Ctx *c) { /* func_0024EB18 */
ENTER(0x24eb18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00264E10(c); return; }
}

void F_0024EB30(Ctx *c) { /* func_0024EB30 */
ENTER(0x24eb30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00264710(c); return; }
}

void F_0024EB48(Ctx *c) { /* func_0024EB48 */
ENTER(0x24eb48);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00264E38(c); return; }
}

void F_0024EB60(Ctx *c) { /* func_0024EB60 */
ENTER(0x24eb60);
 return;
}

void F_0024EB68(Ctx *c) { /* func_0024EB68 */
ENTER(0x24eb68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00264EF8(c); return; }
}

void F_0024EB80(Ctx *c) { /* func_0024EB80 */
ENTER(0x24eb80);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24eb98); SET64(16, RD(4) + RD(0)); F_002654C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24eba4); SET64(5, RD(0) + RD(0)); F_00265428(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265298(c); return; }
}

void F_0024EBB8(Ctx *c) { /* func_0024EBB8 */
ENTER(0x24ebb8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265380(c); return; }
}

void F_0024EBD0(Ctx *c) { /* func_0024EBD0 */
ENTER(0x24ebd0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002653C8(c); return; }
}

void F_0024EBE8(Ctx *c) { /* func_0024EBE8 */
ENTER(0x24ebe8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265428(c); return; }
}

void F_0024EC00(Ctx *c) { /* func_0024EC00 */
ENTER(0x24ec00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002654C0(c); return; }
}

void F_0024EC18(Ctx *c) { /* func_0024EC18 */
ENTER(0x24ec18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265618(c); return; }
}

void F_0024EC30(Ctx *c) { /* func_0024EC30 */
ENTER(0x24ec30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265650(c); return; }
}

void F_0024EC48(Ctx *c) { /* func_0024EC48 */
ENTER(0x24ec48);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002656B8(c); return; }
}

void F_0024EC60(Ctx *c) { /* func_0024EC60 */
ENTER(0x24ec60);
SET64(4, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24ec74); SET32(4, RW(4) + -20808); F_0024E8D0(c);
L_0024EC78:;
 { POLL(); goto L_0024EC78; }
}

void F_0024EC98(Ctx *c) { /* func_0024EC98 */
ENTER(0x24ec98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002658D8(c); return; }
}

void F_0024ECB0(Ctx *c) { /* func_0024ECB0 */
ENTER(0x24ecb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265980(c); return; }
}

void F_0024ECC8(Ctx *c) { /* func_0024ECC8 */
ENTER(0x24ecc8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002659C8(c); return; }
}

void F_0024ECE0(Ctx *c) { /* func_0024ECE0 */
ENTER(0x24ece0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002659F8(c); return; }
}

void F_0024ECF8(Ctx *c) { /* func_0024ECF8 */
ENTER(0x24ecf8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265A70(c); return; }
}

void F_0024ED10(Ctx *c) { /* func_0024ED10 */
ENTER(0x24ed10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265AB0(c); return; }
}

void F_0024ED28(Ctx *c) { /* func_0024ED28 */
ENTER(0x24ed28);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265B00(c); return; }
}

void F_0024ED40(Ctx *c) { /* func_0024ED40 */
ENTER(0x24ed40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265B30(c); return; }
}

void F_0024ED58(Ctx *c) { /* func_0024ED58 */
ENTER(0x24ed58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265BC8(c); return; }
}

void F_0024ED70(Ctx *c) { /* func_0024ED70 */
ENTER(0x24ed70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265BF8(c); return; }
}

void F_0024ED88(Ctx *c) { /* func_0024ED88 */
ENTER(0x24ed88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265C28(c); return; }
}

void F_0024EDA0(Ctx *c) { /* func_0024EDA0 */
ENTER(0x24eda0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265C60(c); return; }
}

void F_0024EDB8(Ctx *c) { /* func_0024EDB8 */
ENTER(0x24edb8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265C90(c); return; }
}

void F_0024EDD0(Ctx *c) { /* func_0024EDD0 */
ENTER(0x24edd0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265D50(c); return; }
}

void F_0024EDE8(Ctx *c) { /* func_0024EDE8 */
ENTER(0x24ede8);
 return;
}

void F_0024EDF0(Ctx *c) { /* func_0024EDF0 */
ENTER(0x24edf0);
 return;
}

void F_0024EDF8(Ctx *c) { /* func_0024EDF8 */
ENTER(0x24edf8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002654F0(c); return; }
}

void F_0024EE10(Ctx *c) { /* func_0024EE10 */
ENTER(0x24ee10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00265520(c); return; }
}

void F_0024EE28(Ctx *c) { /* func_0024EE28 */
ENTER(0x24ee28);
 return;
}

void F_0024EE30(Ctx *c) { /* func_0024EE30 */
ENTER(0x24ee30);
 return;
}

void F_0024EE38(Ctx *c) { /* func_0024EE38 */
ENTER(0x24ee38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24ee48);  F_00265DE0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0024EE58(Ctx *c) { /* func_0024EE58 */
ENTER(0x24ee58);
SET64(3, (s64)(s32)0x3f0000);
SET32(3, RW(3) + 26056);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2)); return;
}

void F_0024EE70(Ctx *c) { /* func_0024EE70 */
ENTER(0x24ee70);
SET64(3, (s64)(s32)0x3f0000);
SET32(3, RW(3) + 26056);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 0), RW(2)); return;
}

void F_0024EE88(Ctx *c) { /* func_0024EE88 */
ENTER(0x24ee88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002458C8(c); return; }
}

void F_0024EEA0(Ctx *c) { /* func_0024EEA0 */
ENTER(0x24eea0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002458D8(c); return; }
}

void F_0024EEB8(Ctx *c) { /* func_0024EEB8 */
ENTER(0x24eeb8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x24eec8);  F_002458E8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s64)(s32)0x3f0000);
SET32(4, RW(4) + 26072);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 2688);
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
}

void F_0024EEE8(Ctx *c) { /* func_0024EEE8 */
ENTER(0x24eee8);
SET32(29, RW(29) + -16);
SET64(4, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 26072);
SET32(6, RW(0) + 2688);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
}

void F_0024EF10(Ctx *c) { /* func_0024EF10 */
ENTER(0x24ef10);
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

void F_0024EF50(Ctx *c) { /* func_0024EF50 */
ENTER(0x24ef50);
SET32(29, RW(29) + -64);
SET64(7, (s64)(s32)0x3f0000);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(7) + 26072);
wr64(c, (RW(29) + 8), RD(17));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 48), RD(31));
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET64(16, (s32)rd32(c, (RW(20) + 0))); if (t) goto L_0024EFBC; }
SET32(5, RW(5) + 1);
L_0024EF98:;
SET64(2, RSD(5) < (s64)16);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 168); if (t) goto L_0024EFBC; }
SET64(2, (s8)rd8(c, (RW(3) + 0)));
if (RD(2) != RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_0024EF98; } }
L_0024EFBC:;
SET32(3, RW(0) + 16);
{ int t = RD(5) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0024F0A8; }
SET32(2, RW(5) << 2);
SET32(3, RW(7) + 26072);
SET32(2, RW(2) + RW(5));
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 3);
SET64(31, 0x24efec); SET32(18, RW(2) + RW(3)); F_00267580(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x24eff8); SET64(17, RD(2) + RD(0)); F_00267588(c);
SET64(4, RD(16) + RD(0));
SET32(16, RW(2) >> 31);
SET64(31, 0x24f008); SET32(16, RW(16) + RW(2)); F_00267590(c);
SET32(7, RW(2) >> 31);
SET32(16, RSW(16) >> 1);
SET32(7, RW(7) + RW(2));
SET64(6, RD(16) + RD(0));
SET32(7, RSW(7) >> 1);
SET64(4, RD(19) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24f02c); SET32(7, RW(6) + RW(7)); F_002459E8(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); wr32(c, (RW(18) + 4), RW(4)); if (t) goto L_0024F0A8; }
SET64(5, (s64)(s32)0x250000);
SET64(6, RD(18) + RD(0));
SET64(31, 0x24f048); SET32(5, RW(5) + -2720); F_00246060(c);
wr32(c, (RW(18) + 8), RW(21));
wr8(c, (RW(18) + 2), (u8)RW(19));
{ int t = RSD(19) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0024F080; }
SET32(7, RW(18) + 12);
L_0024F060:;
SET32(2, RW(6) << 2);
SET32(6, RW(6) + 1);
SET32(3, RW(2) + RW(20));
SET32(2, RW(7) + RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(6) < RSD(19));
{ int t = RD(5) != RD(0); wr32(c, (RW(2) + 0), RW(4)); if (t) { POLL(); goto L_0024F060; } }
L_0024F080:;
wr8(c, (RW(18) + 1), (u8)RW(0));
SET64(31, 0x24f08c); SET64(4, RD(18) + RD(0)); F_0024EF10(c);
wr32(c, (RW(18) + 72), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 76), RW(0));
wr32(c, (RW(18) + 80), RW(0));
wr32(c, (RW(18) + 84), RW(0));
wr8(c, (RW(18) + 0), (u8)RW(2));
SET64(2, RD(18) + RD(0));
L_0024F0A8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0024F0D0(Ctx *c) { /* func_0024F0D0 */
ENTER(0x24f0d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0024F120; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0024F0F8; }
SET64(31, 0x24f0f8); wr32(c, (RW(16) + 4), RW(0)); F_00245B08(c);
L_0024F0F8:;
SET64(31, 0x24f100);  F_00247970(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x24f110); SET32(6, RW(0) + 168); F_001273D0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00247988(c); return; }
L_0024F120:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0024F130(Ctx *c) { /* func_0024F130 */
ENTER(0x24f130);
SET64(2, (s8)rd8(c, (RW(4) + 1))); return;
}

void F_0024F138(Ctx *c) { /* func_0024F138 */
ENTER(0x24f138);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(16) + 8), RW(17));
SET64(31, 0x24f15c); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00244118(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00243F30(c); return; }
}

void F_0024F178(Ctx *c) { /* func_0024F178 */
ENTER(0x24f178);
SET32(5, RW(5) << 2);
SET32(4, RW(4) + RW(5));
wr32(c, (RW(4) + 12), RW(6)); return;
}

void F_0024F188(Ctx *c) { /* func_0024F188 */
ENTER(0x24f188);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(16) + 56), RW(17));
SET64(31, 0x24f1ac); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_00244148(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00243F60(c); return; }
}

void F_0024F1C8(Ctx *c) { /* func_0024F1C8 */
ENTER(0x24f1c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24f1e0); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002441D8(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00243F80(c); return; }
}

void F_0024F1F8(Ctx *c) { /* func_0024F1F8 */
ENTER(0x24f1f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24f20c); SET64(16, RD(4) + RD(0)); F_0024EF10(c);
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 8)));
wr8(c, (RW(16) + 1), (u8)RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024F228(Ctx *c) { /* func_0024F228 */
ENTER(0x24f228);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x24f240); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002464B8(c);
wr8(c, (RW(16) + 1), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0024F258(Ctx *c) { /* adxsjd_decode_prep */
ENTER(0x24f258);
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
{ u32 t = RW(2); SET64(31, 0x24f29c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(29) + 4)));
{ int t = RSD(4) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_0024F2EC; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, (s8)rd8(c, (RW(3) + 0)));
{ int t = RD(2) != RD(0); SET32(2, RW(5) >> 31); if (t) goto L_0024F2F0; }
SET64(6, RD(4) + RD(0));
SET64(4, RD(3) + RD(0));
SET32(5, RW(5) + 1);
L_0024F2C8:;
SET64(2, RSD(5) < RSD(6));
{ int t = RD(2) == RD(0); SET32(3, RW(4) + RW(5)); if (t) goto L_0024F2EC; }
SET64(2, (s8)rd8(c, (RW(3) + 0)));
if (RD(2) == RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_0024F2C8; } }
L_0024F2EC:;
SET32(2, RW(5) >> 31);
L_0024F2F0:;
SET32(3, RW(5) + -1);
SET32(2, RW(5) + RW(2));
SET32(2, RSW(2) >> 1);
SET32(2, RW(2) << 1);
{ int t = RD(2) != RD(3); SET32(20, RW(29) + 16); if (t) goto L_0024F350; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x24f320); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(31, 0x24f328);  F_002458D8(c);
if (RD(2) != RD(0)) { SET32(2, RW(0) + 4); goto L_0024F53C; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -20768);
SET64(31, 0x24f344); SET32(5, RW(5) + -20736); F_00248EF0(c);
SET32(2, RW(0) + 4); goto L_0024F53C;
L_0024F350:;
SET64(4, RD(29) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(31, 0x24f360); SET64(7, RD(29) + RD(0)); F_002683C8(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(6, RD(20) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x24f378); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(2, RSD(6) < (s64)16);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_0024F3B0; }
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x24f394); SET64(4, RD(18) + RD(0)); F_00245EE8(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_0024F3AC; }
SET64(2, RSD(2) < RSD(17));
{ int t = RD(2) == RD(0);  if (t) goto L_0024F3D0; }
L_0024F3AC:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
L_0024F3B0:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x24f3c4); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 32))); goto L_0024F544;
L_0024F3D0:;
if (RSD(17) >= 0) { wr32(c, (RW(19) + 152), RW(17)); goto L_0024F440; }
SET64(2, (s16)rd16(c, (RW(18) + 154)));
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0024F3F8; }
SET64(31, 0x24f3ec); SET64(17, RD(0) + RD(0)); F_00245E48(c);
wr32(c, (RW(19) + 152), RW(17)); goto L_0024F440;
L_0024F3F8:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x24f410); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(31, 0x24f418);  F_002458D8(c);
if (RD(2) != RD(0)) { SET32(2, RW(0) + 4); goto L_0024F53C; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -20704);
SET64(31, 0x24f434); SET32(5, RW(5) + -20672); F_00248EF0(c);
SET32(2, RW(0) + 4); goto L_0024F53C;
L_0024F440:;
SET64(31, 0x24f448); SET64(4, RD(18) + RD(0)); F_00246088(c);
SET32(3, RW(0) + 4);
{ int t = RD(2) != RD(3); SET32(2, RW(0) + 1); if (t) goto L_0024F458; }
wr8(c, (RW(19) + 3), (u8)RW(2));
L_0024F458:;
SET64(31, 0x24f460); SET64(4, RD(18) + RD(0)); F_00246088(c);
SET32(3, RW(0) + 2);
{ int t = RD(2) != RD(3); SET32(3, RW(0) + 64); if (t) goto L_0024F484; }
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(19) + 88);
SET64(2, RSD(6) < (s64)65);
SET64(31, 0x24f484); if (RD(2) == 0) SET64(6, RD(3)); F_00127218(c);
L_0024F484:;
SET64(31, 0x24f48c); SET64(4, RD(18) + RD(0)); F_00246088(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(3) + -10);
SET64(2, RD(2) < (u64)(s64)3);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_0024F4B8; }
SET32(2, RW(0) + 20);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 15); if (t) goto L_0024F4B4; }
{ int t = RD(3) != RD(2); SET64(4, RD(29) + RD(0)); if (t) goto L_0024F4D8; }
L_0024F4B4:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
L_0024F4B8:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x24f4cc); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 232))); goto L_0024F51C;
L_0024F4D8:;
SET64(6, RD(29) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x24f4e8); SET64(7, RD(20) + RD(0)); F_002683C8(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x24f500); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x24f518); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 232)));
L_0024F51C:;
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x3f0000); if (t) goto L_0024F538; }
SET64(2, (s32)rd32(c, (RW(2) + 26064)));
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0024F538; }
{ u32 t = RW(2); SET64(31, 0x24f538); SET64(5, (s32)rd32(c, (RW(4) + 20))); rt_call(c, t); }
L_0024F538:;
SET32(2, RW(0) + 2);
L_0024F53C:;
wr8(c, (RW(19) + 1), (u8)RW(2));
SET64(16, rd64(c, (RW(29) + 32)));
L_0024F544:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_0024F560(Ctx *c) { /* func_0024F560 */
ENTER(0x24f560);
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
SET64(20, (s32)rd32(c, (RW(18) + 12))); goto L_0024F5C8;
L_0024F5B0:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(16, RW(16) + 4);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(8, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(8); SET64(31, 0x24f5c8); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
L_0024F5C8:;
SET64(31, 0x24f5d0); SET64(4, (s32)rd32(c, (RW(18) + 4))); F_00246098(c);
SET64(5, RD(0) + RD(0));
SET64(2, RSD(19) < RSD(2));
SET32(19, RW(19) + 1);
SET64(7, RD(17) + RD(0));
SET32(17, RW(17) + 8);
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 16384); if (t) { POLL(); goto L_0024F5B0; } }
SET64(31, 0x24f5f4); SET64(4, RD(20) + RD(0)); F_00267580(c);
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
if (RSD(3) < 0) { SET64(2, (s64)(s32)0x1fff0000); goto L_0024F648; }
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET32(2, RW(3) - RW(2)); goto L_0024F64C;
L_0024F648:;
SET64(2, RD(2) | 0xffff);
L_0024F64C:;
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
SET32(29, RW(29) + 80); { F_00246080(c); return; }
}

void F_0024F680(Ctx *c) { /* func_0024F680 */
ENTER(0x24f680);
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
{ int t = RSD(3) < 0; SET64(17, (s32)rd32(c, (RW(18) + 8))); if (t) goto L_0024F6D4; }
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET64(2, RSD(2) < RSD(3));
if (RD(2) != RD(0)) { SET64(3, (s8)rd8(c, (RW(18) + 3))); goto L_0024F6D8; }
SET64(2, (s32)rd32(c, (RW(18) + 72)));
if (RD(2) == RD(0)) { SET64(3, (s8)rd8(c, (RW(18) + 3))); goto L_0024F6D8; }
{ u32 t = RW(2); SET64(31, 0x24f6d4); SET64(4, (s32)rd32(c, (RW(18) + 76))); rt_call(c, t); }
L_0024F6D4:;
SET64(3, (s8)rd8(c, (RW(18) + 3)));
L_0024F6D8:;
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_0024F710; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x24f6f8); SET32(5, RW(0) + 1); rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_0024F710; }
SET32(2, RW(0) + 3);
wr8(c, (RW(18) + 1), (u8)RW(2)); goto L_0024F9C4;
L_0024F710:;
SET32(19, RW(18) + 20);
SET64(6, (s64)(s32)0x7fff0000);
SET64(4, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET32(5, RW(0) + 1);
SET64(6, RD(6) | 0xffff);
{ u32 t = RW(3); SET64(31, 0x24f730); SET64(7, RD(19) + RD(0)); rt_call(c, t); }
SET64(31, 0x24f738); SET64(4, RD(20) + RD(0)); F_00246088(c);
{ int t = RD(2) != RD(0);  if (t) goto L_0024F8C0; }
SET64(6, (s32)rd32(c, (RW(18) + 24)));
SET64(2, RSD(6) < (s64)4);
{ int t = RD(2) != RD(0); SET64(5, RD(0) | 0x8001); if (t) goto L_0024F8C0; }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(3, rd16(c, (RW(4) + 0)));
SET64(2, rd8(c, (RW(4) + 1)));
SET32(3, RW(3) << 8);
SET64(2, RD(2) | RD(3));
SET64(2, RD(2) & 0xffff);
{ int t = RD(2) != RD(5); SET32(2, RW(0) + 3); if (t) goto L_0024F8C0; }
SET64(5, RD(6) + RD(0));
wr8(c, (RW(18) + 1), (u8)RW(2));
SET64(31, 0x24f780); SET32(6, RW(29) + 16); F_002483E8(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 156))); goto L_0024F7E0; }
SET64(5, (s16)rd16(c, (RW(29) + 16)));
SET64(2, (s32)rd32(c, (RW(18) + 24)));
SET64(2, RSD(2) < RSD(5));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_0024F93C; }
SET64(4, RD(19) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(31, 0x24f7ac); SET64(7, RD(29) + RD(0)); F_002683C8(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x24f7c4); SET64(6, RD(19) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x24f7dc); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 156)));
L_0024F7E0:;
{ int t = RD(2) == RD(0); SET64(20, RD(19) + RD(0)); if (t) goto L_0024F9C4; }
SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_0024F88C;
L_0024F7F0:;
SET64(16, RSD(5) < RSD(4));
if (RD(16) == RD(0)) { SET64(4, RD(20) + RD(0)); goto L_0024F844; }
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(3, (s8)rd8(c, (RW(2) + 0)));
if (RD(3) != RD(0)) { SET64(4, RD(20) + RD(0)); goto L_0024F844; }
SET64(6, RD(4) + RD(0));
SET32(5, RW(5) + 1);
L_0024F818:;
SET64(2, RSD(5) < RSD(6));
if (RD(2) == RD(0)) { SET64(16, RSD(5) < RSD(4)); goto L_0024F840; }
SET64(2, (s32)rd32(c, (RW(18) + 20)));
SET32(2, RW(2) + RW(5));
SET64(3, (s8)rd8(c, (RW(2) + 0)));
if (RD(3) == RD(0)) { SET32(5, RW(5) + 1); { POLL(); goto L_0024F818; } }
SET64(16, RSD(5) < RSD(4));
L_0024F840:;
SET64(4, RD(20) + RD(0));
L_0024F844:;
SET64(6, RD(20) + RD(0));
SET64(31, 0x24f850); SET64(7, RD(29) + RD(0)); F_002683C8(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x24f868); SET64(6, RD(20) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x24f880); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
{ int t = RD(16) != RD(0); SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_0024F9C8; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_0024F88C:;
SET64(6, (s64)(s32)0x7fff0000);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET64(6, RD(6) | 0xffff);
{ u32 t = RW(2); SET64(31, 0x24f8a8); SET64(7, RD(19) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 24)));
{ int t = RD(4) != RD(0); SET64(5, RD(0) + RD(0)); if (t) { POLL(); goto L_0024F7F0; } }
SET64(16, rd64(c, (RW(29) + 32))); goto L_0024F9C8;
L_0024F8C0:;
SET64(31, 0x24f8c8); SET64(4, RD(18) + RD(0)); F_002502A0(c);
SET64(3, (s32)rd32(c, (RW(18) + 52)));
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) != RD(0); SET32(2, RW(0) + 3); if (t) goto L_0024F900; }
SET64(4, RD(17) + RD(0));
wr8(c, (RW(18) + 1), (u8)RW(2));
SET64(6, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 28)));
{ u32 t = RW(3); SET64(31, 0x24f8f4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 32))); goto L_0024F9C8;
L_0024F900:;
SET64(31, 0x24f908); SET64(4, RD(18) + RD(0)); F_00250270(c);
SET64(4, (s32)rd32(c, (RW(18) + 12)));
SET64(16, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x24f920); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(2) >> 31);
SET32(3, RW(3) + RW(2));
SET32(3, RSW(3) >> 1);
SET64(3, RSD(3) < RSD(16));
{ int t = RD(3) == RD(0);  if (t) goto L_0024F958; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_0024F93C:;
SET64(4, RD(17) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x24f950); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 32))); goto L_0024F9C8;
L_0024F958:;
SET64(31, 0x24f960); SET64(4, RD(20) + RD(0)); F_00246088(c);
SET32(3, RW(0) + 10);
{ int t = RD(2) != RD(3); SET32(5, RW(0) + 1); if (t) goto L_0024F980; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x24f980); SET64(6, RD(19) + RD(0)); rt_call(c, t); }
L_0024F980:;
SET64(31, 0x24f988); SET64(4, RD(20) + RD(0)); F_00246088(c);
SET32(3, RW(0) + 15);
if (RD(2) != RD(3)) { SET64(6, (s32)rd32(c, (RW(18) + 24))); goto L_0024F9B0; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x24f9ac); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(6, (s32)rd32(c, (RW(18) + 24)));
L_0024F9B0:;
SET64(4, RD(20) + RD(0));
SET64(31, 0x24f9bc); SET64(5, (s32)rd32(c, (RW(18) + 20))); F_00246420(c);
SET64(31, 0x24f9c4); SET64(4, RD(20) + RD(0)); F_002464A0(c);
L_0024F9C4:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0024F9C8:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_0024F9E8(Ctx *c) { /* func_0024F9E8 */
ENTER(0x24f9e8);
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
SET64(31, 0x24fa34); SET64(4, RD(23) + RD(0)); F_00246140(c);
SET64(4, RD(23) + RD(0));
SET64(31, 0x24fa40); SET64(16, RD(2) + RD(0)); F_00246540(c);
SET64(4, RD(23) + RD(0));
SET64(31, 0x24fa4c); wr32(c, (RW(29) + 32), RW(2)); F_00246548(c);
SET32(4, RW(18) + 20);
SET64(19, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 52)));
SET32(30, RW(29) + 16);
SET64(5, (s32)rd32(c, (RW(29) + 32)));
SET32(16, RW(16) - RW(2));
SET64(6, RD(29) + RD(0));
SET64(2, RSD(19) < RSD(16));
SET64(7, RD(30) + RD(0));
SET64(31, 0x24fa78); if (RD(2) == 0) SET64(19, RD(16)); F_002683C8(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(6, RD(29) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x24fa90); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x24faa8); SET64(6, RD(30) + RD(0)); rt_call(c, t); }
 goto L_0024FB10;
L_0024FAB0:;
SET64(31, 0x24fab8);  F_002683C8(c);
SET64(2, (s32)rd32(c, (RW(18) + 80)));
SET64(5, RD(22) + RD(0));
{ int t = RD(2) == RD(0); SET32(22, RW(22) + 1); if (t) goto L_0024FAD8; }
SET64(4, (s32)rd32(c, (RW(18) + 84)));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
{ u32 t = RW(2); SET64(31, 0x24fad8); SET64(7, (s32)rd32(c, (RW(29) + 4))); rt_call(c, t); }
L_0024FAD8:;
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET64(6, RD(29) + RD(0));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x24faf4); SET32(21, RW(21) + 8); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET64(5, RD(0) + RD(0));
SET64(6, RD(30) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x24fb10); SET32(20, RW(20) + 4); rt_call(c, t); }
L_0024FB10:;
SET64(31, 0x24fb18); SET64(4, (s32)rd32(c, (RW(18) + 4))); F_00246098(c);
SET64(4, RD(21) + RD(0));
SET64(2, RSD(22) < RSD(2));
SET32(5, RW(19) << 1);
SET64(6, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET64(7, RD(30) + RD(0)); if (t) { POLL(); goto L_0024FAB0; } }
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
SET64(31, 0x24fb7c); wr32(c, (RW(18) + 64), RW(6)); F_00246500(c);
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

void F_0024FBB0(Ctx *c) { /* func_0024FBB0 */
ENTER(0x24fbb0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x24fbd8); SET64(4, RD(17) + RD(0)); F_00246140(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x24fbe4); SET64(16, RD(2) + RD(0)); F_00246540(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x24fbf0); SET64(19, RD(2) + RD(0)); F_00246548(c);
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

void F_0024FC40(Ctx *c) { /* func_0024FC40 */
ENTER(0x24fc40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(16, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x24fc60); SET64(4, RD(16) + RD(0)); F_00246418(c);
{ int t = RD(2) != RD(0);  if (t) goto L_0024FC70; }
SET64(31, 0x24fc70); SET64(4, RD(17) + RD(0)); F_0024F680(c);
L_0024FC70:;
SET64(31, 0x24fc78); SET64(4, RD(16) + RD(0)); F_00246B08(c);
SET64(31, 0x24fc80); SET64(4, RD(16) + RD(0)); F_00246418(c);
SET32(3, RW(0) + 3);
if (RD(2) != RD(3)) { SET64(4, (s16)rd16(c, (RW(16) + 152))); goto L_0024FC98; }
SET64(31, 0x24fc94); SET64(4, RD(17) + RD(0)); F_0024F9E8(c);
SET64(4, (s16)rd16(c, (RW(16) + 152)));
L_0024FC98:;
SET32(2, RW(0) + 10);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 20); if (t) goto L_0024FCC4; }
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 11); if (t) goto L_0024FCC4; }
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 12); if (t) goto L_0024FCC4; }
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 15); if (t) goto L_0024FCC4; }
{ int t = RD(4) != RD(2); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0024FCE0; }
L_0024FCC4:;
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0024FBB0(c); return; }
L_0024FCE0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0024FCF0(Ctx *c) { /* func_0024FCF0 */
ENTER(0x24fcf0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 160)));
if (RSD(2) <= 0) { SET64(3, (s8)rd8(c, (RW(16) + 1))); goto L_0024FD28; }
SET64(31, 0x24fd14);  F_00247970(c);
SET64(31, 0x24fd1c); SET64(4, RD(16) + RD(0)); F_0024FD98(c);
SET64(31, 0x24fd24);  F_00247988(c);
SET64(3, (s8)rd8(c, (RW(16) + 1)));
L_0024FD28:;
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET32(2, RW(0) + 1); goto L_0024FD48; }
SET64(31, 0x24fd3c); SET64(4, RD(16) + RD(0)); F_0024FC40(c);
SET64(2, (s32)rd32(c, (RW(16) + 164))); goto L_0024FD5C;
L_0024FD48:;
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(16) + 164))); goto L_0024FD5C; }
SET64(31, 0x24fd58); SET64(4, RD(16) + RD(0)); F_0024F258(c);
SET64(2, (s32)rd32(c, (RW(16) + 164)));
L_0024FD5C:;
if (RSD(2) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0024FD88; }
SET64(31, 0x24fd6c);  F_00247970(c);
SET64(31, 0x24fd74); SET64(4, RD(16) + RD(0)); F_0024FEE8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00247988(c); return; }
L_0024FD88:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0024FD98(Ctx *c) { /* func_0024FD98 */
ENTER(0x24fd98);
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
{ int t = RSD(3) <= 0; SET64(4, rd8(c, (RW(18) + 2))); if (t) goto L_0024FE34; }
SET32(16, RW(18) + 12);
L_0024FDD8:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(6, (s64)(s32)0x7fff0000);
SET64(7, RD(29) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(6, RD(6) | 0xffff);
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x24fdfc); SET32(19, RW(19) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(8, (s32)rd32(c, (RW(29) + 4)));
SET64(5, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(4) + 0)));
SET64(6, RD(29) + RD(0));
SET64(2, RSD(17) < RSD(8));
SET32(16, RW(16) + 4);
SET64(3, (s32)rd32(c, (RW(7) + 28)));
{ u32 t = RW(3); SET64(31, 0x24fe24); if (RD(2) == 0) SET64(17, RD(8)); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(18) + 2)));
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(18) + 2))); if (t) { POLL(); goto L_0024FDD8; } }
L_0024FE34:;
SET32(2, RW(17) >> 31);
SET32(2, RW(17) + RW(2));
SET32(20, RSW(2) >> 1);
SET32(17, RW(20) << 1);
{ int t = RSD(17) <= 0; SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0024FEC8; }
SET32(2, RW(4) << 24);
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_0024FEB8; }
SET32(16, RW(18) + 12);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_0024FE60:;
SET64(7, RD(29) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x24fe7c); SET32(19, RW(19) + 1); rt_call(c, t); }
SET64(5, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x24fe8c); SET64(6, RD(17) + RD(0)); F_001273D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(5, RW(0) + 1);
SET64(6, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(3); SET64(31, 0x24fea8); SET32(16, RW(16) + 4); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(18) + 2)));
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_0024FE60; } }
L_0024FEB8:;
SET64(2, (s32)rd32(c, (RW(18) + 160)));
SET32(2, RW(2) - RW(20));
wr32(c, (RW(18) + 160), RW(2));
SET64(16, rd64(c, (RW(29) + 16)));
L_0024FEC8:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

static void B_0024FEE8(Ctx *c, u32 entry) { /* func_0024FEE8 */
ENTER(entry);
switch (entry) { case 0x250000: goto L_00250000; case 0x250014: goto L_00250014; case 0x250018: goto L_00250018; case 0x25001c: goto L_0025001C; case 0x250020: goto L_00250020; }
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
{ int t = RSD(3) <= 0; SET64(4, rd8(c, (RW(18) + 2))); if (t) goto L_0024FF84; }
SET32(16, RW(18) + 12);
L_0024FF28:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(6, (s64)(s32)0x7fff0000);
SET64(7, RD(29) + RD(0));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(6, RD(6) | 0xffff);
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x24ff4c); SET32(19, RW(19) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(8, (s32)rd32(c, (RW(29) + 4)));
SET32(5, RW(0) + 1);
SET64(7, (s32)rd32(c, (RW(4) + 0)));
SET64(6, RD(29) + RD(0));
SET64(2, RSD(17) < RSD(8));
SET32(16, RW(16) + 4);
SET64(3, (s32)rd32(c, (RW(7) + 28)));
{ u32 t = RW(3); SET64(31, 0x24ff74); if (RD(2) == 0) SET64(17, RD(8)); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(18) + 2)));
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0); SET64(4, rd8(c, (RW(18) + 2))); if (t) { POLL(); goto L_0024FF28; } }
L_0024FF84:;
SET32(2, RW(17) >> 31);
SET32(2, RW(17) + RW(2));
SET32(20, RSW(2) >> 1);
SET32(17, RW(20) << 1);
{ int t = RSD(17) <= 0; SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_00250008; }
SET32(2, RW(4) << 24);
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_0024FFF8; }
SET32(16, RW(18) + 12);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_0024FFB0:;
SET32(5, RW(0) + 1);
SET64(6, RD(17) + RD(0));
SET64(7, RD(29) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x24ffcc); SET32(19, RW(19) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(0) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(3); SET64(31, 0x24ffe8); SET32(16, RW(16) + 4); rt_call(c, t); }
SET64(2, (s8)rd8(c, (RW(18) + 2)));
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_0024FFB0; } }
L_0024FFF8:;
SET64(2, (s32)rd32(c, (RW(18) + 164)));
SET32(2, RW(2) - RW(20));
L_00250000:;
wr32(c, (RW(18) + 164), RW(2));
SET64(16, rd64(c, (RW(29) + 16)));
L_00250008:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
L_00250014:;
SET64(20, rd64(c, (RW(29) + 48)));
L_00250018:;
SET64(31, rd64(c, (RW(29) + 56)));
L_0025001C:;
SET32(29, RW(29) + 64); return;
if (0) { L_00250020:; SET32(29, RW(29) + 64); }
}
void F_0024FEE8(Ctx *c) { B_0024FEE8(c, 0x24fee8); }
void F_00250000(Ctx *c) { B_0024FEE8(c, 0x250000); }
void F_00250014(Ctx *c) { B_0024FEE8(c, 0x250014); }
void F_00250018(Ctx *c) { B_0024FEE8(c, 0x250018); }
void F_0025001C(Ctx *c) { B_0024FEE8(c, 0x25001c); }
void F_00250020(Ctx *c) { B_0024FEE8(c, 0x250020); }

static void B_00250028(Ctx *c, u32 entry) { /* func_00250028 */
ENTER(entry);
switch (entry) { case 0x250030: goto L_00250030; case 0x250034: goto L_00250034; case 0x250038: goto L_00250038; case 0x25003c: goto L_0025003C; case 0x250048: goto L_00250048; case 0x25004c: goto L_0025004C; }
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x3f0000);
L_00250030:;
wr64(c, (RW(29) + 24), RD(31));
L_00250034:;
wr64(c, (RW(29) + 0), RD(16));
L_00250038:;
SET32(16, RW(2) + 26072);
L_0025003C:;
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 15);
wr64(c, (RW(29) + 16), RD(18));
L_00250048:;
SET32(18, RW(0) + 1);
L_0025004C:;
L_00250050:;
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_00250068; }
SET64(31, 0x250064); SET64(4, RD(16) + RD(0)); F_0024FCF0(c);
SET32(17, RW(17) + -1);
L_00250068:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 168); if (t) { POLL(); goto L_00250050; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}
void F_00250028(Ctx *c) { B_00250028(c, 0x250028); }
void F_00250030(Ctx *c) { B_00250028(c, 0x250030); }
void F_00250034(Ctx *c) { B_00250028(c, 0x250034); }
void F_00250038(Ctx *c) { B_00250028(c, 0x250038); }
void F_0025003C(Ctx *c) { B_00250028(c, 0x25003c); }
void F_00250048(Ctx *c) { B_00250028(c, 0x250048); }
void F_0025004C(Ctx *c) { B_00250028(c, 0x25004c); }

void F_00250088(Ctx *c) { /* func_00250088 */
ENTER(0x250088);
SET64(2, (s32)rd32(c, (RW(4) + 48))); return;
}

void F_00250090(Ctx *c) { /* func_00250090 */
ENTER(0x250090);
SET64(2, (s32)rd32(c, (RW(4) + 44))); return;
}

void F_00250098(Ctx *c) { /* func_00250098 */
ENTER(0x250098);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246550(c); return; }
}

void F_002500B0(Ctx *c) { /* func_002500B0 */
ENTER(0x2500b0);
wr32(c, (RW(4) + 52), RW(5)); return;
}

void F_002500B8(Ctx *c) { /* func_002500B8 */
ENTER(0x2500b8);
SET64(2, (s32)rd32(c, (RW(4) + 52))); return;
}

void F_002500C0(Ctx *c) { /* func_002500C0 */
ENTER(0x2500c0);
wr32(c, (RW(4) + 156), RW(5)); return;
}

void F_002500C8(Ctx *c) { /* func_002500C8 */
ENTER(0x2500c8);
SET64(2, (s32)rd32(c, (RW(4) + 156))); return;
}

void F_002500D0(Ctx *c) { /* func_002500D0 */
ENTER(0x2500d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00246238(c); return; }
}

void F_002500E8(Ctx *c) { /* func_002500E8 */
ENTER(0x2500e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002462A0(c); return; }
}

