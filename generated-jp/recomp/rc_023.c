#include "r5900.h"
#include "functab.h"

void JP_F_0028C518(Ctx *c) { /* func_0028C518 */
ENTER(0x28c518);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(0) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(0) + RD(0));
wr64(c, (RW(29) + 72), RD(21));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 80), RD(22));
SET64(22, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 88), RD(31));
SET64(19, (s32)rd32(c, (RW(4) + 8052)));
SET64(20, (s32)rd32(c, (RW(19) + 0)));
L_0028C558:;
SET64(6, RD(16) + RD(0));
SET32(16, RW(16) + 1);
SET64(4, RD(20) + RD(0));
SET64(31, 0x28c56c); SET64(5, RD(29) + RD(0)); JP_F_00277250(c);
SET64(6, RSD(16) < (s64)3);
SET64(4, (s32)rd32(c, (RW(29) + 8)));
SET64(5, (s32)rd32(c, (RW(29) + 12)));
SET64(2, RSD(4) < RSD(18));
SET64(3, RSD(5) < RSD(17));
if (RD(2) == 0) SET64(18, RD(4));
{ int t = RD(6) != RD(0); if (RD(3) == 0) SET64(17, RD(5)); if (t) { POLL(); goto L_0028C558; } }
wr32(c, (RW(19) + 4), RW(17));
wr32(c, (RW(19) + 8), RW(18));
wr32(c, (RW(21) + 0), RW(18));
SET64(16, rd64(c, (RW(29) + 32)));
SET64(2, (s32)rd32(c, (RW(19) + 4)));
SET64(17, rd64(c, (RW(29) + 40)));
wr32(c, (RW(22) + 0), RW(2));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(22, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void JP_F_0028C5C8(Ctx *c) { /* func_0028C5C8 */
ENTER(0x28c5c8);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 56), RD(17));
SET32(17, RW(4) + 2316);
wr64(c, (RW(29) + 48), RD(16));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 64), RD(18));
wr64(c, (RW(29) + 72), RD(31));
SET64(18, (s32)rd32(c, (RW(4) + 8052)));
SET64(16, (s32)rd32(c, (RW(18) + 0)));
SET64(31, 0x28c5f4); SET64(4, RD(16) + RD(0)); JP_F_002771E8(c);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 12)));
SET32(5, RW(29) + 16);
{ int t = RSD(2) <= 0; SET32(6, RW(0) + 1); if (t) goto L_0028C60C; }
wr32(c, (RW(17) + 24), RW(2));
L_0028C60C:;
SET64(31, 0x28c614);  JP_F_00277250(c);
SET32(3, RW(0) + -1);
SET64(2, (s32)rd32(c, (RW(29) + 32)));
if (RD(2) != RD(3)) { wr32(c, (RW(17) + 28), RW(2)); goto L_0028C624; }
L_0028C624:;
SET64(2, (s32)rd32(c, (RW(17) + 36)));
if (RD(2) != RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 40))); goto L_0028C63C; }
SET64(2, (s32)rd32(c, (RW(18) + 8)));
wr32(c, (RW(17) + 36), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 40)));
L_0028C63C:;
{ int t = RD(2) != RD(3); SET64(16, rd64(c, (RW(29) + 48))); if (t) goto L_0028C64C; }
SET64(2, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(17) + 40), RW(2));
L_0028C64C:;
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0028C660(Ctx *c) { /* func_0028C660 */
ENTER(0x28c660);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28c674); SET64(16, RD(4) + RD(0)); JP_F_0028CC10(c);
SET64(5, RD(2) + RD(0));
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 1);
{ int t = RD(5) == RD(0); SET32(7, RW(16) + 3368); if (t) goto L_0028C700; }
SET64(6, (s32)rd32(c, (RW(16) + 8052)));
SET64(4, rd64(c, (RW(6) + 24)));
{ int t = RD(4) == RD(2); SET32(8, RW(16) + 2316); if (t) goto L_0028C700; }
SET64(2, rd64(c, (RW(5) + 32)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(2, RD(4) - RD(2));
{ int t = RD(3) != RD(0); wr64(c, (RW(7) + 344), RD(2)); if (t) goto L_0028C700; }
SET64(3, (s32)rd32(c, (RW(8) + 24)));
SET64(4, rd64(c, (RW(7) + 336)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
wr64(c, (RW(5) + 24), RD(4));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET64(3, rd64(c, (RW(6) + 16)));
SET32(2, RW(2) << 1);
wr32(c, (RW(5) + 4), RW(2));
wr64(c, (RW(5) + 32), RD(3));
SET64(4, (s32)rd32(c, (RW(8) + 28)));
wr32(c, (RW(5) + 8), RW(4));
SET64(2, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(5) + 12), RW(2));
SET64(3, (s32)rd32(c, (RW(6) + 8)));
wr32(c, (RW(5) + 16), RW(3));
SET64(2, (s32)rd32(c, (RW(6) + 44)));
wr32(c, (RW(5) + 40), RW(2));
SET64(3, (s32)rd32(c, (RW(6) + 48)));
wr32(c, (RW(5) + 44), RW(3));
L_0028C700:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028C710(Ctx *c) { /* func_0028C710 */
ENTER(0x28c710);
 return;
}

void JP_F_0028C718(Ctx *c) { /* func_0028C718 */
ENTER(0x28c718);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x28c740); SET64(19, RD(7) + RD(0)); JP_F_0028CC10(c);
SET64(16, RD(2) + RD(0));
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028C7B8; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028C7B8; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x28c764); SET64(5, RD(29) + RD(0)); JP_F_00277300(c);
SET64(5, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET32(2, RW(0) + 176);
SET64(3, RSD(7) < (s64)177);
SET64(4, (s32)rd32(c, (RW(29) + 12)));
if (RD(3) == 0) SET64(7, RD(2));
SET32(3, RW(16) + 48);
SET64(6, RD(7) + RD(0));
{ int t = RSD(4) <= 0; SET64(2, RD(3) + RD(0)); if (t) goto L_0028C798; }
wr32(c, (RW(3) + 352), RW(7)); goto L_0028C7AC;
L_0028C798:;
SET64(2, (s32)rd32(c, (RW(29) + 8)));
if (RSD(2) <= 0) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028C7B8; }
wr32(c, (RW(3) + 356), RW(7));
SET32(2, RW(16) + 224);
L_0028C7AC:;
SET64(31, 0x28c7b4); SET64(4, RD(2) + RD(0)); JP_F_00274E00(c);
SET64(16, rd64(c, (RW(29) + 32)));
L_0028C7B8:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0028C7D0(Ctx *c) { /* func_0028C7D0 */
ENTER(0x28c7d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET32(6, RW(29) + 4);
SET64(5, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 4892)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0028C834; }
SET64(31, 0x28c80c);  JP_F_00288838(c);
SET64(4, rd64(c, (RW(16) + 2432)));
SET64(31, 0x28c818); SET64(5, (s32)rd32(c, (RW(29) + 0))); JP_F_002889F0(c);
SET64(3, rd64(c, (RW(16) + 2440)));
SET64(4, rd64(c, (RW(16) + 2448)));
SET64(3, RD(18) + RD(3));
wr64(c, (RW(16) + 2432), RD(2));
SET64(4, RD(17) + RD(4));
wr64(c, (RW(16) + 2440), RD(3));
wr64(c, (RW(16) + 2448), RD(4));
L_0028C834:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028C850(Ctx *c) { /* func_0028C850 */
ENTER(0x28c850);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(16) + 8592);
wr64(c, (RW(29) + 8), RD(17));
SET64(4, RD(18) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28c878); wr32(c, (RW(16) + 8052), RW(18)); JP_F_0028C918(c);
SET64(31, 0x28c880);  JP_F_002777C8(c);
SET64(17, RD(2) + RD(0));
SET64(5, (s64)(s32)0xff000000);
SET64(6, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
{ int t = RD(17) != RD(0); SET64(5, RD(5) | 0xd08); if (t) goto L_0028C8B8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_0028C8B8:;
SET64(5, (s64)(s32)0x290000);
SET64(31, 0x28c8c4); SET32(5, RW(5) + -13920); JP_F_00277658(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028C8F8; }
SET64(31, 0x28c8d4);  JP_F_0028CA08(c);
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0xd09);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_0028C8F8:;
wr32(c, (RW(18) + 0), RW(17));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028C918(Ctx *c) { /* func_0028C918 */
ENTER(0x28c918);
SET64(2, (s64)(s32)0x7fff0000);
SET64(5, RD(4) + RD(0));
SET32(3, RW(0) + -1);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(0) + -1);
SET64(4, RD(4) >> 1);
wr32(c, (RW(5) + 40), RW(2));
wr64(c, (RW(5) + 24), RD(4));
SET32(7, RW(0) + 67);
wr32(c, (RW(5) + 56), RW(3));
SET32(6, RW(5) + 332);
wr32(c, (RW(5) + 0), RW(0));
wr32(c, (RW(5) + 4), RW(0));
wr32(c, (RW(5) + 8), RW(0));
wr64(c, (RW(5) + 16), RD(4));
wr32(c, (RW(5) + 32), RW(0));
wr32(c, (RW(5) + 36), RW(2));
wr32(c, (RW(5) + 44), RW(3));
wr32(c, (RW(5) + 48), RW(3));
wr32(c, (RW(5) + 52), RW(3));
wr32(c, (RW(5) + 60), RW(0));
L_0028C970:;
SET32(7, RW(7) + -1);
wr32(c, (RW(6) + 0), RW(0));
{ int t = RSD(7) >= 0; SET32(6, RW(6) + -4); if (t) { POLL(); goto L_0028C970; } }
SET32(2, RW(0) + -1);
wr32(c, (RW(5) + 336), RW(0));
wr32(c, (RW(5) + 344), RW(2));
wr32(c, (RW(5) + 340), RW(0)); return;
}

void JP_F_0028C9A0(Ctx *c) { /* func_0028C9A0 */
ENTER(0x28c9a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0028C9B8(Ctx *c) { /* func_0028C9B8 */
ENTER(0x28c9b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 8052)));
SET64(31, 0x28c9d4); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_0028CA08(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028C9F8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0xd0a);
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_0028C9F8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028CA08(Ctx *c) { /* func_0028CA08 */
ENTER(0x28ca08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00277968(c); return; }
}

void JP_F_0028CA20(Ctx *c) { /* func_0028CA20 */
ENTER(0x28ca20);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028CA28(Ctx *c) { /* func_0028CA28 */
ENTER(0x28ca28);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028CA30(Ctx *c) { /* func_0028CA30 */
ENTER(0x28ca30);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028CA38(Ctx *c) { /* func_0028CA38 */
ENTER(0x28ca38);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028CA40(Ctx *c) { /* func_0028CA40 */
ENTER(0x28ca40);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xd0b);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0028CA60(Ctx *c) { /* func_0028CA60 */
ENTER(0x28ca60);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xd0b);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0028CA80(Ctx *c) { /* func_0028CA80 */
ENTER(0x28ca80);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xd0b);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0028CAA0(Ctx *c) { /* func_0028CAA0 */
ENTER(0x28caa0);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xd0b);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_0028CAC0(Ctx *c) { /* func_0028CAC0 */
ENTER(0x28cac0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28cae0); SET64(17, RD(4) + RD(0)); JP_F_0028CC10(c);
SET64(16, RD(2) + RD(0));
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028CB4C; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028CB48; }
SET64(18, (s32)rd32(c, (RW(17) + 8052)));
SET64(31, 0x28cb04); SET64(4, RD(17) + RD(0)); JP_F_00289F60(c);
SET64(31, 0x28cb0c); SET64(4, RD(17) + RD(0)); JP_F_0028CB68(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x28cb20); SET32(19, RW(17) + 3368); JP_F_0028CB70(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028CB4C; }
SET64(4, (s32)rd32(c, (RW(16) + 40)));
SET64(3, rd64(c, (RW(16) + 24)));
wr32(c, (RW(18) + 44), RW(4));
wr64(c, (RW(19) + 336), RD(3));
SET64(4, (s32)rd32(c, (RW(16) + 44)));
SET64(3, rd64(c, (RW(16) + 32)));
wr32(c, (RW(18) + 48), RW(4));
wr64(c, (RW(18) + 16), RD(3));
L_0028CB48:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028CB4C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028CB68(Ctx *c) { /* func_0028CB68 */
ENTER(0x28cb68);
 return;
}

void JP_F_0028CB70(Ctx *c) { /* func_0028CB70 */
ENTER(0x28cb70);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
SET64(7, RD(29) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET32(16, RW(18) + 48);
wr64(c, (RW(29) + 48), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET32(8, RW(29) + 4);
wr64(c, (RW(29) + 56), RD(31));
SET64(17, (s32)rd32(c, (RW(5) + 0)));
SET64(5, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 352)));
SET64(31, 0x28cbb4); SET64(4, RD(17) + RD(0)); JP_F_00275490(c);
SET64(4, RD(17) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 356)));
SET32(5, RW(18) + 224);
SET64(7, RD(29) + RD(0));
SET32(8, RW(29) + 4);
SET64(31, 0x28cbd0); SET64(19, RD(2) + RD(0)); JP_F_00275490(c);
SET64(3, RD(2) + RD(0));
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(19) != RD(0); SET64(4, RD(20) + RD(0)); if (t) goto L_0028CBE8; }
{ int t = RD(3) == RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0028CBF4; }
L_0028CBE8:;
SET64(31, 0x28cbf0); SET64(5, RD(5) | 0xd0d); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 16)));
L_0028CBF4:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0028CC10(Ctx *c) { /* func_0028CC10 */
ENTER(0x28cc10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 13864)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028CC4C; }
SET64(31, 0x28cc34);  JP_F_0028CC60(c);
if (RSD(2) <= 0) { SET64(2, (s32)rd32(c, (RW(16) + 13864))); goto L_0028CC48; }
SET64(2, RD(0) + RD(0)); goto L_0028CC4C;
L_0028CC48:;
SET32(2, RW(2) + 2208);
L_0028CC4C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028CC60(Ctx *c) { /* func_0028CC60 */
ENTER(0x28cc60);
SET64(3, (s32)rd32(c, (RW(4) + 8052)));
SET64(2, (s32)rd32(c, (RW(3) + 32))); return;
}

void JP_F_0028CC70(Ctx *c) { /* func_0028CC70 */
ENTER(0x28cc70);
SET32(29, RW(29) + -16);
SET64(7, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET32(7, RW(7) + 432);
SET64(2, (s64)(s32)0x540000);
SET32(8, RW(0) + -64);
ldl(c, 3, (RW(4) + 7));
ldr(c, 3, (RW(4) + 0));
ldl(c, 5, (RW(4) + 15));
ldr(c, 5, (RW(4) + 8));
ldl(c, 6, (RW(4) + 23));
ldr(c, 6, (RW(4) + 16));
ldl(c, 9, (RW(4) + 31));
ldr(c, 9, (RW(4) + 24));
sdl(c, 3, (RW(7) + 7));
sdr(c, 3, (RW(7) + 0));
sdl(c, 5, (RW(7) + 15));
sdr(c, 5, (RW(7) + 8));
sdl(c, 6, (RW(7) + 23));
sdr(c, 6, (RW(7) + 16));
sdl(c, 9, (RW(7) + 31));
sdr(c, 9, (RW(7) + 24));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
wr32(c, (RW(7) + 32), RW(3));
SET32(4, RW(2) + 472);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 8);
SET64(2, (s32)rd32(c, (RW(7) + 16)));
SET64(3, (s32)rd32(c, (RW(7) + 32)));
SET32(2, RW(2) + 63);
SET32(3, RW(3) + 63);
SET64(2, RD(2) & RD(8));
SET64(3, RD(3) & RD(8));
wr32(c, (RW(7) + 16), RW(2));
SET64(31, 0x28cd00); wr32(c, (RW(7) + 32), RW(3)); JP_F_001273D0(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 480);
SET32(6, RW(0) + 64);
SET32(29, RW(29) + 16); { JP_F_001273D0(c); return; }
}

void JP_F_0028CD20(Ctx *c) { /* func_0028CD20 */
ENTER(0x28cd20);
SET64(2, (s64)(s32)0x540000);
SET64(9, RD(4) + RD(0));
SET32(2, RW(2) + 432);
SET64(3, (s64)(s32)0x540000);
ldl(c, 4, (RW(9) + 7));
ldr(c, 4, (RW(9) + 0));
ldl(c, 7, (RW(9) + 15));
ldr(c, 7, (RW(9) + 8));
ldl(c, 8, (RW(9) + 23));
ldr(c, 8, (RW(9) + 16));
ldl(c, 10, (RW(9) + 31));
ldr(c, 10, (RW(9) + 24));
sdl(c, 4, (RW(2) + 7));
sdr(c, 4, (RW(2) + 0));
sdl(c, 7, (RW(2) + 15));
sdr(c, 7, (RW(2) + 8));
sdl(c, 8, (RW(2) + 23));
sdr(c, 8, (RW(2) + 16));
sdl(c, 10, (RW(2) + 31));
sdr(c, 10, (RW(2) + 24));
SET64(4, (s32)rd32(c, (RW(9) + 32)));
SET32(11, RW(3) + 472);
wr32(c, (RW(2) + 32), RW(4));
SET64(8, RD(5) + RD(0));
wr32(c, (RW(2) + 32), RW(0));
SET64(7, RD(0) + RD(0));
wr32(c, (RW(2) + 16), RW(0));
SET32(10, RW(0) + -64);
L_0028CD90:;
SET32(4, RW(7) << 2);
SET32(7, RW(7) + 1);
SET32(3, RW(4) + RW(8));
SET32(4, RW(4) + RW(11));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(7) < (s64)2);
SET32(2, RW(2) + 63);
SET64(2, RD(2) & RD(10));
{ int t = RD(5) != RD(0); wr32(c, (RW(4) + 0), RW(2)); if (t) { POLL(); goto L_0028CD90; } }
SET64(2, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(9) + 28)));
SET32(5, RW(2) + 480);
SET64(7, RD(0) + RD(0));
SET32(10, RW(0) + -64);
SET64(9, RD(0) + RD(0));
L_0028CDD0:;
SET64(2, RSD(7) < RSD(4));
SET32(7, RW(7) + 1);
{ int t = RD(2) == RD(0); SET64(8, RSD(7) < (s64)16); if (t) goto L_0028CDF8; }
SET32(3, RW(9) + RW(6));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 63);
SET64(2, RD(2) & RD(10));
wr32(c, (RW(5) + 0), RW(2)); goto L_0028CDFC;
L_0028CDF8:;
wr32(c, (RW(5) + 0), RW(0));
L_0028CDFC:;
SET32(5, RW(5) + 4);
{ int t = RD(8) != RD(0); SET32(9, RW(9) + 4); if (t) { POLL(); goto L_0028CDD0; } }
 return;
}

void JP_F_0028CE10(Ctx *c) { /* func_0028CE10 */
ENTER(0x28ce10);
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

void JP_F_0028CEB0(Ctx *c) { /* func_0028CEB0 */
ENTER(0x28ceb0);
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

void JP_F_0028CF40(Ctx *c) { /* func_0028CF40 */
ENTER(0x28cf40);
SET32(29, RW(29) + -32);
SET64(3, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0028CFA0; }
SET64(31, 0x28cf70);  JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0028CF98; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x181);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_0028CF98:;
SET64(2, (s32)rd32(c, (RW(16) + 8120)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
L_0028CFA0:;
SET64(2, RD(17) ^ 0x5);
SET64(6, RD(0) + RD(0));
SET64(4, RD(3) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x28cfb8); if (RD(2) != 0) SET64(6, RD(18)); JP_F_0027AF90(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028CFE0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0xf12);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_0028CFE0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028CFF8(Ctx *c) { /* func_0028CFF8 */
ENTER(0x28cff8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET64(19, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(19) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028D064; }
SET32(16, RW(6) >> 2);
SET32(3, RW(0) + 16);
SET64(2, RD(16) < (u64)(s64)17);
if (RD(2) == 0) SET64(16, RD(3));
{ int t = RD(16) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_0028D060; }
SET64(17, RD(5) + RD(0));
SET64(5, RD(18) + RD(0));
L_0028D040:;
SET32(18, RW(18) + 1);
SET64(6, RD(17) + RD(0));
SET32(17, RW(17) + 4);
SET64(31, 0x28d054); SET64(4, RD(19) + RD(0)); JP_F_0027B0A8(c);
SET64(3, RSD(18) < RSD(16));
{ int t = RD(3) != RD(0); SET64(5, RD(18) + RD(0)); if (t) { POLL(); goto L_0028D040; } }
L_0028D060:;
SET64(2, RD(16) + RD(0));
L_0028D064:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028D080(Ctx *c) { /* func_0028D080 */
ENTER(0x28d080);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
SET64(18, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(18) == RD(0); SET64(19, RD(6) + RD(0)); if (t) goto L_0028D0D8; }
{ int t = RSD(19) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_0028D0D8; }
SET64(16, RD(5) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 0)));
L_0028D0B8:;
SET32(16, RW(16) + 4);
SET64(5, RD(17) + RD(0));
SET32(17, RW(17) + 1);
SET64(31, 0x28d0cc); SET64(4, RD(18) + RD(0)); JP_F_0027AF90(c);
SET64(3, RSD(17) < RSD(19));
if (RD(3) != RD(0)) { SET64(6, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_0028D0B8; } }
L_0028D0D8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028D0F8(Ctx *c) { /* func_0028D0F8 */
ENTER(0x28d0f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28d118); wr32(c, (RW(16) + 0), RW(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0028D140; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x182);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_0028D140:;
SET64(31, 0x28d148); SET64(4, RD(17) + RD(0)); JP_F_00292240(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028D168(Ctx *c) { /* func_0028D168 */
ENTER(0x28d168);
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
SET64(31, 0x28d19c); SET64(20, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(6, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(8, RD(18) + RD(0));
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x184); if (t) goto L_0028D1D8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_0028A8F8(c); return; }
L_0028D1D8:;
SET64(2, (s32)rd32(c, (RW(19) + 8120)));
SET64(5, RD(20) + RD(0));
SET64(31, 0x28d1e8); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00278DD8(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028D210(Ctx *c) { /* func_0028D210 */
ENTER(0x28d210);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28d23c); SET64(19, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x185); if (t) goto L_0028D270; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0028A8F8(c); return; }
L_0028D270:;
SET64(4, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0028D298(c); return; }
}

void JP_F_0028D298(Ctx *c) { /* func_0028D298 */
ENTER(0x28d298);
SET32(29, RW(29) + -16);
SET64(9, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(9) + 8120)));
{ int t = RD(5) == RD(0); SET32(8, RW(2) + 4096); if (t) goto L_0028D2C0; }
{ int t = RD(6) == RD(0);  if (t) goto L_0028D2C0; }
if (RD(7) != RD(0)) { SET64(2, (s32)rd32(c, (RW(9) + 44))); goto L_0028D2D0; }
L_0028D2C0:;
SET64(31, 0x28d2c8); SET64(4, RD(8) + RD(0)); JP_F_00291830(c);
SET64(2, RD(0) + RD(0)); goto L_0028D35C;
L_0028D2D0:;
SET32(2, RW(2) + 4);
SET64(2, RSD(6) < RSD(2));
if (RD(2) == RD(0)) { wr32(c, (RW(8) + 0), RW(5)); goto L_0028D2F8; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0xf1d);
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_0028D2F8:;
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
SET64(9, RSD(6) < (s64)17); goto L_0028D344;
L_0028D328:;
SET32(4, RW(4) + 1);
SET32(2, RW(2) + 16);
SET32(3, RW(8) + RW(2));
SET64(2, RD(3) + RD(0));
wr32(c, (RW(3) + 16), RW(0));
wr32(c, (RW(2) + 12), RW(5));
SET32(5, RW(5) + RW(7));
L_0028D344:;
SET32(2, RW(0) + 16);
if (RD(9) != 0) SET64(2, RD(6));
SET64(2, RSD(4) < RSD(2));
{ int t = RD(2) != RD(0); SET32(2, RW(4) << 3); if (t) { POLL(); goto L_0028D328; } }
SET64(2, RD(0) + RD(0));
L_0028D35C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028D368(Ctx *c) { /* func_0028D368 */
ENTER(0x28d368);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x28d378);  JP_F_00293430(c);
SET64(31, 0x28d380);  JP_F_0028D448(c);
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x540000); if (t) goto L_0028D3A8; }
L_0028D388:;
 { POLL(); goto L_0028D388; }
L_0028D3A8:;
SET32(4, RW(0) + 8);
SET64(31, 0x28d3b4); SET32(5, RW(5) + -16016); JP_F_0027A910(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0028D3F0; }
SET64(2, (s64)(s32)0xff030000);
SET64(3, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xff05);
SET64(5, (s64)(s32)0xff000000);
SET64(2, RD(4) ^ RD(2));
SET64(4, RD(0) + RD(0));
SET64(3, RD(3) | 0xf01);
SET64(5, RD(5) | 0xf13);
if (RD(2) != 0) SET64(5, RD(3));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_0028D3F0:;
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 432);
SET64(31, 0x28d404); SET32(6, RW(0) + 36); JP_F_001273D0(c);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 472);
SET64(5, RD(0) + RD(0));
SET64(31, 0x28d418); SET32(6, RW(0) + 8); JP_F_001273D0(c);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 480);
SET64(5, RD(0) + RD(0));
SET64(31, 0x28d42c); SET32(6, RW(0) + 64); JP_F_001273D0(c);
SET64(3, (s64)(s32)0x410000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(3) + 25448), RW(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028D448(Ctx *c) { /* func_0028D448 */
ENTER(0x28d448);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_0028D450(Ctx *c) { /* func_0028D450 */
ENTER(0x28d450);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x28d460);  JP_F_0027AD60(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028D470(Ctx *c) { /* func_0028D470 */
ENTER(0x28d470);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028D488(c); return; }
}

void JP_F_0028D488(Ctx *c) { /* func_0028D488 */
ENTER(0x28d488);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 5);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28d4a4); SET64(17, RD(4) + RD(0)); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028D508; }
SET64(31, 0x28d4b4);  JP_F_0028D630(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_0028D4C8; }
SET64(2, RD(0) + RD(0)); goto L_0028D508;
L_0028D4C8:;
SET64(31, 0x28d4d0);  JP_F_0028D520(c);
SET32(3, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(17) + 72)));
{ int t = RD(2) != RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_0028D4E8; }
SET64(31, 0x28d4e8);  JP_F_0028D590(c);
L_0028D4E8:;
SET64(31, 0x28d4f0); SET64(4, RD(17) + RD(0)); JP_F_0028D978(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28d4fc); SET64(16, RD(2) + RD(0)); JP_F_0028D648(c);
SET64(31, 0x28d504); SET64(4, RD(17) + RD(0)); JP_F_0028D8B0(c);
SET64(2, RD(16) + RD(0));
L_0028D508:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028D520(Ctx *c) { /* func_0028D520 */
ENTER(0x28d520);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 28);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28d538); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028D580; }
SET64(31, 0x28d548);  JP_F_0028A6A0(c);
SET32(6, RW(0) + 1);
SET64(3, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
{ int t = RD(3) == RD(0); SET32(5, RW(0) + 5); if (t) goto L_0028D570; }
{ int t = RSD(3) > 0; SET64(6, RD(0) + RD(0)); if (t) goto L_0028D570; }
SET32(2, RW(0) + -1);
{ int t = RD(3) == RD(2); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0028D584; }
L_0028D570:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028CF40(c); return; }
L_0028D580:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028D584:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028D590(Ctx *c) { /* func_0028D590 */
ENTER(0x28d590);
SET32(29, RW(29) + -64);
SET32(5, RW(0) + 93);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 56), RD(31));
SET64(17, (s32)rd32(c, (RW(16) + 8120)));
SET64(31, 0x28d5b8); SET64(18, (s32)rd32(c, (RW(17) + 0))); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 94);
SET64(31, 0x28d5c8); wr32(c, (RW(29) + 0), RW(2)); JP_F_00297980(c);
SET64(3, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
{ int t = RD(2) == RD(0); wr32(c, (RW(29) + 4), RW(3)); if (t) goto L_0028D614; }
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 192); if (t) goto L_0028D614; }
SET64(3, (s32)rd32(c, (RW(17) + 120)));
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028D618; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(31, 0x28d5fc); SET32(6, RW(29) + 16); JP_F_002790A0(c);
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_0028D618; }
SET32(2, RW(0) + 200);
SET32(3, RW(0) + 2);
wr32(c, (RW(17) + 120), RW(2));
wr32(c, (RW(17) + 116), RW(3));
L_0028D614:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0028D618:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0028D630(Ctx *c) { /* func_0028D630 */
ENTER(0x28d630);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8132)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002887C8(c); return; }
}

void JP_F_0028D648(Ctx *c) { /* func_0028D648 */
ENTER(0x28d648);
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
SET64(31, 0x28d67c); SET64(5, RD(18) + RD(0)); JP_F_00288788(c);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(19); SET64(5, RD(16) + RD(0)); if (t) goto L_0028D6D8; }
SET64(31, 0x28d690);  JP_F_00288788(c);
if (RD(2) != RD(19)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028D6DC; }
SET64(31, 0x28d6a0); SET64(4, RD(17) + RD(0)); JP_F_0028D6F8(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028D6D8; }
SET64(5, RD(18) + RD(0));
SET64(31, 0x28d6b4); SET32(6, RW(0) + 1); JP_F_00288768(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0028D888(c); return; }
L_0028D6D8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028D6DC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028D6F8(Ctx *c) { /* func_0028D6F8 */
ENTER(0x28d6f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28d70c); SET64(16, RD(4) + RD(0)); JP_F_00292220(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028D734; }
SET64(31, 0x28d71c);  JP_F_0028D758(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028D740; }
SET64(31, 0x28d72c);  JP_F_0028D7A0(c);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0028D744; }
L_0028D734:;
SET32(2, RW(0) + 1); goto L_0028D744;
L_0028D740:;
SET64(2, RD(0) + RD(0));
L_0028D744:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028D758(Ctx *c) { /* func_0028D758 */
ENTER(0x28d758);
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s32)rd32(c, (RW(5) + 2656)));
SET64(2, (s32)rd32(c, (RW(5) + 44)));
SET64(3, ~(RD(0) | RD(16)));
if (RD(3) == 0) SET64(16, RD(2));
SET64(5, RSD(2) < RSD(16));
SET64(31, 0x28d784); if (RD(5) != 0) SET64(16, RD(2)); JP_F_00292240(c);
SET64(2, RSD(2) < RSD(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void JP_F_0028D7A0(Ctx *c) { /* func_0028D7A0 */
ENTER(0x28d7a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET32(16, RW(18) + 120);
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(31));
SET64(19, (s32)rd32(c, (RW(18) + 8120)));
SET64(31, 0x28d7cc); SET64(17, (s32)rd32(c, (RW(19) + 0))); JP_F_0028E8F0(c);
SET32(3, RW(0) + 1);
if (RD(2) == RD(3)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0028D86C; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028D7F4; }
SET64(3, (s32)rd32(c, (RW(16) + 124)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028D868; }
SET64(4, RD(17) + RD(0));
L_0028D7F4:;
SET64(31, 0x28d7fc); SET64(5, RD(29) + RD(0)); JP_F_00278C30(c);
SET64(4, RD(18) + RD(0));
SET64(3, (s64)(s32)0x30000);
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET64(3, RD(3) | 0xffff);
SET32(5, RW(0) + 1);
{ int t = RD(6) == RD(3); SET32(2, RW(0) + 1); if (t) goto L_0028D868; }
SET64(31, 0x28d820);  JP_F_00288010(c);
SET64(4, RD(18) + RD(0));
SET64(3, (s32)rd32(c, (RW(19) + 276)));
SET32(5, RW(0) + 1);
SET64(6, RSD(2) < RSD(3));
{ int t = RD(6) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028D868; }
SET64(31, 0x28d840);  JP_F_0029A128(c);
SET64(4, RD(18) + RD(0));
SET64(17, RD(2) < (u64)(s64)1);
SET64(31, 0x28d850); SET64(5, RD(17) + RD(0)); JP_F_00288010(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x28d860); SET64(16, RD(2) + RD(0)); JP_F_00287FD0(c);
SET64(16, RSD(16) < RSD(2));
SET64(2, RD(16) < (u64)(s64)1);
L_0028D868:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0028D86C:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0028D888(Ctx *c) { /* func_0028D888 */
ENTER(0x28d888);
SET32(4, RW(4) + 3648);
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, (s32)rd32(c, (RW(4) + 36)));
SET64(2, RD(2) | 0xffff);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_0028D8A4; }
wr32(c, (RW(4) + 0), RW(2));
L_0028D8A4:;
 return;
}

void JP_F_0028D8B0(Ctx *c) { /* func_0028D8B0 */
ENTER(0x28d8b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28d8d0); SET32(18, RW(16) + 2384); JP_F_00292240(c);
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + -1);
{ int t = RD(17) == RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_0028D904; }
SET64(31, 0x28d8e8);  JP_F_00292220(c);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 1); if (t) goto L_0028D940; }
if (RD(17) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028D944; }
SET64(2, (s32)rd32(c, (RW(18) + 24)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028D944; }
L_0028D904:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x28d910); SET32(5, RW(0) + 1); JP_F_0028D958(c);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET32(5, RW(0) + 5);
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_0028D940; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_002977B8(c); return; }
L_0028D940:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028D944:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028D958(Ctx *c) { /* func_0028D958 */
ENTER(0x28d958);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8132)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002887A8(c); return; }
}

void JP_F_0028D978(Ctx *c) { /* func_0028D978 */
ENTER(0x28d978);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
SET64(4, RD(17) + RD(0));
L_0028D990:;
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET64(31, 0x28d9a0); SET32(7, RW(29) + 8); JP_F_0028D9F8(c);
SET64(4, RD(17) + RD(0));
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET32(8, RW(29) + 12); if (t) goto L_0028D9D4; }
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x28d9c0); SET64(7, (s32)rd32(c, (RW(29) + 8))); JP_F_0028E1A8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 12))); if (t) goto L_0028D9D4; }
if (RD(2) != RD(0)) { SET64(4, RD(17) + RD(0)); { POLL(); goto L_0028D990; } }
L_0028D9D4:;
SET64(31, 0x28d9dc); SET64(4, RD(17) + RD(0)); JP_F_002912F8(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028D9F8(Ctx *c) { /* func_0028D9F8 */
ENTER(0x28d9f8);
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
SET64(31, 0x28da40); SET64(5, RD(16) + RD(0)); JP_F_00287AD8(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 48))); goto L_0028DC1C; }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(3) == RD(0); SET32(5, RW(0) + 206); if (t) goto L_0028DC18; }
SET64(4, RD(29) + RD(0));
SET64(31, 0x28da60); SET32(6, RW(29) + 32); JP_F_0028DEE8(c);
SET64(5, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
{ int t = RD(5) == RD(2); SET64(3, (s32)rd32(c, (RW(29) + 32))); if (t) goto L_0028DAB8; }
{ int t = RD(5) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 12))); if (t) goto L_0028DA88; }
SET64(31, 0x28da80); SET64(4, RD(29) + RD(0)); JP_F_0028DDF8(c);
wr32(c, (RW(19) + 0), RW(2)); goto L_0028DAA0;
L_0028DA88:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) + -3);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(0));
wr32(c, (RW(19) + 0), RW(2));
L_0028DAA0:;
SET64(2, (s32)rd32(c, (RW(19) + 0)));
{ int t = RSD(2) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0028DC18; }
SET32(2, RW(0) + 1);
wr32(c, (RW(20) + 0), RW(2)); goto L_0028DC14;
L_0028DAB8:;
SET32(2, RW(0) + 4);
wr32(c, (RW(19) + 0), RW(2));
SET64(2, RD(0) + RD(0));
SET64(4, RD(3) & 0x80);
{ int t = RD(4) != RD(0); wr32(c, (RW(18) + 0), RW(3)); if (t) goto L_0028DC18; }
SET64(5, RD(16) + RD(0));
SET32(6, RW(29) + 36);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28dae4); SET32(7, RW(29) + 40); JP_F_00287EF8(c);
SET64(5, (s32)rd32(c, (RW(29) + 32)));
SET64(4, RD(29) + RD(0));
SET64(31, 0x28daf4); SET64(6, (s32)rd32(c, (RW(29) + 36))); JP_F_0028DC38(c);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 12))); if (t) goto L_0028DB54; }
{ int t = RD(3) != RD(0); wr32(c, (RW(29) + 36), RW(0)); if (t) goto L_0028DB18; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(3, RW(3) + RW(2)); goto L_0028DB20;
L_0028DB18:;
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET32(3, RW(2) + RW(3));
L_0028DB20:;
SET64(2, (s32)rd32(c, (RW(29) + 40)));
{ int t = RD(2) == RD(3); SET64(4, RD(29) + RD(0)); if (t) goto L_0028DB54; }
SET32(5, RW(0) + 204);
SET32(6, RW(29) + 44);
SET64(31, 0x28db3c); wr32(c, (RW(29) + 40), RW(3)); JP_F_0028E040(c);
SET64(4, RD(17) + RD(0));
SET64(7, (s32)rd32(c, (RW(29) + 40)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x28db54); wr32(c, (RW(29) + 36), RW(2)); JP_F_00287F68(c);
L_0028DB54:;
SET64(4, (s32)rd32(c, (RW(29) + 36)));
{ int t = RD(4) == RD(0);  if (t) goto L_0028DBEC; }
SET64(31, 0x28db68);  JP_F_002779B8(c);
SET64(4, RD(2) + RD(0));
SET32(2, RW(0) + 8);
SET64(3, RD(4) + RD(0));
{ int t = RD(3) == RD(2); wr32(c, (RW(29) + 44), RW(4)); if (t) goto L_0028DBA0; }
SET64(2, RSD(3) < (s64)9);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 64); if (t) goto L_0028DC00; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET64(2, (s32)rd32(c, (RW(29) + 36))); if (t) goto L_0028DBB8; }
SET64(5, RD(2) + RD(0)); goto L_0028DC08;
L_0028DBA0:;
SET64(2, (s32)rd32(c, (RW(29) + 32)));
SET64(2, RD(2) & 0x40);
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 8); if (t) goto L_0028DC00; }
SET64(4, RD(29) + RD(0)); goto L_0028DBCC;
L_0028DBB8:;
SET64(2, (s32)rd32(c, (RW(29) + 32)));
SET64(2, RD(2) & 0x48);
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 4); if (t) goto L_0028DC00; }
SET64(4, RD(29) + RD(0));
L_0028DBCC:;
SET64(31, 0x28dbd4); SET32(6, RW(29) + 32); JP_F_0028DEE8(c);
SET64(5, RD(2) + RD(0));
{ int t = RD(5) == RD(0);  if (t) goto L_0028DBEC; }
SET64(2, (s32)rd32(c, (RW(29) + 36)));
{ int t = RD(5) != RD(2); SET64(5, RD(2) + RD(0)); if (t) goto L_0028DC08; }
L_0028DBEC:;
SET64(31, 0x28dbf4); SET64(4, RD(17) + RD(0)); JP_F_0028DE60(c);
SET64(16, rd64(c, (RW(29) + 48))); goto L_0028DC1C;
L_0028DC00:;
SET64(2, (s32)rd32(c, (RW(29) + 36)));
SET64(5, RD(2) + RD(0));
L_0028DC08:;
SET64(31, 0x28dc10); SET64(4, RD(29) + RD(0)); JP_F_0028DDF8(c);
wr32(c, (RW(19) + 0), RW(2));
L_0028DC14:;
SET64(2, RD(0) + RD(0));
L_0028DC18:;
SET64(16, rd64(c, (RW(29) + 48)));
L_0028DC1C:;
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(20, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void JP_F_0028DC38(Ctx *c) { /* func_0028DC38 */
ENTER(0x28dc38);
SET32(29, RW(29) + -64);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 56), RD(31));
{ int t = RD(17) == RD(0); wr32(c, (RW(29) + 16), RW(5)); if (t) goto L_0028DDDC; }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
if (RD(17) == RD(4)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028DDE0; }
SET64(2, RD(4) < RD(17));
{ int t = RD(2) == RD(0); SET64(2, RD(17) < RD(4)); if (t) goto L_0028DC8C; }
SET32(3, RW(17) - RW(4));
SET64(3, RSD(3) < (s64)4);
{ int t = RD(3) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028DDDC; }
SET64(2, RD(17) < RD(4));
L_0028DC8C:;
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 8))); goto L_0028DCF8; }
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(2, RW(4) + RW(2));
SET64(3, RD(17) < RD(2));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 8))); goto L_0028DCF8; }
SET32(2, RW(17) - RW(2));
SET32(16, RW(2) + 4);
{ int t = RSD(16) <= 0;  if (t) goto L_0028DD28; }
SET64(3, (s32)rd32(c, (RW(18) + 12)));
SET64(3, RSD(3) < RSD(16));
{ int t = RD(3) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028DDDC; }
SET32(6, RW(0) + 4);
SET64(4, RD(29) + RD(0));
SET32(6, RW(6) - RW(16));
SET64(31, 0x28dcdc); SET64(5, RD(17) + RD(0)); JP_F_00127218(c);
SET64(5, (s32)rd32(c, (RW(18) + 8)));
SET32(4, RW(29) - RW(16));
SET64(6, RD(16) + RD(0));
SET64(31, 0x28dcf0); SET32(4, RW(4) + 4); JP_F_00127218(c);
 goto L_0028DD38;
L_0028DCF8:;
SET64(2, RD(17) < RD(3));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028DDDC; }
SET64(2, (s32)rd32(c, (RW(18) + 12)));
SET32(2, RW(3) + RW(2));
SET64(3, RD(17) < RD(2));
if (RD(3) == RD(0)) { SET32(2, RW(0) + 1); goto L_0028DDDC; }
SET32(3, RW(17) - RW(2));
SET32(16, RW(3) + 4);
{ int t = RSD(16) > 0; SET32(2, RW(0) + 1); if (t) goto L_0028DDDC; }
L_0028DD28:;
lwl(c, 2, (RW(17) + 3));
lwr(c, 2, (RW(17) + 0));
swl(c, 2, (RW(29) + 3));
swr(c, 2, (RW(29) + 0));
L_0028DD38:;
SET64(31, 0x28dd40); SET64(4, RD(29) + RD(0)); JP_F_002779B8(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 8);
{ int t = RD(3) == RD(2); SET64(2, RSD(3) < (s64)9); if (t) goto L_0028DD88; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 64); if (t) goto L_0028DD70; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_0028DDA0; }
SET64(16, rd64(c, (RW(29) + 32))); goto L_0028DDE0;
L_0028DD70:;
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 128); if (t) goto L_0028DDD8; }
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_0028DDD8; }
SET64(16, rd64(c, (RW(29) + 32))); goto L_0028DDE0;
L_0028DD88:;
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET64(2, RD(2) & 0x40);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0028DDD8; }
SET32(5, RW(0) + 8); goto L_0028DDB4;
L_0028DDA0:;
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET64(2, RD(2) & 0x48);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0028DDD8; }
SET32(5, RW(0) + 4);
L_0028DDB4:;
SET64(31, 0x28ddbc); SET32(6, RW(29) + 16); JP_F_0028DEE8(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_0028DDDC; }
if (RD(2) != RD(17)) { SET64(2, RD(0) + RD(0)); goto L_0028DDDC; }
SET32(2, RW(0) + 1); goto L_0028DDDC;
L_0028DDD8:;
SET64(2, RD(0) + RD(0));
L_0028DDDC:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0028DDE0:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0028DDF8(Ctx *c) { /* func_0028DDF8 */
ENTER(0x28ddf8);
SET64(7, RD(4) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(7) + 0)));
SET64(2, RD(6) < RD(3));
{ int t = RD(2) != RD(0); SET32(4, RW(6) - RW(3)); if (t) goto L_0028DE24; }
SET64(2, (s32)rd32(c, (RW(7) + 4)));
SET32(2, RW(3) + RW(2));
SET64(2, RD(6) < RD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_0028DE54; }
L_0028DE24:;
SET64(5, (s32)rd32(c, (RW(7) + 8)));
SET64(2, RD(6) < RD(5));
{ int t = RD(2) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0028DE54; }
SET64(2, (s32)rd32(c, (RW(7) + 12)));
SET32(2, RW(5) + RW(2));
SET64(2, RD(6) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_0028DE54; }
SET64(3, (s32)rd32(c, (RW(7) + 4)));
SET32(2, RW(6) - RW(5));
SET32(4, RW(2) + RW(3));
L_0028DE54:;
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_0028DE60(Ctx *c) { /* func_0028DE60 */
ENTER(0x28de60);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(18, (s32)rd32(c, (RW(16) + 8128)));
SET64(31, 0x28de84); SET64(5, RD(18) + RD(0)); JP_F_00287FD0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x28de94); SET64(17, RD(2) + RD(0)); JP_F_002887E8(c);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 40)));
SET32(17, RW(17) - RW(2));
SET64(5, (s64)(s32)0xff000000);
SET64(2, RD(0) + RD(0));
SET64(17, RSD(17) < RSD(3));
{ int t = RD(17) == RD(0); SET64(5, RD(5) | 0xf1c); if (t) goto L_0028DED0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_0028DED0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028DEE8(Ctx *c) { /* func_0028DEE8 */
ENTER(0x28dee8);
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
SET64(31, 0x28df2c); SET64(4, (s32)rd32(c, (RW(18) + 0))); JP_F_00277B50(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(7, (s32)rd32(c, (RW(18) + 12))); goto L_0028DF58; }
 goto L_0028E004;
L_0028DF40:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(22) + 0), RW(6));
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) - RW(19));
SET32(2, RW(2) + RW(20)); goto L_0028E014;
L_0028DF58:;
{ int t = RD(7) == RD(0); SET32(3, RW(0) + 3); if (t) goto L_0028E014; }
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
SET64(31, 0x28df98); SET64(20, RD(0) + RD(0)); JP_F_00127218(c);
SET64(5, (s32)rd32(c, (RW(18) + 8)));
SET64(6, RD(16) + RD(0));
SET32(16, RW(19) + RW(16));
SET32(4, RW(29) + RW(19));
SET64(31, 0x28dfb0); SET32(16, RW(16) + -3); JP_F_00127218(c);
SET64(2, RSD(17) < RSD(16));
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(18) + 12))); goto L_0028DFEC; }
L_0028DFC0:;
SET64(31, 0x28dfc8); SET32(4, RW(29) + RW(20)); JP_F_002779B8(c);
SET64(6, RD(2) + RD(0));
SET64(2, RD(6) & RD(21));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 4))); { POLL(); goto L_0028DF40; } }
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(16));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0028DFC0; } }
SET64(5, (s32)rd32(c, (RW(18) + 12)));
L_0028DFEC:;
SET64(6, RD(21) + RD(0));
SET64(31, 0x28dff8); SET64(4, (s32)rd32(c, (RW(18) + 8))); JP_F_00277B50(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0028E018; }
L_0028E004:;
SET64(31, 0x28e00c); SET64(4, RD(17) + RD(0)); JP_F_002779B8(c);
wr32(c, (RW(22) + 0), RW(2));
SET64(2, RD(17) + RD(0));
L_0028E014:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0028E018:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0028E040(Ctx *c) { /* func_0028E040 */
ENTER(0x28e040);
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
{ int t = RD(2) == RD(0); SET64(21, RD(5) + RD(0)); if (t) goto L_0028E148; }
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(21) + RD(0));
SET64(31, 0x28e090); SET32(4, RW(4) + RW(2)); JP_F_00277A50(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(19, (s32)rd32(c, (RW(18) + 4))); goto L_0028E0C0; }
 goto L_0028E16C;
L_0028E0A8:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(22) + 0), RW(6));
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) - RW(19));
SET32(2, RW(2) + RW(20)); goto L_0028E17C;
L_0028E0C0:;
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
SET64(31, 0x28e0f8); SET32(5, RW(5) - RW(19)); JP_F_00127218(c);
SET64(5, (s32)rd32(c, (RW(18) + 8)));
SET64(6, RD(16) + RD(0));
SET32(16, RW(19) + RW(16));
SET32(4, RW(29) + RW(19));
SET64(31, 0x28e110); SET32(16, RW(16) + -3); JP_F_00127218(c);
SET64(2, RSD(17) < RSD(16));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 4))); goto L_0028E14C; }
L_0028E120:;
SET64(31, 0x28e128); SET32(4, RW(29) + RW(20)); JP_F_002779B8(c);
SET64(6, RD(2) + RD(0));
SET64(2, RD(6) & RD(21));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 4))); { POLL(); goto L_0028E0A8; } }
SET32(20, RW(20) + 1);
SET64(2, RSD(20) < RSD(16));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_0028E120; } }
L_0028E148:;
SET64(2, (s32)rd32(c, (RW(18) + 4)));
L_0028E14C:;
SET64(6, RD(21) + RD(0));
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x28e160); SET32(4, RW(4) + RW(2)); JP_F_00277A50(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0028E180; }
L_0028E16C:;
SET64(31, 0x28e174); SET64(4, RD(17) + RD(0)); JP_F_002779B8(c);
wr32(c, (RW(22) + 0), RW(2));
SET64(2, RD(17) + RD(0));
L_0028E17C:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0028E180:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0028E1A8(Ctx *c) { /* func_0028E1A8 */
ENTER(0x28e1a8);
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
SET64(31, 0x28e200); wr32(c, (RW(20) + 36), RW(0)); JP_F_00293FC0(c);
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 120))); goto L_0028E240; }
SET64(31, 0x28e210); SET64(4, RD(16) + RD(0)); JP_F_0028E8F0(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { wr32(c, (RW(20) + 36), RW(3)); goto L_0028E230; }
SET64(31, 0x28e224); SET64(4, RD(16) + RD(0)); JP_F_00292210(c);
SET64(2, RD(0) + RD(0)); goto L_0028E444;
L_0028E230:;
SET64(31, 0x28e238); SET64(4, RD(16) + RD(0)); JP_F_0028DE60(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0028E448;
L_0028E240:;
SET32(2, RW(0) + 204);
if (RD(3) != RD(2)) { SET64(17, RD(17) & 0xcc); goto L_0028E25C; }
SET64(2, (s32)rd32(c, (RW(19) + 368)));
{ int t = RD(2) != RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_0028E260; }
SET64(17, RD(17) & 0xcc);
L_0028E25C:;
SET64(5, RD(18) + RD(0));
L_0028E260:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x28e26c); SET32(6, RW(29) + 16); JP_F_002880B0(c);
SET64(18, RD(2) + RD(0));
{ int t = RD(18) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_0028E280; }
SET64(2, RD(0) + RD(0)); goto L_0028E444;
L_0028E280:;
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028E448; }
SET64(2, RD(17) & 0xc8);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028E29C; }
SET64(31, 0x28e29c); SET32(5, RW(0) + 1); JP_F_00292230(c);
L_0028E29C:;
SET32(2, RW(0) + 128);
{ int t = RD(17) != RD(2);  if (t) goto L_0028E2F8; }
SET64(31, 0x28e2b0); SET64(4, RD(16) + RD(0)); JP_F_0028E4C0(c);
SET64(31, 0x28e2b8); SET64(4, RD(16) + RD(0)); JP_F_00288A88(c);
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_0028E2D8; }
SET64(31, 0x28e2c8); SET64(4, RD(16) + RD(0)); JP_F_0028E578(c);
if (RD(2) != RD(0)) { SET64(2, RD(18) + RD(0)); goto L_0028E444; }
SET32(2, RW(0) + 1); goto L_0028E43C;
L_0028E2D8:;
SET64(31, 0x28e2e0); SET64(4, RD(16) + RD(0)); JP_F_00288AF0(c);
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_0028E2F8; }
SET64(31, 0x28e2f0); SET64(4, RD(16) + RD(0)); JP_F_0028E7A0(c);
SET32(2, RW(0) + 1); goto L_0028E43C;
L_0028E2F8:;
{ int t = RD(23) != RD(0); SET64(2, RD(17) & 0x4c); if (t) goto L_0028E340; }
SET64(4, RD(16) + RD(0));
SET64(5, RD(22) + RD(0));
SET64(31, 0x28e310); SET64(6, RD(17) + RD(0)); JP_F_0028E8A8(c);
if (RD(2) == RD(0)) { SET64(2, RSD(22) < (s64)5); goto L_0028E328; }
SET64(31, 0x28e320); SET64(4, RD(16) + RD(0)); JP_F_00292210(c);
SET64(2, RD(18) + RD(0)); goto L_0028E444;
L_0028E328:;
{ int t = RD(2) == RD(0); SET64(2, RD(17) & 0x4c); if (t) goto L_0028E340; }
SET32(2, RW(0) + 1);
wr32(c, (RW(20) + 36), RW(2)); goto L_0028E440;
L_0028E340:;
{ int t = RD(2) == RD(0); SET64(5, RD(29) + RD(0)); if (t) goto L_0028E3C0; }
SET64(31, 0x28e350); SET64(4, RD(16) + RD(0)); JP_F_0028E470(c);
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 16)));
SET64(5, RD(29) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(31, 0x28e368); SET32(8, RW(29) + 20); JP_F_0028E9A0(c);
SET64(18, RD(2) + RD(0));
if (RD(18) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028E448; }
SET64(3, (s32)rd32(c, (RW(29) + 20)));
{ int t = RD(3) != RD(0); SET32(2, RW(0) + 64); if (t) goto L_0028E3A0; }
SET64(2, (s32)rd32(c, (RW(19) + 120)));
SET64(2, RD(17) & RD(2));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 204); if (t) goto L_0028E394; }
wr32(c, (RW(19) + 120), RW(2));
L_0028E394:;
SET32(2, RW(0) + 1);
wr32(c, (RW(19) + 368), RW(2));
SET32(2, RW(0) + 64);
L_0028E3A0:;
{ int t = RD(17) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_0028E43C; }
SET32(2, RW(0) + -2);
{ int t = RD(3) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_0028E43C; }
SET32(2, RW(0) + 192);
wr32(c, (RW(19) + 120), RW(2)); goto L_0028E438;
L_0028E3C0:;
SET64(2, RD(17) & 0x2);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028E418; }
SET64(31, 0x28e3d4); SET64(5, RD(29) + RD(0)); JP_F_0028E470(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x28e3e0); SET64(5, RD(29) + RD(0)); JP_F_0028FF50(c);
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_0028E408; }
SET64(31, 0x28e3f0); SET64(4, RD(16) + RD(0)); JP_F_002904C0(c);
SET64(18, RD(2) + RD(0));
if (RD(18) != RD(0)) { SET64(2, RD(18) + RD(0)); goto L_0028E444; }
SET32(2, RW(0) + 1); goto L_0028E43C;
L_0028E408:;
SET64(31, 0x28e410); SET64(4, RD(16) + RD(0)); JP_F_00290628(c);
SET64(18, RD(2) + RD(0)); goto L_0028E440;
L_0028E418:;
SET32(2, RW(0) + 128);
{ int t = RD(17) == RD(2); SET64(5, (s32)rd32(c, (RW(29) + 16))); if (t) goto L_0028E440; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x28e430); SET32(6, RW(0) + 204); JP_F_00291178(c);
{ int t = RSD(2) <= 0; SET64(2, RD(18) + RD(0)); if (t) goto L_0028E444; }
L_0028E438:;
SET32(2, RW(0) + 1);
L_0028E43C:;
wr32(c, (RW(21) + 0), RW(2));
L_0028E440:;
SET64(2, RD(18) + RD(0));
L_0028E444:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0028E448:;
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

void JP_F_0028E470(Ctx *c) { /* func_0028E470 */
ENTER(0x28e470);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(6, RD(29) + RD(0));
SET64(31, 0x28e48c); SET64(5, (s32)rd32(c, (RW(4) + 8128))); JP_F_00287AD8(c);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0028E4A0; }
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 0), RW(0)); goto L_0028E4AC;
L_0028E4A0:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(16) + 4), RW(2));
L_0028E4AC:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028E4C0(Ctx *c) { /* func_0028E4C0 */
ENTER(0x28e4c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(17) + 3516);
wr64(c, (RW(29) + 24), RD(31));
SET32(16, RW(17) + 8112);
SET64(2, (s32)rd32(c, (RW(16) + 32)));
{ int t = RSD(2) >= 0; SET64(5, (s32)rd32(c, (RW(16) + 16))); if (t) goto L_0028E4FC; }
SET64(31, 0x28e4f4);  JP_F_00287FF0(c);
SET32(2, RW(2) + 4);
wr32(c, (RW(16) + 32), RW(2));
L_0028E4FC:;
SET64(2, (s32)rd32(c, (RW(18) + 36)));
{ int t = RSD(2) >= 0; SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0028E560; }
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
L_0028E560:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028E578(Ctx *c) { /* func_0028E578 */
ENTER(0x28e578);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28e594); SET64(17, RD(5) + RD(0)); JP_F_0028E5C8(c);
SET32(3, RW(0) + -1);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(3); SET64(5, RD(17) + RD(0)); if (t) goto L_0028E5B0; }
SET64(31, 0x28e5ac);  JP_F_0028E7A0(c);
SET64(2, RD(0) + RD(0));
L_0028E5B0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028E5C8(Ctx *c) { /* func_0028E5C8 */
ENTER(0x28e5c8);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 3368);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28e5f0); SET64(18, (s32)rd32(c, (RW(16) + 8120))); JP_F_00297980(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028E608; }
SET64(31, 0x28e600);  JP_F_0028E698(c);
SET64(5, RD(2) + RD(0)); goto L_0028E61C;
L_0028E608:;
SET64(31, 0x28e610);  JP_F_0028E6F8(c);
SET64(5, RD(2) + RD(0));
{ int t = RSD(5) < 0; SET32(2, RW(0) + -1); if (t) goto L_0028E680; }
L_0028E61C:;
if (RSD(5) <= 0) { SET64(5, (s64)(s32)0x7fff0000); goto L_0028E65C; }
SET64(31, 0x28e62c); SET64(4, RD(16) + RD(0)); JP_F_00288B38(c);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(18) + 136)));
SET32(2, RW(2) + 1);
SET64(31, 0x28e640); wr32(c, (RW(18) + 136), RW(2)); JP_F_00293420(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028E658; }
SET64(31, 0x28e650);  JP_F_00293D80(c);
SET32(2, RW(2) + 1);
wr32(c, (RW(17) + 352), RW(2));
L_0028E658:;
SET64(5, (s64)(s32)0x7fff0000);
L_0028E65C:;
SET32(4, RW(17) + 60);
SET64(31, 0x28e668); SET64(5, RD(5) | 0xffff); JP_F_00297F88(c);
SET32(4, RW(17) + 104);
SET64(31, 0x28e674); SET32(5, RW(0) + -1); JP_F_00297F88(c);
SET32(2, RW(0) + 192);
wr32(c, (RW(18) + 120), RW(2));
SET64(2, RD(0) + RD(0));
L_0028E680:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028E698(Ctx *c) { /* func_0028E698 */
ENTER(0x28e698);
SET32(29, RW(29) + -64);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 48), RD(16));
SET32(16, RW(3) + 3428);
wr64(c, (RW(29) + 56), RD(31));
SET64(2, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(3) + 3472)));
{ int t = RD(5) == RD(0); SET32(4, RW(3) + 3476); if (t) goto L_0028E6E4; }
SET64(31, 0x28e6c4); SET64(5, RD(29) + RD(0)); JP_F_0028F790(c);
SET64(4, RD(29) + RD(0));
SET32(5, RW(29) + 32);
SET32(6, RW(29) + 36);
SET64(31, 0x28e6d8); wr32(c, (RW(29) + 24), RW(0)); JP_F_00298DB0(c);
SET64(3, (s32)rd32(c, (RW(16) + 36)));
SET64(2, (s32)rd32(c, (RW(29) + 32)));
SET32(2, RW(2) - RW(3));
L_0028E6E4:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0028E6F8(Ctx *c) { /* func_0028E6F8 */
ENTER(0x28e6f8);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET32(2, RW(2) + 31000);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(5) + 12)));
{ int t = RD(3) == RD(2); SET32(17, RW(16) + 3368); if (t) goto L_0028E738; }
SET64(2, RD(0) | 0xac44);
wr32(c, (RW(29) + 0), RW(0));
wr32(c, (RW(29) + 4), RW(2)); goto L_0028E758;
L_0028E738:;
SET64(5, RD(29) + RD(0));
SET64(31, 0x28e744); SET32(6, RW(29) + 4); JP_F_00288C78(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 496))); goto L_0028E75C; }
SET32(2, RW(0) + -1); goto L_0028E788;
L_0028E758:;
SET64(2, (s32)rd32(c, (RW(17) + 496)));
L_0028E75C:;
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(16) + 3468)));
SET32(2, RW(2) + RW(3));
SET64(6, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(17) + 496), RW(2));
SET64(31, 0x28e778); SET64(4, RD(2) + RD(0)); JP_F_0027B438(c);
SET64(3, (s32)rd32(c, (RW(17) + 356)));
SET32(2, RW(2) - RW(3));
SET64(4, RSD(2) < (s64)0);
if (RD(4) != 0) SET64(2, RD(0));
L_0028E788:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028E7A0(Ctx *c) { /* func_0028E7A0 */
ENTER(0x28e7a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET32(18, RW(0) + 128);
wr64(c, (RW(29) + 40), RD(19));
SET32(19, RW(0) + 4);
wr64(c, (RW(29) + 48), RD(31)); goto L_0028E7F0;
L_0028E7D0:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x28e7e4); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x28e7f0); SET32(5, RW(0) + 4); JP_F_0028E860(c);
L_0028E7F0:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(2) + 24)));
{ u32 t = RW(3); SET64(31, 0x28e80c); SET64(7, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
if (RD(2) != RD(19)) { SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_0028E82C; }
SET64(31, 0x28e820); SET64(4, (s32)rd32(c, (RW(29) + 0))); JP_F_002779B8(c);
{ int t = RD(2) == RD(18); SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_0028E7D0; } }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
L_0028E82C:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x28e840); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0028E860(Ctx *c) { /* func_0028E860 */
ENTER(0x28e860);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(6, RD(17) + RD(0));
SET64(31, 0x28e884); SET64(5, (s32)rd32(c, (RW(16) + 8128))); JP_F_00288110(c);
SET64(2, rd64(c, (RW(16) + 2464)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(2, RD(17) + RD(2));
SET64(17, rd64(c, (RW(29) + 8)));
wr64(c, (RW(16) + 2464), RD(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028E8A8(Ctx *c) { /* func_0028E8A8 */
ENTER(0x28e8a8);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 128);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RSD(5) < (s64)5);
{ int t = RD(6) == RD(3); SET32(2, RW(0) + 1); if (t) goto L_0028E8E0; }
if (RD(5) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_0028E8E0; }
SET64(31, 0x28e8d0);  JP_F_0028E8F0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0028E8E4; }
SET64(2, RD(0) + RD(0));
L_0028E8E0:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0028E8E4:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0028E8F0(Ctx *c) { /* func_0028E8F0 */
ENTER(0x28e8f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8128)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002887C8(c); return; }
}

void JP_F_0028E908(Ctx *c) { /* func_0028E908 */
ENTER(0x28e908);
SET32(29, RW(29) + -16);
SET64(3, RD(5) + RD(0));
SET32(2, RW(0) + -2);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(3) == RD(2); SET64(8, RD(4) + RD(0)); if (t) goto L_0028E950; }
SET64(2, RSD(3) < (s64)-1);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + -3); if (t) goto L_0028E940; }
{ int t = RD(3) == RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0028E968; }
SET64(4, RD(8) + RD(0)); goto L_0028E984;
L_0028E940:;
{ int t = RD(3) != RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0028E980; }
SET64(2, RD(0) + RD(0)); goto L_0028E994;
L_0028E950:;
{ int t = RSD(6) > 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0028E990; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_0028E968:;
{ int t = RSD(6) > 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0028E990; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_0028E980:;
SET64(4, RD(8) + RD(0));
L_0028E984:;
SET64(5, RD(7) + RD(0));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_0028E990:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0028E994:;
SET32(29, RW(29) + 16); return;
}

void JP_F_0028E9A0(Ctx *c) { /* func_0028E9A0 */
ENTER(0x28e9a0);
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
SET64(31, 0x28ea08); SET64(6, (s32)rd32(c, (RW(23) + 8))); JP_F_00278E00(c);
SET64(4, RD(16) + RD(0));
SET32(6, RW(0) + 1);
SET64(31, 0x28ea18); SET64(5, RD(0) + RD(0)); JP_F_0026A500(c);
SET64(5, RD(16) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 20)));
SET64(31, 0x28ea28); SET64(18, RD(2) + RD(0)); JP_F_00278E40(c);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(22) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(31, 0x28ea3c); SET32(6, RW(0) + 1); JP_F_0026A500(c);
SET64(4, RD(20) + RD(0));
SET32(17, RW(2) - RW(18));
SET64(5, (s32)rd32(c, (RW(22) + 0)));
SET64(7, (s64)(s32)0xff000000);
SET64(6, RD(17) + RD(0));
SET64(31, 0x28ea58); SET64(7, RD(7) | 0xf04); JP_F_0028E908(c);
SET64(4, RD(20) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x28ea68); SET64(5, RD(17) + RD(0)); JP_F_0028E860(c);
{ int t = RD(16) != RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_0028ECC8; }
SET64(3, (s32)rd32(c, (RW(22) + 0)));
SET32(16, RW(0) + -2);
{ int t = RD(3) == RD(16); SET64(2, RD(0) + RD(0)); if (t) goto L_0028ECC8; }
SET64(4, (s32)rd32(c, (RW(29) + 20)));
SET64(31, 0x28ea8c); SET64(5, RD(21) + RD(0)); JP_F_00278B28(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); wr32(c, (RW(22) + 0), RW(3)); if (t) goto L_0028EAB0; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(20) + RD(0));
SET64(31, 0x28eaa8); SET64(5, RD(5) | 0xf05); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0028ECCC;
L_0028EAB0:;
SET64(3, (s32)rd32(c, (RW(29) + 16)));
SET64(17, RD(3) & 0x40);
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(21) + 24))); goto L_0028EB34; }
SET64(4, (s32)rd32(c, (RW(20) + 2316)));
{ int t = RSD(4) <= 0; SET32(5, RW(0) + 95); if (t) goto L_0028EAF0; }
SET64(3, (s32)rd32(c, (RW(21) + 0)));
if (RD(4) != RD(3)) { wr32(c, (RW(22) + 0), RW(16)); goto L_0028ECC8; }
SET64(4, (s32)rd32(c, (RW(20) + 2320)));
SET64(3, (s32)rd32(c, (RW(21) + 4)));
{ int t = RD(4) == RD(3);  if (t) goto L_0028EAF0; }
wr32(c, (RW(22) + 0), RW(16)); goto L_0028ECC8;
L_0028EAF0:;
SET64(31, 0x28eaf8); SET64(4, RD(20) + RD(0)); JP_F_00297980(c);
SET64(4, RD(20) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x28eb08); SET32(5, RW(0) + 95); JP_F_00297980(c);
{ int t = RD(16) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0028EB30; }
SET64(5, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(16); SET64(31, 0x28eb1c); SET64(6, (s32)rd32(c, (RW(21) + 4))); rt_call(c, t); }
{ int t = RD(2) == RD(0); SET32(3, RW(0) + -2); if (t) goto L_0028EB30; }
SET64(2, RD(0) + RD(0));
wr32(c, (RW(22) + 0), RW(3)); goto L_0028ECC8;
L_0028EB30:;
SET64(4, (s32)rd32(c, (RW(21) + 24)));
L_0028EB34:;
SET32(6, RW(0) + 1);
if (RD(4) != RD(6)) { SET64(5, (s32)rd32(c, (RW(20) + 56))); goto L_0028EB48; }
wr32(c, (RW(19) + 372), RW(0)); goto L_0028EBA8;
L_0028EB48:;
SET32(2, RW(0) + 3);
if (RD(5) != RD(2)) { SET64(4, (s32)rd32(c, (RW(29) + 20))); goto L_0028EBAC; }
SET64(3, (s32)rd32(c, (RW(19) + 356)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 2); if (t) goto L_0028EBA8; }
{ int t = RD(4) != RD(2); SET64(3, (s32)rd32(c, (RW(3) + 108))); if (t) goto L_0028EB90; }
SET64(2, (s32)rd32(c, (RW(21) + 20)));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_0028EBAC; }
SET64(2, RSD(3) < (s64)512);
if (RD(2) == RD(0)) { SET32(6, RW(23) + 16); goto L_0028EBB0; }
wr32(c, (RW(19) + 372), RW(6)); goto L_0028EBA8;
L_0028EB90:;
{ int t = RD(4) != RD(5); SET64(4, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_0028EBAC; }
SET64(2, (s32)rd32(c, (RW(21) + 20)));
SET64(2, RSD(2) < RSD(3));
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 372), RW(6)); goto L_0028EBA8; }
L_0028EBA8:;
SET64(4, (s32)rd32(c, (RW(29) + 20)));
L_0028EBAC:;
SET32(6, RW(23) + 16);
L_0028EBB0:;
SET64(31, 0x28ebb8); SET64(5, RD(0) + RD(0)); JP_F_00278E18(c);
SET64(2, (s32)rd32(c, (RW(19) + 268)));
SET64(3, (s32)rd32(c, (RW(21) + 48)));
{ int t = RD(2) == RD(3); SET32(2, RW(0) + 1); if (t) goto L_0028EBD8; }
wr32(c, (RW(19) + 268), RW(3));
wr32(c, (RW(19) + 272), RW(2)); goto L_0028EBDC;
L_0028EBD8:;
wr32(c, (RW(19) + 272), RW(0));
L_0028EBDC:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(30) + 0))); goto L_0028EC34; }
SET32(5, RW(0) + 77);
SET64(31, 0x28ebf0); SET64(4, RD(20) + RD(0)); JP_F_00297980(c);
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 78);
SET64(31, 0x28ec00); SET64(17, RD(2) + RD(0)); JP_F_00297980(c);
{ int t = RD(17) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_0028EC30; }
SET64(4, (s32)rd32(c, (RW(30) + 0)));
SET32(6, RW(0) + 1);
SET64(31, 0x28ec18); SET64(5, (s32)rd32(c, (RW(30) + 4))); JP_F_00277B50(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028EC30; }
SET64(5, (s32)rd32(c, (RW(30) + 0)));
SET32(6, RW(2) - RW(5));
{ u32 t = RW(17); SET64(31, 0x28ec30); SET32(6, RW(6) + 4); rt_call(c, t); }
L_0028EC30:;
SET64(4, (s32)rd32(c, (RW(30) + 0)));
L_0028EC34:;
SET32(6, RW(0) + 4);
SET64(31, 0x28ec40); SET64(5, (s32)rd32(c, (RW(30) + 4))); JP_F_00277B50(c);
SET64(4, RD(20) + RD(0));
SET64(9, (s32)rd32(c, (RW(19) + 272)));
SET64(5, RD(21) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(7, RD(29) + RD(0));
SET64(31, 0x28ec5c); SET32(8, RW(29) + 8); JP_F_0028ECF8(c);
SET64(3, (s32)rd32(c, (RW(19) + 120)));
SET64(5, (s32)rd32(c, (RW(29) + 16)));
SET64(2, RD(0) + RD(0));
SET64(4, rd64(c, (RW(29) + 8)));
SET64(3, RD(5) & RD(3));
{ int t = RD(3) == RD(0); wr64(c, (RW(19) + 4256), RD(4)); if (t) goto L_0028ECC8; }
SET64(6, (s32)rd32(c, (RW(19) + 272)));
SET64(4, RD(20) + RD(0));
SET64(31, 0x28ec88); SET64(5, RD(21) + RD(0)); JP_F_0028EF88(c);
SET64(4, RD(20) + RD(0));
SET64(7, (s32)rd32(c, (RW(19) + 272)));
SET64(5, RD(21) + RD(0));
SET64(31, 0x28ec9c); SET64(6, rd64(c, (RW(29) + 0))); JP_F_0028F2E0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x28eca8); SET64(5, RD(21) + RD(0)); JP_F_0028F888(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x28ecb4); SET64(5, RD(21) + RD(0)); JP_F_0028F968(c);
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 20)));
SET64(6, RD(21) + RD(0));
SET64(31, 0x28ecc8); SET64(7, RD(30) + RD(0)); JP_F_0028FB00(c);
L_0028ECC8:;
SET64(16, rd64(c, (RW(29) + 32)));
L_0028ECCC:;
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

void JP_F_0028ECF8(Ctx *c) { /* func_0028ECF8 */
ENTER(0x28ecf8);
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
{ int t = RD(6) == RD(0); wr64(c, (RW(17) + 0), RD(3)); if (t) goto L_0028ED7C; }
SET64(31, 0x28ed54);  JP_F_00296658(c);
SET32(4, RW(16) + 3368);
SET64(2, rd64(c, (RW(29) + 0)));
SET64(7, RD(29) + RD(0));
SET64(9, RD(17) + RD(0));
{ int t = RSD(2) < 0; SET64(8, RD(18) + RD(0)); if (t) goto L_0028ED7C; }
SET32(5, RW(19) + 280);
SET64(31, 0x28ed78); SET64(6, RD(21) + RD(0)); JP_F_0028EDC8(c);
wr64(c, (RW(20) + 0), RD(2));
L_0028ED7C:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0028EDA0(Ctx *c) { /* func_0028EDA0 */
ENTER(0x28eda0);
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

void JP_F_0028EDC8(Ctx *c) { /* func_0028EDC8 */
ENTER(0x28edc8);
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
SET64(22, (s32)rd32(c, (RW(22) + 32352)));
{ int t = RSD(3) >= 0; SET64(21, (s32)rd32(c, (RW(19) + 20))); if (t) goto L_0028EE4C; }
SET64(4, RD(21) + RD(0));
SET64(31, 0x28ee38); SET64(5, RD(22) + RD(0)); JP_F_0028EF48(c);
SET64(3, rd64(c, (RW(18) + 0)));
SET64(3, RD(3) - RD(2));
SET64(2, RSD(3) < (s64)0);
if (RD(2) != 0) SET64(3, RD(0));
wr64(c, (RW(17) + 336), RD(3));
L_0028EE4C:;
SET64(2, rd64(c, (RW(18) + 0)));
SET32(20, RW(16) + 16);
SET64(4, RD(20) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(17, RD(2) - RD(3));
SET32(6, RW(0) + 4);
SET64(2, RSD(17) < (s64)0);
SET64(31, 0x28ee70); if (RD(2) != 0) SET64(17, RD(0)); JP_F_00127180(c);
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 3); if (t) goto L_0028EEB8; }
SET64(3, rd64(c, (RW(18) + 0)));
SET64(4, (s32)rd32(c, (RW(19) + 24)));
wr64(c, (RW(20) + 0), RD(3));
SET64(2, rd64(c, (RW(18) + 8)));
wr32(c, (RW(16) + 0), RW(21));
wr64(c, (RW(16) + 24), RD(2));
{ int t = RD(4) != RD(5); wr32(c, (RW(16) + 4), RW(0)); if (t) goto L_0028EEA8; }
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 8), RW(2)); goto L_0028EEAC;
L_0028EEA8:;
wr32(c, (RW(16) + 8), RW(0));
L_0028EEAC:;
SET64(2, rd64(c, (RW(18) + 0)));
wr64(c, (RW(30) + 0), RD(2)); goto L_0028EF10;
L_0028EEB8:;
if (RD(23) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 0))); goto L_0028EEE0; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(16) + 0), RW(0));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(16) + 8), RW(0));
SET32(2, RW(2) + 1);
wr32(c, (RW(16) + 4), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_0028EEE0:;
SET64(5, RD(22) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET32(4, RW(21) - RW(4));
SET64(6, (s32)rd32(c, (RW(16) + 4)));
SET64(2, RSD(4) < RSD(3));
if (RD(2) == 0) SET64(3, RD(4));
SET32(4, RW(6) + RW(4));
SET64(31, 0x28ef04); wr32(c, (RW(16) + 8), RW(3)); JP_F_0028EF48(c);
SET64(17, RD(17) + RD(2));
SET64(2, RSD(17) < (s64)0);
if (RD(2) != 0) SET64(17, RD(0));
L_0028EF10:;
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

void JP_F_0028EF48(Ctx *c) { /* func_0028EF48 */
ENTER(0x28ef48);
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
SET64(31, 0x28ef78); SET64(4, RD(4) | RD(3)); JP_F_0011F988(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028EF88(Ctx *c) { /* func_0028EF88 */
ENTER(0x28ef88);
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
SET64(31, 0x28efcc); SET64(19, (s32)rd32(c, (RW(18) + 8120))); JP_F_0028FAB0(c);
{ int t = RD(20) == RD(0); SET32(3, RW(0) + -1); if (t) goto L_0028F010; }
SET32(6, RW(0) + 63);
SET32(2, RW(18) + 4820);
L_0028EFE0:;
SET32(6, RW(6) + -1);
wr16(c, (RW(2) + 0), (u16)RW(3));
{ int t = RSD(6) >= 0; SET32(2, RW(2) + -4); if (t) { POLL(); goto L_0028EFE0; } }
SET32(2, RW(0) + -1);
SET64(7, (s32)rd32(c, (RW(16) + 20)));
wr16(c, (RW(17) + 2), (u16)RW(2));
SET64(10, (s32)rd32(c, (RW(16) + 24))); goto L_0028F090;
L_0028F010:;
SET64(10, (s32)rd32(c, (RW(16) + 24)));
SET32(2, RW(10) + -1);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET64(7, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_0028F090; }
SET64(2, (s32)rd32(c, (RW(19) + 356)));
SET64(4, (s32)rd32(c, (RW(2) + 108)));
SET32(5, RW(7) + 1024);
SET64(8, RD(7) + RD(0));
SET64(3, RSD(7) < RSD(4));
SET32(6, RW(4) + 1);
if (RD(3) != 0) SET64(8, RD(5));
SET64(2, RSD(6) < RSD(8));
{ int t = RD(2) == RD(0); SET64(3, RSD(7) < (s64)0); if (t) goto L_0028F094; }
SET32(5, RW(0) + -1);
L_0028F050:;
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
{ int t = RD(3) != RD(0); wr16(c, (RW(2) + 0), (u16)RW(5)); if (t) { POLL(); goto L_0028F050; } }
SET64(3, RSD(7) < (s64)0); goto L_0028F094;
L_0028F090:;
SET64(3, RSD(7) < (s64)0);
L_0028F094:;
SET32(4, RW(7) + 63);
SET64(2, RD(7) + RD(0));
SET64(5, rd16(c, (RW(21) + 56)));
if (RD(3) != 0) SET64(2, RD(4));
SET32(8, RSW(2) >> 6);
SET32(3, RW(8) << 6);
SET32(8, RW(7) - RW(3));
SET32(9, RW(8) << 2);
SET32(2, RW(9) + RW(17));
{ int t = RD(20) == RD(0); wr16(c, (RW(2) + 0), (u16)RW(5)); if (t) goto L_0028F0C8; }
wr16(c, (RW(2) + 2), (u16)RW(0)); goto L_0028F150;
L_0028F0C8:;
{ int t = RD(7) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_0028F100; }
SET64(3, (s16)rd16(c, (RW(17) + 2)));
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET32(7, RW(0) + -1); goto L_0028F108; }
wr16(c, (RW(17) + 2), (u16)RW(0)); goto L_0028F150;
L_0028F0E8:;
SET64(2, rd16(c, (RW(2) + 2)));
SET32(3, RW(9) + RW(17));
SET32(2, RW(5) + RW(2));
wr16(c, (RW(3) + 2), (u16)RW(2)); goto L_0028F150;
L_0028F100:;
SET32(7, RW(0) + -1);
L_0028F108:;
SET32(3, RW(8) - RW(6));
L_0028F10C:;
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
{ int t = RD(3) != RD(7); SET64(5, rd16(c, (RW(2) + 0))); if (t) { POLL(); goto L_0028F0E8; } }
{ int t = RD(4) != RD(0); SET32(3, RW(8) - RW(6)); if (t) { POLL(); goto L_0028F10C; } }
L_0028F150:;
SET32(5, RW(9) + RW(17));
SET32(3, RW(0) + 3);
SET64(2, rd16(c, (RW(5) + 2)));
{ int t = RD(10) != RD(3); wr16(c, (RW(21) + 58), (u16)RW(2)); if (t) goto L_0028F1E8; }
SET64(2, (s16)rd16(c, (RW(5) + 0)));
{ int t = RD(2) == RD(0); SET64(3, rd16(c, (RW(5) + 0))); if (t) goto L_0028F1E8; }
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
SET64(31, 0x28f1b8); wr16(c, (RW(9) + 46), (u16)RW(7)); JP_F_0028F210(c);
SET64(4, RD(18) + RD(0));
SET64(5, (s32)rd32(c, (RW(19) + 356)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); { JP_F_00290E28(c); return; }
L_0028F1E8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0028F210(Ctx *c) { /* func_0028F210 */
ENTER(0x28f210);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x28f23c); SET32(4, RW(17) + 16); JP_F_00298DB0(c);
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
{ int t = RD(3) != RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0028F2C8; }
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
L_0028F2C8:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028F2E0(Ctx *c) { /* func_0028F2E0 */
ENTER(0x28f2e0);
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
SET64(31, 0x28f314); SET64(20, RD(7) + RD(0)); JP_F_00297980(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028F36C; }
{ int t = RSD(19) >= 0; SET64(4, RD(18) + RD(0)); if (t) goto L_0028F358; }
SET64(2, (s32)rd32(c, (RW(17) + 48)));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 52); if (t) goto L_0028F35C; }
SET64(2, (s8)rd8(c, (RW(17) + 87)));
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 1); if (t) goto L_0028F360; }
if (RD(20) == RD(0)) { SET32(2, RW(0) + 1); goto L_0028F36C; }
SET64(31, 0x28f350); SET64(5, RD(17) + RD(0)); JP_F_0028F3C0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0028F368; }
L_0028F358:;
SET32(5, RW(0) + 52);
L_0028F35C:;
SET32(6, RW(0) + 1);
L_0028F360:;
SET64(31, 0x28f368); SET32(16, RW(0) + 1); JP_F_002977B8(c);
L_0028F368:;
SET32(2, RW(0) + 1);
L_0028F36C:;
{ int t = RD(16) != RD(2); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0028F3A0; }
SET64(4, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(7, RD(20) + RD(0));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_0028F480(c); return; }
L_0028F3A0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028F3C0(Ctx *c) { /* func_0028F3C0 */
ENTER(0x28f3c0);
SET32(29, RW(29) + -64);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 3472)));
{ int t = RD(3) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0028F470; }
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
SET64(31, 0x28f42c); SET32(6, RW(29) + 36); JP_F_00298DB0(c);
SET32(5, RW(29) + 40);
SET32(6, RW(29) + 36);
SET64(31, 0x28f43c); SET32(4, RW(16) + 3476); JP_F_00298DB0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x28f448); SET32(5, RW(0) + 53); JP_F_00297980(c);
SET64(6, (s32)rd32(c, (RW(29) + 32)));
SET64(5, (s32)rd32(c, (RW(29) + 40)));
SET64(3, (s32)rd32(c, (RW(29) + 36)));
SET64(4, RSD(5) < RSD(6));
mul_s(c, 0, 3, RSW(2), RSW(3));
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0028F470; }
SET32(2, RW(5) + RW(3));
SET64(2, RSD(6) < RSD(2));
SET64(2, RD(2) < (u64)(s64)1);
L_0028F470:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0028F480(Ctx *c) { /* func_0028F480 */
ENTER(0x28f480);
SET32(29, RW(29) + -32);
SET64(8, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(8) + 3368);
wr64(c, (RW(29) + 8), RD(17));
SET64(4, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(17, (s32)rd32(c, (RW(5) + 20)));
SET64(6, (s32)rd32(c, (RW(5) + 28)));
{ int t = RD(7) == RD(0); SET64(5, (s32)rd32(c, (RW(5) + 16))); if (t) goto L_0028F4D0; }
{ int t = RSD(4) < 0; SET64(31, rd64(c, (RW(29) + 16))); if (t) goto L_0028F4D0; }
SET64(7, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(8, RW(8) + 3396);
SET32(29, RW(29) + 32); { JP_F_0028F578(c); return; }
L_0028F4D0:;
SET64(2, (s32)rd32(c, (RW(16) + 104)));
{ int t = RD(2) != RD(0);  if (t) goto L_0028F508; }
SET64(2, (s32)rd32(c, (RW(8) + 13864)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028F564; }
wr32(c, (RW(16) + 28), RW(5));
wr32(c, (RW(16) + 48), RW(0));
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
wr32(c, (RW(16) + 40), RW(0));
wr32(c, (RW(16) + 44), RW(0)); goto L_0028F560;
L_0028F508:;
{ int t = RD(7) == RD(0); SET32(4, RW(16) + 108); if (t) goto L_0028F530; }
SET64(31, 0x28f518); SET32(5, RW(16) + 28); JP_F_0028F790(c);
SET32(2, RW(17) << 2);
SET64(3, rd16(c, (RW(16) + 58)));
SET32(2, RW(2) + RW(16));
wr16(c, (RW(16) + 1202), (u16)RW(3));
wr16(c, (RW(2) + 1202), (u16)RW(3)); goto L_0028F560;
L_0028F530:;
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
L_0028F560:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028F564:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_0028F578(Ctx *c) { /* func_0028F578 */
ENTER(0x28f578);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
SET32(2, RW(16) << 2);
wr64(c, (RW(29) + 32), RD(20));
SET64(20, (s64)(s32)0x4b0000);
SET32(20, RW(20) + RW(2));
SET64(20, (s32)rd32(c, (RW(20) + 32352)));
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
SET64(19, (s32)rd32(c, (RW(19) + 31752)));
SET64(31, 0x28f5d4); SET64(21, RD(8) + RD(0)); JP_F_0027B558(c);
SET64(5, RD(2) << 32);
SET64(5, RSD(5) >> 32);
wr32(c, (RW(21) + 0), RW(16));
SET64(3, RD(5) & 0x1);
SET32(5, RSW(5) >> 1);
SET32(5, RW(5) - RW(17));
wr32(c, (RW(21) + 4), RW(18));
SET64(2, RSD(5) < (s64)0);
wr16(c, (RW(21) + 30), (u16)RW(3));
{ int t = RD(18) == RD(0); if (RD(2) != 0) SET64(5, RD(0)); if (t) goto L_0028F710; }
SET32(2, RW(0) + 29970);
{ int t = RD(20) == RD(2); SET64(2, RD(0) | 0xea24); if (t) goto L_0028F620; }
if (RD(20) != RD(2)) { div_s(c, 0, RSW(5), RSW(19)); goto L_0028F714; }
SET64(2, (s64)(s32)0x4b0000); goto L_0028F630;
L_0028F620:;
SET64(2, (s64)(s32)0x4b0000);
SET32(8, RW(2) + 31792); goto L_0028F634;
L_0028F630:;
SET32(8, RW(2) + 31824);
L_0028F634:;
SET64(2, (s32)rd32(c, (RW(8) + 0)));
div_s(c, 0, RSW(5), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x28f640); goto L_0028F644; }
L_0028F644:;
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
{ int t = RD(2) == RD(0); SET64(11, RD(4) + RD(0)); if (t) goto L_0028F698; }
SET64(2, (s32)rd32(c, (RW(8) + 20)));
SET64(9, RD(0) + RD(0));
div_s(c, 0, RSW(5), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x28f684); goto L_0028F688; }
L_0028F688:;
SET64(4, c->hi.d[0]);
SET64(3, c->lo.d[0]);
SET64(7, RD(4) + RD(0)); goto L_0028F6FC;
L_0028F698:;
SET64(2, (s32)rd32(c, (RW(8) + 12)));
SET32(5, RW(5) - RW(6));
div_s(c, 0, RSW(5), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x28f6a8); goto L_0028F6AC; }
L_0028F6AC:;
SET64(6, (s32)rd32(c, (RW(8) + 16)));
SET64(3, c->hi.d[0]);
SET64(4, c->lo.d[0]);
SET64(5, RD(3) + RD(0));
SET64(2, RSD(5) < RSD(6));
{ int t = RD(2) == RD(0); SET32(9, RW(4) + 1); if (t) goto L_0028F6D8; }
SET64(2, (s32)rd32(c, (RW(8) + 28)));
SET64(3, RD(0) + RD(0));
SET32(7, RW(5) + RW(2)); goto L_0028F6FC;
L_0028F6D8:;
SET64(2, (s32)rd32(c, (RW(8) + 20)));
SET32(5, RW(5) - RW(6));
div_s(c, 0, RSW(5), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x28f6e8); goto L_0028F6EC; }
L_0028F6EC:;
SET64(3, c->lo.d[0]);
SET64(4, c->hi.d[0]);
SET32(3, RW(3) + 1);
SET64(7, RD(4) + RD(0));
L_0028F6FC:;
SET64(2, (s32)rd32(c, (RW(8) + 24)));
mul_s(c, 0, 4, RSW(2), RSW(11));
SET32(9, RW(4) + RW(9)); goto L_0028F758;
L_0028F710:;
div_s(c, 0, RSW(5), RSW(19));
L_0028F714:;
SET32(5, RW(0) + 60);
SET32(3, RW(0) + 60);
SET32(4, RW(0) + 60);
if (RD(19) == RD(0)) { rt_break(c, 0x28f724); goto L_0028F728; }
L_0028F728:;
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
L_0028F758:;
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

void JP_F_0028F790(Ctx *c) { /* func_0028F790 */
ENTER(0x28f790);
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
SET64(3, (s32)rd32(c, (RW(3) + 31752)));
SET32(2, RSW(2) >> 1);
SET32(9, RW(4) + 1);
SET32(9, RW(9) + RW(2));
SET32(2, RW(2) << 1);
div_s(c, 0, RSW(9), RSW(3));
SET64(4, (s32)rd32(c, (RW(13) + 16)));
SET64(6, (s32)rd32(c, (RW(13) + 12)));
if (RD(3) == RD(0)) { rt_break(c, 0x28f7f8); goto L_0028F7FC; }
L_0028F7FC:;
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
{ int t = RD(3) == RD(0); SET32(10, RW(10) + RW(6)); if (t) goto L_0028F864; }
if (RD(7) != RD(0)) { wr32(c, (RW(5) + 0), RW(15)); goto L_0028F868; }
SET32(2, RW(0) + 10);
div_s(c, 0, RSW(4), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x28f84c); goto L_0028F850; }
L_0028F850:;
SET64(3, c->hi.d[0]);
{ int t = RD(3) == RD(0); SET64(3, RD(9) < (u64)(s64)2); if (t) goto L_0028F864; }
SET32(2, RW(0) + 2);
if (RD(3) != 0) SET64(9, RD(2));
L_0028F864:;
wr32(c, (RW(5) + 0), RW(15));
L_0028F868:;
wr16(c, (RW(5) + 30), (u16)RW(14));
SET64(2, (s32)rd32(c, (RW(13) + 4)));
wr32(c, (RW(5) + 8), RW(10));
wr32(c, (RW(5) + 4), RW(2));
wr32(c, (RW(5) + 12), RW(4));
wr32(c, (RW(5) + 16), RW(7));
wr32(c, (RW(5) + 20), RW(9)); return;
}

void JP_F_0028F888(Ctx *c) { /* func_0028F888 */
ENTER(0x28f888);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET32(16, RW(17) + 3428);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_0028F954; }
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
SET64(31, 0x28f8fc); wr32(c, (RW(29) + 24), RW(0)); JP_F_00298DB0(c);
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
L_0028F954:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0028F968(Ctx *c) { /* func_0028F968 */
ENTER(0x28f968);
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
SET64(31, 0x28f9c8); SET32(6, RW(29) + 36); JP_F_00298DB0(c);
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
if (RD(3) != RD(0)) { SET64(16, rd64(c, (RW(29) + 48))); goto L_0028FAA0; }
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
L_0028FAA0:;
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_0028FAB0(Ctx *c) { /* func_0028FAB0 */
ENTER(0x28fab0);
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

void JP_F_0028FB00(Ctx *c) { /* func_0028FB00 */
ENTER(0x28fb00);
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
{ int t = RD(3) != RD(0); SET64(19, (s32)rd32(c, (RW(16) + 8120))); if (t) goto L_0028FC08; }
SET64(31, 0x28fb54);  JP_F_00278C30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0028FB78; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET64(31, 0x28fb6c); SET64(5, RD(5) | 0xf16); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0028FC0C;
L_0028FB78:;
SET32(5, RW(29) + 4);
SET32(6, RW(29) + 8);
SET64(31, 0x28fb88); SET32(7, RW(29) + 12); JP_F_00278C90(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x28fb94); SET32(5, RW(0) + 60); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 1); if (t) goto L_0028FBA8; }
wr32(c, (RW(19) + 276), RW(0)); goto L_0028FBD8;
L_0028FBA8:;
SET64(31, 0x28fbb0);  JP_F_00287FD0(c);
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET64(4, RD(2) + RD(0));
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2); SET64(2, RSD(3) < RSD(4)); if (t) goto L_0028FBD0; }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(29) + 12), RW(3));
SET64(2, RSD(3) < RSD(4));
L_0028FBD0:;
if (RD(2) == 0) SET64(3, RD(4));
wr32(c, (RW(19) + 276), RW(3));
L_0028FBD8:;
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(20) + RD(0));
SET64(31, 0x28fbe8); SET64(4, RD(16) + RD(0)); JP_F_0028FC30(c);
SET64(4, RD(18) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(21) + RD(0));
SET64(31, 0x28fbfc); SET64(7, (s32)rd32(c, (RW(29) + 4))); JP_F_0028FD50(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x28fc08); SET64(5, RD(18) + RD(0)); JP_F_0028FD88(c);
L_0028FC08:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0028FC0C:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_0028FC30(Ctx *c) { /* func_0028FC30 */
ENTER(0x28fc30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28fc58); SET64(19, RD(4) + RD(0)); JP_F_00292008(c);
SET64(16, RD(2) + RD(0));
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028FD34; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028FD34; }
SET64(6, (s32)rd32(c, (RW(18) + 4)));
SET32(7, RW(0) + 512);
SET32(3, RW(16) + 56);
SET64(5, (s32)rd32(c, (RW(18) + 0)));
SET64(2, RSD(6) < (s64)513);
SET64(4, RD(3) + RD(0));
if (RD(2) == 0) SET64(6, RD(7));
SET32(18, RW(19) + 3368);
SET64(31, 0x28fc98); wr32(c, (RW(3) + 512), RW(6)); JP_F_00274E00(c);
SET32(3, RW(17) << 1);
SET64(2, (s64)(s32)0x30000);
SET32(3, RW(3) + RW(17));
SET32(3, RW(3) << 3);
SET64(2, RD(2) | 0xffff);
{ int t = RD(17) != RD(2); SET32(3, RW(3) + RW(17)); if (t) goto L_0028FCC0; }
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 8), RW(0)); goto L_0028FCD0;
L_0028FCC0:;
SET32(3, RW(3) << 1);
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 8), RW(2));
wr32(c, (RW(16) + 4), RW(3));
L_0028FCD0:;
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
L_0028FD34:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_0028FD50(Ctx *c) { /* func_0028FD50 */
ENTER(0x28fd50);
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

void JP_F_0028FD88(Ctx *c) { /* func_0028FD88 */
ENTER(0x28fd88);
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
{ int t = RD(2) == RD(0); SET64(9, (s32)rd32(c, (RW(11) + 28))); if (t) goto L_0028FDD8; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0xf17);
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_0028FDD8:;
SET32(5, RW(6) + 15);
SET64(3, RSD(6) < (s64)0);
SET64(2, RSD(7) < (s64)0);
SET32(4, RW(7) + 15);
if (RD(3) != 0) SET64(6, RD(5));
SET32(3, RW(0) + 2);
if (RD(2) != 0) SET64(7, RD(4));
SET32(5, RSW(6) >> 4);
{ int t = RD(14) != RD(3); SET32(2, RSW(7) >> 4); if (t) goto L_0028FE10; }
mul_s(c, 0, 2, RSW(5), RSW(2));
SET32(2, RW(2) << 10); goto L_0028FE20;
L_0028FE10:;
mul_s(c, 0, 3, RSW(5), RSW(2));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 7);
L_0028FE20:;
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
{ int t = RD(14) != RD(8); SET32(2, RSW(2) >> 4); if (t) goto L_0028FE78; }
mul_s(c, 0, 2, RSW(3), RSW(2));
SET32(2, RW(2) << 10);
SET32(2, RW(2) + 64);
SET64(2, RD(2) < RD(10));
{ int t = RD(2) != RD(0);  if (t) goto L_0028FE98; }
SET64(2, (s32)rd32(c, (RW(11) + 32))); goto L_0028FEB0;
L_0028FE78:;
mul_s(c, 0, 3, RSW(3), RSW(2));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 7);
SET32(2, RW(2) + 64);
SET64(2, RD(2) < RD(10));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(11) + 32))); goto L_0028FEB0; }
L_0028FE98:;
SET64(5, (s64)(s32)0xff000000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(13) + RD(0));
SET64(5, RD(5) | 0xf18);
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_0028FEB0:;
{ int t = RD(2) == RD(0);  if (t) goto L_0028FEF0; }
{ int t = RSD(9) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_0028FF1C; }
SET64(4, RD(2) + RD(0));
SET32(3, RW(12) + 48);
L_0028FEC8:;
SET32(5, RW(5) + 1);
wr32(c, (RW(3) + 0), RW(4));
SET64(2, RSD(5) < RSD(9));
SET32(3, RW(3) + 4);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + RW(10)); if (t) { POLL(); goto L_0028FEC8; } }
wr32(c, (RW(12) + 376), RW(9)); goto L_0028FF20;
L_0028FEF0:;
if (RSD(9) <= 0) { wr32(c, (RW(12) + 376), RW(9)); goto L_0028FF20; }
SET64(5, RD(9) + RD(0));
SET32(5, RW(5) + -1);
L_0028FF00:;
{ int t = RD(5) != RD(0); SET32(5, RW(5) + -1); if (t) { POLL(); goto L_0028FF00; } }
L_0028FF1C:;
wr32(c, (RW(12) + 376), RW(9));
L_0028FF20:;
SET32(5, RW(12) + 48);
SET64(6, RD(9) + RD(0));
SET64(31, 0x28ff30); SET32(4, RW(12) + 384); JP_F_00291770(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_0028FF40(Ctx *c) { /* func_0028FF40 */
ENTER(0x28ff40);
SET64(2, (s32)rd32(c, (RW(4) + 3724)));
SET64(2, ~(RD(0) | RD(2)));
SET32(2, RW(2) >> 31); return;
}

static void JP_B_0028FF50(Ctx *c, u32 entry) { /* func_0028FF50 */
ENTER(entry);
switch (entry) { case 0x290014: goto L_00290014; case 0x290018: goto L_00290018; case 0x290020: goto L_00290020; case 0x290024: goto L_00290024; case 0x290028: goto L_00290028; case 0x29002c: goto L_0029002C; case 0x290034: goto L_00290034; }
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
SET64(31, 0x28ff84); SET64(17, (s32)rd32(c, (RW(16) + 8120))); JP_F_00297980(c);
{ int t = RD(2) == RD(19); SET32(18, RW(17) + 140); if (t) goto L_00290024; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x28ff98); SET32(5, RW(0) + 39); JP_F_00297980(c);
if (RD(2) != RD(19)) { SET64(2, (s8)rd8(c, (RW(18) + 88))); goto L_0028FFA8; }
SET64(2, RD(0) + RD(0)); goto L_00290024;
L_0028FFA8:;
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0028FFB8; }
SET64(2, (s32)rd32(c, (RW(17) + 364))); goto L_00290024;
L_0028FFB8:;
SET64(31, 0x28ffc0); SET64(17, (s32)rd32(c, (RW(18) + 24))); JP_F_002901B0(c);
{ int t = RD(2) != RD(0); SET32(19, RW(0) + 1); if (t) goto L_00290010; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x28ffd4); SET64(5, RD(17) + RD(0)); JP_F_00290200(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00290014; }
SET64(6, RD(20) + RD(0));
SET64(31, 0x28ffe8); SET64(5, RD(17) + RD(0)); JP_F_00290250(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00290014; }
SET64(31, 0x28fff8); SET64(5, RD(17) + RD(0)); JP_F_00290048(c);
if (RD(2) != RD(0)) { SET64(4, RD(16) + RD(0)); goto L_00290014; }
SET64(5, RD(17) + RD(0));
SET64(31, 0x29000c); SET64(4, RD(16) + RD(0)); JP_F_00290330(c);
SET64(19, RD(0) < RD(2));
L_00290010:;
SET64(4, RD(16) + RD(0));
L_00290014:;
SET64(5, RD(18) + RD(0));
L_00290018:;
SET64(31, 0x290020); SET64(6, RD(19) + RD(0)); JP_F_002900A8(c);
L_00290020:;
SET64(2, RD(19) + RD(0));
L_00290024:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00290028:;
SET64(17, rd64(c, (RW(29) + 8)));
L_0029002C:;
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
L_00290034:;
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}
void JP_F_0028FF50(Ctx *c) { JP_B_0028FF50(c, 0x28ff50); }
void JP_F_00290014(Ctx *c) { JP_B_0028FF50(c, 0x290014); }
void JP_F_00290018(Ctx *c) { JP_B_0028FF50(c, 0x290018); }
void JP_F_00290020(Ctx *c) { JP_B_0028FF50(c, 0x290020); }
void JP_F_00290024(Ctx *c) { JP_B_0028FF50(c, 0x290024); }
void JP_F_00290028(Ctx *c) { JP_B_0028FF50(c, 0x290028); }
void JP_F_0029002C(Ctx *c) { JP_B_0028FF50(c, 0x29002c); }
void JP_F_00290034(Ctx *c) { JP_B_0028FF50(c, 0x290034); }

static void JP_B_00290048(Ctx *c, u32 entry) { /* func_00290048 */
ENTER(entry);
switch (entry) { case 0x290050: goto L_00290050; }
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
SET64(4, RD(5) + RD(0));
L_00290050:;
SET32(3, RW(0) + 3);
SET64(6, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 116)));
{ int t = RD(5) == RD(3); SET64(2, RD(5) < (u64)(s64)4); if (t) goto L_00290090; }
{ int t = RD(2) == RD(0); SET64(2, RD(6) + RD(0)); if (t) goto L_0029009C; }
SET32(2, RW(0) + 2);
{ int t = RD(5) != RD(2); SET64(2, RD(6) + RD(0)); if (t) goto L_0029009C; }
SET32(2, RW(4) + -2);
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) != RD(0)) { SET32(6, RW(0) + 1); goto L_00290098; }
SET64(2, RD(6) + RD(0)); return;
L_00290090:;
SET64(2, RD(4) ^ RD(5));
SET64(6, RD(2) < (u64)(s64)1);
L_00290098:;
SET64(2, RD(6) + RD(0));
L_0029009C:;
 return;
}
void JP_F_00290048(Ctx *c) { JP_B_00290048(c, 0x290048); }
void JP_F_00290050(Ctx *c) { JP_B_00290048(c, 0x290050); }

void JP_F_002900A8(Ctx *c) { /* func_002900A8 */
ENTER(0x2900a8);
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
{ int t = RD(2) == RD(0); SET64(16, (s32)rd32(c, (RW(19) + 116))); if (t) goto L_00290144; }
SET64(5, RD(29) + RD(0));
SET64(31, 0x2900f4); SET32(6, RW(29) + 4); JP_F_00278D58(c);
SET32(18, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
if (RD(3) != RD(18)) { SET64(2, (s32)rd32(c, (RW(17) + 3648))); goto L_00290110; }
SET32(16, RW(0) + 5); goto L_00290144;
L_00290110:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 4))); goto L_00290138; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x290124); SET32(5, RW(0) + 73); JP_F_00297980(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(4, RD(2) ^ RD(18));
if (RD(4) == 0) SET64(3, RD(2));
wr32(c, (RW(29) + 4), RW(3));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
L_00290138:;
SET32(3, RW(0) + 2);
SET64(2, RD(2) ^ RD(18));
if (RD(2) == 0) SET64(16, RD(3));
L_00290144:;
SET32(2, RW(0) + 1);
{ int t = RD(20) != RD(2); SET32(2, RW(0) + 2); if (t) goto L_00290170; }
SET64(2, (s32)rd32(c, (RW(21) + 24)));
SET32(2, RW(2) + -1);
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) != RD(0)) { SET32(16, RW(0) + 2); goto L_00290188; }
wr32(c, (RW(19) + 116), RW(16)); goto L_0029018C;
L_00290170:;
{ int t = RD(16) != RD(2); SET32(3, RW(0) + 5); if (t) goto L_00290180; }
SET32(16, RW(0) + 3); goto L_00290188;
L_00290180:;
SET64(2, RD(16) ^ 0x3);
if (RD(2) == 0) SET64(16, RD(3));
L_00290188:;
wr32(c, (RW(19) + 116), RW(16));
L_0029018C:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002901B0(Ctx *c) { /* func_002901B0 */
ENTER(0x2901b0);
SET32(29, RW(29) + -16);
SET32(5, RW(4) + 13868);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, RD(0) + RD(0));
SET32(3, RW(4) + 3648);
SET64(6, (s32)rd32(c, (RW(5) + 4)));
{ int t = RSD(6) < 0; SET32(8, RW(4) + 3560); if (t) goto L_002901F4; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002901F8; }
SET64(4, RD(6) + RD(0));
SET64(6, (s32)rd32(c, (RW(8) + 36)));
SET64(5, (s32)rd32(c, (RW(5) + 8)));
SET64(31, 0x2901f0); SET64(7, (s32)rd32(c, (RW(8) + 40))); JP_F_0026EE58(c);
SET64(2, RD(2) < (u64)(s64)1);
L_002901F4:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002901F8:;
SET32(29, RW(29) + 16); return;
}

static void JP_B_00290200(Ctx *c, u32 entry) { /* func_00290200 */
ENTER(entry);
switch (entry) { case 0x29020c: goto L_0029020C; }
SET32(2, RW(0) + 2);
{ int t = RD(5) == RD(2); SET32(4, RW(4) + 2564); if (t) goto L_00290240; }
L_0029020C:;
SET64(2, RD(5) < (u64)(s64)3);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_00290230; }
SET32(2, RW(0) + 1);
if (RD(5) == RD(2)) { SET64(2, (s32)rd32(c, (RW(4) + 8))); goto L_00290244; }
 goto L_00290248;
L_00290230:;
if (RD(5) == RD(2)) { SET64(2, (s32)rd32(c, (RW(4) + 16))); goto L_00290244; }
SET32(2, RW(0) + 1); return;
L_00290240:;
SET64(2, (s32)rd32(c, (RW(4) + 12)));
L_00290244:;
SET64(2, RD(2) < (u64)(s64)1);
L_00290248:;
 return;
}
void JP_F_00290200(Ctx *c) { JP_B_00290200(c, 0x290200); }
void JP_F_0029020C(Ctx *c) { JP_B_00290200(c, 0x29020c); }

void JP_F_00290250(Ctx *c) { /* func_00290250 */
ENTER(0x290250);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
SET32(5, RW(0) + 7);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x29027c); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00290314; }
SET32(2, RW(0) + 3);
SET32(18, RW(16) + 2384);
{ int t = RD(19) != RD(2); SET32(4, RW(16) + 2316); if (t) goto L_002902D0; }
SET64(6, (s32)rd32(c, (RW(4) + 8)));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
mul_s(c, 0, 0, RSW(6), RSW(2));
SET64(6, c->lo.d[0]);
SET64(31, 0x2902b0); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_00277D68(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET64(2, RD(3) + RD(0)); if (t) goto L_00290314; }
SET64(2, (s32)rd32(c, (RW(18) + 16)));
SET32(2, RW(2) + 1);
wr32(c, (RW(18) + 16), RW(2)); goto L_00290310;
L_002902D0:;
SET32(2, RW(0) + 2);
{ int t = RD(19) != RD(2); SET64(3, RD(0) + RD(0)); if (t) goto L_00290310; }
SET64(6, (s32)rd32(c, (RW(4) + 8)));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(5, (s32)rd32(c, (RW(17) + 4)));
mul_s(c, 0, 0, RSW(6), RSW(2));
SET64(6, c->lo.d[0]);
SET64(31, 0x2902f8); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_00278210(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET64(2, RD(3) + RD(0)); if (t) goto L_00290314; }
SET64(2, (s32)rd32(c, (RW(18) + 20)));
SET32(2, RW(2) + 1);
wr32(c, (RW(18) + 20), RW(2));
L_00290310:;
SET64(2, RD(3) + RD(0));
L_00290314:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00290330(Ctx *c) { /* func_00290330 */
ENTER(0x290330);
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
{ int t = RD(2) == RD(0); SET64(21, (s32)rd32(c, (RW(16) + 8120))); if (t) goto L_00290388; }
SET64(2, (s32)rd32(c, (RW(3) + 36)));
SET64(3, (s32)rd32(c, (RW(6) + 36)));
SET64(4, (s32)rd32(c, (RW(17) + 356)));
SET32(3, RW(3) - RW(2));
SET32(20, RW(3) + RW(4));
L_00290388:;
SET64(2, (s32)rd32(c, (RW(17) + 24)));
{ int t = RD(2) == RD(0); SET64(19, (s32)rd32(c, (RW(6) + 40))); if (t) goto L_002903B0; }
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(20) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2903a8); SET64(7, RD(19) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 16))); goto L_00290488;
L_002903B0:;
SET32(2, RW(0) + 1);
if (RD(18) != RD(2)) { SET32(2, RW(18) + -1); goto L_002903CC; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2903c8); SET64(5, RD(20) + RD(0)); JP_F_00297FF8(c);
SET32(2, RW(18) + -1);
L_002903CC:;
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET64(5, RD(20) + RD(0)); if (t) goto L_002903E4; }
SET64(31, 0x2903e0); SET64(4, RD(17) + RD(0)); JP_F_00298098(c);
SET64(20, RD(2) + RD(0));
L_002903E4:;
SET64(31, 0x2903ec); SET64(4, RD(16) + RD(0)); JP_F_002998E0(c);
SET64(2, RSD(2) < (s64)1001);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00290410; }
SET64(3, (s32)rd32(c, (RW(21) + 132)));
SET64(4, (s32)rd32(c, (RW(16) + 2716)));
SET64(3, RSD(3) < RSD(4));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00290484; }
SET64(4, RD(16) + RD(0));
L_00290410:;
SET64(5, RD(29) + RD(0));
SET64(31, 0x29041c); SET32(6, RW(29) + 4); JP_F_002986A8(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
{ int t = RSD(3) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00290484; }
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET32(6, RW(29) + 8);
SET64(31, 0x29043c); SET32(7, RW(29) + 12); JP_F_002904A8(c);
SET64(7, RD(19) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 8)));
SET64(2, (s32)rd32(c, (RW(29) + 12)));
mul_s(c, 0, 6, RSW(19), RSW(6));
if (RD(2) == RD(0)) { rt_break(c, 0x290450); goto L_00290454; }
L_00290454:;
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
div_s(c, 0, RSW(6), RSW(2));
SET64(6, c->lo.d[0]);
SET64(31, 0x29046c); SET32(6, RW(20) - RW(6)); JP_F_0026EE58(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00290484; }
SET64(3, (s32)rd32(c, (RW(21) + 132)));
SET32(2, RW(0) + 1);
SET32(3, RW(3) + 1);
wr32(c, (RW(21) + 132), RW(3));
L_00290484:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00290488:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002904A8(Ctx *c) { /* func_002904A8 */
ENTER(0x2904a8);
SET32(4, RW(4) + 2564);
SET64(2, (s32)rd32(c, (RW(4) + 172)));
wr32(c, (RW(7) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 168)));
wr32(c, (RW(6) + 0), RW(3)); return;
}

void JP_F_002904C0(Ctx *c) { /* func_002904C0 */
ENTER(0x2904c0);
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
SET64(31, 0x2904f8); SET64(17, (s32)rd32(c, (RW(21) + 0))); JP_F_002905B0(c);
SET64(4, RD(16) + RD(0));
SET32(6, RW(0) + 1);
SET64(5, RD(0) + RD(0));
SET64(31, 0x29050c); SET32(22, RW(21) + 140); JP_F_0026A500(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x29051c); SET64(20, RD(2) + RD(0)); JP_F_00278A70(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1);
SET64(31, 0x290530); SET64(19, RD(2) + RD(0)); JP_F_0026A500(c);
SET32(17, RW(2) - RW(20));
SET64(7, (s64)(s32)0xff000000);
SET64(4, RD(18) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x29054c); SET64(7, RD(7) | 0xf07); JP_F_0028E908(c);
SET64(4, RD(18) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x29055c); SET64(5, RD(17) + RD(0)); JP_F_0028E860(c);
SET64(2, RD(16) + RD(0));
SET64(4, RD(18) + RD(0));
{ int t = RD(16) != RD(0); SET32(5, RW(0) + 1); if (t) goto L_00290588; }
SET64(2, (s8)rd8(c, (RW(22) + 88)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0029057C; }
wr32(c, (RW(21) + 364), RW(2));
L_0029057C:;
SET64(31, 0x290584); SET64(6, (s32)rd32(c, (RW(22) + 24))); JP_F_002959D8(c);
SET64(2, RD(0) + RD(0));
L_00290588:;
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

void JP_F_002905B0(Ctx *c) { /* func_002905B0 */
ENTER(0x2905b0);
SET32(5, RW(4) + 3560);
SET64(3, (s32)rd32(c, (RW(4) + 3684)));
SET64(2, (s32)rd32(c, (RW(5) + 36)));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 3604); if (t) goto L_00290620; }
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
L_00290620:;
 return;
}

void JP_F_00290628(Ctx *c) { /* func_00290628 */
ENTER(0x290628);
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
SET64(31, 0x290688); wr32(c, (RW(29) + 64), RW(2)); JP_F_002908D8(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002908A4; }
SET32(6, RW(29) + 52);
SET32(7, RW(29) + 56);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2906a4); SET64(5, RD(19) + RD(0)); JP_F_00290BE0(c);
SET32(5, RW(19) + 4108);
SET64(2, (s32)rd32(c, (RW(29) + 48)));
SET64(31, 0x2906b4); SET64(4, (s32)rd32(c, (RW(2) + 84))); JP_F_00291130(c);
SET64(31, 0x2906bc); SET64(4, RD(20) + RD(0)); JP_F_00290C68(c);
SET64(31, 0x2906c4);  JP_F_0029F750(c);
SET64(4, RD(23) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 1);
SET64(31, 0x2906d8); SET64(18, RD(2) + RD(0)); JP_F_0026A500(c);
SET64(5, RD(23) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 64)));
SET64(6, RD(29) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(31, 0x2906f0); SET64(16, RD(2) + RD(0)); JP_F_00293C38(c);
SET64(4, RD(23) + RD(0));
SET32(6, RW(0) + 1);
SET64(5, RD(0) + RD(0));
SET64(31, 0x290704); SET64(17, RD(2) + RD(0)); JP_F_0026A500(c);
SET64(31, 0x29070c); SET32(21, RW(2) - RW(16)); JP_F_0029F750(c);
SET64(4, (s32)rd32(c, (RW(30) + 24)));
SET64(5, RD(2) - RD(18));
SET32(4, RW(4) << 5);
SET32(4, RW(20) + RW(4));
SET64(31, 0x290724); SET32(4, RW(4) + 13880); JP_F_00299908(c);
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
SET64(31, 0x29075c); SET64(7, RD(7) | 0xf06); JP_F_0028E908(c);
SET64(4, RD(20) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x29076c); SET64(5, RD(21) + RD(0)); JP_F_0028E860(c);
{ int t = RD(16) == RD(0);  if (t) goto L_00290788; }
SET64(31, 0x29077c); SET64(4, (s32)rd32(c, (RW(29) + 48))); JP_F_00292368(c);
SET64(2, RD(16) + RD(0)); goto L_002908A4;
L_00290788:;
if (RSD(21) <= 0) { SET64(2, (s32)rd32(c, (RW(19) + 360))); goto L_00290890; }
SET64(5, RD(0) + RD(0));
SET64(31, 0x29079c); SET64(4, RD(20) + RD(0)); JP_F_00292230(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2907a8); SET64(5, (s32)rd32(c, (RW(29) + 48))); JP_F_00290D80(c);
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 48)));
SET64(31, 0x2907b8); SET64(6, RD(23) + RD(0)); JP_F_00290F10(c);
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
{ int t = RD(6) == RD(7); wr32(c, (RW(8) + 68), RW(2)); if (t) goto L_00290810; }
SET64(2, (s32)rd32(c, (RW(19) + 360)));
if (RD(2) != RD(0)) { wr32(c, (RW(19) + 360), RW(0)); goto L_00290814; }
wr32(c, (RW(19) + 360), RW(8)); goto L_00290814;
L_00290810:;
wr32(c, (RW(19) + 360), RW(0));
L_00290814:;
SET64(2, (s32)rd32(c, (RW(19) + 360)));
wr32(c, (RW(19) + 364), RW(0));
{ int t = RD(2) != RD(0); wr32(c, (RW(19) + 368), RW(0)); if (t) goto L_00290878; }
SET64(3, (s32)rd32(c, (RW(20) + 56)));
SET32(2, RW(0) + 3);
{ int t = RD(3) != RD(2);  if (t) goto L_00290858; }
SET64(2, (s32)rd32(c, (RW(30) + 24)));
SET32(2, RW(2) + -1);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0);  if (t) goto L_00290858; }
SET64(31, 0x290850); SET64(4, RD(8) + RD(0)); JP_F_00292390(c);
SET64(2, (s32)rd32(c, (RW(29) + 60))); goto L_00290864;
L_00290858:;
SET64(31, 0x290860); SET64(4, RD(8) + RD(0)); JP_F_00292378(c);
SET64(2, (s32)rd32(c, (RW(29) + 60)));
L_00290864:;
SET64(4, (s32)rd32(c, (RW(29) + 64)));
SET32(6, RW(2) + 12);
SET64(31, 0x290874); SET32(5, RW(2) + 8); JP_F_0027AEF8(c);
wr32(c, (RW(19) + 132), RW(0));
L_00290878:;
SET64(6, (s32)rd32(c, (RW(30) + 24)));
SET64(4, RD(20) + RD(0));
SET64(31, 0x290888); SET32(5, RW(0) + 1); JP_F_00295970(c);
SET64(2, RD(0) + RD(0)); goto L_002908A4;
L_00290890:;
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002908A4; }
SET64(31, 0x2908a0); SET64(4, (s32)rd32(c, (RW(29) + 48))); JP_F_00292368(c);
SET64(2, RD(0) + RD(0));
L_002908A4:;
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

void JP_F_002908D8(Ctx *c) { /* func_002908D8 */
ENTER(0x2908d8);
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
{ int t = RD(2) == RD(0); SET32(21, RW(19) + 2384); if (t) goto L_00290920; }
wr32(c, (RW(20) + 0), RW(2)); goto L_00290940;
L_00290920:;
SET64(31, 0x290928);  JP_F_002922E0(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(20) + 0), RW(2)); if (t) goto L_00290940; }
SET32(3, RW(0) + 1);
SET32(2, RW(0) + -1);
wr32(c, (RW(21) + 40), RW(3)); goto L_00290BBC;
L_00290940:;
SET64(10, (s32)rd32(c, (RW(20) + 0)));
SET64(3, RD(18) + RD(0));
SET32(4, RW(10) + 88);
SET64(2, RD(18) | RD(4));
SET64(2, RD(2) & 0x7);
{ int t = RD(2) == RD(0); SET64(5, RD(10) + RD(0)); if (t) goto L_002909C0; }
SET32(2, RW(18) + 128);
L_00290960:;
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
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_00290960; } }
SET64(2, rd64(c, (RW(16) + 4256))); goto L_002909FC;
L_002909C0:;
SET32(2, RW(18) + 128);
L_002909C4:;
SET64(6, rd64(c, (RW(3) + 0)));
SET64(7, rd64(c, (RW(3) + 8)));
SET64(8, rd64(c, (RW(3) + 16)));
SET64(9, rd64(c, (RW(3) + 24)));
wr64(c, (RW(4) + 0), RD(6));
wr64(c, (RW(4) + 8), RD(7));
wr64(c, (RW(4) + 16), RD(8));
wr64(c, (RW(4) + 24), RD(9));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_002909C4; } }
SET64(2, rd64(c, (RW(16) + 4256)));
L_002909FC:;
SET32(3, RW(0) + 3);
SET64(4, (s32)rd32(c, (RW(19) + 56)));
{ int t = RD(4) != RD(3); wr64(c, (RW(5) + 216), RD(2)); if (t) goto L_00290B10; }
SET64(2, (s32)rd32(c, (RW(18) + 24)));
SET32(2, RW(2) + -1);
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 0))); goto L_00290A4C; }
SET64(2, (s32)rd32(c, (RW(16) + 360)));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(18) + 0))); goto L_00290A4C; }
SET64(31, 0x290a34); SET64(4, (s32)rd32(c, (RW(16) + 352))); JP_F_002923D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 356)));
wr32(c, (RW(16) + 352), RW(2));
SET64(3, (s32)rd32(c, (RW(20) + 0)));
wr32(c, (RW(16) + 356), RW(3));
SET64(10, (s32)rd32(c, (RW(20) + 0)));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
L_00290A4C:;
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
wr32(c, (RW(17) + 16), RW(4)); goto L_00290B9C;
L_00290B10:;
SET64(2, (s32)rd32(c, (RW(18) + 24)));
SET32(2, RW(2) + -1);
SET64(2, RD(2) < (u64)(s64)2);
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(16) + 312))); if (t) goto L_00290B44; }
SET64(3, (s32)rd32(c, (RW(16) + 316)));
wr32(c, (RW(16) + 356), RW(5));
SET64(2, RD(2) ^ 0x1);
SET64(3, RD(3) ^ 0x1);
wr32(c, (RW(16) + 312), RW(2));
wr32(c, (RW(16) + 316), RW(3));
SET64(10, (s32)rd32(c, (RW(20) + 0)));
SET64(2, (s32)rd32(c, (RW(16) + 312)));
L_00290B44:;
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
L_00290B9C:;
SET64(3, (s32)rd32(c, (RW(10) + 8)));
SET32(4, RW(10) + 88);
wr32(c, (RW(17) + 44), RW(0));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(17) + 40), RW(0));
wr32(c, (RW(17) + 32), RW(3));
wr32(c, (RW(17) + 36), RW(4));
wr32(c, (RW(21) + 40), RW(0));
L_00290BBC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00290BE0(Ctx *c) { /* func_00290BE0 */
ENTER(0x290be0);
SET64(8, (s32)rd32(c, (RW(4) + 56)));
SET32(2, RW(0) + 3);
{ int t = RD(8) != RD(2); SET64(4, RD(5) + RD(0)); if (t) goto L_00290C58; }
SET64(3, (s32)rd32(c, (RW(4) + 164)));
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2); SET64(5, RD(3) < (u64)(s64)3); if (t) goto L_00290C18; }
if (RD(5) != RD(0)) { wr32(c, (RW(6) + 0), RW(0)); goto L_00290C5C; }
if (RD(3) == RD(8)) { SET64(5, (s32)rd32(c, (RW(4) + 356))); goto L_00290C30; }
wr32(c, (RW(6) + 0), RW(0)); goto L_00290C5C;
L_00290C18:;
SET64(2, (s32)rd32(c, (RW(4) + 352)));
SET64(3, (s32)rd32(c, (RW(2) + 64)));
wr32(c, (RW(6) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 68)));
wr32(c, (RW(7) + 0), RW(4)); return;
L_00290C30:;
SET64(4, (s32)rd32(c, (RW(4) + 352)));
SET64(3, (s32)rd32(c, (RW(5) + 64)));
SET64(2, (s32)rd32(c, (RW(4) + 64)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(6) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 68)));
SET64(2, (s32)rd32(c, (RW(5) + 68)));
SET32(3, RW(3) + RW(2));
wr32(c, (RW(7) + 0), RW(3)); return;
L_00290C58:;
wr32(c, (RW(6) + 0), RW(0));
L_00290C5C:;
wr32(c, (RW(7) + 0), RW(0)); return;
}

void JP_F_00290C68(Ctx *c) { /* func_00290C68 */
ENTER(0x290c68);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET32(17, RW(16) + 3648);
wr64(c, (RW(29) + 64), RD(18));
wr64(c, (RW(29) + 72), RD(31));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(2) != RD(0); SET32(18, RW(16) + 3428); if (t) goto L_00290D68; }
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
SET64(31, 0x290cd8); SET32(5, RW(0) + 3); JP_F_00290048(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 3); if (t) goto L_00290CF8; }
SET64(31, 0x290cec);  JP_F_00290200(c);
SET64(3, (s32)rd32(c, (RW(29) + 24)));
if (RD(2) == 0) SET64(3, RD(0));
wr32(c, (RW(29) + 24), RW(3));
L_00290CF8:;
SET64(4, RD(29) + RD(0));
SET32(5, RW(29) + 32);
SET64(31, 0x290d08); SET32(6, RW(29) + 36); JP_F_00298DB0(c);
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
L_00290D68:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00290D80(Ctx *c) { /* func_00290D80 */
ENTER(0x290d80);
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
SET64(31, 0x290df4); wr32(c, (RW(17) + 52), RW(3)); JP_F_00293420(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00290E08; }
SET64(31, 0x290e04);  JP_F_00293D80(c);
wr32(c, (RW(17) + 224), RW(2));
L_00290E08:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00290E28(c); return; }
}

void JP_F_00290E28(Ctx *c) { /* func_00290E28 */
ENTER(0x290e28);
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
SET64(31, 0x290e84); wr32(c, (RW(16) + 80), RW(2)); JP_F_00293420(c);
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 56))); goto L_00290EE0; }
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
SET64(6, (s32)rd32(c, (RW(6) + 32352)));
SET32(5, RW(5) << 2);
SET32(5, RW(5) + RW(3));
SET64(31, 0x290ec8); SET32(5, RW(5) << 3); JP_F_0027B438(c);
wr32(c, (RW(16) + 76), RW(2));
SET64(3, (s32)rd32(c, (RW(17) + 356)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(16) + 56), RW(2));
wr32(c, (RW(16) + 80), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 56)));
L_00290EE0:;
SET64(2, (s32)rd32(c, (RW(17) + 644)));
SET64(2, RSD(2) < RSD(3));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00290F00; }
wr32(c, (RW(17) + 644), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 60)));
wr32(c, (RW(17) + 648), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00290F00:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00290F10(Ctx *c) { /* func_00290F10 */
ENTER(0x290f10);
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
{ int t = RD(2) == RD(0); SET32(4, RW(18) + 4116); if (t) goto L_00290F4C; }
SET64(31, 0x290f4c); SET64(5, (s32)rd32(c, (RW(16) + 84))); JP_F_00291130(c);
L_00290F4C:;
SET64(5, RD(29) + RD(0));
SET64(4, RD(17) + RD(0));
SET32(6, RW(29) + 4);
SET64(31, 0x290f60); SET32(7, RW(29) + 8); JP_F_00290FB8(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(3, RW(0) + 3);
{ int t = RD(2) != RD(3); SET32(5, RW(18) + 4116); if (t) goto L_00290F98; }
SET64(2, (s32)rd32(c, (RW(16) + 84)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(6, (s32)rd32(c, (RW(29) + 8)));
SET64(31, 0x290f84); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_00127218(c);
SET64(3, (s32)rd32(c, (RW(16) + 84)));
SET64(2, (s32)rd32(c, (RW(29) + 8)));
wr32(c, (RW(3) + 4), RW(2)); goto L_00290FA0;
L_00290F98:;
SET64(31, 0x290fa0); SET64(4, (s32)rd32(c, (RW(16) + 84))); JP_F_00291130(c);
L_00290FA0:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00290FB8(Ctx *c) { /* func_00290FB8 */
ENTER(0x290fb8);
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
{ u32 t = RW(2); SET64(31, 0x291010); wr32(c, (RW(21) + 0), RW(0)); rt_call(c, t); }
SET32(6, RW(0) + 204);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x291020); SET64(5, (s32)rd32(c, (RW(29) + 4))); JP_F_00277B50(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(3, (s64)(s32)0x410000); if (t) goto L_002910D0; }
SET64(31, 0x291034); SET64(4, RD(16) + RD(0)); JP_F_002779B8(c);
SET64(2, RD(2) & 0x4);
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_002910F0; }
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(16) - RW(6));
SET32(2, RW(2) + 6);
SET64(2, RSD(5) < RSD(2));
{ int t = RD(2) != RD(0); SET64(3, (s64)(s32)0x410000); if (t) goto L_002910D0; }
SET64(2, rd8(c, (RW(16) + 5)));
SET32(4, RW(0) + 3);
SET64(2, RD(2) >> 3);
SET64(2, RD(2) & 0x7);
SET32(2, RW(2) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 31856)));
{ int t = RD(3) != RD(4); wr32(c, (RW(17) + 0), RW(3)); if (t) goto L_002910F0; }
SET32(2, RW(6) - RW(16));
SET32(6, RW(0) + 34);
SET32(18, RW(2) + RW(5));
SET64(4, RD(16) + RD(0));
SET64(31, 0x291098); SET64(5, RD(18) + RD(0)); JP_F_00277B50(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 0))); goto L_002910F4; }
SET64(31, 0x2910ac); SET64(4, RD(17) + RD(0)); JP_F_002779B8(c);
SET64(2, RD(2) & 0x20);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002910F0; }
SET64(5, RD(18) + RD(0));
SET64(31, 0x2910c4); SET32(6, RW(0) + 2); JP_F_00277B50(c);
{ int t = RD(2) != RD(0); SET32(2, RW(2) - RW(17)); if (t) goto L_002910E8; }
SET64(3, (s64)(s32)0x410000);
L_002910D0:;
SET32(3, RW(3) + 25452);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2)); goto L_002910F0;
L_002910E8:;
wr32(c, (RW(20) + 0), RW(17));
wr32(c, (RW(21) + 0), RW(2));
L_002910F0:;
SET64(3, (s32)rd32(c, (RW(19) + 0)));
L_002910F4:;
SET64(4, RD(19) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x291108); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00291130(Ctx *c) { /* func_00291130 */
ENTER(0x291130);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x291158); SET64(6, (s32)rd32(c, (RW(16) + 4))); JP_F_00127218(c);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET64(31, rd64(c, (RW(29) + 16)));
wr32(c, (RW(17) + 4), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00291178(Ctx *c) { /* func_00291178 */
ENTER(0x291178);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(31));
SET64(6, RD(29) + RD(0));
SET64(31, 0x29119c); SET64(5, (s32)rd32(c, (RW(17) + 8128))); JP_F_00287AD8(c);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_002911B0; }
SET64(2, RD(0) + RD(0)); goto L_002912C0;
L_002911B0:;
{ int t = RD(3) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_002912C0; }
SET64(5, RD(16) + RD(0));
SET64(31, 0x2911c4); SET32(6, RW(29) + 32); JP_F_0028DEE8(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) != RD(0); SET64(3, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_002911F0; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET32(2, RW(2) + RW(3));
SET32(16, RW(2) + -3);
{ int t = RSD(16) >= 0; SET64(4, RD(17) + RD(0)); if (t) goto L_00291244; }
SET64(16, RD(0) + RD(0)); goto L_00291244;
L_002911F0:;
SET64(2, RD(4) < RD(3));
{ int t = RD(2) != RD(0); SET64(6, (s32)rd32(c, (RW(29) + 8))); if (t) goto L_00291214; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(3) + RW(2));
SET64(2, RD(4) < RD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(4) - RW(3)); if (t) goto L_00291240; }
SET64(6, (s32)rd32(c, (RW(29) + 8)));
L_00291214:;
SET64(2, RD(4) < RD(6));
{ int t = RD(2) != RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_00291240; }
SET64(2, (s32)rd32(c, (RW(29) + 12)));
SET32(2, RW(6) + RW(2));
SET64(2, RD(4) < RD(2));
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_00291244; }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(4) - RW(6));
SET32(16, RW(2) + RW(3));
L_00291240:;
SET64(4, RD(17) + RD(0));
L_00291244:;
SET64(31, 0x29124c); SET64(5, RD(16) + RD(0)); JP_F_002912D8(c);
SET64(6, RD(0) + RD(0));
SET64(4, RD(0) + RD(0));
SET64(5, RSD(16) < (s64)4);
L_00291258:;
SET32(2, RW(0) + 3);
if (RD(5) != 0) SET64(2, RD(16));
SET64(2, RSD(4) < RSD(2));
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_0029129C; }
SET32(3, RW(4) - RW(2));
SET64(2, RSD(4) < RSD(2));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 8))); goto L_00291288; }
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(2) + RW(4)); goto L_0029128C;
L_00291288:;
SET32(2, RW(2) + RW(3));
L_0029128C:;
SET64(2, (s8)rd8(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 1); if (t) { POLL(); goto L_00291258; } }
SET32(6, RW(0) + 1);
L_0029129C:;
{ int t = RD(6) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002912B0; }
SET64(2, rd64(c, (RW(17) + 2472)));
SET64(2, RD(2) + RD(4));
wr64(c, (RW(17) + 2472), RD(2));
L_002912B0:;
SET64(3, rd64(c, (RW(17) + 2464)));
SET64(2, RD(16) + RD(0));
SET64(3, RD(3) + RD(4));
wr64(c, (RW(17) + 2464), RD(3));
L_002912C0:;
SET64(16, rd64(c, (RW(29) + 48)));
SET64(17, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002912D8(Ctx *c) { /* func_002912D8 */
ENTER(0x2912d8);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2912ec); SET64(5, (s32)rd32(c, (RW(4) + 8128))); JP_F_00287BB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002912F8(Ctx *c) { /* func_002912F8 */
ENTER(0x2912f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(6, RD(29) + RD(0));
SET64(31, 0x291314); SET64(5, (s32)rd32(c, (RW(16) + 8128))); JP_F_002880B0(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(5, RW(29) + 4);
SET32(6, RW(29) + 8);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00291340; }
SET64(31, 0x291330);  JP_F_00288838(c);
SET64(4, rd64(c, (RW(16) + 2456)));
SET64(31, 0x29133c); SET64(5, (s32)rd32(c, (RW(29) + 4))); JP_F_002889F0(c);
wr64(c, (RW(16) + 2456), RD(2));
L_00291340:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00291350(Ctx *c) { /* func_00291350 */
ENTER(0x291350);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 5);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x291374); SET32(18, RW(17) + 9120); JP_F_00297980(c);
SET64(5, RD(18) + RD(0));
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00291494; }
SET64(31, 0x291388); wr32(c, (RW(17) + 8120), RW(18)); JP_F_002914B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00291494; }
SET64(31, 0x291398);  JP_F_002934E0(c);
SET64(31, 0x2913a0);  JP_F_0027AD88(c);
SET64(16, RD(2) + RD(0));
SET64(5, (s64)(s32)0x290000);
SET32(5, RW(5) + 6280);
SET64(4, RD(16) + RD(0));
{ int t = RD(16) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_002913E0; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, RD(0) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(5) | 0xf0a);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_002913E0:;
SET64(31, 0x2913e8);  JP_F_00278788(c);
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00291420; }
SET64(31, 0x2913f8); SET64(4, RD(16) + RD(0)); JP_F_00291A58(c);
SET64(4, RD(0) + RD(0));
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0xf0b);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00291420:;
SET64(31, 0x291428); SET64(4, RD(17) + RD(0)); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x291438); SET32(5, RW(0) + 1); JP_F_0027AF90(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x291444); SET32(5, RW(0) + 1); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 2);
SET64(31, 0x291454); SET64(6, RD(2) + RD(0)); JP_F_0027AF90(c);
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(17) + 56)));
SET64(31, 0x291464); SET32(5, RW(0) + 6); JP_F_0027AF90(c);
SET64(31, 0x29146c); wr32(c, (RW(18) + 0), RW(16)); JP_F_00295CA8(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00291490; }
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
SET64(5, (s32)rd32(c, (RW(2) + 544)));
SET64(2, (s64)(s32)0x540000);
SET64(6, (s32)rd32(c, (RW(3) + 548)));
SET64(31, 0x291490); SET64(7, (s32)rd32(c, (RW(2) + 552))); JP_F_0028D298(c);
L_00291490:;
SET64(2, RD(0) + RD(0));
L_00291494:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002914B0(Ctx *c) { /* func_002914B0 */
ENTER(0x2914b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2914c4); SET64(16, RD(5) + RD(0)); JP_F_002916A8(c);
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 8))); if (t) goto L_002914E8; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0xf15);
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_002914E8:;
SET64(2, (s64)(s32)0x540000);
SET64(4, (s64)(s32)0x540000);
SET32(7, RW(2) + 432);
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
SET32(11, RW(4) + 472);
ldl(c, 8, (RW(11) + 7));
ldr(c, 8, (RW(11) + 0));
sdl(c, 8, (RW(16) + 47));
sdr(c, 8, (RW(16) + 40));
SET32(8, RW(0) + 192);
SET32(9, RW(0) + 1);
SET64(5, RD(3) + RD(0));
SET32(11, RW(2) + 480);
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
SET64(31, 0x291630); wr32(c, (RW(16) + 372), RW(0)); JP_F_00291770(c);
wr32(c, (RW(16) + 132), RW(0));
wr32(c, (RW(16) + 136), RW(0));
SET64(31, 0x291640); SET32(4, RW(16) + 140); JP_F_00291810(c);
SET32(3, RW(0) + -1);
SET64(2, (s64)(s32)0x7fff0000);
wr32(c, (RW(16) + 268), RW(3));
SET64(2, RD(2) | 0xffff);
wr32(c, (RW(16) + 272), RW(0));
wr32(c, (RW(16) + 276), RW(2));
SET64(31, 0x291660); SET32(4, RW(16) + 280); JP_F_0028EDA0(c);
SET64(31, 0x291668); SET32(4, RW(16) + 4096); JP_F_00291830(c);
SET32(4, RW(0) + 15);
SET32(2, RW(16) + 4244);
SET32(3, RW(16) + 3948);
L_00291678:;
SET32(4, RW(4) + -1);
wr32(c, (RW(3) + 0), RW(2));
SET32(3, RW(3) + -232);
{ int t = RSD(4) >= 0; SET32(2, RW(2) + -8); if (t) { POLL(); goto L_00291678; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002916A8(Ctx *c) { /* func_002916A8 */
ENTER(0x2916a8);
SET64(5, (s64)(s32)0x540000);
SET32(3, RW(5) + 432);
SET64(2, (s32)rd32(c, (RW(3) + 28)));
SET32(2, RW(2) + -1);
SET64(2, RD(2) < (u64)(s64)16);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(3) + 16))); goto L_002916D0; }
L_002916C4:;
SET32(2, RW(0) + -1); return;
L_002916D0:;
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x540000); if (t) goto L_002916E8; }
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ int t = RD(2) != RD(0);  if (t) goto L_00291764; }
SET64(2, (s64)(s32)0x540000);
L_002916E8:;
SET64(3, RD(0) + RD(0));
SET32(4, RW(2) + 472);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
L_002916F8:;
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_002916C4; } }
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 0))); { POLL(); goto L_002916F8; } }
SET32(2, RW(5) + 432);
SET64(4, (s32)rd32(c, (RW(2) + 28)));
{ int t = RSD(4) <= 0; SET64(3, RD(0) + RD(0)); if (t) goto L_00291764; }
SET64(2, (s64)(s32)0x540000);
SET64(5, RD(4) + RD(0));
SET32(4, RW(2) + 480);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
L_00291740:;
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_002916C4; } }
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < RSD(5));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 0))); { POLL(); goto L_00291740; } }
L_00291764:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00291770(Ctx *c) { /* func_00291770 */
ENTER(0x291770);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
{ int t = RSD(6) <= 0; wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_002917F4; }
SET64(18, RD(5) + RD(0));
SET64(17, RD(6) + RD(0));
SET32(19, RW(0) + 1);
L_002917A0:;
wr32(c, (RW(16) + 0), RW(0));
SET32(4, RW(16) + 12);
wr32(c, (RW(16) + 4), RW(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2917b8); SET32(17, RW(17) + -1); JP_F_00297F88(c);
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
SET64(31, 0x2917e8); wr32(c, (RW(16) + 80), RW(0)); JP_F_00291810(c);
wr32(c, (RW(16) + 224), RW(0));
{ int t = RD(17) != RD(0); SET32(16, RW(16) + 232); if (t) { POLL(); goto L_002917A0; } }
L_002917F4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00291810(Ctx *c) { /* func_00291810 */
ENTER(0x291810);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + -1);
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 32);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00275270(c); return; }
}

void JP_F_00291830(Ctx *c) { /* func_00291830 */
ENTER(0x291830);
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
L_00291860:;
SET32(2, RW(7) + RW(5));
SET32(3, RW(8) + RW(5));
SET32(6, RW(6) + -1);
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(3) + 0), RW(0));
{ int t = RSD(6) >= 0; SET32(5, RW(5) + 8); if (t) { POLL(); goto L_00291860; } }
 return;
}

void JP_F_00291888(Ctx *c) { /* func_00291888 */
ENTER(0x291888);
SET64(3, RD(5) + RD(0));
SET32(29, RW(29) + -16);
SET64(2, RSD(3) < (s64)-3);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(2) != RD(0); SET64(6, RSD(3) < (s64)-1); if (t) goto L_002918B0; }
{ int t = RD(6) != RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_002918C0; }
{ int t = RD(3) == RD(0);  if (t) goto L_002918C0; }
L_002918B0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_002918C0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002918C8(Ctx *c) { /* func_002918C8 */
ENTER(0x2918c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(16, (s32)rd32(c, (RW(18) + 8120)));
SET64(17, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(17) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00291A3C; }
SET64(2, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
SET32(12, RW(2) + 432);
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
SET32(11, RW(3) + 472);
ldl(c, 2, (RW(16) + 47));
ldr(c, 2, (RW(16) + 40));
sdl(c, 2, (RW(11) + 7));
sdr(c, 2, (RW(11) + 0));
SET64(8, (s64)(s32)0x540000);
SET32(9, RW(5) + 480);
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
wr32(c, (RW(6) + 544), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 4100)));
wr32(c, (RW(7) + 548), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 4104)));
SET64(31, 0x291a08); wr32(c, (RW(8) + 552), RW(2)); JP_F_00293908(c);
SET64(31, 0x291a10); SET64(4, RD(17) + RD(0)); JP_F_00291A58(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_00291A38; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0xf0c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00291A38:;
wr32(c, (RW(16) + 0), RW(0));
L_00291A3C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00291A58(Ctx *c) { /* func_00291A58 */
ENTER(0x291a58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0027AF10(c); return; }
}

void JP_F_00291A70(Ctx *c) { /* func_00291A70 */
ENTER(0x291a70);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00291A78(Ctx *c) { /* func_00291A78 */
ENTER(0x291a78);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00291A80(Ctx *c) { /* func_00291A80 */
ENTER(0x291a80);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00291A88(Ctx *c) { /* func_00291A88 */
ENTER(0x291a88);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00291A90(Ctx *c) { /* func_00291A90 */
ENTER(0x291a90);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xf0d);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_00291AB0(Ctx *c) { /* func_00291AB0 */
ENTER(0x291ab0);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xf0d);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
}

void JP_F_00291AD0(Ctx *c) { /* func_00291AD0 */
ENTER(0x291ad0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x291af4); SET32(18, RW(16) + 3368); JP_F_00292240(c);
SET32(3, RW(0) + -1);
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00291B10; }
wr32(c, (RW(17) + 0), RW(0));
SET64(2, RD(0) + RD(0)); goto L_00291B58;
L_00291B10:;
SET64(31, 0x291b18);  JP_F_002923F8(c);
SET64(4, RD(16) + RD(0));
SET64(3, RD(2) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(3) != RD(0); SET64(5, RD(3) + RD(0)); if (t) goto L_00291B38; }
wr32(c, (RW(17) + 0), RW(0)); goto L_00291B58;
L_00291B38:;
SET64(31, 0x291b40);  JP_F_00291B70(c);
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s32)rd32(c, (RW(3) + 20)));
wr32(c, (RW(18) + 636), RW(4));
SET64(5, (s32)rd32(c, (RW(3) + 24)));
wr32(c, (RW(18) + 640), RW(5));
L_00291B58:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00291B70(Ctx *c) { /* func_00291B70 */
ENTER(0x291b70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x291b9c); SET64(17, (s32)rd32(c, (RW(16) + 8120))); JP_F_002921C8(c);
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
{ int t = RD(7) != RD(0); wr32(c, (RW(8) + 64), RW(2)); if (t) goto L_00291C50; }
SET32(2, RW(0) + 2);
wr32(c, (RW(8) + 72), RW(2)); goto L_00291C54;
L_00291C50:;
wr32(c, (RW(8) + 72), RW(10));
L_00291C54:;
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

void JP_F_00291D78(Ctx *c) { /* func_00291D78 */
ENTER(0x291d78);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x291d98); SET64(4, RD(29) + RD(0)); JP_F_0028ABB0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x291da4); SET64(5, RD(17) + RD(0)); JP_F_00291DC8(c);
SET64(4, RD(29) + RD(0));
SET64(31, 0x291db0); SET64(16, RD(2) + RD(0)); JP_F_0028ABC8(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00291DC8(Ctx *c) { /* func_00291DC8 */
ENTER(0x291dc8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x291df0); SET64(19, (s32)rd32(c, (RW(17) + 8120))); JP_F_00291E98(c);
SET64(18, RD(2) + RD(0));
SET32(2, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(16) + RD(0));
{ int t = RD(3) == RD(2); SET64(4, RD(17) + RD(0)); if (t) goto L_00291E30; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0xf0e);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0028A8F8(c); return; }
L_00291E30:;
SET64(31, 0x291e38);  JP_F_00292180(c);
SET64(5, (s64)(s32)0xff000000);
SET64(3, (s32)rd32(c, (RW(19) + 112)));
SET64(4, RD(17) + RD(0));
{ int t = RD(3) == RD(2); SET64(5, RD(5) | 0xf0f); if (t) goto L_00291E68; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0028A8F8(c); return; }
L_00291E68:;
wr32(c, (RW(18) + 0), RW(0));
SET64(31, 0x291e74); SET64(4, RD(3) + RD(0)); JP_F_002923A8(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00291E98(Ctx *c) { /* func_00291E98 */
ENTER(0x291e98);
SET32(2, RW(5) + -8); return;
}

void JP_F_00291EA0(Ctx *c) { /* func_00291EA0 */
ENTER(0x291ea0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(6, RD(29) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(16, (s32)rd32(c, (RW(17) + 8120)));
SET64(31, 0x291ec4); SET64(5, RD(16) + RD(0)); JP_F_00291F10(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00291F00; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 116), RW(2)); if (t) goto L_00291EF0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x291ee8); SET32(5, RW(0) + 48); JP_F_00297980(c);
if (RD(2) != RD(0)) { SET32(2, RW(0) + 200); goto L_00291EF4; }
L_00291EF0:;
SET32(2, RW(0) + 192);
L_00291EF4:;
wr32(c, (RW(16) + 120), RW(2));
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
L_00291F00:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00291F10(Ctx *c) { /* func_00291F10 */
ENTER(0x291f10);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x291f38); wr32(c, (RW(18) + 0), RW(0)); JP_F_00292008(c);
SET64(4, RD(2) + RD(0));
if (RD(4) == RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_00291FF4; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00291FF0; }
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
SET64(31, 0x291fc8); wr32(c, (RW(29) + 4), RW(2)); JP_F_002790A0(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0xf1b); if (t) goto L_00291FE8; }
SET64(31, 0x291fe0);  JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_00291FF4;
L_00291FE8:;
SET32(3, RW(0) + 1);
wr32(c, (RW(18) + 0), RW(3));
L_00291FF0:;
SET64(16, rd64(c, (RW(29) + 32)));
L_00291FF4:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00292008(Ctx *c) { /* func_00292008 */
ENTER(0x292008);
SET64(3, (s32)rd32(c, (RW(4) + 13864)));
SET64(2, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 8120)));
{ int t = RD(3) == RD(0); SET32(5, RW(3) + 2768); if (t) goto L_00292030; }
SET64(2, (s32)rd32(c, (RW(4) + 136)));
SET64(3, RD(0) + RD(0));
SET64(3, RSD(3) < RSD(2));
SET64(2, RD(0) + RD(0));
if (RD(3) == 0) SET64(2, RD(5));
L_00292030:;
 return;
}

void JP_F_00292038(Ctx *c) { /* func_00292038 */
ENTER(0x292038);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x292054); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00292078; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x188);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00292078:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x292084); SET64(4, RD(16) + RD(0)); JP_F_00292180(c);
SET64(3, RD(2) + RD(0));
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(3) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002920A8; }
SET64(31, 0x29209c); SET64(5, RD(5) | 0xf30); JP_F_0028A8F8(c);
SET64(2, (s32)rd32(c, (RW(16) + 2428))); goto L_002920B8;
L_002920A8:;
SET64(2, (s32)rd32(c, (RW(3) + 4)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 4), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 2428)));
L_002920B8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET32(2, RW(2) + 1);
SET64(31, rd64(c, (RW(29) + 16)));
wr32(c, (RW(16) + 2428), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002920D8(Ctx *c) { /* func_002920D8 */
ENTER(0x2920d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2920f4); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00292118; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x189);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00292118:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x292124); SET64(4, RD(16) + RD(0)); JP_F_00292180(c);
SET64(6, RD(2) + RD(0));
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(6) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00292148; }
SET64(31, 0x29213c); SET64(5, RD(5) | 0xf31); JP_F_0028A8F8(c);
SET64(2, (s32)rd32(c, (RW(16) + 2428))); goto L_00292160;
L_00292148:;
SET64(2, (s32)rd32(c, (RW(6) + 4)));
SET32(2, RW(2) + -1);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(0));
wr32(c, (RW(6) + 4), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 2428)));
L_00292160:;
SET64(17, rd64(c, (RW(29) + 8)));
SET32(2, RW(2) + -1);
SET64(31, rd64(c, (RW(29) + 16)));
wr32(c, (RW(16) + 2428), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00292180(Ctx *c) { /* func_00292180 */
ENTER(0x292180);
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
SET32(4, RW(4) + 5800);
SET64(7, RD(0) + RD(0));
SET32(6, RW(2) + 384);
SET32(3, RW(4) + 8);
L_00292198:;
SET32(4, RW(4) + 136);
SET64(2, RD(6) + RD(0));
{ int t = RD(3) == RD(5); SET32(6, RW(6) + 232); if (t) goto L_002921C0; }
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < (s64)16);
{ int t = RD(2) != RD(0); SET32(3, RW(4) + 8); if (t) { POLL(); goto L_00292198; } }
SET64(2, RD(0) + RD(0));
L_002921C0:;
 return;
}

void JP_F_002921C8(Ctx *c) { /* func_002921C8 */
ENTER(0x2921c8);
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
SET64(7, RD(0) + RD(0));
SET64(6, (s32)rd32(c, (RW(2) + 376)));
{ int t = RSD(6) <= 0; SET32(3, RW(2) + 384); if (t) goto L_00292204; }
SET32(4, RW(4) + 5800);
L_002921E0:;
SET64(2, RD(4) + RD(0));
{ int t = RD(3) == RD(5); SET32(4, RW(4) + 136); if (t) goto L_00292208; }
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < RSD(6));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 232); if (t) { POLL(); goto L_002921E0; } }
L_00292204:;
SET64(2, RD(0) + RD(0));
L_00292208:;
 return;
}

void JP_F_00292210(Ctx *c) { /* func_00292210 */
ENTER(0x292210);
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET32(2, RW(0) + 1);
wr32(c, (RW(3) + 124), RW(2)); return;
}

void JP_F_00292220(Ctx *c) { /* func_00292220 */
ENTER(0x292220);
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET64(2, (s32)rd32(c, (RW(3) + 124))); return;
}

void JP_F_00292230(Ctx *c) { /* func_00292230 */
ENTER(0x292230);
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
wr32(c, (RW(2) + 128), RW(5)); return;
}

void JP_F_00292240(Ctx *c) { /* func_00292240 */
ENTER(0x292240);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x292258); SET64(4, RD(29) + RD(0)); JP_F_0028ABB0(c);
SET64(5, (s32)rd32(c, (RW(16) + 8120)));
SET64(16, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(5) + 376)));
{ int t = RSD(2) <= 0; SET32(4, RW(5) + 384); if (t) goto L_002922AC; }
SET64(3, RD(2) + RD(0));
SET32(7, RW(0) + 2);
SET32(6, RW(0) + 4);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
L_00292280:;
{ int t = RD(2) == RD(7); SET32(4, RW(4) + 232); if (t) goto L_00292290; }
if (RD(2) != RD(6)) { SET32(3, RW(3) + -1); goto L_00292298; }
L_00292290:;
SET32(16, RW(16) + 1);
SET32(3, RW(3) + -1);
L_00292298:;
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 0))); { POLL(); goto L_00292280; } }
L_002922AC:;
SET64(3, (s32)rd32(c, (RW(5) + 124)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET32(2, RW(0) + -1); if (t) goto L_002922C0; }
if (RD(16) == 0) SET64(16, RD(2));
L_002922C0:;
SET64(31, 0x2922c8); SET64(4, RD(29) + RD(0)); JP_F_0028ABC8(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002922E0(Ctx *c) { /* func_002922E0 */
ENTER(0x2922e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2922f8); SET64(4, RD(29) + RD(0)); JP_F_0028ABB0(c);
SET64(2, (s32)rd32(c, (RW(16) + 8120)));
SET64(3, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 376)));
{ int t = RSD(4) <= 0; SET32(16, RW(2) + 384); if (t) goto L_00292344; }
SET64(2, rd64(c, (RW(16) + 0))); goto L_00292328;
L_00292318:;
SET64(2, RSD(3) < RSD(4));
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 232); if (t) goto L_00292344; }
SET64(2, rd64(c, (RW(16) + 0)));
L_00292328:;
if (RD(2) != RD(0)) { SET32(3, RW(3) + 1); { POLL(); goto L_00292318; } }
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(2));
L_00292344:;
SET64(2, RD(3) ^ RD(4));
SET64(4, RD(29) + RD(0));
SET64(31, 0x292354); if (RD(2) == 0) SET64(16, RD(0)); JP_F_0028ABC8(c);
SET64(31, rd64(c, (RW(29) + 24)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00292368(Ctx *c) { /* func_00292368 */
ENTER(0x292368);
if (RD(4) != RD(0)) { wr32(c, (RW(4) + 0), RW(0)); goto L_00292370; }
L_00292370:;
 return;
}

void JP_F_00292378(Ctx *c) { /* func_00292378 */
ENTER(0x292378);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 2); if (t) goto L_00292384; }
wr32(c, (RW(4) + 0), RW(2));
L_00292384:;
 return;
}

void JP_F_00292390(Ctx *c) { /* func_00292390 */
ENTER(0x292390);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_0029239C; }
wr32(c, (RW(4) + 0), RW(2));
L_0029239C:;
 return;
}

void JP_F_002923A8(Ctx *c) { /* func_002923A8 */
ENTER(0x2923a8);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_002923C8; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) != RD(2)) { wr32(c, (RW(4) + 0), RW(0)); goto L_002923C8; }
SET32(2, RW(0) + 3);
wr32(c, (RW(4) + 0), RW(2)); return;
L_002923C8:;
 return;
}

void JP_F_002923D0(Ctx *c) { /* func_002923D0 */
ENTER(0x2923d0);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_002923F0; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) != RD(2)) { wr32(c, (RW(4) + 0), RW(0)); goto L_002923F0; }
SET32(2, RW(0) + 2);
wr32(c, (RW(4) + 0), RW(2)); return;
L_002923F0:;
 return;
}

void JP_F_002923F8(Ctx *c) { /* func_002923F8 */
ENTER(0x2923f8);
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
SET64(31, 0x292438); SET64(23, RD(5) + RD(0)); JP_F_0028ABB0(c);
SET64(19, (s32)rd32(c, (RW(16) + 8120)));
SET64(2, (s32)rd32(c, (RW(19) + 376)));
SET32(16, RW(19) + 384);
{ int t = RSD(2) <= 0; wr32(c, (RW(23) + 0), RW(0)); if (t) goto L_0029248C; }
SET64(17, RD(2) + RD(0));
SET32(22, RW(0) + 2);
SET32(21, RW(0) + 4);
L_00292458:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) == RD(22); SET64(4, RD(18) + RD(0)); if (t) goto L_00292470; }
if (RD(2) != RD(21)) { SET32(17, RW(17) + -1); goto L_00292484; }
SET64(4, RD(18) + RD(0));
L_00292470:;
SET64(31, 0x292478); SET64(5, RD(16) + RD(0)); JP_F_00292870(c);
SET32(20, RW(20) + 1);
if (RD(2) != 0) SET64(18, RD(16));
SET32(17, RW(17) + -1);
L_00292484:;
{ int t = RD(17) != RD(0); SET32(16, RW(16) + 232); if (t) { POLL(); goto L_00292458; } }
L_0029248C:;
SET32(2, RW(0) + 1);
{ int t = RD(20) != RD(2);  if (t) goto L_002924A4; }
SET64(2, (s32)rd32(c, (RW(19) + 124)));
if (RD(2) != RD(0)) { wr32(c, (RW(23) + 0), RW(20)); goto L_002924A4; }
L_002924A4:;
SET64(31, 0x2924ac); SET64(4, RD(29) + RD(0)); JP_F_0028ABC8(c);
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

void JP_F_002924E0(Ctx *c) { /* func_002924E0 */
ENTER(0x2924e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2924fc); SET64(17, RD(6) + RD(0)); JP_F_002926D8(c);
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_00292514; }
SET64(3, (s32)rd32(c, (RW(2) + 84)));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(3) + 4))); goto L_00292520; }
wr32(c, (RW(16) + 0), RW(0));
L_00292514:;
wr32(c, (RW(17) + 0), RW(0)); goto L_0029252C;
L_00292520:;
SET64(3, (s32)rd32(c, (RW(3) + 0)));
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(16) + 0), RW(3));
L_0029252C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00292540(Ctx *c) { /* func_00292540 */
ENTER(0x292540);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x292558); SET64(17, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(16, RD(2) + RD(0));
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(17) + RD(0));
{ int t = RD(16) == RD(0); SET64(5, RD(5) | 0x187); if (t) goto L_00292580; }
SET64(31, 0x292574); SET64(4, RD(0) + RD(0)); JP_F_0028A8F8(c);
SET64(2, RD(0) + RD(0)); goto L_002925A4;
L_00292580:;
SET64(31, 0x292588);  JP_F_002925B8(c);
SET32(3, RW(0) + 1);
SET64(5, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 2408)));
{ int t = RD(2) != RD(3); SET64(4, RSD(16) < RSD(5)); if (t) goto L_002925A0; }
SET32(5, RW(5) - RW(4));
L_002925A0:;
SET64(2, RD(5) + RD(0));
L_002925A4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002925B8(Ctx *c) { /* func_002925B8 */
ENTER(0x2925b8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2925d4); SET64(4, RD(29) + RD(0)); JP_F_0028ABB0(c);
SET32(5, RW(29) + 4);
SET32(6, RW(29) + 8);
SET64(31, 0x2925e4); SET64(4, RD(16) + RD(0)); JP_F_00292770(c);
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET64(3, (s32)rd32(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(2, RD(2) ^ 0x4);
SET32(5, RW(0) + 15);
if (RD(2) != 0) SET64(3, RD(0));
SET64(31, 0x292604); wr32(c, (RW(29) + 8), RW(3)); JP_F_00297980(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
if (RD(2) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_00292660; }
{ int t = RD(17) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00292630; }
SET64(6, (s32)rd32(c, (RW(2) + 60)));
SET64(31, 0x292628); SET64(5, (s32)rd32(c, (RW(2) + 56))); JP_F_00299400(c);
if (RD(2) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_00292660; }
L_00292630:;
SET64(2, (s32)rd32(c, (RW(29) + 8)));
if (RD(2) == RD(0)) { SET32(16, RW(0) + 1); goto L_00292660; }
if (RD(17) == RD(0)) { SET32(16, RW(0) + 2); goto L_00292660; }
SET64(6, (s32)rd32(c, (RW(2) + 60)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x292654); SET64(5, (s32)rd32(c, (RW(2) + 56))); JP_F_00299400(c);
if (RD(2) == RD(0)) { SET32(16, RW(0) + 1); goto L_00292660; }
SET32(16, RW(0) + 2);
L_00292660:;
SET64(31, 0x292668); SET64(4, RD(29) + RD(0)); JP_F_0028ABC8(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00292680(Ctx *c) { /* func_00292680 */
ENTER(0x292680);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x292694); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x183); if (t) goto L_002926B8; }
SET64(31, 0x2926ac); SET64(4, RD(0) + RD(0)); JP_F_0028A8F8(c);
SET64(2, RD(0) + RD(0)); goto L_002926C4;
L_002926B8:;
SET64(31, 0x2926c0);  JP_F_002926D8(c);
SET64(2, RD(0) < RD(2));
L_002926C4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002926D8(Ctx *c) { /* func_002926D8 */
ENTER(0x2926d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2926f0); SET64(4, RD(29) + RD(0)); JP_F_0028ABB0(c);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 72)));
SET32(2, RW(0) + 4);
SET32(5, RW(29) + 4);
{ int t = RD(3) == RD(2); SET32(6, RW(29) + 8); if (t) goto L_00292710; }
wr32(c, (RW(29) + 8), RW(0)); goto L_00292754;
L_00292710:;
SET64(31, 0x292718);  JP_F_00292770(c);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 8)));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 15); if (t) goto L_00292754; }
SET64(31, 0x292730);  JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00292754; }
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET64(6, (s32)rd32(c, (RW(2) + 60)));
SET64(31, 0x292748); SET64(5, (s32)rd32(c, (RW(2) + 56))); JP_F_00299400(c);
SET64(3, (s32)rd32(c, (RW(29) + 8)));
if (RD(2) == 0) SET64(3, RD(0));
wr32(c, (RW(29) + 8), RW(3));
L_00292754:;
SET64(31, 0x29275c); SET64(4, RD(29) + RD(0)); JP_F_0028ABC8(c);
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00292770(Ctx *c) { /* func_00292770 */
ENTER(0x292770);
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
{ int t = RSD(3) <= 0; wr32(c, (RW(17) + 0), RW(0)); if (t) goto L_00292824; }
SET64(19, RD(3) + RD(0));
SET32(22, RW(0) + 2);
SET32(21, RW(0) + 4);
L_002927C8:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) == RD(22)) { SET64(4, (s32)rd32(c, (RW(18) + 0))); goto L_002927E0; }
if (RD(2) != RD(21)) { SET32(19, RW(19) + -1); goto L_0029281C; }
SET64(4, (s32)rd32(c, (RW(18) + 0)));
L_002927E0:;
SET64(5, RD(16) + RD(0));
SET64(31, 0x2927ec); SET32(20, RW(20) + 1); JP_F_00292870(c);
{ int t = RD(2) == RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00292808; }
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(18) + 0), RW(16)); goto L_00292818;
L_00292808:;
SET64(31, 0x292810); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_00292870(c);
if (RD(2) != RD(0)) { wr32(c, (RW(17) + 0), RW(16)); goto L_00292818; }
L_00292818:;
SET32(19, RW(19) + -1);
L_0029281C:;
{ int t = RD(19) != RD(0); SET32(16, RW(16) + 232); if (t) { POLL(); goto L_002927C8; } }
L_00292824:;
{ int t = RSD(20) > 0; SET32(2, RW(0) + 1); if (t) goto L_00292838; }
wr32(c, (RW(18) + 0), RW(0)); goto L_00292840;
L_00292838:;
{ int t = RD(20) != RD(2); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00292848; }
L_00292840:;
wr32(c, (RW(17) + 0), RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00292848:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00292870(Ctx *c) { /* func_00292870 */
ENTER(0x292870);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00292884; }
SET64(3, (s32)rd32(c, (RW(4) + 56)));
SET64(2, (s32)rd32(c, (RW(5) + 56)));
SET64(2, RSD(2) < RSD(3));
L_00292884:;
 return;
}

void JP_F_00292890(Ctx *c) { /* func_00292890 */
ENTER(0x292890);
SET64(7, RD(4) + RD(0));
SET64(3, (s64)(s32)0xfff0000);
SET64(4, (s32)rd32(c, (RW(7) + 8)));
SET64(3, RD(3) | 0xffff);
SET64(6, (s32)rd32(c, (RW(7) + 4)));
SET32(4, RW(4) << 4);
SET32(4, RW(4) + RW(6));
SET32(4, RW(4) + 16);
SET64(4, RD(4) & RD(3));
{ int t = RD(5) == RD(4); SET64(2, RD(0) + RD(0)); if (t) goto L_002928D4; }
SET64(2, (s32)rd32(c, (RW(7) + 0)));
SET32(2, RW(5) - RW(2));
SET32(4, RW(2) + 2047);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(4));
SET32(2, RSW(2) >> 11);
L_002928D4:;
 return;
}

void JP_F_002928E0(Ctx *c) { /* func_002928E0 */
ENTER(0x2928e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2928f4); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
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
SET32(29, RW(29) + 16); { JP_F_001186F8(c); return; }
}

void JP_F_00292948(Ctx *c) { /* func_00292948 */
ENTER(0x292948);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29295c); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
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
SET32(29, RW(29) + 16); { JP_F_001186F8(c); return; }
}

void JP_F_002929B0(Ctx *c) { /* func_002929B0 */
ENTER(0x2929b0);
SET64(6, RD(6) << 32);
SET64(5, RD(5) << 32);
SET64(6, RD(6) >> 4);
SET64(7, RD(7) << 32);
SET64(5, RD(5) | RD(6));
SET64(7, RD(7) >> 32);
SET64(5, RD(5) | RD(7));
wr64(c, (RW(4) + 0), RD(5)); return;
}

void JP_F_002929D8(Ctx *c) { /* func_002929D8 */
ENTER(0x2929d8);
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
SET64(31, 0x292a2c); wr32(c, (RW(29) + 8), RW(2)); JP_F_0010F660(c);
wr32(c, (RW(16) + 64), RW(2));
SET64(31, 0x292a38); SET64(4, RD(16) + RD(0)); JP_F_00292A50(c);
wr64(c, (RW(16) + 72), RD(0));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00292A50(Ctx *c) { /* func_00292A50 */
ENTER(0x292a50);
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
{ int t = RSD(3) <= 0; wr32(c, (RW(17) + 92), RW(0)); if (t) goto L_00292ABC; }
SET64(3, (s32)rd32(c, (RW(17) + 80)));
SET32(4, RW(0) + -1);
L_00292A98:;
wr32(c, (RW(3) + 16), RW(0));
SET32(18, RW(18) + 1);
wr32(c, (RW(3) + 20), RW(0));
wr64(c, (RW(3) + 0), RD(4));
SET64(2, (s32)rd32(c, (RW(17) + 84)));
wr64(c, (RW(3) + 8), RD(4));
SET64(2, RSD(18) < RSD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 24); if (t) { POLL(); goto L_00292A98; } }
L_00292ABC:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
{ int t = RSD(2) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00292B10; }
SET64(16, (s64)(s32)0xfff0000);
SET64(16, RD(16) | 0xffff);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
L_00292AD8:;
SET32(5, RW(18) << 11);
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(4, RW(18) << 4);
SET32(5, RW(5) + RW(2));
SET32(6, RW(0) + 3);
SET32(4, RW(3) + RW(4));
SET64(5, RD(5) & RD(16));
SET32(7, RW(0) + 128);
SET64(31, 0x292b00); SET32(18, RW(18) + 1); JP_F_002929B0(c);
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET64(2, RSD(18) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_00292AD8; } }
L_00292B10:;
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(16, (s64)(s32)0xfff0000);
SET64(16, RD(16) | 0xffff);
SET32(4, RW(18) << 4);
SET32(4, RW(5) + RW(4));
SET64(5, RD(5) & RD(16));
SET64(7, RD(0) + RD(0));
SET64(31, 0x292b34); SET32(6, RW(0) + 2); JP_F_002929B0(c);
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
SET64(31, 0x292b70); wr32(c, (RW(5) + 0), RW(6)); JP_F_00292948(c);
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00292B90(Ctx *c) { /* func_00292B90 */
ENTER(0x292b90);
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
SET64(31, 0x292bc8); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_0010F6A0(c);
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(5, (s32)rd32(c, (RW(16) + 16)));
SET64(6, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(3) + RW(5));
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET32(3, RW(3) << 11);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
SET32(3, RW(3) + RW(6));
if (RD(4) == RD(0)) { rt_break(c, 0x292bec); goto L_00292BF0; }
L_00292BF0:;
div_s(c, 0, RSW(3), RSW(4));
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 11);
SET32(2, RW(2) + -4096);
SET32(5, RW(2) - RW(6));
SET64(7, c->hi.d[0]);
SET32(4, RW(4) - RW(7));
SET64(2, RSD(4) < RSD(5));
if (RD(2) != RD(0)) { wr32(c, (RW(17) + 0), RW(4)); goto L_00292C38; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(17) + 0), RW(5));
SET32(2, RW(2) + RW(7));
wr32(c, (RW(20) + 0), RW(0));
wr32(c, (RW(18) + 0), RW(2));
wr32(c, (RW(19) + 0), RW(0)); goto L_00292C58;
L_00292C38:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET32(3, RW(4) + RW(7));
SET32(2, RW(2) - RW(7));
wr32(c, (RW(18) + 0), RW(3));
SET32(2, RW(5) - RW(2));
wr32(c, (RW(19) + 0), RW(4));
wr32(c, (RW(20) + 0), RW(2));
L_00292C58:;
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_0010F680(c); return; }
}

void JP_F_00292C80(Ctx *c) { /* func_00292C80 */
ENTER(0x292c80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x292ca0); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_0010F6A0(c);
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
SET32(29, RW(29) + 32); { JP_F_0010F680(c); return; }
}

void JP_F_00292CD0(Ctx *c) { /* func_00292CD0 */
ENTER(0x292cd0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x292cf0); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_0010F6A0(c);
SET64(3, (s32)rd32(c, (RW(16) + 20)));
SET64(2, rd64(c, (RW(16) + 72)));
SET32(3, RW(3) - RW(17));
SET64(2, RD(2) - RD(17));
wr32(c, (RW(16) + 20), RW(3));
{ int t = RSD(3) >= 0; wr64(c, (RW(16) + 72), RD(2)); if (t) goto L_00292D30; }
L_00292D10:;
 { POLL(); goto L_00292D10; }
L_00292D30:;
SET64(31, 0x292d38); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_0010F680(c);
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00292D50(Ctx *c) { /* func_00292D50 */
ENTER(0x292d50);
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
SET64(31, 0x292d88); SET64(4, (s32)rd32(c, (RW(17) + 64))); JP_F_0010F6A0(c);
SET64(3, (s32)rd32(c, (RW(17) + 68)));
{ int t = RD(3) != RD(0);  if (t) goto L_00292DA8; }
SET64(31, 0x292d9c); SET64(4, (s32)rd32(c, (RW(17) + 64))); JP_F_0010F680(c);
SET64(2, RD(0) + RD(0)); goto L_00292F20;
L_00292DA8:;
SET64(31, 0x292db0); SET32(4, RW(0) + 5); JP_F_00292948(c);
SET64(2, (s64)(s32)0x10000000);
SET64(3, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0xb400);
SET64(3, RD(3) | 0xb410);
SET64(21, (s32)rd32(c, (RW(2) + 0)));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x292dd0); SET64(4, RD(17) + RD(0)); JP_F_00292890(c);
SET64(6, (s32)rd32(c, (RW(17) + 8)));
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(2, RW(2) + RW(6));
if (RD(6) == RD(0)) { rt_break(c, 0x292de0); goto L_00292DE4; }
L_00292DE4:;
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
{ int t = RSD(19) <= 0; wr32(c, (RW(17) + 20), RW(4)); if (t) goto L_00292E80; }
SET32(2, RW(7) + RW(6));
SET32(7, RW(0) + 128);
SET32(2, RW(2) + -1);
if (RD(6) == RD(0)) { rt_break(c, 0x292e50); goto L_00292E54; }
L_00292E54:;
div_s(c, 0, RSW(2), RSW(6));
SET32(6, RW(0) + 3);
SET64(8, (s32)rd32(c, (RW(17) + 4)));
SET32(23, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(4, c->hi.d[0]);
SET32(5, RW(4) << 11);
SET32(4, RW(4) << 4);
SET32(4, RW(8) + RW(4));
SET64(31, 0x292e80); SET32(5, RW(3) + RW(5)); JP_F_002929B0(c);
L_00292E80:;
{ int t = RSD(19) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_00292EE4; }
SET32(20, RW(19) + -1);
SET32(22, RW(0) + 3);
L_00292E90:;
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET64(7, RD(18) ^ RD(20));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(4, RW(16) << 4);
SET32(5, RW(16) << 11);
SET64(6, RD(0) + RD(0));
SET32(4, RW(3) + RW(4));
SET32(5, RW(2) + RW(5));
if (RD(7) != 0) SET64(6, RD(22));
SET64(31, 0x292ebc); SET32(7, RW(0) + 128); JP_F_002929B0(c);
SET32(3, RW(16) + 1);
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(18, RW(18) + 1);
SET64(5, RSD(18) < RSD(19));
div_s(c, 0, RSW(3), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x292ed4); goto L_00292ED8; }
L_00292ED8:;
SET64(4, c->hi.d[0]);
{ int t = RD(5) != RD(0); SET64(16, RD(4) + RD(0)); if (t) { POLL(); goto L_00292E90; } }
L_00292EE4:;
SET64(2, (s32)rd32(c, (RW(17) + 16)));
SET32(2, RW(2) + RW(19));
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 16), RW(2)); if (t) goto L_00292F14; }
{ int t = RD(23) == RD(0); SET64(2, (s64)(s32)0xfff0000); if (t) goto L_00292F0C; }
SET64(3, (s64)(s32)0x30000000);
SET64(2, RD(2) | 0xffff);
SET64(2, RD(21) & RD(2));
SET64(21, RD(2) | RD(3));
L_00292F0C:;
SET64(31, 0x292f14); SET64(4, RD(21) | 0x100); JP_F_00292948(c);
L_00292F14:;
SET64(31, 0x292f1c); SET64(4, (s32)rd32(c, (RW(17) + 64))); JP_F_0010F680(c);
SET32(2, RW(0) + 1);
L_00292F20:;
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

void JP_F_00292F50(Ctx *c) { /* func_00292F50 */
ENTER(0x292f50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x292f68); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_0010F6A0(c);
wr32(c, (RW(16) + 68), RW(0));
SET64(31, 0x292f74); SET32(4, RW(0) + 5); JP_F_00292948(c);
SET64(2, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0xb410);
SET64(4, (s64)(s32)0x10000000);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(4, RD(4) | 0xb430);
SET64(5, (s64)(s32)0x10000000);
SET64(6, (s64)(s32)0x10000000);
wr32(c, (RW(16) + 28), RW(3));
SET64(5, RD(5) | 0xb420);
SET64(6, RD(6) | 0xb400);
SET64(7, (s64)(s32)0x10000000);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(7, RD(7) | 0x2010);
wr32(c, (RW(16) + 32), RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 0)));
wr32(c, (RW(16) + 36), RW(2));
SET64(3, (s32)rd32(c, (RW(6) + 0)));
wr32(c, (RW(16) + 40), RW(3));
L_00292FC0:;
SET64(2, (s32)rd32(c, (RW(7) + 0)));
SET64(2, RD(2) & 0xf0);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_00292FC0; } }
SET64(31, 0x292fe4); SET64(4, RD(0) + RD(0)); JP_F_002928E0(c);
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
SET64(31, 0x29303c); wr32(c, (RW(16) + 60), RW(2)); JP_F_0010F680(c);
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

static void JP_B_00293050(Ctx *c, u32 entry) { /* func_00293050 */
ENTER(entry);
switch (entry) { case 0x293068: goto L_00293068; case 0x293128: goto L_00293128; case 0x293228: goto L_00293228; case 0x293328: goto L_00293328; }
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
L_00293068:;
wr64(c, (RW(29) + 40), RD(21));
wr64(c, (RW(29) + 48), RD(22));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x293080); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_0010F6A0(c);
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
{ int t = RD(2) == RD(0); SET64(19, RD(10) | 0x100); if (t) goto L_00293170; }
SET64(6, (s32)rd32(c, (RW(16) + 8)));
SET64(2, (s64)(s32)0xfff0000);
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET32(4, RW(7) - RW(18));
SET32(8, RW(6) << 11);
SET64(2, RD(2) | 0xffff);
SET64(20, RD(3) & RD(2));
SET32(21, RW(4) >> 4);
{ int t = RD(9) == RD(7); SET32(18, RW(18) + RW(8)); if (t) goto L_002930FC; }
SET32(2, RW(7) + RW(8));
{ int t = RD(9) != RD(2); SET32(4, RW(0) + 3); if (t) goto L_00293100; }
L_002930FC:;
SET64(4, RD(0) + RD(0));
L_00293100:;
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(2, (s64)(s32)0xfff0000);
SET64(2, RD(2) | 0xffff);
SET32(4, RW(4) << 28);
SET32(3, RW(6) - RW(3));
SET64(2, RD(10) & RD(2));
div_s(c, 0, RSW(3), RSW(6));
SET64(2, RD(2) | RD(4));
SET64(19, RD(2) | 0x100);
if (RD(6) == RD(0)) { rt_break(c, 0x293128); goto L_0029312C; }
if (0) { L_00293128:; rt_break(c, 0x293128); }
L_0029312C:;
SET64(5, c->hi.d[0]);
if (RSD(5) < 0) { SET64(3, (s32)rd32(c, (RW(16) + 16))); goto L_00293158; }
if (RD(6) == RD(0)) { rt_break(c, 0x29313c); goto L_00293140; }
L_00293140:;
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(2, RSD(5) < RSD(3));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 44))); goto L_00293258; }
SET32(2, RW(6) + -1); goto L_0029315C;
L_00293158:;
SET32(2, RW(6) + -1);
L_0029315C:;
SET32(3, RW(3) + 1);
wr32(c, (RW(16) + 12), RW(2));
wr32(c, (RW(16) + 16), RW(3)); goto L_00293254;
L_00293170:;
SET64(5, RD(9) + RD(0));
SET64(31, 0x29317c); SET64(4, RD(16) + RD(0)); JP_F_00292890(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x29318c); SET64(17, RD(2) + RD(0)); JP_F_00292890(c);
SET64(14, RD(2) + RD(0));
{ int t = RD(17) == RD(14); SET64(9, (s64)(s32)0xfff0000); if (t) goto L_00293254; }
SET64(12, (s32)rd32(c, (RW(16) + 8)));
SET64(8, (s32)rd32(c, (RW(16) + 0)));
SET32(11, RW(0) + 3);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
SET32(3, RW(12) << 11);
if (RD(3) == RD(0)) { rt_break(c, 0x2931b0); goto L_002931B4; }
L_002931B4:;
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
L_00293228:;
SET64(2, c->hi.d[0]);
{ int t = RSD(2) < 0; SET64(19, RD(4) | 0x100); if (t) goto L_00293248; }
SET64(2, RSD(2) < RSD(13));
if (RD(12) == RD(0)) { rt_break(c, 0x29323c); goto L_00293240; }
L_00293240:;
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 44))); goto L_00293258; }
L_00293248:;
SET32(2, RW(13) + 1);
wr32(c, (RW(16) + 12), RW(14));
wr32(c, (RW(16) + 16), RW(2));
L_00293254:;
SET64(3, (s32)rd32(c, (RW(16) + 44)));
L_00293258:;
if (RD(3) == RD(0)) { SET64(3, (s64)(s32)0x10000000); goto L_00293294; }
SET64(2, (s32)rd32(c, (RW(16) + 48)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x10000000); if (t) goto L_00293290; }
SET64(4, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0xb010);
SET64(4, RD(4) | 0xb020);
wr32(c, (RW(2) + 0), RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 48)));
wr32(c, (RW(4) + 0), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET64(31, 0x293290); SET64(4, RD(4) | 0x100); JP_F_002928E0(c);
L_00293290:;
SET64(3, (s64)(s32)0x10000000);
L_00293294:;
SET64(3, RD(3) | 0x2010);
L_00293298:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RSD(2) < 0; SET64(2, (s64)(s32)0x10000000); if (t) { POLL(); goto L_00293298; } }
SET64(3, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0x2000);
SET64(3, RD(3) | 0x2010);
wr32(c, (RW(2) + 0), RW(22));
L_002932C8:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RSD(2) < 0; SET64(2, (s64)(s32)0x10000000); if (t) { POLL(); goto L_002932C8; } }
SET64(3, (s64)(s32)0x10000000);
SET64(4, (s64)(s32)0x10000000);
SET64(2, RD(2) | 0xb410);
SET64(3, RD(3) | 0xb430);
SET64(4, RD(4) | 0xb420);
wr32(c, (RW(2) + 0), RW(18));
wr32(c, (RW(3) + 0), RW(20));
wr32(c, (RW(4) + 0), RW(21));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 60))); goto L_0029331C; }
SET64(31, 0x293318); SET64(4, RD(19) + RD(0)); JP_F_00292948(c);
SET64(2, (s32)rd32(c, (RW(16) + 60)));
L_0029331C:;
SET64(3, (s64)(s32)0x10000000);
SET64(3, RD(3) | 0x2010);
SET32(4, RW(0) + 1);
L_00293328:;
wr32(c, (RW(3) + 0), RW(2));
wr32(c, (RW(16) + 68), RW(4));
SET64(31, 0x293338); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_0010F680(c);
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
void JP_F_00293050(Ctx *c) { JP_B_00293050(c, 0x293050); }
void JP_F_00293068(Ctx *c) { JP_B_00293050(c, 0x293068); }
void JP_F_00293128(Ctx *c) { JP_B_00293050(c, 0x293128); }
void JP_F_00293228(Ctx *c) { JP_B_00293050(c, 0x293228); }
void JP_F_00293328(Ctx *c) { JP_B_00293050(c, 0x293328); }

void JP_F_00293368(Ctx *c) { /* func_00293368 */
ENTER(0x293368);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x293380); SET32(4, RW(0) + 5); JP_F_00292948(c);
SET64(2, (s64)(s32)0x10000000);
SET64(3, (s64)(s32)0x10000000);
SET64(4, (s64)(s32)0x10000000);
SET64(3, RD(3) | 0xb410);
SET64(2, RD(2) | 0xb420);
SET64(4, RD(4) | 0xb430);
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(3) + 0), RW(0));
wr32(c, (RW(4) + 0), RW(0));
SET64(31, 0x2933ac); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_0010F670(c);
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002933C0(Ctx *c) { /* func_002933C0 */
ENTER(0x2933c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2933d8); SET64(4, (s32)rd32(c, (RW(16) + 64))); JP_F_0010F6A0(c);
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
SET32(29, RW(29) + 16); { JP_F_0010F680(c); return; }
}

void JP_F_00293410(Ctx *c) { /* func_00293410 */
ENTER(0x293410);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 25456), RW(4)); return;
}

void JP_F_00293420(Ctx *c) { /* func_00293420 */
ENTER(0x293420);
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET64(2, (s32)rd32(c, (RW(3) + 4264)));
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_00293430(Ctx *c) { /* func_00293430 */
ENTER(0x293430);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + 25456)));
{ int t = RD(3) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00293468; }
SET64(31, 0x29344c);  JP_F_0010D428(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 560);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 72);
SET32(29, RW(29) + 16); { JP_F_002751A0(c); return; }
L_00293468:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00293478(Ctx *c) { /* func_00293478 */
ENTER(0x293478);
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
if (RD(2) == RD(0)) { rt_break(c, 0x2934b4); goto L_002934B8; }
L_002934B8:;
div_s(c, 0, RSW(3), RSW(2));
SET64(4, c->hi.d[0]);
wr32(c, (RW(6) + 0), RW(4));
SET64(2, (s32)rd32(c, (RW(9) + 16)));
SET64(3, (s32)rd32(c, (RW(9) + 20)));
SET32(2, RW(2) << 11);
SET32(2, RW(2) + RW(3));
wr32(c, (RW(8) + 0), RW(2)); return;
}

void JP_F_002934E0(Ctx *c) { /* func_002934E0 */
ENTER(0x2934e0);
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
SET64(3, (s32)rd32(c, (RW(2) + 25456)));
SET64(5, (s32)rd32(c, (RW(18) + 8120)));
SET32(6, RW(5) + 4);
SET32(17, RW(5) + 4264);
SET32(19, RW(5) + 4304);
{ int t = RD(3) != RD(0); SET32(30, RW(5) + 4472); if (t) goto L_00293538; }
wr32(c, (RW(17) + 0), RW(0)); goto L_002936C4;
L_00293538:;
SET64(4, (s32)rd32(c, (RW(6) + 12)));
SET64(3, (s32)rd32(c, (RW(6) + 8)));
SET64(7, (s32)rd32(c, (RW(5) + 40)));
mul_s(c, 0, 3, RSW(3), RSW(4));
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(4, RW(2) >> 31);
SET32(2, RW(2) + RW(4));
SET32(2, RSW(2) >> 1);
{ int t = RD(7) != RD(0); SET32(20, RW(2) + 10240); if (t) goto L_00293588; }
SET64(2, (s32)rd32(c, (RW(6) + 16)));
SET32(4, RW(0) + -64);
SET32(2, RW(2) + 63);
SET64(2, RD(2) & RD(4));
SET32(3, RW(2) + RW(20));
wr32(c, (RW(5) + 40), RW(2));
SET32(3, RW(3) + 63);
SET64(2, RD(3) & RD(4)); goto L_002935A4;
L_00293588:;
SET64(2, (s32)rd32(c, (RW(5) + 44)));
SET32(4, RW(0) + -64);
SET32(3, RW(7) + 63);
SET32(2, RW(2) + 63);
SET64(3, RD(3) & RD(4));
SET64(2, RD(2) & RD(4));
wr32(c, (RW(5) + 40), RW(3));
L_002935A4:;
wr32(c, (RW(5) + 44), RW(2));
SET64(22, (s32)rd32(c, (RW(5) + 44)));
SET32(4, RW(0) + -64);
SET64(16, (s32)rd32(c, (RW(5) + 40)));
SET64(2, (s64)(s32)0x80000);
SET64(2, RD(2) | 0x3f);
SET32(2, RW(2) + RW(22));
SET64(21, RD(2) & RD(4));
SET32(3, RW(21) + 4175);
SET64(31, 0x2935d0); SET64(23, RD(3) & RD(4)); JP_F_00295CA8(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(5, RD(16) + RD(0)); if (t) goto L_00293650; }
SET64(6, RD(20) + RD(0));
SET64(31, 0x2935e8); SET64(4, RD(19) + RD(0)); JP_F_0010D4D8(c);
SET64(6, (s64)(s32)0x290000);
SET32(6, RW(6) + 14088);
SET64(4, RD(19) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x293600); SET64(7, RD(18) + RD(0)); JP_F_0010D930(c);
SET64(6, (s64)(s32)0x290000);
SET32(6, RW(6) + 14352);
SET64(4, RD(19) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x293618); SET64(7, RD(18) + RD(0)); JP_F_0010D930(c);
SET64(6, (s64)(s32)0x290000);
SET32(6, RW(6) + 14520);
SET64(4, RD(19) + RD(0));
SET32(5, RW(0) + 2);
SET64(31, 0x293630); SET64(7, RD(18) + RD(0)); JP_F_0010D930(c);
SET64(6, (s64)(s32)0x290000);
SET64(4, RD(19) + RD(0));
SET32(6, RW(6) + 14560);
SET64(7, RD(18) + RD(0));
SET64(31, 0x293648); SET32(5, RW(0) + 3); JP_F_0010D930(c);
SET32(16, RW(17) + 112); goto L_0029365C;
L_00293650:;
SET64(31, 0x293658); SET64(4, RD(18) + RD(0)); JP_F_002939B8(c);
SET32(16, RW(17) + 112);
L_0029365C:;
SET64(5, RD(22) + RD(0));
SET64(6, RD(21) + RD(0));
SET64(8, RD(23) + RD(0));
SET32(7, RW(0) + 256);
SET32(9, RW(0) + 512);
SET64(31, 0x293678); SET64(4, RD(16) + RD(0)); JP_F_002929D8(c);
SET64(31, 0x293680); SET64(4, RD(16) + RD(0)); JP_F_00292D50(c);
SET64(31, 0x293688); SET64(4, RD(16) + RD(0)); JP_F_00292F50(c);
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
L_002936C4:;
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

void JP_F_002936F8(Ctx *c) { /* func_002936F8 */
ENTER(0x2936f8);
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET64(2, (s32)rd32(c, (RW(3) + 4476))); return;
}

void JP_F_00293708(Ctx *c) { /* func_00293708 */
ENTER(0x293708);
SET64(3, (s64)(s32)0x540000);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(3) + 632), RW(2));
SET64(2, (s64)(s32)0x540000);
SET64(7, RD(5) + RD(0));
SET32(8, RW(2) + 640);
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
SET64(31, 0x29375c); SET64(5, RD(5) | 0xf40); JP_F_0028A8F8(c);
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00293770(Ctx *c) { /* func_00293770 */
ENTER(0x293770);
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
SET64(31, 0x2937a4); SET64(18, RD(4) + RD(0)); JP_F_00292B90(c);
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
SET64(31, 0x2937e4); SET64(11, RD(0) + RD(0)); JP_F_00293B08(c);
SET64(4, RD(18) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(31, 0x2937f4); SET64(5, RD(16) + RD(0)); JP_F_00292C80(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00293810(Ctx *c) { /* func_00293810 */
ENTER(0x293810);
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
{ int t = RD(3) != RD(18); SET32(16, RW(2) + 4376); if (t) goto L_00293850; }
SET64(31, 0x293848);  JP_F_0010D810(c);
SET32(2, RW(0) + 1); goto L_0029389C;
L_00293850:;
SET64(31, 0x293858); SET64(4, RD(16) + RD(0)); JP_F_00292D50(c);
SET64(3, (s32)rd32(c, (RW(17) + 20)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0029389C; }
SET64(2, (s32)rd32(c, (RW(16) + 16)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_0029389C; }
wr32(c, (RW(17) + 24), RW(18));
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 31880);
SET64(31, 0x293888); SET32(6, RW(0) + 16); JP_F_00293770(c);
SET64(3, (s32)rd32(c, (RW(16) + 24)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x293898); wr32(c, (RW(16) + 20), RW(3)); JP_F_00292D50(c);
SET32(2, RW(0) + 1);
L_0029389C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002938B8(Ctx *c) { /* func_002938B8 */
ENTER(0x2938b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(6) + 8120)));
SET64(31, 0x2938cc); SET32(4, RW(4) + 4376); JP_F_00292F50(c);
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002938E0(Ctx *c) { /* func_002938E0 */
ENTER(0x2938e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(6) + 8120)));
SET64(31, 0x2938f4); SET32(4, RW(4) + 4376); JP_F_00293050(c);
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00293908(Ctx *c) { /* func_00293908 */
ENTER(0x293908);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x293920); SET64(17, RD(4) + RD(0)); JP_F_00293420(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00293980; }
SET64(16, (s32)rd32(c, (RW(17) + 8120)));
SET64(31, 0x293934); SET32(4, RW(16) + 4376); JP_F_00293368(c);
SET64(31, 0x29393c);  JP_F_00295CA8(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET32(4, RW(16) + 4304); if (t) goto L_00293960; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0010D6E8(c); return; }
L_00293960:;
SET64(31, 0x293968);  JP_F_0010D878(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00293990(c); return; }
L_00293980:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00293990(Ctx *c) { /* func_00293990 */
ENTER(0x293990);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 72);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8120)));
SET64(4, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 560);
SET32(5, RW(5) + 4304);
SET32(29, RW(29) + 16); { JP_F_00274EC0(c); return; }
}

void JP_F_002939B8(Ctx *c) { /* func_002939B8 */
ENTER(0x2939b8);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(5) + 560);
SET32(6, RW(0) + 72);
SET64(4, (s32)rd32(c, (RW(4) + 8120)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 4304);
SET32(29, RW(29) + 16); { JP_F_00274EC0(c); return; }
}

void JP_F_002939E0(Ctx *c) { /* func_002939E0 */
ENTER(0x2939e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x293a04); SET64(18, RD(4) + RD(0)); JP_F_00293420(c);
SET64(5, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_00293A30; }
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
L_00293A30:;
SET64(4, (s32)rd32(c, (RW(18) + 8120)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 4376);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00293770(c); return; }
}

void JP_F_00293A50(Ctx *c) { /* func_00293A50 */
ENTER(0x293a50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x293a6c); SET64(17, RD(4) + RD(0)); JP_F_00293420(c);
{ int t = RD(2) != RD(0); SET64(5, RD(16) + RD(0)); if (t) goto L_00293A90; }
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
L_00293A90:;
SET64(4, (s32)rd32(c, (RW(17) + 8120)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 4376);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00292CD0(c); return; }
}

void JP_F_00293AB0(Ctx *c) { /* func_00293AB0 */
ENTER(0x293ab0);
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
{ int t = RD(2) == RD(18); SET32(4, RW(4) + 4376); if (t) goto L_00293AF0; }
SET64(31, 0x293ae8);  JP_F_002933C0(c);
wr32(c, (RW(16) + 32), RW(17));
wr32(c, (RW(16) + 28), RW(18));
L_00293AF0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00293B08(Ctx *c) { /* func_00293B08 */
ENTER(0x293b08);
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
{ int t = RD(7) != RD(0); SET64(20, RD(10) + RD(0)); if (t) goto L_00293C04; }
if (RD(3) != RD(0)) { SET32(19, RW(17) - RW(16)); goto L_00293BA8; }
SET64(5, RD(18) + RD(0));
SET64(31, 0x293b7c); SET64(6, RD(17) + RD(0)); JP_F_00127218(c);
SET64(4, RD(22) + RD(0));
SET32(5, RW(18) + RW(17));
SET64(31, 0x293b8c); SET32(6, RW(16) - RW(17)); JP_F_00127218(c);
SET32(4, RW(22) + RW(16));
SET32(4, RW(4) - RW(17));
SET64(5, RD(20) + RD(0));
SET64(31, 0x293ba0); SET64(6, RD(21) + RD(0)); JP_F_00127218(c);
SET64(2, RD(30) + RD(0)); goto L_00293C04;
L_00293BA8:;
SET64(2, RSD(21) < RSD(19));
{ int t = RD(2) != RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_00293BE8; }
SET64(31, 0x293bbc); SET64(6, RD(16) + RD(0)); JP_F_00127218(c);
SET64(6, RD(19) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(31, 0x293bcc); SET32(4, RW(23) + RW(16)); JP_F_00127218(c);
SET32(5, RW(20) + RW(17));
SET32(5, RW(5) - RW(16));
SET32(6, RW(21) - RW(19));
SET64(31, 0x293be0); SET64(4, RD(22) + RD(0)); JP_F_00127218(c);
SET64(2, RD(30) + RD(0)); goto L_00293C04;
L_00293BE8:;
SET64(31, 0x293bf0); SET64(6, RD(16) + RD(0)); JP_F_00127218(c);
SET64(6, RD(21) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(31, 0x293c00); SET32(4, RW(23) + RW(16)); JP_F_00127218(c);
SET64(2, RD(30) + RD(0));
L_00293C04:;
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

void JP_F_00293C38(Ctx *c) { /* func_00293C38 */
ENTER(0x293c38);
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
SET64(31, 0x293c74); SET64(16, RD(5) + RD(0)); JP_F_00293420(c);
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(20) + RD(0)); if (t) goto L_00293CB0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); { JP_F_00278A68(c); return; }
L_00293CB0:;
SET64(31, 0x293cb8); SET64(18, (s32)rd32(c, (RW(21) + 8120))); JP_F_00278A70(c);
SET64(22, RD(2) + RD(0));
SET32(16, RW(18) + 4376);
SET32(19, RW(18) + 4264);
SET64(4, RD(16) + RD(0));
SET64(31, 0x293cd0); SET32(17, RW(18) + 4); JP_F_00293050(c);
SET64(31, 0x293cd8); SET64(4, RD(16) + RD(0)); JP_F_00292D50(c);
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
{ int t = RD(10) != RD(9); mul_s(c, 0, 6, RSW(2), RSW(3)); if (t) goto L_00293D30; }
SET64(31, 0x293d24); SET64(5, (s32)rd32(c, (RW(20) + 32))); JP_F_0010D730(c);
wr32(c, (RW(19) + 20), RW(0)); goto L_00293D3C;
L_00293D30:;
SET64(31, 0x293d38); SET64(5, (s32)rd32(c, (RW(20) + 32))); JP_F_0010D778(c);
wr32(c, (RW(19) + 20), RW(0));
L_00293D3C:;
SET64(31, 0x293d44); SET32(4, RW(19) + 112); JP_F_00292F50(c);
SET64(31, 0x293d4c); SET64(4, RD(21) + RD(0)); JP_F_00293FA8(c);
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

void JP_F_00293D80(Ctx *c) { /* func_00293D80 */
ENTER(0x293d80);
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET64(2, (s32)rd32(c, (RW(3) + 4312))); return;
}

void JP_F_00293D90(Ctx *c) { /* func_00293D90 */
ENTER(0x293d90);
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
SET64(7, RSD(18) < (s64)4); goto L_00293E74;
L_00293E20:;
SET64(3, rd8(c, (RW(2) + 0)));
{ int t = RD(3) != RD(0); SET32(5, RW(6) + 1); if (t) goto L_00293E70; }
SET32(2, RW(29) + RW(5));
SET64(3, rd8(c, (RW(2) + 0)));
if (RD(3) != RD(0)) { SET64(6, RD(5) + RD(0)); goto L_00293E74; }
SET32(2, RW(6) + RW(29));
SET32(4, RW(0) + 1);
SET64(3, rd8(c, (RW(2) + 2)));
if (RD(3) != RD(4)) { SET64(6, RD(5) + RD(0)); goto L_00293E74; }
SET64(3, rd8(c, (RW(2) + 3)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 183); if (t) goto L_00293EC0; }
if (RD(3) != RD(2)) { SET64(6, RD(5) + RD(0)); goto L_00293E74; }
SET32(21, RW(0) + 1); goto L_00293E88;
L_00293E70:;
SET64(6, RD(5) + RD(0));
L_00293E74:;
SET32(2, RW(0) + 3);
if (RD(7) != 0) SET64(2, RD(18));
SET64(2, RSD(6) < RSD(2));
{ int t = RD(2) != RD(0); SET32(2, RW(29) + RW(6)); if (t) { POLL(); goto L_00293E20; } }
L_00293E88:;
SET64(2, RSD(18) < (s64)3);
{ int t = RD(2) == RD(0); SET32(4, RW(19) + RW(18)); if (t) goto L_00293ED0; }
SET32(2, RW(29) + RW(18));
SET32(4, RW(18) + RW(29));
SET64(3, rd8(c, (RW(2) + 0)));
SET64(5, RD(4) + RD(0));
wr8(c, (RW(17) + 16), (u8)RW(3));
SET64(2, rd8(c, (RW(4) + 1)));
wr8(c, (RW(17) + 17), (u8)RW(2));
SET64(3, rd8(c, (RW(5) + 2)));
wr8(c, (RW(17) + 18), (u8)RW(3)); goto L_00293F24;
L_00293EC0:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(2, RW(2) + 1);
wr32(c, (RW(17) + 8), RW(2)); { POLL(); goto L_00293E88; }
L_00293ED0:;
SET64(2, rd8(c, (RW(4) + -3)));
wr8(c, (RW(17) + 16), (u8)RW(2));
SET64(3, rd8(c, (RW(4) + -2)));
wr8(c, (RW(17) + 17), (u8)RW(3));
SET64(2, rd8(c, (RW(4) + -1)));
wr8(c, (RW(17) + 18), (u8)RW(2)); goto L_00293F24;
L_00293EF0:;
SET64(31, 0x293ef8);  JP_F_002779B8(c);
SET64(2, RD(2) & 0x4);
if (RD(2) == RD(0)) { SET32(21, RW(0) + 1); goto L_00293F10; }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(2, RW(2) + 1);
wr32(c, (RW(17) + 8), RW(2));
L_00293F10:;
SET32(16, RW(16) + 4);
SET32(2, RW(16) - RW(19));
SET64(19, RD(16) + RD(0));
SET32(18, RW(18) - RW(2));
SET64(7, RSD(18) < (s64)4);
L_00293F24:;
{ int t = RD(7) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00293F4C; }
SET64(4, RD(19) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x293f3c); SET32(6, RW(0) + 132); JP_F_00277B50(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_00293EF0; } }
SET32(2, RW(0) + 1);
L_00293F4C:;
if (RD(21) != RD(2)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00293F84; }
SET64(31, 0x293f5c); SET64(4, RD(20) + RD(0)); JP_F_00288A88(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00293F84; }
SET64(31, 0x293f6c); SET64(4, RD(20) + RD(0)); JP_F_00288AF0(c);
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_00293F84; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x293f80); SET32(5, RW(0) + 1); JP_F_00293AB0(c);
SET64(16, rd64(c, (RW(29) + 16)));
L_00293F84:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_00293FA8(Ctx *c) { /* func_00293FA8 */
ENTER(0x293fa8);
SET64(3, (s32)rd32(c, (RW(4) + 8120)));
SET32(3, RW(3) + 4264);
SET64(2, (s32)rd32(c, (RW(3) + 12)));
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 12), RW(2)); return;
}

void JP_F_00293FC0(Ctx *c) { /* func_00293FC0 */
ENTER(0x293fc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x293fd4); SET64(16, RD(4) + RD(0)); JP_F_00293420(c);
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 1); if (t) goto L_00293FE8; }
SET32(2, RW(0) + 1); goto L_00294008;
L_00293FE8:;
SET64(4, (s32)rd32(c, (RW(16) + 8120)));
SET32(4, RW(4) + 4264);
SET64(3, (s32)rd32(c, (RW(4) + 32)));
{ int t = RD(3) == RD(5); SET32(2, RW(0) + 1); if (t) goto L_00294008; }
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(2, RSD(2) < (s64)3);
SET64(2, RD(2) < (u64)(s64)1);
L_00294008:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00294018(Ctx *c) { /* func_00294018 */
ENTER(0x294018);
SET64(2, (s32)rd32(c, (RW(4) + 8120)));
SET32(2, RW(2) + 4304); return;
}

void JP_F_00294028(Ctx *c) { /* func_00294028 */
ENTER(0x294028);
SET32(2, RW(0) + 72); return;
}

void JP_F_00294030(Ctx *c) { /* func_00294030 */
ENTER(0x294030);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x294044); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x141); if (t) goto L_00294068; }
SET64(31, 0x29405c);  JP_F_0028A8F8(c);
SET64(2, RD(0) + RD(0)); goto L_0029406C;
L_00294068:;
SET64(2, (s32)rd32(c, (RW(16) + 80)));
L_0029406C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00294080(Ctx *c) { /* func_00294080 */
ENTER(0x294080);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29409c); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x142);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 1); if (t) goto L_002940C8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_002940C8:;
SET64(4, (s32)rd32(c, (RW(16) + 80)));
SET32(3, RW(0) + 2);
{ int t = RD(17) != RD(0); if (RD(4) != 0) SET64(6, RD(3)); if (t) goto L_002940E0; }
{ int t = RD(4) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_002940F8; }
L_002940E0:;
wr32(c, (RW(16) + 80), RW(17));
SET64(5, RD(6) + RD(0));
SET64(31, 0x2940f0); SET64(4, RD(16) + RD(0)); JP_F_00294110(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 68), RW(3));
L_002940F8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00294110(Ctx *c) { /* func_00294110 */
ENTER(0x294110);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, RD(4) + RD(0));
{ int t = RD(6) == RD(2); SET64(7, RD(0) + RD(0)); if (t) goto L_00294158; }
if (RD(6) == RD(0)) { SET64(2, (s32)rd32(c, (RW(3) + 84))); goto L_00294170; }
SET32(2, RW(0) + 2);
{ int t = RD(6) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00294190; }
SET64(3, (s32)rd32(c, (RW(3) + 72)));
SET32(2, RW(0) + 4);
{ int t = RD(3) != RD(2); SET64(2, RD(7) + RD(0)); if (t) goto L_00294194; }
 goto L_00294180;
L_00294158:;
SET64(2, (s32)rd32(c, (RW(3) + 84)));
SET32(2, RW(2) + 1);
{ int t = RD(2) != RD(6); wr32(c, (RW(3) + 84), RW(2)); if (t) goto L_0029418C; }
 goto L_00294180;
L_00294170:;
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 84), RW(2)); if (t) goto L_0029418C; }
SET64(5, RD(0) + RD(0));
L_00294180:;
SET64(31, 0x294188);  JP_F_002941A0(c);
SET64(7, RD(2) + RD(0));
L_0029418C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_00294190:;
SET64(2, RD(7) + RD(0));
L_00294194:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002941A0(Ctx *c) { /* func_002941A0 */
ENTER(0x2941a0);
SET32(29, RW(29) + -32);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 76)));
SET32(3, RW(3) + -3);
SET64(3, RD(3) < (u64)(s64)2);
{ int t = RD(3) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002941F0; }
SET64(31, 0x2941d4);  JP_F_00299168(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00294208(c); return; }
L_002941F0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00294208(Ctx *c) { /* func_00294208 */
ENTER(0x294208);
SET32(29, RW(29) + -16);
SET64(7, RD(5) + RD(0));
SET32(6, RW(0) + 8);
SET64(8, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x294224); SET32(5, RW(0) + 7); JP_F_0029A078(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00294230(Ctx *c) { /* func_00294230 */
ENTER(0x294230);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x294244); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x143); if (t) goto L_00294268; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00294268:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00294278(c); return; }
}

void JP_F_00294278(Ctx *c) { /* func_00294278 */
ENTER(0x294278);
SET32(3, RW(0) + 3);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(4) + 76), RW(3)); return;
}

void JP_F_00294288(Ctx *c) { /* func_00294288 */
ENTER(0x294288);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2942a4); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002942C8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x144);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_002942C8:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2942d4); SET64(5, RD(17) + RD(0)); JP_F_002998D8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2942e0); SET64(5, RD(17) + RD(0)); JP_F_00286E20(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002942F8(Ctx *c) { /* func_002942F8 */
ENTER(0x2942f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x294314); SET64(17, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(6, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x145); if (t) goto L_00294340; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00294340:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x29434c); SET32(5, RW(0) + 30); JP_F_00297690(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00294368(Ctx *c) { /* func_00294368 */
ENTER(0x294368);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x294384); SET64(17, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(6, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x146); if (t) goto L_002943B0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_002943B0:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2943bc); SET32(5, RW(0) + 29); JP_F_00297690(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002943D8(Ctx *c) { /* func_002943D8 */
ENTER(0x2943d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2943e8);  JP_F_00294400(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 25476), RW(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_00294400(Ctx *c) { /* func_00294400 */
ENTER(0x294400);
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x5a5a0000);
SET64(4, (s32)rd32(c, (RW(2) + 32288)));
SET32(29, RW(29) + -16);
SET64(3, RD(3) | 0x5a5a);
{ int t = RD(4) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00294438; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x201);
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00294438:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00294448(Ctx *c) { /* func_00294448 */
ENTER(0x294448);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002980D8(c); return; }
}

void JP_F_00294460(Ctx *c) { /* func_00294460 */
ENTER(0x294460);
 return;
}

void JP_F_00294468(Ctx *c) { /* func_00294468 */
ENTER(0x294468);
SET64(3, (s32)rd32(c, (RW(4) + 72)));
SET32(3, RW(3) + -1);
SET64(3, RD(3) < (u64)(s64)4);
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00294484; }
SET64(2, (s32)rd32(c, (RW(4) + 68)));
SET64(2, RD(2) < (u64)(s64)1);
L_00294484:;
 return;
}

void JP_F_00294490(Ctx *c) { /* func_00294490 */
ENTER(0x294490);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 25404);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
L_002944B0:;
SET32(16, RW(16) + 4);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002944CC; }
SET64(31, 0x2944c4);  JP_F_00294468(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002944E4; }
L_002944CC:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)8);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_002944B0; } }
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
L_002944E4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002944F8(Ctx *c) { /* func_002944F8 */
ENTER(0x2944f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29450c); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x138); if (t) goto L_00294530; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00294530:;
SET64(31, 0x294538);  JP_F_002945A8(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00294550(Ctx *c) { /* func_00294550 */
ENTER(0x294550);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(2) + 25404);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 7);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
L_00294570:;
SET32(16, RW(16) + 4);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00294584; }
SET64(31, 0x294584);  JP_F_002945A8(c);
L_00294584:;
SET32(17, RW(17) + -1);
if (RSD(17) >= 0) { SET64(2, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00294570; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_002953F8(c); return; }
}

static void JP_B_002945A8(Ctx *c, u32 entry) { /* func_002945A8 */
ENTER(entry);
switch (entry) { case 0x294630: goto L_00294630; case 0x294640: goto L_00294640; case 0x294650: goto L_00294650; case 0x294660: goto L_00294660; case 0x294670: goto L_00294670; case 0x29467c: goto L_0029467C; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(16, (s32)rd32(c, (RW(17) + 72)));
SET32(2, RW(16) + -1);
SET64(2, RD(2) < (u64)(s64)4);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002946A8; }
SET64(2, (s32)rd32(c, (RW(17) + 68)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002946A8; }
wr32(c, (RW(17) + 68), RW(0));
SET64(31, 0x2945ec);  JP_F_0029F750(c);
SET64(18, RD(2) + RD(0));
SET32(2, RW(16) + -2);
SET64(2, RD(2) < (u64)(s64)3);
if (RD(2) == RD(0)) { SET64(16, (s32)rd32(c, (RW(17) + 72))); goto L_0029460C; }
SET64(31, 0x294608); SET64(4, RD(17) + RD(0)); JP_F_002946C0(c);
SET64(16, (s32)rd32(c, (RW(17) + 72)));
L_0029460C:;
SET64(2, RD(16) < (u64)(s64)7);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 72), RW(16)); goto L_00294680; }
SET32(2, RW(16) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 32320)));
{ u32 t = RW(3);  switch (t) { case 0x294630: goto L_00294630; case 0x294640: goto L_00294640; case 0x294650: goto L_00294650; case 0x294660: goto L_00294660; case 0x294670: goto L_00294670; case 0x29467c: goto L_0029467C; default: rt_jump(c, t); return; } }
L_00294630:;
SET64(31, 0x294638); SET64(4, RD(17) + RD(0)); JP_F_00294700(c);
SET64(16, RD(2) + RD(0)); goto L_0029467C;
L_00294640:;
SET64(31, 0x294648); SET64(4, RD(17) + RD(0)); JP_F_00294730(c);
SET64(16, RD(2) + RD(0)); goto L_0029467C;
L_00294650:;
SET64(31, 0x294658); SET64(4, RD(17) + RD(0)); JP_F_00294AC8(c);
SET64(16, RD(2) + RD(0)); goto L_0029467C;
L_00294660:;
SET64(31, 0x294668); SET64(4, RD(17) + RD(0)); JP_F_00294B68(c);
SET64(16, RD(2) + RD(0)); goto L_0029467C;
L_00294670:;
SET64(31, 0x294678); SET64(4, RD(17) + RD(0)); JP_F_00294BD8(c);
SET64(16, RD(2) + RD(0));
L_0029467C:;
wr32(c, (RW(17) + 72), RW(16));
L_00294680:;
SET64(31, 0x294688); SET32(16, RW(17) + 14040); JP_F_0029F750(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(2) - RD(18));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00299908(c); return; }
L_002946A8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}
void JP_F_002945A8(Ctx *c) { JP_B_002945A8(c, 0x2945a8); }
void JP_F_00294630(Ctx *c) { JP_B_002945A8(c, 0x294630); }
void JP_F_00294640(Ctx *c) { JP_B_002945A8(c, 0x294640); }
void JP_F_00294650(Ctx *c) { JP_B_002945A8(c, 0x294650); }
void JP_F_00294660(Ctx *c) { JP_B_002945A8(c, 0x294660); }
void JP_F_00294670(Ctx *c) { JP_B_002945A8(c, 0x294670); }
void JP_F_0029467C(Ctx *c) { JP_B_002945A8(c, 0x29467c); }

void JP_F_002946C0(Ctx *c) { /* func_002946C0 */
ENTER(0x2946c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2946d4); SET64(16, RD(4) + RD(0)); JP_F_002946E8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00296BD0(c); return; }
}

void JP_F_002946E8(Ctx *c) { /* func_002946E8 */
ENTER(0x2946e8);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00299FE0(c); return; }
}

void JP_F_00294700(Ctx *c) { /* func_00294700 */
ENTER(0x294700);
SET64(3, (s32)rd32(c, (RW(4) + 76)));
SET64(5, (s32)rd32(c, (RW(4) + 72)));
SET64(2, RSD(3) < (s64)2);
{ int t = RD(2) != RD(0); SET64(4, RSD(3) < (s64)5); if (t) goto L_00294728; }
if (RD(4) != RD(0)) { SET32(5, RW(0) + 2); goto L_00294728; }
SET32(2, RW(0) + 6);
if (RD(3) == RD(2)) { SET32(5, RW(0) + 2); goto L_00294728; }
L_00294728:;
SET64(2, RD(5) + RD(0)); return;
}

void JP_F_00294730(Ctx *c) { /* func_00294730 */
ENTER(0x294730);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(18, (s32)rd32(c, (RW(17) + 72)));
SET64(31, 0x294754); SET64(16, (s32)rd32(c, (RW(17) + 76))); JP_F_002947F0(c);
if (RD(2) == RD(0)) { SET64(2, RD(18) + RD(0)); goto L_002947D8; }
SET64(31, 0x294764); SET64(4, RD(17) + RD(0)); JP_F_002948A0(c);
SET32(2, RW(0) + 3);
{ int t = RD(16) == RD(2); SET64(2, RSD(16) < (s64)4); if (t) goto L_002947D0; }
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_00294790; }
SET32(2, RW(0) + 2);
{ int t = RD(16) == RD(2); SET64(2, RD(18) + RD(0)); if (t) goto L_002947A8; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_002947DC;
L_00294790:;
{ int t = RD(16) == RD(2); SET32(2, RW(0) + 6); if (t) goto L_002947B0; }
{ int t = RD(16) == RD(2); SET64(2, RD(18) + RD(0)); if (t) goto L_002947B0; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_002947DC;
L_002947A8:;
SET32(18, RW(0) + 2); goto L_002947D4;
L_002947B0:;
SET64(31, 0x2947b8); SET64(4, RD(17) + RD(0)); JP_F_00294BE0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002947D0; }
SET64(31, 0x2947c8); SET32(18, RW(0) + 4); JP_F_00295BB0(c);
SET64(2, RD(18) + RD(0)); goto L_002947D8;
L_002947D0:;
SET32(18, RW(0) + 3);
L_002947D4:;
SET64(2, RD(18) + RD(0));
L_002947D8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002947DC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002947F0(Ctx *c) { /* func_002947F0 */
ENTER(0x2947f0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 5);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x294814); SET32(18, RW(0) + 1); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 6); if (t) goto L_00294840; }
SET64(31, 0x294828);  JP_F_0029A0E0(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 6);
SET64(31, 0x294838); SET64(18, RD(2) + RD(0)); JP_F_0029A110(c);
SET64(18, RD(18) | RD(2));
SET64(4, RD(16) + RD(0));
L_00294840:;
SET64(31, 0x294848); SET32(5, RW(0) + 6); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 7);
{ int t = RD(2) == RD(0); SET32(17, RW(0) + 1); if (t) goto L_00294874; }
SET64(31, 0x294860);  JP_F_0029A0E0(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 7);
SET64(31, 0x294870); SET64(17, RD(2) + RD(0)); JP_F_0029A110(c);
SET64(17, RD(17) | RD(2));
L_00294874:;
{ int t = RD(18) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00294888; }
{ int t = RD(17) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00294888; }
SET64(2, RD(0) + RD(0));
L_00294888:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002948A0(Ctx *c) { /* func_002948A0 */
ENTER(0x2948a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2948b4); SET64(16, RD(4) + RD(0)); JP_F_002948D0(c);
SET64(31, 0x2948bc); SET64(4, RD(16) + RD(0)); JP_F_00294978(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00294A00(c); return; }
}

void JP_F_002948D0(Ctx *c) { /* func_002948D0 */
ENTER(0x2948d0);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(16, RW(17) + 2564);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
if (RD(2) != RD(3)) { SET64(6, (s32)rd32(c, (RW(16) + 24))); goto L_00294920; }
SET64(31, 0x294900); SET32(5, RW(0) + 1); JP_F_00288010(c);
if (RD(2) != RD(0)) { SET64(6, (s32)rd32(c, (RW(16) + 24))); goto L_00294920; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x294914); SET32(5, RW(0) + 1); JP_F_00287FF0(c);
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 20), RW(0)); goto L_0029491C; }
L_0029491C:;
SET64(6, (s32)rd32(c, (RW(16) + 24)));
L_00294920:;
SET32(2, RW(0) + 1);
if (RD(6) != RD(2)) { SET64(5, (s32)rd32(c, (RW(16) + 20))); goto L_00294960; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x294938); SET32(5, RW(0) + 2); JP_F_00288010(c);
if (RD(2) != RD(0)) { SET64(6, (s32)rd32(c, (RW(16) + 24))); goto L_0029495C; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x29494c); SET32(5, RW(0) + 2); JP_F_00287FF0(c);
if (RD(2) != RD(0)) { SET64(6, (s32)rd32(c, (RW(16) + 24))); goto L_0029495C; }
wr32(c, (RW(16) + 24), RW(0));
SET64(6, RD(0) + RD(0));
L_0029495C:;
SET64(5, (s32)rd32(c, (RW(16) + 20)));
L_00294960:;
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00296BA0(c); return; }
}

void JP_F_00294978(Ctx *c) { /* func_00294978 */
ENTER(0x294978);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(16, RW(17) + 2564);
SET64(2, (s32)rd32(c, (RW(16) + 24)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 20))); goto L_002949BC; }
SET64(3, (s32)rd32(c, (RW(16) + 60)));
SET32(2, RW(0) + 2);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(16) + 20))); goto L_002949BC; }
SET32(5, RW(0) + 15);
SET64(31, 0x2949b8); SET32(6, RW(0) + 1); JP_F_002977B8(c);
SET64(2, (s32)rd32(c, (RW(16) + 20)));
L_002949BC:;
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002949F0; }
SET64(3, (s32)rd32(c, (RW(16) + 60)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_002949F0; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 15);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 2);
SET32(29, RW(29) + 32); { JP_F_002977B8(c); return; }
L_002949F0:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00294A00(Ctx *c) { /* func_00294A00 */
ENTER(0x294a00);
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
{ int t = RD(5) == RD(6); SET32(16, RW(0) + 2); if (t) goto L_00294AA4; }
SET64(2, RD(5) < (u64)(s64)3);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 3); goto L_00294A60; }
{ int t = RD(5) == RD(7); SET32(16, RW(0) + 1); if (t) goto L_00294AA4; }
SET32(16, RW(0) + 3); goto L_00294AA4;
L_00294A60:;
{ int t = RD(5) != RD(2); SET32(16, RW(0) + 3); if (t) goto L_00294AA4; }
SET64(31, 0x294a70); SET32(5, RW(0) + 25); JP_F_00297980(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00294AA8; }
SET64(31, 0x294a84);  JP_F_0029F878(c);
if (RD(2) != RD(0)) { SET32(16, RW(0) + 3); goto L_00294AA4; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x294a98); SET32(5, RW(0) + 72); JP_F_00297980(c);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00294AA8; }
SET32(16, RW(0) + 3);
L_00294AA4:;
SET64(4, RD(17) + RD(0));
L_00294AA8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(5, RW(0) + 25);
SET32(29, RW(29) + 32); { JP_F_002977B8(c); return; }
}

void JP_F_00294AC8(Ctx *c) { /* func_00294AC8 */
ENTER(0x294ac8);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 76)));
{ int t = RD(3) == RD(2); SET64(17, (s32)rd32(c, (RW(16) + 72))); if (t) goto L_00294B30; }
SET64(2, RSD(3) < (s64)4);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_00294B10; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2); SET64(2, RD(17) + RD(0)); if (t) goto L_00294B28; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00294B58;
L_00294B10:;
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 6); if (t) goto L_00294B38; }
{ int t = RD(3) == RD(2); SET64(2, RD(17) + RD(0)); if (t) goto L_00294B38; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00294B58;
L_00294B28:;
SET32(17, RW(0) + 2); goto L_00294B50;
L_00294B30:;
SET32(17, RW(0) + 3); goto L_00294B50;
L_00294B38:;
SET64(31, 0x294b40); SET64(4, RD(16) + RD(0)); JP_F_00294BE0(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00294B50; }
SET64(31, 0x294b50); SET32(17, RW(0) + 4); JP_F_00295BB0(c);
L_00294B50:;
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00294B58:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00294B68(Ctx *c) { /* func_00294B68 */
ENTER(0x294b68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x294b7c); SET64(16, RD(4) + RD(0)); JP_F_00295130(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00294B94; }
SET64(31, 0x294b8c);  JP_F_00294C48(c);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(16) + 76))); goto L_00294BA0; }
L_00294B94:;
SET64(2, (s32)rd32(c, (RW(16) + 72))); goto L_00294BC8;
L_00294BA0:;
SET64(4, (s32)rd32(c, (RW(16) + 72)));
SET64(2, RSD(5) < (s64)2);
{ int t = RD(2) != RD(0); SET64(3, RSD(5) < (s64)5); if (t) goto L_00294BC4; }
{ int t = RD(3) != RD(0); SET64(2, RD(4) + RD(0)); if (t) goto L_00294BC8; }
SET32(3, RW(0) + 6);
SET64(2, RD(5) ^ RD(3));
if (RD(2) == 0) SET64(4, RD(3));
L_00294BC4:;
SET64(2, RD(4) + RD(0));
L_00294BC8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00294BD8(Ctx *c) { /* func_00294BD8 */
ENTER(0x294bd8);
SET64(2, (s32)rd32(c, (RW(4) + 72))); return;
}

void JP_F_00294BE0(Ctx *c) { /* func_00294BE0 */
ENTER(0x294be0);
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(5) + 2564);
SET32(2, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(6) + 56)));
{ int t = RD(3) == RD(0); SET32(5, RW(5) + 3368); if (t) goto L_00294C38; }
SET64(3, (s32)rd32(c, (RW(6) + 20)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00294C3C; }
SET64(3, (s32)rd32(c, (RW(5) + 688)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00294C3C; }
SET64(3, (s32)rd32(c, (RW(5) + 716)));
SET64(5, (s32)rd32(c, (RW(6) + 180)));
SET64(3, RSD(3) < RSD(5));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_00294C3C; }
SET64(31, 0x294c34);  JP_F_00295210(c);
SET64(2, RD(0) < RD(2));
L_00294C38:;
SET64(31, rd64(c, (RW(29) + 0)));
L_00294C3C:;
SET32(29, RW(29) + 16); return;
}

void JP_F_00294C48(Ctx *c) { /* func_00294C48 */
ENTER(0x294c48);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET32(17, RW(16) + 2384);
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x294c6c); SET64(4, RD(29) + RD(0)); JP_F_0028ABB0(c);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(18, RD(0) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00294CB0; }
SET64(31, 0x294c84);  JP_F_00294CF8(c);
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 1); if (t) goto L_00294CD0; }
SET64(3, (s32)rd32(c, (RW(17) + 32)));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 28), RW(2));
SET64(4, RD(16) + RD(0));
SET32(3, RW(3) + 1);
SET64(31, 0x294ca8); wr32(c, (RW(17) + 32), RW(3)); JP_F_00294110(c);
SET64(18, RD(2) + RD(0)); goto L_00294CD0;
L_00294CB0:;
SET64(31, 0x294cb8); SET64(4, RD(16) + RD(0)); JP_F_00294E78(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_00294CD0; }
SET64(31, 0x294ccc); wr32(c, (RW(17) + 28), RW(0)); JP_F_00294110(c);
SET64(18, RD(2) + RD(0));
L_00294CD0:;
SET64(31, 0x294cd8); SET64(4, RD(29) + RD(0)); JP_F_0028ABC8(c);
SET64(2, RD(18) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00294CF8(Ctx *c) { /* func_00294CF8 */
ENTER(0x294cf8);
SET32(29, RW(29) + -48);
SET32(5, RW(0) + 67);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x294d18); SET32(17, RW(16) + 2384); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00294E60; }
SET64(31, 0x294d28); SET32(5, RW(0) + 15); JP_F_00297980(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00294E64; }
SET64(3, (s32)rd32(c, (RW(16) + 80)));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00294E60; }
SET64(4, (s32)rd32(c, (RW(16) + 72)));
SET32(3, RW(0) + 4);
if (RD(4) != RD(3)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00294E64; }
SET64(31, 0x294d54); SET64(4, RD(16) + RD(0)); JP_F_00294F58(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00294E60; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x294d68); SET32(5, RW(0) + 5); JP_F_00297980(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00294D84; }
SET64(3, (s32)rd32(c, (RW(17) + 36)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00294E60; }
SET64(4, RD(16) + RD(0));
L_00294D84:;
SET64(31, 0x294d8c); SET32(5, RW(0) + 6); JP_F_00297980(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00294DAC; }
SET64(31, 0x294da0); SET32(5, RW(0) + 2); JP_F_002887E8(c);
{ int t = RSD(2) > 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00294E60; }
SET64(4, RD(16) + RD(0));
L_00294DAC:;
SET64(31, 0x294db4); SET32(5, RW(0) + 1); JP_F_0029A128(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00294DCC; }
SET64(31, 0x294dc4); SET64(5, RD(0) + RD(0)); JP_F_002887E8(c);
{ int t = RSD(2) > 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00294E60; }
L_00294DCC:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x294dd8); SET32(5, RW(0) + 5); JP_F_00297980(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(5, RD(29) + RD(0)); goto L_00294DF8; }
SET64(31, 0x294dec); SET64(4, RD(16) + RD(0)); JP_F_00294FF8(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00294E60; }
SET64(5, RD(29) + RD(0));
L_00294DF8:;
SET32(6, RW(29) + 4);
SET64(31, 0x294e04); SET64(4, RD(16) + RD(0)); JP_F_002986A8(c);
SET32(3, RW(16) + 3368);
SET64(17, (s32)rd32(c, (RW(3) + 648)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 68);
SET64(31, 0x294e1c); SET64(16, (s32)rd32(c, (RW(3) + 644))); JP_F_00297980(c);
SET64(5, RD(17) + RD(0));
SET64(6, (s64)(s32)0xf0000);
SET64(4, RD(2) + RD(0));
SET64(31, 0x294e30); SET64(6, RD(6) | 0x4240); JP_F_0027B438(c);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
{ int t = RSD(4) <= 0; SET32(16, RW(16) - RW(2)); if (t) goto L_00294E44; }
{ int t = RSD(16) > 0; SET64(5, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_00294E50; }
L_00294E44:;
SET64(2, RD(0) + RD(0)); goto L_00294E60;
L_00294E50:;
SET64(6, RD(16) + RD(0));
SET64(31, 0x294e5c); SET64(7, RD(17) + RD(0)); JP_F_00298AA0(c);
SET64(2, RD(2) < (u64)(s64)1);
L_00294E60:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00294E64:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00294E78(Ctx *c) { /* func_00294E78 */
ENTER(0x294e78);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x294e90); SET64(17, RD(4) + RD(0)); JP_F_00294F58(c);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 5); if (t) goto L_00294EE8; }
SET64(31, 0x294ea4);  JP_F_00297980(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_00294EC0; }
SET64(31, 0x294eb8);  JP_F_00294FF8(c);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00294F44; }
L_00294EC0:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x294ecc); SET32(5, RW(0) + 6); JP_F_00297980(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_00294EF0; }
SET64(31, 0x294ee0);  JP_F_002950B0(c);
if (RD(2) == RD(0)) { SET64(5, RD(29) + RD(0)); goto L_00294EF4; }
L_00294EE8:;
SET32(2, RW(0) + 1); goto L_00294F44;
L_00294EF0:;
SET64(5, RD(29) + RD(0));
L_00294EF4:;
SET32(6, RW(29) + 4);
SET64(31, 0x294f00); SET64(4, RD(17) + RD(0)); JP_F_002986A8(c);
SET32(3, RW(17) + 3368);
SET64(16, (s32)rd32(c, (RW(3) + 648)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 69);
SET64(31, 0x294f18); SET64(17, (s32)rd32(c, (RW(3) + 644))); JP_F_00297980(c);
SET64(5, RD(16) + RD(0));
SET64(6, (s64)(s32)0xf0000);
SET64(4, RD(2) + RD(0));
SET64(31, 0x294f2c); SET64(6, RD(6) | 0x4240); JP_F_0027B438(c);
SET64(7, RD(16) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET32(6, RW(17) - RW(2));
SET64(31, 0x294f40); SET64(5, (s32)rd32(c, (RW(29) + 4))); JP_F_00298AA0(c);
SET64(2, RD(0) < RD(2));
L_00294F44:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00294F58(Ctx *c) { /* func_00294F58 */
ENTER(0x294f58);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 5);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x294f74); SET64(17, RD(4) + RD(0)); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00294F8C; }
SET64(31, 0x294f84); SET32(5, RW(0) + 6); JP_F_0029A110(c);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00294FE0; }
L_00294F8C:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x294f98); SET32(5, RW(0) + 6); JP_F_00297980(c);
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_00294FC0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x294fac); SET32(5, RW(0) + 7); JP_F_0029A110(c);
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_00294FC0; }
L_00294FB4:;
SET32(2, RW(0) + 1); goto L_00294FE0;
L_00294FC0:;
SET64(5, RD(16) + RD(0));
L_00294FC4:;
SET32(16, RW(16) + 1);
SET64(31, 0x294fd0); SET64(4, RD(17) + RD(0)); JP_F_002887C8(c);
{ int t = RD(2) != RD(0); SET64(3, RD(16) < (u64)(s64)8); if (t) { POLL(); goto L_00294FB4; } }
{ int t = RD(3) != RD(0); SET64(5, RD(16) + RD(0)); if (t) { POLL(); goto L_00294FC4; } }
L_00294FE0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00294FF8(Ctx *c) { /* func_00294FF8 */
ENTER(0x294ff8);
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
{ u32 t = RW(2); SET64(31, 0x295044); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 12)));
SET64(18, RD(2) + RD(0));
SET32(3, RW(0) + 100);
SET32(5, RW(0) + 70);
SET32(2, RW(6) << 2);
if (RD(3) == RD(0)) { rt_break(c, 0x295060); goto L_00295064; }
L_00295064:;
SET32(2, RW(2) + RW(6));
SET32(2, RW(2) << 4);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
SET64(2, RSD(18) < RSD(2));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_00295098; }
SET64(31, 0x295088);  JP_F_00297980(c);
SET64(3, RSD(18) < RSD(2));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00295098; }
SET32(2, RW(0) + 1);
L_00295098:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002950B0(Ctx *c) { /* func_002950B0 */
ENTER(0x2950b0);
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
{ u32 t = RW(2); SET64(31, 0x2950f4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET32(4, RW(0) + 100);
SET32(3, RW(5) << 2);
if (RD(4) == RD(0)) { rt_break(c, 0x295104); goto L_00295108; }
L_00295108:;
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

void JP_F_00295130(Ctx *c) { /* func_00295130 */
ENTER(0x295130);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x295144); SET64(16, RD(4) + RD(0)); JP_F_002951A0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029517C; }
SET64(31, 0x295154);  JP_F_00295210(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029517C; }
SET64(31, 0x295164);  JP_F_002952D8(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029517C; }
SET64(31, 0x295174);  JP_F_00295330(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00295190; }
L_0029517C:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_002953C0(c); return; }
L_00295190:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002951A0(Ctx *c) { /* func_002951A0 */
ENTER(0x2951a0);
SET32(29, RW(29) + -48);
SET32(3, RW(4) + 2564);
wr64(c, (RW(29) + 16), RD(16));
SET32(5, RW(0) + -4);
wr64(c, (RW(29) + 24), RD(17));
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(16, (s32)rd32(c, (RW(3) + 80)));
{ int t = RD(16) == RD(5); SET64(17, (s32)rd32(c, (RW(3) + 84))); if (t) goto L_002951F8; }
SET32(6, RW(29) + 4);
SET64(31, 0x2951d4); SET64(5, RD(29) + RD(0)); JP_F_002986A8(c);
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
{ int t = RSD(3) < 0; SET64(4, RD(3) + RD(0)); if (t) goto L_002951F8; }
SET64(31, 0x2951f4); SET64(5, (s32)rd32(c, (RW(29) + 4))); JP_F_0026EE58(c);
SET64(2, RD(2) < (u64)(s64)1);
L_002951F8:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00295210(Ctx *c) { /* func_00295210 */
ENTER(0x295210);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(3, RW(16) + 2564);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 6); if (t) goto L_00295248; }
SET64(3, (s32)rd32(c, (RW(3) + 20)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_002952C0; }
SET32(5, RW(0) + 6);
L_00295248:;
SET64(31, 0x295250); SET64(4, RD(16) + RD(0)); JP_F_0029A110(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 7);
SET64(31, 0x295260); SET64(18, RD(2) + RD(0)); JP_F_0029A110(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 25);
SET64(31, 0x295270); SET64(17, RD(2) + RD(0)); JP_F_00297980(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_002952A8; }
if (RD(3) == RD(0)) { SET64(4, RD(17) & RD(18)); goto L_002952BC; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 3); if (t) goto L_002952B0; }
{ int t = RD(3) == RD(2); SET64(2, RD(4) + RD(0)); if (t) goto L_002952B8; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_002952C4;
L_002952A8:;
SET64(4, RD(17) + RD(0)); goto L_002952BC;
L_002952B0:;
SET64(4, RD(18) + RD(0)); goto L_002952BC;
L_002952B8:;
SET64(4, RD(17) | RD(18));
L_002952BC:;
SET64(2, RD(4) + RD(0));
L_002952C0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002952C4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002952D8(Ctx *c) { /* func_002952D8 */
ENTER(0x2952d8);
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(0) + 4);
SET64(2, (s32)rd32(c, (RW(5) + 72)));
{ int t = RD(2) != RD(3); SET32(6, RW(5) + 2384); if (t) goto L_00295310; }
SET64(2, (s32)rd32(c, (RW(5) + 80)));
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00295324; }
SET64(2, (s32)rd32(c, (RW(6) + 28)));
{ int t = RD(2) != RD(3);  if (t) goto L_00295318; }
L_00295310:;
SET64(2, RD(0) + RD(0)); goto L_00295324;
L_00295318:;
SET64(31, 0x295320);  JP_F_00298348(c);
SET64(2, RD(0) < RD(2));
L_00295324:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00295330(Ctx *c) { /* func_00295330 */
ENTER(0x295330);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 4);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 72)));
{ int t = RD(2) != RD(3); SET32(5, RW(16) + 2384); if (t) goto L_0029537C; }
SET64(2, (s32)rd32(c, (RW(16) + 80)));
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_002953B0; }
SET64(2, (s32)rd32(c, (RW(5) + 28)));
{ int t = RD(2) == RD(3); SET64(5, RD(29) + RD(0)); if (t) goto L_0029537C; }
SET64(31, 0x295374); SET32(6, RW(29) + 4); JP_F_00298568(c);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_00295388; }
L_0029537C:;
SET64(2, RD(0) + RD(0)); goto L_002953B0;
L_00295388:;
{ int t = RSD(3) < 0; SET64(4, RD(16) + RD(0)); if (t) goto L_002953B0; }
SET64(31, 0x295398); SET32(5, RW(0) + 54); JP_F_00297980(c);
SET32(5, RW(0) + 1000);
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, 0x2953ac); SET64(7, (s32)rd32(c, (RW(29) + 4))); JP_F_00298AA0(c);
SET64(2, RD(0) < RD(2));
L_002953B0:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002953C0(Ctx *c) { /* func_002953C0 */
ENTER(0x2953c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2953d4); SET64(16, RD(4) + RD(0)); JP_F_00295CB8(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002953E8; }
SET32(3, RW(0) + 6);
wr32(c, (RW(16) + 76), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_002953E8:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002953F8(Ctx *c) { /* func_002953F8 */
ENTER(0x2953f8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x29540c); SET32(4, RW(29) + 16); JP_F_0028ABB0(c);
wr32(c, (RW(29) + 0), RW(0));
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(29) + 4), RW(0));
SET32(6, RW(2) + 25404);
wr32(c, (RW(29) + 8), RW(0));
SET32(7, RW(0) + 6);
SET32(5, RW(0) + 7);
SET64(2, (s32)rd32(c, (RW(6) + 0)));
L_00295430:;
{ int t = RD(2) == RD(0); SET32(6, RW(6) + 4); if (t) goto L_0029546C; }
SET64(2, (s32)rd32(c, (RW(2) + 72)));
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_00295458; }
{ int t = RD(2) == RD(7); SET32(16, RW(0) + 2); if (t) goto L_00295458; }
{ int t = RSD(2) >= 0; SET32(16, RW(0) + 1); if (t) goto L_00295458; }
SET32(16, RW(0) + 2);
L_00295458:;
SET32(2, RW(16) << 2);
SET32(4, RW(29) + RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(3, RW(3) + 1);
wr32(c, (RW(4) + 0), RW(3));
L_0029546C:;
SET32(5, RW(5) + -1);
if (RSD(5) >= 0) { SET64(2, (s32)rd32(c, (RW(6) + 0))); { POLL(); goto L_00295430; } }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(2) != RD(0); SET32(16, RW(0) + 1); if (t) goto L_00295490; }
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET32(16, RW(0) + 2);
if (RD(2) == 0) SET64(16, RD(0));
L_00295490:;
SET64(2, (s64)(s32)0x410000);
SET32(4, RW(29) + 16);
SET64(31, 0x2954a0); wr32(c, (RW(2) + 25296), RW(16)); JP_F_0028ABC8(c);
SET64(31, rd64(c, (RW(29) + 40)));
SET64(2, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002954B8(Ctx *c) { /* func_002954B8 */
ENTER(0x2954b8);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2954e4); SET32(19, RW(2) + 25404); JP_F_00295550(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00295534; }
SET64(31, 0x2954f4);  JP_F_002955B8(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + -1);
{ int t = RD(16) != RD(2); SET64(4, RD(17) + RD(0)); if (t) goto L_00295520; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(31, 0x295514); SET64(5, RD(5) | 0x206); JP_F_0028A8F8(c);
SET64(2, RD(0) + RD(0)); goto L_00295534;
L_00295520:;
SET64(31, 0x295528); SET64(5, RD(18) + RD(0)); JP_F_002955F8(c);
SET32(3, RW(16) << 2);
SET32(3, RW(3) + RW(19));
wr32(c, (RW(3) + 0), RW(2));
L_00295534:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00295550(Ctx *c) { /* func_00295550 */
ENTER(0x295550);
SET32(29, RW(29) + -16);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(2) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00295580; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x204);
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00295580:;
SET64(2, (s32)rd32(c, (RW(3) + 64)));
SET64(2, RD(2) < (u64)(s64)14104);
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_002955A8; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x205);
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_002955A8:;
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_002955B8(Ctx *c) { /* func_002955B8 */
ENTER(0x2955b8);
SET64(2, (s64)(s32)0x410000);
SET64(5, RD(0) + RD(0));
SET32(6, RW(2) + 25404);
SET64(3, (s32)rd32(c, (RW(6) + 0)));
L_002955C8:;
SET32(6, RW(6) + 4);
SET64(2, RD(5) + RD(0));
SET32(5, RW(5) + 1);
{ int t = RD(3) == RD(0); SET64(4, RSD(5) < (s64)8); if (t) goto L_002955F0; }
if (RD(4) != RD(0)) { SET64(3, (s32)rd32(c, (RW(6) + 0))); { POLL(); goto L_002955C8; } }
SET32(2, RW(0) + -1);
L_002955F0:;
 return;
}

void JP_F_002955F8(Ctx *c) { /* func_002955F8 */
ENTER(0x2955f8);
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
{ int t = RD(16) == RD(0); SET32(6, RW(7) >> 2); if (t) goto L_002957FC; }
SET32(3, RW(7) + -1);
SET64(3, RD(3) < (u64)(s64)28208);
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00295800; }
SET64(8, (s64)(s32)0x410000);
SET64(3, (s32)rd32(c, (RW(8) + 25472)));
{ int t = RD(3) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029565C; }
if (RD(3) != RD(7)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00295800; }
SET64(4, RD(16) + RD(0));
L_0029565C:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x295668); wr32(c, (RW(8) + 25472), RW(7)); JP_F_00275270(c);
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
{ int t = RD(5) == RD(0); SET64(3, RD(17) + RD(0)); if (t) goto L_00295700; }
SET32(4, RW(18) + 64);
L_002956A0:;
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
{ int t = RD(2) != RD(4); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_002956A0; } }
 goto L_00295738;
L_00295700:;
SET32(4, RW(18) + 64);
L_00295704:;
SET64(5, rd64(c, (RW(2) + 0)));
SET64(6, rd64(c, (RW(2) + 8)));
SET64(7, rd64(c, (RW(2) + 16)));
SET64(8, rd64(c, (RW(2) + 24)));
wr64(c, (RW(3) + 0), RD(5));
wr64(c, (RW(3) + 8), RD(6));
wr64(c, (RW(3) + 16), RD(7));
wr64(c, (RW(3) + 24), RD(8));
SET32(2, RW(2) + 32);
{ int t = RD(2) != RD(4); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_00295704; } }
L_00295738:;
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(19, RW(0) + 1);
SET64(16, (s64)(s32)0x410000);
wr32(c, (RW(3) + 0), RW(4));
SET32(4, RW(17) + 120);
wr32(c, (RW(17) + 80), RW(0));
SET32(16, RW(16) + 24888);
wr32(c, (RW(17) + 68), RW(19));
SET64(31, 0x295760); wr32(c, (RW(17) + 84), RW(0)); JP_F_00289BF8(c);
SET64(31, 0x295768); SET32(4, RW(17) + 2316); JP_F_00295820(c);
SET64(31, 0x295770); SET32(4, RW(17) + 2384); JP_F_00295888(c);
SET64(31, 0x295778); SET32(4, RW(17) + 13880); JP_F_00295910(c);
SET64(31, 0x295780); SET32(4, RW(17) + 2544); JP_F_0028A8E0(c);
SET32(4, RW(17) + 2564);
SET64(5, RD(16) + RD(0));
SET64(31, 0x295790); SET32(6, RW(0) + 400); JP_F_00274E00(c);
SET32(4, RW(17) + 2964);
SET32(6, RW(0) + 400);
SET64(31, 0x2957a0); SET64(5, RD(16) + RD(0)); JP_F_00274E00(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2957ac); SET32(5, RW(17) + 3368); JP_F_00297D68(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(17) + 4872);
SET64(31, 0x2957bc); SET64(6, RD(18) + RD(0)); JP_F_00287200(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002957FC; }
SET64(6, RD(18) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2957d8); SET32(5, RW(17) + 7976); JP_F_00299A78(c);
SET64(31, 0x2957e0); SET32(4, RW(17) + 13864); JP_F_00296870(c);
SET64(31, 0x2957e8); SET64(4, RD(17) + RD(0)); JP_F_00295A40(c);
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002957FC; }
wr32(c, (RW(17) + 72), RW(19));
SET64(2, RD(17) + RD(0));
wr32(c, (RW(17) + 76), RW(19));
L_002957FC:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00295800:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

static void JP_B_00295820(Ctx *c, u32 entry) { /* func_00295820 */
ENTER(entry);
switch (entry) { case 0x295838: goto L_00295838; }
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29583c); SET64(16, RD(4) + RD(0)); JP_F_00275270(c);
if (0) { L_00295838:; SET64(16, RD(4) + RD(0)); }
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
void JP_F_00295820(Ctx *c) { JP_B_00295820(c, 0x295820); }
void JP_F_00295838(Ctx *c) { JP_B_00295820(c, 0x295838); }

void JP_F_00295888(Ctx *c) { /* func_00295888 */
ENTER(0x295888);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2958a4); SET32(6, RW(0) + 40); JP_F_00275270(c);
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
SET64(31, 0x2958d8); wr32(c, (RW(16) + 44), RW(0)); JP_F_00295900(c);
SET64(31, 0x2958e0); SET32(4, RW(16) + 72); JP_F_00295900(c);
SET64(31, 0x2958e8); SET32(4, RW(16) + 96); JP_F_00295900(c);
SET32(4, RW(16) + 120);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00295900(c); return; }
}

void JP_F_00295900(Ctx *c) { /* func_00295900 */
ENTER(0x295900);
wr64(c, (RW(4) + 16), RD(0));
wr64(c, (RW(4) + 0), RD(0));
wr64(c, (RW(4) + 8), RD(0)); return;
}

void JP_F_00295910(Ctx *c) { /* func_00295910 */
ENTER(0x295910);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
SET32(6, RW(0) + 48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x295938); SET32(17, RW(0) + 4); JP_F_00275270(c);
SET64(16, RD(18) + RD(0));
SET64(4, RD(16) + RD(0));
L_00295940:;
SET32(16, RW(16) + 32);
SET64(31, 0x29594c); SET32(17, RW(17) + -1); JP_F_002998E8(c);
{ int t = RSD(17) >= 0; SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_00295940; } }
SET32(4, RW(18) + 160);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_002998E8(c); return; }
}

void JP_F_00295970(Ctx *c) { /* func_00295970 */
ENTER(0x295970);
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
SET64(31, 0x2959a4); wr32(c, (RW(16) + 0), RW(2)); JP_F_00297980(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
{ int t = RD(2) == RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_002959BC; }
{ u32 t = RW(2); SET64(31, 0x2959bc);  rt_call(c, t); }
L_002959BC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002959D8(Ctx *c) { /* func_002959D8 */
ENTER(0x2959d8);
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
SET64(31, 0x295a0c); wr32(c, (RW(16) + 4), RW(2)); JP_F_00297980(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
{ int t = RD(2) == RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_00295A24; }
{ u32 t = RW(2); SET64(31, 0x295a24);  rt_call(c, t); }
L_00295A24:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00295A40(Ctx *c) { /* func_00295A40 */
ENTER(0x295a40);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00299FE0(c); return; }
}

void JP_F_00295A58(Ctx *c) { /* func_00295A58 */
ENTER(0x295a58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x295a6c); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 8))); if (t) goto L_00295A90; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x131);
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00295A90:;
SET64(31, 0x295a98); SET64(4, RD(16) + RD(0)); JP_F_00295C30(c);
SET64(31, 0x295aa0); SET32(4, RW(16) + 120); JP_F_00289C10(c);
SET64(31, 0x295aa8); SET64(4, RD(16) + RD(0)); JP_F_002874D0(c);
SET64(31, 0x295ab0); SET64(4, RD(16) + RD(0)); JP_F_00295AF8(c);
SET32(4, RW(0) + 7);
SET64(5, RD(2) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(2) + 25404);
L_00295AC0:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
if (RD(2) == RD(16)) { wr32(c, (RW(3) + 0), RW(0)); goto L_00295ACC; }
L_00295ACC:;
SET32(4, RW(4) + -1);
{ int t = RSD(4) >= 0; SET32(3, RW(3) + 4); if (t) { POLL(); goto L_00295AC0; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(5) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00295AF8(Ctx *c) { /* func_00295AF8 */
ENTER(0x295af8);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 4);
wr32(c, (RW(2) + 76), RW(0));
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(2) + 72), RW(0));
SET32(29, RW(29) + 16); { JP_F_00299FE0(c); return; }
}

void JP_F_00295B20(Ctx *c) { /* func_00295B20 */
ENTER(0x295b20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x295b34); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x132); if (t) goto L_00295B58; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00295B58:;
SET64(31, 0x295b60); SET32(5, RW(0) + 47); JP_F_00297980(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00295B80; }
SET64(31, 0x295b74);  JP_F_00294278(c);
SET32(3, RW(0) + 1); goto L_00295B8C;
L_00295B80:;
SET64(31, 0x295b88);  JP_F_00295BA0(c);
SET32(3, RW(0) + 1);
L_00295B8C:;
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 68), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00295BA0(Ctx *c) { /* func_00295BA0 */
ENTER(0x295ba0);
SET32(3, RW(0) + 4);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(4) + 76), RW(3)); return;
}

void JP_F_00295BB0(Ctx *c) { /* func_00295BB0 */
ENTER(0x295bb0);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 7);
SET32(6, RW(0) + 6);
SET64(7, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x295bcc); SET64(8, RD(0) + RD(0)); JP_F_0029A078(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00295BD8(Ctx *c) { /* func_00295BD8 */
ENTER(0x295bd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x295bec); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x133); if (t) goto L_00295C10; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00295C10:;
SET64(31, 0x295c18);  JP_F_00295C30(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 68), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00295C30(Ctx *c) { /* func_00295C30 */
ENTER(0x295c30);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 72)));
{ int t = RD(3) == RD(5); SET64(2, RD(0) + RD(0)); if (t) goto L_00295C84; }
SET64(31, 0x295c58);  JP_F_00295CB8(c);
{ int t = RD(2) != RD(0); SET32(4, RW(0) + 1); if (t) goto L_00295C84; }
wr32(c, (RW(16) + 76), RW(0));
SET64(31, 0x295c6c); wr32(c, (RW(16) + 72), RW(0)); JP_F_00295C98(c);
SET64(31, 0x295c74); SET64(4, RD(16) + RD(0)); JP_F_00295D18(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x295c80); SET64(16, RD(2) + RD(0)); JP_F_00295C98(c);
SET64(2, RD(16) + RD(0));
L_00295C84:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00295C98(Ctx *c) { /* func_00295C98 */
ENTER(0x295c98);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + 25396), RW(4)); return;
}

void JP_F_00295CA8(Ctx *c) { /* func_00295CA8 */
ENTER(0x295ca8);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + 25396))); return;
}

void JP_F_00295CB8(Ctx *c) { /* func_00295CB8 */
ENTER(0x295cb8);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 4);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 72)));
if (RD(2) != RD(3)) { SET32(3, RW(0) + 1); goto L_00295CF8; }
SET32(5, RW(0) + 7);
SET32(6, RW(0) + 7);
SET64(7, RD(0) + RD(0));
SET64(31, 0x295cec); SET64(8, RD(0) + RD(0)); JP_F_0029A078(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00295D08; }
SET32(3, RW(0) + 1);
L_00295CF8:;
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 76), RW(3));
wr32(c, (RW(16) + 72), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
L_00295D08:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00295D18(Ctx *c) { /* func_00295D18 */
ENTER(0x295d18);
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
{ int t = RD(2) == RD(0); wr32(c, (RW(29) + 592), RW(0)); if (t) goto L_00295DC0; }
SET32(2, RW(16) + 64);
L_00295D60:;
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
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_00295D60; } }
 goto L_00295DF8;
L_00295DC0:;
SET32(2, RW(16) + 64);
L_00295DC4:;
SET64(5, rd64(c, (RW(3) + 0)));
SET64(6, rd64(c, (RW(3) + 8)));
SET64(7, rd64(c, (RW(3) + 16)));
SET64(8, rd64(c, (RW(3) + 24)));
wr64(c, (RW(4) + 0), RD(5));
wr64(c, (RW(4) + 8), RD(6));
wr64(c, (RW(4) + 16), RD(7));
wr64(c, (RW(4) + 24), RD(8));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_00295DC4; } }
L_00295DF8:;
SET64(2, (s32)rd32(c, (RW(3) + 0)));
wr32(c, (RW(4) + 0), RW(2));
SET64(21, (s32)rd32(c, (RW(16) + 2596)));
{ int t = RD(21) == RD(0);  if (t) goto L_00295E20; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x295e18); SET32(5, RW(29) + 80); JP_F_002960E8(c);
SET64(8, (s32)rd32(c, (RW(29) + 100)));
wr32(c, (RW(29) + 592), RW(8));
L_00295E20:;
SET64(31, 0x295e28); SET32(4, RW(16) + 120); JP_F_00289C10(c);
SET64(31, 0x295e30); SET64(4, RD(16) + RD(0)); JP_F_002874D0(c);
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
{ int t = RD(18) == RD(0); wr32(c, (RW(29) + 612), RW(3)); if (t) goto L_00295EB0; }
SET64(4, (s32)rd32(c, (RW(18) + 3536)));
wr32(c, (RW(29) + 616), RW(4));
SET64(5, (s32)rd32(c, (RW(18) + 3524)));
wr32(c, (RW(29) + 620), RW(5));
SET64(6, (s32)rd32(c, (RW(18) + 3528)));
wr32(c, (RW(29) + 624), RW(6));
SET64(7, (s32)rd32(c, (RW(18) + 3532)));
wr32(c, (RW(29) + 628), RW(7));
SET64(8, (s32)rd32(c, (RW(18) + 3540)));
wr32(c, (RW(29) + 632), RW(8)); goto L_00295EC4;
L_00295EB0:;
wr32(c, (RW(29) + 632), RW(0));
wr32(c, (RW(29) + 628), RW(0));
wr32(c, (RW(29) + 624), RW(0));
wr32(c, (RW(29) + 620), RW(0));
wr32(c, (RW(29) + 616), RW(0));
L_00295EC4:;
SET32(3, RW(16) + 5044);
SET32(20, RW(29) + 512);
SET64(2, (s32)rd32(c, (RW(3) + 4)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(20) + RD(0));
SET32(6, RW(0) + 64);
SET32(2, RW(2) << 4);
wr32(c, (RW(29) + 640), RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x295ef0); wr32(c, (RW(29) + 636), RW(3)); JP_F_0028CFF8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x295efc); SET64(19, RD(2) + RD(0)); JP_F_00295AF8(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 656))); goto L_002960B8; }
SET32(17, RW(29) + 112);
SET32(5, RW(16) + 2964);
SET32(6, RW(0) + 400);
SET64(31, 0x295f18); SET64(4, RD(17) + RD(0)); JP_F_00274E00(c);
SET64(5, RD(0) + RD(0));
SET64(31, 0x295f24); SET64(4, RD(29) + RD(0)); JP_F_002955F8(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET32(4, RW(16) + 2564); if (t) goto L_00295F48; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(31, 0x295f40); SET64(5, RD(5) | 0x202); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 656))); goto L_002960B8;
L_00295F48:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x295f54); SET32(6, RW(0) + 400); JP_F_00274E00(c);
SET32(4, RW(16) + 2964);
SET64(5, RD(17) + RD(0));
SET64(31, 0x295f64); SET32(6, RW(0) + 400); JP_F_00274E00(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(31, 0x295f74); SET64(6, RD(19) + RD(0)); JP_F_0028D080(c);
{ int t = RD(21) == RD(0);  if (t) goto L_00295FB0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x295f88); SET32(5, RW(29) + 80); JP_F_002960E8(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 656))); goto L_002960B8; }
SET64(6, (s32)rd32(c, (RW(29) + 100)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x295fa0); SET64(5, (s32)rd32(c, (RW(29) + 592))); JP_F_00296158(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 656))); goto L_002960B8; }
SET64(31, 0x295fb0); SET64(4, RD(16) + RD(0)); JP_F_002961D8(c);
L_00295FB0:;
{ int t = RD(22) == RD(0); SET64(6, (s32)rd32(c, (RW(29) + 596))); if (t) goto L_00295FC4; }
SET64(5, RD(22) + RD(0));
SET64(31, 0x295fc4); SET64(4, RD(16) + RD(0)); JP_F_0028A9A8(c);
L_00295FC4:;
{ int t = RD(23) == RD(0); SET64(5, RD(23) + RD(0)); if (t) goto L_00295FD4; }
SET64(31, 0x295fd4); SET64(4, RD(16) + RD(0)); JP_F_00298AB8(c);
L_00295FD4:;
{ int t = RD(30) == RD(0); SET64(6, (s32)rd32(c, (RW(29) + 600))); if (t) goto L_00295FEC; }
SET64(5, RD(30) + RD(0));
SET64(7, (s32)rd32(c, (RW(29) + 604)));
SET64(31, 0x295fec); SET64(4, RD(16) + RD(0)); JP_F_00298B40(c);
L_00295FEC:;
SET64(2, (s32)rd32(c, (RW(29) + 608)));
{ int t = RD(2) == RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_00296000; }
SET64(31, 0x296000); SET64(4, RD(16) + RD(0)); JP_F_00298A48(c);
L_00296000:;
SET64(3, (s32)rd32(c, (RW(29) + 612)));
SET32(2, RW(0) + 1000);
{ int t = RD(3) == RD(2); SET64(5, RD(3) + RD(0)); if (t) goto L_00296018; }
SET64(31, 0x296018); SET64(4, RD(16) + RD(0)); JP_F_00294288(c);
L_00296018:;
SET64(2, (s32)rd32(c, (RW(29) + 576)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x410000); if (t) goto L_00296050; }
ldl(c, 4, (RW(29) + 583));
ldr(c, 4, (RW(29) + 576));
SET64(5, (s32)rd32(c, (RW(29) + 584)));
sdl(c, 4, (RW(16) + 4831));
sdr(c, 4, (RW(16) + 4824));
wr32(c, (RW(16) + 4832), RW(5));
SET64(2, (s32)rd32(c, (RW(2) + 25464)));
{ int t = RD(2) == RD(0); SET32(8, RW(29) + 576); if (t) goto L_00296050; }
{ u32 t = RW(2); SET64(31, 0x296050); SET64(4, RD(8) + RD(0)); rt_call(c, t); }
L_00296050:;
{ int t = RD(18) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 636))); if (t) goto L_0029609C; }
SET64(5, RD(18) + RD(0));
SET64(31, 0x296064); SET64(4, RD(16) + RD(0)); JP_F_00296A00(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x296070); SET64(5, (s32)rd32(c, (RW(29) + 616))); JP_F_002973A8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x29607c); SET64(5, (s32)rd32(c, (RW(29) + 620))); JP_F_002972B0(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 624)));
SET64(31, 0x29608c); SET64(6, (s32)rd32(c, (RW(29) + 628))); JP_F_00297320(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x296098); SET64(5, (s32)rd32(c, (RW(29) + 632))); JP_F_00297418(c);
SET64(2, (s32)rd32(c, (RW(29) + 636)));
L_0029609C:;
{ int t = RD(2) == RD(0); SET64(6, (s32)rd32(c, (RW(29) + 640))); if (t) goto L_002960B0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2960b0); SET64(5, RD(2) + RD(0)); JP_F_00296428(c);
L_002960B0:;
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 656)));
L_002960B8:;
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

void JP_F_002960E8(Ctx *c) { /* func_002960E8 */
ENTER(0x2960e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x296104); SET64(17, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(5, RD(5) | 0x134);
SET32(6, RW(0) + 9);
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_00296138; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00296138:;
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029A078(c); return; }
}

void JP_F_00296158(Ctx *c) { /* func_00296158 */
ENTER(0x296158);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29617c); SET64(18, RD(6) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(17) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(8, RD(18) + RD(0));
SET64(5, RD(5) | 0x135);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 10); if (t) goto L_002961B8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_002961B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0029A078(c); return; }
}

void JP_F_002961D8(Ctx *c) { /* func_002961D8 */
ENTER(0x2961d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2961f4); SET64(17, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x135); if (t) goto L_00296220; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00296220:;
SET64(16, (s32)rd32(c, (RW(17) + 7996)));
SET32(18, RW(0) + 1);
SET64(31, 0x296230); SET64(5, RD(16) + RD(0)); JP_F_002887C8(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
{ int t = RD(2) == RD(18); SET32(6, RW(0) + 1); if (t) goto L_0029624C; }
SET64(31, 0x296248);  JP_F_002887A8(c);
wr32(c, (RW(17) + 68), RW(18));
L_0029624C:;
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00296268(Ctx *c) { /* func_00296268 */
ENTER(0x296268);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x296278); SET64(5, (s32)rd32(c, (RW(4) + 7996))); JP_F_002887C8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00296288(Ctx *c) { /* func_00296288 */
ENTER(0x296288);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2962ac); wr32(c, (RW(16) + 0), RW(0)); JP_F_0028AB18(c);
SET64(4, RD(0) + RD(0));
SET32(5, RW(0) + 6);
SET32(6, RW(0) + 11);
SET64(7, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_002962E8; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0x136);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_002962E8:;
SET64(31, 0x2962f0); SET64(4, RD(17) + RD(0)); JP_F_0029A078(c);
SET64(4, RD(17) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) == RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_0029630C; }
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 2408), RW(2));
L_0029630C:;
SET64(2, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(2) + 25476)));
if (RD(2) == RD(0)) { SET64(2, RD(18) + RD(0)); goto L_00296328; }
{ u32 t = RW(2); SET64(31, 0x296324);  rt_call(c, t); }
SET64(2, RD(18) + RD(0));
L_00296328:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00296340(Ctx *c) { /* func_00296340 */
ENTER(0x296340);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29635c); SET64(17, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(5, RD(5) | 0x137);
SET32(6, RW(0) + 12);
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_00296390; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00296390:;
wr32(c, (RW(17) + 2408), RW(0));
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 6);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0029A078(c); return; }
}

void JP_F_002963B0(Ctx *c) { /* func_002963B0 */
ENTER(0x2963b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2963cc); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002963F0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x139);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_002963F0:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_002877F8(c); return; }
}

void JP_F_00296410(Ctx *c) { /* func_00296410 */
ENTER(0x296410);
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void JP_F_00296428(Ctx *c) { /* func_00296428 */
ENTER(0x296428);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00296494; }
{ int t = RSD(16) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00296498; }
SET64(31, 0x29645c);  JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x165);
{ int t = RD(2) == RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_00296488; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00296488:;
SET32(4, RW(18) + 5044);
SET64(31, 0x296494); SET64(5, RD(17) + RD(0)); JP_F_002964B0(c);
L_00296494:;
SET64(2, RD(0) + RD(0));
L_00296498:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002964B0(Ctx *c) { /* func_002964B0 */
ENTER(0x2964b0);
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
SET64(31, 0x2964f0); SET64(4, RD(17) + RD(0)); JP_F_001273D0(c);
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

void JP_F_00296530(Ctx *c) { /* func_00296530 */
ENTER(0x296530);
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
{ int t = RSD(6) < 0; SET32(3, RW(3) + RW(5)); if (t) goto L_002965AC; }
SET32(4, RW(3) << 2);
SET32(4, RW(16) + RW(4));
SET32(4, RW(4) + 4928);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(5, RD(8) + RD(0)); if (t) goto L_002965AC; }
SET64(31, 0x296584); SET64(6, RD(7) + RD(0)); JP_F_002965C0(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s64)(s32)0xff000000);
SET32(3, RW(0) + -1);
{ int t = RD(2) != RD(3); SET64(5, RD(5) | 0x421); if (t) goto L_002965A8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_002965A8:;
SET64(2, RD(0) + RD(0));
L_002965AC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002965C0(Ctx *c) { /* func_002965C0 */
ENTER(0x2965c0);
SET64(7, RD(4) + RD(0));
SET64(9, RD(6) + RD(0));
SET64(3, (s32)rd32(c, (RW(7) + 8)));
SET64(2, (s32)rd32(c, (RW(7) + 4)));
{ int t = RD(3) != RD(2); SET64(8, RD(5) + RD(0)); if (t) goto L_002965E8; }
SET32(3, RW(0) + 1);
SET32(2, RW(0) + -1);
wr32(c, (RW(9) + 0), RW(3)); return;
L_002965E8:;
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
{ int t = RD(4) != RD(0); SET32(5, RW(5) - RW(3)); if (t) goto L_00296624; }
SET32(6, RW(5) + 1);
L_00296624:;
SET64(2, (s32)rd32(c, (RW(7) + 8)));
wr32(c, (RW(7) + 12), RW(6));
SET32(2, RW(2) + 1);
SET64(3, RSD(2) < RSD(3));
{ int t = RD(3) != RD(0); wr32(c, (RW(7) + 8), RW(2)); if (t) goto L_00296648; }
SET32(2, RW(0) + 1);
wr32(c, (RW(9) + 0), RW(2)); goto L_0029664C;
L_00296648:;
wr32(c, (RW(9) + 0), RW(0));
L_0029664C:;
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_00296658(Ctx *c) { /* func_00296658 */
ENTER(0x296658);
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
{ int t = RD(5) == RD(0); SET64(7, (s32)rd32(c, (RW(3) + 8))); if (t) goto L_002966C0; }
SET32(2, RW(7) + RW(8));
SET32(5, RW(9) - RW(8));
SET64(2, RD(9) < RD(2));
SET64(31, 0x2966bc); if (RD(2) != 0) SET64(5, RD(9)); JP_F_002966D0(c);
SET64(2, RD(0) + RD(0));
L_002966C0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002966D0(Ctx *c) { /* func_002966D0 */
ENTER(0x2966d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(6, RD(7) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(2) == RD(0); SET64(7, RD(8) + RD(0)); if (t) goto L_00296754; }
SET64(31, 0x296700);  JP_F_00296768(c);
SET64(6, RD(2) + RD(0));
SET32(2, RW(0) + -1);
if (RD(6) == RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00296758; }
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
L_00296754:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00296758:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00296768(Ctx *c) { /* func_00296768 */
ENTER(0x296768);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET32(12, RW(6) + RW(7));
SET64(11, (s32)rd32(c, (RW(4) + 4)));
SET64(10, RD(0) + RD(0));
{ int t = RSD(2) <= 0; SET64(9, (s32)rd32(c, (RW(4) + 16))); if (t) goto L_00296828; }
SET64(15, (s32)rd32(c, (RW(4) + 0)));
SET64(6, RD(5) < RD(6));
SET64(14, RD(2) + RD(0));
SET64(13, RD(5) < RD(12));
SET32(2, RW(9) << 4);
L_00296798:;
SET32(2, RW(15) + RW(2));
SET64(3, (s32)rd32(c, (RW(2) + 8)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(8, RD(5) < RD(3));
SET32(4, RW(3) + RW(4));
SET64(2, RD(12) < RD(4));
{ int t = RD(2) != RD(0); SET64(3, RD(8) + RD(0)); if (t) goto L_002967D8; }
{ int t = RD(8) != RD(0); SET32(2, RW(9) + 1); if (t) goto L_00296804; }
SET64(2, RD(5) < RD(4));
if (RD(2) == RD(0)) { SET32(2, RW(9) + 1); goto L_00296804; }
L_002967CC:;
SET64(2, RD(10) + RD(0)); return;
L_002967D8:;
{ int t = RD(3) != RD(0);  if (t) goto L_002967E8; }
{ int t = RD(13) != RD(0);  if (t) { POLL(); goto L_002967CC; } }
L_002967E8:;
{ int t = RD(6) != RD(0); SET32(2, RW(9) + 1); if (t) goto L_00296804; }
SET32(2, RW(4) - RW(7));
SET64(2, RD(5) < RD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002967CC; } }
SET32(2, RW(9) + 1);
L_00296804:;
SET64(3, RSD(2) < RSD(11));
{ int t = RD(3) != RD(0); SET32(10, RW(10) + 1); if (t) goto L_00296818; }
SET32(2, RW(9) - RW(11));
SET32(2, RW(2) + 1);
L_00296818:;
SET64(9, RD(2) + RD(0));
SET64(2, RSD(10) < RSD(14));
if (RD(2) != RD(0)) { SET32(2, RW(9) << 4); { POLL(); goto L_00296798; } }
L_00296828:;
SET32(2, RW(0) + -1); return;
}

void JP_F_00296830(Ctx *c) { /* func_00296830 */
ENTER(0x296830);
SET32(3, RW(5) << 3);
SET32(3, RW(3) - RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(4, RW(4) + RW(3));
SET32(4, RW(4) + 4928);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00296868; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET64(2, RSD(2) < RSD(3));
SET64(2, RD(2) ^ 0x1);
L_00296868:;
 return;
}

void JP_F_00296870(Ctx *c) { /* func_00296870 */
ENTER(0x296870);
SET32(3, RW(4) + 4);
SET32(5, RW(0) + -3);
SET32(2, RW(0) + 1);
wr32(c, (RW(3) + 4), RW(5));
wr32(c, (RW(3) + 8), RW(2));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(3) + 0), RW(0)); return;
}

void JP_F_00296890(Ctx *c) { /* func_00296890 */
ENTER(0x296890);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RSD(5) <= 0; wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_002968C4; }
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(4, RD(17) + RD(0));
L_002968B0:;
SET32(17, RW(17) + 3544);
SET64(31, 0x2968bc); SET32(16, RW(16) + -1); JP_F_002968D8(c);
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_002968B0; } }
L_002968C4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002968D8(Ctx *c) { /* func_002968D8 */
ENTER(0x2968d8);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2968f4); SET32(6, RW(0) + 886); JP_F_00275270(c);
SET64(31, 0x2968fc); SET64(4, RD(16) + RD(0)); JP_F_00296948(c);
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

void JP_F_00296948(Ctx *c) { /* func_00296948 */
ENTER(0x296948);
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
SET64(31, 0x296984); wr32(c, (RW(16) + 8), RW(0)); JP_F_00289BF8(c);
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
SET64(31, 0x2969c4); wr32(c, (RW(19) + 4), RW(0)); JP_F_00297F88(c);
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

void JP_F_00296A00(Ctx *c) { /* func_00296A00 */
ENTER(0x296a00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x296a1c); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00296A40; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x151);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00296A40:;
wr32(c, (RW(16) + 13864), RW(17));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00296A58(Ctx *c) { /* func_00296A58 */
ENTER(0x296a58);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x296a74); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00296A98; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x152);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00296A98:;
SET64(3, (s32)rd32(c, (RW(16) + 13864)));
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + 3520), RW(17));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00296AB8(Ctx *c) { /* func_00296AB8 */
ENTER(0x296ab8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x296acc); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET32(6, RW(0) + 1);
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x153); if (t) goto L_00296AF8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00296AF8:;
SET64(31, 0x296b00); SET32(5, RW(0) + 47); JP_F_002977B8(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00294278(c); return; }
}

void JP_F_00296B18(Ctx *c) { /* func_00296B18 */
ENTER(0x296b18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x296b38); wr32(c, (RW(16) + 0), RW(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00296B60; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x154);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00296B60:;
SET64(4, (s32)rd32(c, (RW(17) + 13864)));
SET64(31, 0x296b6c); SET64(5, RD(16) + RD(0)); JP_F_00296B88(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00296B88(Ctx *c) { /* func_00296B88 */
ENTER(0x296b88);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(3, RD(2) ^ 0x1);
if (RD(3) != 0) SET64(2, RD(0));
wr32(c, (RW(5) + 0), RW(2)); return;
}

void JP_F_00296BA0(Ctx *c) { /* func_00296BA0 */
ENTER(0x296ba0);
SET64(3, (s32)rd32(c, (RW(4) + 13864)));
{ int t = RD(3) == RD(0);  if (t) goto L_00296BC4; }
SET64(2, (s32)rd32(c, (RW(3) + 3512)));
if (RSD(2) < 0) { wr32(c, (RW(3) + 3512), RW(5)); goto L_00296BB8; }
L_00296BB8:;
SET64(2, (s32)rd32(c, (RW(3) + 3516)));
if (RSD(2) < 0) { wr32(c, (RW(3) + 3516), RW(6)); goto L_00296BC4; }
L_00296BC4:;
 return;
}

void JP_F_00296BD0(Ctx *c) { /* func_00296BD0 */
ENTER(0x296bd0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 13864)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00296C08; }
SET64(31, 0x296bf4);  JP_F_00296C18(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00297478(c); return; }
L_00296C08:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

static void JP_B_00296C18(Ctx *c, u32 entry) { /* func_00296C18 */
ENTER(entry);
switch (entry) { case 0x296c6c: goto L_00296C6C; }
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
{ int t = RD(2) != RD(0); SET32(18, RW(16) + 3340); if (t) goto L_00296D58; }
SET64(5, RD(18) + RD(0));
SET64(31, 0x296c64); SET64(6, RD(29) + RD(0)); JP_F_00296D80(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00296D5C; }
L_00296C6C:;
SET64(4, RD(21) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x296c7c); SET32(6, RW(29) + 4); JP_F_00296E00(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00296D5C; }
SET64(31, 0x296c8c); SET64(4, RD(21) + RD(0)); JP_F_00296E80(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00296D18; }
wr32(c, (RW(20) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(19) + 0)));
if (RD(3) == RD(0)) { SET64(5, (s32)rd32(c, (RW(20) + 4))); goto L_00296D0C; }
SET64(2, (s32)rd32(c, (RW(19) + 12)));
{ int t = RSD(2) <= 0;  if (t) goto L_00296CD8; }
SET64(4, (s32)rd32(c, (RW(16) + 3524)));
{ int t = RSD(4) <= 0; SET64(6, (s32)rd32(c, (RW(19) + 52))); if (t) goto L_00296CCC; }
if (RSD(6) <= 0) { SET64(5, RD(2) + RD(0)); goto L_00296D0C; }
SET64(31, 0x296ccc); SET32(5, RW(0) + 1000); JP_F_0027B438(c);
L_00296CCC:;
SET64(5, RD(2) + RD(0)); goto L_00296D0C;
L_00296CD8:;
SET64(31, 0x296ce0); SET64(4, RD(21) + RD(0)); JP_F_0028A668(c);
SET64(2, RSD(2) < (s64)108);
if (RD(2) == RD(0)) { SET64(5, (s32)rd32(c, (RW(20) + 4))); goto L_00296D0C; }
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(3, RW(0) + 2018);
if (RD(3) == RD(0)) { rt_break(c, 0x296cf8); goto L_00296CFC; }
L_00296CFC:;
SET32(2, RW(2) << 11);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
SET64(5, RD(2) + RD(0));
L_00296D0C:;
SET64(3, (s32)rd32(c, (RW(20) + 8))); goto L_00296D40;
L_00296D18:;
SET64(2, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_00296D30; }
SET64(3, (s32)rd32(c, (RW(17) + 8)));
SET64(5, (s32)rd32(c, (RW(17) + 4))); goto L_00296D40;
L_00296D30:;
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00296D5C; }
SET64(3, (s32)rd32(c, (RW(18) + 8)));
SET64(5, (s32)rd32(c, (RW(18) + 4)));
L_00296D40:;
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 4), RW(5));
wr32(c, (RW(16) + 0), RW(2));
SET64(4, RD(21) + RD(0));
SET64(31, 0x296d58); wr32(c, (RW(16) + 8), RW(3)); JP_F_002975B0(c);
L_00296D58:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00296D5C:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}
void JP_F_00296C18(Ctx *c) { JP_B_00296C18(c, 0x296c18); }
void JP_F_00296C6C(Ctx *c) { JP_B_00296C18(c, 0x296c6c); }

void JP_F_00296D80(Ctx *c) { /* func_00296D80 */
ENTER(0x296d80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
SET32(5, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x296da8); SET64(16, RD(4) + RD(0)); JP_F_0029A128(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 6); if (t) goto L_00296DE0; }
SET64(31, 0x296dbc);  JP_F_00297980(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { wr32(c, (RW(17) + 0), RW(0)); goto L_00296DE4; }
wr32(c, (RW(17) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET64(2, RD(2) < (u64)(s64)1); goto L_00296DE8;
L_00296DE0:;
wr32(c, (RW(17) + 0), RW(0));
L_00296DE4:;
SET64(2, RD(0) + RD(0));
L_00296DE8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00296E00(Ctx *c) { /* func_00296E00 */
ENTER(0x296e00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
SET32(5, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x296e28); SET64(16, RD(4) + RD(0)); JP_F_0029A128(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 5); if (t) goto L_00296E60; }
SET64(31, 0x296e3c);  JP_F_00297980(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { wr32(c, (RW(17) + 0), RW(0)); goto L_00296E64; }
wr32(c, (RW(17) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET64(2, RD(2) < (u64)(s64)1); goto L_00296E68;
L_00296E60:;
wr32(c, (RW(17) + 0), RW(0));
L_00296E64:;
SET64(2, RD(0) + RD(0));
L_00296E68:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00296E80(Ctx *c) { /* func_00296E80 */
ENTER(0x296e80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x296e90); SET32(5, RW(0) + 1); JP_F_0029A128(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_00296EA0(Ctx *c) { /* func_00296EA0 */
ENTER(0x296ea0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x296ec0); wr32(c, (RW(16) + 0), RW(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00296EE8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x155);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00296EE8:;
SET64(4, (s32)rd32(c, (RW(17) + 13864)));
SET64(31, 0x296ef4); SET64(5, RD(16) + RD(0)); JP_F_00296F10(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00296F10(Ctx *c) { /* func_00296F10 */
ENTER(0x296f10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(5, RD(29) + RD(0));
{ int t = RD(16) == RD(0); wr32(c, (RW(17) + 0), RW(0)); if (t) goto L_00296F68; }
SET64(31, 0x296f3c);  JP_F_00296B88(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00296F6C; }
SET64(2, (s32)rd32(c, (RW(16) + 3520)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00296F64; }
SET64(2, (s32)rd32(c, (RW(16) + 3496)));
{ int t = RSD(2) <= 0; SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_00296F6C; }
SET32(2, RW(0) + 1);
L_00296F64:;
wr32(c, (RW(17) + 0), RW(2));
L_00296F68:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00296F6C:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00296F80(Ctx *c) { /* func_00296F80 */
ENTER(0x296f80);
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
SET64(31, 0x296fb4); wr32(c, (RW(17) + 0), RW(0)); JP_F_0028AB18(c);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(29) + RD(0)); if (t) goto L_00296FD8; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x296fcc); SET64(5, RD(5) | 0x156); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00297008;
L_00296FD8:;
SET64(31, 0x296fe0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00296F10(c);
SET64(5, RD(18) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(19) + RD(0));
SET64(7, RD(17) + RD(0));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00297004; }
SET64(31, 0x297000); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00297020(c);
SET64(2, RD(0) + RD(0));
L_00297004:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00297008:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00297020(Ctx *c) { /* func_00297020 */
ENTER(0x297020);
SET32(29, RW(29) + -16);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 3520)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00297050; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00297070(c); return; }
L_00297050:;
SET64(31, 0x297058); SET64(4, (s32)rd32(c, (RW(3) + 3496))); JP_F_0027B438(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00297070(Ctx *c) { /* func_00297070 */
ENTER(0x297070);
wr32(c, (RW(7) + 0), RW(0)); return;
}

void JP_F_00297078(Ctx *c) { /* func_00297078 */
ENTER(0x297078);
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
SET64(31, 0x2970b4); SET32(16, RW(2) + 13864); JP_F_0028AB18(c);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(29) + RD(0)); if (t) goto L_002970D8; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x2970cc); SET64(5, RD(5) | 0x157); JP_F_0028A8F8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00297108;
L_002970D8:;
SET64(31, 0x2970e0); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00296F10(c);
SET64(5, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00297104; }
SET64(31, 0x297100); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_00297120(c);
SET64(2, RD(0) + RD(0));
L_00297104:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00297108:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00297120(Ctx *c) { /* func_00297120 */
ENTER(0x297120);
SET32(29, RW(29) + -32);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(8, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 3520)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00297160; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_002971A8(c); return; }
L_00297160:;
SET64(2, (s32)rd32(c, (RW(3) + 3496)));
{ int t = RSD(2) > 0; SET64(6, RD(2) + RD(0)); if (t) goto L_00297178; }
wr32(c, (RW(16) + 0), RW(0)); goto L_00297188;
L_00297178:;
SET64(4, RD(8) + RD(0));
SET64(31, 0x297184); SET32(5, RW(0) + 1000); JP_F_0027B438(c);
wr32(c, (RW(16) + 0), RW(2));
L_00297188:;
SET32(2, RW(0) + 1000);
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(17) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002971A8(Ctx *c) { /* func_002971A8 */
ENTER(0x2971a8);
SET32(2, RW(0) + 1000);
wr32(c, (RW(6) + 0), RW(0));
wr32(c, (RW(7) + 0), RW(2)); return;
}

void JP_F_002971B8(Ctx *c) { /* func_002971B8 */
ENTER(0x2971b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2971d8); SET64(18, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00297200; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x158);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00297200:;
SET64(17, (s32)rd32(c, (RW(16) + 13864)));
if (RD(17) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029729C; }
SET64(31, 0x297214); SET64(4, RD(16) + RD(0)); JP_F_00295C30(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 47);
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_00297298; }
SET64(31, 0x29722c);  JP_F_002977B8(c);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 3512)));
SET32(5, RW(0) + 5);
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_00297248; }
SET64(31, 0x297248);  JP_F_002977B8(c);
L_00297248:;
SET64(2, (s32)rd32(c, (RW(17) + 3516)));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00297260; }
SET32(5, RW(0) + 6);
SET64(31, 0x297260); SET64(6, RD(0) + RD(0)); JP_F_002977B8(c);
L_00297260:;
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
SET32(29, RW(29) + 32); { JP_F_00299FE0(c); return; }
L_00297298:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029729C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002972B0(Ctx *c) { /* func_002972B0 */
ENTER(0x2972b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2972cc); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002972F0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x159);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_002972F0:;
SET64(3, (s32)rd32(c, (RW(16) + 13864)));
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00297310; }
wr32(c, (RW(3) + 3524), RW(17));
SET64(31, 0x297308); SET64(4, RD(16) + RD(0)); JP_F_002975B0(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00297310:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00297320(Ctx *c) { /* func_00297320 */
ENTER(0x297320);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x297344); SET64(18, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x15a); if (t) goto L_00297370; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00297370:;
SET64(3, (s32)rd32(c, (RW(16) + 13864)));
{ int t = RD(3) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0029738C; }
wr32(c, (RW(3) + 3532), RW(17));
SET64(31, 0x297388); wr32(c, (RW(3) + 3528), RW(18)); JP_F_002975B0(c);
SET64(2, RD(0) + RD(0));
L_0029738C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002973A8(Ctx *c) { /* func_002973A8 */
ENTER(0x2973a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2973c4); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002973E8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x15b);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_002973E8:;
SET64(3, (s32)rd32(c, (RW(16) + 13864)));
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00297408; }
wr32(c, (RW(3) + 3536), RW(17));
SET64(31, 0x297400); SET64(4, RD(16) + RD(0)); JP_F_002975B0(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00297408:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00297418(Ctx *c) { /* func_00297418 */
ENTER(0x297418);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x297434); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00297458; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x15c);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00297458:;
SET64(4, (s32)rd32(c, (RW(16) + 13864)));
if (RD(4) != RD(0)) { wr32(c, (RW(4) + 3540), RW(17)); goto L_00297464; }
L_00297464:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00297478(Ctx *c) { /* func_00297478 */
ENTER(0x297478);
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
SET64(31, 0x2974a8); SET64(16, (s32)rd32(c, (RW(18) + 13864))); JP_F_00288A88(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0029754C; }
SET64(2, (s32)rd32(c, (RW(16) + 3500)));
{ int t = RSD(2) > 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002974F8; }
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(0) + -3);
{ int t = RD(3) == RD(2); SET64(17, RD(0) + RD(0)); if (t) goto L_002974D0; }
SET64(17, (s32)rd32(c, (RW(16) + 3540)));
L_002974D0:;
if (RSD(17) < 0) { SET64(2, (s32)rd32(c, (RW(16) + 3504))); goto L_002974FC; }
SET64(31, 0x2974e0); SET64(4, RD(18) + RD(0)); JP_F_00297568(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + -1);
{ int t = RD(3) == RD(2); SET32(2, RW(17) + RW(3)); if (t) goto L_002974F8; }
SET32(19, RW(0) + 1);
wr32(c, (RW(16) + 3500), RW(2));
L_002974F8:;
SET64(2, (s32)rd32(c, (RW(16) + 3504)));
L_002974FC:;
{ int t = RSD(2) > 0;  if (t) goto L_00297520; }
SET64(2, (s32)rd32(c, (RW(20) + 36)));
{ int t = RSD(2) <= 0;  if (t) goto L_00297520; }
wr32(c, (RW(16) + 3504), RW(2));
SET32(19, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(20) + 40)));
wr32(c, (RW(16) + 3508), RW(2));
L_00297520:;
{ int t = RD(19) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_00297548; }
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_002975B0(c); return; }
L_00297548:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0029754C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00297568(Ctx *c) { /* func_00297568 */
ENTER(0x297568);
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

void JP_F_002975B0(Ctx *c) { /* func_002975B0 */
ENTER(0x2975b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(16, (s32)rd32(c, (RW(4) + 13864)));
SET64(2, (s32)rd32(c, (RW(16) + 3536)));
if (RSD(2) > 0) { wr32(c, (RW(16) + 3496), RW(2)); goto L_00297624; }
SET64(4, (s32)rd32(c, (RW(16) + 3524)));
SET64(6, (s32)rd32(c, (RW(16) + 3528)));
{ int t = RSD(4) <= 0; SET64(5, (s32)rd32(c, (RW(16) + 3532))); if (t) goto L_002975E4; }
{ int t = RSD(6) > 0;  if (t) goto L_00297618; }
L_002975E4:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RSD(2) > 0) { wr32(c, (RW(16) + 3496), RW(2)); goto L_00297624; }
if (RSD(4) <= 0) { SET64(4, (s32)rd32(c, (RW(16) + 3500))); goto L_002975F8; }
L_002975F8:;
{ int t = RSD(6) > 0;  if (t) goto L_00297608; }
SET64(6, (s32)rd32(c, (RW(16) + 3504)));
SET64(5, (s32)rd32(c, (RW(16) + 3508)));
L_00297608:;
if (RSD(4) <= 0) { wr32(c, (RW(16) + 3496), RW(2)); goto L_00297624; }
if (RSD(6) <= 0) { wr32(c, (RW(16) + 3496), RW(2)); goto L_00297624; }
L_00297618:;
SET64(31, 0x297620);  JP_F_0027B438(c);
wr32(c, (RW(16) + 3496), RW(2));
L_00297624:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00297638(Ctx *c) { /* func_00297638 */
ENTER(0x297638);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002953F8(c); return; }
}

void JP_F_00297650(Ctx *c) { /* func_00297650 */
ENTER(0x297650);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x297664); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x111); if (t) goto L_0029767C; }
SET64(31, 0x29767c);  JP_F_0028A8F8(c);
L_0029767C:;
SET64(2, (s32)rd32(c, (RW(16) + 72)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00297690(Ctx *c) { /* func_00297690 */
ENTER(0x297690);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_002976D8; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2976c0); SET64(5, RD(18) + RD(0)); JP_F_00297748(c);
SET32(2, RW(17) << 2);
SET64(1, (s64)(s32)0x410000);
SET32(1, RW(1) + RW(2));
wr32(c, (RW(1) + 24888), RW(18));
SET64(16, rd64(c, (RW(29) + 0))); goto L_0029772C;
L_002976D8:;
SET64(31, 0x2976e0);  JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00297708; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x112);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00297708:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x297718); SET64(6, RD(18) + RD(0)); JP_F_002977B8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x297728); SET64(6, RD(18) + RD(0)); JP_F_00297808(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_0029772C:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00297748(Ctx *c) { /* func_00297748 */
ENTER(0x297748);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 32), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 7);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(2) + 25404);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
L_00297778:;
SET32(17, RW(17) + 4);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00297790; }
SET64(5, RD(19) + RD(0));
SET64(31, 0x297790); SET64(6, RD(18) + RD(0)); JP_F_002977B8(c);
L_00297790:;
SET32(16, RW(16) + -1);
if (RSD(16) >= 0) { SET64(2, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_00297778; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002977B8(Ctx *c) { /* func_002977B8 */
ENTER(0x2977b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2977dc); SET64(18, RD(4) + RD(0)); JP_F_00297858(c);
{ int t = RD(2) == RD(0); SET32(16, RW(16) << 2); if (t) goto L_002977EC; }
SET32(2, RW(16) + RW(18));
wr32(c, (RW(2) + 2564), RW(17));
L_002977EC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

static void JP_B_00297808(Ctx *c, u32 entry) { /* func_00297808 */
ENTER(entry);
switch (entry) { case 0x297838: goto L_00297838; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29782c); SET64(18, RD(4) + RD(0)); JP_F_00297858(c);
{ int t = RD(2) == RD(0); SET32(16, RW(16) << 2); if (t) goto L_0029783C; }
SET32(2, RW(16) + RW(18));
L_00297838:;
wr32(c, (RW(2) + 2964), RW(17));
L_0029783C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}
void JP_F_00297808(Ctx *c) { JP_B_00297808(c, 0x297808); }
void JP_F_00297838(Ctx *c) { JP_B_00297808(c, 0x297838); }

void JP_F_00297858(Ctx *c) { /* func_00297858 */
ENTER(0x297858);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
{ int t = RD(16) != RD(2); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_0029789C; }
SET32(2, RW(0) + 1);
if (RD(17) != RD(2)) { SET32(2, RW(0) + 5); goto L_002978A0; }
SET64(31, 0x297894); SET32(5, RW(0) + 3); JP_F_0029A128(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002978CC; }
L_0029789C:;
SET32(2, RW(0) + 5);
L_002978A0:;
{ int t = RD(16) != RD(2); SET32(2, RW(0) + 1); if (t) goto L_002978C8; }
if (RD(17) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002978CC; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x2978bc); SET32(5, RW(0) + 2); JP_F_0029A128(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_002978CC; }
SET32(2, RW(0) + 1);
L_002978C8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002978CC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002978E0(Ctx *c) { /* func_002978E0 */
ENTER(0x2978e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
{ int t = RD(16) != RD(0); SET32(2, RW(17) << 2); if (t) goto L_00297920; }
SET64(1, (s64)(s32)0x410000);
SET32(1, RW(1) + RW(2));
SET64(2, (s32)rd32(c, (RW(1) + 24888)));
wr32(c, (RW(18) + 0), RW(2)); goto L_00297960;
L_00297920:;
SET64(31, 0x297928);  JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00297950; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x113);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00297950:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x29795c); SET64(5, RD(17) + RD(0)); JP_F_00297980(c);
wr32(c, (RW(18) + 0), RW(2));
L_00297960:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00297980(Ctx *c) { /* func_00297980 */
ENTER(0x297980);
SET32(5, RW(5) << 2);
SET32(5, RW(5) + RW(4));
SET64(2, (s32)rd32(c, (RW(5) + 2564))); return;
}

void JP_F_00297990(Ctx *c) { /* func_00297990 */
ENTER(0x297990);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2979ac); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002979D0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x114);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_002979D0:;
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

void JP_F_00297A68(Ctx *c) { /* func_00297A68 */
ENTER(0x297a68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x297a84); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00297AA8; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(5, RD(5) | 0x119);
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00297AA8:;
SET64(5, RD(17) + RD(0));
SET32(2, RW(16) + 2544);
SET32(4, RW(16) + 2384);
L_00297AB4:;
SET64(3, rd64(c, (RW(4) + 0)));
SET64(6, rd64(c, (RW(4) + 8)));
SET64(7, rd64(c, (RW(4) + 16)));
SET64(8, rd64(c, (RW(4) + 24)));
wr64(c, (RW(5) + 0), RD(3));
wr64(c, (RW(5) + 8), RD(6));
wr64(c, (RW(5) + 16), RD(7));
wr64(c, (RW(5) + 24), RD(8));
SET32(4, RW(4) + 32);
{ int t = RD(4) != RD(2); SET32(5, RW(5) + 32); if (t) { POLL(); goto L_00297AB4; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00297B00(Ctx *c) { /* func_00297B00 */
ENTER(0x297b00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x297b1c); SET64(17, RD(4) + RD(0)); JP_F_0028AB18(c);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00297B40; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(5, RD(5) | 0x11a);
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00297B40:;
SET32(3, RW(17) + 14072);
SET64(2, RD(16) + RD(0));
SET32(4, RW(17) + 13880);
L_00297B4C:;
SET64(5, rd64(c, (RW(4) + 0)));
SET64(6, rd64(c, (RW(4) + 8)));
SET64(7, rd64(c, (RW(4) + 16)));
SET64(8, rd64(c, (RW(4) + 24)));
wr64(c, (RW(2) + 0), RD(5));
wr64(c, (RW(2) + 8), RD(6));
wr64(c, (RW(2) + 16), RD(7));
wr64(c, (RW(2) + 24), RD(8));
SET32(4, RW(4) + 32);
{ int t = RD(4) != RD(3); SET32(2, RW(2) + 32); if (t) { POLL(); goto L_00297B4C; } }
SET32(12, RW(16) + 8);
SET32(10, RW(0) + 1);
SET64(11, RD(12) + RD(0));
SET32(9, RW(16) + 48);
L_00297B90:;
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
{ int t = RD(8) != RD(0); wr64(c, (RW(16) + 16), RD(2)); if (t) { POLL(); goto L_00297B90; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00297C08(Ctx *c) { /* func_00297C08 */
ENTER(0x297c08);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x297c2c); SET64(18, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x117); if (t) goto L_00297C60; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00297C60:;
SET64(31, 0x297c68); SET64(5, RD(18) + RD(0)); JP_F_00297C88(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00297C88(Ctx *c) { /* func_00297C88 */
ENTER(0x297c88);
SET32(2, RW(5) << 4);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 7984)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(2) + 0))); goto L_00297CB0; }
wr32(c, (RW(6) + 0), RW(0)); return;
L_00297CB0:;
wr32(c, (RW(6) + 0), RW(2)); return;
}

void JP_F_00297CB8(Ctx *c) { /* func_00297CB8 */
ENTER(0x297cb8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x297cdc); SET64(18, RD(6) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x11c); if (t) goto L_00297D08; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00297D08:;
SET64(2, (s32)rd32(c, (RW(16) + 120)));
{ int t = RD(2) == RD(0); SET32(2, RW(16) + 268); if (t) goto L_00297D28; }
SET64(3, (s32)rd32(c, (RW(16) + 264)));
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(18) + 0), RW(3)); goto L_00297D30;
L_00297D28:;
wr32(c, (RW(17) + 0), RW(0));
wr32(c, (RW(18) + 0), RW(0));
L_00297D30:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00297D50(Ctx *c) { /* func_00297D50 */
ENTER(0x297d50);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 8), RW(5));
wr32(c, (RW(4) + 4), RW(0)); return;
}

void JP_F_00297D60(Ctx *c) { /* func_00297D60 */
ENTER(0x297d60);
 return;
}

void JP_F_00297D68(Ctx *c) { /* func_00297D68 */
ENTER(0x297d68);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x2a0000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET64(6, RD(0) + RD(0));
SET32(5, RW(2) + -30760);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x297d90); SET64(16, RD(4) + RD(0)); JP_F_00298DA0(c);
SET64(5, (s64)(s32)0x2a0000);
SET32(6, RW(0) + 1);
SET32(5, RW(5) + -30688);
SET64(31, 0x297da4); SET64(4, RD(16) + RD(0)); JP_F_00298DA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x297db4); SET32(6, RW(0) + 2); JP_F_00298DA0(c);
SET64(5, (s64)(s32)0x2a0000);
SET32(5, RW(5) + -30592);
SET32(6, RW(0) + 3);
SET64(31, 0x297dc8); SET64(4, RD(16) + RD(0)); JP_F_00298DA0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x297dd8); SET32(6, RW(0) + 4); JP_F_00298DA0(c);
SET64(5, (s64)(s32)0x2a0000);
SET32(6, RW(0) + 5);
SET32(5, RW(5) + -30560);
SET64(31, 0x297dec); SET64(4, RD(16) + RD(0)); JP_F_00298DA0(c);
wr32(c, (RW(17) + 24), RW(0));
SET64(31, 0x297df8); SET32(4, RW(17) + 28); JP_F_00297FD0(c);
SET32(4, RW(17) + 192);
SET64(31, 0x297e04); SET64(5, RD(0) + RD(0)); JP_F_00297F88(c);
SET32(4, RW(17) + 60);
SET64(5, (s64)(s32)0x7fff0000);
SET64(31, 0x297e14); SET64(5, RD(5) | 0xffff); JP_F_00297F88(c);
SET32(4, RW(17) + 104);
SET64(31, 0x297e20); SET32(5, RW(0) + -1); JP_F_00297F88(c);
SET32(4, RW(17) + 148);
SET64(31, 0x297e2c); SET32(5, RW(0) + -1); JP_F_00297F88(c);
SET32(4, RW(17) + 236);
SET64(31, 0x297e38); SET32(5, RW(0) + -1); JP_F_00297F88(c);
SET32(4, RW(17) + 280);
SET64(5, (s64)(s32)0x7fff0000);
SET64(31, 0x297e48); SET64(5, RD(5) | 0xffff); JP_F_00297F88(c);
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
L_00297E78:;
SET32(3, RW(3) + -1);
wr32(c, (RW(2) + 0), RW(0));
{ int t = RSD(3) >= 0; SET32(2, RW(2) + -4); if (t) { POLL(); goto L_00297E78; } }
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 496), RW(0));
wr32(c, (RW(17) + 500), RW(0));
SET32(3, RW(0) + 31);
wr32(c, (RW(17) + 504), RW(0));
wr32(c, (RW(17) + 492), RW(2));
SET32(2, RW(4) + 620);
L_00297EB0:;
SET32(3, RW(3) + -1);
wr32(c, (RW(2) + 0), RW(0));
{ int t = RSD(3) >= 0; SET32(2, RW(2) + -4); if (t) { POLL(); goto L_00297EB0; } }
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

void JP_F_00297F88(Ctx *c) { /* func_00297F88 */
ENTER(0x297f88);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(4, RW(16) + 4);
SET64(31, 0x297fac); wr32(c, (RW(16) + 0), RW(0)); JP_F_00297FD0(c);
wr32(c, (RW(16) + 36), RW(17));
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 16)));
wr32(c, (RW(16) + 40), RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00297FD0(Ctx *c) { /* func_00297FD0 */
ENTER(0x297fd0);
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

void JP_F_00297FF8(Ctx *c) { /* func_00297FF8 */
ENTER(0x297ff8);
SET64(8, RD(4) + RD(0));
SET32(2, RW(0) + -5);
SET64(6, (s32)rd32(c, (RW(8) + 660)));
{ int t = RD(6) != RD(2); SET64(10, RD(5) + RD(0)); if (t) goto L_00298018; }
wr32(c, (RW(8) + 660), RW(10)); return;
L_00298018:;
SET32(7, RW(10) - RW(6));
{ int t = RD(7) == RD(0); SET64(5, (s64)(s32)0x7fff0000); if (t) goto L_0029808C; }
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
{ int t = RD(9) == RD(5); wr32(c, (RW(8) + 672), RW(2)); if (t) goto L_00298088; }
SET64(2, RSD(7) < RSD(9));
if (RD(2) == RD(0)) { wr32(c, (RW(8) + 664), RW(7)); goto L_0029808C; }
SET32(2, RW(9) - RW(7));
SET32(4, RW(2) + 7);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(4));
SET32(2, RSW(2) >> 3);
{ int t = RD(2) == RD(0); SET32(2, RW(9) - RW(2)); if (t) goto L_00298088; }
wr32(c, (RW(8) + 664), RW(2)); return;
L_00298088:;
wr32(c, (RW(8) + 664), RW(7));
L_0029808C:;
 return;
}

void JP_F_00298098(Ctx *c) { /* func_00298098 */
ENTER(0x298098);
SET64(6, RD(5) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 660)));
SET64(2, (s32)rd32(c, (RW(4) + 664)));
SET64(3, (s32)rd32(c, (RW(4) + 668)));
SET32(2, RW(5) + RW(2));
SET64(4, RSD(6) < RSD(2));
SET32(5, RW(5) + RW(3));
{ int t = RD(4) != RD(0); SET64(3, RD(2) + RD(0)); if (t) goto L_002980CC; }
SET64(3, (s64)(s32)0x7fff0000);
SET64(2, RSD(6) < RSD(5));
SET64(3, RD(3) | 0xffff);
if (RD(2) != 0) SET64(3, RD(5));
L_002980CC:;
SET64(2, RD(3) + RD(0)); return;
}

void JP_F_002980D8(Ctx *c) { /* func_002980D8 */
ENTER(0x2980d8);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(16));
SET32(3, RW(3) + 25320);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(0) + 7);
wr64(c, (RW(29) + 16), RD(31));
SET32(16, RW(3) + 84);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 0)));
L_00298108:;
{ int t = RD(4) == RD(0); SET32(16, RW(16) + 4); if (t) goto L_00298124; }
SET64(2, (s32)rd32(c, (RW(4) + 76)));
if (RD(2) == RD(0)) { SET32(17, RW(17) + -1); goto L_00298128; }
SET64(31, 0x298124);  JP_F_00298148(c);
L_00298124:;
SET32(17, RW(17) + -1);
L_00298128:;
if (RSD(17) >= 0) { SET64(4, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00298108; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00298148(Ctx *c) { /* func_00298148 */
ENTER(0x298148);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29815c); SET64(16, RD(4) + RD(0)); JP_F_00298198(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x298168); SET32(5, RW(0) + 71); JP_F_00297980(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00298188; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_00298D20(c); return; }
L_00298188:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00298198(Ctx *c) { /* func_00298198 */
ENTER(0x298198);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2981b4); SET32(17, RW(16) + 3368); JP_F_00298208(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002981D0; }
SET64(2, (s32)rd32(c, (RW(17) + 680)));
SET64(3, (s32)rd32(c, (RW(17) + 684)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(17) + 680), RW(2));
L_002981D0:;
SET64(31, 0x2981d8);  JP_F_00298240(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_002981F4; }
SET64(2, (s32)rd32(c, (RW(17) + 716)));
SET64(3, (s32)rd32(c, (RW(17) + 684)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(17) + 716), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_002981F4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00298208(Ctx *c) { /* func_00298208 */
ENTER(0x298208);
SET64(5, RD(4) + RD(0));
SET32(4, RW(0) + 4);
SET64(3, (s32)rd32(c, (RW(5) + 72)));
SET64(2, RD(0) + RD(0));
{ int t = RD(3) != RD(4); SET32(6, RW(5) + 2384); if (t) goto L_00298234; }
SET64(3, (s32)rd32(c, (RW(5) + 80)));
{ int t = RD(3) != RD(0);  if (t) goto L_00298234; }
SET64(2, (s32)rd32(c, (RW(6) + 28)));
SET64(2, RD(2) < (u64)(s64)1);
L_00298234:;
 return;
}

void JP_F_00298240(Ctx *c) { /* func_00298240 */
ENTER(0x298240);
SET64(3, (s32)rd32(c, (RW(5) + 716)));
SET32(6, RW(0) + -1);
{ int t = RD(3) == RD(6); SET64(2, RD(0) + RD(0)); if (t) goto L_0029825C; }
SET64(2, (s32)rd32(c, (RW(4) + 76)));
SET64(2, RD(2) ^ 0x4);
SET64(2, RD(2) < (u64)(s64)1);
L_0029825C:;
 return;
}

void JP_F_00298268(Ctx *c) { /* func_00298268 */
ENTER(0x298268);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x298280); SET32(5, RW(0) + 71); JP_F_00297980(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_00298298; }
SET64(2, (s32)rd32(c, (RW(16) + 680)));
wr32(c, (RW(16) + 720), RW(2)); goto L_002982A0;
L_00298298:;
SET64(2, (s32)rd32(c, (RW(16) + 732)));
wr32(c, (RW(16) + 720), RW(2));
L_002982A0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002982B0(Ctx *c) { /* func_002982B0 */
ENTER(0x2982b0);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
SET32(5, RW(0) + 71);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET32(19, RW(2) + 25320);
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2982e4); SET64(17, RD(6) + RD(0)); JP_F_00297980(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_00298310; }
SET64(2, (s32)rd32(c, (RW(16) + 720)));
SET64(3, (s32)rd32(c, (RW(16) + 680)));
SET32(3, RW(3) - RW(2));
wr32(c, (RW(17) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(19) + 8)));
wr32(c, (RW(18) + 0), RW(2)); goto L_00298328;
L_00298310:;
SET64(2, (s32)rd32(c, (RW(16) + 732)));
SET64(3, (s32)rd32(c, (RW(16) + 720)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(17) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 736)));
wr32(c, (RW(18) + 0), RW(3));
L_00298328:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00298348(Ctx *c) { /* func_00298348 */
ENTER(0x298348);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x29835c); SET64(16, RD(4) + RD(0)); JP_F_00298388(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00298374; }
SET64(31, 0x298370); SET64(5, RD(5) | 0x222); JP_F_0028A8F8(c);
SET32(2, RW(0) + 1);
L_00298374:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00298388(Ctx *c) { /* func_00298388 */
ENTER(0x298388);
SET32(29, RW(29) + -48);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2983a4); SET64(16, RD(4) + RD(0)); JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 51); if (t) goto L_002983F4; }
SET64(31, 0x2983b8);  JP_F_00297980(c);
SET64(4, RD(16) + RD(0));
SET64(17, RD(2) + RD(0));
SET32(5, RW(4) + 3368);
SET64(6, RD(29) + RD(0));
{ int t = RD(17) == RD(0); SET32(7, RW(29) + 4); if (t) goto L_002983F4; }
SET64(31, 0x2983d8);  JP_F_002982B0(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
if (RD(3) == RD(0)) { rt_break(c, 0x2983e4); goto L_002983E8; }
L_002983E8:;
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
SET64(2, RSD(17) < RSD(2));
L_002983F4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00298408(Ctx *c) { /* func_00298408 */
ENTER(0x298408);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 8), RD(31));
SET64(16, rd64(c, (RW(4) + 344)));
{ int t = RSD(16) < 0; SET64(4, RD(16) + RD(0)); if (t) goto L_00298458; }
SET64(31, 0x29842c);  JP_F_0011F910(c);
SET64(5, (s64)(s32)0x10000);
SET64(5, RD(5) | 0x5f90);
SET64(31, 0x29843c); SET64(4, RD(2) + RD(0)); JP_F_0011F988(c);
SET64(3, (s64)(s32)0x410000);
SET64(4, RD(2) << 32);
SET64(4, RSD(4) >> 32);
SET64(5, (s64)(s32)0x410000);
wr64(c, (RW(3) + 25480), RD(16));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(5) + 25488), RW(4));
L_00298458:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00298468(Ctx *c) { /* func_00298468 */
ENTER(0x298468);
SET32(29, RW(29) + -16);
SET32(3, RW(4) + 280);
wr64(c, (RW(29) + 0), RD(16));
SET32(4, RW(4) + 236);
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(2) == RD(0); wr32(c, (RW(6) + 0), RW(2)); if (t) goto L_00298498; }
SET64(6, (s32)rd32(c, (RW(3) + 40)));
SET64(16, (s32)rd32(c, (RW(3) + 36))); goto L_002984B8;
L_00298498:;
SET64(2, (s32)rd32(c, (RW(4) + 36)));
{ int t = RSD(2) < 0; SET64(16, RD(2) + RD(0)); if (t) goto L_002984B0; }
SET64(6, (s32)rd32(c, (RW(4) + 40))); goto L_002984B8;
L_002984B0:;
SET32(2, RW(0) + -1); goto L_002984D0;
L_002984B8:;
SET64(31, 0x2984c0); SET64(4, RD(16) + RD(0)); JP_F_0027B438(c);
SET64(3, (s64)(s32)0x410000);
SET64(4, (s64)(s32)0x410000);
wr32(c, (RW(3) + 25492), RW(16));
wr32(c, (RW(4) + 25496), RW(2));
L_002984D0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002984E0(Ctx *c) { /* func_002984E0 */
ENTER(0x2984e0);
wr32(c, (RW(4) + 328), RW(6));
wr32(c, (RW(4) + 324), RW(5)); return;
}

void JP_F_002984F0(Ctx *c) { /* func_002984F0 */
ENTER(0x2984f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x298514); SET64(18, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x121); if (t) goto L_00298548; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00298548:;
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00298568(c); return; }
}

void JP_F_00298568(Ctx *c) { /* func_00298568 */
ENTER(0x298568);
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
SET64(31, 0x29859c); SET32(19, RW(2) + 3368); JP_F_00298690(c);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3); SET64(20, RD(2) + RD(0)); if (t) goto L_002985F4; }
SET64(2, (s32)rd32(c, (RW(19) + 328)));
if (RD(5) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_002985D0; }
SET64(3, (s32)rd32(c, (RW(19) + 324)));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(18) + 0), RW(2)); goto L_002985F0;
L_002985D0:;
if (RD(2) == RD(0)) { SET64(2, RD(20) + RD(0)); goto L_002985F4; }
SET64(6, (s32)rd32(c, (RW(17) + 40)));
SET64(31, 0x2985e4); SET64(4, (s32)rd32(c, (RW(17) + 36))); JP_F_0027B438(c);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET32(3, RW(3) + RW(2));
wr32(c, (RW(18) + 0), RW(3));
L_002985F0:;
SET64(2, RD(20) + RD(0));
L_002985F4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00298618(Ctx *c) { /* func_00298618 */
ENTER(0x298618);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29863c); SET64(18, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x127); if (t) goto L_00298670; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00298670:;
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00298690(c); return; }
}

void JP_F_00298690(Ctx *c) { /* func_00298690 */
ENTER(0x298690);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002986A8(c); return; }
}

void JP_F_002986A8(Ctx *c) { /* func_002986A8 */
ENTER(0x2986a8);
SET32(4, RW(4) + 3368);
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 652)));
wr32(c, (RW(5) + 0), RW(3));
SET64(5, (s32)rd32(c, (RW(4) + 656)));
wr32(c, (RW(6) + 0), RW(5)); return;
}

void JP_F_002986C8(Ctx *c) { /* func_002986C8 */
ENTER(0x2986c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2986ec); SET64(18, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x128); if (t) goto L_00298720; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00298720:;
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00298740(c); return; }
}

void JP_F_00298740(Ctx *c) { /* func_00298740 */
ENTER(0x298740);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x29876c); SET64(19, RD(6) + RD(0)); JP_F_0028ABB0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x298778); SET32(5, RW(0) + 15); JP_F_00297980(c);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) << 2);
SET32(16, RW(17) + 3368);
SET32(16, RW(16) + RW(2));
SET64(5, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(0); SET64(6, RD(19) + RD(0)); if (t) goto L_002987A0; }
SET64(2, (s64)(s32)0x2a0000);
SET32(2, RW(2) + -30760);
L_002987A0:;
{ u32 t = RW(2); SET64(31, 0x2987a8);  rt_call(c, t); }
SET64(4, RD(29) + RD(0));
SET64(31, 0x2987b4); SET64(16, RD(2) + RD(0)); JP_F_0028ABC8(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void JP_F_002987D8(Ctx *c) { /* func_002987D8 */
ENTER(0x2987d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2987f4); SET64(17, RD(6) + RD(0)); JP_F_00298998(c);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 1); if (t) goto L_0029880C; }
SET32(2, RW(0) + -2);
wr32(c, (RW(16) + 0), RW(2));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(17) + 0), RW(3));
L_0029880C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00298820(Ctx *c) { /* func_00298820 */
ENTER(0x298820);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x298844); SET64(18, RD(6) + RD(0)); JP_F_00298998(c);
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 3368); if (t) goto L_00298864; }
SET64(3, (s32)rd32(c, (RW(16) + 680)));
SET64(4, (s64)(s32)0x410000);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(17) + 0), RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 25328)));
wr32(c, (RW(18) + 0), RW(3));
L_00298864:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00298880(Ctx *c) { /* func_00298880 */
ENTER(0x298880);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x298890);  JP_F_00298998(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void JP_F_002988A0(Ctx *c) { /* func_002988A0 */
ENTER(0x2988a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x2988cc); SET64(20, RD(6) + RD(0)); JP_F_00298998(c);
{ int t = RD(2) == RD(0); SET32(16, RW(17) + 3368); if (t) goto L_00298978; }
SET64(2, (s32)rd32(c, (RW(16) + 724)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 744))); goto L_002988F8; }
SET32(2, RW(0) + -2);
SET32(3, RW(0) + 1);
wr32(c, (RW(19) + 0), RW(2));
SET64(2, RD(0) + RD(0)); goto L_00298974;
L_002988F8:;
SET64(5, RD(29) + RD(0));
{ u32 t = RW(2); SET64(31, 0x298904); SET32(6, RW(29) + 4); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x298910); SET64(18, RD(2) + RD(0)); JP_F_00298208(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_00298958; }
SET64(3, (s32)rd32(c, (RW(16) + 728)));
SET32(2, RW(0) + -5);
{ int t = RD(3) == RD(2); SET64(3, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_0029895C; }
SET64(2, (s32)rd32(c, (RW(16) + 728)));
SET32(3, RW(4) - RW(2));
{ int t = RSD(3) >= 0;  if (t) goto L_00298944; }
SET64(2, (s32)rd32(c, (RW(16) + 740)));
SET32(2, RW(3) + RW(2));
SET32(3, RW(2) + 1);
L_00298944:;
SET64(2, (s32)rd32(c, (RW(16) + 732)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(16) + 732), RW(2));
SET64(3, (s32)rd32(c, (RW(29) + 4))); goto L_0029895C;
L_00298958:;
SET64(3, (s32)rd32(c, (RW(29) + 4)));
L_0029895C:;
SET64(2, RD(18) + RD(0));
wr32(c, (RW(16) + 728), RW(4));
wr32(c, (RW(16) + 736), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 732)));
wr32(c, (RW(19) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(16) + 736)));
L_00298974:;
wr32(c, (RW(20) + 0), RW(3));
L_00298978:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void JP_F_00298998(Ctx *c) { /* func_00298998 */
ENTER(0x298998);
SET64(3, (s32)rd32(c, (RW(4) + 72)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002989E0; }
SET32(2, RW(0) + -4);
{ int t = RD(3) == RD(2);  if (t) goto L_002989E0; }
SET32(2, RW(0) + 6);
{ int t = RD(3) == RD(2);  if (t) goto L_002989E0; }
SET32(2, RW(0) + -6);
{ int t = RD(3) == RD(2); SET32(3, RW(0) + -1); if (t) goto L_002989E0; }
SET32(4, RW(0) + 1);
wr32(c, (RW(5) + 0), RW(3));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(6) + 0), RW(4)); return;
L_002989E0:;
SET32(2, RW(0) + 1); return;
}

void JP_F_002989E8(Ctx *c) { /* func_002989E8 */
ENTER(0x2989e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2989fc); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET32(6, RW(16) + 3368);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x122); if (t) goto L_00298A20; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00298A20:;
SET64(3, (s32)rd32(c, (RW(6) + 676)));
SET32(4, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 8)));
SET32(3, RW(3) + 1);
wr32(c, (RW(6) + 676), RW(3));
wr32(c, (RW(16) + 68), RW(4));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00298A48(Ctx *c) { /* func_00298A48 */
ENTER(0x298a48);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x298a64); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00298A88; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x124);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00298A88:;
wr32(c, (RW(16) + 3392), RW(17));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00298AA0(Ctx *c) { /* func_00298AA0 */
ENTER(0x298aa0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_0026EE58(c); return; }
}

void JP_F_00298AB8(Ctx *c) { /* func_00298AB8 */
ENTER(0x298ab8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x298ad4); SET64(17, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET32(6, RW(0) + 4);
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x123); if (t) goto L_00298B00; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00298B00:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x298b0c); SET64(5, RD(17) + RD(0)); JP_F_00298DA0(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 15);
{ int t = RD(17) == RD(0); SET32(6, RW(0) + 4); if (t) goto L_00298B24; }
SET64(31, 0x298b24);  JP_F_002977B8(c);
L_00298B24:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00298B40(Ctx *c) { /* func_00298B40 */
ENTER(0x298b40);
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
SET64(31, 0x298b70); SET64(20, RD(6) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00298BA0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x129);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_0028A8F8(c); return; }
L_00298BA0:;
{ int t = RD(18) == RD(0); SET32(16, RW(17) + 3368); if (t) goto L_00298BE0; }
wr32(c, (RW(16) + 744), RW(19));
SET32(5, RW(0) + 15);
wr32(c, (RW(16) + 724), RW(18));
SET32(6, RW(0) + 5);
wr32(c, (RW(16) + 740), RW(20));
SET64(31, 0x298bc4); SET64(4, RD(17) + RD(0)); JP_F_002977B8(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 71);
SET64(31, 0x298bd4); SET64(6, RD(0) + RD(0)); JP_F_002977B8(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_00298C10;
L_00298BE0:;
SET32(5, RW(0) + 71);
SET32(6, RW(0) + 1);
SET64(31, 0x298bf0); SET64(4, RD(17) + RD(0)); JP_F_002977B8(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 15);
SET64(31, 0x298c00); SET32(6, RW(0) + 1); JP_F_002977B8(c);
wr32(c, (RW(16) + 744), RW(19));
wr32(c, (RW(16) + 740), RW(20));
wr32(c, (RW(16) + 724), RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00298C10:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00298C30(Ctx *c) { /* func_00298C30 */
ENTER(0x298c30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
{ int t = RD(4) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00298CA0; }
SET64(2, (s64)(s32)0x410000);
SET64(18, RD(0) + RD(0));
SET32(17, RW(2) + 25404);
SET32(16, RW(0) + 7);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
L_00298C60:;
SET32(17, RW(17) + 4);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00298C78; }
SET64(31, 0x298c74);  JP_F_00298CB8(c);
if (RD(2) != 0) SET64(18, RD(2));
L_00298C78:;
SET32(16, RW(16) + -1);
if (RSD(16) >= 0) { SET64(2, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_00298C60; } }
SET64(2, RD(18) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
L_00298CA0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_00298CB8(c); return; }
}

void JP_F_00298CB8(Ctx *c) { /* func_00298CB8 */
ENTER(0x298cb8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x298ccc); SET64(16, RD(4) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x12a); if (t) goto L_00298CF0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { JP_F_0028A8F8(c); return; }
L_00298CF0:;
SET64(31, 0x298cf8); SET32(5, RW(0) + 71); JP_F_00297980(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00298D0C; }
SET64(31, 0x298d0c);  JP_F_00298D20(c);
L_00298D0C:;
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00298D20(Ctx *c) { /* func_00298D20 */
ENTER(0x298d20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x298d44); SET32(16, RW(17) + 3368); JP_F_00298740(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(4, RD(17) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 652)));
{ int t = RD(3) != RD(2); SET64(5, RD(16) + RD(0)); if (t) goto L_00298D68; }
SET64(3, (s32)rd32(c, (RW(16) + 656)));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_00298D84; }
L_00298D68:;
SET64(31, 0x298d70);  JP_F_00298268(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(16) + 652), RW(2));
wr32(c, (RW(16) + 656), RW(3));
SET32(2, RW(0) + 1);
L_00298D84:;
SET64(16, rd64(c, (RW(29) + 16)));
wr32(c, (RW(17) + 68), RW(2));
SET64(31, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00298DA0(Ctx *c) { /* func_00298DA0 */
ENTER(0x298da0);
SET32(6, RW(6) << 2);
SET32(4, RW(4) + RW(6));
wr32(c, (RW(4) + 3368), RW(5)); return;
}

void JP_F_00298DB0(Ctx *c) { /* func_00298DB0 */
ENTER(0x298db0);
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
SET64(2, (s32)rd32(c, (RW(1) + 32352)));
SET64(1, (s64)(s32)0x4b0000);
SET32(1, RW(1) + RW(3));
SET64(3, (s32)rd32(c, (RW(1) + 32392)));
{ int t = RD(3) != RD(0); SET64(7, RD(16) + RD(0)); if (t) goto L_00298E30; }
SET64(31, 0x298e1c);  JP_F_0028A8F8(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(0));
wr32(c, (RW(16) + 0), RW(3)); goto L_00298E3C;
L_00298E30:;
SET64(4, RD(2) + RD(0));
{ u32 t = RW(3); SET64(31, 0x298e3c); SET64(5, RD(8) + RD(0)); rt_call(c, t); }
L_00298E3C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00298E50(Ctx *c) { /* func_00298E50 */
ENTER(0x298e50);
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

void JP_F_00298EE0(Ctx *c) { /* func_00298EE0 */
ENTER(0x298ee0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET32(4, RW(0) + 24000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x298f00); SET64(16, RD(7) + RD(0)); JP_F_00298E50(c);
wr32(c, (RW(16) + 0), RW(17));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00298F18(Ctx *c) { /* func_00298F18 */
ENTER(0x298f18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET32(4, RW(0) + 30000);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x298f38); SET64(16, RD(7) + RD(0)); JP_F_00298E50(c);
wr32(c, (RW(16) + 0), RW(17));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00298F50(Ctx *c) { /* func_00298F50 */
ENTER(0x298f50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET64(4, RD(0) | 0xea60);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x298f70); SET64(16, RD(7) + RD(0)); JP_F_00298E50(c);
wr32(c, (RW(16) + 0), RW(17));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00298F88(Ctx *c) { /* func_00298F88 */
ENTER(0x298f88);
SET64(8, (s32)rd32(c, (RW(5) + 12)));
SET32(11, RW(0) + 10);
SET64(12, (s32)rd32(c, (RW(5) + 16)));
SET64(2, (s64)(s32)0x10000);
div_s(c, 0, RSW(8), RSW(11));
SET64(10, (s32)rd32(c, (RW(5) + 8)));
SET64(2, RD(2) | 0x5114);
SET32(9, RW(0) + 1438);
SET32(3, RW(12) << 1);
if (RD(11) == RD(0)) { rt_break(c, 0x298fb0); goto L_00298FB4; }
L_00298FB4:;
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

void JP_F_00299028(Ctx *c) { /* func_00299028 */
ENTER(0x299028);
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
if (RD(11) == RD(0)) { rt_break(c, 0x299054); goto L_00299058; }
L_00299058:;
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

void JP_F_002990C0(Ctx *c) { /* func_002990C0 */
ENTER(0x2990c0);
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
if (RD(12) == RD(0)) { rt_break(c, 0x299108); goto L_0029910C; }
L_0029910C:;
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

void JP_F_00299168(Ctx *c) { /* func_00299168 */
ENTER(0x299168);
SET32(29, RW(29) + -32);
SET64(2, RD(5) < (u64)(s64)2);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_002991B8; }
SET32(2, RW(0) + 2);
if (RD(5) != RD(2)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_002991BC; }
SET64(5, RD(29) + RD(0));
SET64(31, 0x299198); SET32(6, RW(29) + 4); JP_F_00299280(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x2991a8); SET64(6, (s32)rd32(c, (RW(29) + 4))); JP_F_002991C8(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x2991b8); SET64(6, (s32)rd32(c, (RW(29) + 4))); JP_F_00299230(c);
L_002991B8:;
SET64(16, rd64(c, (RW(29) + 16)));
L_002991BC:;
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002991C8(Ctx *c) { /* func_002991C8 */
ENTER(0x2991c8);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 16), RD(16));
SET32(16, RW(4) + 3368);
SET64(4, (s32)rd32(c, (RW(2) + 25328)));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2991ec);  JP_F_0027B438(c);
SET64(4, RD(29) + RD(0));
SET64(31, 0x2991f8); SET64(17, RD(2) + RD(0)); JP_F_0028ABB0(c);
SET64(3, (s32)rd32(c, (RW(16) + 680)));
SET64(4, RD(29) + RD(0));
SET32(3, RW(3) + RW(17));
wr32(c, (RW(16) + 680), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 716)));
SET32(2, RW(2) + RW(17));
SET64(31, 0x299218); wr32(c, (RW(16) + 716), RW(2)); JP_F_0028ABC8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00299230(Ctx *c) { /* func_00299230 */
ENTER(0x299230);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET32(16, RW(4) + 3368);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x29924c); SET64(4, (s32)rd32(c, (RW(16) + 736))); JP_F_0027B438(c);
SET64(4, RD(29) + RD(0));
SET64(31, 0x299258); SET64(17, RD(2) + RD(0)); JP_F_0028ABB0(c);
SET64(2, (s32)rd32(c, (RW(16) + 732)));
SET64(4, RD(29) + RD(0));
SET32(2, RW(2) + RW(17));
SET64(31, 0x29926c); wr32(c, (RW(16) + 732), RW(2)); JP_F_0028ABC8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00299280(Ctx *c) { /* func_00299280 */
ENTER(0x299280);
SET64(2, (s32)rd32(c, (RW(4) + 2336)));
{ int t = RD(2) != RD(0); SET32(3, RW(2) << 2); if (t) goto L_002992A0; }
SET32(2, RW(0) + 29970);
wr32(c, (RW(5) + 0), RW(0));
wr32(c, (RW(6) + 0), RW(2)); return;
L_002992A0:;
SET64(1, (s64)(s32)0x4b0000);
SET32(1, RW(1) + RW(3));
SET64(3, (s32)rd32(c, (RW(1) + 32352)));
SET32(2, RW(0) + 1000);
wr32(c, (RW(5) + 0), RW(2));
wr32(c, (RW(6) + 0), RW(3)); return;
}

void JP_F_002992C0(Ctx *c) { /* func_002992C0 */
ENTER(0x2992c0);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2992e4); wr32(c, (RW(17) + 0), RW(2)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00299308; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x11b);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00299308:;
SET64(3, (s32)rd32(c, (RW(16) + 2336)));
{ int t = RD(3) == RD(0); SET32(3, RW(3) << 2); if (t) goto L_00299324; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + RW(3));
SET64(4, (s32)rd32(c, (RW(4) + 32352)));
wr32(c, (RW(17) + 0), RW(4));
L_00299324:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00299338(Ctx *c) { /* func_00299338 */
ENTER(0x299338);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + -1);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x29935c); wr32(c, (RW(17) + 0), RW(2)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00299380; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x118);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00299380:;
SET64(3, (s32)rd32(c, (RW(16) + 2336)));
{ int t = RD(3) == RD(0); SET32(4, RW(16) + 3368); if (t) goto L_002993B0; }
SET32(2, RW(3) << 2);
SET64(5, (s32)rd32(c, (RW(4) + 684)));
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + RW(2));
SET64(4, (s32)rd32(c, (RW(4) + 32352)));
SET64(31, 0x2993a8); SET32(6, RW(0) + 1000); JP_F_0027B438(c);
wr32(c, (RW(17) + 0), RW(2));
SET64(2, RD(0) + RD(0));
L_002993B0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002993C8(Ctx *c) { /* func_002993C8 */
ENTER(0x2993c8);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(5) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002993F0; }
SET64(6, (s32)rd32(c, (RW(5) + 24)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(5) + 20)));
SET32(29, RW(29) + 16); { JP_F_00299400(c); return; }
L_002993F0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00299400(Ctx *c) { /* func_00299400 */
ENTER(0x299400);
SET32(29, RW(29) + -32);
SET32(7, RW(4) + 2564);
wr64(c, (RW(29) + 16), RD(31));
SET64(3, (s32)rd32(c, (RW(7) + 56)));
{ int t = RD(3) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00299428; }
SET64(8, (s32)rd32(c, (RW(7) + 176)));
SET64(31, 0x299424); SET64(7, RD(29) + RD(0)); JP_F_00299588(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_00299428:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00299438(Ctx *c) { /* func_00299438 */
ENTER(0x299438);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x29945c); SET64(18, RD(5) + RD(0)); JP_F_0028AB18(c);
SET64(5, (s64)(s32)0xff000000);
SET32(6, RW(16) + 3368);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x125); if (t) goto L_00299488; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { JP_F_0028A8F8(c); return; }
L_00299488:;
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

void JP_F_002994C0(Ctx *c) { /* func_002994C0 */
ENTER(0x2994c0);
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
SET64(31, 0x2994f0); wr32(c, (RW(17) + 0), RW(0)); JP_F_0028AB18(c);
SET64(4, RD(0) + RD(0));
SET64(5, (s64)(s32)0xff000000);
SET32(6, RW(16) + 2564);
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x126); if (t) goto L_00299520; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { JP_F_0028A8F8(c); return; }
L_00299520:;
SET64(3, (s32)rd32(c, (RW(6) + 56)));
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 76))); goto L_00299538; }
SET32(3, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3)); goto L_00299568;
L_00299538:;
SET32(3, RW(0) + 4);
if (RD(4) == RD(3)) { SET64(8, (s32)rd32(c, (RW(6) + 180))); goto L_00299550; }
wr32(c, (RW(17) + 0), RW(0)); goto L_00299568;
L_00299550:;
SET64(6, RD(18) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x299564); SET64(7, RD(17) + RD(0)); JP_F_00299588(c);
SET64(2, RD(0) + RD(0));
L_00299568:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00299588(Ctx *c) { /* func_00299588 */
ENTER(0x299588);
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
SET64(31, 0x2995d0); SET32(21, RW(2) + 25320); JP_F_002986A8(c);
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(6, RW(0) + 1);
SET64(1, (s64)(s32)0x461c0000);
SET64(1, RD(1) | 0x4000);
c->f[3].u = RW(1);
SET32(3, RW(0) + -2);
{ int t = RD(2) != RD(6); mul_s(c, 0, 4, RSW(2), RSW(16)); if (t) goto L_00299620; }
SET64(2, (s32)rd32(c, (RW(29) + 0)));
if (RD(2) != RD(3)) { SET64(4, RD(18) + RD(0)); goto L_00299608; }
wr32(c, (RW(17) + 0), RW(6)); goto L_002996B0;
L_00299608:;
SET64(5, RD(19) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(31, 0x299618); SET64(7, RD(17) + RD(0)); JP_F_002996D8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_002996B4;
L_00299620:;
SET64(3, (s32)rd32(c, (RW(21) + 8)));
c->f[0].u = RW(19);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[1].u = RW(20);
c->f[1].f = (f32)(s32)c->f[1].u;
div_s(c, 0, RSW(4), RSW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x29963c); goto L_00299640; }
L_00299640:;
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
{ int t = RD(5) == RD(6); wr32(c, (RW(29) + 0), RW(2)); if (t) goto L_002996A0; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x299698); SET64(5, RD(17) + RD(0)); JP_F_00299750(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_002996B4;
L_002996A0:;
c->fcc = F(1) <= F(13);
if (!c->fcc) { wr32(c, (RW(17) + 0), RW(0)); goto L_002996B0; }
wr32(c, (RW(17) + 0), RW(5));
L_002996B0:;
SET64(16, rd64(c, (RW(29) + 16)));
L_002996B4:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void JP_F_002996D8(Ctx *c) { /* func_002996D8 */
ENTER(0x2996d8);
SET32(29, RW(29) + -16);
SET32(8, RW(4) + 3368);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s64)(s32)0x410000);
SET64(4, RD(5) + RD(0));
SET64(5, RD(6) + RD(0));
SET64(3, (s32)rd32(c, (RW(8) + 716)));
{ int t = RSD(3) >= 0; SET32(2, RW(2) + 25320); if (t) goto L_00299718; }
SET32(2, RW(0) + 1);
wr32(c, (RW(8) + 716), RW(0));
wr32(c, (RW(16) + 0), RW(2)); goto L_0029973C;
L_00299718:;
SET64(6, (s32)rd32(c, (RW(8) + 716)));
SET64(31, 0x299724); SET64(7, (s32)rd32(c, (RW(2) + 8))); JP_F_0026EE58(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00299738; }
wr32(c, (RW(16) + 0), RW(2)); goto L_0029973C;
L_00299738:;
wr32(c, (RW(16) + 0), RW(0));
L_0029973C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void JP_F_00299750(Ctx *c) { /* func_00299750 */
ENTER(0x299750);
SET64(7, RD(4) + RD(0));
c->f[1].u = rd32(c, (RW(7) + 2748));
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu(F(13) + F(1));
c->fcc = F(0) < F(12);
{ int t = !c->fcc; SET32(6, RW(7) + 3368); if (t) goto L_00299778; }
wr32(c, (RW(5) + 0), RW(0)); return;
L_00299778:;
c->f[0].f = fpu(F(13) - F(1));
c->fcc = F(12) <= F(0);
{ int t = !c->fcc; SET64(2, (s64)(s32)0x410000); if (t) goto L_002997C0; }
c->f[0].u = rd32(c, (RW(6) + 712));
SET32(2, RW(0) + 1);
c->fcc = F(0) == F(12);
{ int t = c->fcc; wr32(c, (RW(5) + 0), RW(2)); if (t) goto L_00299834; }
c->f[0].u = rd32(c, (RW(6) + 704));
c->fcc = F(0) == F(12);
{ int t = c->fcc;  if (t) goto L_00299834; }
SET64(2, (s32)rd32(c, (RW(6) + 700)));
wr32(c, (RW(6) + 704), c->f[12].u);
SET32(2, RW(2) + 1);
wr32(c, (RW(6) + 700), RW(2)); return;
L_002997C0:;
SET64(4, RD(0) | 0xea24);
SET64(3, (s32)rd32(c, (RW(2) + 25328)));
{ int t = RD(3) != RD(4); SET64(8, RD(0) + RD(0)); if (t) goto L_002997EC; }
SET64(2, (s32)rd32(c, (RW(7) + 2336)));
SET64(2, RSD(2) < (s64)3);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(6) + 700))); goto L_002997F0; }
SET64(2, (s32)rd32(c, (RW(6) + 684)));
SET64(2, RD(2) ^ 0x3e8);
SET64(8, RD(2) < (u64)(s64)1);
L_002997EC:;
SET64(2, (s32)rd32(c, (RW(6) + 700)));
L_002997F0:;
SET64(2, RSD(8) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_00299808; }
SET64(2, (s32)rd32(c, (RW(6) + 708))); goto L_00299820;
L_00299808:;
c->fcc = F(13) < F(12);
{ int t = !c->fcc; SET32(2, RW(0) + 1); if (t) goto L_00299820; }
wr32(c, (RW(5) + 0), RW(0)); goto L_00299824;
L_00299820:;
wr32(c, (RW(5) + 0), RW(2));
L_00299824:;
wr32(c, (RW(6) + 700), RW(0));
wr32(c, (RW(6) + 712), c->f[12].u);
SET64(2, (s32)rd32(c, (RW(5) + 0)));
wr32(c, (RW(6) + 708), RW(2));
L_00299834:;
 return;
}

void JP_F_00299840(Ctx *c) { /* func_00299840 */
ENTER(0x299840);
SET32(29, RW(29) + -48);
SET64(3, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(31));
SET64(5, (s32)rd32(c, (RW(3) + 2384)));
SET32(3, RW(3) + 3368);
SET64(16, (s32)rd32(c, (RW(3) + 640)));
{ int t = RD(5) == RD(0); SET64(17, (s32)rd32(c, (RW(3) + 636))); if (t) goto L_002998C4; }
SET32(3, RW(0) + -5);
{ int t = RD(17) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_002998C4; }
SET64(5, RD(29) + RD(0));
SET64(31, 0x299884); SET32(6, RW(29) + 4); JP_F_002986A8(c);
SET64(3, RD(0) | 0xea24);
SET32(4, RW(16) << 5);
if (RD(3) == RD(0)) { rt_break(c, 0x299890); goto L_00299894; }
L_00299894:;
SET32(4, RW(4) - RW(16));
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(4) << 2);
SET64(7, (s32)rd32(c, (RW(29) + 4)));
SET32(4, RW(4) + RW(16));
SET64(5, RD(16) + RD(0));
SET32(4, RW(4) << 4);
div_s(c, 0, RSW(4), RSW(3));
SET64(4, c->lo.d[0]);
SET64(31, 0x2998c0); SET32(4, RW(17) + RW(4)); JP_F_0026EE58(c);
SET64(2, RD(0) < RD(2));
L_002998C4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void JP_F_002998D8(Ctx *c) { /* func_002998D8 */
ENTER(0x2998d8);
wr32(c, (RW(4) + 4052), RW(5)); return;
}

void JP_F_002998E0(Ctx *c) { /* func_002998E0 */
ENTER(0x2998e0);
SET64(2, (s32)rd32(c, (RW(4) + 4052))); return;
}

void JP_F_002998E8(Ctx *c) { /* func_002998E8 */
ENTER(0x2998e8);
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 1);
wr32(c, (RW(4) + 24), RW(0));
wr64(c, (RW(4) + 8), RD(2));
wr64(c, (RW(4) + 0), RD(0));
wr64(c, (RW(4) + 16), RD(0)); return;
}

void JP_F_00299908(Ctx *c) { /* func_00299908 */
ENTER(0x299908);
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

void JP_F_00299948(Ctx *c) { /* func_00299948 */
ENTER(0x299948);
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
SET32(29, RW(29) + 16); { JP_F_002999F8(c); return; }
}

void JP_F_002999E0(Ctx *c) { /* func_002999E0 */
ENTER(0x2999e0);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_002999F8(c); return; }
}

void JP_F_002999F8(Ctx *c) { /* func_002999F8 */
ENTER(0x2999f8);
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
L_00299A20:;
{ int t = RD(2) == RD(0); SET32(17, RW(17) + 1); if (t) goto L_00299A5C; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(16, RW(16) + 4);
{ int t = RD(2) == RD(0); SET32(3, RW(18) + RW(2)); if (t) goto L_00299A5C; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
{ u32 t = RW(2); SET64(31, 0x299a50); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET64(2, RSD(17) < (s64)15); if (t) { POLL(); goto L_00299A20; } }
L_00299A5C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(4) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00299A78(Ctx *c) { /* func_00299A78 */
ENTER(0x299a78);
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
L_00299AB0:;
SET64(4, RD(16) + RD(0));
SET32(18, RW(18) + -1);
SET32(16, RW(16) + 68);
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x299ac8); SET32(17, RW(17) + 4); JP_F_00299B30(c);
if (RSD(18) >= 0) { wr32(c, (RW(16) + 8), RW(0)); { POLL(); goto L_00299AB0; } }
SET64(5, RD(19) + RD(0));
SET64(31, 0x299adc); SET64(4, RD(20) + RD(0)); JP_F_00299B78(c);
{ int t = RD(2) == RD(0); SET64(4, RD(20) + RD(0)); if (t) goto L_00299B10; }
SET64(20, rd64(c, (RW(29) + 32)));
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0x302);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { JP_F_0028A8F8(c); return; }
L_00299B10:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void JP_F_00299B30(Ctx *c) { /* func_00299B30 */
ENTER(0x299b30);
SET32(2, RW(0) + 8);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 0), RW(0));
SET32(3, RW(0) + 2);
wr32(c, (RW(4) + 12), RW(5));
SET32(5, RW(0) + 8);
wr32(c, (RW(4) + 16), RW(2));
SET32(2, RW(4) + 28);
L_00299B50:;
SET32(3, RW(3) + -1);
wr32(c, (RW(2) + 0), RW(5));
{ int t = RSD(3) >= 0; SET32(2, RW(2) + -4); if (t) { POLL(); goto L_00299B50; } }
SET32(2, RW(0) + -1);
wr32(c, (RW(4) + 32), RW(2)); return;
}

void JP_F_00299B78(Ctx *c) { /* func_00299B78 */
ENTER(0x299b78);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_00299BB8; }
SET64(5, RD(0) + RD(0));
SET64(31, 0x299ba4); SET64(6, RD(0) + RD(0)); JP_F_00299EE8(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x299bb0); SET64(5, RD(16) + RD(0)); JP_F_00299C98(c);
SET64(2, RD(0) + RD(0)); goto L_00299C84;
L_00299BB8:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 1); if (t) goto L_00299BF0; }
SET64(31, 0x299bcc); SET64(5, RD(0) + RD(0)); JP_F_00299EE8(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x299bd8); SET64(5, RD(16) + RD(0)); JP_F_00299D88(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 6);
SET64(31, 0x299be8); SET64(6, RD(0) + RD(0)); JP_F_002977B8(c);
wr32(c, (RW(17) + 2988), RW(0)); goto L_00299C80;
L_00299BF0:;
SET64(2, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 2); if (t) goto L_00299C28; }
SET64(31, 0x299c04); SET64(5, RD(0) + RD(0)); JP_F_00299EE8(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x299c10); SET64(5, RD(16) + RD(0)); JP_F_00299E28(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 5);
SET64(31, 0x299c20); SET64(6, RD(0) + RD(0)); JP_F_002977B8(c);
wr32(c, (RW(17) + 2984), RW(0)); goto L_00299C80;
L_00299C28:;
SET64(2, (s32)rd32(c, (RW(16) + 32)));
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 7); if (t) goto L_00299C78; }
SET64(31, 0x299c3c); SET64(5, RD(0) + RD(0)); JP_F_00299EE8(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x299c48); SET64(5, RD(16) + RD(0)); JP_F_00299EC8(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 6);
SET64(31, 0x299c58); SET64(6, RD(0) + RD(0)); JP_F_002977B8(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 5);
SET64(31, 0x299c68); SET64(6, RD(0) + RD(0)); JP_F_002977B8(c);
wr32(c, (RW(17) + 2988), RW(0));
wr32(c, (RW(17) + 2984), RW(0)); goto L_00299C80;
L_00299C78:;
SET32(2, RW(0) + -1); goto L_00299C84;
L_00299C80:;
SET64(2, RD(0) + RD(0));
L_00299C84:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00299C98(Ctx *c) { /* func_00299C98 */
ENTER(0x299c98);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x299cbc); SET64(16, RD(4) + RD(0)); JP_F_00299FA8(c);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(5, RW(0) + 5);
{ int t = RD(2) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_00299CF0; }
SET32(5, RW(0) + 1);
SET64(31, 0x299cdc); SET32(6, RW(0) + 1); JP_F_00299F08(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x299ce8); SET64(5, RD(17) + RD(0)); JP_F_00299D88(c);
SET64(2, (s32)rd32(c, (RW(17) + 12))); goto L_00299D00;
L_00299CF0:;
SET64(31, 0x299cf8);  JP_F_002977B8(c);
wr32(c, (RW(16) + 2984), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 12)));
L_00299D00:;
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00299D28; }
SET32(5, RW(0) + 1);
SET64(31, 0x299d14); SET32(6, RW(0) + 2); JP_F_00299F28(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x299d20); SET64(5, RD(17) + RD(0)); JP_F_00299E28(c);
SET64(2, (s32)rd32(c, (RW(17) + 32))); goto L_00299D3C;
L_00299D28:;
SET32(5, RW(0) + 6);
SET64(31, 0x299d34); SET64(6, RD(0) + RD(0)); JP_F_002977B8(c);
wr32(c, (RW(16) + 2988), RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 32)));
L_00299D3C:;
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00299D70; }
SET32(5, RW(0) + 1);
SET64(31, 0x299d50); SET32(6, RW(0) + 7); JP_F_00299F48(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00299EC8(c); return; }
L_00299D70:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void JP_F_00299D88(Ctx *c) { /* func_00299D88 */
ENTER(0x299d88);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x299dac); SET32(5, RW(0) + 1); JP_F_00299FA8(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 2);
SET64(31, 0x299dbc); SET32(6, RW(0) + 3); JP_F_00299EE8(c);
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 16)));
SET32(5, RW(0) + 3);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 4); if (t) goto L_00299E08; }
SET64(31, 0x299dd8);  JP_F_00299FA8(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 4);
SET64(31, 0x299de8); SET32(6, RW(0) + 5); JP_F_00299EE8(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 5);
SET64(17, rd64(c, (RW(29) + 8)));
SET32(6, RW(0) + 6);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00299FA8(c); return; }
L_00299E08:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 3);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 6);
SET32(29, RW(29) + 32); { JP_F_00299FA8(c); return; }
}

void JP_F_00299E28(Ctx *c) { /* func_00299E28 */
ENTER(0x299e28);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x299e4c); SET32(5, RW(0) + 2); JP_F_00299FA8(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 3);
SET64(31, 0x299e5c); SET32(6, RW(0) + 4); JP_F_00299EE8(c);
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(5, RW(0) + 4);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 5); if (t) goto L_00299EA8; }
SET64(31, 0x299e78);  JP_F_00299FA8(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 5);
SET64(31, 0x299e88); SET32(6, RW(0) + 6); JP_F_00299EE8(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 6);
SET64(17, rd64(c, (RW(29) + 8)));
SET32(6, RW(0) + 7);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { JP_F_00299FA8(c); return; }
L_00299EA8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 4);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 7);
SET32(29, RW(29) + 32); { JP_F_00299FA8(c); return; }
}

void JP_F_00299EC8(Ctx *c) { /* func_00299EC8 */
ENTER(0x299ec8);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 7);
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(0) + 8);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { JP_F_00299FA8(c); return; }
}

