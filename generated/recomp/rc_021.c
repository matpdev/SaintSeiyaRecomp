#include "r5900.h"
#include "functab.h"

void F_00277918(Ctx *c) { /* func_00277918 */
ENTER(0x277918);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + -4160); return;
}

void F_00277928(Ctx *c) { /* func_00277928 */
ENTER(0x277928);
SET32(29, RW(29) + -32);
SET32(6, RW(0) + 64);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27794c); SET64(18, RD(4) + RD(0)); F_00274C00(c);
SET64(16, RD(2) + RD(0));
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002779AC; }
SET64(31, 0x277960);  F_00278210(c);
{ int t = RD(2) == RD(0); SET32(16, RW(16) + 4); if (t) goto L_00277970; }
SET32(2, RW(0) + 1); goto L_002779A8;
L_00277970:;
SET32(3, RW(16) - RW(18));
SET64(4, RD(16) + RD(0));
SET32(17, RW(17) - RW(3));
{ int t = RSD(17) <= 0; SET64(5, RD(17) + RD(0)); if (t) goto L_002779A8; }
SET64(31, 0x27798c); SET32(6, RW(0) + -1); F_00274C00(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002779A8; }
SET64(31, 0x2779a0);  F_00274A68(c);
SET64(2, RD(2) & 0x10);
SET64(2, RD(2) < (u64)(s64)1);
L_002779A8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_002779AC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_002779C0(Ctx *c) { /* func_002779C0 */
ENTER(0x2779c0);
SET64(3, (s64)(s32)0x520000);
SET64(2, (s64)(s32)0x4b0000);
SET32(29, RW(29) + -32);
SET32(3, RW(3) + 31864);
SET32(2, RW(2) + -4160);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2779f0); wr32(c, (RW(3) + 0), RW(2)); F_00277A98(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0);  if (t) goto L_00277A30; }
SET64(3, (s64)(s32)0xff030000);
SET64(3, RD(3) | 0xff05);
if (RD(4) == RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00277A88; }
L_00277A10:;
 { POLL(); goto L_00277A10; }
L_00277A30:;
SET64(31, 0x277a38);  F_00277B10(c);
SET64(31, 0x277a40); SET64(4, RD(16) + RD(0)); F_00277B38(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x277a4c); SET64(5, RD(2) + RD(0)); F_00277CB8(c);
SET64(2, (s64)(s32)0x520000);
SET64(31, 0x277a58); SET64(16, (s32)rd32(c, (RW(2) + 31952))); F_00275800(c);
SET64(31, 0x277a60);  F_00275E80(c);
SET64(31, 0x277a68); SET32(4, RW(16) + 6112); F_00277B58(c);
SET64(31, 0x277a70);  F_00277C30(c);
SET64(31, 0x277a78); SET64(4, RD(16) + RD(0)); F_00277CB0(c);
SET64(31, 0x277a80);  F_00278228(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00277A88:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00277A98(Ctx *c) { /* func_00277A98 */
ENTER(0x277a98);
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x5a5a0000);
SET64(4, (s32)rd32(c, (RW(2) + -4016)));
SET32(29, RW(29) + -16);
SET64(3, RD(3) | 0x5a5a);
{ int t = RD(4) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_00277AD0; }
SET64(5, (s64)(s32)0xff030000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(5, RD(5) | 0xff02);
SET32(29, RW(29) + 16); { F_00275928(c); return; }
L_00277AD0:;
SET64(2, (s64)(s32)0x4b0000);
SET32(4, RW(0) + 4);
SET64(3, rd8(c, (RW(2) + -4000)));
{ int t = RD(3) == RD(4); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_00277B00; }
L_00277AE8:;
SET32(1, RW(0) + -1);
{ u32 t = RW(1); SET64(31, 0x277af4);  rt_call(c, t); }
 { POLL(); goto L_00277AE8; }
L_00277B00:;
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_00277B10(Ctx *c) { /* func_00277B10 */
ENTER(0x277b10);
 return;
}

void F_00277B18(Ctx *c) { /* func_00277B18 */
ENTER(0x277b18);
SET64(3, (s64)(s32)0x520000);
SET64(2, (s32)rd32(c, (RW(3) + 31936)));
{ int t = RD(2) == RD(0);  if (t) goto L_00277B30; }
SET64(2, (s64)(s32)0x2000000);
SET64(4, RD(4) | RD(2));
L_00277B30:;
SET64(2, RD(4) + RD(0)); return;
}

void F_00277B38(Ctx *c) { /* func_00277B38 */
ENTER(0x277b38);
SET64(3, (s64)(s32)0x520000);
SET64(2, (s32)rd32(c, (RW(3) + 31940)));
{ int t = RD(2) == RD(0);  if (t) goto L_00277B50; }
SET64(2, (s64)(s32)0x2000000);
SET64(4, RD(4) | RD(2));
L_00277B50:;
SET64(2, RD(4) + RD(0)); return;
}

void F_00277B58(Ctx *c) { /* func_00277B58 */
ENTER(0x277b58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x277b6c); SET64(16, RD(4) + RD(0)); F_00277BA8(c);
SET64(5, (s64)(s32)0x410000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -9024);
{ int t = RD(16) == RD(0); SET32(6, RW(0) + 256); if (t) goto L_00277B94; }
SET64(31, 0x277b88);  F_00272140(c);
SET64(3, (s64)(s32)0x410000);
SET32(2, RW(16) + 384);
wr32(c, (RW(3) + -9036), RW(2));
L_00277B94:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00277BA8(Ctx *c) { /* func_00277BA8 */
ENTER(0x277ba8);
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(0) + 383);
SET32(4, RW(2) + -9024);
L_00277BB8:;
SET32(3, RW(3) + -1);
wr8(c, (RW(4) + 0), (u8)RW(0));
{ int t = RSD(3) >= 0; SET32(4, RW(4) + 1); if (t) { POLL(); goto L_00277BB8; } }
SET64(3, RD(0) + RD(0));
L_00277BD8:;
wr8(c, (RW(4) + 0), (u8)RW(3));
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < (s64)256);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 1); if (t) { POLL(); goto L_00277BD8; } }
SET32(2, RW(0) + -1);
SET32(3, RW(0) + 383);
L_00277C00:;
SET32(3, RW(3) + -1);
wr8(c, (RW(4) + 0), (u8)RW(2));
{ int t = RSD(3) >= 0; SET32(4, RW(4) + 1); if (t) { POLL(); goto L_00277C00; } }
SET64(2, (s64)(s32)0x410000);
SET64(3, (s64)(s32)0x410000);
SET32(2, RW(2) + -8640);
wr32(c, (RW(3) + -9036), RW(2)); return;
}

void F_00277C30(Ctx *c) { /* func_00277C30 */
ENTER(0x277c30);
SET64(2, (s64)(s32)0x520000);
SET32(2, RW(2) + 31872);
SET64(4, (s32)rd32(c, (RW(2) + 84)));
{ int t = RSD(4) <= 0; SET64(3, (s32)rd32(c, (RW(2) + 88))); if (t) goto L_00277C6C; }
SET64(2, RD(4) + RD(0));
SET32(4, RW(0) + 1);
L_00277C50:;
SET32(2, RW(2) + -1);
wr32(c, (RW(3) + 392), RW(4));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 1024); if (t) { POLL(); goto L_00277C50; } }
L_00277C6C:;
 return;
}

void F_00277C78(Ctx *c) { /* func_00277C78 */
ENTER(0x277c78);
SET64(3, (s64)(s32)0x520000);
SET64(6, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + 31952)));
SET32(5, RW(2) + 4448);
SET32(3, RW(2) + 4384);
SET32(2, RW(2) + 4352);
wr32(c, (RW(4) + 44), RW(3));
wr32(c, (RW(4) + 48), RW(2));
wr32(c, (RW(4) + 52), RW(5));
SET64(2, (s32)rd32(c, (RW(6) + -9036)));
wr32(c, (RW(4) + 272), RW(2));
wr32(c, (RW(4) + 64), RW(2)); return;
}

void F_00277CB0(Ctx *c) { /* func_00277CB0 */
ENTER(0x277cb0);
 return;
}

void F_00277CB8(Ctx *c) { /* func_00277CB8 */
ENTER(0x277cb8);
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
SET64(31, 0x277d08); SET64(16, (s64)(s32)0x520000); F_00272320(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x277d14); SET32(5, RW(0) + 7136); F_00278028(c);
SET64(5, (s64)(s32)0x4b0000);
SET32(16, RW(16) + 31872);
SET32(5, RW(5) + -4080);
SET64(4, RD(16) + RD(0));
SET64(31, 0x277d2c); SET32(6, RW(0) + 16); F_00272140(c);
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

void F_00277D60(Ctx *c) { /* func_00277D60 */
ENTER(0x277d60);
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

void F_00277E10(Ctx *c) { /* func_00277E10 */
ENTER(0x277e10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x277e20);  F_00278258(c);
SET64(2, (s64)(s32)0x520000);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 31952)));
SET32(5, RW(0) + 7136);
SET32(29, RW(29) + 16); { F_00278030(c); return; }
}

void F_00277E38(Ctx *c) { /* func_00277E38 */
ENTER(0x277e38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x277e4c);  F_00277E90(c);
SET64(16, RD(2) + RD(0));
SET32(5, RW(0) + 1016);
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00277E80; }
SET64(31, 0x277e64);  F_00278028(c);
SET64(31, 0x277e6c); SET64(4, RD(16) + RD(0)); F_00277EE0(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x277e78); SET64(4, RD(16) + RD(0)); F_00278270(c);
wr32(c, (RW(16) + 944), RW(2));
SET64(2, RD(16) + RD(0));
L_00277E80:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00277E90(Ctx *c) { /* func_00277E90 */
ENTER(0x277e90);
SET64(2, (s64)(s32)0x520000);
SET64(6, RD(0) + RD(0));
SET32(2, RW(2) + 31872);
SET64(5, (s32)rd32(c, (RW(2) + 84)));
{ int t = RSD(5) <= 0; SET64(4, (s32)rd32(c, (RW(2) + 88))); if (t) goto L_00277ED4; }
SET32(7, RW(0) + 1);
SET64(3, (s32)rd32(c, (RW(4) + 392)));
L_00277EB0:;
SET64(2, RD(4) + RD(0));
{ int t = RD(3) == RD(7); SET32(4, RW(4) + 1024); if (t) goto L_00277ED8; }
SET32(6, RW(6) + 1);
SET64(2, RSD(6) < RSD(5));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(4) + 392))); { POLL(); goto L_00277EB0; } }
L_00277ED4:;
SET64(2, RD(0) + RD(0));
L_00277ED8:;
 return;
}

void F_00277EE0(Ctx *c) { /* func_00277EE0 */
ENTER(0x277ee0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x277efc); SET64(17, RD(0) + RD(0)); F_00277C78(c);
wr32(c, (RW(16) + 396), RW(0));
SET64(5, (s64)(s32)0x520000);
SET32(5, RW(5) + 31872);
SET32(6, RW(0) + 16);
SET64(31, 0x277f14); SET32(4, RW(16) + 400); F_00272140(c);
SET64(31, 0x277f1c); SET32(4, RW(16) + 592); F_00275820(c);
SET64(31, 0x277f24); SET32(4, RW(16) + 464); F_00277D60(c);
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
L_00277F50:;
SET32(17, RW(17) + 1);
SET64(4, RD(16) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x277f68); SET64(8, RD(0) + RD(0)); F_00275E88(c);
SET64(2, RSD(17) < (s64)4);
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) { POLL(); goto L_00277F50; } }
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x277f84); SET64(6, RD(0) + RD(0)); F_00275EB0(c);
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 392), RW(2));
SET64(2, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00277FA8(Ctx *c) { /* func_00277FA8 */
ENTER(0x277fa8);
SET32(4, RW(4) + 120);
SET64(2, (s32)rd32(c, (RW(4) + 24)));
wr32(c, (RW(5) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 28)));
wr32(c, (RW(6) + 0), RW(3)); return;
}

void F_00277FC0(Ctx *c) { /* func_00277FC0 */
ENTER(0x277fc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x277fd4); SET64(16, RD(4) + RD(0)); F_002781E8(c);
SET64(5, (s64)(s32)0xff030000);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) == RD(0); SET64(5, RD(5) | 0x201); if (t) goto L_00277FF8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00275928(c); return; }
L_00277FF8:;
SET64(31, 0x278000);  F_00278288(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27800c); SET32(5, RW(0) + 1016); F_00278030(c);
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 392), RW(2));
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00278028(Ctx *c) { /* func_00278028 */
ENTER(0x278028);
 return;
}

void F_00278030(Ctx *c) { /* func_00278030 */
ENTER(0x278030);
 return;
}

void F_00278038(Ctx *c) { /* func_00278038 */
ENTER(0x278038);
 return;
}

void F_00278040(Ctx *c) { /* func_00278040 */
ENTER(0x278040);
SET32(29, RW(29) + -32);
SET32(2, RW(0) + 8);
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
{ int t = RD(18) != RD(2); SET64(4, RD(18) + RD(0)); if (t) goto L_00278078; }
{ int t = RD(16) != RD(0); SET64(2, (s64)(s32)0x280000); if (t) goto L_00278078; }
SET32(16, RW(2) + -32712);
L_00278078:;
{ int t = RD(17) != RD(0);  if (t) goto L_00278098; }
SET64(31, 0x278088); SET64(5, RD(16) + RD(0)); F_00278108(c);
SET64(2, (s64)(s32)0x520000);
SET32(3, RW(2) + 31872); goto L_002780CC;
L_00278098:;
SET64(31, 0x2780a0); SET64(4, RD(17) + RD(0)); F_002781E8(c);
SET64(5, (s64)(s32)0xff030000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002780C8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x202);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00275928(c); return; }
L_002780C8:;
SET32(3, RW(17) + 400);
L_002780CC:;
SET32(2, RW(18) << 2);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + RW(3));
SET64(5, RD(18) + RD(0));
wr32(c, (RW(2) + 0), RW(16));
SET64(31, 0x2780e8); SET64(6, RD(16) + RD(0)); F_002782A0(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00278108(Ctx *c) { /* func_00278108 */
ENTER(0x278108);
SET64(2, (s64)(s32)0x520000);
SET32(2, RW(2) + 31872);
SET64(6, (s32)rd32(c, (RW(2) + 84)));
{ int t = RSD(6) <= 0; SET64(3, (s32)rd32(c, (RW(2) + 88))); if (t) goto L_0027814C; }
SET32(2, RW(4) << 2);
SET32(7, RW(0) + 2);
SET32(4, RW(2) + 400);
L_00278128:;
SET64(2, (s32)rd32(c, (RW(3) + 392)));
{ int t = RD(2) != RD(7); SET32(6, RW(6) + -1); if (t) goto L_0027813C; }
SET32(2, RW(3) + RW(4));
wr32(c, (RW(2) + 0), RW(5));
L_0027813C:;
{ int t = RD(6) != RD(0); SET32(3, RW(3) + 1024); if (t) { POLL(); goto L_00278128; } }
L_0027814C:;
 return;
}

void F_00278158(Ctx *c) { /* func_00278158 */
ENTER(0x278158);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 24), RD(31)); if (t) goto L_00278188; }
SET64(2, (s64)(s32)0x520000);
SET32(4, RW(2) + 31872); goto L_002781BC;
L_00278188:;
SET64(31, 0x278190);  F_002781E8(c);
SET64(5, (s64)(s32)0xff030000);
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_002781B8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(5) | 0x210);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00275928(c); return; }
L_002781B8:;
SET32(4, RW(16) + 400);
L_002781BC:;
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

void F_002781E8(Ctx *c) { /* func_002781E8 */
ENTER(0x2781e8);
SET64(2, (s64)(s32)0x520000);
wr32(c, (RW(2) + 31964), RW(4));
{ int t = RD(4) == RD(0); SET32(2, RW(0) + -1); if (t) goto L_00278204; }
SET64(3, (s32)rd32(c, (RW(4) + 392)));
SET64(3, RD(3) ^ 0x2);
if (RD(3) == 0) SET64(2, RD(0));
L_00278204:;
 return;
}

void F_00278210(Ctx *c) { /* func_00278210 */
ENTER(0x278210);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0026BF50(c); return; }
}

void F_00278228(Ctx *c) { /* func_00278228 */
ENTER(0x278228);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x278238);  F_00271748(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(5, (s64)(s32)0x520000);
SET32(5, RW(5) + 31968);
SET32(4, RW(0) + 8);
SET32(6, RW(0) + 14400);
SET32(29, RW(29) + 16); { F_0026BFC0(c); return; }
}

void F_00278258(Ctx *c) { /* func_00278258 */
ENTER(0x278258);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0026BFE8(c); return; }
}

void F_00278270(Ctx *c) { /* func_00278270 */
ENTER(0x278270);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0026C010(c); return; }
}

void F_00278288(Ctx *c) { /* func_00278288 */
ENTER(0x278288);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 944)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0026C040(c); return; }
}

void F_002782A0(Ctx *c) { /* func_002782A0 */
ENTER(0x2782a0);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002782B4; }
SET64(2, (s32)rd32(c, (RW(4) + 944)));
L_002782B4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { F_0026C090(c); return; }
}

void F_002782C8(Ctx *c) { /* func_002782C8 */
ENTER(0x2782c8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2782ec); SET64(19, RD(5) + RD(0)); F_0026BF50(c);
{ int t = RD(2) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_00278370; }
SET32(16, RW(17) + 952);
SET64(6, (s32)rd32(c, (RW(16) + 0)));
L_00278300:;
SET64(5, RD(18) + RD(0));
SET64(7, (s32)rd32(c, (RW(16) + 4)));
SET32(18, RW(18) + 1);
SET64(8, (s32)rd32(c, (RW(16) + 8)));
SET32(16, RW(16) + 12);
SET64(31, 0x27831c); SET64(4, (s32)rd32(c, (RW(17) + 944))); F_0026C158(c);
SET64(2, RSD(18) < (s64)4);
if (RD(2) != RD(0)) { SET64(6, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_00278300; } }
SET64(4, (s32)rd32(c, (RW(17) + 944)));
SET64(5, (s32)rd32(c, (RW(17) + 1000)));
SET64(31, 0x278338); SET64(6, (s32)rd32(c, (RW(17) + 1004))); F_0026C180(c);
SET64(4, (s32)rd32(c, (RW(17) + 944)));
SET64(31, 0x278344); SET64(5, RD(19) + RD(0)); F_0026C1D0(c);
{ int t = RD(2) != RD(0); SET32(2, RW(0) + -2); if (t) goto L_00278374; }
SET64(4, (s32)rd32(c, (RW(17) + 944)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x27835c); SET32(6, RW(17) + 1008); F_0026C1A8(c);
SET64(31, 0x278364); SET64(4, RD(17) + RD(0)); F_00278390(c);
SET64(2, RD(0) + RD(0)); goto L_00278374;
L_00278370:;
SET32(2, RW(0) + -1);
L_00278374:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00278390(Ctx *c) { /* func_00278390 */
ENTER(0x278390);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 160), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 168), RD(31));
SET64(5, RD(29) + RD(0));
SET64(31, 0x2783ac); SET64(4, (s32)rd32(c, (RW(16) + 944))); F_0026C200(c);
SET64(4, (s32)rd32(c, (RW(16) + 944)));
SET64(31, 0x2783b8); SET32(5, RW(29) + 128); F_0026C228(c);
SET64(4, (s32)rd32(c, (RW(16) + 944)));
SET32(5, RW(29) + 132);
SET32(6, RW(29) + 136);
SET64(31, 0x2783cc); SET32(7, RW(29) + 140); F_0026C250(c);
SET64(4, (s32)rd32(c, (RW(16) + 944)));
SET32(5, RW(29) + 144);
SET64(31, 0x2783dc); SET32(6, RW(29) + 148); F_0026C278(c);
SET32(3, RW(16) + 464);
SET64(2, RD(3) & 0x7);
{ int t = RD(2) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_00278450; }
SET32(2, RW(29) + 128);
L_002783F0:;
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
{ int t = RD(4) != RD(2); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_002783F0; } }
SET64(2, (s32)rd32(c, (RW(29) + 132))); goto L_0027848C;
L_00278450:;
SET32(2, RW(29) + 128);
L_00278454:;
SET64(5, rd64(c, (RW(4) + 0)));
SET64(6, rd64(c, (RW(4) + 8)));
SET64(7, rd64(c, (RW(4) + 16)));
SET64(8, rd64(c, (RW(4) + 24)));
wr64(c, (RW(3) + 0), RD(5));
wr64(c, (RW(3) + 8), RD(6));
wr64(c, (RW(3) + 16), RD(7));
wr64(c, (RW(3) + 24), RD(8));
SET32(4, RW(4) + 32);
{ int t = RD(4) != RD(2); SET32(3, RW(3) + 32); if (t) { POLL(); goto L_00278454; } }
SET64(2, (s32)rd32(c, (RW(29) + 132)));
L_0027848C:;
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

void F_002784D0(Ctx *c) { /* func_002784D0 */
ENTER(0x2784d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002784E8(c); return; }
}

void F_002784E8(Ctx *c) { /* func_002784E8 */
ENTER(0x2784e8);
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
{ int t = RD(6) != RD(0); SET64(3, RD(3) | RD(7)); if (t) goto L_00278538; }
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, (s64)(s32)0x80000000);
SET64(2, RD(2) | 0xffff);
if (RD(4) != 0) SET64(2, RD(3)); goto L_00278548;
L_00278538:;
SET64(31, 0x278540); SET64(4, RD(3) + RD(0)); F_0011F988(c);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
L_00278548:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00278558(Ctx *c) { /* func_00278558 */
ENTER(0x278558);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(6) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00278588; }
SET64(3, RD(4) ^ RD(5));
SET64(4, (s64)(s32)0x80000000);
SET64(2, (s64)(s32)0x7fff0000);
SET64(3, RSD(3) < (s64)0);
SET64(2, RD(2) | 0xffff);
if (RD(3) != 0) SET64(2, RD(4)); goto L_002785F4;
L_00278588:;
SET64(16, RD(6) + RD(0));
{ int t = RSD(4) >= 0; SET32(17, RW(0) + 1); if (t) goto L_0027859C; }
SET32(17, RW(0) + -1);
SET64(4, RD(0) - RD(4));
L_0027859C:;
{ int t = RSD(5) >= 0;  if (t) goto L_002785AC; }
SET32(17, RW(0) - RW(17));
SET64(5, RD(0) - RD(5));
L_002785AC:;
{ int t = RSD(16) >= 0;  if (t) goto L_002785BC; }
SET64(16, RD(0) - RD(16));
SET32(17, RW(0) - RW(17));
L_002785BC:;
SET64(31, 0x2785c4);  F_0011F910(c);
SET64(4, RD(16) >> 63);
SET64(4, RD(16) + RD(4));
SET64(5, RD(16) + RD(0));
SET64(4, RSD(4) >> 1);
SET64(31, 0x2785dc); SET64(4, RD(2) + RD(4)); F_0011F988(c);
SET64(4, RSD(17) < (s64)0);
SET64(3, RD(0) - RD(2));
if (RD(4) != 0) SET64(2, RD(3));
SET64(4, RD(2) + RD(0));
SET64(2, RD(4) << 32);
SET64(2, RSD(2) >> 32);
L_002785F4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00278608(Ctx *c) { /* func_00278608 */
ENTER(0x278608);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00278640; }
SET64(3, RD(4) ^ RD(5));
SET64(4, RD(0) | 0x8000);
SET64(4, RD(4) << 48);
SET64(3, RSD(3) < (s64)0);
SET32(2, RW(0) + -1);
SET64(2, RD(2) >> 1);
if (RD(3) != 0) SET64(2, RD(4)); goto L_0027869C;
L_00278640:;
{ int t = RSD(4) >= 0; SET32(17, RW(0) + 1); if (t) goto L_00278650; }
SET32(17, RW(0) + -1);
SET64(4, RD(0) - RD(4));
L_00278650:;
{ int t = RSD(5) >= 0;  if (t) goto L_00278660; }
SET32(17, RW(0) - RW(17));
SET64(5, RD(0) - RD(5));
L_00278660:;
{ int t = RSD(16) >= 0;  if (t) goto L_00278670; }
SET64(16, RD(0) - RD(16));
SET32(17, RW(0) - RW(17));
L_00278670:;
SET64(31, 0x278678);  F_0011F910(c);
SET64(4, RD(16) >> 63);
SET64(4, RD(16) + RD(4));
SET64(5, RD(16) + RD(0));
SET64(4, RSD(4) >> 1);
SET64(31, 0x278690); SET64(4, RD(2) + RD(4)); F_0011F988(c);
SET64(4, RSD(17) < (s64)0);
SET64(3, RD(0) - RD(2));
if (RD(4) != 0) SET64(2, RD(3));
L_0027869C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002786B0(Ctx *c) { /* func_002786B0 */
ENTER(0x2786b0);
SET64(13, (s32)rd32(c, (RW(4) + 20)));
SET32(3, RW(0) + 1);
SET64(14, (s32)rd32(c, (RW(4) + 0)));
SET32(11, RW(0) + 2);
SET64(2, RSD(0) < RSD(13));
SET64(15, RD(5) + RD(0));
SET64(24, RD(6) + RD(0));
if (RD(2) == 0) SET64(13, RD(3));
SET64(25, RD(7) + RD(0));
{ int t = RD(14) != RD(11); SET64(12, (s32)rd32(c, (RW(4) + 4))); if (t) goto L_00278708; }
SET32(4, RW(12) + 16383);
SET64(3, RSD(12) < (s64)0);
if (RD(3) != 0) SET64(12, RD(4));
SET32(2, RSW(12) >> 14);
mul_s(c, 0, 2, RSW(2), RSW(13));
SET32(2, RW(2) << 11);
wr32(c, (RW(15) + 0), RW(2));
wr32(c, (RW(24) + 0), RW(0));
wr32(c, (RW(25) + 0), RW(0)); goto L_00278740;
L_00278708:;
SET32(2, RW(0) + 3);
{ int t = RD(14) != RD(2); SET64(3, RSD(12) < (s64)0); if (t) goto L_00278750; }
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
L_00278740:;
wr32(c, (RW(8) + 0), RW(0));
wr32(c, (RW(9) + 0), RW(0));
wr32(c, (RW(10) + 0), RW(0)); return;
L_00278750:;
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

void F_00278798(Ctx *c) { /* func_00278798 */
ENTER(0x278798);
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

void F_002787E8(Ctx *c) { /* func_002787E8 */
ENTER(0x2787e8);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -64);
SET64(3, (s32)rd32(c, (RW(2) + -7640)));
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
SET64(19, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(5, RD(29) + RD(0));
wr64(c, (RW(29) + 48), RD(31));
{ int t = RD(3) == RD(0); SET32(6, RW(29) + 4); if (t) goto L_00278830; }
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(19) + 0), RW(0)); goto L_002788CC;
L_00278830:;
SET32(7, RW(29) + 8);
SET32(8, RW(29) + 12);
SET64(31, 0x278840); SET64(17, (s32)rd32(c, (RW(16) + 16))); F_00278798(c);
SET64(31, 0x278848); SET64(4, (s32)rd32(c, (RW(16) + 36))); F_002788E8(c);
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
{ int t = RD(2) == RD(9); SET32(4, RW(4) + 64); if (t) goto L_002788C8; }
mul_s(c, 0, 3, RSW(17), RSW(4));
L_002788C8:;
wr32(c, (RW(19) + 0), RW(3));
L_002788CC:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_002788E8(Ctx *c) { /* func_002788E8 */
ENTER(0x2788e8);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 1); if (t) goto L_00278928; }
{ int t = RD(4) == RD(0); SET32(3, RW(0) + 2); if (t) goto L_00278928; }
SET32(2, RW(0) + 2);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 3); if (t) goto L_00278928; }
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 3); if (t) goto L_00278928; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x278924); SET32(4, RW(4) + -3864); F_00281110(c);
SET32(3, RW(0) + 3);
L_00278928:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_00278938(Ctx *c) { /* func_00278938 */
ENTER(0x278938);
SET32(2, RW(0) + 16384);
wr32(c, (RW(5) + 0), RW(2));
SET32(3, RW(0) + 1792);
wr32(c, (RW(6) + 0), RW(3));
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET32(2, RW(2) + RW(3)); return;
}

void F_00278958(Ctx *c) { /* func_00278958 */
ENTER(0x278958);
SET32(2, RW(0) + 256); return;
}

void F_00278960(Ctx *c) { /* func_00278960 */
ENTER(0x278960);
SET32(29, RW(29) + -64);
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET32(7, RW(29) + 8);
SET32(8, RW(29) + 12);
SET32(9, RW(29) + 16);
SET32(10, RW(29) + 20);
wr64(c, (RW(29) + 48), RD(16));
wr64(c, (RW(29) + 56), RD(31));
SET64(31, 0x27898c); SET64(16, RD(4) + RD(0)); F_002786B0(c);
SET32(5, RW(29) + 24);
SET32(6, RW(29) + 28);
SET64(31, 0x27899c); SET64(4, RD(16) + RD(0)); F_002787E8(c);
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 32);
SET64(31, 0x2789ac); SET32(6, RW(29) + 36); F_00278938(c);
SET64(31, 0x2789b4); SET64(16, RD(2) + RD(0)); F_00278958(c);
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

void F_00278A18(Ctx *c) { /* func_00278A18 */
ENTER(0x278a18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(5, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x278a38); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_0027E5C8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x278a44); SET64(17, RD(2) + RD(0)); F_0027F050(c);
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

void F_00278A70(Ctx *c) { /* mwPlyCalcWorkCprmSfd */
ENTER(0x278a70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 16), RD(31)); if (t) goto L_00278AA0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x278a94); SET32(4, RW(4) + -3768); F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_00278AB8;
L_00278AA0:;
SET64(31, 0x278aa8);  F_00278960(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x278ab4); SET64(16, RD(2) + RD(0)); F_00278A18(c);
SET32(2, RW(16) + RW(2));
L_00278AB8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00278AD0(Ctx *c) { /* func_00278AD0 */
ENTER(0x278ad0);
SET64(8, RD(4) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(2) + -7640), RW(8));
wr32(c, (RW(3) + -7636), RW(5));
{ int t = RSD(8) <= 0; SET64(7, RD(0) + RD(0)); if (t) goto L_00278B18; }
SET64(2, (s64)(s32)0x530000);
SET32(9, RW(2) + -19128);
L_00278AF8:;
SET32(2, RW(7) << 2);
SET32(7, RW(7) + 1);
SET32(3, RW(2) + RW(6));
SET32(2, RW(2) + RW(9));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(5, RSD(7) < RSD(8));
{ int t = RD(5) != RD(0); wr32(c, (RW(2) + 0), RW(4)); if (t) { POLL(); goto L_00278AF8; } }
L_00278B18:;
 return;
}

