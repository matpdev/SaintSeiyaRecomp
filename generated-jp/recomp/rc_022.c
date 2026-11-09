#include "r5900.h"
#include "functab.h"

void JP_F_00283178(Ctx *c) { /* func_00283178 */
ENTER(0x283178);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x283194); SET64(17, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002831B0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2831a8); SET32(4, RW(4) + 30400); JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_00283208;
L_002831B0:;
SET64(31, 0x2831b8);  JP_F_00282EF0(c);
SET64(3, RSD(16) < RSD(2));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00283208; }
{ int t = RSD(16) >= 0; SET64(5, RD(16) + RD(0)); if (t) goto L_002831E0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x2831d8); SET32(4, RW(4) + 30448); JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_00283208;
L_002831E0:;
SET64(31, 0x2831e8); SET64(4, RD(17) + RD(0)); JP_F_00283238(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00283250(c); return; }
L_00283208:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00283220(Ctx *c) { /* func_00283220 */
ENTER(0x283220);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00264E80(c); return; }
}

void JP_F_00283238(Ctx *c) { /* func_00283238 */
ENTER(0x283238);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00264EE0(c); return; }
}

void JP_F_00283250(Ctx *c) { /* func_00283250 */
ENTER(0x283250);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00264F70(c); return; }
}

void JP_F_00283268(Ctx *c) { /* func_00283268 */
ENTER(0x283268);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00265008(c); return; }
}

void JP_F_00283280(Ctx *c) { /* func_00283280 */
ENTER(0x283280);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002650A0(c); return; }
}

void JP_F_00283298(Ctx *c) { /* func_00283298 */
ENTER(0x283298);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2832a8);  JP_F_00264E80(c);
SET64(2, RD(2) ^ 0x3);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002832C0(Ctx *c) { /* func_002832C0 */
ENTER(0x2832c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 76)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002832E0; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00265138(c); return; }
L_002832E0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002832F0(Ctx *c) { /* func_002832F0 */
ENTER(0x2832f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x283308); SET64(4, (s32)rd32(c, (RW(4) + 76))); JP_F_002651A0(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00283320(Ctx *c) { /* func_00283320 */
ENTER(0x283320);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28333c); SET64(17, RD(5) + RD(0)); JP_F_00280600(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 30488); if (t) goto L_00283360; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284060(c); return; }
L_00283360:;
SET64(2, (s8)rd8(c, (RW(16) + 116)));
{ int t = RD(2) != RD(3); SET64(4, (s32)rd32(c, (RW(16) + 64))); if (t) goto L_00283378; }
if (RD(17) == RD(0)) { wr8(c, (RW(16) + 117), (u8)RW(2)); goto L_00283374; }
L_00283374:;
SET64(2, (s8)rd8(c, (RW(16) + 116)));
L_00283378:;
if (RD(2) != RD(0)) { wr8(c, (RW(16) + 116), (u8)RW(17)); goto L_002833AC; }
SET32(2, RW(0) + 1);
if (RD(17) != RD(2)) { wr8(c, (RW(16) + 116), (u8)RW(17)); goto L_002833AC; }
SET64(31, 0x283394);  JP_F_00288A28(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 30536); if (t) goto L_002833A8; }
SET64(31, 0x2833a8);  JP_F_00284060(c);
L_002833A8:;
wr8(c, (RW(16) + 116), (u8)RW(17));
L_002833AC:;
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002833C0(Ctx *c) { /* func_002833C0 */
ENTER(0x2833c0);
SET32(29, RW(29) + -48);
SET64(2, RD(5) + RD(0));
SET32(7, RW(6) + 2047);
SET64(6, RD(2) + RD(0));
SET64(5, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 32), RD(16));
SET32(7, RW(7) >> 11);
SET32(5, RW(5) + 30584);
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x2833f0); SET64(4, RD(29) + RD(0)); JP_F_00129C30(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x2833fc); SET64(4, RD(16) + RD(0)); JP_F_00282DA8(c);
SET64(5, RD(0) + RD(0));
SET64(4, RD(29) + RD(0));
SET64(31, 0x28340c); SET32(6, RW(0) + 20); JP_F_001273D0(c);
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00283420(Ctx *c) { /* func_00283420 */
ENTER(0x283420);
SET32(29, RW(29) + -32);
SET64(4, RD(29) + RD(0));
SET32(5, RW(29) + 4);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x283438); SET32(6, RW(29) + 8); JP_F_00283498(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00283448(Ctx *c) { /* func_00283448 */
ENTER(0x283448);
SET32(29, RW(29) + -32);
SET64(4, RD(29) + RD(0));
SET32(5, RW(29) + 4);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x283460); SET32(6, RW(29) + 8); JP_F_00283498(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00283470(Ctx *c) { /* func_00283470 */
ENTER(0x283470);
SET32(29, RW(29) + -32);
SET64(4, RD(29) + RD(0));
SET32(5, RW(29) + 4);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x283488); SET32(6, RW(29) + 8); JP_F_002834C8(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00283498(Ctx *c) { /* func_00283498 */
ENTER(0x283498);
SET64(2, (s64)(s32)0x20000);
SET32(7, RW(0) + 2048);
SET64(2, RD(2) | 0x49e4);
SET64(3, RD(0) | 0x9c40);
wr32(c, (RW(4) + 0), RW(2));
wr32(c, (RW(5) + 0), RW(3));
wr32(c, (RW(6) + 0), RW(7));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) + RW(7)); return;
}

void JP_F_002834C8(Ctx *c) { /* func_002834C8 */
ENTER(0x2834c8);
SET64(2, (s64)(s32)0x60000);
SET64(3, (s64)(s32)0x10000);
SET32(7, RW(0) + 8192);
SET64(2, RD(2) | 0x952c);
SET64(3, RD(3) | 0x3c68);
wr32(c, (RW(4) + 0), RW(2));
wr32(c, (RW(5) + 0), RW(3));
wr32(c, (RW(6) + 0), RW(7));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) + RW(7)); return;
}

void JP_F_00283500(Ctx *c) { /* func_00283500 */
ENTER(0x283500);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00283518(c); return; }
}

void JP_F_00283518(Ctx *c) { /* func_00283518 */
ENTER(0x283518);
SET32(29, RW(29) + -48);
SET64(6, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(4) + 660);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(7, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(8, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(17, (s32)rd32(c, (RW(4) + 64)));
SET64(5, (s32)rd32(c, (RW(16) + 16)));
SET64(18, (s32)rd32(c, (RW(16) + 12)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x28355c); SET32(5, RW(5) + 192); JP_F_0028ACD8(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(19) + 192);
SET64(6, RD(18) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x283574); SET64(8, RD(0) + RD(0)); JP_F_0028ACD8(c);
wr32(c, (RW(16) + 16), RW(19));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00283598(Ctx *c) { /* func_00283598 */
ENTER(0x283598);
SET64(2, (s32)rd32(c, (RW(4) + 672))); return;
}

void JP_F_002835A0(Ctx *c) { /* func_002835A0 */
ENTER(0x2835a0);
SET64(2, (s32)rd32(c, (RW(4) + 680))); return;
}

static void JP_B_002835A8(Ctx *c, u32 entry) { /* func_002835A8 */
ENTER(entry);
switch (entry) { case 0x283600: goto L_00283600; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2835bc);  JP_F_00283C98(c);
SET64(31, 0x2835c4); SET64(16, RD(2) + RD(0)); JP_F_00283CA8(c);
SET64(3, RD(2) + RD(0));
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00283600; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00283600; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
if (RD(3) == RD(0)) { SET32(2, RW(2) + 1); goto L_002835F8; }
{ u32 t = RW(3); SET64(31, 0x2835f0);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET32(2, RW(2) + 1);
L_002835F8:;
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00283600:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}
void JP_F_002835A8(Ctx *c) { JP_B_002835A8(c, 0x2835a8); }
void JP_F_00283600(Ctx *c) { JP_B_002835A8(c, 0x283600); }

void JP_F_00283610(Ctx *c) { /* func_00283610 */
ENTER(0x283610);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x283624);  JP_F_00283C98(c);
SET64(31, 0x28362c); SET64(16, RD(2) + RD(0)); JP_F_00283CA8(c);
SET64(4, RD(2) + RD(0));
if (RD(4) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00283664; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0); SET32(3, RW(2) + -1); if (t) goto L_00283660; }
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 4), RW(3)); if (t) goto L_00283660; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00283664; }
{ u32 t = RW(2); SET64(31, 0x283660);  rt_call(c, t); }
L_00283660:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00283664:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00283670(Ctx *c) { /* func_00283670 */
ENTER(0x283670);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x283694); SET64(18, RD(6) + RD(0)); JP_F_00283CA8(c);
{ int t = RD(2) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_002836B8; }
SET64(2, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002836B8; }
SET64(5, RD(17) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2836b4); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) + RD(0));
L_002836B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(3) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002836D8(Ctx *c) { /* func_002836D8 */
ENTER(0x2836d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2836f4); SET64(17, RD(5) + RD(0)); JP_F_00283CA8(c);
{ int t = RD(2) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_00283714; }
SET64(2, (s32)rd32(c, (RW(2) + 12)));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00283714; }
{ u32 t = RW(2); SET64(31, 0x283710); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) + RD(0));
L_00283714:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(3) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00283730(Ctx *c) { /* func_00283730 */
ENTER(0x283730);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x283744); SET64(16, RD(4) + RD(0)); JP_F_00283CA8(c);
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028376C; }
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028376C; }
SET64(2, (s32)rd32(c, (RW(2) + 16)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028376C; }
{ u32 t = RW(2); SET64(31, 0x283768); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 0)));
L_0028376C:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00283778(Ctx *c) { /* func_00283778 */
ENTER(0x283778);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28378c); SET64(16, RD(4) + RD(0)); JP_F_00283CC8(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002837C4; }
SET64(31, 0x2837a0);  JP_F_00283CA8(c);
SET64(5, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_002837C0; }
SET64(2, (s32)rd32(c, (RW(2) + 20)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002837C4; }
{ u32 t = RW(2); SET64(31, 0x2837c0);  rt_call(c, t); }
L_002837C0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002837C4:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

static void JP_B_002837D0(Ctx *c, u32 entry) { /* func_002837D0 */
ENTER(entry);
switch (entry) { case 0x283800: goto L_00283800; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2837e4); SET64(16, RD(4) + RD(0)); JP_F_00283CC8(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00283818; }
SET64(31, 0x2837f8);  JP_F_00283CA8(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_00283814; }
L_00283800:;
SET64(2, (s32)rd32(c, (RW(2) + 24)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00283818; }
{ u32 t = RW(2); SET64(31, 0x283814);  rt_call(c, t); }
L_00283814:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00283818:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}
void JP_F_002837D0(Ctx *c) { JP_B_002837D0(c, 0x2837d0); }
void JP_F_00283800(Ctx *c) { JP_B_002837D0(c, 0x283800); }

void JP_F_00283828(Ctx *c) { /* func_00283828 */
ENTER(0x283828);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x283844); SET64(17, RD(0) + RD(0)); JP_F_00283CC8(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0028387C; }
SET64(31, 0x283858);  JP_F_00283CA8(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_00283878; }
SET64(2, (s32)rd32(c, (RW(2) + 28)));
if (RD(2) == RD(0)) { SET64(2, RD(17) + RD(0)); goto L_0028387C; }
{ u32 t = RW(2); SET64(31, 0x283874);  rt_call(c, t); }
SET64(17, RD(2) + RD(0));
L_00283878:;
SET64(2, RD(17) + RD(0));
L_0028387C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00283890(Ctx *c) { /* func_00283890 */
ENTER(0x283890);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2838b4); SET64(18, RD(6) + RD(0)); JP_F_00283CC8(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002838E8; }
SET64(31, 0x2838c8);  JP_F_00283CA8(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_002838E4; }
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ int t = RD(2) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002838E4; }
{ u32 t = RW(2); SET64(31, 0x2838e4); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
L_002838E4:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002838E8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00283900(Ctx *c) { /* func_00283900 */
ENTER(0x283900);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28391c); SET64(17, RD(5) + RD(0)); JP_F_00283CC8(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00283950; }
SET64(31, 0x283930);  JP_F_00283CA8(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_0028394C; }
SET64(2, (s32)rd32(c, (RW(2) + 36)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00283950; }
{ u32 t = RW(2); SET64(31, 0x28394c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_0028394C:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00283950:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00283960(Ctx *c) { /* func_00283960 */
ENTER(0x283960);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28397c); SET64(17, RD(5) + RD(0)); JP_F_00283CC8(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002839B0; }
SET64(31, 0x283990);  JP_F_00283CA8(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_002839AC; }
SET64(2, (s32)rd32(c, (RW(2) + 40)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002839B0; }
{ u32 t = RW(2); SET64(31, 0x2839ac); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_002839AC:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002839B0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002839C0(Ctx *c) { /* func_002839C0 */
ENTER(0x2839c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2839dc); SET64(17, RD(0) + RD(0)); JP_F_00283CC8(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00283A14; }
SET64(31, 0x2839f0);  JP_F_00283CA8(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_00283A10; }
SET64(2, (s32)rd32(c, (RW(2) + 44)));
if (RD(2) == RD(0)) { SET64(2, RD(17) + RD(0)); goto L_00283A14; }
{ u32 t = RW(2); SET64(31, 0x283a0c);  rt_call(c, t); }
SET64(17, RD(2) + RD(0));
L_00283A10:;
SET64(2, RD(17) + RD(0));
L_00283A14:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

static void JP_B_00283A28(Ctx *c, u32 entry) { /* func_00283A28 */
ENTER(entry);
switch (entry) { case 0x283aa0: goto L_00283AA0; }
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET32(18, RW(16) + 660);
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 56), RD(21));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x283a60); SET64(20, RD(7) + RD(0)); JP_F_00283CA8(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00283B28; }
SET64(31, 0x283a70);  JP_F_002835A8(c);
SET64(21, (s32)rd32(c, (RW(16) + 64)));
wr32(c, (RW(18) + 8), RW(17));
SET64(4, RD(29) + RD(0));
wr32(c, (RW(18) + 4), RW(19));
SET32(5, RW(29) + 4);
wr32(c, (RW(18) + 16), RW(20));
SET64(31, 0x283a90); SET32(6, RW(29) + 8); JP_F_00283670(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 30600); if (t) goto L_00283B00; }
L_00283AA0:;
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(6, (s32)rd32(c, (RW(29) + 8)));
SET64(31, 0x283ab4); SET32(4, RW(19) + RW(4)); JP_F_00269A78(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(0); SET64(4, RD(19) + RD(0)); if (t) goto L_00283AD0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 30648); goto L_00283B00;
L_00283AD0:;
wr32(c, (RW(18) + 12), RW(17));
SET64(31, 0x283adc); SET64(5, (s32)rd32(c, (RW(29) + 0))); JP_F_002836D8(c);
SET64(4, RD(21) + RD(0));
SET64(16, RD(2) + RD(0));
SET32(5, RW(20) + 192);
SET64(6, RD(17) + RD(0));
SET64(7, RD(0) + RD(0));
{ int t = RD(16) != RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_00283B10; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 30688);
L_00283B00:;
SET64(31, 0x283b08);  JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_00283B24;
L_00283B10:;
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 20), RW(16));
SET64(31, 0x283b20); wr32(c, (RW(18) + 0), RW(2)); JP_F_0028ACD8(c);
SET64(2, RD(16) + RD(0));
L_00283B24:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00283B28:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}
void JP_F_00283A28(Ctx *c) { JP_B_00283A28(c, 0x283a28); }
void JP_F_00283AA0(Ctx *c) { JP_B_00283A28(c, 0x283aa0); }

void JP_F_00283B48(Ctx *c) { /* func_00283B48 */
ENTER(0x283b48);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(4) + 660);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x283b6c); SET64(19, (s32)rd32(c, (RW(4) + 64))); JP_F_00283CA8(c);
SET64(4, RD(16) + RD(0));
SET64(18, (s32)rd32(c, (RW(16) + 20)));
SET64(17, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x283b80); SET64(16, (s32)rd32(c, (RW(16) + 16))); JP_F_00283CC8(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00283BE0; }
if (RD(18) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_00283BA0; }
SET64(31, 0x283b9c); SET64(4, RD(18) + RD(0)); JP_F_002837D0(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_00283BA0:;
SET64(2, (s32)rd32(c, (RW(3) + 20)));
{ u32 t = RW(2); SET64(31, 0x283bac); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(19) + RD(0));
SET32(5, RW(16) + 192);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(7, RD(0) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(8, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0028ACD8(c); return; }
L_00283BE0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

static void JP_B_00283BF8(Ctx *c, u32 entry) { /* func_00283BF8 */
ENTER(entry);
switch (entry) { case 0x283c00: goto L_00283C00; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
L_00283C00:;
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x283c14); SET64(17, RD(4) + RD(0)); JP_F_00283CC8(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00283C84; }
SET64(31, 0x283c28);  JP_F_00283CA8(c);
SET64(16, (s32)rd32(c, (RW(17) + 20)));
{ int t = RD(16) == RD(0); SET64(18, (s32)rd32(c, (RW(17) + 12))); if (t) goto L_00283C80; }
SET64(31, 0x283c3c);  JP_F_002840F8(c);
SET64(31, 0x283c44); SET64(4, RD(16) + RD(0)); JP_F_002837D0(c);
wr32(c, (RW(17) + 0), RW(0));
SET64(31, 0x283c50); SET64(4, RD(16) + RD(0)); JP_F_00283730(c);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x283c60); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 20), RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00283610(c); return; }
L_00283C80:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00283C84:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}
void JP_F_00283BF8(Ctx *c) { JP_B_00283BF8(c, 0x283bf8); }
void JP_F_00283C00(Ctx *c) { JP_B_00283BF8(c, 0x283c00); }

void JP_F_00283C98(Ctx *c) { /* func_00283C98 */
ENTER(0x283c98);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 24832); return;
}

void JP_F_00283CA8(Ctx *c) { /* func_00283CA8 */
ENTER(0x283ca8);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + 24832))); return;
}

void JP_F_00283CB8(Ctx *c) { /* func_00283CB8 */
ENTER(0x283cb8);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 24832), RW(4)); return;
}

void JP_F_00283CC8(Ctx *c) { /* func_00283CC8 */
ENTER(0x283cc8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x283cdc); SET64(16, RD(4) + RD(0)); JP_F_00283CA8(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 1); if (t) goto L_00283CF8; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) != RD(4); SET64(2, RD(0) + RD(0)); if (t) goto L_00283CF8; }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(2, RD(0) < RD(2));
L_00283CF8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00283D08(Ctx *c) { /* func_00283D08 */
ENTER(0x283d08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283d18);  JP_F_0026CB88(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
SET64(4, (s64)(s32)0x540000);
SET64(5, (s64)(s32)0x540000);
wr32(c, (RW(2) + -22912), RW(0));
wr32(c, (RW(3) + -22908), RW(0));
wr32(c, (RW(4) + -22904), RW(0));
wr32(c, (RW(5) + -22900), RW(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00283D48(Ctx *c) { /* func_00283D48 */
ENTER(0x283d48);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CBC8(c); return; }
}

void JP_F_00283D60(Ctx *c) { /* func_00283D60 */
ENTER(0x283d60);
SET64(2, RD(4) + RD(0));
SET64(4, RD(0) + RD(0));
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283d7c); SET64(5, RD(2) + RD(0)); JP_F_0026C4A8(c);
SET64(3, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + -22912), RW(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00283D90(Ctx *c) { /* func_00283D90 */
ENTER(0x283d90);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -22912)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C5B0(c); return; }
}

void JP_F_00283DB0(Ctx *c) { /* func_00283DB0 */
ENTER(0x283db0);
SET64(2, RD(4) + RD(0));
SET32(4, RW(0) + 2);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283dcc); SET64(5, RD(2) + RD(0)); JP_F_0026C4A8(c);
SET64(3, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + -22908), RW(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00283DE0(Ctx *c) { /* func_00283DE0 */
ENTER(0x283de0);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(7, RD(6) + RD(0));
SET32(4, RW(0) + 2);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x283e08); SET64(6, RD(2) + RD(0)); JP_F_0026C670(c);
SET64(2, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(2) + -22908), RW(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00283E20(Ctx *c) { /* func_00283E20 */
ENTER(0x283e20);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(0) + 2);
SET64(5, (s32)rd32(c, (RW(2) + -22908)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C5B0(c); return; }
}

void JP_F_00283E40(Ctx *c) { /* func_00283E40 */
ENTER(0x283e40);
SET64(2, RD(4) + RD(0));
SET32(4, RW(0) + 6);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283e5c); SET64(5, RD(2) + RD(0)); JP_F_0026C4A8(c);
SET64(3, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + -22904), RW(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00283E70(Ctx *c) { /* func_00283E70 */
ENTER(0x283e70);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(0) + 6);
SET64(5, (s32)rd32(c, (RW(2) + -22904)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C5B0(c); return; }
}

void JP_F_00283E90(Ctx *c) { /* func_00283E90 */
ENTER(0x283e90);
SET64(2, RD(4) + RD(0));
SET32(4, RW(0) + 5);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283eac); SET64(5, RD(2) + RD(0)); JP_F_0026C4A8(c);
SET64(3, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + -22900), RW(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00283EC0(Ctx *c) { /* func_00283EC0 */
ENTER(0x283ec0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(0) + 5);
SET64(5, (s32)rd32(c, (RW(2) + -22900)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C5B0(c); return; }
}

void JP_F_00283EE0(Ctx *c) { /* func_00283EE0 */
ENTER(0x283ee0);
SET64(4, (s64)(s32)0x280000);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283ef8); SET32(4, RW(4) + 16184); JP_F_0026CCC8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s64)(s32)0x280000);
SET32(4, RW(4) + 16208);
SET64(5, RD(0) + RD(0));
SET32(29, RW(29) + 16); { JP_F_0026CCE0(c); return; }
}

void JP_F_00283F10(Ctx *c) { /* func_00283F10 */
ENTER(0x283f10);
SET32(29, RW(29) + -16);
SET64(4, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283f24); SET64(5, RD(0) + RD(0)); JP_F_0026CCC8(c);
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(29, RW(29) + 16); { JP_F_0026CCE0(c); return; }
}

void JP_F_00283F38(Ctx *c) { /* func_00283F38 */
ENTER(0x283f38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00280020(c); return; }
}

void JP_F_00283F50(Ctx *c) { /* func_00283F50 */
ENTER(0x283f50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00280038(c); return; }
}

void JP_F_00283F68(Ctx *c) { /* func_00283F68 */
ENTER(0x283f68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283f78);  JP_F_0026C098(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00283F88(Ctx *c) { /* func_00283F88 */
ENTER(0x283f88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C110(c); return; }
}

void JP_F_00283FA0(Ctx *c) { /* func_00283FA0 */
ENTER(0x283fa0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283fb0);  JP_F_0026C0B0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00283FC0(Ctx *c) { /* func_00283FC0 */
ENTER(0x283fc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C128(c); return; }
}

void JP_F_00283FD8(Ctx *c) { /* func_00283FD8 */
ENTER(0x283fd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283fe8);  JP_F_0026C0C8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00283FF8(Ctx *c) { /* func_00283FF8 */
ENTER(0x283ff8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C140(c); return; }
}

void JP_F_00284010(Ctx *c) { /* func_00284010 */
ENTER(0x284010);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x284020);  JP_F_0026C0E0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00284030(Ctx *c) { /* func_00284030 */
ENTER(0x284030);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C158(c); return; }
}

void JP_F_00284048(Ctx *c) { /* func_00284048 */
ENTER(0x284048);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026CC20(c); return; }
}

void JP_F_00284060(Ctx *c) { /* func_00284060 */
ENTER(0x284060);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x540000);
SET32(16, RW(16) + -23168);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 72), RD(5));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 80), RD(6));
SET32(6, RW(0) + 256);
SET64(17, RD(4) + RD(0));
SET64(4, RD(16) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 88), RD(7));
wr64(c, (RW(29) + 96), RD(8));
wr64(c, (RW(29) + 104), RD(9));
wr64(c, (RW(29) + 112), RD(10));
wr64(c, (RW(29) + 120), RD(11));
wr32(c, (RW(29) + 40), c->f[12].u);
wr32(c, (RW(29) + 44), c->f[13].u);
wr32(c, (RW(29) + 48), c->f[14].u);
wr32(c, (RW(29) + 52), c->f[15].u);
wr32(c, (RW(29) + 56), c->f[16].u);
wr32(c, (RW(29) + 60), c->f[17].u);
wr32(c, (RW(29) + 64), c->f[18].u);
SET64(31, 0x2840c8); wr32(c, (RW(29) + 68), c->f[19].u); JP_F_001273D0(c);
SET32(6, RW(29) + 72);
SET64(5, RD(17) + RD(0));
SET64(31, 0x2840d8); SET64(4, RD(16) + RD(0)); JP_F_0012EAC8(c);
SET64(31, 0x2840e0); SET64(4, RD(16) + RD(0)); JP_F_00284128(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 128); return;
}

void JP_F_002840F8(Ctx *c) { /* func_002840F8 */
ENTER(0x2840f8);
SET32(29, RW(29) + -16);
SET32(4, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C7F0(c); return; }
}

void JP_F_00284110(Ctx *c) { /* func_00284110 */
ENTER(0x284110);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00250718(c); return; }
}

void JP_F_00284128(Ctx *c) { /* func_00284128 */
ENTER(0x284128);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C240(c); return; }
}

void JP_F_00284140(Ctx *c) { /* func_00284140 */
ENTER(0x284140);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x284150);  JP_F_00297638(c);
SET64(2, RD(2) ^ 0x1);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284168(Ctx *c) { /* func_00284168 */
ENTER(0x284168);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 100)));
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00284188; }
SET32(29, RW(29) + 16); { JP_F_00284190(c); return; }
L_00284188:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00284190(Ctx *c) { /* func_00284190 */
ENTER(0x284190);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(0) + RD(0));
SET64(2, RSD(17) < (s64)10);
L_002841B0:;
{ int t = RD(2) == RD(0); SET32(17, RW(17) + 1); if (t) goto L_002841E4; }
SET32(5, RW(0) + 1);
SET64(31, 0x2841c4); SET64(4, RD(16) + RD(0)); JP_F_00284CD0(c);
SET64(31, 0x2841cc);  JP_F_002511B0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2841d8); SET64(5, RD(0) + RD(0)); JP_F_00284CD0(c);
SET64(2, (s32)rd32(c, (RW(16) + 100)));
{ int t = RD(2) != RD(0); SET64(2, RSD(17) < (s64)10); if (t) { POLL(); goto L_002841B0; } }
L_002841E4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

static void JP_B_002841F8(Ctx *c, u32 entry) { /* func_002841F8 */
ENTER(entry);
switch (entry) { case 0x284200: goto L_00284200; }
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
L_00284200:;
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(17, (s32)rd32(c, (RW(16) + 448)));
{ int t = RD(17) != RD(2); SET64(18, (s32)rd32(c, (RW(16) + 64))); if (t) goto L_00284230; }
SET64(31, 0x284228);  JP_F_00284458(c);
if (RD(2) == RD(17)) { wr32(c, (RW(16) + 448), RW(0)); goto L_00284230; }
L_00284230:;
SET64(31, 0x284238); SET64(4, RD(16) + RD(0)); JP_F_002842B0(c);
SET64(31, 0x284240); SET64(4, RD(18) + RD(0)); JP_F_00297650(c);
SET64(4, RD(16) + RD(0));
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET32(5, RW(0) + 6); if (t) goto L_0028425C; }
if (RD(3) != RD(5)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00284280; }
L_0028425C:;
SET32(2, RW(0) + 2);
SET64(17, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 8), RW(2));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00284298(c); return; }
L_00284280:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}
void JP_F_002841F8(Ctx *c) { JP_B_002841F8(c, 0x2841f8); }
void JP_F_00284200(Ctx *c) { JP_B_002841F8(c, 0x284200); }

void JP_F_00284298(Ctx *c) { /* func_00284298 */
ENTER(0x284298);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00282AB8(c); return; }
}

void JP_F_002842B0(Ctx *c) { /* func_002842B0 */
ENTER(0x2842b0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 660)));
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_002842D0; }
SET32(29, RW(29) + 16); { JP_F_002842D8(c); return; }
L_002842D0:;
SET32(29, RW(29) + 16); { JP_F_002843D0(c); return; }
}

void JP_F_002842D8(Ctx *c) { /* func_002842D8 */
ENTER(0x2842d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(17) + 660);
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2842fc); SET64(4, (s32)rd32(c, (RW(17) + 64))); JP_F_00297650(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x284308); SET64(16, RD(2) + RD(0)); JP_F_00283828(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 3);
if (RD(16) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002843B8; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_00284340; }
SET64(4, (s32)rd32(c, (RW(18) + 12)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x284338); SET32(5, RW(0) + 1); rt_call(c, t); }
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_002843B8; }
L_00284340:;
SET64(31, 0x284348); SET64(4, RD(17) + RD(0)); JP_F_0027F0D8(c);
SET64(3, (s8)rd8(c, (RW(17) + 118)));
if (RD(3) != RD(0)) { SET64(3, (s8)rd8(c, (RW(17) + 116))); goto L_00284364; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x284360); SET64(5, RD(0) + RD(0)); JP_F_0027F648(c);
SET64(3, (s8)rd8(c, (RW(17) + 116)));
L_00284364:;
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(2, (s8)rd8(c, (RW(17) + 118))); goto L_00284390; }
SET64(31, 0x284378); SET64(4, (s32)rd32(c, (RW(17) + 64))); JP_F_00288A28(c);
if (RD(2) == RD(0)) { SET64(2, (s8)rd8(c, (RW(17) + 118))); goto L_00284390; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x28438c); SET32(4, RW(4) + 30736); JP_F_00284060(c);
SET64(2, (s8)rd8(c, (RW(17) + 118)));
L_00284390:;
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_002843B8; }
SET64(4, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00283900(c); return; }
L_002843B8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

static void JP_B_002843D0(Ctx *c, u32 entry) { /* func_002843D0 */
ENTER(entry);
switch (entry) { case 0x284420: goto L_00284420; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2843e8); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_00297650(c);
SET32(3, RW(0) + 3);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00284448; }
SET64(31, 0x2843fc);  JP_F_0027F0D8(c);
SET64(3, (s8)rd8(c, (RW(16) + 118)));
SET64(4, RD(16) + RD(0));
{ int t = RD(3) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00284414; }
SET64(31, 0x284414);  JP_F_0027F648(c);
L_00284414:;
SET64(3, (s8)rd8(c, (RW(16) + 116)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028444C; }
if (0) { L_00284420:; SET64(16, rd64(c, (RW(29) + 0))); }
SET64(31, 0x28442c); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_00288A28(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 30736); if (t) goto L_00284448; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00284060(c); return; }
L_00284448:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028444C:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}
void JP_F_002843D0(Ctx *c) { JP_B_002843D0(c, 0x2843d0); }
void JP_F_00284420(Ctx *c) { JP_B_002843D0(c, 0x284420); }

void JP_F_00284458(Ctx *c) { /* func_00284458 */
ENTER(0x284458);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x284470); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_002850D0(c);
SET32(3, RW(0) + 2);
if (RD(2) != RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 464))); goto L_00284488; }
SET32(2, RW(0) + -1); goto L_00284504;
L_00284488:;
if (RD(4) == RD(0)) { SET64(5, (s32)rd32(c, (RW(16) + 440))); goto L_002844A4; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 20)));
{ u32 t = RW(2); SET64(31, 0x2844a0);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 440)));
L_002844A4:;
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(6, (s32)rd32(c, (RW(16) + 452)));
SET64(7, (s32)rd32(c, (RW(16) + 456)));
SET64(31, 0x2844b8); SET64(8, (s32)rd32(c, (RW(16) + 460))); JP_F_00284FF0(c);
SET64(31, 0x2844c0); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_00285068(c);
SET32(3, RW(0) + -1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_002844F8; }
SET32(2, RW(0) + 4);
SET32(4, RW(0) + -102);
SET64(31, 0x2844dc); wr32(c, (RW(16) + 8), RW(2)); JP_F_0027EC38(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(16) + 440)));
SET64(31, 0x2844ec); SET32(4, RW(4) + 30784); JP_F_00284060(c);
wr32(c, (RW(16) + 448), RW(0));
SET32(2, RW(0) + -1); goto L_00284504;
L_002844F8:;
SET64(31, 0x284500);  JP_F_0027BA70(c);
SET32(2, RW(0) + 1);
L_00284504:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284518(Ctx *c) { /* func_00284518 */
ENTER(0x284518);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s8)rd8(c, (RW(16) + 117)));
{ int t = RD(2) != RD(3); SET64(17, (s32)rd32(c, (RW(16) + 64))); if (t) goto L_00284570; }
SET64(31, 0x284544); SET64(4, (s32)rd32(c, (RW(16) + 76))); JP_F_00264EB0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00284578; }
SET64(31, 0x284554); SET64(4, RD(17) + RD(0)); JP_F_002961D8(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 30832); if (t) goto L_00284568; }
SET64(31, 0x284568);  JP_F_00284060(c);
L_00284568:;
wr8(c, (RW(16) + 117), (u8)RW(0)); goto L_00284578;
L_00284570:;
SET64(31, 0x284578);  JP_F_0027F850(c);
L_00284578:;
SET64(31, 0x284580); SET64(4, RD(17) + RD(0)); JP_F_00297650(c);
SET32(3, RW(0) + 6);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00284598; }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 8), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00284598:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

