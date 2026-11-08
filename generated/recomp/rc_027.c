#include "r5900.h"
#include "functab.h"

void F_002BA870(Ctx *c) { /* func_002BA870 */
ENTER(0x2ba870);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + 28);
SET32(4, RW(4) + RW(25)); { F_0014DAD0(c); return; }
}

void F_002BA880(Ctx *c) { /* func_002BA880 */
ENTER(0x2ba880);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + 28);
SET32(4, RW(4) + RW(25)); { F_0014DB30(c); return; }
}

void F_002BA890(Ctx *c) { /* func_002BA890 */
ENTER(0x2ba890);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -68);
SET32(4, RW(4) + RW(25)); { F_002BA7B0(c); return; }
}

void F_002BA8A0(Ctx *c) { /* func_002BA8A0 */
ENTER(0x2ba8a0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -68);
SET32(4, RW(4) + RW(25)); { F_001C5A10(c); return; }
}

void F_002BA8B0(Ctx *c) { /* func_002BA8B0 */
ENTER(0x2ba8b0);
SET64(25, (s32)rd32(c, (RW(5) + 280)));
SET32(5, RW(5) + -464);
SET32(5, RW(5) + RW(25)); { F_002BA4F0(c); return; }
}

void F_002BA8C0(Ctx *c) { /* func_002BA8C0 */
ENTER(0x2ba8c0);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { F_002BA520(c); return; }
}

void F_002BA8D0(Ctx *c) { /* func_002BA8D0 */
ENTER(0x2ba8d0);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { F_001C5130(c); return; }
}

void F_002BA8E0(Ctx *c) { /* func_002BA8E0 */
ENTER(0x2ba8e0);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { F_002BA5B0(c); return; }
}

void F_002BA8F0(Ctx *c) { /* func_002BA8F0 */
ENTER(0x2ba8f0);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { F_002BA660(c); return; }
}

void F_002BA900(Ctx *c) { /* func_002BA900 */
ENTER(0x2ba900);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { F_002BA7B0(c); return; }
}

void F_002BA910(Ctx *c) { /* func_002BA910 */
ENTER(0x2ba910);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { F_001C5A10(c); return; }
}

void F_002BA920(Ctx *c) { /* func_002BA920 */
ENTER(0x2ba920);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -752);
SET32(4, RW(4) + RW(25)); { F_002BA550(c); return; }
}

void F_002BA930(Ctx *c) { /* func_002BA930 */
ENTER(0x2ba930);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -752);
SET32(4, RW(4) + RW(25)); { F_001C5A10(c); return; }
}

void F_002BA940(Ctx *c) { /* func_002BA940 */
ENTER(0x2ba940);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2ba950);  F_003235D0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BA960(Ctx *c) { /* func_002BA960 */
ENTER(0x2ba960);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 2372)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BA9C8; }
c->f[1].u = rd32(c, (RW(16) + 0));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(4, (s32)rd32(c, (RW(3) + 256))); goto L_002BA9B8; }
SET64(4, (s32)rd32(c, (RW(3) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ba9b0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(17) + RD(0)); goto L_002BA9CC;
L_002BA9B8:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ba9c8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
L_002BA9C8:;
SET64(4, RD(17) + RD(0));
L_002BA9CC:;
SET64(31, 0x2ba9d4); SET64(5, RD(16) + RD(0)); F_003235F0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BA9F0(Ctx *c) { /* func_002BA9F0 */
ENTER(0x2ba9f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2baa00);  F_00323690(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BAA10(Ctx *c) { /* func_002BAA10 */
ENTER(0x2baa10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2baa20);  F_003236F0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BAA30(Ctx *c) { /* func_002BAA30 */
ENTER(0x2baa30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2baa40);  F_003237C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) & 0xff);
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void F_002BAA60(Ctx *c) { /* func_002BAA60 */
ENTER(0x2baa60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2baa70);  F_003238D0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BAA80(Ctx *c) { /* func_002BAA80 */
ENTER(0x2baa80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2baa90);  F_00323930(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BAAA0(Ctx *c) { /* func_002BAAA0 */
ENTER(0x2baaa0);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(4, RD(5) + RD(0));
SET64(31, 0x2baab8); SET64(5, (s32)rd32(c, (RW(2) + 2372))); F_002B9E60(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BAAD0(Ctx *c) { /* func_002BAAD0 */
ENTER(0x2baad0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2baae4); SET64(16, RD(4) + RD(0)); F_00323AC0(c);
SET64(31, 0x2baaec); SET64(4, (s32)rd32(c, (RW(16) + 2464))); F_00100430(c);
wr32(c, (RW(16) + 2464), RW(0));
SET64(3, rd8(c, (RW(16) + 2369)));
if (RD(3) == RD(0)) { wr8(c, (RW(16) + 2368), (u8)RW(0)); goto L_002BAB24; }
SET64(4, (s32)rd32(c, (RW(16) + 2372)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 2372), RW(0)); goto L_002BAB1C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bab18); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 2372), RW(0));
L_002BAB1C:;
wr8(c, (RW(16) + 2369), (u8)RW(0));
wr8(c, (RW(16) + 2368), (u8)RW(0));
L_002BAB24:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BAB40(Ctx *c) { /* func_002BAB40 */
ENTER(0x2bab40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2bab5c); SET64(16, RD(0) + RD(0)); F_00323BB0(c);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(17) + 2370))); goto L_002BAB70; }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
SET64(2, rd8(c, (RW(17) + 2370)));
L_002BAB70:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(17) + 2368))); goto L_002BABB0; }
SET64(2, rd8(c, (RW(17) + 2440)));
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 2456))); goto L_002BAB8C; }
SET32(2, RW(0) + 1); goto L_002BAB98;
L_002BAB8C:;
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2bab98); SET32(4, RW(17) + 2440); rt_call(c, t); }
L_002BAB98:;
SET64(2, RD(2) & 0xff);
{ int t = RD(2) == RD(0);  if (t) goto L_002BABAC; }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
L_002BABAC:;
SET64(2, rd8(c, (RW(17) + 2368)));
L_002BABB0:;
if (RD(2) != RD(0)) { SET64(2, RD(16) & 0xffff); goto L_002BAC28; }
SET64(2, RD(16) & 0xffff);
{ int t = RD(2) != RD(0);  if (t) goto L_002BAC24; }
SET64(2, rd8(c, (RW(17) + 2369)));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_002BAC20; }
SET64(2, rd8(c, (RW(17) + 2370)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 2372))); goto L_002BAC0C; }
SET64(31, 0x2babe4); SET64(4, (s32)rd32(c, (RW(17) + 2464))); F_0013FED0(c);
SET64(4, (s32)rd32(c, (RW(17) + 2372)));
SET64(5, (s32)rd32(c, (RW(17) + 2464)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x2babfc); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, 0x2bac04); SET64(4, (s32)rd32(c, (RW(17) + 2464))); F_00100430(c);
wr32(c, (RW(17) + 2464), RW(0)); goto L_002BAC1C;
L_002BAC0C:;
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2bac1c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_002BAC1C:;
SET32(2, RW(0) + 1);
L_002BAC20:;
wr8(c, (RW(17) + 2368), (u8)RW(2));
L_002BAC24:;
SET64(2, RD(16) & 0xffff);
L_002BAC28:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(0) < RD(2));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BAC40(Ctx *c) { /* func_002BAC40 */
ENTER(0x2bac40);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
SET64(31, 0x2bac6c); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_00323C40(c);
SET64(3, rd8(c, (RW(19) + 2369)));
if (RD(3) == RD(0)) { wr8(c, (RW(19) + 2368), (u8)RW(0)); goto L_002BAD7C; }
SET64(31, 0x2bac80); SET32(4, RW(0) + 960); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002BAD34; }
SET32(4, RW(17) + 916);
SET32(16, RW(0) + 1);
SET64(31, 0x2bac98); wr32(c, (RW(17) + 256), RW(4)); F_00141AA0(c);
SET64(20, RD(0) + RD(0));
SET64(21, RD(17) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2bacac); SET64(5, RD(0) + RD(0)); F_00152580(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(10, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 7104);
SET64(9, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(3));
SET64(7, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(10, RW(10) + 7264);
SET64(5, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4d0000);
SET32(9, RW(9) + 7176);
wr32(c, (RW(3) + 16), RW(10));
SET32(7, RW(7) + 7208);
wr32(c, (RW(17) + 432), RW(9));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 760), RW(7));
SET32(8, RW(17) + 916);
SET64(9, (s32)rd32(c, (RW(17) + 256)));
SET32(5, RW(5) + 6896);
SET32(6, RW(6) + 7064);
SET32(4, RW(4) + 6968);
SET32(3, RW(3) + 7000);
SET32(7, RW(8) - RW(9));
wr32(c, (RW(9) + 20), RW(7));
wr32(c, (RW(17) + 912), RW(0));
wr32(c, (RW(17) + 276), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 256)));
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(17) + 432), RW(4));
wr32(c, (RW(17) + 760), RW(3));
SET64(4, (s32)rd32(c, (RW(17) + 256)));
SET32(3, RW(8) - RW(4));
wr32(c, (RW(4) + 20), RW(3));
L_002BAD34:;
SET64(3, RD(18) & 0xffff);
SET32(4, RW(3) << 2);
SET64(3, (s64)(s32)0x490000);
SET32(3, RW(3) + -1616);
SET32(3, RW(3) + RW(4));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(5) == RD(0); wr32(c, (RW(19) + 2372), RW(17)); if (t) goto L_002BAD70; }
SET32(4, RW(19) + 2376);
SET32(6, RW(19) + 2464);
SET64(31, 0x2bad64); SET32(7, RW(0) + 1); F_0015BB30(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(19) + 2370), (u8)RW(3)); goto L_002BAD78;
L_002BAD70:;
wr32(c, (RW(19) + 2464), RW(0));
wr8(c, (RW(19) + 2370), (u8)RW(0));
L_002BAD78:;
wr8(c, (RW(19) + 2368), (u8)RW(0));
L_002BAD7C:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002BADA0(Ctx *c) { /* func_002BADA0 */
ENTER(0x2bada0);
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 2369), (u8)RW(3)); return;
}

void F_002BADB0(Ctx *c) { /* func_002BADB0 */
ENTER(0x2badb0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_002BADF4; }
SET32(4, RW(18) + 2480);
SET32(2, RW(18) + 2544);
wr32(c, (RW(18) + 912), RW(4));
SET64(31, 0x2badec); wr32(c, (RW(18) + 256), RW(2)); F_002AC130(c);
SET64(31, 0x2badf4); SET32(4, RW(18) + 2544); F_00141AA0(c);
L_002BADF4:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2bae00); SET64(5, RD(0) + RD(0)); F_00323CE0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(8, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -17776);
SET64(6, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(7, (s32)rd32(c, (RW(18) + 256)));
SET32(8, RW(8) + -17576);
SET32(16, RW(18) + 2376);
SET32(6, RW(6) + -17704);
SET32(3, RW(3) + -17672);
SET32(2, RW(18) + 2544);
wr32(c, (RW(7) + 16), RW(8));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(18) + 432), RW(6));
SET32(5, RW(0) + 1536);
wr32(c, (RW(18) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(18) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
wr8(c, (RW(18) + 2368), (u8)RW(0));
wr8(c, (RW(18) + 2369), (u8)RW(0));
wr8(c, (RW(18) + 2370), (u8)RW(0));
SET64(31, 0x2bae64); wr32(c, (RW(18) + 2372), RW(0)); F_0013A040(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26384);
SET32(3, RW(3) + -26376);
wr32(c, (RW(16) + 56), RW(2));
SET32(4, RW(16) + 64);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -26364);
wr32(c, (RW(16) + 36), RW(2));
SET64(31, 0x2bae94); wr32(c, (RW(16) + 60), RW(0)); F_00157630(c);
wr8(c, (RW(16) + 84), (u8)RW(0));
SET64(2, RD(18) + RD(0));
wr32(c, (RW(18) + 2464), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002BAEC0(Ctx *c) { /* func_002BAEC0 */
ENTER(0x2baec0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2544);
SET32(4, RW(4) + RW(25)); { F_001E6EF0(c); return; }
}

void F_002BAED0(Ctx *c) { /* func_002BAED0 */
ENTER(0x2baed0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2544);
SET32(4, RW(4) + RW(25)); { F_002BAA30(c); return; }
}

void F_002BAEE0(Ctx *c) { /* func_002BAEE0 */
ENTER(0x2baee0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2544);
SET32(4, RW(4) + RW(25)); { F_002BAAD0(c); return; }
}

void F_002BAEF0(Ctx *c) { /* func_002BAEF0 */
ENTER(0x2baef0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2544);
SET32(4, RW(4) + RW(25)); { F_001E6D20(c); return; }
}

void F_002BAF00(Ctx *c) { /* func_002BAF00 */
ENTER(0x2baf00);
SET32(4, RW(4) + -288); { F_001E6D20(c); return; }
}

void F_002BAF10(Ctx *c) { /* func_002BAF10 */
ENTER(0x2baf10);
SET32(4, RW(4) + -704); { F_001E6D20(c); return; }
}

void F_002BAF20(Ctx *c) { /* func_002BAF20 */
ENTER(0x2baf20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2baf30); SET32(4, RW(4) + 812); F_002287B0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BAF40(Ctx *c) { /* func_002BAF40 */
ENTER(0x2baf40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2baf58); SET32(4, RW(0) + 8); F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 940), RW(2)); goto L_002BAF6C; }
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(16) + 940), RW(2));
L_002BAF6C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BAF80(Ctx *c) { /* func_002BAF80 */
ENTER(0x2baf80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2baf98); SET32(4, RW(16) + 812); F_002284B0(c);
SET64(31, 0x2bafa0); SET64(4, RD(16) + RD(0)); F_001434C0(c);
SET32(3, RW(0) + 4);
wr16(c, (RW(16) + 928), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BAFC0(Ctx *c) { /* func_002BAFC0 */
ENTER(0x2bafc0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2bafd8); SET32(4, RW(16) + 812); F_002284F0(c);
SET32(3, RW(0) + 2);
wr16(c, (RW(16) + 928), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BAFF0(Ctx *c) { /* func_002BAFF0 */
ENTER(0x2baff0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET32(4, RW(16) + 812);
SET64(31, 0x2bb010); wr32(c, (RW(29) + 0), c->f[20].u); F_002283C0(c);
SET64(3, rd8(c, (RW(16) + 944)));
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(16) + 928))); goto L_002BB028; }
SET64(31, 0x2bb024); SET64(4, RD(16) + RD(0)); F_00143530(c);
SET64(4, rd16(c, (RW(16) + 928)));
L_002BB028:;
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(16) + 916))); goto L_002BB03C; }
SET64(4, (s32)rd32(c, (RW(16) + 932))); goto L_002BB05C;
L_002BB03C:;
SET32(3, RW(0) + 3);
{ int t = RD(4) != RD(3);  if (t) goto L_002BB058; }
SET64(31, 0x2bb050); SET64(4, RD(16) + RD(0)); F_00143100(c);
SET32(3, RW(0) + 3);
wr16(c, (RW(16) + 928), (u16)RW(3));
L_002BB058:;
SET64(4, (s32)rd32(c, (RW(16) + 932)));
L_002BB05C:;
if (RD(4) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 940))); goto L_002BB0C4; }
SET64(2, rd8(c, (RW(16) + 505)));
SET64(2, RD(2) & 0x40);
SET64(2, RD(0) < RD(2));
if (RD(2) == RD(0)) { SET64(5, RD(0) + RD(0)); goto L_002BB0B8; }
SET64(2, rd8(c, (RW(16) + 936)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BB0B4; }
SET64(3, rd16(c, (RW(16) + 928)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002BB0B4; }
SET64(31, 0x2bb09c); SET32(5, RW(0) + 1); F_00145480(c);
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x2bb0ac); SET64(4, (s32)rd32(c, (RW(16) + 932))); F_00145350(c);
 goto L_002BB0C0;
L_002BB0B4:;
SET64(5, RD(0) + RD(0));
L_002BB0B8:;
SET64(31, 0x2bb0c0);  F_00145480(c);
L_002BB0C0:;
SET64(3, (s32)rd32(c, (RW(16) + 940)));
L_002BB0C4:;
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002BB14C; }
c->f[2].u = rd32(c, (RW(3) + 0));
SET64(2, (s64)(s32)0x40000000);
c->f[4].u = rd32(c, (RW(16) + 464));
SET32(4, RW(16) + 812);
c->f[1].u = RW(0);
c->f[0].u = rd32(c, (RW(3) + 4));
c->f[3].u = RW(2);
c->facc = fpu(F(1) + F(2));
c->f[21].f = fpu(c->facc - F(3) * F(4));
c->facc = fpu(F(1) + F(0));
c->f[0].u = rd32(c, (RW(16) + 456));
SET64(31, 0x2bb104); c->f[20].f = fpu(c->facc - F(3) * F(0)); F_002287B0(c);
c->f[2].u = rd32(c, (RW(2) + 8));
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = RW(0);
SET32(4, RW(16) + 16);
c->f[0].u = rd32(c, (RW(2) + 4));
SET32(5, RW(29) + 48);
c->f[2].f = fpu(F(2) + F(1));
c->f[1].f = fpu(F(0) + F(20));
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[0].f = fpu(F(0) + F(21));
wr32(c, (RW(29) + 60), RW(3));
wr32(c, (RW(29) + 52), c->f[1].u);
wr32(c, (RW(29) + 56), c->f[2].u);
SET64(31, 0x2bb140); wr32(c, (RW(29) + 48), c->f[0].u); F_0014E770(c);
SET64(31, 0x2bb148); SET32(4, RW(16) + 16); F_00145880(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_002BB14C:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 64); return;
}

void F_002BB160(Ctx *c) { /* func_002BB160 */
ENTER(0x2bb160);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2bb17c); SET64(16, RD(5) + RD(0)); F_00143470(c);
SET64(31, 0x2bb184); SET32(4, RW(17) + 812); F_00228540(c);
SET64(25, (s32)rd32(c, (RW(2) + 36)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x2bb198); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BB1B0(Ctx *c) { /* func_002BB1B0 */
ENTER(0x2bb1b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2bb1c8); SET32(4, RW(16) + 16); F_00146240(c);
if (RD(2) != RD(0)) { SET32(4, RW(16) + 812); goto L_002BB1D8; }
SET64(2, RD(0) + RD(0)); goto L_002BB210;
L_002BB1D8:;
SET64(31, 0x2bb1e0);  F_00228540(c);
SET64(25, (s32)rd32(c, (RW(2) + 36)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x2bb1f0); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 932))); goto L_002BB200; }
SET64(2, RD(0) + RD(0)); goto L_002BB210;
L_002BB200:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2bb210);  rt_call(c, t); }
L_002BB210:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BB220(Ctx *c) { /* func_002BB220 */
ENTER(0x2bb220);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2bb238); SET64(4, (s32)rd32(c, (RW(4) + 28))); F_001419B0(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET32(4, RW(16) + 812); goto L_002BB250; }
SET64(31, 0x2bb24c); SET64(4, RD(16) + RD(0)); F_001434C0(c);
SET32(4, RW(16) + 812);
L_002BB250:;
SET64(31, 0x2bb258);  F_00228540(c);
SET64(31, 0x2bb260); SET32(4, RW(2) + 48); F_001419B0(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 932))); goto L_002BB288; }
SET64(31, 0x2bb274); SET32(4, RW(16) + 812); F_00228540(c);
SET64(25, (s32)rd32(c, (RW(2) + 36)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x2bb284); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 932)));
L_002BB288:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2bb298);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002BB2B8; }
SET64(4, (s32)rd32(c, (RW(16) + 932)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2bb2b4);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
L_002BB2B8:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BB2D0(Ctx *c) { /* func_002BB2D0 */
ENTER(0x2bb2d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2bb2ec); SET64(16, RD(5) + RD(0)); F_001434F0(c);
SET64(31, 0x2bb2f4); SET32(4, RW(17) + 812); F_00228540(c);
SET64(25, (s32)rd32(c, (RW(2) + 36)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x2bb308); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
SET64(31, 0x2bb310);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 932))); goto L_002BB324; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 932)));
L_002BB324:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2bb334);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 932)));
SET64(31, 0x2bb340); SET64(5, RD(0) + RD(0)); F_00145480(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BB360(Ctx *c) { /* func_002BB360 */
ENTER(0x2bb360);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3dcc0000);
wr64(c, (RW(29) + 48), RD(31));
SET64(2, RD(2) | 0xcccd);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[0].u = RW(2);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET32(4, RW(17) + 812);
c->f[1].u = rd32(c, (RW(5) + 8));
SET64(25, (s32)rd32(c, (RW(17) + 868)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2bb3a4); c->f[20].f = fpu(F(0) + F(1)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(16) + 4));
SET64(25, (s32)rd32(c, (RW(17) + 868)));
c->f[0].u = rd32(c, (RW(2) + 4));
SET32(4, RW(17) + 812);
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2bb3c0); c->f[21].f = fpu(F(1) + F(0)); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(2) + 0));
SET32(4, RW(17) + 16);
c->f[1].u = rd32(c, (RW(16) + 0));
SET32(5, RW(29) + 64);
SET64(2, (s64)(s32)0x3f800000);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 64), c->f[0].u);
wr32(c, (RW(29) + 68), c->f[21].u);
SET64(31, 0x2bb3ec); wr32(c, (RW(29) + 72), c->f[20].u); F_0014E770(c);
SET32(4, RW(17) + 812);
SET64(31, 0x2bb3f8); SET64(5, RD(16) + RD(0)); F_00228800(c);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002BB420(Ctx *c) { /* func_002BB420 */
ENTER(0x2bb420);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(5, RD(7) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(10) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
SET64(18, RD(9) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(11) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET32(4, RW(21) + 812);
SET64(6, RD(8) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(31, 0x2bb47c); wr32(c, (RW(29) + 0), c->f[20].u); F_00228990(c);
SET32(4, RW(21) + 812);
SET64(31, 0x2bb488); SET64(5, RD(20) + RD(0)); F_00228800(c);
SET32(4, RW(21) + 812);
SET64(31, 0x2bb494); SET64(5, RD(19) + RD(0)); F_00228760(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2bb4a4); SET32(4, RW(21) + 812); F_002285F0(c);
SET64(31, 0x2bb4ac); SET32(4, RW(21) + 812); F_00228540(c);
SET64(25, (s32)rd32(c, (RW(2) + 36)));
SET64(4, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x2bb4c0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(21) + 868)));
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(21) + 812);
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x2bb4d8); SET32(5, RW(5) + 10080); rt_call(c, t); }
SET32(2, RW(0) + 16384);
{ int t = RD(16) == RD(0); wr16(c, (RW(21) + 774), (u16)RW(2)); if (t) goto L_002BB500; }
c->f[2].u = rd32(c, (RW(16) + 0));
c->f[0].u = rd32(c, (RW(16) + 4));
c->f[1].u = RW(0);
c->f[20].f = fpu(F(1) + F(2));
c->f[21].f = fpu(F(1) + F(0)); goto L_002BB560;
L_002BB500:;
SET64(25, (s32)rd32(c, (RW(21) + 868)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2bb510); SET32(4, RW(21) + 812); rt_call(c, t); }
c->f[3].u = rd32(c, (RW(2) + 0));
SET64(25, (s32)rd32(c, (RW(21) + 868)));
c->f[1].u = rd32(c, (RW(19) + 0));
SET32(4, RW(21) + 812);
c->f[0].u = RW(0);
SET64(2, (s64)(s32)0x40000000);
SET64(25, (s32)rd32(c, (RW(25) + 148)));
c->f[2].u = RW(2);
c->facc = fpu(F(0) + F(1));
c->f[1].f = fpu(c->facc - F(2) * F(3));
{ u32 t = RW(25); SET64(31, 0x2bb540); c->f[20].f = fpu(F(0) + F(1)); rt_call(c, t); }
c->f[3].u = rd32(c, (RW(2) + 4));
c->f[1].u = rd32(c, (RW(19) + 4));
c->f[0].u = RW(0);
SET64(2, (s64)(s32)0x40000000);
c->f[2].u = RW(2);
c->facc = fpu(F(0) + F(1));
c->f[1].f = fpu(c->facc - F(2) * F(3));
c->f[21].f = fpu(F(0) + F(1));
L_002BB560:;
SET64(2, (s64)(s32)0x3dcc0000);
SET64(25, (s32)rd32(c, (RW(21) + 868)));
SET64(2, RD(2) | 0xcccd);
SET32(4, RW(21) + 812);
c->f[1].u = rd32(c, (RW(20) + 8));
c->f[0].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2bb584); c->f[22].f = fpu(F(0) + F(1)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(20) + 4));
SET64(25, (s32)rd32(c, (RW(21) + 868)));
c->f[0].u = rd32(c, (RW(2) + 4));
SET32(4, RW(21) + 812);
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2bb5a0); c->f[23].f = fpu(F(1) + F(0)); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(2) + 0));
SET64(7, RD(18) + RD(0));
c->f[1].u = rd32(c, (RW(20) + 0));
SET64(4, RD(21) + RD(0));
wr32(c, (RW(29) + 180), c->f[23].u);
SET32(5, RW(29) + 160);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 160), RW(0));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 188), RW(2));
wr32(c, (RW(29) + 172), RW(2));
SET32(6, RW(29) + 144);
wr32(c, (RW(29) + 164), RW(0));
SET64(8, RD(17) + RD(0));
wr32(c, (RW(29) + 168), RW(0));
wr32(c, (RW(29) + 184), c->f[22].u);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 176), c->f[0].u);
wr32(c, (RW(29) + 148), RW(0));
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 152), c->f[20].u);
wr32(c, (RW(29) + 156), c->f[21].u);
SET64(31, 0x2bb600); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); F_00144D20(c);
SET32(2, RW(0) + 1);
SET32(4, RW(0) + 480);
SET64(31, 0x2bb610); wr16(c, (RW(21) + 928), (u16)RW(2)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BB624; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bb624); SET32(5, RW(0) + 1); F_001457B0(c);
L_002BB624:;
wr32(c, (RW(21) + 932), RW(16));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(20) + 8));
wr32(c, (RW(29) + 140), RW(2));
c->f[0].u = RW(2);
SET64(2, (s64)(s32)0x42400000);
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 136), c->f[0].u);
c->f[4].u = rd32(c, (RW(20) + 4));
c->f[3].u = rd32(c, (RW(19) + 4));
c->f[1].u = rd32(c, (RW(20) + 0));
c->f[0].u = rd32(c, (RW(19) + 0));
c->f[3].f = fpu(F(4) + F(3));
c->f[0].f = fpu(F(1) + F(0));
c->f[2].u = RW(2);
c->f[1].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(0) - F(2));
wr32(c, (RW(29) + 132), c->f[1].u);
SET64(31, 0x2bb678); wr32(c, (RW(29) + 128), c->f[0].u); F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2bb684); SET32(5, RW(0) + 4); F_0022AC70(c);
SET64(4, (s32)rd32(c, (RW(21) + 932)));
SET64(5, RD(2) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(31, 0x2bb698); SET32(6, RW(29) + 128); F_001454D0(c);
SET64(4, (s32)rd32(c, (RW(21) + 932)));
SET64(31, 0x2bb6a4); SET32(5, RW(0) + 1); F_00145480(c);
SET64(31, rd64(c, (RW(29) + 112)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 192); return;
}

void F_002BB6E0(Ctx *c) { /* func_002BB6E0 */
ENTER(0x2bb6e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BB82C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -17536);
SET64(10, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 768), RW(3));
SET32(2, RW(2) + -17528);
wr32(c, (RW(17) + 24), RW(2));
SET64(9, (s64)(s32)0x4e0000);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET32(10, RW(10) + -17152);
SET64(8, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(2) + 16), RW(10));
SET32(9, RW(9) + -17480);
SET32(8, RW(8) + -17460);
wr32(c, (RW(17) + 232), RW(9));
SET32(7, RW(7) + -17344);
wr32(c, (RW(17) + 236), RW(8));
SET32(6, RW(6) + -17336);
wr32(c, (RW(17) + 868), RW(7));
SET64(3, (s64)(s32)0x4e0000);
SET32(5, RW(5) + -17324);
wr32(c, (RW(17) + 832), RW(6));
SET32(3, RW(3) + -17264);
wr32(c, (RW(17) + 848), RW(5));
SET32(2, RW(17) + 948);
wr32(c, (RW(17) + 884), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 28)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x2bb78c);  rt_call(c, t); }
SET32(4, RW(17) + 812);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002BB7DC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -29104);
SET32(2, RW(2) + -29096);
wr32(c, (RW(17) + 868), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 832), RW(2));
SET32(3, RW(3) + -29084);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -29024);
wr32(c, (RW(17) + 848), RW(3));
SET64(31, 0x2bb7cc); wr32(c, (RW(17) + 884), RW(2)); F_00228DA0(c);
SET32(4, RW(17) + 812);
SET64(31, 0x2bb7d8); SET64(5, RD(0) + RD(0)); F_00228FC0(c);
SET64(4, RD(17) + RD(0));
L_002BB7DC:;
SET64(31, 0x2bb7e4); SET64(5, RD(0) + RD(0)); F_00143130(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_002BB818; }
SET32(4, RW(17) + 948);
{ int t = RD(4) == RD(0);  if (t) goto L_002BB814; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 964), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2bb814);  rt_call(c, t); }
L_002BB814:;
SET64(2, RD(16) << 48);
L_002BB818:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BB830; }
SET64(31, 0x2bb82c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002BB82C:;
SET64(2, RD(17) + RD(0));
L_002BB830:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BB850(Ctx *c) { /* func_002BB850 */
ENTER(0x2bb850);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2bb864); SET64(16, RD(4) + RD(0)); F_001433D0(c);
SET64(31, 0x2bb86c); SET32(4, RW(16) + 812); F_00228DA0(c);
wr16(c, (RW(16) + 928), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 932)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 932), RW(0)); goto L_002BB890; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bb88c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 932), RW(0));
L_002BB890:;
SET64(31, 0x2bb898); SET64(4, (s32)rd32(c, (RW(16) + 940))); F_001004B0(c);
wr32(c, (RW(16) + 940), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BB8B0(Ctx *c) { /* func_002BB8B0 */
ENTER(0x2bb8b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002BB8E0; }
SET32(4, RW(16) + 948);
SET64(31, 0x2bb8e0); wr32(c, (RW(16) + 28), RW(4)); F_00141AA0(c);
L_002BB8E0:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bb8ec); SET64(5, RD(0) + RD(0)); F_00143280(c);
SET64(31, 0x2bb8f4); SET32(4, RW(16) + 812); F_00228E20(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -17536);
SET64(9, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 768), RW(3));
SET32(2, RW(2) + -17528);
wr32(c, (RW(16) + 24), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET32(9, RW(9) + -17152);
SET64(2, (s64)(s32)0x4e0000);
SET64(8, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 16), RW(9));
SET32(3, RW(3) + -17480);
wr32(c, (RW(16) + 232), RW(3));
SET32(2, RW(2) + -17460);
wr32(c, (RW(16) + 236), RW(2));
SET32(8, RW(8) + -17344);
SET32(7, RW(7) + -17336);
wr32(c, (RW(16) + 868), RW(8));
SET64(5, (s64)(s32)0x4e0000);
SET32(6, RW(6) + -17324);
wr32(c, (RW(16) + 832), RW(7));
SET32(5, RW(5) + -17264);
wr32(c, (RW(16) + 848), RW(6));
SET32(4, RW(16) + 948);
wr32(c, (RW(16) + 884), RW(5));
SET32(3, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(16) + 28)));
SET64(2, RD(16) + RD(0));
SET32(4, RW(4) - RW(5));
wr32(c, (RW(5) + 20), RW(4));
wr16(c, (RW(16) + 928), (u16)RW(0));
wr32(c, (RW(16) + 932), RW(0));
wr8(c, (RW(16) + 936), (u8)RW(3));
wr32(c, (RW(16) + 940), RW(0));
wr8(c, (RW(16) + 944), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BB9B0(Ctx *c) { /* func_002BB9B0 */
ENTER(0x2bb9b0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -948);
SET32(4, RW(4) + RW(25)); { F_002BB160(c); return; }
}

void F_002BB9C0(Ctx *c) { /* func_002BB9C0 */
ENTER(0x2bb9c0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -948);
SET32(4, RW(4) + RW(25)); { F_002BB1B0(c); return; }
}

void F_002BB9D0(Ctx *c) { /* func_002BB9D0 */
ENTER(0x2bb9d0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -948);
SET32(4, RW(4) + RW(25)); { F_002BB220(c); return; }
}

void F_002BB9E0(Ctx *c) { /* func_002BB9E0 */
ENTER(0x2bb9e0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -932);
SET32(4, RW(4) + RW(25)); { F_0014DB30(c); return; }
}

void F_002BB9F0(Ctx *c) { /* func_002BB9F0 */
ENTER(0x2bb9f0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -948);
SET32(4, RW(4) + RW(25)); { F_002BB850(c); return; }
}

void F_002BBA00(Ctx *c) { /* func_002BBA00 */
ENTER(0x2bba00);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -948);
SET32(4, RW(4) + RW(25)); { F_002BB6E0(c); return; }
}

void F_002BBA10(Ctx *c) { /* func_002BBA10 */
ENTER(0x2bba10);
SET32(4, RW(4) + -224); { F_002BB6E0(c); return; }
}

void F_002BBA20(Ctx *c) { /* func_002BBA20 */
ENTER(0x2bba20);
SET32(4, RW(4) + -16); { F_002BB160(c); return; }
}

void F_002BBA30(Ctx *c) { /* func_002BBA30 */
ENTER(0x2bba30);
SET32(4, RW(4) + -16); { F_002BB1B0(c); return; }
}

void F_002BBA40(Ctx *c) { /* func_002BBA40 */
ENTER(0x2bba40);
SET32(4, RW(4) + -16); { F_002BB220(c); return; }
}

void F_002BBA50(Ctx *c) { /* func_002BBA50 */
ENTER(0x2bba50);
SET32(4, RW(4) + -16); { F_002BB2D0(c); return; }
}

void F_002BBA60(Ctx *c) { /* func_002BBA60 */
ENTER(0x2bba60);
SET32(4, RW(4) + -16); { F_002BB850(c); return; }
}

void F_002BBA70(Ctx *c) { /* func_002BBA70 */
ENTER(0x2bba70);
SET32(4, RW(4) + -16); { F_002BB6E0(c); return; }
}

void F_002BBA80(Ctx *c) { /* func_002BBA80 */
ENTER(0x2bba80);
SET32(4, RW(4) + -816); { F_002BB6E0(c); return; }
}

void F_002BBA90(Ctx *c) { /* func_002BBA90 */
ENTER(0x2bba90);
SET32(4, RW(4) + -836); { F_002BB6E0(c); return; }
}

void F_002BBAA0(Ctx *c) { /* func_002BBAA0 */
ENTER(0x2bbaa0);
SET32(4, RW(4) + -872); { F_002BB6E0(c); return; }
}

void F_002BBAB0(Ctx *c) { /* func_002BBAB0 */
ENTER(0x2bbab0);
SET32(4, RW(4) + -812); { F_002BB360(c); return; }
}

void F_002BBAC0(Ctx *c) { /* func_002BBAC0 */
ENTER(0x2bbac0);
SET32(4, RW(4) + -812); { F_002BAF20(c); return; }
}

void F_002BBAD0(Ctx *c) { /* func_002BBAD0 */
ENTER(0x2bbad0);
SET32(4, RW(4) + -812); { F_002BB160(c); return; }
}

void F_002BBAE0(Ctx *c) { /* func_002BBAE0 */
ENTER(0x2bbae0);
SET32(4, RW(4) + -812); { F_002BB1B0(c); return; }
}

void F_002BBAF0(Ctx *c) { /* func_002BBAF0 */
ENTER(0x2bbaf0);
SET32(4, RW(4) + -812); { F_002BB220(c); return; }
}

void F_002BBB00(Ctx *c) { /* func_002BBB00 */
ENTER(0x2bbb00);
SET32(4, RW(4) + -812); { F_002BB2D0(c); return; }
}

void F_002BBB10(Ctx *c) { /* func_002BBB10 */
ENTER(0x2bbb10);
SET32(4, RW(4) + -812); { F_002BB6E0(c); return; }
}

void F_002BBB20(Ctx *c) { /* func_002BBB20 */
ENTER(0x2bbb20);
SET32(4, RW(4) + -812); { F_002BAFF0(c); return; }
}

void F_002BBB30(Ctx *c) { /* func_002BBB30 */
ENTER(0x2bbb30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BBC58; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -17104);
SET32(2, RW(2) + -17080);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x2bbb74);  rt_call(c, t); }
SET32(4, RW(17) + 352);
{ int t = RD(4) == RD(0);  if (t) goto L_002BBBC4; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16976);
SET32(3, RW(3) + -16956);
wr32(c, (RW(17) + 360), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 456), RW(3));
SET32(2, RW(2) + -16936);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 512), RW(2));
SET32(3, RW(3) + -16872);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 672), RW(3));
SET32(2, RW(2) + -16840);
SET64(31, 0x2bbbc4); wr32(c, (RW(17) + 848), RW(2)); F_002049E0(c);
L_002BBBC4:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002BBC44; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -10288);
SET32(2, RW(2) + -10264);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x2bbbf4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 160);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002BBC38; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2bbc1c);  rt_call(c, t); }
SET32(2, RW(17) + 160);
{ int t = RD(2) == RD(0);  if (t) goto L_002BBC34; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30016);
wr32(c, (RW(17) + 172), RW(2));
L_002BBC34:;
SET64(4, RD(17) + RD(0));
L_002BBC38:;
SET64(31, 0x2bbc40); SET64(5, RD(0) + RD(0)); F_002409D0(c);
SET64(2, RD(16) << 48);
L_002BBC44:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BBC5C; }
SET64(31, 0x2bbc58); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002BBC58:;
SET64(2, RD(17) + RD(0));
L_002BBC5C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BBC70(Ctx *c) { /* func_002BBC70 */
ENTER(0x2bbc70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2bbc84); SET64(16, RD(4) + RD(0)); F_001B56D0(c);
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2bbc94); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BBCB0(Ctx *c) { /* func_002BBCB0 */
ENTER(0x2bbcb0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2bbcc4); SET64(16, RD(4) + RD(0)); F_001B5750(c);
SET64(2, (s64)(s32)0x3c800000);
SET64(3, (s64)(s32)0x3efc0000);
wr32(c, (RW(29) + 32), RW(2));
SET32(4, RW(16) + 352);
SET64(2, (s64)(s32)0x3f7c0000);
wr32(c, (RW(29) + 36), RW(3));
wr32(c, (RW(29) + 40), RW(2));
SET64(3, (s64)(s32)0x3c000000);
SET64(2, (s64)(s32)0x41700000);
wr32(c, (RW(29) + 44), RW(3));
c->f[12].u = RW(2);
SET64(3, (s64)(s32)0x40800000);
SET64(2, (s64)(s32)0x3f800000);
SET32(5, RW(0) + 64);
c->f[13].u = RW(3);
c->f[14].u = RW(2);
SET64(3, (s64)(s32)0x42f00000);
SET64(2, (s64)(s32)0x42700000);
c->f[15].u = RW(3);
c->f[16].u = RW(2);
SET64(31, 0x2bbd1c); SET32(6, RW(29) + 32); F_00222680(c);
SET32(4, RW(16) + 352);
SET64(31, 0x2bbd28); SET32(5, RW(0) + 40); F_001EA620(c);
SET64(31, 0x2bbd30); SET32(4, RW(16) + 448); F_001EA540(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bbd3c); SET32(5, RW(16) + 352); F_001B50F0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BBD50(Ctx *c) { /* func_002BBD50 */
ENTER(0x2bbd50);
SET32(29, RW(29) + -336);
wr64(c, (RW(29) + 112), RD(31));
wr32(c, (RW(29) + 156), c->f[12].u);
wr128(c, (RW(29) + 96) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 44), c->f[31].u);
wr32(c, (RW(29) + 40), c->f[30].u);
wr32(c, (RW(29) + 36), c->f[29].u);
wr32(c, (RW(29) + 32), c->f[28].u);
wr32(c, (RW(29) + 28), c->f[27].u);
wr32(c, (RW(29) + 24), c->f[26].u);
wr32(c, (RW(29) + 20), c->f[25].u);
wr32(c, (RW(29) + 16), c->f[24].u);
wr32(c, (RW(29) + 12), c->f[23].u);
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, rd8(c, (RW(4) + 636)));
{ int t = RD(2) == RD(0); SET64(19, RD(4) + RD(0)); if (t) goto L_002BC230; }
c->f[1].u = rd32(c, (RW(19) + 640));
c->f[0].u = c->f[12].u;
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(19) + 640), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(28) + -30368)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BBDCC; }
rd128(c, (RW(2) + 800) & ~15u, &c->r[2]); goto L_002BBDE0;
L_002BBDCC:;
SET64(31, 0x2bbdd4);  F_00139590(c);
SET64(31, 0x2bbddc);  F_00150670(c);
rd128(c, (RW(2) + 800) & ~15u, &c->r[2]);
L_002BBDE0:;
wr128(c, (RW(29) + 320) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(28) + -30368)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BBDF8; }
rd128(c, (RW(2) + 816) & ~15u, &c->r[2]); goto L_002BBE0C;
L_002BBDF8:;
SET64(31, 0x2bbe00);  F_00139590(c);
SET64(31, 0x2bbe08);  F_00150670(c);
rd128(c, (RW(2) + 816) & ~15u, &c->r[2]);
L_002BBE0C:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 224), RW(0));
c->f[0].u = rd32(c, (RW(29) + 320));
wr32(c, (RW(29) + 228), RW(0));
c->f[2].u = rd32(c, (RW(29) + 324));
wr32(c, (RW(29) + 232), RW(0));
SET32(4, RW(29) + 160);
wr32(c, (RW(29) + 236), RW(3));
wr128(c, (RW(29) + 224) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(29) + 224));
wr32(c, (RW(29) + 252), RW(3));
c->f[3].u = rd32(c, (RW(29) + 228));
wr32(c, (RW(29) + 172), RW(3));
wr32(c, (RW(29) + 160), RW(0));
c->f[4].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 164), RW(0));
wr32(c, (RW(29) + 168), RW(0));
c->f[1].u = rd32(c, (RW(29) + 232));
c->f[0].u = rd32(c, (RW(29) + 328));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 240), c->f[4].u);
wr32(c, (RW(29) + 244), c->f[2].u);
wr32(c, (RW(29) + 248), c->f[0].u);
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
SET64(31, 0x2bbe78); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); F_002AD410(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 256), RW(0));
wr32(c, (RW(29) + 268), RW(2));
SET32(4, RW(29) + 272);
SET64(2, (s64)(s32)0x42480000);
wr32(c, (RW(29) + 260), RW(0));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 264), RW(0));
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
SET32(5, RW(29) + 256);
SET64(31, 0x2bbea8); wr128(c, (RW(29) + 256) & ~15u, &c->r[2]); F_002ACFD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 304), RW(0));
wr32(c, (RW(29) + 316), RW(2));
c->f[1].u = rd32(c, (RW(19) + 640));
c->f[0].u = rd32(c, (RW(19) + 644));
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 308), RW(0));
c->f[4].u = rd32(c, (RW(29) + 320));
wr32(c, (RW(29) + 312), RW(0));
c->f[3].u = rd32(c, (RW(29) + 324));
c->fcc = F(1) < F(0);
wr128(c, (RW(29) + 304) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 304));
c->f[2].u = rd32(c, (RW(29) + 308));
c->f[1].u = rd32(c, (RW(29) + 328));
c->f[4].f = fpu(F(4) + F(0));
c->f[0].u = rd32(c, (RW(29) + 312));
c->f[2].f = fpu(F(3) + F(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 320), c->f[4].u);
wr32(c, (RW(29) + 324), c->f[2].u);
{ int t = c->fcc; wr32(c, (RW(29) + 328), c->f[0].u); if (t) goto L_002BC230; }
c->f[25].u = rd32(c, (RW(19) + 680));
L_002BBF08:;
SET64(31, 0x2bbf10); c->f[31].u = c->f[25].u ^ 0x80000000u; F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BBF24; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BBF3C;
L_002BBF24:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BBF3C:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
c->f[24].u = rd32(c, (RW(19) + 676));
wr32(c, (RW(29) + 152), c->f[0].u);
SET64(31, 0x2bbf5c); c->f[30].u = c->f[24].u ^ 0x80000000u; F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BBF70; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BBF88;
L_002BBF70:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BBF88:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
c->f[23].u = rd32(c, (RW(19) + 672));
wr32(c, (RW(29) + 148), c->f[0].u);
SET64(31, 0x2bbfa8); c->f[29].u = c->f[23].u ^ 0x80000000u; F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BBFBC; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BBFD4;
L_002BBFBC:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BBFD4:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
c->f[22].u = rd32(c, (RW(19) + 696));
wr32(c, (RW(29) + 144), c->f[0].u);
SET64(31, 0x2bbff4); c->f[28].u = c->f[22].u ^ 0x80000000u; F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BC008; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BC020;
L_002BC008:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BC020:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
c->f[21].u = rd32(c, (RW(19) + 692));
wr32(c, (RW(29) + 140), c->f[0].u);
SET64(31, 0x2bc040); c->f[27].u = c->f[21].u ^ 0x80000000u; F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BC054; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BC06C;
L_002BC054:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BC06C:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
c->f[20].u = rd32(c, (RW(19) + 688));
wr32(c, (RW(29) + 136), c->f[0].u);
SET64(31, 0x2bc08c); c->f[26].u = c->f[20].u ^ 0x80000000u; F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BC0A0; }
c->f[0].u = RW(2);
c->f[2].f = (f32)(s32)c->f[0].u; goto L_002BC0B8;
L_002BC0A0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[2].f = fpu(F(2) + F(2));
L_002BC0B8:;
SET64(3, (s64)(s32)0x4f800000);
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(3);
wr32(c, (RW(29) + 300), RW(2));
c->f[10].f = fpu_div(F(2), F(1));
wr32(c, (RW(29) + 220), RW(2));
c->f[9].u = RW(0);
c->f[0].f = fpu(F(20) - F(26));
c->facc = fpu(F(9) + F(26));
c->f[0].f = fpu(c->facc + F(0) * F(10));
wr32(c, (RW(29) + 288), c->f[0].u);
c->f[8].f = fpu(F(21) - F(27));
c->f[0].u = rd32(c, (RW(29) + 136));
c->facc = fpu(F(9) + F(27));
c->f[7].f = fpu(F(22) - F(28));
c->f[0].f = fpu(c->facc + F(8) * F(0));
wr32(c, (RW(29) + 292), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 140));
c->facc = fpu(F(9) + F(28));
c->f[6].f = fpu(F(23) - F(29));
c->f[0].f = fpu(c->facc + F(7) * F(0));
wr32(c, (RW(29) + 296), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 144));
c->facc = fpu(F(9) + F(29));
c->f[5].u = rd32(c, (RW(29) + 320));
c->f[0].f = fpu(c->facc + F(6) * F(0));
c->f[4].f = fpu(F(24) - F(30));
c->f[0].f = fpu(F(5) + F(0));
wr32(c, (RW(29) + 208), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 148));
c->facc = fpu(F(9) + F(30));
c->f[3].u = rd32(c, (RW(29) + 324));
c->f[0].f = fpu(c->facc + F(4) * F(0));
c->f[2].f = fpu(F(25) - F(31));
c->f[3].f = fpu(F(3) + F(0));
c->f[0].u = rd32(c, (RW(29) + 152));
c->facc = fpu(F(9) + F(31));
c->f[1].u = rd32(c, (RW(29) + 328));
c->f[0].f = fpu(c->facc + F(2) * F(0));
wr32(c, (RW(29) + 212), c->f[3].u);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 216), c->f[0].u);
c->f[21].u = rd32(c, (RW(19) + 656));
SET64(31, 0x2bc16c); c->f[20].u = rd32(c, (RW(19) + 660)); F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BC180; }
c->f[0].u = RW(2);
c->f[2].f = (f32)(s32)c->f[0].u; goto L_002BC198;
L_002BC180:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[2].f = fpu(F(2) + F(2));
L_002BC198:;
SET64(3, (s64)(s32)0x4f800000);
SET64(4, rd16(c, (RW(19) + 634)));
c->f[0].u = RW(3);
SET64(2, (s32)rd32(c, (RW(19) + 624)));
c->f[2].f = fpu_div(F(2), F(0));
SET32(5, RW(29) + 208);
SET32(3, RW(4) << 2);
SET32(6, RW(29) + 288);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET32(4, RW(2) + RW(3));
c->f[0].u = RW(0);
c->f[1].f = fpu(F(20) - F(21));
c->facc = fpu(F(0) + F(21));
SET64(31, 0x2bc1d8); c->f[12].f = fpu(c->facc + F(1) * F(2)); F_001D1460(c);
SET64(2, rd16(c, (RW(19) + 634)));
SET32(2, RW(2) + 1);
wr16(c, (RW(19) + 634), (u16)RW(2));
SET64(3, rd16(c, (RW(19) + 634)));
SET64(2, rd16(c, (RW(19) + 632)));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_002BC210; }
wr16(c, (RW(19) + 634), (u16)RW(0));
SET64(2, rd8(c, (RW(19) + 648)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BC210; }
wr8(c, (RW(19) + 636), (u8)RW(0));
wr32(c, (RW(19) + 640), RW(0));
L_002BC210:;
c->f[1].u = rd32(c, (RW(19) + 644));
c->f[0].u = rd32(c, (RW(19) + 640));
c->f[1].f = fpu(F(0) - F(1));
wr32(c, (RW(19) + 640), c->f[1].u);
c->f[0].u = rd32(c, (RW(19) + 644));
c->fcc = F(1) < F(0);
if (!c->fcc) { c->f[25].u = rd32(c, (RW(19) + 680)); { POLL(); goto L_002BBF08; } }
L_002BC230:;
SET64(3, rd8(c, (RW(19) + 636)));
SET64(2, rd16(c, (RW(19) + 632)));
SET64(17, RD(0) + RD(0));
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
{ int t = RSD(2) <= 0; SET64(18, RD(3) & 0xff); if (t) goto L_002BC308; }
SET64(16, RD(0) + RD(0));
L_002BC250:;
c->f[12].u = rd32(c, (RW(29) + 156));
SET32(4, RW(29) + 176);
SET64(31, 0x2bc260); SET32(5, RW(19) + 704); F_002ACFD0(c);
SET64(2, (s64)(s32)0x3f800000);
rd128(c, (RW(29) + 176) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 204), RW(2));
c->f[12].u = rd32(c, (RW(29) + 156));
SET64(2, (s32)rd32(c, (RW(19) + 624)));
wr32(c, (RW(29) + 192), RW(0));
wr32(c, (RW(29) + 196), RW(0));
wr32(c, (RW(29) + 200), RW(0));
SET32(2, RW(2) + RW(16));
wr128(c, (RW(29) + 192) & ~15u, &c->r[3]);
c->f[3].u = rd32(c, (RW(2) + 0));
c->f[2].u = rd32(c, (RW(29) + 192));
c->f[1].u = rd32(c, (RW(29) + 196));
c->f[0].u = rd32(c, (RW(29) + 200));
c->f[2].f = fpu(F(3) + F(2));
wr32(c, (RW(2) + 0), c->f[2].u);
c->f[2].u = rd32(c, (RW(2) + 4));
c->f[1].f = fpu(F(2) + F(1));
wr32(c, (RW(2) + 4), c->f[1].u);
c->f[1].u = rd32(c, (RW(2) + 8));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(2) + 8), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 624)));
SET64(5, (s32)rd32(c, (RW(19) + 628)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bc2d4); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 624)));
SET32(2, RW(2) + RW(16));
SET64(2, rd8(c, (RW(2) + 60)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BC2F0; }
SET64(18, RD(0) + RD(0));
L_002BC2F0:;
SET64(2, rd16(c, (RW(19) + 632)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 80); if (t) { POLL(); goto L_002BC250; } }
L_002BC308:;
SET64(2, RD(18) + RD(0));
SET64(31, rd64(c, (RW(29) + 112)));
c->f[31].u = rd32(c, (RW(29) + 44));
rd128(c, (RW(29) + 96) & ~15u, &c->r[19]);
c->f[30].u = rd32(c, (RW(29) + 40));
rd128(c, (RW(29) + 80) & ~15u, &c->r[18]);
c->f[29].u = rd32(c, (RW(29) + 36));
rd128(c, (RW(29) + 64) & ~15u, &c->r[17]);
c->f[28].u = rd32(c, (RW(29) + 32));
rd128(c, (RW(29) + 48) & ~15u, &c->r[16]);
c->f[27].u = rd32(c, (RW(29) + 28));
c->f[26].u = rd32(c, (RW(29) + 24));
c->f[25].u = rd32(c, (RW(29) + 20));
c->f[24].u = rd32(c, (RW(29) + 16));
c->f[23].u = rd32(c, (RW(29) + 12));
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 336); return;
}

void F_002BC360(Ctx *c) { /* func_002BC360 */
ENTER(0x2bc360);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bc370); SET64(6, RD(0) + RD(0)); F_001D07B0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BC380(Ctx *c) { /* func_002BC380 */
ENTER(0x2bc380);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bc390);  F_001D1860(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BC3A0(Ctx *c) { /* func_002BC3A0 */
ENTER(0x2bc3a0);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(6);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
c->f[0].f = (f32)(s32)c->f[0].u;
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s64)(s32)0x42480000);
wr32(c, (RW(29) + 60), RW(2));
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 76), RW(2));
SET64(5, RD(6) + RD(0));
SET64(2, (s64)(s32)0x43800000);
wr32(c, (RW(29) + 64), RW(3));
wr32(c, (RW(29) + 68), RW(3));
SET64(17, RD(4) + RD(0));
c->f[1].u = RW(2);
wr32(c, (RW(29) + 72), RW(3));
c->f[15].u = c->f[12].u;
SET64(3, (s64)(s32)0x43200000);
c->f[12].f = fpu_div(F(1), F(0));
SET64(2, (s64)(s32)0x43480000);
wr32(c, (RW(29) + 48), RW(0));
SET32(6, RW(0) + 4);
wr32(c, (RW(29) + 52), RW(0));
SET64(7, RD(0) + RD(0));
wr32(c, (RW(29) + 56), RW(0));
SET32(8, RW(29) + 64);
SET32(9, RW(29) + 48);
c->f[16].u = RW(0);
c->f[13].u = RW(3);
c->f[14].u = RW(2);
SET64(31, 0x2bc42c);  F_001D0870(c);
SET64(31, 0x2bc434); SET32(4, RW(17) + 96); F_001EA540(c);
SET64(31, 0x2bc43c); SET64(4, RD(17) + RD(0)); F_001EA6C0(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 704) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002BC460(Ctx *c) { /* func_002BC460 */
ENTER(0x2bc460);
SET32(29, RW(29) + -672);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002BC764; }
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(2, (s64)(s32)0x44160000);
c->f[1].u = RW(2);
c->f[2].f = fpu(F(0) + F(12));
c->fcc = F(2) < F(1);
{ int t = !c->fcc; wr32(c, (RW(16) + 4), c->f[2].u); if (t) goto L_002BC4A8; }
c->f[20].u = RW(0);
 goto L_002BC6E0;
L_002BC4A8:;
SET64(2, (s64)(s32)0x44340000);
c->f[0].u = RW(2);
c->fcc = F(2) < F(0);
{ int t = !c->fcc;  if (t) goto L_002BC5E0; }
c->f[1].f = fpu(F(2) - F(1));
SET64(2, (s64)(s32)0x42f00000);
SET32(4, RW(29) + 384);
SET32(5, RW(16) + 144);
SET32(6, RW(16) + 160);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x2bc4f0);  F_001475E0(c);
SET32(4, RW(29) + 400);
SET64(31, 0x2bc4fc); SET32(5, RW(29) + 384); F_00147860(c);
SET32(4, RW(29) + 176);
SET32(5, RW(16) + 16);
SET64(31, 0x2bc50c); SET32(6, RW(29) + 400); F_002ABB90(c);
SET64(31, 0x2bc514); SET32(4, RW(29) + 464); F_002AC130(c);
rd128(c, (RW(29) + 176) & ~15u, &c->r[7]);
SET32(5, RW(29) + 464);
rd128(c, (RW(29) + 192) & ~15u, &c->r[3]);
SET32(4, RW(29) + 112);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
SET32(6, RW(16) + 176);
wr128(c, (RW(29) + 464) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 480) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 496) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
SET64(31, 0x2bc544); wr128(c, (RW(29) + 512) & ~15u, &c->r[2]); F_002ABB90(c);
SET64(31, 0x2bc54c); SET32(4, RW(29) + 528); F_002AC130(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[7]);
SET32(5, RW(29) + 528);
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
SET32(4, RW(29) + 240);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET32(6, RW(16) + 80);
wr128(c, (RW(29) + 528) & ~15u, &c->r[7]);
wr128(c, (RW(29) + 544) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 560) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
SET64(31, 0x2bc57c); wr128(c, (RW(29) + 576) & ~15u, &c->r[2]); F_002ABB90(c);
SET64(31, 0x2bc584); SET32(4, RW(29) + 592); F_002AC130(c);
rd128(c, (RW(29) + 240) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 256) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 592) & ~15u, &c->r[4]);
wr128(c, (RW(29) + 608) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 624) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 288) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 640) & ~15u, &c->r[2]);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
rd128(c, (RW(29) + 592) & ~15u, &c->r[2]);
SET32(4, RW(3) + 288);
wr128(c, (RW(3) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 608) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 624) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 640) & ~15u, &c->r[2]);
SET64(31, 0x2bc5d0); wr128(c, (RW(3) + 336) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[20].u = RW(2);
 goto L_002BC6E0;
L_002BC5E0:;
c->f[20].u = RW(0);
SET64(31, 0x2bc5ec);  F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BC600; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BC618;
L_002BC600:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BC618:;
SET64(3, (s64)(s32)0x4f800000);
SET64(2, (s64)(s32)0x43960000);
c->f[0].u = RW(3);
c->f[2].f = fpu_div(F(1), F(0));
c->f[0].u = RW(0);
c->f[1].u = RW(2);
c->facc = fpu(F(0) + F(0));
c->f[0].f = fpu(c->facc + F(1) * F(2));
SET64(31, 0x2bc648); wr32(c, (RW(16) + 4), c->f[0].u); F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BC65C; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BC674;
L_002BC65C:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BC674:;
SET64(2, (s64)(s32)0x4f800000);
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
SET32(4, RW(29) + 48);
c->f[3].f = fpu_div(F(1), F(0));
SET64(2, (s64)(s32)0xbf000000);
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->f[2].u = RW(3);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(3));
SET64(31, 0x2bc6a8); wr32(c, (RW(29) + 668), c->f[0].u); F_0013AEA0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x2bc6b4); SET32(5, RW(29) + 668); F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2bc6c0); SET32(4, RW(29) + 320); F_0013ADA0(c);
rd128(c, (RW(29) + 320) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 176) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 192) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 224) & ~15u, &c->r[2]);
L_002BC6E0:;
SET64(31, 0x2bc6e8);  F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BC6FC; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BC714;
L_002BC6FC:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BC714:;
SET64(3, (s64)(s32)0x4f800000);
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
wr32(c, (RW(29) + 304), RW(2));
c->f[2].f = fpu_div(F(1), F(0));
wr32(c, (RW(29) + 308), RW(2));
wr32(c, (RW(29) + 312), RW(2));
SET64(2, (s64)(s32)0x3f000000);
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(1) * F(2));
c->f[0].f = fpu(F(20) * F(0));
wr32(c, (RW(29) + 316), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2bc764); SET32(5, RW(29) + 304); rt_call(c, t); }
L_002BC764:;
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 672); return;
}

void F_002BC780(Ctx *c) { /* func_002BC780 */
ENTER(0x2bc780);
SET32(29, RW(29) + -752);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
wr32(c, (RW(29) + 76), c->f[12].u);
SET64(16, RD(8) + RD(0));
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(4) + 4), RW(0));
rd128(c, (RW(6) + 48) & ~15u, &c->r[2]);
SET32(4, RW(18) + 16);
SET64(31, 0x2bc7bc); wr128(c, (RW(29) + 720) & ~15u, &c->r[2]); F_002AC130(c);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0xbf800000);
wr32(c, (RW(29) + 656), RW(0));
c->f[1].u = rd32(c, (RW(29) + 720));
wr32(c, (RW(29) + 660), RW(2));
c->f[0].u = rd32(c, (RW(29) + 728));
wr32(c, (RW(29) + 664), RW(0));
SET32(4, RW(18) + 16);
wr32(c, (RW(29) + 668), RW(3));
SET32(5, RW(29) + 336);
rd128(c, (RW(18) + 64) & ~15u, &c->r[2]);
SET32(6, RW(29) + 320);
wr32(c, (RW(29) + 352), RW(0));
SET32(7, RW(29) + 656);
wr32(c, (RW(29) + 356), RW(0));
wr32(c, (RW(29) + 360), RW(0));
wr32(c, (RW(29) + 320), c->f[1].u);
wr32(c, (RW(29) + 364), RW(3));
wr32(c, (RW(29) + 328), c->f[0].u);
wr128(c, (RW(29) + 352) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(29) + 352));
wr32(c, (RW(29) + 332), RW(3));
c->f[0].u = rd32(c, (RW(29) + 360));
wr32(c, (RW(29) + 348), RW(3));
wr32(c, (RW(29) + 324), RW(0));
wr32(c, (RW(29) + 336), c->f[1].u);
wr32(c, (RW(29) + 340), RW(0));
SET64(31, 0x2bc830); wr32(c, (RW(29) + 344), c->f[0].u); F_00147BE0(c);
c->f[0].u = rd32(c, (RW(29) + 356));
SET32(4, RW(18) + 16);
SET64(31, 0x2bc840); wr32(c, (RW(18) + 68), c->f[0].u); F_002ABA40(c);
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0x3e990000);
wr32(c, (RW(29) + 588), RW(2));
SET32(4, RW(29) + 208);
SET64(2, RD(3) | 0x999a);
wr32(c, (RW(29) + 576), RW(2));
wr32(c, (RW(29) + 580), RW(2));
SET64(31, 0x2bc864); wr32(c, (RW(29) + 584), RW(2)); F_0013AEA0(c);
SET32(4, RW(29) + 208);
SET64(31, 0x2bc870); SET32(5, RW(29) + 576); F_00180BE0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2bc87c); SET32(4, RW(29) + 592); F_0013ADA0(c);
SET32(4, RW(18) + 16);
SET32(6, RW(29) + 592);
SET64(31, 0x2bc88c); SET64(5, RD(4) + RD(0)); F_00106578(c);
SET64(31, 0x2bc894); SET32(4, RW(29) + 144); F_0013AEA0(c);
SET32(4, RW(29) + 144);
SET64(31, 0x2bc8a0); SET32(5, RW(29) + 76); F_0013AD00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2bc8ac); SET32(4, RW(29) + 512); F_0013ADA0(c);
SET32(4, RW(18) + 16);
SET32(6, RW(29) + 512);
SET64(31, 0x2bc8bc); SET64(5, RD(4) + RD(0)); F_00106578(c);
c->f[3].u = rd32(c, (RW(16) + 8));
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = rd32(c, (RW(17) + 8));
SET32(4, RW(29) + 272);
c->f[1].u = rd32(c, (RW(16) + 4));
c->f[0].u = rd32(c, (RW(17) + 4));
c->f[3].f = fpu(F(3) - F(2));
c->f[2].f = fpu(F(1) - F(0));
c->f[1].u = rd32(c, (RW(16) + 0));
c->f[0].u = rd32(c, (RW(17) + 0));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 284), RW(2));
wr32(c, (RW(29) + 276), c->f[2].u);
wr32(c, (RW(29) + 280), c->f[3].u);
SET64(31, 0x2bc8fc); wr32(c, (RW(29) + 272), c->f[0].u); F_002AD340(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 496), RW(0));
wr32(c, (RW(29) + 504), c->f[0].u);
wr32(c, (RW(29) + 508), RW(2));
wr32(c, (RW(29) + 500), RW(0));
SET64(6, RD(17) + RD(0));
rd128(c, (RW(29) + 496) & ~15u, &c->r[2]);
SET32(4, RW(29) + 736);
SET64(5, RD(16) + RD(0));
SET64(31, 0x2bc928); wr128(c, (RW(18) + 64) & ~15u, &c->r[2]); F_001481D0(c);
SET32(4, RW(29) + 736);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bc93c);  rt_call(c, t); }
wr32(c, (RW(29) + 748), c->f[0].u);
SET64(31, 0x2bc948); SET32(4, RW(29) + 80); F_0013AEA0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2bc954); SET32(5, RW(29) + 748); F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2bc960); SET32(4, RW(29) + 432); F_0013ADA0(c);
rd128(c, (RW(29) + 432) & ~15u, &c->r[4]);
SET64(2, (s64)(s32)0x44c80000);
wr32(c, (RW(29) + 416), RW(2));
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0xc4a30000);
wr32(c, (RW(29) + 428), RW(3));
wr128(c, (RW(18) + 80) & ~15u, &c->r[4]);
SET64(2, RD(2) | 0xc000);
rd128(c, (RW(29) + 448) & ~15u, &c->r[5]);
SET32(4, RW(29) + 304);
wr32(c, (RW(29) + 420), RW(2));
SET64(2, (s64)(s32)0x44990000);
wr128(c, (RW(18) + 96) & ~15u, &c->r[5]);
SET64(2, RD(2) | 0xc000);
rd128(c, (RW(29) + 464) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 424), RW(2));
rd128(c, (RW(29) + 416) & ~15u, &c->r[2]);
wr128(c, (RW(18) + 112) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 480) & ~15u, &c->r[5]);
wr128(c, (RW(18) + 128) & ~15u, &c->r[5]);
rd128(c, (RW(16) + 0) & ~15u, &c->r[5]);
wr128(c, (RW(18) + 128) & ~15u, &c->r[5]);
wr32(c, (RW(29) + 316), RW(3));
wr32(c, (RW(29) + 304), RW(0));
wr32(c, (RW(29) + 308), RW(0));
wr32(c, (RW(29) + 312), RW(0));
wr32(c, (RW(29) + 712), RW(3));
wr32(c, (RW(29) + 716), RW(3));
wr128(c, (RW(29) + 304) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 704), RW(0));
SET64(31, 0x2bc9e0); wr32(c, (RW(29) + 708), RW(0)); F_002AD410(c);
SET64(2, (s64)(s32)0xc4480000);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 400), RW(2));
SET32(4, RW(29) + 288);
SET64(2, (s64)(s32)0x44990000);
wr32(c, (RW(29) + 700), RW(3));
SET64(2, RD(2) | 0xc000);
wr32(c, (RW(29) + 404), RW(0));
wr32(c, (RW(29) + 408), RW(2));
wr32(c, (RW(29) + 412), RW(3));
wr32(c, (RW(29) + 300), RW(3));
rd128(c, (RW(29) + 304) & ~15u, &c->r[3]);
rd128(c, (RW(29) + 400) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 688), RW(0));
wr32(c, (RW(29) + 692), RW(0));
wr32(c, (RW(29) + 696), RW(0));
wr32(c, (RW(29) + 288), RW(0));
wr32(c, (RW(29) + 292), RW(0));
wr32(c, (RW(29) + 296), RW(0));
wr128(c, (RW(29) + 688) & ~15u, &c->r[3]);
SET64(31, 0x2bca38); wr128(c, (RW(29) + 288) & ~15u, &c->r[2]); F_002AD410(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 672), RW(0));
wr32(c, (RW(29) + 684), RW(2));
SET32(4, RW(29) + 384);
rd128(c, (RW(29) + 288) & ~15u, &c->r[2]);
SET32(5, RW(29) + 704);
wr32(c, (RW(29) + 676), RW(0));
SET32(6, RW(29) + 688);
wr32(c, (RW(29) + 680), RW(0));
SET64(31, 0x2bca64); wr128(c, (RW(29) + 672) & ~15u, &c->r[2]); F_00147530(c);
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET32(4, RW(29) + 368);
SET32(5, RW(29) + 704);
SET32(6, RW(29) + 672);
SET64(31, 0x2bca7c); wr128(c, (RW(18) + 144) & ~15u, &c->r[2]); F_00147530(c);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
SET32(4, RW(18) + 176);
SET64(31, 0x2bca8c); wr128(c, (RW(18) + 160) & ~15u, &c->r[2]); F_002AC130(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 752); return;
}

void F_002BCAB0(Ctx *c) { /* func_002BCAB0 */
ENTER(0x2bcab0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET32(4, RW(29) + 48);
SET64(31, 0x2bcad4); SET64(5, RD(6) + RD(0)); F_001CA290(c);
SET64(2, (s32)rd32(c, (RW(17) + 624)));
SET64(5, RD(16) + RD(0));
SET32(6, RW(29) + 48);
SET64(31, 0x2bcae8); SET32(4, RW(2) + 112); F_002B8BB0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002BCB00(Ctx *c) { /* func_002BCB00 */
ENTER(0x2bcb00);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x40000000);
wr64(c, (RW(29) + 32), RD(31));
c->f[0].u = RW(2);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
c->f[1].u = rd32(c, (RW(4) + 628));
c->f[1].f = fpu(F(1) + F(12));
c->fcc = F(1) < F(0);
{ int t = c->fcc; wr32(c, (RW(4) + 628), c->f[1].u); if (t) goto L_002BCBC8; }
SET64(2, rd16(c, (RW(17) + 632)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002BCB90; }
L_002BCB3C:;
SET64(31, 0x2bcb44);  F_00194460(c);
SET64(7, rd8(c, (RW(17) + 641)));
SET64(5, RD(16) + RD(0));
SET64(4, rd8(c, (RW(17) + 640)));
SET32(6, RW(29) + 60);
SET64(3, (s32)rd32(c, (RW(17) + 636)));
div_u(c, 0, RW(2), RW(7));
wr32(c, (RW(29) + 60), RW(3));
SET64(2, c->hi.d[0]);
SET32(2, RW(4) + RW(2));
wr8(c, (RW(29) + 63), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 624)));
SET64(31, 0x2bcb7c); SET32(4, RW(2) + 112); F_002B8A90(c);
SET64(2, rd16(c, (RW(17) + 632)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002BCB3C; } }
L_002BCB90:;
SET64(2, (s64)(s32)0x40000000);
c->f[0].u = rd32(c, (RW(17) + 628));
c->f[1].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_002BCBC8; }
L_002BCBAC:;
c->f[0].u = rd32(c, (RW(17) + 628));
c->f[0].f = fpu(F(0) - F(1));
c->fcc = F(0) <= F(1);
wr32(c, (RW(17) + 628), c->f[0].u);
{ int t = !c->fcc;  if (t) { POLL(); goto L_002BCBAC; } }
L_002BCBC8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002BCBE0(Ctx *c) { /* func_002BCBE0 */
ENTER(0x2bcbe0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bcbf0); wr32(c, (RW(4) + 628), RW(0)); F_001EBCF0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BCC00(Ctx *c) { /* func_002BCC00 */
ENTER(0x2bcc00);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
wr32(c, (RW(4) + 628), RW(0));
SET64(2, rd16(c, (RW(4) + 632)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002BCC88; }
SET32(2, RW(0) + 128);
L_002BCC38:;
wr8(c, (RW(29) + 95), (u8)RW(0));
wr8(c, (RW(29) + 92), (u8)RW(2));
SET64(5, RD(16) + RD(0));
wr8(c, (RW(29) + 93), (u8)RW(2));
SET32(6, RW(29) + 92);
wr8(c, (RW(29) + 94), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 624)));
SET64(31, 0x2bcc5c); SET32(4, RW(2) + 112); F_002B8A90(c);
SET64(2, (s32)rd32(c, (RW(19) + 624)));
SET64(5, RD(16) + RD(0));
SET32(6, RW(28) + -31432);
SET64(31, 0x2bcc70); SET32(4, RW(2) + 112); F_002B8730(c);
SET64(2, rd16(c, (RW(19) + 632)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET32(2, RW(0) + 128); { POLL(); goto L_002BCC38; } }
L_002BCC88:;
SET64(4, RD(19) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2bcc98); SET64(6, RD(17) + RD(0)); F_001EBD20(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002BCCC0(Ctx *c) { /* func_002BCCC0 */
ENTER(0x2bccc0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 624)));
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002BCD00; }
SET64(31, 0x2bcce0); SET64(4, (s32)rd32(c, (RW(16) + 616))); F_002A27A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 624)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 624), RW(0)); goto L_002BCD00; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2bccfc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 624), RW(0));
L_002BCD00:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bcd0c); wr16(c, (RW(16) + 632), (u16)RW(0)); F_001EBF50(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BCD20(Ctx *c) { /* func_002BCD20 */
ENTER(0x2bcd20);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(9) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(8) + RD(0));
SET64(31, 0x2bcd64); c->f[20].u = c->f[12].u; F_001EBF90(c);
wr16(c, (RW(20) + 632), (u16)RW(19));
SET64(3, RD(21) & 0xff);
SET64(2, RD(16) & 0xff);
wr8(c, (RW(20) + 640), (u8)RW(16));
SET32(2, RW(3) - RW(2));
SET32(4, RW(0) + 144);
wr8(c, (RW(20) + 641), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2bcd8c); wr32(c, (RW(20) + 636), RW(2)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BCDA0; }
SET64(5, rd16(c, (RW(20) + 632)));
SET64(31, 0x2bcda0); SET64(4, RD(16) + RD(0)); F_002B84E0(c);
L_002BCDA0:;
wr32(c, (RW(20) + 624), RW(16));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2bcdb8); SET32(5, RW(0) + 88); rt_call(c, t); }
SET64(2, rd16(c, (RW(20) + 632)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002BCE58; }
SET64(2, (s32)rd32(c, (RW(20) + 624)));
L_002BCDC8:;
SET64(5, RD(16) + RD(0));
SET32(6, RW(29) + 144);
SET64(31, 0x2bcdd8); SET32(4, RW(2) + 112); F_002B8BB0(c);
SET32(2, RW(0) + 128);
wr8(c, (RW(29) + 159), (u8)RW(0));
wr8(c, (RW(29) + 156), (u8)RW(2));
SET64(5, RD(16) + RD(0));
wr8(c, (RW(29) + 157), (u8)RW(2));
SET32(6, RW(29) + 156);
wr8(c, (RW(29) + 158), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(20) + 624)));
SET64(31, 0x2bce00); SET32(4, RW(2) + 112); F_002B8A90(c);
wr32(c, (RW(29) + 136), c->f[20].u);
SET64(5, RD(16) + RD(0));
wr32(c, (RW(29) + 140), c->f[20].u);
SET32(6, RW(29) + 136);
SET64(2, (s32)rd32(c, (RW(20) + 624)));
SET64(31, 0x2bce1c); SET32(4, RW(2) + 112); F_002B88F0(c);
SET64(2, (s32)rd32(c, (RW(20) + 624)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2bce30); SET32(4, RW(2) + 112); F_002B8820(c);
SET64(2, (s32)rd32(c, (RW(20) + 624)));
SET64(5, RD(16) + RD(0));
SET32(6, RW(28) + -31436);
SET64(31, 0x2bce44); SET32(4, RW(2) + 112); F_002B8730(c);
SET64(2, rd16(c, (RW(20) + 632)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 624))); { POLL(); goto L_002BCDC8; } }
L_002BCE58:;
SET64(5, (s32)rd32(c, (RW(20) + 624)));
SET64(31, 0x2bce64); SET64(4, (s32)rd32(c, (RW(20) + 616))); F_002A27F0(c);
SET64(31, rd64(c, (RW(29) + 112)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void F_002BCE90(Ctx *c) { /* func_002BCE90 */
ENTER(0x2bce90);
SET32(29, RW(29) + -16);
c->f[0].u = rd32(c, (RW(4) + 68));
c->f[0].f = fpu(F(0) + F(12));
wr32(c, (RW(4) + 68), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 72));
c->f[0].u = rd32(c, (RW(4) + 68));
c->fcc = F(0) < F(1);
if (c->fcc) { c->f[1].u = rd32(c, (RW(4) + 68)); goto L_002BCEC0; }
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(4) + 68), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 68));
L_002BCEC0:;
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = rd32(c, (RW(4) + 72));
wr32(c, (RW(29) + 0), RW(0));
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 12), RW(3));
c->f[0].f = fpu_div(F(1), F(0));
wr32(c, (RW(29) + 4), c->f[0].u);
rd128(c, (RW(29) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 48) & ~15u, &c->r[3]);
SET32(29, RW(29) + 16); return;
}

void F_002BCEF0(Ctx *c) { /* func_002BCEF0 */
ENTER(0x2bcef0);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 64), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(2, (s8)rd8(c, (RW(28) + -30440)));
{ int t = RD(2) != RD(0); c->f[20].u = c->f[12].u; if (t) goto L_002BCF70; }
wr32(c, (RW(29) + 0), RW(0));
c->f[13].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 16), RW(2));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 24), RW(0));
SET64(4, (s64)(s32)0x410000);
wr32(c, (RW(29) + 32), RW(0));
SET32(4, RW(4) + 21376);
wr32(c, (RW(29) + 40), RW(0));
c->f[14].u = c->f[13].u;
wr32(c, (RW(29) + 48), RW(0));
c->f[15].u = c->f[13].u;
c->f[16].u = c->f[13].u;
wr32(c, (RW(29) + 56), RW(2));
c->f[17].u = c->f[12].u;
c->f[18].u = c->f[13].u;
SET64(31, 0x2bcf68); c->f[19].u = c->f[13].u; F_002AC180(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30440), (u8)RW(2));
L_002BCF70:;
SET64(31, 0x2bcf78); SET32(4, RW(29) + 128); F_002AC130(c);
SET64(7, (s64)(s32)0x410000);
SET64(4, RD(16) + RD(0));
SET32(7, RW(7) + 21376);
SET64(5, RD(17) + RD(0));
rd128(c, (RW(7) + 0) & ~15u, &c->r[6]);
rd128(c, (RW(7) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(7) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
rd128(c, (RW(7) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET64(31, 0x2bcfb0); wr32(c, (RW(17) + 64), RW(16)); F_00152B60(c);
wr32(c, (RW(17) + 68), RW(0));
wr32(c, (RW(17) + 72), c->f[20].u);
SET64(31, rd64(c, (RW(29) + 112)));
c->f[20].u = rd32(c, (RW(29) + 64));
rd128(c, (RW(29) + 96) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[16]);
SET32(29, RW(29) + 192); return;
}

void F_002BCFD0(Ctx *c) { /* func_002BCFD0 */
ENTER(0x2bcfd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BD088; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16976);
SET32(3, RW(3) + -16956);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + -16936);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + -16872);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + -16840);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 496), RW(2)); if (t) goto L_002BD070; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 9024);
SET32(3, RW(3) + 9044);
wr32(c, (RW(17) + 8), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + 9064);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + 9128);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + 9160);
SET64(31, 0x2bd070); wr32(c, (RW(17) + 496), RW(2)); F_001C8FD0(c);
L_002BD070:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BD08C; }
SET64(31, 0x2bd088); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002BD088:;
SET64(2, RD(17) + RD(0));
L_002BD08C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BD0A0(Ctx *c) { /* func_002BD0A0 */
ENTER(0x2bd0a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BD170; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16784);
SET32(3, RW(3) + -16764);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + -16744);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + -16680);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + -16648);
wr32(c, (RW(17) + 496), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2bd108);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002BD15C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -5984);
SET32(3, RW(3) + -5964);
wr32(c, (RW(17) + 8), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + -5944);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + -5880);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + -5848);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2bd158); wr32(c, (RW(17) + 496), RW(2)); F_00186260(c);
SET64(2, RD(16) << 48);
L_002BD15C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BD174; }
SET64(31, 0x2bd170); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002BD170:;
SET64(2, RD(17) + RD(0));
L_002BD174:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BD190(Ctx *c) { /* func_002BD190 */
ENTER(0x2bd190);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BD32C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16592);
SET32(3, RW(3) + -16572);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + -16552);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + -16488);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + -16456);
wr32(c, (RW(17) + 496), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2bd1f8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002BD318; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4832);
SET32(3, RW(3) + 4852);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + 4872);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + 4936);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + 4968);
wr32(c, (RW(17) + 496), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2bd24c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 544);
SET64(31, 0x2bd258); SET32(5, RW(0) + -1); F_002B27C0(c);
SET32(4, RW(17) + 496);
SET64(31, 0x2bd264); SET64(5, RD(0) + RD(0)); F_002A28D0(c);
SET32(4, RW(17) + 176);
SET64(31, 0x2bd270); SET64(5, RD(0) + RD(0)); F_002B7AC0(c);
{ int t = RD(17) == RD(0);  if (t) goto L_002BD314; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -19936);
SET32(3, RW(3) + -19916);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + -19896);
wr32(c, (RW(17) + 160), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2bd2ac); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 144);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 96); goto L_002BD2D8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 160), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2bd2d4);  rt_call(c, t); }
SET32(4, RW(17) + 96);
L_002BD2D8:;
{ int t = RD(4) == RD(0);  if (t) goto L_002BD2F4; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -26448);
SET64(31, 0x2bd2f4); wr32(c, (RW(17) + 104), RW(2)); F_002B13D0(c);
L_002BD2F4:;
{ int t = RD(17) == RD(0);  if (t) goto L_002BD314; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + -26416);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2bd314); wr32(c, (RW(17) + 8), RW(2)); F_002B1020(c);
L_002BD314:;
SET64(2, RD(16) << 48);
L_002BD318:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BD330; }
SET64(31, 0x2bd32c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002BD32C:;
SET64(2, RD(17) + RD(0));
L_002BD330:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BD350(Ctx *c) { /* func_002BD350 */
ENTER(0x2bd350);
SET32(29, RW(29) + -416);
wr64(c, (RW(29) + 96), RD(31));
c->f[2].u = RW(0);
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
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
c->f[0].u = rd32(c, (RW(4) + 632));
c->fcc = F(0) < F(2);
{ int t = !c->fcc; c->f[21].u = c->f[12].u; if (t) goto L_002BD41C; }
wr32(c, (RW(19) + 632), c->f[2].u);
SET32(4, RW(29) + 272);
SET64(2, (s32)rd32(c, (RW(19) + 680)));
SET64(31, 0x2bd3b4); SET32(16, RW(2) + 64); F_002AC130(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
SET32(5, RW(29) + 272);
SET32(4, RW(29) + 128);
wr128(c, (RW(29) + 272) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2bd3e0); wr128(c, (RW(29) + 320) & ~15u, &c->r[2]); F_001DFB00(c);
SET32(4, RW(29) + 336);
SET64(31, 0x2bd3ec); SET32(5, RW(29) + 128); F_001DFA10(c);
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
SET32(4, RW(19) + 176);
wr128(c, (RW(19) + 176) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr128(c, (RW(19) + 192) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr128(c, (RW(19) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(31, 0x2bd414); wr128(c, (RW(19) + 224) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(2, RD(0) + RD(0)); goto L_002BD74C;
L_002BD41C:;
c->f[0].f = fpu(F(0) + F(21));
wr32(c, (RW(19) + 632), c->f[0].u);
c->f[0].u = rd32(c, (RW(19) + 676));
c->f[0].f = fpu(F(0) + F(21));
wr32(c, (RW(19) + 676), c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 672));
c->fcc = F(1) <= F(2);
if (c->fcc) { SET64(2, (s32)rd32(c, (RW(19) + 680))); goto L_002BD458; }
c->f[0].u = rd32(c, (RW(19) + 676));
c->fcc = F(0) < F(1);
{ int t = c->fcc;  if (t) goto L_002BD454; }
wr8(c, (RW(19) + 656), (u8)RW(0));
L_002BD454:;
SET64(2, (s32)rd32(c, (RW(19) + 680)));
L_002BD458:;
SET32(4, RW(29) + 144);
SET64(31, 0x2bd464); SET32(16, RW(2) + 64); F_002AC130(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
SET32(5, RW(29) + 144);
SET32(4, RW(29) + 112);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2bd490); wr128(c, (RW(29) + 192) & ~15u, &c->r[2]); F_001DFB00(c);
SET32(4, RW(29) + 208);
SET64(31, 0x2bd49c); SET32(5, RW(29) + 112); F_001DFA10(c);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
SET32(4, RW(19) + 176);
wr128(c, (RW(19) + 176) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
wr128(c, (RW(19) + 192) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(19) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
SET64(31, 0x2bd4c4); wr128(c, (RW(19) + 224) & ~15u, &c->r[2]); F_002A1E20(c);
c->f[1].u = rd32(c, (RW(19) + 644));
SET64(3, rd8(c, (RW(19) + 656)));
c->f[0].u = rd32(c, (RW(19) + 640));
SET64(2, rd16(c, (RW(19) + 652)));
SET64(17, RD(0) + RD(0));
SET64(3, RD(0) < RD(3));
c->f[20].f = fpu(F(1) * F(0));
SET64(3, RD(3) ^ 0x1);
{ int t = RSD(2) <= 0; SET64(18, RD(3) & 0xff); if (t) goto L_002BD718; }
SET64(16, RD(0) + RD(0));
L_002BD4F0:;
SET64(2, (s32)rd32(c, (RW(19) + 624)));
c->f[12].u = c->f[21].u;
SET64(5, (s32)rd32(c, (RW(19) + 628)));
SET64(6, RD(17) + RD(0));
c->f[13].u = c->f[20].u;
SET64(31, 0x2bd50c); SET32(4, RW(2) + RW(16)); F_001C9F10(c);
SET64(2, (s32)rd32(c, (RW(19) + 624)));
SET32(2, RW(2) + RW(16));
SET64(2, rd8(c, (RW(2) + 36)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BD528; }
SET64(18, RD(0) + RD(0));
L_002BD528:;
SET64(2, rd16(c, (RW(19) + 652)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 48); if (t) { POLL(); goto L_002BD4F0; } }
 goto L_002BD718;
L_002BD544:;
SET64(31, 0x2bd54c); c->f[26].u = c->f[21].u ^ 0x80000000u; F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BD560; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BD578;
L_002BD560:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BD578:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[23].f = fpu_div(F(1), F(0));
c->f[20].u = rd32(c, (RW(19) + 640));
SET64(31, 0x2bd598); c->f[25].u = c->f[20].u ^ 0x80000000u; F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BD5AC; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BD5C4;
L_002BD5AC:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BD5C4:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[22].f = fpu_div(F(1), F(0));
c->f[27].u = rd32(c, (RW(19) + 640));
SET64(31, 0x2bd5e4); c->f[24].u = c->f[27].u ^ 0x80000000u; F_00194460(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BD5F8; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BD610;
L_002BD5F8:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BD610:;
SET64(4, (s64)(s32)0x4f800000);
SET64(3, (s64)(s32)0x40000000);
c->f[0].u = RW(4);
SET64(2, (s64)(s32)0x3f800000);
c->f[5].f = fpu_div(F(1), F(0));
wr32(c, (RW(29) + 412), RW(2));
SET32(5, RW(29) + 400);
c->f[2].u = RW(0);
c->f[4].f = fpu(F(27) - F(24));
c->facc = fpu(F(2) + F(24));
c->f[4].f = fpu(c->facc + F(4) * F(5));
c->f[1].f = fpu(F(20) - F(25));
c->facc = fpu(F(2) + F(25));
c->f[1].f = fpu(c->facc + F(1) * F(22));
c->f[3].u = RW(3);
c->facc = fpu(F(2) + F(26));
c->f[0].f = fpu(F(21) - F(26));
c->f[0].f = fpu(c->facc + F(0) * F(23));
c->f[2].f = fpu_div(F(4), F(3));
c->f[1].f = fpu_div(F(1), F(3));
c->f[0].f = fpu_div(F(0), F(3));
wr32(c, (RW(29) + 400), c->f[2].u);
wr32(c, (RW(29) + 404), c->f[1].u);
wr32(c, (RW(29) + 408), c->f[0].u);
SET64(4, rd16(c, (RW(19) + 654)));
c->f[12].u = rd32(c, (RW(19) + 632));
SET64(2, (s32)rd32(c, (RW(19) + 624)));
c->f[13].u = rd32(c, (RW(19) + 648));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET64(31, 0x2bd698); SET32(4, RW(2) + RW(3)); F_001CA1E0(c);
c->f[1].u = rd32(c, (RW(19) + 636));
c->f[0].u = rd32(c, (RW(19) + 632));
c->f[12].f = fpu(F(0) - F(1));
wr32(c, (RW(19) + 632), c->f[12].u);
c->f[0].u = rd32(c, (RW(19) + 636));
c->fcc = F(12) < F(0);
{ int t = c->fcc;  if (t) goto L_002BD6E8; }
c->f[1].u = rd32(c, (RW(19) + 644));
SET64(6, rd16(c, (RW(19) + 654)));
c->f[0].u = rd32(c, (RW(19) + 640));
SET64(2, (s32)rd32(c, (RW(19) + 624)));
SET64(5, (s32)rd32(c, (RW(19) + 628)));
SET32(3, RW(6) << 1);
c->f[13].f = fpu(F(1) * F(0));
SET32(3, RW(3) + RW(6));
SET32(3, RW(3) << 4);
SET64(31, 0x2bd6e4); SET32(4, RW(2) + RW(3)); F_001C9F10(c);
L_002BD6E8:;
SET64(2, rd16(c, (RW(19) + 654)));
SET32(2, RW(2) + 1);
wr16(c, (RW(19) + 654), (u16)RW(2));
SET64(3, rd16(c, (RW(19) + 654)));
SET64(2, rd16(c, (RW(19) + 652)));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_002BD710; }
wr16(c, (RW(19) + 654), (u16)RW(0));
L_002BD710:;
SET64(18, RD(0) + RD(0));
L_002BD718:;
c->f[1].u = rd32(c, (RW(19) + 632));
c->f[0].u = rd32(c, (RW(19) + 636));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; SET32(2, RW(0) + 1); if (t) goto L_002BD730; }
SET64(2, RD(0) + RD(0));
L_002BD730:;
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002BD748; }
SET64(2, rd8(c, (RW(19) + 656)));
if (RD(2) != RD(0)) { c->f[21].u = rd32(c, (RW(19) + 640)); { POLL(); goto L_002BD544; } }
L_002BD748:;
SET64(2, RD(18) + RD(0));
L_002BD74C:;
SET64(31, rd64(c, (RW(29) + 96)));
c->f[27].u = rd32(c, (RW(29) + 28));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
c->f[26].u = rd32(c, (RW(29) + 24));
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
c->f[25].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
c->f[24].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
c->f[23].u = rd32(c, (RW(29) + 12));
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 416); return;
}

void F_002BD790(Ctx *c) { /* func_002BD790 */
ENTER(0x2bd790);
SET32(4, RW(4) + -96); { F_002BD190(c); return; }
}

void F_002BD7A0(Ctx *c) { /* func_002BD7A0 */
ENTER(0x2bd7a0);
SET32(4, RW(4) + -144); { F_002BCCC0(c); return; }
}

void F_002BD7B0(Ctx *c) { /* func_002BD7B0 */
ENTER(0x2bd7b0);
SET32(4, RW(4) + -144); { F_002BD190(c); return; }
}

void F_002BD7C0(Ctx *c) { /* func_002BD7C0 */
ENTER(0x2bd7c0);
SET32(4, RW(4) + -176); { F_002BD190(c); return; }
}

void F_002BD7D0(Ctx *c) { /* func_002BD7D0 */
ENTER(0x2bd7d0);
SET32(4, RW(4) + -496); { F_002BD190(c); return; }
}

void F_002BD7E0(Ctx *c) { /* func_002BD7E0 */
ENTER(0x2bd7e0);
SET32(4, RW(4) + -96); { F_002BD0A0(c); return; }
}

void F_002BD7F0(Ctx *c) { /* func_002BD7F0 */
ENTER(0x2bd7f0);
SET32(4, RW(4) + -144); { F_002BC380(c); return; }
}

void F_002BD800(Ctx *c) { /* func_002BD800 */
ENTER(0x2bd800);
SET32(4, RW(4) + -144); { F_002BD0A0(c); return; }
}

void F_002BD810(Ctx *c) { /* func_002BD810 */
ENTER(0x2bd810);
SET32(4, RW(4) + -176); { F_002BD0A0(c); return; }
}

void F_002BD820(Ctx *c) { /* func_002BD820 */
ENTER(0x2bd820);
SET32(4, RW(4) + -496); { F_002BD0A0(c); return; }
}

void F_002BD830(Ctx *c) { /* func_002BD830 */
ENTER(0x2bd830);
SET32(4, RW(4) + -96); { F_002BCFD0(c); return; }
}

void F_002BD840(Ctx *c) { /* func_002BD840 */
ENTER(0x2bd840);
SET32(4, RW(4) + -144); { F_002BCFD0(c); return; }
}

void F_002BD850(Ctx *c) { /* func_002BD850 */
ENTER(0x2bd850);
SET32(4, RW(4) + -176); { F_002BCFD0(c); return; }
}

void F_002BD860(Ctx *c) { /* func_002BD860 */
ENTER(0x2bd860);
SET32(4, RW(4) + -496); { F_002BCFD0(c); return; }
}

void F_002BD870(Ctx *c) { /* func_002BD870 */
ENTER(0x2bd870);
SET32(4, RW(4) + -160); { F_002BBB30(c); return; }
}

void F_002BD880(Ctx *c) { /* func_002BD880 */
ENTER(0x2bd880);
c->f[1].u = rd32(c, (RW(4) + 8));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(5, rd16(c, (RW(4) + 12))); goto L_002BD8B8; }
c->f[1].f = fpu(F(1) - F(12));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; wr32(c, (RW(4) + 8), c->f[1].u); if (t) goto L_002BD944; }
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(4) + 4), c->f[0].u); goto L_002BD944;
L_002BD8B8:;
SET64(3, rd16(c, (RW(4) + 14)));
SET64(1, RSD(5) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002BD944; }
c->f[0].u = rd32(c, (RW(4) + 4));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(5, rd16(c, (RW(4) + 12)));
c->f[0].f = fpu(F(0) + F(12));
SET64(3, (s32)rd32(c, (RW(3) + 28)));
SET32(5, RW(5) << 3);
SET32(6, RW(3) + RW(5));
wr32(c, (RW(4) + 4), c->f[0].u);
SET64(3, rd16(c, (RW(6) + 0)));
wr16(c, (RW(4) + 16), (u16)RW(3)); goto L_002BD900;
L_002BD8F4:;
SET32(6, RW(6) + 8);
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 12), (u16)RW(3));
L_002BD900:;
SET64(5, rd16(c, (RW(4) + 12)));
SET64(3, rd16(c, (RW(4) + 14)));
SET64(1, RSD(5) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002BD928; }
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = rd32(c, (RW(6) + 4));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(3, rd16(c, (RW(4) + 12))); { POLL(); goto L_002BD8F4; } }
L_002BD928:;
SET64(5, rd16(c, (RW(4) + 12)));
SET64(3, rd16(c, (RW(4) + 14)));
SET64(3, RSD(5) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_002BD944; }
SET32(3, RW(0) + 5);
wr16(c, (RW(4) + 16), (u16)RW(3));
L_002BD944:;
 return;
}

void F_002BD950(Ctx *c) { /* func_002BD950 */
ENTER(0x2bd950);
wr32(c, (RW(4) + 4), RW(0));
SET32(3, RW(0) + 5);
wr16(c, (RW(4) + 12), (u16)RW(0));
c->f[0].u = RW(0);
wr16(c, (RW(4) + 16), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) == RD(0)) { wr16(c, (RW(4) + 14), (u16)RW(0)); goto L_002BD988; }
c->f[0].u = rd32(c, (RW(3) + 24));
wr32(c, (RW(4) + 8), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 8)));
wr16(c, (RW(4) + 14), (u16)RW(3)); goto L_002BD98C;
L_002BD988:;
wr32(c, (RW(4) + 8), c->f[0].u);
L_002BD98C:;
 return;
}

void F_002BD9A0(Ctx *c) { /* func_002BD9A0 */
ENTER(0x2bd9a0);
wr16(c, (RW(4) + 2), (u16)RW(0));
SET32(3, RW(0) + 1);
wr16(c, (RW(4) + 0), (u16)RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 12), RW(0));
SET64(6, rd16(c, (RW(5) + 0)));
wr16(c, (RW(4) + 0), (u16)RW(6));
SET64(6, rd16(c, (RW(5) + 2)));
wr16(c, (RW(4) + 2), (u16)RW(6));
SET64(6, (s32)rd32(c, (RW(5) + 4)));
wr32(c, (RW(4) + 4), RW(6));
SET64(5, (s32)rd32(c, (RW(5) + 12)));
wr32(c, (RW(4) + 12), RW(5));
wr8(c, (RW(4) + 8), (u8)RW(3)); return;
}

void F_002BD9E0(Ctx *c) { /* func_002BD9E0 */
ENTER(0x2bd9e0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, rd16(c, (RW(5) + 0)));
wr16(c, (RW(4) + 0), (u16)RW(2));
SET64(2, rd16(c, (RW(4) + 2)));
{ int t = RD(2) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BDAB4; }
SET32(19, RW(29) + 80);
SET64(18, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2bda20); SET64(4, RD(19) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(18) + RD(0));
SET32(2, RW(2) + -26960);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2bda38); wr32(c, (RW(29) + 96), RW(2)); F_001569F0(c);
SET64(5, rd16(c, (RW(16) + 0)));
SET64(31, 0x2bda44); SET64(4, RD(19) + RD(0)); F_00156930(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(0) | 0xffff);
{ int t = RD(3) == RD(2);  if (t) goto L_002BDA94; }
SET64(2, (s32)rd32(c, (RW(17) + 12)));
if (RD(2) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_002BDA6C; }
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET32(3, RW(3) << 6);
SET32(16, RW(2) + RW(3));
L_002BDA6C:;
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 80);
SET32(2, RW(2) + -26960);
SET64(31, 0x2bda80); wr32(c, (RW(29) + 96), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2bda8c); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(2, RD(16) + RD(0)); goto L_002BDAB8;
L_002BDA94:;
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(19) + RD(0));
SET32(2, RW(2) + -26960);
SET64(31, 0x2bdaa8); wr32(c, (RW(29) + 96), RW(2)); F_00156AD0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2bdab4); SET64(5, RD(0) + RD(0)); F_001575C0(c);
L_002BDAB4:;
SET64(2, RD(0) + RD(0));
L_002BDAB8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_002BDAE0(Ctx *c) { /* func_002BDAE0 */
ENTER(0x2bdae0);
SET32(29, RW(29) + -96);
SET64(1, RSD(5) < (s64)6);
{ int t = RD(1) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002BDC10; }
SET64(3, rd16(c, (RW(4) + 0)));
SET32(2, RW(0) + 5);
{ int t = RD(3) == RD(2);  if (t) goto L_002BDBBC; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002BDB64; }
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(5) << 2);
c->f[0].u = rd32(c, (RW(2) + 656));
SET32(4, RW(3) + RW(29));
SET64(3, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(3) + 664));
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 660));
wr32(c, (RW(29) + 64), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 668));
wr32(c, (RW(29) + 68), c->f[1].u);
wr32(c, (RW(29) + 72), c->f[2].u);
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 672));
wr32(c, (RW(29) + 76), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 676));
wr32(c, (RW(29) + 80), c->f[1].u);
wr32(c, (RW(29) + 84), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 64))); goto L_002BDC10;
L_002BDB64:;
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(5) << 2);
c->f[0].u = rd32(c, (RW(2) + 688));
SET32(4, RW(3) + RW(29));
SET64(3, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(3) + 696));
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 692));
wr32(c, (RW(29) + 32), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 700));
wr32(c, (RW(29) + 36), c->f[1].u);
wr32(c, (RW(29) + 40), c->f[2].u);
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 704));
wr32(c, (RW(29) + 44), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 708));
wr32(c, (RW(29) + 48), c->f[1].u);
wr32(c, (RW(29) + 52), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 32))); goto L_002BDC10;
L_002BDBBC:;
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(5) << 2);
c->f[0].u = rd32(c, (RW(2) + 720));
SET32(4, RW(3) + RW(29));
SET64(3, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(3) + 728));
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 724));
wr32(c, (RW(29) + 0), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 732));
wr32(c, (RW(29) + 4), c->f[1].u);
wr32(c, (RW(29) + 8), c->f[2].u);
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 736));
wr32(c, (RW(29) + 12), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 740));
wr32(c, (RW(29) + 16), c->f[1].u);
wr32(c, (RW(29) + 20), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
L_002BDC10:;
SET32(29, RW(29) + 96); return;
}

void F_002BDC20(Ctx *c) { /* func_002BDC20 */
ENTER(0x2bdc20);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 76), RW(6));
SET64(31, 0x2bdc48); SET32(4, RW(0) + 24); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BDC58; }
SET64(31, 0x2bdc58); SET64(4, RD(16) + RD(0)); F_001F2640(c);
L_002BDC58:;
wr32(c, (RW(18) + 12), RW(16));
SET64(6, RD(17) + RD(0));
SET64(5, (s32)rd32(c, (RW(18) + 4)));
SET64(4, RD(16) + RD(0));
SET32(7, RW(28) + -31428);
SET32(8, RW(29) + 76);
SET64(31, 0x2bdc78); SET32(9, RW(0) + 1); F_001F2450(c);
SET64(3, (s32)rd32(c, (RW(18) + 12)));
SET64(3, rd16(c, (RW(3) + 16)));
wr16(c, (RW(18) + 2), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002BDCA0(Ctx *c) { /* func_002BDCA0 */
ENTER(0x2bdca0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 8)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002BDCE0; }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 12), RW(0)); goto L_002BDCE8; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bdcd4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 12), RW(0));
 goto L_002BDCE8;
L_002BDCE0:;
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 4), RW(0));
L_002BDCE8:;
wr16(c, (RW(16) + 2), (u16)RW(0));
wr8(c, (RW(16) + 8), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BDD00(Ctx *c) { /* func_002BDD00 */
ENTER(0x2bdd00);
wr16(c, (RW(4) + 2), (u16)RW(0));
wr16(c, (RW(4) + 0), (u16)RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void F_002BDD20(Ctx *c) { /* func_002BDD20 */
ENTER(0x2bdd20);
SET32(29, RW(29) + -32);
SET64(3, RD(4) & 0xffff);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(0) + 210);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(3) == RD(2); SET64(16, RD(0) + RD(0)); if (t) goto L_002BDE10; }
SET32(2, RW(0) + 200);
if (RD(3) == RD(2)) { SET64(16, RD(0) + (s64)1028); goto L_002BDE40; }
SET32(2, RW(0) + 180);
if (RD(3) == RD(2)) { SET64(16, RD(0) + (s64)1029); goto L_002BDE40; }
SET32(2, RW(0) + 220);
{ int t = RD(3) == RD(2);  if (t) goto L_002BDE04; }
SET32(2, RW(0) + 1260);
if (RD(3) == RD(2)) { SET64(16, RD(0) + (s64)5); goto L_002BDE40; }
SET32(2, RW(0) + 1250);
{ int t = RD(3) == RD(2);  if (t) goto L_002BDDF8; }
SET32(2, RW(0) + 160);
if (RD(3) == RD(2)) { SET64(16, RD(0) + (s64)512); goto L_002BDE40; }
SET32(2, RW(0) + 80);
{ int t = RD(3) == RD(2);  if (t) goto L_002BDDEC; }
SET32(2, RW(0) + 150);
{ int t = RD(3) == RD(2);  if (t) goto L_002BDDEC; }
SET32(2, RW(0) + 40);
{ int t = RD(3) == RD(2);  if (t) goto L_002BDDEC; }
SET32(2, RW(0) + 140);
if (RD(3) == RD(2)) { SET64(16, RD(0) + (s64)256); goto L_002BDE40; }
SET32(2, RW(0) + 70);
{ int t = RD(3) == RD(2);  if (t) goto L_002BDDE0; }
SET32(2, RW(0) + 130);
{ int t = RD(3) == RD(2);  if (t) goto L_002BDDE0; }
SET32(2, RW(0) + 30);
{ int t = RD(3) == RD(2);  if (t) goto L_002BDDE0; }
 goto L_002BDE1C;
L_002BDDE0:;
SET64(16, RD(0) + (s64)256);
 goto L_002BDE40;
L_002BDDEC:;
SET64(16, RD(0) + (s64)512);
 goto L_002BDE40;
L_002BDDF8:;
SET64(16, RD(0) + (s64)5);
 goto L_002BDE40;
L_002BDE04:;
SET64(16, RD(0) + (s64)1029);
 goto L_002BDE40;
L_002BDE10:;
SET64(16, RD(0) + (s64)1028);
 goto L_002BDE40;
L_002BDE1C:;
SET64(31, 0x2bde24);  F_0023FAB0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002BDE40; }
SET64(31, 0x2bde34);  F_00194460(c);
SET64(2, RD(2) & 0x3);
SET64(2, RD(2) | 0x300);
SET64(16, RD(2) & 0xffff);
L_002BDE40:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BDE60(Ctx *c) { /* func_002BDE60 */
ENTER(0x2bde60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BDEC0; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16400);
SET32(3, RW(3) + -16392);
wr32(c, (RW(17) + 56), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -16380);
SET64(31, 0x2bdea8); wr32(c, (RW(17) + 36), RW(2)); F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BDEC4; }
SET64(31, 0x2bdec0); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002BDEC0:;
SET64(2, RD(17) + RD(0));
L_002BDEC4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BDEE0(Ctx *c) { /* func_002BDEE0 */
ENTER(0x2bdee0);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 10200); return;
}

void F_002BDEF0(Ctx *c) { /* func_002BDEF0 */
ENTER(0x2bdef0);
 return;
}

void F_002BDF00(Ctx *c) { /* func_002BDF00 */
ENTER(0x2bdf00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr16(c, (RW(4) + 0), (u16)RW(0));
SET64(16, RD(4) + RD(0));
wr16(c, (RW(4) + 2), (u16)RW(0));
wr16(c, (RW(4) + 4), (u16)RW(0));
wr16(c, (RW(4) + 6), (u16)RW(0));
wr16(c, (RW(4) + 8), (u16)RW(0));
wr16(c, (RW(4) + 10), (u16)RW(0));
wr16(c, (RW(4) + 12), (u16)RW(0));
wr16(c, (RW(4) + 14), (u16)RW(0));
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 36), RW(0));
wr32(c, (RW(4) + 40), RW(0));
wr32(c, (RW(4) + 44), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 32), RW(0));
wr32(c, (RW(4) + 40), RW(0));
SET64(31, 0x2bdf68); SET32(4, RW(16) + 48); F_00351040(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BDF80(Ctx *c) { /* func_002BDF80 */
ENTER(0x2bdf80);
SET64(3, (s32)rd32(c, (RW(7) + 0)));
{ int t = RD(5) != RD(0); wr16(c, (RW(6) + 0), (u16)RW(3)); if (t) goto L_002BDF9C; }
wr16(c, (RW(6) + 2), (u16)RW(0));
wr16(c, (RW(6) + 4), (u16)RW(0));
wr16(c, (RW(6) + 6), (u16)RW(0)); goto L_002BDFAC;
L_002BDF9C:;
SET32(3, RW(0) + 1);
wr16(c, (RW(6) + 2), (u16)RW(3));
wr16(c, (RW(6) + 4), (u16)RW(3));
wr16(c, (RW(6) + 6), (u16)RW(3));
L_002BDFAC:;
wr16(c, (RW(6) + 8), (u16)RW(0));
c->f[1].u = RW(0);
SET64(3, rd16(c, (RW(7) + 4)));
wr16(c, (RW(6) + 10), (u16)RW(3));
SET64(3, rd16(c, (RW(7) + 6)));
wr16(c, (RW(6) + 12), (u16)RW(3));
wr32(c, (RW(6) + 16), RW(0));
wr32(c, (RW(6) + 20), RW(0));
wr32(c, (RW(6) + 24), RW(0));
wr32(c, (RW(6) + 28), RW(0));
wr32(c, (RW(6) + 32), RW(0));
wr32(c, (RW(6) + 36), RW(0));
wr32(c, (RW(6) + 40), RW(0));
wr32(c, (RW(6) + 44), RW(0));
c->f[0].u = rd32(c, (RW(7) + 8));
wr32(c, (RW(6) + 20), c->f[0].u);
c->f[0].u = rd32(c, (RW(7) + 12));
c->fcc = F(0) < F(1);
if (c->fcc) { c->f[0].u = c->f[0].u ^ 0x80000000u; goto L_002BE004; }
wr32(c, (RW(6) + 24), c->f[0].u); goto L_002BE008;
L_002BE004:;
wr32(c, (RW(6) + 28), c->f[0].u);
L_002BE008:;
c->f[1].u = rd32(c, (RW(7) + 16));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (c->fcc) { c->f[0].u = c->f[1].u ^ 0x80000000u; goto L_002BE028; }
wr32(c, (RW(6) + 32), c->f[1].u); goto L_002BE02C;
L_002BE028:;
wr32(c, (RW(6) + 36), c->f[0].u);
L_002BE02C:;
c->f[1].u = rd32(c, (RW(7) + 20));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (c->fcc) { c->f[0].u = c->f[1].u ^ 0x80000000u; goto L_002BE04C; }
wr32(c, (RW(6) + 40), c->f[1].u); goto L_002BE050;
L_002BE04C:;
wr32(c, (RW(6) + 44), c->f[0].u);
L_002BE050:;
 return;
}

void F_002BE060(Ctx *c) { /* func_002BE060 */
ENTER(0x2be060);
SET64(4, (s64)(s32)0x410000);
SET64(2, RD(0) + RD(0));
SET32(4, RW(4) + 2512);
L_002BE06C:;
SET64(3, rd8(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_002BE088; }
SET32(4, RW(4) + 8);
SET32(2, RW(2) + 1); { POLL(); goto L_002BE06C; }
L_002BE088:;
 return;
}

static void B_002BE090(Ctx *c, u32 entry) { /* func_002BE090 */
ENTER(entry);
switch (entry) { case 0x2be148: goto L_002BE148; case 0x2be160: goto L_002BE160; case 0x2be178: goto L_002BE178; case 0x2be190: goto L_002BE190; case 0x2be1a8: goto L_002BE1A8; case 0x2be1c0: goto L_002BE1C0; case 0x2be1d8: goto L_002BE1D8; case 0x2be1f0: goto L_002BE1F0; }
SET64(11, RD(0) + RD(0));
SET64(10, RD(0) + RD(0));
SET64(3, (s64)(s32)0x410000);
SET64(6, (s64)(s32)0x4b0000);
SET64(7, (s64)(s32)0x2aaa0000);
SET32(3, RW(3) + 3824);
SET32(6, RW(6) + 10160);
SET32(8, RW(0) + 6);
SET64(7, RD(7) | 0xaaab);
SET32(9, RW(0) + 1);
L_002BE0B8:;
wr32(c, (RW(4) + 144), RW(0));
SET64(12, RD(0) + RD(0));
wr32(c, (RW(4) + 148), RW(0));
wr32(c, (RW(4) + 152), RW(0));
wr32(c, (RW(4) + 156), RW(0));
wr32(c, (RW(4) + 160), RW(0));
wr32(c, (RW(4) + 164), RW(0));
wr32(c, (RW(4) + 168), RW(0));
wr32(c, (RW(4) + 172), RW(0));
L_002BE0E0:;
SET32(13, RW(12) + RW(10));
SET32(14, RSW(13) >> 5);
SET64(13, RD(13) & 0x1f);
SET32(15, RW(14) << 2);
SET32(14, RW(9) << (RW(13) & 31));
SET32(13, RW(5) + RW(15));
SET64(13, (s32)rd32(c, (RW(13) + 1048)));
SET64(13, RD(13) & RD(14));
{ int t = RD(13) == RD(0);  if (t) goto L_002BE200; }
div_s(c, 0, RSW(12), RSW(8));
SET32(14, RW(12) >> 31);
SET64(15, c->hi.d[0]);
mul_s(c, 0, 0, RSW(7), RSW(12));
SET64(13, c->hi.d[0]);
SET32(13, RW(13) + RW(14));
SET64(1, RD(13) < (u64)(s64)8);
{ int t = RD(1) == RD(0);  if (t) goto L_002BE200; }
SET32(13, RW(13) << 2);
SET32(13, RW(13) + RW(6));
SET64(13, (s32)rd32(c, (RW(13) + 0)));
{ u32 t = RW(13);  switch (t) { case 0x2be148: goto L_002BE148; case 0x2be160: goto L_002BE160; case 0x2be178: goto L_002BE178; case 0x2be190: goto L_002BE190; case 0x2be1a8: goto L_002BE1A8; case 0x2be1c0: goto L_002BE1C0; case 0x2be1d8: goto L_002BE1D8; case 0x2be1f0: goto L_002BE1F0; default: rt_jump(c, t); return; } }
L_002BE148:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 144), c->f[0].u); goto L_002BE200;
L_002BE160:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 148), c->f[0].u); goto L_002BE200;
L_002BE178:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 152), c->f[0].u); goto L_002BE200;
L_002BE190:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 156), c->f[0].u); goto L_002BE200;
L_002BE1A8:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 160), c->f[0].u); goto L_002BE200;
L_002BE1C0:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 164), c->f[0].u); goto L_002BE200;
L_002BE1D8:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 168), c->f[0].u); goto L_002BE200;
L_002BE1F0:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 172), c->f[0].u);
L_002BE200:;
SET32(12, RW(12) + 1);
SET64(13, RSD(12) < (s64)48);
{ int t = RD(13) != RD(0);  if (t) { POLL(); goto L_002BE0E0; } }
SET32(11, RW(11) + 1);
SET32(4, RW(4) + 32);
SET64(12, RSD(11) < (s64)2);
{ int t = RD(12) != RD(0); SET32(10, RW(10) + 48); if (t) { POLL(); goto L_002BE0B8; } }
 return;
}
void F_002BE090(Ctx *c) { B_002BE090(c, 0x2be090); }
void F_002BE148(Ctx *c) { B_002BE090(c, 0x2be148); }
void F_002BE160(Ctx *c) { B_002BE090(c, 0x2be160); }
void F_002BE178(Ctx *c) { B_002BE090(c, 0x2be178); }
void F_002BE190(Ctx *c) { B_002BE090(c, 0x2be190); }
void F_002BE1A8(Ctx *c) { B_002BE090(c, 0x2be1a8); }
void F_002BE1C0(Ctx *c) { B_002BE090(c, 0x2be1c0); }
void F_002BE1D8(Ctx *c) { B_002BE090(c, 0x2be1d8); }
void F_002BE1F0(Ctx *c) { B_002BE090(c, 0x2be1f0); }

void F_002BE230(Ctx *c) { /* func_002BE230 */
ENTER(0x2be230);
SET32(29, RW(29) + -432);
SET32(3, RW(0) + 2561);
wr64(c, (RW(29) + 176), RD(31));
wr128(c, (RW(29) + 160) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 20), c->f[21].u);
wr32(c, (RW(29) + 16), c->f[20].u);
SET64(9, rd16(c, (RW(4) + 0)));
{ int t = RD(9) == RD(3); SET64(20, RD(4) + RD(0)); if (t) goto L_002BF5E0; }
SET32(7, RW(0) + 2560);
{ int t = RD(9) == RD(7);  if (t) goto L_002BF420; }
SET32(3, RW(0) + 2305);
if (RD(9) == RD(3)) { SET64(4, (s32)rd32(c, (RW(20) + 60))); goto L_002BF3C4; }
SET32(6, RW(0) + 2304);
if (RD(9) == RD(6)) { SET32(4, RW(0) + 108); goto L_002BF278; }
SET32(3, RW(0) + 2049);
if (RD(9) == RD(3)) { SET64(4, (s32)rd32(c, (RW(20) + 60))); goto L_002BF250; }
SET32(5, RW(0) + 2048);
{ int t = RD(9) == RD(5);  if (t) goto L_002BF180; }
SET32(3, RW(0) + 1795);
if (RD(9) == RD(3)) { SET64(4, (s32)rd32(c, (RW(20) + 64))); goto L_002BF09C; }
SET32(3, RW(0) + 1794);
if (RD(9) == RD(3)) { SET64(5, (s32)rd32(c, (RW(20) + 64))); goto L_002BEFF4; }
SET32(3, RW(0) + 1793);
if (RD(9) == RD(3)) { SET64(3, rd16(c, (RW(20) + 0))); goto L_002BEFE8; }
SET32(3, RW(0) + 1792);
if (RD(9) == RD(3)) { SET64(3, (s32)rd32(c, (RW(20) + 128))); goto L_002BE7B0; }
SET32(8, RW(0) + 1538);
if (RD(9) == RD(8)) { SET64(4, (s32)rd32(c, (RW(20) + 60))); goto L_002BE718; }
SET32(8, RW(0) + 1537);
if (RD(9) == RD(8)) { SET64(5, (s32)rd32(c, (RW(20) + 60))); goto L_002BE630; }
SET32(11, RW(0) + 1536);
{ int t = RD(9) == RD(11);  if (t) goto L_002BE5AC; }
SET32(8, RW(0) + 1280);
if (RD(9) == RD(8)) { SET64(8, rd8(c, (RW(20) + 140))); goto L_002BE534; }
SET32(5, RW(0) + 1);
if (RD(9) == RD(5)) { SET64(4, (s32)rd32(c, (RW(20) + 60))); goto L_002BE424; }
if (RD(9) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002BE32C; }
SET64(31, rd64(c, (RW(29) + 176))); goto L_002BF648;
L_002BE32C:;
SET64(3, (s64)(s32)0x410000);
wr8(c, (RW(20) + 140), (u8)RW(0));
SET32(4, RW(2) << 2);
SET32(3, RW(3) + 3776);
wr32(c, (RW(20) + 128), RW(0));
SET32(3, RW(3) + RW(4));
SET64(2, (s64)(s32)0x540000);
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(0) + 104);
wr32(c, (RW(20) + 136), RW(3));
SET64(2, rd16(c, (RW(2) + -25234)));
SET64(31, 0x2be360); wr32(c, (RW(20) + 132), RW(2)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BE3E4; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2be374); SET32(5, RW(0) + 1536); F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16320);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + -16312);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -16300);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(2));
SET32(4, RW(4) + 1248);
wr32(c, (RW(16) + 80), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 76), RW(0));
SET32(3, RW(3) + 1256);
wr32(c, (RW(16) + 72), RW(0));
SET32(2, RW(2) + 1268);
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 56), RW(4));
wr32(c, (RW(16) + 20), RW(3));
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 92), RW(0));
wr32(c, (RW(16) + 96), RW(0));
wr32(c, (RW(16) + 100), RW(0));
L_002BE3E4:;
wr32(c, (RW(20) + 60), RW(16));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 96), RW(20));
SET32(4, RW(0) + 4);
SET64(31, 0x2be3fc); wr32(c, (RW(16) + 64), RW(2)); F_00100530(c);
wr32(c, (RW(16) + 60), RW(2));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(16) + 68), RW(0));
SET64(5, (s32)rd32(c, (RW(20) + 60)));
SET64(31, 0x2be414); SET64(4, RD(20) + RD(0)); F_0013A470(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BE424:;
SET32(3, RW(0) + 4);
SET64(6, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(6) != RD(3);  if (t) goto L_002BF644; }
{ int t = RD(4) == RD(0); SET64(16, (s32)rd32(c, (RW(4) + 68))); if (t) goto L_002BE44C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2be44c);  rt_call(c, t); }
L_002BE44C:;
SET32(3, RW(0) + 4);
{ int t = RD(16) == RD(3); wr32(c, (RW(20) + 60), RW(0)); if (t) goto L_002BE4B8; }
SET32(3, RW(0) + 3);
{ int t = RD(16) == RD(3);  if (t) goto L_002BE48C; }
SET32(3, RW(0) + 2);
{ int t = RD(16) == RD(3);  if (t) goto L_002BE48C; }
SET32(3, RW(0) + 1);
{ int t = RD(16) == RD(3);  if (t) goto L_002BE48C; }
{ int t = RD(16) == RD(0);  if (t) goto L_002BE48C; }
SET64(4, RD(20) + RD(0)); goto L_002BE51C;
L_002BE48C:;
SET64(4, (s64)(s32)0x410000);
SET32(5, RW(16) << 2);
SET32(4, RW(4) + 3776);
wr32(c, (RW(20) + 128), RW(16));
SET32(4, RW(4) + RW(5));
SET32(3, RW(0) + 1280);
SET64(4, (s32)rd32(c, (RW(4) + 0)));
wr32(c, (RW(20) + 136), RW(4));
wr32(c, (RW(20) + 132), RW(0));
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BE4B8:;
SET64(3, (s32)rd32(c, (RW(20) + 132)));
SET64(4, (s32)rd32(c, (RW(20) + 136)));
SET32(3, RW(3) << 3);
SET32(3, RW(3) + RW(4));
SET64(3, rd8(c, (RW(3) + 1)));
SET64(3, RD(3) & 0x80);
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
{ int t = RD(3) == RD(0);  if (t) goto L_002BE510; }
SET64(3, (s32)rd32(c, (RW(20) + 132)));
L_002BE4E4:;
SET32(3, RW(3) + -1);
wr32(c, (RW(20) + 132), RW(3));
SET32(4, RW(3) << 3);
SET64(3, (s32)rd32(c, (RW(20) + 136)));
SET32(3, RW(3) + RW(4));
SET64(3, rd8(c, (RW(3) + 1)));
SET64(3, RD(3) & 0x80);
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(20) + 132))); { POLL(); goto L_002BE4E4; } }
L_002BE510:;
SET32(3, RW(0) + 1280);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BE51C:;
SET64(31, 0x2be524);  F_00139AB0(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BE534:;
if (RD(8) == RD(0)) { SET64(10, (s32)rd32(c, (RW(20) + 132))); goto L_002BE54C; }
SET64(31, 0x2be544);  F_00139AB0(c);
 goto L_002BF644;
L_002BE54C:;
SET32(8, RW(0) + 5);
SET64(9, (s32)rd32(c, (RW(20) + 136)));
SET32(10, RW(10) << 3);
SET32(9, RW(9) + RW(10));
SET64(9, rd8(c, (RW(9) + 0)));
if (RD(9) == RD(8)) { wr16(c, (RW(20) + 0), (u16)RW(7)); goto L_002BF644; }
SET32(7, RW(0) + 4);
if (RD(9) == RD(7)) { wr16(c, (RW(20) + 0), (u16)RW(6)); goto L_002BF644; }
SET32(6, RW(0) + 3);
if (RD(9) == RD(6)) { wr16(c, (RW(20) + 0), (u16)RW(5)); goto L_002BF644; }
SET32(5, RW(0) + 2);
if (RD(9) == RD(5)) { wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644; }
SET32(3, RW(0) + 1);
if (RD(9) == RD(3)) { wr16(c, (RW(20) + 0), (u16)RW(11)); goto L_002BF644; }
SET32(2, RW(0) + -1);
SET64(31, 0x2be5a4); wr16(c, (RW(28) + -31500), (u16)RW(2)); F_00139AB0(c);
 goto L_002BF644;
L_002BE5AC:;
SET64(31, 0x2be5b4);  F_00139590(c);
SET64(31, 0x2be5bc);  F_00139590(c);
SET64(31, 0x2be5c4); SET64(4, (s32)rd32(c, (RW(2) + 20))); F_001B7BD0(c);
SET64(31, 0x2be5cc); SET32(4, RW(0) + 1876); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BE5E0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2be5e0); SET64(5, RD(20) + RD(0)); F_001A80F0(c);
L_002BE5E0:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2be5ec); wr32(c, (RW(20) + 60), RW(16)); F_001A6FB0(c);
SET64(3, (s32)rd32(c, (RW(28) + -31424)));
SET64(2, (s32)rd32(c, (RW(20) + 60)));
wr32(c, (RW(2) + 844), RW(3));
SET64(2, (s32)rd32(c, (RW(20) + 132)));
SET64(3, (s32)rd32(c, (RW(20) + 136)));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET64(31, 0x2be610); SET64(4, rd16(c, (RW(2) + 2))); F_0035C810(c);
SET64(4, (s32)rd32(c, (RW(20) + 60)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x2be620); SET64(6, RD(0) + RD(0)); F_001A6F00(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3));
SET64(5, (s32)rd32(c, (RW(20) + 60)));
L_002BE630:;
SET64(3, rd8(c, (RW(5) + 108)));
{ int t = RD(3) != RD(0);  if (t) goto L_002BF644; }
SET64(4, (s32)rd32(c, (RW(5) + 1036)));
SET32(3, RW(0) + -1);
if (RD(4) != RD(3)) { SET32(3, RW(4) << 3); goto L_002BE654; }
SET64(3, RD(0) + RD(0)); goto L_002BE65C;
L_002BE654:;
SET32(3, RW(5) + RW(3));
SET32(3, RW(3) + 948);
L_002BE65C:;
if (RD(3) == RD(0)) { SET64(4, RD(20) + RD(0)); goto L_002BE670; }
SET32(3, RW(0) + 1538);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BE670:;
SET64(31, 0x2be678);  F_002BE090(c);
SET64(4, (s32)rd32(c, (RW(20) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(20) + 60), RW(0)); goto L_002BE698; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2be694); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(20) + 60), RW(0));
L_002BE698:;
SET64(31, 0x2be6a0);  F_00139590(c);
SET64(31, 0x2be6a8);  F_00139590(c);
SET64(31, 0x2be6b0); SET64(4, (s32)rd32(c, (RW(2) + 20))); F_001B7AA0(c);
SET64(3, (s32)rd32(c, (RW(20) + 128)));
{ int t = RD(3) != RD(0);  if (t) goto L_002BE700; }
SET64(3, (s64)(s32)0x410000);
SET64(3, (s32)rd32(c, (RW(3) + 3472)));
{ int t = RSD(3) < 0; SET64(16, (s32)rd32(c, (RW(20) + 132))); if (t) goto L_002BE700; }
SET64(17, (s64)(s32)0x410000);
SET32(17, RW(17) + 3472);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_002BE6D8:;
{ int t = RD(16) != RD(3);  if (t) goto L_002BE6F0; }
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2be6f0); SET32(4, RW(4) + -25552); F_002DA940(c);
L_002BE6F0:;
SET32(17, RW(17) + 8);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
if (RSD(3) >= 0) { SET64(3, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_002BE6D8; } }
L_002BE700:;
SET64(4, (s32)rd32(c, (RW(20) + 132)));
SET32(3, RW(0) + 1280);
SET32(4, RW(4) + 1);
wr32(c, (RW(20) + 132), RW(4));
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BE718:;
SET32(2, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(4) + 1036)));
if (RD(3) != RD(2)) { SET32(2, RW(3) << 3); goto L_002BE730; }
SET64(2, RD(0) + RD(0)); goto L_002BE738;
L_002BE730:;
SET32(2, RW(4) + RW(2));
SET32(2, RW(2) + 948);
L_002BE738:;
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[0].u = rd32(c, (RW(2) + 4));
wr32(c, (RW(29) + 424), c->f[1].u);
{ int t = RD(4) == RD(0); wr32(c, (RW(29) + 428), c->f[0].u); if (t) goto L_002BE75C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2be75c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002BE75C:;
SET32(4, RW(0) + 1876);
SET64(31, 0x2be768); wr32(c, (RW(20) + 60), RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BE77C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2be77c); SET64(5, RD(20) + RD(0)); F_001A80F0(c);
L_002BE77C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2be788); wr32(c, (RW(20) + 60), RW(16)); F_001A6FB0(c);
SET64(3, (s32)rd32(c, (RW(28) + -31420)));
SET64(2, (s32)rd32(c, (RW(20) + 60)));
SET64(5, (s32)rd32(c, (RW(29) + 428)));
wr32(c, (RW(2) + 844), RW(3));
SET64(4, (s32)rd32(c, (RW(20) + 60)));
SET64(31, 0x2be7a4); SET64(6, RD(0) + RD(0)); F_001A6F00(c);
SET32(3, RW(0) + 1537);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BE7B0:;
{ int t = RD(3) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_002BE7CC; }
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(4, (s32)rd32(c, (RW(20) + 132))); goto L_002BE7D0; }
wr32(c, (RW(29) + 272), RW(0)); goto L_002BE81C;
L_002BE7CC:;
SET64(4, (s32)rd32(c, (RW(20) + 132)));
L_002BE7D0:;
{ int t = RSD(4) < 0; SET64(7, RD(0) + RD(0)); if (t) goto L_002BE808; }
SET64(5, (s64)(s32)0x410000);
SET32(2, RW(0) + 2);
SET32(5, RW(5) + 2512);
L_002BE7E4:;
SET64(3, rd8(c, (RW(5) + 0)));
{ int t = RD(3) != RD(2);  if (t) goto L_002BE7F8; }
SET32(6, RW(6) + 1);
L_002BE7F8:;
SET32(7, RW(7) + 1);
SET64(1, RSD(4) < RSD(7));
{ int t = RD(1) == RD(0); SET32(5, RW(5) + 8); if (t) { POLL(); goto L_002BE7E4; } }
L_002BE808:;
if (RSD(6) <= 0) { wr32(c, (RW(29) + 272), RW(0)); goto L_002BE81C; }
SET32(2, RW(6) + -1);
wr32(c, (RW(29) + 272), RW(2)); goto L_002BE81C;
L_002BE81C:;
wr32(c, (RW(20) + 212), RW(0));
SET32(16, RW(29) + 292);
wr32(c, (RW(20) + 208), RW(0));
L_002BE828:;
c->f[12].u = RW(0);
SET64(4, RD(16) + RD(0));
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
SET64(31, 0x2be860); c->f[15].u = c->f[12].u; F_0013C6B0(c);
SET32(16, RW(16) + 52);
SET32(2, RW(29) + 396);
SET64(2, RD(16) < RD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002BE828; } }
SET64(31, 0x2be87c); SET32(4, RW(29) + 288); F_003510E0(c);
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x410000);
wr16(c, (RW(29) + 288), (u16)RW(3));
SET32(2, RW(2) + 752);
SET64(3, (s32)rd32(c, (RW(20) + 132)));
SET64(4, (s32)rd32(c, (RW(20) + 136)));
SET32(3, RW(3) << 3);
SET32(3, RW(3) + RW(4));
SET64(4, rd16(c, (RW(3) + 2)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET32(7, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(7) + 0)));
if (RSD(2) >= 0) { SET32(6, RW(29) + 292); goto L_002BEA3C; }
SET64(4, rd16(c, (RW(7) + 4)));
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 3792);
SET64(3, RD(0) | 0xffff);
SET32(4, RW(4) << 2);
SET32(2, RW(2) + RW(4));
SET64(22, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(22) + 0)));
{ int t = RD(2) == RD(3); SET64(21, RD(0) + RD(0)); if (t) goto L_002BE908; }
SET64(4, RD(22) + RD(0));
L_002BE8E8:;
SET32(4, RW(4) + 24);
SET32(21, RW(21) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_002BE8E8; } }
L_002BE908:;
SET32(16, RW(21) + 1);
SET32(2, RW(16) << 1);
SET64(19, RD(0) + RD(0));
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 2);
SET64(31, 0x2be92c); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002BE958; }
SET64(5, (s64)(s32)0x2c0000);
SET64(8, RD(16) + RD(0));
SET32(19, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + -8448);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2be954); SET32(7, RW(0) + 52); F_00102580(c);
SET64(18, RD(2) + RD(0));
L_002BE958:;
{ int t = RSD(21) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002BEA10; }
SET64(16, RD(18) + RD(0));
L_002BE964:;
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x2be978); SET64(7, RD(22) + RD(0)); F_002BDF80(c);
c->f[1].u = rd32(c, (RW(20) + 144));
SET32(19, RW(19) + 1);
c->f[0].u = rd32(c, (RW(16) + 16));
SET64(2, RSD(19) < RSD(21));
SET32(22, RW(22) + 24);
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 16), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 148));
c->f[0].u = rd32(c, (RW(16) + 20));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 20), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 152));
c->f[0].u = rd32(c, (RW(16) + 24));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 24), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 156));
c->f[0].u = rd32(c, (RW(16) + 28));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 28), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 160));
c->f[0].u = rd32(c, (RW(16) + 32));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 32), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 164));
c->f[0].u = rd32(c, (RW(16) + 36));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 36), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 168));
c->f[0].u = rd32(c, (RW(16) + 40));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 40), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 172));
c->f[0].u = rd32(c, (RW(16) + 44));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 44), c->f[0].u);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 52); if (t) { POLL(); goto L_002BE964; } }
L_002BEA10:;
SET32(2, RW(19) << 1);
SET32(2, RW(2) + RW(19));
SET64(3, RD(0) | 0xffff);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(19));
SET32(2, RW(2) << 2);
SET32(2, RW(18) + RW(2));
wr16(c, (RW(2) + 0), (u16)RW(3));
wr32(c, (RW(20) + 208), RW(18));
wr32(c, (RW(29) + 396), RW(18)); goto L_002BEACC;
L_002BEA3C:;
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2bea4c); wr32(c, (RW(29) + 396), RW(0)); F_002BDF80(c);
c->f[1].u = rd32(c, (RW(20) + 144));
c->f[0].u = rd32(c, (RW(29) + 308));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 308), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 148));
c->f[0].u = rd32(c, (RW(29) + 312));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 312), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 152));
c->f[0].u = rd32(c, (RW(29) + 316));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 316), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 156));
c->f[0].u = rd32(c, (RW(29) + 320));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 320), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 160));
c->f[0].u = rd32(c, (RW(29) + 324));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 324), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 164));
c->f[0].u = rd32(c, (RW(29) + 328));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 328), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 168));
c->f[0].u = rd32(c, (RW(29) + 332));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 332), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 172));
c->f[0].u = rd32(c, (RW(29) + 336));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 336), c->f[0].u);
L_002BEACC:;
SET64(3, (s32)rd32(c, (RW(20) + 132)));
SET64(2, (s64)(s32)0x410000);
SET64(4, (s32)rd32(c, (RW(20) + 136)));
SET32(2, RW(2) + 752);
SET32(3, RW(3) << 3);
SET32(3, RW(3) + RW(4));
SET64(4, rd16(c, (RW(3) + 2)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
SET32(7, RW(2) + 24);
SET64(2, (s32)rd32(c, (RW(2) + 24)));
if (RSD(2) >= 0) { SET32(6, RW(29) + 344); goto L_002BEDD0; }
SET64(4, rd16(c, (RW(7) + 4)));
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 3792);
SET64(3, RD(0) | 0xffff);
SET32(4, RW(4) << 2);
SET32(2, RW(2) + RW(4));
SET64(21, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ int t = RD(2) == RD(3); SET64(18, RD(0) + RD(0)); if (t) goto L_002BEB50; }
SET64(4, RD(21) + RD(0));
L_002BEB34:;
SET32(4, RW(4) + 24);
SET32(18, RW(18) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_002BEB34; } }
L_002BEB50:;
SET32(16, RW(18) + 1);
SET32(2, RW(16) << 1);
SET64(19, RD(0) + RD(0));
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 2);
SET64(31, 0x2beb74); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002BEBA0; }
SET64(5, (s64)(s32)0x2c0000);
SET64(8, RD(16) + RD(0));
SET32(19, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET32(5, RW(5) + -8448);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2beb9c); SET32(7, RW(0) + 52); F_00102580(c);
SET64(17, RD(2) + RD(0));
L_002BEBA0:;
{ int t = RSD(18) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002BECA0; }
SET32(3, RW(20) + 32);
SET64(16, RD(17) + RD(0));
SET32(2, RW(3) + 156);
SET32(22, RW(3) + 144);
wr128(c, (RW(29) + 256) & ~15u, &c->r[2]);
SET32(23, RW(3) + 148);
SET32(2, RW(3) + 160);
SET32(30, RW(3) + 152);
wr128(c, (RW(29) + 240) & ~15u, &c->r[2]);
SET32(2, RW(3) + 164);
wr128(c, (RW(29) + 224) & ~15u, &c->r[2]);
SET32(2, RW(3) + 168);
wr128(c, (RW(29) + 208) & ~15u, &c->r[2]);
SET32(2, RW(3) + 172);
wr128(c, (RW(29) + 192) & ~15u, &c->r[2]);
L_002BEBE4:;
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 1);
SET64(6, RD(16) + RD(0));
SET64(31, 0x2bebf8); SET64(7, RD(21) + RD(0)); F_002BDF80(c);
c->f[1].u = rd32(c, (RW(16) + 16));
SET32(19, RW(19) + 1);
c->f[0].u = rd32(c, (RW(22) + 0));
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
SET64(3, RSD(19) < RSD(18));
SET32(21, RW(21) + 24);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 16), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 20));
c->f[0].u = rd32(c, (RW(23) + 0));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 20), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 24));
c->f[0].u = rd32(c, (RW(30) + 0));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 24), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[1].u = rd32(c, (RW(16) + 28));
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 28), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[1].u = rd32(c, (RW(16) + 32));
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 32), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[1].u = rd32(c, (RW(16) + 36));
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 36), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[1].u = rd32(c, (RW(16) + 40));
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 40), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 44));
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 44), c->f[0].u);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 52); if (t) { POLL(); goto L_002BEBE4; } }
L_002BECA0:;
SET32(2, RW(19) << 1);
SET32(2, RW(2) + RW(19));
SET64(3, RD(0) | 0xffff);
SET32(2, RW(2) << 2);
SET32(18, RW(20) + 212);
SET32(2, RW(2) + RW(19));
SET32(2, RW(2) << 2);
SET32(2, RW(17) + RW(2));
wr16(c, (RW(2) + 0), (u16)RW(3));
wr32(c, (RW(20) + 212), RW(17));
wr32(c, (RW(29) + 400), RW(17));
SET64(2, rd16(c, (RW(17) + 0)));
{ int t = RD(2) == RD(3); SET64(16, RD(0) + RD(0)); if (t) goto L_002BEF08; }
SET64(17, RD(0) + RD(0));
L_002BECDC:;
c->f[0].u = RW(16);
SET64(2, (s64)(s32)0x3be50000);
SET64(2, RD(2) | 0x6042);
c->f[21].u = RW(2);
SET64(31, 0x2becf4); c->f[20].f = (f32)(s32)c->f[0].u; F_002C5110(c);
SET64(31, 0x2becfc); SET64(4, RD(2) + RD(0)); F_002C5130(c);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(0));
SET64(31, 0x2bed10); c->f[20].f = fpu(c->facc + F(21) * F(20)); F_002C5110(c);
SET64(3, (s32)rd32(c, (RW(20) + 128)));
{ int t = RD(3) == RD(0); SET64(4, (s32)rd32(c, (RW(2) + 0))); if (t) goto L_002BED48; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002BED48; }
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(4) << 2);
SET32(2, RW(2) + 3760);
SET32(2, RW(2) + RW(3));
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[20].f = fpu(F(20) + F(0)); goto L_002BED80;
L_002BED48:;
SET64(2, (s64)(s32)0x41800000);
c->f[0].u = RW(2);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(29) + 272)));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + 3760);
SET32(3, RW(3) + RW(4));
c->f[2].u = RW(2);
c->f[2].f = (f32)(s32)c->f[2].u;
c->f[1].u = rd32(c, (RW(3) + 0));
c->f[1].f = fpu(F(2) * F(1));
c->f[0].f = fpu_div(F(1), F(0));
c->f[20].f = fpu(F(20) + F(0));
L_002BED80:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(20) <= F(0);
{ int t = c->fcc;  if (t) goto L_002BEDA0; }
c->f[20].u = c->f[0].u;
L_002BEDA0:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, RD(0) | 0xffff);
SET32(3, RW(3) + RW(17));
wr32(c, (RW(3) + 48), c->f[20].u);
SET32(17, RW(17) + 52);
SET64(3, (s32)rd32(c, (RW(29) + 400)));
SET32(3, RW(3) + RW(17));
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) != RD(2); SET32(16, RW(16) + 1); if (t) { POLL(); goto L_002BECDC; } }
SET64(2, (s32)rd32(c, (RW(20) + 132))); goto L_002BEF0C;
L_002BEDD0:;
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2bede0); wr32(c, (RW(29) + 400), RW(0)); F_002BDF80(c);
c->f[1].u = rd32(c, (RW(20) + 176));
c->f[0].u = rd32(c, (RW(29) + 360));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 360), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 180));
c->f[0].u = rd32(c, (RW(29) + 364));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 364), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 184));
c->f[0].u = rd32(c, (RW(29) + 368));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 368), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 188));
c->f[0].u = rd32(c, (RW(29) + 372));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 372), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 192));
c->f[0].u = rd32(c, (RW(29) + 376));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 376), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 196));
c->f[0].u = rd32(c, (RW(29) + 380));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 380), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 200));
c->f[0].u = rd32(c, (RW(29) + 384));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 384), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 204));
c->f[0].u = rd32(c, (RW(29) + 388));
c->f[0].f = fpu(F(0) + F(1));
SET64(31, 0x2bee64); wr32(c, (RW(29) + 388), c->f[0].u); F_002C5110(c);
SET64(31, 0x2bee6c); SET64(4, RD(2) + RD(0)); F_002C5130(c);
c->f[1].u = RW(0);
SET64(31, 0x2bee78); c->f[20].f = fpu(F(1) + F(0)); F_002C5110(c);
SET64(3, (s32)rd32(c, (RW(20) + 128)));
{ int t = RD(3) == RD(0); SET64(4, (s32)rd32(c, (RW(2) + 0))); if (t) goto L_002BEEAC; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002BEEAC; }
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(4) << 2);
SET32(2, RW(2) + 3760);
SET32(2, RW(2) + RW(3));
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[20].f = fpu(F(20) + F(0)); goto L_002BEEE8;
L_002BEEAC:;
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(4) << 2);
SET32(2, RW(2) + 3760);
SET32(4, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(29) + 272)));
c->f[1].u = rd32(c, (RW(4) + 0));
SET64(3, (s64)(s32)0x41800000);
c->f[0].u = RW(2);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(2) * F(1));
c->f[0].u = RW(3);
c->f[0].f = fpu_div(F(1), F(0));
c->f[20].f = fpu(F(20) + F(0));
L_002BEEE8:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(20) <= F(0);
if (c->fcc) { wr32(c, (RW(29) + 392), c->f[20].u); goto L_002BEF08; }
c->f[20].u = c->f[0].u;
wr32(c, (RW(29) + 392), c->f[20].u);
L_002BEF08:;
SET64(2, (s32)rd32(c, (RW(20) + 132)));
L_002BEF0C:;
SET32(4, RW(29) + 288);
SET64(3, (s32)rd32(c, (RW(20) + 136)));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 6)));
SET64(31, 0x2bef28); wr16(c, (RW(29) + 404), (u16)RW(2)); F_00351070(c);
SET64(3, (s32)rd32(c, (RW(20) + 132)));
SET64(2, rd16(c, (RW(28) + -30348)));
SET64(4, RD(3) ^ 0x5f);
SET64(4, RD(4) < (u64)(s64)1);
SET32(3, RW(3) << 3);
wr8(c, (RW(29) + 408), (u8)RW(4));
SET64(4, (s32)rd32(c, (RW(20) + 136)));
SET32(3, RW(3) + RW(4));
{ int t = RD(2) != RD(0); SET64(3, rd16(c, (RW(3) + 2))); if (t) goto L_002BEF70; }
SET32(2, RW(0) + 16);
if (RD(3) == RD(2)) { SET64(2, RD(0) + RD(0)); goto L_002BEFA0; }
SET32(2, RW(0) + 12);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 131); goto L_002BEFA0; }
SET64(2, RD(0) + RD(0)); goto L_002BEFA0;
L_002BEF70:;
SET32(2, RW(0) + 16);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 131); goto L_002BEFA0; }
SET32(2, RW(0) + 12);
{ int t = RD(3) == RD(2);  if (t) goto L_002BEF90; }
 goto L_002BEF9C;
L_002BEF90:;
SET32(2, RW(0) + 131);
 goto L_002BEFA0;
L_002BEF9C:;
SET64(2, RD(0) + RD(0));
L_002BEFA0:;
wr32(c, (RW(29) + 416), RW(2));
SET64(31, 0x2befac); SET32(4, RW(0) + 1952); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BEFBC; }
SET64(31, 0x2befbc); SET64(4, RD(16) + RD(0)); F_002FA470(c);
L_002BEFBC:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 288);
SET64(31, 0x2befcc); wr32(c, (RW(20) + 64), RW(16)); F_002F9E50(c);
SET64(5, (s32)rd32(c, (RW(20) + 64)));
SET64(31, 0x2befd8); SET64(4, RD(20) + RD(0)); F_0013A470(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3));
SET64(3, rd16(c, (RW(20) + 0)));
L_002BEFE8:;
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3));
SET64(5, (s32)rd32(c, (RW(20) + 64)));
L_002BEFF4:;
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(5) + 48)));
{ int t = RD(4) != RD(3);  if (t) goto L_002BF644; }
SET64(3, rd8(c, (RW(5) + 1892)));
wr8(c, (RW(20) + 68), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 1893)));
wr8(c, (RW(20) + 69), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 1894)));
wr8(c, (RW(20) + 70), (u8)RW(3));
SET64(3, (s16)rd16(c, (RW(5) + 1896)));
wr16(c, (RW(20) + 72), (u16)RW(3));
SET64(3, rd8(c, (RW(5) + 1898)));
wr8(c, (RW(20) + 74), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 1899)));
wr8(c, (RW(20) + 75), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 1900)));
wr8(c, (RW(20) + 76), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 1901)));
wr8(c, (RW(20) + 77), (u8)RW(3));
c->f[0].u = rd32(c, (RW(5) + 1904));
wr32(c, (RW(20) + 80), c->f[0].u);
SET64(3, rd8(c, (RW(5) + 1908)));
wr8(c, (RW(20) + 84), (u8)RW(3));
SET64(3, rd8(c, (RW(5) + 1909)));
wr8(c, (RW(20) + 85), (u8)RW(3));
SET64(3, rd16(c, (RW(5) + 1910)));
wr16(c, (RW(20) + 86), (u16)RW(3));
SET64(3, rd16(c, (RW(5) + 1912)));
wr16(c, (RW(20) + 88), (u16)RW(3));
c->f[0].u = rd32(c, (RW(5) + 1916));
wr32(c, (RW(20) + 92), c->f[0].u);
SET64(3, rd8(c, (RW(5) + 1920)));
wr8(c, (RW(20) + 96), (u8)RW(3));
SET64(4, (s16)rd16(c, (RW(5) + 1922)));
SET64(3, (s16)rd16(c, (RW(5) + 1924)));
wr16(c, (RW(20) + 98), (u16)RW(4));
wr16(c, (RW(20) + 100), (u16)RW(3));
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BF09C:;
SET64(31, 0x2bf0a4);  F_002F24D0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002BF644; }
SET64(4, (s32)rd32(c, (RW(20) + 64)));
if (RD(4) == RD(0)) { wr32(c, (RW(20) + 64), RW(0)); goto L_002BF0CC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2bf0c8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(20) + 64), RW(0));
L_002BF0CC:;
SET64(16, RD(0) + RD(0));
SET64(17, RD(20) + RD(0));
L_002BF0D4:;
SET64(2, (s32)rd32(c, (RW(17) + 208)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BF0E8; }
SET64(31, 0x2bf0e8); SET32(4, RW(2) + -16); F_00100430(c);
L_002BF0E8:;
SET32(16, RW(16) + 1);
wr32(c, (RW(17) + 208), RW(0));
SET64(2, RSD(16) < (s64)2);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002BF0D4; } }
SET64(31, 0x2bf104); SET64(4, RD(0) + RD(0)); F_00138B20(c);
SET32(3, RW(0) + 1280);
wr16(c, (RW(20) + 0), (u16)RW(3));
SET64(3, (s16)rd16(c, (RW(20) + 72)));
if (RD(3) != RD(0)) { SET32(3, RW(0) + 1); goto L_002BF178; }
SET64(3, (s32)rd32(c, (RW(20) + 128)));
{ int t = RD(3) != RD(0);  if (t) goto L_002BF168; }
SET64(3, (s64)(s32)0x410000);
SET64(3, (s32)rd32(c, (RW(3) + 3472)));
{ int t = RSD(3) < 0; SET64(16, (s32)rd32(c, (RW(20) + 132))); if (t) goto L_002BF168; }
SET64(17, (s64)(s32)0x410000);
SET32(17, RW(17) + 3472);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_002BF140:;
{ int t = RD(16) != RD(3);  if (t) goto L_002BF158; }
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2bf158); SET32(4, RW(4) + -25552); F_002DA940(c);
L_002BF158:;
SET32(17, RW(17) + 8);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
if (RSD(3) >= 0) { SET64(3, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_002BF140; } }
L_002BF168:;
SET64(3, (s32)rd32(c, (RW(20) + 132)));
SET32(3, RW(3) + 1);
wr32(c, (RW(20) + 132), RW(3)); goto L_002BF644;
L_002BF178:;
wr8(c, (RW(20) + 140), (u8)RW(3)); goto L_002BF644;
L_002BF180:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2bf18c); SET32(4, RW(4) + -25552); F_002DA730(c);
if (RD(2) != RD(0)) { SET32(4, RW(0) + 100); goto L_002BF1AC; }
SET64(4, (s32)rd32(c, (RW(20) + 132)));
SET32(3, RW(0) + 1280);
SET32(4, RW(4) + 1);
wr32(c, (RW(20) + 132), RW(4));
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BF1AC:;
SET64(31, 0x2bf1b4);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BF230; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bf1c8); SET32(5, RW(0) + 1536); F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16320);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + -16312);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -16300);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(2));
SET32(4, RW(4) + 1008);
wr32(c, (RW(16) + 80), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 76), RW(0));
SET32(3, RW(3) + 1016);
wr32(c, (RW(16) + 72), RW(0));
SET32(2, RW(2) + 1028);
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 56), RW(4));
wr32(c, (RW(16) + 20), RW(3));
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 92), RW(0));
L_002BF230:;
SET64(5, RD(16) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2bf240); wr32(c, (RW(20) + 60), RW(16)); F_0013A470(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BF250:;
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(4) != RD(3);  if (t) goto L_002BF644; }
SET64(4, (s32)rd32(c, (RW(20) + 132)));
SET32(3, RW(0) + 1280);
SET32(4, RW(4) + 1);
wr32(c, (RW(20) + 132), RW(4));
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BF278:;
SET64(31, 0x2bf280);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BF304; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bf294); SET32(5, RW(0) + 1536); F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16320);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + -16312);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -16300);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(2));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 80), RW(0));
SET32(5, RW(5) + 1168);
wr32(c, (RW(16) + 76), RW(0));
SET32(4, RW(4) + 1176);
wr32(c, (RW(16) + 72), RW(0));
SET32(3, RW(3) + 1188);
wr32(c, (RW(16) + 60), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 56), RW(5));
wr32(c, (RW(16) + 20), RW(4));
wr32(c, (RW(16) + 36), RW(3));
wr8(c, (RW(16) + 100), (u8)RW(2));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 92), RW(0));
L_002BF304:;
wr32(c, (RW(20) + 60), RW(16));
SET64(2, (s32)rd32(c, (RW(20) + 132)));
SET32(4, RW(2) + 1);
wr32(c, (RW(20) + 132), RW(4));
SET32(3, RW(4) << 3);
SET64(2, (s32)rd32(c, (RW(20) + 136)));
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_002BF370; }
SET64(2, (s32)rd32(c, (RW(20) + 128)));
if (RD(2) != RD(0)) { SET64(16, (s32)rd32(c, (RW(20) + 60))); goto L_002BF344; }
SET64(2, (s64)(s32)0x540000);
wr16(c, (RW(2) + -25234), (u16)RW(0));
SET64(16, (s32)rd32(c, (RW(20) + 60)));
L_002BF344:;
SET32(2, RW(0) + 2);
SET32(4, RW(0) + 8);
SET64(31, 0x2bf354); wr32(c, (RW(16) + 64), RW(2)); F_00100530(c);
wr32(c, (RW(16) + 60), RW(2));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 60)));
wr32(c, (RW(2) + 4), RW(0));
wr8(c, (RW(16) + 100), (u8)RW(0));
wr32(c, (RW(16) + 68), RW(0)); goto L_002BF3A8;
L_002BF370:;
SET64(2, (s64)(s32)0x540000);
SET32(3, RW(0) + 2);
wr16(c, (RW(2) + -25234), (u16)RW(4));
SET64(16, (s32)rd32(c, (RW(20) + 60)));
SET32(4, RW(0) + 8);
SET64(31, 0x2bf38c); wr32(c, (RW(16) + 64), RW(3)); F_00100530(c);
wr32(c, (RW(16) + 60), RW(2));
SET32(3, RW(0) + 1);
wr32(c, (RW(2) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 60)));
wr32(c, (RW(2) + 4), RW(0));
wr8(c, (RW(16) + 100), (u8)RW(3));
wr32(c, (RW(16) + 68), RW(0));
L_002BF3A8:;
SET64(5, (s32)rd32(c, (RW(20) + 60)));
SET64(31, 0x2bf3b4); SET64(4, RD(20) + RD(0)); F_0013A470(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BF3C4:;
SET32(3, RW(0) + 4);
SET64(5, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(5) != RD(3);  if (t) goto L_002BF644; }
{ int t = RD(4) == RD(0); SET64(16, (s32)rd32(c, (RW(4) + 68))); if (t) goto L_002BF3EC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2bf3ec); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002BF3EC:;
{ int t = RD(16) == RD(0); wr32(c, (RW(20) + 60), RW(0)); if (t) goto L_002BF3FC; }
SET64(4, RD(20) + RD(0)); goto L_002BF408;
L_002BF3FC:;
SET32(3, RW(0) + 1280);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BF408:;
SET64(31, 0x2bf410);  F_00139AB0(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BF420:;
SET64(4, (s64)(s32)0x540000);
SET32(5, RW(0) + 120);
SET64(31, 0x2bf430); SET32(4, RW(4) + -25552); F_002DA940(c);
SET64(4, (s32)rd32(c, (RW(20) + 128)));
SET32(2, RW(0) + 3);
{ int t = RD(4) == RD(2);  if (t) goto L_002BF4BC; }
SET32(2, RW(0) + 2);
{ int t = RD(4) == RD(2);  if (t) goto L_002BF498; }
SET32(3, RW(0) + 1);
{ int t = RD(4) == RD(3);  if (t) goto L_002BF48C; }
{ int t = RD(4) == RD(0);  if (t) goto L_002BF468; }
 goto L_002BF4E8;
L_002BF468:;
SET64(2, (s64)(s32)0x540000);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + -25236);
SET64(31, 0x2bf47c); wr16(c, (RW(2) + -25234), (u16)RW(0)); F_002DA640(c);
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x540000);
wr8(c, (RW(2) + -25232), (u8)RW(3)); goto L_002BF4E8;
L_002BF48C:;
SET64(2, (s64)(s32)0x540000);
wr8(c, (RW(2) + -25231), (u8)RW(3)); goto L_002BF4E8;
L_002BF498:;
SET64(4, (s64)(s32)0x540000);
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x540000);
SET32(4, RW(4) + -25552);
wr8(c, (RW(2) + -25230), (u8)RW(3));
SET64(31, 0x2bf4b4); SET32(5, RW(0) + 42); F_002DA940(c);
 goto L_002BF4E8;
L_002BF4BC:;
SET64(4, (s64)(s32)0x540000);
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x540000);
SET32(4, RW(4) + -25552);
wr8(c, (RW(2) + -25229), (u8)RW(3));
SET64(31, 0x2bf4d8); SET32(5, RW(0) + 43); F_002DA940(c);
SET64(4, (s64)(s32)0x540000);
SET32(5, RW(0) + 58);
SET64(31, 0x2bf4e8); SET32(4, RW(4) + -25552); F_002DA940(c);
L_002BF4E8:;
SET64(4, (s64)(s32)0x540000);
SET64(3, RD(0) + RD(0));
SET32(4, RW(4) + -25568);
L_002BF4F4:;
SET64(2, rd8(c, (RW(4) + 336)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BF510; }
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < (s64)4);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 1); if (t) { POLL(); goto L_002BF4F4; } }
L_002BF510:;
SET32(2, RW(0) + 4);
if (RD(3) != RD(2)) { SET64(16, RD(0) + RD(0)); goto L_002BF540; }
SET64(4, (s64)(s32)0x540000);
SET32(5, RW(0) + 59);
SET64(31, 0x2bf52c); SET32(4, RW(4) + -25552); F_002DA940(c);
SET64(4, (s64)(s32)0x540000);
SET32(5, RW(0) + 121);
SET64(31, 0x2bf53c); SET32(4, RW(4) + -25552); F_002DA940(c);
SET64(16, RD(0) + RD(0));
L_002BF540:;
SET64(4, (s64)(s32)0x540000);
SET32(5, RW(16) + 175);
SET64(31, 0x2bf550); SET32(4, RW(4) + -25552); F_002DA940(c);
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < (s64)39);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002BF540; } }
SET64(31, 0x2bf568); SET32(4, RW(0) + 32); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BF578; }
SET64(31, 0x2bf578); SET64(4, RD(16) + RD(0)); F_0014FE60(c);
L_002BF578:;
SET32(5, RW(0) + 512);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2bf594); wr32(c, (RW(20) + 216), RW(16)); F_0014FCE0(c);
SET64(31, 0x2bf59c); SET32(4, RW(0) + 576); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BF5AC; }
SET64(31, 0x2bf5ac); SET64(4, RD(16) + RD(0)); F_002DC030(c);
L_002BF5AC:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bf5b8); wr32(c, (RW(20) + 60), RW(16)); F_002DBDC0(c);
SET64(3, (s32)rd32(c, (RW(20) + 216)));
SET64(2, (s32)rd32(c, (RW(20) + 60)));
wr32(c, (RW(2) + 76), RW(3));
SET64(5, (s32)rd32(c, (RW(20) + 60)));
SET64(31, 0x2bf5d0); SET64(4, RD(20) + RD(0)); F_0013A470(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002BF644;
L_002BF5E0:;
SET64(4, (s32)rd32(c, (RW(20) + 60)));
SET32(3, RW(0) + 4);
SET64(5, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(5) != RD(3);  if (t) goto L_002BF644; }
if (RD(4) == RD(0)) { wr32(c, (RW(20) + 60), RW(0)); goto L_002BF610; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2bf60c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(20) + 60), RW(0));
L_002BF610:;
SET64(4, (s32)rd32(c, (RW(20) + 216)));
if (RD(4) == RD(0)) { wr32(c, (RW(20) + 216), RW(0)); goto L_002BF630; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bf62c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(20) + 216), RW(0));
L_002BF630:;
SET32(3, RW(0) + 1280);
wr16(c, (RW(20) + 0), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(20) + 132)));
SET32(3, RW(3) + 1);
wr32(c, (RW(20) + 132), RW(3));
L_002BF644:;
SET64(31, rd64(c, (RW(29) + 176)));
L_002BF648:;
c->f[21].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 160) & ~15u, &c->r[30]);
c->f[20].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 144) & ~15u, &c->r[23]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(29, RW(29) + 432); return;
}

void F_002BF680(Ctx *c) { /* func_002BF680 */
ENTER(0x2bf680);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
{ int t = RD(19) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_002BF7F8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16320);
SET32(3, RW(3) + -16312);
wr32(c, (RW(19) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 20), RW(3));
SET32(2, RW(2) + -16300);
wr32(c, (RW(19) + 36), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 60)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 60))); goto L_002BF738; }
SET64(2, (s32)rd32(c, (RW(19) + 64)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_002BF728; }
SET64(16, RD(0) + RD(0));
L_002BF6E4:;
SET64(2, (s32)rd32(c, (RW(19) + 60)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_002BF708; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2bf708); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002BF708:;
SET64(2, (s32)rd32(c, (RW(19) + 60)));
SET32(17, RW(17) + 1);
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(19) + 64)));
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002BF6E4; } }
L_002BF728:;
SET64(31, 0x2bf730); SET64(4, (s32)rd32(c, (RW(19) + 60))); F_00100430(c);
wr32(c, (RW(19) + 60), RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 60)));
L_002BF738:;
SET64(31, 0x2bf740);  F_00100430(c);
wr32(c, (RW(19) + 60), RW(0));
SET64(2, (s32)rd32(c, (RW(19) + 84)));
SET64(2, RD(2) & 0x1);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 84))); goto L_002BF778; }
SET64(4, (s32)rd32(c, (RW(19) + 80)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 80), RW(0)); goto L_002BF774; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bf770); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 80), RW(0));
L_002BF774:;
SET64(2, (s32)rd32(c, (RW(19) + 84)));
L_002BF778:;
SET64(2, RD(2) & 0x2);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 84))); goto L_002BF7A8; }
SET64(4, (s32)rd32(c, (RW(19) + 72)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 72), RW(0)); goto L_002BF7A4; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bf7a0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 72), RW(0));
L_002BF7A4:;
SET64(2, (s32)rd32(c, (RW(19) + 84)));
L_002BF7A8:;
SET64(2, RD(2) & 0x4);
if (RD(2) == RD(0)) { SET64(4, RD(19) + RD(0)); goto L_002BF7D8; }
SET64(4, (s32)rd32(c, (RW(19) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 76), RW(0)); goto L_002BF7D4; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bf7d0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 76), RW(0));
L_002BF7D4:;
SET64(4, RD(19) + RD(0));
L_002BF7D8:;
SET64(31, 0x2bf7e0); SET64(5, RD(0) + RD(0)); F_00139F30(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(19) + RD(0)); goto L_002BF7FC; }
SET64(31, 0x2bf7f8); SET64(4, RD(19) + RD(0)); F_001004B0(c);
L_002BF7F8:;
SET64(2, RD(19) + RD(0));
L_002BF7FC:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002BF820(Ctx *c) { /* func_002BF820 */
ENTER(0x2bf820);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BF8A0; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 1328);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 8), RW(2)); if (t) goto L_002BF888; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -6688);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2bf868);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002BF88C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -6656);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x2bf888); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_002BF888:;
SET64(2, RD(16) << 48);
L_002BF88C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BF8A4; }
SET64(31, 0x2bf8a0); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002BF8A0:;
SET64(2, RD(17) + RD(0));
L_002BF8A4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BF8C0(Ctx *c) { /* func_002BF8C0 */
ENTER(0x2bf8c0);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 10192); return;
}

void F_002BF8D0(Ctx *c) { /* func_002BF8D0 */
ENTER(0x2bf8d0);
 return;
}

void F_002BF8E0(Ctx *c) { /* func_002BF8E0 */
ENTER(0x2bf8e0);
SET32(4, RW(4) + -4); { F_002BF680(c); return; }
}

void F_002BF8F0(Ctx *c) { /* func_002BF8F0 */
ENTER(0x2bf8f0);
SET32(4, RW(4) + -24); { F_002BF680(c); return; }
}

void F_002BF900(Ctx *c) { /* func_002BF900 */
ENTER(0x2bf900);
SET32(4, RW(4) + -4); { F_002BDE60(c); return; }
}

void F_002BF910(Ctx *c) { /* func_002BF910 */
ENTER(0x2bf910);
SET32(4, RW(4) + -24); { F_002BDE60(c); return; }
}

void F_002BF920(Ctx *c) { /* func_002BF920 */
ENTER(0x2bf920);
SET64(2, (s64)(s32)0x44000000);
c->f[0].u = RW(2);
 return;
}

void F_002BF930(Ctx *c) { /* func_002BF930 */
ENTER(0x2bf930);
SET64(2, (s64)(s32)0x44000000);
c->f[0].u = RW(2);
 return;
}

void F_002BF940(Ctx *c) { /* func_002BF940 */
ENTER(0x2bf940);
SET64(2, (s64)(s32)0x43e00000);
c->f[0].u = RW(2);
 return;
}

void F_002BF950(Ctx *c) { /* func_002BF950 */
ENTER(0x2bf950);
SET64(2, (s64)(s32)0x44000000);
c->f[0].u = RW(2);
 return;
}

void F_002BF960(Ctx *c) { /* func_002BF960 */
ENTER(0x2bf960);
SET64(2, (s64)(s32)0x43e00000);
c->f[0].u = RW(2);
 return;
}

void F_002BF970(Ctx *c) { /* func_002BF970 */
ENTER(0x2bf970);
SET64(3, (s32)rd32(c, (RW(28) + -30020)));
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x44000000); goto L_002BF990; }
SET64(2, (s64)(s32)0x43e00000);
c->f[0].u = RW(2);
 goto L_002BF994;
L_002BF990:;
c->f[0].u = RW(2);
L_002BF994:;
 return;
}

void F_002BF9A0(Ctx *c) { /* func_002BF9A0 */
ENTER(0x2bf9a0);
SET64(2, (s64)(s32)0x44000000);
c->f[0].u = RW(2);
 return;
}

void F_002BF9B0(Ctx *c) { /* func_002BF9B0 */
ENTER(0x2bf9b0);
SET64(2, (s64)(s32)0x3f330000);
SET64(2, RD(2) | 0x3333);
c->f[0].u = RW(2);
 return;
}

void F_002BF9D0(Ctx *c) { /* func_002BF9D0 */
ENTER(0x2bf9d0);
SET32(29, RW(29) + -32);
SET32(8, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(28) + -30020)));
if (RD(2) == RD(8)) { SET32(8, RW(0) + 3); goto L_002BF9E8; }
L_002BF9E8:;
SET64(2, (s64)(s32)0x44000000);
SET32(5, RW(29) + 16);
c->f[0].u = RW(2);
SET64(6, RD(0) + RD(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(2, RW(0) + 512);
wr32(c, (RW(29) + 28), RW(2));
SET32(7, RW(0) + 1);
SET64(9, RD(0) + RD(0));
SET64(10, RD(0) + RD(0));
SET32(11, RW(0) + 49);
wr32(c, (RW(29) + 16), RW(0));
wr32(c, (RW(29) + 20), RW(0));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x2bfa28); wr32(c, (RW(29) + 24), RW(2)); F_002A8520(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_002BFA40(Ctx *c) { /* func_002BFA40 */
ENTER(0x2bfa40);
SET64(3, (s32)rd32(c, (RW(28) + -30020)));
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x42480000); goto L_002BFA60; }
SET64(2, (s64)(s32)0x42700000);
c->f[0].u = RW(2);
 goto L_002BFA64;
L_002BFA60:;
c->f[0].u = RW(2);
L_002BFA64:;
 return;
}

void F_002BFA70(Ctx *c) { /* func_002BFA70 */
ENTER(0x2bfa70);
SET64(2, (s32)rd32(c, (RW(28) + -30020)));
SET64(2, RD(2) ^ 0x2);
SET64(2, RD(0) < RD(2)); return;
}

void F_002BFA80(Ctx *c) { hle_video_mode(c); } /* func_002BFA80 */

void F_002BFAC0(Ctx *c) { /* func_002BFAC0 */
ENTER(0x2bfac0);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 10208); return;
}

void F_002BFAD0(Ctx *c) { /* func_002BFAD0 */
ENTER(0x2bfad0);
 return;
}

void F_002BFAE0(Ctx *c) { /* func_002BFAE0 */
ENTER(0x2bfae0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_002BFBA8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16240);
SET32(3, RW(3) + -16232);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -16220);
wr32(c, (RW(16) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 60), RW(0)); goto L_002BFB44; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2bfb40); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 60), RW(0));
L_002BFB44:;
SET64(17, (s32)rd32(c, (RW(16) + 64)));
if (RD(17) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002BFB84; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x2bfb60); SET32(5, RW(5) + -7552); F_001022C0(c);
wr32(c, (RW(17) + 0), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2bfb74); SET32(5, RW(5) + -1840); F_001022C0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2bfb80); wr32(c, (RW(17) + 4), RW(0)); F_001004B0(c);
SET64(4, RD(16) + RD(0));
L_002BFB84:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x2bfb90); wr32(c, (RW(16) + 64), RW(0)); F_00139F30(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(16) + RD(0)); goto L_002BFBAC; }
SET64(31, 0x2bfba8); SET64(4, RD(16) + RD(0)); F_001004B0(c);
L_002BFBA8:;
SET64(2, RD(16) + RD(0));
L_002BFBAC:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002BFBD0(Ctx *c) { /* func_002BFBD0 */
ENTER(0x2bfbd0);
SET32(29, RW(29) + -96);
SET64(3, (s64)(s32)0x520000);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(3) + 14864));
SET64(4, rd16(c, (RW(4) + 0)));
SET64(3, RD(0) | 0xff01);
if (RD(4) == RD(3)) { SET64(16, (s32)rd32(c, (RW(19) + 64))); goto L_002BFDF0; }
SET64(3, RD(0) | 0xff00);
if (RD(4) == RD(3)) { SET64(16, (s32)rd32(c, (RW(19) + 64))); goto L_002BFDB0; }
SET32(3, RW(0) + 257);
if (RD(4) == RD(3)) { SET64(16, (s32)rd32(c, (RW(19) + 64))); goto L_002BFCE4; }
SET32(3, RW(0) + 256);
if (RD(4) == RD(3)) { SET32(4, RW(0) + 1876); goto L_002BFC50; }
if (RD(4) == RD(0)) { SET32(4, RW(0) + 1); goto L_002BFC3C; }
SET64(31, rd64(c, (RW(29) + 80))); goto L_002BFEC8;
L_002BFC3C:;
SET64(31, 0x2bfc44);  F_00138B20(c);
SET32(3, RW(0) + 256);
wr16(c, (RW(19) + 0), (u16)RW(3)); goto L_002BFEC4;
L_002BFC50:;
SET64(31, 0x2bfc58);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BFC6C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bfc6c); SET64(5, RD(19) + RD(0)); F_001A80F0(c);
L_002BFC6C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bfc78); wr32(c, (RW(19) + 60), RW(16)); F_001A6FB0(c);
SET64(31, 0x2bfc80); SET32(4, RW(0) + 3380); F_0035C810(c);
SET64(4, (s32)rd32(c, (RW(19) + 60)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x2bfc90); SET64(6, RD(0) + RD(0)); F_001A6F00(c);
SET64(31, 0x2bfc98); SET32(4, RW(0) + 12); F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 64), RW(2)); goto L_002BFCAC; }
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(19) + 64), RW(2));
L_002BFCAC:;
SET64(31, 0x2bfcb4);  F_00139590(c);
SET64(6, (s32)rd32(c, (RW(2) + 8)));
if (RD(6) == RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 60))); goto L_002BFCC8; }
SET32(6, RW(6) + 672);
SET64(2, (s32)rd32(c, (RW(19) + 60)));
L_002BFCC8:;
SET64(5, (s32)rd32(c, (RW(2) + 140)));
SET64(31, 0x2bfcd4); SET64(4, (s32)rd32(c, (RW(19) + 64))); F_002C04F0(c);
SET64(3, rd16(c, (RW(19) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(19) + 0), (u16)RW(3));
SET64(16, (s32)rd32(c, (RW(19) + 64)));
L_002BFCE4:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
if (RD(3) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 60))); goto L_002BFD7C; }
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2bfd00); SET32(4, RW(3) + 192); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2bfd14);  rt_call(c, t); }
SET64(2, (s64)(s32)0x42700000);
SET32(4, RW(16) + 8);
c->f[0].u = RW(2);
SET32(5, RW(0) + 1);
c->f[12].f = fpu_div(F(20), F(0));
SET64(31, 0x2bfd38);  F_0030CC50(c);
SET64(2, (s64)(s32)0x3f400000);
SET64(3, (s64)(s32)0x3e800000);
c->f[3].u = RW(2);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
c->f[2].u = RW(3);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(2));
SET32(4, RW(2) + 576);
SET64(31, 0x2bfd64); c->f[12].f = fpu(c->facc + F(3) * F(0)); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2bfd78); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 60)));
L_002BFD7C:;
SET64(3, rd8(c, (RW(4) + 108)));
{ int t = RD(3) != RD(0);  if (t) goto L_002BFEC4; }
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 60), RW(0)); goto L_002BFDA4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2bfda0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 60), RW(0));
L_002BFDA4:;
SET64(3, RD(0) | 0xff00);
wr16(c, (RW(19) + 0), (u16)RW(3)); goto L_002BFEC4;
L_002BFDB0:;
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002BFDB8:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2bfdd0);  rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < (s64)2);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002BFDB8; } }
SET64(3, rd16(c, (RW(19) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(19) + 0), (u16)RW(3));
SET64(16, (s32)rd32(c, (RW(19) + 64)));
L_002BFDF0:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_002BFE40; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002BFE04:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2bfe20);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET32(18, RW(18) + 1); goto L_002BFE30; }
SET64(3, RD(0) + RD(0)); goto L_002BFE44;
L_002BFE30:;
SET64(3, RSD(18) < (s64)2);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002BFE04; } }
L_002BFE40:;
SET64(3, RD(0) + (s64)1);
L_002BFE44:;
{ int t = RD(3) == RD(0);  if (t) goto L_002BFEC4; }
SET64(31, 0x2bfe54); SET64(4, RD(0) + RD(0)); F_00138B20(c);
SET64(31, 0x2bfe5c); SET64(4, RD(0) + RD(0)); F_0013C340(c);
SET64(4, (s32)rd32(c, (RW(19) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 60), RW(0)); goto L_002BFE7C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2bfe78); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 60), RW(0));
L_002BFE7C:;
SET64(16, (s32)rd32(c, (RW(19) + 64)));
if (RD(16) == RD(0)) { SET64(4, RD(19) + RD(0)); goto L_002BFEBC; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x2bfe98); SET32(5, RW(5) + -7552); F_001022C0(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x2bfeac); SET32(5, RW(5) + -1840); F_001022C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bfeb8); wr32(c, (RW(16) + 4), RW(0)); F_001004B0(c);
SET64(4, RD(19) + RD(0));
L_002BFEBC:;
SET64(31, 0x2bfec4); wr32(c, (RW(19) + 64), RW(0)); F_00139AB0(c);
L_002BFEC4:;
SET64(31, rd64(c, (RW(29) + 80)));
L_002BFEC8:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002BFEF0(Ctx *c) { /* func_002BFEF0 */
ENTER(0x2bfef0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bff00);  F_00139590(c);
SET64(31, 0x2bff08);  F_00139590(c);
SET64(31, 0x2bff10); SET64(4, (s32)rd32(c, (RW(2) + 20))); F_001B7AA0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BFF20(Ctx *c) { /* func_002BFF20 */
ENTER(0x2bff20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bff30);  F_00139590(c);
SET64(31, 0x2bff38);  F_00139590(c);
SET64(31, 0x2bff40); SET64(4, (s32)rd32(c, (RW(2) + 20))); F_001B7BD0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BFF50(Ctx *c) { /* func_002BFF50 */
ENTER(0x2bff50);
 return;
}

void F_002BFF60(Ctx *c) { /* func_002BFF60 */
ENTER(0x2bff60);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2bff78); SET64(16, RD(4) + RD(0)); F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -16240);
SET32(2, RW(2) + -16232);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -16220);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 64), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void B_002BFFC0(Ctx *c, u32 entry) { /* func_002BFFC0 */
ENTER(entry);
switch (entry) { case 0x2c0000: goto L_002C0000; case 0x2c0008: goto L_002C0008; case 0x2c0014: goto L_002C0014; case 0x2c0024: goto L_002C0024; case 0x2c0028: goto L_002C0028; case 0x2c002c: goto L_002C002C; case 0x2c0038: goto L_002C0038; case 0x2c003c: goto L_002C003C; case 0x2c0040: goto L_002C0040; case 0x2c0048: goto L_002C0048; }
SET32(29, RW(29) + -256);
SET64(3, (s64)(s32)0x520000);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 16), c->f[20].u);
c->f[20].u = rd32(c, (RW(3) + 14864));
SET64(5, rd16(c, (RW(4) + 0)));
SET64(3, RD(0) | 0xff01);
{ int t = RD(5) == RD(3); SET64(19, RD(4) + RD(0)); if (t) goto L_002C0384; }
SET64(3, RD(0) | 0xff00);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(19) + 68))); goto L_002C0360; }
L_002C0000:;
SET32(3, RW(0) + 259);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(19) + 60))); goto L_002C0324; }
if (0) { L_002C0008:; SET64(4, (s32)rd32(c, (RW(19) + 60))); }
SET32(3, RW(0) + 258);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(19) + 60))); goto L_002C026C; }
if (0) { L_002C0014:; SET64(4, (s32)rd32(c, (RW(19) + 60))); }
SET32(3, RW(0) + 257);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(19) + 60))); goto L_002C0210; }
L_002C0024:;
SET32(3, RW(0) + 256);
L_002C0028:;
if (RD(5) == RD(3)) { SET32(16, RW(29) + 116); goto L_002C00BC; }
if (0) { L_002C002C:; SET32(16, RW(29) + 116); }
{ int t = RD(5) == RD(0);  if (t) goto L_002C0040; }
L_002C0038:;
SET64(31, rd64(c, (RW(29) + 96))); goto L_002C0460;
if (0) { L_002C003C:; SET64(31, rd64(c, (RW(29) + 96))); }
L_002C0040:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c004c); SET32(4, RW(4) + -25552); F_002D9FD0(c);
if (0) { L_002C0048:; SET32(4, RW(4) + -25552); }
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c0058); SET32(4, RW(4) + -25552); F_002DA100(c);
SET32(3, RW(2) << 2);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 4032);
SET32(16, RW(2) + RW(3));
L_002C0068:;
SET64(31, 0x2c0070); SET64(17, (s32)rd32(c, (RW(16) + 0))); F_00194460(c);
div_u(c, 0, RW(2), RW(17));
SET64(3, rd16(c, (RW(28) + -31400)));
SET64(4, c->hi.d[0]);
SET32(4, RW(4) + RW(0));
SET64(4, RD(4) & 0xffff);
{ int t = RD(3) == RD(4);  if (t) { POLL(); goto L_002C0068; } }
SET32(3, RW(4) << 1);
wr16(c, (RW(28) + -31400), (u16)RW(4));
SET32(3, RW(3) + RW(4));
SET64(4, (s64)(s32)0x410000);
SET32(5, RW(3) << 1);
SET32(4, RW(4) + 3856);
SET32(3, RW(0) + 256);
SET32(4, RW(4) + RW(5));
wr32(c, (RW(19) + 64), RW(4));
wr16(c, (RW(19) + 0), (u16)RW(3)); goto L_002C045C;
L_002C00BC:;
c->f[12].u = RW(0);
SET64(4, RD(16) + RD(0));
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
SET64(31, 0x2c00f4); c->f[15].u = c->f[12].u; F_0013C6B0(c);
SET32(16, RW(16) + 52);
SET32(2, RW(29) + 220);
SET64(2, RD(16) < RD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C00BC; } }
SET64(31, 0x2c0110); SET32(4, RW(29) + 112); F_003510E0(c);
wr32(c, (RW(29) + 220), RW(0));
SET32(6, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(19) + 64)));
SET64(5, (s64)(s32)0x3f400000);
SET32(2, RW(0) + 999);
SET32(4, RW(0) + 1952);
SET64(3, rd16(c, (RW(3) + 2)));
wr16(c, (RW(29) + 116), (u16)RW(3));
wr16(c, (RW(29) + 118), (u16)RW(6));
wr16(c, (RW(29) + 124), (u16)RW(0));
wr16(c, (RW(29) + 120), (u16)RW(0));
wr16(c, (RW(29) + 122), (u16)RW(0));
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
wr32(c, (RW(29) + 140), RW(0));
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 156), RW(0));
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 164), RW(5));
wr32(c, (RW(29) + 224), RW(0));
SET64(3, (s32)rd32(c, (RW(19) + 64)));
SET64(3, rd16(c, (RW(3) + 4)));
wr16(c, (RW(29) + 168), (u16)RW(3));
wr16(c, (RW(29) + 170), (u16)RW(6));
wr16(c, (RW(29) + 176), (u16)RW(0));
wr16(c, (RW(29) + 172), (u16)RW(6));
wr16(c, (RW(29) + 174), (u16)RW(6));
wr32(c, (RW(29) + 184), RW(0));
wr32(c, (RW(29) + 188), RW(0));
wr32(c, (RW(29) + 192), RW(0));
wr32(c, (RW(29) + 196), RW(0));
wr32(c, (RW(29) + 200), RW(0));
wr32(c, (RW(29) + 204), RW(0));
wr32(c, (RW(29) + 208), RW(0));
wr32(c, (RW(29) + 212), RW(0));
wr32(c, (RW(29) + 216), RW(5));
wr16(c, (RW(29) + 112), (u16)RW(0));
SET64(3, (s32)rd32(c, (RW(19) + 64)));
SET64(3, rd16(c, (RW(3) + 0)));
wr16(c, (RW(29) + 228), (u16)RW(3));
wr16(c, (RW(29) + 230), (u16)RW(2));
wr8(c, (RW(29) + 114), (u8)RW(6));
SET64(31, 0x2c01c8); wr16(c, (RW(29) + 234), (u16)RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C01D8; }
SET64(31, 0x2c01d8); SET64(4, RD(16) + RD(0)); F_002FA470(c);
L_002C01D8:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 112);
SET64(31, 0x2c01e8); wr32(c, (RW(19) + 60), RW(16)); F_002F9E50(c);
SET64(2, (s32)rd32(c, (RW(19) + 60)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 1328), (u8)RW(3));
SET64(5, (s32)rd32(c, (RW(19) + 60)));
SET64(31, 0x2c0200); SET64(4, RD(19) + RD(0)); F_0013A470(c);
SET64(3, rd16(c, (RW(19) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(19) + 0), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(19) + 60)));
L_002C0210:;
SET32(3, RW(0) + 4);
SET64(4, rd16(c, (RW(4) + 0)));
{ int t = RD(4) != RD(3);  if (t) goto L_002C045C; }
SET64(31, 0x2c0228); SET32(4, RW(0) + 12); F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 68), RW(2)); goto L_002C023C; }
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(19) + 68), RW(2));
L_002C023C:;
SET64(2, (s32)rd32(c, (RW(19) + 60)));
SET64(6, (s32)rd32(c, (RW(2) + 652)));
if (RD(6) == RD(0)) { SET64(5, (s32)rd32(c, (RW(2) + 716))); goto L_002C0254; }
SET32(6, RW(6) + 672);
SET64(5, (s32)rd32(c, (RW(2) + 716)));
L_002C0254:;
SET64(31, 0x2c025c); SET64(4, (s32)rd32(c, (RW(19) + 68))); F_002C04F0(c);
SET64(3, rd16(c, (RW(19) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(19) + 0), (u16)RW(3)); goto L_002C045C;
L_002C026C:;
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
if (RD(4) != RD(3)) { SET64(16, (s32)rd32(c, (RW(19) + 68))); goto L_002C0288; }
SET32(3, RW(5) + 1);
wr16(c, (RW(19) + 0), (u16)RW(3));
SET64(16, (s32)rd32(c, (RW(19) + 68)));
L_002C0288:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_002C045C; }
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2c02a4); SET32(4, RW(3) + 192); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c02b8);  rt_call(c, t); }
SET64(2, (s64)(s32)0x42700000);
SET32(4, RW(16) + 8);
c->f[0].u = RW(2);
SET32(5, RW(0) + 1);
c->f[12].f = fpu_div(F(20), F(0));
SET64(31, 0x2c02dc);  F_0030CC50(c);
SET64(2, (s64)(s32)0x3f400000);
SET64(3, (s64)(s32)0x3e800000);
c->f[3].u = RW(2);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
c->f[2].u = RW(3);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(2));
SET32(4, RW(2) + 576);
SET64(31, 0x2c0308); c->f[12].f = fpu(c->facc + F(3) * F(0)); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c031c); SET32(4, RW(2) + 384); rt_call(c, t); }
 goto L_002C045C;
L_002C0324:;
SET64(31, 0x2c032c);  F_002F24D0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C045C; }
SET64(4, (s32)rd32(c, (RW(19) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 60), RW(0)); goto L_002C0354; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c0350); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 60), RW(0));
L_002C0354:;
SET64(3, RD(0) | 0xff00);
wr16(c, (RW(19) + 0), (u16)RW(3)); goto L_002C045C;
L_002C0360:;
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
wr32(c, (RW(3) + 0), RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 396)));
wr32(c, (RW(3) + 0), RW(0));
SET64(3, rd16(c, (RW(19) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(19) + 0), (u16)RW(3));
L_002C0384:;
SET64(16, (s32)rd32(c, (RW(19) + 68)));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_002C03D8; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002C039C:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c03b8);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET32(18, RW(18) + 1); goto L_002C03C8; }
SET64(3, RD(0) + RD(0)); goto L_002C03DC;
L_002C03C8:;
SET64(3, RSD(18) < (s64)2);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002C039C; } }
L_002C03D8:;
SET64(3, RD(0) + (s64)1);
L_002C03DC:;
{ int t = RD(3) == RD(0);  if (t) goto L_002C045C; }
SET64(31, 0x2c03ec); SET64(4, RD(0) + RD(0)); F_00138B20(c);
SET64(31, 0x2c03f4); SET64(4, RD(0) + RD(0)); F_0013C340(c);
SET64(4, (s32)rd32(c, (RW(19) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 60), RW(0)); goto L_002C0414; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c0410); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 60), RW(0));
L_002C0414:;
SET64(16, (s32)rd32(c, (RW(19) + 68)));
if (RD(16) == RD(0)) { SET64(4, RD(19) + RD(0)); goto L_002C0454; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x2c0430); SET32(5, RW(5) + -7552); F_001022C0(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x2c0444); SET32(5, RW(5) + -1840); F_001022C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c0450); wr32(c, (RW(16) + 4), RW(0)); F_001004B0(c);
SET64(4, RD(19) + RD(0));
L_002C0454:;
SET64(31, 0x2c045c); wr32(c, (RW(19) + 68), RW(0)); F_00139AB0(c);
L_002C045C:;
SET64(31, rd64(c, (RW(29) + 96)));
L_002C0460:;
c->f[20].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}
void F_002BFFC0(Ctx *c) { B_002BFFC0(c, 0x2bffc0); }
void F_002C0000(Ctx *c) { B_002BFFC0(c, 0x2c0000); }
void F_002C0008(Ctx *c) { B_002BFFC0(c, 0x2c0008); }
void F_002C0014(Ctx *c) { B_002BFFC0(c, 0x2c0014); }
void F_002C0024(Ctx *c) { B_002BFFC0(c, 0x2c0024); }
void F_002C0028(Ctx *c) { B_002BFFC0(c, 0x2c0028); }
void F_002C002C(Ctx *c) { B_002BFFC0(c, 0x2c002c); }
void F_002C0038(Ctx *c) { B_002BFFC0(c, 0x2c0038); }
void F_002C003C(Ctx *c) { B_002BFFC0(c, 0x2c003c); }
void F_002C0040(Ctx *c) { B_002BFFC0(c, 0x2c0040); }
void F_002C0048(Ctx *c) { B_002BFFC0(c, 0x2c0048); }

void F_002C0480(Ctx *c) { /* func_002C0480 */
ENTER(0x2c0480);
 return;
}

void F_002C0490(Ctx *c) { /* func_002C0490 */
ENTER(0x2c0490);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c04a8); SET64(16, RD(4) + RD(0)); F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -16160);
SET32(2, RW(2) + -16152);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -16140);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 68), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002C04F0(Ctx *c) { /* func_002C04F0 */
ENTER(0x2c04f0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
SET64(22, RD(6) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET32(4, RW(0) + 144);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2c052c); wr32(c, (RW(29) + 0), c->f[20].u); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C0558; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -1728);
SET32(6, RW(6) + -1840);
SET32(7, RW(0) + 64);
SET64(31, 0x2c0554); SET32(8, RW(0) + 2); F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002C0558:;
SET64(31, 0x2c0560); wr32(c, (RW(20) + 4), RW(16)); F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2c056c); SET32(5, RW(0) + 5); F_0022AC70(c);
SET64(4, (s32)rd32(c, (RW(20) + 4)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(17) + RD(0));
SET32(7, RW(0) + -1);
SET64(31, 0x2c0584); SET64(8, RD(0) + RD(0)); F_0014F0A0(c);
SET64(31, 0x2c058c);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2c0598); SET32(5, RW(0) + 6); F_0022AC70(c);
SET64(5, RD(2) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(7, RW(0) + -1);
SET64(8, RD(0) + RD(0));
SET64(31, 0x2c05b4); SET32(4, RW(2) + 64); F_0014F0A0(c);
SET64(31, 0x2c05bc); SET32(4, RW(0) + 784); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C05E8; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -7168);
SET32(6, RW(6) + -7552);
SET32(7, RW(0) + 384);
SET64(31, 0x2c05e4); SET32(8, RW(0) + 2); F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002C05E8:;
SET64(2, (s64)(s32)0x490000);
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(2) + 20536));
wr32(c, (RW(20) + 0), RW(16));
c->f[0].u = RW(3);
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
c->f[20].f = fpu(F(1) - F(0));
SET32(16, RW(28) + -31416);
SET32(21, RW(28) + -31408);
L_002C0614:;
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2c062c);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 4)));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(3, RW(3) + RW(17));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 160), RW(3));
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(2, RW(2) + RW(17));
SET64(2, rd16(c, (RW(2) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C0660; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002C0678;
L_002C0660:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002C0678:;
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 164), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(2, RW(2) + RW(17));
SET64(2, rd16(c, (RW(2) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C06A4; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002C06BC;
L_002C06A4:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002C06BC:;
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 168), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 172), RW(0));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 176), RW(0));
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(2, RW(2) + RW(17));
SET64(2, rd16(c, (RW(2) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C0700; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002C0718;
L_002C0700:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002C0718:;
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 180), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(2, RW(2) + RW(17));
SET64(2, rd16(c, (RW(2) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C0744; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002C075C;
L_002C0744:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002C075C:;
SET64(3, (s64)(s32)0x3f000000);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
c->f[0].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 184), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(2, RW(2) + RW(17));
SET64(2, rd16(c, (RW(2) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C0798; }
c->f[0].u = RW(2);
c->f[3].f = (f32)(s32)c->f[0].u; goto L_002C07B0;
L_002C0798:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[3].f = (f32)(s32)c->f[0].u;
c->f[3].f = fpu(F(3) + F(3));
L_002C07B0:;
c->f[1].u = rd32(c, (RW(16) + 0));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(3, (s64)(s32)0x3f000000);
c->f[0].u = RW(0);
c->f[2].u = RW(3);
SET32(2, RW(2) + RW(18));
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc - F(2) * F(3));
wr32(c, (RW(2) + 32), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(2, RW(2) + RW(17));
SET64(2, rd16(c, (RW(2) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C07F4; }
c->f[0].u = RW(2);
c->f[3].f = (f32)(s32)c->f[0].u; goto L_002C080C;
L_002C07F4:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[3].f = (f32)(s32)c->f[0].u;
c->f[3].f = fpu(F(3) + F(3));
L_002C080C:;
c->f[1].u = rd32(c, (RW(21) + 0));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(3, (s64)(s32)0x3f000000);
c->f[0].u = RW(0);
c->f[2].u = RW(3);
SET32(2, RW(2) + RW(18));
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc - F(2) * F(3));
wr32(c, (RW(2) + 36), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
c->f[12].u = c->f[20].u;
SET64(31, 0x2c0840); SET32(4, RW(2) + RW(18)); F_0014E7A0(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 156), RW(0));
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 148), RW(2));
wr32(c, (RW(29) + 152), RW(2));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
rd128(c, (RW(29) + 144) & ~15u, &c->r[3]);
SET32(2, RW(2) + RW(18));
wr128(c, (RW(2) + 192) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET64(31, 0x2c0870); SET32(4, RW(2) + RW(18)); F_0014E900(c);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c0888);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2c08a0); SET64(5, RD(22) + RD(0)); rt_call(c, t); }
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 384);
SET64(3, RSD(19) < (s64)2);
SET32(17, RW(17) + 64);
SET32(16, RW(16) + 4);
{ int t = RD(3) != RD(0); SET32(21, RW(21) + 4); if (t) { POLL(); goto L_002C0614; } }
wr32(c, (RW(20) + 8), RW(0));
SET64(31, rd64(c, (RW(29) + 128)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 112) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void F_002C08F0(Ctx *c) { /* func_002C08F0 */
ENTER(0x2c08f0);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 10216); return;
}

void F_002C0900(Ctx *c) { /* func_002C0900 */
ENTER(0x2c0900);
 return;
}

void F_002C0910(Ctx *c) { /* func_002C0910 */
ENTER(0x2c0910);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_002C09D8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16160);
SET32(3, RW(3) + -16152);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -16140);
wr32(c, (RW(16) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 60), RW(0)); goto L_002C0974; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c0970); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 60), RW(0));
L_002C0974:;
SET64(17, (s32)rd32(c, (RW(16) + 68)));
if (RD(17) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002C09B4; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x2c0990); SET32(5, RW(5) + -7552); F_001022C0(c);
wr32(c, (RW(17) + 0), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2c09a4); SET32(5, RW(5) + -1840); F_001022C0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c09b0); wr32(c, (RW(17) + 4), RW(0)); F_001004B0(c);
SET64(4, RD(16) + RD(0));
L_002C09B4:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c09c0); wr32(c, (RW(16) + 68), RW(0)); F_00139F30(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(16) + RD(0)); goto L_002C09DC; }
SET64(31, 0x2c09d8); SET64(4, RD(16) + RD(0)); F_001004B0(c);
L_002C09D8:;
SET64(2, RD(16) + RD(0));
L_002C09DC:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002C0A00(Ctx *c) { /* func_002C0A00 */
ENTER(0x2c0a00);
SET32(4, RW(4) + -4); { F_002C0910(c); return; }
}

void F_002C0A10(Ctx *c) { /* func_002C0A10 */
ENTER(0x2c0a10);
SET32(4, RW(4) + -24); { F_002C0910(c); return; }
}

void F_002C0A20(Ctx *c) { /* func_002C0A20 */
ENTER(0x2c0a20);
SET32(4, RW(4) + -4); { F_002BFAE0(c); return; }
}

void F_002C0A30(Ctx *c) { /* func_002C0A30 */
ENTER(0x2c0a30);
SET32(4, RW(4) + -24); { F_002BFAE0(c); return; }
}

void F_002C0A40(Ctx *c) { /* func_002C0A40 */
ENTER(0x2c0a40);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 10224); return;
}

void F_002C0A50(Ctx *c) { /* func_002C0A50 */
ENTER(0x2c0a50);
 return;
}

void F_002C0A60(Ctx *c) { /* func_002C0A60 */
ENTER(0x2c0a60);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c0a80); SET64(16, RD(4) + RD(0)); F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c0a8c); SET32(5, RW(0) + -1); F_0013DFC0(c);
SET64(31, 0x2c0a94); SET64(18, RD(2) & 0xffff); F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c0aa0); SET32(5, RW(0) + -1); F_0013E020(c);
SET64(4, (s32)rd32(c, (RW(16) + 108)));
{ int t = RD(4) == RD(0); SET64(17, RD(2) & 0xffff); if (t) goto L_002C0AB8; }
SET64(2, (s64)(s32)0x520000);
SET64(31, 0x2c0ab8); c->f[12].u = rd32(c, (RW(2) + 14864)); F_00172DE0(c);
L_002C0AB8:;
SET64(4, rd16(c, (RW(16) + 0)));
SET32(3, RW(0) + 1000);
if (RD(4) == RD(3)) { SET64(19, RD(0) + (s64)1); goto L_002C0E5C; }
SET32(3, RW(0) + 101);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 108))); goto L_002C0DC8; }
SET32(3, RW(0) + 100);
{ int t = RD(4) == RD(3);  if (t) goto L_002C0D90; }
SET32(3, RW(0) + 20);
if (RD(4) == RD(3)) { SET64(3, RD(18) & 0xffff); goto L_002C0B4C; }
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 108))); goto L_002C0B1C; }
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002C0B08; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002C0F04;
L_002C0B08:;
SET64(31, 0x2c0b10);  F_002C17E0(c);
SET32(3, RW(0) + 10);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C0F00;
L_002C0B1C:;
SET64(31, 0x2c0b24);  F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C0F00; }
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(25, (s32)rd32(c, (RW(4) + 388)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c0b40);  rt_call(c, t); }
SET32(3, RW(0) + 20);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C0F00;
L_002C0B4C:;
SET64(2, RD(3) & 0x10);
if (RD(2) == RD(0)) { SET64(2, RD(3) & 0x40); goto L_002C0B6C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c0b64); SET64(5, RD(0) + RD(0)); F_002C0F20(c);
 goto L_002C0B80;
L_002C0B6C:;
{ int t = RD(2) == RD(0);  if (t) goto L_002C0B80; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c0b80); SET32(5, RW(0) + 1); F_002C0F20(c);
L_002C0B80:;
SET64(2, (s64)(s32)0x520000);
SET64(3, (s64)(s32)0x41180000);
c->f[0].u = rd32(c, (RW(2) + 14820));
c->f[1].u = RW(3);
SET64(3, (s64)(s32)0x40490000);
c->f[0].f = fpu(F(1) * F(0));
SET64(2, RD(3) | 0xfdb);
c->f[3].u = RW(2);
c->f[0].f = fpu(F(3) * F(0));
SET64(2, (s64)(s32)0x43340000);
c->f[2].u = RW(2);
c->f[1].f = fpu_div(F(0), F(2));
c->f[0].u = rd32(c, (RW(16) + 68));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(16) + 68), c->f[0].u);
c->f[1].u = rd32(c, (RW(28) + -31396));
c->f[0].u = rd32(c, (RW(16) + 68));
c->f[1].f = fpu(F(3) * F(1));
c->f[1].f = fpu_div(F(1), F(2));
c->fcc = F(0) < F(1);
if (c->fcc) { c->f[12].u = rd32(c, (RW(16) + 68)); goto L_002C0BF4; }
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(16) + 68), c->f[0].u);
c->f[12].u = rd32(c, (RW(16) + 68));
L_002C0BF4:;
SET64(31, 0x2c0bfc);  F_0011F6F0(c);
SET64(2, (s32)rd32(c, (RW(16) + 100)));
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(16) + 72)));
SET64(8, RD(0) + RD(0));
SET32(3, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
L_002C0C14:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C0C24; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C0C24:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C0C40; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C0C44; }
SET32(2, RW(2) + -8);
L_002C0C40:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C0C44:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C0C58; }
SET32(7, RW(7) + 1);
L_002C0C58:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C0C68; }
SET32(2, RW(8) << 1); goto L_002C0C7C;
L_002C0C68:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C0C14; } }
SET32(8, RW(0) + -1);
SET32(2, RW(8) << 1);
L_002C0C7C:;
SET64(3, (s64)(s32)0x41000000);
SET32(4, RW(2) + RW(8));
c->f[2].u = rd32(c, (RW(16) + 64));
SET64(2, (s32)rd32(c, (RW(16) + 92)));
c->f[1].u = RW(0);
SET32(4, RW(4) << 7);
c->f[3].u = RW(3);
c->facc = fpu(F(1) + F(2));
SET32(2, RW(2) + RW(4));
c->f[0].f = fpu(c->facc + F(3) * F(0));
wr32(c, (RW(2) + 36), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 92)));
SET32(4, RW(2) + RW(4));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c0cc4);  rt_call(c, t); }
SET64(3, RD(17) & 0xffff);
SET64(3, RD(3) & 0x4000);
{ int t = RD(3) == RD(0);  if (t) goto L_002C0F00; }
SET64(31, 0x2c0cdc);  F_00139590(c);
SET64(31, 0x2c0ce4);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 127);
SET64(31, 0x2c0cf8); SET32(7, RW(0) + 64); F_001B5FF0(c);
SET64(2, (s32)rd32(c, (RW(16) + 100)));
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(16) + 72)));
SET64(8, RD(0) + RD(0));
SET32(3, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
L_002C0D10:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C0D20; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C0D20:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C0D3C; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C0D40; }
SET32(2, RW(2) + -8);
L_002C0D3C:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C0D40:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C0D58; }
SET32(7, RW(7) + 1);
L_002C0D58:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C0D68; }
SET64(4, RD(8) & 0xffff); goto L_002C0D7C;
L_002C0D68:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C0D10; } }
SET32(8, RW(0) + -1);
SET64(4, RD(8) & 0xffff);
L_002C0D7C:;
SET64(31, 0x2c0d84);  F_0023FC00(c);
SET32(3, RW(0) + 100);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C0F00;
L_002C0D90:;
SET64(31, 0x2c0d98);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_002C0DA8; }
SET32(5, RW(5) + 672);
L_002C0DA8:;
SET64(2, (s64)(s32)0x490000);
c->f[12].u = rd32(c, (RW(2) + 20544));
SET64(31, 0x2c0db8); SET64(4, (s32)rd32(c, (RW(16) + 108))); F_00173230(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C0F00;
L_002C0DC8:;
SET64(31, 0x2c0dd0);  F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C0F00; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002C0DE0:;
SET64(2, (s32)rd32(c, (RW(16) + 92)));
SET32(2, RW(2) + RW(17));
SET64(31, 0x2c0df0); SET64(4, (s32)rd32(c, (RW(2) + 12))); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002C0E18; }
SET64(2, (s32)rd32(c, (RW(16) + 92)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c0e14);  rt_call(c, t); }
L_002C0E18:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)29);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002C0DE0; } }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c0e3c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(25, (s32)rd32(c, (RW(4) + 388)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c0e50);  rt_call(c, t); }
SET32(3, RW(0) + 1000);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C0F00;
L_002C0E5C:;
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002C0E64:;
SET64(2, (s32)rd32(c, (RW(16) + 92)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c0e80);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002C0E90; }
SET64(19, RD(0) + RD(0));
L_002C0E90:;
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < (s64)29);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002C0E64; } }
{ int t = RD(19) == RD(0);  if (t) goto L_002C0F00; }
SET64(2, (s32)rd32(c, (RW(16) + 96)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c0ec0);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C0F00; }
SET64(2, (s32)rd32(c, (RW(16) + 108)));
SET64(4, (s32)rd32(c, (RW(2) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c0ee0);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C0F00; }
SET64(31, 0x2c0ef0); SET64(4, RD(16) + RD(0)); F_002C1E00(c);
SET64(31, 0x2c0ef8); SET64(4, RD(16) + RD(0)); F_00139AB0(c);
SET64(3, RD(0) | 0xffff);
wr16(c, (RW(16) + 0), (u16)RW(3));
L_002C0F00:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002C0F04:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002C0F20(Ctx *c) { /* func_002C0F20 */
ENTER(0x2c0f20);
SET32(29, RW(29) + -48);
SET32(7, RW(0) + -1);
wr64(c, (RW(29) + 32), RD(31));
SET64(8, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 100)));
SET64(16, RD(5) + RD(0));
c->f[0].u = rd32(c, (RW(4) + 64));
SET64(6, (s32)rd32(c, (RW(4) + 72)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(0) + 1);
L_002C0F54:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C0F64; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C0F64:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C0F80; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C0F84; }
SET32(2, RW(2) + -8);
L_002C0F80:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C0F84:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C0F98; }
SET32(7, RW(7) + 1);
L_002C0F98:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C0FA8; }
SET32(3, RW(8) << 1); goto L_002C0FBC;
L_002C0FA8:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C0F54; } }
SET32(8, RW(0) + -1);
SET32(3, RW(8) << 1);
L_002C0FBC:;
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET32(3, RW(3) + RW(8));
SET32(7, RW(0) + -1);
SET32(3, RW(3) << 7);
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(2) + 36), c->f[0].u);
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(17) + 100)));
SET64(6, (s32)rd32(c, (RW(17) + 72)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
L_002C0FE8:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C0FF8; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C0FF8:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C1014; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C1018; }
SET32(2, RW(2) + -8);
L_002C1014:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C1018:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C1030; }
SET32(7, RW(7) + 1);
L_002C1030:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C1040; }
SET32(3, RW(8) << 1); goto L_002C1054;
L_002C1040:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C0FE8; } }
SET32(8, RW(0) + -1);
SET32(3, RW(8) << 1);
L_002C1054:;
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET32(3, RW(3) + RW(8));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c1074);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 100)));
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(17) + 72)));
SET64(8, RD(0) + RD(0));
SET32(3, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
L_002C108C:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C109C; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C109C:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C10B8; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C10BC; }
SET32(2, RW(2) + -8);
L_002C10B8:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C10BC:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C10D0; }
SET32(7, RW(7) + 1);
L_002C10D0:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C10E0; }
SET32(4, RW(8) + 7); goto L_002C10F4;
L_002C10E0:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C108C; } }
SET32(8, RW(0) + -1);
SET32(4, RW(8) + 7);
L_002C10F4:;
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c1118);  rt_call(c, t); }
if (RD(16) != RD(0)) { SET32(2, RW(0) + 1); goto L_002C1158; }
SET64(4, (s32)rd32(c, (RW(17) + 100)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(4) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002C1154; }
SET64(2, rd8(c, (RW(4) + 12)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C1150; }
SET64(3, (s32)rd32(c, (RW(4) + 8)));
L_002C1150:;
wr32(c, (RW(4) + 0), RW(3));
L_002C1154:;
SET32(2, RW(0) + 1);
L_002C1158:;
if (RD(16) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 100))); goto L_002C1198; }
SET64(4, (s32)rd32(c, (RW(17) + 100)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(4) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
SET64(1, RSD(3) < RSD(2));
{ int t = RD(1) == RD(0);  if (t) goto L_002C1194; }
SET64(2, rd8(c, (RW(4) + 12)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C1190; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
L_002C1190:;
wr32(c, (RW(4) + 0), RW(3));
L_002C1194:;
SET64(2, (s32)rd32(c, (RW(17) + 100)));
L_002C1198:;
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(17) + 72)));
SET64(8, RD(0) + RD(0));
SET32(3, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
L_002C11AC:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C11BC; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C11BC:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C11D8; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C11DC; }
SET32(2, RW(2) + -8);
L_002C11D8:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C11DC:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C11F0; }
SET32(7, RW(7) + 1);
L_002C11F0:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C1200; }
SET32(4, RW(8) + 7); goto L_002C1214;
L_002C1200:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C11AC; } }
SET32(8, RW(0) + -1);
SET32(4, RW(8) + 7);
L_002C1214:;
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c1238);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 100)));
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(17) + 72)));
SET64(8, RD(0) + RD(0));
SET32(3, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
L_002C1250:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C1260; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C1260:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C127C; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C1280; }
SET32(2, RW(2) + -8);
L_002C127C:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C1280:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C1298; }
SET32(7, RW(7) + 1);
L_002C1298:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C12A8; }
SET32(3, RW(8) << 1); goto L_002C12BC;
L_002C12A8:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C1250; } }
SET32(8, RW(0) + -1);
SET32(3, RW(8) << 1);
L_002C12BC:;
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET32(3, RW(3) + RW(8));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
c->f[0].u = rd32(c, (RW(2) + 36));
wr32(c, (RW(17) + 64), c->f[0].u);
SET64(31, 0x2c12dc); wr32(c, (RW(17) + 68), RW(0)); F_00139590(c);
SET64(31, 0x2c12e4);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 127);
SET64(31, 0x2c12f8); SET32(7, RW(0) + 64); F_001B5FF0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C1310(Ctx *c) { /* func_002C1310 */
ENTER(0x2c1310);
SET32(29, RW(29) + -96);
SET32(7, RW(0) + -1);
wr64(c, (RW(29) + 80), RD(31));
SET64(8, RD(0) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(4) + 100)));
SET64(6, (s32)rd32(c, (RW(4) + 72)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET32(3, RW(0) + 1);
L_002C1350:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C1360; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C1360:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C137C; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C1380; }
SET32(2, RW(2) + -8);
L_002C137C:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C1380:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C1398; }
SET32(7, RW(7) + 1);
L_002C1398:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C13A8; }
SET32(4, RW(8) + 7); goto L_002C13BC;
L_002C13A8:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C1350; } }
SET32(8, RW(0) + -1);
SET32(4, RW(8) + 7);
L_002C13BC:;
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c13e0);  rt_call(c, t); }
if (RD(16) != RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 72))); goto L_002C13FC; }
SET64(3, (s32)rd32(c, (RW(19) + 72)));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfe);
wr8(c, (RW(3) + 0), (u8)RW(2)); goto L_002C1408;
L_002C13FC:;
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x1);
wr8(c, (RW(3) + 0), (u8)RW(2));
L_002C1408:;
SET64(2, (s32)rd32(c, (RW(19) + 88)));
SET64(2, rd16(c, (RW(2) + 502)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C1424; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002C143C;
L_002C1424:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002C143C:;
SET64(2, (s64)(s32)0x41400000);
SET64(5, (s32)rd32(c, (RW(19) + 72)));
c->f[0].u = RW(2);
SET64(16, RD(0) + RD(0));
c->f[20].f = fpu(F(0) + F(1));
SET64(6, RD(0) + RD(0));
SET32(3, RW(0) + 1);
L_002C1458:;
{ int t = RSD(6) >= 0; SET32(2, RSW(6) >> 3); if (t) goto L_002C1468; }
SET32(2, RW(6) + 7);
SET32(2, RSW(2) >> 3);
L_002C1468:;
SET32(4, RW(5) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(6) >= 0; SET64(2, RD(6) & 0x7); if (t) goto L_002C1484; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C1488; }
SET32(2, RW(2) + -8);
L_002C1484:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C1488:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(3);  if (t) goto L_002C14A0; }
SET32(16, RW(16) + 1);
L_002C14A0:;
SET32(6, RW(6) + 1);
SET64(2, RD(6) < (u64)(s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C1458; } }
SET64(31, 0x2c14b8);  F_002BF940(c);
SET64(2, (s64)(s32)0x42000000);
SET64(18, RD(0) + RD(0));
c->f[2].u = RW(2);
SET64(17, RD(0) + RD(0));
c->f[2].f = fpu(F(2) + F(20));
c->f[2].f = fpu(F(0) - F(2));
c->f[1].u = RW(16);
c->f[0].f = (f32)(s32)c->f[1].u;
SET64(16, RD(0) + RD(0));
c->f[21].f = fpu_div(F(2), F(0));
L_002C14E4:;
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c14fc);  rt_call(c, t); }
{ int t = RSD(18) >= 0; SET32(4, RSW(18) >> 3); if (t) goto L_002C150C; }
SET32(2, RW(18) + 7);
SET32(4, RSW(2) >> 3);
L_002C150C:;
SET64(2, (s32)rd32(c, (RW(19) + 72)));
SET32(2, RW(2) + RW(4));
SET64(4, rd8(c, (RW(2) + 0)));
{ int t = RSD(18) >= 0; SET64(3, RD(18) & 0x7); if (t) goto L_002C152C; }
if (RD(3) == RD(0)) { SET32(2, RW(0) + 1); goto L_002C1530; }
SET32(3, RW(3) + -8);
L_002C152C:;
SET32(2, RW(0) + 1);
L_002C1530:;
SET32(2, RW(2) << (RW(3) & 31));
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C15E0; }
SET64(2, (s32)rd32(c, (RW(19) + 88)));
SET64(2, rd16(c, (RW(2) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C1560; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002C1578;
L_002C1560:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002C1578:;
c->f[3].f = fpu(F(21) - F(0));
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET64(3, (s64)(s32)0x3f000000);
SET32(2, RW(2) + RW(16));
c->f[0].u = RW(17);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(20));
c->f[2].u = RW(3);
c->facc = fpu(c->facc + F(21) * F(1));
c->f[0].f = fpu(c->facc + F(2) * F(3));
wr32(c, (RW(2) + 36), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c15c8); SET32(17, RW(17) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c15e0);  rt_call(c, t); }
L_002C15E0:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)7);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_002C14E4; } }
SET64(5, (s32)rd32(c, (RW(19) + 72)));
SET64(7, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET32(3, RW(0) + 1);
L_002C1600:;
{ int t = RSD(6) >= 0; SET32(2, RSW(6) >> 3); if (t) goto L_002C1610; }
SET32(2, RW(6) + 7);
SET32(2, RSW(2) >> 3);
L_002C1610:;
SET32(4, RW(5) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(6) >= 0; SET64(2, RD(6) & 0x7); if (t) goto L_002C162C; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C1630; }
SET32(2, RW(2) + -8);
L_002C162C:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C1630:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(3);  if (t) goto L_002C1648; }
SET32(7, RW(7) + 1);
L_002C1648:;
SET32(6, RW(6) + 1);
SET64(2, RD(6) < (u64)(s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C1600; } }
SET64(3, (s32)rd32(c, (RW(19) + 100)));
SET32(2, RW(7) + -1);
SET32(7, RW(0) + -1);
SET64(8, RD(0) + RD(0));
wr32(c, (RW(3) + 4), RW(0));
wr32(c, (RW(3) + 8), RW(2));
wr32(c, (RW(3) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(19) + 100)));
SET32(3, RW(0) + 1);
SET64(6, (s32)rd32(c, (RW(19) + 72)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
L_002C1684:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C1694; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C1694:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C16B0; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C16B4; }
SET32(2, RW(2) + -8);
L_002C16B0:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C16B4:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C16C8; }
SET32(7, RW(7) + 1);
L_002C16C8:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C16D8; }
SET32(4, RW(8) + 7); goto L_002C16EC;
L_002C16D8:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C1684; } }
SET32(8, RW(0) + -1);
SET32(4, RW(8) + 7);
L_002C16EC:;
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c1710);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 100)));
SET32(8, RW(0) + -1);
SET64(7, (s32)rd32(c, (RW(19) + 72)));
SET64(9, RD(0) + RD(0));
SET32(4, RW(0) + 1);
SET64(6, (s32)rd32(c, (RW(3) + 0)));
L_002C1728:;
{ int t = RSD(9) >= 0; SET32(3, RSW(9) >> 3); if (t) goto L_002C1738; }
SET32(3, RW(9) + 7);
SET32(3, RSW(3) >> 3);
L_002C1738:;
SET32(5, RW(7) + RW(3));
SET64(5, rd8(c, (RW(5) + 0)));
{ int t = RSD(9) >= 0; SET64(3, RD(9) & 0x7); if (t) goto L_002C1754; }
if (RD(3) == RD(0)) { SET32(3, RW(4) << (RW(3) & 31)); goto L_002C1758; }
SET32(3, RW(3) + -8);
L_002C1754:;
SET32(3, RW(4) << (RW(3) & 31));
L_002C1758:;
SET64(3, RD(5) & RD(3));
SET64(3, RD(0) < RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_002C1770; }
SET32(8, RW(8) + 1);
L_002C1770:;
if (RD(8) != RD(6)) { SET32(9, RW(9) + 1); goto L_002C1780; }
SET32(4, RW(9) << 1); goto L_002C1794;
L_002C1780:;
SET64(3, RSD(9) < (s64)7);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002C1728; } }
SET32(9, RW(0) + -1);
SET32(4, RW(9) << 1);
L_002C1794:;
SET64(3, (s32)rd32(c, (RW(19) + 92)));
SET32(4, RW(4) + RW(9));
SET32(4, RW(4) << 7);
SET32(3, RW(3) + RW(4));
c->f[0].u = rd32(c, (RW(3) + 36));
wr32(c, (RW(19) + 64), c->f[0].u);
wr32(c, (RW(19) + 68), RW(0));
SET64(31, rd64(c, (RW(29) + 80)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002C17E0(Ctx *c) { /* func_002C17E0 */
ENTER(0x2c17e0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET32(4, RW(0) + 1);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(31, 0x2c1814); wr32(c, (RW(29) + 0), c->f[20].u); F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(21) + 72), RW(2)); goto L_002C1824; }
wr8(c, (RW(2) + 0), (u8)RW(0));
wr32(c, (RW(21) + 72), RW(2));
L_002C1824:;
SET32(4, RW(0) + 16);
wr8(c, (RW(2) + 0), (u8)RW(0));
SET64(3, (s32)rd32(c, (RW(21) + 72)));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x1);
wr8(c, (RW(3) + 0), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(21) + 72)));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x2);
wr8(c, (RW(3) + 0), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(21) + 72)));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x4);
wr8(c, (RW(3) + 0), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(21) + 72)));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x8);
wr8(c, (RW(3) + 0), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(21) + 72)));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x10);
wr8(c, (RW(3) + 0), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(21) + 72)));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x20);
wr8(c, (RW(3) + 0), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(21) + 72)));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x40);
wr8(c, (RW(3) + 0), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(21) + 72)));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xef);
wr8(c, (RW(3) + 0), (u8)RW(2));
SET64(3, (s32)rd32(c, (RW(21) + 72)));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfd);
SET64(31, 0x2c18c0); wr8(c, (RW(3) + 0), (u8)RW(2)); F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(21) + 100), RW(2)); goto L_002C18E0; }
wr32(c, (RW(2) + 4), RW(0));
SET32(3, RW(0) + 1);
wr32(c, (RW(2) + 8), RW(3));
wr32(c, (RW(2) + 0), RW(0));
wr8(c, (RW(2) + 12), (u8)RW(0));
wr32(c, (RW(21) + 100), RW(2));
L_002C18E0:;
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 12), (u8)RW(3));
SET64(31, 0x2c18f0); SET32(4, RW(0) + 400); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C1958; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x3f800000);
SET32(3, RW(3) + -22096);
SET32(4, RW(16) + 64);
wr32(c, (RW(16) + 388), RW(3));
SET32(5, RW(0) + 1);
wr32(c, (RW(16) + 16), RW(0));
wr32(c, (RW(16) + 20), RW(0));
wr32(c, (RW(16) + 24), RW(0));
wr32(c, (RW(16) + 28), RW(2));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 44), RW(2));
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 52), RW(0));
wr32(c, (RW(16) + 56), RW(0));
SET64(31, 0x2c1944); wr32(c, (RW(16) + 60), RW(2)); F_0014CFE0(c);
wr32(c, (RW(16) + 368), RW(0));
wr32(c, (RW(16) + 372), RW(0));
wr32(c, (RW(16) + 376), RW(0));
wr32(c, (RW(16) + 380), RW(0));
wr8(c, (RW(16) + 384), (u8)RW(0));
L_002C1958:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c1964); wr32(c, (RW(21) + 108), RW(16)); F_00173380(c);
SET64(31, 0x2c196c);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_002C197C; }
SET32(5, RW(5) + 672);
L_002C197C:;
SET64(2, (s64)(s32)0x490000);
c->f[12].u = rd32(c, (RW(2) + 20544));
SET64(31, 0x2c198c); SET64(4, (s32)rd32(c, (RW(21) + 108))); F_00173310(c);
SET64(31, 0x2c1994); SET32(4, RW(0) + 304); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C19A8; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c19a8); SET32(5, RW(0) + 1); F_0014CFE0(c);
L_002C19A8:;
wr32(c, (RW(21) + 96), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2c19bc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(21) + 96)));
c->f[12].u = RW(0);
wr32(c, (RW(2) + 32), RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 96)));
wr32(c, (RW(2) + 36), RW(0));
SET64(31, 0x2c19d8); SET64(4, (s32)rd32(c, (RW(21) + 96))); F_0014E7A0(c);
SET64(3, (s32)rd32(c, (RW(21) + 96)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2c19ec); SET32(4, RW(3) + 256); F_00162D00(c);
SET64(3, (s32)rd32(c, (RW(21) + 96)));
SET64(2, (s64)(s32)0x3ef00000);
SET64(2, RD(2) | 0xa3d7);
c->f[12].u = RW(2);
SET64(31, 0x2c1a04); SET32(4, RW(3) + 256); F_00162CF0(c);
SET64(3, (s32)rd32(c, (RW(21) + 96)));
SET64(2, (s64)(s32)0x3ef00000);
SET64(2, RD(2) | 0xa3d7);
c->f[12].u = RW(2);
SET64(31, 0x2c1a1c); SET32(4, RW(3) + 256); F_00162CE0(c);
SET64(3, (s32)rd32(c, (RW(21) + 96)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2c1a30); SET32(4, RW(3) + 256); F_00162CD0(c);
SET64(31, 0x2c1a38);  F_002BF950(c);
SET64(2, (s32)rd32(c, (RW(21) + 96)));
SET64(31, 0x2c1a44); wr32(c, (RW(2) + 240), c->f[0].u); F_002BF940(c);
SET64(2, (s32)rd32(c, (RW(21) + 96)));
wr32(c, (RW(2) + 244), c->f[0].u);
SET64(31, 0x2c1a54); SET64(4, (s32)rd32(c, (RW(21) + 96))); F_0014E900(c);
SET64(4, (s32)rd32(c, (RW(21) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c1a68);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(21) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c1a7c);  rt_call(c, t); }
SET64(31, 0x2c1a84); SET32(4, RW(0) + 32); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C1A94; }
SET64(31, 0x2c1a94); SET64(4, RD(16) + RD(0)); F_0014FE60(c);
L_002C1A94:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 352);
SET32(6, RW(0) + 64);
SET64(7, RD(0) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2c1ab0); wr32(c, (RW(21) + 84), RW(16)); F_0014FCE0(c);
SET64(31, 0x2c1ab8); SET32(4, RW(0) + 36); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002C1AE8; }
SET64(31, 0x2c1ac8); SET64(4, RD(20) + RD(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(20) + 16), RW(2));
wr32(c, (RW(20) + 20), RW(0));
wr32(c, (RW(20) + 24), RW(0));
wr32(c, (RW(20) + 28), RW(0));
wr16(c, (RW(20) + 32), (u16)RW(0));
wr16(c, (RW(20) + 34), (u16)RW(0));
L_002C1AE8:;
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c1afc); SET32(5, RW(0) + 12623); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2c1b0c); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(31, 0x2c1b14); SET64(4, RD(2) + RD(0)); F_00100530(c);
wr32(c, (RW(21) + 80), RW(2));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(4, RD(20) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2c1b34); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
L_002C1B34:;
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c1b44); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C1B34; } }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c1b5c); SET64(5, RD(0) + RD(0)); F_001569F0(c);
SET64(31, 0x2c1b64); SET32(4, RW(0) + 1872); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C1B90; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -1728);
SET32(6, RW(6) + -1840);
SET32(7, RW(0) + 64);
SET64(31, 0x2c1b8c); SET32(8, RW(0) + 29); F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002C1B90:;
SET32(4, RW(0) + 11152);
SET64(31, 0x2c1b9c); wr32(c, (RW(21) + 88), RW(16)); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C1BC8; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -7168);
SET32(6, RW(6) + -7552);
SET32(7, RW(0) + 384);
SET64(31, 0x2c1bc4); SET32(8, RW(0) + 29); F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002C1BC8:;
wr32(c, (RW(21) + 92), RW(16));
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_002C1BDC:;
SET64(3, (s32)rd32(c, (RW(20) + 20)));
SET64(7, RD(19) + RD(0));
SET64(4, (s32)rd32(c, (RW(21) + 88)));
SET64(8, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(20) + 24)));
SET32(3, RW(3) + RW(18));
SET64(6, (s32)rd32(c, (RW(21) + 84)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) + RW(17));
SET64(31, 0x2c1c08); SET32(5, RW(2) + RW(3)); F_0014F2D0(c);
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2c1c20);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(21) + 88)));
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(3, RW(3) + RW(17));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 160), RW(3));
SET64(2, (s32)rd32(c, (RW(21) + 88)));
SET32(4, RW(2) + RW(17));
SET64(2, rd16(c, (RW(4) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C1C54; }
c->f[0].u = RW(2);
c->f[21].f = (f32)(s32)c->f[0].u; goto L_002C1C6C;
L_002C1C54:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[21].f = (f32)(s32)c->f[0].u;
c->f[21].f = fpu(F(21) + F(21));
L_002C1C6C:;
SET64(2, rd16(c, (RW(4) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C1C84; }
c->f[0].u = RW(2);
c->f[20].f = (f32)(s32)c->f[0].u; goto L_002C1C9C;
L_002C1C84:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[20].f = (f32)(s32)c->f[0].u;
c->f[20].f = fpu(F(20) + F(20));
L_002C1C9C:;
SET64(31, 0x2c1ca4);  F_002BF950(c);
c->f[1].f = fpu(F(0) - F(21));
SET64(5, (s64)(s32)0x3f000000);
SET64(4, (s32)rd32(c, (RW(21) + 92)));
SET64(2, (s64)(s32)0x41200000);
SET64(3, (s64)(s32)0x40c00000);
c->f[0].u = RW(5);
SET32(4, RW(4) + RW(16));
c->f[0].f = fpu(F(0) * F(1));
wr32(c, (RW(4) + 32), c->f[0].u);
c->f[12].u = RW(2);
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 36), RW(3));
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET64(31, 0x2c1ce4); SET32(4, RW(2) + RW(16)); F_0014E7A0(c);
SET64(3, (s32)rd32(c, (RW(21) + 92)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(16));
SET64(31, 0x2c1cfc); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(3, (s32)rd32(c, (RW(21) + 92)));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(21) - F(0));
SET32(2, RW(3) + RW(16));
wr32(c, (RW(2) + 164), c->f[21].u);
SET64(2, (s32)rd32(c, (RW(21) + 92)));
c->f[0].f = fpu(F(20) - F(0));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 168), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 172), RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 176), RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 180), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 184), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET64(31, 0x2c1d64); SET32(4, RW(2) + RW(16)); F_0014E900(c);
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c1d7c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c1d94);  rt_call(c, t); }
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 4);
SET64(2, RSD(19) < (s64)29);
SET32(17, RW(17) + 64);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_002C1BDC; } }
SET64(4, RD(21) + RD(0));
SET64(31, 0x2c1db8); SET64(5, RD(0) + RD(0)); F_002C1310(c);
if (RD(20) == RD(0)) { SET64(31, rd64(c, (RW(29) + 112))); goto L_002C1DD8; }
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c1dd4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 112)));
L_002C1DD8:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_002C1E00(Ctx *c) { /* func_002C1E00 */
ENTER(0x2c1e00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2c1e1c); SET64(4, (s32)rd32(c, (RW(4) + 80))); F_001004B0(c);
wr32(c, (RW(17) + 80), RW(0));
SET64(31, 0x2c1e28); SET64(4, (s32)rd32(c, (RW(17) + 100))); F_001004B0(c);
wr32(c, (RW(17) + 100), RW(0));
SET64(31, 0x2c1e34); SET64(4, (s32)rd32(c, (RW(17) + 104))); F_001004B0(c);
wr32(c, (RW(17) + 104), RW(0));
SET64(31, 0x2c1e40); SET64(4, (s32)rd32(c, (RW(17) + 72))); F_001004B0(c);
wr32(c, (RW(17) + 72), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 96), RW(0)); goto L_002C1E64; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c1e60); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
L_002C1E64:;
SET64(16, (s32)rd32(c, (RW(17) + 108)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 108), RW(0)); goto L_002C1EA8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22096);
wr32(c, (RW(16) + 388), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c1e8c); SET32(4, RW(16) + 64); rt_call(c, t); }
SET32(4, RW(16) + 64);
SET32(5, RW(0) + -1);
SET64(31, 0x2c1e9c); wr8(c, (RW(16) + 384), (u8)RW(0)); F_0014CEA0(c);
SET64(31, 0x2c1ea4); SET64(4, RD(16) + RD(0)); F_001004B0(c);
wr32(c, (RW(17) + 108), RW(0));
L_002C1EA8:;
SET64(31, 0x2c1eb0); SET64(4, (s32)rd32(c, (RW(17) + 76))); F_001004B0(c);
wr32(c, (RW(17) + 76), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 92)));
SET64(31, 0x2c1ec4); SET32(5, RW(5) + -7552); F_001022C0(c);
wr32(c, (RW(17) + 92), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 88)));
SET64(31, 0x2c1ed8); SET32(5, RW(5) + -1840); F_001022C0(c);
wr32(c, (RW(17) + 88), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 84)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 84), RW(0)); goto L_002C1EFC; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c1ef8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 84), RW(0));
L_002C1EFC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C1F10(Ctx *c) { /* func_002C1F10 */
ENTER(0x2c1f10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C1F78; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16080);
SET32(3, RW(3) + -16072);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -16060);
SET64(31, 0x2c1f54); wr32(c, (RW(17) + 36), RW(2)); F_002C1E00(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c1f60); SET64(5, RD(0) + RD(0)); F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C1F7C; }
SET64(31, 0x2c1f78); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002C1F78:;
SET64(2, RD(17) + RD(0));
L_002C1F7C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C1F90(Ctx *c) { /* func_002C1F90 */
ENTER(0x2c1f90);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c1fa8); SET64(16, RD(4) + RD(0)); F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -16080);
SET32(2, RW(2) + -16072);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -16060);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 36), RW(3));
wr8(c, (RW(16) + 60), (u8)RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 80), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 92), RW(0));
wr32(c, (RW(16) + 96), RW(0));
wr32(c, (RW(16) + 100), RW(0));
wr32(c, (RW(16) + 104), RW(0));
wr32(c, (RW(16) + 108), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 64), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002C2020(Ctx *c) { /* func_002C2020 */
ENTER(0x2c2020);
SET32(4, RW(4) + -4); { F_002C1F10(c); return; }
}

void F_002C2030(Ctx *c) { /* func_002C2030 */
ENTER(0x2c2030);
SET32(4, RW(4) + -24); { F_002C1F10(c); return; }
}

void F_002C2040(Ctx *c) { /* func_002C2040 */
ENTER(0x2c2040);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C2090; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -16000);
SET64(31, 0x2c206c); wr32(c, (RW(17) + 4), RW(2)); F_002C2210(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c2078); SET64(5, RD(0) + RD(0)); F_002A08E0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C2094; }
SET64(31, 0x2c2090); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002C2090:;
SET64(2, RD(17) + RD(0));
L_002C2094:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C20B0(Ctx *c) { /* func_002C20B0 */
ENTER(0x2c20b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd8(c, (RW(4) + 36)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C21FC; }
SET64(2, rd8(c, (RW(17) + 101)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 44))); goto L_002C2184; }
SET64(3, rd8(c, (RW(17) + 95)));
SET64(2, RSD(3) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(17) + 95))); goto L_002C2130; }
SET32(2, RW(3) + -2);
wr8(c, (RW(17) + 95), (u8)RW(2));
SET64(2, rd8(c, (RW(17) + 95)));
wr8(c, (RW(17) + 92), (u8)RW(2));
SET64(2, rd8(c, (RW(17) + 95)));
wr8(c, (RW(17) + 94), (u8)RW(2));
SET64(2, rd8(c, (RW(17) + 95)));
wr8(c, (RW(17) + 93), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 84)));
SET64(31, 0x2c2118); SET32(5, RW(17) + 92); F_002A71C0(c);
SET64(4, (s32)rd32(c, (RW(17) + 84)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c212c);  rt_call(c, t); }
SET64(2, rd8(c, (RW(17) + 95)));
L_002C2130:;
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C2144; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002C215C;
L_002C2144:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002C215C:;
SET64(2, (s64)(s32)0x43000000);
SET64(4, (s32)rd32(c, (RW(17) + 68)));
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x2c2180);  F_0029EBF0(c);
SET64(2, (s32)rd32(c, (RW(17) + 44)));
L_002C2184:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 68))); goto L_002C2194; }
SET64(16, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(17) + 68)));
L_002C2194:;
SET64(31, 0x2c219c); SET64(5, (s32)rd32(c, (RW(17) + 72))); F_0029EAA0(c);
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 96))); goto L_002C21E8; }
SET64(5, (s32)rd32(c, (RW(17) + 72)));
SET64(31, 0x2c21b0); SET64(4, (s32)rd32(c, (RW(17) + 76))); F_0029E7D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2c21c4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(17) + 72)));
SET64(31, 0x2c21d0); SET64(4, (s32)rd32(c, (RW(17) + 68))); F_0029EA60(c);
SET64(3, (s32)rd32(c, (RW(17) + 96)));
SET32(3, RW(3) + 1);
SET64(3, RD(3) << 40);
SET64(3, RD(3) >> 40);
wr32(c, (RW(17) + 96), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 96)));
L_002C21E8:;
if (RSD(3) < 0) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002C2200; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c21fc); SET64(5, RD(16) + RD(0)); F_002A0720(c);
L_002C21FC:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002C2200:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C2210(Ctx *c) { /* func_002C2210 */
ENTER(0x2c2210);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 64), RW(0)); goto L_002C2240; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c223c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 64), RW(0));
L_002C2240:;
SET64(4, (s32)rd32(c, (RW(16) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 68), RW(0)); goto L_002C2260; }
SET64(25, (s32)rd32(c, (RW(4) + 68)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c225c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 68), RW(0));
L_002C2260:;
SET64(4, (s32)rd32(c, (RW(16) + 72)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 72), RW(0)); goto L_002C2280; }
SET64(25, (s32)rd32(c, (RW(4) + 136)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c227c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 72), RW(0));
L_002C2280:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 76), RW(0)); goto L_002C22A0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c229c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 76), RW(0));
L_002C22A0:;
SET64(4, (s32)rd32(c, (RW(16) + 80)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 80), RW(0)); goto L_002C22C0; }
SET64(25, (s32)rd32(c, (RW(4) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c22bc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 80), RW(0));
L_002C22C0:;
SET64(4, (s32)rd32(c, (RW(16) + 84)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 84), RW(0)); goto L_002C22E0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c22dc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 84), RW(0));
L_002C22E0:;
SET64(4, (s32)rd32(c, (RW(16) + 88)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 88), RW(0)); goto L_002C2300; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c22fc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 88), RW(0));
L_002C2300:;
SET64(31, 0x2c2308); SET64(4, (s32)rd32(c, (RW(16) + 104))); F_00100430(c);
wr32(c, (RW(16) + 104), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002C2320(Ctx *c) { /* func_002C2320 */
ENTER(0x2c2320);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2c233c); wr32(c, (RW(29) + 0), c->f[20].u); F_002BF960(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(17, (s32)c->f[0].u);
SET64(31, 0x2c234c);  F_002BF930(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(4, RW(0) + 72);
wr32(c, (RW(29) + 108), RW(17));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x2c2364); wr32(c, (RW(29) + 104), RW(2)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C2380; }
SET64(2, (s64)(s32)0x41000000);
SET64(4, RD(17) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x2c2380); SET32(5, RW(29) + 104); F_0029F370(c);
L_002C2380:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c238c); wr32(c, (RW(16) + 68), RW(17)); F_0029F2C0(c);
SET64(31, 0x2c2394); SET32(4, RW(2) + 128); F_00100320(c);
wr32(c, (RW(16) + 104), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2c23a8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(28) + -30060)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c23b8); SET32(5, RW(2) + 48); F_002A0780(c);
SET64(2, (s32)rd32(c, (RW(16) + 44)));
SET32(4, RW(0) + 28);
SET64(31, 0x2c23c8); wr8(c, (RW(2) + 324), (u8)RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C23E8; }
SET64(5, (s32)rd32(c, (RW(29) + 104)));
SET64(4, RD(17) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 108)));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2c23e8); SET64(8, RD(0) + RD(0)); F_002AFE30(c);
L_002C23E8:;
SET32(4, RW(0) + 20);
SET64(31, 0x2c23f4); wr32(c, (RW(16) + 80), RW(17)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C241C; }
SET64(31, 0x2c2404); SET64(4, (s32)rd32(c, (RW(16) + 68))); F_0029F2C0(c);
SET64(5, (s32)rd32(c, (RW(16) + 104)));
SET64(6, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET32(7, RW(0) + 128);
SET64(31, 0x2c241c); SET64(8, RD(0) + RD(0)); F_002AB3D0(c);
L_002C241C:;
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(31, 0x2c2428); SET64(5, RD(17) + RD(0)); F_0029F220(c);
SET64(31, 0x2c2430); SET32(4, RW(0) + 144); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C2440; }
SET64(31, 0x2c2440); SET64(4, RD(17) + RD(0)); F_0029F490(c);
L_002C2440:;
SET32(4, RW(0) + 28);
SET64(31, 0x2c244c); wr32(c, (RW(16) + 72), RW(17)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C2460; }
SET64(5, (s32)rd32(c, (RW(16) + 80)));
SET64(31, 0x2c2460); SET64(4, RD(17) + RD(0)); F_0029EA10(c);
L_002C2460:;
SET32(4, RW(0) + 256);
SET64(31, 0x2c246c); wr32(c, (RW(16) + 76), RW(17)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C2490; }
SET64(2, (s32)rd32(c, (RW(16) + 80)));
SET64(4, RD(17) + RD(0));
SET64(7, (s32)rd32(c, (RW(2) + 4)));
SET64(5, (s32)rd32(c, (RW(2) + 8)));
SET64(6, (s32)rd32(c, (RW(2) + 12)));
SET64(31, 0x2c2490); SET64(8, RD(7) + RD(0)); F_002AF8F0(c);
L_002C2490:;
wr32(c, (RW(16) + 88), RW(17));
SET64(25, (s32)rd32(c, (RW(17) + 20)));
SET64(5, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2c24a8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 88)));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c24bc);  rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(16) + 88)));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2c24d4); SET32(4, RW(17) + 32); F_002B1760(c);
SET32(4, RW(17) + 32);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c24e4); SET64(6, RD(0) + RD(0)); F_002B1720(c);
SET32(4, RW(17) + 32);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c24f4); SET32(6, RW(0) + 1); F_002B16E0(c);
SET64(31, 0x2c24fc);  F_002BFA70(c);
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x44000000); goto L_002C2514; }
SET64(31, 0x2c250c);  F_002BF960(c);
c->f[20].u = c->f[0].u; goto L_002C2518;
L_002C2514:;
c->f[20].u = RW(2);
L_002C2518:;
SET64(31, 0x2c2520);  F_002BF930(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(4, RW(0) + 144);
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
SET64(2, (s32)c->f[0].u);
c->f[0].u = (u32)fpu_cvtw(F(20));
wr32(c, (RW(29) + 88), RW(2));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x2c2548); wr32(c, (RW(29) + 92), RW(2)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C2568; }
SET64(6, (s32)rd32(c, (RW(16) + 88)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 80);
SET32(7, RW(16) + 92);
SET64(31, 0x2c2568); SET64(8, RD(0) + RD(0)); F_002A7300(c);
L_002C2568:;
wr32(c, (RW(16) + 84), RW(17));
SET32(2, RW(0) + 512);
wr32(c, (RW(29) + 72), RW(2));
SET32(2, RW(0) + 448);
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 68), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 84)));
SET64(31, 0x2c2590); SET32(5, RW(29) + 64); F_002A7240(c);
SET64(4, (s32)rd32(c, (RW(16) + 84)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c25a4);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2c25b4); SET64(5, (s32)rd32(c, (RW(16) + 84))); F_002AB090(c);
wr8(c, (RW(16) + 108), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002C25D0(Ctx *c) { /* func_002C25D0 */
ENTER(0x2c25d0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(30, RW(29) + RW(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 176)));
{ int t = RD(16) == RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_002C2714; }
SET64(2, rd8(c, (RW(18) + 184)));
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(18) + 185))); goto L_002C2718; }
SET64(31, 0x2c260c); SET64(4, (s32)rd32(c, (RW(16) + 68))); F_0029EC70(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + (s64)1); goto L_002C2624; }
SET64(2, rd8(c, (RW(16) + 100)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C2624; }
SET64(2, RD(0) + (s64)1);
L_002C2624:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 176))); goto L_002C2700; }
SET64(2, (s32)rd32(c, (RW(18) + 176)));
SET64(4, (s32)rd32(c, (RW(2) + 68)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C2658; }
SET64(31, 0x2c2644);  F_0029ECE0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C2654; }
SET64(2, RD(0) + (s64)1); goto L_002C2658;
L_002C2654:;
SET64(2, RD(0) + RD(0));
L_002C2658:;
{ int t = RD(2) == RD(0);  if (t) goto L_002C26FC; }
SET64(2, (s32)rd32(c, (RW(18) + 176)));
SET64(2, rd8(c, (RW(2) + 101)));
{ int t = RD(2) != RD(0);  if (t) goto L_002C26FC; }
SET64(31, 0x2c2678); SET32(4, RW(0) + 20); F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C26F0; }
wr32(c, (RW(30) + 100), RW(29));
{ int t = RD(18) == RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_002C2690; }
SET32(16, RW(18) + 164);
L_002C2690:;
SET64(31, 0x2c2698); SET64(4, RD(17) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(4, RW(4) + -21344);
wr32(c, (RW(17) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(17) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(4));
SET32(2, RW(2) + -15664);
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(3));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(2)); goto L_002C26F0;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c26e0); SET32(5, RW(0) + 20); F_002A99F0(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c26f0); SET64(6, RD(0) + RD(0)); F_001041F0(c);
L_002C26F0:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x2c26fc); SET64(4, RD(18) + RD(0)); F_002AA9E0(c);
L_002C26FC:;
SET64(2, (s32)rd32(c, (RW(18) + 176)));
L_002C2700:;
SET64(2, rd8(c, (RW(2) + 95)));
{ int t = RD(2) != RD(0);  if (t) goto L_002C2714; }
SET64(31, 0x2c2714); SET64(4, RD(18) + RD(0)); F_002C2990(c);
L_002C2714:;
SET64(2, rd8(c, (RW(18) + 185)));
L_002C2718:;
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002C2740(Ctx *c) { /* func_002C2740 */
ENTER(0x2c2740);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(30, RW(29) + RW(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 176)));
{ int t = RD(16) == RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_002C2874; }
SET64(2, rd8(c, (RW(18) + 184)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C2878; }
SET64(2, rd8(c, (RW(16) + 101)));
{ int t = RD(2) != RD(0);  if (t) goto L_002C2874; }
SET64(31, 0x2c2788); SET64(4, (s32)rd32(c, (RW(16) + 68))); F_0029EC70(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + (s64)1); goto L_002C27A0; }
SET64(2, rd8(c, (RW(16) + 100)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C27A0; }
SET64(2, RD(0) + (s64)1);
L_002C27A0:;
if (RD(2) != RD(0)) { SET32(2, RW(0) + 1); goto L_002C2878; }
SET64(2, (s32)rd32(c, (RW(18) + 176)));
SET64(4, (s32)rd32(c, (RW(2) + 68)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C27D4; }
SET64(31, 0x2c27c0);  F_0029ECE0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C27D0; }
SET64(2, RD(0) + (s64)1); goto L_002C27D4;
L_002C27D0:;
SET64(2, RD(0) + RD(0));
L_002C27D4:;
{ int t = RD(2) == RD(0);  if (t) goto L_002C2868; }
SET64(31, 0x2c27e4); SET32(4, RW(0) + 20); F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C285C; }
wr32(c, (RW(30) + 100), RW(29));
{ int t = RD(18) == RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_002C27FC; }
SET32(16, RW(18) + 164);
L_002C27FC:;
SET64(31, 0x2c2804); SET64(4, RD(17) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(4, RW(4) + -21344);
wr32(c, (RW(17) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(17) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(4));
SET32(2, RW(2) + -15664);
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(3));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(2)); goto L_002C285C;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c284c); SET32(5, RW(0) + 20); F_002A99F0(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c285c); SET64(6, RD(0) + RD(0)); F_001041F0(c);
L_002C285C:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c2868); SET64(5, RD(17) + RD(0)); F_002AA9E0(c);
L_002C2868:;
SET32(2, RW(0) + 1);
 goto L_002C2878;
L_002C2874:;
SET64(2, RD(0) + RD(0));
L_002C2878:;
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002C28A0(Ctx *c) { /* func_002C28A0 */
ENTER(0x2c28a0);
SET64(2, (s32)rd32(c, (RW(4) + 176)));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_002C28B0; }
SET64(2, rd8(c, (RW(2) + 101)));
L_002C28B0:;
 return;
}

void F_002C28C0(Ctx *c) { /* func_002C28C0 */
ENTER(0x2c28c0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(30, RW(29) + RW(0));
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(4, RW(0) + 20);
SET64(31, 0x2c28e8); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C2960; }
wr32(c, (RW(30) + 100), RW(29));
{ int t = RD(18) == RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_002C2900; }
SET32(16, RW(18) + 164);
L_002C2900:;
SET64(31, 0x2c2908); SET64(4, RD(17) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(4, RW(4) + -21344);
wr32(c, (RW(17) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(17) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(4));
SET32(2, RW(2) + -15664);
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(3));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(2)); goto L_002C2960;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c2950); SET32(5, RW(0) + 20); F_002A99F0(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c2960); SET64(6, RD(0) + RD(0)); F_001041F0(c);
L_002C2960:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c296c); SET64(5, RD(17) + RD(0)); F_002AA9E0(c);
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002C2990(Ctx *c) { /* func_002C2990 */
ENTER(0x2c2990);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(30, RW(29) + RW(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2c29b8); SET32(4, RW(0) + 20); F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C2A30; }
wr32(c, (RW(30) + 132), RW(29));
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_002C29D0; }
SET32(17, RW(16) + 160);
L_002C29D0:;
SET64(31, 0x2c29d8); SET64(4, RD(18) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(4, RW(4) + -21344);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + -15632);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(0));
wr32(c, (RW(18) + 0), RW(2)); goto L_002C2A30;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c2a20); SET32(5, RW(0) + 20); F_002A99F0(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c2a30); SET64(6, RD(0) + RD(0)); F_001041F0(c);
L_002C2A30:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x2c2a3c); SET64(4, RD(16) + RD(0)); F_002AA9E0(c);
SET64(31, 0x2c2a44); SET32(4, RW(0) + 20); F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C2ABC; }
wr32(c, (RW(30) + 100), RW(29));
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_002C2A5C; }
SET32(17, RW(16) + 152);
L_002C2A5C:;
SET64(31, 0x2c2a64); SET64(4, RD(18) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(4, RW(4) + -21344);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + -15648);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(0));
wr32(c, (RW(18) + 0), RW(2)); goto L_002C2ABC;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c2aac); SET32(5, RW(0) + 20); F_002A99F0(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c2abc); SET64(6, RD(0) + RD(0)); F_001041F0(c);
L_002C2ABC:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x2c2ac8); SET64(4, RD(16) + RD(0)); F_002AA9E0(c);
wr8(c, (RW(16) + 184), (u8)RW(0));
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void F_002C2AF0(Ctx *c) { /* func_002C2AF0 */
ENTER(0x2c2af0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(30, RW(29) + RW(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 180), RW(5));
SET64(31, 0x2c2b18); SET64(16, RD(4) + RD(0)); F_002AAB80(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c2b24); SET64(5, RD(16) + RD(0)); F_002AAA70(c);
SET64(31, 0x2c2b2c); SET32(4, RW(0) + 20); F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C2BA4; }
wr32(c, (RW(30) + 132), RW(29));
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_002C2B44; }
SET32(17, RW(16) + 148);
L_002C2B44:;
SET64(31, 0x2c2b4c); SET64(4, RD(18) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(4, RW(4) + -21344);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + -15600);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(0));
wr32(c, (RW(18) + 0), RW(2)); goto L_002C2BA4;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c2b94); SET32(5, RW(0) + 20); F_002A99F0(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c2ba4); SET64(6, RD(0) + RD(0)); F_001041F0(c);
L_002C2BA4:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x2c2bb0); SET64(4, RD(16) + RD(0)); F_002AA9E0(c);
SET64(31, 0x2c2bb8); SET32(4, RW(0) + 20); F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C2C30; }
wr32(c, (RW(30) + 100), RW(29));
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_002C2BD0; }
SET32(17, RW(16) + 156);
L_002C2BD0:;
SET64(31, 0x2c2bd8); SET64(4, RD(18) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20992);
SET32(4, RW(4) + -21344);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + -15616);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(0));
wr32(c, (RW(18) + 0), RW(2)); goto L_002C2C30;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c2c20); SET32(5, RW(0) + 20); F_002A99F0(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c2c30); SET64(6, RD(0) + RD(0)); F_001041F0(c);
L_002C2C30:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c2c3c); SET64(5, RD(18) + RD(0)); F_002AA9E0(c);
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void F_002C2C60(Ctx *c) { /* func_002C2C60 */
ENTER(0x2c2c60);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(30, RW(29) + RW(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 172)));
{ int t = RD(2) != RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_002C2D04; }
SET64(31, 0x2c2c90); SET32(4, RW(0) + 12); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C2CF8; }
SET64(31, 0x2c2ca0); SET32(4, RW(0) + 20); F_002A9A30(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C2CE8; }
wr32(c, (RW(30) + 100), RW(29));
{ int t = RD(18) == RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_002C2CB8; }
SET32(5, RW(18) + 144);
L_002C2CB8:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c2cc4); SET64(6, RD(0) + RD(0)); F_002AB670(c);
SET64(5, RD(17) + RD(0)); goto L_002C2CEC;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c2cd8); SET32(5, RW(0) + 20); F_002A99F0(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c2ce8); SET64(6, RD(0) + RD(0)); F_001041F0(c);
L_002C2CE8:;
SET64(5, RD(17) + RD(0));
L_002C2CEC:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c2cf8); SET32(6, RW(0) + 2); F_002AB580(c);
L_002C2CF8:;
wr32(c, (RW(18) + 172), RW(16));
SET32(2, RW(0) + 1); goto L_002C2D08;
L_002C2D04:;
SET64(2, RD(0) + RD(0));
L_002C2D08:;
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002C2D30(Ctx *c) { /* func_002C2D30 */
ENTER(0x2c2d30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 172)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002C2D78; }
SET64(4, (s32)rd32(c, (RW(16) + 176)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 176), RW(0)); goto L_002C2D68; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c2d64); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 176), RW(0));
L_002C2D68:;
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 172), RW(0));
wr8(c, (RW(16) + 185), (u8)RW(0)); goto L_002C2D7C;
L_002C2D78:;
SET64(2, RD(0) + RD(0));
L_002C2D7C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002C2D90(Ctx *c) { /* func_002C2D90 */
ENTER(0x2c2d90);
SET64(3, (s32)rd32(c, (RW(4) + 176)));
SET32(2, RW(0) + 1);
wr8(c, (RW(3) + 101), (u8)RW(2)); return;
}

void F_002C2DA0(Ctx *c) { /* func_002C2DA0 */
ENTER(0x2c2da0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 176)));
wr8(c, (RW(3) + 100), (u8)RW(2));
SET64(31, 0x2c2dbc); SET64(4, (s32)rd32(c, (RW(3) + 68))); F_0029EE00(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void F_002C2DD0(Ctx *c) { /* func_002C2DD0 */
ENTER(0x2c2dd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 176)));
SET64(2, rd8(c, (RW(16) + 108)));
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002C2E20; }
wr8(c, (RW(16) + 36), (u8)RW(0));
SET64(31, 0x2c2dfc); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_002AAE80(c);
SET64(4, (s32)rd32(c, (RW(28) + -30060)));
SET64(31, 0x2c2e08); SET64(5, RD(16) + RD(0)); F_002A0330(c);
SET64(31, 0x2c2e10); SET64(4, (s32)rd32(c, (RW(16) + 68))); F_0029ECF0(c);
SET32(2, RW(0) + -1);
wr32(c, (RW(16) + 96), RW(2));
wr8(c, (RW(16) + 108), (u8)RW(0));
wr8(c, (RW(16) + 100), (u8)RW(0));
L_002C2E20:;
wr8(c, (RW(17) + 184), (u8)RW(0));
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C2E40(Ctx *c) { /* func_002C2E40 */
ENTER(0x2c2e40);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(4) + 184)));
{ int t = RD(2) != RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002C2EE0; }
SET64(16, (s32)rd32(c, (RW(17) + 176)));
SET64(2, rd8(c, (RW(16) + 108)));
{ int t = RD(2) != RD(0); SET64(19, (s32)rd32(c, (RW(17) + 180))); if (t) goto L_002C2ED4; }
SET64(31, 0x2c2e7c); SET32(4, RW(0) + 12); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C2E90; }
SET64(5, RD(19) + RD(0));
SET64(31, 0x2c2e90); SET64(4, RD(18) + RD(0)); F_002AD620(c);
L_002C2E90:;
wr32(c, (RW(16) + 64), RW(18));
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(31, 0x2c2ea0); SET64(5, RD(18) + RD(0)); F_0029F150(c);
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(31, 0x2c2eac); SET64(5, RD(0) + RD(0)); F_0029EF10(c);
SET64(31, 0x2c2eb4); SET64(4, (s32)rd32(c, (RW(16) + 68))); F_0029EFC0(c);
SET32(6, RW(0) + -1);
wr32(c, (RW(16) + 96), RW(6));
SET64(4, (s32)rd32(c, (RW(28) + -30060)));
SET64(31, 0x2c2ec8); SET64(5, RD(16) + RD(0)); F_002A0380(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 36), (u8)RW(2));
wr8(c, (RW(16) + 108), (u8)RW(2));
L_002C2ED4:;
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 184), (u8)RW(2)); goto L_002C2EF0;
L_002C2EE0:;
SET64(2, (s32)rd32(c, (RW(17) + 176)));
wr8(c, (RW(2) + 100), (u8)RW(0));
SET64(31, 0x2c2ef0); SET64(4, (s32)rd32(c, (RW(2) + 68))); F_0029EFC0(c);
L_002C2EF0:;
SET64(31, rd64(c, (RW(29) + 64)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002C2F10(Ctx *c) { /* func_002C2F10 */
ENTER(0x2c2f10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c2f2c); SET32(4, RW(0) + 112); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C2F8C; }
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c2f44); SET32(6, RW(0) + 512); F_002A0970(c);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(0) + 128);
SET32(3, RW(3) + -16000);
wr32(c, (RW(16) + 4), RW(3));
wr32(c, (RW(16) + 64), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 80), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 88), RW(0));
wr8(c, (RW(16) + 92), (u8)RW(2));
wr8(c, (RW(16) + 93), (u8)RW(2));
wr8(c, (RW(16) + 94), (u8)RW(2));
wr8(c, (RW(16) + 95), (u8)RW(2));
wr8(c, (RW(16) + 100), (u8)RW(0));
wr8(c, (RW(16) + 101), (u8)RW(0));
wr32(c, (RW(16) + 104), RW(0));
L_002C2F8C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c2f98); wr32(c, (RW(17) + 176), RW(16)); F_002C2320(c);
SET64(31, rd64(c, (RW(29) + 32)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C2FB0(Ctx *c) { /* func_002C2FB0 */
ENTER(0x2c2fb0);
SET64(2, RD(4) + RD(0)); return;
}

static void B_002C2FC0(Ctx *c, u32 entry) { /* func_002C2FC0 */
ENTER(entry);
switch (entry) { case 0x2c3020: goto L_002C3020; case 0x2c306c: goto L_002C306C; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
L_002C2FD4:;
SET64(4, RD(17) + RD(0));
L_002C2FD8:;
SET64(31, 0x2c2fe0); SET32(5, RW(0) + 16); F_002AA8F0(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(16, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c2ff4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) < RD(16));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET64(4, RD(17) + RD(0)); { POLL(); goto L_002C2FD8; } }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c3018); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002C2FD4; }
L_002C3020:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C30D8; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -15872);
SET32(2, RW(2) + -15856);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 84), RW(2));
SET32(3, RW(3) + -15840);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 88), RW(3));
SET32(2, RW(2) + -15816);
L_002C306C:;
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 144), RW(2));
SET32(3, RW(3) + -15800);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 148), RW(3));
SET32(2, RW(2) + -15784);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 152), RW(2));
SET32(3, RW(3) + -15768);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 156), RW(3));
SET32(2, RW(2) + -15752);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + -15736);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15720);
wr32(c, (RW(17) + 164), RW(3));
wr32(c, (RW(17) + 168), RW(2));
SET64(31, 0x2c30c0); wr8(c, (RW(17) + 185), (u8)RW(0)); F_002AABF0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C30DC; }
SET64(31, 0x2c30d8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002C30D8:;
SET64(2, RD(17) + RD(0));
L_002C30DC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void F_002C2FC0(Ctx *c) { B_002C2FC0(c, 0x2c2fc0); }
void F_002C3020(Ctx *c) { B_002C2FC0(c, 0x2c3020); }
void F_002C306C(Ctx *c) { B_002C2FC0(c, 0x2c306c); }

void F_002C30F0(Ctx *c) { /* func_002C30F0 */
ENTER(0x2c30f0);
SET32(29, RW(29) + -32);
SET64(6, RD(6) & 0xffff);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c3108); SET64(16, RD(4) + RD(0)); F_002AAC90(c);
SET64(10, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(10, RW(10) + -21008);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -21024);
wr32(c, (RW(16) + 144), RW(10));
wr32(c, (RW(16) + 144), RW(3));
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15888);
wr32(c, (RW(16) + 148), RW(10));
wr32(c, (RW(16) + 148), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET32(4, RW(4) + -15904);
wr32(c, (RW(16) + 152), RW(10));
wr32(c, (RW(16) + 152), RW(4));
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -15920);
wr32(c, (RW(16) + 156), RW(10));
wr32(c, (RW(16) + 156), RW(3));
SET64(7, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15936);
wr32(c, (RW(16) + 160), RW(10));
wr32(c, (RW(16) + 160), RW(2));
SET64(6, (s64)(s32)0x4e0000);
SET32(7, RW(7) + -15952);
wr32(c, (RW(16) + 164), RW(10));
wr32(c, (RW(16) + 164), RW(7));
SET64(5, (s64)(s32)0x4e0000);
SET32(6, RW(6) + -15968);
wr32(c, (RW(16) + 168), RW(10));
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 168), RW(6));
SET32(5, RW(5) + -15872);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 0), RW(5));
SET32(4, RW(4) + -15856);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 84), RW(4));
SET32(3, RW(3) + -15840);
SET64(9, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 88), RW(3));
SET32(2, RW(2) + -15816);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 144), RW(2));
SET32(9, RW(9) + -15800);
SET64(7, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(8, RW(8) + -15784);
wr32(c, (RW(16) + 148), RW(9));
SET32(7, RW(7) + -15768);
wr32(c, (RW(16) + 152), RW(8));
SET32(6, RW(6) + -15752);
wr32(c, (RW(16) + 156), RW(7));
SET32(5, RW(5) + -15736);
wr32(c, (RW(16) + 160), RW(6));
SET32(4, RW(4) + -15720);
wr32(c, (RW(16) + 164), RW(5));
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 168), RW(4));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 172), RW(0));
wr32(c, (RW(16) + 176), RW(0));
wr32(c, (RW(16) + 180), RW(0));
wr8(c, (RW(16) + 184), (u8)RW(0));
wr8(c, (RW(16) + 185), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002C3230(Ctx *c) { /* func_002C3230 */
ENTER(0x2c3230);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c324c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002C3260(Ctx *c) { /* func_002C3260 */
ENTER(0x2c3260);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c327c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002C3290(Ctx *c) { /* func_002C3290 */
ENTER(0x2c3290);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c32ac);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002C32C0(Ctx *c) { /* func_002C32C0 */
ENTER(0x2c32c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c32dc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002C32F0(Ctx *c) { /* func_002C32F0 */
ENTER(0x2c32f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c330c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002C3320(Ctx *c) { /* func_002C3320 */
ENTER(0x2c3320);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C336C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -15664);
SET64(31, 0x2c3350); wr32(c, (RW(17) + 0), RW(2)); F_002A9C30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C3370; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c336c); SET32(5, RW(0) + 20); F_002A99F0(c);
L_002C336C:;
SET64(2, RD(17) + RD(0));
L_002C3370:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C3390(Ctx *c) { /* func_002C3390 */
ENTER(0x2c3390);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C33DC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -15648);
SET64(31, 0x2c33c0); wr32(c, (RW(17) + 0), RW(2)); F_002A9C30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C33E0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c33dc); SET32(5, RW(0) + 20); F_002A99F0(c);
L_002C33DC:;
SET64(2, RD(17) + RD(0));
L_002C33E0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C3400(Ctx *c) { /* func_002C3400 */
ENTER(0x2c3400);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C344C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -15632);
SET64(31, 0x2c3430); wr32(c, (RW(17) + 0), RW(2)); F_002A9C30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C3450; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c344c); SET32(5, RW(0) + 20); F_002A99F0(c);
L_002C344C:;
SET64(2, RD(17) + RD(0));
L_002C3450:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C3470(Ctx *c) { /* func_002C3470 */
ENTER(0x2c3470);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C34BC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -15616);
SET64(31, 0x2c34a0); wr32(c, (RW(17) + 0), RW(2)); F_002A9C30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C34C0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c34bc); SET32(5, RW(0) + 20); F_002A99F0(c);
L_002C34BC:;
SET64(2, RD(17) + RD(0));
L_002C34C0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C34E0(Ctx *c) { /* func_002C34E0 */
ENTER(0x2c34e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C352C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -15600);
SET64(31, 0x2c3510); wr32(c, (RW(17) + 0), RW(2)); F_002A9C30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C3530; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c352c); SET32(5, RW(0) + 20); F_002A99F0(c);
L_002C352C:;
SET64(2, RD(17) + RD(0));
L_002C3530:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C3550(Ctx *c) { /* func_002C3550 */
ENTER(0x2c3550);
SET32(4, RW(4) + -32); { F_002C3020(c); return; }
}

void F_002C3560(Ctx *c) { /* func_002C3560 */
ENTER(0x2c3560);
SET32(4, RW(4) + -88); { F_002C2FB0(c); return; }
}

void F_002C3570(Ctx *c) { /* func_002C3570 */
ENTER(0x2c3570);
SET32(4, RW(4) + -144); { F_002C2FB0(c); return; }
}

void F_002C3580(Ctx *c) { /* func_002C3580 */
ENTER(0x2c3580);
SET32(4, RW(4) + -144); { F_002C2D30(c); return; }
}

void F_002C3590(Ctx *c) { /* func_002C3590 */
ENTER(0x2c3590);
SET32(4, RW(4) + -148); { F_002C2FB0(c); return; }
}

void F_002C35A0(Ctx *c) { /* func_002C35A0 */
ENTER(0x2c35a0);
SET32(4, RW(4) + -148); { F_002C2F10(c); return; }
}

void F_002C35B0(Ctx *c) { /* func_002C35B0 */
ENTER(0x2c35b0);
SET32(4, RW(4) + -152); { F_002C2FB0(c); return; }
}

void F_002C35C0(Ctx *c) { /* func_002C35C0 */
ENTER(0x2c35c0);
SET32(4, RW(4) + -152); { F_002C2C60(c); return; }
}

void F_002C35D0(Ctx *c) { /* func_002C35D0 */
ENTER(0x2c35d0);
SET32(4, RW(4) + -156); { F_002C2FB0(c); return; }
}

void F_002C35E0(Ctx *c) { /* func_002C35E0 */
ENTER(0x2c35e0);
SET32(4, RW(4) + -156); { F_002C2E40(c); return; }
}

void F_002C35F0(Ctx *c) { /* func_002C35F0 */
ENTER(0x2c35f0);
SET32(4, RW(4) + -160); { F_002C2FB0(c); return; }
}

void F_002C3600(Ctx *c) { /* func_002C3600 */
ENTER(0x2c3600);
SET32(4, RW(4) + -160); { F_002C2DD0(c); return; }
}

void F_002C3610(Ctx *c) { /* func_002C3610 */
ENTER(0x2c3610);
SET32(4, RW(4) + -164); { F_002C2FB0(c); return; }
}

void F_002C3620(Ctx *c) { /* func_002C3620 */
ENTER(0x2c3620);
SET32(4, RW(4) + -164); { F_002C2D90(c); return; }
}

void F_002C3630(Ctx *c) { /* func_002C3630 */
ENTER(0x2c3630);
SET32(4, RW(4) + -168); { F_002C2FB0(c); return; }
}

void F_002C3640(Ctx *c) { /* func_002C3640 */
ENTER(0x2c3640);
SET32(4, RW(4) + -168); { F_002C2DA0(c); return; }
}

void F_002C3650(Ctx *c) { /* func_002C3650 */
ENTER(0x2c3650);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 10248); return;
}

void F_002C3660(Ctx *c) { /* func_002C3660 */
ENTER(0x2c3660);
 return;
}

void F_002C3670(Ctx *c) { /* func_002C3670 */
ENTER(0x2c3670);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C3720; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15584);
SET32(3, RW(3) + -15576);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -15564);
wr32(c, (RW(17) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 68), RW(0)); goto L_002C36D0; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c36cc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 68), RW(0));
L_002C36D0:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002C370C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 7392);
SET32(3, RW(3) + 7400);
wr32(c, (RW(17) + 56), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 7412);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c3708); wr32(c, (RW(17) + 36), RW(2)); F_00139F30(c);
SET64(2, RD(16) << 48);
L_002C370C:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C3724; }
SET64(31, 0x2c3720); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002C3720:;
SET64(2, RD(17) + RD(0));
L_002C3724:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C3740(Ctx *c) { hle_movie_step(c); } /* func_002C3740 */

void F_002C38F0(Ctx *c) { /* func_002C38F0 */
ENTER(0x2c38f0);
wr16(c, (RW(4) + 0), (u16)RW(0));
wr16(c, (RW(4) + 64), (u16)RW(5));
wr8(c, (RW(4) + 72), (u8)RW(0)); return;
}

void F_002C3900(Ctx *c) { /* func_002C3900 */
ENTER(0x2c3900);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c3918); SET64(16, RD(4) + RD(0)); F_0013A040(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 7392);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(3));
SET32(2, RW(2) + 7400);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + 7412);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(3));
SET32(2, RW(2) + -15584);
wr16(c, (RW(16) + 60), (u16)RW(0));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(4, RW(4) + -15576);
SET32(3, RW(3) + -15564);
wr32(c, (RW(16) + 20), RW(4));
wr32(c, (RW(16) + 36), RW(3));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 68), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002C3980(Ctx *c) { /* func_002C3980 */
ENTER(0x2c3980);
SET32(4, RW(4) + -4); { F_002C3670(c); return; }
}

void F_002C3990(Ctx *c) { /* func_002C3990 */
ENTER(0x2c3990);
SET32(4, RW(4) + -24); { F_002C3670(c); return; }
}

void F_002C39A0(Ctx *c) { /* func_002C39A0 */
ENTER(0x2c39a0);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 10320); return;
}

void F_002C39B0(Ctx *c) { /* func_002C39B0 */
ENTER(0x2c39b0);
 return;
}

static void B_002C39C0(Ctx *c, u32 entry) { /* func_002C39C0 */
ENTER(entry);
switch (entry) { case 0x2c4314: goto L_002C4314; case 0x2c431c: goto L_002C431C; case 0x2c4324: goto L_002C4324; case 0x2c432c: goto L_002C432C; case 0x2c4334: goto L_002C4334; }
L_002C39C0:;
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c39e0); SET64(16, RD(4) + RD(0)); F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c39ec); SET32(5, RW(0) + -1); F_0013E020(c);
SET64(31, 0x2c39f4);  F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c3a00); SET32(5, RW(0) + -1); F_0013E080(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET64(3, RSD(3) < (s64)2);
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(16) + 0))); goto L_002C3AFC; }
SET64(2, (s32)rd32(c, (RW(16) + 92)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C3AC8; }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
{ int t = RD(4) == RD(0);  if (t) goto L_002C3AC8; }
SET64(2, rd8(c, (RW(2) + 504)));
SET64(2, RD(2) & 0x1);
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C3AC8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c3a4c);  rt_call(c, t); }
SET64(3, RD(2) & 0xffff);
SET64(2, rd16(c, (RW(16) + 84)));
if (RD(2) != RD(3)) { wr16(c, (RW(16) + 84), (u16)RW(3)); goto L_002C3A6C; }
SET64(2, rd8(c, (RW(16) + 60)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C3AC8; }
wr16(c, (RW(16) + 84), (u16)RW(3));
L_002C3A6C:;
SET64(5, RD(3) & 0xffff);
SET64(4, (s32)rd32(c, (RW(16) + 92)));
SET64(31, 0x2c3a7c); SET32(6, RW(0) + 1); F_00144A60(c);
SET64(2, rd8(c, (RW(16) + 60)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 92))); goto L_002C3ABC; }
SET64(31, 0x2c3a90);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 92))); goto L_002C3AA4; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(16) + 92)));
L_002C3AA4:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 372)));
{ u32 t = RW(25); SET64(31, 0x2c3ab4);  rt_call(c, t); }
wr8(c, (RW(16) + 60), (u8)RW(0)); goto L_002C3AC8;
L_002C3ABC:;
SET64(31, 0x2c3ac4);  F_00143100(c);
wr8(c, (RW(16) + 60), (u8)RW(0));
L_002C3AC8:;
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x2c3ad8); SET64(4, (s32)rd32(c, (RW(16) + 104))); F_00172DE0(c);
SET64(3, rd8(c, (RW(16) + 228)));
{ int t = RD(3) == RD(0);  if (t) goto L_002C3AF8; }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2c3af8);  rt_call(c, t); }
L_002C3AF8:;
SET64(4, rd16(c, (RW(16) + 0)));
L_002C3AFC:;
SET32(3, RW(0) + 100);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 104))); goto L_002C4470; }
SET32(3, RW(0) + 15);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 96))); goto L_002C426C; }
SET32(3, RW(0) + 12);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 116))); goto L_002C41B4; }
SET32(3, RW(0) + 11);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 104))); goto L_002C4124; }
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 1); goto L_002C40A8; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 104))); goto L_002C4068; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 96))); goto L_002C4014; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 108))); goto L_002C3F30; }
{ int t = RD(4) == RD(0);  if (t) goto L_002C3B6C; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002C44BC;
L_002C3B6C:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c3b78); SET32(4, RW(4) + -25336); F_002C5320(c);
SET64(31, 0x2c3b80); SET32(4, RW(0) + 12); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C3B90; }
SET64(31, 0x2c3b90); SET64(4, RD(17) + RD(0)); F_002DCC30(c);
L_002C3B90:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 3);
SET64(31, 0x2c3ba0); wr32(c, (RW(16) + 108), RW(17)); F_002DCAB0(c);
wr8(c, (RW(29) + 92), (u8)RW(0));
SET32(5, RW(0) + 2099);
SET64(2, rd8(c, (RW(29) + 92)));
SET32(6, RW(29) + 92);
SET64(2, RD(2) | 0x1);
wr8(c, (RW(29) + 92), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(31, 0x2c3bc4); SET64(7, RD(0) + RD(0)); F_002DC950(c);
wr8(c, (RW(29) + 88), (u8)RW(0));
SET32(5, RW(0) + 2096);
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET32(6, RW(29) + 88);
SET64(31, 0x2c3bdc); SET32(7, RW(0) + 1); F_002DC950(c);
wr8(c, (RW(29) + 84), (u8)RW(0));
SET32(5, RW(0) + 12622);
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET32(6, RW(29) + 84);
SET64(31, 0x2c3bf4); SET32(7, RW(0) + 2); F_002DC950(c);
SET64(31, 0x2c3bfc);  F_00139590(c);
SET64(31, 0x2c3c04);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
SET64(31, 0x2c3c10); SET32(5, RW(0) + 118); F_001B76E0(c);
wr32(c, (RW(16) + 72), RW(2));
SET32(4, RW(0) + 1424);
SET32(2, RW(0) + 1);
SET64(31, 0x2c3c24); wr16(c, (RW(16) + 0), (u16)RW(2)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C3C44; }
SET32(6, RW(0) + 100);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 5376);
SET64(7, RD(6) + RD(0));
SET64(31, 0x2c3c44); SET64(8, RD(6) + RD(0)); F_00161C20(c);
L_002C3C44:;
wr32(c, (RW(16) + 112), RW(17));
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 228), (u8)RW(2));
SET64(31, 0x2c3c58); SET32(4, RW(0) + 104); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C3E00; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c3c6c); SET32(5, RW(0) + 1536); F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -15408);
SET32(2, RW(2) + -15400);
wr32(c, (RW(17) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + -15388);
SET32(2, RW(17) + 72);
wr32(c, (RW(17) + 36), RW(3));
SET32(2, RW(2) + 8);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 60), RW(0));
SET32(3, RW(3) + -30464);
wr32(c, (RW(17) + 76), RW(3));
SET32(3, RW(17) + 88);
SET64(1, RD(2) < RD(3));
{ int t = RD(1) == RD(0); wr32(c, (RW(17) + 72), RW(0)); if (t) goto L_002C3DF0; }
SET32(4, RW(17) + 80);
SET32(9, RW(3) - RW(4));
SET32(8, RW(9) + 7);
{ int t = RSD(8) >= 0; SET32(7, RSW(8) >> 3); if (t) goto L_002C3CD4; }
SET32(3, RW(8) + 7);
SET32(7, RSW(3) >> 3);
L_002C3CD4:;
SET32(6, RW(7) + 1);
SET64(1, RSD(6) < (s64)9);
{ int t = RD(1) != RD(0); SET32(5, RW(17) + 24); if (t) goto L_002C3DB8; }
SET32(3, RW(17) + 88);
SET64(12, RD(0) + RD(0));
SET64(1, RD(3) < RD(4));
{ int t = RD(1) != RD(0); SET64(11, RD(0) + RD(0)); if (t) goto L_002C3D24; }
SET64(4, (s64)(s32)0x80000000);
SET64(3, RD(9) & RD(4));
{ int t = RD(3) != RD(0); SET64(10, RD(0) + (s64)1); if (t) goto L_002C3D18; }
SET64(3, RD(8) & RD(4));
{ int t = RD(3) == RD(0);  if (t) goto L_002C3D18; }
SET64(10, RD(0) + RD(0));
L_002C3D18:;
{ int t = RD(10) == RD(0);  if (t) goto L_002C3D24; }
SET64(11, RD(0) + (s64)1);
L_002C3D24:;
{ int t = RD(11) == RD(0);  if (t) goto L_002C3D58; }
SET64(3, (s64)(s32)0x80000000);
SET64(4, RD(7) & RD(3));
{ int t = RD(4) != RD(0); SET64(8, RD(0) + (s64)1); if (t) goto L_002C3D4C; }
SET64(3, RD(6) & RD(3));
{ int t = RD(4) == RD(3);  if (t) goto L_002C3D4C; }
SET64(8, RD(0) + RD(0));
L_002C3D4C:;
{ int t = RD(8) == RD(0);  if (t) goto L_002C3D58; }
SET64(12, RD(0) + (s64)1);
L_002C3D58:;
{ int t = RD(12) == RD(0);  if (t) goto L_002C3DB8; }
SET64(4, (s64)(s32)0x4d0000);
SET32(4, RW(4) + -30464);
wr32(c, (RW(2) + 4), RW(4));
L_002C3D6C:;
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 12), RW(4));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 20), RW(4));
wr32(c, (RW(2) + 16), RW(0));
wr32(c, (RW(2) + 28), RW(4));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 36), RW(4));
wr32(c, (RW(2) + 32), RW(0));
wr32(c, (RW(2) + 44), RW(4));
wr32(c, (RW(2) + 40), RW(0));
wr32(c, (RW(2) + 52), RW(4));
wr32(c, (RW(2) + 48), RW(0));
wr32(c, (RW(2) + 60), RW(4));
wr32(c, (RW(2) + 56), RW(0));
SET32(2, RW(2) + 64);
SET64(3, RD(2) < RD(5));
if (RD(3) != RD(0)) { wr32(c, (RW(2) + 4), RW(4)); { POLL(); goto L_002C3D6C; } }
L_002C3DB8:;
SET32(5, RW(17) + 88);
SET64(1, RD(2) < RD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002C3DF0; }
SET64(4, (s64)(s32)0x4d0000);
SET32(4, RW(4) + -30464);
L_002C3DD0:;
wr32(c, (RW(2) + 4), RW(4));
wr32(c, (RW(2) + 0), RW(0));
SET32(2, RW(2) + 8);
SET64(3, RD(2) < RD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002C3DD0; } }
L_002C3DF0:;
wr32(c, (RW(17) + 88), RW(0));
wr32(c, (RW(17) + 92), RW(0));
wr32(c, (RW(17) + 96), RW(0));
wr32(c, (RW(17) + 100), RW(0));
L_002C3E00:;
wr32(c, (RW(16) + 100), RW(17));
wr32(c, (RW(17) + 88), RW(16));
SET64(5, (s32)rd32(c, (RW(16) + 100)));
SET64(31, 0x2c3e14); SET64(4, RD(16) + RD(0)); F_0013A470(c);
SET64(31, 0x2c3e1c); SET32(4, RW(0) + 8); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C3E2C; }
SET64(31, 0x2c3e2c); SET64(4, RD(17) + RD(0)); F_003B7C20(c);
L_002C3E2C:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c3e38); wr32(c, (RW(16) + 120), RW(17)); F_003B7B50(c);
SET64(2, (s64)(s32)0x3ecc0000);
SET64(3, (s64)(s32)0x3ea80000);
SET64(2, RD(2) | 0xcccd);
SET64(3, RD(3) | 0xf5c3);
c->f[13].u = RW(2);
SET64(4, (s32)rd32(c, (RW(16) + 120)));
c->f[12].u = RW(3);
SET64(2, (s64)(s32)0x3f4c0000);
SET64(3, (s64)(s32)0x40200000);
SET64(2, RD(2) | 0xcccd);
c->f[14].u = RW(3);
c->f[15].u = RW(2);
SET64(31, 0x2c3e70); SET32(5, RW(0) + 2); F_003B79C0(c);
SET64(31, 0x2c3e78); SET32(4, RW(0) + 400); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C3EE0; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x3f800000);
SET32(3, RW(3) + -22096);
SET32(4, RW(17) + 64);
wr32(c, (RW(17) + 388), RW(3));
SET32(5, RW(0) + 1);
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
wr32(c, (RW(17) + 28), RW(2));
wr32(c, (RW(17) + 32), RW(0));
wr32(c, (RW(17) + 36), RW(0));
wr32(c, (RW(17) + 40), RW(0));
wr32(c, (RW(17) + 44), RW(2));
wr32(c, (RW(17) + 48), RW(0));
wr32(c, (RW(17) + 52), RW(0));
wr32(c, (RW(17) + 56), RW(0));
SET64(31, 0x2c3ecc); wr32(c, (RW(17) + 60), RW(2)); F_0014CFE0(c);
wr32(c, (RW(17) + 368), RW(0));
wr32(c, (RW(17) + 372), RW(0));
wr32(c, (RW(17) + 376), RW(0));
wr32(c, (RW(17) + 380), RW(0));
wr8(c, (RW(17) + 384), (u8)RW(0));
L_002C3EE0:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c3eec); wr32(c, (RW(16) + 104), RW(17)); F_00173380(c);
SET64(31, 0x2c3ef4);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 104))); goto L_002C3F08; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(16) + 104)));
L_002C3F08:;
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2c3f18);  F_00173230(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2c3f28); SET64(4, (s32)rd32(c, (RW(16) + 104))); F_00172DE0(c);
 goto L_002C44B8;
L_002C3F30:;
SET64(31, 0x2c3f38); SET32(5, RW(0) + -1); F_002DC7D0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002C44B8; }
SET64(3, (s32)rd32(c, (RW(16) + 100)));
SET64(4, (s32)rd32(c, (RW(3) + 60)));
{ int t = RD(4) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002C3F6C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c3f60);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C3F6C; }
SET64(17, RD(0) + (s64)1);
L_002C3F6C:;
{ int t = RD(17) != RD(0);  if (t) goto L_002C44B8; }
SET64(31, 0x2c3f7c);  F_00139590(c);
SET64(31, 0x2c3f84);  F_00139590(c);
SET64(3, (s32)rd32(c, (RW(16) + 72)));
{ int t = RSD(3) < 0; SET64(4, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_002C3FAC; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x2c3fa4); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_001B8110(c);
SET64(3, RD(2) & 0xff); goto L_002C3FB0;
L_002C3FAC:;
SET64(3, RD(0) + RD(0));
L_002C3FB0:;
{ int t = RD(3) != RD(0);  if (t) goto L_002C44B8; }
SET64(31, 0x2c3fc0); SET64(4, RD(16) + RD(0)); F_002C48A0(c);
SET64(31, 0x2c3fc8); SET64(18, (s32)rd32(c, (RW(16) + 72))); F_00139590(c);
SET64(31, 0x2c3fd0);  F_00139590(c);
{ int t = RSD(18) < 0; SET64(17, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_002C4008; }
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(17) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x2c3fec); SET64(5, RD(18) + RD(0)); F_001B75B0(c);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(18) << 2);
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2c4008); SET64(5, RD(0) + RD(0)); F_001B84F0(c);
L_002C4008:;
SET32(3, RW(0) + 2);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C44B8;
L_002C4014:;
SET64(2, (s32)rd32(c, (RW(2) + 4)));
wr8(c, (RW(2) + 167), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 116)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c4034); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, 0x2c403c);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_002C404C; }
SET32(5, RW(5) + 672);
L_002C404C:;
SET64(2, (s64)(s32)0x490000);
c->f[12].u = rd32(c, (RW(2) + 20544));
SET64(31, 0x2c405c); SET64(4, (s32)rd32(c, (RW(16) + 104))); F_00173310(c);
SET32(3, RW(0) + 3);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C44B8;
L_002C4068:;
SET64(31, 0x2c4070);  F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C44B8; }
SET64(2, (s32)rd32(c, (RW(16) + 96)));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
wr8(c, (RW(2) + 167), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 104)));
SET64(25, (s32)rd32(c, (RW(4) + 388)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c409c);  rt_call(c, t); }
SET32(3, RW(0) + 10);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C44B8;
L_002C40A8:;
SET64(31, 0x2c40b0); wr8(c, (RW(16) + 228), (u8)RW(2)); F_00139590(c);
SET64(31, 0x2c40b8);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2c40cc); SET64(5, (s32)rd32(c, (RW(16) + 72))); F_001B75B0(c);
SET64(31, 0x2c40d4); SET64(17, (s32)rd32(c, (RW(16) + 72))); F_00139590(c);
SET64(31, 0x2c40dc);  F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 20)));
SET32(4, RW(17) << 2);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
if (RD(4) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 96))); goto L_002C4108; }
SET64(31, 0x2c4104);  F_0029CE50(c);
SET64(3, (s32)rd32(c, (RW(16) + 96)));
L_002C4108:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
SET64(3, rd8(c, (RW(3) + 180)));
{ int t = RD(3) == RD(0);  if (t) goto L_002C44B8; }
SET32(3, RW(0) + 15);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C44B8;
L_002C4124:;
SET64(31, 0x2c412c);  F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C44B8; }
SET64(31, 0x2c413c); SET64(4, (s32)rd32(c, (RW(16) + 120))); F_003B7900(c);
SET64(4, (s32)rd32(c, (RW(16) + 116)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c4150);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c4164);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 100)));
SET32(4, RW(0) + 20);
SET64(2, (s64)(s32)0x3f800000);
wr16(c, (RW(3) + 0), (u16)RW(4));
wr32(c, (RW(29) + 80), RW(2));
SET64(31, 0x2c4180); SET64(17, (s32)rd32(c, (RW(16) + 72))); F_00139590(c);
SET64(31, 0x2c4188);  F_00139590(c);
{ int t = RSD(17) < 0; SET64(4, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_002C41A8; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(17) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2c41a8); SET32(5, RW(29) + 80); F_001B8300(c);
L_002C41A8:;
SET32(3, RW(0) + 12);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C44B8;
L_002C41B4:;
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c41c8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C44B8; }
SET64(4, (s32)rd32(c, (RW(16) + 100)));
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(4) != RD(3);  if (t) goto L_002C44B8; }
SET64(4, (s32)rd32(c, (RW(16) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 364)));
{ u32 t = RW(25); SET64(31, 0x2c41f8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C44B8; }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c4214);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C44B8; }
SET64(31, 0x2c4224);  F_00139590(c);
SET64(31, 0x2c422c);  F_00139590(c);
SET64(31, 0x2c4234); SET64(4, (s32)rd32(c, (RW(2) + 20))); F_001B72D0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C44B8; }
SET64(31, 0x2c4244); SET64(4, (s32)rd32(c, (RW(16) + 120))); F_003B78A0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C44B8; }
SET64(4, (s32)rd32(c, (RW(16) + 104)));
SET64(25, (s32)rd32(c, (RW(4) + 388)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c4260);  rt_call(c, t); }
SET32(3, RW(0) + 100);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C44B8;
L_002C426C:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c427c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 116)));
c->f[12].u = c->f[0].u;
SET64(31, 0x2c428c); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(16) + 116)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c42a0);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c42b4);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C44B8; }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET32(19, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) != RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002C439C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c42e0);  rt_call(c, t); }
SET64(17, RD(2) << 48);
SET64(17, RSD(17) >> 48);
SET32(3, RW(17) + 1);
SET64(1, RD(3) < (u64)(s64)6);
if (RD(1) == RD(0)) { SET32(3, RW(0) + -1); goto L_002C437C; }
SET64(4, (s64)(s32)0x4b0000);
SET32(3, RW(3) << 2);
SET32(4, RW(4) + 10288);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x2c39c0: goto L_002C39C0; case 0x2c4314: goto L_002C4314; case 0x2c431c: goto L_002C431C; case 0x2c4324: goto L_002C4324; case 0x2c432c: goto L_002C432C; case 0x2c4334: goto L_002C4334; default: rt_jump(c, t); return; } }
L_002C4314:;
SET32(19, RW(0) + 1); goto L_002C4378;
L_002C431C:;
SET32(19, RW(0) + 2); goto L_002C4378;
L_002C4324:;
SET32(19, RW(0) + 4); goto L_002C4378;
L_002C432C:;
SET32(19, RW(0) + 3); goto L_002C4378;
L_002C4334:;
SET64(31, 0x2c433c);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_002C434C; }
SET32(5, RW(5) + 672);
L_002C434C:;
SET64(2, (s64)(s32)0x490000);
c->f[12].u = rd32(c, (RW(2) + 20544));
SET64(31, 0x2c435c); SET64(4, (s32)rd32(c, (RW(16) + 104))); F_00173230(c);
SET64(4, (s32)rd32(c, (RW(16) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 376)));
{ u32 t = RW(25); SET64(31, 0x2c4370);  rt_call(c, t); }
SET32(3, RW(0) + 11);
wr16(c, (RW(16) + 0), (u16)RW(3));
L_002C4378:;
SET32(3, RW(0) + -1);
L_002C437C:;
if (RD(17) == RD(3)) { SET32(3, RW(0) + -1); goto L_002C438C; }
wr16(c, (RW(16) + 124), (u16)RW(17));
SET32(3, RW(0) + -1);
L_002C438C:;
if (RD(17) != RD(3)) { SET32(3, RW(0) + -1); goto L_002C4444; }
SET64(18, RD(0) + (s64)1); goto L_002C4440;
L_002C439C:;
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(25, (s32)rd32(c, (RW(4) + 16))); goto L_002C43B8; }
SET32(2, RW(0) + 4);
if (RD(3) != RD(2)) { wr32(c, (RW(16) + 64), RW(0)); goto L_002C441C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
L_002C43B8:;
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c43c4);  rt_call(c, t); }
SET64(4, RD(2) << 48);
SET32(3, RW(0) + -1);
SET64(4, RSD(4) >> 48);
if (RD(4) == RD(3)) { SET64(19, RD(0) + RD(0)); goto L_002C4440; }
SET32(3, RW(0) + 2);
{ int t = RD(4) == RD(3);  if (t) goto L_002C4410; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(3, RW(0) + 10); goto L_002C4408; }
if (RD(4) == RD(0)) { SET32(3, RW(0) + 10); goto L_002C4400; }
 goto L_002C4440;
L_002C4400:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C4440;
L_002C4408:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C4440;
L_002C4410:;
SET64(19, RD(0) + RD(0));
 goto L_002C4440;
L_002C441C:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c4430); SET64(19, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + -1);
{ int t = RD(2) != RD(3);  if (t) goto L_002C4440; }
SET64(18, RD(0) + (s64)1);
L_002C4440:;
SET32(3, RW(0) + -1);
L_002C4444:;
{ int t = RD(19) == RD(3);  if (t) goto L_002C44B8; }
SET64(2, RD(18) & 0xff);
SET64(5, RD(19) + RD(0));
SET64(6, RD(2) ^ RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c4464); SET64(6, RD(6) < (u64)(s64)1); F_002C4500(c);
SET32(3, RW(0) + 10);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C44B8;
L_002C4470:;
SET64(4, (s32)rd32(c, (RW(2) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c4484);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C44B8; }
SET64(31, 0x2c4494); SET64(4, RD(16) + RD(0)); F_002C4D40(c);
SET64(31, 0x2c449c); SET64(4, RD(16) + RD(0)); F_00139AB0(c);
SET64(2, RD(0) | 0xffff);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + -25336);
SET64(31, 0x2c44b0); wr16(c, (RW(16) + 0), (u16)RW(2)); F_002C5320(c);
SET64(31, 0x2c44b8);  F_0023C660(c);
L_002C44B8:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002C44BC:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}
void F_002C39C0(Ctx *c) { B_002C39C0(c, 0x2c39c0); }
void F_002C4314(Ctx *c) { B_002C39C0(c, 0x2c4314); }
void F_002C431C(Ctx *c) { B_002C39C0(c, 0x2c431c); }
void F_002C4324(Ctx *c) { B_002C39C0(c, 0x2c4324); }
void F_002C432C(Ctx *c) { B_002C39C0(c, 0x2c432c); }
void F_002C4334(Ctx *c) { B_002C39C0(c, 0x2c4334); }

void F_002C44E0(Ctx *c) { /* func_002C44E0 */
ENTER(0x2c44e0);
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
 return;
}

void F_002C44F0(Ctx *c) { /* func_002C44F0 */
ENTER(0x2c44f0);
 return;
}

void F_002C4500(Ctx *c) { /* func_002C4500 */
ENTER(0x2c4500);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c4530); SET64(16, RD(5) + RD(0)); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002C487C; }
if (RD(18) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 128))); goto L_002C45C8; }
SET64(4, (s32)rd32(c, (RW(17) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2c4554);  rt_call(c, t); }
SET64(3, (s64)(s32)0x540000);
SET32(5, RW(17) + 156);
SET32(3, RW(3) + -25336);
SET32(4, RW(0) + 9);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(6, RW(3) + 28);
wr32(c, (RW(17) + 128), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 4)));
wr32(c, (RW(17) + 132), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 8)));
wr32(c, (RW(17) + 136), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
wr32(c, (RW(17) + 140), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
wr32(c, (RW(17) + 144), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 20)));
wr32(c, (RW(17) + 148), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
wr32(c, (RW(17) + 152), RW(2));
L_002C45A0:;
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(5) + 0), RW(3));
SET32(6, RW(6) + 8);
wr32(c, (RW(5) + 4), RW(2));
{ int t = RSD(4) > 0; SET32(5, RW(5) + 8); if (t) { POLL(); goto L_002C45A0; } }
SET64(4, (s32)rd32(c, (RW(17) + 96))); goto L_002C4640;
L_002C45C8:;
SET64(3, (s64)(s32)0x540000);
SET32(3, RW(3) + -25336);
SET32(6, RW(17) + 156);
SET32(5, RW(3) + 28);
SET32(4, RW(0) + 9);
wr32(c, (RW(3) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 132)));
wr32(c, (RW(3) + 4), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 136)));
wr32(c, (RW(3) + 8), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
wr32(c, (RW(3) + 12), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 144)));
wr32(c, (RW(3) + 16), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 148)));
wr32(c, (RW(3) + 20), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 152)));
wr32(c, (RW(3) + 24), RW(2));
L_002C4610:;
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(5) + 0), RW(3));
SET32(6, RW(6) + 8);
wr32(c, (RW(5) + 4), RW(2));
{ int t = RSD(4) > 0; SET32(5, RW(5) + 8); if (t) { POLL(); goto L_002C4610; } }
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c463c); SET32(4, RW(4) + -25336); F_002C5320(c);
SET64(4, (s32)rd32(c, (RW(17) + 96)));
L_002C4640:;
if (RD(4) == RD(0)) { SET32(2, RW(0) + 4); goto L_002C465C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4658); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(2, RW(0) + 4);
L_002C465C:;
{ int t = RD(16) == RD(2); wr32(c, (RW(17) + 96), RW(0)); if (t) goto L_002C47D0; }
SET32(2, RW(0) + 3);
if (RD(16) == RD(2)) { SET32(4, RW(0) + 28); goto L_002C4780; }
SET32(2, RW(0) + 2);
if (RD(16) == RD(2)) { SET32(4, RW(0) + 24); goto L_002C4734; }
SET32(2, RW(0) + 1);
if (RD(16) == RD(2)) { SET32(4, RW(0) + 36); goto L_002C46DC; }
if (RD(16) == RD(0)) { SET32(4, RW(0) + 20); goto L_002C4698; }
SET64(2, (s32)rd32(c, (RW(17) + 96))); goto L_002C4840;
L_002C4698:;
SET64(31, 0x2c46a0);  F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 96), RW(2)); goto L_002C483C; }
SET64(4, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(4, RW(4) + -15088);
SET32(3, RW(3) + -15136);
wr32(c, (RW(2) + 16), RW(4));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(3));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(17) + 96), RW(2));
 goto L_002C483C;
L_002C46DC:;
SET64(31, 0x2c46e4);  F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 96), RW(2)); goto L_002C483C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -15088);
SET32(4, RW(4) + -15232);
wr32(c, (RW(2) + 16), RW(3));
wr32(c, (RW(2) + 4), RW(0));
SET32(3, RW(0) + 1);
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(4));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 28), RW(0));
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 0), RW(3));
wr8(c, (RW(2) + 32), (u8)RW(0));
wr32(c, (RW(17) + 96), RW(2));
 goto L_002C483C;
L_002C4734:;
SET64(31, 0x2c473c);  F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 96), RW(2)); goto L_002C483C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -15088);
SET32(4, RW(4) + -15184);
wr32(c, (RW(2) + 16), RW(3));
wr32(c, (RW(2) + 4), RW(0));
SET32(3, RW(0) + 2);
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(4));
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 0), RW(3));
wr32(c, (RW(17) + 96), RW(2));
 goto L_002C483C;
L_002C4780:;
SET64(31, 0x2c4788);  F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 96), RW(2)); goto L_002C483C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -15088);
SET32(4, RW(4) + -15280);
wr32(c, (RW(2) + 16), RW(3));
wr32(c, (RW(2) + 4), RW(0));
SET32(3, RW(0) + 3);
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(4));
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 0), RW(3));
wr32(c, (RW(17) + 96), RW(2));
 goto L_002C483C;
L_002C47D0:;
SET64(31, 0x2c47d8); SET32(4, RW(0) + 80); F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 96), RW(2)); goto L_002C483C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -15088);
SET32(4, RW(4) + -15328);
wr32(c, (RW(2) + 16), RW(3));
wr32(c, (RW(2) + 4), RW(0));
SET32(3, RW(0) + 4);
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(4));
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 24), RW(0));
wr32(c, (RW(2) + 28), RW(0));
wr32(c, (RW(2) + 44), RW(0));
wr32(c, (RW(2) + 48), RW(0));
wr32(c, (RW(2) + 52), RW(0));
wr32(c, (RW(2) + 56), RW(0));
wr32(c, (RW(2) + 64), RW(0));
wr8(c, (RW(2) + 68), (u8)RW(0));
wr32(c, (RW(2) + 76), RW(0));
wr32(c, (RW(2) + 0), RW(3));
wr32(c, (RW(2) + 52), RW(0));
wr32(c, (RW(17) + 96), RW(2));
L_002C483C:;
SET64(2, (s32)rd32(c, (RW(17) + 96)));
L_002C4840:;
SET32(5, RW(17) + 88);
wr32(c, (RW(2) + 12), RW(17));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2c485c); SET32(6, RW(17) + 80); rt_call(c, t); }
{ int t = RD(16) != RD(0);  if (t) goto L_002C4878; }
SET64(2, (s32)rd32(c, (RW(17) + 96)));
SET64(5, rd16(c, (RW(17) + 124)));
SET64(2, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x2c4878); SET32(4, RW(2) + 168); F_0013BA20(c);
L_002C4878:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002C487C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002C4890(Ctx *c) { /* func_002C4890 */
ENTER(0x2c4890);
 return;
}

void F_002C48A0(Ctx *c) { /* func_002C48A0 */
ENTER(0x2c48a0);
SET32(29, RW(29) + -240);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET32(4, RW(0) + 32);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(31, 0x2c48c8); wr32(c, (RW(29) + 0), c->f[20].u); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C48D8; }
SET64(31, 0x2c48d8); SET64(4, RD(16) + RD(0)); F_0014FE60(c);
L_002C48D8:;
SET32(5, RW(0) + 320);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2c48f4); wr32(c, (RW(19) + 76), RW(16)); F_0014FCE0(c);
SET64(31, 0x2c48fc); SET32(4, RW(0) + 2064); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C4928; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -1728);
SET32(6, RW(6) + -1840);
SET32(7, RW(0) + 64);
SET64(31, 0x2c4924); SET32(8, RW(0) + 32); F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002C4928:;
SET32(4, RW(29) + 176);
SET64(31, 0x2c4934); wr32(c, (RW(19) + 80), RW(16)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 196), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 200), RW(0));
wr32(c, (RW(29) + 192), RW(2));
wr32(c, (RW(29) + 204), RW(0));
wr16(c, (RW(29) + 208), (u16)RW(0));
wr16(c, (RW(29) + 210), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 108)));
SET64(31, 0x2c4960); SET64(5, RD(0) + RD(0)); F_002DC6A0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c496c); SET32(4, RW(29) + 176); F_001569F0(c);
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_002C4978:;
SET64(3, (s32)rd32(c, (RW(29) + 196)));
SET64(7, RD(18) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET64(8, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 200)));
SET32(3, RW(3) + RW(17));
SET64(6, (s32)rd32(c, (RW(19) + 76)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) + RW(16));
SET64(31, 0x2c49a4); SET32(5, RW(2) + RW(3)); F_0014F2D0(c);
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 4);
SET64(2, RSD(18) < (s64)32);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 64); if (t) { POLL(); goto L_002C4978; } }
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 176);
SET32(2, RW(2) + -26960);
SET64(31, 0x2c49cc); wr32(c, (RW(29) + 192), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 176);
SET64(31, 0x2c49d8); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(31, 0x2c49e0); SET32(4, RW(0) + 4); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C49F8; }
SET64(4, (s32)rd32(c, (RW(19) + 108)));
SET64(31, 0x2c49f4); SET32(5, RW(0) + 1); F_002DC6A0(c);
wr32(c, (RW(16) + 0), RW(2));
L_002C49F8:;
SET64(2, (s64)(s32)0x439c0000);
wr32(c, (RW(19) + 88), RW(16));
wr32(c, (RW(29) + 164), RW(2));
SET64(4, (s64)(s32)0x44000000);
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x42e00000);
c->f[0].u = rd32(c, (RW(2) + 10120));
wr32(c, (RW(29) + 232), RW(4));
wr32(c, (RW(29) + 236), RW(3));
SET32(4, RW(29) + 96);
SET64(17, rd16(c, (RW(28) + -30348)));
SET64(2, (s64)(s32)0x3f800000);
SET64(16, (s32)rd32(c, (RW(19) + 88)));
wr32(c, (RW(29) + 172), RW(2));
wr32(c, (RW(29) + 168), c->f[0].u);
SET64(2, (s64)(s32)0x3f4c0000);
wr32(c, (RW(29) + 160), RW(0));
SET64(2, RD(2) | 0xcccd);
c->f[1].u = RW(2);
SET64(2, (s64)(s32)0x420000);
c->f[0].u = rd32(c, (RW(2) + -23352));
SET64(31, 0x2c4a54); c->f[20].f = fpu(F(1) * F(0)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 116), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 120), RW(0));
wr32(c, (RW(29) + 112), RW(2));
wr32(c, (RW(29) + 124), RW(0));
wr16(c, (RW(29) + 128), (u16)RW(0));
wr16(c, (RW(29) + 130), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2c4a80); SET32(4, RW(29) + 96); F_001569F0(c);
SET64(5, (s32)rd32(c, (RW(29) + 116)));
SET64(2, RD(17) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 120)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 96);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -26960);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2c4ab0); wr32(c, (RW(29) + 112), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 96);
SET64(31, 0x2c4abc); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(31, 0x2c4ac4); SET32(4, RW(0) + 976); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C4AD8; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c4ad8); SET32(5, RW(0) + 1); F_002BB8B0(c);
L_002C4AD8:;
SET64(31, 0x2c4ae0); wr32(c, (RW(19) + 92), RW(17)); F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
c->f[1].u = rd32(c, (RW(29) + 232));
c->f[0].u = rd32(c, (RW(29) + 236));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 156), RW(2));
wr32(c, (RW(29) + 224), c->f[1].u);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 228), c->f[0].u);
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
SET64(31, 0x2c4b18); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); F_0022ACB0(c);
SET64(4, (s32)rd32(c, (RW(19) + 92)));
SET64(8, RD(2) + RD(0));
SET64(9, RD(16) + RD(0));
SET32(5, RW(29) + 144);
SET32(6, RW(29) + 224);
SET32(7, RW(0) + 1);
SET64(10, RD(0) + RD(0));
SET64(31, 0x2c4b3c); SET32(11, RW(29) + 232); F_002BB420(c);
SET64(31, 0x2c4b44); SET64(4, (s32)rd32(c, (RW(19) + 92))); F_002BAF40(c);
SET64(4, (s32)rd32(c, (RW(19) + 92)));
SET64(3, (s64)(s32)0x42400000);
SET64(2, (s64)(s32)0x41800000);
SET64(4, (s32)rd32(c, (RW(4) + 940)));
wr32(c, (RW(4) + 0), RW(3));
wr32(c, (RW(4) + 4), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET64(31, 0x2c4b68); wr32(c, (RW(2) + 452), c->f[20].u); F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 92))); goto L_002C4B7C; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(19) + 92)));
L_002C4B7C:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 372)));
{ u32 t = RW(25); SET64(31, 0x2c4b8c);  rt_call(c, t); }
c->f[0].u = rd32(c, (RW(29) + 164));
SET32(2, RW(0) + 38);
SET32(4, RW(0) + 20);
wr32(c, (RW(28) + -30012), c->f[0].u);
SET64(31, 0x2c4ba4); wr16(c, (RW(19) + 84), (u16)RW(2)); F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 96), RW(2)); goto L_002C4BD8; }
SET64(4, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(4, RW(4) + -15088);
SET32(3, RW(3) + -15136);
wr32(c, (RW(2) + 16), RW(4));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(3));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(19) + 96), RW(2));
L_002C4BD8:;
SET32(5, RW(19) + 88);
wr32(c, (RW(2) + 12), RW(19));
SET64(4, (s32)rd32(c, (RW(19) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2c4bf4); SET32(6, RW(19) + 80); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 96)));
SET32(4, RW(0) + 384);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x2c4c08); wr8(c, (RW(2) + 167), (u8)RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C4C1C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c4c1c); SET32(5, RW(0) + 1); F_0014E400(c);
L_002C4C1C:;
wr32(c, (RW(19) + 116), RW(16));
SET64(5, (s32)rd32(c, (RW(19) + 80)));
SET64(6, (s32)rd32(c, (RW(19) + 112)));
SET64(31, 0x2c4c30); SET64(4, RD(16) + RD(0)); F_002C9580(c);
SET64(2, (s32)rd32(c, (RW(19) + 116)));
SET64(31, 0x2c4c3c); c->f[20].u = rd32(c, (RW(2) + 164)); F_002BF950(c);
SET64(2, (s64)(s32)0x40000000);
SET64(4, (s32)rd32(c, (RW(19) + 116)));
c->f[2].u = RW(2);
SET64(3, (s64)(s32)0x41800000);
c->f[1].f = fpu_div(F(0), F(2));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].f = fpu_div(F(20), F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(4) + 32), c->f[0].u);
c->f[12].u = RW(2);
SET64(2, (s32)rd32(c, (RW(19) + 116)));
wr32(c, (RW(2) + 36), RW(3));
SET64(2, (s32)rd32(c, (RW(19) + 116)));
SET64(31, 0x2c4c78); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(19) + 116)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c4c90); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 116)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c4ca4);  rt_call(c, t); }
SET64(4, (s64)(s32)0x540000);
wr8(c, (RW(19) + 228), (u8)RW(0));
SET32(4, RW(4) + -25336);
SET32(6, RW(19) + 156);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(7, RW(4) + 28);
SET32(5, RW(0) + 9);
wr32(c, (RW(19) + 128), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(19) + 132), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(19) + 136), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 12)));
wr32(c, (RW(19) + 140), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 16)));
wr32(c, (RW(19) + 144), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 20)));
wr32(c, (RW(19) + 148), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 24)));
wr32(c, (RW(19) + 152), RW(3));
L_002C4CF4:;
SET64(4, (s32)rd32(c, (RW(7) + 0)));
SET32(5, RW(5) + -1);
SET64(3, (s32)rd32(c, (RW(7) + 4)));
wr32(c, (RW(6) + 0), RW(4));
SET32(7, RW(7) + 8);
wr32(c, (RW(6) + 4), RW(3));
{ int t = RSD(5) > 0; SET32(6, RW(6) + 8); if (t) { POLL(); goto L_002C4CF4; } }
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 240); return;
}

void F_002C4D40(Ctx *c) { /* func_002C4D40 */
ENTER(0x2c4d40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 76), RW(0)); goto L_002C4D74; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4d70); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 76), RW(0));
L_002C4D74:;
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 80)));
SET64(31, 0x2c4d84); SET32(5, RW(5) + -1840); F_001022C0(c);
wr32(c, (RW(17) + 80), RW(0));
SET64(31, 0x2c4d90); SET64(4, (s32)rd32(c, (RW(17) + 88))); F_001004B0(c);
wr32(c, (RW(17) + 88), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 92)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 92), RW(0)); goto L_002C4DB4; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c4db0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 92), RW(0));
L_002C4DB4:;
SET64(4, (s32)rd32(c, (RW(17) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 96), RW(0)); goto L_002C4DD4; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4dd0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
L_002C4DD4:;
SET64(4, (s32)rd32(c, (RW(17) + 100)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 100), RW(0)); goto L_002C4DF4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c4df0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 100), RW(0));
L_002C4DF4:;
SET64(16, (s32)rd32(c, (RW(17) + 104)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 104), RW(0)); goto L_002C4E38; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -22096);
wr32(c, (RW(16) + 388), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c4e1c); SET32(4, RW(16) + 64); rt_call(c, t); }
SET32(4, RW(16) + 64);
SET32(5, RW(0) + -1);
SET64(31, 0x2c4e2c); wr8(c, (RW(16) + 384), (u8)RW(0)); F_0014CEA0(c);
SET64(31, 0x2c4e34); SET64(4, RD(16) + RD(0)); F_001004B0(c);
wr32(c, (RW(17) + 104), RW(0));
L_002C4E38:;
SET64(4, (s32)rd32(c, (RW(17) + 108)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 108), RW(0)); goto L_002C4E58; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4e54); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 108), RW(0));
L_002C4E58:;
SET64(4, (s32)rd32(c, (RW(17) + 112)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 112), RW(0)); goto L_002C4E78; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4e74); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 112), RW(0));
L_002C4E78:;
SET64(4, (s32)rd32(c, (RW(17) + 116)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 116), RW(0)); goto L_002C4E98; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4e94); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 116), RW(0));
L_002C4E98:;
SET64(4, (s32)rd32(c, (RW(17) + 120)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 120), RW(0)); goto L_002C4EB8; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4eb4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 120), RW(0));
L_002C4EB8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C4ED0(Ctx *c) { /* func_002C4ED0 */
ENTER(0x2c4ed0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002C4FE8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15408);
SET32(3, RW(3) + -15400);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -15388);
wr32(c, (RW(16) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 60))); goto L_002C4F44; }
SET64(31, 0x2c4f24);  F_00162440(c);
SET64(5, (s32)rd32(c, (RW(16) + 92)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -30060))); goto L_002C4F38; }
SET32(5, RW(5) + 192);
SET64(4, (s32)rd32(c, (RW(28) + -30060)));
L_002C4F38:;
SET64(31, 0x2c4f40);  F_002A0330(c);
SET64(4, (s32)rd32(c, (RW(16) + 60)));
L_002C4F44:;
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 60), RW(0)); goto L_002C4F60; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c4f5c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 60), RW(0));
L_002C4F60:;
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 92), RW(0)); goto L_002C4F80; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4f7c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 92), RW(0));
L_002C4F80:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 96), RW(0)); goto L_002C4FA0; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4f9c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 96), RW(0));
L_002C4FA0:;
SET64(4, (s32)rd32(c, (RW(16) + 100)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 100), RW(0)); goto L_002C4FC0; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4fbc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 100), RW(0));
L_002C4FC0:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c4fd0); wr32(c, (RW(16) + 88), RW(0)); F_00139F30(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(16) + RD(0)); goto L_002C4FEC; }
SET64(31, 0x2c4fe8); SET64(4, RD(16) + RD(0)); F_001004B0(c);
L_002C4FE8:;
SET64(2, RD(16) + RD(0));
L_002C4FEC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C5000(Ctx *c) { /* func_002C5000 */
ENTER(0x2c5000);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C5068; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15488);
SET32(3, RW(3) + -15480);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -15468);
SET64(31, 0x2c5044); wr32(c, (RW(17) + 36), RW(2)); F_002C4D40(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c5050); SET64(5, RD(0) + RD(0)); F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C506C; }
SET64(31, 0x2c5068); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002C5068:;
SET64(2, RD(17) + RD(0));
L_002C506C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C5080(Ctx *c) { /* func_002C5080 */
ENTER(0x2c5080);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c5098); SET64(16, RD(4) + RD(0)); F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15488);
SET32(3, RW(3) + -15480);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -15468);
SET64(3, RD(0) | 0xff01);
wr32(c, (RW(16) + 36), RW(2));
wr8(c, (RW(16) + 60), (u8)RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 80), RW(0));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 92), RW(0));
wr32(c, (RW(16) + 96), RW(0));
wr32(c, (RW(16) + 100), RW(0));
wr32(c, (RW(16) + 104), RW(0));
wr32(c, (RW(16) + 108), RW(0));
wr32(c, (RW(16) + 112), RW(0));
wr32(c, (RW(16) + 116), RW(0));
wr32(c, (RW(16) + 120), RW(0));
wr8(c, (RW(16) + 228), (u8)RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr16(c, (RW(16) + 84), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002C5110(Ctx *c) { /* func_002C5110 */
ENTER(0x2c5110);
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + -25336); return;
}

void F_002C5120(Ctx *c) { /* func_002C5120 */
ENTER(0x2c5120);
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + -25336); return;
}

void F_002C5130(Ctx *c) { /* func_002C5130 */
ENTER(0x2c5130);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(0) + 3);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x3f330000); goto L_002C5180; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x3f000000); goto L_002C5174; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x3e990000); goto L_002C5164; }
c->f[0].u = RW(0);
 goto L_002C5188;
L_002C5164:;
SET64(2, RD(2) | 0x999a);
c->f[0].u = RW(2);
 goto L_002C5188;
L_002C5174:;
c->f[0].u = RW(2);
 goto L_002C5188;
L_002C5180:;
SET64(2, RD(2) | 0x3333);
c->f[0].u = RW(2);
L_002C5188:;
 return;
}

void F_002C5190(Ctx *c) { /* func_002C5190 */
ENTER(0x2c5190);
c->f[1].u = rd32(c, (RW(4) + 24));
SET64(2, (s64)(s32)0x42c80000);
c->f[0].u = RW(2);
c->f[3].u = RW(0);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu_div(F(1), F(0));
c->fcc = F(0) <= F(3);
{ int t = c->fcc;  if (t) goto L_002C51E0; }
SET64(2, (s64)(s32)0x3f230000);
SET64(3, (s64)(s32)0x3eb80000);
SET64(2, RD(2) | 0xd70a);
SET64(3, RD(3) | 0x51ec);
c->f[1].u = RW(2);
c->f[2].u = RW(3);
c->facc = fpu(F(3) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(0));
L_002C51E0:;
 return;
}

void F_002C51F0(Ctx *c) { /* func_002C51F0 */
ENTER(0x2c51f0);
c->f[1].u = rd32(c, (RW(4) + 16));
SET64(3, (s64)(s32)0x42c80000);
c->f[0].u = RW(3);
SET64(2, (s64)(s32)0x3e800000);
c->f[3].u = RW(2);
SET64(3, (s64)(s32)0x3f400000);
c->f[1].f = (f32)(s32)c->f[1].u;
SET64(2, (s64)(s32)0x3dcc0000);
SET64(2, RD(2) | 0xcccd);
c->f[4].f = fpu_div(F(1), F(0));
c->f[0].u = RW(2);
c->fcc = F(1) <= F(0);
c->f[2].u = RW(3);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(2));
{ int t = !c->fcc; c->f[0].f = fpu(c->facc + F(3) * F(4)); if (t) goto L_002C5240; }
c->f[0].u = c->f[1].u;
L_002C5240:;
 return;
}

void F_002C5250(Ctx *c) { /* func_002C5250 */
ENTER(0x2c5250);
c->f[1].u = rd32(c, (RW(4) + 20));
SET64(2, (s64)(s32)0x42c80000);
c->f[0].u = RW(2);
c->f[3].u = RW(0);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu_div(F(1), F(0));
c->fcc = F(1) <= F(3);
if (c->fcc) { SET64(2, (s64)(s32)0x3f800000); goto L_002C52A4; }
SET64(2, (s64)(s32)0x3d4c0000);
SET64(3, (s64)(s32)0x3f730000);
SET64(2, RD(2) | 0xcccd);
SET64(3, RD(3) | 0x3333);
c->f[1].u = RW(2);
c->f[2].u = RW(3);
c->facc = fpu(F(3) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(0));
SET64(2, (s64)(s32)0x3f800000);
L_002C52A4:;
c->f[1].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_002C52BC; }
c->f[0].u = c->f[1].u;
L_002C52BC:;
 return;
}

void F_002C52D0(Ctx *c) { /* func_002C52D0 */
ENTER(0x2c52d0);
SET32(2, RW(5) << 3);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 60)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1); return;
}

void F_002C52F0(Ctx *c) { /* func_002C52F0 */
ENTER(0x2c52f0);
SET32(3, RW(5) << 3);
SET32(2, RW(6) << 2);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 28))); return;
}

void F_002C5310(Ctx *c) { /* func_002C5310 */
ENTER(0x2c5310);
SET32(2, RW(0) + 1); return;
}

void F_002C5320(Ctx *c) { /* func_002C5320 */
ENTER(0x2c5320);
SET32(2, RW(0) + 1); return;
}

void F_002C5330(Ctx *c) { /* func_002C5330 */
ENTER(0x2c5330);
SET64(12, RD(5) << 48);
SET64(13, RD(0) + RD(0));
SET64(12, RSD(12) >> 48);
SET32(10, RW(0) + 1);
SET32(9, RW(0) + 2);
SET32(8, RW(0) + 3);
SET32(7, RW(0) + 4);
SET32(6, RW(0) + 5);
SET32(5, RW(0) + 6);
SET32(11, RW(0) + -1);
L_002C5358:;
{ int t = RD(12) == RD(11);  if (t) goto L_002C5368; }
{ int t = RD(13) != RD(12);  if (t) goto L_002C5390; }
L_002C5368:;
wr32(c, (RW(4) + 28), RW(10));
wr32(c, (RW(4) + 32), RW(9));
wr32(c, (RW(4) + 36), RW(8));
wr32(c, (RW(4) + 40), RW(7));
wr32(c, (RW(4) + 44), RW(6));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(5));
wr32(c, (RW(4) + 56), RW(0));
wr32(c, (RW(4) + 60), RW(0));
L_002C5390:;
SET32(13, RW(13) + 1);
SET64(3, RSD(13) < (s64)2);
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 36); if (t) { POLL(); goto L_002C5358; } }
 return;
}

void F_002C53B0(Ctx *c) { /* func_002C53B0 */
ENTER(0x2c53b0);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(0) + 100);
wr32(c, (RW(4) + 0), RW(3));
SET32(5, RW(0) + -1);
wr32(c, (RW(4) + 4), RW(3));
wr32(c, (RW(4) + 8), RW(3));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(2));
wr32(c, (RW(4) + 20), RW(2));
SET64(31, 0x2c53e4); wr32(c, (RW(4) + 24), RW(2)); F_002C5330(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002C53F0(Ctx *c) { /* func_002C53F0 */
ENTER(0x2c53f0);
SET64(2, RD(4) + RD(0)); return;
}

void F_002C5400(Ctx *c) { /* func_002C5400 */
ENTER(0x2c5400);
SET32(29, RW(29) + -208);
SET32(3, RW(0) + 21);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(5, rd16(c, (RW(4) + 0)));
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002C5800; }
SET32(3, RW(0) + 20);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 60))); goto L_002C57D8; }
SET32(3, RW(0) + 10);
if (RD(5) == RD(3)) { c->f[12].u = rd32(c, (RW(16) + 72)); goto L_002C54B8; }
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 60))); goto L_002C546C; }
{ int t = RD(5) == RD(0);  if (t) goto L_002C5458; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002C58DC;
L_002C5458:;
SET64(31, 0x2c5460);  F_002C58F0(c);
SET32(3, RW(0) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C58D8;
L_002C546C:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c547c);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002C58D8; }
SET64(2, (s32)rd32(c, (RW(16) + 92)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 228), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(6, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2c54ac); SET64(5, (s32)rd32(c, (RW(16) + 100))); rt_call(c, t); }
SET32(3, RW(0) + 10);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C58D8;
L_002C54B8:;
SET64(31, 0x2c54c0);  F_0011F6F0(c);
c->f[12].u = rd32(c, (RW(16) + 72));
SET64(31, 0x2c54cc); c->f[21].u = c->f[0].u; F_0011F6F0(c);
c->f[20].u = c->f[0].u;
SET64(31, 0x2c54d8); SET32(4, RW(29) + 48); F_0013AEA0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x2c54e4); SET32(5, RW(16) + 80); F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c54f0); SET32(4, RW(29) + 128); F_0013ADA0(c);
SET64(3, (s32)rd32(c, (RW(16) + 60)));
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET32(4, RW(3) + 64);
wr128(c, (RW(3) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET64(31, 0x2c551c); wr128(c, (RW(3) + 112) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(2, (s64)(s32)0xbf800000);
SET64(3, (s64)(s32)0x40d00000);
wr32(c, (RW(29) + 192), RW(2));
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x42240000);
SET64(5, (s32)rd32(c, (RW(16) + 92)));
wr32(c, (RW(29) + 200), RW(2));
c->f[3].u = RW(2);
SET64(2, (s64)(s32)0x3f8c0000);
wr32(c, (RW(29) + 196), RW(3));
SET64(2, RD(2) | 0xcccd);
SET32(4, RW(5) + 784);
c->f[1].u = RW(2);
c->f[0].u = c->f[21].u ^ 0x80000000u;
SET64(2, (s64)(s32)0x3e990000);
c->f[0].f = fpu(F(1) * F(0));
SET64(7, RD(2) | 0x999a);
SET64(2, (s64)(s32)0x40260000);
SET64(6, RD(2) | 0x6666);
SET64(2, (s64)(s32)0x40c60000);
c->f[0].f = fpu(F(2) + F(0));
c->f[4].u = RW(3);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 204), RW(3));
wr32(c, (RW(29) + 112), c->f[0].u);
wr32(c, (RW(29) + 124), RW(3));
c->f[1].u = RW(6);
SET64(3, RD(2) | 0x6666);
c->f[0].u = RW(3);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
c->f[0].f = fpu(F(3) + F(0));
wr32(c, (RW(29) + 120), c->f[0].u);
c->f[0].u = RW(0);
c->f[2].u = RW(7);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(20));
c->f[0].f = fpu(F(4) + F(0));
wr32(c, (RW(29) + 116), c->f[0].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(5) + 800) & ~15u, &c->r[3]);
wr128(c, (RW(5) + 816) & ~15u, &c->r[2]);
SET64(31, 0x2c55c8); wr32(c, (RW(5) + 832), RW(0)); F_0015CEB0(c);
SET64(2, (s64)(s32)0x520000);
SET64(3, (s64)(s32)0x40400000);
c->f[2].u = rd32(c, (RW(2) + 14864));
SET64(25, (s32)rd32(c, (RW(16) + 76)));
c->f[3].u = RW(3);
SET32(4, RW(16) + 72);
SET64(3, (s64)(s32)0x40490000);
c->f[2].f = fpu(F(3) * F(2));
SET64(2, RD(3) | 0xfdb);
SET64(25, (s32)rd32(c, (RW(25) + 8)));
c->f[1].u = RW(2);
c->f[1].f = fpu(F(1) * F(2));
SET64(2, (s64)(s32)0x43340000);
c->f[0].u = RW(2);
c->f[20].f = fpu_div(F(1), F(0));
{ u32 t = RW(25); SET64(31, 0x2c561c);  rt_call(c, t); }
SET64(3, (s64)(s32)0x42700000);
SET64(2, (s64)(s32)0x40490000);
c->f[1].u = RW(3);
SET64(2, RD(2) | 0xfdb);
c->f[1].f = fpu_div(F(20), F(1));
c->f[12].f = fpu(F(1) + F(0));
c->f[1].u = RW(2);
c->fcc = F(12) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_002C5670; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c565c); c->f[12].f = fpu(F(1) + F(12)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_002C56B0;
L_002C5670:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002C56B0; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c569c); c->f[12].f = fpu(F(12) - F(1)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_002C56B0:;
SET64(25, (s32)rd32(c, (RW(16) + 76)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c56c0); SET32(4, RW(16) + 72); rt_call(c, t); }
SET64(2, (s64)(s32)0x520000);
SET64(3, (s64)(s32)0x40400000);
c->f[2].u = rd32(c, (RW(2) + 14864));
SET64(25, (s32)rd32(c, (RW(16) + 84)));
c->f[3].u = RW(3);
SET32(4, RW(16) + 80);
SET64(3, (s64)(s32)0x40490000);
c->f[2].f = fpu(F(3) * F(2));
SET64(2, RD(3) | 0xfdb);
SET64(25, (s32)rd32(c, (RW(25) + 8)));
c->f[1].u = RW(2);
c->f[1].f = fpu(F(1) * F(2));
SET64(2, (s64)(s32)0x43340000);
c->f[0].u = RW(2);
c->f[20].f = fpu_div(F(1), F(0));
{ u32 t = RW(25); SET64(31, 0x2c5714);  rt_call(c, t); }
SET64(3, (s64)(s32)0x42700000);
SET64(2, (s64)(s32)0x40490000);
c->f[1].u = RW(3);
SET64(2, RD(2) | 0xfdb);
c->f[1].f = fpu_div(F(20), F(1));
c->f[12].f = fpu(F(1) + F(0));
c->f[1].u = RW(2);
c->fcc = F(12) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_002C5768; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c5754); c->f[12].f = fpu(F(1) + F(12)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_002C57A8;
L_002C5768:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002C57A8; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c5794); c->f[12].f = fpu(F(12) - F(1)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_002C57A8:;
SET64(25, (s32)rd32(c, (RW(16) + 84)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c57b8); SET32(4, RW(16) + 80); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(2, (s64)(s32)0x520000);
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 192)));
{ u32 t = RW(25); SET64(31, 0x2c57d0); c->f[12].u = rd32(c, (RW(2) + 14864)); rt_call(c, t); }
 goto L_002C58D8;
L_002C57D8:;
SET64(6, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2c57ec); SET64(5, (s32)rd32(c, (RW(16) + 100))); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 92)));
SET32(3, RW(0) + 21);
wr8(c, (RW(4) + 228), (u8)RW(0));
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C58D8;
L_002C5800:;
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2c5814);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C58D8; }
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 60))); goto L_002C5850; }
SET64(31, 0x2c5830);  F_00162440(c);
SET64(5, (s32)rd32(c, (RW(16) + 92)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -30060))); goto L_002C5844; }
SET32(5, RW(5) + 192);
SET64(4, (s32)rd32(c, (RW(28) + -30060)));
L_002C5844:;
SET64(31, 0x2c584c);  F_002A0330(c);
SET64(4, (s32)rd32(c, (RW(16) + 60)));
L_002C5850:;
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 60), RW(0)); goto L_002C586C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c5868); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 60), RW(0));
L_002C586C:;
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 92), RW(0)); goto L_002C588C; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c5888); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 92), RW(0));
L_002C588C:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 96), RW(0)); goto L_002C58AC; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c58a8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 96), RW(0));
L_002C58AC:;
SET64(4, (s32)rd32(c, (RW(16) + 100)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 100), RW(0)); goto L_002C58CC; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c58c8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 100), RW(0));
L_002C58CC:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c58d8); wr32(c, (RW(16) + 88), RW(0)); F_00139AB0(c);
L_002C58D8:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002C58DC:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 208); return;
}

void F_002C58F0(Ctx *c) { /* func_002C58F0 */
ENTER(0x2c58f0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2c590c); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_002BF970(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(16, (s32)c->f[0].u);
SET64(31, 0x2c591c);  F_002BF9A0(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(4, RW(0) + 496);
wr32(c, (RW(29) + 76), RW(16));
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 68), RW(0));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x2c593c); wr32(c, (RW(29) + 72), RW(2)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C5994; }
SET32(5, RW(0) + 60);
SET64(4, RD(18) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x2c5958); SET64(7, RD(5) + RD(0)); F_002A36E0(c);
SET32(16, RW(18) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(16) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2c5970); wr32(c, (RW(18) + 240), RW(4)); F_002AB2A0(c);
SET64(31, 0x2c5978); SET32(4, RW(16) + 32); F_002A59A0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 240), RW(16));
SET32(2, RW(2) + -30800);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 144), RW(2));
SET64(31, 0x2c5994); SET32(5, RW(18) + 272); F_002A35D0(c);
L_002C5994:;
SET32(4, RW(0) + 496);
SET64(31, 0x2c59a0); wr32(c, (RW(17) + 96), RW(18)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C59F8; }
SET32(5, RW(0) + 60);
SET64(4, RD(18) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x2c59bc); SET64(7, RD(5) + RD(0)); F_002A36E0(c);
SET32(16, RW(18) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(16) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2c59d4); wr32(c, (RW(18) + 240), RW(4)); F_002AB2A0(c);
SET64(31, 0x2c59dc); SET32(4, RW(16) + 32); F_002A59A0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 240), RW(16));
SET32(2, RW(2) + -30800);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 144), RW(2));
SET64(31, 0x2c59f8); SET32(5, RW(18) + 272); F_002A35D0(c);
L_002C59F8:;
SET32(4, RW(0) + 928);
SET64(31, 0x2c5a04); wr32(c, (RW(17) + 100), RW(18)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C5A1C; }
SET64(5, (s32)rd32(c, (RW(28) + -30060)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c5a1c); SET32(6, RW(0) + 16384); F_001626E0(c);
L_002C5A1C:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 64);
SET64(31, 0x2c5a2c); wr32(c, (RW(17) + 92), RW(16)); F_00162290(c);
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET64(2, (s32)rd32(c, (RW(2) + 236)));
wr8(c, (RW(2) + 324), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 92)));
SET64(31, 0x2c5a44); SET32(5, RW(0) + 1); F_001624B0(c);
SET64(2, (s64)(s32)0x3eb20000);
SET64(2, RD(2) | 0xb8c3);
c->f[12].u = RW(2);
SET64(31, 0x2c5a58); SET64(4, (s32)rd32(c, (RW(17) + 92))); F_00162100(c);
SET64(2, (s32)rd32(c, (RW(17) + 92)));
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2c5a74); SET64(5, (s32)rd32(c, (RW(17) + 96))); F_002AB090(c);
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2c5a88); SET64(5, (s32)rd32(c, (RW(17) + 100))); F_002AB090(c);
SET64(31, 0x2c5a90); SET32(4, RW(0) + 416); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C5BBC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c5aa4); SET32(5, RW(0) + 1536); F_0013A040(c);
SET64(31, 0x2c5aac); SET32(4, RW(16) + 64); F_00240AE0(c);
SET64(31, 0x2c5ab4); SET32(4, RW(16) + 224); F_00141AA0(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -25072);
SET32(2, RW(2) + -25064);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -25052);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 36), RW(3));
SET32(2, RW(2) + -24992);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 208), RW(2));
SET32(3, RW(3) + -24968);
SET64(2, RD(0) | 0xffff);
wr32(c, (RW(16) + 240), RW(3));
wr32(c, (RW(16) + 244), RW(0));
wr32(c, (RW(16) + 248), RW(0));
wr32(c, (RW(16) + 252), RW(0));
wr32(c, (RW(16) + 256), RW(0));
wr32(c, (RW(16) + 260), RW(0));
wr16(c, (RW(16) + 264), (u16)RW(0));
wr16(c, (RW(16) + 266), (u16)RW(0));
wr16(c, (RW(16) + 268), (u16)RW(0));
wr8(c, (RW(16) + 270), (u8)RW(0));
wr8(c, (RW(16) + 271), (u8)RW(0));
wr8(c, (RW(16) + 272), (u8)RW(0));
wr32(c, (RW(16) + 276), RW(0));
wr32(c, (RW(16) + 280), RW(0));
wr32(c, (RW(16) + 284), RW(0));
wr16(c, (RW(16) + 288), (u16)RW(0));
wr16(c, (RW(16) + 290), (u16)RW(0));
wr16(c, (RW(16) + 292), (u16)RW(0));
wr16(c, (RW(16) + 294), (u16)RW(2));
wr32(c, (RW(16) + 296), RW(0));
wr32(c, (RW(16) + 300), RW(0));
wr32(c, (RW(16) + 304), RW(0));
wr32(c, (RW(16) + 308), RW(0));
wr32(c, (RW(16) + 312), RW(0));
wr32(c, (RW(16) + 316), RW(0));
wr32(c, (RW(16) + 320), RW(0));
wr32(c, (RW(16) + 324), RW(0));
wr16(c, (RW(16) + 328), (u16)RW(0));
wr32(c, (RW(16) + 332), RW(0));
wr32(c, (RW(16) + 336), RW(0));
wr16(c, (RW(16) + 340), (u16)RW(0));
wr32(c, (RW(16) + 344), RW(0));
wr32(c, (RW(16) + 348), RW(0));
wr16(c, (RW(16) + 352), (u16)RW(0));
wr32(c, (RW(16) + 356), RW(0));
wr32(c, (RW(16) + 360), RW(0));
wr16(c, (RW(16) + 364), (u16)RW(0));
wr32(c, (RW(16) + 368), RW(0));
wr16(c, (RW(16) + 372), (u16)RW(0));
wr32(c, (RW(16) + 376), RW(0));
wr32(c, (RW(16) + 380), RW(0));
wr32(c, (RW(16) + 384), RW(0));
wr32(c, (RW(16) + 388), RW(0));
wr32(c, (RW(16) + 392), RW(0));
wr8(c, (RW(16) + 396), (u8)RW(0));
wr8(c, (RW(16) + 397), (u8)RW(0));
wr8(c, (RW(16) + 398), (u8)RW(0));
wr32(c, (RW(16) + 400), RW(0));
wr8(c, (RW(16) + 404), (u8)RW(0));
wr32(c, (RW(16) + 408), RW(0));
wr32(c, (RW(16) + 412), RW(0));
L_002C5BBC:;
wr32(c, (RW(17) + 60), RW(16));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET32(5, RW(0) + 23);
SET32(6, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2c5bdc); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 60)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c5bec); SET32(6, RW(0) + 1); F_00167590(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[12].u = rd32(c, (RW(28) + -31320));
c->f[1].u = RW(2);
c->fcc = F(12) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_002C5C34; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c5c20); c->f[12].f = fpu(F(1) + F(12)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_002C5C74;
L_002C5C34:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002C5C74; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c5c60); c->f[12].f = fpu(F(12) - F(1)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_002C5C74:;
SET64(25, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c5c84); SET32(4, RW(17) + 72); rt_call(c, t); }
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[12].u = rd32(c, (RW(28) + -31316));
c->f[1].u = RW(2);
c->fcc = F(12) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_002C5CCC; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c5cb8); c->f[12].f = fpu(F(1) + F(12)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_002C5D0C;
L_002C5CCC:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002C5D0C; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c5cf8); c->f[12].f = fpu(F(12) - F(1)); F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_002C5D0C:;
SET64(25, (s32)rd32(c, (RW(17) + 84)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c5d1c); SET32(4, RW(17) + 80); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002C5D40(Ctx *c) { /* func_002C5D40 */
ENTER(0x2c5d40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, rd16(c, (RW(4) + 36)));
SET64(16, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET32(3, RW(6) << 3);
SET32(3, RW(3) + RW(6));
SET32(3, RW(3) << 4);
SET32(17, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c5d84); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
if (RD(2) == RD(0)) { SET64(2, (s16)rd16(c, (RW(16) + 36))); goto L_002C5DC4; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c5da4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c5dbc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr8(c, (RW(17) + 128), (u8)RW(0));
SET64(2, (s16)rd16(c, (RW(16) + 36)));
L_002C5DC4:;
SET32(2, RW(2) + -1);
SET64(3, RD(2) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RSD(3) >= 0; wr16(c, (RW(16) + 36), (u16)RW(2)); if (t) goto L_002C5E0C; }
SET64(2, rd8(c, (RW(16) + 40)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C5DEC; }
SET64(2, (s16)rd16(c, (RW(16) + 32)));
SET32(2, RW(3) + RW(2));
L_002C5DEC:;
wr16(c, (RW(16) + 36), (u16)RW(2));
SET64(2, rd8(c, (RW(16) + 40)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C5E08; }
SET64(3, (s16)rd16(c, (RW(16) + 32)));
SET64(2, (s16)rd16(c, (RW(16) + 34)));
SET32(2, RW(3) - RW(2));
L_002C5E08:;
wr16(c, (RW(16) + 38), (u16)RW(2));
L_002C5E0C:;
SET64(2, (s16)rd16(c, (RW(16) + 36)));
SET64(4, (s16)rd16(c, (RW(16) + 38)));
SET64(1, RSD(2) < RSD(4));
if (RD(1) == RD(0)) { SET32(3, RW(2) - RW(4)); goto L_002C5E28; }
wr16(c, (RW(16) + 38), (u16)RW(2)); goto L_002C5E40;
L_002C5E28:;
SET64(2, (s16)rd16(c, (RW(16) + 34)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, rd16(c, (RW(16) + 36))); goto L_002C5E44; }
SET32(2, RW(4) + 1);
wr16(c, (RW(16) + 38), (u16)RW(2));
L_002C5E40:;
SET64(4, rd16(c, (RW(16) + 36)));
L_002C5E44:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET32(16, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c5e70); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C5EB4; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c5e90); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c5ea8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 128), (u8)RW(2));
wr32(c, (RW(16) + 96), RW(0));
L_002C5EB4:;
SET64(31, 0x2c5ebc);  F_00139590(c);
SET64(31, 0x2c5ec4);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 127);
SET64(31, 0x2c5ed8); SET32(7, RW(0) + 64); F_001B5FF0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C5EF0(Ctx *c) { /* func_002C5EF0 */
ENTER(0x2c5ef0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(6, rd16(c, (RW(4) + 36)));
SET64(16, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 20)));
SET32(3, RW(6) << 3);
SET32(3, RW(3) + RW(6));
SET32(3, RW(3) << 4);
SET32(17, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c5f34); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
if (RD(2) == RD(0)) { SET64(2, (s16)rd16(c, (RW(16) + 36))); goto L_002C5F74; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c5f54); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c5f6c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr8(c, (RW(17) + 128), (u8)RW(0));
SET64(2, (s16)rd16(c, (RW(16) + 36)));
L_002C5F74:;
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 36), (u16)RW(2));
SET64(3, RD(2) << 48);
SET64(4, (s16)rd16(c, (RW(16) + 32)));
SET64(3, RSD(3) >> 48);
SET64(2, RSD(3) < RSD(4));
if (RD(2) != RD(0)) { SET64(2, (s16)rd16(c, (RW(16) + 36))); goto L_002C5FCC; }
SET64(2, rd8(c, (RW(16) + 40)));
if (RD(2) == RD(0)) { SET32(2, RW(4) + -1); goto L_002C5FA4; }
SET32(2, RW(3) - RW(4));
L_002C5FA4:;
wr16(c, (RW(16) + 36), (u16)RW(2));
SET64(2, rd8(c, (RW(16) + 40)));
if (RD(2) == RD(0)) { SET64(3, (s16)rd16(c, (RW(16) + 32))); goto L_002C5FBC; }
SET64(2, RD(0) + RD(0)); goto L_002C5FC4;
L_002C5FBC:;
SET64(2, (s16)rd16(c, (RW(16) + 34)));
SET32(2, RW(3) - RW(2));
L_002C5FC4:;
wr16(c, (RW(16) + 38), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(16) + 36)));
L_002C5FCC:;
SET64(4, (s16)rd16(c, (RW(16) + 38)));
SET64(1, RSD(2) < RSD(4));
if (RD(1) == RD(0)) { SET32(3, RW(2) - RW(4)); goto L_002C5FE4; }
wr16(c, (RW(16) + 38), (u16)RW(2)); goto L_002C5FFC;
L_002C5FE4:;
SET64(2, (s16)rd16(c, (RW(16) + 34)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, rd16(c, (RW(16) + 36))); goto L_002C6000; }
SET32(2, RW(4) + 1);
wr16(c, (RW(16) + 38), (u16)RW(2));
L_002C5FFC:;
SET64(4, rd16(c, (RW(16) + 36)));
L_002C6000:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET32(16, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c602c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C6070; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c604c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c6064); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 128), (u8)RW(2));
wr32(c, (RW(16) + 96), RW(0));
L_002C6070:;
SET64(31, 0x2c6078);  F_00139590(c);
SET64(31, 0x2c6080);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 127);
SET64(31, 0x2c6094); SET32(7, RW(0) + 64); F_001B5FF0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C60B0(Ctx *c) { /* func_002C60B0 */
ENTER(0x2c60b0);
SET64(3, (s32)rd32(c, (RW(4) + 52)));
SET32(6, RW(0) + 1);
{ int t = RD(3) != RD(6); SET64(2, (s32)rd32(c, (RW(4) + 64))); if (t) goto L_002C60EC; }
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(0) + 2);
SET64(5, rd16(c, (RW(5) + 172)));
if (RD(5) == RD(3)) { SET32(2, RW(0) + 51); goto L_002C611C; }
if (RD(5) == RD(6)) { SET32(2, RW(0) + 60); goto L_002C611C; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 59); goto L_002C611C; }
wr32(c, (RW(4) + 64), RW(2)); goto L_002C6120;
L_002C60EC:;
SET32(3, RW(3) + -2);
SET64(1, RD(3) < (u64)(s64)2);
{ int t = RD(1) == RD(0);  if (t) goto L_002C611C; }
SET64(3, rd16(c, (RW(4) + 36)));
SET32(2, RW(0) + 9);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 51); goto L_002C611C; }
SET32(2, RW(0) + 8);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 50); goto L_002C611C; }
SET32(2, RW(0) + 48);
L_002C611C:;
wr32(c, (RW(4) + 64), RW(2));
L_002C6120:;
 return;
}

void F_002C6130(Ctx *c) { /* func_002C6130 */
ENTER(0x2c6130);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 196); goto L_002C6168; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c6164); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(0) + 196);
L_002C6168:;
SET64(31, 0x2c6170); wr32(c, (RW(17) + 4), RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C61B0; }
SET64(31, 0x2c6180); SET64(4, RD(16) + RD(0)); F_002265B0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -30064);
SET32(2, RW(2) + -30056);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -30044);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002C61B0:;
SET32(3, RW(29) + 128);
wr32(c, (RW(17) + 4), RW(16));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 16); if (t) goto L_002C61DC; }
L_002C61C0:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C61C0; } }
L_002C61DC:;
SET64(16, rd16(c, (RW(28) + -30348)));
SET64(18, (s32)rd32(c, (RW(17) + 44)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2c61f0); SET64(4, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c61fc); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c6208); SET64(5, RD(16) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c6214); SET32(4, RW(29) + 172); F_002C6470(c);
SET32(4, RW(29) + 172);
SET64(31, 0x2c6220); SET32(5, RW(0) + 62); F_002C6450(c);
wr32(c, (RW(29) + 128), RW(2));
SET64(16, rd16(c, (RW(28) + -30348)));
SET64(18, (s32)rd32(c, (RW(17) + 44)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2c6238); SET64(4, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c6244); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c6250); SET64(5, RD(16) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c625c); SET32(4, RW(29) + 168); F_002C6470(c);
SET32(4, RW(29) + 168);
SET64(31, 0x2c6268); SET32(5, RW(0) + 63); F_002C6450(c);
wr32(c, (RW(29) + 132), RW(2));
SET64(16, rd16(c, (RW(28) + -30348)));
SET64(18, (s32)rd32(c, (RW(17) + 44)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2c6280); SET64(4, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c628c); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c6298); SET64(5, RD(16) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c62a4); SET32(4, RW(29) + 164); F_002C6470(c);
SET32(4, RW(29) + 164);
SET64(31, 0x2c62b0); SET32(5, RW(0) + 4); F_002C6450(c);
wr32(c, (RW(29) + 136), RW(2));
SET64(16, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2c62c0); SET32(4, RW(29) + 64); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 84), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 80), RW(2));
wr32(c, (RW(29) + 92), RW(0));
wr16(c, (RW(29) + 96), (u16)RW(0));
wr16(c, (RW(29) + 98), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(31, 0x2c62ec); SET64(5, RD(0) + RD(0)); F_002DC6A0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c62f8); SET32(4, RW(29) + 64); F_001569F0(c);
SET64(5, (s32)rd32(c, (RW(29) + 84)));
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(29) + 88)));
SET32(2, RW(2) + -26960);
SET32(4, RW(29) + 64);
SET64(5, (s32)rd32(c, (RW(5) + 124)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2c631c); wr32(c, (RW(29) + 80), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 64);
SET64(31, 0x2c6328); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(6, RD(16) + RD(0));
SET32(5, RW(29) + 128);
SET32(7, RW(0) + -1);
SET32(8, RW(0) + 1);
SET32(9, RW(0) + 3);
SET64(31, 0x2c6348); SET64(10, RD(0) + RD(0)); F_00224050(c);
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET32(7, RW(0) + 1);
SET64(6, (s64)(s32)0x43100000);
SET64(4, (s64)(s32)0x42940000);
SET64(3, (s64)(s32)0x447a0000);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(5) + 192), (u8)RW(7));
SET64(8, (s32)rd32(c, (RW(17) + 4)));
wr8(c, (RW(8) + 193), (u8)RW(7));
SET64(7, (s16)rd16(c, (RW(8) + 170)));
wr16(c, (RW(8) + 194), (u16)RW(7));
c->f[0].u = rd32(c, (RW(28) + -31368));
SET64(7, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(7) + 144), c->f[0].u);
wr32(c, (RW(29) + 112), RW(6));
wr32(c, (RW(29) + 116), RW(4));
wr32(c, (RW(29) + 120), RW(3));
wr32(c, (RW(29) + 124), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2c63a4); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(3, (s64)(s32)0x43600000);
SET64(2, (s64)(s32)0x43200000);
wr32(c, (RW(29) + 152), RW(3));
wr32(c, (RW(29) + 156), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2c63c8); SET32(5, RW(29) + 152); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 176), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(5, rd16(c, (RW(17) + 48)));
SET64(31, 0x2c63e4); SET32(4, RW(2) + 168); F_0013BA20(c);
SET64(31, 0x2c63ec);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002C6400; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002C6400:;
SET64(31, 0x2c6408);  F_002284F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2c641c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2c6430); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void F_002C6450(Ctx *c) { /* func_002C6450 */
ENTER(0x2c6450);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(5) & 0xffff);
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 2)));
SET32(2, RW(2) << 1);
SET32(2, RW(3) + RW(2)); return;
}

void F_002C6470(Ctx *c) { /* func_002C6470 */
ENTER(0x2c6470);
wr32(c, (RW(4) + 0), RW(5));
SET64(2, RD(4) + RD(0)); return;
}

void F_002C6480(Ctx *c) { /* func_002C6480 */
ENTER(0x2c6480);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2c64a0); SET32(4, RW(29) + 48); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 68), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 72), RW(0));
wr32(c, (RW(29) + 64), RW(2));
wr32(c, (RW(29) + 76), RW(0));
wr16(c, (RW(29) + 80), (u16)RW(0));
wr16(c, (RW(29) + 82), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2c64cc); SET32(4, RW(29) + 48); F_001569F0(c);
SET64(5, (s32)rd32(c, (RW(29) + 68)));
SET64(2, RD(16) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 72)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 48);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -26960);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2c64fc); wr32(c, (RW(29) + 64), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x2c6508); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002C6520(Ctx *c) { /* func_002C6520 */
ENTER(0x2c6520);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2c6540); SET32(4, RW(29) + 48); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 68), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 72), RW(0));
wr32(c, (RW(29) + 64), RW(2));
wr32(c, (RW(29) + 76), RW(0));
wr16(c, (RW(29) + 80), (u16)RW(0));
wr16(c, (RW(29) + 82), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2c656c); SET32(4, RW(29) + 48); F_001569F0(c);
SET64(5, (s32)rd32(c, (RW(29) + 68)));
SET64(2, RD(16) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 72)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 48);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -26960);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2c659c); wr32(c, (RW(29) + 64), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x2c65a8); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(2, rd16(c, (RW(16) + 0)));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002C65C0(Ctx *c) { /* func_002C65C0 */
ENTER(0x2c65c0);
SET64(7, (s32)rd32(c, (RW(4) + 20)));
SET64(3, (s64)(s32)0x4b0000);
SET64(8, (s32)rd32(c, (RW(4) + 48)));
SET64(5, (s64)(s32)0x540000);
SET32(3, RW(3) + 10256);
SET32(5, RW(5) + -25336);
SET64(7, rd16(c, (RW(7) + 4)));
SET32(6, RW(8) << 3);
SET32(6, RW(6) + RW(8));
SET32(7, RW(7) << 1);
SET32(6, RW(6) << 2);
SET32(7, RW(3) + RW(7));
SET32(6, RW(6) + RW(5));
SET64(7, rd16(c, (RW(7) + 0)));
wr32(c, (RW(6) + 28), RW(7));
SET64(7, (s32)rd32(c, (RW(4) + 20)));
SET64(8, (s32)rd32(c, (RW(4) + 48)));
SET64(7, rd16(c, (RW(7) + 148)));
SET32(6, RW(8) << 3);
SET32(6, RW(6) + RW(8));
SET32(7, RW(7) << 1);
SET32(6, RW(6) << 2);
SET32(7, RW(3) + RW(7));
SET32(6, RW(6) + RW(5));
SET64(7, rd16(c, (RW(7) + 0)));
wr32(c, (RW(6) + 32), RW(7));
SET64(7, (s32)rd32(c, (RW(4) + 20)));
SET64(8, (s32)rd32(c, (RW(4) + 48)));
SET64(7, rd16(c, (RW(7) + 292)));
SET32(6, RW(8) << 3);
SET32(6, RW(6) + RW(8));
SET32(7, RW(7) << 1);
SET32(6, RW(6) << 2);
SET32(7, RW(3) + RW(7));
SET32(6, RW(6) + RW(5));
SET64(7, rd16(c, (RW(7) + 0)));
wr32(c, (RW(6) + 36), RW(7));
SET64(7, (s32)rd32(c, (RW(4) + 20)));
SET64(8, (s32)rd32(c, (RW(4) + 48)));
SET64(7, rd16(c, (RW(7) + 436)));
SET32(6, RW(8) << 3);
SET32(6, RW(6) + RW(8));
SET32(7, RW(7) << 1);
SET32(6, RW(6) << 2);
SET32(7, RW(3) + RW(7));
SET32(6, RW(6) + RW(5));
SET64(7, rd16(c, (RW(7) + 0)));
wr32(c, (RW(6) + 40), RW(7));
SET64(7, (s32)rd32(c, (RW(4) + 20)));
SET64(8, (s32)rd32(c, (RW(4) + 48)));
SET64(7, rd16(c, (RW(7) + 580)));
SET32(6, RW(8) << 3);
SET32(6, RW(6) + RW(8));
SET32(7, RW(7) << 1);
SET32(6, RW(6) << 2);
SET32(7, RW(3) + RW(7));
SET32(6, RW(6) + RW(5));
SET64(7, rd16(c, (RW(7) + 0)));
wr32(c, (RW(6) + 44), RW(7));
SET64(7, (s32)rd32(c, (RW(4) + 20)));
SET64(8, (s32)rd32(c, (RW(4) + 48)));
SET64(7, rd16(c, (RW(7) + 724)));
SET32(6, RW(8) << 3);
SET32(6, RW(6) + RW(8));
SET32(7, RW(7) << 1);
SET32(6, RW(6) << 2);
SET32(7, RW(3) + RW(7));
SET32(6, RW(6) + RW(5));
SET64(7, rd16(c, (RW(7) + 0)));
wr32(c, (RW(6) + 48), RW(7));
SET64(7, (s32)rd32(c, (RW(4) + 20)));
SET64(8, (s32)rd32(c, (RW(4) + 48)));
SET64(7, rd16(c, (RW(7) + 868)));
SET32(6, RW(8) << 3);
SET32(6, RW(6) + RW(8));
SET32(7, RW(7) << 1);
SET32(6, RW(6) << 2);
SET32(7, RW(3) + RW(7));
SET32(6, RW(6) + RW(5));
SET64(7, rd16(c, (RW(7) + 0)));
wr32(c, (RW(6) + 52), RW(7));
SET64(6, (s32)rd32(c, (RW(4) + 20)));
SET64(7, (s32)rd32(c, (RW(4) + 48)));
SET64(8, rd16(c, (RW(6) + 1012)));
SET32(6, RW(7) << 3);
SET32(6, RW(6) + RW(7));
SET32(7, RW(8) << 1);
SET32(6, RW(6) << 2);
SET32(7, RW(3) + RW(7));
SET32(3, RW(6) + RW(5));
SET64(6, rd16(c, (RW(7) + 0)));
wr32(c, (RW(3) + 56), RW(6));
SET64(6, (s32)rd32(c, (RW(4) + 48)));
SET64(4, (s32)rd32(c, (RW(4) + 20)));
SET32(3, RW(6) << 3);
SET32(3, RW(3) + RW(6));
SET32(3, RW(3) << 2);
SET64(4, rd16(c, (RW(4) + 1156)));
SET32(3, RW(3) + RW(5));
SET64(4, RD(4) ^ RD(0));
SET64(4, RD(4) < (u64)(s64)1);
wr32(c, (RW(3) + 60), RW(4)); return;
}

void F_002C6760(Ctx *c) { /* func_002C6760 */
ENTER(0x2c6760);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(0) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
SET64(17, (s64)(s32)0x540000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(17, RW(17) + -25336);
L_002C6794:;
SET64(5, (s32)rd32(c, (RW(21) + 48)));
SET64(2, (s64)(s32)0x4b0000);
SET32(3, RW(20) << 2);
SET64(2, rd16(c, (RW(2) + 10256)));
SET32(4, RW(5) << 3);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 2);
SET32(4, RW(17) + RW(4));
SET32(3, RW(4) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 28)));
{ int t = RD(3) == RD(2); SET64(19, RD(0) + RD(0)); if (t) goto L_002C67F0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 10256);
L_002C67D0:;
SET32(4, RW(4) + 2);
SET64(2, rd16(c, (RW(4) + 0)));
SET32(19, RW(19) + 1);
{ int t = RD(3) != RD(2);  if (t) { POLL(); goto L_002C67D0; } }
L_002C67F0:;
SET64(2, (s32)rd32(c, (RW(21) + 20)));
SET64(5, RD(19) & 0xffff);
SET32(16, RW(2) + RW(18));
SET64(31, 0x2c6804); SET64(4, RD(16) + RD(0)); F_0013BA20(c);
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET32(3, RW(19) << 1);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2c6820); SET32(6, RW(0) + 1); F_00144A60(c);
SET64(31, 0x2c6828); SET64(4, (s32)rd32(c, (RW(16) + 28))); F_00143100(c);
SET32(20, RW(20) + 1);
SET64(2, RD(20) < (u64)(s64)8);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 144); if (t) { POLL(); goto L_002C6794; } }
SET64(5, (s32)rd32(c, (RW(21) + 48)));
SET64(3, (s64)(s32)0x540000);
SET64(2, (s32)rd32(c, (RW(21) + 20)));
SET32(3, RW(3) + -25276);
SET32(4, RW(5) << 3);
SET32(4, RW(4) + RW(5));
SET32(16, RW(2) + 1152);
SET32(2, RW(4) << 2);
SET32(2, RW(3) + RW(2));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, RD(2) ^ 0x1);
SET64(17, RD(0) < RD(2));
SET64(31, 0x2c6874); SET64(5, RD(17) + RD(0)); F_0013BA20(c);
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET32(3, RW(17) << 1);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2c6890); SET32(6, RW(0) + 1); F_00144A60(c);
SET64(31, 0x2c6898); SET64(4, (s32)rd32(c, (RW(16) + 28))); F_00143100(c);
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002C68C0(Ctx *c) { /* func_002C68C0 */
ENTER(0x2c68c0);
SET32(29, RW(29) + -224);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(4, rd16(c, (RW(4) + 72)));
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 76))); goto L_002C6B2C; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 76))); goto L_002C6AF8; }
{ int t = RD(4) == RD(0);  if (t) goto L_002C690C; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002C6B70;
L_002C690C:;
SET64(3, (s64)(s32)0x4b0000);
SET64(2, (s64)(s32)0x4b0000);
rd128(c, (RW(3) + 10112) & ~15u, &c->r[3]);
c->f[20].u = rd32(c, (RW(2) + 10092));
SET64(31, 0x2c6924); wr128(c, (RW(29) + 192) & ~15u, &c->r[3]); F_002BF950(c);
SET64(18, rd16(c, (RW(28) + -30348)));
c->f[21].u = c->f[0].u;
SET64(16, (s32)rd32(c, (RW(17) + 44)));
SET64(31, 0x2c6938); SET32(4, RW(29) + 128); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 148), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 156), RW(0));
wr16(c, (RW(29) + 160), (u16)RW(0));
wr16(c, (RW(29) + 162), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2c6964); SET32(4, RW(29) + 128); F_001569F0(c);
SET64(5, (s32)rd32(c, (RW(29) + 148)));
SET64(2, RD(18) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 128);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -26960);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2c6994); wr32(c, (RW(29) + 144), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2c69a0); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(31, 0x2c69a8); SET32(4, RW(0) + 976); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C69BC; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c69bc); SET32(5, RW(0) + 1); F_002BB8B0(c);
L_002C69BC:;
wr32(c, (RW(17) + 76), RW(18));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 188), RW(2));
wr32(c, (RW(29) + 216), c->f[21].u);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 220), c->f[20].u);
wr32(c, (RW(29) + 176), RW(0));
wr32(c, (RW(29) + 180), RW(0));
wr32(c, (RW(29) + 184), RW(0));
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET64(18, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2c69f0); SET32(4, RW(29) + 80); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 100), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 104), RW(0));
wr32(c, (RW(29) + 96), RW(2));
wr32(c, (RW(29) + 108), RW(0));
wr16(c, (RW(29) + 112), (u16)RW(0));
wr16(c, (RW(29) + 114), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 108)));
SET64(31, 0x2c6a1c); SET64(5, RD(0) + RD(0)); F_002DC6A0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c6a28); SET32(4, RW(29) + 80); F_001569F0(c);
SET64(5, (s32)rd32(c, (RW(29) + 100)));
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(29) + 104)));
SET32(2, RW(2) + -26960);
SET32(4, RW(29) + 80);
SET64(5, (s32)rd32(c, (RW(5) + 124)));
SET32(18, RW(3) + RW(5));
SET64(31, 0x2c6a4c); wr32(c, (RW(29) + 96), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2c6a58); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(8, RD(18) + RD(0));
SET64(9, RD(16) + RD(0));
SET32(5, RW(29) + 176);
SET32(6, RW(29) + 216);
SET32(7, RW(0) + 1);
SET64(10, RD(0) + RD(0));
SET64(31, 0x2c6a7c); SET64(11, RD(0) + RD(0)); F_002BB420(c);
SET64(2, (s32)rd32(c, (RW(17) + 76)));
SET32(5, RW(0) + 6);
SET64(31, 0x2c6a8c); SET32(4, RW(2) + 16); F_00145EF0(c);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x2c6aa0); SET32(5, RW(0) + 61); rt_call(c, t); }
SET64(31, 0x2c6aa8);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 76))); goto L_002C6ABC; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
L_002C6ABC:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 372)));
{ u32 t = RW(25); SET64(31, 0x2c6acc);  rt_call(c, t); }
SET64(31, 0x2c6ad4); SET64(4, (s32)rd32(c, (RW(17) + 76))); F_002BAF40(c);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(3, (s64)(s32)0x42000000);
SET64(4, (s32)rd32(c, (RW(4) + 940)));
wr32(c, (RW(4) + 0), RW(3));
wr32(c, (RW(4) + 4), RW(3));
SET64(3, rd16(c, (RW(17) + 72)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 72), (u16)RW(3)); goto L_002C6B6C;
L_002C6AF8:;
SET64(3, rd8(c, (RW(4) + 504)));
SET64(3, RD(3) & 0x1);
SET64(3, RD(0) < RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_002C6B6C; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 376)));
{ u32 t = RW(25); SET64(31, 0x2c6b1c);  rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 72)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 72), (u16)RW(3)); goto L_002C6B6C;
L_002C6B2C:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 364)));
{ u32 t = RW(25); SET64(31, 0x2c6b3c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C6B6C; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 76), RW(0)); goto L_002C6B64; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c6b60); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 76), RW(0));
L_002C6B64:;
SET32(3, RW(0) + 3);
wr32(c, (RW(17) + 52), RW(3));
L_002C6B6C:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002C6B70:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 224); return;
}

void F_002C6B90(Ctx *c) { /* func_002C6B90 */
ENTER(0x2c6b90);
SET32(29, RW(29) + -32);
SET64(7, (s64)(s32)0x410000);
SET32(7, RW(7) + 4440);
SET32(6, RW(29) + 16);
SET32(5, RW(0) + 3);
L_002C6BA4:;
SET64(3, (s16)rd16(c, (RW(7) + 0)));
SET32(5, RW(5) + -1);
SET64(2, (s16)rd16(c, (RW(7) + 2)));
wr16(c, (RW(6) + 0), (u16)RW(3));
wr16(c, (RW(6) + 2), (u16)RW(2));
SET32(7, RW(7) + 4);
{ int t = RSD(5) > 0; SET32(6, RW(6) + 4); if (t) { POLL(); goto L_002C6BA4; } }
SET64(8, (s32)rd32(c, (RW(4) + 20)));
SET64(7, (s64)(s32)0x4b0000);
wr8(c, (RW(29) + 8), (u8)RW(0));
SET64(13, RD(0) + RD(0));
wr8(c, (RW(29) + 9), (u8)RW(0));
SET64(11, RD(0) + RD(0));
wr8(c, (RW(29) + 10), (u8)RW(0));
SET32(3, RW(0) + 1);
wr8(c, (RW(29) + 11), (u8)RW(0));
SET32(7, RW(7) + 10256);
wr8(c, (RW(29) + 12), (u8)RW(0));
SET32(5, RW(29) + 16);
wr8(c, (RW(29) + 13), (u8)RW(0));
SET32(4, RW(29) + 8);
L_002C6BFC:;
SET32(2, RW(8) + RW(11));
SET64(12, RD(0) + RD(0));
SET64(2, rd16(c, (RW(2) + 4)));
SET64(10, RD(5) + RD(0));
SET64(9, RD(4) + RD(0));
SET32(2, RW(2) << 1);
SET32(2, RW(7) + RW(2));
SET64(6, rd16(c, (RW(2) + 0)));
L_002C6C20:;
SET64(2, rd16(c, (RW(10) + 0)));
{ int t = RD(6) != RD(2);  if (t) goto L_002C6C30; }
wr8(c, (RW(9) + 0), (u8)RW(3));
L_002C6C30:;
SET32(12, RW(12) + 1);
SET64(2, RSD(12) < (s64)6);
SET32(10, RW(10) + 2);
{ int t = RD(2) != RD(0); SET32(9, RW(9) + 1); if (t) { POLL(); goto L_002C6C20; } }
SET32(13, RW(13) + 1);
SET64(2, RSD(13) < (s64)8);
{ int t = RD(2) != RD(0); SET32(11, RW(11) + 144); if (t) { POLL(); goto L_002C6BFC; } }
SET64(4, RD(0) + RD(0));
SET32(3, RW(29) + 8);
L_002C6C5C:;
SET64(2, rd8(c, (RW(3) + 0)));
if (RD(2) != RD(0)) { SET32(4, RW(4) + 1); goto L_002C6C70; }
SET64(2, RD(0) + RD(0)); goto L_002C6C80;
L_002C6C70:;
SET64(2, RSD(4) < (s64)6);
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 1); if (t) { POLL(); goto L_002C6C5C; } }
SET32(2, RW(0) + 1);
L_002C6C80:;
SET32(29, RW(29) + 32); return;
}

void F_002C6C90(Ctx *c) { /* func_002C6C90 */
ENTER(0x2c6c90);
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s64)(s32)0x520000);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[3].u = rd32(c, (RW(3) + -28536));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[1].u = rd32(c, (RW(4) + 56));
c->f[2].u = rd32(c, (RW(2) + 14864));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[20].f = fpu(c->facc - F(3) * F(2));
c->fcc = F(20) <= F(0);
{ int t = !c->fcc; SET64(16, RD(4) + RD(0)); if (t) goto L_002C6CEC; }
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 52), RW(3));
c->f[20].u = c->f[0].u;
wr8(c, (RW(16) + 68), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x2c6cec); wr8(c, (RW(2) + 60), (u8)RW(3)); F_002C6130(c);
L_002C6CEC:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c6cf8); c->f[12].u = c->f[20].u; F_002C7BC0(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C6D10(Ctx *c) { /* func_002C6D10 */
ENTER(0x2c6d10);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(18, rd16(c, (RW(4) + 36)));
SET64(31, 0x2c6d38); SET64(16, RD(4) + RD(0)); F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c6d44); SET32(5, RW(0) + -1); F_0013DFC0(c);
SET64(31, 0x2c6d4c); SET64(17, RD(2) & 0xffff); F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c6d58); SET32(5, RW(0) + -1); F_0013E020(c);
SET64(4, RD(17) & 0xffff);
SET64(5, RD(2) & 0xffff);
SET64(3, RD(4) & 0x10);
SET64(19, RD(0) + RD(0));
{ int t = RD(3) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002C6D80; }
SET64(31, 0x2c6d78); SET64(4, RD(16) + RD(0)); F_002C5D40(c);
 goto L_002C6E98;
L_002C6D80:;
SET64(3, RD(4) & 0x40);
if (RD(3) == RD(0)) { SET64(3, RD(4) & 0x20); goto L_002C6D9C; }
SET64(31, 0x2c6d94); SET64(4, RD(16) + RD(0)); F_002C5EF0(c);
 goto L_002C6E98;
L_002C6D9C:;
if (RD(3) == RD(0)) { SET64(3, RD(4) & 0x80); goto L_002C6DCC; }
SET64(4, RD(18) & 0xffff);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(4) << 3);
SET32(5, RW(0) + 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET64(31, 0x2c6dc4); SET32(4, RW(2) + RW(3)); F_002C89F0(c);
 goto L_002C6E98;
L_002C6DCC:;
if (RD(3) == RD(0)) { SET64(4, RD(5) & 0xffff); goto L_002C6DFC; }
SET64(4, RD(18) & 0xffff);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(4) << 3);
SET32(5, RW(0) + -1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET64(31, 0x2c6df4); SET32(4, RW(2) + RW(3)); F_002C89F0(c);
 goto L_002C6E98;
L_002C6DFC:;
SET64(3, RD(4) & 0x4000);
if (RD(3) == RD(0)) { SET64(3, RD(4) & 0x2000); goto L_002C6E68; }
SET64(3, rd16(c, (RW(16) + 36)));
SET32(2, RW(0) + 9);
if (RD(3) != RD(2)) { SET64(19, RD(0) + (s64)1); goto L_002C6E3C; }
SET64(5, (s16)rd16(c, (RW(16) + 48)));
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c6e28); SET32(4, RW(4) + -25336); F_002C5330(c);
SET64(31, 0x2c6e30); SET64(4, RD(16) + RD(0)); F_002C6760(c);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(2, (s16)rd16(c, (RW(2) + 1156)));
wr16(c, (RW(16) + 70), (u16)RW(2));
L_002C6E3C:;
SET64(31, 0x2c6e44);  F_00139590(c);
SET64(31, 0x2c6e4c);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 127);
SET64(31, 0x2c6e60); SET32(7, RW(0) + 64); F_001B5FF0(c);
 goto L_002C6E98;
L_002C6E68:;
{ int t = RD(3) == RD(0);  if (t) goto L_002C6E98; }
SET64(19, RD(0) + (s64)1);
SET64(31, 0x2c6e7c); SET64(17, RD(19) + RD(0)); F_00139590(c);
SET64(31, 0x2c6e84);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 3);
SET32(6, RW(0) + 127);
SET64(31, 0x2c6e98); SET32(7, RW(0) + 64); F_001B5FF0(c);
L_002C6E98:;
if (RD(19) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 20))); goto L_002C7068; }
SET64(31, 0x2c6ea8);  F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2c6eb4); SET64(4, RD(2) + RD(0)); F_0013E0E0(c);
SET64(31, 0x2c6ebc); SET64(4, RD(2) + RD(0)); F_0013E750(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C6EE0; }
SET64(31, 0x2c6ecc);  F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2c6ed8); SET64(4, RD(2) + RD(0)); F_0013E0E0(c);
SET64(31, 0x2c6ee0); SET64(4, RD(2) + RD(0)); F_0013E650(c);
L_002C6EE0:;
{ int t = RD(17) != RD(0);  if (t) goto L_002C6EF8; }
SET64(31, 0x2c6ef0); SET64(4, RD(16) + RD(0)); F_002C6B90(c);
if (RD(2) == RD(0)) { wr16(c, (RW(16) + 72), (u16)RW(0)); goto L_002C705C; }
L_002C6EF8:;
if (RD(17) == RD(0)) { SET64(25, (s32)rd32(c, (RW(16) + 16))); goto L_002C6F84; }
SET64(7, (s32)rd32(c, (RW(16) + 12)));
SET64(3, (s64)(s32)0x540000);
SET32(3, RW(3) + -25336);
SET32(4, RW(0) + 9);
SET32(5, RW(3) + 28);
SET64(2, (s32)rd32(c, (RW(7) + 128)));
SET32(6, RW(7) + 156);
wr32(c, (RW(3) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(7) + 132)));
wr32(c, (RW(3) + 4), RW(2));
SET64(2, (s32)rd32(c, (RW(7) + 136)));
wr32(c, (RW(3) + 8), RW(2));
SET64(2, (s32)rd32(c, (RW(7) + 140)));
wr32(c, (RW(3) + 12), RW(2));
SET64(2, (s32)rd32(c, (RW(7) + 144)));
wr32(c, (RW(3) + 16), RW(2));
SET64(2, (s32)rd32(c, (RW(7) + 148)));
wr32(c, (RW(3) + 20), RW(2));
SET64(2, (s32)rd32(c, (RW(7) + 152)));
wr32(c, (RW(3) + 24), RW(2));
L_002C6F50:;
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(5) + 0), RW(3));
SET32(6, RW(6) + 8);
wr32(c, (RW(5) + 4), RW(2));
{ int t = RSD(4) > 0; SET32(5, RW(5) + 8); if (t) { POLL(); goto L_002C6F50; } }
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c6f7c); SET32(4, RW(4) + -25336); F_002C5320(c);
SET64(4, rd16(c, (RW(16) + 36))); goto L_002C6F94;
L_002C6F84:;
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2c6f90); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, rd16(c, (RW(16) + 36)));
L_002C6F94:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET32(17, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c6fc0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
if (RD(2) == RD(0)) { SET64(17, (s32)rd32(c, (RW(16) + 24))); goto L_002C7000; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c6fe0); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c6ff8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr8(c, (RW(17) + 128), (u8)RW(0));
SET64(17, (s32)rd32(c, (RW(16) + 24)));
L_002C7000:;
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_002C7008:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c7024); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c7040); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(20, RW(20) + 1);
SET64(3, RD(20) < (u64)(s64)4);
{ int t = RD(3) != RD(0); SET32(19, RW(19) + 384); if (t) { POLL(); goto L_002C7008; } }
SET32(3, RW(0) + 4);
wr32(c, (RW(16) + 52), RW(3)); goto L_002C7164;
L_002C705C:;
SET32(3, RW(0) + 5);
wr32(c, (RW(16) + 52), RW(3)); goto L_002C7164;
L_002C7068:;
SET64(3, (s16)rd16(c, (RW(16) + 70)));
SET64(4, rd16(c, (RW(4) + 1156)));
if (RD(3) == RD(4)) { SET64(3, RD(18) & 0xffff); goto L_002C7168; }
SET64(2, RD(4) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) != RD(0); wr16(c, (RW(16) + 70), (u16)RW(4)); if (t) goto L_002C70FC; }
SET64(4, (s32)rd32(c, (RW(16) + 48)));
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + -25276);
SET32(5, RW(0) + 1);
SET32(3, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x2c70b0); wr32(c, (RW(2) + 0), RW(5)); F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2c70bc); SET64(4, RD(2) + RD(0)); F_0013E0E0(c);
SET64(31, 0x2c70c4); SET64(4, RD(2) + RD(0)); F_0013E750(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002C7164; }
SET64(31, 0x2c70d8);  F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2c70e4); SET64(4, RD(2) + RD(0)); F_0013E0E0(c);
SET64(3, (s64)(s32)0x40a00000);
c->f[12].u = RW(3);
SET64(31, 0x2c70f4); SET64(4, RD(2) + RD(0)); F_0013E860(c);
 goto L_002C7164;
L_002C70FC:;
SET64(31, 0x2c7104);  F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2c7110); SET64(4, RD(2) + RD(0)); F_0013E0E0(c);
SET64(31, 0x2c7118); SET64(4, RD(2) + RD(0)); F_0013E750(c);
SET64(4, RD(2) & 0xff);
SET32(3, RW(0) + 1);
if (RD(4) != RD(3)) { SET64(5, (s32)rd32(c, (RW(16) + 48))); goto L_002C7148; }
SET64(31, 0x2c7130);  F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(16) + 48)));
SET64(31, 0x2c713c); SET64(4, RD(2) + RD(0)); F_0013E0E0(c);
SET64(31, 0x2c7144); SET64(4, RD(2) + RD(0)); F_0013E650(c);
SET64(5, (s32)rd32(c, (RW(16) + 48)));
L_002C7148:;
SET64(3, (s64)(s32)0x540000);
SET32(3, RW(3) + -25276);
SET32(4, RW(5) << 3);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 0), RW(0));
L_002C7164:;
SET64(3, RD(18) & 0xffff);
L_002C7168:;
SET64(18, rd16(c, (RW(16) + 36)));
if (RD(3) == RD(18)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_002C7234; }
SET64(17, (s32)rd32(c, (RW(16) + 24)));
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(1, RD(2) < (u64)(s64)4);
if (RD(1) == RD(0)) { SET64(4, RD(2) & 0x3); goto L_002C71A4; }
SET64(4, RD(2) & 0x3);
SET32(3, RW(4) << 1);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3)); goto L_002C71B8;
L_002C71A4:;
SET32(3, RW(4) << 1);
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
L_002C71B8:;
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c71cc); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(16, RD(18) & 0xffff);
SET64(1, RD(16) < (u64)(s64)8);
{ int t = RD(1) == RD(0);  if (t) goto L_002C7230; }
SET64(1, RD(16) < (u64)(s64)4);
if (RD(1) == RD(0)) { SET64(4, RD(16) & 0x3); goto L_002C7204; }
SET64(4, RD(16) & 0x3);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3)); goto L_002C7218;
L_002C7204:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
L_002C7218:;
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c722c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 12), RW(16));
L_002C7230:;
SET64(31, rd64(c, (RW(29) + 80)));
L_002C7234:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002C7250(Ctx *c) { /* func_002C7250 */
ENTER(0x2c7250);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x4b0000);
c->f[4].u = rd32(c, (RW(2) + -28536));
wr64(c, (RW(29) + 0), RD(31));
c->f[2].u = rd32(c, (RW(4) + 56));
c->f[1].u = RW(0);
SET64(2, (s64)(s32)0x520000);
c->f[3].u = rd32(c, (RW(2) + 14864));
c->facc = fpu(F(1) + F(2));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[12].f = fpu(c->facc + F(4) * F(3));
c->fcc = F(12) < F(0);
{ int t = c->fcc;  if (t) goto L_002C72A4; }
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET32(2, RW(0) + 3);
c->f[12].u = c->f[0].u;
SET64(3, (s16)rd16(c, (RW(3) + 1156)));
wr16(c, (RW(4) + 70), (u16)RW(3));
wr32(c, (RW(4) + 52), RW(2));
L_002C72A4:;
SET64(31, 0x2c72ac);  F_002C7BC0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002C72C0(Ctx *c) { /* func_002C72C0 */
ENTER(0x2c72c0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c72e0); SET64(16, RD(4) + RD(0)); F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c72ec); SET32(5, RW(0) + -1); F_0013E020(c);
SET64(5, RD(2) & 0xffff);
SET64(2, rd8(c, (RW(16) + 68)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_002C73AC; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET32(2, RW(0) + 3);
SET64(3, rd16(c, (RW(4) + 104)));
if (RD(3) == RD(2)) { SET64(2, RD(5) & 0xffff); goto L_002C7320; }
SET32(2, RW(0) + 4);
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_002C7394; }
SET64(2, RD(5) & 0xffff);
L_002C7320:;
SET64(17, rd16(c, (RW(4) + 172)));
SET64(3, RD(2) & 0x4000);
SET64(2, RD(2) & 0x2000);
SET64(19, RD(0) < RD(3));
{ int t = RD(19) == RD(0); SET64(18, RD(0) < RD(2)); if (t) goto L_002C7364; }
SET32(2, RW(0) + 2);
{ int t = RD(17) == RD(2);  if (t) goto L_002C7364; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 68), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET64(4, (s32)rd32(c, (RW(2) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 376)));
{ u32 t = RW(25); SET64(31, 0x2c7364);  rt_call(c, t); }
L_002C7364:;
{ int t = RD(19) == RD(0);  if (t) goto L_002C7380; }
SET32(2, RW(0) + 2);
{ int t = RD(17) != RD(2);  if (t) goto L_002C7380; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 68), (u8)RW(2));
L_002C7380:;
{ int t = RD(18) == RD(0);  if (t) goto L_002C7390; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 68), (u8)RW(2));
L_002C7390:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
L_002C7394:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c73a4);  rt_call(c, t); }
wr32(c, (RW(16) + 60), c->f[0].u); goto L_002C77D8;
L_002C73AC:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2c73bc);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_002C77A8; }
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET32(2, RW(0) + 2);
SET64(3, (s16)rd16(c, (RW(3) + 184)));
if (RD(3) == RD(2)) { SET64(18, RD(0) + RD(0)); goto L_002C73E8; }
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(16) + 12))); goto L_002C7524; }
SET64(18, RD(0) + RD(0));
L_002C73E8:;
SET64(17, RD(0) + RD(0));
L_002C73EC:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(19, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(19) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c7408);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2c741c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c7430);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 16)));
{ int t = RD(4) == RD(0);  if (t) goto L_002C7450; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c744c);  rt_call(c, t); }
L_002C7450:;
SET64(4, (s32)rd32(c, (RW(19) + 24)));
{ int t = RD(4) == RD(0);  if (t) goto L_002C7480; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c746c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c7480); SET32(4, RW(2) + 384); rt_call(c, t); }
L_002C7480:;
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)11);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 144); if (t) { POLL(); goto L_002C73EC; } }
SET64(17, (s32)rd32(c, (RW(16) + 24)));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c74a8);  rt_call(c, t); }
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
L_002C74B0:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c74c8);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c74e0);  rt_call(c, t); }
SET32(19, RW(19) + 1);
SET64(2, RD(19) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 384); if (t) { POLL(); goto L_002C74B0; } }
SET64(17, (s32)rd32(c, (RW(16) + 28)));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c7508);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2c751c);  rt_call(c, t); }
wr32(c, (RW(16) + 52), RW(0)); goto L_002C77A4;
L_002C7524:;
SET64(4, (s32)rd32(c, (RW(2) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 364)));
{ u32 t = RW(25); SET64(31, 0x2c7538);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C77A4; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(2, (s16)rd16(c, (RW(2) + 184)));
wr32(c, (RW(16) + 48), RW(2));
c->f[1].u = rd32(c, (RW(28) + -31344));
SET64(17, (s32)rd32(c, (RW(16) + 28)));
c->f[0].u = rd32(c, (RW(28) + -31340));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(29));
wr32(c, (RW(29) + 88), c->f[1].u);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(29) + 92), c->f[0].u);
SET64(5, rd16(c, (RW(2) + 88)));
SET64(31, 0x2c7578); SET32(6, RW(0) + 1); F_00144A60(c);
SET64(31, 0x2c7580); SET64(4, (s32)rd32(c, (RW(17) + 4))); F_00143100(c);
SET64(31, 0x2c7588); SET64(4, RD(16) + RD(0)); F_002C6760(c);
SET64(2, (s16)rd16(c, (RW(16) + 32)));
SET32(2, RW(2) + -1);
{ int t = RSD(2) >= 0; SET64(3, RD(0) + RD(0)); if (t) goto L_002C759C; }
SET64(3, RD(2) & 0xffff);
L_002C759C:;
SET64(2, (s16)rd16(c, (RW(16) + 36)));
SET64(17, RD(3) & 0xffff);
{ int t = RD(2) == RD(17);  if (t) goto L_002C75F0; }
SET64(1, RSD(2) < RSD(17));
L_002C75B0:;
{ int t = RD(1) == RD(0);  if (t) goto L_002C75D0; }
SET32(4, RW(16) + 32);
SET64(31, 0x2c75c4); SET32(5, RW(0) + 1); F_00224FA0(c);
 goto L_002C75E0;
L_002C75D0:;
SET32(4, RW(16) + 32);
SET64(31, 0x2c75dc); SET32(5, RW(0) + 1); F_00224F00(c);
L_002C75E0:;
SET64(2, (s16)rd16(c, (RW(16) + 36)));
if (RD(2) != RD(17)) { SET64(1, RSD(2) < RSD(17)); { POLL(); goto L_002C75B0; } }
L_002C75F0:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 1188), (u8)RW(3));
SET64(4, rd16(c, (RW(16) + 36)));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET32(17, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c762c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
if (RD(2) == RD(0)) { SET64(17, (s32)rd32(c, (RW(16) + 24))); goto L_002C7674; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c764c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c7664); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 128), (u8)RW(2));
wr32(c, (RW(17) + 96), RW(0));
SET64(17, (s32)rd32(c, (RW(16) + 24)));
L_002C7674:;
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(1, RD(2) < (u64)(s64)4);
{ int t = RD(1) == RD(0); SET64(18, rd16(c, (RW(16) + 36))); if (t) goto L_002C76A0; }
SET64(4, RD(2) & 0x3);
SET32(3, RW(4) << 1);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3)); goto L_002C76B8;
L_002C76A0:;
SET64(4, RD(2) & 0x3);
SET32(3, RW(4) << 1);
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
L_002C76B8:;
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c76cc); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(1, RD(18) < (u64)(s64)8);
if (RD(1) == RD(0)) { SET32(3, RW(0) + 2); goto L_002C7730; }
SET64(1, RD(18) < (u64)(s64)4);
if (RD(1) == RD(0)) { SET64(4, RD(18) & 0x3); goto L_002C7700; }
SET64(4, RD(18) & 0x3);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3)); goto L_002C7714;
L_002C7700:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
L_002C7714:;
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c7728); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 12), RW(18));
SET32(3, RW(0) + 2);
L_002C7730:;
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + -25336);
wr32(c, (RW(16) + 52), RW(3));
SET64(8, (s32)rd32(c, (RW(16) + 12)));
SET32(7, RW(4) + 28);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(5, RW(0) + 9);
SET32(6, RW(8) + 156);
wr32(c, (RW(8) + 128), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(8) + 132), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(8) + 136), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 12)));
wr32(c, (RW(8) + 140), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 16)));
wr32(c, (RW(8) + 144), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 20)));
wr32(c, (RW(8) + 148), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 24)));
wr32(c, (RW(8) + 152), RW(3));
L_002C7784:;
SET64(4, (s32)rd32(c, (RW(7) + 0)));
SET32(5, RW(5) + -1);
SET64(3, (s32)rd32(c, (RW(7) + 4)));
wr32(c, (RW(6) + 0), RW(4));
SET32(7, RW(7) + 8);
wr32(c, (RW(6) + 4), RW(3));
{ int t = RSD(5) > 0; SET32(6, RW(6) + 8); if (t) { POLL(); goto L_002C7784; } }
L_002C77A4:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
L_002C77A8:;
SET32(3, RW(0) + 2);
SET64(5, (s16)rd16(c, (RW(4) + 184)));
if (RD(5) == RD(3)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002C77DC; }
SET32(3, RW(0) + -1);
{ int t = RD(5) == RD(3);  if (t) goto L_002C77D8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c77d4);  rt_call(c, t); }
wr32(c, (RW(16) + 60), c->f[0].u);
L_002C77D8:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002C77DC:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002C7800(Ctx *c) { /* func_002C7800 */
ENTER(0x2c7800);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002C783C; }
SET64(4, rd16(c, (RW(5) + 104)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { wr8(c, (RW(5) + 167), (u8)RW(0)); goto L_002C783C; }
SET32(3, RW(0) + 1);
wr8(c, (RW(5) + 167), (u8)RW(3));
L_002C783C:;
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET32(3, RW(0) + 5);
if (RD(4) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_002C78C4; }
SET32(3, RW(0) + 4);
if (RD(4) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_002C78B4; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_002C78A4; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_002C7894; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_002C7884; }
SET64(3, (s32)rd32(c, (RW(16) + 52))); goto L_002C78D0;
L_002C7884:;
SET64(31, 0x2c788c);  F_002C72C0(c);
 goto L_002C78CC;
L_002C7894:;
SET64(31, 0x2c789c);  F_002C7250(c);
 goto L_002C78CC;
L_002C78A4:;
SET64(31, 0x2c78ac);  F_002C6D10(c);
 goto L_002C78CC;
L_002C78B4:;
SET64(31, 0x2c78bc);  F_002C6C90(c);
 goto L_002C78CC;
L_002C78C4:;
SET64(31, 0x2c78cc);  F_002C68C0(c);
L_002C78CC:;
SET64(3, (s32)rd32(c, (RW(16) + 52)));
L_002C78D0:;
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002C7954; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002C78E0:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(31, 0x2c78ec); SET32(4, RW(2) + RW(17)); F_002C8B90(c);
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)11);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 144); if (t) { POLL(); goto L_002C78E0; } }
SET64(17, (s32)rd32(c, (RW(16) + 24)));
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
L_002C7908:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c7920);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c7938);  rt_call(c, t); }
SET32(19, RW(19) + 1);
SET64(2, RD(19) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 384); if (t) { POLL(); goto L_002C7908; } }
SET64(31, 0x2c7950); SET64(4, (s32)rd32(c, (RW(16) + 28))); F_002C8370(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_002C7954:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002C7970(Ctx *c) { /* func_002C7970 */
ENTER(0x2c7970);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
L_002C7994:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(17, RW(2) + RW(18));
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c79b4);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002C79C8; }
SET64(2, RD(0) + RD(0)); goto L_002C7A88;
L_002C79C8:;
SET64(2, (s32)rd32(c, (RW(17) + 16)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C79F8; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c79e8);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002C79F8; }
SET64(2, RD(0) + RD(0)); goto L_002C7A88;
L_002C79F8:;
SET64(2, (s32)rd32(c, (RW(17) + 24)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C7A48; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c7a18);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C7A40; }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c7a38);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002C7A48; }
L_002C7A40:;
SET64(2, RD(0) + RD(0)); goto L_002C7A88;
L_002C7A48:;
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c7a60);  rt_call(c, t); }
SET64(2, RD(0) < RD(2));
if (RD(2) == RD(0)) { SET64(2, RD(2) & 0xff); goto L_002C7A88; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2c7a80); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) & 0xff);
L_002C7A88:;
if (RD(2) != RD(0)) { SET32(19, RW(19) + 1); goto L_002C7A98; }
SET64(2, RD(0) + RD(0)); goto L_002C7BA0;
L_002C7A98:;
SET64(2, RD(19) < (u64)(s64)11);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 144); if (t) { POLL(); goto L_002C7994; } }
SET64(17, (s32)rd32(c, (RW(16) + 24)));
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
L_002C7AB0:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c7acc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C7AF8; }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c7af0);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET32(19, RW(19) + 1); goto L_002C7B00; }
L_002C7AF8:;
SET64(2, RD(0) + RD(0)); goto L_002C7B28;
L_002C7B00:;
SET64(2, RD(19) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 384); if (t) { POLL(); goto L_002C7AB0; } }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c7b24);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
L_002C7B28:;
{ int t = RD(2) == RD(0); SET64(3, RD(2) & 0xff); if (t) goto L_002C7B74; }
SET64(17, (s32)rd32(c, (RW(16) + 28)));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c7b4c);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) == RD(0)) { SET64(3, RD(2) & 0xff); goto L_002C7B74; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2c7b6c); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(2, RD(2) & 0xff);
SET64(3, RD(2) & 0xff);
L_002C7B74:;
{ int t = RD(3) == RD(0); SET64(2, RD(3) & 0xff); if (t) goto L_002C7BA0; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) != RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002C7B90; }
SET32(2, RW(0) + 1); goto L_002C7B9C;
L_002C7B90:;
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2c7b9c);  rt_call(c, t); }
L_002C7B9C:;
SET64(2, RD(2) & 0xff);
L_002C7BA0:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002C7BC0(Ctx *c) { /* func_002C7BC0 */
ENTER(0x2c7bc0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, (s32)rd32(c, (RW(4) + 24)));
c->f[20].u = c->f[12].u;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2c7bf8); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c7c0c);  rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(20) + 28)));
c->f[12].u = c->f[20].u;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2c7c20); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c7c34);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
c->f[12].u = c->f[20].u;
SET64(31, 0x2c7c44); SET32(4, RW(2) + 208); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c7c58); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
L_002C7C60:;
SET64(5, (s32)rd32(c, (RW(20) + 20)));
SET32(4, RW(29) + 112);
SET32(3, RW(0) + 16);
{ int t = RD(4) == RD(0); SET32(16, RW(5) + RW(18)); if (t) goto L_002C7C90; }
L_002C7C74:;
wr8(c, (RW(4) + 0), (u8)RW(0));
SET32(3, RW(3) + -1);
SET32(4, RW(4) + 1);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002C7C74; } }
L_002C7C90:;
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(4, (s32)rd32(c, (RW(16) + 28)));
{ int t = RD(4) == RD(0); wr32(c, (RW(29) + 112), RW(3)); if (t) goto L_002C7CA8; }
SET32(4, RW(4) + 16);
L_002C7CA8:;
wr32(c, (RW(29) + 116), RW(4));
SET64(4, (s32)rd32(c, (RW(16) + 16)));
SET64(3, (s32)rd32(c, (RW(29) + 112)));
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 120), RW(4)); if (t) goto L_002C7CF8; }
SET32(17, RW(29) + 112);
L_002C7CC0:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
c->f[12].u = c->f[20].u;
SET64(31, 0x2c7cd0); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c7ce4);  rt_call(c, t); }
SET32(17, RW(17) + 4);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002C7CC0; } }
L_002C7CF8:;
SET64(3, (s32)rd32(c, (RW(16) + 24)));
{ int t = RD(3) == RD(0);  if (t) goto L_002C7D48; }
SET32(4, RW(3) + 192);
SET64(31, 0x2c7d10); c->f[12].u = c->f[20].u; F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(16) + 24)));
c->f[12].u = c->f[20].u;
SET64(31, 0x2c7d20); SET32(4, RW(2) + 576); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c7d34);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c7d48); SET32(4, RW(2) + 384); rt_call(c, t); }
L_002C7D48:;
SET32(19, RW(19) + 1);
SET64(3, RD(19) < (u64)(s64)11);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 144); if (t) { POLL(); goto L_002C7C60; } }
wr32(c, (RW(20) + 56), c->f[20].u);
SET64(31, rd64(c, (RW(29) + 96)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_002C7D80(Ctx *c) { /* func_002C7D80 */
ENTER(0x2c7d80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 24)));
{ int t = RD(16) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002C7DEC; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_002C7DBC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c7db8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
L_002C7DBC:;
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x2c7dcc); SET32(5, RW(5) + -7552); F_001022C0(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x2c7de0); SET32(5, RW(5) + -7552); F_001022C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c7dec); wr32(c, (RW(16) + 8), RW(0)); F_001004B0(c);
L_002C7DEC:;
wr32(c, (RW(17) + 24), RW(0));
SET64(16, (s32)rd32(c, (RW(17) + 28)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 28), RW(0)); goto L_002C7E48; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_002C7E1C; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c7e18); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
L_002C7E1C:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002C7E3C; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c7e38); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002C7E3C:;
SET64(31, 0x2c7e44); wr32(c, (RW(16) + 4), RW(0)); F_001004B0(c);
wr32(c, (RW(17) + 28), RW(0));
L_002C7E48:;
SET64(5, (s64)(s32)0x2c0000);
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x2c7e58); SET32(5, RW(5) + 32416); F_001022C0(c);
wr32(c, (RW(17) + 20), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 76), RW(0)); goto L_002C7E7C; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c7e78); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 76), RW(0));
L_002C7E7C:;
wr32(c, (RW(17) + 44), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C7EA0(Ctx *c) { /* func_002C7EA0 */
ENTER(0x2c7ea0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C7F84; }
SET64(4, (s32)rd32(c, (RW(17) + 12)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 12), RW(0)); goto L_002C7EDC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c7ed8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 12), RW(0));
L_002C7EDC:;
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 16), RW(0)); goto L_002C7EFC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c7ef8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 16), RW(0));
L_002C7EFC:;
SET64(4, (s32)rd32(c, (RW(17) + 28)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 28), RW(0)); goto L_002C7F1C; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c7f18); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 28), RW(0));
L_002C7F1C:;
SET64(4, (s32)rd32(c, (RW(17) + 20)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 20), RW(0)); goto L_002C7F3C; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c7f38); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 20), RW(0));
L_002C7F3C:;
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(31, 0x2c7f4c); SET32(5, RW(5) + -7552); F_001022C0(c);
wr32(c, (RW(17) + 24), RW(0));
SET64(31, 0x2c7f58); SET64(4, (s32)rd32(c, (RW(17) + 32))); F_00100430(c);
SET32(4, RW(17) + 48);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 32), RW(0)); if (t) goto L_002C7F6C; }
SET64(31, 0x2c7f6c); SET32(5, RW(0) + -1); F_001F1A30(c);
L_002C7F6C:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C7F88; }
SET64(31, 0x2c7f84); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002C7F84:;
SET64(2, RD(17) + RD(0));
L_002C7F88:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C7FA0(Ctx *c) { /* func_002C7FA0 */
ENTER(0x2c7fa0);
SET32(29, RW(29) + -544);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(2, (s32)rd32(c, (RW(5) + 0)));
wr32(c, (RW(4) + 44), RW(2));
SET64(16, (s32)rd32(c, (RW(5) + 0)));
SET64(19, rd16(c, (RW(28) + -30348)));
SET64(31, 0x2c7fe4); SET32(4, RW(29) + 128); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 148), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 156), RW(0));
wr16(c, (RW(29) + 160), (u16)RW(0));
wr16(c, (RW(29) + 162), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2c8010); SET32(4, RW(29) + 128); F_001569F0(c);
SET64(5, (s32)rd32(c, (RW(29) + 148)));
SET64(2, RD(19) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 128);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -26960);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(22, RW(3) + RW(5));
SET64(31, 0x2c8040); wr32(c, (RW(29) + 144), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2c804c); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(5, (s32)rd32(c, (RW(18) + 12)));
SET32(3, RW(0) + 11);
SET32(2, RW(0) + 1);
SET32(4, RW(0) + 1600);
SET64(16, (s32)rd32(c, (RW(5) + 112)));
wr16(c, (RW(18) + 32), (u16)RW(3));
wr16(c, (RW(18) + 34), (u16)RW(2));
wr16(c, (RW(18) + 36), (u16)RW(0));
wr16(c, (RW(18) + 38), (u16)RW(0));
wr8(c, (RW(18) + 40), (u8)RW(0));
SET64(31, 0x2c807c); wr8(c, (RW(18) + 40), (u8)RW(2)); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002C80A8; }
SET64(5, (s64)(s32)0x2d0000);
SET64(6, (s64)(s32)0x2c0000);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -27504);
SET32(6, RW(6) + 32416);
SET32(7, RW(0) + 144);
SET64(31, 0x2c80a4); SET32(8, RW(0) + 11); F_00102580(c);
SET64(19, RD(2) + RD(0));
L_002C80A8:;
SET64(6, (s64)(s32)0x410000);
wr32(c, (RW(18) + 20), RW(19));
SET32(6, RW(6) + 4144);
SET32(5, RW(29) + 496);
SET32(4, RW(0) + 5);
L_002C80BC:;
SET64(3, (s16)rd16(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s16)rd16(c, (RW(6) + 2)));
wr16(c, (RW(5) + 0), (u16)RW(3));
wr16(c, (RW(5) + 2), (u16)RW(2));
SET32(6, RW(6) + 4);
{ int t = RSD(4) > 0; SET32(5, RW(5) + 4); if (t) { POLL(); goto L_002C80BC; } }
SET64(7, (s16)rd16(c, (RW(28) + -31336)));
SET64(6, (s64)(s32)0x410000);
SET64(3, (s16)rd16(c, (RW(28) + -31334)));
SET32(6, RW(6) + 4176);
SET64(2, (s16)rd16(c, (RW(28) + -31332)));
SET32(5, RW(29) + 224);
wr16(c, (RW(29) + 528), (u16)RW(7));
SET32(4, RW(0) + 33);
wr16(c, (RW(29) + 530), (u16)RW(3));
wr16(c, (RW(29) + 532), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(28) + -31324)));
SET64(7, (s16)rd16(c, (RW(28) + -31328)));
SET64(3, (s16)rd16(c, (RW(28) + -31326)));
wr16(c, (RW(29) + 536), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(28) + -31322)));
wr16(c, (RW(29) + 540), (u16)RW(7));
wr16(c, (RW(29) + 542), (u16)RW(3));
wr16(c, (RW(29) + 538), (u16)RW(2));
L_002C8124:;
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(5) + 0), RW(3));
wr32(c, (RW(5) + 4), RW(2));
SET32(6, RW(6) + 8);
{ int t = RSD(4) > 0; SET32(5, RW(5) + 8); if (t) { POLL(); goto L_002C8124; } }
SET32(2, RW(29) + 528);
SET32(3, RW(29) + 496);
wr32(c, (RW(29) + 428), RW(2));
SET64(21, RD(0) + RD(0));
SET32(2, RW(29) + 540);
wr32(c, (RW(29) + 236), RW(3));
wr32(c, (RW(29) + 452), RW(2));
SET32(20, RW(29) + 224);
SET32(2, RW(29) + 536);
wr32(c, (RW(29) + 260), RW(3));
wr32(c, (RW(29) + 476), RW(2));
SET64(19, RD(0) + RD(0));
wr32(c, (RW(29) + 284), RW(3));
wr32(c, (RW(29) + 308), RW(3));
wr32(c, (RW(29) + 332), RW(3));
wr32(c, (RW(29) + 356), RW(3));
wr32(c, (RW(29) + 380), RW(3));
wr32(c, (RW(29) + 404), RW(3));
L_002C818C:;
SET64(3, (s16)rd16(c, (RW(20) + 22)));
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_002C81A4; }
SET64(11, RD(0) + RD(0)); goto L_002C81AC;
L_002C81A4:;
SET32(3, RW(3) << 6);
SET32(11, RW(2) + RW(3));
L_002C81AC:;
SET64(3, (s16)rd16(c, (RW(20) + 20)));
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_002C81C4; }
SET64(10, RD(0) + RD(0)); goto L_002C81CC;
L_002C81C4:;
SET32(3, RW(3) << 6);
SET32(10, RW(2) + RW(3));
L_002C81CC:;
SET64(3, (s16)rd16(c, (RW(20) + 16)));
SET64(5, RD(16) + RD(0));
SET64(2, (s16)rd16(c, (RW(20) + 18)));
SET64(6, RD(22) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 20)));
SET64(9, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) << 6);
SET64(7, (s32)rd32(c, (RW(20) + 12)));
SET32(2, RW(2) << 6);
SET32(4, RW(4) + RW(19));
SET32(8, RW(9) + RW(3));
SET64(31, 0x2c8200); SET32(9, RW(9) + RW(2)); F_002C8F40(c);
c->f[2].u = rd32(c, (RW(20) + 0));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(20) + 4));
wr32(c, (RW(29) + 220), RW(2));
c->f[0].u = rd32(c, (RW(20) + 8));
SET32(5, RW(29) + 208);
wr32(c, (RW(29) + 208), c->f[2].u);
wr32(c, (RW(29) + 212), c->f[1].u);
wr32(c, (RW(29) + 216), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 20)));
SET64(31, 0x2c8230); SET32(4, RW(2) + RW(19)); F_002C8D50(c);
SET32(21, RW(21) + 1);
SET32(20, RW(20) + 24);
SET64(2, RD(21) < (u64)(s64)11);
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 144); if (t) { POLL(); goto L_002C818C; } }
SET64(31, 0x2c824c); SET32(4, RW(0) + 16); F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 24), RW(2)); goto L_002C8268; }
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(18) + 24), RW(2));
L_002C8268:;
SET64(4, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET32(6, RW(2) + 1152);
SET32(7, RW(2) + 1344);
SET64(31, 0x2c8284); SET32(8, RW(2) + 1472); F_002C87F0(c);
SET64(2, (s64)(s32)0x42400000);
SET64(3, (s64)(s32)0x42b80000);
wr32(c, (RW(29) + 192), RW(2));
SET64(2, (s64)(s32)0x459c0000);
wr32(c, (RW(29) + 196), RW(3));
SET64(2, RD(2) | 0x4000);
wr32(c, (RW(29) + 200), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 204), RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 24)));
SET64(31, 0x2c82b4); SET32(5, RW(29) + 192); F_002C8600(c);
SET64(31, 0x2c82bc); SET32(4, RW(0) + 8); F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 28), RW(2)); goto L_002C82D0; }
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(18) + 28), RW(2));
L_002C82D0:;
SET64(4, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(22) + RD(0));
SET64(31, 0x2c82e8); SET32(7, RW(2) + 1792); F_002C8460(c);
SET64(2, (s64)(s32)0x42400000);
SET64(3, (s64)(s32)0x41800000);
wr32(c, (RW(29) + 176), RW(2));
SET64(2, (s64)(s32)0x459c0000);
wr32(c, (RW(29) + 180), RW(3));
SET64(2, RD(2) | 0x4000);
wr32(c, (RW(29) + 184), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 188), RW(2));
SET64(16, (s32)rd32(c, (RW(18) + 28)));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2c831c); SET32(5, RW(29) + 176); F_0014E770(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c8330);  rt_call(c, t); }
SET64(31, 0x2c8338); SET64(4, RD(18) + RD(0)); F_002C6760(c);
SET64(31, 0x2c8340); SET64(4, RD(18) + RD(0)); F_002C6130(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(18) + 52), RW(3));
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 544); return;
}

void F_002C8370(Ctx *c) { /* func_002C8370 */
ENTER(0x2c8370);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2c8388); SET64(4, (s32)rd32(c, (RW(4) + 4))); F_00144A50(c);
SET64(2, (s64)(s32)0x40000000);
SET64(8, (s32)rd32(c, (RW(16) + 0)));
c->f[8].u = RW(2);
SET64(7, (s32)rd32(c, (RW(16) + 4)));
c->f[0].f = fpu(F(8) * F(0));
SET64(6, (s64)(s32)0x3f800000);
rd128(c, (RW(8) + 32) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x41200000);
wr32(c, (RW(29) + 32), RW(0));
SET32(5, RW(29) + 48);
wr32(c, (RW(29) + 36), RW(0));
SET32(4, RW(7) + 16);
wr32(c, (RW(29) + 40), RW(0));
c->f[5].f = fpu_div(F(0), F(8));
wr32(c, (RW(29) + 44), RW(6));
wr128(c, (RW(29) + 32) & ~15u, &c->r[3]);
c->f[6].u = rd32(c, (RW(8) + 164));
c->f[1].u = rd32(c, (RW(29) + 40));
c->f[0].u = RW(2);
c->f[6].f = fpu_div(F(6), F(8));
c->f[0].f = fpu(F(1) + F(0));
c->f[5].f = fpu(F(6) - F(5));
c->f[1].u = rd32(c, (RW(7) + 464));
c->f[4].u = rd32(c, (RW(8) + 168));
c->f[3].u = rd32(c, (RW(29) + 32));
c->f[1].f = fpu(F(5) - F(1));
c->f[5].f = fpu_div(F(4), F(8));
c->f[1].f = fpu(F(3) + F(1));
c->f[7].u = rd32(c, (RW(7) + 452));
c->f[6].u = rd32(c, (RW(7) + 436));
c->f[4].u = rd32(c, (RW(7) + 456));
c->f[3].u = rd32(c, (RW(7) + 460));
c->f[6].f = fpu(F(7) + F(6));
wr32(c, (RW(29) + 60), RW(6));
wr32(c, (RW(29) + 56), c->f[0].u);
c->f[0].f = fpu_div(F(6), F(8));
c->f[0].f = fpu(F(5) - F(0));
c->f[0].f = fpu(F(0) - F(4));
c->f[0].f = fpu(F(0) - F(3));
c->f[2].u = rd32(c, (RW(29) + 36));
wr32(c, (RW(29) + 48), c->f[1].u);
c->f[0].f = fpu(F(2) + F(0));
SET64(31, 0x2c8438); wr32(c, (RW(29) + 52), c->f[0].u); F_0014E770(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2c844c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002C8460(Ctx *c) { /* func_002C8460 */
ENTER(0x2c8460);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(7) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x2c8494); SET32(4, RW(0) + 384); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002C84A8; }
SET64(4, RD(19) + RD(0));
SET64(31, 0x2c84a8); SET32(5, RW(0) + 1); F_0014E400(c);
L_002C84A8:;
SET64(5, RD(20) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x2c84bc); wr32(c, (RW(18) + 0), RW(19)); F_002C9580(c);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s64)(s32)0x40000000);
c->f[1].u = RW(2);
wr32(c, (RW(29) + 128), RW(0));
SET64(2, (s64)(s32)0x43800000);
wr32(c, (RW(29) + 132), RW(0));
c->f[2].u = rd32(c, (RW(3) + 164));
wr32(c, (RW(29) + 136), RW(0));
c->f[0].u = RW(2);
SET32(4, RW(0) + 848);
SET64(2, (s64)(s32)0x3f800000);
c->f[1].f = fpu_div(F(2), F(1));
wr32(c, (RW(29) + 140), RW(2));
c->f[0].f = fpu(F(0) - F(1));
SET64(31, 0x2c8500); wr32(c, (RW(3) + 32), c->f[0].u); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002C8514; }
SET64(4, RD(19) + RD(0));
SET64(31, 0x2c8514); SET32(5, RW(0) + 1); F_00143280(c);
L_002C8514:;
wr32(c, (RW(18) + 4), RW(19));
SET64(2, (s64)(s32)0x44000000);
wr32(c, (RW(29) + 104), RW(2));
SET64(7, RD(16) + RD(0));
SET64(2, (s64)(s32)0x42800000);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 108), RW(2));
SET32(5, RW(29) + 112);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 124), RW(2));
SET32(6, RW(29) + 96);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 120), RW(0));
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
wr128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x2c8564); SET64(8, RD(0) + RD(0)); F_00144D20(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(5, RW(0) + 5);
SET64(31, 0x2c8574); SET32(4, RW(2) + 16); F_00145EF0(c);
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 4))); goto L_002C8584; }
SET32(17, RW(17) + 672);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
L_002C8584:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2c8594); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 0)));
c->f[12].u = RW(0);
SET64(31, 0x2c85a4); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c85b8);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 4)));
c->f[12].u = RW(0);
SET64(31, 0x2c85c8); SET32(4, RW(2) + 208); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c85dc); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void F_002C8600(Ctx *c) { /* func_002C8600 */
ENTER(0x2c8600);
SET32(29, RW(29) + -256);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET64(31, 0x2c862c); SET64(16, RD(5) + RD(0)); F_0014E770(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c8640);  rt_call(c, t); }
SET64(2, (s64)(s32)0x427c0000);
SET64(5, (s64)(s32)0x40a00000);
wr32(c, (RW(29) + 196), RW(2));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 228), RW(2));
SET64(3, (s64)(s32)0x42fc0000);
SET64(2, (s64)(s32)0x42ac0000);
wr32(c, (RW(29) + 192), RW(3));
wr32(c, (RW(29) + 212), RW(2));
SET64(3, (s64)(s32)0x430f0000);
SET64(2, (s64)(s32)0x431f0000);
wr32(c, (RW(29) + 200), RW(5));
wr32(c, (RW(29) + 224), RW(2));
SET64(20, RD(0) + RD(0));
SET64(2, (s64)(s32)0x42240000);
wr32(c, (RW(29) + 204), RW(4));
wr32(c, (RW(29) + 244), RW(2));
SET32(19, RW(29) + 192);
wr32(c, (RW(29) + 208), RW(3));
SET64(18, RD(0) + RD(0));
wr32(c, (RW(29) + 240), RW(3));
wr32(c, (RW(29) + 216), RW(5));
wr32(c, (RW(29) + 220), RW(4));
wr32(c, (RW(29) + 232), RW(5));
wr32(c, (RW(29) + 248), RW(5));
wr32(c, (RW(29) + 236), RW(4));
wr32(c, (RW(29) + 252), RW(4));
L_002C86AC:;
c->f[3].u = rd32(c, (RW(16) + 8));
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = rd32(c, (RW(19) + 8));
SET32(5, RW(29) + 112);
c->f[1].u = rd32(c, (RW(16) + 4));
c->f[0].u = rd32(c, (RW(19) + 4));
c->f[3].f = fpu(F(3) + F(2));
c->f[2].f = fpu(F(1) + F(0));
c->f[1].u = rd32(c, (RW(16) + 0));
c->f[0].u = rd32(c, (RW(19) + 0));
wr32(c, (RW(29) + 116), c->f[2].u);
wr32(c, (RW(29) + 124), RW(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 120), c->f[3].u);
wr32(c, (RW(29) + 112), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2c86f4); SET32(4, RW(2) + RW(18)); F_0014E770(c);
SET32(20, RW(20) + 1);
SET32(19, RW(19) + 16);
SET64(2, RD(20) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 384); if (t) { POLL(); goto L_002C86AC; } }
SET64(2, (s64)(s32)0x41880000);
SET64(5, (s64)(s32)0x40a00000);
wr32(c, (RW(29) + 132), RW(2));
SET64(4, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 164), RW(2));
SET64(3, (s64)(s32)0x43130000);
SET64(2, (s64)(s32)0x43100000);
wr32(c, (RW(29) + 128), RW(3));
wr32(c, (RW(29) + 144), RW(2));
SET64(3, (s64)(s32)0x40000000);
SET64(2, (s64)(s32)0x41e80000);
wr32(c, (RW(29) + 136), RW(5));
wr32(c, (RW(29) + 160), RW(2));
SET64(20, RD(0) + RD(0));
SET64(2, (s64)(s32)0x42000000);
wr32(c, (RW(29) + 140), RW(4));
wr32(c, (RW(29) + 176), RW(2));
SET32(19, RW(29) + 128);
wr32(c, (RW(29) + 148), RW(3));
SET64(18, RD(0) + RD(0));
wr32(c, (RW(29) + 180), RW(3));
wr32(c, (RW(29) + 152), RW(5));
wr32(c, (RW(29) + 156), RW(4));
wr32(c, (RW(29) + 168), RW(5));
wr32(c, (RW(29) + 184), RW(5));
wr32(c, (RW(29) + 172), RW(4));
wr32(c, (RW(29) + 188), RW(4));
L_002C8774:;
c->f[3].u = rd32(c, (RW(16) + 8));
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = rd32(c, (RW(19) + 8));
SET32(5, RW(29) + 96);
c->f[1].u = rd32(c, (RW(16) + 4));
c->f[0].u = rd32(c, (RW(19) + 4));
c->f[3].f = fpu(F(3) + F(2));
c->f[2].f = fpu(F(1) + F(0));
c->f[1].u = rd32(c, (RW(16) + 0));
c->f[0].u = rd32(c, (RW(19) + 0));
wr32(c, (RW(29) + 100), c->f[2].u);
wr32(c, (RW(29) + 108), RW(2));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 104), c->f[3].u);
wr32(c, (RW(29) + 96), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x2c87bc); SET32(4, RW(2) + RW(18)); F_0014E770(c);
SET32(20, RW(20) + 1);
SET32(19, RW(19) + 16);
SET64(3, RD(20) < (u64)(s64)4);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 384); if (t) { POLL(); goto L_002C8774; } }
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}

void F_002C87F0(Ctx *c) { /* func_002C87F0 */
ENTER(0x2c87f0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(7) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(6) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(8) + RD(0));
SET64(31, 0x2c882c); SET32(4, RW(0) + 384); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002C8840; }
SET64(4, RD(19) + RD(0));
SET64(31, 0x2c8840); SET32(5, RW(0) + 1); F_0014E400(c);
L_002C8840:;
SET64(5, RD(20) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x2c8854); wr32(c, (RW(18) + 0), RW(19)); F_002C9580(c);
SET64(31, 0x2c885c); SET32(4, RW(0) + 1552); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002C8888; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -7168);
SET32(6, RW(6) + -7552);
SET32(7, RW(0) + 384);
SET64(31, 0x2c8884); SET32(8, RW(0) + 4); F_00102580(c);
SET64(19, RD(2) + RD(0));
L_002C8888:;
wr32(c, (RW(18) + 4), RW(19));
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_002C8894:;
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET64(5, RD(21) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x2c88a8); SET32(4, RW(2) + RW(19)); F_002C9580(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x2c88b4); SET32(4, RW(2) + RW(19)); F_0014E930(c);
SET64(3, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(19));
SET64(31, 0x2c88cc); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c88e8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(20, RW(20) + 1);
SET64(2, RD(20) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 384); if (t) { POLL(); goto L_002C8894; } }
SET64(31, 0x2c8900); SET32(4, RW(0) + 1552); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002C892C; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -7168);
SET32(6, RW(6) + -7552);
SET32(7, RW(0) + 384);
SET64(31, 0x2c8928); SET32(8, RW(0) + 4); F_00102580(c);
SET64(19, RD(2) + RD(0));
L_002C892C:;
wr32(c, (RW(18) + 8), RW(19));
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_002C8938:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x2c894c); SET32(4, RW(2) + RW(19)); F_002C9580(c);
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET64(31, 0x2c8958); SET32(4, RW(2) + RW(19)); F_0014E930(c);
SET64(3, (s32)rd32(c, (RW(18) + 8)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(19));
SET64(31, 0x2c8970); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c898c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(20, RW(20) + 1);
SET64(2, RD(20) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 384); if (t) { POLL(); goto L_002C8938; } }
SET64(2, (s32)rd32(c, (RW(18) + 0)));
c->f[12].u = RW(0);
SET64(31, 0x2c89ac); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c89c0);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002C89F0(Ctx *c) { /* func_002C89F0 */
ENTER(0x2c89f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 4)));
{ int t = RSD(5) <= 0; SET64(16, RD(4) + RD(0)); if (t) goto L_002C8A94; }
SET64(4, (s16)rd16(c, (RW(16) + 4)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 4), (u16)RW(4));
SET64(6, RD(4) << 48);
SET64(7, (s16)rd16(c, (RW(16) + 0)));
SET64(6, RSD(6) >> 48);
SET64(4, RSD(6) < RSD(7));
if (RD(4) != RD(0)) { SET64(4, (s16)rd16(c, (RW(16) + 4))); goto L_002C8A64; }
SET64(4, rd8(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { SET32(4, RW(7) + -1); goto L_002C8A3C; }
SET32(4, RW(6) - RW(7));
L_002C8A3C:;
wr16(c, (RW(16) + 4), (u16)RW(4));
SET64(4, rd8(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { SET64(6, (s16)rd16(c, (RW(16) + 0))); goto L_002C8A54; }
SET64(4, RD(0) + RD(0)); goto L_002C8A5C;
L_002C8A54:;
SET64(4, (s16)rd16(c, (RW(16) + 2)));
SET32(4, RW(6) - RW(4));
L_002C8A5C:;
wr16(c, (RW(16) + 6), (u16)RW(4));
SET64(4, (s16)rd16(c, (RW(16) + 4)));
L_002C8A64:;
SET64(7, (s16)rd16(c, (RW(16) + 6)));
SET64(1, RSD(4) < RSD(7));
if (RD(1) == RD(0)) { SET32(6, RW(4) - RW(7)); goto L_002C8A7C; }
wr16(c, (RW(16) + 6), (u16)RW(4)); goto L_002C8A94;
L_002C8A7C:;
SET64(4, (s16)rd16(c, (RW(16) + 2)));
SET64(4, RSD(6) < RSD(4));
{ int t = RD(4) != RD(0);  if (t) goto L_002C8A94; }
SET32(4, RW(7) + 1);
wr16(c, (RW(16) + 6), (u16)RW(4));
L_002C8A94:;
if (RSD(5) >= 0) { SET64(4, rd16(c, (RW(16) + 4))); goto L_002C8B20; }
SET64(4, (s16)rd16(c, (RW(16) + 4)));
SET32(4, RW(4) + -1);
SET64(5, RD(4) << 48);
SET64(5, RSD(5) >> 48);
{ int t = RSD(5) >= 0; wr16(c, (RW(16) + 4), (u16)RW(4)); if (t) goto L_002C8AE8; }
SET64(4, rd8(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { SET64(4, RD(0) + RD(0)); goto L_002C8AC8; }
SET64(4, (s16)rd16(c, (RW(16) + 0)));
SET32(4, RW(5) + RW(4));
L_002C8AC8:;
wr16(c, (RW(16) + 4), (u16)RW(4));
SET64(4, rd8(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { SET64(4, RD(0) + RD(0)); goto L_002C8AE4; }
SET64(5, (s16)rd16(c, (RW(16) + 0)));
SET64(4, (s16)rd16(c, (RW(16) + 2)));
SET32(4, RW(5) - RW(4));
L_002C8AE4:;
wr16(c, (RW(16) + 6), (u16)RW(4));
L_002C8AE8:;
SET64(4, (s16)rd16(c, (RW(16) + 4)));
SET64(6, (s16)rd16(c, (RW(16) + 6)));
SET64(1, RSD(4) < RSD(6));
if (RD(1) == RD(0)) { SET32(5, RW(4) - RW(6)); goto L_002C8B04; }
wr16(c, (RW(16) + 6), (u16)RW(4)); goto L_002C8B1C;
L_002C8B04:;
SET64(4, (s16)rd16(c, (RW(16) + 2)));
SET64(4, RSD(5) < RSD(4));
{ int t = RD(4) != RD(0);  if (t) goto L_002C8B1C; }
SET32(4, RW(6) + 1);
wr16(c, (RW(16) + 6), (u16)RW(4));
L_002C8B1C:;
SET64(4, rd16(c, (RW(16) + 4)));
L_002C8B20:;
SET64(3, RD(3) & 0xffff);
if (RD(3) == RD(4)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002C8B78; }
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET32(3, RW(4) << 1);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2c8b48); SET32(6, RW(0) + 1); F_00144A60(c);
SET64(31, 0x2c8b50); SET64(4, (s32)rd32(c, (RW(16) + 28))); F_00143100(c);
SET64(31, 0x2c8b58);  F_00139590(c);
SET64(31, 0x2c8b60);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 127);
SET64(31, 0x2c8b74); SET32(7, RW(0) + 64); F_001B5FF0(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_002C8B78:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002C8B90(Ctx *c) { /* func_002C8B90 */
ENTER(0x2c8b90);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2c8bb4);  rt_call(c, t); }
SET64(2, rd8(c, (RW(16) + 36)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 20))); goto L_002C8C9C; }
SET64(2, (s32)rd32(c, (RW(16) + 16)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 28))); goto L_002C8C88; }
SET64(31, 0x2c8bd4); SET64(4, (s32)rd32(c, (RW(16) + 28))); F_00144A50(c);
SET64(2, (s64)(s32)0x40000000);
SET64(8, (s32)rd32(c, (RW(16) + 12)));
c->f[8].u = RW(2);
SET64(7, (s32)rd32(c, (RW(16) + 28)));
c->f[0].f = fpu(F(8) * F(0));
SET64(6, (s64)(s32)0x3f800000);
rd128(c, (RW(8) + 32) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x41200000);
wr32(c, (RW(29) + 32), RW(0));
SET32(5, RW(29) + 48);
wr32(c, (RW(29) + 36), RW(0));
SET32(4, RW(7) + 16);
wr32(c, (RW(29) + 40), RW(0));
c->f[5].f = fpu_div(F(0), F(8));
wr32(c, (RW(29) + 44), RW(6));
wr128(c, (RW(29) + 32) & ~15u, &c->r[3]);
c->f[6].u = rd32(c, (RW(8) + 164));
c->f[1].u = rd32(c, (RW(29) + 40));
c->f[0].u = RW(2);
c->f[6].f = fpu_div(F(6), F(8));
c->f[0].f = fpu(F(1) + F(0));
c->f[5].f = fpu(F(6) - F(5));
c->f[1].u = rd32(c, (RW(7) + 464));
c->f[4].u = rd32(c, (RW(8) + 168));
c->f[3].u = rd32(c, (RW(29) + 32));
c->f[1].f = fpu(F(5) - F(1));
c->f[5].f = fpu_div(F(4), F(8));
c->f[1].f = fpu(F(3) + F(1));
c->f[7].u = rd32(c, (RW(7) + 452));
c->f[6].u = rd32(c, (RW(7) + 436));
c->f[4].u = rd32(c, (RW(7) + 456));
c->f[3].u = rd32(c, (RW(7) + 460));
c->f[6].f = fpu(F(7) + F(6));
wr32(c, (RW(29) + 60), RW(6));
wr32(c, (RW(29) + 56), c->f[0].u);
c->f[0].f = fpu_div(F(6), F(8));
c->f[0].f = fpu(F(5) - F(0));
c->f[0].f = fpu(F(0) - F(4));
c->f[0].f = fpu(F(0) - F(3));
c->f[2].u = rd32(c, (RW(29) + 36));
wr32(c, (RW(29) + 48), c->f[1].u);
c->f[0].f = fpu(F(2) + F(0));
SET64(31, 0x2c8c84); wr32(c, (RW(29) + 52), c->f[0].u); F_0014E770(c);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
L_002C8C88:;
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c8c98); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
L_002C8C9C:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c8cac);  rt_call(c, t); }
SET64(3, rd8(c, (RW(16) + 128)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002C8D44; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
c->f[1].u = rd32(c, (RW(16) + 64));
SET64(2, (s32)rd32(c, (RW(16) + 24)));
c->f[3].u = rd32(c, (RW(3) + 32));
c->f[0].u = c->f[1].u ^ 0x80000000u;
c->f[2].u = rd32(c, (RW(3) + 164));
c->f[1].f = fpu(F(1) + F(3));
c->f[2].f = fpu(F(2) + F(1));
c->f[1].f = fpu(F(0) + F(3));
c->f[0].u = rd32(c, (RW(2) + 164));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(2) + 32), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 24)));
wr32(c, (RW(2) + 416), c->f[2].u);
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c8d04);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c8d18); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x2c8d28); SET32(4, RW(16) + 48); F_001F1AB0(c);
c->f[1].u = rd32(c, (RW(16) + 96));
c->f[0].u = rd32(c, (RW(16) + 100));
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_002C8D40; }
wr32(c, (RW(16) + 96), RW(0));
L_002C8D40:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002C8D44:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002C8D50(Ctx *c) { /* func_002C8D50 */
ENTER(0x2c8d50);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, 0x2c8d70); SET64(16, RD(5) + RD(0)); F_0014E770(c);
SET64(4, (s32)rd32(c, (RW(17) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c8d84);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2c8d90); SET32(4, RW(29) + 112); F_002C94F0(c);
SET64(2, (s64)(s32)0x40000000);
SET64(4, (s32)rd32(c, (RW(17) + 20)));
c->f[5].u = RW(2);
SET32(5, RW(29) + 96);
SET64(2, (s64)(s32)0x40a00000);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(29) + 120));
SET64(2, (s64)(s32)0x3f800000);
c->f[6].u = rd32(c, (RW(4) + 168));
c->f[4].u = rd32(c, (RW(4) + 164));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 108), RW(2));
wr32(c, (RW(29) + 104), c->f[0].u);
c->f[0].f = fpu_div(F(6), F(5));
c->f[1].f = fpu_div(F(4), F(5));
c->f[2].u = rd32(c, (RW(29) + 116));
c->f[0].u = c->f[0].u ^ 0x80000000u;
c->f[3].u = rd32(c, (RW(29) + 112));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(29) + 100), c->f[0].u);
c->f[0].u = c->f[1].u ^ 0x80000000u;
c->f[0].f = fpu(F(3) + F(0));
SET64(31, 0x2c8df0); wr32(c, (RW(29) + 96), c->f[0].u); F_0014E770(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { SET64(6, (s32)rd32(c, (RW(17) + 16))); goto L_002C8E5C; }
c->f[1].u = rd32(c, (RW(16) + 8));
SET64(2, (s64)(s32)0x41200000);
c->f[0].u = RW(2);
SET32(5, RW(29) + 80);
SET64(2, (s64)(s32)0x40800000);
c->f[3].f = fpu(F(1) + F(0));
c->f[1].u = rd32(c, (RW(16) + 4));
c->f[0].u = rd32(c, (RW(16) + 0));
c->f[2].u = RW(2);
c->f[1].f = fpu(F(1) + F(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 92), RW(2));
c->f[0].f = fpu(F(0) + F(2));
wr32(c, (RW(29) + 88), c->f[3].u);
wr32(c, (RW(29) + 84), c->f[1].u);
SET64(31, 0x2c8e44); wr32(c, (RW(29) + 80), c->f[0].u); F_0014E770(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c8e58);  rt_call(c, t); }
SET64(6, (s32)rd32(c, (RW(17) + 16)));
L_002C8E5C:;
if (RD(6) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 24))); goto L_002C8EF4; }
c->f[1].u = rd32(c, (RW(6) + 164));
SET64(2, (s64)(s32)0xc1000000);
c->f[0].u = RW(2);
SET64(4, (s64)(s32)0x3f800000);
c->f[2].u = rd32(c, (RW(6) + 168));
rd128(c, (RW(6) + 32) & ~15u, &c->r[3]);
c->f[5].f = fpu(F(0) + F(1));
SET64(2, (s64)(s32)0x41700000);
wr32(c, (RW(29) + 48), RW(0));
SET32(5, RW(29) + 64);
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 56), RW(0));
c->f[1].u = RW(4);
wr32(c, (RW(29) + 60), RW(4));
c->f[4].f = fpu(F(1) - F(2));
wr128(c, (RW(29) + 48) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 76), RW(4));
c->f[3].u = rd32(c, (RW(29) + 48));
c->f[2].u = rd32(c, (RW(29) + 52));
c->f[1].u = rd32(c, (RW(29) + 56));
c->f[0].u = RW(2);
c->f[3].f = fpu(F(3) + F(5));
c->f[2].f = fpu(F(2) + F(4));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 64), c->f[3].u);
wr32(c, (RW(29) + 68), c->f[2].u);
wr32(c, (RW(29) + 72), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(31, 0x2c8edc); SET32(4, RW(2) + 16); F_0014E770(c);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c8ef0); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
L_002C8EF4:;
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002C8F2C; }
c->f[2].u = rd32(c, (RW(4) + 168));
SET64(3, (s64)(s32)0x40000000);
c->f[1].u = RW(3);
c->f[0].u = rd32(c, (RW(29) + 116));
c->f[1].f = fpu_div(F(2), F(1));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(4) + 36), c->f[0].u);
c->f[0].u = rd32(c, (RW(29) + 116));
SET64(3, (s32)rd32(c, (RW(17) + 24)));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(3) + 420), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 32)));
L_002C8F2C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_002C8F40(Ctx *c) { /* func_002C8F40 */
ENTER(0x2c8f40);
SET32(29, RW(29) + -256);
SET32(3, RW(0) + -1);
wr64(c, (RW(29) + 160), RD(31));
wr128(c, (RW(29) + 144) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[23]);
SET64(30, RD(9) + RD(0));
wr128(c, (RW(29) + 112) & ~15u, &c->r[22]);
SET64(23, RD(8) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
SET64(22, RD(10) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(11) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
wr32(c, (RW(29) + 188), RW(6));
SET64(2, (s16)rd16(c, (RW(7) + 0)));
{ int t = RD(2) == RD(3); SET64(16, RD(0) + RD(0)); if (t) goto L_002C8FC0; }
SET64(4, RD(17) + RD(0));
L_002C8FA4:;
SET32(4, RW(4) + 2);
SET32(16, RW(16) + 1);
SET64(2, (s16)rd16(c, (RW(4) + 0)));
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_002C8FA4; } }
L_002C8FC0:;
SET64(2, RD(16) & 0xffff);
{ int t = RSD(2) > 0; SET64(3, RD(0) + (s64)1); if (t) goto L_002C8FD0; }
SET64(3, RD(2) + RD(0));
L_002C8FD0:;
wr16(c, (RW(19) + 0), (u16)RW(16));
SET32(2, RW(0) + 1);
wr16(c, (RW(19) + 2), (u16)RW(3));
SET32(4, RW(0) + 384);
wr16(c, (RW(19) + 4), (u16)RW(0));
wr16(c, (RW(19) + 6), (u16)RW(0));
wr8(c, (RW(19) + 8), (u8)RW(0));
SET64(31, 0x2c8ff4); wr8(c, (RW(19) + 8), (u8)RW(2)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002C9008; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c9008); SET32(5, RW(0) + 1); F_0014E400(c);
L_002C9008:;
SET64(5, RD(23) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2c901c); wr32(c, (RW(19) + 12), RW(20)); F_002C9580(c);
SET64(31, 0x2c9024); SET32(4, RW(0) + 384); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002C9038; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c9038); SET32(5, RW(0) + 1); F_0014E400(c);
L_002C9038:;
SET64(5, RD(30) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2c904c); wr32(c, (RW(19) + 20), RW(20)); F_002C9580(c);
SET64(3, (s32)rd32(c, (RW(19) + 20)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2c9060); SET32(4, RW(3) + 192); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(19) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c9078); SET32(5, RW(0) + 1); rt_call(c, t); }
{ int t = RD(22) == RD(0);  if (t) goto L_002C90B0; }
SET64(31, 0x2c9088); SET32(4, RW(0) + 384); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002C909C; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c909c); SET32(5, RW(0) + 1); F_0014E400(c);
L_002C909C:;
SET64(5, RD(22) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2c90b0); wr32(c, (RW(19) + 16), RW(20)); F_002C9580(c);
L_002C90B0:;
if (RD(21) == RD(0)) { SET64(2, (s64)(s32)0x3f800000); goto L_002C91AC; }
SET64(31, 0x2c90c0); SET32(4, RW(0) + 784); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002C90EC; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + -7168);
SET32(6, RW(6) + -7552);
SET32(7, RW(0) + 384);
SET64(31, 0x2c90e8); SET32(8, RW(0) + 2); F_00102580(c);
SET64(20, RD(2) + RD(0));
L_002C90EC:;
SET64(4, RD(20) + RD(0));
SET64(5, RD(21) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2c9100); wr32(c, (RW(19) + 24), RW(20)); F_002C9580(c);
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET64(5, RD(21) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2c9114); SET32(4, RW(2) + 384); F_002C9580(c);
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c912c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c9144); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET32(20, RW(19) + 48);
SET64(4, RD(20) + RD(0));
c->f[0].u = rd32(c, (RW(2) + 180));
wr32(c, (RW(2) + 556), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 24)));
c->f[0].u = rd32(c, (RW(2) + 172));
SET64(31, 0x2c9168); wr32(c, (RW(2) + 564), c->f[0].u); F_001F1E00(c);
SET32(2, RW(0) + 3);
wr16(c, (RW(20) + 2), (u16)RW(2));
c->f[13].u = RW(0);
c->f[12].u = rd32(c, (RW(28) + -31372));
c->f[20].u = rd32(c, (RW(28) + -31376));
SET64(31, 0x2c9184); SET64(4, RD(20) + RD(0)); F_002267C0(c);
c->f[12].u = RW(0);
SET64(31, 0x2c9190); SET64(4, RD(20) + RD(0)); F_002267B0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x2c919c); SET64(4, RD(20) + RD(0)); F_002267A0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c91a8); SET32(5, RW(0) + 1); F_00226750(c);
SET64(2, (s64)(s32)0x3f800000);
L_002C91AC:;
SET32(4, RW(0) + 848);
wr32(c, (RW(29) + 252), RW(2));
wr32(c, (RW(29) + 240), RW(0));
wr32(c, (RW(29) + 244), RW(0));
SET64(31, 0x2c91c4); wr32(c, (RW(29) + 248), RW(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002C91D8; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c91d8); SET32(5, RW(0) + 1); F_00143280(c);
L_002C91D8:;
wr32(c, (RW(19) + 28), RW(20));
SET64(2, (s64)(s32)0x43800000);
wr32(c, (RW(29) + 216), RW(2));
SET32(5, RW(29) + 224);
SET64(2, (s64)(s32)0x42800000);
wr32(c, (RW(29) + 224), RW(0));
wr32(c, (RW(29) + 220), RW(2));
SET32(6, RW(29) + 208);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 228), RW(0));
wr32(c, (RW(29) + 236), RW(2));
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 232), RW(0));
wr32(c, (RW(29) + 208), RW(0));
wr32(c, (RW(29) + 212), RW(0));
wr128(c, (RW(29) + 224) & ~15u, &c->r[2]);
SET64(7, (s32)rd32(c, (RW(29) + 188)));
SET64(4, (s32)rd32(c, (RW(19) + 28)));
SET64(31, 0x2c9228); SET64(8, RD(0) + RD(0)); F_00144D20(c);
SET64(2, (s32)rd32(c, (RW(19) + 28)));
SET32(5, RW(0) + 5);
SET64(31, 0x2c9238); SET32(4, RW(2) + 16); F_00145EF0(c);
if (RD(18) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 28))); goto L_002C9248; }
SET32(18, RW(18) + 672);
SET64(4, (s32)rd32(c, (RW(19) + 28)));
L_002C9248:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2c9258); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, 0x2c9260); SET32(4, RW(16) << 1); F_00100530(c);
wr32(c, (RW(19) + 32), RW(2));
{ int t = RD(16) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002C9350; }
SET64(1, RD(16) < (u64)(s64)9);
{ int t = RD(1) != RD(0); SET32(2, RW(16) + -8); if (t) goto L_002C9318; }
SET64(4, RD(17) + RD(0));
SET64(3, RD(0) + RD(0));
L_002C9280:;
SET64(7, (s32)rd32(c, (RW(19) + 32)));
SET32(5, RW(5) + 8);
SET64(8, (s16)rd16(c, (RW(4) + 0)));
SET64(6, RD(5) < RD(2));
SET32(7, RW(7) + RW(3));
wr16(c, (RW(7) + 0), (u16)RW(8));
SET64(7, (s32)rd32(c, (RW(19) + 32)));
SET64(8, (s16)rd16(c, (RW(4) + 2)));
SET32(7, RW(7) + RW(3));
wr16(c, (RW(7) + 2), (u16)RW(8));
SET64(7, (s32)rd32(c, (RW(19) + 32)));
SET64(8, (s16)rd16(c, (RW(4) + 4)));
SET32(7, RW(7) + RW(3));
wr16(c, (RW(7) + 4), (u16)RW(8));
SET64(7, (s32)rd32(c, (RW(19) + 32)));
SET64(8, (s16)rd16(c, (RW(4) + 6)));
SET32(7, RW(7) + RW(3));
wr16(c, (RW(7) + 6), (u16)RW(8));
SET64(7, (s32)rd32(c, (RW(19) + 32)));
SET64(8, (s16)rd16(c, (RW(4) + 8)));
SET32(7, RW(7) + RW(3));
wr16(c, (RW(7) + 8), (u16)RW(8));
SET64(7, (s32)rd32(c, (RW(19) + 32)));
SET64(8, (s16)rd16(c, (RW(4) + 10)));
SET32(7, RW(7) + RW(3));
wr16(c, (RW(7) + 10), (u16)RW(8));
SET64(7, (s32)rd32(c, (RW(19) + 32)));
SET64(8, (s16)rd16(c, (RW(4) + 12)));
SET32(7, RW(7) + RW(3));
wr16(c, (RW(7) + 12), (u16)RW(8));
SET64(7, (s32)rd32(c, (RW(19) + 32)));
SET64(8, (s16)rd16(c, (RW(4) + 14)));
SET32(7, RW(7) + RW(3));
SET32(4, RW(4) + 16);
wr16(c, (RW(7) + 14), (u16)RW(8));
{ int t = RD(6) != RD(0); SET32(3, RW(3) + 16); if (t) { POLL(); goto L_002C9280; } }
L_002C9318:;
SET64(1, RD(5) < RD(16));
{ int t = RD(1) == RD(0);  if (t) goto L_002C9350; }
SET32(6, RW(5) << 1);
SET32(7, RW(17) + RW(6));
L_002C932C:;
SET64(3, (s32)rd32(c, (RW(19) + 32)));
SET32(5, RW(5) + 1);
SET64(4, (s16)rd16(c, (RW(7) + 0)));
SET64(2, RD(5) < RD(16));
SET32(3, RW(3) + RW(6));
SET32(7, RW(7) + 2);
wr16(c, (RW(3) + 0), (u16)RW(4));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 2); if (t) { POLL(); goto L_002C932C; } }
L_002C9350:;
SET64(4, RD(19) + RD(0));
SET64(31, 0x2c935c); SET64(5, RD(0) + RD(0)); F_0013BA20(c);
SET64(2, (s32)rd32(c, (RW(19) + 32)));
SET64(4, (s32)rd32(c, (RW(19) + 28)));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2c9370); SET32(6, RW(0) + 1); F_00144A60(c);
SET64(31, 0x2c9378); SET64(4, (s32)rd32(c, (RW(19) + 28))); F_00143100(c);
SET32(4, RW(29) + 192);
{ int t = RD(4) == RD(0); SET32(3, RW(0) + 16); if (t) goto L_002C93A0; }
L_002C9384:;
wr8(c, (RW(4) + 0), (u8)RW(0));
SET32(3, RW(3) + -1);
SET32(4, RW(4) + 1);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002C9384; } }
L_002C93A0:;
SET64(3, (s32)rd32(c, (RW(19) + 12)));
SET64(4, (s32)rd32(c, (RW(19) + 28)));
{ int t = RD(4) == RD(0); wr32(c, (RW(29) + 192), RW(3)); if (t) goto L_002C93B4; }
SET32(4, RW(4) + 16);
L_002C93B4:;
wr32(c, (RW(29) + 196), RW(4));
SET64(4, (s32)rd32(c, (RW(19) + 16)));
SET64(3, (s32)rd32(c, (RW(29) + 192)));
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 200), RW(4)); if (t) goto L_002C9400; }
SET32(16, RW(29) + 192);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
L_002C93D0:;
c->f[12].u = RW(0);
SET64(31, 0x2c93dc); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c93f0);  rt_call(c, t); }
SET32(16, RW(16) + 4);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_002C93D0; } }
L_002C9400:;
SET64(3, (s32)rd32(c, (RW(19) + 24)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 160))); goto L_002C9454; }
c->f[12].u = RW(0);
SET64(31, 0x2c9418); SET32(4, RW(3) + 192); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(19) + 24)));
c->f[12].u = RW(0);
SET64(31, 0x2c9428); SET32(4, RW(2) + 576); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(19) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c943c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c9450); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 160)));
L_002C9454:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 144) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 128) & ~15u, &c->r[23]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}

void F_002C9490(Ctx *c) { /* func_002C9490 */
ENTER(0x2c9490);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 12), RW(0));
SET32(16, RW(17) + 48);
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 20), RW(0));
wr32(c, (RW(4) + 24), RW(0));
wr32(c, (RW(4) + 28), RW(0));
wr32(c, (RW(4) + 32), RW(0));
wr8(c, (RW(4) + 36), (u8)RW(0));
SET64(31, 0x2c94cc); SET64(4, RD(16) + RD(0)); F_001F1A80(c);
wr8(c, (RW(16) + 80), (u8)RW(0));
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002C94F0(Ctx *c) { /* func_002C94F0 */
ENTER(0x2c94f0);
SET32(29, RW(29) + -32);
SET64(6, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0x40000000);
wr32(c, (RW(29) + 0), RW(0));
c->f[4].u = RW(3);
wr32(c, (RW(29) + 4), RW(0));
c->f[0].u = rd32(c, (RW(5) + 164));
rd128(c, (RW(5) + 32) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 12), RW(6));
c->f[3].f = fpu_div(F(0), F(4));
wr128(c, (RW(29) + 0) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 28), RW(6));
c->f[2].u = rd32(c, (RW(29) + 0));
c->f[0].u = rd32(c, (RW(29) + 8));
c->f[1].u = rd32(c, (RW(29) + 4));
c->f[2].f = fpu(F(2) + F(3));
wr32(c, (RW(29) + 16), c->f[2].u);
c->f[2].u = RW(0);
c->f[0].f = fpu(F(0) + F(2));
c->f[3].u = rd32(c, (RW(5) + 168));
wr32(c, (RW(29) + 24), c->f[0].u);
c->f[2].f = fpu_div(F(3), F(4));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(6));
c->f[0].f = fpu(F(1) + F(2));
wr32(c, (RW(29) + 20), c->f[0].u);
rd128(c, (RW(29) + 16) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]);
SET32(29, RW(29) + 32); return;
}

void F_002C9580(Ctx *c) { /* func_002C9580 */
ENTER(0x2c9580);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, rd16(c, (RW(5) + 52)));
{ int t = RSD(2) < 0; SET64(16, RD(6) + RD(0)); if (t) goto L_002C95BC; }
c->f[0].u = RW(2);
c->f[21].f = (f32)(s32)c->f[0].u; goto L_002C95D8;
L_002C95BC:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[21].f = (f32)(s32)c->f[0].u;
c->f[21].f = fpu(F(21) + F(21));
L_002C95D8:;
SET64(2, rd16(c, (RW(17) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C95F0; }
c->f[0].u = RW(2);
c->f[20].f = (f32)(s32)c->f[0].u; goto L_002C9608;
L_002C95F0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[20].f = (f32)(s32)c->f[0].u;
c->f[20].f = fpu(F(20) + F(20));
L_002C9608:;
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2c9618); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
c->f[12].u = RW(0);
SET32(4, RW(18) + 192);
SET64(31, 0x2c9628); wr32(c, (RW(18) + 160), RW(17)); F_00162CD0(c);
wr32(c, (RW(18) + 164), c->f[21].u);
wr32(c, (RW(18) + 168), c->f[20].u);
wr32(c, (RW(18) + 172), RW(0));
wr32(c, (RW(18) + 176), RW(0));
wr32(c, (RW(18) + 180), c->f[21].u);
wr32(c, (RW(18) + 184), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c9650); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, 0x2c9658); SET64(4, RD(18) + RD(0)); F_0014E900(c);
if (RD(16) == RD(0)) { SET64(25, (s32)rd32(c, (RW(18) + 8))); goto L_002C9668; }
SET32(16, RW(16) + 672);
SET64(25, (s32)rd32(c, (RW(18) + 8)));
L_002C9668:;
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2c9678); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002C96A0(Ctx *c) { /* func_002C96A0 */
ENTER(0x2c96a0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_002C96E8; }
SET64(3, rd16(c, (RW(4) + 104)));
SET32(2, RW(0) + 3);
if (RD(3) != RD(2)) { wr8(c, (RW(4) + 167), (u8)RW(0)); goto L_002C96E4; }
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 167), (u8)RW(2));
L_002C96E4:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
L_002C96E8:;
SET64(2, rd8(c, (RW(4) + 180)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C9764; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2c9704);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C9764; }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c9720);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c9734);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c9748); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c975c); SET32(4, RW(2) + 480); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 16))); goto L_002C983C;
L_002C9764:;
SET64(31, 0x2c976c);  F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c9778); SET32(5, RW(0) + -1); F_0013E080(c);
SET64(31, 0x2c9780); SET64(19, RD(2) & 0xffff); F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c978c); SET32(5, RW(0) + -1); F_0013DFC0(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(18, rd16(c, (RW(4) + 172)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c97a4); SET64(17, RD(2) & 0xffff); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(2, rd8(c, (RW(2) + 180)));
{ int t = RD(2) == RD(0); c->f[20].u = c->f[0].u; if (t) goto L_002C97BC; }
SET64(19, RD(0) + RD(0));
SET64(17, RD(0) & 0xffff);
L_002C97BC:;
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(6, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c97d8); c->f[12].u = c->f[20].u; rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(17, RD(19) & 0xffff);
SET64(5, RD(18) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c97f8); c->f[12].u = c->f[20].u; rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(5, RD(18) + RD(0));
c->f[12].u = c->f[20].u;
SET64(6, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c9818); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(5, RD(18) + RD(0));
c->f[12].u = c->f[20].u;
SET64(6, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c9838); SET32(4, RW(2) + 480); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 16)));
L_002C983C:;
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2c9848); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002C9870(Ctx *c) { /* func_002C9870 */
ENTER(0x2c9870);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(0) + 4);
SET64(4, rd16(c, (RW(4) + 172)));
{ int t = RD(4) == RD(3); SET32(2, RW(0) + -1); if (t) goto L_002C98B8; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 55); goto L_002C98BC; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 54); goto L_002C98BC; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 53); goto L_002C98BC; }
if (RD(4) == RD(0)) { SET32(2, RW(0) + 52); goto L_002C98BC; }
 goto L_002C98BC;
L_002C98B8:;
SET32(2, RW(0) + 48);
L_002C98BC:;
 return;
}

void F_002C98D0(Ctx *c) { /* func_002C98D0 */
ENTER(0x2c98d0);
SET32(29, RW(29) + -272);
SET32(2, RW(0) + 24);
wr64(c, (RW(29) + 112), RD(31));
SET32(3, RW(29) + 208);
wr128(c, (RW(29) + 96) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 20), c->f[21].u);
SET64(16, RD(6) + RD(0));
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 16), c->f[20].u); if (t) goto L_002C9928; }
L_002C990C:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C990C; } }
L_002C9928:;
SET64(18, rd16(c, (RW(28) + -30348)));
SET64(20, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2c993c); SET64(4, RD(20) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c9948); SET64(5, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c9954); SET64(5, RD(18) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c9960); SET32(4, RW(29) + 268); F_002C6470(c);
SET32(4, RW(29) + 268);
SET64(31, 0x2c996c); SET32(5, RW(0) + 32); F_002C6450(c);
wr32(c, (RW(29) + 208), RW(2));
SET64(18, rd16(c, (RW(28) + -30348)));
SET64(20, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2c9984); SET64(4, RD(20) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c9990); SET64(5, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c999c); SET64(5, RD(18) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c99a8); SET32(4, RW(29) + 264); F_002C6470(c);
SET32(4, RW(29) + 264);
SET64(31, 0x2c99b4); SET32(5, RW(0) + 33); F_002C6450(c);
wr32(c, (RW(29) + 212), RW(2));
SET64(18, rd16(c, (RW(28) + -30348)));
SET64(20, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2c99cc); SET64(4, RD(20) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c99d8); SET64(5, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c99e4); SET64(5, RD(18) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c99f0); SET32(4, RW(29) + 260); F_002C6470(c);
SET32(4, RW(29) + 260);
SET64(31, 0x2c99fc); SET32(5, RW(0) + 34); F_002C6450(c);
wr32(c, (RW(29) + 216), RW(2));
SET64(18, rd16(c, (RW(28) + -30348)));
SET64(20, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2c9a14); SET64(4, RD(20) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c9a20); SET64(5, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c9a2c); SET64(5, RD(18) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c9a38); SET32(4, RW(29) + 256); F_002C6470(c);
SET32(4, RW(29) + 256);
SET64(31, 0x2c9a44); SET32(5, RW(0) + 35); F_002C6450(c);
wr32(c, (RW(29) + 220), RW(2));
SET64(18, rd16(c, (RW(28) + -30348)));
SET64(20, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2c9a5c); SET64(4, RD(20) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c9a68); SET64(5, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c9a74); SET64(5, RD(18) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c9a80); SET32(4, RW(29) + 252); F_002C6470(c);
SET32(4, RW(29) + 252);
SET64(31, 0x2c9a8c); SET32(5, RW(0) + 4); F_002C6450(c);
wr32(c, (RW(29) + 224), RW(2));
SET64(31, 0x2c9a98); SET32(4, RW(0) + 196); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C9AD8; }
SET64(31, 0x2c9aa8); SET64(4, RD(18) + RD(0)); F_002265B0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -30064);
SET32(2, RW(2) + -30056);
wr32(c, (RW(18) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 20), RW(2));
SET32(3, RW(3) + -30044);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(18) + 36), RW(3));
wr32(c, (RW(18) + 72), RW(2));
L_002C9AD8:;
wr32(c, (RW(17) + 4), RW(18));
SET64(18, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2c9ae8); SET32(4, RW(29) + 128); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 148), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 156), RW(0));
wr16(c, (RW(29) + 160), (u16)RW(0));
wr16(c, (RW(29) + 162), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 108)));
SET64(31, 0x2c9b14); SET64(5, RD(0) + RD(0)); F_002DC6A0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c9b20); SET32(4, RW(29) + 128); F_001569F0(c);
SET64(5, (s32)rd32(c, (RW(29) + 148)));
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET32(2, RW(2) + -26960);
SET32(4, RW(29) + 128);
SET64(5, (s32)rd32(c, (RW(5) + 124)));
SET32(18, RW(3) + RW(5));
SET64(31, 0x2c9b44); wr32(c, (RW(29) + 144), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2c9b50); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(6, RD(18) + RD(0));
SET32(5, RW(29) + 208);
SET32(7, RW(0) + -1);
SET32(8, RW(0) + 1);
SET32(9, RW(0) + 5);
SET64(31, 0x2c9b70); SET64(10, RD(0) + RD(0)); F_00224050(c);
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET32(7, RW(0) + 1);
SET64(6, (s64)(s32)0x42a00000);
SET64(4, (s64)(s32)0x42940000);
SET64(3, (s64)(s32)0x447a0000);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(5) + 192), (u8)RW(7));
SET64(8, (s32)rd32(c, (RW(17) + 4)));
wr8(c, (RW(8) + 193), (u8)RW(7));
SET64(7, (s16)rd16(c, (RW(8) + 170)));
wr16(c, (RW(8) + 194), (u16)RW(7));
c->f[0].u = rd32(c, (RW(28) + -31368));
SET64(7, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(7) + 144), c->f[0].u);
wr32(c, (RW(29) + 176), RW(6));
wr32(c, (RW(29) + 180), RW(4));
wr32(c, (RW(29) + 184), RW(3));
wr32(c, (RW(29) + 188), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2c9bcc); SET32(5, RW(29) + 176); rt_call(c, t); }
SET64(3, (s64)(s32)0x43b00000);
SET64(2, (s64)(s32)0x43600000);
wr32(c, (RW(29) + 232), RW(3));
wr32(c, (RW(29) + 236), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2c9bf0); SET32(5, RW(29) + 232); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 176), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(3, (s32)rd32(c, (RW(2) + 140)));
SET64(2, rd16(c, (RW(3) + 488)));
SET64(2, RD(2) & 0xfffe);
wr16(c, (RW(3) + 488), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(3, (s32)rd32(c, (RW(2) + 140)));
SET64(2, rd16(c, (RW(3) + 1016)));
SET64(2, RD(2) & 0xfffe);
wr16(c, (RW(3) + 1016), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(3, (s32)rd32(c, (RW(2) + 140)));
SET64(2, rd16(c, (RW(3) + 1544)));
SET64(2, RD(2) & 0xfffe);
wr16(c, (RW(3) + 1544), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(3, (s32)rd32(c, (RW(2) + 140)));
SET64(2, rd16(c, (RW(3) + 2072)));
SET64(2, RD(2) & 0xfffe);
wr16(c, (RW(3) + 2072), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(3, (s32)rd32(c, (RW(2) + 140)));
SET64(2, rd16(c, (RW(3) + 2600)));
SET64(2, RD(2) | 0x1);
SET64(31, 0x2c9c64); wr16(c, (RW(3) + 2600), (u16)RW(2)); F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002C9C78; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002C9C78:;
SET64(31, 0x2c9c80);  F_002284F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2c9c94);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2c9ca8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, 0x2c9cb0); SET32(4, RW(0) + 240); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C9D34; }
SET64(3, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x1f0000);
SET32(3, RW(3) + -14912);
SET64(6, (s64)(s32)0x1f0000);
wr32(c, (RW(18) + 208), RW(3));
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(18) + 0), (u8)RW(0));
SET32(4, RW(18) + 48);
wr32(c, (RW(18) + 4), RW(2));
SET32(5, RW(5) + 6784);
wr32(c, (RW(18) + 16), RW(2));
SET32(6, RW(6) + 6704);
wr32(c, (RW(18) + 20), RW(0));
SET32(7, RW(0) + 80);
wr32(c, (RW(18) + 28), RW(0));
SET32(8, RW(0) + 2);
SET64(31, 0x2c9d00); wr32(c, (RW(18) + 32), RW(0)); F_001023D0(c);
c->f[0].u = RW(0);
SET64(3, (s64)(s32)0x4e0000);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(18) + 24), RW(0));
SET32(3, RW(3) + -14976);
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 12), c->f[0].u);
wr32(c, (RW(18) + 8), c->f[0].u);
wr32(c, (RW(18) + 208), RW(3));
wr32(c, (RW(18) + 224), RW(0));
wr32(c, (RW(18) + 228), RW(0));
wr32(c, (RW(18) + 232), RW(0));
wr8(c, (RW(18) + 236), (u8)RW(2));
L_002C9D34:;
wr32(c, (RW(17) + 20), RW(18));
SET64(2, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(2) + 4120));
SET32(11, RW(0) + 1);
SET64(8, RD(19) + RD(0));
SET32(6, RW(29) + 240);
SET64(5, RD(0) + RD(0));
SET32(7, RW(17) + 4);
SET64(2, (s64)(s32)0x410000);
SET64(9, RD(16) + RD(0));
c->f[1].u = rd32(c, (RW(2) + 4124));
wr32(c, (RW(29) + 240), c->f[2].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 4128));
wr32(c, (RW(29) + 244), c->f[1].u);
wr32(c, (RW(29) + 248), c->f[0].u);
wr64(c, (RW(29) + 0), RD(11));
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2c9d8c); SET64(10, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET64(3, (s64)(s32)0x3f800000);
SET32(4, RW(0) + 736);
SET64(31, 0x2c9da0); wr32(c, (RW(2) + 16), RW(3)); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C9DCC; }
SET64(5, (s64)(s32)0x2d0000);
SET64(6, (s64)(s32)0x2d0000);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + -16320);
SET32(6, RW(6) + -24608);
SET32(7, RW(0) + 240);
SET64(31, 0x2c9dc8); SET32(8, RW(0) + 3); F_00102580(c);
SET64(18, RD(2) + RD(0));
L_002C9DCC:;
wr32(c, (RW(17) + 24), RW(18));
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
L_002C9DD8:;
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(5, RD(19) + RD(0));
SET32(6, RW(17) + 4);
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2c9df8); SET64(7, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 24)));
SET64(2, (s64)(s32)0x461c0000);
SET64(4, RD(2) | 0x3c00);
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < (s64)3);
SET32(3, RW(3) + RW(18));
wr32(c, (RW(3) + 16), RW(4));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 240); if (t) { POLL(); goto L_002C9DD8; } }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2c9e30);  rt_call(c, t); }
c->f[1].u = rd32(c, (RW(2) + 0));
SET32(3, RW(29) + 192);
SET64(2, (s64)(s32)0x43200000);
c->f[0].u = RW(2);
c->f[21].f = fpu(F(0) + F(1));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 16); if (t) goto L_002C9E6C; }
L_002C9E50:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C9E50; } }
L_002C9E6C:;
SET64(3, (s32)rd32(c, (RW(17) + 20)));
c->f[20].u = RW(0);
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(5, RD(0) + RD(0));
SET32(4, RW(29) + 192);
c->f[0].u = rd32(c, (RW(3) + 12));
c->f[2].u = rd32(c, (RW(2) + 12));
c->f[1].u = rd32(c, (RW(2) + 252));
wr32(c, (RW(29) + 192), c->f[0].u);
c->f[0].u = rd32(c, (RW(2) + 492));
wr32(c, (RW(29) + 196), c->f[2].u);
wr32(c, (RW(29) + 200), c->f[1].u);
wr32(c, (RW(29) + 204), c->f[0].u);
L_002C9EA0:;
c->f[0].u = rd32(c, (RW(4) + 0));
c->fcc = F(0) <= F(20);
{ int t = c->fcc;  if (t) goto L_002C9EB8; }
c->f[20].u = c->f[0].u;
L_002C9EB8:;
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < (s64)4);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_002C9EA0; } }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(3, (s64)(s32)0x40000000);
c->f[12].u = c->f[21].u;
wr32(c, (RW(2) + 4), RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 24)));
wr32(c, (RW(2) + 244), RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 24)));
wr32(c, (RW(2) + 484), RW(3));
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2c9efc); c->f[13].u = c->f[20].u; rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
c->f[12].u = c->f[21].u;
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2c9f14); c->f[13].u = c->f[20].u; rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
c->f[12].u = c->f[21].u;
c->f[13].u = c->f[20].u;
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2c9f30); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
c->f[12].u = c->f[21].u;
c->f[13].u = c->f[20].u;
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2c9f4c); SET32(4, RW(2) + 480); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET64(2, (s64)(s32)0x540000);
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c9f64); SET64(5, (s32)rd32(c, (RW(2) + -25324))); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(2, (s64)(s32)0x540000);
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c9f7c); SET64(5, (s32)rd32(c, (RW(2) + -25320))); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 24)));
SET64(2, (s64)(s32)0x540000);
SET64(5, (s32)rd32(c, (RW(2) + -25316)));
SET64(25, (s32)rd32(c, (RW(3) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c9f98); SET32(4, RW(3) + 240); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 24)));
SET64(2, (s64)(s32)0x540000);
SET64(5, (s32)rd32(c, (RW(2) + -25312)));
SET64(25, (s32)rd32(c, (RW(3) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c9fb4); SET32(4, RW(3) + 480); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 112)));
c->f[21].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 96) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(29, RW(29) + 272); return;
}

void F_002C9FE0(Ctx *c) { /* func_002C9FE0 */
ENTER(0x2c9fe0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CA068; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15040);
wr32(c, (RW(17) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ca018);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002CA054; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14912);
wr32(c, (RW(17) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ca038); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(5, (s64)(s32)0x1f0000);
SET32(4, RW(17) + 48);
SET32(5, RW(5) + 6704);
SET32(6, RW(0) + 80);
SET64(31, 0x2ca050); SET32(7, RW(0) + 2); F_00102360(c);
SET64(2, RD(16) << 48);
L_002CA054:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002CA06C; }
SET64(31, 0x2ca068); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002CA068:;
SET64(2, RD(17) + RD(0));
L_002CA06C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CA080(Ctx *c) { /* func_002CA080 */
ENTER(0x2ca080);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) != RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002CA0A4; }
SET32(2, RW(0) + 1); goto L_002CA0B0;
L_002CA0A4:;
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2ca0b0);  rt_call(c, t); }
L_002CA0B0:;
SET64(2, RD(2) & 0xff);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CA138; }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ca0d0);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CA134; }
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ca0ec);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CA134; }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ca108); SET32(4, RW(2) + 240); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CA134; }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ca124); SET32(4, RW(2) + 480); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CA134; }
SET32(2, RW(0) + 1); goto L_002CA138;
L_002CA134:;
SET64(2, RD(0) + RD(0));
L_002CA138:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CA150(Ctx *c) { /* func_002CA150 */
ENTER(0x2ca150);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET64(3, (s32)rd32(c, (RW(3) + 32)));
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(2) + -25324), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
{ int t = RD(3) != RD(0);  if (t) goto L_002CA1B0; }
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002CA1B0; }
SET32(3, RW(0) + 1);
L_002CA1B0:;
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + -25320), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 272)));
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
{ int t = RD(3) != RD(0);  if (t) goto L_002CA1F0; }
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002CA1F0; }
SET32(3, RW(0) + 1);
L_002CA1F0:;
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + -25316), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 512)));
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
{ int t = RD(3) != RD(0);  if (t) goto L_002CA230; }
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002CA230; }
SET32(3, RW(0) + 1);
L_002CA230:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2ca23c); wr32(c, (RW(2) + -25312), RW(3)); F_00139590(c);
SET64(31, 0x2ca244);  F_00139590(c);
SET64(31, 0x2ca24c); SET64(4, (s32)rd32(c, (RW(2) + 20))); F_001B73F0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002CA260(Ctx *c) { /* func_002CA260 */
ENTER(0x2ca260);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 20)));
{ int t = RD(16) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002CA2D8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14976);
wr32(c, (RW(16) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ca294); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
if (RD(16) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002CA2D0; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14912);
wr32(c, (RW(16) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ca2b4); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, (s64)(s32)0x1f0000);
SET32(4, RW(16) + 48);
SET32(5, RW(5) + 6704);
SET32(6, RW(0) + 80);
SET64(31, 0x2ca2cc); SET32(7, RW(0) + 2); F_00102360(c);
SET64(4, RD(16) + RD(0));
L_002CA2D0:;
SET64(31, 0x2ca2d8);  F_001004B0(c);
L_002CA2D8:;
wr32(c, (RW(17) + 20), RW(0));
SET64(5, (s64)(s32)0x2d0000);
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(31, 0x2ca2ec); SET32(5, RW(5) + -24608); F_001022C0(c);
wr32(c, (RW(17) + 24), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CA310(Ctx *c) { /* func_002CA310 */
ENTER(0x2ca310);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(5) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002CA348; }
SET64(4, rd16(c, (RW(5) + 104)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { wr8(c, (RW(5) + 167), (u8)RW(0)); goto L_002CA348; }
SET32(3, RW(0) + 1);
wr8(c, (RW(5) + 167), (u8)RW(3));
L_002CA348:;
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET32(3, RW(0) + 5);
if (RD(4) == RD(3)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002CA648; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 24))); goto L_002CA59C; }
SET32(5, RW(0) + 2);
if (RD(4) == RD(5)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002CA3EC; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002CA384; }
 goto L_002CA644;
L_002CA384:;
SET64(3, rd8(c, (RW(4) + 180)));
{ int t = RD(3) == RD(0);  if (t) goto L_002CA644; }
SET64(3, (s16)rd16(c, (RW(4) + 184)));
if (RD(3) == RD(5)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002CA3AC; }
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 12))); goto L_002CA3CC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
L_002CA3AC:;
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2ca3b8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CA644; }
SET32(3, RW(0) + 5);
wr32(c, (RW(17) + 20), RW(3)); goto L_002CA644;
L_002CA3CC:;
SET64(4, (s32)rd32(c, (RW(2) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 376)));
{ u32 t = RW(25); SET64(31, 0x2ca3e0);  rt_call(c, t); }
SET32(3, RW(0) + 2);
wr32(c, (RW(17) + 20), RW(3)); goto L_002CA644;
L_002CA3EC:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2ca3fc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CA644; }
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(4, (s32)rd32(c, (RW(2) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 364)));
{ u32 t = RW(25); SET64(31, 0x2ca41c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CA644; }
SET64(31, 0x2ca42c); SET32(4, RW(0) + 1560); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CA4E4; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2ca440); SET32(5, RW(0) + 1536); F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -13552);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 1204), RW(3));
SET32(2, RW(0) + -1);
wr32(c, (RW(16) + 1180), RW(2));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 1196), RW(0));
SET32(5, RW(5) + -13952);
wr32(c, (RW(16) + 1200), RW(2));
SET32(4, RW(4) + -13944);
wr32(c, (RW(16) + 56), RW(5));
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -13932);
wr32(c, (RW(16) + 20), RW(4));
SET32(18, RW(16) + 1208);
SET32(2, RW(2) + -13872);
wr32(c, (RW(16) + 36), RW(3));
SET64(4, RD(18) + RD(0));
SET64(31, 0x2ca498); wr32(c, (RW(16) + 1204), RW(2)); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -26960);
wr32(c, (RW(18) + 16), RW(2));
wr32(c, (RW(18) + 20), RW(0));
wr32(c, (RW(18) + 24), RW(0));
wr32(c, (RW(18) + 28), RW(0));
wr16(c, (RW(18) + 32), (u16)RW(0));
wr16(c, (RW(18) + 34), (u16)RW(0));
wr32(c, (RW(16) + 1244), RW(0));
wr32(c, (RW(16) + 1248), RW(0));
wr32(c, (RW(16) + 1252), RW(0));
wr32(c, (RW(16) + 1256), RW(0));
wr32(c, (RW(16) + 1260), RW(0));
wr32(c, (RW(16) + 1264), RW(0));
wr8(c, (RW(16) + 1292), (u8)RW(0));
wr8(c, (RW(16) + 1293), (u8)RW(0));
wr8(c, (RW(16) + 1294), (u8)RW(0));
wr32(c, (RW(16) + 1296), RW(0));
wr8(c, (RW(16) + 1300), (u8)RW(0));
L_002CA4E4:;
wr32(c, (RW(17) + 24), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x2ca4f8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(2, (s16)rd16(c, (RW(2) + 184)));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 4))); goto L_002CA540; }
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2ca514); SET32(4, RW(4) + -25336); F_002C5320(c);
SET64(3, (s32)rd32(c, (RW(17) + 24)));
SET32(2, RW(0) + 1);
wr16(c, (RW(3) + 1276), (u16)RW(2));
SET64(2, rd16(c, (RW(3) + 1272)));
wr16(c, (RW(3) + 1274), (u16)RW(2));
SET64(2, rd16(c, (RW(28) + -31380)));
wr16(c, (RW(3) + 1272), (u16)RW(2));
wr16(c, (RW(3) + 1278), (u16)RW(0));
wr16(c, (RW(3) + 1280), (u16)RW(0));
wr16(c, (RW(3) + 1286), (u16)RW(0));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
L_002CA540:;
SET32(2, RW(0) + 1);
SET64(3, (s16)rd16(c, (RW(3) + 184)));
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(17) + 12))); goto L_002CA588; }
wr8(c, (RW(17) + 32), (u8)RW(2));
SET32(3, RW(0) + 2);
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET32(2, RW(0) + 96);
wr16(c, (RW(4) + 1276), (u16)RW(3));
SET64(3, rd16(c, (RW(4) + 1272)));
wr16(c, (RW(4) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31384)));
wr16(c, (RW(4) + 1272), (u16)RW(3));
wr16(c, (RW(4) + 1278), (u16)RW(0));
wr16(c, (RW(4) + 1280), (u16)RW(0));
wr16(c, (RW(4) + 1286), (u16)RW(0));
wr16(c, (RW(4) + 1278), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 12)));
L_002CA588:;
SET64(31, 0x2ca590); SET64(5, (s32)rd32(c, (RW(17) + 24))); F_0013A470(c);
SET32(3, RW(0) + 3);
wr32(c, (RW(17) + 20), RW(3)); goto L_002CA644;
L_002CA59C:;
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(4) != RD(3);  if (t) goto L_002CA644; }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2ca5c0);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CA644; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s32)rd32(c, (RW(17) + 24)));
{ int t = RD(4) == RD(0); SET64(16, rd16(c, (RW(2) + 184))); if (t) goto L_002CA5E8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ca5e8); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002CA5E8:;
wr32(c, (RW(17) + 24), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002CA60C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ca608); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002CA60C:;
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2ca61c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, 0x2ca624); SET64(4, RD(17) + RD(0)); F_002CA6E0(c);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2ca634); SET32(4, RW(2) + 168); F_0013BA20(c);
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(4, RW(0) + 1);
wr8(c, (RW(3) + 60), (u8)RW(4));
wr32(c, (RW(17) + 20), RW(4));
L_002CA644:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002CA648:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002CA660(Ctx *c) { /* func_002CA660 */
ENTER(0x2ca660);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(0) + 2);
SET64(4, rd16(c, (RW(4) + 172)));
{ int t = RD(4) == RD(3); SET32(2, RW(0) + -1); if (t) goto L_002CA690; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 47); goto L_002CA694; }
if (RD(4) == RD(0)) { SET32(2, RW(0) + 46); goto L_002CA694; }
 goto L_002CA694;
L_002CA690:;
SET32(2, RW(0) + 48);
L_002CA694:;
 return;
}

void F_002CA6A0(Ctx *c) { /* func_002CA6A0 */
ENTER(0x2ca6a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ca6bc); wr32(c, (RW(4) + 28), RW(2)); F_002CA6E0(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 20), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CA6E0(Ctx *c) { /* func_002CA6E0 */
ENTER(0x2ca6e0);
SET32(29, RW(29) + -176);
SET32(2, RW(0) + 16);
wr64(c, (RW(29) + 48), RD(31));
SET32(3, RW(29) + 128);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(3) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002CA720; }
L_002CA704:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CA704; } }
L_002CA720:;
SET64(16, rd16(c, (RW(28) + -30348)));
SET64(18, (s32)rd32(c, (RW(17) + 28)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2ca734); SET64(4, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2ca740); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2ca74c); SET64(5, RD(16) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ca758); SET32(4, RW(29) + 172); F_002C6470(c);
SET32(4, RW(29) + 172);
SET64(31, 0x2ca764); SET32(5, RW(0) + 5); F_002C6450(c);
wr32(c, (RW(29) + 128), RW(2));
SET64(16, rd16(c, (RW(28) + -30348)));
SET64(18, (s32)rd32(c, (RW(17) + 28)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2ca77c); SET64(4, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2ca788); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2ca794); SET64(5, RD(16) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ca7a0); SET32(4, RW(29) + 168); F_002C6470(c);
SET32(4, RW(29) + 168);
SET64(31, 0x2ca7ac); SET32(5, RW(0) + 6); F_002C6450(c);
wr32(c, (RW(29) + 132), RW(2));
SET64(16, rd16(c, (RW(28) + -30348)));
SET64(18, (s32)rd32(c, (RW(17) + 28)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2ca7c4); SET64(4, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2ca7d0); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2ca7dc); SET64(5, RD(16) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ca7e8); SET32(4, RW(29) + 164); F_002C6470(c);
SET32(4, RW(29) + 164);
SET64(31, 0x2ca7f4); SET32(5, RW(0) + 4); F_002C6450(c);
wr32(c, (RW(29) + 136), RW(2));
SET64(31, 0x2ca800); SET32(4, RW(0) + 196); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CA840; }
SET64(31, 0x2ca810); SET64(4, RD(16) + RD(0)); F_002265B0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -30064);
SET32(2, RW(2) + -30056);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -30044);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002CA840:;
wr32(c, (RW(17) + 4), RW(16));
SET64(16, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2ca850); SET32(4, RW(29) + 64); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 84), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 80), RW(2));
wr32(c, (RW(29) + 92), RW(0));
wr16(c, (RW(29) + 96), (u16)RW(0));
wr16(c, (RW(29) + 98), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(31, 0x2ca87c); SET64(5, RD(0) + RD(0)); F_002DC6A0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ca888); SET32(4, RW(29) + 64); F_001569F0(c);
SET64(5, (s32)rd32(c, (RW(29) + 84)));
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(29) + 88)));
SET32(2, RW(2) + -26960);
SET32(4, RW(29) + 64);
SET64(5, (s32)rd32(c, (RW(5) + 124)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2ca8ac); wr32(c, (RW(29) + 80), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 64);
SET64(31, 0x2ca8b8); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(6, RD(16) + RD(0));
SET32(5, RW(29) + 128);
SET32(7, RW(0) + -1);
SET32(8, RW(0) + 1);
SET32(9, RW(0) + 3);
SET64(31, 0x2ca8d8); SET64(10, RD(0) + RD(0)); F_00224050(c);
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET32(7, RW(0) + 1);
SET64(6, (s64)(s32)0x43100000);
SET64(4, (s64)(s32)0x42940000);
SET64(3, (s64)(s32)0x447a0000);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(5) + 192), (u8)RW(7));
SET64(8, (s32)rd32(c, (RW(17) + 4)));
wr8(c, (RW(8) + 193), (u8)RW(7));
SET64(7, (s16)rd16(c, (RW(8) + 170)));
wr16(c, (RW(8) + 194), (u16)RW(7));
c->f[0].u = rd32(c, (RW(28) + -31368));
SET64(7, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(7) + 144), c->f[0].u);
wr32(c, (RW(29) + 112), RW(6));
wr32(c, (RW(29) + 116), RW(4));
wr32(c, (RW(29) + 120), RW(3));
wr32(c, (RW(29) + 124), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2ca934); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(3, (s64)(s32)0x43600000);
SET64(2, (s64)(s32)0x43200000);
wr32(c, (RW(29) + 152), RW(3));
wr32(c, (RW(29) + 156), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2ca958); SET32(5, RW(29) + 152); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 176), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET64(5, rd16(c, (RW(2) + 64)));
SET64(31, 0x2ca978); SET32(4, RW(3) + 168); F_0013BA20(c);
SET64(31, 0x2ca980);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002CA994; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002CA994:;
SET64(31, 0x2ca99c);  F_002284F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2ca9b0);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2ca9c4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void F_002CA9E0(Ctx *c) { /* func_002CA9E0 */
ENTER(0x2ca9e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd8(c, (RW(4) + 32)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002CAA20; }
wr8(c, (RW(4) + 32), (u8)RW(0));
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2caa04); SET32(4, RW(4) + -25336); F_002C5320(c);
SET64(31, 0x2caa0c);  F_00139590(c);
SET64(31, 0x2caa14);  F_00139590(c);
SET64(31, 0x2caa1c); SET64(4, (s32)rd32(c, (RW(2) + 20))); F_001B73F0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_002CAA20:;
SET32(29, RW(29) + 16); return;
}

void F_002CAA30(Ctx *c) { /* func_002CAA30 */
ENTER(0x2caa30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 24)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 24), RW(0)); goto L_002CAA60; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2caa5c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 24), RW(0));
L_002CAA60:;
wr32(c, (RW(16) + 28), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CAA80(Ctx *c) { /* func_002CAA80 */
ENTER(0x2caa80);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_002CAAC4; }
SET64(3, rd16(c, (RW(4) + 104)));
SET32(2, RW(0) + 3);
if (RD(3) != RD(2)) { wr8(c, (RW(4) + 167), (u8)RW(0)); goto L_002CAAC0; }
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 167), (u8)RW(2));
L_002CAAC0:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
L_002CAAC4:;
SET64(2, rd8(c, (RW(4) + 180)));
{ int t = RD(2) == RD(0);  if (t) goto L_002CAB18; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2caae0);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CAB18; }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2caafc);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cab10); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002CAB98;
L_002CAB18:;
SET64(31, 0x2cab20);  F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2cab2c); SET32(5, RW(0) + -1); F_0013DFC0(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(17, rd16(c, (RW(4) + 172)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2cab44); SET64(18, RD(2) & 0xffff); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(2, rd8(c, (RW(2) + 180)));
{ int t = RD(2) == RD(0); c->f[20].u = c->f[0].u; if (t) goto L_002CAB58; }
SET64(18, RD(0) + RD(0));
L_002CAB58:;
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(5, RD(17) + RD(0));
c->f[12].u = c->f[20].u;
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2cab74); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(5, RD(17) + RD(0));
c->f[12].u = c->f[20].u;
SET64(6, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2cab94); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
L_002CAB98:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002CABB0(Ctx *c) { /* func_002CABB0 */
ENTER(0x2cabb0);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(0) + 2);
SET64(4, rd16(c, (RW(4) + 172)));
{ int t = RD(4) == RD(3); SET32(2, RW(0) + -1); if (t) goto L_002CABE0; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 44); goto L_002CABE4; }
if (RD(4) == RD(0)) { SET32(2, RW(0) + 43); goto L_002CABE4; }
 goto L_002CABE4;
L_002CABE0:;
SET32(2, RW(0) + 45);
L_002CABE4:;
 return;
}

void F_002CABF0(Ctx *c) { /* func_002CABF0 */
ENTER(0x2cabf0);
SET32(29, RW(29) + -304);
SET32(2, RW(0) + 16);
wr64(c, (RW(29) + 112), RD(31));
SET32(3, RW(29) + 256);
wr128(c, (RW(29) + 96) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
wr32(c, (RW(29) + 20), c->f[21].u);
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 16), c->f[20].u); if (t) goto L_002CAC48; }
L_002CAC2C:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CAC2C; } }
L_002CAC48:;
SET64(16, rd16(c, (RW(28) + -30348)));
SET64(20, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2cac5c); SET64(4, RD(20) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cac68); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cac74); SET64(5, RD(16) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cac80); SET32(4, RW(29) + 300); F_002C6470(c);
SET32(4, RW(29) + 300);
SET64(31, 0x2cac8c); SET32(5, RW(0) + 7); F_002C6450(c);
wr32(c, (RW(29) + 256), RW(2));
SET64(16, rd16(c, (RW(28) + -30348)));
SET64(20, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2caca4); SET64(4, RD(20) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cacb0); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cacbc); SET64(5, RD(16) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cacc8); SET32(4, RW(29) + 296); F_002C6470(c);
SET32(4, RW(29) + 296);
SET64(31, 0x2cacd4); SET32(5, RW(0) + 8); F_002C6450(c);
wr32(c, (RW(29) + 260), RW(2));
SET64(16, rd16(c, (RW(28) + -30348)));
SET64(20, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2cacec); SET64(4, RD(20) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cacf8); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cad04); SET64(5, RD(16) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cad10); SET32(4, RW(29) + 292); F_002C6470(c);
SET32(4, RW(29) + 292);
SET64(31, 0x2cad1c); SET32(5, RW(0) + 4); F_002C6450(c);
wr32(c, (RW(29) + 264), RW(2));
SET64(31, 0x2cad28); SET32(4, RW(0) + 196); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CAD68; }
SET64(31, 0x2cad38); SET64(4, RD(16) + RD(0)); F_002265B0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -30064);
SET32(2, RW(2) + -30056);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -30044);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002CAD68:;
wr32(c, (RW(19) + 4), RW(16));
SET64(16, (s32)rd32(c, (RW(19) + 12)));
SET64(31, 0x2cad78); SET32(4, RW(29) + 128); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 148), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 156), RW(0));
wr16(c, (RW(29) + 160), (u16)RW(0));
wr16(c, (RW(29) + 162), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(31, 0x2cada4); SET64(5, RD(0) + RD(0)); F_002DC6A0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cadb0); SET32(4, RW(29) + 128); F_001569F0(c);
SET64(5, (s32)rd32(c, (RW(29) + 148)));
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET32(2, RW(2) + -26960);
SET32(4, RW(29) + 128);
SET64(5, (s32)rd32(c, (RW(5) + 124)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2cadd4); wr32(c, (RW(29) + 144), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2cade0); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(6, RD(16) + RD(0));
SET32(5, RW(29) + 256);
SET32(7, RW(0) + -1);
SET32(8, RW(0) + 1);
SET32(9, RW(0) + 4);
SET64(31, 0x2cae00); SET64(10, RD(0) + RD(0)); F_00224050(c);
SET64(5, (s32)rd32(c, (RW(19) + 4)));
SET32(7, RW(0) + 1);
SET64(6, (s64)(s32)0x42c00000);
SET64(4, (s64)(s32)0x42940000);
SET64(3, (s64)(s32)0x447a0000);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(5) + 192), (u8)RW(7));
SET64(8, (s32)rd32(c, (RW(19) + 4)));
wr8(c, (RW(8) + 193), (u8)RW(7));
SET64(7, (s16)rd16(c, (RW(8) + 170)));
wr16(c, (RW(8) + 194), (u16)RW(7));
c->f[0].u = rd32(c, (RW(28) + -31368));
SET64(7, (s32)rd32(c, (RW(19) + 4)));
wr32(c, (RW(7) + 144), c->f[0].u);
wr32(c, (RW(29) + 176), RW(6));
wr32(c, (RW(29) + 180), RW(4));
wr32(c, (RW(29) + 184), RW(3));
wr32(c, (RW(29) + 188), RW(2));
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2cae5c); SET32(5, RW(29) + 176); rt_call(c, t); }
SET64(3, (s64)(s32)0x43a00000);
SET64(2, (s64)(s32)0x43200000);
wr32(c, (RW(29) + 272), RW(3));
wr32(c, (RW(29) + 276), RW(2));
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2cae80); SET32(5, RW(29) + 272); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 4)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 176), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(19) + 4)));
SET64(3, (s32)rd32(c, (RW(2) + 140)));
SET64(2, rd16(c, (RW(3) + 488)));
SET64(2, RD(2) & 0xfffe);
wr16(c, (RW(3) + 488), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 4)));
SET64(3, (s32)rd32(c, (RW(2) + 140)));
SET64(2, rd16(c, (RW(3) + 1016)));
SET64(2, RD(2) & 0xfffe);
wr16(c, (RW(3) + 1016), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 4)));
SET64(3, (s32)rd32(c, (RW(2) + 140)));
SET64(2, rd16(c, (RW(3) + 1544)));
SET64(2, RD(2) | 0x1);
SET64(31, 0x2caecc); wr16(c, (RW(3) + 1544), (u16)RW(2)); F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 4))); goto L_002CAEE0; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(19) + 4)));
L_002CAEE0:;
SET64(31, 0x2caee8);  F_002284F0(c);
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2caefc);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2caf10); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, 0x2caf18); SET32(4, RW(0) + 496); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CAF44; }
SET64(5, (s64)(s32)0x2d0000);
SET64(6, (s64)(s32)0x2d0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -13024);
SET32(6, RW(6) + -20080);
SET32(7, RW(0) + 240);
SET64(31, 0x2caf40); SET32(8, RW(0) + 2); F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002CAF44:;
wr32(c, (RW(19) + 20), RW(16));
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 4064));
SET64(3, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(3) + 4068));
SET32(11, RW(0) + 1);
SET32(6, RW(29) + 224);
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET32(7, RW(19) + 4);
c->f[2].u = rd32(c, (RW(2) + 4072));
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(29) + 224), c->f[0].u);
SET64(8, RD(18) + RD(0));
wr32(c, (RW(29) + 228), c->f[1].u);
SET64(9, RD(17) + RD(0));
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(3) + 4076));
c->f[1].u = rd32(c, (RW(2) + 4080));
wr32(c, (RW(29) + 232), c->f[2].u);
wr32(c, (RW(29) + 236), c->f[0].u);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 4096));
wr32(c, (RW(29) + 240), c->f[1].u);
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 4100));
wr32(c, (RW(29) + 192), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 4104));
wr32(c, (RW(29) + 196), c->f[1].u);
c->f[1].u = rd32(c, (RW(3) + 4108));
wr32(c, (RW(29) + 200), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 4112));
wr32(c, (RW(29) + 204), c->f[1].u);
wr32(c, (RW(29) + 208), c->f[0].u);
wr64(c, (RW(29) + 0), RD(11));
SET64(4, (s32)rd32(c, (RW(19) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2caff0); SET64(10, RD(0) + RD(0)); rt_call(c, t); }
SET32(5, RW(0) + 1);
SET64(8, RD(18) + RD(0));
wr64(c, (RW(29) + 0), RD(5));
SET64(9, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 20)));
SET32(6, RW(29) + 192);
SET32(7, RW(19) + 4);
SET64(10, RD(0) + RD(0));
SET64(11, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2cb024); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2cb038);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2cb04c); c->f[20].u = rd32(c, (RW(2) + 0)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(2) + 0));
SET32(3, RW(29) + 280);
c->f[1].f = fpu(F(1) + F(20));
SET64(2, (s64)(s32)0x42800000);
c->f[0].u = RW(2);
c->f[3].f = fpu(F(1) - F(0));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 12); if (t) goto L_002CB08C; }
L_002CB070:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CB070; } }
L_002CB08C:;
SET64(3, (s32)rd32(c, (RW(19) + 4)));
SET64(2, (s64)(s32)0x3f800000);
c->f[2].u = RW(2);
SET64(5, RD(0) + RD(0));
SET32(4, RW(29) + 280);
SET64(2, (s32)rd32(c, (RW(3) + 140)));
c->f[1].u = rd32(c, (RW(2) + 456));
c->f[0].u = rd32(c, (RW(2) + 984));
wr32(c, (RW(29) + 280), c->f[1].u);
wr32(c, (RW(29) + 284), c->f[0].u);
L_002CB0B4:;
c->f[0].u = rd32(c, (RW(4) + 0));
c->fcc = F(0) <= F(2);
{ int t = c->fcc;  if (t) goto L_002CB0C8; }
c->f[2].u = c->f[0].u;
L_002CB0C8:;
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < (s64)2);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_002CB0B4; } }
SET64(4, (s32)rd32(c, (RW(19) + 20)));
SET64(2, (s64)(s32)0x41800000);
c->f[0].u = RW(2);
c->f[20].f = fpu(F(3) - F(2));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
c->f[21].f = fpu(F(0) + F(2));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
c->f[12].u = c->f[20].u;
{ u32 t = RW(25); SET64(31, 0x2cb100); c->f[13].u = c->f[21].u; rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 20)));
c->f[12].u = c->f[20].u;
c->f[13].u = c->f[21].u;
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2cb11c); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 20)));
SET64(4, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(3) + 16), RW(4));
SET64(3, (s32)rd32(c, (RW(19) + 20)));
wr32(c, (RW(3) + 256), RW(4));
SET64(4, (s32)rd32(c, (RW(19) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cb148); SET64(5, (s32)rd32(c, (RW(2) + -25336))); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 20)));
SET64(2, (s64)(s32)0x540000);
SET64(5, (s32)rd32(c, (RW(2) + -25332)));
SET64(25, (s32)rd32(c, (RW(3) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cb164); SET32(4, RW(3) + 240); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 112)));
c->f[21].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 96) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(29, RW(29) + 304); return;
}

void F_002CB190(Ctx *c) { /* func_002CB190 */
ENTER(0x2cb190);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CB218; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14976);
wr32(c, (RW(17) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2cb1c8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002CB204; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14912);
wr32(c, (RW(17) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2cb1e8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(5, (s64)(s32)0x1f0000);
SET32(4, RW(17) + 48);
SET32(5, RW(5) + 6704);
SET32(6, RW(0) + 80);
SET64(31, 0x2cb200); SET32(7, RW(0) + 2); F_00102360(c);
SET64(2, RD(16) << 48);
L_002CB204:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002CB21C; }
SET64(31, 0x2cb218); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002CB218:;
SET64(2, RD(17) + RD(0));
L_002CB21C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CB230(Ctx *c) { /* func_002CB230 */
ENTER(0x2cb230);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) != RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002CB254; }
SET32(2, RW(0) + 1); goto L_002CB260;
L_002CB254:;
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2cb260);  rt_call(c, t); }
L_002CB260:;
SET64(2, RD(2) & 0xff);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CB2B0; }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2cb280);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CB2AC; }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2cb29c); SET32(4, RW(2) + 240); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CB2AC; }
SET32(2, RW(0) + 1); goto L_002CB2B0;
L_002CB2AC:;
SET64(2, RD(0) + RD(0));
L_002CB2B0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CB2C0(Ctx *c) { /* func_002CB2C0 */
ENTER(0x2cb2c0);
SET64(7, (s32)rd32(c, (RW(4) + 20)));
SET64(5, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
SET64(6, (s32)rd32(c, (RW(7) + 32)));
SET64(4, (s64)(s32)0x540000);
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(6, (s32)c->f[0].u);
wr32(c, (RW(5) + -25336), RW(6));
SET64(5, (s32)rd32(c, (RW(7) + 272)));
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
wr32(c, (RW(4) + -25332), RW(5));
SET64(4, (s32)rd32(c, (RW(7) + 512)));
c->f[0].u = rd32(c, (RW(4) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[0].u);
wr32(c, (RW(3) + -25328), RW(4)); return;
}

void F_002CB320(Ctx *c) { /* func_002CB320 */
ENTER(0x2cb320);
SET32(29, RW(29) + -32);
SET64(5, (s64)(s32)0x2d0000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 20)));
SET64(31, 0x2cb340); SET32(5, RW(5) + -20080); F_001022C0(c);
wr32(c, (RW(16) + 20), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CB360(Ctx *c) { /* func_002CB360 */
ENTER(0x2cb360);
SET64(5, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(5) == RD(0);  if (t) goto L_002CB384; }
SET64(4, rd16(c, (RW(5) + 104)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { wr8(c, (RW(5) + 167), (u8)RW(0)); goto L_002CB384; }
SET32(3, RW(0) + 1);
wr8(c, (RW(5) + 167), (u8)RW(3));
L_002CB384:;
 return;
}

void F_002CB390(Ctx *c) { /* func_002CB390 */
ENTER(0x2cb390);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(0) + 4);
SET64(4, rd16(c, (RW(4) + 172)));
{ int t = RD(4) == RD(3); SET32(2, RW(0) + -1); if (t) goto L_002CB3D8; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 41); goto L_002CB3DC; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 40); goto L_002CB3DC; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 38); goto L_002CB3DC; }
if (RD(4) == RD(0)) { SET32(2, RW(0) + 39); goto L_002CB3DC; }
 goto L_002CB3DC;
L_002CB3D8:;
SET32(2, RW(0) + 42);
L_002CB3DC:;
 return;
}

void F_002CB3F0(Ctx *c) { /* func_002CB3F0 */
ENTER(0x2cb3f0);
SET32(29, RW(29) + -208);
SET32(2, RW(0) + 24);
wr64(c, (RW(29) + 64), RD(31));
SET32(3, RW(29) + 144);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CB438; }
L_002CB41C:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CB41C; } }
L_002CB438:;
SET64(18, rd16(c, (RW(28) + -30348)));
SET64(19, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2cb44c); SET64(4, RD(19) + RD(0)); F_002C6520(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cb458); SET64(5, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cb464); SET64(5, RD(18) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cb470); SET32(4, RW(29) + 204); F_002C6470(c);
SET32(4, RW(29) + 204);
SET64(31, 0x2cb47c); SET64(5, RD(0) + RD(0)); F_002C6450(c);
wr32(c, (RW(29) + 144), RW(2));
SET64(18, rd16(c, (RW(28) + -30348)));
SET64(19, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2cb494); SET64(4, RD(19) + RD(0)); F_002C6520(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cb4a0); SET64(5, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cb4ac); SET64(5, RD(18) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cb4b8); SET32(4, RW(29) + 200); F_002C6470(c);
SET32(4, RW(29) + 200);
SET64(31, 0x2cb4c4); SET32(5, RW(0) + 1); F_002C6450(c);
wr32(c, (RW(29) + 148), RW(2));
SET64(18, rd16(c, (RW(28) + -30348)));
SET64(19, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2cb4dc); SET64(4, RD(19) + RD(0)); F_002C6520(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cb4e8); SET64(5, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cb4f4); SET64(5, RD(18) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cb500); SET32(4, RW(29) + 196); F_002C6470(c);
SET32(4, RW(29) + 196);
SET64(31, 0x2cb50c); SET32(5, RW(0) + 2); F_002C6450(c);
wr32(c, (RW(29) + 152), RW(2));
SET64(18, rd16(c, (RW(28) + -30348)));
SET64(19, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2cb524); SET64(4, RD(19) + RD(0)); F_002C6520(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cb530); SET64(5, RD(18) + RD(0)); F_002C6520(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cb53c); SET64(5, RD(18) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cb548); SET32(4, RW(29) + 192); F_002C6470(c);
SET32(4, RW(29) + 192);
SET64(31, 0x2cb554); SET32(5, RW(0) + 3); F_002C6450(c);
wr32(c, (RW(29) + 156), RW(2));
SET64(18, (s32)rd32(c, (RW(16) + 0)));
SET64(16, rd16(c, (RW(28) + -30348)));
SET64(4, RD(18) + RD(0));
SET64(31, 0x2cb56c); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2cb578); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2cb584); SET64(5, RD(16) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cb590); SET32(4, RW(29) + 188); F_002C6470(c);
SET32(4, RW(29) + 188);
SET64(31, 0x2cb59c); SET32(5, RW(0) + 4); F_002C6450(c);
wr32(c, (RW(29) + 160), RW(2));
SET64(31, 0x2cb5a8); SET32(4, RW(0) + 196); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CB5E8; }
SET64(31, 0x2cb5b8); SET64(4, RD(16) + RD(0)); F_002265B0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -30064);
SET32(2, RW(2) + -30056);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -30044);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002CB5E8:;
wr32(c, (RW(17) + 4), RW(16));
SET64(16, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2cb5f8); SET32(4, RW(29) + 80); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 100), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 104), RW(0));
wr32(c, (RW(29) + 96), RW(2));
wr32(c, (RW(29) + 108), RW(0));
wr16(c, (RW(29) + 112), (u16)RW(0));
wr16(c, (RW(29) + 114), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(31, 0x2cb624); SET64(5, RD(0) + RD(0)); F_002DC6A0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cb630); SET32(4, RW(29) + 80); F_001569F0(c);
SET64(5, (s32)rd32(c, (RW(29) + 100)));
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(29) + 104)));
SET32(2, RW(2) + -26960);
SET32(4, RW(29) + 80);
SET64(5, (s32)rd32(c, (RW(5) + 124)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2cb654); wr32(c, (RW(29) + 96), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2cb660); SET64(5, RD(0) + RD(0)); F_001575C0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(6, RD(16) + RD(0));
SET32(5, RW(29) + 144);
SET32(7, RW(0) + -1);
SET32(8, RW(0) + 1);
SET32(9, RW(0) + 5);
SET64(31, 0x2cb680); SET64(10, RD(0) + RD(0)); F_00224050(c);
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET32(7, RW(0) + 1);
SET64(6, (s64)(s32)0x43000000);
SET64(4, (s64)(s32)0x42940000);
SET64(3, (s64)(s32)0x447a0000);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(5) + 192), (u8)RW(7));
SET64(8, (s32)rd32(c, (RW(17) + 4)));
wr8(c, (RW(8) + 193), (u8)RW(7));
SET64(7, (s16)rd16(c, (RW(8) + 170)));
wr16(c, (RW(8) + 194), (u16)RW(7));
c->f[0].u = rd32(c, (RW(28) + -31368));
SET64(7, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(7) + 144), c->f[0].u);
wr32(c, (RW(29) + 128), RW(6));
wr32(c, (RW(29) + 132), RW(4));
wr32(c, (RW(29) + 136), RW(3));
wr32(c, (RW(29) + 140), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2cb6dc); SET32(5, RW(29) + 128); rt_call(c, t); }
SET64(3, (s64)(s32)0x43800000);
SET64(2, (s64)(s32)0x43600000);
wr32(c, (RW(29) + 176), RW(3));
wr32(c, (RW(29) + 180), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2cb700); SET32(5, RW(29) + 176); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(0) + 1);
SET64(31, 0x2cb710); wr8(c, (RW(2) + 176), (u8)RW(3)); F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002CB724; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002CB724:;
SET64(31, 0x2cb72c);  F_002284F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2cb740);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2cb754); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 208); return;
}

void F_002CB770(Ctx *c) { /* func_002CB770 */
ENTER(0x2cb770);
 return;
}

void F_002CB780(Ctx *c) { /* func_002CB780 */
ENTER(0x2cb780);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(2, (s16)rd16(c, (RW(2) + 184))); return;
}

void F_002CB790(Ctx *c) { /* func_002CB790 */
ENTER(0x2cb790);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) != RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002CB7AC; }
SET32(2, RW(0) + 1); goto L_002CB7B8;
L_002CB7AC:;
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2cb7b8);  rt_call(c, t); }
L_002CB7B8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002CB7D0(Ctx *c) { /* func_002CB7D0 */
ENTER(0x2cb7d0);
 return;
}

void F_002CB7E0(Ctx *c) { /* func_002CB7E0 */
ENTER(0x2cb7e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CB844; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15088);
wr32(c, (RW(17) + 16), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { SET64(2, RD(16) << 48); goto L_002CB828; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cb824); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_002CB828:;
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 8), RW(0));
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(17) + 12), RW(0)); if (t) goto L_002CB844; }
SET64(31, 0x2cb844); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002CB844:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CB860(Ctx *c) { /* func_002CB860 */
ENTER(0x2cb860);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2cb884); c->f[20].u = c->f[12].u; F_002CCDC0(c);
c->f[0].u = RW(0);
c->fcc = F(20) <= F(0);
{ int t = c->fcc;  if (t) goto L_002CB8F8; }
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->fcc = F(20) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002CB8F8; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002CB8B8:;
SET64(2, (s32)rd32(c, (RW(16) + 224)));
c->f[12].u = c->f[20].u;
SET32(2, RW(2) + RW(17));
SET64(31, 0x2cb8cc); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cb8e4);  rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < (s64)2);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002CB8B8; } }
L_002CB8F8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002CB920(Ctx *c) { /* func_002CB920 */
ENTER(0x2cb920);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2cb934); SET64(16, RD(4) + RD(0)); F_002CD0E0(c);
SET64(4, (s32)rd32(c, (RW(16) + 224)));
SET64(3, (s64)(s32)0x40000000);
c->f[0].u = RW(3);
c->f[2].u = rd32(c, (RW(16) + 8));
c->f[1].u = rd32(c, (RW(4) + 164));
c->f[0].f = fpu_div(F(1), F(0));
c->f[0].f = fpu(F(2) - F(0));
wr32(c, (RW(4) + 32), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CB970(Ctx *c) { /* func_002CB970 */
ENTER(0x2cb970);
SET32(29, RW(29) + -176);
SET32(9, RW(0) + 1);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET32(5, RW(20) + 1);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
wr32(c, (RW(29) + 12), c->f[23].u);
SET64(16, RD(7) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
SET32(6, RW(0) + 101);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(7, RD(17) + RD(0));
SET64(8, RD(16) + RD(0));
SET64(31, 0x2cb9cc); wr32(c, (RW(29) + 0), c->f[20].u); F_002CD1F0(c);
SET64(31, 0x2cb9d4); SET32(4, RW(0) + 784); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002CBA00; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -7168);
SET32(6, RW(6) + -7552);
SET32(7, RW(0) + 384);
SET64(31, 0x2cb9fc); SET32(8, RW(0) + 2); F_00102580(c);
SET64(19, RD(2) + RD(0));
L_002CBA00:;
wr32(c, (RW(18) + 224), RW(19));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
c->f[1].u = rd32(c, (RW(28) + -31352));
c->f[0].u = rd32(c, (RW(28) + -31348));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
wr32(c, (RW(29) + 168), c->f[1].u);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2cba24); wr32(c, (RW(29) + 172), c->f[0].u); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2cba38); c->f[20].u = rd32(c, (RW(2) + 0)); rt_call(c, t); }
SET64(4, (s64)(s32)0x40000000);
SET64(3, RD(20) & 0xffff);
c->f[0].u = RW(4);
SET64(21, RD(0) + RD(0));
c->f[0].f = fpu_div(F(20), F(0));
SET64(20, RD(0) + RD(0));
SET32(19, RW(29) + 168);
c->f[1].u = rd32(c, (RW(2) + 0));
SET64(2, (s64)(s32)0x44bb0000);
wr32(c, (RW(29) + 148), RW(0));
SET64(2, RD(2) | 0x8000);
wr32(c, (RW(29) + 152), RW(2));
c->f[0].f = fpu(F(1) + F(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 156), RW(2));
SET32(2, RW(3) << 5);
SET32(2, RW(2) + RW(3));
SET32(22, RW(2) << 4);
wr32(c, (RW(29) + 144), c->f[0].u);
L_002CBA84:;
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(4, RW(2) + RW(20));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2cba9c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 0)));
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET32(4, RW(4) << 6);
SET32(2, RW(2) + RW(20));
SET32(3, RW(3) + RW(4));
wr32(c, (RW(2) + 160), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(4, RW(2) + RW(4));
SET64(2, rd16(c, (RW(4) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002CBAD8; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002CBAF0;
L_002CBAD8:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002CBAF0:;
SET64(3, (s64)(s32)0x3f800000);
SET64(2, rd16(c, (RW(4) + 54)));
c->f[0].u = RW(3);
{ int t = RSD(2) < 0; c->f[20].f = fpu(F(1) - F(0)); if (t) goto L_002CBB10; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002CBB2C;
L_002CBB10:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002CBB2C:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
SET64(2, (s32)rd32(c, (RW(4) + 140)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET32(2, RW(2) + RW(22));
c->f[22].u = rd32(c, (RW(2) + 168));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
c->f[21].u = rd32(c, (RW(2) + 36));
{ u32 t = RW(25); SET64(31, 0x2cbb58); c->f[23].f = fpu(F(1) - F(0)); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(2) + 4));
SET32(5, RW(29) + 144);
SET64(2, (s64)(s32)0x40000000);
c->f[1].u = RW(2);
c->f[1].f = fpu_div(F(22), F(1));
SET64(2, (s64)(s32)0x40800000);
c->f[2].f = fpu(F(21) + F(1));
c->f[1].u = RW(2);
c->f[1].f = fpu(F(2) - F(1));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 148), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET64(31, 0x2cbb98); SET32(4, RW(2) + RW(20)); F_0014E770(c);
SET64(2, (s32)rd32(c, (RW(18) + 224)));
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(20));
wr32(c, (RW(2) + 164), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(2, RW(2) + RW(20));
wr32(c, (RW(2) + 168), c->f[23].u);
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(2, RW(2) + RW(20));
wr32(c, (RW(2) + 172), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(2, RW(2) + RW(20));
wr32(c, (RW(2) + 176), RW(0));
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(2, RW(2) + RW(20));
wr32(c, (RW(2) + 180), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(2, RW(2) + RW(20));
wr32(c, (RW(2) + 184), c->f[23].u);
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(2, RW(2) + RW(20));
SET64(31, 0x2cbbf4); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET64(31, 0x2cbc00); SET32(4, RW(2) + RW(20)); F_0014E900(c);
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(4, RW(2) + RW(20));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cbc18);  rt_call(c, t); }
SET32(21, RW(21) + 1);
SET32(20, RW(20) + 384);
SET64(2, RSD(21) < (s64)2);
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_002CBA84; } }
SET64(3, (s32)rd32(c, (RW(18) + 224)));
SET64(2, (s64)(s32)0x41200000);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(3) + 424));
SET32(4, RW(3) + 384);
SET64(31, 0x2cbc48); c->f[12].f = fpu(F(0) + F(1)); F_0014E7A0(c);
SET64(4, (s32)rd32(c, (RW(18) + 224)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cbc5c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cbc70); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(3, rd16(c, (RW(3) + 1972)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_002CBC8C; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002CBCA4;
L_002CBC8C:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002CBCA4:;
SET64(3, (s64)(s32)0x40000000);
wr32(c, (RW(18) + 12), c->f[0].u);
c->f[3].u = RW(3);
SET64(4, (s32)rd32(c, (RW(18) + 28)));
SET64(3, (s32)rd32(c, (RW(18) + 224)));
c->f[0].u = rd32(c, (RW(4) + 168));
c->f[1].u = rd32(c, (RW(3) + 168));
c->f[2].u = rd32(c, (RW(3) + 36));
c->f[0].f = fpu_div(F(0), F(3));
c->f[1].f = fpu_div(F(1), F(3));
c->f[1].f = fpu(F(2) + F(1));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(4) + 36), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(18) + 224)));
c->f[0].u = rd32(c, (RW(4) + 552));
c->f[1].u = rd32(c, (RW(3) + 168));
c->f[0].f = fpu_div(F(0), F(3));
c->f[1].f = fpu_div(F(1), F(3));
c->f[2].u = rd32(c, (RW(3) + 36));
c->f[1].f = fpu(F(2) + F(1));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(4) + 420), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 128)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 112) & ~15u, &c->r[22]);
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void F_002CBD40(Ctx *c) { /* func_002CBD40 */
ENTER(0x2cbd40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(4) + 28)));
c->f[1].u = rd32(c, (RW(2) + 32));
c->f[0].u = rd32(c, (RW(2) + 36));
c->f[21].f = fpu(F(1) - F(12));
SET64(31, 0x2cbd70); c->f[20].f = fpu(F(0) - F(13)); F_002CD740(c);
SET64(2, (s32)rd32(c, (RW(16) + 224)));
c->f[0].u = rd32(c, (RW(2) + 32));
c->f[0].f = fpu(F(21) + F(0));
wr32(c, (RW(2) + 32), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 224)));
c->f[0].u = rd32(c, (RW(2) + 36));
c->f[0].f = fpu(F(20) + F(0));
wr32(c, (RW(2) + 36), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 224)));
c->f[0].u = rd32(c, (RW(2) + 420));
c->f[0].f = fpu(F(20) + F(0));
wr32(c, (RW(2) + 420), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(16) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cbdb0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 224)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cbdc4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cbdd8); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void F_002CBDF0(Ctx *c) { /* func_002CBDF0 */
ENTER(0x2cbdf0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f8f0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, RD(2) | 0x5c29);
SET64(6, (s32)rd32(c, (RW(4) + 224)));
SET64(2, (s64)(s32)0x40c00000);
SET64(5, (s32)rd32(c, (RW(4) + 32)));
c->f[1].u = RW(2);
c->f[0].u = RW(0);
c->f[2].u = rd32(c, (RW(6) + 32));
c->f[4].u = rd32(c, (RW(5) + 0));
c->f[3].u = RW(3);
c->f[1].f = fpu(F(1) + F(2));
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(3) * F(4));
wr32(c, (RW(6) + 416), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 224)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cbe48); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002CBE60(Ctx *c) { /* func_002CBE60 */
ENTER(0x2cbe60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cbe84);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 28)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cbe98); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 224)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cbeac);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cbec0); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CBED0(Ctx *c) { /* func_002CBED0 */
ENTER(0x2cbed0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 224)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cbef4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cbf08); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CBF20(Ctx *c) { /* func_002CBF20 */
ENTER(0x2cbf20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 28)));
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cbf48);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CBF7C; }
SET64(2, (s32)rd32(c, (RW(16) + 28)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cbf68);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CBF78; }
SET64(2, RD(0) + (s64)1); goto L_002CBF7C;
L_002CBF78:;
SET64(2, RD(0) + RD(0));
L_002CBF7C:;
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CBFD0; }
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cbf9c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CBFCC; }
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cbfbc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CBFCC; }
SET32(2, RW(0) + 1); goto L_002CBFD0;
L_002CBFCC:;
SET64(2, RD(0) + RD(0));
L_002CBFD0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CBFE0(Ctx *c) { /* func_002CBFE0 */
ENTER(0x2cbfe0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2cbff8); SET64(4, (s32)rd32(c, (RW(4) + 32))); F_001004B0(c);
wr32(c, (RW(16) + 32), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET64(31, 0x2cc00c); SET32(5, RW(5) + -7552); F_001022C0(c);
wr32(c, (RW(16) + 28), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 224)));
SET64(31, 0x2cc020); SET32(5, RW(5) + -7552); F_001022C0(c);
wr32(c, (RW(16) + 224), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CC040(Ctx *c) { /* func_002CC040 */
ENTER(0x2cc040);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET64(5, (s64)(s32)0x1f0000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(3) + -14912);
wr32(c, (RW(4) + 208), RW(3));
SET64(6, (s64)(s32)0x1f0000);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(4) + 0), (u8)RW(0));
wr32(c, (RW(4) + 4), RW(2));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(2));
SET32(5, RW(5) + 6784);
wr32(c, (RW(4) + 20), RW(0));
SET32(6, RW(6) + 6704);
wr32(c, (RW(4) + 28), RW(0));
SET32(7, RW(0) + 80);
wr32(c, (RW(4) + 32), RW(0));
SET32(8, RW(0) + 2);
SET64(31, 0x2cc098); SET32(4, RW(16) + 48); F_001023D0(c);
c->f[0].u = RW(0);
SET64(3, (s64)(s32)0x4e0000);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(16) + 24), RW(0));
SET32(3, RW(3) + -15040);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 12), c->f[0].u);
wr32(c, (RW(16) + 8), c->f[0].u);
wr32(c, (RW(16) + 208), RW(3));
wr32(c, (RW(16) + 224), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CC0D0(Ctx *c) { /* func_002CC0D0 */
ENTER(0x2cc0d0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, rd8(c, (RW(4) + 0)));
SET64(31, 0x2cc100); c->f[20].u = c->f[12].u; F_002CCDC0(c);
c->f[0].u = RW(0);
c->fcc = F(20) <= F(0);
if (c->fcc) { SET64(3, (s32)rd32(c, (RW(19) + 232))); goto L_002CC1A0; }
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->fcc = F(20) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002CC19C; }
SET64(3, (s32)rd32(c, (RW(19) + 232)));
{ int t = RD(3) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002CC180; }
SET64(17, RD(0) + RD(0));
L_002CC13C:;
SET64(2, (s32)rd32(c, (RW(19) + 224)));
c->f[12].u = c->f[20].u;
SET32(2, RW(2) + RW(17));
SET64(31, 0x2cc150); SET32(4, RW(2) + 208); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(19) + 224)));
SET32(2, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cc168); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 232)));
SET32(18, RW(18) + 1);
SET64(3, RD(18) < RD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 848); if (t) { POLL(); goto L_002CC13C; } }
L_002CC180:;
SET64(4, (s32)rd32(c, (RW(19) + 228)));
{ int t = RD(4) == RD(0);  if (t) goto L_002CC19C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2cc19c); c->f[12].u = c->f[20].u; rt_call(c, t); }
L_002CC19C:;
SET64(3, (s32)rd32(c, (RW(19) + 232)));
L_002CC1A0:;
{ int t = RD(3) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002CC220; }
SET64(3, (s32)rd32(c, (RW(19) + 32)));
L_002CC1AC:;
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(3) + 0));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002CC1D4; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(4, (s32)c->f[0].u);
SET32(3, RW(0) + 848); goto L_002CC1EC;
L_002CC1D4:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[0].u);
SET64(4, RD(4) | RD(2));
SET32(3, RW(0) + 848);
L_002CC1EC:;
SET64(2, (s32)rd32(c, (RW(19) + 224)));
mul_s(c, 0, 3, RSW(4), RSW(3));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2cc208);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 232)));
SET32(17, RW(17) + 1);
SET64(3, RD(17) < RD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 32))); { POLL(); goto L_002CC1AC; } }
L_002CC220:;
SET64(4, (s32)rd32(c, (RW(19) + 228)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_002CC310; }
SET64(5, rd8(c, (RW(19) + 0)));
SET64(3, RD(16) & 0xff);
if (RD(3) == RD(5)) { SET64(3, (s32)rd32(c, (RW(19) + 228))); goto L_002CC288; }
if (RD(5) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002CC278; }
SET64(31, 0x2cc24c);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 228))); goto L_002CC260; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(19) + 228)));
L_002CC260:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2cc270);  rt_call(c, t); }
 goto L_002CC284;
L_002CC278:;
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x2cc284);  rt_call(c, t); }
L_002CC284:;
SET64(3, (s32)rd32(c, (RW(19) + 228)));
L_002CC288:;
{ int t = RD(3) == RD(0);  if (t) goto L_002CC30C; }
SET64(2, (s32)rd32(c, (RW(19) + 28)));
c->f[21].u = rd32(c, (RW(2) + 32));
c->f[20].u = rd32(c, (RW(2) + 416));
SET64(31, 0x2cc2a4); SET64(4, (s32)rd32(c, (RW(19) + 224))); F_00144A50(c);
SET64(4, (s64)(s32)0x40000000);
SET64(3, (s32)rd32(c, (RW(19) + 224)));
c->f[2].u = RW(4);
SET64(2, (s64)(s32)0x3f800000);
c->f[0].f = fpu(F(2) * F(0));
c->f[3].f = fpu_div(F(0), F(2));
c->f[1].f = fpu(F(20) - F(21));
c->f[2].f = fpu_div(F(1), F(2));
c->f[4].u = rd32(c, (RW(3) + 48));
c->f[5].u = rd32(c, (RW(3) + 56));
c->f[0].u = RW(2);
c->f[3].f = fpu(F(4) + F(3));
c->f[2].f = fpu(F(3) - F(2));
c->f[1].u = rd32(c, (RW(3) + 464));
c->f[6].u = rd32(c, (RW(3) + 52));
c->f[0].f = fpu(F(5) - F(0));
wr32(c, (RW(29) + 108), RW(2));
c->f[1].f = fpu(F(1) + F(2));
wr32(c, (RW(29) + 100), c->f[6].u);
wr32(c, (RW(29) + 96), c->f[1].u);
wr32(c, (RW(29) + 104), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(19) + 228)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2cc30c); SET32(5, RW(29) + 96); rt_call(c, t); }
L_002CC30C:;
SET64(31, rd64(c, (RW(29) + 80)));
L_002CC310:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002CC330(Ctx *c) { /* func_002CC330 */
ENTER(0x2cc330);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2cc340);  F_002CD0E0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002CC350(Ctx *c) { /* func_002CC350 */
ENTER(0x2cc350);
SET32(29, RW(29) + -304);
SET32(3, RW(0) + -1);
wr64(c, (RW(29) + 160), RD(31));
wr128(c, (RW(29) + 144) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[23]);
SET64(30, RD(8) + RD(0));
wr128(c, (RW(29) + 112) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
SET64(22, RD(10) + RD(0));
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
wr8(c, (RW(4) + 236), (u8)RW(11));
SET64(2, (s32)rd32(c, (RW(6) + 0)));
{ int t = RD(2) == RD(3); SET64(16, RD(7) + RD(0)); if (t) goto L_002CC3D0; }
SET64(4, RD(19) + RD(0));
L_002CC3B4:;
SET32(4, RW(4) + 4);
SET32(18, RW(18) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_002CC3B4; } }
L_002CC3D0:;
SET64(8, RD(9) + RD(0));
SET64(9, rd8(c, (RW(29) + 304)));
SET64(4, RD(20) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(31, 0x2cc3f0); wr32(c, (RW(20) + 232), RW(18)); F_002CD1F0(c);
SET32(2, RW(0) + 848);
SET64(23, RD(0) + RD(0));
mul_s(c, 0, 2, RSW(18), RSW(2));
SET64(31, 0x2cc404); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_002CC434; }
SET64(5, (s64)(s32)0x140000);
SET64(6, (s64)(s32)0x140000);
SET32(23, RW(0) + 1);
SET64(4, RD(21) + RD(0));
SET32(5, RW(5) + 12928);
SET32(6, RW(6) + 12592);
SET32(7, RW(0) + 848);
SET64(31, 0x2cc430); SET64(8, RD(18) + RD(0)); F_00102580(c);
SET64(21, RD(2) + RD(0));
L_002CC434:;
SET64(3, RD(17) & 0xffff);
wr32(c, (RW(20) + 224), RW(21));
SET32(2, RW(3) << 5);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(2) + RW(3));
SET64(17, (s32)rd32(c, (RW(30) + 0)));
SET32(3, RW(2) << 4);
SET32(4, RW(29) + 192);
SET64(2, (s64)(s32)0x457a0000);
SET64(16, rd16(c, (RW(28) + -30348)));
wr32(c, (RW(29) + 280), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 272), RW(0));
wr32(c, (RW(29) + 284), RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 140)));
SET32(2, RW(2) + RW(3));
c->f[0].u = rd32(c, (RW(2) + 36));
SET64(31, 0x2cc480); wr32(c, (RW(29) + 276), c->f[0].u); F_00157630(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 212), RW(0));
SET32(2, RW(2) + -26960);
wr32(c, (RW(29) + 216), RW(0));
wr32(c, (RW(29) + 208), RW(2));
wr32(c, (RW(29) + 220), RW(0));
wr16(c, (RW(29) + 224), (u16)RW(0));
wr16(c, (RW(29) + 226), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2cc4ac); SET32(4, RW(29) + 192); F_001569F0(c);
SET64(5, (s32)rd32(c, (RW(29) + 212)));
SET64(2, RD(16) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 216)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 192);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -26960);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(21, RW(3) + RW(5));
SET64(31, 0x2cc4dc); wr32(c, (RW(29) + 208), RW(2)); F_00156AD0(c);
SET32(4, RW(29) + 192);
SET64(31, 0x2cc4e8); SET64(5, RD(0) + RD(0)); F_001575C0(c);
{ int t = RSD(18) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_002CC618; }
SET64(16, RD(0) + RD(0));
L_002CC4F4:;
SET64(2, (s64)(s32)0x43800000);
wr32(c, (RW(29) + 256), RW(0));
wr32(c, (RW(29) + 248), RW(2));
SET32(5, RW(29) + 256);
SET64(2, (s64)(s32)0x42800000);
wr32(c, (RW(29) + 260), RW(0));
wr32(c, (RW(29) + 252), RW(2));
SET32(6, RW(29) + 240);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 264), RW(0));
wr32(c, (RW(29) + 268), RW(2));
SET64(7, RD(21) + RD(0));
rd128(c, (RW(29) + 272) & ~15u, &c->r[2]);
SET64(8, RD(0) + RD(0));
wr32(c, (RW(29) + 240), RW(0));
wr32(c, (RW(29) + 244), RW(0));
wr128(c, (RW(29) + 256) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET64(31, 0x2cc544); SET32(4, RW(2) + RW(16)); F_00144D20(c);
SET64(2, (s32)rd32(c, (RW(20) + 224)));
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(16));
SET64(31, 0x2cc558); SET32(4, RW(2) + 208); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET32(2, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cc570); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET32(6, RW(0) + 1);
SET64(5, rd16(c, (RW(19) + 0)));
SET64(31, 0x2cc584); SET32(4, RW(2) + RW(16)); F_00144A60(c);
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET64(31, 0x2cc590); SET32(4, RW(2) + RW(16)); F_00143100(c);
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2cc5a8);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET64(31, 0x2cc5b4); SET32(4, RW(2) + RW(16)); F_00144A50(c);
SET64(3, (s64)(s32)0x40000000);
SET64(2, (s64)(s32)0x41000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->f[1].f = fpu(F(0) + F(1));
c->f[0].u = rd32(c, (RW(20) + 12));
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002CC5E8; }
wr32(c, (RW(20) + 12), c->f[1].u);
L_002CC5E8:;
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2cc600);  rt_call(c, t); }
SET32(17, RW(17) + 1);
SET32(16, RW(16) + 848);
SET64(3, RSD(17) < RSD(18));
{ int t = RD(3) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_002CC4F4; } }
L_002CC618:;
SET64(5, (s32)rd32(c, (RW(20) + 224)));
SET64(3, (s64)(s32)0x41800000);
SET64(6, (s32)rd32(c, (RW(20) + 28)));
c->f[2].u = RW(3);
SET32(4, RW(0) + 1);
c->f[1].u = rd32(c, (RW(5) + 52));
c->f[0].u = rd32(c, (RW(5) + 456));
c->f[0].f = fpu(F(1) + F(0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(6) + 36), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(20) + 224)));
c->f[1].u = rd32(c, (RW(3) + 52));
c->f[0].u = rd32(c, (RW(3) + 456));
c->f[0].f = fpu(F(1) + F(0));
c->f[0].f = fpu(F(2) + F(0));
wr32(c, (RW(6) + 420), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(20) + 32)));
{ int t = RD(22) == RD(0); wr8(c, (RW(3) + 12), (u8)RW(4)); if (t) goto L_002CC804; }
SET64(31, 0x2cc66c); SET32(4, RW(0) + 196); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CC6AC; }
SET64(31, 0x2cc67c); SET64(4, RD(16) + RD(0)); F_002265B0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -30064);
SET32(2, RW(2) + -30056);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -30044);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -29984);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002CC6AC:;
SET32(3, RW(29) + 288);
wr32(c, (RW(20) + 228), RW(16));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 8); if (t) goto L_002CC6D8; }
L_002CC6BC:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CC6BC; } }
L_002CC6D8:;
SET64(17, (s32)rd32(c, (RW(30) + 0)));
SET64(16, rd16(c, (RW(28) + -30348)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2cc6ec); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2cc6f8); SET64(5, RD(16) + RD(0)); F_002C6520(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2cc704); SET64(5, RD(16) + RD(0)); F_002C6480(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cc710); SET32(4, RW(29) + 300); F_002C6470(c);
SET32(4, RW(29) + 300);
SET64(31, 0x2cc71c); SET32(5, RW(0) + 56); F_002C6450(c);
wr32(c, (RW(29) + 288), RW(2));
SET32(6, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(20) + 228)));
SET32(5, RW(29) + 288);
SET64(7, RD(0) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(9, RD(6) + RD(0));
SET64(31, 0x2cc740); SET64(10, RD(0) + RD(0)); F_00224180(c);
SET64(2, (s32)rd32(c, (RW(20) + 228)));
SET64(31, 0x2cc74c); wr8(c, (RW(2) + 167), (u8)RW(0)); F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(20) + 228))); goto L_002CC760; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(20) + 228)));
L_002CC760:;
SET64(31, 0x2cc768);  F_002284F0(c);
SET64(4, (s32)rd32(c, (RW(20) + 228)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x2cc77c);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 228)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 160))); goto L_002CC808; }
SET64(2, (s32)rd32(c, (RW(20) + 28)));
c->f[21].u = rd32(c, (RW(2) + 32));
c->f[20].u = rd32(c, (RW(2) + 416));
SET64(31, 0x2cc79c); SET64(4, (s32)rd32(c, (RW(20) + 224))); F_00144A50(c);
SET64(4, (s64)(s32)0x40000000);
SET64(3, (s32)rd32(c, (RW(20) + 224)));
c->f[2].u = RW(4);
SET64(2, (s64)(s32)0x3f800000);
c->f[0].f = fpu(F(2) * F(0));
c->f[3].f = fpu_div(F(0), F(2));
c->f[1].f = fpu(F(20) - F(21));
c->f[2].f = fpu_div(F(1), F(2));
c->f[4].u = rd32(c, (RW(3) + 48));
c->f[5].u = rd32(c, (RW(3) + 56));
c->f[0].u = RW(2);
c->f[3].f = fpu(F(4) + F(3));
c->f[2].f = fpu(F(3) - F(2));
c->f[1].u = rd32(c, (RW(3) + 464));
c->f[6].u = rd32(c, (RW(3) + 52));
c->f[0].f = fpu(F(5) - F(0));
wr32(c, (RW(29) + 188), RW(2));
c->f[1].f = fpu(F(1) + F(2));
wr32(c, (RW(29) + 180), c->f[6].u);
wr32(c, (RW(29) + 176), c->f[1].u);
wr32(c, (RW(29) + 184), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(20) + 228)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2cc804); SET32(5, RW(29) + 176); rt_call(c, t); }
L_002CC804:;
SET64(31, rd64(c, (RW(29) + 160)));
L_002CC808:;
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
SET32(29, RW(29) + 304); return;
}

void F_002CC840(Ctx *c) { /* func_002CC840 */
ENTER(0x2cc840);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(31, 0x2cc864); wr32(c, (RW(29) + 0), c->f[20].u); F_002CD740(c);
SET64(3, (s32)rd32(c, (RW(18) + 232)));
{ int t = RD(3) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002CC8B0; }
SET64(16, RD(0) + RD(0));
L_002CC874:;
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(2, RW(2) + RW(16));
c->f[0].u = rd32(c, (RW(2) + 52));
wr32(c, (RW(2) + 52), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(2, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cc89c); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 232)));
SET32(17, RW(17) + 1);
SET64(3, RD(17) < RD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 848); if (t) { POLL(); goto L_002CC874; } }
L_002CC8B0:;
SET64(3, (s32)rd32(c, (RW(18) + 228)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002CC93C; }
SET64(2, (s32)rd32(c, (RW(18) + 28)));
c->f[21].u = rd32(c, (RW(2) + 32));
c->f[20].u = rd32(c, (RW(2) + 416));
SET64(31, 0x2cc8d0); SET64(4, (s32)rd32(c, (RW(18) + 224))); F_00144A50(c);
SET64(4, (s64)(s32)0x40000000);
SET64(3, (s32)rd32(c, (RW(18) + 224)));
c->f[2].u = RW(4);
SET64(2, (s64)(s32)0x3f800000);
c->f[0].f = fpu(F(2) * F(0));
c->f[3].f = fpu_div(F(0), F(2));
c->f[1].f = fpu(F(20) - F(21));
c->f[2].f = fpu_div(F(1), F(2));
c->f[4].u = rd32(c, (RW(3) + 48));
c->f[5].u = rd32(c, (RW(3) + 56));
c->f[0].u = RW(2);
c->f[3].f = fpu(F(4) + F(3));
c->f[2].f = fpu(F(3) - F(2));
c->f[1].u = rd32(c, (RW(3) + 464));
c->f[6].u = rd32(c, (RW(3) + 52));
c->f[0].f = fpu(F(5) - F(0));
wr32(c, (RW(29) + 92), RW(2));
c->f[1].f = fpu(F(1) + F(2));
wr32(c, (RW(29) + 84), c->f[6].u);
wr32(c, (RW(29) + 80), c->f[1].u);
wr32(c, (RW(29) + 88), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 228)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2cc938); SET32(5, RW(29) + 80); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
L_002CC93C:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002CC960(Ctx *c) { /* func_002CC960 */
ENTER(0x2cc960);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(4) + 232)));
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002CC9B8; }
SET64(18, RD(0) + RD(0));
L_002CC98C:;
SET64(2, (s32)rd32(c, (RW(17) + 224)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2cc9a4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 232)));
SET32(16, RW(16) + 1);
SET64(2, RD(16) < RD(2));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 848); if (t) { POLL(); goto L_002CC98C; } }
L_002CC9B8:;
SET64(2, (s32)rd32(c, (RW(17) + 32)));
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(16, (s32)c->f[0].u);
SET64(31, 0x2cc9d0);  F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET32(3, RW(0) + 848); goto L_002CC9E4; }
SET32(5, RW(5) + 672);
SET32(3, RW(0) + 848);
L_002CC9E4:;
SET64(2, (s32)rd32(c, (RW(17) + 224)));
mul_s(c, 0, 16, RSW(16), RSW(3));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2cca00);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 224)));
SET64(2, (s64)(s32)0x40000000);
c->f[2].u = RW(2);
SET64(2, rd8(c, (RW(17) + 236)));
SET32(4, RW(3) + RW(16));
c->f[1].u = rd32(c, (RW(4) + 464));
c->f[0].u = rd32(c, (RW(4) + 468));
c->f[0].f = fpu(F(1) + F(0));
{ int t = RD(2) == RD(0); c->f[20].f = fpu(F(2) * F(0)); if (t) goto L_002CCA60; }
SET64(31, 0x2cca30);  F_00144A50(c);
SET64(3, (s64)(s32)0x40000000);
SET64(2, (s32)rd32(c, (RW(17) + 224)));
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) * F(0));
SET32(2, RW(2) + RW(16));
c->f[0].f = fpu(F(20) + F(0));
c->f[0].f = fpu_div(F(0), F(1));
c->f[1].u = rd32(c, (RW(17) + 8));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(2) + 48), c->f[0].u); goto L_002CCA78;
L_002CCA60:;
c->f[1].u = rd32(c, (RW(17) + 12));
c->f[0].u = rd32(c, (RW(17) + 8));
c->f[1].f = fpu(F(20) + F(1));
c->f[1].f = fpu_div(F(1), F(2));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(4) + 48), c->f[0].u);
L_002CCA78:;
SET64(2, (s32)rd32(c, (RW(17) + 224)));
SET32(2, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cca90); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002CCAB0(Ctx *c) { /* func_002CCAB0 */
ENTER(0x2ccab0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ccadc);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 28)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ccaf0); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 232)));
{ int t = RD(3) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002CCB30; }
SET64(17, RD(0) + RD(0));
L_002CCB00:;
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2ccb18);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 232)));
SET32(18, RW(18) + 1);
SET64(3, RD(18) < RD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 848); if (t) { POLL(); goto L_002CCB00; } }
L_002CCB30:;
SET64(4, (s32)rd32(c, (RW(16) + 228)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002CCB50; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x2ccb4c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
L_002CCB50:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002CCB70(Ctx *c) { /* func_002CCB70 */
ENTER(0x2ccb70);
 return;
}

void F_002CCB80(Ctx *c) { /* func_002CCB80 */
ENTER(0x2ccb80);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + (s64)1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 232)));
{ int t = RD(2) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002CCBF0; }
SET64(16, RD(0) + RD(0));
L_002CCBB0:;
SET64(2, (s32)rd32(c, (RW(19) + 224)));
SET32(2, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2ccbc8); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 232))); goto L_002CCBDC; }
SET64(18, RD(0) + RD(0)); goto L_002CCBF0;
L_002CCBDC:;
SET32(17, RW(17) + 1);
SET64(2, RD(17) < RD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 848); if (t) { POLL(); goto L_002CCBB0; } }
L_002CCBF0:;
SET64(2, (s32)rd32(c, (RW(19) + 28)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2ccc08);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CCC3C; }
SET64(2, (s32)rd32(c, (RW(19) + 28)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2ccc28);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CCC38; }
SET64(2, RD(0) + (s64)1); goto L_002CCC3C;
L_002CCC38:;
SET64(2, RD(0) + RD(0));
L_002CCC3C:;
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CCC80; }
{ int t = RD(18) == RD(0);  if (t) goto L_002CCC7C; }
SET64(4, (s32)rd32(c, (RW(19) + 228)));
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_002CCC80; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2ccc68);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CCC7C; }
SET32(2, RW(0) + 1);
 goto L_002CCC80;
L_002CCC7C:;
SET64(2, RD(0) + RD(0));
L_002CCC80:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002CCCA0(Ctx *c) { /* func_002CCCA0 */
ENTER(0x2ccca0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2cccb8); SET64(4, (s32)rd32(c, (RW(4) + 32))); F_001004B0(c);
wr32(c, (RW(16) + 32), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET64(31, 0x2ccccc); SET32(5, RW(5) + -7552); F_001022C0(c);
wr32(c, (RW(16) + 28), RW(0));
SET64(5, (s64)(s32)0x140000);
SET64(4, (s32)rd32(c, (RW(16) + 224)));
SET64(31, 0x2ccce0); SET32(5, RW(5) + 12592); F_001022C0(c);
wr32(c, (RW(16) + 224), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 228)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 228), RW(0)); goto L_002CCD04; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ccd00); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 228), RW(0));
L_002CCD04:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CCD20(Ctx *c) { /* func_002CCD20 */
ENTER(0x2ccd20);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET64(5, (s64)(s32)0x1f0000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(3) + -14912);
wr32(c, (RW(4) + 208), RW(3));
SET64(6, (s64)(s32)0x1f0000);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(4) + 0), (u8)RW(0));
wr32(c, (RW(4) + 4), RW(2));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(2));
SET32(5, RW(5) + 6784);
wr32(c, (RW(4) + 20), RW(0));
SET32(6, RW(6) + 6704);
wr32(c, (RW(4) + 28), RW(0));
SET32(7, RW(0) + 80);
wr32(c, (RW(4) + 32), RW(0));
SET32(8, RW(0) + 2);
SET64(31, 0x2ccd78); SET32(4, RW(16) + 48); F_001023D0(c);
c->f[0].u = RW(0);
SET64(4, (s64)(s32)0x4e0000);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(16) + 24), RW(0));
SET32(4, RW(4) + -14976);
SET32(3, RW(0) + 1);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 12), c->f[0].u);
wr32(c, (RW(16) + 8), c->f[0].u);
wr32(c, (RW(16) + 208), RW(4));
wr32(c, (RW(16) + 224), RW(0));
wr32(c, (RW(16) + 228), RW(0));
wr32(c, (RW(16) + 232), RW(0));
wr8(c, (RW(16) + 236), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CCDC0(Ctx *c) { /* func_002CCDC0 */
ENTER(0x2ccdc0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(6) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(20) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(4) + 24)));
c->f[20].u = c->f[12].u;
SET64(16, RD(2) ^ RD(5));
SET64(16, RD(16) < (u64)(s64)1);
L_002CCE08:;
c->f[1].u = rd32(c, (RW(18) + 96));
c->f[0].u = rd32(c, (RW(28) + -31376));
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_002CCE20; }
wr32(c, (RW(18) + 96), RW(0));
L_002CCE20:;
SET64(2, (s32)rd32(c, (RW(20) + 28)));
c->f[0].u = rd32(c, (RW(18) + 64));
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 32), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 28)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cce48);  rt_call(c, t); }
{ int t = RD(16) == RD(0);  if (t) goto L_002CCE70; }
SET64(3, rd8(c, (RW(20) + 1)));
{ int t = RD(3) == RD(0);  if (t) goto L_002CCE70; }
SET64(2, (s64)(s32)0x520000);
c->f[12].u = rd32(c, (RW(2) + 14864));
SET64(31, 0x2cce6c); SET32(4, RW(18) + 48); F_001F1AB0(c);
L_002CCE70:;
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < (s64)2);
SET32(18, RW(18) + 80);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002CCE08; } }
SET64(4, rd8(c, (RW(20) + 0)));
SET64(3, RD(16) & 0xff);
{ int t = RD(4) == RD(3);  if (t) goto L_002CCF20; }
wr8(c, (RW(20) + 0), (u8)RW(16));
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
SET64(17, RD(20) + RD(0));
L_002CCEA4:;
{ int t = RD(16) == RD(0);  if (t) goto L_002CCED8; }
SET64(2, rd8(c, (RW(20) + 1)));
{ int t = RD(2) == RD(0);  if (t) goto L_002CCED8; }
SET64(2, (s32)rd32(c, (RW(20) + 28)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cced0);  rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0)); goto L_002CCF08;
L_002CCED8:;
SET64(2, (s32)rd32(c, (RW(20) + 28)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ccef0);  rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
SET32(5, RW(17) + 64);
SET64(2, (s32)rd32(c, (RW(20) + 28)));
SET64(31, 0x2ccf04); SET32(4, RW(2) + RW(18)); F_0014E770(c);
L_002CCF08:;
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < (s64)2);
SET32(18, RW(18) + 384);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 80); if (t) { POLL(); goto L_002CCEA4; } }
L_002CCF20:;
SET64(3, (s32)rd32(c, (RW(20) + 20)));
SET32(3, RW(3) + 1);
{ int t = RD(16) == RD(0); wr32(c, (RW(20) + 20), RW(3)); if (t) goto L_002CD044; }
SET64(4, RD(21) & 0xffff);
SET64(3, RD(4) & 0x20);
{ int t = RD(3) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002CCF58; }
SET64(25, (s32)rd32(c, (RW(20) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2ccf50); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(5, RD(0) + (s64)1); goto L_002CCF78;
L_002CCF58:;
SET64(3, RD(4) & 0x80);
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(20) + 32))); goto L_002CCF7C; }
SET64(25, (s32)rd32(c, (RW(20) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2ccf74); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(5, RD(0) + (s64)1);
L_002CCF78:;
SET64(3, (s32)rd32(c, (RW(20) + 32)));
L_002CCF7C:;
c->f[1].u = rd32(c, (RW(3) + 8));
c->f[0].u = rd32(c, (RW(3) + 4));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
{ int t = RD(5) == RD(0);  if (t) goto L_002CD044; }
{ int t = RD(3) == RD(0);  if (t) goto L_002CD044; }
SET64(3, (s32)rd32(c, (RW(20) + 20)));
SET64(1, RD(3) < (u64)(s64)3);
{ int t = RD(1) != RD(0);  if (t) goto L_002CD044; }
wr32(c, (RW(20) + 20), RW(0));
SET64(5, (s32)rd32(c, (RW(20) + 32)));
SET64(3, rd8(c, (RW(5) + 12)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_002CCFD0; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002CCFE8;
L_002CCFD0:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002CCFE8:;
c->f[0].u = RW(0);
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002CD020; }
c->f[1].u = rd32(c, (RW(5) + 0));
c->f[0].u = rd32(c, (RW(5) + 8));
c->fcc = F(1) == F(0);
{ int t = c->fcc;  if (t) goto L_002CD044; }
c->f[0].u = rd32(c, (RW(5) + 4));
c->fcc = F(1) == F(0);
{ int t = c->fcc;  if (t) goto L_002CD044; }
L_002CD020:;
SET64(31, 0x2cd028);  F_00139590(c);
SET64(31, 0x2cd030);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 127);
SET64(31, 0x2cd044); SET32(7, RW(0) + 64); F_001B5FF0(c);
L_002CD044:;
c->f[0].u = RW(0);
c->fcc = F(20) <= F(0);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 112))); goto L_002CD0BC; }
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->fcc = F(20) < F(0);
{ int t = !c->fcc;  if (t) goto L_002CD0B8; }
SET64(2, (s32)rd32(c, (RW(20) + 28)));
c->f[12].u = c->f[20].u;
SET64(31, 0x2cd080); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(4, (s32)rd32(c, (RW(20) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cd094);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 28)));
c->f[12].u = c->f[20].u;
SET64(31, 0x2cd0a4); SET32(4, RW(2) + 576); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(20) + 28)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cd0b8); SET32(4, RW(2) + 384); rt_call(c, t); }
L_002CD0B8:;
SET64(31, rd64(c, (RW(29) + 112)));
L_002CD0BC:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_002CD0E0(Ctx *c) { /* func_002CD0E0 */
ENTER(0x2cd0e0);
SET32(29, RW(29) + -112);
SET32(2, RW(0) + 8);
wr64(c, (RW(29) + 80), RD(31));
SET32(3, RW(29) + 104);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[21].u = c->f[12].u;
{ int t = RD(3) == RD(0); c->f[20].u = c->f[13].u; if (t) goto L_002CD134; }
L_002CD118:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CD118; } }
L_002CD134:;
c->f[2].u = rd32(c, (RW(28) + -30016));
SET64(2, (s32)rd32(c, (RW(19) + 28)));
SET64(18, RD(0) + RD(0));
SET32(17, RW(29) + 104);
SET64(16, RD(0) + RD(0));
c->f[0].f = fpu(F(2) + F(21));
c->f[1].u = rd32(c, (RW(2) + 164));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(29) + 104), c->f[0].u);
c->f[0].u = c->f[2].u ^ 0x80000000u;
c->f[0].f = fpu(F(0) + F(21));
c->f[0].f = fpu(F(20) + F(0));
wr32(c, (RW(29) + 108), c->f[0].u);
L_002CD168:;
SET64(2, (s32)rd32(c, (RW(19) + 28)));
c->f[0].u = rd32(c, (RW(17) + 0));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 32), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 28)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cd190);  rt_call(c, t); }
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 4);
SET64(2, RSD(18) < (s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_002CD168; } }
SET64(31, 0x2cd1ac); SET64(4, RD(19) + RD(0)); F_002CD4D0(c);
SET64(3, (s64)(s32)0x40000000);
c->f[0].u = RW(3);
c->f[0].f = fpu_div(F(20), F(0));
c->f[0].f = fpu(F(21) + F(0));
wr32(c, (RW(19) + 8), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002CD1F0(Ctx *c) { /* func_002CD1F0 */
ENTER(0x2cd1f0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(8) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(9) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(6) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
wr8(c, (RW(4) + 1), (u8)RW(18));
SET64(31, 0x2cd238); SET32(4, RW(0) + 16); F_00100670(c);
if (RD(2) == RD(0)) { SET32(3, RW(16) + -1); goto L_002CD258; }
wr32(c, (RW(2) + 4), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 8), RW(3));
wr32(c, (RW(2) + 0), RW(0));
wr8(c, (RW(2) + 12), (u8)RW(0));
SET32(3, RW(16) + -1);
L_002CD258:;
wr32(c, (RW(21) + 32), RW(2));
c->f[0].u = RW(3);
wr32(c, (RW(2) + 4), RW(0));
c->f[0].f = (f32)(s32)c->f[0].u;
SET32(4, RW(0) + 784);
wr32(c, (RW(2) + 8), c->f[0].u);
SET64(31, 0x2cd278); wr32(c, (RW(2) + 0), RW(0)); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CD2A4; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -7168);
SET32(6, RW(6) + -7552);
SET32(7, RW(0) + 384);
SET64(31, 0x2cd2a0); SET32(8, RW(0) + 2); F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002CD2A4:;
wr32(c, (RW(21) + 28), RW(16));
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_002CD2B0:;
SET64(2, (s32)rd32(c, (RW(21) + 28)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2cd2c8);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 28)));
SET32(3, RW(3) + 64);
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 160), RW(3));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET32(4, RW(2) + 64);
SET64(2, rd16(c, (RW(2) + 116)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002CD2FC; }
c->f[0].u = RW(2);
c->f[21].f = (f32)(s32)c->f[0].u; goto L_002CD314;
L_002CD2FC:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[21].f = (f32)(s32)c->f[0].u;
c->f[21].f = fpu(F(21) + F(21));
L_002CD314:;
SET64(2, rd16(c, (RW(4) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002CD32C; }
c->f[0].u = RW(2);
c->f[20].f = (f32)(s32)c->f[0].u; goto L_002CD344;
L_002CD32C:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[20].f = (f32)(s32)c->f[0].u;
c->f[20].f = fpu(F(20) + F(20));
L_002CD344:;
SET64(2, (s64)(s32)0x458c0000);
SET64(3, (s32)rd32(c, (RW(21) + 28)));
SET64(2, RD(2) | 0xa000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(16));
wr32(c, (RW(2) + 32), RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 28)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 36), RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 28)));
SET64(31, 0x2cd374); SET32(4, RW(2) + RW(16)); F_0014E7A0(c);
SET64(2, (s32)rd32(c, (RW(21) + 28)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 164), c->f[21].u);
SET64(2, (s32)rd32(c, (RW(21) + 28)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 168), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(21) + 28)));
{ int t = RD(17) != RD(0); SET32(3, RW(2) + RW(16)); if (t) goto L_002CD3A8; }
SET64(2, (s64)(s32)0x40400000);
c->f[0].u = RW(2);
c->f[1].u = c->f[0].u; goto L_002CD3B8;
L_002CD3A8:;
SET64(2, (s64)(s32)0x40400000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(21) - F(0));
L_002CD3B8:;
SET32(2, RW(0) + 1);
wr32(c, (RW(3) + 172), c->f[1].u);
SET64(3, (s32)rd32(c, (RW(21) + 28)));
SET32(3, RW(3) + RW(16));
wr32(c, (RW(3) + 176), RW(0));
SET64(3, (s32)rd32(c, (RW(21) + 28)));
{ int t = RD(17) != RD(2); SET32(3, RW(3) + RW(16)); if (t) goto L_002CD3E0; }
wr32(c, (RW(3) + 180), c->f[0].u); goto L_002CD3E8;
L_002CD3E0:;
c->f[0].f = fpu(F(21) - F(0));
wr32(c, (RW(3) + 180), c->f[0].u);
L_002CD3E8:;
SET64(2, (s32)rd32(c, (RW(21) + 28)));
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 184), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(21) + 28)));
SET32(2, RW(2) + RW(16));
SET64(31, 0x2cd408); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(21) + 28)));
SET64(31, 0x2cd414); SET32(4, RW(2) + RW(16)); F_0014E900(c);
SET64(2, (s32)rd32(c, (RW(21) + 28)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cd42c);  rt_call(c, t); }
{ int t = RD(18) == RD(0);  if (t) goto L_002CD458; }
SET64(2, (s32)rd32(c, (RW(21) + 28)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cd44c);  rt_call(c, t); }
 goto L_002CD470;
L_002CD458:;
SET64(2, (s32)rd32(c, (RW(21) + 28)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cd470);  rt_call(c, t); }
L_002CD470:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_002CD2B0; } }
SET32(3, RW(0) + 1);
SET32(2, RW(0) + 3);
wr8(c, (RW(21) + 0), (u8)RW(3));
SET64(4, RD(21) + RD(0));
wr16(c, (RW(21) + 50), (u16)RW(2));
SET64(31, 0x2cd49c); wr16(c, (RW(21) + 130), (u16)RW(2)); F_002CD4D0(c);
wr32(c, (RW(21) + 24), RW(20));
SET64(31, rd64(c, (RW(29) + 112)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_002CD4D0(Ctx *c) { /* func_002CD4D0 */
ENTER(0x2cd4d0);
SET32(29, RW(29) + -176);
SET32(2, RW(0) + 8);
wr64(c, (RW(29) + 96), RD(31));
SET32(3, RW(29) + 168);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 0), c->f[20].u); if (t) goto L_002CD520; }
L_002CD504:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CD504; } }
L_002CD520:;
c->f[0].u = rd32(c, (RW(28) + -31372));
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
SET32(17, RW(29) + 168);
SET64(16, RD(20) + RD(0));
wr32(c, (RW(29) + 172), c->f[0].u);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 168), c->f[0].u);
L_002CD540:;
SET64(2, (s32)rd32(c, (RW(20) + 28)));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
c->f[3].u = rd32(c, (RW(17) + 0));
wr32(c, (RW(29) + 148), RW(0));
SET32(4, RW(29) + 112);
SET32(2, RW(2) + RW(18));
wr32(c, (RW(29) + 152), RW(0));
rd128(c, (RW(2) + 32) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 156), RW(3));
wr32(c, (RW(29) + 128), RW(0));
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 144));
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 136), RW(0));
wr32(c, (RW(29) + 140), RW(3));
c->f[3].f = fpu(F(3) + F(0));
wr128(c, (RW(29) + 128) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 128));
c->f[1].u = rd32(c, (RW(29) + 132));
c->f[2].u = rd32(c, (RW(29) + 136));
wr32(c, (RW(29) + 144), c->f[3].u);
wr32(c, (RW(16) + 64), c->f[0].u);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr32(c, (RW(16) + 68), c->f[1].u);
wr32(c, (RW(16) + 72), c->f[2].u);
wr32(c, (RW(29) + 124), RW(3));
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 116), RW(0));
wr32(c, (RW(29) + 120), RW(0));
SET64(31, 0x2cd5c0); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); F_002CD730(c);
c->f[21].u = c->f[0].u;
SET64(31, 0x2cd5cc); SET32(4, RW(29) + 112); F_002CD720(c);
c->f[20].u = c->f[0].u;
SET64(31, 0x2cd5d8); SET32(4, RW(29) + 112); F_002CD710(c);
c->f[15].u = rd32(c, (RW(28) + -31376));
SET32(4, RW(16) + 48);
c->f[12].u = c->f[21].u;
c->f[13].u = c->f[20].u;
SET64(31, 0x2cd5f0); c->f[14].u = c->f[0].u; F_002CD640(c);
SET32(19, RW(19) + 1);
wr32(c, (RW(16) + 96), RW(0));
SET64(3, RSD(19) < (s64)2);
SET32(18, RW(18) + 384);
SET32(17, RW(17) + 4);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 80); if (t) { POLL(); goto L_002CD540; } }
SET64(31, rd64(c, (RW(29) + 96)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void F_002CD640(Ctx *c) { /* func_002CD640 */
ENTER(0x2cd640);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 12), c->f[23].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 8), c->f[22].u);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[23].u = c->f[12].u;
c->f[22].u = c->f[13].u;
c->f[21].u = c->f[14].u;
SET64(31, 0x2cd674); c->f[20].u = c->f[15].u; F_0022E980(c);
c->f[12].f = fpu(F(23) - F(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2cd684); SET64(5, RD(0) + RD(0)); F_0022E960(c);
SET64(31, 0x2cd68c); SET64(4, RD(16) + RD(0)); F_0022E950(c);
c->f[12].f = fpu(F(22) - F(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2cd69c); SET32(5, RW(0) + 1); F_0022E960(c);
SET64(31, 0x2cd6a4); SET64(4, RD(16) + RD(0)); F_0022E940(c);
c->f[12].f = fpu(F(21) - F(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2cd6b4); SET32(5, RW(0) + 2); F_0022E960(c);
c->f[12].u = c->f[23].u;
SET64(31, 0x2cd6c0); SET64(4, RD(16) + RD(0)); F_0022E930(c);
c->f[12].u = c->f[22].u;
SET64(31, 0x2cd6cc); SET64(4, RD(16) + RD(0)); F_0022E920(c);
c->f[12].u = c->f[21].u;
SET64(31, 0x2cd6d8); SET64(4, RD(16) + RD(0)); F_0022E910(c);
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 52), c->f[20].u);
SET64(3, rd8(c, (RW(16) + 0)));
SET64(3, RD(3) | 0x2);
wr8(c, (RW(16) + 0), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
c->f[23].u = rd32(c, (RW(29) + 12));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[22].u = rd32(c, (RW(29) + 8));
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void F_002CD710(Ctx *c) { /* func_002CD710 */
ENTER(0x2cd710);
c->f[0].u = rd32(c, (RW(4) + 8)); return;
}

void F_002CD720(Ctx *c) { /* func_002CD720 */
ENTER(0x2cd720);
c->f[0].u = rd32(c, (RW(4) + 4)); return;
}

void F_002CD730(Ctx *c) { /* func_002CD730 */
ENTER(0x2cd730);
c->f[0].u = rd32(c, (RW(4) + 0)); return;
}

void F_002CD740(Ctx *c) { /* func_002CD740 */
ENTER(0x2cd740);
SET32(29, RW(29) + -112);
SET32(2, RW(0) + 8);
wr64(c, (RW(29) + 80), RD(31));
SET32(3, RW(29) + 104);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(5, (s32)rd32(c, (RW(4) + 28)));
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[1].u = rd32(c, (RW(5) + 32));
c->f[1].f = fpu(F(12) - F(1));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(4) + 8), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(4) + 28)));
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[0].u = rd32(c, (RW(4) + 416));
{ int t = RD(3) == RD(0); c->f[20].u = c->f[13].u; if (t) goto L_002CD7B0; }
L_002CD794:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CD794; } }
L_002CD7B0:;
c->f[0].f = fpu(F(0) - F(1));
SET64(18, RD(0) + RD(0));
SET32(17, RW(29) + 104);
SET64(16, RD(0) + RD(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(29) + 104), c->f[12].u);
wr32(c, (RW(29) + 108), c->f[0].u);
L_002CD7CC:;
SET64(2, (s32)rd32(c, (RW(19) + 28)));
c->f[0].u = rd32(c, (RW(17) + 0));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 32), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 28)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 36), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(19) + 28)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cd800);  rt_call(c, t); }
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 4);
SET64(2, RSD(18) < (s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_002CD7CC; } }
SET64(31, 0x2cd81c); SET64(4, RD(19) + RD(0)); F_002CD4D0(c);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002CD840(Ctx *c) { /* func_002CD840 */
ENTER(0x2cd840);
SET32(29, RW(29) + -16);
c->f[0].u = RW(5);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s32)rd32(c, (RW(4) + 32)));
wr32(c, (RW(2) + 0), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cd868);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002CD880(Ctx *c) { /* func_002CD880 */
ENTER(0x2cd880);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 0), RD(31));
c->f[2].u = rd32(c, (RW(2) + 14864));
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = rd32(c, (RW(28) + -31360));
c->f[1].f = fpu(F(1) * F(2));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[3].u = rd32(c, (RW(28) + -31360)); if (t) goto L_002CD8B0; }
SET64(3, (s32)rd32(c, (RW(4) + 32))); goto L_002CD8C4;
L_002CD8B0:;
c->f[3].u = rd32(c, (RW(4) + 16));
c->fcc = F(1) <= F(3);
if (c->fcc) { c->f[3].u = c->f[1].u; goto L_002CD8C0; }
L_002CD8C0:;
SET64(3, (s32)rd32(c, (RW(4) + 32)));
L_002CD8C4:;
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].f = fpu(F(0) - F(3));
wr32(c, (RW(3) + 0), c->f[0].u);
c->f[1].u = rd32(c, (RW(3) + 4));
c->f[0].u = rd32(c, (RW(3) + 0));
c->fcc = F(0) < F(1);
if (!c->fcc) { SET64(25, (s32)rd32(c, (RW(4) + 208))); goto L_002CD8FC; }
SET64(2, rd8(c, (RW(3) + 12)));
{ int t = RD(2) == RD(0);  if (t) goto L_002CD8F4; }
c->f[1].u = rd32(c, (RW(3) + 8));
L_002CD8F4:;
wr32(c, (RW(3) + 0), c->f[1].u);
SET64(25, (s32)rd32(c, (RW(4) + 208)));
L_002CD8FC:;
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cd908);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002CD920(Ctx *c) { /* func_002CD920 */
ENTER(0x2cd920);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 0), RD(31));
c->f[2].u = rd32(c, (RW(2) + 14864));
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = rd32(c, (RW(28) + -31364));
c->f[1].f = fpu(F(1) * F(2));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[3].u = rd32(c, (RW(28) + -31364)); if (t) goto L_002CD950; }
SET64(3, (s32)rd32(c, (RW(4) + 32))); goto L_002CD964;
L_002CD950:;
c->f[3].u = rd32(c, (RW(4) + 16));
c->fcc = F(1) <= F(3);
if (c->fcc) { c->f[3].u = c->f[1].u; goto L_002CD960; }
L_002CD960:;
SET64(3, (s32)rd32(c, (RW(4) + 32)));
L_002CD964:;
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].f = fpu(F(0) + F(3));
wr32(c, (RW(3) + 0), c->f[0].u);
c->f[1].u = rd32(c, (RW(3) + 8));
c->f[0].u = rd32(c, (RW(3) + 0));
c->fcc = F(0) <= F(1);
if (c->fcc) { SET64(25, (s32)rd32(c, (RW(4) + 208))); goto L_002CD99C; }
SET64(2, rd8(c, (RW(3) + 12)));
{ int t = RD(2) == RD(0);  if (t) goto L_002CD994; }
c->f[1].u = rd32(c, (RW(3) + 4));
L_002CD994:;
wr32(c, (RW(3) + 0), c->f[1].u);
SET64(25, (s32)rd32(c, (RW(4) + 208)));
L_002CD99C:;
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cd9a8);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002CD9C0(Ctx *c) { /* func_002CD9C0 */
ENTER(0x2cd9c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cd9e4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 28)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cd9f8); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CDA10(Ctx *c) { /* func_002CDA10 */
ENTER(0x2cda10);
 return;
}

void F_002CDA20(Ctx *c) { /* func_002CDA20 */
ENTER(0x2cda20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 28)));
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cda48);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CDA7C; }
SET64(2, (s32)rd32(c, (RW(16) + 28)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cda68);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CDA78; }
SET32(2, RW(0) + 1); goto L_002CDA7C;
L_002CDA78:;
SET64(2, RD(0) + RD(0));
L_002CDA7C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CDA90(Ctx *c) { /* func_002CDA90 */
ENTER(0x2cda90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2cdaa8); SET64(4, (s32)rd32(c, (RW(4) + 32))); F_001004B0(c);
wr32(c, (RW(16) + 32), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET64(31, 0x2cdabc); SET32(5, RW(5) + -7552); F_001022C0(c);
wr32(c, (RW(16) + 28), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CDAD0(Ctx *c) { /* func_002CDAD0 */
ENTER(0x2cdad0);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 10312); return;
}

void F_002CDAE0(Ctx *c) { /* func_002CDAE0 */
ENTER(0x2cdae0);
 return;
}

void F_002CDAF0(Ctx *c) { /* func_002CDAF0 */
ENTER(0x2cdaf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CDB7C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15328);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cdb28);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002CDB68; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15088);
wr32(c, (RW(17) + 16), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002CDB5C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cdb58); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002CDB5C:;
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(0));
SET64(2, RD(16) << 48);
L_002CDB68:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002CDB80; }
SET64(31, 0x2cdb7c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002CDB7C:;
SET64(2, RD(17) + RD(0));
L_002CDB80:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CDBA0(Ctx *c) { /* func_002CDBA0 */
ENTER(0x2cdba0);
c->f[0].u = rd32(c, (RW(4) + 60)); return;
}

void F_002CDBB0(Ctx *c) { /* func_002CDBB0 */
ENTER(0x2cdbb0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CDC3C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15280);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cdbe8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002CDC28; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15088);
wr32(c, (RW(17) + 16), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002CDC1C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cdc18); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002CDC1C:;
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(0));
SET64(2, RD(16) << 48);
L_002CDC28:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002CDC40; }
SET64(31, 0x2cdc3c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002CDC3C:;
SET64(2, RD(17) + RD(0));
L_002CDC40:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CDC60(Ctx *c) { /* func_002CDC60 */
ENTER(0x2cdc60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CDCEC; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15232);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cdc98);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002CDCD8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15088);
wr32(c, (RW(17) + 16), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002CDCCC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cdcc8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002CDCCC:;
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(0));
SET64(2, RD(16) << 48);
L_002CDCD8:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002CDCF0; }
SET64(31, 0x2cdcec); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002CDCEC:;
SET64(2, RD(17) + RD(0));
L_002CDCF0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CDD10(Ctx *c) { /* func_002CDD10 */
ENTER(0x2cdd10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CDD9C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15184);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cdd48);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002CDD88; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15088);
wr32(c, (RW(17) + 16), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002CDD7C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cdd78); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002CDD7C:;
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(0));
SET64(2, RD(16) << 48);
L_002CDD88:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002CDDA0; }
SET64(31, 0x2cdd9c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002CDD9C:;
SET64(2, RD(17) + RD(0));
L_002CDDA0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CDDC0(Ctx *c) { /* func_002CDDC0 */
ENTER(0x2cddc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CDE4C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15136);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cddf8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002CDE38; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -15088);
wr32(c, (RW(17) + 16), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002CDE2C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cde28); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002CDE2C:;
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(0));
SET64(2, RD(16) << 48);
L_002CDE38:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002CDE50; }
SET64(31, 0x2cde4c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002CDE4C:;
SET64(2, RD(17) + RD(0));
L_002CDE50:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CDE70(Ctx *c) { /* func_002CDE70 */
ENTER(0x2cde70);
SET32(4, RW(4) + -4); { F_002C4ED0(c); return; }
}

void F_002CDE80(Ctx *c) { /* func_002CDE80 */
ENTER(0x2cde80);
SET32(4, RW(4) + -24); { F_002C4ED0(c); return; }
}

void F_002CDE90(Ctx *c) { /* func_002CDE90 */
ENTER(0x2cde90);
SET32(4, RW(4) + -4); { F_002C5000(c); return; }
}

void F_002CDEA0(Ctx *c) { /* func_002CDEA0 */
ENTER(0x2cdea0);
SET32(4, RW(4) + -24); { F_002C5000(c); return; }
}

void F_002CDEB0(Ctx *c) { /* func_002CDEB0 */
ENTER(0x2cdeb0);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 10328); return;
}

void F_002CDEC0(Ctx *c) { /* func_002CDEC0 */
ENTER(0x2cdec0);
 return;
}

void F_002CDED0(Ctx *c) { /* func_002CDED0 */
ENTER(0x2cded0);
SET32(29, RW(29) + -96);
SET64(3, (s64)(s32)0x520000);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(3) + 14864));
SET64(4, rd16(c, (RW(4) + 0)));
SET64(3, RD(0) | 0xff01);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 68))); goto L_002CE438; }
SET64(3, RD(0) | 0xff00);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 64))); goto L_002CE3E8; }
SET32(3, RW(0) + 258);
if (RD(4) == RD(3)) { c->f[1].u = rd32(c, (RW(18) + 80)); goto L_002CE38C; }
SET32(3, RW(0) + 257);
if (RD(4) == RD(3)) { c->f[2].u = rd32(c, (RW(18) + 80)); goto L_002CE2F4; }
SET32(3, RW(0) + 256);
if (RD(4) == RD(3)) { SET64(16, (s32)rd32(c, (RW(18) + 64))); goto L_002CE1D8; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 68))); goto L_002CE1B4; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(4, RW(0) + 204); goto L_002CE134; }
if (RD(4) == RD(0)) { SET32(4, RW(0) + 8); goto L_002CDF60; }
SET64(31, rd64(c, (RW(29) + 80))); goto L_002CE564;
L_002CDF60:;
SET64(31, 0x2cdf68);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CDF78; }
SET64(31, 0x2cdf78); SET64(4, RD(16) + RD(0)); F_003B7C20(c);
L_002CDF78:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2cdf84); wr32(c, (RW(18) + 92), RW(16)); F_003B7B50(c);
SET64(3, (s64)(s32)0x3da30000);
SET64(2, (s64)(s32)0x3f230000);
SET64(4, RD(3) | 0xd70a);
SET64(3, RD(2) | 0xd70a);
SET64(2, (s64)(s32)0x40990000);
SET64(2, RD(2) | 0x999a);
c->f[12].u = RW(4);
c->f[14].u = RW(2);
SET64(4, (s32)rd32(c, (RW(18) + 92)));
SET64(2, (s64)(s32)0x3f4c0000);
SET64(2, RD(2) | 0xcccd);
c->f[13].u = RW(3);
c->f[15].u = RW(2);
SET64(31, 0x2cdfc0); SET32(5, RW(0) + 4); F_003B79C0(c);
SET64(31, 0x2cdfc8); SET32(4, RW(0) + 1552); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002CE07C; }
SET32(6, RW(0) + 50);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 16384);
SET64(7, RD(6) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(31, 0x2cdfec); SET64(16, RD(17) + RD(0)); F_00161C20(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -20784);
SET32(3, RW(3) + -20768);
wr32(c, (RW(16) + 176), RW(2));
SET32(4, RW(16) + 1440);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 196), RW(3));
SET32(2, RW(2) + -20728);
SET64(31, 0x2ce018); wr32(c, (RW(16) + 1072), RW(2)); F_00149480(c);
SET64(31, 0x2ce020); SET32(4, RW(16) + 1456); F_00149480(c);
SET64(31, 0x2ce028); SET32(4, RW(16) + 1472); F_00149480(c);
SET64(31, 0x2ce030); SET32(4, RW(16) + 1488); F_00149480(c);
SET64(31, 0x2ce038); SET32(4, RW(16) + 1512); F_00178910(c);
wr32(c, (RW(16) + 1424), RW(0));
SET32(3, RW(0) + 16384);
wr8(c, (RW(16) + 1428), (u8)RW(0));
SET32(2, RW(0) + 50);
wr32(c, (RW(16) + 1524), RW(3));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1528), RW(2));
SET32(5, RW(0) + 1);
wr32(c, (RW(16) + 1532), RW(2));
SET64(31, 0x2ce064); wr32(c, (RW(16) + 1536), RW(2)); F_001624B0(c);
wr32(c, (RW(16) + 1504), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1540), RW(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2ce07c); wr32(c, (RW(16) + 1432), RW(0)); F_00162490(c);
L_002CE07C:;
wr32(c, (RW(18) + 64), RW(17));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 1544), RW(2));
SET64(31, 0x2ce090); SET32(4, RW(0) + 4); F_00100530(c);
wr32(c, (RW(17) + 1540), RW(2));
SET64(31, 0x2ce09c); SET32(4, RW(0) + 496); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CE0F4; }
SET32(5, RW(0) + 100);
SET64(4, RD(16) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x2ce0b8); SET64(7, RD(5) + RD(0)); F_002A36E0(c);
SET32(19, RW(16) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(19) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2ce0d0); wr32(c, (RW(16) + 240), RW(4)); F_002AB2A0(c);
SET64(31, 0x2ce0d8); SET32(4, RW(19) + 32); F_002A59A0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 240), RW(19));
SET32(2, RW(2) + -30800);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 144), RW(2));
SET64(31, 0x2ce0f4); SET32(5, RW(16) + 272); F_002A35D0(c);
L_002CE0F4:;
SET64(2, (s32)rd32(c, (RW(17) + 1540)));
wr32(c, (RW(2) + 0), RW(16));
SET64(4, (s32)rd32(c, (RW(17) + 560)));
SET64(2, (s32)rd32(c, (RW(17) + 1540)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2ce110); SET64(6, (s32)rd32(c, (RW(4) + 16))); F_002AB090(c);
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 228), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 64)));
wr32(c, (RW(28) + -30368), RW(2));
SET64(2, rd16(c, (RW(18) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(18) + 0), (u16)RW(2));
SET32(4, RW(0) + 204);
L_002CE134:;
SET64(31, 0x2ce13c);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CE14C; }
SET64(31, 0x2ce14c); SET64(4, RD(16) + RD(0)); F_0019B430(c);
L_002CE14C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2ce158); wr32(c, (RW(18) + 68), RW(16)); F_0019A320(c);
SET64(3, (s32)rd32(c, (RW(18) + 72)));
SET64(2, (s32)rd32(c, (RW(18) + 68)));
wr32(c, (RW(2) + 84), RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 64)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2ce178); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 68)));
wr32(c, (RW(3) + 60), RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 64)));
SET64(2, (s32)rd32(c, (RW(18) + 68)));
SET32(3, RW(3) + 784);
wr32(c, (RW(2) + 80), RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2ce1a4); SET32(5, RW(28) + -31312); rt_call(c, t); }
SET64(2, rd16(c, (RW(18) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(18) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 68)));
L_002CE1B4:;
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2ce1c4);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002CE560; }
SET32(3, RW(0) + 255);
wr16(c, (RW(18) + 0), (u16)RW(3)); goto L_002CE560;
L_002CE1D8:;
SET64(5, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2ce1ec); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2ce204); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
c->f[12].u = RW(0);
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x2ce21c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 68)));
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 76)));
SET64(2, rd16(c, (RW(5) + 8)));
SET32(4, RW(5) + 32);
SET32(3, RW(2) << 4);
SET32(2, RW(2) + -1);
{ int t = RSD(2) <= 0; SET32(6, RW(4) + RW(3)); if (t) goto L_002CE260; }
SET64(3, RD(4) + RD(0));
L_002CE244:;
wr16(c, (RW(3) + 14), (u16)RW(0));
SET32(7, RW(7) + 1);
SET64(2, rd16(c, (RW(5) + 8)));
SET32(2, RW(2) + -1);
SET64(2, RSD(7) < RSD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 16); if (t) { POLL(); goto L_002CE244; } }
L_002CE260:;
SET32(2, RW(7) << 4);
SET32(2, RW(2) + RW(4));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + 14), (u16)RW(3));
SET64(2, rd16(c, (RW(5) + 10)));
SET32(2, RW(2) + -1);
{ int t = RSD(2) <= 0; SET64(3, RD(0) + RD(0)); if (t) goto L_002CE2A0; }
SET64(4, RD(6) + RD(0));
L_002CE284:;
wr16(c, (RW(4) + 14), (u16)RW(0));
SET32(3, RW(3) + 1);
SET64(2, rd16(c, (RW(5) + 10)));
SET32(2, RW(2) + -1);
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 16); if (t) { POLL(); goto L_002CE284; } }
L_002CE2A0:;
SET32(2, RW(3) << 4);
SET32(2, RW(2) + RW(6));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + 14), (u16)RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 68)));
SET64(3, (s32)rd32(c, (RW(18) + 64)));
SET64(5, (s32)rd32(c, (RW(2) + 76)));
SET64(31, 0x2ce2c4); SET32(4, RW(3) + 784); F_0015C310(c);
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x3f330000);
wr32(c, (RW(18) + 80), RW(3));
SET64(2, RD(2) | 0x3333);
wr32(c, (RW(18) + 84), RW(2));
c->f[0].u = rd32(c, (RW(18) + 80));
SET64(2, (s32)rd32(c, (RW(18) + 64)));
wr32(c, (RW(2) + 896), c->f[0].u);
SET64(2, rd16(c, (RW(18) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(18) + 0), (u16)RW(2));
c->f[2].u = rd32(c, (RW(18) + 80));
L_002CE2F4:;
SET64(2, (s64)(s32)0x42f00000);
c->f[3].u = rd32(c, (RW(18) + 84));
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(2));
c->f[1].f = fpu(c->facc + F(20) * F(3));
c->f[0].u = RW(2);
c->fcc = F(1) < F(0);
{ int t = c->fcc; wr32(c, (RW(18) + 80), c->f[1].u); if (t) goto L_002CE368; }
SET64(2, rd8(c, (RW(18) + 88)));
if (RD(2) == RD(0)) { c->f[0].f = fpu(F(1) - F(0)); goto L_002CE364; }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x3fc00000);
c->f[13].u = RW(3);
c->f[0].f = fpu(F(1) + F(13));
wr32(c, (RW(18) + 80), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 76)));
c->f[12].u = RW(2);
SET64(31, 0x2ce354); SET32(5, RW(0) + 257); F_0030CCB0(c);
SET64(2, rd16(c, (RW(18) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(18) + 0), (u16)RW(2)); goto L_002CE368;
L_002CE364:;
wr32(c, (RW(18) + 80), c->f[0].u);
L_002CE368:;
c->f[0].u = rd32(c, (RW(18) + 80));
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET32(5, RW(28) + -31308);
wr32(c, (RW(2) + 896), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET64(31, 0x2ce384); SET32(4, RW(2) + 784); F_0015C070(c);
 goto L_002CE560;
L_002CE38C:;
SET32(5, RW(28) + -31304);
c->f[2].u = rd32(c, (RW(18) + 84));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(20) * F(2));
wr32(c, (RW(18) + 80), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 64)));
wr32(c, (RW(2) + 896), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET64(31, 0x2ce3bc); SET32(4, RW(2) + 784); F_0015C070(c);
c->f[1].u = rd32(c, (RW(18) + 80));
SET64(3, (s64)(s32)0x432c0000);
c->f[0].u = RW(3);
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_002CE560; }
SET64(3, rd16(c, (RW(18) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(18) + 0), (u16)RW(3)); goto L_002CE560;
L_002CE3E8:;
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2ce3f8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x2ce40c); SET64(5, RD(2) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 68)));
wr32(c, (RW(2) + 80), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 92)));
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(18) + 0))); goto L_002CE42C; }
SET64(31, 0x2ce428);  F_003B7900(c);
SET64(2, rd16(c, (RW(18) + 0)));
L_002CE42C:;
SET32(2, RW(2) + 1);
wr16(c, (RW(18) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 68)));
L_002CE438:;
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2ce448);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CE560; }
SET64(4, (s32)rd32(c, (RW(18) + 64)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2ce464);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CE560; }
SET64(4, (s32)rd32(c, (RW(18) + 92)));
{ int t = RD(4) == RD(0);  if (t) goto L_002CE488; }
SET64(31, 0x2ce480);  F_003B78A0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002CE560; }
L_002CE488:;
SET64(31, 0x2ce490);  F_00139590(c);
SET64(31, 0x2ce498); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_0022ABA0(c);
wr32(c, (RW(28) + -30368), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ce4b0);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2ce4c4);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 68), RW(0)); goto L_002CE4E4; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ce4e0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 68), RW(0));
L_002CE4E4:;
SET64(4, (s32)rd32(c, (RW(18) + 64)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 64), RW(0)); goto L_002CE504; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ce500); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 64), RW(0));
L_002CE504:;
SET64(4, (s32)rd32(c, (RW(18) + 92)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 92), RW(0)); goto L_002CE524; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ce520); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 92), RW(0));
L_002CE524:;
SET64(2, (s32)rd32(c, (RW(18) + 60)));
SET64(2, RD(2) & 0x1);
if (RD(2) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_002CE558; }
SET64(4, (s32)rd32(c, (RW(18) + 72)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 72), RW(0)); goto L_002CE554; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ce550); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 72), RW(0));
L_002CE554:;
SET64(4, RD(18) + RD(0));
L_002CE558:;
SET64(31, 0x2ce560);  F_00139AB0(c);
L_002CE560:;
SET64(31, rd64(c, (RW(29) + 80)));
L_002CE564:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002CE580(Ctx *c) { /* func_002CE580 */
ENTER(0x2ce580);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 60), RW(0));
wr32(c, (RW(4) + 76), RW(6));
{ int t = RD(5) != RD(0); wr32(c, (RW(4) + 72), RW(5)); if (t) goto L_002CE5E4; }
SET64(31, 0x2ce5ac); SET32(4, RW(0) + 32); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CE5BC; }
SET64(31, 0x2ce5bc); SET64(4, RD(16) + RD(0)); F_0014FE60(c);
L_002CE5BC:;
SET32(5, RW(0) + 512);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2ce5d8); wr32(c, (RW(17) + 72), RW(16)); F_0014FCE0(c);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
SET64(3, RD(3) | 0x1);
wr32(c, (RW(17) + 60), RW(3));
L_002CE5E4:;
wr8(c, (RW(17) + 88), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CE600(Ctx *c) { /* func_002CE600 */
ENTER(0x2ce600);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ce618); SET64(16, RD(4) + RD(0)); F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -14848);
SET32(2, RW(2) + -14840);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -14828);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 92), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 64), RW(0));
wr32(c, (RW(16) + 68), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CE660(Ctx *c) { /* func_002CE660 */
ENTER(0x2ce660);
SET32(4, RW(4) + -4); { F_001782B0(c); return; }
}

void F_002CE670(Ctx *c) { /* func_002CE670 */
ENTER(0x2ce670);
SET32(4, RW(4) + -24); { F_001782B0(c); return; }
}

void F_002CE680(Ctx *c) { /* func_002CE680 */
ENTER(0x2ce680);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CE7F4; }
SET64(2, (s64)(s32)0x4e0000);
SET64(8, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14768);
SET64(6, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(7, (s32)rd32(c, (RW(17) + 256)));
SET32(8, RW(8) + -14600);
SET32(6, RW(6) + -14696);
SET32(3, RW(3) + -14664);
SET32(2, RW(17) + 1248);
SET32(4, RW(17) + 1200);
wr32(c, (RW(7) + 16), RW(8));
SET32(5, RW(0) + -1);
wr32(c, (RW(17) + 432), RW(6));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x2ce6ec); wr32(c, (RW(3) + 20), RW(2)); F_002B0E10(c);
SET32(4, RW(17) + 1152);
SET64(31, 0x2ce6f8); SET32(5, RW(0) + -1); F_002B0E10(c);
SET32(4, RW(17) + 1056);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 1008); goto L_002CE71C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -26416);
SET64(31, 0x2ce718); wr32(c, (RW(17) + 1064), RW(2)); F_002B1020(c);
SET32(4, RW(17) + 1008);
L_002CE71C:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 928); goto L_002CE73C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -26448);
SET64(31, 0x2ce738); wr32(c, (RW(17) + 1016), RW(2)); F_002B13D0(c);
SET32(4, RW(17) + 928);
L_002CE73C:;
SET64(31, 0x2ce744); SET32(5, RW(0) + -1); F_002A76F0(c);
{ int t = RD(17) == RD(0);  if (t) goto L_002CE7AC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(7, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 6896);
SET64(5, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4d0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(7, RW(7) + 7064);
SET32(5, RW(5) + 6968);
SET32(3, RW(3) + 7000);
SET32(2, RW(17) + 916);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 432), RW(5));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ce7a0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ce7ac); SET64(5, RD(0) + RD(0)); F_001F0210(c);
L_002CE7AC:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_002CE7E0; }
SET32(4, RW(17) + 1248);
{ int t = RD(4) == RD(0);  if (t) goto L_002CE7DC; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -30064);
wr32(c, (RW(17) + 1264), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ce7dc);  rt_call(c, t); }
L_002CE7DC:;
SET64(2, RD(16) << 48);
L_002CE7E0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002CE7F8; }
SET64(31, 0x2ce7f4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002CE7F4:;
SET64(2, RD(17) + RD(0));
L_002CE7F8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CE810(Ctx *c) { /* func_002CE810 */
ENTER(0x2ce810);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(28) + -30040)));
SET64(16, RD(6) + RD(0));
SET64(2, (s32)rd32(c, (RW(28) + -30024)));
SET64(3, (s32)rd32(c, (RW(3) + 40)));
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) & 0xff);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 56)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(6, RSW(2) >> 6);
{ int t = RSD(2) >= 0; SET32(5, RSW(3) >> 11); if (t) goto L_002CE874; }
SET32(2, RW(2) + 63);
SET32(6, RSW(2) >> 6);
L_002CE874:;
SET64(7, (s32)rd32(c, (RW(4) + 52)));
SET64(2, (s64)(s32)0xff0000);
SET64(8, RD(2) | 0xffff);
SET64(31, 0x2ce888); SET32(4, RW(18) + 1152); F_002B0DD0(c);
SET64(25, (s32)rd32(c, (RW(18) + 1160)));
SET32(4, RW(18) + 1152);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ce89c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 1064)));
SET32(4, RW(18) + 1056);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ce8b0); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 1016)));
SET32(4, RW(18) + 1008);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ce8c4); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(18) + 936)));
SET32(4, RW(18) + 928);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ce8d8); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(28) + -30040)));
SET64(2, (s32)rd32(c, (RW(28) + -30024)));
SET64(3, (s32)rd32(c, (RW(3) + 40)));
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
SET64(3, RD(3) & 0xff);
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(4) + 48)));
SET64(2, (s32)rd32(c, (RW(4) + 56)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(6, RSW(2) >> 6);
{ int t = RSD(2) >= 0; SET32(5, RSW(3) >> 11); if (t) goto L_002CE91C; }
SET32(2, RW(2) + 63);
SET32(6, RSW(2) >> 6);
L_002CE91C:;
SET64(7, (s32)rd32(c, (RW(4) + 52)));
SET64(8, RD(0) + RD(0));
SET64(31, 0x2ce92c); SET32(4, RW(18) + 1200); F_002B0DD0(c);
SET64(25, (s32)rd32(c, (RW(18) + 1208)));
SET32(4, RW(18) + 1200);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ce940); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2ce950); SET64(6, RD(16) + RD(0)); F_00151AE0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002CE970(Ctx *c) { /* func_002CE970 */
ENTER(0x2ce970);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
{ int t = RD(5) != RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_002CE990; }
SET64(5, (s32)rd32(c, (RW(4) + 912)));
L_002CE990:;
SET64(16, rd16(c, (RW(4) + 898)));
SET64(18, (s32)rd32(c, (RW(5) + 900)));
SET64(17, (s32)rd32(c, (RW(4) + 900)));
{ int t = RSD(16) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002CE9E0; }
L_002CE9A4:;
SET64(31, 0x2ce9ac); SET64(4, RD(17) + RD(0)); F_002A1E20(c);
rd128(c, (RW(18) + 0) & ~15u, &c->r[4]);
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(16));
wr128(c, (RW(17) + 0) & ~15u, &c->r[4]);
rd128(c, (RW(18) + 16) & ~15u, &c->r[4]);
wr128(c, (RW(17) + 16) & ~15u, &c->r[4]);
rd128(c, (RW(18) + 32) & ~15u, &c->r[4]);
wr128(c, (RW(17) + 32) & ~15u, &c->r[4]);
rd128(c, (RW(18) + 48) & ~15u, &c->r[4]);
wr128(c, (RW(17) + 48) & ~15u, &c->r[4]);
SET32(18, RW(18) + 288);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 288); if (t) { POLL(); goto L_002CE9A4; } }
L_002CE9E0:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002CEA00(Ctx *c) { /* func_002CEA00 */
ENTER(0x2cea00);
SET32(29, RW(29) + -256);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(5) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 900), RW(0));
SET64(16, RD(0) + RD(0));
wr32(c, (RW(4) + 912), RW(22));
SET64(2, rd16(c, (RW(5) + 898)));
wr16(c, (RW(4) + 898), (u16)RW(2));
SET64(17, rd16(c, (RW(4) + 898)));
SET32(2, RW(17) << 3);
SET32(2, RW(2) + RW(17));
SET32(2, RW(2) << 5);
SET64(31, 0x2cea60); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002CEA90; }
SET64(5, (s64)(s32)0x140000);
SET64(6, (s64)(s32)0x140000);
SET64(8, RD(17) + RD(0));
SET32(16, RW(0) + 1);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + 11632);
SET32(6, RW(6) + 11520);
SET64(31, 0x2cea8c); SET32(7, RW(0) + 288); F_00102580(c);
SET64(19, RD(2) + RD(0));
L_002CEA90:;
wr32(c, (RW(20) + 900), RW(19));
SET64(23, rd16(c, (RW(20) + 898)));
SET64(30, (s32)rd32(c, (RW(22) + 900)));
{ int t = RSD(23) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_002CEB70; }
{ int t = RSD(23) <= 0; SET32(16, RW(29) + 176); if (t) goto L_002CEB70; }
SET64(3, RD(18) & 0xffff);
L_002CEAB0:;
SET32(4, RW(29) + 176);
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(21, RW(2) << 5);
SET64(31, 0x2ceac8); SET32(17, RW(19) + RW(21)); F_002AC130(c);
SET32(21, RW(30) + RW(21));
SET64(4, RD(17) + RD(0));
rd128(c, (RW(21) + 208) & ~15u, &c->r[2]);
SET32(5, RW(21) + 166);
wr128(c, (RW(16) + 0) & ~15u, &c->r[2]);
rd128(c, (RW(21) + 224) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[2]);
rd128(c, (RW(21) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[2]);
rd128(c, (RW(21) + 256) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 224) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
wr128(c, (RW(17) + 240) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
SET64(31, 0x2ceb18); wr128(c, (RW(17) + 256) & ~15u, &c->r[2]); F_00142C80(c);
SET64(3, rd16(c, (RW(21) + 164)));
SET64(2, RD(0) | 0xffff);
{ int t = RD(3) != RD(2); wr16(c, (RW(17) + 164), (u16)RW(3)); if (t) goto L_002CEB40; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x2ceb34); SET32(4, RW(20) + 288); F_00240980(c);
 goto L_002CEB58;
L_002CEB40:;
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) << 5);
SET64(31, 0x2ceb58); SET32(5, RW(19) + RW(2)); F_00142CD0(c);
L_002CEB58:;
SET32(2, RW(18) + 1);
SET64(18, RD(2) & 0xffff);
SET64(2, RSD(18) < RSD(23));
if (RD(2) != RD(0)) { SET64(3, RD(18) & 0xffff); { POLL(); goto L_002CEAB0; } }
L_002CEB70:;
SET64(6, (s32)rd32(c, (RW(20) + 900)));
SET64(5, RD(22) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2ceb84); SET32(7, RW(0) + 1); F_001EFC10(c);
SET64(25, (s32)rd32(c, (RW(20) + 276)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ceb98); SET32(5, RW(0) + 64); rt_call(c, t); }
SET64(2, rd16(c, (RW(20) + 264)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_002CEC48; }
SET64(2, (s32)rd32(c, (RW(20) + 272)));
L_002CEBA8:;
SET64(3, RD(17) & 0xffff);
SET32(16, RW(3) << 2);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 2);
SET64(7, RD(0) + RD(0));
SET32(2, RW(2) + RW(16));
SET32(8, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2cebd4); SET32(4, RW(2) + 144); F_002B0FA0(c);
SET64(2, (s32)rd32(c, (RW(20) + 272)));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(5) + RD(0));
SET32(2, RW(2) + RW(16));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET32(18, RW(2) + 240);
SET64(31, 0x2cebfc); SET64(4, RD(18) + RD(0)); F_002B1350(c);
SET32(5, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2cec0c); SET64(6, RD(5) + RD(0)); F_002B1310(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2cec1c); SET32(6, RW(0) + 2); F_002B12E0(c);
SET64(2, (s32)rd32(c, (RW(20) + 272)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2cec30); SET64(5, RD(0) + RD(0)); F_002A2670(c);
SET64(2, rd16(c, (RW(20) + 264)));
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 272))); { POLL(); goto L_002CEBA8; } }
L_002CEC48:;
SET64(31, 0x2cec50);  F_002BF970(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(16, (s32)c->f[0].u);
SET64(31, 0x2cec60);  F_002BF9A0(c);
SET64(2, (s64)(s32)0xff0000);
wr32(c, (RW(29) + 160), RW(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
wr32(c, (RW(29) + 164), RW(0));
SET64(5, RD(2) | 0xffff);
wr32(c, (RW(29) + 172), RW(16));
SET64(2, rd64(c, (RW(29) + 160)));
SET32(4, RW(20) + 928);
wr64(c, (RW(20) + 992), RD(2));
SET64(2, (s32)c->f[0].u);
wr32(c, (RW(29) + 168), RW(2));
SET64(2, rd64(c, (RW(29) + 168)));
SET64(31, 0x2cec9c); wr64(c, (RW(20) + 1000), RD(2)); F_002A7610(c);
SET32(2, RW(0) + 128);
SET32(4, RW(20) + 928);
wr8(c, (RW(29) + 255), (u8)RW(2));
SET32(5, RW(29) + 252);
wr8(c, (RW(29) + 252), (u8)RW(0));
wr8(c, (RW(29) + 253), (u8)RW(0));
SET64(31, 0x2cecbc); wr8(c, (RW(29) + 254), (u8)RW(0)); F_002A7670(c);
SET64(31, 0x2cecc4); SET32(4, RW(20) + 1056); F_001EA6C0(c);
SET32(5, RW(0) + 1);
SET32(4, RW(20) + 1008);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2cecdc); SET64(8, RD(5) + RD(0)); F_002B1350(c);
SET32(4, RW(20) + 1008);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2cecec); SET64(6, RD(0) + RD(0)); F_002B1310(c);
SET32(5, RW(0) + 1);
SET32(4, RW(20) + 1008);
SET64(31, 0x2cecfc); SET64(6, RD(5) + RD(0)); F_002B12E0(c);
SET64(25, (s32)rd32(c, (RW(20) + 1016)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ced0c); SET32(4, RW(20) + 1008); rt_call(c, t); }
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
SET32(29, RW(29) + 256); return;
}

void F_002CED40(Ctx *c) { /* func_002CED40 */
ENTER(0x2ced40);
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 16) & ~15u, &c->r[3]); return;
}

void F_002CED50(Ctx *c) { /* func_002CED50 */
ENTER(0x2ced50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002CEE00; }
c->f[0].u = rd32(c, (RW(16) + 8));
SET64(2, (s64)(s32)0x3f800000);
c->f[1].u = RW(2);
c->f[4].f = fpu(F(0) + F(12));
wr32(c, (RW(16) + 8), c->f[4].u);
c->f[3].u = rd32(c, (RW(16) + 12));
c->f[0].u = rd32(c, (RW(16) + 28));
c->f[2].u = rd32(c, (RW(16) + 24));
c->f[3].f = fpu_div(F(4), F(3));
c->f[1].f = fpu(F(1) - F(3));
c->f[3].f = fpu(F(1) * F(0));
c->f[1].u = rd32(c, (RW(16) + 20));
c->f[0].u = rd32(c, (RW(16) + 16));
wr32(c, (RW(29) + 32), c->f[0].u);
wr32(c, (RW(29) + 36), c->f[1].u);
wr32(c, (RW(29) + 40), c->f[2].u);
wr32(c, (RW(29) + 44), c->f[3].u);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2cedc4); SET32(5, RW(29) + 32); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(16) + 8));
c->f[0].u = rd32(c, (RW(16) + 12));
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002CEE04; }
SET64(3, rd8(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_002CEE00; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cedfc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr8(c, (RW(16) + 0), (u8)RW(0));
L_002CEE00:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002CEE04:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CEE10(Ctx *c) { /* func_002CEE10 */
ENTER(0x2cee10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(16, RD(5) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cee40); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 912)));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
SET32(4, RW(3) + 288);
wr128(c, (RW(3) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 320) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2cee70); wr128(c, (RW(3) + 336) & ~15u, &c->r[2]); F_002A1E20(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2cee7c); SET64(5, RD(16) + RD(0)); F_002CE970(c);
wr32(c, (RW(17) + 8), RW(0));
SET32(3, RW(0) + 1);
wr8(c, (RW(17) + 0), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CEEA0(Ctx *c) { /* func_002CEEA0 */
ENTER(0x2ceea0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd8(c, (RW(4) + 0)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002CEED0; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ceecc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_002CEED0:;
SET32(29, RW(29) + 16); return;
}

void F_002CEEE0(Ctx *c) { /* func_002CEEE0 */
ENTER(0x2ceee0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2ceefc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002CEF10(Ctx *c) { /* func_002CEF10 */
ENTER(0x2cef10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2cef34); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cef4c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CEF60(Ctx *c) { /* func_002CEF60 */
ENTER(0x2cef60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_002CEF90; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2cef8c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_002CEF90:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CEFA0(Ctx *c) { /* func_002CEFA0 */
ENTER(0x2cefa0);
SET32(29, RW(29) + -144);
SET64(2, (s64)(s32)0x3f190000);
wr64(c, (RW(29) + 80), RD(31));
SET64(2, RD(2) | 0x999a);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr32(c, (RW(29) + 112), RW(2));
SET64(18, RD(5) + RD(0));
SET64(2, (s64)(s32)0x3f4c0000);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(3, RD(2) | 0xcccd);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(4) + 0), (u8)RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), c->f[12].u);
wr32(c, (RW(29) + 116), RW(3));
wr32(c, (RW(29) + 120), RW(2));
SET32(4, RW(0) + 1280);
wr32(c, (RW(29) + 124), RW(2));
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET64(31, 0x2cf004); wr128(c, (RW(19) + 16) & ~15u, &c->r[2]); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002CF0F4; }
SET32(4, RW(17) + 1248);
SET32(16, RW(0) + 1);
SET64(31, 0x2cf01c); wr32(c, (RW(17) + 256), RW(4)); F_00141AA0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2cf028); SET64(5, RD(0) + RD(0)); F_002CF1F0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(9, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14768);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(7, (s32)rd32(c, (RW(17) + 256)));
SET32(9, RW(9) + -14600);
SET32(8, RW(8) + -14696);
SET32(3, RW(3) + -14664);
SET32(2, RW(17) + 1248);
SET32(4, RW(29) + 96);
wr32(c, (RW(7) + 16), RW(9));
SET64(5, RD(0) + RD(0));
wr32(c, (RW(17) + 432), RW(8));
SET64(6, RD(0) + RD(0));
wr32(c, (RW(17) + 760), RW(3));
SET64(7, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET64(8, RD(0) + RD(0));
SET32(2, RW(2) - RW(3));
SET64(31, 0x2cf084); wr32(c, (RW(3) + 20), RW(2)); F_002CF1D0(c);
SET32(5, RW(0) + 128);
SET64(20, RD(2) + RD(0));
SET32(4, RW(29) + 140);
SET64(6, RD(5) + RD(0));
SET64(7, RD(5) + RD(0));
SET64(31, 0x2cf0a0); SET64(8, RD(5) + RD(0)); F_002CF1B0(c);
SET64(5, RD(20) + RD(0));
SET64(6, RD(2) + RD(0));
SET32(4, RW(17) + 928);
SET64(31, 0x2cf0b4); SET64(7, RD(0) + RD(0)); F_002A7760(c);
SET64(31, 0x2cf0bc); SET32(4, RW(17) + 1008); F_002CF170(c);
SET64(31, 0x2cf0c4); SET32(4, RW(17) + 1056); F_002CF130(c);
SET32(4, RW(17) + 1152);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2cf0dc); SET64(8, RD(0) + RD(0)); F_002B0E70(c);
SET32(4, RW(17) + 1200);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2cf0f4); SET64(8, RD(0) + RD(0)); F_002B0E70(c);
L_002CF0F4:;
wr32(c, (RW(19) + 4), RW(17));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2cf10c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void F_002CF130(Ctx *c) { /* func_002CF130 */
ENTER(0x2cf130);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2cf144); SET64(16, RD(4) + RD(0)); F_002B1080(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -26416);
wr32(c, (RW(16) + 8), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CF170(Ctx *c) { /* func_002CF170 */
ENTER(0x2cf170);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2cf184); SET64(16, RD(4) + RD(0)); F_002B1430(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -26448);
wr32(c, (RW(16) + 8), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002CF1B0(Ctx *c) { /* func_002CF1B0 */
ENTER(0x2cf1b0);
wr8(c, (RW(4) + 0), (u8)RW(5));
SET64(2, RD(4) + RD(0));
wr8(c, (RW(4) + 1), (u8)RW(6));
wr8(c, (RW(4) + 2), (u8)RW(7));
wr8(c, (RW(4) + 3), (u8)RW(8)); return;
}

void F_002CF1D0(Ctx *c) { /* func_002CF1D0 */
ENTER(0x2cf1d0);
wr32(c, (RW(4) + 0), RW(5));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 8), RW(7));
wr32(c, (RW(4) + 12), RW(8)); return;
}

void F_002CF1F0(Ctx *c) { /* func_002CF1F0 */
ENTER(0x2cf1f0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(18) << 48);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002CF224; }
SET32(4, RW(16) + 916);
SET64(31, 0x2cf224); wr32(c, (RW(16) + 256), RW(4)); F_00141AA0(c);
L_002CF224:;
SET64(17, RD(0) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2cf234); SET64(5, RD(0) + RD(0)); F_00152580(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(9, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 7104);
SET64(7, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 276), RW(2));
SET64(5, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(16) + 256)));
SET32(9, RW(9) + 7264);
SET64(2, (s64)(s32)0x4d0000);
SET64(6, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 7176);
wr32(c, (RW(3) + 16), RW(9));
SET32(7, RW(7) + 7208);
wr32(c, (RW(16) + 432), RW(2));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 760), RW(7));
SET32(8, RW(16) + 916);
SET64(9, (s32)rd32(c, (RW(16) + 256)));
SET32(5, RW(5) + 6896);
SET32(6, RW(6) + 7064);
SET32(4, RW(4) + 6968);
SET32(3, RW(3) + 7000);
SET64(2, RD(16) + RD(0));
SET32(7, RW(8) - RW(9));
wr32(c, (RW(9) + 20), RW(7));
wr32(c, (RW(16) + 912), RW(0));
wr32(c, (RW(16) + 276), RW(5));
SET64(5, (s32)rd32(c, (RW(16) + 256)));
wr32(c, (RW(5) + 16), RW(6));
wr32(c, (RW(16) + 432), RW(4));
wr32(c, (RW(16) + 760), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 256)));
SET32(3, RW(8) - RW(4));
wr32(c, (RW(4) + 20), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002CF2E0(Ctx *c) { /* func_002CF2E0 */
ENTER(0x2cf2e0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -1248);
SET32(4, RW(4) + RW(25)); { F_001511E0(c); return; }
}

void F_002CF2F0(Ctx *c) { /* func_002CF2F0 */
ENTER(0x2cf2f0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -1248);
SET32(4, RW(4) + RW(25)); { F_001EFF70(c); return; }
}

void F_002CF300(Ctx *c) { /* func_002CF300 */
ENTER(0x2cf300);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -1248);
SET32(4, RW(4) + RW(25)); { F_002CE680(c); return; }
}

void F_002CF310(Ctx *c) { /* func_002CF310 */
ENTER(0x2cf310);
SET32(4, RW(4) + -288); { F_002CE810(c); return; }
}

void F_002CF320(Ctx *c) { /* func_002CF320 */
ENTER(0x2cf320);
SET32(4, RW(4) + -288); { F_002CE680(c); return; }
}

void F_002CF330(Ctx *c) { /* func_002CF330 */
ENTER(0x2cf330);
SET32(4, RW(4) + -704); { F_002CE680(c); return; }
}

void F_002CF340(Ctx *c) { /* func_002CF340 */
ENTER(0x2cf340);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 10488); return;
}

void F_002CF350(Ctx *c) { /* func_002CF350 */
ENTER(0x2cf350);
 return;
}

void F_002CF360(Ctx *c) { /* func_002CF360 */
ENTER(0x2cf360);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CF3DC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14560);
SET32(3, RW(3) + -14552);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -14540);
SET64(31, 0x2cf3a4); wr32(c, (RW(17) + 36), RW(2)); F_002D2690(c);
SET32(4, RW(17) + 64);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002CF3BC; }
SET64(31, 0x2cf3b8);  F_0031F610(c);
SET64(4, RD(17) + RD(0));
L_002CF3BC:;
SET64(31, 0x2cf3c4); SET64(5, RD(0) + RD(0)); F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002CF3E0; }
SET64(31, 0x2cf3dc); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002CF3DC:;
SET64(2, RD(17) + RD(0));
L_002CF3E0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002CF400(Ctx *c) { /* func_002CF400 */
ENTER(0x2cf400);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 136)));
{ int t = RD(4) == RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_002CF5E0; }
SET64(31, 0x2cf434); SET64(17, rd16(c, (RW(4) + 150))); F_00311B10(c);
SET64(4, (s32)rd32(c, (RW(20) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2cf448); SET64(16, RD(2) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 108), RW(3));
SET64(4, RD(18) & 0xff00);
wr32(c, (RW(29) + 100), RW(0));
SET64(3, (s64)(s32)0x41400000);
wr32(c, (RW(29) + 104), RW(0));
c->f[3].u = RW(3);
rd128(c, (RW(2) + 0) & ~15u, &c->r[5]);
SET64(3, (s64)(s32)0x47800000);
c->f[1].u = RW(3);
SET64(6, RD(17) & 0xffff);
SET32(3, RW(0) + 3072);
wr128(c, (RW(29) + 96) & ~15u, &c->r[5]);
c->f[4].u = rd32(c, (RW(29) + 96));
c->f[0].u = rd32(c, (RW(29) + 104));
c->f[2].u = rd32(c, (RW(29) + 100));
c->f[3].f = fpu(F(4) - F(3));
wr32(c, (RW(29) + 96), c->f[3].u);
SET64(5, (s32)rd32(c, (RW(20) + 136)));
c->f[0].f = fpu(F(1) + F(0));
SET64(5, (s32)rd32(c, (RW(5) + 140)));
c->f[1].u = rd32(c, (RW(5) + 436));
c->f[1].f = fpu(F(2) + F(1));
wr32(c, (RW(29) + 104), c->f[0].u);
{ int t = RD(4) == RD(3); wr32(c, (RW(29) + 100), c->f[1].u); if (t) goto L_002CF4EC; }
SET32(3, RW(0) + 2816);
if (RD(4) == RD(3)) { SET32(6, RW(6) + 167); goto L_002CF4F0; }
SET32(3, RW(0) + 2560);
if (RD(4) == RD(3)) { SET32(6, RW(6) + 123); goto L_002CF4F0; }
SET32(3, RW(0) + 2304);
if (RD(4) == RD(3)) { SET32(6, RW(6) + 118); goto L_002CF4F0; }
SET32(3, RW(0) + 2048);
if (RD(4) == RD(3)) { SET32(6, RW(6) + 62); goto L_002CF4F0; }
SET64(19, RD(0) + RD(0)); goto L_002CF4F4;
L_002CF4EC:;
SET32(6, RW(6) + 175);
L_002CF4F0:;
SET64(19, RD(0) + RD(0));
L_002CF4F4:;
{ int t = RSD(16) <= 0;  if (t) goto L_002CF5E0; }
SET64(3, (s64)(s32)0x540000);
{ int t = RSD(16) <= 0; SET32(3, RW(3) + -25552); if (t) goto L_002CF5E0; }
SET32(18, RW(3) + RW(6));
SET64(17, RD(0) + RD(0));
L_002CF510:;
SET64(2, rd8(c, (RW(18) + 0)));
SET64(2, RD(2) & 0x4);
{ int t = RD(2) == RD(0);  if (t) goto L_002CF558; }
SET64(2, (s32)rd32(c, (RW(20) + 140)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cf53c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 140)));
SET32(5, RW(29) + 96);
SET64(31, 0x2cf54c); SET32(4, RW(2) + RW(17)); F_0014E770(c);
 goto L_002CF578;
L_002CF558:;
SET64(2, (s32)rd32(c, (RW(20) + 140)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cf574); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002CF578:;
SET64(4, (s32)rd32(c, (RW(20) + 136)));
c->f[0].u = rd32(c, (RW(29) + 100));
SET64(2, (s32)rd32(c, (RW(4) + 140)));
c->f[1].u = rd32(c, (RW(2) + 436));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 100), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2cf5a0);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 140)));
c->f[12].u = c->f[0].u;
SET32(2, RW(2) + RW(17));
SET64(31, 0x2cf5b4); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(20) + 140)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cf5cc);  rt_call(c, t); }
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 1);
SET64(3, RSD(19) < RSD(16));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002CF510; } }
L_002CF5E0:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002CF600(Ctx *c) { /* func_002CF600 */
ENTER(0x2cf600);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
SET64(30, RD(9) + RD(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(7) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(8) + RD(0));
wr8(c, (RW(29) + 171), (u8)RW(10));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cf650); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_00100320(c);
SET64(16, RD(2) + RD(0));
{ int t = RSD(19) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_002CF6E8; }
SET64(1, RSD(19) < (s64)9);
{ int t = RD(1) != RD(0); SET32(4, RW(19) + -8); if (t) goto L_002CF6C0; }
{ int t = RSD(19) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_002CF688; }
SET64(1, (s64)(s32)0x7fff0000);
SET64(1, RD(1) | 0xffff);
SET64(1, RSD(19) < RSD(1));
{ int t = RD(1) == RD(0);  if (t) goto L_002CF688; }
SET64(2, RD(0) + (s64)1);
L_002CF688:;
{ int t = RD(2) == RD(0);  if (t) goto L_002CF6C0; }
L_002CF690:;
SET32(3, RW(16) + RW(5));
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(5, RW(5) + 8);
wr8(c, (RW(3) + 1), (u8)RW(0));
SET64(2, RSD(5) < RSD(4));
wr8(c, (RW(3) + 2), (u8)RW(0));
wr8(c, (RW(3) + 3), (u8)RW(0));
wr8(c, (RW(3) + 4), (u8)RW(0));
wr8(c, (RW(3) + 5), (u8)RW(0));
wr8(c, (RW(3) + 6), (u8)RW(0));
{ int t = RD(2) != RD(0); wr8(c, (RW(3) + 7), (u8)RW(0)); if (t) { POLL(); goto L_002CF690; } }
L_002CF6C0:;
SET64(1, RSD(5) < RSD(19));
{ int t = RD(1) == RD(0);  if (t) goto L_002CF6E8; }
L_002CF6CC:;
SET32(2, RW(16) + RW(5));
wr8(c, (RW(2) + 0), (u8)RW(0));
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < RSD(19));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CF6CC; } }
L_002CF6E8:;
SET32(2, RW(19) + 1);
SET64(31, 0x2cf6f4); SET32(4, RW(2) << 2); F_00100530(c);
SET32(4, RW(19) + 1);
wr32(c, (RW(21) + 144), RW(2));
{ int t = RSD(4) <= 0; SET64(3, RD(0) + RD(0)); if (t) goto L_002CF7E0; }
SET64(1, RSD(4) < (s64)9);
{ int t = RD(1) != RD(0); SET32(2, RW(19) + -7); if (t) goto L_002CF7B0; }
{ int t = RSD(4) < 0; SET64(5, RD(0) + RD(0)); if (t) goto L_002CF730; }
SET64(1, (s64)(s32)0x7fff0000);
SET64(1, RD(1) | 0xffff);
SET64(1, RSD(4) < RSD(1));
{ int t = RD(1) == RD(0);  if (t) goto L_002CF730; }
SET64(5, RD(0) + (s64)1);
L_002CF730:;
{ int t = RD(5) == RD(0);  if (t) goto L_002CF7B0; }
SET64(4, RD(0) + RD(0));
L_002CF73C:;
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(3, RW(3) + 8);
SET64(5, RSD(3) < RSD(2));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 0), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 4), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 8), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 12), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 16), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 20), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 24), RW(0));
SET64(6, (s32)rd32(c, (RW(21) + 144)));
SET32(6, RW(6) + RW(4));
wr32(c, (RW(6) + 28), RW(0));
{ int t = RD(5) != RD(0); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_002CF73C; } }
L_002CF7B0:;
SET32(5, RW(19) + 1);
SET64(1, RSD(3) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002CF7E0; }
SET32(6, RW(3) << 2);
L_002CF7C4:;
SET64(4, (s32)rd32(c, (RW(21) + 144)));
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < RSD(5));
SET32(4, RW(4) + RW(6));
wr32(c, (RW(4) + 0), RW(0));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_002CF7C4; } }
L_002CF7E0:;
SET64(2, (s32)rd32(c, (RW(21) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2cf7f0); SET64(4, (s32)rd32(c, (RW(2) + 4))); F_00321A60(c);
SET64(17, RD(0) + RD(0));
{ int t = RSD(19) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_002CF8E0; }
SET64(3, RD(2) << 32);
SET32(6, RW(5) << 2);
SET32(7, RW(22) + RW(6));
SET64(3, RSD(3) >> 32);
SET32(4, RW(0) + 2);
SET32(2, RW(0) + 1);
L_002CF814:;
{ int t = RD(22) == RD(0);  if (t) goto L_002CF898; }
SET64(8, (s32)rd32(c, (RW(7) + 0)));
{ int t = RD(8) != RD(4);  if (t) goto L_002CF860; }
SET32(8, RW(20) + RW(5));
SET32(9, RW(17) << 2);
SET64(10, RD(8) & 0xffff);
SET32(17, RW(17) + 1);
SET64(8, (s32)rd32(c, (RW(21) + 144)));
SET32(10, RW(10) << 1);
SET32(10, RW(3) + RW(10));
SET32(8, RW(8) + RW(9));
SET64(9, rd16(c, (RW(10) + 2)));
SET32(9, RW(9) << 1);
SET32(9, RW(3) + RW(9));
wr32(c, (RW(8) + 0), RW(9)); goto L_002CF8C8;
L_002CF860:;
{ int t = RD(8) != RD(2);  if (t) goto L_002CF8C8; }
SET64(11, rd16(c, (RW(3) + 124)));
SET32(10, RW(17) << 2);
SET64(9, (s32)rd32(c, (RW(21) + 144)));
SET32(8, RW(16) + RW(17));
SET32(17, RW(17) + 1);
SET32(11, RW(11) << 1);
SET32(9, RW(9) + RW(10));
SET32(10, RW(3) + RW(11));
wr32(c, (RW(9) + 0), RW(10));
wr8(c, (RW(8) + 0), (u8)RW(2)); goto L_002CF8C8;
L_002CF898:;
SET32(8, RW(20) + RW(5));
SET64(9, RD(8) & 0xffff);
SET32(17, RW(17) + 1);
SET32(9, RW(9) << 1);
SET64(8, (s32)rd32(c, (RW(21) + 144)));
SET32(9, RW(3) + RW(9));
SET64(9, rd16(c, (RW(9) + 2)));
SET32(8, RW(8) + RW(6));
SET32(9, RW(9) << 1);
SET32(9, RW(3) + RW(9));
wr32(c, (RW(8) + 0), RW(9));
L_002CF8C8:;
SET32(5, RW(5) + 1);
SET64(8, RSD(5) < RSD(19));
SET32(7, RW(7) + 4);
{ int t = RD(8) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_002CF814; } }
L_002CF8E0:;
SET64(31, 0x2cf8e8); SET32(4, RW(0) + 200); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002CF95C; }
SET64(31, 0x2cf8f8); SET64(4, RD(19) + RD(0)); F_002265B0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -30064);
SET32(2, RW(2) + -30056);
wr32(c, (RW(19) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 20), RW(2));
SET32(3, RW(3) + -30044);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 36), RW(3));
SET32(2, RW(2) + -29984);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 72), RW(2));
SET32(3, RW(3) + -11184);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 56), RW(3));
SET32(2, RW(2) + -11176);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 20), RW(2));
SET32(3, RW(3) + -11164);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -11104);
wr32(c, (RW(19) + 36), RW(3));
wr32(c, (RW(19) + 72), RW(2));
wr32(c, (RW(19) + 196), RW(0));
L_002CF95C:;
wr32(c, (RW(21) + 136), RW(19));
SET64(4, RD(19) + RD(0));
SET64(3, (s32)rd32(c, (RW(21) + 60)));
SET64(9, RD(18) & 0xffff);
SET64(5, (s32)rd32(c, (RW(21) + 144)));
SET32(7, RW(0) + -1);
SET32(8, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 20)));
SET64(10, (s32)rd32(c, (RW(3) + 16)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(3, (s32)rd32(c, (RW(3) + 84)));
SET64(31, 0x2cf994); SET32(6, RW(2) + RW(3)); F_00224050(c);
SET64(2, (s32)rd32(c, (RW(21) + 136)));
SET64(5, RD(30) & 0xffff);
SET64(31, 0x2cf9a4); SET32(4, RW(2) + 168); F_0013BA20(c);
SET64(2, rd8(c, (RW(29) + 171)));
{ int t = RD(2) == RD(0);  if (t) goto L_002CFA28; }
{ int t = RSD(17) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002CFA28; }
SET64(2, (s32)rd32(c, (RW(21) + 136)));
L_002CF9BC:;
SET64(4, RD(19) & 0xffff);
SET32(3, RW(4) << 5);
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 140)));
SET32(4, RW(3) << 4);
SET32(3, RW(2) + RW(4));
SET64(2, rd16(c, (RW(3) + 488)));
SET64(2, RD(2) & 0xfffe);
wr16(c, (RW(3) + 488), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(21) + 136)));
SET64(2, (s32)rd32(c, (RW(2) + 140)));
SET32(3, RW(2) + RW(4));
SET64(2, rd16(c, (RW(3) + 488)));
SET64(2, RD(2) | 0x2);
wr16(c, (RW(3) + 488), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(21) + 136)));
SET64(2, (s32)rd32(c, (RW(2) + 140)));
SET32(4, RW(2) + RW(4));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cfa14);  rt_call(c, t); }
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(17));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(21) + 136))); { POLL(); goto L_002CF9BC; } }
L_002CFA28:;
{ int t = RSD(17) <= 0; SET64(3, RD(0) + RD(0)); if (t) goto L_002CFA60; }
SET32(2, RW(16) + RW(3));
L_002CFA34:;
SET64(2, rd8(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_002CFA50; }
SET64(2, (s32)rd32(c, (RW(21) + 136)));
SET64(2, (s32)rd32(c, (RW(2) + 188)));
SET32(2, RW(2) + RW(3));
wr8(c, (RW(2) + 0), (u8)RW(0));
L_002CFA50:;
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < RSD(17));
if (RD(2) != RD(0)) { SET32(2, RW(16) + RW(3)); { POLL(); goto L_002CFA34; } }
L_002CFA60:;
SET64(31, 0x2cfa68); SET64(4, RD(16) + RD(0)); F_00100430(c);
SET32(2, RW(18) << 1);
SET64(16, RD(0) + RD(0));
SET32(2, RW(2) + RW(18));
SET32(2, RW(2) << 7);
SET64(31, 0x2cfa80); SET32(4, RW(2) + 16); F_00100530(c);
{ int t = RD(2) == RD(0); SET64(23, RD(2) + RD(0)); if (t) goto L_002CFAB0; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET32(16, RW(0) + 1);
SET64(4, RD(23) + RD(0));
SET32(5, RW(5) + -7168);
SET32(6, RW(6) + -7552);
SET32(7, RW(0) + 384);
SET64(31, 0x2cfaac); SET64(8, RD(18) + RD(0)); F_00102580(c);
SET64(23, RD(2) + RD(0));
L_002CFAB0:;
wr32(c, (RW(21) + 140), RW(23));
{ int t = RSD(18) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002CFCF0; }
SET64(19, RD(0) + RD(0));
L_002CFAC0:;
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(4, RW(2) + RW(19));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2cfad8);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(21) + 60)));
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET64(3, (s32)rd32(c, (RW(3) + 24)));
SET32(2, RW(2) + RW(19));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(3, RW(3) + 64);
wr32(c, (RW(2) + 160), RW(3));
SET64(5, (s32)rd32(c, (RW(21) + 108)));
{ int t = RD(5) == RD(0);  if (t) goto L_002CFB08; }
SET32(5, RW(5) + 672);
L_002CFB08:;
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(4, RW(2) + RW(19));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2cfb20);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cfb3c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(21) + 140)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(19));
SET64(31, 0x2cfb54); SET32(4, RW(2) + 192); F_00162D00(c);
SET64(3, (s32)rd32(c, (RW(21) + 140)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(19));
SET64(31, 0x2cfb6c); SET32(4, RW(2) + 192); F_00162CF0(c);
SET64(3, (s32)rd32(c, (RW(21) + 140)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(19));
SET64(31, 0x2cfb84); SET32(4, RW(2) + 192); F_00162CE0(c);
SET64(3, (s32)rd32(c, (RW(21) + 140)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(19));
SET64(31, 0x2cfb9c); SET32(4, RW(2) + 192); F_00162CD0(c);
SET64(2, (s32)rd32(c, (RW(21) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(2) + 116)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002CFBC0; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002CFBD8;
L_002CFBC0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002CFBD8:;
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 164), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(21) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(2) + 118)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002CFC08; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002CFC20;
L_002CFC08:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002CFC20:;
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 168), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 172), RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 176), RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(2) + 116)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002CFC68; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002CFC80;
L_002CFC68:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002CFC80:;
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 180), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(21) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, rd16(c, (RW(2) + 118)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002CFCB0; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002CFCC8;
L_002CFCB0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002CFCC8:;
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET32(2, RW(2) + RW(19));
wr32(c, (RW(2) + 184), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(21) + 140)));
SET64(31, 0x2cfce0); SET32(4, RW(2) + RW(19)); F_0014E900(c);
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(18));
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 384); if (t) { POLL(); goto L_002CFAC0; } }
L_002CFCF0:;
SET64(2, RD(17) + RD(0));
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

static void B_002CFD30(Ctx *c, u32 entry) { /* func_002CFD30 */
ENTER(entry);
switch (entry) { case 0x2d0008: goto L_002D0008; case 0x2d0014: goto L_002D0014; case 0x2d0018: goto L_002D0018; case 0x2d001c: goto L_002D001C; case 0x2d0020: goto L_002D0020; case 0x2d002c: goto L_002D002C; case 0x2d0030: goto L_002D0030; case 0x2d0048: goto L_002D0048; case 0x2d0054: goto L_002D0054; case 0x2d0058: goto L_002D0058; case 0x2d006c: goto L_002D006C; }
SET32(29, RW(29) + -400);
SET64(2, (s64)(s32)0x520000);
wr64(c, (RW(29) + 80), RD(31));
SET64(3, RD(0) | 0xff04);
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[0].u = RW(0);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(2) + 14864));
wr32(c, (RW(29) + 384), RW(0));
wr32(c, (RW(29) + 388), RW(0));
wr32(c, (RW(29) + 392), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 396), RW(2));
c->f[13].u = RW(2);
SET64(2, rd16(c, (RW(4) + 0)));
{ int t = RD(2) == RD(3); SET64(17, RD(4) + RD(0)); if (t) goto L_002D22E4; }
SET64(3, RD(0) | 0xff03);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D22B4; }
SET64(3, RD(0) | 0xff02);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 124))); goto L_002D2240; }
SET64(3, RD(0) | 0xff01);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D21D8; }
SET64(3, RD(0) | 0xff00);
if (RD(2) == RD(3)) { SET64(3, (s32)rd32(c, (RW(17) + 60))); goto L_002D2190; }
SET32(3, RW(0) + 770);
if (RD(2) == RD(3)) { SET32(4, RW(17) + 64); goto L_002D20F8; }
SET32(3, RW(0) + 769);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D20D4; }
SET32(3, RW(0) + 768);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 120))); goto L_002D2060; }
SET32(3, RW(0) + 3074);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D1F04; }
SET32(3, RW(0) + 3073);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D1D38; }
SET32(3, RW(0) + 3072);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 156); goto L_002D1BF4; }
SET32(3, RW(0) + 2820);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 96))); goto L_002D1BBC; }
SET32(3, RW(0) + 2819);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 72); goto L_002D1B4C; }
SET32(3, RW(0) + 2818);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D1AC0; }
SET32(3, RW(0) + 2817);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D1908; }
SET32(3, RW(0) + 2816);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 32); goto L_002D17F8; }
SET32(3, RW(0) + 2564);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 96))); goto L_002D17B4; }
SET32(3, RW(0) + 2563);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 100); goto L_002D1710; }
SET32(3, RW(0) + 2562);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D16B0; }
SET32(3, RW(0) + 2561);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D14CC; }
SET32(3, RW(0) + 2560);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 176); goto L_002D1388; }
SET32(3, RW(0) + 2308);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 96))); goto L_002D1344; }
SET32(3, RW(0) + 2307);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 92); goto L_002D12B0; }
SET32(3, RW(0) + 2306);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D1248; }
SET32(3, RW(0) + 2305);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D108C; }
SET32(3, RW(0) + 2304);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 20); goto L_002D0F64; }
SET32(3, RW(0) + 2052);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 96))); goto L_002D0F20; }
SET32(3, RW(0) + 2051);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 96); goto L_002D0E88; }
SET32(3, RW(0) + 2050);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D0E28; }
SET32(3, RW(0) + 2049);
if (RD(2) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D0C6C; }
SET32(3, RW(0) + 2048);
if (RD(2) == RD(3)) { SET32(4, RW(0) + 224); goto L_002D0B44; }
SET32(3, RW(0) + 514);
if (RD(2) == RD(3)) { SET32(4, RW(17) + 64); goto L_002D0AD4; }
SET32(3, RW(0) + 513);
if (RD(2) == RD(3)) { SET64(2, (s64)(s32)0x40800000); goto L_002D0A3C; }
SET32(3, RW(0) + 512);
if (RD(2) == RD(3)) { wr32(c, (RW(17) + 180), c->f[0].u); goto L_002D0A28; }
SET32(3, RW(0) + 258);
{ int t = RD(2) == RD(3);  if (t) goto L_002D0874; }
SET32(3, RW(0) + 257);
if (RD(2) == RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D0854; }
SET32(3, RW(0) + 256);
if (RD(2) == RD(3)) { SET64(5, (s32)rd32(c, (RW(17) + 100))); goto L_002D07B8; }
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(3, (s32)rd32(c, (RW(17) + 184))); goto L_002D04B4; }
if (RD(2) == RD(0)) { SET32(4, RW(0) + 32); goto L_002CFF4C; }
SET64(4, (s32)rd32(c, (RW(17) + 128))); goto L_002D232C;
L_002CFF4C:;
SET64(31, 0x2cff54);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CFF64; }
SET64(31, 0x2cff64); SET64(4, RD(16) + RD(0)); F_0014FE60(c);
L_002CFF64:;
SET32(5, RW(0) + 512);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2cff80); wr32(c, (RW(17) + 104), RW(16)); F_0014FCE0(c);
SET64(31, 0x2cff88); SET32(4, RW(0) + 1424); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CFFA8; }
SET32(6, RW(0) + 100);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 16384);
SET64(7, RD(6) + RD(0));
SET64(31, 0x2cffa8); SET64(8, RD(6) + RD(0)); F_00161C20(c);
L_002CFFA8:;
wr32(c, (RW(17) + 108), RW(16));
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 228), (u8)RW(2));
SET64(31, 0x2cffbc); SET32(4, RW(0) + 1424); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CFFDC; }
SET32(6, RW(0) + 100);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 16384);
SET64(7, RD(6) + RD(0));
SET64(31, 0x2cffdc); SET64(8, RD(6) + RD(0)); F_00161C20(c);
L_002CFFDC:;
wr32(c, (RW(17) + 112), RW(16));
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 228), (u8)RW(2));
SET64(31, 0x2cfff0); SET32(4, RW(0) + 1552); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D00A0; }
SET32(6, RW(0) + 100);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 16384);
SET64(7, RD(6) + RD(0));
L_002D0008:;
SET64(31, 0x2d0010); SET64(8, RD(6) + RD(0)); F_00161C20(c);
SET64(2, (s64)(s32)0x4d0000);
L_002D0014:;
SET64(3, (s64)(s32)0x4d0000);
L_002D0018:;
SET32(2, RW(2) + -20784);
L_002D001C:;
SET32(3, RW(3) + -20768);
L_002D0020:;
wr32(c, (RW(16) + 176), RW(2));
SET32(4, RW(16) + 1440);
SET64(2, (s64)(s32)0x4d0000);
L_002D002C:;
wr32(c, (RW(16) + 196), RW(3));
L_002D0030:;
SET32(2, RW(2) + -20728);
SET64(31, 0x2d003c); wr32(c, (RW(16) + 1072), RW(2)); F_00149480(c);
SET64(31, 0x2d0044); SET32(4, RW(16) + 1456); F_00149480(c);
SET64(31, 0x2d004c); SET32(4, RW(16) + 1472); F_00149480(c);
if (0) { L_002D0048:; SET32(4, RW(16) + 1472); }
SET64(31, 0x2d0054); SET32(4, RW(16) + 1488); F_00149480(c);
L_002D0054:;
SET64(31, 0x2d005c); SET32(4, RW(16) + 1512); F_00178910(c);
if (0) { L_002D0058:; SET32(4, RW(16) + 1512); }
wr32(c, (RW(16) + 1424), RW(0));
SET32(3, RW(0) + 16384);
wr8(c, (RW(16) + 1428), (u8)RW(0));
SET32(2, RW(0) + 100);
L_002D006C:;
wr32(c, (RW(16) + 1524), RW(3));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1528), RW(2));
SET32(5, RW(0) + 1);
wr32(c, (RW(16) + 1532), RW(2));
SET64(31, 0x2d0088); wr32(c, (RW(16) + 1536), RW(2)); F_001624B0(c);
wr32(c, (RW(16) + 1504), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1540), RW(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d00a0); wr32(c, (RW(16) + 1432), RW(0)); F_00162490(c);
L_002D00A0:;
SET32(4, RW(0) + 352);
SET64(31, 0x2d00ac); wr32(c, (RW(17) + 116), RW(16)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002D00BC; }
SET64(31, 0x2d00bc); SET64(4, RD(18) + RD(0)); F_001A8000(c);
L_002D00BC:;
SET64(6, (s64)(s32)0x490000);
SET64(8, (s64)(s32)0x4b0000);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(6, RW(6) + 23056);
SET32(7, RW(0) + 245);
SET32(8, RW(8) + 10336);
SET64(31, 0x2d00e0); wr32(c, (RW(16) + 1424), RW(18)); F_001A7FF0(c);
SET64(31, 0x2d00e8); SET64(4, (s32)rd32(c, (RW(16) + 1424))); F_001A7FD0(c);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(16) + 1428), (u8)RW(0));
c->f[12].u = RW(2);
SET32(4, RW(29) + 128);
SET64(2, (s32)rd32(c, (RW(17) + 116)));
c->f[13].u = c->f[12].u;
c->f[14].u = c->f[12].u;
SET64(18, (s32)rd32(c, (RW(2) + 1424)));
SET64(31, 0x2d0110); c->f[15].u = c->f[12].u; F_0013E630(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x3f420000);
SET64(3, RD(2) | 0x8f5c);
SET64(2, (s64)(s32)0xbf420000);
SET64(2, RD(2) | 0x8f5c);
c->f[14].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(3);
c->f[15].u = RW(2);
c->f[12].u = RW(0);
SET64(31, 0x2d0140); SET32(4, RW(29) + 112); F_0013E630(c);
SET64(5, RD(16) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x2d0150); SET32(4, RW(29) + 192); F_001A7F70(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(29) + 192);
SET64(31, 0x2d0160); SET64(6, RD(0) + RD(0)); F_001A7F20(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2d0170); SET64(6, RD(0) + RD(0)); F_001A7EE0(c);
SET64(3, (s64)(s32)0x3ecc0000);
SET64(2, (s64)(s32)0x3f800000);
SET64(3, RD(3) | 0xcccd);
SET32(4, RW(29) + 96);
c->f[12].u = RW(3);
c->f[15].u = RW(2);
c->f[13].u = c->f[12].u;
SET64(31, 0x2d0194); c->f[14].u = c->f[12].u; F_0013E630(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2d01a0); SET32(4, RW(29) + 144); F_001A7E80(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2d01ac); SET32(5, RW(29) + 144); F_001A7E50(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2d01b8); SET32(5, RW(0) + 1); F_001A7E20(c);
SET32(4, RW(29) + 144);
SET64(31, 0x2d01c4); SET32(5, RW(0) + -1); F_0017EAB0(c);
SET32(4, RW(29) + 192);
SET64(31, 0x2d01d0); SET32(5, RW(0) + -1); F_00177FB0(c);
SET64(3, (s64)(s32)0x3f000000);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, (s32)rd32(c, (RW(17) + 116)));
SET32(6, RW(0) + 1);
wr32(c, (RW(29) + 380), RW(2));
SET32(5, RW(29) + 384);
wr32(c, (RW(29) + 368), RW(3));
wr32(c, (RW(29) + 372), RW(3));
wr32(c, (RW(29) + 376), RW(3));
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr8(c, (RW(4) + 228), (u8)RW(6));
wr128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(17) + 116)));
SET64(2, (s32)rd32(c, (RW(2) + 1424)));
SET64(25, (s32)rd32(c, (RW(2) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d0218); SET32(4, RW(2) + 32); rt_call(c, t); }
SET64(3, (s64)(s32)0x3f000000);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 364), RW(2));
SET32(5, RW(29) + 384);
wr32(c, (RW(29) + 352), RW(3));
wr32(c, (RW(29) + 356), RW(3));
wr32(c, (RW(29) + 360), RW(3));
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(17) + 116)));
SET64(2, (s32)rd32(c, (RW(2) + 1424)));
SET64(25, (s32)rd32(c, (RW(2) + 336)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d0254); SET32(4, RW(2) + 304); rt_call(c, t); }
SET64(31, 0x2d025c); SET32(4, RW(0) + 1552); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D030C; }
SET32(6, RW(0) + 10);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 8192);
SET64(7, RD(6) + RD(0));
SET64(31, 0x2d027c); SET64(8, RD(6) + RD(0)); F_00161C20(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -20784);
SET32(3, RW(3) + -20768);
wr32(c, (RW(16) + 176), RW(2));
SET32(4, RW(16) + 1440);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 196), RW(3));
SET32(2, RW(2) + -20728);
SET64(31, 0x2d02a8); wr32(c, (RW(16) + 1072), RW(2)); F_00149480(c);
SET64(31, 0x2d02b0); SET32(4, RW(16) + 1456); F_00149480(c);
SET64(31, 0x2d02b8); SET32(4, RW(16) + 1472); F_00149480(c);
SET64(31, 0x2d02c0); SET32(4, RW(16) + 1488); F_00149480(c);
SET64(31, 0x2d02c8); SET32(4, RW(16) + 1512); F_00178910(c);
wr32(c, (RW(16) + 1424), RW(0));
SET32(3, RW(0) + 8192);
wr8(c, (RW(16) + 1428), (u8)RW(0));
SET32(2, RW(0) + 10);
wr32(c, (RW(16) + 1524), RW(3));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1528), RW(2));
SET32(5, RW(0) + 1);
wr32(c, (RW(16) + 1532), RW(2));
SET64(31, 0x2d02f4); wr32(c, (RW(16) + 1536), RW(2)); F_001624B0(c);
wr32(c, (RW(16) + 1504), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1540), RW(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d030c); wr32(c, (RW(16) + 1432), RW(0)); F_00162490(c);
L_002D030C:;
wr32(c, (RW(17) + 120), RW(16));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 1544), RW(2));
SET64(31, 0x2d0320); SET32(4, RW(0) + 4); F_00100530(c);
wr32(c, (RW(16) + 1540), RW(2));
SET64(31, 0x2d032c); SET32(4, RW(0) + 496); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002D0384; }
SET32(5, RW(0) + 100);
SET64(4, RD(19) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x2d0348); SET64(7, RD(5) + RD(0)); F_002A36E0(c);
SET32(18, RW(19) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(18) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2d0360); wr32(c, (RW(19) + 240), RW(4)); F_002AB2A0(c);
SET64(31, 0x2d0368); SET32(4, RW(18) + 32); F_002A59A0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(18) + 240), RW(18));
SET32(2, RW(2) + -30800);
SET64(4, RD(19) + RD(0));
wr32(c, (RW(19) + 144), RW(2));
SET64(31, 0x2d0384); SET32(5, RW(19) + 272); F_002A35D0(c);
L_002D0384:;
SET64(2, (s32)rd32(c, (RW(16) + 1540)));
wr32(c, (RW(2) + 0), RW(19));
SET64(4, (s32)rd32(c, (RW(16) + 560)));
SET64(2, (s32)rd32(c, (RW(16) + 1540)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d03a0); SET64(6, (s32)rd32(c, (RW(4) + 16))); F_002AB090(c);
SET64(2, (s32)rd32(c, (RW(17) + 120)));
SET32(3, RW(0) + 1);
SET32(4, RW(0) + 84);
SET64(31, 0x2d03b4); wr8(c, (RW(2) + 228), (u8)RW(3)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D03C4; }
SET64(31, 0x2d03c4); SET64(4, RD(16) + RD(0)); F_00368530(c);
L_002D03C4:;
wr32(c, (RW(17) + 184), RW(16));
SET64(5, (s32)rd32(c, (RW(17) + 104)));
SET64(6, (s32)rd32(c, (RW(17) + 120)));
SET64(31, 0x2d03d8); SET64(4, RD(16) + RD(0)); F_00368520(c);
SET64(4, (s32)rd32(c, (RW(17) + 184)));
SET64(31, 0x2d03e4); SET32(5, RW(0) + 24); F_00368510(c);
SET64(5, (s32)rd32(c, (RW(17) + 184)));
SET64(31, 0x2d03f0); SET64(4, RD(17) + RD(0)); F_0013A470(c);
SET64(31, 0x2d03f8); SET32(4, RW(0) + 12); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D0408; }
SET64(31, 0x2d0408); SET64(4, RD(16) + RD(0)); F_00313AC0(c);
L_002D0408:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d0418); wr32(c, (RW(17) + 188), RW(16)); F_00313930(c);
SET64(31, 0x2d0420); SET32(4, RW(0) + 60); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D045C; }
SET64(31, 0x2d0430); SET64(4, RD(16) + RD(0)); F_00321210(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14480);
wr32(c, (RW(16) + 8), RW(2));
wr32(c, (RW(16) + 28), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 44), RW(0));
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 52), RW(0));
wr8(c, (RW(16) + 56), (u8)RW(0));
L_002D045C:;
wr32(c, (RW(17) + 60), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(5, (s32)rd32(c, (RW(17) + 104)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d0474); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET32(3, RW(0) + 1);
SET64(31, 0x2d0484); wr8(c, (RW(2) + 57), (u8)RW(3)); F_00139590(c);
SET64(31, 0x2d048c);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET32(5, RW(0) + 118);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2d04a4); SET64(6, RD(0) + RD(0)); F_001B6E20(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 184)));
L_002D04B4:;
SET32(2, RW(0) + 255);
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D2328; }
SET64(4, (s32)rd32(c, (RW(17) + 60)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2d04d8);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D2328; }
SET32(5, RW(0) + 5);
SET64(6, (s64)(s32)0x410000);
SET32(4, RW(17) + 64);
SET32(6, RW(6) + 7648);
SET64(7, RD(5) + RD(0));
SET64(8, RD(0) + RD(0));
SET32(9, RW(0) + 1);
SET64(31, 0x2d0504); wr32(c, (RW(17) + 100), RW(0)); F_0031F810(c);
SET64(31, 0x2d050c); SET32(4, RW(0) + 160); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D051C; }
SET64(31, 0x2d051c); SET64(4, RD(16) + RD(0)); F_0030FEE0(c);
L_002D051C:;
wr32(c, (RW(17) + 124), RW(16));
SET64(2, (s64)(s32)0x47af0000);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
SET64(2, RD(2) | 0xc800);
c->f[12].u = RW(2);
SET64(6, (s64)(s32)0x410000);
SET64(7, (s64)(s32)0x410000);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
SET32(6, RW(6) + 6816);
SET32(7, RW(7) + 7440);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d0554); SET32(8, RW(0) + -1); F_0030FCB0(c);
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(31, 0x2d0560); SET64(4, (s32)rd32(c, (RW(2) + 52))); F_002DA670(c);
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET64(7, RD(2) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2d0574); SET32(6, RW(0) + 3); F_0030E580(c);
SET64(5, (s32)rd32(c, (RW(17) + 112)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 124))); goto L_002D0588; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 124)));
L_002D0588:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2d0598);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d05b0); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(31, 0x2d05b8); SET32(4, RW(0) + 224); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D05CC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d05cc); SET32(5, RW(0) + 1); F_0014BAD0(c);
L_002D05CC:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 4);
SET64(31, 0x2d05dc); wr32(c, (RW(17) + 132), RW(16)); F_0014B840(c);
SET64(2, (s64)(s32)0x47af0000);
SET64(2, RD(2) | 0xc780);
c->f[12].u = RW(2);
SET64(31, 0x2d05f0); SET64(4, (s32)rd32(c, (RW(17) + 132))); F_0014E7A0(c);
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(7, (s64)(s32)0x41800000);
SET64(6, (s64)(s32)0x42880000);
SET64(5, (s64)(s32)0x43080000);
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 0), RW(7));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 4), RW(7));
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 8), RW(7));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 12), RW(6));
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 16), RW(5));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 20), RW(7));
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 24), RW(5));
SET64(3, (s32)rd32(c, (RW(4) + 160)));
wr32(c, (RW(3) + 28), RW(6));
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(3, rd16(c, (RW(4) + 168)));
{ int t = RSD(3) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_002D0698; }
SET64(6, (s64)(s32)0x540000);
SET32(6, RW(6) + -25632);
L_002D0664:;
SET64(3, RD(2) & 0xffff);
rd128(c, (RW(6) + 0) & ~15u, &c->r[5]);
SET32(4, RW(3) << 4);
SET32(2, RW(2) + 1);
SET64(3, (s32)rd32(c, (RW(17) + 132)));
SET64(3, (s32)rd32(c, (RW(3) + 164)));
SET32(3, RW(3) + RW(4));
wr128(c, (RW(3) + 0) & ~15u, &c->r[5]);
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(3, rd16(c, (RW(4) + 168)));
SET64(3, RSD(2) < RSD(3));
{ int t = RD(3) != RD(0); SET32(6, RW(6) + 16); if (t) { POLL(); goto L_002D0664; } }
L_002D0698:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d06a8);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(17) + 112)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 132))); goto L_002D06BC; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 132)));
L_002D06BC:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2d06cc);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d06e4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, 0x2d06ec); SET32(4, RW(0) + 128); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D06FC; }
SET64(31, 0x2d06fc); SET64(4, RD(16) + RD(0)); F_00311150(c);
L_002D06FC:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d0708); wr32(c, (RW(17) + 128), RW(16)); F_00311050(c);
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d0718); SET64(4, (s32)rd32(c, (RW(2) + 4))); F_00321A60(c);
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2d072c); SET64(7, RD(0) + RD(0)); F_00310D60(c);
SET64(3, (s64)(s32)0x44000000);
SET64(2, (s64)(s32)0x42800000);
c->f[12].u = RW(3);
c->f[13].u = RW(2);
SET64(31, 0x2d0744); SET64(4, (s32)rd32(c, (RW(17) + 128))); F_00310B20(c);
SET64(2, (s64)(s32)0x43b00000);
c->f[12].u = RW(0);
c->f[13].u = RW(2);
SET64(31, 0x2d0758); SET64(4, (s32)rd32(c, (RW(17) + 128))); F_00310B90(c);
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(5, (s64)(s32)0x540000);
SET64(31, 0x2d0768); SET32(5, RW(5) + -25632); F_00310A20(c);
SET64(2, (s64)(s32)0x47c30000);
SET64(2, RD(2) | 0x5000);
c->f[12].u = RW(2);
SET64(31, 0x2d077c); SET64(4, (s32)rd32(c, (RW(17) + 128))); F_003109B0(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2d078c); SET64(4, (s32)rd32(c, (RW(17) + 128))); F_00310900(c);
SET64(31, 0x2d0794); SET64(4, (s32)rd32(c, (RW(17) + 128))); F_003108B0(c);
SET64(5, (s32)rd32(c, (RW(17) + 108)));
SET64(31, 0x2d07a0); SET64(4, (s32)rd32(c, (RW(17) + 128))); F_00310F10(c);
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d07ac); SET32(5, RW(0) + 1); F_00310850(c);
SET32(2, RW(0) + 256);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D07B8:;
SET64(31, 0x2d07c0); SET32(4, RW(17) + 64); F_0031F2B0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2d07cc); SET32(4, RW(17) + 64); F_0031F200(c);
SET64(5, (s32)rd32(c, (RW(17) + 100)));
SET64(31, 0x2d07d8); SET64(4, (s32)rd32(c, (RW(17) + 128))); F_00310D10(c);
SET64(31, 0x2d07e0); SET64(4, (s32)rd32(c, (RW(17) + 128))); F_003108B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET64(5, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d07f8); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d0810); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d081c); SET64(5, RD(0) + RD(0)); F_00310850(c);
SET64(3, (s32)rd32(c, (RW(17) + 184)));
SET32(4, RW(0) + 512);
SET64(2, (s64)(s32)0x3f800000);
SET32(5, RW(0) + 256);
c->f[12].u = RW(2);
wr16(c, (RW(3) + 0), (u16)RW(4));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(4, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d0844); c->f[13].u = c->f[12].u; F_0030CCB0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D0854:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d0860); SET32(4, RW(2) + 16); F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
L_002D0874:;
SET64(31, 0x2d087c);  F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d0888); SET32(5, RW(0) + -1); F_0013DFC0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2d0894); SET32(4, RW(17) + 64); F_0031F4B0(c);
SET64(16, (s32)rd32(c, (RW(17) + 100)));
SET64(31, 0x2d08a0); SET32(4, RW(17) + 64); F_0031F3F0(c);
{ int t = RD(16) == RD(2);  if (t) goto L_002D0914; }
SET64(4, (s32)rd32(c, (RW(17) + 188)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1);
SET32(7, RW(0) + 127);
SET64(31, 0x2d08c0); SET32(8, RW(0) + 64); F_00313770(c);
SET64(31, 0x2d08c8); SET32(4, RW(17) + 64); F_0031F3F0(c);
wr32(c, (RW(17) + 100), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d08d8); SET64(5, RD(2) + RD(0)); F_00310D10(c);
SET64(4, (s32)rd32(c, (RW(17) + 100)));
SET64(2, (s32)rd32(c, (RW(17) + 124)));
SET32(3, RW(4) << 2);
SET32(4, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET32(3, RW(4) << 2);
SET32(3, RW(4) + RW(3));
SET32(3, RW(3) << 1);
SET64(25, (s32)rd32(c, (RW(2) + 1928)));
SET32(3, RW(3) + 36);
SET32(4, RW(2) + 1920);
c->f[0].u = RW(3);
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2d0914); c->f[12].f = (f32)(s32)c->f[0].u; rt_call(c, t); }
L_002D0914:;
SET64(31, 0x2d091c);  F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d0928); SET32(5, RW(0) + -1); F_0013E020(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x4000);
{ int t = RD(2) == RD(0);  if (t) goto L_002D095C; }
SET64(4, (s32)rd32(c, (RW(17) + 188)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 2);
SET32(7, RW(0) + 127);
SET64(31, 0x2d0950); SET32(8, RW(0) + 64); F_00313770(c);
SET32(2, RW(0) + 512);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D09A0;
L_002D095C:;
SET64(31, 0x2d0964);  F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d0970); SET32(5, RW(0) + -1); F_0013E020(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x2000);
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x42700000); goto L_002D09A4; }
SET64(4, (s32)rd32(c, (RW(17) + 188)));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 3);
SET32(7, RW(0) + 127);
SET64(31, 0x2d0998); SET32(8, RW(0) + 64); F_00313770(c);
SET64(2, RD(0) | 0xff00);
wr16(c, (RW(17) + 0), (u16)RW(2));
L_002D09A0:;
SET64(2, (s64)(s32)0x42700000);
L_002D09A4:;
SET32(4, RW(17) + 180);
c->f[0].u = RW(2);
SET32(5, RW(0) + 1);
c->f[12].f = fpu_div(F(20), F(0));
SET64(31, 0x2d09c4);  F_0030CC50(c);
SET64(3, (s64)(s32)0x3fc00000);
SET64(2, (s64)(s32)0x3f000000);
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(17) + 176), c->f[0].u);
c->f[1].u = RW(2);
SET64(2, (s32)rd32(c, (RW(17) + 124)));
c->f[0].u = RW(0);
c->f[2].u = rd32(c, (RW(17) + 176));
c->facc = fpu(F(0) + F(1));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
c->f[12].f = fpu(c->facc + F(1) * F(2));
SET64(25, (s32)rd32(c, (RW(2) + 1928)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2d0a08); SET32(4, RW(2) + 1920); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 124)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 1928)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d0a20); SET32(4, RW(2) + 1920); rt_call(c, t); }
 goto L_002D2328;
L_002D0A28:;
wr32(c, (RW(17) + 172), c->f[0].u);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s64)(s32)0x40800000);
L_002D0A3C:;
SET32(4, RW(17) + 180);
c->f[0].u = RW(2);
SET32(5, RW(0) + 1);
c->f[12].f = fpu_div(F(20), F(0));
SET64(31, 0x2d0a5c);  F_0030CC50(c);
SET64(2, (s64)(s32)0x3fc00000);
c->f[1].u = RW(2);
c->f[0].f = fpu(F(1) * F(0));
wr32(c, (RW(17) + 176), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(17) + 124)));
c->f[12].u = rd32(c, (RW(17) + 176));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 1928)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2d0a8c); SET32(4, RW(2) + 1920); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 124)));
SET64(2, (s32)rd32(c, (RW(2) + 144)));
SET64(25, (s32)rd32(c, (RW(2) + 1928)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d0aa4); SET32(4, RW(2) + 1920); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(17) + 172));
SET64(2, (s64)(s32)0x42340000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(1) + F(20));
c->fcc = F(1) < F(0);
{ int t = c->fcc; wr32(c, (RW(17) + 172), c->f[1].u); if (t) goto L_002D2328; }
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET32(4, RW(17) + 64);
L_002D0AD4:;
SET64(31, 0x2d0adc);  F_0031F3F0(c);
SET32(3, RW(0) + 4);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 3072); goto L_002D0B3C; }
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 2816); goto L_002D0B34; }
SET32(3, RW(0) + 2);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 2560); goto L_002D0B2C; }
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 2304); goto L_002D0B24; }
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2048); goto L_002D0B1C; }
 goto L_002D2328;
L_002D0B1C:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D0B24:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D0B2C:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D0B34:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D0B3C:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D0B44:;
SET64(31, 0x2d0b4c);  F_00100320(c);
SET64(6, RD(0) + RD(0));
SET64(18, RD(2) + RD(0));
SET32(3, RW(6) << 1);
SET32(2, RW(6) << 2);
SET32(3, RW(3) + RW(6));
SET64(9, RD(0) + RD(0));
SET32(8, RW(3) << 2);
SET64(16, RD(0) + RD(0));
SET32(7, RW(18) + RW(2));
SET32(4, RW(0) + 2);
SET32(3, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D0B7C:;
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 32)));
SET32(2, RW(2) + RW(8));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) != RD(5);  if (t) goto L_002D0BB0; }
wr32(c, (RW(7) + 0), RW(4));
SET64(2, (s32)rd32(c, (RW(17) + 152)));
{ int t = RD(2) != RD(6);  if (t) goto L_002D0BA8; }
SET64(9, RD(16) + RD(0));
L_002D0BA8:;
SET32(16, RW(16) + 1); goto L_002D0BB8;
L_002D0BB0:;
wr32(c, (RW(7) + 0), RW(3));
SET32(16, RW(16) + 1);
L_002D0BB8:;
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < (s64)56);
SET32(8, RW(8) + 12);
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 4); if (t) { POLL(); goto L_002D0B7C; } }
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 5);
SET32(6, RW(0) + 56);
SET64(7, RD(18) + RD(0));
SET32(8, RW(0) + 8);
SET64(31, 0x2d0be8); SET32(10, RW(0) + 1); F_002CF600(c);
SET64(31, 0x2d0bf0); SET64(4, RD(18) + RD(0)); F_001004B0(c);
SET64(2, (s64)(s32)0x41a00000);
SET64(3, (s64)(s32)0x42600000);
wr32(c, (RW(29) + 320), RW(2));
SET64(2, (s64)(s32)0x48120000);
wr32(c, (RW(29) + 324), RW(3));
SET64(2, RD(2) | 0x7c40);
wr32(c, (RW(29) + 328), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 332), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2d0c28); SET32(5, RW(29) + 320); rt_call(c, t); }
SET64(31, 0x2d0c30); SET64(4, (s32)rd32(c, (RW(17) + 136))); F_00228570(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 108))); goto L_002D0C44; }
SET64(31, 0x2d0c40); SET64(4, RD(2) + RD(0)); F_0022A4B0(c);
SET64(5, (s32)rd32(c, (RW(17) + 108)));
L_002D0C44:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D0C54; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D0C54:;
SET64(31, 0x2d0c5c);  F_002284F0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D0C6C:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d0c7c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D0D00; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d0c9c); SET64(18, RD(0) + RD(0)); F_00311B10(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D0D00; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D0CAC:;
SET32(2, RW(2) + RW(16));
SET64(31, 0x2d0cb8); SET64(4, (s32)rd32(c, (RW(2) + 12))); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002D0CE0; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d0cdc);  rt_call(c, t); }
L_002D0CE0:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET32(16, RW(16) + 384);
SET64(31, 0x2d0cf0); SET32(18, RW(18) + 1); F_00311B10(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D0CAC; } }
L_002D0D00:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); goto L_002D0D30; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d0d1c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D0D2C; }
SET64(2, RD(0) + RD(0)); goto L_002D0D9C;
L_002D0D2C:;
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D0D30:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D0D98; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d0d44); SET64(18, RD(0) + RD(0)); F_00311B10(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D0D98; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D0D54:;
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d0d6c);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D0D7C; }
SET64(2, RD(0) + RD(0)); goto L_002D0D9C;
L_002D0D7C:;
SET32(16, RW(16) + 384);
SET64(31, 0x2d0d88); SET32(18, RW(18) + 1); F_00311B10(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D0D54; } }
L_002D0D98:;
SET64(2, RD(0) + (s64)1);
L_002D0D9C:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
{ int t = RD(4) == RD(0); SET64(16, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002D0DC0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d0dc0); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002D0DC0:;
wr32(c, (RW(17) + 136), RW(0));
SET64(31, 0x2d0dcc); SET64(4, (s32)rd32(c, (RW(17) + 144))); F_00100430(c);
wr32(c, (RW(17) + 144), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 140)));
SET64(31, 0x2d0de0); SET32(5, RW(5) + -7552); F_001022C0(c);
{ int t = RSD(16) >= 0; wr32(c, (RW(17) + 140), RW(0)); if (t) goto L_002D0DF4; }
SET32(2, RW(0) + 258);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D0DF4:;
wr32(c, (RW(17) + 152), RW(16));
SET64(2, (s64)(s32)0x3f000000);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(31, 0x2d0e18); SET32(5, RW(0) + 257); F_0030CCB0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D0E28:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d0e34); SET32(4, RW(2) + 16); F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d0e54); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d0e6c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d0e78); SET32(5, RW(0) + 1); F_00310850(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET32(4, RW(0) + 96);
L_002D0E88:;
SET64(31, 0x2d0e90);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D0EDC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d0ea4); SET32(5, RW(0) + 1536); F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14064);
SET32(3, RW(3) + -14056);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -14044);
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 80), RW(0));
L_002D0EDC:;
wr32(c, (RW(17) + 96), RW(16));
SET64(3, (s32)rd32(c, (RW(17) + 188)));
SET64(2, (s32)rd32(c, (RW(17) + 112)));
wr32(c, (RW(16) + 84), RW(2));
wr32(c, (RW(16) + 92), RW(3));
SET64(5, (s32)rd32(c, (RW(17) + 152)));
SET64(3, (s32)rd32(c, (RW(17) + 96)));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
wr32(c, (RW(3) + 88), RW(2));
wr32(c, (RW(3) + 64), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 96)));
SET64(31, 0x2d0f10); SET64(4, RD(17) + RD(0)); F_0013A470(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
L_002D0F20:;
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D2328; }
SET64(2, (s32)rd32(c, (RW(4) + 60)));
wr32(c, (RW(17) + 152), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 96), RW(0)); goto L_002D0F58; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d0f54); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
L_002D0F58:;
SET32(2, RW(0) + 768);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D0F64:;
SET64(31, 0x2d0f6c);  F_00100320(c);
SET64(7, RD(0) + RD(0));
SET64(16, RD(2) + RD(0));
SET32(3, RW(7) << 1);
SET32(2, RW(7) << 2);
SET32(3, RW(3) + RW(7));
SET64(9, RD(0) + RD(0));
SET32(10, RW(3) << 2);
SET64(6, RD(0) + RD(0));
SET32(8, RW(16) + RW(2));
SET32(4, RW(0) + 2);
SET32(3, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D0F9C:;
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 36)));
SET32(2, RW(2) + RW(10));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) != RD(5);  if (t) goto L_002D0FD0; }
wr32(c, (RW(8) + 0), RW(4));
SET64(2, (s32)rd32(c, (RW(17) + 156)));
{ int t = RD(2) != RD(7);  if (t) goto L_002D0FC8; }
SET64(9, RD(6) + RD(0));
L_002D0FC8:;
SET32(6, RW(6) + 1); goto L_002D0FD8;
L_002D0FD0:;
wr32(c, (RW(8) + 0), RW(3));
SET32(6, RW(6) + 1);
L_002D0FD8:;
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < (s64)5);
SET32(10, RW(10) + 12);
{ int t = RD(2) != RD(0); SET32(8, RW(8) + 4); if (t) { POLL(); goto L_002D0F9C; } }
SET32(6, RW(0) + 5);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 62);
SET64(7, RD(16) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(31, 0x2d1008); SET32(10, RW(0) + 1); F_002CF600(c);
SET64(31, 0x2d1010); SET64(4, RD(16) + RD(0)); F_001004B0(c);
SET64(2, (s64)(s32)0x41a00000);
SET64(3, (s64)(s32)0x42600000);
wr32(c, (RW(29) + 304), RW(2));
SET64(2, (s64)(s32)0x48120000);
wr32(c, (RW(29) + 308), RW(3));
SET64(2, RD(2) | 0x7c40);
wr32(c, (RW(29) + 312), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 316), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2d1048); SET32(5, RW(29) + 304); rt_call(c, t); }
SET64(31, 0x2d1050); SET64(4, (s32)rd32(c, (RW(17) + 136))); F_00228570(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 108))); goto L_002D1064; }
SET64(31, 0x2d1060); SET64(4, RD(2) + RD(0)); F_0022A4B0(c);
SET64(5, (s32)rd32(c, (RW(17) + 108)));
L_002D1064:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D1074; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D1074:;
SET64(31, 0x2d107c);  F_002284F0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D108C:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d109c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D1120; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d10bc); SET64(18, RD(0) + RD(0)); F_00311B10(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D1120; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D10CC:;
SET32(2, RW(2) + RW(16));
SET64(31, 0x2d10d8); SET64(4, (s32)rd32(c, (RW(2) + 12))); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002D1100; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d10fc);  rt_call(c, t); }
L_002D1100:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET32(16, RW(16) + 384);
SET64(31, 0x2d1110); SET32(18, RW(18) + 1); F_00311B10(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D10CC; } }
L_002D1120:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); goto L_002D1150; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d113c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D114C; }
SET64(2, RD(0) + RD(0)); goto L_002D11BC;
L_002D114C:;
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D1150:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D11B8; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d1164); SET64(18, RD(0) + RD(0)); F_00311B10(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D11B8; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D1174:;
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d118c);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D119C; }
SET64(2, RD(0) + RD(0)); goto L_002D11BC;
L_002D119C:;
SET32(16, RW(16) + 384);
SET64(31, 0x2d11a8); SET32(18, RW(18) + 1); F_00311B10(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D1174; } }
L_002D11B8:;
SET64(2, RD(0) + (s64)1);
L_002D11BC:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
{ int t = RD(4) == RD(0); SET64(16, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002D11E0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d11e0); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002D11E0:;
wr32(c, (RW(17) + 136), RW(0));
SET64(31, 0x2d11ec); SET64(4, (s32)rd32(c, (RW(17) + 144))); F_00100430(c);
wr32(c, (RW(17) + 144), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 140)));
SET64(31, 0x2d1200); SET32(5, RW(5) + -7552); F_001022C0(c);
{ int t = RSD(16) >= 0; wr32(c, (RW(17) + 140), RW(0)); if (t) goto L_002D1214; }
SET32(2, RW(0) + 258);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D1214:;
wr32(c, (RW(17) + 156), RW(16));
SET64(2, (s64)(s32)0x3f000000);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(31, 0x2d1238); SET32(5, RW(0) + 257); F_0030CCB0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D1248:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d1254); SET32(4, RW(2) + 16); F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(2, (s32)rd32(c, (RW(17) + 120)));
SET32(5, RW(0) + 1);
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d127c); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d1294); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d12a0); SET32(5, RW(0) + 1); F_00310850(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET32(4, RW(0) + 92);
L_002D12B0:;
SET64(31, 0x2d12b8);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D1300; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d12cc); SET32(5, RW(0) + 1536); F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14176);
SET32(3, RW(3) + -14168);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -14156);
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 76), RW(0));
L_002D1300:;
wr32(c, (RW(17) + 96), RW(16));
SET64(3, (s32)rd32(c, (RW(17) + 188)));
SET64(2, (s32)rd32(c, (RW(17) + 112)));
wr32(c, (RW(16) + 84), RW(2));
wr32(c, (RW(16) + 88), RW(3));
SET64(5, (s32)rd32(c, (RW(17) + 156)));
SET64(3, (s32)rd32(c, (RW(17) + 96)));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
wr32(c, (RW(3) + 80), RW(2));
wr32(c, (RW(3) + 64), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 96)));
SET64(31, 0x2d1334); SET64(4, RD(17) + RD(0)); F_0013A470(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
L_002D1344:;
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D2328; }
SET64(2, (s32)rd32(c, (RW(4) + 60)));
wr32(c, (RW(17) + 156), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 96), RW(0)); goto L_002D137C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d1378); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
L_002D137C:;
SET32(2, RW(0) + 768);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D1388:;
SET64(31, 0x2d1390);  F_00100320(c);
wr32(c, (RW(17) + 148), RW(2));
SET64(31, 0x2d139c); SET32(4, RW(0) + 176); F_00100320(c);
SET64(7, RD(0) + RD(0));
SET64(18, RD(2) + RD(0));
SET32(3, RW(7) << 1);
SET32(2, RW(7) << 2);
SET32(3, RW(3) + RW(7));
SET64(9, RD(0) + RD(0));
SET32(10, RW(3) << 2);
SET64(16, RD(0) + RD(0));
SET32(8, RW(18) + RW(2));
SET32(5, RW(0) + 2);
SET32(3, RW(0) + 1);
SET32(6, RW(0) + 3);
L_002D13CC:;
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 40)));
SET32(2, RW(2) + RW(10));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) != RD(6);  if (t) goto L_002D1410; }
wr32(c, (RW(8) + 0), RW(5));
SET32(4, RW(16) << 2);
SET64(2, (s32)rd32(c, (RW(17) + 148)));
SET32(2, RW(2) + RW(4));
wr32(c, (RW(2) + 0), RW(7));
SET64(2, (s32)rd32(c, (RW(17) + 160)));
{ int t = RD(2) != RD(7);  if (t) goto L_002D1408; }
SET64(9, RD(16) + RD(0));
L_002D1408:;
SET32(16, RW(16) + 1); goto L_002D1418;
L_002D1410:;
wr32(c, (RW(8) + 0), RW(3));
SET32(16, RW(16) + 1);
L_002D1418:;
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < (s64)44);
SET32(10, RW(10) + 12);
{ int t = RD(2) != RD(0); SET32(8, RW(8) + 4); if (t) { POLL(); goto L_002D13CC; } }
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 67);
SET32(6, RW(0) + 44);
SET64(7, RD(18) + RD(0));
SET32(8, RW(0) + 8);
SET64(31, 0x2d1448); SET32(10, RW(0) + 1); F_002CF600(c);
SET64(31, 0x2d1450); SET64(4, RD(18) + RD(0)); F_001004B0(c);
SET64(2, (s64)(s32)0x41a00000);
SET64(3, (s64)(s32)0x42600000);
wr32(c, (RW(29) + 288), RW(2));
SET64(2, (s64)(s32)0x48120000);
wr32(c, (RW(29) + 292), RW(3));
SET64(2, RD(2) | 0x7c40);
wr32(c, (RW(29) + 296), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 300), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2d1488); SET32(5, RW(29) + 288); rt_call(c, t); }
SET64(31, 0x2d1490); SET64(4, (s32)rd32(c, (RW(17) + 136))); F_00228570(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 108))); goto L_002D14A4; }
SET64(31, 0x2d14a0); SET64(4, RD(2) + RD(0)); F_0022A4B0(c);
SET64(5, (s32)rd32(c, (RW(17) + 108)));
L_002D14A4:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D14B4; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D14B4:;
SET64(31, 0x2d14bc);  F_002284F0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D14CC:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d14dc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D1560; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d14fc); SET64(19, RD(0) + RD(0)); F_00311B10(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D1560; }
SET64(18, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D150C:;
SET32(2, RW(2) + RW(18));
SET64(31, 0x2d1518); SET64(4, (s32)rd32(c, (RW(2) + 12))); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002D1540; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d153c);  rt_call(c, t); }
L_002D1540:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET32(18, RW(18) + 384);
SET64(31, 0x2d1550); SET32(19, RW(19) + 1); F_00311B10(c);
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D150C; } }
L_002D1560:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); goto L_002D1590; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d157c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D158C; }
SET64(2, RD(0) + RD(0)); goto L_002D15FC;
L_002D158C:;
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D1590:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D15F8; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d15a4); SET64(19, RD(0) + RD(0)); F_00311B10(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D15F8; }
SET64(18, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D15B4:;
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d15cc);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D15DC; }
SET64(2, RD(0) + RD(0)); goto L_002D15FC;
L_002D15DC:;
SET32(18, RW(18) + 384);
SET64(31, 0x2d15e8); SET32(19, RW(19) + 1); F_00311B10(c);
SET64(2, RSD(19) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D15B4; } }
L_002D15F8:;
SET64(2, RD(0) + (s64)1);
L_002D15FC:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(18, (s16)rd16(c, (RW(4) + 184)));
{ int t = RSD(18) < 0;  if (t) goto L_002D1624; }
SET64(2, (s32)rd32(c, (RW(17) + 148)));
SET32(3, RW(18) << 2);
SET32(2, RW(2) + RW(3));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
L_002D1624:;
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 136), RW(0)); goto L_002D1640; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d163c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 136), RW(0));
L_002D1640:;
SET64(31, 0x2d1648); SET64(4, (s32)rd32(c, (RW(17) + 144))); F_00100430(c);
wr32(c, (RW(17) + 144), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 140)));
SET64(31, 0x2d165c); SET32(5, RW(5) + -7552); F_001022C0(c);
wr32(c, (RW(17) + 140), RW(0));
SET64(31, 0x2d1668); SET64(4, (s32)rd32(c, (RW(17) + 148))); F_00100430(c);
{ int t = RSD(18) >= 0; wr32(c, (RW(17) + 148), RW(0)); if (t) goto L_002D167C; }
SET32(2, RW(0) + 258);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D167C:;
wr32(c, (RW(17) + 160), RW(16));
SET64(2, (s64)(s32)0x3f000000);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(31, 0x2d16a0); SET32(5, RW(0) + 257); F_0030CCB0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D16B0:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d16bc); SET32(4, RW(2) + 16); F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET32(5, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d16dc); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d16f4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d1700); SET32(5, RW(0) + 1); F_00310850(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET32(4, RW(0) + 100);
L_002D1710:;
SET64(31, 0x2d1718);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D1768; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d172c); SET32(5, RW(0) + 1536); F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14368);
SET32(3, RW(3) + -14360);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -14348);
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 76), RW(0));
wr32(c, (RW(16) + 72), RW(0));
wr32(c, (RW(16) + 80), RW(0));
L_002D1768:;
wr32(c, (RW(17) + 96), RW(16));
SET64(5, (s32)rd32(c, (RW(17) + 188)));
SET64(3, (s32)rd32(c, (RW(17) + 116)));
SET64(2, (s32)rd32(c, (RW(17) + 112)));
wr32(c, (RW(16) + 88), RW(2));
wr32(c, (RW(16) + 84), RW(3));
wr32(c, (RW(16) + 96), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 160)));
SET64(3, (s32)rd32(c, (RW(17) + 96)));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
wr32(c, (RW(3) + 92), RW(2));
wr32(c, (RW(3) + 64), RW(5));
SET64(5, (s32)rd32(c, (RW(17) + 96)));
SET64(31, 0x2d17a4); SET64(4, RD(17) + RD(0)); F_0013A470(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
L_002D17B4:;
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D2328; }
SET64(2, (s32)rd32(c, (RW(4) + 60)));
wr32(c, (RW(17) + 160), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 96), RW(0)); goto L_002D17EC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d17e8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
L_002D17EC:;
SET32(2, RW(0) + 768);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D17F8:;
SET64(31, 0x2d1800);  F_00100320(c);
SET64(6, RD(0) + RD(0));
SET64(16, RD(2) + RD(0));
SET32(3, RW(6) << 1);
SET32(2, RW(6) << 2);
SET32(3, RW(3) + RW(6));
SET32(7, RW(16) + RW(2));
SET32(8, RW(3) << 2);
SET32(4, RW(0) + 2);
SET32(3, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D1828:;
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 44)));
SET32(2, RW(2) + RW(8));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) != RD(5);  if (t) goto L_002D1848; }
wr32(c, (RW(7) + 0), RW(4)); goto L_002D1850;
L_002D1848:;
wr32(c, (RW(7) + 0), RW(3));
L_002D1850:;
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < (s64)8);
SET32(8, RW(8) + 12);
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 4); if (t) { POLL(); goto L_002D1828; } }
SET64(9, (s32)rd32(c, (RW(17) + 164)));
SET32(6, RW(0) + 8);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 111);
SET64(7, RD(16) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(31, 0x2d1884); SET32(10, RW(0) + 1); F_002CF600(c);
SET64(31, 0x2d188c); SET64(4, RD(16) + RD(0)); F_001004B0(c);
SET64(2, (s64)(s32)0x41a00000);
SET64(3, (s64)(s32)0x42600000);
wr32(c, (RW(29) + 272), RW(2));
SET64(2, (s64)(s32)0x48120000);
wr32(c, (RW(29) + 276), RW(3));
SET64(2, RD(2) | 0x7c40);
wr32(c, (RW(29) + 280), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 284), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2d18c4); SET32(5, RW(29) + 272); rt_call(c, t); }
SET64(31, 0x2d18cc); SET64(4, (s32)rd32(c, (RW(17) + 136))); F_00228570(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 108))); goto L_002D18E0; }
SET64(31, 0x2d18dc); SET64(4, RD(2) + RD(0)); F_0022A4B0(c);
SET64(5, (s32)rd32(c, (RW(17) + 108)));
L_002D18E0:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D18F0; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D18F0:;
SET64(31, 0x2d18f8);  F_002284F0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D1908:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d1918);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D1998; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d1938); SET64(18, RD(0) + RD(0)); F_00311B10(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D1998; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D1948:;
SET32(2, RW(2) + RW(16));
SET64(31, 0x2d1954); SET64(4, (s32)rd32(c, (RW(2) + 12))); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002D1978; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d1978);  rt_call(c, t); }
L_002D1978:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET32(16, RW(16) + 384);
SET64(31, 0x2d1988); SET32(18, RW(18) + 1); F_00311B10(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D1948; } }
L_002D1998:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); goto L_002D19C8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d19b4);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D19C4; }
SET64(2, RD(0) + RD(0)); goto L_002D1A34;
L_002D19C4:;
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D19C8:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D1A30; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d19dc); SET64(18, RD(0) + RD(0)); F_00311B10(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D1A30; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D19EC:;
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d1a04);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D1A14; }
SET64(2, RD(0) + RD(0)); goto L_002D1A34;
L_002D1A14:;
SET32(16, RW(16) + 384);
SET64(31, 0x2d1a20); SET32(18, RW(18) + 1); F_00311B10(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D19EC; } }
L_002D1A30:;
SET64(2, RD(0) + (s64)1);
L_002D1A34:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
{ int t = RD(4) == RD(0); SET64(16, (s16)rd16(c, (RW(4) + 184))); if (t) goto L_002D1A58; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d1a58); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002D1A58:;
wr32(c, (RW(17) + 136), RW(0));
SET64(31, 0x2d1a64); SET64(4, (s32)rd32(c, (RW(17) + 144))); F_00100430(c);
wr32(c, (RW(17) + 144), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 140)));
SET64(31, 0x2d1a78); SET32(5, RW(5) + -7552); F_001022C0(c);
{ int t = RSD(16) >= 0; wr32(c, (RW(17) + 140), RW(0)); if (t) goto L_002D1A8C; }
SET32(2, RW(0) + 258);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D1A8C:;
wr32(c, (RW(17) + 164), RW(16));
SET64(2, (s64)(s32)0x3f000000);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
c->f[13].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(31, 0x2d1ab0); SET32(5, RW(0) + 257); F_0030CCB0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D1AC0:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d1acc); SET32(4, RW(2) + 16); F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(2, (s32)rd32(c, (RW(17) + 120)));
SET32(5, RW(0) + 1);
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d1af4); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d1b0c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d1b18); SET32(5, RW(0) + 1); F_00310850(c);
SET64(31, 0x2d1b20);  F_00139590(c);
SET64(31, 0x2d1b28);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2d1b3c);  F_001B6E10(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET32(4, RW(0) + 72);
L_002D1B4C:;
SET64(31, 0x2d1b54);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D1B8C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d1b68); SET32(5, RW(0) + 1536); F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -14448);
SET32(3, RW(3) + -14440);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -14428);
wr32(c, (RW(16) + 36), RW(2));
L_002D1B8C:;
wr32(c, (RW(17) + 96), RW(16));
SET64(3, (s32)rd32(c, (RW(17) + 164)));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
wr32(c, (RW(16) + 68), RW(2));
wr32(c, (RW(16) + 60), RW(3));
SET64(5, (s32)rd32(c, (RW(17) + 96)));
SET64(31, 0x2d1bac); SET64(4, RD(17) + RD(0)); F_0013A470(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
L_002D1BBC:;
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D2328; }
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 96), RW(0)); goto L_002D1BE8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d1be4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
L_002D1BE8:;
SET32(2, RW(0) + 768);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D1BF4:;
SET64(31, 0x2d1bfc);  F_00100320(c);
SET64(6, RD(0) + RD(0));
SET64(16, RD(2) + RD(0));
SET32(3, RW(6) << 1);
SET32(2, RW(6) << 2);
SET32(3, RW(3) + RW(6));
SET32(7, RW(16) + RW(2));
SET32(8, RW(3) << 2);
SET32(4, RW(0) + 2);
SET32(3, RW(0) + 1);
SET32(5, RW(0) + 3);
L_002D1C24:;
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s32)rd32(c, (RW(2) + 48)));
SET32(2, RW(2) + RW(8));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) != RD(5);  if (t) goto L_002D1C48; }
wr32(c, (RW(7) + 0), RW(4)); goto L_002D1C50;
L_002D1C48:;
wr32(c, (RW(7) + 0), RW(3));
L_002D1C50:;
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < (s64)39);
SET32(8, RW(8) + 12);
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 4); if (t) { POLL(); goto L_002D1C24; } }
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 119);
SET32(6, RW(0) + 39);
SET64(7, RD(16) + RD(0));
SET32(8, RW(0) + 8);
SET64(9, RD(0) + RD(0));
SET64(31, 0x2d1c84); SET32(10, RW(0) + 1); F_002CF600(c);
SET64(31, 0x2d1c8c); SET64(4, RD(16) + RD(0)); F_00100430(c);
SET64(6, (s32)rd32(c, (RW(17) + 136)));
SET32(7, RW(0) + 1);
SET64(3, (s64)(s32)0x48120000);
SET64(5, (s64)(s32)0x41a00000);
SET64(4, (s64)(s32)0x42600000);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(6) + 181), (u8)RW(7));
SET64(3, RD(3) | 0x7c40);
wr32(c, (RW(29) + 256), RW(5));
wr32(c, (RW(29) + 260), RW(4));
wr32(c, (RW(29) + 264), RW(3));
wr32(c, (RW(29) + 268), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2d1cd0); SET32(5, RW(29) + 256); rt_call(c, t); }
SET64(31, 0x2d1cd8); SET64(4, (s32)rd32(c, (RW(17) + 136))); F_00228570(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(17) + 108))); goto L_002D1CEC; }
SET64(31, 0x2d1ce8); SET64(4, RD(2) + RD(0)); F_0022A4B0(c);
SET64(5, (s32)rd32(c, (RW(17) + 108)));
L_002D1CEC:;
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D1CFC; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D1CFC:;
SET64(31, 0x2d1d04);  F_002284F0(c);
SET64(31, 0x2d1d0c);  F_00139590(c);
SET64(31, 0x2d1d14);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2d1d28);  F_001B6E10(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 136)));
L_002D1D38:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d1d48);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D1E00; }
SET64(31, 0x2d1d58);  F_00139590(c);
SET64(31, 0x2d1d60);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2d1d74);  F_001B6E10(c);
SET64(2, (s32)rd32(c, (RW(17) + 140)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D1DF0; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d1d8c); SET64(18, RD(0) + RD(0)); F_00311B10(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D1DF0; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D1D9C:;
SET32(2, RW(2) + RW(16));
SET64(31, 0x2d1da8); SET64(4, (s32)rd32(c, (RW(2) + 12))); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002D1DD0; }
SET64(2, (s32)rd32(c, (RW(17) + 140)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d1dcc);  rt_call(c, t); }
L_002D1DD0:;
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET32(16, RW(16) + 384);
SET64(31, 0x2d1de0); SET32(18, RW(18) + 1); F_00311B10(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D1D9C; } }
L_002D1DF0:;
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D1E00:;
SET64(31, 0x2d1e08);  F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d1e14); SET32(5, RW(0) + -1); F_0013E020(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x4000);
{ int t = RD(2) == RD(0);  if (t) goto L_002D1EB4; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET32(2, RW(0) + 3);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
SET64(16, rd16(c, (RW(4) + 172)));
SET64(3, (s32)rd32(c, (RW(3) + 48)));
SET32(4, RW(16) << 1);
SET32(4, RW(4) + RW(16));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D2328; }
SET64(31, 0x2d1e5c);  F_00139590(c);
SET64(31, 0x2d1e64);  F_00139590(c);
SET64(3, (s64)(s32)0x410000);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET32(5, RW(16) << 2);
SET32(3, RW(3) + 7712);
SET32(3, RW(3) + RW(5));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2d1e8c); SET64(6, RD(0) + RD(0)); F_001B6E20(c);
SET64(3, (s32)rd32(c, (RW(17) + 136)));
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + -25552);
SET64(3, rd16(c, (RW(3) + 172)));
SET32(3, RW(3) + 175);
SET32(3, RW(2) + RW(3));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfb);
wr8(c, (RW(3) + 0), (u8)RW(2)); goto L_002D2328;
L_002D1EB4:;
SET64(31, 0x2d1ebc);  F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d1ec8); SET32(5, RW(0) + -1); F_0013E020(c);
SET64(2, RD(2) & 0xffff);
SET64(2, RD(2) & 0x1000);
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(31, 0x2d1ee0);  F_00139590(c);
SET64(31, 0x2d1ee8);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2d1efc);  F_001B6E10(c);
 goto L_002D2328;
L_002D1F04:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); goto L_002D1F30; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2d1f1c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D1F2C; }
SET64(2, RD(0) + RD(0)); goto L_002D1F9C;
L_002D1F2C:;
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D1F30:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D1F98; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
SET64(31, 0x2d1f44); SET64(18, RD(0) + RD(0)); F_00311B10(c);
{ int t = RSD(2) <= 0;  if (t) goto L_002D1F98; }
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 140)));
L_002D1F54:;
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d1f6c);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 136))); goto L_002D1F7C; }
SET64(2, RD(0) + RD(0)); goto L_002D1F9C;
L_002D1F7C:;
SET32(16, RW(16) + 384);
SET64(31, 0x2d1f88); SET32(18, RW(18) + 1); F_00311B10(c);
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 140))); { POLL(); goto L_002D1F54; } }
L_002D1F98:;
SET64(2, RD(0) + (s64)1);
L_002D1F9C:;
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(31, 0x2d1fac);  F_00139590(c);
SET64(31, 0x2d1fb4);  F_00139590(c);
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, rd16(c, (RW(2) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_002D2034; }
SET64(4, (s32)rd32(c, (RW(17) + 136)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 136), RW(0)); goto L_002D1FE4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d1fe0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 136), RW(0));
L_002D1FE4:;
SET64(31, 0x2d1fec); SET64(4, (s32)rd32(c, (RW(17) + 144))); F_00100430(c);
wr32(c, (RW(17) + 144), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 140)));
SET64(31, 0x2d2000); SET32(5, RW(5) + -7552); F_001022C0(c);
SET64(31, 0x2d2008); wr32(c, (RW(17) + 140), RW(0)); F_00139590(c);
SET64(31, 0x2d2010);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET32(5, RW(0) + 118);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2d2028); SET64(6, RD(0) + RD(0)); F_001B6E20(c);
SET32(2, RW(0) + 258);
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D2034:;
SET64(31, 0x2d203c);  F_00139590(c);
SET64(31, 0x2d2044);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2d2058);  F_001B6E10(c);
 goto L_002D2328;
L_002D2060:;
SET32(3, RW(0) + 1);
SET64(5, RD(0) + RD(0));
wr8(c, (RW(2) + 228), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2d2080); SET32(6, RW(0) + -1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d2098); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 128)));
SET64(31, 0x2d20a4); SET64(5, RD(0) + RD(0)); F_00310850(c);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(2, (s64)(s32)0x3f800000);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
c->f[13].u = RW(2);
SET64(31, 0x2d20c4); SET32(5, RW(0) + 256); F_0030CCB0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D20D4:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d20e0); SET32(4, RW(2) + 16); F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET32(4, RW(17) + 64);
L_002D20F8:;
SET64(31, 0x2d2100);  F_0031F3F0(c);
SET32(3, RW(0) + 4);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 3072); goto L_002D2188; }
SET32(3, RW(0) + 3);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 2816); goto L_002D2158; }
SET32(3, RW(0) + 2);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 2560); goto L_002D2150; }
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET32(2, RW(0) + 2304); goto L_002D2148; }
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2048); goto L_002D2140; }
 goto L_002D2328;
L_002D2140:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D2148:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D2150:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D2158:;
SET64(31, 0x2d2160); wr16(c, (RW(17) + 0), (u16)RW(2)); F_00139590(c);
SET64(31, 0x2d2168);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET32(5, RW(0) + 118);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2d2180); SET64(6, RD(0) + RD(0)); F_001B6E20(c);
 goto L_002D2328;
L_002D2188:;
wr16(c, (RW(17) + 0), (u16)RW(2)); goto L_002D2328;
L_002D2190:;
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(4, (s32)rd32(c, (RW(3) + 28)));
SET64(31, 0x2d21a4); SET32(5, RW(0) + 257); F_0030CCB0(c);
SET64(31, 0x2d21ac);  F_00139590(c);
SET64(31, 0x2d21b4);  F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 24)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2d21c8);  F_001B6E10(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D21D8:;
SET64(2, (s32)rd32(c, (RW(2) + 28)));
SET64(31, 0x2d21e4); SET32(4, RW(2) + 16); F_00172D40(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(4, (s32)rd32(c, (RW(17) + 124)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x2d2200);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 132)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d2214);  rt_call(c, t); }
SET64(31, 0x2d221c); SET64(4, (s32)rd32(c, (RW(17) + 128))); F_00310EB0(c);
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 57), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 184)));
wr8(c, (RW(2) + 72), (u8)RW(3));
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 124)));
L_002D2240:;
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2d2250);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d2270);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(31, 0x2d2280); SET64(4, (s32)rd32(c, (RW(17) + 128))); F_00310FD0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(3, (s32)rd32(c, (RW(17) + 184)));
SET32(2, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(3) + 48)));
{ int t = RD(3) != RD(2);  if (t) goto L_002D2328; }
SET64(31, 0x2d22a4); SET32(4, RW(17) + 64); F_0031F610(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D22B4:;
SET64(31, 0x2d22bc); SET64(4, (s32)rd32(c, (RW(2) + 28))); F_0030D170(c);
SET64(2, (s32)rd32(c, (RW(17) + 112)));
c->f[12].u = RW(0);
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 108)));
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(31, 0x2d22d8); SET64(4, (s32)rd32(c, (RW(17) + 188))); F_003136C0(c);
SET64(2, rd16(c, (RW(17) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(17) + 0), (u16)RW(2));
L_002D22E4:;
SET64(2, (s32)rd32(c, (RW(17) + 60)));
SET64(31, 0x2d22f0); SET64(4, (s32)rd32(c, (RW(2) + 28))); F_0030D140(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D2328; }
SET64(31, 0x2d2300);  F_00139590(c);
SET64(31, 0x2d2308);  F_00139590(c);
SET64(2, (s32)rd32(c, (RW(2) + 24)));
SET64(2, rd16(c, (RW(2) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_002D2328; }
SET64(31, 0x2d2320); SET64(4, RD(17) + RD(0)); F_002D2690(c);
SET64(31, 0x2d2328); SET64(4, RD(17) + RD(0)); F_00139AB0(c);
L_002D2328:;
SET64(4, (s32)rd32(c, (RW(17) + 128)));
L_002D232C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 124))); goto L_002D2340; }
SET64(31, 0x2d233c); c->f[12].u = c->f[20].u; F_00310F90(c);
SET64(4, (s32)rd32(c, (RW(17) + 124)));
L_002D2340:;
if (RD(4) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 60))); goto L_002D235C; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2d2358); c->f[12].u = c->f[20].u; rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 60)));
L_002D235C:;
if (RD(2) == RD(0)) { SET64(5, rd16(c, (RW(17) + 0))); goto L_002D237C; }
SET64(4, (s32)rd32(c, (RW(2) + 28)));
{ int t = RD(4) == RD(0);  if (t) goto L_002D2378; }
SET64(31, 0x2d2378); c->f[12].u = c->f[20].u; F_0030D1B0(c);
L_002D2378:;
SET64(5, rd16(c, (RW(17) + 0)));
L_002D237C:;
SET64(31, 0x2d2384); SET64(4, RD(17) + RD(0)); F_002CF400(c);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 400); return;
}
void F_002CFD30(Ctx *c) { B_002CFD30(c, 0x2cfd30); }
void F_002D0008(Ctx *c) { B_002CFD30(c, 0x2d0008); }
void F_002D0014(Ctx *c) { B_002CFD30(c, 0x2d0014); }
void F_002D0018(Ctx *c) { B_002CFD30(c, 0x2d0018); }
void F_002D001C(Ctx *c) { B_002CFD30(c, 0x2d001c); }
void F_002D0020(Ctx *c) { B_002CFD30(c, 0x2d0020); }
void F_002D002C(Ctx *c) { B_002CFD30(c, 0x2d002c); }
void F_002D0030(Ctx *c) { B_002CFD30(c, 0x2d0030); }
void F_002D0048(Ctx *c) { B_002CFD30(c, 0x2d0048); }
void F_002D0054(Ctx *c) { B_002CFD30(c, 0x2d0054); }
void F_002D0058(Ctx *c) { B_002CFD30(c, 0x2d0058); }
void F_002D006C(Ctx *c) { B_002CFD30(c, 0x2d006c); }

void F_002D23B0(Ctx *c) { /* func_002D23B0 */
ENTER(0x2d23b0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2d23e0);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002D266C; }
c->f[1].u = rd32(c, (RW(16) + 196));
c->f[0].u = rd32(c, (RW(16) + 272));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 32), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 200));
c->f[0].u = rd32(c, (RW(16) + 276));
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(16) + 36), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 236));
SET64(3, (s32)rd32(c, (RW(16) + 268)));
c->f[0].u = rd32(c, (RW(16) + 276));
c->f[3].u = rd32(c, (RW(16) + 232));
c->f[2].u = rd32(c, (RW(16) + 272));
SET64(2, RD(3) & 0x1);
c->f[5].f = fpu(F(1) - F(0));
c->f[0].u = rd32(c, (RW(16) + 208));
c->f[4].u = rd32(c, (RW(16) + 212));
{ int t = RD(2) == RD(0); c->f[2].f = fpu(F(3) - F(2)); if (t) goto L_002D243C; }
c->f[3].f = fpu(F(2) + F(0)); goto L_002D2444;
L_002D243C:;
c->f[3].u = c->f[2].u;
c->f[2].f = fpu(F(2) + F(0));
L_002D2444:;
c->f[0].u = rd32(c, (RW(16) + 244));
SET64(2, RD(3) & 0x2);
c->f[3].f = fpu(F(3) * F(0));
{ int t = RD(2) == RD(0); c->f[2].f = fpu(F(2) * F(0)); if (t) goto L_002D2460; }
c->f[1].f = fpu(F(5) + F(4)); goto L_002D2468;
L_002D2460:;
c->f[1].u = c->f[5].u;
c->f[5].f = fpu(F(5) + F(4));
L_002D2468:;
c->f[0].u = rd32(c, (RW(16) + 248));
SET64(2, (s32)rd32(c, (RW(16) + 160)));
SET64(4, RD(16) + RD(0));
c->f[1].f = fpu(F(1) * F(0));
wr32(c, (RW(2) + 0), c->f[3].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
c->f[0].f = fpu(F(5) * F(0));
wr32(c, (RW(2) + 4), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 8), c->f[3].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 12), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 16), c->f[2].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 20), c->f[1].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 24), c->f[2].u);
SET64(2, (s32)rd32(c, (RW(16) + 160)));
wr32(c, (RW(2) + 28), c->f[0].u);
c->f[1].u = rd32(c, (RW(16) + 204));
c->f[0].u = rd32(c, (RW(16) + 240));
SET64(31, 0x2d24c8); c->f[12].f = fpu(F(1) + F(0)); F_0014E7A0(c);
SET64(2, (s32)rd32(c, (RW(16) + 268)));
SET64(2, RD(2) & 0x100);
if (RD(2) == RD(0)) { c->f[1].u = rd32(c, (RW(16) + 216)); goto L_002D255C; }
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 112), RW(0));
wr32(c, (RW(29) + 124), RW(2));
SET64(18, RD(0) + RD(0));
wr32(c, (RW(29) + 116), RW(0));
SET64(17, RD(0) + RD(0));
wr32(c, (RW(29) + 120), RW(0));
L_002D24F4:;
c->f[0].u = rd32(c, (RW(16) + 228));
SET32(4, RW(29) + 112);
c->f[2].u = rd32(c, (RW(16) + 224));
c->f[1].u = rd32(c, (RW(16) + 220));
wr32(c, (RW(29) + 108), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 216));
wr32(c, (RW(29) + 104), c->f[2].u);
wr32(c, (RW(29) + 100), c->f[1].u);
wr32(c, (RW(29) + 96), c->f[0].u);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(16) + 280)));
SET64(31, 0x2d252c); SET32(5, RW(2) + RW(17)); F_002AD150(c);
SET64(3, (s32)rd32(c, (RW(16) + 164)));
SET64(2, RD(18) & 0xffff);
rd128(c, (RW(29) + 112) & ~15u, &c->r[5]);
SET32(4, RW(2) << 4);
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 16);
SET32(3, RW(3) + RW(4));
SET64(2, RSD(18) < (s64)4);
{ int t = RD(2) != RD(0); wr128(c, (RW(3) + 0) & ~15u, &c->r[5]); if (t) { POLL(); goto L_002D24F4; } }
 goto L_002D2660;
L_002D255C:;
SET64(3, rd16(c, (RW(16) + 168)));
c->f[0].u = rd32(c, (RW(16) + 252));
SET64(17, RD(0) + RD(0));
{ int t = RSD(3) <= 0; c->f[20].f = fpu(F(1) * F(0)); if (t) goto L_002D25A0; }
SET64(2, (s32)rd32(c, (RW(16) + 164)));
L_002D2574:;
SET64(3, RD(17) & 0xffff);
SET32(3, RW(3) << 4);
c->f[12].u = c->f[20].u;
SET64(31, 0x2d2588); SET32(4, RW(2) + RW(3)); F_00162D00(c);
SET64(3, rd16(c, (RW(16) + 168)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(3));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 164))); { POLL(); goto L_002D2574; } }
L_002D25A0:;
SET64(17, RD(0) + RD(0));
c->f[1].u = rd32(c, (RW(16) + 220));
c->f[0].u = rd32(c, (RW(16) + 256));
{ int t = RSD(3) <= 0; c->f[20].f = fpu(F(1) * F(0)); if (t) goto L_002D25E0; }
SET64(2, (s32)rd32(c, (RW(16) + 164)));
L_002D25B8:;
SET64(3, RD(17) & 0xffff);
SET32(3, RW(3) << 4);
c->f[12].u = c->f[20].u;
SET64(31, 0x2d25cc); SET32(4, RW(2) + RW(3)); F_00162CF0(c);
SET64(3, rd16(c, (RW(16) + 168)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(3));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 164))); { POLL(); goto L_002D25B8; } }
L_002D25E0:;
SET64(17, RD(0) + RD(0));
c->f[1].u = rd32(c, (RW(16) + 224));
c->f[0].u = rd32(c, (RW(16) + 260));
{ int t = RSD(3) <= 0; c->f[20].f = fpu(F(1) * F(0)); if (t) goto L_002D2620; }
SET64(2, (s32)rd32(c, (RW(16) + 164)));
L_002D25F8:;
SET64(3, RD(17) & 0xffff);
SET32(3, RW(3) << 4);
c->f[12].u = c->f[20].u;
SET64(31, 0x2d260c); SET32(4, RW(2) + RW(3)); F_00162CE0(c);
SET64(3, rd16(c, (RW(16) + 168)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(3));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 164))); { POLL(); goto L_002D25F8; } }
L_002D2620:;
SET64(17, RD(0) + RD(0));
c->f[1].u = rd32(c, (RW(16) + 228));
c->f[0].u = rd32(c, (RW(16) + 264));
{ int t = RSD(3) <= 0; c->f[20].f = fpu(F(1) * F(0)); if (t) goto L_002D2660; }
SET64(2, (s32)rd32(c, (RW(16) + 164)));
L_002D2638:;
SET64(3, RD(17) & 0xffff);
SET32(3, RW(3) << 4);
c->f[12].u = c->f[20].u;
SET64(31, 0x2d264c); SET32(4, RW(2) + RW(3)); F_00162CD0(c);
SET64(2, rd16(c, (RW(16) + 168)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 164))); { POLL(); goto L_002D2638; } }
L_002D2660:;
SET64(31, 0x2d2668); SET64(4, RD(16) + RD(0)); F_0014BE80(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_002D266C:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

