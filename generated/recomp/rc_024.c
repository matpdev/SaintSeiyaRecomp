#include "r5900.h"
#include "functab.h"

void F_002978C0(Ctx *c) { /* func_002978C0 */
ENTER(0x2978c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
{ int t = RSD(2) <= 0; SET64(4, RD(0) + RD(0)); if (t) goto L_00297900; }
SET32(3, RW(16) + 24);
L_002978E0:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) + 1);
SET32(2, RW(2) - RW(5));
wr32(c, (RW(3) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET64(2, RSD(4) < RSD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_002978E0; } }
L_00297900:;
SET64(31, 0x297908); SET64(4, RD(16) + RD(0)); F_00297920(c);
wr32(c, (RW(16) + 424), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00297920(Ctx *c) { /* func_00297920 */
ENTER(0x297920);
SET64(5, (s32)rd32(c, (RW(4) + 16)));
{ int t = RSD(5) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_00297954; }
SET32(4, RW(4) + 24);
SET64(3, RD(5) + RD(0));
L_00297938:;
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(4, RW(4) + 4);
SET32(3, RW(3) + -1);
{ int t = RD(3) != RD(0); SET32(6, RW(6) + RW(2)); if (t) { POLL(); goto L_00297938; } }
L_00297954:;
div_s(c, 0, RSW(6), RSW(5));
if (RD(5) == RD(0)) { rt_break(c, 0x29795c); goto L_00297960; }
L_00297960:;
SET64(2, c->lo.d[0]);
 return;
}

void F_00297970(Ctx *c) { /* func_00297970 */
ENTER(0x297970);
SET64(2, (s64)(s32)0x410000);
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(2) + -1244), RW(4));
wr32(c, (RW(3) + -1248), RW(5)); return;
}

void F_00297988(Ctx *c) { /* func_00297988 */
ENTER(0x297988);
SET64(3, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -320);
SET32(3, RW(3) + 5776);
wr64(c, (RW(29) + 288), RD(16));
SET64(2, RD(3) & 0x7);
wr64(c, (RW(29) + 296), RD(17));
wr64(c, (RW(29) + 304), RD(31));
{ int t = RD(2) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_00297A10; }
SET32(2, RW(3) + 256);
L_002979B0:;
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
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_002979B0; } }
 goto L_00297A48;
L_00297A10:;
SET32(2, RW(3) + 256);
L_00297A14:;
SET64(5, rd64(c, (RW(3) + 0)));
SET64(6, rd64(c, (RW(3) + 8)));
SET64(7, rd64(c, (RW(3) + 16)));
SET64(8, rd64(c, (RW(3) + 24)));
wr64(c, (RW(4) + 0), RD(5));
wr64(c, (RW(4) + 8), RD(6));
wr64(c, (RW(4) + 16), RD(7));
wr64(c, (RW(4) + 24), RD(8));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_00297A14; } }
L_00297A48:;
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
SET32(17, RW(2) + -1244);
wr8(c, (RW(4) + 17), (u8)RW(8));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(4) == RD(0); SET64(2, (s64)(s32)0x410000); if (t) goto L_00297AD0; }
SET64(5, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(2) + -1248)));
SET64(16, (s64)(s32)0x410000);
SET64(31, 0x297aa0); SET32(16, RW(16) + -1236); F_001273D0(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(29) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(31, 0x297ab4); SET64(4, RD(2) + RD(0)); F_0012A3C0(c);
SET64(31, 0x297abc); SET64(4, RD(29) + RD(0)); F_0012A4D8(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, (s64)(s32)0x410000);
SET32(3, RW(3) + RW(2));
wr32(c, (RW(4) + -1232), RW(3));
wr32(c, (RW(16) + 0), RW(3));
L_00297AD0:;
SET64(16, rd64(c, (RW(29) + 288)));
SET64(17, rd64(c, (RW(29) + 296)));
SET64(31, rd64(c, (RW(29) + 304)));
SET32(29, RW(29) + 320); return;
}

void F_00297AE8(Ctx *c) { /* func_00297AE8 */
ENTER(0x297ae8);
SET32(29, RW(29) + -528);
SET64(3, (s64)(s32)0x410000);
wr64(c, (RW(29) + 512), RD(30));
SET64(30, RD(4) + RD(0));
wr64(c, (RW(29) + 448), RD(16));
SET32(3, RW(3) + -1244);
wr64(c, (RW(29) + 456), RD(17));
wr64(c, (RW(29) + 464), RD(18));
wr64(c, (RW(29) + 472), RD(19));
wr64(c, (RW(29) + 480), RD(20));
wr64(c, (RW(29) + 488), RD(21));
wr64(c, (RW(29) + 496), RD(22));
wr64(c, (RW(29) + 504), RD(23));
wr64(c, (RW(29) + 520), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 1000); if (t) goto L_00297C90; }
SET64(6, (s32)rd32(c, (RW(30) + 288)));
SET64(16, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(30) + 280)));
SET64(31, 0x297b40); SET32(16, RW(16) + 6056); F_002784E8(c);
SET64(17, rd64(c, (RW(30) + 280)));
SET64(5, rd64(c, (RW(30) + 288)));
SET64(22, RD(2) + RD(0));
SET64(31, 0x297b54); SET64(4, RD(17) + RD(0)); F_0011F988(c);
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
SET64(2, (s32)rd32(c, (RW(3) + -1896)));
wr64(c, (RW(29) + 8), RD(18));
SET64(18, (s64)(s32)0x410000);
wr64(c, (RW(29) + 136), RD(17));
SET32(18, RW(18) + -1244);
wr64(c, (RW(29) + 120), RD(13));
wr64(c, (RW(29) + 128), RD(14));
SET64(31, 0x297c44); wr64(c, (RW(29) + 144), RD(2)); F_00129C30(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET32(17, RW(2) + -1236);
SET32(5, RW(29) + 160);
SET64(31, 0x297c5c); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_0012A3C0(c);
SET64(4, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET64(5, (s32)rd32(c, (RW(4) + -1248)));
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(2, RW(2) + RW(5));
SET32(3, RW(3) + RW(16));
SET32(2, RW(2) + -1024);
SET64(2, RD(3) < RD(2));
{ int t = RD(2) != RD(0); wr32(c, (RW(17) + 0), RW(3)); if (t) goto L_00297C90; }
SET64(2, (s64)(s32)0x410000);
SET64(3, (s32)rd32(c, (RW(2) + -1232)));
wr32(c, (RW(17) + 0), RW(3));
L_00297C90:;
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

void F_00297CC0(Ctx *c) { /* func_00297CC0 */
ENTER(0x297cc0);
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
SET64(31, 0x297d00); SET32(16, RW(17) + 8520); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x192);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 8); if (t) goto L_00297D40; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); { F_002879A8(c); return; }
L_00297D40:;
SET64(18, (s32)rd32(c, (RW(16) + 16)));
{ int t = RD(18) != RD(3); SET64(2, (s32)rd32(c, (RW(16) + 8))); if (t) goto L_00297D80; }
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
SET32(29, RW(29) + 64); { F_002879A8(c); return; }
L_00297D80:;
SET32(16, RW(22) << 4);
SET64(8, RD(19) + RD(0));
SET32(16, RW(2) + RW(16));
SET64(5, RD(20) + RD(0));
SET32(16, RW(16) + 4);
SET64(7, RD(21) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x297da4); SET64(6, RD(0) + RD(0)); F_00298138(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(22) + RD(0));
SET64(31, 0x297db8); SET64(7, RD(16) + RD(0)); F_00284AB8(c);
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

void F_00297DE8(Ctx *c) { /* func_00297DE8 */
ENTER(0x297de8);
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
SET64(31, 0x297e20); SET32(16, RW(17) + 8520); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x191);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 8); if (t) goto L_00297E58; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); { F_002879A8(c); return; }
L_00297E58:;
SET64(18, (s32)rd32(c, (RW(16) + 16)));
{ int t = RD(18) != RD(3); SET64(2, (s32)rd32(c, (RW(16) + 8))); if (t) goto L_00297E98; }
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
SET32(29, RW(29) + 64); { F_002879A8(c); return; }
L_00297E98:;
SET32(16, RW(21) << 4);
SET64(5, RD(19) + RD(0));
SET32(16, RW(2) + RW(16));
SET64(6, RD(20) + RD(0));
SET32(16, RW(16) + 4);
SET64(8, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x297ebc); SET64(7, RD(0) + RD(0)); F_00298138(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(21) + RD(0));
SET64(31, 0x297ed0); SET64(7, RD(16) + RD(0)); F_00284AB8(c);
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

void F_00297EF8(Ctx *c) { /* func_00297EF8 */
ENTER(0x297ef8);
SET64(2, RD(0) + RD(0)); return;
}

void F_00297F00(Ctx *c) { /* func_00297F00 */
ENTER(0x297f00);
SET64(2, RD(0) + RD(0)); return;
}

void F_00297F08(Ctx *c) { /* func_00297F08 */
ENTER(0x297f08);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x297f20); SET64(17, RD(4) + RD(0)); F_00297F50(c);
SET64(31, 0x297f28); SET64(4, RD(17) + RD(0)); F_00298060(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x297f34); SET64(16, RD(2) + RD(0)); F_00297FD8(c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_00297F50(Ctx *c) { /* func_00297F50 */
ENTER(0x297f50);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 8);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x297f70); SET32(17, RW(0) + 1); F_002971C0(c);
{ int t = RD(2) == RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_00297FB8; }
SET64(31, 0x297f80); SET64(5, (s32)rd32(c, (RW(16) + 8536))); F_00285878(c);
{ int t = RD(2) != RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_00297FB8; }
SET64(31, 0x297f90);  F_00297FD0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00297FB8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 8);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 32); { F_002971A8(c); return; }
L_00297FB8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00297FD0(Ctx *c) { /* func_00297FD0 */
ENTER(0x297fd0);
SET32(2, RW(0) + 1); return;
}

void F_00297FD8(Ctx *c) { /* func_00297FD8 */
ENTER(0x297fd8);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 8);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x297ff8); SET32(17, RW(0) + 1); F_00297190(c);
{ int t = RD(2) == RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_00298040; }
SET64(31, 0x298008); SET64(5, (s32)rd32(c, (RW(16) + 8536))); F_00285838(c);
{ int t = RD(2) != RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_00298040; }
SET64(31, 0x298018);  F_00298058(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00298040; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 8);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 32); { F_00297178(c); return; }
L_00298040:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298058(Ctx *c) { /* func_00298058 */
ENTER(0x298058);
SET32(2, RW(0) + 1); return;
}

void F_00298060(Ctx *c) { /* func_00298060 */
ENTER(0x298060);
SET64(2, RD(0) + RD(0)); return;
}

void F_00298068(Ctx *c) { /* func_00298068 */
ENTER(0x298068);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(2) + 13808);
SET32(2, RW(2) + 8520);
wr32(c, (RW(2) + 8), RW(5));
SET64(31, 0x298088); SET64(6, (s32)rd32(c, (RW(2) + 16))); F_00298098(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00298098(Ctx *c) { /* func_00298098 */
ENTER(0x298098);
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
L_002980C8:;
SET64(31, 0x2980d0); SET64(4, RD(16) + RD(0)); F_00298110(c);
SET64(4, RD(19) + RD(0));
SET64(6, RD(17) + RD(0));
SET32(17, RW(17) + 1);
SET64(7, RD(16) + RD(0));
SET32(16, RW(16) + 16);
SET64(31, 0x2980ec); SET64(5, RD(18) + RD(0)); F_00284AB8(c);
SET64(2, RSD(17) < (s64)3);
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 32))); if (t) { POLL(); goto L_002980C8; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 48); return;
}

void F_00298110(Ctx *c) { /* func_00298110 */
ENTER(0x298110);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00298138(c); return; }
}

void F_00298138(Ctx *c) { /* func_00298138 */
ENTER(0x298138);
wr32(c, (RW(4) + 12), RW(8));
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 8), RW(7)); return;
}

void F_00298150(Ctx *c) { /* func_00298150 */
ENTER(0x298150);
SET64(2, RD(0) + RD(0)); return;
}

void F_00298158(Ctx *c) { /* func_00298158 */
ENTER(0x298158);
SET64(2, RD(0) + RD(0)); return;
}

void F_00298160(Ctx *c) { /* func_00298160 */
ENTER(0x298160);
SET64(2, RD(0) + RD(0)); return;
}

void F_00298168(Ctx *c) { /* func_00298168 */
ENTER(0x298168);
SET64(2, RD(0) + RD(0)); return;
}

void F_00298170(Ctx *c) { /* func_00298170 */
ENTER(0x298170);
SET64(2, RD(0) + RD(0)); return;
}

void F_00298178(Ctx *c) { /* func_00298178 */
ENTER(0x298178);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x601);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00298198(Ctx *c) { /* func_00298198 */
ENTER(0x298198);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x601);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_002981B8(Ctx *c) { /* func_002981B8 */
ENTER(0x2981b8);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x601);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_002981D8(Ctx *c) { /* func_002981D8 */
ENTER(0x2981d8);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x601);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_002981F8(Ctx *c) { /* func_002981F8 */
ENTER(0x2981f8);
SET64(2, RD(0) + RD(0)); return;
}

void F_00298200(Ctx *c) { /* func_00298200 */
ENTER(0x298200);
SET64(2, RD(0) + RD(0)); return;
}

void F_00298208(Ctx *c) { /* func_00298208 */
ENTER(0x298208);
SET64(2, RD(0) + RD(0)); return;
}

void F_00298210(Ctx *c) { /* func_00298210 */
ENTER(0x298210);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 5);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29822c); SET64(17, RD(4) + RD(0)); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00298254; }
SET64(31, 0x29823c);  F_00298268(c);
SET64(31, 0x298244); SET64(4, RD(17) + RD(0)); F_002983B8(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x298250); SET64(16, RD(2) + RD(0)); F_00298330(c);
SET64(2, RD(16) + RD(0));
L_00298254:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298268(Ctx *c) { /* func_00298268 */
ENTER(0x298268);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x298288); SET32(17, RW(0) + 1); F_002971C0(c);
{ int t = RD(2) == RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_002982D0; }
SET64(31, 0x298298); SET64(5, (s32)rd32(c, (RW(16) + 8400))); F_00285878(c);
{ int t = RD(2) != RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_002982D0; }
SET64(31, 0x2982a8);  F_002982E8(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002982D0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 6);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 32); { F_002971A8(c); return; }
L_002982D0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002982E8(Ctx *c) { /* func_002982E8 */
ENTER(0x2982e8);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 15);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x298300); SET64(16, RD(4) + RD(0)); F_00294A30(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00298310; }
SET32(2, RW(0) + 1); goto L_0029831C;
L_00298310:;
SET64(31, 0x298318);  F_002968F0(c);
SET64(2, RD(0) < RD(2));
L_0029831C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00298330(Ctx *c) { /* func_00298330 */
ENTER(0x298330);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x298350); SET32(17, RW(0) + 1); F_00297190(c);
{ int t = RD(2) == RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_00298398; }
SET64(31, 0x298360); SET64(5, (s32)rd32(c, (RW(16) + 8400))); F_00285838(c);
{ int t = RD(2) != RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_00298398; }
SET64(31, 0x298370);  F_002983B0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00298398; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 6);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 32); { F_00297178(c); return; }
L_00298398:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002983B0(Ctx *c) { /* func_002983B0 */
ENTER(0x2983b0);
SET32(2, RW(0) + 1); return;
}

void F_002983B8(Ctx *c) { /* func_002983B8 */
ENTER(0x2983b8);
SET64(2, RD(0) + RD(0)); return;
}

void F_002983C0(Ctx *c) { /* func_002983C0 */
ENTER(0x2983c0);
SET64(2, RD(0) + RD(0)); return;
}

void F_002983C8(Ctx *c) { /* func_002983C8 */
ENTER(0x2983c8);
SET64(2, RD(0) + RD(0)); return;
}

void F_002983D0(Ctx *c) { /* func_002983D0 */
ENTER(0x2983d0);
SET64(2, RD(0) + RD(0)); return;
}

void F_002983D8(Ctx *c) { /* func_002983D8 */
ENTER(0x2983d8);
SET64(2, RD(0) + RD(0)); return;
}

void F_002983E0(Ctx *c) { /* func_002983E0 */
ENTER(0x2983e0);
SET64(2, RD(0) + RD(0)); return;
}

void F_002983E8(Ctx *c) { /* func_002983E8 */
ENTER(0x2983e8);
SET64(2, RD(0) + RD(0)); return;
}

void F_002983F0(Ctx *c) { /* func_002983F0 */
ENTER(0x2983f0);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x701);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00298410(Ctx *c) { /* func_00298410 */
ENTER(0x298410);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x701);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00298430(Ctx *c) { /* func_00298430 */
ENTER(0x298430);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET32(2, RW(2) + -3);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_00298468; }
wr32(c, (RW(17) + 0), RW(0)); goto L_00298490;
L_00298468:;
SET64(31, 0x298470); SET64(5, (s32)rd32(c, (RW(16) + 8400))); F_00285750(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00298494; }
SET64(31, 0x298480); SET64(5, (s32)rd32(c, (RW(17) + 0))); F_00296478(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00298494; }
wr32(c, (RW(17) + 0), RW(0)); goto L_00298494;
L_00298490:;
SET64(2, RD(0) + RD(0));
L_00298494:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002984A8(Ctx *c) { /* func_002984A8 */
ENTER(0x2984a8);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8400)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002857A8(c); return; }
}

void F_002984C8(Ctx *c) { /* func_002984C8 */
ENTER(0x2984c8);
SET64(2, RD(0) + RD(0)); return;
}

void F_002984D0(Ctx *c) { /* func_002984D0 */
ENTER(0x2984d0);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 6384); return;
}

void F_002984E0(Ctx *c) { /* func_002984E0 */
ENTER(0x2984e0);
SET64(2, RD(4) ^ 0x2);
SET64(2, RD(2) < (u64)(s64)1); return;
}

void F_002984F0(Ctx *c) { /* func_002984F0 */
ENTER(0x2984f0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(4, RW(2) + -27620);
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RSD(2) > 0; SET32(3, RW(2) + 1); if (t) goto L_00298568; }
wr32(c, (RW(4) + 0), RW(3));
SET64(16, (s64)(s32)0x540000);
SET64(31, 0x298530); SET32(16, RW(16) + -27640); F_002984D0(c);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(31, 0x298540); SET64(5, RD(17) + RD(0)); F_00298710(c);
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -27632);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002986D0(c); return; }
L_00298568:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00298580(Ctx *c) { /* func_00298580 */
ENTER(0x298580);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(3) + -27620);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RSD(2) > 0; wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_002985B8; }
SET64(4, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -27632);
SET32(29, RW(29) + 16); { F_002986C0(c); return; }
L_002985B8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002985C8(Ctx *c) { /* func_002985C8 */
ENTER(0x2985c8);
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
SET32(4, RW(22) + -27632);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 56), RD(31));
SET64(17, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(3, RSD(3) < RSD(17));
{ int t = RD(3) == RD(0); SET64(19, (s32)rd32(c, (RW(4) + 8))); if (t) goto L_00298668; }
SET64(16, RD(0) + RD(0));
SET64(2, RSD(16) < RSD(17));
L_00298620:;
if (RD(2) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_00298648; }
SET32(2, RW(16) << 4);
SET32(16, RW(16) + 1);
SET32(18, RW(19) + RW(2));
SET64(31, 0x29863c); SET64(4, RD(18) + RD(0)); F_00298760(c);
{ int t = RD(2) == RD(0); SET64(2, RSD(16) < RSD(17)); if (t) { POLL(); goto L_00298620; } }
SET64(4, RD(18) + RD(0));
L_00298648:;
SET64(5, RD(21) + RD(0));
SET64(31, 0x298654); SET64(6, RD(20) + RD(0)); F_002986F8(c);
SET32(4, RW(22) + -27632);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(2, RD(18) + RD(0));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 4), RW(3));
L_00298668:;
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

void F_00298690(Ctx *c) { /* func_00298690 */
ENTER(0x298690);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2986a0);  F_002986E0(c);
SET64(3, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(3, RW(3) + -27632);
SET64(2, (s32)rd32(c, (RW(3) + 4)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 4), RW(2));
SET32(29, RW(29) + 16); return;
}

void F_002986C0(Ctx *c) { /* func_002986C0 */
ENTER(0x2986c0);
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0)); return;
}

void F_002986D0(Ctx *c) { /* func_002986D0 */
ENTER(0x2986d0);
wr32(c, (RW(4) + 8), RW(6));
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(4) + 4), RW(0)); return;
}

void F_002986E0(Ctx *c) { /* IVec4_SetZero */
ENTER(0x2986e0);
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0)); return;
}

void F_002986F8(Ctx *c) { /* func_002986F8 */
ENTER(0x2986f8);
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 8), RW(6));
wr32(c, (RW(4) + 0), RW(2));
wr32(c, (RW(4) + 4), RW(5)); return;
}

void F_00298710(Ctx *c) { /* func_00298710 */
ENTER(0x298710);
SET32(29, RW(29) + -32);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RSD(2) <= 0; wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0029874C; }
SET64(17, RD(4) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
L_00298738:;
SET32(17, RW(17) + 16);
SET64(31, 0x298744); SET32(16, RW(16) + -1); F_002986E0(c);
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_00298738; } }
L_0029874C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298760(Ctx *c) { /* func_00298760 */
ENTER(0x298760);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(2) < (u64)(s64)1); return;
}

void F_00298770(Ctx *c) { /* func_00298770 */
ENTER(0x298770);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x298784); SET64(16, RD(4) + RD(0)); F_002987B8(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 107); if (t) goto L_002987A4; }
SET64(2, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(2) == RD(4); SET64(3, RSD(2) < (s64)110); if (t) goto L_002987A0; }
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002987A4; }
L_002987A0:;
SET32(2, RW(0) + 1);
L_002987A4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002987B8(Ctx *c) { /* func_002987B8 */
ENTER(0x2987b8);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, RSD(2) < (s64)-1);
SET64(2, RSD(2) < (s64)2);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_002987D8; }
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002987D8; }
SET32(2, RW(0) + 1);
L_002987D8:;
 return;
}

void F_002987E0(Ctx *c) { /* func_002987E0 */
ENTER(0x2987e0);
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
SET64(31, 0x298814); SET32(17, RW(2) + 32); F_00298760(c);
if (RD(2) != RD(19)) { SET64(2, (s32)rd32(c, (RW(16) + 8))); goto L_00298828; }
SET64(2, RD(0) + RD(0)); goto L_002988B4;
L_00298828:;
SET64(2, RD(2) < (u64)(s64)2048);
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_00298848; }
SET32(3, RW(0) + -1);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(3)); goto L_002988B4;
L_00298848:;
SET64(4, RD(17) + RD(0));
SET32(6, RW(0) + 24);
SET64(31, 0x298858); SET32(5, RW(5) + 6440); F_00127180(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(29) + RD(0));
{ int t = RD(2) == RD(0); SET32(6, RW(29) + 4); if (t) goto L_00298878; }
SET32(2, RW(0) + -1);
wr32(c, (RW(16) + 0), RW(2));
SET64(2, RD(0) + RD(0)); goto L_002988B4;
L_00298878:;
SET32(2, RW(0) + 2);
SET64(31, 0x298884); wr32(c, (RW(16) + 0), RW(2)); F_00298BD0(c);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_002988B4; }
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
L_002988B4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_002988D0(Ctx *c) { /* func_002988D0 */
ENTER(0x2988d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) & 0xff);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
wr32(c, (RW(18) + 0), RW(0));
SET64(31, 0x2988f8); SET64(16, (s32)rd32(c, (RW(4) + 4))); F_00298770(c);
SET64(5, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00298924; }
SET64(31, 0x29890c);  F_00298A10(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00298920; }
wr32(c, (RW(18) + 0), RW(2)); goto L_00298924;
L_00298920:;
wr32(c, (RW(18) + 0), RW(0));
L_00298924:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00298940(Ctx *c) { /* func_00298940 */
ENTER(0x298940);
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
{ int t = RD(3) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002989F8; }
SET64(31, 0x29897c);  F_00299C90(c);
SET32(6, RW(0) + 224);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 192);
SET64(4, RD(17) + RD(0));
{ int t = RD(3) == RD(2); SET64(5, RD(16) + RD(0)); if (t) goto L_002989A8; }
{ int t = RD(3) == RD(6); SET64(2, RD(0) + RD(0)); if (t) goto L_002989D0; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_002989FC;
L_002989A8:;
SET64(31, 0x2989b0);  F_00299398(c);
SET64(4, RD(16) + RD(0));
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET64(5, RD(3) + RD(0)); if (t) goto L_002989F8; }
SET64(31, 0x2989c8);  F_00299C10(c);
wr32(c, (RW(18) + 0), RW(2)); goto L_002989F4;
L_002989D0:;
SET64(31, 0x2989d8); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(4, RD(16) + RD(0));
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET64(5, RD(3) + RD(0)); if (t) goto L_002989F8; }
SET64(31, 0x2989f0);  F_00299C50(c);
wr32(c, (RW(18) + 0), RW(2));
L_002989F4:;
SET32(2, RW(0) + 1);
L_002989F8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002989FC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00298A10(Ctx *c) { /* func_00298A10 */
ENTER(0x298a10);
SET32(3, RW(4) + 384);
SET64(7, RD(0) + RD(0));
SET64(2, rd8(c, (RW(3) + 24)));
SET64(6, RD(0) + RD(0)); goto L_00298A40;
L_00298A28:;
SET32(2, RW(6) << 6);
SET64(3, RSD(6) < (s64)26);
{ int t = RD(3) == RD(0); SET32(2, RW(4) + RW(2)); if (t) goto L_00298A50; }
SET32(3, RW(2) + 384);
SET64(2, rd8(c, (RW(3) + 24)));
L_00298A40:;
if (RD(2) != RD(5)) { SET32(6, RW(6) + 1); { POLL(); goto L_00298A28; } }
SET64(7, RD(3) + RD(0));
L_00298A50:;
SET64(2, RD(7) + RD(0)); return;
}