void F_00278B20(Ctx *c) { /* func_00278B20 */
ENTER(0x278b20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
SET64(6, (s32)rd32(c, (RW(4) + 464)));
{ int t = RD(6) == RD(0); SET64(7, (s32)rd32(c, (RW(4) + 64))); if (t) goto L_00278BE4; }
SET64(2, (s32)rd32(c, (RW(4) + 500)));
if (RD(6) != RD(2)) { SET64(2, (s32)rd32(c, (RW(4) + 468))); goto L_00278B68; }
SET64(2, (s32)rd32(c, (RW(4) + 508)));
SET32(3, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(4) + 504)));
wr32(c, (RW(29) + 4), RW(6));
wr32(c, (RW(29) + 0), RW(3));
wr32(c, (RW(29) + 8), RW(4));
wr32(c, (RW(29) + 12), RW(2));
wr32(c, (RW(29) + 16), RW(0)); goto L_00278BB8;
L_00278B68:;
if (RD(6) != RD(2)) { SET64(2, (s32)rd32(c, (RW(4) + 484))); goto L_00278B98; }
SET64(2, (s32)rd32(c, (RW(4) + 480)));
SET64(3, (s32)rd32(c, (RW(4) + 472)));
SET64(4, (s32)rd32(c, (RW(4) + 476)));
wr32(c, (RW(29) + 4), RW(6));
wr32(c, (RW(29) + 8), RW(3));
wr32(c, (RW(29) + 12), RW(4));
wr32(c, (RW(29) + 16), RW(2));
wr32(c, (RW(29) + 0), RW(0)); goto L_00278BB8;
L_00278B98:;
SET64(5, (s32)rd32(c, (RW(4) + 496)));
SET64(3, (s32)rd32(c, (RW(4) + 488)));
SET64(4, (s32)rd32(c, (RW(4) + 492)));
wr32(c, (RW(29) + 0), RW(2));
wr32(c, (RW(29) + 4), RW(6));
wr32(c, (RW(29) + 8), RW(3));
wr32(c, (RW(29) + 12), RW(4));
wr32(c, (RW(29) + 16), RW(5));
L_00278BB8:;
wr32(c, (RW(29) + 20), RW(0));
SET64(4, RD(7) + RD(0));
SET64(31, 0x278bc8); SET64(5, RD(29) + RD(0)); F_00293460(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -312); if (t) goto L_00278BE4; }
SET64(31, 0x278bd8);  F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x278be4); SET32(4, RW(4) + -3720); F_00281110(c);
L_00278BE4:;
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00278BF0(Ctx *c) { /* func_00278BF0 */
ENTER(0x278bf0);
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
SET64(9, (s32)rd32(c, (RW(2) + -7640)));
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
{ int t = RD(9) == RD(0); wr32(c, (RW(29) + 0), RW(5)); if (t) goto L_00278CA8; }
SET64(2, RSD(9) < (s64)2);
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_00278C98; }
SET64(2, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(2) + -7636)));
SET64(3, RSD(2) < RSD(5));
if (RD(3) != RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_00278C98; }
SET64(2, RSD(2) < RSD(8));
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_00278C98; }
SET64(2, (s64)(s32)0x530000);
SET32(2, RW(2) + -19128);
SET64(3, (s32)rd32(c, (RW(2) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
wr32(c, (RW(16) + 4), RW(3));
wr32(c, (RW(16) + 0), RW(4)); goto L_00278CC4;
L_00278C98:;
SET32(18, RW(0) + -1);
wr32(c, (RW(16) + 4), RW(0)); goto L_00278CC4;
L_00278CA8:;
SET64(31, 0x278cb0);  F_0027A2F8(c);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(31, 0x278cc0); SET64(5, (s32)rd32(c, (RW(29) + 4))); F_0027A2F8(c);
wr32(c, (RW(16) + 4), RW(2));
L_00278CC4:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) == RD(0)) { SET32(18, RW(0) + -1); goto L_00278CE0; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) != RD(0); SET64(2, RD(18) + RD(0)); if (t) goto L_00278CE4; }
SET32(18, RW(0) + -1);
L_00278CE0:;
SET64(2, RD(18) + RD(0));
L_00278CE4:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_00278D00(Ctx *c) { /* func_00278D00 */
ENTER(0x278d00);
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
SET64(31, 0x278d44); SET64(19, (s32)rd32(c, (RW(5) + 16))); F_002788E8(c);
SET32(6, RW(17) + 15);
SET64(4, RSD(17) < (s64)0);
SET64(3, RSD(16) < (s64)0);
SET32(5, RW(16) + 15);
if (RD(4) != 0) SET64(17, RD(6));
if (RD(3) != 0) SET64(16, RD(5));
SET32(4, RW(0) + 2);
SET32(17, RSW(17) >> 4);
{ int t = RD(2) != RD(4); SET32(3, RSW(16) >> 4); if (t) goto L_00278D78; }
mul_s(c, 0, 2, RSW(17), RSW(3));
SET32(2, RW(2) << 10); goto L_00278D88;
L_00278D78:;
mul_s(c, 0, 3, RSW(17), RSW(3));
SET32(2, RW(3) << 1);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 7);
L_00278D88:;
SET32(18, RW(2) + 64);
SET64(2, (s64)(s32)0x410000);
SET64(3, (s32)rd32(c, (RW(2) + -7640)));
{ int t = RD(3) == RD(0); SET32(2, RW(19) + 2); if (t) goto L_00278E00; }
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET32(20, RW(0) + -1); goto L_00278E38; }
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + -7636)));
SET64(2, RSD(2) < RSD(18));
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_00278DE8; }
SET32(20, RW(0) + -1); goto L_00278E38;
L_00278DC8:;
SET32(16, RW(16) + 1);
SET64(4, (s64)(s32)0x530000);
SET32(4, RW(4) + RW(2));
SET64(4, (s32)rd32(c, (RW(4) + -19120)));
SET32(2, RW(2) + RW(21));
SET32(3, RW(0) + -1);
wr32(c, (RW(2) + 0), RW(4));
if (RD(4) == 0) SET64(20, RD(3));
L_00278DE8:;
SET64(2, RSD(16) < RSD(19));
if (RD(2) != RD(0)) { SET32(2, RW(16) << 2); { POLL(); goto L_00278DC8; } }
SET64(2, RD(20) + RD(0)); goto L_00278E3C;
L_00278E00:;
{ int t = RSD(19) <= 0; SET64(2, RD(20) + RD(0)); if (t) goto L_00278E3C; }
SET64(16, RD(19) + RD(0));
SET32(19, RW(0) + -1);
SET64(17, RD(21) + RD(0));
L_00278E18:;
SET64(4, RD(22) + RD(0));
SET64(31, 0x278e24); SET64(5, RD(18) + RD(0)); F_0027A2F8(c);
SET32(16, RW(16) + -1);
wr32(c, (RW(17) + 0), RW(2));
SET32(17, RW(17) + 4);
{ int t = RD(16) != RD(0); if (RD(2) == 0) SET64(20, RD(19)); if (t) { POLL(); goto L_00278E18; } }
L_00278E38:;
SET64(2, RD(20) + RD(0));
L_00278E3C:;
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

void F_00278E68(Ctx *c) { /* func_00278E68 */
ENTER(0x278e68);
SET32(29, RW(29) + -304);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 224), RD(16));
SET64(3, (s64)(s32)0x530000);
wr64(c, (RW(29) + 232), RD(17));
SET32(16, RW(3) + -19160);
wr64(c, (RW(29) + 240), RD(18));
SET64(6, (s64)(s32)0x530000);
wr64(c, (RW(29) + 248), RD(19));
SET32(19, RW(2) + -19164);
wr64(c, (RW(29) + 256), RD(20));
SET64(20, RD(4) + RD(0));
wr64(c, (RW(29) + 264), RD(21));
SET64(21, RD(5) + RD(0));
wr64(c, (RW(29) + 280), RD(23));
SET64(5, (s64)(s32)0x530000);
wr64(c, (RW(29) + 288), RD(30));
SET32(17, RW(5) + -19156);
wr64(c, (RW(29) + 272), RD(22));
SET32(18, RW(6) + -19152);
wr64(c, (RW(29) + 296), RD(31));
SET64(8, RD(18) + RD(0));
SET64(9, (s64)(s32)0x530000);
SET32(9, RW(9) + -19136);
SET64(10, (s64)(s32)0x530000);
SET32(10, RW(10) + -19140);
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
SET64(31, 0x278f00); wr32(c, (RW(29) + 200), RW(2)); F_002786B0(c);
SET64(5, (s64)(s32)0x530000);
SET64(6, (s64)(s32)0x530000);
SET32(5, RW(5) + -19148);
SET32(6, RW(6) + -19144);
SET64(31, 0x278f18); SET64(4, RD(21) + RD(0)); F_002787E8(c);
SET64(4, RD(21) + RD(0));
SET32(5, RW(29) + 160);
SET64(31, 0x278f28); SET32(6, RW(29) + 164); F_00278938(c);
SET64(31, 0x278f30);  F_00278958(c);
wr32(c, (RW(29) + 208), RW(2));
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET32(5, RW(5) + RW(2));
SET32(5, RW(5) + RW(3));
SET64(31, 0x278f54); SET32(5, RW(5) + 64); F_0027A2F8(c);
SET64(4, RD(20) + RD(0));
wr32(c, (RW(29) + 184), RW(2));
SET64(5, (s32)rd32(c, (RW(19) + 0)));
SET64(31, 0x278f68); SET32(5, RW(5) + 64); F_0027A2F8(c);
SET64(4, RD(20) + RD(0));
SET32(3, RW(29) + 80);
SET64(5, RD(21) + RD(0));
SET64(6, RD(3) + RD(0));
SET64(31, 0x278f80); SET64(23, RD(2) + RD(0)); F_00278BF0(c);
SET64(4, RD(20) + RD(0));
SET32(7, RW(29) + 96);
SET64(5, RD(21) + RD(0));
SET64(6, RD(7) + RD(0));
SET64(31, 0x278f98); SET64(30, RD(2) + RD(0)); F_00278D00(c);
SET64(4, RD(22) + RD(0));
SET64(31, 0x278fa4); SET64(19, RD(2) + RD(0)); F_00279580(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(18, RD(0) + RD(0)); goto L_00278FE8; }
SET64(8, (s64)(s32)0x530000);
SET64(4, RD(20) + RD(0));
SET32(8, RW(8) + -19136);
SET64(31, 0x278fc4); SET64(5, (s32)rd32(c, (RW(8) + 0))); F_0027A2F8(c);
SET64(4, RD(20) + RD(0));
SET64(9, (s64)(s32)0x530000);
SET64(18, RD(2) + RD(0));
SET32(9, RW(9) + -19140);
SET64(31, 0x278fdc); SET64(5, (s32)rd32(c, (RW(9) + 0))); F_0027A2F8(c);
SET64(17, RD(2) + RD(0)); goto L_00278FEC;
L_00278FE8:;
SET64(17, RD(0) + RD(0));
L_00278FEC:;
SET32(5, RW(0) + 2048);
SET64(31, 0x278ff8); SET64(4, RD(20) + RD(0)); F_0027A2F8(c);
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 160)));
SET64(31, 0x279008); wr32(c, (RW(29) + 188), RW(2)); F_0027A2F8(c);
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 164)));
SET64(31, 0x279018); wr32(c, (RW(29) + 204), RW(2)); F_0027A2F8(c);
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 208)));
SET64(31, 0x279028); SET64(16, RD(2) + RD(0)); F_0027A2F8(c);
SET64(10, (s32)rd32(c, (RW(29) + 184)));
{ int t = RD(10) == RD(0); wr32(c, (RW(29) + 212), RW(2)); if (t) goto L_00279074; }
{ int t = RD(23) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00279078; }
{ int t = RD(30) != RD(0); SET32(4, RW(4) + -3680); if (t) goto L_002790AC; }
if (RD(19) != RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_00279078; }
SET64(2, (s32)rd32(c, (RW(29) + 188)));
{ int t = RD(2) == RD(0); SET64(3, (s32)rd32(c, (RW(29) + 204))); if (t) goto L_00279074; }
{ int t = RD(3) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00279078; }
SET64(4, (s32)rd32(c, (RW(29) + 212)));
if (RD(4) == RD(0)) { SET64(4, (s64)(s32)0x4b0000); goto L_00279078; }
{ int t = RD(16) != RD(0);  if (t) goto L_00279080; }
L_00279074:;
SET64(4, (s64)(s32)0x4b0000);
L_00279078:;
SET32(4, RW(4) + -3680); goto L_002790AC;
L_00279080:;
SET64(31, 0x279088); SET64(4, RD(22) + RD(0)); F_00279580(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET32(2, RW(0) + -64); goto L_002790C8; }
{ int t = RD(18) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_002790A8; }
{ int t = RD(17) != RD(0); SET32(2, RW(0) + -64); if (t) goto L_002790C8; }
SET64(4, (s64)(s32)0x4b0000);
L_002790A8:;
SET32(4, RW(4) + -3648);
L_002790AC:;
SET64(31, 0x2790b4);  F_00281110(c);
SET64(31, 0x2790bc); SET64(4, RD(20) + RD(0)); F_0027A498(c);
SET64(2, RD(0) + RD(0)); goto L_0027954C;
L_002790C8:;
SET32(3, RW(23) + 63);
SET64(3, RD(3) & RD(2));
SET64(4, RD(21) + RD(0));
SET32(5, RW(29) + 168);
SET32(6, RW(29) + 172);
SET32(7, RW(29) + 176);
SET32(8, RW(29) + 180);
SET64(16, (s64)(s32)0x530000);
SET64(19, (s64)(s32)0x410000);
SET64(31, 0x2790f4); wr32(c, (RW(16) + -19168), RW(3)); F_00278798(c);
SET64(5, (s32)rd32(c, (RW(29) + 176)));
SET64(23, (s64)(s32)0x410000);
SET64(7, (s32)rd32(c, (RW(29) + 168)));
SET32(2, RW(19) + -7712);
SET64(6, (s32)rd32(c, (RW(29) + 172)));
SET32(4, RW(23) + -7672);
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
{ int t = RD(22) == RD(8); wr32(c, (RW(2) + 28), RW(5)); if (t) goto L_00279248; }
SET64(2, RSD(22) < (s64)3);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 3); if (t) goto L_00279168; }
SET32(2, RW(0) + 1);
{ int t = RD(22) == RD(2); SET64(5, (s64)(s32)0x410000); if (t) goto L_00279178; }
SET64(2, (s64)(s32)0x530000); goto L_00279408;
L_00279168:;
{ int t = RD(22) == RD(2); SET64(5, (s64)(s32)0x410000); if (t) goto L_00279328; }
SET64(2, (s64)(s32)0x530000); goto L_00279408;
L_00279178:;
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + -7928);
SET64(2, RD(3) & 0x7);
{ int t = RD(2) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_002791F0; }
SET32(2, RW(3) + 64);
L_00279190:;
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
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_00279190; } }
SET64(2, (s32)rd32(c, (RW(16) + -19168))); goto L_0027922C;
L_002791F0:;
SET32(2, RW(3) + 64);
L_002791F4:;
SET64(10, rd64(c, (RW(3) + 0)));
SET64(5, rd64(c, (RW(3) + 8)));
SET64(6, rd64(c, (RW(3) + 16)));
SET64(7, rd64(c, (RW(3) + 24)));
wr64(c, (RW(4) + 0), RD(10));
wr64(c, (RW(4) + 8), RD(5));
wr64(c, (RW(4) + 16), RD(6));
wr64(c, (RW(4) + 24), RD(7));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_002791F4; } }
SET64(2, (s32)rd32(c, (RW(16) + -19168)));
L_0027922C:;
SET64(5, (s64)(s32)0x410000);
SET64(8, (s32)rd32(c, (RW(3) + 0)));
SET64(7, (s64)(s32)0x530000);
wr32(c, (RW(4) + 0), RW(8));
wr32(c, (RW(20) + 472), RW(2));
SET64(3, (s32)rd32(c, (RW(7) + -19164))); goto L_002793F4;
L_00279248:;
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + -7856);
SET64(2, RD(3) & 0x7);
{ int t = RD(2) == RD(0); SET64(5, RD(29) + RD(0)); if (t) goto L_002792C0; }
SET32(2, RW(3) + 64);
L_00279260:;
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
{ int t = RD(3) != RD(2); SET32(5, RW(5) + 32); if (t) { POLL(); goto L_00279260; } }
SET64(2, (s32)rd32(c, (RW(16) + -19168))); goto L_002792FC;
L_002792C0:;
SET32(2, RW(3) + 64);
L_002792C4:;
SET64(6, rd64(c, (RW(3) + 0)));
SET64(7, rd64(c, (RW(3) + 8)));
SET64(8, rd64(c, (RW(3) + 16)));
SET64(9, rd64(c, (RW(3) + 24)));
wr64(c, (RW(5) + 0), RD(6));
wr64(c, (RW(5) + 8), RD(7));
wr64(c, (RW(5) + 16), RD(8));
wr64(c, (RW(5) + 24), RD(9));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(5, RW(5) + 32); if (t) { POLL(); goto L_002792C4; } }
SET64(2, (s32)rd32(c, (RW(16) + -19168)));
L_002792FC:;
SET64(9, (s64)(s32)0x530000);
SET64(10, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(0) + 2048);
wr32(c, (RW(5) + 0), RW(10));
SET64(5, (s64)(s32)0x410000);
wr32(c, (RW(20) + 472), RW(2));
SET64(3, (s32)rd32(c, (RW(9) + -19164)));
wr32(c, (RW(20) + 480), RW(4));
SET32(3, RW(3) + -2048); goto L_00279400;
L_00279328:;
SET64(3, (s64)(s32)0x410000);
SET32(3, RW(3) + -7784);
SET64(2, RD(3) & 0x7);
{ int t = RD(2) == RD(0); SET64(4, RD(29) + RD(0)); if (t) goto L_002793A0; }
SET32(2, RW(3) + 64);
L_00279340:;
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
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_00279340; } }
SET64(2, (s32)rd32(c, (RW(16) + -19168))); goto L_002793DC;
L_002793A0:;
SET32(2, RW(3) + 64);
L_002793A4:;
SET64(8, rd64(c, (RW(3) + 0)));
SET64(9, rd64(c, (RW(3) + 8)));
SET64(10, rd64(c, (RW(3) + 16)));
SET64(5, rd64(c, (RW(3) + 24)));
wr64(c, (RW(4) + 0), RD(8));
wr64(c, (RW(4) + 8), RD(9));
wr64(c, (RW(4) + 16), RD(10));
wr64(c, (RW(4) + 24), RD(5));
SET32(3, RW(3) + 32);
{ int t = RD(3) != RD(2); SET32(4, RW(4) + 32); if (t) { POLL(); goto L_002793A4; } }
SET64(2, (s32)rd32(c, (RW(16) + -19168)));
L_002793DC:;
SET64(5, (s64)(s32)0x410000);
SET64(6, (s32)rd32(c, (RW(3) + 0)));
SET64(10, (s64)(s32)0x530000);
wr32(c, (RW(4) + 0), RW(6));
wr32(c, (RW(20) + 472), RW(2));
SET64(3, (s32)rd32(c, (RW(10) + -19164)));
L_002793F4:;
SET64(2, (s32)rd32(c, (RW(5) + -7644)));
SET32(3, RW(3) - RW(2));
wr32(c, (RW(20) + 480), RW(2));
L_00279400:;
wr32(c, (RW(20) + 476), RW(3));
SET64(2, (s64)(s32)0x530000);
L_00279408:;
SET64(3, (s32)rd32(c, (RW(5) + -7644)));
SET32(16, RW(2) + -19160);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0); wr32(c, (RW(29) + 40), RW(3)); if (t) goto L_00279434; }
div_s(c, 0, RSW(4), RSW(3));
if (RD(3) == RD(0)) { rt_break(c, 0x279424); goto L_00279428; }
L_00279428:;
SET64(2, c->hi.d[0]);
SET32(2, RW(4) - RW(2));
wr32(c, (RW(16) + 0), RW(2));
L_00279434:;
SET64(31, 0x27943c); SET64(4, (s32)rd32(c, (RW(21) + 36))); F_002788E8(c);
SET64(7, (s32)rd32(c, (RW(16) + 0)));
SET32(6, RW(29) + 80);
SET32(10, RW(29) + 96);
SET64(3, (s64)(s32)0x530000);
SET64(5, (s64)(s32)0x530000);
SET64(8, (s32)rd32(c, (RW(3) + -19156)));
SET32(4, RW(19) + -7712);
SET64(3, (s32)rd32(c, (RW(5) + -19152)));
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
SET64(31, 0x2794a8); wr32(c, (RW(29) + 64), RW(9)); F_00289DD0(c);
SET32(2, RW(0) + 1);
{ int t = RD(22) != RD(2);  if (t) goto L_002794BC; }
SET64(31, 0x2794bc); SET32(4, RW(23) + -7672); F_00282370(c);
L_002794BC:;
SET64(31, 0x2794c4); SET32(4, RW(0) + 1); F_002904C0(c);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2794d0); SET64(4, RD(29) + RD(0)); F_00292568(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) != RD(0); SET64(5, (s64)(s32)0x280000); if (t) goto L_002794F0; }
SET64(31, 0x2794e4); SET32(4, RW(0) + -305); F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -3616); goto L_00279518;
L_002794F0:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -16896);
SET64(31, 0x279500); SET64(6, RD(20) + RD(0)); F_00287A58(c);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(29) + 212))); goto L_00279528; }
SET64(31, 0x279510); SET32(4, RW(0) + -303); F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -3568);
L_00279518:;
SET64(31, 0x279520);  F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_0027954C;
L_00279528:;
SET64(4, RD(20) + RD(0));
SET32(6, RW(0) + 2048);
SET32(7, RW(0) + 64);
wr32(c, (RW(20) + 440), RW(2));
SET64(3, (s32)rd32(c, (RW(29) + 208)));
wr32(c, (RW(20) + 444), RW(3));
SET64(31, 0x279548); SET64(5, (s32)rd32(c, (RW(29) + 188))); F_002795B8(c);
SET64(2, RD(16) + RD(0));
L_0027954C:;
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

static void B_00279580(Ctx *c, u32 entry) { /* func_00279580 */
ENTER(entry);
switch (entry) { case 0x2795a8: goto L_002795A8; case 0x2795b0: goto L_002795B0; }
SET64(2, RD(4) < (u64)(s64)6);
{ int t = RD(2) == RD(0);  if (t) goto L_002795B0; }
SET32(2, RW(4) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + -3520)));
{ u32 t = RW(3);  switch (t) { case 0x2795a8: goto L_002795A8; case 0x2795b0: goto L_002795B0; default: rt_jump(c, t); return; } }
L_002795A8:;
SET64(2, RD(0) + RD(0)); return;
L_002795B0:;
SET32(2, RW(0) + 1); return;
}
void F_00279580(Ctx *c) { B_00279580(c, 0x279580); }
void F_002795A8(Ctx *c) { B_00279580(c, 0x2795a8); }
void F_002795B0(Ctx *c) { B_00279580(c, 0x2795b0); }

void F_002795B8(Ctx *c) { /* func_002795B8 */
ENTER(0x2795b8);
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

void F_002795E8(Ctx *c) { /* mwsfcre_AttachPicUsrBuf */
ENTER(0x2795e8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(5, (s32)rd32(c, (RW(16) + 380)));
if (RD(5) != RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 28))); goto L_00279638; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -3496);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00281110(c); return; }
L_00279638:;
SET64(19, (s32)rd32(c, (RW(5) + 8)));
SET32(18, RW(3) + 4);
SET64(2, (s32)rd32(c, (RW(5) + 4)));
mul_s(c, 0, 3, RSW(18), RSW(19));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) == RD(0); SET64(17, (s32)rd32(c, (RW(5) + 0))); if (t) goto L_00279678; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -3440);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00281110(c); return; }
L_00279678:;
SET64(31, 0x279680);  F_0027BB18(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002796B8; }
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(7, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0028A2C0(c); return; }
L_002796B8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_002796D0(Ctx *c) { /* mwPlyAttachPicUsrBuf */
ENTER(0x2796d0);
SET64(8, RD(4) + RD(0));
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET32(3, RW(8) + 368);
{ int t = RD(5) != RD(0); SET32(2, RW(8) + 356); if (t) goto L_00279700; }
wr32(c, (RW(3) + 8), RW(0));
wr32(c, (RW(8) + 380), RW(2));
wr32(c, (RW(3) + 0), RW(0));
wr32(c, (RW(3) + 4), RW(0)); goto L_0027973C;
L_00279700:;
SET64(2, (s32)rd32(c, (RW(8) + 28)));
SET32(2, RW(2) + 4);
mul_s(c, 0, 2, RSW(2), RSW(7));
SET64(2, RSD(6) < RSD(2));
if (RD(2) == RD(0)) { wr32(c, (RW(3) + 0), RW(5)); goto L_00279730; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -3376);
SET32(29, RW(29) + 16); { F_00281110(c); return; }
L_00279730:;
wr32(c, (RW(3) + 4), RW(6));
wr32(c, (RW(3) + 8), RW(7));
wr32(c, (RW(8) + 380), RW(3));
L_0027973C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002795E8(c); return; }
}