static void JP_B_002845A8(Ctx *c, u32 entry) { /* func_002845A8 */
ENTER(entry);
switch (entry) { case 0x2845e0: goto L_002845E0; case 0x2845f0: goto L_002845F0; case 0x2845f8: goto L_002845F8; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, RD(3) < (u64)(s64)5);
{ int t = RD(2) == RD(0); SET32(2, RW(3) << 2); if (t) goto L_002845F8; }
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 30880)));
{ u32 t = RW(3);  switch (t) { case 0x2845e0: goto L_002845E0; case 0x2845f0: goto L_002845F0; case 0x2845f8: goto L_002845F8; default: rt_jump(c, t); return; } }
L_002845E0:;
SET64(31, 0x2845e8); SET64(4, RD(16) + RD(0)); JP_F_002841F8(c);
 goto L_002845F8;
L_002845F0:;
SET64(31, 0x2845f8); SET64(4, RD(16) + RD(0)); JP_F_00284518(c);
L_002845F8:;
SET64(31, 0x284600); SET64(4, RD(16) + RD(0)); JP_F_00284620(c);
SET64(31, 0x284608); SET64(4, RD(16) + RD(0)); JP_F_00280060(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}
void JP_F_002845A8(Ctx *c) { JP_B_002845A8(c, 0x2845a8); }
void JP_F_002845E0(Ctx *c) { JP_B_002845A8(c, 0x2845e0); }
void JP_F_002845F0(Ctx *c) { JP_B_002845A8(c, 0x2845f0); }
void JP_F_002845F8(Ctx *c) { JP_B_002845A8(c, 0x2845f8); }

void JP_F_00284620(Ctx *c) { /* func_00284620 */
ENTER(0x284620);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 68)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00284650; }
SET64(31, 0x284644);  JP_F_00284EB8(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_00284650; }
wr32(c, (RW(16) + 8), RW(2));
L_00284650:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
if (RD(4) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028467C; }
SET64(31, 0x284664);  JP_F_00283298(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028467C; }
SET32(2, RW(0) + 4);
wr32(c, (RW(16) + 8), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_0028467C:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284688(Ctx *c) { /* func_00284688 */
ENTER(0x284688);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28469c); SET64(16, RD(4) + RD(0)); JP_F_00250708(c);
SET32(3, RW(0) + 1);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(3); SET64(5, RD(0) + RD(0)); if (t) goto L_002846B8; }
SET64(31, 0x2846b4);  JP_F_002847D8(c);
SET64(5, RD(2) + RD(0));
L_002846B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(5) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002846D0(Ctx *c) { /* func_002846D0 */
ENTER(0x2846d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2846f0); SET64(17, RD(0) + RD(0)); JP_F_00250708(c);
SET64(18, RD(2) + RD(0));
SET32(2, RW(0) + 1);
{ int t = RD(18) != RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_00284720; }
SET64(31, 0x284708);  JP_F_002847B8(c);
{ int t = RD(2) != RD(18); SET64(4, RD(16) + RD(0)); if (t) goto L_00284734; }
SET64(31, 0x284718);  JP_F_002849B8(c);
SET64(17, RD(2) + RD(0)); goto L_00284734;
L_00284720:;
SET64(31, 0x284728);  JP_F_002847D8(c);
SET64(31, 0x284730); SET64(4, RD(16) + RD(0)); JP_F_002849B8(c);
SET64(17, RD(2) + RD(0));
L_00284734:;
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00284750(Ctx *c) { /* func_00284750 */
ENTER(0x284750);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x284770); SET64(18, RD(0) + RD(0)); JP_F_00250708(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 1);
if (RD(16) != RD(2)) { SET64(2, RD(18) + RD(0)); goto L_002847A0; }
SET64(31, 0x284788);  JP_F_002847B8(c);
{ int t = RD(2) == RD(16); SET64(4, RD(17) + RD(0)); if (t) goto L_0028479C; }
SET64(31, 0x284798);  JP_F_002849B8(c);
SET64(18, RD(2) + RD(0));
L_0028479C:;
SET64(2, RD(18) + RD(0));
L_002847A0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002847B8(Ctx *c) { /* func_002847B8 */
ENTER(0x2847b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2847c8);  JP_F_0027E770(c);
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002847D8(Ctx *c) { /* func_002847D8 */
ENTER(0x2847d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2847e8);  JP_F_002847F8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_002847F8(Ctx *c) { /* func_002847F8 */
ENTER(0x2847f8);
SET32(29, RW(29) + -32);
SET64(5, (s64)(s32)0x410000);
wr64(c, (RW(29) + 8), RD(17));
SET64(6, (s64)(s32)0x410000);
wr64(c, (RW(29) + 16), RD(18));
SET32(5, RW(5) + 24840);
wr64(c, (RW(29) + 0), RD(16));
SET32(6, RW(6) + 24844);
wr64(c, (RW(29) + 24), RD(31));
SET64(4, (s64)(s32)0x410000);
SET32(18, RW(4) + 19124);
SET32(4, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(2, (s32)rd32(c, (RW(6) + 0)));
SET64(17, (s32)rd32(c, (RW(18) + 0)));
SET32(3, RW(3) + 1);
SET32(2, RW(2) + 1);
wr32(c, (RW(5) + 0), RW(3));
wr32(c, (RW(6) + 0), RW(2));
if (RD(17) != RD(4)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00284884; }
SET64(31, 0x284854);  JP_F_0027E770(c);
SET32(16, RW(2) + 92);
SET64(31, 0x284860); SET64(4, RD(16) + RD(0)); JP_F_00284048(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00284884; }
SET64(2, (s32)rd32(c, (RW(18) + 0)));
if (RD(2) != RD(17)) { wr32(c, (RW(16) + 0), RW(0)); goto L_00284880; }
SET64(31, 0x28487c);  JP_F_00294448(c);
wr32(c, (RW(16) + 0), RW(0));
L_00284880:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00284884:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00284898(Ctx *c) { /* func_00284898 */
ENTER(0x284898);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2848c4); SET64(19, RD(6) + RD(0)); JP_F_0027E770(c);
wr32(c, (RW(2) + 76), RW(16));
wr32(c, (RW(2) + 64), RW(17));
wr32(c, (RW(2) + 68), RW(18));
wr32(c, (RW(2) + 72), RW(19));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002848F0(Ctx *c) { /* func_002848F0 */
ENTER(0x2848f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x284900);  JP_F_0027E770(c);
SET64(3, (s32)rd32(c, (RW(2) + 64)));
{ int t = RD(3) == RD(0); SET64(4, (s32)rd32(c, (RW(2) + 68))); if (t) goto L_00284914; }
{ u32 t = RW(3); SET64(31, 0x284914);  rt_call(c, t); }
L_00284914:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284920(Ctx *c) { /* func_00284920 */
ENTER(0x284920);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x284930);  JP_F_0027E770(c);
SET64(3, (s32)rd32(c, (RW(2) + 72)));
{ int t = RD(3) == RD(0); SET64(4, (s32)rd32(c, (RW(2) + 76))); if (t) goto L_00284944; }
{ u32 t = RW(3); SET64(31, 0x284944);  rt_call(c, t); }
L_00284944:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284950(Ctx *c) { /* func_00284950 */
ENTER(0x284950);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28496c); SET64(17, RD(4) + RD(0)); JP_F_0027E770(c);
wr32(c, (RW(2) + 84), RW(16));
wr32(c, (RW(2) + 80), RW(17));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00284988(Ctx *c) { /* func_00284988 */
ENTER(0x284988);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x284998);  JP_F_0027E770(c);
SET64(3, (s32)rd32(c, (RW(2) + 80)));
{ int t = RD(3) == RD(0); SET64(4, (s32)rd32(c, (RW(2) + 84))); if (t) goto L_002849AC; }
{ u32 t = RW(3); SET64(31, 0x2849ac);  rt_call(c, t); }
L_002849AC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002849B8(Ctx *c) { /* func_002849B8 */
ENTER(0x2849b8);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -32);
SET64(3, (s32)rd32(c, (RW(2) + 19124)));
SET64(2, RD(0) + RD(0));
SET32(4, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(3) != RD(4); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00284A68; }
SET64(31, 0x2849e4);  JP_F_0027E770(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x2849f0); SET32(4, RW(16) + 88); JP_F_00284048(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00284A6C; }
SET64(31, 0x284a00); SET32(16, RW(16) + 108); JP_F_002848F0(c);
SET32(17, RW(0) + 7);
L_00284A08:;
if (RD(16) == RD(0)) { SET32(17, RW(17) + -1); goto L_00284A1C; }
SET64(31, 0x284a18); SET64(4, RD(16) + RD(0)); JP_F_00284A80(c);
SET32(17, RW(17) + -1);
L_00284A1C:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 696); if (t) { POLL(); goto L_00284A08; } }
SET64(4, RD(0) + RD(0));
SET64(31, 0x284a30); SET32(17, RW(0) + 1); JP_F_00284C18(c);
SET64(31, 0x284a38);  JP_F_00294490(c);
SET64(2, RD(2) ^ RD(17));
SET64(31, 0x284a44); SET64(16, RD(0) < RD(2)); JP_F_00284920(c);
{ int t = RD(16) != RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_00284A68; }
SET64(31, 0x284a54);  JP_F_00284D10(c);
{ int t = RD(2) == RD(17); SET64(2, RD(16) + RD(0)); if (t) goto L_00284A68; }
SET64(31, 0x284a64);  JP_F_00284988(c);
SET64(2, RD(16) + RD(0));
L_00284A68:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00284A6C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00284A80(Ctx *c) { /* func_00284A80 */
ENTER(0x284a80);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -32);
SET64(5, (s32)rd32(c, (RW(2) + 19124)));
SET64(2, RD(0) + RD(0));
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(4) + RD(0));
{ int t = RD(5) != RD(3); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00284B08; }
{ int t = RD(17) != RD(0);  if (t) goto L_00284AC8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x284abc); SET32(4, RW(4) + 30904); JP_F_00284060(c);
L_00284ABC:;
SET64(2, RD(0) + RD(0)); goto L_00284B08;
L_00284AC8:;
SET64(16, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(16) != RD(5); SET64(2, RD(0) + RD(0)); if (t) goto L_00284B08; }
SET64(31, 0x284adc);  JP_F_00284C68(c);
if (RD(2) == RD(16)) { SET64(2, RD(0) + RD(0)); goto L_00284B08; }
SET64(31, 0x284aec);  JP_F_00284D10(c);
{ int t = RD(2) == RD(16); SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_00284ABC; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00284B20(c); return; }
L_00284B08:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00284B20(Ctx *c) { /* func_00284B20 */
ENTER(0x284b20);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x284b44); SET64(18, (s32)rd32(c, (RW(16) + 64))); JP_F_00284C60(c);
SET64(17, (s32)rd32(c, (RW(16) + 4)));
SET32(2, RW(0) + 1);
SET32(5, RW(0) + 1);
{ int t = RD(17) == RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_00284B68; }
SET64(31, 0x284b60); SET64(5, RD(0) + RD(0)); JP_F_00284C60(c);
SET64(2, RD(0) + RD(0)); goto L_00284BC4;
L_00284B68:;
SET64(2, (s64)(s32)0x410000);
SET64(31, 0x284b74); wr32(c, (RW(2) + 24848), RW(16)); JP_F_00284C70(c);
SET64(31, 0x284b7c); SET64(4, RD(18) + RD(0)); JP_F_002944F8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x284b88); SET64(5, RD(0) + RD(0)); JP_F_00284C70(c);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00284BA0; }
wr32(c, (RW(16) + 108), RW(0)); goto L_00284BAC;
L_00284BA0:;
SET64(31, 0x284ba8); wr32(c, (RW(16) + 108), RW(17)); JP_F_002845A8(c);
SET64(4, RD(16) + RD(0));
L_00284BAC:;
SET64(31, 0x284bb4); SET64(5, RD(0) + RD(0)); JP_F_00284C60(c);
SET64(31, 0x284bbc); SET64(4, RD(18) + RD(0)); JP_F_00294468(c);
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(0) < RD(2));
L_00284BC4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00284BE0(Ctx *c) { /* func_00284BE0 */
ENTER(0x284be0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x284bf0);  JP_F_002847F8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284C00(Ctx *c) { /* func_00284C00 */
ENTER(0x284c00);
SET32(29, RW(29) + -16);
SET64(4, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002849B8(c); return; }
}

void JP_F_00284C18(Ctx *c) { /* func_00284C18 */
ENTER(0x284c18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x284c2c); SET64(16, RD(4) + RD(0)); JP_F_0027E770(c);
wr32(c, (RW(2) + 88), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284C40(Ctx *c) { /* func_00284C40 */
ENTER(0x284c40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x284c50);  JP_F_0027E770(c);
SET64(2, (s32)rd32(c, (RW(2) + 88)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284C60(Ctx *c) { /* func_00284C60 */
ENTER(0x284c60);
wr32(c, (RW(4) + 100), RW(5)); return;
}

void JP_F_00284C68(Ctx *c) { /* func_00284C68 */
ENTER(0x284c68);
SET64(2, (s32)rd32(c, (RW(4) + 100))); return;
}

void JP_F_00284C70(Ctx *c) { /* func_00284C70 */
ENTER(0x284c70);
wr32(c, (RW(4) + 104), RW(5)); return;
}

void JP_F_00284C78(Ctx *c) { /* func_00284C78 */
ENTER(0x284c78);
SET64(2, (s32)rd32(c, (RW(4) + 104))); return;
}

void JP_F_00284C80(Ctx *c) { /* func_00284C80 */
ENTER(0x284c80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x284c94); SET64(16, RD(4) + RD(0)); JP_F_00280600(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00284CB0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x284ca8); SET32(4, RW(4) + 30944); JP_F_00284060(c);
SET64(2, RD(0) + RD(0)); goto L_00284CC0;
L_00284CB0:;
SET64(31, 0x284cb8);  JP_F_00284C68(c);
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(0) < RD(2));
L_00284CC0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284CD0(Ctx *c) { /* func_00284CD0 */
ENTER(0x284cd0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x284cec); SET64(17, RD(5) + RD(0)); JP_F_0027E770(c);
SET64(31, rd64(c, (RW(29) + 16)));
wr32(c, (RW(16) + 96), RW(17));
wr32(c, (RW(2) + 36), RW(17));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00284D08(Ctx *c) { /* func_00284D08 */
ENTER(0x284d08);
SET64(2, (s32)rd32(c, (RW(4) + 96))); return;
}

void JP_F_00284D10(Ctx *c) { /* func_00284D10 */
ENTER(0x284d10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x284d20);  JP_F_0027E770(c);
SET64(2, (s32)rd32(c, (RW(2) + 36)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284D30(Ctx *c) { /* func_00284D30 */
ENTER(0x284d30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x284d40);  JP_F_00284C40(c);
SET64(2, RD(2) ^ 0x1);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284D58(Ctx *c) { /* func_00284D58 */
ENTER(0x284d58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x284d6c); SET64(16, RD(4) + RD(0)); JP_F_00280020(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x284d78); SET32(5, RW(0) + 1); JP_F_00284CD0(c);
SET64(31, 0x284d80);  JP_F_002840F8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x284d8c); SET64(5, RD(0) + RD(0)); JP_F_00284CD0(c);
SET64(31, 0x284d94);  JP_F_00280038(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00284168(c); return; }
}

void JP_F_00284DA8(Ctx *c) { /* func_00284DA8 */
ENTER(0x284da8);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00284DB0(Ctx *c) { /* func_00284DB0 */
ENTER(0x284db0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00284DB8(Ctx *c) { /* func_00284DB8 */
ENTER(0x284db8);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00284DC0(Ctx *c) { /* func_00284DC0 */
ENTER(0x284dc0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00284DC8(Ctx *c) { /* func_00284DC8 */
ENTER(0x284dc8);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00284DE4; }
SET64(31, 0x284de0);  JP_F_00256F80(c);
SET64(2, RD(0) + RD(0));
L_00284DE4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284DF0(Ctx *c) { /* func_00284DF0 */
ENTER(0x284df0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00284DF8(Ctx *c) { /* func_00284DF8 */
ENTER(0x284df8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(6) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00284E28; }
SET64(31, 0x284e1c);  JP_F_00256350(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_00284E84;
L_00284E28:;
SET32(2, RW(0) + 1);
if (RD(6) != RD(2)) { SET32(2, RW(0) + 2); goto L_00284E50; }
SET64(31, 0x284e3c);  JP_F_002563B8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x284e48); SET32(5, RW(2) + RW(17)); JP_F_00256350(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_00284E84;
L_00284E50:;
if (RD(6) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00284E84; }
SET64(31, 0x284e60);  JP_F_00256FE0(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(2) + 2047);
SET32(2, RW(2) + 4094);
SET64(3, RSD(5) < (s64)0);
if (RD(3) != 0) SET64(5, RD(2));
SET32(5, RSW(5) >> 11);
SET64(31, 0x284e80); SET32(5, RW(5) + RW(17)); JP_F_00256350(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_00284E84:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00284E98(Ctx *c) { /* func_00284E98 */
ENTER(0x284e98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x284ea8);  JP_F_00256440(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284EB8(Ctx *c) { /* func_00284EB8 */
ENTER(0x284eb8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x284ec8);  JP_F_00256310(c);
SET64(2, RD(2) ^ 0x4);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00284EE0(Ctx *c) { /* func_00284EE0 */
ENTER(0x284ee0);
 return;
}

void JP_F_00284EE8(Ctx *c) { /* func_00284EE8 */
ENTER(0x284ee8);
SET32(29, RW(29) + -16);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00284F00; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00256F18(c); return; }
L_00284F00:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284F10(Ctx *c) { /* func_00284F10 */
ENTER(0x284f10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00256E68(c); return; }
}

void JP_F_00284F28(Ctx *c) { /* func_00284F28 */
ENTER(0x284f28);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x284f3c); SET64(16, RD(5) + RD(0)); JP_F_00256FE0(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00284F50(Ctx *c) { /* func_00284F50 */
ENTER(0x284f50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00257440(c); return; }
}

void JP_F_00284F68(Ctx *c) { /* func_00284F68 */
ENTER(0x284f68);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00255F70(c); return; }
}

void JP_F_00284F80(Ctx *c) { /* func_00284F80 */
ENTER(0x284f80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00256000(c); return; }
}

void JP_F_00284F98(Ctx *c) { /* func_00284F98 */
ENTER(0x284f98);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x284fb4); SET64(17, RD(4) + RD(0)); JP_F_00256218(c);
SET64(8, (s64)(s32)0xf0000);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x284fd0); SET64(8, RD(8) | 0xffff); JP_F_00256088(c);
SET64(4, RD(17) + RD(0));
SET64(5, (s64)(s32)0xf0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0xffff);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_002566C0(c); return; }
}

void JP_F_00284FF0(Ctx *c) { /* func_00284FF0 */
ENTER(0x284ff0);
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
SET64(31, 0x285024); SET64(20, RD(8) + RD(0)); JP_F_00256218(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(31, 0x28503c); SET64(8, RD(20) + RD(0)); JP_F_00256088(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_002566C0(c); return; }
}

void JP_F_00285068(Ctx *c) { /* func_00285068 */
ENTER(0x285068);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00256440(c); return; }
}

void JP_F_00285080(Ctx *c) { /* func_00285080 */
ENTER(0x285080);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x285094); SET64(16, RD(4) + RD(0)); JP_F_00256548(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00256218(c); return; }
}

void JP_F_002850A8(Ctx *c) { /* func_002850A8 */
ENTER(0x2850a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2850bc); SET64(16, RD(4) + RD(0)); JP_F_002565E0(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00256288(c); return; }
}

void JP_F_002850D0(Ctx *c) { /* func_002850D0 */
ENTER(0x2850d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00256310(c); return; }
}

void JP_F_002850E8(Ctx *c) { /* func_002850E8 */
ENTER(0x2850e8);
SET32(2, RW(0) + 288);
SET32(29, RW(29) + -16);
SET64(5, RSD(5) < (s64)288);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(6) + 0), RW(2));
SET64(6, RD(4) + RD(0));
{ int t = RD(5) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028513C; }
SET64(4, rd8(c, (RW(6) + 0)));
SET32(3, RW(0) + 128);
if (RD(4) != RD(3)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00285140; }
SET64(3, rd8(c, (RW(6) + 1)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00285140; }
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(6) + 282);
SET32(5, RW(5) + 31080);
SET64(31, 0x285138); SET32(6, RW(0) + 6); JP_F_0012A7C0(c);
SET64(2, RD(2) < (u64)(s64)1);
L_0028513C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_00285140:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00285148(Ctx *c) { /* func_00285148 */
ENTER(0x285148);
SET32(2, RW(0) + 18);
SET64(5, RSD(5) < (s64)18);
wr32(c, (RW(6) + 0), RW(2));
SET64(6, RD(4) + RD(0));
{ int t = RD(5) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028517C; }
SET64(4, rd8(c, (RW(6) + 0)));
SET32(3, RW(0) + 128);
{ int t = RD(4) != RD(3);  if (t) goto L_0028517C; }
SET64(2, rd8(c, (RW(6) + 1)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
L_0028517C:;
 return;
}

void JP_F_00285188(Ctx *c) { /* func_00285188 */
ENTER(0x285188);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(29, RW(29) + 16); { JP_F_00259040(c); return; }
}

void JP_F_002851A8(Ctx *c) { /* func_002851A8 */
ENTER(0x2851a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(29, RW(29) + 16); { JP_F_002591A8(c); return; }
}

void JP_F_002851C8(Ctx *c) { /* func_002851C8 */
ENTER(0x2851c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(29, RW(29) + 16); { JP_F_00259360(c); return; }
}

void JP_F_002851E8(Ctx *c) { /* func_002851E8 */
ENTER(0x2851e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(29, RW(29) + 16); { JP_F_00259410(c); return; }
}

void JP_F_00285208(Ctx *c) { /* func_00285208 */
ENTER(0x285208);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(16) == RD(0); SET32(2, RW(0) + 1000); if (t) goto L_002852B0; }
{ int t = RD(5) != RD(2); SET64(6, RD(0) + RD(0)); if (t) goto L_00285238; }
SET64(5, RD(0) + RD(0)); goto L_0028529C;
L_00285238:;
c->f[12].u = RW(5);
SET64(31, 0x285244); c->f[12].f = (f32)(s32)c->f[12].u; JP_F_0011F8E0(c);
SET64(1, (s64)(s32)0x40dd0000);
SET64(1, RD(1) | 0xc54);
c->f[2].u = RW(1);
SET64(1, (s64)(s32)0x44d80000);
SET64(1, RD(1) | 0x677d);
c->f[3].u = RW(1);
c->f[0].f = fpu(F(0) - F(2));
SET64(1, (s64)(s32)0x3c230000);
SET64(1, RD(1) | 0xd70a);
c->f[1].u = RW(1);
c->f[0].f = fpu(F(0) * F(3));
c->f[1].f = fpu(F(0) * F(1));
c->f[2].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[2].u);
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(5, (s32)c->f[0].u);
SET32(2, RW(5) << 1);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(6, RW(3) - RW(2));
L_0028529C:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0025A438(c); return; }
L_002852B0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002852C0(Ctx *c) { /* func_002852C0 */
ENTER(0x2852c0);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(5, (s64)(s32)0x540000);
SET32(5, RW(5) + -22896);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(5) + 0), RW(3));
SET32(6, RW(0) + -32);
SET32(2, RW(2) + 31);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(2, RD(2) & RD(6));
wr32(c, (RW(5) + 8), RW(2));
wr32(c, (RW(5) + 4), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET64(3, (s32)rd32(c, (RW(4) + 12)));
SET32(2, RW(2) + 31);
wr32(c, (RW(5) + 12), RW(3));
SET64(2, RD(2) & RD(6));
wr32(c, (RW(5) + 24), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 16)));
wr32(c, (RW(5) + 16), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 20)));
wr32(c, (RW(5) + 20), RW(2)); return;
}

void JP_F_00285318(Ctx *c) { /* func_00285318 */
ENTER(0x285318);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x285328);  JP_F_0024EE10(c);
SET64(31, 0x285330);  JP_F_00251DA8(c);
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -22896);
SET64(31, 0x285344); SET32(6, RW(0) + 7); JP_F_00275270(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00285358(Ctx *c) { /* func_00285358 */
ENTER(0x285358);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x285368);  JP_F_00251DC0(c);
SET64(31, 0x285370);  JP_F_0024EFC0(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00285380(Ctx *c) { /* func_00285380 */
ENTER(0x285380);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(2, RW(16) + 3368);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(4, (s32)rd32(c, (RW(16) + 8188)));
SET64(5, (s32)rd32(c, (RW(2) + 504)));
SET64(3, (s32)rd32(c, (RW(2) + 500)));
{ int t = RD(3) != RD(5); SET64(17, (s32)rd32(c, (RW(4) + 0))); if (t) goto L_002853F8; }
SET64(31, 0x2853b8); SET64(4, RD(17) + RD(0)); JP_F_00258D98(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2853c4); SET64(18, RD(2) + RD(0)); JP_F_00258E20(c);
if (RSD(18) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002853FC; }
if (RSD(2) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002853FC; }
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00288BC0(c); return; }
L_002853F8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002853FC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00285410(Ctx *c) { /* func_00285410 */
ENTER(0x285410);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00285428(c); return; }
}

void JP_F_00285428(Ctx *c) { /* func_00285428 */
ENTER(0x285428);
SET32(29, RW(29) + -48);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x285444); SET64(17, RD(4) + RD(0)); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002854B0; }
SET64(31, 0x285454);  JP_F_002860C0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_00285468; }
SET64(2, RD(0) + RD(0)); goto L_002854B0;
L_00285468:;
SET64(31, 0x285470);  JP_F_002854C8(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28547c); SET64(5, RD(29) + RD(0)); JP_F_002854D0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x285488); SET64(16, RD(2) + RD(0)); JP_F_00285D28(c);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x285494); SET64(4, RD(17) + RD(0)); JP_F_00285DF8(c);
SET64(31, 0x28549c); SET64(4, RD(17) + RD(0)); JP_F_002860F8(c);
SET64(31, 0x2854a4); SET64(4, RD(17) + RD(0)); JP_F_002861D8(c);
SET64(31, 0x2854ac); SET64(4, RD(17) + RD(0)); JP_F_00285380(c);
SET64(2, RD(16) + RD(0));
L_002854B0:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002854C8(Ctx *c) { /* func_002854C8 */
ENTER(0x2854c8);
 return;
}

void JP_F_002854D0(Ctx *c) { /* func_002854D0 */
ENTER(0x2854d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET32(6, RW(29) + 4);
wr32(c, (RW(18) + 0), RW(0));
SET64(31, 0x285500); SET64(17, (s32)rd32(c, (RW(16) + 8188))); JP_F_00285F98(c);
SET32(7, RW(29) + 8);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00285544; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s32)rd32(c, (RW(17) + 60)));
SET64(6, RD(2) + RD(0));
{ u32 t = RW(3); SET64(31, 0x285524); wr32(c, (RW(18) + 0), RW(2)); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(31, 0x285530); SET64(5, (s32)rd32(c, (RW(29) + 8))); JP_F_00285FE0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00285544; }
SET64(31, 0x285540);  JP_F_00286000(c);
SET64(2, RD(0) + RD(0));
L_00285544:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00285560(Ctx *c) { /* func_00285560 */
ENTER(0x285560);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
wr64(c, (RW(29) + 0), RD(31));
SET64(7, RD(6) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x285580); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00285590(Ctx *c) { /* func_00285590 */
ENTER(0x285590);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
{ int t = RD(5) != RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_002855C8; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 28)));
{ u32 t = RW(3); SET64(31, 0x2855bc);  rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 16))); goto L_00285608;
L_002855C8:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2855d4); SET64(7, RD(29) + RD(0)); JP_F_0026B318(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(6, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x2855ec); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x285604); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 16)));
L_00285608:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00285618(Ctx *c) { /* func_00285618 */
ENTER(0x285618);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET64(6, RD(29) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 40), RD(19));
SET64(17, (s32)rd32(c, (RW(4) + 8188)));
SET64(19, (s32)rd32(c, (RW(17) + 4)));
SET64(5, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x28565c); SET64(4, RD(19) + RD(0)); JP_F_00285560(c);
SET64(6, (s64)(s32)0x10000);
SET64(16, (s32)rd32(c, (RW(29) + 4)));
SET64(6, RD(6) | 0x9000);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(5, RD(20) + RD(0));
SET64(2, RSD(18) < RSD(16));
if (RD(2) != 0) SET64(16, RD(18));
SET64(3, RSD(6) < RSD(16));
if (RD(3) != 0) SET64(16, RD(6));
SET64(31, 0x285688); SET64(6, RD(16) + RD(0)); JP_F_00274E00(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x285698); SET64(6, RD(29) + RD(0)); JP_F_00285590(c);
SET64(2, (s32)rd32(c, (RW(17) + 72)));
SET64(18, rd64(c, (RW(29) + 32)));
SET32(2, RW(2) + RW(16));
SET64(19, rd64(c, (RW(29) + 40)));
wr32(c, (RW(17) + 72), RW(2));
SET64(20, rd64(c, (RW(29) + 48)));
wr32(c, (RW(21) + 0), RW(16));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002856D0(Ctx *c) { /* func_002856D0 */
ENTER(0x2856d0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(30));
SET64(30, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 64), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 72), RD(21));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 88), RD(23));
SET64(23, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET32(6, RW(29) + 4);
wr64(c, (RW(29) + 48), RD(18));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
SET32(17, RW(20) + 3368);
wr64(c, (RW(29) + 80), RD(22));
wr64(c, (RW(29) + 104), RD(31));
wr32(c, (RW(30) + 0), RW(0));
SET64(31, 0x285724); SET64(19, (s32)rd32(c, (RW(20) + 8188))); JP_F_00285CD8(c);
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x280000); goto L_00285768; }
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x285738); SET64(4, RD(17) + RD(0)); JP_F_00298408(c);
SET64(18, RD(2) + RD(0));
{ int t = RSD(18) < 0; SET64(4, RD(20) + RD(0)); if (t) goto L_00285908; }
SET64(31, 0x28574c); SET32(5, RW(0) + 5); JP_F_00297980(c);
if (RD(2) != RD(0)) { SET64(5, (s32)rd32(c, (RW(29) + 4))); goto L_00285778; }
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x285764); SET64(5, RD(18) + RD(0)); JP_F_002984E0(c);
SET64(2, (s64)(s32)0x280000);
L_00285768:;
SET32(2, RW(2) + 22040);
wr32(c, (RW(19) + 60), RW(2)); goto L_00285908;
L_00285778:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x285784); SET32(6, RW(29) + 8); JP_F_00298468(c);
SET64(16, RD(2) + RD(0));
{ int t = RSD(16) < 0; SET64(4, RD(17) + RD(0)); if (t) goto L_00285908; }
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2857a0); SET64(22, RD(0) + RD(0)); JP_F_002984E0(c);
SET32(3, RW(16) - RW(18));
SET64(2, (s32)rd32(c, (RW(19) + 56)));
SET32(3, RW(3) - RW(2));
{ int t = RSD(3) < 0; SET64(5, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_002858A0; }
SET32(3, RSW(3) >> 5);
mul_s(c, 0, 3, RSW(3), RSW(5));
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(17, RW(2) << 1);
{ int t = RSD(17) <= 0; wr32(c, (RW(29) + 12), RW(0)); if (t) goto L_00285854; }
SET32(2, RW(5) << 3);
SET64(4, RD(23) + RD(0));
SET32(2, RW(2) + RW(5));
SET32(6, RW(29) + 12);
SET32(2, RW(2) << 1);
div_s(c, 0, RSW(21), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x2857ec); goto L_002857F0; }
L_002857F0:;
SET64(3, c->lo.d[0]);
mul_s(c, 0, 3, RSW(3), RSW(5));
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
SET64(16, RD(2) + RD(0));
SET64(2, RSD(2) < RSD(17));
if (RD(2) == 0) SET64(16, RD(17));
SET64(5, RD(16) + RD(0));
SET64(31, 0x28581c); SET32(16, RW(17) - RW(16)); JP_F_00285938(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(22, RD(2) + RD(0));
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
div_s(c, 0, RSW(22), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x285838); goto L_0028583C; }
L_0028583C:;
SET64(3, (s32)rd32(c, (RW(19) + 56)));
SET64(4, c->lo.d[0]);
SET32(4, RW(4) << 5);
SET32(3, RW(3) + RW(4));
{ int t = RSD(16) > 0; wr32(c, (RW(19) + 56), RW(3)); if (t) goto L_0028587C; }
L_00285854:;
SET64(2, (s32)rd32(c, (RW(29) + 8)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x280000); if (t) goto L_0028587C; }
SET64(4, RD(23) + RD(0));
SET32(2, RW(2) + 22040);
SET64(5, RD(21) + RD(0));
wr32(c, (RW(19) + 60), RW(2));
SET64(31, 0x285878); SET32(6, RW(29) + 16); JP_F_0025AA48(c);
wr32(c, (RW(29) + 12), RW(2));
L_0028587C:;
SET64(2, (s32)rd32(c, (RW(29) + 12)));
{ int t = RD(2) == RD(0); SET64(4, RD(20) + RD(0)); if (t) goto L_002858F8; }
SET32(5, RW(0) + 6);
SET64(31, 0x285894); SET64(6, RD(0) + RD(0)); JP_F_002977B8(c);
SET64(2, rd64(c, (RW(20) + 2496))); goto L_002858FC;
L_002858A0:;
SET64(2, (s32)rd32(c, (RW(29) + 8)));
{ int t = RD(2) == RD(0); SET32(4, RW(0) - RW(3)); if (t) goto L_002858F8; }
SET32(2, RW(4) + 31);
SET64(3, RSD(4) < (s64)0);
if (RD(3) != 0) SET64(4, RD(2));
SET32(4, RSW(4) >> 5);
SET32(16, RW(4) << 5);
if (RSD(16) <= 0) { SET64(2, (s64)(s32)0x280000); goto L_002858F0; }
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2858d8); SET64(6, RD(16) + RD(0)); JP_F_002859C0(c);
SET64(3, (s32)rd32(c, (RW(19) + 56)));
SET32(4, RW(16) - RW(2));
SET32(3, RW(3) - RW(2));
{ int t = RSD(4) > 0; wr32(c, (RW(19) + 56), RW(3)); if (t) goto L_002858F8; }
SET64(2, (s64)(s32)0x280000);
L_002858F0:;
SET32(2, RW(2) + 22040);
wr32(c, (RW(19) + 60), RW(2));
L_002858F8:;
SET64(2, rd64(c, (RW(20) + 2496)));
L_002858FC:;
wr32(c, (RW(30) + 0), RW(22));
SET64(2, RD(22) + RD(2));
wr64(c, (RW(20) + 2496), RD(2));
L_00285908:;
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