void F_00298A58(Ctx *c) { /* func_00298A58 */
ENTER(0x298a58);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x298a78); SET32(17, RW(2) + 64); F_00298770(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 13); if (t) goto L_00298AB4; }
SET64(31, 0x298a90);  F_001273D0(c);
SET32(2, RW(0) + 1);
ldl(c, 3, (RW(17) + 7));
ldr(c, 3, (RW(17) + 0));
lwl(c, 4, (RW(17) + 11));
lwr(c, 4, (RW(17) + 8));
sdl(c, 3, (RW(16) + 7));
sdr(c, 3, (RW(16) + 0));
swl(c, 4, (RW(16) + 11));
swr(c, 4, (RW(16) + 8));
L_00298AB4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298AC8(Ctx *c) { /* func_00298AC8 */
ENTER(0x298ac8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
wr8(c, (RW(16) + 0), (u8)RW(0));
SET64(31, 0x298ae8); SET64(17, (s32)rd32(c, (RW(4) + 4))); F_00298770(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 13); if (t) goto L_00298B24; }
SET64(31, 0x298b00);  F_001273D0(c);
SET32(2, RW(0) + 1);
ldl(c, 3, (RW(17) + 83));
ldr(c, 3, (RW(17) + 76));
lwl(c, 4, (RW(17) + 87));
lwr(c, 4, (RW(17) + 84));
sdl(c, 3, (RW(16) + 7));
sdr(c, 3, (RW(16) + 0));
swl(c, 4, (RW(16) + 11));
swr(c, 4, (RW(16) + 8));
L_00298B24:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298B38(Ctx *c) { /* func_00298B38 */
ENTER(0x298b38);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
wr8(c, (RW(16) + 0), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x298b5c); SET32(17, RW(2) + 96); F_002987B8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 33); if (t) goto L_00298BB8; }
SET64(31, 0x298b74);  F_001273D0(c);
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
L_00298BB8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298BD0(Ctx *c) { /* func_00298BD0 */
ENTER(0x298bd0);
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
SET64(31, 0x298c08); SET32(16, RW(2) + 32); F_00298B38(c);
SET64(4, RD(29) + RD(0));
SET32(5, RW(29) + 48);
{ int t = RD(2) == RD(0); SET32(6, RW(29) + 52); if (t) goto L_00298C80; }
SET64(19, rd8(c, (RW(16) + 25)));
SET64(31, 0x298c24); SET64(16, rd8(c, (RW(16) + 24))); F_00298EB8(c);
SET32(3, RW(16) << 1);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + RW(16)); if (t) goto L_00298C80; }
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
if (RD(3) != RD(0)) { wr32(c, (RW(17) + 0), RW(4)); goto L_00298C78; }
wr32(c, (RW(17) + 0), RW(16));
wr32(c, (RW(18) + 0), RW(19)); goto L_00298C7C;
L_00298C78:;
wr32(c, (RW(18) + 0), RW(5));
L_00298C7C:;
SET32(2, RW(0) + 1);
L_00298C80:;
SET64(16, rd64(c, (RW(29) + 64)));
SET64(17, rd64(c, (RW(29) + 72)));
SET64(18, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 88)));
SET64(31, rd64(c, (RW(29) + 96)));
SET32(29, RW(29) + 112); return;
}

void F_00298CA0(Ctx *c) { /* func_00298CA0 */
ENTER(0x298ca0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
wr8(c, (RW(16) + 0), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x298cc4); SET32(17, RW(2) + 224); F_00298770(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 65); if (t) goto L_00298D60; }
SET64(31, 0x298cdc);  F_001273D0(c);
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
L_00298D60:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298D78(Ctx *c) { /* func_00298D78 */
ENTER(0x298d78);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x298d9c); SET32(16, RW(2) + 128); F_00298770(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00298DB4; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_00298DB4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298DC8(Ctx *c) { /* func_00298DC8 */
ENTER(0x298dc8);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x298df0); SET32(16, RW(3) + 128); F_00298770(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00298E08; }
SET64(3, rd8(c, (RW(16) + 4)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_00298E08:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298E18(Ctx *c) { /* func_00298E18 */
ENTER(0x298e18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x298e3c); SET32(16, RW(2) + 128); F_00298770(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00298E54; }
SET64(3, (s16)rd16(c, (RW(16) + 8)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_00298E54:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298E68(Ctx *c) { /* func_00298E68 */
ENTER(0x298e68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x298e8c); SET32(16, RW(2) + 128); F_00298770(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00298EA4; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_00298EA4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298EB8(Ctx *c) { /* func_00298EB8 */
ENTER(0x298eb8);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
SET32(5, RW(2) + 6472);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x298edc); SET64(17, RD(6) + RD(0)); F_0012AB88(c);
SET64(5, RD(16) + RD(0));
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(3) + 4); if (t) goto L_00298F04; }
SET64(31, 0x298ef4);  F_00298F18(c);
SET64(5, RD(17) + RD(0));
SET64(31, 0x298f00); SET32(4, RW(2) + 1); F_00298F18(c);
SET32(2, RW(0) + 1);
L_00298F04:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298F18(Ctx *c) { /* func_00298F18 */
ENTER(0x298f18);
SET64(3, (s8)rd8(c, (RW(4) + 0)));
SET32(2, RW(0) + 46);
{ int t = RD(3) == RD(2); SET64(6, RD(0) + RD(0)); if (t) goto L_00298F94; }
SET32(2, RW(0) + 32);
if (RD(3) == RD(2)) { wr32(c, (RW(5) + 0), RW(6)); goto L_00298F98; }
if (RD(3) == RD(0)) { wr32(c, (RW(5) + 0), RW(6)); goto L_00298F98; }
SET32(2, RW(3) + -48);
SET64(2, RD(2) < (u64)(s64)10);
if (RD(2) == RD(0)) { wr32(c, (RW(5) + 0), RW(6)); goto L_00298F98; }
SET32(8, RW(0) + 46);
SET32(7, RW(0) + 32);
SET32(2, RW(6) << 2);
L_00298F58:;
SET32(4, RW(4) + 1);
SET32(2, RW(2) + RW(6));
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(3));
SET64(3, (s8)rd8(c, (RW(4) + 0)));
SET32(6, RW(2) + -48);
{ int t = RD(3) == RD(8); SET32(2, RW(3) + -48); if (t) goto L_00298F94; }
if (RD(3) == RD(7)) { wr32(c, (RW(5) + 0), RW(6)); goto L_00298F98; }
if (RD(3) == RD(0)) { wr32(c, (RW(5) + 0), RW(6)); goto L_00298F98; }
SET64(2, RD(2) < (u64)(s64)10);
if (RD(2) != RD(0)) { SET32(2, RW(6) << 2); { POLL(); goto L_00298F58; } }
L_00298F94:;
wr32(c, (RW(5) + 0), RW(6));
L_00298F98:;
SET64(2, RD(4) + RD(0)); return;
}

void F_00298FA0(Ctx *c) { /* func_00298FA0 */
ENTER(0x298fa0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x298fc4); SET32(16, RW(2) + 176); F_00298770(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00298FDC; }
SET64(3, rd8(c, (RW(16) + 0)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_00298FDC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00298FF0(Ctx *c) { /* func_00298FF0 */
ENTER(0x298ff0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x299014); SET32(16, RW(2) + 176); F_00298770(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029902C; }
SET64(3, rd8(c, (RW(16) + 1)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029902C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00299040(Ctx *c) { /* func_00299040 */
ENTER(0x299040);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x299064); SET32(16, RW(2) + 176); F_00298770(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029907C; }
SET64(3, rd8(c, (RW(16) + 2)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_0029907C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00299090(Ctx *c) { /* func_00299090 */
ENTER(0x299090);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x2990b4); SET32(16, RW(2) + 176); F_00298770(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002990CC; }
SET64(3, rd8(c, (RW(16) + 3)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_002990CC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002990E0(Ctx *c) { /* func_002990E0 */
ENTER(0x2990e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
wr32(c, (RW(18) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x29910c); SET32(17, RW(2) + 176); F_00298770(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00299134; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(3, RSD(3) < (s64)110);
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00299130; }
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_00299130:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00299134:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00299148(Ctx *c) { /* func_00299148 */
ENTER(0x299148);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29916c); SET32(16, RW(2) + 176); F_00298770(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00299184; }
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_00299184:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00299198(Ctx *c) { /* func_00299198 */
ENTER(0x299198);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x2991bc); SET32(16, RW(2) + 176); F_00298770(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002991D4; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_002991D4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002991E8(Ctx *c) { /* func_002991E8 */
ENTER(0x2991e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(17) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(31, 0x29920c); SET32(16, RW(2) + 176); F_00298770(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00299224; }
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_00299224:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00299238(Ctx *c) { /* func_00299238 */
ENTER(0x299238);
SET64(6, RD(5) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 0), RW(0));
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 12)));
SET64(3, RSD(3) < (s64)225);
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 176); if (t) goto L_00299264; }
SET64(3, (s32)rd32(c, (RW(5) + 20)));
SET32(2, RW(0) + 1);
wr32(c, (RW(6) + 0), RW(3));
L_00299264:;
 return;
}

void F_00299270(Ctx *c) { /* func_00299270 */
ENTER(0x299270);
SET64(6, RD(5) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 0), RW(0));
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 12)));
SET64(3, RSD(3) < (s64)225);
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 176); if (t) goto L_0029929C; }
SET64(3, (s32)rd32(c, (RW(5) + 24)));
SET32(2, RW(0) + 1);
wr32(c, (RW(6) + 0), RW(3));
L_0029929C:;
 return;
}

void F_002992A8(Ctx *c) { /* func_002992A8 */
ENTER(0x2992a8);
SET32(29, RW(29) + -32);
SET64(5, RD(5) & 0xff);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2992c8); wr8(c, (RW(16) + 0), (u8)RW(0)); F_00299398(c);
SET64(4, RD(16) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(17) == RD(0); SET32(6, RW(0) + 13); if (t) goto L_00299308; }
SET64(31, 0x2992e4);  F_001273D0(c);
SET32(2, RW(0) + 1);
ldl(c, 3, (RW(17) + 7));
ldr(c, 3, (RW(17) + 0));
lwl(c, 4, (RW(17) + 11));
lwr(c, 4, (RW(17) + 8));
sdl(c, 3, (RW(16) + 7));
sdr(c, 3, (RW(16) + 0));
swl(c, 4, (RW(16) + 11));
swr(c, 4, (RW(16) + 8));
L_00299308:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00299320(Ctx *c) { /* func_00299320 */
ENTER(0x299320);
SET32(29, RW(29) + -32);
SET64(5, RD(5) & 0xff);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x299340); wr8(c, (RW(16) + 0), (u8)RW(0)); F_00299398(c);
SET64(4, RD(16) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(17) == RD(0); SET32(6, RW(0) + 13); if (t) goto L_00299380; }
SET64(31, 0x29935c);  F_001273D0(c);
SET32(2, RW(0) + 1);
ldl(c, 3, (RW(17) + 19));
ldr(c, 3, (RW(17) + 12));
lwl(c, 4, (RW(17) + 23));
lwr(c, 4, (RW(17) + 20));
sdl(c, 3, (RW(16) + 7));
sdr(c, 3, (RW(16) + 0));
swl(c, 4, (RW(16) + 11));
swr(c, 4, (RW(16) + 8));
L_00299380:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00299398(Ctx *c) { /* func_00299398 */
ENTER(0x299398);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2993b4); SET64(17, (s32)rd32(c, (RW(4) + 4))); F_00298770(c);
SET64(5, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002993D8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00298A10(c); return; }
L_002993D8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002993F0(Ctx *c) { /* func_002993F0 */
ENTER(0x2993f0);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(2));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29941c); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00299448; }
SET64(31, 0x299430);  F_00299C90(c);
SET32(3, RW(0) + 192);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00299448; }
SET64(3, rd8(c, (RW(17) + 25)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_00299448:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00299460(Ctx *c) { /* func_00299460 */
ENTER(0x299460);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x299488); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002994C8; }
SET64(31, 0x29949c);  F_00299C90(c);
SET32(3, RW(0) + 192);
{ int t = RD(2) == RD(3); SET32(4, RW(0) + 1); if (t) goto L_002994B0; }
SET64(2, RD(0) + RD(0)); goto L_002994C8;
L_002994B0:;
SET64(3, rd8(c, (RW(17) + 25)));
{ int t = RD(3) != RD(4); SET64(2, RD(0) + RD(0)); if (t) goto L_002994C8; }
SET64(3, rd8(c, (RW(17) + 26)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_002994C8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002994E0(Ctx *c) { /* func_002994E0 */
ENTER(0x2994e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x299508); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00299534; }
SET64(31, 0x29951c);  F_00299C90(c);
SET32(3, RW(0) + 192);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00299534; }
SET64(3, rd8(c, (RW(17) + 27)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_00299534:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00299550(Ctx *c) { /* func_00299550 */
ENTER(0x299550);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x299578); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002995A4; }
SET64(31, 0x29958c);  F_00299C90(c);
SET32(3, RW(0) + 192);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_002995A4; }
SET64(3, (s32)rd32(c, (RW(17) + 28)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_002995A4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002995C0(Ctx *c) { /* func_002995C0 */
ENTER(0x2995c0);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(2));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2995ec); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00299618; }
SET64(31, 0x299600);  F_00299C90(c);
SET32(3, RW(0) + 224);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00299618; }
SET64(3, rd8(c, (RW(17) + 25)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_00299618:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00299630(Ctx *c) { /* func_00299630 */
ENTER(0x299630);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x299658); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029968C; }
SET64(31, 0x29966c);  F_00299C90(c);
SET32(3, RW(0) + 224);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029968C; }
SET64(3, rd16(c, (RW(17) + 26)));
SET32(2, RW(0) + 1);
SET64(4, RD(3) ^ 0xffff);
if (RD(4) == 0) SET64(3, RD(0));
wr32(c, (RW(18) + 0), RW(3));
L_0029968C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002996A8(Ctx *c) { /* func_002996A8 */
ENTER(0x2996a8);
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
SET64(31, 0x2996dc); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029973C; }
SET64(31, 0x2996f0);  F_00299C90(c);
SET32(3, RW(0) + 224);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029973C; }
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
L_0029973C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00299758(Ctx *c) { /* func_00299758 */
ENTER(0x299758);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x299780); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002997B0; }
SET64(31, 0x299794);  F_00299C90(c);
SET32(3, RW(0) + 224);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_002997B0; }
SET64(31, 0x2997a8); SET64(4, rd8(c, (RW(17) + 31))); F_00299BA0(c);
wr32(c, (RW(18) + 0), RW(2));
SET32(2, RW(0) + 1);
L_002997B0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002997C8(Ctx *c) { /* func_002997C8 */
ENTER(0x2997c8);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(2));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2997f4); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00299820; }
SET64(31, 0x29980c);  F_00299C50(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00299824; }
SET64(3, rd8(c, (RW(17) + 33)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_00299820:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00299824:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00299838(Ctx *c) { /* func_00299838 */
ENTER(0x299838);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(2));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x299864); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00299890; }
SET64(31, 0x29987c);  F_00299C50(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00299894; }
SET64(3, rd8(c, (RW(17) + 34)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_00299890:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00299894:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002998A8(Ctx *c) { /* func_002998A8 */
ENTER(0x2998a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2998d0); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00299900; }
SET64(31, 0x2998e8);  F_00299C50(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00299904; }
SET64(3, rd8(c, (RW(17) + 35)));
SET32(2, RW(0) + 1);
SET64(3, RD(3) & 0x1);
wr32(c, (RW(18) + 0), RW(3));
L_00299900:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00299904:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00299918(Ctx *c) { /* func_00299918 */
ENTER(0x299918);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x299940); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00299974; }
SET64(31, 0x299958);  F_00299C50(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00299978; }
SET64(3, rd8(c, (RW(17) + 35)));
SET32(2, RW(0) + 1);
SET64(3, RD(3) & 0x10);
SET64(3, RD(0) < RD(3));
wr32(c, (RW(18) + 0), RW(3));
L_00299974:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00299978:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00299990(Ctx *c) { /* func_00299990 */
ENTER(0x299990);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr32(c, (RW(18) + 0), RW(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2999b8); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002999E4; }
SET64(31, 0x2999d0);  F_00299C50(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_002999E8; }
SET64(3, rd8(c, (RW(17) + 36)));
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_002999E4:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002999E8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00299A00(Ctx *c) { /* func_00299A00 */
ENTER(0x299a00);
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
SET64(31, 0x299a30); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00299A68; }
SET64(31, 0x299a48);  F_00299C50(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00299A6C; }
SET64(2, rd8(c, (RW(17) + 37)));
SET64(3, RSD(2) < (s64)64);
{ int t = RD(3) != RD(0); wr32(c, (RW(18) + 0), RW(2)); if (t) goto L_00299A64; }
wr32(c, (RW(18) + 0), RW(19));
L_00299A64:;
SET32(2, RW(0) + 1);
L_00299A68:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00299A6C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00299A88(Ctx *c) { /* func_00299A88 */
ENTER(0x299a88);
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
SET64(31, 0x299ab8); SET64(5, RD(16) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00299AF0; }
SET64(31, 0x299ad0);  F_00299C50(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00299AF4; }
SET64(2, rd8(c, (RW(17) + 38)));
SET64(3, RSD(2) < (s64)64);
{ int t = RD(3) != RD(0); wr32(c, (RW(18) + 0), RW(2)); if (t) goto L_00299AEC; }
wr32(c, (RW(18) + 0), RW(19));
L_00299AEC:;
SET32(2, RW(0) + 1);
L_00299AF0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00299AF4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00299B10(Ctx *c) { /* func_00299B10 */
ENTER(0x299b10);
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
SET64(31, 0x299b44); SET64(18, RD(4) + RD(0)); F_00299398(c);
SET64(17, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00299B80; }
SET64(31, 0x299b5c);  F_00299C50(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00299B84; }
SET64(3, (s32)rd32(c, (RW(18) + 12)));
SET64(3, RSD(3) < (s64)210);
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00299B84; }
SET64(3, rd8(c, (RW(17) + 39)));
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 0), RW(3));
L_00299B80:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00299B84:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

static void B_00299BA0(Ctx *c, u32 entry) { /* func_00299BA0 */
ENTER(entry);
switch (entry) { case 0x299bc8: goto L_00299BC8; case 0x299bd0: goto L_00299BD0; case 0x299bd8: goto L_00299BD8; case 0x299be0: goto L_00299BE0; case 0x299be8: goto L_00299BE8; case 0x299bf0: goto L_00299BF0; case 0x299bf8: goto L_00299BF8; case 0x299c00: goto L_00299C00; }
SET32(4, RW(4) + -1);
SET64(2, RD(4) < (u64)(s64)8);
{ int t = RD(2) == RD(0);  if (t) goto L_00299C08; }
SET32(2, RW(4) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 6480)));
{ u32 t = RW(3);  switch (t) { case 0x299bc8: goto L_00299BC8; case 0x299bd0: goto L_00299BD0; case 0x299bd8: goto L_00299BD8; case 0x299be0: goto L_00299BE0; case 0x299be8: goto L_00299BE8; case 0x299bf0: goto L_00299BF0; case 0x299bf8: goto L_00299BF8; case 0x299c00: goto L_00299C00; default: rt_jump(c, t); return; } }
L_00299BC8:;
SET32(2, RW(0) + 23976); return;
L_00299BD0:;
SET32(2, RW(0) + 24000); return;
L_00299BD8:;
SET32(2, RW(0) + 25000); return;
L_00299BE0:;
SET32(2, RW(0) + 29970); return;
L_00299BE8:;
SET32(2, RW(0) + 30000); return;
L_00299BF0:;
SET64(2, RD(0) | 0xc350); return;
L_00299BF8:;
SET64(2, RD(0) | 0xea24); return;
L_00299C00:;
SET64(2, RD(0) | 0xea60); return;
L_00299C08:;
SET64(2, RD(0) + RD(0)); return;
}
void F_00299BA0(Ctx *c) { B_00299BA0(c, 0x299ba0); }
void F_00299BC8(Ctx *c) { B_00299BA0(c, 0x299bc8); }
void F_00299BD0(Ctx *c) { B_00299BA0(c, 0x299bd0); }
void F_00299BD8(Ctx *c) { B_00299BA0(c, 0x299bd8); }
void F_00299BE0(Ctx *c) { B_00299BA0(c, 0x299be0); }
void F_00299BE8(Ctx *c) { B_00299BA0(c, 0x299be8); }
void F_00299BF0(Ctx *c) { B_00299BA0(c, 0x299bf0); }
void F_00299BF8(Ctx *c) { B_00299BA0(c, 0x299bf8); }
void F_00299C00(Ctx *c) { B_00299BA0(c, 0x299c00); }

void F_00299C10(Ctx *c) { /* func_00299C10 */
ENTER(0x299c10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x299c24); SET64(16, RD(5) + RD(0)); F_00299C90(c);
SET32(3, RW(0) + 192);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00299C40; }
SET64(3, rd8(c, (RW(16) + 32)));
SET64(2, RD(0) < RD(3));
SET64(3, RD(3) < (u64)(s64)2);
if (RD(3) == 0) SET64(2, RD(0));
L_00299C40:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00299C50(Ctx *c) { /* func_00299C50 */
ENTER(0x299c50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x299c64); SET64(16, RD(5) + RD(0)); F_00299C90(c);
SET32(3, RW(0) + 224);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00299C80; }
SET64(3, rd8(c, (RW(16) + 32)));
SET64(2, RD(0) < RD(3));
SET64(3, RD(3) < (u64)(s64)2);
if (RD(3) == 0) SET64(2, RD(0));
L_00299C80:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00299C90(Ctx *c) { /* func_00299C90 */
ENTER(0x299c90);
SET64(5, RD(4) + RD(0));
SET32(2, RW(0) + 192);
SET32(3, RW(5) + -192);
SET32(4, RW(5) + -224);
SET64(3, RD(3) < (u64)(s64)32);
{ int t = RD(3) != RD(0); SET64(4, RD(4) < (u64)(s64)16); if (t) goto L_00299CCC; }
{ int t = RD(4) != RD(0); SET32(2, RW(0) + 224); if (t) goto L_00299CCC; }
SET32(2, RW(0) + 189);
{ int t = RD(5) == RD(2); SET32(3, RW(0) + 191); if (t) goto L_00299CCC; }
{ int t = RD(5) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00299CCC; }
SET32(2, RW(0) + 189);
L_00299CCC:;
 return;
}

void F_00299CD8(Ctx *c) { /* func_00299CD8 */
ENTER(0x299cd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00299CF0(c); return; }
}

void F_00299CF0(Ctx *c) { /* func_00299CF0 */
ENTER(0x299cf0);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x410000);
SET32(16, RW(16) + -1224);
SET32(6, RW(0) + 200);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x299d14); SET64(4, RD(16) + RD(0)); F_001273D0(c);
SET32(3, RW(0) + 8);
wr32(c, (RW(16) + 4), RW(3));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00299D30(Ctx *c) { /* func_00299D30 */
ENTER(0x299d30);
 return;
}

void F_00299D38(Ctx *c) { /* func_00299D38 */
ENTER(0x299d38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x299d4c);  F_00299D90(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00299D80; }
SET64(31, 0x299d60);  F_00299DE0(c);
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + -1224);
SET32(5, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(16) + RD(0));
SET32(4, RW(4) + 1);
wr32(c, (RW(3) + 0), RW(4));
wr32(c, (RW(16) + 0), RW(5));
L_00299D80:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00299D90(Ctx *c) { /* func_00299D90 */
ENTER(0x299d90);
SET64(2, (s64)(s32)0x410000);
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) + -1224);
SET64(5, (s32)rd32(c, (RW(2) + 4)));
{ int t = RSD(5) <= 0; SET32(2, RW(2) + 8); if (t) goto L_00299DD4; }
SET64(4, RD(2) + RD(0));
L_00299DB0:;
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(4) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(4) + 24); if (t) goto L_00299DD8; }
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(5));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00299DB0; } }
L_00299DD4:;
SET64(2, RD(0) + RD(0));
L_00299DD8:;
 return;
}

void F_00299DE0(Ctx *c) { /* func_00299DE0 */
ENTER(0x299de0);
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

void F_00299E20(Ctx *c) { /* func_00299E20 */
ENTER(0x299e20);
{ int t = RD(4) == RD(0);  if (t) goto L_00299E40; }
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + -1224);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 0), RW(2));
L_00299E40:;
 return;
}

void F_00299E48(Ctx *c) { /* func_00299E48 */
ENTER(0x299e48);
SET32(29, RW(29) + -16);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET32(2, RW(16) + 8);
SET64(6, (s32)rd32(c, (RW(2) + 8)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x299e70); SET64(5, (s32)rd32(c, (RW(2) + 4))); F_0026B4B0(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00299E88(Ctx *c) { /* func_00299E88 */
ENTER(0x299e88);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(4, RD(6) + RD(0));
SET64(7, rd8(c, (RW(2) + 22)));
SET64(5, rd8(c, (RW(2) + 20)));
SET64(6, rd8(c, (RW(2) + 21)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0026B700(c); return; }
}

void F_00299EB0(Ctx *c) { /* func_00299EB0 */
ENTER(0x299eb0);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(4, RD(6) + RD(0));
SET64(7, rd8(c, (RW(2) + 22)));
SET64(5, rd8(c, (RW(2) + 20)));
SET64(6, rd8(c, (RW(2) + 21)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0026B958(c); return; }
}

void F_00299ED8(Ctx *c) { /* func_00299ED8 */
ENTER(0x299ed8);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void F_00299EE0(Ctx *c) { /* func_00299EE0 */
ENTER(0x299ee0);
SET32(2, RW(4) + 8);
SET32(3, RW(0) + 1);
wr32(c, (RW(2) + 8), RW(6));
wr32(c, (RW(2) + 0), RW(7));
wr32(c, (RW(2) + 4), RW(5));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void F_00299F00(Ctx *c) { /* func_00299F00 */
ENTER(0x299f00);
SET32(4, RW(4) + 8);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(7) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(5) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(6) + 0), RW(2)); return;
}

void F_00299F20(Ctx *c) { /* func_00299F20 */
ENTER(0x299f20);
SET32(4, RW(4) + 20);
wr8(c, (RW(4) + 2), (u8)RW(7));
wr8(c, (RW(4) + 0), (u8)RW(5));
wr8(c, (RW(4) + 1), (u8)RW(6)); return;
}

void F_00299F38(Ctx *c) { /* func_00299F38 */
ENTER(0x299f38);
SET32(4, RW(4) + 20);
SET64(2, rd8(c, (RW(4) + 0)));
wr8(c, (RW(5) + 0), (u8)RW(2));
SET64(3, rd8(c, (RW(4) + 1)));
wr8(c, (RW(6) + 0), (u8)RW(3));
SET64(2, rd8(c, (RW(4) + 2)));
wr8(c, (RW(7) + 0), (u8)RW(2)); return;
}

void F_00299F58(Ctx *c) { /* func_00299F58 */
ENTER(0x299f58);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(2) + 72), RW(8));
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + 68), RW(7));
SET32(29, RW(29) + 16); { F_0029AD38(c); return; }
}

void F_00299F78(Ctx *c) { /* func_00299F78 */
ENTER(0x299f78);
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

void F_00299FA0(Ctx *c) { /* func_00299FA0 */
ENTER(0x299fa0);
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

void F_00299FC8(Ctx *c) { /* func_00299FC8 */
ENTER(0x299fc8);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 97);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) == RD(2); SET64(2, RSD(3) < (s64)98); if (t) goto L_0029A090; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 257); if (t) goto L_0029A030; }
SET32(2, RW(0) + 49);
{ int t = RD(3) == RD(2); SET64(2, RSD(3) < (s64)50); if (t) goto L_0029A090; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 65); if (t) goto L_0029A018; }
SET32(2, RW(0) + 17);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 33); if (t) goto L_0029A090; }
{ int t = RD(3) == RD(2); SET64(6, (s64)(s32)0x4b0000); if (t) goto L_0029A078; }
SET64(4, RD(0) + RD(0)); goto L_0029A084;
L_0029A018:;
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 81); if (t) goto L_0029A090; }
{ int t = RD(3) == RD(2); SET64(6, (s64)(s32)0x4b0000); if (t) goto L_0029A090; }
SET64(4, RD(0) + RD(0)); goto L_0029A084;
L_0029A030:;
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_0029A094; }
SET64(2, RSD(3) < (s64)258);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 273); if (t) goto L_0029A060; }
SET32(2, RW(0) + 113);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 241); if (t) goto L_0029A090; }
{ int t = RD(3) == RD(2); SET64(6, (s64)(s32)0x4b0000); if (t) goto L_0029A090; }
SET64(4, RD(0) + RD(0)); goto L_0029A084;
L_0029A060:;
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 4097); if (t) goto L_0029A090; }
{ int t = RD(3) != RD(2); SET64(6, (s64)(s32)0x4b0000); if (t) goto L_0029A080; }
SET64(2, RD(0) + RD(0)); goto L_0029A094;
L_0029A078:;
SET32(2, RW(0) + 1); goto L_0029A094;
L_0029A080:;
SET64(4, RD(0) + RD(0));
L_0029A084:;
SET32(6, RW(6) + 6512);
SET64(31, 0x29a090); SET64(5, RD(0) + RD(0)); F_0029A928(c);
L_0029A090:;
SET64(2, RD(0) + RD(0));
L_0029A094:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0029A0A0(Ctx *c) { /* func_0029A0A0 */
ENTER(0x29a0a0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 4);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 81);
{ int t = RD(5) == RD(16); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029A0DC; }
SET32(3, RW(0) + 97);
{ int t = RD(5) == RD(3); SET32(2, RW(0) + 5); if (t) goto L_0029A0DC; }
SET64(31, 0x29a0cc);  F_0029A9E0(c);
SET32(4, RW(0) + 5);
SET64(3, RD(2) ^ RD(16));
SET32(2, RW(0) + 4);
if (RD(3) != 0) SET64(2, RD(4));
L_0029A0DC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0029A0F0(Ctx *c) { /* func_0029A0F0 */
ENTER(0x29a0f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029A108(c); return; }
}