void F_00279748(Ctx *c) { /* func_00279748 */
ENTER(0x279748);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x279758);  F_00292B08(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -306); if (t) goto L_00279780; }
SET64(31, 0x279768);  F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + -3320);
SET32(29, RW(29) + 16); { F_00281110(c); return; }
L_00279780:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_00279790(Ctx *c) { /* func_00279790 */
ENTER(0x279790);
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
SET64(31, 0x2797cc); SET64(4, RD(18) + RD(0)); F_00294740(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2797dc); SET32(6, RW(0) + 1); F_00294740(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2797ec); SET64(6, RD(0) + RD(0)); F_00294740(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 23);
SET64(31, 0x2797fc); SET32(6, RW(0) + 4); F_00294740(c);
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
{ int t = c->fcc; SET32(5, RW(0) + 45); if (t) goto L_00279848; }
SET64(19, RD(0) + RD(0));
L_00279848:;
SET32(19, RW(2) - RW(19));
SET64(31, 0x279854); SET64(6, RD(19) + RD(0)); F_00294740(c);
SET64(4, RD(18) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(31, 0x279864); SET32(5, RW(0) + 44); F_00294740(c);
SET64(4, RD(18) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(31, 0x279874); SET32(5, RW(0) + 42); F_00294740(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 15);
SET64(31, 0x279884); SET32(6, RW(0) + 2); F_00294740(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 51);
SET64(31, 0x279894); SET64(6, RD(0) + RD(0)); F_00294740(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 14);
SET64(31, 0x2798a4); SET64(6, RD(0) + RD(0)); F_00294740(c);
SET64(4, RD(18) + RD(0));
SET32(5, RW(0) + 28);
SET64(31, 0x2798b4); SET64(6, RD(0) + RD(0)); F_00294740(c);
SET64(4, RD(18) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 5);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(0) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00289FF0(c); return; }
}

void F_002798E0(Ctx *c) { /* func_002798E0 */
ENTER(0x2798e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(16, (s32)rd32(c, (RW(17) + 64)));
SET64(31, 0x279900); SET64(4, RD(16) + RD(0)); F_00292C88(c);
SET64(5, (s64)(s32)0x280000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -16896);
{ int t = RD(2) == RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_00279920; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -3288); goto L_00279940;
L_00279920:;
SET64(31, 0x279928);  F_00287A58(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00279950; }
SET64(31, 0x279938); SET32(4, RW(0) + -303); F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -3232);
L_00279940:;
SET64(31, 0x279948);  F_00281110(c);
SET32(2, RW(0) + -1); goto L_0027995C;
L_00279950:;
SET64(31, 0x279958); SET64(4, RD(17) + RD(0)); F_002795E8(c);
SET64(2, RD(0) + RD(0));
L_0027995C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00279970(Ctx *c) { /* func_00279970 */
ENTER(0x279970);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, (s32)rd32(c, (RW(2) + 480)));
SET64(4, (s32)rd32(c, (RW(2) + 472)));
SET64(5, (s32)rd32(c, (RW(2) + 476)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00266B28(c); return; }
}

void F_00279998(Ctx *c) { /* mwPlyCreateSofdec */
ENTER(0x279998);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
wr64(c, (RW(29) + 48), RD(18));
wr64(c, (RW(29) + 56), RD(19));
wr64(c, (RW(29) + 64), RD(20));
wr64(c, (RW(29) + 72), RD(21));
{ int t = RD(17) != RD(0); wr64(c, (RW(29) + 80), RD(31)); if (t) goto L_002799D0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -3176); goto L_00279A6C;
L_002799D0:;
SET64(31, 0x2799d8);  F_00279DD8(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_00279D08; }
SET64(31, 0x2799ec);  F_0027B820(c);
SET64(4, RD(0) + RD(0));
SET32(16, RW(2) + 108);
SET32(18, RW(2) + 4);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 8); if (t) goto L_00279A38; }
SET64(3, RD(16) + RD(0));
SET32(4, RW(4) + 1);
L_00279A10:;
SET64(2, RSD(4) < (s64)8);
{ int t = RD(2) == RD(0); SET32(3, RW(3) + 696); if (t) goto L_00279A34; }
SET64(16, RD(3) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(0)) { SET32(4, RW(4) + 1); { POLL(); goto L_00279A10; } }
L_00279A34:;
SET32(2, RW(0) + 8);
L_00279A38:;
if (RD(4) != RD(2)) { SET64(4, RD(17) + RD(0)); goto L_00279A58; }
SET64(31, 0x279a48); SET32(4, RW(0) + -11); F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -3128); goto L_00279A6C;
L_00279A58:;
SET64(31, 0x279a60); SET32(21, RW(0) + -1); F_00279D30(c);
{ int t = RD(2) != RD(21); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00279A80; }
SET32(4, RW(4) + -3048);
L_00279A6C:;
SET64(31, 0x279a74);  F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_00279D08;
L_00279A80:;
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00279A94; }
SET64(5, RD(0) + RD(0));
SET64(31, 0x279a94); SET32(6, RW(0) + 696); F_001273D0(c);
L_00279A94:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x279aa0); SET64(5, RD(17) + RD(0)); F_00279D80(c);
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
SET64(31, 0x279b0c); SET64(5, RD(17) + RD(0)); F_00278E68(c);
SET64(19, RD(2) + RD(0));
{ int t = RD(19) != RD(0); wr32(c, (RW(16) + 64), RW(19)); if (t) goto L_00279B28; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -2984); goto L_00279CD0;
L_00279B28:;
SET64(31, 0x279b30); SET64(4, RD(16) + RD(0)); F_0027CDD8(c);
SET64(31, 0x279b38); SET64(4, RD(16) + RD(0)); F_002795E8(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET32(7, RW(29) + 8);
SET32(8, RW(29) + 12);
SET32(9, RW(29) + 16);
SET64(31, 0x279b58); SET32(10, RW(29) + 20); F_002786B0(c);
SET64(4, RD(16) + RD(0));
SET64(6, (s32)rd32(c, (RW(18) + 4)));
SET64(5, RD(17) + RD(0));
SET64(31, 0x279b6c); SET64(7, (s32)rd32(c, (RW(18) + 8))); F_00279790(c);
SET64(31, 0x279b74); SET64(4, RD(16) + RD(0)); F_00279970(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 468), RW(2)); if (t) goto L_00279B88; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -2944); goto L_00279CD0;
L_00279B88:;
SET64(4, RD(0) + RD(0));
SET64(31, 0x279b94); SET64(5, RD(0) + RD(0)); F_00266110(c);
{ int t = RD(2) != RD(0); wr32(c, (RW(16) + 500), RW(2)); if (t) goto L_00279BA8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -2904); goto L_00279CD0;
L_00279BA8:;
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(20, RW(0) + 1);
wr32(c, (RW(16) + 60), RW(20));
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(16) + 92), RW(3));
SET32(2, RW(2) + -8000);
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
SET64(31, 0x279bf0); wr32(c, (RW(16) + 84), RW(2)); F_00294CB8(c);
if (RD(2) != RD(0)) { wr32(c, (RW(18) + 0), RW(0)); goto L_00279BF8; }
L_00279BF8:;
wr32(c, (RW(16) + 112), RW(20));
SET64(5, RD(0) + RD(0));
wr8(c, (RW(16) + 116), (u8)RW(0));
SET64(4, RD(16) + RD(0));
wr8(c, (RW(16) + 117), (u8)RW(0));
wr8(c, (RW(16) + 118), (u8)RW(0));
wr8(c, (RW(16) + 119), (u8)RW(0));
SET64(31, 0x279c1c); wr32(c, (RW(16) + 96), RW(0)); F_00281D10(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x279c28); SET64(5, RD(0) + RD(0)); F_00281D20(c);
wr32(c, (RW(16) + 88), RW(20));
wr32(c, (RW(16) + 136), RW(0));
SET64(31, 0x279c38); SET64(4, (s32)rd32(c, (RW(16) + 468))); F_00282018(c);
{ int t = RD(2) == RD(0); wr32(c, (RW(16) + 68), RW(2)); if (t) goto L_00279CD8; }
SET64(31, 0x279c48); SET64(4, RD(16) + RD(0)); F_0027C8A8(c);
SET64(31, 0x279c50); SET64(4, (s32)rd32(c, (RW(16) + 468))); F_00261A40(c);
wr32(c, (RW(16) + 120), RW(0));
wr32(c, (RW(16) + 76), RW(2));
SET64(4, RD(2) + RD(0));
SET64(31, 0x279c64); SET64(5, (s32)rd32(c, (RW(16) + 68))); F_00261B98(c);
SET64(31, 0x279c6c); SET64(4, RD(16) + RD(0)); F_00279E40(c);
{ int t = RD(2) == RD(21);  if (t) goto L_00279CD8; }
SET64(7, (s32)rd32(c, (RW(17) + 12)));
SET64(4, (s32)rd32(c, (RW(16) + 176)));
SET64(5, (s32)rd32(c, (RW(16) + 180)));
SET64(31, 0x279c88); SET64(6, (s32)rd32(c, (RW(17) + 8))); F_0027E5D0(c);
if (RD(2) != RD(0)) { wr32(c, (RW(16) + 172), RW(2)); goto L_00279CA0; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -2864); goto L_00279CD0;
L_00279CA0:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x279cac); SET64(5, (s32)rd32(c, (RW(16) + 44))); F_0027EC48(c);
SET64(31, 0x279cb4); SET64(4, RD(16) + RD(0)); F_0027F078(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x279cc0); wr32(c, (RW(16) + 400), RW(2)); F_0027F108(c);
{ int t = RD(2) == RD(0);  if (t) goto L_00279CE8; }
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + -2832);
L_00279CD0:;
SET64(31, 0x279cd8);  F_00281110(c);
L_00279CD8:;
SET64(31, 0x279ce0); SET64(4, RD(16) + RD(0)); F_00279F08(c);
SET64(2, RD(0) + RD(0)); goto L_00279D08;
L_00279CE8:;
SET64(31, 0x279cf0); SET64(4, RD(16) + RD(0)); F_0027F168(c);
SET64(31, 0x279cf8); SET64(4, RD(16) + RD(0)); F_0027B3B8(c);
SET64(31, 0x279d00); SET64(4, RD(16) + RD(0)); F_0027B438(c);
wr32(c, (RW(16) + 4), RW(20));
SET64(2, RD(16) + RD(0));
L_00279D08:;
SET64(16, rd64(c, (RW(29) + 32)));
SET64(17, rd64(c, (RW(29) + 40)));
SET64(18, rd64(c, (RW(29) + 48)));
SET64(19, rd64(c, (RW(29) + 56)));
SET64(20, rd64(c, (RW(29) + 64)));
SET64(21, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void F_00279D30(Ctx *c) { /* func_00279D30 */
ENTER(0x279d30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x279d44); SET64(16, RD(4) + RD(0)); F_0027B820(c);
SET64(5, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET32(6, RW(0) + -1);
{ int t = RD(2) != RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_00279D6C; }
SET64(3, (s32)rd32(c, (RW(5) + 40)));
SET64(4, RD(6) + RD(0));
SET64(2, (s32)rd32(c, (RW(5) + 44)));
if (RD(3) != 0) SET64(4, RD(0));
if (RD(2) == 0) SET64(4, RD(6));
L_00279D6C:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(4) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00279D80(Ctx *c) { /* func_00279D80 */
ENTER(0x279d80);
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
L_00279DB0:;
SET32(8, RW(8) + -1);
wr32(c, (RW(7) + 0), RW(0));
{ int t = RSD(8) >= 0; SET32(7, RW(7) + -4); if (t) { POLL(); goto L_00279DB0; } }
 return;
}

void F_00279DD8(Ctx *c) { /* func_00279DD8 */
ENTER(0x279dd8);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(2) != RD(3); SET32(4, RW(0) + 1); if (t) goto L_00279E08; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x279e04); SET32(4, RW(4) + -2792); F_00281110(c);
SET64(4, RD(0) + RD(0));
L_00279E08:;
SET64(2, (s32)rd32(c, (RW(16) + 36)));
SET64(2, RD(2) < (u64)(s64)3);
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00279E2C; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x279e24); SET32(4, RW(4) + -2744); F_00281110(c);
SET64(4, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
L_00279E2C:;
SET64(2, RD(4) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00279E40(Ctx *c) { /* func_00279E40 */
ENTER(0x279e40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET32(17, RW(16) + 12);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(31, 0x279e68); SET64(5, (s32)rd32(c, (RW(17) + 12))); F_0027E5C8(c);
SET64(4, RD(16) + RD(0));
SET64(18, RD(2) + RD(0));
SET64(31, 0x279e78); SET64(5, RD(18) + RD(0)); F_0027A2F8(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + -2704); if (t) goto L_00279EB8; }
wr32(c, (RW(16) + 176), RW(2));
SET64(4, RD(17) + RD(0));
SET64(31, 0x279e94); wr32(c, (RW(16) + 180), RW(18)); F_0027F050(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3); SET64(4, RD(16) + RD(0)); if (t) goto L_00279EE0; }
SET64(31, 0x279ea8); SET64(5, (s64)(s32)0x20000); F_0027A2F8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(3, RD(2) + RD(0));
{ int t = RD(3) != RD(0); SET32(4, RW(4) + -2664); if (t) goto L_00279ED0; }
L_00279EB8:;
SET64(31, 0x279ec0);  F_00281110(c);
SET64(31, 0x279ec8); SET64(4, RD(16) + RD(0)); F_0027A498(c);
SET32(2, RW(0) + -1); goto L_00279EEC;
L_00279ED0:;
SET64(2, (s64)(s32)0x20000);
wr32(c, (RW(16) + 404), RW(3));
wr32(c, (RW(16) + 408), RW(2)); goto L_00279EE8;
L_00279EE0:;
wr32(c, (RW(16) + 408), RW(0));
wr32(c, (RW(16) + 404), RW(0));
L_00279EE8:;
SET64(2, RD(0) + RD(0));
L_00279EEC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00279F08(Ctx *c) { /* func_00279F08 */
ENTER(0x279f08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0027A000; }
SET64(31, 0x279f24);  F_0027C5F8(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(31, 0x279f30); SET64(4, RD(16) + RD(0)); F_0027F0D8(c);
SET64(4, (s32)rd32(c, (RW(16) + 172)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 76))); goto L_00279F48; }
SET64(31, 0x279f44);  F_0027E5E8(c);
SET64(4, (s32)rd32(c, (RW(16) + 76)));
L_00279F48:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 68))); goto L_00279F5C; }
SET64(31, 0x279f58);  F_00261B48(c);
SET64(4, (s32)rd32(c, (RW(16) + 68)));
L_00279F5C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 468))); goto L_00279F70; }
SET64(31, 0x279f6c);  F_00282030(c);
SET64(4, (s32)rd32(c, (RW(16) + 468)));
L_00279F70:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 500))); goto L_00279F8C; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x279f88);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 500)));
L_00279F8C:;
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 64))); goto L_00279FA8; }
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x279fa4);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 64)));
L_00279FA8:;
{ int t = RD(4) == RD(0);  if (t) goto L_00279FB8; }
SET64(31, 0x279fb8);  F_00279748(c);
L_00279FB8:;
SET64(31, 0x279fc0); SET32(4, RW(16) + 660); F_00280CA8(c);
SET64(31, 0x279fc8); SET64(4, RD(16) + RD(0)); F_0027A498(c);
SET64(31, 0x279fd0); SET64(4, RD(16) + RD(0)); F_0027A518(c);
{ int t = RD(2) == RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_00279FE0; }
SET64(31, 0x279fe0); SET32(4, RW(4) + -2624); F_00281110(c);
L_00279FE0:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x279ff0); SET32(6, RW(0) + 696); F_001273D0(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + -8000);
wr32(c, (RW(16) + 0), RW(2));
L_0027A000:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027A010(Ctx *c) { /* func_0027A010 */
ENTER(0x27a010);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -7644), RW(4)); return;
}

void F_0027A020(Ctx *c) { /* mwPlyGetHdrInf */
ENTER(0x27a020);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 120), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 112), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 128), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 136), RD(19));
{ int t = RD(17) == RD(0); wr64(c, (RW(29) + 144), RD(31)); if (t) goto L_0027A050; }
{ int t = RD(18) != RD(0);  if (t) goto L_0027A068; }
L_0027A050:;
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27a05c); SET32(4, RW(4) + -2600); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 112))); goto L_0027A1CC;
L_0027A068:;
if (RSD(16) > 0) { SET64(4, RD(29) + RD(0)); goto L_0027A088; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27a07c); SET32(4, RW(4) + -2560); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 112))); goto L_0027A1CC;
L_0027A088:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x27a094); SET32(6, RW(0) + 44); F_001273D0(c);
SET64(4, RD(17) + RD(0));
SET32(19, RW(29) + 48);
SET64(5, RD(16) + RD(0));
SET64(31, 0x27a0a8); SET64(6, RD(19) + RD(0)); F_00285F50(c);
SET64(2, (s8)rd8(c, (RW(29) + 48)));
{ int t = RD(2) == RD(0); SET64(2, (s8)rd8(c, (RW(29) + 49))); if (t) goto L_0027A0BC; }
{ int t = RD(2) != RD(0);  if (t) goto L_0027A120; }
L_0027A0BC:;
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
wr32(c, (RW(18) + 0), RW(0)); goto L_0027A1C8;
L_0027A120:;
SET64(31, 0x27a128); SET64(4, RD(19) + RD(0)); F_0027A1E8(c);
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
SET64(31, 0x27a164); wr32(c, (RW(29) + 40), RW(9)); F_0027B180(c);
SET64(31, 0x27a16c); SET64(4, RD(29) + RD(0)); F_0027A238(c);
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
L_0027A1C8:;
SET64(16, rd64(c, (RW(29) + 112)));
L_0027A1CC:;
SET64(17, rd64(c, (RW(29) + 120)));
SET64(18, rd64(c, (RW(29) + 128)));
SET64(19, rd64(c, (RW(29) + 136)));
SET64(31, rd64(c, (RW(29) + 144)));
SET32(29, RW(29) + 160); return;
}

void F_0027A1E8(Ctx *c) { /* func_0027A1E8 */
ENTER(0x27a1e8);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0027A218; }
SET64(2, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(2) == RD(0); SET64(2, RD(5) + RD(0)); if (t) goto L_0027A22C; }
SET64(2, (s32)rd32(c, (RW(4) + 12)));
if (RD(2) == RD(0)) { SET32(5, RW(0) + 2); goto L_0027A228; }
SET64(2, RD(5) + RD(0)); return;
L_0027A218:;
SET64(3, (s32)rd32(c, (RW(4) + 12)));
SET32(2, RW(0) + 1);
SET32(5, RW(0) + 3);
if (RD(3) != 0) SET64(5, RD(2));
L_0027A228:;
SET64(2, RD(5) + RD(0));
L_0027A22C:;
 return;
}

void F_0027A238(Ctx *c) { /* func_0027A238 */
ENTER(0x27a238);
SET64(5, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(5) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0027A2A8; }
SET32(3, RW(0) + 2);
{ int t = RD(5) == RD(3);  if (t) goto L_0027A2A8; }
SET32(2, RW(0) + 1);
{ int t = RD(5) != RD(2);  if (t) goto L_0027A2A8; }
SET64(4, (s32)rd32(c, (RW(4) + 36)));
SET32(2, RW(0) + 12000);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_0027A2A8; }
SET64(2, RSD(4) < (s64)12001);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 24000); if (t) goto L_0027A288; }
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_0027A2A8; }
SET32(2, RW(0) + 6000); goto L_0027A294;
L_0027A288:;
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_0027A2A8; }
SET64(2, RD(0) | 0xbb80);
L_0027A294:;
if (RD(4) == RD(2)) { SET32(2, RW(0) + 1); goto L_0027A2A8; }
SET64(2, RD(0) + RD(0)); return;
L_0027A2A8:;
 return;
}

void F_0027A2B0(Ctx *c) { /* func_0027A2B0 */
ENTER(0x27a2b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27a2d4); SET64(18, RD(5) + RD(0)); F_0027B820(c);
wr32(c, (RW(2) + 48), RW(16));
wr32(c, (RW(2) + 40), RW(17));
wr32(c, (RW(2) + 44), RW(18));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027A2F8(Ctx *c) { /* MWSFD_Malloc */
ENTER(0x27a2f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(2, (s32)rd32(c, (RW(17) + 528)));
SET64(2, RSD(2) < (s64)32);
{ int t = RD(2) != RD(0); SET64(3, RD(5) + RD(0)); if (t) goto L_0027A330; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27a328); SET32(4, RW(4) + -2512); F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_0027A384;
L_0027A330:;
{ int t = RSD(3) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_0027A384; }
SET64(2, (s32)rd32(c, (RW(17) + 512)));
{ int t = RD(2) == RD(0);  if (t) goto L_0027A358; }
SET64(31, 0x27a34c);  F_0027A398(c);
SET64(16, RD(2) + RD(0)); goto L_0027A364;
L_0027A358:;
SET64(31, 0x27a360); SET64(4, RD(3) + RD(0)); F_0027A3D0(c);
SET64(16, RD(2) + RD(0));
L_0027A364:;
{ int t = RD(16) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0027A380; }
SET64(2, (s32)rd32(c, (RW(17) + 528)));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(17));
SET64(31, 0x27a380); wr32(c, (RW(2) + 532), RW(16)); F_0027A4F8(c);
L_0027A380:;
SET64(2, RD(16) + RD(0));
L_0027A384:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027A398(Ctx *c) { /* func_0027A398 */
ENTER(0x27a398);
SET32(4, RW(4) + 512);
SET64(3, (s32)rd32(c, (RW(4) + 12)));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) + RW(5));
SET64(2, RD(2) < RD(3));
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_0027A3C4; }
SET64(6, (s32)rd32(c, (RW(4) + 8)));
wr32(c, (RW(4) + 12), RW(3));
SET32(2, RW(6) + RW(5));
wr32(c, (RW(4) + 8), RW(2));
L_0027A3C4:;
SET64(2, RD(6) + RD(0)); return;
}

void F_0027A3D0(Ctx *c) { /* func_0027A3D0 */
ENTER(0x27a3d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27a3e4); SET64(16, RD(4) + RD(0)); F_0027B820(c);
SET64(4, (s32)rd32(c, (RW(2) + 48)));
SET64(2, (s32)rd32(c, (RW(2) + 40)));
{ u32 t = RW(2); SET64(31, 0x27a3f4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027A408(Ctx *c) { /* func_0027A408 */
ENTER(0x27a408);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 512)));
{ int t = RD(2) == RD(0); SET64(3, RD(5) + RD(0)); if (t) goto L_0027A438; }
SET64(31, 0x27a42c);  F_0027A458(c);
SET64(4, RD(16) + RD(0)); goto L_0027A444;
L_0027A438:;
SET64(31, 0x27a440); SET64(4, RD(3) + RD(0)); F_0027A460(c);
SET64(4, RD(16) + RD(0));
L_0027A444:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0027A508(c); return; }
}

void F_0027A458(Ctx *c) { /* func_0027A458 */
ENTER(0x27a458);
 return;
}

void F_0027A460(Ctx *c) { /* func_0027A460 */
ENTER(0x27a460);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27a474); SET64(16, RD(4) + RD(0)); F_0027B820(c);
SET64(4, (s32)rd32(c, (RW(2) + 48)));
SET64(3, (s32)rd32(c, (RW(2) + 44)));
{ u32 t = RW(3); SET64(31, 0x27a484); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027A498(Ctx *c) { /* func_0027A498 */
ENTER(0x27a498);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(17) + 656);
wr64(c, (RW(29) + 16), RD(18));
SET32(18, RW(0) + 31);
L_0027A4B8:;
SET64(5, (s32)rd32(c, (RW(16) + 0)));
if (RD(5) == RD(0)) { SET32(18, RW(18) + -1); goto L_0027A4D4; }
SET64(31, 0x27a4cc); SET64(4, RD(17) + RD(0)); F_0027A408(c);
wr32(c, (RW(16) + 0), RW(0));
SET32(18, RW(18) + -1);
L_0027A4D4:;
{ int t = RSD(18) >= 0; SET32(16, RW(16) + -4); if (t) { POLL(); goto L_0027A4B8; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027A4F8(Ctx *c) { /* func_0027A4F8 */
ENTER(0x27a4f8);
SET64(2, (s32)rd32(c, (RW(4) + 528)));
SET32(2, RW(2) + 1);
wr32(c, (RW(4) + 528), RW(2)); return;
}

void F_0027A508(Ctx *c) { /* func_0027A508 */
ENTER(0x27a508);
SET64(2, (s32)rd32(c, (RW(4) + 528)));
SET32(2, RW(2) + -1);
wr32(c, (RW(4) + 528), RW(2)); return;
}

void F_0027A518(Ctx *c) { /* func_0027A518 */
ENTER(0x27a518);
SET64(2, (s32)rd32(c, (RW(4) + 528))); return;
}

void F_0027A520(Ctx *c) { /* mwPlySetFrmSync */
ENTER(0x27a520);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27a53c); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + -2464); if (t) goto L_0027A560; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027A560:;
wr32(c, (RW(16) + 88), RW(17));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void F_0027A578(Ctx *c) { /* mwPlyGetFrmSync */
ENTER(0x27a578);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27a58c); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027A5B8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27a5a0); SET32(4, RW(4) + -2416); F_00281110(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_0027A5B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0027A5C8(c); return; }
}

void F_0027A5C8(Ctx *c) { /* func_0027A5C8 */
ENTER(0x27a5c8);
SET64(2, (s32)rd32(c, (RW(4) + 88))); return;
}

void F_0027A5D0(Ctx *c) { /* mwPlyGetCurFrm */
ENTER(0x27a5d0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 48), RD(20));
wr64(c, (RW(29) + 56), RD(21));
wr64(c, (RW(29) + 64), RD(31));
SET64(31, 0x27a5fc); SET64(19, RD(5) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0);  if (t) goto L_0027A618; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27a610); SET32(4, RW(4) + -2368); F_00281110(c);
wr32(c, (RW(19) + 0), RW(0)); goto L_0027A724;
L_0027A618:;
SET64(31, 0x27a620); SET64(4, RD(16) + RD(0)); F_0027D198(c);
SET64(17, RD(2) + RD(0));
SET64(5, RD(29) + RD(0));
SET64(31, 0x27a630); SET64(4, RD(17) + RD(0)); F_00293338(c);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
if (RD(3) == RD(0)) { wr32(c, (RW(19) + 0), RW(0)); goto L_0027A724; }
SET64(2, (s32)rd32(c, (RW(16) + 88)));
{ int t = RD(2) != RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_0027A69C; }
SET64(20, (s32)rd32(c, (RW(16) + 28)));
SET32(21, RW(0) + 1);
SET64(2, RSD(18) < RSD(20));
L_0027A658:;
{ int t = RD(2) == RD(0); SET32(18, RW(18) + 1); if (t) goto L_0027A698; }
SET64(31, 0x27a668); SET64(4, RD(16) + RD(0)); F_0027AFD0(c);
{ int t = RD(2) != RD(21); SET64(4, RD(17) + RD(0)); if (t) goto L_0027A698; }
SET64(31, 0x27a678); SET64(5, (s32)rd32(c, (RW(29) + 0))); F_002933F0(c);
SET64(3, (s32)rd32(c, (RW(16) + 136)));
SET64(4, RD(17) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(3, RW(3) + 1);
SET64(31, 0x27a690); wr32(c, (RW(16) + 136), RW(3)); F_00293338(c);
SET64(2, RSD(18) < RSD(20)); { POLL(); goto L_0027A658; }
L_0027A698:;
SET64(3, (s32)rd32(c, (RW(29) + 0)));
L_0027A69C:;
{ int t = RD(3) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027A720; }
SET64(2, (s32)rd32(c, (RW(16) + 128)));
wr32(c, (RW(16) + 124), RW(3));
SET32(2, RW(2) + 1);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x27a6bc); wr32(c, (RW(16) + 128), RW(2)); F_0027ABE0(c);
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(31, 0x27a6cc); SET64(6, RD(19) + RD(0)); F_0027A810(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27a6d8); SET64(5, (s32)rd32(c, (RW(29) + 0))); F_0027AC28(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27a6e4); SET64(5, RD(19) + RD(0)); F_0027A748(c);
SET64(31, 0x27a6ec); SET64(4, RD(16) + RD(0)); F_0027A798(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27a6f8); SET64(5, (s32)rd32(c, (RW(29) + 0))); F_0027AB38(c);
SET64(3, (s32)rd32(c, (RW(19) + 44)));
wr32(c, (RW(19) + 72), RW(2));
SET64(4, RD(16) + RD(0));
SET64(31, 0x27a70c); wr32(c, (RW(16) + 188), RW(3)); F_0027B728(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27a718); SET64(5, RD(2) + RD(0)); F_0027ECD8(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0027A728;
L_0027A720:;
wr32(c, (RW(19) + 0), RW(0));
L_0027A724:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0027A728:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(31, rd64(c, (RW(29) + 64)));
SET32(29, RW(29) + 80); return;
}

void F_0027A748(Ctx *c) { /* func_0027A748 */
ENTER(0x27a748);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(3, (s32)rd32(c, (RW(17) + 44)));
SET64(2, (s32)rd32(c, (RW(16) + 420)));
SET64(2, RSD(2) < RSD(3));
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 420), RW(3)); goto L_0027A784; }
SET64(31, 0x27a77c);  F_0027F210(c);
SET64(3, (s32)rd32(c, (RW(17) + 44)));
wr32(c, (RW(16) + 420), RW(3));
L_0027A784:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027A798(Ctx *c) { /* func_0027A798 */
ENTER(0x27a798);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 1);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x27a7bc); SET64(18, RD(4) + RD(0)); F_0027B628(c);
SET64(2, RD(2) ^ RD(16));
SET64(4, RD(18) + RD(0));
SET64(31, 0x27a7cc); SET64(19, RD(2) < (u64)(s64)1); F_0027AD40(c);
SET64(17, RD(2) + RD(0));
{ int t = RD(17) != RD(16); SET64(4, RD(18) + RD(0)); if (t) goto L_0027A7E8; }
SET64(31, 0x27a7e0);  F_0027F8D8(c);
SET64(2, RD(2) ^ RD(17));
SET64(19, RD(2) < (u64)(s64)1);
L_0027A7E8:;
SET64(4, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(5, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0027ED20(c); return; }
}