void JP_F_00285938(Ctx *c) { /* func_00285938 */
ENTER(0x285938);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET32(20, RW(0) + 1);
wr64(c, (RW(29) + 56), RD(31));
wr32(c, (RW(19) + 0), RW(0)); goto L_00285974;
L_00285970:;
SET32(17, RW(17) + 18);
L_00285974:;
SET64(2, RSD(17) < RSD(18));
if (RD(2) == RD(0)) { SET64(2, RD(17) + RD(0)); goto L_002859A0; }
SET64(4, RD(16) + RD(0));
SET32(16, RW(16) + 18);
SET32(5, RW(0) + 18);
SET64(31, 0x285994); SET64(6, RD(29) + RD(0)); JP_F_0025AA48(c);
{ int t = RD(2) == RD(0); SET64(2, RD(17) + RD(0)); if (t) { POLL(); goto L_00285970; } }
wr32(c, (RW(19) + 0), RW(20));
L_002859A0:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_002859C0(Ctx *c) { /* func_002859C0 */
ENTER(0x2859c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(29, RW(29) + 16); { JP_F_0025AA88(c); return; }
}

void JP_F_002859E0(Ctx *c) { /* func_002859E0 */
ENTER(0x2859e0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(2, RSD(16) < (s64)288);
wr64(c, (RW(29) + 56), RD(31));
SET64(6, RD(29) + RD(0));
wr32(c, (RW(19) + 0), RW(0));
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
{ int t = RD(2) != RD(0); SET64(20, (s32)rd32(c, (RW(18) + 8188))); if (t) goto L_00285A80; }
SET64(31, 0x285a30);  JP_F_0025A9B0(c);
{ int t = RD(2) != RD(0); SET64(7, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_00285A64; }
SET64(31, 0x285a40); SET64(4, RD(18) + RD(0)); JP_F_0028A668(c);
SET64(7, RD(0) + RD(0));
SET64(2, RSD(2) < (s64)108);
SET64(6, RD(16) + RD(0));
SET64(4, RD(18) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00285A64; }
SET64(31, 0x285a60);  JP_F_00285AA0(c);
SET32(7, RW(2) - RW(17));
L_00285A64:;
SET64(3, rd64(c, (RW(18) + 2496)));
SET64(2, (s64)(s32)0x280000);
SET32(2, RW(2) + 22224);
wr32(c, (RW(19) + 0), RW(7));
SET64(3, RD(7) + RD(3));
wr32(c, (RW(20) + 60), RW(2));
wr64(c, (RW(18) + 2496), RD(3));
L_00285A80:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00285AA0(Ctx *c) { /* func_00285AA0 */
ENTER(0x285aa0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(20) + RD(0));
SET32(3, RW(17) + 36);
wr64(c, (RW(29) + 32), RD(18));
SET64(2, RD(17) < RD(3));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(0) + RD(0));
wr64(c, (RW(29) + 64), RD(22));
SET64(22, RD(0) + RD(0));
wr64(c, (RW(29) + 80), RD(30));
SET64(30, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET32(18, RW(20) + RW(6));
wr64(c, (RW(29) + 72), RD(23));
SET64(19, RD(0) + RD(0));
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 88), RD(31)); if (t) goto L_00285B60; }
SET64(23, RD(3) + RD(0));
SET64(19, RD(0) + RD(0));
L_00285B00:;
SET64(16, RD(17) + RD(0));
L_00285B04:;
SET64(2, RD(16) < RD(18));
{ int t = RD(2) == RD(0);  if (t) goto L_00285B48; }
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RSD(2) >= 0) { SET32(16, RW(16) + 18); { POLL(); goto L_00285B04; } }
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 18);
SET64(6, RD(29) + RD(0));
SET64(31, 0x285b30); SET32(19, RW(0) + 1); JP_F_0025AA48(c);
{ int t = RD(2) == RD(0); SET64(2, RD(21) < RD(16)); if (t) goto L_00285B48; }
{ int t = RD(2) == RD(0);  if (t) goto L_00285B48; }
SET64(21, RD(16) + RD(0));
SET64(22, RD(17) + RD(0));
L_00285B48:;
{ int t = RD(19) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_00285B8C; }
SET32(17, RW(17) + 2);
SET64(2, RD(17) < RD(23));
if (RD(2) != RD(0)) { SET64(19, RD(0) + RD(0)); { POLL(); goto L_00285B00; } }
L_00285B60:;
{ int t = RD(19) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_00285B8C; }
if (RD(22) != RD(0)) { SET64(17, RD(22) + RD(0)); goto L_00285B88; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(30) + RD(0));
SET64(31, 0x285b80); SET64(5, RD(5) | 0xc0a); JP_F_0028A8F8(c);
SET64(2, RD(20) + RD(0)); goto L_00285B8C;
L_00285B88:;
SET64(2, RD(17) + RD(0));
L_00285B8C:;
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

void JP_F_00285BC0(Ctx *c) { /* func_00285BC0 */
ENTER(0x285bc0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 64), RD(31));
wr32(c, (RW(21) + 0), RW(0));
SET64(31, 0x285bfc); SET64(20, (s32)rd32(c, (RW(18) + 8188))); JP_F_0028A668(c);
SET64(2, RSD(2) < (s64)108);
{ int t = RD(2) != RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_00285C18; }
SET64(2, (s64)(s32)0x280000);
SET32(2, RW(2) + 23008);
wr32(c, (RW(20) + 60), RW(2)); goto L_00285CB0;
L_00285C18:;
SET32(19, RW(19) + -18); goto L_00285C24;
L_00285C20:;
SET32(17, RW(17) + 18);
L_00285C24:;
SET64(2, RSD(17) < RSD(19));
if (RD(2) == RD(0)) { SET64(2, rd64(c, (RW(18) + 2496))); goto L_00285C5C; }
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 31056);
SET64(31, 0x285c44); SET32(6, RW(0) + 18); JP_F_00127180(c);
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 18); if (t) { POLL(); goto L_00285C20; } }
SET64(2, (s64)(s32)0x280000);
SET32(2, RW(2) + 23008);
wr32(c, (RW(20) + 60), RW(2));
SET64(2, rd64(c, (RW(18) + 2496)));
L_00285C5C:;
SET64(4, RD(18) + RD(0));
wr32(c, (RW(21) + 0), RW(17));
SET64(5, RD(29) + RD(0));
SET64(2, RD(17) + RD(2));
SET32(6, RW(29) + 4);
SET64(31, 0x285c78); wr64(c, (RW(18) + 2496), RD(2)); JP_F_00285CD8(c);
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_00285CB4; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
div_s(c, 0, RSW(17), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x285c98); goto L_00285C9C; }
L_00285C9C:;
SET64(3, (s32)rd32(c, (RW(20) + 56)));
SET64(4, c->lo.d[0]);
SET32(4, RW(4) << 5);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(20) + 56), RW(3));
L_00285CB0:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00285CB4:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00285CD8(Ctx *c) { /* func_00285CD8 */
ENTER(0x285cd8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x285cf4); SET64(17, RD(6) + RD(0)); JP_F_00286BF8(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_00285D14; }
SET64(4, (s32)rd32(c, (RW(3) + 12)));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
wr32(c, (RW(17) + 0), RW(3));
L_00285D14:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00285D28(Ctx *c) { /* func_00285D28 */
ENTER(0x285d28);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(17) + 8180);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(18, (s32)rd32(c, (RW(2) + 20)));
SET64(16, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x285d5c); SET64(5, RD(18) + RD(0)); JP_F_00288788(c);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(19); SET64(5, RD(16) + RD(0)); if (t) goto L_00285DB0; }
SET64(31, 0x285d70);  JP_F_00288788(c);
if (RD(2) != RD(19)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00285DB4; }
SET64(31, 0x285d80); SET64(4, RD(17) + RD(0)); JP_F_00285DD0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00285DB0; }
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 1);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_00288768(c); return; }
L_00285DB0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00285DB4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00285DD0(Ctx *c) { /* func_00285DD0 */
ENTER(0x285dd0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, 0x285de4); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00258648(c);
SET64(2, RD(2) ^ 0x3);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00285DF8(Ctx *c) { /* func_00285DF8 */
ENTER(0x285df8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 40), RD(21));
SET32(21, RW(17) + 4120);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 56), RD(31));
SET64(20, (s32)rd32(c, (RW(17) + 8188)));
SET64(18, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x285e38); SET64(4, RD(18) + RD(0)); JP_F_00258648(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x285e44); SET64(19, RD(2) + RD(0)); JP_F_00259ED8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, (s64)(s32)0x540000); if (t) goto L_00285E54; }
wr32(c, (RW(2) + -22868), RW(16));
L_00285E54:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x285e60); SET32(5, RW(0) + 26); JP_F_00297980(c);
SET32(3, RW(0) + -1);
if (RD(2) == 0) SET64(16, RD(0));
{ int t = RD(16) == RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_00285E98; }
{ int t = RSD(16) >= 0; SET32(2, RW(0) + -2); if (t) goto L_00285E88; }
{ int t = RD(16) == RD(2);  if (t) goto L_00285EB0; }
 goto L_00285EC8;
L_00285E88:;
{ int t = RD(16) == RD(0); SET32(2, RW(19) + -4); if (t) goto L_00285EDC; }
 goto L_00285EC8;
L_00285E98:;
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x285ea4); SET64(5, RD(5) | 0xc08); JP_F_0028A8F8(c);
SET32(2, RW(19) + -4); goto L_00285EDC;
L_00285EB0:;
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x285ebc); SET64(5, RD(5) | 0xc09); JP_F_0028A8F8(c);
SET32(2, RW(19) + -4); goto L_00285EDC;
L_00285EC8:;
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(17) + RD(0));
SET64(31, 0x285ed8); SET64(5, RD(5) | 0xc07); JP_F_0028A8F8(c);
SET32(2, RW(19) + -4);
L_00285EDC:;
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 5); goto L_00285EF8; }
SET64(4, RD(21) + RD(0));
SET64(31, 0x285ef4); SET64(5, RD(0) + RD(0)); JP_F_0029A2E8(c);
SET32(2, RW(0) + 5);
L_00285EF8:;
{ int t = RD(19) == RD(2); SET64(4, RD(17) + RD(0)); if (t) goto L_00285F08; }
{ int t = RD(16) == RD(0);  if (t) goto L_00285F10; }
L_00285F08:;
SET64(31, 0x285f10); SET32(5, RW(0) + 1); JP_F_002860D8(c);
L_00285F10:;
SET64(31, 0x285f18); SET64(4, RD(17) + RD(0)); JP_F_002860A8(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00285F70; }
if (RD(22) != RD(0)) { SET64(17, rd64(c, (RW(29) + 8))); goto L_00285F74; }
SET64(31, 0x285f34); SET64(4, RD(18) + RD(0)); JP_F_0025A488(c);
SET64(2, (s32)rd32(c, (RW(20) + 72)));
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00285F70; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); { JP_F_002860D8(c); return; }
L_00285F70:;
SET64(17, rd64(c, (RW(29) + 8)));
L_00285F74:;
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00285F98(Ctx *c) { /* func_00285F98 */
ENTER(0x285f98);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(6, RD(29) + RD(0));
SET64(31, 0x285fbc); SET64(5, (s32)rd32(c, (RW(4) + 8196))); JP_F_00287AD8(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(17) + 0), RW(3));
wr32(c, (RW(16) + 0), RW(4));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00285FE0(Ctx *c) { /* func_00285FE0 */
ENTER(0x285fe0);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x285ff4); SET64(5, (s32)rd32(c, (RW(4) + 8196))); JP_F_00287BB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00286000(Ctx *c) { /* func_00286000 */
ENTER(0x286000);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET32(2, RW(16) + 8180);
wr64(c, (RW(29) + 32), RD(31));
SET64(6, RD(29) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x286028); SET64(17, (s32)rd32(c, (RW(2) + 8))); JP_F_002880B0(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(5, RW(29) + 4);
SET32(6, RW(29) + 8);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00286094; }
SET64(31, 0x286044);  JP_F_00288838(c);
SET64(4, rd64(c, (RW(16) + 2480)));
SET64(31, 0x286050); SET64(5, (s32)rd32(c, (RW(29) + 4))); JP_F_002889F0(c);
SET64(4, rd64(c, (RW(16) + 2488)));
wr64(c, (RW(16) + 2480), RD(2));
SET64(31, 0x286060); SET64(5, (s32)rd32(c, (RW(29) + 8))); JP_F_002889F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
wr64(c, (RW(16) + 2488), RD(2));
SET32(5, RW(29) + 4);
SET64(31, 0x286074); SET32(6, RW(29) + 8); JP_F_00288838(c);
SET64(4, rd64(c, (RW(16) + 2504)));
SET64(31, 0x286080); SET64(5, (s32)rd32(c, (RW(29) + 4))); JP_F_002889F0(c);
SET64(4, rd64(c, (RW(16) + 2512)));
wr64(c, (RW(16) + 2504), RD(2));
SET64(31, 0x286090); SET64(5, (s32)rd32(c, (RW(29) + 8))); JP_F_002889F0(c);
wr64(c, (RW(16) + 2512), RD(2));
L_00286094:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002860A8(Ctx *c) { /* func_002860A8 */
ENTER(0x2860a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8196)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002887C8(c); return; }
}

void JP_F_002860C0(Ctx *c) { /* func_002860C0 */
ENTER(0x2860c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8200)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002887C8(c); return; }
}

void JP_F_002860D8(Ctx *c) { /* func_002860D8 */
ENTER(0x2860d8);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8200)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002887A8(c); return; }
}

void JP_F_002860F8(Ctx *c) { /* func_002860F8 */
ENTER(0x2860f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x286110); SET64(16, RD(4) + RD(0)); JP_F_00286BF8(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028619C; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028619C; }
SET64(2, (s32)rd32(c, (RW(16) + 8188)));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x286138); SET64(4, RD(16) + RD(0)); JP_F_002861B0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00286198; }
SET64(31, 0x286148);  JP_F_00258E20(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x286154); wr32(c, (RW(17) + 16), RW(2)); JP_F_00258D98(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x286160); wr32(c, (RW(17) + 20), RW(2)); JP_F_00258EA8(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
wr32(c, (RW(17) + 12), RW(2));
SET32(3, RW(0) + 1);
mul_s(c, 0, 4, RSW(4), RSW(2));
wr32(c, (RW(17) + 0), RW(3));
wr32(c, (RW(17) + 8), RW(3));
SET32(2, RW(4) << 3);
SET32(2, RW(2) + RW(4));
SET64(3, RD(2) + RD(0));
SET32(4, RW(2) + 15);
SET64(2, RSD(2) < (s64)0);
if (RD(2) != 0) SET64(3, RD(4));
SET32(3, RSW(3) >> 4);
wr32(c, (RW(17) + 4), RW(3));
L_00286198:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028619C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002861B0(Ctx *c) { /* func_002861B0 */
ENTER(0x2861b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2861c0);  JP_F_00258648(c);
SET64(2, RD(2) < (u64)(s64)2);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002861D8(Ctx *c) { /* func_002861D8 */
ENTER(0x2861d8);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 27);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(17, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, 0x2861f8); SET64(16, (s32)rd32(c, (RW(17) + 0))); JP_F_00297980(c);
SET64(3, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 68)));
SET64(5, RD(3) + RD(0));
{ int t = RD(2) == RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00286228; }
wr32(c, (RW(17) + 68), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_002596D8(c); return; }
L_00286228:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00286240(Ctx *c) { /* func_00286240 */
ENTER(0x286240);
SET32(29, RW(29) + -48);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(17) + 13608);
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28626c); SET32(19, RW(17) + 13600); JP_F_00297980(c);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_00286378; }
SET64(31, 0x286280); wr32(c, (RW(17) + 8188), RW(19)); JP_F_00286398(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00286378; }
SET64(31, 0x286290);  JP_F_00286550(c);
SET64(5, (s64)(s32)0xff000000);
SET64(18, RD(2) + RD(0));
SET64(4, RD(0) + RD(0));
{ int t = RD(18) != RD(0); SET64(5, RD(5) | 0xc04); if (t) goto L_002862C0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0028A8F8(c); return; }
L_002862C0:;
SET64(6, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x2862d0); SET64(5, (s32)rd32(c, (RW(16) + 0))); JP_F_00269A78(c);
SET64(4, RD(0) + RD(0));
SET64(9, RD(2) + RD(0));
SET64(2, (s64)(s32)0x280000);
SET64(5, (s64)(s32)0x280000);
SET64(3, (s64)(s32)0x280000);
SET64(6, (s64)(s32)0x280000);
SET64(7, (s64)(s32)0x280000);
SET32(11, RW(5) + 20936);
SET64(5, RD(9) + RD(0));
SET32(8, RW(17) + 13780);
SET32(10, RW(2) + 20872);
SET32(3, RW(3) + 20904);
SET32(6, RW(6) + 20968);
{ int t = RD(9) != RD(0); SET32(7, RW(7) + 21000); if (t) goto L_00286330; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0xc05);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0028A8F8(c); return; }
L_00286330:;
wr32(c, (RW(19) + 4), RW(9));
SET64(4, RD(18) + RD(0));
wr32(c, (RW(19) + 0), RW(18));
wr32(c, (RW(17) + 8460), RW(8));
wr32(c, (RW(8) + 20), RW(7));
SET64(2, (s32)rd32(c, (RW(18) + 12)));
wr32(c, (RW(8) + 4), RW(10));
wr32(c, (RW(8) + 0), RW(2));
wr32(c, (RW(8) + 8), RW(3));
wr32(c, (RW(8) + 12), RW(11));
SET64(31, 0x286360); wr32(c, (RW(8) + 16), RW(6)); JP_F_002583C0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28636c); SET32(5, RW(0) + 1); JP_F_002869C0(c);
SET64(31, 0x286374); SET64(4, RD(17) + RD(0)); JP_F_002865D0(c);
SET64(2, RD(0) + RD(0));
L_00286378:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00286398(Ctx *c) { /* func_00286398 */
ENTER(0x286398);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 80), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(16));
SET32(8, RW(2) + -22896);
wr64(c, (RW(29) + 72), RD(17));
SET64(7, RD(5) + RD(0));
wr64(c, (RW(29) + 88), RD(31));
SET64(5, (s64)(s32)0xff000000);
SET64(2, (s32)rd32(c, (RW(8) + 8)));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0xc06); if (t) goto L_002863D8; }
SET64(2, (s32)rd32(c, (RW(8) + 24)));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x280000); if (t) goto L_002863E8; }
L_002863D8:;
SET64(31, 0x2863e0); SET64(4, RD(0) + RD(0)); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 64))); goto L_0028653C;
L_002863E8:;
SET32(6, RW(0) + -1);
SET32(3, RW(0) + 1);
SET32(2, RW(2) + 22040);
ldl(c, 5, (RW(8) + 7));
ldr(c, 5, (RW(8) + 0));
ldl(c, 9, (RW(8) + 15));
ldr(c, 9, (RW(8) + 8));
ldl(c, 10, (RW(8) + 23));
ldr(c, 10, (RW(8) + 16));
SET64(11, (s32)rd32(c, (RW(8) + 24)));
sdl(c, 5, (RW(7) + 15));
sdr(c, 5, (RW(7) + 8));
sdl(c, 9, (RW(7) + 23));
sdr(c, 9, (RW(7) + 16));
sdl(c, 10, (RW(7) + 31));
sdr(c, 10, (RW(7) + 24));
wr32(c, (RW(7) + 32), RW(11));
SET32(5, RW(0) + 63);
wr32(c, (RW(7) + 40), RW(3));
SET64(17, (s64)(s32)0xf0000);
SET64(17, RD(17) | 0x4240);
wr32(c, (RW(7) + 60), RW(2));
SET32(16, RW(18) + 4120);
wr32(c, (RW(7) + 68), RW(6));
wr32(c, (RW(7) + 76), RW(0));
wr32(c, (RW(7) + 0), RW(0));
wr32(c, (RW(7) + 4), RW(0));
wr32(c, (RW(7) + 36), RW(6));
wr32(c, (RW(7) + 44), RW(0));
wr32(c, (RW(7) + 48), RW(0));
wr32(c, (RW(7) + 52), RW(0));
wr32(c, (RW(7) + 56), RW(0));
wr32(c, (RW(7) + 64), RW(0));
SET64(31, 0x286474); wr32(c, (RW(7) + 72), RW(0)); JP_F_00297980(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 64);
wr64(c, (RW(29) + 0), RD(2));
SET64(31, 0x286488); wr64(c, (RW(29) + 8), RD(17)); JP_F_00297980(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 65);
wr64(c, (RW(29) + 16), RD(2));
SET64(31, 0x28649c); wr64(c, (RW(29) + 24), RD(17)); JP_F_00297980(c);
SET32(5, RW(0) + 66);
SET64(4, RD(18) + RD(0));
wr64(c, (RW(29) + 32), RD(2));
SET64(31, 0x2864b0); wr64(c, (RW(29) + 40), RD(17)); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
wr64(c, (RW(29) + 48), RD(2));
SET64(31, 0x2864c0); wr64(c, (RW(29) + 56), RD(17)); JP_F_0029A148(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2864cc); SET32(5, RW(0) + 72); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2864d8); SET64(5, RD(2) + RD(0)); JP_F_0029A268(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2864e4); SET64(5, RD(29) + RD(0)); JP_F_0029A270(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2864f0); SET32(5, RW(29) + 16); JP_F_0029A288(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2864fc); SET32(5, RW(29) + 32); JP_F_0029A2A0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x286508); SET32(5, RW(29) + 48); JP_F_0029A2B8(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x286514); SET32(5, RW(0) + 62); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x286520); SET64(5, RD(2) + RD(0)); JP_F_0029A2D0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x28652c); SET32(5, RW(0) + 61); JP_F_00297980(c);
SET64(31, 0x286534); SET64(4, RD(2) + RD(0)); JP_F_0029F588(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 64)));
L_0028653C:;
SET64(17, rd64(c, (RW(29) + 72)));
SET64(18, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void JP_F_00286550(Ctx *c) { /* func_00286550 */
ENTER(0x286550);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x286564); SET64(16, RD(4) + RD(0)); JP_F_00295CA8(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_00286588; }
SET64(6, (s32)rd32(c, (RW(16) + 20)));
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x286580); SET64(5, (s32)rd32(c, (RW(16) + 24))); JP_F_00257AA8(c);
SET64(16, RD(2) + RD(0)); goto L_00286594;
L_00286588:;
SET64(31, 0x286590);  JP_F_002865C0(c);
SET64(16, RD(2) + RD(0));
L_00286594:;
{ int t = RD(16) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002865AC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2865a8); SET64(5, RD(0) + RD(0)); JP_F_00259CC8(c);
SET64(2, RD(16) + RD(0));
L_002865AC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002865C0(Ctx *c) { /* func_002865C0 */
ENTER(0x2865c0);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + 25400))); return;
}

void JP_F_002865D0(Ctx *c) { /* func_002865D0 */
ENTER(0x2865d0);
SET64(5, (s64)(s32)0x280000);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 2);
SET32(5, RW(5) + 26128);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2865f0); SET64(16, RD(4) + RD(0)); JP_F_00298DA0(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 15);
SET32(6, RW(0) + 2);
SET32(29, RW(29) + 16); { JP_F_002977B8(c); return; }
}

void JP_F_00286610(Ctx *c) { /* func_00286610 */
ENTER(0x286610);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET32(19, RW(16) + 4120);
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 64), RD(31));
SET64(17, (s32)rd32(c, (RW(16) + 8188)));
SET64(31, 0x28664c); SET64(18, (s32)rd32(c, (RW(17) + 0))); JP_F_00298998(c);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 4); if (t) goto L_002866A8; }
SET64(2, (s32)rd32(c, (RW(16) + 72)));
if (RD(2) != RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 36))); goto L_00286698; }
SET64(4, RD(19) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x286674); SET32(7, RW(29) + 4); JP_F_002866D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 36)));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RSD(4) < RSD(3));
if (RD(2) == RD(0)) { wr32(c, (RW(20) + 0), RW(4)); goto L_0028669C; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(4, RD(3) + RD(0));
wr32(c, (RW(17) + 36), RW(3));
wr32(c, (RW(17) + 40), RW(2));
L_00286698:;
wr32(c, (RW(20) + 0), RW(4));
L_0028669C:;
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 40)));
wr32(c, (RW(21) + 0), RW(3));
L_002866A8:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002866D0(Ctx *c) { /* func_002866D0 */
ENTER(0x2866d0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 72), RD(17));
SET64(17, RD(4) + RD(0));
SET64(4, RD(16) + RD(0));
wr64(c, (RW(29) + 80), RD(18));
wr64(c, (RW(29) + 88), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 96), RD(31));
SET64(31, 0x286700); SET64(18, RD(6) + RD(0)); JP_F_00258648(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 48);
SET32(6, RW(29) + 52);
SET64(3, (s64)(s32)0x410000);
SET64(31, 0x286718); wr32(c, (RW(3) + 24856), RW(2)); JP_F_002589C8(c);
SET64(3, (s32)rd32(c, (RW(29) + 52)));
SET64(2, (s32)rd32(c, (RW(29) + 48)));
wr64(c, (RW(29) + 8), RD(3));
SET64(31, 0x28672c); wr64(c, (RW(29) + 0), RD(2)); JP_F_0029F750(c);
SET64(31, 0x286734); wr64(c, (RW(29) + 16), RD(2)); JP_F_0029F8C0(c);
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 16);
SET64(4, RD(17) + RD(0));
SET32(7, RW(29) + 32);
SET64(31, 0x28674c); wr64(c, (RW(29) + 24), RD(2)); JP_F_0029A348(c);
SET64(2, (s32)rd32(c, (RW(29) + 32)));
SET64(3, (s32)rd32(c, (RW(29) + 40)));
wr32(c, (RW(18) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 64)));
wr32(c, (RW(19) + 0), RW(3));
SET64(17, rd64(c, (RW(29) + 72)));
SET64(18, rd64(c, (RW(29) + 80)));
SET64(19, rd64(c, (RW(29) + 88)));
SET64(31, rd64(c, (RW(29) + 96)));
SET32(29, RW(29) + 112); return;
}

void JP_F_00286778(Ctx *c) { /* func_00286778 */
ENTER(0x286778);
SET32(29, RW(29) + -32);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(17) + 8188)));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(16) == RD(0); SET64(18, (s32)rd32(c, (RW(3) + 4))); if (t) goto L_00286838; }
SET64(2, (s64)(s32)0x540000);
SET32(7, RW(2) + -22896);
ldl(c, 4, (RW(3) + 15));
ldr(c, 4, (RW(3) + 8));
ldl(c, 5, (RW(3) + 23));
ldr(c, 5, (RW(3) + 16));
ldl(c, 6, (RW(3) + 31));
ldr(c, 6, (RW(3) + 24));
sdl(c, 4, (RW(7) + 7));
sdr(c, 4, (RW(7) + 0));
sdl(c, 5, (RW(7) + 15));
sdr(c, 5, (RW(7) + 8));
sdl(c, 6, (RW(7) + 23));
sdr(c, 6, (RW(7) + 16));
SET64(4, (s32)rd32(c, (RW(3) + 32)));
SET64(31, 0x2867e8); wr32(c, (RW(7) + 24), RW(4)); JP_F_00295CA8(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_00286808; }
SET64(31, 0x2867fc); SET64(4, RD(16) + RD(0)); JP_F_00286850(c);
SET64(16, RD(2) + RD(0)); goto L_0028681C;
L_00286808:;
SET64(31, 0x286810);  JP_F_002868A8(c);
SET64(31, 0x286818); SET64(4, RD(16) + RD(0)); JP_F_00286870(c);
SET64(16, RD(2) + RD(0));
L_0028681C:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x28682c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, 0x286834);  JP_F_0029F6E0(c);
SET64(2, RD(16) + RD(0));
L_00286838:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00286850(Ctx *c) { /* func_00286850 */
ENTER(0x286850);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x286860);  JP_F_00257F30(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00286870(Ctx *c) { /* func_00286870 */
ENTER(0x286870);
SET64(3, (s64)(s32)0x410000);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(3) + 25400), RW(4)); return;
}

void JP_F_00286880(Ctx *c) { /* func_00286880 */
ENTER(0x286880);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00286888(Ctx *c) { /* func_00286888 */
ENTER(0x286888);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x286898); SET64(5, RD(0) + RD(0)); JP_F_002869C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_002868A8(Ctx *c) { /* func_002868A8 */
ENTER(0x2868a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, 0x2868bc); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00258558(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002868D0(Ctx *c) { /* func_002868D0 */
ENTER(0x2868d0);
SET32(29, RW(29) + -80);
SET64(3, RD(5) + RD(0));
wr64(c, (RW(29) + 64), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 72), RD(31));
SET64(19, (s32)rd32(c, (RW(20) + 8188)));
{ int t = RD(3) == RD(2); SET64(18, (s32)rd32(c, (RW(19) + 0))); if (t) goto L_00286924; }
if (RD(3) == RD(0)) { wr32(c, (RW(19) + 48), RW(0)); goto L_00286920; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2); SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_00286938; }
SET64(2, RD(0) + RD(0)); goto L_002869A4;
L_00286920:;
SET64(5, RD(0) + RD(0));
L_00286924:;
SET64(31, 0x28692c);  JP_F_00286A10(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_002869A0;
L_00286938:;
SET64(31, 0x286940); SET64(4, RD(18) + RD(0)); JP_F_002861B0(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_002869A0; }
SET64(31, 0x286950); SET64(4, RD(18) + RD(0)); JP_F_00258E20(c);
SET64(4, RD(20) + RD(0));
SET64(17, RD(2) + RD(0));
SET32(5, RW(29) + 16);
SET64(31, 0x286964); SET64(6, RD(17) + RD(0)); JP_F_00286A98(c);
SET64(2, (s32)rd32(c, (RW(19) + 48)));
SET64(16, (s32)rd32(c, (RW(29) + 16)));
SET64(4, RD(18) + RD(0));
SET32(16, RW(16) + RW(2));
SET64(31, 0x28697c); SET64(5, RD(16) + RD(0)); JP_F_0025A518(c);
SET32(4, RW(20) + 4120);
SET32(16, RW(16) - RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 16)));
wr32(c, (RW(19) + 48), RW(16));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 0), RD(2));
SET64(31, 0x28699c); wr64(c, (RW(29) + 8), RD(17)); JP_F_0029A2F0(c);
SET64(16, rd64(c, (RW(29) + 32)));
L_002869A0:;
SET64(2, RD(0) + RD(0));
L_002869A4:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002869C0(Ctx *c) { /* func_002869C0 */
ENTER(0x2869c0);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(2) + RD(0));
SET32(5, RW(4) + 4120);
SET64(3, (s32)rd32(c, (RW(4) + 8188)));
wr32(c, (RW(3) + 44), RW(2));
{ int t = RD(2) != RD(0); SET64(7, (s32)rd32(c, (RW(3) + 0))); if (t) goto L_002869F4; }
SET64(3, (s32)rd32(c, (RW(4) + 80)));
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00286A08; }
L_002869F4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(7) + RD(0));
SET32(29, RW(29) + 16); { JP_F_00286A58(c); return; }
L_00286A08:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00286A10(Ctx *c) { /* func_00286A10 */
ENTER(0x286a10);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 8188)));
SET32(4, RW(4) + 4120);
SET64(5, RD(4) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, (s32)rd32(c, (RW(3) + 0))); if (t) goto L_00286A44; }
SET64(3, (s32)rd32(c, (RW(3) + 44)));
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00286A50; }
L_00286A44:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00286A58(c); return; }
L_00286A50:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00286A58(Ctx *c) { /* func_00286A58 */
ENTER(0x286a58);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x286a78); SET64(5, RD(17) + RD(0)); JP_F_0025A1C8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029A2E0(c); return; }
}