static void B_0029A108(Ctx *c, u32 entry) { /* func_0029A108 */
ENTER(entry);
switch (entry) { case 0x29a160: goto L_0029A160; case 0x29a180: goto L_0029A180; case 0x29a1a0: goto L_0029A1A0; case 0x29a1c0: goto L_0029A1C0; case 0x29a1e0: goto L_0029A1E0; case 0x29a200: goto L_0029A200; case 0x29a220: goto L_0029A220; case 0x29a240: goto L_0029A240; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET64(5, RD(18) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29a130); SET64(16, RD(4) + RD(0)); F_0029A280(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029A268; }
SET64(2, RD(18) < (u64)(s64)101);
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 60), RW(18)); if (t) goto L_0029A240; }
SET32(2, RW(18) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 6624)));
{ u32 t = RW(3);  switch (t) { case 0x29a160: goto L_0029A160; case 0x29a180: goto L_0029A180; case 0x29a1a0: goto L_0029A1A0; case 0x29a1c0: goto L_0029A1C0; case 0x29a1e0: goto L_0029A1E0; case 0x29a200: goto L_0029A200; case 0x29a220: goto L_0029A220; case 0x29a240: goto L_0029A240; default: rt_jump(c, t); return; } }
L_0029A160:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0029A300(c); return; }
L_0029A180:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0029A3F0(c); return; }
L_0029A1A0:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0029A410(c); return; }
L_0029A1C0:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0029A430(c); return; }
L_0029A1E0:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0029A450(c); return; }
L_0029A200:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0029A468(c); return; }
L_0029A220:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0029A320(c); return; }
L_0029A240:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, (s64)(s32)0x4b0000);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(6, RW(6) + 6560);
SET32(29, RW(29) + 32); { F_0029A928(c); return; }
L_0029A268:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}
void F_0029A108(Ctx *c) { B_0029A108(c, 0x29a108); }
void F_0029A160(Ctx *c) { B_0029A108(c, 0x29a160); }
void F_0029A180(Ctx *c) { B_0029A108(c, 0x29a180); }
void F_0029A1A0(Ctx *c) { B_0029A108(c, 0x29a1a0); }
void F_0029A1C0(Ctx *c) { B_0029A108(c, 0x29a1c0); }
void F_0029A1E0(Ctx *c) { B_0029A108(c, 0x29a1e0); }
void F_0029A200(Ctx *c) { B_0029A108(c, 0x29a200); }
void F_0029A220(Ctx *c) { B_0029A108(c, 0x29a220); }
void F_0029A240(Ctx *c) { B_0029A108(c, 0x29a240); }

static void B_0029A280(Ctx *c, u32 entry) { /* func_0029A280 */
ENTER(entry);
switch (entry) { case 0x29a2d0: goto L_0029A2D0; case 0x29a2e4: goto L_0029A2E4; case 0x29a2e8: goto L_0029A2E8; }
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 100);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 1);
wr64(c, (RW(29) + 8), RD(31));
SET64(6, (s32)rd32(c, (RW(4) + 60)));
{ int t = RD(6) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0029A2EC; }
{ int t = RD(6) != RD(5); SET64(2, RD(16) + RD(0)); if (t) goto L_0029A2EC; }
SET64(2, RD(5) < (u64)(s64)101);
{ int t = RD(2) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_0029A2EC; }
SET32(2, RW(5) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 7040)));
{ u32 t = RW(3);  switch (t) { case 0x29a2d0: goto L_0029A2D0; case 0x29a2e4: goto L_0029A2E4; case 0x29a2e8: goto L_0029A2E8; default: rt_jump(c, t); return; } }
L_0029A2D0:;
SET64(31, 0x29a2d8); SET64(4, (s32)rd32(c, (RW(4) + 52))); F_00299ED8(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(2, RD(16) + RD(0)); if (t) goto L_0029A2EC; }
L_0029A2E4:;
SET64(16, RD(0) + RD(0));
L_0029A2E8:;
SET64(2, RD(16) + RD(0));
L_0029A2EC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}
void F_0029A280(Ctx *c) { B_0029A280(c, 0x29a280); }
void F_0029A2D0(Ctx *c) { B_0029A280(c, 0x29a2d0); }
void F_0029A2E4(Ctx *c) { B_0029A280(c, 0x29a2e4); }
void F_0029A2E8(Ctx *c) { B_0029A280(c, 0x29a2e8); }

void F_0029A300(Ctx *c) { /* func_0029A300 */
ENTER(0x29a300);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, (s32)rd32(c, (RW(4) + 64)));
SET64(5, (s32)rd32(c, (RW(5) + 76)));
SET64(4, (s32)rd32(c, (RW(4) + 40)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029B578(c); return; }
}

void F_0029A320(Ctx *c) { /* func_0029A320 */
ENTER(0x29a320);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029A338(c); return; }
}

void F_0029A338(Ctx *c) { /* func_0029A338 */
ENTER(0x29a338);
SET32(5, RW(0) + 15);
SET32(2, RW(4) + 15);
L_0029A340:;
SET32(5, RW(5) + -1);
wr8(c, (RW(2) + 0), (u8)RW(0));
{ int t = RSD(5) >= 0; SET32(2, RW(2) + -1); if (t) { POLL(); goto L_0029A340; } }
SET64(1, (s64)(s32)0x3f140000);
SET64(1, RD(1) | 0xfdf3);
c->f[2].u = RW(1);
SET32(5, RW(0) + 16);
SET64(1, (s64)(s32)0x4f000000);
c->f[1].u = RW(1);
SET64(7, (s64)(s32)0x80000000);
L_0029A378:;
SET32(2, RW(5) + -16);
SET32(6, RW(4) + RW(5));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
SET32(5, RW(5) + 1);
c->f[0].f = fpu(F(0) * F(2));
c->fcc = F(1) <= F(0);
c->f[3].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[3].u);
{ int t = !c->fcc; SET64(3, RSD(5) < (s64)236); if (t) goto L_0029A3B4; }
c->f[0].f = fpu(F(0) - F(1));
c->f[3].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[3].u);
SET64(2, RD(2) | RD(7));
L_0029A3B4:;
{ int t = RD(3) != RD(0); wr8(c, (RW(6) + 0), (u8)RW(2)); if (t) { POLL(); goto L_0029A378; } }
SET32(5, RW(0) + 236);
SET32(6, RW(0) + -128);
L_0029A3C8:;
SET32(3, RW(4) + RW(5));
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < (s64)256);
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 0), (u8)RW(6)); if (t) { POLL(); goto L_0029A3C8; } }
 return;
}

void F_0029A3F0(Ctx *c) { /* func_0029A3F0 */
ENTER(0x29a3f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, (s32)rd32(c, (RW(4) + 64)));
SET64(5, (s32)rd32(c, (RW(5) + 76)));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00299E48(c); return; }
}

void F_0029A410(Ctx *c) { /* func_0029A410 */
ENTER(0x29a410);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, (s32)rd32(c, (RW(4) + 64)));
SET64(5, (s32)rd32(c, (RW(5) + 76)));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00299E88(c); return; }
}

void F_0029A430(Ctx *c) { /* func_0029A430 */
ENTER(0x29a430);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, (s32)rd32(c, (RW(4) + 64)));
SET64(5, (s32)rd32(c, (RW(5) + 76)));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00299EB0(c); return; }
}

void F_0029A450(Ctx *c) { /* func_0029A450 */
ENTER(0x29a450);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0026BBB8(c); return; }
}

void F_0029A468(Ctx *c) { /* func_0029A468 */
ENTER(0x29a468);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0026BBB0(c); return; }
}

void F_0029A480(Ctx *c) { /* func_0029A480 */
ENTER(0x29a480);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29a4a0); SET64(4, (s32)rd32(c, (RW(16) + 40))); F_0029B948(c);
SET64(6, (s64)(s32)0x4b0000);
SET32(3, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 16);
{ int t = RD(2) == RD(3); SET32(6, RW(6) + 7448); if (t) goto L_0029A4D0; }
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029A928(c); return; }
L_0029A4D0:;
SET64(31, 0x29a4d8);  F_0029BEB8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029A300(c); return; }
}

void F_0029A4F8(Ctx *c) { /* func_0029A4F8 */
ENTER(0x29a4f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29a518); SET64(4, (s32)rd32(c, (RW(16) + 40))); F_0029B948(c);
SET64(6, (s64)(s32)0x4b0000);
SET32(3, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 32);
{ int t = RD(2) == RD(3); SET32(6, RW(6) + 7496); if (t) goto L_0029A548; }
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029A928(c); return; }
L_0029A548:;
SET64(31, 0x29a550);  F_0029BEB8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029A300(c); return; }
}

void F_0029A570(Ctx *c) { /* func_0029A570 */
ENTER(0x29a570);
SET32(2, RW(0) + 17); return;
}

void F_0029A578(Ctx *c) { /* func_0029A578 */
ENTER(0x29a578);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -1024);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RSD(3) > 0; wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029A5D8; }
SET64(31, 0x29a59c);  F_0029A5E8(c);
SET64(3, (s64)(s32)0x540000);
SET32(3, RW(3) + -27616);
SET64(31, 0x29a5ac); wr32(c, (RW(3) + 0), RW(2)); F_0029A5F8(c);
SET64(31, 0x29a5b4);  F_0029AE70(c);
SET64(31, 0x29a5bc);  F_0029B000(c);
SET64(31, 0x29a5c4);  F_00299CD8(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(3) + -1020), RW(0));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 0), RW(2));
L_0029A5D8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0029A5E8(Ctx *c) { /* func_0029A5E8 */
ENTER(0x29a5e8);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 7544); return;
}

void F_0029A5F8(Ctx *c) { /* func_0029A5F8 */
ENTER(0x29a5f8);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x410000);
SET32(16, RW(16) + -1016);
SET32(6, RW(0) + 1000);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29a61c); SET64(4, RD(16) + RD(0)); F_001273D0(c);
SET32(3, RW(0) + 8);
wr32(c, (RW(16) + 4), RW(3));
SET64(31, 0x29a62c); SET32(4, RW(0) + 1); F_0029A968(c);
SET64(31, 0x29a634);  F_00269E48(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00269EE0(c); return; }
}

void F_0029A648(Ctx *c) { /* func_0029A648 */
ENTER(0x29a648);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + -1024);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RSD(3) <= 0; wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029A690; }
SET64(31, 0x29a66c);  F_0029B058(c);
SET64(31, 0x29a674);  F_00299D30(c);
SET64(31, 0x29a67c);  F_0029AE88(c);
SET64(31, 0x29a684);  F_00269E80(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(16) + 0), RW(2));
L_0029A690:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0029A6A0(Ctx *c) { /* func_0029A6A0 */
ENTER(0x29a6a0);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + -1008);
wr32(c, (RW(2) + 4), RW(5));
wr32(c, (RW(2) + 0), RW(4)); return;
}

void F_0029A6B8(Ctx *c) { /* func_0029A6B8 */
ENTER(0x29a6b8);
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
SET64(31, 0x29a6e8); SET64(20, RD(4) + RD(0)); F_0029A7D0(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(5, RD(16) + RD(0));
{ int t = RD(18) == RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_0029A7AC; }
SET64(31, 0x29a704);  F_0029A8C8(c);
SET32(3, RW(0) + 1);
SET64(4, RD(0) + RD(0));
SET64(5, RD(20) + RD(0));
{ int t = RD(2) == RD(3); SET64(6, RD(19) + RD(0)); if (t) goto L_0029A730; }
SET64(6, (s64)(s32)0x4b0000);
SET64(5, RD(0) + RD(0));
SET64(31, 0x29a728); SET32(6, RW(6) + 7600); F_0029A928(c);
SET64(2, RD(0) + RD(0)); goto L_0029A7AC;
L_0029A730:;
SET64(31, 0x29a738); SET64(4, RD(18) + RD(0)); F_0029A820(c);
SET64(31, 0x29a740);  F_0029B060(c);
SET64(6, (s64)(s32)0x4b0000);
SET64(5, RD(0) + RD(0));
SET32(6, RW(6) + 7648);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0029A77C; }
SET64(31, 0x29a75c); wr32(c, (RW(18) + 40), RW(2)); F_00299D38(c);
SET64(6, (s64)(s32)0x4b0000);
SET64(7, RD(2) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET32(8, RW(2) + -1016);
SET32(6, RW(6) + 7680);
SET64(5, RD(0) + RD(0));
{ int t = RD(7) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0029A798; }
L_0029A77C:;
SET64(31, 0x29a784);  F_0029A928(c);
SET64(31, 0x29a78c); SET64(4, RD(18) + RD(0)); F_0029A8D8(c);
SET64(2, RD(0) + RD(0)); goto L_0029A7AC;
L_0029A798:;
SET64(3, (s32)rd32(c, (RW(8) + 0)));
SET64(2, RD(18) + RD(0));
wr32(c, (RW(18) + 52), RW(7));
SET32(3, RW(3) + 1);
wr32(c, (RW(8) + 0), RW(3));
L_0029A7AC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0029A7D0(Ctx *c) { /* func_0029A7D0 */
ENTER(0x29a7d0);
SET64(2, (s64)(s32)0x410000);
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) + -1016);
SET64(5, (s32)rd32(c, (RW(2) + 4)));
{ int t = RSD(5) <= 0; SET32(2, RW(2) + 24); if (t) goto L_0029A814; }
SET64(4, RD(2) + RD(0));
L_0029A7F0:;
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(4) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(4) + 120); if (t) goto L_0029A818; }
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(5));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0029A7F0; } }
L_0029A814:;
SET64(2, RD(0) + RD(0));
L_0029A818:;
 return;
}

void F_0029A820(Ctx *c) { /* func_0029A820 */
ENTER(0x29a820);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 120);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29a84c); SET64(16, RD(4) + RD(0)); F_001273D0(c);
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

void F_0029A8C8(Ctx *c) { /* func_0029A8C8 */
ENTER(0x29a8c8);
SET64(2, RSD(4) < (s64)6175);
SET64(2, RD(2) ^ 0x1); return;
}

void F_0029A8D8(Ctx *c) { /* func_0029A8D8 */
ENTER(0x29a8d8);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029A918; }
SET64(4, (s32)rd32(c, (RW(2) + 40)));
SET64(16, (s32)rd32(c, (RW(2) + 52)));
SET64(31, 0x29a8fc); wr32(c, (RW(2) + 0), RW(0)); F_0029B120(c);
SET64(31, 0x29a904); SET64(4, RD(16) + RD(0)); F_00299E20(c);
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + -1016);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 0), RW(2));
L_0029A918:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0029A928(Ctx *c) { /* func_0029A928 */
ENTER(0x29a928);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + -1008);
SET64(5, RD(6) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(6, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(3) + 1);
SET64(4, (s32)rd32(c, (RW(2) + 4)));
{ int t = RD(6) == RD(0); wr32(c, (RW(2) + 8), RW(3)); if (t) goto L_0029A95C; }
{ u32 t = RW(6); SET64(31, 0x29a95c);  rt_call(c, t); }
L_0029A95C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0029A968(Ctx *c) { /* func_0029A968 */
ENTER(0x29a968);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -996), RW(4)); return;
}

void F_0029A978(Ctx *c) { /* func_0029A978 */
ENTER(0x29a978);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + -996))); return;
}

void F_0029A988(Ctx *c) { /* func_0029A988 */
ENTER(0x29a988);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -1020), RW(4)); return;
}

void F_0029A998(Ctx *c) { /* func_0029A998 */
ENTER(0x29a998);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + -1020))); return;
}

void F_0029A9A8(Ctx *c) { /* func_0029A9A8 */
ENTER(0x29a9a8);
SET64(2, (s32)rd32(c, (RW(4) + 40)));
wr32(c, (RW(2) + 68), RW(5)); return;
}

void F_0029A9B8(Ctx *c) { /* func_0029A9B8 */
ENTER(0x29a9b8);
SET64(2, (s32)rd32(c, (RW(4) + 40)));
wr32(c, (RW(2) + 72), RW(5)); return;
}

void F_0029A9C8(Ctx *c) { /* func_0029A9C8 */
ENTER(0x29a9c8);
wr32(c, (RW(4) + 4), RW(5)); return;
}

void F_0029A9D0(Ctx *c) { /* func_0029A9D0 */
ENTER(0x29a9d0);
SET64(2, (s32)rd32(c, (RW(4) + 4))); return;
}

void F_0029A9D8(Ctx *c) { /* func_0029A9D8 */
ENTER(0x29a9d8);
wr32(c, (RW(4) + 8), RW(5)); return;
}

void F_0029A9E0(Ctx *c) { /* func_0029A9E0 */
ENTER(0x29a9e0);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void F_0029A9E8(Ctx *c) { /* func_0029A9E8 */
ENTER(0x29a9e8);
wr32(c, (RW(4) + 16), RW(6));
wr32(c, (RW(4) + 12), RW(5)); return;
}

void F_0029A9F8(Ctx *c) { /* func_0029A9F8 */
ENTER(0x29a9f8);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
wr32(c, (RW(5) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 16)));
wr32(c, (RW(6) + 0), RW(3)); return;
}

void F_0029AA10(Ctx *c) { /* func_0029AA10 */
ENTER(0x29aa10);
wr32(c, (RW(4) + 20), RW(5)); return;
}

void F_0029AA18(Ctx *c) { /* func_0029AA18 */
ENTER(0x29aa18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET32(5, RW(0) + 100);
SET32(16, RW(16) << 2);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29aa44); SET64(18, RD(6) + RD(0)); F_0029AA78(c);
SET32(16, RW(16) + RW(17));
SET64(17, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 64), RW(18));
SET64(31, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0029AA68(Ctx *c) { /* func_0029AA68 */
ENTER(0x29aa68);
SET32(5, RW(5) << 2);
SET32(5, RW(5) + RW(4));
SET64(2, (s32)rd32(c, (RW(5) + 64))); return;
}

void F_0029AA78(Ctx *c) { /* func_0029AA78 */
ENTER(0x29aa78);
wr32(c, (RW(4) + 60), RW(5)); return;
}

void F_0029AA80(Ctx *c) { /* func_0029AA80 */
ENTER(0x29aa80);
SET64(2, (s32)rd32(c, (RW(4) + 60))); return;
}

void F_0029AA88(Ctx *c) { /* func_0029AA88 */
ENTER(0x29aa88);
SET32(29, RW(29) + -64);
SET64(8, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET32(17, RW(8) + 24);
wr64(c, (RW(29) + 32), RD(16));
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(3, RD(6) + RD(0));
wr32(c, (RW(17) + 4), RW(2));
SET64(5, (s64)(s32)0x4b0000);
wr32(c, (RW(17) + 8), RW(3));
SET64(6, (s64)(s32)0x4b0000);
SET64(4, RD(29) + RD(0));
SET32(5, RW(5) + 7712);
SET32(6, RW(6) + 7720);
SET64(16, (s32)rd32(c, (RW(8) + 40)));
SET32(7, RW(29) + 16);
wr32(c, (RW(29) + 0), RW(2));
SET64(31, 0x29aad8); wr32(c, (RW(29) + 4), RW(3)); F_00268608(c);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029AAF8; }
SET64(31, 0x29aaf0);  F_0029B148(c);
SET32(2, RW(0) + 1); goto L_0029AB08;
L_0029AAF8:;
SET64(5, (s32)rd32(c, (RW(29) + 16)));
SET64(31, 0x29ab04); SET64(6, (s32)rd32(c, (RW(29) + 20))); F_0029B148(c);
SET32(2, RW(0) + 1);
L_0029AB08:;
SET64(16, rd64(c, (RW(29) + 32)));
wr32(c, (RW(17) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 64); return;
}

void F_0029AB20(Ctx *c) { /* func_0029AB20 */
ENTER(0x29ab20);
SET32(4, RW(4) + 24);
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 8))); goto L_0029AB40; }
wr32(c, (RW(5) + 0), RW(0));
wr32(c, (RW(6) + 0), RW(0)); return;
L_0029AB40:;
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 0), RW(2));
wr32(c, (RW(5) + 0), RW(3)); return;
}

void F_0029AB50(Ctx *c) { /* func_0029AB50 */
ENTER(0x29ab50);
wr32(c, (RW(4) + 44), RW(5)); return;
}

void F_0029AB58(Ctx *c) { /* func_0029AB58 */
ENTER(0x29ab58);
SET64(2, (s32)rd32(c, (RW(4) + 44))); return;
}

void F_0029AB60(Ctx *c) { /* func_0029AB60 */
ENTER(0x29ab60);
wr32(c, (RW(4) + 48), RW(5)); return;
}

void F_0029AB68(Ctx *c) { /* func_0029AB68 */
ENTER(0x29ab68);
SET64(2, (s32)rd32(c, (RW(4) + 48))); return;
}

void F_0029AB70(Ctx *c) { /* func_0029AB70 */
ENTER(0x29ab70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 40)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029B898(c); return; }
}

void F_0029AB88(Ctx *c) { /* func_0029AB88 */
ENTER(0x29ab88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 40)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029B930(c); return; }
}

void F_0029ABA0(Ctx *c) { /* func_0029ABA0 */
ENTER(0x29aba0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 40)));
SET64(5, (s32)rd32(c, (RW(5) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029B288(c); return; }
}

void F_0029ABC0(Ctx *c) { /* func_0029ABC0 */
ENTER(0x29abc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00299EE0(c); return; }
}

void F_0029ABD8(Ctx *c) { /* func_0029ABD8 */
ENTER(0x29abd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00299F00(c); return; }
}

void F_0029ABF0(Ctx *c) { /* func_0029ABF0 */
ENTER(0x29abf0);
SET32(29, RW(29) + -16);
SET64(5, RD(5) & 0xff);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(6, RD(6) & 0xff);
SET64(7, RD(7) & 0xff);
SET64(31, 0x29ac14); SET64(4, (s32)rd32(c, (RW(16) + 52))); F_00299F20(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(5, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AA78(c); return; }
}

void F_0029AC30(Ctx *c) { /* func_0029AC30 */
ENTER(0x29ac30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00299F38(c); return; }
}

void F_0029AC48(Ctx *c) { /* func_0029AC48 */
ENTER(0x29ac48);
wr32(c, (RW(4) + 56), RW(5)); return;
}

void F_0029AC50(Ctx *c) { /* func_0029AC50 */
ENTER(0x29ac50);
SET64(2, (s32)rd32(c, (RW(4) + 56))); return;
}

void F_0029AC58(Ctx *c) { /* func_0029AC58 */
ENTER(0x29ac58);
wr32(c, (RW(4) + 104), RW(5)); return;
}

void F_0029AC60(Ctx *c) { /* func_0029AC60 */
ENTER(0x29ac60);
SET64(2, (s32)rd32(c, (RW(4) + 104))); return;
}

void F_0029AC68(Ctx *c) { /* func_0029AC68 */
ENTER(0x29ac68);
wr32(c, (RW(4) + 108), RW(5)); return;
}

void F_0029AC70(Ctx *c) { /* func_0029AC70 */
ENTER(0x29ac70);
SET64(2, (s32)rd32(c, (RW(4) + 108))); return;
}

void F_0029AC78(Ctx *c) { /* func_0029AC78 */
ENTER(0x29ac78);
wr32(c, (RW(4) + 116), RW(5)); return;
}

void F_0029AC80(Ctx *c) { /* func_0029AC80 */
ENTER(0x29ac80);
SET64(2, (s32)rd32(c, (RW(4) + 116))); return;
}

void F_0029AC88(Ctx *c) { /* func_0029AC88 */
ENTER(0x29ac88);
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
SET64(31, 0x29acbc); SET32(17, RSW(2) >> 1); F_0029ACE8(c);
SET32(4, RW(16) + 20);
SET64(31, 0x29acc8); SET64(5, RD(17) + RD(0)); F_0029ACE8(c);
SET32(4, RW(16) + 36);
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029ACE8(c); return; }
}

void F_0029ACE8(Ctx *c) { /* func_0029ACE8 */
ENTER(0x29ace8);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(6, (s32)rd32(c, (RW(4) + 0)));
mul_s(c, 0, 3, RSW(5), RSW(3));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(2) - RW(5));
wr32(c, (RW(4) + 8), RW(2));
SET32(6, RW(6) + RW(3));
wr32(c, (RW(4) + 0), RW(6)); return;
}

void F_0029AD10(Ctx *c) { /* func_0029AD10 */
ENTER(0x29ad10);
SET32(2, RW(5) >> 31);
SET32(2, RW(2) + RW(5));
SET32(2, RSW(2) >> 1);
SET32(2, RW(2) << 1);
SET32(3, RSW(2) >> 1);
wr32(c, (RW(4) + 12), RW(2));
wr32(c, (RW(4) + 44), RW(3));
wr32(c, (RW(4) + 28), RW(3)); return;
}

void F_0029AD38(Ctx *c) { /* func_0029AD38 */
ENTER(0x29ad38);
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
SET64(31, 0x29ad88); SET32(4, RW(16) + 4); F_0029ADC0(c);
SET32(4, RW(16) + 20);
SET64(5, RD(17) + RD(0));
SET64(31, 0x29ad98); SET64(6, RD(18) + RD(0)); F_0029ADC0(c);
SET32(4, RW(16) + 36);
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0029ADC0(c); return; }
}

void F_0029ADC0(Ctx *c) { /* func_0029ADC0 */
ENTER(0x29adc0);
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

void F_0029ADE8(Ctx *c) { /* func_0029ADE8 */
ENTER(0x29ade8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET64(4, RD(16) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29ae0c); SET64(16, RD(16) & 0xff); F_00269E98(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x29ae18); SET64(5, RD(0) + RD(0)); F_0029AA78(c);
SET64(4, RD(17) + RD(0));
SET64(7, RD(16) + RD(0));
SET32(6, RW(16) >> 1);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029ABF0(c); return; }
}

void F_0029AE40(Ctx *c) { /* func_0029AE40 */
ENTER(0x29ae40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269EC0(c); return; }
}

void F_0029AE58(Ctx *c) { /* func_0029AE58 */
ENTER(0x29ae58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269E28(c); return; }
}

void F_0029AE70(Ctx *c) { /* func_0029AE70 */
ENTER(0x29ae70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029BED8(c); return; }
}

void F_0029AE88(Ctx *c) { /* func_0029AE88 */
ENTER(0x29ae88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029BF38(c); return; }
}

void F_0029AEA0(Ctx *c) { /* func_0029AEA0 */
ENTER(0x29aea0);
SET32(4, RW(4) + 96);
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 0), RW(5)); return;
}