void F_0027A810(Ctx *c) { /* func_0027A810 */
ENTER(0x27a810);
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
SET64(31, 0x27a858); SET64(23, (s32)rd32(c, (RW(18) + 32))); F_0027AA90(c);
wr32(c, (RW(29) + 4), RW(2));
SET64(2, (s32)rd32(c, (RW(18) + 0)));
SET64(4, (s32)rd32(c, (RW(18) + 16)));
wr32(c, (RW(29) + 8), RW(2));
SET64(5, (s32)rd32(c, (RW(18) + 4)));
wr32(c, (RW(29) + 12), RW(5));
SET64(6, (s32)rd32(c, (RW(18) + 8)));
wr32(c, (RW(29) + 16), RW(6));
SET64(7, (s32)rd32(c, (RW(18) + 12)));
SET64(31, 0x27a884); wr32(c, (RW(29) + 20), RW(7)); F_0027AAD0(c);
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
SET64(31, 0x27a8b4); wr32(c, (RW(29) + 32), RW(6)); F_00296370(c);
{ int t = RD(2) == RD(0); SET64(5, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0027A8CC; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27a8c8); SET32(4, RW(4) + -2320); F_00281110(c);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
L_0027A8CC:;
SET64(6, RD(19) + RD(0));
SET64(31, 0x27a8d8); SET64(4, RD(20) + RD(0)); F_0027AA60(c);
SET64(4, RD(21) + RD(0));
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(6, RD(19) + RD(0));
SET64(31, 0x27a8ec); SET64(16, RD(2) + RD(0)); F_0027AA60(c);
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
SET64(31, 0x27a960); wr32(c, (RW(17) + 60), RW(7)); F_0027A9C8(c);
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

void F_0027A9C8(Ctx *c) { /* func_0027A9C8 */
ENTER(0x27a9c8);
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
SET64(31, 0x27aa00); SET64(16, (s32)rd32(c, (RW(2) + 0))); F_0027BB18(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { wr32(c, (RW(18) + 68), RW(0)); goto L_0027AA18; }
{ int t = RD(20) != RD(19);  if (t) goto L_0027AA20; }
wr32(c, (RW(18) + 68), RW(0));
L_0027AA18:;
wr32(c, (RW(18) + 64), RW(0)); goto L_0027AA40;
L_0027AA20:;
{ int t = RD(16) == RD(0); SET64(2, RSD(17) < (s64)5); if (t) goto L_0027AA38; }
if (RD(2) != RD(0)) { wr32(c, (RW(18) + 68), RW(17)); goto L_0027AA3C; }
SET32(16, RW(16) + 4);
SET32(17, RW(17) + -4);
L_0027AA38:;
wr32(c, (RW(18) + 68), RW(17));
L_0027AA3C:;
wr32(c, (RW(18) + 64), RW(16));
L_0027AA40:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(20, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0027AA60(Ctx *c) { /* func_0027AA60 */
ENTER(0x27aa60);
SET64(2, RD(6) + RD(0));
SET32(29, RW(29) + -16);
SET32(6, RW(2) << 5);
wr64(c, (RW(29) + 0), RD(31));
SET32(6, RW(6) - RW(2));
SET32(6, RW(6) << 2);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(6, RW(6) + RW(2));
SET32(6, RW(6) << 3);
SET32(29, RW(29) + 16); { F_002784E8(c); return; }
}

void F_0027AA90(Ctx *c) { /* func_0027AA90 */
ENTER(0x27aa90);
SET32(2, RW(0) + 2);
SET64(5, RD(4) < (u64)(s64)3);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 2); if (t) goto L_0027AAC4; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 3); goto L_0027AAB8; }
SET32(2, RW(0) + 1);
SET32(3, RW(0) + 1); goto L_0027AABC;
L_0027AAB8:;
SET32(3, RW(0) + 3);
L_0027AABC:;
if (RD(4) != RD(2)) { SET32(3, RW(0) + 3); goto L_0027AAC4; }
L_0027AAC4:;
SET64(2, RD(3) + RD(0)); return;
}

void F_0027AAD0(Ctx *c) { /* mwl_convPtypeFromSFD */
ENTER(0x27aad0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(4) < (u64)(s64)3);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 2); if (t) goto L_0027AB28; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 3); goto L_0027AB00; }
SET32(2, RW(0) + 1);
SET32(3, RW(0) + 1); goto L_0027AB10;
L_0027AB00:;
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 3); if (t) goto L_0027AB28; }
SET32(2, RW(0) + 4);
SET32(3, RW(0) + 4);
L_0027AB10:;
{ int t = RD(4) == RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0027AB2C; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27ab24); SET32(4, RW(4) + -2288); F_00281110(c);
SET32(3, RW(0) + 1);
L_0027AB28:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0027AB2C:;
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0027AB38(Ctx *c) { /* mwsffrm_DecideFrmType */
ENTER(0x27ab38);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(3, (s32)rd32(c, (RW(5) + 88)));
SET64(2, RD(3) < (u64)(s64)3);
{ int t = RD(2) == RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_0027AB70; }
if (RD(3) != RD(0)) { SET32(17, RW(0) + 2); goto L_0027AB98; }
SET64(4, (s64)(s32)0x4b0000); goto L_0027AB90;
L_0027AB70:;
SET32(2, RW(0) + 3);
{ int t = RD(3) != RD(2); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0027AB90; }
SET64(2, (s8)rd8(c, (RW(5) + 108)));
{ int t = RD(2) != RD(0);  if (t) goto L_0027AB98; }
SET32(17, RW(0) + 2); goto L_0027AB98;
L_0027AB90:;
SET64(31, 0x27ab98); SET32(4, RW(4) + -2248); F_00281110(c);
L_0027AB98:;
SET64(31, 0x27aba0);  F_0027BB18(c);
SET64(16, RD(2) + RD(0));
SET32(2, RW(0) + 1);
if (RD(16) != RD(2)) { SET64(2, RD(17) + RD(0)); goto L_0027ABC8; }
SET64(31, 0x27abb8); SET64(4, RD(18) + RD(0)); F_0027F908(c);
SET32(3, RW(0) + 2);
SET64(2, RD(2) ^ RD(16));
if (RD(2) == 0) SET64(17, RD(3));
SET64(2, RD(17) + RD(0));
L_0027ABC8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027ABE0(Ctx *c) { /* func_0027ABE0 */
ENTER(0x27abe0);
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

void F_0027AC28(Ctx *c) { /* func_0027AC28 */
ENTER(0x27ac28);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(2, (s32)rd32(c, (RW(5) + 56)));
SET64(18, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x27ac50); SET64(17, (s32)rd32(c, (RW(2) + 0))); F_0027BB18(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0027AD14; }
SET64(2, (s32)rd32(c, (RW(16) + 384)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0027AD14; }
{ int t = RD(17) == RD(0); SET64(2, RSD(18) < (s64)5); if (t) goto L_0027AC98; }
if (RD(2) != RD(0)) { wr32(c, (RW(29) + 0), RW(0)); goto L_0027AC9C; }
SET32(4, RW(17) + 4);
SET32(5, RW(18) + -4);
SET64(6, RD(29) + RD(0));
SET64(31, 0x27ac8c); SET32(7, RW(29) + 4); F_0029C560(c);
SET64(2, (s32)rd32(c, (RW(29) + 0))); goto L_0027ACA4;
L_0027AC98:;
wr32(c, (RW(29) + 0), RW(0));
L_0027AC9C:;
wr32(c, (RW(29) + 4), RW(0));
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_0027ACA4:;
{ int t = RD(2) == RD(0); SET64(7, (s32)rd32(c, (RW(29) + 4))); if (t) goto L_0027ACF8; }
if (RSD(7) <= 0) { wr32(c, (RW(16) + 392), RW(0)); goto L_0027ACFC; }
SET64(2, (s32)rd32(c, (RW(16) + 388)));
SET64(5, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(16) + 384)));
SET64(3, RSD(2) < RSD(7));
SET64(6, RD(2) + RD(0));
if (RD(3) != 0) SET64(7, RD(2));
SET64(31, 0x27acd4); wr32(c, (RW(29) + 4), RW(7)); F_001273D0(c);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(4, (s32)rd32(c, (RW(16) + 384)));
SET64(31, 0x27ace4); SET64(6, (s32)rd32(c, (RW(29) + 4))); F_00127218(c);
SET64(3, (s32)rd32(c, (RW(16) + 384)));
SET64(2, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(16) + 392), RW(3));
wr32(c, (RW(16) + 396), RW(2)); goto L_0027AD00;
L_0027ACF8:;
wr32(c, (RW(16) + 392), RW(0));
L_0027ACFC:;
wr32(c, (RW(16) + 396), RW(0));
L_0027AD00:;
SET64(4, RD(16) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 392)));
SET64(31, 0x27ad10); SET64(6, (s32)rd32(c, (RW(4) + 396))); F_0027F8C0(c);
SET64(16, rd64(c, (RW(29) + 16)));
L_0027AD14:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0027AD28(Ctx *c) { /* func_0027AD28 */
ENTER(0x27ad28);
SET64(2, (s32)rd32(c, (RW(4) + 396)));
SET64(3, (s32)rd32(c, (RW(4) + 392)));
wr32(c, (RW(6) + 0), RW(2));
wr32(c, (RW(5) + 0), RW(3)); return;
}

void F_0027AD40(Ctx *c) { /* func_0027AD40 */
ENTER(0x27ad40);
SET64(2, (s32)rd32(c, (RW(4) + 392)));
SET64(2, RD(0) < RD(2)); return;
}

void F_0027AD50(Ctx *c) { /* func_0027AD50 */
ENTER(0x27ad50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27ad68); SET64(7, RD(29) + RD(0)); F_00289F60(c);
SET64(5, RD(16) + RD(0));
SET64(31, 0x27ad74); SET64(4, RD(29) + RD(0)); F_0027AEF8(c);
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027AD88(Ctx *c) { /* func_0027AD88 */
ENTER(0x27ad88);
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
SET64(31, 0x27adc4); SET64(23, (s32)rd32(c, (RW(16) + 0))); F_0027AE50(c);
SET64(22, (s32)rd32(c, (RW(16) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(21, RD(2) + RD(0));
SET64(18, (s32)rd32(c, (RW(16) + 12)));
SET64(19, (s32)rd32(c, (RW(16) + 16)));
SET64(31, 0x27ade0); SET64(20, (s32)rd32(c, (RW(16) + 20))); F_0027AE90(c);
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

void F_0027AE50(Ctx *c) { /* func_0027AE50 */
ENTER(0x27ae50);
SET32(2, RW(0) + 2);
SET64(5, RD(4) < (u64)(s64)3);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 2); if (t) goto L_0027AE84; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 3); goto L_0027AE78; }
SET32(2, RW(0) + 1);
SET32(3, RW(0) + 1); goto L_0027AE7C;
L_0027AE78:;
SET32(3, RW(0) + 3);
L_0027AE7C:;
if (RD(4) != RD(2)) { SET32(3, RW(0) + 3); goto L_0027AE84; }
L_0027AE84:;
SET64(2, RD(3) + RD(0)); return;
}

void F_0027AE90(Ctx *c) { /* mwl_convPtypeToSFD */
ENTER(0x27ae90);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(4) < (u64)(s64)3);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 2); if (t) goto L_0027AEE8; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 3); goto L_0027AEC0; }
SET32(2, RW(0) + 1);
SET32(3, RW(0) + 1); goto L_0027AED0;
L_0027AEC0:;
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 3); if (t) goto L_0027AEE8; }
SET32(2, RW(0) + 4);
SET32(3, RW(0) + 4);
L_0027AED0:;
{ int t = RD(4) == RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0027AEEC; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27aee4); SET32(4, RW(4) + -2192); F_00281110(c);
SET32(3, RW(0) + 1);
L_0027AEE8:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0027AEEC:;
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0027AEF8(Ctx *c) { /* func_0027AEF8 */
ENTER(0x27aef8);
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

void F_0027AF28(Ctx *c) { /* mwPlyRelCurFrm */
ENTER(0x27af28);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x27af48); SET64(19, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(19) + RD(0)); if (t) goto L_0027AF78; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -2152);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00281110(c); return; }
L_0027AF78:;
SET64(18, (s32)rd32(c, (RW(19) + 128)));
SET64(16, (s32)rd32(c, (RW(19) + 132)));
SET64(31, 0x27af88); SET64(17, (s32)rd32(c, (RW(19) + 124))); F_0027D198(c);
SET64(16, RSD(16) < RSD(18));
SET64(4, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0027AFB0; }
SET64(31, 0x27afa0);  F_002933F0(c);
SET64(3, (s32)rd32(c, (RW(19) + 132)));
SET32(3, RW(3) + 1);
wr32(c, (RW(19) + 128), RW(3));
wr32(c, (RW(19) + 132), RW(3));
L_0027AFB0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0027AFD0(Ctx *c) { /* mwPlyIsNextFrmReady */
ENTER(0x27afd0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27afe4); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027B010; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27aff8); SET32(4, RW(4) + -2104); F_00281110(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_0027B010:;
SET64(31, 0x27b018);  F_0027D198(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0028F730(c); return; }
}

void F_0027B030(Ctx *c) { /* mwPlyGetNextPicUsr */
ENTER(0x27b030);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27b054); SET64(18, RD(5) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027B078; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27b068); SET32(4, RW(4) + -2048); F_00281110(c);
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(17) + 0), RW(0)); goto L_0027B0B4;
L_0027B078:;
SET64(31, 0x27b080);  F_0027D198(c);
SET64(5, RD(18) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x27b090); SET64(6, RD(17) + RD(0)); F_0028F590(c);
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET32(3, RW(2) + -4);
SET64(2, RSD(2) < (s64)4);
{ int t = RD(2) != RD(0); SET64(16, rd64(c, (RW(29) + 0))); if (t) goto L_0027B0B8; }
SET64(2, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(17) + 0), RW(3));
SET32(2, RW(2) + 4);
wr32(c, (RW(18) + 0), RW(2));
L_0027B0B4:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0027B0B8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027B0D0(Ctx *c) { /* func_0027B0D0 */
ENTER(0x27b0d0);
SET64(5, (s32)rd32(c, (RW(4) + 132)));
SET64(2, (s32)rd32(c, (RW(4) + 128)));
SET32(4, RW(5) + 1);
SET64(3, RSD(5) < RSD(2));
{ int t = RD(3) != RD(0); SET64(2, RD(2) ^ RD(5)); if (t) goto L_0027B0F0; }
SET64(4, RD(0) + RD(0));
if (RD(2) == 0) SET64(4, RD(5));
L_0027B0F0:;
SET64(2, RD(4) + RD(0)); return;
}

void F_0027B0F8(Ctx *c) { /* mwPlyGetNumSkipDisp */
ENTER(0x27b0f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27b10c); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 136))); goto L_0027B124; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27b120); SET32(4, RW(4) + -1992); F_00281110(c);
SET64(2, RD(0) + RD(0));
L_0027B124:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027B138(Ctx *c) { /* func_0027B138 */
ENTER(0x27b138);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027B6A8(c); return; }
}

void F_0027B150(Ctx *c) { /* func_0027B150 */
ENTER(0x27b150);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27b160); SET64(5, RD(29) + RD(0)); F_002991E8(c);
SET32(4, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x0);
SET64(31, rd64(c, (RW(29) + 16)));
if (RD(2) != 0) SET64(4, RD(3));
SET64(2, RD(4) + RD(0));
SET32(29, RW(29) + 32); return;
}

void F_0027B180(Ctx *c) { /* func_0027B180 */
ENTER(0x27b180);
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
{ int t = RD(3) != RD(0); wr32(c, (RW(17) + 20), RW(2)); if (t) goto L_0027B278; }
{ int t = RD(19) == RD(0); SET32(20, RW(0) + 2); if (t) goto L_0027B278; }
SET32(22, RW(0) + -1);
SET32(18, RW(0) + 2048);
SET32(4, RW(19) + RW(18));
L_0027B1D8:;
SET64(31, 0x27b1e0); SET32(5, RW(21) - RW(18)); F_002985C8(c);
SET32(18, RW(18) + 2048);
SET64(16, RD(2) + RD(0));
SET64(5, RD(29) + RD(0));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027B268; }
SET64(31, 0x27b1fc);  F_002987E0(c);
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0027B20C; }
{ int t = RD(2) != RD(0);  if (t) goto L_0027B228; }
L_0027B20C:;
wr32(c, (RW(17) + 20), RW(22));
SET64(4, RD(16) + RD(0));
SET64(31, 0x27b21c); wr32(c, (RW(17) + 24), RW(22)); F_00298690(c);
SET32(20, RW(20) + 1); goto L_0027B26C;
L_0027B228:;
SET64(31, 0x27b230); SET64(4, RD(16) + RD(0)); F_0027B150(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27b23c); wr32(c, (RW(17) + 20), RW(2)); F_0027B2E0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27b248); wr32(c, (RW(17) + 24), RW(2)); F_0027B388(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27b254); wr32(c, (RW(17) + 28), RW(2)); F_0027B358(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27b260); wr32(c, (RW(17) + 32), RW(2)); F_00298690(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0027B27C;
L_0027B268:;
SET32(20, RW(20) + 1);
L_0027B26C:;
SET64(2, RSD(20) < (s64)4);
{ int t = RD(2) != RD(0); SET32(4, RW(19) + RW(18)); if (t) { POLL(); goto L_0027B1D8; } }
L_0027B278:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0027B27C:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(20, rd64(c, (RW(29) + 48)));
SET64(21, rd64(c, (RW(29) + 56)));
SET64(22, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_0027B2A0(Ctx *c) { /* func_0027B2A0 */
ENTER(0x27b2a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27b2b0);  F_0027B728(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 81);
{ int t = RD(3) == RD(2); SET32(4, RW(0) + 97); if (t) goto L_0027B2C8; }
{ int t = RD(3) != RD(4); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0027B2D0; }
L_0027B2C8:;
SET32(3, RW(0) + 65);
SET64(31, rd64(c, (RW(29) + 0)));
L_0027B2D0:;
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

static void B_0027B2E0(Ctx *c, u32 entry) { /* func_0027B2E0 */
ENTER(entry);
switch (entry) { case 0x27b330: goto L_0027B330; case 0x27b338: goto L_0027B338; case 0x27b340: goto L_0027B340; case 0x27b348: goto L_0027B348; }
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 224);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27b2f4); SET64(6, RD(29) + RD(0)); F_00299B10(c);
{ int t = RD(2) != RD(0); SET64(3, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0027B308; }
SET32(2, RW(0) + 17); goto L_0027B34C;
L_0027B308:;
SET64(2, RD(3) < (u64)(s64)9);
{ int t = RD(2) == RD(0); SET32(2, RW(0) + 17); if (t) goto L_0027B34C; }
SET32(2, RW(3) << 2);
SET64(3, (s64)(s32)0x4b0000);
SET32(3, RW(3) + RW(2));
SET64(3, (s32)rd32(c, (RW(3) + -1936)));
{ u32 t = RW(3);  switch (t) { case 0x27b330: goto L_0027B330; case 0x27b338: goto L_0027B338; case 0x27b340: goto L_0027B340; case 0x27b348: goto L_0027B348; default: rt_jump(c, t); return; } }
L_0027B330:;
SET32(2, RW(0) + 33); goto L_0027B34C;
L_0027B338:;
SET32(2, RW(0) + 81); goto L_0027B34C;
L_0027B340:;
SET32(2, RW(0) + 97); goto L_0027B34C;
L_0027B348:;
SET32(2, RW(0) + 17);
L_0027B34C:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}
void F_0027B2E0(Ctx *c) { B_0027B2E0(c, 0x27b2e0); }
void F_0027B330(Ctx *c) { B_0027B2E0(c, 0x27b330); }
void F_0027B338(Ctx *c) { B_0027B2E0(c, 0x27b338); }
void F_0027B340(Ctx *c) { B_0027B2E0(c, 0x27b340); }
void F_0027B348(Ctx *c) { B_0027B2E0(c, 0x27b348); }

void F_0027B358(Ctx *c) { /* func_0027B358 */
ENTER(0x27b358);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27b368); SET64(5, RD(29) + RD(0)); F_00298FF0(c);
SET32(4, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x0);
SET64(31, rd64(c, (RW(29) + 16)));
if (RD(2) != 0) SET64(4, RD(3));
SET64(2, RD(4) + RD(0));
SET32(29, RW(29) + 32); return;
}

void F_0027B388(Ctx *c) { /* func_0027B388 */
ENTER(0x27b388);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27b398); SET64(5, RD(29) + RD(0)); F_00299040(c);
SET32(4, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET64(2, RD(2) ^ 0x0);
SET64(31, rd64(c, (RW(29) + 16)));
if (RD(2) != 0) SET64(4, RD(3));
SET64(2, RD(4) + RD(0));
SET32(29, RW(29) + 32); return;
}

void F_0027B3B8(Ctx *c) { /* func_0027B3B8 */
ENTER(0x27b3b8);
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
L_0027B3F0:;
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
{ int t = RSD(7) >= 0; SET32(5, RW(5) + 20); if (t) { POLL(); goto L_0027B3F0; } }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(6) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(29, RW(29) + 16); { F_0027ED08(c); return; }
}

void F_0027B438(Ctx *c) { /* func_0027B438 */
ENTER(0x27b438);
SET32(29, RW(29) + -32);
SET64(6, (s64)(s32)0x280000);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(6, RW(6) + -19320);
wr64(c, (RW(29) + 8), RD(17));
SET32(5, RW(0) + 75);
SET64(17, (s32)rd32(c, (RW(16) + 64)));
SET64(31, 0x27b464); SET64(4, RD(17) + RD(0)); F_00294740(c);
SET64(4, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(5, RW(0) + 76);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
}

void F_0027B488(Ctx *c) { /* func_0027B488 */
ENTER(0x27b488);
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
{ int t = RD(3) != RD(0); wr32(c, (RW(19) + 184), RW(2)); if (t) goto L_0027B5A4; }
if (RD(4) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0027B5A8; }
SET64(31, 0x27b4cc); SET64(5, RD(6) + RD(0)); F_002985C8(c);
SET64(18, RD(2) + RD(0));
SET64(5, RD(29) + RD(0));
{ int t = RD(18) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_0027B5A4; }
SET64(31, 0x27b4e4);  F_002987E0(c);
{ int t = RD(2) == RD(0); SET64(2, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0027B4F4; }
{ int t = RD(2) != RD(0);  if (t) goto L_0027B508; }
L_0027B4F4:;
SET64(31, 0x27b4fc); SET64(4, RD(18) + RD(0)); F_00298690(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0027B5A8;
L_0027B508:;
SET64(31, 0x27b510); SET64(4, RD(18) + RD(0)); F_0027B5C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x27b51c); SET64(17, RD(2) + RD(0)); F_0027B150(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x27b528); SET64(16, RD(2) + RD(0)); F_0027B2E0(c);
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
SET64(31, 0x27b5a4); wr32(c, (RW(19) + 192), RW(5)); F_00298690(c);
L_0027B5A4:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0027B5A8:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0027B5C0(Ctx *c) { /* func_0027B5C0 */
ENTER(0x27b5c0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 224);
SET64(6, RD(29) + RD(0));
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27b5dc); SET64(16, RD(4) + RD(0)); F_002988D0(c);
{ int t = RD(2) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0027B618; }
SET64(2, (s32)rd32(c, (RW(29) + 0)));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027B5F8; }
SET64(2, RD(0) + RD(0)); goto L_0027B618;
L_0027B5F8:;
SET32(5, RW(0) + 224);
SET64(31, 0x27b604); SET32(6, RW(29) + 4); F_002997C8(c);
{ int t = RD(2) == RD(0); SET64(16, rd64(c, (RW(29) + 16))); if (t) goto L_0027B61C; }
SET64(2, (s32)rd32(c, (RW(29) + 4)));
SET64(2, RD(2) ^ 0x3);
SET64(2, RD(2) < (u64)(s64)1);
L_0027B618:;
SET64(16, rd64(c, (RW(29) + 16)));
L_0027B61C:;
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027B628(Ctx *c) { /* func_0027B628 */
ENTER(0x27b628);
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
{ int t = RD(6) == RD(0); SET64(5, RD(7) + RD(0)); if (t) goto L_0027B680; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027B690(c); return; }
L_0027B680:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027B690(Ctx *c) { /* func_0027B690 */
ENTER(0x27b690);
SET32(3, RW(5) << 2);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(3) + 204))); return;
}

void F_0027B6A8(Ctx *c) { /* func_0027B6A8 */
ENTER(0x27b6a8);
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
{ int t = RD(6) == RD(0); SET64(5, RD(7) + RD(0)); if (t) goto L_0027B700; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027B710(c); return; }
L_0027B700:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027B710(Ctx *c) { /* func_0027B710 */
ENTER(0x27b710);
SET32(3, RW(5) << 2);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(3) + 208))); return;
}

void F_0027B728(Ctx *c) { /* func_0027B728 */
ENTER(0x27b728);
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
{ int t = RD(6) == RD(0); SET64(5, RD(7) + RD(0)); if (t) goto L_0027B780; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027B790(c); return; }
L_0027B780:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027B790(Ctx *c) { /* func_0027B790 */
ENTER(0x27b790);
SET32(3, RW(5) << 2);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET64(2, (s32)rd32(c, (RW(3) + 212))); return;
}

void F_0027B7A8(Ctx *c) { /* func_0027B7A8 */
ENTER(0x27b7a8);
SET64(2, (s32)rd32(c, (RW(4) + 188))); return;
}

void F_0027B7B0(Ctx *c) { /* mwPlyGetNumRemainFrm */
ENTER(0x27b7b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27b7c4); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027B7F0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27b7d8); SET32(4, RW(4) + -1896); F_00281110(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_0027B7F0:;
SET64(31, 0x27b7f8);  F_0027D198(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0028F5F0(c); return; }
}

void F_0027B810(Ctx *c) { /* func_0027B810 */
ENTER(0x27b810);
SET64(2, (s64)(s32)0x4b0000);
SET32(2, RW(2) + -1840); return;
}

void F_0027B820(Ctx *c) { /* func_0027B820 */
ENTER(0x27b820);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + -7624); return;
}

void F_0027B830(Ctx *c) { /* func_0027B830 */
ENTER(0x27b830);
SET32(29, RW(29) + -16);
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00281110(c); return; }
}

void F_0027B848(Ctx *c) { /* mwPlyInitSfdFx */
ENTER(0x27b848);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(4, RD(29) + RD(0));
{ int t = RD(16) != RD(0); wr64(c, (RW(29) + 48), RD(31)); if (t) goto L_0027B878; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27b870); SET32(4, RW(4) + -1680); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0027B9EC;
L_0027B878:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x27b884); SET32(6, RW(0) + 32); F_001273D0(c);
c->f[0].u = rd32(c, (RW(16) + 0));
SET64(3, (s64)(s32)0x530000);
SET64(2, (s64)(s32)0x4b0000);
SET32(3, RW(3) + -19064);
SET32(2, RW(2) + -1840);
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
SET64(31, 0x27b8e0); wr32(c, (RW(29) + 28), RW(10)); F_00280DB8(c);
SET64(31, 0x27b8e8);  F_0027CC48(c);
SET64(4, (s32)rd32(c, (RW(17) + -7632)));
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET32(2, RW(2) + -2);
SET64(3, RSD(2) < (s64)0);
if (RD(3) != 0) SET64(2, RD(0));
{ int t = RD(4) != RD(0); wr32(c, (RW(29) + 8), RW(2)); if (t) goto L_0027B9D8; }
SET64(31, 0x27b90c);  F_0024BEC0(c);
SET64(31, 0x27b914);  F_00266A28(c);
SET64(31, 0x27b91c);  F_00266010(c);
SET64(31, 0x27b924);  F_00267630(c);
SET64(31, 0x27b92c);  F_00281E60(c);
{ int t = RD(2) == RD(0);  if (t) goto L_0027B948; }
SET64(31, 0x27b93c); SET32(4, RW(0) + -101); F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27b948); SET32(4, RW(4) + -1640); F_00281110(c);
L_0027B948:;
SET64(31, 0x27b950); SET64(4, RD(29) + RD(0)); F_0027BA48(c);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + -1908);
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
SET64(31, 0x27b988);  F_0027BD38(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + -1600); if (t) goto L_0027B99C; }
SET64(31, 0x27b99c);  F_00281110(c);
L_0027B99C:;
SET64(4, RD(29) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(0) + 1);
SET64(31, 0x27b9b0); wr32(c, (RW(2) + -7628), RW(3)); F_0027BB80(c);
SET64(31, 0x27b9b8);  F_00262428(c);
SET64(4, (s64)(s32)0x280000);
SET32(4, RW(4) + -18384);
SET64(31, 0x27b9c8); SET64(5, RD(0) + RD(0)); F_00262360(c);
SET64(31, 0x27b9d0);  F_0027E570(c);
SET64(31, 0x27b9d8); SET64(4, RD(29) + RD(0)); F_0027BA00(c);
L_0027B9D8:;
SET32(3, RW(17) + -7632);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(3) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 32)));
L_0027B9EC:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0027BA00(Ctx *c) { /* func_0027BA00 */
ENTER(0x27ba00);
SET64(5, (s64)(s32)0x280000);
SET32(29, RW(29) + -16);
SET64(6, RD(0) + RD(0));
SET32(5, RW(5) + 5944);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27ba1c); SET32(4, RW(0) + 2); F_00280E90(c);
SET64(4, (s64)(s32)0x280000);
SET32(4, RW(4) + 6016);
SET64(31, 0x27ba2c); SET64(5, RD(0) + RD(0)); F_00280F40(c);
SET64(4, (s64)(s32)0x280000);
SET32(4, RW(4) + 6144);
SET64(31, 0x27ba3c); SET64(5, RD(0) + RD(0)); F_00280EF0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00280F90(c); return; }
}

