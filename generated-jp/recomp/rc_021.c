#include "r5900.h"
#include "functab.h"

void JP_F_00278A70(Ctx *c) { /* func_00278A70 */
ENTER(0x278a70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x278a94); SET64(19, RD(4) + RD(0)); JP_F_0027B138(c);
{ int t = RD(2) == RD(0); SET64(17, rd64(c, (RW(29) + 8))); if (t) goto L_00278AC0; }
SET64(5, (s64)(s32)0xff030000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(5) | 0x20a);
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00278878(c); return; }
L_00278AC0:;
SET64(17, (s64)(s32)0xff030000);
SET32(18, RW(0) + 4);
SET64(17, RD(17) | 0x305);
L_00278AD0:;
SET64(31, 0x278ad8); SET64(4, RD(16) + RD(0)); JP_F_0027A5D8(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 4);
{ int t = RD(2) == RD(0); SET64(3, RD(2) & 0xcc); if (t) goto L_00278B04; }
if (RD(3) != RD(0)) { SET64(17, RD(0) + RD(0)); goto L_00278B04; }
SET64(31, 0x278afc);  JP_F_0027A800(c);
{ int t = RD(2) == RD(18);  if (t) { POLL(); goto L_00278AD0; } }
L_00278B04:;
SET64(4, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00278878(c); return; }
}

void JP_F_00278B28(Ctx *c) { /* func_00278B28 */
ENTER(0x278b28);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x278b44); SET64(17, RD(5) + RD(0)); JP_F_0027B138(c);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00278B68; }
SET64(5, (s64)(s32)0xff030000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(5, RD(5) | 0x20c);
SET32(29, RW(29) + 32); { JP_F_00278878(c); return; }
L_00278B68:;
SET64(5, RD(17) + RD(0));
SET32(3, RW(16) + 464);
SET64(2, RD(3) | RD(5));
SET64(2, RD(2) & 0x7);
{ int t = RD(2) == RD(0); SET32(4, RW(16) + 592); if (t) goto L_00278BE0; }
L_00278B80:;
ldl(c, 2, (RW(3) + 7));
ldr(c, 2, (RW(3) + 0));
ldl(c, 6, (RW(3) + 15));
ldr(c, 6, (RW(3) + 8));
ldl(c, 7, (RW(3) + 23));
ldr(c, 7, (RW(3) + 16));
ldl(c, 8, (RW(3) + 31));
ldr(c, 8, (RW(3) + 24));
sdl(c, 2, (RW(5) + 7));
sdr(c, 2, (RW(5) + 0));
sdl(c, 6, (RW(5) + 15));
sdr(c, 6, (RW(5) + 8));
sdl(c, 7, (RW(5) + 23));
sdr(c, 7, (RW(5) + 16));
sdl(c, 8, (RW(5) + 31));
sdr(c, 8, (RW(5) + 24));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(4); SET32(5, RW(5) + 32); if (t) { POLL(); goto L_00278B80; } }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00278C18;
L_00278BE0:;
SET64(2, rd64(c, (RW(3) + 0)));
SET64(6, rd64(c, (RW(3) + 8)));
SET64(7, rd64(c, (RW(3) + 16)));
SET64(8, rd64(c, (RW(3) + 24)));
wr64(c, (RW(5) + 0), RD(2));
wr64(c, (RW(5) + 8), RD(6));
wr64(c, (RW(5) + 16), RD(7));
wr64(c, (RW(5) + 24), RD(8));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(4); SET32(5, RW(5) + 32); if (t) { POLL(); goto L_00278BE0; } }
SET64(16, rd64(c, (RW(29) + 0)));
L_00278C18:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00278C30(Ctx *c) { /* func_00278C30 */
ENTER(0x278c30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x278c4c); SET64(17, RD(5) + RD(0)); JP_F_0027B138(c);
SET64(5, (s64)(s32)0xff030000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00278C70; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x20d);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00278878(c); return; }
L_00278C70:;
SET64(3, (s32)rd32(c, (RW(16) + 680)));
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(17) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00278C90(Ctx *c) { /* func_00278C90 */
ENTER(0x278c90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x278cbc); SET64(19, RD(7) + RD(0)); JP_F_0027B138(c);
SET64(5, (s64)(s32)0xff030000);
SET64(6, (s64)(s32)0x30000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x20f);
{ int t = RD(2) == RD(0); SET64(6, RD(6) | 0xffff); if (t) goto L_00278CF0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00278878(c); return; }
L_00278CF0:;
SET64(2, (s32)rd32(c, (RW(16) + 684)));
SET32(2, RW(2) << 11);
wr32(c, (RW(17) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 700)));
wr32(c, (RW(18) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 680)));
if (RD(4) != RD(6)) { SET64(2, (s32)rd32(c, (RW(16) + 700))); goto L_00278D18; }
SET32(2, RW(0) + -1); goto L_00278D30;
L_00278D18:;
SET32(3, RW(0) + 1800);
if (RD(3) == RD(0)) { rt_break(c, 0x278d20); goto L_00278D24; }
L_00278D24:;
mul_s(c, 0, 2, RSW(2), RSW(4));
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
L_00278D30:;
wr32(c, (RW(19) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00278D58(Ctx *c) { /* func_00278D58 */
ENTER(0x278d58);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x278d7c); SET64(18, RD(6) + RD(0)); JP_F_0027B138(c);
SET64(5, (s64)(s32)0xff030000);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x20e); if (t) goto L_00278DA8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00278878(c); return; }
L_00278DA8:;
SET64(3, (s32)rd32(c, (RW(16) + 692)));
SET64(31, rd64(c, (RW(29) + 24)));
wr32(c, (RW(17) + 0), RW(3));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 696)));
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(18) + 0), RW(4));
SET64(18, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00278DD0(Ctx *c) { /* func_00278DD0 */
ENTER(0x278dd0);
 return;
}

void JP_F_00278DD8(Ctx *c) { /* func_00278DD8 */
ENTER(0x278dd8);
SET32(2, RW(5) << 1);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET32(4, RW(4) + 952);
wr32(c, (RW(4) + 8), RW(8));
wr32(c, (RW(4) + 0), RW(6));
wr32(c, (RW(4) + 4), RW(7)); return;
}

void JP_F_00278E00(Ctx *c) { /* func_00278E00 */
ENTER(0x278e00);
SET32(4, RW(4) + 1000);
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 8), RW(0)); return;
}

void JP_F_00278E18(Ctx *c) { /* func_00278E18 */
ENTER(0x278e18);
{ int t = RD(5) == RD(0); SET32(4, RW(4) + 1000); if (t) goto L_00278E28; }
SET64(2, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(5) + 0), RW(2));
L_00278E28:;
{ int t = RD(6) == RD(0);  if (t) goto L_00278E38; }
SET64(2, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(6) + 0), RW(2));
L_00278E38:;
 return;
}

void JP_F_00278E40(Ctx *c) { /* func_00278E40 */
ENTER(0x278e40);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 72), RD(21));
wr64(c, (RW(29) + 80), RD(22));
wr64(c, (RW(29) + 88), RD(23));
wr64(c, (RW(29) + 96), RD(31));
SET64(31, 0x278e74); SET64(17, RD(4) + RD(0)); JP_F_0027B138(c);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00278E90; }
SET64(5, (s64)(s32)0xff030000);
SET64(31, 0x278e88); SET64(5, RD(5) | 0x20c); JP_F_00278878(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_00279008;
L_00278E90:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(6, (s64)(s32)0x7fff0000);
wr32(c, (RW(17) + 1008), RW(0));
SET64(7, RD(29) + RD(0));
SET64(8, (s32)rd32(c, (RW(2) + 24)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
{ u32 t = RW(8); SET64(31, 0x278eb4); SET64(6, RD(6) | 0xffff); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x278ecc); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(5, RW(29) + 16);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(29) + 16), RW(3));
SET64(31, 0x278ee8); wr32(c, (RW(29) + 20), RW(2)); JP_F_00279140(c);
SET32(3, RW(0) + 2);
{ int t = RD(2) != RD(3); SET64(18, RD(0) + RD(0)); if (t) goto L_00278F18; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x278f00); SET64(5, RD(16) + RD(0)); JP_F_0027B218(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_00279008;
L_00278F08:;
SET64(31, 0x278f10); SET64(5, RD(2) + RD(0)); JP_F_00278878(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_00279008;
L_00278F18:;
SET32(19, RW(0) + 16);
SET32(21, RW(0) + 4);
SET32(23, RW(0) + 8);
SET32(20, RW(0) + 32);
SET32(22, RW(0) + 64); goto L_00278FCC;
L_00278F30:;
{ int t = RD(3) == RD(19); SET64(4, RD(17) + RD(0)); if (t) goto L_00278FA8; }
SET64(2, RSD(3) < (s64)17);
{ int t = RD(2) == RD(0);  if (t) goto L_00278F60; }
{ int t = RD(3) == RD(21); SET64(5, RD(16) + RD(0)); if (t) goto L_00278F98; }
{ int t = RD(3) == RD(23);  if (t) goto L_00278F88; }
SET32(5, RW(0) + -1); goto L_00278FD4;
L_00278F60:;
{ int t = RD(3) == RD(20); SET64(4, RD(17) + RD(0)); if (t) goto L_00278FC0; }
{ int t = RD(3) != RD(22); SET32(5, RW(0) + -1); if (t) goto L_00278FD4; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x278f80); SET32(18, RW(0) + 64); JP_F_002791E8(c);
SET64(4, RD(17) + RD(0)); goto L_00278FD0;
L_00278F88:;
SET64(31, 0x278f90); SET32(18, RW(0) + 8); JP_F_002798A0(c);
SET64(4, RD(17) + RD(0)); goto L_00278FD0;
L_00278F98:;
SET64(31, 0x278fa0); SET32(18, RW(0) + 4); JP_F_00279B10(c);
SET64(4, RD(17) + RD(0)); goto L_00278FD0;
L_00278FA8:;
SET64(5, RD(16) + RD(0));
SET64(31, 0x278fb4); SET64(6, RD(18) + RD(0)); JP_F_0027A0B0(c);
SET64(4, RD(17) + RD(0)); goto L_00278FD0;
L_00278FC0:;
SET64(5, RD(16) + RD(0));
SET64(31, 0x278fcc); SET64(6, RD(18) + RD(0)); JP_F_0027A170(c);
L_00278FCC:;
SET64(4, RD(17) + RD(0));
L_00278FD0:;
SET32(5, RW(0) + -1);
L_00278FD4:;
SET64(31, 0x278fdc); SET64(6, RD(16) + RD(0)); JP_F_0027A730(c);
if (RD(2) != RD(0)) { SET64(4, RD(17) + RD(0)); { POLL(); goto L_00278F08; } }
SET64(31, 0x278fec); SET64(4, RD(16) + RD(0)); JP_F_00279030(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET64(2, RD(3) & 0x3); if (t) goto L_00279000; }
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_00278F30; } }
L_00279000:;
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 32)));
L_00279008:;
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