void F_0029AEB0(Ctx *c) { /* func_0029AEB0 */
ENTER(0x29aeb0);
SET64(2, (s32)rd32(c, (RW(4) + 96)));
SET64(2, RD(0) < RD(2)); return;
}

void F_0029AEC0(Ctx *c) { /* func_0029AEC0 */
ENTER(0x29aec0);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { F_0029C0C8(c); return; }
}

void F_0029AEE0(Ctx *c) { /* func_0029AEE0 */
ENTER(0x29aee0);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { F_0029C110(c); return; }
}

void F_0029AF00(Ctx *c) { /* func_0029AF00 */
ENTER(0x29af00);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { F_0029C150(c); return; }
}

void F_0029AF20(Ctx *c) { /* func_0029AF20 */
ENTER(0x29af20);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { F_0029C190(c); return; }
}

void F_0029AF40(Ctx *c) { /* func_0029AF40 */
ENTER(0x29af40);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { F_0029C1F0(c); return; }
}

void F_0029AF60(Ctx *c) { /* func_0029AF60 */
ENTER(0x29af60);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { F_0029C280(c); return; }
}

void F_0029AF80(Ctx *c) { /* func_0029AF80 */
ENTER(0x29af80);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { F_0029C2E8(c); return; }
}

void F_0029AFA0(Ctx *c) { /* func_0029AFA0 */
ENTER(0x29afa0);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { F_0029C368(c); return; }
}

void F_0029AFC0(Ctx *c) { /* func_0029AFC0 */
ENTER(0x29afc0);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { F_0029C3E8(c); return; }
}

void F_0029AFE0(Ctx *c) { /* func_0029AFE0 */
ENTER(0x29afe0);
SET32(29, RW(29) + -16);
SET32(4, RW(4) + 96);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET32(29, RW(29) + 16); { F_0029C468(c); return; }
}

void F_0029B000(Ctx *c) { /* func_0029B000 */
ENTER(0x29b000);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029B018(c); return; }
}

void F_0029B018(Ctx *c) { /* func_0029B018 */
ENTER(0x29b018);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x410000);
SET32(16, RW(16) + -16);
SET32(6, RW(0) + 620);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29b03c); SET64(4, RD(16) + RD(0)); F_001273D0(c);
SET32(3, RW(0) + 8);
wr32(c, (RW(16) + 8), RW(3));
SET64(4, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0029B978(c); return; }
}

void F_0029B058(Ctx *c) { /* func_0029B058 */
ENTER(0x29b058);
 return;
}

void F_0029B060(Ctx *c) { /* func_0029B060 */
ENTER(0x29b060);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29b074);  F_0029B0B8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029B0A8; }
SET64(31, 0x29b088);  F_0029B108(c);
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + -16);
SET32(5, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(16) + RD(0));
SET32(4, RW(4) + 1);
wr32(c, (RW(3) + 0), RW(4));
wr32(c, (RW(16) + 0), RW(5));
L_0029B0A8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0029B0B8(Ctx *c) { /* func_0029B0B8 */
ENTER(0x29b0b8);
SET64(2, (s64)(s32)0x410000);
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) + -16);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RSD(5) <= 0; SET32(2, RW(2) + 12); if (t) goto L_0029B0FC; }
SET64(4, RD(2) + RD(0));
L_0029B0D8:;
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(4) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(4) + 76); if (t) goto L_0029B100; }
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(5));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0029B0D8; } }
L_0029B0FC:;
SET64(2, RD(0) + RD(0));
L_0029B100:;
 return;
}

void F_0029B108(Ctx *c) { /* func_0029B108 */
ENTER(0x29b108);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 60), RW(0));
wr32(c, (RW(4) + 64), RW(0));
wr32(c, (RW(4) + 68), RW(0));
wr32(c, (RW(4) + 72), RW(0)); return;
}

void F_0029B120(Ctx *c) { /* func_0029B120 */
ENTER(0x29b120);
{ int t = RD(4) == RD(0);  if (t) goto L_0029B140; }
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + -16);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 0), RW(2));
L_0029B140:;
 return;
}

void F_0029B148(Ctx *c) { /* func_0029B148 */
ENTER(0x29b148);
SET32(29, RW(29) + -16);
SET32(2, RW(4) + 8);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(0) + 1);
wr32(c, (RW(2) + 8), RW(6));
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + 0), RW(3));
wr32(c, (RW(2) + 4), RW(5));
SET32(29, RW(29) + 16); { F_0029B170(c); return; }
}

void F_0029B170(Ctx *c) { /* func_0029B170 */
ENTER(0x29b170);
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
{ int t = RD(8) != RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0029B1C8; }
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 8), RW(0));
wr32(c, (RW(19) + 0), RW(2));
wr32(c, (RW(19) + 4), RW(0));
wr32(c, (RW(20) + 0), RW(2));
wr32(c, (RW(20) + 8), RW(0));
wr32(c, (RW(20) + 4), RW(0)); goto L_0029B238;
L_0029B1C8:;
SET64(16, (s64)(s32)0x4b0000);
SET32(18, RW(29) + 16);
SET64(2, (s32)rd32(c, (RW(3) + 8)));
SET32(16, RW(16) + 7736);
SET64(5, (s64)(s32)0x4b0000);
SET64(6, RD(16) + RD(0));
SET32(5, RW(5) + 7728);
SET64(7, RD(18) + RD(0));
wr32(c, (RW(29) + 0), RW(8));
SET32(17, RW(0) + 1);
SET64(31, 0x29b1f8); wr32(c, (RW(29) + 4), RW(2)); F_00268608(c);
SET64(3, (s32)rd32(c, (RW(29) + 16)));
SET64(5, (s64)(s32)0x4b0000);
SET64(2, (s32)rd32(c, (RW(29) + 20)));
SET32(5, RW(5) + 7744);
wr32(c, (RW(19) + 4), RW(3));
SET64(6, RD(16) + RD(0));
wr32(c, (RW(19) + 8), RW(2));
SET64(7, RD(18) + RD(0));
wr32(c, (RW(19) + 0), RW(17));
SET64(31, 0x29b224); SET64(4, RD(29) + RD(0)); F_00268608(c);
wr32(c, (RW(20) + 0), RW(17));
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET64(3, (s32)rd32(c, (RW(29) + 20)));
wr32(c, (RW(20) + 4), RW(2));
wr32(c, (RW(20) + 8), RW(3));
L_0029B238:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_0029B258(Ctx *c) { /* func_0029B258 */
ENTER(0x29b258);
SET32(4, RW(4) + 8);
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(4) + 8))); goto L_0029B278; }
wr32(c, (RW(5) + 0), RW(0));
wr32(c, (RW(6) + 0), RW(0)); return;
L_0029B278:;
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 0), RW(2));
wr32(c, (RW(5) + 0), RW(3)); return;
}

void F_0029B288(Ctx *c) { /* func_0029B288 */
ENTER(0x29b288);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 72), RD(19));
SET32(19, RW(2) + 7736);
wr64(c, (RW(29) + 56), RD(17));
wr64(c, (RW(29) + 64), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(20));
SET64(20, RD(7) + RD(0));
SET32(5, RW(3) + 7752);
SET64(17, RD(6) + RD(0));
SET64(7, RD(29) + RD(0));
SET32(8, RW(29) + 4);
SET64(6, RD(19) + RD(0));
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 88), RD(31));
SET64(31, 0x29b2d4); SET64(16, RD(4) + RD(0)); F_0029B3A0(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s64)(s32)0x7fff0000);
SET32(6, RW(29) + 8);
SET32(5, RW(5) + 7760);
SET64(3, RD(3) | 0xffff);
{ int t = RD(2) != RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0029B300; }
wr32(c, (RW(17) + 0), RW(0));
wr32(c, (RW(20) + 0), RW(3)); goto L_0029B37C;
L_0029B300:;
SET64(31, 0x29b308);  F_00129CC8(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 7768);
SET64(4, RD(16) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(29) + RD(0));
SET64(31, 0x29b324); SET32(8, RW(29) + 4); F_0029B3A0(c);
SET64(5, RD(18) + RD(0));
SET64(16, (s32)rd32(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x7fff0000);
{ int t = RD(16) != RD(0); SET64(2, RD(2) | 0xffff); if (t) goto L_0029B340; }
wr32(c, (RW(17) + 0), RW(2)); goto L_0029B37C;
L_0029B340:;
SET64(31, 0x29b348); SET64(4, rd64(c, (RW(29) + 8))); F_0011F910(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET32(5, RW(5) + 7776);
SET32(4, RW(16) + RW(2));
SET32(6, RW(29) + 16);
SET32(7, RW(29) + 24);
SET64(31, 0x29b36c); SET32(8, RW(29) + 32); F_00129CC8(c);
SET64(3, (s32)rd32(c, (RW(29) + 24)));
SET64(2, (s32)rd32(c, (RW(29) + 32)));
wr32(c, (RW(17) + 0), RW(3));
wr32(c, (RW(20) + 0), RW(2));
L_0029B37C:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void F_0029B3A0(Ctx *c) { /* func_0029B3A0 */
ENTER(0x29b3a0);
SET32(29, RW(29) + -64);
SET32(4, RW(4) + 40);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(8) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) != RD(3)) { wr32(c, (RW(16) + 0), RW(0)); goto L_0029B3DC; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 8))); goto L_0029B3E8; }
wr32(c, (RW(16) + 0), RW(0));
L_0029B3DC:;
wr32(c, (RW(17) + 0), RW(0)); goto L_0029B40C;
L_0029B3E8:;
SET64(4, RD(29) + RD(0));
SET32(7, RW(29) + 16);
wr32(c, (RW(29) + 0), RW(3));
SET64(31, 0x29b3fc); wr32(c, (RW(29) + 4), RW(2)); F_00268608(c);
SET64(3, (s32)rd32(c, (RW(29) + 16)));
SET64(2, (s32)rd32(c, (RW(29) + 20)));
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(17) + 0), RW(2));
L_0029B40C:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0029B420(Ctx *c) { /* func_0029B420 */
ENTER(0x29b420);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029B438(c); return; }
}

void F_0029B438(Ctx *c) { /* func_0029B438 */
ENTER(0x29b438);
SET64(2, (s64)(s32)0x80000000);
SET64(3, (s64)(s32)0x7fff0000);
SET64(4, RD(5) ^ RD(2));
SET64(2, RD(6) ^ RD(2));
SET64(3, RD(3) | 0xffff);
SET32(8, RW(0) + 8);
if (RD(2) == 0) SET64(6, RD(3));
SET32(2, RW(7) + 32);
if (RD(4) == 0) SET64(5, RD(3));
L_0029B460:;
SET32(8, RW(8) + -1);
wr32(c, (RW(2) + 0), RW(0));
{ int t = RSD(8) >= 0; SET32(2, RW(2) + -4); if (t) { POLL(); goto L_0029B460; } }
SET32(2, RW(7) + 36);
SET32(8, RW(0) + 7);
L_0029B488:;
SET32(8, RW(8) + -1);
wr32(c, (RW(2) + 0), RW(5));
{ int t = RSD(8) >= 0; SET32(2, RW(2) + 4); if (t) { POLL(); goto L_0029B488; } }
{ int t = RD(5) != RD(6); SET32(8, RW(0) + 17); if (t) goto L_0029B4D8; }
SET32(3, RW(7) + 68);
L_0029B4B0:;
SET32(8, RW(8) + 1);
wr32(c, (RW(3) + 0), RW(5));
SET64(2, RSD(8) < (s64)224);
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 4); if (t) { POLL(); goto L_0029B4B0; } }
SET32(2, RW(7) + 896); goto L_0029B51C;
L_0029B4D8:;
SET32(10, RW(6) - RW(5));
SET32(11, RW(0) + 207);
SET32(9, RW(7) + 68);
L_0029B4E8:;
div_u(c, 0, RW(10), RW(11));
SET32(3, RW(8) + -17);
SET32(8, RW(8) + 1);
if (RD(11) == RD(0)) { rt_break(c, 0x29b4f8); goto L_0029B4FC; }
L_0029B4FC:;
SET64(4, RSD(8) < (s64)224);
SET64(2, c->lo.d[0]);
mul_s(c, 0, 12, RSW(2), RSW(3));
SET32(2, RW(12) + RW(5));
wr32(c, (RW(9) + 0), RW(2));
{ int t = RD(4) != RD(0); SET32(9, RW(9) + 4); if (t) { POLL(); goto L_0029B4E8; } }
SET32(2, RW(7) + 896);
L_0029B51C:;
SET32(8, RW(0) + 15);
L_0029B520:;
SET32(8, RW(8) + -1);
wr32(c, (RW(2) + 0), RW(6));
{ int t = RSD(8) >= 0; SET32(2, RW(2) + 4); if (t) { POLL(); goto L_0029B520; } }
SET64(2, (s64)(s32)0x7fff0000);
SET32(7, RW(7) + 960);
SET64(2, RD(2) | 0xffff);
SET32(8, RW(0) + 15);
L_0029B550:;
SET32(8, RW(8) + -1);
wr32(c, (RW(7) + 0), RW(2));
{ int t = RSD(8) >= 0; SET32(7, RW(7) + 4); if (t) { POLL(); goto L_0029B550; } }
 return;
}

void F_0029B578(Ctx *c) { /* func_0029B578 */
ENTER(0x29b578);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
SET32(7, RW(29) + 4);
SET64(6, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x29b59c); SET64(16, RD(4) + RD(0)); F_0029B288(c);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x29b5b0); SET64(7, RD(17) + RD(0)); F_0029B5C8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0029B5C8(Ctx *c) { /* func_0029B5C8 */
ENTER(0x29b5c8);
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
SET64(31, 0x29b608); SET64(4, RD(20) + RD(0)); F_001273D0(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x29b61c); SET64(7, RD(19) + RD(0)); F_0029B420(c);
SET64(4, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 68)));
SET64(5, RD(20) + RD(0));
{ int t = RD(2) != RD(0); SET32(3, RW(0) + 16); if (t) goto L_0029B690; }
SET64(2, (s32)rd32(c, (RW(18) + 4)));
{ int t = RD(2) != RD(3); SET64(4, RD(18) + RD(0)); if (t) goto L_0029B668; }
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(6, RD(20) + RD(0));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_0029B6C0(c); return; }
L_0029B668:;
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(6, RD(20) + RD(0));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_0029B750(c); return; }
L_0029B690:;
c->f[13].u = rd32(c, (RW(18) + 64));
{ u32 t = RW(2); SET64(31, 0x29b69c); c->f[12].u = rd32(c, (RW(18) + 60)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0029B6C0(Ctx *c) { /* func_0029B6C0 */
ENTER(0x29b6c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29b6dc); SET64(17, RD(5) + RD(0)); F_0029B988(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(6, (s64)(s32)0x4b0000); goto L_0029B730; }
SET64(6, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(4, RD(0) + RD(0));
L_0029B6F8:;
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET32(5, RW(5) + 4);
SET32(4, RW(4) + 1);
SET32(2, RW(2) >> 15);
SET64(3, RSD(4) < (s64)256);
wr16(c, (RW(6) + 0), (u16)RW(2));
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 2); if (t) { POLL(); goto L_0029B6F8; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
L_0029B730:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(6) + 7792);
SET64(5, RD(0) + RD(0));
SET32(29, RW(29) + 32); { F_0029A928(c); return; }
}

void F_0029B750(Ctx *c) { /* func_0029B750 */
ENTER(0x29b750);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr32(c, (RW(29) + 24), c->f[20].u);
SET64(31, 0x29b774); c->f[20].u = rd32(c, (RW(4) + 64)); F_0029B988(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(6, RD(0) + RD(0)); if (t) goto L_0029B7B8; }
SET64(7, (s64)(s32)0x7fff0000);
SET64(7, RD(7) | 0xff80);
L_0029B788:;
SET32(4, RW(6) << 2);
SET32(6, RW(6) + 1);
SET32(3, RW(4) + RW(17));
SET32(4, RW(4) + RW(16));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(6) < (s64)256);
SET64(2, RD(2) & RD(7));
SET32(2, RW(2) << 1);
{ int t = RD(5) != RD(0); wr32(c, (RW(4) + 0), RW(2)); if (t) { POLL(); goto L_0029B788; } }
SET64(16, rd64(c, (RW(29) + 0))); goto L_0029B880;
L_0029B7B8:;
SET64(1, (s64)(s32)0x4eff0000);
SET64(1, RD(1) | 0xffff);
c->f[3].u = RW(1);
SET64(1, (s64)(s32)0x4b7f0000);
SET64(1, RD(1) | 0xffff);
c->f[2].u = RW(1);
SET32(8, RW(0) + 1);
SET64(9, (s64)(s32)0x80000000);
L_0029B7D8:;
SET32(2, RW(6) << 2);
SET32(6, RW(6) + 1);
SET32(3, RW(2) + RW(17));
SET64(7, RSD(6) < (s64)256);
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) != RD(0); SET32(5, RW(2) + RW(16)); if (t) goto L_0029B7FC; }
wr32(c, (RW(3) + 0), RW(8));
SET64(4, RD(8) + RD(0));
L_0029B7FC:;
{ int t = RSD(4) < 0; SET32(3, RW(4) >> 1); if (t) goto L_0029B818; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(20) * F(0)); goto L_0029B830;
L_0029B818:;
SET64(2, RD(4) & 0x1);
SET64(2, RD(2) | RD(3));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
c->f[0].f = fpu(F(20) * F(0));
L_0029B830:;
SET64(1, (s64)(s32)0x4f000000);
c->f[1].u = RW(1);
c->f[0].f = fpu_div(F(0), F(3));
c->f[0].f = fpu_div(F(2), F(0));
c->fcc = F(1) <= F(0);
c->f[4].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[4].u);
{ int t = !c->fcc;  if (t) goto L_0029B874; }
c->f[0].f = fpu(F(0) - F(1));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[1].u);
SET64(2, RD(2) | RD(9));
L_0029B874:;
{ int t = RD(7) != RD(0); wr32(c, (RW(5) + 0), RW(2)); if (t) { POLL(); goto L_0029B7D8; } }
SET64(16, rd64(c, (RW(29) + 0)));
L_0029B880:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
c->f[20].u = rd32(c, (RW(29) + 24));
SET32(29, RW(29) + 32); return;
}

void F_0029B898(Ctx *c) { /* func_0029B898 */
ENTER(0x29b898);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 24), c->f[21].u);
c->f[21].u = c->f[12].u;
wr32(c, (RW(29) + 16), c->f[20].u);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29b8bc); c->f[20].u = c->f[13].u; F_0029B900(c);
SET64(6, (s64)(s32)0x4b0000);
SET32(3, RW(0) + 1);
SET64(4, RD(0) + RD(0));
SET32(6, RW(6) + 7856);
{ int t = RD(2) == RD(3); SET64(5, RD(0) + RD(0)); if (t) goto L_0029B8DC; }
SET64(31, 0x29b8dc);  F_0029A928(c);
L_0029B8DC:;
wr32(c, (RW(16) + 64), c->f[20].u);
wr32(c, (RW(16) + 60), c->f[21].u);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
c->f[21].u = rd32(c, (RW(29) + 24));
c->f[20].u = rd32(c, (RW(29) + 16));
SET32(29, RW(29) + 32); return;
}

void F_0029B900(Ctx *c) { /* func_0029B900 */
ENTER(0x29b900);
c->fcc = F(13) <= F(12);
SET32(2, RW(0) + 1);
{ int t = !c->fcc; c->f[1].f = fpu(F(13) - F(12)); if (t) goto L_0029B914; }
SET64(2, RD(0) + RD(0));
L_0029B914:;
SET64(1, (s64)(s32)0xc1600000);
c->f[0].u = RW(1);
c->fcc = F(1) < F(0);
if (c->fcc) { SET64(2, RD(0) + RD(0)); goto L_0029B928; }
L_0029B928:;
 return;
}

void F_0029B930(Ctx *c) { /* func_0029B930 */
ENTER(0x29b930);
c->f[0].u = rd32(c, (RW(4) + 60));
wr32(c, (RW(5) + 0), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 64));
wr32(c, (RW(6) + 0), c->f[1].u); return;
}

void F_0029B948(Ctx *c) { /* func_0029B948 */
ENTER(0x29b948);
c->f[2].u = RW(0);
SET32(2, RW(0) + 1);
c->f[0].u = rd32(c, (RW(4) + 60));
c->fcc = F(0) == F(2);
{ int t = !c->fcc; c->f[1].u = rd32(c, (RW(4) + 64)); if (t) goto L_0029B96C; }
c->fcc = F(1) == F(2);
if (c->fcc) { SET64(2, RD(0) + RD(0)); goto L_0029B96C; }
L_0029B96C:;
 return;
}

void F_0029B978(Ctx *c) { /* func_0029B978 */
ENTER(0x29b978);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -12), RW(4)); return;
}

void F_0029B988(Ctx *c) { /* func_0029B988 */
ENTER(0x29b988);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + -12))); return;
}

void F_0029B998(Ctx *c) { /* func_0029B998 */
ENTER(0x29b998);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29b9c0); SET64(16, RD(4) + RD(0)); F_0029BEB8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 16);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0029BA88(c); return; }
}

void F_0029B9E8(Ctx *c) { /* func_0029B9E8 */
ENTER(0x29b9e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 24);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29ba10); SET64(16, RD(4) + RD(0)); F_0029BEB8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 24);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0029BA88(c); return; }
}

void F_0029BA38(Ctx *c) { /* func_0029BA38 */
ENTER(0x29ba38);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29ba60); SET64(16, RD(4) + RD(0)); F_0029BEB8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 32);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0029BA88(c); return; }
}

void F_0029BA88(Ctx *c) { /* func_0029BA88 */
ENTER(0x29ba88);
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
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0029BACC; }
SET64(5, (s64)(s32)0x4b0000);
SET64(31, 0x29bac8); SET32(5, RW(5) + 7904); F_0029A570(c);
wr32(c, (RW(16) + 4), RW(2));
L_0029BACC:;
SET64(31, 0x29bad4); SET64(4, (s32)rd32(c, (RW(16) + 40))); F_0029B948(c);
SET32(7, RW(0) + 2);
SET64(6, (s64)(s32)0x4b0000);
SET32(3, RW(0) + 1);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
{ int t = RD(2) == RD(3); SET32(6, RW(6) + 7912); if (t) goto L_0029BB10; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0029A928(c); return; }
L_0029BB10:;
SET64(3, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(3) == RD(7); SET64(2, RD(3) < (u64)(s64)3); if (t) goto L_0029BB60; }
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029BB90; }
SET32(2, RW(0) + 3);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029BB94; }
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(7, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0029BBB8(c); return; }
L_0029BB60:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(7, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0029BD48(c); return; }
L_0029BB90:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029BB94:;
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, (s64)(s32)0x4b0000);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET32(6, RW(6) + 7960);
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0029A928(c); return; }
}

void F_0029BBB8(Ctx *c) { /* func_0029BBB8 */
ENTER(0x29bbb8);
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
{ int t = RD(11) == RD(0); wr32(c, (RW(29) + 12), RW(12)); if (t) goto L_0029BC80; }
SET64(20, RD(11) + RD(0));
L_0029BC80:;
SET64(31, 0x29bc88);  F_0029BE58(c);
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
{ int t = RD(19) == RD(9); wr32(c, (RW(29) + 44), RW(20)); if (t) goto L_0029BCE0; }
{ int t = RD(19) == RD(10); SET64(16, rd64(c, (RW(29) + 64))); if (t) goto L_0029BD00; }
SET64(17, rd64(c, (RW(29) + 72))); goto L_0029BD24;
L_0029BCE0:;
SET64(31, 0x29bce8);  F_0029A0F0(c);
SET64(6, (s32)rd32(c, (RW(17) + 64)));
SET64(4, RD(29) + RD(0));
SET64(31, 0x29bcf8); SET32(5, RW(29) + 32); F_00269F20(c);
SET64(16, rd64(c, (RW(29) + 64))); goto L_0029BD20;
L_0029BD00:;
SET32(6, RW(0) + 13);
SET64(31, 0x29bd0c); SET64(4, RD(17) + RD(0)); F_0029A0F0(c);
SET64(6, (s32)rd32(c, (RW(17) + 64)));
SET64(4, RD(29) + RD(0));
SET64(31, 0x29bd1c); SET32(5, RW(29) + 32); F_00269F28(c);
SET64(16, rd64(c, (RW(29) + 64)));
L_0029BD20:;
SET64(17, rd64(c, (RW(29) + 72)));
L_0029BD24:;
SET64(18, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 88)));
SET64(20, rd64(c, (RW(29) + 96)));
SET64(21, rd64(c, (RW(29) + 104)));
SET64(22, rd64(c, (RW(29) + 112)));
SET64(31, rd64(c, (RW(29) + 120)));
SET32(29, RW(29) + 128); return;
}

void F_0029BD48(Ctx *c) { /* func_0029BD48 */
ENTER(0x29bd48);
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
{ int t = RD(6) == RD(0); wr32(c, (RW(29) + 8), RW(3)); if (t) goto L_0029BDC8; }
SET64(19, RD(6) + RD(0));
L_0029BDC8:;
SET64(31, 0x29bdd0);  F_0029BE58(c);
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
{ int t = RD(17) == RD(5); wr32(c, (RW(29) + 52), RW(3)); if (t) goto L_0029BE30; }
if (RD(17) != RD(6)) { SET64(16, rd64(c, (RW(29) + 64))); goto L_0029BE34; }
SET64(5, RD(22) + RD(0));
SET32(6, RW(0) + 13);
SET64(31, 0x29be20); SET64(4, RD(18) + RD(0)); F_0029A0F0(c);
SET64(6, (s32)rd32(c, (RW(18) + 64)));
SET64(4, RD(29) + RD(0));
SET64(31, 0x29be30); SET32(5, RW(29) + 32); F_00269F38(c);
L_0029BE30:;
SET64(16, rd64(c, (RW(29) + 64)));
L_0029BE34:;
SET64(17, rd64(c, (RW(29) + 72)));
SET64(18, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 88)));
SET64(20, rd64(c, (RW(29) + 96)));
SET64(21, rd64(c, (RW(29) + 104)));
SET64(22, rd64(c, (RW(29) + 112)));
SET64(31, rd64(c, (RW(29) + 120)));
SET32(29, RW(29) + 128); return;
}

void F_0029BE58(Ctx *c) { /* func_0029BE58 */
ENTER(0x29be58);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 16);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(4) < (u64)(s64)17);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 1); if (t) goto L_0029BEA8; }
{ int t = RD(5) != RD(0); SET64(6, (s64)(s32)0x4b0000); if (t) goto L_0029BE94; }
SET32(2, RW(0) + 24);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 2); if (t) goto L_0029BEA8; }
SET32(2, RW(0) + 32);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 3); if (t) goto L_0029BEA8; }
SET64(6, (s64)(s32)0x4b0000);
L_0029BE94:;
SET64(4, RD(0) + RD(0));
SET32(6, RW(6) + 8016);
SET64(31, 0x29bea4); SET64(5, RD(0) + RD(0)); F_0029A928(c);
SET64(3, RD(0) + RD(0));
L_0029BEA8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0029BEB8(Ctx *c) { /* func_0029BEB8 */
ENTER(0x29beb8);
SET64(2, (s32)rd32(c, (RW(4) + 40)));
wr32(c, (RW(2) + 4), RW(5)); return;
}

void F_0029BEC8(Ctx *c) { /* func_0029BEC8 */
ENTER(0x29bec8);
SET64(3, (s32)rd32(c, (RW(4) + 40)));
SET64(2, (s32)rd32(c, (RW(3) + 4))); return;
}

