#include "r5900.h"
#include "functab.h"

void F_00280880(Ctx *c) { /* func_00280880 */
ENTER(0x280880);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x280894); SET64(16, RD(4) + RD(0)); F_00280D78(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002808C8; }
SET64(31, 0x2808a8);  F_00280D58(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_002808C4; }
SET64(2, (s32)rd32(c, (RW(2) + 24)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002808C8; }
{ u32 t = RW(2); SET64(31, 0x2808c4);  rt_call(c, t); }
L_002808C4:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002808C8:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002808D8(Ctx *c) { /* func_002808D8 */
ENTER(0x2808d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2808f4); SET64(17, RD(0) + RD(0)); F_00280D78(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_0028092C; }
SET64(31, 0x280908);  F_00280D58(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_00280928; }
SET64(2, (s32)rd32(c, (RW(2) + 28)));
if (RD(2) == RD(0)) { SET64(2, RD(17) + RD(0)); goto L_0028092C; }
{ u32 t = RW(2); SET64(31, 0x280924);  rt_call(c, t); }
SET64(17, RD(2) + RD(0));
L_00280928:;
SET64(2, RD(17) + RD(0));
L_0028092C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00280940(Ctx *c) { /* func_00280940 */
ENTER(0x280940);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x280964); SET64(18, RD(6) + RD(0)); F_00280D78(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00280998; }
SET64(31, 0x280978);  F_00280D58(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_00280994; }
SET64(2, (s32)rd32(c, (RW(2) + 32)));
{ int t = RD(2) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00280994; }
{ u32 t = RW(2); SET64(31, 0x280994); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
L_00280994:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00280998:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002809B0(Ctx *c) { /* func_002809B0 */
ENTER(0x2809b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2809cc); SET64(17, RD(5) + RD(0)); F_00280D78(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00280A00; }
SET64(31, 0x2809e0);  F_00280D58(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_002809FC; }
SET64(2, (s32)rd32(c, (RW(2) + 36)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00280A00; }
{ u32 t = RW(2); SET64(31, 0x2809fc); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_002809FC:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00280A00:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00280A10(Ctx *c) { /* func_00280A10 */
ENTER(0x280a10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280a2c); SET64(17, RD(5) + RD(0)); F_00280D78(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00280A60; }
SET64(31, 0x280a40);  F_00280D58(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_00280A5C; }
SET64(2, (s32)rd32(c, (RW(2) + 40)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00280A60; }
{ u32 t = RW(2); SET64(31, 0x280a5c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_00280A5C:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00280A60:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00280A70(Ctx *c) { /* func_00280A70 */
ENTER(0x280a70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280a8c); SET64(17, RD(0) + RD(0)); F_00280D78(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00280AC4; }
SET64(31, 0x280aa0);  F_00280D58(c);
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_00280AC0; }
SET64(2, (s32)rd32(c, (RW(2) + 44)));
if (RD(2) == RD(0)) { SET64(2, RD(17) + RD(0)); goto L_00280AC4; }
{ u32 t = RW(2); SET64(31, 0x280abc);  rt_call(c, t); }
SET64(17, RD(2) + RD(0));
L_00280AC0:;
SET64(2, RD(17) + RD(0));
L_00280AC4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00280AD8(Ctx *c) { /* func_00280AD8 */
ENTER(0x280ad8);
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
SET64(31, 0x280b10); SET64(20, RD(7) + RD(0)); F_00280D58(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00280BD8; }
SET64(31, 0x280b20);  F_00280658(c);
SET64(21, (s32)rd32(c, (RW(16) + 64)));
wr32(c, (RW(18) + 8), RW(17));
SET64(4, RD(29) + RD(0));
wr32(c, (RW(18) + 4), RW(19));
SET32(5, RW(29) + 4);
wr32(c, (RW(18) + 16), RW(20));
SET64(31, 0x280b40); SET32(6, RW(29) + 8); F_00280720(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 3912); if (t) goto L_00280BB0; }
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(6, (s32)rd32(c, (RW(29) + 8)));
SET64(31, 0x280b64); SET32(4, RW(19) + RW(4)); F_00266B28(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(0); SET64(4, RD(19) + RD(0)); if (t) goto L_00280B80; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 3960); goto L_00280BB0;
L_00280B80:;
wr32(c, (RW(18) + 12), RW(17));
SET64(31, 0x280b8c); SET64(5, (s32)rd32(c, (RW(29) + 0))); F_00280788(c);
SET64(4, RD(21) + RD(0));
SET64(16, RD(2) + RD(0));
SET32(5, RW(20) + 192);
SET64(6, RD(17) + RD(0));
SET64(7, RD(0) + RD(0));
{ int t = RD(16) != RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_00280BC0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 4000);
L_00280BB0:;
SET64(31, 0x280bb8);  F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_00280BD4;
L_00280BC0:;
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 20), RW(16));
SET64(31, 0x280bd0); wr32(c, (RW(18) + 0), RW(2)); F_00287D88(c);
SET64(2, RD(16) + RD(0));
L_00280BD4:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00280BD8:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_00280BF8(Ctx *c) { /* func_00280BF8 */
ENTER(0x280bf8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(4) + 660);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x280c1c); SET64(19, (s32)rd32(c, (RW(4) + 64))); F_00280D58(c);
SET64(4, RD(16) + RD(0));
SET64(18, (s32)rd32(c, (RW(16) + 20)));
SET64(17, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x280c30); SET64(16, (s32)rd32(c, (RW(16) + 16))); F_00280D78(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00280C90; }
if (RD(18) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_00280C50; }
SET64(31, 0x280c4c); SET64(4, RD(18) + RD(0)); F_00280880(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_00280C50:;
SET64(2, (s32)rd32(c, (RW(3) + 20)));
{ u32 t = RW(2); SET64(31, 0x280c5c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
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
SET32(29, RW(29) + 48); { F_00287D88(c); return; }
L_00280C90:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00280CA8(Ctx *c) { /* func_00280CA8 */
ENTER(0x280ca8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x280cc4); SET64(17, RD(4) + RD(0)); F_00280D78(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00280D34; }
SET64(31, 0x280cd8);  F_00280D58(c);
SET64(16, (s32)rd32(c, (RW(17) + 20)));
{ int t = RD(16) == RD(0); SET64(18, (s32)rd32(c, (RW(17) + 12))); if (t) goto L_00280D30; }
SET64(31, 0x280cec);  F_002811A8(c);
SET64(31, 0x280cf4); SET64(4, RD(16) + RD(0)); F_00280880(c);
wr32(c, (RW(17) + 0), RW(0));
SET64(31, 0x280d00); SET64(4, RD(16) + RD(0)); F_002807E0(c);
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x280d10); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 20), RW(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002806C0(c); return; }
L_00280D30:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00280D34:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00280D48(Ctx *c) { /* func_00280D48 */
ENTER(0x280d48);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + -1920); return;
}

void F_00280D58(Ctx *c) { /* func_00280D58 */
ENTER(0x280d58);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + -1920))); return;
}

void F_00280D68(Ctx *c) { /* func_00280D68 */
ENTER(0x280d68);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -1920), RW(4)); return;
}

void F_00280D78(Ctx *c) { /* func_00280D78 */
ENTER(0x280d78);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x280d8c); SET64(16, RD(4) + RD(0)); F_00280D58(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 1); if (t) goto L_00280DA8; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) != RD(4); SET64(2, RD(0) + RD(0)); if (t) goto L_00280DA8; }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(2, RD(0) < RD(2));
L_00280DA8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00280DB8(Ctx *c) { /* func_00280DB8 */
ENTER(0x280db8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x280dc8);  F_00269C38(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, (s64)(s32)0x530000);
SET64(3, (s64)(s32)0x530000);
SET64(4, (s64)(s32)0x530000);
SET64(5, (s64)(s32)0x530000);
wr32(c, (RW(2) + 14336), RW(0));
wr32(c, (RW(3) + 14340), RW(0));
wr32(c, (RW(4) + 14344), RW(0));
wr32(c, (RW(5) + 14348), RW(0));
SET32(29, RW(29) + 16); return;
}

void F_00280DF8(Ctx *c) { /* func_00280DF8 */
ENTER(0x280df8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269C78(c); return; }
}

void F_00280E10(Ctx *c) { /* func_00280E10 */
ENTER(0x280e10);
SET64(2, RD(4) + RD(0));
SET64(4, RD(0) + RD(0));
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x280e2c); SET64(5, RD(2) + RD(0)); F_00269558(c);
SET64(3, (s64)(s32)0x530000);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + 14336), RW(2));
SET32(29, RW(29) + 16); return;
}

void F_00280E40(Ctx *c) { /* func_00280E40 */
ENTER(0x280e40);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 14336)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269660(c); return; }
}

void F_00280E60(Ctx *c) { /* func_00280E60 */
ENTER(0x280e60);
SET64(2, RD(4) + RD(0));
SET32(4, RW(0) + 2);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x280e7c); SET64(5, RD(2) + RD(0)); F_00269558(c);
SET64(3, (s64)(s32)0x530000);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + 14340), RW(2));
SET32(29, RW(29) + 16); return;
}

void F_00280E90(Ctx *c) { /* func_00280E90 */
ENTER(0x280e90);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(7, RD(6) + RD(0));
SET32(4, RW(0) + 2);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x280eb8); SET64(6, RD(2) + RD(0)); F_00269720(c);
SET64(2, (s64)(s32)0x530000);
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(2) + 14340), RW(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00280ED0(Ctx *c) { /* func_00280ED0 */
ENTER(0x280ed0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(0) + 2);
SET64(5, (s32)rd32(c, (RW(2) + 14340)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269660(c); return; }
}

void F_00280EF0(Ctx *c) { /* func_00280EF0 */
ENTER(0x280ef0);
SET64(2, RD(4) + RD(0));
SET32(4, RW(0) + 6);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x280f0c); SET64(5, RD(2) + RD(0)); F_00269558(c);
SET64(3, (s64)(s32)0x530000);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + 14344), RW(2));
SET32(29, RW(29) + 16); return;
}

void F_00280F20(Ctx *c) { /* func_00280F20 */
ENTER(0x280f20);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(0) + 6);
SET64(5, (s32)rd32(c, (RW(2) + 14344)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269660(c); return; }
}

void F_00280F40(Ctx *c) { /* func_00280F40 */
ENTER(0x280f40);
SET64(2, RD(4) + RD(0));
SET32(4, RW(0) + 5);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x280f5c); SET64(5, RD(2) + RD(0)); F_00269558(c);
SET64(3, (s64)(s32)0x530000);
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(3) + 14348), RW(2));
SET32(29, RW(29) + 16); return;
}

void F_00280F70(Ctx *c) { /* func_00280F70 */
ENTER(0x280f70);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(0) + 5);
SET64(5, (s32)rd32(c, (RW(2) + 14348)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269660(c); return; }
}

void F_00280F90(Ctx *c) { /* func_00280F90 */
ENTER(0x280f90);
SET64(4, (s64)(s32)0x280000);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x280fa8); SET32(4, RW(4) + 4072); F_00269D78(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s64)(s32)0x280000);
SET32(4, RW(4) + 4096);
SET64(5, RD(0) + RD(0));
SET32(29, RW(29) + 16); { F_00269D90(c); return; }
}

void F_00280FC0(Ctx *c) { /* func_00280FC0 */
ENTER(0x280fc0);
SET32(29, RW(29) + -16);
SET64(4, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x280fd4); SET64(5, RD(0) + RD(0)); F_00269D78(c);
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(29, RW(29) + 16); { F_00269D90(c); return; }
}

void F_00280FE8(Ctx *c) { /* func_00280FE8 */
ENTER(0x280fe8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027D0D0(c); return; }
}

void F_00281000(Ctx *c) { /* func_00281000 */
ENTER(0x281000);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027D0E8(c); return; }
}

void F_00281018(Ctx *c) { /* func_00281018 */
ENTER(0x281018);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281028);  F_00269148(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void F_00281038(Ctx *c) { /* func_00281038 */
ENTER(0x281038);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002691C0(c); return; }
}

void F_00281050(Ctx *c) { /* func_00281050 */
ENTER(0x281050);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281060);  F_00269160(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void F_00281070(Ctx *c) { /* func_00281070 */
ENTER(0x281070);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002691D8(c); return; }
}

void F_00281088(Ctx *c) { /* func_00281088 */
ENTER(0x281088);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281098);  F_00269178(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void F_002810A8(Ctx *c) { /* func_002810A8 */
ENTER(0x2810a8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002691F0(c); return; }
}

void F_002810C0(Ctx *c) { /* func_002810C0 */
ENTER(0x2810c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2810d0);  F_00269190(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void F_002810E0(Ctx *c) { /* func_002810E0 */
ENTER(0x2810e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269208(c); return; }
}

void F_002810F8(Ctx *c) { /* func_002810F8 */
ENTER(0x2810f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269CD0(c); return; }
}

void F_00281110(Ctx *c) { /* func_00281110 */
ENTER(0x281110);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x530000);
SET32(16, RW(16) + 14080);
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
SET64(31, 0x281178); wr32(c, (RW(29) + 68), c->f[19].u); F_001273D0(c);
SET32(6, RW(29) + 72);
SET64(5, RD(17) + RD(0));
SET64(31, 0x281188); SET64(4, RD(16) + RD(0)); F_0012EAC8(c);
SET64(31, 0x281190); SET64(4, RD(16) + RD(0)); F_002811D8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 128); return;
}

void F_002811A8(Ctx *c) { /* func_002811A8 */
ENTER(0x2811a8);
SET32(29, RW(29) + -16);
SET32(4, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002698A0(c); return; }
}

void F_002811C0(Ctx *c) { /* func_002811C0 */
ENTER(0x2811c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024D7C8(c); return; }
}

void F_002811D8(Ctx *c) { /* func_002811D8 */
ENTER(0x2811d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002692F0(c); return; }
}

void F_002811F0(Ctx *c) { /* func_002811F0 */
ENTER(0x2811f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281200);  F_002946E8(c);
SET64(2, RD(2) ^ 0x1);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void F_00281218(Ctx *c) { /* func_00281218 */
ENTER(0x281218);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 100)));
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00281238; }
SET32(29, RW(29) + 16); { F_00281240(c); return; }
L_00281238:;
SET32(29, RW(29) + 16); return;
}

void F_00281240(Ctx *c) { /* func_00281240 */
ENTER(0x281240);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(0) + RD(0));
SET64(2, RSD(17) < (s64)10);
L_00281260:;
{ int t = RD(2) == RD(0); SET32(17, RW(17) + 1); if (t) goto L_00281294; }
SET32(5, RW(0) + 1);
SET64(31, 0x281274); SET64(4, RD(16) + RD(0)); F_00281D80(c);
SET64(31, 0x28127c);  F_0024E260(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x281288); SET64(5, RD(0) + RD(0)); F_00281D80(c);
SET64(2, (s32)rd32(c, (RW(16) + 100)));
{ int t = RD(2) != RD(0); SET64(2, RSD(17) < (s64)10); if (t) { POLL(); goto L_00281260; } }
L_00281294:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002812A8(Ctx *c) { /* func_002812A8 */
ENTER(0x2812a8);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(17, (s32)rd32(c, (RW(16) + 448)));
{ int t = RD(17) != RD(2); SET64(18, (s32)rd32(c, (RW(16) + 64))); if (t) goto L_002812E0; }
SET64(31, 0x2812d8);  F_00281508(c);
if (RD(2) == RD(17)) { wr32(c, (RW(16) + 448), RW(0)); goto L_002812E0; }
L_002812E0:;
SET64(31, 0x2812e8); SET64(4, RD(16) + RD(0)); F_00281360(c);
SET64(31, 0x2812f0); SET64(4, RD(18) + RD(0)); F_00294700(c);
SET64(4, RD(16) + RD(0));
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2); SET32(5, RW(0) + 6); if (t) goto L_0028130C; }
if (RD(3) != RD(5)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00281330; }
L_0028130C:;
SET32(2, RW(0) + 2);
SET64(17, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 8), RW(2));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00281348(c); return; }
L_00281330:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00281348(Ctx *c) { /* func_00281348 */
ENTER(0x281348);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027FB68(c); return; }
}

void F_00281360(Ctx *c) { /* func_00281360 */
ENTER(0x281360);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 660)));
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00281380; }
SET32(29, RW(29) + 16); { F_00281388(c); return; }
L_00281380:;
SET32(29, RW(29) + 16); { F_00281480(c); return; }
}

void F_00281388(Ctx *c) { /* func_00281388 */
ENTER(0x281388);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(17) + 660);
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2813ac); SET64(4, (s32)rd32(c, (RW(17) + 64))); F_00294700(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2813b8); SET64(16, RD(2) + RD(0)); F_002808D8(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 3);
if (RD(16) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00281468; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_002813F0; }
SET64(4, (s32)rd32(c, (RW(18) + 12)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x2813e8); SET32(5, RW(0) + 1); rt_call(c, t); }
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00281468; }
L_002813F0:;
SET64(31, 0x2813f8); SET64(4, RD(17) + RD(0)); F_0027C188(c);
SET64(3, (s8)rd8(c, (RW(17) + 118)));
if (RD(3) != RD(0)) { SET64(3, (s8)rd8(c, (RW(17) + 116))); goto L_00281414; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x281410); SET64(5, RD(0) + RD(0)); F_0027C6F8(c);
SET64(3, (s8)rd8(c, (RW(17) + 116)));
L_00281414:;
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(2, (s8)rd8(c, (RW(17) + 118))); goto L_00281440; }
SET64(31, 0x281428); SET64(4, (s32)rd32(c, (RW(17) + 64))); F_00285AD8(c);
if (RD(2) == RD(0)) { SET64(2, (s8)rd8(c, (RW(17) + 118))); goto L_00281440; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x28143c); SET32(4, RW(4) + 4048); F_00281110(c);
SET64(2, (s8)rd8(c, (RW(17) + 118)));
L_00281440:;
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00281468; }
SET64(4, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002809B0(c); return; }
L_00281468:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00281480(Ctx *c) { /* func_00281480 */
ENTER(0x281480);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x281498); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_00294700(c);
SET32(3, RW(0) + 3);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_002814F8; }
SET64(31, 0x2814ac);  F_0027C188(c);
SET64(3, (s8)rd8(c, (RW(16) + 118)));
SET64(4, RD(16) + RD(0));
{ int t = RD(3) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002814C4; }
SET64(31, 0x2814c4);  F_0027C6F8(c);
L_002814C4:;
SET64(3, (s8)rd8(c, (RW(16) + 116)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002814FC; }
SET64(31, 0x2814dc); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_00285AD8(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 4048); if (t) goto L_002814F8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00281110(c); return; }
L_002814F8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002814FC:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00281508(Ctx *c) { /* func_00281508 */
ENTER(0x281508);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x281520); SET64(4, (s32)rd32(c, (RW(16) + 68))); F_00282180(c);
SET32(3, RW(0) + 2);
if (RD(2) != RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 464))); goto L_00281538; }
SET32(2, RW(0) + -1); goto L_002815B4;
L_00281538:;
if (RD(4) == RD(0)) { SET64(5, (s32)rd32(c, (RW(16) + 440))); goto L_00281554; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 20)));
{ u32 t = RW(2); SET64(31, 0x281550);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 440)));
L_00281554:;
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(6, (s32)rd32(c, (RW(16) + 452)));
SET64(7, (s32)rd32(c, (RW(16) + 456)));
SET64(31, 0x281568); SET64(8, (s32)rd32(c, (RW(16) + 460))); F_002820A0(c);
SET64(31, 0x281570); SET64(4, (s32)rd32(c, (RW(16) + 68))); F_00282118(c);
SET32(3, RW(0) + -1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_002815A8; }
SET32(2, RW(0) + 4);
SET32(4, RW(0) + -102);
SET64(31, 0x28158c); wr32(c, (RW(16) + 8), RW(2)); F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, (s32)rd32(c, (RW(16) + 440)));
SET64(31, 0x28159c); SET32(4, RW(4) + 4096); F_00281110(c);
wr32(c, (RW(16) + 448), RW(0));
SET32(2, RW(0) + -1); goto L_002815B4;
L_002815A8:;
SET64(31, 0x2815b0);  F_00278B20(c);
SET32(2, RW(0) + 1);
L_002815B4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002815C8(Ctx *c) { /* mwlSfdExecDecSvrPlaying */
ENTER(0x2815c8);
SET32(29, RW(29) + -32);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s8)rd8(c, (RW(16) + 117)));
{ int t = RD(2) != RD(3); SET64(17, (s32)rd32(c, (RW(16) + 64))); if (t) goto L_00281620; }
SET64(31, 0x2815f4); SET64(4, (s32)rd32(c, (RW(16) + 76))); F_00261F60(c);
{ int t = RD(2) != RD(0);  if (t) goto L_00281628; }
SET64(31, 0x281604); SET64(4, RD(17) + RD(0)); F_00293288(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 4144); if (t) goto L_00281618; }
SET64(31, 0x281618);  F_00281110(c);
L_00281618:;
wr8(c, (RW(16) + 117), (u8)RW(0)); goto L_00281628;
L_00281620:;
SET64(31, 0x281628);  F_0027C900(c);
L_00281628:;
SET64(31, 0x281630); SET64(4, RD(17) + RD(0)); F_00294700(c);
SET32(3, RW(0) + 6);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00281648; }
SET32(2, RW(0) + 3);
wr32(c, (RW(16) + 8), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_00281648:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

static void B_00281658(Ctx *c, u32 entry) { /* func_00281658 */
ENTER(entry);
switch (entry) { case 0x281690: goto L_00281690; case 0x2816a0: goto L_002816A0; case 0x2816a8: goto L_002816A8; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, RD(3) < (u64)(s64)5);
{ int t = RD(2) == RD(0); SET32(2, RW(3) << 2); if (t) goto L_002816A8; }
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 4192)));
{ u32 t = RW(3);  switch (t) { case 0x281690: goto L_00281690; case 0x2816a0: goto L_002816A0; case 0x2816a8: goto L_002816A8; default: rt_jump(c, t); return; } }
L_00281690:;
SET64(31, 0x281698); SET64(4, RD(16) + RD(0)); F_002812A8(c);
 goto L_002816A8;
L_002816A0:;
SET64(31, 0x2816a8); SET64(4, RD(16) + RD(0)); F_002815C8(c);
L_002816A8:;
SET64(31, 0x2816b0); SET64(4, RD(16) + RD(0)); F_002816D0(c);
SET64(31, 0x2816b8); SET64(4, RD(16) + RD(0)); F_0027D110(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}
void F_00281658(Ctx *c) { B_00281658(c, 0x281658); }
void F_00281690(Ctx *c) { B_00281658(c, 0x281690); }
void F_002816A0(Ctx *c) { B_00281658(c, 0x2816a0); }
void F_002816A8(Ctx *c) { B_00281658(c, 0x2816a8); }