void JP_F_00279030(Ctx *c) { /* func_00279030 */
ENTER(0x279030);
SET32(29, RW(29) + -32);
SET64(6, (s64)(s32)0x7fff0000);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET32(5, RW(0) + 1);
SET64(6, RD(6) | 0xffff);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x27905c); SET64(7, RD(29) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x279074); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(3, RSD(3) < (s64)4);
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0027908C; }
SET64(31, 0x27908c); SET64(4, (s32)rd32(c, (RW(29) + 0))); JP_F_002779B8(c);
L_0027908C:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002790A0(Ctx *c) { /* func_002790A0 */
ENTER(0x2790a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(5, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x2790d0); SET64(4, (s32)rd32(c, (RW(18) + 0))); JP_F_00269060(c);
SET64(4, RD(16) + RD(0));
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + -1);
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00279124; }
SET64(31, 0x2790ec);  JP_F_00278E40(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(16, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x279104); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 4)));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) - RW(2));
wr32(c, (RW(19) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 12)));
{ u32 t = RW(2); SET64(31, 0x279120); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0));
L_00279124:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00279140(Ctx *c) { /* func_00279140 */
ENTER(0x279140);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(3, (s32)rd32(c, (RW(17) + 856)));
{ int t = RD(3) != RD(0); SET64(2, RD(3) + RD(0)); if (t) goto L_002791D0; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET32(6, RW(0) + 64);
SET64(31, 0x279174); SET64(5, (s32)rd32(c, (RW(16) + 4))); JP_F_00277B50(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(3, RW(3) + 4); if (t) goto L_002791CC; }
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, RD(3) + RD(0));
SET32(5, RW(3) - RW(5));
SET32(6, RW(0) + -1);
SET64(31, 0x27919c); SET32(5, RW(2) - RW(5)); JP_F_00277B50(c);
SET64(3, RD(2) + RD(0));
if (RD(3) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 856))); goto L_002791D0; }
SET64(31, 0x2791b0); SET64(4, RD(3) + RD(0)); JP_F_002779B8(c);
SET64(3, RD(2) + RD(0));
SET64(2, RD(3) & 0x10);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 2); if (t) goto L_002791C8; }
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_002791CC; }
L_002791C8:;
wr32(c, (RW(17) + 856), RW(2));
L_002791CC:;
SET64(2, (s32)rd32(c, (RW(17) + 856)));
L_002791D0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002791E8(Ctx *c) { /* func_002791E8 */
ENTER(0x2791e8);
SET32(29, RW(29) + -64);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET32(17, RW(16) + 464);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET32(19, RW(16) + 904);
wr64(c, (RW(29) + 48), RD(31));
SET64(6, (s64)(s32)0x7fff0000);
wr32(c, (RW(16) + 948), RW(2));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(17) + 52)));
SET64(6, RD(6) | 0xffff);
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(7, RD(19) + RD(0));
SET32(3, RW(3) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET64(4, RD(18) + RD(0));
{ u32 t = RW(2); SET64(31, 0x279244); wr32(c, (RW(17) + 52), RW(3)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET32(2, RW(0) + -4);
SET64(6, RD(3) & RD(2));
SET32(3, RW(3) - RW(6));
SET32(6, RW(6) + 4);
SET64(5, (s8)rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET64(2, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(4, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(2));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(2, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(4));
SET32(8, RW(3) << 3);
SET32(5, RW(5) << 8);
SET32(6, RW(6) + 1);
SET64(5, RD(5) | RD(2));
SET64(3, RD(8) ^ 0x0);
SET32(2, RW(5) << (RW(8) & 31));
SET64(7, RD(5) + RD(0));
SET64(5, (s8)rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
if (RD(3) != 0) SET64(7, RD(2));
SET64(2, rd8(c, (RW(6) + 0)));
SET32(5, RW(5) << 8);
SET32(6, RW(6) + 1);
SET64(3, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET64(5, RD(5) | RD(2));
SET64(2, rd8(c, (RW(6) + 0)));
SET32(5, RW(5) << 8);
SET64(4, RSD(8) < (s64)20);
SET64(5, RD(5) | RD(3));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
{ int t = RD(4) != RD(0); SET64(5, RD(5) | RD(2)); if (t) goto L_00279358; }
SET32(8, RW(8) + -20);
{ int t = RD(8) == RD(0); SET32(2, RW(0) + 12); if (t) goto L_00279310; }
SET32(2, RW(2) - RW(8));
SET32(2, RW(5) >> (RW(2) & 31));
SET64(7, RD(7) | RD(2));
SET32(3, RW(7) >> 20);
SET32(7, RW(5) << (RW(8) & 31));
wr32(c, (RW(17) + 0), RW(3)); goto L_0027931C;
L_00279310:;
SET32(2, RW(7) >> 20);
SET64(7, RD(5) + RD(0));
wr32(c, (RW(17) + 0), RW(2));
L_0027931C:;
SET64(5, (s8)rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET64(2, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(3, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(2));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(2, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(3));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(5, RD(5) | RD(2)); goto L_00279368;
L_00279358:;
SET32(2, RW(7) >> 20);
SET32(7, RW(7) << 12);
wr32(c, (RW(17) + 0), RW(2));
SET32(8, RW(8) + 12);
L_00279368:;
SET64(2, RSD(8) < (s64)20);
{ int t = RD(2) != RD(0); SET32(2, RW(7) >> 20); if (t) goto L_002793E8; }
SET32(8, RW(8) + -20);
{ int t = RD(8) == RD(0); SET32(2, RW(0) + 12); if (t) goto L_002793A0; }
SET32(2, RW(2) - RW(8));
SET32(2, RW(5) >> (RW(2) & 31));
SET64(7, RD(7) | RD(2));
SET32(3, RW(7) >> 20);
SET32(7, RW(5) << (RW(8) & 31));
wr32(c, (RW(17) + 4), RW(3)); goto L_002793AC;
L_002793A0:;
SET32(2, RW(7) >> 20);
SET64(7, RD(5) + RD(0));
wr32(c, (RW(17) + 4), RW(2));
L_002793AC:;
SET64(5, (s8)rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET64(2, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(3, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(2));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(2, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(3));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(5, RD(5) | RD(2)); goto L_002793F4;
L_002793E8:;
SET32(7, RW(7) << 12);
wr32(c, (RW(17) + 4), RW(2));
SET32(8, RW(8) + 12);
L_002793F4:;
SET64(2, RSD(8) < (s64)28);
{ int t = RD(2) != RD(0); SET32(2, RW(7) >> 28); if (t) goto L_00279470; }
SET32(8, RW(8) + -28);
{ int t = RD(8) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_00279428; }
SET32(2, RW(2) - RW(8));
SET32(2, RW(5) >> (RW(2) & 31));
SET64(7, RD(7) | RD(2));
SET32(3, RW(7) >> 28);
SET32(7, RW(5) << (RW(8) & 31));
wr32(c, (RW(16) + 676), RW(3)); goto L_00279434;
L_00279428:;
SET32(2, RW(7) >> 28);
SET64(7, RD(5) + RD(0));
wr32(c, (RW(16) + 676), RW(2));
L_00279434:;
SET64(5, (s8)rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET64(2, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(3, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(2));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(2, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(3));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(5, RD(5) | RD(2)); goto L_0027947C;
L_00279470:;
SET32(7, RW(7) << 4);
wr32(c, (RW(16) + 676), RW(2));
SET32(8, RW(8) + 4);
L_0027947C:;
SET64(2, RSD(8) < (s64)28);
{ int t = RD(2) != RD(0); SET32(4, RW(7) >> 28); if (t) goto L_002794F0; }
SET32(8, RW(8) + -28);
{ int t = RD(8) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_002794B0; }
SET32(2, RW(2) - RW(8));
SET32(2, RW(5) >> (RW(2) & 31));
SET64(7, RD(7) | RD(2));
SET32(4, RW(7) >> 28);
SET32(7, RW(5) << (RW(8) & 31)); goto L_002794B4;
L_002794B0:;
SET64(7, RD(5) + RD(0));
L_002794B4:;
SET64(5, (s8)rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET64(2, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(3, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(2));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(2, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(3));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(5, RD(5) | RD(2)); goto L_002794F8;
L_002794F0:;
SET32(7, RW(7) << 4);
SET32(8, RW(8) + 4);
L_002794F8:;
SET64(2, RSD(8) < (s64)14);
{ int t = RD(2) != RD(0); wr32(c, (RW(17) + 16), RW(4)); if (t) goto L_00279578; }
SET32(8, RW(8) + -14);
{ int t = RD(8) == RD(0); SET32(2, RW(0) + 18); if (t) goto L_00279530; }
SET32(2, RW(2) - RW(8));
SET32(2, RW(5) >> (RW(2) & 31));
SET64(7, RD(7) | RD(2));
SET32(3, RW(7) >> 14);
SET32(7, RW(5) << (RW(8) & 31));
wr32(c, (RW(16) + 680), RW(3)); goto L_0027953C;
L_00279530:;
SET32(2, RW(7) >> 14);
SET64(7, RD(5) + RD(0));
wr32(c, (RW(16) + 680), RW(2));
L_0027953C:;
SET64(5, (s8)rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET64(2, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(3, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(2));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(2, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(3));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(5, RD(5) | RD(2)); goto L_00279588;
L_00279578:;
SET32(2, RW(7) >> 14);
SET32(7, RW(7) << 18);
wr32(c, (RW(16) + 680), RW(2));
SET32(8, RW(8) + 18);
L_00279588:;
SET32(8, RW(8) + 1);
SET64(2, RSD(8) < (s64)32);
if (RD(2) != RD(0)) { SET32(7, RW(7) << 1); goto L_002795D8; }
SET32(8, RW(8) + -32);
SET32(7, RW(5) << (RW(8) & 31));
SET64(5, (s8)rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET64(2, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(3, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(2));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(2, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(3));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(5, RD(5) | RD(2));
L_002795D8:;
SET64(2, RSD(8) < (s64)22);
{ int t = RD(2) != RD(0); SET32(2, RW(7) >> 22); if (t) goto L_00279658; }
SET32(8, RW(8) + -22);
{ int t = RD(8) == RD(0); SET32(2, RW(0) + 10); if (t) goto L_00279610; }
SET32(2, RW(2) - RW(8));
SET32(2, RW(5) >> (RW(2) & 31));
SET64(7, RD(7) | RD(2));
SET32(3, RW(7) >> 22);
SET32(7, RW(5) << (RW(8) & 31));
wr32(c, (RW(16) + 684), RW(3)); goto L_0027961C;
L_00279610:;
SET32(2, RW(7) >> 22);
SET64(7, RD(5) + RD(0));
wr32(c, (RW(16) + 684), RW(2));
L_0027961C:;
SET64(5, (s8)rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET64(2, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(3, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(2));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(2, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(3));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(5, RD(5) | RD(2)); goto L_00279664;
L_00279658:;
SET32(7, RW(7) << 10);
wr32(c, (RW(16) + 684), RW(2));
SET32(8, RW(8) + 10);
L_00279664:;
SET32(2, RW(7) >> 31);
SET32(3, RW(0) + 31);
{ int t = RD(8) != RD(3); wr32(c, (RW(16) + 688), RW(2)); if (t) goto L_002796B8; }
SET64(7, RD(5) + RD(0));
SET64(5, (s8)rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET64(8, RD(0) + RD(0));
SET64(2, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(3, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(2));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(2, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(3));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(5, RD(5) | RD(2)); goto L_002796C0;
L_002796B8:;
SET32(8, RW(8) + 1);
SET32(7, RW(7) << 1);
L_002796C0:;
SET32(2, RW(0) + 31);
{ int t = RD(8) != RD(2); SET32(4, RW(7) >> 31); if (t) goto L_00279710; }
SET64(7, RD(5) + RD(0));
SET64(5, (s8)rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET64(8, RD(0) + RD(0));
SET64(2, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(3, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(2));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(2, rd8(c, (RW(6) + 0)));
SET64(5, RD(5) | RD(3));
SET32(6, RW(6) + 1);
SET32(5, RW(5) << 8);
SET64(5, RD(5) | RD(2)); goto L_00279718;
L_00279710:;
SET32(8, RW(8) + 1);
SET32(7, RW(7) << 1);
L_00279718:;
{ int t = RD(4) == RD(0); SET32(4, RW(0) + 63); if (t) goto L_00279790; }
SET64(2, RSD(8) < (s64)24);
L_00279728:;
if (RD(2) != RD(0)) { SET32(8, RW(8) + 8); goto L_00279780; }
SET32(8, RW(8) + -24);
SET64(7, RD(5) + RD(0));
SET32(3, RW(5) << (RW(8) & 31));
SET64(5, (s8)rd8(c, (RW(6) + 0)));
SET64(2, RD(8) ^ 0x0);
SET32(6, RW(6) + 1);
if (RD(2) != 0) SET64(7, RD(3));
SET64(2, rd8(c, (RW(6) + 0)));
SET32(5, RW(5) << 8);
SET32(6, RW(6) + 1);
SET64(3, rd8(c, (RW(6) + 0)));
SET32(6, RW(6) + 1);
SET64(5, RD(5) | RD(2));
SET64(2, rd8(c, (RW(6) + 0)));
SET32(5, RW(5) << 8);
SET32(6, RW(6) + 1);
SET64(5, RD(5) | RD(3));
SET32(5, RW(5) << 8);
SET64(5, RD(5) | RD(2)); goto L_00279784;
L_00279780:;
SET32(7, RW(7) << 8);
L_00279784:;
SET32(4, RW(4) + -1);
{ int t = RSD(4) >= 0; SET64(2, RSD(8) < (s64)24); if (t) { POLL(); goto L_00279728; } }
L_00279790:;
SET32(2, RW(0) + 31);
{ int t = RD(8) != RD(2); SET32(4, RW(7) >> 31); if (t) goto L_002797A8; }
SET64(8, RD(0) + RD(0));
SET32(6, RW(6) + 4); goto L_002797AC;
L_002797A8:;
SET32(8, RW(8) + 1);
L_002797AC:;
{ int t = RD(4) == RD(0); SET32(4, RW(0) + 63); if (t) goto L_002797DC; }
SET64(2, RSD(8) < (s64)24);
L_002797B8:;
if (RD(2) != RD(0)) { SET32(8, RW(8) + 8); goto L_002797C8; }
SET32(8, RW(8) + -24);
SET32(6, RW(6) + 4);
L_002797C8:;
SET32(4, RW(4) + -1);
{ int t = RSD(4) >= 0; SET64(2, RSD(8) < (s64)24); if (t) { POLL(); goto L_002797B8; } }
L_002797DC:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(8, RW(8) + 7);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(8, RSW(8) >> 3);
SET32(2, RW(2) + 15);
SET32(8, RW(6) + RW(8));
SET32(3, RW(3) + 15);
SET32(2, RSW(2) >> 4);
SET32(3, RSW(3) >> 4);
wr32(c, (RW(17) + 8), RW(2));
mul_s(c, 0, 2, RSW(3), RSW(2));
wr32(c, (RW(17) + 12), RW(3));
SET32(8, RW(8) + -8);
SET64(7, RD(29) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 680)));
SET64(4, RD(19) + RD(0));
SET64(6, RD(19) + RD(0));
SET32(2, RW(2) + -1);
wr32(c, (RW(16) + 832), RW(2));
wr32(c, (RW(17) + 72), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 684)));
wr32(c, (RW(17) + 76), RW(2));
SET64(3, rd8(c, (RW(16) + 676)));
wr8(c, (RW(17) + 89), (u8)RW(3));
SET64(2, rd8(c, (RW(16) + 688)));
wr8(c, (RW(17) + 90), (u8)RW(2));
SET64(5, (s32)rd32(c, (RW(16) + 904)));
SET64(31, 0x279850); SET32(5, RW(8) - RW(5)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(6, RD(19) + RD(0));
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x279868); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x279880); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_002798A0(Ctx *c) { /* func_002798A0 */
ENTER(0x2798a0);
SET32(29, RW(29) + -64);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 16), RD(16));
SET64(6, (s64)(s32)0x7fff0000);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET32(19, RW(17) + 904);
wr64(c, (RW(29) + 48), RD(31));
SET32(16, RW(17) + 464);
wr32(c, (RW(17) + 948), RW(2));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(16) + 48)));
SET64(6, RD(6) | 0xffff);
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(7, RD(19) + RD(0));
SET32(3, RW(3) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET64(4, RD(18) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2798fc); wr32(c, (RW(16) + 48), RW(3)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET32(2, RW(0) + -4);
SET64(10, RD(3) & RD(2));
SET32(3, RW(3) - RW(10));
SET32(10, RW(10) + 4);
SET64(9, (s8)rd8(c, (RW(10) + 0)));
SET32(10, RW(10) + 1);
SET64(2, rd8(c, (RW(10) + 0)));
SET32(10, RW(10) + 1);
SET32(9, RW(9) << 8);
SET64(4, rd8(c, (RW(10) + 0)));
SET64(9, RD(9) | RD(2));
SET32(10, RW(10) + 1);
SET32(9, RW(9) << 8);
SET64(2, rd8(c, (RW(10) + 0)));
SET64(9, RD(9) | RD(4));
SET32(11, RW(3) << 3);
SET32(9, RW(9) << 8);
SET32(10, RW(10) + 1);
SET64(9, RD(9) | RD(2));
SET64(3, RD(11) ^ 0x0);
SET32(2, RW(9) << (RW(11) & 31));
SET64(12, RD(9) + RD(0));
SET64(9, (s8)rd8(c, (RW(10) + 0)));
SET32(10, RW(10) + 1);
if (RD(3) != 0) SET64(12, RD(2));
SET64(2, rd8(c, (RW(10) + 0)));
SET32(9, RW(9) << 8);
SET32(10, RW(10) + 1);
SET64(3, rd8(c, (RW(10) + 0)));
SET32(10, RW(10) + 1);
SET64(9, RD(9) | RD(2));
SET64(2, rd8(c, (RW(10) + 0)));
SET32(9, RW(9) << 8);
SET64(4, RSD(11) < (s64)7);
SET64(9, RD(9) | RD(3));
SET32(10, RW(10) + 1);
SET32(9, RW(9) << 8);
{ int t = RD(4) != RD(0); SET64(9, RD(9) | RD(2)); if (t) goto L_00279A08; }
SET32(11, RW(11) + -7);
{ int t = RD(11) == RD(0); SET32(2, RW(0) + 25); if (t) goto L_002799C0; }
SET32(2, RW(2) - RW(11));
SET32(2, RW(9) >> (RW(2) & 31));
SET64(12, RD(12) | RD(2));
SET32(4, RW(12) >> 7);
SET32(12, RW(9) << (RW(11) & 31)); goto L_002799C8;
L_002799C0:;
SET32(4, RW(12) >> 7);
SET64(12, RD(9) + RD(0));
L_002799C8:;
SET64(9, (s8)rd8(c, (RW(10) + 0)));
SET32(10, RW(10) + 1);
SET64(2, rd8(c, (RW(10) + 0)));
SET32(10, RW(10) + 1);
SET32(9, RW(9) << 8);
SET64(3, rd8(c, (RW(10) + 0)));
SET64(9, RD(9) | RD(2));
SET32(10, RW(10) + 1);
SET32(9, RW(9) << 8);
SET64(2, rd8(c, (RW(10) + 0)));
SET64(9, RD(9) | RD(3));
SET32(10, RW(10) + 1);
SET32(9, RW(9) << 8);
SET64(9, RD(9) | RD(2)); goto L_00279A14;
L_00279A08:;
SET32(4, RW(12) >> 7);
SET32(12, RW(12) << 25);
SET32(11, RW(11) + 25);
L_00279A14:;
SET64(8, RD(4) & 0x3f);
SET32(4, RW(4) >> 6);
SET64(7, RD(4) & 0x3f);
SET32(4, RW(4) >> 7);
SET64(6, RD(4) & 0x3f);
SET32(4, RW(4) >> 6);
SET32(2, RW(4) >> 5);
SET64(3, RD(4) & 0x1f);
SET32(5, RW(0) + 31);
SET32(4, RW(12) >> 31);
wr32(c, (RW(16) + 28), RW(2));
wr32(c, (RW(16) + 44), RW(8));
wr32(c, (RW(16) + 40), RW(7));
wr32(c, (RW(16) + 36), RW(6));
wr32(c, (RW(16) + 32), RW(3));
{ int t = RD(11) != RD(5); wr32(c, (RW(17) + 692), RW(4)); if (t) goto L_00279A68; }
SET64(12, RD(9) + RD(0));
SET64(11, RD(0) + RD(0));
SET32(10, RW(10) + 4); goto L_00279A70;
L_00279A68:;
SET32(11, RW(11) + 1);
SET32(12, RW(12) << 1);
L_00279A70:;
SET32(2, RW(12) >> 31);
SET32(3, RW(0) + 31);
{ int t = RD(11) != RD(3); wr32(c, (RW(17) + 696), RW(2)); if (t) goto L_00279A90; }
SET64(11, RD(0) + RD(0));
SET32(10, RW(10) + 4); goto L_00279A94;
L_00279A90:;
SET32(11, RW(11) + 1);
L_00279A94:;
SET32(5, RW(11) + 7);
SET64(2, (s32)rd32(c, (RW(17) + 904)));
SET32(5, RSW(5) >> 3);
SET64(7, RD(29) + RD(0));
SET32(5, RW(10) + RW(5));
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -8);
SET64(6, RD(19) + RD(0));
SET64(31, 0x279abc); SET32(5, RW(5) - RW(2)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(6, RD(19) + RD(0));
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x279ad4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x279aec); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00279B10(Ctx *c) { /* func_00279B10 */
ENTER(0x279b10);
SET32(29, RW(29) + -48);
SET32(2, RW(0) + 3);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET32(18, RW(16) + 904);
wr64(c, (RW(29) + 40), RD(31));
SET64(6, (s64)(s32)0x7fff0000);
wr32(c, (RW(16) + 948), RW(2));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(6, RD(6) | 0xffff);
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x279b58); SET64(7, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET32(2, RW(0) + -4);
SET32(9, RW(16) + 464);
SET64(8, RD(3) & RD(2));
SET32(3, RW(3) - RW(8));
SET32(8, RW(8) + 4);
SET64(6, (s8)rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET64(2, rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(4, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(2));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(2, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(4));
SET32(5, RW(3) << 3);
SET32(6, RW(6) << 8);
SET32(8, RW(8) + 1);
SET64(6, RD(6) | RD(2));
SET64(3, RD(5) ^ 0x0);
SET32(2, RW(6) << (RW(5) & 31));
SET64(7, RD(6) + RD(0));
SET64(6, (s8)rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
if (RD(3) != 0) SET64(7, RD(2));
SET64(2, rd8(c, (RW(8) + 0)));
SET32(6, RW(6) << 8);
SET32(8, RW(8) + 1);
SET64(3, rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET64(6, RD(6) | RD(2));
SET64(2, rd8(c, (RW(8) + 0)));
SET32(6, RW(6) << 8);
SET64(4, RSD(5) < (s64)22);
SET64(6, RD(6) | RD(3));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
{ int t = RD(4) != RD(0); SET64(6, RD(6) | RD(2)); if (t) goto L_00279C70; }
SET32(5, RW(5) + -22);
{ int t = RD(5) == RD(0); SET32(2, RW(0) + 10); if (t) goto L_00279C28; }
SET32(2, RW(2) - RW(5));
SET32(2, RW(6) >> (RW(2) & 31));
SET64(7, RD(7) | RD(2));
SET32(3, RW(7) >> 22);
SET32(7, RW(6) << (RW(5) & 31));
wr32(c, (RW(9) + 20), RW(3)); goto L_00279C34;
L_00279C28:;
SET32(2, RW(7) >> 22);
SET64(7, RD(6) + RD(0));
wr32(c, (RW(9) + 20), RW(2));
L_00279C34:;
SET64(6, (s8)rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET64(2, rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(3, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(2));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(2, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(3));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(6, RD(6) | RD(2)); goto L_00279C80;
L_00279C70:;
SET32(2, RW(7) >> 22);
SET32(7, RW(7) << 10);
wr32(c, (RW(9) + 20), RW(2));
SET32(5, RW(5) + 10);
L_00279C80:;
SET64(2, RSD(5) < (s64)29);
{ int t = RD(2) != RD(0); SET32(4, RW(7) >> 29); if (t) goto L_00279CF0; }
SET32(5, RW(5) + -29);
{ int t = RD(5) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_00279CB0; }
SET32(2, RW(2) - RW(5));
SET32(2, RW(6) >> (RW(2) & 31));
SET64(7, RD(7) | RD(2));
SET32(4, RW(7) >> 29);
SET32(7, RW(6) << (RW(5) & 31)); goto L_00279CB4;
L_00279CB0:;
SET64(7, RD(6) + RD(0));
L_00279CB4:;
SET64(6, (s8)rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET64(2, rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(3, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(2));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(2, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(3));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(6, RD(6) | RD(2)); goto L_00279CF8;
L_00279CF0:;
SET32(7, RW(7) << 3);
SET32(5, RW(5) + 3);
L_00279CF8:;
SET64(2, RSD(5) < (s64)16);
{ int t = RD(2) != RD(0); wr32(c, (RW(9) + 24), RW(4)); if (t) goto L_00279D78; }
SET32(5, RW(5) + -16);
{ int t = RD(5) == RD(0); SET32(2, RW(0) + 16); if (t) goto L_00279D30; }
SET32(2, RW(2) - RW(5));
SET32(2, RW(6) >> (RW(2) & 31));
SET64(7, RD(7) | RD(2));
SET32(3, RW(7) >> 16);
SET32(7, RW(6) << (RW(5) & 31));
wr32(c, (RW(16) + 700), RW(3)); goto L_00279D3C;
L_00279D30:;
SET32(2, RW(7) >> 16);
SET64(7, RD(6) + RD(0));
wr32(c, (RW(16) + 700), RW(2));
L_00279D3C:;
SET64(6, (s8)rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET64(2, rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(3, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(2));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(2, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(3));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(6, RD(6) | RD(2)); goto L_00279D88;
L_00279D78:;
SET32(2, RW(7) >> 16);
SET32(7, RW(7) << 16);
wr32(c, (RW(16) + 700), RW(2));
SET32(5, RW(5) + 16);
L_00279D88:;
SET64(10, (s32)rd32(c, (RW(9) + 24)));
SET32(2, RW(10) + -2);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_00279E9C; }
SET32(9, RW(16) + 748);
SET32(2, RW(7) >> 31);
SET32(3, RW(0) + 31);
{ int t = RD(5) != RD(3); wr32(c, (RW(9) + 0), RW(2)); if (t) goto L_00279DF8; }
SET64(7, RD(6) + RD(0));
SET64(6, (s8)rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET64(5, RD(0) + RD(0));
SET64(2, rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(3, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(2));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(2, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(3));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(6, RD(6) | RD(2)); goto L_00279E00;
L_00279DF8:;
SET32(5, RW(5) + 1);
SET32(7, RW(7) << 1);
L_00279E00:;
SET64(2, RSD(5) < (s64)29);
{ int t = RD(2) != RD(0); SET32(4, RW(7) >> 29); if (t) goto L_00279E70; }
SET32(5, RW(5) + -29);
{ int t = RD(5) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_00279E30; }
SET32(2, RW(2) - RW(5));
SET32(2, RW(6) >> (RW(2) & 31));
SET64(7, RD(7) | RD(2));
SET32(4, RW(7) >> 29);
SET32(7, RW(6) << (RW(5) & 31)); goto L_00279E34;
L_00279E30:;
SET64(7, RD(6) + RD(0));
L_00279E34:;
SET64(6, (s8)rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET64(2, rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(3, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(2));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(2, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(3));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(6, RD(6) | RD(2)); goto L_00279E78;
L_00279E70:;
SET32(7, RW(7) << 3);
SET32(5, RW(5) + 3);
L_00279E78:;
SET32(4, RW(4) + -1);
SET32(2, RW(0) + 27);
SET32(3, RW(0) + 1);
SET32(2, RW(2) - RW(4));
SET32(3, RW(3) << (RW(4) & 31));
wr32(c, (RW(9) + 8), RW(2));
wr32(c, (RW(9) + 12), RW(3));
wr32(c, (RW(9) + 4), RW(4));
SET32(2, RW(0) + 3);
L_00279E9C:;
if (RD(10) != RD(2)) { SET64(2, (s32)rd32(c, (RW(16) + 732))); goto L_00279FAC; }
SET32(9, RW(16) + 784);
SET32(2, RW(7) >> 31);
SET32(3, RW(0) + 31);
{ int t = RD(5) != RD(3); wr32(c, (RW(9) + 0), RW(2)); if (t) goto L_00279F00; }
SET64(7, RD(6) + RD(0));
SET64(6, (s8)rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET64(5, RD(0) + RD(0));
SET64(2, rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(3, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(2));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(2, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(3));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(6, RD(6) | RD(2)); goto L_00279F08;
L_00279F00:;
SET32(5, RW(5) + 1);
SET32(7, RW(7) << 1);
L_00279F08:;
SET64(2, RSD(5) < (s64)29);
{ int t = RD(2) != RD(0); SET32(4, RW(7) >> 29); if (t) goto L_00279F80; }
SET32(5, RW(5) + -29);
{ int t = RD(5) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_00279F38; }
SET32(2, RW(2) - RW(5));
SET32(2, RW(6) >> (RW(2) & 31));
SET64(7, RD(7) | RD(2));
SET32(4, RW(7) >> 29);
SET32(7, RW(6) << (RW(5) & 31)); goto L_00279F3C;
L_00279F38:;
SET64(7, RD(6) + RD(0));
L_00279F3C:;
SET64(6, (s8)rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET64(2, rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(3, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(2));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(2, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(3));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(6, RD(6) | RD(2)); goto L_00279F88;
L_00279F78:;
SET32(8, RW(8) + 4); goto L_0027A040;
L_00279F80:;
SET32(7, RW(7) << 3);
SET32(5, RW(5) + 3);
L_00279F88:;
SET32(4, RW(4) + -1);
SET32(2, RW(0) + 27);
SET32(3, RW(0) + 1);
SET32(2, RW(2) - RW(4));
SET32(3, RW(3) << (RW(4) & 31));
wr32(c, (RW(9) + 8), RW(2));
wr32(c, (RW(9) + 12), RW(3));
wr32(c, (RW(9) + 4), RW(4));
SET64(2, (s32)rd32(c, (RW(16) + 732)));
L_00279FAC:;
wr32(c, (RW(16) + 724), RW(2));
SET64(9, (s32)rd32(c, (RW(16) + 904))); goto L_0027A028;
L_00279FB8:;
SET64(2, RSD(5) < (s64)32);
if (RD(2) != RD(0)) { SET32(7, RW(7) << 9); goto L_0027A004; }
SET32(5, RW(5) + -32);
SET32(7, RW(6) << (RW(5) & 31));
SET64(6, (s8)rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET64(2, rd8(c, (RW(8) + 0)));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(3, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(2));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(2, rd8(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(3));
SET32(8, RW(8) + 1);
SET32(6, RW(6) << 8);
SET64(6, RD(6) | RD(2));
L_0027A004:;
SET32(3, RW(5) + 7);
SET64(4, (s32)rd32(c, (RW(16) + 908)));
SET32(3, RSW(3) >> 3);
SET32(3, RW(8) + RW(3));
SET32(3, RW(3) + -8);
SET32(3, RW(3) - RW(9));
SET64(3, RSD(3) < RSD(4));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -3); if (t) goto L_0027A098; }
L_0027A028:;
if (RSD(7) < 0) { SET32(5, RW(5) + 9); { POLL(); goto L_00279FB8; } }
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < (s64)32);
if (RD(2) == RD(0)) { SET32(5, RW(5) + -32); { POLL(); goto L_00279F78; } }
L_0027A040:;
SET32(5, RW(5) + 7);
SET64(7, RD(29) + RD(0));
SET32(5, RSW(5) >> 3);
SET64(4, RD(18) + RD(0));
SET32(5, RW(8) + RW(5));
SET64(6, RD(18) + RD(0));
SET32(5, RW(5) + -8);
SET64(31, 0x27a064); SET32(5, RW(5) - RW(9)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x27a07c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x27a094); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) + RD(0));
L_0027A098:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027A0B0(Ctx *c) { /* func_0027A0B0 */
ENTER(0x27a0b0);
SET32(29, RW(29) + -48);
SET64(6, (s64)(s32)0x7fff0000);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET32(17, RW(4) + 904);
wr64(c, (RW(29) + 32), RD(31));
SET64(7, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x27a0e8); SET64(6, RD(6) | 0xffff); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(5, RW(0) + -4);
SET64(7, RD(29) + RD(0));
SET64(5, RD(3) & RD(5));
SET64(4, RD(17) + RD(0));
SET32(2, RW(3) - RW(5));
SET64(6, RD(17) + RD(0));
SET32(2, RW(2) << 3);
SET32(2, RSW(2) >> 3);
SET32(5, RW(5) + RW(2));
SET32(5, RW(5) + 4);
SET64(31, 0x27a11c); SET32(5, RW(5) - RW(3)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(6, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x27a134); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET32(5, RW(0) + 1);
SET64(6, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x27a14c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, 0x27a154); SET64(4, RD(16) + RD(0)); JP_F_0027A5D8(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027A170(Ctx *c) { /* func_0027A170 */
ENTER(0x27a170);
SET32(29, RW(29) + -64);
SET64(6, (s64)(s32)0x7fff0000);
wr64(c, (RW(29) + 16), RD(16));
SET32(16, RW(0) + -4);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET32(19, RW(17) + 904);
wr64(c, (RW(29) + 48), RD(20));
SET64(7, RD(19) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
{ u32 t = RW(3); SET64(31, 0x27a1bc); SET64(6, RD(6) | 0xffff); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(19) + 0)));
SET64(4, RD(17) + RD(0));
SET64(16, RD(5) & RD(16));
SET64(6, (s32)rd32(c, (RW(4) + 908)));
SET32(17, RW(5) - RW(16));
SET32(16, RW(16) + 8);
SET64(31, 0x27a1dc); SET32(17, RW(17) << 3); JP_F_0027A260(c);
SET32(17, RSW(17) >> 3);
SET64(5, (s32)rd32(c, (RW(19) + 0)));
SET32(16, RW(16) + RW(17));
SET64(7, RD(29) + RD(0));
SET32(16, RW(16) + -4);
SET64(4, RD(19) + RD(0));
SET32(5, RW(16) - RW(5));
SET64(6, RD(19) + RD(0));
SET64(31, 0x27a204); SET64(20, RD(2) + RD(0)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(6, RD(19) + RD(0));
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x27a21c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET32(5, RW(0) + 1);
SET64(6, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x27a234); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, 0x27a23c); SET64(4, RD(18) + RD(0)); JP_F_0027A5D8(c);
SET64(2, RD(20) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0027A260(Ctx *c) { /* func_0027A260 */
ENTER(0x27a260);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(18));
SET32(18, RW(0) + 4);
wr64(c, (RW(29) + 56), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 72), RD(21));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 96), RD(30));
SET64(30, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 80), RD(22));
wr64(c, (RW(29) + 88), RD(23));
wr64(c, (RW(29) + 104), RD(31));
SET64(22, (s32)rd32(c, (RW(19) + 948)));
SET32(16, RW(6) + -3); goto L_0027A2AC;
L_0027A2A8:;
SET32(18, RW(18) + 1);
L_0027A2AC:;
SET64(2, RSD(18) < RSD(16));
{ int t = RD(2) == RD(0); SET64(3, RD(18) ^ RD(16)); if (t) goto L_0027A2C8; }
SET64(31, 0x27a2c0); SET32(4, RW(21) + RW(18)); JP_F_002779B8(c);
{ int t = RD(2) == RD(0); SET64(3, RD(18) ^ RD(16)); if (t) { POLL(); goto L_0027A2A8; } }
L_0027A2C8:;
SET32(23, RW(0) + -1);
SET32(2, RW(0) + 1);
{ int t = RD(22) != RD(2); if (RD(3) != 0) SET64(23, RD(0)); if (t) goto L_0027A2EC; }
SET64(4, RD(19) + RD(0));
SET64(5, RD(21) + RD(0));
SET64(31, 0x27a2e8); SET64(6, RD(18) + RD(0)); JP_F_0027A428(c);
SET64(30, RD(2) + RD(0));
L_0027A2EC:;
SET32(2, RW(22) << 1);
SET32(2, RW(2) + RW(22));
SET32(2, RW(2) << 2);
SET32(20, RW(2) + 944);
SET32(3, RW(19) + RW(20));
SET64(17, (s32)rd32(c, (RW(3) + 8)));
{ int t = RD(17) == RD(0); SET64(7, RD(29) + RD(0)); if (t) goto L_0027A3C4; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x27a324); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
SET64(5, RD(21) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x27a334); SET64(6, (s32)rd32(c, (RW(29) + 4))); JP_F_00127218(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x27a34c); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET64(2, RSD(4) < RSD(18));
{ int t = RD(2) == RD(0); SET32(2, RW(19) + RW(20)); if (t) goto L_0027A3AC; }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(16, RW(29) + 16);
SET32(6, RW(18) - RW(4));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET64(5, RD(0) + RD(0));
{ u32 t = RW(2); SET64(31, 0x27a37c); SET64(7, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(4, (s32)rd32(c, (RW(29) + 16)));
SET64(6, (s32)rd32(c, (RW(29) + 20)));
SET64(31, 0x27a390); SET32(5, RW(21) + RW(5)); JP_F_00127218(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x27a3a8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(2, RW(19) + RW(20));
L_0027A3AC:;
SET64(3, (s32)rd32(c, (RW(2) + 12)));
if (RD(3) == RD(0)) { SET32(2, RW(0) + 3); goto L_0027A3C8; }
SET64(4, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(3); SET64(31, 0x27a3c4); SET64(5, RD(22) + RD(0)); rt_call(c, t); }
L_0027A3C4:;
SET32(2, RW(0) + 3);
L_0027A3C8:;
{ int t = RD(22) != RD(2); SET64(2, RD(30) + RD(0)); if (t) goto L_0027A3F4; }
SET64(4, (s32)rd32(c, (RW(19) + 1000)));
{ int t = RD(4) == RD(0); SET64(5, RD(21) + RD(0)); if (t) goto L_0027A3F4; }
SET64(6, (s32)rd32(c, (RW(19) + 1004)));
SET64(2, RSD(18) < RSD(6));
if (RD(2) != 0) SET64(6, RD(18));
SET64(31, 0x27a3f0); wr32(c, (RW(19) + 1008), RW(6)); JP_F_00127218(c);
SET64(2, RD(30) + RD(0));
L_0027A3F4:;
SET64(16, rd64(c, (RW(29) + 32)));
if (RD(30) == 0) SET64(2, RD(23));
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

void JP_F_0027A428(Ctx *c) { /* func_0027A428 */
ENTER(0x27a428);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(6) + -4);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET32(20, RW(5) + 4);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 56), RD(23));
{ int t = RSD(19) <= 0; wr64(c, (RW(29) + 64), RD(31)); if (t) goto L_0027A4FC; }
SET64(23, (s64)(s32)0x4b0000);
SET64(22, (s64)(s32)0x4b0000);
SET32(21, RW(0) + 3);
SET32(16, RW(20) + RW(18));
L_0027A478:;
SET32(18, RW(18) + 1);
SET64(4, RD(16) + RD(0));
SET32(5, RW(23) + 22512);
SET64(31, 0x27a48c); SET32(6, RW(0) + 7); JP_F_0012A7C0(c);
{ int t = RD(2) != RD(0); SET32(4, RW(16) + 16); if (t) goto L_0027A4A8; }
SET64(31, 0x27a49c);  JP_F_00123EE0(c);
SET64(3, RD(0) + RD(0));
if (RD(2) != 0) SET64(3, RD(21));
wr32(c, (RW(17) + 916), RW(3));
L_0027A4A8:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(22) + 22520);
SET64(31, 0x27a4b8); SET32(6, RW(0) + 7); JP_F_0012A7C0(c);
{ int t = RD(2) != RD(0); SET32(4, RW(16) + 16); if (t) goto L_0027A4E4; }
SET64(31, 0x27a4c8);  JP_F_00123EE0(c);
SET32(4, RW(16) + 24);
SET64(31, 0x27a4d4); wr32(c, (RW(17) + 860), RW(2)); JP_F_00123EE0(c);
SET32(4, RW(16) + 32);
SET64(31, 0x27a4e0); wr32(c, (RW(17) + 864), RW(2)); JP_F_00123EE0(c);
wr32(c, (RW(17) + 868), RW(2));
L_0027A4E4:;
SET64(31, 0x27a4ec); SET64(4, RD(16) + RD(0)); JP_F_002779B8(c);
{ int t = RD(2) != RD(0); SET64(3, RSD(18) < RSD(19)); if (t) goto L_0027A4FC; }
{ int t = RD(3) != RD(0); SET32(16, RW(20) + RW(18)); if (t) { POLL(); goto L_0027A478; } }
L_0027A4FC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
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

void JP_F_0027A530(Ctx *c) { /* func_0027A530 */
ENTER(0x27a530);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET32(6, RW(0) + -1);
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(31, 0x27a564); SET64(5, (s32)rd32(c, (RW(17) + 0))); JP_F_00277B50(c);
SET64(16, RD(2) + RD(0));
SET64(2, RD(0) + RD(0));
{ int t = RD(16) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027A588; }
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(3, RD(5) + RD(0)); goto L_0027A59C;
L_0027A588:;
SET64(31, 0x27a590);  JP_F_002779B8(c);
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(5, RW(16) - RW(4));
L_0027A59C:;
SET32(3, RW(3) - RW(5));
SET32(4, RW(4) + RW(5));
wr32(c, (RW(17) + 0), RW(3));
wr32(c, (RW(18) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(3, RW(3) + RW(5));
SET64(17, rd64(c, (RW(29) + 8)));
wr32(c, (RW(19) + 0), RW(3));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027A5D8(Ctx *c) { /* func_0027A5D8 */
ENTER(0x27a5d8);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
SET32(19, RW(29) + 16);
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 64), RD(31)); goto L_0027A6C0;
L_0027A600:;
SET64(31, 0x27a608); SET64(4, (s32)rd32(c, (RW(29) + 0))); JP_F_00277B50(c);
SET64(7, RD(19) + RD(0));
SET64(17, RD(2) + RD(0));
SET64(4, RD(29) + RD(0));
{ int t = RD(17) != RD(0); SET64(6, RD(29) + RD(0)); if (t) goto L_0027A660; }
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x27a628); SET32(5, RW(5) + -3); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x27a640); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x27a658); SET64(6, RD(19) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_0027A6C4;
L_0027A660:;
SET64(31, 0x27a668); SET64(4, RD(17) + RD(0)); JP_F_002779B8(c);
SET64(7, RD(19) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(4, RD(29) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(31, 0x27a684); SET32(5, RW(17) - RW(5)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x27a69c); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x27a6b4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, RD(18) + RD(0)); goto L_0027A714;
L_0027A6C0:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
L_0027A6C4:;
SET64(6, (s64)(s32)0x7fff0000);
SET32(5, RW(0) + 1);
SET64(6, RD(6) | 0xffff);
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET64(4, RD(16) + RD(0));
{ u32 t = RW(2); SET64(31, 0x27a6e0); SET64(7, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(5, RD(2) + RD(0));
SET64(2, RSD(2) < (s64)4);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + -1); if (t) { POLL(); goto L_0027A600; } }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(6, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x27a710); SET64(18, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, RD(18) + RD(0));
L_0027A714:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0027A730(Ctx *c) { /* func_0027A730 */
ENTER(0x27a730);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(5, RW(4) + 592);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 896)));
{ int t = RD(2) == RD(0); SET64(6, (s32)rd32(c, (RW(4) + 404))); if (t) goto L_0027A794; }
SET64(3, (s32)rd32(c, (RW(4) + 900)));
wr32(c, (RW(4) + 896), RW(0));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 900), RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 12)));
SET32(2, RW(2) + 1);
{ int t = RD(6) != RD(0); wr32(c, (RW(5) + 12), RW(2)); if (t) goto L_0027A788; }
SET32(2, RW(0) + -2); goto L_0027A7E0;
L_0027A788:;
SET64(2, (s32)rd32(c, (RW(5) + 16)));
SET32(2, RW(2) + 1);
wr32(c, (RW(5) + 16), RW(2));
L_0027A794:;
SET32(2, RW(0) + -3);
SET32(17, RW(0) + -2);
if (RD(6) != 0) SET64(17, RD(2));
SET32(18, RW(0) + 4);
L_0027A7A8:;
SET64(31, 0x27a7b0); SET64(4, RD(16) + RD(0)); JP_F_0027A5D8(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 4);
{ int t = RD(2) == RD(0); SET64(3, RD(2) & RD(19)); if (t) goto L_0027A7DC; }
if (RD(3) != RD(0)) { SET64(17, RD(0) + RD(0)); goto L_0027A7DC; }
SET64(31, 0x27a7d4);  JP_F_0027A800(c);
{ int t = RD(2) == RD(18);  if (t) { POLL(); goto L_0027A7A8; } }
L_0027A7DC:;
SET64(2, RD(17) + RD(0));
L_0027A7E0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027A800(Ctx *c) { /* func_0027A800 */
ENTER(0x27a800);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) < (u64)(s64)1);
wr64(c, (RW(29) + 32), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x27a828); SET64(7, RD(29) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x27a840); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027A858(Ctx *c) { /* func_0027A858 */
ENTER(0x27a858);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0027A860(Ctx *c) { /* func_0027A860 */
ENTER(0x27a860);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0027A868(Ctx *c) { /* func_0027A868 */
ENTER(0x27a868);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 22528); return;
}

void JP_F_0027A878(Ctx *c) { /* func_0027A878 */
ENTER(0x27a878);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 64);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27a89c); SET64(18, RD(4) + RD(0)); JP_F_00277B50(c);
SET64(16, RD(2) + RD(0));
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027A8FC; }
SET64(31, 0x27a8b0);  JP_F_0027B160(c);
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 4); if (t) goto L_0027A8C0; }
SET32(2, RW(0) + 1); goto L_0027A8F8;
L_0027A8C0:;
SET32(3, RW(16) - RW(18));
SET64(4, RD(16) + RD(0));
SET32(17, RW(17) - RW(3));
{ int t = RSD(17) <= 0; SET64(5, RD(17) + RD(0)); if (t) goto L_0027A8F8; }
SET64(31, 0x27a8dc); SET32(6, RW(0) + -1); JP_F_00277B50(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027A8F8; }
SET64(31, 0x27a8f0);  JP_F_002779B8(c);
SET64(2, RD(2) & 0x10);
SET64(2, RD(2) < (u64)(s64)1);
L_0027A8F8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0027A8FC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027A910(Ctx *c) { /* func_0027A910 */
ENTER(0x27a910);
SET64(3, (s64)(s32)0x530000);
SET64(2, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -32);
SET32(3, RW(3) + -5384);
SET32(2, RW(2) + 22528);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(16, RD(5) + RD(0));
SET64(31, 0x27a940); wr32(c, (RW(3) + 0), RW(2)); JP_F_0027A9E8(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0);  if (t) goto L_0027A980; }
SET64(3, (s64)(s32)0xff030000);
SET64(3, RD(3) | 0xff05);
if (RD(4) == RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027A9D8; }
L_0027A960:;
 { POLL(); goto L_0027A960; }
L_0027A980:;
SET64(31, 0x27a988);  JP_F_0027AA60(c);
SET64(31, 0x27a990); SET64(4, RD(16) + RD(0)); JP_F_0027AA88(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x27a99c); SET64(5, RD(2) + RD(0)); JP_F_0027AC08(c);
SET64(2, (s64)(s32)0x530000);
SET64(31, 0x27a9a8); SET64(16, (s32)rd32(c, (RW(2) + -5296))); JP_F_00278750(c);
SET64(31, 0x27a9b0);  JP_F_00278DD0(c);
SET64(31, 0x27a9b8); SET32(4, RW(16) + 6112); JP_F_0027AAA8(c);
SET64(31, 0x27a9c0);  JP_F_0027AB80(c);
SET64(31, 0x27a9c8); SET64(4, RD(16) + RD(0)); JP_F_0027AC00(c);
SET64(31, 0x27a9d0);  JP_F_0027B178(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_0027A9D8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027A9E8(Ctx *c) { /* func_0027A9E8 */
ENTER(0x27a9e8);
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x5a5a0000);
SET64(4, (s32)rd32(c, (RW(2) + 22672)));
SET32(29, RW(29) + -16);
SET64(3, RD(3) | 0x5a5a);
{ int t = RD(4) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0027AA20; }
SET64(5, (s64)(s32)0xff030000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0xff02);
SET32(29, RW(29) + 16); { JP_F_00278878(c); return; }
L_0027AA20:;
SET64(2, (s64)(s32)0x4b0000);
SET32(4, RW(0) + 4);
SET64(3, rd8(c, (RW(2) + 22688)));
{ int t = RD(3) == RD(4); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0027AA50; }
L_0027AA38:;
SET32(1, RW(0) + -1);
{ u32 t = RW(1); SET64(31, 0x27aa44);  rt_call(c, t); }
 { POLL(); goto L_0027AA38; }
L_0027AA50:;
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027AA60(Ctx *c) { /* func_0027AA60 */
ENTER(0x27aa60);
 return;
}

void JP_F_0027AA68(Ctx *c) { /* func_0027AA68 */
ENTER(0x27aa68);
SET64(3, (s64)(s32)0x530000);
SET64(2, (s32)rd32(c, (RW(3) + -5312)));
{ int t = RD(2) == RD(0);  if (t) goto L_0027AA80; }
SET64(2, (s64)(s32)0x2000000);
SET64(4, RD(4) | RD(2));
L_0027AA80:;
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_0027AA88(Ctx *c) { /* func_0027AA88 */
ENTER(0x27aa88);
SET64(3, (s64)(s32)0x530000);
SET64(2, (s32)rd32(c, (RW(3) + -5308)));
{ int t = RD(2) == RD(0);  if (t) goto L_0027AAA0; }
SET64(2, (s64)(s32)0x2000000);
SET64(4, RD(4) | RD(2));
L_0027AAA0:;
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_0027AAA8(Ctx *c) { /* func_0027AAA8 */
ENTER(0x27aaa8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27aabc); SET64(16, RD(4) + RD(0)); JP_F_0027AAF8(c);
SET64(5, (s64)(s32)0x410000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 17728);
{ int t = RD(16) == RD(0); SET32(6, RW(0) + 256); if (t) goto L_0027AAE4; }
SET64(31, 0x27aad8);  JP_F_00275090(c);
SET64(3, (s64)(s32)0x410000);
SET32(2, RW(16) + 384);
wr32(c, (RW(3) + 17716), RW(2));
L_0027AAE4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027AAF8(Ctx *c) { /* func_0027AAF8 */
ENTER(0x27aaf8);
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(0) + 383);
SET32(4, RW(2) + 17728);
L_0027AB08:;
SET32(3, RW(3) + -1);
wr8(c, (RW(4) + 0), (u8)RW(0));
{ int t = RSD(3) >= 0; SET32(4, RW(4) + 1); if (t) { POLL(); goto L_0027AB08; } }
SET64(3, RD(0) + RD(0));
L_0027AB28:;
wr8(c, (RW(4) + 0), (u8)RW(3));
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < (s64)256);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 1); if (t) { POLL(); goto L_0027AB28; } }
SET32(2, RW(0) + -1);
SET32(3, RW(0) + 383);
L_0027AB50:;
SET32(3, RW(3) + -1);
wr8(c, (RW(4) + 0), (u8)RW(2));
{ int t = RSD(3) >= 0; SET32(4, RW(4) + 1); if (t) { POLL(); goto L_0027AB50; } }
SET64(2, (s64)(s32)0x410000);
SET64(3, (s64)(s32)0x410000);
SET32(2, RW(2) + 18112);
wr32(c, (RW(3) + 17716), RW(2)); return;
}

void JP_F_0027AB80(Ctx *c) { /* func_0027AB80 */
ENTER(0x27ab80);
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -5376);
SET64(4, (s32)rd32(c, (RW(2) + 84)));
{ int t = RSD(4) <= 0; SET64(3, (s32)rd32(c, (RW(2) + 88))); if (t) goto L_0027ABBC; }
SET64(2, RD(4) + RD(0));
SET32(4, RW(0) + 1);
L_0027ABA0:;
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 392), RW(4));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 1024); if (t) { POLL(); goto L_0027ABA0; } }
L_0027ABBC:;
 return;
}

void JP_F_0027ABC8(Ctx *c) { /* func_0027ABC8 */
ENTER(0x27abc8);
SET64(3, (s64)(s32)0x530000);
SET64(6, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + -5296)));
SET32(5, RW(2) + 4448);
SET32(3, RW(2) + 4384);
SET32(2, RW(2) + 4352);
wr32(c, (RW(4) + 44), RW(3));
wr32(c, (RW(4) + 48), RW(2));
wr32(c, (RW(4) + 52), RW(5));
SET64(2, (s32)rd32(c, (RW(6) + 17716)));
wr32(c, (RW(4) + 272), RW(2));
wr32(c, (RW(4) + 64), RW(2)); return;
}

void JP_F_0027AC00(Ctx *c) { /* func_0027AC00 */
ENTER(0x27ac00);
 return;
}

void JP_F_0027AC08(Ctx *c) { /* func_0027AC08 */
ENTER(0x27ac08);
SET32(29, RW(29) + -48);
SET32(2, RW(0) + -64);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(5) + 63);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
SET64(18, RD(18) & RD(2));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(19) << 10);
SET32(6, RW(19) << 8);
SET32(17, RW(18) + RW(17));
wr64(c, (RW(29) + 32), RD(20));
SET32(6, RW(6) + 2048);
SET64(4, RD(18) + RD(0));
SET32(20, RW(17) + 1056);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x27ac58); SET64(16, (s64)(s32)0x530000); JP_F_00275270(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x27ac64); SET32(5, RW(0) + 7136); JP_F_0027AF78(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(16, RW(16) + -5376);
SET32(5, RW(5) + 22608);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27ac7c); SET32(6, RW(0) + 16); JP_F_00275090(c);
wr32(c, (RW(16) + 76), RW(17));
wr32(c, (RW(16) + 88), RW(18));
wr32(c, (RW(16) + 80), RW(20));
wr32(c, (RW(16) + 84), RW(19));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027ACB0(Ctx *c) { /* func_0027ACB0 */
ENTER(0x27acb0);
SET32(3, RW(0) + -1);
SET32(5, RW(0) + 1);
SET32(2, RW(0) + 3);
wr8(c, (RW(4) + 89), (u8)RW(5));
wr32(c, (RW(4) + 56), RW(2));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(0));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(0));
wr32(c, (RW(4) + 60), RW(5));
wr32(c, (RW(4) + 64), RW(5));
wr32(c, (RW(4) + 68), RW(5));
wr32(c, (RW(4) + 72), RW(0));
wr32(c, (RW(4) + 76), RW(0));
wr16(c, (RW(4) + 80), (u16)RW(3));
wr16(c, (RW(4) + 82), (u16)RW(3));
wr8(c, (RW(4) + 84), (u8)RW(0));
wr8(c, (RW(4) + 85), (u8)RW(3));
wr8(c, (RW(4) + 86), (u8)RW(3));
wr8(c, (RW(4) + 87), (u8)RW(3));
wr8(c, (RW(4) + 88), (u8)RW(0));
wr8(c, (RW(4) + 90), (u8)RW(0));
wr8(c, (RW(4) + 91), (u8)RW(0));
wr8(c, (RW(4) + 92), (u8)RW(0));
wr8(c, (RW(4) + 93), (u8)RW(3));
wr8(c, (RW(4) + 94), (u8)RW(3));
wr8(c, (RW(4) + 95), (u8)RW(3));
wr8(c, (RW(4) + 100), (u8)RW(3));
wr8(c, (RW(4) + 96), (u8)RW(3));
wr8(c, (RW(4) + 97), (u8)RW(0));
wr8(c, (RW(4) + 98), (u8)RW(3));
wr8(c, (RW(4) + 99), (u8)RW(3)); return;
}

void JP_F_0027AD60(Ctx *c) { /* func_0027AD60 */
ENTER(0x27ad60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27ad70);  JP_F_0027B1A8(c);
SET64(2, (s64)(s32)0x530000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + -5296)));
SET32(5, RW(0) + 7136);
SET32(29, RW(29) + 16); { JP_F_0027AF80(c); return; }
}

void JP_F_0027AD88(Ctx *c) { /* func_0027AD88 */
ENTER(0x27ad88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27ad9c);  JP_F_0027ADE0(c);
SET64(16, RD(2) + RD(0));
SET32(5, RW(0) + 1016);
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027ADD0; }
SET64(31, 0x27adb4);  JP_F_0027AF78(c);
SET64(31, 0x27adbc); SET64(4, RD(16) + RD(0)); JP_F_0027AE30(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x27adc8); SET64(4, RD(16) + RD(0)); JP_F_0027B1C0(c);
wr32(c, (RW(16) + 944), RW(2));
SET64(2, RD(16) + RD(0));
L_0027ADD0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027ADE0(Ctx *c) { /* func_0027ADE0 */
ENTER(0x27ade0);
SET64(2, (s64)(s32)0x530000);
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) + -5376);
SET64(5, (s32)rd32(c, (RW(2) + 84)));
{ int t = RSD(5) <= 0; SET64(4, (s32)rd32(c, (RW(2) + 88))); if (t) goto L_0027AE24; }
SET32(7, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 392)));
L_0027AE00:;
SET64(2, RD(4) + RD(0));
{ int t = RD(3) == RD(7); SET32(4, RW(4) + 1024); if (t) goto L_0027AE28; }
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(5));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 392))); { POLL(); goto L_0027AE00; } }
L_0027AE24:;
SET64(2, RD(0) + RD(0));
L_0027AE28:;
 return;
}

void JP_F_0027AE30(Ctx *c) { /* func_0027AE30 */
ENTER(0x27ae30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27ae4c); SET64(17, RD(0) + RD(0)); JP_F_0027ABC8(c);
wr32(c, (RW(16) + 396), RW(0));
SET64(5, (s64)(s32)0x530000);
SET32(5, RW(5) + -5376);
SET32(6, RW(0) + 16);
SET64(31, 0x27ae64); SET32(4, RW(16) + 400); JP_F_00275090(c);
SET64(31, 0x27ae6c); SET32(4, RW(16) + 592); JP_F_00278770(c);
SET64(31, 0x27ae74); SET32(4, RW(16) + 464); JP_F_0027ACB0(c);
wr32(c, (RW(16) + 896), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 428)));
wr32(c, (RW(16) + 900), RW(0));
wr32(c, (RW(16) + 932), RW(2));
wr32(c, (RW(16) + 856), RW(0));
wr32(c, (RW(16) + 860), RW(0));
wr32(c, (RW(16) + 864), RW(0));
wr32(c, (RW(16) + 868), RW(0));
wr32(c, (RW(16) + 916), RW(0));
SET64(5, RD(17) + RD(0));
L_0027AEA0:;
SET32(17, RW(17) + 1);
SET64(4, RD(16) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x27aeb8); SET64(8, RD(0) + RD(0)); JP_F_00278DD8(c);
SET64(2, RSD(17) < (s64)4);
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) { POLL(); goto L_0027AEA0; } }
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x27aed4); SET64(6, RD(0) + RD(0)); JP_F_00278E00(c);
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 392), RW(2));
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027AEF8(Ctx *c) { /* func_0027AEF8 */
ENTER(0x27aef8);
SET32(4, RW(4) + 120);
SET64(2, (s32)rd32(c, (RW(4) + 24)));
wr32(c, (RW(5) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 28)));
wr32(c, (RW(6) + 0), RW(3)); return;
}

void JP_F_0027AF10(Ctx *c) { /* func_0027AF10 */
ENTER(0x27af10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27af24); SET64(16, RD(4) + RD(0)); JP_F_0027B138(c);
SET64(5, (s64)(s32)0xff030000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x201); if (t) goto L_0027AF48; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00278878(c); return; }
L_0027AF48:;
SET64(31, 0x27af50);  JP_F_0027B1D8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27af5c); SET32(5, RW(0) + 1016); JP_F_0027AF80(c);
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 392), RW(2));
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027AF78(Ctx *c) { /* func_0027AF78 */
ENTER(0x27af78);
 return;
}

void JP_F_0027AF80(Ctx *c) { /* func_0027AF80 */
ENTER(0x27af80);
 return;
}

void JP_F_0027AF88(Ctx *c) { /* func_0027AF88 */
ENTER(0x27af88);
 return;
}

void JP_F_0027AF90(Ctx *c) { /* func_0027AF90 */
ENTER(0x27af90);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 8);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
{ int t = RD(18) != RD(2); SET64(4, RD(18) + RD(0)); if (t) goto L_0027AFC8; }
{ int t = RD(16) != RD(0); SET64(2, (s64)(s32)0x280000); if (t) goto L_0027AFC8; }
SET32(16, RW(2) + -20600);
L_0027AFC8:;
{ int t = RD(17) != RD(0);  if (t) goto L_0027AFE8; }
SET64(31, 0x27afd8); SET64(5, RD(16) + RD(0)); JP_F_0027B058(c);
SET64(2, (s64)(s32)0x530000);
SET32(3, RW(2) + -5376); goto L_0027B01C;
L_0027AFE8:;
SET64(31, 0x27aff0); SET64(4, RD(17) + RD(0)); JP_F_0027B138(c);
SET64(5, (s64)(s32)0xff030000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0027B018; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x202);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00278878(c); return; }
L_0027B018:;
SET32(3, RW(17) + 400);
L_0027B01C:;
SET32(2, RW(18) << 2);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(5, RD(18) + RD(0));
wr32(c, (RW(2) + 0), RW(16));
SET64(31, 0x27b038); SET64(6, RD(16) + RD(0)); JP_F_0027B1F0(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027B058(Ctx *c) { /* func_0027B058 */
ENTER(0x27b058);
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -5376);
SET64(6, (s32)rd32(c, (RW(2) + 84)));
{ int t = RSD(6) <= 0; SET64(3, (s32)rd32(c, (RW(2) + 88))); if (t) goto L_0027B09C; }
SET32(2, RW(4) << 2);
SET32(7, RW(0) + 2);
SET32(4, RW(2) + 400);
L_0027B078:;
SET64(2, (s32)rd32(c, (RW(3) + 392)));
{ int t = RD(2) != RD(7); SET32(6, RW(6) + -1); if (t) goto L_0027B08C; }
SET32(2, RW(3) + RW(4));
wr32(c, (RW(2) + 0), RW(5));
L_0027B08C:;
{ int t = RD(6) != RD(0); SET32(3, RW(3) + 1024); if (t) { POLL(); goto L_0027B078; } }
L_0027B09C:;
 return;
}

void JP_F_0027B0A8(Ctx *c) { /* func_0027B0A8 */
ENTER(0x27b0a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0027B0D8; }
SET64(2, (s64)(s32)0x530000);
SET32(4, RW(2) + -5376); goto L_0027B10C;
L_0027B0D8:;
SET64(31, 0x27b0e0);  JP_F_0027B138(c);
SET64(5, (s64)(s32)0xff030000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0027B108; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x210);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00278878(c); return; }
L_0027B108:;
SET32(4, RW(16) + 400);
L_0027B10C:;
SET32(3, RW(17) << 2);
SET64(17, rd64(c, (RW(29) + 8)));
SET32(3, RW(3) + RW(4));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 24)));
wr32(c, (RW(18) + 0), RW(4));
SET64(18, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027B138(Ctx *c) { /* func_0027B138 */
ENTER(0x27b138);
SET64(2, (s64)(s32)0x530000);
wr32(c, (RW(2) + -5284), RW(4));
{ int t = RD(4) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_0027B154; }
SET64(3, (s32)rd32(c, (RW(4) + 392)));
SET64(3, RD(3) ^ 0x2);
if (RD(3) == 0) SET64(2, RD(0));
L_0027B154:;
 return;
}

void JP_F_0027B160(Ctx *c) { /* func_0027B160 */
ENTER(0x27b160);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026EEA0(c); return; }
}

void JP_F_0027B178(Ctx *c) { /* func_0027B178 */
ENTER(0x27b178);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27b188);  JP_F_00274698(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, (s64)(s32)0x530000);
SET32(5, RW(5) + -5280);
SET32(4, RW(0) + 8);
SET32(6, RW(0) + 14400);
SET32(29, RW(29) + 16); { JP_F_0026EF10(c); return; }
}

void JP_F_0027B1A8(Ctx *c) { /* func_0027B1A8 */
ENTER(0x27b1a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026EF38(c); return; }
}

void JP_F_0027B1C0(Ctx *c) { /* func_0027B1C0 */
ENTER(0x27b1c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026EF60(c); return; }
}

void JP_F_0027B1D8(Ctx *c) { /* func_0027B1D8 */
ENTER(0x27b1d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 944)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026EF90(c); return; }
}

void JP_F_0027B1F0(Ctx *c) { /* func_0027B1F0 */
ENTER(0x27b1f0);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0027B204; }
SET64(2, (s32)rd32(c, (RW(4) + 944)));
L_0027B204:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { JP_F_0026EFE0(c); return; }
}