void F_0029BED8(Ctx *c) { /* func_0029BED8 */
ENTER(0x29bed8);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 608);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RSD(3) > 0; wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029BF14; }
SET64(31, 0x29befc);  F_0029BF28(c);
SET64(3, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(3) + -27608);
wr32(c, (RW(3) + 0), RW(2));
SET32(4, RW(4) + 1);
wr32(c, (RW(16) + 0), RW(4));
L_0029BF14:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0029BF28(Ctx *c) { /* func_0029BF28 */
ENTER(0x29bf28);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 8064); return;
}

void F_0029BF38(Ctx *c) { /* func_0029BF38 */
ENTER(0x29bf38);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 608);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RSD(3) <= 0; SET32(4, RW(3) + -1); if (t) goto L_0029BF50; }
wr32(c, (RW(2) + 0), RW(4));
L_0029BF50:;
 return;
}

void F_0029BF58(Ctx *c) { /* func_0029BF58 */
ENTER(0x29bf58);
SET32(29, RW(29) + -48);
SET64(5, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
SET32(5, RW(5) + 8120);
SET32(6, RW(0) + 8);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x29bf80); SET64(16, RD(4) + RD(0)); F_0012A978(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(29) + RD(0));
SET32(6, RW(0) + 19);
SET64(31, 0x29bf94); SET32(5, RW(5) + 8136); F_00129C30(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(31, 0x29bfa4); SET32(16, RW(16) + 16); F_00129FB8(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(6, RW(0) + 2);
SET64(4, RD(16) + RD(0));
SET64(31, 0x29bfb8); SET32(5, RW(5) + 8144); F_0012A978(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x29bfc4); SET64(5, RD(17) + RD(0)); F_0029BFE8(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET64(31, 0x29bfd4); SET32(5, RW(5) + 8152); F_00129FB8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0029BFE8(Ctx *c) { /* func_0029BFE8 */
ENTER(0x29bfe8);
SET32(29, RW(29) + -96);
SET64(3, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET32(17, RW(29) + 16);
wr64(c, (RW(29) + 64), RD(18));
SET32(18, RW(29) + 32);
wr64(c, (RW(29) + 72), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(31));
SET64(5, (s64)(s32)0x4b0000);
SET32(10, RW(3) + 8176);
ldl(c, 7, (RW(10) + 7));
ldr(c, 7, (RW(10) + 0));
sdl(c, 7, (RW(29) + 7));
sdr(c, 7, (RW(29) + 0));
SET64(6, (s64)(s32)0x4b0000);
SET32(9, RW(5) + 8200);
ldl(c, 3, (RW(9) + 7));
ldr(c, 3, (RW(9) + 0));
sdl(c, 3, (RW(17) + 7));
sdr(c, 3, (RW(17) + 0));
SET32(4, RW(16) + 2);
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET32(7, RW(6) + 8224);
ldl(c, 10, (RW(7) + 7));
ldr(c, 10, (RW(7) + 0));
sdl(c, 10, (RW(18) + 7));
sdr(c, 10, (RW(18) + 0));
SET32(6, RW(0) + 1);
SET32(2, RW(2) << 2);
SET32(3, RW(29) + RW(2));
SET64(31, 0x29c074); SET64(5, (s32)rd32(c, (RW(3) + 0))); F_0012A978(c);
SET64(3, (s32)rd32(c, (RW(19) + 4)));
SET32(4, RW(16) + 3);
SET32(6, RW(0) + 1);
SET32(3, RW(3) << 2);
SET32(17, RW(17) + RW(3));
SET64(31, 0x29c090); SET64(5, (s32)rd32(c, (RW(17) + 0))); F_0012A978(c);
SET64(3, (s32)rd32(c, (RW(19) + 8)));
SET32(4, RW(16) + 4);
SET32(6, RW(0) + 1);
SET32(3, RW(3) << 2);
SET32(18, RW(18) + RW(3));
SET64(31, 0x29c0ac); SET64(5, (s32)rd32(c, (RW(18) + 0))); F_0012A978(c);
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void F_0029C0C8(Ctx *c) { /* func_0029C0C8 */
ENTER(0x29c0c8);
SET32(29, RW(29) + -32);
SET64(2, RD(4) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0029C0E0; }
{ int t = RSD(5) >= 0;  if (t) goto L_0029C0E8; }
L_0029C0E0:;
SET64(2, RD(0) + RD(0)); goto L_0029C100;
L_0029C0E8:;
SET64(3, (s8)rd8(c, (RW(2) + 16)));
SET64(5, (s8)rd8(c, (RW(2) + 17)));
wr8(c, (RW(29) + 0), (u8)RW(3));
wr8(c, (RW(29) + 1), (u8)RW(5));
SET64(31, 0x29c100); SET64(4, RD(29) + RD(0)); F_00123EE0(c);
L_0029C100:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0029C110(Ctx *c) { /* func_0029C110 */
ENTER(0x29c110);
SET32(29, RW(29) + -16);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0029C124; }
{ int t = RSD(5) >= 0; SET64(5, (s64)(s32)0x4b0000); if (t) goto L_0029C130; }
L_0029C124:;
SET64(2, RD(0) + RD(0)); goto L_0029C144;
L_0029C130:;
SET32(4, RW(4) + 18);
SET32(5, RW(5) + 8168);
SET64(31, 0x29c140); SET32(6, RW(0) + 1); F_0012A7C0(c);
SET64(2, RD(2) < (u64)(s64)1);
L_0029C144:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0029C150(Ctx *c) { /* func_0029C150 */
ENTER(0x29c150);
SET32(29, RW(29) + -16);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0029C164; }
{ int t = RSD(5) >= 0; SET64(5, (s64)(s32)0x4b0000); if (t) goto L_0029C170; }
L_0029C164:;
SET64(2, RD(0) + RD(0)); goto L_0029C184;
L_0029C170:;
SET32(4, RW(4) + 19);
SET32(5, RW(5) + 8192);
SET64(31, 0x29c180); SET32(6, RW(0) + 1); F_0012A7C0(c);
SET64(2, RD(2) < (u64)(s64)1);
L_0029C184:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0029C190(Ctx *c) { /* func_0029C190 */
ENTER(0x29c190);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029C1B0; }
{ int t = RSD(2) >= 0;  if (t) goto L_0029C1B8; }
L_0029C1B0:;
SET64(2, RD(0) + RD(0)); goto L_0029C1E0;
L_0029C1B8:;
SET64(31, 0x29c1c0);  F_0029C0C8(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(16) + 20);
SET32(5, RW(5) + 8216);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 1); if (t) goto L_0029C1E0; }
SET64(31, 0x29c1dc);  F_0012A7C0(c);
SET64(2, RD(2) < (u64)(s64)1);
L_0029C1E0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0029C1F0(Ctx *c) { /* func_0029C1F0 */
ENTER(0x29c1f0);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029C210; }
{ int t = RSD(2) >= 0;  if (t) goto L_0029C218; }
L_0029C210:;
SET64(2, RD(0) + RD(0)); goto L_0029C270;
L_0029C218:;
SET64(31, 0x29c220);  F_0029C0C8(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(3, RD(2) < (u64)(s64)2);
SET64(2, RD(0) + RD(0));
SET32(5, RW(5) + 8208);
{ int t = RD(3) != RD(0); SET32(6, RW(0) + 1); if (t) goto L_0029C270; }
SET32(16, RW(16) + 21);
SET64(31, 0x29c244); SET64(4, RD(16) + RD(0)); F_0012A7C0(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 8216);
SET32(6, RW(0) + 1);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 1); if (t) goto L_0029C26C; }
SET64(31, 0x29c264);  F_0012A7C0(c);
SET32(3, RW(0) + 2);
if (RD(2) != 0) SET64(3, RD(0));
L_0029C26C:;
SET64(2, RD(3) + RD(0));
L_0029C270:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0029C280(Ctx *c) { /* func_0029C280 */
ENTER(0x29c280);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0029C2A0; }
{ int t = RSD(2) >= 0;  if (t) goto L_0029C2A8; }
L_0029C2A0:;
SET64(2, RD(0) + RD(0)); goto L_0029C2D8;
L_0029C2A8:;
SET64(31, 0x29c2b0);  F_0029C0C8(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(3, RD(2) < (u64)(s64)2);
SET64(2, RD(0) + RD(0));
SET32(4, RW(16) + 22);
SET32(5, RW(5) + 8160);
{ int t = RD(3) != RD(0); SET32(6, RW(0) + 1); if (t) goto L_0029C2D8; }
SET64(31, 0x29c2d4);  F_0012A7C0(c);
SET64(2, RD(0) < RD(2));
L_0029C2D8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0029C2E8(Ctx *c) { /* func_0029C2E8 */
ENTER(0x29c2e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0029C30C; }
{ int t = RSD(17) >= 0;  if (t) goto L_0029C318; }
L_0029C30C:;
SET64(2, RD(0) + RD(0)); goto L_0029C350;
L_0029C318:;
SET64(31, 0x29c320);  F_0029C0C8(c);
SET32(6, RW(0) + 23);
SET64(3, RD(2) < (u64)(s64)2);
SET64(2, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(3) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029C350; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029C4E8(c); return; }
L_0029C350:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0029C368(Ctx *c) { /* func_0029C368 */
ENTER(0x29c368);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0029C38C; }
{ int t = RSD(17) >= 0;  if (t) goto L_0029C398; }
L_0029C38C:;
SET64(2, RD(0) + RD(0)); goto L_0029C3D0;
L_0029C398:;
SET64(31, 0x29c3a0);  F_0029C0C8(c);
SET32(6, RW(0) + 26);
SET64(3, RD(2) < (u64)(s64)2);
SET64(2, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(3) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029C3D0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029C4E8(c); return; }
L_0029C3D0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0029C3E8(Ctx *c) { /* func_0029C3E8 */
ENTER(0x29c3e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0029C40C; }
{ int t = RSD(17) >= 0;  if (t) goto L_0029C418; }
L_0029C40C:;
SET64(2, RD(0) + RD(0)); goto L_0029C450;
L_0029C418:;
SET64(31, 0x29c420);  F_0029C0C8(c);
SET32(6, RW(0) + 29);
SET64(3, RD(2) < (u64)(s64)2);
SET64(2, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(3) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029C450; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029C4E8(c); return; }
L_0029C450:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0029C468(Ctx *c) { /* func_0029C468 */
ENTER(0x29c468);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0029C48C; }
{ int t = RSD(17) >= 0;  if (t) goto L_0029C498; }
L_0029C48C:;
SET64(2, RD(0) + RD(0)); goto L_0029C4D0;
L_0029C498:;
SET64(31, 0x29c4a0);  F_0029C0C8(c);
SET32(6, RW(0) + 32);
SET64(3, RD(2) < (u64)(s64)2);
SET64(2, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(3) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0029C4D0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029C4E8(c); return; }
L_0029C4D0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0029C4E8(Ctx *c) { /* func_0029C4E8 */
ENTER(0x29c4e8);
SET32(29, RW(29) + -48);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_0029C4FC; }
if (RSD(5) >= 0) { SET32(2, RW(4) + RW(6)); goto L_0029C508; }
L_0029C4FC:;
SET64(2, RD(0) + RD(0)); goto L_0029C538;
L_0029C508:;
SET64(4, RD(29) + RD(0));
SET64(3, (s8)rd8(c, (RW(2) + 0)));
SET64(7, (s8)rd8(c, (RW(2) + 1)));
SET64(8, (s8)rd8(c, (RW(2) + 2)));
wr8(c, (RW(29) + 0), (u8)RW(3));
wr8(c, (RW(29) + 1), (u8)RW(7));
SET32(5, RW(29) + 16);
SET32(6, RW(0) + 16);
SET64(31, 0x29c530); wr8(c, (RW(29) + 2), (u8)RW(8)); F_0029C548(c);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
L_0029C538:;
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0029C548(Ctx *c) { /* func_0029C548 */
ENTER(0x29c548);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0012C010(c); return; }
}

void F_0029C560(Ctx *c) { /* func_0029C560 */
ENTER(0x29c560);
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
{ int t = RD(16) == RD(0); wr32(c, (RW(19) + 0), RW(0)); if (t) goto L_0029C604; }
if (RSD(5) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029C608; }
if (RSD(5) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029C608; }
SET64(17, RD(5) + RD(0));
SET64(21, (s64)(s32)0x4b0000);
SET64(20, (s64)(s32)0x4b0000);
L_0029C5B8:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(21) + 8232);
SET64(31, 0x29c5c8); SET32(6, RW(0) + 1); F_00127180(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(20) + 8120);
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 8); if (t) goto L_0029C5F8; }
SET64(31, 0x29c5e0);  F_00127180(c);
if (RD(2) != RD(0)) { SET32(17, RW(17) + -1); goto L_0029C5FC; }
wr32(c, (RW(19) + 0), RW(16));
SET64(31, 0x29c5f4); SET64(4, RD(16) + RD(0)); F_0029C628(c);
wr32(c, (RW(18) + 0), RW(2));
L_0029C5F8:;
SET32(17, RW(17) + -1);
L_0029C5FC:;
{ int t = RD(17) != RD(0); SET32(16, RW(16) + 1); if (t) { POLL(); goto L_0029C5B8; } }
L_0029C604:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029C608:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0029C628(Ctx *c) { /* func_0029C628 */
ENTER(0x29c628);
SET32(2, RW(0) + 35);
if (RD(4) == 0) SET64(2, RD(0)); return;
}

void F_0029C638(Ctx *c) { /* func_0029C638 */
ENTER(0x29c638);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29c658); SET32(4, RW(2) + 8272); F_0025A040(c);
SET64(4, (s64)(s32)0x410000);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(4) + 624);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) == 0) SET64(16, RD(5));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RSD(2) < (s64)2);
{ int t = RD(2) != RD(0); SET64(3, (s64)(s32)0x410000); if (t) goto L_0029C698; }
SET64(2, (s32)rd32(c, (RW(3) + 628)));
{ int t = RD(2) == RD(16); SET32(2, RW(0) + -1); if (t) goto L_0029C77C; }
 goto L_0029C69C;
L_0029C698:;
SET32(2, RW(0) + -1);
L_0029C69C:;
{ int t = RD(16) != RD(2); wr32(c, (RW(3) + 628), RW(16)); if (t) goto L_0029C6B8; }
SET64(31, 0x29c6ac); SET32(4, RW(0) + 1); F_0029CAD0(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0029C780;
L_0029C6B8:;
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(29) + RD(0));
SET64(31, 0x29c6c8); SET32(4, RW(4) + 8280); F_0025A040(c);
SET64(4, (s64)(s32)0x80000);
SET64(4, RD(4) | 0xca00);
SET64(3, rd32(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x0);
SET64(31, 0x29c6e0); if (RD(2) == 0) SET64(4, RD(3)); F_0029CAD0(c);
SET64(4, (s64)(s32)0x410000);
SET32(5, RW(16) << 2);
SET32(7, RW(0) + 130);
SET64(6, (s64)(s32)0x4b0000);
SET32(6, RW(6) + RW(5));
SET64(6, (s32)rd32(c, (RW(6) + 8240)));
SET64(2, (s32)rd32(c, (RW(6) + 0)));
SET64(3, RD(2) & 0xc7);
{ int t = RD(3) == RD(7); wr32(c, (RW(4) + 632), RW(2)); if (t) goto L_0029C728; }
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + RW(5));
SET64(2, (s32)rd32(c, (RW(2) + 8256)));
SET64(3, (s64)(s32)0x4b0000);
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(6) + 0), RW(7));
SET32(2, RW(3) + 8256); goto L_0029C730;
L_0029C728:;
SET64(3, (s64)(s32)0x4b0000);
SET32(2, RW(3) + 8256);
L_0029C730:;
SET64(4, (s64)(s32)0x540000);
SET32(2, RW(5) + RW(2));
SET64(5, (s64)(s32)0x540000);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET32(4, RW(4) + -27600);
SET32(5, RW(5) + -27584);
SET64(7, (s64)(s32)0x540000);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(6, (s64)(s32)0x540000);
SET32(7, RW(7) + -27568);
SET32(6, RW(6) + -27564);
wr16(c, (RW(4) + 8), (u16)RW(2));
wr64(c, (RW(4) + 0), RD(0));
SET64(2, rd64(c, (RW(4) + 0)));
wr64(c, (RW(5) + 0), RD(2));
SET64(3, rd64(c, (RW(4) + 8)));
wr64(c, (RW(5) + 8), RD(3));
wr32(c, (RW(7) + 0), RW(4));
wr32(c, (RW(6) + 0), RW(0));
L_0029C77C:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0029C780:;
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0029C790(Ctx *c) { /* func_0029C790 */
ENTER(0x29c790);
SET64(3, (s64)(s32)0x410000);
SET32(4, RW(3) + 624);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(7, RD(4) + RD(0));
SET32(2, RW(2) + -1);
wr32(c, (RW(4) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) != RD(0); SET64(2, (s64)(s32)0x410000); if (t) goto L_0029C7EC; }
SET32(3, RW(0) + -1);
SET64(5, (s32)rd32(c, (RW(2) + 628)));
{ int t = RD(5) == RD(3); SET64(2, (s64)(s32)0x410000); if (t) goto L_0029C7EC; }
SET32(4, RW(0) + 130);
SET64(3, (s32)rd32(c, (RW(2) + 632)));
SET64(6, RD(3) ^ 0xc00);
SET64(3, RD(3) & 0xc7);
{ int t = RD(3) == RD(4); SET32(2, RW(5) << 2); if (t) goto L_0029C7EC; }
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 8240)));
wr32(c, (RW(3) + 0), RW(6));
L_0029C7EC:;
SET64(2, (s32)rd32(c, (RW(7) + 0)));
if (RSD(2) < 0) { wr32(c, (RW(7) + 0), RW(0)); goto L_0029C7F8; }
L_0029C7F8:;
 return;
}

void F_0029C800(Ctx *c) { /* func_0029C800 */
ENTER(0x29c800);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 624);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RSD(3) <= 0; SET32(3, RW(0) + -1); if (t) goto L_0029C824; }
SET64(2, (s64)(s32)0x410000);
SET64(6, (s32)rd32(c, (RW(2) + 628)));
{ int t = RD(6) != RD(3); SET64(9, (s64)(s32)0x540000); if (t) goto L_0029C830; }
L_0029C824:;
SET64(2, RD(0) + RD(0)); return;
L_0029C830:;
SET32(5, RW(0) + 1);
SET32(3, RW(9) + -27564);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(4) != RD(5); SET32(3, RW(6) << 2); if (t) goto L_0029C8C8; }
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
SET32(7, RW(2) + -27600);
SET64(2, (s64)(s32)0x540000);
SET64(5, rd64(c, (RW(7) + 0)));
SET32(3, RW(3) + -27584);
SET32(8, RW(2) + -27568);
SET32(4, RW(6) << 2);
wr64(c, (RW(3) + 0), RD(5));
SET64(2, rd64(c, (RW(7) + 8)));
SET64(6, (s64)(s32)0x4b0000);
SET32(6, RW(6) + RW(4));
SET64(6, (s32)rd32(c, (RW(6) + 8256)));
wr64(c, (RW(3) + 8), RD(2));
wr32(c, (RW(8) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(6) + 0)));
SET64(2, rd16(c, (RW(7) + 8)));
SET64(6, RD(4) & 0xffff);
SET64(2, RD(6) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_0029C8B4; }
SET64(2, rd64(c, (RW(7) + 0)));
SET64(3, (s64)(s32)0x10000);
SET64(2, RD(2) + RD(3));
wr64(c, (RW(7) + 0), RD(2));
L_0029C8B4:;
wr16(c, (RW(7) + 8), (u16)RW(6));
SET64(2, rd64(c, (RW(7) + 0)));
wr32(c, (RW(8) + 0), RW(7));
SET64(5, RD(6) + RD(2)); goto L_0029C90C;
L_0029C8C8:;
SET64(2, (s64)(s32)0x540000);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + RW(3));
SET64(4, (s32)rd32(c, (RW(4) + 8256)));
SET32(2, RW(2) + -27568);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(6, RD(3) & 0xffff);
SET64(4, rd64(c, (RW(5) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(5, RD(6) + RD(4));
SET64(2, rd16(c, (RW(3) + 8)));
SET64(2, RD(6) < RD(2));
{ int t = RD(2) == RD(0); SET32(4, RW(9) + -27564); if (t) goto L_0029C910; }
SET64(2, (s64)(s32)0x10000);
SET64(5, RD(5) + RD(2));
L_0029C90C:;
SET32(4, RW(9) + -27564);
L_0029C910:;
SET64(2, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + -1);
wr32(c, (RW(4) + 0), RW(3)); return;
}

void F_0029C928(Ctx *c) { /* func_0029C928 */
ENTER(0x29c928);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29c938);  F_0029C800(c);
SET64(3, (s64)(s32)0x410000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, rd64(c, (RW(3) + 616)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_0029C958(Ctx *c) { /* func_0029C958 */
ENTER(0x29c958);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029CAD0(c); return; }
}

void F_0029C970(Ctx *c) { /* func_0029C970 */
ENTER(0x29c970);
SET64(3, (s64)(s32)0x410000);
SET64(2, rd64(c, (RW(3) + 616))); return;
}

void F_0029C980(Ctx *c) { /* func_0029C980 */
ENTER(0x29c980);
SET64(3, RD(4) + RD(0));
SET64(4, (s64)(s32)0x410000);
SET64(2, RD(3) << 5);
SET64(5, rd64(c, (RW(4) + 616)));
SET64(2, RD(2) - RD(3));
SET32(29, RW(29) + -16);
SET64(4, RD(2) << 6);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, RD(4) - RD(2));
SET64(4, RD(4) << 3);
SET64(4, RD(4) + RD(3));
SET64(31, 0x29c9b4); SET64(4, RD(4) << 6); F_0011F988(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0029C9C0(Ctx *c) { /* func_0029C9C0 */
ENTER(0x29c9c0);
SET64(2, RD(4) << 5);
SET64(3, (s64)(s32)0x410000);
SET64(2, RD(2) - RD(4));
SET64(5, rd64(c, (RW(3) + 616)));
SET64(2, RD(2) << 2);
SET32(29, RW(29) + -16);
SET64(2, RD(2) + RD(4));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29c9e8); SET64(4, RD(2) << 3); F_0011F988(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0029C9F8(Ctx *c) { /* func_0029C9F8 */
ENTER(0x29c9f8);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -16);
SET64(5, rd64(c, (RW(2) + 616)));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29ca10);  F_0011F988(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0029CA20(Ctx *c) { /* func_0029CA20 */
ENTER(0x29ca20);
SET64(4, RD(4) << 32);
SET64(4, RSD(4) >> 32);
SET64(1, (s64)(s32)0x49740000);
SET64(1, RD(1) | 0x2400);
c->f[2].u = RW(1);
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 616));
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu(F(0) * F(2));
c->f[0].f = fpu_div(F(0), F(1));
 return;
}

void F_0029CA60(Ctx *c) { /* func_0029CA60 */
ENTER(0x29ca60);
SET64(4, RD(4) << 32);
SET64(4, RSD(4) >> 32);
SET64(1, (s64)(s32)0x447a0000);
c->f[2].u = RW(1);
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 616));
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu(F(0) * F(2));
c->f[0].f = fpu_div(F(0), F(1));
 return;
}

void F_0029CAA0(Ctx *c) { /* func_0029CAA0 */
ENTER(0x29caa0);
SET64(4, RD(4) << 32);
SET64(4, RSD(4) >> 32);
SET64(2, (s64)(s32)0x410000);
c->f[1].u = RW(4);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].u = rd32(c, (RW(2) + 616));
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu_div(F(1), F(0));
 return;
}

void F_0029CAD0(Ctx *c) { /* func_0029CAD0 */
ENTER(0x29cad0);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(2) + 616), RD(4)); return;
}

void F_0029CAE0(Ctx *c) { /* func_0029CAE0 */
ENTER(0x29cae0);
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 1);
wr32(c, (RW(4) + 24), RW(0));
wr64(c, (RW(4) + 8), RD(2));
wr64(c, (RW(4) + 0), RD(0));
wr64(c, (RW(4) + 16), RD(0)); return;
}

void F_0029CB00(Ctx *c) { /* func_0029CB00 */
ENTER(0x29cb00);
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

void F_0029CB40(Ctx *c) { /* func_0029CB40 */
ENTER(0x29cb40);
SET32(29, RW(29) + -48);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x29cb60); SET64(4, RD(0) + RD(0)); F_00104EB8(c);
SET64(31, 0x29cb68);  F_00105C90(c);
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
SET64(31, 0x29cb98); SET64(16, RD(3) & RD(2)); F_00105538(c);
SET64(4, RD(17) << 32);
SET64(31, 0x29cba4); SET64(4, RD(4) >> 32); F_00105BC8(c);
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

void F_0029CBD0(Ctx *c) { /* func_0029CBD0 */
ENTER(0x29cbd0);
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
{ int t = RD(8) == RD(3); wr32(c, (RW(4) + 132), RW(5)); if (t) goto L_0029CCB4; }
SET32(3, RW(0) + 50);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 10); if (t) goto L_0029CCB4; }
{ int t = RD(8) == RD(3);  if (t) goto L_0029CCB4; }
SET32(3, RW(0) + 2);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 49); if (t) goto L_0029CCB4; }
{ int t = RD(8) == RD(3);  if (t) goto L_0029CCA0; }
SET32(3, RW(0) + 1);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 48); if (t) goto L_0029CCA0; }
{ int t = RD(8) == RD(3);  if (t) goto L_0029CC90; }
{ int t = RD(8) == RD(0);  if (t) goto L_0029CC90; }
SET32(4, RW(2) + 16); goto L_0029CCC4;
L_0029CC90:;
SET64(3, (s32)rd32(c, (RW(2) + 132)));
SET32(3, RW(3) << 2);
wr32(c, (RW(2) + 132), RW(3)); goto L_0029CCC0;
L_0029CCA0:;
SET64(4, (s32)rd32(c, (RW(2) + 132)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(2) + 132), RW(3)); goto L_0029CCC0;
L_0029CCB4:;
SET64(3, (s32)rd32(c, (RW(2) + 132)));
SET32(3, RW(3) << 1);
wr32(c, (RW(2) + 132), RW(3));
L_0029CCC0:;
SET32(4, RW(2) + 16);
L_0029CCC4:;
SET32(5, RW(2) + 128); { F_0010FF58(c); return; }
}