void JP_F_00286A98(Ctx *c) { /* func_00286A98 */
ENTER(0x286a98);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
SET32(6, RW(29) + 4);
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x286abc); SET64(5, RD(29) + RD(0)); JP_F_00299280(c);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x286acc); SET64(6, (s32)rd32(c, (RW(29) + 4))); JP_F_0027B438(c);
wr32(c, (RW(17) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00286AE8(Ctx *c) { /* func_00286AE8 */
ENTER(0x286ae8);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xc03);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_00286B08(Ctx *c) { /* func_00286B08 */
ENTER(0x286b08);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xc03);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_00286B28(Ctx *c) { /* func_00286B28 */
ENTER(0x286b28);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xc03);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_00286B48(Ctx *c) { /* func_00286B48 */
ENTER(0x286b48);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xc03);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_00286B68(Ctx *c) { /* func_00286B68 */
ENTER(0x286b68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x286b80); SET64(16, RD(4) + RD(0)); JP_F_00286BF8(c);
SET64(6, RD(2) + RD(0));
if (RD(6) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00286BE4; }
SET64(16, (s32)rd32(c, (RW(16) + 8188)));
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 52)));
{ int t = RD(3) != RD(0); SET64(17, (s32)rd32(c, (RW(16) + 0))); if (t) goto L_00286BE0; }
SET64(3, (s32)rd32(c, (RW(6) + 0)));
{ int t = RD(3) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00286BE0; }
SET64(7, (s32)rd32(c, (RW(6) + 20)));
SET64(5, (s32)rd32(c, (RW(6) + 12)));
SET64(31, 0x286bbc); SET64(6, (s32)rd32(c, (RW(6) + 16))); JP_F_0024F0A0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x286bc8); SET64(5, RD(0) + RD(0)); JP_F_0025A688(c);
SET32(2, RW(0) + 1);
SET64(3, (s64)(s32)0x280000);
wr32(c, (RW(16) + 52), RW(2));
SET32(3, RW(3) + 23488);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 60), RW(3));
L_00286BE0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00286BE4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00286BF8(Ctx *c) { /* func_00286BF8 */
ENTER(0x286bf8);
SET64(3, (s32)rd32(c, (RW(4) + 13864)));
SET64(2, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 8188)));
{ int t = RD(3) == RD(0); SET32(5, RW(3) + 3340); if (t) goto L_00286C20; }
SET64(2, (s32)rd32(c, (RW(4) + 64)));
SET64(3, RD(0) + RD(0));
SET64(3, RSD(3) < RSD(2));
SET64(2, RD(0) + RD(0));
if (RD(3) == 0) SET64(2, RD(5));
L_00286C20:;
 return;
}

void JP_F_00286C28(Ctx *c) { /* func_00286C28 */
ENTER(0x286c28);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x286c4c); SET64(18, RD(6) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x1a1); if (t) goto L_00286C78; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00286C78:;
SET64(31, 0x286c80); SET32(5, RW(0) + 6); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00286CA0; }
SET64(2, (s32)rd32(c, (RW(16) + 8460)));
SET64(3, (s32)rd32(c, (RW(2) + 4)));
{ u32 t = RW(3); SET64(31, 0x286ca0);  rt_call(c, t); }
L_00286CA0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00286CB8(Ctx *c) { /* func_00286CB8 */
ENTER(0x286cb8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x286cd4); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00286CF8; }
SET64(4, RD(0) + RD(0));
SET64(31, 0x286cec); SET64(5, RD(5) | 0x1a2); JP_F_0028A8F8(c);
SET64(2, RD(0) + RD(0)); goto L_00286D1C;
L_00286CF8:;
SET64(31, 0x286d00); SET32(5, RW(0) + 6); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00286D1C; }
SET64(3, (s32)rd32(c, (RW(16) + 8460)));
SET64(2, (s32)rd32(c, (RW(3) + 8)));
{ u32 t = RW(2); SET64(31, 0x286d1c);  rt_call(c, t); }
L_00286D1C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00286D30(Ctx *c) { /* func_00286D30 */
ENTER(0x286d30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x286d4c); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00286D70; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x1a3);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00286D70:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x286d7c); SET32(5, RW(0) + 6); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00286D98; }
SET64(2, (s32)rd32(c, (RW(16) + 8460)));
SET64(3, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(3); SET64(31, 0x286d98);  rt_call(c, t); }
L_00286D98:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00286DB0(Ctx *c) { /* func_00286DB0 */
ENTER(0x286db0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x286dc4); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x1a4); if (t) goto L_00286DE8; }
SET64(31, 0x286ddc);  JP_F_0028A8F8(c);
SET64(2, RD(0) + RD(0)); goto L_00286E0C;
L_00286DE8:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x286df4); SET32(5, RW(0) + 6); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00286E0C; }
SET64(3, (s32)rd32(c, (RW(16) + 8460)));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
{ u32 t = RW(2); SET64(31, 0x286e0c);  rt_call(c, t); }
L_00286E0C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00286E20(Ctx *c) { /* func_00286E20 */
ENTER(0x286e20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x286e40); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00286E64; }
SET64(2, (s32)rd32(c, (RW(16) + 8460)));
SET64(2, (s32)rd32(c, (RW(2) + 20)));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00286E60; }
{ u32 t = RW(2); SET64(31, 0x286e60); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_00286E60:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00286E64:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00286E78(Ctx *c) { /* func_00286E78 */
ENTER(0x286e78);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00286E80(Ctx *c) { /* func_00286E80 */
ENTER(0x286e80);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00286E88(Ctx *c) { /* func_00286E88 */
ENTER(0x286e88);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x286ea0); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00286EB8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00286EC8(c); return; }
L_00286EB8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00286EC8(Ctx *c) { /* func_00286EC8 */
ENTER(0x286ec8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x286edc); SET64(16, RD(4) + RD(0)); JP_F_00286EF8(c);
SET64(31, 0x286ee4); SET64(4, RD(16) + RD(0)); JP_F_00286F68(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00286EF8(Ctx *c) { /* func_00286EF8 */
ENTER(0x286ef8);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 7);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x286f18); SET32(17, RW(0) + 1); JP_F_0029A0E0(c);
{ int t = RD(2) == RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_00286F50; }
SET64(31, 0x286f28); SET64(5, (s32)rd32(c, (RW(16) + 8468))); JP_F_00288788(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 7);
{ int t = RD(2) != RD(17); SET32(6, RW(0) + 1); if (t) goto L_00286F50; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029A0C8(c); return; }
L_00286F50:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00286F68(Ctx *c) { /* func_00286F68 */
ENTER(0x286f68);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 7);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x286f88); SET32(17, RW(0) + 1); JP_F_0029A110(c);
{ int t = RD(2) == RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_00286FC0; }
SET64(31, 0x286f98); SET64(5, (s32)rd32(c, (RW(16) + 8468))); JP_F_002887C8(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 7);
{ int t = RD(2) != RD(17); SET32(6, RW(0) + 1); if (t) goto L_00286FC0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029A0F8(c); return; }
L_00286FC0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00286FD8(Ctx *c) { /* func_00286FD8 */
ENTER(0x286fd8);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x286ff0); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
SET32(3, RW(16) + 13780);
{ int t = RD(2) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_00287008; }
SET64(31, 0x287004); wr32(c, (RW(16) + 8460), RW(3)); JP_F_00287018(c);
SET64(2, RD(0) + RD(0));
L_00287008:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00287018(Ctx *c) { /* func_00287018 */
ENTER(0x287018);
 return;
}

void JP_F_00287020(Ctx *c) { /* func_00287020 */
ENTER(0x287020);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00287028(Ctx *c) { /* func_00287028 */
ENTER(0x287028);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x287040); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 3);
SET32(6, RW(0) + 5);
SET64(7, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_00287060; }
SET64(31, 0x287060);  JP_F_0029A078(c);
L_00287060:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00287070(Ctx *c) { /* func_00287070 */
ENTER(0x287070);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x287088); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 3);
SET32(6, RW(0) + 6);
SET64(7, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_002870A8; }
SET64(31, 0x2870a8);  JP_F_0029A078(c);
L_002870A8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002870B8(Ctx *c) { /* func_002870B8 */
ENTER(0x2870b8);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2870d0); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 3);
SET32(6, RW(0) + 7);
SET64(7, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_002870F0; }
SET64(31, 0x2870f0);  JP_F_0029A078(c);
L_002870F0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00287100(Ctx *c) { /* func_00287100 */
ENTER(0x287100);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x287120); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
SET32(5, RW(0) + 3);
SET32(6, RW(0) + 8);
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_00287140; }
SET64(31, 0x287140);  JP_F_0029A078(c);
L_00287140:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00287158(Ctx *c) { /* func_00287158 */
ENTER(0x287158);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xa01);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_00287178(Ctx *c) { /* func_00287178 */
ENTER(0x287178);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xa01);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_00287198(Ctx *c) { /* func_00287198 */
ENTER(0x287198);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xa01);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_002871B8(Ctx *c) { /* func_002871B8 */
ENTER(0x2871b8);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xa01);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_002871D8(Ctx *c) { /* func_002871D8 */
ENTER(0x2871d8);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002871E0(Ctx *c) { /* func_002871E0 */
ENTER(0x2871e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002888F0(c); return; }
}

void JP_F_002871F8(Ctx *c) { /* func_002871F8 */
ENTER(0x2871f8);
 return;
}

void JP_F_00287200(Ctx *c) { /* func_00287200 */
ENTER(0x287200);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET32(17, RW(16) + 8);
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET64(5, RD(17) + RD(0));
SET64(4, RD(29) + RD(0));
SET64(31, 0x287238); SET64(6, (s32)rd32(c, (RW(16) + 4))); JP_F_00287338(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s32)rd32(c, (RW(16) + 40)));
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(6, RD(17) + RD(0));
div_s(c, 0, RSW(3), RSW(2));
SET64(7, RD(0) + RD(0));
if (RD(2) == RD(0)) { rt_break(c, 0x287258); goto L_0028725C; }
L_0028725C:;
SET64(8, c->hi.d[0]);
SET64(31, 0x287268);  JP_F_00287378(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(6, RD(17) + RD(0));
SET32(7, RW(0) + 1);
{ int t = RD(2) != RD(0); SET32(8, RW(0) + 2048); if (t) goto L_0028731C; }
SET64(31, 0x287288);  JP_F_00287378(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_00287320; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(7, RW(0) + 2);
SET64(8, RD(0) + RD(0));
SET64(31, 0x2872a8); SET64(6, RD(17) + RD(0)); JP_F_00287378(c);
SET64(4, RD(19) + RD(0));
SET32(8, RW(0) + 3);
SET64(7, RD(17) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_0028731C; }
SET64(31, 0x2872c4); SET64(6, RD(29) + RD(0)); JP_F_00287578(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x2872d8); SET32(7, RW(0) + 4); JP_F_00287630(c);
SET64(4, RD(19) + RD(0));
SET64(6, RD(29) + RD(0));
SET32(8, RW(0) + 5);
SET64(5, RD(18) + RD(0));
SET64(31, 0x2872f0); SET64(7, RD(17) + RD(0)); JP_F_00287578(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x287304); SET32(7, RW(0) + 6); JP_F_00287630(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x287318); SET32(7, RW(0) + 7); JP_F_00287758(c);
SET64(2, RD(0) + RD(0));
L_0028731C:;
SET64(16, rd64(c, (RW(29) + 32)));
L_00287320:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00287338(Ctx *c) { /* func_00287338 */
ENTER(0x287338);
SET64(9, RD(4) + RD(0));
SET64(8, RD(5) + RD(0));
SET64(7, RD(0) + RD(0));
L_00287348:;
SET32(2, RW(7) << 2);
SET32(7, RW(7) + 1);
SET32(3, RW(2) + RW(8));
SET32(2, RW(2) + RW(9));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(7) < (s64)8);
wr32(c, (RW(2) + 0), RW(6));
{ int t = RD(5) != RD(0); SET32(6, RW(6) + RW(4)); if (t) { POLL(); goto L_00287348; } }
 return;
}

void JP_F_00287378(Ctx *c) { /* func_00287378 */
ENTER(0x287378);
SET32(2, RW(7) << 3);
SET32(29, RW(29) + -80);
SET32(2, RW(2) - RW(7));
SET32(9, RW(7) << 2);
wr64(c, (RW(29) + 32), RD(16));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 40), RD(17));
SET32(6, RW(6) + RW(9));
wr64(c, (RW(29) + 48), RD(18));
SET32(2, RW(2) + RW(7));
wr64(c, (RW(29) + 56), RD(19));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 64), RD(31));
SET32(16, RW(4) + RW(2));
SET64(7, RD(8) + RD(0));
SET32(5, RW(5) + RW(9));
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET64(4, RD(29) + RD(0));
SET32(17, RW(16) + 16);
{ int t = RD(3) != RD(0); SET64(6, RD(3) + RD(0)); if (t) goto L_002873D8; }
SET64(19, RD(0) + RD(0));
SET32(18, RW(0) + 4); goto L_00287404;
L_002873D8:;
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(19, RW(0) + 1);
SET64(31, 0x2873e8); SET32(18, RW(0) + 5); JP_F_00287438(c);
SET64(6, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET32(7, RW(0) + 1); if (t) goto L_00287418; }
SET64(31, 0x287404);  JP_F_00287958(c);
L_00287404:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x287414); SET64(6, RD(19) + RD(0)); JP_F_002877A8(c);
SET64(2, RD(0) + RD(0));
L_00287418:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00287438(Ctx *c) { /* func_00287438 */
ENTER(0x287438);
SET32(29, RW(29) + -16);
SET64(3, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET32(2, RW(6) - RW(7));
SET64(6, RD(7) + RD(0));
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 8), RD(31));
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x40c);
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 8), RW(3));
{ int t = RSD(2) > 0; wr32(c, (RW(16) + 12), RW(2)); if (t) goto L_00287480; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00287480:;
wr32(c, (RW(16) + 16), RW(7));
SET64(4, RD(3) + RD(0));
wr32(c, (RW(16) + 20), RW(0));
SET64(31, 0x287494); SET64(5, RD(2) + RD(0)); JP_F_00269A78(c);
SET64(4, RD(0) + RD(0));
SET64(5, (s64)(s32)0xff000000);
wr32(c, (RW(16) + 4), RW(2));
{ int t = RD(2) != RD(0); SET64(5, RD(5) | 0x40a); if (t) goto L_002874B8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_002874B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002874D0(Ctx *c) { /* func_002874D0 */
ENTER(0x2874d0);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2874e8); SET64(16, RD(4) + RD(0)); JP_F_00287510(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2874f4); SET32(5, RW(0) + 1); JP_F_00287510(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 2);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00287510(c); return; }
}

void JP_F_00287510(Ctx *c) { /* func_00287510 */
ENTER(0x287510);
SET32(2, RW(5) << 3);
SET32(29, RW(29) + -16);
SET32(2, RW(2) - RW(5));
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 8), RD(31));
SET32(2, RW(2) + RW(5));
SET32(4, RW(4) + 4872);
SET32(2, RW(2) << 2);
SET32(6, RW(0) + 5);
SET32(4, RW(4) + RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) != RD(6); SET32(16, RW(4) + 16); if (t) goto L_00287568; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00287568; }
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(3); SET64(31, 0x287564);  rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_00287568:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00287578(Ctx *c) { /* func_00287578 */
ENTER(0x287578);
SET32(2, RW(8) << 3);
SET32(29, RW(29) + -48);
SET32(2, RW(2) - RW(8));
SET32(3, RW(8) << 2);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(6) + RW(3));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(7) + RW(3));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET32(2, RW(2) + RW(8));
SET32(2, RW(2) << 2);
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET32(16, RW(5) + RW(2));
SET32(5, RW(0) + 1);
SET64(6, RD(0) < RD(4));
SET64(31, 0x2875cc); SET64(4, RD(16) + RD(0)); JP_F_002877A8(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET32(16, RW(16) + 16);
SET32(2, RW(19) + 5800);
SET32(19, RW(19) + 7840);
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(16) + 4), RW(4));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 16), RW(2));
SET32(2, RW(0) + 15);
L_002875F8:;
SET32(2, RW(2) + -1);
wr32(c, (RW(19) + 0), RW(0));
{ int t = RSD(2) >= 0; SET32(19, RW(19) + -136); if (t) { POLL(); goto L_002875F8; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00287630(Ctx *c) { /* func_00287630 */
ENTER(0x287630);
SET32(2, RW(7) << 3);
SET32(29, RW(29) + -32);
SET32(2, RW(2) - RW(7));
SET32(3, RW(7) << 2);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(5) + RW(3));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(6) + RW(3));
wr64(c, (RW(29) + 24), RD(31));
SET32(2, RW(2) + RW(7));
SET32(2, RW(2) << 2);
SET32(5, RW(0) + 2);
SET64(6, (s32)rd32(c, (RW(18) + 0)));
SET32(16, RW(4) + RW(2));
SET64(4, RD(16) + RD(0));
SET32(16, RW(16) + 16);
SET64(31, 0x287680); SET64(6, RD(0) < RD(6)); JP_F_002877A8(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 4), RW(3));
wr32(c, (RW(16) + 44), RW(0));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002876D0(Ctx *c) { /* func_002876D0 */
ENTER(0x2876d0);
SET32(2, RW(5) << 3);
SET64(11, RD(6) + RD(0));
SET32(2, RW(2) - RW(5));
SET32(3, RW(11) + 7);
SET32(2, RW(2) << 2);
SET64(10, RD(7) + RD(0));
SET32(2, RW(2) + RW(5));
SET64(6, RSD(3) < (s64)0);
SET32(2, RW(2) << 2);
SET32(7, RW(11) + 14);
SET32(4, RW(4) + RW(2));
if (RD(6) != 0) SET64(3, RD(7));
SET32(4, RW(4) + 4888);
SET64(9, RSD(10) < (s64)2);
SET32(5, RSW(3) >> 3);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(9) != RD(0); SET64(6, (s32)rd32(c, (RW(4) + 0))); if (t) goto L_00287728; }
div_s(c, 0, RSW(2), RSW(10));
if (RD(10) == RD(0)) { rt_break(c, 0x287720); goto L_00287724; }
L_00287724:;
SET64(2, c->lo.d[0]);
L_00287728:;
div_s(c, 0, RSW(2), RSW(5));
SET32(2, RW(6) + RW(2));
wr32(c, (RW(4) + 12), RW(11));
wr32(c, (RW(4) + 16), RW(10));
wr32(c, (RW(4) + 8), RW(8));
wr32(c, (RW(4) + 20), RW(6));
wr32(c, (RW(4) + 24), RW(2));
if (RD(5) == RD(0)) { rt_break(c, 0x287748); goto L_0028774C; }
L_0028774C:;
SET64(3, c->lo.d[0]);
wr32(c, (RW(4) + 28), RW(3)); return;
}

void JP_F_00287758(Ctx *c) { /* func_00287758 */
ENTER(0x287758);
SET32(2, RW(7) << 3);
SET32(29, RW(29) + -16);
SET32(2, RW(2) - RW(7));
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) << 2);
SET32(5, RW(0) + 3);
SET32(2, RW(2) + RW(7));
SET32(6, RW(0) + 1);
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 8), RD(31));
SET32(16, RW(4) + RW(2));
SET64(4, RD(16) + RD(0));
SET64(31, 0x287790); SET32(16, RW(16) + 16); JP_F_002877A8(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002877C8(c); return; }
}

void JP_F_002877A8(Ctx *c) { /* func_002877A8 */
ENTER(0x2877a8);
SET32(2, RW(0) + 9);
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(4) + 80), RW(2));
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 76), RW(2)); return;
}

void JP_F_002877C8(Ctx *c) { /* func_002877C8 */
ENTER(0x2877c8);
SET32(2, RW(0) + 2);
L_002877D0:;
SET32(2, RW(2) + -1);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
{ int t = RSD(2) >= 0; SET32(4, RW(4) + 16); if (t) { POLL(); goto L_002877D0; } }
 return;
}

void JP_F_002877F8(Ctx *c) { /* func_002877F8 */
ENTER(0x2877f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x287818); SET64(4, RD(17) + RD(0)); JP_F_002878A0(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 1); if (t) goto L_00287840; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0x408);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00287840:;
SET64(31, 0x287848); SET64(4, RD(16) + RD(0)); JP_F_0029A128(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 2);
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_00287888; }
SET64(31, 0x287860);  JP_F_0029A128(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 3);
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 1); if (t) goto L_00287888; }
SET64(31, 0x287878);  JP_F_0029A128(c);
SET32(3, RW(0) + 2);
SET64(6, RD(0) + RD(0));
if (RD(2) != 0) SET64(6, RD(3));
SET64(4, RD(16) + RD(0));
L_00287888:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_002878E8(c); return; }
}

void JP_F_002878A0(Ctx *c) { /* func_002878A0 */
ENTER(0x2878a0);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_002878DC; }
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002878DC; }
SET64(3, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_002878DC; }
SET64(3, (s32)rd32(c, (RW(4) + 12)));
{ int t = RSD(3) <= 0;  if (t) goto L_002878DC; }
SET64(3, (s32)rd32(c, (RW(4) + 20)));
if (RSD(3) <= 0) { SET64(2, RD(0) + RD(0)); goto L_002878DC; }
L_002878DC:;
 return;
}

void JP_F_002878E8(Ctx *c) { /* func_002878E8 */
ENTER(0x2878e8);
SET32(2, RW(6) << 3);
SET32(29, RW(29) + -16);
SET32(2, RW(2) - RW(6));
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) << 2);
SET32(3, RW(4) + 4872);
SET32(2, RW(2) + RW(6));
SET32(7, RW(0) + 4);
SET32(2, RW(2) << 2);
SET64(8, RD(5) + RD(0));
SET32(3, RW(3) + RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(6, RD(3) + RD(0));
{ int t = RD(2) == RD(7); SET32(3, RW(3) + 16); if (t) goto L_00287938; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x409);
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00287938:;
SET64(7, (s32)rd32(c, (RW(8) + 4)));
SET64(4, RD(3) + RD(0));
SET64(31, 0x287948); SET64(7, RD(0) < RD(7)); JP_F_00287958(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00287958(Ctx *c) { /* func_00287958 */
ENTER(0x287958);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(6) + RD(0));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x287988); SET64(19, RD(5) + RD(0)); JP_F_0028ABB0(c);
wr32(c, (RW(18) + 4), RW(17));
SET32(4, RW(16) + 24);
ldl(c, 2, (RW(19) + 7));
ldr(c, 2, (RW(19) + 0));
ldl(c, 3, (RW(19) + 15));
ldr(c, 3, (RW(19) + 8));
ldl(c, 5, (RW(19) + 23));
ldr(c, 5, (RW(19) + 16));
sdl(c, 2, (RW(16) + 7));
sdr(c, 2, (RW(16) + 0));
sdl(c, 3, (RW(16) + 15));
sdr(c, 3, (RW(16) + 8));
sdl(c, 5, (RW(16) + 23));
SET64(31, 0x2879c4); sdr(c, 5, (RW(16) + 16)); JP_F_002879F8(c);
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
SET64(31, 0x2879d4); SET32(4, RW(16) + 40); JP_F_00296410(c);
SET64(31, 0x2879dc); SET64(4, RD(29) + RD(0)); JP_F_0028ABC8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_002879F8(Ctx *c) { /* func_002879F8 */
ENTER(0x2879f8);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 0), RW(0)); return;
}

void JP_F_00287A08(Ctx *c) { /* func_00287A08 */
ENTER(0x287a08);
SET32(2, RW(5) << 3);
SET32(6, RW(6) << 4);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET32(4, RW(4) + 4888);
SET32(4, RW(4) + RW(6));
ldl(c, 2, (RW(7) + 7));
ldr(c, 2, (RW(7) + 0));
ldl(c, 3, (RW(7) + 15));
ldr(c, 3, (RW(7) + 8));
sdl(c, 2, (RW(4) + 7));
sdr(c, 2, (RW(4) + 0));
sdl(c, 3, (RW(4) + 15));
sdr(c, 3, (RW(4) + 8)); return;
}

void JP_F_00287A50(Ctx *c) { /* func_00287A50 */
ENTER(0x287a50);
SET32(2, RW(5) << 3);
SET32(6, RW(6) << 4);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET32(4, RW(4) + 4888);
SET32(4, RW(4) + RW(6));
ldl(c, 2, (RW(4) + 7));
ldr(c, 2, (RW(4) + 0));
ldl(c, 3, (RW(4) + 15));
ldr(c, 3, (RW(4) + 8));
sdl(c, 2, (RW(7) + 7));
sdr(c, 2, (RW(7) + 0));
sdl(c, 3, (RW(7) + 15));
sdr(c, 3, (RW(7) + 8)); return;
}

void JP_F_00287A98(Ctx *c) { /* func_00287A98 */
ENTER(0x287a98);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 4892)));
wr32(c, (RW(6) + 0), RW(3)); return;
}

void JP_F_00287AC0(Ctx *c) { /* func_00287AC0 */
ENTER(0x287ac0);
SET32(29, RW(29) + -16);
SET64(7, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00287AF0(c); return; }
}

void JP_F_00287AD8(Ctx *c) { /* func_00287AD8 */
ENTER(0x287ad8);
SET32(29, RW(29) + -16);
SET32(7, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00287AF0(c); return; }
}

void JP_F_00287AF0(Ctx *c) { /* func_00287AF0 */
ENTER(0x287af0);
SET32(2, RW(5) << 3);
SET32(29, RW(29) + -48);
SET32(2, RW(2) - RW(5));
wr64(c, (RW(29) + 32), RD(16));
SET32(2, RW(2) << 2);
SET64(16, RD(6) + RD(0));
SET32(2, RW(2) + RW(5));
SET64(5, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + 4872);
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 12), RW(0));
SET32(4, RW(4) + RW(2));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 16), RW(0));
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(4) + 20))); if (t) goto L_00287B50; }
{ int t = RD(4) != RD(0); SET64(6, RD(29) + RD(0)); if (t) goto L_00287B58; }
L_00287B50:;
SET64(2, RD(0) + RD(0)); goto L_00287B84;
L_00287B58:;
SET64(31, 0x287b60); SET32(7, RW(29) + 16); JP_F_00287DA8(c);
SET64(2, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(6, (s32)rd32(c, (RW(29) + 16)));
SET64(3, (s32)rd32(c, (RW(29) + 20)));
wr32(c, (RW(16) + 0), RW(4));
wr32(c, (RW(16) + 12), RW(3));
wr32(c, (RW(16) + 4), RW(5));
wr32(c, (RW(16) + 8), RW(6));
L_00287B84:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00287B98(Ctx *c) { /* func_00287B98 */
ENTER(0x287b98);
SET32(29, RW(29) + -16);
SET64(7, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00287BC8(c); return; }
}

void JP_F_00287BB0(Ctx *c) { /* func_00287BB0 */
ENTER(0x287bb0);
SET32(29, RW(29) + -16);
SET32(7, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00287BC8(c); return; }
}

void JP_F_00287BC8(Ctx *c) { /* func_00287BC8 */
ENTER(0x287bc8);
SET32(29, RW(29) + -80);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(5) + RD(0));
SET32(3, RW(21) << 3);
wr64(c, (RW(29) + 48), RD(22));
SET32(3, RW(3) - RW(21));
SET64(22, RD(4) + RD(0));
SET32(3, RW(3) << 2);
SET32(4, RW(22) + 4872);
SET32(3, RW(3) + RW(21));
wr64(c, (RW(29) + 16), RD(18));
SET32(3, RW(3) << 2);
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(23));
SET64(23, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(4, RW(4) + RW(3));
wr64(c, (RW(29) + 8), RD(17));
SET32(18, RW(4) + 16);
wr64(c, (RW(29) + 64), RD(31));
SET64(19, RD(7) + RD(0));
{ int t = RD(20) == RD(0); SET64(17, (s32)rd32(c, (RW(18) + 4))); if (t) goto L_00287CE8; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00287CE8; }
{ int t = RD(17) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00287C50; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00287CEC;
L_00287C50:;
SET64(31, 0x287c58); SET64(5, RD(19) + RD(0)); JP_F_00287EA0(c);
SET64(3, RD(2) + RD(0));
SET64(2, RSD(3) < RSD(20));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_00287CA0; }
SET32(16, RW(20) - RW(3));
SET64(4, RD(17) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x287c7c); SET64(6, RD(16) + RD(0)); JP_F_00287EA0(c);
SET64(2, RSD(2) < RSD(16));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_00287CA0; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(22) + RD(0));
SET64(31, 0x287c98); SET64(5, RD(5) | 0x40b); JP_F_0028A8F8(c);
SET64(23, RD(2) + RD(0));
SET32(2, RW(0) + 1);
L_00287CA0:;
if (RD(19) != RD(2)) { SET64(2, (s32)rd32(c, (RW(18) + 32))); goto L_00287CD0; }
if (RD(21) != RD(19)) { SET64(2, (s32)rd32(c, (RW(18) + 36))); goto L_00287CBC; }
SET64(31, 0x287cb8); SET64(4, RD(18) + RD(0)); JP_F_00287D18(c);
SET64(2, (s32)rd32(c, (RW(18) + 36)));
L_00287CBC:;
{ int t = RSD(2) < 0; SET32(2, RW(2) + RW(20)); if (t) goto L_00287CDC; }
wr32(c, (RW(18) + 36), RW(2)); goto L_00287CDC;
L_00287CD0:;
{ int t = RSD(2) < 0; SET32(2, RW(2) + RW(20)); if (t) goto L_00287CDC; }
wr32(c, (RW(18) + 32), RW(2));
L_00287CDC:;
SET32(3, RW(0) + 1);
SET64(2, RD(23) + RD(0));
wr32(c, (RW(22) + 68), RW(3));
L_00287CE8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00287CEC:;
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

void JP_F_00287D18(Ctx *c) { /* func_00287D18 */
ENTER(0x287d18);
SET32(29, RW(29) + -48);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET32(16, RW(2) + 24);
wr64(c, (RW(29) + 40), RD(31));
SET32(5, RW(0) + 1);
SET64(6, RD(29) + RD(0));
SET32(7, RW(29) + 16);
SET64(31, 0x287d40); SET64(4, (s32)rd32(c, (RW(2) + 4))); JP_F_00287DA8(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(3) < RD(4));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(29) + 16))); goto L_00287D6C; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(4) + RW(2));
SET64(2, RD(3) < RD(2));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_00287D98; }
SET64(4, (s32)rd32(c, (RW(29) + 16)));
L_00287D6C:;
SET64(2, RD(3) < RD(4));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_00287D90; }
SET64(2, (s32)rd32(c, (RW(29) + 20)));
SET32(2, RW(4) + RW(2));
SET64(2, RD(3) < RD(2));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_00287D98; }
wr32(c, (RW(16) + 4), RW(0));
L_00287D90:;
wr32(c, (RW(16) + 0), RW(0));
SET64(16, rd64(c, (RW(29) + 32)));
L_00287D98:;
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00287DA8(Ctx *c) { /* func_00287DA8 */
ENTER(0x287da8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x287de0); SET64(19, RD(6) + RD(0)); rt_call(c, t); }
SET64(6, (s64)(s32)0x7fff0000);
SET64(20, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET64(6, RD(6) | 0xffff);
{ u32 t = RW(3); SET64(31, 0x287e04); SET64(7, RD(19) + RD(0)); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 4)));
SET64(6, (s64)(s32)0x7fff0000);
SET64(5, RD(18) + RD(0));
SET64(6, RD(6) | 0xffff);
SET64(2, RSD(2) < RSD(20));
{ int t = RD(2) == RD(0); SET64(7, RD(17) + RD(0)); if (t) goto L_00287E58; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
{ u32 t = RW(3); SET64(31, 0x287e34);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(6, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(5) + 28)));
{ u32 t = RW(2); SET64(31, 0x287e4c); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_00287E64;
L_00287E58:;
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 0), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
L_00287E64:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x287e78); SET64(6, RD(19) + RD(0)); rt_call(c, t); }
SET64(2, RD(20) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00287EA0(Ctx *c) { /* func_00287EA0 */
ENTER(0x287ea0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) < (u64)(s64)1);
wr64(c, (RW(29) + 32), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x287ec8); SET64(7, RD(29) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x287ee0); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00287EF8(Ctx *c) { /* func_00287EF8 */
ENTER(0x287ef8);
SET32(2, RW(5) << 3);
SET32(29, RW(29) + -48);
SET32(2, RW(2) - RW(5));
wr64(c, (RW(29) + 16), RD(16));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 24), RD(17));
SET32(2, RW(2) + RW(5));
wr64(c, (RW(29) + 32), RD(18));
SET32(2, RW(2) << 2);
SET64(17, RD(6) + RD(0));
SET32(16, RW(4) + RW(2));
SET64(4, RD(29) + RD(0));
SET32(16, RW(16) + 4912);
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x287f38); SET64(18, RD(7) + RD(0)); JP_F_0028ABB0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(29) + RD(0));
wr32(c, (RW(17) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x287f50); wr32(c, (RW(18) + 0), RW(2)); JP_F_0028ABC8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00287F68(Ctx *c) { /* func_00287F68 */
ENTER(0x287f68);
SET32(2, RW(5) << 3);
SET32(29, RW(29) + -48);
SET32(2, RW(2) - RW(5));
wr64(c, (RW(29) + 16), RD(16));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 24), RD(17));
SET32(2, RW(2) + RW(5));
wr64(c, (RW(29) + 32), RD(18));
SET32(2, RW(2) << 2);
SET64(17, RD(7) + RD(0));
SET32(16, RW(4) + RW(2));
SET64(4, RD(29) + RD(0));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x287fa8); SET32(16, RW(16) + 4912); JP_F_0028ABB0(c);
wr32(c, (RW(16) + 4), RW(17));
SET64(4, RD(29) + RD(0));
SET64(31, 0x287fb8); wr32(c, (RW(16) + 0), RW(18)); JP_F_0028ABC8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00287FD0(Ctx *c) { /* func_00287FD0 */
ENTER(0x287fd0);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 4900))); return;
}