void JP_F_0027B218(Ctx *c) { /* func_0027B218 */
ENTER(0x27b218);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x27b23c); SET64(19, RD(5) + RD(0)); JP_F_0026EEA0(c);
{ int t = RD(2) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_0027B2C0; }
SET32(16, RW(17) + 952);
SET64(6, (s32)rd32(c, (RW(16) + 0)));
L_0027B250:;
SET64(5, RD(18) + RD(0));
SET64(7, (s32)rd32(c, (RW(16) + 4)));
SET32(18, RW(18) + 1);
SET64(8, (s32)rd32(c, (RW(16) + 8)));
SET32(16, RW(16) + 12);
SET64(31, 0x27b26c); SET64(4, (s32)rd32(c, (RW(17) + 944))); JP_F_0026F0A8(c);
SET64(2, RSD(18) < (s64)4);
if (RD(2) != RD(0)) { SET64(6, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_0027B250; } }
SET64(4, (s32)rd32(c, (RW(17) + 944)));
SET64(5, (s32)rd32(c, (RW(17) + 1000)));
SET64(31, 0x27b288); SET64(6, (s32)rd32(c, (RW(17) + 1004))); JP_F_0026F0D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 944)));
SET64(31, 0x27b294); SET64(5, RD(19) + RD(0)); JP_F_0026F120(c);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + -2); if (t) goto L_0027B2C4; }
SET64(4, (s32)rd32(c, (RW(17) + 944)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x27b2ac); SET32(6, RW(17) + 1008); JP_F_0026F0F8(c);
SET64(31, 0x27b2b4); SET64(4, RD(17) + RD(0)); JP_F_0027B2E0(c);
SET64(2, RD(0) + RD(0)); goto L_0027B2C4;
L_0027B2C0:;
SET32(2, RW(0) + -1);
L_0027B2C4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027B2E0(Ctx *c) { /* func_0027B2E0 */
ENTER(0x27b2e0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 160), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 168), RD(31));
SET64(5, RD(29) + RD(0));
SET64(31, 0x27b2fc); SET64(4, (s32)rd32(c, (RW(16) + 944))); JP_F_0026F150(c);
SET64(4, (s32)rd32(c, (RW(16) + 944)));
SET64(31, 0x27b308); SET32(5, RW(29) + 128); JP_F_0026F178(c);
SET64(4, (s32)rd32(c, (RW(16) + 944)));
SET32(5, RW(29) + 132);
SET32(6, RW(29) + 136);
SET64(31, 0x27b31c); SET32(7, RW(29) + 140); JP_F_0026F1A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 944)));
SET32(5, RW(29) + 144);
SET64(31, 0x27b32c); SET32(6, RW(29) + 148); JP_F_0026F1C8(c);
SET32(3, RW(16) + 464);
SET64(2, RD(3) & 0x7);
{ int t = RD(2) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0027B3A0; }
SET32(2, RW(29) + 128);
L_0027B340:;
ldl(c, 5, (RW(4) + 7));
ldr(c, 5, (RW(4) + 0));
ldl(c, 6, (RW(4) + 15));
ldr(c, 6, (RW(4) + 8));
ldl(c, 7, (RW(4) + 23));
ldr(c, 7, (RW(4) + 16));
ldl(c, 8, (RW(4) + 31));
ldr(c, 8, (RW(4) + 24));
sdl(c, 5, (RW(3) + 7));
sdr(c, 5, (RW(3) + 0));
sdl(c, 6, (RW(3) + 15));
sdr(c, 6, (RW(3) + 8));
sdl(c, 7, (RW(3) + 23));
sdr(c, 7, (RW(3) + 16));
sdl(c, 8, (RW(3) + 31));
sdr(c, 8, (RW(3) + 24));
SET32(4, RW(4) + 32);
{ int t = RD(4) != RD(2); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_0027B340; } }
SET64(2, (s32)rd32(c, (RW(29) + 132))); goto L_0027B3DC;
L_0027B3A0:;
SET32(2, RW(29) + 128);
L_0027B3A4:;
SET64(5, rd64(c, (RW(4) + 0)));
SET64(6, rd64(c, (RW(4) + 8)));
SET64(7, rd64(c, (RW(4) + 16)));
SET64(8, rd64(c, (RW(4) + 24)));
wr64(c, (RW(3) + 0), RD(5));
wr64(c, (RW(3) + 8), RD(6));
wr64(c, (RW(3) + 16), RD(7));
wr64(c, (RW(3) + 24), RD(8));
SET32(4, RW(4) + 32);
{ int t = RD(4) != RD(2); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_0027B3A4; } }
SET64(2, (s32)rd32(c, (RW(29) + 132)));
L_0027B3DC:;
SET64(6, (s32)rd32(c, (RW(29) + 128)));
SET32(4, RW(2) + 2047);
SET64(3, RSD(2) < (s64)0);
SET64(5, (s32)rd32(c, (RW(29) + 136)));
if (RD(3) != 0) SET64(2, RD(4));
SET64(4, (s32)rd32(c, (RW(29) + 144)));
SET32(2, RSW(2) >> 11);
SET64(3, (s32)rd32(c, (RW(29) + 148)));
SET64(31, rd64(c, (RW(29) + 168)));
wr32(c, (RW(16) + 680), RW(6));
wr32(c, (RW(16) + 696), RW(3));
wr32(c, (RW(16) + 684), RW(2));
wr32(c, (RW(16) + 700), RW(5));
wr32(c, (RW(16) + 692), RW(4));
SET64(16, rd64(c, (RW(29) + 160)));
SET32(29, RW(29) + 176); return;
}

void JP_F_0027B420(Ctx *c) { /* func_0027B420 */
ENTER(0x27b420);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0027B438(c); return; }
}

void JP_F_0027B438(Ctx *c) { /* func_0027B438 */
ENTER(0x27b438);
SET64(2, RD(5) + RD(0));
SET64(5, RD(6) + RD(0));
mul_s(c, 0, 0, RSW(4), RSW(2));
SET32(29, RW(29) + -16);
SET64(4, RD(4) ^ RD(2));
wr64(c, (RW(29) + 0), RD(31));
SET64(4, RSD(4) < (s64)0);
SET64(7, c->lo.d[0]);
SET64(3, c->hi.d[0]);
SET64(7, RD(7) << 32);
SET64(3, RD(3) << 32);
SET64(7, RD(7) >> 32);
{ int t = RD(6) != RD(0); SET64(3, RD(3) | RD(7)); if (t) goto L_0027B488; }
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0xffff);
if (RD(4) != 0) SET64(2, RD(3)); goto L_0027B498;
L_0027B488:;
SET64(31, 0x27b490); SET64(4, RD(3) + RD(0)); JP_F_0011F988(c);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
L_0027B498:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027B4A8(Ctx *c) { /* func_0027B4A8 */
ENTER(0x27b4a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(6) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0027B4D8; }
SET64(3, RD(4) ^ RD(5));
SET64(4, (s64)(s32)0x80000000);
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, RSD(3) < (s64)0);
SET64(2, RD(2) | 0xffff);
if (RD(3) != 0) SET64(2, RD(4)); goto L_0027B544;
L_0027B4D8:;
SET64(16, RD(6) + RD(0));
{ int t = RSD(4) >= 0; SET32(17, RW(0) + 1); if (t) goto L_0027B4EC; }
SET32(17, RW(0) + -1);
SET64(4, RD(0) - RD(4));
L_0027B4EC:;
{ int t = RSD(5) >= 0;  if (t) goto L_0027B4FC; }
SET32(17, RW(0) - RW(17));
SET64(5, RD(0) - RD(5));
L_0027B4FC:;
{ int t = RSD(16) >= 0;  if (t) goto L_0027B50C; }
SET64(16, RD(0) - RD(16));
SET32(17, RW(0) - RW(17));
L_0027B50C:;
SET64(31, 0x27b514);  JP_F_0011F910(c);
SET64(4, RD(16) >> 63);
SET64(4, RD(16) + RD(4));
SET64(5, RD(16) + RD(0));
SET64(4, RSD(4) >> 1);
SET64(31, 0x27b52c); SET64(4, RD(2) + RD(4)); JP_F_0011F988(c);
SET64(4, RSD(17) < (s64)0);
SET64(3, RD(0) - RD(2));
if (RD(4) != 0) SET64(2, RD(3));
SET64(4, RD(2) + RD(0));
SET64(2, RD(4) << 32);
SET64(2, RSD(2) >> 32);
L_0027B544:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027B558(Ctx *c) { /* func_0027B558 */
ENTER(0x27b558);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0027B590; }
SET64(3, RD(4) ^ RD(5));
SET64(4, RD(0) | 0x8000);
SET64(4, RD(4) << 48);
SET64(3, RSD(3) < (s64)0);
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 1);
if (RD(3) != 0) SET64(2, RD(4)); goto L_0027B5EC;
L_0027B590:;
{ int t = RSD(4) >= 0; SET32(17, RW(0) + 1); if (t) goto L_0027B5A0; }
SET32(17, RW(0) + -1);
SET64(4, RD(0) - RD(4));
L_0027B5A0:;
{ int t = RSD(5) >= 0;  if (t) goto L_0027B5B0; }
SET32(17, RW(0) - RW(17));
SET64(5, RD(0) - RD(5));
L_0027B5B0:;
{ int t = RSD(16) >= 0;  if (t) goto L_0027B5C0; }
SET64(16, RD(0) - RD(16));
SET32(17, RW(0) - RW(17));
L_0027B5C0:;
SET64(31, 0x27b5c8);  JP_F_0011F910(c);
SET64(4, RD(16) >> 63);
SET64(4, RD(16) + RD(4));
SET64(5, RD(16) + RD(0));
SET64(4, RSD(4) >> 1);
SET64(31, 0x27b5e0); SET64(4, RD(2) + RD(4)); JP_F_0011F988(c);
SET64(4, RSD(17) < (s64)0);
SET64(3, RD(0) - RD(2));
if (RD(4) != 0) SET64(2, RD(3));
L_0027B5EC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027B600(Ctx *c) { /* func_0027B600 */
ENTER(0x27b600);
SET64(13, (s32)rd32(c, (RW(4) + 20)));
SET32(3, RW(0) + 1);
SET64(14, (s32)rd32(c, (RW(4) + 0)));
SET32(11, RW(0) + 2);
SET64(2, RSD(0) < RSD(13));
SET64(15, RD(5) + RD(0));
SET64(24, RD(6) + RD(0));
if (RD(2) == 0) SET64(13, RD(3));
SET64(25, RD(7) + RD(0));
{ int t = RD(14) != RD(11); SET64(12, (s32)rd32(c, (RW(4) + 4))); if (t) goto L_0027B658; }
SET32(4, RW(12) + 16383);
SET64(3, RSD(12) < (s64)0);
if (RD(3) != 0) SET64(12, RD(4));
SET32(2, RSW(12) >> 14);
mul_s(c, 0, 2, RSW(2), RSW(13));
SET32(2, RW(2) << 11);
wr32(c, (RW(15) + 0), RW(2));
wr32(c, (RW(24) + 0), RW(0));
wr32(c, (RW(25) + 0), RW(0)); goto L_0027B690;
L_0027B658:;
SET32(2, RW(0) + 3);
{ int t = RD(14) != RD(2); SET64(3, RSD(12) < (s64)0); if (t) goto L_0027B6A0; }
SET64(2, RSD(12) < (s64)0);
SET32(4, RW(12) + 16383);
if (RD(2) != 0) SET64(12, RD(4));
SET32(3, RSW(12) >> 14);
mul_s(c, 0, 2, RSW(3), RSW(13));
SET32(3, RW(3) << 10);
SET32(3, RW(3) + 2048);
SET32(2, RW(2) << 11);
wr32(c, (RW(15) + 0), RW(2));
wr32(c, (RW(24) + 0), RW(0));
wr32(c, (RW(25) + 0), RW(3));
L_0027B690:;
wr32(c, (RW(8) + 0), RW(0));
wr32(c, (RW(9) + 0), RW(0));
wr32(c, (RW(10) + 0), RW(0)); return;
L_0027B6A0:;
SET32(4, RW(12) + 16383);
if (RD(3) != 0) SET64(12, RD(4));
SET32(5, RW(0) + 24012);
SET32(2, RSW(12) >> 14);
SET32(6, RW(0) + 24332);
mul_s(c, 0, 3, RSW(2), RSW(13));
SET32(2, RW(2) << 10);
SET64(7, RD(0) | 0x81c0);
SET32(2, RW(2) + 2048);
SET32(3, RW(3) << 11);
wr32(c, (RW(15) + 0), RW(3));
wr32(c, (RW(24) + 0), RW(0));
wr32(c, (RW(25) + 0), RW(2));
wr32(c, (RW(8) + 0), RW(5));
wr32(c, (RW(9) + 0), RW(6));
wr32(c, (RW(10) + 0), RW(7)); return;
}

void JP_F_0027B6E8(Ctx *c) { /* func_0027B6E8 */
ENTER(0x27b6e8);
SET64(10, (s32)rd32(c, (RW(4) + 8)));
SET64(11, (s32)rd32(c, (RW(4) + 12)));
SET32(3, RW(10) >> 31);
SET32(3, RW(10) + RW(3));
SET32(4, RW(11) >> 31);
SET32(3, RSW(3) >> 1);
SET32(4, RW(11) + RW(4));
SET32(2, RW(3) + 31);
SET32(3, RW(3) + 62);
SET64(9, RSD(2) < (s64)0);
SET32(4, RSW(4) >> 1);
if (RD(9) != 0) SET64(2, RD(3));
SET32(2, RSW(2) >> 5);
SET32(2, RW(2) << 5);
wr32(c, (RW(7) + 0), RW(2));
wr32(c, (RW(8) + 0), RW(4));
wr32(c, (RW(5) + 0), RW(10));
wr32(c, (RW(6) + 0), RW(11)); return;
}

void JP_F_0027B738(Ctx *c) { /* func_0027B738 */
ENTER(0x27b738);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -64);
SET64(3, (s32)rd32(c, (RW(2) + 19112)));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
{ int t = RD(3) == RD(0); SET32(6, RW(29) + 4); if (t) goto L_0027B780; }
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(19) + 0), RW(0)); goto L_0027B81C;
L_0027B780:;
SET32(7, RW(29) + 8);
SET32(8, RW(29) + 12);
SET64(31, 0x27b790); SET64(17, (s32)rd32(c, (RW(16) + 16))); JP_F_0027B6E8(c);
SET64(31, 0x27b798); SET64(4, (s32)rd32(c, (RW(16) + 36))); JP_F_0027B838(c);
SET32(9, RW(0) + 2);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET32(7, RW(5) + 15);
SET64(3, RSD(5) < (s64)0);
mul_s(c, 0, 8, RSW(5), RSW(4));
if (RD(3) != 0) SET64(5, RD(7));
SET32(6, RW(4) + 15);
SET64(3, RSD(4) < (s64)0);
if (RD(3) != 0) SET64(4, RD(6));
SET32(5, RSW(5) >> 4);
SET32(4, RSW(4) >> 4);
mul_s(c, 0, 7, RSW(5), RSW(4));
SET32(3, RW(8) << 3);
SET32(3, RW(3) + RW(8));
SET32(6, RW(3) >> 31);
SET32(3, RW(3) + RW(6));
SET64(5, RD(7) + RD(0));
SET32(4, RW(7) << 1);
SET32(4, RW(4) + RW(7));
SET32(3, RSW(3) >> 1);
SET32(5, RW(5) << 10);
SET64(1, (s64)(s32)0x80000);
SET64(1, RD(1) | 0x6910);
SET32(3, RW(1) + RW(3));
SET32(4, RW(4) << 7);
SET32(5, RW(5) + 64);
wr32(c, (RW(18) + 0), RW(3));
mul_s(c, 0, 3, RSW(17), RSW(5));
{ int t = RD(2) == RD(9); SET32(4, RW(4) + 64); if (t) goto L_0027B818; }
mul_s(c, 0, 3, RSW(17), RSW(4));
L_0027B818:;
wr32(c, (RW(19) + 0), RW(3));
L_0027B81C:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0027B838(Ctx *c) { /* func_0027B838 */
ENTER(0x27b838);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 1); if (t) goto L_0027B878; }
{ int t = RD(4) == RD(0); SET32(3, RW(0) + 2); if (t) goto L_0027B878; }
SET32(2, RW(0) + 2);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 3); if (t) goto L_0027B878; }
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 3); if (t) goto L_0027B878; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27b874); SET32(4, RW(4) + 22824); JP_F_00284060(c);
SET32(3, RW(0) + 3);
L_0027B878:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027B888(Ctx *c) { /* func_0027B888 */
ENTER(0x27b888);
SET32(2, RW(0) + 16384);
wr32(c, (RW(5) + 0), RW(2));
SET32(3, RW(0) + 1792);
wr32(c, (RW(6) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET32(2, RW(2) + RW(3)); return;
}

void JP_F_0027B8A8(Ctx *c) { /* func_0027B8A8 */
ENTER(0x27b8a8);
SET32(2, RW(0) + 256); return;
}

void JP_F_0027B8B0(Ctx *c) { /* func_0027B8B0 */
ENTER(0x27b8b0);
SET32(29, RW(29) + -64);
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET32(7, RW(29) + 8);
SET32(8, RW(29) + 12);
SET32(9, RW(29) + 16);
SET32(10, RW(29) + 20);
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x27b8dc); SET64(16, RD(4) + RD(0)); JP_F_0027B600(c);
SET32(5, RW(29) + 24);
SET32(6, RW(29) + 28);
SET64(31, 0x27b8ec); SET64(4, RD(16) + RD(0)); JP_F_0027B738(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 32);
SET64(31, 0x27b8fc); SET32(6, RW(29) + 36); JP_F_0027B888(c);
SET64(31, 0x27b904); SET64(16, RD(2) + RD(0)); JP_F_0027B8A8(c);
SET64(4, (s32)rd32(c, (RW(29) + 8)));
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(5, (s32)rd32(c, (RW(29) + 12)));
SET32(3, RW(3) + RW(4));
SET64(4, (s32)rd32(c, (RW(29) + 24)));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET32(3, RW(3) + RW(5));
SET64(8, (s32)rd32(c, (RW(29) + 16)));
SET32(3, RW(3) + 64);
SET64(5, (s32)rd32(c, (RW(29) + 28)));
SET32(3, RW(3) + RW(16));
SET64(7, (s32)rd32(c, (RW(29) + 20)));
SET32(6, RW(6) + RW(8));
SET32(4, RW(4) + 64);
SET32(3, RW(3) + RW(6));
SET32(5, RW(5) + RW(7));
SET64(16, rd64(c, (RW(29) + 48)));
SET32(4, RW(4) + RW(5));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) + RW(2));
SET32(2, RW(3) + 2048);
SET32(29, RW(29) + 64); return;
}

void JP_F_0027B968(Ctx *c) { /* func_0027B968 */
ENTER(0x27b968);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x27b988); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00281518(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27b994); SET64(17, RD(2) + RD(0)); JP_F_00281FA0(c);
SET32(3, RW(0) + 1);
SET64(4, (s64)(s32)0x20000);
SET32(4, RW(4) + RW(17));
SET64(2, RD(2) ^ RD(3));
SET64(16, rd64(c, (RW(29) + 0)));
if (RD(2) == 0) SET64(17, RD(4));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027B9C0(Ctx *c) { /* func_0027B9C0 */
ENTER(0x27b9c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0027B9F0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27b9e4); SET32(4, RW(4) + 22920); JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_0027BA08;
L_0027B9F0:;
SET64(31, 0x27b9f8);  JP_F_0027B8B0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x27ba04); SET64(16, RD(2) + RD(0)); JP_F_0027B968(c);
SET32(2, RW(16) + RW(2));
L_0027BA08:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027BA20(Ctx *c) { /* func_0027BA20 */
ENTER(0x27ba20);
SET64(8, RD(4) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(2) + 19112), RW(8));
wr32(c, (RW(3) + 19116), RW(5));
{ int t = RSD(8) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_0027BA68; }
SET64(2, (s64)(s32)0x530000);
SET32(9, RW(2) + 9160);
L_0027BA48:;
SET32(2, RW(7) << 2);
SET32(7, RW(7) + 1);
SET32(3, RW(2) + RW(6));
SET32(2, RW(2) + RW(9));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(7) < RSD(8));
{ int t = RD(5) != RD(0); wr32(c, (RW(2) + 0), RW(4)); if (t) { POLL(); goto L_0027BA48; } }
L_0027BA68:;
 return;
}

void JP_F_0027BA70(Ctx *c) { /* func_0027BA70 */
ENTER(0x27ba70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
SET64(6, (s32)rd32(c, (RW(4) + 464)));
{ int t = RD(6) == RD(0); SET64(7, (s32)rd32(c, (RW(4) + 64))); if (t) goto L_0027BB34; }
SET64(2, (s32)rd32(c, (RW(4) + 500)));
if (RD(6) != RD(2)) { SET64(2, (s32)rd32(c, (RW(4) + 468))); goto L_0027BAB8; }
SET64(2, (s32)rd32(c, (RW(4) + 508)));
SET32(3, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(4) + 504)));
wr32(c, (RW(29) + 4), RW(6));
wr32(c, (RW(29) + 0), RW(3));
wr32(c, (RW(29) + 8), RW(4));
wr32(c, (RW(29) + 12), RW(2));
wr32(c, (RW(29) + 16), RW(0)); goto L_0027BB08;
L_0027BAB8:;
if (RD(6) != RD(2)) { SET64(2, (s32)rd32(c, (RW(4) + 484))); goto L_0027BAE8; }
SET64(2, (s32)rd32(c, (RW(4) + 480)));
SET64(3, (s32)rd32(c, (RW(4) + 472)));
SET64(4, (s32)rd32(c, (RW(4) + 476)));
wr32(c, (RW(29) + 4), RW(6));
wr32(c, (RW(29) + 8), RW(3));
wr32(c, (RW(29) + 12), RW(4));
wr32(c, (RW(29) + 16), RW(2));
wr32(c, (RW(29) + 0), RW(0)); goto L_0027BB08;
L_0027BAE8:;
SET64(5, (s32)rd32(c, (RW(4) + 496)));
SET64(3, (s32)rd32(c, (RW(4) + 488)));
SET64(4, (s32)rd32(c, (RW(4) + 492)));
wr32(c, (RW(29) + 0), RW(2));
wr32(c, (RW(29) + 4), RW(6));
wr32(c, (RW(29) + 8), RW(3));
wr32(c, (RW(29) + 12), RW(4));
wr32(c, (RW(29) + 16), RW(5));
L_0027BB08:;
wr32(c, (RW(29) + 20), RW(0));
SET64(4, RD(7) + RD(0));
SET64(31, 0x27bb18); SET64(5, RD(29) + RD(0)); JP_F_002963B0(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -312); if (t) goto L_0027BB34; }
SET64(31, 0x27bb28);  JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27bb34); SET32(4, RW(4) + 22968); JP_F_00284060(c);
L_0027BB34:;
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027BB40(Ctx *c) { /* func_0027BB40 */
ENTER(0x27bb40);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(8, (s64)(s32)0x80000);
SET64(9, (s32)rd32(c, (RW(2) + 19112)));
SET64(8, RD(8) | 0x40d0);
SET64(3, (s32)rd32(c, (RW(5) + 12)));
SET64(7, (s32)rd32(c, (RW(5) + 8)));
wr32(c, (RW(29) + 4), RW(8));
mul_s(c, 0, 7, RSW(7), RSW(3));
SET32(2, RW(7) << 3);
SET32(2, RW(2) + RW(7));
SET32(3, RW(2) >> 31);
SET32(2, RW(2) + RW(3));
SET32(2, RSW(2) >> 1);
SET32(5, RW(2) + 10304);
{ int t = RD(9) == RD(0); wr32(c, (RW(29) + 0), RW(5)); if (t) goto L_0027BBF8; }
SET64(2, RSD(9) < (s64)2);
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_0027BBE8; }
SET64(2, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(2) + 19116)));
SET64(3, RSD(2) < RSD(5));
if (RD(3) != RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_0027BBE8; }
SET64(2, RSD(2) < RSD(8));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_0027BBE8; }
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + 9160);
SET64(3, (s32)rd32(c, (RW(2) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(16) + 4), RW(3));
wr32(c, (RW(16) + 0), RW(4)); goto L_0027BC14;
L_0027BBE8:;
SET32(18, RW(0) + -1);
wr32(c, (RW(16) + 4), RW(0)); goto L_0027BC14;
L_0027BBF8:;
SET64(31, 0x27bc00);  JP_F_0027D248(c);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(31, 0x27bc10); SET64(5, (s32)rd32(c, (RW(29) + 4))); JP_F_0027D248(c);
wr32(c, (RW(16) + 4), RW(2));
L_0027BC14:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) == RD(0)) { SET32(18, RW(0) + -1); goto L_0027BC30; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) != RD(0); SET64(2, RD(18) + RD(0)); if (t) goto L_0027BC34; }
SET32(18, RW(0) + -1);
L_0027BC30:;
SET64(2, RD(18) + RD(0));
L_0027BC34:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027BC50(Ctx *c) { /* func_0027BC50 */
ENTER(0x27bc50);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 56), RD(31));
SET64(17, (s32)rd32(c, (RW(5) + 8)));
SET64(16, (s32)rd32(c, (RW(5) + 12)));
SET64(4, (s32)rd32(c, (RW(5) + 36)));
SET64(31, 0x27bc94); SET64(19, (s32)rd32(c, (RW(5) + 16))); JP_F_0027B838(c);
SET32(6, RW(17) + 15);
SET64(4, RSD(17) < (s64)0);
SET64(3, RSD(16) < (s64)0);
SET32(5, RW(16) + 15);
if (RD(4) != 0) SET64(17, RD(6));
if (RD(3) != 0) SET64(16, RD(5));
SET32(4, RW(0) + 2);
SET32(17, RSW(17) >> 4);
{ int t = RD(2) != RD(4); SET32(3, RSW(16) >> 4); if (t) goto L_0027BCC8; }
mul_s(c, 0, 2, RSW(17), RSW(3));
SET32(2, RW(2) << 10); goto L_0027BCD8;
L_0027BCC8:;
mul_s(c, 0, 3, RSW(17), RSW(3));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 7);
L_0027BCD8:;
SET32(18, RW(2) + 64);
SET64(2, (s64)(s32)0x410000);
SET64(3, (s32)rd32(c, (RW(2) + 19112)));
{ int t = RD(3) == RD(0); SET32(2, RW(19) + 2); if (t) goto L_0027BD50; }
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET32(20, RW(0) + -1); goto L_0027BD88; }
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + 19116)));
SET64(2, RSD(2) < RSD(18));
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_0027BD38; }
SET32(20, RW(0) + -1); goto L_0027BD88;
L_0027BD18:;
SET32(16, RW(16) + 1);
SET64(4, (s64)(s32)0x530000);
SET32(4, RW(4) + RW(2));
SET64(4, (s32)rd32(c, (RW(4) + 9168)));
SET32(2, RW(2) + RW(21));
SET32(3, RW(0) + -1);
wr32(c, (RW(2) + 0), RW(4));
if (RD(4) == 0) SET64(20, RD(3));
L_0027BD38:;
SET64(2, RSD(16) < RSD(19));
if (RD(2) != RD(0)) { SET32(2, RW(16) << 2); { POLL(); goto L_0027BD18; } }
SET64(2, RD(20) + RD(0)); goto L_0027BD8C;
L_0027BD50:;
{ int t = RSD(19) <= 0; SET64(2, RD(20) + RD(0)); if (t) goto L_0027BD8C; }
SET64(16, RD(19) + RD(0));
SET32(19, RW(0) + -1);
SET64(17, RD(21) + RD(0));
L_0027BD68:;
SET64(4, RD(22) + RD(0));
SET64(31, 0x27bd74); SET64(5, RD(18) + RD(0)); JP_F_0027D248(c);
SET32(16, RW(16) + -1);
wr32(c, (RW(17) + 0), RW(2));
SET32(17, RW(17) + 4);
{ int t = RD(16) != RD(0); if (RD(2) == 0) SET64(20, RD(19)); if (t) { POLL(); goto L_0027BD68; } }
L_0027BD88:;
SET64(2, RD(20) + RD(0));
L_0027BD8C:;
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

void JP_F_0027BDB8(Ctx *c) { /* func_0027BDB8 */
ENTER(0x27bdb8);
SET32(29, RW(29) + -304);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 224), RD(16));
SET64(3, (s64)(s32)0x530000);
wr64(c, (RW(29) + 232), RD(17));
SET32(16, RW(3) + 9128);
wr64(c, (RW(29) + 240), RD(18));
SET64(6, (s64)(s32)0x530000);
wr64(c, (RW(29) + 248), RD(19));
SET32(19, RW(2) + 9124);
wr64(c, (RW(29) + 256), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 264), RD(21));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 280), RD(23));
SET64(5, (s64)(s32)0x530000);
wr64(c, (RW(29) + 288), RD(30));
SET32(17, RW(5) + 9132);
wr64(c, (RW(29) + 272), RD(22));
SET32(18, RW(6) + 9136);
wr64(c, (RW(29) + 296), RD(31));
SET64(8, RD(18) + RD(0));
SET64(9, (s64)(s32)0x530000);
SET32(9, RW(9) + 9152);
SET64(10, (s64)(s32)0x530000);
SET32(10, RW(10) + 9148);
SET64(2, (s32)rd32(c, (RW(21) + 16)));
SET64(7, RD(17) + RD(0));
SET64(22, (s32)rd32(c, (RW(21) + 0)));
SET64(5, RD(19) + RD(0));
wr32(c, (RW(29) + 192), RW(2));
SET64(4, RD(21) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(21) + 8)));
wr32(c, (RW(29) + 196), RW(3));
SET64(2, (s32)rd32(c, (RW(21) + 12)));
SET64(31, 0x27be50); wr32(c, (RW(29) + 200), RW(2)); JP_F_0027B600(c);
SET64(5, (s64)(s32)0x530000);
SET64(6, (s64)(s32)0x530000);
SET32(5, RW(5) + 9140);
SET32(6, RW(6) + 9144);
SET64(31, 0x27be68); SET64(4, RD(21) + RD(0)); JP_F_0027B738(c);
SET64(4, RD(21) + RD(0));
SET32(5, RW(29) + 160);
SET64(31, 0x27be78); SET32(6, RW(29) + 164); JP_F_0027B888(c);
SET64(31, 0x27be80);  JP_F_0027B8A8(c);
wr32(c, (RW(29) + 208), RW(2));
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET32(5, RW(5) + RW(2));
SET32(5, RW(5) + RW(3));
SET64(31, 0x27bea4); SET32(5, RW(5) + 64); JP_F_0027D248(c);
SET64(4, RD(20) + RD(0));
wr32(c, (RW(29) + 184), RW(2));
SET64(5, (s32)rd32(c, (RW(19) + 0)));
SET64(31, 0x27beb8); SET32(5, RW(5) + 64); JP_F_0027D248(c);
SET64(4, RD(20) + RD(0));
SET32(3, RW(29) + 80);
SET64(5, RD(21) + RD(0));
SET64(6, RD(3) + RD(0));
SET64(31, 0x27bed0); SET64(23, RD(2) + RD(0)); JP_F_0027BB40(c);
SET64(4, RD(20) + RD(0));
SET32(7, RW(29) + 96);
SET64(5, RD(21) + RD(0));
SET64(6, RD(7) + RD(0));
SET64(31, 0x27bee8); SET64(30, RD(2) + RD(0)); JP_F_0027BC50(c);
SET64(4, RD(22) + RD(0));
SET64(31, 0x27bef4); SET64(19, RD(2) + RD(0)); JP_F_0027C4D0(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(18, RD(0) + RD(0)); goto L_0027BF38; }
SET64(8, (s64)(s32)0x530000);
SET64(4, RD(20) + RD(0));
SET32(8, RW(8) + 9152);
SET64(31, 0x27bf14); SET64(5, (s32)rd32(c, (RW(8) + 0))); JP_F_0027D248(c);
SET64(4, RD(20) + RD(0));
SET64(9, (s64)(s32)0x530000);
SET64(18, RD(2) + RD(0));
SET32(9, RW(9) + 9148);
SET64(31, 0x27bf2c); SET64(5, (s32)rd32(c, (RW(9) + 0))); JP_F_0027D248(c);
SET64(17, RD(2) + RD(0)); goto L_0027BF3C;
L_0027BF38:;
SET64(17, RD(0) + RD(0));
L_0027BF3C:;
SET32(5, RW(0) + 2048);
SET64(31, 0x27bf48); SET64(4, RD(20) + RD(0)); JP_F_0027D248(c);
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 160)));
SET64(31, 0x27bf58); wr32(c, (RW(29) + 188), RW(2)); JP_F_0027D248(c);
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 164)));
SET64(31, 0x27bf68); wr32(c, (RW(29) + 204), RW(2)); JP_F_0027D248(c);
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 208)));
SET64(31, 0x27bf78); SET64(16, RD(2) + RD(0)); JP_F_0027D248(c);
SET64(10, (s32)rd32(c, (RW(29) + 184)));
{ int t = RD(10) == RD(0); wr32(c, (RW(29) + 212), RW(2)); if (t) goto L_0027BFC4; }
{ int t = RD(23) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0027BFC8; }
{ int t = RD(30) != RD(0); SET32(4, RW(4) + 23008); if (t) goto L_0027BFFC; }
if (RD(19) != RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0027BFC8; }
SET64(2, (s32)rd32(c, (RW(29) + 188)));
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 204))); if (t) goto L_0027BFC4; }
{ int t = RD(3) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0027BFC8; }
SET64(4, (s32)rd32(c, (RW(29) + 212)));
if (RD(4) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_0027BFC8; }
{ int t = RD(16) != RD(0);  if (t) goto L_0027BFD0; }
L_0027BFC4:;
SET64(4, (s64)(s32)0x4b0000);
L_0027BFC8:;
SET32(4, RW(4) + 23008); goto L_0027BFFC;
L_0027BFD0:;
SET64(31, 0x27bfd8); SET64(4, RD(22) + RD(0)); JP_F_0027C4D0(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET32(2, RW(0) + -64); goto L_0027C018; }
{ int t = RD(18) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0027BFF8; }
{ int t = RD(17) != RD(0); SET32(2, RW(0) + -64); if (t) goto L_0027C018; }
SET64(4, (s64)(s32)0x4b0000);
L_0027BFF8:;
SET32(4, RW(4) + 23040);
L_0027BFFC:;
SET64(31, 0x27c004);  JP_F_00284060(c);
SET64(31, 0x27c00c); SET64(4, RD(20) + RD(0)); JP_F_0027D3E8(c);
SET64(2, RD(0) + RD(0)); goto L_0027C49C;
L_0027C018:;
SET32(3, RW(23) + 63);
SET64(3, RD(3) & RD(2));
SET64(4, RD(21) + RD(0));
SET32(5, RW(29) + 168);
SET32(6, RW(29) + 172);
SET32(7, RW(29) + 176);
SET32(8, RW(29) + 180);
SET64(16, (s64)(s32)0x530000);
SET64(19, (s64)(s32)0x410000);
SET64(31, 0x27c044); wr32(c, (RW(16) + 9120), RW(3)); JP_F_0027B6E8(c);
SET64(5, (s32)rd32(c, (RW(29) + 176)));
SET64(23, (s64)(s32)0x410000);
SET64(7, (s32)rd32(c, (RW(29) + 168)));
SET32(2, RW(19) + 19040);
SET64(6, (s32)rd32(c, (RW(29) + 172)));
SET32(4, RW(23) + 19080);
SET64(3, (s32)rd32(c, (RW(29) + 180)));
SET32(8, RW(0) + 2);
wr32(c, (RW(4) + 24), RW(17));
wr32(c, (RW(2) + 0), RW(5));
wr32(c, (RW(2) + 32), RW(0));
wr32(c, (RW(2) + 4), RW(3));
wr32(c, (RW(4) + 8), RW(18));
wr32(c, (RW(2) + 20), RW(7));
wr32(c, (RW(2) + 24), RW(6));
wr32(c, (RW(2) + 8), RW(7));
wr32(c, (RW(2) + 12), RW(6));
wr32(c, (RW(2) + 16), RW(0));
SET64(5, (s32)rd32(c, (RW(29) + 192)));
{ int t = RD(22) == RD(8); wr32(c, (RW(2) + 28), RW(5)); if (t) goto L_0027C198; }
SET64(2, RSD(22) < (s64)3);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_0027C0B8; }
SET32(2, RW(0) + 1);
{ int t = RD(22) == RD(2); SET64(5, (s64)(s32)0x410000); if (t) goto L_0027C0C8; }
SET64(2, (s64)(s32)0x530000); goto L_0027C358;
L_0027C0B8:;
{ int t = RD(22) == RD(2); SET64(5, (s64)(s32)0x410000); if (t) goto L_0027C278; }
SET64(2, (s64)(s32)0x530000); goto L_0027C358;
L_0027C0C8:;
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + 18824);
SET64(2, RD(3) & 0x7);
{ int t = RD(2) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0027C140; }
SET32(2, RW(3) + 64);
L_0027C0E0:;
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
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_0027C0E0; } }
SET64(2, (s32)rd32(c, (RW(16) + 9120))); goto L_0027C17C;
L_0027C140:;
SET32(2, RW(3) + 64);
L_0027C144:;
SET64(10, rd64(c, (RW(3) + 0)));
SET64(5, rd64(c, (RW(3) + 8)));
SET64(6, rd64(c, (RW(3) + 16)));
SET64(7, rd64(c, (RW(3) + 24)));
wr64(c, (RW(4) + 0), RD(10));
wr64(c, (RW(4) + 8), RD(5));
wr64(c, (RW(4) + 16), RD(6));
wr64(c, (RW(4) + 24), RD(7));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_0027C144; } }
SET64(2, (s32)rd32(c, (RW(16) + 9120)));
L_0027C17C:;
SET64(5, (s64)(s32)0x410000);
SET64(8, (s32)rd32(c, (RW(3) + 0)));
SET64(7, (s64)(s32)0x530000);
wr32(c, (RW(4) + 0), RW(8));
wr32(c, (RW(20) + 472), RW(2));
SET64(3, (s32)rd32(c, (RW(7) + 9124))); goto L_0027C344;
L_0027C198:;
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + 18896);
SET64(2, RD(3) & 0x7);
{ int t = RD(2) == RD(0); SET64(5, RD(29) + RD(0)); if (t) goto L_0027C210; }
SET32(2, RW(3) + 64);
L_0027C1B0:;
ldl(c, 8, (RW(3) + 7));
ldr(c, 8, (RW(3) + 0));
ldl(c, 9, (RW(3) + 15));
ldr(c, 9, (RW(3) + 8));
ldl(c, 10, (RW(3) + 23));
ldr(c, 10, (RW(3) + 16));
ldl(c, 4, (RW(3) + 31));
ldr(c, 4, (RW(3) + 24));
sdl(c, 8, (RW(5) + 7));
sdr(c, 8, (RW(5) + 0));
sdl(c, 9, (RW(5) + 15));
sdr(c, 9, (RW(5) + 8));
sdl(c, 10, (RW(5) + 23));
sdr(c, 10, (RW(5) + 16));
sdl(c, 4, (RW(5) + 31));
sdr(c, 4, (RW(5) + 24));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(5, RW(5) + 32); if (t) { POLL(); goto L_0027C1B0; } }
SET64(2, (s32)rd32(c, (RW(16) + 9120))); goto L_0027C24C;
L_0027C210:;
SET32(2, RW(3) + 64);
L_0027C214:;
SET64(6, rd64(c, (RW(3) + 0)));
SET64(7, rd64(c, (RW(3) + 8)));
SET64(8, rd64(c, (RW(3) + 16)));
SET64(9, rd64(c, (RW(3) + 24)));
wr64(c, (RW(5) + 0), RD(6));
wr64(c, (RW(5) + 8), RD(7));
wr64(c, (RW(5) + 16), RD(8));
wr64(c, (RW(5) + 24), RD(9));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(5, RW(5) + 32); if (t) { POLL(); goto L_0027C214; } }
SET64(2, (s32)rd32(c, (RW(16) + 9120)));
L_0027C24C:;
SET64(9, (s64)(s32)0x530000);
SET64(10, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(0) + 2048);
wr32(c, (RW(5) + 0), RW(10));
SET64(5, (s64)(s32)0x410000);
wr32(c, (RW(20) + 472), RW(2));
SET64(3, (s32)rd32(c, (RW(9) + 9124)));
wr32(c, (RW(20) + 480), RW(4));
SET32(3, RW(3) + -2048); goto L_0027C350;
L_0027C278:;
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + 18968);
SET64(2, RD(3) & 0x7);
{ int t = RD(2) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0027C2F0; }
SET32(2, RW(3) + 64);
L_0027C290:;
ldl(c, 10, (RW(3) + 7));
ldr(c, 10, (RW(3) + 0));
ldl(c, 5, (RW(3) + 15));
ldr(c, 5, (RW(3) + 8));
ldl(c, 6, (RW(3) + 23));
ldr(c, 6, (RW(3) + 16));
ldl(c, 7, (RW(3) + 31));
ldr(c, 7, (RW(3) + 24));
sdl(c, 10, (RW(4) + 7));
sdr(c, 10, (RW(4) + 0));
sdl(c, 5, (RW(4) + 15));
sdr(c, 5, (RW(4) + 8));
sdl(c, 6, (RW(4) + 23));
sdr(c, 6, (RW(4) + 16));
sdl(c, 7, (RW(4) + 31));
sdr(c, 7, (RW(4) + 24));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_0027C290; } }
SET64(2, (s32)rd32(c, (RW(16) + 9120))); goto L_0027C32C;
L_0027C2F0:;
SET32(2, RW(3) + 64);
L_0027C2F4:;
SET64(8, rd64(c, (RW(3) + 0)));
SET64(9, rd64(c, (RW(3) + 8)));
SET64(10, rd64(c, (RW(3) + 16)));
SET64(5, rd64(c, (RW(3) + 24)));
wr64(c, (RW(4) + 0), RD(8));
wr64(c, (RW(4) + 8), RD(9));
wr64(c, (RW(4) + 16), RD(10));
wr64(c, (RW(4) + 24), RD(5));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_0027C2F4; } }
SET64(2, (s32)rd32(c, (RW(16) + 9120)));
L_0027C32C:;
SET64(5, (s64)(s32)0x410000);
SET64(6, (s32)rd32(c, (RW(3) + 0)));
SET64(10, (s64)(s32)0x530000);
wr32(c, (RW(4) + 0), RW(6));
wr32(c, (RW(20) + 472), RW(2));
SET64(3, (s32)rd32(c, (RW(10) + 9124)));
L_0027C344:;
SET64(2, (s32)rd32(c, (RW(5) + 19108)));
SET32(3, RW(3) - RW(2));
wr32(c, (RW(20) + 480), RW(2));
L_0027C350:;
wr32(c, (RW(20) + 476), RW(3));
SET64(2, (s64)(s32)0x530000);
L_0027C358:;
SET64(3, (s32)rd32(c, (RW(5) + 19108)));
SET32(16, RW(2) + 9128);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); wr32(c, (RW(29) + 40), RW(3)); if (t) goto L_0027C384; }
div_s(c, 0, RSW(4), RSW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x27c374); goto L_0027C378; }
L_0027C378:;
SET64(2, c->hi.d[0]);
SET32(2, RW(4) - RW(2));
wr32(c, (RW(16) + 0), RW(2));
L_0027C384:;
SET64(31, 0x27c38c); SET64(4, (s32)rd32(c, (RW(21) + 36))); JP_F_0027B838(c);
SET64(7, (s32)rd32(c, (RW(16) + 0)));
SET32(6, RW(29) + 80);
SET32(10, RW(29) + 96);
SET64(3, (s64)(s32)0x530000);
SET64(5, (s64)(s32)0x530000);
SET64(8, (s32)rd32(c, (RW(3) + 9132)));
SET32(4, RW(19) + 19040);
SET64(3, (s32)rd32(c, (RW(5) + 9136)));
SET64(5, RD(6) + RD(0));
SET64(6, RD(10) + RD(0));
SET64(10, (s32)rd32(c, (RW(29) + 184)));
SET64(9, (s32)rd32(c, (RW(29) + 160)));
wr32(c, (RW(29) + 4), RW(10));
wr32(c, (RW(29) + 8), RW(7));
wr32(c, (RW(29) + 12), RW(8));
wr32(c, (RW(29) + 16), RW(3));
SET64(7, (s32)rd32(c, (RW(29) + 196)));
SET64(3, (s32)rd32(c, (RW(29) + 192)));
SET64(8, (s32)rd32(c, (RW(29) + 200)));
SET64(10, (s32)rd32(c, (RW(29) + 204)));
wr32(c, (RW(29) + 56), RW(2));
wr32(c, (RW(29) + 44), RW(3));
wr32(c, (RW(29) + 48), RW(7));
wr32(c, (RW(29) + 52), RW(8));
wr32(c, (RW(29) + 60), RW(10));
SET64(31, 0x27c3f8); wr32(c, (RW(29) + 64), RW(9)); JP_F_0028CD20(c);
SET32(2, RW(0) + 1);
{ int t = RD(22) != RD(2);  if (t) goto L_0027C40C; }
SET64(31, 0x27c40c); SET32(4, RW(23) + 19080); JP_F_002852C0(c);
L_0027C40C:;
SET64(31, 0x27c414); SET32(4, RW(0) + 1); JP_F_00293410(c);
SET64(5, RD(0) + RD(0));
SET64(31, 0x27c420); SET64(4, RD(29) + RD(0)); JP_F_002954B8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(5, (s64)(s32)0x280000); if (t) goto L_0027C440; }
SET64(31, 0x27c434); SET32(4, RW(0) + -305); JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 23072); goto L_0027C468;
L_0027C440:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -4784);
SET64(31, 0x27c450); SET64(6, RD(20) + RD(0)); JP_F_0028A9A8(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 212))); goto L_0027C478; }
SET64(31, 0x27c460); SET32(4, RW(0) + -303); JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 23120);
L_0027C468:;
SET64(31, 0x27c470);  JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_0027C49C;
L_0027C478:;
SET64(4, RD(20) + RD(0));
SET32(6, RW(0) + 2048);
SET32(7, RW(0) + 64);
wr32(c, (RW(20) + 440), RW(2));
SET64(3, (s32)rd32(c, (RW(29) + 208)));
wr32(c, (RW(20) + 444), RW(3));
SET64(31, 0x27c498); SET64(5, (s32)rd32(c, (RW(29) + 188))); JP_F_0027C508(c);
SET64(2, RD(16) + RD(0));
L_0027C49C:;
SET64(16, rd64(c, (RW(29) + 224)));
SET64(17, rd64(c, (RW(29) + 232)));
SET64(18, rd64(c, (RW(29) + 240)));
SET64(19, rd64(c, (RW(29) + 248)));
SET64(20, rd64(c, (RW(29) + 256)));
SET64(21, rd64(c, (RW(29) + 264)));
SET64(22, rd64(c, (RW(29) + 272)));
SET64(23, rd64(c, (RW(29) + 280)));
SET64(30, rd64(c, (RW(29) + 288)));
SET64(31, rd64(c, (RW(29) + 296)));
SET32(29, RW(29) + 304); return;
}