void F_002816D0(Ctx *c) { /* func_002816D0 */
ENTER(0x2816d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 68)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00281700; }
SET64(31, 0x2816f4);  F_00281F68(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_00281700; }
wr32(c, (RW(16) + 8), RW(2));
L_00281700:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
if (RD(4) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028172C; }
SET64(31, 0x281714);  F_00280348(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028172C; }
SET32(2, RW(0) + 4);
wr32(c, (RW(16) + 8), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_0028172C:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00281738(Ctx *c) { /* func_00281738 */
ENTER(0x281738);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28174c); SET64(16, RD(4) + RD(0)); F_0024D7B8(c);
SET32(3, RW(0) + 1);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(3); SET64(5, RD(0) + RD(0)); if (t) goto L_00281768; }
SET64(31, 0x281764);  F_00281888(c);
SET64(5, RD(2) + RD(0));
L_00281768:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(5) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00281780(Ctx *c) { /* func_00281780 */
ENTER(0x281780);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2817a0); SET64(17, RD(0) + RD(0)); F_0024D7B8(c);
SET64(18, RD(2) + RD(0));
SET32(2, RW(0) + 1);
{ int t = RD(18) != RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_002817D0; }
SET64(31, 0x2817b8);  F_00281868(c);
{ int t = RD(2) != RD(18); SET64(4, RD(16) + RD(0)); if (t) goto L_002817E4; }
SET64(31, 0x2817c8);  F_00281A68(c);
SET64(17, RD(2) + RD(0)); goto L_002817E4;
L_002817D0:;
SET64(31, 0x2817d8);  F_00281888(c);
SET64(31, 0x2817e0); SET64(4, RD(16) + RD(0)); F_00281A68(c);
SET64(17, RD(2) + RD(0));
L_002817E4:;
SET64(2, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00281800(Ctx *c) { /* func_00281800 */
ENTER(0x281800);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x281820); SET64(18, RD(0) + RD(0)); F_0024D7B8(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 1);
if (RD(16) != RD(2)) { SET64(2, RD(18) + RD(0)); goto L_00281850; }
SET64(31, 0x281838);  F_00281868(c);
{ int t = RD(2) == RD(16); SET64(4, RD(17) + RD(0)); if (t) goto L_0028184C; }
SET64(31, 0x281848);  F_00281A68(c);
SET64(18, RD(2) + RD(0));
L_0028184C:;
SET64(2, RD(18) + RD(0));
L_00281850:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00281868(Ctx *c) { /* func_00281868 */
ENTER(0x281868);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281878);  F_0027B820(c);
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00281888(Ctx *c) { /* func_00281888 */
ENTER(0x281888);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281898);  F_002818A8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_002818A8(Ctx *c) { /* func_002818A8 */
ENTER(0x2818a8);
SET32(29, RW(29) + -32);
SET64(5, (s64)(s32)0x410000);
wr64(c, (RW(29) + 8), RD(17));
SET64(6, (s64)(s32)0x410000);
wr64(c, (RW(29) + 16), RD(18));
SET32(5, RW(5) + -1912);
wr64(c, (RW(29) + 0), RD(16));
SET32(6, RW(6) + -1908);
wr64(c, (RW(29) + 24), RD(31));
SET64(4, (s64)(s32)0x410000);
SET32(18, RW(4) + -7628);
SET32(4, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(2, (s32)rd32(c, (RW(6) + 0)));
SET64(17, (s32)rd32(c, (RW(18) + 0)));
SET32(3, RW(3) + 1);
SET32(2, RW(2) + 1);
wr32(c, (RW(5) + 0), RW(3));
wr32(c, (RW(6) + 0), RW(2));
if (RD(17) != RD(4)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00281934; }
SET64(31, 0x281904);  F_0027B820(c);
SET32(16, RW(2) + 92);
SET64(31, 0x281910); SET64(4, RD(16) + RD(0)); F_002810F8(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00281934; }
SET64(2, (s32)rd32(c, (RW(18) + 0)));
if (RD(2) != RD(17)) { wr32(c, (RW(16) + 0), RW(0)); goto L_00281930; }
SET64(31, 0x28192c);  F_002914F8(c);
wr32(c, (RW(16) + 0), RW(0));
L_00281930:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00281934:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00281948(Ctx *c) { /* func_00281948 */
ENTER(0x281948);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x281974); SET64(19, RD(6) + RD(0)); F_0027B820(c);
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

void F_002819A0(Ctx *c) { /* func_002819A0 */
ENTER(0x2819a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2819b0);  F_0027B820(c);
SET64(3, (s32)rd32(c, (RW(2) + 64)));
{ int t = RD(3) == RD(0); SET64(4, (s32)rd32(c, (RW(2) + 68))); if (t) goto L_002819C4; }
{ u32 t = RW(3); SET64(31, 0x2819c4);  rt_call(c, t); }
L_002819C4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002819D0(Ctx *c) { /* func_002819D0 */
ENTER(0x2819d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2819e0);  F_0027B820(c);
SET64(3, (s32)rd32(c, (RW(2) + 72)));
{ int t = RD(3) == RD(0); SET64(4, (s32)rd32(c, (RW(2) + 76))); if (t) goto L_002819F4; }
{ u32 t = RW(3); SET64(31, 0x2819f4);  rt_call(c, t); }
L_002819F4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00281A00(Ctx *c) { /* func_00281A00 */
ENTER(0x281a00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x281a1c); SET64(17, RD(4) + RD(0)); F_0027B820(c);
wr32(c, (RW(2) + 84), RW(16));
wr32(c, (RW(2) + 80), RW(17));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00281A38(Ctx *c) { /* func_00281A38 */
ENTER(0x281a38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281a48);  F_0027B820(c);
SET64(3, (s32)rd32(c, (RW(2) + 80)));
{ int t = RD(3) == RD(0); SET64(4, (s32)rd32(c, (RW(2) + 84))); if (t) goto L_00281A5C; }
{ u32 t = RW(3); SET64(31, 0x281a5c);  rt_call(c, t); }
L_00281A5C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00281A68(Ctx *c) { /* func_00281A68 */
ENTER(0x281a68);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -32);
SET64(3, (s32)rd32(c, (RW(2) + -7628)));
SET64(2, RD(0) + RD(0));
SET32(4, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(3) != RD(4); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00281B18; }
SET64(31, 0x281a94);  F_0027B820(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x281aa0); SET32(4, RW(16) + 88); F_002810F8(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00281B1C; }
SET64(31, 0x281ab0); SET32(16, RW(16) + 108); F_002819A0(c);
SET32(17, RW(0) + 7);
L_00281AB8:;
if (RD(16) == RD(0)) { SET32(17, RW(17) + -1); goto L_00281ACC; }
SET64(31, 0x281ac8); SET64(4, RD(16) + RD(0)); F_00281B30(c);
SET32(17, RW(17) + -1);
L_00281ACC:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 696); if (t) { POLL(); goto L_00281AB8; } }
SET64(4, RD(0) + RD(0));
SET64(31, 0x281ae0); SET32(17, RW(0) + 1); F_00281CC8(c);
SET64(31, 0x281ae8);  F_00291540(c);
SET64(2, RD(2) ^ RD(17));
SET64(31, 0x281af4); SET64(16, RD(0) < RD(2)); F_002819D0(c);
{ int t = RD(16) != RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_00281B18; }
SET64(31, 0x281b04);  F_00281DC0(c);
{ int t = RD(2) == RD(17); SET64(2, RD(16) + RD(0)); if (t) goto L_00281B18; }
SET64(31, 0x281b14);  F_00281A38(c);
SET64(2, RD(16) + RD(0));
L_00281B18:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00281B1C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00281B30(Ctx *c) { /* mwPlyExecSvrHndl */
ENTER(0x281b30);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -32);
SET64(5, (s32)rd32(c, (RW(2) + -7628)));
SET64(2, RD(0) + RD(0));
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
SET64(17, RD(4) + RD(0));
{ int t = RD(5) != RD(3); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00281BB8; }
{ int t = RD(17) != RD(0);  if (t) goto L_00281B78; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x281b6c); SET32(4, RW(4) + 4216); F_00281110(c);
L_00281B6C:;
SET64(2, RD(0) + RD(0)); goto L_00281BB8;
L_00281B78:;
SET64(16, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(16) != RD(5); SET64(2, RD(0) + RD(0)); if (t) goto L_00281BB8; }
SET64(31, 0x281b8c);  F_00281D18(c);
if (RD(2) == RD(16)) { SET64(2, RD(0) + RD(0)); goto L_00281BB8; }
SET64(31, 0x281b9c);  F_00281DC0(c);
{ int t = RD(2) == RD(16); SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_00281B6C; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281BD0(c); return; }
L_00281BB8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00281BD0(Ctx *c) { /* func_00281BD0 */
ENTER(0x281bd0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x281bf4); SET64(18, (s32)rd32(c, (RW(16) + 64))); F_00281D10(c);
SET64(17, (s32)rd32(c, (RW(16) + 4)));
SET32(2, RW(0) + 1);
SET32(5, RW(0) + 1);
{ int t = RD(17) == RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_00281C18; }
SET64(31, 0x281c10); SET64(5, RD(0) + RD(0)); F_00281D10(c);
SET64(2, RD(0) + RD(0)); goto L_00281C74;
L_00281C18:;
SET64(2, (s64)(s32)0x410000);
SET64(31, 0x281c24); wr32(c, (RW(2) + -1904), RW(16)); F_00281D20(c);
SET64(31, 0x281c2c); SET64(4, RD(18) + RD(0)); F_002915A8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x281c38); SET64(5, RD(0) + RD(0)); F_00281D20(c);
SET64(2, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00281C50; }
wr32(c, (RW(16) + 108), RW(0)); goto L_00281C5C;
L_00281C50:;
SET64(31, 0x281c58); wr32(c, (RW(16) + 108), RW(17)); F_00281658(c);
SET64(4, RD(16) + RD(0));
L_00281C5C:;
SET64(31, 0x281c64); SET64(5, RD(0) + RD(0)); F_00281D10(c);
SET64(31, 0x281c6c); SET64(4, RD(18) + RD(0)); F_00291518(c);
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(0) < RD(2));
L_00281C74:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00281C90(Ctx *c) { /* func_00281C90 */
ENTER(0x281c90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281ca0);  F_002818A8(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_00281CB0(Ctx *c) { /* func_00281CB0 */
ENTER(0x281cb0);
SET32(29, RW(29) + -16);
SET64(4, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00281A68(c); return; }
}

void F_00281CC8(Ctx *c) { /* func_00281CC8 */
ENTER(0x281cc8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x281cdc); SET64(16, RD(4) + RD(0)); F_0027B820(c);
wr32(c, (RW(2) + 88), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00281CF0(Ctx *c) { /* func_00281CF0 */
ENTER(0x281cf0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281d00);  F_0027B820(c);
SET64(2, (s32)rd32(c, (RW(2) + 88)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00281D10(Ctx *c) { /* func_00281D10 */
ENTER(0x281d10);
wr32(c, (RW(4) + 100), RW(5)); return;
}

void F_00281D18(Ctx *c) { /* func_00281D18 */
ENTER(0x281d18);
SET64(2, (s32)rd32(c, (RW(4) + 100))); return;
}

void F_00281D20(Ctx *c) { /* func_00281D20 */
ENTER(0x281d20);
wr32(c, (RW(4) + 104), RW(5)); return;
}

void F_00281D28(Ctx *c) { /* func_00281D28 */
ENTER(0x281d28);
SET64(2, (s32)rd32(c, (RW(4) + 104))); return;
}

void F_00281D30(Ctx *c) { /* func_00281D30 */
ENTER(0x281d30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x281d44); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00281D60; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x281d58); SET32(4, RW(4) + 4256); F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_00281D70;
L_00281D60:;
SET64(31, 0x281d68);  F_00281D18(c);
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(0) < RD(2));
L_00281D70:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00281D80(Ctx *c) { /* func_00281D80 */
ENTER(0x281d80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x281d9c); SET64(17, RD(5) + RD(0)); F_0027B820(c);
SET64(31, rd64(c, (RW(29) + 16)));
wr32(c, (RW(16) + 96), RW(17));
wr32(c, (RW(2) + 36), RW(17));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void F_00281DB8(Ctx *c) { /* func_00281DB8 */
ENTER(0x281db8);
SET64(2, (s32)rd32(c, (RW(4) + 96))); return;
}

void F_00281DC0(Ctx *c) { /* func_00281DC0 */
ENTER(0x281dc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281dd0);  F_0027B820(c);
SET64(2, (s32)rd32(c, (RW(2) + 36)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00281DE0(Ctx *c) { /* func_00281DE0 */
ENTER(0x281de0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281df0);  F_00281CF0(c);
SET64(2, RD(2) ^ 0x1);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void F_00281E08(Ctx *c) { /* func_00281E08 */
ENTER(0x281e08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x281e1c); SET64(16, RD(4) + RD(0)); F_0027D0D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x281e28); SET32(5, RW(0) + 1); F_00281D80(c);
SET64(31, 0x281e30);  F_002811A8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x281e3c); SET64(5, RD(0) + RD(0)); F_00281D80(c);
SET64(31, 0x281e44);  F_0027D0E8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00281218(c); return; }
}

void F_00281E58(Ctx *c) { /* func_00281E58 */
ENTER(0x281e58);
SET64(2, RD(0) + RD(0)); return;
}

void F_00281E60(Ctx *c) { /* func_00281E60 */
ENTER(0x281e60);
SET64(2, RD(0) + RD(0)); return;
}

void F_00281E68(Ctx *c) { /* func_00281E68 */
ENTER(0x281e68);
SET64(2, RD(0) + RD(0)); return;
}

void F_00281E70(Ctx *c) { /* func_00281E70 */
ENTER(0x281e70);
SET64(2, RD(0) + RD(0)); return;
}

void F_00281E78(Ctx *c) { /* func_00281E78 */
ENTER(0x281e78);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00281E94; }
SET64(31, 0x281e90);  F_00254030(c);
SET64(2, RD(0) + RD(0));
L_00281E94:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00281EA0(Ctx *c) { /* func_00281EA0 */
ENTER(0x281ea0);
SET64(2, RD(0) + RD(0)); return;
}

void F_00281EA8(Ctx *c) { /* func_00281EA8 */
ENTER(0x281ea8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(6) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00281ED8; }
SET64(31, 0x281ecc);  F_00253400(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_00281F34;
L_00281ED8:;
SET32(2, RW(0) + 1);
if (RD(6) != RD(2)) { SET32(2, RW(0) + 2); goto L_00281F00; }
SET64(31, 0x281eec);  F_00253468(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x281ef8); SET32(5, RW(2) + RW(17)); F_00253400(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_00281F34;
L_00281F00:;
if (RD(6) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00281F34; }
SET64(31, 0x281f10);  F_00254090(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(2) + 2047);
SET32(2, RW(2) + 4094);
SET64(3, RSD(5) < (s64)0);
if (RD(3) != 0) SET64(5, RD(2));
SET32(5, RSW(5) >> 11);
SET64(31, 0x281f30); SET32(5, RW(5) + RW(17)); F_00253400(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_00281F34:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00281F48(Ctx *c) { /* func_00281F48 */
ENTER(0x281f48);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281f58);  F_002534F0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_00281F68(Ctx *c) { /* BtlSeq_IsFinish */
ENTER(0x281f68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x281f78);  F_002533C0(c);
SET64(2, RD(2) ^ 0x4);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_00281F90(Ctx *c) { /* func_00281F90 */
ENTER(0x281f90);
 return;
}

void F_00281F98(Ctx *c) { /* func_00281F98 */
ENTER(0x281f98);
SET32(29, RW(29) + -16);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00281FB0; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00253FC8(c); return; }
L_00281FB0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00281FC0(Ctx *c) { /* func_00281FC0 */
ENTER(0x281fc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00253F18(c); return; }
}

void F_00281FD8(Ctx *c) { /* func_00281FD8 */
ENTER(0x281fd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x281fec); SET64(16, RD(5) + RD(0)); F_00254090(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00282000(Ctx *c) { /* func_00282000 */
ENTER(0x282000);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002544F0(c); return; }
}

void F_00282018(Ctx *c) { /* func_00282018 */
ENTER(0x282018);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00253020(c); return; }
}

void F_00282030(Ctx *c) { /* func_00282030 */
ENTER(0x282030);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002530B0(c); return; }
}

void F_00282048(Ctx *c) { /* func_00282048 */
ENTER(0x282048);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x282064); SET64(17, RD(4) + RD(0)); F_002532C8(c);
SET64(8, (s64)(s32)0xf0000);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x282080); SET64(8, RD(8) | 0xffff); F_00253138(c);
SET64(4, RD(17) + RD(0));
SET64(5, (s64)(s32)0xf0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0xffff);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00253770(c); return; }
}

void F_002820A0(Ctx *c) { /* func_002820A0 */
ENTER(0x2820a0);
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
SET64(31, 0x2820d4); SET64(20, RD(8) + RD(0)); F_002532C8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(31, 0x2820ec); SET64(8, RD(20) + RD(0)); F_00253138(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_00253770(c); return; }
}

void F_00282118(Ctx *c) { /* func_00282118 */
ENTER(0x282118);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002534F0(c); return; }
}

void F_00282130(Ctx *c) { /* func_00282130 */
ENTER(0x282130);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x282144); SET64(16, RD(4) + RD(0)); F_002535F8(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002532C8(c); return; }
}

void F_00282158(Ctx *c) { /* func_00282158 */
ENTER(0x282158);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28216c); SET64(16, RD(4) + RD(0)); F_00253690(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00253338(c); return; }
}

void F_00282180(Ctx *c) { /* func_00282180 */
ENTER(0x282180);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002533C0(c); return; }
}

void F_00282198(Ctx *c) { /* func_00282198 */
ENTER(0x282198);
SET32(2, RW(0) + 288);
SET32(29, RW(29) + -16);
SET64(5, RSD(5) < (s64)288);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(6) + 0), RW(2));
SET64(6, RD(4) + RD(0));
{ int t = RD(5) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002821EC; }
SET64(4, rd8(c, (RW(6) + 0)));
SET32(3, RW(0) + 128);
if (RD(4) != RD(3)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002821F0; }
SET64(3, rd8(c, (RW(6) + 1)));
if (RD(3) != RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002821F0; }
SET64(5, (s64)(s32)0x4b0000);
SET32(4, RW(6) + 282);
SET32(5, RW(5) + 4392);
SET64(31, 0x2821e8); SET32(6, RW(0) + 6); F_0012A7C0(c);
SET64(2, RD(2) < (u64)(s64)1);
L_002821EC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002821F0:;
SET32(29, RW(29) + 16); return;
}

void F_002821F8(Ctx *c) { /* func_002821F8 */
ENTER(0x2821f8);
SET32(2, RW(0) + 18);
SET64(5, RSD(5) < (s64)18);
wr32(c, (RW(6) + 0), RW(2));
SET64(6, RD(4) + RD(0));
{ int t = RD(5) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028222C; }
SET64(4, rd8(c, (RW(6) + 0)));
SET32(3, RW(0) + 128);
{ int t = RD(4) != RD(3);  if (t) goto L_0028222C; }
SET64(2, rd8(c, (RW(6) + 1)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1);
L_0028222C:;
 return;
}

void F_00282238(Ctx *c) { /* func_00282238 */
ENTER(0x282238);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(29, RW(29) + 16); { F_002560F0(c); return; }
}

void F_00282258(Ctx *c) { /* func_00282258 */
ENTER(0x282258);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(29, RW(29) + 16); { F_00256258(c); return; }
}

void F_00282278(Ctx *c) { /* func_00282278 */
ENTER(0x282278);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(29, RW(29) + 16); { F_00256410(c); return; }
}

void F_00282298(Ctx *c) { /* func_00282298 */
ENTER(0x282298);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(29, RW(29) + 16); { F_002564C0(c); return; }
}

void F_002822B8(Ctx *c) { /* func_002822B8 */
ENTER(0x2822b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(16) == RD(0); SET32(2, RW(0) + 1000); if (t) goto L_00282360; }
{ int t = RD(5) != RD(2); SET64(6, RD(0) + RD(0)); if (t) goto L_002822E8; }
SET64(5, RD(0) + RD(0)); goto L_0028234C;
L_002822E8:;
c->f[12].u = RW(5);
SET64(31, 0x2822f4); c->f[12].f = (f32)(s32)c->f[12].u; F_0011F8E0(c);
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
L_0028234C:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002574E8(c); return; }
L_00282360:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00282370(Ctx *c) { /* func_00282370 */
ENTER(0x282370);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(5, (s64)(s32)0x530000);
SET32(5, RW(5) + 14352);
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

static void B_002823C8(Ctx *c, u32 entry) { /* func_002823C8 */
ENTER(entry);
switch (entry) { case 0x282400: goto L_00282400; }
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2823d8);  F_0024BEC0(c);
SET64(31, 0x2823e0);  F_0024EE58(c);
SET64(4, (s64)(s32)0x530000);
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + 14352);
SET64(31, 0x2823f4); SET32(6, RW(0) + 7); F_00272320(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
if (0) { L_00282400:; SET32(29, RW(29) + 16); }
}
void F_002823C8(Ctx *c) { B_002823C8(c, 0x2823c8); }
void F_00282400(Ctx *c) { B_002823C8(c, 0x282400); }

void F_00282408(Ctx *c) { /* func_00282408 */
ENTER(0x282408);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x282418);  F_0024EE70(c);
SET64(31, 0x282420);  F_0024C070(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00282430(Ctx *c) { /* func_00282430 */
ENTER(0x282430);
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
{ int t = RD(3) != RD(5); SET64(17, (s32)rd32(c, (RW(4) + 0))); if (t) goto L_002824A8; }
SET64(31, 0x282468); SET64(4, RD(17) + RD(0)); F_00255E48(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x282474); SET64(18, RD(2) + RD(0)); F_00255ED0(c);
if (RSD(18) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002824AC; }
if (RSD(2) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002824AC; }
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00285C70(c); return; }
L_002824A8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002824AC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002824C0(Ctx *c) { /* func_002824C0 */
ENTER(0x2824c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002824D8(c); return; }
}

void F_002824D8(Ctx *c) { /* func_002824D8 */
ENTER(0x2824d8);
SET32(29, RW(29) + -48);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2824f4); SET64(17, RD(4) + RD(0)); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00282560; }
SET64(31, 0x282504);  F_00283170(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_00282518; }
SET64(2, RD(0) + RD(0)); goto L_00282560;
L_00282518:;
SET64(31, 0x282520);  F_00282578(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28252c); SET64(5, RD(29) + RD(0)); F_00282580(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x282538); SET64(16, RD(2) + RD(0)); F_00282DD8(c);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x282544); SET64(4, RD(17) + RD(0)); F_00282EA8(c);
SET64(31, 0x28254c); SET64(4, RD(17) + RD(0)); F_002831A8(c);
SET64(31, 0x282554); SET64(4, RD(17) + RD(0)); F_00283288(c);
SET64(31, 0x28255c); SET64(4, RD(17) + RD(0)); F_00282430(c);
SET64(2, RD(16) + RD(0));
L_00282560:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00282578(Ctx *c) { /* func_00282578 */
ENTER(0x282578);
 return;
}

static void B_00282580(Ctx *c, u32 entry) { /* func_00282580 */
ENTER(entry);
switch (entry) { case 0x282600: goto L_00282600; }
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
SET64(31, 0x2825b0); SET64(17, (s32)rd32(c, (RW(16) + 8188))); F_00283048(c);
SET32(7, RW(29) + 8);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002825F4; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s32)rd32(c, (RW(17) + 60)));
SET64(6, RD(2) + RD(0));
{ u32 t = RW(3); SET64(31, 0x2825d4); wr32(c, (RW(18) + 0), RW(2)); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2825e0); SET64(5, (s32)rd32(c, (RW(29) + 8))); F_00283090(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002825F4; }
SET64(31, 0x2825f0);  F_002830B0(c);
SET64(2, RD(0) + RD(0));
L_002825F4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
L_00282600:;
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}
void F_00282580(Ctx *c) { B_00282580(c, 0x282580); }
void F_00282600(Ctx *c) { B_00282580(c, 0x282600); }

void F_00282610(Ctx *c) { /* func_00282610 */
ENTER(0x282610);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
wr64(c, (RW(29) + 0), RD(31));
SET64(7, RD(6) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x282630); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00282640(Ctx *c) { /* func_00282640 */
ENTER(0x282640);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
{ int t = RD(5) != RD(0); wr64(c, (RW(29) + 32), RD(31)); if (t) goto L_00282678; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 28)));
{ u32 t = RW(3); SET64(31, 0x28266c);  rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 16))); goto L_002826B8;
L_00282678:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x282684); SET64(7, RD(29) + RD(0)); F_002683C8(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(6, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x28269c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x2826b4); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 16)));
L_002826B8:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002826C8(Ctx *c) { /* func_002826C8 */
ENTER(0x2826c8);
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
SET64(31, 0x28270c); SET64(4, RD(19) + RD(0)); F_00282610(c);
SET64(6, (s64)(s32)0x10000);
SET64(16, (s32)rd32(c, (RW(29) + 4)));
SET64(6, RD(6) | 0x9000);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(5, RD(20) + RD(0));
SET64(2, RSD(18) < RSD(16));
if (RD(2) != 0) SET64(16, RD(18));
SET64(3, RSD(6) < RSD(16));
if (RD(3) != 0) SET64(16, RD(6));
SET64(31, 0x282738); SET64(6, RD(16) + RD(0)); F_00271EB0(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x282748); SET64(6, RD(29) + RD(0)); F_00282640(c);
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

static void B_00282780(Ctx *c, u32 entry) { /* func_00282780 */
ENTER(entry);
switch (entry) { case 0x282800: goto L_00282800; }
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
SET64(31, 0x2827d4); SET64(19, (s32)rd32(c, (RW(20) + 8188))); F_00282D88(c);
if (RD(2) != RD(0)) { SET64(2, (s64)(s32)0x280000); goto L_00282818; }
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x2827e8); SET64(4, RD(17) + RD(0)); F_002954B8(c);
SET64(18, RD(2) + RD(0));
{ int t = RSD(18) < 0; SET64(4, RD(20) + RD(0)); if (t) goto L_002829B8; }
SET64(31, 0x2827fc); SET32(5, RW(0) + 5); F_00294A30(c);
if (RD(2) != RD(0)) { SET64(5, (s32)rd32(c, (RW(29) + 4))); goto L_00282828; }
if (0) { L_00282800:; SET64(5, (s32)rd32(c, (RW(29) + 4))); }
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x282814); SET64(5, RD(18) + RD(0)); F_00295590(c);
SET64(2, (s64)(s32)0x280000);
L_00282818:;
SET32(2, RW(2) + 9928);
wr32(c, (RW(19) + 60), RW(2)); goto L_002829B8;
L_00282828:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x282834); SET32(6, RW(29) + 8); F_00295518(c);
SET64(16, RD(2) + RD(0));
{ int t = RSD(16) < 0; SET64(4, RD(17) + RD(0)); if (t) goto L_002829B8; }
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x282850); SET64(22, RD(0) + RD(0)); F_00295590(c);
SET32(3, RW(16) - RW(18));
SET64(2, (s32)rd32(c, (RW(19) + 56)));
SET32(3, RW(3) - RW(2));
{ int t = RSD(3) < 0; SET64(5, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_00282950; }
SET32(3, RSW(3) >> 5);
mul_s(c, 0, 3, RSW(3), RSW(5));
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(17, RW(2) << 1);
{ int t = RSD(17) <= 0; wr32(c, (RW(29) + 12), RW(0)); if (t) goto L_00282904; }
SET32(2, RW(5) << 3);
SET64(4, RD(23) + RD(0));
SET32(2, RW(2) + RW(5));
SET32(6, RW(29) + 12);
SET32(2, RW(2) << 1);
div_s(c, 0, RSW(21), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x28289c); goto L_002828A0; }
L_002828A0:;
SET64(3, c->lo.d[0]);
mul_s(c, 0, 3, RSW(3), RSW(5));
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
SET64(16, RD(2) + RD(0));
SET64(2, RSD(2) < RSD(17));
if (RD(2) == 0) SET64(16, RD(17));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2828cc); SET32(16, RW(17) - RW(16)); F_002829E8(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(22, RD(2) + RD(0));
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
div_s(c, 0, RSW(22), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x2828e8); goto L_002828EC; }
L_002828EC:;
SET64(3, (s32)rd32(c, (RW(19) + 56)));
SET64(4, c->lo.d[0]);
SET32(4, RW(4) << 5);
SET32(3, RW(3) + RW(4));
{ int t = RSD(16) > 0; wr32(c, (RW(19) + 56), RW(3)); if (t) goto L_0028292C; }
L_00282904:;
SET64(2, (s32)rd32(c, (RW(29) + 8)));
{ int t = RD(2) == RD(0); SET64(2, (s64)(s32)0x280000); if (t) goto L_0028292C; }
SET64(4, RD(23) + RD(0));
SET32(2, RW(2) + 9928);
SET64(5, RD(21) + RD(0));
wr32(c, (RW(19) + 60), RW(2));
SET64(31, 0x282928); SET32(6, RW(29) + 16); F_00257AF8(c);
wr32(c, (RW(29) + 12), RW(2));
L_0028292C:;
SET64(2, (s32)rd32(c, (RW(29) + 12)));
{ int t = RD(2) == RD(0); SET64(4, RD(20) + RD(0)); if (t) goto L_002829A8; }
SET32(5, RW(0) + 6);
SET64(31, 0x282944); SET64(6, RD(0) + RD(0)); F_00294868(c);
SET64(2, rd64(c, (RW(20) + 2496))); goto L_002829AC;
L_00282950:;
SET64(2, (s32)rd32(c, (RW(29) + 8)));
{ int t = RD(2) == RD(0); SET32(4, RW(0) - RW(3)); if (t) goto L_002829A8; }
SET32(2, RW(4) + 31);
SET64(3, RSD(4) < (s64)0);
if (RD(3) != 0) SET64(4, RD(2));
SET32(4, RSW(4) >> 5);
SET32(16, RW(4) << 5);
if (RSD(16) <= 0) { SET64(2, (s64)(s32)0x280000); goto L_002829A0; }
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(4, RD(20) + RD(0));
SET64(31, 0x282988); SET64(6, RD(16) + RD(0)); F_00282A70(c);
SET64(3, (s32)rd32(c, (RW(19) + 56)));
SET32(4, RW(16) - RW(2));
SET32(3, RW(3) - RW(2));
{ int t = RSD(4) > 0; wr32(c, (RW(19) + 56), RW(3)); if (t) goto L_002829A8; }
SET64(2, (s64)(s32)0x280000);
L_002829A0:;
SET32(2, RW(2) + 9928);
wr32(c, (RW(19) + 60), RW(2));
L_002829A8:;
SET64(2, rd64(c, (RW(20) + 2496)));
L_002829AC:;
wr32(c, (RW(30) + 0), RW(22));
SET64(2, RD(22) + RD(2));
wr64(c, (RW(20) + 2496), RD(2));
L_002829B8:;
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
void F_00282780(Ctx *c) { B_00282780(c, 0x282780); }
void F_00282800(Ctx *c) { B_00282780(c, 0x282800); }

void F_002829E8(Ctx *c) { /* func_002829E8 */
ENTER(0x2829e8);
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
wr32(c, (RW(19) + 0), RW(0)); goto L_00282A24;
L_00282A20:;
SET32(17, RW(17) + 18);
L_00282A24:;
SET64(2, RSD(17) < RSD(18));
if (RD(2) == RD(0)) { SET64(2, RD(17) + RD(0)); goto L_00282A50; }
SET64(4, RD(16) + RD(0));
SET32(16, RW(16) + 18);
SET32(5, RW(0) + 18);
SET64(31, 0x282a44); SET64(6, RD(29) + RD(0)); F_00257AF8(c);
{ int t = RD(2) == RD(0); SET64(2, RD(17) + RD(0)); if (t) { POLL(); goto L_00282A20; } }
wr32(c, (RW(19) + 0), RW(20));
L_00282A50:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_00282A70(Ctx *c) { /* func_00282A70 */
ENTER(0x282a70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET32(29, RW(29) + 16); { F_00257B38(c); return; }
}

void F_00282A90(Ctx *c) { /* func_00282A90 */
ENTER(0x282a90);
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
{ int t = RD(2) != RD(0); SET64(20, (s32)rd32(c, (RW(18) + 8188))); if (t) goto L_00282B30; }
SET64(31, 0x282ae0);  F_00257A60(c);
{ int t = RD(2) != RD(0); SET64(7, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_00282B14; }
SET64(31, 0x282af0); SET64(4, RD(18) + RD(0)); F_00287718(c);
SET64(7, RD(0) + RD(0));
SET64(2, RSD(2) < (s64)108);
SET64(6, RD(16) + RD(0));
SET64(4, RD(18) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00282B14; }
SET64(31, 0x282b10);  F_00282B50(c);
SET32(7, RW(2) - RW(17));
L_00282B14:;
SET64(3, rd64(c, (RW(18) + 2496)));
SET64(2, (s64)(s32)0x280000);
SET32(2, RW(2) + 10112);
wr32(c, (RW(19) + 0), RW(7));
SET64(3, RD(7) + RD(3));
wr32(c, (RW(20) + 60), RW(2));
wr64(c, (RW(18) + 2496), RD(3));
L_00282B30:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_00282B50(Ctx *c) { /* func_00282B50 */
ENTER(0x282b50);
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
{ int t = RD(2) == RD(0); wr64(c, (RW(29) + 88), RD(31)); if (t) goto L_00282C10; }
SET64(23, RD(3) + RD(0));
SET64(19, RD(0) + RD(0));
L_00282BB0:;
SET64(16, RD(17) + RD(0));
L_00282BB4:;
SET64(2, RD(16) < RD(18));
{ int t = RD(2) == RD(0);  if (t) goto L_00282BF8; }
SET64(2, (s8)rd8(c, (RW(16) + 0)));
if (RSD(2) >= 0) { SET32(16, RW(16) + 18); { POLL(); goto L_00282BB4; } }
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 18);
SET64(6, RD(29) + RD(0));
SET64(31, 0x282be0); SET32(19, RW(0) + 1); F_00257AF8(c);
{ int t = RD(2) == RD(0); SET64(2, RD(21) < RD(16)); if (t) goto L_00282BF8; }
{ int t = RD(2) == RD(0);  if (t) goto L_00282BF8; }
SET64(21, RD(16) + RD(0));
SET64(22, RD(17) + RD(0));
L_00282BF8:;
{ int t = RD(19) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_00282C3C; }
SET32(17, RW(17) + 2);
SET64(2, RD(17) < RD(23));
if (RD(2) != RD(0)) { SET64(19, RD(0) + RD(0)); { POLL(); goto L_00282BB0; } }
L_00282C10:;
{ int t = RD(19) == RD(0); SET64(2, RD(17) + RD(0)); if (t) goto L_00282C3C; }
if (RD(22) != RD(0)) { SET64(17, RD(22) + RD(0)); goto L_00282C38; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(30) + RD(0));
SET64(31, 0x282c30); SET64(5, RD(5) | 0xc0a); F_002879A8(c);
SET64(2, RD(20) + RD(0)); goto L_00282C3C;
L_00282C38:;
SET64(2, RD(17) + RD(0));
L_00282C3C:;
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

void F_00282C70(Ctx *c) { /* func_00282C70 */
ENTER(0x282c70);
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
SET64(31, 0x282cac); SET64(20, (s32)rd32(c, (RW(18) + 8188))); F_00287718(c);
SET64(2, RSD(2) < (s64)108);
{ int t = RD(2) != RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_00282CC8; }
SET64(2, (s64)(s32)0x280000);
SET32(2, RW(2) + 10896);
wr32(c, (RW(20) + 60), RW(2)); goto L_00282D60;
L_00282CC8:;
SET32(19, RW(19) + -18); goto L_00282CD4;
L_00282CD0:;
SET32(17, RW(17) + 18);
L_00282CD4:;
SET64(2, RSD(17) < RSD(19));
if (RD(2) == RD(0)) { SET64(2, rd64(c, (RW(18) + 2496))); goto L_00282D0C; }
SET64(5, (s64)(s32)0x4b0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 4368);
SET64(31, 0x282cf4); SET32(6, RW(0) + 18); F_00127180(c);
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 18); if (t) { POLL(); goto L_00282CD0; } }
SET64(2, (s64)(s32)0x280000);
SET32(2, RW(2) + 10896);
wr32(c, (RW(20) + 60), RW(2));
SET64(2, rd64(c, (RW(18) + 2496)));
L_00282D0C:;
SET64(4, RD(18) + RD(0));
wr32(c, (RW(21) + 0), RW(17));
SET64(5, RD(29) + RD(0));
SET64(2, RD(17) + RD(2));
SET32(6, RW(29) + 4);
SET64(31, 0x282d28); wr64(c, (RW(18) + 2496), RD(2)); F_00282D88(c);
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_00282D64; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(3) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
div_s(c, 0, RSW(17), RSW(2));
if (RD(2) == RD(0)) { rt_break(c, 0x282d48); goto L_00282D4C; }
L_00282D4C:;
SET64(3, (s32)rd32(c, (RW(20) + 56)));
SET64(4, c->lo.d[0]);
SET32(4, RW(4) << 5);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(20) + 56), RW(3));
L_00282D60:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00282D64:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_00282D88(Ctx *c) { /* func_00282D88 */
ENTER(0x282d88);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x282da4); SET64(17, RD(6) + RD(0)); F_00283CA8(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_00282DC4; }
SET64(4, (s32)rd32(c, (RW(3) + 12)));
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 0), RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
wr32(c, (RW(17) + 0), RW(3));
L_00282DC4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00282DD8(Ctx *c) { /* func_00282DD8 */
ENTER(0x282dd8);
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
SET64(31, 0x282e0c); SET64(5, RD(18) + RD(0)); F_00285838(c);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(19); SET64(5, RD(16) + RD(0)); if (t) goto L_00282E60; }
SET64(31, 0x282e20);  F_00285838(c);
if (RD(2) != RD(19)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00282E64; }
SET64(31, 0x282e30); SET64(4, RD(17) + RD(0)); F_00282E80(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00282E60; }
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(6, RW(0) + 1);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00285818(c); return; }
L_00282E60:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00282E64:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00282E80(Ctx *c) { /* func_00282E80 */
ENTER(0x282e80);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, 0x282e94); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_002556F8(c);
SET64(2, RD(2) ^ 0x3);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_00282EA8(Ctx *c) { /* func_00282EA8 */
ENTER(0x282ea8);
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
SET64(31, 0x282ee8); SET64(4, RD(18) + RD(0)); F_002556F8(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x282ef4); SET64(19, RD(2) + RD(0)); F_00256F88(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, (s64)(s32)0x530000); if (t) goto L_00282F04; }
wr32(c, (RW(2) + 14380), RW(16));
L_00282F04:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x282f10); SET32(5, RW(0) + 26); F_00294A30(c);
SET32(3, RW(0) + -1);
if (RD(2) == 0) SET64(16, RD(0));
{ int t = RD(16) == RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_00282F48; }
{ int t = RSD(16) >= 0; SET32(2, RW(0) + -2); if (t) goto L_00282F38; }
{ int t = RD(16) == RD(2);  if (t) goto L_00282F60; }
 goto L_00282F78;