void F_0027BA48(Ctx *c) { /* func_0027BA48 */
ENTER(0x27ba48);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27ba60); SET64(16, RD(4) + RD(0)); F_0027B820(c);
SET64(17, RD(2) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x27ba74); SET32(6, RW(0) + 5676); F_001273D0(c);
SET64(31, 0x27ba7c); SET64(4, RD(0) + RD(0)); F_00281CC8(c);
SET32(4, RW(0) + 1);
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 92), RW(0));
{ int t = RD(16) == RD(0); SET32(5, RW(17) + 4); if (t) goto L_0027BAB8; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s32)rd32(c, (RW(16) + 12)));
wr32(c, (RW(5) + 4), RW(2));
c->f[0].u = rd32(c, (RW(16) + 0));
SET64(2, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(5) + 12), RW(3));
wr32(c, (RW(5) + 0), c->f[0].u);
wr32(c, (RW(5) + 8), RW(2)); goto L_0027BAD4;
L_0027BAB8:;
SET64(1, (s64)(s32)0x426f0000);
SET64(1, RD(1) | 0xc28f);
c->f[0].u = RW(1);
wr32(c, (RW(5) + 12), RW(0));
wr32(c, (RW(5) + 0), c->f[0].u);
wr32(c, (RW(5) + 8), RW(2));
wr32(c, (RW(5) + 4), RW(2));
L_0027BAD4:;
wr32(c, (RW(17) + 60), RW(4));
wr32(c, (RW(17) + 56), RW(4));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027BAF0(Ctx *c) { /* func_0027BAF0 */
ENTER(0x27baf0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27bb04); SET64(16, RD(4) + RD(0)); F_0027B820(c);
wr32(c, (RW(2) + 56), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027BB18(Ctx *c) { /* func_0027BB18 */
ENTER(0x27bb18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27bb28);  F_0027B820(c);
SET64(2, (s32)rd32(c, (RW(2) + 56)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027BB38(Ctx *c) { /* func_0027BB38 */
ENTER(0x27bb38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27bb4c); SET64(16, RD(4) + RD(0)); F_0027B820(c);
wr32(c, (RW(2) + 60), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027BB60(Ctx *c) { /* func_0027BB60 */
ENTER(0x27bb60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27bb70);  F_0027B820(c);
SET64(2, (s32)rd32(c, (RW(2) + 60)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027BB80(Ctx *c) { /* func_0027BB80 */
ENTER(0x27bb80);
SET32(29, RW(29) + -16);
SET32(5, RW(0) + 27);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].u = rd32(c, (RW(4) + 0));
c->f[1].u = (u32)fpu_cvtw(F(0));
SET64(6, (s32)c->f[1].u);
SET64(31, 0x27bba0); SET64(4, RD(0) + RD(0)); F_0027D5A8(c);
SET64(4, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 7);
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 16); { F_0027D5A8(c); return; }
}

void F_0027BBB8(Ctx *c) { /* func_0027BBB8 */
ENTER(0x27bbb8);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x410000);
wr64(c, (RW(29) + 0), RD(31));
SET32(2, RW(2) + -7632);
SET64(3, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(3) == RD(0); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0027BBE0; }
wr32(c, (RW(2) + 0), RW(0));
SET32(29, RW(29) + 16); { F_0027B848(c); return; }
L_0027BBE0:;
SET32(29, RW(29) + 16); return;
}

void F_0027BBE8(Ctx *c) { /* func_0027BBE8 */
ENTER(0x27bbe8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27bc04);  F_0027B820(c);
SET64(3, (s64)(s32)0x410000);
SET64(4, RD(2) + RD(0));
SET32(3, RW(3) + -7632);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(2) + -1);
{ int t = RD(2) != RD(0); wr32(c, (RW(3) + 0), RW(2)); if (t) goto L_0027BCD0; }
SET32(16, RW(4) + 108);
SET32(18, RW(0) + 1);
SET32(17, RW(0) + 7);
L_0027BC30:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(18)) { SET32(17, RW(17) + -1); goto L_0027BC48; }
SET64(31, 0x27bc44); SET64(4, RD(16) + RD(0)); F_00279F08(c);
SET32(17, RW(17) + -1);
L_0027BC48:;
{ int t = RSD(17) >= 0; SET32(16, RW(16) + 696); if (t) { POLL(); goto L_0027BC30; } }
SET64(31, 0x27bc58);  F_00280FC0(c);
SET64(31, 0x27bc60);  F_00280ED0(c);
SET64(31, 0x27bc68);  F_00280F70(c);
SET64(31, 0x27bc70);  F_00280F20(c);
SET64(31, 0x27bc78);  F_0027E5B0(c);
SET64(31, 0x27bc80);  F_002624A8(c);
SET64(31, 0x27bc88);  F_0027BDE0(c);
SET64(31, 0x27bc90);  F_0024C070(c);
SET64(31, 0x27bc98);  F_00281E70(c);
SET64(31, 0x27bca0);  F_002676B0(c);
SET64(31, 0x27bca8);  F_00266090(c);
SET64(31, 0x27bcb0);  F_00266AA8(c);
SET64(31, 0x27bcb8);  F_0027CC60(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00280DF8(c); return; }
L_0027BCD0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027BCE8(Ctx *c) { /* func_0027BCE8 */
ENTER(0x27bce8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27bcfc); SET64(16, RD(4) + RD(0)); F_0027B820(c);
wr32(c, (RW(2) + 104), RW(16));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027BD18(Ctx *c) { /* func_0027BD18 */
ENTER(0x27bd18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27bd28);  F_0027B820(c);
SET64(2, (s32)rd32(c, (RW(2) + 104)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027BD38(Ctx *c) { /* mwPlySfdInit */
ENTER(0x27bd38);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x4b0000);
SET64(2, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(8, RW(2) + -1696);
ldl(c, 5, (RW(8) + 7));
ldr(c, 5, (RW(8) + 0));
sdl(c, 5, (RW(29) + 7));
sdr(c, 5, (RW(29) + 0));
SET32(5, RW(0) + 14072);
wr32(c, (RW(29) + 4), RW(4));
SET64(31, 0x27bd6c); SET32(4, RW(3) + -1568); F_00287788(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET64(4, RD(29) + RD(0)); if (t) goto L_0027BD90; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27bd84); SET32(4, RW(4) + -1560); F_00281110(c);
SET32(2, RW(0) + -1); goto L_0027BDD0;
L_0027BD90:;
SET64(31, 0x27bd98);  F_00287798(c);
{ int t = RD(2) == RD(0); SET64(5, (s64)(s32)0x280000); if (t) goto L_0027BDB0; }
SET64(31, 0x27bda8); SET32(4, RW(0) + -301); F_0027BCE8(c);
SET64(31, rd64(c, (RW(29) + 16))); goto L_0027BDD4;
L_0027BDB0:;
SET64(4, RD(0) + RD(0));
SET32(5, RW(5) + -16896);
SET64(31, 0x27bdc0); SET64(6, RD(0) + RD(0)); F_00287A58(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -303); if (t) goto L_0027BDD0; }
SET64(31, 0x27bdd0);  F_0027BCE8(c);
L_0027BDD0:;
SET64(31, rd64(c, (RW(29) + 16)));
L_0027BDD4:;
SET32(29, RW(29) + 32); return;
}

void F_0027BDE0(Ctx *c) { /* func_0027BDE0 */
ENTER(0x27bde0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27bdf0);  F_002878D0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0027BE00(Ctx *c) { /* func_0027BE00 */
ENTER(0x27be00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
SET64(19, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 32), RD(20));
{ int t = RD(16) == RD(0); wr64(c, (RW(29) + 40), RD(31)); if (t) goto L_0027BE50; }
SET64(31, 0x27be34);  F_0027D198(c);
SET64(3, (s64)(s32)0x410000);
SET64(18, RD(2) + RD(0));
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -1948), RW(16));
wr32(c, (RW(3) + -1944), RW(18)); goto L_0027BE64;
L_0027BE50:;
SET64(2, (s64)(s32)0x410000);
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(2) + -1948), RW(0));
SET64(18, RD(0) + RD(0));
wr32(c, (RW(3) + -1944), RW(0));
L_0027BE64:;
{ int t = RD(17) == RD(0); SET64(2, (s64)(s32)0x530000); if (t) goto L_0027BE94; }
SET32(5, RW(2) + -18992);
SET64(4, (s32)rd32(c, (RW(5) + 0)));
SET32(2, RW(4) << 2);
SET64(3, RSD(4) < (s64)15);
SET64(1, (s64)(s32)0x530000);
SET32(1, RW(1) + RW(2));
wr32(c, (RW(1) + -19056), RW(17));
{ int t = RD(3) == RD(0); SET32(2, RW(4) + 1); if (t) goto L_0027BE94; }
wr32(c, (RW(5) + 0), RW(2));
L_0027BE94:;
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xf18);
SET64(2, RSD(2) < RSD(17));
{ int t = RD(2) != RD(0);  if (t) goto L_0027BF18; }
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xf17);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) == RD(0); SET64(20, (s64)(s32)0x530000); if (t) goto L_0027BFC0; }
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0x40c);
{ int t = RD(17) == RD(2); SET64(2, RSD(2) < RSD(17)); if (t) goto L_0027BFD0; }
{ int t = RD(2) != RD(0);  if (t) goto L_0027BEF0; }
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0x408);
{ int t = RD(17) == RD(2); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_0027BFD4; }
SET64(5, (s64)(s32)0x4b0000); goto L_0027C034;
L_0027BEF0:;
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xc04);
{ int t = RD(17) == RD(2); SET64(20, (s64)(s32)0x530000); if (t) goto L_0027C010; }
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xf15);
{ int t = RD(17) == RD(2); SET64(5, (s64)(s32)0x4b0000); if (t) goto L_0027BFF0; }
SET64(5, (s64)(s32)0x4b0000); goto L_0027C034;
L_0027BF18:;
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xf40);
{ int t = RD(17) == RD(2); SET64(2, RSD(2) < RSD(17)); if (t) goto L_0027BF70; }
{ int t = RD(2) != RD(0); SET64(2, RSD(17) < (s64)-1); if (t) goto L_0027BF48; }
SET64(2, (s64)(s32)0xff000000);
SET64(2, RD(2) | 0xf1c);
{ int t = RD(17) == RD(2); SET64(20, (s64)(s32)0x530000); if (t) goto L_0027BFD0; }
SET64(5, (s64)(s32)0x4b0000); goto L_0027C034;
L_0027BF48:;
{ int t = RD(2) == RD(0); SET64(20, (s64)(s32)0x530000); if (t) goto L_0027C030; }
SET64(2, RSD(17) < (s64)-3);
if (RD(2) != RD(0)) { SET64(5, (s64)(s32)0x4b0000); goto L_0027C034; }
SET64(20, (s64)(s32)0x530000);
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + -1448); goto L_0027BFD8;
L_0027BF70:;
SET64(20, (s64)(s32)0x530000);
SET64(5, (s64)(s32)0x4b0000);
SET32(16, RW(20) + -18984);
SET64(6, (s64)(s32)0xff000000);
SET32(5, RW(5) + -1424);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27bf90); SET64(6, RD(6) | 0xf40); F_00129C30(c);
{ int t = RD(18) == RD(0);  if (t) goto L_0027BFA4; }
SET64(31, 0x27bfa0); SET64(4, RD(18) + RD(0)); F_002907A8(c);
SET64(19, RD(2) + RD(0));
L_0027BFA4:;
{ int t = RD(19) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027C044; }
SET64(5, RD(19) + RD(0));
SET64(31, 0x27bfb8); SET32(6, RW(0) + 233); F_0012A610(c);
SET32(4, RW(20) + -18984); goto L_0027C048;
L_0027BFC0:;
SET64(5, (s64)(s32)0x4b0000);
SET32(5, RW(5) + -1400); goto L_0027BFD8;
L_0027BFD0:;
SET64(5, (s64)(s32)0x4b0000);
L_0027BFD4:;
SET32(5, RW(5) + -1304);
L_0027BFD8:;
SET64(6, RD(17) + RD(0));
SET64(31, 0x27bfe4); SET32(4, RW(20) + -18984); F_00129C30(c);
SET32(4, RW(20) + -18984); goto L_0027C048;
L_0027BFF0:;
SET64(6, (s64)(s32)0xff000000);
SET32(5, RW(5) + -1216);
SET32(4, RW(20) + -18984);
SET64(31, 0x27c004); SET64(6, RD(6) | 0xf15); F_00129C30(c);
SET32(4, RW(20) + -18984); goto L_0027C048;
L_0027C010:;
SET64(5, (s64)(s32)0x4b0000);
SET64(6, (s64)(s32)0xff000000);
SET32(5, RW(5) + -1104);
SET32(4, RW(20) + -18984);
SET64(31, 0x27c028); SET64(6, RD(6) | 0xc04); F_00129C30(c);
SET32(4, RW(20) + -18984); goto L_0027C048;
L_0027C030:;
SET64(5, (s64)(s32)0x4b0000);
L_0027C034:;
SET32(5, RW(5) + -968);
SET64(6, RD(17) + RD(0));
SET64(31, 0x27c044); SET32(4, RW(20) + -18984); F_00129C30(c);
L_0027C044:;
SET32(4, RW(20) + -18984);
L_0027C048:;
SET64(20, rd64(c, (RW(29) + 32)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); { F_00281110(c); return; }
}

void F_0027C068(Ctx *c) { /* func_0027C068 */
ENTER(0x27c068);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + -1948))); return;
}

void F_0027C078(Ctx *c) { /* func_0027C078 */
ENTER(0x27c078);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27c08c); SET64(16, RD(4) + RD(0)); F_0027B820(c);
wr32(c, (RW(2) + 52), RW(16));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027C0A0(Ctx *c) { /* func_0027C0A0 */
ENTER(0x27c0a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27c0b0);  F_0027B820(c);
SET64(2, (s32)rd32(c, (RW(2) + 52)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027C0C0(Ctx *c) { /* func_0027C0C0 */
ENTER(0x27c0c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27c0e4); SET64(18, RD(7) + RD(0)); F_0027D198(c);
SET64(31, rd64(c, (RW(29) + 24)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 32); { F_00295BF0(c); return; }
}

void F_0027C110(Ctx *c) { /* func_0027C110 */
ENTER(0x27c110);
SET32(29, RW(29) + -16);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0027C138; }
SET64(31, 0x27c124);  F_0027D198(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { F_00295CE0(c); return; }
L_0027C138:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00295CE0(c); return; }
}

void F_0027C148(Ctx *c) { /* func_0027C148 */
ENTER(0x27c148);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27c158); SET64(4, (s32)rd32(c, (RW(4) + 64))); F_002912E0(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -311); if (t) goto L_0027C178; }
SET64(31, 0x27c168);  F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27c174); SET32(4, RW(4) + -952); F_00281110(c);
SET32(2, RW(0) + -311);
L_0027C178:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027C188(Ctx *c) { /* func_0027C188 */
ENTER(0x27c188);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27c198); SET64(4, (s32)rd32(c, (RW(4) + 64))); F_00292BD0(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -307); if (t) goto L_0027C1B8; }
SET64(31, 0x27c1a8);  F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27c1b4); SET32(4, RW(4) + -920); F_00281110(c);
SET32(2, RW(0) + -307);
L_0027C1B8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027C1C8(Ctx *c) { /* func_0027C1C8 */
ENTER(0x27c1c8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 40), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 48), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 56), RD(31));
SET64(5, RD(29) + RD(0));
SET64(31, 0x27c1f4); SET64(4, (s32)rd32(c, (RW(4) + 64))); F_00293198(c);
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

void F_0027C228(Ctx *c) { /* func_0027C228 */
ENTER(0x27c228);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RSD(5) < 0; SET64(4, (s32)rd32(c, (RW(4) + 64))); if (t) goto L_0027C248; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00293208(c); return; }
L_0027C248:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027C258(Ctx *c) { /* func_0027C258 */
ENTER(0x27c258);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27c268); SET64(4, (s32)rd32(c, (RW(4) + 64))); F_002910E0(c);
SET32(4, RW(0) + 1);
{ int t = RD(2) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_0027C290; }
{ int t = RD(2) == RD(4); SET32(3, RW(0) + 1); if (t) goto L_0027C290; }
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(2) + RD(0));
SET64(31, 0x27c28c); SET32(4, RW(4) + -888); F_00281110(c);
SET64(3, RD(0) + RD(0));
L_0027C290:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0027C2A0(Ctx *c) { /* func_0027C2A0 */
ENTER(0x27c2a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00293288(c); return; }
}

void F_0027C2B8(Ctx *c) { /* mw_sfd_start_ex */
ENTER(0x27c2b8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27c2d4); SET32(17, RW(16) + 660); F_0027B820(c);
SET64(2, (s32)rd32(c, (RW(16) + 64)));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027C358; }
SET64(31, 0x27c2e8);  F_002798E0(c);
{ int t = RD(2) == RD(0); SET64(31, rd64(c, (RW(29) + 16))); if (t) goto L_0027C308; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -840);
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027C308:;
SET64(31, 0x27c310); SET64(4, RD(16) + RD(0)); F_00280BF8(c);
SET64(31, 0x27c318); SET64(4, RD(16) + RD(0)); F_0027F188(c);
SET64(31, 0x27c320); SET64(4, RD(16) + RD(0)); F_0027F108(c);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027C348; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -792);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027C348:;
SET64(31, 0x27c350);  F_0027F168(c);
SET64(31, 0x27c358); SET64(4, RD(16) + RD(0)); F_0027B3B8(c);
L_0027C358:;
SET64(31, 0x27c360); SET64(4, RD(16) + RD(0)); F_0027C3B0(c);
SET64(31, 0x27c368); SET64(4, RD(16) + RD(0)); F_0027C148(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27c374); SET64(5, (s8)rd8(c, (RW(16) + 118))); F_0027C6F8(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x27c380); SET32(5, RW(0) + 1); F_002809B0(c);
SET64(31, 0x27c388); SET64(4, RD(17) + RD(0)); F_00280828(c);
wr32(c, (RW(16) + 136), RW(0));
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 117), (u8)RW(0));
wr32(c, (RW(16) + 8), RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027C3B0(Ctx *c) { /* func_0027C3B0 */
ENTER(0x27c3b0);
wr32(c, (RW(4) + 132), RW(0));
wr32(c, (RW(4) + 128), RW(0)); return;
}

void F_0027C3C0(Ctx *c) { /* mwPlyStartFname */
ENTER(0x27c3c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27c3dc); SET64(17, RD(4) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + -744); if (t) goto L_0027C400; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027C400:;
{ int t = RD(16) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0027C428; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -696);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027C428:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(6, RD(0) + RD(0));
SET32(7, RW(0) + -1);
SET32(29, RW(29) + 32); { F_0027C448(c); return; }
}

void F_0027C448(Ctx *c) { /* func_0027C448 */
ENTER(0x27c448);
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
SET64(31, 0x27c47c); wr32(c, (RW(16) + 464), RW(2)); F_0027C5F8(c);
SET64(31, 0x27c484); SET64(4, RD(16) + RD(0)); F_0027C2B8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27c490); SET64(5, RD(17) + RD(0)); F_0027C9D0(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x27c4a0); SET64(6, RD(18) + RD(0)); F_0027D100(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0027D108(c); return; }
}

void F_0027C4C8(Ctx *c) { /* mwSfdStartMem */
ENTER(0x27c4c8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27c4ec); SET64(18, RD(6) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027C518; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -648);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027C518:;
SET64(31, 0x27c520);  F_0027C5F8(c);
SET64(4, (s32)rd32(c, (RW(16) + 500)));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 12)));
{ u32 t = RW(2); SET64(31, 0x27c534);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x27c540); SET64(5, RD(18) + RD(0)); F_00266110(c);
wr32(c, (RW(16) + 504), RW(17));
wr32(c, (RW(16) + 464), RW(2));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 508), RW(18));
SET64(31, 0x27c558); wr32(c, (RW(16) + 500), RW(2)); F_0027C2B8(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00278B20(c); return; }
}

void F_0027C578(Ctx *c) { /* mwSfdStartSj */
ENTER(0x27c578);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27c594); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027C5B8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -600);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027C5B8:;
SET64(31, 0x27c5c0);  F_0027C5F8(c);
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 464), RW(17));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 484), RW(2));
wr32(c, (RW(16) + 488), RW(0));
wr32(c, (RW(16) + 492), RW(0));
SET64(31, 0x27c5e0); wr32(c, (RW(16) + 496), RW(0)); F_0027C2B8(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00278B20(c); return; }
}

void F_0027C5F8(Ctx *c) { /* func_0027C5F8 */
ENTER(0x27c5f8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(17, (s32)rd32(c, (RW(16) + 64)));
if (RD(17) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027C680; }
SET64(31, 0x27c620);  F_00281E08(c);
wr32(c, (RW(16) + 8), RW(0));
SET64(31, 0x27c62c); SET64(4, RD(17) + RD(0)); F_00292C88(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -308); if (t) goto L_0027C648; }
SET64(31, 0x27c63c);  F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27c648); SET32(4, RW(4) + -552); F_00281110(c);
L_0027C648:;
SET64(31, 0x27c650); SET32(4, RW(16) + 660); F_00280880(c);
wr32(c, (RW(16) + 692), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 68)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0027C668; }
SET64(31, 0x27c668);  F_00282130(c);
L_0027C668:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00261E08(c); return; }
L_0027C680:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027C690(Ctx *c) { /* func_0027C690 */
ENTER(0x27c690);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27c6a4); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027C6C8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -520);
SET32(29, RW(29) + 16); { F_00281110(c); return; }
L_0027C6C8:;
SET64(31, 0x27c6d0);  F_0027C5F8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27c6dc); SET64(5, RD(0) + RD(0)); F_002803D0(c);
wr32(c, (RW(16) + 120), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 76)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00261E08(c); return; }
}

void F_0027C6F8(Ctx *c) { /* func_0027C6F8 */
ENTER(0x27c6f8);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 24), RD(17));
wr64(c, (RW(29) + 40), RD(19));
wr64(c, (RW(29) + 48), RD(31));
SET64(31, 0x27c71c); SET64(18, RD(5) + RD(0)); F_0027D6B0(c);
if (RD(2) != RD(0)) { SET64(2, (s8)rd8(c, (RW(16) + 118))); goto L_0027C738; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27c730); SET32(4, RW(4) + -480); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 16))); goto L_0027C7FC;
L_0027C738:;
{ int t = RD(2) != RD(0); SET64(19, (s32)rd32(c, (RW(16) + 64))); if (t) goto L_0027C748; }
if (RD(18) == RD(0)) { SET64(16, rd64(c, (RW(29) + 16))); goto L_0027C7FC; }
L_0027C748:;
SET64(31, 0x27c750);  F_0027BB60(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET64(4, RD(19) + RD(0)); if (t) goto L_0027C7A4; }
SET64(17, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(17) != RD(3);  if (t) goto L_0027C7A4; }
SET32(5, RW(0) + 6);
SET64(31, 0x27c778); SET64(6, RD(29) + RD(0)); F_00294990(c);
{ int t = RD(2) != RD(0); SET64(2, (s32)rd32(c, (RW(29) + 0))); if (t) goto L_0027C798; }
if (RD(2) != RD(17)) { SET64(4, RD(19) + RD(0)); goto L_0027C7A4; }
SET64(31, 0x27c790); SET64(4, RD(16) + RD(0)); F_00281E08(c);
SET64(4, RD(19) + RD(0)); goto L_0027C7A4;
L_0027C798:;
SET64(31, 0x27c7a0); SET64(4, RD(16) + RD(0)); F_00281E08(c);
SET64(4, RD(19) + RD(0));
L_0027C7A4:;
SET64(31, 0x27c7ac); SET64(5, RD(18) + RD(0)); F_00291130(c);
if (RD(2) == RD(0)) { SET32(4, RW(16) + 660); goto L_0027C7EC; }
SET64(31, 0x27c7bc); SET32(4, RW(0) + -310); F_0027BCE8(c);
SET64(3, (s64)(s32)0x4b0000);
SET32(2, RW(0) + 1);
{ int t = RD(18) != RD(2); SET32(4, RW(3) + -440); if (t) goto L_0027C7D8; }
SET64(2, (s64)(s32)0x4b0000);
SET32(5, RW(2) + -400); goto L_0027C7E0;
L_0027C7D8:;
SET64(2, (s64)(s32)0x4b0000);
SET32(5, RW(2) + -392);
L_0027C7E0:;
SET64(31, 0x27c7e8);  F_00281110(c);
SET32(4, RW(16) + 660);
L_0027C7EC:;
SET64(31, 0x27c7f4); SET64(5, RD(18) + RD(0)); F_002809B0(c);
wr8(c, (RW(16) + 118), (u8)RW(18));
SET64(16, rd64(c, (RW(29) + 16)));
L_0027C7FC:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
SET64(19, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0027C818(Ctx *c) { /* mwPlyStartAfs */
ENTER(0x27c818);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27c83c); SET64(18, RD(6) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027C868; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -384);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027C868:;
SET64(31, 0x27c870);  F_0027DFA0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 60)));
{ u32 t = RW(2); SET64(31, 0x27c884); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0027CA40(c); return; }
}

void F_0027C8A8(Ctx *c) { /* func_0027C8A8 */
ENTER(0x27c8a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, (s32)rd32(c, (RW(16) + 476)));
SET64(31, 0x27c8c8); SET64(4, RD(17) + RD(0)); F_00122158(c);
SET64(1, (s64)(s32)0x4b0000);
SET64(5, rd64(c, (RW(1) + -336)));
SET64(31, 0x27c8d8); SET64(4, RD(2) + RD(0)); F_00121C20(c);
SET64(31, 0x27c8e0); SET64(4, RD(2) + RD(0)); F_00122210(c);
SET64(4, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0027D608(c); return; }
}

void F_0027C900(Ctx *c) { /* func_0027C900 */
ENTER(0x27c900);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 68)));
SET64(16, (s32)rd32(c, (RW(4) + 64)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0027C948; }
SET64(31, 0x27c924);  F_00282180(c);
SET32(3, RW(0) + 3);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027C94C; }
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00293288(c); return; }
L_0027C948:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0027C94C:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027C958(Ctx *c) { /* func_0027C958 */
ENTER(0x27c958);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27c978); SET64(4, RD(17) + RD(0)); F_0012A4D8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(3, (s32)rd32(c, (RW(16) + 444)));
SET32(4, RW(4) + -328);
SET64(3, RSD(3) < RSD(2));
{ int t = RD(3) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0027C9B8; }
SET64(31, 0x27c998);  F_00281110(c);
SET64(6, (s32)rd32(c, (RW(16) + 444)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 440)));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); { F_0012A978(c); return; }
L_0027C9B8:;
SET64(4, (s32)rd32(c, (RW(16) + 440)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0012A3C0(c); return; }
}

void F_0027C9D0(Ctx *c) { /* func_0027C9D0 */
ENTER(0x27c9d0);
SET32(29, RW(29) + -16);
SET64(7, (s64)(s32)0xf0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(6, RD(0) + RD(0));
SET64(7, RD(7) | 0xffff);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027C9F0(c); return; }
}

void F_0027C9F0(Ctx *c) { /* func_0027C9F0 */
ENTER(0x27c9f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27ca14); SET64(18, RD(7) + RD(0)); F_0027C958(c);
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

void F_0027CA40(Ctx *c) { /* ADXF_GetFnameRangeEx */
ENTER(0x27ca40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(4, RD(5) + RD(0));
SET64(5, RD(6) + RD(0));
SET64(7, RD(29) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 440)));
SET32(8, RW(29) + 4);
SET64(31, 0x27ca6c); SET32(9, RW(29) + 8); F_0024B8D8(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + -296); if (t) goto L_0027CAA0; }
SET64(3, (s32)rd32(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(29) + 4)));
SET64(5, (s32)rd32(c, (RW(29) + 8)));
wr32(c, (RW(16) + 448), RW(2));
wr32(c, (RW(16) + 452), RW(3));
wr32(c, (RW(16) + 456), RW(4));
wr32(c, (RW(16) + 460), RW(5)); goto L_0027CAA8;
L_0027CAA0:;
SET64(31, 0x27caa8);  F_00281110(c);
L_0027CAA8:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027CAB8(Ctx *c) { /* func_0027CAB8 */
ENTER(0x27cab8);
SET32(29, RW(29) + -48);
SET64(2, RD(5) + RD(0));
SET32(7, RW(6) + 2047);
SET64(6, RD(2) + RD(0));
SET64(5, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 32), RD(16));
SET32(7, RW(7) >> 11);
SET32(5, RW(5) + -256);
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x27cae8); SET64(4, RD(29) + RD(0)); F_00129C30(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(29) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 24)));
{ u32 t = RW(2); SET64(31, 0x27cafc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, RD(0) + RD(0));
SET64(4, RD(29) + RD(0));
SET64(31, 0x27cb0c); SET32(6, RW(0) + 20); F_001273D0(c);
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0027CB20(Ctx *c) { /* mwPlyStartFnameRange */
ENTER(0x27cb20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x27cb4c); SET64(19, RD(7) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + -240); if (t) goto L_0027CB78; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00281110(c); return; }
L_0027CB78:;
{ int t = RD(17) != RD(0); SET64(31, rd64(c, (RW(29) + 32))); if (t) goto L_0027CBA0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + -184);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 48); { F_00281110(c); return; }
L_0027CBA0:;
SET64(31, 0x27cba8); SET64(4, RD(16) + RD(0)); F_0027DFA0(c);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 60)));
{ u32 t = RW(2); SET64(31, 0x27cbbc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(7, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0027C9F0(c); return; }
}

void F_0027CBE8(Ctx *c) { /* func_0027CBE8 */
ENTER(0x27cbe8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00283DE0(c); return; }
}

void F_0027CC00(Ctx *c) { /* func_0027CC00 */
ENTER(0x27cc00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00283E60(c); return; }
}

void F_0027CC18(Ctx *c) { /* func_0027CC18 */
ENTER(0x27cc18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00283CD8(c); return; }
}

void F_0027CC30(Ctx *c) { /* func_0027CC30 */
ENTER(0x27cc30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00283D68(c); return; }
}

void F_0027CC48(Ctx *c) { /* func_0027CC48 */
ENTER(0x27cc48);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027CE18(c); return; }
}

void F_0027CC60(Ctx *c) { /* func_0027CC60 */
ENTER(0x27cc60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027CE18(c); return; }
}

void F_0027CC78(Ctx *c) { /* func_0027CC78 */
ENTER(0x27cc78);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27cc90);  F_0027CDB8(c);
SET64(16, RD(2) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(0) + 1);
{ int t = RD(16) != RD(3); SET32(17, RW(2) + -1928); if (t) goto L_0027CCF4; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
if (RD(2) == RD(16)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027CCF8; }
SET64(31, 0x27ccb8);  F_0027CE40(c);
SET64(6, (s64)(s32)0x530000);
SET32(6, RW(6) + -18688);
SET32(5, RW(0) + 16384);
SET64(31, 0x27cccc); SET64(4, RD(0) + RD(0)); F_0027CE60(c);
SET64(31, 0x27ccd4); SET32(4, RW(0) + 8); F_0027D038(c);
SET64(4, (s64)(s32)0x530000);
SET32(4, RW(4) + -2304);
SET32(5, RW(0) + 16384);
SET64(31, 0x27cce8); SET64(6, RD(0) + RD(0)); F_0027CF40(c);
SET64(31, 0x27ccf0); SET32(4, RW(0) + 9); F_0027D038(c);
wr32(c, (RW(17) + 0), RW(16));
L_0027CCF4:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0027CCF8:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027CD08(Ctx *c) { /* func_0027CD08 */
ENTER(0x27cd08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27cd1c);  F_0027CDB8(c);
SET64(3, (s64)(s32)0x410000);
SET32(4, RW(0) + 1);
{ int t = RD(2) != RD(4); SET32(16, RW(3) + -1928); if (t) goto L_0027CD7C; }
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027CD80; }
SET64(31, 0x27cd40);  F_0027CE40(c);
SET64(6, (s64)(s32)0x530000);
SET32(6, RW(6) + -2304);
SET32(5, RW(0) + 16384);
SET64(31, 0x27cd54); SET64(4, RD(0) + RD(0)); F_0027CE60(c);
SET64(31, 0x27cd5c); SET32(4, RW(0) + 8); F_0027D038(c);
SET64(4, (s64)(s32)0x530000);
SET32(4, RW(4) + -18688);
SET32(5, RW(0) + 16384);
SET64(31, 0x27cd70); SET64(6, RD(0) + RD(0)); F_0027CF40(c);
SET64(31, 0x27cd78); SET32(4, RW(0) + 9); F_0027D038(c);
wr32(c, (RW(16) + 0), RW(0));
L_0027CD7C:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0027CD80:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027CD90(Ctx *c) { /* func_0027CD90 */
ENTER(0x27cd90);
{ int t = RD(4) != RD(0); SET64(3, (s64)(s32)0x410000); if (t) goto L_0027CDA8; }
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -1936), RW(0)); return;
L_0027CDA8:;
SET32(2, RW(0) + 1);
wr32(c, (RW(3) + -1936), RW(2)); return;
}

void F_0027CDB8(Ctx *c) { /* func_0027CDB8 */
ENTER(0x27cdb8);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + -1936))); return;
}

void F_0027CDC8(Ctx *c) { /* func_0027CDC8 */
ENTER(0x27cdc8);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -1932), RW(4)); return;
}

void F_0027CDD8(Ctx *c) { /* func_0027CDD8 */
ENTER(0x27cdd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27cdec); SET64(16, RD(4) + RD(0)); F_0027CDB8(c);
SET64(3, (s64)(s32)0x410000);
SET64(5, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + -1932)));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027CE08; }
{ u32 t = RW(2); SET64(31, 0x27ce08);  rt_call(c, t); }
L_0027CE08:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027CE18(Ctx *c) { /* func_0027CE18 */
ENTER(0x27ce18);
SET64(6, (s64)(s32)0x410000);
SET32(2, RW(0) + 1);
SET64(3, (s64)(s32)0x410000);
SET64(4, (s64)(s32)0x410000);
SET64(5, (s64)(s32)0x410000);
wr32(c, (RW(6) + -1936), RW(2));
wr32(c, (RW(3) + -1932), RW(0));
wr32(c, (RW(4) + -1928), RW(0));
wr32(c, (RW(5) + -1924), RW(0)); return;
}

void F_0027CE40(Ctx *c) { /* func_0027CE40 */
ENTER(0x27ce40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27ce50); SET32(4, RW(0) + 8); F_0027D038(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(0) + 9);
SET32(29, RW(29) + 16); { F_0027D038(c); return; }
}