static void JP_B_0027C4D0(Ctx *c, u32 entry) { /* func_0027C4D0 */
ENTER(entry);
switch (entry) { case 0x27c4f8: goto L_0027C4F8; case 0x27c500: goto L_0027C500; }
SET64(2, RD(4) < (u64)(s64)6);
{ int t = RD(2) == RD(0);  if (t) goto L_0027C500; }
SET32(2, RW(4) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 23168)));
{ u32 t = RW(3);  switch (t) { case 0x27c4f8: goto L_0027C4F8; case 0x27c500: goto L_0027C500; default: rt_jump(c, t); return; } }
L_0027C4F8:;
SET64(2, RD(0) + RD(0)); return;
L_0027C500:;
SET32(2, RW(0) + 1); return;
}
void JP_F_0027C4D0(Ctx *c) { JP_B_0027C4D0(c, 0x27c4d0); }
void JP_F_0027C4F8(Ctx *c) { JP_B_0027C4D0(c, 0x27c4f8); }
void JP_F_0027C500(Ctx *c) { JP_B_0027C4D0(c, 0x27c500); }

void JP_F_0027C508(Ctx *c) { /* func_0027C508 */
ENTER(0x27c508);
SET32(2, RW(4) + 356);
SET32(6, RW(6) - RW(7));
SET32(3, RW(5) + RW(7));
wr32(c, (RW(4) + 388), RW(7));
wr32(c, (RW(4) + 396), RW(0));
wr32(c, (RW(4) + 384), RW(5));
wr32(c, (RW(4) + 392), RW(0));
wr32(c, (RW(4) + 380), RW(2));
wr32(c, (RW(2) + 4), RW(6));
wr32(c, (RW(2) + 8), RW(7));
wr32(c, (RW(2) + 0), RW(3)); return;
}

void JP_F_0027C538(Ctx *c) { /* func_0027C538 */
ENTER(0x27c538);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(5, (s32)rd32(c, (RW(16) + 380)));
if (RD(5) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 28))); goto L_0027C588; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 23192);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00284060(c); return; }
L_0027C588:;
SET64(19, (s32)rd32(c, (RW(5) + 8)));
SET32(18, RW(3) + 4);
SET64(2, (s32)rd32(c, (RW(5) + 4)));
mul_s(c, 0, 3, RSW(18), RSW(19));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) == RD(0); SET64(17, (s32)rd32(c, (RW(5) + 0))); if (t) goto L_0027C5C8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 23248);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00284060(c); return; }
L_0027C5C8:;
SET64(31, 0x27c5d0);  JP_F_0027EA68(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027C608; }
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(7, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0028D210(c); return; }
L_0027C608:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027C620(Ctx *c) { /* func_0027C620 */
ENTER(0x27c620);
SET64(8, RD(4) + RD(0));
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(8) + 368);
{ int t = RD(5) != RD(0); SET32(2, RW(8) + 356); if (t) goto L_0027C650; }
wr32(c, (RW(3) + 8), RW(0));
wr32(c, (RW(8) + 380), RW(2));
wr32(c, (RW(3) + 0), RW(0));
wr32(c, (RW(3) + 4), RW(0)); goto L_0027C68C;
L_0027C650:;
SET64(2, (s32)rd32(c, (RW(8) + 28)));
SET32(2, RW(2) + 4);
mul_s(c, 0, 2, RSW(2), RSW(7));
SET64(2, RSD(6) < RSD(2));
if (RD(2) == RD(0)) { wr32(c, (RW(3) + 0), RW(5)); goto L_0027C680; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 23312);
SET32(29, RW(29) + 16); { JP_F_00284060(c); return; }
L_0027C680:;
wr32(c, (RW(3) + 4), RW(6));
wr32(c, (RW(3) + 8), RW(7));
wr32(c, (RW(8) + 380), RW(3));
L_0027C68C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0027C538(c); return; }
}

void JP_F_0027C698(Ctx *c) { /* func_0027C698 */
ENTER(0x27c698);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27c6a8);  JP_F_00295A58(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -306); if (t) goto L_0027C6D0; }
SET64(31, 0x27c6b8);  JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 23368);
SET32(29, RW(29) + 16); { JP_F_00284060(c); return; }
L_0027C6D0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027C6E0(Ctx *c) { /* func_0027C6E0 */
ENTER(0x27c6e0);
SET32(29, RW(29) + -48);
SET32(5, RW(0) + 8);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(0) + 1);
wr64(c, (RW(29) + 16), RD(18));
mul_s(c, 0, 16, RSW(16), RSW(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(6, RD(0) + RD(0));
SET64(18, (s32)rd32(c, (RW(4) + 64)));
SET64(31, 0x27c71c); SET64(4, RD(18) + RD(0)); JP_F_00297690(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x27c72c); SET32(6, RW(0) + 1); JP_F_00297690(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x27c73c); SET64(6, RD(0) + RD(0)); JP_F_00297690(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 23);
SET64(31, 0x27c74c); SET32(6, RW(0) + 4); JP_F_00297690(c);
SET64(4, RD(18) + RD(0));
SET32(2, RW(16) << 5);
SET64(1, (s64)(s32)0x3f000000);
c->f[1].u = RW(1);
SET32(2, RW(2) - RW(16));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 3);
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(1));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(2, (s32)c->f[1].u);
c->f[1].u = RW(2);
c->f[1].f = (f32)(s32)c->f[1].u;
c->fcc = F(0) < F(1);
{ int t = c->fcc; SET32(5, RW(0) + 45); if (t) goto L_0027C798; }
SET64(19, RD(0) + RD(0));
L_0027C798:;
SET32(19, RW(2) - RW(19));
SET64(31, 0x27c7a4); SET64(6, RD(19) + RD(0)); JP_F_00297690(c);
SET64(4, RD(18) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(31, 0x27c7b4); SET32(5, RW(0) + 44); JP_F_00297690(c);
SET64(4, RD(18) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(31, 0x27c7c4); SET32(5, RW(0) + 42); JP_F_00297690(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 15);
SET64(31, 0x27c7d4); SET32(6, RW(0) + 2); JP_F_00297690(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 51);
SET64(31, 0x27c7e4); SET64(6, RD(0) + RD(0)); JP_F_00297690(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 14);
SET64(31, 0x27c7f4); SET64(6, RD(0) + RD(0)); JP_F_00297690(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 28);
SET64(31, 0x27c804); SET64(6, RD(0) + RD(0)); JP_F_00297690(c);
SET64(4, RD(18) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 5);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(0) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0028CF40(c); return; }
}

void JP_F_0027C830(Ctx *c) { /* func_0027C830 */
ENTER(0x27c830);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(16, (s32)rd32(c, (RW(17) + 64)));
SET64(31, 0x27c850); SET64(4, RD(16) + RD(0)); JP_F_00295BD8(c);
SET64(5, (s64)(s32)0x280000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -4784);
{ int t = RD(2) == RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_0027C870; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 23400); goto L_0027C890;
L_0027C870:;
SET64(31, 0x27c878);  JP_F_0028A9A8(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0027C8A0; }
SET64(31, 0x27c888); SET32(4, RW(0) + -303); JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 23456);
L_0027C890:;
SET64(31, 0x27c898);  JP_F_00284060(c);
SET32(2, RW(0) + -1); goto L_0027C8AC;
L_0027C8A0:;
SET64(31, 0x27c8a8); SET64(4, RD(17) + RD(0)); JP_F_0027C538(c);
SET64(2, RD(0) + RD(0));
L_0027C8AC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027C8C0(Ctx *c) { /* func_0027C8C0 */
ENTER(0x27c8c0);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, (s32)rd32(c, (RW(2) + 480)));
SET64(4, (s32)rd32(c, (RW(2) + 472)));
SET64(5, (s32)rd32(c, (RW(2) + 476)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00269A78(c); return; }
}

void JP_F_0027C8E8(Ctx *c) { /* func_0027C8E8 */
ENTER(0x27c8e8);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 72), RD(21));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 80), RD(31)); if (t) goto L_0027C920; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 23512); goto L_0027C9BC;
L_0027C920:;
SET64(31, 0x27c928);  JP_F_0027CD28(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0027CC58; }
SET64(31, 0x27c93c);  JP_F_0027E770(c);
SET64(4, RD(0) + RD(0));
SET32(16, RW(2) + 108);
SET32(18, RW(2) + 4);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 8); if (t) goto L_0027C988; }
SET64(3, RD(16) + RD(0));
SET32(4, RW(4) + 1);
L_0027C960:;
SET64(2, RSD(4) < (s64)8);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 696); if (t) goto L_0027C984; }
SET64(16, RD(3) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(0)) { SET32(4, RW(4) + 1); { POLL(); goto L_0027C960; } }
L_0027C984:;
SET32(2, RW(0) + 8);
L_0027C988:;
if (RD(4) != RD(2)) { SET64(4, RD(17) + RD(0)); goto L_0027C9A8; }
SET64(31, 0x27c998); SET32(4, RW(0) + -11); JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 23560); goto L_0027C9BC;
L_0027C9A8:;
SET64(31, 0x27c9b0); SET32(21, RW(0) + -1); JP_F_0027CC80(c);
{ int t = RD(2) != RD(21); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0027C9D0; }
SET32(4, RW(4) + 23640);
L_0027C9BC:;
SET64(31, 0x27c9c4);  JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_0027CC58;
L_0027C9D0:;
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027C9E4; }
SET64(5, RD(0) + RD(0));
SET64(31, 0x27c9e4); SET32(6, RW(0) + 696); JP_F_001273D0(c);
L_0027C9E4:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x27c9f0); SET64(5, RD(17) + RD(0)); JP_F_0027CCD0(c);
ldl(c, 2, (RW(17) + 7));
ldr(c, 2, (RW(17) + 0));
ldl(c, 3, (RW(17) + 15));
ldr(c, 3, (RW(17) + 8));
ldl(c, 4, (RW(17) + 23));
ldr(c, 4, (RW(17) + 16));
ldl(c, 5, (RW(17) + 31));
ldr(c, 5, (RW(17) + 24));
sdl(c, 2, (RW(16) + 19));
sdr(c, 2, (RW(16) + 12));
sdl(c, 3, (RW(16) + 27));
sdr(c, 3, (RW(16) + 20));
sdl(c, 4, (RW(16) + 35));
sdr(c, 4, (RW(16) + 28));
sdl(c, 5, (RW(16) + 43));
sdr(c, 5, (RW(16) + 36));
ldl(c, 2, (RW(17) + 39));
ldr(c, 2, (RW(17) + 32));
ldl(c, 3, (RW(17) + 47));
ldr(c, 3, (RW(17) + 40));
sdl(c, 2, (RW(16) + 51));
sdr(c, 2, (RW(16) + 44));
sdl(c, 3, (RW(16) + 59));
sdr(c, 3, (RW(16) + 52));
SET64(4, RD(16) + RD(0));
SET64(31, 0x27ca5c); SET64(5, RD(17) + RD(0)); JP_F_0027BDB8(c);
SET64(19, RD(2) + RD(0));
{ int t = RD(19) != RD(0); wr32(c, (RW(16) + 64), RW(19)); if (t) goto L_0027CA78; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 23704); goto L_0027CC20;
L_0027CA78:;
SET64(31, 0x27ca80); SET64(4, RD(16) + RD(0)); JP_F_0027FD28(c);
SET64(31, 0x27ca88); SET64(4, RD(16) + RD(0)); JP_F_0027C538(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET32(7, RW(29) + 8);
SET32(8, RW(29) + 12);
SET32(9, RW(29) + 16);
SET64(31, 0x27caa8); SET32(10, RW(29) + 20); JP_F_0027B600(c);
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(18) + 4)));
SET64(5, RD(17) + RD(0));
SET64(31, 0x27cabc); SET64(7, (s32)rd32(c, (RW(18) + 8))); JP_F_0027C6E0(c);
SET64(31, 0x27cac4); SET64(4, RD(16) + RD(0)); JP_F_0027C8C0(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 468), RW(2)); if (t) goto L_0027CAD8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 23744); goto L_0027CC20;
L_0027CAD8:;
SET64(4, RD(0) + RD(0));
SET64(31, 0x27cae4); SET64(5, RD(0) + RD(0)); JP_F_00269060(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 500), RW(2)); if (t) goto L_0027CAF8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 23784); goto L_0027CC20;
L_0027CAF8:;
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(20, RW(0) + 1);
wr32(c, (RW(16) + 60), RW(20));
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(16) + 92), RW(3));
SET32(2, RW(2) + 18752);
wr32(c, (RW(16) + 108), RW(0));
SET32(18, RW(16) + 72);
wr32(c, (RW(16) + 0), RW(2));
SET64(4, RD(19) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 32)));
SET32(5, RW(0) + 3);
wr32(c, (RW(16) + 8), RW(0));
SET64(6, RD(18) + RD(0));
wr32(c, (RW(16) + 80), RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 32)));
SET64(31, 0x27cb40); wr32(c, (RW(16) + 84), RW(2)); JP_F_00297C08(c);
if (RD(2) != RD(0)) { wr32(c, (RW(18) + 0), RW(0)); goto L_0027CB48; }
L_0027CB48:;
wr32(c, (RW(16) + 112), RW(20));
SET64(5, RD(0) + RD(0));
wr8(c, (RW(16) + 116), (u8)RW(0));
SET64(4, RD(16) + RD(0));
wr8(c, (RW(16) + 117), (u8)RW(0));
wr8(c, (RW(16) + 118), (u8)RW(0));
wr8(c, (RW(16) + 119), (u8)RW(0));
SET64(31, 0x27cb6c); wr32(c, (RW(16) + 96), RW(0)); JP_F_00284C60(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27cb78); SET64(5, RD(0) + RD(0)); JP_F_00284C70(c);
wr32(c, (RW(16) + 88), RW(20));
wr32(c, (RW(16) + 136), RW(0));
SET64(31, 0x27cb88); SET64(4, (s32)rd32(c, (RW(16) + 468))); JP_F_00284F68(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 68), RW(2)); if (t) goto L_0027CC28; }
SET64(31, 0x27cb98); SET64(4, RD(16) + RD(0)); JP_F_0027F7F8(c);
SET64(31, 0x27cba0); SET64(4, (s32)rd32(c, (RW(16) + 468))); JP_F_00264990(c);
wr32(c, (RW(16) + 120), RW(0));
wr32(c, (RW(16) + 76), RW(2));
SET64(4, RD(2) + RD(0));
SET64(31, 0x27cbb4); SET64(5, (s32)rd32(c, (RW(16) + 68))); JP_F_00264AE8(c);
SET64(31, 0x27cbbc); SET64(4, RD(16) + RD(0)); JP_F_0027CD90(c);
{ int t = RD(2) == RD(21);  if (t) goto L_0027CC28; }
SET64(7, (s32)rd32(c, (RW(17) + 12)));
SET64(4, (s32)rd32(c, (RW(16) + 176)));
SET64(5, (s32)rd32(c, (RW(16) + 180)));
SET64(31, 0x27cbd8); SET64(6, (s32)rd32(c, (RW(17) + 8))); JP_F_00281520(c);
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 172), RW(2)); goto L_0027CBF0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 23824); goto L_0027CC20;
L_0027CBF0:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x27cbfc); SET64(5, (s32)rd32(c, (RW(16) + 44))); JP_F_00281B98(c);
SET64(31, 0x27cc04); SET64(4, RD(16) + RD(0)); JP_F_00281FC8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27cc10); wr32(c, (RW(16) + 400), RW(2)); JP_F_00282058(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0027CC38; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 23856);
L_0027CC20:;
SET64(31, 0x27cc28);  JP_F_00284060(c);
L_0027CC28:;
SET64(31, 0x27cc30); SET64(4, RD(16) + RD(0)); JP_F_0027CE58(c);
SET64(2, RD(0) + RD(0)); goto L_0027CC58;
L_0027CC38:;
SET64(31, 0x27cc40); SET64(4, RD(16) + RD(0)); JP_F_002820B8(c);
SET64(31, 0x27cc48); SET64(4, RD(16) + RD(0)); JP_F_0027E308(c);
SET64(31, 0x27cc50); SET64(4, RD(16) + RD(0)); JP_F_0027E388(c);
wr32(c, (RW(16) + 4), RW(20));
SET64(2, RD(16) + RD(0));
L_0027CC58:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void JP_F_0027CC80(Ctx *c) { /* func_0027CC80 */
ENTER(0x27cc80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27cc94); SET64(16, RD(4) + RD(0)); JP_F_0027E770(c);
SET64(5, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET32(6, RW(0) + -1);
{ int t = RD(2) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0027CCBC; }
SET64(3, (s32)rd32(c, (RW(5) + 40)));
SET64(4, RD(6) + RD(0));
SET64(2, (s32)rd32(c, (RW(5) + 44)));
if (RD(3) != 0) SET64(4, RD(0));
if (RD(2) == 0) SET64(4, RD(6));
L_0027CCBC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(4) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027CCD0(Ctx *c) { /* func_0027CCD0 */
ENTER(0x27ccd0);
SET64(3, (s32)rd32(c, (RW(5) + 24)));
SET32(2, RW(4) + 512);
SET64(6, (s32)rd32(c, (RW(5) + 28)));
SET32(7, RW(4) + 656);
wr32(c, (RW(2) + 0), RW(3));
SET32(8, RW(0) + 31);
wr32(c, (RW(2) + 4), RW(6));
SET64(3, (s32)rd32(c, (RW(5) + 24)));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 8), RW(3));
wr32(c, (RW(4) + 528), RW(0));
L_0027CD00:;
SET32(8, RW(8) + -1);
wr32(c, (RW(7) + 0), RW(0));
{ int t = RSD(8) >= 0; SET32(7, RW(7) + -4); if (t) { POLL(); goto L_0027CD00; } }
 return;
}

void JP_F_0027CD28(Ctx *c) { /* func_0027CD28 */
ENTER(0x27cd28);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(3); SET32(4, RW(0) + 1); if (t) goto L_0027CD58; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27cd54); SET32(4, RW(4) + 23896); JP_F_00284060(c);
SET64(4, RD(0) + RD(0));
L_0027CD58:;
SET64(2, (s32)rd32(c, (RW(16) + 36)));
SET64(2, RD(2) < (u64)(s64)3);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027CD7C; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27cd74); SET32(4, RW(4) + 23944); JP_F_00284060(c);
SET64(4, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_0027CD7C:;
SET64(2, RD(4) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027CD90(Ctx *c) { /* func_0027CD90 */
ENTER(0x27cd90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 12);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x27cdb8); SET64(5, (s32)rd32(c, (RW(17) + 12))); JP_F_00281518(c);
SET64(4, RD(16) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(31, 0x27cdc8); SET64(5, RD(18) + RD(0)); JP_F_0027D248(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 23984); if (t) goto L_0027CE08; }
wr32(c, (RW(16) + 176), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x27cde4); wr32(c, (RW(16) + 180), RW(18)); JP_F_00281FA0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_0027CE30; }
SET64(31, 0x27cdf8); SET64(5, (s64)(s32)0x20000); JP_F_0027D248(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 24024); if (t) goto L_0027CE20; }
L_0027CE08:;
SET64(31, 0x27ce10);  JP_F_00284060(c);
SET64(31, 0x27ce18); SET64(4, RD(16) + RD(0)); JP_F_0027D3E8(c);
SET32(2, RW(0) + -1); goto L_0027CE3C;
L_0027CE20:;
SET64(2, (s64)(s32)0x20000);
wr32(c, (RW(16) + 404), RW(3));
wr32(c, (RW(16) + 408), RW(2)); goto L_0027CE38;
L_0027CE30:;
wr32(c, (RW(16) + 408), RW(0));
wr32(c, (RW(16) + 404), RW(0));
L_0027CE38:;
SET64(2, RD(0) + RD(0));
L_0027CE3C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027CE58(Ctx *c) { /* func_0027CE58 */
ENTER(0x27ce58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0027CF50; }
SET64(31, 0x27ce74);  JP_F_0027F548(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(31, 0x27ce80); SET64(4, RD(16) + RD(0)); JP_F_00282028(c);
SET64(4, (s32)rd32(c, (RW(16) + 172)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 76))); goto L_0027CE98; }
SET64(31, 0x27ce94);  JP_F_00281538(c);
SET64(4, (s32)rd32(c, (RW(16) + 76)));
L_0027CE98:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 68))); goto L_0027CEAC; }
SET64(31, 0x27cea8);  JP_F_00264A98(c);
SET64(4, (s32)rd32(c, (RW(16) + 68)));
L_0027CEAC:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 468))); goto L_0027CEC0; }
SET64(31, 0x27cebc);  JP_F_00284F80(c);
SET64(4, (s32)rd32(c, (RW(16) + 468)));
L_0027CEC0:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 500))); goto L_0027CEDC; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x27ced8);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 500)));
L_0027CEDC:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 64))); goto L_0027CEF8; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x27cef4);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 64)));
L_0027CEF8:;
{ int t = RD(4) == RD(0);  if (t) goto L_0027CF08; }
SET64(31, 0x27cf08);  JP_F_0027C698(c);
L_0027CF08:;
SET64(31, 0x27cf10); SET32(4, RW(16) + 660); JP_F_00283BF8(c);
SET64(31, 0x27cf18); SET64(4, RD(16) + RD(0)); JP_F_0027D3E8(c);
SET64(31, 0x27cf20); SET64(4, RD(16) + RD(0)); JP_F_0027D468(c);
{ int t = RD(2) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0027CF30; }
SET64(31, 0x27cf30); SET32(4, RW(4) + 24064); JP_F_00284060(c);
L_0027CF30:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x27cf40); SET32(6, RW(0) + 696); JP_F_001273D0(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 18752);
wr32(c, (RW(16) + 0), RW(2));
L_0027CF50:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027CF60(Ctx *c) { /* func_0027CF60 */
ENTER(0x27cf60);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 19108), RW(4)); return;
}

void JP_F_0027CF70(Ctx *c) { /* func_0027CF70 */
ENTER(0x27cf70);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 120), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 112), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 128), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 136), RD(19));
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 144), RD(31)); if (t) goto L_0027CFA0; }
{ int t = RD(18) != RD(0);  if (t) goto L_0027CFB8; }
L_0027CFA0:;
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27cfac); SET32(4, RW(4) + 24088); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 112))); goto L_0027D11C;
L_0027CFB8:;
if (RSD(16) > 0) { SET64(4, RD(29) + RD(0)); goto L_0027CFD8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27cfcc); SET32(4, RW(4) + 24128); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 112))); goto L_0027D11C;
L_0027CFD8:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x27cfe4); SET32(6, RW(0) + 44); JP_F_001273D0(c);
SET64(4, RD(17) + RD(0));
SET32(19, RW(29) + 48);
SET64(5, RD(16) + RD(0));
SET64(31, 0x27cff8); SET64(6, RD(19) + RD(0)); JP_F_00288EA0(c);
SET64(2, (s8)rd8(c, (RW(29) + 48)));
{ int t = RD(2) == RD(0); SET64(2, (s8)rd8(c, (RW(29) + 49))); if (t) goto L_0027D00C; }
{ int t = RD(2) != RD(0);  if (t) goto L_0027D070; }
L_0027D00C:;
ldl(c, 2, (RW(29) + 7));
ldr(c, 2, (RW(29) + 0));
ldl(c, 3, (RW(29) + 15));
ldr(c, 3, (RW(29) + 8));
ldl(c, 4, (RW(29) + 23));
ldr(c, 4, (RW(29) + 16));
ldl(c, 5, (RW(29) + 31));
ldr(c, 5, (RW(29) + 24));
sdl(c, 2, (RW(18) + 7));
sdr(c, 2, (RW(18) + 0));
sdl(c, 3, (RW(18) + 15));
sdr(c, 3, (RW(18) + 8));
sdl(c, 4, (RW(18) + 23));
sdr(c, 4, (RW(18) + 16));
sdl(c, 5, (RW(18) + 31));
sdr(c, 5, (RW(18) + 24));
ldl(c, 2, (RW(29) + 39));
ldr(c, 2, (RW(29) + 32));
SET64(3, (s32)rd32(c, (RW(29) + 40)));
sdl(c, 2, (RW(18) + 39));
sdr(c, 2, (RW(18) + 32));
wr32(c, (RW(18) + 40), RW(3));
wr32(c, (RW(18) + 0), RW(0)); goto L_0027D118;
L_0027D070:;
SET64(31, 0x27d078); SET64(4, RD(19) + RD(0)); JP_F_0027D138(c);
SET64(4, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 72)));
SET64(5, RD(16) + RD(0));
SET64(10, (s32)rd32(c, (RW(29) + 68)));
SET64(6, RD(29) + RD(0));
SET64(7, (s32)rd32(c, (RW(29) + 80)));
SET64(8, (s32)rd32(c, (RW(29) + 92)));
SET64(9, (s8)rd8(c, (RW(29) + 88)));
wr32(c, (RW(29) + 12), RW(3));
wr32(c, (RW(29) + 4), RW(2));
wr32(c, (RW(29) + 8), RW(10));
wr32(c, (RW(29) + 16), RW(7));
wr32(c, (RW(29) + 36), RW(8));
SET64(31, 0x27d0b4); wr32(c, (RW(29) + 40), RW(9)); JP_F_0027E0D0(c);
SET64(31, 0x27d0bc); SET64(4, RD(29) + RD(0)); JP_F_0027D188(c);
wr32(c, (RW(29) + 0), RW(2));
ldl(c, 2, (RW(29) + 7));
ldr(c, 2, (RW(29) + 0));
ldl(c, 3, (RW(29) + 15));
ldr(c, 3, (RW(29) + 8));
ldl(c, 4, (RW(29) + 23));
ldr(c, 4, (RW(29) + 16));
ldl(c, 5, (RW(29) + 31));
ldr(c, 5, (RW(29) + 24));
sdl(c, 2, (RW(18) + 7));
sdr(c, 2, (RW(18) + 0));
sdl(c, 3, (RW(18) + 15));
sdr(c, 3, (RW(18) + 8));
sdl(c, 4, (RW(18) + 23));
sdr(c, 4, (RW(18) + 16));
sdl(c, 5, (RW(18) + 31));
sdr(c, 5, (RW(18) + 24));
ldl(c, 2, (RW(29) + 39));
ldr(c, 2, (RW(29) + 32));
SET64(3, (s32)rd32(c, (RW(29) + 40)));
sdl(c, 2, (RW(18) + 39));
sdr(c, 2, (RW(18) + 32));
wr32(c, (RW(18) + 40), RW(3));
L_0027D118:;
SET64(16, rd64(c, (RW(29) + 112)));
L_0027D11C:;
SET64(17, rd64(c, (RW(29) + 120)));
SET64(18, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 136)));
SET64(31, rd64(c, (RW(29) + 144)));
SET32(29, RW(29) + 160); return;
}

void JP_F_0027D138(Ctx *c) { /* func_0027D138 */
ENTER(0x27d138);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0027D168; }
SET64(2, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(2) == RD(0); SET64(2, RD(5) + RD(0)); if (t) goto L_0027D17C; }
SET64(2, (s32)rd32(c, (RW(4) + 12)));
if (RD(2) == RD(0)) { SET32(5, RW(0) + 2); goto L_0027D178; }
SET64(2, RD(5) + RD(0)); return;
L_0027D168:;
SET64(3, (s32)rd32(c, (RW(4) + 12)));
SET32(2, RW(0) + 1);
SET32(5, RW(0) + 3);
if (RD(3) != 0) SET64(5, RD(2));
L_0027D178:;
SET64(2, RD(5) + RD(0));
L_0027D17C:;
 return;
}

void JP_F_0027D188(Ctx *c) { /* func_0027D188 */
ENTER(0x27d188);
SET64(5, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(5) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0027D1F8; }
SET32(3, RW(0) + 2);
{ int t = RD(5) == RD(3);  if (t) goto L_0027D1F8; }
SET32(2, RW(0) + 1);
{ int t = RD(5) != RD(2);  if (t) goto L_0027D1F8; }
SET64(4, (s32)rd32(c, (RW(4) + 36)));
SET32(2, RW(0) + 12000);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_0027D1F8; }
SET64(2, RSD(4) < (s64)12001);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 24000); if (t) goto L_0027D1D8; }
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_0027D1F8; }
SET32(2, RW(0) + 6000); goto L_0027D1E4;
L_0027D1D8:;
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_0027D1F8; }
SET64(2, RD(0) | 0xbb80);
L_0027D1E4:;
if (RD(4) == RD(2)) { SET32(2, RW(0) + 1); goto L_0027D1F8; }
SET64(2, RD(0) + RD(0)); return;
L_0027D1F8:;
 return;
}

void JP_F_0027D200(Ctx *c) { /* func_0027D200 */
ENTER(0x27d200);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27d224); SET64(18, RD(5) + RD(0)); JP_F_0027E770(c);
wr32(c, (RW(2) + 48), RW(16));
wr32(c, (RW(2) + 40), RW(17));
wr32(c, (RW(2) + 44), RW(18));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027D248(Ctx *c) { /* func_0027D248 */
ENTER(0x27d248);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(17) + 528)));
SET64(2, RSD(2) < (s64)32);
{ int t = RD(2) != RD(0); SET64(3, RD(5) + RD(0)); if (t) goto L_0027D280; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27d278); SET32(4, RW(4) + 24176); JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_0027D2D4;
L_0027D280:;
{ int t = RSD(3) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0027D2D4; }
SET64(2, (s32)rd32(c, (RW(17) + 512)));
{ int t = RD(2) == RD(0);  if (t) goto L_0027D2A8; }
SET64(31, 0x27d29c);  JP_F_0027D2E8(c);
SET64(16, RD(2) + RD(0)); goto L_0027D2B4;
L_0027D2A8:;
SET64(31, 0x27d2b0); SET64(4, RD(3) + RD(0)); JP_F_0027D320(c);
SET64(16, RD(2) + RD(0));
L_0027D2B4:;
{ int t = RD(16) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0027D2D0; }
SET64(2, (s32)rd32(c, (RW(17) + 528)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(17));
SET64(31, 0x27d2d0); wr32(c, (RW(2) + 532), RW(16)); JP_F_0027D448(c);
L_0027D2D0:;
SET64(2, RD(16) + RD(0));
L_0027D2D4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027D2E8(Ctx *c) { /* func_0027D2E8 */
ENTER(0x27d2e8);
SET32(4, RW(4) + 512);
SET64(3, (s32)rd32(c, (RW(4) + 12)));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) + RW(5));
SET64(2, RD(2) < RD(3));
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_0027D314; }
SET64(6, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(4) + 12), RW(3));
SET32(2, RW(6) + RW(5));
wr32(c, (RW(4) + 8), RW(2));
L_0027D314:;
SET64(2, RD(6) + RD(0)); return;
}

void JP_F_0027D320(Ctx *c) { /* func_0027D320 */
ENTER(0x27d320);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27d334); SET64(16, RD(4) + RD(0)); JP_F_0027E770(c);
SET64(4, (s32)rd32(c, (RW(2) + 48)));
SET64(2, (s32)rd32(c, (RW(2) + 40)));
{ u32 t = RW(2); SET64(31, 0x27d344); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027D358(Ctx *c) { /* func_0027D358 */
ENTER(0x27d358);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 512)));
{ int t = RD(2) == RD(0); SET64(3, RD(5) + RD(0)); if (t) goto L_0027D388; }
SET64(31, 0x27d37c);  JP_F_0027D3A8(c);
SET64(4, RD(16) + RD(0)); goto L_0027D394;
L_0027D388:;
SET64(31, 0x27d390); SET64(4, RD(3) + RD(0)); JP_F_0027D3B0(c);
SET64(4, RD(16) + RD(0));
L_0027D394:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0027D458(c); return; }
}