L_00282F38:;
{ int t = RD(16) == RD(0); SET32(2, RW(19) + -4); if (t) goto L_00282F8C; }
 goto L_00282F78;
L_00282F48:;
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x282f54); SET64(5, RD(5) | 0xc08); F_002879A8(c);
SET32(2, RW(19) + -4); goto L_00282F8C;
L_00282F60:;
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x282f6c); SET64(5, RD(5) | 0xc09); F_002879A8(c);
SET32(2, RW(19) + -4); goto L_00282F8C;
L_00282F78:;
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(17) + RD(0));
SET64(31, 0x282f88); SET64(5, RD(5) | 0xc07); F_002879A8(c);
SET32(2, RW(19) + -4);
L_00282F8C:;
SET64(2, RD(2) < (u64)(s64)2);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 5); goto L_00282FA8; }
SET64(4, RD(21) + RD(0));
SET64(31, 0x282fa4); SET64(5, RD(0) + RD(0)); F_00297398(c);
SET32(2, RW(0) + 5);
L_00282FA8:;
{ int t = RD(19) == RD(2); SET64(4, RD(17) + RD(0)); if (t) goto L_00282FB8; }
{ int t = RD(16) == RD(0);  if (t) goto L_00282FC0; }
L_00282FB8:;
SET64(31, 0x282fc0); SET32(5, RW(0) + 1); F_00283188(c);
L_00282FC0:;
SET64(31, 0x282fc8); SET64(4, RD(17) + RD(0)); F_00283158(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00283020; }
if (RD(22) != RD(0)) { SET64(17, rd64(c, (RW(29) + 8))); goto L_00283024; }
SET64(31, 0x282fe4); SET64(4, RD(18) + RD(0)); F_00257538(c);
SET64(2, (s32)rd32(c, (RW(20) + 72)));
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00283020; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); { F_00283188(c); return; }
L_00283020:;
SET64(17, rd64(c, (RW(29) + 8)));
L_00283024:;
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

static void B_00283048(Ctx *c, u32 entry) { /* func_00283048 */
ENTER(entry);
switch (entry) { case 0x283068: goto L_00283068; }
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
SET64(6, RD(29) + RD(0));
SET64(31, 0x28306c); SET64(5, (s32)rd32(c, (RW(4) + 8196))); F_00284B88(c);
if (0) { L_00283068:; SET64(5, (s32)rd32(c, (RW(4) + 8196))); }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(17) + 0), RW(3));
wr32(c, (RW(16) + 0), RW(4));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}
void F_00283048(Ctx *c) { B_00283048(c, 0x283048); }
void F_00283068(Ctx *c) { B_00283048(c, 0x283068); }

void F_00283090(Ctx *c) { /* func_00283090 */
ENTER(0x283090);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2830a4); SET64(5, (s32)rd32(c, (RW(4) + 8196))); F_00284C60(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002830B0(Ctx *c) { /* func_002830B0 */
ENTER(0x2830b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET32(2, RW(16) + 8180);
wr64(c, (RW(29) + 32), RD(31));
SET64(6, RD(29) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x2830d8); SET64(17, (s32)rd32(c, (RW(2) + 8))); F_00285160(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(5, RW(29) + 4);
SET32(6, RW(29) + 8);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00283144; }
SET64(31, 0x2830f4);  F_002858E8(c);
SET64(4, rd64(c, (RW(16) + 2480)));
SET64(31, 0x283100); SET64(5, (s32)rd32(c, (RW(29) + 4))); F_00285AA0(c);
SET64(4, rd64(c, (RW(16) + 2488)));
wr64(c, (RW(16) + 2480), RD(2));
SET64(31, 0x283110); SET64(5, (s32)rd32(c, (RW(29) + 8))); F_00285AA0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
wr64(c, (RW(16) + 2488), RD(2));
SET32(5, RW(29) + 4);
SET64(31, 0x283124); SET32(6, RW(29) + 8); F_002858E8(c);
SET64(4, rd64(c, (RW(16) + 2504)));
SET64(31, 0x283130); SET64(5, (s32)rd32(c, (RW(29) + 4))); F_00285AA0(c);
SET64(4, rd64(c, (RW(16) + 2512)));
wr64(c, (RW(16) + 2504), RD(2));
SET64(31, 0x283140); SET64(5, (s32)rd32(c, (RW(29) + 8))); F_00285AA0(c);
wr64(c, (RW(16) + 2512), RD(2));
L_00283144:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00283158(Ctx *c) { /* func_00283158 */
ENTER(0x283158);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8196)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00285878(c); return; }
}

void F_00283170(Ctx *c) { /* func_00283170 */
ENTER(0x283170);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8200)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00285878(c); return; }
}

void F_00283188(Ctx *c) { /* func_00283188 */
ENTER(0x283188);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 8200)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00285858(c); return; }
}

static void B_002831A8(Ctx *c, u32 entry) { /* func_002831A8 */
ENTER(entry);
switch (entry) { case 0x2831d8: goto L_002831D8; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2831c0); SET64(16, RD(4) + RD(0)); F_00283CA8(c);
SET64(17, RD(2) + RD(0));
if (RD(17) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028324C; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028324C; }
L_002831D8:;
SET64(2, (s32)rd32(c, (RW(16) + 8188)));
SET64(16, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2831e8); SET64(4, RD(16) + RD(0)); F_00283260(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00283248; }
SET64(31, 0x2831f8);  F_00255ED0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x283204); wr32(c, (RW(17) + 16), RW(2)); F_00255E48(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x283210); wr32(c, (RW(17) + 20), RW(2)); F_00255F58(c);
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
L_00283248:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028324C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}
void F_002831A8(Ctx *c) { B_002831A8(c, 0x2831a8); }
void F_002831D8(Ctx *c) { B_002831A8(c, 0x2831d8); }

void F_00283260(Ctx *c) { /* func_00283260 */
ENTER(0x283260);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283270);  F_002556F8(c);
SET64(2, RD(2) < (u64)(s64)2);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_00283288(Ctx *c) { /* func_00283288 */
ENTER(0x283288);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 27);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(17, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, 0x2832a8); SET64(16, (s32)rd32(c, (RW(17) + 0))); F_00294A30(c);
SET64(3, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 68)));
SET64(5, RD(3) + RD(0));
{ int t = RD(2) == RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_002832D8; }
wr32(c, (RW(17) + 68), RW(3));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00256788(c); return; }
L_002832D8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002832F0(Ctx *c) { /* func_002832F0 */
ENTER(0x2832f0);
SET32(29, RW(29) + -48);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(17) + 13608);
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28331c); SET32(19, RW(17) + 13600); F_00294A30(c);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_00283428; }
SET64(31, 0x283330); wr32(c, (RW(17) + 8188), RW(19)); F_00283448(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00283428; }
SET64(31, 0x283340);  F_00283600(c);
SET64(5, (s64)(s32)0xff000000);
SET64(18, RD(2) + RD(0));
SET64(4, RD(0) + RD(0));
{ int t = RD(18) != RD(0); SET64(5, RD(5) | 0xc04); if (t) goto L_00283370; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_002879A8(c); return; }
L_00283370:;
SET64(6, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x283380); SET64(5, (s32)rd32(c, (RW(16) + 0))); F_00266B28(c);
SET64(4, RD(0) + RD(0));
SET64(9, RD(2) + RD(0));
SET64(2, (s64)(s32)0x280000);
SET64(5, (s64)(s32)0x280000);
SET64(3, (s64)(s32)0x280000);
SET64(6, (s64)(s32)0x280000);
SET64(7, (s64)(s32)0x280000);
SET32(11, RW(5) + 8824);
SET64(5, RD(9) + RD(0));
SET32(8, RW(17) + 13780);
SET32(10, RW(2) + 8760);
SET32(3, RW(3) + 8792);
SET32(6, RW(6) + 8856);
{ int t = RD(9) != RD(0); SET32(7, RW(7) + 8888); if (t) goto L_002833E0; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0xc05);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_002879A8(c); return; }
L_002833E0:;
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
SET64(31, 0x283410); wr32(c, (RW(8) + 16), RW(6)); F_00255470(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28341c); SET32(5, RW(0) + 1); F_00283A70(c);
SET64(31, 0x283424); SET64(4, RD(17) + RD(0)); F_00283680(c);
SET64(2, RD(0) + RD(0));
L_00283428:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00283448(Ctx *c) { /* func_00283448 */
ENTER(0x283448);
SET32(29, RW(29) + -96);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 80), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 64), RD(16));
SET32(8, RW(2) + 14352);
wr64(c, (RW(29) + 72), RD(17));
SET64(7, RD(5) + RD(0));
wr64(c, (RW(29) + 88), RD(31));
SET64(5, (s64)(s32)0xff000000);
SET64(2, (s32)rd32(c, (RW(8) + 8)));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0xc06); if (t) goto L_00283488; }
SET64(2, (s32)rd32(c, (RW(8) + 24)));
{ int t = RD(2) != RD(0); SET64(2, (s64)(s32)0x280000); if (t) goto L_00283498; }
L_00283488:;
SET64(31, 0x283490); SET64(4, RD(0) + RD(0)); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 64))); goto L_002835EC;
L_00283498:;
SET32(6, RW(0) + -1);
SET32(3, RW(0) + 1);
SET32(2, RW(2) + 9928);
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
SET64(31, 0x283524); wr32(c, (RW(7) + 72), RW(0)); F_00294A30(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 64);
wr64(c, (RW(29) + 0), RD(2));
SET64(31, 0x283538); wr64(c, (RW(29) + 8), RD(17)); F_00294A30(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 65);
wr64(c, (RW(29) + 16), RD(2));
SET64(31, 0x28354c); wr64(c, (RW(29) + 24), RD(17)); F_00294A30(c);
SET32(5, RW(0) + 66);
SET64(4, RD(18) + RD(0));
wr64(c, (RW(29) + 32), RD(2));
SET64(31, 0x283560); wr64(c, (RW(29) + 40), RD(17)); F_00294A30(c);
SET64(4, RD(16) + RD(0));
wr64(c, (RW(29) + 48), RD(2));
SET64(31, 0x283570); wr64(c, (RW(29) + 56), RD(17)); F_002971F8(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x28357c); SET32(5, RW(0) + 72); F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x283588); SET64(5, RD(2) + RD(0)); F_00297318(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x283594); SET64(5, RD(29) + RD(0)); F_00297320(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2835a0); SET32(5, RW(29) + 16); F_00297338(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2835ac); SET32(5, RW(29) + 32); F_00297350(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2835b8); SET32(5, RW(29) + 48); F_00297368(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2835c4); SET32(5, RW(0) + 62); F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2835d0); SET64(5, RD(2) + RD(0)); F_00297380(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2835dc); SET32(5, RW(0) + 61); F_00294A30(c);
SET64(31, 0x2835e4); SET64(4, RD(2) + RD(0)); F_0029C638(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 64)));
L_002835EC:;
SET64(17, rd64(c, (RW(29) + 72)));
SET64(18, rd64(c, (RW(29) + 80)));
SET64(31, rd64(c, (RW(29) + 88)));
SET32(29, RW(29) + 96); return;
}

void F_00283600(Ctx *c) { /* func_00283600 */
ENTER(0x283600);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x283614); SET64(16, RD(4) + RD(0)); F_00292D58(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_00283638; }
SET64(6, (s32)rd32(c, (RW(16) + 20)));
SET64(4, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x283630); SET64(5, (s32)rd32(c, (RW(16) + 24))); F_00254B58(c);
SET64(16, RD(2) + RD(0)); goto L_00283644;
L_00283638:;
SET64(31, 0x283640);  F_00283670(c);
SET64(16, RD(2) + RD(0));
L_00283644:;
{ int t = RD(16) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028365C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x283658); SET64(5, RD(0) + RD(0)); F_00256D78(c);
SET64(2, RD(16) + RD(0));
L_0028365C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00283670(Ctx *c) { /* func_00283670 */
ENTER(0x283670);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + -1352))); return;
}

void F_00283680(Ctx *c) { /* func_00283680 */
ENTER(0x283680);
SET64(5, (s64)(s32)0x280000);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 2);
SET32(5, RW(5) + 14016);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2836a0); SET64(16, RD(4) + RD(0)); F_00295E50(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 15);
SET32(6, RW(0) + 2);
SET32(29, RW(29) + 16); { F_00294868(c); return; }
}

void F_002836C0(Ctx *c) { /* func_002836C0 */
ENTER(0x2836c0);
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
SET64(31, 0x2836fc); SET64(18, (s32)rd32(c, (RW(17) + 0))); F_00295A48(c);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 4); if (t) goto L_00283758; }
SET64(2, (s32)rd32(c, (RW(16) + 72)));
if (RD(2) != RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 36))); goto L_00283748; }
SET64(4, RD(19) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x283724); SET32(7, RW(29) + 4); F_00283780(c);
SET64(4, (s32)rd32(c, (RW(17) + 36)));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RSD(4) < RSD(3));
if (RD(2) == RD(0)) { wr32(c, (RW(20) + 0), RW(4)); goto L_0028374C; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(4, RD(3) + RD(0));
wr32(c, (RW(17) + 36), RW(3));
wr32(c, (RW(17) + 40), RW(2));
L_00283748:;
wr32(c, (RW(20) + 0), RW(4));
L_0028374C:;
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(17) + 40)));
wr32(c, (RW(21) + 0), RW(3));
L_00283758:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

static void B_00283780(Ctx *c, u32 entry) { /* func_00283780 */
ENTER(entry);
switch (entry) { case 0x283800: goto L_00283800; }
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
SET64(31, 0x2837b0); SET64(18, RD(6) + RD(0)); F_002556F8(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 48);
SET32(6, RW(29) + 52);
SET64(3, (s64)(s32)0x410000);
SET64(31, 0x2837c8); wr32(c, (RW(3) + -1896), RW(2)); F_00255A78(c);
SET64(3, (s32)rd32(c, (RW(29) + 52)));
SET64(2, (s32)rd32(c, (RW(29) + 48)));
wr64(c, (RW(29) + 8), RD(3));
SET64(31, 0x2837dc); wr64(c, (RW(29) + 0), RD(2)); F_0029C800(c);
SET64(31, 0x2837e4); wr64(c, (RW(29) + 16), RD(2)); F_0029C970(c);
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 16);
SET64(4, RD(17) + RD(0));
SET32(7, RW(29) + 32);
SET64(31, 0x2837fc); wr64(c, (RW(29) + 24), RD(2)); F_002973F8(c);
SET64(2, (s32)rd32(c, (RW(29) + 32)));
L_00283800:;
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
void F_00283780(Ctx *c) { B_00283780(c, 0x283780); }
void F_00283800(Ctx *c) { B_00283780(c, 0x283800); }

void F_00283828(Ctx *c) { /* func_00283828 */
ENTER(0x283828);
SET32(29, RW(29) + -32);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(17) + 8188)));
SET64(16, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(16) == RD(0); SET64(18, (s32)rd32(c, (RW(3) + 4))); if (t) goto L_002838E8; }
SET64(2, (s64)(s32)0x530000);
SET32(7, RW(2) + 14352);
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
SET64(31, 0x283898); wr32(c, (RW(7) + 24), RW(4)); F_00292D58(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_002838B8; }
SET64(31, 0x2838ac); SET64(4, RD(16) + RD(0)); F_00283900(c);
SET64(16, RD(2) + RD(0)); goto L_002838CC;
L_002838B8:;
SET64(31, 0x2838c0);  F_00283958(c);
SET64(31, 0x2838c8); SET64(4, RD(16) + RD(0)); F_00283920(c);
SET64(16, RD(2) + RD(0));
L_002838CC:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x2838dc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, 0x2838e4);  F_0029C790(c);
SET64(2, RD(16) + RD(0));
L_002838E8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00283900(Ctx *c) { /* func_00283900 */
ENTER(0x283900);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283910);  F_00254FE0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_00283920(Ctx *c) { /* func_00283920 */
ENTER(0x283920);
SET64(3, (s64)(s32)0x410000);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(3) + -1352), RW(4)); return;
}

void F_00283930(Ctx *c) { /* func_00283930 */
ENTER(0x283930);
SET64(2, RD(0) + RD(0)); return;
}

void F_00283938(Ctx *c) { /* func_00283938 */
ENTER(0x283938);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x283948); SET64(5, RD(0) + RD(0)); F_00283A70(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_00283958(Ctx *c) { /* func_00283958 */
ENTER(0x283958);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8188)));
SET64(31, 0x28396c); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_00255608(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00283980(Ctx *c) { /* func_00283980 */
ENTER(0x283980);
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
{ int t = RD(3) == RD(2); SET64(18, (s32)rd32(c, (RW(19) + 0))); if (t) goto L_002839D4; }
if (RD(3) == RD(0)) { wr32(c, (RW(19) + 48), RW(0)); goto L_002839D0; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2); SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_002839E8; }
SET64(2, RD(0) + RD(0)); goto L_00283A54;
L_002839D0:;
SET64(5, RD(0) + RD(0));
L_002839D4:;
SET64(31, 0x2839dc);  F_00283AC0(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_00283A50;
L_002839E8:;
SET64(31, 0x2839f0); SET64(4, RD(18) + RD(0)); F_00283260(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_00283A50; }
SET64(31, 0x283a00); SET64(4, RD(18) + RD(0)); F_00255ED0(c);
SET64(4, RD(20) + RD(0));
SET64(17, RD(2) + RD(0));
SET32(5, RW(29) + 16);
SET64(31, 0x283a14); SET64(6, RD(17) + RD(0)); F_00283B48(c);
SET64(2, (s32)rd32(c, (RW(19) + 48)));
SET64(16, (s32)rd32(c, (RW(29) + 16)));
SET64(4, RD(18) + RD(0));
SET32(16, RW(16) + RW(2));
SET64(31, 0x283a2c); SET64(5, RD(16) + RD(0)); F_002575C8(c);
SET32(4, RW(20) + 4120);
SET32(16, RW(16) - RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 16)));
wr32(c, (RW(19) + 48), RW(16));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 0), RD(2));
SET64(31, 0x283a4c); wr64(c, (RW(29) + 8), RD(17)); F_002973A0(c);
SET64(16, rd64(c, (RW(29) + 32)));
L_00283A50:;
SET64(2, RD(0) + RD(0));
L_00283A54:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

static void B_00283A70(Ctx *c, u32 entry) { /* func_00283A70 */
ENTER(entry);
switch (entry) { case 0x283aa0: goto L_00283AA0; }
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(2) + RD(0));
SET32(5, RW(4) + 4120);
SET64(3, (s32)rd32(c, (RW(4) + 8188)));
wr32(c, (RW(3) + 44), RW(2));
{ int t = RD(2) != RD(0); SET64(7, (s32)rd32(c, (RW(3) + 0))); if (t) goto L_00283AA4; }
SET64(3, (s32)rd32(c, (RW(4) + 80)));
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00283AB8; }
if (0) { L_00283AA0:; SET64(31, rd64(c, (RW(29) + 0))); }
L_00283AA4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(7) + RD(0));
SET32(29, RW(29) + 16); { F_00283B08(c); return; }
L_00283AB8:;
SET32(29, RW(29) + 16); return;
}
void F_00283A70(Ctx *c) { B_00283A70(c, 0x283a70); }
void F_00283AA0(Ctx *c) { B_00283A70(c, 0x283aa0); }

void F_00283AC0(Ctx *c) { /* func_00283AC0 */
ENTER(0x283ac0);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 8188)));
SET32(4, RW(4) + 4120);
SET64(5, RD(4) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, (s32)rd32(c, (RW(3) + 0))); if (t) goto L_00283AF4; }
SET64(3, (s32)rd32(c, (RW(3) + 44)));
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00283B00; }
L_00283AF4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00283B08(c); return; }
L_00283B00:;
SET32(29, RW(29) + 16); return;
}

void F_00283B08(Ctx *c) { /* func_00283B08 */
ENTER(0x283b08);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x283b28); SET64(5, RD(17) + RD(0)); F_00257278(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00297390(c); return; }
}

void F_00283B48(Ctx *c) { /* func_00283B48 */
ENTER(0x283b48);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
SET32(6, RW(29) + 4);
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x283b6c); SET64(5, RD(29) + RD(0)); F_00296330(c);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x283b7c); SET64(6, (s32)rd32(c, (RW(29) + 4))); F_002784E8(c);
wr32(c, (RW(17) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00283B98(Ctx *c) { /* func_00283B98 */
ENTER(0x283b98);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xc03);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00283BB8(Ctx *c) { /* func_00283BB8 */
ENTER(0x283bb8);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xc03);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00283BD8(Ctx *c) { /* func_00283BD8 */
ENTER(0x283bd8);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xc03);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

static void B_00283BF8(Ctx *c, u32 entry) { /* func_00283BF8 */
ENTER(entry);
switch (entry) { case 0x283c00: goto L_00283C00; }
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
L_00283C00:;
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xc03);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}
void F_00283BF8(Ctx *c) { B_00283BF8(c, 0x283bf8); }
void F_00283C00(Ctx *c) { B_00283BF8(c, 0x283c00); }

void F_00283C18(Ctx *c) { /* func_00283C18 */
ENTER(0x283c18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x283c30); SET64(16, RD(4) + RD(0)); F_00283CA8(c);
SET64(6, RD(2) + RD(0));
if (RD(6) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00283C94; }
SET64(16, (s32)rd32(c, (RW(16) + 8188)));
SET64(2, RD(0) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 52)));
{ int t = RD(3) != RD(0); SET64(17, (s32)rd32(c, (RW(16) + 0))); if (t) goto L_00283C90; }
SET64(3, (s32)rd32(c, (RW(6) + 0)));
{ int t = RD(3) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00283C90; }
SET64(7, (s32)rd32(c, (RW(6) + 20)));
SET64(5, (s32)rd32(c, (RW(6) + 12)));
SET64(31, 0x283c6c); SET64(6, (s32)rd32(c, (RW(6) + 16))); F_0024C150(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x283c78); SET64(5, RD(0) + RD(0)); F_00257738(c);
SET32(2, RW(0) + 1);
SET64(3, (s64)(s32)0x280000);
wr32(c, (RW(16) + 52), RW(2));
SET32(3, RW(3) + 11376);
SET64(2, RD(0) + RD(0));
wr32(c, (RW(16) + 60), RW(3));
L_00283C90:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00283C94:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00283CA8(Ctx *c) { /* func_00283CA8 */
ENTER(0x283ca8);
SET64(3, (s32)rd32(c, (RW(4) + 13864)));
SET64(2, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 8188)));
{ int t = RD(3) == RD(0); SET32(5, RW(3) + 3340); if (t) goto L_00283CD0; }
SET64(2, (s32)rd32(c, (RW(4) + 64)));
SET64(3, RD(0) + RD(0));
SET64(3, RSD(3) < RSD(2));
SET64(2, RD(0) + RD(0));
if (RD(3) == 0) SET64(2, RD(5));
L_00283CD0:;
 return;
}

void F_00283CD8(Ctx *c) { /* func_00283CD8 */
ENTER(0x283cd8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x283cfc); SET64(18, RD(6) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x1a1); if (t) goto L_00283D28; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00283D28:;
SET64(31, 0x283d30); SET32(5, RW(0) + 6); F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00283D50; }
SET64(2, (s32)rd32(c, (RW(16) + 8460)));
SET64(3, (s32)rd32(c, (RW(2) + 4)));
{ u32 t = RW(3); SET64(31, 0x283d50);  rt_call(c, t); }
L_00283D50:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00283D68(Ctx *c) { /* func_00283D68 */
ENTER(0x283d68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x283d84); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00283DA8; }
SET64(4, RD(0) + RD(0));
SET64(31, 0x283d9c); SET64(5, RD(5) | 0x1a2); F_002879A8(c);
SET64(2, RD(0) + RD(0)); goto L_00283DCC;
L_00283DA8:;
SET64(31, 0x283db0); SET32(5, RW(0) + 6); F_00294A30(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00283DCC; }
SET64(3, (s32)rd32(c, (RW(16) + 8460)));
SET64(2, (s32)rd32(c, (RW(3) + 8)));
{ u32 t = RW(2); SET64(31, 0x283dcc);  rt_call(c, t); }
L_00283DCC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00283DE0(Ctx *c) { /* func_00283DE0 */
ENTER(0x283de0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x283dfc); SET64(17, RD(5) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00283E20; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x1a3);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00283E20:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x283e2c); SET32(5, RW(0) + 6); F_00294A30(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_00283E48; }
SET64(2, (s32)rd32(c, (RW(16) + 8460)));
SET64(3, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(3); SET64(31, 0x283e48);  rt_call(c, t); }
L_00283E48:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00283E60(Ctx *c) { /* func_00283E60 */
ENTER(0x283e60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x283e74); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x1a4); if (t) goto L_00283E98; }
SET64(31, 0x283e8c);  F_002879A8(c);
SET64(2, RD(0) + RD(0)); goto L_00283EBC;
L_00283E98:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x283ea4); SET32(5, RW(0) + 6); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00283EBC; }
SET64(3, (s32)rd32(c, (RW(16) + 8460)));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
{ u32 t = RW(2); SET64(31, 0x283ebc);  rt_call(c, t); }
L_00283EBC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00283ED0(Ctx *c) { /* func_00283ED0 */
ENTER(0x283ed0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x283ef0); SET64(16, RD(4) + RD(0)); F_00294A30(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00283F14; }
SET64(2, (s32)rd32(c, (RW(16) + 8460)));
SET64(2, (s32)rd32(c, (RW(2) + 20)));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00283F10; }
{ u32 t = RW(2); SET64(31, 0x283f10); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_00283F10:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00283F14:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00283F28(Ctx *c) { /* func_00283F28 */
ENTER(0x283f28);
SET64(2, RD(0) + RD(0)); return;
}

void F_00283F30(Ctx *c) { /* func_00283F30 */
ENTER(0x283f30);
SET64(2, RD(0) + RD(0)); return;
}

void F_00283F38(Ctx *c) { /* func_00283F38 */
ENTER(0x283f38);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x283f50); SET64(16, RD(4) + RD(0)); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00283F68; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00283F78(c); return; }
L_00283F68:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00283F78(Ctx *c) { /* func_00283F78 */
ENTER(0x283f78);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x283f8c); SET64(16, RD(4) + RD(0)); F_00283FA8(c);
SET64(31, 0x283f94); SET64(4, RD(16) + RD(0)); F_00284018(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00283FA8(Ctx *c) { /* func_00283FA8 */
ENTER(0x283fa8);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 7);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x283fc8); SET32(17, RW(0) + 1); F_00297190(c);
{ int t = RD(2) == RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_00284000; }
SET64(31, 0x283fd8); SET64(5, (s32)rd32(c, (RW(16) + 8468))); F_00285838(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 7);
{ int t = RD(2) != RD(17); SET32(6, RW(0) + 1); if (t) goto L_00284000; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00297178(c); return; }
L_00284000:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00284018(Ctx *c) { /* func_00284018 */
ENTER(0x284018);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 7);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x284038); SET32(17, RW(0) + 1); F_002971C0(c);
{ int t = RD(2) == RD(17); SET64(4, RD(16) + RD(0)); if (t) goto L_00284070; }
SET64(31, 0x284048); SET64(5, (s32)rd32(c, (RW(16) + 8468))); F_00285878(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 7);
{ int t = RD(2) != RD(17); SET32(6, RW(0) + 1); if (t) goto L_00284070; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002971A8(c); return; }
L_00284070:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00284088(Ctx *c) { /* func_00284088 */
ENTER(0x284088);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2840a0); SET64(16, RD(4) + RD(0)); F_00294A30(c);
SET32(3, RW(16) + 13780);
{ int t = RD(2) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_002840B8; }
SET64(31, 0x2840b4); wr32(c, (RW(16) + 8460), RW(3)); F_002840C8(c);
SET64(2, RD(0) + RD(0));
L_002840B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002840C8(Ctx *c) { /* func_002840C8 */
ENTER(0x2840c8);
 return;
}