void JP_F_00287FF0(Ctx *c) { /* func_00287FF0 */
ENTER(0x287ff0);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 4924))); return;
}

void JP_F_00288010(Ctx *c) { /* func_00288010 */
ENTER(0x288010);
SET32(2, RW(5) << 3);
SET32(29, RW(29) + -48);
SET32(2, RW(2) - RW(5));
wr64(c, (RW(29) + 16), RD(16));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 24), RD(17));
SET32(2, RW(2) + RW(5));
wr64(c, (RW(29) + 32), RD(18));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 40), RD(31));
SET32(3, RW(4) + RW(2));
SET64(4, RD(29) + RD(0));
SET64(31, 0x288048); SET32(16, RW(3) + 4888); JP_F_0028ABB0(c);
SET64(17, (s32)rd32(c, (RW(16) + 32)));
{ int t = RD(17) != RD(0); SET64(18, (s32)rd32(c, (RW(16) + 36))); if (t) goto L_00288078; }
{ int t = RD(18) == RD(0); SET64(2, (s64)(s32)0x7fff0000); if (t) goto L_0028807C; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(4, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x288074); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(17, RW(18) + RW(2));
L_00288078:;
SET64(2, (s64)(s32)0x7fff0000);
L_0028807C:;
SET64(3, RSD(17) < (s64)0);
SET64(2, RD(2) | 0xffff);
SET64(4, RD(29) + RD(0));
SET64(31, 0x288090); if (RD(3) != 0) SET64(17, RD(2)); JP_F_0028ABC8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(2, RD(17) + RD(0));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002880B0(Ctx *c) { /* func_002880B0 */
ENTER(0x2880b0);
SET64(3, RD(5) + RD(0));
SET64(5, (s64)(s32)0xff000000);
SET32(2, RW(3) << 3);
SET32(29, RW(29) + -16);
SET32(2, RW(2) - RW(3));
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) << 2);
SET32(7, RW(4) + 4872);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
wr32(c, (RW(6) + 0), RW(0));
SET32(7, RW(7) + RW(2));
SET64(3, (s32)rd32(c, (RW(7) + 4)));
{ int t = RD(3) != RD(0); SET64(5, RD(5) | 0x401); if (t) goto L_002880F8; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_002880F8:;
SET64(3, (s32)rd32(c, (RW(7) + 20)));
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(6) + 0), RW(3));
SET32(29, RW(29) + 16); return;
}

void JP_F_00288110(Ctx *c) { /* func_00288110 */
ENTER(0x288110);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET32(4, RW(4) + 4888);
SET64(2, (s32)rd32(c, (RW(4) + 36)));
{ int t = RSD(2) < 0; SET32(3, RW(2) + RW(6)); if (t) goto L_0028813C; }
wr32(c, (RW(4) + 36), RW(3));
L_0028813C:;
 return;
}

void JP_F_00288148(Ctx *c) { /* func_00288148 */
ENTER(0x288148);
SET32(2, RW(5) << 3);
SET32(29, RW(29) + -112);
SET32(2, RW(2) - RW(5));
wr64(c, (RW(29) + 72), RD(21));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 32), RD(16));
SET32(2, RW(2) + RW(5));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
SET32(7, RW(4) + 4872);
wr64(c, (RW(29) + 56), RD(19));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 64), RD(20));
SET32(7, RW(7) + RW(2));
wr64(c, (RW(29) + 80), RD(22));
wr64(c, (RW(29) + 88), RD(23));
wr64(c, (RW(29) + 96), RD(30));
wr64(c, (RW(29) + 104), RD(31));
SET64(3, (s32)rd32(c, (RW(7) + 4)));
{ int t = RD(3) != RD(0); SET64(21, RD(6) + RD(0)); if (t) goto L_002881B0; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x2881a8); SET64(5, RD(5) | 0x401); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_002882C4;
L_002881B0:;
SET32(16, RW(7) + 16);
SET64(31, 0x2881bc); SET64(4, RD(29) + RD(0)); JP_F_0028ABB0(c);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET64(4, RD(29) + RD(0));
wr32(c, (RW(29) + 4), RW(2));
SET64(5, (s32)rd32(c, (RW(16) + 24)));
SET64(19, (s32)rd32(c, (RW(16) + 44)));
SET64(20, (s32)rd32(c, (RW(16) + 28)));
SET64(17, (s32)rd32(c, (RW(16) + 40)));
SET64(23, (s32)rd32(c, (RW(16) + 12)));
SET64(18, (s32)rd32(c, (RW(16) + 16)));
SET64(30, (s32)rd32(c, (RW(16) + 20)));
SET64(22, (s32)rd32(c, (RW(16) + 32)));
wr128(c, (RW(29) + 16) & ~15u, &c->r[5]);
SET64(31, 0x2881f4); SET64(16, (s32)rd32(c, (RW(16) + 36))); JP_F_0028ABC8(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(19) + RW(20));
SET64(2, RSD(17) < RSD(2));
wr32(c, (RW(21) + 8), RW(18));
wr32(c, (RW(21) + 0), RW(3));
wr32(c, (RW(21) + 4), RW(23));
wr32(c, (RW(21) + 36), RW(17));
wr32(c, (RW(21) + 40), RW(19));
{ int t = RD(2) != RD(0); rd128(c, (RW(29) + 16) & ~15u, &c->r[5]); if (t) goto L_00288230; }
wr32(c, (RW(21) + 32), RW(0));
wr32(c, (RW(21) + 12), RW(0));
wr32(c, (RW(21) + 20), RW(0));
wr32(c, (RW(21) + 24), RW(0)); goto L_00288274;
L_00288230:;
SET64(2, RSD(22) < RSD(16));
if (RD(2) == RD(0)) { SET32(2, RW(20) - RW(22)); goto L_00288280; }
SET32(2, RW(16) - RW(22));
SET64(3, RSD(23) < (s64)9);
wr32(c, (RW(21) + 12), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(30) + RW(22)); if (t) goto L_00288258; }
SET32(2, RW(22) << 1);
SET32(2, RW(30) + RW(2));
L_00288258:;
wr32(c, (RW(21) + 20), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(5) + RW(22)); if (t) goto L_0028826C; }
SET32(2, RW(22) << 1);
SET32(2, RW(5) + RW(2));
L_0028826C:;
wr32(c, (RW(21) + 24), RW(2));
wr32(c, (RW(21) + 32), RW(0));
L_00288274:;
wr32(c, (RW(21) + 16), RW(0));
wr32(c, (RW(21) + 28), RW(0)); goto L_002882BC;
L_00288280:;
SET64(3, RSD(23) < (s64)9);
wr32(c, (RW(21) + 12), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(30) + RW(22)); if (t) goto L_00288298; }
SET32(2, RW(22) << 1);
SET32(2, RW(30) + RW(2));
L_00288298:;
wr32(c, (RW(21) + 20), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(5) + RW(22)); if (t) goto L_002882AC; }
SET32(2, RW(22) << 1);
SET32(2, RW(5) + RW(2));
L_002882AC:;
wr32(c, (RW(21) + 32), RW(5));
wr32(c, (RW(21) + 24), RW(2));
wr32(c, (RW(21) + 16), RW(16));
wr32(c, (RW(21) + 28), RW(30));
L_002882BC:;
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 32)));
L_002882C4:;
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

void JP_F_002882F0(Ctx *c) { /* func_002882F0 */
ENTER(0x2882f0);
SET32(3, RW(5) << 3);
SET32(29, RW(29) + -64);
SET32(3, RW(3) - RW(5));
wr64(c, (RW(29) + 32), RD(18));
SET32(3, RW(3) << 2);
SET64(18, RD(4) + RD(0));
SET32(3, RW(3) + RW(5));
wr64(c, (RW(29) + 24), RD(17));
SET32(3, RW(3) << 2);
SET64(17, RD(6) + RD(0));
SET32(6, RW(18) + 4872);
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 16), RD(16));
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(19, RD(0) + RD(0));
{ int t = RD(17) == RD(0); SET32(6, RW(6) + RW(3)); if (t) goto L_002883C8; }
SET64(2, (s32)rd32(c, (RW(6) + 4)));
if (RD(2) != RD(0)) { SET32(16, RW(6) + 16); goto L_00288358; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x288350); SET64(5, RD(5) | 0x401); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_002883CC;
L_00288358:;
SET64(31, 0x288360); SET64(4, RD(29) + RD(0)); JP_F_0028ABB0(c);
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET64(5, (s64)(s32)0xff000000);
SET64(6, (s32)rd32(c, (RW(16) + 28)));
SET64(5, RD(5) | 0x406);
SET32(2, RW(2) + RW(17));
SET64(3, RSD(2) < RSD(6));
SET32(7, RW(2) - RW(6));
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 32), RW(2)); if (t) goto L_0028838C; }
wr32(c, (RW(16) + 32), RW(7));
L_0028838C:;
SET64(2, (s32)rd32(c, (RW(16) + 40)));
SET64(3, (s32)rd32(c, (RW(16) + 44)));
SET32(2, RW(2) + RW(17));
SET32(3, RW(3) + RW(6));
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 40), RW(2)); if (t) goto L_002883B4; }
SET64(31, 0x2883b0);  JP_F_0028A8F8(c);
SET64(19, RD(2) + RD(0));
L_002883B4:;
SET32(2, RW(0) + 1);
SET64(4, RD(29) + RD(0));
SET64(31, 0x2883c4); wr32(c, (RW(18) + 68), RW(2)); JP_F_0028ABC8(c);
SET64(2, RD(19) + RD(0));
L_002883C8:;
SET64(16, rd64(c, (RW(29) + 16)));
L_002883CC:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_002883E8(Ctx *c) { /* func_002883E8 */
ENTER(0x2883e8);
SET32(2, RW(5) << 3);
SET32(29, RW(29) + -96);
SET32(2, RW(2) - RW(5));
wr64(c, (RW(29) + 56), RD(21));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 16), RD(16));
SET32(2, RW(2) + RW(5));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
SET32(7, RW(4) + 4872);
wr64(c, (RW(29) + 40), RD(19));
SET32(2, RW(2) << 2);
wr64(c, (RW(29) + 48), RD(20));
SET32(7, RW(7) + RW(2));
wr64(c, (RW(29) + 64), RD(22));
wr64(c, (RW(29) + 72), RD(23));
wr64(c, (RW(29) + 80), RD(30));
wr64(c, (RW(29) + 88), RD(31));
SET64(3, (s32)rd32(c, (RW(7) + 4)));
{ int t = RD(3) != RD(0); SET64(21, RD(6) + RD(0)); if (t) goto L_00288450; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x288448); SET64(5, RD(5) | 0x401); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0028856C;
L_00288450:;
SET32(16, RW(7) + 16);
SET64(31, 0x28845c); SET64(4, RD(29) + RD(0)); JP_F_0028ABB0(c);
SET64(20, (s32)rd32(c, (RW(16) + 8)));
SET64(2, (s32)rd32(c, (RW(16) + 28)));
SET64(4, RD(29) + RD(0));
SET64(19, (s32)rd32(c, (RW(16) + 44)));
SET64(17, (s32)rd32(c, (RW(16) + 40)));
SET64(22, (s32)rd32(c, (RW(16) + 12)));
SET64(18, (s32)rd32(c, (RW(16) + 16)));
SET64(23, (s32)rd32(c, (RW(16) + 20)));
SET64(30, (s32)rd32(c, (RW(16) + 24)));
wr32(c, (RW(29) + 4), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 32)));
wr32(c, (RW(29) + 8), RW(3));
SET64(31, 0x288494); SET64(16, (s32)rd32(c, (RW(16) + 36))); JP_F_0028ABC8(c);
SET64(2, RSD(19) < RSD(17));
wr32(c, (RW(21) + 0), RW(20));
wr32(c, (RW(21) + 8), RW(18));
wr32(c, (RW(21) + 4), RW(22));
wr32(c, (RW(21) + 36), RW(17));
{ int t = RD(2) != RD(0); wr32(c, (RW(21) + 40), RW(19)); if (t) goto L_002884C8; }
wr32(c, (RW(21) + 32), RW(0));
wr32(c, (RW(21) + 12), RW(0));
wr32(c, (RW(21) + 20), RW(0));
wr32(c, (RW(21) + 24), RW(0)); goto L_00288510;
L_002884C8:;
SET64(3, (s32)rd32(c, (RW(29) + 8)));
SET64(2, RSD(16) < RSD(3));
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(29) + 4))); goto L_00288520; }
SET32(2, RW(3) - RW(16));
SET64(3, RSD(22) < (s64)9);
wr32(c, (RW(21) + 12), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(23) + RW(16)); if (t) goto L_002884F4; }
SET32(2, RW(16) << 1);
SET32(2, RW(23) + RW(2));
L_002884F4:;
wr32(c, (RW(21) + 20), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(30) + RW(16)); if (t) goto L_00288508; }
SET32(2, RW(16) << 1);
SET32(2, RW(30) + RW(2));
L_00288508:;
wr32(c, (RW(21) + 24), RW(2));
wr32(c, (RW(21) + 32), RW(0));
L_00288510:;
wr32(c, (RW(21) + 16), RW(0));
wr32(c, (RW(21) + 28), RW(0)); goto L_00288564;
L_00288520:;
SET32(2, RW(3) - RW(16));
SET64(3, RSD(22) < (s64)9);
wr32(c, (RW(21) + 12), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(23) + RW(16)); if (t) goto L_0028853C; }
SET32(2, RW(16) << 1);
SET32(2, RW(23) + RW(2));
L_0028853C:;
wr32(c, (RW(21) + 20), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(30) + RW(16)); if (t) goto L_00288550; }
SET32(2, RW(16) << 1);
SET32(2, RW(30) + RW(2));
L_00288550:;
wr32(c, (RW(21) + 32), RW(30));
wr32(c, (RW(21) + 24), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 8)));
wr32(c, (RW(21) + 28), RW(23));
wr32(c, (RW(21) + 16), RW(2));
L_00288564:;
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
L_0028856C:;
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

void JP_F_00288598(Ctx *c) { /* func_00288598 */
ENTER(0x288598);
SET32(3, RW(5) << 3);
SET32(29, RW(29) + -64);
SET32(3, RW(3) - RW(5));
wr64(c, (RW(29) + 32), RD(18));
SET32(3, RW(3) << 2);
SET64(18, RD(4) + RD(0));
SET32(3, RW(3) + RW(5));
wr64(c, (RW(29) + 24), RD(17));
SET32(3, RW(3) << 2);
SET64(17, RD(6) + RD(0));
SET32(6, RW(18) + 4872);
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 16), RD(16));
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(19, RD(0) + RD(0));
{ int t = RD(17) == RD(0); SET32(6, RW(6) + RW(3)); if (t) goto L_0028866C; }
SET64(2, (s32)rd32(c, (RW(6) + 4)));
if (RD(2) != RD(0)) { SET32(16, RW(6) + 16); goto L_00288600; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x2885f8); SET64(5, RD(5) | 0x401); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00288670;
L_00288600:;
SET64(31, 0x288608); SET64(4, RD(29) + RD(0)); JP_F_0028ABB0(c);
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 36)));
SET64(5, (s64)(s32)0xff000000);
SET64(3, (s32)rd32(c, (RW(16) + 28)));
SET64(5, RD(5) | 0x407);
SET32(2, RW(2) + RW(17));
SET32(6, RW(2) - RW(3));
SET64(3, RSD(2) < RSD(3));
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 36), RW(2)); if (t) goto L_00288634; }
wr32(c, (RW(16) + 36), RW(6));
L_00288634:;
SET64(2, (s32)rd32(c, (RW(16) + 44)));
SET64(3, (s32)rd32(c, (RW(16) + 40)));
SET32(2, RW(2) + RW(17));
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 44), RW(2)); if (t) goto L_00288658; }
SET64(31, 0x288654);  JP_F_0028A8F8(c);
SET64(19, RD(2) + RD(0));
L_00288658:;
SET32(2, RW(0) + 1);
SET64(4, RD(29) + RD(0));
SET64(31, 0x288668); wr32(c, (RW(18) + 68), RW(2)); JP_F_0028ABC8(c);
SET64(2, RD(19) + RD(0));
L_0028866C:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00288670:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00288688(Ctx *c) { /* func_00288688 */
ENTER(0x288688);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00288690(Ctx *c) { /* func_00288690 */
ENTER(0x288690);
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 68), RW(2));
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002886A0(Ctx *c) { /* func_002886A0 */
ENTER(0x2886a0);
SET32(2, RW(5) << 3);
SET32(29, RW(29) + -16);
SET32(2, RW(2) - RW(5));
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) << 2);
SET32(8, RW(4) + 4872);
SET32(2, RW(2) + RW(5));
SET64(7, RD(6) + RD(0));
SET32(2, RW(2) << 2);
SET32(8, RW(8) + RW(2));
SET64(3, (s32)rd32(c, (RW(8) + 4)));
{ int t = RD(3) != RD(0); SET32(6, RW(0) + 11); if (t) goto L_002886E8; }
SET64(5, (s32)rd32(c, (RW(8) + 76)));
SET64(8, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029A078(c); return; }
L_002886E8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_002886F8(Ctx *c) { /* func_002886F8 */
ENTER(0x2886f8);
SET32(2, RW(5) << 3);
SET32(29, RW(29) + -16);
SET32(2, RW(2) - RW(5));
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(2) << 2);
SET64(16, RD(4) + RD(0));
SET32(2, RW(2) + RW(5));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET32(8, RW(16) + 4872);
SET32(2, RW(2) << 2);
SET64(7, RD(6) + RD(0));
SET32(8, RW(8) + RW(2));
SET64(3, (s32)rd32(c, (RW(8) + 4)));
{ int t = RD(3) != RD(0); SET32(6, RW(0) + 12); if (t) goto L_00288748; }
SET64(5, (s32)rd32(c, (RW(8) + 76)));
SET64(31, 0x288744); SET64(8, RD(0) + RD(0)); JP_F_0029A078(c);
SET64(5, RD(2) + RD(0));
L_00288748:;
SET32(3, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 68), RW(3));
SET64(2, RD(5) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00288768(Ctx *c) { /* func_00288768 */
ENTER(0x288768);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
wr32(c, (RW(4) + 4880), RW(6)); return;
}

void JP_F_00288788(Ctx *c) { /* func_00288788 */
ENTER(0x288788);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 4880))); return;
}

void JP_F_002887A8(Ctx *c) { /* func_002887A8 */
ENTER(0x2887a8);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
wr32(c, (RW(4) + 4884), RW(6)); return;
}

void JP_F_002887C8(Ctx *c) { /* func_002887C8 */
ENTER(0x2887c8);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 4884))); return;
}

void JP_F_002887E8(Ctx *c) { /* func_002887E8 */
ENTER(0x2887e8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2887f8); SET64(6, RD(29) + RD(0)); JP_F_00287AD8(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(2, (s32)rd32(c, (RW(29) + 12)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(2, RW(3) + RW(2));
SET32(29, RW(29) + 48); return;
}

void JP_F_00288810(Ctx *c) { /* func_00288810 */
ENTER(0x288810);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x288820); SET64(6, RD(29) + RD(0)); JP_F_00287AC0(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(2, (s32)rd32(c, (RW(29) + 12)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(2, RW(3) + RW(2));
SET32(29, RW(29) + 48); return;
}

void JP_F_00288838(Ctx *c) { /* func_00288838 */
ENTER(0x288838);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28885c); SET64(18, RD(6) + RD(0)); JP_F_00288980(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 1); if (t) goto L_00288890; }
SET64(31, 0x288874);  JP_F_0026A500(c);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(31, 0x288888); SET32(6, RW(0) + 1); JP_F_0026A500(c);
wr32(c, (RW(18) + 0), RW(2)); goto L_002888D8;
L_00288890:;
SET64(31, 0x288898); SET64(4, RD(16) + RD(0)); JP_F_002889B8(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002888D0; }
SET64(31, 0x2888a8);  JP_F_00269908(c);
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(17) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x2888c0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) - RW(2));
wr32(c, (RW(18) + 0), RW(3)); goto L_002888D8;
L_002888D0:;
wr32(c, (RW(17) + 0), RW(0));
wr32(c, (RW(18) + 0), RW(0));
L_002888D8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002888F0(Ctx *c) { /* func_002888F0 */
ENTER(0x2888f0);
SET32(29, RW(29) + -32);
SET64(6, RD(0) + RD(0));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28890c); SET32(5, RW(0) + 8); JP_F_00269A78(c);
SET64(16, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
{ u32 t = RW(2); SET64(31, 0x288920); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x540000);
wr32(c, (RW(3) + -22864), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(3); SET64(31, 0x288938); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(5, RW(0) + 8);
SET64(31, 0x288944); SET64(4, RD(29) + RD(0)); JP_F_00269060(c);
SET64(16, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
{ u32 t = RW(2); SET64(31, 0x288958); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x540000);
wr32(c, (RW(3) + -22860), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(3); SET64(31, 0x288970); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00288980(Ctx *c) { /* func_00288980 */
ENTER(0x288980);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
{ u32 t = RW(2); SET64(31, 0x288998);  rt_call(c, t); }
SET64(3, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(3) + -22864)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) ^ RD(4));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002889B8(Ctx *c) { /* func_002889B8 */
ENTER(0x2889b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
{ u32 t = RW(2); SET64(31, 0x2889d0);  rt_call(c, t); }
SET64(3, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(3) + -22860)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) ^ RD(4));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002889F0(Ctx *c) { /* func_002889F0 */
ENTER(0x2889f0);
SET64(2, RD(4) + RD(0));
SET64(3, RD(2) << 32);
SET64(3, RSD(3) >> 32);
SET64(2, RSD(2) >> 32);
SET64(3, RD(5) < RD(3));
SET64(5, RD(5) << 32);
SET64(3, RD(3) << 32);
SET64(5, RD(5) >> 32);
SET64(3, RD(3) >> 32);
SET64(2, RD(2) + RD(3));
SET64(2, RD(2) << 32);
SET64(2, RD(2) | RD(5)); return;
}

void JP_F_00288A28(Ctx *c) { /* func_00288A28 */
ENTER(0x288a28);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x288a3c); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET32(6, RW(0) + 1);
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x161); if (t) goto L_00288A68; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00288A68:;
SET64(31, 0x288a70); SET32(5, RW(0) + 49); JP_F_002977B8(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00288A88(Ctx *c) { /* func_00288A88 */
ENTER(0x288a88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x288a98); SET32(5, RW(0) + 49); JP_F_00297980(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00288AA8(Ctx *c) { /* func_00288AA8 */
ENTER(0x288aa8);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 49);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x288ac0); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 56); if (t) goto L_00288ADC; }
SET64(31, 0x288ad4);  JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00288AE4; }
L_00288ADC:;
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
L_00288AE4:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00288AF0(Ctx *c) { /* func_00288AF0 */
ENTER(0x288af0);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 49);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x288b08); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 57); if (t) goto L_00288B24; }
SET64(31, 0x288b1c);  JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00288B2C; }
L_00288B24:;
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
L_00288B2C:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00288B38(Ctx *c) { /* func_00288B38 */
ENTER(0x288b38);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET32(16, RW(18) + 3368);
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x288b60); SET64(17, RD(5) + RD(0)); JP_F_0028ABB0(c);
SET64(6, (s32)rd32(c, (RW(16) + 356)));
SET64(3, (s32)rd32(c, (RW(16) + 360)));
SET64(4, RD(29) + RD(0));
SET32(6, RW(6) + RW(17));
SET32(3, RW(3) + 1);
wr32(c, (RW(16) + 356), RW(6));
SET32(7, RW(3) + 31);
SET64(5, RSD(3) < (s64)0);
SET64(2, RD(3) + RD(0));
if (RD(5) != 0) SET64(2, RD(7));
SET32(2, RSW(2) >> 5);
SET32(2, RW(2) << 5);
SET32(2, RW(3) - RW(2));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 3732), RW(6));
SET64(31, 0x288ba8); wr32(c, (RW(16) + 360), RW(3)); JP_F_0028ABC8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00288BC0(Ctx *c) { /* func_00288BC0 */
ENTER(0x288bc0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET32(16, RW(17) + 3368);
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(0) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x288bf8); SET64(18, RD(6) + RD(0)); JP_F_0028ABB0(c);
SET64(7, (s32)rd32(c, (RW(16) + 500)));
SET64(3, (s32)rd32(c, (RW(16) + 504)));
SET64(4, RD(29) + RD(0));
SET32(6, RW(7) + 31);
SET64(5, RSD(7) < (s64)0);
SET64(2, RD(7) + RD(0));
SET32(3, RW(7) - RW(3));
if (RD(5) != 0) SET64(2, RD(6));
SET64(3, RSD(3) < (s64)32);
{ int t = RD(3) == RD(0); SET32(2, RSW(2) >> 5); if (t) goto L_00288C4C; }
SET32(2, RW(2) << 5);
wr32(c, (RW(16) + 492), RW(18));
SET32(2, RW(7) - RW(2));
SET32(20, RW(0) + 1);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 3876), RW(19));
SET64(3, (s32)rd32(c, (RW(16) + 500)));
SET32(3, RW(3) + 1);
wr32(c, (RW(16) + 500), RW(3));
L_00288C4C:;
SET64(31, 0x288c54);  JP_F_0028ABC8(c);
SET64(2, RD(20) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00288C78(Ctx *c) { /* func_00288C78 */
ENTER(0x288c78);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET32(16, RW(18) + 3368);
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x288cac); SET64(17, RD(6) + RD(0)); JP_F_0028ABB0(c);
SET64(3, (s32)rd32(c, (RW(16) + 504)));
SET64(2, (s32)rd32(c, (RW(16) + 500)));
SET32(2, RW(2) - RW(3));
{ int t = RSD(2) > 0; SET64(4, RD(29) + RD(0)); if (t) goto L_00288CD0; }
SET32(2, RW(0) + -1);
SET64(20, RD(0) + RD(0));
wr32(c, (RW(19) + 0), RW(2)); goto L_00288D18;
L_00288CD0:;
SET64(2, (s32)rd32(c, (RW(16) + 492)));
SET32(20, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 504)));
SET64(5, RSD(3) < (s64)0);
SET32(6, RW(3) + 31);
SET64(2, RD(3) + RD(0));
if (RD(5) != 0) SET64(2, RD(6));
SET32(2, RSW(2) >> 5);
SET32(2, RW(2) << 5);
SET32(3, RW(3) - RW(2));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(18));
SET64(5, (s32)rd32(c, (RW(3) + 3876)));
wr32(c, (RW(19) + 0), RW(5));
SET64(2, (s32)rd32(c, (RW(16) + 504)));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 504), RW(2));
L_00288D18:;
SET64(31, 0x288d20);  JP_F_0028ABC8(c);
SET64(2, RD(20) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00288D48(Ctx *c) { /* func_00288D48 */
ENTER(0x288d48);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 72), RD(23));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 56), RD(21));
wr64(c, (RW(29) + 64), RD(22));
wr64(c, (RW(29) + 80), RD(30));
wr64(c, (RW(29) + 88), RD(31));
SET64(31, 0x288d88); SET64(23, RD(7) + RD(0)); JP_F_0028AB18(c);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00288DA8; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x288d9c); SET64(5, RD(5) | 0x162); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00288E74;
L_00288DA8:;
SET64(22, (s32)rd32(c, (RW(16) + 3688)));
SET32(17, RW(16) + 3368);
wr32(c, (RW(23) + 0), RW(0));
SET64(4, RD(16) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x288dc4); SET64(6, RD(20) + RD(0)); JP_F_00298568(c);
SET64(3, (s32)rd32(c, (RW(17) + 356)));
SET64(30, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_00288E70; }
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET32(3, RW(0) + 1);
{ int t = RD(4) == RD(3); SET64(4, RD(29) + RD(0)); if (t) goto L_00288E70; }
SET64(31, 0x288dec); SET32(21, RW(16) + 3380); JP_F_0028ABB0(c);
SET64(16, (s32)rd32(c, (RW(17) + 360)));
SET64(17, RD(0) + RD(0));
L_00288DF8:;
SET64(2, RSD(17) < (s64)32);
{ int t = RD(2) == RD(0); SET32(17, RW(17) + 1); if (t) goto L_00288E4C; }
SET32(4, RW(16) + 31);
SET64(3, RSD(16) < (s64)0);
SET64(2, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(20) + 0)));
if (RD(3) != 0) SET64(2, RD(4));
SET64(6, RD(22) + RD(0));
SET32(2, RSW(2) >> 5);
SET32(2, RW(2) << 5);
SET32(2, RW(16) - RW(2));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(21));
SET64(31, 0x288e38); SET64(4, (s32)rd32(c, (RW(2) + 352))); JP_F_0027B438(c);
SET64(18, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(2, RSD(2) < RSD(18));
if (RD(2) != RD(0)) { SET32(16, RW(16) + -1); { POLL(); goto L_00288DF8; } }
L_00288E4C:;
wr32(c, (RW(23) + 0), RW(16));
SET64(4, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET32(2, RW(2) - RW(18));
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(0));
SET64(31, 0x288e6c); wr32(c, (RW(19) + 0), RW(2)); JP_F_0028ABC8(c);
SET64(2, RD(30) + RD(0));
L_00288E70:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00288E74:;
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

void JP_F_00288EA0(Ctx *c) { /* func_00288EA0 */
ENTER(0x288ea0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x288ec8); SET64(4, RD(29) + RD(0)); JP_F_0028ABB0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x288ed8); SET64(6, RD(18) + RD(0)); JP_F_00288F40(c);
SET64(5, (s32)rd32(c, (RW(18) + 8)));
{ int t = RD(5) != RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_00288F00; }
SET64(2, (s32)rd32(c, (RW(18) + 12)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00288F04; }
SET64(3, (s32)rd32(c, (RW(18) + 16)));
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2);  if (t) goto L_00288F08; }
L_00288F00:;
SET32(2, RW(0) + 1);
L_00288F04:;
wr8(c, (RW(18) + 0), (u8)RW(2));
L_00288F08:;
{ int t = RD(5) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00288F1C; }
SET64(2, (s32)rd32(c, (RW(18) + 12)));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00288F20; }
L_00288F1C:;
wr8(c, (RW(18) + 1), (u8)RW(2));
L_00288F20:;
SET64(31, 0x288f28);  JP_F_0028ABC8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00288F40(Ctx *c) { /* func_00288F40 */
ENTER(0x288f40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x288f68); SET64(4, RD(16) + RD(0)); JP_F_00288FF0(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x288f78); SET64(6, RD(16) + RD(0)); JP_F_00289050(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_00288FD8; }
SET64(31, 0x288f90);  JP_F_00289058(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00288FDC; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x288fa8); SET64(6, RD(16) + RD(0)); JP_F_00289A58(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_00288FD8; }
SET64(31, 0x288fc0);  JP_F_002895C0(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00288FDC; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x288fd8); SET64(6, RD(16) + RD(0)); JP_F_00289860(c);
L_00288FD8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00288FDC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00288FF0(Ctx *c) { /* func_00288FF0 */
ENTER(0x288ff0);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 64);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28900c); SET64(16, RD(4) + RD(0)); JP_F_001273D0(c);
wr8(c, (RW(16) + 0), (u8)RW(0));
wr32(c, (RW(16) + 44), RW(0));
wr8(c, (RW(16) + 1), (u8)RW(0));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 8), RW(0));
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
wr8(c, (RW(16) + 40), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00289050(Ctx *c) { /* func_00289050 */
ENTER(0x289050);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00289058(Ctx *c) { /* func_00289058 */
ENTER(0x289058);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
SET64(6, RD(29) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x289080); SET64(17, RD(4) + RD(0)); JP_F_00289110(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(0) + -1); if (t) goto L_002890F8; }
wr32(c, (RW(16) + 16), RW(3));
{ int t = RD(3) == RD(4); SET32(2, RW(0) + 1); if (t) goto L_002890F8; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
{ int t = RSD(3) <= 0; SET32(2, RW(3) << 1); if (t) goto L_002890B8; }
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
wr32(c, (RW(16) + 28), RW(2));
L_002890B8:;
SET64(2, (s64)(s32)0x4b0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + 31624);
SET64(5, RD(18) + RD(0));
wr32(c, (RW(16) + 4), RW(2));
SET64(31, 0x2890d4); SET64(6, RD(16) + RD(0)); JP_F_00289290(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2890e4); SET64(6, RD(16) + RD(0)); JP_F_002893D0(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2890f4); SET64(6, RD(16) + RD(0)); JP_F_00289A58(c);
SET32(2, RW(0) + 1);
L_002890F8:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00289110(Ctx *c) { /* func_00289110 */
ENTER(0x289110);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(6, (s64)(s32)0x10000);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x28914c); wr32(c, (RW(22) + 0), RW(0)); JP_F_002894D8(c);
SET64(6, (s64)(s32)0x10000);
SET64(17, RD(2) + RD(0));
SET32(18, RW(17) - RW(19));
SET32(4, RW(17) + 1);
{ int t = RD(17) == RD(0); SET32(21, RW(20) - RW(18)); if (t) goto L_002891D0; }
SET64(31, 0x28916c); SET32(5, RW(21) + -1); JP_F_002894D8(c);
SET64(6, (s64)(s32)0x10000);
SET64(16, RD(2) + RD(0));
SET32(3, RW(16) - RW(19));
SET32(4, RW(16) + 1);
{ int t = RD(16) == RD(0); SET32(5, RW(20) - RW(3)); if (t) goto L_002891D0; }
SET64(31, 0x28918c); SET32(5, RW(5) + -1); JP_F_002894D8(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(3) - RW(16)); if (t) goto L_002891D0; }
SET32(16, RW(16) - RW(17));
{ int t = RD(16) != RD(4); SET32(2, RW(0) + -1); if (t) goto L_002891D0; }
div_s(c, 0, RSW(18), RSW(16));
if (RD(16) == RD(0)) { rt_break(c, 0x2891ac); goto L_002891B0; }
L_002891B0:;
SET64(3, c->hi.d[0]);
if (RD(3) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002891D4; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(21) + RD(0));
SET64(31, 0x2891cc); SET64(6, RD(22) + RD(0)); JP_F_002891F8(c);
SET64(2, RD(16) + RD(0));
L_002891D0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002891D4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_002891F8(Ctx *c) { /* func_002891F8 */
ENTER(0x2891f8);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x289220); SET64(19, RD(6) + RD(0)); JP_F_002777C8(c);
SET64(18, RD(2) + RD(0));
SET32(7, RW(29) + 16);
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(4, RD(18) + RD(0));
{ int t = RD(18) == RD(0); SET32(8, RW(29) + 20); if (t) goto L_00289274; }
SET64(31, 0x289244);  JP_F_00275490(c);
SET64(3, (s64)(s32)0x10000);
SET64(2, (s32)rd32(c, (RW(29) + 20)));
SET64(5, RD(29) + RD(0));
SET64(2, RD(2) & RD(3));
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_00289274; }
SET64(31, 0x289264);  JP_F_002771E8(c);
SET64(31, 0x28926c); SET64(4, RD(18) + RD(0)); JP_F_00277968(c);
SET64(3, (s32)rd32(c, (RW(29) + 12)));
wr32(c, (RW(19) + 0), RW(3));
L_00289274:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00289290(Ctx *c) { /* func_00289290 */
ENTER(0x289290);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(18, (s32)rd32(c, (RW(20) + 16))); goto L_002892E0;
L_002892C8:;
SET32(16, RW(16) - RW(18));
{ int t = RD(3) == RD(0); SET32(17, RW(17) + RW(18)); if (t) goto L_0028935C; }
if (RSD(16) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00289360; }
SET32(19, RW(19) + 1);
L_002892E0:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2892ec); SET64(5, RD(16) + RD(0)); JP_F_00289D30(c);
{ int t = RD(2) == RD(0); SET64(3, RSD(19) < (s64)3); if (t) { POLL(); goto L_002892C8; } }
SET64(2, (s64)(s32)0x540000);
SET64(4, RD(17) + RD(0));
SET32(17, RW(2) + -20808);
SET64(5, RD(16) + RD(0));
wr32(c, (RW(17) + 0), RW(0));
SET64(31, 0x289310); SET64(6, RD(17) + RD(0)); JP_F_00289380(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00289360; }
SET64(2, (s32)rd32(c, (RW(17) + 12)));
if (RSD(2) > 0) { wr32(c, (RW(20) + 28), RW(2)); goto L_00289328; }
L_00289328:;
SET64(2, (s32)rd32(c, (RW(17) + 100)));
if (RSD(2) > 0) { wr32(c, (RW(20) + 20), RW(2)); goto L_00289334; }
L_00289334:;
SET64(2, (s32)rd32(c, (RW(17) + 104)));
if (RSD(2) > 0) { wr32(c, (RW(20) + 24), RW(2)); goto L_00289340; }
L_00289340:;
SET64(6, (s32)rd32(c, (RW(17) + 108)));
{ int t = RSD(6) <= 0; SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00289360; }
SET64(2, (s64)(s32)0x4b0000);
wr32(c, (RW(20) + 32), RW(6));
SET32(2, RW(2) + 31696);
wr32(c, (RW(20) + 8), RW(2));
L_0028935C:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00289360:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00289380(Ctx *c) { /* func_00289380 */
ENTER(0x289380);
SET32(29, RW(29) + -32);
SET64(2, RSD(5) < (s64)2049);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 2048);
if (RD(2) != 0) SET64(16, RD(5));
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
SET32(4, RW(17) + 148);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2893b0); SET64(6, RD(16) + RD(0)); JP_F_00274E00(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 144), RW(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); { JP_F_0028A018(c); return; }
}