void JP_F_0027D3A8(Ctx *c) { /* func_0027D3A8 */
ENTER(0x27d3a8);
 return;
}

void JP_F_0027D3B0(Ctx *c) { /* func_0027D3B0 */
ENTER(0x27d3b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27d3c4); SET64(16, RD(4) + RD(0)); JP_F_0027E770(c);
SET64(4, (s32)rd32(c, (RW(2) + 48)));
SET64(3, (s32)rd32(c, (RW(2) + 44)));
{ u32 t = RW(3); SET64(31, 0x27d3d4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027D3E8(Ctx *c) { /* func_0027D3E8 */
ENTER(0x27d3e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(17) + 656);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 31);
L_0027D408:;
SET64(5, (s32)rd32(c, (RW(16) + 0)));
if (RD(5) == RD(0)) { SET32(18, RW(18) + -1); goto L_0027D424; }
SET64(31, 0x27d41c); SET64(4, RD(17) + RD(0)); JP_F_0027D358(c);
wr32(c, (RW(16) + 0), RW(0));
SET32(18, RW(18) + -1);
L_0027D424:;
{ int t = RSD(18) >= 0; SET32(16, RW(16) + -4); if (t) { POLL(); goto L_0027D408; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027D448(Ctx *c) { /* func_0027D448 */
ENTER(0x27d448);
SET64(2, (s32)rd32(c, (RW(4) + 528)));
SET32(2, RW(2) + 1);
wr32(c, (RW(4) + 528), RW(2)); return;
}

void JP_F_0027D458(Ctx *c) { /* func_0027D458 */
ENTER(0x27d458);
SET64(2, (s32)rd32(c, (RW(4) + 528)));
SET32(2, RW(2) + -1);
wr32(c, (RW(4) + 528), RW(2)); return;
}

void JP_F_0027D468(Ctx *c) { /* func_0027D468 */
ENTER(0x27d468);
SET64(2, (s32)rd32(c, (RW(4) + 528))); return;
}

void JP_F_0027D470(Ctx *c) { /* func_0027D470 */
ENTER(0x27d470);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27d48c); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 24224); if (t) goto L_0027D4B0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_0027D4B0:;
wr32(c, (RW(16) + 88), RW(17));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027D4C8(Ctx *c) { /* func_0027D4C8 */
ENTER(0x27d4c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27d4dc); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027D508; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27d4f0); SET32(4, RW(4) + 24272); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_0027D508:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0027D518(c); return; }
}

void JP_F_0027D518(Ctx *c) { /* func_0027D518 */
ENTER(0x27d518);
SET64(2, (s32)rd32(c, (RW(4) + 88))); return;
}

void JP_F_0027D520(Ctx *c) { /* func_0027D520 */
ENTER(0x27d520);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 56), RD(21));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x27d54c); SET64(19, RD(5) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0);  if (t) goto L_0027D568; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27d560); SET32(4, RW(4) + 24320); JP_F_00284060(c);
wr32(c, (RW(19) + 0), RW(0)); goto L_0027D674;
L_0027D568:;
SET64(31, 0x27d570); SET64(4, RD(16) + RD(0)); JP_F_002800E8(c);
SET64(17, RD(2) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(31, 0x27d580); SET64(4, RD(17) + RD(0)); JP_F_00296288(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
if (RD(3) == RD(0)) { wr32(c, (RW(19) + 0), RW(0)); goto L_0027D674; }
SET64(2, (s32)rd32(c, (RW(16) + 88)));
{ int t = RD(2) != RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_0027D5EC; }
SET64(20, (s32)rd32(c, (RW(16) + 28)));
SET32(21, RW(0) + 1);
SET64(2, RSD(18) < RSD(20));
L_0027D5A8:;
{ int t = RD(2) == RD(0); SET32(18, RW(18) + 1); if (t) goto L_0027D5E8; }
SET64(31, 0x27d5b8); SET64(4, RD(16) + RD(0)); JP_F_0027DF20(c);
{ int t = RD(2) != RD(21); SET64(4, RD(17) + RD(0)); if (t) goto L_0027D5E8; }
SET64(31, 0x27d5c8); SET64(5, (s32)rd32(c, (RW(29) + 0))); JP_F_00296340(c);
SET64(3, (s32)rd32(c, (RW(16) + 136)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(3, RW(3) + 1);
SET64(31, 0x27d5e0); wr32(c, (RW(16) + 136), RW(3)); JP_F_00296288(c);
SET64(2, RSD(18) < RSD(20)); { POLL(); goto L_0027D5A8; }
L_0027D5E8:;
SET64(3, (s32)rd32(c, (RW(29) + 0)));
L_0027D5EC:;
{ int t = RD(3) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027D670; }
SET64(2, (s32)rd32(c, (RW(16) + 128)));
wr32(c, (RW(16) + 124), RW(3));
SET32(2, RW(2) + 1);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x27d60c); wr32(c, (RW(16) + 128), RW(2)); JP_F_0027DB30(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x27d61c); SET64(6, RD(19) + RD(0)); JP_F_0027D760(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27d628); SET64(5, (s32)rd32(c, (RW(29) + 0))); JP_F_0027DB78(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27d634); SET64(5, RD(19) + RD(0)); JP_F_0027D698(c);
SET64(31, 0x27d63c); SET64(4, RD(16) + RD(0)); JP_F_0027D6E8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27d648); SET64(5, (s32)rd32(c, (RW(29) + 0))); JP_F_0027DA88(c);
SET64(3, (s32)rd32(c, (RW(19) + 44)));
wr32(c, (RW(19) + 72), RW(2));
SET64(4, RD(16) + RD(0));
SET64(31, 0x27d65c); wr32(c, (RW(16) + 188), RW(3)); JP_F_0027E678(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27d668); SET64(5, RD(2) + RD(0)); JP_F_00281C28(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0027D678;
L_0027D670:;
wr32(c, (RW(19) + 0), RW(0));
L_0027D674:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0027D678:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0027D698(Ctx *c) { /* func_0027D698 */
ENTER(0x27d698);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(3, (s32)rd32(c, (RW(17) + 44)));
SET64(2, (s32)rd32(c, (RW(16) + 420)));
SET64(2, RSD(2) < RSD(3));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 420), RW(3)); goto L_0027D6D4; }
SET64(31, 0x27d6cc);  JP_F_00282160(c);
SET64(3, (s32)rd32(c, (RW(17) + 44)));
wr32(c, (RW(16) + 420), RW(3));
L_0027D6D4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027D6E8(Ctx *c) { /* func_0027D6E8 */
ENTER(0x27d6e8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 1);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x27d70c); SET64(18, RD(4) + RD(0)); JP_F_0027E578(c);
SET64(2, RD(2) ^ RD(16));
SET64(4, RD(18) + RD(0));
SET64(31, 0x27d71c); SET64(19, RD(2) < (u64)(s64)1); JP_F_0027DC90(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(4, RD(18) + RD(0)); if (t) goto L_0027D738; }
SET64(31, 0x27d730);  JP_F_00282828(c);
SET64(2, RD(2) ^ RD(17));
SET64(19, RD(2) < (u64)(s64)1);
L_0027D738:;
SET64(4, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00281C70(c); return; }
}

void JP_F_0027D760(Ctx *c) { /* func_0027D760 */
ENTER(0x27d760);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 64), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 72), RD(19));
wr64(c, (RW(29) + 80), RD(20));
wr64(c, (RW(29) + 88), RD(21));
wr64(c, (RW(29) + 96), RD(22));
SET64(22, RD(4) + RD(0));
wr64(c, (RW(29) + 112), RD(30));
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 104), RD(23));
wr64(c, (RW(29) + 120), RD(31));
SET64(4, (s32)rd32(c, (RW(18) + 28)));
SET64(16, (s32)rd32(c, (RW(22) + 64)));
SET64(31, 0x27d7a8); SET64(23, (s32)rd32(c, (RW(18) + 32))); JP_F_0027D9E0(c);
wr32(c, (RW(29) + 4), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET64(4, (s32)rd32(c, (RW(18) + 16)));
wr32(c, (RW(29) + 8), RW(2));
SET64(5, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(29) + 12), RW(5));
SET64(6, (s32)rd32(c, (RW(18) + 8)));
wr32(c, (RW(29) + 16), RW(6));
SET64(7, (s32)rd32(c, (RW(18) + 12)));
SET64(31, 0x27d7d4); wr32(c, (RW(29) + 20), RW(7)); JP_F_0027DA20(c);
wr32(c, (RW(29) + 24), RW(2));
SET64(5, RD(29) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 36)));
SET64(19, (s32)rd32(c, (RW(18) + 24)));
SET64(20, (s32)rd32(c, (RW(18) + 52)));
SET64(21, (s32)rd32(c, (RW(18) + 48)));
SET64(30, (s32)rd32(c, (RW(18) + 44)));
wr32(c, (RW(29) + 28), RW(2));
SET64(6, (s32)rd32(c, (RW(18) + 40)));
SET64(31, 0x27d804); wr32(c, (RW(29) + 32), RW(6)); JP_F_002992C0(c);
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0027D81C; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27d818); SET32(4, RW(4) + 24368); JP_F_00284060(c);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
L_0027D81C:;
SET64(6, RD(19) + RD(0));
SET64(31, 0x27d828); SET64(4, RD(20) + RD(0)); JP_F_0027D9B0(c);
SET64(4, RD(21) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(19) + RD(0));
SET64(31, 0x27d83c); SET64(16, RD(2) + RD(0)); JP_F_0027D9B0(c);
wr32(c, (RW(17) + 0), RW(23));
SET64(4, RD(22) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(7, (s32)rd32(c, (RW(29) + 4)));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
wr32(c, (RW(17) + 4), RW(7));
SET64(6, (s32)rd32(c, (RW(29) + 8)));
wr32(c, (RW(17) + 8), RW(6));
SET64(6, RD(17) + RD(0));
SET64(7, (s32)rd32(c, (RW(29) + 12)));
wr32(c, (RW(17) + 12), RW(7));
SET64(7, (s32)rd32(c, (RW(29) + 16)));
wr32(c, (RW(17) + 16), RW(7));
SET64(7, (s32)rd32(c, (RW(29) + 20)));
wr32(c, (RW(17) + 20), RW(7));
SET64(7, (s32)rd32(c, (RW(29) + 24)));
wr32(c, (RW(17) + 28), RW(3));
wr32(c, (RW(17) + 32), RW(16));
wr32(c, (RW(17) + 36), RW(20));
wr32(c, (RW(17) + 40), RW(19));
wr32(c, (RW(17) + 44), RW(30));
wr32(c, (RW(17) + 52), RW(21));
wr32(c, (RW(17) + 24), RW(7));
wr32(c, (RW(17) + 48), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 28)));
wr32(c, (RW(17) + 56), RW(2));
SET64(7, (s32)rd32(c, (RW(29) + 32)));
SET64(31, 0x27d8b0); wr32(c, (RW(17) + 60), RW(7)); JP_F_0027D918(c);
SET64(2, rd64(c, (RW(18) + 72)));
SET64(16, rd64(c, (RW(29) + 48)));
wr64(c, (RW(17) + 80), RD(2));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(3, rd64(c, (RW(18) + 80)));
SET64(20, rd64(c, (RW(29) + 80)));
wr64(c, (RW(17) + 88), RD(3));
SET64(21, rd64(c, (RW(29) + 88)));
SET64(2, rd64(c, (RW(18) + 88)));
SET64(22, rd64(c, (RW(29) + 96)));
wr64(c, (RW(17) + 96), RD(2));
SET64(23, rd64(c, (RW(29) + 104)));
SET64(3, rd64(c, (RW(18) + 96)));
SET64(30, rd64(c, (RW(29) + 112)));
wr64(c, (RW(17) + 104), RD(3));
SET64(31, rd64(c, (RW(29) + 120)));
SET64(2, rd64(c, (RW(18) + 104)));
wr64(c, (RW(17) + 112), RD(2));
SET64(3, rd64(c, (RW(18) + 112)));
wr64(c, (RW(17) + 120), RD(3));
SET64(2, rd64(c, (RW(18) + 120)));
SET64(18, rd64(c, (RW(29) + 64)));
wr64(c, (RW(17) + 128), RD(2));
SET64(17, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 128); return;
}

void JP_F_0027D918(Ctx *c) { /* func_0027D918 */
ENTER(0x27d918);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(4) + 356);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(31));
SET64(2, (s32)rd32(c, (RW(5) + 56)));
SET64(20, (s32)rd32(c, (RW(4) + 380)));
SET64(17, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x27d950); SET64(16, (s32)rd32(c, (RW(2) + 0))); JP_F_0027EA68(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { wr32(c, (RW(18) + 68), RW(0)); goto L_0027D968; }
{ int t = RD(20) != RD(19);  if (t) goto L_0027D970; }
wr32(c, (RW(18) + 68), RW(0));
L_0027D968:;
wr32(c, (RW(18) + 64), RW(0)); goto L_0027D990;
L_0027D970:;
{ int t = RD(16) == RD(0); SET64(2, RSD(17) < (s64)5); if (t) goto L_0027D988; }
if (RD(2) != RD(0)) { wr32(c, (RW(18) + 68), RW(17)); goto L_0027D98C; }
SET32(16, RW(16) + 4);
SET32(17, RW(17) + -4);
L_0027D988:;
wr32(c, (RW(18) + 68), RW(17));
L_0027D98C:;
wr32(c, (RW(18) + 64), RW(16));
L_0027D990:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027D9B0(Ctx *c) { /* func_0027D9B0 */
ENTER(0x27d9b0);
SET64(2, RD(6) + RD(0));
SET32(29, RW(29) + -16);
SET32(6, RW(2) << 5);
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(6) - RW(2));
SET32(6, RW(6) << 2);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(6, RW(6) + RW(2));
SET32(6, RW(6) << 3);
SET32(29, RW(29) + 16); { JP_F_0027B438(c); return; }
}

void JP_F_0027D9E0(Ctx *c) { /* func_0027D9E0 */
ENTER(0x27d9e0);
SET32(2, RW(0) + 2);
SET64(5, RD(4) < (u64)(s64)3);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 2); if (t) goto L_0027DA14; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 3); goto L_0027DA08; }
SET32(2, RW(0) + 1);
SET32(3, RW(0) + 1); goto L_0027DA0C;
L_0027DA08:;
SET32(3, RW(0) + 3);
L_0027DA0C:;
if (RD(4) != RD(2)) { SET32(3, RW(0) + 3); goto L_0027DA14; }
L_0027DA14:;
SET64(2, RD(3) + RD(0)); return;
}

void JP_F_0027DA20(Ctx *c) { /* func_0027DA20 */
ENTER(0x27da20);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(4) < (u64)(s64)3);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 2); if (t) goto L_0027DA78; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 3); goto L_0027DA50; }
SET32(2, RW(0) + 1);
SET32(3, RW(0) + 1); goto L_0027DA60;
L_0027DA50:;
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 3); if (t) goto L_0027DA78; }
SET32(2, RW(0) + 4);
SET32(3, RW(0) + 4);
L_0027DA60:;
{ int t = RD(4) == RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0027DA7C; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27da74); SET32(4, RW(4) + 24400); JP_F_00284060(c);
SET32(3, RW(0) + 1);
L_0027DA78:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0027DA7C:;
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027DA88(Ctx *c) { /* func_0027DA88 */
ENTER(0x27da88);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(5) + 88)));
SET64(2, RD(3) < (u64)(s64)3);
{ int t = RD(2) == RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_0027DAC0; }
if (RD(3) != RD(0)) { SET32(17, RW(0) + 2); goto L_0027DAE8; }
SET64(4, (s64)(s32)0x4b0000); goto L_0027DAE0;
L_0027DAC0:;
SET32(2, RW(0) + 3);
{ int t = RD(3) != RD(2); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0027DAE0; }
SET64(2, (s8)rd8(c, (RW(5) + 108)));
{ int t = RD(2) != RD(0);  if (t) goto L_0027DAE8; }
SET32(17, RW(0) + 2); goto L_0027DAE8;
L_0027DAE0:;
SET64(31, 0x27dae8); SET32(4, RW(4) + 24440); JP_F_00284060(c);
L_0027DAE8:;
SET64(31, 0x27daf0);  JP_F_0027EA68(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 1);
if (RD(16) != RD(2)) { SET64(2, RD(17) + RD(0)); goto L_0027DB18; }
SET64(31, 0x27db08); SET64(4, RD(18) + RD(0)); JP_F_00282858(c);
SET32(3, RW(0) + 2);
SET64(2, RD(2) ^ RD(16));
if (RD(2) == 0) SET64(17, RD(3));
SET64(2, RD(17) + RD(0));
L_0027DB18:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027DB30(Ctx *c) { /* func_0027DB30 */
ENTER(0x27db30);
SET64(3, (s32)rd32(c, (RW(5) + 88)));
SET32(4, RW(4) + 140);
SET64(6, (s32)rd32(c, (RW(5) + 60)));
wr32(c, (RW(4) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 92)));
wr32(c, (RW(4) + 4), RW(2));
SET64(3, (s8)rd8(c, (RW(5) + 108)));
wr32(c, (RW(4) + 8), RW(3));
SET64(2, (s8)rd8(c, (RW(5) + 109)));
wr32(c, (RW(4) + 12), RW(2));
SET64(3, (s8)rd8(c, (RW(5) + 110)));
wr32(c, (RW(4) + 20), RW(6));
wr32(c, (RW(4) + 16), RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 64)));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 24), RW(2)); return;
}

void JP_F_0027DB78(Ctx *c) { /* func_0027DB78 */
ENTER(0x27db78);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(2, (s32)rd32(c, (RW(5) + 56)));
SET64(18, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x27dba0); SET64(17, (s32)rd32(c, (RW(2) + 0))); JP_F_0027EA68(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0027DC64; }
SET64(2, (s32)rd32(c, (RW(16) + 384)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0027DC64; }
{ int t = RD(17) == RD(0); SET64(2, RSD(18) < (s64)5); if (t) goto L_0027DBE8; }
if (RD(2) != RD(0)) { wr32(c, (RW(29) + 0), RW(0)); goto L_0027DBEC; }
SET32(4, RW(17) + 4);
SET32(5, RW(18) + -4);
SET64(6, RD(29) + RD(0));
SET64(31, 0x27dbdc); SET32(7, RW(29) + 4); JP_F_0029F4B0(c);
SET64(2, (s32)rd32(c, (RW(29) + 0))); goto L_0027DBF4;
L_0027DBE8:;
wr32(c, (RW(29) + 0), RW(0));
L_0027DBEC:;
wr32(c, (RW(29) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_0027DBF4:;
{ int t = RD(2) == RD(0); SET64(7, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_0027DC48; }
if (RSD(7) <= 0) { wr32(c, (RW(16) + 392), RW(0)); goto L_0027DC4C; }
SET64(2, (s32)rd32(c, (RW(16) + 388)));
SET64(5, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 384)));
SET64(3, RSD(2) < RSD(7));
SET64(6, RD(2) + RD(0));
if (RD(3) != 0) SET64(7, RD(2));
SET64(31, 0x27dc24); wr32(c, (RW(29) + 4), RW(7)); JP_F_001273D0(c);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(16) + 384)));
SET64(31, 0x27dc34); SET64(6, (s32)rd32(c, (RW(29) + 4))); JP_F_00127218(c);
SET64(3, (s32)rd32(c, (RW(16) + 384)));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(16) + 392), RW(3));
wr32(c, (RW(16) + 396), RW(2)); goto L_0027DC50;
L_0027DC48:;
wr32(c, (RW(16) + 392), RW(0));
L_0027DC4C:;
wr32(c, (RW(16) + 396), RW(0));
L_0027DC50:;
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 392)));
SET64(31, 0x27dc60); SET64(6, (s32)rd32(c, (RW(4) + 396))); JP_F_00282810(c);
SET64(16, rd64(c, (RW(29) + 16)));
L_0027DC64:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027DC78(Ctx *c) { /* func_0027DC78 */
ENTER(0x27dc78);
SET64(2, (s32)rd32(c, (RW(4) + 396)));
SET64(3, (s32)rd32(c, (RW(4) + 392)));
wr32(c, (RW(6) + 0), RW(2));
wr32(c, (RW(5) + 0), RW(3)); return;
}

void JP_F_0027DC90(Ctx *c) { /* func_0027DC90 */
ENTER(0x27dc90);
SET64(2, (s32)rd32(c, (RW(4) + 392)));
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_0027DCA0(Ctx *c) { /* func_0027DCA0 */
ENTER(0x27dca0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27dcb8); SET64(7, RD(29) + RD(0)); JP_F_0028CEB0(c);
SET64(5, RD(16) + RD(0));
SET64(31, 0x27dcc4); SET64(4, RD(29) + RD(0)); JP_F_0027DE48(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027DCD8(Ctx *c) { /* func_0027DCD8 */
ENTER(0x27dcd8);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 64), RD(31));
wr64(c, (RW(29) + 56), RD(23));
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x27dd14); SET64(23, (s32)rd32(c, (RW(16) + 0))); JP_F_0027DDA0(c);
SET64(22, (s32)rd32(c, (RW(16) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(21, RD(2) + RD(0));
SET64(18, (s32)rd32(c, (RW(16) + 12)));
SET64(19, (s32)rd32(c, (RW(16) + 16)));
SET64(31, 0x27dd30); SET64(20, (s32)rd32(c, (RW(16) + 20))); JP_F_0027DDE0(c);
SET64(3, (s32)rd32(c, (RW(16) + 44)));
SET64(4, (s32)rd32(c, (RW(16) + 36)));
SET64(5, (s32)rd32(c, (RW(16) + 40)));
SET64(6, (s32)rd32(c, (RW(16) + 56)));
SET64(7, (s32)rd32(c, (RW(16) + 60)));
wr32(c, (RW(17) + 32), RW(23));
wr32(c, (RW(17) + 28), RW(21));
wr32(c, (RW(17) + 0), RW(22));
wr32(c, (RW(17) + 4), RW(18));
wr32(c, (RW(17) + 8), RW(19));
wr32(c, (RW(17) + 12), RW(20));
wr32(c, (RW(17) + 44), RW(3));
wr32(c, (RW(17) + 16), RW(2));
wr32(c, (RW(17) + 20), RW(4));
wr32(c, (RW(17) + 24), RW(5));
wr32(c, (RW(17) + 36), RW(6));
wr32(c, (RW(17) + 40), RW(7));
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

void JP_F_0027DDA0(Ctx *c) { /* func_0027DDA0 */
ENTER(0x27dda0);
SET32(2, RW(0) + 2);
SET64(5, RD(4) < (u64)(s64)3);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 2); if (t) goto L_0027DDD4; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 3); goto L_0027DDC8; }
SET32(2, RW(0) + 1);
SET32(3, RW(0) + 1); goto L_0027DDCC;
L_0027DDC8:;
SET32(3, RW(0) + 3);
L_0027DDCC:;
if (RD(4) != RD(2)) { SET32(3, RW(0) + 3); goto L_0027DDD4; }
L_0027DDD4:;
SET64(2, RD(3) + RD(0)); return;
}

void JP_F_0027DDE0(Ctx *c) { /* func_0027DDE0 */
ENTER(0x27dde0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(4) < (u64)(s64)3);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 2); if (t) goto L_0027DE38; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 3); goto L_0027DE10; }
SET32(2, RW(0) + 1);
SET32(3, RW(0) + 1); goto L_0027DE20;
L_0027DE10:;
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 3); if (t) goto L_0027DE38; }
SET32(2, RW(0) + 4);
SET32(3, RW(0) + 4);
L_0027DE20:;
{ int t = RD(4) == RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0027DE3C; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27de34); SET32(4, RW(4) + 24496); JP_F_00284060(c);
SET32(3, RW(0) + 1);
L_0027DE38:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0027DE3C:;
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027DE48(Ctx *c) { /* func_0027DE48 */
ENTER(0x27de48);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET64(6, (s16)rd16(c, (RW(4) + 12)));
wr32(c, (RW(5) + 0), RW(2));
SET64(3, (s16)rd16(c, (RW(4) + 14)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(5) + 20), RW(6));
wr32(c, (RW(5) + 4), RW(2));
wr32(c, (RW(5) + 12), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(5) + 8), RW(2)); return;
}

void JP_F_0027DE78(Ctx *c) { /* func_0027DE78 */
ENTER(0x27de78);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x27de98); SET64(19, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(19) + RD(0)); if (t) goto L_0027DEC8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 24536);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00284060(c); return; }
L_0027DEC8:;
SET64(18, (s32)rd32(c, (RW(19) + 128)));
SET64(16, (s32)rd32(c, (RW(19) + 132)));
SET64(31, 0x27ded8); SET64(17, (s32)rd32(c, (RW(19) + 124))); JP_F_002800E8(c);
SET64(16, RSD(16) < RSD(18));
SET64(4, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0027DF00; }
SET64(31, 0x27def0);  JP_F_00296340(c);
SET64(3, (s32)rd32(c, (RW(19) + 132)));
SET32(3, RW(3) + 1);
wr32(c, (RW(19) + 128), RW(3));
wr32(c, (RW(19) + 132), RW(3));
L_0027DF00:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027DF20(Ctx *c) { /* func_0027DF20 */
ENTER(0x27df20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27df34); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027DF60; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27df48); SET32(4, RW(4) + 24584); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_0027DF60:;
SET64(31, 0x27df68);  JP_F_002800E8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00292680(c); return; }
}

void JP_F_0027DF80(Ctx *c) { /* func_0027DF80 */
ENTER(0x27df80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27dfa4); SET64(18, RD(5) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027DFC8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27dfb8); SET32(4, RW(4) + 24640); JP_F_00284060(c);
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(17) + 0), RW(0)); goto L_0027E004;
L_0027DFC8:;
SET64(31, 0x27dfd0);  JP_F_002800E8(c);
SET64(5, RD(18) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x27dfe0); SET64(6, RD(17) + RD(0)); JP_F_002924E0(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(2) + -4);
SET64(2, RSD(2) < (s64)4);
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0027E008; }
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(17) + 0), RW(3));
SET32(2, RW(2) + 4);
wr32(c, (RW(18) + 0), RW(2));
L_0027E004:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0027E008:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027E020(Ctx *c) { /* func_0027E020 */
ENTER(0x27e020);
SET64(5, (s32)rd32(c, (RW(4) + 132)));
SET64(2, (s32)rd32(c, (RW(4) + 128)));
SET32(4, RW(5) + 1);
SET64(3, RSD(5) < RSD(2));
{ int t = RD(3) != RD(0); SET64(2, RD(2) ^ RD(5)); if (t) goto L_0027E040; }
SET64(4, RD(0) + RD(0));
if (RD(2) == 0) SET64(4, RD(5));
L_0027E040:;
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_0027E048(Ctx *c) { /* func_0027E048 */
ENTER(0x27e048);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27e05c); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 136))); goto L_0027E074; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27e070); SET32(4, RW(4) + 24696); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
L_0027E074:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027E088(Ctx *c) { /* func_0027E088 */
ENTER(0x27e088);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0027E5F8(c); return; }
}

void JP_F_0027E0A0(Ctx *c) { /* func_0027E0A0 */
ENTER(0x27e0a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27e0b0); SET64(5, RD(29) + RD(0)); JP_F_0029C138(c);
SET32(4, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x0);
SET64(31, rd64(c, (RW(29) + 16)));
if (RD(2) != 0) SET64(4, RD(3));
SET64(2, RD(4) + RD(0));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027E0D0(Ctx *c) { /* func_0027E0D0 */
ENTER(0x27e0d0);
SET32(29, RW(29) + -80);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
SET64(3, RD(21) < (u64)(s64)2048);
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 16), RD(16));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 64), RD(22));
wr64(c, (RW(29) + 72), RD(31));
{ int t = RD(3) != RD(0); wr32(c, (RW(17) + 20), RW(2)); if (t) goto L_0027E1C8; }
{ int t = RD(19) == RD(0); SET32(20, RW(0) + 2); if (t) goto L_0027E1C8; }
SET32(22, RW(0) + -1);
SET32(18, RW(0) + 2048);
SET32(4, RW(19) + RW(18));
L_0027E128:;
SET64(31, 0x27e130); SET32(5, RW(21) - RW(18)); JP_F_0029B518(c);
SET32(18, RW(18) + 2048);
SET64(16, RD(2) + RD(0));
SET64(5, RD(29) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027E1B8; }
SET64(31, 0x27e14c);  JP_F_0029B730(c);
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0027E15C; }
{ int t = RD(2) != RD(0);  if (t) goto L_0027E178; }
L_0027E15C:;
wr32(c, (RW(17) + 20), RW(22));
SET64(4, RD(16) + RD(0));
SET64(31, 0x27e16c); wr32(c, (RW(17) + 24), RW(22)); JP_F_0029B5E0(c);
SET32(20, RW(20) + 1); goto L_0027E1BC;
L_0027E178:;
SET64(31, 0x27e180); SET64(4, RD(16) + RD(0)); JP_F_0027E0A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27e18c); wr32(c, (RW(17) + 20), RW(2)); JP_F_0027E230(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27e198); wr32(c, (RW(17) + 24), RW(2)); JP_F_0027E2D8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27e1a4); wr32(c, (RW(17) + 28), RW(2)); JP_F_0027E2A8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27e1b0); wr32(c, (RW(17) + 32), RW(2)); JP_F_0029B5E0(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0027E1CC;
L_0027E1B8:;
SET32(20, RW(20) + 1);
L_0027E1BC:;
SET64(2, RSD(20) < (s64)4);
{ int t = RD(2) != RD(0); SET32(4, RW(19) + RW(18)); if (t) { POLL(); goto L_0027E128; } }
L_0027E1C8:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0027E1CC:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0027E1F0(Ctx *c) { /* func_0027E1F0 */
ENTER(0x27e1f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27e200);  JP_F_0027E678(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 81);
{ int t = RD(3) == RD(2); SET32(4, RW(0) + 97); if (t) goto L_0027E218; }
{ int t = RD(3) != RD(4); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0027E220; }
L_0027E218:;
SET32(3, RW(0) + 65);
SET64(31, rd64(c, (RW(29) + 0)));
L_0027E220:;
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

static void JP_B_0027E230(Ctx *c, u32 entry) { /* func_0027E230 */
ENTER(entry);
switch (entry) { case 0x27e280: goto L_0027E280; case 0x27e288: goto L_0027E288; case 0x27e290: goto L_0027E290; case 0x27e298: goto L_0027E298; }
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 224);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27e244); SET64(6, RD(29) + RD(0)); JP_F_0029CA60(c);
{ int t = RD(2) != RD(0); SET64(3, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0027E258; }
SET32(2, RW(0) + 17); goto L_0027E29C;
L_0027E258:;
SET64(2, RD(3) < (u64)(s64)9);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 17); if (t) goto L_0027E29C; }
SET32(2, RW(3) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 24752)));
{ u32 t = RW(3);  switch (t) { case 0x27e280: goto L_0027E280; case 0x27e288: goto L_0027E288; case 0x27e290: goto L_0027E290; case 0x27e298: goto L_0027E298; default: rt_jump(c, t); return; } }
L_0027E280:;
SET32(2, RW(0) + 33); goto L_0027E29C;
L_0027E288:;
SET32(2, RW(0) + 81); goto L_0027E29C;
L_0027E290:;
SET32(2, RW(0) + 97); goto L_0027E29C;
L_0027E298:;
SET32(2, RW(0) + 17);
L_0027E29C:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}
void JP_F_0027E230(Ctx *c) { JP_B_0027E230(c, 0x27e230); }
void JP_F_0027E280(Ctx *c) { JP_B_0027E230(c, 0x27e280); }
void JP_F_0027E288(Ctx *c) { JP_B_0027E230(c, 0x27e288); }
void JP_F_0027E290(Ctx *c) { JP_B_0027E230(c, 0x27e290); }
void JP_F_0027E298(Ctx *c) { JP_B_0027E230(c, 0x27e298); }

void JP_F_0027E2A8(Ctx *c) { /* func_0027E2A8 */
ENTER(0x27e2a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27e2b8); SET64(5, RD(29) + RD(0)); JP_F_0029BF40(c);
SET32(4, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x0);
SET64(31, rd64(c, (RW(29) + 16)));
if (RD(2) != 0) SET64(4, RD(3));
SET64(2, RD(4) + RD(0));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027E2D8(Ctx *c) { /* func_0027E2D8 */
ENTER(0x27e2d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27e2e8); SET64(5, RD(29) + RD(0)); JP_F_0029BF90(c);
SET32(4, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x0);
SET64(31, rd64(c, (RW(29) + 16)));
if (RD(2) != 0) SET64(4, RD(3));
SET64(2, RD(4) + RD(0));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027E308(Ctx *c) { /* func_0027E308 */
ENTER(0x27e308);
SET64(6, RD(4) + RD(0));
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET32(12, RW(0) + 17);
wr32(c, (RW(6) + 184), RW(0));
SET32(11, RW(6) + 8);
wr32(c, (RW(6) + 188), RW(0));
SET32(10, RW(6) + 12);
wr32(c, (RW(6) + 192), RW(0));
SET32(9, RW(6) + 16);
SET32(5, RW(6) + 212);
SET64(8, RD(0) + RD(0));
SET32(7, RW(0) + 7);
L_0027E340:;
SET32(2, RW(8) + 192);
SET32(8, RW(8) + 20);
SET32(4, RW(9) + RW(2));
SET32(3, RW(11) + RW(2));
SET32(7, RW(7) + -1);
SET32(2, RW(10) + RW(2));
wr32(c, (RW(5) + -16), RW(0));
wr32(c, (RW(3) + 0), RW(0));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(5) + 0), RW(12));
{ int t = RSD(7) >= 0; SET32(5, RW(5) + 20); if (t) { POLL(); goto L_0027E340; } }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(6) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(29, RW(29) + 16); { JP_F_00281C58(c); return; }
}

void JP_F_0027E388(Ctx *c) { /* func_0027E388 */
ENTER(0x27e388);
SET32(29, RW(29) + -32);
SET64(6, (s64)(s32)0x280000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(6, RW(6) + -7208);
wr64(c, (RW(29) + 8), RD(17));
SET32(5, RW(0) + 75);
SET64(17, (s32)rd32(c, (RW(16) + 64)));
SET64(31, 0x27e3b4); SET64(4, RD(17) + RD(0)); JP_F_00297690(c);
SET64(4, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 76);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
}

void JP_F_0027E3D8(Ctx *c) { /* func_0027E3D8 */
ENTER(0x27e3d8);
SET32(29, RW(29) + -64);
SET64(3, RD(6) < (u64)(s64)2048);
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 48), RD(31));
SET64(2, (s32)rd32(c, (RW(19) + 184)));
SET32(2, RW(2) + 1);
{ int t = RD(3) != RD(0); wr32(c, (RW(19) + 184), RW(2)); if (t) goto L_0027E4F4; }
if (RD(4) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0027E4F8; }
SET64(31, 0x27e41c); SET64(5, RD(6) + RD(0)); JP_F_0029B518(c);
SET64(18, RD(2) + RD(0));
SET64(5, RD(29) + RD(0));
{ int t = RD(18) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0027E4F4; }
SET64(31, 0x27e434);  JP_F_0029B730(c);
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0027E444; }
{ int t = RD(2) != RD(0);  if (t) goto L_0027E458; }
L_0027E444:;
SET64(31, 0x27e44c); SET64(4, RD(18) + RD(0)); JP_F_0029B5E0(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0027E4F8;
L_0027E458:;
SET64(31, 0x27e460); SET64(4, RD(18) + RD(0)); JP_F_0027E510(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x27e46c); SET64(17, RD(2) + RD(0)); JP_F_0027E0A0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x27e478); SET64(16, RD(2) + RD(0)); JP_F_0027E230(c);
SET64(4, (s32)rd32(c, (RW(19) + 192)));
SET64(9, (s32)rd32(c, (RW(19) + 184)));
SET32(8, RW(19) + 4);
SET32(3, RW(4) << 2);
SET32(10, RW(0) + 1);
SET32(3, RW(3) + RW(4));
SET64(4, RD(18) + RD(0));
SET32(3, RW(3) << 2);
SET32(9, RW(9) + -1);
SET32(5, RW(3) + 192);
SET32(3, RW(3) + RW(8));
SET32(6, RW(19) + RW(5));
SET32(8, RW(8) + RW(5));
SET64(7, RD(6) + RD(0));
wr32(c, (RW(6) + 8), RW(9));
SET64(5, RD(7) + RD(0));
wr32(c, (RW(7) + 12), RW(17));
wr32(c, (RW(5) + 16), RW(16));
wr32(c, (RW(3) + 208), RW(2));
wr32(c, (RW(8) + 0), RW(10));
SET64(3, (s32)rd32(c, (RW(19) + 192)));
SET32(5, RW(3) + 1);
SET32(3, RW(3) + 8);
SET64(6, RSD(5) < (s64)0);
SET64(2, RD(5) + RD(0));
if (RD(6) != 0) SET64(2, RD(3));
SET32(2, RSW(2) >> 3);
SET32(2, RW(2) << 3);
SET32(5, RW(5) - RW(2));
SET64(31, 0x27e4f4); wr32(c, (RW(19) + 192), RW(5)); JP_F_0029B5E0(c);
L_0027E4F4:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0027E4F8:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0027E510(Ctx *c) { /* func_0027E510 */
ENTER(0x27e510);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 224);
SET64(6, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27e52c); SET64(16, RD(4) + RD(0)); JP_F_0029B820(c);
{ int t = RD(2) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0027E568; }
SET64(2, (s32)rd32(c, (RW(29) + 0)));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027E548; }
SET64(2, RD(0) + RD(0)); goto L_0027E568;
L_0027E548:;
SET32(5, RW(0) + 224);
SET64(31, 0x27e554); SET32(6, RW(29) + 4); JP_F_0029C718(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0027E56C; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(2, RD(2) ^ 0x3);
SET64(2, RD(2) < (u64)(s64)1);
L_0027E568:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0027E56C:;
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027E578(Ctx *c) { /* func_0027E578 */
ENTER(0x27e578);
SET32(29, RW(29) + -16);
SET64(8, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(8) + 188)));
SET32(7, RW(6) + 7);
SET64(5, RSD(6) < (s64)0);
SET64(3, RD(6) + RD(0));
if (RD(5) != 0) SET64(3, RD(7));
SET32(7, RSW(3) >> 3);
SET32(5, RW(7) << 3);
SET32(7, RW(6) - RW(5));
SET32(3, RW(7) << 2);
SET32(3, RW(3) + RW(7));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(8));
SET64(6, (s32)rd32(c, (RW(3) + 196)));
{ int t = RD(6) == RD(0); SET64(5, RD(7) + RD(0)); if (t) goto L_0027E5D0; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0027E5E0(c); return; }
L_0027E5D0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027E5E0(Ctx *c) { /* func_0027E5E0 */
ENTER(0x27e5e0);
SET32(3, RW(5) << 2);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(3) + 204))); return;
}