void F_002840D0(Ctx *c) { /* func_002840D0 */
ENTER(0x2840d0);
SET64(2, RD(0) + RD(0)); return;
}

void F_002840D8(Ctx *c) { /* func_002840D8 */
ENTER(0x2840d8);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2840f0); SET64(16, RD(4) + RD(0)); F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 3);
SET32(6, RW(0) + 5);
SET64(7, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_00284110; }
SET64(31, 0x284110);  F_00297128(c);
L_00284110:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00284120(Ctx *c) { /* func_00284120 */
ENTER(0x284120);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x284138); SET64(16, RD(4) + RD(0)); F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 3);
SET32(6, RW(0) + 6);
SET64(7, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_00284158; }
SET64(31, 0x284158);  F_00297128(c);
L_00284158:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00284168(Ctx *c) { /* func_00284168 */
ENTER(0x284168);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x284180); SET64(16, RD(4) + RD(0)); F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 3);
SET32(6, RW(0) + 7);
SET64(7, RD(0) + RD(0));
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_002841A0; }
SET64(31, 0x2841a0);  F_00297128(c);
L_002841A0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

static void B_002841B0(Ctx *c, u32 entry) { /* func_002841B0 */
ENTER(entry);
switch (entry) { case 0x284200: goto L_00284200; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2841d0); SET64(16, RD(4) + RD(0)); F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET64(7, RD(17) + RD(0));
SET32(5, RW(0) + 3);
SET32(6, RW(0) + 8);
{ int t = RD(2) == RD(0); SET64(8, RD(0) + RD(0)); if (t) goto L_002841F0; }
SET64(31, 0x2841f0);  F_00297128(c);
L_002841F0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
if (0) { L_00284200:; SET32(29, RW(29) + 32); }
}
void F_002841B0(Ctx *c) { B_002841B0(c, 0x2841b0); }
void F_00284200(Ctx *c) { B_002841B0(c, 0x284200); }

void F_00284208(Ctx *c) { /* func_00284208 */
ENTER(0x284208);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xa01);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00284228(Ctx *c) { /* func_00284228 */
ENTER(0x284228);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xa01);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00284248(Ctx *c) { /* func_00284248 */
ENTER(0x284248);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xa01);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00284268(Ctx *c) { /* func_00284268 */
ENTER(0x284268);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xa01);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00284288(Ctx *c) { /* func_00284288 */
ENTER(0x284288);
SET64(2, RD(0) + RD(0)); return;
}

void F_00284290(Ctx *c) { /* func_00284290 */
ENTER(0x284290);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002859A0(c); return; }
}

void F_002842A8(Ctx *c) { /* func_002842A8 */
ENTER(0x2842a8);
 return;
}

void F_002842B0(Ctx *c) { /* func_002842B0 */
ENTER(0x2842b0);
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
SET64(31, 0x2842e8); SET64(6, (s32)rd32(c, (RW(16) + 4))); F_002843E8(c);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s32)rd32(c, (RW(16) + 40)));
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(6, RD(17) + RD(0));
div_s(c, 0, RSW(3), RSW(2));
SET64(7, RD(0) + RD(0));
if (RD(2) == RD(0)) { rt_break(c, 0x284308); goto L_0028430C; }
L_0028430C:;
SET64(8, c->hi.d[0]);
SET64(31, 0x284318);  F_00284428(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(6, RD(17) + RD(0));
SET32(7, RW(0) + 1);
{ int t = RD(2) != RD(0); SET32(8, RW(0) + 2048); if (t) goto L_002843CC; }
SET64(31, 0x284338);  F_00284428(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_002843D0; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(7, RW(0) + 2);
SET64(8, RD(0) + RD(0));
SET64(31, 0x284358); SET64(6, RD(17) + RD(0)); F_00284428(c);
SET64(4, RD(19) + RD(0));
SET32(8, RW(0) + 3);
SET64(7, RD(17) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_002843CC; }
SET64(31, 0x284374); SET64(6, RD(29) + RD(0)); F_00284628(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x284388); SET32(7, RW(0) + 4); F_002846E0(c);
SET64(4, RD(19) + RD(0));
SET64(6, RD(29) + RD(0));
SET32(8, RW(0) + 5);
SET64(5, RD(18) + RD(0));
SET64(31, 0x2843a0); SET64(7, RD(17) + RD(0)); F_00284628(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x2843b4); SET32(7, RW(0) + 6); F_002846E0(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x2843c8); SET32(7, RW(0) + 7); F_00284808(c);
SET64(2, RD(0) + RD(0));
L_002843CC:;
SET64(16, rd64(c, (RW(29) + 32)));
L_002843D0:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

static void B_002843E8(Ctx *c, u32 entry) { /* func_002843E8 */
ENTER(entry);
switch (entry) { case 0x284420: goto L_00284420; }
SET64(9, RD(4) + RD(0));
SET64(8, RD(5) + RD(0));
SET64(7, RD(0) + RD(0));
L_002843F8:;
SET32(2, RW(7) << 2);
SET32(7, RW(7) + 1);
SET32(3, RW(2) + RW(8));
SET32(2, RW(2) + RW(9));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(7) < (s64)8);
wr32(c, (RW(2) + 0), RW(6));
{ int t = RD(5) != RD(0); SET32(6, RW(6) + RW(4)); if (t) { POLL(); goto L_002843F8; } }
 return;
if (0) { L_00284420:;  }
}
void F_002843E8(Ctx *c) { B_002843E8(c, 0x2843e8); }
void F_00284420(Ctx *c) { B_002843E8(c, 0x284420); }

void F_00284428(Ctx *c) { /* func_00284428 */
ENTER(0x284428);
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
{ int t = RD(3) != RD(0); SET64(6, RD(3) + RD(0)); if (t) goto L_00284488; }
SET64(19, RD(0) + RD(0));
SET32(18, RW(0) + 4); goto L_002844B4;
L_00284488:;
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(19, RW(0) + 1);
SET64(31, 0x284498); SET32(18, RW(0) + 5); F_002844E8(c);
SET64(6, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET32(7, RW(0) + 1); if (t) goto L_002844C8; }
SET64(31, 0x2844b4);  F_00284A08(c);
L_002844B4:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2844c4); SET64(6, RD(19) + RD(0)); F_00284858(c);
SET64(2, RD(0) + RD(0));
L_002844C8:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_002844E8(Ctx *c) { /* func_002844E8 */
ENTER(0x2844e8);
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
{ int t = RSD(2) > 0; wr32(c, (RW(16) + 12), RW(2)); if (t) goto L_00284530; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00284530:;
wr32(c, (RW(16) + 16), RW(7));
SET64(4, RD(3) + RD(0));
wr32(c, (RW(16) + 20), RW(0));
SET64(31, 0x284544); SET64(5, RD(2) + RD(0)); F_00266B28(c);
SET64(4, RD(0) + RD(0));
SET64(5, (s64)(s32)0xff000000);
wr32(c, (RW(16) + 4), RW(2));
{ int t = RD(2) != RD(0); SET64(5, RD(5) | 0x40a); if (t) goto L_00284568; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00284568:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00284580(Ctx *c) { /* func_00284580 */
ENTER(0x284580);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x284598); SET64(16, RD(4) + RD(0)); F_002845C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2845a4); SET32(5, RW(0) + 1); F_002845C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 2);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002845C0(c); return; }
}

void F_002845C0(Ctx *c) { /* func_002845C0 */
ENTER(0x2845c0);
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
{ int t = RD(3) != RD(6); SET32(16, RW(4) + 16); if (t) goto L_00284618; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00284618; }
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(3); SET64(31, 0x284614);  rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_00284618:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00284628(Ctx *c) { /* func_00284628 */
ENTER(0x284628);
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
SET64(31, 0x28467c); SET64(4, RD(16) + RD(0)); F_00284858(c);
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
L_002846A8:;
SET32(2, RW(2) + -1);
wr32(c, (RW(19) + 0), RW(0));
{ int t = RSD(2) >= 0; SET32(19, RW(19) + -136); if (t) { POLL(); goto L_002846A8; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002846E0(Ctx *c) { /* func_002846E0 */
ENTER(0x2846e0);
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
SET64(31, 0x284730); SET64(6, RD(0) < RD(6)); F_00284858(c);
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

void F_00284780(Ctx *c) { /* func_00284780 */
ENTER(0x284780);
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
{ int t = RD(9) != RD(0); SET64(6, (s32)rd32(c, (RW(4) + 0))); if (t) goto L_002847D8; }
div_s(c, 0, RSW(2), RSW(10));
if (RD(10) == RD(0)) { rt_break(c, 0x2847d0); goto L_002847D4; }
L_002847D4:;
SET64(2, c->lo.d[0]);
L_002847D8:;
div_s(c, 0, RSW(2), RSW(5));
SET32(2, RW(6) + RW(2));
wr32(c, (RW(4) + 12), RW(11));
wr32(c, (RW(4) + 16), RW(10));
wr32(c, (RW(4) + 8), RW(8));
wr32(c, (RW(4) + 20), RW(6));
wr32(c, (RW(4) + 24), RW(2));
if (RD(5) == RD(0)) { rt_break(c, 0x2847f8); goto L_002847FC; }
L_002847FC:;
SET64(3, c->lo.d[0]);
wr32(c, (RW(4) + 28), RW(3)); return;
}

void F_00284808(Ctx *c) { /* func_00284808 */
ENTER(0x284808);
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
SET64(31, 0x284840); SET32(16, RW(16) + 16); F_00284858(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00284878(c); return; }
}

void F_00284858(Ctx *c) { /* func_00284858 */
ENTER(0x284858);
SET32(2, RW(0) + 9);
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(4) + 80), RW(2));
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 76), RW(2)); return;
}

void F_00284878(Ctx *c) { /* func_00284878 */
ENTER(0x284878);
SET32(2, RW(0) + 2);
L_00284880:;
SET32(2, RW(2) + -1);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
{ int t = RSD(2) >= 0; SET32(4, RW(4) + 16); if (t) { POLL(); goto L_00284880; } }
 return;
}

void F_002848A8(Ctx *c) { /* func_002848A8 */
ENTER(0x2848a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2848c8); SET64(4, RD(17) + RD(0)); F_00284950(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET32(5, RW(0) + 1); if (t) goto L_002848F0; }
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0x408);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_002848F0:;
SET64(31, 0x2848f8); SET64(4, RD(16) + RD(0)); F_002971D8(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 2);
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_00284938; }
SET64(31, 0x284910);  F_002971D8(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 3);
{ int t = RD(2) != RD(0); SET32(6, RW(0) + 1); if (t) goto L_00284938; }
SET64(31, 0x284928);  F_002971D8(c);
SET32(3, RW(0) + 2);
SET64(6, RD(0) + RD(0));
if (RD(2) != 0) SET64(6, RD(3));
SET64(4, RD(16) + RD(0));
L_00284938:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00284998(c); return; }
}

void F_00284950(Ctx *c) { /* func_00284950 */
ENTER(0x284950);
SET64(3, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_0028498C; }
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0028498C; }
SET64(3, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_0028498C; }
SET64(3, (s32)rd32(c, (RW(4) + 12)));
{ int t = RSD(3) <= 0;  if (t) goto L_0028498C; }
SET64(3, (s32)rd32(c, (RW(4) + 20)));
if (RSD(3) <= 0) { SET64(2, RD(0) + RD(0)); goto L_0028498C; }
L_0028498C:;
 return;
}

void F_00284998(Ctx *c) { /* func_00284998 */
ENTER(0x284998);
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
{ int t = RD(2) == RD(7); SET32(3, RW(3) + 16); if (t) goto L_002849E8; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x409);
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_002849E8:;
SET64(7, (s32)rd32(c, (RW(8) + 4)));
SET64(4, RD(3) + RD(0));
SET64(31, 0x2849f8); SET64(7, RD(0) < RD(7)); F_00284A08(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00284A08(Ctx *c) { /* func_00284A08 */
ENTER(0x284a08);
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
SET64(31, 0x284a38); SET64(19, RD(5) + RD(0)); F_00287C60(c);
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
SET64(31, 0x284a74); sdr(c, 5, (RW(16) + 16)); F_00284AA8(c);
wr32(c, (RW(16) + 32), RW(0));
wr32(c, (RW(16) + 36), RW(0));
SET64(31, 0x284a84); SET32(4, RW(16) + 40); F_002934C0(c);
SET64(31, 0x284a8c); SET64(4, RD(29) + RD(0)); F_00287C78(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_00284AA8(Ctx *c) { /* func_00284AA8 */
ENTER(0x284aa8);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 0), RW(0)); return;
}

void F_00284AB8(Ctx *c) { /* func_00284AB8 */
ENTER(0x284ab8);
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

void F_00284B00(Ctx *c) { /* func_00284B00 */
ENTER(0x284b00);
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

void F_00284B48(Ctx *c) { /* func_00284B48 */
ENTER(0x284b48);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 4892)));
wr32(c, (RW(6) + 0), RW(3)); return;
}

void F_00284B70(Ctx *c) { /* func_00284B70 */
ENTER(0x284b70);
SET32(29, RW(29) + -16);
SET64(7, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00284BA0(c); return; }
}

void F_00284B88(Ctx *c) { /* func_00284B88 */
ENTER(0x284b88);
SET32(29, RW(29) + -16);
SET32(7, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00284BA0(c); return; }
}

static void B_00284BA0(Ctx *c, u32 entry) { /* func_00284BA0 */
ENTER(entry);
switch (entry) { case 0x284c00: goto L_00284C00; }
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
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(4) + 20))); if (t) goto L_00284C00; }
{ int t = RD(4) != RD(0); SET64(6, RD(29) + RD(0)); if (t) goto L_00284C08; }
L_00284C00:;
SET64(2, RD(0) + RD(0)); goto L_00284C34;
L_00284C08:;
SET64(31, 0x284c10); SET32(7, RW(29) + 16); F_00284E58(c);
SET64(2, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(6, (s32)rd32(c, (RW(29) + 16)));
SET64(3, (s32)rd32(c, (RW(29) + 20)));
wr32(c, (RW(16) + 0), RW(4));
wr32(c, (RW(16) + 12), RW(3));
wr32(c, (RW(16) + 4), RW(5));
wr32(c, (RW(16) + 8), RW(6));
L_00284C34:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}
void F_00284BA0(Ctx *c) { B_00284BA0(c, 0x284ba0); }
void F_00284C00(Ctx *c) { B_00284BA0(c, 0x284c00); }

void F_00284C48(Ctx *c) { /* func_00284C48 */
ENTER(0x284c48);
SET32(29, RW(29) + -16);
SET64(7, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00284C78(c); return; }
}

void F_00284C60(Ctx *c) { /* func_00284C60 */
ENTER(0x284c60);
SET32(29, RW(29) + -16);
SET32(7, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00284C78(c); return; }
}

void F_00284C78(Ctx *c) { /* func_00284C78 */
ENTER(0x284c78);
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
{ int t = RD(20) == RD(0); SET64(17, (s32)rd32(c, (RW(18) + 4))); if (t) goto L_00284D98; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00284D98; }
{ int t = RD(17) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00284D00; }
SET64(16, rd64(c, (RW(29) + 0))); goto L_00284D9C;
L_00284D00:;
SET64(31, 0x284d08); SET64(5, RD(19) + RD(0)); F_00284F50(c);
SET64(3, RD(2) + RD(0));
SET64(2, RSD(3) < RSD(20));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_00284D50; }
SET32(16, RW(20) - RW(3));
SET64(4, RD(17) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x284d2c); SET64(6, RD(16) + RD(0)); F_00284F50(c);
SET64(2, RSD(2) < RSD(16));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_00284D50; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(22) + RD(0));
SET64(31, 0x284d48); SET64(5, RD(5) | 0x40b); F_002879A8(c);
SET64(23, RD(2) + RD(0));
SET32(2, RW(0) + 1);
L_00284D50:;
if (RD(19) != RD(2)) { SET64(2, (s32)rd32(c, (RW(18) + 32))); goto L_00284D80; }
if (RD(21) != RD(19)) { SET64(2, (s32)rd32(c, (RW(18) + 36))); goto L_00284D6C; }
SET64(31, 0x284d68); SET64(4, RD(18) + RD(0)); F_00284DC8(c);
SET64(2, (s32)rd32(c, (RW(18) + 36)));
L_00284D6C:;
{ int t = RSD(2) < 0; SET32(2, RW(2) + RW(20)); if (t) goto L_00284D8C; }
wr32(c, (RW(18) + 36), RW(2)); goto L_00284D8C;
L_00284D80:;
{ int t = RSD(2) < 0; SET32(2, RW(2) + RW(20)); if (t) goto L_00284D8C; }
wr32(c, (RW(18) + 32), RW(2));
L_00284D8C:;
SET32(3, RW(0) + 1);
SET64(2, RD(23) + RD(0));
wr32(c, (RW(22) + 68), RW(3));
L_00284D98:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00284D9C:;
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

void F_00284DC8(Ctx *c) { /* func_00284DC8 */
ENTER(0x284dc8);
SET32(29, RW(29) + -48);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET32(16, RW(2) + 24);
wr64(c, (RW(29) + 40), RD(31));
SET32(5, RW(0) + 1);
SET64(6, RD(29) + RD(0));
SET32(7, RW(29) + 16);
SET64(31, 0x284df0); SET64(4, (s32)rd32(c, (RW(2) + 4))); F_00284E58(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(3) < RD(4));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(29) + 16))); goto L_00284E1C; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(4) + RW(2));
SET64(2, RD(3) < RD(2));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_00284E48; }
SET64(4, (s32)rd32(c, (RW(29) + 16)));
L_00284E1C:;
SET64(2, RD(3) < RD(4));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_00284E40; }
SET64(2, (s32)rd32(c, (RW(29) + 20)));
SET32(2, RW(4) + RW(2));
SET64(2, RD(3) < RD(2));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_00284E48; }
wr32(c, (RW(16) + 4), RW(0));
L_00284E40:;
wr32(c, (RW(16) + 0), RW(0));
SET64(16, rd64(c, (RW(29) + 32)));
L_00284E48:;
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00284E58(Ctx *c) { /* func_00284E58 */
ENTER(0x284e58);
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
{ u32 t = RW(2); SET64(31, 0x284e90); SET64(19, RD(6) + RD(0)); rt_call(c, t); }
SET64(6, (s64)(s32)0x7fff0000);
SET64(20, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
SET64(6, RD(6) | 0xffff);
{ u32 t = RW(3); SET64(31, 0x284eb4); SET64(7, RD(19) + RD(0)); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 4)));
SET64(6, (s64)(s32)0x7fff0000);
SET64(5, RD(18) + RD(0));
SET64(6, RD(6) | 0xffff);
SET64(2, RSD(2) < RSD(20));
{ int t = RD(2) == RD(0); SET64(7, RD(17) + RD(0)); if (t) goto L_00284F08; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 24)));
{ u32 t = RW(3); SET64(31, 0x284ee4);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(6, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(5) + 28)));
{ u32 t = RW(2); SET64(31, 0x284efc); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0))); goto L_00284F14;
L_00284F08:;
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 0), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
L_00284F14:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 28)));
{ u32 t = RW(2); SET64(31, 0x284f28); SET64(6, RD(19) + RD(0)); rt_call(c, t); }
SET64(2, RD(20) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00284F50(Ctx *c) { /* func_00284F50 */
ENTER(0x284f50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) < (u64)(s64)1);
wr64(c, (RW(29) + 32), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x284f78); SET64(7, RD(29) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x284f90); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00284FA8(Ctx *c) { /* func_00284FA8 */
ENTER(0x284fa8);
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
SET64(31, 0x284fe8); SET64(18, RD(7) + RD(0)); F_00287C60(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(29) + RD(0));
wr32(c, (RW(17) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x285000); wr32(c, (RW(18) + 0), RW(2)); F_00287C78(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00285018(Ctx *c) { /* func_00285018 */
ENTER(0x285018);
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
SET64(31, 0x285058); SET32(16, RW(16) + 4912); F_00287C60(c);
wr32(c, (RW(16) + 4), RW(17));
SET64(4, RD(29) + RD(0));
SET64(31, 0x285068); wr32(c, (RW(16) + 0), RW(18)); F_00287C78(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00285080(Ctx *c) { /* func_00285080 */
ENTER(0x285080);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 4900))); return;
}

void F_002850A0(Ctx *c) { /* func_002850A0 */
ENTER(0x2850a0);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 4924))); return;
}

void F_002850C0(Ctx *c) { /* func_002850C0 */
ENTER(0x2850c0);
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
SET64(31, 0x2850f8); SET32(16, RW(3) + 4888); F_00287C60(c);
SET64(17, (s32)rd32(c, (RW(16) + 32)));
{ int t = RD(17) != RD(0); SET64(18, (s32)rd32(c, (RW(16) + 36))); if (t) goto L_00285128; }
{ int t = RD(18) == RD(0); SET64(2, (s64)(s32)0x7fff0000); if (t) goto L_0028512C; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(4, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x285124); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(17, RW(18) + RW(2));
L_00285128:;
SET64(2, (s64)(s32)0x7fff0000);
L_0028512C:;
SET64(3, RSD(17) < (s64)0);
SET64(2, RD(2) | 0xffff);
SET64(4, RD(29) + RD(0));
SET64(31, 0x285140); if (RD(3) != 0) SET64(17, RD(2)); F_00287C78(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(2, RD(17) + RD(0));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00285160(Ctx *c) { /* func_00285160 */
ENTER(0x285160);
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
{ int t = RD(3) != RD(0); SET64(5, RD(5) | 0x401); if (t) goto L_002851A8; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_002851A8:;
SET64(3, (s32)rd32(c, (RW(7) + 20)));
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
wr32(c, (RW(6) + 0), RW(3));
SET32(29, RW(29) + 16); return;
}

void F_002851C0(Ctx *c) { /* func_002851C0 */
ENTER(0x2851c0);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET32(4, RW(4) + 4888);
SET64(2, (s32)rd32(c, (RW(4) + 36)));
{ int t = RSD(2) < 0; SET32(3, RW(2) + RW(6)); if (t) goto L_002851EC; }
wr32(c, (RW(4) + 36), RW(3));
L_002851EC:;
 return;
}

void F_002851F8(Ctx *c) { /* func_002851F8 */
ENTER(0x2851f8);
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
{ int t = RD(3) != RD(0); SET64(21, RD(6) + RD(0)); if (t) goto L_00285260; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x285258); SET64(5, RD(5) | 0x401); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_00285374;
L_00285260:;
SET32(16, RW(7) + 16);
SET64(31, 0x28526c); SET64(4, RD(29) + RD(0)); F_00287C60(c);
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
SET64(31, 0x2852a4); SET64(16, (s32)rd32(c, (RW(16) + 36))); F_00287C78(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(19) + RW(20));
SET64(2, RSD(17) < RSD(2));
wr32(c, (RW(21) + 8), RW(18));
wr32(c, (RW(21) + 0), RW(3));
wr32(c, (RW(21) + 4), RW(23));
wr32(c, (RW(21) + 36), RW(17));
wr32(c, (RW(21) + 40), RW(19));
{ int t = RD(2) != RD(0); rd128(c, (RW(29) + 16) & ~15u, &c->r[5]); if (t) goto L_002852E0; }
wr32(c, (RW(21) + 32), RW(0));
wr32(c, (RW(21) + 12), RW(0));
wr32(c, (RW(21) + 20), RW(0));
wr32(c, (RW(21) + 24), RW(0)); goto L_00285324;
L_002852E0:;
SET64(2, RSD(22) < RSD(16));
if (RD(2) == RD(0)) { SET32(2, RW(20) - RW(22)); goto L_00285330; }
SET32(2, RW(16) - RW(22));
SET64(3, RSD(23) < (s64)9);
wr32(c, (RW(21) + 12), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(30) + RW(22)); if (t) goto L_00285308; }
SET32(2, RW(22) << 1);
SET32(2, RW(30) + RW(2));
L_00285308:;
wr32(c, (RW(21) + 20), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(5) + RW(22)); if (t) goto L_0028531C; }
SET32(2, RW(22) << 1);
SET32(2, RW(5) + RW(2));
L_0028531C:;
wr32(c, (RW(21) + 24), RW(2));
wr32(c, (RW(21) + 32), RW(0));
L_00285324:;
wr32(c, (RW(21) + 16), RW(0));
wr32(c, (RW(21) + 28), RW(0)); goto L_0028536C;
L_00285330:;
SET64(3, RSD(23) < (s64)9);
wr32(c, (RW(21) + 12), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(30) + RW(22)); if (t) goto L_00285348; }
SET32(2, RW(22) << 1);
SET32(2, RW(30) + RW(2));
L_00285348:;
wr32(c, (RW(21) + 20), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(5) + RW(22)); if (t) goto L_0028535C; }
SET32(2, RW(22) << 1);
SET32(2, RW(5) + RW(2));
L_0028535C:;
wr32(c, (RW(21) + 32), RW(5));
wr32(c, (RW(21) + 24), RW(2));
wr32(c, (RW(21) + 16), RW(16));
wr32(c, (RW(21) + 28), RW(30));
L_0028536C:;
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 32)));
L_00285374:;
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

void F_002853A0(Ctx *c) { /* func_002853A0 */
ENTER(0x2853a0);
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
{ int t = RD(17) == RD(0); SET32(6, RW(6) + RW(3)); if (t) goto L_00285478; }
SET64(2, (s32)rd32(c, (RW(6) + 4)));
if (RD(2) != RD(0)) { SET32(16, RW(6) + 16); goto L_00285408; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x285400); SET64(5, RD(5) | 0x401); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0028547C;
L_00285408:;
SET64(31, 0x285410); SET64(4, RD(29) + RD(0)); F_00287C60(c);
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET64(5, (s64)(s32)0xff000000);
SET64(6, (s32)rd32(c, (RW(16) + 28)));
SET64(5, RD(5) | 0x406);
SET32(2, RW(2) + RW(17));
SET64(3, RSD(2) < RSD(6));
SET32(7, RW(2) - RW(6));
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 32), RW(2)); if (t) goto L_0028543C; }
wr32(c, (RW(16) + 32), RW(7));
L_0028543C:;
SET64(2, (s32)rd32(c, (RW(16) + 40)));
SET64(3, (s32)rd32(c, (RW(16) + 44)));
SET32(2, RW(2) + RW(17));
SET32(3, RW(3) + RW(6));
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 40), RW(2)); if (t) goto L_00285464; }
SET64(31, 0x285460);  F_002879A8(c);
SET64(19, RD(2) + RD(0));
L_00285464:;
SET32(2, RW(0) + 1);
SET64(4, RD(29) + RD(0));
SET64(31, 0x285474); wr32(c, (RW(18) + 68), RW(2)); F_00287C78(c);
SET64(2, RD(19) + RD(0));
L_00285478:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0028547C:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_00285498(Ctx *c) { /* func_00285498 */
ENTER(0x285498);
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
{ int t = RD(3) != RD(0); SET64(21, RD(6) + RD(0)); if (t) goto L_00285500; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x2854f8); SET64(5, RD(5) | 0x401); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0028561C;
L_00285500:;
SET32(16, RW(7) + 16);
SET64(31, 0x28550c); SET64(4, RD(29) + RD(0)); F_00287C60(c);
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
SET64(31, 0x285544); SET64(16, (s32)rd32(c, (RW(16) + 36))); F_00287C78(c);
SET64(2, RSD(19) < RSD(17));
wr32(c, (RW(21) + 0), RW(20));
wr32(c, (RW(21) + 8), RW(18));
wr32(c, (RW(21) + 4), RW(22));
wr32(c, (RW(21) + 36), RW(17));
{ int t = RD(2) != RD(0); wr32(c, (RW(21) + 40), RW(19)); if (t) goto L_00285578; }
wr32(c, (RW(21) + 32), RW(0));
wr32(c, (RW(21) + 12), RW(0));
wr32(c, (RW(21) + 20), RW(0));
wr32(c, (RW(21) + 24), RW(0)); goto L_002855C0;
L_00285578:;
SET64(3, (s32)rd32(c, (RW(29) + 8)));
SET64(2, RSD(16) < RSD(3));
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(29) + 4))); goto L_002855D0; }
SET32(2, RW(3) - RW(16));
SET64(3, RSD(22) < (s64)9);
wr32(c, (RW(21) + 12), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(23) + RW(16)); if (t) goto L_002855A4; }
SET32(2, RW(16) << 1);
SET32(2, RW(23) + RW(2));
L_002855A4:;
wr32(c, (RW(21) + 20), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(30) + RW(16)); if (t) goto L_002855B8; }
SET32(2, RW(16) << 1);
SET32(2, RW(30) + RW(2));
L_002855B8:;
wr32(c, (RW(21) + 24), RW(2));
wr32(c, (RW(21) + 32), RW(0));
L_002855C0:;
wr32(c, (RW(21) + 16), RW(0));
wr32(c, (RW(21) + 28), RW(0)); goto L_00285614;
L_002855D0:;
SET32(2, RW(3) - RW(16));
SET64(3, RSD(22) < (s64)9);
wr32(c, (RW(21) + 12), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(23) + RW(16)); if (t) goto L_002855EC; }
SET32(2, RW(16) << 1);
SET32(2, RW(23) + RW(2));
L_002855EC:;
wr32(c, (RW(21) + 20), RW(2));
{ int t = RD(3) != RD(0); SET32(2, RW(30) + RW(16)); if (t) goto L_00285600; }
SET32(2, RW(16) << 1);
SET32(2, RW(30) + RW(2));
L_00285600:;
wr32(c, (RW(21) + 32), RW(30));
wr32(c, (RW(21) + 24), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 8)));
wr32(c, (RW(21) + 28), RW(23));
wr32(c, (RW(21) + 16), RW(2));
L_00285614:;
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
L_0028561C:;
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