static void JP_B_002893D0(Ctx *c, u32 entry) { /* func_002893D0 */
ENTER(entry);
switch (entry) { case 0x289400: goto L_00289400; }
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(22));
SET32(22, RW(20) + RW(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
L_00289400:;
wr64(c, (RW(29) + 56), RD(23));
wr64(c, (RW(29) + 64), RD(31));
SET64(23, (s32)rd32(c, (RW(21) + 16))); goto L_00289430;
L_00289410:;
SET64(31, 0x289418);  JP_F_00289860(c);
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_002894AC; }
SET32(2, RW(18) - RW(20));
L_00289424:;
SET32(2, RW(2) + 1);
SET32(19, RW(19) - RW(2));
SET32(20, RW(20) + RW(2));
L_00289430:;
{ int t = RSD(19) <= 0; SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_002894AC; }
SET64(4, RD(20) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x289448); SET64(6, (s64)(s32)0x40000); JP_F_002894D8(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(18) + RD(0));
{ int t = RD(18) == RD(0); SET32(5, RW(22) - RW(18)); if (t) goto L_002894A8; }
SET64(2, rd8(c, (RW(18) + 3)));
SET32(2, RW(2) + 64);
SET64(2, RD(2) & 0xff);
SET64(2, RD(2) < (u64)(s64)32);
if (RD(2) == RD(0)) { SET32(2, RW(18) - RW(20)); { POLL(); goto L_00289424; } }
SET64(31, 0x289478); SET64(16, RD(23) + RD(0)); JP_F_00289540(c);
SET64(6, RD(21) + RD(0));
SET64(17, RD(2) + RD(0));
SET32(2, RW(22) - RW(17));
SET64(4, RD(17) + RD(0));
SET64(3, RSD(2) < RSD(16));
if (RD(3) != 0) SET64(16, RD(2));
SET64(31, 0x289498); SET64(5, RD(16) + RD(0)); JP_F_002895C0(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(6, RD(21) + RD(0)); if (t) { POLL(); goto L_00289410; } }
L_002894A8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002894AC:;
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
void JP_F_002893D0(Ctx *c) { JP_B_002893D0(c, 0x2893d0); }
void JP_F_00289400(Ctx *c) { JP_B_002893D0(c, 0x289400); }

void JP_F_002894D8(Ctx *c) { /* func_002894D8 */
ENTER(0x2894d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET64(2, RSD(17) < (s64)4);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_00289524; }
L_00289500:;
SET64(31, 0x289508); SET64(4, RD(16) + RD(0)); JP_F_002770A0(c);
{ int t = RD(2) != RD(18); SET32(17, RW(17) + -1); if (t) goto L_00289518; }
SET64(2, RD(16) + RD(0)); goto L_00289528;
L_00289518:;
SET64(2, RSD(17) < (s64)4);
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 1); if (t) { POLL(); goto L_00289500; } }
L_00289524:;
SET64(2, RD(0) + RD(0));
L_00289528:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00289540(Ctx *c) { /* func_00289540 */
ENTER(0x289540);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x289560); SET64(18, RD(4) + RD(0)); JP_F_002777C8(c);
SET64(17, RD(2) + RD(0));
SET64(2, RSD(16) < (s64)7);
SET32(3, RW(0) + 6);
SET64(5, RD(18) + RD(0));
if (RD(2) != 0) SET64(3, RD(16));
SET64(6, RD(16) + RD(0));
SET64(7, RD(29) + RD(0));
SET32(8, RW(29) + 4);
SET64(4, RD(17) + RD(0));
{ int t = RD(17) == RD(0); SET32(2, RW(18) + RW(3)); if (t) goto L_002895A4; }
SET64(31, 0x289594);  JP_F_00275490(c);
SET64(31, 0x28959c); SET64(4, RD(17) + RD(0)); JP_F_00277968(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(18) + RW(2));
L_002895A4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002895C0(Ctx *c) { /* func_002895C0 */
ENTER(0x2895c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2895e4); SET64(18, RD(6) + RD(0)); JP_F_00289658(c);
SET32(4, RW(16) + 2);
SET32(5, RW(17) + -2);
{ int t = RD(2) != RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00289624; }
SET64(31, 0x2895fc);  JP_F_00289658(c);
if (RD(2) != RD(0)) { SET32(2, RW(0) + 1); goto L_0028963C; }
SET32(4, RW(16) + 1);
SET32(5, RW(17) + -1);
SET64(31, 0x289614); SET64(6, RD(18) + RD(0)); JP_F_00289658(c);
SET32(4, RW(16) + 3);
SET32(5, RW(17) + -3);
{ int t = RD(2) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00289630; }
L_00289624:;
SET32(2, RW(0) + 1); goto L_0028963C;
L_00289630:;
SET64(31, 0x289638);  JP_F_00289658(c);
SET64(2, RD(0) < RD(2));
L_0028963C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00289658(Ctx *c) { /* func_00289658 */
ENTER(0x289658);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
SET64(3, RSD(16) < (s64)2049);
SET32(5, RW(0) + 2048);
if (RD(3) == 0) SET64(16, RD(5));
SET64(5, RD(4) + RD(0));
SET32(2, RW(2) + -22856);
wr64(c, (RW(29) + 32), RD(18));
SET64(4, RD(2) + RD(0));
SET64(18, RD(6) + RD(0));
SET64(6, RD(16) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x2896a0); SET64(17, RD(2) + RD(0)); JP_F_00127218(c);
{ int t = RSD(16) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00289714; }
SET64(2, (s64)(s32)0x4b0000);
SET32(19, RW(2) + 31000);
L_002896B0:;
SET64(5, RD(16) + RD(0));
SET32(16, RW(16) + -4);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2896c4); SET64(6, RD(29) + RD(0)); JP_F_002850E8(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00289708; }
wr32(c, (RW(18) + 12), RW(19));
SET64(3, rd8(c, (RW(17) + 7)));
wr8(c, (RW(18) + 40), (u8)RW(3));
SET64(5, rd8(c, (RW(17) + 9)));
SET64(3, rd8(c, (RW(17) + 8)));
SET64(4, rd8(c, (RW(17) + 10)));
SET32(5, RW(5) << 16);
SET64(6, rd8(c, (RW(17) + 11)));
SET32(3, RW(3) << 24);
SET32(4, RW(4) << 8);
SET64(3, RD(3) | RD(6));
SET64(4, RD(4) | RD(5));
SET64(3, RD(3) | RD(4));
wr32(c, (RW(18) + 44), RW(3)); goto L_00289714;
L_00289708:;
{ int t = RSD(16) > 0; SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002896B0; } }
SET64(2, RD(0) + RD(0));
L_00289714:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00289730(Ctx *c) { /* func_00289730 */
ENTER(0x289730);
SET32(29, RW(29) + -32);
SET64(2, RD(4) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(5, RD(2) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28974c); SET64(4, RD(29) + RD(0)); JP_F_00289908(c);
{ int t = RD(2) != RD(0); SET32(5, RW(0) + -1); if (t) goto L_00289760; }
SET32(2, RW(0) + -1); goto L_0028979C;
L_00289760:;
SET64(3, rd8(c, (RW(29) + 0)));
SET32(2, RW(0) + -1);
SET64(4, rd8(c, (RW(29) + 2)));
SET32(3, RW(3) << 4);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET64(1, (s64)(s32)0x4b0000);
SET32(1, RW(1) + RW(3));
SET64(3, (s32)rd32(c, (RW(1) + 31216)));
{ int t = RD(3) == RD(5); SET32(4, RW(3) << 5); if (t) goto L_0028979C; }
SET32(2, RW(4) - RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
L_0028979C:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002897A8(Ctx *c) { /* func_002897A8 */
ENTER(0x2897a8);
SET32(29, RW(29) + -32);
SET64(2, RD(4) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(5, RD(2) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2897c4); SET64(4, RD(29) + RD(0)); JP_F_00289908(c);
{ int t = RD(2) != RD(0); SET32(6, RW(0) + -1); if (t) goto L_002897D8; }
SET32(2, RW(0) + -1); goto L_00289850;
L_002897D8:;
SET64(3, rd8(c, (RW(29) + 0)));
SET64(4, rd8(c, (RW(29) + 2)));
SET32(5, RW(3) << 2);
SET32(3, RW(3) << 4);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET64(1, (s64)(s32)0x4b0000);
SET32(1, RW(1) + RW(3));
SET64(3, (s32)rd32(c, (RW(1) + 31216)));
{ int t = RD(3) == RD(6); SET32(2, RW(0) + -1); if (t) goto L_00289850; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + RW(5));
SET64(4, (s32)rd32(c, (RW(4) + 31472)));
SET64(2, rd8(c, (RW(29) + 3)));
mul_s(c, 0, 4, RSW(4), RSW(3));
SET32(2, RW(2) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 31200)));
SET32(2, RW(4) << 5);
SET32(3, RW(3) << 3);
SET32(2, RW(2) - RW(4));
if (RD(3) == RD(0)) { rt_break(c, 0x289838); goto L_0028983C; }
L_0028983C:;
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 3);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
L_00289850:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00289860(Ctx *c) { /* func_00289860 */
ENTER(0x289860);
SET32(29, RW(29) + -32);
SET64(2, RD(4) + RD(0));
SET64(3, RD(5) + RD(0));
SET64(5, RD(2) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x289888); SET64(6, RD(3) + RD(0)); JP_F_00289908(c);
{ int t = RD(2) == RD(0); SET64(4, rd8(c, (RW(29) + 6))); if (t) goto L_002898F4; }
SET32(2, RW(0) + 1);
SET64(5, rd8(c, (RW(29) + 3)));
SET32(4, RW(4) << 2);
wr32(c, (RW(16) + 12), RW(0));
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(4));
SET64(3, rd8(c, (RW(3) + 31184)));
SET32(5, RW(5) << 2);
wr8(c, (RW(16) + 40), (u8)RW(3));
SET64(3, (s64)(s32)0x410000);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + RW(5));
SET64(4, (s32)rd32(c, (RW(4) + 31200)));
wr32(c, (RW(16) + 44), RW(4));
SET32(7, RW(3) + 24864);
ldl(c, 4, (RW(29) + 7));
ldr(c, 4, (RW(29) + 0));
SET64(5, (s8)rd8(c, (RW(29) + 8)));
SET64(6, (s8)rd8(c, (RW(29) + 9)));
sdl(c, 4, (RW(7) + 7));
sdr(c, 4, (RW(7) + 0));
wr8(c, (RW(7) + 8), (u8)RW(5));
wr8(c, (RW(7) + 9), (u8)RW(6));
SET64(4, (s8)rd8(c, (RW(29) + 10)));
wr8(c, (RW(7) + 10), (u8)RW(4));
L_002898F4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00289908(Ctx *c) { /* func_00289908 */
ENTER(0x289908);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
SET64(2, RSD(18) < (s64)4);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_002899AC; }
SET32(22, RW(0) + 255);
SET32(21, RW(0) + 248);
SET32(20, RW(0) + 15);
SET32(19, RW(0) + 3);
L_00289950:;
SET64(2, rd8(c, (RW(16) + 0)));
if (RD(2) != RD(22)) { SET32(18, RW(18) + -1); goto L_002899A0; }
SET64(2, rd8(c, (RW(16) + 1)));
SET64(2, RD(2) & 0xf8);
if (RD(2) != RD(21)) { SET32(18, RW(18) + -1); goto L_002899A0; }
SET64(5, RD(16) + RD(0));
SET64(31, 0x289978); SET64(4, RD(17) + RD(0)); JP_F_002899D8(c);
SET64(2, rd8(c, (RW(17) + 0)));
if (RD(2) == RD(0)) { SET32(18, RW(18) + -1); goto L_002899A0; }
SET64(2, rd8(c, (RW(17) + 2)));
if (RD(2) == RD(20)) { SET32(18, RW(18) + -1); goto L_002899A0; }
SET64(3, rd8(c, (RW(17) + 3)));
{ int t = RD(3) != RD(19); SET64(2, RD(16) + RD(0)); if (t) goto L_002899B0; }
SET32(18, RW(18) + -1);
L_002899A0:;
SET64(2, RSD(18) < (s64)4);
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 1); if (t) { POLL(); goto L_00289950; } }
L_002899AC:;
SET64(2, RD(0) + RD(0));
L_002899B0:;
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

void JP_F_002899D8(Ctx *c) { /* func_002899D8 */
ENTER(0x2899d8);
SET64(2, rd8(c, (RW(5) + 3)));
SET64(6, rd8(c, (RW(5) + 2)));
SET64(7, rd8(c, (RW(5) + 1)));
SET32(12, RW(2) >> 4);
SET32(8, RW(6) >> 2);
SET32(9, RW(6) >> 1);
SET32(5, RW(7) >> 1);
SET64(7, RD(7) & 0x1);
SET32(10, RW(2) >> 3);
SET32(11, RW(2) >> 2);
SET64(13, RD(6) & 0x1);
SET32(6, RW(6) >> 4);
SET64(3, RD(2) & 0x3);
SET32(2, RW(2) >> 6);
SET64(5, RD(5) & 0x3);
SET64(8, RD(8) & 0x3);
SET64(9, RD(9) & 0x1);
SET64(12, RD(12) & 0x3);
SET64(10, RD(10) & 0x1);
SET64(11, RD(11) & 0x1);
wr8(c, (RW(4) + 10), (u8)RW(3));
wr8(c, (RW(4) + 0), (u8)RW(5));
wr8(c, (RW(4) + 1), (u8)RW(7));
wr8(c, (RW(4) + 2), (u8)RW(6));
wr8(c, (RW(4) + 3), (u8)RW(8));
wr8(c, (RW(4) + 4), (u8)RW(9));
wr8(c, (RW(4) + 5), (u8)RW(13));
wr8(c, (RW(4) + 6), (u8)RW(2));
wr8(c, (RW(4) + 7), (u8)RW(12));
wr8(c, (RW(4) + 8), (u8)RW(10));
wr8(c, (RW(4) + 9), (u8)RW(11)); return;
}

void JP_F_00289A58(Ctx *c) { /* func_00289A58 */
ENTER(0x289a58);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
{ int t = RSD(16) <= 0; wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_00289B98; }
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET32(19, RW(2) + 31144);
SET32(20, RW(3) + 31696);
SET64(4, RD(17) + RD(0));
L_00289A98:;
SET64(5, RD(16) + RD(0));
SET64(31, 0x289aa4); SET32(6, RW(0) + 64); JP_F_00277B50(c);
SET64(5, RD(2) + RD(0));
{ int t = RD(5) == RD(0); SET32(4, RW(5) - RW(17)); if (t) goto L_00289B9C; }
SET64(6, rd8(c, (RW(5) + 7)));
SET32(4, RW(4) + 1);
SET32(16, RW(16) - RW(4));
SET32(17, RW(17) + RW(4));
SET32(3, RW(6) >> 4);
SET64(6, RD(6) & 0xf);
SET32(2, RW(6) + 255);
SET64(12, rd8(c, (RW(5) + 11)));
SET64(2, RD(2) & 0xff);
SET64(7, rd8(c, (RW(5) + 10)));
SET64(2, RD(2) < (u64)(s64)8);
SET64(8, rd8(c, (RW(5) + 4)));
SET64(4, rd8(c, (RW(5) + 5)));
SET64(9, rd8(c, (RW(5) + 6)));
SET64(10, rd8(c, (RW(5) + 8)));
{ int t = RD(3) == RD(0); SET64(11, rd8(c, (RW(5) + 9))); if (t) goto L_00289B90; }
{ int t = RD(2) == RD(0); SET32(2, RW(7) >> 5); if (t) goto L_00289B90; }
SET64(2, RD(2) & 0x1);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) == RD(0); SET64(2, RD(4) & 0xf); if (t) goto L_00289B90; }
SET32(4, RW(4) >> 4);
SET32(3, RW(8) << 4);
SET32(2, RW(2) << 8);
SET64(5, (s32)rd32(c, (RW(18) + 28)));
SET64(3, RD(3) | RD(4));
SET64(2, RD(2) | RD(9));
wr32(c, (RW(18) + 20), RW(3));
{ int t = RD(5) != RD(0); wr32(c, (RW(18) + 24), RW(2)); if (t) goto L_00289B5C; }
SET32(2, RW(11) << 2);
SET32(3, RW(10) << 10);
SET64(3, RD(3) | RD(2));
SET32(4, RW(7) >> 6);
SET64(3, RD(3) | RD(4));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
wr32(c, (RW(18) + 28), RW(2));
L_00289B5C:;
SET32(3, RW(6) << 2);
SET64(2, RD(7) & 0x1f);
SET32(3, RW(3) + RW(19));
SET32(2, RW(2) << 5);
SET32(4, RW(12) >> 3);
SET64(5, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(2) | RD(4));
wr32(c, (RW(18) + 8), RW(20));
SET32(2, RW(2) << 11);
wr32(c, (RW(18) + 32), RW(5));
wr32(c, (RW(18) + 36), RW(2)); goto L_00289B98;
L_00289B90:;
{ int t = RSD(16) > 0; SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_00289A98; } }
L_00289B98:;
SET32(2, RW(0) + 1);
L_00289B9C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00289BC0(Ctx *c) { /* func_00289BC0 */
ENTER(0x289bc0);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(0) + 32);
SET32(5, RW(5) + -18608);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029B440(c); return; }
}

void JP_F_00289BE0(Ctx *c) { /* func_00289BE0 */
ENTER(0x289be0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0029B4D0(c); return; }
}

void JP_F_00289BF8(Ctx *c) { /* func_00289BF8 */
ENTER(0x289bf8);
wr32(c, (RW(4) + 144), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void JP_F_00289C10(Ctx *c) { /* func_00289C10 */
ENTER(0x289c10);
wr32(c, (RW(4) + 144), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void JP_F_00289C20(Ctx *c) { /* func_00289C20 */
ENTER(0x289c20);
SET32(29, RW(29) + -48);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(8) + RD(0));
SET32(16, RW(16) + -6);
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET32(17, RW(17) + 6);
SET64(19, RD(4) + RD(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(18) + 0), RW(0));
{ int t = RD(5) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00289CBC; }
SET64(31, 0x289c6c);  JP_F_00289CD8(c);
if (RD(2) != RD(0)) { SET32(16, RW(16) + -12); goto L_00289C8C; }
SET32(16, RW(16) + -2);
SET32(17, RW(17) + 2);
SET64(31, 0x289c84); SET64(4, RD(16) + RD(0)); JP_F_00289CD8(c);
{ int t = RD(2) == RD(0); SET32(16, RW(16) + -12); if (t) goto L_00289CBC; }
L_00289C8C:;
SET32(17, RW(17) + 12);
SET64(4, RD(16) + RD(0));
SET64(31, 0x289c9c); SET64(5, RD(17) + RD(0)); JP_F_00289D30(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_00289CBC; }
SET64(31, 0x289cb4);  JP_F_00289D88(c);
wr32(c, (RW(18) + 0), RW(2));
SET32(2, RW(0) + 1);
L_00289CBC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00289CD8(Ctx *c) { /* func_00289CD8 */
ENTER(0x289cd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x289ce8);  JP_F_00289D00(c);
SET64(2, RD(2) ^ 0x1bf);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_00289D00(Ctx *c) { /* func_00289D00 */
ENTER(0x289d00);
SET64(2, rd8(c, (RW(4) + 0)));
SET64(3, rd8(c, (RW(4) + 1)));
SET32(2, RW(2) << 8);
SET64(5, rd8(c, (RW(4) + 2)));
SET64(2, RD(2) | RD(3));
SET64(6, rd8(c, (RW(4) + 3)));
SET32(2, RW(2) << 8);
SET64(2, RD(2) | RD(5));
SET32(2, RW(2) << 8);
SET64(2, RD(2) | RD(6)); return;
}

void JP_F_00289D30(Ctx *c) { /* func_00289D30 */
ENTER(0x289d30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x289d44);  JP_F_0029B518(c);
SET64(16, RD(2) + RD(0));
SET64(5, RD(29) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00289D74; }
SET64(31, 0x289d5c);  JP_F_0029B730(c);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
if (RD(2) == 0) SET64(3, RD(0));
SET64(31, 0x289d70); wr32(c, (RW(29) + 0), RW(3)); JP_F_0029B5E0(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_00289D74:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00289D88(Ctx *c) { /* func_00289D88 */
ENTER(0x289d88);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(5) + RD(0));
SET32(5, RW(0) + 75);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x289dbc); SET32(19, RW(17) + 120); JP_F_00297980(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 76);
SET64(31, 0x289dcc); SET64(16, RD(2) + RD(0)); JP_F_00297980(c);
SET64(4, RD(2) + RD(0));
SET64(5, RD(20) + RD(0));
{ int t = RD(16) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00289DE4; }
{ u32 t = RW(16); SET64(31, 0x289de4);  rt_call(c, t); }
L_00289DE4:;
SET64(3, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00289E2C; }
SET64(2, RSD(18) < (s64)2049);
SET32(16, RW(0) + 2048);
if (RD(2) != 0) SET64(16, RD(18));
SET64(5, RD(20) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x289e0c); SET32(4, RW(17) + 268); JP_F_00274E00(c);
wr32(c, (RW(19) + 144), RW(16));
SET64(31, 0x289e18); SET64(4, RD(19) + RD(0)); JP_F_0028A018(c);
SET64(31, 0x289e20); SET64(4, RD(17) + RD(0)); JP_F_0028A638(c);
SET64(31, 0x289e28); SET64(4, RD(17) + RD(0)); JP_F_00289E50(c);
SET32(2, RW(0) + 1);
L_00289E2C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00289E50(Ctx *c) { /* func_00289E50 */
ENTER(0x289e50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x289e64); SET64(16, RD(4) + RD(0)); JP_F_00289FC8(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(2) == RD(0); SET32(5, RW(16) + 120); if (t) goto L_00289E80; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00289E90(c); return; }
L_00289E80:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00289E90(Ctx *c) { /* func_00289E90 */
ENTER(0x289e90);
SET64(2, RD(5) | RD(4));
SET64(2, RD(2) & 0x7);
{ int t = RD(2) == RD(0); SET32(2, RW(5) + 2176); if (t) goto L_00289F00; }
L_00289EA0:;
ldl(c, 3, (RW(5) + 7));
ldr(c, 3, (RW(5) + 0));
ldl(c, 6, (RW(5) + 15));
ldr(c, 6, (RW(5) + 8));
ldl(c, 7, (RW(5) + 23));
ldr(c, 7, (RW(5) + 16));
ldl(c, 8, (RW(5) + 31));
ldr(c, 8, (RW(5) + 24));
sdl(c, 3, (RW(4) + 7));
sdr(c, 3, (RW(4) + 0));
sdl(c, 6, (RW(4) + 15));
sdr(c, 6, (RW(4) + 8));
sdl(c, 7, (RW(4) + 23));
sdr(c, 7, (RW(4) + 16));
sdl(c, 8, (RW(4) + 31));
sdr(c, 8, (RW(4) + 24));
SET32(5, RW(5) + 32);
{ int t = RD(5) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_00289EA0; } }
 goto L_00289F34;
L_00289F00:;
SET64(3, rd64(c, (RW(5) + 0)));
SET64(6, rd64(c, (RW(5) + 8)));
SET64(7, rd64(c, (RW(5) + 16)));
SET64(8, rd64(c, (RW(5) + 24)));
wr64(c, (RW(4) + 0), RD(3));
wr64(c, (RW(4) + 8), RD(6));
wr64(c, (RW(4) + 16), RD(7));
wr64(c, (RW(4) + 24), RD(8));
SET32(5, RW(5) + 32);
{ int t = RD(5) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_00289F00; } }
L_00289F34:;
ldl(c, 2, (RW(5) + 7));
ldr(c, 2, (RW(5) + 0));
ldl(c, 3, (RW(5) + 15));
ldr(c, 3, (RW(5) + 8));
SET64(6, (s32)rd32(c, (RW(5) + 16)));
sdl(c, 2, (RW(4) + 7));
sdr(c, 2, (RW(4) + 0));
sdl(c, 3, (RW(4) + 15));
sdr(c, 3, (RW(4) + 8));
wr32(c, (RW(4) + 16), RW(6)); return;
}

void JP_F_00289F60(Ctx *c) { /* func_00289F60 */
ENTER(0x289f60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x289f7c); SET32(16, RW(17) + 120); JP_F_00289FC8(c);
SET64(5, RD(2) + RD(0));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00289FB0; }
SET64(31, 0x289f90);  JP_F_00289E90(c);
SET64(31, 0x289f98); SET64(4, RD(16) + RD(0)); JP_F_0028A018(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A638(c); return; }
L_00289FB0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00289FC8(Ctx *c) { /* func_00289FC8 */
ENTER(0x289fc8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 13864)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028A004; }
SET64(31, 0x289fec);  JP_F_0028CC60(c);
if (RSD(2) <= 0) { SET64(2, (s32)rd32(c, (RW(16) + 13864))); goto L_0028A000; }
SET64(2, RD(0) + RD(0)); goto L_0028A004;
L_0028A000:;
SET32(2, RW(2) + 12);
L_0028A004:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028A018(Ctx *c) { /* func_0028A018 */
ENTER(0x28a018);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(4, RW(16) + 148);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28a038); SET64(5, (s32)rd32(c, (RW(16) + 144))); JP_F_0029B518(c);
SET64(5, RD(16) + RD(0));
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028A068; }
SET64(31, 0x28a050);  JP_F_0028A080(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029B5E0(c); return; }
L_0028A068:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028A080(Ctx *c) { /* func_0028A080 */
ENTER(0x28a080);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x28a0a4); SET64(18, RD(4) + RD(0)); JP_F_0029B730(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(5, RW(29) + 4);
SET64(4, RD(18) + RD(0));
SET32(6, RW(29) + 8);
if (RD(2) == 0) SET64(3, RD(0));
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 0), RW(3)); if (t) goto L_0028A1C0; }
SET64(31, 0x28a0c8);  JP_F_0029BB20(c);
{ int t = RD(2) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_0028A0DC; }
wr32(c, (RW(29) + 4), RW(0));
wr32(c, (RW(29) + 8), RW(0));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
L_0028A0DC:;
SET64(4, RD(18) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 8)));
SET32(5, RW(29) + 12);
SET32(16, RW(2) << 1);
wr32(c, (RW(17) + 4), RW(2));
SET32(16, RW(16) + RW(2));
wr32(c, (RW(17) + 8), RW(3));
SET32(16, RW(16) << 3);
SET32(16, RW(16) + RW(2));
SET32(16, RW(16) << 2);
SET64(31, 0x28a10c); SET32(16, RW(16) + RW(3)); JP_F_0029C030(c);
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET64(16, RSD(16) < (s64)110);
SET64(5, RD(17) + RD(0));
SET64(4, RD(18) + RD(0));
if (RD(2) == 0) SET64(3, RD(0));
SET32(2, RW(0) - RW(3));
{ int t = RD(16) == RD(0); wr32(c, (RW(29) + 12), RW(3)); if (t) goto L_0028A130; }
wr32(c, (RW(29) + 12), RW(2));
L_0028A130:;
SET64(2, (s32)rd32(c, (RW(29) + 12)));
SET64(31, 0x28a13c); wr32(c, (RW(17) + 12), RW(2)); JP_F_0028A1D8(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x28a148); SET32(5, RW(17) + 32); JP_F_0028A268(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 189);
SET64(31, 0x28a158); SET32(6, RW(0) + 189); JP_F_0028A320(c);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(17) + 60), RW(2));
SET32(5, RW(0) + 191);
SET64(31, 0x28a16c); SET32(6, RW(0) + 191); JP_F_0028A320(c);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET32(5, RW(0) + 192);
SET64(31, 0x28a180); SET32(6, RW(0) + 223); JP_F_0028A320(c);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(17) + 68), RW(2));
SET32(5, RW(0) + 224);
SET64(31, 0x28a194); SET32(6, RW(0) + 239); JP_F_0028A320(c);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(17) + 72), RW(2));
SET32(6, RW(17) + 76);
SET64(31, 0x28a1a8); SET64(5, (s32)rd32(c, (RW(17) + 68))); JP_F_0028A398(c);
SET64(4, RD(18) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 72)));
SET64(31, 0x28a1b8); SET32(6, RW(17) + 92); JP_F_0028A430(c);
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(2));
L_0028A1C0:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028A1D8(Ctx *c) { /* func_0028A1D8 */
ENTER(0x28a1d8);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x2a0000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(2) + -17208);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28a1fc); SET64(16, RD(4) + RD(0)); JP_F_0028A5C8(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(17) + 16), RW(2));
SET32(5, RW(5) + -17128);
SET64(31, 0x28a210); SET64(4, RD(16) + RD(0)); JP_F_0028A5C8(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(5, RW(5) + -17048);
SET64(31, 0x28a224); SET64(4, RD(16) + RD(0)); JP_F_0028A5C8(c);
SET64(5, (s64)(s32)0x2a0000);
SET32(3, RW(0) + -1);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -16968);
{ int t = RD(2) != RD(3); wr32(c, (RW(17) + 24), RW(2)); if (t) goto L_0028A244; }
SET32(2, RW(0) + 2);
wr32(c, (RW(17) + 24), RW(2));
L_0028A244:;
SET64(31, 0x28a24c);  JP_F_0028A5C8(c);
wr32(c, (RW(17) + 28), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028A268(Ctx *c) { /* func_0028A268 */
ENTER(0x28a268);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x2a0000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
SET32(5, RW(2) + -16656);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28a28c); SET64(17, RD(4) + RD(0)); JP_F_0028A5C8(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a2a0); SET32(5, RW(5) + -16576); JP_F_0028A5C8(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 4), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a2b4); SET32(5, RW(5) + -16496); JP_F_0028A5C8(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 8), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a2c8); SET32(5, RW(5) + -16416); JP_F_0028A5C8(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 12), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a2dc); SET32(5, RW(5) + -16232); JP_F_0028A5C8(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 16), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a2f0); SET32(5, RW(5) + -16152); JP_F_0028A5C8(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 20), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a304); SET32(5, RW(5) + -16072); JP_F_0028A5C8(c);
wr32(c, (RW(16) + 24), RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028A320(Ctx *c) { /* func_0028A320 */
ENTER(0x28a320);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
SET64(2, RSD(17) < RSD(16));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
{ int t = RD(2) != RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_0028A37C; }
SET64(5, RD(16) & 0xff);
L_0028A350:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x28a35c); SET64(6, RD(29) + RD(0)); JP_F_0029B820(c);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0028A36C; }
{ int t = RD(3) != RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_0028A380; }
L_0028A36C:;
SET32(16, RW(16) + 1);
SET64(2, RSD(17) < RSD(16));
{ int t = RD(2) == RD(0); SET64(5, RD(16) & 0xff); if (t) { POLL(); goto L_0028A350; } }
L_0028A37C:;
SET64(2, RD(0) + RD(0));
L_0028A380:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028A398(Ctx *c) { /* func_0028A398 */
ENTER(0x28a398);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0028A414; }
SET64(6, (s64)(s32)0x2a0000);
SET64(31, 0x28a3c8); SET32(6, RW(6) + -15552); JP_F_0028A600(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(18) + 0), RW(2));
SET32(6, RW(6) + -15440);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a3e0); SET64(5, RD(16) + RD(0)); JP_F_0028A600(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(18) + 4), RW(2));
SET32(6, RW(6) + -15312);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a3f8); SET64(5, RD(16) + RD(0)); JP_F_0028A600(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(18) + 8), RW(2));
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x28a410); SET32(6, RW(6) + -15200); JP_F_0028A600(c);
wr32(c, (RW(18) + 12), RW(2));
L_0028A414:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028A430(Ctx *c) { /* func_0028A430 */
ENTER(0x28a430);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x2a0000);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
SET32(6, RW(2) + -15088);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET32(19, RW(16) + 8);
wr64(c, (RW(29) + 48), RD(20));
SET32(20, RW(16) + 12);
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(18) & 0xff);
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x28a474); SET64(17, RD(4) + RD(0)); JP_F_0028A600(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 0), RW(2));
SET32(6, RW(6) + -14976);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a48c); SET64(5, RD(18) + RD(0)); JP_F_0028A600(c);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(16) + 4), RW(2));
SET64(5, RD(21) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(31, 0x28a4a4); SET64(7, RD(20) + RD(0)); JP_F_0029C5F8(c);
SET64(6, (s64)(s32)0x2a0000);
SET32(6, RW(6) + -14680);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
{ int t = RD(2) != RD(0); SET32(3, RW(0) + -1); if (t) goto L_0028A4C4; }
wr32(c, (RW(19) + 0), RW(3));
wr32(c, (RW(20) + 0), RW(3));
L_0028A4C4:;
SET64(31, 0x28a4cc);  JP_F_0028A600(c);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(16) + 16), RW(2));
SET64(6, RD(29) + RD(0));
SET64(31, 0x28a4e0); SET64(5, RD(21) + RD(0)); JP_F_0029B890(c);
SET64(6, (s64)(s32)0x2a0000);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(6, RW(6) + -14568);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
if (RD(2) == 0) SET64(3, RD(0));
SET64(2, RD(0) < RD(3));
wr32(c, (RW(29) + 0), RW(3));
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 20), RW(2)); if (t) goto L_0028A5A4; }
SET64(31, 0x28a510);  JP_F_0028A600(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 24), RW(2));
SET32(6, RW(6) + -14456);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a528); SET64(5, RD(18) + RD(0)); JP_F_0028A600(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 28), RW(2));
SET32(6, RW(6) + -14344);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a540); SET64(5, RD(18) + RD(0)); JP_F_0028A600(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 32), RW(2));
SET32(6, RW(6) + -14232);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a558); SET64(5, RD(18) + RD(0)); JP_F_0028A600(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 36), RW(2));
SET32(6, RW(6) + -14112);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a570); SET64(5, RD(18) + RD(0)); JP_F_0028A600(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 40), RW(2));
SET32(6, RW(6) + -14000);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28a588); SET64(5, RD(18) + RD(0)); JP_F_0028A600(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 44), RW(2));
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x28a5a0); SET32(6, RW(6) + -13864); JP_F_0028A600(c);
wr32(c, (RW(16) + 48), RW(2));
L_0028A5A4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0028A5C8(Ctx *c) { /* func_0028A5C8 */
ENTER(0x28a5c8);
SET32(29, RW(29) + -32);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
{ u32 t = RW(2); SET64(31, 0x28a5dc); SET64(5, RD(29) + RD(0)); rt_call(c, t); }
SET32(4, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x0);
SET64(31, rd64(c, (RW(29) + 16)));
if (RD(2) != 0) SET64(4, RD(3));
SET64(2, RD(4) + RD(0));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028A600(Ctx *c) { /* func_0028A600 */
ENTER(0x28a600);
SET32(29, RW(29) + -32);
SET64(2, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(5, RD(5) & 0xff);
{ u32 t = RW(2); SET64(31, 0x28a618); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET32(4, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x0);
SET64(31, rd64(c, (RW(29) + 16)));
if (RD(2) != 0) SET64(4, RD(3));
SET64(2, RD(4) + RD(0));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028A638(Ctx *c) { /* func_0028A638 */
ENTER(0x28a638);
SET32(5, RW(4) + 152);
SET32(4, RW(4) + 2316);
SET64(2, (s32)rd32(c, (RW(5) + 4)));
wr32(c, (RW(4) + 36), RW(2));
SET64(3, (s32)rd32(c, (RW(5) + 8)));
wr32(c, (RW(4) + 40), RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 12)));
wr32(c, (RW(4) + 44), RW(2)); return;
}

void JP_F_0028A660(Ctx *c) { /* func_0028A660 */
ENTER(0x28a660);
SET32(2, RW(0) + 2); return;
}

void JP_F_0028A668(Ctx *c) { /* func_0028A668 */
ENTER(0x28a668);
SET32(4, RW(4) + 120);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028A698; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(4));
L_0028A698:;
 return;
}

void JP_F_0028A6A0(Ctx *c) { /* func_0028A6A0 */
ENTER(0x28a6a0);
SET64(3, (s32)rd32(c, (RW(4) + 120)));
SET32(4, RW(4) + 212);
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_0028A6BC; }
SET64(3, (s32)rd32(c, (RW(4) + 20)));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 24))); goto L_0028A6BC; }
L_0028A6BC:;
 return;
}