void JP_F_0027E5F8(Ctx *c) { /* func_0027E5F8 */
ENTER(0x27e5f8);
SET32(29, RW(29) + -16);
SET64(8, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(8) + 188)));
SET32(7, RW(6) + 7);
SET64(5, RSD(6) < (s64)0);
SET64(3, RD(6) + RD(0));
if (RD(5) != 0) SET64(3, RD(7));
SET32(7, RSW(3) >> 3);
SET32(5, RW(7) << 3);
SET32(7, RW(6) - RW(5));
SET32(3, RW(7) << 2);
SET32(3, RW(3) + RW(7));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(8));
SET64(6, (s32)rd32(c, (RW(3) + 196)));
{ int t = RD(6) == RD(0); SET64(5, RD(7) + RD(0)); if (t) goto L_0027E650; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0027E660(c); return; }
L_0027E650:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027E660(Ctx *c) { /* func_0027E660 */
ENTER(0x27e660);
SET32(3, RW(5) << 2);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(3) + 208))); return;
}

void JP_F_0027E678(Ctx *c) { /* func_0027E678 */
ENTER(0x27e678);
SET32(29, RW(29) + -16);
SET64(8, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(0) + 17);
SET64(6, (s32)rd32(c, (RW(8) + 188)));
SET32(7, RW(6) + 7);
SET64(5, RSD(6) < (s64)0);
SET64(3, RD(6) + RD(0));
if (RD(5) != 0) SET64(3, RD(7));
SET32(7, RSW(3) >> 3);
SET32(5, RW(7) << 3);
SET32(7, RW(6) - RW(5));
SET32(3, RW(7) << 2);
SET32(3, RW(3) + RW(7));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(8));
SET64(6, (s32)rd32(c, (RW(3) + 196)));
{ int t = RD(6) == RD(0); SET64(5, RD(7) + RD(0)); if (t) goto L_0027E6D0; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0027E6E0(c); return; }
L_0027E6D0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027E6E0(Ctx *c) { /* func_0027E6E0 */
ENTER(0x27e6e0);
SET32(3, RW(5) << 2);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(3) + 212))); return;
}

void JP_F_0027E6F8(Ctx *c) { /* func_0027E6F8 */
ENTER(0x27e6f8);
SET64(2, (s32)rd32(c, (RW(4) + 188))); return;
}

void JP_F_0027E700(Ctx *c) { /* func_0027E700 */
ENTER(0x27e700);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27e714); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027E740; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27e728); SET32(4, RW(4) + 24792); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_0027E740:;
SET64(31, 0x27e748);  JP_F_002800E8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00292540(c); return; }
}

void JP_F_0027E760(Ctx *c) { /* func_0027E760 */
ENTER(0x27e760);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 24848); return;
}

void JP_F_0027E770(Ctx *c) { /* func_0027E770 */
ENTER(0x27e770);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 19128); return;
}

void JP_F_0027E780(Ctx *c) { /* func_0027E780 */
ENTER(0x27e780);
SET32(29, RW(29) + -16);
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00284060(c); return; }
}

void JP_F_0027E798(Ctx *c) { /* func_0027E798 */
ENTER(0x27e798);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(4, RD(29) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_0027E7C8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27e7c0); SET32(4, RW(4) + 25008); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0027E93C;
L_0027E7C8:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x27e7d4); SET32(6, RW(0) + 32); JP_F_001273D0(c);
c->f[0].u = rd32(c, (RW(16) + 0));
SET64(3, (s64)(s32)0x530000);
SET64(2, (s64)(s32)0x4b0000);
SET32(3, RW(3) + 9224);
SET32(2, RW(2) + 24848);
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(17, (s64)(s32)0x410000);
SET64(10, (s32)rd32(c, (RW(16) + 28)));
SET64(9, (s32)rd32(c, (RW(16) + 4)));
SET64(8, (s32)rd32(c, (RW(16) + 8)));
SET64(6, (s32)rd32(c, (RW(16) + 16)));
SET64(5, (s32)rd32(c, (RW(16) + 24)));
SET64(7, (s32)rd32(c, (RW(16) + 12)));
wr32(c, (RW(3) + 0), RW(2));
wr32(c, (RW(29) + 20), RW(4));
wr32(c, (RW(29) + 0), c->f[0].u);
wr32(c, (RW(29) + 4), RW(9));
wr32(c, (RW(29) + 8), RW(8));
wr32(c, (RW(29) + 12), RW(7));
wr32(c, (RW(29) + 16), RW(6));
wr32(c, (RW(29) + 24), RW(5));
SET64(31, 0x27e830); wr32(c, (RW(29) + 28), RW(10)); JP_F_00283D08(c);
SET64(31, 0x27e838);  JP_F_0027FB98(c);
SET64(4, (s32)rd32(c, (RW(17) + 19120)));
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET32(2, RW(2) + -2);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(0));
{ int t = RD(4) != RD(0); wr32(c, (RW(29) + 8), RW(2)); if (t) goto L_0027E928; }
SET64(31, 0x27e85c);  JP_F_0024EE10(c);
SET64(31, 0x27e864);  JP_F_00269978(c);
SET64(31, 0x27e86c);  JP_F_00268F60(c);
SET64(31, 0x27e874);  JP_F_0026A580(c);
SET64(31, 0x27e87c);  JP_F_00284DB0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0027E898; }
SET64(31, 0x27e88c); SET32(4, RW(0) + -101); JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27e898); SET32(4, RW(4) + 25048); JP_F_00284060(c);
L_0027E898:;
SET64(31, 0x27e8a0); SET64(4, RD(29) + RD(0)); JP_F_0027E998(c);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 24844);
SET64(1, (s64)(s32)0x447a0000);
c->f[2].u = RW(1);
wr32(c, (RW(2) + 0), RW(0));
SET64(1, (s64)(s32)0x3f000000);
c->f[1].u = RW(1);
c->f[0].u = rd32(c, (RW(29) + 0));
c->f[0].f = fpu(F(0) * F(2));
c->f[0].f = fpu(F(0) + F(1));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[1].u);
SET64(31, 0x27e8d8);  JP_F_0027EC88(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 25088); if (t) goto L_0027E8EC; }
SET64(31, 0x27e8ec);  JP_F_00284060(c);
L_0027E8EC:;
SET64(4, RD(29) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(0) + 1);
SET64(31, 0x27e900); wr32(c, (RW(2) + 19124), RW(3)); JP_F_0027EAD0(c);
SET64(31, 0x27e908);  JP_F_00265378(c);
SET64(4, (s64)(s32)0x280000);
SET32(4, RW(4) + -6272);
SET64(31, 0x27e918); SET64(5, RD(0) + RD(0)); JP_F_002652B0(c);
SET64(31, 0x27e920);  JP_F_002814C0(c);
SET64(31, 0x27e928); SET64(4, RD(29) + RD(0)); JP_F_0027E950(c);
L_0027E928:;
SET32(3, RW(17) + 19120);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 32)));
L_0027E93C:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0027E950(Ctx *c) { /* func_0027E950 */
ENTER(0x27e950);
SET64(5, (s64)(s32)0x280000);
SET32(29, RW(29) + -16);
SET64(6, RD(0) + RD(0));
SET32(5, RW(5) + 18056);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27e96c); SET32(4, RW(0) + 2); JP_F_00283DE0(c);
SET64(4, (s64)(s32)0x280000);
SET32(4, RW(4) + 18128);
SET64(31, 0x27e97c); SET64(5, RD(0) + RD(0)); JP_F_00283E90(c);
SET64(4, (s64)(s32)0x280000);
SET32(4, RW(4) + 18256);
SET64(31, 0x27e98c); SET64(5, RD(0) + RD(0)); JP_F_00283E40(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00283EE0(c); return; }
}

void JP_F_0027E998(Ctx *c) { /* func_0027E998 */
ENTER(0x27e998);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27e9b0); SET64(16, RD(4) + RD(0)); JP_F_0027E770(c);
SET64(17, RD(2) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x27e9c4); SET32(6, RW(0) + 5676); JP_F_001273D0(c);
SET64(31, 0x27e9cc); SET64(4, RD(0) + RD(0)); JP_F_00284C18(c);
SET32(4, RW(0) + 1);
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 92), RW(0));
{ int t = RD(16) == RD(0); SET32(5, RW(17) + 4); if (t) goto L_0027EA08; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s32)rd32(c, (RW(16) + 12)));
wr32(c, (RW(5) + 4), RW(2));
c->f[0].u = rd32(c, (RW(16) + 0));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(5) + 12), RW(3));
wr32(c, (RW(5) + 0), c->f[0].u);
wr32(c, (RW(5) + 8), RW(2)); goto L_0027EA24;
L_0027EA08:;
SET64(1, (s64)(s32)0x426f0000);
SET64(1, RD(1) | 0xc28f);
c->f[0].u = RW(1);
wr32(c, (RW(5) + 12), RW(0));
wr32(c, (RW(5) + 0), c->f[0].u);
wr32(c, (RW(5) + 8), RW(2));
wr32(c, (RW(5) + 4), RW(2));
L_0027EA24:;
wr32(c, (RW(17) + 60), RW(4));
wr32(c, (RW(17) + 56), RW(4));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027EA40(Ctx *c) { /* func_0027EA40 */
ENTER(0x27ea40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27ea54); SET64(16, RD(4) + RD(0)); JP_F_0027E770(c);
wr32(c, (RW(2) + 56), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027EA68(Ctx *c) { /* func_0027EA68 */
ENTER(0x27ea68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27ea78);  JP_F_0027E770(c);
SET64(2, (s32)rd32(c, (RW(2) + 56)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027EA88(Ctx *c) { /* func_0027EA88 */
ENTER(0x27ea88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27ea9c); SET64(16, RD(4) + RD(0)); JP_F_0027E770(c);
wr32(c, (RW(2) + 60), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027EAB0(Ctx *c) { /* func_0027EAB0 */
ENTER(0x27eab0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27eac0);  JP_F_0027E770(c);
SET64(2, (s32)rd32(c, (RW(2) + 60)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027EAD0(Ctx *c) { /* func_0027EAD0 */
ENTER(0x27ead0);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 27);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = rd32(c, (RW(4) + 0));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(6, (s32)c->f[1].u);
SET64(31, 0x27eaf0); SET64(4, RD(0) + RD(0)); JP_F_002804F8(c);
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 7);
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 16); { JP_F_002804F8(c); return; }
}

void JP_F_0027EB08(Ctx *c) { /* func_0027EB08 */
ENTER(0x27eb08);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + 19120);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0027EB30; }
wr32(c, (RW(2) + 0), RW(0));
SET32(29, RW(29) + 16); { JP_F_0027E798(c); return; }
L_0027EB30:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0027EB38(Ctx *c) { /* func_0027EB38 */
ENTER(0x27eb38);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27eb54);  JP_F_0027E770(c);
SET64(3, (s64)(s32)0x410000);
SET64(4, RD(2) + RD(0));
SET32(3, RW(3) + 19120);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_0027EC20; }
SET32(16, RW(4) + 108);
SET32(18, RW(0) + 1);
SET32(17, RW(0) + 7);
L_0027EB80:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_0027EB98; }
SET64(31, 0x27eb94); SET64(4, RD(16) + RD(0)); JP_F_0027CE58(c);
SET32(17, RW(17) + -1);
L_0027EB98:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 696); if (t) { POLL(); goto L_0027EB80; } }
SET64(31, 0x27eba8);  JP_F_00283F10(c);
SET64(31, 0x27ebb0);  JP_F_00283E20(c);
SET64(31, 0x27ebb8);  JP_F_00283EC0(c);
SET64(31, 0x27ebc0);  JP_F_00283E70(c);
SET64(31, 0x27ebc8);  JP_F_00281500(c);
SET64(31, 0x27ebd0);  JP_F_002653F8(c);
SET64(31, 0x27ebd8);  JP_F_0027ED30(c);
SET64(31, 0x27ebe0);  JP_F_0024EFC0(c);
SET64(31, 0x27ebe8);  JP_F_00284DC0(c);
SET64(31, 0x27ebf0);  JP_F_0026A600(c);
SET64(31, 0x27ebf8);  JP_F_00268FE0(c);
SET64(31, 0x27ec00);  JP_F_002699F8(c);
SET64(31, 0x27ec08);  JP_F_0027FBB0(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00283D48(c); return; }
L_0027EC20:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027EC38(Ctx *c) { /* func_0027EC38 */
ENTER(0x27ec38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27ec4c); SET64(16, RD(4) + RD(0)); JP_F_0027E770(c);
wr32(c, (RW(2) + 104), RW(16));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027EC68(Ctx *c) { /* func_0027EC68 */
ENTER(0x27ec68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27ec78);  JP_F_0027E770(c);
SET64(2, (s32)rd32(c, (RW(2) + 104)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027EC88(Ctx *c) { /* func_0027EC88 */
ENTER(0x27ec88);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x4b0000);
SET64(2, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(8, RW(2) + 24992);
ldl(c, 5, (RW(8) + 7));
ldr(c, 5, (RW(8) + 0));
sdl(c, 5, (RW(29) + 7));
sdr(c, 5, (RW(29) + 0));
SET32(5, RW(0) + 14072);
wr32(c, (RW(29) + 4), RW(4));
SET64(31, 0x27ecbc); SET32(4, RW(3) + 25120); JP_F_0028A6D8(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(4, RD(29) + RD(0)); if (t) goto L_0027ECE0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27ecd4); SET32(4, RW(4) + 25128); JP_F_00284060(c);
SET32(2, RW(0) + -1); goto L_0027ED20;
L_0027ECE0:;
SET64(31, 0x27ece8);  JP_F_0028A6E8(c);
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x280000); if (t) goto L_0027ED00; }
SET64(31, 0x27ecf8); SET32(4, RW(0) + -301); JP_F_0027EC38(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0027ED24;
L_0027ED00:;
SET64(4, RD(0) + RD(0));
SET32(5, RW(5) + -4784);
SET64(31, 0x27ed10); SET64(6, RD(0) + RD(0)); JP_F_0028A9A8(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -303); if (t) goto L_0027ED20; }
SET64(31, 0x27ed20);  JP_F_0027EC38(c);
L_0027ED20:;
SET64(31, rd64(c, (RW(29) + 16)));
L_0027ED24:;
SET32(29, RW(29) + 32); return;
}

void JP_F_0027ED30(Ctx *c) { /* func_0027ED30 */
ENTER(0x27ed30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27ed40);  JP_F_0028A820(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027ED50(Ctx *c) { /* func_0027ED50 */
ENTER(0x27ed50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(20));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_0027EDA0; }
SET64(31, 0x27ed84);  JP_F_002800E8(c);
SET64(3, (s64)(s32)0x410000);
SET64(18, RD(2) + RD(0));
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 24804), RW(16));
wr32(c, (RW(3) + 24808), RW(18)); goto L_0027EDB4;
L_0027EDA0:;
SET64(2, (s64)(s32)0x410000);
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(2) + 24804), RW(0));
SET64(18, RD(0) + RD(0));
wr32(c, (RW(3) + 24808), RW(0));
L_0027EDB4:;
{ int t = RD(17) == RD(0); SET64(2, (s64)(s32)0x530000); if (t) goto L_0027EDE4; }
SET32(5, RW(2) + 9296);
SET64(4, (s32)rd32(c, (RW(5) + 0)));
SET32(2, RW(4) << 2);
SET64(3, RSD(4) < (s64)15);
SET64(1, (s64)(s32)0x530000);
SET32(1, RW(1) + RW(2));
wr32(c, (RW(1) + 9232), RW(17));
{ int t = RD(3) == RD(0); SET32(2, RW(4) + 1); if (t) goto L_0027EDE4; }
wr32(c, (RW(5) + 0), RW(2));
L_0027EDE4:;
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xf18);
SET64(2, RSD(2) < RSD(17));
{ int t = RD(2) != RD(0);  if (t) goto L_0027EE68; }
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xf17);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) == RD(0); SET64(20, (s64)(s32)0x530000); if (t) goto L_0027EF10; }
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0x40c);
{ int t = RD(17) == RD(2); SET64(2, RSD(2) < RSD(17)); if (t) goto L_0027EF20; }
{ int t = RD(2) != RD(0);  if (t) goto L_0027EE40; }
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0x408);
{ int t = RD(17) == RD(2); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_0027EF24; }
SET64(5, (s64)(s32)0x4b0000); goto L_0027EF84;
L_0027EE40:;
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xc04);
{ int t = RD(17) == RD(2); SET64(20, (s64)(s32)0x530000); if (t) goto L_0027EF60; }
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xf15);
{ int t = RD(17) == RD(2); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_0027EF40; }
SET64(5, (s64)(s32)0x4b0000); goto L_0027EF84;
L_0027EE68:;
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xf40);
{ int t = RD(17) == RD(2); SET64(2, RSD(2) < RSD(17)); if (t) goto L_0027EEC0; }
{ int t = RD(2) != RD(0); SET64(2, RSD(17) < (s64)-1); if (t) goto L_0027EE98; }
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xf1c);
{ int t = RD(17) == RD(2); SET64(20, (s64)(s32)0x530000); if (t) goto L_0027EF20; }
SET64(5, (s64)(s32)0x4b0000); goto L_0027EF84;
L_0027EE98:;
{ int t = RD(2) == RD(0); SET64(20, (s64)(s32)0x530000); if (t) goto L_0027EF80; }
SET64(2, RSD(17) < (s64)-3);
if (RD(2) != RD(0)) { SET64(5, (s64)(s32)0x4b0000); goto L_0027EF84; }
SET64(20, (s64)(s32)0x530000);
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 25240); goto L_0027EF28;
L_0027EEC0:;
SET64(20, (s64)(s32)0x530000);
SET64(5, (s64)(s32)0x4b0000);
SET32(16, RW(20) + 9304);
SET64(6, (s64)(s32)0xff000000);
SET32(5, RW(5) + 25264);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27eee0); SET64(6, RD(6) | 0xf40); JP_F_00129C30(c);
{ int t = RD(18) == RD(0);  if (t) goto L_0027EEF4; }
SET64(31, 0x27eef0); SET64(4, RD(18) + RD(0)); JP_F_002936F8(c);
SET64(19, RD(2) + RD(0));
L_0027EEF4:;
{ int t = RD(19) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027EF94; }
SET64(5, RD(19) + RD(0));
SET64(31, 0x27ef08); SET32(6, RW(0) + 233); JP_F_0012A610(c);
SET32(4, RW(20) + 9304); goto L_0027EF98;
L_0027EF10:;
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 25288); goto L_0027EF28;
L_0027EF20:;
SET64(5, (s64)(s32)0x4b0000);
L_0027EF24:;
SET32(5, RW(5) + 25384);
L_0027EF28:;
SET64(6, RD(17) + RD(0));
SET64(31, 0x27ef34); SET32(4, RW(20) + 9304); JP_F_00129C30(c);
SET32(4, RW(20) + 9304); goto L_0027EF98;
L_0027EF40:;
SET64(6, (s64)(s32)0xff000000);
SET32(5, RW(5) + 25472);
SET32(4, RW(20) + 9304);
SET64(31, 0x27ef54); SET64(6, RD(6) | 0xf15); JP_F_00129C30(c);
SET32(4, RW(20) + 9304); goto L_0027EF98;
L_0027EF60:;
SET64(5, (s64)(s32)0x4b0000);
SET64(6, (s64)(s32)0xff000000);
SET32(5, RW(5) + 25584);
SET32(4, RW(20) + 9304);
SET64(31, 0x27ef78); SET64(6, RD(6) | 0xc04); JP_F_00129C30(c);
SET32(4, RW(20) + 9304); goto L_0027EF98;
L_0027EF80:;
SET64(5, (s64)(s32)0x4b0000);
L_0027EF84:;
SET32(5, RW(5) + 25720);
SET64(6, RD(17) + RD(0));
SET64(31, 0x27ef94); SET32(4, RW(20) + 9304); JP_F_00129C30(c);
L_0027EF94:;
SET32(4, RW(20) + 9304);
L_0027EF98:;
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_00284060(c); return; }
}

void JP_F_0027EFB8(Ctx *c) { /* func_0027EFB8 */
ENTER(0x27efb8);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + 24804))); return;
}

void JP_F_0027EFC8(Ctx *c) { /* func_0027EFC8 */
ENTER(0x27efc8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27efdc); SET64(16, RD(4) + RD(0)); JP_F_0027E770(c);
wr32(c, (RW(2) + 52), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027EFF0(Ctx *c) { /* func_0027EFF0 */
ENTER(0x27eff0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27f000);  JP_F_0027E770(c);
SET64(2, (s32)rd32(c, (RW(2) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027F010(Ctx *c) { /* func_0027F010 */
ENTER(0x27f010);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27f034); SET64(18, RD(7) + RD(0)); JP_F_002800E8(c);
SET64(31, rd64(c, (RW(29) + 24)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 32); { JP_F_00298B40(c); return; }
}

void JP_F_0027F060(Ctx *c) { /* func_0027F060 */
ENTER(0x27f060);
SET32(29, RW(29) + -16);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0027F088; }
SET64(31, 0x27f074);  JP_F_002800E8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { JP_F_00298C30(c); return; }
L_0027F088:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00298C30(c); return; }
}

void JP_F_0027F098(Ctx *c) { /* func_0027F098 */
ENTER(0x27f098);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27f0a8); SET64(4, (s32)rd32(c, (RW(4) + 64))); JP_F_00294230(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -311); if (t) goto L_0027F0C8; }
SET64(31, 0x27f0b8);  JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27f0c4); SET32(4, RW(4) + 25736); JP_F_00284060(c);
SET32(2, RW(0) + -311);
L_0027F0C8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027F0D8(Ctx *c) { /* func_0027F0D8 */
ENTER(0x27f0d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27f0e8); SET64(4, (s32)rd32(c, (RW(4) + 64))); JP_F_00295B20(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -307); if (t) goto L_0027F108; }
SET64(31, 0x27f0f8);  JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27f104); SET32(4, RW(4) + 25768); JP_F_00284060(c);
SET32(2, RW(0) + -307);
L_0027F108:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027F118(Ctx *c) { /* func_0027F118 */
ENTER(0x27f118);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(5, RD(29) + RD(0));
SET64(31, 0x27f144); SET64(4, (s32)rd32(c, (RW(4) + 64))); JP_F_002960E8(c);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(3, (s32)rd32(c, (RW(29) + 20)));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(18) + 0), RW(4));
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0027F178(Ctx *c) { /* func_0027F178 */
ENTER(0x27f178);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RSD(5) < 0; SET64(4, (s32)rd32(c, (RW(4) + 64))); if (t) goto L_0027F198; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00296158(c); return; }
L_0027F198:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027F1A8(Ctx *c) { /* func_0027F1A8 */
ENTER(0x27f1a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27f1b8); SET64(4, (s32)rd32(c, (RW(4) + 64))); JP_F_00294030(c);
SET32(4, RW(0) + 1);
{ int t = RD(2) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_0027F1E0; }
{ int t = RD(2) == RD(4); SET32(3, RW(0) + 1); if (t) goto L_0027F1E0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(2) + RD(0));
SET64(31, 0x27f1dc); SET32(4, RW(4) + 25800); JP_F_00284060(c);
SET64(3, RD(0) + RD(0));
L_0027F1E0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027F1F0(Ctx *c) { /* func_0027F1F0 */
ENTER(0x27f1f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002961D8(c); return; }
}

void JP_F_0027F208(Ctx *c) { /* func_0027F208 */
ENTER(0x27f208);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27f224); SET32(17, RW(16) + 660); JP_F_0027E770(c);
SET64(2, (s32)rd32(c, (RW(16) + 64)));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027F2A8; }
SET64(31, 0x27f238);  JP_F_0027C830(c);
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 16))); if (t) goto L_0027F258; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 25848);
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_0027F258:;
SET64(31, 0x27f260); SET64(4, RD(16) + RD(0)); JP_F_00283B48(c);
SET64(31, 0x27f268); SET64(4, RD(16) + RD(0)); JP_F_002820D8(c);
SET64(31, 0x27f270); SET64(4, RD(16) + RD(0)); JP_F_00282058(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027F298; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 25896);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_0027F298:;
SET64(31, 0x27f2a0);  JP_F_002820B8(c);
SET64(31, 0x27f2a8); SET64(4, RD(16) + RD(0)); JP_F_0027E308(c);
L_0027F2A8:;
SET64(31, 0x27f2b0); SET64(4, RD(16) + RD(0)); JP_F_0027F300(c);
SET64(31, 0x27f2b8); SET64(4, RD(16) + RD(0)); JP_F_0027F098(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27f2c4); SET64(5, (s8)rd8(c, (RW(16) + 118))); JP_F_0027F648(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x27f2d0); SET32(5, RW(0) + 1); JP_F_00283900(c);
SET64(31, 0x27f2d8); SET64(4, RD(17) + RD(0)); JP_F_00283778(c);
wr32(c, (RW(16) + 136), RW(0));
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 117), (u8)RW(0));
wr32(c, (RW(16) + 8), RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027F300(Ctx *c) { /* func_0027F300 */
ENTER(0x27f300);
wr32(c, (RW(4) + 132), RW(0));
wr32(c, (RW(4) + 128), RW(0)); return;
}

void JP_F_0027F310(Ctx *c) { /* func_0027F310 */
ENTER(0x27f310);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27f32c); SET64(17, RD(4) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 25944); if (t) goto L_0027F350; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_0027F350:;
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0027F378; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 25992);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_0027F378:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(6, RD(0) + RD(0));
SET32(7, RW(0) + -1);
SET32(29, RW(29) + 32); { JP_F_0027F398(c); return; }
}

void JP_F_0027F398(Ctx *c) { /* func_0027F398 */
ENTER(0x27f398);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 468)));
SET64(31, 0x27f3cc); wr32(c, (RW(16) + 464), RW(2)); JP_F_0027F548(c);
SET64(31, 0x27f3d4); SET64(4, RD(16) + RD(0)); JP_F_0027F208(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27f3e0); SET64(5, RD(17) + RD(0)); JP_F_0027F920(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x27f3f0); SET64(6, RD(18) + RD(0)); JP_F_00280050(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00280058(c); return; }
}

void JP_F_0027F418(Ctx *c) { /* func_0027F418 */
ENTER(0x27f418);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27f43c); SET64(18, RD(6) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027F468; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 26040);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_0027F468:;
SET64(31, 0x27f470);  JP_F_0027F548(c);
SET64(4, (s32)rd32(c, (RW(16) + 500)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x27f484);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x27f490); SET64(5, RD(18) + RD(0)); JP_F_00269060(c);
wr32(c, (RW(16) + 504), RW(17));
wr32(c, (RW(16) + 464), RW(2));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 508), RW(18));
SET64(31, 0x27f4a8); wr32(c, (RW(16) + 500), RW(2)); JP_F_0027F208(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0027BA70(c); return; }
}

void JP_F_0027F4C8(Ctx *c) { /* func_0027F4C8 */
ENTER(0x27f4c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27f4e4); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027F508; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 26088);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_0027F508:;
SET64(31, 0x27f510);  JP_F_0027F548(c);
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 464), RW(17));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 484), RW(2));
wr32(c, (RW(16) + 488), RW(0));
wr32(c, (RW(16) + 492), RW(0));
SET64(31, 0x27f530); wr32(c, (RW(16) + 496), RW(0)); JP_F_0027F208(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0027BA70(c); return; }
}

void JP_F_0027F548(Ctx *c) { /* func_0027F548 */
ENTER(0x27f548);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(17, (s32)rd32(c, (RW(16) + 64)));
if (RD(17) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027F5D0; }
SET64(31, 0x27f570);  JP_F_00284D58(c);
wr32(c, (RW(16) + 8), RW(0));
SET64(31, 0x27f57c); SET64(4, RD(17) + RD(0)); JP_F_00295BD8(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -308); if (t) goto L_0027F598; }
SET64(31, 0x27f58c);  JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27f598); SET32(4, RW(4) + 26136); JP_F_00284060(c);
L_0027F598:;
SET64(31, 0x27f5a0); SET32(4, RW(16) + 660); JP_F_002837D0(c);
wr32(c, (RW(16) + 692), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 68)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0027F5B8; }
SET64(31, 0x27f5b8);  JP_F_00285080(c);
L_0027F5B8:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00264D58(c); return; }
L_0027F5D0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027F5E0(Ctx *c) { /* func_0027F5E0 */
ENTER(0x27f5e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27f5f4); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027F618; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 26168);
SET32(29, RW(29) + 16); { JP_F_00284060(c); return; }
L_0027F618:;
SET64(31, 0x27f620);  JP_F_0027F548(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27f62c); SET64(5, RD(0) + RD(0)); JP_F_00283320(c);
wr32(c, (RW(16) + 120), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 76)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00264D58(c); return; }
}

void JP_F_0027F648(Ctx *c) { /* func_0027F648 */
ENTER(0x27f648);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x27f66c); SET64(18, RD(5) + RD(0)); JP_F_00280600(c);
if (RD(2) != RD(0)) { SET64(2, (s8)rd8(c, (RW(16) + 118))); goto L_0027F688; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27f680); SET32(4, RW(4) + 26208); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0027F74C;
L_0027F688:;
{ int t = RD(2) != RD(0); SET64(19, (s32)rd32(c, (RW(16) + 64))); if (t) goto L_0027F698; }
if (RD(18) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0027F74C; }
L_0027F698:;
SET64(31, 0x27f6a0);  JP_F_0027EAB0(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET64(4, RD(19) + RD(0)); if (t) goto L_0027F6F4; }
SET64(17, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(17) != RD(3);  if (t) goto L_0027F6F4; }
SET32(5, RW(0) + 6);
SET64(31, 0x27f6c8); SET64(6, RD(29) + RD(0)); JP_F_002978E0(c);
{ int t = RD(2) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0027F6E8; }
if (RD(2) != RD(17)) { SET64(4, RD(19) + RD(0)); goto L_0027F6F4; }
SET64(31, 0x27f6e0); SET64(4, RD(16) + RD(0)); JP_F_00284D58(c);
SET64(4, RD(19) + RD(0)); goto L_0027F6F4;
L_0027F6E8:;
SET64(31, 0x27f6f0); SET64(4, RD(16) + RD(0)); JP_F_00284D58(c);
SET64(4, RD(19) + RD(0));
L_0027F6F4:;
SET64(31, 0x27f6fc); SET64(5, RD(18) + RD(0)); JP_F_00294080(c);
if (RD(2) == RD(0)) { SET32(4, RW(16) + 660); goto L_0027F73C; }
SET64(31, 0x27f70c); SET32(4, RW(0) + -310); JP_F_0027EC38(c);
SET64(3, (s64)(s32)0x4b0000);
SET32(2, RW(0) + 1);
{ int t = RD(18) != RD(2); SET32(4, RW(3) + 26248); if (t) goto L_0027F728; }
SET64(2, (s64)(s32)0x4b0000);
SET32(5, RW(2) + 26288); goto L_0027F730;
L_0027F728:;
SET64(2, (s64)(s32)0x4b0000);
SET32(5, RW(2) + 26296);
L_0027F730:;
SET64(31, 0x27f738);  JP_F_00284060(c);
SET32(4, RW(16) + 660);
L_0027F73C:;
SET64(31, 0x27f744); SET64(5, RD(18) + RD(0)); JP_F_00283900(c);
wr8(c, (RW(16) + 118), (u8)RW(18));
SET64(16, rd64(c, (RW(29) + 16)));
L_0027F74C:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0027F768(Ctx *c) { /* func_0027F768 */
ENTER(0x27f768);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27f78c); SET64(18, RD(6) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027F7B8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 26304);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_0027F7B8:;
SET64(31, 0x27f7c0);  JP_F_00280EF0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 60)));
{ u32 t = RW(2); SET64(31, 0x27f7d4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0027F990(c); return; }
}

void JP_F_0027F7F8(Ctx *c) { /* func_0027F7F8 */
ENTER(0x27f7f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, (s32)rd32(c, (RW(16) + 476)));
SET64(31, 0x27f818); SET64(4, RD(17) + RD(0)); JP_F_00122158(c);
SET64(1, (s64)(s32)0x4b0000);
SET64(5, rd64(c, (RW(1) + 26352)));
SET64(31, 0x27f828); SET64(4, RD(2) + RD(0)); JP_F_00121C20(c);
SET64(31, 0x27f830); SET64(4, RD(2) + RD(0)); JP_F_00122210(c);
SET64(4, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00280558(c); return; }
}

void JP_F_0027F850(Ctx *c) { /* func_0027F850 */
ENTER(0x27f850);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 68)));
SET64(16, (s32)rd32(c, (RW(4) + 64)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0027F898; }
SET64(31, 0x27f874);  JP_F_002850D0(c);
SET32(3, RW(0) + 3);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027F89C; }
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_002961D8(c); return; }
L_0027F898:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0027F89C:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027F8A8(Ctx *c) { /* func_0027F8A8 */
ENTER(0x27f8a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27f8c8); SET64(4, RD(17) + RD(0)); JP_F_0012A4D8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(3, (s32)rd32(c, (RW(16) + 444)));
SET32(4, RW(4) + 26360);
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0027F908; }
SET64(31, 0x27f8e8);  JP_F_00284060(c);
SET64(6, (s32)rd32(c, (RW(16) + 444)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 440)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); { JP_F_0012A978(c); return; }
L_0027F908:;
SET64(4, (s32)rd32(c, (RW(16) + 440)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0012A3C0(c); return; }
}

void JP_F_0027F920(Ctx *c) { /* func_0027F920 */
ENTER(0x27f920);
SET32(29, RW(29) + -16);
SET64(7, (s64)(s32)0xf0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(7, RD(7) | 0xffff);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0027F940(c); return; }
}

void JP_F_0027F940(Ctx *c) { /* func_0027F940 */
ENTER(0x27f940);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27f964); SET64(18, RD(7) + RD(0)); JP_F_0027F8A8(c);
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 24)));
wr32(c, (RW(16) + 456), RW(17));
wr32(c, (RW(16) + 460), RW(18));
wr32(c, (RW(16) + 448), RW(2));
wr32(c, (RW(16) + 452), RW(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027F990(Ctx *c) { /* func_0027F990 */
ENTER(0x27f990);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(4, RD(5) + RD(0));
SET64(5, RD(6) + RD(0));
SET64(7, RD(29) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 440)));
SET32(8, RW(29) + 4);
SET64(31, 0x27f9bc); SET32(9, RW(29) + 8); JP_F_0024E828(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 26392); if (t) goto L_0027F9F0; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET64(5, (s32)rd32(c, (RW(29) + 8)));
wr32(c, (RW(16) + 448), RW(2));
wr32(c, (RW(16) + 452), RW(3));
wr32(c, (RW(16) + 456), RW(4));
wr32(c, (RW(16) + 460), RW(5)); goto L_0027F9F8;
L_0027F9F0:;
SET64(31, 0x27f9f8);  JP_F_00284060(c);
L_0027F9F8:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027FA08(Ctx *c) { /* func_0027FA08 */
ENTER(0x27fa08);
SET32(29, RW(29) + -48);
SET64(2, RD(5) + RD(0));
SET32(7, RW(6) + 2047);
SET64(6, RD(2) + RD(0));
SET64(5, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 32), RD(16));
SET32(7, RW(7) >> 11);
SET32(5, RW(5) + 26432);
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x27fa38); SET64(4, RD(29) + RD(0)); JP_F_00129C30(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x27fa4c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, RD(0) + RD(0));
SET64(4, RD(29) + RD(0));
SET64(31, 0x27fa5c); SET32(6, RW(0) + 20); JP_F_001273D0(c);
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0027FA70(Ctx *c) { /* func_0027FA70 */
ENTER(0x27fa70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x27fa9c); SET64(19, RD(7) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 26448); if (t) goto L_0027FAC8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00284060(c); return; }
L_0027FAC8:;
{ int t = RD(17) != RD(0); SET64(31, rd64(c, (RW(29) + 32))); if (t) goto L_0027FAF0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 26504);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 48); { JP_F_00284060(c); return; }
L_0027FAF0:;
SET64(31, 0x27faf8); SET64(4, RD(16) + RD(0)); JP_F_00280EF0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 60)));
{ u32 t = RW(2); SET64(31, 0x27fb0c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(7, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0027F940(c); return; }
}

void JP_F_0027FB38(Ctx *c) { /* func_0027FB38 */
ENTER(0x27fb38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00286D30(c); return; }
}

void JP_F_0027FB50(Ctx *c) { /* func_0027FB50 */
ENTER(0x27fb50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00286DB0(c); return; }
}

void JP_F_0027FB68(Ctx *c) { /* func_0027FB68 */
ENTER(0x27fb68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00286C28(c); return; }
}

void JP_F_0027FB80(Ctx *c) { /* func_0027FB80 */
ENTER(0x27fb80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00286CB8(c); return; }
}

void JP_F_0027FB98(Ctx *c) { /* func_0027FB98 */
ENTER(0x27fb98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0027FD68(c); return; }
}

void JP_F_0027FBB0(Ctx *c) { /* func_0027FBB0 */
ENTER(0x27fbb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0027FD68(c); return; }
}

void JP_F_0027FBC8(Ctx *c) { /* func_0027FBC8 */
ENTER(0x27fbc8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27fbe0);  JP_F_0027FD08(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(0) + 1);
{ int t = RD(16) != RD(3); SET32(17, RW(2) + 24824); if (t) goto L_0027FC44; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
if (RD(2) == RD(16)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027FC48; }
SET64(31, 0x27fc08);  JP_F_0027FD90(c);
SET64(6, (s64)(s32)0x530000);
SET32(6, RW(6) + 9600);
SET32(5, RW(0) + 16384);
SET64(31, 0x27fc1c); SET64(4, RD(0) + RD(0)); JP_F_0027FDB0(c);
SET64(31, 0x27fc24); SET32(4, RW(0) + 8); JP_F_0027FF88(c);
SET64(4, (s64)(s32)0x530000);
SET32(4, RW(4) + 25984);
SET32(5, RW(0) + 16384);
SET64(31, 0x27fc38); SET64(6, RD(0) + RD(0)); JP_F_0027FE90(c);
SET64(31, 0x27fc40); SET32(4, RW(0) + 9); JP_F_0027FF88(c);
wr32(c, (RW(17) + 0), RW(16));
L_0027FC44:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0027FC48:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027FC58(Ctx *c) { /* func_0027FC58 */
ENTER(0x27fc58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27fc6c);  JP_F_0027FD08(c);
SET64(3, (s64)(s32)0x410000);
SET32(4, RW(0) + 1);
{ int t = RD(2) != RD(4); SET32(16, RW(3) + 24824); if (t) goto L_0027FCCC; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027FCD0; }
SET64(31, 0x27fc90);  JP_F_0027FD90(c);
SET64(6, (s64)(s32)0x530000);
SET32(6, RW(6) + 25984);
SET32(5, RW(0) + 16384);
SET64(31, 0x27fca4); SET64(4, RD(0) + RD(0)); JP_F_0027FDB0(c);
SET64(31, 0x27fcac); SET32(4, RW(0) + 8); JP_F_0027FF88(c);
SET64(4, (s64)(s32)0x530000);
SET32(4, RW(4) + 9600);
SET32(5, RW(0) + 16384);
SET64(31, 0x27fcc0); SET64(6, RD(0) + RD(0)); JP_F_0027FE90(c);
SET64(31, 0x27fcc8); SET32(4, RW(0) + 9); JP_F_0027FF88(c);
wr32(c, (RW(16) + 0), RW(0));
L_0027FCCC:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0027FCD0:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027FCE0(Ctx *c) { /* func_0027FCE0 */
ENTER(0x27fce0);
{ int t = RD(4) != RD(0); SET64(3, (s64)(s32)0x410000); if (t) goto L_0027FCF8; }
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 24816), RW(0)); return;
L_0027FCF8:;
SET32(2, RW(0) + 1);
wr32(c, (RW(3) + 24816), RW(2)); return;
}

void JP_F_0027FD08(Ctx *c) { /* func_0027FD08 */
ENTER(0x27fd08);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + 24816))); return;
}