void F_0027CE60(Ctx *c) { /* func_0027CE60 */
ENTER(0x27ce60);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + -1924)));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0027CE88; }
SET64(31, 0x27ce7c);  F_0027CED8(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_0027CE94;
L_0027CE88:;
SET64(31, 0x27ce90);  F_0027CEA0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0027CE94:;
SET32(29, RW(29) + 16); return;
}

void F_0027CEA0(Ctx *c) { /* func_0027CEA0 */
ENTER(0x27cea0);
SET64(2, RD(5) + RD(0));
SET64(1, (s64)(s32)0x70000000);
SET32(4, RW(1) + RW(4));
SET32(29, RW(29) + -16);
SET64(5, RD(4) + RD(0));
SET64(4, RD(6) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27cec4); SET64(6, RD(2) + RD(0)); F_00127218(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(0) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0027CED8(Ctx *c) { /* func_0027CED8 */
ENTER(0x27ced8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
SET32(4, RW(0) + 8);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27cf00); SET64(18, RD(6) + RD(0)); F_00105E08(c);
SET32(4, RW(16) + 15);
SET64(3, RSD(16) < (s64)0);
wr32(c, (RW(2) + 128), RW(17));
if (RD(3) != 0) SET64(16, RD(4));
SET64(4, RD(2) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x27cf20); SET32(6, RSW(16) >> 4); F_001062D8(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027CF40(Ctx *c) { /* func_0027CF40 */
ENTER(0x27cf40);
SET64(2, (s64)(s32)0x410000);
SET32(29, RW(29) + -16);
SET64(3, (s32)rd32(c, (RW(2) + -1924)));
{ int t = RD(3) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0027CF68; }
SET64(31, 0x27cf5c);  F_0027CFB0(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_0027CF74;
L_0027CF68:;
SET64(31, 0x27cf70);  F_0027CF80(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_0027CF74:;
SET32(29, RW(29) + 16); return;
}

void F_0027CF80(Ctx *c) { /* func_0027CF80 */
ENTER(0x27cf80);
SET64(2, RD(4) + RD(0));
SET64(4, (s64)(s32)0x70000000);
SET32(4, RW(4) + RW(6));
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27cfa0); SET64(5, RD(2) + RD(0)); F_00127218(c);
SET64(2, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027CFB0(Ctx *c) { /* func_0027CFB0 */
ENTER(0x27cfb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
SET32(4, RW(0) + 9);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27cfd8); SET64(17, RD(6) + RD(0)); F_00105E08(c);
SET32(4, RW(16) + 15);
SET64(3, RSD(16) < (s64)0);
wr32(c, (RW(2) + 128), RW(17));
if (RD(3) != 0) SET64(16, RD(4));
SET64(4, RD(2) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x27cff8); SET32(6, RSW(16) >> 4); F_001061A0(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027D018(Ctx *c) { /* func_0027D018 */
ENTER(0x27d018);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(2) + -1924), RW(4)); return;
}

void F_0027D028(Ctx *c) { /* func_0027D028 */
ENTER(0x27d028);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s32)rd32(c, (RW(3) + -1924))); return;
}

void F_0027D038(Ctx *c) { /* func_0027D038 */
ENTER(0x27d038);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27d04c);  F_00105E08(c);
SET64(16, RD(2) + RD(0));
SET64(4, RD(16) + RD(0));
L_0027D058:;
SET32(5, RW(0) + 1);
SET64(31, 0x27d064); SET32(6, RW(0) + 30); F_001063D8(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_0027D058; } }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027D080(Ctx *c) { /* func_0027D080 */
ENTER(0x27d080);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27d094); SET64(16, RD(5) + RD(0)); F_00105E08(c);
SET64(4, RD(2) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x27d0a4); SET32(6, RW(0) + 30); F_001063D8(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027D0B8(Ctx *c) { /* func_0027D0B8 */
ENTER(0x27d0b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0024E260(c); return; }
}

void F_0027D0D0(Ctx *c) { /* func_0027D0D0 */
ENTER(0x27d0d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027CC78(c); return; }
}

void F_0027D0E8(Ctx *c) { /* func_0027D0E8 */
ENTER(0x27d0e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027CD08(c); return; }
}

void F_0027D100(Ctx *c) { /* func_0027D100 */
ENTER(0x27d100);
 return;
}

void F_0027D108(Ctx *c) { /* func_0027D108 */
ENTER(0x27d108);
 return;
}

void F_0027D110(Ctx *c) { /* func_0027D110 */
ENTER(0x27d110);
 return;
}

void F_0027D118(Ctx *c) { /* mwPlySetAudioSw */
ENTER(0x27d118);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27d134); SET64(17, RD(4) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(6, RD(16) + RD(0));
SET32(4, RW(4) + -136);
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 6); if (t) goto L_0027D160; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027D160:;
SET64(4, (s32)rd32(c, (RW(17) + 64)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
}

void F_0027D178(Ctx *c) { /* func_0027D178 */
ENTER(0x27d178);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 5);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00294740(c); return; }
}

void F_0027D198(Ctx *c) { /* mwPlyGetSfdHn */
ENTER(0x27d198);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27d1ac); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 64))); goto L_0027D1C4; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27d1c0); SET32(4, RW(4) + -88); F_00281110(c);
SET64(2, RD(0) + RD(0));
L_0027D1C4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027D1D8(Ctx *c) { /* mwPlyGetAdxtHn */
ENTER(0x27d1d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27d1ec); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027D218; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27d200); SET32(4, RW(4) + -40); F_00281110(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_0027D218:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0027D6D0(c); return; }
}

void F_0027D228(Ctx *c) { /* mwPlyGetNumDropFrm */
ENTER(0x27d228);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27d240); SET64(17, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0027D260; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27d254); SET32(4, RW(4) + 8); F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_0027D278;
L_0027D260:;
SET64(31, 0x27d268);  F_0027D290(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x27d274); SET64(16, RD(2) + RD(0)); F_0027B0F8(c);
SET32(2, RW(16) + RW(2));
L_0027D278:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027D290(Ctx *c) { /* mwPlyGetNumSkipDec */
ENTER(0x27d290);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 160), RD(16));
wr64(c, (RW(29) + 168), RD(31));
SET64(31, 0x27d2a4); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027D2C0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27d2b8); SET32(4, RW(4) + 56); F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_0027D2E0;
L_0027D2C0:;
SET64(31, 0x27d2c8);  F_0027D198(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x27d2d4); SET64(5, RD(29) + RD(0)); F_00294B18(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET32(2, RW(3) - RW(2));
L_0027D2E0:;
SET64(16, rd64(c, (RW(29) + 160)));
SET64(31, rd64(c, (RW(29) + 168)));
SET32(29, RW(29) + 176); return;
}

void F_0027D2F0(Ctx *c) { /* func_0027D2F0 */
ENTER(0x27d2f0);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 3);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027D320(c); return; }
}

void F_0027D308(Ctx *c) { /* func_0027D308 */
ENTER(0x27d308);
SET32(29, RW(29) + -16);
SET32(6, RW(0) + 4);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027D320(c); return; }
}

void F_0027D320(Ctx *c) { /* func_0027D320 */
ENTER(0x27d320);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27d344); SET64(18, RD(4) + RD(0)); F_0027D6B0(c);
SET64(16, RD(16) ^ 0x1);
SET64(4, (s64)(s32)0x4b0000);
SET32(4, RW(4) + 112);
SET64(5, RD(17) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(0) < RD(16)); if (t) goto L_0027D378; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027D378:;
SET64(4, (s32)rd32(c, (RW(18) + 64)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
}

void F_0027D398(Ctx *c) { /* mwPlySetAudioCh */
ENTER(0x27d398);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27d3b4); SET64(17, RD(4) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 176); if (t) goto L_0027D3D8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027D3D8:;
SET64(31, 0x27d3e0); SET64(4, (s32)rd32(c, (RW(17) + 64))); F_002913A8(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 224); if (t) goto L_0027D400; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027D400:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027D418(Ctx *c) { /* func_0027D418 */
ENTER(0x27d418);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00287E50(c); return; }
}

void F_0027D430(Ctx *c) { /* mwPlyGetNumAudioCh */
ENTER(0x27d430);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 72), RD(31));
SET64(31, 0x27d444); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027D468; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27d45c); SET32(4, RW(4) + 264); F_00281110(c);
SET32(2, RW(0) + -1); goto L_0027D474;
L_0027D468:;
SET64(31, 0x27d470);  F_0027D590(c);
SET64(2, (s32)rd32(c, (RW(29) + 36)));
L_0027D474:;
SET64(16, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_0027D488(Ctx *c) { /* mwPlySetVideoCh */
ENTER(0x27d488);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27d4a4); SET64(17, RD(4) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 312); if (t) goto L_0027D4C8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027D4C8:;
SET64(31, 0x27d4d0); SET64(4, (s32)rd32(c, (RW(17) + 64))); F_00291418(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 360); if (t) goto L_0027D4F0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027D4F0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027D508(Ctx *c) { /* func_0027D508 */
ENTER(0x27d508);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00287E38(c); return; }
}

void F_0027D520(Ctx *c) { /* mwPlyGetNumVideoCh */
ENTER(0x27d520);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(16));
wr64(c, (RW(29) + 72), RD(31));
SET64(31, 0x27d534); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027D558; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27d54c); SET32(4, RW(4) + 408); F_00281110(c);
SET32(2, RW(0) + -1); goto L_0027D564;
L_0027D558:;
SET64(31, 0x27d560);  F_0027D590(c);
SET64(2, (s32)rd32(c, (RW(29) + 40)));
L_0027D564:;
SET64(16, rd64(c, (RW(29) + 64)));
SET64(31, rd64(c, (RW(29) + 72)));
SET32(29, RW(29) + 80); return;
}

void F_0027D578(Ctx *c) { /* func_0027D578 */
ENTER(0x27d578);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00294B18(c); return; }
}

void F_0027D590(Ctx *c) { /* func_0027D590 */
ENTER(0x27d590);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00294A40(c); return; }
}

void F_0027D5A8(Ctx *c) { /* func_0027D5A8 */
ENTER(0x27d5a8);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0027D5BC; }
SET64(2, (s32)rd32(c, (RW(4) + 64)));
L_0027D5BC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { F_00294740(c); return; }
}

void F_0027D5D0(Ctx *c) { /* func_0027D5D0 */
ENTER(0x27d5d0);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0027D5E4; }
SET64(2, (s32)rd32(c, (RW(4) + 64)));
L_0027D5E4:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { F_00294990(c); return; }
}

void F_0027D5F8(Ctx *c) { /* func_0027D5F8 */
ENTER(0x27d5f8);
SET64(2, (s32)rd32(c, (RW(4) + 68))); return;
}

void F_0027D600(Ctx *c) { /* func_0027D600 */
ENTER(0x27d600);
SET64(2, (s32)rd32(c, (RW(4) + 476))); return;
}

void F_0027D608(Ctx *c) { /* func_0027D608 */
ENTER(0x27d608);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27d628); SET64(4, (s32)rd32(c, (RW(16) + 68))); F_00281F98(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00280370(c); return; }
}

void F_0027D648(Ctx *c) { /* func_0027D648 */
ENTER(0x27d648);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 68)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00281FC0(c); return; }
}

void F_0027D660(Ctx *c) { /* func_0027D660 */
ENTER(0x27d660);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 68)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00281E78(c); return; }
}

void F_0027D678(Ctx *c) { /* func_0027D678 */
ENTER(0x27d678);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 68)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00281EA0(c); return; }
}

void F_0027D690(Ctx *c) { /* func_0027D690 */
ENTER(0x27d690);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 44);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00294740(c); return; }
}

void F_0027D6B0(Ctx *c) { /* func_0027D6B0 */
ENTER(0x27d6b0);
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0027D6BC; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
L_0027D6BC:;
 return;
}

void F_0027D6C8(Ctx *c) { /* func_0027D6C8 */
ENTER(0x27d6c8);
SET64(2, (s32)rd32(c, (RW(4) + 76))); return;
}

void F_0027D6D0(Ctx *c) { /* func_0027D6D0 */
ENTER(0x27d6d0);
SET64(2, (s32)rd32(c, (RW(4) + 72))); return;
}

void F_0027D6D8(Ctx *c) { /* func_0027D6D8 */
ENTER(0x27d6d8);
SET64(2, (s32)rd32(c, (RW(4) + 172))); return;
}

void F_0027D6E0(Ctx *c) { /* mwPlySetLimitTime */
ENTER(0x27d6e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27d6fc); SET64(17, RD(4) + RD(0)); F_0027D6B0(c);
SET32(3, RW(16) << 5);
SET64(4, (s64)(s32)0x4b0000);
SET32(3, RW(3) - RW(16));
SET32(4, RW(4) + 456);
SET32(5, RW(0) + 54);
{ int t = RD(2) != RD(0); SET32(3, RW(3) << 2); if (t) goto L_0027D730; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027D730:;
SET32(6, RW(3) + RW(16));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(6, RW(6) << 3);
SET32(29, RW(29) + 32); { F_0027D5A8(c); return; }
}

void F_0027D750(Ctx *c) { /* func_0027D750 */
ENTER(0x27d750);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27d764); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
SET32(4, RW(0) + -12);
{ int t = RD(2) != RD(0); SET32(3, RW(0) + 2); if (t) goto L_0027D790; }
SET64(31, 0x27d778);  F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27d784); SET32(4, RW(4) + 504); F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_0027D7C8;
L_0027D790:;
SET64(2, (s32)rd32(c, (RW(16) + 8)));
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027D7CC; }
SET64(31, 0x27d7a4); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_00294700(c);
SET32(6, RW(0) + 6);
SET64(3, RD(2) + RD(0));
SET32(5, RW(0) + 4);
{ int t = RD(3) == RD(5); SET64(4, RSD(3) < (s64)0); if (t) goto L_0027D7C4; }
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(6); if (RD(4) != 0) SET64(2, RD(5)); if (t) goto L_0027D7C8; }
L_0027D7C4:;
SET32(2, RW(0) + 2);
L_0027D7C8:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0027D7CC:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027D7D8(Ctx *c) { /* func_0027D7D8 */
ENTER(0x27d7d8);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) != RD(0); SET64(4, (s32)rd32(c, (RW(2) + 64))); if (t) goto L_0027D800; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 15);
SET64(6, RD(0) + RD(0));
SET32(29, RW(29) + 16); { F_00294740(c); return; }
L_0027D800:;
SET64(3, (s32)rd32(c, (RW(2) + 12)));
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0027D820; }
SET32(5, RW(0) + 15);
SET32(6, RW(0) + 2);
SET32(29, RW(29) + 16); { F_00294740(c); return; }
L_0027D820:;
SET32(5, RW(0) + 15);
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 16); { F_00294740(c); return; }
}

void F_0027D830(Ctx *c) { /* mwPlySetSyncMode */
ENTER(0x27d830);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27d850); SET64(18, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0027D878; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 544);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027D878:;
{ int t = RD(16) != RD(0); SET64(17, (s32)rd32(c, (RW(18) + 64))); if (t) goto L_0027D8A8; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 15);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(6, RD(0) + RD(0));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
L_0027D8A8:;
SET32(3, RW(0) + 1);
{ int t = RD(16) != RD(3); SET32(2, RW(0) + 2); if (t) goto L_0027D8D8; }
SET64(4, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 15);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
L_0027D8D8:;
{ int t = RD(16) != RD(2); SET32(2, RW(0) + 3); if (t) goto L_0027D930; }
SET64(2, (s32)rd32(c, (RW(18) + 12)));
{ int t = RD(2) != RD(3); SET64(4, RD(17) + RD(0)); if (t) goto L_0027D910; }
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 15);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 2);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
L_0027D910:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 15);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(6, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
L_0027D930:;
if (RD(16) != RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027D970; }
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 15);
SET64(31, 0x27d948); SET32(6, RW(0) + 5); F_00294740(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 71);
SET64(17, rd64(c, (RW(29) + 8)));
SET32(6, RW(0) + 1);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
L_0027D970:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027D988(Ctx *c) { /* mwPlyGetSyncMode */
ENTER(0x27d988);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27d99c); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
SET64(6, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET32(5, RW(0) + 15); if (t) goto L_0027D9C0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27d9b4); SET32(4, RW(4) + 592); F_00281110(c);
SET32(2, RW(0) + -1); goto L_0027DA14;
L_0027D9C0:;
SET64(31, 0x27d9c8); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_00294990(c);
SET32(3, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(29) + 0)));
SET32(5, RW(0) + 1);
{ int t = RD(4) == RD(3); SET64(2, RSD(4) < (s64)2); if (t) goto L_0027DA10; }
if (RD(2) == RD(0)) { SET32(2, RW(0) + 2); goto L_0027D9F8; }
{ int t = RD(4) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0027DA10; }
SET64(4, (s64)(s32)0x4b0000); goto L_0027DA04;
L_0027D9F8:;
{ int t = RD(4) == RD(2); SET32(5, RW(0) + 2); if (t) goto L_0027DA10; }
SET64(4, (s64)(s32)0x4b0000);
L_0027DA04:;
SET64(31, 0x27da0c); SET32(4, RW(4) + 640); F_00281110(c);
SET32(5, RW(0) + -1);
L_0027DA10:;
SET64(2, RD(5) + RD(0));
L_0027DA14:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027DA28(Ctx *c) { /* mwPlyGetNumDecPool */
ENTER(0x27da28);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27da3c); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 688); if (t) goto L_0027DA60; }
SET64(31, 0x27da54);  F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_0027DA80;
L_0027DA60:;
SET64(31, 0x27da68); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_0028A1A8(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 744); if (t) goto L_0027DA7C; }
SET64(31, 0x27da7c);  F_00281110(c);
L_0027DA7C:;
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_0027DA80:;
SET64(16, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027DA90(Ctx *c) { /* mwPlyGetNumTotalDec */
ENTER(0x27da90);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 160), RD(16));
wr64(c, (RW(29) + 168), RD(31));
SET64(31, 0x27daa4); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027DAC8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27dabc); SET32(4, RW(4) + 776); F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_0027DAD4;
L_0027DAC8:;
SET64(31, 0x27dad0);  F_0027D578(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_0027DAD4:;
SET64(16, rd64(c, (RW(29) + 160)));
SET64(31, rd64(c, (RW(29) + 168)));
SET32(29, RW(29) + 176); return;
}

void F_0027DAE8(Ctx *c) { /* func_0027DAE8 */
ENTER(0x27dae8);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
SET64(5, RD(29) + RD(0));
SET64(31, 0x27dafc); SET64(4, (s32)rd32(c, (RW(4) + 64))); F_00293198(c);
SET64(3, (s32)rd32(c, (RW(29) + 4)));
SET64(2, (s32)rd32(c, (RW(29) + 12)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(2, RW(3) + RW(2));
SET32(29, RW(29) + 48); return;
}

void F_0027DB18(Ctx *c) { /* func_0027DB18 */
ENTER(0x27db18);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27db3c); SET64(18, RD(4) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
SET32(4, RW(4) + 832);
{ int t = RD(2) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_0027DB60; }
SET64(31, 0x27db58);  F_00281110(c);
SET32(2, RW(0) + 1); goto L_0027DBA0;
L_0027DB60:;
SET64(31, 0x27db68); SET64(4, (s32)rd32(c, (RW(18) + 64))); F_002955A0(c);
{ int t = RD(2) == RD(0); SET32(4, RW(0) + -309); if (t) goto L_0027DB90; }
SET64(31, 0x27db78);  F_0027BCE8(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27db84); SET32(4, RW(4) + 880); F_00281110(c);
wr32(c, (RW(16) + 0), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(2));
L_0027DB90:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
if (RSD(2) >= 0) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027DBAC; }
SET32(2, RW(0) + 1);
L_0027DBA0:;
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_0027DBAC:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027DBC0(Ctx *c) { /* func_0027DBC0 */
ENTER(0x27dbc0);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); SET32(5, RW(0) + 3); if (t) goto L_0027DBDC; }
SET64(2, (s32)rd32(c, (RW(4) + 64)));
L_0027DBDC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { F_00289FF0(c); return; }
}

void F_0027DBF0(Ctx *c) { /* func_0027DBF0 */
ENTER(0x27dbf0);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); SET32(5, RW(0) + 5); if (t) goto L_0027DC0C; }
SET64(2, (s32)rd32(c, (RW(4) + 64)));
L_0027DC0C:;
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { F_00289FF0(c); return; }
}

void F_0027DC20(Ctx *c) { /* mwSfdSetOutVol */
ENTER(0x27dc20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27dc3c); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0027DC68; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 920);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027DC68:;
SET64(31, 0x27dc70);  F_0027CBE8(c);
SET32(4, RW(16) + 660);
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00280A10(c); return; }
}

void F_0027DC90(Ctx *c) { /* mwSfdGetOutVol */
ENTER(0x27dc90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27dca8); SET64(17, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_0027DCC8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27dcbc); SET32(4, RW(4) + 968); F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_0027DCF0;
L_0027DCC8:;
SET64(31, 0x27dcd0);  F_0027CC00(c);
SET32(4, RW(17) + 660);
SET64(31, 0x27dcdc); SET64(16, RD(2) + RD(0)); F_00280A70(c);
SET64(3, RD(2) + RD(0));
SET64(2, RD(16) + RD(0));
SET64(4, RD(16) ^ RD(3));
if (RD(2) == 0) SET64(2, RD(3));
if (RD(4) == 0) SET64(2, RD(16));
L_0027DCF0:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027DD08(Ctx *c) { /* mwSfdSetOutPan */
ENTER(0x27dd08);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27dd2c); SET64(18, RD(6) + RD(0)); F_0027D6B0(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_0027DD60; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 1016);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027DD60:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0027CC18(c); return; }
}

void F_0027DD78(Ctx *c) { /* mwSfdGetOutPan */
ENTER(0x27dd78);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27dd94); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0027DDC8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27ddac); SET32(4, RW(4) + 1064); F_00281110(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
L_0027DDC8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0027CC30(c); return; }
}

void F_0027DDE0(Ctx *c) { /* func_0027DDE0 */
ENTER(0x27dde0);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
SET64(3, RD(5) + RD(0));
SET32(5, RW(0) + 4);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(2) == RD(0); SET64(4, RD(0) + RD(0)); if (t) goto L_0027DE00; }
SET64(4, (s32)rd32(c, (RW(2) + 64)));
L_0027DE00:;
SET32(2, RW(0) + 1);
{ int t = RD(3) != RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0027DE18; }
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 16); { F_00289FF0(c); return; }
L_0027DE18:;
SET32(5, RW(0) + 4);
SET64(6, RD(0) + RD(0));
SET32(29, RW(29) + 16); { F_00289FF0(c); return; }
}

void F_0027DE28(Ctx *c) { /* func_0027DE28 */
ENTER(0x27de28);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
{ int t = RD(5) != RD(2); SET64(4, (s32)rd32(c, (RW(4) + 64))); if (t) goto L_0027DE50; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 39);
SET32(6, RW(0) + 1);
SET32(29, RW(29) + 16); { F_00294740(c); return; }
L_0027DE50:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 39);
SET64(6, RD(0) + RD(0));
SET32(29, RW(29) + 16); { F_00294740(c); return; }
}

void F_0027DE68(Ctx *c) { /* func_0027DE68 */
ENTER(0x27de68);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 36);
{ int t = RD(4) == RD(0); SET64(2, (s32)rd32(c, (RW(4) + 64))); if (t) goto L_0027DE90; }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { F_00294740(c); return; }
L_0027DE90:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027DEA0(Ctx *c) { /* func_0027DEA0 */
ENTER(0x27dea0);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 37);
{ int t = RD(4) == RD(0); SET64(2, (s32)rd32(c, (RW(4) + 64))); if (t) goto L_0027DEC8; }
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { F_00294740(c); return; }
L_0027DEC8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027DED8(Ctx *c) { /* mwPlyGetNumSkipEmptyB */
ENTER(0x27ded8);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 160), RD(16));
wr64(c, (RW(29) + 168), RD(31));
SET64(31, 0x27deec); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
SET64(5, RD(29) + RD(0));
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027DF10; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27df04); SET32(4, RW(4) + 1112); F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_0027DF1C;
L_0027DF10:;
SET64(31, 0x27df18);  F_0027D578(c);
SET64(2, (s32)rd32(c, (RW(29) + 16)));
L_0027DF1C:;
SET64(16, rd64(c, (RW(29) + 160)));
SET64(31, rd64(c, (RW(29) + 168)));
SET32(29, RW(29) + 176); return;
}

void F_0027DF30(Ctx *c) { /* mwPlySetEmptyBpicSkip */
ENTER(0x27df30);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27df4c); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027DF70; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 1168);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027DF70:;
SET64(31, 0x27df78);  F_0027D198(c);
SET64(6, RD(17) ^ 0x1);
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 7);
SET64(17, rd64(c, (RW(29) + 8)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(6, RD(0) < RD(6));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
}

void F_0027DFA0(Ctx *c) { /* mwPlyGetInputSj */
ENTER(0x27dfa0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27dfb4); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 468))); goto L_0027DFCC; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27dfc8); SET32(4, RW(4) + 1224); F_00281110(c);
SET64(2, RD(0) + RD(0));
L_0027DFCC:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027DFE0(Ctx *c) { /* mwPlyGetPlyInf */
ENTER(0x27dfe0);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 160), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 168), RD(17));
wr64(c, (RW(29) + 176), RD(31));
SET64(31, 0x27dffc); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027E018; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27e010); SET32(4, RW(4) + 1272); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 160))); goto L_0027E068;
L_0027E018:;
SET64(31, 0x27e020);  F_0027D198(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x27e02c); SET64(4, RD(2) + RD(0)); F_00294B18(c);
SET64(31, 0x27e034); SET64(4, RD(16) + RD(0)); F_0027D228(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27e040); wr32(c, (RW(17) + 0), RW(2)); F_0027D290(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27e04c); wr32(c, (RW(17) + 4), RW(2)); F_0027B0F8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27e058); wr32(c, (RW(17) + 8), RW(2)); F_0027DED8(c);
SET64(3, (s32)rd32(c, (RW(29) + 32)));
wr32(c, (RW(17) + 12), RW(2));
wr32(c, (RW(17) + 16), RW(3));
SET64(16, rd64(c, (RW(29) + 160)));
L_0027E068:;
SET64(17, rd64(c, (RW(29) + 168)));
SET64(31, rd64(c, (RW(29) + 176)));
SET32(29, RW(29) + 192); return;
}

void F_0027E078(Ctx *c) { /* mwPlyGetFlowInf */
ENTER(0x27e078);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 160), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 168), RD(17));
wr64(c, (RW(29) + 176), RD(31));
SET64(31, 0x27e094); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027E0B0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27e0a8); SET32(4, RW(4) + 1320); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 160))); goto L_0027E128;
L_0027E0B0:;
SET64(31, 0x27e0b8);  F_0027D198(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x27e0c4); SET64(5, RD(29) + RD(0)); F_00294B18(c);
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
L_0027E128:;
SET64(17, rd64(c, (RW(29) + 168)));
SET64(31, rd64(c, (RW(29) + 176)));
SET32(29, RW(29) + 192); return;
}

void F_0027E138(Ctx *c) { /* func_0027E138 */
ENTER(0x27e138);
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
SET32(29, RW(29) + 16); { F_0027D608(c); return; }
}

void F_0027E190(Ctx *c) { /* func_0027E190 */
ENTER(0x27e190);
SET32(29, RW(29) + -32);
SET64(2, RD(0) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 68)));
{ int t = RD(3) == RD(0); SET64(4, RD(3) + RD(0)); if (t) goto L_0027E1B4; }
SET64(31, 0x27e1b0); SET64(5, RD(29) + RD(0)); F_00281FD8(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
L_0027E1B4:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027E1C0(Ctx *c) { /* func_0027E1C0 */
ENTER(0x27e1c0);
SET32(29, RW(29) + -16);
SET64(2, RD(0) + RD(0));
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0027E218; }
SET64(2, (s32)rd32(c, (RW(4) + 68)));
SET64(3, (s32)rd32(c, (RW(4) + 76)));
{ int t = RD(2) != RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0027E208; }
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0027E218; }
SET64(2, (s32)rd32(c, (RW(3) + 40)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0027E200; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00282000(c); return; }
L_0027E200:;
SET64(2, RD(0) + RD(0)); goto L_0027E218;
L_0027E208:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00282000(c); return; }
L_0027E218:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027E228(Ctx *c) { /* mwPlySetSpeed */
ENTER(0x27e228);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27e244); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027E268; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 1368);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027E268:;
SET64(31, 0x27e270);  F_0027D198(c);
SET64(5, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00291338(c); return; }
}

void F_0027E290(Ctx *c) { /* mwPlySetFloatSpeed */
ENTER(0x27e290);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 16), c->f[20].u);
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27e2ac); c->f[20].u = c->f[12].u; F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027E2D0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 1416);
c->f[20].u = rd32(c, (RW(29) + 16));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027E2D0:;
SET64(31, 0x27e2d8);  F_0027D198(c);
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
{ int t = c->fcc; SET32(3, RW(0) + 1); if (t) goto L_0027E314; }
SET64(3, RD(0) + RD(0));
L_0027E314:;
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(5) - RW(3));
SET64(31, rd64(c, (RW(29) + 8)));
c->f[20].u = rd32(c, (RW(29) + 16));
SET32(29, RW(29) + 32); { F_00291338(c); return; }
}

void F_0027E330(Ctx *c) { /* func_0027E330 */
ENTER(0x27e330);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 79);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00294740(c); return; }
}

void F_0027E350(Ctx *c) { /* func_0027E350 */
ENTER(0x27e350);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 80);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00294740(c); return; }
}

void F_0027E370(Ctx *c) { /* func_0027E370 */
ENTER(0x27e370);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 73);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00294740(c); return; }
}

void F_0027E390(Ctx *c) { /* func_0027E390 */
ENTER(0x27e390);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 56);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00294740(c); return; }
}

void F_0027E3B0(Ctx *c) { /* func_0027E3B0 */
ENTER(0x27e3b0);
SET32(29, RW(29) + -16);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET32(5, RW(0) + 57);
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00294740(c); return; }
}

void F_0027E3D0(Ctx *c) { /* func_0027E3D0 */
ENTER(0x27e3d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET64(6, RD(5) + RD(0));
SET32(5, RW(0) + 93);
SET64(31, 0x27e3f8); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_00294740(c);
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 94);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
}