void F_00285648(Ctx *c) { /* func_00285648 */
ENTER(0x285648);
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
{ int t = RD(17) == RD(0); SET32(6, RW(6) + RW(3)); if (t) goto L_0028571C; }
SET64(2, (s32)rd32(c, (RW(6) + 4)));
if (RD(2) != RD(0)) { SET32(16, RW(6) + 16); goto L_002856B0; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x2856a8); SET64(5, RD(5) | 0x401); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00285720;
L_002856B0:;
SET64(31, 0x2856b8); SET64(4, RD(29) + RD(0)); F_00287C60(c);
SET64(4, RD(18) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 36)));
SET64(5, (s64)(s32)0xff000000);
SET64(3, (s32)rd32(c, (RW(16) + 28)));
SET64(5, RD(5) | 0x407);
SET32(2, RW(2) + RW(17));
SET32(6, RW(2) - RW(3));
SET64(3, RSD(2) < RSD(3));
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 36), RW(2)); if (t) goto L_002856E4; }
wr32(c, (RW(16) + 36), RW(6));
L_002856E4:;
SET64(2, (s32)rd32(c, (RW(16) + 44)));
SET64(3, (s32)rd32(c, (RW(16) + 40)));
SET32(2, RW(2) + RW(17));
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 44), RW(2)); if (t) goto L_00285708; }
SET64(31, 0x285704);  F_002879A8(c);
SET64(19, RD(2) + RD(0));
L_00285708:;
SET32(2, RW(0) + 1);
SET64(4, RD(29) + RD(0));
SET64(31, 0x285718); wr32(c, (RW(18) + 68), RW(2)); F_00287C78(c);
SET64(2, RD(19) + RD(0));
L_0028571C:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00285720:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_00285738(Ctx *c) { /* func_00285738 */
ENTER(0x285738);
SET64(2, RD(0) + RD(0)); return;
}

void F_00285740(Ctx *c) { /* func_00285740 */
ENTER(0x285740);
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 68), RW(2));
SET64(2, RD(0) + RD(0)); return;
}

void F_00285750(Ctx *c) { /* func_00285750 */
ENTER(0x285750);
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
{ int t = RD(3) != RD(0); SET32(6, RW(0) + 11); if (t) goto L_00285798; }
SET64(5, (s32)rd32(c, (RW(8) + 76)));
SET64(8, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00297128(c); return; }
L_00285798:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_002857A8(Ctx *c) { /* func_002857A8 */
ENTER(0x2857a8);
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
{ int t = RD(3) != RD(0); SET32(6, RW(0) + 12); if (t) goto L_002857F8; }
SET64(5, (s32)rd32(c, (RW(8) + 76)));
SET64(31, 0x2857f4); SET64(8, RD(0) + RD(0)); F_00297128(c);
SET64(5, RD(2) + RD(0));
L_002857F8:;
SET32(3, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 8)));
wr32(c, (RW(16) + 68), RW(3));
SET64(2, RD(5) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00285818(Ctx *c) { /* func_00285818 */
ENTER(0x285818);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
wr32(c, (RW(4) + 4880), RW(6)); return;
}

void F_00285838(Ctx *c) { /* func_00285838 */
ENTER(0x285838);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 4880))); return;
}

void F_00285858(Ctx *c) { /* func_00285858 */
ENTER(0x285858);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
wr32(c, (RW(4) + 4884), RW(6)); return;
}

void F_00285878(Ctx *c) { /* func_00285878 */
ENTER(0x285878);
SET32(2, RW(5) << 3);
SET32(2, RW(2) - RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(4, RW(4) + RW(2));
SET64(2, (s32)rd32(c, (RW(4) + 4884))); return;
}

void F_00285898(Ctx *c) { /* func_00285898 */
ENTER(0x285898);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2858a8); SET64(6, RD(29) + RD(0)); F_00284B88(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(2, (s32)rd32(c, (RW(29) + 12)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(2, RW(3) + RW(2));
SET32(29, RW(29) + 48); return;
}

void F_002858C0(Ctx *c) { /* func_002858C0 */
ENTER(0x2858c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2858d0); SET64(6, RD(29) + RD(0)); F_00284B70(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(2, (s32)rd32(c, (RW(29) + 12)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(2, RW(3) + RW(2));
SET32(29, RW(29) + 48); return;
}

void F_002858E8(Ctx *c) { /* func_002858E8 */
ENTER(0x2858e8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28590c); SET64(18, RD(6) + RD(0)); F_00285A30(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
{ int t = RD(2) == RD(0); SET32(6, RW(0) + 1); if (t) goto L_00285940; }
SET64(31, 0x285924);  F_002675B0(c);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(5, RD(0) + RD(0));
SET64(31, 0x285938); SET32(6, RW(0) + 1); F_002675B0(c);
wr32(c, (RW(18) + 0), RW(2)); goto L_00285988;
L_00285940:;
SET64(31, 0x285948); SET64(4, RD(16) + RD(0)); F_00285A68(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00285980; }
SET64(31, 0x285958);  F_002669B8(c);
SET32(5, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(17) + 0), RW(2));
SET64(2, (s32)rd32(c, (RW(3) + 36)));
{ u32 t = RW(2); SET64(31, 0x285970); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(3) - RW(2));
wr32(c, (RW(18) + 0), RW(3)); goto L_00285988;
L_00285980:;
wr32(c, (RW(17) + 0), RW(0));
wr32(c, (RW(18) + 0), RW(0));
L_00285988:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002859A0(Ctx *c) { /* func_002859A0 */
ENTER(0x2859a0);
SET32(29, RW(29) + -32);
SET64(6, RD(0) + RD(0));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2859bc); SET32(5, RW(0) + 8); F_00266B28(c);
SET64(16, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
{ u32 t = RW(2); SET64(31, 0x2859d0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x530000);
wr32(c, (RW(3) + 14384), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(3); SET64(31, 0x2859e8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET32(5, RW(0) + 8);
SET64(31, 0x2859f4); SET64(4, RD(29) + RD(0)); F_00266110(c);
SET64(16, RD(2) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
{ u32 t = RW(2); SET64(31, 0x285a08); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s64)(s32)0x530000);
wr32(c, (RW(3) + 14388), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(3); SET64(31, 0x285a20); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00285A30(Ctx *c) { /* func_00285A30 */
ENTER(0x285a30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
{ u32 t = RW(2); SET64(31, 0x285a48);  rt_call(c, t); }
SET64(3, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(3) + 14384)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) ^ RD(4));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_00285A68(Ctx *c) { /* func_00285A68 */
ENTER(0x285a68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 16)));
{ u32 t = RW(2); SET64(31, 0x285a80);  rt_call(c, t); }
SET64(3, (s64)(s32)0x530000);
SET64(4, (s32)rd32(c, (RW(3) + 14388)));
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) ^ RD(4));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_00285AA0(Ctx *c) { /* func_00285AA0 */
ENTER(0x285aa0);
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

void F_00285AD8(Ctx *c) { /* func_00285AD8 */
ENTER(0x285ad8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x285aec); SET64(16, RD(4) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(16) + RD(0));
SET32(6, RW(0) + 1);
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x161); if (t) goto L_00285B18; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00285B18:;
SET64(31, 0x285b20); SET32(5, RW(0) + 49); F_00294868(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00285B38(Ctx *c) { /* func_00285B38 */
ENTER(0x285b38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x285b48); SET32(5, RW(0) + 49); F_00294A30(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void F_00285B58(Ctx *c) { /* func_00285B58 */
ENTER(0x285b58);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 49);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x285b70); SET64(16, RD(4) + RD(0)); F_00294A30(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 56); if (t) goto L_00285B8C; }
SET64(31, 0x285b84);  F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00285B94; }
L_00285B8C:;
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
L_00285B94:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00285BA0(Ctx *c) { /* func_00285BA0 */
ENTER(0x285ba0);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 49);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x285bb8); SET64(16, RD(4) + RD(0)); F_00294A30(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 57); if (t) goto L_00285BD4; }
SET64(31, 0x285bcc);  F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00285BDC; }
L_00285BD4:;
SET32(2, RW(0) + 1);
SET64(16, rd64(c, (RW(29) + 0)));
L_00285BDC:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00285BE8(Ctx *c) { /* func_00285BE8 */
ENTER(0x285be8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET32(16, RW(18) + 3368);
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x285c10); SET64(17, RD(5) + RD(0)); F_00287C60(c);
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
SET64(31, 0x285c58); wr32(c, (RW(16) + 360), RW(3)); F_00287C78(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00285C70(Ctx *c) { /* func_00285C70 */
ENTER(0x285c70);
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
SET64(31, 0x285ca8); SET64(18, RD(6) + RD(0)); F_00287C60(c);
SET64(7, (s32)rd32(c, (RW(16) + 500)));
SET64(3, (s32)rd32(c, (RW(16) + 504)));
SET64(4, RD(29) + RD(0));
SET32(6, RW(7) + 31);
SET64(5, RSD(7) < (s64)0);
SET64(2, RD(7) + RD(0));
SET32(3, RW(7) - RW(3));
if (RD(5) != 0) SET64(2, RD(6));
SET64(3, RSD(3) < (s64)32);
{ int t = RD(3) == RD(0); SET32(2, RSW(2) >> 5); if (t) goto L_00285CFC; }
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
L_00285CFC:;
SET64(31, 0x285d04);  F_00287C78(c);
SET64(2, RD(20) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_00285D28(Ctx *c) { /* func_00285D28 */
ENTER(0x285d28);
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
SET64(31, 0x285d5c); SET64(17, RD(6) + RD(0)); F_00287C60(c);
SET64(3, (s32)rd32(c, (RW(16) + 504)));
SET64(2, (s32)rd32(c, (RW(16) + 500)));
SET32(2, RW(2) - RW(3));
{ int t = RSD(2) > 0; SET64(4, RD(29) + RD(0)); if (t) goto L_00285D80; }
SET32(2, RW(0) + -1);
SET64(20, RD(0) + RD(0));
wr32(c, (RW(19) + 0), RW(2)); goto L_00285DC8;
L_00285D80:;
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
L_00285DC8:;
SET64(31, 0x285dd0);  F_00287C78(c);
SET64(2, RD(20) + RD(0));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_00285DF8(Ctx *c) { /* func_00285DF8 */
ENTER(0x285df8);
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
SET64(31, 0x285e38); SET64(23, RD(7) + RD(0)); F_00287BC8(c);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00285E58; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x285e4c); SET64(5, RD(5) | 0x162); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_00285F24;
L_00285E58:;
SET64(22, (s32)rd32(c, (RW(16) + 3688)));
SET32(17, RW(16) + 3368);
wr32(c, (RW(23) + 0), RW(0));
SET64(4, RD(16) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x285e74); SET64(6, RD(20) + RD(0)); F_00295618(c);
SET64(3, (s32)rd32(c, (RW(17) + 356)));
SET64(30, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_00285F20; }
SET64(4, (s32)rd32(c, (RW(20) + 0)));
SET32(3, RW(0) + 1);
{ int t = RD(4) == RD(3); SET64(4, RD(29) + RD(0)); if (t) goto L_00285F20; }
SET64(31, 0x285e9c); SET32(21, RW(16) + 3380); F_00287C60(c);
SET64(16, (s32)rd32(c, (RW(17) + 360)));
SET64(17, RD(0) + RD(0));
L_00285EA8:;
SET64(2, RSD(17) < (s64)32);
{ int t = RD(2) == RD(0); SET32(17, RW(17) + 1); if (t) goto L_00285EFC; }
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
SET64(31, 0x285ee8); SET64(4, (s32)rd32(c, (RW(2) + 352))); F_002784E8(c);
SET64(18, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET64(2, RSD(2) < RSD(18));
if (RD(2) != RD(0)) { SET32(16, RW(16) + -1); { POLL(); goto L_00285EA8; } }
L_00285EFC:;
wr32(c, (RW(23) + 0), RW(16));
SET64(4, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET32(2, RW(2) - RW(18));
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(0));
SET64(31, 0x285f1c); wr32(c, (RW(19) + 0), RW(2)); F_00287C78(c);
SET64(2, RD(30) + RD(0));
L_00285F20:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00285F24:;
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

void F_00285F50(Ctx *c) { /* func_00285F50 */
ENTER(0x285f50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x285f78); SET64(4, RD(29) + RD(0)); F_00287C60(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x285f88); SET64(6, RD(18) + RD(0)); F_00285FF0(c);
SET64(5, (s32)rd32(c, (RW(18) + 8)));
{ int t = RD(5) != RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_00285FB0; }
SET64(2, (s32)rd32(c, (RW(18) + 12)));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00285FB4; }
SET64(3, (s32)rd32(c, (RW(18) + 16)));
SET32(2, RW(0) + -1);
{ int t = RD(3) != RD(2);  if (t) goto L_00285FB8; }
L_00285FB0:;
SET32(2, RW(0) + 1);
L_00285FB4:;
wr8(c, (RW(18) + 0), (u8)RW(2));
L_00285FB8:;
{ int t = RD(5) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_00285FCC; }
SET64(2, (s32)rd32(c, (RW(18) + 12)));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00285FD0; }
L_00285FCC:;
wr8(c, (RW(18) + 1), (u8)RW(2));
L_00285FD0:;
SET64(31, 0x285fd8);  F_00287C78(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00285FF0(Ctx *c) { /* func_00285FF0 */
ENTER(0x285ff0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x286018); SET64(4, RD(16) + RD(0)); F_002860A0(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x286028); SET64(6, RD(16) + RD(0)); F_00286100(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_00286088; }
SET64(31, 0x286040);  F_00286108(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028608C; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x286058); SET64(6, RD(16) + RD(0)); F_00286B08(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_00286088; }
SET64(31, 0x286070);  F_00286670(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028608C; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x286088); SET64(6, RD(16) + RD(0)); F_00286910(c);
L_00286088:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028608C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002860A0(Ctx *c) { /* func_002860A0 */
ENTER(0x2860a0);
SET32(29, RW(29) + -16);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 64);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2860bc); SET64(16, RD(4) + RD(0)); F_001273D0(c);
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

void F_00286100(Ctx *c) { /* func_00286100 */
ENTER(0x286100);
SET64(2, RD(0) + RD(0)); return;
}

void F_00286108(Ctx *c) { /* func_00286108 */
ENTER(0x286108);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
SET64(6, RD(29) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x286130); SET64(17, RD(4) + RD(0)); F_002861C0(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(0) + -1); if (t) goto L_002861A8; }
wr32(c, (RW(16) + 16), RW(3));
{ int t = RD(3) == RD(4); SET32(2, RW(0) + 1); if (t) goto L_002861A8; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
{ int t = RSD(3) <= 0; SET32(2, RW(3) << 1); if (t) goto L_00286168; }
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 1);
wr32(c, (RW(16) + 28), RW(2));
L_00286168:;
SET64(2, (s64)(s32)0x4b0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + 4936);
SET64(5, RD(18) + RD(0));
wr32(c, (RW(16) + 4), RW(2));
SET64(31, 0x286184); SET64(6, RD(16) + RD(0)); F_00286340(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x286194); SET64(6, RD(16) + RD(0)); F_00286480(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2861a4); SET64(6, RD(16) + RD(0)); F_00286B08(c);
SET32(2, RW(0) + 1);
L_002861A8:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_002861C0(Ctx *c) { /* func_002861C0 */
ENTER(0x2861c0);
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
SET64(31, 0x2861fc); wr32(c, (RW(22) + 0), RW(0)); F_00286588(c);
SET64(6, (s64)(s32)0x10000);
SET64(17, RD(2) + RD(0));
SET32(18, RW(17) - RW(19));
SET32(4, RW(17) + 1);
{ int t = RD(17) == RD(0); SET32(21, RW(20) - RW(18)); if (t) goto L_00286280; }
SET64(31, 0x28621c); SET32(5, RW(21) + -1); F_00286588(c);
SET64(6, (s64)(s32)0x10000);
SET64(16, RD(2) + RD(0));
SET32(3, RW(16) - RW(19));
SET32(4, RW(16) + 1);
{ int t = RD(16) == RD(0); SET32(5, RW(20) - RW(3)); if (t) goto L_00286280; }
SET64(31, 0x28623c); SET32(5, RW(5) + -1); F_00286588(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(4, RW(3) - RW(16)); if (t) goto L_00286280; }
SET32(16, RW(16) - RW(17));
{ int t = RD(16) != RD(4); SET32(2, RW(0) + -1); if (t) goto L_00286280; }
div_s(c, 0, RSW(18), RSW(16));
if (RD(16) == RD(0)) { rt_break(c, 0x28625c); goto L_00286260; }
L_00286260:;
SET64(3, c->hi.d[0]);
if (RD(3) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00286284; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(21) + RD(0));
SET64(31, 0x28627c); SET64(6, RD(22) + RD(0)); F_002862A8(c);
SET64(2, RD(16) + RD(0));
L_00286280:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00286284:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(22, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_002862A8(Ctx *c) { /* func_002862A8 */
ENTER(0x2862a8);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x2862d0); SET64(19, RD(6) + RD(0)); F_00274878(c);
SET64(18, RD(2) + RD(0));
SET32(7, RW(29) + 16);
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(4, RD(18) + RD(0));
{ int t = RD(18) == RD(0); SET32(8, RW(29) + 20); if (t) goto L_00286324; }
SET64(31, 0x2862f4);  F_00272540(c);
SET64(3, (s64)(s32)0x10000);
SET64(2, (s32)rd32(c, (RW(29) + 20)));
SET64(5, RD(29) + RD(0));
SET64(2, RD(2) & RD(3));
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_00286324; }
SET64(31, 0x286314);  F_00274298(c);
SET64(31, 0x28631c); SET64(4, RD(18) + RD(0)); F_00274A18(c);
SET64(3, (s32)rd32(c, (RW(29) + 12)));
wr32(c, (RW(19) + 0), RW(3));
L_00286324:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_00286340(Ctx *c) { /* func_00286340 */
ENTER(0x286340);
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
SET64(18, (s32)rd32(c, (RW(20) + 16))); goto L_00286390;
L_00286378:;
SET32(16, RW(16) - RW(18));
{ int t = RD(3) == RD(0); SET32(17, RW(17) + RW(18)); if (t) goto L_0028640C; }
if (RSD(16) <= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00286410; }
SET32(19, RW(19) + 1);
L_00286390:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x28639c); SET64(5, RD(16) + RD(0)); F_00286DE0(c);
{ int t = RD(2) == RD(0); SET64(3, RSD(19) < (s64)3); if (t) { POLL(); goto L_00286378; } }
SET64(2, (s64)(s32)0x530000);
SET64(4, RD(17) + RD(0));
SET32(17, RW(2) + 16440);
SET64(5, RD(16) + RD(0));
wr32(c, (RW(17) + 0), RW(0));
SET64(31, 0x2863c0); SET64(6, RD(17) + RD(0)); F_00286430(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00286410; }
SET64(2, (s32)rd32(c, (RW(17) + 12)));
if (RSD(2) > 0) { wr32(c, (RW(20) + 28), RW(2)); goto L_002863D8; }
L_002863D8:;
SET64(2, (s32)rd32(c, (RW(17) + 100)));
if (RSD(2) > 0) { wr32(c, (RW(20) + 20), RW(2)); goto L_002863E4; }
L_002863E4:;
SET64(2, (s32)rd32(c, (RW(17) + 104)));
if (RSD(2) > 0) { wr32(c, (RW(20) + 24), RW(2)); goto L_002863F0; }
L_002863F0:;
SET64(6, (s32)rd32(c, (RW(17) + 108)));
{ int t = RSD(6) <= 0; SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_00286410; }
SET64(2, (s64)(s32)0x4b0000);
wr32(c, (RW(20) + 32), RW(6));
SET32(2, RW(2) + 5008);
wr32(c, (RW(20) + 8), RW(2));
L_0028640C:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00286410:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00286430(Ctx *c) { /* func_00286430 */
ENTER(0x286430);
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
SET64(31, 0x286460); SET64(6, RD(16) + RD(0)); F_00271EB0(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 144), RW(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); { F_002870C8(c); return; }
}

void F_00286480(Ctx *c) { /* func_00286480 */
ENTER(0x286480);
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
wr64(c, (RW(29) + 56), RD(23));
wr64(c, (RW(29) + 64), RD(31));
SET64(23, (s32)rd32(c, (RW(21) + 16))); goto L_002864E0;
L_002864C0:;
SET64(31, 0x2864c8);  F_00286910(c);
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0028655C; }
SET32(2, RW(18) - RW(20));
L_002864D4:;
SET32(2, RW(2) + 1);
SET32(19, RW(19) - RW(2));
SET32(20, RW(20) + RW(2));
L_002864E0:;
{ int t = RSD(19) <= 0; SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0028655C; }
SET64(4, RD(20) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x2864f8); SET64(6, (s64)(s32)0x40000); F_00286588(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(18) + RD(0));
{ int t = RD(18) == RD(0); SET32(5, RW(22) - RW(18)); if (t) goto L_00286558; }
SET64(2, rd8(c, (RW(18) + 3)));
SET32(2, RW(2) + 64);
SET64(2, RD(2) & 0xff);
SET64(2, RD(2) < (u64)(s64)32);
if (RD(2) == RD(0)) { SET32(2, RW(18) - RW(20)); { POLL(); goto L_002864D4; } }
SET64(31, 0x286528); SET64(16, RD(23) + RD(0)); F_002865F0(c);
SET64(6, RD(21) + RD(0));
SET64(17, RD(2) + RD(0));
SET32(2, RW(22) - RW(17));
SET64(4, RD(17) + RD(0));
SET64(3, RSD(2) < RSD(16));
if (RD(3) != 0) SET64(16, RD(2));
SET64(31, 0x286548); SET64(5, RD(16) + RD(0)); F_00286670(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(6, RD(21) + RD(0)); if (t) { POLL(); goto L_002864C0; } }
L_00286558:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0028655C:;
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

void F_00286588(Ctx *c) { /* func_00286588 */
ENTER(0x286588);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET64(2, RSD(17) < (s64)4);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
{ int t = RD(2) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002865D4; }
L_002865B0:;
SET64(31, 0x2865b8); SET64(4, RD(16) + RD(0)); F_00274150(c);
{ int t = RD(2) != RD(18); SET32(17, RW(17) + -1); if (t) goto L_002865C8; }
SET64(2, RD(16) + RD(0)); goto L_002865D8;
L_002865C8:;
SET64(2, RSD(17) < (s64)4);
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 1); if (t) { POLL(); goto L_002865B0; } }
L_002865D4:;
SET64(2, RD(0) + RD(0));
L_002865D8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002865F0(Ctx *c) { /* func_002865F0 */
ENTER(0x2865f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x286610); SET64(18, RD(4) + RD(0)); F_00274878(c);
SET64(17, RD(2) + RD(0));
SET64(2, RSD(16) < (s64)7);
SET32(3, RW(0) + 6);
SET64(5, RD(18) + RD(0));
if (RD(2) != 0) SET64(3, RD(16));
SET64(6, RD(16) + RD(0));
SET64(7, RD(29) + RD(0));
SET32(8, RW(29) + 4);
SET64(4, RD(17) + RD(0));
{ int t = RD(17) == RD(0); SET32(2, RW(18) + RW(3)); if (t) goto L_00286654; }
SET64(31, 0x286644);  F_00272540(c);
SET64(31, 0x28664c); SET64(4, RD(17) + RD(0)); F_00274A18(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(18) + RW(2));
L_00286654:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00286670(Ctx *c) { /* func_00286670 */
ENTER(0x286670);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x286694); SET64(18, RD(6) + RD(0)); F_00286708(c);
SET32(4, RW(16) + 2);
SET32(5, RW(17) + -2);
{ int t = RD(2) != RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_002866D4; }
SET64(31, 0x2866ac);  F_00286708(c);
if (RD(2) != RD(0)) { SET32(2, RW(0) + 1); goto L_002866EC; }
SET32(4, RW(16) + 1);
SET32(5, RW(17) + -1);
SET64(31, 0x2866c4); SET64(6, RD(18) + RD(0)); F_00286708(c);
SET32(4, RW(16) + 3);
SET32(5, RW(17) + -3);
{ int t = RD(2) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_002866E0; }
L_002866D4:;
SET32(2, RW(0) + 1); goto L_002866EC;
L_002866E0:;
SET64(31, 0x2866e8);  F_00286708(c);
SET64(2, RD(0) < RD(2));
L_002866EC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00286708(Ctx *c) { /* func_00286708 */
ENTER(0x286708);
SET32(29, RW(29) + -64);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
SET64(3, RSD(16) < (s64)2049);
SET32(5, RW(0) + 2048);
if (RD(3) == 0) SET64(16, RD(5));
SET64(5, RD(4) + RD(0));
SET32(2, RW(2) + 14392);
wr64(c, (RW(29) + 32), RD(18));
SET64(4, RD(2) + RD(0));
SET64(18, RD(6) + RD(0));
SET64(6, RD(16) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x286750); SET64(17, RD(2) + RD(0)); F_00127218(c);
{ int t = RSD(16) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_002867C4; }
SET64(2, (s64)(s32)0x4b0000);
SET32(19, RW(2) + 4312);
L_00286760:;
SET64(5, RD(16) + RD(0));
SET32(16, RW(16) + -4);
SET64(4, RD(17) + RD(0));
SET64(31, 0x286774); SET64(6, RD(29) + RD(0)); F_00282198(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_002867B8; }
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
wr32(c, (RW(18) + 44), RW(3)); goto L_002867C4;
L_002867B8:;
{ int t = RSD(16) > 0; SET32(17, RW(17) + 4); if (t) { POLL(); goto L_00286760; } }
SET64(2, RD(0) + RD(0));
L_002867C4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_002867E0(Ctx *c) { /* func_002867E0 */
ENTER(0x2867e0);
SET32(29, RW(29) + -32);
SET64(2, RD(4) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(5, RD(2) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2867fc); SET64(4, RD(29) + RD(0)); F_002869B8(c);
{ int t = RD(2) != RD(0); SET32(5, RW(0) + -1); if (t) goto L_00286810; }
SET32(2, RW(0) + -1); goto L_0028684C;
L_00286810:;
SET64(3, rd8(c, (RW(29) + 0)));
SET32(2, RW(0) + -1);
SET64(4, rd8(c, (RW(29) + 2)));
SET32(3, RW(3) << 4);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET64(1, (s64)(s32)0x4b0000);
SET32(1, RW(1) + RW(3));
SET64(3, (s32)rd32(c, (RW(1) + 4528)));
{ int t = RD(3) == RD(5); SET32(4, RW(3) << 5); if (t) goto L_0028684C; }
SET32(2, RW(4) - RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
L_0028684C:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00286858(Ctx *c) { /* func_00286858 */
ENTER(0x286858);
SET32(29, RW(29) + -32);
SET64(2, RD(4) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(5, RD(2) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x286874); SET64(4, RD(29) + RD(0)); F_002869B8(c);
{ int t = RD(2) != RD(0); SET32(6, RW(0) + -1); if (t) goto L_00286888; }
SET32(2, RW(0) + -1); goto L_00286900;
L_00286888:;
SET64(3, rd8(c, (RW(29) + 0)));
SET64(4, rd8(c, (RW(29) + 2)));
SET32(5, RW(3) << 2);
SET32(3, RW(3) << 4);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET64(1, (s64)(s32)0x4b0000);
SET32(1, RW(1) + RW(3));
SET64(3, (s32)rd32(c, (RW(1) + 4528)));
{ int t = RD(3) == RD(6); SET32(2, RW(0) + -1); if (t) goto L_00286900; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + RW(5));
SET64(4, (s32)rd32(c, (RW(4) + 4784)));
SET64(2, rd8(c, (RW(29) + 3)));
mul_s(c, 0, 4, RSW(4), RSW(3));
SET32(2, RW(2) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + 4512)));
SET32(2, RW(4) << 5);
SET32(3, RW(3) << 3);
SET32(2, RW(2) - RW(4));
if (RD(3) == RD(0)) { rt_break(c, 0x2868e8); goto L_002868EC; }
L_002868EC:;
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(4));
SET32(2, RW(2) << 3);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
L_00286900:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00286910(Ctx *c) { /* func_00286910 */
ENTER(0x286910);
SET32(29, RW(29) + -32);
SET64(2, RD(4) + RD(0));
SET64(3, RD(5) + RD(0));
SET64(5, RD(2) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
SET64(4, RD(29) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x286938); SET64(6, RD(3) + RD(0)); F_002869B8(c);
{ int t = RD(2) == RD(0); SET64(4, rd8(c, (RW(29) + 6))); if (t) goto L_002869A4; }
SET32(2, RW(0) + 1);
SET64(5, rd8(c, (RW(29) + 3)));
SET32(4, RW(4) << 2);
wr32(c, (RW(16) + 12), RW(0));
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(4));
SET64(3, rd8(c, (RW(3) + 4496)));
SET32(5, RW(5) << 2);
wr8(c, (RW(16) + 40), (u8)RW(3));
SET64(3, (s64)(s32)0x410000);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + RW(5));
SET64(4, (s32)rd32(c, (RW(4) + 4512)));
wr32(c, (RW(16) + 44), RW(4));
SET32(7, RW(3) + -1888);
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
L_002869A4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002869B8(Ctx *c) { /* func_002869B8 */
ENTER(0x2869b8);
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
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 56), RD(31)); if (t) goto L_00286A5C; }
SET32(22, RW(0) + 255);
SET32(21, RW(0) + 248);
SET32(20, RW(0) + 15);
SET32(19, RW(0) + 3);
L_00286A00:;
SET64(2, rd8(c, (RW(16) + 0)));
if (RD(2) != RD(22)) { SET32(18, RW(18) + -1); goto L_00286A50; }
SET64(2, rd8(c, (RW(16) + 1)));
SET64(2, RD(2) & 0xf8);
if (RD(2) != RD(21)) { SET32(18, RW(18) + -1); goto L_00286A50; }
SET64(5, RD(16) + RD(0));
SET64(31, 0x286a28); SET64(4, RD(17) + RD(0)); F_00286A88(c);
SET64(2, rd8(c, (RW(17) + 0)));
if (RD(2) == RD(0)) { SET32(18, RW(18) + -1); goto L_00286A50; }
SET64(2, rd8(c, (RW(17) + 2)));
if (RD(2) == RD(20)) { SET32(18, RW(18) + -1); goto L_00286A50; }
SET64(3, rd8(c, (RW(17) + 3)));
{ int t = RD(3) != RD(19); SET64(2, RD(16) + RD(0)); if (t) goto L_00286A60; }
SET32(18, RW(18) + -1);
L_00286A50:;
SET64(2, RSD(18) < (s64)4);
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 1); if (t) { POLL(); goto L_00286A00; } }
L_00286A5C:;
SET64(2, RD(0) + RD(0));
L_00286A60:;
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

void F_00286A88(Ctx *c) { /* func_00286A88 */
ENTER(0x286a88);
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

void F_00286B08(Ctx *c) { /* func_00286B08 */
ENTER(0x286b08);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(20));
{ int t = RSD(16) <= 0; wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_00286C48; }
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET32(19, RW(2) + 4456);
SET32(20, RW(3) + 5008);
SET64(4, RD(17) + RD(0));
L_00286B48:;
SET64(5, RD(16) + RD(0));
SET64(31, 0x286b54); SET32(6, RW(0) + 64); F_00274C00(c);
SET64(5, RD(2) + RD(0));
{ int t = RD(5) == RD(0); SET32(4, RW(5) - RW(17)); if (t) goto L_00286C4C; }
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
{ int t = RD(3) == RD(0); SET64(11, rd8(c, (RW(5) + 9))); if (t) goto L_00286C40; }
{ int t = RD(2) == RD(0); SET32(2, RW(7) >> 5); if (t) goto L_00286C40; }
SET64(2, RD(2) & 0x1);
SET64(2, RD(2) & 0xff);
{ int t = RD(2) == RD(0); SET64(2, RD(4) & 0xf); if (t) goto L_00286C40; }
SET32(4, RW(4) >> 4);
SET32(3, RW(8) << 4);
SET32(2, RW(2) << 8);
SET64(5, (s32)rd32(c, (RW(18) + 28)));
SET64(3, RD(3) | RD(4));
SET64(2, RD(2) | RD(9));
wr32(c, (RW(18) + 20), RW(3));
{ int t = RD(5) != RD(0); wr32(c, (RW(18) + 24), RW(2)); if (t) goto L_00286C0C; }
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
L_00286C0C:;
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
wr32(c, (RW(18) + 36), RW(2)); goto L_00286C48;
L_00286C40:;
{ int t = RSD(16) > 0; SET64(4, RD(17) + RD(0)); if (t) { POLL(); goto L_00286B48; } }
L_00286C48:;
SET32(2, RW(0) + 1);
L_00286C4C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00286C70(Ctx *c) { /* func_00286C70 */
ENTER(0x286c70);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
SET32(4, RW(0) + 32);
SET32(5, RW(5) + 18640);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002984F0(c); return; }
}

void F_00286C90(Ctx *c) { /* func_00286C90 */
ENTER(0x286c90);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00298580(c); return; }
}

void F_00286CA8(Ctx *c) { /* func_00286CA8 */
ENTER(0x286ca8);
wr32(c, (RW(4) + 144), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void F_00286CC0(Ctx *c) { /* func_00286CC0 */
ENTER(0x286cc0);
wr32(c, (RW(4) + 144), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void F_00286CD0(Ctx *c) { /* func_00286CD0 */
ENTER(0x286cd0);
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
{ int t = RD(5) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00286D6C; }
SET64(31, 0x286d1c);  F_00286D88(c);
if (RD(2) != RD(0)) { SET32(16, RW(16) + -12); goto L_00286D3C; }
SET32(16, RW(16) + -2);
SET32(17, RW(17) + 2);
SET64(31, 0x286d34); SET64(4, RD(16) + RD(0)); F_00286D88(c);
{ int t = RD(2) == RD(0); SET32(16, RW(16) + -12); if (t) goto L_00286D6C; }
L_00286D3C:;
SET32(17, RW(17) + 12);
SET64(4, RD(16) + RD(0));
SET64(31, 0x286d4c); SET64(5, RD(17) + RD(0)); F_00286DE0(c);
SET64(4, RD(19) + RD(0));
SET64(5, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_00286D6C; }
SET64(31, 0x286d64);  F_00286E38(c);
wr32(c, (RW(18) + 0), RW(2));
SET32(2, RW(0) + 1);
L_00286D6C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00286D88(Ctx *c) { /* func_00286D88 */
ENTER(0x286d88);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x286d98);  F_00286DB0(c);
SET64(2, RD(2) ^ 0x1bf);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_00286DB0(Ctx *c) { /* func_00286DB0 */
ENTER(0x286db0);
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

void F_00286DE0(Ctx *c) { /* func_00286DE0 */
ENTER(0x286de0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x286df4);  F_002985C8(c);
SET64(16, RD(2) + RD(0));
SET64(5, RD(29) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00286E24; }
SET64(31, 0x286e0c);  F_002987E0(c);
SET64(4, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
if (RD(2) == 0) SET64(3, RD(0));
SET64(31, 0x286e20); wr32(c, (RW(29) + 0), RW(3)); F_00298690(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_00286E24:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00286E38(Ctx *c) { /* func_00286E38 */
ENTER(0x286e38);
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
SET64(31, 0x286e6c); SET32(19, RW(17) + 120); F_00294A30(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 76);
SET64(31, 0x286e7c); SET64(16, RD(2) + RD(0)); F_00294A30(c);
SET64(4, RD(2) + RD(0));
SET64(5, RD(20) + RD(0));
{ int t = RD(16) == RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00286E94; }
{ u32 t = RW(16); SET64(31, 0x286e94);  rt_call(c, t); }
L_00286E94:;
SET64(3, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00286EDC; }
SET64(2, RSD(18) < (s64)2049);
SET32(16, RW(0) + 2048);
if (RD(2) != 0) SET64(16, RD(18));
SET64(5, RD(20) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x286ebc); SET32(4, RW(17) + 268); F_00271EB0(c);
wr32(c, (RW(19) + 144), RW(16));
SET64(31, 0x286ec8); SET64(4, RD(19) + RD(0)); F_002870C8(c);
SET64(31, 0x286ed0); SET64(4, RD(17) + RD(0)); F_002876E8(c);
SET64(31, 0x286ed8); SET64(4, RD(17) + RD(0)); F_00286F00(c);
SET32(2, RW(0) + 1);
L_00286EDC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00286F00(Ctx *c) { /* func_00286F00 */
ENTER(0x286f00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x286f14); SET64(16, RD(4) + RD(0)); F_00287078(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(2) == RD(0); SET32(5, RW(16) + 120); if (t) goto L_00286F30; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00286F40(c); return; }
L_00286F30:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00286F40(Ctx *c) { /* func_00286F40 */
ENTER(0x286f40);
SET64(2, RD(5) | RD(4));
SET64(2, RD(2) & 0x7);
{ int t = RD(2) == RD(0); SET32(2, RW(5) + 2176); if (t) goto L_00286FB0; }
L_00286F50:;
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
{ int t = RD(5) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_00286F50; } }
 goto L_00286FE4;
L_00286FB0:;
SET64(3, rd64(c, (RW(5) + 0)));
SET64(6, rd64(c, (RW(5) + 8)));
SET64(7, rd64(c, (RW(5) + 16)));
SET64(8, rd64(c, (RW(5) + 24)));
wr64(c, (RW(4) + 0), RD(3));
wr64(c, (RW(4) + 8), RD(6));
wr64(c, (RW(4) + 16), RD(7));
wr64(c, (RW(4) + 24), RD(8));
SET32(5, RW(5) + 32);
{ int t = RD(5) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_00286FB0; } }
L_00286FE4:;
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

void F_00287010(Ctx *c) { /* func_00287010 */
ENTER(0x287010);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28702c); SET32(16, RW(17) + 120); F_00287078(c);
SET64(5, RD(2) + RD(0));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00287060; }
SET64(31, 0x287040);  F_00286F40(c);
SET64(31, 0x287048); SET64(4, RD(16) + RD(0)); F_002870C8(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002876E8(c); return; }
L_00287060:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00287078(Ctx *c) { /* func_00287078 */
ENTER(0x287078);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 13864)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002870B4; }
SET64(31, 0x28709c);  F_00289D10(c);
if (RSD(2) <= 0) { SET64(2, (s32)rd32(c, (RW(16) + 13864))); goto L_002870B0; }
SET64(2, RD(0) + RD(0)); goto L_002870B4;
L_002870B0:;
SET32(2, RW(2) + 12);
L_002870B4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002870C8(Ctx *c) { /* func_002870C8 */
ENTER(0x2870c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(4, RW(16) + 148);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2870e8); SET64(5, (s32)rd32(c, (RW(16) + 144))); F_002985C8(c);
SET64(5, RD(16) + RD(0));
SET64(17, RD(2) + RD(0));
{ int t = RD(17) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00287118; }
SET64(31, 0x287100);  F_00287130(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00298690(c); return; }
L_00287118:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00287130(Ctx *c) { /* func_00287130 */
ENTER(0x287130);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x287154); SET64(18, RD(4) + RD(0)); F_002987E0(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(5, RW(29) + 4);
SET64(4, RD(18) + RD(0));
SET32(6, RW(29) + 8);
if (RD(2) == 0) SET64(3, RD(0));
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 0), RW(3)); if (t) goto L_00287270; }
SET64(31, 0x287178);  F_00298BD0(c);
{ int t = RD(2) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_0028718C; }
wr32(c, (RW(29) + 4), RW(0));
wr32(c, (RW(29) + 8), RW(0));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
L_0028718C:;
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
SET64(31, 0x2871bc); SET32(16, RW(16) + RW(3)); F_002990E0(c);
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET64(16, RSD(16) < (s64)110);
SET64(5, RD(17) + RD(0));
SET64(4, RD(18) + RD(0));
if (RD(2) == 0) SET64(3, RD(0));
SET32(2, RW(0) - RW(3));
{ int t = RD(16) == RD(0); wr32(c, (RW(29) + 12), RW(3)); if (t) goto L_002871E0; }
wr32(c, (RW(29) + 12), RW(2));
L_002871E0:;
SET64(2, (s32)rd32(c, (RW(29) + 12)));
SET64(31, 0x2871ec); wr32(c, (RW(17) + 12), RW(2)); F_00287288(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2871f8); SET32(5, RW(17) + 32); F_00287318(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 189);
SET64(31, 0x287208); SET32(6, RW(0) + 189); F_002873D0(c);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(17) + 60), RW(2));
SET32(5, RW(0) + 191);
SET64(31, 0x28721c); SET32(6, RW(0) + 191); F_002873D0(c);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET32(5, RW(0) + 192);
SET64(31, 0x287230); SET32(6, RW(0) + 223); F_002873D0(c);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(17) + 68), RW(2));
SET32(5, RW(0) + 224);
SET64(31, 0x287244); SET32(6, RW(0) + 239); F_002873D0(c);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(17) + 72), RW(2));
SET32(6, RW(17) + 76);
SET64(31, 0x287258); SET64(5, (s32)rd32(c, (RW(17) + 68))); F_00287448(c);
SET64(4, RD(18) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 72)));
SET64(31, 0x287268); SET32(6, RW(17) + 92); F_002874E0(c);
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(2));
L_00287270:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00287288(Ctx *c) { /* func_00287288 */
ENTER(0x287288);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x2a0000);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(2) + -29320);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2872ac); SET64(16, RD(4) + RD(0)); F_00287678(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(17) + 16), RW(2));
SET32(5, RW(5) + -29240);
SET64(31, 0x2872c0); SET64(4, RD(16) + RD(0)); F_00287678(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(5, RW(5) + -29160);
SET64(31, 0x2872d4); SET64(4, RD(16) + RD(0)); F_00287678(c);
SET64(5, (s64)(s32)0x2a0000);
SET32(3, RW(0) + -1);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -29080);
{ int t = RD(2) != RD(3); wr32(c, (RW(17) + 24), RW(2)); if (t) goto L_002872F4; }
SET32(2, RW(0) + 2);
wr32(c, (RW(17) + 24), RW(2));
L_002872F4:;
SET64(31, 0x2872fc);  F_00287678(c);
wr32(c, (RW(17) + 28), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00287318(Ctx *c) { /* func_00287318 */
ENTER(0x287318);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x2a0000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
SET32(5, RW(2) + -28768);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28733c); SET64(17, RD(4) + RD(0)); F_00287678(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x287350); SET32(5, RW(5) + -28688); F_00287678(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 4), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x287364); SET32(5, RW(5) + -28608); F_00287678(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 8), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x287378); SET32(5, RW(5) + -28528); F_00287678(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 12), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x28738c); SET32(5, RW(5) + -28344); F_00287678(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 16), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2873a0); SET32(5, RW(5) + -28264); F_00287678(c);
SET64(5, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 20), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2873b4); SET32(5, RW(5) + -28184); F_00287678(c);
wr32(c, (RW(16) + 24), RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002873D0(Ctx *c) { /* func_002873D0 */
ENTER(0x2873d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
SET64(2, RSD(17) < RSD(16));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
{ int t = RD(2) != RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_0028742C; }
SET64(5, RD(16) & 0xff);
L_00287400:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x28740c); SET64(6, RD(29) + RD(0)); F_002988D0(c);
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0028741C; }
{ int t = RD(3) != RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_00287430; }
L_0028741C:;
SET32(16, RW(16) + 1);
SET64(2, RSD(17) < RSD(16));
{ int t = RD(2) == RD(0); SET64(5, RD(16) & 0xff); if (t) { POLL(); goto L_00287400; } }
L_0028742C:;
SET64(2, RD(0) + RD(0));
L_00287430:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00287448(Ctx *c) { /* func_00287448 */
ENTER(0x287448);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_002874C4; }
SET64(6, (s64)(s32)0x2a0000);
SET64(31, 0x287478); SET32(6, RW(6) + -27664); F_002876B0(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(18) + 0), RW(2));
SET32(6, RW(6) + -27552);
SET64(4, RD(17) + RD(0));
SET64(31, 0x287490); SET64(5, RD(16) + RD(0)); F_002876B0(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(18) + 4), RW(2));
SET32(6, RW(6) + -27424);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2874a8); SET64(5, RD(16) + RD(0)); F_002876B0(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(18) + 8), RW(2));
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2874c0); SET32(6, RW(6) + -27312); F_002876B0(c);
wr32(c, (RW(18) + 12), RW(2));
L_002874C4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002874E0(Ctx *c) { /* func_002874E0 */
ENTER(0x2874e0);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x2a0000);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
SET32(6, RW(2) + -27200);
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
SET64(31, 0x287524); SET64(17, RD(4) + RD(0)); F_002876B0(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 0), RW(2));
SET32(6, RW(6) + -27088);
SET64(4, RD(17) + RD(0));
SET64(31, 0x28753c); SET64(5, RD(18) + RD(0)); F_002876B0(c);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(16) + 4), RW(2));
SET64(5, RD(21) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(31, 0x287554); SET64(7, RD(20) + RD(0)); F_002996A8(c);
SET64(6, (s64)(s32)0x2a0000);
SET32(6, RW(6) + -26792);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
{ int t = RD(2) != RD(0); SET32(3, RW(0) + -1); if (t) goto L_00287574; }
wr32(c, (RW(19) + 0), RW(3));
wr32(c, (RW(20) + 0), RW(3));
L_00287574:;
SET64(31, 0x28757c);  F_002876B0(c);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(16) + 16), RW(2));
SET64(6, RD(29) + RD(0));
SET64(31, 0x287590); SET64(5, RD(21) + RD(0)); F_00298940(c);
SET64(6, (s64)(s32)0x2a0000);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(6, RW(6) + -26680);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
if (RD(2) == 0) SET64(3, RD(0));
SET64(2, RD(0) < RD(3));
wr32(c, (RW(29) + 0), RW(3));
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 20), RW(2)); if (t) goto L_00287654; }
SET64(31, 0x2875c0);  F_002876B0(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 24), RW(2));
SET32(6, RW(6) + -26568);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2875d8); SET64(5, RD(18) + RD(0)); F_002876B0(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 28), RW(2));
SET32(6, RW(6) + -26456);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2875f0); SET64(5, RD(18) + RD(0)); F_002876B0(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 32), RW(2));
SET32(6, RW(6) + -26344);
SET64(4, RD(17) + RD(0));
SET64(31, 0x287608); SET64(5, RD(18) + RD(0)); F_002876B0(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 36), RW(2));
SET32(6, RW(6) + -26224);
SET64(4, RD(17) + RD(0));
SET64(31, 0x287620); SET64(5, RD(18) + RD(0)); F_002876B0(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 40), RW(2));
SET32(6, RW(6) + -26112);
SET64(4, RD(17) + RD(0));
SET64(31, 0x287638); SET64(5, RD(18) + RD(0)); F_002876B0(c);
SET64(6, (s64)(s32)0x2a0000);
wr32(c, (RW(16) + 44), RW(2));
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x287650); SET32(6, RW(6) + -25976); F_002876B0(c);
wr32(c, (RW(16) + 48), RW(2));
L_00287654:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_00287678(Ctx *c) { /* func_00287678 */
ENTER(0x287678);
SET32(29, RW(29) + -32);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
{ u32 t = RW(2); SET64(31, 0x28768c); SET64(5, RD(29) + RD(0)); rt_call(c, t); }
SET32(4, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x0);
SET64(31, rd64(c, (RW(29) + 16)));
if (RD(2) != 0) SET64(4, RD(3));
SET64(2, RD(4) + RD(0));
SET32(29, RW(29) + 32); return;
}