void JP_F_0028A6C8(Ctx *c) { /* func_0028A6C8 */
ENTER(0x28a6c8);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 31488); return;
}

void JP_F_0028A6D8(Ctx *c) { /* func_0028A6D8 */
ENTER(0x28a6d8);
SET64(2, RD(5) ^ 0x36f8);
SET64(2, RD(2) < (u64)(s64)1); return;
}

void JP_F_0028A6E8(Ctx *c) { /* func_0028A6E8 */
ENTER(0x28a6e8);
SET64(3, (s64)(s32)0x540000);
SET64(2, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -16);
SET32(3, RW(3) + -18088);
SET32(2, RW(2) + 31488);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(5, (s64)(s32)0x410000);
wr32(c, (RW(3) + 0), RW(2));
SET64(16, RD(4) + RD(0));
SET32(4, RW(0) + 14072);
SET64(31, 0x28a71c); wr32(c, (RW(5) + 25436), RW(4)); JP_F_0028AB38(c);
SET64(31, 0x28a724); SET64(4, RD(16) + RD(0)); JP_F_0028A750(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028A744; }
SET64(31, 0x28a734);  JP_F_0028AB68(c);
SET64(31, 0x28a73c);  JP_F_0028ABA0(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_0028A744:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028A750(Ctx *c) { /* func_0028A750 */
ENTER(0x28a750);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x410000);
SET32(16, RW(16) + 24888);
wr64(c, (RW(29) + 8), RD(17));
SET32(6, RW(0) + 137);
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28a77c); SET64(4, RD(16) + RD(0)); JP_F_00275270(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(6, RW(0) + 400);
SET32(5, RW(5) + 31904);
SET64(31, 0x28a790); SET64(4, RD(16) + RD(0)); JP_F_00274E00(c);
ldl(c, 2, (RW(17) + 7));
ldr(c, 2, (RW(17) + 0));
sdl(c, 2, (RW(16) + 407));
sdr(c, 2, (RW(16) + 400));
wr32(c, (RW(16) + 408), RW(0));
SET64(31, 0x28a7ac); SET32(4, RW(16) + 412); JP_F_0028A8C8(c);
SET32(4, RW(16) + 432);
SET64(31, 0x28a7b8); SET64(5, (s32)rd32(c, (RW(17) + 4))); JP_F_00297D50(c);
SET64(31, 0x28a7c0); SET32(4, RW(16) + 444); JP_F_002871E0(c);
SET64(31, 0x28a7c8); SET64(4, RD(16) + RD(0)); JP_F_0028A810(c);
SET32(2, RW(0) + 7);
SET32(16, RW(16) + 544);
L_0028A7D0:;
SET32(2, RW(2) + -1);
wr32(c, (RW(16) + 0), RW(0));
{ int t = RSD(2) >= 0; SET32(16, RW(16) + -4); if (t) { POLL(); goto L_0028A7D0; } }
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s64)(s32)0x410000);
SET64(31, 0x28a7fc); SET32(4, RW(4) + 25336); JP_F_00299948(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028A810(Ctx *c) { /* func_0028A810 */
ENTER(0x28a810);
SET32(4, RW(4) + 508);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 0), RW(0)); return;
}

void JP_F_0028A820(Ctx *c) { /* func_0028A820 */
ENTER(0x28a820);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 7);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(2) + 25404);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
L_0028A848:;
SET32(17, RW(17) + 4);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0028A860; }
SET64(31, 0x28a85c);  JP_F_00295A58(c);
SET64(18, RD(2) + RD(0));
L_0028A860:;
SET32(16, RW(16) + -1);
if (RSD(16) >= 0) { SET64(2, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_0028A848; } }
SET64(16, (s64)(s32)0x410000);
SET32(16, RW(16) + 25320);
SET64(31, 0x28a87c); SET64(4, RD(16) + RD(0)); JP_F_00297D60(c);
SET64(31, 0x28a884); SET32(4, RW(16) + 12); JP_F_002871F8(c);
SET64(31, 0x28a88c); SET32(4, RW(16) + 16); JP_F_002999E0(c);
SET64(31, 0x28a894); SET64(16, RD(2) + RD(0)); JP_F_0028ABA8(c);
SET64(31, 0x28a89c);  JP_F_0028AB88(c);
SET64(31, 0x28a8a4);  JP_F_0028AB50(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
if (RD(16) == 0) SET64(2, RD(18));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028A8C8(Ctx *c) { /* func_0028A8C8 */
ENTER(0x28a8c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8E0(c); return; }
}

void JP_F_0028A8E0(Ctx *c) { /* func_0028A8E0 */
ENTER(0x28a8e0);
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void JP_F_0028A8F8(Ctx *c) { /* func_0028A8F8 */
ENTER(0x28a8f8);
SET32(29, RW(29) + -32);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0028A954; }
{ int t = RD(16) != RD(0);  if (t) goto L_0028A938; }
SET64(4, (s64)(s32)0x410000);
SET64(31, 0x28a92c); SET32(4, RW(4) + 25300); JP_F_0028A968(c);
SET64(2, RD(17) + RD(0)); goto L_0028A954;
L_0028A938:;
SET64(31, 0x28a940); SET32(4, RW(16) + 2544); JP_F_0028A968(c);
SET64(2, (s32)rd32(c, (RW(16) + 72)));
{ int t = RSD(2) <= 0; SET32(3, RW(0) - RW(2)); if (t) goto L_0028A950; }
wr32(c, (RW(16) + 72), RW(3));
L_0028A950:;
SET64(2, RD(17) + RD(0));
L_0028A954:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028A968(Ctx *c) { /* func_0028A968 */
ENTER(0x28a968);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(2) != RD(0); SET64(3, RD(5) + RD(0)); if (t) goto L_0028A980; }
wr32(c, (RW(4) + 8), RW(3));
L_0028A980:;
{ int t = RD(3) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0028A9A0; }
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_0028A9A0; }
{ u32 t = RW(2); SET64(31, 0x28a99c); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_0028A9A0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0028A9A8(Ctx *c) { /* func_0028A9A8 */
ENTER(0x28a9a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0028A9E0; }
SET64(4, (s64)(s32)0x410000);
SET64(31, 0x28a9d8); SET32(4, RW(4) + 25300); JP_F_0028AA40(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_0028AA24;
L_0028A9E0:;
SET64(31, 0x28a9e8);  JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0028AA10; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x101);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_0028AA10:;
SET32(4, RW(16) + 2544);
SET64(5, RD(17) + RD(0));
SET64(31, 0x28aa20); SET64(6, RD(18) + RD(0)); JP_F_0028AA40(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_0028AA24:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028AA40(Ctx *c) { /* func_0028AA40 */
ENTER(0x28aa40);
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 0), RW(5)); return;
}

void JP_F_0028AA50(Ctx *c) { /* func_0028AA50 */
ENTER(0x28aa50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_0028AAA8; }
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 24888);
ldl(c, 3, (RW(2) + 419));
ldr(c, 3, (RW(2) + 412));
ldl(c, 4, (RW(2) + 427));
ldr(c, 4, (RW(2) + 420));
SET64(5, (s32)rd32(c, (RW(2) + 428)));
sdl(c, 3, (RW(17) + 7));
sdr(c, 3, (RW(17) + 0));
sdl(c, 4, (RW(17) + 15));
sdr(c, 4, (RW(17) + 8));
wr32(c, (RW(17) + 16), RW(5));
SET64(16, rd64(c, (RW(29) + 0))); goto L_0028AB04;
L_0028AAA8:;
SET64(31, 0x28aab0);  JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0028AAD8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x102);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_0028AAD8:;
ldl(c, 2, (RW(16) + 2551));
ldr(c, 2, (RW(16) + 2544));
ldl(c, 3, (RW(16) + 2559));
ldr(c, 3, (RW(16) + 2552));
SET64(4, (s32)rd32(c, (RW(16) + 2560)));
sdl(c, 2, (RW(17) + 7));
sdr(c, 2, (RW(17) + 0));
sdl(c, 3, (RW(17) + 15));
sdr(c, 3, (RW(17) + 8));
wr32(c, (RW(17) + 16), RW(4));
SET64(16, rd64(c, (RW(29) + 0)));
L_0028AB04:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028AB18(Ctx *c) { /* func_0028AB18 */
ENTER(0x28ab18);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 24880), RW(4));
{ int t = RD(4) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_0028AB30; }
SET64(3, (s32)rd32(c, (RW(4) + 72)));
if (RD(3) != 0) SET64(2, RD(0));
L_0028AB30:;
 return;
}

void JP_F_0028AB38(Ctx *c) { /* func_0028AB38 */
ENTER(0x28ab38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00269978(c); return; }
}

void JP_F_0028AB50(Ctx *c) { /* func_0028AB50 */
ENTER(0x28ab50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002699F8(c); return; }
}

void JP_F_0028AB68(Ctx *c) { /* func_0028AB68 */
ENTER(0x28ab68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x28ab78);  JP_F_002943D8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00289BC0(c); return; }
}

void JP_F_0028AB88(Ctx *c) { /* func_0028AB88 */
ENTER(0x28ab88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00289BE0(c); return; }
}

void JP_F_0028ABA0(Ctx *c) { /* func_0028ABA0 */
ENTER(0x28aba0);
 return;
}

void JP_F_0028ABA8(Ctx *c) { /* func_0028ABA8 */
ENTER(0x28aba8);
 return;
}

void JP_F_0028ABB0(Ctx *c) { /* func_0028ABB0 */
ENTER(0x28abb0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C068(c); return; }
}

void JP_F_0028ABC8(Ctx *c) { /* func_0028ABC8 */
ENTER(0x28abc8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026C080(c); return; }
}

void JP_F_0028ABE0(Ctx *c) { /* func_0028ABE0 */
ENTER(0x28abe0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028ABE8(Ctx *c) { /* func_0028ABE8 */
ENTER(0x28abe8);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028ABF0(Ctx *c) { /* func_0028ABF0 */
ENTER(0x28abf0);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x28ac04); SET64(5, (s32)rd32(c, (RW(4) + 7996))); JP_F_00288768(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028AC18(Ctx *c) { /* func_0028AC18 */
ENTER(0x28ac18);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028AC20(Ctx *c) { /* func_0028AC20 */
ENTER(0x28ac20);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028AC28(Ctx *c) { /* func_0028AC28 */
ENTER(0x28ac28);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028AC30(Ctx *c) { /* func_0028AC30 */
ENTER(0x28ac30);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028AC38(Ctx *c) { /* func_0028AC38 */
ENTER(0x28ac38);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028AC40(Ctx *c) { /* func_0028AC40 */
ENTER(0x28ac40);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028AC48(Ctx *c) { /* func_0028AC48 */
ENTER(0x28ac48);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 7996)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00287AC0(c); return; }
}

void JP_F_0028AC68(Ctx *c) { /* func_0028AC68 */
ENTER(0x28ac68);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(7, RD(6) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 7996)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00287B98(c); return; }
}

void JP_F_0028AC90(Ctx *c) { /* func_0028AC90 */
ENTER(0x28ac90);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x501);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0028ACB0(Ctx *c) { /* func_0028ACB0 */
ENTER(0x28acb0);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x501);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0028ACD0(Ctx *c) { /* func_0028ACD0 */
ENTER(0x28acd0);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028ACD8(Ctx *c) { /* func_0028ACD8 */
ENTER(0x28acd8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x28ad0c); SET64(20, RD(8) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET32(3, RW(17) + -188);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x171);
{ int t = RD(2) == RD(0); SET64(3, RD(3) < (u64)(s64)68); if (t) goto L_0028AD48; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_0028A8F8(c); return; }
L_0028AD48:;
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028AD6C; }
SET64(4, (s32)rd32(c, (RW(16) + 8052)));
SET32(3, RW(17) << 2);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(4) + 336), RW(19));
wr32(c, (RW(3) + -688), RW(18));
wr32(c, (RW(4) + 340), RW(20));
SET64(16, rd64(c, (RW(29) + 0)));
L_0028AD6C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028AD88(Ctx *c) { /* func_0028AD88 */
ENTER(0x28ad88);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_0028AD98; }
SET64(3, (s32)rd32(c, (RW(4) + 8052)));
SET64(2, (s32)rd32(c, (RW(3) + 52)));
L_0028AD98:;
 return;
}

void JP_F_0028ADA0(Ctx *c) { /* func_0028ADA0 */
ENTER(0x28ada0);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_0028ADB0; }
SET64(3, (s32)rd32(c, (RW(4) + 8052)));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
L_0028ADB0:;
 return;
}

void JP_F_0028ADB8(Ctx *c) { /* func_0028ADB8 */
ENTER(0x28adb8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x28adc8);  JP_F_0028AE28(c);
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x540000); if (t) goto L_0028ADF0; }
L_0028ADD0:;
 { POLL(); goto L_0028ADD0; }
L_0028ADF0:;
SET32(4, RW(0) + 8);
SET64(31, 0x28adfc); SET32(5, RW(5) + -18080); JP_F_00277428(c);
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0028AE18; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0xd01);
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_0028AE18:;
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(3) + 25440), RW(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028AE28(Ctx *c) { /* func_0028AE28 */
ENTER(0x28ae28);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028AE30(Ctx *c) { /* func_0028AE30 */
ENTER(0x28ae30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x28ae40);  JP_F_00277530(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028AE50(Ctx *c) { /* func_0028AE50 */
ENTER(0x28ae50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028AE68(c); return; }
}

void JP_F_0028AE68(Ctx *c) { /* func_0028AE68 */
ENTER(0x28ae68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28ae80); SET64(16, RD(4) + RD(0)); JP_F_0028BF88(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_0028AE98; }
SET64(2, RD(0) + RD(0)); goto L_0028AEC8;
L_0028AE98:;
SET64(31, 0x28aea0);  JP_F_0028AEE0(c);
SET64(31, 0x28aea8); SET64(4, RD(16) + RD(0)); JP_F_0028AF40(c);
SET64(3, (s32)rd32(c, (RW(16) + 72)));
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + 2);
{ int t = RD(3) != RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_0028AEC4; }
SET64(31, 0x28aec4);  JP_F_0028C210(c);
L_0028AEC4:;
SET64(2, RD(17) + RD(0));
L_0028AEC8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028AEE0(Ctx *c) { /* func_0028AEE0 */
ENTER(0x28aee0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 85);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 16), RD(18));
SET64(2, (s32)rd32(c, (RW(16) + 8052)));
SET64(31, 0x28af08); SET64(18, (s32)rd32(c, (RW(2) + 0))); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 86);
SET64(31, 0x28af18); SET64(17, RD(2) + RD(0)); JP_F_00297980(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(6, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_002753A0(c); return; }
}

void JP_F_0028AF40(Ctx *c) { /* func_0028AF40 */
ENTER(0x28af40);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
SET64(19, RD(0) + RD(0));
wr64(c, (RW(29) + 64), RD(20));
SET64(20, (s64)(s32)0x7fff0000);
wr64(c, (RW(29) + 72), RD(21));
SET64(20, RD(20) | 0xfffe);
wr64(c, (RW(29) + 80), RD(31));
SET64(21, (s32)rd32(c, (RW(17) + 40))); goto L_0028AFA4;
L_0028AF80:;
SET64(31, 0x28af88);  JP_F_0028B0A0(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028B004; }
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET32(19, RW(19) + RW(2));
SET32(18, RW(18) + RW(3));
L_0028AFA4:;
SET64(2, RSD(20) < RSD(18));
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028B004; }
SET64(7, RD(21) + RD(0));
SET32(8, RW(29) + 8);
SET64(5, RD(29) + RD(0));
SET64(31, 0x28afc4); SET32(6, RW(29) + 4); JP_F_0028B038(c);
SET64(4, RD(17) + RD(0));
SET64(16, RD(2) + RD(0));
SET32(7, RW(29) + 12);
{ int t = RD(16) != RD(0); SET32(8, RW(29) + 16); if (t) goto L_0028B004; }
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x28afe8); SET64(9, (s32)rd32(c, (RW(29) + 8))); JP_F_0028B0C0(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028B000; }
SET64(5, (s32)rd32(c, (RW(29) + 12)));
{ int t = RD(5) != RD(0);  if (t) { POLL(); goto L_0028AF80; } }
L_0028B000:;
SET64(4, RD(17) + RD(0));
L_0028B004:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x28b010); SET64(6, RD(19) + RD(0)); JP_F_0028C7D0(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(16, rd64(c, (RW(29) + 32)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void JP_F_0028B038(Ctx *c) { /* func_0028B038 */
ENTER(0x28b038);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(8) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(6, RD(29) + RD(0));
SET64(31, 0x28b064); SET64(5, (s32)rd32(c, (RW(4) + 8060))); JP_F_00287AD8(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028B08C; }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(4, (s32)rd32(c, (RW(29) + 12)));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(3) + RW(4));
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(18) + 0), RW(5));
wr32(c, (RW(17) + 0), RW(4));
SET64(16, rd64(c, (RW(29) + 32)));
L_0028B08C:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0028B0A0(Ctx *c) { /* func_0028B0A0 */
ENTER(0x28b0a0);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x28b0b4); SET64(5, (s32)rd32(c, (RW(4) + 8060))); JP_F_00287BB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028B0C0(Ctx *c) { /* func_0028B0C0 */
ENTER(0x28b0c0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(8) + RD(0));
wr64(c, (RW(29) + 72), RD(21));
SET64(21, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 80), RD(22));
SET64(22, RD(6) + RD(0));
wr64(c, (RW(29) + 88), RD(23));
SET64(23, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET64(7, RD(9) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 96), RD(30));
wr64(c, (RW(29) + 104), RD(31));
wr32(c, (RW(21) + 0), RW(0));
wr32(c, (RW(18) + 0), RW(0));
SET64(19, (s32)rd32(c, (RW(17) + 8052)));
wr32(c, (RW(29) + 20), RW(0));
SET64(31, 0x28b11c); SET64(20, (s32)rd32(c, (RW(19) + 0))); JP_F_0028C010(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028B364; }
SET64(2, RSD(22) < (s64)4);
if (RD(2) != RD(0)) { SET64(30, RD(0) + RD(0)); goto L_0028B13C; }
SET64(31, 0x28b138); SET64(4, RD(23) + RD(0)); JP_F_002770A0(c);
SET64(30, RD(2) + RD(0));
L_0028B13C:;
SET32(5, RW(0) + 87);
SET64(31, 0x28b148); SET64(4, RD(17) + RD(0)); JP_F_00297980(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 88);
SET64(31, 0x28b158); SET64(16, RD(2) + RD(0)); JP_F_00297980(c);
SET64(4, RD(20) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x28b168); SET64(5, RD(16) + RD(0)); JP_F_002753F0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28b174); SET32(5, RW(0) + 91); JP_F_00297980(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 92);
SET64(31, 0x28b184); SET64(16, RD(2) + RD(0)); JP_F_00297980(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x28b194); SET64(6, RD(2) + RD(0)); JP_F_00275440(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(23) + RD(0));
SET64(6, RD(22) + RD(0));
SET64(7, RD(29) + RD(0));
SET64(31, 0x28b1ac); SET32(8, RW(29) + 4); JP_F_00275490(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028B1C4; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x28b1c0); SET64(5, RD(5) | 0xd03); JP_F_0028A8F8(c);
wr32(c, (RW(29) + 20), RW(2));
L_0028B1C4:;
SET64(16, (s32)rd32(c, (RW(29) + 4)));
SET64(2, (s64)(s32)0x20000);
SET64(2, RD(16) & RD(2));
{ int t = RD(2) == RD(0); SET64(5, RD(20) + RD(0)); if (t) goto L_0028B1EC; }
SET64(4, RD(17) + RD(0));
SET64(6, RD(23) + RD(0));
SET64(31, 0x28b1e8); SET64(7, RD(22) + RD(0)); JP_F_0028C718(c);
SET64(16, (s32)rd32(c, (RW(29) + 4)));
L_0028B1EC:;
SET64(2, (s64)(s32)0x80000);
{ int t = RD(16) != RD(2);  if (t) goto L_0028B240; }
SET64(31, 0x28b200); SET64(4, RD(17) + RD(0)); JP_F_00288A88(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 4))); goto L_0028B220; }
SET64(31, 0x28b210); SET64(4, RD(17) + RD(0)); JP_F_0028BFF8(c);
SET32(2, RW(0) + 4);
wr32(c, (RW(21) + 0), RW(2)); goto L_0028B358;
L_0028B220:;
{ int t = RD(2) != RD(16);  if (t) goto L_0028B240; }
SET64(31, 0x28b230); SET64(4, RD(17) + RD(0)); JP_F_00288AA8(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_0028B240; }
wr32(c, (RW(21) + 0), RW(2)); goto L_0028B358;
L_0028B240:;
{ int t = RD(30) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_0028B2C8; }
SET64(5, RD(23) + RD(0));
SET64(6, RD(22) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x28b25c); SET64(7, RD(18) + RD(0)); JP_F_0028B390(c);
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(21) + 0), RW(2));
SET64(5, (s32)rd32(c, (RW(18) + 0)));
{ int t = RSD(5) <= 0; SET64(2, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_0028B360; }
SET64(3, (s32)rd32(c, (RW(19) + 344)));
{ int t = RSD(3) < 0; SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_0028B364; }
SET64(4, (s32)rd32(c, (RW(17) + 40)));
SET64(2, RSD(3) < RSD(4));
{ int t = RD(2) != RD(0); SET32(6, RW(3) + RW(5)); if (t) goto L_0028B298; }
SET32(2, RW(3) + RW(5)); goto L_0028B358;
L_0028B298:;
SET64(2, RSD(4) < RSD(6));
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 344), RW(6)); goto L_0028B2C0; }
SET32(3, RW(4) - RW(3));
SET32(3, RW(5) - RW(3));
wr32(c, (RW(18) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 40)));
SET32(2, RW(2) + RW(3)); goto L_0028B358;
L_0028B2C0:;
wr32(c, (RW(18) + 0), RW(0)); goto L_0028B35C;
L_0028B2C8:;
SET64(3, (s64)(s32)0x40000);
SET64(2, RD(2) & RD(3));
if (RD(2) != RD(0)) { SET64(5, (s32)rd32(c, (RW(29) + 0))); goto L_0028B318; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x28b2e4); SET32(5, RW(29) + 8); JP_F_0028C1A8(c);
SET64(2, (s32)rd32(c, (RW(29) + 8)));
{ int t = RD(2) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_0028B360; }
SET64(2, (s32)rd32(c, (RW(17) + 40)));
SET64(2, RSD(2) < RSD(22));
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_0028B360; }
SET64(2, (s32)rd32(c, (RW(29) + 0)));
if (RSD(2) <= 0) { SET32(2, RW(0) + 1); goto L_0028B30C; }
L_0028B30C:;
wr32(c, (RW(21) + 0), RW(2));
wr32(c, (RW(18) + 0), RW(2)); goto L_0028B35C;
L_0028B318:;
SET64(4, RD(17) + RD(0));
SET32(7, RW(29) + 12);
SET32(8, RW(29) + 16);
SET32(6, RW(22) - RW(5));
SET64(31, 0x28b330); SET32(5, RW(23) + RW(5)); JP_F_0028B538(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(29) + 20), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 16)));
{ int t = RD(2) != RD(3); SET32(2, RW(0) + -1); if (t) goto L_0028B358; }
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(21) + 0), RW(2));
SET32(2, RW(0) + -1);
L_0028B358:;
wr32(c, (RW(19) + 344), RW(2));
L_0028B35C:;
SET64(2, (s32)rd32(c, (RW(29) + 20)));
L_0028B360:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0028B364:;
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