void JP_F_0027FD18(Ctx *c) { /* func_0027FD18 */
ENTER(0x27fd18);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 24820), RW(4)); return;
}

void JP_F_0027FD28(Ctx *c) { /* func_0027FD28 */
ENTER(0x27fd28);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27fd3c); SET64(16, RD(4) + RD(0)); JP_F_0027FD08(c);
SET64(3, (s64)(s32)0x410000);
SET64(5, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24820)));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027FD58; }
{ u32 t = RW(2); SET64(31, 0x27fd58);  rt_call(c, t); }
L_0027FD58:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027FD68(Ctx *c) { /* func_0027FD68 */
ENTER(0x27fd68);
SET64(6, (s64)(s32)0x410000);
SET32(2, RW(0) + 1);
SET64(3, (s64)(s32)0x410000);
SET64(4, (s64)(s32)0x410000);
SET64(5, (s64)(s32)0x410000);
wr32(c, (RW(6) + 24816), RW(2));
wr32(c, (RW(3) + 24820), RW(0));
wr32(c, (RW(4) + 24824), RW(0));
wr32(c, (RW(5) + 24828), RW(0)); return;
}

void JP_F_0027FD90(Ctx *c) { /* func_0027FD90 */
ENTER(0x27fd90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27fda0); SET32(4, RW(0) + 8); JP_F_0027FF88(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(0) + 9);
SET32(29, RW(29) + 16); { JP_F_0027FF88(c); return; }
}

void JP_F_0027FDB0(Ctx *c) { /* func_0027FDB0 */
ENTER(0x27fdb0);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + 24828)));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0027FDD8; }
SET64(31, 0x27fdcc);  JP_F_0027FE28(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_0027FDE4;
L_0027FDD8:;
SET64(31, 0x27fde0);  JP_F_0027FDF0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0027FDE4:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0027FDF0(Ctx *c) { /* func_0027FDF0 */
ENTER(0x27fdf0);
SET64(2, RD(5) + RD(0));
SET64(1, (s64)(s32)0x70000000);
SET32(4, RW(1) + RW(4));
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
SET64(4, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27fe14); SET64(6, RD(2) + RD(0)); JP_F_00127218(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027FE28(Ctx *c) { /* func_0027FE28 */
ENTER(0x27fe28);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET32(4, RW(0) + 8);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27fe50); SET64(18, RD(6) + RD(0)); JP_F_00105E08(c);
SET32(4, RW(16) + 15);
SET64(3, RSD(16) < (s64)0);
wr32(c, (RW(2) + 128), RW(17));
if (RD(3) != 0) SET64(16, RD(4));
SET64(4, RD(2) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x27fe70); SET32(6, RSW(16) >> 4); JP_F_001062D8(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027FE90(Ctx *c) { /* func_0027FE90 */
ENTER(0x27fe90);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + 24828)));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0027FEB8; }
SET64(31, 0x27feac);  JP_F_0027FF00(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_0027FEC4;
L_0027FEB8:;
SET64(31, 0x27fec0);  JP_F_0027FED0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0027FEC4:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0027FED0(Ctx *c) { /* func_0027FED0 */
ENTER(0x27fed0);
SET64(2, RD(4) + RD(0));
SET64(4, (s64)(s32)0x70000000);
SET32(4, RW(4) + RW(6));
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27fef0); SET64(5, RD(2) + RD(0)); JP_F_00127218(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0027FF00(Ctx *c) { /* func_0027FF00 */
ENTER(0x27ff00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
SET32(4, RW(0) + 9);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27ff28); SET64(17, RD(6) + RD(0)); JP_F_00105E08(c);
SET32(4, RW(16) + 15);
SET64(3, RSD(16) < (s64)0);
wr32(c, (RW(2) + 128), RW(17));
if (RD(3) != 0) SET64(16, RD(4));
SET64(4, RD(2) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x27ff48); SET32(6, RSW(16) >> 4); JP_F_001061A0(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0027FF68(Ctx *c) { /* func_0027FF68 */
ENTER(0x27ff68);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 24828), RW(4)); return;
}

void JP_F_0027FF78(Ctx *c) { /* func_0027FF78 */
ENTER(0x27ff78);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + 24828))); return;
}

void JP_F_0027FF88(Ctx *c) { /* func_0027FF88 */
ENTER(0x27ff88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27ff9c);  JP_F_00105E08(c);
SET64(16, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
L_0027FFA8:;
SET32(5, RW(0) + 1);
SET64(31, 0x27ffb4); SET32(6, RW(0) + 30); JP_F_001063D8(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_0027FFA8; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

static void JP_B_0027FFD0(Ctx *c, u32 entry) { /* func_0027FFD0 */
ENTER(entry);
switch (entry) { case 0x280000: goto L_00280000; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27ffe4); SET64(16, RD(5) + RD(0)); JP_F_00105E08(c);
SET64(4, RD(2) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x27fff4); SET32(6, RW(0) + 30); JP_F_001063D8(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
L_00280000:;
SET32(29, RW(29) + 16); return;
}
void JP_F_0027FFD0(Ctx *c) { JP_B_0027FFD0(c, 0x27ffd0); }
void JP_F_00280000(Ctx *c) { JP_B_0027FFD0(c, 0x280000); }

static void JP_B_00280008(Ctx *c, u32 entry) { /* func_00280008 */
ENTER(entry);
switch (entry) { case 0x280014: goto L_00280014; case 0x280018: goto L_00280018; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
L_00280014:;
SET32(29, RW(29) + 16); { JP_F_002511B0(c); return; }
if (0) { L_00280018:; SET32(29, RW(29) + 16); }
}
void JP_F_00280008(Ctx *c) { JP_B_00280008(c, 0x280008); }
void JP_F_00280014(Ctx *c) { JP_B_00280008(c, 0x280014); }
void JP_F_00280018(Ctx *c) { JP_B_00280008(c, 0x280018); }

static void JP_B_00280020(Ctx *c, u32 entry) { /* func_00280020 */
ENTER(entry);
switch (entry) { case 0x280024: goto L_00280024; case 0x28002c: goto L_0028002C; case 0x280030: goto L_00280030; }
SET32(29, RW(29) + -16);
L_00280024:;
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
L_0028002C:;
SET32(29, RW(29) + 16); { JP_F_0027FBC8(c); return; }
if (0) { L_00280030:; SET32(29, RW(29) + 16); }
}
void JP_F_00280020(Ctx *c) { JP_B_00280020(c, 0x280020); }
void JP_F_00280024(Ctx *c) { JP_B_00280020(c, 0x280024); }
void JP_F_0028002C(Ctx *c) { JP_B_00280020(c, 0x28002c); }
void JP_F_00280030(Ctx *c) { JP_B_00280020(c, 0x280030); }

static void JP_B_00280038(Ctx *c, u32 entry) { /* func_00280038 */
ENTER(entry);
switch (entry) { case 0x280040: goto L_00280040; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
L_00280040:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0027FC58(c); return; }
}
void JP_F_00280038(Ctx *c) { JP_B_00280038(c, 0x280038); }
void JP_F_00280040(Ctx *c) { JP_B_00280038(c, 0x280040); }

static void JP_B_00280050(Ctx *c, u32 entry) { /* func_00280050 */
ENTER(entry);
switch (entry) { case 0x280054: goto L_00280054; }
 return;
if (0) { L_00280054:;  }
}
void JP_F_00280050(Ctx *c) { JP_B_00280050(c, 0x280050); }
void JP_F_00280054(Ctx *c) { JP_B_00280050(c, 0x280054); }

void JP_F_00280058(Ctx *c) { /* func_00280058 */
ENTER(0x280058);
 return;
}

void JP_F_00280060(Ctx *c) { /* func_00280060 */
ENTER(0x280060);
 return;
}

static void JP_B_00280068(Ctx *c, u32 entry) { /* func_00280068 */
ENTER(entry);
switch (entry) { case 0x280070: goto L_00280070; case 0x280090: goto L_00280090; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
L_00280070:;
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280084); SET64(17, RD(4) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(6, RD(16) + RD(0));
SET32(4, RW(4) + 26552);
L_00280090:;
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 6); if (t) goto L_002800B0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_002800B0:;
SET64(4, (s32)rd32(c, (RW(17) + 64)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
}
void JP_F_00280068(Ctx *c) { JP_B_00280068(c, 0x280068); }
void JP_F_00280070(Ctx *c) { JP_B_00280068(c, 0x280070); }
void JP_F_00280090(Ctx *c) { JP_B_00280068(c, 0x280090); }

void JP_F_002800C8(Ctx *c) { /* func_002800C8 */
ENTER(0x2800c8);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 5);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
}

void JP_F_002800E8(Ctx *c) { /* func_002800E8 */
ENTER(0x2800e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2800fc); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 64))); goto L_00280114; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280110); SET32(4, RW(4) + 26600); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
L_00280114:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00280128(Ctx *c) { /* func_00280128 */
ENTER(0x280128);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28013c); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00280168; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280150); SET32(4, RW(4) + 26648); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_00280168:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00280620(c); return; }
}

void JP_F_00280178(Ctx *c) { /* func_00280178 */
ENTER(0x280178);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280190); SET64(17, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002801B0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2801a4); SET32(4, RW(4) + 26696); JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_002801C8;
L_002801B0:;
SET64(31, 0x2801b8);  JP_F_002801E0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2801c4); SET64(16, RD(2) + RD(0)); JP_F_0027E048(c);
SET32(2, RW(16) + RW(2));
L_002801C8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

static void JP_B_002801E0(Ctx *c, u32 entry) { /* func_002801E0 */
ENTER(entry);
switch (entry) { case 0x280210: goto L_00280210; }
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 160), RD(16));
wr64(c, (RW(29) + 168), RD(31));
SET64(31, 0x2801f4); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00280210; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280208); SET32(4, RW(4) + 26744); JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_00280230;
L_00280210:;
SET64(31, 0x280218);  JP_F_002800E8(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x280224); SET64(5, RD(29) + RD(0)); JP_F_00297A68(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET32(2, RW(3) - RW(2));
L_00280230:;
SET64(16, rd64(c, (RW(29) + 160)));
SET64(31, rd64(c, (RW(29) + 168)));
SET32(29, RW(29) + 176); return;
}
void JP_F_002801E0(Ctx *c) { JP_B_002801E0(c, 0x2801e0); }
void JP_F_00280210(Ctx *c) { JP_B_002801E0(c, 0x280210); }

void JP_F_00280240(Ctx *c) { /* func_00280240 */
ENTER(0x280240);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00280270(c); return; }
}

void JP_F_00280258(Ctx *c) { /* func_00280258 */
ENTER(0x280258);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 4);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00280270(c); return; }
}

void JP_F_00280270(Ctx *c) { /* func_00280270 */
ENTER(0x280270);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x280294); SET64(18, RD(4) + RD(0)); JP_F_00280600(c);
SET64(16, RD(16) ^ 0x1);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 26800);
SET64(5, RD(17) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(0) < RD(16)); if (t) goto L_002802C8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_002802C8:;
SET64(4, (s32)rd32(c, (RW(18) + 64)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
}

void JP_F_002802E8(Ctx *c) { /* func_002802E8 */
ENTER(0x2802e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280304); SET64(17, RD(4) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 26864); if (t) goto L_00280328; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00280328:;
SET64(31, 0x280330); SET64(4, (s32)rd32(c, (RW(17) + 64))); JP_F_002942F8(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 26912); if (t) goto L_00280350; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00280350:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00280368(Ctx *c) { /* func_00280368 */
ENTER(0x280368);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028ADA0(c); return; }
}

void JP_F_00280380(Ctx *c) { /* func_00280380 */
ENTER(0x280380);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 72), RD(31));
SET64(31, 0x280394); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002803B8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2803ac); SET32(4, RW(4) + 26952); JP_F_00284060(c);
SET32(2, RW(0) + -1); goto L_002803C4;
L_002803B8:;
SET64(31, 0x2803c0);  JP_F_002804E0(c);
SET64(2, (s32)rd32(c, (RW(29) + 36)));
L_002803C4:;
SET64(16, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002803D8(Ctx *c) { /* func_002803D8 */
ENTER(0x2803d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2803f4); SET64(17, RD(4) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 27000); if (t) goto L_00280418; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00280418:;
SET64(31, 0x280420); SET64(4, (s32)rd32(c, (RW(17) + 64))); JP_F_00294368(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 27048); if (t) goto L_00280440; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00280440:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00280458(Ctx *c) { /* func_00280458 */
ENTER(0x280458);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028AD88(c); return; }
}

void JP_F_00280470(Ctx *c) { /* func_00280470 */
ENTER(0x280470);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 72), RD(31));
SET64(31, 0x280484); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002804A8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x28049c); SET32(4, RW(4) + 27096); JP_F_00284060(c);
SET32(2, RW(0) + -1); goto L_002804B4;
L_002804A8:;
SET64(31, 0x2804b0);  JP_F_002804E0(c);
SET64(2, (s32)rd32(c, (RW(29) + 40)));
L_002804B4:;
SET64(16, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002804C8(Ctx *c) { /* func_002804C8 */
ENTER(0x2804c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00297A68(c); return; }
}

void JP_F_002804E0(Ctx *c) { /* func_002804E0 */
ENTER(0x2804e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00297990(c); return; }
}

static void JP_B_002804F8(Ctx *c, u32 entry) { /* func_002804F8 */
ENTER(entry);
switch (entry) { case 0x280500: goto L_00280500; }
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
L_00280500:;
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0028050C; }
SET64(2, (s32)rd32(c, (RW(4) + 64)));
L_0028050C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
}
void JP_F_002804F8(Ctx *c) { JP_B_002804F8(c, 0x2804f8); }
void JP_F_00280500(Ctx *c) { JP_B_002804F8(c, 0x280500); }

void JP_F_00280520(Ctx *c) { /* func_00280520 */
ENTER(0x280520);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00280534; }
SET64(2, (s32)rd32(c, (RW(4) + 64)));
L_00280534:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { JP_F_002978E0(c); return; }
}

void JP_F_00280548(Ctx *c) { /* func_00280548 */
ENTER(0x280548);
SET64(2, (s32)rd32(c, (RW(4) + 68))); return;
}

void JP_F_00280550(Ctx *c) { /* func_00280550 */
ENTER(0x280550);
SET64(2, (s32)rd32(c, (RW(4) + 476))); return;
}

void JP_F_00280558(Ctx *c) { /* func_00280558 */
ENTER(0x280558);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280578); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_00284EE8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_002832C0(c); return; }
}

void JP_F_00280598(Ctx *c) { /* func_00280598 */
ENTER(0x280598);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 68)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00284F10(c); return; }
}

void JP_F_002805B0(Ctx *c) { /* func_002805B0 */
ENTER(0x2805b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 68)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00284DC8(c); return; }
}

void JP_F_002805C8(Ctx *c) { /* func_002805C8 */
ENTER(0x2805c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 68)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00284DF0(c); return; }
}

void JP_F_002805E0(Ctx *c) { /* func_002805E0 */
ENTER(0x2805e0);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 44);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
}

void JP_F_00280600(Ctx *c) { /* func_00280600 */
ENTER(0x280600);
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028060C; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
L_0028060C:;
 return;
}

void JP_F_00280618(Ctx *c) { /* func_00280618 */
ENTER(0x280618);
SET64(2, (s32)rd32(c, (RW(4) + 76))); return;
}

void JP_F_00280620(Ctx *c) { /* func_00280620 */
ENTER(0x280620);
SET64(2, (s32)rd32(c, (RW(4) + 72))); return;
}

void JP_F_00280628(Ctx *c) { /* func_00280628 */
ENTER(0x280628);
SET64(2, (s32)rd32(c, (RW(4) + 172))); return;
}

void JP_F_00280630(Ctx *c) { /* func_00280630 */
ENTER(0x280630);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28064c); SET64(17, RD(4) + RD(0)); JP_F_00280600(c);
SET32(3, RW(16) << 5);
SET64(4, (s64)(s32)0x4b0000);
SET32(3, RW(3) - RW(16));
SET32(4, RW(4) + 27144);
SET32(5, RW(0) + 54);
{ int t = RD(2) != RD(0); SET32(3, RW(3) << 2); if (t) goto L_00280680; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00280680:;
SET32(6, RW(3) + RW(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(6) << 3);
SET32(29, RW(29) + 32); { JP_F_002804F8(c); return; }
}

void JP_F_002806A0(Ctx *c) { /* func_002806A0 */
ENTER(0x2806a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2806b4); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
SET32(4, RW(0) + -12);
{ int t = RD(2) != RD(0); SET32(3, RW(0) + 2); if (t) goto L_002806E0; }
SET64(31, 0x2806c8);  JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2806d4); SET32(4, RW(4) + 27192); JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_00280718;
L_002806E0:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028071C; }
SET64(31, 0x2806f4); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_00297650(c);
SET32(6, RW(0) + 6);
SET64(3, RD(2) + RD(0));
SET32(5, RW(0) + 4);
{ int t = RD(3) == RD(5); SET64(4, RSD(3) < (s64)0); if (t) goto L_00280714; }
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(6); if (RD(4) != 0) SET64(2, RD(5)); if (t) goto L_00280718; }
L_00280714:;
SET32(2, RW(0) + 2);
L_00280718:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028071C:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00280728(Ctx *c) { /* func_00280728 */
ENTER(0x280728);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) != RD(0); SET64(4, (s32)rd32(c, (RW(2) + 64))); if (t) goto L_00280750; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 15);
SET64(6, RD(0) + RD(0));
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
L_00280750:;
SET64(3, (s32)rd32(c, (RW(2) + 12)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00280770; }
SET32(5, RW(0) + 15);
SET32(6, RW(0) + 2);
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
L_00280770:;
SET32(5, RW(0) + 15);
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
}

void JP_F_00280780(Ctx *c) { /* func_00280780 */
ENTER(0x280780);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2807a0); SET64(18, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_002807C8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 27232);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_002807C8:;
{ int t = RD(16) != RD(0); SET64(17, (s32)rd32(c, (RW(18) + 64))); if (t) goto L_002807F8; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 15);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(6, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
L_002807F8:;
SET32(3, RW(0) + 1);
{ int t = RD(16) != RD(3); SET32(2, RW(0) + 2); if (t) goto L_00280828; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 15);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
L_00280828:;
{ int t = RD(16) != RD(2); SET32(2, RW(0) + 3); if (t) goto L_00280880; }
SET64(2, (s32)rd32(c, (RW(18) + 12)));
{ int t = RD(2) != RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_00280860; }
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 15);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 2);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
L_00280860:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 15);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
L_00280880:;
if (RD(16) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002808C0; }
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 15);
SET64(31, 0x280898); SET32(6, RW(0) + 5); JP_F_00297690(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 71);
SET64(17, rd64(c, (RW(29) + 8)));
SET32(6, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
L_002808C0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002808D8(Ctx *c) { /* func_002808D8 */
ENTER(0x2808d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2808ec); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
SET64(6, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 15); if (t) goto L_00280910; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280904); SET32(4, RW(4) + 27280); JP_F_00284060(c);
SET32(2, RW(0) + -1); goto L_00280964;
L_00280910:;
SET64(31, 0x280918); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_002978E0(c);
SET32(3, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET32(5, RW(0) + 1);
{ int t = RD(4) == RD(3); SET64(2, RSD(4) < (s64)2); if (t) goto L_00280960; }
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2); goto L_00280948; }
{ int t = RD(4) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00280960; }
SET64(4, (s64)(s32)0x4b0000); goto L_00280954;
L_00280948:;
{ int t = RD(4) == RD(2); SET32(5, RW(0) + 2); if (t) goto L_00280960; }
SET64(4, (s64)(s32)0x4b0000);
L_00280954:;
SET64(31, 0x28095c); SET32(4, RW(4) + 27328); JP_F_00284060(c);
SET32(5, RW(0) + -1);
L_00280960:;
SET64(2, RD(5) + RD(0));
L_00280964:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00280978(Ctx *c) { /* func_00280978 */
ENTER(0x280978);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28098c); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 27376); if (t) goto L_002809B0; }
SET64(31, 0x2809a4);  JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_002809D0;
L_002809B0:;
SET64(31, 0x2809b8); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_0028D0F8(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 27432); if (t) goto L_002809CC; }
SET64(31, 0x2809cc);  JP_F_00284060(c);
L_002809CC:;
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_002809D0:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002809E0(Ctx *c) { /* func_002809E0 */
ENTER(0x2809e0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 160), RD(16));
wr64(c, (RW(29) + 168), RD(31));
SET64(31, 0x2809f4); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00280A18; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280a0c); SET32(4, RW(4) + 27464); JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_00280A24;
L_00280A18:;
SET64(31, 0x280a20);  JP_F_002804C8(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_00280A24:;
SET64(16, rd64(c, (RW(29) + 160)));
SET64(31, rd64(c, (RW(29) + 168)));
SET32(29, RW(29) + 176); return;
}

void JP_F_00280A38(Ctx *c) { /* func_00280A38 */
ENTER(0x280a38);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
SET64(5, RD(29) + RD(0));
SET64(31, 0x280a4c); SET64(4, (s32)rd32(c, (RW(4) + 64))); JP_F_002960E8(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(2, (s32)rd32(c, (RW(29) + 12)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(2, RW(3) + RW(2));
SET32(29, RW(29) + 48); return;
}

void JP_F_00280A68(Ctx *c) { /* func_00280A68 */
ENTER(0x280a68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x280a8c); SET64(18, RD(4) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
SET32(4, RW(4) + 27520);
{ int t = RD(2) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_00280AB0; }
SET64(31, 0x280aa8);  JP_F_00284060(c);
SET32(2, RW(0) + 1); goto L_00280AF0;
L_00280AB0:;
SET64(31, 0x280ab8); SET64(4, (s32)rd32(c, (RW(18) + 64))); JP_F_002984F0(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -309); if (t) goto L_00280AE0; }
SET64(31, 0x280ac8);  JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280ad4); SET32(4, RW(4) + 27568); JP_F_00284060(c);
wr32(c, (RW(16) + 0), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(2));
L_00280AE0:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RSD(2) >= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00280AFC; }
SET32(2, RW(0) + 1);
L_00280AF0:;
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00280AFC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00280B10(Ctx *c) { /* func_00280B10 */
ENTER(0x280b10);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); SET32(5, RW(0) + 3); if (t) goto L_00280B2C; }
SET64(2, (s32)rd32(c, (RW(4) + 64)));
L_00280B2C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { JP_F_0028CF40(c); return; }
}

void JP_F_00280B40(Ctx *c) { /* func_00280B40 */
ENTER(0x280b40);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); SET32(5, RW(0) + 5); if (t) goto L_00280B5C; }
SET64(2, (s32)rd32(c, (RW(4) + 64)));
L_00280B5C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { JP_F_0028CF40(c); return; }
}

void JP_F_00280B70(Ctx *c) { /* func_00280B70 */
ENTER(0x280b70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280b8c); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00280BB8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 27608);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00280BB8:;
SET64(31, 0x280bc0);  JP_F_0027FB38(c);
SET32(4, RW(16) + 660);
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00283960(c); return; }
}

void JP_F_00280BE0(Ctx *c) { /* func_00280BE0 */
ENTER(0x280be0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280bf8); SET64(17, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00280C18; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280c0c); SET32(4, RW(4) + 27656); JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_00280C40;
L_00280C18:;
SET64(31, 0x280c20);  JP_F_0027FB50(c);
SET32(4, RW(17) + 660);
SET64(31, 0x280c2c); SET64(16, RD(2) + RD(0)); JP_F_002839C0(c);
SET64(3, RD(2) + RD(0));
SET64(2, RD(16) + RD(0));
SET64(4, RD(16) ^ RD(3));
if (RD(2) == 0) SET64(2, RD(3));
if (RD(4) == 0) SET64(2, RD(16));
L_00280C40:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00280C58(Ctx *c) { /* func_00280C58 */
ENTER(0x280c58);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x280c7c); SET64(18, RD(6) + RD(0)); JP_F_00280600(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00280CB0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 27704);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00280CB0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0027FB68(c); return; }
}

void JP_F_00280CC8(Ctx *c) { /* func_00280CC8 */
ENTER(0x280cc8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280ce4); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00280D18; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280cfc); SET32(4, RW(4) + 27752); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
L_00280D18:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0027FB80(c); return; }
}

void JP_F_00280D30(Ctx *c) { /* func_00280D30 */
ENTER(0x280d30);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
SET64(3, RD(5) + RD(0));
SET32(5, RW(0) + 4);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00280D50; }
SET64(4, (s32)rd32(c, (RW(2) + 64)));
L_00280D50:;
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00280D68; }
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 16); { JP_F_0028CF40(c); return; }
L_00280D68:;
SET32(5, RW(0) + 4);
SET64(6, RD(0) + RD(0));
SET32(29, RW(29) + 16); { JP_F_0028CF40(c); return; }
}

void JP_F_00280D78(Ctx *c) { /* func_00280D78 */
ENTER(0x280d78);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) != RD(2); SET64(4, (s32)rd32(c, (RW(4) + 64))); if (t) goto L_00280DA0; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 39);
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
L_00280DA0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 39);
SET64(6, RD(0) + RD(0));
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
}

void JP_F_00280DB8(Ctx *c) { /* func_00280DB8 */
ENTER(0x280db8);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 36);
{ int t = RD(4) == RD(0); SET64(2, (s32)rd32(c, (RW(4) + 64))); if (t) goto L_00280DE0; }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
L_00280DE0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00280DF0(Ctx *c) { /* func_00280DF0 */
ENTER(0x280df0);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 37);
{ int t = RD(4) == RD(0); SET64(2, (s32)rd32(c, (RW(4) + 64))); if (t) goto L_00280E18; }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
L_00280E18:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00280E28(Ctx *c) { /* func_00280E28 */
ENTER(0x280e28);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 160), RD(16));
wr64(c, (RW(29) + 168), RD(31));
SET64(31, 0x280e3c); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00280E60; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280e54); SET32(4, RW(4) + 27800); JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_00280E6C;
L_00280E60:;
SET64(31, 0x280e68);  JP_F_002804C8(c);
SET64(2, (s32)rd32(c, (RW(29) + 16)));
L_00280E6C:;
SET64(16, rd64(c, (RW(29) + 160)));
SET64(31, rd64(c, (RW(29) + 168)));
SET32(29, RW(29) + 176); return;
}

void JP_F_00280E80(Ctx *c) { /* func_00280E80 */
ENTER(0x280e80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280e9c); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00280EC0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 27856);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00280EC0:;
SET64(31, 0x280ec8);  JP_F_002800E8(c);
SET64(6, RD(17) ^ 0x1);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 7);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(6, RD(0) < RD(6));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
}

void JP_F_00280EF0(Ctx *c) { /* func_00280EF0 */
ENTER(0x280ef0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x280f04); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 468))); goto L_00280F1C; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280f18); SET32(4, RW(4) + 27912); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
L_00280F1C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00280F30(Ctx *c) { /* func_00280F30 */
ENTER(0x280f30);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 160), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 168), RD(17));
wr64(c, (RW(29) + 176), RD(31));
SET64(31, 0x280f4c); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00280F68; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280f60); SET32(4, RW(4) + 27960); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 160))); goto L_00280FB8;
L_00280F68:;
SET64(31, 0x280f70);  JP_F_002800E8(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x280f7c); SET64(4, RD(2) + RD(0)); JP_F_00297A68(c);
SET64(31, 0x280f84); SET64(4, RD(16) + RD(0)); JP_F_00280178(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x280f90); wr32(c, (RW(17) + 0), RW(2)); JP_F_002801E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x280f9c); wr32(c, (RW(17) + 4), RW(2)); JP_F_0027E048(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x280fa8); wr32(c, (RW(17) + 8), RW(2)); JP_F_00280E28(c);
SET64(3, (s32)rd32(c, (RW(29) + 32)));
wr32(c, (RW(17) + 12), RW(2));
wr32(c, (RW(17) + 16), RW(3));
SET64(16, rd64(c, (RW(29) + 160)));
L_00280FB8:;
SET64(17, rd64(c, (RW(29) + 168)));
SET64(31, rd64(c, (RW(29) + 176)));
SET32(29, RW(29) + 192); return;
}

void JP_F_00280FC8(Ctx *c) { /* func_00280FC8 */
ENTER(0x280fc8);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 160), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 168), RD(17));
wr64(c, (RW(29) + 176), RD(31));
SET64(31, 0x280fe4); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00281000; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280ff8); SET32(4, RW(4) + 28008); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 160))); goto L_00281078;
L_00281000:;
SET64(31, 0x281008);  JP_F_002800E8(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x281014); SET64(5, RD(29) + RD(0)); JP_F_00297A68(c);
SET64(3, rd64(c, (RW(29) + 48)));
SET64(4, rd64(c, (RW(29) + 56)));
SET64(5, rd64(c, (RW(29) + 64)));
SET64(6, rd64(c, (RW(29) + 72)));
SET64(7, rd64(c, (RW(29) + 80)));
SET64(8, rd64(c, (RW(29) + 88)));
SET64(9, rd64(c, (RW(29) + 96)));
SET64(10, rd64(c, (RW(29) + 104)));
SET64(11, rd64(c, (RW(29) + 112)));
SET64(12, rd64(c, (RW(29) + 120)));
SET64(13, rd64(c, (RW(29) + 128)));
SET64(2, rd64(c, (RW(29) + 136)));
wr64(c, (RW(17) + 0), RD(3));
wr64(c, (RW(17) + 88), RD(2));
wr64(c, (RW(17) + 8), RD(4));
wr64(c, (RW(17) + 16), RD(5));
wr64(c, (RW(17) + 24), RD(6));
wr64(c, (RW(17) + 32), RD(7));
wr64(c, (RW(17) + 40), RD(8));
wr64(c, (RW(17) + 48), RD(9));
wr64(c, (RW(17) + 56), RD(10));
wr64(c, (RW(17) + 64), RD(11));
wr64(c, (RW(17) + 72), RD(12));
wr64(c, (RW(17) + 80), RD(13));
SET64(16, rd64(c, (RW(29) + 160)));
L_00281078:;
SET64(17, rd64(c, (RW(29) + 168)));
SET64(31, rd64(c, (RW(29) + 176)));
SET32(29, RW(29) + 192); return;
}

void JP_F_00281088(Ctx *c) { /* func_00281088 */
ENTER(0x281088);
SET32(29, RW(29) + -16);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
SET64(7, (s32)rd32(c, (RW(3) + 476)));
SET32(5, RW(2) + 16383);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(5));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RSW(2) >> 14);
SET64(6, RD(7) + RD(0));
SET32(2, RW(2) << 11);
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) * F(12));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[1].u);
SET64(2, RSD(7) < RSD(5));
if (RD(2) != 0) SET64(5, RD(7));
SET32(29, RW(29) + 16); { JP_F_00280558(c); return; }
}

void JP_F_002810E0(Ctx *c) { /* func_002810E0 */
ENTER(0x2810e0);
SET32(29, RW(29) + -32);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 68)));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_00281104; }
SET64(31, 0x281100); SET64(5, RD(29) + RD(0)); JP_F_00284F28(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_00281104:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00281110(Ctx *c) { /* func_00281110 */
ENTER(0x281110);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00281168; }
SET64(2, (s32)rd32(c, (RW(4) + 68)));
SET64(3, (s32)rd32(c, (RW(4) + 76)));
{ int t = RD(2) != RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00281158; }
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00281168; }
SET64(2, (s32)rd32(c, (RW(3) + 40)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00281150; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00284F50(c); return; }
L_00281150:;
SET64(2, RD(0) + RD(0)); goto L_00281168;
L_00281158:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00284F50(c); return; }
L_00281168:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00281178(Ctx *c) { /* func_00281178 */
ENTER(0x281178);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x281194); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002811B8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 28056);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_002811B8:;
SET64(31, 0x2811c0);  JP_F_002800E8(c);
SET64(5, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00294288(c); return; }
}

void JP_F_002811E0(Ctx *c) { /* func_002811E0 */
ENTER(0x2811e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 16), c->f[20].u);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2811fc); c->f[20].u = c->f[12].u; JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00281220; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 28104);
c->f[20].u = rd32(c, (RW(29) + 16));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00281220:;
SET64(31, 0x281228);  JP_F_002800E8(c);
SET64(1, (s64)(s32)0x447a0000);
c->f[1].u = RW(1);
SET64(1, (s64)(s32)0x3f000000);
c->f[0].u = RW(1);
SET64(4, RD(2) + RD(0));
c->f[1].f = fpu(F(20) * F(1));
c->f[1].f = fpu(F(1) + F(0));
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(5, (s32)c->f[0].u);
c->f[0].u = RW(5);
c->f[0].f = (f32)(s32)c->f[0].u;
c->fcc = F(1) < F(0);
{ int t = c->fcc; SET32(3, RW(0) + 1); if (t) goto L_00281264; }
SET64(3, RD(0) + RD(0));
L_00281264:;
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(5) - RW(3));
SET64(31, rd64(c, (RW(29) + 8)));
c->f[20].u = rd32(c, (RW(29) + 16));
SET32(29, RW(29) + 32); { JP_F_00294288(c); return; }
}

void JP_F_00281280(Ctx *c) { /* func_00281280 */
ENTER(0x281280);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 79);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
}

void JP_F_002812A0(Ctx *c) { /* func_002812A0 */
ENTER(0x2812a0);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 80);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
}

void JP_F_002812C0(Ctx *c) { /* func_002812C0 */
ENTER(0x2812c0);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 73);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
}

void JP_F_002812E0(Ctx *c) { /* func_002812E0 */
ENTER(0x2812e0);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 56);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
}

void JP_F_00281300(Ctx *c) { /* func_00281300 */
ENTER(0x281300);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 57);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
}

void JP_F_00281320(Ctx *c) { /* func_00281320 */
ENTER(0x281320);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(6, RD(5) + RD(0));
SET32(5, RW(0) + 93);
SET64(31, 0x281348); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_00297690(c);
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 94);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
}

void JP_F_00281368(Ctx *c) { /* func_00281368 */
ENTER(0x281368);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(0) + 78);
SET64(31, 0x28138c); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_00297690(c);
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 77);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
}

void JP_F_002813B0(Ctx *c) { /* func_002813B0 */
ENTER(0x2813b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(0) + 92);
SET64(31, 0x2813d4); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_00297690(c);
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 91);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
}

void JP_F_002813F8(Ctx *c) { /* func_002813F8 */
ENTER(0x2813f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(0) + 95);
SET64(31, 0x28141c); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_00297690(c);
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 95);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00297690(c); return; }
}

void JP_F_00281440(Ctx *c) { /* func_00281440 */
ENTER(0x281440);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028ACD8(c); return; }
}

void JP_F_00281458(Ctx *c) { /* func_00281458 */
ENTER(0x281458);
SET64(6, RD(4) + RD(0));
SET64(4, RD(0) + RD(0));
SET32(2, RW(6) + 1);
SET32(29, RW(29) + -16);
SET64(2, RD(2) < (u64)(s64)3);
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00281488; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 28152);
SET32(29, RW(29) + 16); { JP_F_00284060(c); return; }
L_00281488:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 61);
SET32(29, RW(29) + 16); { JP_F_00297690(c); return; }
}

void JP_F_00281498(Ctx *c) { /* func_00281498 */
ENTER(0x281498);
SET32(29, RW(29) + -32);
SET64(4, RD(0) + RD(0));
SET32(5, RW(0) + 61);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2814b0); SET64(6, RD(29) + RD(0)); JP_F_002978E0(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002814C0(Ctx *c) { /* func_002814C0 */
ENTER(0x2814c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2814d0);  JP_F_0029D4C8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s64)(s32)0x280000);
SET32(4, RW(4) + 5352);
SET64(5, RD(0) + RD(0));
SET32(29, RW(29) + 16); { JP_F_0029D5F0(c); return; }
}

void JP_F_002814E8(Ctx *c) { /* func_002814E8 */
ENTER(0x2814e8);
SET32(29, RW(29) + -16);
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00284060(c); return; }
}

void JP_F_00281500(Ctx *c) { /* func_00281500 */
ENTER(0x281500);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029D598(c); return; }
}

void JP_F_00281518(Ctx *c) { /* func_00281518 */
ENTER(0x281518);
SET32(2, RW(0) + 6175); return;
}

void JP_F_00281520(Ctx *c) { /* func_00281520 */
ENTER(0x281520);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029D608(c); return; }
}

void JP_F_00281538(Ctx *c) { /* func_00281538 */
ENTER(0x281538);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029D828(c); return; }
}

void JP_F_00281550(Ctx *c) { /* func_00281550 */
ENTER(0x281550);
SET64(2, (s32)rd32(c, (RW(4) + 172))); return;
}

void JP_F_00281558(Ctx *c) { /* func_00281558 */
ENTER(0x281558);
wr32(c, (RW(4) + 172), RW(5)); return;
}

void JP_F_00281560(Ctx *c) { /* func_00281560 */
ENTER(0x281560);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00281578(c); return; }
}

void JP_F_00281578(Ctx *c) { /* func_00281578 */
ENTER(0x281578);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2815a0); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002815F0(c);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(31, 0x2815b0); SET64(5, RD(17) + RD(0)); JP_F_00281650(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2815bc); SET64(5, RD(17) + RD(0)); JP_F_00281708(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2815cc); SET64(6, RD(17) + RD(0)); JP_F_00281728(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00281770(c); return; }
}