void F_0027E418(Ctx *c) { /* func_0027E418 */
ENTER(0x27e418);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(0) + 78);
SET64(31, 0x27e43c); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_00294740(c);
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 77);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
}

void F_0027E460(Ctx *c) { /* func_0027E460 */
ENTER(0x27e460);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(0) + 92);
SET64(31, 0x27e484); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_00294740(c);
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 91);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
}

void F_0027E4A8(Ctx *c) { /* func_0027E4A8 */
ENTER(0x27e4a8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
SET32(5, RW(0) + 95);
SET64(31, 0x27e4cc); SET64(4, (s32)rd32(c, (RW(16) + 64))); F_00294740(c);
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 95);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00294740(c); return; }
}

void F_0027E4F0(Ctx *c) { /* func_0027E4F0 */
ENTER(0x27e4f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00287D88(c); return; }
}

void F_0027E508(Ctx *c) { /* func_0027E508 */
ENTER(0x27e508);
SET64(6, RD(4) + RD(0));
SET64(4, RD(0) + RD(0));
SET32(2, RW(6) + 1);
SET32(29, RW(29) + -16);
SET64(2, RD(2) < (u64)(s64)3);
{ int t = RD(2) != RD(0); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_0027E538; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(4, RW(4) + 1464);
SET32(29, RW(29) + 16); { F_00281110(c); return; }
L_0027E538:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(5, RW(0) + 61);
SET32(29, RW(29) + 16); { F_00294740(c); return; }
}

void F_0027E548(Ctx *c) { /* func_0027E548 */
ENTER(0x27e548);
SET32(29, RW(29) + -32);
SET64(4, RD(0) + RD(0));
SET32(5, RW(0) + 61);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27e560); SET64(6, RD(29) + RD(0)); F_00294990(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027E570(Ctx *c) { /* func_0027E570 */
ENTER(0x27e570);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x27e580);  F_0029A578(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(4, (s64)(s32)0x280000);
SET32(4, RW(4) + -6760);
SET64(5, RD(0) + RD(0));
SET32(29, RW(29) + 16); { F_0029A6A0(c); return; }
}

void F_0027E598(Ctx *c) { /* func_0027E598 */
ENTER(0x27e598);
SET32(29, RW(29) + -16);
SET64(4, RD(5) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00281110(c); return; }
}

void F_0027E5B0(Ctx *c) { /* func_0027E5B0 */
ENTER(0x27e5b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029A648(c); return; }
}

void F_0027E5C8(Ctx *c) { /* func_0027E5C8 */
ENTER(0x27e5c8);
SET32(2, RW(0) + 6175); return;
}

void F_0027E5D0(Ctx *c) { /* func_0027E5D0 */
ENTER(0x27e5d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029A6B8(c); return; }
}

void F_0027E5E8(Ctx *c) { /* func_0027E5E8 */
ENTER(0x27e5e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029A8D8(c); return; }
}

void F_0027E600(Ctx *c) { /* func_0027E600 */
ENTER(0x27e600);
SET64(2, (s32)rd32(c, (RW(4) + 172))); return;
}

void F_0027E608(Ctx *c) { /* func_0027E608 */
ENTER(0x27e608);
wr32(c, (RW(4) + 172), RW(5)); return;
}

void F_0027E610(Ctx *c) { /* func_0027E610 */
ENTER(0x27e610);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027E628(c); return; }
}

void F_0027E628(Ctx *c) { /* func_0027E628 */
ENTER(0x27e628);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(4) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27e650); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_0027E6A0(c);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(31, 0x27e660); SET64(5, RD(17) + RD(0)); F_0027E700(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27e66c); SET64(5, RD(17) + RD(0)); F_0027E7B8(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(31, 0x27e67c); SET64(6, RD(17) + RD(0)); F_0027E7D8(c);
SET64(4, RD(18) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0027E820(c); return; }
}

void F_0027E6A0(Ctx *c) { /* func_0027E6A0 */
ENTER(0x27e6a0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(5, RD(4) < (u64)(s64)3);
{ int t = RD(4) == RD(2); SET32(3, RW(0) + 2); if (t) goto L_0027E6EC; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 3); goto L_0027E6D0; }
SET32(2, RW(0) + 1);
SET32(3, RW(0) + 1); goto L_0027E6D4;
L_0027E6D0:;
SET32(3, RW(0) + 3);
L_0027E6D4:;
{ int t = RD(4) == RD(2); SET64(31, rd64(c, (RW(29) + 0))); if (t) goto L_0027E6F0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27e6e8); SET32(4, RW(4) + 1512); F_00281110(c);
SET32(3, RW(0) + 3);
L_0027E6EC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_0027E6F0:;
SET64(2, RD(3) + RD(0));
SET32(29, RW(29) + 16); return;
}

void F_0027E700(Ctx *c) { /* func_0027E700 */
ENTER(0x27e700);
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
{ int t = RD(2) == RD(3); wr32(c, (RW(16) + 72), RW(17)); if (t) goto L_0027E758; }
SET64(5, (s32)rd32(c, (RW(8) + 0)));
SET64(31, 0x27e750); SET64(6, RD(9) + RD(0)); F_0027E7C8(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0027E7A4;
L_0027E758:;
SET64(4, (s32)rd32(c, (RW(8) + 0)));
SET64(31, 0x27e764); SET64(7, RD(29) + RD(0)); F_0027AD50(c);
SET32(4, RW(16) + 4);
SET64(5, (s32)rd32(c, (RW(29) + 0)));
SET64(7, RD(17) + RD(0));
SET64(31, 0x27e778); SET64(6, (s32)rd32(c, (RW(29) + 12))); F_0027E7C8(c);
SET32(4, RW(16) + 20);
SET64(5, (s32)rd32(c, (RW(29) + 4)));
SET64(7, RD(17) + RD(0));
SET64(31, 0x27e78c); SET64(6, (s32)rd32(c, (RW(29) + 16))); F_0027E7C8(c);
SET32(4, RW(16) + 36);
SET64(5, (s32)rd32(c, (RW(29) + 8)));
SET64(7, RD(17) + RD(0));
SET64(31, 0x27e7a0); SET64(6, (s32)rd32(c, (RW(29) + 20))); F_0027E7C8(c);
SET64(16, rd64(c, (RW(29) + 32)));
L_0027E7A4:;
SET64(17, rd64(c, (RW(29) + 40)));
SET64(31, rd64(c, (RW(29) + 48)));
SET32(29, RW(29) + 64); return;
}

void F_0027E7B8(Ctx *c) { /* func_0027E7B8 */
ENTER(0x27e7b8);
SET64(2, (s32)rd32(c, (RW(4) + 48)));
wr32(c, (RW(5) + 76), RW(2)); return;
}

void F_0027E7C8(Ctx *c) { /* IVec3_Set */
ENTER(0x27e7c8);
wr32(c, (RW(4) + 8), RW(7));
wr32(c, (RW(4) + 0), RW(5));
wr32(c, (RW(4) + 4), RW(6)); return;
}

void F_0027E7D8(Ctx *c) { /* func_0027E7D8 */
ENTER(0x27e7d8);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(31));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET64(31, 0x27e7f8); SET64(4, (s32)rd32(c, (RW(4) + 172))); F_0029AB20(c);
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

void F_0027E820(Ctx *c) { /* func_0027E820 */
ENTER(0x27e820);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27e83c); SET32(17, RW(5) + 96); F_0027E898(c);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(16) + RD(0));
SET64(31, 0x27e84c); SET32(16, RW(16) + 140); F_0027E908(c);
SET64(3, (s32)rd32(c, (RW(16) + 8)));
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 8), RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
wr32(c, (RW(17) + 12), RW(2));
SET64(3, (s32)rd32(c, (RW(16) + 16)));
SET64(31, 0x27e870); wr32(c, (RW(17) + 16), RW(3)); F_0027E978(c);
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(31, 0x27e87c); wr32(c, (RW(17) + 20), RW(2)); F_0027E978(c);
wr32(c, (RW(17) + 24), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_0027E898(Ctx *c) { /* func_0027E898 */
ENTER(0x27e898);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 3);
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 140)));
{ int t = RD(3) == RD(2); SET64(4, RD(3) < (u64)(s64)3); if (t) goto L_0027E8E0; }
{ int t = RD(4) == RD(0); SET32(2, RW(0) + 1); if (t) goto L_0027E8D0; }
if (RD(3) == RD(2)) { SET32(16, RW(0) + 1); goto L_0027E8F0; }
SET64(4, (s64)(s32)0x4b0000); goto L_0027E8E8;
L_0027E8D0:;
{ int t = RD(3) == RD(16); SET64(2, RD(16) + RD(0)); if (t) goto L_0027E8F4; }
SET64(4, (s64)(s32)0x4b0000); goto L_0027E8E8;
L_0027E8E0:;
SET32(16, RW(0) + 2); goto L_0027E8F0;
L_0027E8E8:;
SET64(31, 0x27e8f0); SET32(4, RW(4) + 1552); F_00281110(c);
L_0027E8F0:;
SET64(2, RD(16) + RD(0));
L_0027E8F4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027E908(Ctx *c) { /* func_0027E908 */
ENTER(0x27e908);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 1);
wr64(c, (RW(29) + 8), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 144)));
{ int t = RD(3) == RD(2); SET64(4, RD(3) < (u64)(s64)3); if (t) goto L_0027E950; }
if (RD(4) == RD(0)) { SET32(2, RW(0) + 3); goto L_0027E940; }
{ int t = RD(3) == RD(16); SET64(2, RD(16) + RD(0)); if (t) goto L_0027E964; }
SET64(4, (s64)(s32)0x4b0000); goto L_0027E958;
L_0027E940:;
if (RD(3) == RD(2)) { SET32(16, RW(0) + 3); goto L_0027E960; }
SET64(4, (s64)(s32)0x4b0000); goto L_0027E958;
L_0027E950:;
SET32(16, RW(0) + 2); goto L_0027E960;
L_0027E958:;
SET64(31, 0x27e960); SET32(4, RW(4) + 1592); F_00281110(c);
L_0027E960:;
SET64(2, RD(16) + RD(0));
L_0027E964:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027E978(Ctx *c) { /* func_0027E978 */
ENTER(0x27e978);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET32(16, RW(0) + 1);
{ int t = RD(4) == RD(0); wr64(c, (RW(29) + 8), RD(31)); if (t) goto L_0027E9A0; }
{ int t = RD(4) == RD(16); SET64(2, RD(16) + RD(0)); if (t) goto L_0027E9B4; }
SET64(4, (s64)(s32)0x4b0000); goto L_0027E9A8;
L_0027E9A0:;
SET64(16, RD(0) + RD(0)); goto L_0027E9B0;
L_0027E9A8:;
SET64(31, 0x27e9b0); SET32(4, RW(4) + 1632); F_00281110(c);
L_0027E9B0:;
SET64(2, RD(16) + RD(0));
L_0027E9B4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027E9C8(Ctx *c) { /* func_0027E9C8 */
ENTER(0x27e9c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AA18(c); return; }
}

void F_0027E9E0(Ctx *c) { /* func_0027E9E0 */
ENTER(0x27e9e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AA68(c); return; }
}

void F_0027E9F8(Ctx *c) { /* mwPlyFxCnvFrmZ16 */
ENTER(0x27e9f8);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 152), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 168), RD(19));
wr64(c, (RW(29) + 144), RD(16));
wr64(c, (RW(29) + 176), RD(31));
SET64(31, 0x27ea20); SET64(19, RD(6) + RD(0)); F_0027D6B0(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 0))); goto L_0027EA40; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27ea34); SET32(4, RW(4) + 1664); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_0027EA88;
L_0027EA40:;
{ int t = RD(2) != RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0027EA58; }
SET64(31, 0x27ea50); SET32(4, RW(4) + 1712); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_0027EA88;
L_0027EA58:;
SET64(31, 0x27ea60); SET64(4, RD(17) + RD(0)); F_0027E600(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x27ea74); SET64(16, RD(2) + RD(0)); F_0027E628(c);
SET64(5, RD(29) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x27ea84); SET64(6, RD(19) + RD(0)); F_0029B998(c);
SET64(16, rd64(c, (RW(29) + 144)));
L_0027EA88:;
SET64(17, rd64(c, (RW(29) + 152)));
SET64(18, rd64(c, (RW(29) + 160)));
SET64(19, rd64(c, (RW(29) + 168)));
SET64(31, rd64(c, (RW(29) + 176)));
SET32(29, RW(29) + 192); return;
}

void F_0027EAA0(Ctx *c) { /* mwPlyFxCnvFrmZ32 */
ENTER(0x27eaa0);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 152), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(18));
SET64(18, RD(5) + RD(0));
wr64(c, (RW(29) + 168), RD(19));
wr64(c, (RW(29) + 144), RD(16));
wr64(c, (RW(29) + 176), RD(31));
SET64(31, 0x27eac8); SET64(19, RD(6) + RD(0)); F_0027D6B0(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 0))); goto L_0027EAE8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27eadc); SET32(4, RW(4) + 1760); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_0027EB30;
L_0027EAE8:;
{ int t = RD(2) != RD(0); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0027EB00; }
SET64(31, 0x27eaf8); SET32(4, RW(4) + 1808); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_0027EB30;
L_0027EB00:;
SET64(31, 0x27eb08); SET64(4, RD(17) + RD(0)); F_0027E600(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x27eb1c); SET64(16, RD(2) + RD(0)); F_0027E628(c);
SET64(5, RD(29) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x27eb2c); SET64(6, RD(19) + RD(0)); F_0029BA38(c);
SET64(16, rd64(c, (RW(29) + 144)));
L_0027EB30:;
SET64(17, rd64(c, (RW(29) + 152)));
SET64(18, rd64(c, (RW(29) + 160)));
SET64(19, rd64(c, (RW(29) + 168)));
SET64(31, rd64(c, (RW(29) + 176)));
SET32(29, RW(29) + 192); return;
}

void F_0027EB48(Ctx *c) { /* mwPlyFxSetCompoMode */
ENTER(0x27eb48);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27eb6c); SET64(18, RD(16) + RD(0)); F_0027D6B0(c);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 400))); goto L_0027EB98; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 1856);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027EB98:;
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_0027EBF0; }
SET32(2, RW(0) + 257);
{ int t = RD(16) != RD(2); SET64(4, (s64)(s32)0x4b0000); if (t) goto L_0027EBC8; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 1912);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027EBC8:;
if (RD(16) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_0027EBF0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 1984);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027EBF0:;
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x27ebfc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 2);
if (RD(2) != RD(3)) { SET64(4, RD(17) + RD(0)); goto L_0027EC2C; }
if (RD(18) != RD(0)) { SET64(4, RD(17) + RD(0)); goto L_0027EC2C; }
SET64(31, 0x27ec18); SET64(4, RD(17) + RD(0)); F_0027B2A0(c);
SET32(3, RW(0) + 17);
SET64(16, RD(2) + RD(0));
SET64(2, ~(RD(0) | RD(16)));
if (RD(2) == 0) SET64(16, RD(3));
SET64(4, RD(17) + RD(0));
L_0027EC2C:;
SET64(17, rd64(c, (RW(29) + 8)));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0027EC48(c); return; }
}

void F_0027EC48(Ctx *c) { /* func_0027EC48 */
ENTER(0x27ec48);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27ec5c); SET64(16, RD(5) + RD(0)); F_0027E600(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { F_0029A9C8(c); return; }
}

void F_0027EC78(Ctx *c) { /* mwPlyFxGetCompoMode */
ENTER(0x27ec78);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27ec8c); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027ECB8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27eca0); SET32(4, RW(4) + 2064); F_00281110(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_0027ECB8:;
SET64(31, 0x27ecc0);  F_0027E600(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0029A9D0(c); return; }
}

void F_0027ECD8(Ctx *c) { /* func_0027ECD8 */
ENTER(0x27ecd8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27ecec); SET64(16, RD(5) + RD(0)); F_0027E600(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { F_0029A9D8(c); return; }
}

void F_0027ED08(Ctx *c) { /* func_0027ED08 */
ENTER(0x27ed08);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AC48(c); return; }
}

void F_0027ED20(Ctx *c) { /* func_0027ED20 */
ENTER(0x27ed20);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027ED08(c); return; }
}

void F_0027ED38(Ctx *c) { /* func_0027ED38 */
ENTER(0x27ed38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AC50(c); return; }
}

void F_0027ED50(Ctx *c) { /* func_0027ED50 */
ENTER(0x27ed50);
SET32(29, RW(29) + -16);
SET64(7, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027EE18(c); return; }
}

void F_0027ED68(Ctx *c) { /* mwPlyFxGetOutBufPitchHeight */
ENTER(0x27ed68);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27ed8c); SET64(18, RD(6) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027EDB8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 2120);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027EDB8:;
SET64(31, 0x27edc0);  F_0027E600(c);
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0029A9F8(c); return; }
}

void F_0027EDE8(Ctx *c) { /* func_0027EDE8 */
ENTER(0x27ede8);
SET32(29, RW(29) + -16);
SET64(7, RD(0) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027EE18(c); return; }
}

void F_0027EE00(Ctx *c) { /* func_0027EE00 */
ENTER(0x27ee00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027ED68(c); return; }
}

void F_0027EE18(Ctx *c) { /* func_0027EE18 */
ENTER(0x27ee18);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x27ee44); SET64(19, RD(7) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027EE70; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 2184);
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00281110(c); return; }
L_0027EE70:;
SET64(31, 0x27ee78);  F_0027E600(c);
SET64(5, RD(17) + RD(0));
SET64(16, RD(2) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x27ee8c); SET64(4, RD(16) + RD(0)); F_0029A9E8(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0029AA10(c); return; }
}

void F_0027EEB0(Ctx *c) { /* mwPlyFxSetOutZscale */
ENTER(0x27eeb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27eecc); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027EEF0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 2240);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027EEF0:;
SET64(31, 0x27eef8);  F_0027E600(c);
SET64(5, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029AB50(c); return; }
}

void F_0027EF18(Ctx *c) { /* mwPlyFxGetOutZscale */
ENTER(0x27ef18);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27ef2c); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027EF58; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27ef40); SET32(4, RW(4) + 2296); F_00281110(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_0027EF58:;
SET64(31, 0x27ef60);  F_0027E600(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0029AB58(c); return; }
}

void F_0027EF78(Ctx *c) { /* mwPlyFxSetOutZoffset */
ENTER(0x27ef78);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27ef94); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027EFB8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 2352);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027EFB8:;
SET64(31, 0x27efc0);  F_0027E600(c);
SET64(5, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029AB60(c); return; }
}

void F_0027EFE0(Ctx *c) { /* mwPlyFxGetOutZoffset */
ENTER(0x27efe0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27eff4); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027F020; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27f008); SET32(4, RW(4) + 2408); F_00281110(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_0027F020:;
SET64(31, 0x27f028);  F_0027E600(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0029AB68(c); return; }
}

void F_0027F040(Ctx *c) { /* func_0027F040 */
ENTER(0x27f040);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET64(2, RD(2) ^ 0x2);
SET64(2, RD(2) < (u64)(s64)1); return;
}

void F_0027F050(Ctx *c) { /* func_0027F050 */
ENTER(0x27f050);
SET64(3, (s32)rd32(c, (RW(4) + 32)));
{ int t = RD(3) == RD(0); SET32(4, RW(0) + 1); if (t) goto L_0027F06C; }
SET32(2, RW(0) + 257);
{ int t = RD(3) != RD(2); SET64(4, RD(0) + RD(0)); if (t) goto L_0027F06C; }
SET32(4, RW(0) + 1);
L_0027F06C:;
SET64(2, RD(4) + RD(0)); return;
}

void F_0027F078(Ctx *c) { /* func_0027F078 */
ENTER(0x27f078);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27f090); SET32(4, RW(16) + 12); F_0027F050(c);
{ int t = RD(2) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_0027F0C4; }
SET64(4, (s32)rd32(c, (RW(16) + 404)));
SET64(31, 0x27f0a4); SET64(5, (s32)rd32(c, (RW(16) + 408))); F_00266B28(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 2464); if (t) goto L_0027F0C4; }
SET64(31, 0x27f0b8);  F_00281110(c);
SET64(31, 0x27f0c0); SET64(4, RD(16) + RD(0)); F_00279F08(c);
SET64(2, RD(0) + RD(0));
L_0027F0C4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027F0D8(Ctx *c) { /* func_0027F0D8 */
ENTER(0x27f0d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 400)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0027F0FC; }
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(3); SET64(31, 0x27f0fc);  rt_call(c, t); }
L_0027F0FC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027F108(Ctx *c) { /* func_0027F108 */
ENTER(0x27f108);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27f11c); SET64(16, RD(4) + RD(0)); F_0027F040(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 400))); goto L_0027F130; }
SET64(2, RD(0) + RD(0)); goto L_0027F158;
L_0027F130:;
SET64(2, RD(0) + RD(0));
{ int t = RD(3) == RD(0); SET64(6, RD(3) + RD(0)); if (t) goto L_0027F158; }
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET32(5, RW(0) + 2);
SET64(31, 0x27f14c); SET64(7, RD(0) + RD(0)); F_00297DE8(c);
SET32(3, RW(0) + -1);
if (RD(2) == 0) SET64(3, RD(0));
SET64(2, RD(3) + RD(0));
L_0027F158:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027F168(Ctx *c) { /* func_0027F168 */
ENTER(0x27f168);
SET32(2, RW(4) + 424);
SET32(3, RW(0) + -1);
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(4) + 420), RW(3)); return;
}

void F_0027F188(Ctx *c) { /* func_0027F188 */
ENTER(0x27f188);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 400)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0027F1AC; }
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(3); SET64(31, 0x27f1ac);  rt_call(c, t); }
L_0027F1AC:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_0027F1B8(Ctx *c) { /* func_0027F1B8 */
ENTER(0x27f1b8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 400)));
{ int t = RD(2) == RD(0); SET32(3, RW(16) + 424); if (t) goto L_0027F200; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027F204; }
SET64(31, 0x27f1ec);  F_0027F258(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027F408(c); return; }
L_0027F200:;
SET64(16, rd64(c, (RW(29) + 0)));
L_0027F204:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027F210(Ctx *c) { /* func_0027F210 */
ENTER(0x27f210);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 400)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0027F248; }
SET64(31, 0x27f234);  F_0027F258(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027F408(c); return; }
L_0027F248:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027F258(Ctx *c) { /* func_0027F258 */
ENTER(0x27f258);
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
{ u32 t = RW(2); SET64(31, 0x27f290); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(5, (s64)(s32)0x4b0000);
SET64(6, (s64)(s32)0x4b0000);
SET64(3, RD(2) + RD(0));
SET32(5, RW(5) + 2512);
SET32(6, RW(6) + 2520);
SET64(4, RD(29) + RD(0));
{ int t = RD(3) == RD(0); SET32(7, RW(29) + 16); if (t) goto L_0027F2C8; }
SET64(2, (s32)rd32(c, (RW(16) + 404)));
wr32(c, (RW(29) + 4), RW(3));
SET64(31, 0x27f2c0); wr32(c, (RW(29) + 0), RW(2)); F_00268608(c);
{ int t = RD(2) != RD(0); SET32(19, RW(16) + 412); if (t) goto L_0027F2E0; }
L_0027F2C8:;
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 0), RW(2));
wr32(c, (RW(17) + 8), RW(0)); goto L_0027F388;
L_0027F2E0:;
SET64(2, (s32)rd32(c, (RW(19) + 0)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0027F368; }
SET64(5, (s32)rd32(c, (RW(29) + 16)));
SET64(31, 0x27f2f8); SET64(6, (s32)rd32(c, (RW(29) + 20))); F_00127218(c);
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
{ u32 t = RW(2); SET64(31, 0x27f334); SET64(6, RD(6) | 0xffff); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(4, RD(18) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(3) + 32)));
{ u32 t = RW(2); SET64(31, 0x27f34c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, (s32)rd32(c, (RW(3) + 20)));
{ u32 t = RW(2); SET64(31, 0x27f35c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 48))); goto L_0027F38C;
L_0027F368:;
SET64(5, (s32)rd32(c, (RW(29) + 20)));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(29) + 16)));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(17) + 0), RW(3));
wr32(c, (RW(17) + 4), RW(2));
SET64(31, 0x27f388); wr32(c, (RW(17) + 8), RW(5)); F_0027F4B0(c);
L_0027F388:;
SET64(16, rd64(c, (RW(29) + 48)));
L_0027F38C:;
SET64(17, rd64(c, (RW(29) + 56)));
SET64(18, rd64(c, (RW(29) + 64)));
SET64(19, rd64(c, (RW(29) + 72)));
SET64(31, rd64(c, (RW(29) + 80)));
SET32(29, RW(29) + 96); return;
}

void F_0027F3A8(Ctx *c) { /* func_0027F3A8 */
ENTER(0x27f3a8);
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
{ int t = RD(2) != RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_0027F3E4; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27f3e4); SET32(4, RW(4) + 2528); F_00281110(c);
L_0027F3E4:;
wr32(c, (RW(16) + 4), RW(17));
wr32(c, (RW(16) + 0), RW(18));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_0027F408(Ctx *c) { /* func_0027F408 */
ENTER(0x27f408);
SET32(29, RW(29) + -48);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(16));
SET32(3, RW(2) + 424);
wr64(c, (RW(29) + 40), RD(31));
SET64(4, RD(29) + RD(0));
SET64(8, (s32)rd32(c, (RW(3) + 4)));
{ int t = RD(8) != RD(0); SET64(16, (s32)rd32(c, (RW(2) + 172))); if (t) goto L_0027F448; }
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x27f43c); SET64(6, RD(0) + RD(0)); F_0029AA88(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0027F4A4;
L_0027F448:;
SET64(2, (s32)rd32(c, (RW(3) + 8)));
SET64(5, (s64)(s32)0x4b0000);
SET64(6, (s64)(s32)0x4b0000);
SET32(5, RW(5) + 2584);
SET32(6, RW(6) + 2592);
SET32(7, RW(29) + 16);
wr32(c, (RW(29) + 0), RW(8));
SET64(31, 0x27f46c); wr32(c, (RW(29) + 4), RW(2)); F_00268608(c);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_0027F490; }
SET64(31, 0x27f484);  F_0029AA88(c);
SET64(16, rd64(c, (RW(29) + 32))); goto L_0027F4A4;
L_0027F490:;
SET64(5, (s32)rd32(c, (RW(29) + 16)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x27f4a0); SET64(6, (s32)rd32(c, (RW(29) + 20))); F_0029AA88(c);
SET64(16, rd64(c, (RW(29) + 32)));
L_0027F4A4:;
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_0027F4B0(Ctx *c) { /* func_0027F4B0 */
ENTER(0x27f4b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27f4c4); SET64(16, RD(4) + RD(0)); F_0027F040(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(3, (s32)rd32(c, (RW(16) + 400))); goto L_0027F4D8; }
SET64(2, RD(0) + RD(0)); goto L_0027F500;
L_0027F4D8:;
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_0027F500; }
SET64(4, (s32)rd32(c, (RW(16) + 64)));
SET32(5, RW(0) + 2);
SET64(6, RD(0) + RD(0));
SET64(31, 0x27f4f4); SET64(7, RD(0) + RD(0)); F_00297DE8(c);
SET32(3, RW(0) + -1);
if (RD(2) == 0) SET64(3, RD(0));
SET64(2, RD(3) + RD(0));
L_0027F500:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_0027F510(Ctx *c) { /* func_0027F510 */
ENTER(0x27f510);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AB70(c); return; }
}

void F_0027F528(Ctx *c) { /* func_0027F528 */
ENTER(0x27f528);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AB88(c); return; }
}

void F_0027F540(Ctx *c) { /* func_0027F540 */
ENTER(0x27f540);
SET32(4, RW(4) + 424);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(6) + 0), RW(2));
wr32(c, (RW(5) + 0), RW(3)); return;
}

void F_0027F558(Ctx *c) { /* func_0027F558 */
ENTER(0x27f558);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 32), RD(31));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET64(31, 0x27f580); SET64(4, (s32)rd32(c, (RW(4) + 172))); F_0029AB20(c);
SET64(2, (s32)rd32(c, (RW(29) + 0)));
SET64(3, (s32)rd32(c, (RW(29) + 4)));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(17) + 0), RW(3));
SET64(16, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_0027F5A8(Ctx *c) { /* func_0027F5A8 */
ENTER(0x27f5a8);
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
SET64(31, 0x27f5d8); SET64(20, RD(7) + RD(0)); F_0027E600(c);
SET64(6, RD(29) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x27f5ec); SET64(17, RD(2) + RD(0)); F_0027E628(c);
SET64(4, RD(17) + RD(0));
SET64(6, RD(19) + RD(0));
SET64(7, RD(20) + RD(0));
SET64(31, 0x27f600); SET64(5, RD(29) + RD(0)); F_0029ABA0(c);
SET64(16, rd64(c, (RW(29) + 144)));
SET64(17, rd64(c, (RW(29) + 152)));
SET64(18, rd64(c, (RW(29) + 160)));
SET64(19, rd64(c, (RW(29) + 168)));
SET64(20, rd64(c, (RW(29) + 176)));
SET64(31, rd64(c, (RW(29) + 184)));
SET32(29, RW(29) + 192); return;
}

void F_0027F620(Ctx *c) { /* func_0027F620 */
ENTER(0x27f620);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(7) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27f644); SET64(18, RD(6) + RD(0)); F_0027E600(c);
SET64(16, RD(16) ^ 0x1);
SET64(31, rd64(c, (RW(29) + 24)));
SET64(5, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(6, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(7, RD(16) < (u64)(s64)1);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 32); { F_0029ABC0(c); return; }
}

void F_0027F670(Ctx *c) { /* func_0027F670 */
ENTER(0x27f670);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(7) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x27f694); SET64(18, RD(6) + RD(0)); F_0027E600(c);
SET64(4, RD(2) + RD(0));
SET64(5, RD(29) + RD(0));
SET32(6, RW(29) + 4);
SET64(31, 0x27f6a8); SET32(7, RW(29) + 8); F_0029ABD8(c);
SET64(2, (s32)rd32(c, (RW(29) + 8)));
SET64(5, (s32)rd32(c, (RW(29) + 4)));
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

void F_0027F6E0(Ctx *c) { /* func_0027F6E0 */
ENTER(0x27f6e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) & 0xff);
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) & 0xff);
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27f704); SET64(18, RD(7) & 0xff); F_0027E600(c);
SET64(31, rd64(c, (RW(29) + 24)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 32); { F_0029ABF0(c); return; }
}