void JP_F_0028B390(Ctx *c) { /* func_0028B390 */
ENTER(0x28b390);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 48), RD(31));
wr32(c, (RW(19) + 0), RW(0));
SET64(18, (s32)rd32(c, (RW(21) + 40)));
SET32(2, RW(18) + 3);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_0028B3E8; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x28b3e0); SET64(5, RD(18) + RD(0)); JP_F_0028B470(c);
if (RD(2) != RD(0)) { wr32(c, (RW(19) + 0), RW(18)); goto L_0028B448; }
L_0028B3E8:;
SET64(2, RSD(16) < (s64)4);
{ int t = RD(2) != RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_0028B420; }
SET64(20, (s64)(s32)0xd0000);
L_0028B3F8:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x28b404); SET32(17, RW(17) + 1); JP_F_002770A0(c);
SET64(2, RD(2) & RD(20));
if (RD(2) != RD(0)) { wr32(c, (RW(19) + 0), RW(18)); goto L_0028B448; }
SET32(16, RW(16) + -1);
SET64(2, RSD(16) < (s64)4);
{ int t = RD(2) == RD(0); SET32(18, RW(18) + 1); if (t) { POLL(); goto L_0028B3F8; } }
L_0028B420:;
SET32(2, RW(16) + -1);
SET64(2, RD(2) < (u64)(s64)3);
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 0), RW(18)); goto L_0028B448; }
SET64(4, RD(21) + RD(0));
SET64(31, 0x28b43c); SET32(5, RW(17) + RW(16)); JP_F_0028B4B0(c);
SET32(3, RW(18) + RW(16));
if (RD(2) != 0) SET64(18, RD(3));
wr32(c, (RW(19) + 0), RW(18));
L_0028B448:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0028B470(Ctx *c) { /* func_0028B470 */
ENTER(0x28b470);
{ int t = RSD(5) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0028B4A4; }
SET64(3, rd8(c, (RW(4) + 0)));
L_0028B480:;
SET32(4, RW(4) + 1);
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028B4A8; }
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(5));
if (RD(2) != RD(0)) { SET64(3, rd8(c, (RW(4) + 0))); { POLL(); goto L_0028B480; } }
L_0028B4A4:;
SET32(2, RW(0) + 1);
L_0028B4A8:;
 return;
}

void JP_F_0028B4B0(Ctx *c) { /* func_0028B4B0 */
ENTER(0x28b4b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28b4c4); SET64(16, RD(5) + RD(0)); JP_F_0028B510(c);
SET64(4, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 12))); goto L_0028B4F0; }
SET64(2, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028B500; }
SET64(2, (s32)rd32(c, (RW(4) + 20)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028B500; }
SET64(3, (s32)rd32(c, (RW(4) + 12)));
L_0028B4F0:;
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(2) + RW(3));
SET64(2, RD(16) ^ RD(2));
SET64(2, RD(2) < (u64)(s64)1);
L_0028B500:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028B510(Ctx *c) { /* func_0028B510 */
ENTER(0x28b510);
SET64(2, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 8060)));
SET32(3, RW(4) << 3);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) + 4888); return;
}

void JP_F_0028B538(Ctx *c) { /* func_0028B538 */
ENTER(0x28b538);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 72), RD(19));
SET64(19, RD(8) + RD(0));
wr64(c, (RW(29) + 80), RD(20));
SET64(20, RD(7) + RD(0));
wr64(c, (RW(29) + 64), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 88), RD(21));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 96), RD(22));
SET64(22, RD(0) + RD(0));
wr64(c, (RW(29) + 104), RD(23));
SET64(23, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(16));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
wr64(c, (RW(29) + 112), RD(31));
wr32(c, (RW(20) + 0), RW(0));
wr32(c, (RW(19) + 0), RW(0));
SET64(17, (s32)rd32(c, (RW(18) + 8052)));
SET64(31, 0x28b590); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_00277398(c);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0028B5A8; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x28b5a4); SET64(5, RD(5) | 0xd06); JP_F_0028A8F8(c);
SET64(22, RD(2) + RD(0));
L_0028B5A8:;
SET64(16, (s32)rd32(c, (RW(29) + 36)));
SET64(7, (s32)rd32(c, (RW(29) + 16)));
SET64(3, (s32)rd32(c, (RW(29) + 20)));
SET64(5, (s32)rd32(c, (RW(29) + 24)));
{ int t = RSD(16) >= 0; SET64(8, rd64(c, (RW(29) + 0))); if (t) goto L_0028B5D8; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(18) + RD(0));
SET64(31, 0x28b5d0); SET64(5, RD(5) | 0xd0e); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 48))); goto L_0028B688;
L_0028B5D8:;
if (RD(16) != RD(0)) { SET64(2, RSD(21) < RSD(16)); goto L_0028B5F8; }
SET32(2, RW(0) + 1);
wr32(c, (RW(20) + 0), RW(0));
wr32(c, (RW(19) + 0), RW(2));
SET64(2, RD(0) + RD(0)); goto L_0028B684;
L_0028B5F8:;
if (RD(2) == RD(0)) { SET32(2, RW(7) << 2); goto L_0028B618; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x28b60c); SET64(5, RD(0) + RD(0)); JP_F_0028C1A8(c);
SET64(2, RD(0) + RD(0)); goto L_0028B684;
L_0028B618:;
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + -688)));
if (RD(4) == RD(0)) { SET32(3, RW(3) << 2); goto L_0028B648; }
SET64(6, (s32)rd32(c, (RW(17) + 340)));
SET64(8, RD(23) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 336)));
SET64(31, 0x28b63c); SET64(9, RD(16) + RD(0)); JP_F_0028B6B0(c);
wr32(c, (RW(19) + 0), RW(2)); goto L_0028B668;
L_0028B648:;
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 31680)));
SET64(6, RD(23) + RD(0));
{ u32 t = RW(2); SET64(31, 0x28b664); SET64(7, RD(16) + RD(0)); rt_call(c, t); }
wr32(c, (RW(19) + 0), RW(2));
L_0028B668:;
SET64(8, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(8) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028B680; }
if (RD(8) != RD(2)) { SET64(22, RD(8) + RD(0)); goto L_0028B680; }
wr32(c, (RW(20) + 0), RW(16));
L_0028B680:;
SET64(2, RD(22) + RD(0));
L_0028B684:;
SET64(16, rd64(c, (RW(29) + 48)));
L_0028B688:;
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(21, rd64(c, (RW(29) + 88)));
SET64(22, rd64(c, (RW(29) + 96)));
SET64(23, rd64(c, (RW(29) + 104)));
SET64(31, rd64(c, (RW(29) + 112)));
SET32(29, RW(29) + 128); return;
}

void JP_F_0028B6B0(Ctx *c) { /* func_0028B6B0 */
ENTER(0x28b6b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(6) + RD(0));
SET64(5, RD(8) + RD(0));
SET64(6, RD(9) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28b6e0); SET64(17, RD(7) + RD(0)); JP_F_0028BC68(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 1);
if (RD(16) != RD(2)) { SET64(2, RD(16) + RD(0)); goto L_0028B704; }
{ int t = RD(18) == RD(0); SET64(4, RD(19) + RD(0)); if (t) goto L_0028B700; }
{ u32 t = RW(18); SET64(31, 0x28b700); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_0028B700:;
SET64(2, RD(16) + RD(0));
L_0028B704:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028B720(Ctx *c) { /* func_0028B720 */
ENTER(0x28b720);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 40), RD(21));
SET64(21, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(23));
SET64(23, RD(6) + RD(0));
wr64(c, (RW(29) + 64), RD(30));
SET64(30, RD(7) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(20));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 72), RD(31));
SET64(31, 0x28b768); SET64(19, RD(8) + RD(0)); JP_F_00297980(c);
{ int t = RD(2) != RD(0); SET32(22, RW(21) + 8044); if (t) goto L_0028B778; }
SET32(2, RW(0) + 1); goto L_0028B860;
L_0028B778:;
SET32(18, RW(0) + -1);
SET64(16, (s32)rd32(c, (RW(22) + 8)));
SET64(2, (s32)rd32(c, (RW(16) + 56)));
if (RD(2) == RD(18)) { wr32(c, (RW(16) + 56), RW(17)); goto L_0028B78C; }
L_0028B78C:;
SET64(2, (s32)rd32(c, (RW(16) + 48)));
if (RD(2) == RD(18)) { wr32(c, (RW(16) + 48), RW(17)); goto L_0028B798; }
L_0028B798:;
SET64(4, RD(21) + RD(0));
SET64(31, 0x28b7a4); SET32(5, RW(0) + 30); JP_F_00297980(c);
SET64(20, RD(2) + RD(0));
{ int t = RD(20) == RD(18); SET64(4, RD(21) + RD(0)); if (t) goto L_0028B7E4; }
SET64(31, 0x28b7b8); SET32(5, RW(0) + 55); JP_F_00297980(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 48))); goto L_0028B7D8; }
SET64(2, (s32)rd32(c, (RW(16) + 40)));
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 56), RW(20)); goto L_0028B7E4; }
SET64(3, (s32)rd32(c, (RW(16) + 56))); goto L_0028B7E8;
L_0028B7D8:;
if (RD(17) != RD(2)) { SET64(3, (s32)rd32(c, (RW(16) + 56))); goto L_0028B7E8; }
wr32(c, (RW(16) + 56), RW(20));
L_0028B7E4:;
SET64(3, (s32)rd32(c, (RW(16) + 56)));
L_0028B7E8:;
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(17); wr32(c, (RW(16) + 40), RW(17)); if (t) goto L_0028B860; }
if (RSD(19) < 0) { SET64(5, (s32)rd32(c, (RW(22) + 24))); goto L_0028B820; }
SET64(2, rd64(c, (RW(16) + 16)));
SET64(3, rd64(c, (RW(16) + 24)));
SET64(4, RSD(19) < RSD(2));
SET64(5, RSD(19) < RSD(3));
if (RD(4) != 0) SET64(2, RD(19));
if (RD(5) != 0) SET64(3, RD(19));
wr64(c, (RW(16) + 16), RD(2));
wr64(c, (RW(16) + 24), RD(3));
SET64(5, (s32)rd32(c, (RW(22) + 24)));
L_0028B820:;
SET64(4, RD(21) + RD(0));
SET64(6, RD(23) + RD(0));
SET64(23, rd64(c, (RW(29) + 56)));
SET64(7, RD(30) + RD(0));
SET64(30, rd64(c, (RW(29) + 64)));
SET64(8, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); { JP_F_0028BD88(c); return; }
L_0028B860:;
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

void JP_F_0028B890(Ctx *c) { /* func_0028B890 */
ENTER(0x28b890);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(22));
SET64(22, RD(5) + RD(0));
SET32(5, RW(0) + 5);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(20));
SET64(20, RD(6) + RD(0));
wr64(c, (RW(29) + 64), RD(30));
SET64(30, RD(8) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 56), RD(23));
wr64(c, (RW(29) + 72), RD(31));
SET64(31, 0x28b8d8); SET64(17, RD(4) + RD(0)); JP_F_00297980(c);
{ int t = RD(2) != RD(0); SET32(23, RW(17) + 8044); if (t) goto L_0028B8E8; }
SET32(2, RW(0) + 1); goto L_0028BA38;
L_0028B8E8:;
SET32(21, RW(0) + -1);
SET64(16, (s32)rd32(c, (RW(23) + 8)));
SET64(2, (s32)rd32(c, (RW(16) + 52)));
if (RD(2) != RD(21)) { SET64(2, (s32)rd32(c, (RW(16) + 44))); goto L_0028B910; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x28b908); SET64(5, RD(22) + RD(0)); JP_F_0028BA68(c);
wr32(c, (RW(16) + 52), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 44)));
L_0028B910:;
if (RD(2) == RD(21)) { wr32(c, (RW(16) + 44), RW(22)); goto L_0028B918; }
L_0028B918:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x28b924); SET32(5, RW(0) + 29); JP_F_00297980(c);
SET64(18, RD(2) + RD(0));
{ int t = RD(18) == RD(21); SET64(4, RD(17) + RD(0)); if (t) goto L_0028B9C0; }
SET64(31, 0x28b938); SET32(5, RW(0) + 55); JP_F_00297980(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 44))); goto L_0028B958; }
SET64(2, (s32)rd32(c, (RW(16) + 36)));
SET64(2, RSD(22) < RSD(2));
{ int t = RD(2) != RD(0); SET64(4, (s32)rd32(c, (RW(16) + 52))); if (t) goto L_0028B960; }
wr32(c, (RW(16) + 36), RW(22)); goto L_0028B9C8;
L_0028B958:;
{ int t = RD(22) != RD(2); SET64(4, (s32)rd32(c, (RW(16) + 52))); if (t) goto L_0028B9C4; }
L_0028B960:;
{ int t = RD(4) == RD(18); SET64(2, RSD(19) < (s64)4); if (t) goto L_0028B9C4; }
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 36), RW(22)); goto L_0028B9C8; }
SET64(2, (s8)rd8(c, (RW(20) + 0)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 36), RW(22)); goto L_0028B9C8; }
SET64(2, (s8)rd8(c, (RW(20) + 1)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 36), RW(22)); goto L_0028B9C8; }
SET64(3, rd8(c, (RW(20) + 2)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { wr32(c, (RW(16) + 36), RW(22)); goto L_0028B9C8; }
SET64(3, rd8(c, (RW(20) + 3)));
SET32(2, RW(0) + 179);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 184); if (t) goto L_0028B9B0; }
if (RD(3) != RD(2)) { wr32(c, (RW(16) + 36), RW(22)); goto L_0028B9C8; }
L_0028B9B0:;
wr32(c, (RW(16) + 52), RW(18));
SET64(4, RD(18) + RD(0)); goto L_0028B9C4;
L_0028B9C0:;
SET64(4, (s32)rd32(c, (RW(16) + 52)));
L_0028B9C4:;
wr32(c, (RW(16) + 36), RW(22));
L_0028B9C8:;
{ int t = RD(4) != RD(22); SET32(2, RW(0) + 1); if (t) goto L_0028BA38; }
SET64(6, RD(19) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x28b9e0); SET64(5, RD(20) + RD(0)); JP_F_002939E0(c);
SET64(19, RD(2) + RD(0));
{ int t = RSD(19) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0028BA38; }
SET64(5, (s32)rd32(c, (RW(23) + 20)));
SET64(8, RD(30) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(31, 0x28ba04); SET64(7, RD(19) + RD(0)); JP_F_0028BD88(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 1);
{ int t = RD(16) == RD(2); SET64(4, RD(17) + RD(0)); if (t) goto L_0028BA28; }
SET64(31, 0x28ba1c); SET64(5, RD(19) + RD(0)); JP_F_00293A50(c);
SET64(2, RD(16) + RD(0)); goto L_0028BA38;
L_0028BA28:;
SET64(5, RD(20) + RD(0));
SET64(31, 0x28ba34); SET64(6, RD(19) + RD(0)); JP_F_00293D90(c);
SET64(2, RD(16) + RD(0));
L_0028BA38:;
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

void JP_F_0028BA68(Ctx *c) { /* func_0028BA68 */
ENTER(0x28ba68);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 59);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x28ba8c); SET64(18, RD(4) + RD(0)); JP_F_00297980(c);
SET64(16, RD(2) + RD(0));
SET64(2, RD(17) + RD(0));
SET32(3, RW(0) + 1);
{ int t = RD(16) == RD(3); SET64(4, RSD(16) < (s64)2); if (t) goto L_0028BAD4; }
if (RD(4) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0028BAD8; }
SET32(2, RW(0) + 2);
if (RD(16) != RD(2)) { SET64(2, RD(17) + RD(0)); goto L_0028BAD4; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(31, 0x28bac4); SET32(6, RW(29) + 4); JP_F_0028C518(c);
SET64(2, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(3, RSD(3) < (s64)2);
if (RD(3) != 0) SET64(2, RD(17));
L_0028BAD4:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0028BAD8:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028BAF0(Ctx *c) { /* func_0028BAF0 */
ENTER(0x28baf0);
SET32(29, RW(29) + -64);
SET64(8, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(7) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x28bb20); SET64(16, RD(5) + RD(0)); JP_F_00289C20(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(6, RD(18) + RD(0));
{ int t = RD(2) == RD(0); SET64(7, RD(19) + RD(0)); if (t) goto L_0028BB68; }
SET64(31, 0x28bb3c);  JP_F_0028CB68(c);
SET32(6, RW(18) + -18);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET32(7, RW(19) + 18); if (t) goto L_0028BB5C; }
SET64(31, 0x28bb5c);  JP_F_0028BB90(c);
L_0028BB5C:;
SET32(2, RW(0) + 1); goto L_0028BB70;
L_0028BB68:;
SET64(31, 0x28bb70); SET64(4, RD(17) + RD(0)); JP_F_0028BB90(c);
L_0028BB70:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0028BB90(Ctx *c) { /* func_0028BB90 */
ENTER(0x28bb90);
SET32(29, RW(29) + -80);
SET32(8, RW(0) + 8);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(6, RD(16) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
SET64(7, RD(29) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(21) + 8072)));
{ int t = RD(3) == RD(8); SET64(5, RD(3) + RD(0)); if (t) goto L_0028BC44; }
SET64(31, 0x28bbe4);  JP_F_00287A50(c);
SET64(5, RD(19) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(17) + RD(0));
SET64(18, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(0) + 1);
SET64(4, RD(3) + RD(0));
SET64(19, (s32)rd32(c, (RW(29) + 8)));
{ int t = RD(3) == RD(0); SET64(20, (s32)rd32(c, (RW(29) + 12))); if (t) goto L_0028BC44; }
SET64(31, 0x28bc10);  JP_F_0028BC68(c);
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + 1);
if (RD(17) != RD(2)) { SET64(2, RD(17) + RD(0)); goto L_0028BC44; }
{ int t = RD(18) == RD(0); SET64(4, RD(21) + RD(0)); if (t) goto L_0028BC30; }
{ u32 t = RW(18); SET64(31, 0x28bc30); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_0028BC30:;
{ int t = RD(19) == RD(0); SET64(4, RD(20) + RD(0)); if (t) goto L_0028BC40; }
{ u32 t = RW(19); SET64(31, 0x28bc40); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_0028BC40:;
SET64(2, RD(17) + RD(0));
L_0028BC44:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0028BC68(Ctx *c) { /* func_0028BC68 */
ENTER(0x28bc68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x28bc98); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(3, RSD(2) < RSD(16));
SET64(2, RD(0) + RD(0));
SET64(5, RD(17) + RD(0));
{ int t = RD(3) != RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_0028BCF8; }
SET64(31, 0x28bcb8);  JP_F_0028BD10(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(16, RW(16) - RW(3)); if (t) goto L_0028BCF8; }
{ int t = RSD(16) <= 0; SET32(17, RW(17) + RW(3)); if (t) goto L_0028BCF4; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x28bcdc); SET64(6, RD(16) + RD(0)); JP_F_0028BD10(c);
SET64(3, (s64)(s32)0x410000);
{ int t = RD(2) == RD(16); SET32(3, RW(3) + 25440); if (t) goto L_0028BCF4; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
L_0028BCF4:;
SET32(2, RW(0) + 1);
L_0028BCF8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028BD10(Ctx *c) { /* func_0028BD10 */
ENTER(0x28bd10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(7, RD(29) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x28bd3c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(5, RD(17) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x28bd4c); SET64(6, (s32)rd32(c, (RW(29) + 4))); JP_F_00274E00(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x28bd64); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028BD80(Ctx *c) { /* func_0028BD80 */
ENTER(0x28bd80);
SET32(2, RW(0) + 1); return;
}

void JP_F_0028BD88(Ctx *c) { /* func_0028BD88 */
ENTER(0x28bd88);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 120), RD(21));
SET64(21, RD(6) + RD(0));
SET64(6, RD(29) + RD(0));
wr64(c, (RW(29) + 80), RD(16));
wr64(c, (RW(29) + 96), RD(18));
SET64(18, RD(8) + RD(0));
wr64(c, (RW(29) + 112), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 128), RD(22));
SET64(22, RD(5) + RD(0));
wr64(c, (RW(29) + 88), RD(17));
wr64(c, (RW(29) + 104), RD(19));
wr64(c, (RW(29) + 136), RD(23));
wr64(c, (RW(29) + 144), RD(30));
wr64(c, (RW(29) + 152), RD(31));
SET64(31, 0x28bdd0); SET64(16, RD(7) + RD(0)); JP_F_00287AC0(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 80))); goto L_0028BEEC; }
SET64(17, (s32)rd32(c, (RW(29) + 4)));
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET64(19, (s32)rd32(c, (RW(29) + 0)));
SET32(3, RW(17) + RW(3));
SET64(23, (s32)rd32(c, (RW(29) + 8)));
SET64(3, RSD(3) < RSD(16));
{ int t = RD(3) != RD(0); SET64(30, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_0028BEE8; }
SET32(2, RW(0) + 1);
if (RD(22) != RD(2)) { SET32(2, RW(0) + 2); goto L_0028BE50; }
{ int t = RSD(18) < 0; SET64(4, RD(20) + RD(0)); if (t) goto L_0028BE90; }
SET64(31, 0x28be14); SET32(5, RW(0) + 1); JP_F_00296830(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0028BEE8; }
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(29) + 32);
SET32(7, RW(29) + 64);
wr64(c, (RW(29) + 32), RD(18));
wr32(c, (RW(29) + 40), RW(19));
SET64(31, 0x28be3c); wr32(c, (RW(29) + 44), RW(16)); JP_F_00296530(c);
if (RD(2) == RD(0)) { SET64(2, RSD(17) < RSD(16)); goto L_0028BE94; }
SET64(16, rd64(c, (RW(29) + 80))); goto L_0028BEEC;
L_0028BE50:;
{ int t = RD(22) != RD(2); SET64(2, RSD(17) < RSD(16)); if (t) goto L_0028BE94; }
SET64(2, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(2) + 25468)));
{ int t = RD(2) == RD(0); SET32(4, RW(20) + 4824); if (t) goto L_0028BE90; }
wr64(c, (RW(29) + 48), RD(18));
wr32(c, (RW(29) + 56), RW(16));
{ u32 t = RW(2); SET64(31, 0x28be78); SET32(5, RW(29) + 48); rt_call(c, t); }
SET32(3, RW(0) + -1);
if (RD(2) != RD(3)) { SET64(2, RSD(17) < RSD(16)); goto L_0028BE94; }
SET64(2, RD(0) + RD(0)); goto L_0028BEE8;
L_0028BE90:;
SET64(2, RSD(17) < RSD(16));
L_0028BE94:;
{ int t = RD(2) != RD(0); SET64(4, RD(19) + RD(0)); if (t) goto L_0028BEB0; }
SET64(5, RD(21) + RD(0));
SET64(31, 0x28bea8); SET64(6, RD(16) + RD(0)); JP_F_00274E00(c);
SET64(4, RD(20) + RD(0)); goto L_0028BED0;
L_0028BEB0:;
SET64(5, RD(21) + RD(0));
SET64(31, 0x28bebc); SET64(6, RD(17) + RD(0)); JP_F_00274E00(c);
SET64(4, RD(23) + RD(0));
SET32(5, RW(21) + RW(17));
SET64(31, 0x28becc); SET32(6, RW(16) - RW(17)); JP_F_00274E00(c);
SET64(4, RD(20) + RD(0));
L_0028BED0:;
SET64(5, RD(22) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x28bee0); SET64(7, RD(30) + RD(0)); JP_F_00287B98(c);
SET32(3, RW(0) + 1);
if (RD(2) == 0) SET64(2, RD(3));
L_0028BEE8:;
SET64(16, rd64(c, (RW(29) + 80)));
L_0028BEEC:;
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

void JP_F_0028BF18(Ctx *c) { /* func_0028BF18 */
ENTER(0x28bf18);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 8044);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28bf44); SET64(5, (s32)rd32(c, (RW(17) + 24))); JP_F_002887A8(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x28bf54); SET32(6, RW(0) + 1); JP_F_002887A8(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 28)));
SET64(31, 0x28bf64); SET32(6, RW(0) + 1); JP_F_002887A8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00293AB0(c); return; }
}

void JP_F_0028BF88(Ctx *c) { /* func_0028BF88 */
ENTER(0x28bf88);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 8044);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28bfb0); SET64(5, (s32)rd32(c, (RW(17) + 24))); JP_F_002887C8(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x28bfc0); SET64(18, RD(2) + RD(0)); JP_F_002887C8(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 28)));
SET64(19, RD(2) + RD(0));
SET64(31, 0x28bfd4); SET64(18, RD(18) & RD(19)); JP_F_002887C8(c);
SET64(2, RD(18) & RD(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028BFF8(Ctx *c) { /* func_0028BFF8 */
ENTER(0x28bff8);
SET64(3, (s32)rd32(c, (RW(4) + 8052)));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 32), RW(2)); return;
}

void JP_F_0028C010(Ctx *c) { /* func_0028C010 */
ENTER(0x28c010);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(21));
SET64(21, RD(6) + RD(0));
wr64(c, (RW(29) + 64), RD(22));
SET64(22, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET32(16, RW(18) + 8044);
wr64(c, (RW(29) + 40), RD(19));
SET64(2, RSD(21) < (s64)4);
wr64(c, (RW(29) + 48), RD(20));
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 72), RD(31));
SET64(20, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(2) != RD(0); SET64(19, (s32)rd32(c, (RW(16) + 16))); if (t) goto L_0028C0B0; }
SET64(31, 0x28c060);  JP_F_002770A0(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s64)(s32)0x80000);
{ int t = RD(17) != RD(2);  if (t) goto L_0028C0A0; }
SET64(2, (s32)rd32(c, (RW(16) + 32)));
if (RSD(2) >= 0) { SET32(2, RW(0) + 1); goto L_0028C094; }
SET64(5, RD(19) + RD(0));
SET64(31, 0x28c088); SET64(4, RD(18) + RD(0)); JP_F_00287FF0(c);
SET32(2, RW(2) + 4);
wr32(c, (RW(16) + 32), RW(2));
SET32(2, RW(0) + 1);
L_0028C094:;
wr32(c, (RW(20) + 60), RW(2)); goto L_0028C0B4;
L_0028C0A0:;
if (RD(17) != RD(0)) { wr32(c, (RW(20) + 60), RW(0)); goto L_0028C0B4; }
SET64(4, RD(18) + RD(0)); goto L_0028C0B8;
L_0028C0B0:;
SET64(17, RD(0) + RD(0));
L_0028C0B4:;
SET64(4, RD(18) + RD(0));
L_0028C0B8:;
SET64(31, 0x28c0c0); SET64(5, RD(17) + RD(0)); JP_F_0028C158(c);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0028C0D8; }
SET64(31, 0x28c0d0); SET32(5, RW(0) + 1); JP_F_0028BF18(c);
SET64(2, RD(0) + RD(0)); goto L_0028C12C;
L_0028C0D8:;
SET64(2, RSD(22) < (s64)4);
{ int t = RD(2) == RD(0); SET64(3, RSD(21) < (s64)64); if (t) goto L_0028C100; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x28c0f0); SET64(5, RD(29) + RD(0)); JP_F_0028C1A8(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028C12C; }
SET64(3, RSD(21) < (s64)64);
L_0028C100:;
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028C12C; }
SET64(2, (s64)(s32)0x10000);
{ int t = RD(17) == RD(2); SET64(3, (s64)(s32)0x40000); if (t) goto L_0028C11C; }
{ int t = RD(17) != RD(3); SET32(2, RW(0) + 1); if (t) goto L_0028C12C; }
L_0028C11C:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x28c128); SET64(5, RD(0) + RD(0)); JP_F_0028C1A8(c);
SET64(2, RD(0) + RD(0));
L_0028C12C:;
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

void JP_F_0028C158(Ctx *c) { /* func_0028C158 */
ENTER(0x28c158);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x80000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
{ int t = RD(5) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0028C198; }
SET64(31, 0x28c17c);  JP_F_00288A88(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028C194; }
SET64(31, 0x28c18c);  JP_F_00288AA8(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_0028C198; }
L_0028C194:;
SET64(2, RD(0) + RD(0));
L_0028C198:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028C1A8(Ctx *c) { /* func_0028C1A8 */
ENTER(0x28c1a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(2, RW(16) + 8044);
wr64(c, (RW(29) + 24), RD(31));
SET64(5, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x28c1d4); SET64(17, (s32)rd32(c, (RW(2) + 8))); JP_F_002887C8(c);
SET64(5, RD(0) + RD(0));
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_0028C1F0; }
SET64(31, 0x28c1ec); SET64(5, (s32)rd32(c, (RW(17) + 60))); JP_F_0028BF18(c);
SET32(5, RW(0) + 1);
L_0028C1F0:;
if (RD(18) != RD(0)) { wr32(c, (RW(18) + 0), RW(5)); goto L_0028C1F8; }
L_0028C1F8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028C210(Ctx *c) { /* func_0028C210 */
ENTER(0x28c210);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28c22c); SET32(6, RW(29) + 4); JP_F_0028C518(c);
SET64(31, 0x28c234); SET64(4, RD(16) + RD(0)); JP_F_0028C268(c);
SET64(31, 0x28c23c); SET64(4, RD(16) + RD(0)); JP_F_0028C5C8(c);
SET64(31, 0x28c244); SET64(4, RD(16) + RD(0)); JP_F_0028C420(c);
SET64(31, 0x28c24c); SET64(4, RD(16) + RD(0)); JP_F_0028C660(c);
SET64(31, 0x28c254); SET64(4, RD(16) + RD(0)); JP_F_0028C710(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028C268(Ctx *c) { /* func_0028C268 */
ENTER(0x28c268);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28c288); SET32(18, RW(0) + 1); JP_F_0028C2F0(c);
{ int t = RD(2) == RD(18); SET64(4, RD(17) + RD(0)); if (t) goto L_0028C2D8; }
SET64(16, (s32)rd32(c, (RW(17) + 8060)));
SET64(31, 0x28c29c); SET64(5, RD(16) + RD(0)); JP_F_00288788(c);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) != RD(18); SET64(5, RD(16) + RD(0)); if (t) goto L_0028C2D8; }
SET64(31, 0x28c2b0);  JP_F_0028C3C0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028C2D8; }
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028C360(c); return; }
L_0028C2D8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028C2F0(Ctx *c) { /* func_0028C2F0 */
ENTER(0x28c2f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 8044);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28c318); SET64(5, (s32)rd32(c, (RW(17) + 24))); JP_F_00288788(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x28c328); SET64(18, RD(2) + RD(0)); JP_F_00288788(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 28)));
SET64(19, RD(2) + RD(0));
SET64(31, 0x28c33c); SET64(18, RD(18) | RD(19)); JP_F_00288788(c);
SET64(2, RD(18) | RD(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028C360(Ctx *c) { /* func_0028C360 */
ENTER(0x28c360);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 8044);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(6, RD(18) + RD(0));
SET64(31, 0x28c38c); SET64(5, (s32)rd32(c, (RW(17) + 24))); JP_F_00288768(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x28c39c); SET64(6, RD(18) + RD(0)); JP_F_00288768(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 28)));
SET64(6, RD(18) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00288768(c); return; }
}

void JP_F_0028C3C0(Ctx *c) { /* func_0028C3C0 */
ENTER(0x28c3c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28c3d4); SET64(16, RD(4) + RD(0)); JP_F_0028B510(c);
SET64(6, (s32)rd32(c, (RW(16) + 8)));
SET64(4, RD(16) + RD(0));
SET32(16, RW(16) + 2564);
SET64(5, RD(0) + RD(0));
{ int t = RSD(6) > 0; SET64(7, (s32)rd32(c, (RW(16) + 88))); if (t) goto L_0028C3F0; }
SET64(6, (s32)rd32(c, (RW(2) + 12)));
L_0028C3F0:;
SET64(2, RSD(0) < RSD(6));
if (RD(2) == 0) SET64(6, RD(7));
SET64(3, RSD(6) < RSD(7));
SET64(16, RD(6) + RD(0));
SET64(31, 0x28c408); if (RD(3) == 0) SET64(16, RD(7)); JP_F_00288010(c);
SET64(2, RSD(2) < RSD(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_0028C420(Ctx *c) { /* func_0028C420 */
ENTER(0x28c420);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28c440); SET64(17, (s32)rd32(c, (RW(16) + 8052))); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028C490; }
SET64(31, 0x28c450); SET32(5, RW(0) + 80); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028C490; }
SET64(31, 0x28c460); SET32(5, RW(0) + 2); JP_F_00288010(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028C494; }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(2) != RD(0);  if (t) goto L_0028C494; }
SET64(31, 0x28c47c); SET32(5, RW(0) + 6); JP_F_0029A0E0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028C490; }
SET32(5, RW(0) + 6);
SET64(31, 0x28c490); SET64(6, RD(0) + RD(0)); JP_F_002977B8(c);
L_0028C490:;
SET64(4, RD(16) + RD(0));
L_0028C494:;
SET64(31, 0x28c49c); SET32(5, RW(0) + 5); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028C500; }
SET64(31, 0x28c4ac); SET32(5, RW(0) + 79); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028C500; }
SET64(31, 0x28c4bc); SET32(5, RW(0) + 1); JP_F_00288010(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028C504; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028C504; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x28c4dc); SET32(5, RW(0) + 7); JP_F_0029A0E0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028C500; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 5);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(6, RD(0) + RD(0));
SET32(29, RW(29) + 32); { JP_F_002977B8(c); return; }
L_0028C500:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028C504:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