void JP_F_002815F0(Ctx *c) { /* func_002815F0 */
ENTER(0x2815f0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(4) < (u64)(s64)3);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 2); if (t) goto L_0028163C; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 3); goto L_00281620; }
SET32(2, RW(0) + 1);
SET32(3, RW(0) + 1); goto L_00281624;
L_00281620:;
SET32(3, RW(0) + 3);
L_00281624:;
{ int t = RD(4) == RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00281640; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x281638); SET32(4, RW(4) + 28200); JP_F_00284060(c);
SET32(3, RW(0) + 3);
L_0028163C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_00281640:;
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00281650(Ctx *c) { /* func_00281650 */
ENTER(0x281650);
SET32(29, RW(29) + -64);
SET64(8, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET32(3, RW(0) + 3);
wr64(c, (RW(29) + 48), RD(31));
SET32(4, RW(16) + 4);
SET64(17, (s32)rd32(c, (RW(8) + 12)));
SET64(9, (s32)rd32(c, (RW(8) + 8)));
SET64(2, (s32)rd32(c, (RW(8) + 4)));
SET64(6, RD(17) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(5, RD(9) + RD(0));
wr32(c, (RW(16) + 68), RW(9));
{ int t = RD(2) == RD(3); wr32(c, (RW(16) + 72), RW(17)); if (t) goto L_002816A8; }
SET64(5, (s32)rd32(c, (RW(8) + 0)));
SET64(31, 0x2816a0); SET64(6, RD(9) + RD(0)); JP_F_00281718(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_002816F4;
L_002816A8:;
SET64(4, (s32)rd32(c, (RW(8) + 0)));
SET64(31, 0x2816b4); SET64(7, RD(29) + RD(0)); JP_F_0027DCA0(c);
SET32(4, RW(16) + 4);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(7, RD(17) + RD(0));
SET64(31, 0x2816c8); SET64(6, (s32)rd32(c, (RW(29) + 12))); JP_F_00281718(c);
SET32(4, RW(16) + 20);
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(7, RD(17) + RD(0));
SET64(31, 0x2816dc); SET64(6, (s32)rd32(c, (RW(29) + 16))); JP_F_00281718(c);
SET32(4, RW(16) + 36);
SET64(5, (s32)rd32(c, (RW(29) + 8)));
SET64(7, RD(17) + RD(0));
SET64(31, 0x2816f0); SET64(6, (s32)rd32(c, (RW(29) + 20))); JP_F_00281718(c);
SET64(16, rd64(c, (RW(29) + 32)));
L_002816F4:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00281708(Ctx *c) { /* func_00281708 */
ENTER(0x281708);
SET64(2, (s32)rd32(c, (RW(4) + 48)));
wr32(c, (RW(5) + 76), RW(2)); return;
}

void JP_F_00281718(Ctx *c) { /* func_00281718 */
ENTER(0x281718);
wr32(c, (RW(4) + 8), RW(7));
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(4) + 4), RW(6)); return;
}

void JP_F_00281728(Ctx *c) { /* func_00281728 */
ENTER(0x281728);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET64(31, 0x281748); SET64(4, (s32)rd32(c, (RW(4) + 172))); JP_F_0029DA70(c);
wr32(c, (RW(16) + 88), RW(0));
SET64(31, rd64(c, (RW(29) + 24)));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(16) + 80), RW(2));
wr32(c, (RW(16) + 84), RW(3));
wr32(c, (RW(16) + 92), RW(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00281770(Ctx *c) { /* func_00281770 */
ENTER(0x281770);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28178c); SET32(17, RW(5) + 96); JP_F_002817E8(c);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(16) + RD(0));
SET64(31, 0x28179c); SET32(16, RW(16) + 140); JP_F_00281858(c);
SET64(3, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 8), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
wr32(c, (RW(17) + 12), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(31, 0x2817c0); wr32(c, (RW(17) + 16), RW(3)); JP_F_002818C8(c);
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(31, 0x2817cc); wr32(c, (RW(17) + 20), RW(2)); JP_F_002818C8(c);
wr32(c, (RW(17) + 24), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002817E8(Ctx *c) { /* func_002817E8 */
ENTER(0x2817e8);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 3);
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 140)));
{ int t = RD(3) == RD(2); SET64(4, RD(3) < (u64)(s64)3); if (t) goto L_00281830; }
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00281820; }
if (RD(3) == RD(2)) { SET32(16, RW(0) + 1); goto L_00281840; }
SET64(4, (s64)(s32)0x4b0000); goto L_00281838;
L_00281820:;
{ int t = RD(3) == RD(16); SET64(2, RD(16) + RD(0)); if (t) goto L_00281844; }
SET64(4, (s64)(s32)0x4b0000); goto L_00281838;
L_00281830:;
SET32(16, RW(0) + 2); goto L_00281840;
L_00281838:;
SET64(31, 0x281840); SET32(4, RW(4) + 28240); JP_F_00284060(c);
L_00281840:;
SET64(2, RD(16) + RD(0));
L_00281844:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00281858(Ctx *c) { /* func_00281858 */
ENTER(0x281858);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 1);
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 144)));
{ int t = RD(3) == RD(2); SET64(4, RD(3) < (u64)(s64)3); if (t) goto L_002818A0; }
if (RD(4) == RD(0)) { SET32(2, RW(0) + 3); goto L_00281890; }
{ int t = RD(3) == RD(16); SET64(2, RD(16) + RD(0)); if (t) goto L_002818B4; }
SET64(4, (s64)(s32)0x4b0000); goto L_002818A8;
L_00281890:;
if (RD(3) == RD(2)) { SET32(16, RW(0) + 3); goto L_002818B0; }
SET64(4, (s64)(s32)0x4b0000); goto L_002818A8;
L_002818A0:;
SET32(16, RW(0) + 2); goto L_002818B0;
L_002818A8:;
SET64(31, 0x2818b0); SET32(4, RW(4) + 28280); JP_F_00284060(c);
L_002818B0:;
SET64(2, RD(16) + RD(0));
L_002818B4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002818C8(Ctx *c) { /* func_002818C8 */
ENTER(0x2818c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 1);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_002818F0; }
{ int t = RD(4) == RD(16); SET64(2, RD(16) + RD(0)); if (t) goto L_00281904; }
SET64(4, (s64)(s32)0x4b0000); goto L_002818F8;
L_002818F0:;
SET64(16, RD(0) + RD(0)); goto L_00281900;
L_002818F8:;
SET64(31, 0x281900); SET32(4, RW(4) + 28320); JP_F_00284060(c);
L_00281900:;
SET64(2, RD(16) + RD(0));
L_00281904:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00281918(Ctx *c) { /* func_00281918 */
ENTER(0x281918);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029D968(c); return; }
}

void JP_F_00281930(Ctx *c) { /* func_00281930 */
ENTER(0x281930);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029D9B8(c); return; }
}

void JP_F_00281948(Ctx *c) { /* func_00281948 */
ENTER(0x281948);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 152), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 168), RD(19));
wr64(c, (RW(29) + 144), RD(16));
wr64(c, (RW(29) + 176), RD(31));
SET64(31, 0x281970); SET64(19, RD(6) + RD(0)); JP_F_00280600(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 0))); goto L_00281990; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x281984); SET32(4, RW(4) + 28352); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_002819D8;
L_00281990:;
{ int t = RD(2) != RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_002819A8; }
SET64(31, 0x2819a0); SET32(4, RW(4) + 28400); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_002819D8;
L_002819A8:;
SET64(31, 0x2819b0); SET64(4, RD(17) + RD(0)); JP_F_00281550(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x2819c4); SET64(16, RD(2) + RD(0)); JP_F_00281578(c);
SET64(5, RD(29) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2819d4); SET64(6, RD(19) + RD(0)); JP_F_0029E8E8(c);
SET64(16, rd64(c, (RW(29) + 144)));
L_002819D8:;
SET64(17, rd64(c, (RW(29) + 152)));
SET64(18, rd64(c, (RW(29) + 160)));
SET64(19, rd64(c, (RW(29) + 168)));
SET64(31, rd64(c, (RW(29) + 176)));
SET32(29, RW(29) + 192); return;
}

void JP_F_002819F0(Ctx *c) { /* func_002819F0 */
ENTER(0x2819f0);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 152), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 168), RD(19));
wr64(c, (RW(29) + 144), RD(16));
wr64(c, (RW(29) + 176), RD(31));
SET64(31, 0x281a18); SET64(19, RD(6) + RD(0)); JP_F_00280600(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 0))); goto L_00281A38; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x281a2c); SET32(4, RW(4) + 28448); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_00281A80;
L_00281A38:;
{ int t = RD(2) != RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00281A50; }
SET64(31, 0x281a48); SET32(4, RW(4) + 28496); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_00281A80;
L_00281A50:;
SET64(31, 0x281a58); SET64(4, RD(17) + RD(0)); JP_F_00281550(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x281a6c); SET64(16, RD(2) + RD(0)); JP_F_00281578(c);
SET64(5, RD(29) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x281a7c); SET64(6, RD(19) + RD(0)); JP_F_0029E988(c);
SET64(16, rd64(c, (RW(29) + 144)));
L_00281A80:;
SET64(17, rd64(c, (RW(29) + 152)));
SET64(18, rd64(c, (RW(29) + 160)));
SET64(19, rd64(c, (RW(29) + 168)));
SET64(31, rd64(c, (RW(29) + 176)));
SET32(29, RW(29) + 192); return;
}

void JP_F_00281A98(Ctx *c) { /* func_00281A98 */
ENTER(0x281a98);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x281abc); SET64(18, RD(16) + RD(0)); JP_F_00280600(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 400))); goto L_00281AE8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 28544);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00281AE8:;
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_00281B40; }
SET32(2, RW(0) + 257);
{ int t = RD(16) != RD(2); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00281B18; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 28600);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00281B18:;
if (RD(16) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_00281B40; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 28672);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00281B40:;
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x281b4c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 2);
if (RD(2) != RD(3)) { SET64(4, RD(17) + RD(0)); goto L_00281B7C; }
if (RD(18) != RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00281B7C; }
SET64(31, 0x281b68); SET64(4, RD(17) + RD(0)); JP_F_0027E1F0(c);
SET32(3, RW(0) + 17);
SET64(16, RD(2) + RD(0));
SET64(2, ~(RD(0) | RD(16)));
if (RD(2) == 0) SET64(16, RD(3));
SET64(4, RD(17) + RD(0));
L_00281B7C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00281B98(c); return; }
}

void JP_F_00281B98(Ctx *c) { /* func_00281B98 */
ENTER(0x281b98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x281bac); SET64(16, RD(5) + RD(0)); JP_F_00281550(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { JP_F_0029D918(c); return; }
}

void JP_F_00281BC8(Ctx *c) { /* func_00281BC8 */
ENTER(0x281bc8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x281bdc); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00281C08; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x281bf0); SET32(4, RW(4) + 28752); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_00281C08:;
SET64(31, 0x281c10);  JP_F_00281550(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0029D920(c); return; }
}

void JP_F_00281C28(Ctx *c) { /* func_00281C28 */
ENTER(0x281c28);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x281c3c); SET64(16, RD(5) + RD(0)); JP_F_00281550(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { JP_F_0029D928(c); return; }
}

void JP_F_00281C58(Ctx *c) { /* func_00281C58 */
ENTER(0x281c58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DB98(c); return; }
}

void JP_F_00281C70(Ctx *c) { /* func_00281C70 */
ENTER(0x281c70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00281C58(c); return; }
}

void JP_F_00281C88(Ctx *c) { /* func_00281C88 */
ENTER(0x281c88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DBA0(c); return; }
}

void JP_F_00281CA0(Ctx *c) { /* func_00281CA0 */
ENTER(0x281ca0);
SET32(29, RW(29) + -16);
SET64(7, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00281D68(c); return; }
}

void JP_F_00281CB8(Ctx *c) { /* func_00281CB8 */
ENTER(0x281cb8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x281cdc); SET64(18, RD(6) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00281D08; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 28808);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00281D08:;
SET64(31, 0x281d10);  JP_F_00281550(c);
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029D948(c); return; }
}

void JP_F_00281D38(Ctx *c) { /* func_00281D38 */
ENTER(0x281d38);
SET32(29, RW(29) + -16);
SET64(7, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00281D68(c); return; }
}

void JP_F_00281D50(Ctx *c) { /* func_00281D50 */
ENTER(0x281d50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00281CB8(c); return; }
}

void JP_F_00281D68(Ctx *c) { /* func_00281D68 */
ENTER(0x281d68);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x281d94); SET64(19, RD(7) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00281DC0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 28872);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00284060(c); return; }
L_00281DC0:;
SET64(31, 0x281dc8);  JP_F_00281550(c);
SET64(5, RD(17) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x281ddc); SET64(4, RD(16) + RD(0)); JP_F_0029D938(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0029D960(c); return; }
}

void JP_F_00281E00(Ctx *c) { /* func_00281E00 */
ENTER(0x281e00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x281e1c); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00281E40; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 28928);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00281E40:;
SET64(31, 0x281e48);  JP_F_00281550(c);
SET64(5, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029DAA0(c); return; }
}

void JP_F_00281E68(Ctx *c) { /* func_00281E68 */
ENTER(0x281e68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x281e7c); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00281EA8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x281e90); SET32(4, RW(4) + 28984); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_00281EA8:;
SET64(31, 0x281eb0);  JP_F_00281550(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0029DAA8(c); return; }
}

void JP_F_00281EC8(Ctx *c) { /* func_00281EC8 */
ENTER(0x281ec8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x281ee4); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00281F08; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 29040);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00281F08:;
SET64(31, 0x281f10);  JP_F_00281550(c);
SET64(5, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029DAB0(c); return; }
}

void JP_F_00281F30(Ctx *c) { /* func_00281F30 */
ENTER(0x281f30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x281f44); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00281F70; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x281f58); SET32(4, RW(4) + 29096); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_00281F70:;
SET64(31, 0x281f78);  JP_F_00281550(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0029DAB8(c); return; }
}

void JP_F_00281F90(Ctx *c) { /* func_00281F90 */
ENTER(0x281f90);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(2, RD(2) ^ 0x2);
SET64(2, RD(2) < (u64)(s64)1); return;
}

void JP_F_00281FA0(Ctx *c) { /* func_00281FA0 */
ENTER(0x281fa0);
SET64(3, (s32)rd32(c, (RW(4) + 32)));
{ int t = RD(3) == RD(0); SET32(4, RW(0) + 1); if (t) goto L_00281FBC; }
SET32(2, RW(0) + 257);
{ int t = RD(3) != RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_00281FBC; }
SET32(4, RW(0) + 1);
L_00281FBC:;
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_00281FC8(Ctx *c) { /* func_00281FC8 */
ENTER(0x281fc8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x281fe0); SET32(4, RW(16) + 12); JP_F_00281FA0(c);
{ int t = RD(2) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_00282014; }
SET64(4, (s32)rd32(c, (RW(16) + 404)));
SET64(31, 0x281ff4); SET64(5, (s32)rd32(c, (RW(16) + 408))); JP_F_00269A78(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 29152); if (t) goto L_00282014; }
SET64(31, 0x282008);  JP_F_00284060(c);
SET64(31, 0x282010); SET64(4, RD(16) + RD(0)); JP_F_0027CE58(c);
SET64(2, RD(0) + RD(0));
L_00282014:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00282028(Ctx *c) { /* func_00282028 */
ENTER(0x282028);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 400)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0028204C; }
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(3); SET64(31, 0x28204c);  rt_call(c, t); }
L_0028204C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00282058(Ctx *c) { /* func_00282058 */
ENTER(0x282058);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28206c); SET64(16, RD(4) + RD(0)); JP_F_00281F90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 400))); goto L_00282080; }
SET64(2, RD(0) + RD(0)); goto L_002820A8;
L_00282080:;
SET64(2, RD(0) + RD(0));
{ int t = RD(3) == RD(0); SET64(6, RD(3) + RD(0)); if (t) goto L_002820A8; }
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET32(5, RW(0) + 2);
SET64(31, 0x28209c); SET64(7, RD(0) + RD(0)); JP_F_0029AD38(c);
SET32(3, RW(0) + -1);
if (RD(2) == 0) SET64(3, RD(0));
SET64(2, RD(3) + RD(0));
L_002820A8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002820B8(Ctx *c) { /* func_002820B8 */
ENTER(0x2820b8);
SET32(2, RW(4) + 424);
SET32(3, RW(0) + -1);
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(4) + 420), RW(3)); return;
}

void JP_F_002820D8(Ctx *c) { /* func_002820D8 */
ENTER(0x2820d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 400)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002820FC; }
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(3); SET64(31, 0x2820fc);  rt_call(c, t); }
L_002820FC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00282108(Ctx *c) { /* func_00282108 */
ENTER(0x282108);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 400)));
{ int t = RD(2) == RD(0); SET32(3, RW(16) + 424); if (t) goto L_00282150; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00282154; }
SET64(31, 0x28213c);  JP_F_002821A8(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00282358(c); return; }
L_00282150:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00282154:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00282160(Ctx *c) { /* func_00282160 */
ENTER(0x282160);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 400)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00282198; }
SET64(31, 0x282184);  JP_F_002821A8(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00282358(c); return; }
L_00282198:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002821A8(Ctx *c) { /* func_002821A8 */
ENTER(0x2821a8);
SET32(29, RW(29) + -96);
SET32(5, RW(0) + 1);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET32(17, RW(16) + 424);
wr64(c, (RW(29) + 64), RD(18));
wr64(c, (RW(29) + 72), RD(19));
wr64(c, (RW(29) + 80), RD(31));
SET64(18, (s32)rd32(c, (RW(16) + 400)));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x2821e0); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(5, (s64)(s32)0x4b0000);
SET64(6, (s64)(s32)0x4b0000);
SET64(3, RD(2) + RD(0));
SET32(5, RW(5) + 29200);
SET32(6, RW(6) + 29208);
SET64(4, RD(29) + RD(0));
{ int t = RD(3) == RD(0); SET32(7, RW(29) + 16); if (t) goto L_00282218; }
SET64(2, (s32)rd32(c, (RW(16) + 404)));
wr32(c, (RW(29) + 4), RW(3));
SET64(31, 0x282210); wr32(c, (RW(29) + 0), RW(2)); JP_F_0026B558(c);
{ int t = RD(2) != RD(0); SET32(19, RW(16) + 412); if (t) goto L_00282230; }
L_00282218:;
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(17) + 8), RW(0)); goto L_002822D8;
L_00282230:;
SET64(2, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002822B8; }
SET64(5, (s32)rd32(c, (RW(29) + 16)));
SET64(31, 0x282248); SET64(6, (s32)rd32(c, (RW(29) + 20))); JP_F_00127218(c);
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 20)));
SET32(2, RW(0) + 1);
SET64(7, (s32)rd32(c, (RW(18) + 0)));
SET32(16, RW(29) + 32);
wr32(c, (RW(17) + 0), RW(2));
SET64(6, (s64)(s32)0x7fff0000);
SET64(2, (s32)rd32(c, (RW(7) + 24)));
SET64(7, RD(16) + RD(0));
wr32(c, (RW(17) + 4), RW(3));
SET64(4, RD(18) + RD(0));
wr32(c, (RW(17) + 8), RW(5));
SET32(5, RW(0) + 1);
{ u32 t = RW(2); SET64(31, 0x282284); SET64(6, RD(6) | 0xffff); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(4, RD(18) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x28229c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 20)));
{ u32 t = RW(2); SET64(31, 0x2822ac); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 48))); goto L_002822DC;
L_002822B8:;
SET64(5, (s32)rd32(c, (RW(29) + 20)));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(17) + 0), RW(3));
wr32(c, (RW(17) + 4), RW(2));
SET64(31, 0x2822d8); wr32(c, (RW(17) + 8), RW(5)); JP_F_00282400(c);
L_002822D8:;
SET64(16, rd64(c, (RW(29) + 48)));
L_002822DC:;
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void JP_F_002822F8(Ctx *c) { /* func_002822F8 */
ENTER(0x2822f8);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x10000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
SET64(2, RD(2) | 0xffff);
wr64(c, (RW(29) + 0), RD(16));
SET64(2, RSD(2) < RSD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET32(16, RW(4) + 412);
{ int t = RD(2) != RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_00282334; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x282334); SET32(4, RW(4) + 29216); JP_F_00284060(c);
L_00282334:;
wr32(c, (RW(16) + 4), RW(17));
wr32(c, (RW(16) + 0), RW(18));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00282358(Ctx *c) { /* func_00282358 */
ENTER(0x282358);
SET32(29, RW(29) + -48);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET32(3, RW(2) + 424);
wr64(c, (RW(29) + 40), RD(31));
SET64(4, RD(29) + RD(0));
SET64(8, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(8) != RD(0); SET64(16, (s32)rd32(c, (RW(2) + 172))); if (t) goto L_00282398; }
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x28238c); SET64(6, RD(0) + RD(0)); JP_F_0029D9D8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_002823F4;
L_00282398:;
SET64(2, (s32)rd32(c, (RW(3) + 8)));
SET64(5, (s64)(s32)0x4b0000);
SET64(6, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 29272);
SET32(6, RW(6) + 29280);
SET32(7, RW(29) + 16);
wr32(c, (RW(29) + 0), RW(8));
SET64(31, 0x2823bc); wr32(c, (RW(29) + 4), RW(2)); JP_F_0026B558(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_002823E0; }
SET64(31, 0x2823d4);  JP_F_0029D9D8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_002823F4;
L_002823E0:;
SET64(5, (s32)rd32(c, (RW(29) + 16)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2823f0); SET64(6, (s32)rd32(c, (RW(29) + 20))); JP_F_0029D9D8(c);
SET64(16, rd64(c, (RW(29) + 32)));
L_002823F4:;
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00282400(Ctx *c) { /* func_00282400 */
ENTER(0x282400);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x282414); SET64(16, RD(4) + RD(0)); JP_F_00281F90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 400))); goto L_00282428; }
SET64(2, RD(0) + RD(0)); goto L_00282450;
L_00282428:;
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00282450; }
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET32(5, RW(0) + 2);
SET64(6, RD(0) + RD(0));
SET64(31, 0x282444); SET64(7, RD(0) + RD(0)); JP_F_0029AD38(c);
SET32(3, RW(0) + -1);
if (RD(2) == 0) SET64(3, RD(0));
SET64(2, RD(3) + RD(0));
L_00282450:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00282460(Ctx *c) { /* func_00282460 */
ENTER(0x282460);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DAC0(c); return; }
}

void JP_F_00282478(Ctx *c) { /* func_00282478 */
ENTER(0x282478);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DAD8(c); return; }
}

void JP_F_00282490(Ctx *c) { /* func_00282490 */
ENTER(0x282490);
SET32(4, RW(4) + 424);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 0), RW(2));
wr32(c, (RW(5) + 0), RW(3)); return;
}

void JP_F_002824A8(Ctx *c) { /* func_002824A8 */
ENTER(0x2824a8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET64(31, 0x2824d0); SET64(4, (s32)rd32(c, (RW(4) + 172))); JP_F_0029DA70(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002824F8(Ctx *c) { /* func_002824F8 */
ENTER(0x2824f8);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 144), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 152), RD(17));
wr64(c, (RW(29) + 160), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 168), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 176), RD(20));
wr64(c, (RW(29) + 184), RD(31));
SET64(31, 0x282528); SET64(20, RD(7) + RD(0)); JP_F_00281550(c);
SET64(6, RD(29) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x28253c); SET64(17, RD(2) + RD(0)); JP_F_00281578(c);
SET64(4, RD(17) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(31, 0x282550); SET64(5, RD(29) + RD(0)); JP_F_0029DAF0(c);
SET64(16, rd64(c, (RW(29) + 144)));
SET64(17, rd64(c, (RW(29) + 152)));
SET64(18, rd64(c, (RW(29) + 160)));
SET64(19, rd64(c, (RW(29) + 168)));
SET64(20, rd64(c, (RW(29) + 176)));
SET64(31, rd64(c, (RW(29) + 184)));
SET32(29, RW(29) + 192); return;
}

void JP_F_00282570(Ctx *c) { /* func_00282570 */
ENTER(0x282570);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x282594); SET64(18, RD(6) + RD(0)); JP_F_00281550(c);
SET64(16, RD(16) ^ 0x1);
SET64(31, rd64(c, (RW(29) + 24)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(7, RD(16) < (u64)(s64)1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 32); { JP_F_0029DB10(c); return; }
}

static void JP_B_002825C0(Ctx *c, u32 entry) { /* func_002825C0 */
ENTER(entry);
switch (entry) { case 0x282600: goto L_00282600; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x2825e4); SET64(18, RD(6) + RD(0)); JP_F_00281550(c);
SET64(4, RD(2) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET64(31, 0x2825f8); SET32(7, RW(29) + 8); JP_F_0029DB28(c);
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
L_00282600:;
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(3, RD(2) ^ 0x1);
if (RD(3) != 0) SET64(2, RD(0));
SET64(31, rd64(c, (RW(29) + 40)));
wr32(c, (RW(16) + 0), RW(4));
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(18) + 0), RW(5));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}
void JP_F_002825C0(Ctx *c) { JP_B_002825C0(c, 0x2825c0); }
void JP_F_00282600(Ctx *c) { JP_B_002825C0(c, 0x282600); }

void JP_F_00282630(Ctx *c) { /* func_00282630 */
ENTER(0x282630);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) & 0xff);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x282654); SET64(18, RD(7) & 0xff); JP_F_00281550(c);
SET64(31, rd64(c, (RW(29) + 24)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 32); { JP_F_0029DB40(c); return; }
}

void JP_F_00282680(Ctx *c) { /* func_00282680 */
ENTER(0x282680);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2826a4); SET64(18, RD(7) + RD(0)); JP_F_00281550(c);
SET64(31, rd64(c, (RW(29) + 24)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 32); { JP_F_0029DB80(c); return; }
}

void JP_F_002826D0(Ctx *c) { /* func_002826D0 */
ENTER(0x2826d0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 152), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(18));
wr64(c, (RW(29) + 144), RD(16));
wr64(c, (RW(29) + 168), RD(31));
SET64(31, 0x2826f0); SET64(18, RD(5) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 29288); if (t) goto L_00282710; }
SET64(31, 0x282704);  JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_0028275C;
L_00282710:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_00282730; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x282728); SET32(4, RW(4) + 29336); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_0028275C;
L_00282730:;
SET64(31, 0x282738); SET64(4, RD(17) + RD(0)); JP_F_00281550(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x28274c); SET64(16, RD(2) + RD(0)); JP_F_00281578(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x282758); SET64(4, RD(16) + RD(0)); JP_F_0029D3D0(c);
SET64(16, rd64(c, (RW(29) + 144)));
L_0028275C:;
SET64(17, rd64(c, (RW(29) + 152)));
SET64(18, rd64(c, (RW(29) + 160)));
SET64(31, rd64(c, (RW(29) + 168)));
SET32(29, RW(29) + 176); return;
}

static void JP_B_00282770(Ctx *c, u32 entry) { /* func_00282770 */
ENTER(entry);
switch (entry) { case 0x282800: goto L_00282800; }
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 152), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(18));
wr64(c, (RW(29) + 144), RD(16));
wr64(c, (RW(29) + 168), RD(31));
SET64(31, 0x282790); SET64(18, RD(5) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 29384); if (t) goto L_002827B0; }
SET64(31, 0x2827a4);  JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_002827FC;
L_002827B0:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_002827D0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2827c8); SET32(4, RW(4) + 29432); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_002827FC;
L_002827D0:;
SET64(31, 0x2827d8); SET64(4, RD(17) + RD(0)); JP_F_00281550(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x2827ec); SET64(16, RD(2) + RD(0)); JP_F_00281578(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x2827f8); SET64(4, RD(16) + RD(0)); JP_F_0029D448(c);
SET64(16, rd64(c, (RW(29) + 144)));
L_002827FC:;
SET64(17, rd64(c, (RW(29) + 152)));
L_00282800:;
SET64(18, rd64(c, (RW(29) + 160)));
SET64(31, rd64(c, (RW(29) + 168)));
SET32(29, RW(29) + 176); return;
}
void JP_F_00282770(Ctx *c) { JP_B_00282770(c, 0x282770); }
void JP_F_00282800(Ctx *c) { JP_B_00282770(c, 0x282800); }

void JP_F_00282810(Ctx *c) { /* func_00282810 */
ENTER(0x282810);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DDF0(c); return; }
}

void JP_F_00282828(Ctx *c) { /* func_00282828 */
ENTER(0x282828);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DE50(c); return; }
}

void JP_F_00282840(Ctx *c) { /* func_00282840 */
ENTER(0x282840);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DE10(c); return; }
}

void JP_F_00282858(Ctx *c) { /* func_00282858 */
ENTER(0x282858);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DE30(c); return; }
}

void JP_F_00282870(Ctx *c) { /* func_00282870 */
ENTER(0x282870);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00282828(c); return; }
}

void JP_F_00282888(Ctx *c) { /* func_00282888 */
ENTER(0x282888);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DE70(c); return; }
}

void JP_F_002828A0(Ctx *c) { /* func_002828A0 */
ENTER(0x2828a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DE90(c); return; }
}

void JP_F_002828B8(Ctx *c) { /* func_002828B8 */
ENTER(0x2828b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DEB0(c); return; }
}

void JP_F_002828D0(Ctx *c) { /* func_002828D0 */
ENTER(0x2828d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DED0(c); return; }
}

void JP_F_002828E8(Ctx *c) { /* func_002828E8 */
ENTER(0x2828e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DEF0(c); return; }
}

void JP_F_00282900(Ctx *c) { /* func_00282900 */
ENTER(0x282900);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DF10(c); return; }
}

void JP_F_00282918(Ctx *c) { /* func_00282918 */
ENTER(0x282918);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DF30(c); return; }
}

void JP_F_00282930(Ctx *c) { /* func_00282930 */
ENTER(0x282930);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DBA8(c); return; }
}

void JP_F_00282948(Ctx *c) { /* func_00282948 */
ENTER(0x282948);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DBB0(c); return; }
}

void JP_F_00282960(Ctx *c) { /* func_00282960 */
ENTER(0x282960);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DBB8(c); return; }
}

void JP_F_00282978(Ctx *c) { /* func_00282978 */
ENTER(0x282978);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DBC0(c); return; }
}

void JP_F_00282990(Ctx *c) { /* func_00282990 */
ENTER(0x282990);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029D8B8(c); return; }
}

void JP_F_002829A8(Ctx *c) { /* func_002829A8 */
ENTER(0x2829a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029D8C8(c); return; }
}

void JP_F_002829C0(Ctx *c) { /* func_002829C0 */
ENTER(0x2829c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2829dc); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00282A00; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 29480);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00282A00:;
SET64(31, 0x282a08);  JP_F_00281550(c);
SET64(5, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029DD38(c); return; }
}

void JP_F_00282A28(Ctx *c) { /* func_00282A28 */
ENTER(0x282a28);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x282a3c); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00282A68; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x282a50); SET32(4, RW(4) + 29528); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_00282A68:;
SET64(31, 0x282a70);  JP_F_00281550(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0029DD90(c); return; }
}

void JP_F_00282A88(Ctx *c) { /* func_00282A88 */
ENTER(0x282a88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x282a9c); SET64(16, RD(5) + RD(0)); JP_F_00281550(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { JP_F_0029D8F8(c); return; }
}

void JP_F_00282AB8(Ctx *c) { /* func_00282AB8 */
ENTER(0x282ab8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 80)));
{ int t = RD(2) != RD(0);  if (t) goto L_00282AFC; }
SET64(31, 0x282adc);  JP_F_0027E1F0(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + -1);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 17); if (t) goto L_00282AF8; }
wr32(c, (RW(16) + 84), RW(3)); goto L_00282AFC;
L_00282AF8:;
wr32(c, (RW(16) + 84), RW(2));
L_00282AFC:;
SET64(31, 0x282b04); SET64(4, RD(16) + RD(0)); JP_F_00281550(c);
SET64(5, (s32)rd32(c, (RW(16) + 84)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(2) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029D918(c); return; }
}

void JP_F_00282B20(Ctx *c) { /* func_00282B20 */
ENTER(0x282b20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x282b3c); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00282B60; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 29576);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00282B60:;
SET64(31, 0x282b68);  JP_F_00281550(c);
SET64(5, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029DBC8(c); return; }
}

void JP_F_00282B88(Ctx *c) { /* func_00282B88 */
ENTER(0x282b88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x282b9c); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00282BC8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x282bb0); SET32(4, RW(4) + 29632); JP_F_00284060(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_00282BC8:;
SET64(31, 0x282bd0);  JP_F_00281550(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0029DBD0(c); return; }
}

void JP_F_00282BE8(Ctx *c) { /* func_00282BE8 */
ENTER(0x282be8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029DDA8(c); return; }
}

void JP_F_00282C00(Ctx *c) { /* func_00282C00 */
ENTER(0x282c00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x282c1c); SET64(17, RD(4) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 29688); if (t) goto L_00282C40; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00282C40:;
if (RD(16) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 76))); goto L_00282C68; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 29736);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00282C68:;
SET64(31, 0x282c70); SET64(5, RD(16) + RD(0)); JP_F_00264AF0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
{ int t = RSD(2) >= 0; SET32(4, RW(4) + 29784); if (t) goto L_00282CA0; }
SET32(2, RW(0) + 4);
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(17) + 8), RW(2));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00282CA0:;
SET64(2, (s32)rd32(c, (RW(17) + 120)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) + 1);
SET64(31, rd64(c, (RW(29) + 16)));
wr32(c, (RW(17) + 120), RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00282CC0(Ctx *c) { /* func_00282CC0 */
ENTER(0x282cc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x282cd4); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
SET32(5, RW(0) + 1);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00282CF8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 29832);
SET32(29, RW(29) + 16); { JP_F_00284060(c); return; }
L_00282CF8:;
SET64(31, 0x282d00);  JP_F_00283320(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x282d0c); SET64(5, (s32)rd32(c, (RW(16) + 468))); JP_F_0027F4C8(c);
SET64(31, 0x282d14); SET64(4, RD(16) + RD(0)); JP_F_0027F7F8(c);
SET64(31, 0x282d1c); SET64(4, (s32)rd32(c, (RW(16) + 76))); JP_F_00264CF0(c);
SET64(2, (s32)rd32(c, (RW(16) + 464)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00282D38; }
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(3); SET64(31, 0x282d38);  rt_call(c, t); }
L_00282D38:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0027BA70(c); return; }
}

void JP_F_00282D50(Ctx *c) { /* func_00282D50 */
ENTER(0x282d50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x282d6c); SET64(17, RD(4) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 29888); if (t) goto L_00282D90; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00282D90:;
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00265248(c); return; }
}

void JP_F_00282DA8(Ctx *c) { /* func_00282DA8 */
ENTER(0x282da8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x282dc4); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 29936); if (t) goto L_00282DE8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00282DE8:;
{ int t = RD(17) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00282E10; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 29984);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00282E10:;
SET64(31, 0x282e18); SET64(4, RD(16) + RD(0)); JP_F_0027F8A8(c);
SET64(31, 0x282e20); SET64(4, (s32)rd32(c, (RW(16) + 76))); JP_F_00264D58(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x282e2c); SET64(5, (s32)rd32(c, (RW(16) + 440))); JP_F_00282C00(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x282e38); SET32(5, RW(0) + 1); JP_F_00282D50(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00282CC0(c); return; }
}

void JP_F_00282E50(Ctx *c) { /* func_00282E50 */
ENTER(0x282e50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x282e64); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00282E88; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 30032);
SET32(29, RW(29) + 16); { JP_F_00284060(c); return; }
L_00282E88:;
SET64(31, 0x282e90);  JP_F_00282D50(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00282EA8(c); return; }
}

void JP_F_00282EA8(Ctx *c) { /* func_00282EA8 */
ENTER(0x282ea8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x282ebc); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00282EE0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 30080);
SET32(29, RW(29) + 16); { JP_F_00284060(c); return; }
L_00282EE0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00283320(c); return; }
}

void JP_F_00282EF0(Ctx *c) { /* func_00282EF0 */
ENTER(0x282ef0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00264EB0(c); return; }
}

void JP_F_00282F08(Ctx *c) { /* func_00282F08 */
ENTER(0x282f08);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x282f2c); SET64(18, RD(6) + RD(0)); JP_F_00280600(c);
SET64(7, RD(29) + RD(0));
SET32(8, RW(29) + 4);
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
{ int t = RD(2) != RD(0); SET32(9, RW(29) + 8); if (t) goto L_00282F58; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x282f50); SET32(4, RW(4) + 30136); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00282FB0;
L_00282F58:;
SET64(6, (s32)rd32(c, (RW(17) + 440)));
SET64(31, 0x282f64); SET64(17, (s32)rd32(c, (RW(17) + 76))); JP_F_0024E828(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00282FA0; }
SET64(31, 0x282f7c);  JP_F_0024EA08(c);
SET64(4, RD(17) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET64(5, RD(2) + RD(0));
SET64(7, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x282f94); SET64(8, (s32)rd32(c, (RW(29) + 8))); JP_F_00264B18(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00282FB0;
L_00282FA0:;
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x282fac); SET32(4, RW(4) + 30184); JP_F_00284060(c);
SET64(16, rd64(c, (RW(29) + 16)));
L_00282FB0:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00282FC8(Ctx *c) { /* func_00282FC8 */
ENTER(0x282fc8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x282fec); SET64(18, RD(6) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 24))); if (t) goto L_00283010; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 30240);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00283010:;
SET64(31, 0x283018); SET64(4, (s32)rd32(c, (RW(16) + 76))); JP_F_00264D58(c);
SET64(4, RD(16) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x283028); SET64(5, RD(17) + RD(0)); JP_F_00282F08(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x283034); SET32(5, RW(0) + 1); JP_F_00282D50(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00282CC0(c); return; }
}

void JP_F_00283050(Ctx *c) { /* func_00283050 */
ENTER(0x283050);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28307c); SET64(19, RD(4) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
SET32(4, RW(4) + 30288);
SET64(7, RD(17) + RD(0));
SET64(8, RD(18) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_002830B8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00284060(c); return; }
L_002830B8:;
SET64(4, (s32)rd32(c, (RW(19) + 76)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00264B18(c); return; }
}

void JP_F_002830D8(Ctx *c) { /* func_002830D8 */
ENTER(0x2830d8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x283104); SET64(19, RD(7) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 30344); if (t) goto L_00283130; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00284060(c); return; }
L_00283130:;
SET64(31, 0x283138); SET64(4, (s32)rd32(c, (RW(16) + 76))); JP_F_00264D58(c);
SET64(4, RD(16) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(31, 0x28314c); SET64(5, RD(17) + RD(0)); JP_F_00283050(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x283158); SET32(5, RW(0) + 1); JP_F_00282D50(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00282CC0(c); return; }
}