void F_0027F730(Ctx *c) { /* func_0027F730 */
ENTER(0x27f730);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x27f754); SET64(18, RD(7) + RD(0)); F_0027E600(c);
SET64(31, rd64(c, (RW(29) + 24)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(7, RD(18) + RD(0));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 32); { F_0029AC30(c); return; }
}

void F_0027F780(Ctx *c) { /* MWSFD_MakeTblZ16 */
ENTER(0x27f780);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 152), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(18));
wr64(c, (RW(29) + 144), RD(16));
wr64(c, (RW(29) + 168), RD(31));
SET64(31, 0x27f7a0); SET64(18, RD(5) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 2600); if (t) goto L_0027F7C0; }
SET64(31, 0x27f7b4);  F_00281110(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_0027F80C;
L_0027F7C0:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_0027F7E0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27f7d8); SET32(4, RW(4) + 2648); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_0027F80C;
L_0027F7E0:;
SET64(31, 0x27f7e8); SET64(4, RD(17) + RD(0)); F_0027E600(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x27f7fc); SET64(16, RD(2) + RD(0)); F_0027E628(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x27f808); SET64(4, RD(16) + RD(0)); F_0029A480(c);
SET64(16, rd64(c, (RW(29) + 144)));
L_0027F80C:;
SET64(17, rd64(c, (RW(29) + 152)));
SET64(18, rd64(c, (RW(29) + 160)));
SET64(31, rd64(c, (RW(29) + 168)));
SET32(29, RW(29) + 176); return;
}

void F_0027F820(Ctx *c) { /* MWSFD_MakeTblZ32 */
ENTER(0x27f820);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 152), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 160), RD(18));
wr64(c, (RW(29) + 144), RD(16));
wr64(c, (RW(29) + 168), RD(31));
SET64(31, 0x27f840); SET64(18, RD(5) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 2696); if (t) goto L_0027F860; }
SET64(31, 0x27f854);  F_00281110(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_0027F8AC;
L_0027F860:;
SET64(2, (s32)rd32(c, (RW(18) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_0027F880; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27f878); SET32(4, RW(4) + 2744); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 144))); goto L_0027F8AC;
L_0027F880:;
SET64(31, 0x27f888); SET64(4, RD(17) + RD(0)); F_0027E600(c);
SET64(4, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(6, RD(29) + RD(0));
SET64(31, 0x27f89c); SET64(16, RD(2) + RD(0)); F_0027E628(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x27f8a8); SET64(4, RD(16) + RD(0)); F_0029A4F8(c);
SET64(16, rd64(c, (RW(29) + 144)));
L_0027F8AC:;
SET64(17, rd64(c, (RW(29) + 152)));
SET64(18, rd64(c, (RW(29) + 160)));
SET64(31, rd64(c, (RW(29) + 168)));
SET32(29, RW(29) + 176); return;
}

void F_0027F8C0(Ctx *c) { /* func_0027F8C0 */
ENTER(0x27f8c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AEA0(c); return; }
}

void F_0027F8D8(Ctx *c) { /* func_0027F8D8 */
ENTER(0x27f8d8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AF00(c); return; }
}

void F_0027F8F0(Ctx *c) { /* func_0027F8F0 */
ENTER(0x27f8f0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AEC0(c); return; }
}

void F_0027F908(Ctx *c) { /* func_0027F908 */
ENTER(0x27f908);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AEE0(c); return; }
}

void F_0027F920(Ctx *c) { /* func_0027F920 */
ENTER(0x27f920);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027F8D8(c); return; }
}

void F_0027F938(Ctx *c) { /* func_0027F938 */
ENTER(0x27f938);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AF20(c); return; }
}

void F_0027F950(Ctx *c) { /* func_0027F950 */
ENTER(0x27f950);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AF40(c); return; }
}

void F_0027F968(Ctx *c) { /* func_0027F968 */
ENTER(0x27f968);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AF60(c); return; }
}

void F_0027F980(Ctx *c) { /* func_0027F980 */
ENTER(0x27f980);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AF80(c); return; }
}

void F_0027F998(Ctx *c) { /* func_0027F998 */
ENTER(0x27f998);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AFA0(c); return; }
}

void F_0027F9B0(Ctx *c) { /* func_0027F9B0 */
ENTER(0x27f9b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AFC0(c); return; }
}

void F_0027F9C8(Ctx *c) { /* func_0027F9C8 */
ENTER(0x27f9c8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AFE0(c); return; }
}

void F_0027F9E0(Ctx *c) { /* func_0027F9E0 */
ENTER(0x27f9e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AC58(c); return; }
}

void F_0027F9F8(Ctx *c) { /* func_0027F9F8 */
ENTER(0x27f9f8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AC60(c); return; }
}

void F_0027FA10(Ctx *c) { /* func_0027FA10 */
ENTER(0x27fa10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AC68(c); return; }
}

void F_0027FA28(Ctx *c) { /* func_0027FA28 */
ENTER(0x27fa28);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 172)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AC70(c); return; }
}

void F_0027FA40(Ctx *c) { /* func_0027FA40 */
ENTER(0x27fa40);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029A968(c); return; }
}

void F_0027FA58(Ctx *c) { /* func_0027FA58 */
ENTER(0x27fa58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029A978(c); return; }
}

void F_0027FA70(Ctx *c) { /* func_0027FA70 */
ENTER(0x27fa70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27fa8c); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027FAB0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 2792);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027FAB0:;
SET64(31, 0x27fab8);  F_0027E600(c);
SET64(5, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029ADE8(c); return; }
}

void F_0027FAD8(Ctx *c) { /* func_0027FAD8 */
ENTER(0x27fad8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27faec); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027FB18; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27fb00); SET32(4, RW(4) + 2840); F_00281110(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_0027FB18:;
SET64(31, 0x27fb20);  F_0027E600(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0029AE40(c); return; }
}

void F_0027FB38(Ctx *c) { /* func_0027FB38 */
ENTER(0x27fb38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27fb4c); SET64(16, RD(5) + RD(0)); F_0027E600(c);
SET64(31, rd64(c, (RW(29) + 8)));
SET64(5, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET32(29, RW(29) + 16); { F_0029A9A8(c); return; }
}

void F_0027FB68(Ctx *c) { /* func_0027FB68 */
ENTER(0x27fb68);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(2, (s32)rd32(c, (RW(16) + 80)));
{ int t = RD(2) != RD(0);  if (t) goto L_0027FBAC; }
SET64(31, 0x27fb8c);  F_0027B2A0(c);
SET64(3, RD(2) + RD(0));
SET32(2, RW(0) + -1);
{ int t = RD(3) == RD(2); SET32(2, RW(0) + 17); if (t) goto L_0027FBA8; }
wr32(c, (RW(16) + 84), RW(3)); goto L_0027FBAC;
L_0027FBA8:;
wr32(c, (RW(16) + 84), RW(2));
L_0027FBAC:;
SET64(31, 0x27fbb4); SET64(4, RD(16) + RD(0)); F_0027E600(c);
SET64(5, (s32)rd32(c, (RW(16) + 84)));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(4, RD(2) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029A9C8(c); return; }
}

void F_0027FBD0(Ctx *c) { /* mwPlySetCnvBottomUp */
ENTER(0x27fbd0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27fbec); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027FC10; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 2888);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027FC10:;
SET64(31, 0x27fc18);  F_0027E600(c);
SET64(5, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0029AC78(c); return; }
}

void F_0027FC38(Ctx *c) { /* mwPlyGetCnvBottomUp */
ENTER(0x27fc38);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27fc4c); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027FC78; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x27fc60); SET32(4, RW(4) + 2944); F_00281110(c);
SET64(2, RD(0) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
L_0027FC78:;
SET64(31, 0x27fc80);  F_0027E600(c);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(4, RD(2) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_0029AC80(c); return; }
}

void F_0027FC98(Ctx *c) { /* func_0027FC98 */
ENTER(0x27fc98);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0029AE58(c); return; }
}

void F_0027FCB0(Ctx *c) { /* mwPlyEntryFname */
ENTER(0x27fcb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27fccc); SET64(17, RD(4) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 3000); if (t) goto L_0027FCF0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027FCF0:;
if (RD(16) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 76))); goto L_0027FD18; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 3048);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027FD18:;
SET64(31, 0x27fd20); SET64(5, RD(16) + RD(0)); F_00261BA0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
{ int t = RSD(2) >= 0; SET32(4, RW(4) + 3096); if (t) goto L_0027FD50; }
SET32(2, RW(0) + 4);
SET64(16, rd64(c, (RW(29) + 0)));
wr32(c, (RW(17) + 8), RW(2));
SET64(31, rd64(c, (RW(29) + 16)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027FD50:;
SET64(2, (s32)rd32(c, (RW(17) + 120)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(2, RW(2) + 1);
SET64(31, rd64(c, (RW(29) + 16)));
wr32(c, (RW(17) + 120), RW(2));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void F_0027FD70(Ctx *c) { /* mwPlyStartSeamless */
ENTER(0x27fd70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27fd84); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
SET32(5, RW(0) + 1);
{ int t = RD(2) != RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_0027FDA8; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 3144);
SET32(29, RW(29) + 16); { F_00281110(c); return; }
L_0027FDA8:;
SET64(31, 0x27fdb0);  F_002803D0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27fdbc); SET64(5, (s32)rd32(c, (RW(16) + 468))); F_0027C578(c);
SET64(31, 0x27fdc4); SET64(4, RD(16) + RD(0)); F_0027C8A8(c);
SET64(31, 0x27fdcc); SET64(4, (s32)rd32(c, (RW(16) + 76))); F_00261DA0(c);
SET64(2, (s32)rd32(c, (RW(16) + 464)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_0027FDE8; }
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(3, (s32)rd32(c, (RW(2) + 20)));
{ u32 t = RW(3); SET64(31, 0x27fde8);  rt_call(c, t); }
L_0027FDE8:;
SET64(4, RD(16) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_00278B20(c); return; }
}

void F_0027FE00(Ctx *c) { /* mwPlySetLpFlg */
ENTER(0x27fe00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27fe1c); SET64(17, RD(4) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 3200); if (t) goto L_0027FE40; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027FE40:;
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_002622F8(c); return; }
}

void F_0027FE58(Ctx *c) { /* mwPlyStartFnameLp */
ENTER(0x27fe58);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x27fe74); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 3248); if (t) goto L_0027FE98; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027FE98:;
{ int t = RD(17) != RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_0027FEC0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 3296);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_0027FEC0:;
SET64(31, 0x27fec8); SET64(4, RD(16) + RD(0)); F_0027C958(c);
SET64(31, 0x27fed0); SET64(4, (s32)rd32(c, (RW(16) + 76))); F_00261E08(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27fedc); SET64(5, (s32)rd32(c, (RW(16) + 440))); F_0027FCB0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x27fee8); SET32(5, RW(0) + 1); F_0027FE00(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_0027FD70(c); return; }
}

void F_0027FF00(Ctx *c) { /* mwPlyReleaseLp */
ENTER(0x27ff00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27ff14); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0027FF38; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 3344);
SET32(29, RW(29) + 16); { F_00281110(c); return; }
L_0027FF38:;
SET64(31, 0x27ff40);  F_0027FE00(c);
SET64(4, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_0027FF58(c); return; }
}

void F_0027FF58(Ctx *c) { /* mwPlyReleaseSeamless */
ENTER(0x27ff58);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x27ff6c); SET64(16, RD(4) + RD(0)); F_0027D6B0(c);
SET64(4, RD(16) + RD(0));
{ int t = RD(2) != RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_0027FF90; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 3392);
SET32(29, RW(29) + 16); { F_00281110(c); return; }
L_0027FF90:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); { F_002803D0(c); return; }
}

void F_0027FFA0(Ctx *c) { /* func_0027FFA0 */
ENTER(0x27ffa0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00261F60(c); return; }
}

static void B_0027FFB8(Ctx *c, u32 entry) { /* mwPlyEntryAfs */
ENTER(entry);
switch (entry) { case 0x280000: goto L_00280000; case 0x280014: goto L_00280014; case 0x280018: goto L_00280018; case 0x28001c: goto L_0028001C; case 0x280020: goto L_00280020; case 0x280024: goto L_00280024; case 0x28002c: goto L_0028002C; case 0x280030: goto L_00280030; case 0x280040: goto L_00280040; case 0x280054: goto L_00280054; case 0x280060: goto L_00280060; case 0x280068: goto L_00280068; case 0x280070: goto L_00280070; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 24), RD(17));
SET64(17, RD(4) + RD(0));
wr64(c, (RW(29) + 32), RD(18));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x27ffdc); SET64(18, RD(6) + RD(0)); F_0027D6B0(c);
SET64(7, RD(29) + RD(0));
SET32(8, RW(29) + 4);
SET64(4, RD(16) + RD(0));
SET64(5, RD(18) + RD(0));
{ int t = RD(2) != RD(0); SET32(9, RW(29) + 8); if (t) goto L_00280008; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280000); SET32(4, RW(4) + 3448); F_00281110(c);
L_00280000:;
SET64(16, rd64(c, (RW(29) + 16))); goto L_00280060;
L_00280008:;
SET64(6, (s32)rd32(c, (RW(17) + 440)));
SET64(31, 0x280014); SET64(17, (s32)rd32(c, (RW(17) + 76))); F_0024B8D8(c);
L_00280014:;
SET64(4, RD(16) + RD(0));
L_00280018:;
SET64(5, RD(16) + RD(0));
L_0028001C:;
{ int t = RD(2) != RD(0); SET64(6, RD(18) + RD(0)); if (t) goto L_00280050; }
if (0) { L_00280020:; SET64(6, RD(18) + RD(0)); }
L_00280024:;
SET64(31, 0x28002c);  F_0024BAB8(c);
L_0028002C:;
SET64(4, RD(17) + RD(0));
L_00280030:;
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET64(5, RD(2) + RD(0));
SET64(7, (s32)rd32(c, (RW(29) + 4)));
SET64(31, 0x280044); SET64(8, (s32)rd32(c, (RW(29) + 8))); F_00261BC8(c);
if (0) { L_00280040:; SET64(8, (s32)rd32(c, (RW(29) + 8))); }
SET64(16, rd64(c, (RW(29) + 16))); goto L_00280060;
L_00280050:;
SET64(4, (s64)(s32)0x4b0000);
L_00280054:;
SET64(31, 0x28005c); SET32(4, RW(4) + 3496); F_00281110(c);
SET64(16, rd64(c, (RW(29) + 16)));
L_00280060:;
SET64(17, rd64(c, (RW(29) + 24)));
SET64(18, rd64(c, (RW(29) + 32)));
L_00280068:;
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
if (0) { L_00280070:; SET32(29, RW(29) + 48); }
}
void F_0027FFB8(Ctx *c) { B_0027FFB8(c, 0x27ffb8); }
void F_00280000(Ctx *c) { B_0027FFB8(c, 0x280000); }
void F_00280014(Ctx *c) { B_0027FFB8(c, 0x280014); }
void F_00280018(Ctx *c) { B_0027FFB8(c, 0x280018); }
void F_0028001C(Ctx *c) { B_0027FFB8(c, 0x28001c); }
void F_00280020(Ctx *c) { B_0027FFB8(c, 0x280020); }
void F_00280024(Ctx *c) { B_0027FFB8(c, 0x280024); }
void F_0028002C(Ctx *c) { B_0027FFB8(c, 0x28002c); }
void F_00280030(Ctx *c) { B_0027FFB8(c, 0x280030); }
void F_00280040(Ctx *c) { B_0027FFB8(c, 0x280040); }
void F_00280054(Ctx *c) { B_0027FFB8(c, 0x280054); }
void F_00280060(Ctx *c) { B_0027FFB8(c, 0x280060); }
void F_00280068(Ctx *c) { B_0027FFB8(c, 0x280068); }
void F_00280070(Ctx *c) { B_0027FFB8(c, 0x280070); }

static void B_00280078(Ctx *c, u32 entry) { /* mwPlyStartAfsLp */
ENTER(entry);
switch (entry) { case 0x280090: goto L_00280090; }
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
L_00280090:;
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x28009c); SET64(18, RD(6) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(31, rd64(c, (RW(29) + 24))); if (t) goto L_002800C0; }
SET64(4, (s64)(s32)0x4b0000);
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(4, RW(4) + 3552);
SET64(18, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_002800C0:;
SET64(31, 0x2800c8); SET64(4, (s32)rd32(c, (RW(16) + 76))); F_00261E08(c);
SET64(4, RD(16) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2800d8); SET64(5, RD(17) + RD(0)); F_0027FFB8(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2800e4); SET32(5, RW(0) + 1); F_0027FE00(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); { F_0027FD70(c); return; }
}
void F_00280078(Ctx *c) { B_00280078(c, 0x280078); }
void F_00280090(Ctx *c) { B_00280078(c, 0x280090); }

void F_00280100(Ctx *c) { /* mwPlyEntryFnameRange */
ENTER(0x280100);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(6) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(7) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x28012c); SET64(19, RD(4) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
SET64(5, RD(16) + RD(0));
SET32(4, RW(4) + 3600);
SET64(7, RD(17) + RD(0));
SET64(8, RD(18) + RD(0));
{ int t = RD(2) != RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_00280168; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00281110(c); return; }
L_00280168:;
SET64(4, (s32)rd32(c, (RW(19) + 76)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00261BC8(c); return; }
}

static void B_00280188(Ctx *c, u32 entry) { /* mwPlyStartFnameRangeLp */
ENTER(entry);
switch (entry) { case 0x280210: goto L_00280210; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
SET64(18, RD(6) + RD(0));
wr64(c, (RW(29) + 24), RD(19));
wr64(c, (RW(29) + 32), RD(31));
SET64(31, 0x2801b4); SET64(19, RD(7) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 3656); if (t) goto L_002801E0; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_00281110(c); return; }
L_002801E0:;
SET64(31, 0x2801e8); SET64(4, (s32)rd32(c, (RW(16) + 76))); F_00261E08(c);
SET64(4, RD(16) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(19) + RD(0));
SET64(31, 0x2801fc); SET64(5, RD(17) + RD(0)); F_00280100(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x280208); SET32(5, RW(0) + 1); F_0027FE00(c);
SET64(4, RD(16) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
L_00280210:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); { F_0027FD70(c); return; }
}
void F_00280188(Ctx *c) { B_00280188(c, 0x280188); }
void F_00280210(Ctx *c) { B_00280188(c, 0x280210); }

void F_00280228(Ctx *c) { /* mwPlyGetSlFname */
ENTER(0x280228);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280244); SET64(17, RD(4) + RD(0)); F_0027D6B0(c);
{ int t = RD(2) != RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_00280260; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280258); SET32(4, RW(4) + 3712); F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_002802B8;
L_00280260:;
SET64(31, 0x280268);  F_0027FFA0(c);
SET64(3, RSD(16) < RSD(2));
{ int t = RD(3) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002802B8; }
{ int t = RSD(16) >= 0; SET64(5, RD(16) + RD(0)); if (t) goto L_00280290; }
SET64(4, (s64)(s32)0x4b0000);
SET64(31, 0x280288); SET32(4, RW(4) + 3760); F_00281110(c);
SET64(2, RD(0) + RD(0)); goto L_002802B8;
L_00280290:;
SET64(31, 0x280298); SET64(4, RD(17) + RD(0)); F_002802E8(c);
SET64(4, RD(17) + RD(0));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(5, RD(2) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00280300(c); return; }
L_002802B8:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002802D0(Ctx *c) { /* func_002802D0 */
ENTER(0x2802d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00261F30(c); return; }
}

void F_002802E8(Ctx *c) { /* func_002802E8 */
ENTER(0x2802e8);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00261F90(c); return; }
}

void F_00280300(Ctx *c) { /* func_00280300 */
ENTER(0x280300);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00262020(c); return; }
}

void F_00280318(Ctx *c) { /* func_00280318 */
ENTER(0x280318);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002620B8(c); return; }
}

void F_00280330(Ctx *c) { /* func_00280330 */
ENTER(0x280330);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_00262150(c); return; }
}

void F_00280348(Ctx *c) { /* func_00280348 */
ENTER(0x280348);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x280358);  F_00261F30(c);
SET64(2, RD(2) ^ 0x3);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) < (u64)(s64)1);
SET32(29, RW(29) + 16); return;
}

void F_00280370(Ctx *c) { /* func_00280370 */
ENTER(0x280370);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(4) + 76)));
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_00280390; }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002621E8(c); return; }
L_00280390:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002803A0(Ctx *c) { /* func_002803A0 */
ENTER(0x2803a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(5) + RD(0));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2803b8); SET64(4, (s32)rd32(c, (RW(4) + 76))); F_00262250(c);
wr32(c, (RW(16) + 0), RW(2));
SET64(31, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002803D0(Ctx *c) { /* mwPlyLinkStm */
ENTER(0x2803d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2803ec); SET64(17, RD(5) + RD(0)); F_0027D6B0(c);
SET64(4, (s64)(s32)0x4b0000);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 3800); if (t) goto L_00280410; }
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); { F_00281110(c); return; }
L_00280410:;
SET64(2, (s8)rd8(c, (RW(16) + 116)));
{ int t = RD(2) != RD(3); SET64(4, (s32)rd32(c, (RW(16) + 64))); if (t) goto L_00280428; }
if (RD(17) == RD(0)) { wr8(c, (RW(16) + 117), (u8)RW(2)); goto L_00280424; }
L_00280424:;
SET64(2, (s8)rd8(c, (RW(16) + 116)));
L_00280428:;
if (RD(2) != RD(0)) { wr8(c, (RW(16) + 116), (u8)RW(17)); goto L_0028045C; }
SET32(2, RW(0) + 1);
if (RD(17) != RD(2)) { wr8(c, (RW(16) + 116), (u8)RW(17)); goto L_0028045C; }
SET64(31, 0x280444);  F_00285AD8(c);
SET64(4, (s64)(s32)0x4b0000);
{ int t = RD(2) == RD(0); SET32(4, RW(4) + 3848); if (t) goto L_00280458; }
SET64(31, 0x280458);  F_00281110(c);
L_00280458:;
wr8(c, (RW(16) + 116), (u8)RW(17));
L_0028045C:;
SET64(31, rd64(c, (RW(29) + 16)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(17, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 32); return;
}

void F_00280470(Ctx *c) { /* func_00280470 */
ENTER(0x280470);
SET32(29, RW(29) + -48);
SET64(2, RD(5) + RD(0));
SET32(7, RW(6) + 2047);
SET64(6, RD(2) + RD(0));
SET64(5, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 32), RD(16));
SET32(7, RW(7) >> 11);
SET32(5, RW(5) + 3896);
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 40), RD(31));
SET64(31, 0x2804a0); SET64(4, RD(29) + RD(0)); F_00129C30(c);
SET64(5, RD(29) + RD(0));
SET64(31, 0x2804ac); SET64(4, RD(16) + RD(0)); F_0027FE58(c);
SET64(5, RD(0) + RD(0));
SET64(4, RD(29) + RD(0));
SET64(31, 0x2804bc); SET32(6, RW(0) + 20); F_001273D0(c);
SET64(16, rd64(c, (RW(29) + 32)));
SET64(31, rd64(c, (RW(29) + 40)));
SET32(29, RW(29) + 48); return;
}

void F_002804D0(Ctx *c) { /* func_002804D0 */
ENTER(0x2804d0);
SET32(29, RW(29) + -32);
SET64(4, RD(29) + RD(0));
SET32(5, RW(29) + 4);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2804e8); SET32(6, RW(29) + 8); F_00280548(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

static void B_002804F8(Ctx *c, u32 entry) { /* func_002804F8 */
ENTER(entry);
switch (entry) { case 0x280500: goto L_00280500; }
SET32(29, RW(29) + -32);
SET64(4, RD(29) + RD(0));
L_00280500:;
SET32(5, RW(29) + 4);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280510); SET32(6, RW(29) + 8); F_00280548(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}
void F_002804F8(Ctx *c) { B_002804F8(c, 0x2804f8); }
void F_00280500(Ctx *c) { B_002804F8(c, 0x280500); }

void F_00280520(Ctx *c) { /* func_00280520 */
ENTER(0x280520);
SET32(29, RW(29) + -32);
SET64(4, RD(29) + RD(0));
SET32(5, RW(29) + 4);
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x280538); SET32(6, RW(29) + 8); F_00280578(c);
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_00280548(Ctx *c) { /* func_00280548 */
ENTER(0x280548);
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

void F_00280578(Ctx *c) { /* func_00280578 */
ENTER(0x280578);
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

void F_002805B0(Ctx *c) { /* func_002805B0 */
ENTER(0x2805b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); { F_002805C8(c); return; }
}

void F_002805C8(Ctx *c) { /* func_002805C8 */
ENTER(0x2805c8);
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
SET64(31, 0x28060c); SET32(5, RW(5) + 192); F_00287D88(c);
SET64(4, RD(17) + RD(0));
SET32(5, RW(19) + 192);
SET64(6, RD(18) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x280624); SET64(8, RD(0) + RD(0)); F_00287D88(c);
wr32(c, (RW(16) + 16), RW(19));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(16, rd64(c, (RW(29) + 0)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(19, rd64(c, (RW(29) + 24)));
SET64(31, rd64(c, (RW(29) + 32)));
SET32(29, RW(29) + 48); return;
}

void F_00280648(Ctx *c) { /* func_00280648 */
ENTER(0x280648);
SET64(2, (s32)rd32(c, (RW(4) + 672))); return;
}

void F_00280650(Ctx *c) { /* func_00280650 */
ENTER(0x280650);
SET64(2, (s32)rd32(c, (RW(4) + 680))); return;
}

void F_00280658(Ctx *c) { /* func_00280658 */
ENTER(0x280658);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28066c);  F_00280D48(c);
SET64(31, 0x280674); SET64(16, RD(2) + RD(0)); F_00280D58(c);
SET64(3, RD(2) + RD(0));
if (RD(3) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002806B0; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
if (RD(2) != RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_002806B0; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
if (RD(3) == RD(0)) { SET32(2, RW(2) + 1); goto L_002806A8; }
{ u32 t = RW(3); SET64(31, 0x2806a0);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET32(2, RW(2) + 1);
L_002806A8:;
wr32(c, (RW(16) + 4), RW(2));
SET64(16, rd64(c, (RW(29) + 0)));
L_002806B0:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_002806C0(Ctx *c) { /* func_002806C0 */
ENTER(0x2806c0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2806d4);  F_00280D48(c);
SET64(31, 0x2806dc); SET64(16, RD(2) + RD(0)); F_00280D58(c);
SET64(4, RD(2) + RD(0));
if (RD(4) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00280714; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(2) == RD(0); SET32(3, RW(2) + -1); if (t) goto L_00280710; }
{ int t = RD(3) != RD(0); wr32(c, (RW(16) + 4), RW(3)); if (t) goto L_00280710; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00280714; }
{ u32 t = RW(2); SET64(31, 0x280710);  rt_call(c, t); }
L_00280710:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00280714:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00280720(Ctx *c) { /* func_00280720 */
ENTER(0x280720);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
SET64(17, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(18));
wr64(c, (RW(29) + 24), RD(31));
SET64(31, 0x280744); SET64(18, RD(6) + RD(0)); F_00280D58(c);
{ int t = RD(2) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_00280768; }
SET64(2, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_00280768; }
SET64(5, RD(17) + RD(0));
{ u32 t = RW(2); SET64(31, 0x280764); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) + RD(0));
L_00280768:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(3) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(18, rd64(c, (RW(29) + 16)));
SET64(31, rd64(c, (RW(29) + 24)));
SET32(29, RW(29) + 32); return;
}

void F_00280788(Ctx *c) { /* func_00280788 */
ENTER(0x280788);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(16));
SET64(16, RD(4) + RD(0));
wr64(c, (RW(29) + 8), RD(17));
wr64(c, (RW(29) + 16), RD(31));
SET64(31, 0x2807a4); SET64(17, RD(5) + RD(0)); F_00280D58(c);
{ int t = RD(2) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_002807C4; }
SET64(2, (s32)rd32(c, (RW(2) + 12)));
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002807C4; }
{ u32 t = RW(2); SET64(31, 0x2807c0); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, RD(2) + RD(0));
L_002807C4:;
SET64(16, rd64(c, (RW(29) + 0)));
SET64(2, RD(3) + RD(0));
SET64(17, rd64(c, (RW(29) + 8)));
SET64(31, rd64(c, (RW(29) + 16)));
SET32(29, RW(29) + 32); return;
}

void F_002807E0(Ctx *c) { /* func_002807E0 */
ENTER(0x2807e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x2807f4); SET64(16, RD(4) + RD(0)); F_00280D58(c);
if (RD(16) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028081C; }
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028081C; }
SET64(2, (s32)rd32(c, (RW(2) + 16)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_0028081C; }
{ u32 t = RW(2); SET64(31, 0x280818); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(16, rd64(c, (RW(29) + 0)));
L_0028081C:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

void F_00280828(Ctx *c) { /* func_00280828 */
ENTER(0x280828);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(16));
wr64(c, (RW(29) + 8), RD(31));
SET64(31, 0x28083c); SET64(16, RD(4) + RD(0)); F_00280D78(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00280874; }
SET64(31, 0x280850);  F_00280D58(c);
SET64(5, (s32)rd32(c, (RW(16) + 12)));
{ int t = RD(2) == RD(0); SET64(4, (s32)rd32(c, (RW(16) + 20))); if (t) goto L_00280870; }
SET64(2, (s32)rd32(c, (RW(2) + 20)));
if (RD(2) == RD(0)) { SET64(16, rd64(c, (RW(29) + 0))); goto L_00280874; }
{ u32 t = RW(2); SET64(31, 0x280870);  rt_call(c, t); }
L_00280870:;
SET64(16, rd64(c, (RW(29) + 0)));
L_00280874:;
SET64(31, rd64(c, (RW(29) + 8)));
SET32(29, RW(29) + 16); return;
}