void F_002876B0(Ctx *c) { /* func_002876B0 */
ENTER(0x2876b0);
SET32(29, RW(29) + -32);
SET64(2, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(5, RD(5) & 0xff);
{ u32 t = RW(2); SET64(31, 0x2876c8); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET32(4, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x0);
SET64(31, rd64(c, (RW(29) + 16)));
if (RD(2) != 0) SET64(4, RD(3));
SET64(2, RD(4) + RD(0));
SET32(29, RW(29) + 32); return;
}

void F_002876E8(Ctx *c) { /* func_002876E8 */
ENTER(0x2876e8);
SET32(5, RW(4) + 152);
SET32(4, RW(4) + 2316);
SET64(2, (s32)rd32(c, (RW(5) + 4)));
wr32(c, (RW(4) + 36), RW(2));
SET64(3, (s32)rd32(c, (RW(5) + 8)));
wr32(c, (RW(4) + 40), RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 12)));
wr32(c, (RW(4) + 44), RW(2)); return;
}

void F_00287710(Ctx *c) { /* func_00287710 */
ENTER(0x287710);
SET32(2, RW(0) + 2); return;
}

void F_00287718(Ctx *c) { /* func_00287718 */
ENTER(0x287718);
SET32(4, RW(4) + 120);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00287748; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(4));
L_00287748:;
 return;
}

void F_00287750(Ctx *c) { /* func_00287750 */
ENTER(0x287750);
SET64(3, (s32)rd32(c, (RW(4) + 120)));
SET32(4, RW(4) + 212);
{ int t = RD(3) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_0028776C; }
SET64(3, (s32)rd32(c, (RW(4) + 20)));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(4) + 24))); goto L_0028776C; }
L_0028776C:;
 return;
}

void F_00287778(Ctx *c) { /* func_00287778 */
ENTER(0x287778);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + 4800); return;
}

void F_00287788(Ctx *c) { /* func_00287788 */
ENTER(0x287788);
SET64(2, RD(5) ^ 0x36f8);
SET64(2, RD(2) < (u64)(s64)1); return;
}

void F_00287798(Ctx *c) { /* func_00287798 */
ENTER(0x287798);
SET64(3, (s64)(s32)0x530000);
SET64(2, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -16);
SET32(3, RW(3) + 19160);
SET32(2, RW(2) + 4800);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(5, (s64)(s32)0x410000);
wr32(c, (RW(3) + 0), RW(2));
SET64(16, RD(4) + RD(0));
SET32(4, RW(0) + 14072);
SET64(31, 0x2877cc); wr32(c, (RW(5) + -1316), RW(4)); F_00287BE8(c);
SET64(31, 0x2877d4); SET64(4, RD(16) + RD(0)); F_00287800(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002877F4; }
SET64(31, 0x2877e4);  F_00287C18(c);
SET64(31, 0x2877ec);  F_00287C50(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_002877F4:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00287800(Ctx *c) { /* func_00287800 */
ENTER(0x287800);
SET32(29, RW(29) + -32);
SET64(5, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, (s64)(s32)0x410000);
SET32(16, RW(16) + -1864);
wr64(c, (RW(29) + 8), RD(17));
SET32(6, RW(0) + 137);
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x28782c); SET64(4, RD(16) + RD(0)); F_00272320(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(6, RW(0) + 400);
SET32(5, RW(5) + 5216);
SET64(31, 0x287840); SET64(4, RD(16) + RD(0)); F_00271EB0(c);
ldl(c, 2, (RW(17) + 7));
ldr(c, 2, (RW(17) + 0));
sdl(c, 2, (RW(16) + 407));
sdr(c, 2, (RW(16) + 400));
wr32(c, (RW(16) + 408), RW(0));
SET64(31, 0x28785c); SET32(4, RW(16) + 412); F_00287978(c);
SET32(4, RW(16) + 432);
SET64(31, 0x287868); SET64(5, (s32)rd32(c, (RW(17) + 4))); F_00294E00(c);
SET64(31, 0x287870); SET32(4, RW(16) + 444); F_00284290(c);
SET64(31, 0x287878); SET64(4, RD(16) + RD(0)); F_002878C0(c);
SET32(2, RW(0) + 7);
SET32(16, RW(16) + 544);
L_00287880:;
SET32(2, RW(2) + -1);
wr32(c, (RW(16) + 0), RW(0));
{ int t = RSD(2) >= 0; SET32(16, RW(16) + -4); if (t) { POLL(); goto L_00287880; } }
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s64)(s32)0x410000);
SET64(31, 0x2878ac); SET32(4, RW(4) + -1416); F_002969F8(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002878C0(Ctx *c) { /* func_002878C0 */
ENTER(0x2878c0);
SET32(4, RW(4) + 508);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 0), RW(0)); return;
}

void F_002878D0(Ctx *c) { /* func_002878D0 */
ENTER(0x2878d0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 7);
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(2) + -1348);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
L_002878F8:;
SET32(17, RW(17) + 4);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00287910; }
SET64(31, 0x28790c);  F_00292B08(c);
SET64(18, RD(2) + RD(0));
L_00287910:;
SET32(16, RW(16) + -1);
if (RSD(16) >= 0) { SET64(2, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_002878F8; } }
SET64(16, (s64)(s32)0x410000);
SET32(16, RW(16) + -1432);
SET64(31, 0x28792c); SET64(4, RD(16) + RD(0)); F_00294E10(c);
SET64(31, 0x287934); SET32(4, RW(16) + 12); F_002842A8(c);
SET64(31, 0x28793c); SET32(4, RW(16) + 16); F_00296A90(c);
SET64(31, 0x287944); SET64(16, RD(2) + RD(0)); F_00287C58(c);
SET64(31, 0x28794c);  F_00287C38(c);
SET64(31, 0x287954);  F_00287C00(c);
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
if (RD(16) == 0) SET64(2, RD(18));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00287978(Ctx *c) { /* func_00287978 */
ENTER(0x287978);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00287990(c); return; }
}

void F_00287990(Ctx *c) { /* func_00287990 */
ENTER(0x287990);
wr32(c, (RW(4) + 16), RW(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void F_002879A8(Ctx *c) { /* func_002879A8 */
ENTER(0x2879a8);
SET32(29, RW(29) + -32);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00287A04; }
{ int t = RD(16) != RD(0);  if (t) goto L_002879E8; }
SET64(4, (s64)(s32)0x410000);
SET64(31, 0x2879dc); SET32(4, RW(4) + -1452); F_00287A18(c);
SET64(2, RD(17) + RD(0)); goto L_00287A04;
L_002879E8:;
SET64(31, 0x2879f0); SET32(4, RW(16) + 2544); F_00287A18(c);
SET64(2, (s32)rd32(c, (RW(16) + 72)));
{ int t = RSD(2) <= 0; SET32(3, RW(0) - RW(2)); if (t) goto L_00287A00; }
wr32(c, (RW(16) + 72), RW(3));
L_00287A00:;
SET64(2, RD(17) + RD(0));
L_00287A04:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00287A18(Ctx *c) { /* func_00287A18 */
ENTER(0x287a18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(2) != RD(0); SET64(3, RD(5) + RD(0)); if (t) goto L_00287A30; }
wr32(c, (RW(4) + 8), RW(3));
L_00287A30:;
{ int t = RD(3) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00287A50; }
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_00287A50; }
{ u32 t = RW(2); SET64(31, 0x287a4c); SET64(4, (s32)rd32(c, (RW(4) + 4))); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
L_00287A50:;
SET32(29, RW(29) + 16); return;
}

void F_00287A58(Ctx *c) { /* func_00287A58 */
ENTER(0x287a58);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00287A90; }
SET64(4, (s64)(s32)0x410000);
SET64(31, 0x287a88); SET32(4, RW(4) + -1452); F_00287AF0(c);
SET64(16, rd64(c, (RW(29) + 0))); goto L_00287AD4;
L_00287A90:;
SET64(31, 0x287a98);  F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00287AC0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x101);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00287AC0:;
SET32(4, RW(16) + 2544);
SET64(5, RD(17) + RD(0));
SET64(31, 0x287ad0); SET64(6, RD(18) + RD(0)); F_00287AF0(c);
SET64(16, rd64(c, (RW(29) + 0)));
L_00287AD4:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00287AF0(Ctx *c) { /* func_00287AF0 */
ENTER(0x287af0);
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 0), RW(5)); return;
}

void F_00287B00(Ctx *c) { /* func_00287B00 */
ENTER(0x287b00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00287B58; }
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + -1864);
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
SET64(16, rd64(c, (RW(29) + 0))); goto L_00287BB4;
L_00287B58:;
SET64(31, 0x287b60);  F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00287B88; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x102);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00287B88:;
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
L_00287BB4:;
SET64(2, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00287BC8(Ctx *c) { /* func_00287BC8 */
ENTER(0x287bc8);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -1872), RW(4));
{ int t = RD(4) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_00287BE0; }
SET64(3, (s32)rd32(c, (RW(4) + 72)));
if (RD(3) != 0) SET64(2, RD(0));
L_00287BE0:;
 return;
}

void F_00287BE8(Ctx *c) { /* func_00287BE8 */
ENTER(0x287be8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00266A28(c); return; }
}

void F_00287C00(Ctx *c) { /* func_00287C00 */
ENTER(0x287c00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00266AA8(c); return; }
}

void F_00287C18(Ctx *c) { /* func_00287C18 */
ENTER(0x287c18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x287c28);  F_00291488(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00286C70(c); return; }
}

void F_00287C38(Ctx *c) { /* func_00287C38 */
ENTER(0x287c38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00286C90(c); return; }
}

void F_00287C50(Ctx *c) { /* func_00287C50 */
ENTER(0x287c50);
 return;
}

void F_00287C58(Ctx *c) { /* func_00287C58 */
ENTER(0x287c58);
 return;
}

void F_00287C60(Ctx *c) { /* func_00287C60 */
ENTER(0x287c60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269118(c); return; }
}

void F_00287C78(Ctx *c) { /* func_00287C78 */
ENTER(0x287c78);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00269130(c); return; }
}