void F_0029CCD0(Ctx *c) { /* func_0029CCD0 */
ENTER(0x29ccd0);
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

void F_0029CDB0(Ctx *c) { /* func_0029CDB0 */
ENTER(0x29cdb0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029CDF8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -23728);
SET64(31, 0x29cde0); wr32(c, (RW(17) + 8), RW(2)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_0029CDFC; }
SET64(31, 0x29cdf8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0029CDF8:;
SET64(2, RD(17) + RD(0));
L_0029CDFC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029CE10(Ctx *c) { /* func_0029CE10 */
ENTER(0x29ce10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x29ce24); SET64(16, RD(4) + RD(0)); F_002AD4B0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(4, RD(16) + RD(0));
SET32(2, RW(2) + -23728);
wr32(c, (RW(16) + 128), RW(0));
SET64(31, 0x29ce3c); wr32(c, (RW(16) + 8), RW(2)); F_0029CCD0(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029CE50(Ctx *c) { /* func_0029CE50 */
ENTER(0x29ce50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29ce60); SET64(4, (s32)rd32(c, (RW(4) + 0))); F_002564C0(c);
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
{ int t = c->fcc;  if (t) goto L_0029CEA4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_0029CEC8;
L_0029CEA4:;
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
{ int t = !c->fcc;  if (t) goto L_0029CEC0; }
 goto L_0029CEC4;
L_0029CEC0:;
c->f[0].u = c->f[1].u;
L_0029CEC4:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0029CEC8:;
SET32(29, RW(29) + 16); return;
}

void F_0029CED0(Ctx *c) { /* func_0029CED0 */
ENTER(0x29ced0);
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = RW(2);
c->fcc = F(12) <= F(2);
{ int t = c->fcc;  if (t) goto L_0029CEF0; }
SET64(3, (s64)(s32)0x3f800000); goto L_0029CF14;
L_0029CEF0:;
c->f[2].u = RW(0);
c->fcc = F(12) < F(2);
{ int t = !c->fcc;  if (t) goto L_0029CF0C; }
 goto L_0029CF10;
L_0029CF0C:;
c->f[2].u = c->f[12].u;
L_0029CF10:;
SET64(3, (s64)(s32)0x3f800000);
L_0029CF14:;
SET64(2, (s64)(s32)0x44790000);
c->f[1].u = RW(3);
SET64(2, RD(2) | 0xc000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(2) - F(1));
c->f[0].f = fpu(F(0) * F(1));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
SET64(4, (s32)rd32(c, (RW(4) + 0))); { F_00256410(c); return; }
}

void F_0029CF50(Ctx *c) { /* func_0029CF50 */
ENTER(0x29cf50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29cf60); SET64(4, (s32)rd32(c, (RW(4) + 0))); F_002573E8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

static void B_0029CF70(Ctx *c, u32 entry) { /* func_0029CF70 */
ENTER(entry);
switch (entry) { case 0x29cfa4: goto L_0029CFA4; case 0x29cfac: goto L_0029CFAC; case 0x29cfb4: goto L_0029CFB4; case 0x29cfbc: goto L_0029CFBC; case 0x29cfc4: goto L_0029CFC4; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29cf80); SET64(4, (s32)rd32(c, (RW(4) + 0))); F_002556F8(c);
SET64(1, RD(2) < (u64)(s64)7);
{ int t = RD(1) == RD(0); SET64(3, (s64)(s32)0x4b0000); if (t) goto L_0029CFCC; }
SET32(2, RW(2) << 2);
SET32(3, RW(3) + 8288);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ u32 t = RW(2);  switch (t) { case 0x29cfa4: goto L_0029CFA4; case 0x29cfac: goto L_0029CFAC; case 0x29cfb4: goto L_0029CFB4; case 0x29cfbc: goto L_0029CFBC; case 0x29cfc4: goto L_0029CFC4; default: rt_jump(c, t); return; } }
L_0029CFA4:;
SET32(2, RW(0) + 1); goto L_0029CFD0;
L_0029CFAC:;
SET64(2, RD(0) + RD(0)); goto L_0029CFD0;
L_0029CFB4:;
SET64(2, RD(0) + RD(0)); goto L_0029CFD0;
L_0029CFBC:;
SET64(2, RD(0) + RD(0)); goto L_0029CFD0;
L_0029CFC4:;
SET64(2, RD(0) + RD(0)); goto L_0029CFD0;
L_0029CFCC:;
SET64(2, RD(0) + RD(0));
L_0029CFD0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}
void F_0029CF70(Ctx *c) { B_0029CF70(c, 0x29cf70); }
void F_0029CFA4(Ctx *c) { B_0029CF70(c, 0x29cfa4); }
void F_0029CFAC(Ctx *c) { B_0029CF70(c, 0x29cfac); }
void F_0029CFB4(Ctx *c) { B_0029CF70(c, 0x29cfb4); }
void F_0029CFBC(Ctx *c) { B_0029CF70(c, 0x29cfbc); }
void F_0029CFC4(Ctx *c) { B_0029CF70(c, 0x29cfc4); }

static void B_0029CFE0(Ctx *c, u32 entry) { /* func_0029CFE0 */
ENTER(entry);
switch (entry) { case 0x29d020: goto L_0029D020; case 0x29d028: goto L_0029D028; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x29cff8); SET64(4, (s32)rd32(c, (RW(4) + 0))); F_002556F8(c);
SET64(1, RD(2) < (u64)(s64)7);
{ int t = RD(1) == RD(0);  if (t) goto L_0029D058; }
SET64(4, (s64)(s32)0x4b0000);
SET32(3, RW(2) << 2);
SET32(4, RW(4) + 8320);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x29d020: goto L_0029D020; case 0x29d028: goto L_0029D028; default: rt_jump(c, t); return; } }
L_0029D020:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_0029D05C;
L_0029D028:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d034); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
SET64(31, 0x29d03c); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_00255608(c);
SET64(31, 0x29d044); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024C9D0(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d050); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
 { POLL(); goto L_0029D020; }
L_0029D058:;
SET64(31, rd64(c, (RW(29) + 16)));
L_0029D05C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void F_0029CFE0(Ctx *c) { B_0029CFE0(c, 0x29cfe0); }
void F_0029D020(Ctx *c) { B_0029CFE0(c, 0x29d020); }
void F_0029D028(Ctx *c) { B_0029CFE0(c, 0x29d028); }

void F_0029D070(Ctx *c) { /* func_0029D070 */
ENTER(0x29d070);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x29d088); SET64(4, (s32)rd32(c, (RW(4) + 0))); F_002573E8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0029D098; }
L_0029D090:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_0029D0AC;
L_0029D098:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x29d0a4); SET32(5, RW(0) + 1); F_00257278(c);
 { POLL(); goto L_0029D090; }
L_0029D0AC:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void B_0029D0C0(Ctx *c, u32 entry) { /* func_0029D0C0 */
ENTER(entry);
switch (entry) { case 0x29d104: goto L_0029D104; case 0x29d118: goto L_0029D118; case 0x29d138: goto L_0029D138; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET64(31, 0x29d0e0); SET64(16, RD(5) + RD(0)); F_002556F8(c);
SET64(1, RD(2) < (u64)(s64)7);
{ int t = RD(1) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0029D138; }
SET32(3, RW(2) << 2);
SET32(4, RW(4) + 8352);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x29d104: goto L_0029D104; case 0x29d118: goto L_0029D118; case 0x29d138: goto L_0029D138; default: rt_jump(c, t); return; } }
L_0029D104:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x29d110); SET64(5, RD(16) & 0xff); F_0024C678(c);
wr8(c, (RW(17) + 16), (u8)RW(16)); goto L_0029D138;
L_0029D118:;
{ int t = RD(16) != RD(0);  if (t) goto L_0029D138; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x29d12c); SET64(5, RD(0) + RD(0)); F_0024C678(c);
SET64(31, 0x29d134); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_0024C958(c);
wr8(c, (RW(17) + 16), (u8)RW(0));
L_0029D138:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void F_0029D0C0(Ctx *c) { B_0029D0C0(c, 0x29d0c0); }
void F_0029D104(Ctx *c) { B_0029D0C0(c, 0x29d104); }
void F_0029D118(Ctx *c) { B_0029D0C0(c, 0x29d118); }
void F_0029D138(Ctx *c) { B_0029D0C0(c, 0x29d138); }

static void B_0029D150(Ctx *c, u32 entry) { /* func_0029D150 */
ENTER(entry);
switch (entry) { case 0x29d18c: goto L_0029D18C; case 0x29d1c8: goto L_0029D1C8; case 0x29d1e4: goto L_0029D1E4; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x29d168); SET64(4, (s32)rd32(c, (RW(4) + 0))); F_002556F8(c);
SET64(1, RD(2) < (u64)(s64)7);
{ int t = RD(1) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0029D1E4; }
SET32(3, RW(2) << 2);
SET32(4, RW(4) + 8384);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x29d18c: goto L_0029D18C; case 0x29d1c8: goto L_0029D1C8; case 0x29d1e4: goto L_0029D1E4; default: rt_jump(c, t); return; } }
L_0029D18C:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d198); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
SET64(31, 0x29d1a0); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024C598(c);
SET64(2, rd8(c, (RW(16) + 16)));
{ int t = RD(2) != RD(0);  if (t) goto L_0029D1B4; }
SET64(31, 0x29d1b4); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0024C958(c);
L_0029D1B4:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d1c0); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0029D1E8;
L_0029D1C8:;
SET64(31, 0x29d1d0); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_002573E8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0029D1E4; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x29d1e4); SET64(5, RD(0) + RD(0)); F_00257278(c);
L_0029D1E4:;
SET64(31, rd64(c, (RW(29) + 16)));
L_0029D1E8:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void F_0029D150(Ctx *c) { B_0029D150(c, 0x29d150); }
void F_0029D18C(Ctx *c) { B_0029D150(c, 0x29d18c); }
void F_0029D1C8(Ctx *c) { B_0029D150(c, 0x29d1c8); }
void F_0029D1E4(Ctx *c) { B_0029D150(c, 0x29d1e4); }

void F_0029D200(Ctx *c) { /* func_0029D200 */
ENTER(0x29d200);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x29d228); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_0029D280; }
{ int t = RD(2) == RD(0);  if (t) goto L_0029D244; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_0029D2C4;
L_0029D244:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d250); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x29d260); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x29d26c); SET64(5, RD(2) + RD(0)); F_0024C350(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d278); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
 goto L_0029D2C0;
L_0029D280:;
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x29d290); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d2a0); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET32(2, RW(16) >> 8);
SET64(5, RD(16) & 0xff);
SET64(31, 0x29d2b4); SET64(6, RD(2) & 0xffff); F_0024C480(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d2c0); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
L_0029D2C0:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0029D2C4:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029D2E0(Ctx *c) { /* func_0029D2E0 */
ENTER(0x29d2e0);
SET64(2, RD(0) + RD(0)); return;
}

void F_0029D2F0(Ctx *c) { /* func_0029D2F0 */
ENTER(0x29d2f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0029D378; }
{ int t = RD(5) == RD(0); SET32(4, RW(0) + 20); if (t) goto L_0029D34C; }
L_0029D310:;
SET64(2, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(2) + -27504)));
SET64(31, 0x29d320); wr32(c, (RW(16) + 4), RW(5)); F_0010F6A0(c);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(5, (s32)rd32(c, (RW(2) + 4)));
SET64(6, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x29d334); SET64(4, (s32)rd32(c, (RW(16) + 12))); F_00254B58(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d344); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET32(2, RW(0) + 1); goto L_0029D37C;
L_0029D34C:;
SET64(31, 0x29d354);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_0029D370; }
SET64(5, (s32)rd32(c, (RW(16) + 8)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x29d36c); SET32(6, RW(0) + 64); F_002AB430(c);
SET64(5, RD(2) + RD(0));
L_0029D370:;
 { POLL(); goto L_0029D310; }
L_0029D378:;
SET64(2, RD(0) + RD(0));
L_0029D37C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029D390(Ctx *c) { /* func_0029D390 */
ENTER(0x29d390);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void F_0029D3A0(Ctx *c) { /* func_0029D3A0 */
ENTER(0x29d3a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029D41C; }
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s32)rd32(c, (RW(2) + -27504)));
SET32(3, RW(3) + -23704);
SET64(31, 0x29d3d4); wr32(c, (RW(17) + 20), RW(3)); F_0010F6A0(c);
SET64(31, 0x29d3dc); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_00254FE0(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d3e8); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(4) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_0029D408; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x29d404); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_0029D408:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_0029D420; }
SET64(31, 0x29d41c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0029D41C:;
SET64(2, RD(17) + RD(0));
L_0029D420:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029D440(Ctx *c) { /* func_0029D440 */
ENTER(0x29d440);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 0), RW(0));
SET32(2, RW(2) + -23704);
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
SET64(2, (s32)rd32(c, (RW(2) + -27476)));
SET32(3, RSW(3) >> 3);
SET32(3, RW(3) + RW(6));
SET32(2, RW(2) + 1);
mul_s(c, 0, 2, RSW(3), RSW(2));
SET32(3, RW(2) + 2048);
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 11); if (t) goto L_0029D4C8; }
SET32(2, RW(3) + 2047);
SET32(2, RSW(2) >> 11);
L_0029D4C8:;
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

void F_0029D500(Ctx *c) { /* func_0029D500 */
ENTER(0x29d500);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(3, RW(3) << 8);
SET64(2, RD(3) | RD(2)); return;
}

void F_0029D520(Ctx *c) { /* func_0029D520 */
ENTER(0x29d520);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029D568; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -23664);
SET64(31, 0x29d550); wr32(c, (RW(17) + 8), RW(2)); F_002AD5C0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_0029D56C; }
SET64(31, 0x29d568); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0029D568:;
SET64(2, RD(17) + RD(0));
L_0029D56C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029D580(Ctx *c) { /* func_0029D580 */
ENTER(0x29d580);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x29d5a4); SET32(4, RW(0) + 20); F_00100670(c);
{ int t = RD(2) != RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0029D5B4; }
L_0029D5AC:;
SET64(2, RD(17) + RD(0)); goto L_0029D5DC;
L_0029D5B4:;
SET64(16, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x29d5c4); SET64(5, RD(0) + RD(0)); F_002AD620(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -23664);
wr32(c, (RW(17) + 8), RW(2));
wr32(c, (RW(17) + 12), RW(16));
wr32(c, (RW(17) + 16), RW(18)); { POLL(); goto L_0029D5AC; }
L_0029D5DC:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0029D600(Ctx *c) { /* func_0029D600 */
ENTER(0x29d600);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(2) + -27504)));
SET64(31, 0x29d628); SET64(16, RD(5) + RD(0)); F_0010F6A0(c);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x29d640); SET64(16, (s32)rd32(c, (RW(2) + 4))); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x29d654); SET64(7, RD(16) + RD(0)); F_00249570(c);
SET64(17, RD(2) + RD(0));
L_0029D658:;
SET64(31, 0x29d660); SET64(4, (s32)rd32(c, (RW(18) + 0))); F_00249E30(c);
SET32(3, RW(0) + 3);
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_0029D658; } }
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d680); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 8)));
SET64(31, 0x29d694); SET32(5, RW(16) + RW(2)); F_0010FF58(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0029D6B0(Ctx *c) { /* func_0029D6B0 */
ENTER(0x29d6b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(18) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0029D734; }
SET64(16, (s32)rd32(c, (RW(18) + 0)));
SET64(31, 0x29d6dc); SET32(4, RW(28) + -30056); F_002A8700(c);
SET64(3, (s32)rd32(c, (RW(28) + -30344)));
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + -27424);
SET32(4, RW(28) + -30056);
SET32(3, RW(3) + -1);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(28) + -30344), RW(3));
SET64(31, 0x29d700); wr8(c, (RW(2) + 0), (u8)RW(16)); F_002A86B0(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
{ int t = RD(4) == RD(0); SET64(2, RD(17) << 48); if (t) goto L_0029D720; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x29d71c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, RD(17) << 48);
L_0029D720:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(18) + RD(0)); if (t) goto L_0029D738; }
SET64(31, 0x29d734); SET64(4, RD(18) + RD(0)); F_001004B0(c);
L_0029D734:;
SET64(2, RD(18) + RD(0));
L_0029D738:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0029D750(Ctx *c) { /* func_0029D750 */
ENTER(0x29d750);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x29d774); SET32(4, RW(28) + -30056); F_002A8700(c);
SET64(2, (s32)rd32(c, (RW(28) + -30344)));
{ int t = RSD(2) <= 0; SET64(3, (s64)(s32)0x540000); if (t) goto L_0029D7E0; }
SET64(5, (s32)rd32(c, (RW(28) + -30344)));
L_0029D784:;
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + -27424);
SET32(4, RW(28) + -30056);
SET32(3, RW(2) + RW(5));
SET64(18, rd8(c, (RW(3) + 0)));
SET32(2, RW(5) + 1);
SET64(31, 0x29d7a4); wr32(c, (RW(28) + -30344), RW(2)); F_002A86B0(c);
SET32(4, RW(0) + 20);
SET64(31, 0x29d7b0); wr32(c, (RW(17) + 0), RW(18)); F_00100670(c);
{ int t = RD(2) == RD(0); SET32(4, RW(16) + 1); if (t) goto L_0029D7D4; }
SET32(3, RW(0) + -4);
SET32(5, RW(4) << 1);
SET32(6, RW(0) + 64);
SET64(4, RD(2) + RD(0));
SET32(2, RW(5) + 282);
SET64(31, 0x29d7d4); SET64(5, RD(2) & RD(3)); F_002AB430(c);
L_0029D7D4:;
wr32(c, (RW(17) + 4), RW(2));
SET64(2, RD(17) + RD(0)); goto L_0029D83C;
L_0029D7E0:;
SET64(4, RD(0) + RD(0));
SET32(3, RW(3) + -27424);
L_0029D7E8:;
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
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 8); if (t) { POLL(); goto L_0029D7E8; } }
SET64(5, (s32)rd32(c, (RW(28) + -30344))); { POLL(); goto L_0029D784; }
L_0029D83C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0029D860(Ctx *c) { /* func_0029D860 */
ENTER(0x29d860);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_0029D88C; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
L_0029D880:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1); goto L_0029D8C4;
L_0029D88C:;
SET64(2, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(2) + -27504)));
SET64(31, 0x29d89c); SET64(16, (s32)rd32(c, (RW(17) + 8))); F_0010F6A0(c);
SET32(2, RW(16) >> 8);
SET64(4, RD(16) & 0xff);
SET64(31, 0x29d8ac); SET64(5, RD(2) & 0xffff); F_0024A840(c);
wr32(c, (RW(17) + 4), RW(2));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d8bc); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET64(2, (s32)rd32(c, (RW(17) + 4))); { POLL(); goto L_0029D880; }
L_0029D8C4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029D8E0(Ctx *c) { /* func_0029D8E0 */
ENTER(0x29d8e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029D964; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -23632);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 0), RW(2)); if (t) goto L_0029D94C; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -23600);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 0), RW(3)); if (t) goto L_0029D940; }
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d92c); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
SET64(31, 0x29d934); SET64(4, (s32)rd32(c, (RW(17) + 4))); F_0024A998(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29d940); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
L_0029D940:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x29d94c); SET64(5, RD(0) + RD(0)); F_002AD690(c);
L_0029D94C:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_0029D968; }
SET64(31, 0x29d964); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0029D964:;
SET64(2, RD(17) + RD(0));
L_0029D968:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029D980(Ctx *c) { /* func_0029D980 */
ENTER(0x29d980);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x29d9a4); SET64(4, RD(5) + RD(0)); rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET64(31, 0x29d9b0); SET64(4, RD(17) + RD(0)); F_002AD6E0(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 8), RW(16));
SET32(2, RW(2) + -23632);
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x29d9d4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029D9F0(Ctx *c) { /* func_0029D9F0 */
ENTER(0x29d9f0);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + -27504)));
SET64(31, 0x29da1c); SET64(16, RD(6) + RD(0)); F_0010F6A0(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(5, RD(17) + RD(0));
SET64(31, 0x29da2c); SET64(6, RD(16) + RD(0)); F_0024B358(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29da3c); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0029DA60(Ctx *c) { /* func_0029DA60 */
ENTER(0x29da60);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x29da7c); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
SET64(31, 0x29da84); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_0024AFE0(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29da94); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029DAB0(Ctx *c) { /* func_0029DAB0 */
ENTER(0x29dab0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x29dacc); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
SET64(31, 0x29dad4); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_0024B758(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29dae4); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029DB00(Ctx *c) { /* func_0029DB00 */
ENTER(0x29db00);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x29db1c); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
SET64(31, 0x29db24); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_0024B530(c);
SET32(16, RW(2) << 11);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29db34); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029DB50(Ctx *c) { /* func_0029DB50 */
ENTER(0x29db50);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(5) + 8)));
{ int t = RD(16) != RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0029DBB0; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x29db84);  rt_call(c, t); }
SET64(16, RD(2) + RD(0));
SET32(4, RW(29) + 64);
SET64(5, RD(16) + RD(0));
SET64(31, 0x29db98); SET32(6, RW(0) + 64); F_002AB430(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x29dba4); SET32(5, RW(29) + 64); F_002AB310(c);
SET32(4, RW(29) + 64);
SET64(31, 0x29dbb0); SET32(5, RW(0) + -1); F_002AB360(c);
L_0029DBB0:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29dbbc); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
{ int t = RSD(16) >= 0; SET32(5, RSW(16) >> 11); if (t) goto L_0029DBCC; }
SET32(2, RW(16) + 2047);
SET32(5, RSW(2) >> 11);
L_0029DBCC:;
SET64(6, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x29dbd8); SET64(4, (s32)rd32(c, (RW(18) + 4))); F_0024AF48(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29dbe8); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0029DC10(Ctx *c) { /* func_0029DC10 */
ENTER(0x29dc10);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(18, (s32)rd32(c, (RW(5) + 8)));
{ int t = RD(18) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029DC70; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x29dc44);  rt_call(c, t); }
SET64(18, RD(2) + RD(0));
SET32(4, RW(29) + 64);
SET64(5, RD(18) + RD(0));
SET64(31, 0x29dc58); SET32(6, RW(0) + 64); F_002AB430(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x29dc64); SET32(5, RW(29) + 64); F_002AB310(c);
SET32(4, RW(29) + 64);
SET64(31, 0x29dc70); SET32(5, RW(0) + -1); F_002AB360(c);
L_0029DC70:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29dc7c); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
{ int t = RSD(18) >= 0; SET32(5, RSW(18) >> 11); if (t) goto L_0029DC8C; }
SET32(2, RW(18) + 2047);
SET32(5, RSW(2) >> 11);
L_0029DC8C:;
SET64(6, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x29dc98); SET64(4, (s32)rd32(c, (RW(17) + 4))); F_0024AF48(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29dca4); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
L_0029DCA4:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29dcb0); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
SET64(31, 0x29dcb8); SET64(4, (s32)rd32(c, (RW(17) + 4))); F_0024B758(c);
SET64(18, RD(2) + RD(0));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29dcc8); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET32(2, RW(0) + 3);
{ int t = RD(18) != RD(2);  if (t) { POLL(); goto L_0029DCA4; } }
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29dce0); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
SET64(31, 0x29dce8); SET64(4, (s32)rd32(c, (RW(17) + 4))); F_0024B6F0(c);
SET32(17, RW(2) << 11);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29dcf8); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x29dd04); SET32(5, RW(17) + RW(4)); F_0010FF58(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_0029DD20(Ctx *c) { /* func_0029DD20 */
ENTER(0x29dd20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0029DD48; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
L_0029DD3C:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1); goto L_0029DD78;
L_0029DD48:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29dd54); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x29dd60); SET64(5, RD(0) + RD(0)); F_0024A4D8(c);
wr32(c, (RW(16) + 4), RW(2));
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29dd70); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
SET64(2, (s32)rd32(c, (RW(16) + 4))); { POLL(); goto L_0029DD3C; }
L_0029DD78:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029DD90(Ctx *c) { /* func_0029DD90 */
ENTER(0x29dd90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0029DE04; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -23600);
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_0029DDE0; }
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29ddcc); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F6A0(c);
SET64(31, 0x29ddd4); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_0024A998(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29dde0); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
L_0029DDE0:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x29ddec); SET64(5, RD(0) + RD(0)); F_002AD690(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_0029DE08; }
SET64(31, 0x29de04); SET64(4, RD(16) + RD(0)); F_001004B0(c);
L_0029DE04:;
SET64(2, RD(16) + RD(0));
L_0029DE08:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029DE20(Ctx *c) { /* func_0029DE20 */
ENTER(0x29de20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x29de3c); SET64(16, RD(5) + RD(0)); F_002AD6E0(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 4), RW(0));
SET32(2, RW(2) + -23600);
wr32(c, (RW(17) + 0), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x29de5c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x29de70); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029DE90(Ctx *c) { /* func_0029DE90 */
ENTER(0x29de90);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(3) + -27440)));
{ int t = RD(3) != RD(0);  if (t) goto L_0029DEB0; }
L_0029DEA8:;
SET64(31, rd64(c, (RW(29) + 0))); goto L_0029DEF4;
L_0029DEB0:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x29dec0);  rt_call(c, t); }
SET64(4, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
wr32(c, (RW(4) + -27456), RW(2));
SET64(31, 0x29ded4); SET64(4, (s32)rd32(c, (RW(3) + -27504))); F_0010F6A0(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x29dee0); SET32(4, RW(4) + -27456); F_00254700(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x29deec); SET64(4, (s32)rd32(c, (RW(2) + -27504))); F_0010F680(c);
 { POLL(); goto L_0029DEA8; }
L_0029DEF4:;
SET32(29, RW(29) + 16); return;
}

void F_0029DF00(Ctx *c) { /* func_0029DF00 */
ENTER(0x29df00);
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x540000);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(3) + -27440)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0029DF2C; }
L_0029DF24:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_0029DFA0;
L_0029DF2C:;
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -27456);
SET64(31, 0x29df40); SET32(6, RW(0) + 16); F_001273D0(c);
SET64(2, (s64)(s32)0x540000);
SET32(5, RW(16) << 3);
wr32(c, (RW(2) + -27452), RW(17));
SET32(2, RW(17) + 1);
mul_s(c, 0, 3, RSW(16), RSW(2));
SET32(4, RW(0) + 20);
SET64(2, (s64)(s32)0x540000);
SET32(3, RW(5) + RW(3));
SET64(31, 0x29df68); wr32(c, (RW(2) + -27444), RW(3)); F_00100670(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0);  if (t) goto L_0029DF88; }
SET64(2, (s64)(s32)0x540000);
SET64(5, (s32)rd32(c, (RW(2) + -27444)));
SET64(31, 0x29df84); SET32(6, RW(0) + 64); F_002AB430(c);
SET64(4, RD(2) + RD(0));
L_0029DF88:;
SET64(5, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
wr32(c, (RW(5) + -27440), RW(4));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(3) + -27448), RW(4)); { POLL(); goto L_0029DF24; }
L_0029DFA0:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029DFB0(Ctx *c) { /* func_0029DFB0 */
ENTER(0x29dfb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_0029DFE4; }
SET64(2, RD(5) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0;  if (t) goto L_0029DFE0; }
SET64(31, 0x29dfe0);  F_001004B0(c);
L_0029DFE0:;
SET64(2, RD(16) + RD(0));
L_0029DFE4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029E000(Ctx *c) { /* func_0029E000 */
ENTER(0x29e000);
SET64(4, RD(5) & 0xff); { F_00257D38(c); return; }
}

void F_0029E010(Ctx *c) { /* func_0029E010 */
ENTER(0x29e010);
SET64(2, (s32)rd32(c, (RW(4) + 60))); return;
}

void F_0029E020(Ctx *c) { /* func_0029E020 */
ENTER(0x29e020);
SET64(4, (s32)rd32(c, (RW(4) + 32))); { F_0010F680(c); return; }
}

void F_0029E030(Ctx *c) { /* func_0029E030 */
ENTER(0x29e030);
SET64(4, (s32)rd32(c, (RW(4) + 32))); { F_0010F6A0(c); return; }
}

void F_0029E040(Ctx *c) { /* func_0029E040 */
ENTER(0x29e040);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29e050);  F_0024E118(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0029E060(Ctx *c) { /* func_0029E060 */
ENTER(0x29e060);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x29e070);  F_0024D7B8(c);
{ int t = RD(2) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0029E080; }
L_0029E078:;
SET64(2, RD(0) + RD(0)); goto L_0029E090;
L_0029E080:;
SET64(31, 0x29e088);  F_0024E100(c);
 { POLL(); goto L_0029E078; }
L_0029E090:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0029E0A0(Ctx *c) { /* func_0029E0A0 */
ENTER(0x29e0a0);
 return;
}

void F_0029E0B0(Ctx *c) { /* func_0029E0B0 */
ENTER(0x29e0b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x29e0c8); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_0024D7B8(c);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0029E0D8; }
L_0029E0D0:;
SET32(2, RW(0) + 1); goto L_0029E188;
L_0029E0D8:;
SET64(31, 0x29e0e0);  F_00254600(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x29e0ec); SET32(4, RW(4) + -27500); F_0024D7E0(c);
SET64(4, (s64)(s32)0x2a0000);
SET64(5, RD(0) + RD(0));
SET64(31, 0x29e0fc); SET32(4, RW(4) + -8032); F_0024D7C8(c);
SET64(31, 0x29e104);  F_0024BEC0(c);
SET64(16, (s64)(s32)0x540000);
SET32(16, RW(16) + -27536);
{ int t = RD(16) == RD(0); SET64(18, (s64)(s32)0x540000); if (t) goto L_0029E118; }
SET32(16, RW(16) + 4);
L_0029E118:;
SET32(4, RW(0) + 20);
SET64(31, 0x29e124); SET32(18, RW(18) + -26384); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_0029E160; }
SET64(31, 0x29e134); SET64(4, RD(17) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(3, RW(3) + -21328);
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(17) + 4), RW(0));
SET32(2, RW(0) + 128);
wr32(c, (RW(17) + 0), RW(3));
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(2));
wr8(c, (RW(17) + 16), (u8)RW(0));
L_0029E160:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x29e16c); SET64(5, RD(17) + RD(0)); F_002AA3D0(c);
SET64(4, (s32)rd32(c, (RW(28) + -30048)));
SET64(5, (s64)(s32)0x540000);
SET32(5, RW(5) + -27536);
SET64(31, 0x29e180); SET64(6, RD(0) + RD(0)); F_002A9030(c);
 { POLL(); goto L_0029E0D0; }