void F_00287C90(Ctx *c) { /* func_00287C90 */
ENTER(0x287c90);
SET64(2, RD(0) + RD(0)); return;
}

void F_00287C98(Ctx *c) { /* func_00287C98 */
ENTER(0x287c98);
SET64(2, RD(0) + RD(0)); return;
}

void F_00287CA0(Ctx *c) { /* func_00287CA0 */
ENTER(0x287ca0);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x287cb4); SET64(5, (s32)rd32(c, (RW(4) + 7996))); F_00285818(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00287CC8(Ctx *c) { /* func_00287CC8 */
ENTER(0x287cc8);
SET64(2, RD(0) + RD(0)); return;
}

void F_00287CD0(Ctx *c) { /* func_00287CD0 */
ENTER(0x287cd0);
SET64(2, RD(0) + RD(0)); return;
}

void F_00287CD8(Ctx *c) { /* func_00287CD8 */
ENTER(0x287cd8);
SET64(2, RD(0) + RD(0)); return;
}

void F_00287CE0(Ctx *c) { /* func_00287CE0 */
ENTER(0x287ce0);
SET64(2, RD(0) + RD(0)); return;
}

void F_00287CE8(Ctx *c) { /* func_00287CE8 */
ENTER(0x287ce8);
SET64(2, RD(0) + RD(0)); return;
}

void F_00287CF0(Ctx *c) { /* func_00287CF0 */
ENTER(0x287cf0);
SET64(2, RD(0) + RD(0)); return;
}

void F_00287CF8(Ctx *c) { /* func_00287CF8 */
ENTER(0x287cf8);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(5, (s32)rd32(c, (RW(4) + 7996)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00284B70(c); return; }
}

void F_00287D18(Ctx *c) { /* func_00287D18 */
ENTER(0x287d18);
SET32(29, RW(29) + -16);
SET64(2, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(7, RD(6) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 7996)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00284C48(c); return; }
}

void F_00287D40(Ctx *c) { /* func_00287D40 */
ENTER(0x287d40);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x501);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00287D60(Ctx *c) { /* func_00287D60 */
ENTER(0x287d60);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0x501);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00287D80(Ctx *c) { /* func_00287D80 */
ENTER(0x287d80);
SET64(2, RD(0) + RD(0)); return;
}

void F_00287D88(Ctx *c) { /* func_00287D88 */
ENTER(0x287d88);
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
SET64(31, 0x287dbc); SET64(20, RD(8) + RD(0)); F_00287BC8(c);
SET64(5, (s64)(s32)0xff000000);
SET32(3, RW(17) + -188);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0x171);
{ int t = RD(2) == RD(0); SET64(3, RD(3) < (u64)(s64)68); if (t) goto L_00287DF8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_002879A8(c); return; }
L_00287DF8:;
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00287E1C; }
SET64(4, (s32)rd32(c, (RW(16) + 8052)));
SET32(3, RW(17) << 2);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(4) + 336), RW(19));
wr32(c, (RW(3) + -688), RW(18));
wr32(c, (RW(4) + 340), RW(20));
SET64(16, rd64(c, (RW(29) + 0)));
L_00287E1C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00287E38(Ctx *c) { /* func_00287E38 */
ENTER(0x287e38);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_00287E48; }
SET64(3, (s32)rd32(c, (RW(4) + 8052)));
SET64(2, (s32)rd32(c, (RW(3) + 52)));
L_00287E48:;
 return;
}

void F_00287E50(Ctx *c) { /* func_00287E50 */
ENTER(0x287e50);
{ int t = RD(4) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_00287E60; }
SET64(3, (s32)rd32(c, (RW(4) + 8052)));
SET64(2, (s32)rd32(c, (RW(3) + 56)));
L_00287E60:;
 return;
}

void F_00287E68(Ctx *c) { /* func_00287E68 */
ENTER(0x287e68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x287e78);  F_00287ED8(c);
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x530000); if (t) goto L_00287EA0; }
L_00287E80:;
 { POLL(); goto L_00287E80; }
L_00287EA0:;
SET32(4, RW(0) + 8);
SET64(31, 0x287eac); SET32(5, RW(5) + 19168); F_002744D8(c);
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00287EC8; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0xd01);
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00287EC8:;
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(3) + -1312), RW(0));
SET32(29, RW(29) + 16); return;
}

void F_00287ED8(Ctx *c) { /* func_00287ED8 */
ENTER(0x287ed8);
SET64(2, RD(0) + RD(0)); return;
}

void F_00287EE0(Ctx *c) { /* func_00287EE0 */
ENTER(0x287ee0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x287ef0);  F_002745E0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_00287F00(Ctx *c) { /* func_00287F00 */
ENTER(0x287f00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00287F18(c); return; }
}

void F_00287F18(Ctx *c) { /* func_00287F18 */
ENTER(0x287f18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x287f30); SET64(16, RD(4) + RD(0)); F_00289038(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00287F48; }
SET64(2, RD(0) + RD(0)); goto L_00287F78;
L_00287F48:;
SET64(31, 0x287f50);  F_00287F90(c);
SET64(31, 0x287f58); SET64(4, RD(16) + RD(0)); F_00287FF0(c);
SET64(3, (s32)rd32(c, (RW(16) + 72)));
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + 2);
{ int t = RD(3) != RD(2); SET64(4, RD(16) + RD(0)); if (t) goto L_00287F74; }
SET64(31, 0x287f74);  F_002892C0(c);
L_00287F74:;
SET64(2, RD(17) + RD(0));
L_00287F78:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00287F90(Ctx *c) { /* func_00287F90 */
ENTER(0x287f90);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 85);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 16), RD(18));
SET64(2, (s32)rd32(c, (RW(16) + 8052)));
SET64(31, 0x287fb8); SET64(18, (s32)rd32(c, (RW(2) + 0))); F_00294A30(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 86);
SET64(31, 0x287fc8); SET64(17, RD(2) + RD(0)); F_00294A30(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(6, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00272450(c); return; }
}

void F_00287FF0(Ctx *c) { /* func_00287FF0 */
ENTER(0x287ff0);
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
SET64(21, (s32)rd32(c, (RW(17) + 40))); goto L_00288054;
L_00288030:;
SET64(31, 0x288038);  F_00288150(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002880B4; }
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET32(19, RW(19) + RW(2));
SET32(18, RW(18) + RW(3));
L_00288054:;
SET64(2, RSD(20) < RSD(18));
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002880B4; }
SET64(7, RD(21) + RD(0));
SET32(8, RW(29) + 8);
SET64(5, RD(29) + RD(0));
SET64(31, 0x288074); SET32(6, RW(29) + 4); F_002880E8(c);
SET64(4, RD(17) + RD(0));
SET64(16, RD(2) + RD(0));
SET32(7, RW(29) + 12);
{ int t = RD(16) != RD(0); SET32(8, RW(29) + 16); if (t) goto L_002880B4; }
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x288098); SET64(9, (s32)rd32(c, (RW(29) + 8))); F_00288170(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002880B0; }
SET64(5, (s32)rd32(c, (RW(29) + 12)));
{ int t = RD(5) != RD(0);  if (t) { POLL(); goto L_00288030; } }
L_002880B0:;
SET64(4, RD(17) + RD(0));
L_002880B4:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x2880c0); SET64(6, RD(19) + RD(0)); F_00289880(c);
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

void F_002880E8(Ctx *c) { /* func_002880E8 */
ENTER(0x2880e8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(8) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(6, RD(29) + RD(0));
SET64(31, 0x288114); SET64(5, (s32)rd32(c, (RW(4) + 8060))); F_00284B88(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_0028813C; }
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(4, (s32)rd32(c, (RW(29) + 12)));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET32(4, RW(3) + RW(4));
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(18) + 0), RW(5));
wr32(c, (RW(17) + 0), RW(4));
SET64(16, rd64(c, (RW(29) + 32)));
L_0028813C:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_00288150(Ctx *c) { /* func_00288150 */
ENTER(0x288150);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x288164); SET64(5, (s32)rd32(c, (RW(4) + 8060))); F_00284C60(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00288170(Ctx *c) { /* func_00288170 */
ENTER(0x288170);
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
SET64(31, 0x2881cc); SET64(20, (s32)rd32(c, (RW(19) + 0))); F_002890C0(c);
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_00288414; }
SET64(2, RSD(22) < (s64)4);
if (RD(2) != RD(0)) { SET64(30, RD(0) + RD(0)); goto L_002881EC; }
SET64(31, 0x2881e8); SET64(4, RD(23) + RD(0)); F_00274150(c);
SET64(30, RD(2) + RD(0));
L_002881EC:;
SET32(5, RW(0) + 87);
SET64(31, 0x2881f8); SET64(4, RD(17) + RD(0)); F_00294A30(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 88);
SET64(31, 0x288208); SET64(16, RD(2) + RD(0)); F_00294A30(c);
SET64(4, RD(20) + RD(0));
SET64(6, RD(2) + RD(0));
SET64(31, 0x288218); SET64(5, RD(16) + RD(0)); F_002724A0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x288224); SET32(5, RW(0) + 91); F_00294A30(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 92);
SET64(31, 0x288234); SET64(16, RD(2) + RD(0)); F_00294A30(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x288244); SET64(6, RD(2) + RD(0)); F_002724F0(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(23) + RD(0));
SET64(6, RD(22) + RD(0));
SET64(7, RD(29) + RD(0));
SET64(31, 0x28825c); SET32(8, RW(29) + 4); F_00272540(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00288274; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x288270); SET64(5, RD(5) | 0xd03); F_002879A8(c);
wr32(c, (RW(29) + 20), RW(2));
L_00288274:;
SET64(16, (s32)rd32(c, (RW(29) + 4)));
SET64(2, (s64)(s32)0x20000);
SET64(2, RD(16) & RD(2));
{ int t = RD(2) == RD(0); SET64(5, RD(20) + RD(0)); if (t) goto L_0028829C; }
SET64(4, RD(17) + RD(0));
SET64(6, RD(23) + RD(0));
SET64(31, 0x288298); SET64(7, RD(22) + RD(0)); F_002897C8(c);
SET64(16, (s32)rd32(c, (RW(29) + 4)));
L_0028829C:;
SET64(2, (s64)(s32)0x80000);
{ int t = RD(16) != RD(2);  if (t) goto L_002882F0; }
SET64(31, 0x2882b0); SET64(4, RD(17) + RD(0)); F_00285B38(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 4))); goto L_002882D0; }
SET64(31, 0x2882c0); SET64(4, RD(17) + RD(0)); F_002890A8(c);
SET32(2, RW(0) + 4);
wr32(c, (RW(21) + 0), RW(2)); goto L_00288408;
L_002882D0:;
{ int t = RD(2) != RD(16);  if (t) goto L_002882F0; }
SET64(31, 0x2882e0); SET64(4, RD(17) + RD(0)); F_00285B58(c);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 4); if (t) goto L_002882F0; }
wr32(c, (RW(21) + 0), RW(2)); goto L_00288408;
L_002882F0:;
{ int t = RD(30) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_00288378; }
SET64(5, RD(23) + RD(0));
SET64(6, RD(22) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x28830c); SET64(7, RD(18) + RD(0)); F_00288440(c);
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(21) + 0), RW(2));
SET64(5, (s32)rd32(c, (RW(18) + 0)));
{ int t = RSD(5) <= 0; SET64(2, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_00288410; }
SET64(3, (s32)rd32(c, (RW(19) + 344)));
{ int t = RSD(3) < 0; SET64(16, rd64(c, (RW(29) + 32))); if (t) goto L_00288414; }
SET64(4, (s32)rd32(c, (RW(17) + 40)));
SET64(2, RSD(3) < RSD(4));
{ int t = RD(2) != RD(0); SET32(6, RW(3) + RW(5)); if (t) goto L_00288348; }
SET32(2, RW(3) + RW(5)); goto L_00288408;
L_00288348:;
SET64(2, RSD(4) < RSD(6));
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 344), RW(6)); goto L_00288370; }
SET32(3, RW(4) - RW(3));
SET32(3, RW(5) - RW(3));
wr32(c, (RW(18) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 40)));
SET32(2, RW(2) + RW(3)); goto L_00288408;
L_00288370:;
wr32(c, (RW(18) + 0), RW(0)); goto L_0028840C;
L_00288378:;
SET64(3, (s64)(s32)0x40000);
SET64(2, RD(2) & RD(3));
if (RD(2) != RD(0)) { SET64(5, (s32)rd32(c, (RW(29) + 0))); goto L_002883C8; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x288394); SET32(5, RW(29) + 8); F_00289258(c);
SET64(2, (s32)rd32(c, (RW(29) + 8)));
{ int t = RD(2) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_00288410; }
SET64(2, (s32)rd32(c, (RW(17) + 40)));
SET64(2, RSD(2) < RSD(22));
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_00288410; }
SET64(2, (s32)rd32(c, (RW(29) + 0)));
if (RSD(2) <= 0) { SET32(2, RW(0) + 1); goto L_002883BC; }
L_002883BC:;
wr32(c, (RW(21) + 0), RW(2));
wr32(c, (RW(18) + 0), RW(2)); goto L_0028840C;
L_002883C8:;
SET64(4, RD(17) + RD(0));
SET32(7, RW(29) + 12);
SET32(8, RW(29) + 16);
SET32(6, RW(22) - RW(5));
SET64(31, 0x2883e0); SET32(5, RW(23) + RW(5)); F_002885E8(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(29) + 20), RW(2));
SET64(2, (s32)rd32(c, (RW(29) + 16)));
{ int t = RD(2) != RD(3); SET32(2, RW(0) + -1); if (t) goto L_00288408; }
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET32(2, RW(2) + RW(3));
wr32(c, (RW(21) + 0), RW(2));
SET32(2, RW(0) + -1);
L_00288408:;
wr32(c, (RW(19) + 344), RW(2));
L_0028840C:;
SET64(2, (s32)rd32(c, (RW(29) + 20)));
L_00288410:;
SET64(16, rd64(c, (RW(29) + 32)));
L_00288414:;
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

void F_00288440(Ctx *c) { /* func_00288440 */
ENTER(0x288440);
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
{ int t = RD(2) != RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_00288498; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x288490); SET64(5, RD(18) + RD(0)); F_00288520(c);
if (RD(2) != RD(0)) { wr32(c, (RW(19) + 0), RW(18)); goto L_002884F8; }
L_00288498:;
SET64(2, RSD(16) < (s64)4);
{ int t = RD(2) != RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002884D0; }
SET64(20, (s64)(s32)0xd0000);
L_002884A8:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2884b4); SET32(17, RW(17) + 1); F_00274150(c);
SET64(2, RD(2) & RD(20));
if (RD(2) != RD(0)) { wr32(c, (RW(19) + 0), RW(18)); goto L_002884F8; }
SET32(16, RW(16) + -1);
SET64(2, RSD(16) < (s64)4);
{ int t = RD(2) == RD(0); SET32(18, RW(18) + 1); if (t) { POLL(); goto L_002884A8; } }
L_002884D0:;
SET32(2, RW(16) + -1);
SET64(2, RD(2) < (u64)(s64)3);
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 0), RW(18)); goto L_002884F8; }
SET64(4, RD(21) + RD(0));
SET64(31, 0x2884ec); SET32(5, RW(17) + RW(16)); F_00288560(c);
SET32(3, RW(18) + RW(16));
if (RD(2) != 0) SET64(18, RD(3));
wr32(c, (RW(19) + 0), RW(18));
L_002884F8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(21, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_00288520(Ctx *c) { /* func_00288520 */
ENTER(0x288520);
{ int t = RSD(5) <= 0; SET64(6, RD(0) + RD(0)); if (t) goto L_00288554; }
SET64(3, rd8(c, (RW(4) + 0)));
L_00288530:;
SET32(4, RW(4) + 1);
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00288558; }
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(5));
if (RD(2) != RD(0)) { SET64(3, rd8(c, (RW(4) + 0))); { POLL(); goto L_00288530; } }
L_00288554:;
SET32(2, RW(0) + 1);
L_00288558:;
 return;
}

void F_00288560(Ctx *c) { /* func_00288560 */
ENTER(0x288560);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x288574); SET64(16, RD(5) + RD(0)); F_002885C0(c);
SET64(4, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 12))); goto L_002885A0; }
SET64(2, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002885B0; }
SET64(2, (s32)rd32(c, (RW(4) + 20)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002885B0; }
SET64(3, (s32)rd32(c, (RW(4) + 12)));
L_002885A0:;
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(2) + RW(3));
SET64(2, RD(16) ^ RD(2));
SET64(2, RD(2) < (u64)(s64)1);
L_002885B0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002885C0(Ctx *c) { /* func_002885C0 */
ENTER(0x2885c0);
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

void F_002885E8(Ctx *c) { /* func_002885E8 */
ENTER(0x2885e8);
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
SET64(31, 0x288640); SET64(4, (s32)rd32(c, (RW(17) + 0))); F_00274448(c);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_00288658; }
SET64(5, (s64)(s32)0xff000000);
SET64(31, 0x288654); SET64(5, RD(5) | 0xd06); F_002879A8(c);
SET64(22, RD(2) + RD(0));
L_00288658:;
SET64(16, (s32)rd32(c, (RW(29) + 36)));
SET64(7, (s32)rd32(c, (RW(29) + 16)));
SET64(3, (s32)rd32(c, (RW(29) + 20)));
SET64(5, (s32)rd32(c, (RW(29) + 24)));
{ int t = RSD(16) >= 0; SET64(8, rd64(c, (RW(29) + 0))); if (t) goto L_00288688; }
SET64(5, (s64)(s32)0xff000000);
SET64(4, RD(18) + RD(0));
SET64(31, 0x288680); SET64(5, RD(5) | 0xd0e); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 48))); goto L_00288738;
L_00288688:;
if (RD(16) != RD(0)) { SET64(2, RSD(21) < RSD(16)); goto L_002886A8; }
SET32(2, RW(0) + 1);
wr32(c, (RW(20) + 0), RW(0));
wr32(c, (RW(19) + 0), RW(2));
SET64(2, RD(0) + RD(0)); goto L_00288734;
L_002886A8:;
if (RD(2) == RD(0)) { SET32(2, RW(7) << 2); goto L_002886C8; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x2886bc); SET64(5, RD(0) + RD(0)); F_00289258(c);
SET64(2, RD(0) + RD(0)); goto L_00288734;
L_002886C8:;
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + -688)));
if (RD(4) == RD(0)) { SET32(3, RW(3) << 2); goto L_002886F8; }
SET64(6, (s32)rd32(c, (RW(17) + 340)));
SET64(8, RD(23) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 336)));
SET64(31, 0x2886ec); SET64(9, RD(16) + RD(0)); F_00288760(c);
wr32(c, (RW(19) + 0), RW(2)); goto L_00288718;
L_002886F8:;
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 4992)));
SET64(6, RD(23) + RD(0));
{ u32 t = RW(2); SET64(31, 0x288714); SET64(7, RD(16) + RD(0)); rt_call(c, t); }
wr32(c, (RW(19) + 0), RW(2));
L_00288718:;
SET64(8, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(8) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_00288730; }
if (RD(8) != RD(2)) { SET64(22, RD(8) + RD(0)); goto L_00288730; }
wr32(c, (RW(20) + 0), RW(16));
L_00288730:;
SET64(2, RD(22) + RD(0));
L_00288734:;
SET64(16, rd64(c, (RW(29) + 48)));
L_00288738:;
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

void F_00288760(Ctx *c) { /* func_00288760 */
ENTER(0x288760);
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
SET64(31, 0x288790); SET64(17, RD(7) + RD(0)); F_00288D18(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 1);
if (RD(16) != RD(2)) { SET64(2, RD(16) + RD(0)); goto L_002887B4; }
{ int t = RD(18) == RD(0); SET64(4, RD(19) + RD(0)); if (t) goto L_002887B0; }
{ u32 t = RW(18); SET64(31, 0x2887b0); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_002887B0:;
SET64(2, RD(16) + RD(0));
L_002887B4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002887D0(Ctx *c) { /* func_002887D0 */
ENTER(0x2887d0);
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
SET64(31, 0x288818); SET64(19, RD(8) + RD(0)); F_00294A30(c);
{ int t = RD(2) != RD(0); SET32(22, RW(21) + 8044); if (t) goto L_00288828; }
SET32(2, RW(0) + 1); goto L_00288910;
L_00288828:;
SET32(18, RW(0) + -1);
SET64(16, (s32)rd32(c, (RW(22) + 8)));
SET64(2, (s32)rd32(c, (RW(16) + 56)));
if (RD(2) == RD(18)) { wr32(c, (RW(16) + 56), RW(17)); goto L_0028883C; }
L_0028883C:;
SET64(2, (s32)rd32(c, (RW(16) + 48)));
if (RD(2) == RD(18)) { wr32(c, (RW(16) + 48), RW(17)); goto L_00288848; }
L_00288848:;
SET64(4, RD(21) + RD(0));
SET64(31, 0x288854); SET32(5, RW(0) + 30); F_00294A30(c);
SET64(20, RD(2) + RD(0));
{ int t = RD(20) == RD(18); SET64(4, RD(21) + RD(0)); if (t) goto L_00288894; }
SET64(31, 0x288868); SET32(5, RW(0) + 55); F_00294A30(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 48))); goto L_00288888; }
SET64(2, (s32)rd32(c, (RW(16) + 40)));
SET64(2, RSD(17) < RSD(2));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 56), RW(20)); goto L_00288894; }
SET64(3, (s32)rd32(c, (RW(16) + 56))); goto L_00288898;
L_00288888:;
if (RD(17) != RD(2)) { SET64(3, (s32)rd32(c, (RW(16) + 56))); goto L_00288898; }
wr32(c, (RW(16) + 56), RW(20));
L_00288894:;
SET64(3, (s32)rd32(c, (RW(16) + 56)));
L_00288898:;
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(17); wr32(c, (RW(16) + 40), RW(17)); if (t) goto L_00288910; }
if (RSD(19) < 0) { SET64(5, (s32)rd32(c, (RW(22) + 24))); goto L_002888D0; }
SET64(2, rd64(c, (RW(16) + 16)));
SET64(3, rd64(c, (RW(16) + 24)));
SET64(4, RSD(19) < RSD(2));
SET64(5, RSD(19) < RSD(3));
if (RD(4) != 0) SET64(2, RD(19));
if (RD(5) != 0) SET64(3, RD(19));
wr64(c, (RW(16) + 16), RD(2));
wr64(c, (RW(16) + 24), RD(3));
SET64(5, (s32)rd32(c, (RW(22) + 24)));
L_002888D0:;
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
SET32(29, RW(29) + 80); { F_00288E38(c); return; }
L_00288910:;
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

void F_00288940(Ctx *c) { /* func_00288940 */
ENTER(0x288940);
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
SET64(31, 0x288988); SET64(17, RD(4) + RD(0)); F_00294A30(c);
{ int t = RD(2) != RD(0); SET32(23, RW(17) + 8044); if (t) goto L_00288998; }
SET32(2, RW(0) + 1); goto L_00288AE8;
L_00288998:;
SET32(21, RW(0) + -1);
SET64(16, (s32)rd32(c, (RW(23) + 8)));
SET64(2, (s32)rd32(c, (RW(16) + 52)));
if (RD(2) != RD(21)) { SET64(2, (s32)rd32(c, (RW(16) + 44))); goto L_002889C0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2889b8); SET64(5, RD(22) + RD(0)); F_00288B18(c);
wr32(c, (RW(16) + 52), RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 44)));
L_002889C0:;
if (RD(2) == RD(21)) { wr32(c, (RW(16) + 44), RW(22)); goto L_002889C8; }
L_002889C8:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2889d4); SET32(5, RW(0) + 29); F_00294A30(c);
SET64(18, RD(2) + RD(0));
{ int t = RD(18) == RD(21); SET64(4, RD(17) + RD(0)); if (t) goto L_00288A70; }
SET64(31, 0x2889e8); SET32(5, RW(0) + 55); F_00294A30(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 44))); goto L_00288A08; }
SET64(2, (s32)rd32(c, (RW(16) + 36)));
SET64(2, RSD(22) < RSD(2));
{ int t = RD(2) != RD(0); SET64(4, (s32)rd32(c, (RW(16) + 52))); if (t) goto L_00288A10; }
wr32(c, (RW(16) + 36), RW(22)); goto L_00288A78;
L_00288A08:;
{ int t = RD(22) != RD(2); SET64(4, (s32)rd32(c, (RW(16) + 52))); if (t) goto L_00288A74; }
L_00288A10:;
{ int t = RD(4) == RD(18); SET64(2, RSD(19) < (s64)4); if (t) goto L_00288A74; }
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 36), RW(22)); goto L_00288A78; }
SET64(2, (s8)rd8(c, (RW(20) + 0)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 36), RW(22)); goto L_00288A78; }
SET64(2, (s8)rd8(c, (RW(20) + 1)));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 36), RW(22)); goto L_00288A78; }
SET64(3, rd8(c, (RW(20) + 2)));
SET32(2, RW(0) + 1);
if (RD(3) != RD(2)) { wr32(c, (RW(16) + 36), RW(22)); goto L_00288A78; }
SET64(3, rd8(c, (RW(20) + 3)));
SET32(2, RW(0) + 179);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 184); if (t) goto L_00288A60; }
if (RD(3) != RD(2)) { wr32(c, (RW(16) + 36), RW(22)); goto L_00288A78; }
L_00288A60:;
wr32(c, (RW(16) + 52), RW(18));
SET64(4, RD(18) + RD(0)); goto L_00288A74;
L_00288A70:;
SET64(4, (s32)rd32(c, (RW(16) + 52)));
L_00288A74:;
wr32(c, (RW(16) + 36), RW(22));
L_00288A78:;
{ int t = RD(4) != RD(22); SET32(2, RW(0) + 1); if (t) goto L_00288AE8; }
SET64(6, RD(19) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x288a90); SET64(5, RD(20) + RD(0)); F_00290A90(c);
SET64(19, RD(2) + RD(0));
{ int t = RSD(19) <= 0; SET64(2, RD(0) + RD(0)); if (t) goto L_00288AE8; }
SET64(5, (s32)rd32(c, (RW(23) + 20)));
SET64(8, RD(30) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(31, 0x288ab4); SET64(7, RD(19) + RD(0)); F_00288E38(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 1);
{ int t = RD(16) == RD(2); SET64(4, RD(17) + RD(0)); if (t) goto L_00288AD8; }
SET64(31, 0x288acc); SET64(5, RD(19) + RD(0)); F_00290B00(c);
SET64(2, RD(16) + RD(0)); goto L_00288AE8;
L_00288AD8:;
SET64(5, RD(20) + RD(0));
SET64(31, 0x288ae4); SET64(6, RD(19) + RD(0)); F_00290E40(c);
SET64(2, RD(16) + RD(0));
L_00288AE8:;
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

void F_00288B18(Ctx *c) { /* func_00288B18 */
ENTER(0x288b18);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
SET32(5, RW(0) + 59);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x288b3c); SET64(18, RD(4) + RD(0)); F_00294A30(c);
SET64(16, RD(2) + RD(0));
SET64(2, RD(17) + RD(0));
SET32(3, RW(0) + 1);
{ int t = RD(16) == RD(3); SET64(4, RSD(16) < (s64)2); if (t) goto L_00288B84; }
if (RD(4) != RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_00288B88; }
SET32(2, RW(0) + 2);
if (RD(16) != RD(2)) { SET64(2, RD(17) + RD(0)); goto L_00288B84; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(31, 0x288b74); SET32(6, RW(29) + 4); F_002895C8(c);
SET64(2, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(3, RSD(3) < (s64)2);
if (RD(3) != 0) SET64(2, RD(17));
L_00288B84:;
SET64(16, rd64(c, (RW(29) + 16)));
L_00288B88:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00288BA0(Ctx *c) { /* func_00288BA0 */
ENTER(0x288ba0);
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
SET64(31, 0x288bd0); SET64(16, RD(5) + RD(0)); F_00286CD0(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(6, RD(18) + RD(0));
{ int t = RD(2) == RD(0); SET64(7, RD(19) + RD(0)); if (t) goto L_00288C18; }
SET64(31, 0x288bec);  F_00289C18(c);
SET32(6, RW(18) + -18);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET64(4, RD(17) + RD(0));
{ int t = RD(2) == RD(0); SET32(7, RW(19) + 18); if (t) goto L_00288C0C; }
SET64(31, 0x288c0c);  F_00288C40(c);
L_00288C0C:;
SET32(2, RW(0) + 1); goto L_00288C20;
L_00288C18:;
SET64(31, 0x288c20); SET64(4, RD(17) + RD(0)); F_00288C40(c);
L_00288C20:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_00288C40(Ctx *c) { /* func_00288C40 */
ENTER(0x288c40);
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
{ int t = RD(3) == RD(8); SET64(5, RD(3) + RD(0)); if (t) goto L_00288CF4; }
SET64(31, 0x288c94);  F_00284B00(c);
SET64(5, RD(19) + RD(0));
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(17) + RD(0));
SET64(18, (s32)rd32(c, (RW(29) + 4)));
SET32(2, RW(0) + 1);
SET64(4, RD(3) + RD(0));
SET64(19, (s32)rd32(c, (RW(29) + 8)));
{ int t = RD(3) == RD(0); SET64(20, (s32)rd32(c, (RW(29) + 12))); if (t) goto L_00288CF4; }
SET64(31, 0x288cc0);  F_00288D18(c);
SET64(17, RD(2) + RD(0));
SET32(2, RW(0) + 1);
if (RD(17) != RD(2)) { SET64(2, RD(17) + RD(0)); goto L_00288CF4; }
{ int t = RD(18) == RD(0); SET64(4, RD(21) + RD(0)); if (t) goto L_00288CE0; }
{ u32 t = RW(18); SET64(31, 0x288ce0); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_00288CE0:;
{ int t = RD(19) == RD(0); SET64(4, RD(20) + RD(0)); if (t) goto L_00288CF0; }
{ u32 t = RW(19); SET64(31, 0x288cf0); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_00288CF0:;
SET64(2, RD(17) + RD(0));
L_00288CF4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_00288D18(Ctx *c) { /* func_00288D18 */
ENTER(0x288d18);
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
{ u32 t = RW(2); SET64(31, 0x288d48); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(3, RSD(2) < RSD(16));
SET64(2, RD(0) + RD(0));
SET64(5, RD(17) + RD(0));
{ int t = RD(3) != RD(0); SET64(6, RD(16) + RD(0)); if (t) goto L_00288DA8; }
SET64(31, 0x288d68);  F_00288DC0(c);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) == RD(0); SET32(16, RW(16) - RW(3)); if (t) goto L_00288DA8; }
{ int t = RSD(16) <= 0; SET32(17, RW(17) + RW(3)); if (t) goto L_00288DA4; }
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x288d8c); SET64(6, RD(16) + RD(0)); F_00288DC0(c);
SET64(3, (s64)(s32)0x410000);
{ int t = RD(2) == RD(16); SET32(3, RW(3) + -1312); if (t) goto L_00288DA4; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
L_00288DA4:;
SET32(2, RW(0) + 1);
L_00288DA8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00288DC0(Ctx *c) { /* func_00288DC0 */
ENTER(0x288dc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(7, RD(29) + RD(0));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x288dec); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(5, RD(17) + RD(0));
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x288dfc); SET64(6, (s32)rd32(c, (RW(29) + 4))); F_00271EB0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x288e14); SET64(6, RD(29) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00288E30(Ctx *c) { /* func_00288E30 */
ENTER(0x288e30);
SET32(2, RW(0) + 1); return;
}

void F_00288E38(Ctx *c) { /* func_00288E38 */
ENTER(0x288e38);
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
SET64(31, 0x288e80); SET64(16, RD(7) + RD(0)); F_00284B70(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 80))); goto L_00288F9C; }
SET64(17, (s32)rd32(c, (RW(29) + 4)));
SET64(3, (s32)rd32(c, (RW(29) + 12)));
SET64(19, (s32)rd32(c, (RW(29) + 0)));
SET32(3, RW(17) + RW(3));
SET64(23, (s32)rd32(c, (RW(29) + 8)));
SET64(3, RSD(3) < RSD(16));
{ int t = RD(3) != RD(0); SET64(30, (s32)rd32(c, (RW(29) + 20))); if (t) goto L_00288F98; }
SET32(2, RW(0) + 1);
if (RD(22) != RD(2)) { SET32(2, RW(0) + 2); goto L_00288F00; }
{ int t = RSD(18) < 0; SET64(4, RD(20) + RD(0)); if (t) goto L_00288F40; }
SET64(31, 0x288ec4); SET32(5, RW(0) + 1); F_002938E0(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_00288F98; }
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 1);
SET32(6, RW(29) + 32);
SET32(7, RW(29) + 64);
wr64(c, (RW(29) + 32), RD(18));
wr32(c, (RW(29) + 40), RW(19));
SET64(31, 0x288eec); wr32(c, (RW(29) + 44), RW(16)); F_002935E0(c);
if (RD(2) == RD(0)) { SET64(2, RSD(17) < RSD(16)); goto L_00288F44; }
SET64(16, rd64(c, (RW(29) + 80))); goto L_00288F9C;
L_00288F00:;
{ int t = RD(22) != RD(2); SET64(2, RSD(17) < RSD(16)); if (t) goto L_00288F44; }
SET64(2, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(2) + -1284)));
{ int t = RD(2) == RD(0); SET32(4, RW(20) + 4824); if (t) goto L_00288F40; }
wr64(c, (RW(29) + 48), RD(18));
wr32(c, (RW(29) + 56), RW(16));
{ u32 t = RW(2); SET64(31, 0x288f28); SET32(5, RW(29) + 48); rt_call(c, t); }
SET32(3, RW(0) + -1);
if (RD(2) != RD(3)) { SET64(2, RSD(17) < RSD(16)); goto L_00288F44; }
SET64(2, RD(0) + RD(0)); goto L_00288F98;
L_00288F40:;
SET64(2, RSD(17) < RSD(16));
L_00288F44:;
{ int t = RD(2) != RD(0); SET64(4, RD(19) + RD(0)); if (t) goto L_00288F60; }
SET64(5, RD(21) + RD(0));
SET64(31, 0x288f58); SET64(6, RD(16) + RD(0)); F_00271EB0(c);
SET64(4, RD(20) + RD(0)); goto L_00288F80;
L_00288F60:;
SET64(5, RD(21) + RD(0));
SET64(31, 0x288f6c); SET64(6, RD(17) + RD(0)); F_00271EB0(c);
SET64(4, RD(23) + RD(0));
SET32(5, RW(21) + RW(17));
SET64(31, 0x288f7c); SET32(6, RW(16) - RW(17)); F_00271EB0(c);
SET64(4, RD(20) + RD(0));
L_00288F80:;
SET64(5, RD(22) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x288f90); SET64(7, RD(30) + RD(0)); F_00284C48(c);
SET32(3, RW(0) + 1);
if (RD(2) == 0) SET64(2, RD(3));
L_00288F98:;
SET64(16, rd64(c, (RW(29) + 80)));
L_00288F9C:;
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

void F_00288FC8(Ctx *c) { /* func_00288FC8 */
ENTER(0x288fc8);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 8044);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x288ff4); SET64(5, (s32)rd32(c, (RW(17) + 24))); F_00285858(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x289004); SET32(6, RW(0) + 1); F_00285858(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 28)));
SET64(31, 0x289014); SET32(6, RW(0) + 1); F_00285858(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00290B60(c); return; }
}