L_0029E188:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0029E1A0(Ctx *c) { /* func_0029E1A0 */
ENTER(0x29e1a0);
SET32(29, RW(29) + -16);
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0029E1C0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 8416);
SET64(31, 0x29e1c0); SET64(6, RD(0) + RD(0)); F_001177B8(c);
L_0029E1C0:;
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 8448);
SET64(31, 0x29e1d4); SET64(6, RD(0) + RD(0)); F_001177B8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0029E1E0(Ctx *c) { /* func_0029E1E0 */
ENTER(0x29e1e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029E240; }
SET64(4, (s32)rd32(c, (RW(17) + 32)));
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -23568);
SET32(2, RW(2) + -23556);
wr32(c, (RW(17) + 0), RW(3));
SET64(31, 0x29e21c); wr32(c, (RW(17) + 4), RW(2)); F_0010F670(c);
SET32(4, RW(17) + 4);
SET64(31, 0x29e228); SET64(5, RD(0) + RD(0)); F_002AA530(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_0029E244; }
SET64(31, 0x29e240); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0029E240:;
SET64(2, RD(17) + RD(0));
L_0029E244:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029E260(Ctx *c) { /* func_0029E260 */
ENTER(0x29e260);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + -23688);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 0), RW(2));
SET64(31, 0x29e284); SET32(4, RW(16) + 4); F_002AA590(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(0) + 1);
SET32(2, RW(2) + -23568);
wr32(c, (RW(16) + 12), RW(3));
wr32(c, (RW(16) + 0), RW(2));
SET32(4, RW(16) + 8);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 16), RW(3));
SET32(2, RW(2) + -23556);
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 4), RW(2));
SET32(2, RW(0) + 4);
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 60), RW(2));
SET32(2, RW(0) + 16);
wr32(c, (RW(16) + 28), RW(0));
SET64(31, 0x29e2cc); wr32(c, (RW(16) + 20), RW(2)); F_0010F660(c);
wr32(c, (RW(16) + 32), RW(2));
SET32(4, RW(16) + 36);
SET64(5, RD(0) + RD(0));
SET64(31, 0x29e2e0); SET32(6, RW(0) + 24); F_001273D0(c);
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

void F_0029E330(Ctx *c) { /* func_0029E330 */
ENTER(0x29e330);
SET32(2, RW(0) + 1); return;
}

void F_0029E340(Ctx *c) { /* func_0029E340 */
ENTER(0x29e340);
SET32(4, RW(4) + -4); { F_0029E040(c); return; }
}

void F_0029E350(Ctx *c) { /* func_0029E350 */
ENTER(0x29e350);
SET32(4, RW(4) + -4); { F_0029E1E0(c); return; }
}

void F_0029E360(Ctx *c) { /* func_0029E360 */
ENTER(0x29e360);
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
{ u32 t = RW(2); SET64(31, 0x29e394); SET64(16, RD(5) + RD(0)); rt_call(c, t); }
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

void F_0029E3E0(Ctx *c) { /* func_0029E3E0 */
ENTER(0x29e3e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(5) + 48)));
SET64(31, 0x29e3f8); SET64(16, RD(5) + RD(0)); F_0027C258(c);
SET64(4, (s32)rd32(c, (RW(16) + 48)));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
SET64(5, RD(2) & 0xff);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 40)));
{ u32 t = RW(2); SET64(31, 0x29e418);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029E430(Ctx *c) { /* func_0029E430 */
ENTER(0x29e430);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(5) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 28)));
{ u32 t = RW(2); SET64(31, 0x29e450); SET64(16, RD(5) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 40)));
{ u32 t = RW(2); SET64(31, 0x29e464); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
wr32(c, (RW(16) + 56), RW(0));
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 60), (u8)RW(0));
wr16(c, (RW(16) + 66), (u16)RW(0));
wr16(c, (RW(16) + 64), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029E490(Ctx *c) { /* func_0029E490 */
ENTER(0x29e490);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(5) + 48)));
SET64(31, 0x29e4a8); SET64(16, RD(5) + RD(0)); F_0027FD70(c);
SET64(2, rd8(c, (RW(16) + 60)));
{ int t = RD(2) == RD(0);  if (t) goto L_0029E4BC; }
L_0029E4B4:;
SET32(2, RW(0) + 1); goto L_0029E4CC;
L_0029E4BC:;
SET64(31, 0x29e4c4); SET64(4, (s32)rd32(c, (RW(16) + 48))); F_0027FF58(c);
 { POLL(); goto L_0029E4B4; }
L_0029E4CC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029E4E0(Ctx *c) { /* func_0029E4E0 */
ENTER(0x29e4e0);
SET64(2, RD(4) + RD(0)); return;
}

void F_0029E4F0(Ctx *c) { /* func_0029E4F0 */
ENTER(0x29e4f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
L_0029E504:;
SET64(4, RD(17) + RD(0));
L_0029E508:;
SET64(31, 0x29e510); SET32(5, RW(0) + 16); F_002AA8F0(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(16, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x29e524); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) < RD(16));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_0029E508; } }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x29e548); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_0029E504; }
}

void F_0029E550(Ctx *c) { /* func_0029E550 */
ENTER(0x29e550);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(28) + -30340)));
{ int t = RD(2) == RD(0); c->f[20].u = c->f[12].u; if (t) goto L_0029E57C; }
SET64(2, RD(0) + RD(0)); goto L_0029E5BC;
L_0029E57C:;
SET64(31, 0x29e584); SET32(4, RW(0) + 208); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0029E5A4; }
SET64(5, RD(17) + RD(0));
SET64(4, RD(2) + RD(0));
c->f[12].u = c->f[20].u;
SET64(31, 0x29e5a0); SET32(6, RW(0) + 4096); F_0029E690(c);
SET64(16, RD(2) + RD(0));
L_0029E5A4:;
SET64(31, 0x29e5ac); wr32(c, (RW(28) + -30340), RW(16)); F_002AAB80(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x29e5b8); SET64(5, RD(16) + RD(0)); F_002AAA70(c);
SET32(2, RW(0) + 1);
L_0029E5BC:;
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0029E5E0(Ctx *c) { /* func_0029E5E0 */
ENTER(0x29e5e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029E678; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -23520);
SET32(3, RW(3) + -23504);
wr32(c, (RW(17) + 0), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 84), RW(3));
SET32(2, RW(2) + -23488);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 88), RW(2));
SET32(3, RW(3) + -23464);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 144), RW(3));
SET32(2, RW(2) + -23448);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 148), RW(2));
SET32(3, RW(3) + -23432);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 152), RW(3));
SET32(2, RW(2) + -23416);
SET64(31, 0x29e654); wr32(c, (RW(17) + 156), RW(2)); F_0027BBE8(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x29e660); SET64(5, RD(0) + RD(0)); F_002AABF0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_0029E67C; }
SET64(31, 0x29e678); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0029E678:;
SET64(2, RD(17) + RD(0));
L_0029E67C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029E690(Ctx *c) { /* func_0029E690 */
ENTER(0x29e690);
SET32(29, RW(29) + -48);
SET64(7, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET32(6, RW(0) + 33);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x29e6b4); c->f[20].u = c->f[12].u; F_002AAC90(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -23520);
SET32(3, RW(3) + -23504);
wr32(c, (RW(16) + 0), RW(2));
SET32(4, RW(16) + 160);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 84), RW(3));
SET32(2, RW(2) + -23488);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 88), RW(2));
SET32(3, RW(3) + -23464);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 144), RW(3));
SET32(2, RW(2) + -23448);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 148), RW(2));
SET32(3, RW(3) + -23432);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 152), RW(3));
SET32(2, RW(2) + -23416);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(16) + 156), RW(2));
SET64(31, 0x29e718); SET32(6, RW(0) + 32); F_001273D0(c);
SET32(2, RW(0) + 1);
SET32(4, RW(16) + 160);
wr32(c, (RW(16) + 164), RW(2));
wr32(c, (RW(16) + 160), c->f[20].u);
wr32(c, (RW(16) + 168), RW(2));
SET64(31, 0x29e734); wr32(c, (RW(16) + 172), RW(0)); F_0027B848(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void F_0029E750(Ctx *c) { /* func_0029E750 */
ENTER(0x29e750);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 24)));
{ int t = RSD(4) <= 0; SET64(17, RD(5) + RD(0)); if (t) goto L_0029E7B0; }
SET64(16, (s32)rd32(c, (RW(18) + 16)));
SET32(3, RW(4) + -1);
{ int t = RSD(4) <= 0; wr32(c, (RW(18) + 24), RW(3)); if (t) goto L_0029E7B0; }
L_0029E784:;
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x29e798); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 24)));
SET32(16, RW(16) + 128);
SET32(3, RW(4) + -1);
{ int t = RSD(4) > 0; wr32(c, (RW(18) + 24), RW(3)); if (t) { POLL(); goto L_0029E784; } }
L_0029E7B0:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0029E7D0(Ctx *c) { /* func_0029E7D0 */
ENTER(0x29e7d0);
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
{ int t = RD(3) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0029E958; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_0029E958; }
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(3, (s32)rd32(c, (RW(21) + 20)));
SET64(1, RSD(3) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_0029E880; }
SET64(4, (s32)rd32(c, (RW(21) + 16)));
{ int t = RD(4) == RD(0); SET64(5, (s64)(s32)0x2b0000); if (t) goto L_0029E848; }
SET64(31, 0x29e840); SET32(5, RW(5) + 2912); F_001022C0(c);
wr32(c, (RW(21) + 16), RW(0));
wr32(c, (RW(21) + 20), RW(0));
L_0029E848:;
SET64(16, (s32)rd32(c, (RW(17) + 16)));
SET32(2, RW(16) << 7);
wr32(c, (RW(21) + 20), RW(16));
SET64(31, 0x29e85c); SET32(4, RW(2) + 16); F_00100530(c);
SET64(5, (s64)(s32)0x2b0000);
SET64(6, (s64)(s32)0x2b0000);
SET64(8, RD(16) + RD(0));
SET64(4, RD(2) + RD(0));
SET32(5, RW(5) + 3008);
SET32(6, RW(6) + 2912);
SET64(31, 0x29e87c); SET32(7, RW(0) + 128); F_00102580(c);
wr32(c, (RW(21) + 16), RW(2));
L_0029E880:;
SET64(5, (s32)rd32(c, (RW(17) + 16)));
SET64(3, (s32)rd32(c, (RW(17) + 8)));
SET64(4, (s32)rd32(c, (RW(17) + 12)));
div_s(c, 0, RSW(3), RSW(5));
SET64(16, c->lo.d[0]);
{ int t = RSD(4) >= 0; SET64(3, RD(4) & 0xf); if (t) goto L_0029E8A8; }
{ int t = RD(3) == RD(0);  if (t) goto L_0029E8A8; }
SET32(3, RW(3) + -16);
L_0029E8A8:;
{ int t = RD(3) == RD(0);  if (t) goto L_0029E8B8; }
SET32(3, RW(3) + 16); goto L_0029E8BC;
L_0029E8B8:;
SET64(3, RD(0) + RD(0));
L_0029E8BC:;
SET32(22, RW(4) + RW(3));
SET64(20, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(21) + 24), RW(5));
mul_s(c, 0, 3, RSW(16), RSW(22));
SET64(1, RSD(0) < RSD(5));
SET64(19, RD(0) + RD(0));
{ int t = RD(1) == RD(0); SET32(23, RW(3) << 2); if (t) goto L_0029E958; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
SET32(30, RW(29) + 164);
L_0029E8E8:;
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
SET64(31, 0x29e938); SET32(7, RW(2) + 1); F_002B09B0(c);
SET64(3, (s32)rd32(c, (RW(21) + 24)));
SET32(19, RW(19) + 1);
SET32(20, RW(20) + RW(23));
SET32(18, RW(18) + RW(16));
SET64(3, RSD(19) < RSD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 128); if (t) { POLL(); goto L_0029E8E8; } }
L_0029E958:;
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

void F_0029E990(Ctx *c) { /* func_0029E990 */
ENTER(0x29e990);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029E9F8; }
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -23376);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 8), RW(2)); if (t) goto L_0029E9D4; }
SET64(5, (s64)(s32)0x2b0000);
SET64(31, 0x29e9cc); SET32(5, RW(5) + 2912); F_001022C0(c);
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 20), RW(0));
L_0029E9D4:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x29e9e0); SET64(5, RD(0) + RD(0)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_0029E9FC; }
SET64(31, 0x29e9f8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0029E9F8:;
SET64(2, RD(17) + RD(0));
L_0029E9FC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029EA10(Ctx *c) { /* func_0029EA10 */
ENTER(0x29ea10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x29ea2c); SET64(16, RD(5) + RD(0)); F_002AD4B0(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 12), RW(16));
SET32(2, RW(2) + -23376);
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

void F_0029EA60(Ctx *c) { /* func_0029EA60 */
ENTER(0x29ea60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(3) != RD(0);  if (t) goto L_0029EA7C; }
L_0029EA74:;
SET64(31, rd64(c, (RW(29) + 0))); goto L_0029EA8C;
L_0029EA7C:;
SET64(31, 0x29ea84); SET64(4, (s32)rd32(c, (RW(4) + 48))); F_0027AF28(c);
 { POLL(); goto L_0029EA74; }
L_0029EA8C:;
SET32(29, RW(29) + 16); return;
}

void F_0029EAA0(Ctx *c) { /* func_0029EAA0 */
ENTER(0x29eaa0);
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
{ int t = RD(2) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029EBC0; }
L_0029EAD0:;
SET64(16, (s32)rd32(c, (RW(28) + -30340)));
{ int t = RD(16) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0029EBB8; }
SET64(4, (s32)rd32(c, (RW(19) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(2); SET64(31, 0x29eaf0);  rt_call(c, t); }
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 3); if (t) goto L_0029EBB4; }
{ int t = RD(2) == RD(3);  if (t) goto L_0029EBB4; }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_0029EB28; }
{ int t = RD(2) == RD(3);  if (t) goto L_0029EB28; }
{ int t = RD(2) == RD(0);  if (t) goto L_0029EBB4; }
 goto L_0029EBB4;
L_0029EB28:;
SET64(2, (s32)rd32(c, (RW(19) + 16)));
SET64(3, (s32)rd32(c, (RW(19) + 56)));
SET32(2, RW(2) + 1);
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) != RD(0); SET32(4, RW(0) + 20); if (t) goto L_0029EBB4; }
SET64(31, 0x29eb48);  F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0029EBA8; }
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_0029EB5C; }
SET32(17, RW(16) + 156);
L_0029EB5C:;
SET64(31, 0x29eb64); SET64(4, RD(18) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(4, RW(4) + -21344);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + -23312);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(19));
wr32(c, (RW(18) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 56)));
SET32(2, RW(2) + 1);
wr32(c, (RW(19) + 56), RW(2));
L_0029EBA8:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x29ebb4); SET64(5, RD(18) + RD(0)); F_002AA9E0(c);
L_0029EBB4:;
SET64(2, RD(0) + RD(0));
L_0029EBB8:;
SET64(31, rd64(c, (RW(29) + 64))); goto L_0029EBD8;
L_0029EBC0:;
SET64(31, 0x29ebc8); SET64(4, (s32)rd32(c, (RW(19) + 48))); F_0027A5D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) { POLL(); goto L_0029EAD0; } }
SET64(31, rd64(c, (RW(29) + 64)));
L_0029EBD8:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0029EBF0(Ctx *c) { /* func_0029EBF0 */
ENTER(0x29ebf0);
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = RW(2);
c->fcc = F(12) <= F(2);
{ int t = c->fcc;  if (t) goto L_0029EC10; }
SET64(3, (s64)(s32)0x3f800000); goto L_0029EC34;
L_0029EC10:;
c->f[2].u = RW(0);
c->fcc = F(12) < F(2);
{ int t = !c->fcc;  if (t) goto L_0029EC2C; }
 goto L_0029EC30;
L_0029EC2C:;
c->f[2].u = c->f[12].u;
L_0029EC30:;
SET64(3, (s64)(s32)0x3f800000);
L_0029EC34:;
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

void F_0029EC70(Ctx *c) { /* func_0029EC70 */
ENTER(0x29ec70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(2); SET64(31, 0x29ec94);  rt_call(c, t); }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_0029ECB0; }
{ int t = RD(2) == RD(3);  if (t) goto L_0029ECB0; }
SET64(2, RD(0) + RD(0)); goto L_0029ECC4;
L_0029ECB0:;
SET64(31, 0x29ecb8); SET64(4, (s32)rd32(c, (RW(16) + 48))); F_0027C258(c);
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) & 0xff);
L_0029ECC4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029ECE0(Ctx *c) { /* func_0029ECE0 */
ENTER(0x29ece0);
SET64(2, (s32)rd32(c, (RW(4) + 56)));
SET64(2, RSD(0) < RSD(2));
SET64(2, RD(2) ^ 0x1); return;
}

void F_0029ECF0(Ctx *c) { /* func_0029ECF0 */
ENTER(0x29ecf0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(28) + -30340)));
{ int t = RD(16) == RD(0); SET64(19, RD(4) + RD(0)); if (t) goto L_0029EDDC; }
SET64(4, (s32)rd32(c, (RW(19) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(2); SET64(31, 0x29ed28);  rt_call(c, t); }
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3); SET32(4, RW(0) + 20); if (t) goto L_0029ED68; }
SET32(3, RW(0) + 3);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 2); if (t) goto L_0029ED64; }
{ int t = RD(2) == RD(3);  if (t) goto L_0029ED64; }
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_0029ED64; }
{ int t = RD(2) == RD(0);  if (t) goto L_0029EDDC; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_0029EDE0;
L_0029ED64:;
SET32(4, RW(0) + 20);
L_0029ED68:;
SET64(31, 0x29ed70);  F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0029EDD0; }
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_0029ED84; }
SET32(17, RW(16) + 148);
L_0029ED84:;
SET64(31, 0x29ed8c); SET64(4, RD(18) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(4, RW(4) + -21344);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + -23280);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(19));
wr32(c, (RW(18) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 56)));
SET32(2, RW(2) + 1);
wr32(c, (RW(19) + 56), RW(2));
L_0029EDD0:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x29eddc); SET64(5, RD(18) + RD(0)); F_002AA9E0(c);
L_0029EDDC:;
SET64(31, rd64(c, (RW(29) + 64)));
L_0029EDE0:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0029EE00(Ctx *c) { /* func_0029EE00 */
ENTER(0x29ee00);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(28) + -30340)));
{ int t = RD(16) == RD(0); SET64(19, RD(4) + RD(0)); if (t) goto L_0029EEF4; }
SET64(4, (s32)rd32(c, (RW(19) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(2); SET64(31, 0x29ee38);  rt_call(c, t); }
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 3); if (t) goto L_0029EEF4; }
{ int t = RD(2) == RD(3);  if (t) goto L_0029EEF4; }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_0029EE70; }
{ int t = RD(2) == RD(3);  if (t) goto L_0029EE70; }
{ int t = RD(2) == RD(0);  if (t) goto L_0029EEF4; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_0029EEF8;
L_0029EE70:;
SET64(31, 0x29ee78); SET64(4, (s32)rd32(c, (RW(19) + 48))); F_0027C258(c);
{ int t = RD(2) != RD(0); SET32(4, RW(0) + 20); if (t) goto L_0029EEF4; }
SET64(31, 0x29ee88);  F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_0029EEE8; }
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_0029EE9C; }
SET32(17, RW(16) + 152);
L_0029EE9C:;
SET64(31, 0x29eea4); SET64(4, RD(18) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(4, RW(4) + -21344);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + -23296);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(19));
wr32(c, (RW(18) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 56)));
SET32(2, RW(2) + 1);
wr32(c, (RW(19) + 56), RW(2));
L_0029EEE8:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x29eef4); SET64(5, RD(18) + RD(0)); F_002AA9E0(c);
L_0029EEF4:;
SET64(31, rd64(c, (RW(29) + 64)));
L_0029EEF8:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0029EF10(Ctx *c) { /* func_0029EF10 */
ENTER(0x29ef10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(2); SET64(31, 0x29ef38); SET64(16, RD(5) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 3); if (t) goto L_0029EFA4; }
{ int t = RD(2) == RD(3);  if (t) goto L_0029EFA4; }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_0029EF84; }
{ int t = RD(2) == RD(3);  if (t) goto L_0029EF84; }
{ int t = RD(2) == RD(0);  if (t) goto L_0029EF70; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_0029EFA8;
L_0029EF70:;
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x29ef7c); SET64(5, RD(16) & 0xff); F_0027FE00(c);
wr8(c, (RW(17) + 60), (u8)RW(16)); goto L_0029EFA4;
L_0029EF84:;
{ int t = RD(16) != RD(0);  if (t) goto L_0029EFA4; }
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x29ef98); SET64(5, RD(0) + RD(0)); F_0027FE00(c);
SET64(31, 0x29efa0); SET64(4, (s32)rd32(c, (RW(17) + 48))); F_0027FF58(c);
wr8(c, (RW(17) + 60), (u8)RW(0));
L_0029EFA4:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0029EFA8:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029EFC0(Ctx *c) { /* func_0029EFC0 */
ENTER(0x29efc0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, (s32)rd32(c, (RW(28) + -30340)));
{ int t = RD(17) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0029F130; }
SET64(4, (s32)rd32(c, (RW(16) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ u32 t = RW(2); SET64(31, 0x29eff8);  rt_call(c, t); }
SET32(3, RW(0) + 4);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 3); if (t) goto L_0029F130; }
{ int t = RD(2) == RD(3);  if (t) goto L_0029F130; }
SET32(3, RW(0) + 2);
{ int t = RD(2) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_0029F0AC; }
{ int t = RD(2) == RD(3);  if (t) goto L_0029F0AC; }
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 20); if (t) goto L_0029F030; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_0029F134;
L_0029F030:;
SET64(31, 0x29f038);  F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0029F098; }
{ int t = RD(17) == RD(0); SET64(18, RD(17) + RD(0)); if (t) goto L_0029F04C; }
SET32(18, RW(17) + 144);
L_0029F04C:;
SET64(31, 0x29f054); SET64(4, RD(19) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(4, RW(4) + -21344);
wr32(c, (RW(19) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(19) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 0), RW(4));
SET32(2, RW(2) + -23264);
wr32(c, (RW(19) + 8), RW(18));
wr32(c, (RW(19) + 12), RW(3));
wr32(c, (RW(19) + 16), RW(16));
wr32(c, (RW(19) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 56)));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 56), RW(2));
L_0029F098:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x29f0a4); SET64(5, RD(19) + RD(0)); F_002AA9E0(c);
 goto L_0029F130;
L_0029F0AC:;
SET64(31, 0x29f0b4); SET64(4, (s32)rd32(c, (RW(16) + 48))); F_0027C258(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 20); if (t) goto L_0029F130; }
SET64(31, 0x29f0c4);  F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_0029F124; }
{ int t = RD(17) == RD(0); SET64(18, RD(17) + RD(0)); if (t) goto L_0029F0D8; }
SET32(18, RW(17) + 152);
L_0029F0D8:;
SET64(31, 0x29f0e0); SET64(4, RD(19) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(4, RW(4) + -21344);
wr32(c, (RW(19) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(19) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 0), RW(4));
SET32(2, RW(2) + -23296);
wr32(c, (RW(19) + 8), RW(18));
wr32(c, (RW(19) + 12), RW(3));
wr32(c, (RW(19) + 16), RW(16));
wr32(c, (RW(19) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 56)));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 56), RW(2));
L_0029F124:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x29f130); SET64(5, RD(19) + RD(0)); F_002AA9E0(c);
L_0029F130:;
SET64(31, rd64(c, (RW(29) + 64)));
L_0029F134:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0029F150(Ctx *c) { /* func_0029F150 */
ENTER(0x29f150);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(25, (s32)rd32(c, (RW(5) + 8)));
SET64(16, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x29f178); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_0029F1CC; }
{ int t = RD(2) == RD(0); SET64(4, (s64)(s32)0x540000); if (t) goto L_0029F194; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_0029F210;
L_0029F194:;
SET64(31, 0x29f19c); SET32(4, RW(4) + -27536); F_0029E030(c);
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x29f1ac); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x29f1b8); SET64(5, RD(2) + RD(0)); F_0027FCB0(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x29f1c4); SET32(4, RW(4) + -27536); F_0029E020(c);
 goto L_0029F20C;
L_0029F1CC:;
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x29f1dc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s64)(s32)0x540000);
SET64(16, RD(2) + RD(0));
SET64(31, 0x29f1ec); SET32(4, RW(4) + -27536); F_0029E030(c);
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET32(2, RW(16) >> 8);
SET64(5, RD(16) & 0xff);
SET64(31, 0x29f200); SET64(6, RD(2) & 0xffff); F_0027FFB8(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x29f20c); SET32(4, RW(4) + -27536); F_0029E020(c);
L_0029F20C:;
SET64(31, rd64(c, (RW(29) + 32)));
L_0029F210:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029F220(Ctx *c) { /* func_0029F220 */
ENTER(0x29f220);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_0029F2A4; }
{ int t = RD(5) == RD(0); SET32(4, RW(0) + 20); if (t) goto L_0029F278; }
wr32(c, (RW(16) + 52), RW(5));
L_0029F244:;
SET64(4, (s64)(s32)0x540000);
SET64(2, (s32)rd32(c, (RW(5) + 4)));
SET32(4, RW(4) + -27536);
SET64(31, 0x29f258); wr32(c, (RW(16) + 24), RW(2)); F_0029E030(c);
SET64(31, 0x29f260); SET64(4, RD(16) + RD(0)); F_00279998(c);
SET64(4, (s64)(s32)0x540000);
wr32(c, (RW(16) + 48), RW(2));
SET64(31, 0x29f270); SET32(4, RW(4) + -27536); F_0029E020(c);
SET32(2, RW(0) + 1); goto L_0029F2A8;
L_0029F278:;
SET64(31, 0x29f280);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_0029F29C; }
SET64(5, (s32)rd32(c, (RW(16) + 28)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x29f298); SET32(6, RW(0) + 128); F_002AB430(c);
SET64(5, RD(2) + RD(0));
L_0029F29C:;
wr32(c, (RW(16) + 52), RW(5)); { POLL(); goto L_0029F244; }
L_0029F2A4:;
SET64(2, RD(0) + RD(0));
L_0029F2A8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029F2C0(Ctx *c) { /* func_0029F2C0 */
ENTER(0x29f2c0);
SET64(2, (s32)rd32(c, (RW(4) + 28))); return;
}

void F_0029F2D0(Ctx *c) { /* func_0029F2D0 */
ENTER(0x29f2d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029F358; }
SET64(2, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x540000);
SET32(2, RW(2) + -23352);
SET32(4, RW(4) + -27536);
SET64(31, 0x29f304); wr32(c, (RW(17) + 68), RW(2)); F_0029E030(c);
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(2); SET64(31, 0x29f318);  rt_call(c, t); }
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x29f324); SET32(4, RW(4) + -27536); F_0029E020(c);
SET64(4, (s32)rd32(c, (RW(17) + 52)));
{ int t = RD(4) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_0029F344; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x29f340); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_0029F344:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_0029F35C; }
SET64(31, 0x29f358); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0029F358:;
SET64(2, RD(17) + RD(0));
L_0029F35C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029F370(Ctx *c) { /* func_0029F370 */
ENTER(0x29f370);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 48), RD(31));
SET32(2, RW(2) + -23352);
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
SET64(31, 0x29f3c0); wr16(c, (RW(4) + 64), (u16)RW(0)); F_001273D0(c);
SET32(2, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(16) + 0), RW(2));
SET64(4, (s64)(s32)0x540000);
SET64(2, (s64)(s32)0x447a0000);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
c->f[1].u = RW(2);
SET32(4, RW(4) + -27536);
wr32(c, (RW(16) + 32), RW(0));
c->f[0].f = fpu(F(1) * F(20));
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 16), RW(2));
wr32(c, (RW(16) + 8), RW(5));
wr32(c, (RW(16) + 12), RW(3));
c->f[0].f = fpu(F(1) * F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x29f40c); wr32(c, (RW(16) + 4), RW(2)); F_0029E010(c);
wr32(c, (RW(16) + 20), RW(2));
SET64(31, 0x29f418); SET64(4, RD(16) + RD(0)); F_00278A70(c);
wr32(c, (RW(16) + 28), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_0029F440(Ctx *c) { /* func_0029F440 */
ENTER(0x29f440);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_0029F47C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -23336);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 136), RW(3)); if (t) goto L_0029F478; }
SET64(31, 0x29f478);  F_001004B0(c);
L_0029F478:;
SET64(2, RD(16) + RD(0));
L_0029F47C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029F490(Ctx *c) { /* func_0029F490 */
ENTER(0x29f490);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -23336);
wr32(c, (RW(4) + 136), RW(2));
SET64(2, RD(4) + RD(0)); return;
}

static void B_0029F4B0(Ctx *c, u32 entry) { /* func_0029F4B0 */
ENTER(entry);
switch (entry) { case 0x29f4d0: goto L_0029F4D0; }
L_0029F4B0:;
SET64(5, (s32)rd32(c, (RW(4) + 16)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25);  switch (t) { case 0x29f4b0: goto L_0029F4B0; case 0x29f4d0: goto L_0029F4D0; default: rt_jump(c, t); return; } }
L_0029F4D0:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0029F52C; }
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -23312);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
SET32(2, RW(2) + -1);
SET64(31, 0x29f510); wr32(c, (RW(3) + 56), RW(2)); F_002A9C30(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_0029F530; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x29f52c); SET32(5, RW(0) + 20); F_002A99F0(c);
L_0029F52C:;
SET64(2, RD(16) + RD(0));
L_0029F530:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void F_0029F4B0(Ctx *c) { B_0029F4B0(c, 0x29f4b0); }
void F_0029F4D0(Ctx *c) { B_0029F4B0(c, 0x29f4d0); }

static void B_0029F550(Ctx *c, u32 entry) { /* func_0029F550 */
ENTER(entry);
switch (entry) { case 0x29f570: goto L_0029F570; }
L_0029F550:;
SET64(5, (s32)rd32(c, (RW(4) + 16)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25);  switch (t) { case 0x29f550: goto L_0029F550; case 0x29f570: goto L_0029F570; default: rt_jump(c, t); return; } }
L_0029F570:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0029F5CC; }
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -23296);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
SET32(2, RW(2) + -1);
SET64(31, 0x29f5b0); wr32(c, (RW(3) + 56), RW(2)); F_002A9C30(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_0029F5D0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x29f5cc); SET32(5, RW(0) + 20); F_002A99F0(c);
L_0029F5CC:;
SET64(2, RD(16) + RD(0));
L_0029F5D0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void F_0029F550(Ctx *c) { B_0029F550(c, 0x29f550); }
void F_0029F570(Ctx *c) { B_0029F550(c, 0x29f570); }

static void B_0029F5F0(Ctx *c, u32 entry) { /* func_0029F5F0 */
ENTER(entry);
switch (entry) { case 0x29f610: goto L_0029F610; }
L_0029F5F0:;
SET64(5, (s32)rd32(c, (RW(4) + 16)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25);  switch (t) { case 0x29f5f0: goto L_0029F5F0; case 0x29f610: goto L_0029F610; default: rt_jump(c, t); return; } }
L_0029F610:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0029F66C; }
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -23280);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
SET32(2, RW(2) + -1);
SET64(31, 0x29f650); wr32(c, (RW(3) + 56), RW(2)); F_002A9C30(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_0029F670; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x29f66c); SET32(5, RW(0) + 20); F_002A99F0(c);
L_0029F66C:;
SET64(2, RD(16) + RD(0));
L_0029F670:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void F_0029F5F0(Ctx *c) { B_0029F5F0(c, 0x29f5f0); }
void F_0029F610(Ctx *c) { B_0029F5F0(c, 0x29f610); }

static void B_0029F690(Ctx *c, u32 entry) { /* func_0029F690 */
ENTER(entry);
switch (entry) { case 0x29f6b0: goto L_0029F6B0; }
L_0029F690:;
SET64(5, (s32)rd32(c, (RW(4) + 16)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25);  switch (t) { case 0x29f690: goto L_0029F690; case 0x29f6b0: goto L_0029F6B0; default: rt_jump(c, t); return; } }
L_0029F6B0:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0029F70C; }
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -23264);
SET64(5, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
SET32(2, RW(2) + -1);
SET64(31, 0x29f6f0); wr32(c, (RW(3) + 56), RW(2)); F_002A9C30(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_0029F710; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x29f70c); SET32(5, RW(0) + 20); F_002A99F0(c);
L_0029F70C:;
SET64(2, RD(16) + RD(0));
L_0029F710:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void F_0029F690(Ctx *c) { B_0029F690(c, 0x29f690); }
void F_0029F6B0(Ctx *c) { B_0029F690(c, 0x29f6b0); }

void F_0029F730(Ctx *c) { /* func_0029F730 */
ENTER(0x29f730);
SET32(4, RW(4) + -32); { F_0029E5E0(c); return; }
}

void F_0029F740(Ctx *c) { /* func_0029F740 */
ENTER(0x29f740);
SET32(4, RW(4) + -88); { F_0029E4E0(c); return; }
}

void F_0029F750(Ctx *c) { /* func_0029F750 */
ENTER(0x29f750);
SET32(4, RW(4) + -144); { F_0029E4E0(c); return; }
}

void F_0029F760(Ctx *c) { /* func_0029F760 */
ENTER(0x29f760);
SET32(4, RW(4) + -144); { F_0029E490(c); return; }
}

void F_0029F770(Ctx *c) { /* func_0029F770 */
ENTER(0x29f770);
SET32(4, RW(4) + -148); { F_0029E4E0(c); return; }
}

void F_0029F780(Ctx *c) { /* func_0029F780 */
ENTER(0x29f780);
SET32(4, RW(4) + -148); { F_0029E430(c); return; }
}

void F_0029F790(Ctx *c) { /* func_0029F790 */
ENTER(0x29f790);
SET32(4, RW(4) + -152); { F_0029E4E0(c); return; }
}

void F_0029F7A0(Ctx *c) { /* func_0029F7A0 */
ENTER(0x29f7a0);
SET32(4, RW(4) + -152); { F_0029E3E0(c); return; }
}

void F_0029F7B0(Ctx *c) { /* func_0029F7B0 */
ENTER(0x29f7b0);
SET32(4, RW(4) + -156); { F_0029E4E0(c); return; }
}

void F_0029F7C0(Ctx *c) { /* func_0029F7C0 */
ENTER(0x29f7c0);
SET32(4, RW(4) + -156); { F_0029E360(c); return; }
}

void F_0029F7D0(Ctx *c) { /* func_0029F7D0 */
ENTER(0x29f7d0);
SET32(29, RW(29) + -48);
SET32(6, RW(0) + 16);
wr64(c, (RW(29) + 32), RD(31));
SET64(7, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(8, (s64)(s32)0x10000000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET64(31, 0x29f804); SET32(5, RW(5) + 9776); F_002AEB00(c);
SET64(3, (s64)(s32)0x1000000);
SET64(2, (s64)(s32)0x6c050000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 80);
SET64(6, RD(3) | 0x101);
SET64(31, 0x29f820); SET64(7, RD(2) | 0x53); F_002AEBE0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x29f830); SET32(6, RW(0) + 1); F_002AEC30(c);
SET64(5, (s32)rd32(c, (RW(17) + 16)));
{ int t = RD(5) == RD(0);  if (t) goto L_0029F844; }
SET64(4, RD(16) + RD(0)); goto L_0029F850;
L_0029F844:;
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 9808);
SET64(4, RD(16) + RD(0));
L_0029F850:;
SET64(31, 0x29f858); SET32(6, RW(0) + 4); F_002AEC30(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 9792);
SET32(6, RW(0) + 16);
SET64(7, RD(0) + RD(0));
SET64(31, 0x29f874); SET64(8, RD(0) + RD(0)); F_002AEB00(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029F890(Ctx *c) { /* func_0029F890 */
ENTER(0x29f890);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 16), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 0), RW(3));
wr32(c, (RW(4) + 4), RW(3));
wr32(c, (RW(4) + 8), RW(3));
wr32(c, (RW(4) + 12), RW(3)); return;
}

void F_0029F8B0(Ctx *c) { /* func_0029F8B0 */
ENTER(0x29f8b0);
SET32(29, RW(29) + -48);
SET32(6, RW(0) + 16);
wr64(c, (RW(29) + 32), RD(31));
SET64(7, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(8, (s64)(s32)0x11000000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET64(31, 0x29f8e4); SET32(5, RW(5) + 9744); F_002AEB00(c);
SET64(2, (s64)(s32)0x1000000);
SET64(5, RD(17) + RD(0));
SET64(7, RD(2) | 0x101);
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x6c060000);
SET32(6, RW(0) + 96);
SET64(31, 0x29f904); SET64(8, RD(2) | 0x21); F_002AEB60(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 9760);
SET32(6, RW(0) + 16);
SET64(7, RD(0) + RD(0));
SET64(31, 0x29f920); SET64(8, RD(0) + RD(0)); F_002AEB00(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029F940(Ctx *c) { /* func_0029F940 */
ENTER(0x29f940);
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
SET64(31, 0x29f97c); SET32(4, RW(16) + 32); F_002AC130(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029F990(Ctx *c) { /* func_0029F990 */
ENTER(0x29f990);
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
SET64(31, 0x29f9c0); SET64(5, RD(0) + RD(0)); F_002AEB00(c);
SET64(2, (s64)(s32)0x1000000);
SET64(4, RD(16) + RD(0));
SET64(7, RD(2) | 0x101);
SET64(5, RD(17) + RD(0));
SET64(2, (s64)(s32)0x6c0d0000);
SET32(6, RW(0) + 208);
SET64(31, 0x29f9e0); SET64(8, RD(2) | 0x14); F_002AEB60(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029FA00(Ctx *c) { /* func_0029FA00 */
ENTER(0x29fa00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x29fa14); SET64(16, RD(4) + RD(0)); F_002AC130(c);
SET64(31, 0x29fa1c); SET32(4, RW(16) + 64); F_002AC130(c);
SET32(3, RW(16) + 128);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(16) + 160);
L_0029FA28:;
wr32(c, (RW(3) + 0), RW(0));
wr32(c, (RW(3) + 4), RW(0));
wr32(c, (RW(3) + 8), RW(0));
wr32(c, (RW(3) + 12), RW(2));
SET32(3, RW(3) + 16);
{ int t = RD(3) != RD(4);  if (t) { POLL(); goto L_0029FA28; } }
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(16) + 192);
L_0029FA4C:;
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3));
SET32(4, RW(4) + 16);
{ int t = RD(4) != RD(2);  if (t) { POLL(); goto L_0029FA4C; } }
wr32(c, (RW(16) + 192), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 196), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_0029FA90(Ctx *c) { /* func_0029FA90 */
ENTER(0x29fa90);
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
SET64(31, 0x29fac0); SET64(5, RD(0) + RD(0)); F_002AEB00(c);
SET64(2, (s64)(s32)0x1000000);
SET64(4, RD(16) + RD(0));
SET64(7, RD(2) | 0x101);
SET64(5, RD(17) + RD(0));
SET64(2, (s64)(s32)0x6c010000);
SET32(6, RW(0) + 16);
SET64(31, 0x29fae0); SET64(8, RD(2) | 0x13); F_002AEB60(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029FB00(Ctx *c) { /* func_0029FB00 */
ENTER(0x29fb00);
SET64(2, RD(4) + RD(0)); return;
}

void F_0029FB10(Ctx *c) { /* func_0029FB10 */
ENTER(0x29fb10);
SET32(29, RW(29) + -48);
SET32(6, RW(0) + 16);
wr64(c, (RW(29) + 32), RD(31));
SET64(7, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(8, (s64)(s32)0x11000000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET64(31, 0x29fb44); SET32(5, RW(5) + 9712); F_002AEB00(c);
SET64(2, (s64)(s32)0x1000000);
SET64(5, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET32(6, RW(0) + 304);
SET64(7, RD(2) | 0x101);
SET64(31, 0x29fb60); SET64(8, (s64)(s32)0x6c130000); F_002AEB60(c);
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 9728);
SET32(6, RW(0) + 16);
SET64(7, RD(0) + RD(0));
SET64(31, 0x29fb7c); SET64(8, RD(0) + RD(0)); F_002AEB00(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029FB90(Ctx *c) { /* func_0029FB90 */
ENTER(0x29fb90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x29fba4); SET64(16, RD(4) + RD(0)); F_002AC130(c);
SET64(31, 0x29fbac); SET32(4, RW(16) + 64); F_002AC130(c);
SET64(31, 0x29fbb4); SET32(4, RW(16) + 128); F_002AC130(c);
SET64(31, 0x29fbbc); SET32(4, RW(16) + 192); F_002AC130(c);
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

void F_0029FC10(Ctx *c) { /* func_0029FC10 */
ENTER(0x29fc10);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 76)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029FCE0; }
SET64(3, (s64)(s32)0x4b0000);
SET64(18, RD(0) + RD(0));
SET64(19, (s32)rd32(c, (RW(3) + 9008)));
{ int t = RD(4) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_0029FCE0; }
L_0029FC48:;
SET64(6, (s32)rd32(c, (RW(17) + 88)));
{ int t = RD(6) != RD(0);  if (t) goto L_0029FC80; }
SET64(2, (s32)rd32(c, (RW(17) + 76)));
{ int t = RD(19) == RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_0029FC80; }
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x29fc74); SET64(8, (s64)(s32)0x11000000); F_002AEB00(c);
SET64(19, (s32)rd32(c, (RW(17) + 76))); goto L_0029FCA0;
L_0029FC80:;
SET64(5, (s32)rd32(c, (RW(17) + 84)));
{ int t = RD(18) == RD(5);  if (t) goto L_0029FCA0; }
SET64(7, (s32)rd32(c, (RW(17) + 76)));
SET64(31, 0x29fc98); SET64(4, RD(16) + RD(0)); F_002AEA90(c);
SET64(18, (s32)rd32(c, (RW(17) + 84)));
L_0029FCA0:;
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x29fcb4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x29fcc8); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(17) + 68)));
{ int t = RD(17) == RD(0);  if (t) goto L_0029FCD8; }
SET32(17, RW(17) + -64);
L_0029FCD8:;
{ int t = RD(17) != RD(0);  if (t) { POLL(); goto L_0029FC48; } }
L_0029FCE0:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_0029FD00(Ctx *c) { /* func_0029FD00 */
ENTER(0x29fd00);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 16);
SET64(4, RD(5) + RD(0));
SET64(7, RD(0) + RD(0));
SET32(5, RW(2) + 96);
SET64(8, RD(0) + RD(0)); { F_002AEB60(c); return; }
}

void F_0029FD20(Ctx *c) { /* func_0029FD20 */
ENTER(0x29fd20);
 return;
}

void F_0029FD30(Ctx *c) { /* func_0029FD30 */
ENTER(0x29fd30);
SET64(3, (s64)(s32)0x4b0000);
wr32(c, (RW(4) + 72), RW(5));
SET64(3, (s32)rd32(c, (RW(3) + 8992)));
wr32(c, (RW(4) + 80), RW(7));
SET64(1, RD(6) < RD(3));
{ int t = RD(1) == RD(0); wr32(c, (RW(4) + 76), RW(6)); if (t) goto L_0029FD58; }
wr32(c, (RW(4) + 84), RW(0));
wr32(c, (RW(4) + 88), RW(0)); goto L_0029FD60;
L_0029FD58:;
wr32(c, (RW(4) + 84), RW(8));
wr32(c, (RW(4) + 88), RW(9));
L_0029FD60:;
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(4) + 72)));
SET64(5, (s32)rd32(c, (RW(3) + 9008)));
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

void F_0029FDA0(Ctx *c) { /* func_0029FDA0 */
ENTER(0x29fda0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_0029FE04; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -23248);
SET32(2, RW(2) + -23208);
wr32(c, (RW(17) + 0), RW(3));
SET32(4, RW(17) + 64);
wr32(c, (RW(17) + 64), RW(2));
SET64(31, 0x29fde0); SET64(5, RD(0) + RD(0)); F_002AB970(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x29fdec); SET64(5, RD(0) + RD(0)); F_002A30A0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_0029FE08; }
SET64(31, 0x29fe04); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_0029FE04:;
SET64(2, RD(17) + RD(0));
L_0029FE08:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029FE20(Ctx *c) { /* func_0029FE20 */
ENTER(0x29fe20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x29fe38); SET64(16, RD(4) + RD(0)); F_002A31B0(c);
SET32(17, RW(16) + 64);
SET64(31, 0x29fe44); SET64(4, RD(17) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 4), RW(0));
SET32(2, RW(2) + -20992);
wr32(c, (RW(16) + 80), RW(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 84), RW(0));
SET32(2, RW(2) + -23248);
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -23208);
wr32(c, (RW(16) + 64), RW(2));
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s32)rd32(c, (RW(2) + 9008)));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 72), RW(3));
wr32(c, (RW(16) + 76), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_0029FEA0(Ctx *c) { /* func_0029FEA0 */
ENTER(0x29fea0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(25, (s32)rd32(c, (RW(4) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x29febc); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET32(4, RW(29) + 32);
SET64(2, (s32)rd32(c, (RW(16) + 48)));
wr128(c, (RW(2) + 128) & ~15u, &c->r[3]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x29fedc); wr128(c, (RW(2) + 144) & ~15u, &c->r[3]); F_002AC130(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 32);
wr32(c, (RW(29) + 104), RW(2));
SET32(5, RW(16) + 16);
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 96), RW(0));
SET64(31, 0x29fefc); wr32(c, (RW(29) + 100), RW(0)); F_002ABE20(c);
SET64(6, RD(2) + RD(0));
SET32(4, RW(29) + 112);
SET64(31, 0x29ff0c); SET32(5, RW(29) + 96); F_002ACE80(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(16) + 48)));
wr128(c, (RW(2) + 160) & ~15u, &c->r[3]);
SET64(4, (s32)rd32(c, (RW(16) + 48)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x29ff2c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

static void B_0029FF40(Ctx *c, u32 entry) { /* func_0029FF40 */
ENTER(entry);
switch (entry) { case 0x2a000c: goto L_002A000C; case 0x2a001c: goto L_002A001C; case 0x2a0024: goto L_002A0024; case 0x2a002c: goto L_002A002C; case 0x2a0034: goto L_002A0034; case 0x2a0038: goto L_002A0038; case 0x2a0050: goto L_002A0050; case 0x2a0058: goto L_002A0058; case 0x2a007c: goto L_002A007C; case 0x2a012c: goto L_002A012C; }
SET32(29, RW(29) + -240);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, rd8(c, (RW(4) + 52)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002A0118; }
SET64(2, (s64)(s32)0xbf800000);
SET32(4, RW(29) + 208);
wr32(c, (RW(29) + 228), RW(2));
SET32(5, RW(16) + 32);
SET64(2, (s64)(s32)0x3f800000);
SET64(6, RD(16) + RD(0));
wr32(c, (RW(29) + 236), RW(2));
wr32(c, (RW(29) + 224), RW(0));
SET64(31, 0x29ff88); wr32(c, (RW(29) + 232), RW(0)); F_002AD040(c);
SET64(2, (s64)(s32)0x3f800000);
SET32(4, RW(29) + 208);
SET64(31, 0x29ff98); wr32(c, (RW(29) + 220), RW(2)); F_002AD410(c);
SET32(4, RW(29) + 192);
SET32(5, RW(29) + 208);
SET64(31, 0x29ffa8); SET32(6, RW(29) + 224); F_002AD200(c);
SET64(31, 0x29ffb0); SET32(4, RW(29) + 192); F_002AD410(c);
SET32(4, RW(29) + 176);
SET32(5, RW(29) + 208);
SET64(31, 0x29ffc0); SET32(6, RW(29) + 192); F_002AD200(c);
SET64(31, 0x29ffc8); SET32(4, RW(29) + 176); F_002AD410(c);
SET32(4, RW(29) + 208);
SET64(31, 0x29ffd4); SET64(5, RD(16) + RD(0)); F_002AD2E0(c);
c->f[20].u = c->f[0].u ^ 0x80000000u;
SET32(4, RW(29) + 176);
SET64(31, 0x29ffe4); SET64(5, RD(16) + RD(0)); F_002AD2E0(c);
c->f[21].u = c->f[0].u ^ 0x80000000u;
SET32(4, RW(29) + 192);
SET64(31, 0x29fff4); SET64(5, RD(16) + RD(0)); F_002AD2E0(c);
c->f[0].u = c->f[0].u ^ 0x80000000u;
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 52), c->f[21].u);
wr32(c, (RW(29) + 60), RW(2));
wr32(c, (RW(29) + 48), c->f[0].u);
rd128(c, (RW(29) + 208) & ~15u, &c->r[3]);
L_002A000C:;
wr32(c, (RW(29) + 56), c->f[20].u);
SET32(4, RW(29) + 144);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
SET32(6, RW(29) + 128);
L_002A001C:;
rd128(c, (RW(29) + 192) & ~15u, &c->r[7]);
c->f[1].u = RW(0);
L_002A0024:;
rd128(c, (RW(29) + 176) & ~15u, &c->r[5]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]);
L_002A002C:;
wr32(c, (RW(4) + 12), RW(0));
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
L_002A0034:;
rd128(c, (RW(4) + 0) & ~15u, &c->r[2]);
L_002A0038:;
wr128(c, (RW(29) + 112) & ~15u, &c->r[7]);
wr32(c, (RW(29) + 124), RW(0));
wr128(c, (RW(6) + 0) & ~15u, &c->r[5]);
wr32(c, (RW(6) + 12), RW(0));
rd128(c, (RW(6) + 0) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[4]);
L_002A0050:;
wr128(c, (RW(29) + 64) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[4]);
L_002A0058:;
c->f[13].u = rd32(c, (RW(29) + 96));
c->fcc = F(1) == F(13);
{ int t = !c->fcc; wr128(c, (RW(29) + 80) & ~15u, &c->r[3]); if (t) goto L_002A00C0; }
c->f[0].u = rd32(c, (RW(29) + 100));
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002A00C0; }
c->f[13].u = rd32(c, (RW(29) + 64));
L_002A007C:;
SET64(31, 0x2a0084); c->f[12].u = rd32(c, (RW(29) + 80)); F_0011F8B0(c);
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
L_002A00B8:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002A011C;
L_002A00C0:;
SET64(31, 0x2a00c8); c->f[12].u = rd32(c, (RW(29) + 100)); F_0011F8B0(c);
c->f[12].u = rd32(c, (RW(29) + 88));
c->f[13].u = rd32(c, (RW(29) + 72));
SET64(31, 0x2a00d8); c->f[20].u = c->f[0].u; F_0011F8B0(c);
c->f[1].u = rd32(c, (RW(29) + 104));
wr32(c, (RW(16) + 16), c->f[0].u);
c->f[0].u = RW(0);
c->fcc = F(0) == F(20);
{ int t = !c->fcc; c->f[12].u = c->f[1].u ^ 0x80000000u; if (t) goto L_002A00FC; }
c->f[13].u = rd32(c, (RW(29) + 96)); goto L_002A0104;
L_002A00FC:;
c->f[0].u = rd32(c, (RW(29) + 96));
c->f[13].u = c->f[0].u ^ 0x80000000u;
L_002A0104:;
SET64(31, 0x2a010c);  F_0011F8B0(c);
wr32(c, (RW(16) + 20), c->f[0].u);
wr32(c, (RW(16) + 24), c->f[20].u); { POLL(); goto L_002A00B8; }
L_002A0118:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002A011C:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 240); return;
if (0) { L_002A012C:; SET32(29, RW(29) + 240); }
}
void F_0029FF40(Ctx *c) { B_0029FF40(c, 0x29ff40); }
void F_002A000C(Ctx *c) { B_0029FF40(c, 0x2a000c); }
void F_002A001C(Ctx *c) { B_0029FF40(c, 0x2a001c); }
void F_002A0024(Ctx *c) { B_0029FF40(c, 0x2a0024); }
void F_002A002C(Ctx *c) { B_0029FF40(c, 0x2a002c); }
void F_002A0034(Ctx *c) { B_0029FF40(c, 0x2a0034); }
void F_002A0038(Ctx *c) { B_0029FF40(c, 0x2a0038); }
void F_002A0050(Ctx *c) { B_0029FF40(c, 0x2a0050); }
void F_002A0058(Ctx *c) { B_0029FF40(c, 0x2a0058); }
void F_002A007C(Ctx *c) { B_0029FF40(c, 0x2a007c); }
void F_002A012C(Ctx *c) { B_0029FF40(c, 0x2a012c); }

void F_002A0130(Ctx *c) { /* func_002A0130 */
ENTER(0x2a0130);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002A016C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -23184);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 64), RW(3)); if (t) goto L_002A0168; }
SET64(31, 0x2a0168);  F_001004B0(c);
L_002A0168:;
SET64(2, RD(16) + RD(0));
L_002A016C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002A0180(Ctx *c) { /* func_002A0180 */
ENTER(0x2a0180);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x3f800000);
SET32(2, RW(2) + -23184);
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

void F_002A01D0(Ctx *c) { /* func_002A01D0 */
ENTER(0x2a01d0);
 return;
}