void F_00289038(Ctx *c) { /* func_00289038 */
ENTER(0x289038);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 8044);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x289060); SET64(5, (s32)rd32(c, (RW(17) + 24))); F_00285878(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x289070); SET64(18, RD(2) + RD(0)); F_00285878(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 28)));
SET64(19, RD(2) + RD(0));
SET64(31, 0x289084); SET64(18, RD(18) & RD(19)); F_00285878(c);
SET64(2, RD(18) & RD(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002890A8(Ctx *c) { /* func_002890A8 */
ENTER(0x2890a8);
SET64(3, (s32)rd32(c, (RW(4) + 8052)));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 32), RW(2)); return;
}

void F_002890C0(Ctx *c) { /* func_002890C0 */
ENTER(0x2890c0);
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
{ int t = RD(2) != RD(0); SET64(19, (s32)rd32(c, (RW(16) + 16))); if (t) goto L_00289160; }
SET64(31, 0x289110);  F_00274150(c);
SET64(17, RD(2) + RD(0));
SET64(2, (s64)(s32)0x80000);
{ int t = RD(17) != RD(2);  if (t) goto L_00289150; }
SET64(2, (s32)rd32(c, (RW(16) + 32)));
if (RSD(2) >= 0) { SET32(2, RW(0) + 1); goto L_00289144; }
SET64(5, RD(19) + RD(0));
SET64(31, 0x289138); SET64(4, RD(18) + RD(0)); F_002850A0(c);
SET32(2, RW(2) + 4);
wr32(c, (RW(16) + 32), RW(2));
SET32(2, RW(0) + 1);
L_00289144:;
wr32(c, (RW(20) + 60), RW(2)); goto L_00289164;
L_00289150:;
if (RD(17) != RD(0)) { wr32(c, (RW(20) + 60), RW(0)); goto L_00289164; }
SET64(4, RD(18) + RD(0)); goto L_00289168;
L_00289160:;
SET64(17, RD(0) + RD(0));
L_00289164:;
SET64(4, RD(18) + RD(0));
L_00289168:;
SET64(31, 0x289170); SET64(5, RD(17) + RD(0)); F_00289208(c);
{ int t = RD(2) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_00289188; }
SET64(31, 0x289180); SET32(5, RW(0) + 1); F_00288FC8(c);
SET64(2, RD(0) + RD(0)); goto L_002891DC;
L_00289188:;
SET64(2, RSD(22) < (s64)4);
{ int t = RD(2) == RD(0); SET64(3, RSD(21) < (s64)64); if (t) goto L_002891B0; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x2891a0); SET64(5, RD(29) + RD(0)); F_00289258(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
{ int t = RD(3) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002891DC; }
SET64(3, RSD(21) < (s64)64);
L_002891B0:;
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_002891DC; }
SET64(2, (s64)(s32)0x10000);
{ int t = RD(17) == RD(2); SET64(3, (s64)(s32)0x40000); if (t) goto L_002891CC; }
{ int t = RD(17) != RD(3); SET32(2, RW(0) + 1); if (t) goto L_002891DC; }
L_002891CC:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2891d8); SET64(5, RD(0) + RD(0)); F_00289258(c);
SET64(2, RD(0) + RD(0));
L_002891DC:;
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

void F_00289208(Ctx *c) { /* func_00289208 */
ENTER(0x289208);
SET32(29, RW(29) + -16);
SET64(3, (s64)(s32)0x80000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
{ int t = RD(5) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00289248; }
SET64(31, 0x28922c);  F_00285B38(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00289244; }
SET64(31, 0x28923c);  F_00285B58(c);
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_00289248; }
L_00289244:;
SET64(2, RD(0) + RD(0));
L_00289248:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00289258(Ctx *c) { /* func_00289258 */
ENTER(0x289258);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(2, RW(16) + 8044);
wr64(c, (RW(29) + 24), RD(31));
SET64(5, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x289284); SET64(17, (s32)rd32(c, (RW(2) + 8))); F_00285878(c);
SET64(5, RD(0) + RD(0));
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_002892A0; }
SET64(31, 0x28929c); SET64(5, (s32)rd32(c, (RW(17) + 60))); F_00288FC8(c);
SET32(5, RW(0) + 1);
L_002892A0:;
if (RD(18) != RD(0)) { wr32(c, (RW(18) + 0), RW(5)); goto L_002892A8; }
L_002892A8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002892C0(Ctx *c) { /* func_002892C0 */
ENTER(0x2892c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x2892dc); SET32(6, RW(29) + 4); F_002895C8(c);
SET64(31, 0x2892e4); SET64(4, RD(16) + RD(0)); F_00289318(c);
SET64(31, 0x2892ec); SET64(4, RD(16) + RD(0)); F_00289678(c);
SET64(31, 0x2892f4); SET64(4, RD(16) + RD(0)); F_002894D0(c);
SET64(31, 0x2892fc); SET64(4, RD(16) + RD(0)); F_00289710(c);
SET64(31, 0x289304); SET64(4, RD(16) + RD(0)); F_002897C0(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00289318(Ctx *c) { /* func_00289318 */
ENTER(0x289318);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x289338); SET32(18, RW(0) + 1); F_002893A0(c);
{ int t = RD(2) == RD(18); SET64(4, RD(17) + RD(0)); if (t) goto L_00289388; }
SET64(16, (s32)rd32(c, (RW(17) + 8060)));
SET64(31, 0x28934c); SET64(5, RD(16) + RD(0)); F_00285838(c);
SET64(4, RD(17) + RD(0));
{ int t = RD(2) != RD(18); SET64(5, RD(16) + RD(0)); if (t) goto L_00289388; }
SET64(31, 0x289360);  F_00289470(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00289388; }
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00289410(c); return; }
L_00289388:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

static void B_002893A0(Ctx *c, u32 entry) { /* func_002893A0 */
ENTER(entry);
switch (entry) { case 0x289400: goto L_00289400; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 8044);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2893c8); SET64(5, (s32)rd32(c, (RW(17) + 24))); F_00285838(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x2893d8); SET64(18, RD(2) + RD(0)); F_00285838(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 28)));
SET64(19, RD(2) + RD(0));
SET64(31, 0x2893ec); SET64(18, RD(18) | RD(19)); F_00285838(c);
SET64(2, RD(18) | RD(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
L_00289400:;
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}
void F_002893A0(Ctx *c) { B_002893A0(c, 0x2893a0); }
void F_00289400(Ctx *c) { B_002893A0(c, 0x289400); }

void F_00289410(Ctx *c) { /* func_00289410 */
ENTER(0x289410);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 8044);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(6, RD(18) + RD(0));
SET64(31, 0x28943c); SET64(5, (s32)rd32(c, (RW(17) + 24))); F_00285818(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x28944c); SET64(6, RD(18) + RD(0)); F_00285818(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 28)));
SET64(6, RD(18) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00285818(c); return; }
}

void F_00289470(Ctx *c) { /* func_00289470 */
ENTER(0x289470);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x289484); SET64(16, RD(4) + RD(0)); F_002885C0(c);
SET64(6, (s32)rd32(c, (RW(16) + 8)));
SET64(4, RD(16) + RD(0));
SET32(16, RW(16) + 2564);
SET64(5, RD(0) + RD(0));
{ int t = RSD(6) > 0; SET64(7, (s32)rd32(c, (RW(16) + 88))); if (t) goto L_002894A0; }
SET64(6, (s32)rd32(c, (RW(2) + 12)));
L_002894A0:;
SET64(2, RSD(0) < RSD(6));
if (RD(2) == 0) SET64(6, RD(7));
SET64(3, RSD(6) < RSD(7));
SET64(16, RD(6) + RD(0));
SET64(31, 0x2894b8); if (RD(3) == 0) SET64(16, RD(7)); F_002850C0(c);
SET64(2, RSD(2) < RSD(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_002894D0(Ctx *c) { /* func_002894D0 */
ENTER(0x2894d0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 6);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2894f0); SET64(17, (s32)rd32(c, (RW(16) + 8052))); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00289540; }
SET64(31, 0x289500); SET32(5, RW(0) + 80); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00289540; }
SET64(31, 0x289510); SET32(5, RW(0) + 2); F_002850C0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00289544; }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
{ int t = RD(2) != RD(0);  if (t) goto L_00289544; }
SET64(31, 0x28952c); SET32(5, RW(0) + 6); F_00297190(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00289540; }
SET32(5, RW(0) + 6);
SET64(31, 0x289540); SET64(6, RD(0) + RD(0)); F_00294868(c);
L_00289540:;
SET64(4, RD(16) + RD(0));
L_00289544:;
SET64(31, 0x28954c); SET32(5, RW(0) + 5); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002895B0; }
SET64(31, 0x28955c); SET32(5, RW(0) + 79); F_00294A30(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002895B0; }
SET64(31, 0x28956c); SET32(5, RW(0) + 1); F_002850C0(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002895B4; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002895B4; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x28958c); SET32(5, RW(0) + 7); F_00297190(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002895B0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 5);
SET64(31, rd64(c, (RW(29) + 16)));
SET64(6, RD(0) + RD(0));
SET32(29, RW(29) + 32); { F_00294868(c); return; }
L_002895B0:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002895B4:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002895C8(Ctx *c) { /* func_002895C8 */
ENTER(0x2895c8);
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
L_00289608:;
SET64(6, RD(16) + RD(0));
SET32(16, RW(16) + 1);
SET64(4, RD(20) + RD(0));
SET64(31, 0x28961c); SET64(5, RD(29) + RD(0)); F_00274300(c);
SET64(6, RSD(16) < (s64)3);
SET64(4, (s32)rd32(c, (RW(29) + 8)));
SET64(5, (s32)rd32(c, (RW(29) + 12)));
SET64(2, RSD(4) < RSD(18));
SET64(3, RSD(5) < RSD(17));
if (RD(2) == 0) SET64(18, RD(4));
{ int t = RD(6) != RD(0); if (RD(3) == 0) SET64(17, RD(5)); if (t) { POLL(); goto L_00289608; } }
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

void F_00289678(Ctx *c) { /* func_00289678 */
ENTER(0x289678);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 56), RD(17));
SET32(17, RW(4) + 2316);
wr64(c, (RW(29) + 48), RD(16));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 64), RD(18));
wr64(c, (RW(29) + 72), RD(31));
SET64(18, (s32)rd32(c, (RW(4) + 8052)));
SET64(16, (s32)rd32(c, (RW(18) + 0)));
SET64(31, 0x2896a4); SET64(4, RD(16) + RD(0)); F_00274298(c);
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 12)));
SET32(5, RW(29) + 16);
{ int t = RSD(2) <= 0; SET32(6, RW(0) + 1); if (t) goto L_002896BC; }
wr32(c, (RW(17) + 24), RW(2));
L_002896BC:;
SET64(31, 0x2896c4);  F_00274300(c);
SET32(3, RW(0) + -1);
SET64(2, (s32)rd32(c, (RW(29) + 32)));
if (RD(2) != RD(3)) { wr32(c, (RW(17) + 28), RW(2)); goto L_002896D4; }
L_002896D4:;
SET64(2, (s32)rd32(c, (RW(17) + 36)));
if (RD(2) != RD(3)) { SET64(2, (s32)rd32(c, (RW(17) + 40))); goto L_002896EC; }
SET64(2, (s32)rd32(c, (RW(18) + 8)));
wr32(c, (RW(17) + 36), RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 40)));
L_002896EC:;
{ int t = RD(2) != RD(3); SET64(16, rd64(c, (RW(29) + 48))); if (t) goto L_002896FC; }
SET64(2, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(17) + 40), RW(2));
L_002896FC:;
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_00289710(Ctx *c) { /* func_00289710 */
ENTER(0x289710);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x289724); SET64(16, RD(4) + RD(0)); F_00289CC0(c);
SET64(5, RD(2) + RD(0));
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 1);
{ int t = RD(5) == RD(0); SET32(7, RW(16) + 3368); if (t) goto L_002897B0; }
SET64(6, (s32)rd32(c, (RW(16) + 8052)));
SET64(4, rd64(c, (RW(6) + 24)));
{ int t = RD(4) == RD(2); SET32(8, RW(16) + 2316); if (t) goto L_002897B0; }
SET64(2, rd64(c, (RW(5) + 32)));
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(2, RD(4) - RD(2));
{ int t = RD(3) != RD(0); wr64(c, (RW(7) + 344), RD(2)); if (t) goto L_002897B0; }
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
L_002897B0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002897C0(Ctx *c) { /* func_002897C0 */
ENTER(0x2897c0);
 return;
}

void F_002897C8(Ctx *c) { /* func_002897C8 */
ENTER(0x2897c8);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x2897f0); SET64(19, RD(7) + RD(0)); F_00289CC0(c);
SET64(16, RD(2) + RD(0));
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_00289868; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 32))); goto L_00289868; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x289814); SET64(5, RD(29) + RD(0)); F_002743B0(c);
SET64(5, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET32(2, RW(0) + 176);
SET64(3, RSD(7) < (s64)177);
SET64(4, (s32)rd32(c, (RW(29) + 12)));
if (RD(3) == 0) SET64(7, RD(2));
SET32(3, RW(16) + 48);
SET64(6, RD(7) + RD(0));
{ int t = RSD(4) <= 0; SET64(2, RD(3) + RD(0)); if (t) goto L_00289848; }
wr32(c, (RW(3) + 352), RW(7)); goto L_0028985C;
L_00289848:;
SET64(2, (s32)rd32(c, (RW(29) + 8)));
if (RSD(2) <= 0) { SET64(16, rd64(c, (RW(29) + 32))); goto L_00289868; }
wr32(c, (RW(3) + 356), RW(7));
SET32(2, RW(16) + 224);
L_0028985C:;
SET64(31, 0x289864); SET64(4, RD(2) + RD(0)); F_00271EB0(c);
SET64(16, rd64(c, (RW(29) + 32)));
L_00289868:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_00289880(Ctx *c) { /* func_00289880 */
ENTER(0x289880);
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
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002898E4; }
SET64(31, 0x2898bc);  F_002858E8(c);
SET64(4, rd64(c, (RW(16) + 2432)));
SET64(31, 0x2898c8); SET64(5, (s32)rd32(c, (RW(29) + 0))); F_00285AA0(c);
SET64(3, rd64(c, (RW(16) + 2440)));
SET64(4, rd64(c, (RW(16) + 2448)));
SET64(3, RD(18) + RD(3));
wr64(c, (RW(16) + 2432), RD(2));
SET64(4, RD(17) + RD(4));
wr64(c, (RW(16) + 2440), RD(3));
wr64(c, (RW(16) + 2448), RD(4));
L_002898E4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00289900(Ctx *c) { /* func_00289900 */
ENTER(0x289900);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(16) + 8592);
wr64(c, (RW(29) + 8), RD(17));
SET64(4, RD(18) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x289928); wr32(c, (RW(16) + 8052), RW(18)); F_002899C8(c);
SET64(31, 0x289930);  F_00274878(c);
SET64(17, RD(2) + RD(0));
SET64(5, (s64)(s32)0xff000000);
SET64(6, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
{ int t = RD(17) != RD(0); SET64(5, RD(5) | 0xd08); if (t) goto L_00289968; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_00289968:;
SET64(5, (s64)(s32)0x290000);
SET64(31, 0x289974); SET32(5, RW(5) + -26032); F_00274708(c);
{ int t = RD(2) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002899A8; }
SET64(31, 0x289984);  F_00289AB8(c);
SET64(5, (s64)(s32)0xff000000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(5) | 0xd09);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_002879A8(c); return; }
L_002899A8:;
wr32(c, (RW(18) + 0), RW(17));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002899C8(Ctx *c) { /* func_002899C8 */
ENTER(0x2899c8);
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
L_00289A20:;
SET32(7, RW(7) + -1);
wr32(c, (RW(6) + 0), RW(0));
{ int t = RSD(7) >= 0; SET32(6, RW(6) + -4); if (t) { POLL(); goto L_00289A20; } }
SET32(2, RW(0) + -1);
wr32(c, (RW(5) + 336), RW(0));
wr32(c, (RW(5) + 344), RW(2));
wr32(c, (RW(5) + 340), RW(0)); return;
}

void F_00289A50(Ctx *c) { /* func_00289A50 */
ENTER(0x289a50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00289A68(Ctx *c) { /* func_00289A68 */
ENTER(0x289a68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 8052)));
SET64(31, 0x289a84); SET64(4, (s32)rd32(c, (RW(2) + 0))); F_00289AB8(c);
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00289AA8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0xd0a);
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
L_00289AA8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00289AB8(Ctx *c) { /* func_00289AB8 */
ENTER(0x289ab8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00274A18(c); return; }
}

void F_00289AD0(Ctx *c) { /* func_00289AD0 */
ENTER(0x289ad0);
SET64(2, RD(0) + RD(0)); return;
}

void F_00289AD8(Ctx *c) { /* func_00289AD8 */
ENTER(0x289ad8);
SET64(2, RD(0) + RD(0)); return;
}

void F_00289AE0(Ctx *c) { /* func_00289AE0 */
ENTER(0x289ae0);
SET64(2, RD(0) + RD(0)); return;
}

void F_00289AE8(Ctx *c) { /* func_00289AE8 */
ENTER(0x289ae8);
SET64(2, RD(0) + RD(0)); return;
}

void F_00289AF0(Ctx *c) { /* func_00289AF0 */
ENTER(0x289af0);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xd0b);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00289B10(Ctx *c) { /* func_00289B10 */
ENTER(0x289b10);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xd0b);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00289B30(Ctx *c) { /* func_00289B30 */
ENTER(0x289b30);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xd0b);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00289B50(Ctx *c) { /* func_00289B50 */
ENTER(0x289b50);
SET32(29, RW(29) + -16);
SET64(5, (s64)(s32)0xff000000);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(5) | 0xd0b);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002879A8(c); return; }
}

void F_00289B70(Ctx *c) { /* func_00289B70 */
ENTER(0x289b70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x289b90); SET64(17, RD(4) + RD(0)); F_00289CC0(c);
SET64(16, RD(2) + RD(0));
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00289BFC; }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00289BF8; }
SET64(18, (s32)rd32(c, (RW(17) + 8052)));
SET64(31, 0x289bb4); SET64(4, RD(17) + RD(0)); F_00287010(c);
SET64(31, 0x289bbc); SET64(4, RD(17) + RD(0)); F_00289C18(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x289bd0); SET32(19, RW(17) + 3368); F_00289C20(c);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00289BFC; }
SET64(4, (s32)rd32(c, (RW(16) + 40)));
SET64(3, rd64(c, (RW(16) + 24)));
wr32(c, (RW(18) + 44), RW(4));
wr64(c, (RW(19) + 336), RD(3));
SET64(4, (s32)rd32(c, (RW(16) + 44)));
SET64(3, rd64(c, (RW(16) + 32)));
wr32(c, (RW(18) + 48), RW(4));
wr64(c, (RW(18) + 16), RD(3));
L_00289BF8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00289BFC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00289C18(Ctx *c) { /* func_00289C18 */
ENTER(0x289c18);
 return;
}

void F_00289C20(Ctx *c) { /* func_00289C20 */
ENTER(0x289c20);
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
SET64(31, 0x289c64); SET64(4, RD(17) + RD(0)); F_00272540(c);
SET64(4, RD(17) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 356)));
SET32(5, RW(18) + 224);
SET64(7, RD(29) + RD(0));
SET32(8, RW(29) + 4);
SET64(31, 0x289c80); SET64(19, RD(2) + RD(0)); F_00272540(c);
SET64(3, RD(2) + RD(0));
SET64(5, (s64)(s32)0xff000000);
{ int t = RD(19) != RD(0); SET64(4, RD(20) + RD(0)); if (t) goto L_00289C98; }
{ int t = RD(3) == RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_00289CA4; }
L_00289C98:;
SET64(31, 0x289ca0); SET64(5, RD(5) | 0xd0d); F_002879A8(c);
SET64(16, rd64(c, (RW(29) + 16)));
L_00289CA4:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(31, rd64(c, (RW(29) + 56)));
SET32(29, RW(29) + 64); return;
}

void F_00289CC0(Ctx *c) { /* func_00289CC0 */
ENTER(0x289cc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(16) + 13864)));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_00289CFC; }
SET64(31, 0x289ce4);  F_00289D10(c);
if (RSD(2) <= 0) { SET64(2, (s32)rd32(c, (RW(16) + 13864))); goto L_00289CF8; }
SET64(2, RD(0) + RD(0)); goto L_00289CFC;
L_00289CF8:;
SET32(2, RW(2) + 2208);
L_00289CFC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00289D10(Ctx *c) { /* func_00289D10 */
ENTER(0x289d10);
SET64(3, (s32)rd32(c, (RW(4) + 8052)));
SET64(2, (s32)rd32(c, (RW(3) + 32))); return;
}

void F_00289D20(Ctx *c) { /* func_00289D20 */
ENTER(0x289d20);
SET32(29, RW(29) + -16);
SET64(7, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET32(7, RW(7) + -27856);
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
SET32(4, RW(2) + -27816);
SET64(5, RD(0) + RD(0));
SET32(6, RW(0) + 8);
SET64(2, (s32)rd32(c, (RW(7) + 16)));
SET64(3, (s32)rd32(c, (RW(7) + 32)));
SET32(2, RW(2) + 63);
SET32(3, RW(3) + 63);
SET64(2, RD(2) & RD(8));
SET64(3, RD(3) & RD(8));
wr32(c, (RW(7) + 16), RW(2));
SET64(31, 0x289db0); wr32(c, (RW(7) + 32), RW(3)); F_001273D0(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, RD(0) + RD(0));
SET32(4, RW(4) + -27808);
SET32(6, RW(0) + 64);
SET32(29, RW(29) + 16); { F_001273D0(c); return; }
}

void F_00289DD0(Ctx *c) { /* func_00289DD0 */
ENTER(0x289dd0);
SET64(2, (s64)(s32)0x540000);
SET64(9, RD(4) + RD(0));
SET32(2, RW(2) + -27856);
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
SET32(11, RW(3) + -27816);
wr32(c, (RW(2) + 32), RW(4));
SET64(8, RD(5) + RD(0));
wr32(c, (RW(2) + 32), RW(0));
SET64(7, RD(0) + RD(0));
wr32(c, (RW(2) + 16), RW(0));
SET32(10, RW(0) + -64);
L_00289E40:;
SET32(4, RW(7) << 2);
SET32(7, RW(7) + 1);
SET32(3, RW(4) + RW(8));
SET32(4, RW(4) + RW(11));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(7) < (s64)2);
SET32(2, RW(2) + 63);
SET64(2, RD(2) & RD(10));
{ int t = RD(5) != RD(0); wr32(c, (RW(4) + 0), RW(2)); if (t) { POLL(); goto L_00289E40; } }
SET64(2, (s64)(s32)0x540000);
SET64(4, (s32)rd32(c, (RW(9) + 28)));
SET32(5, RW(2) + -27808);
SET64(7, RD(0) + RD(0));
SET32(10, RW(0) + -64);
SET64(9, RD(0) + RD(0));
L_00289E80:;
SET64(2, RSD(7) < RSD(4));
SET32(7, RW(7) + 1);
{ int t = RD(2) == RD(0); SET64(8, RSD(7) < (s64)16); if (t) goto L_00289EA8; }
SET32(3, RW(9) + RW(6));
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 63);
SET64(2, RD(2) & RD(10));
wr32(c, (RW(5) + 0), RW(2)); goto L_00289EAC;
L_00289EA8:;
wr32(c, (RW(5) + 0), RW(0));
L_00289EAC:;
SET32(5, RW(5) + 4);
{ int t = RD(8) != RD(0); SET32(9, RW(9) + 4); if (t) { POLL(); goto L_00289E80; } }
 return;
}

