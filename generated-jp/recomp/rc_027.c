#include "r5900.h"
#include "functab.h"

void JP_F_002BCDB0(Ctx *c) { /* func_002BCDB0 */
ENTER(0x2bcdb0);
SET64(7, rd16(c, (RW(4) + 294)));
SET32(3, RW(0) + 8);
{ int t = RD(7) == RD(3);  if (t) goto L_002BCDE0; }
SET64(3, RD(6) & 0xffff);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET32(4, RW(3) + 428);
SET64(3, (s32)rd32(c, (RW(3) + 428)));
{ int t = RD(3) == RD(5);  if (t) goto L_002BCDE0; }
wr32(c, (RW(4) + 0), RW(5));
L_002BCDE0:;
 return;
}

void JP_F_002BCDF0(Ctx *c) { /* func_002BCDF0 */
ENTER(0x2bcdf0);
SET32(29, RW(29) + -160);
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
SET64(31, 0x2bce24); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00165AB0(c);
SET64(30, RD(2) & 0xff);
SET64(2, rd16(c, (RW(21) + 418)));
if (RD(2) == RD(0)) { SET64(2, RD(30) + RD(0)); goto L_002BD004; }
SET64(2, RD(30) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002BD000; }
SET64(2, rd8(c, (RW(21) + 416)));
{ int t = RD(2) != RD(0);  if (t) goto L_002BD000; }
SET64(2, rd16(c, (RW(21) + 418)));
{ int t = RSD(2) <= 0; SET64(23, RD(0) + RD(0)); if (t) goto L_002BCFF8; }
SET64(18, RD(23) & 0xffff);
L_002BCE5C:;
SET64(2, rd16(c, (RW(21) + 290)));
SET32(3, RW(18) << 2);
SET32(3, RW(21) + RW(3));
SET64(20, (s32)rd32(c, (RW(3) + 420)));
{ int t = RSD(2) <= 0; SET64(22, RD(0) + RD(0)); if (t) goto L_002BCF88; }
L_002BCE78:;
SET64(2, rd16(c, (RW(21) + 288)));
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002BCF70; }
SET64(17, RD(22) & 0xffff);
L_002BCE88:;
SET64(31, 0x2bce90); SET64(4, RD(20) + RD(0)); JP_F_002BC1B0(c);
SET64(3, rd16(c, (RW(21) + 288)));
SET64(16, RD(19) & 0xffff);
SET64(2, (s32)rd32(c, (RW(21) + 300)));
mul_s(c, 0, 3, RSW(17), RSW(3));
SET32(4, RW(16) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 320)));
{ int t = RD(4) == RD(0); SET64(5, (s32)rd32(c, (RW(20) + 4))); if (t) goto L_002BCED8; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2bced8); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
L_002BCED8:;
SET64(31, 0x2bcee0); SET64(4, RD(20) + RD(0)); JP_F_002BC1B0(c);
SET64(3, rd16(c, (RW(21) + 288)));
SET64(4, (s32)rd32(c, (RW(20) + 8)));
SET64(2, (s32)rd32(c, (RW(21) + 300)));
mul_s(c, 0, 3, RSW(17), RSW(3));
SET32(5, RW(4) + 1280);
SET32(4, RW(16) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 320)));
{ int t = RD(4) == RD(0);  if (t) goto L_002BCF28; }
SET64(31, 0x2bcf24); SET64(6, RD(18) + RD(0)); JP_F_001F0F20(c);
L_002BCF28:;
SET64(3, rd16(c, (RW(21) + 288)));
SET64(2, (s32)rd32(c, (RW(21) + 300)));
SET32(5, RW(0) + 1);
SET64(6, RD(18) + RD(0));
mul_s(c, 0, 3, RSW(17), RSW(3));
SET32(4, RW(16) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET64(31, 0x2bcf5c); SET32(4, RW(2) + RW(3)); JP_F_0016CA30(c);
SET64(2, rd16(c, (RW(21) + 288)));
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002BCE88; } }
L_002BCF70:;
SET64(2, rd16(c, (RW(21) + 290)));
SET32(22, RW(22) + 1);
SET64(2, RSD(22) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002BCE78; } }
L_002BCF88:;
SET64(2, (s32)rd32(c, (RW(21) + 388)));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002BCFE0; }
SET64(31, 0x2bcfa0); SET64(4, RD(20) + RD(0)); JP_F_002BC1B0(c);
SET64(4, (s32)rd32(c, (RW(21) + 388)));
SET64(16, RD(23) & 0xffff);
SET64(5, (s32)rd32(c, (RW(20) + 4)));
SET64(31, 0x2bcfb4); SET64(6, RD(16) + RD(0)); JP_F_0016C260(c);
SET64(31, 0x2bcfbc); SET64(4, RD(20) + RD(0)); JP_F_002BC1B0(c);
SET64(2, (s32)rd32(c, (RW(20) + 8)));
SET64(6, RD(16) + RD(0));
SET64(4, (s32)rd32(c, (RW(21) + 388)));
SET64(31, 0x2bcfd0); SET32(5, RW(2) + 1280); JP_F_0016C230(c);
SET64(4, (s32)rd32(c, (RW(21) + 388)));
SET64(6, RD(16) + RD(0));
SET64(31, 0x2bcfe0); SET32(5, RW(0) + 1); JP_F_0016C200(c);
L_002BCFE0:;
SET32(2, RW(23) + 1);
SET64(23, RD(2) & 0xffff);
SET64(2, rd16(c, (RW(21) + 418)));
SET64(2, RSD(23) < RSD(2));
if (RD(2) != RD(0)) { SET64(18, RD(23) & 0xffff); { POLL(); goto L_002BCE5C; } }
L_002BCFF8:;
SET32(2, RW(0) + 1);
wr8(c, (RW(21) + 416), (u8)RW(2));
L_002BD000:;
SET64(2, RD(30) + RD(0));
L_002BD004:;
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
SET32(29, RW(29) + 160); return;
}

void JP_F_002BD040(Ctx *c) { /* func_002BD040 */
ENTER(0x2bd040);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(6) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(7) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
wr16(c, (RW(4) + 418), (u16)RW(5));
SET64(3, rd16(c, (RW(4) + 418)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_002BD108; }
SET64(2, (s64)(s32)0x4c0000);
c->f[20].u = rd32(c, (RW(2) + -7568));
L_002BD088:;
SET64(31, 0x2bd090); SET32(4, RW(0) + 24); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002BD0A0; }
SET64(31, 0x2bd0a0); SET64(4, RD(17) + RD(0)); JP_F_002BC2B0(c);
L_002BD0A0:;
SET64(2, RD(18) & 0xffff);
SET32(2, RW(2) << 2);
SET64(4, RD(17) + RD(0));
SET32(16, RW(21) + RW(2));
SET64(5, RD(20) + RD(0));
wr32(c, (RW(16) + 420), RW(17));
SET64(6, RD(19) + RD(0));
SET32(7, RW(0) + 4096);
SET64(31, 0x2bd0c8); SET32(17, RW(16) + 420); JP_F_002BBE70(c);
SET64(17, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2bd0d4); SET64(4, RD(17) + RD(0)); JP_F_002BC1B0(c);
SET64(2, (s64)(s32)0x3acd0000);
SET64(2, RD(2) | 0xe32f);
c->f[12].u = RW(2);
SET64(31, 0x2bd0e8); SET64(4, (s32)rd32(c, (RW(17) + 8))); JP_F_00162D00(c);
SET32(3, RW(18) + 1);
wr32(c, (RW(16) + 436), c->f[20].u);
SET64(18, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(21) + 418)));
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002BD088; } }
L_002BD108:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 132), RW(0));
wr32(c, (RW(29) + 140), RW(3));
wr32(c, (RW(29) + 136), RW(0));
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
wr128(c, (RW(21) + 448) & ~15u, &c->r[3]);
wr8(c, (RW(21) + 416), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 112)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002BD150(Ctx *c) { /* func_002BD150 */
ENTER(0x2bd150);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bd160);  JP_F_0016C0A0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BD170(Ctx *c) { /* func_002BD170 */
ENTER(0x2bd170);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bd180);  JP_F_0016C140(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BD190(Ctx *c) { /* func_002BD190 */
ENTER(0x2bd190);
SET64(2, rd16(c, (RW(4) + 418)));
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_002BD1A0(Ctx *c) { /* func_002BD1A0 */
ENTER(0x2bd1a0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(0) + RD(0));
L_002BD1C0:;
SET64(3, RD(16) & 0xffff);
SET32(3, RW(3) << 2);
SET32(19, RW(17) + RW(3));
SET64(4, (s32)rd32(c, (RW(19) + 420)));
{ int t = RD(4) == RD(0); SET32(18, RW(19) + 420); if (t) goto L_002BD1E8; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bd1e8); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002BD1E8:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
wr32(c, (RW(18) + 0), RW(0));
SET64(3, RSD(16) < (s64)2);
{ int t = RD(3) != RD(0); wr32(c, (RW(19) + 428), RW(0)); if (t) { POLL(); goto L_002BD1C0; } }
wr16(c, (RW(17) + 418), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002BD220(Ctx *c) { /* func_002BD220 */
ENTER(0x2bd220);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2bd238); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(31, 0x2bd240); SET32(4, RW(16) + 64); JP_F_00243A30(c);
SET64(31, 0x2bd248); SET32(4, RW(16) + 224); JP_F_00141C80(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 1856);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + 1864);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 1876);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 36), RW(2));
SET32(3, RW(3) + 1936);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 208), RW(3));
SET32(2, RW(2) + 1960);
SET64(7, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 240), RW(2));
SET64(6, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 244), RW(0));
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 248), RW(0));
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 252), RW(0));
SET64(9, RD(0) | 0xffff);
wr32(c, (RW(16) + 256), RW(0));
SET32(8, RW(8) + 8784);
wr32(c, (RW(16) + 260), RW(0));
SET32(7, RW(7) + 8792);
wr16(c, (RW(16) + 264), (u16)RW(0));
SET32(6, RW(6) + 8804);
wr16(c, (RW(16) + 266), (u16)RW(0));
SET32(5, RW(5) + 8864);
wr16(c, (RW(16) + 268), (u16)RW(0));
SET32(4, RW(4) + 8888);
wr8(c, (RW(16) + 270), (u8)RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr8(c, (RW(16) + 271), (u8)RW(0));
SET64(2, RD(16) + RD(0));
wr8(c, (RW(16) + 272), (u8)RW(0));
wr32(c, (RW(16) + 276), RW(0));
wr32(c, (RW(16) + 280), RW(0));
wr32(c, (RW(16) + 284), RW(0));
wr16(c, (RW(16) + 288), (u16)RW(0));
wr16(c, (RW(16) + 290), (u16)RW(0));
wr16(c, (RW(16) + 292), (u16)RW(0));
wr16(c, (RW(16) + 294), (u16)RW(9));
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
wr32(c, (RW(16) + 56), RW(8));
wr32(c, (RW(16) + 20), RW(7));
wr32(c, (RW(16) + 36), RW(6));
wr32(c, (RW(16) + 208), RW(5));
wr32(c, (RW(16) + 240), RW(4));
wr8(c, (RW(16) + 416), (u8)RW(0));
wr16(c, (RW(16) + 418), (u16)RW(0));
wr32(c, (RW(16) + 448), RW(0));
wr32(c, (RW(16) + 452), RW(0));
wr32(c, (RW(16) + 456), RW(0));
wr32(c, (RW(16) + 460), RW(3));
wr32(c, (RW(16) + 420), RW(0));
wr32(c, (RW(16) + 428), RW(0));
wr32(c, (RW(16) + 436), RW(3));
wr32(c, (RW(16) + 424), RW(0));
wr32(c, (RW(16) + 432), RW(0));
wr32(c, (RW(16) + 440), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BD3E0(Ctx *c) { /* func_002BD3E0 */
ENTER(0x2bd3e0);
SET32(4, RW(4) + -4); { JP_F_002421F0(c); return; }
}

void JP_F_002BD3F0(Ctx *c) { /* func_002BD3F0 */
ENTER(0x2bd3f0);
SET32(4, RW(4) + -24); { JP_F_002421F0(c); return; }
}

void JP_F_002BD400(Ctx *c) { /* func_002BD400 */
ENTER(0x2bd400);
SET32(4, RW(4) + -64); { JP_F_002421F0(c); return; }
}

void JP_F_002BD410(Ctx *c) { /* func_002BD410 */
ENTER(0x2bd410);
SET32(4, RW(4) + -224); { JP_F_002BCA50(c); return; }
}

void JP_F_002BD420(Ctx *c) { /* func_002BD420 */
ENTER(0x2bd420);
SET32(4, RW(4) + -224); { JP_F_002BD1A0(c); return; }
}

void JP_F_002BD430(Ctx *c) { /* func_002BD430 */
ENTER(0x2bd430);
SET32(4, RW(4) + -224); { JP_F_002421F0(c); return; }
}

void JP_F_002BD440(Ctx *c) { /* func_002BD440 */
ENTER(0x2bd440);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
rd128(c, (RW(3) + 192) & ~15u, &c->r[3]);
SET64(5, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(5));
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]); return;
}

void JP_F_002BD470(Ctx *c) { /* func_002BD470 */
ENTER(0x2bd470);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(31));
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
wr128(c, (RW(2) + 192) & ~15u, &c->r[3]);
SET64(31, 0x2bd48c); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_0014DFC0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002BD4A0(Ctx *c) { /* func_002BD4A0 */
ENTER(0x2bd4a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET64(3, rd8(c, (RW(3) + 8)));
{ int t = RD(3) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BD4E4; }
SET64(25, (s32)rd32(c, (RW(17) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2bd4d8); SET32(4, RW(17) + 16); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2bd4e4); SET64(5, RD(16) + RD(0)); JP_F_0014DED0(c);
L_002BD4E4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BD500(Ctx *c) { /* func_002BD500 */
ENTER(0x2bd500);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(31, 0x2bd524); SET64(16, RD(5) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002BD59C; }
SET64(4, (s32)rd32(c, (RW(17) + 12)));
{ int t = RD(4) == RD(0);  if (t) goto L_002BD554; }
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002BD548; }
SET64(5, (s32)rd32(c, (RW(17) + 8)));
L_002BD548:;
SET64(31, 0x2bd550);  JP_F_00243880(c);
wr32(c, (RW(17) + 12), RW(0));
L_002BD554:;
{ int t = RD(16) == RD(0);  if (t) goto L_002BD564; }
SET64(5, RD(17) + RD(0)); goto L_002BD574;
L_002BD564:;
SET64(31, 0x2bd56c);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(5, RD(17) + RD(0));
L_002BD574:;
if (RD(17) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002BD584; }
SET64(5, (s32)rd32(c, (RW(17) + 8)));
SET64(4, RD(16) + RD(0));
L_002BD584:;
SET64(31, 0x2bd58c);  JP_F_002A6160(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2bd598); SET64(5, RD(16) + RD(0)); JP_F_001535F0(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_002BD59C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BD5B0(Ctx *c) { /* func_002BD5B0 */
ENTER(0x2bd5b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(6) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BD5D8; }
wr32(c, (RW(17) + 12), RW(6)); goto L_002BD5E4;
L_002BD5D8:;
SET64(6, (s64)(s32)0x540000);
SET32(6, RW(6) + 1264);
wr32(c, (RW(17) + 12), RW(6));
L_002BD5E4:;
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002BD5F0; }
SET64(5, (s32)rd32(c, (RW(17) + 8)));
L_002BD5F0:;
SET64(31, 0x2bd5f8); SET64(4, (s32)rd32(c, (RW(17) + 12))); JP_F_002438D0(c);
{ int t = RD(16) == RD(0);  if (t) goto L_002BD608; }
SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_002BD618;
L_002BD608:;
SET64(31, 0x2bd610);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_002BD618:;
SET32(2, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET64(3, (s32)rd32(c, (RW(3) + 4)));
if (RD(3) == RD(2)) { SET64(18, RD(17) + RD(0)); goto L_002BD6A8; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(18, RD(17) + RD(0)); goto L_002BD678; }
if (RD(3) == RD(0)) { SET64(18, RD(17) + RD(0)); goto L_002BD648; }
SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002BD6D4;
L_002BD648:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_002BD658; }
SET64(18, (s32)rd32(c, (RW(17) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_002BD658:;
SET64(31, 0x2bd660); SET32(5, RW(0) + 1); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2bd670); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
 goto L_002BD6D0;
L_002BD678:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_002BD688; }
SET64(18, (s32)rd32(c, (RW(17) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_002BD688:;
SET64(31, 0x2bd690); SET32(5, RW(0) + 2); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2bd6a0); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
 goto L_002BD6D0;
L_002BD6A8:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_002BD6B8; }
SET64(18, (s32)rd32(c, (RW(17) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_002BD6B8:;
SET64(31, 0x2bd6c0); SET64(5, RD(0) + RD(0)); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2bd6d0); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
L_002BD6D0:;
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002BD6D4:;
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2bd6e0); SET64(5, RD(16) + RD(0)); JP_F_00153640(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BD700(Ctx *c) { /* func_002BD700 */
ENTER(0x2bd700);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(31, 0x2bd71c); SET64(5, RD(0) + RD(0)); JP_F_002437E0(c);
SET64(31, 0x2bd724); SET64(4, (s32)rd32(c, (RW(16) + 0))); JP_F_0014E9E0(c);
SET64(31, 0x2bd72c); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00154240(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BD740(Ctx *c) { /* func_002BD740 */
ENTER(0x2bd740);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2bd758); SET64(4, (s32)rd32(c, (RW(4) + 0))); JP_F_0014E3D0(c);
SET64(31, 0x2bd760); SET32(4, RW(16) + 16); JP_F_001EC380(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BD770(Ctx *c) { /* func_002BD770 */
ENTER(0x2bd770);
SET64(25, (s32)rd32(c, (RW(4) + 148)));
SET32(4, RW(4) + -304);
SET32(4, RW(4) + RW(25)); { JP_F_001C7340(c); return; }
}

void JP_F_002BD780(Ctx *c) { /* func_002BD780 */
ENTER(0x2bd780);
SET64(25, (s32)rd32(c, (RW(4) + 356)));
SET32(4, RW(4) + -96);
SET32(4, RW(4) + RW(25)); { JP_F_002BD700(c); return; }
}

void JP_F_002BD790(Ctx *c) { /* func_002BD790 */
ENTER(0x2bd790);
SET64(25, (s32)rd32(c, (RW(4) + 356)));
SET32(4, RW(4) + -96);
SET32(4, RW(4) + RW(25)); { JP_F_002BD740(c); return; }
}

void JP_F_002BD7A0(Ctx *c) { /* func_002BD7A0 */
ENTER(0x2bd7a0);
SET64(25, (s32)rd32(c, (RW(4) + 356)));
SET32(4, RW(4) + -96);
SET32(4, RW(4) + RW(25)); { JP_F_001C7340(c); return; }
}

void JP_F_002BD7B0(Ctx *c) { /* func_002BD7B0 */
ENTER(0x2bd7b0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -68);
SET32(4, RW(4) + RW(25)); { JP_F_001C6A60(c); return; }
}

void JP_F_002BD7C0(Ctx *c) { /* func_002BD7C0 */
ENTER(0x2bd7c0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + 28);
SET32(4, RW(4) + RW(25)); { JP_F_0014DCE0(c); return; }
}

void JP_F_002BD7D0(Ctx *c) { /* func_002BD7D0 */
ENTER(0x2bd7d0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + 28);
SET32(4, RW(4) + RW(25)); { JP_F_0014DD40(c); return; }
}

void JP_F_002BD7E0(Ctx *c) { /* func_002BD7E0 */
ENTER(0x2bd7e0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -68);
SET32(4, RW(4) + RW(25)); { JP_F_002BD700(c); return; }
}

void JP_F_002BD7F0(Ctx *c) { /* func_002BD7F0 */
ENTER(0x2bd7f0);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -68);
SET32(4, RW(4) + RW(25)); { JP_F_001C7340(c); return; }
}

void JP_F_002BD800(Ctx *c) { /* func_002BD800 */
ENTER(0x2bd800);
SET64(25, (s32)rd32(c, (RW(5) + 280)));
SET32(5, RW(5) + -464);
SET32(5, RW(5) + RW(25)); { JP_F_002BD440(c); return; }
}

void JP_F_002BD810(Ctx *c) { /* func_002BD810 */
ENTER(0x2bd810);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { JP_F_002BD470(c); return; }
}

void JP_F_002BD820(Ctx *c) { /* func_002BD820 */
ENTER(0x2bd820);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { JP_F_001C6A60(c); return; }
}

void JP_F_002BD830(Ctx *c) { /* func_002BD830 */
ENTER(0x2bd830);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { JP_F_002BD500(c); return; }
}

void JP_F_002BD840(Ctx *c) { /* func_002BD840 */
ENTER(0x2bd840);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { JP_F_002BD5B0(c); return; }
}

void JP_F_002BD850(Ctx *c) { /* func_002BD850 */
ENTER(0x2bd850);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { JP_F_002BD700(c); return; }
}

void JP_F_002BD860(Ctx *c) { /* func_002BD860 */
ENTER(0x2bd860);
SET64(25, (s32)rd32(c, (RW(4) + 280)));
SET32(4, RW(4) + -464);
SET32(4, RW(4) + RW(25)); { JP_F_001C7340(c); return; }
}

void JP_F_002BD870(Ctx *c) { /* func_002BD870 */
ENTER(0x2bd870);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -752);
SET32(4, RW(4) + RW(25)); { JP_F_002BD4A0(c); return; }
}

void JP_F_002BD880(Ctx *c) { /* func_002BD880 */
ENTER(0x2bd880);
SET64(25, (s32)rd32(c, (RW(4) + 416)));
SET32(4, RW(4) + -752);
SET32(4, RW(4) + RW(25)); { JP_F_001C7340(c); return; }
}

void JP_F_002BD890(Ctx *c) { /* func_002BD890 */
ENTER(0x2bd890);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bd8a0);  JP_F_003283A0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BD8B0(Ctx *c) { /* func_002BD8B0 */
ENTER(0x2bd8b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 2372)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BD918; }
c->f[1].u = rd32(c, (RW(16) + 0));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(1) < F(0);
if (!c->fcc) { SET64(4, (s32)rd32(c, (RW(3) + 256))); goto L_002BD908; }
SET64(4, (s32)rd32(c, (RW(3) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2bd900); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(17) + RD(0)); goto L_002BD91C;
L_002BD908:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2bd918); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
L_002BD918:;
SET64(4, RD(17) + RD(0));
L_002BD91C:;
SET64(31, 0x2bd924); SET64(5, RD(16) + RD(0)); JP_F_003283C0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BD940(Ctx *c) { /* func_002BD940 */
ENTER(0x2bd940);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bd950);  JP_F_00328460(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BD960(Ctx *c) { /* func_002BD960 */
ENTER(0x2bd960);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bd970);  JP_F_003284C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BD980(Ctx *c) { /* func_002BD980 */
ENTER(0x2bd980);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bd990);  JP_F_00328590(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET64(2, RD(2) & 0xff);
SET64(2, RD(0) < RD(2));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BD9B0(Ctx *c) { /* func_002BD9B0 */
ENTER(0x2bd9b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bd9c0);  JP_F_003286A0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BD9D0(Ctx *c) { /* func_002BD9D0 */
ENTER(0x2bd9d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bd9e0);  JP_F_00328700(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BD9F0(Ctx *c) { /* func_002BD9F0 */
ENTER(0x2bd9f0);
SET32(29, RW(29) + -16);
SET64(2, RD(4) + RD(0));
wr64(c, (RW(29) + 0), RD(31));
SET64(4, RD(5) + RD(0));
SET64(31, 0x2bda08); SET64(5, (s32)rd32(c, (RW(2) + 2372))); JP_F_002BCDB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BDA20(Ctx *c) { /* func_002BDA20 */
ENTER(0x2bda20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2bda34); SET64(16, RD(4) + RD(0)); JP_F_00328890(c);
SET64(31, 0x2bda3c); SET64(4, (s32)rd32(c, (RW(16) + 2464))); JP_F_00100430(c);
wr32(c, (RW(16) + 2464), RW(0));
SET64(3, rd8(c, (RW(16) + 2369)));
if (RD(3) == RD(0)) { wr8(c, (RW(16) + 2368), (u8)RW(0)); goto L_002BDA74; }
SET64(4, (s32)rd32(c, (RW(16) + 2372)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 2372), RW(0)); goto L_002BDA6C; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bda68); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 2372), RW(0));
L_002BDA6C:;
wr8(c, (RW(16) + 2369), (u8)RW(0));
wr8(c, (RW(16) + 2368), (u8)RW(0));
L_002BDA74:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BDA90(Ctx *c) { /* func_002BDA90 */
ENTER(0x2bda90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2bdaac); SET64(16, RD(0) + RD(0)); JP_F_00328980(c);
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(17) + 2370))); goto L_002BDAC0; }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
SET64(2, rd8(c, (RW(17) + 2370)));
L_002BDAC0:;
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(17) + 2368))); goto L_002BDB00; }
SET64(2, rd8(c, (RW(17) + 2440)));
if (RD(2) == RD(0)) { SET64(25, (s32)rd32(c, (RW(17) + 2456))); goto L_002BDADC; }
SET32(2, RW(0) + 1); goto L_002BDAE8;
L_002BDADC:;
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2bdae8); SET32(4, RW(17) + 2440); rt_call(c, t); }
L_002BDAE8:;
SET64(2, RD(2) & 0xff);
{ int t = RD(2) == RD(0);  if (t) goto L_002BDAFC; }
SET32(2, RW(16) + 1);
SET64(16, RD(2) & 0xffff);
L_002BDAFC:;
SET64(2, rd8(c, (RW(17) + 2368)));
L_002BDB00:;
if (RD(2) != RD(0)) { SET64(2, RD(16) & 0xffff); goto L_002BDB78; }
SET64(2, RD(16) & 0xffff);
{ int t = RD(2) != RD(0);  if (t) goto L_002BDB74; }
SET64(2, rd8(c, (RW(17) + 2369)));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_002BDB70; }
SET64(2, rd8(c, (RW(17) + 2370)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 2372))); goto L_002BDB5C; }
SET64(31, 0x2bdb34); SET64(4, (s32)rd32(c, (RW(17) + 2464))); JP_F_001400B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 2372)));
SET64(5, (s32)rd32(c, (RW(17) + 2464)));
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x2bdb4c); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, 0x2bdb54); SET64(4, (s32)rd32(c, (RW(17) + 2464))); JP_F_00100430(c);
wr32(c, (RW(17) + 2464), RW(0)); goto L_002BDB6C;
L_002BDB5C:;
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2bdb6c); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
L_002BDB6C:;
SET32(2, RW(0) + 1);
L_002BDB70:;
wr8(c, (RW(17) + 2368), (u8)RW(2));
L_002BDB74:;
SET64(2, RD(16) & 0xffff);
L_002BDB78:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(0) < RD(2));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BDB90(Ctx *c) { /* func_002BDB90 */
ENTER(0x2bdb90);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
SET64(31, 0x2bdbbc); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00328A10(c);
SET64(3, rd8(c, (RW(19) + 2369)));
if (RD(3) == RD(0)) { wr8(c, (RW(19) + 2368), (u8)RW(0)); goto L_002BDCCC; }
SET64(31, 0x2bdbd0); SET32(4, RW(0) + 960); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002BDC84; }
SET32(4, RW(17) + 916);
SET32(16, RW(0) + 1);
SET64(31, 0x2bdbe8); wr32(c, (RW(17) + 256), RW(4)); JP_F_00141C80(c);
SET64(20, RD(0) + RD(0));
SET64(21, RD(17) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2bdbfc); SET64(5, RD(0) + RD(0)); JP_F_001530D0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(10, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -31504);
SET64(9, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 276), RW(3));
SET64(7, (s64)(s32)0x4e0000);
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(10, RW(10) + -31344);
SET64(5, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(9, RW(9) + -31432);
wr32(c, (RW(3) + 16), RW(10));
SET32(7, RW(7) + -31400);
wr32(c, (RW(17) + 432), RW(9));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 760), RW(7));
SET32(8, RW(17) + 916);
SET64(9, (s32)rd32(c, (RW(17) + 256)));
SET32(5, RW(5) + -31712);
SET32(6, RW(6) + -31544);
SET32(4, RW(4) + -31640);
SET32(3, RW(3) + -31608);
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
L_002BDC84:;
SET64(3, RD(18) & 0xffff);
SET32(4, RW(3) << 2);
SET64(3, (s64)(s32)0x490000);
SET32(3, RW(3) + 24912);
SET32(3, RW(3) + RW(4));
SET64(5, (s32)rd32(c, (RW(3) + 0)));
{ int t = RD(5) == RD(0); wr32(c, (RW(19) + 2372), RW(17)); if (t) goto L_002BDCC0; }
SET32(4, RW(19) + 2376);
SET32(6, RW(19) + 2464);
SET64(31, 0x2bdcb4); SET32(7, RW(0) + 1); JP_F_0015C730(c);
SET32(3, RW(0) + 1);
wr8(c, (RW(19) + 2370), (u8)RW(3)); goto L_002BDCC8;
L_002BDCC0:;
wr32(c, (RW(19) + 2464), RW(0));
wr8(c, (RW(19) + 2370), (u8)RW(0));
L_002BDCC8:;
wr8(c, (RW(19) + 2368), (u8)RW(0));
L_002BDCCC:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002BDCF0(Ctx *c) { /* func_002BDCF0 */
ENTER(0x2bdcf0);
SET32(3, RW(0) + 1);
wr8(c, (RW(4) + 2369), (u8)RW(3)); return;
}

void JP_F_002BDD00(Ctx *c) { /* func_002BDD00 */
ENTER(0x2bdd00);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_002BDD44; }
SET32(4, RW(18) + 2480);
SET32(2, RW(18) + 2544);
wr32(c, (RW(18) + 912), RW(4));
SET64(31, 0x2bdd3c); wr32(c, (RW(18) + 256), RW(2)); JP_F_002AF080(c);
SET64(31, 0x2bdd44); SET32(4, RW(18) + 2544); JP_F_00141C80(c);
L_002BDD44:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2bdd50); SET64(5, RD(0) + RD(0)); JP_F_00328AB0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(8, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 9312);
SET64(6, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(7, (s32)rd32(c, (RW(18) + 256)));
SET32(8, RW(8) + 9512);
SET32(16, RW(18) + 2376);
SET32(6, RW(6) + 9384);
SET32(3, RW(3) + 9416);
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
SET64(31, 0x2bddb4); wr32(c, (RW(18) + 2372), RW(0)); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 544);
SET32(3, RW(3) + 552);
wr32(c, (RW(16) + 56), RW(2));
SET32(4, RW(16) + 64);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 564);
wr32(c, (RW(16) + 36), RW(2));
SET64(31, 0x2bdde4); wr32(c, (RW(16) + 60), RW(0)); JP_F_00158180(c);
wr8(c, (RW(16) + 84), (u8)RW(0));
SET64(2, RD(18) + RD(0));
wr32(c, (RW(18) + 2464), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BDE10(Ctx *c) { /* func_002BDE10 */
ENTER(0x2bde10);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2544);
SET32(4, RW(4) + RW(25)); { JP_F_001E8820(c); return; }
}

void JP_F_002BDE20(Ctx *c) { /* func_002BDE20 */
ENTER(0x2bde20);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2544);
SET32(4, RW(4) + RW(25)); { JP_F_002BD980(c); return; }
}

void JP_F_002BDE30(Ctx *c) { /* func_002BDE30 */
ENTER(0x2bde30);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2544);
SET32(4, RW(4) + RW(25)); { JP_F_002BDA20(c); return; }
}

void JP_F_002BDE40(Ctx *c) { /* func_002BDE40 */
ENTER(0x2bde40);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -2544);
SET32(4, RW(4) + RW(25)); { JP_F_001E8650(c); return; }
}

void JP_F_002BDE50(Ctx *c) { /* func_002BDE50 */
ENTER(0x2bde50);
SET32(4, RW(4) + -288); { JP_F_001E8650(c); return; }
}

void JP_F_002BDE60(Ctx *c) { /* func_002BDE60 */
ENTER(0x2bde60);
SET32(4, RW(4) + -704); { JP_F_001E8650(c); return; }
}

void JP_F_002BDE70(Ctx *c) { /* func_002BDE70 */
ENTER(0x2bde70);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bde80); SET32(4, RW(4) + 812); JP_F_0022A690(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BDE90(Ctx *c) { /* func_002BDE90 */
ENTER(0x2bde90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2bdea8); SET32(4, RW(0) + 8); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(16) + 940), RW(2)); goto L_002BDEBC; }
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(16) + 940), RW(2));
L_002BDEBC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BDED0(Ctx *c) { /* func_002BDED0 */
ENTER(0x2bded0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2bdee8); SET32(4, RW(16) + 812); JP_F_0022A390(c);
SET64(31, 0x2bdef0); SET64(4, RD(16) + RD(0)); JP_F_001436A0(c);
SET32(3, RW(0) + 4);
wr16(c, (RW(16) + 928), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BDF10(Ctx *c) { /* func_002BDF10 */
ENTER(0x2bdf10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2bdf28); SET32(4, RW(16) + 812); JP_F_0022A3D0(c);
SET32(3, RW(0) + 2);
wr16(c, (RW(16) + 928), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BDF40(Ctx *c) { /* func_002BDF40 */
ENTER(0x2bdf40);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET32(4, RW(16) + 812);
SET64(31, 0x2bdf60); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_0022A2A0(c);
SET64(3, rd8(c, (RW(16) + 944)));
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(16) + 928))); goto L_002BDF78; }
SET64(31, 0x2bdf74); SET64(4, RD(16) + RD(0)); JP_F_00143710(c);
SET64(4, rd16(c, (RW(16) + 928)));
L_002BDF78:;
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(4, rd16(c, (RW(16) + 916))); goto L_002BDF8C; }
SET64(4, (s32)rd32(c, (RW(16) + 932))); goto L_002BDFAC;
L_002BDF8C:;
SET32(3, RW(0) + 3);
{ int t = RD(4) != RD(3);  if (t) goto L_002BDFA8; }
SET64(31, 0x2bdfa0); SET64(4, RD(16) + RD(0)); JP_F_001432E0(c);
SET32(3, RW(0) + 3);
wr16(c, (RW(16) + 928), (u16)RW(3));
L_002BDFA8:;
SET64(4, (s32)rd32(c, (RW(16) + 932)));
L_002BDFAC:;
if (RD(4) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 940))); goto L_002BE014; }
SET64(2, rd8(c, (RW(16) + 505)));
SET64(2, RD(2) & 0x40);
SET64(2, RD(0) < RD(2));
if (RD(2) == RD(0)) { SET64(5, RD(0) + RD(0)); goto L_002BE008; }
SET64(2, rd8(c, (RW(16) + 936)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BE004; }
SET64(3, rd16(c, (RW(16) + 928)));
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002BE004; }
SET64(31, 0x2bdfec); SET32(5, RW(0) + 1); JP_F_00145680(c);
SET64(2, (s64)(s32)0x530000);
c->f[12].u = rd32(c, (RW(2) + -22384));
SET64(31, 0x2bdffc); SET64(4, (s32)rd32(c, (RW(16) + 932))); JP_F_00145550(c);
 goto L_002BE010;
L_002BE004:;
SET64(5, RD(0) + RD(0));
L_002BE008:;
SET64(31, 0x2be010);  JP_F_00145680(c);
L_002BE010:;
SET64(3, (s32)rd32(c, (RW(16) + 940)));
L_002BE014:;
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002BE09C; }
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
SET64(31, 0x2be054); c->f[20].f = fpu(c->facc - F(3) * F(0)); JP_F_0022A690(c);
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
SET64(31, 0x2be090); wr32(c, (RW(29) + 48), c->f[0].u); JP_F_0014E980(c);
SET64(31, 0x2be098); SET32(4, RW(16) + 16); JP_F_00145A80(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_002BE09C:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 64); return;
}

void JP_F_002BE0B0(Ctx *c) { /* func_002BE0B0 */
ENTER(0x2be0b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2be0cc); SET64(16, RD(5) + RD(0)); JP_F_00143650(c);
SET64(31, 0x2be0d4); SET32(4, RW(17) + 812); JP_F_0022A420(c);
SET64(25, (s32)rd32(c, (RW(2) + 36)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x2be0e8); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BE100(Ctx *c) { /* func_002BE100 */
ENTER(0x2be100);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2be118); SET32(4, RW(16) + 16); JP_F_00146440(c);
if (RD(2) != RD(0)) { SET32(4, RW(16) + 812); goto L_002BE128; }
SET64(2, RD(0) + RD(0)); goto L_002BE160;
L_002BE128:;
SET64(31, 0x2be130);  JP_F_0022A420(c);
SET64(25, (s32)rd32(c, (RW(2) + 36)));
SET64(25, (s32)rd32(c, (RW(25) + 96)));
{ u32 t = RW(25); SET64(31, 0x2be140); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 932))); goto L_002BE150; }
SET64(2, RD(0) + RD(0)); goto L_002BE160;
L_002BE150:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2be160);  rt_call(c, t); }
L_002BE160:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BE170(Ctx *c) { /* func_002BE170 */
ENTER(0x2be170);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2be188); SET64(4, (s32)rd32(c, (RW(4) + 28))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET32(4, RW(16) + 812); goto L_002BE1A0; }
SET64(31, 0x2be19c); SET64(4, RD(16) + RD(0)); JP_F_001436A0(c);
SET32(4, RW(16) + 812);
L_002BE1A0:;
SET64(31, 0x2be1a8);  JP_F_0022A420(c);
SET64(31, 0x2be1b0); SET32(4, RW(2) + 48); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 932))); goto L_002BE1D8; }
SET64(31, 0x2be1c4); SET32(4, RW(16) + 812); JP_F_0022A420(c);
SET64(25, (s32)rd32(c, (RW(2) + 36)));
SET64(25, (s32)rd32(c, (RW(25) + 92)));
{ u32 t = RW(25); SET64(31, 0x2be1d4); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 932)));
L_002BE1D8:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2be1e8);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002BE208; }
SET64(4, (s32)rd32(c, (RW(16) + 932)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2be204);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
L_002BE208:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BE220(Ctx *c) { /* func_002BE220 */
ENTER(0x2be220);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2be23c); SET64(16, RD(5) + RD(0)); JP_F_001436D0(c);
SET64(31, 0x2be244); SET32(4, RW(17) + 812); JP_F_0022A420(c);
SET64(25, (s32)rd32(c, (RW(2) + 36)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 88)));
{ u32 t = RW(25); SET64(31, 0x2be258); SET64(4, RD(2) + RD(0)); rt_call(c, t); }
SET64(31, 0x2be260);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 932))); goto L_002BE274; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 932)));
L_002BE274:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2be284);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 932)));
SET64(31, 0x2be290); SET64(5, RD(0) + RD(0)); JP_F_00145680(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BE2B0(Ctx *c) { /* func_002BE2B0 */
ENTER(0x2be2b0);
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
{ u32 t = RW(25); SET64(31, 0x2be2f4); c->f[20].f = fpu(F(0) + F(1)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(16) + 4));
SET64(25, (s32)rd32(c, (RW(17) + 868)));
c->f[0].u = rd32(c, (RW(2) + 4));
SET32(4, RW(17) + 812);
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2be310); c->f[21].f = fpu(F(1) + F(0)); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(2) + 0));
SET32(4, RW(17) + 16);
c->f[1].u = rd32(c, (RW(16) + 0));
SET32(5, RW(29) + 64);
SET64(2, (s64)(s32)0x3f800000);
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 64), c->f[0].u);
wr32(c, (RW(29) + 68), c->f[21].u);
SET64(31, 0x2be33c); wr32(c, (RW(29) + 72), c->f[20].u); JP_F_0014E980(c);
SET32(4, RW(17) + 812);
SET64(31, 0x2be348); SET64(5, RD(16) + RD(0)); JP_F_0022A6E0(c);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002BE370(Ctx *c) { /* func_002BE370 */
ENTER(0x2be370);
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
SET64(31, 0x2be3cc); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_0022A870(c);
SET32(4, RW(21) + 812);
SET64(31, 0x2be3d8); SET64(5, RD(20) + RD(0)); JP_F_0022A6E0(c);
SET32(4, RW(21) + 812);
SET64(31, 0x2be3e4); SET64(5, RD(19) + RD(0)); JP_F_0022A640(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2be3f4); SET32(4, RW(21) + 812); JP_F_0022A4D0(c);
SET64(31, 0x2be3fc); SET32(4, RW(21) + 812); JP_F_0022A420(c);
SET64(25, (s32)rd32(c, (RW(2) + 36)));
SET64(4, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 104)));
{ u32 t = RW(25); SET64(31, 0x2be410); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(21) + 868)));
SET64(5, (s64)(s32)0x4c0000);
SET32(4, RW(21) + 812);
SET64(25, (s32)rd32(c, (RW(25) + 144)));
{ u32 t = RW(25); SET64(31, 0x2be428); SET32(5, RW(5) + -28768); rt_call(c, t); }
SET32(2, RW(0) + 8192);
{ int t = RD(16) == RD(0); wr16(c, (RW(21) + 774), (u16)RW(2)); if (t) goto L_002BE450; }
c->f[2].u = rd32(c, (RW(16) + 0));
c->f[0].u = rd32(c, (RW(16) + 4));
c->f[1].u = RW(0);
c->f[20].f = fpu(F(1) + F(2));
c->f[21].f = fpu(F(1) + F(0)); goto L_002BE4B0;
L_002BE450:;
SET64(25, (s32)rd32(c, (RW(21) + 868)));
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2be460); SET32(4, RW(21) + 812); rt_call(c, t); }
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
{ u32 t = RW(25); SET64(31, 0x2be490); c->f[20].f = fpu(F(0) + F(1)); rt_call(c, t); }
c->f[3].u = rd32(c, (RW(2) + 4));
c->f[1].u = rd32(c, (RW(19) + 4));
c->f[0].u = RW(0);
SET64(2, (s64)(s32)0x40000000);
c->f[2].u = RW(2);
c->facc = fpu(F(0) + F(1));
c->f[1].f = fpu(c->facc - F(2) * F(3));
c->f[21].f = fpu(F(0) + F(1));
L_002BE4B0:;
SET64(2, (s64)(s32)0x3dcc0000);
SET64(25, (s32)rd32(c, (RW(21) + 868)));
SET64(2, RD(2) | 0xcccd);
SET32(4, RW(21) + 812);
c->f[1].u = rd32(c, (RW(20) + 8));
c->f[0].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2be4d4); c->f[22].f = fpu(F(0) + F(1)); rt_call(c, t); }
c->f[1].u = rd32(c, (RW(20) + 4));
SET64(25, (s32)rd32(c, (RW(21) + 868)));
c->f[0].u = rd32(c, (RW(2) + 4));
SET32(4, RW(21) + 812);
SET64(25, (s32)rd32(c, (RW(25) + 148)));
{ u32 t = RW(25); SET64(31, 0x2be4f0); c->f[23].f = fpu(F(1) + F(0)); rt_call(c, t); }
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
SET64(31, 0x2be550); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); JP_F_00144F20(c);
SET32(2, RW(0) + 1);
SET32(4, RW(0) + 480);
SET64(31, 0x2be560); wr16(c, (RW(21) + 928), (u16)RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BE574; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2be574); SET32(5, RW(0) + 1); JP_F_001459B0(c);
L_002BE574:;
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
SET64(31, 0x2be5c8); wr32(c, (RW(29) + 128), c->f[0].u); JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2be5d4); SET32(5, RW(0) + 4); JP_F_0022CB50(c);
SET64(4, (s32)rd32(c, (RW(21) + 932)));
SET64(5, RD(2) + RD(0));
SET64(7, RD(17) + RD(0));
SET64(31, 0x2be5e8); SET32(6, RW(29) + 128); JP_F_001456D0(c);
SET64(4, (s32)rd32(c, (RW(21) + 932)));
SET64(31, 0x2be5f4); SET32(5, RW(0) + 1); JP_F_00145680(c);
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

void JP_F_002BE630(Ctx *c) { /* func_002BE630 */
ENTER(0x2be630);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BE77C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 9552);
SET64(10, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 768), RW(3));
SET32(2, RW(2) + 9560);
wr32(c, (RW(17) + 24), RW(2));
SET64(9, (s64)(s32)0x4e0000);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET32(10, RW(10) + 9936);
SET64(8, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(2) + 16), RW(10));
SET32(9, RW(9) + 9608);
SET32(8, RW(8) + 9628);
wr32(c, (RW(17) + 232), RW(9));
SET32(7, RW(7) + 9744);
wr32(c, (RW(17) + 236), RW(8));
SET32(6, RW(6) + 9752);
wr32(c, (RW(17) + 868), RW(7));
SET64(3, (s64)(s32)0x4e0000);
SET32(5, RW(5) + 9764);
wr32(c, (RW(17) + 832), RW(6));
SET32(3, RW(3) + 9824);
wr32(c, (RW(17) + 848), RW(5));
SET32(2, RW(17) + 948);
wr32(c, (RW(17) + 884), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 28)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 160)));
{ u32 t = RW(25); SET64(31, 0x2be6dc);  rt_call(c, t); }
SET32(4, RW(17) + 812);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002BE72C; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -2176);
SET32(2, RW(2) + -2168);
wr32(c, (RW(17) + 868), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 832), RW(2));
SET32(3, RW(3) + -2156);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -2096);
wr32(c, (RW(17) + 848), RW(3));
SET64(31, 0x2be71c); wr32(c, (RW(17) + 884), RW(2)); JP_F_0022AC80(c);
SET32(4, RW(17) + 812);
SET64(31, 0x2be728); SET64(5, RD(0) + RD(0)); JP_F_0022AEA0(c);
SET64(4, RD(17) + RD(0));
L_002BE72C:;
SET64(31, 0x2be734); SET64(5, RD(0) + RD(0)); JP_F_00143310(c);
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_002BE768; }
SET32(4, RW(17) + 948);
{ int t = RD(4) == RD(0);  if (t) goto L_002BE764; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 964), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2be764);  rt_call(c, t); }
L_002BE764:;
SET64(2, RD(16) << 48);
L_002BE768:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BE780; }
SET64(31, 0x2be77c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BE77C:;
SET64(2, RD(17) + RD(0));
L_002BE780:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BE7A0(Ctx *c) { /* func_002BE7A0 */
ENTER(0x2be7a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2be7b4); SET64(16, RD(4) + RD(0)); JP_F_001435B0(c);
SET64(31, 0x2be7bc); SET32(4, RW(16) + 812); JP_F_0022AC80(c);
wr16(c, (RW(16) + 928), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 932)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 932), RW(0)); goto L_002BE7E0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2be7dc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 932), RW(0));
L_002BE7E0:;
SET64(31, 0x2be7e8); SET64(4, (s32)rd32(c, (RW(16) + 940))); JP_F_001004B0(c);
wr32(c, (RW(16) + 940), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BE800(Ctx *c) { /* func_002BE800 */
ENTER(0x2be800);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002BE830; }
SET32(4, RW(16) + 948);
SET64(31, 0x2be830); wr32(c, (RW(16) + 28), RW(4)); JP_F_00141C80(c);
L_002BE830:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2be83c); SET64(5, RD(0) + RD(0)); JP_F_00143460(c);
SET64(31, 0x2be844); SET32(4, RW(16) + 812); JP_F_0022AD00(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 9552);
SET64(9, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 768), RW(3));
SET32(2, RW(2) + 9560);
wr32(c, (RW(16) + 24), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET32(9, RW(9) + 9936);
SET64(2, (s64)(s32)0x4e0000);
SET64(8, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 16), RW(9));
SET32(3, RW(3) + 9608);
wr32(c, (RW(16) + 232), RW(3));
SET32(2, RW(2) + 9628);
wr32(c, (RW(16) + 236), RW(2));
SET32(8, RW(8) + 9744);
SET32(7, RW(7) + 9752);
wr32(c, (RW(16) + 868), RW(8));
SET64(5, (s64)(s32)0x4e0000);
SET32(6, RW(6) + 9764);
wr32(c, (RW(16) + 832), RW(7));
SET32(5, RW(5) + 9824);
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

void JP_F_002BE900(Ctx *c) { /* func_002BE900 */
ENTER(0x2be900);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -948);
SET32(4, RW(4) + RW(25)); { JP_F_002BE0B0(c); return; }
}

void JP_F_002BE910(Ctx *c) { /* func_002BE910 */
ENTER(0x2be910);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -948);
SET32(4, RW(4) + RW(25)); { JP_F_002BE100(c); return; }
}

void JP_F_002BE920(Ctx *c) { /* func_002BE920 */
ENTER(0x2be920);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -948);
SET32(4, RW(4) + RW(25)); { JP_F_002BE170(c); return; }
}

void JP_F_002BE930(Ctx *c) { /* func_002BE930 */
ENTER(0x2be930);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -932);
SET32(4, RW(4) + RW(25)); { JP_F_0014DD40(c); return; }
}

void JP_F_002BE940(Ctx *c) { /* func_002BE940 */
ENTER(0x2be940);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -948);
SET32(4, RW(4) + RW(25)); { JP_F_002BE7A0(c); return; }
}

void JP_F_002BE950(Ctx *c) { /* func_002BE950 */
ENTER(0x2be950);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -948);
SET32(4, RW(4) + RW(25)); { JP_F_002BE630(c); return; }
}

void JP_F_002BE960(Ctx *c) { /* func_002BE960 */
ENTER(0x2be960);
SET32(4, RW(4) + -224); { JP_F_002BE630(c); return; }
}

void JP_F_002BE970(Ctx *c) { /* func_002BE970 */
ENTER(0x2be970);
SET32(4, RW(4) + -16); { JP_F_002BE0B0(c); return; }
}

void JP_F_002BE980(Ctx *c) { /* func_002BE980 */
ENTER(0x2be980);
SET32(4, RW(4) + -16); { JP_F_002BE100(c); return; }
}

void JP_F_002BE990(Ctx *c) { /* func_002BE990 */
ENTER(0x2be990);
SET32(4, RW(4) + -16); { JP_F_002BE170(c); return; }
}

void JP_F_002BE9A0(Ctx *c) { /* func_002BE9A0 */
ENTER(0x2be9a0);
SET32(4, RW(4) + -16); { JP_F_002BE220(c); return; }
}

void JP_F_002BE9B0(Ctx *c) { /* func_002BE9B0 */
ENTER(0x2be9b0);
SET32(4, RW(4) + -16); { JP_F_002BE7A0(c); return; }
}

void JP_F_002BE9C0(Ctx *c) { /* func_002BE9C0 */
ENTER(0x2be9c0);
SET32(4, RW(4) + -16); { JP_F_002BE630(c); return; }
}

void JP_F_002BE9D0(Ctx *c) { /* func_002BE9D0 */
ENTER(0x2be9d0);
SET32(4, RW(4) + -816); { JP_F_002BE630(c); return; }
}

void JP_F_002BE9E0(Ctx *c) { /* func_002BE9E0 */
ENTER(0x2be9e0);
SET32(4, RW(4) + -836); { JP_F_002BE630(c); return; }
}

void JP_F_002BE9F0(Ctx *c) { /* func_002BE9F0 */
ENTER(0x2be9f0);
SET32(4, RW(4) + -872); { JP_F_002BE630(c); return; }
}

void JP_F_002BEA00(Ctx *c) { /* func_002BEA00 */
ENTER(0x2bea00);
SET32(4, RW(4) + -812); { JP_F_002BE2B0(c); return; }
}

void JP_F_002BEA10(Ctx *c) { /* func_002BEA10 */
ENTER(0x2bea10);
SET32(4, RW(4) + -812); { JP_F_002BDE70(c); return; }
}

void JP_F_002BEA20(Ctx *c) { /* func_002BEA20 */
ENTER(0x2bea20);
SET32(4, RW(4) + -812); { JP_F_002BE0B0(c); return; }
}

void JP_F_002BEA30(Ctx *c) { /* func_002BEA30 */
ENTER(0x2bea30);
SET32(4, RW(4) + -812); { JP_F_002BE100(c); return; }
}

void JP_F_002BEA40(Ctx *c) { /* func_002BEA40 */
ENTER(0x2bea40);
SET32(4, RW(4) + -812); { JP_F_002BE170(c); return; }
}

void JP_F_002BEA50(Ctx *c) { /* func_002BEA50 */
ENTER(0x2bea50);
SET32(4, RW(4) + -812); { JP_F_002BE220(c); return; }
}

void JP_F_002BEA60(Ctx *c) { /* func_002BEA60 */
ENTER(0x2bea60);
SET32(4, RW(4) + -812); { JP_F_002BE630(c); return; }
}

void JP_F_002BEA70(Ctx *c) { /* func_002BEA70 */
ENTER(0x2bea70);
SET32(4, RW(4) + -812); { JP_F_002BDF40(c); return; }
}

void JP_F_002BEA80(Ctx *c) { /* func_002BEA80 */
ENTER(0x2bea80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BEBA8; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 9984);
SET32(2, RW(2) + 10008);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x2beac4);  rt_call(c, t); }
SET32(4, RW(17) + 352);
{ int t = RD(4) == RD(0);  if (t) goto L_002BEB14; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 10112);
SET32(3, RW(3) + 10132);
wr32(c, (RW(17) + 360), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 456), RW(3));
SET32(2, RW(2) + 10152);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 512), RW(2));
SET32(3, RW(3) + 10216);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 672), RW(3));
SET32(2, RW(2) + 10248);
SET64(31, 0x2beb14); wr32(c, (RW(17) + 848), RW(2)); JP_F_00206820(c);
L_002BEB14:;
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002BEB94; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 16640);
SET32(2, RW(2) + 16664);
wr32(c, (RW(17) + 144), RW(3));
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x2beb44); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 160);
if (RD(4) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002BEB88; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3104);
wr32(c, (RW(17) + 172), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2beb6c);  rt_call(c, t); }
SET32(2, RW(17) + 160);
{ int t = RD(2) == RD(0);  if (t) goto L_002BEB84; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3136);
wr32(c, (RW(17) + 172), RW(2));
L_002BEB84:;
SET64(4, RD(17) + RD(0));
L_002BEB88:;
SET64(31, 0x2beb90); SET64(5, RD(0) + RD(0)); JP_F_00243920(c);
SET64(2, RD(16) << 48);
L_002BEB94:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BEBAC; }
SET64(31, 0x2beba8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BEBA8:;
SET64(2, RD(17) + RD(0));
L_002BEBAC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BEBC0(Ctx *c) { /* func_002BEBC0 */
ENTER(0x2bebc0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2bebd4); SET64(16, RD(4) + RD(0)); JP_F_001B6B00(c);
SET64(25, (s32)rd32(c, (RW(16) + 360)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2bebe4); SET32(4, RW(16) + 352); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BEC00(Ctx *c) { /* func_002BEC00 */
ENTER(0x2bec00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2bec14); SET64(16, RD(4) + RD(0)); JP_F_001B6B80(c);
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
SET64(31, 0x2bec6c); SET32(6, RW(29) + 32); JP_F_002244C0(c);
SET32(4, RW(16) + 352);
SET64(31, 0x2bec78); SET32(5, RW(0) + 40); JP_F_001EC460(c);
SET64(31, 0x2bec80); SET32(4, RW(16) + 448); JP_F_001EC380(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bec8c); SET32(5, RW(16) + 352); JP_F_001B6520(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BECA0(Ctx *c) { /* func_002BECA0 */
ENTER(0x2beca0);
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
{ int t = RD(2) == RD(0); SET64(19, RD(4) + RD(0)); if (t) goto L_002BF180; }
c->f[1].u = rd32(c, (RW(19) + 640));
c->f[0].u = c->f[12].u;
c->f[0].f = fpu(F(1) + F(0));
wr32(c, (RW(19) + 640), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(28) + -30240)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BED1C; }
rd128(c, (RW(2) + 800) & ~15u, &c->r[2]); goto L_002BED30;
L_002BED1C:;
SET64(31, 0x2bed24);  JP_F_00139590(c);
SET64(31, 0x2bed2c);  JP_F_001511C0(c);
rd128(c, (RW(2) + 800) & ~15u, &c->r[2]);
L_002BED30:;
wr128(c, (RW(29) + 320) & ~15u, &c->r[2]);
SET64(2, (s32)rd32(c, (RW(28) + -30240)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BED48; }
rd128(c, (RW(2) + 816) & ~15u, &c->r[2]); goto L_002BED5C;
L_002BED48:;
SET64(31, 0x2bed50);  JP_F_00139590(c);
SET64(31, 0x2bed58);  JP_F_001511C0(c);
rd128(c, (RW(2) + 816) & ~15u, &c->r[2]);
L_002BED5C:;
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
SET64(31, 0x2bedc8); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); JP_F_002B0360(c);
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
SET64(31, 0x2bedf8); wr128(c, (RW(29) + 256) & ~15u, &c->r[2]); JP_F_002AFF20(c);
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
{ int t = c->fcc; wr32(c, (RW(29) + 328), c->f[0].u); if (t) goto L_002BF180; }
c->f[25].u = rd32(c, (RW(19) + 680));
L_002BEE58:;
SET64(31, 0x2bee60); c->f[31].u = c->f[25].u ^ 0x80000000u; JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BEE74; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BEE8C;
L_002BEE74:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BEE8C:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
c->f[24].u = rd32(c, (RW(19) + 676));
wr32(c, (RW(29) + 152), c->f[0].u);
SET64(31, 0x2beeac); c->f[30].u = c->f[24].u ^ 0x80000000u; JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BEEC0; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BEED8;
L_002BEEC0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BEED8:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
c->f[23].u = rd32(c, (RW(19) + 672));
wr32(c, (RW(29) + 148), c->f[0].u);
SET64(31, 0x2beef8); c->f[29].u = c->f[23].u ^ 0x80000000u; JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BEF0C; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BEF24;
L_002BEF0C:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BEF24:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
c->f[22].u = rd32(c, (RW(19) + 696));
wr32(c, (RW(29) + 144), c->f[0].u);
SET64(31, 0x2bef44); c->f[28].u = c->f[22].u ^ 0x80000000u; JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BEF58; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BEF70;
L_002BEF58:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BEF70:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
c->f[21].u = rd32(c, (RW(19) + 692));
wr32(c, (RW(29) + 140), c->f[0].u);
SET64(31, 0x2bef90); c->f[27].u = c->f[21].u ^ 0x80000000u; JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BEFA4; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BEFBC;
L_002BEFA4:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BEFBC:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
c->f[20].u = rd32(c, (RW(19) + 688));
wr32(c, (RW(29) + 136), c->f[0].u);
SET64(31, 0x2befdc); c->f[26].u = c->f[20].u ^ 0x80000000u; JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BEFF0; }
c->f[0].u = RW(2);
c->f[2].f = (f32)(s32)c->f[0].u; goto L_002BF008;
L_002BEFF0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[2].f = fpu(F(2) + F(2));
L_002BF008:;
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
SET64(31, 0x2bf0bc); c->f[20].u = rd32(c, (RW(19) + 660)); JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BF0D0; }
c->f[0].u = RW(2);
c->f[2].f = (f32)(s32)c->f[0].u; goto L_002BF0E8;
L_002BF0D0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[2].f = (f32)(s32)c->f[0].u;
c->f[2].f = fpu(F(2) + F(2));
L_002BF0E8:;
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
SET64(31, 0x2bf128); c->f[12].f = fpu(c->facc + F(1) * F(2)); JP_F_001D2D90(c);
SET64(2, rd16(c, (RW(19) + 634)));
SET32(2, RW(2) + 1);
wr16(c, (RW(19) + 634), (u16)RW(2));
SET64(3, rd16(c, (RW(19) + 634)));
SET64(2, rd16(c, (RW(19) + 632)));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_002BF160; }
wr16(c, (RW(19) + 634), (u16)RW(0));
SET64(2, rd8(c, (RW(19) + 648)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BF160; }
wr8(c, (RW(19) + 636), (u8)RW(0));
wr32(c, (RW(19) + 640), RW(0));
L_002BF160:;
c->f[1].u = rd32(c, (RW(19) + 644));
c->f[0].u = rd32(c, (RW(19) + 640));
c->f[1].f = fpu(F(0) - F(1));
wr32(c, (RW(19) + 640), c->f[1].u);
c->f[0].u = rd32(c, (RW(19) + 644));
c->fcc = F(1) < F(0);
if (!c->fcc) { c->f[25].u = rd32(c, (RW(19) + 680)); { POLL(); goto L_002BEE58; } }
L_002BF180:;
SET64(3, rd8(c, (RW(19) + 636)));
SET64(2, rd16(c, (RW(19) + 632)));
SET64(17, RD(0) + RD(0));
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
{ int t = RSD(2) <= 0; SET64(18, RD(3) & 0xff); if (t) goto L_002BF258; }
SET64(16, RD(0) + RD(0));
L_002BF1A0:;
c->f[12].u = rd32(c, (RW(29) + 156));
SET32(4, RW(29) + 176);
SET64(31, 0x2bf1b0); SET32(5, RW(19) + 704); JP_F_002AFF20(c);
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
{ u32 t = RW(25); SET64(31, 0x2bf224); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 624)));
SET32(2, RW(2) + RW(16));
SET64(2, rd8(c, (RW(2) + 60)));
{ int t = RD(2) == RD(0);  if (t) goto L_002BF240; }
SET64(18, RD(0) + RD(0));
L_002BF240:;
SET64(2, rd16(c, (RW(19) + 632)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 80); if (t) { POLL(); goto L_002BF1A0; } }
L_002BF258:;
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

void JP_F_002BF2B0(Ctx *c) { /* func_002BF2B0 */
ENTER(0x2bf2b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bf2c0); SET64(6, RD(0) + RD(0)); JP_F_001D20E0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BF2D0(Ctx *c) { /* func_002BF2D0 */
ENTER(0x2bf2d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bf2e0);  JP_F_001D3190(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BF2F0(Ctx *c) { /* func_002BF2F0 */
ENTER(0x2bf2f0);
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
SET64(31, 0x2bf37c);  JP_F_001D21A0(c);
SET64(31, 0x2bf384); SET32(4, RW(17) + 96); JP_F_001EC380(c);
SET64(31, 0x2bf38c); SET64(4, RD(17) + RD(0)); JP_F_001EC500(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 704) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002BF3B0(Ctx *c) { /* func_002BF3B0 */
ENTER(0x2bf3b0);
SET32(29, RW(29) + -672);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002BF6B4; }
c->f[0].u = rd32(c, (RW(16) + 4));
SET64(2, (s64)(s32)0x44160000);
c->f[1].u = RW(2);
c->f[2].f = fpu(F(0) + F(12));
c->fcc = F(2) < F(1);
{ int t = !c->fcc; wr32(c, (RW(16) + 4), c->f[2].u); if (t) goto L_002BF3F8; }
c->f[20].u = RW(0);
 goto L_002BF630;
L_002BF3F8:;
SET64(2, (s64)(s32)0x44340000);
c->f[0].u = RW(2);
c->fcc = F(2) < F(0);
{ int t = !c->fcc;  if (t) goto L_002BF530; }
c->f[1].f = fpu(F(2) - F(1));
SET64(2, (s64)(s32)0x42f00000);
SET32(4, RW(29) + 384);
SET32(5, RW(16) + 144);
SET32(6, RW(16) + 160);
c->f[0].u = RW(2);
c->f[12].f = fpu_div(F(1), F(0));
SET64(31, 0x2bf440);  JP_F_001477E0(c);
SET32(4, RW(29) + 400);
SET64(31, 0x2bf44c); SET32(5, RW(29) + 384); JP_F_00147A60(c);
SET32(4, RW(29) + 176);
SET32(5, RW(16) + 16);
SET64(31, 0x2bf45c); SET32(6, RW(29) + 400); JP_F_002AEAE0(c);
SET64(31, 0x2bf464); SET32(4, RW(29) + 464); JP_F_002AF080(c);
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
SET64(31, 0x2bf494); wr128(c, (RW(29) + 512) & ~15u, &c->r[2]); JP_F_002AEAE0(c);
SET64(31, 0x2bf49c); SET32(4, RW(29) + 528); JP_F_002AF080(c);
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
SET64(31, 0x2bf4cc); wr128(c, (RW(29) + 576) & ~15u, &c->r[2]); JP_F_002AEAE0(c);
SET64(31, 0x2bf4d4); SET32(4, RW(29) + 592); JP_F_002AF080(c);
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
SET64(31, 0x2bf520); wr128(c, (RW(3) + 336) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[20].u = RW(2);
 goto L_002BF630;
L_002BF530:;
c->f[20].u = RW(0);
SET64(31, 0x2bf53c);  JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BF550; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BF568;
L_002BF550:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BF568:;
SET64(3, (s64)(s32)0x4f800000);
SET64(2, (s64)(s32)0x43960000);
c->f[0].u = RW(3);
c->f[2].f = fpu_div(F(1), F(0));
c->f[0].u = RW(0);
c->f[1].u = RW(2);
c->facc = fpu(F(0) + F(0));
c->f[0].f = fpu(c->facc + F(1) * F(2));
SET64(31, 0x2bf598); wr32(c, (RW(16) + 4), c->f[0].u); JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BF5AC; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BF5C4;
L_002BF5AC:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BF5C4:;
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
SET64(31, 0x2bf5f8); wr32(c, (RW(29) + 668), c->f[0].u); JP_F_0013AEA0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x2bf604); SET32(5, RW(29) + 668); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2bf610); SET32(4, RW(29) + 320); JP_F_0013ADA0(c);
rd128(c, (RW(29) + 320) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 176) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 192) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr128(c, (RW(16) + 224) & ~15u, &c->r[2]);
L_002BF630:;
SET64(31, 0x2bf638);  JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002BF64C; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002BF664;
L_002BF64C:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002BF664:;
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
{ u32 t = RW(25); SET64(31, 0x2bf6b4); SET32(5, RW(29) + 304); rt_call(c, t); }
L_002BF6B4:;
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 672); return;
}

void JP_F_002BF6D0(Ctx *c) { /* func_002BF6D0 */
ENTER(0x2bf6d0);
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
SET64(31, 0x2bf70c); wr128(c, (RW(29) + 720) & ~15u, &c->r[2]); JP_F_002AF080(c);
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
SET64(31, 0x2bf780); wr32(c, (RW(29) + 344), c->f[0].u); JP_F_00147DE0(c);
c->f[0].u = rd32(c, (RW(29) + 356));
SET32(4, RW(18) + 16);
SET64(31, 0x2bf790); wr32(c, (RW(18) + 68), c->f[0].u); JP_F_002AE990(c);
SET64(2, (s64)(s32)0x3f800000);
SET64(3, (s64)(s32)0x3e990000);
wr32(c, (RW(29) + 588), RW(2));
SET32(4, RW(29) + 208);
SET64(2, RD(3) | 0x999a);
wr32(c, (RW(29) + 576), RW(2));
wr32(c, (RW(29) + 580), RW(2));
SET64(31, 0x2bf7b4); wr32(c, (RW(29) + 584), RW(2)); JP_F_0013AEA0(c);
SET32(4, RW(29) + 208);
SET64(31, 0x2bf7c0); SET32(5, RW(29) + 576); JP_F_00181B20(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2bf7cc); SET32(4, RW(29) + 592); JP_F_0013ADA0(c);
SET32(4, RW(18) + 16);
SET32(6, RW(29) + 592);
SET64(31, 0x2bf7dc); SET64(5, RD(4) + RD(0)); JP_F_00106578(c);
SET64(31, 0x2bf7e4); SET32(4, RW(29) + 144); JP_F_0013AEA0(c);
SET32(4, RW(29) + 144);
SET64(31, 0x2bf7f0); SET32(5, RW(29) + 76); JP_F_0013AD00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2bf7fc); SET32(4, RW(29) + 512); JP_F_0013ADA0(c);
SET32(4, RW(18) + 16);
SET32(6, RW(29) + 512);
SET64(31, 0x2bf80c); SET64(5, RD(4) + RD(0)); JP_F_00106578(c);
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
SET64(31, 0x2bf84c); wr32(c, (RW(29) + 272), c->f[0].u); JP_F_002B0290(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 496), RW(0));
wr32(c, (RW(29) + 504), c->f[0].u);
wr32(c, (RW(29) + 508), RW(2));
wr32(c, (RW(29) + 500), RW(0));
SET64(6, RD(17) + RD(0));
rd128(c, (RW(29) + 496) & ~15u, &c->r[2]);
SET32(4, RW(29) + 736);
SET64(5, RD(16) + RD(0));
SET64(31, 0x2bf878); wr128(c, (RW(18) + 64) & ~15u, &c->r[2]); JP_F_001483D0(c);
SET32(4, RW(29) + 736);
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bf88c);  rt_call(c, t); }
wr32(c, (RW(29) + 748), c->f[0].u);
SET64(31, 0x2bf898); SET32(4, RW(29) + 80); JP_F_0013AEA0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2bf8a4); SET32(5, RW(29) + 748); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2bf8b0); SET32(4, RW(29) + 432); JP_F_0013ADA0(c);
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
SET64(31, 0x2bf930); wr32(c, (RW(29) + 708), RW(0)); JP_F_002B0360(c);
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
SET64(31, 0x2bf988); wr128(c, (RW(29) + 288) & ~15u, &c->r[2]); JP_F_002B0360(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 672), RW(0));
wr32(c, (RW(29) + 684), RW(2));
SET32(4, RW(29) + 384);
rd128(c, (RW(29) + 288) & ~15u, &c->r[2]);
SET32(5, RW(29) + 704);
wr32(c, (RW(29) + 676), RW(0));
SET32(6, RW(29) + 688);
wr32(c, (RW(29) + 680), RW(0));
SET64(31, 0x2bf9b4); wr128(c, (RW(29) + 672) & ~15u, &c->r[2]); JP_F_00147730(c);
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET32(4, RW(29) + 368);
SET32(5, RW(29) + 704);
SET32(6, RW(29) + 672);
SET64(31, 0x2bf9cc); wr128(c, (RW(18) + 144) & ~15u, &c->r[2]); JP_F_00147730(c);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
SET32(4, RW(18) + 176);
SET64(31, 0x2bf9dc); wr128(c, (RW(18) + 160) & ~15u, &c->r[2]); JP_F_002AF080(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 752); return;
}

void JP_F_002BFA00(Ctx *c) { /* func_002BFA00 */
ENTER(0x2bfa00);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET32(4, RW(29) + 48);
SET64(31, 0x2bfa24); SET64(5, RD(6) + RD(0)); JP_F_001CBBC0(c);
SET64(2, (s32)rd32(c, (RW(17) + 624)));
SET64(5, RD(16) + RD(0));
SET32(6, RW(29) + 48);
SET64(31, 0x2bfa38); SET32(4, RW(2) + 112); JP_F_002BBB00(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BFA50(Ctx *c) { /* func_002BFA50 */
ENTER(0x2bfa50);
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
{ int t = c->fcc; wr32(c, (RW(4) + 628), c->f[1].u); if (t) goto L_002BFB18; }
SET64(2, rd16(c, (RW(17) + 632)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002BFAE0; }
L_002BFA8C:;
SET64(31, 0x2bfa94);  JP_F_001953A0(c);
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
SET64(31, 0x2bfacc); SET32(4, RW(2) + 112); JP_F_002BB9E0(c);
SET64(2, rd16(c, (RW(17) + 632)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002BFA8C; } }
L_002BFAE0:;
SET64(2, (s64)(s32)0x40000000);
c->f[0].u = rd32(c, (RW(17) + 628));
c->f[1].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_002BFB18; }
L_002BFAFC:;
c->f[0].u = rd32(c, (RW(17) + 628));
c->f[0].f = fpu(F(0) - F(1));
c->fcc = F(0) <= F(1);
wr32(c, (RW(17) + 628), c->f[0].u);
{ int t = !c->fcc;  if (t) { POLL(); goto L_002BFAFC; } }
L_002BFB18:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(2, RD(0) + RD(0));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BFB30(Ctx *c) { /* func_002BFB30 */
ENTER(0x2bfb30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bfb40); wr32(c, (RW(4) + 628), RW(0)); JP_F_001EDB30(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BFB50(Ctx *c) { /* func_002BFB50 */
ENTER(0x2bfb50);
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
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002BFBD8; }
SET32(2, RW(0) + 128);
L_002BFB88:;
wr8(c, (RW(29) + 95), (u8)RW(0));
wr8(c, (RW(29) + 92), (u8)RW(2));
SET64(5, RD(16) + RD(0));
wr8(c, (RW(29) + 93), (u8)RW(2));
SET32(6, RW(29) + 92);
wr8(c, (RW(29) + 94), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 624)));
SET64(31, 0x2bfbac); SET32(4, RW(2) + 112); JP_F_002BB9E0(c);
SET64(2, (s32)rd32(c, (RW(19) + 624)));
SET64(5, RD(16) + RD(0));
SET32(6, RW(28) + -31424);
SET64(31, 0x2bfbc0); SET32(4, RW(2) + 112); JP_F_002BB680(c);
SET64(2, rd16(c, (RW(19) + 632)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET32(2, RW(0) + 128); { POLL(); goto L_002BFB88; } }
L_002BFBD8:;
SET64(4, RD(19) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2bfbe8); SET64(6, RD(17) + RD(0)); JP_F_001EDB60(c);
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002BFC10(Ctx *c) { /* func_002BFC10 */
ENTER(0x2bfc10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 624)));
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002BFC50; }
SET64(31, 0x2bfc30); SET64(4, (s32)rd32(c, (RW(16) + 616))); JP_F_002A56F0(c);
SET64(4, (s32)rd32(c, (RW(16) + 624)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 624), RW(0)); goto L_002BFC50; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2bfc4c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 624), RW(0));
L_002BFC50:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bfc5c); wr16(c, (RW(16) + 632), (u16)RW(0)); JP_F_001EDD90(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BFC70(Ctx *c) { /* func_002BFC70 */
ENTER(0x2bfc70);
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
SET64(31, 0x2bfcb4); c->f[20].u = c->f[12].u; JP_F_001EDDD0(c);
wr16(c, (RW(20) + 632), (u16)RW(19));
SET64(3, RD(21) & 0xff);
SET64(2, RD(16) & 0xff);
wr8(c, (RW(20) + 640), (u8)RW(16));
SET32(2, RW(3) - RW(2));
SET32(4, RW(0) + 144);
wr8(c, (RW(20) + 641), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2bfcdc); wr32(c, (RW(20) + 636), RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BFCF0; }
SET64(5, rd16(c, (RW(20) + 632)));
SET64(31, 0x2bfcf0); SET64(4, RD(16) + RD(0)); JP_F_002BB430(c);
L_002BFCF0:;
wr32(c, (RW(20) + 624), RW(16));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2bfd08); SET32(5, RW(0) + 88); rt_call(c, t); }
SET64(2, rd16(c, (RW(20) + 632)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002BFDA8; }
SET64(2, (s32)rd32(c, (RW(20) + 624)));
L_002BFD18:;
SET64(5, RD(16) + RD(0));
SET32(6, RW(29) + 144);
SET64(31, 0x2bfd28); SET32(4, RW(2) + 112); JP_F_002BBB00(c);
SET32(2, RW(0) + 128);
wr8(c, (RW(29) + 159), (u8)RW(0));
wr8(c, (RW(29) + 156), (u8)RW(2));
SET64(5, RD(16) + RD(0));
wr8(c, (RW(29) + 157), (u8)RW(2));
SET32(6, RW(29) + 156);
wr8(c, (RW(29) + 158), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(20) + 624)));
SET64(31, 0x2bfd50); SET32(4, RW(2) + 112); JP_F_002BB9E0(c);
wr32(c, (RW(29) + 136), c->f[20].u);
SET64(5, RD(16) + RD(0));
wr32(c, (RW(29) + 140), c->f[20].u);
SET32(6, RW(29) + 136);
SET64(2, (s32)rd32(c, (RW(20) + 624)));
SET64(31, 0x2bfd6c); SET32(4, RW(2) + 112); JP_F_002BB840(c);
SET64(2, (s32)rd32(c, (RW(20) + 624)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2bfd80); SET32(4, RW(2) + 112); JP_F_002BB770(c);
SET64(2, (s32)rd32(c, (RW(20) + 624)));
SET64(5, RD(16) + RD(0));
SET32(6, RW(28) + -31428);
SET64(31, 0x2bfd94); SET32(4, RW(2) + 112); JP_F_002BB680(c);
SET64(2, rd16(c, (RW(20) + 632)));
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(20) + 624))); { POLL(); goto L_002BFD18; } }
L_002BFDA8:;
SET64(5, (s32)rd32(c, (RW(20) + 624)));
SET64(31, 0x2bfdb4); SET64(4, (s32)rd32(c, (RW(20) + 616))); JP_F_002A5740(c);
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

void JP_F_002BFDE0(Ctx *c) { /* func_002BFDE0 */
ENTER(0x2bfde0);
SET32(29, RW(29) + -16);
c->f[0].u = rd32(c, (RW(4) + 68));
c->f[0].f = fpu(F(0) + F(12));
wr32(c, (RW(4) + 68), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 72));
c->f[0].u = rd32(c, (RW(4) + 68));
c->fcc = F(0) < F(1);
if (c->fcc) { c->f[1].u = rd32(c, (RW(4) + 68)); goto L_002BFE10; }
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(4) + 68), c->f[0].u);
c->f[1].u = rd32(c, (RW(4) + 68));
L_002BFE10:;
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

void JP_F_002BFE40(Ctx *c) { /* func_002BFE40 */
ENTER(0x2bfe40);
SET32(29, RW(29) + -192);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 64), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(2, (s8)rd8(c, (RW(28) + -30312)));
{ int t = RD(2) != RD(0); c->f[20].u = c->f[12].u; if (t) goto L_002BFEC0; }
wr32(c, (RW(29) + 0), RW(0));
c->f[13].u = RW(0);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 8), RW(0));
wr32(c, (RW(29) + 16), RW(2));
c->f[12].u = RW(2);
wr32(c, (RW(29) + 24), RW(0));
SET64(4, (s64)(s32)0x420000);
wr32(c, (RW(29) + 32), RW(0));
SET32(4, RW(4) + -17024);
wr32(c, (RW(29) + 40), RW(0));
c->f[14].u = c->f[13].u;
wr32(c, (RW(29) + 48), RW(0));
c->f[15].u = c->f[13].u;
c->f[16].u = c->f[13].u;
wr32(c, (RW(29) + 56), RW(2));
c->f[17].u = c->f[12].u;
c->f[18].u = c->f[13].u;
SET64(31, 0x2bfeb8); c->f[19].u = c->f[13].u; JP_F_002AF0D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(28) + -30312), (u8)RW(2));
L_002BFEC0:;
SET64(31, 0x2bfec8); SET32(4, RW(29) + 128); JP_F_002AF080(c);
SET64(7, (s64)(s32)0x420000);
SET64(4, RD(16) + RD(0));
SET32(7, RW(7) + -17024);
SET64(5, RD(17) + RD(0));
rd128(c, (RW(7) + 0) & ~15u, &c->r[6]);
rd128(c, (RW(7) + 16) & ~15u, &c->r[3]);
rd128(c, (RW(7) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 128) & ~15u, &c->r[6]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
rd128(c, (RW(7) + 48) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET64(31, 0x2bff00); wr32(c, (RW(17) + 64), RW(16)); JP_F_001536B0(c);
wr32(c, (RW(17) + 68), RW(0));
wr32(c, (RW(17) + 72), c->f[20].u);
SET64(31, rd64(c, (RW(29) + 112)));
c->f[20].u = rd32(c, (RW(29) + 64));
rd128(c, (RW(29) + 96) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[16]);
SET32(29, RW(29) + 192); return;
}

void JP_F_002BFF20(Ctx *c) { /* func_002BFF20 */
ENTER(0x2bff20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BFFD8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 10112);
SET32(3, RW(3) + 10132);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + 10152);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + 10216);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + 10248);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 496), RW(2)); if (t) goto L_002BFFC0; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -29584);
SET32(3, RW(3) + -29564);
wr32(c, (RW(17) + 8), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + -29544);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + -29480);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + -29448);
SET64(31, 0x2bffc0); wr32(c, (RW(17) + 496), RW(2)); JP_F_001CA900(c);
L_002BFFC0:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BFFDC; }
SET64(31, 0x2bffd8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BFFD8:;
SET64(2, RD(17) + RD(0));
L_002BFFDC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

static void JP_B_002BFFF0(Ctx *c, u32 entry) { /* func_002BFFF0 */
ENTER(entry);
switch (entry) { case 0x2c0000: goto L_002C0000; case 0x2c0008: goto L_002C0008; case 0x2c0014: goto L_002C0014; case 0x2c0024: goto L_002C0024; case 0x2c0028: goto L_002C0028; case 0x2c002c: goto L_002C002C; case 0x2c0038: goto L_002C0038; case 0x2c003c: goto L_002C003C; case 0x2c0040: goto L_002C0040; case 0x2c0048: goto L_002C0048; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
L_002C0000:;
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C00C0; }
if (0) { L_002C0008:; SET64(16, RD(5) + RD(0)); }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
L_002C0014:;
SET32(2, RW(2) + 10304);
SET32(3, RW(3) + 10324);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4e0000);
L_002C0024:;
wr32(c, (RW(17) + 104), RW(3));
L_002C0028:;
SET32(2, RW(2) + 10344);
L_002C002C:;
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + 10408);
L_002C0038:;
SET64(2, (s64)(s32)0x4e0000);
L_002C003C:;
wr32(c, (RW(17) + 320), RW(3));
L_002C0040:;
SET32(2, RW(2) + 10440);
wr32(c, (RW(17) + 496), RW(2));
L_002C0048:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2c0058);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002C00AC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 20944);
SET32(3, RW(3) + 20964);
wr32(c, (RW(17) + 8), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + 20984);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + 21048);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + 21080);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c00a8); wr32(c, (RW(17) + 496), RW(2)); JP_F_001871A0(c);
SET64(2, RD(16) << 48);
L_002C00AC:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C00C4; }
SET64(31, 0x2c00c0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002C00C0:;
SET64(2, RD(17) + RD(0));
L_002C00C4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002BFFF0(Ctx *c) { JP_B_002BFFF0(c, 0x2bfff0); }
void JP_F_002C0000(Ctx *c) { JP_B_002BFFF0(c, 0x2c0000); }
void JP_F_002C0008(Ctx *c) { JP_B_002BFFF0(c, 0x2c0008); }
void JP_F_002C0014(Ctx *c) { JP_B_002BFFF0(c, 0x2c0014); }
void JP_F_002C0024(Ctx *c) { JP_B_002BFFF0(c, 0x2c0024); }
void JP_F_002C0028(Ctx *c) { JP_B_002BFFF0(c, 0x2c0028); }
void JP_F_002C002C(Ctx *c) { JP_B_002BFFF0(c, 0x2c002c); }
void JP_F_002C0038(Ctx *c) { JP_B_002BFFF0(c, 0x2c0038); }
void JP_F_002C003C(Ctx *c) { JP_B_002BFFF0(c, 0x2c003c); }
void JP_F_002C0040(Ctx *c) { JP_B_002BFFF0(c, 0x2c0040); }
void JP_F_002C0048(Ctx *c) { JP_B_002BFFF0(c, 0x2c0048); }

void JP_F_002C00E0(Ctx *c) { /* func_002C00E0 */
ENTER(0x2c00e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C027C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 10496);
SET32(3, RW(3) + 10516);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + 10536);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + 10600);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + 10632);
wr32(c, (RW(17) + 496), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2c0148);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002C0268; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 31760);
SET32(3, RW(3) + 31780);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + 31800);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + 31864);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 320), RW(3));
SET32(2, RW(2) + 31896);
wr32(c, (RW(17) + 496), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2c019c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 544);
SET64(31, 0x2c01a8); SET32(5, RW(0) + -1); JP_F_002B5710(c);
SET32(4, RW(17) + 496);
SET64(31, 0x2c01b4); SET64(5, RD(0) + RD(0)); JP_F_002A5820(c);
SET32(4, RW(17) + 176);
SET64(31, 0x2c01c0); SET64(5, RD(0) + RD(0)); JP_F_002BAA10(c);
{ int t = RD(17) == RD(0);  if (t) goto L_002C0264; }
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 6992);
SET32(3, RW(3) + 7012);
wr32(c, (RW(17) + 8), RW(2));
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 104), RW(3));
SET32(2, RW(2) + 7032);
wr32(c, (RW(17) + 160), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2c01fc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET32(4, RW(17) + 144);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 96); goto L_002C0228; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 160), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c0224);  rt_call(c, t); }
SET32(4, RW(17) + 96);
L_002C0228:;
{ int t = RD(4) == RD(0);  if (t) goto L_002C0244; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 480);
SET64(31, 0x2c0244); wr32(c, (RW(17) + 104), RW(2)); JP_F_002B4320(c);
L_002C0244:;
{ int t = RD(17) == RD(0);  if (t) goto L_002C0264; }
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(17) + RD(0));
SET32(2, RW(2) + 512);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c0264); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B3F70(c);
L_002C0264:;
SET64(2, RD(16) << 48);
L_002C0268:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C0280; }
SET64(31, 0x2c027c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002C027C:;
SET64(2, RD(17) + RD(0));
L_002C0280:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C02A0(Ctx *c) { /* func_002C02A0 */
ENTER(0x2c02a0);
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
{ int t = !c->fcc; c->f[21].u = c->f[12].u; if (t) goto L_002C036C; }
wr32(c, (RW(19) + 632), c->f[2].u);
SET32(4, RW(29) + 272);
SET64(2, (s32)rd32(c, (RW(19) + 680)));
SET64(31, 0x2c0304); SET32(16, RW(2) + 64); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
SET32(5, RW(29) + 272);
SET32(4, RW(29) + 128);
wr128(c, (RW(29) + 272) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 288) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 304) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2c0330); wr128(c, (RW(29) + 320) & ~15u, &c->r[2]); JP_F_001E1430(c);
SET32(4, RW(29) + 336);
SET64(31, 0x2c033c); SET32(5, RW(29) + 128); JP_F_001E1340(c);
rd128(c, (RW(29) + 336) & ~15u, &c->r[2]);
SET32(4, RW(19) + 176);
wr128(c, (RW(19) + 176) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 352) & ~15u, &c->r[2]);
wr128(c, (RW(19) + 192) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 368) & ~15u, &c->r[2]);
wr128(c, (RW(19) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 384) & ~15u, &c->r[2]);
SET64(31, 0x2c0364); wr128(c, (RW(19) + 224) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(2, RD(0) + RD(0)); goto L_002C069C;
L_002C036C:;
c->f[0].f = fpu(F(0) + F(21));
wr32(c, (RW(19) + 632), c->f[0].u);
c->f[0].u = rd32(c, (RW(19) + 676));
c->f[0].f = fpu(F(0) + F(21));
wr32(c, (RW(19) + 676), c->f[0].u);
c->f[1].u = rd32(c, (RW(19) + 672));
c->fcc = F(1) <= F(2);
if (c->fcc) { SET64(2, (s32)rd32(c, (RW(19) + 680))); goto L_002C03A8; }
c->f[0].u = rd32(c, (RW(19) + 676));
c->fcc = F(0) < F(1);
{ int t = c->fcc;  if (t) goto L_002C03A4; }
wr8(c, (RW(19) + 656), (u8)RW(0));
L_002C03A4:;
SET64(2, (s32)rd32(c, (RW(19) + 680)));
L_002C03A8:;
SET32(4, RW(29) + 144);
SET64(31, 0x2c03b4); SET32(16, RW(2) + 64); JP_F_002AF080(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[2]);
SET32(5, RW(29) + 144);
SET32(4, RW(29) + 112);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 16) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 32) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 176) & ~15u, &c->r[2]);
rd128(c, (RW(16) + 48) & ~15u, &c->r[2]);
SET64(31, 0x2c03e0); wr128(c, (RW(29) + 192) & ~15u, &c->r[2]); JP_F_001E1430(c);
SET32(4, RW(29) + 208);
SET64(31, 0x2c03ec); SET32(5, RW(29) + 112); JP_F_001E1340(c);
rd128(c, (RW(29) + 208) & ~15u, &c->r[2]);
SET32(4, RW(19) + 176);
wr128(c, (RW(19) + 176) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 224) & ~15u, &c->r[2]);
wr128(c, (RW(19) + 192) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 240) & ~15u, &c->r[2]);
wr128(c, (RW(19) + 208) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 256) & ~15u, &c->r[2]);
SET64(31, 0x2c0414); wr128(c, (RW(19) + 224) & ~15u, &c->r[2]); JP_F_002A4D70(c);
c->f[1].u = rd32(c, (RW(19) + 644));
SET64(3, rd8(c, (RW(19) + 656)));
c->f[0].u = rd32(c, (RW(19) + 640));
SET64(2, rd16(c, (RW(19) + 652)));
SET64(17, RD(0) + RD(0));
SET64(3, RD(0) < RD(3));
c->f[20].f = fpu(F(1) * F(0));
SET64(3, RD(3) ^ 0x1);
{ int t = RSD(2) <= 0; SET64(18, RD(3) & 0xff); if (t) goto L_002C0668; }
SET64(16, RD(0) + RD(0));
L_002C0440:;
SET64(2, (s32)rd32(c, (RW(19) + 624)));
c->f[12].u = c->f[21].u;
SET64(5, (s32)rd32(c, (RW(19) + 628)));
SET64(6, RD(17) + RD(0));
c->f[13].u = c->f[20].u;
SET64(31, 0x2c045c); SET32(4, RW(2) + RW(16)); JP_F_001CB840(c);
SET64(2, (s32)rd32(c, (RW(19) + 624)));
SET32(2, RW(2) + RW(16));
SET64(2, rd8(c, (RW(2) + 36)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C0478; }
SET64(18, RD(0) + RD(0));
L_002C0478:;
SET64(2, rd16(c, (RW(19) + 652)));
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 48); if (t) { POLL(); goto L_002C0440; } }
 goto L_002C0668;
L_002C0494:;
SET64(31, 0x2c049c); c->f[26].u = c->f[21].u ^ 0x80000000u; JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C04B0; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002C04C8;
L_002C04B0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002C04C8:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[23].f = fpu_div(F(1), F(0));
c->f[20].u = rd32(c, (RW(19) + 640));
SET64(31, 0x2c04e8); c->f[25].u = c->f[20].u ^ 0x80000000u; JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C04FC; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002C0514;
L_002C04FC:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002C0514:;
SET64(2, (s64)(s32)0x4f800000);
c->f[0].u = RW(2);
c->f[22].f = fpu_div(F(1), F(0));
c->f[27].u = rd32(c, (RW(19) + 640));
SET64(31, 0x2c0534); c->f[24].u = c->f[27].u ^ 0x80000000u; JP_F_001953A0(c);
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C0548; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002C0560;
L_002C0548:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002C0560:;
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
SET64(31, 0x2c05e8); SET32(4, RW(2) + RW(3)); JP_F_001CBB10(c);
c->f[1].u = rd32(c, (RW(19) + 636));
c->f[0].u = rd32(c, (RW(19) + 632));
c->f[12].f = fpu(F(0) - F(1));
wr32(c, (RW(19) + 632), c->f[12].u);
c->f[0].u = rd32(c, (RW(19) + 636));
c->fcc = F(12) < F(0);
{ int t = c->fcc;  if (t) goto L_002C0638; }
c->f[1].u = rd32(c, (RW(19) + 644));
SET64(6, rd16(c, (RW(19) + 654)));
c->f[0].u = rd32(c, (RW(19) + 640));
SET64(2, (s32)rd32(c, (RW(19) + 624)));
SET64(5, (s32)rd32(c, (RW(19) + 628)));
SET32(3, RW(6) << 1);
c->f[13].f = fpu(F(1) * F(0));
SET32(3, RW(3) + RW(6));
SET32(3, RW(3) << 4);
SET64(31, 0x2c0634); SET32(4, RW(2) + RW(3)); JP_F_001CB840(c);
L_002C0638:;
SET64(2, rd16(c, (RW(19) + 654)));
SET32(2, RW(2) + 1);
wr16(c, (RW(19) + 654), (u16)RW(2));
SET64(3, rd16(c, (RW(19) + 654)));
SET64(2, rd16(c, (RW(19) + 652)));
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) goto L_002C0660; }
wr16(c, (RW(19) + 654), (u16)RW(0));
L_002C0660:;
SET64(18, RD(0) + RD(0));
L_002C0668:;
c->f[1].u = rd32(c, (RW(19) + 632));
c->f[0].u = rd32(c, (RW(19) + 636));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; SET32(2, RW(0) + 1); if (t) goto L_002C0680; }
SET64(2, RD(0) + RD(0));
L_002C0680:;
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002C0698; }
SET64(2, rd8(c, (RW(19) + 656)));
if (RD(2) != RD(0)) { c->f[21].u = rd32(c, (RW(19) + 640)); { POLL(); goto L_002C0494; } }
L_002C0698:;
SET64(2, RD(18) + RD(0));
L_002C069C:;
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

void JP_F_002C06E0(Ctx *c) { /* func_002C06E0 */
ENTER(0x2c06e0);
SET32(4, RW(4) + -96); { JP_F_002C00E0(c); return; }
}

void JP_F_002C06F0(Ctx *c) { /* func_002C06F0 */
ENTER(0x2c06f0);
SET32(4, RW(4) + -144); { JP_F_002BFC10(c); return; }
}

void JP_F_002C0700(Ctx *c) { /* func_002C0700 */
ENTER(0x2c0700);
SET32(4, RW(4) + -144); { JP_F_002C00E0(c); return; }
}

void JP_F_002C0710(Ctx *c) { /* func_002C0710 */
ENTER(0x2c0710);
SET32(4, RW(4) + -176); { JP_F_002C00E0(c); return; }
}

void JP_F_002C0720(Ctx *c) { /* func_002C0720 */
ENTER(0x2c0720);
SET32(4, RW(4) + -496); { JP_F_002C00E0(c); return; }
}

void JP_F_002C0730(Ctx *c) { /* func_002C0730 */
ENTER(0x2c0730);
SET32(4, RW(4) + -96); { JP_F_002BFFF0(c); return; }
}

void JP_F_002C0740(Ctx *c) { /* func_002C0740 */
ENTER(0x2c0740);
SET32(4, RW(4) + -144); { JP_F_002BF2D0(c); return; }
}

void JP_F_002C0750(Ctx *c) { /* func_002C0750 */
ENTER(0x2c0750);
SET32(4, RW(4) + -144); { JP_F_002BFFF0(c); return; }
}

void JP_F_002C0760(Ctx *c) { /* func_002C0760 */
ENTER(0x2c0760);
SET32(4, RW(4) + -176); { JP_F_002BFFF0(c); return; }
}

void JP_F_002C0770(Ctx *c) { /* func_002C0770 */
ENTER(0x2c0770);
SET32(4, RW(4) + -496); { JP_F_002BFFF0(c); return; }
}

void JP_F_002C0780(Ctx *c) { /* func_002C0780 */
ENTER(0x2c0780);
SET32(4, RW(4) + -96); { JP_F_002BFF20(c); return; }
}

void JP_F_002C0790(Ctx *c) { /* func_002C0790 */
ENTER(0x2c0790);
SET32(4, RW(4) + -144); { JP_F_002BFF20(c); return; }
}

void JP_F_002C07A0(Ctx *c) { /* func_002C07A0 */
ENTER(0x2c07a0);
SET32(4, RW(4) + -176); { JP_F_002BFF20(c); return; }
}

void JP_F_002C07B0(Ctx *c) { /* func_002C07B0 */
ENTER(0x2c07b0);
SET32(4, RW(4) + -496); { JP_F_002BFF20(c); return; }
}

void JP_F_002C07C0(Ctx *c) { /* func_002C07C0 */
ENTER(0x2c07c0);
SET32(4, RW(4) + -160); { JP_F_002BEA80(c); return; }
}

void JP_F_002C07D0(Ctx *c) { /* func_002C07D0 */
ENTER(0x2c07d0);
c->f[1].u = rd32(c, (RW(4) + 8));
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
if (c->fcc) { SET64(5, rd16(c, (RW(4) + 12))); goto L_002C0808; }
c->f[1].f = fpu(F(1) - F(12));
c->fcc = F(1) <= F(0);
{ int t = !c->fcc; wr32(c, (RW(4) + 8), c->f[1].u); if (t) goto L_002C0894; }
c->f[0].u = rd32(c, (RW(4) + 4));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(4) + 4), c->f[0].u); goto L_002C0894;
L_002C0808:;
SET64(3, rd16(c, (RW(4) + 14)));
SET64(1, RSD(5) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002C0894; }
c->f[0].u = rd32(c, (RW(4) + 4));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(5, rd16(c, (RW(4) + 12)));
c->f[0].f = fpu(F(0) + F(12));
SET64(3, (s32)rd32(c, (RW(3) + 28)));
SET32(5, RW(5) << 3);
SET32(6, RW(3) + RW(5));
wr32(c, (RW(4) + 4), c->f[0].u);
SET64(3, rd16(c, (RW(6) + 0)));
wr16(c, (RW(4) + 16), (u16)RW(3)); goto L_002C0850;
L_002C0844:;
SET32(6, RW(6) + 8);
SET32(3, RW(3) + 1);
wr16(c, (RW(4) + 12), (u16)RW(3));
L_002C0850:;
SET64(5, rd16(c, (RW(4) + 12)));
SET64(3, rd16(c, (RW(4) + 14)));
SET64(1, RSD(5) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002C0878; }
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = rd32(c, (RW(6) + 4));
c->fcc = F(1) <= F(0);
if (!c->fcc) { SET64(3, rd16(c, (RW(4) + 12))); { POLL(); goto L_002C0844; } }
L_002C0878:;
SET64(5, rd16(c, (RW(4) + 12)));
SET64(3, rd16(c, (RW(4) + 14)));
SET64(3, RSD(5) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) goto L_002C0894; }
SET32(3, RW(0) + 5);
wr16(c, (RW(4) + 16), (u16)RW(3));
L_002C0894:;
 return;
}

void JP_F_002C08A0(Ctx *c) { /* func_002C08A0 */
ENTER(0x2c08a0);
wr32(c, (RW(4) + 4), RW(0));
SET32(3, RW(0) + 5);
wr16(c, (RW(4) + 12), (u16)RW(0));
c->f[0].u = RW(0);
wr16(c, (RW(4) + 16), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
if (RD(3) == RD(0)) { wr16(c, (RW(4) + 14), (u16)RW(0)); goto L_002C08D8; }
c->f[0].u = rd32(c, (RW(3) + 24));
wr32(c, (RW(4) + 8), c->f[0].u);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 8)));
wr16(c, (RW(4) + 14), (u16)RW(3)); goto L_002C08DC;
L_002C08D8:;
wr32(c, (RW(4) + 8), c->f[0].u);
L_002C08DC:;
 return;
}

void JP_F_002C08F0(Ctx *c) { /* func_002C08F0 */
ENTER(0x2c08f0);
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

void JP_F_002C0930(Ctx *c) { /* func_002C0930 */
ENTER(0x2c0930);
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
{ int t = RD(2) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C0A04; }
SET32(19, RW(29) + 80);
SET64(18, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2c0970); SET64(4, RD(19) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(18) + RD(0));
SET32(2, RW(2) + -32);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2c0988); wr32(c, (RW(29) + 96), RW(2)); JP_F_00157540(c);
SET64(5, rd16(c, (RW(16) + 0)));
SET64(31, 0x2c0994); SET64(4, RD(19) + RD(0)); JP_F_00157480(c);
SET64(3, RD(2) & 0xffff);
SET64(2, RD(0) | 0xffff);
{ int t = RD(3) == RD(2);  if (t) goto L_002C09E4; }
SET64(2, (s32)rd32(c, (RW(17) + 12)));
if (RD(2) == RD(0)) { SET64(16, RD(0) + RD(0)); goto L_002C09BC; }
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET32(3, RW(3) << 6);
SET32(16, RW(2) + RW(3));
L_002C09BC:;
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 80);
SET32(2, RW(2) + -32);
SET64(31, 0x2c09d0); wr32(c, (RW(29) + 96), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2c09dc); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(2, RD(16) + RD(0)); goto L_002C0A08;
L_002C09E4:;
SET64(2, (s64)(s32)0x4d0000);
SET64(4, RD(19) + RD(0));
SET32(2, RW(2) + -32);
SET64(31, 0x2c09f8); wr32(c, (RW(29) + 96), RW(2)); JP_F_00157620(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2c0a04); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
L_002C0A04:;
SET64(2, RD(0) + RD(0));
L_002C0A08:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002C0A30(Ctx *c) { /* func_002C0A30 */
ENTER(0x2c0a30);
SET32(29, RW(29) + -96);
SET64(1, RSD(5) < (s64)6);
{ int t = RD(1) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002C0B60; }
SET64(3, rd16(c, (RW(4) + 0)));
SET32(2, RW(0) + 5);
{ int t = RD(3) == RD(2);  if (t) goto L_002C0B0C; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002C0AB4; }
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(5) << 2);
c->f[0].u = rd32(c, (RW(2) + 27408));
SET32(4, RW(3) + RW(29));
SET64(3, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(3) + 27416));
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 27412));
wr32(c, (RW(29) + 64), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 27420));
wr32(c, (RW(29) + 68), c->f[1].u);
wr32(c, (RW(29) + 72), c->f[2].u);
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 27424));
wr32(c, (RW(29) + 76), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 27428));
wr32(c, (RW(29) + 80), c->f[1].u);
wr32(c, (RW(29) + 84), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 64))); goto L_002C0B60;
L_002C0AB4:;
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(5) << 2);
c->f[0].u = rd32(c, (RW(2) + 27440));
SET32(4, RW(3) + RW(29));
SET64(3, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(3) + 27448));
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 27444));
wr32(c, (RW(29) + 32), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 27452));
wr32(c, (RW(29) + 36), c->f[1].u);
wr32(c, (RW(29) + 40), c->f[2].u);
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 27456));
wr32(c, (RW(29) + 44), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 27460));
wr32(c, (RW(29) + 48), c->f[1].u);
wr32(c, (RW(29) + 52), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 32))); goto L_002C0B60;
L_002C0B0C:;
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(5) << 2);
c->f[0].u = rd32(c, (RW(2) + 27472));
SET32(4, RW(3) + RW(29));
SET64(3, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(3) + 27480));
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 27476));
wr32(c, (RW(29) + 0), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 27484));
wr32(c, (RW(29) + 4), c->f[1].u);
wr32(c, (RW(29) + 8), c->f[2].u);
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 27488));
wr32(c, (RW(29) + 12), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 27492));
wr32(c, (RW(29) + 16), c->f[1].u);
wr32(c, (RW(29) + 20), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
L_002C0B60:;
SET32(29, RW(29) + 96); return;
}

void JP_F_002C0B70(Ctx *c) { /* func_002C0B70 */
ENTER(0x2c0b70);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 76), RW(6));
SET64(31, 0x2c0b98); SET32(4, RW(0) + 24); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C0BA8; }
SET64(31, 0x2c0ba8); SET64(4, RD(16) + RD(0)); JP_F_001F4480(c);
L_002C0BA8:;
wr32(c, (RW(18) + 12), RW(16));
SET64(6, RD(17) + RD(0));
SET64(5, (s32)rd32(c, (RW(18) + 4)));
SET64(4, RD(16) + RD(0));
SET32(7, RW(28) + -31420);
SET32(8, RW(29) + 76);
SET64(31, 0x2c0bc8); SET32(9, RW(0) + 1); JP_F_001F4290(c);
SET64(3, (s32)rd32(c, (RW(18) + 12)));
SET64(3, rd16(c, (RW(3) + 16)));
wr16(c, (RW(18) + 2), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002C0BF0(Ctx *c) { /* func_002C0BF0 */
ENTER(0x2c0bf0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 8)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002C0C30; }
SET64(4, (s32)rd32(c, (RW(16) + 12)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 12), RW(0)); goto L_002C0C38; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c0c24); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 12), RW(0));
 goto L_002C0C38;
L_002C0C30:;
wr32(c, (RW(16) + 12), RW(0));
wr32(c, (RW(16) + 4), RW(0));
L_002C0C38:;
wr16(c, (RW(16) + 2), (u16)RW(0));
wr8(c, (RW(16) + 8), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002C0C50(Ctx *c) { /* func_002C0C50 */
ENTER(0x2c0c50);
wr16(c, (RW(4) + 2), (u16)RW(0));
wr16(c, (RW(4) + 0), (u16)RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 12), RW(0)); return;
}

void JP_F_002C0C70(Ctx *c) { /* func_002C0C70 */
ENTER(0x2c0c70);
SET32(29, RW(29) + -32);
SET64(3, RD(4) & 0xffff);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(0) + 190);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(3) == RD(2); SET64(16, RD(0) + RD(0)); if (t) goto L_002C0CE8; }
SET32(2, RW(0) + 210);
if (RD(3) == RD(2)) { SET64(16, RD(0) + (s64)1024); goto L_002C0D04; }
SET32(2, RW(0) + 200);
{ int t = RD(3) == RD(2);  if (t) goto L_002C0CDC; }
SET32(2, RW(0) + 180);
{ int t = RD(3) == RD(2);  if (t) goto L_002C0CDC; }
SET32(2, RW(0) + 220);
{ int t = RD(3) == RD(2);  if (t) goto L_002C0CDC; }
SET32(2, RW(0) + 1260);
{ int t = RD(3) == RD(2);  if (t) goto L_002C0CDC; }
SET32(2, RW(0) + 1250);
{ int t = RD(3) == RD(2);  if (t) goto L_002C0CDC; }
 goto L_002C0CF0;
L_002C0CDC:;
SET64(16, RD(0) + (s64)1024);
 goto L_002C0D04;
L_002C0CE8:;
SET64(16, RD(0) + (s64)768); goto L_002C0D04;
L_002C0CF0:;
SET64(31, 0x2c0cf8);  JP_F_002429E0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C0D04; }
SET64(16, RD(0) + (s64)768);
L_002C0D04:;
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002C0D20(Ctx *c) { /* func_002C0D20 */
ENTER(0x2c0d20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C0D80; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 10688);
SET32(3, RW(3) + 10696);
wr32(c, (RW(17) + 56), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 10708);
SET64(31, 0x2c0d68); wr32(c, (RW(17) + 36), RW(2)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C0D84; }
SET64(31, 0x2c0d80); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002C0D80:;
SET64(2, RD(17) + RD(0));
L_002C0D84:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C0DA0(Ctx *c) { /* func_002C0DA0 */
ENTER(0x2c0da0);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28648); return;
}

void JP_F_002C0DB0(Ctx *c) { /* func_002C0DB0 */
ENTER(0x2c0db0);
 return;
}

void JP_F_002C0DC0(Ctx *c) { /* func_002C0DC0 */
ENTER(0x2c0dc0);
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
SET64(31, 0x2c0e28); SET32(4, RW(16) + 48); JP_F_00356170(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002C0E40(Ctx *c) { /* func_002C0E40 */
ENTER(0x2c0e40);
SET64(3, (s32)rd32(c, (RW(7) + 0)));
{ int t = RD(5) != RD(0); wr16(c, (RW(6) + 0), (u16)RW(3)); if (t) goto L_002C0E5C; }
wr16(c, (RW(6) + 2), (u16)RW(0));
wr16(c, (RW(6) + 4), (u16)RW(0));
wr16(c, (RW(6) + 6), (u16)RW(0)); goto L_002C0E6C;
L_002C0E5C:;
SET32(3, RW(0) + 1);
wr16(c, (RW(6) + 2), (u16)RW(3));
wr16(c, (RW(6) + 4), (u16)RW(3));
wr16(c, (RW(6) + 6), (u16)RW(3));
L_002C0E6C:;
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
if (c->fcc) { c->f[0].u = c->f[0].u ^ 0x80000000u; goto L_002C0EC4; }
wr32(c, (RW(6) + 24), c->f[0].u); goto L_002C0EC8;
L_002C0EC4:;
wr32(c, (RW(6) + 28), c->f[0].u);
L_002C0EC8:;
c->f[1].u = rd32(c, (RW(7) + 16));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (c->fcc) { c->f[0].u = c->f[1].u ^ 0x80000000u; goto L_002C0EE8; }
wr32(c, (RW(6) + 32), c->f[1].u); goto L_002C0EEC;
L_002C0EE8:;
wr32(c, (RW(6) + 36), c->f[0].u);
L_002C0EEC:;
c->f[1].u = rd32(c, (RW(7) + 20));
c->f[0].u = RW(0);
c->fcc = F(1) < F(0);
if (c->fcc) { c->f[0].u = c->f[1].u ^ 0x80000000u; goto L_002C0F0C; }
wr32(c, (RW(6) + 40), c->f[1].u); goto L_002C0F10;
L_002C0F0C:;
wr32(c, (RW(6) + 44), c->f[0].u);
L_002C0F10:;
 return;
}

void JP_F_002C0F20(Ctx *c) { /* func_002C0F20 */
ENTER(0x2c0f20);
SET64(4, (s64)(s32)0x410000);
SET64(2, RD(0) + RD(0));
SET32(4, RW(4) + 29264);
L_002C0F2C:;
SET64(3, rd8(c, (RW(4) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_002C0F48; }
SET32(4, RW(4) + 8);
SET32(2, RW(2) + 1); { POLL(); goto L_002C0F2C; }
L_002C0F48:;
 return;
}

static void JP_B_002C0F50(Ctx *c, u32 entry) { /* func_002C0F50 */
ENTER(entry);
switch (entry) { case 0x2c1008: goto L_002C1008; case 0x2c1020: goto L_002C1020; case 0x2c1038: goto L_002C1038; case 0x2c1050: goto L_002C1050; case 0x2c1068: goto L_002C1068; case 0x2c1080: goto L_002C1080; case 0x2c1098: goto L_002C1098; case 0x2c10b0: goto L_002C10B0; }
SET64(11, RD(0) + RD(0));
SET64(10, RD(0) + RD(0));
SET64(3, (s64)(s32)0x410000);
SET64(6, (s64)(s32)0x4c0000);
SET64(7, (s64)(s32)0x2aaa0000);
SET32(3, RW(3) + 30592);
SET32(6, RW(6) + -28688);
SET32(8, RW(0) + 6);
SET64(7, RD(7) | 0xaaab);
SET32(9, RW(0) + 1);
L_002C0F78:;
wr32(c, (RW(4) + 144), RW(0));
SET64(12, RD(0) + RD(0));
wr32(c, (RW(4) + 148), RW(0));
wr32(c, (RW(4) + 152), RW(0));
wr32(c, (RW(4) + 156), RW(0));
wr32(c, (RW(4) + 160), RW(0));
wr32(c, (RW(4) + 164), RW(0));
wr32(c, (RW(4) + 168), RW(0));
wr32(c, (RW(4) + 172), RW(0));
L_002C0FA0:;
SET32(13, RW(12) + RW(10));
SET32(14, RSW(13) >> 5);
SET64(13, RD(13) & 0x1f);
SET32(15, RW(14) << 2);
SET32(14, RW(9) << (RW(13) & 31));
SET32(13, RW(5) + RW(15));
SET64(13, (s32)rd32(c, (RW(13) + 1048)));
SET64(13, RD(13) & RD(14));
{ int t = RD(13) == RD(0);  if (t) goto L_002C10C0; }
div_s(c, 0, RSW(12), RSW(8));
SET32(14, RW(12) >> 31);
SET64(15, c->hi.d[0]);
mul_s(c, 0, 0, RSW(7), RSW(12));
SET64(13, c->hi.d[0]);
SET32(13, RW(13) + RW(14));
SET64(1, RD(13) < (u64)(s64)8);
{ int t = RD(1) == RD(0);  if (t) goto L_002C10C0; }
SET32(13, RW(13) << 2);
SET32(13, RW(13) + RW(6));
SET64(13, (s32)rd32(c, (RW(13) + 0)));
{ u32 t = RW(13);  switch (t) { case 0x2c1008: goto L_002C1008; case 0x2c1020: goto L_002C1020; case 0x2c1038: goto L_002C1038; case 0x2c1050: goto L_002C1050; case 0x2c1068: goto L_002C1068; case 0x2c1080: goto L_002C1080; case 0x2c1098: goto L_002C1098; case 0x2c10b0: goto L_002C10B0; default: rt_jump(c, t); return; } }
L_002C1008:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 144), c->f[0].u); goto L_002C10C0;
L_002C1020:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 148), c->f[0].u); goto L_002C10C0;
L_002C1038:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 152), c->f[0].u); goto L_002C10C0;
L_002C1050:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 156), c->f[0].u); goto L_002C10C0;
L_002C1068:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 160), c->f[0].u); goto L_002C10C0;
L_002C1080:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 164), c->f[0].u); goto L_002C10C0;
L_002C1098:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 168), c->f[0].u); goto L_002C10C0;
L_002C10B0:;
SET32(13, RW(15) << 2);
SET32(13, RW(3) + RW(13));
c->f[0].u = rd32(c, (RW(13) + 0));
wr32(c, (RW(4) + 172), c->f[0].u);
L_002C10C0:;
SET32(12, RW(12) + 1);
SET64(13, RSD(12) < (s64)48);
{ int t = RD(13) != RD(0);  if (t) { POLL(); goto L_002C0FA0; } }
SET32(11, RW(11) + 1);
SET32(4, RW(4) + 32);
SET64(12, RSD(11) < (s64)2);
{ int t = RD(12) != RD(0); SET32(10, RW(10) + 48); if (t) { POLL(); goto L_002C0F78; } }
 return;
}
void JP_F_002C0F50(Ctx *c) { JP_B_002C0F50(c, 0x2c0f50); }
void JP_F_002C1008(Ctx *c) { JP_B_002C0F50(c, 0x2c1008); }
void JP_F_002C1020(Ctx *c) { JP_B_002C0F50(c, 0x2c1020); }
void JP_F_002C1038(Ctx *c) { JP_B_002C0F50(c, 0x2c1038); }
void JP_F_002C1050(Ctx *c) { JP_B_002C0F50(c, 0x2c1050); }
void JP_F_002C1068(Ctx *c) { JP_B_002C0F50(c, 0x2c1068); }
void JP_F_002C1080(Ctx *c) { JP_B_002C0F50(c, 0x2c1080); }
void JP_F_002C1098(Ctx *c) { JP_B_002C0F50(c, 0x2c1098); }
void JP_F_002C10B0(Ctx *c) { JP_B_002C0F50(c, 0x2c10b0); }

void JP_F_002C10F0(Ctx *c) { /* func_002C10F0 */
ENTER(0x2c10f0);
SET32(29, RW(29) + -496);
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
SET64(8, rd16(c, (RW(4) + 0)));
{ int t = RD(8) == RD(3); SET64(20, RD(4) + RD(0)); if (t) goto L_002C2644; }
SET32(7, RW(0) + 2560);
{ int t = RD(8) == RD(7);  if (t) goto L_002C2440; }
SET32(3, RW(0) + 2305);
if (RD(8) == RD(3)) { SET64(4, (s32)rd32(c, (RW(20) + 60))); goto L_002C23E4; }
SET32(6, RW(0) + 2304);
if (RD(8) == RD(6)) { SET32(4, RW(0) + 108); goto L_002C2298; }
SET32(3, RW(0) + 2049);
if (RD(8) == RD(3)) { SET64(4, (s32)rd32(c, (RW(20) + 60))); goto L_002C2270; }
SET32(5, RW(0) + 2048);
{ int t = RD(8) == RD(5);  if (t) goto L_002C21A0; }
SET32(3, RW(0) + 1795);
if (RD(8) == RD(3)) { SET64(4, (s32)rd32(c, (RW(20) + 64))); goto L_002C20B8; }
SET32(3, RW(0) + 1794);
if (RD(8) == RD(3)) { SET64(5, (s32)rd32(c, (RW(20) + 64))); goto L_002C2010; }
SET32(3, RW(0) + 1793);
if (RD(8) == RD(3)) { SET64(3, rd16(c, (RW(20) + 0))); goto L_002C2004; }
SET32(3, RW(0) + 1792);
if (RD(8) == RD(3)) { SET64(3, (s32)rd32(c, (RW(20) + 128))); goto L_002C1738; }
SET32(9, RW(0) + 1538);
if (RD(8) == RD(9)) { SET64(4, (s32)rd32(c, (RW(20) + 60))); goto L_002C16A0; }
SET32(9, RW(0) + 1537);
if (RD(8) == RD(9)) { SET64(5, (s32)rd32(c, (RW(20) + 60))); goto L_002C15B4; }
SET32(11, RW(0) + 1536);
{ int t = RD(8) == RD(11);  if (t) goto L_002C1530; }
SET32(9, RW(0) + 1280);
if (RD(8) == RD(9)) { SET64(8, rd8(c, (RW(20) + 140))); goto L_002C14B8; }
SET32(3, RW(0) + 3);
if (RD(8) == RD(3)) { SET64(4, (s32)rd32(c, (RW(20) + 60))); goto L_002C1480; }
SET32(3, RW(0) + 2);
if (RD(8) == RD(3)) { SET32(4, RW(0) + 72); goto L_002C1434; }
SET32(5, RW(0) + 1);
if (RD(8) == RD(5)) { SET64(4, (s32)rd32(c, (RW(20) + 60))); goto L_002C12FC; }
if (RD(8) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C1204; }
SET64(31, rd64(c, (RW(29) + 176))); goto L_002C26AC;
L_002C1204:;
SET64(3, (s64)(s32)0x410000);
wr8(c, (RW(20) + 140), (u8)RW(0));
SET32(4, RW(2) << 2);
SET32(3, RW(3) + 30544);
wr32(c, (RW(20) + 128), RW(0));
SET32(3, RW(3) + RW(4));
SET64(2, (s64)(s32)0x540000);
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(0) + 104);
wr32(c, (RW(20) + 136), RW(3));
SET64(2, rd16(c, (RW(2) + 3066)));
SET64(31, 0x2c1238); wr32(c, (RW(20) + 132), RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C12BC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c124c); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 10768);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + 10776);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 10788);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(2));
SET32(4, RW(4) + 28512);
wr32(c, (RW(16) + 80), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 76), RW(0));
SET32(3, RW(3) + 28520);
wr32(c, (RW(16) + 72), RW(0));
SET32(2, RW(2) + 28532);
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
L_002C12BC:;
wr32(c, (RW(20) + 60), RW(16));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 96), RW(20));
SET32(4, RW(0) + 4);
SET64(31, 0x2c12d4); wr32(c, (RW(16) + 64), RW(2)); JP_F_00100530(c);
wr32(c, (RW(16) + 60), RW(2));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(16) + 68), RW(0));
SET64(5, (s32)rd32(c, (RW(20) + 60)));
SET64(31, 0x2c12ec); SET64(4, RD(20) + RD(0)); JP_F_0013A470(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C12FC:;
SET32(3, RW(0) + 4);
SET64(6, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(6) != RD(3);  if (t) goto L_002C26A8; }
{ int t = RD(4) == RD(0); SET64(16, (s32)rd32(c, (RW(4) + 68))); if (t) goto L_002C1324; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c1324);  rt_call(c, t); }
L_002C1324:;
SET32(3, RW(0) + 4);
{ int t = RD(16) == RD(3); wr32(c, (RW(20) + 60), RW(0)); if (t) goto L_002C13B8; }
SET32(3, RW(0) + 3);
{ int t = RD(16) == RD(3);  if (t) goto L_002C1364; }
SET32(3, RW(0) + 2);
{ int t = RD(16) == RD(3);  if (t) goto L_002C1364; }
SET32(3, RW(0) + 1);
{ int t = RD(16) == RD(3);  if (t) goto L_002C1364; }
{ int t = RD(16) == RD(0);  if (t) goto L_002C1364; }
SET64(4, RD(20) + RD(0)); goto L_002C141C;
L_002C1364:;
SET64(3, (s64)(s32)0x410000);
SET32(4, RW(16) << 2);
SET32(3, RW(3) + 30544);
wr32(c, (RW(20) + 128), RW(16));
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
wr32(c, (RW(20) + 136), RW(3));
{ int t = RD(16) != RD(0); wr32(c, (RW(20) + 132), RW(0)); if (t) goto L_002C13AC; }
SET64(31, 0x2c1390);  JP_F_00242B60(c);
SET64(3, RD(2) & 0xffff);
if (RD(3) != RD(0)) { SET32(3, RW(0) + 1280); goto L_002C13B0; }
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C13AC:;
SET32(3, RW(0) + 1280);
L_002C13B0:;
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C13B8:;
SET64(3, (s32)rd32(c, (RW(20) + 132)));
SET64(4, (s32)rd32(c, (RW(20) + 136)));
SET32(3, RW(3) << 3);
SET32(3, RW(3) + RW(4));
SET64(3, rd8(c, (RW(3) + 1)));
SET64(3, RD(3) & 0x80);
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
{ int t = RD(3) == RD(0);  if (t) goto L_002C1410; }
SET64(3, (s32)rd32(c, (RW(20) + 132)));
L_002C13E4:;
SET32(3, RW(3) + -1);
wr32(c, (RW(20) + 132), RW(3));
SET32(4, RW(3) << 3);
SET64(3, (s32)rd32(c, (RW(20) + 136)));
SET32(3, RW(3) + RW(4));
SET64(3, rd8(c, (RW(3) + 1)));
SET64(3, RD(3) & 0x80);
SET64(3, RD(0) < RD(3));
SET64(3, RD(3) ^ 0x1);
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(20) + 132))); { POLL(); goto L_002C13E4; } }
L_002C1410:;
SET32(3, RW(0) + 1280);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C141C:;
SET64(31, 0x2c1424);  JP_F_00139AB0(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C1434:;
SET64(31, 0x2c143c);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C144C; }
SET64(31, 0x2c144c); SET64(4, RD(16) + RD(0)); JP_F_002C6990(c);
L_002C144C:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c145c); wr32(c, (RW(20) + 60), RW(16)); JP_F_002C6970(c);
SET64(2, (s32)rd32(c, (RW(20) + 60)));
wr16(c, (RW(2) + 68), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(20) + 60)));
SET64(31, 0x2c1470); SET64(4, RD(20) + RD(0)); JP_F_0013A470(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C1480:;
SET32(3, RW(0) + 4);
SET64(5, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(5) != RD(3);  if (t) goto L_002C26A8; }
if (RD(4) == RD(0)) { wr32(c, (RW(20) + 60), RW(0)); goto L_002C14AC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c14a8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(20) + 60), RW(0));
L_002C14AC:;
SET32(3, RW(0) + 1280);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C14B8:;
if (RD(8) == RD(0)) { SET64(10, (s32)rd32(c, (RW(20) + 132))); goto L_002C14D0; }
SET64(31, 0x2c14c8);  JP_F_00139AB0(c);
 goto L_002C26A8;
L_002C14D0:;
SET32(8, RW(0) + 5);
SET64(9, (s32)rd32(c, (RW(20) + 136)));
SET32(10, RW(10) << 3);
SET32(9, RW(9) + RW(10));
SET64(9, rd8(c, (RW(9) + 0)));
if (RD(9) == RD(8)) { wr16(c, (RW(20) + 0), (u16)RW(7)); goto L_002C26A8; }
SET32(7, RW(0) + 4);
if (RD(9) == RD(7)) { wr16(c, (RW(20) + 0), (u16)RW(6)); goto L_002C26A8; }
SET32(6, RW(0) + 3);
if (RD(9) == RD(6)) { wr16(c, (RW(20) + 0), (u16)RW(5)); goto L_002C26A8; }
SET32(5, RW(0) + 2);
if (RD(9) == RD(5)) { wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8; }
SET32(3, RW(0) + 1);
if (RD(9) == RD(3)) { wr16(c, (RW(20) + 0), (u16)RW(11)); goto L_002C26A8; }
SET32(2, RW(0) + -1);
SET64(31, 0x2c1528); wr16(c, (RW(28) + -31496), (u16)RW(2)); JP_F_00139AB0(c);
 goto L_002C26A8;
L_002C1530:;
SET64(31, 0x2c1538);  JP_F_00139590(c);
SET64(31, 0x2c1540);  JP_F_00139590(c);
SET64(31, 0x2c1548); SET64(4, (s32)rd32(c, (RW(2) + 20))); JP_F_001B8ED0(c);
SET64(31, 0x2c1550); SET32(4, RW(0) + 1876); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C1564; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c1564); SET64(5, RD(20) + RD(0)); JP_F_001A9520(c);
L_002C1564:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c1570); wr32(c, (RW(20) + 60), RW(16)); JP_F_001A83B0(c);
SET64(3, (s32)rd32(c, (RW(28) + -31416)));
SET64(2, (s32)rd32(c, (RW(20) + 60)));
wr32(c, (RW(2) + 844), RW(3));
SET64(2, (s32)rd32(c, (RW(20) + 132)));
SET64(3, (s32)rd32(c, (RW(20) + 136)));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET64(31, 0x2c1594); SET64(4, rd16(c, (RW(2) + 2))); JP_F_00361C30(c);
SET64(4, (s32)rd32(c, (RW(20) + 60)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c15a4); SET64(6, RD(0) + RD(0)); JP_F_001A8300(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3));
SET64(5, (s32)rd32(c, (RW(20) + 60)));
L_002C15B4:;
SET64(3, rd8(c, (RW(5) + 108)));
{ int t = RD(3) != RD(0);  if (t) goto L_002C26A8; }
SET64(4, (s32)rd32(c, (RW(5) + 1036)));
SET32(3, RW(0) + -1);
if (RD(4) != RD(3)) { SET32(3, RW(4) << 3); goto L_002C15D8; }
SET64(3, RD(0) + RD(0)); goto L_002C15E0;
L_002C15D8:;
SET32(3, RW(5) + RW(3));
SET32(3, RW(3) + 948);
L_002C15E0:;
if (RD(3) == RD(0)) { SET64(4, RD(20) + RD(0)); goto L_002C15F4; }
SET32(3, RW(0) + 1538);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C15F4:;
SET64(31, 0x2c15fc);  JP_F_002C0F50(c);
SET64(4, (s32)rd32(c, (RW(20) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(20) + 60), RW(0)); goto L_002C161C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c1618); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(20) + 60), RW(0));
L_002C161C:;
SET64(31, 0x2c1624);  JP_F_00139590(c);
SET64(31, 0x2c162c);  JP_F_00139590(c);
SET64(31, 0x2c1634); SET64(4, (s32)rd32(c, (RW(2) + 20))); JP_F_001B8DA0(c);
SET64(3, (s32)rd32(c, (RW(20) + 128)));
{ int t = RD(3) != RD(0);  if (t) goto L_002C1688; }
SET64(3, (s64)(s32)0x410000);
SET64(3, (s32)rd32(c, (RW(3) + 30224)));
{ int t = RSD(3) < 0; SET64(16, (s32)rd32(c, (RW(20) + 132))); if (t) goto L_002C1688; }
SET64(17, (s64)(s32)0x410000);
SET32(17, RW(17) + 30224);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_002C165C:;
{ int t = RD(16) != RD(3);  if (t) goto L_002C1678; }
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c1674); SET32(4, RW(4) + 2736); JP_F_002DDFF0(c);
L_002C1678:;
SET32(17, RW(17) + 8);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
if (RSD(3) >= 0) { SET64(3, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_002C165C; } }
L_002C1688:;
SET64(4, (s32)rd32(c, (RW(20) + 132)));
SET32(3, RW(0) + 1280);
SET32(4, RW(4) + 1);
wr32(c, (RW(20) + 132), RW(4));
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C16A0:;
SET32(2, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(4) + 1036)));
if (RD(3) != RD(2)) { SET32(2, RW(3) << 3); goto L_002C16B8; }
SET64(2, RD(0) + RD(0)); goto L_002C16C0;
L_002C16B8:;
SET32(2, RW(4) + RW(2));
SET32(2, RW(2) + 948);
L_002C16C0:;
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[0].u = rd32(c, (RW(2) + 4));
wr32(c, (RW(29) + 488), c->f[1].u);
{ int t = RD(4) == RD(0); wr32(c, (RW(29) + 492), c->f[0].u); if (t) goto L_002C16E4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c16e4); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002C16E4:;
SET32(4, RW(0) + 1876);
SET64(31, 0x2c16f0); wr32(c, (RW(20) + 60), RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C1704; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c1704); SET64(5, RD(20) + RD(0)); JP_F_001A9520(c);
L_002C1704:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c1710); wr32(c, (RW(20) + 60), RW(16)); JP_F_001A83B0(c);
SET64(3, (s32)rd32(c, (RW(28) + -31412)));
SET64(2, (s32)rd32(c, (RW(20) + 60)));
SET64(5, (s32)rd32(c, (RW(29) + 492)));
wr32(c, (RW(2) + 844), RW(3));
SET64(4, (s32)rd32(c, (RW(20) + 60)));
SET64(31, 0x2c172c); SET64(6, RD(0) + RD(0)); JP_F_001A8300(c);
SET32(3, RW(0) + 1537);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C1738:;
{ int t = RD(3) == RD(0); SET64(6, RD(0) + RD(0)); if (t) goto L_002C1754; }
SET32(2, RW(0) + 4);
if (RD(3) == RD(2)) { SET64(4, (s32)rd32(c, (RW(20) + 132))); goto L_002C1758; }
wr32(c, (RW(29) + 272), RW(0)); goto L_002C17A4;
L_002C1754:;
SET64(4, (s32)rd32(c, (RW(20) + 132)));
L_002C1758:;
{ int t = RSD(4) < 0; SET64(7, RD(0) + RD(0)); if (t) goto L_002C1790; }
SET64(5, (s64)(s32)0x410000);
SET32(2, RW(0) + 2);
SET32(5, RW(5) + 29264);
L_002C176C:;
SET64(3, rd8(c, (RW(5) + 0)));
{ int t = RD(3) != RD(2);  if (t) goto L_002C1780; }
SET32(6, RW(6) + 1);
L_002C1780:;
SET32(7, RW(7) + 1);
SET64(1, RSD(4) < RSD(7));
{ int t = RD(1) == RD(0); SET32(5, RW(5) + 8); if (t) { POLL(); goto L_002C176C; } }
L_002C1790:;
if (RSD(6) <= 0) { wr32(c, (RW(29) + 272), RW(0)); goto L_002C17A4; }
SET32(2, RW(6) + -1);
wr32(c, (RW(29) + 272), RW(2)); goto L_002C17A4;
L_002C17A4:;
wr32(c, (RW(20) + 212), RW(0));
SET32(16, RW(29) + 356);
wr32(c, (RW(20) + 208), RW(0));
L_002C17B0:;
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
SET64(31, 0x2c17e8); c->f[15].u = c->f[12].u; JP_F_0013C6B0(c);
SET32(16, RW(16) + 52);
SET32(2, RW(29) + 460);
SET64(2, RD(16) < RD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C17B0; } }
SET64(31, 0x2c1804); SET32(4, RW(29) + 352); JP_F_00356210(c);
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x410000);
wr16(c, (RW(29) + 352), (u16)RW(3));
SET32(2, RW(2) + 27504);
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
if (RSD(2) >= 0) { SET32(6, RW(29) + 356); goto L_002C19C4; }
SET64(4, rd16(c, (RW(7) + 4)));
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 30560);
SET64(3, RD(0) | 0xffff);
SET32(4, RW(4) << 2);
SET32(2, RW(2) + RW(4));
SET64(22, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(22) + 0)));
{ int t = RD(2) == RD(3); SET64(21, RD(0) + RD(0)); if (t) goto L_002C1890; }
SET64(4, RD(22) + RD(0));
L_002C1870:;
SET32(4, RW(4) + 24);
SET32(21, RW(21) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_002C1870; } }
L_002C1890:;
SET32(16, RW(21) + 1);
SET32(2, RW(16) << 1);
SET64(19, RD(0) + RD(0));
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 2);
SET64(31, 0x2c18b4); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C18E0; }
SET64(5, (s64)(s32)0x2c0000);
SET64(8, RD(16) + RD(0));
SET32(19, RW(0) + 1);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + 3520);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2c18dc); SET32(7, RW(0) + 52); JP_F_00102580(c);
SET64(18, RD(2) + RD(0));
L_002C18E0:;
{ int t = RSD(21) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002C1998; }
SET64(16, RD(18) + RD(0));
L_002C18EC:;
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x2c1900); SET64(7, RD(22) + RD(0)); JP_F_002C0E40(c);
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
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 52); if (t) { POLL(); goto L_002C18EC; } }
L_002C1998:;
SET32(2, RW(19) << 1);
SET32(2, RW(2) + RW(19));
SET64(3, RD(0) | 0xffff);
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(19));
SET32(2, RW(2) << 2);
SET32(2, RW(18) + RW(2));
wr16(c, (RW(2) + 0), (u16)RW(3));
wr32(c, (RW(20) + 208), RW(18));
wr32(c, (RW(29) + 460), RW(18)); goto L_002C1A54;
L_002C19C4:;
SET64(4, RD(20) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c19d4); wr32(c, (RW(29) + 460), RW(0)); JP_F_002C0E40(c);
c->f[1].u = rd32(c, (RW(20) + 144));
c->f[0].u = rd32(c, (RW(29) + 372));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 372), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 148));
c->f[0].u = rd32(c, (RW(29) + 376));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 376), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 152));
c->f[0].u = rd32(c, (RW(29) + 380));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 380), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 156));
c->f[0].u = rd32(c, (RW(29) + 384));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 384), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 160));
c->f[0].u = rd32(c, (RW(29) + 388));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 388), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 164));
c->f[0].u = rd32(c, (RW(29) + 392));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 392), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 168));
c->f[0].u = rd32(c, (RW(29) + 396));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 396), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 172));
c->f[0].u = rd32(c, (RW(29) + 400));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 400), c->f[0].u);
L_002C1A54:;
SET64(3, (s32)rd32(c, (RW(20) + 132)));
SET64(2, (s64)(s32)0x410000);
SET64(4, (s32)rd32(c, (RW(20) + 136)));
SET32(2, RW(2) + 27504);
SET32(3, RW(3) << 3);
SET32(3, RW(3) + RW(4));
SET64(4, rd16(c, (RW(3) + 2)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
SET32(7, RW(2) + 24);
SET64(2, (s32)rd32(c, (RW(2) + 24)));
if (RSD(2) >= 0) { SET32(6, RW(29) + 408); goto L_002C1DA8; }
SET64(4, rd16(c, (RW(7) + 4)));
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 30560);
SET64(3, RD(0) | 0xffff);
SET32(4, RW(4) << 2);
SET32(2, RW(2) + RW(4));
SET64(21, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ int t = RD(2) == RD(3); SET64(18, RD(0) + RD(0)); if (t) goto L_002C1AD8; }
SET64(4, RD(21) + RD(0));
L_002C1ABC:;
SET32(4, RW(4) + 24);
SET32(18, RW(18) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_002C1ABC; } }
L_002C1AD8:;
SET32(16, RW(18) + 1);
SET32(2, RW(16) << 1);
SET64(19, RD(0) + RD(0));
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(16));
SET32(2, RW(2) << 2);
SET64(31, 0x2c1afc); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C1B28; }
SET64(5, (s64)(s32)0x2c0000);
SET64(8, RD(16) + RD(0));
SET32(19, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET32(5, RW(5) + 3520);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2c1b24); SET32(7, RW(0) + 52); JP_F_00102580(c);
SET64(17, RD(2) + RD(0));
L_002C1B28:;
{ int t = RSD(18) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002C1C28; }
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
L_002C1B6C:;
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 1);
SET64(6, RD(16) + RD(0));
SET64(31, 0x2c1b80); SET64(7, RD(21) + RD(0)); JP_F_002C0E40(c);
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
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 52); if (t) { POLL(); goto L_002C1B6C; } }
L_002C1C28:;
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
wr32(c, (RW(29) + 464), RW(17));
SET64(2, rd16(c, (RW(17) + 0)));
{ int t = RD(2) == RD(3); SET64(16, RD(0) + RD(0)); if (t) goto L_002C1F24; }
SET64(17, RD(0) + RD(0));
L_002C1C64:;
c->f[0].u = RW(16);
SET64(2, (s64)(s32)0x3be50000);
SET64(2, RD(2) | 0x6042);
c->f[21].u = RW(2);
SET64(31, 0x2c1c7c); c->f[20].f = (f32)(s32)c->f[0].u; JP_F_002C81A0(c);
SET64(31, 0x2c1c84); SET64(4, RD(2) + RD(0)); JP_F_002C81C0(c);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(0));
SET64(31, 0x2c1c98); c->f[20].f = fpu(c->facc + F(21) * F(20)); JP_F_002C81A0(c);
SET64(3, (s32)rd32(c, (RW(20) + 128)));
{ int t = RD(3) == RD(0); SET64(4, (s32)rd32(c, (RW(2) + 0))); if (t) goto L_002C1CF0; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002C1CF0; }
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(4) << 2);
c->f[0].u = rd32(c, (RW(2) + 30528));
SET32(4, RW(3) + RW(29));
SET64(3, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(3) + 30536));
SET64(2, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(2) + 30532));
wr32(c, (RW(29) + 336), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 30540));
wr32(c, (RW(29) + 340), c->f[2].u);
wr32(c, (RW(29) + 344), c->f[1].u);
wr32(c, (RW(29) + 348), c->f[0].u);
c->f[20].u = rd32(c, (RW(4) + 336)); goto L_002C1D58;
L_002C1CF0:;
SET32(2, RW(4) << 2);
SET32(3, RW(2) + RW(29));
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 30512));
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 30516));
wr32(c, (RW(29) + 320), c->f[1].u);
SET64(2, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(2) + 30520));
wr32(c, (RW(29) + 324), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 30524));
wr32(c, (RW(29) + 328), c->f[2].u);
SET64(2, (s32)rd32(c, (RW(29) + 272)));
wr32(c, (RW(29) + 332), c->f[1].u);
c->f[1].u = rd32(c, (RW(3) + 320));
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s64)(s32)0x41800000);
c->f[1].f = fpu(F(0) * F(1));
c->f[0].u = RW(2);
c->f[0].f = fpu_div(F(1), F(0));
c->f[20].f = fpu(F(20) + F(0));
L_002C1D58:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(20) <= F(0);
{ int t = c->fcc;  if (t) goto L_002C1D78; }
c->f[20].u = c->f[0].u;
L_002C1D78:;
SET64(3, (s32)rd32(c, (RW(18) + 0)));
SET64(2, RD(0) | 0xffff);
SET32(3, RW(3) + RW(17));
wr32(c, (RW(3) + 48), c->f[20].u);
SET32(17, RW(17) + 52);
SET64(3, (s32)rd32(c, (RW(29) + 464)));
SET32(3, RW(3) + RW(17));
SET64(3, rd16(c, (RW(3) + 0)));
{ int t = RD(3) != RD(2); SET32(16, RW(16) + 1); if (t) { POLL(); goto L_002C1C64; } }
SET64(2, (s32)rd32(c, (RW(20) + 132))); goto L_002C1F28;
L_002C1DA8:;
SET64(4, RD(20) + RD(0));
SET32(5, RW(0) + 1);
SET64(31, 0x2c1db8); wr32(c, (RW(29) + 464), RW(0)); JP_F_002C0E40(c);
c->f[1].u = rd32(c, (RW(20) + 176));
c->f[0].u = rd32(c, (RW(29) + 424));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 424), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 180));
c->f[0].u = rd32(c, (RW(29) + 428));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 428), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 184));
c->f[0].u = rd32(c, (RW(29) + 432));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 432), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 188));
c->f[0].u = rd32(c, (RW(29) + 436));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 436), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 192));
c->f[0].u = rd32(c, (RW(29) + 440));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 440), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 196));
c->f[0].u = rd32(c, (RW(29) + 444));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 444), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 200));
c->f[0].u = rd32(c, (RW(29) + 448));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(29) + 448), c->f[0].u);
c->f[1].u = rd32(c, (RW(20) + 204));
c->f[0].u = rd32(c, (RW(29) + 452));
c->f[0].f = fpu(F(0) + F(1));
SET64(31, 0x2c1e3c); wr32(c, (RW(29) + 452), c->f[0].u); JP_F_002C81A0(c);
SET64(31, 0x2c1e44); SET64(4, RD(2) + RD(0)); JP_F_002C81C0(c);
c->f[1].u = RW(0);
SET64(31, 0x2c1e50); c->f[20].f = fpu(F(1) + F(0)); JP_F_002C81A0(c);
SET64(3, (s32)rd32(c, (RW(20) + 128)));
{ int t = RD(3) == RD(0); SET64(4, (s32)rd32(c, (RW(2) + 0))); if (t) goto L_002C1EA8; }
SET32(2, RW(0) + 4);
{ int t = RD(3) == RD(2);  if (t) goto L_002C1EA8; }
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(4) << 2);
c->f[0].u = rd32(c, (RW(2) + 30528));
SET32(4, RW(3) + RW(29));
SET64(3, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(3) + 30536));
SET64(2, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(2) + 30532));
wr32(c, (RW(29) + 304), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 30540));
wr32(c, (RW(29) + 308), c->f[2].u);
wr32(c, (RW(29) + 312), c->f[1].u);
wr32(c, (RW(29) + 316), c->f[0].u);
c->f[20].u = rd32(c, (RW(4) + 304)); goto L_002C1F04;
L_002C1EA8:;
SET64(2, (s64)(s32)0x410000);
SET32(3, RW(4) << 2);
c->f[1].u = rd32(c, (RW(2) + 30512));
SET32(4, RW(3) + RW(29));
SET64(3, (s64)(s32)0x41800000);
SET64(2, (s32)rd32(c, (RW(29) + 272)));
wr32(c, (RW(29) + 288), c->f[1].u);
c->f[0].u = RW(2);
SET64(2, (s64)(s32)0x410000);
c->f[3].u = rd32(c, (RW(2) + 30516));
c->f[1].f = (f32)(s32)c->f[0].u;
SET64(2, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(2) + 30520));
wr32(c, (RW(29) + 292), c->f[3].u);
c->f[0].u = RW(3);
SET64(2, (s64)(s32)0x410000);
wr32(c, (RW(29) + 296), c->f[2].u);
c->f[2].u = rd32(c, (RW(2) + 30524));
wr32(c, (RW(29) + 300), c->f[2].u);
c->f[2].u = rd32(c, (RW(4) + 288));
c->f[1].f = fpu(F(1) * F(2));
c->f[0].f = fpu_div(F(1), F(0));
c->f[20].f = fpu(F(20) + F(0));
L_002C1F04:;
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->fcc = F(20) <= F(0);
if (c->fcc) { wr32(c, (RW(29) + 456), c->f[20].u); goto L_002C1F24; }
c->f[20].u = c->f[0].u;
wr32(c, (RW(29) + 456), c->f[20].u);
L_002C1F24:;
SET64(2, (s32)rd32(c, (RW(20) + 132)));
L_002C1F28:;
SET32(4, RW(29) + 352);
SET64(3, (s32)rd32(c, (RW(20) + 136)));
SET32(2, RW(2) << 3);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 6)));
SET64(31, 0x2c1f44); wr16(c, (RW(29) + 468), (u16)RW(2)); JP_F_003561A0(c);
SET64(3, (s32)rd32(c, (RW(20) + 132)));
SET64(2, rd16(c, (RW(28) + -30220)));
SET64(4, RD(3) ^ 0x5f);
SET64(4, RD(4) < (u64)(s64)1);
SET32(3, RW(3) << 3);
wr8(c, (RW(29) + 472), (u8)RW(4));
SET64(4, (s32)rd32(c, (RW(20) + 136)));
SET32(3, RW(3) + RW(4));
{ int t = RD(2) != RD(0); SET64(3, rd16(c, (RW(3) + 2))); if (t) goto L_002C1F8C; }
SET32(2, RW(0) + 16);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 135); goto L_002C1FBC; }
SET32(2, RW(0) + 12);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 131); goto L_002C1FBC; }
SET64(2, RD(0) + RD(0)); goto L_002C1FBC;
L_002C1F8C:;
SET32(2, RW(0) + 16);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 131); goto L_002C1FBC; }
SET32(2, RW(0) + 12);
{ int t = RD(3) == RD(2);  if (t) goto L_002C1FAC; }
 goto L_002C1FB8;
L_002C1FAC:;
SET32(2, RW(0) + 131);
 goto L_002C1FBC;
L_002C1FB8:;
SET64(2, RD(0) + RD(0));
L_002C1FBC:;
wr32(c, (RW(29) + 480), RW(2));
SET64(31, 0x2c1fc8); SET32(4, RW(0) + 1952); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C1FD8; }
SET64(31, 0x2c1fd8); SET64(4, RD(16) + RD(0)); JP_F_002FF230(c);
L_002C1FD8:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 352);
SET64(31, 0x2c1fe8); wr32(c, (RW(20) + 64), RW(16)); JP_F_002FEC10(c);
SET64(5, (s32)rd32(c, (RW(20) + 64)));
SET64(31, 0x2c1ff4); SET64(4, RD(20) + RD(0)); JP_F_0013A470(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3));
SET64(3, rd16(c, (RW(20) + 0)));
L_002C2004:;
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3));
SET64(5, (s32)rd32(c, (RW(20) + 64)));
L_002C2010:;
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(5) + 48)));
{ int t = RD(4) != RD(3);  if (t) goto L_002C26A8; }
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
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C20B8:;
SET64(31, 0x2c20c0);  JP_F_002F7390(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C26A8; }
SET64(4, (s32)rd32(c, (RW(20) + 64)));
if (RD(4) == RD(0)) { wr32(c, (RW(20) + 64), RW(0)); goto L_002C20E8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c20e4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(20) + 64), RW(0));
L_002C20E8:;
SET64(16, RD(0) + RD(0));
SET64(17, RD(20) + RD(0));
L_002C20F0:;
SET64(2, (s32)rd32(c, (RW(17) + 208)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C2108; }
SET64(31, 0x2c2104); SET32(4, RW(2) + -16); JP_F_00100430(c);
L_002C2108:;
SET32(16, RW(16) + 1);
wr32(c, (RW(17) + 208), RW(0));
SET64(2, RSD(16) < (s64)2);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 4); if (t) { POLL(); goto L_002C20F0; } }
SET64(31, 0x2c2124); SET64(4, RD(0) + RD(0)); JP_F_00138B20(c);
SET32(3, RW(0) + 1280);
wr16(c, (RW(20) + 0), (u16)RW(3));
SET64(3, (s16)rd16(c, (RW(20) + 72)));
if (RD(3) != RD(0)) { SET32(3, RW(0) + 1); goto L_002C2198; }
SET64(3, (s32)rd32(c, (RW(20) + 128)));
{ int t = RD(3) != RD(0);  if (t) goto L_002C2188; }
SET64(3, (s64)(s32)0x410000);
SET64(3, (s32)rd32(c, (RW(3) + 30224)));
{ int t = RSD(3) < 0; SET64(16, (s32)rd32(c, (RW(20) + 132))); if (t) goto L_002C2188; }
SET64(17, (s64)(s32)0x410000);
SET32(17, RW(17) + 30224);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_002C2160:;
{ int t = RD(16) != RD(3);  if (t) goto L_002C2178; }
SET64(5, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c2178); SET32(4, RW(4) + 2736); JP_F_002DDFF0(c);
L_002C2178:;
SET32(17, RW(17) + 8);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
if (RSD(3) >= 0) { SET64(3, (s32)rd32(c, (RW(17) + 0))); { POLL(); goto L_002C2160; } }
L_002C2188:;
SET64(3, (s32)rd32(c, (RW(20) + 132)));
SET32(3, RW(3) + 1);
wr32(c, (RW(20) + 132), RW(3)); goto L_002C26A8;
L_002C2198:;
wr8(c, (RW(20) + 140), (u8)RW(3)); goto L_002C26A8;
L_002C21A0:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c21ac); SET32(4, RW(4) + 2736); JP_F_002DDD60(c);
if (RD(2) != RD(0)) { SET32(4, RW(0) + 100); goto L_002C21CC; }
SET64(4, (s32)rd32(c, (RW(20) + 132)));
SET32(3, RW(0) + 1280);
SET32(4, RW(4) + 1);
wr32(c, (RW(20) + 132), RW(4));
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C21CC:;
SET64(31, 0x2c21d4);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C2250; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c21e8); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 10768);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + 10776);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 10788);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(2));
SET32(4, RW(4) + 28272);
wr32(c, (RW(16) + 80), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 76), RW(0));
SET32(3, RW(3) + 28280);
wr32(c, (RW(16) + 72), RW(0));
SET32(2, RW(2) + 28292);
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 84), RW(0));
wr32(c, (RW(16) + 68), RW(0));
wr32(c, (RW(16) + 56), RW(4));
wr32(c, (RW(16) + 20), RW(3));
wr32(c, (RW(16) + 36), RW(2));
wr32(c, (RW(16) + 88), RW(0));
wr32(c, (RW(16) + 92), RW(0));
L_002C2250:;
SET64(5, RD(16) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c2260); wr32(c, (RW(20) + 60), RW(16)); JP_F_0013A470(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C2270:;
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(4) != RD(3);  if (t) goto L_002C26A8; }
SET64(4, (s32)rd32(c, (RW(20) + 132)));
SET32(3, RW(0) + 1280);
SET32(4, RW(4) + 1);
wr32(c, (RW(20) + 132), RW(4));
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C2298:;
SET64(31, 0x2c22a0);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C2324; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c22b4); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 10768);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + 10776);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 10788);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(2));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 80), RW(0));
SET32(5, RW(5) + 28432);
wr32(c, (RW(16) + 76), RW(0));
SET32(4, RW(4) + 28440);
wr32(c, (RW(16) + 72), RW(0));
SET32(3, RW(3) + 28452);
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
L_002C2324:;
wr32(c, (RW(20) + 60), RW(16));
SET64(2, (s32)rd32(c, (RW(20) + 132)));
SET32(4, RW(2) + 1);
wr32(c, (RW(20) + 132), RW(4));
SET32(3, RW(4) << 3);
SET64(2, (s32)rd32(c, (RW(20) + 136)));
SET32(2, RW(2) + RW(3));
SET64(2, rd8(c, (RW(2) + 0)));
{ int t = RD(2) != RD(0);  if (t) goto L_002C2390; }
SET64(2, (s32)rd32(c, (RW(20) + 128)));
if (RD(2) != RD(0)) { SET64(16, (s32)rd32(c, (RW(20) + 60))); goto L_002C2364; }
SET64(2, (s64)(s32)0x540000);
wr16(c, (RW(2) + 3066), (u16)RW(0));
SET64(16, (s32)rd32(c, (RW(20) + 60)));
L_002C2364:;
SET32(2, RW(0) + 2);
SET32(4, RW(0) + 8);
SET64(31, 0x2c2374); wr32(c, (RW(16) + 64), RW(2)); JP_F_00100530(c);
wr32(c, (RW(16) + 60), RW(2));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 60)));
wr32(c, (RW(2) + 4), RW(0));
wr8(c, (RW(16) + 100), (u8)RW(0));
wr32(c, (RW(16) + 68), RW(0)); goto L_002C23C8;
L_002C2390:;
SET64(2, (s64)(s32)0x540000);
SET32(3, RW(0) + 2);
wr16(c, (RW(2) + 3066), (u16)RW(4));
SET64(16, (s32)rd32(c, (RW(20) + 60)));
SET32(4, RW(0) + 8);
SET64(31, 0x2c23ac); wr32(c, (RW(16) + 64), RW(3)); JP_F_00100530(c);
wr32(c, (RW(16) + 60), RW(2));
SET32(3, RW(0) + 1);
wr32(c, (RW(2) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 60)));
wr32(c, (RW(2) + 4), RW(0));
wr8(c, (RW(16) + 100), (u8)RW(3));
wr32(c, (RW(16) + 68), RW(0));
L_002C23C8:;
SET64(5, (s32)rd32(c, (RW(20) + 60)));
SET64(31, 0x2c23d4); SET64(4, RD(20) + RD(0)); JP_F_0013A470(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C23E4:;
SET32(3, RW(0) + 4);
SET64(5, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(5) != RD(3);  if (t) goto L_002C26A8; }
{ int t = RD(4) == RD(0); SET64(16, (s32)rd32(c, (RW(4) + 68))); if (t) goto L_002C240C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c240c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002C240C:;
{ int t = RD(16) == RD(0); wr32(c, (RW(20) + 60), RW(0)); if (t) goto L_002C241C; }
SET64(4, RD(20) + RD(0)); goto L_002C2428;
L_002C241C:;
SET32(3, RW(0) + 1280);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C2428:;
SET64(31, 0x2c2430);  JP_F_00139AB0(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C2440:;
SET64(4, (s64)(s32)0x540000);
SET32(5, RW(0) + 134);
SET64(31, 0x2c2450); SET32(4, RW(4) + 2736); JP_F_002DDFF0(c);
SET64(4, (s32)rd32(c, (RW(20) + 128)));
SET32(2, RW(0) + 3);
{ int t = RD(4) == RD(2);  if (t) goto L_002C24DC; }
SET32(2, RW(0) + 2);
{ int t = RD(4) == RD(2);  if (t) goto L_002C24B8; }
SET32(3, RW(0) + 1);
{ int t = RD(4) == RD(3);  if (t) goto L_002C24AC; }
{ int t = RD(4) == RD(0);  if (t) goto L_002C2488; }
 goto L_002C2508;
L_002C2488:;
SET64(2, (s64)(s32)0x540000);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 3064);
SET64(31, 0x2c249c); wr16(c, (RW(2) + 3066), (u16)RW(0)); JP_F_002DDC70(c);
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x540000);
wr8(c, (RW(2) + 3068), (u8)RW(3)); goto L_002C2508;
L_002C24AC:;
SET64(2, (s64)(s32)0x540000);
wr8(c, (RW(2) + 3069), (u8)RW(3)); goto L_002C2508;
L_002C24B8:;
SET64(4, (s64)(s32)0x540000);
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x540000);
SET32(4, RW(4) + 2736);
wr8(c, (RW(2) + 3070), (u8)RW(3));
SET64(31, 0x2c24d4); SET32(5, RW(0) + 42); JP_F_002DDFF0(c);
 goto L_002C2508;
L_002C24DC:;
SET64(4, (s64)(s32)0x540000);
SET32(3, RW(0) + 1);
SET64(2, (s64)(s32)0x540000);
SET32(4, RW(4) + 2736);
wr8(c, (RW(2) + 3071), (u8)RW(3));
SET64(31, 0x2c24f8); SET32(5, RW(0) + 43); JP_F_002DDFF0(c);
SET64(4, (s64)(s32)0x540000);
SET32(5, RW(0) + 58);
SET64(31, 0x2c2508); SET32(4, RW(4) + 2736); JP_F_002DDFF0(c);
L_002C2508:;
SET64(4, (s64)(s32)0x540000);
SET64(3, RD(0) + RD(0));
SET32(4, RW(4) + 2720);
L_002C2514:;
SET64(2, rd8(c, (RW(4) + 348)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C2530; }
SET32(3, RW(3) + 1);
SET64(2, RSD(3) < (s64)4);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 1); if (t) { POLL(); goto L_002C2514; } }
L_002C2530:;
SET32(2, RW(0) + 4);
if (RD(3) != RD(2)) { SET64(16, RD(0) + RD(0)); goto L_002C2560; }
SET64(4, (s64)(s32)0x540000);
SET32(5, RW(0) + 59);
SET64(31, 0x2c254c); SET32(4, RW(4) + 2736); JP_F_002DDFF0(c);
SET64(4, (s64)(s32)0x540000);
SET32(5, RW(0) + 135);
SET64(31, 0x2c255c); SET32(4, RW(4) + 2736); JP_F_002DDFF0(c);
SET64(16, RD(0) + RD(0));
L_002C2560:;
SET64(4, (s64)(s32)0x540000);
SET32(5, RW(16) + 189);
SET64(31, 0x2c2570); SET32(4, RW(4) + 2736); JP_F_002DDFF0(c);
SET32(16, RW(16) + 1);
SET64(2, RSD(16) < (s64)39);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C2560; } }
SET64(31, 0x2c2588);  JP_F_00242B60(c);
SET64(3, RD(2) & 0xffff);
if (RD(3) != RD(0)) { SET32(4, RW(0) + 32); goto L_002C25C4; }
SET64(3, (s32)rd32(c, (RW(20) + 128)));
SET32(3, RW(3) + -1);
SET64(1, RD(3) < (u64)(s64)3);
{ int t = RD(1) == RD(0);  if (t) goto L_002C25C0; }
SET32(3, RW(0) + 1280);
wr16(c, (RW(20) + 0), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(20) + 132)));
SET32(3, RW(3) + 1);
wr32(c, (RW(20) + 132), RW(3)); goto L_002C26A8;
L_002C25C0:;
SET32(4, RW(0) + 32);
L_002C25C4:;
SET64(31, 0x2c25cc);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C25DC; }
SET64(31, 0x2c25dc); SET64(4, RD(16) + RD(0)); JP_F_001509B0(c);
L_002C25DC:;
SET32(5, RW(0) + 512);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2c25f8); wr32(c, (RW(20) + 216), RW(16)); JP_F_00150830(c);
SET64(31, 0x2c2600); SET32(4, RW(0) + 576); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C2610; }
SET64(31, 0x2c2610); SET64(4, RD(16) + RD(0)); JP_F_002E0540(c);
L_002C2610:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c261c); wr32(c, (RW(20) + 60), RW(16)); JP_F_002E02B0(c);
SET64(3, (s32)rd32(c, (RW(20) + 216)));
SET64(2, (s32)rd32(c, (RW(20) + 60)));
wr32(c, (RW(2) + 76), RW(3));
SET64(5, (s32)rd32(c, (RW(20) + 60)));
SET64(31, 0x2c2634); SET64(4, RD(20) + RD(0)); JP_F_0013A470(c);
SET64(3, rd16(c, (RW(20) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(20) + 0), (u16)RW(3)); goto L_002C26A8;
L_002C2644:;
SET64(4, (s32)rd32(c, (RW(20) + 60)));
SET32(3, RW(0) + 4);
SET64(5, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(5) != RD(3);  if (t) goto L_002C26A8; }
if (RD(4) == RD(0)) { wr32(c, (RW(20) + 60), RW(0)); goto L_002C2674; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c2670); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(20) + 60), RW(0));
L_002C2674:;
SET64(4, (s32)rd32(c, (RW(20) + 216)));
if (RD(4) == RD(0)) { wr32(c, (RW(20) + 216), RW(0)); goto L_002C2694; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c2690); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(20) + 216), RW(0));
L_002C2694:;
SET32(3, RW(0) + 1280);
wr16(c, (RW(20) + 0), (u16)RW(3));
SET64(3, (s32)rd32(c, (RW(20) + 132)));
SET32(3, RW(3) + 1);
wr32(c, (RW(20) + 132), RW(3));
L_002C26A8:;
SET64(31, rd64(c, (RW(29) + 176)));
L_002C26AC:;
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
SET32(29, RW(29) + 496); return;
}

void JP_F_002C26E0(Ctx *c) { /* func_002C26E0 */
ENTER(0x2c26e0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
{ int t = RD(19) == RD(0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_002C2858; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 10768);
SET32(3, RW(3) + 10776);
wr32(c, (RW(19) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(19) + 20), RW(3));
SET32(2, RW(2) + 10788);
wr32(c, (RW(19) + 36), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 60)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 60))); goto L_002C2798; }
SET64(2, (s32)rd32(c, (RW(19) + 64)));
{ int t = RSD(2) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_002C2788; }
SET64(16, RD(0) + RD(0));
L_002C2744:;
SET64(2, (s32)rd32(c, (RW(19) + 60)));
SET32(2, RW(2) + RW(16));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_002C2768; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c2768); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002C2768:;
SET64(2, (s32)rd32(c, (RW(19) + 60)));
SET32(17, RW(17) + 1);
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 0), RW(0));
SET64(2, (s32)rd32(c, (RW(19) + 64)));
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 4); if (t) { POLL(); goto L_002C2744; } }
L_002C2788:;
SET64(31, 0x2c2790); SET64(4, (s32)rd32(c, (RW(19) + 60))); JP_F_00100430(c);
wr32(c, (RW(19) + 60), RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 60)));
L_002C2798:;
SET64(31, 0x2c27a0);  JP_F_00100430(c);
wr32(c, (RW(19) + 60), RW(0));
SET64(2, (s32)rd32(c, (RW(19) + 84)));
SET64(2, RD(2) & 0x1);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 84))); goto L_002C27D8; }
SET64(4, (s32)rd32(c, (RW(19) + 80)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 80), RW(0)); goto L_002C27D4; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c27d0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 80), RW(0));
L_002C27D4:;
SET64(2, (s32)rd32(c, (RW(19) + 84)));
L_002C27D8:;
SET64(2, RD(2) & 0x2);
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 84))); goto L_002C2808; }
SET64(4, (s32)rd32(c, (RW(19) + 72)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 72), RW(0)); goto L_002C2804; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c2800); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 72), RW(0));
L_002C2804:;
SET64(2, (s32)rd32(c, (RW(19) + 84)));
L_002C2808:;
SET64(2, RD(2) & 0x4);
if (RD(2) == RD(0)) { SET64(4, RD(19) + RD(0)); goto L_002C2838; }
SET64(4, (s32)rd32(c, (RW(19) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 76), RW(0)); goto L_002C2834; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c2830); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 76), RW(0));
L_002C2834:;
SET64(4, RD(19) + RD(0));
L_002C2838:;
SET64(31, 0x2c2840); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(19) + RD(0)); goto L_002C285C; }
SET64(31, 0x2c2858); SET64(4, RD(19) + RD(0)); JP_F_001004B0(c);
L_002C2858:;
SET64(2, RD(19) + RD(0));
L_002C285C:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002C2880(Ctx *c) { /* func_002C2880 */
ENTER(0x2c2880);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C2900; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 28592);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 8), RW(2)); if (t) goto L_002C28E8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 20496);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c28c8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002C28EC; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 20528);
wr32(c, (RW(17) + 8), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c28e8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_002C28E8:;
SET64(2, RD(16) << 48);
L_002C28EC:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C2904; }
SET64(31, 0x2c2900); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002C2900:;
SET64(2, RD(17) + RD(0));
L_002C2904:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C2920(Ctx *c) { /* func_002C2920 */
ENTER(0x2c2920);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28656); return;
}

void JP_F_002C2930(Ctx *c) { /* func_002C2930 */
ENTER(0x2c2930);
 return;
}

void JP_F_002C2940(Ctx *c) { /* func_002C2940 */
ENTER(0x2c2940);
SET32(4, RW(4) + -4); { JP_F_002C26E0(c); return; }
}

void JP_F_002C2950(Ctx *c) { /* func_002C2950 */
ENTER(0x2c2950);
SET32(4, RW(4) + -24); { JP_F_002C26E0(c); return; }
}

void JP_F_002C2960(Ctx *c) { /* func_002C2960 */
ENTER(0x2c2960);
SET32(4, RW(4) + -4); { JP_F_002C0D20(c); return; }
}

void JP_F_002C2970(Ctx *c) { /* func_002C2970 */
ENTER(0x2c2970);
SET32(4, RW(4) + -24); { JP_F_002C0D20(c); return; }
}

void JP_F_002C2980(Ctx *c) { /* func_002C2980 */
ENTER(0x2c2980);
SET64(2, (s64)(s32)0x44000000);
c->f[0].u = RW(2);
 return;
}

void JP_F_002C2990(Ctx *c) { /* func_002C2990 */
ENTER(0x2c2990);
SET64(2, (s64)(s32)0x44000000);
c->f[0].u = RW(2);
 return;
}

void JP_F_002C29A0(Ctx *c) { /* func_002C29A0 */
ENTER(0x2c29a0);
SET64(2, (s64)(s32)0x43e00000);
c->f[0].u = RW(2);
 return;
}

void JP_F_002C29B0(Ctx *c) { /* func_002C29B0 */
ENTER(0x2c29b0);
SET64(2, (s64)(s32)0x44000000);
c->f[0].u = RW(2);
 return;
}

void JP_F_002C29C0(Ctx *c) { /* func_002C29C0 */
ENTER(0x2c29c0);
SET64(2, (s64)(s32)0x43e00000);
c->f[0].u = RW(2);
 return;
}

void JP_F_002C29D0(Ctx *c) { /* func_002C29D0 */
ENTER(0x2c29d0);
SET64(3, (s32)rd32(c, (RW(28) + -29892)));
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x44000000); goto L_002C29F0; }
SET64(2, (s64)(s32)0x43e00000);
c->f[0].u = RW(2);
 goto L_002C29F4;
L_002C29F0:;
c->f[0].u = RW(2);
L_002C29F4:;
 return;
}

void JP_F_002C2A00(Ctx *c) { /* func_002C2A00 */
ENTER(0x2c2a00);
SET64(2, (s64)(s32)0x44000000);
c->f[0].u = RW(2);
 return;
}

void JP_F_002C2A10(Ctx *c) { /* func_002C2A10 */
ENTER(0x2c2a10);
SET64(2, (s64)(s32)0x3f330000);
SET64(2, RD(2) | 0x3333);
c->f[0].u = RW(2);
 return;
}

void JP_F_002C2A30(Ctx *c) { /* func_002C2A30 */
ENTER(0x2c2a30);
SET32(29, RW(29) + -32);
SET32(8, RW(0) + 2);
wr64(c, (RW(29) + 0), RD(31));
SET64(2, (s32)rd32(c, (RW(28) + -29892)));
if (RD(2) == RD(8)) { SET32(8, RW(0) + 3); goto L_002C2A48; }
L_002C2A48:;
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
SET64(31, 0x2c2a88); wr32(c, (RW(29) + 24), RW(2)); JP_F_002AB470(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002C2AA0(Ctx *c) { /* func_002C2AA0 */
ENTER(0x2c2aa0);
SET64(3, (s32)rd32(c, (RW(28) + -29892)));
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x42480000); goto L_002C2AC0; }
SET64(2, (s64)(s32)0x42700000);
c->f[0].u = RW(2);
 goto L_002C2AC4;
L_002C2AC0:;
c->f[0].u = RW(2);
L_002C2AC4:;
 return;
}

void JP_F_002C2AD0(Ctx *c) { /* func_002C2AD0 */
ENTER(0x2c2ad0);
SET64(2, (s32)rd32(c, (RW(28) + -29892)));
SET64(2, RD(2) ^ 0x2);
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_002C2AE0(Ctx *c) { hle_video_mode(c); } /* func_002C2AE0 */

void JP_F_002C2B20(Ctx *c) { /* func_002C2B20 */
ENTER(0x2c2b20);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28640); return;
}

void JP_F_002C2B30(Ctx *c) { /* func_002C2B30 */
ENTER(0x2c2b30);
 return;
}

void JP_F_002C2B40(Ctx *c) { /* func_002C2B40 */
ENTER(0x2c2b40);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_002C2C08; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 10848);
SET32(3, RW(3) + 10856);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 10868);
wr32(c, (RW(16) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 60), RW(0)); goto L_002C2BA4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c2ba0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 60), RW(0));
L_002C2BA4:;
SET64(17, (s32)rd32(c, (RW(16) + 64)));
if (RD(17) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002C2BE4; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x2c2bc0); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(17) + 0), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2c2bd4); SET32(5, RW(5) + 1040); JP_F_001022C0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c2be0); wr32(c, (RW(17) + 4), RW(0)); JP_F_001004B0(c);
SET64(4, RD(16) + RD(0));
L_002C2BE4:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c2bf0); wr32(c, (RW(16) + 64), RW(0)); JP_F_00139F30(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(16) + RD(0)); goto L_002C2C0C; }
SET64(31, 0x2c2c08); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002C2C08:;
SET64(2, RD(16) + RD(0));
L_002C2C0C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002C2C30(Ctx *c) { /* func_002C2C30 */
ENTER(0x2c2c30);
SET32(29, RW(29) + -96);
SET64(3, (s64)(s32)0x530000);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(3) + -22384));
SET64(4, rd16(c, (RW(4) + 0)));
SET64(3, RD(0) | 0xff01);
if (RD(4) == RD(3)) { SET64(16, (s32)rd32(c, (RW(19) + 64))); goto L_002C2E34; }
SET64(3, RD(0) | 0xff00);
if (RD(4) == RD(3)) { SET64(16, (s32)rd32(c, (RW(19) + 64))); goto L_002C2DF4; }
SET32(3, RW(0) + 257);
if (RD(4) == RD(3)) { SET64(16, (s32)rd32(c, (RW(19) + 64))); goto L_002C2D44; }
SET32(3, RW(0) + 256);
if (RD(4) == RD(3)) { SET32(4, RW(0) + 1876); goto L_002C2CB0; }
if (RD(4) == RD(0)) { SET32(4, RW(0) + 1); goto L_002C2C9C; }
SET64(31, rd64(c, (RW(29) + 80))); goto L_002C2F08;
L_002C2C9C:;
SET64(31, 0x2c2ca4);  JP_F_00138B20(c);
SET32(3, RW(0) + 256);
wr16(c, (RW(19) + 0), (u16)RW(3)); goto L_002C2F04;
L_002C2CB0:;
SET64(31, 0x2c2cb8);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C2CCC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c2ccc); SET64(5, RD(19) + RD(0)); JP_F_001A9520(c);
L_002C2CCC:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c2cd8); wr32(c, (RW(19) + 60), RW(16)); JP_F_001A83B0(c);
SET64(31, 0x2c2ce0); SET32(4, RW(0) + 3356); JP_F_00361C30(c);
SET64(4, (s32)rd32(c, (RW(19) + 60)));
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c2cf0); SET64(6, RD(0) + RD(0)); JP_F_001A8300(c);
SET64(31, 0x2c2cf8); SET32(4, RW(0) + 12); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 64), RW(2)); goto L_002C2D0C; }
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(19) + 64), RW(2));
L_002C2D0C:;
SET64(31, 0x2c2d14);  JP_F_00139590(c);
SET64(6, (s32)rd32(c, (RW(2) + 8)));
if (RD(6) == RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 60))); goto L_002C2D28; }
SET32(6, RW(6) + 672);
SET64(2, (s32)rd32(c, (RW(19) + 60)));
L_002C2D28:;
SET64(5, (s32)rd32(c, (RW(2) + 140)));
SET64(31, 0x2c2d34); SET64(4, (s32)rd32(c, (RW(19) + 64))); JP_F_002C3520(c);
SET64(3, rd16(c, (RW(19) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(19) + 0), (u16)RW(3));
SET64(16, (s32)rd32(c, (RW(19) + 64)));
L_002C2D44:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 60))); goto L_002C2DDC; }
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2c2d60); SET32(4, RW(3) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c2d74);  rt_call(c, t); }
SET64(2, (s64)(s32)0x42700000);
SET32(4, RW(16) + 8);
c->f[0].u = RW(2);
SET32(5, RW(0) + 1);
c->f[12].f = fpu_div(F(20), F(0));
SET64(31, 0x2c2d98);  JP_F_00311B30(c);
SET64(2, (s64)(s32)0x3f400000);
SET64(3, (s64)(s32)0x3e800000);
c->f[3].u = RW(2);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
c->f[2].u = RW(3);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(2));
SET32(4, RW(2) + 576);
SET64(31, 0x2c2dc4); c->f[12].f = fpu(c->facc + F(3) * F(0)); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c2dd8); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 60)));
L_002C2DDC:;
SET64(3, rd8(c, (RW(3) + 108)));
{ int t = RD(3) != RD(0);  if (t) goto L_002C2F04; }
SET64(3, RD(0) | 0xff00);
wr16(c, (RW(19) + 0), (u16)RW(3)); goto L_002C2F04;
L_002C2DF4:;
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002C2DFC:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c2e14);  rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < (s64)2);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002C2DFC; } }
SET64(3, rd16(c, (RW(19) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(19) + 0), (u16)RW(3));
SET64(16, (s32)rd32(c, (RW(19) + 64)));
L_002C2E34:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_002C2E80; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002C2E48:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c2e64);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET32(18, RW(18) + 1); goto L_002C2E74; }
SET64(3, RD(0) + RD(0)); goto L_002C2E84;
L_002C2E74:;
SET64(3, RSD(18) < (s64)2);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002C2E48; } }
L_002C2E80:;
SET64(3, RD(0) + (s64)1);
L_002C2E84:;
{ int t = RD(3) == RD(0);  if (t) goto L_002C2F04; }
SET64(31, 0x2c2e94); SET64(4, RD(0) + RD(0)); JP_F_00138B20(c);
SET64(31, 0x2c2e9c); SET64(4, RD(0) + RD(0)); JP_F_0013C340(c);
SET64(4, (s32)rd32(c, (RW(19) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 60), RW(0)); goto L_002C2EBC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c2eb8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 60), RW(0));
L_002C2EBC:;
SET64(16, (s32)rd32(c, (RW(19) + 64)));
if (RD(16) == RD(0)) { SET64(4, RD(19) + RD(0)); goto L_002C2EFC; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x2c2ed8); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x2c2eec); SET32(5, RW(5) + 1040); JP_F_001022C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c2ef8); wr32(c, (RW(16) + 4), RW(0)); JP_F_001004B0(c);
SET64(4, RD(19) + RD(0));
L_002C2EFC:;
SET64(31, 0x2c2f04); wr32(c, (RW(19) + 64), RW(0)); JP_F_00139AB0(c);
L_002C2F04:;
SET64(31, rd64(c, (RW(29) + 80)));
L_002C2F08:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002C2F30(Ctx *c) { /* func_002C2F30 */
ENTER(0x2c2f30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2c2f40);  JP_F_00139590(c);
SET64(31, 0x2c2f48);  JP_F_00139590(c);
SET64(31, 0x2c2f50); SET64(4, (s32)rd32(c, (RW(2) + 20))); JP_F_001B8DA0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002C2F60(Ctx *c) { /* func_002C2F60 */
ENTER(0x2c2f60);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2c2f70);  JP_F_00139590(c);
SET64(31, 0x2c2f78);  JP_F_00139590(c);
SET64(31, 0x2c2f80); SET64(4, (s32)rd32(c, (RW(2) + 20))); JP_F_001B8ED0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002C2F90(Ctx *c) { /* func_002C2F90 */
ENTER(0x2c2f90);
 return;
}

void JP_F_002C2FA0(Ctx *c) { /* func_002C2FA0 */
ENTER(0x2c2fa0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c2fb8); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 10848);
SET32(2, RW(2) + 10856);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + 10868);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 64), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002C3000(Ctx *c) { /* func_002C3000 */
ENTER(0x2c3000);
SET32(29, RW(29) + -256);
SET64(3, (s64)(s32)0x530000);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 16), c->f[20].u);
c->f[20].u = rd32(c, (RW(3) + -22384));
SET64(5, rd16(c, (RW(4) + 0)));
SET64(3, RD(0) | 0xff01);
{ int t = RD(5) == RD(3); SET64(19, RD(4) + RD(0)); if (t) goto L_002C33B8; }
SET64(3, RD(0) | 0xff00);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(19) + 68))); goto L_002C3394; }
SET32(3, RW(0) + 259);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(19) + 60))); goto L_002C3358; }
SET32(3, RW(0) + 258);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(19) + 60))); goto L_002C32A0; }
SET32(3, RW(0) + 257);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(19) + 60))); goto L_002C3244; }
SET32(3, RW(0) + 256);
if (RD(5) == RD(3)) { SET32(16, RW(29) + 116); goto L_002C30FC; }
{ int t = RD(5) == RD(0);  if (t) goto L_002C3080; }
SET64(31, rd64(c, (RW(29) + 96))); goto L_002C3490;
L_002C3080:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c308c); SET32(4, RW(4) + 2736); JP_F_002DD600(c);
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c3098); SET32(4, RW(4) + 2736); JP_F_002DD730(c);
SET32(3, RW(2) << 2);
SET64(2, (s64)(s32)0x410000);
SET32(2, RW(2) + 30800);
SET32(16, RW(2) + RW(3));
L_002C30A8:;
SET64(31, 0x2c30b0); SET64(17, (s32)rd32(c, (RW(16) + 0))); JP_F_001953A0(c);
div_u(c, 0, RW(2), RW(17));
SET64(3, rd16(c, (RW(28) + -31392)));
SET64(4, c->hi.d[0]);
SET32(4, RW(4) + RW(0));
SET64(4, RD(4) & 0xffff);
{ int t = RD(3) == RD(4);  if (t) { POLL(); goto L_002C30A8; } }
SET32(3, RW(4) << 1);
wr16(c, (RW(28) + -31392), (u16)RW(4));
SET32(3, RW(3) + RW(4));
SET64(4, (s64)(s32)0x410000);
SET32(5, RW(3) << 1);
SET32(4, RW(4) + 30624);
SET32(3, RW(0) + 256);
SET32(4, RW(4) + RW(5));
wr32(c, (RW(19) + 64), RW(4));
wr16(c, (RW(19) + 0), (u16)RW(3)); goto L_002C348C;
L_002C30FC:;
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
SET64(31, 0x2c3134); c->f[15].u = c->f[12].u; JP_F_0013C6B0(c);
SET32(16, RW(16) + 52);
SET32(2, RW(29) + 220);
SET64(2, RD(16) < RD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C30FC; } }
SET64(31, 0x2c3150); SET32(4, RW(29) + 112); JP_F_00356210(c);
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
SET64(31, 0x2c3208); wr16(c, (RW(29) + 234), (u16)RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C3218; }
SET64(31, 0x2c3218); SET64(4, RD(16) + RD(0)); JP_F_002FF230(c);
L_002C3218:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 112);
SET64(31, 0x2c3228); wr32(c, (RW(19) + 60), RW(16)); JP_F_002FEC10(c);
SET64(5, (s32)rd32(c, (RW(19) + 60)));
SET64(31, 0x2c3234); SET64(4, RD(19) + RD(0)); JP_F_0013A470(c);
SET64(3, rd16(c, (RW(19) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(19) + 0), (u16)RW(3));
SET64(4, (s32)rd32(c, (RW(19) + 60)));
L_002C3244:;
SET32(3, RW(0) + 4);
SET64(4, rd16(c, (RW(4) + 0)));
{ int t = RD(4) != RD(3);  if (t) goto L_002C348C; }
SET64(31, 0x2c325c); SET32(4, RW(0) + 12); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 68), RW(2)); goto L_002C3270; }
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(19) + 68), RW(2));
L_002C3270:;
SET64(2, (s32)rd32(c, (RW(19) + 60)));
SET64(6, (s32)rd32(c, (RW(2) + 652)));
if (RD(6) == RD(0)) { SET64(5, (s32)rd32(c, (RW(2) + 716))); goto L_002C3288; }
SET32(6, RW(6) + 672);
SET64(5, (s32)rd32(c, (RW(2) + 716)));
L_002C3288:;
SET64(31, 0x2c3290); SET64(4, (s32)rd32(c, (RW(19) + 68))); JP_F_002C3520(c);
SET64(3, rd16(c, (RW(19) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(19) + 0), (u16)RW(3)); goto L_002C348C;
L_002C32A0:;
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
if (RD(4) != RD(3)) { SET64(16, (s32)rd32(c, (RW(19) + 68))); goto L_002C32BC; }
SET32(3, RW(5) + 1);
wr16(c, (RW(19) + 0), (u16)RW(3));
SET64(16, (s32)rd32(c, (RW(19) + 68)));
L_002C32BC:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_002C348C; }
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2c32d8); SET32(4, RW(3) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c32ec);  rt_call(c, t); }
SET64(2, (s64)(s32)0x42700000);
SET32(4, RW(16) + 8);
c->f[0].u = RW(2);
SET32(5, RW(0) + 1);
c->f[12].f = fpu_div(F(20), F(0));
SET64(31, 0x2c3310);  JP_F_00311B30(c);
SET64(2, (s64)(s32)0x3f400000);
SET64(3, (s64)(s32)0x3e800000);
c->f[3].u = RW(2);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
c->f[2].u = RW(3);
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(2));
SET32(4, RW(2) + 576);
SET64(31, 0x2c333c); c->f[12].f = fpu(c->facc + F(3) * F(0)); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c3350); SET32(4, RW(2) + 384); rt_call(c, t); }
 goto L_002C348C;
L_002C3358:;
SET64(31, 0x2c3360);  JP_F_002F7390(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C348C; }
SET64(4, (s32)rd32(c, (RW(19) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 60), RW(0)); goto L_002C3388; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c3384); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 60), RW(0));
L_002C3388:;
SET64(3, RD(0) | 0xff00);
wr16(c, (RW(19) + 0), (u16)RW(3)); goto L_002C348C;
L_002C3394:;
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
wr32(c, (RW(3) + 0), RW(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 396)));
wr32(c, (RW(3) + 0), RW(0));
SET64(3, rd16(c, (RW(19) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(19) + 0), (u16)RW(3));
L_002C33B8:;
SET64(16, (s32)rd32(c, (RW(19) + 68)));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(3) == RD(0);  if (t) goto L_002C3408; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002C33D0:;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c33ec);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET32(18, RW(18) + 1); goto L_002C33FC; }
SET64(3, RD(0) + RD(0)); goto L_002C340C;
L_002C33FC:;
SET64(3, RSD(18) < (s64)2);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002C33D0; } }
L_002C3408:;
SET64(3, RD(0) + (s64)1);
L_002C340C:;
{ int t = RD(3) == RD(0);  if (t) goto L_002C348C; }
SET64(31, 0x2c341c); SET64(4, RD(0) + RD(0)); JP_F_00138B20(c);
SET64(31, 0x2c3424); SET64(4, RD(0) + RD(0)); JP_F_0013C340(c);
SET64(4, (s32)rd32(c, (RW(19) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(19) + 60), RW(0)); goto L_002C3444; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c3440); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(19) + 60), RW(0));
L_002C3444:;
SET64(16, (s32)rd32(c, (RW(19) + 68)));
if (RD(16) == RD(0)) { SET64(4, RD(19) + RD(0)); goto L_002C3484; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x2c3460); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(16) + 0), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x2c3474); SET32(5, RW(5) + 1040); JP_F_001022C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c3480); wr32(c, (RW(16) + 4), RW(0)); JP_F_001004B0(c);
SET64(4, RD(19) + RD(0));
L_002C3484:;
SET64(31, 0x2c348c); wr32(c, (RW(19) + 68), RW(0)); JP_F_00139AB0(c);
L_002C348C:;
SET64(31, rd64(c, (RW(29) + 96)));
L_002C3490:;
c->f[20].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}

void JP_F_002C34B0(Ctx *c) { /* func_002C34B0 */
ENTER(0x2c34b0);
 return;
}

void JP_F_002C34C0(Ctx *c) { /* func_002C34C0 */
ENTER(0x2c34c0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c34d8); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 10928);
SET32(2, RW(2) + 10936);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + 10948);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 60), RW(0));
wr32(c, (RW(16) + 68), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002C3520(Ctx *c) { /* func_002C3520 */
ENTER(0x2c3520);
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
SET64(31, 0x2c355c); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C3588; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 1152);
SET32(6, RW(6) + 1040);
SET32(7, RW(0) + 64);
SET64(31, 0x2c3584); SET32(8, RW(0) + 2); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002C3588:;
SET64(31, 0x2c3590); wr32(c, (RW(20) + 4), RW(16)); JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2c359c); SET32(5, RW(0) + 5); JP_F_0022CB50(c);
SET64(4, (s32)rd32(c, (RW(20) + 4)));
SET64(5, RD(2) + RD(0));
SET64(6, RD(17) + RD(0));
SET32(7, RW(0) + -1);
SET64(31, 0x2c35b4); SET64(8, RD(0) + RD(0)); JP_F_0014F9B0(c);
SET64(31, 0x2c35bc);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2c35c8); SET32(5, RW(0) + 6); JP_F_0022CB50(c);
SET64(5, RD(2) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(7, RW(0) + -1);
SET64(8, RD(0) + RD(0));
SET64(31, 0x2c35e4); SET32(4, RW(2) + 64); JP_F_0014F9B0(c);
SET64(31, 0x2c35ec); SET32(4, RW(0) + 784); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C3618; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -6640);
SET32(6, RW(6) + -7024);
SET32(7, RW(0) + 384);
SET64(31, 0x2c3614); SET32(8, RW(0) + 2); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002C3618:;
SET64(2, (s64)(s32)0x4a0000);
SET64(3, (s64)(s32)0x3f800000);
c->f[1].u = rd32(c, (RW(2) + -18472));
wr32(c, (RW(20) + 0), RW(16));
c->f[0].u = RW(3);
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
c->f[20].f = fpu(F(1) - F(0));
SET32(16, RW(28) + -31408);
SET32(21, RW(28) + -31400);
L_002C3644:;
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2c365c);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 4)));
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(3, RW(3) + RW(17));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 160), RW(3));
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(2, RW(2) + RW(17));
SET64(2, rd16(c, (RW(2) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C3690; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002C36A8;
L_002C3690:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002C36A8:;
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 164), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(2, RW(2) + RW(17));
SET64(2, rd16(c, (RW(2) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C36D4; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002C36EC;
L_002C36D4:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002C36EC:;
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
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C3730; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002C3748;
L_002C3730:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002C3748:;
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 180), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(2, RW(2) + RW(17));
SET64(2, rd16(c, (RW(2) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C3774; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002C378C;
L_002C3774:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002C378C:;
SET64(3, (s64)(s32)0x3f000000);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
c->f[0].u = RW(3);
c->f[0].f = fpu(F(1) - F(0));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(2) + 184), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(2, RW(2) + RW(17));
SET64(2, rd16(c, (RW(2) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C37C8; }
c->f[0].u = RW(2);
c->f[3].f = (f32)(s32)c->f[0].u; goto L_002C37E0;
L_002C37C8:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[3].f = (f32)(s32)c->f[0].u;
c->f[3].f = fpu(F(3) + F(3));
L_002C37E0:;
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
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C3824; }
c->f[0].u = RW(2);
c->f[3].f = (f32)(s32)c->f[0].u; goto L_002C383C;
L_002C3824:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[3].f = (f32)(s32)c->f[0].u;
c->f[3].f = fpu(F(3) + F(3));
L_002C383C:;
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
SET64(31, 0x2c3870); SET32(4, RW(2) + RW(18)); JP_F_0014E9B0(c);
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
SET64(31, 0x2c38a0); SET32(4, RW(2) + RW(18)); JP_F_0014EB10(c);
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c38b8);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 0)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2c38d0); SET64(5, RD(22) + RD(0)); rt_call(c, t); }
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 384);
SET64(3, RSD(19) < (s64)2);
SET32(17, RW(17) + 64);
SET32(16, RW(16) + 4);
{ int t = RD(3) != RD(0); SET32(21, RW(21) + 4); if (t) { POLL(); goto L_002C3644; } }
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

void JP_F_002C3920(Ctx *c) { /* func_002C3920 */
ENTER(0x2c3920);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28632); return;
}

void JP_F_002C3930(Ctx *c) { /* func_002C3930 */
ENTER(0x2c3930);
 return;
}

void JP_F_002C3940(Ctx *c) { /* func_002C3940 */
ENTER(0x2c3940);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(18, RD(5) + RD(0)); if (t) goto L_002C3A08; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 10928);
SET32(3, RW(3) + 10936);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 10948);
wr32(c, (RW(16) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 60), RW(0)); goto L_002C39A4; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c39a0); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 60), RW(0));
L_002C39A4:;
SET64(17, (s32)rd32(c, (RW(16) + 68)));
if (RD(17) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002C39E4; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(5, (s64)(s32)0x150000);
SET64(31, 0x2c39c0); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(17) + 0), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2c39d4); SET32(5, RW(5) + 1040); JP_F_001022C0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c39e0); wr32(c, (RW(17) + 4), RW(0)); JP_F_001004B0(c);
SET64(4, RD(16) + RD(0));
L_002C39E4:;
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c39f0); wr32(c, (RW(16) + 68), RW(0)); JP_F_00139F30(c);
SET64(2, RD(18) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(16) + RD(0)); goto L_002C3A0C; }
SET64(31, 0x2c3a08); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002C3A08:;
SET64(2, RD(16) + RD(0));
L_002C3A0C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002C3A30(Ctx *c) { /* func_002C3A30 */
ENTER(0x2c3a30);
SET32(4, RW(4) + -4); { JP_F_002C3940(c); return; }
}

void JP_F_002C3A40(Ctx *c) { /* func_002C3A40 */
ENTER(0x2c3a40);
SET32(4, RW(4) + -24); { JP_F_002C3940(c); return; }
}

void JP_F_002C3A50(Ctx *c) { /* func_002C3A50 */
ENTER(0x2c3a50);
SET32(4, RW(4) + -4); { JP_F_002C2B40(c); return; }
}

void JP_F_002C3A60(Ctx *c) { /* func_002C3A60 */
ENTER(0x2c3a60);
SET32(4, RW(4) + -24); { JP_F_002C2B40(c); return; }
}

void JP_F_002C3A70(Ctx *c) { /* func_002C3A70 */
ENTER(0x2c3a70);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28624); return;
}

void JP_F_002C3A80(Ctx *c) { /* func_002C3A80 */
ENTER(0x2c3a80);
 return;
}

void JP_F_002C3A90(Ctx *c) { /* func_002C3A90 */
ENTER(0x2c3a90);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c3ab0); SET64(16, RD(4) + RD(0)); JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c3abc); SET32(5, RW(0) + -1); JP_F_0013E1A0(c);
SET64(31, 0x2c3ac4); SET64(18, RD(2) & 0xffff); JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c3ad0); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(4, (s32)rd32(c, (RW(16) + 108)));
{ int t = RD(4) == RD(0); SET64(17, RD(2) & 0xffff); if (t) goto L_002C3AE8; }
SET64(2, (s64)(s32)0x530000);
SET64(31, 0x2c3ae8); c->f[12].u = rd32(c, (RW(2) + -22384)); JP_F_00173B10(c);
L_002C3AE8:;
SET64(4, rd16(c, (RW(16) + 0)));
SET32(3, RW(0) + 1000);
if (RD(4) == RD(3)) { SET64(19, RD(0) + (s64)1); goto L_002C3E8C; }
SET32(3, RW(0) + 101);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 108))); goto L_002C3DF8; }
SET32(3, RW(0) + 100);
{ int t = RD(4) == RD(3);  if (t) goto L_002C3DC0; }
SET32(3, RW(0) + 20);
if (RD(4) == RD(3)) { SET64(3, RD(18) & 0xffff); goto L_002C3B7C; }
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 108))); goto L_002C3B4C; }
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002C3B38; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002C3F34;
L_002C3B38:;
SET64(31, 0x2c3b40);  JP_F_002C4810(c);
SET32(3, RW(0) + 10);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C3F30;
L_002C3B4C:;
SET64(31, 0x2c3b54);  JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C3F30; }
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(25, (s32)rd32(c, (RW(4) + 388)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c3b70);  rt_call(c, t); }
SET32(3, RW(0) + 20);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C3F30;
L_002C3B7C:;
SET64(2, RD(3) & 0x10);
if (RD(2) == RD(0)) { SET64(2, RD(3) & 0x40); goto L_002C3B9C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c3b94); SET64(5, RD(0) + RD(0)); JP_F_002C3F50(c);
 goto L_002C3BB0;
L_002C3B9C:;
{ int t = RD(2) == RD(0);  if (t) goto L_002C3BB0; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c3bb0); SET32(5, RW(0) + 1); JP_F_002C3F50(c);
L_002C3BB0:;
SET64(2, (s64)(s32)0x530000);
SET64(3, (s64)(s32)0x41180000);
c->f[0].u = rd32(c, (RW(2) + -22428));
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
c->f[1].u = rd32(c, (RW(28) + -31388));
c->f[0].u = rd32(c, (RW(16) + 68));
c->f[1].f = fpu(F(3) * F(1));
c->f[1].f = fpu_div(F(1), F(2));
c->fcc = F(0) < F(1);
if (c->fcc) { c->f[12].u = rd32(c, (RW(16) + 68)); goto L_002C3C24; }
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(16) + 68), c->f[0].u);
c->f[12].u = rd32(c, (RW(16) + 68));
L_002C3C24:;
SET64(31, 0x2c3c2c);  JP_F_0011F6F0(c);
SET64(2, (s32)rd32(c, (RW(16) + 100)));
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(16) + 72)));
SET64(8, RD(0) + RD(0));
SET32(3, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
L_002C3C44:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C3C54; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C3C54:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C3C70; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C3C74; }
SET32(2, RW(2) + -8);
L_002C3C70:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C3C74:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C3C88; }
SET32(7, RW(7) + 1);
L_002C3C88:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C3C98; }
SET32(2, RW(8) << 1); goto L_002C3CAC;
L_002C3C98:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C3C44; } }
SET32(8, RW(0) + -1);
SET32(2, RW(8) << 1);
L_002C3CAC:;
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
{ u32 t = RW(25); SET64(31, 0x2c3cf4);  rt_call(c, t); }
SET64(3, RD(17) & 0xffff);
SET64(3, RD(3) & 0x2000);
{ int t = RD(3) == RD(0);  if (t) goto L_002C3F30; }
SET64(31, 0x2c3d0c);  JP_F_00139590(c);
SET64(31, 0x2c3d14);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 127);
SET64(31, 0x2c3d28); SET32(7, RW(0) + 64); JP_F_001B7420(c);
SET64(2, (s32)rd32(c, (RW(16) + 100)));
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(16) + 72)));
SET64(8, RD(0) + RD(0));
SET32(3, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
L_002C3D40:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C3D50; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C3D50:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C3D6C; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C3D70; }
SET32(2, RW(2) + -8);
L_002C3D6C:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C3D70:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C3D88; }
SET32(7, RW(7) + 1);
L_002C3D88:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C3D98; }
SET64(4, RD(8) & 0xffff); goto L_002C3DAC;
L_002C3D98:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C3D40; } }
SET32(8, RW(0) + -1);
SET64(4, RD(8) & 0xffff);
L_002C3DAC:;
SET64(31, 0x2c3db4);  JP_F_00242B30(c);
SET32(3, RW(0) + 100);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C3F30;
L_002C3DC0:;
SET64(31, 0x2c3dc8);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_002C3DD8; }
SET32(5, RW(5) + 672);
L_002C3DD8:;
SET64(2, (s64)(s32)0x4a0000);
c->f[12].u = rd32(c, (RW(2) + -18464));
SET64(31, 0x2c3de8); SET64(4, (s32)rd32(c, (RW(16) + 108))); JP_F_00173F60(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C3F30;
L_002C3DF8:;
SET64(31, 0x2c3e00);  JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C3F30; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002C3E10:;
SET64(2, (s32)rd32(c, (RW(16) + 92)));
SET32(2, RW(2) + RW(17));
SET64(31, 0x2c3e20); SET64(4, (s32)rd32(c, (RW(2) + 12))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002C3E48; }
SET64(2, (s32)rd32(c, (RW(16) + 92)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c3e44);  rt_call(c, t); }
L_002C3E48:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)29);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002C3E10; } }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c3e6c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(25, (s32)rd32(c, (RW(4) + 388)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c3e80);  rt_call(c, t); }
SET32(3, RW(0) + 1000);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C3F30;
L_002C3E8C:;
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002C3E94:;
SET64(2, (s32)rd32(c, (RW(16) + 92)));
SET32(2, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c3eb0);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002C3EC0; }
SET64(19, RD(0) + RD(0));
L_002C3EC0:;
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < (s64)29);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002C3E94; } }
{ int t = RD(19) == RD(0);  if (t) goto L_002C3F30; }
SET64(2, (s32)rd32(c, (RW(16) + 96)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c3ef0);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C3F30; }
SET64(2, (s32)rd32(c, (RW(16) + 108)));
SET64(4, (s32)rd32(c, (RW(2) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c3f10);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C3F30; }
SET64(31, 0x2c3f20); SET64(4, RD(16) + RD(0)); JP_F_002C4E30(c);
SET64(31, 0x2c3f28); SET64(4, RD(16) + RD(0)); JP_F_00139AB0(c);
SET64(3, RD(0) | 0xffff);
wr16(c, (RW(16) + 0), (u16)RW(3));
L_002C3F30:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002C3F34:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002C3F50(Ctx *c) { /* func_002C3F50 */
ENTER(0x2c3f50);
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
L_002C3F84:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C3F94; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C3F94:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C3FB0; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C3FB4; }
SET32(2, RW(2) + -8);
L_002C3FB0:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C3FB4:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C3FC8; }
SET32(7, RW(7) + 1);
L_002C3FC8:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C3FD8; }
SET32(3, RW(8) << 1); goto L_002C3FEC;
L_002C3FD8:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C3F84; } }
SET32(8, RW(0) + -1);
SET32(3, RW(8) << 1);
L_002C3FEC:;
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
L_002C4018:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C4028; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C4028:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C4044; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C4048; }
SET32(2, RW(2) + -8);
L_002C4044:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C4048:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C4060; }
SET32(7, RW(7) + 1);
L_002C4060:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C4070; }
SET32(3, RW(8) << 1); goto L_002C4084;
L_002C4070:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C4018; } }
SET32(8, RW(0) + -1);
SET32(3, RW(8) << 1);
L_002C4084:;
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET32(3, RW(3) + RW(8));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c40a4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 100)));
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(17) + 72)));
SET64(8, RD(0) + RD(0));
SET32(3, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
L_002C40BC:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C40CC; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C40CC:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C40E8; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C40EC; }
SET32(2, RW(2) + -8);
L_002C40E8:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C40EC:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C4100; }
SET32(7, RW(7) + 1);
L_002C4100:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C4110; }
SET32(4, RW(8) + 7); goto L_002C4124;
L_002C4110:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C40BC; } }
SET32(8, RW(0) + -1);
SET32(4, RW(8) + 7);
L_002C4124:;
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c4148);  rt_call(c, t); }
if (RD(16) != RD(0)) { SET32(2, RW(0) + 1); goto L_002C4188; }
SET64(4, (s32)rd32(c, (RW(17) + 100)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(2) + -1);
wr32(c, (RW(4) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 4)));
SET64(1, RSD(2) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002C4184; }
SET64(2, rd8(c, (RW(4) + 12)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C4180; }
SET64(3, (s32)rd32(c, (RW(4) + 8)));
L_002C4180:;
wr32(c, (RW(4) + 0), RW(3));
L_002C4184:;
SET32(2, RW(0) + 1);
L_002C4188:;
if (RD(16) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 100))); goto L_002C41C8; }
SET64(4, (s32)rd32(c, (RW(17) + 100)));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(2) + 1);
wr32(c, (RW(4) + 0), RW(2));
SET64(3, (s32)rd32(c, (RW(4) + 8)));
SET64(1, RSD(3) < RSD(2));
{ int t = RD(1) == RD(0);  if (t) goto L_002C41C4; }
SET64(2, rd8(c, (RW(4) + 12)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C41C0; }
SET64(3, (s32)rd32(c, (RW(4) + 4)));
L_002C41C0:;
wr32(c, (RW(4) + 0), RW(3));
L_002C41C4:;
SET64(2, (s32)rd32(c, (RW(17) + 100)));
L_002C41C8:;
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(17) + 72)));
SET64(8, RD(0) + RD(0));
SET32(3, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
L_002C41DC:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C41EC; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C41EC:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C4208; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C420C; }
SET32(2, RW(2) + -8);
L_002C4208:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C420C:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C4220; }
SET32(7, RW(7) + 1);
L_002C4220:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C4230; }
SET32(4, RW(8) + 7); goto L_002C4244;
L_002C4230:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C41DC; } }
SET32(8, RW(0) + -1);
SET32(4, RW(8) + 7);
L_002C4244:;
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c4268);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 100)));
SET32(7, RW(0) + -1);
SET64(6, (s32)rd32(c, (RW(17) + 72)));
SET64(8, RD(0) + RD(0));
SET32(3, RW(0) + 1);
SET64(5, (s32)rd32(c, (RW(2) + 0)));
L_002C4280:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C4290; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C4290:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C42AC; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C42B0; }
SET32(2, RW(2) + -8);
L_002C42AC:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C42B0:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C42C8; }
SET32(7, RW(7) + 1);
L_002C42C8:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C42D8; }
SET32(3, RW(8) << 1); goto L_002C42EC;
L_002C42D8:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C4280; } }
SET32(8, RW(0) + -1);
SET32(3, RW(8) << 1);
L_002C42EC:;
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET32(3, RW(3) + RW(8));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
c->f[0].u = rd32(c, (RW(2) + 36));
wr32(c, (RW(17) + 64), c->f[0].u);
SET64(31, 0x2c430c); wr32(c, (RW(17) + 68), RW(0)); JP_F_00139590(c);
SET64(31, 0x2c4314);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 127);
SET64(31, 0x2c4328); SET32(7, RW(0) + 64); JP_F_001B7420(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C4340(Ctx *c) { /* func_002C4340 */
ENTER(0x2c4340);
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
L_002C4380:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C4390; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C4390:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C43AC; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C43B0; }
SET32(2, RW(2) + -8);
L_002C43AC:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C43B0:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C43C8; }
SET32(7, RW(7) + 1);
L_002C43C8:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C43D8; }
SET32(4, RW(8) + 7); goto L_002C43EC;
L_002C43D8:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C4380; } }
SET32(8, RW(0) + -1);
SET32(4, RW(8) + 7);
L_002C43EC:;
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c4410);  rt_call(c, t); }
if (RD(16) != RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 72))); goto L_002C442C; }
SET64(3, (s32)rd32(c, (RW(19) + 72)));
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) & 0xfe);
wr8(c, (RW(3) + 0), (u8)RW(2)); goto L_002C4438;
L_002C442C:;
SET64(2, rd8(c, (RW(3) + 0)));
SET64(2, RD(2) | 0x1);
wr8(c, (RW(3) + 0), (u8)RW(2));
L_002C4438:;
SET64(2, (s32)rd32(c, (RW(19) + 88)));
SET64(2, rd16(c, (RW(2) + 502)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C4454; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002C446C;
L_002C4454:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002C446C:;
SET64(2, (s64)(s32)0x41400000);
SET64(5, (s32)rd32(c, (RW(19) + 72)));
c->f[0].u = RW(2);
SET64(16, RD(0) + RD(0));
c->f[20].f = fpu(F(0) + F(1));
SET64(6, RD(0) + RD(0));
SET32(3, RW(0) + 1);
L_002C4488:;
{ int t = RSD(6) >= 0; SET32(2, RSW(6) >> 3); if (t) goto L_002C4498; }
SET32(2, RW(6) + 7);
SET32(2, RSW(2) >> 3);
L_002C4498:;
SET32(4, RW(5) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(6) >= 0; SET64(2, RD(6) & 0x7); if (t) goto L_002C44B4; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C44B8; }
SET32(2, RW(2) + -8);
L_002C44B4:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C44B8:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(3);  if (t) goto L_002C44D0; }
SET32(16, RW(16) + 1);
L_002C44D0:;
SET32(6, RW(6) + 1);
SET64(2, RD(6) < (u64)(s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C4488; } }
SET64(31, 0x2c44e8);  JP_F_002C29A0(c);
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
L_002C4514:;
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c452c);  rt_call(c, t); }
{ int t = RSD(18) >= 0; SET32(4, RSW(18) >> 3); if (t) goto L_002C453C; }
SET32(2, RW(18) + 7);
SET32(4, RSW(2) >> 3);
L_002C453C:;
SET64(2, (s32)rd32(c, (RW(19) + 72)));
SET32(2, RW(2) + RW(4));
SET64(4, rd8(c, (RW(2) + 0)));
{ int t = RSD(18) >= 0; SET64(3, RD(18) & 0x7); if (t) goto L_002C455C; }
if (RD(3) == RD(0)) { SET32(2, RW(0) + 1); goto L_002C4560; }
SET32(3, RW(3) + -8);
L_002C455C:;
SET32(2, RW(0) + 1);
L_002C4560:;
SET32(2, RW(2) << (RW(3) & 31));
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C4610; }
SET64(2, (s32)rd32(c, (RW(19) + 88)));
SET64(2, rd16(c, (RW(2) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C4590; }
c->f[0].u = RW(2);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002C45A8;
L_002C4590:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002C45A8:;
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
{ u32 t = RW(25); SET64(31, 0x2c45f8); SET32(17, RW(17) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c4610);  rt_call(c, t); }
L_002C4610:;
SET32(18, RW(18) + 1);
SET64(2, RSD(18) < (s64)7);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_002C4514; } }
SET64(5, (s32)rd32(c, (RW(19) + 72)));
SET64(7, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET32(3, RW(0) + 1);
L_002C4630:;
{ int t = RSD(6) >= 0; SET32(2, RSW(6) >> 3); if (t) goto L_002C4640; }
SET32(2, RW(6) + 7);
SET32(2, RSW(2) >> 3);
L_002C4640:;
SET32(4, RW(5) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(6) >= 0; SET64(2, RD(6) & 0x7); if (t) goto L_002C465C; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C4660; }
SET32(2, RW(2) + -8);
L_002C465C:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C4660:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) != RD(3);  if (t) goto L_002C4678; }
SET32(7, RW(7) + 1);
L_002C4678:;
SET32(6, RW(6) + 1);
SET64(2, RD(6) < (u64)(s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C4630; } }
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
L_002C46B4:;
{ int t = RSD(8) >= 0; SET32(2, RSW(8) >> 3); if (t) goto L_002C46C4; }
SET32(2, RW(8) + 7);
SET32(2, RSW(2) >> 3);
L_002C46C4:;
SET32(4, RW(6) + RW(2));
SET64(4, rd8(c, (RW(4) + 0)));
{ int t = RSD(8) >= 0; SET64(2, RD(8) & 0x7); if (t) goto L_002C46E0; }
if (RD(2) == RD(0)) { SET32(2, RW(3) << (RW(2) & 31)); goto L_002C46E4; }
SET32(2, RW(2) + -8);
L_002C46E0:;
SET32(2, RW(3) << (RW(2) & 31));
L_002C46E4:;
SET64(2, RD(4) & RD(2));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C46F8; }
SET32(7, RW(7) + 1);
L_002C46F8:;
if (RD(7) != RD(5)) { SET32(8, RW(8) + 1); goto L_002C4708; }
SET32(4, RW(8) + 7); goto L_002C471C;
L_002C4708:;
SET64(2, RSD(8) < (s64)7);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C46B4; } }
SET32(8, RW(0) + -1);
SET32(4, RW(8) + 7);
L_002C471C:;
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c4740);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 100)));
SET32(8, RW(0) + -1);
SET64(7, (s32)rd32(c, (RW(19) + 72)));
SET64(9, RD(0) + RD(0));
SET32(4, RW(0) + 1);
SET64(6, (s32)rd32(c, (RW(3) + 0)));
L_002C4758:;
{ int t = RSD(9) >= 0; SET32(3, RSW(9) >> 3); if (t) goto L_002C4768; }
SET32(3, RW(9) + 7);
SET32(3, RSW(3) >> 3);
L_002C4768:;
SET32(5, RW(7) + RW(3));
SET64(5, rd8(c, (RW(5) + 0)));
{ int t = RSD(9) >= 0; SET64(3, RD(9) & 0x7); if (t) goto L_002C4784; }
if (RD(3) == RD(0)) { SET32(3, RW(4) << (RW(3) & 31)); goto L_002C4788; }
SET32(3, RW(3) + -8);
L_002C4784:;
SET32(3, RW(4) << (RW(3) & 31));
L_002C4788:;
SET64(3, RD(5) & RD(3));
SET64(3, RD(0) < RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_002C47A0; }
SET32(8, RW(8) + 1);
L_002C47A0:;
if (RD(8) != RD(6)) { SET32(9, RW(9) + 1); goto L_002C47B0; }
SET32(4, RW(9) << 1); goto L_002C47C4;
L_002C47B0:;
SET64(3, RSD(9) < (s64)7);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002C4758; } }
SET32(9, RW(0) + -1);
SET32(4, RW(9) << 1);
L_002C47C4:;
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

void JP_F_002C4810(Ctx *c) { /* func_002C4810 */
ENTER(0x2c4810);
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
SET64(31, 0x2c4844); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(21) + 72), RW(2)); goto L_002C4854; }
wr8(c, (RW(2) + 0), (u8)RW(0));
wr32(c, (RW(21) + 72), RW(2));
L_002C4854:;
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
SET64(31, 0x2c48f0); wr8(c, (RW(3) + 0), (u8)RW(2)); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(21) + 100), RW(2)); goto L_002C4910; }
wr32(c, (RW(2) + 4), RW(0));
SET32(3, RW(0) + 1);
wr32(c, (RW(2) + 8), RW(3));
wr32(c, (RW(2) + 0), RW(0));
wr8(c, (RW(2) + 12), (u8)RW(0));
wr32(c, (RW(21) + 100), RW(2));
L_002C4910:;
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 12), (u8)RW(3));
SET64(31, 0x2c4920); SET32(4, RW(0) + 400); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C4988; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x3f800000);
SET32(3, RW(3) + 4832);
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
SET64(31, 0x2c4974); wr32(c, (RW(16) + 60), RW(2)); JP_F_0014D1F0(c);
wr32(c, (RW(16) + 368), RW(0));
wr32(c, (RW(16) + 372), RW(0));
wr32(c, (RW(16) + 376), RW(0));
wr32(c, (RW(16) + 380), RW(0));
wr8(c, (RW(16) + 384), (u8)RW(0));
L_002C4988:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c4994); wr32(c, (RW(21) + 108), RW(16)); JP_F_001740B0(c);
SET64(31, 0x2c499c);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_002C49AC; }
SET32(5, RW(5) + 672);
L_002C49AC:;
SET64(2, (s64)(s32)0x4a0000);
c->f[12].u = rd32(c, (RW(2) + -18464));
SET64(31, 0x2c49bc); SET64(4, (s32)rd32(c, (RW(21) + 108))); JP_F_00174040(c);
SET64(31, 0x2c49c4); SET32(4, RW(0) + 304); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C49D8; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c49d8); SET32(5, RW(0) + 1); JP_F_0014D1F0(c);
L_002C49D8:;
wr32(c, (RW(21) + 96), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2c49ec); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(21) + 96)));
c->f[12].u = RW(0);
wr32(c, (RW(2) + 32), RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 96)));
wr32(c, (RW(2) + 36), RW(0));
SET64(31, 0x2c4a08); SET64(4, (s32)rd32(c, (RW(21) + 96))); JP_F_0014E9B0(c);
SET64(3, (s32)rd32(c, (RW(21) + 96)));
SET64(2, (s64)(s32)0x3f000000);
c->f[12].u = RW(2);
SET64(31, 0x2c4a1c); SET32(4, RW(3) + 256); JP_F_00163900(c);
SET64(3, (s32)rd32(c, (RW(21) + 96)));
SET64(2, (s64)(s32)0x3ef00000);
SET64(2, RD(2) | 0xa3d7);
c->f[12].u = RW(2);
SET64(31, 0x2c4a34); SET32(4, RW(3) + 256); JP_F_001638F0(c);
SET64(3, (s32)rd32(c, (RW(21) + 96)));
SET64(2, (s64)(s32)0x3ef00000);
SET64(2, RD(2) | 0xa3d7);
c->f[12].u = RW(2);
SET64(31, 0x2c4a4c); SET32(4, RW(3) + 256); JP_F_001638E0(c);
SET64(3, (s32)rd32(c, (RW(21) + 96)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2c4a60); SET32(4, RW(3) + 256); JP_F_001638D0(c);
SET64(31, 0x2c4a68);  JP_F_002C29B0(c);
SET64(2, (s32)rd32(c, (RW(21) + 96)));
SET64(31, 0x2c4a74); wr32(c, (RW(2) + 240), c->f[0].u); JP_F_002C29A0(c);
SET64(2, (s32)rd32(c, (RW(21) + 96)));
wr32(c, (RW(2) + 244), c->f[0].u);
SET64(31, 0x2c4a84); SET64(4, (s32)rd32(c, (RW(21) + 96))); JP_F_0014EB10(c);
SET64(4, (s32)rd32(c, (RW(21) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c4a98);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(21) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c4aac);  rt_call(c, t); }
SET64(31, 0x2c4ab4); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C4AC4; }
SET64(31, 0x2c4ac4); SET64(4, RD(16) + RD(0)); JP_F_001509B0(c);
L_002C4AC4:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(0) + 352);
SET32(6, RW(0) + 64);
SET64(7, RD(0) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2c4ae0); wr32(c, (RW(21) + 84), RW(16)); JP_F_00150830(c);
SET64(31, 0x2c4ae8); SET32(4, RW(0) + 36); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002C4B18; }
SET64(31, 0x2c4af8); SET64(4, RD(20) + RD(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
wr32(c, (RW(20) + 16), RW(2));
wr32(c, (RW(20) + 20), RW(0));
wr32(c, (RW(20) + 24), RW(0));
wr32(c, (RW(20) + 28), RW(0));
wr16(c, (RW(20) + 32), (u16)RW(0));
wr16(c, (RW(20) + 34), (u16)RW(0));
L_002C4B18:;
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c4b2c); SET32(5, RW(0) + 12601); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2c4b3c); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(31, 0x2c4b44); SET64(4, RD(2) + RD(0)); JP_F_00100530(c);
wr32(c, (RW(21) + 80), RW(2));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(4, RD(20) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2c4b64); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
L_002C4B64:;
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c4b74); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C4B64; } }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2c4b8c); SET64(5, RD(0) + RD(0)); JP_F_00157540(c);
SET64(31, 0x2c4b94); SET32(4, RW(0) + 1872); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C4BC0; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 1152);
SET32(6, RW(6) + 1040);
SET32(7, RW(0) + 64);
SET64(31, 0x2c4bbc); SET32(8, RW(0) + 29); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002C4BC0:;
SET32(4, RW(0) + 11152);
SET64(31, 0x2c4bcc); wr32(c, (RW(21) + 88), RW(16)); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C4BF8; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -6640);
SET32(6, RW(6) + -7024);
SET32(7, RW(0) + 384);
SET64(31, 0x2c4bf4); SET32(8, RW(0) + 29); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002C4BF8:;
wr32(c, (RW(21) + 92), RW(16));
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_002C4C0C:;
SET64(3, (s32)rd32(c, (RW(20) + 20)));
SET64(7, RD(19) + RD(0));
SET64(4, (s32)rd32(c, (RW(21) + 88)));
SET64(8, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(20) + 24)));
SET32(3, RW(3) + RW(18));
SET64(6, (s32)rd32(c, (RW(21) + 84)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) + RW(17));
SET64(31, 0x2c4c38); SET32(5, RW(2) + RW(3)); JP_F_0014FC00(c);
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2c4c50);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(21) + 88)));
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(3, RW(3) + RW(17));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 160), RW(3));
SET64(2, (s32)rd32(c, (RW(21) + 88)));
SET32(4, RW(2) + RW(17));
SET64(2, rd16(c, (RW(4) + 52)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C4C84; }
c->f[0].u = RW(2);
c->f[21].f = (f32)(s32)c->f[0].u; goto L_002C4C9C;
L_002C4C84:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[21].f = (f32)(s32)c->f[0].u;
c->f[21].f = fpu(F(21) + F(21));
L_002C4C9C:;
SET64(2, rd16(c, (RW(4) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C4CB4; }
c->f[0].u = RW(2);
c->f[20].f = (f32)(s32)c->f[0].u; goto L_002C4CCC;
L_002C4CB4:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[20].f = (f32)(s32)c->f[0].u;
c->f[20].f = fpu(F(20) + F(20));
L_002C4CCC:;
SET64(31, 0x2c4cd4);  JP_F_002C29B0(c);
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
SET64(31, 0x2c4d14); SET32(4, RW(2) + RW(16)); JP_F_0014E9B0(c);
SET64(3, (s32)rd32(c, (RW(21) + 92)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(16));
SET64(31, 0x2c4d2c); SET32(4, RW(2) + 192); JP_F_001638D0(c);
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
SET64(31, 0x2c4d94); SET32(4, RW(2) + RW(16)); JP_F_0014EB10(c);
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c4dac);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(21) + 92)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c4dc4);  rt_call(c, t); }
SET32(19, RW(19) + 1);
SET32(18, RW(18) + 4);
SET64(2, RSD(19) < (s64)29);
SET32(17, RW(17) + 64);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_002C4C0C; } }
SET64(4, RD(21) + RD(0));
SET64(31, 0x2c4de8); SET64(5, RD(0) + RD(0)); JP_F_002C4340(c);
if (RD(20) == RD(0)) { SET64(31, rd64(c, (RW(29) + 112))); goto L_002C4E08; }
SET64(25, (s32)rd32(c, (RW(20) + 16)));
SET64(4, RD(20) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4e04); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 112)));
L_002C4E08:;
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

void JP_F_002C4E30(Ctx *c) { /* func_002C4E30 */
ENTER(0x2c4e30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2c4e4c); SET64(4, (s32)rd32(c, (RW(4) + 80))); JP_F_001004B0(c);
wr32(c, (RW(17) + 80), RW(0));
SET64(31, 0x2c4e58); SET64(4, (s32)rd32(c, (RW(17) + 100))); JP_F_001004B0(c);
wr32(c, (RW(17) + 100), RW(0));
SET64(31, 0x2c4e64); SET64(4, (s32)rd32(c, (RW(17) + 104))); JP_F_001004B0(c);
wr32(c, (RW(17) + 104), RW(0));
SET64(31, 0x2c4e70); SET64(4, (s32)rd32(c, (RW(17) + 72))); JP_F_001004B0(c);
wr32(c, (RW(17) + 72), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 96), RW(0)); goto L_002C4E94; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4e90); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
L_002C4E94:;
SET64(16, (s32)rd32(c, (RW(17) + 108)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 108), RW(0)); goto L_002C4ED8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4832);
wr32(c, (RW(16) + 388), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c4ebc); SET32(4, RW(16) + 64); rt_call(c, t); }
SET32(4, RW(16) + 64);
SET32(5, RW(0) + -1);
SET64(31, 0x2c4ecc); wr8(c, (RW(16) + 384), (u8)RW(0)); JP_F_0014D0B0(c);
SET64(31, 0x2c4ed4); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(17) + 108), RW(0));
L_002C4ED8:;
SET64(31, 0x2c4ee0); SET64(4, (s32)rd32(c, (RW(17) + 76))); JP_F_001004B0(c);
wr32(c, (RW(17) + 76), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 92)));
SET64(31, 0x2c4ef4); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(17) + 92), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 88)));
SET64(31, 0x2c4f08); SET32(5, RW(5) + 1040); JP_F_001022C0(c);
wr32(c, (RW(17) + 88), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 84)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 84), RW(0)); goto L_002C4F2C; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c4f28); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 84), RW(0));
L_002C4F2C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C4F40(Ctx *c) { /* func_002C4F40 */
ENTER(0x2c4f40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C4FA8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11008);
SET32(3, RW(3) + 11016);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 11028);
SET64(31, 0x2c4f84); wr32(c, (RW(17) + 36), RW(2)); JP_F_002C4E30(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c4f90); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C4FAC; }
SET64(31, 0x2c4fa8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002C4FA8:;
SET64(2, RD(17) + RD(0));
L_002C4FAC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C4FC0(Ctx *c) { /* func_002C4FC0 */
ENTER(0x2c4fc0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c4fd8); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 11008);
SET32(2, RW(2) + 11016);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + 11028);
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

void JP_F_002C5050(Ctx *c) { /* func_002C5050 */
ENTER(0x2c5050);
SET32(4, RW(4) + -4); { JP_F_002C4F40(c); return; }
}

void JP_F_002C5060(Ctx *c) { /* func_002C5060 */
ENTER(0x2c5060);
SET32(4, RW(4) + -24); { JP_F_002C4F40(c); return; }
}

void JP_F_002C5070(Ctx *c) { /* func_002C5070 */
ENTER(0x2c5070);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C50C0; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11088);
SET64(31, 0x2c509c); wr32(c, (RW(17) + 4), RW(2)); JP_F_002C5240(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c50a8); SET64(5, RD(0) + RD(0)); JP_F_002A3830(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C50C4; }
SET64(31, 0x2c50c0); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002C50C0:;
SET64(2, RD(17) + RD(0));
L_002C50C4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C50E0(Ctx *c) { /* func_002C50E0 */
ENTER(0x2c50e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd8(c, (RW(4) + 36)));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C522C; }
SET64(2, rd8(c, (RW(17) + 101)));
if (RD(2) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 44))); goto L_002C51B4; }
SET64(3, rd8(c, (RW(17) + 95)));
SET64(2, RSD(3) < (s64)2);
if (RD(2) != RD(0)) { SET64(2, rd8(c, (RW(17) + 95))); goto L_002C5160; }
SET32(2, RW(3) + -2);
wr8(c, (RW(17) + 95), (u8)RW(2));
SET64(2, rd8(c, (RW(17) + 95)));
wr8(c, (RW(17) + 92), (u8)RW(2));
SET64(2, rd8(c, (RW(17) + 95)));
wr8(c, (RW(17) + 94), (u8)RW(2));
SET64(2, rd8(c, (RW(17) + 95)));
wr8(c, (RW(17) + 93), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 84)));
SET64(31, 0x2c5148); SET32(5, RW(17) + 92); JP_F_002AA110(c);
SET64(4, (s32)rd32(c, (RW(17) + 84)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c515c);  rt_call(c, t); }
SET64(2, rd8(c, (RW(17) + 95)));
L_002C5160:;
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002C5174; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002C518C;
L_002C5174:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002C518C:;
SET64(2, (s64)(s32)0x43000000);
SET64(4, (s32)rd32(c, (RW(17) + 68)));
c->f[0].u = RW(2);
c->f[1].f = fpu_div(F(1), F(0));
c->f[0].u = rd32(c, (RW(17) + 104));
SET64(31, 0x2c51b0); c->f[12].f = fpu(F(1) * F(0)); JP_F_002A1B40(c);
SET64(2, (s32)rd32(c, (RW(17) + 44)));
L_002C51B4:;
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 68))); goto L_002C51C4; }
SET64(16, RD(2) + RD(0));
SET64(4, (s32)rd32(c, (RW(17) + 68)));
L_002C51C4:;
SET64(31, 0x2c51cc); SET64(5, (s32)rd32(c, (RW(17) + 72))); JP_F_002A19F0(c);
if (RD(2) == RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 96))); goto L_002C5218; }
SET64(5, (s32)rd32(c, (RW(17) + 72)));
SET64(31, 0x2c51e0); SET64(4, (s32)rd32(c, (RW(17) + 76))); JP_F_002A1720(c);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2c51f4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(17) + 72)));
SET64(31, 0x2c5200); SET64(4, (s32)rd32(c, (RW(17) + 68))); JP_F_002A19B0(c);
SET64(3, (s32)rd32(c, (RW(17) + 96)));
SET32(3, RW(3) + 1);
SET64(3, RD(3) << 40);
SET64(3, RD(3) >> 40);
wr32(c, (RW(17) + 96), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 96)));
L_002C5218:;
if (RSD(3) < 0) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002C5230; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c522c); SET64(5, RD(16) + RD(0)); JP_F_002A3670(c);
L_002C522C:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002C5230:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C5240(Ctx *c) { /* func_002C5240 */
ENTER(0x2c5240);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 64)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 64), RW(0)); goto L_002C5270; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c526c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 64), RW(0));
L_002C5270:;
SET64(4, (s32)rd32(c, (RW(16) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 68), RW(0)); goto L_002C5290; }
SET64(25, (s32)rd32(c, (RW(4) + 68)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c528c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 68), RW(0));
L_002C5290:;
SET64(4, (s32)rd32(c, (RW(16) + 72)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 72), RW(0)); goto L_002C52B0; }
SET64(25, (s32)rd32(c, (RW(4) + 136)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c52ac); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 72), RW(0));
L_002C52B0:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 76), RW(0)); goto L_002C52D0; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c52cc); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 76), RW(0));
L_002C52D0:;
SET64(4, (s32)rd32(c, (RW(16) + 80)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 80), RW(0)); goto L_002C52F0; }
SET64(25, (s32)rd32(c, (RW(4) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c52ec); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 80), RW(0));
L_002C52F0:;
SET64(4, (s32)rd32(c, (RW(16) + 84)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 84), RW(0)); goto L_002C5310; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c530c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 84), RW(0));
L_002C5310:;
SET64(4, (s32)rd32(c, (RW(16) + 88)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 88), RW(0)); goto L_002C5330; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c532c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 88), RW(0));
L_002C5330:;
SET64(31, 0x2c5338); SET64(4, (s32)rd32(c, (RW(16) + 108))); JP_F_00100430(c);
wr32(c, (RW(16) + 108), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002C5350(Ctx *c) { /* func_002C5350 */
ENTER(0x2c5350);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2c536c); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_002C29C0(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(17, (s32)c->f[0].u);
SET64(31, 0x2c537c);  JP_F_002C2990(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(4, RW(0) + 72);
wr32(c, (RW(29) + 108), RW(17));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x2c5394); wr32(c, (RW(29) + 104), RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C53B0; }
SET64(2, (s64)(s32)0x41000000);
SET64(4, RD(17) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x2c53b0); SET32(5, RW(29) + 104); JP_F_002A22C0(c);
L_002C53B0:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c53bc); wr32(c, (RW(16) + 68), RW(17)); JP_F_002A2210(c);
SET64(31, 0x2c53c4); SET32(4, RW(2) + 128); JP_F_00100320(c);
wr32(c, (RW(16) + 108), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2c53d8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(28) + -29932)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c53e8); SET32(5, RW(2) + 48); JP_F_002A36D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 44)));
SET32(4, RW(0) + 28);
SET64(31, 0x2c53f8); wr8(c, (RW(2) + 324), (u8)RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C5418; }
SET64(5, (s32)rd32(c, (RW(29) + 104)));
SET64(4, RD(17) + RD(0));
SET64(6, (s32)rd32(c, (RW(29) + 108)));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2c5418); SET64(8, RD(0) + RD(0)); JP_F_002B2D80(c);
L_002C5418:;
SET32(4, RW(0) + 20);
SET64(31, 0x2c5424); wr32(c, (RW(16) + 80), RW(17)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C544C; }
SET64(31, 0x2c5434); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_002A2210(c);
SET64(5, (s32)rd32(c, (RW(16) + 108)));
SET64(6, RD(2) + RD(0));
SET64(4, RD(17) + RD(0));
SET32(7, RW(0) + 128);
SET64(31, 0x2c544c); SET64(8, RD(0) + RD(0)); JP_F_002AE320(c);
L_002C544C:;
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(31, 0x2c5458); SET64(5, RD(17) + RD(0)); JP_F_002A2170(c);
SET64(31, 0x2c5460); SET32(4, RW(0) + 144); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C5470; }
SET64(31, 0x2c5470); SET64(4, RD(17) + RD(0)); JP_F_002A23E0(c);
L_002C5470:;
SET32(4, RW(0) + 28);
SET64(31, 0x2c547c); wr32(c, (RW(16) + 72), RW(17)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C5490; }
SET64(5, (s32)rd32(c, (RW(16) + 80)));
SET64(31, 0x2c5490); SET64(4, RD(17) + RD(0)); JP_F_002A1960(c);
L_002C5490:;
SET32(4, RW(0) + 256);
SET64(31, 0x2c549c); wr32(c, (RW(16) + 76), RW(17)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C54C0; }
SET64(2, (s32)rd32(c, (RW(16) + 80)));
SET64(4, RD(17) + RD(0));
SET64(7, (s32)rd32(c, (RW(2) + 4)));
SET64(5, (s32)rd32(c, (RW(2) + 8)));
SET64(6, (s32)rd32(c, (RW(2) + 12)));
SET64(31, 0x2c54c0); SET64(8, RD(7) + RD(0)); JP_F_002B2840(c);
L_002C54C0:;
wr32(c, (RW(16) + 88), RW(17));
SET64(25, (s32)rd32(c, (RW(17) + 20)));
SET64(5, (s32)rd32(c, (RW(16) + 80)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2c54d8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 88)));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c54ec);  rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(16) + 88)));
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2c5504); SET32(4, RW(17) + 32); JP_F_002B46B0(c);
SET32(4, RW(17) + 32);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c5514); SET64(6, RD(0) + RD(0)); JP_F_002B4670(c);
SET32(4, RW(17) + 32);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c5524); SET32(6, RW(0) + 1); JP_F_002B4630(c);
SET64(31, 0x2c552c);  JP_F_002C2AD0(c);
if (RD(2) == RD(0)) { SET64(2, (s64)(s32)0x44000000); goto L_002C5544; }
SET64(31, 0x2c553c);  JP_F_002C29C0(c);
c->f[20].u = c->f[0].u; goto L_002C5548;
L_002C5544:;
c->f[20].u = RW(2);
L_002C5548:;
SET64(31, 0x2c5550);  JP_F_002C2990(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(4, RW(0) + 144);
wr32(c, (RW(29) + 80), RW(0));
wr32(c, (RW(29) + 84), RW(0));
SET64(2, (s32)c->f[0].u);
c->f[0].u = (u32)fpu_cvtw(F(20));
wr32(c, (RW(29) + 88), RW(2));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x2c5578); wr32(c, (RW(29) + 92), RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C5598; }
SET64(6, (s32)rd32(c, (RW(16) + 88)));
SET64(4, RD(17) + RD(0));
SET32(5, RW(29) + 80);
SET32(7, RW(16) + 92);
SET64(31, 0x2c5598); SET64(8, RD(0) + RD(0)); JP_F_002AA250(c);
L_002C5598:;
wr32(c, (RW(16) + 84), RW(17));
SET32(2, RW(0) + 512);
wr32(c, (RW(29) + 72), RW(2));
SET32(2, RW(0) + 448);
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 76), RW(2));
wr32(c, (RW(29) + 68), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 84)));
SET64(31, 0x2c55c0); SET32(5, RW(29) + 64); JP_F_002AA190(c);
SET64(4, (s32)rd32(c, (RW(16) + 84)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c55d4);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2c55e4); SET64(5, (s32)rd32(c, (RW(16) + 84))); JP_F_002ADFE0(c);
SET64(31, 0x2c55ec);  JP_F_002C81A0(c);
SET64(31, 0x2c55f4); SET64(4, RD(2) + RD(0)); JP_F_002C8280(c);
wr32(c, (RW(16) + 104), c->f[0].u);
c->f[12].u = rd32(c, (RW(16) + 104));
SET64(31, 0x2c5604); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_002A1B40(c);
wr8(c, (RW(16) + 112), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002C5620(Ctx *c) { /* func_002C5620 */
ENTER(0x2c5620);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(30, RW(29) + RW(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 176)));
{ int t = RD(16) == RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_002C5764; }
SET64(2, rd8(c, (RW(18) + 184)));
if (RD(2) == RD(0)) { SET64(2, rd8(c, (RW(18) + 185))); goto L_002C5768; }
SET64(31, 0x2c565c); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_002A1BC0(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + (s64)1); goto L_002C5674; }
SET64(2, rd8(c, (RW(16) + 100)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C5674; }
SET64(2, RD(0) + (s64)1);
L_002C5674:;
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(18) + 176))); goto L_002C5750; }
SET64(2, (s32)rd32(c, (RW(18) + 176)));
SET64(4, (s32)rd32(c, (RW(2) + 68)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C56A8; }
SET64(31, 0x2c5694);  JP_F_002A1C30(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C56A4; }
SET64(2, RD(0) + (s64)1); goto L_002C56A8;
L_002C56A4:;
SET64(2, RD(0) + RD(0));
L_002C56A8:;
{ int t = RD(2) == RD(0);  if (t) goto L_002C574C; }
SET64(2, (s32)rd32(c, (RW(18) + 176)));
SET64(2, rd8(c, (RW(2) + 101)));
{ int t = RD(2) != RD(0);  if (t) goto L_002C574C; }
SET64(31, 0x2c56c8); SET32(4, RW(0) + 20); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C5740; }
wr32(c, (RW(30) + 100), RW(29));
{ int t = RD(18) == RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_002C56E0; }
SET32(16, RW(18) + 164);
L_002C56E0:;
SET64(31, 0x2c56e8); SET64(4, RD(17) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(17) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(17) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(4));
SET32(2, RW(2) + 11424);
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(3));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(2)); goto L_002C5740;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c5730); SET32(5, RW(0) + 20); JP_F_002AC940(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c5740); SET64(6, RD(0) + RD(0)); JP_F_001041F0(c);
L_002C5740:;
SET64(5, RD(17) + RD(0));
SET64(31, 0x2c574c); SET64(4, RD(18) + RD(0)); JP_F_002AD930(c);
L_002C574C:;
SET64(2, (s32)rd32(c, (RW(18) + 176)));
L_002C5750:;
SET64(2, rd8(c, (RW(2) + 95)));
{ int t = RD(2) != RD(0);  if (t) goto L_002C5764; }
SET64(31, 0x2c5764); SET64(4, RD(18) + RD(0)); JP_F_002C5A50(c);
L_002C5764:;
SET64(2, rd8(c, (RW(18) + 185)));
L_002C5768:;
if (RD(2) != RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C57D8; }
SET64(2, (s32)rd32(c, (RW(18) + 176)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C57D4; }
SET64(4, (s32)rd32(c, (RW(2) + 68)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C57A4; }
SET64(31, 0x2c5790);  JP_F_002A1C30(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C57A0; }
SET64(2, RD(0) + (s64)1); goto L_002C57A4;
L_002C57A0:;
SET64(2, RD(0) + RD(0));
L_002C57A4:;
{ int t = RD(2) == RD(0);  if (t) goto L_002C57D4; }
SET64(4, (s32)rd32(c, (RW(18) + 176)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 176), RW(0)); goto L_002C57CC; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c57c8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 176), RW(0));
L_002C57CC:;
SET32(2, RW(0) + 1); goto L_002C57D8;
L_002C57D4:;
SET64(2, RD(0) + RD(0));
L_002C57D8:;
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002C5800(Ctx *c) { /* func_002C5800 */
ENTER(0x2c5800);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(30, RW(29) + RW(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 176)));
{ int t = RD(16) == RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_002C5934; }
SET64(2, rd8(c, (RW(18) + 184)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C5938; }
SET64(2, rd8(c, (RW(16) + 101)));
{ int t = RD(2) != RD(0);  if (t) goto L_002C5934; }
SET64(31, 0x2c5848); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_002A1BC0(c);
if (RD(2) != RD(0)) { SET64(2, RD(0) + (s64)1); goto L_002C5860; }
SET64(2, rd8(c, (RW(16) + 100)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C5860; }
SET64(2, RD(0) + (s64)1);
L_002C5860:;
if (RD(2) != RD(0)) { SET32(2, RW(0) + 1); goto L_002C5938; }
SET64(2, (s32)rd32(c, (RW(18) + 176)));
SET64(4, (s32)rd32(c, (RW(2) + 68)));
if (RD(4) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C5894; }
SET64(31, 0x2c5880);  JP_F_002A1C30(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C5890; }
SET64(2, RD(0) + (s64)1); goto L_002C5894;
L_002C5890:;
SET64(2, RD(0) + RD(0));
L_002C5894:;
{ int t = RD(2) == RD(0);  if (t) goto L_002C5928; }
SET64(31, 0x2c58a4); SET32(4, RW(0) + 20); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C591C; }
wr32(c, (RW(30) + 100), RW(29));
{ int t = RD(18) == RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_002C58BC; }
SET32(16, RW(18) + 164);
L_002C58BC:;
SET64(31, 0x2c58c4); SET64(4, RD(17) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(17) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(17) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(4));
SET32(2, RW(2) + 11424);
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(3));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(2)); goto L_002C591C;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c590c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c591c); SET64(6, RD(0) + RD(0)); JP_F_001041F0(c);
L_002C591C:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c5928); SET64(5, RD(17) + RD(0)); JP_F_002AD930(c);
L_002C5928:;
SET32(2, RW(0) + 1);
 goto L_002C5938;
L_002C5934:;
SET64(2, RD(0) + RD(0));
L_002C5938:;
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002C5960(Ctx *c) { /* func_002C5960 */
ENTER(0x2c5960);
SET64(2, (s32)rd32(c, (RW(4) + 176)));
if (RD(2) == RD(0)) { SET32(2, RW(0) + 1); goto L_002C5970; }
SET64(2, rd8(c, (RW(2) + 101)));
L_002C5970:;
 return;
}

void JP_F_002C5980(Ctx *c) { /* func_002C5980 */
ENTER(0x2c5980);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(30, RW(29) + RW(0));
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(4, RW(0) + 20);
SET64(31, 0x2c59a8); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C5A20; }
wr32(c, (RW(30) + 100), RW(29));
{ int t = RD(18) == RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_002C59C0; }
SET32(16, RW(18) + 164);
L_002C59C0:;
SET64(31, 0x2c59c8); SET64(4, RD(17) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(17) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(17) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 0), RW(4));
SET32(2, RW(2) + 11424);
wr32(c, (RW(17) + 8), RW(16));
wr32(c, (RW(17) + 12), RW(3));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 0), RW(2)); goto L_002C5A20;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c5a10); SET32(5, RW(0) + 20); JP_F_002AC940(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c5a20); SET64(6, RD(0) + RD(0)); JP_F_001041F0(c);
L_002C5A20:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c5a2c); SET64(5, RD(17) + RD(0)); JP_F_002AD930(c);
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002C5A50(Ctx *c) { /* func_002C5A50 */
ENTER(0x2c5a50);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(30, RW(29) + RW(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2c5a78); SET32(4, RW(0) + 20); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C5AF0; }
wr32(c, (RW(30) + 132), RW(29));
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_002C5A90; }
SET32(17, RW(16) + 160);
L_002C5A90:;
SET64(31, 0x2c5a98); SET64(4, RD(18) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + 11456);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(0));
wr32(c, (RW(18) + 0), RW(2)); goto L_002C5AF0;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c5ae0); SET32(5, RW(0) + 20); JP_F_002AC940(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c5af0); SET64(6, RD(0) + RD(0)); JP_F_001041F0(c);
L_002C5AF0:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x2c5afc); SET64(4, RD(16) + RD(0)); JP_F_002AD930(c);
SET64(31, 0x2c5b04); SET32(4, RW(0) + 20); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C5B7C; }
wr32(c, (RW(30) + 100), RW(29));
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_002C5B1C; }
SET32(17, RW(16) + 152);
L_002C5B1C:;
SET64(31, 0x2c5b24); SET64(4, RD(18) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + 11440);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(0));
wr32(c, (RW(18) + 0), RW(2)); goto L_002C5B7C;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c5b6c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c5b7c); SET64(6, RD(0) + RD(0)); JP_F_001041F0(c);
L_002C5B7C:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x2c5b88); SET64(4, RD(16) + RD(0)); JP_F_002AD930(c);
wr8(c, (RW(16) + 184), (u8)RW(0));
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002C5BB0(Ctx *c) { /* func_002C5BB0 */
ENTER(0x2c5bb0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(30, RW(29) + RW(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 180), RW(5));
SET64(31, 0x2c5bd8); SET64(16, RD(4) + RD(0)); JP_F_002ADAD0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c5be4); SET64(5, RD(16) + RD(0)); JP_F_002AD9C0(c);
SET64(31, 0x2c5bec); SET32(4, RW(0) + 128); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C5C54; }
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c5c04); SET32(6, RW(0) + 512); JP_F_002A38C0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(0) + 128);
SET32(2, RW(2) + 11088);
wr32(c, (RW(17) + 4), RW(2));
wr32(c, (RW(17) + 64), RW(0));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(17) + 68), RW(0));
wr32(c, (RW(17) + 72), RW(0));
wr32(c, (RW(17) + 76), RW(0));
wr32(c, (RW(17) + 80), RW(0));
wr32(c, (RW(17) + 84), RW(0));
wr32(c, (RW(17) + 88), RW(0));
wr8(c, (RW(17) + 92), (u8)RW(3));
wr8(c, (RW(17) + 93), (u8)RW(3));
wr8(c, (RW(17) + 94), (u8)RW(3));
wr8(c, (RW(17) + 95), (u8)RW(3));
wr8(c, (RW(17) + 100), (u8)RW(0));
wr8(c, (RW(17) + 101), (u8)RW(0));
wr32(c, (RW(17) + 104), RW(2));
wr32(c, (RW(17) + 108), RW(0));
L_002C5C54:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c5c60); wr32(c, (RW(16) + 176), RW(17)); JP_F_002C5350(c);
SET64(31, 0x2c5c68); SET32(4, RW(0) + 20); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C5CE0; }
wr32(c, (RW(30) + 132), RW(29));
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_002C5C80; }
SET32(17, RW(16) + 148);
L_002C5C80:;
SET64(31, 0x2c5c88); SET64(4, RD(18) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + 11488);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(0));
wr32(c, (RW(18) + 0), RW(2)); goto L_002C5CE0;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c5cd0); SET32(5, RW(0) + 20); JP_F_002AC940(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c5ce0); SET64(6, RD(0) + RD(0)); JP_F_001041F0(c);
L_002C5CE0:;
SET64(5, RD(18) + RD(0));
SET64(31, 0x2c5cec); SET64(4, RD(16) + RD(0)); JP_F_002AD930(c);
SET64(31, 0x2c5cf4); SET32(4, RW(0) + 20); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C5D6C; }
wr32(c, (RW(30) + 100), RW(29));
{ int t = RD(16) == RD(0); SET64(17, RD(16) + RD(0)); if (t) goto L_002C5D0C; }
SET32(17, RW(16) + 156);
L_002C5D0C:;
SET64(31, 0x2c5d14); SET64(4, RD(18) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5744);
wr32(c, (RW(18) + 0), RW(2));
SET32(3, RW(0) + 32);
wr32(c, (RW(18) + 4), RW(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 0), RW(4));
SET32(2, RW(2) + 11472);
wr32(c, (RW(18) + 8), RW(17));
wr32(c, (RW(18) + 12), RW(3));
wr32(c, (RW(18) + 16), RW(0));
wr32(c, (RW(18) + 0), RW(2)); goto L_002C5D6C;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c5d5c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c5d6c); SET64(6, RD(0) + RD(0)); JP_F_001041F0(c);
L_002C5D6C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c5d78); SET64(5, RD(18) + RD(0)); JP_F_002AD930(c);
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002C5DA0(Ctx *c) { /* func_002C5DA0 */
ENTER(0x2c5da0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(30, RW(29) + RW(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 172)));
{ int t = RD(2) != RD(0); SET64(18, RD(4) + RD(0)); if (t) goto L_002C5E44; }
SET64(31, 0x2c5dd0); SET32(4, RW(0) + 12); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C5E38; }
SET64(31, 0x2c5de0); SET32(4, RW(0) + 20); JP_F_002AC980(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C5E28; }
wr32(c, (RW(30) + 100), RW(29));
{ int t = RD(18) == RD(0); SET64(5, RD(18) + RD(0)); if (t) goto L_002C5DF8; }
SET32(5, RW(18) + 144);
L_002C5DF8:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c5e04); SET64(6, RD(0) + RD(0)); JP_F_002AE5C0(c);
SET64(5, RD(17) + RD(0)); goto L_002C5E2C;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c5e18); SET32(5, RW(0) + 20); JP_F_002AC940(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c5e28); SET64(6, RD(0) + RD(0)); JP_F_001041F0(c);
L_002C5E28:;
SET64(5, RD(17) + RD(0));
L_002C5E2C:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c5e38); SET32(6, RW(0) + 2); JP_F_002AE4D0(c);
L_002C5E38:;
wr32(c, (RW(18) + 172), RW(16));
SET32(2, RW(0) + 1); goto L_002C5E48;
L_002C5E44:;
SET64(2, RD(0) + RD(0));
L_002C5E48:;
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002C5E70(Ctx *c) { /* func_002C5E70 */
ENTER(0x2c5e70);
SET64(2, (s32)rd32(c, (RW(4) + 172)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C5E88; }
wr32(c, (RW(4) + 172), RW(0));
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 185), (u8)RW(0));
L_002C5E88:;
 return;
}

void JP_F_002C5E90(Ctx *c) { /* func_002C5E90 */
ENTER(0x2c5e90);
SET64(3, (s32)rd32(c, (RW(4) + 176)));
SET32(2, RW(0) + 1);
wr8(c, (RW(3) + 101), (u8)RW(2)); return;
}

void JP_F_002C5EA0(Ctx *c) { /* func_002C5EA0 */
ENTER(0x2c5ea0);
SET32(29, RW(29) + -16);
SET32(2, RW(0) + 1);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 176)));
wr8(c, (RW(3) + 100), (u8)RW(2));
SET64(31, 0x2c5ebc); SET64(4, (s32)rd32(c, (RW(3) + 68))); JP_F_002A1D50(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(2, RW(0) + 1);
SET32(29, RW(29) + 16); return;
}

void JP_F_002C5ED0(Ctx *c) { /* func_002C5ED0 */
ENTER(0x2c5ed0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 176)));
SET64(2, rd8(c, (RW(16) + 112)));
{ int t = RD(2) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002C5F20; }
wr8(c, (RW(16) + 36), (u8)RW(0));
SET64(31, 0x2c5efc); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_002ADDD0(c);
SET64(4, (s32)rd32(c, (RW(28) + -29932)));
SET64(31, 0x2c5f08); SET64(5, RD(16) + RD(0)); JP_F_002A3280(c);
SET64(31, 0x2c5f10); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_002A1C40(c);
SET32(2, RW(0) + -1);
wr32(c, (RW(16) + 96), RW(2));
wr8(c, (RW(16) + 112), (u8)RW(0));
wr8(c, (RW(16) + 100), (u8)RW(0));
L_002C5F20:;
wr8(c, (RW(17) + 184), (u8)RW(0));
SET32(2, RW(0) + 1);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C5F40(Ctx *c) { /* func_002C5F40 */
ENTER(0x2c5f40);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, rd8(c, (RW(4) + 184)));
{ int t = RD(2) != RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002C5FE0; }
SET64(16, (s32)rd32(c, (RW(17) + 176)));
SET64(2, rd8(c, (RW(16) + 112)));
{ int t = RD(2) != RD(0); SET64(19, (s32)rd32(c, (RW(17) + 180))); if (t) goto L_002C5FD4; }
SET64(31, 0x2c5f7c); SET32(4, RW(0) + 12); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C5F90; }
SET64(5, RD(19) + RD(0));
SET64(31, 0x2c5f90); SET64(4, RD(18) + RD(0)); JP_F_002B0570(c);
L_002C5F90:;
wr32(c, (RW(16) + 64), RW(18));
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(31, 0x2c5fa0); SET64(5, RD(18) + RD(0)); JP_F_002A20A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 68)));
SET64(31, 0x2c5fac); SET64(5, RD(0) + RD(0)); JP_F_002A1E60(c);
SET64(31, 0x2c5fb4); SET64(4, (s32)rd32(c, (RW(16) + 68))); JP_F_002A1F10(c);
SET32(6, RW(0) + -1);
wr32(c, (RW(16) + 96), RW(6));
SET64(4, (s32)rd32(c, (RW(28) + -29932)));
SET64(31, 0x2c5fc8); SET64(5, RD(16) + RD(0)); JP_F_002A32D0(c);
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 36), (u8)RW(2));
wr8(c, (RW(16) + 112), (u8)RW(2));
L_002C5FD4:;
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 184), (u8)RW(2)); goto L_002C5FF0;
L_002C5FE0:;
SET64(2, (s32)rd32(c, (RW(17) + 176)));
wr8(c, (RW(2) + 100), (u8)RW(0));
SET64(31, 0x2c5ff0); SET64(4, (s32)rd32(c, (RW(2) + 68))); JP_F_002A1F10(c);
L_002C5FF0:;
SET64(31, rd64(c, (RW(29) + 64)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002C6010(Ctx *c) { /* func_002C6010 */
ENTER(0x2c6010);
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 185), (u8)RW(2));
wr8(c, (RW(4) + 184), (u8)RW(0)); return;
}

void JP_F_002C6020(Ctx *c) { /* func_002C6020 */
ENTER(0x2c6020);
SET64(2, RD(4) + RD(0)); return;
}

static void JP_B_002C6030(Ctx *c, u32 entry) { /* func_002C6030 */
ENTER(entry);
switch (entry) { case 0x2c6090: goto L_002C6090; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
L_002C6044:;
SET64(4, RD(17) + RD(0));
L_002C6048:;
SET64(31, 0x2c6050); SET32(5, RW(0) + 16); JP_F_002AD840(c);
SET64(25, (s32)rd32(c, (RW(2) + 0)));
SET64(16, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c6064); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(0) < RD(16));
SET64(2, RD(2) ^ 0x1);
if (RD(2) != RD(0)) { SET64(4, RD(17) + RD(0)); { POLL(); goto L_002C6048; } }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c6088); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002C6044; }
L_002C6090:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C6148; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 11216);
SET32(2, RW(2) + 11232);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 84), RW(2));
SET32(3, RW(3) + 11248);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 88), RW(3));
SET32(2, RW(2) + 11272);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 144), RW(2));
SET32(3, RW(3) + 11288);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 148), RW(3));
SET32(2, RW(2) + 11304);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 152), RW(2));
SET32(3, RW(3) + 11320);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 156), RW(3));
SET32(2, RW(2) + 11336);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 160), RW(2));
SET32(3, RW(3) + 11352);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11368);
wr32(c, (RW(17) + 164), RW(3));
wr32(c, (RW(17) + 168), RW(2));
SET64(31, 0x2c6130); wr8(c, (RW(17) + 185), (u8)RW(0)); JP_F_002ADB40(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C614C; }
SET64(31, 0x2c6148); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002C6148:;
SET64(2, RD(17) + RD(0));
L_002C614C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002C6030(Ctx *c) { JP_B_002C6030(c, 0x2c6030); }
void JP_F_002C6090(Ctx *c) { JP_B_002C6030(c, 0x2c6090); }

void JP_F_002C6160(Ctx *c) { /* func_002C6160 */
ENTER(0x2c6160);
SET32(29, RW(29) + -32);
SET64(6, RD(6) & 0xffff);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c6178); SET64(16, RD(4) + RD(0)); JP_F_002ADBE0(c);
SET64(10, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(10, RW(10) + 5920);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 5904);
wr32(c, (RW(16) + 144), RW(10));
wr32(c, (RW(16) + 144), RW(3));
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11200);
wr32(c, (RW(16) + 148), RW(10));
wr32(c, (RW(16) + 148), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET32(4, RW(4) + 11184);
wr32(c, (RW(16) + 152), RW(10));
wr32(c, (RW(16) + 152), RW(4));
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 11168);
wr32(c, (RW(16) + 156), RW(10));
wr32(c, (RW(16) + 156), RW(3));
SET64(7, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11152);
wr32(c, (RW(16) + 160), RW(10));
wr32(c, (RW(16) + 160), RW(2));
SET64(6, (s64)(s32)0x4e0000);
SET32(7, RW(7) + 11136);
wr32(c, (RW(16) + 164), RW(10));
wr32(c, (RW(16) + 164), RW(7));
SET64(5, (s64)(s32)0x4e0000);
SET32(6, RW(6) + 11120);
wr32(c, (RW(16) + 168), RW(10));
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 168), RW(6));
SET32(5, RW(5) + 11216);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 0), RW(5));
SET32(4, RW(4) + 11232);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 84), RW(4));
SET32(3, RW(3) + 11248);
SET64(9, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 88), RW(3));
SET32(2, RW(2) + 11272);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 144), RW(2));
SET32(9, RW(9) + 11288);
SET64(7, (s64)(s32)0x4e0000);
SET64(6, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(8, RW(8) + 11304);
wr32(c, (RW(16) + 148), RW(9));
SET32(7, RW(7) + 11320);
wr32(c, (RW(16) + 152), RW(8));
SET32(6, RW(6) + 11336);
wr32(c, (RW(16) + 156), RW(7));
SET32(5, RW(5) + 11352);
wr32(c, (RW(16) + 160), RW(6));
SET32(4, RW(4) + 11368);
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

void JP_F_002C62A0(Ctx *c) { /* func_002C62A0 */
ENTER(0x2c62a0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c62bc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002C62D0(Ctx *c) { /* func_002C62D0 */
ENTER(0x2c62d0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c62ec);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002C6300(Ctx *c) { /* func_002C6300 */
ENTER(0x2c6300);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c631c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002C6330(Ctx *c) { /* func_002C6330 */
ENTER(0x2c6330);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c634c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002C6360(Ctx *c) { /* func_002C6360 */
ENTER(0x2c6360);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c637c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002C6390(Ctx *c) { /* func_002C6390 */
ENTER(0x2c6390);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C63DC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 11424);
SET64(31, 0x2c63c0); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C63E0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c63dc); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002C63DC:;
SET64(2, RD(17) + RD(0));
L_002C63E0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C6400(Ctx *c) { /* func_002C6400 */
ENTER(0x2c6400);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C644C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 11440);
SET64(31, 0x2c6430); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C6450; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c644c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002C644C:;
SET64(2, RD(17) + RD(0));
L_002C6450:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C6470(Ctx *c) { /* func_002C6470 */
ENTER(0x2c6470);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C64BC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 11456);
SET64(31, 0x2c64a0); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C64C0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c64bc); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002C64BC:;
SET64(2, RD(17) + RD(0));
L_002C64C0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C64E0(Ctx *c) { /* func_002C64E0 */
ENTER(0x2c64e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C652C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 11472);
SET64(31, 0x2c6510); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C6530; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c652c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002C652C:;
SET64(2, RD(17) + RD(0));
L_002C6530:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C6550(Ctx *c) { /* func_002C6550 */
ENTER(0x2c6550);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C659C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 11488);
SET64(31, 0x2c6580); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C65A0; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c659c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002C659C:;
SET64(2, RD(17) + RD(0));
L_002C65A0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C65C0(Ctx *c) { /* func_002C65C0 */
ENTER(0x2c65c0);
SET32(4, RW(4) + -32); { JP_F_002C6090(c); return; }
}

void JP_F_002C65D0(Ctx *c) { /* func_002C65D0 */
ENTER(0x2c65d0);
SET32(4, RW(4) + -88); { JP_F_002C6020(c); return; }
}

void JP_F_002C65E0(Ctx *c) { /* func_002C65E0 */
ENTER(0x2c65e0);
SET32(4, RW(4) + -144); { JP_F_002C6020(c); return; }
}

void JP_F_002C65F0(Ctx *c) { /* func_002C65F0 */
ENTER(0x2c65f0);
SET32(4, RW(4) + -144); { JP_F_002C5E70(c); return; }
}

void JP_F_002C6600(Ctx *c) { /* func_002C6600 */
ENTER(0x2c6600);
SET32(4, RW(4) + -148); { JP_F_002C6020(c); return; }
}

void JP_F_002C6610(Ctx *c) { /* func_002C6610 */
ENTER(0x2c6610);
SET32(4, RW(4) + -148); { JP_F_002C6010(c); return; }
}

void JP_F_002C6620(Ctx *c) { /* func_002C6620 */
ENTER(0x2c6620);
SET32(4, RW(4) + -152); { JP_F_002C6020(c); return; }
}

void JP_F_002C6630(Ctx *c) { /* func_002C6630 */
ENTER(0x2c6630);
SET32(4, RW(4) + -152); { JP_F_002C5DA0(c); return; }
}

void JP_F_002C6640(Ctx *c) { /* func_002C6640 */
ENTER(0x2c6640);
SET32(4, RW(4) + -156); { JP_F_002C6020(c); return; }
}

void JP_F_002C6650(Ctx *c) { /* func_002C6650 */
ENTER(0x2c6650);
SET32(4, RW(4) + -156); { JP_F_002C5F40(c); return; }
}

void JP_F_002C6660(Ctx *c) { /* func_002C6660 */
ENTER(0x2c6660);
SET32(4, RW(4) + -160); { JP_F_002C6020(c); return; }
}

void JP_F_002C6670(Ctx *c) { /* func_002C6670 */
ENTER(0x2c6670);
SET32(4, RW(4) + -160); { JP_F_002C5ED0(c); return; }
}

void JP_F_002C6680(Ctx *c) { /* func_002C6680 */
ENTER(0x2c6680);
SET32(4, RW(4) + -164); { JP_F_002C6020(c); return; }
}

void JP_F_002C6690(Ctx *c) { /* func_002C6690 */
ENTER(0x2c6690);
SET32(4, RW(4) + -164); { JP_F_002C5E90(c); return; }
}

void JP_F_002C66A0(Ctx *c) { /* func_002C66A0 */
ENTER(0x2c66a0);
SET32(4, RW(4) + -168); { JP_F_002C6020(c); return; }
}

void JP_F_002C66B0(Ctx *c) { /* func_002C66B0 */
ENTER(0x2c66b0);
SET32(4, RW(4) + -168); { JP_F_002C5EA0(c); return; }
}

void JP_F_002C66C0(Ctx *c) { /* func_002C66C0 */
ENTER(0x2c66c0);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28600); return;
}

void JP_F_002C66D0(Ctx *c) { /* func_002C66D0 */
ENTER(0x2c66d0);
 return;
}

void JP_F_002C66E0(Ctx *c) { /* func_002C66E0 */
ENTER(0x2c66e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C6768; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11504);
SET32(3, RW(3) + 11512);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 11524);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 36), RW(2)); if (t) goto L_002C6750; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31216);
SET32(3, RW(3) + -31208);
wr32(c, (RW(17) + 56), RW(2));
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + -31196);
SET64(31, 0x2c6750); wr32(c, (RW(17) + 36), RW(2)); JP_F_00139F30(c);
L_002C6750:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C676C; }
SET64(31, 0x2c6768); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002C6768:;
SET64(2, RD(17) + RD(0));
L_002C676C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C6780(Ctx *c) { hle_movie_step(c); } /* func_002C6780 */

void JP_F_002C6890(Ctx *c) { /* func_002C6890 */
ENTER(0x2c6890);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(28) + -29888)));
if (RD(4) == RD(0)) { wr32(c, (RW(28) + -29888), RW(0)); goto L_002C68B8; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c68b4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(28) + -29888), RW(0));
L_002C68B8:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002C68D0(Ctx *c) { /* func_002C68D0 */
ENTER(0x2c68d0);
SET32(29, RW(29) + -80);
SET32(4, RW(0) + 192);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c68ec); SET32(30, RW(29) + RW(0)); JP_F_00100670(c);
SET64(16, RD(2) + RD(0));
if (RD(16) == RD(0)) { wr32(c, (RW(28) + -29888), RW(16)); goto L_002C693C; }
SET64(5, (s32)rd32(c, (RW(28) + -29932)));
{ int t = RD(5) == RD(0); wr32(c, (RW(30) + 68), RW(29)); if (t) goto L_002C6908; }
SET32(5, RW(5) + 112);
L_002C6908:;
SET64(4, RD(16) + RD(0));
SET32(6, RW(0) + 32);
SET64(31, 0x2c6918); SET32(7, RW(0) + 2048); JP_F_002C6160(c);
 goto L_002C6938;
SET64(31, 0x2c6928); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
SET64(4, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c6938); SET64(6, RD(0) + RD(0)); JP_F_001041F0(c);
L_002C6938:;
wr32(c, (RW(28) + -29888), RW(16));
L_002C693C:;
SET32(29, RW(30) + RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[30]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002C6960(Ctx *c) { /* func_002C6960 */
ENTER(0x2c6960);
wr32(c, (RW(28) + -29888), RW(0)); return;
}

void JP_F_002C6970(Ctx *c) { /* func_002C6970 */
ENTER(0x2c6970);
wr16(c, (RW(4) + 0), (u16)RW(0));
SET32(3, RW(0) + -1);
wr16(c, (RW(4) + 64), (u16)RW(5));
wr8(c, (RW(4) + 66), (u8)RW(0));
wr16(c, (RW(4) + 68), (u16)RW(3)); return;
}

void JP_F_002C6990(Ctx *c) { /* func_002C6990 */
ENTER(0x2c6990);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c69a8); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -31216);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(3));
SET32(2, RW(2) + -31208);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -31196);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 36), RW(3));
SET32(2, RW(2) + 11504);
wr16(c, (RW(16) + 60), (u16)RW(0));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(4, RW(4) + 11512);
SET32(3, RW(3) + 11524);
wr32(c, (RW(16) + 20), RW(4));
wr32(c, (RW(16) + 36), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002C6A10(Ctx *c) { /* func_002C6A10 */
ENTER(0x2c6a10);
SET32(4, RW(4) + -4); { JP_F_002C66E0(c); return; }
}

void JP_F_002C6A20(Ctx *c) { /* func_002C6A20 */
ENTER(0x2c6a20);
SET32(4, RW(4) + -24); { JP_F_002C66E0(c); return; }
}

void JP_F_002C6A30(Ctx *c) { /* func_002C6A30 */
ENTER(0x2c6a30);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28528); return;
}

void JP_F_002C6A40(Ctx *c) { /* func_002C6A40 */
ENTER(0x2c6a40);
 return;
}

static void JP_B_002C6A50(Ctx *c, u32 entry) { /* func_002C6A50 */
ENTER(entry);
switch (entry) { case 0x2c73a4: goto L_002C73A4; case 0x2c73ac: goto L_002C73AC; case 0x2c73b4: goto L_002C73B4; case 0x2c73bc: goto L_002C73BC; case 0x2c73c4: goto L_002C73C4; }
L_002C6A50:;
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c6a70); SET64(16, RD(4) + RD(0)); JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c6a7c); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(31, 0x2c6a84);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c6a90); SET32(5, RW(0) + -1); JP_F_0013E260(c);
SET64(3, rd16(c, (RW(16) + 0)));
SET64(3, RSD(3) < (s64)2);
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(16) + 0))); goto L_002C6B8C; }
SET64(2, (s32)rd32(c, (RW(16) + 92)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C6B58; }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
{ int t = RD(4) == RD(0);  if (t) goto L_002C6B58; }
SET64(2, rd8(c, (RW(2) + 504)));
SET64(2, RD(2) & 0x1);
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002C6B58; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c6adc);  rt_call(c, t); }
SET64(3, RD(2) & 0xffff);
SET64(2, rd16(c, (RW(16) + 84)));
if (RD(2) != RD(3)) { wr16(c, (RW(16) + 84), (u16)RW(3)); goto L_002C6AFC; }
SET64(2, rd8(c, (RW(16) + 60)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C6B58; }
wr16(c, (RW(16) + 84), (u16)RW(3));
L_002C6AFC:;
SET64(5, RD(3) & 0xffff);
SET64(4, (s32)rd32(c, (RW(16) + 92)));
SET64(31, 0x2c6b0c); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(2, rd8(c, (RW(16) + 60)));
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 92))); goto L_002C6B4C; }
SET64(31, 0x2c6b20);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 92))); goto L_002C6B34; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(16) + 92)));
L_002C6B34:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 372)));
{ u32 t = RW(25); SET64(31, 0x2c6b44);  rt_call(c, t); }
wr8(c, (RW(16) + 60), (u8)RW(0)); goto L_002C6B58;
L_002C6B4C:;
SET64(31, 0x2c6b54);  JP_F_001432E0(c);
wr8(c, (RW(16) + 60), (u8)RW(0));
L_002C6B58:;
SET64(2, (s64)(s32)0x530000);
c->f[12].u = rd32(c, (RW(2) + -22384));
SET64(31, 0x2c6b68); SET64(4, (s32)rd32(c, (RW(16) + 104))); JP_F_00173B10(c);
SET64(3, rd8(c, (RW(16) + 228)));
{ int t = RD(3) == RD(0);  if (t) goto L_002C6B88; }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2c6b88);  rt_call(c, t); }
L_002C6B88:;
SET64(4, rd16(c, (RW(16) + 0)));
L_002C6B8C:;
SET32(3, RW(0) + 100);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 104))); goto L_002C7500; }
SET32(3, RW(0) + 15);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 96))); goto L_002C72FC; }
SET32(3, RW(0) + 12);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 116))); goto L_002C7244; }
SET32(3, RW(0) + 11);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 104))); goto L_002C71B4; }
SET32(3, RW(0) + 10);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 1); goto L_002C7138; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 104))); goto L_002C70F8; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(2, (s32)rd32(c, (RW(16) + 96))); goto L_002C70A4; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 108))); goto L_002C6FC0; }
{ int t = RD(4) == RD(0);  if (t) goto L_002C6BFC; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002C754C;
L_002C6BFC:;
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c6c08); SET32(4, RW(4) + 2964); JP_F_002C83B0(c);
SET64(31, 0x2c6c10); SET32(4, RW(0) + 12); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C6C20; }
SET64(31, 0x2c6c20); SET64(4, RD(17) + RD(0)); JP_F_002E1260(c);
L_002C6C20:;
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 3);
SET64(31, 0x2c6c30); wr32(c, (RW(16) + 108), RW(17)); JP_F_002E10E0(c);
wr8(c, (RW(29) + 92), (u8)RW(0));
SET32(5, RW(0) + 2075);
SET64(2, rd8(c, (RW(29) + 92)));
SET32(6, RW(29) + 92);
SET64(2, RD(2) | 0x1);
wr8(c, (RW(29) + 92), (u8)RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(31, 0x2c6c54); SET64(7, RD(0) + RD(0)); JP_F_002E0F80(c);
wr8(c, (RW(29) + 88), (u8)RW(0));
SET32(5, RW(0) + 2072);
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET32(6, RW(29) + 88);
SET64(31, 0x2c6c6c); SET32(7, RW(0) + 1); JP_F_002E0F80(c);
wr8(c, (RW(29) + 84), (u8)RW(0));
SET32(5, RW(0) + 12600);
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET32(6, RW(29) + 84);
SET64(31, 0x2c6c84); SET32(7, RW(0) + 2); JP_F_002E0F80(c);
SET64(31, 0x2c6c8c);  JP_F_00139590(c);
SET64(31, 0x2c6c94);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
SET64(31, 0x2c6ca0); SET32(5, RW(0) + 118); JP_F_001B89E0(c);
wr32(c, (RW(16) + 72), RW(2));
SET32(4, RW(0) + 1424);
SET32(2, RW(0) + 1);
SET64(31, 0x2c6cb4); wr16(c, (RW(16) + 0), (u16)RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C6CD4; }
SET32(6, RW(0) + 100);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 5376);
SET64(7, RD(6) + RD(0));
SET64(31, 0x2c6cd4); SET64(8, RD(6) + RD(0)); JP_F_00162820(c);
L_002C6CD4:;
wr32(c, (RW(16) + 112), RW(17));
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 228), (u8)RW(2));
SET64(31, 0x2c6ce8); SET32(4, RW(0) + 104); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C6E90; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c6cfc); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 11680);
SET32(2, RW(2) + 11688);
wr32(c, (RW(17) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(2));
SET32(3, RW(3) + 11700);
SET32(2, RW(17) + 72);
wr32(c, (RW(17) + 36), RW(3));
SET32(2, RW(2) + 8);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(17) + 60), RW(0));
SET32(3, RW(3) + -3584);
wr32(c, (RW(17) + 76), RW(3));
SET32(3, RW(17) + 88);
SET64(1, RD(2) < RD(3));
{ int t = RD(1) == RD(0); wr32(c, (RW(17) + 72), RW(0)); if (t) goto L_002C6E80; }
SET32(4, RW(17) + 80);
SET32(9, RW(3) - RW(4));
SET32(8, RW(9) + 7);
{ int t = RSD(8) >= 0; SET32(7, RSW(8) >> 3); if (t) goto L_002C6D64; }
SET32(3, RW(8) + 7);
SET32(7, RSW(3) >> 3);
L_002C6D64:;
SET32(6, RW(7) + 1);
SET64(1, RSD(6) < (s64)9);
{ int t = RD(1) != RD(0); SET32(5, RW(17) + 24); if (t) goto L_002C6E48; }
SET32(3, RW(17) + 88);
SET64(12, RD(0) + RD(0));
SET64(1, RD(3) < RD(4));
{ int t = RD(1) != RD(0); SET64(11, RD(0) + RD(0)); if (t) goto L_002C6DB4; }
SET64(4, (s64)(s32)0x80000000);
SET64(3, RD(9) & RD(4));
{ int t = RD(3) != RD(0); SET64(10, RD(0) + (s64)1); if (t) goto L_002C6DA8; }
SET64(3, RD(8) & RD(4));
{ int t = RD(3) == RD(0);  if (t) goto L_002C6DA8; }
SET64(10, RD(0) + RD(0));
L_002C6DA8:;
{ int t = RD(10) == RD(0);  if (t) goto L_002C6DB4; }
SET64(11, RD(0) + (s64)1);
L_002C6DB4:;
{ int t = RD(11) == RD(0);  if (t) goto L_002C6DE8; }
SET64(3, (s64)(s32)0x80000000);
SET64(4, RD(7) & RD(3));
{ int t = RD(4) != RD(0); SET64(8, RD(0) + (s64)1); if (t) goto L_002C6DDC; }
SET64(3, RD(6) & RD(3));
{ int t = RD(4) == RD(3);  if (t) goto L_002C6DDC; }
SET64(8, RD(0) + RD(0));
L_002C6DDC:;
{ int t = RD(8) == RD(0);  if (t) goto L_002C6DE8; }
SET64(12, RD(0) + (s64)1);
L_002C6DE8:;
{ int t = RD(12) == RD(0);  if (t) goto L_002C6E48; }
SET64(4, (s64)(s32)0x4d0000);
SET32(4, RW(4) + -3584);
wr32(c, (RW(2) + 4), RW(4));
L_002C6DFC:;
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
if (RD(3) != RD(0)) { wr32(c, (RW(2) + 4), RW(4)); { POLL(); goto L_002C6DFC; } }
L_002C6E48:;
SET32(5, RW(17) + 88);
SET64(1, RD(2) < RD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002C6E80; }
SET64(4, (s64)(s32)0x4d0000);
SET32(4, RW(4) + -3584);
L_002C6E60:;
wr32(c, (RW(2) + 4), RW(4));
wr32(c, (RW(2) + 0), RW(0));
SET32(2, RW(2) + 8);
SET64(3, RD(2) < RD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002C6E60; } }
L_002C6E80:;
wr32(c, (RW(17) + 88), RW(0));
wr32(c, (RW(17) + 92), RW(0));
wr32(c, (RW(17) + 96), RW(0));
wr32(c, (RW(17) + 100), RW(0));
L_002C6E90:;
wr32(c, (RW(16) + 100), RW(17));
wr32(c, (RW(17) + 88), RW(16));
SET64(5, (s32)rd32(c, (RW(16) + 100)));
SET64(31, 0x2c6ea4); SET64(4, RD(16) + RD(0)); JP_F_0013A470(c);
SET64(31, 0x2c6eac); SET32(4, RW(0) + 8); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C6EBC; }
SET64(31, 0x2c6ebc); SET64(4, RD(17) + RD(0)); JP_F_003BE340(c);
L_002C6EBC:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c6ec8); wr32(c, (RW(16) + 120), RW(17)); JP_F_003BE270(c);
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
SET64(31, 0x2c6f00); SET32(5, RW(0) + 2); JP_F_003BE0E0(c);
SET64(31, 0x2c6f08); SET32(4, RW(0) + 400); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C6F70; }
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x3f800000);
SET32(3, RW(3) + 4832);
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
SET64(31, 0x2c6f5c); wr32(c, (RW(17) + 60), RW(2)); JP_F_0014D1F0(c);
wr32(c, (RW(17) + 368), RW(0));
wr32(c, (RW(17) + 372), RW(0));
wr32(c, (RW(17) + 376), RW(0));
wr32(c, (RW(17) + 380), RW(0));
wr8(c, (RW(17) + 384), (u8)RW(0));
L_002C6F70:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c6f7c); wr32(c, (RW(16) + 104), RW(17)); JP_F_001740B0(c);
SET64(31, 0x2c6f84);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 104))); goto L_002C6F98; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(16) + 104)));
L_002C6F98:;
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2c6fa8);  JP_F_00173F60(c);
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2c6fb8); SET64(4, (s32)rd32(c, (RW(16) + 104))); JP_F_00173B10(c);
 goto L_002C7548;
L_002C6FC0:;
SET64(31, 0x2c6fc8); SET32(5, RW(0) + -1); JP_F_002E0E00(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002C7548; }
SET64(3, (s32)rd32(c, (RW(16) + 100)));
SET64(4, (s32)rd32(c, (RW(3) + 60)));
{ int t = RD(4) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002C6FFC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c6ff0);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C6FFC; }
SET64(17, RD(0) + (s64)1);
L_002C6FFC:;
{ int t = RD(17) != RD(0);  if (t) goto L_002C7548; }
SET64(31, 0x2c700c);  JP_F_00139590(c);
SET64(31, 0x2c7014);  JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(16) + 72)));
{ int t = RSD(3) < 0; SET64(4, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_002C703C; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x2c7034); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_001B9410(c);
SET64(3, RD(2) & 0xff); goto L_002C7040;
L_002C703C:;
SET64(3, RD(0) + RD(0));
L_002C7040:;
{ int t = RD(3) != RD(0);  if (t) goto L_002C7548; }
SET64(31, 0x2c7050); SET64(4, RD(16) + RD(0)); JP_F_002C7930(c);
SET64(31, 0x2c7058); SET64(18, (s32)rd32(c, (RW(16) + 72))); JP_F_00139590(c);
SET64(31, 0x2c7060);  JP_F_00139590(c);
{ int t = RSD(18) < 0; SET64(17, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_002C7098; }
SET64(2, (s64)(s32)0x3f800000);
SET64(4, RD(17) + RD(0));
c->f[12].u = RW(2);
SET64(31, 0x2c707c); SET64(5, RD(18) + RD(0)); JP_F_001B88B0(c);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(18) << 2);
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2c7098); SET64(5, RD(0) + RD(0)); JP_F_001B97F0(c);
L_002C7098:;
SET32(3, RW(0) + 2);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C7548;
L_002C70A4:;
SET64(2, (s32)rd32(c, (RW(2) + 4)));
wr8(c, (RW(2) + 167), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 116)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c70c4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, 0x2c70cc);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_002C70DC; }
SET32(5, RW(5) + 672);
L_002C70DC:;
SET64(2, (s64)(s32)0x4a0000);
c->f[12].u = rd32(c, (RW(2) + -18464));
SET64(31, 0x2c70ec); SET64(4, (s32)rd32(c, (RW(16) + 104))); JP_F_00174040(c);
SET32(3, RW(0) + 3);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C7548;
L_002C70F8:;
SET64(31, 0x2c7100);  JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C7548; }
SET64(2, (s32)rd32(c, (RW(16) + 96)));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
wr8(c, (RW(2) + 167), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 104)));
SET64(25, (s32)rd32(c, (RW(4) + 388)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c712c);  rt_call(c, t); }
SET32(3, RW(0) + 10);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C7548;
L_002C7138:;
SET64(31, 0x2c7140); wr8(c, (RW(16) + 228), (u8)RW(2)); JP_F_00139590(c);
SET64(31, 0x2c7148);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 20)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2c715c); SET64(5, (s32)rd32(c, (RW(16) + 72))); JP_F_001B88B0(c);
SET64(31, 0x2c7164); SET64(17, (s32)rd32(c, (RW(16) + 72))); JP_F_00139590(c);
SET64(31, 0x2c716c);  JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 20)));
SET32(4, RW(17) << 2);
SET64(3, (s32)rd32(c, (RW(3) + 4)));
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(4, (s32)rd32(c, (RW(3) + 0)));
if (RD(4) == RD(0)) { SET64(3, (s32)rd32(c, (RW(16) + 96))); goto L_002C7198; }
SET64(31, 0x2c7194);  JP_F_0029FDA0(c);
SET64(3, (s32)rd32(c, (RW(16) + 96)));
L_002C7198:;
SET64(3, (s32)rd32(c, (RW(3) + 4)));
SET64(3, rd8(c, (RW(3) + 180)));
{ int t = RD(3) == RD(0);  if (t) goto L_002C7548; }
SET32(3, RW(0) + 15);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C7548;
L_002C71B4:;
SET64(31, 0x2c71bc);  JP_F_00173A70(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C7548; }
SET64(31, 0x2c71cc); SET64(4, (s32)rd32(c, (RW(16) + 120))); JP_F_003BE020(c);
SET64(4, (s32)rd32(c, (RW(16) + 116)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c71e0);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c71f4);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 100)));
SET32(4, RW(0) + 20);
SET64(2, (s64)(s32)0x3f800000);
wr16(c, (RW(3) + 0), (u16)RW(4));
wr32(c, (RW(29) + 80), RW(2));
SET64(31, 0x2c7210); SET64(17, (s32)rd32(c, (RW(16) + 72))); JP_F_00139590(c);
SET64(31, 0x2c7218);  JP_F_00139590(c);
{ int t = RSD(17) < 0; SET64(4, (s32)rd32(c, (RW(2) + 20))); if (t) goto L_002C7238; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(17) << 2);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2c7238); SET32(5, RW(29) + 80); JP_F_001B9600(c);
L_002C7238:;
SET32(3, RW(0) + 12);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C7548;
L_002C7244:;
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c7258);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C7548; }
SET64(4, (s32)rd32(c, (RW(16) + 100)));
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(4) != RD(3);  if (t) goto L_002C7548; }
SET64(4, (s32)rd32(c, (RW(16) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 364)));
{ u32 t = RW(25); SET64(31, 0x2c7288);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C7548; }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c72a4);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C7548; }
SET64(31, 0x2c72b4);  JP_F_00139590(c);
SET64(31, 0x2c72bc);  JP_F_00139590(c);
SET64(31, 0x2c72c4); SET64(4, (s32)rd32(c, (RW(2) + 20))); JP_F_001B85D0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C7548; }
SET64(31, 0x2c72d4); SET64(4, (s32)rd32(c, (RW(16) + 120))); JP_F_003BDFC0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002C7548; }
SET64(4, (s32)rd32(c, (RW(16) + 104)));
SET64(25, (s32)rd32(c, (RW(4) + 388)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c72f0);  rt_call(c, t); }
SET32(3, RW(0) + 100);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C7548;
L_002C72FC:;
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c730c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 116)));
c->f[12].u = c->f[0].u;
SET64(31, 0x2c731c); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 116)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c7330);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2c7344);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C7548; }
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET32(19, RW(0) + -1);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(3) != RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002C742C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c7370);  rt_call(c, t); }
SET64(17, RD(2) << 48);
SET64(17, RSD(17) >> 48);
SET32(3, RW(17) + 1);
SET64(1, RD(3) < (u64)(s64)6);
if (RD(1) == RD(0)) { SET32(3, RW(0) + -1); goto L_002C740C; }
SET64(4, (s64)(s32)0x4c0000);
SET32(3, RW(3) << 2);
SET32(4, RW(4) + -28560);
SET32(3, RW(3) + RW(4));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
{ u32 t = RW(3);  switch (t) { case 0x2c6a50: goto L_002C6A50; case 0x2c73a4: goto L_002C73A4; case 0x2c73ac: goto L_002C73AC; case 0x2c73b4: goto L_002C73B4; case 0x2c73bc: goto L_002C73BC; case 0x2c73c4: goto L_002C73C4; default: rt_jump(c, t); return; } }
L_002C73A4:;
SET32(19, RW(0) + 1); goto L_002C7408;
L_002C73AC:;
SET32(19, RW(0) + 2); goto L_002C7408;
L_002C73B4:;
SET32(19, RW(0) + 4); goto L_002C7408;
L_002C73BC:;
SET32(19, RW(0) + 3); goto L_002C7408;
L_002C73C4:;
SET64(31, 0x2c73cc);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
{ int t = RD(5) == RD(0);  if (t) goto L_002C73DC; }
SET32(5, RW(5) + 672);
L_002C73DC:;
SET64(2, (s64)(s32)0x4a0000);
c->f[12].u = rd32(c, (RW(2) + -18464));
SET64(31, 0x2c73ec); SET64(4, (s32)rd32(c, (RW(16) + 104))); JP_F_00173F60(c);
SET64(4, (s32)rd32(c, (RW(16) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 376)));
{ u32 t = RW(25); SET64(31, 0x2c7400);  rt_call(c, t); }
SET32(3, RW(0) + 11);
wr16(c, (RW(16) + 0), (u16)RW(3));
L_002C7408:;
SET32(3, RW(0) + -1);
L_002C740C:;
if (RD(17) == RD(3)) { SET32(3, RW(0) + -1); goto L_002C741C; }
wr16(c, (RW(16) + 124), (u16)RW(17));
SET32(3, RW(0) + -1);
L_002C741C:;
if (RD(17) != RD(3)) { SET32(3, RW(0) + -1); goto L_002C74D4; }
SET64(18, RD(0) + (s64)1); goto L_002C74D0;
L_002C742C:;
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(25, (s32)rd32(c, (RW(4) + 16))); goto L_002C7448; }
SET32(2, RW(0) + 4);
if (RD(3) != RD(2)) { wr32(c, (RW(16) + 64), RW(0)); goto L_002C74AC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
L_002C7448:;
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c7454);  rt_call(c, t); }
SET64(4, RD(2) << 48);
SET32(3, RW(0) + -1);
SET64(4, RSD(4) >> 48);
if (RD(4) == RD(3)) { SET64(19, RD(0) + RD(0)); goto L_002C74D0; }
SET32(3, RW(0) + 2);
{ int t = RD(4) == RD(3);  if (t) goto L_002C74A0; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(3, RW(0) + 10); goto L_002C7498; }
if (RD(4) == RD(0)) { SET32(3, RW(0) + 10); goto L_002C7490; }
 goto L_002C74D0;
L_002C7490:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C74D0;
L_002C7498:;
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C74D0;
L_002C74A0:;
SET64(19, RD(0) + RD(0));
 goto L_002C74D0;
L_002C74AC:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c74c0); SET64(19, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + -1);
{ int t = RD(2) != RD(3);  if (t) goto L_002C74D0; }
SET64(18, RD(0) + (s64)1);
L_002C74D0:;
SET32(3, RW(0) + -1);
L_002C74D4:;
{ int t = RD(19) == RD(3);  if (t) goto L_002C7548; }
SET64(2, RD(18) & 0xff);
SET64(5, RD(19) + RD(0));
SET64(6, RD(2) ^ RD(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c74f4); SET64(6, RD(6) < (u64)(s64)1); JP_F_002C7590(c);
SET32(3, RW(0) + 10);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C7548;
L_002C7500:;
SET64(4, (s32)rd32(c, (RW(2) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c7514);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C7548; }
SET64(31, 0x2c7524); SET64(4, RD(16) + RD(0)); JP_F_002C7DD0(c);
SET64(31, 0x2c752c); SET64(4, RD(16) + RD(0)); JP_F_00139AB0(c);
SET64(2, RD(0) | 0xffff);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 2964);
SET64(31, 0x2c7540); wr16(c, (RW(16) + 0), (u16)RW(2)); JP_F_002C83B0(c);
SET64(31, 0x2c7548);  JP_F_0023F590(c);
L_002C7548:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002C754C:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}
void JP_F_002C6A50(Ctx *c) { JP_B_002C6A50(c, 0x2c6a50); }
void JP_F_002C73A4(Ctx *c) { JP_B_002C6A50(c, 0x2c73a4); }
void JP_F_002C73AC(Ctx *c) { JP_B_002C6A50(c, 0x2c73ac); }
void JP_F_002C73B4(Ctx *c) { JP_B_002C6A50(c, 0x2c73b4); }
void JP_F_002C73BC(Ctx *c) { JP_B_002C6A50(c, 0x2c73bc); }
void JP_F_002C73C4(Ctx *c) { JP_B_002C6A50(c, 0x2c73c4); }

void JP_F_002C7570(Ctx *c) { /* func_002C7570 */
ENTER(0x2c7570);
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
 return;
}

void JP_F_002C7580(Ctx *c) { /* func_002C7580 */
ENTER(0x2c7580);
 return;
}

void JP_F_002C7590(Ctx *c) { /* func_002C7590 */
ENTER(0x2c7590);
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
{ u32 t = RW(25); SET64(31, 0x2c75c0); SET64(16, RD(5) + RD(0)); rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002C790C; }
if (RD(18) == RD(0)) { SET64(2, (s32)rd32(c, (RW(17) + 128))); goto L_002C7658; }
SET64(4, (s32)rd32(c, (RW(17) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2c75e4);  rt_call(c, t); }
SET64(3, (s64)(s32)0x540000);
SET32(5, RW(17) + 156);
SET32(3, RW(3) + 2964);
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
L_002C7630:;
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(5) + 0), RW(3));
SET32(6, RW(6) + 8);
wr32(c, (RW(5) + 4), RW(2));
{ int t = RSD(4) > 0; SET32(5, RW(5) + 8); if (t) { POLL(); goto L_002C7630; } }
SET64(4, (s32)rd32(c, (RW(17) + 96))); goto L_002C76D0;
L_002C7658:;
SET64(3, (s64)(s32)0x540000);
SET32(3, RW(3) + 2964);
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
L_002C76A0:;
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(5) + 0), RW(3));
SET32(6, RW(6) + 8);
wr32(c, (RW(5) + 4), RW(2));
{ int t = RSD(4) > 0; SET32(5, RW(5) + 8); if (t) { POLL(); goto L_002C76A0; } }
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c76cc); SET32(4, RW(4) + 2964); JP_F_002C83B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 96)));
L_002C76D0:;
if (RD(4) == RD(0)) { SET32(2, RW(0) + 4); goto L_002C76EC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c76e8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(2, RW(0) + 4);
L_002C76EC:;
{ int t = RD(16) == RD(2); wr32(c, (RW(17) + 96), RW(0)); if (t) goto L_002C7860; }
SET32(2, RW(0) + 3);
if (RD(16) == RD(2)) { SET32(4, RW(0) + 28); goto L_002C7810; }
SET32(2, RW(0) + 2);
if (RD(16) == RD(2)) { SET32(4, RW(0) + 24); goto L_002C77C4; }
SET32(2, RW(0) + 1);
if (RD(16) == RD(2)) { SET32(4, RW(0) + 36); goto L_002C776C; }
if (RD(16) == RD(0)) { SET32(4, RW(0) + 20); goto L_002C7728; }
SET64(2, (s32)rd32(c, (RW(17) + 96))); goto L_002C78D0;
L_002C7728:;
SET64(31, 0x2c7730);  JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 96), RW(2)); goto L_002C78CC; }
SET64(4, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(4, RW(4) + 12000);
SET32(3, RW(3) + 11952);
wr32(c, (RW(2) + 16), RW(4));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(3));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(17) + 96), RW(2));
 goto L_002C78CC;
L_002C776C:;
SET64(31, 0x2c7774);  JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 96), RW(2)); goto L_002C78CC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 12000);
SET32(4, RW(4) + 11856);
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
 goto L_002C78CC;
L_002C77C4:;
SET64(31, 0x2c77cc);  JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 96), RW(2)); goto L_002C78CC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 12000);
SET32(4, RW(4) + 11904);
wr32(c, (RW(2) + 16), RW(3));
wr32(c, (RW(2) + 4), RW(0));
SET32(3, RW(0) + 2);
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(4));
wr32(c, (RW(2) + 20), RW(0));
wr32(c, (RW(2) + 0), RW(3));
wr32(c, (RW(17) + 96), RW(2));
 goto L_002C78CC;
L_002C7810:;
SET64(31, 0x2c7818);  JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 96), RW(2)); goto L_002C78CC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 12000);
SET32(4, RW(4) + 11808);
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
 goto L_002C78CC;
L_002C7860:;
SET64(31, 0x2c7868); SET32(4, RW(0) + 80); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(17) + 96), RW(2)); goto L_002C78CC; }
SET64(3, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 12000);
SET32(4, RW(4) + 11760);
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
L_002C78CC:;
SET64(2, (s32)rd32(c, (RW(17) + 96)));
L_002C78D0:;
SET32(5, RW(17) + 88);
wr32(c, (RW(2) + 12), RW(17));
SET64(4, (s32)rd32(c, (RW(17) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2c78ec); SET32(6, RW(17) + 80); rt_call(c, t); }
{ int t = RD(16) != RD(0);  if (t) goto L_002C7908; }
SET64(2, (s32)rd32(c, (RW(17) + 96)));
SET64(5, rd16(c, (RW(17) + 124)));
SET64(2, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x2c7908); SET32(4, RW(2) + 168); JP_F_0013BA20(c);
L_002C7908:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002C790C:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002C7920(Ctx *c) { /* func_002C7920 */
ENTER(0x2c7920);
 return;
}

void JP_F_002C7930(Ctx *c) { /* func_002C7930 */
ENTER(0x2c7930);
SET32(29, RW(29) + -240);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET32(4, RW(0) + 32);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(31, 0x2c7958); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C7968; }
SET64(31, 0x2c7968); SET64(4, RD(16) + RD(0)); JP_F_001509B0(c);
L_002C7968:;
SET32(5, RW(0) + 320);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2c7984); wr32(c, (RW(19) + 76), RW(16)); JP_F_00150830(c);
SET64(31, 0x2c798c); SET32(4, RW(0) + 2064); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C79B8; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + 1152);
SET32(6, RW(6) + 1040);
SET32(7, RW(0) + 64);
SET64(31, 0x2c79b4); SET32(8, RW(0) + 32); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002C79B8:;
SET32(4, RW(29) + 176);
SET64(31, 0x2c79c4); wr32(c, (RW(19) + 80), RW(16)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 196), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 200), RW(0));
wr32(c, (RW(29) + 192), RW(2));
wr32(c, (RW(29) + 204), RW(0));
wr16(c, (RW(29) + 208), (u16)RW(0));
wr16(c, (RW(29) + 210), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(19) + 108)));
SET64(31, 0x2c79f0); SET64(5, RD(0) + RD(0)); JP_F_002E0CD0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c79fc); SET32(4, RW(29) + 176); JP_F_00157540(c);
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_002C7A08:;
SET64(3, (s32)rd32(c, (RW(29) + 196)));
SET64(7, RD(18) + RD(0));
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET64(8, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 200)));
SET32(3, RW(3) + RW(17));
SET64(6, (s32)rd32(c, (RW(19) + 76)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(4) + RW(16));
SET64(31, 0x2c7a34); SET32(5, RW(2) + RW(3)); JP_F_0014FC00(c);
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 4);
SET64(2, RSD(18) < (s64)32);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 64); if (t) { POLL(); goto L_002C7A08; } }
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 176);
SET32(2, RW(2) + -32);
SET64(31, 0x2c7a5c); wr32(c, (RW(29) + 192), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 176);
SET64(31, 0x2c7a68); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(31, 0x2c7a70); SET32(4, RW(0) + 4); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C7A88; }
SET64(4, (s32)rd32(c, (RW(19) + 108)));
SET64(31, 0x2c7a84); SET32(5, RW(0) + 1); JP_F_002E0CD0(c);
wr32(c, (RW(16) + 0), RW(2));
L_002C7A88:;
SET64(2, (s64)(s32)0x439c0000);
wr32(c, (RW(19) + 88), RW(16));
wr32(c, (RW(29) + 164), RW(2));
SET64(4, (s64)(s32)0x44000000);
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x42e00000);
c->f[0].u = rd32(c, (RW(2) + -28728));
wr32(c, (RW(29) + 232), RW(4));
wr32(c, (RW(29) + 236), RW(3));
SET32(4, RW(29) + 96);
SET64(17, rd16(c, (RW(28) + -30220)));
SET64(2, (s64)(s32)0x3f800000);
SET64(16, (s32)rd32(c, (RW(19) + 88)));
wr32(c, (RW(29) + 172), RW(2));
wr32(c, (RW(29) + 168), c->f[0].u);
SET64(2, (s64)(s32)0x3f4c0000);
wr32(c, (RW(29) + 160), RW(0));
SET64(2, RD(2) | 0xcccd);
c->f[1].u = RW(2);
SET64(2, (s64)(s32)0x420000);
c->f[0].u = rd32(c, (RW(2) + 3920));
SET64(31, 0x2c7ae4); c->f[20].f = fpu(F(1) * F(0)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 116), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 120), RW(0));
wr32(c, (RW(29) + 112), RW(2));
wr32(c, (RW(29) + 124), RW(0));
wr16(c, (RW(29) + 128), (u16)RW(0));
wr16(c, (RW(29) + 130), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2c7b10); SET32(4, RW(29) + 96); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 116)));
SET64(2, RD(17) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 120)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 96);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -32);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2c7b40); wr32(c, (RW(29) + 112), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 96);
SET64(31, 0x2c7b4c); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(31, 0x2c7b54); SET32(4, RW(0) + 976); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002C7B68; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c7b68); SET32(5, RW(0) + 1); JP_F_002BE800(c);
L_002C7B68:;
SET64(31, 0x2c7b70); wr32(c, (RW(19) + 92), RW(17)); JP_F_00139590(c);
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
SET64(31, 0x2c7ba8); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); JP_F_0022CB90(c);
SET64(4, (s32)rd32(c, (RW(19) + 92)));
SET64(8, RD(2) + RD(0));
SET64(9, RD(16) + RD(0));
SET32(5, RW(29) + 144);
SET32(6, RW(29) + 224);
SET32(7, RW(0) + 1);
SET64(10, RD(0) + RD(0));
SET64(31, 0x2c7bcc); SET32(11, RW(29) + 232); JP_F_002BE370(c);
SET64(31, 0x2c7bd4); SET64(4, (s32)rd32(c, (RW(19) + 92))); JP_F_002BDE90(c);
SET64(4, (s32)rd32(c, (RW(19) + 92)));
SET64(3, (s64)(s32)0x42400000);
SET64(2, (s64)(s32)0x41800000);
SET64(4, (s32)rd32(c, (RW(4) + 940)));
wr32(c, (RW(4) + 0), RW(3));
wr32(c, (RW(4) + 4), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 92)));
SET64(31, 0x2c7bf8); wr32(c, (RW(2) + 452), c->f[20].u); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 92))); goto L_002C7C0C; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(19) + 92)));
L_002C7C0C:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 372)));
{ u32 t = RW(25); SET64(31, 0x2c7c1c);  rt_call(c, t); }
c->f[0].u = rd32(c, (RW(29) + 164));
SET32(2, RW(0) + 38);
SET32(4, RW(0) + 20);
wr32(c, (RW(28) + -29880), c->f[0].u);
SET64(31, 0x2c7c34); wr16(c, (RW(19) + 84), (u16)RW(2)); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(19) + 96), RW(2)); goto L_002C7C68; }
SET64(4, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(4, RW(4) + 12000);
SET32(3, RW(3) + 11952);
wr32(c, (RW(2) + 16), RW(4));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(2) + 16), RW(3));
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(19) + 96), RW(2));
L_002C7C68:;
SET32(5, RW(19) + 88);
wr32(c, (RW(2) + 12), RW(19));
SET64(4, (s32)rd32(c, (RW(19) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2c7c84); SET32(6, RW(19) + 80); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 96)));
SET32(4, RW(0) + 384);
SET64(2, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x2c7c98); wr8(c, (RW(2) + 167), (u8)RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C7CAC; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c7cac); SET32(5, RW(0) + 1); JP_F_0014E610(c);
L_002C7CAC:;
wr32(c, (RW(19) + 116), RW(16));
SET64(5, (s32)rd32(c, (RW(19) + 80)));
SET64(6, (s32)rd32(c, (RW(19) + 112)));
SET64(31, 0x2c7cc0); SET64(4, RD(16) + RD(0)); JP_F_002CC650(c);
SET64(2, (s32)rd32(c, (RW(19) + 116)));
SET64(31, 0x2c7ccc); c->f[20].u = rd32(c, (RW(2) + 164)); JP_F_002C29B0(c);
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
SET64(31, 0x2c7d08); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(19) + 116)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c7d20); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 116)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2c7d34);  rt_call(c, t); }
SET64(4, (s64)(s32)0x540000);
wr8(c, (RW(19) + 228), (u8)RW(0));
SET32(4, RW(4) + 2964);
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
L_002C7D84:;
SET64(4, (s32)rd32(c, (RW(7) + 0)));
SET32(5, RW(5) + -1);
SET64(3, (s32)rd32(c, (RW(7) + 4)));
wr32(c, (RW(6) + 0), RW(4));
SET32(7, RW(7) + 8);
wr32(c, (RW(6) + 4), RW(3));
{ int t = RSD(5) > 0; SET32(6, RW(6) + 8); if (t) { POLL(); goto L_002C7D84; } }
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 240); return;
}

void JP_F_002C7DD0(Ctx *c) { /* func_002C7DD0 */
ENTER(0x2c7dd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 76), RW(0)); goto L_002C7E04; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c7e00); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 76), RW(0));
L_002C7E04:;
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 80)));
SET64(31, 0x2c7e14); SET32(5, RW(5) + 1040); JP_F_001022C0(c);
wr32(c, (RW(17) + 80), RW(0));
SET64(31, 0x2c7e20); SET64(4, (s32)rd32(c, (RW(17) + 88))); JP_F_001004B0(c);
wr32(c, (RW(17) + 88), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 92)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 92), RW(0)); goto L_002C7E44; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c7e40); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 92), RW(0));
L_002C7E44:;
SET64(4, (s32)rd32(c, (RW(17) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 96), RW(0)); goto L_002C7E64; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c7e60); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
L_002C7E64:;
SET64(4, (s32)rd32(c, (RW(17) + 100)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 100), RW(0)); goto L_002C7E84; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c7e80); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 100), RW(0));
L_002C7E84:;
SET64(16, (s32)rd32(c, (RW(17) + 104)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 104), RW(0)); goto L_002C7EC8; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 4832);
wr32(c, (RW(16) + 388), RW(2));
SET64(25, (s32)rd32(c, (RW(16) + 72)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2c7eac); SET32(4, RW(16) + 64); rt_call(c, t); }
SET32(4, RW(16) + 64);
SET32(5, RW(0) + -1);
SET64(31, 0x2c7ebc); wr8(c, (RW(16) + 384), (u8)RW(0)); JP_F_0014D0B0(c);
SET64(31, 0x2c7ec4); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
wr32(c, (RW(17) + 104), RW(0));
L_002C7EC8:;
SET64(4, (s32)rd32(c, (RW(17) + 108)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 108), RW(0)); goto L_002C7EE8; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c7ee4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 108), RW(0));
L_002C7EE8:;
SET64(4, (s32)rd32(c, (RW(17) + 112)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 112), RW(0)); goto L_002C7F08; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c7f04); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 112), RW(0));
L_002C7F08:;
SET64(4, (s32)rd32(c, (RW(17) + 116)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 116), RW(0)); goto L_002C7F28; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c7f24); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 116), RW(0));
L_002C7F28:;
SET64(4, (s32)rd32(c, (RW(17) + 120)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 120), RW(0)); goto L_002C7F48; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c7f44); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 120), RW(0));
L_002C7F48:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C7F60(Ctx *c) { /* func_002C7F60 */
ENTER(0x2c7f60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002C8078; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11680);
SET32(3, RW(3) + 11688);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 11700);
wr32(c, (RW(16) + 36), RW(2));
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 60))); goto L_002C7FD4; }
SET64(31, 0x2c7fb4);  JP_F_00163040(c);
SET64(5, (s32)rd32(c, (RW(16) + 92)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -29932))); goto L_002C7FC8; }
SET32(5, RW(5) + 192);
SET64(4, (s32)rd32(c, (RW(28) + -29932)));
L_002C7FC8:;
SET64(31, 0x2c7fd0);  JP_F_002A3280(c);
SET64(4, (s32)rd32(c, (RW(16) + 60)));
L_002C7FD4:;
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 60), RW(0)); goto L_002C7FF0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c7fec); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 60), RW(0));
L_002C7FF0:;
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 92), RW(0)); goto L_002C8010; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c800c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 92), RW(0));
L_002C8010:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 96), RW(0)); goto L_002C8030; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c802c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 96), RW(0));
L_002C8030:;
SET64(4, (s32)rd32(c, (RW(16) + 100)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 100), RW(0)); goto L_002C8050; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c804c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 100), RW(0));
L_002C8050:;
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c8060); wr32(c, (RW(16) + 88), RW(0)); JP_F_00139F30(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(16) + RD(0)); goto L_002C807C; }
SET64(31, 0x2c8078); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002C8078:;
SET64(2, RD(16) + RD(0));
L_002C807C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C8090(Ctx *c) { /* func_002C8090 */
ENTER(0x2c8090);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002C80F8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11600);
SET32(3, RW(3) + 11608);
wr32(c, (RW(17) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 20), RW(3));
SET32(2, RW(2) + 11620);
SET64(31, 0x2c80d4); wr32(c, (RW(17) + 36), RW(2)); JP_F_002C7DD0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2c80e0); SET64(5, RD(0) + RD(0)); JP_F_00139F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002C80FC; }
SET64(31, 0x2c80f8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002C80F8:;
SET64(2, RD(17) + RD(0));
L_002C80FC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C8110(Ctx *c) { /* func_002C8110 */
ENTER(0x2c8110);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2c8128); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11600);
SET32(3, RW(3) + 11608);
wr32(c, (RW(16) + 56), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + 11620);
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

void JP_F_002C81A0(Ctx *c) { /* func_002C81A0 */
ENTER(0x2c81a0);
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + 2964); return;
}

void JP_F_002C81B0(Ctx *c) { /* func_002C81B0 */
ENTER(0x2c81b0);
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + 2964); return;
}

void JP_F_002C81C0(Ctx *c) { /* func_002C81C0 */
ENTER(0x2c81c0);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET32(2, RW(0) + 3);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x3f330000); goto L_002C8210; }
SET32(2, RW(0) + 2);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x3f000000); goto L_002C8204; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(2, (s64)(s32)0x3e990000); goto L_002C81F4; }
c->f[0].u = RW(0);
 goto L_002C8218;
L_002C81F4:;
SET64(2, RD(2) | 0x999a);
c->f[0].u = RW(2);
 goto L_002C8218;
L_002C8204:;
c->f[0].u = RW(2);
 goto L_002C8218;
L_002C8210:;
SET64(2, RD(2) | 0x3333);
c->f[0].u = RW(2);
L_002C8218:;
 return;
}

void JP_F_002C8220(Ctx *c) { /* func_002C8220 */
ENTER(0x2c8220);
c->f[1].u = rd32(c, (RW(4) + 24));
SET64(2, (s64)(s32)0x42c80000);
c->f[0].u = RW(2);
c->f[3].u = RW(0);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu_div(F(1), F(0));
c->fcc = F(0) <= F(3);
{ int t = c->fcc;  if (t) goto L_002C8270; }
SET64(2, (s64)(s32)0x3f230000);
SET64(3, (s64)(s32)0x3eb80000);
SET64(2, RD(2) | 0xd70a);
SET64(3, RD(3) | 0x51ec);
c->f[1].u = RW(2);
c->f[2].u = RW(3);
c->facc = fpu(F(3) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(0));
L_002C8270:;
 return;
}

void JP_F_002C8280(Ctx *c) { /* func_002C8280 */
ENTER(0x2c8280);
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
{ int t = !c->fcc; c->f[0].f = fpu(c->facc + F(3) * F(4)); if (t) goto L_002C82D0; }
c->f[0].u = c->f[1].u;
L_002C82D0:;
 return;
}

void JP_F_002C82E0(Ctx *c) { /* func_002C82E0 */
ENTER(0x2c82e0);
c->f[1].u = rd32(c, (RW(4) + 20));
SET64(2, (s64)(s32)0x42c80000);
c->f[0].u = RW(2);
c->f[3].u = RW(0);
c->f[1].f = (f32)(s32)c->f[1].u;
c->f[0].f = fpu_div(F(1), F(0));
c->fcc = F(1) <= F(3);
if (c->fcc) { SET64(2, (s64)(s32)0x3f800000); goto L_002C8334; }
SET64(2, (s64)(s32)0x3d4c0000);
SET64(3, (s64)(s32)0x3f730000);
SET64(2, RD(2) | 0xcccd);
SET64(3, RD(3) | 0x3333);
c->f[1].u = RW(2);
c->f[2].u = RW(3);
c->facc = fpu(F(3) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(0));
SET64(2, (s64)(s32)0x3f800000);
L_002C8334:;
c->f[1].u = RW(2);
c->fcc = F(0) <= F(1);
{ int t = c->fcc;  if (t) goto L_002C834C; }
c->f[0].u = c->f[1].u;
L_002C834C:;
 return;
}

void JP_F_002C8360(Ctx *c) { /* func_002C8360 */
ENTER(0x2c8360);
SET32(2, RW(5) << 3);
SET32(2, RW(2) + RW(5));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(4));
SET64(2, (s32)rd32(c, (RW(2) + 60)));
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(2) < (u64)(s64)1); return;
}

void JP_F_002C8380(Ctx *c) { /* func_002C8380 */
ENTER(0x2c8380);
SET32(3, RW(5) << 3);
SET32(2, RW(6) << 2);
SET32(3, RW(3) + RW(5));
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET32(2, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 28))); return;
}

void JP_F_002C83A0(Ctx *c) { /* func_002C83A0 */
ENTER(0x2c83a0);
SET64(2, (s32)rd32(c, (RW(4) + 8))); return;
}

void JP_F_002C83B0(Ctx *c) { /* func_002C83B0 */
ENTER(0x2c83b0);
SET32(2, RW(0) + 1); return;
}

void JP_F_002C83C0(Ctx *c) { /* func_002C83C0 */
ENTER(0x2c83c0);
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
L_002C83E8:;
{ int t = RD(12) == RD(11);  if (t) goto L_002C83F8; }
{ int t = RD(13) != RD(12);  if (t) goto L_002C8420; }
L_002C83F8:;
wr32(c, (RW(4) + 28), RW(10));
wr32(c, (RW(4) + 32), RW(9));
wr32(c, (RW(4) + 36), RW(8));
wr32(c, (RW(4) + 40), RW(7));
wr32(c, (RW(4) + 44), RW(6));
wr32(c, (RW(4) + 48), RW(0));
wr32(c, (RW(4) + 52), RW(5));
wr32(c, (RW(4) + 56), RW(0));
wr32(c, (RW(4) + 60), RW(0));
L_002C8420:;
SET32(13, RW(13) + 1);
SET64(3, RSD(13) < (s64)2);
{ int t = RD(3) != RD(0); SET32(4, RW(4) + 36); if (t) { POLL(); goto L_002C83E8; } }
 return;
}

void JP_F_002C8440(Ctx *c) { /* func_002C8440 */
ENTER(0x2c8440);
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
SET64(31, 0x2c8474); wr32(c, (RW(4) + 24), RW(2)); JP_F_002C83C0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002C8480(Ctx *c) { /* func_002C8480 */
ENTER(0x2c8480);
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002C8490(Ctx *c) { /* func_002C8490 */
ENTER(0x2c8490);
SET32(29, RW(29) + -208);
SET32(3, RW(0) + 21);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(5, rd16(c, (RW(4) + 0)));
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002C8898; }
SET32(3, RW(0) + 20);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 60))); goto L_002C8870; }
SET32(3, RW(0) + 10);
if (RD(5) == RD(3)) { c->f[12].u = rd32(c, (RW(16) + 72)); goto L_002C8548; }
SET32(3, RW(0) + 1);
if (RD(5) == RD(3)) { SET64(4, (s32)rd32(c, (RW(16) + 60))); goto L_002C84FC; }
{ int t = RD(5) == RD(0);  if (t) goto L_002C84E8; }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002C8974;
L_002C84E8:;
SET64(31, 0x2c84f0);  JP_F_002C8990(c);
SET32(3, RW(0) + 1);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C8970;
L_002C84FC:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c850c);  rt_call(c, t); }
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002C8970; }
SET64(2, (s32)rd32(c, (RW(16) + 92)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 228), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(6, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 168)));
{ u32 t = RW(25); SET64(31, 0x2c853c); SET64(5, (s32)rd32(c, (RW(16) + 100))); rt_call(c, t); }
SET32(3, RW(0) + 10);
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C8970;
L_002C8548:;
SET64(31, 0x2c8550);  JP_F_0011F6F0(c);
c->f[12].u = rd32(c, (RW(16) + 72));
SET64(31, 0x2c855c); c->f[21].u = c->f[0].u; JP_F_0011F6F0(c);
c->f[20].u = c->f[0].u;
SET64(31, 0x2c8568); SET32(4, RW(29) + 48); JP_F_0013AEA0(c);
SET32(4, RW(29) + 48);
SET64(31, 0x2c8574); SET32(5, RW(16) + 80); JP_F_0013AE00(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c8580); SET32(4, RW(29) + 128); JP_F_0013ADA0(c);
SET64(3, (s32)rd32(c, (RW(16) + 60)));
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET32(4, RW(3) + 64);
wr128(c, (RW(3) + 64) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 80) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 160) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 96) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 176) & ~15u, &c->r[2]);
SET64(31, 0x2c85ac); wr128(c, (RW(3) + 112) & ~15u, &c->r[2]); JP_F_002A4D70(c);
SET64(2, (s64)(s32)0xbf800000);
SET64(3, (s64)(s32)0x40ce0000);
wr32(c, (RW(29) + 192), RW(2));
c->f[2].u = RW(2);
SET64(2, (s64)(s32)0x42240000);
SET64(3, RD(3) | 0x6666);
wr32(c, (RW(29) + 200), RW(2));
c->f[3].u = RW(2);
SET64(2, (s64)(s32)0x3f8c0000);
SET64(5, (s32)rd32(c, (RW(16) + 92)));
SET64(2, RD(2) | 0xcccd);
wr32(c, (RW(29) + 196), RW(3));
c->f[1].u = RW(2);
c->f[0].u = c->f[21].u ^ 0x80000000u;
SET64(2, (s64)(s32)0x3e8f0000);
c->f[0].f = fpu(F(1) * F(0));
SET64(7, RD(2) | 0x5c29);
SET64(2, (s64)(s32)0x40c60000);
SET32(4, RW(5) + 784);
c->f[0].f = fpu(F(2) + F(0));
c->f[4].u = RW(3);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 204), RW(3));
wr32(c, (RW(29) + 112), c->f[0].u);
wr32(c, (RW(29) + 124), RW(3));
c->f[2].u = RW(7);
SET64(3, (s64)(s32)0x40270000);
SET64(6, RD(3) | 0xae14);
SET64(3, RD(2) | 0x6666);
c->f[0].u = RW(3);
rd128(c, (RW(29) + 192) & ~15u, &c->r[2]);
c->f[0].f = fpu(F(3) + F(0));
wr32(c, (RW(29) + 120), c->f[0].u);
c->f[1].u = RW(6);
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(2) * F(20));
c->f[0].f = fpu(F(4) + F(0));
wr32(c, (RW(29) + 116), c->f[0].u);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(5) + 800) & ~15u, &c->r[3]);
wr128(c, (RW(5) + 816) & ~15u, &c->r[2]);
SET64(31, 0x2c8660); wr32(c, (RW(5) + 832), RW(0)); JP_F_0015DAB0(c);
SET64(2, (s64)(s32)0x530000);
SET64(3, (s64)(s32)0x40400000);
c->f[2].u = rd32(c, (RW(2) + -22384));
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
{ u32 t = RW(25); SET64(31, 0x2c86b4);  rt_call(c, t); }
SET64(3, (s64)(s32)0x42700000);
SET64(2, (s64)(s32)0x40490000);
c->f[1].u = RW(3);
SET64(2, RD(2) | 0xfdb);
c->f[1].f = fpu_div(F(20), F(1));
c->f[12].f = fpu(F(1) + F(0));
c->f[1].u = RW(2);
c->fcc = F(12) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_002C8708; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c86f4); c->f[12].f = fpu(F(1) + F(12)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_002C8748;
L_002C8708:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002C8748; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c8734); c->f[12].f = fpu(F(12) - F(1)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_002C8748:;
SET64(25, (s32)rd32(c, (RW(16) + 76)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c8758); SET32(4, RW(16) + 72); rt_call(c, t); }
SET64(2, (s64)(s32)0x530000);
SET64(3, (s64)(s32)0x40400000);
c->f[2].u = rd32(c, (RW(2) + -22384));
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
{ u32 t = RW(25); SET64(31, 0x2c87ac);  rt_call(c, t); }
SET64(3, (s64)(s32)0x42700000);
SET64(2, (s64)(s32)0x40490000);
c->f[1].u = RW(3);
SET64(2, RD(2) | 0xfdb);
c->f[1].f = fpu_div(F(20), F(1));
c->f[12].f = fpu(F(1) + F(0));
c->f[1].u = RW(2);
c->fcc = F(12) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_002C8800; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c87ec); c->f[12].f = fpu(F(1) + F(12)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_002C8840;
L_002C8800:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002C8840; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c882c); c->f[12].f = fpu(F(12) - F(1)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_002C8840:;
SET64(25, (s32)rd32(c, (RW(16) + 84)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c8850); SET32(4, RW(16) + 80); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(2, (s64)(s32)0x530000);
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 192)));
{ u32 t = RW(25); SET64(31, 0x2c8868); c->f[12].u = rd32(c, (RW(2) + -22384)); rt_call(c, t); }
 goto L_002C8970;
L_002C8870:;
SET64(6, (s32)rd32(c, (RW(16) + 96)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2c8884); SET64(5, (s32)rd32(c, (RW(16) + 100))); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 92)));
SET32(3, RW(0) + 21);
wr8(c, (RW(4) + 228), (u8)RW(0));
wr16(c, (RW(16) + 0), (u16)RW(3)); goto L_002C8970;
L_002C8898:;
SET64(4, (s32)rd32(c, (RW(16) + 60)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 164)));
{ u32 t = RW(25); SET64(31, 0x2c88ac);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C8970; }
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 60))); goto L_002C88E8; }
SET64(31, 0x2c88c8);  JP_F_00163040(c);
SET64(5, (s32)rd32(c, (RW(16) + 92)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(28) + -29932))); goto L_002C88DC; }
SET32(5, RW(5) + 192);
SET64(4, (s32)rd32(c, (RW(28) + -29932)));
L_002C88DC:;
SET64(31, 0x2c88e4);  JP_F_002A3280(c);
SET64(4, (s32)rd32(c, (RW(16) + 60)));
L_002C88E8:;
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 60), RW(0)); goto L_002C8904; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c8900); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 60), RW(0));
L_002C8904:;
SET64(4, (s32)rd32(c, (RW(16) + 92)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 92), RW(0)); goto L_002C8924; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c8920); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 92), RW(0));
L_002C8924:;
SET64(4, (s32)rd32(c, (RW(16) + 96)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 96), RW(0)); goto L_002C8944; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c8940); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 96), RW(0));
L_002C8944:;
SET64(4, (s32)rd32(c, (RW(16) + 100)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 100), RW(0)); goto L_002C8964; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2c8960); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 100), RW(0));
L_002C8964:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c8970); wr32(c, (RW(16) + 88), RW(0)); JP_F_00139AB0(c);
L_002C8970:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002C8974:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 208); return;
}

void JP_F_002C8990(Ctx *c) { /* func_002C8990 */
ENTER(0x2c8990);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2c89ac); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002C29D0(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(16, (s32)c->f[0].u);
SET64(31, 0x2c89bc);  JP_F_002C2A00(c);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET32(4, RW(0) + 496);
wr32(c, (RW(29) + 76), RW(16));
wr32(c, (RW(29) + 64), RW(0));
wr32(c, (RW(29) + 68), RW(0));
SET64(2, (s32)c->f[0].u);
SET64(31, 0x2c89dc); wr32(c, (RW(29) + 72), RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C8A34; }
SET32(5, RW(0) + 60);
SET64(4, RD(18) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x2c89f8); SET64(7, RD(5) + RD(0)); JP_F_002A6630(c);
SET32(16, RW(18) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(16) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2c8a10); wr32(c, (RW(18) + 240), RW(4)); JP_F_002AE1F0(c);
SET64(31, 0x2c8a18); SET32(4, RW(16) + 32); JP_F_002A88F0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 240), RW(16));
SET32(2, RW(2) + -3920);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 144), RW(2));
SET64(31, 0x2c8a34); SET32(5, RW(18) + 272); JP_F_002A6520(c);
L_002C8A34:;
SET32(4, RW(0) + 496);
SET64(31, 0x2c8a40); wr32(c, (RW(17) + 96), RW(18)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C8A98; }
SET32(5, RW(0) + 60);
SET64(4, RD(18) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x2c8a5c); SET64(7, RD(5) + RD(0)); JP_F_002A6630(c);
SET32(16, RW(18) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(16) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2c8a74); wr32(c, (RW(18) + 240), RW(4)); JP_F_002AE1F0(c);
SET64(31, 0x2c8a7c); SET32(4, RW(16) + 32); JP_F_002A88F0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 240), RW(16));
SET32(2, RW(2) + -3920);
SET64(4, RD(18) + RD(0));
wr32(c, (RW(18) + 144), RW(2));
SET64(31, 0x2c8a98); SET32(5, RW(18) + 272); JP_F_002A6520(c);
L_002C8A98:;
SET32(4, RW(0) + 928);
SET64(31, 0x2c8aa4); wr32(c, (RW(17) + 100), RW(18)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C8ABC; }
SET64(5, (s32)rd32(c, (RW(28) + -29932)));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c8abc); SET32(6, RW(0) + 16384); JP_F_001632E0(c);
L_002C8ABC:;
SET64(4, RD(16) + RD(0));
SET32(5, RW(29) + 64);
SET64(31, 0x2c8acc); wr32(c, (RW(17) + 92), RW(16)); JP_F_00162E90(c);
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET64(2, (s32)rd32(c, (RW(2) + 236)));
wr8(c, (RW(2) + 324), (u8)RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 92)));
SET64(31, 0x2c8ae4); SET32(5, RW(0) + 1); JP_F_001630B0(c);
SET64(2, (s64)(s32)0x3eb20000);
SET64(2, RD(2) | 0xb8c3);
c->f[12].u = RW(2);
SET64(31, 0x2c8af8); SET64(4, (s32)rd32(c, (RW(17) + 92))); JP_F_00162D00(c);
SET64(2, (s32)rd32(c, (RW(17) + 92)));
wr8(c, (RW(2) + 228), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2c8b14); SET64(5, (s32)rd32(c, (RW(17) + 96))); JP_F_002ADFE0(c);
SET64(2, (s32)rd32(c, (RW(17) + 92)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2c8b28); SET64(5, (s32)rd32(c, (RW(17) + 100))); JP_F_002ADFE0(c);
SET64(31, 0x2c8b30); SET32(4, RW(0) + 416); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C8C5C; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2c8b44); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(31, 0x2c8b4c); SET32(4, RW(16) + 64); JP_F_00243A30(c);
SET64(31, 0x2c8b54); SET32(4, RW(16) + 224); JP_F_00141C80(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 1856);
SET32(2, RW(2) + 1864);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + 1876);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 36), RW(3));
SET32(2, RW(2) + 1936);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 208), RW(2));
SET32(3, RW(3) + 1960);
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
L_002C8C5C:;
wr32(c, (RW(17) + 60), RW(16));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET32(5, RW(0) + 23);
SET32(6, RW(0) + 1);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2c8c7c); SET64(7, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 60)));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2c8c8c); SET32(6, RW(0) + 1); JP_F_00168190(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[12].u = rd32(c, (RW(28) + -31312));
c->f[1].u = RW(2);
c->fcc = F(12) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_002C8CD4; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c8cc0); c->f[12].f = fpu(F(1) + F(12)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_002C8D14;
L_002C8CD4:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002C8D14; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c8d00); c->f[12].f = fpu(F(12) - F(1)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_002C8D14:;
SET64(25, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c8d24); SET32(4, RW(17) + 72); rt_call(c, t); }
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[12].u = rd32(c, (RW(28) + -31308));
c->f[1].u = RW(2);
c->fcc = F(12) <= F(1);
if (c->fcc) { SET64(2, (s64)(s32)0xc0490000); goto L_002C8D6C; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c8d58); c->f[12].f = fpu(F(1) + F(12)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(0) - F(1)); goto L_002C8DAC;
L_002C8D6C:;
SET64(2, RD(2) | 0xfdb);
c->f[0].u = RW(2);
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002C8DAC; }
SET64(2, (s64)(s32)0x40c90000);
SET64(2, RD(2) | 0xfdb);
c->f[13].u = RW(2);
SET64(31, 0x2c8d98); c->f[12].f = fpu(F(12) - F(1)); JP_F_0011F8C8(c);
SET64(2, (s64)(s32)0x40490000);
SET64(2, RD(2) | 0xfdb);
c->f[1].u = RW(2);
c->f[12].f = fpu(F(1) + F(0));
L_002C8DAC:;
SET64(25, (s32)rd32(c, (RW(17) + 84)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2c8dbc); SET32(4, RW(17) + 80); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002C8DE0(Ctx *c) { /* func_002C8DE0 */
ENTER(0x2c8de0);
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
{ u32 t = RW(25); SET64(31, 0x2c8e24); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
if (RD(2) == RD(0)) { SET64(2, (s16)rd16(c, (RW(16) + 36))); goto L_002C8E64; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c8e44); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c8e5c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr8(c, (RW(17) + 128), (u8)RW(0));
SET64(2, (s16)rd16(c, (RW(16) + 36)));
L_002C8E64:;
SET32(2, RW(2) + -1);
SET64(3, RD(2) << 48);
SET64(3, RSD(3) >> 48);
{ int t = RSD(3) >= 0; wr16(c, (RW(16) + 36), (u16)RW(2)); if (t) goto L_002C8EAC; }
SET64(2, rd8(c, (RW(16) + 40)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C8E8C; }
SET64(2, (s16)rd16(c, (RW(16) + 32)));
SET32(2, RW(3) + RW(2));
L_002C8E8C:;
wr16(c, (RW(16) + 36), (u16)RW(2));
SET64(2, rd8(c, (RW(16) + 40)));
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002C8EA8; }
SET64(3, (s16)rd16(c, (RW(16) + 32)));
SET64(2, (s16)rd16(c, (RW(16) + 34)));
SET32(2, RW(3) - RW(2));
L_002C8EA8:;
wr16(c, (RW(16) + 38), (u16)RW(2));
L_002C8EAC:;
SET64(2, (s16)rd16(c, (RW(16) + 36)));
SET64(4, (s16)rd16(c, (RW(16) + 38)));
SET64(1, RSD(2) < RSD(4));
if (RD(1) == RD(0)) { SET32(3, RW(2) - RW(4)); goto L_002C8EC8; }
wr16(c, (RW(16) + 38), (u16)RW(2)); goto L_002C8EE0;
L_002C8EC8:;
SET64(2, (s16)rd16(c, (RW(16) + 34)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, rd16(c, (RW(16) + 36))); goto L_002C8EE4; }
SET32(2, RW(4) + 1);
wr16(c, (RW(16) + 38), (u16)RW(2));
L_002C8EE0:;
SET64(4, rd16(c, (RW(16) + 36)));
L_002C8EE4:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET32(16, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c8f10); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C8F54; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c8f30); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c8f48); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 128), (u8)RW(2));
wr32(c, (RW(16) + 96), RW(0));
L_002C8F54:;
SET64(31, 0x2c8f5c);  JP_F_00139590(c);
SET64(31, 0x2c8f64);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 127);
SET64(31, 0x2c8f78); SET32(7, RW(0) + 64); JP_F_001B7420(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C8F90(Ctx *c) { /* func_002C8F90 */
ENTER(0x2c8f90);
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
{ u32 t = RW(25); SET64(31, 0x2c8fd4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
if (RD(2) == RD(0)) { SET64(2, (s16)rd16(c, (RW(16) + 36))); goto L_002C9014; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c8ff4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c900c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr8(c, (RW(17) + 128), (u8)RW(0));
SET64(2, (s16)rd16(c, (RW(16) + 36)));
L_002C9014:;
SET32(2, RW(2) + 1);
wr16(c, (RW(16) + 36), (u16)RW(2));
SET64(3, RD(2) << 48);
SET64(4, (s16)rd16(c, (RW(16) + 32)));
SET64(3, RSD(3) >> 48);
SET64(2, RSD(3) < RSD(4));
if (RD(2) != RD(0)) { SET64(2, (s16)rd16(c, (RW(16) + 36))); goto L_002C906C; }
SET64(2, rd8(c, (RW(16) + 40)));
if (RD(2) == RD(0)) { SET32(2, RW(4) + -1); goto L_002C9044; }
SET32(2, RW(3) - RW(4));
L_002C9044:;
wr16(c, (RW(16) + 36), (u16)RW(2));
SET64(2, rd8(c, (RW(16) + 40)));
if (RD(2) == RD(0)) { SET64(3, (s16)rd16(c, (RW(16) + 32))); goto L_002C905C; }
SET64(2, RD(0) + RD(0)); goto L_002C9064;
L_002C905C:;
SET64(2, (s16)rd16(c, (RW(16) + 34)));
SET32(2, RW(3) - RW(2));
L_002C9064:;
wr16(c, (RW(16) + 38), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(16) + 36)));
L_002C906C:;
SET64(4, (s16)rd16(c, (RW(16) + 38)));
SET64(1, RSD(2) < RSD(4));
if (RD(1) == RD(0)) { SET32(3, RW(2) - RW(4)); goto L_002C9084; }
wr16(c, (RW(16) + 38), (u16)RW(2)); goto L_002C909C;
L_002C9084:;
SET64(2, (s16)rd16(c, (RW(16) + 34)));
SET64(2, RSD(3) < RSD(2));
if (RD(2) != RD(0)) { SET64(4, rd16(c, (RW(16) + 36))); goto L_002C90A0; }
SET32(2, RW(4) + 1);
wr16(c, (RW(16) + 38), (u16)RW(2));
L_002C909C:;
SET64(4, rd16(c, (RW(16) + 36)));
L_002C90A0:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(3, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET32(16, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c90cc); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
{ int t = RD(2) == RD(0);  if (t) goto L_002C9110; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c90ec); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2c9104); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 128), (u8)RW(2));
wr32(c, (RW(16) + 96), RW(0));
L_002C9110:;
SET64(31, 0x2c9118);  JP_F_00139590(c);
SET64(31, 0x2c9120);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 127);
SET64(31, 0x2c9134); SET32(7, RW(0) + 64); JP_F_001B7420(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C9150(Ctx *c) { /* func_002C9150 */
ENTER(0x2c9150);
SET64(3, (s32)rd32(c, (RW(4) + 52)));
SET32(6, RW(0) + 1);
{ int t = RD(3) != RD(6); SET64(2, (s32)rd32(c, (RW(4) + 64))); if (t) goto L_002C918C; }
SET64(5, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(0) + 2);
SET64(5, rd16(c, (RW(5) + 172)));
if (RD(5) == RD(3)) { SET32(2, RW(0) + 51); goto L_002C91BC; }
if (RD(5) == RD(6)) { SET32(2, RW(0) + 60); goto L_002C91BC; }
if (RD(5) == RD(0)) { SET32(2, RW(0) + 59); goto L_002C91BC; }
wr32(c, (RW(4) + 64), RW(2)); goto L_002C91C0;
L_002C918C:;
SET32(3, RW(3) + -2);
SET64(1, RD(3) < (u64)(s64)2);
{ int t = RD(1) == RD(0);  if (t) goto L_002C91BC; }
SET64(3, rd16(c, (RW(4) + 36)));
SET32(2, RW(0) + 9);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 51); goto L_002C91BC; }
SET32(2, RW(0) + 8);
if (RD(3) == RD(2)) { SET32(2, RW(0) + 50); goto L_002C91BC; }
SET32(2, RW(0) + 48);
L_002C91BC:;
wr32(c, (RW(4) + 64), RW(2));
L_002C91C0:;
 return;
}

void JP_F_002C91D0(Ctx *c) { /* func_002C91D0 */
ENTER(0x2c91d0);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) == RD(0)) { SET32(4, RW(0) + 196); goto L_002C9208; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2c9204); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(4, RW(0) + 196);
L_002C9208:;
SET64(31, 0x2c9210); wr32(c, (RW(17) + 4), RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002C9250; }
SET64(31, 0x2c9220); SET64(4, RD(16) + RD(0)); JP_F_00228490(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -3136);
SET32(2, RW(2) + -3128);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -3116);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -3056);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002C9250:;
SET32(3, RW(29) + 128);
wr32(c, (RW(17) + 4), RW(16));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 16); if (t) goto L_002C927C; }
L_002C9260:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002C9260; } }
L_002C927C:;
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(18, (s32)rd32(c, (RW(17) + 44)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2c9290); SET64(4, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c929c); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c92a8); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c92b4); SET32(4, RW(29) + 172); JP_F_002C9510(c);
SET32(4, RW(29) + 172);
SET64(31, 0x2c92c0); SET32(5, RW(0) + 62); JP_F_002C94F0(c);
wr32(c, (RW(29) + 128), RW(2));
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(18, (s32)rd32(c, (RW(17) + 44)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2c92d8); SET64(4, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c92e4); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c92f0); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c92fc); SET32(4, RW(29) + 168); JP_F_002C9510(c);
SET32(4, RW(29) + 168);
SET64(31, 0x2c9308); SET32(5, RW(0) + 63); JP_F_002C94F0(c);
wr32(c, (RW(29) + 132), RW(2));
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(18, (s32)rd32(c, (RW(17) + 44)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2c9320); SET64(4, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c932c); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c9338); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c9344); SET32(4, RW(29) + 164); JP_F_002C9510(c);
SET32(4, RW(29) + 164);
SET64(31, 0x2c9350); SET32(5, RW(0) + 4); JP_F_002C94F0(c);
wr32(c, (RW(29) + 136), RW(2));
SET64(16, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2c9360); SET32(4, RW(29) + 64); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 84), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 80), RW(2));
wr32(c, (RW(29) + 92), RW(0));
wr16(c, (RW(29) + 96), (u16)RW(0));
wr16(c, (RW(29) + 98), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(31, 0x2c938c); SET64(5, RD(0) + RD(0)); JP_F_002E0CD0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c9398); SET32(4, RW(29) + 64); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 84)));
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(29) + 88)));
SET32(2, RW(2) + -32);
SET32(4, RW(29) + 64);
SET64(5, (s32)rd32(c, (RW(5) + 124)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2c93bc); wr32(c, (RW(29) + 80), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 64);
SET64(31, 0x2c93c8); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(6, RD(16) + RD(0));
SET32(5, RW(29) + 128);
SET32(7, RW(0) + -1);
SET32(8, RW(0) + 1);
SET32(9, RW(0) + 3);
SET64(31, 0x2c93e8); SET64(10, RD(0) + RD(0)); JP_F_00225E90(c);
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
c->f[0].u = rd32(c, (RW(28) + -31360));
SET64(7, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(7) + 144), c->f[0].u);
wr32(c, (RW(29) + 112), RW(6));
wr32(c, (RW(29) + 116), RW(4));
wr32(c, (RW(29) + 120), RW(3));
wr32(c, (RW(29) + 124), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2c9444); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(3, (s64)(s32)0x43600000);
SET64(2, (s64)(s32)0x43200000);
wr32(c, (RW(29) + 152), RW(3));
wr32(c, (RW(29) + 156), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2c9468); SET32(5, RW(29) + 152); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 176), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(5, rd16(c, (RW(17) + 48)));
SET64(31, 0x2c9484); SET32(4, RW(2) + 168); JP_F_0013BA20(c);
SET64(31, 0x2c948c);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002C94A0; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002C94A0:;
SET64(31, 0x2c94a8);  JP_F_0022A3D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2c94bc);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2c94d0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002C94F0(Ctx *c) { /* func_002C94F0 */
ENTER(0x2c94f0);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(5) & 0xffff);
SET32(2, RW(2) << 1);
SET32(2, RW(2) + RW(3));
SET64(2, rd16(c, (RW(2) + 2)));
SET32(2, RW(2) << 1);
SET32(2, RW(3) + RW(2)); return;
}

void JP_F_002C9510(Ctx *c) { /* func_002C9510 */
ENTER(0x2c9510);
wr32(c, (RW(4) + 0), RW(5));
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002C9520(Ctx *c) { /* func_002C9520 */
ENTER(0x2c9520);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2c9540); SET32(4, RW(29) + 48); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 68), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 72), RW(0));
wr32(c, (RW(29) + 64), RW(2));
wr32(c, (RW(29) + 76), RW(0));
wr16(c, (RW(29) + 80), (u16)RW(0));
wr16(c, (RW(29) + 82), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2c956c); SET32(4, RW(29) + 48); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 68)));
SET64(2, RD(16) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 72)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 48);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -32);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2c959c); wr32(c, (RW(29) + 64), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 48);
SET64(31, 0x2c95a8); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002C95C0(Ctx *c) { /* func_002C95C0 */
ENTER(0x2c95c0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2c95e0); SET32(4, RW(29) + 48); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 68), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 72), RW(0));
wr32(c, (RW(29) + 64), RW(2));
wr32(c, (RW(29) + 76), RW(0));
wr16(c, (RW(29) + 80), (u16)RW(0));
wr16(c, (RW(29) + 82), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2c960c); SET32(4, RW(29) + 48); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 68)));
SET64(2, RD(16) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 72)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 48);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -32);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2c963c); wr32(c, (RW(29) + 64), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 48);
SET64(31, 0x2c9648); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(2, rd16(c, (RW(16) + 0)));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002C9660(Ctx *c) { /* func_002C9660 */
ENTER(0x2c9660);
SET64(7, (s32)rd32(c, (RW(4) + 20)));
SET64(3, (s64)(s32)0x4c0000);
SET64(8, (s32)rd32(c, (RW(4) + 48)));
SET64(5, (s64)(s32)0x540000);
SET32(3, RW(3) + -28592);
SET32(5, RW(5) + 2964);
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

void JP_F_002C9800(Ctx *c) { /* func_002C9800 */
ENTER(0x2c9800);
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
SET32(17, RW(17) + 2964);
L_002C9834:;
SET64(5, (s32)rd32(c, (RW(21) + 48)));
SET64(2, (s64)(s32)0x4c0000);
SET32(3, RW(20) << 2);
SET64(2, rd16(c, (RW(2) + -28592)));
SET32(4, RW(5) << 3);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 2);
SET32(4, RW(17) + RW(4));
SET32(3, RW(4) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 28)));
{ int t = RD(3) == RD(2); SET64(19, RD(0) + RD(0)); if (t) goto L_002C9890; }
SET64(4, (s64)(s32)0x4c0000);
SET32(4, RW(4) + -28592);
L_002C9870:;
SET32(4, RW(4) + 2);
SET64(2, rd16(c, (RW(4) + 0)));
SET32(19, RW(19) + 1);
{ int t = RD(3) != RD(2);  if (t) { POLL(); goto L_002C9870; } }
L_002C9890:;
SET64(2, (s32)rd32(c, (RW(21) + 20)));
SET64(5, RD(19) & 0xffff);
SET32(16, RW(2) + RW(18));
SET64(31, 0x2c98a4); SET64(4, RD(16) + RD(0)); JP_F_0013BA20(c);
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET32(3, RW(19) << 1);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2c98c0); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2c98c8); SET64(4, (s32)rd32(c, (RW(16) + 28))); JP_F_001432E0(c);
SET32(20, RW(20) + 1);
SET64(2, RD(20) < (u64)(s64)8);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 144); if (t) { POLL(); goto L_002C9834; } }
SET64(5, (s32)rd32(c, (RW(21) + 48)));
SET64(3, (s64)(s32)0x540000);
SET64(2, (s32)rd32(c, (RW(21) + 20)));
SET32(3, RW(3) + 3024);
SET32(4, RW(5) << 3);
SET32(4, RW(4) + RW(5));
SET32(16, RW(2) + 1152);
SET32(2, RW(4) << 2);
SET32(2, RW(3) + RW(2));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(2, RD(2) ^ 0x1);
SET64(17, RD(0) < RD(2));
SET64(31, 0x2c9914); SET64(5, RD(17) + RD(0)); JP_F_0013BA20(c);
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET32(3, RW(17) << 1);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2c9930); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2c9938); SET64(4, (s32)rd32(c, (RW(16) + 28))); JP_F_001432E0(c);
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002C9960(Ctx *c) { /* func_002C9960 */
ENTER(0x2c9960);
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
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 76))); goto L_002C9BCC; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 76))); goto L_002C9B98; }
{ int t = RD(4) == RD(0);  if (t) goto L_002C99AC; }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002C9C10;
L_002C99AC:;
SET64(3, (s64)(s32)0x4c0000);
SET64(2, (s64)(s32)0x4c0000);
rd128(c, (RW(3) + -28736) & ~15u, &c->r[3]);
c->f[20].u = rd32(c, (RW(2) + -28756));
SET64(31, 0x2c99c4); wr128(c, (RW(29) + 192) & ~15u, &c->r[3]); JP_F_002C29B0(c);
SET64(18, rd16(c, (RW(28) + -30220)));
c->f[21].u = c->f[0].u;
SET64(16, (s32)rd32(c, (RW(17) + 44)));
SET64(31, 0x2c99d8); SET32(4, RW(29) + 128); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 148), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 156), RW(0));
wr16(c, (RW(29) + 160), (u16)RW(0));
wr16(c, (RW(29) + 162), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2c9a04); SET32(4, RW(29) + 128); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 148)));
SET64(2, RD(18) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 128);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -32);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2c9a34); wr32(c, (RW(29) + 144), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2c9a40); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(31, 0x2c9a48); SET32(4, RW(0) + 976); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002C9A5C; }
SET64(4, RD(18) + RD(0));
SET64(31, 0x2c9a5c); SET32(5, RW(0) + 1); JP_F_002BE800(c);
L_002C9A5C:;
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
SET64(31, 0x2c9a90); SET32(4, RW(29) + 80); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 100), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 104), RW(0));
wr32(c, (RW(29) + 96), RW(2));
wr32(c, (RW(29) + 108), RW(0));
wr16(c, (RW(29) + 112), (u16)RW(0));
wr16(c, (RW(29) + 114), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 108)));
SET64(31, 0x2c9abc); SET64(5, RD(0) + RD(0)); JP_F_002E0CD0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2c9ac8); SET32(4, RW(29) + 80); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 100)));
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(29) + 104)));
SET32(2, RW(2) + -32);
SET32(4, RW(29) + 80);
SET64(5, (s32)rd32(c, (RW(5) + 124)));
SET32(18, RW(3) + RW(5));
SET64(31, 0x2c9aec); wr32(c, (RW(29) + 96), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2c9af8); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(8, RD(18) + RD(0));
SET64(9, RD(16) + RD(0));
SET32(5, RW(29) + 176);
SET32(6, RW(29) + 216);
SET32(7, RW(0) + 1);
SET64(10, RD(0) + RD(0));
SET64(31, 0x2c9b1c); SET64(11, RD(0) + RD(0)); JP_F_002BE370(c);
SET64(2, (s32)rd32(c, (RW(17) + 76)));
SET32(5, RW(0) + 6);
SET64(31, 0x2c9b2c); SET32(4, RW(2) + 16); JP_F_001460F0(c);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 180)));
{ u32 t = RW(25); SET64(31, 0x2c9b40); SET32(5, RW(0) + 61); rt_call(c, t); }
SET64(31, 0x2c9b48);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 76))); goto L_002C9B5C; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
L_002C9B5C:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 372)));
{ u32 t = RW(25); SET64(31, 0x2c9b6c);  rt_call(c, t); }
SET64(31, 0x2c9b74); SET64(4, (s32)rd32(c, (RW(17) + 76))); JP_F_002BDE90(c);
SET64(4, (s32)rd32(c, (RW(17) + 76)));
SET64(3, (s64)(s32)0x42000000);
SET64(4, (s32)rd32(c, (RW(4) + 940)));
wr32(c, (RW(4) + 0), RW(3));
wr32(c, (RW(4) + 4), RW(3));
SET64(3, rd16(c, (RW(17) + 72)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 72), (u16)RW(3)); goto L_002C9C0C;
L_002C9B98:;
SET64(3, rd8(c, (RW(4) + 504)));
SET64(3, RD(3) & 0x1);
SET64(3, RD(0) < RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_002C9C0C; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 376)));
{ u32 t = RW(25); SET64(31, 0x2c9bbc);  rt_call(c, t); }
SET64(3, rd16(c, (RW(17) + 72)));
SET32(3, RW(3) + 1);
wr16(c, (RW(17) + 72), (u16)RW(3)); goto L_002C9C0C;
L_002C9BCC:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 364)));
{ u32 t = RW(25); SET64(31, 0x2c9bdc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002C9C0C; }
SET64(4, (s32)rd32(c, (RW(17) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 76), RW(0)); goto L_002C9C04; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2c9c00); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 76), RW(0));
L_002C9C04:;
SET32(3, RW(0) + 3);
wr32(c, (RW(17) + 52), RW(3));
L_002C9C0C:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002C9C10:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 224); return;
}

void JP_F_002C9C30(Ctx *c) { /* func_002C9C30 */
ENTER(0x2c9c30);
SET32(29, RW(29) + -32);
SET64(7, (s64)(s32)0x410000);
SET32(7, RW(7) + 31224);
SET32(6, RW(29) + 16);
SET32(5, RW(0) + 3);
L_002C9C44:;
SET64(3, (s16)rd16(c, (RW(7) + 0)));
SET32(5, RW(5) + -1);
SET64(2, (s16)rd16(c, (RW(7) + 2)));
wr16(c, (RW(6) + 0), (u16)RW(3));
wr16(c, (RW(6) + 2), (u16)RW(2));
SET32(7, RW(7) + 4);
{ int t = RSD(5) > 0; SET32(6, RW(6) + 4); if (t) { POLL(); goto L_002C9C44; } }
SET64(8, (s32)rd32(c, (RW(4) + 20)));
SET64(7, (s64)(s32)0x4c0000);
wr8(c, (RW(29) + 8), (u8)RW(0));
SET64(13, RD(0) + RD(0));
wr8(c, (RW(29) + 9), (u8)RW(0));
SET64(11, RD(0) + RD(0));
wr8(c, (RW(29) + 10), (u8)RW(0));
SET32(3, RW(0) + 1);
wr8(c, (RW(29) + 11), (u8)RW(0));
SET32(7, RW(7) + -28592);
wr8(c, (RW(29) + 12), (u8)RW(0));
SET32(5, RW(29) + 16);
wr8(c, (RW(29) + 13), (u8)RW(0));
SET32(4, RW(29) + 8);
L_002C9C9C:;
SET32(2, RW(8) + RW(11));
SET64(12, RD(0) + RD(0));
SET64(2, rd16(c, (RW(2) + 4)));
SET64(10, RD(5) + RD(0));
SET64(9, RD(4) + RD(0));
SET32(2, RW(2) << 1);
SET32(2, RW(7) + RW(2));
SET64(6, rd16(c, (RW(2) + 0)));
L_002C9CC0:;
SET64(2, rd16(c, (RW(10) + 0)));
{ int t = RD(6) != RD(2);  if (t) goto L_002C9CD0; }
wr8(c, (RW(9) + 0), (u8)RW(3));
L_002C9CD0:;
SET32(12, RW(12) + 1);
SET64(2, RSD(12) < (s64)6);
SET32(10, RW(10) + 2);
{ int t = RD(2) != RD(0); SET32(9, RW(9) + 1); if (t) { POLL(); goto L_002C9CC0; } }
SET32(13, RW(13) + 1);
SET64(2, RSD(13) < (s64)8);
{ int t = RD(2) != RD(0); SET32(11, RW(11) + 144); if (t) { POLL(); goto L_002C9C9C; } }
SET64(4, RD(0) + RD(0));
SET32(3, RW(29) + 8);
L_002C9CFC:;
SET64(2, rd8(c, (RW(3) + 0)));
if (RD(2) != RD(0)) { SET32(4, RW(4) + 1); goto L_002C9D10; }
SET64(2, RD(0) + RD(0)); goto L_002C9D20;
L_002C9D10:;
SET64(2, RSD(4) < (s64)6);
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 1); if (t) { POLL(); goto L_002C9CFC; } }
SET32(2, RW(0) + 1);
L_002C9D20:;
SET32(29, RW(29) + 32); return;
}

void JP_F_002C9D30(Ctx *c) { /* func_002C9D30 */
ENTER(0x2c9d30);
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x4b0000);
wr64(c, (RW(29) + 32), RD(31));
SET64(2, (s64)(s32)0x530000);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[3].u = rd32(c, (RW(3) + -1880));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[1].u = rd32(c, (RW(4) + 56));
c->f[2].u = rd32(c, (RW(2) + -22384));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[20].f = fpu(c->facc - F(3) * F(2));
c->fcc = F(20) <= F(0);
{ int t = !c->fcc; SET64(16, RD(4) + RD(0)); if (t) goto L_002C9E1C; }
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 52), RW(3));
c->f[20].u = c->f[0].u;
wr8(c, (RW(16) + 68), (u8)RW(0));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x2c9d8c); wr8(c, (RW(2) + 60), (u8)RW(3)); JP_F_002C91D0(c);
SET64(2, rd8(c, (RW(16) + 69)));
if (RD(2) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002C9E20; }
SET64(7, (s32)rd32(c, (RW(16) + 12)));
SET64(3, (s64)(s32)0x540000);
SET32(3, RW(3) + 2964);
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
L_002C9DE8:;
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(5) + 0), RW(3));
SET32(6, RW(6) + 8);
wr32(c, (RW(5) + 4), RW(2));
{ int t = RSD(4) > 0; SET32(5, RW(5) + 8); if (t) { POLL(); goto L_002C9DE8; } }
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c9e14); SET32(4, RW(4) + 2964); JP_F_002C83B0(c);
SET64(31, 0x2c9e1c); SET64(4, RD(16) + RD(0)); JP_F_002C9800(c);
L_002C9E1C:;
SET64(4, RD(16) + RD(0));
L_002C9E20:;
SET64(31, 0x2c9e28); c->f[12].u = c->f[20].u; JP_F_002CAC80(c);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002C9E40(Ctx *c) { /* func_002C9E40 */
ENTER(0x2c9e40);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(19, rd16(c, (RW(4) + 36)));
SET64(31, 0x2c9e6c); SET64(17, RD(4) + RD(0)); JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c9e78); SET32(5, RW(0) + -1); JP_F_0013E1A0(c);
SET64(31, 0x2c9e80); SET64(16, RD(2) & 0xffff); JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2c9e8c); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(4, RD(16) & 0xffff);
SET64(5, RD(2) & 0xffff);
SET64(3, RD(4) & 0x10);
SET64(18, RD(0) + RD(0));
{ int t = RD(3) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002C9EB4; }
SET64(31, 0x2c9eac); SET64(4, RD(17) + RD(0)); JP_F_002C8DE0(c);
 goto L_002C9FCC;
L_002C9EB4:;
SET64(3, RD(4) & 0x40);
if (RD(3) == RD(0)) { SET64(3, RD(4) & 0x20); goto L_002C9ED0; }
SET64(31, 0x2c9ec8); SET64(4, RD(17) + RD(0)); JP_F_002C8F90(c);
 goto L_002C9FCC;
L_002C9ED0:;
if (RD(3) == RD(0)) { SET64(3, RD(4) & 0x80); goto L_002C9F00; }
SET64(4, RD(19) & 0xffff);
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET32(3, RW(4) << 3);
SET32(5, RW(0) + 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET64(31, 0x2c9ef8); SET32(4, RW(2) + RW(3)); JP_F_002CBAC0(c);
 goto L_002C9FCC;
L_002C9F00:;
if (RD(3) == RD(0)) { SET64(4, RD(5) & 0xffff); goto L_002C9F30; }
SET64(4, RD(19) & 0xffff);
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET32(3, RW(4) << 3);
SET32(5, RW(0) + -1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET64(31, 0x2c9f28); SET32(4, RW(2) + RW(3)); JP_F_002CBAC0(c);
 goto L_002C9FCC;
L_002C9F30:;
SET64(3, RD(4) & 0x2000);
if (RD(3) == RD(0)) { SET64(3, RD(4) & 0x4000); goto L_002C9F9C; }
SET64(3, rd16(c, (RW(17) + 36)));
SET32(2, RW(0) + 9);
if (RD(3) != RD(2)) { SET64(18, RD(0) + (s64)1); goto L_002C9F70; }
SET64(5, (s16)rd16(c, (RW(17) + 48)));
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2c9f5c); SET32(4, RW(4) + 2964); JP_F_002C83C0(c);
SET64(31, 0x2c9f64); SET64(4, RD(17) + RD(0)); JP_F_002C9800(c);
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET64(2, (s16)rd16(c, (RW(2) + 1156)));
wr16(c, (RW(17) + 70), (u16)RW(2));
L_002C9F70:;
SET64(31, 0x2c9f78);  JP_F_00139590(c);
SET64(31, 0x2c9f80);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 2);
SET32(6, RW(0) + 127);
SET64(31, 0x2c9f94); SET32(7, RW(0) + 64); JP_F_001B7420(c);
 goto L_002C9FCC;
L_002C9F9C:;
{ int t = RD(3) == RD(0);  if (t) goto L_002C9FCC; }
SET64(18, RD(0) + (s64)1);
SET64(31, 0x2c9fb0); SET64(16, RD(18) + RD(0)); JP_F_00139590(c);
SET64(31, 0x2c9fb8);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 3);
SET32(6, RW(0) + 127);
SET64(31, 0x2c9fcc); SET32(7, RW(0) + 64); JP_F_001B7420(c);
L_002C9FCC:;
if (RD(18) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 20))); goto L_002CA120; }
SET64(31, 0x2c9fdc);  JP_F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x2c9fe8); SET64(4, RD(2) + RD(0)); JP_F_0013E2C0(c);
SET64(31, 0x2c9ff0); SET64(4, RD(2) + RD(0)); JP_F_0013E930(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002CA014; }
SET64(31, 0x2ca000);  JP_F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x2ca00c); SET64(4, RD(2) + RD(0)); JP_F_0013E2C0(c);
SET64(31, 0x2ca014); SET64(4, RD(2) + RD(0)); JP_F_0013E830(c);
L_002CA014:;
{ int t = RD(16) != RD(0);  if (t) goto L_002CA02C; }
SET64(31, 0x2ca024); SET64(4, RD(17) + RD(0)); JP_F_002C9C30(c);
if (RD(2) == RD(0)) { wr16(c, (RW(17) + 72), (u16)RW(0)); goto L_002CA110; }
L_002CA02C:;
if (RD(16) != RD(0)) { SET64(4, rd16(c, (RW(17) + 36))); goto L_002CA048; }
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2ca044); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, rd16(c, (RW(17) + 36)));
L_002CA048:;
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET32(3, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 4);
SET32(18, RW(2) + RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ca074); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 24)));
if (RD(2) == RD(0)) { SET64(18, (s32)rd32(c, (RW(17) + 24))); goto L_002CA0B4; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ca094); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ca0ac); SET32(5, RW(0) + 1); rt_call(c, t); }
wr8(c, (RW(18) + 128), (u8)RW(0));
SET64(18, (s32)rd32(c, (RW(17) + 24)));
L_002CA0B4:;
SET64(21, RD(0) + RD(0));
SET64(20, RD(0) + RD(0));
L_002CA0BC:;
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(2, RW(2) + RW(20));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ca0d8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(2, RW(2) + RW(20));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ca0f4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(21, RW(21) + 1);
SET64(3, RD(21) < (u64)(s64)4);
{ int t = RD(3) != RD(0); SET32(20, RW(20) + 384); if (t) { POLL(); goto L_002CA0BC; } }
SET32(3, RW(0) + 4);
wr32(c, (RW(17) + 52), RW(3)); goto L_002CA118;
L_002CA110:;
SET32(3, RW(0) + 5);
wr32(c, (RW(17) + 52), RW(3));
L_002CA118:;
wr8(c, (RW(17) + 69), (u8)RW(16)); goto L_002CA21C;
L_002CA120:;
SET64(3, (s16)rd16(c, (RW(17) + 70)));
SET64(4, rd16(c, (RW(4) + 1156)));
if (RD(3) == RD(4)) { SET64(16, rd16(c, (RW(17) + 36))); goto L_002CA220; }
SET64(2, RD(4) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RD(2) != RD(0); wr16(c, (RW(17) + 70), (u16)RW(4)); if (t) goto L_002CA1B4; }
SET64(4, (s32)rd32(c, (RW(17) + 48)));
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + 3024);
SET32(5, RW(0) + 1);
SET32(3, RW(4) << 3);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET64(31, 0x2ca168); wr32(c, (RW(2) + 0), RW(5)); JP_F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x2ca174); SET64(4, RD(2) + RD(0)); JP_F_0013E2C0(c);
SET64(31, 0x2ca17c); SET64(4, RD(2) + RD(0)); JP_F_0013E930(c);
SET64(3, RD(2) & 0xff);
{ int t = RD(3) != RD(0);  if (t) goto L_002CA21C; }
SET64(31, 0x2ca190);  JP_F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x2ca19c); SET64(4, RD(2) + RD(0)); JP_F_0013E2C0(c);
SET64(3, (s64)(s32)0x40a00000);
c->f[12].u = RW(3);
SET64(31, 0x2ca1ac); SET64(4, RD(2) + RD(0)); JP_F_0013EA40(c);
 goto L_002CA21C;
L_002CA1B4:;
SET64(31, 0x2ca1bc);  JP_F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x2ca1c8); SET64(4, RD(2) + RD(0)); JP_F_0013E2C0(c);
SET64(31, 0x2ca1d0); SET64(4, RD(2) + RD(0)); JP_F_0013E930(c);
SET64(4, RD(2) & 0xff);
SET32(3, RW(0) + 1);
if (RD(4) != RD(3)) { SET64(5, (s32)rd32(c, (RW(17) + 48))); goto L_002CA200; }
SET64(31, 0x2ca1e8);  JP_F_00138DE0(c);
SET64(5, (s32)rd32(c, (RW(17) + 48)));
SET64(31, 0x2ca1f4); SET64(4, RD(2) + RD(0)); JP_F_0013E2C0(c);
SET64(31, 0x2ca1fc); SET64(4, RD(2) + RD(0)); JP_F_0013E830(c);
SET64(5, (s32)rd32(c, (RW(17) + 48)));
L_002CA200:;
SET64(3, (s64)(s32)0x540000);
SET32(3, RW(3) + 3024);
SET32(4, RW(5) << 3);
SET32(4, RW(4) + RW(5));
SET32(4, RW(4) << 2);
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 0), RW(0));
L_002CA21C:;
SET64(16, rd16(c, (RW(17) + 36)));
L_002CA220:;
SET64(3, RD(19) & 0xffff);
if (RD(3) == RD(16)) { SET64(31, rd64(c, (RW(29) + 96))); goto L_002CA2EC; }
SET64(17, (s32)rd32(c, (RW(17) + 24)));
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(1, RD(2) < (u64)(s64)4);
if (RD(1) == RD(0)) { SET64(4, RD(2) & 0x3); goto L_002CA25C; }
SET64(4, RD(2) & 0x3);
SET32(3, RW(4) << 1);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3)); goto L_002CA270;
L_002CA25C:;
SET32(3, RW(4) << 1);
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
L_002CA270:;
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ca284); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(16, RD(16) & 0xffff);
SET64(1, RD(16) < (u64)(s64)8);
{ int t = RD(1) == RD(0);  if (t) goto L_002CA2E8; }
SET64(1, RD(16) < (u64)(s64)4);
if (RD(1) == RD(0)) { SET64(4, RD(16) & 0x3); goto L_002CA2BC; }
SET64(4, RD(16) & 0x3);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3)); goto L_002CA2D0;
L_002CA2BC:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
L_002CA2D0:;
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ca2e4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 12), RW(16));
L_002CA2E8:;
SET64(31, rd64(c, (RW(29) + 96)));
L_002CA2EC:;
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002CA310(Ctx *c) { /* func_002CA310 */
ENTER(0x2ca310);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x4b0000);
c->f[4].u = rd32(c, (RW(2) + -1880));
wr64(c, (RW(29) + 0), RD(31));
c->f[2].u = rd32(c, (RW(4) + 56));
c->f[1].u = RW(0);
SET64(2, (s64)(s32)0x530000);
c->f[3].u = rd32(c, (RW(2) + -22384));
c->facc = fpu(F(1) + F(2));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
c->f[12].f = fpu(c->facc + F(4) * F(3));
c->fcc = F(12) < F(0);
{ int t = c->fcc;  if (t) goto L_002CA364; }
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET32(2, RW(0) + 3);
c->f[12].u = c->f[0].u;
SET64(3, (s16)rd16(c, (RW(3) + 1156)));
wr16(c, (RW(4) + 70), (u16)RW(3));
wr32(c, (RW(4) + 52), RW(2));
L_002CA364:;
SET64(31, 0x2ca36c);  JP_F_002CAC80(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002CA380(Ctx *c) { /* func_002CA380 */
ENTER(0x2ca380);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ca3a0); SET64(16, RD(4) + RD(0)); JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ca3ac); SET32(5, RW(0) + -1); JP_F_0013E200(c);
SET64(5, RD(2) & 0xffff);
SET64(2, rd8(c, (RW(16) + 68)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_002CA46C; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET32(2, RW(0) + 3);
SET64(3, rd16(c, (RW(4) + 104)));
if (RD(3) == RD(2)) { SET64(2, RD(5) & 0xffff); goto L_002CA3E0; }
SET32(2, RW(0) + 4);
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_002CA454; }
SET64(2, RD(5) & 0xffff);
L_002CA3E0:;
SET64(17, rd16(c, (RW(4) + 172)));
SET64(3, RD(2) & 0x2000);
SET64(2, RD(2) & 0x4000);
SET64(19, RD(0) < RD(3));
{ int t = RD(19) == RD(0); SET64(18, RD(0) < RD(2)); if (t) goto L_002CA424; }
SET32(2, RW(0) + 2);
{ int t = RD(17) == RD(2);  if (t) goto L_002CA424; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 68), (u8)RW(2));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
SET64(4, (s32)rd32(c, (RW(2) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 376)));
{ u32 t = RW(25); SET64(31, 0x2ca424);  rt_call(c, t); }
L_002CA424:;
{ int t = RD(19) == RD(0);  if (t) goto L_002CA440; }
SET32(2, RW(0) + 2);
{ int t = RD(17) != RD(2);  if (t) goto L_002CA440; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 68), (u8)RW(2));
L_002CA440:;
{ int t = RD(18) == RD(0);  if (t) goto L_002CA450; }
SET32(2, RW(0) + 1);
wr8(c, (RW(16) + 68), (u8)RW(2));
L_002CA450:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
L_002CA454:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2ca464);  rt_call(c, t); }
wr32(c, (RW(16) + 60), c->f[0].u); goto L_002CA89C;
L_002CA46C:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2ca47c);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_002CA86C; }
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET32(2, RW(0) + 2);
SET64(3, (s16)rd16(c, (RW(3) + 184)));
if (RD(3) == RD(2)) { SET64(18, RD(0) + RD(0)); goto L_002CA4A8; }
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(16) + 12))); goto L_002CA5E4; }
SET64(18, RD(0) + RD(0));
L_002CA4A8:;
SET64(17, RD(0) + RD(0));
L_002CA4AC:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(19, RW(2) + RW(17));
SET64(4, (s32)rd32(c, (RW(19) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ca4c8);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2ca4dc);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ca4f0);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 16)));
{ int t = RD(4) == RD(0);  if (t) goto L_002CA510; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ca50c);  rt_call(c, t); }
L_002CA510:;
SET64(4, (s32)rd32(c, (RW(19) + 24)));
{ int t = RD(4) == RD(0);  if (t) goto L_002CA540; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ca52c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ca540); SET32(4, RW(2) + 384); rt_call(c, t); }
L_002CA540:;
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)11);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 144); if (t) { POLL(); goto L_002CA4AC; } }
SET64(17, (s32)rd32(c, (RW(16) + 24)));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ca568);  rt_call(c, t); }
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
L_002CA570:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ca588);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ca5a0);  rt_call(c, t); }
SET32(19, RW(19) + 1);
SET64(2, RD(19) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 384); if (t) { POLL(); goto L_002CA570; } }
SET64(17, (s32)rd32(c, (RW(16) + 28)));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ca5c8);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2ca5dc);  rt_call(c, t); }
wr32(c, (RW(16) + 52), RW(0)); goto L_002CA868;
L_002CA5E4:;
SET64(4, (s32)rd32(c, (RW(2) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 364)));
{ u32 t = RW(25); SET64(31, 0x2ca5f8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CA868; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(2, (s16)rd16(c, (RW(2) + 184)));
wr32(c, (RW(16) + 48), RW(2));
c->f[1].u = rd32(c, (RW(28) + -31336));
SET64(17, (s32)rd32(c, (RW(16) + 28)));
c->f[0].u = rd32(c, (RW(28) + -31332));
SET32(2, RW(2) << 2);
SET32(2, RW(2) + RW(29));
wr32(c, (RW(29) + 88), c->f[1].u);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(29) + 92), c->f[0].u);
SET64(5, rd16(c, (RW(2) + 88)));
SET64(31, 0x2ca638); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2ca640); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_001432E0(c);
SET64(31, 0x2ca648); SET64(4, RD(16) + RD(0)); JP_F_002C9800(c);
SET64(2, (s16)rd16(c, (RW(16) + 32)));
SET32(2, RW(2) + -1);
{ int t = RSD(2) >= 0; SET64(3, RD(0) + RD(0)); if (t) goto L_002CA65C; }
SET64(3, RD(2) & 0xffff);
L_002CA65C:;
SET64(2, (s16)rd16(c, (RW(16) + 36)));
SET64(17, RD(3) & 0xffff);
{ int t = RD(2) == RD(17);  if (t) goto L_002CA6B0; }
SET64(1, RSD(2) < RSD(17));
L_002CA670:;
{ int t = RD(1) == RD(0);  if (t) goto L_002CA690; }
SET32(4, RW(16) + 32);
SET64(31, 0x2ca684); SET32(5, RW(0) + 1); JP_F_00226DE0(c);
 goto L_002CA6A0;
L_002CA690:;
SET32(4, RW(16) + 32);
SET64(31, 0x2ca69c); SET32(5, RW(0) + 1); JP_F_00226D40(c);
L_002CA6A0:;
SET64(2, (s16)rd16(c, (RW(16) + 36)));
if (RD(2) != RD(17)) { SET64(1, RSD(2) < RSD(17)); { POLL(); goto L_002CA670; } }
L_002CA6B0:;
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
{ u32 t = RW(25); SET64(31, 0x2ca6ec); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
if (RD(2) == RD(0)) { SET64(17, (s32)rd32(c, (RW(16) + 24))); goto L_002CA734; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ca70c); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ca724); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET32(2, RW(0) + 1);
wr8(c, (RW(17) + 128), (u8)RW(2));
wr32(c, (RW(17) + 96), RW(0));
SET64(17, (s32)rd32(c, (RW(16) + 24)));
L_002CA734:;
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(1, RD(2) < (u64)(s64)4);
{ int t = RD(1) == RD(0); SET64(18, rd16(c, (RW(16) + 36))); if (t) goto L_002CA760; }
SET64(4, RD(2) & 0x3);
SET32(3, RW(4) << 1);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3)); goto L_002CA778;
L_002CA760:;
SET64(4, RD(2) & 0x3);
SET32(3, RW(4) << 1);
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
L_002CA778:;
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ca78c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(1, RD(18) < (u64)(s64)8);
if (RD(1) == RD(0)) { SET32(3, RW(0) + 2); goto L_002CA7F0; }
SET64(1, RD(18) < (u64)(s64)4);
if (RD(1) == RD(0)) { SET64(4, RD(18) & 0x3); goto L_002CA7C0; }
SET64(4, RD(18) & 0x3);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3)); goto L_002CA7D4;
L_002CA7C0:;
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(3, RW(4) << 1);
SET32(3, RW(3) + RW(4));
SET32(3, RW(3) << 7);
SET32(2, RW(2) + RW(3));
L_002CA7D4:;
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ca7e8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
wr32(c, (RW(17) + 12), RW(18));
SET32(3, RW(0) + 2);
L_002CA7F0:;
SET64(4, (s64)(s32)0x540000);
wr32(c, (RW(16) + 52), RW(3));
SET32(4, RW(4) + 2964);
wr8(c, (RW(16) + 69), (u8)RW(0));
SET32(7, RW(4) + 28);
SET64(8, (s32)rd32(c, (RW(16) + 12)));
SET32(5, RW(0) + 9);
SET64(3, (s32)rd32(c, (RW(4) + 0)));
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
L_002CA848:;
SET64(4, (s32)rd32(c, (RW(7) + 0)));
SET32(5, RW(5) + -1);
SET64(3, (s32)rd32(c, (RW(7) + 4)));
wr32(c, (RW(6) + 0), RW(4));
SET32(7, RW(7) + 8);
wr32(c, (RW(6) + 4), RW(3));
{ int t = RSD(5) > 0; SET32(6, RW(6) + 8); if (t) { POLL(); goto L_002CA848; } }
L_002CA868:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
L_002CA86C:;
SET32(3, RW(0) + 2);
SET64(5, (s16)rd16(c, (RW(4) + 184)));
if (RD(5) == RD(3)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002CA8A0; }
SET32(3, RW(0) + -1);
{ int t = RD(5) == RD(3);  if (t) goto L_002CA89C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2ca898);  rt_call(c, t); }
wr32(c, (RW(16) + 60), c->f[0].u);
L_002CA89C:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002CA8A0:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002CA8C0(Ctx *c) { /* func_002CA8C0 */
ENTER(0x2ca8c0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002CA8FC; }
SET64(4, rd16(c, (RW(5) + 104)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { wr8(c, (RW(5) + 167), (u8)RW(0)); goto L_002CA8FC; }
SET32(3, RW(0) + 1);
wr8(c, (RW(5) + 167), (u8)RW(3));
L_002CA8FC:;
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET32(3, RW(0) + 5);
if (RD(4) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_002CA984; }
SET32(3, RW(0) + 4);
if (RD(4) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_002CA974; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_002CA964; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_002CA954; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(4, RD(16) + RD(0)); goto L_002CA944; }
SET64(3, (s32)rd32(c, (RW(16) + 52))); goto L_002CA990;
L_002CA944:;
SET64(31, 0x2ca94c);  JP_F_002CA380(c);
 goto L_002CA98C;
L_002CA954:;
SET64(31, 0x2ca95c);  JP_F_002CA310(c);
 goto L_002CA98C;
L_002CA964:;
SET64(31, 0x2ca96c);  JP_F_002C9E40(c);
 goto L_002CA98C;
L_002CA974:;
SET64(31, 0x2ca97c);  JP_F_002C9D30(c);
 goto L_002CA98C;
L_002CA984:;
SET64(31, 0x2ca98c);  JP_F_002C9960(c);
L_002CA98C:;
SET64(3, (s32)rd32(c, (RW(16) + 52)));
L_002CA990:;
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002CAA14; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002CA9A0:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(31, 0x2ca9ac); SET32(4, RW(2) + RW(17)); JP_F_002CBC60(c);
SET32(18, RW(18) + 1);
SET64(2, RD(18) < (u64)(s64)11);
{ int t = RD(2) != RD(0); SET32(17, RW(17) + 144); if (t) { POLL(); goto L_002CA9A0; } }
SET64(17, (s32)rd32(c, (RW(16) + 24)));
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
L_002CA9C8:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2ca9e0);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2ca9f8);  rt_call(c, t); }
SET32(19, RW(19) + 1);
SET64(2, RD(19) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 384); if (t) { POLL(); goto L_002CA9C8; } }
SET64(31, 0x2caa10); SET64(4, (s32)rd32(c, (RW(16) + 28))); JP_F_002CB440(c);
SET64(31, rd64(c, (RW(29) + 64)));
L_002CAA14:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002CAA30(Ctx *c) { /* func_002CAA30 */
ENTER(0x2caa30);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
L_002CAA54:;
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET32(17, RW(2) + RW(18));
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2caa74);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002CAA88; }
SET64(2, RD(0) + RD(0)); goto L_002CAB48;
L_002CAA88:;
SET64(2, (s32)rd32(c, (RW(17) + 16)));
{ int t = RD(2) == RD(0);  if (t) goto L_002CAAB8; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2caaa8);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002CAAB8; }
SET64(2, RD(0) + RD(0)); goto L_002CAB48;
L_002CAAB8:;
SET64(2, (s32)rd32(c, (RW(17) + 24)));
{ int t = RD(2) == RD(0);  if (t) goto L_002CAB08; }
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2caad8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CAB00; }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2caaf8);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002CAB08; }
L_002CAB00:;
SET64(2, RD(0) + RD(0)); goto L_002CAB48;
L_002CAB08:;
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cab20);  rt_call(c, t); }
SET64(2, RD(0) < RD(2));
if (RD(2) == RD(0)) { SET64(2, RD(2) & 0xff); goto L_002CAB48; }
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2cab40); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) & 0xff);
L_002CAB48:;
if (RD(2) != RD(0)) { SET32(19, RW(19) + 1); goto L_002CAB58; }
SET64(2, RD(0) + RD(0)); goto L_002CAC60;
L_002CAB58:;
SET64(2, RD(19) < (u64)(s64)11);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 144); if (t) { POLL(); goto L_002CAA54; } }
SET64(17, (s32)rd32(c, (RW(16) + 24)));
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
L_002CAB70:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cab8c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CABB8; }
SET64(2, (s32)rd32(c, (RW(17) + 8)));
SET32(2, RW(2) + RW(18));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cabb0);  rt_call(c, t); }
if (RD(2) != RD(0)) { SET32(19, RW(19) + 1); goto L_002CABC0; }
L_002CABB8:;
SET64(2, RD(0) + RD(0)); goto L_002CABE8;
L_002CABC0:;
SET64(2, RD(19) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 384); if (t) { POLL(); goto L_002CAB70; } }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cabe4);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
L_002CABE8:;
{ int t = RD(2) == RD(0); SET64(3, RD(2) & 0xff); if (t) goto L_002CAC34; }
SET64(17, (s32)rd32(c, (RW(16) + 28)));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cac0c);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) == RD(0)) { SET64(3, RD(2) & 0xff); goto L_002CAC34; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2cac2c); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(2, RD(2) & 0xff);
SET64(3, RD(2) & 0xff);
L_002CAC34:;
{ int t = RD(3) == RD(0); SET64(2, RD(3) & 0xff); if (t) goto L_002CAC60; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) != RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002CAC50; }
SET32(2, RW(0) + 1); goto L_002CAC5C;
L_002CAC50:;
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2cac5c);  rt_call(c, t); }
L_002CAC5C:;
SET64(2, RD(2) & 0xff);
L_002CAC60:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002CAC80(Ctx *c) { /* func_002CAC80 */
ENTER(0x2cac80);
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
SET64(31, 0x2cacb8); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2caccc);  rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(20) + 28)));
c->f[12].u = c->f[20].u;
SET64(2, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2cace0); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cacf4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
c->f[12].u = c->f[20].u;
SET64(31, 0x2cad04); SET32(4, RW(2) + 208); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cad18); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
L_002CAD20:;
SET64(5, (s32)rd32(c, (RW(20) + 20)));
SET32(4, RW(29) + 112);
SET32(3, RW(0) + 16);
{ int t = RD(4) == RD(0); SET32(16, RW(5) + RW(18)); if (t) goto L_002CAD50; }
L_002CAD34:;
wr8(c, (RW(4) + 0), (u8)RW(0));
SET32(3, RW(3) + -1);
SET32(4, RW(4) + 1);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002CAD34; } }
L_002CAD50:;
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(4, (s32)rd32(c, (RW(16) + 28)));
{ int t = RD(4) == RD(0); wr32(c, (RW(29) + 112), RW(3)); if (t) goto L_002CAD68; }
SET32(4, RW(4) + 16);
L_002CAD68:;
wr32(c, (RW(29) + 116), RW(4));
SET64(4, (s32)rd32(c, (RW(16) + 16)));
SET64(3, (s32)rd32(c, (RW(29) + 112)));
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 120), RW(4)); if (t) goto L_002CADB8; }
SET32(17, RW(29) + 112);
L_002CAD80:;
SET64(2, (s32)rd32(c, (RW(17) + 0)));
c->f[12].u = c->f[20].u;
SET64(31, 0x2cad90); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cada4);  rt_call(c, t); }
SET32(17, RW(17) + 4);
SET64(3, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002CAD80; } }
L_002CADB8:;
SET64(3, (s32)rd32(c, (RW(16) + 24)));
{ int t = RD(3) == RD(0);  if (t) goto L_002CAE08; }
SET32(4, RW(3) + 192);
SET64(31, 0x2cadd0); c->f[12].u = c->f[20].u; JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 24)));
c->f[12].u = c->f[20].u;
SET64(31, 0x2cade0); SET32(4, RW(2) + 576); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cadf4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cae08); SET32(4, RW(2) + 384); rt_call(c, t); }
L_002CAE08:;
SET32(19, RW(19) + 1);
SET64(3, RD(19) < (u64)(s64)11);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 144); if (t) { POLL(); goto L_002CAD20; } }
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

void JP_F_002CAE40(Ctx *c) { /* func_002CAE40 */
ENTER(0x2cae40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 24)));
{ int t = RD(16) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002CAEAC; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_002CAE7C; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2cae78); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
L_002CAE7C:;
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x2cae8c); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(16) + 4), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
SET64(31, 0x2caea0); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
SET64(4, RD(16) + RD(0));
SET64(31, 0x2caeac); wr32(c, (RW(16) + 8), RW(0)); JP_F_001004B0(c);
L_002CAEAC:;
wr32(c, (RW(17) + 24), RW(0));
SET64(16, (s32)rd32(c, (RW(17) + 28)));
if (RD(16) == RD(0)) { wr32(c, (RW(17) + 28), RW(0)); goto L_002CAF08; }
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_002CAEDC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2caed8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
L_002CAEDC:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002CAEFC; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2caef8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(4, RD(16) + RD(0));
L_002CAEFC:;
SET64(31, 0x2caf04); wr32(c, (RW(16) + 4), RW(0)); JP_F_001004B0(c);
wr32(c, (RW(17) + 28), RW(0));
L_002CAF08:;
SET64(5, (s64)(s32)0x2d0000);
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET64(31, 0x2caf18); SET32(5, RW(5) + -20640); JP_F_001022C0(c);
wr32(c, (RW(17) + 20), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 76)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 76), RW(0)); goto L_002CAF3C; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2caf38); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 76), RW(0));
L_002CAF3C:;
wr32(c, (RW(17) + 44), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002CAF60(Ctx *c) { /* func_002CAF60 */
ENTER(0x2caf60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CB044; }
SET64(4, (s32)rd32(c, (RW(17) + 12)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 12), RW(0)); goto L_002CAF9C; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2caf98); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 12), RW(0));
L_002CAF9C:;
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 16), RW(0)); goto L_002CAFBC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2cafb8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 16), RW(0));
L_002CAFBC:;
SET64(4, (s32)rd32(c, (RW(17) + 28)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 28), RW(0)); goto L_002CAFDC; }
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2cafd8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 28), RW(0));
L_002CAFDC:;
SET64(4, (s32)rd32(c, (RW(17) + 20)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 20), RW(0)); goto L_002CAFFC; }
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2caff8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 20), RW(0));
L_002CAFFC:;
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(31, 0x2cb00c); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(17) + 24), RW(0));
SET64(31, 0x2cb018); SET64(4, (s32)rd32(c, (RW(17) + 32))); JP_F_00100430(c);
SET32(4, RW(17) + 48);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 32), RW(0)); if (t) goto L_002CB02C; }
SET64(31, 0x2cb02c); SET32(5, RW(0) + -1); JP_F_001F3870(c);
L_002CB02C:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002CB048; }
SET64(31, 0x2cb044); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002CB044:;
SET64(2, RD(17) + RD(0));
L_002CB048:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002CB060(Ctx *c) { /* func_002CB060 */
ENTER(0x2cb060);
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
SET64(19, rd16(c, (RW(28) + -30220)));
SET64(31, 0x2cb0a4); SET32(4, RW(29) + 128); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 148), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 156), RW(0));
wr16(c, (RW(29) + 160), (u16)RW(0));
wr16(c, (RW(29) + 162), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(31, 0x2cb0d0); SET32(4, RW(29) + 128); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 148)));
SET64(2, RD(19) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 128);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -32);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(22, RW(3) + RW(5));
SET64(31, 0x2cb100); wr32(c, (RW(29) + 144), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2cb10c); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
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
SET64(31, 0x2cb13c); wr8(c, (RW(18) + 40), (u8)RW(2)); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002CB168; }
SET64(5, (s64)(s32)0x2d0000);
SET64(6, (s64)(s32)0x2d0000);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -15008);
SET32(6, RW(6) + -20640);
SET32(7, RW(0) + 144);
SET64(31, 0x2cb164); SET32(8, RW(0) + 11); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_002CB168:;
SET64(6, (s64)(s32)0x410000);
wr32(c, (RW(18) + 20), RW(19));
SET32(6, RW(6) + 30928);
SET32(5, RW(29) + 496);
SET32(4, RW(0) + 5);
L_002CB17C:;
SET64(3, (s16)rd16(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s16)rd16(c, (RW(6) + 2)));
wr16(c, (RW(5) + 0), (u16)RW(3));
wr16(c, (RW(5) + 2), (u16)RW(2));
SET32(6, RW(6) + 4);
{ int t = RSD(4) > 0; SET32(5, RW(5) + 4); if (t) { POLL(); goto L_002CB17C; } }
SET64(7, (s16)rd16(c, (RW(28) + -31328)));
SET64(6, (s64)(s32)0x410000);
SET64(3, (s16)rd16(c, (RW(28) + -31326)));
SET32(6, RW(6) + 30960);
SET64(2, (s16)rd16(c, (RW(28) + -31324)));
SET32(5, RW(29) + 224);
wr16(c, (RW(29) + 528), (u16)RW(7));
SET32(4, RW(0) + 33);
wr16(c, (RW(29) + 530), (u16)RW(3));
wr16(c, (RW(29) + 532), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(28) + -31316)));
SET64(7, (s16)rd16(c, (RW(28) + -31320)));
SET64(3, (s16)rd16(c, (RW(28) + -31318)));
wr16(c, (RW(29) + 536), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(28) + -31314)));
wr16(c, (RW(29) + 540), (u16)RW(7));
wr16(c, (RW(29) + 542), (u16)RW(3));
wr16(c, (RW(29) + 538), (u16)RW(2));
L_002CB1E4:;
SET64(3, (s32)rd32(c, (RW(6) + 0)));
SET32(4, RW(4) + -1);
SET64(2, (s32)rd32(c, (RW(6) + 4)));
wr32(c, (RW(5) + 0), RW(3));
wr32(c, (RW(5) + 4), RW(2));
SET32(6, RW(6) + 8);
{ int t = RSD(4) > 0; SET32(5, RW(5) + 8); if (t) { POLL(); goto L_002CB1E4; } }
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
L_002CB24C:;
SET64(3, (s16)rd16(c, (RW(20) + 22)));
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_002CB264; }
SET64(11, RD(0) + RD(0)); goto L_002CB26C;
L_002CB264:;
SET32(3, RW(3) << 6);
SET32(11, RW(2) + RW(3));
L_002CB26C:;
SET64(3, (s16)rd16(c, (RW(20) + 20)));
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 0))); goto L_002CB284; }
SET64(10, RD(0) + RD(0)); goto L_002CB28C;
L_002CB284:;
SET32(3, RW(3) << 6);
SET32(10, RW(2) + RW(3));
L_002CB28C:;
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
SET64(31, 0x2cb2c0); SET32(9, RW(9) + RW(2)); JP_F_002CC010(c);
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
SET64(31, 0x2cb2f0); SET32(4, RW(2) + RW(19)); JP_F_002CBE20(c);
SET32(21, RW(21) + 1);
SET32(20, RW(20) + 24);
SET64(2, RD(21) < (u64)(s64)11);
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 144); if (t) { POLL(); goto L_002CB24C; } }
SET64(31, 0x2cb30c); SET32(4, RW(0) + 16); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 24), RW(2)); goto L_002CB328; }
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(2) + 8), RW(0));
wr32(c, (RW(2) + 12), RW(0));
wr32(c, (RW(18) + 24), RW(2));
L_002CB328:;
SET64(4, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET32(6, RW(2) + 1152);
SET32(7, RW(2) + 1344);
SET64(31, 0x2cb344); SET32(8, RW(2) + 1472); JP_F_002CB8C0(c);
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
SET64(31, 0x2cb374); SET32(5, RW(29) + 192); JP_F_002CB6D0(c);
SET64(31, 0x2cb37c); SET32(4, RW(0) + 8); JP_F_00100670(c);
if (RD(2) == RD(0)) { wr32(c, (RW(18) + 28), RW(2)); goto L_002CB390; }
wr32(c, (RW(2) + 0), RW(0));
wr32(c, (RW(2) + 4), RW(0));
wr32(c, (RW(18) + 28), RW(2));
L_002CB390:;
SET64(4, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(22) + RD(0));
SET64(31, 0x2cb3a8); SET32(7, RW(2) + 1792); JP_F_002CB530(c);
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
SET64(31, 0x2cb3dc); SET32(5, RW(29) + 176); JP_F_0014E980(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cb3f0);  rt_call(c, t); }
SET64(4, RD(18) + RD(0));
SET64(31, 0x2cb3fc); wr8(c, (RW(18) + 69), (u8)RW(0)); JP_F_002C9800(c);
SET64(31, 0x2cb404); SET64(4, RD(18) + RD(0)); JP_F_002C91D0(c);
SET64(31, 0x2cb40c); SET64(4, (s32)rd32(c, (RW(18) + 4))); JP_F_00226EA0(c);
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

void JP_F_002CB440(Ctx *c) { /* func_002CB440 */
ENTER(0x2cb440);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2cb458); SET64(4, (s32)rd32(c, (RW(4) + 4))); JP_F_00144C50(c);
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
SET64(31, 0x2cb508); wr32(c, (RW(29) + 52), c->f[0].u); JP_F_0014E980(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2cb51c);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002CB530(Ctx *c) { /* func_002CB530 */
ENTER(0x2cb530);
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
SET64(31, 0x2cb564); SET32(4, RW(0) + 384); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002CB578; }
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cb578); SET32(5, RW(0) + 1); JP_F_0014E610(c);
L_002CB578:;
SET64(5, RD(20) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x2cb58c); wr32(c, (RW(18) + 0), RW(19)); JP_F_002CC650(c);
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
SET64(31, 0x2cb5d0); wr32(c, (RW(3) + 32), c->f[0].u); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002CB5E4; }
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cb5e4); SET32(5, RW(0) + 1); JP_F_00143460(c);
L_002CB5E4:;
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
SET64(31, 0x2cb634); SET64(8, RD(0) + RD(0)); JP_F_00144F20(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(5, RW(0) + 5);
SET64(31, 0x2cb644); SET32(4, RW(2) + 16); JP_F_001460F0(c);
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 4))); goto L_002CB654; }
SET32(17, RW(17) + 672);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
L_002CB654:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2cb664); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 0)));
c->f[12].u = RW(0);
SET64(31, 0x2cb674); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cb688);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 4)));
c->f[12].u = RW(0);
SET64(31, 0x2cb698); SET32(4, RW(2) + 208); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cb6ac); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002CB6D0(Ctx *c) { /* func_002CB6D0 */
ENTER(0x2cb6d0);
SET32(29, RW(29) + -256);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 0)));
SET64(31, 0x2cb6fc); SET64(16, RD(5) + RD(0)); JP_F_0014E980(c);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cb710);  rt_call(c, t); }
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
L_002CB77C:;
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
SET64(31, 0x2cb7c4); SET32(4, RW(2) + RW(18)); JP_F_0014E980(c);
SET32(20, RW(20) + 1);
SET32(19, RW(19) + 16);
SET64(2, RD(20) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 384); if (t) { POLL(); goto L_002CB77C; } }
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
L_002CB844:;
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
SET64(31, 0x2cb88c); SET32(4, RW(2) + RW(18)); JP_F_0014E980(c);
SET32(20, RW(20) + 1);
SET32(19, RW(19) + 16);
SET64(3, RD(20) < (u64)(s64)4);
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 384); if (t) { POLL(); goto L_002CB844; } }
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 256); return;
}

void JP_F_002CB8C0(Ctx *c) { /* func_002CB8C0 */
ENTER(0x2cb8c0);
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
SET64(31, 0x2cb8fc); SET32(4, RW(0) + 384); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002CB910; }
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cb910); SET32(5, RW(0) + 1); JP_F_0014E610(c);
L_002CB910:;
SET64(5, RD(20) + RD(0));
SET64(4, RD(19) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x2cb924); wr32(c, (RW(18) + 0), RW(19)); JP_F_002CC650(c);
SET64(31, 0x2cb92c); SET32(4, RW(0) + 1552); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002CB958; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -6640);
SET32(6, RW(6) + -7024);
SET32(7, RW(0) + 384);
SET64(31, 0x2cb954); SET32(8, RW(0) + 4); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_002CB958:;
wr32(c, (RW(18) + 4), RW(19));
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_002CB964:;
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET64(5, RD(21) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x2cb978); SET32(4, RW(2) + RW(19)); JP_F_002CC650(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET64(31, 0x2cb984); SET32(4, RW(2) + RW(19)); JP_F_0014EB40(c);
SET64(3, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(19));
SET64(31, 0x2cb99c); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cb9b8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(20, RW(20) + 1);
SET64(2, RD(20) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 384); if (t) { POLL(); goto L_002CB964; } }
SET64(31, 0x2cb9d0); SET32(4, RW(0) + 1552); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002CB9FC; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -6640);
SET32(6, RW(6) + -7024);
SET32(7, RW(0) + 384);
SET64(31, 0x2cb9f8); SET32(8, RW(0) + 4); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_002CB9FC:;
wr32(c, (RW(18) + 8), RW(19));
SET64(20, RD(0) + RD(0));
SET64(19, RD(0) + RD(0));
L_002CBA08:;
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(31, 0x2cba1c); SET32(4, RW(2) + RW(19)); JP_F_002CC650(c);
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET64(31, 0x2cba28); SET32(4, RW(2) + RW(19)); JP_F_0014EB40(c);
SET64(3, (s32)rd32(c, (RW(18) + 8)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(19));
SET64(31, 0x2cba40); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(18) + 8)));
SET32(2, RW(2) + RW(19));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cba5c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET32(20, RW(20) + 1);
SET64(2, RD(20) < (u64)(s64)4);
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 384); if (t) { POLL(); goto L_002CBA08; } }
SET64(2, (s32)rd32(c, (RW(18) + 0)));
c->f[12].u = RW(0);
SET64(31, 0x2cba7c); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cba90);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002CBAC0(Ctx *c) { /* func_002CBAC0 */
ENTER(0x2cbac0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 4)));
{ int t = RSD(5) <= 0; SET64(16, RD(4) + RD(0)); if (t) goto L_002CBB64; }
SET64(4, (s16)rd16(c, (RW(16) + 4)));
SET32(4, RW(4) + 1);
wr16(c, (RW(16) + 4), (u16)RW(4));
SET64(6, RD(4) << 48);
SET64(7, (s16)rd16(c, (RW(16) + 0)));
SET64(6, RSD(6) >> 48);
SET64(4, RSD(6) < RSD(7));
if (RD(4) != RD(0)) { SET64(4, (s16)rd16(c, (RW(16) + 4))); goto L_002CBB34; }
SET64(4, rd8(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { SET32(4, RW(7) + -1); goto L_002CBB0C; }
SET32(4, RW(6) - RW(7));
L_002CBB0C:;
wr16(c, (RW(16) + 4), (u16)RW(4));
SET64(4, rd8(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { SET64(6, (s16)rd16(c, (RW(16) + 0))); goto L_002CBB24; }
SET64(4, RD(0) + RD(0)); goto L_002CBB2C;
L_002CBB24:;
SET64(4, (s16)rd16(c, (RW(16) + 2)));
SET32(4, RW(6) - RW(4));
L_002CBB2C:;
wr16(c, (RW(16) + 6), (u16)RW(4));
SET64(4, (s16)rd16(c, (RW(16) + 4)));
L_002CBB34:;
SET64(7, (s16)rd16(c, (RW(16) + 6)));
SET64(1, RSD(4) < RSD(7));
if (RD(1) == RD(0)) { SET32(6, RW(4) - RW(7)); goto L_002CBB4C; }
wr16(c, (RW(16) + 6), (u16)RW(4)); goto L_002CBB64;
L_002CBB4C:;
SET64(4, (s16)rd16(c, (RW(16) + 2)));
SET64(4, RSD(6) < RSD(4));
{ int t = RD(4) != RD(0);  if (t) goto L_002CBB64; }
SET32(4, RW(7) + 1);
wr16(c, (RW(16) + 6), (u16)RW(4));
L_002CBB64:;
if (RSD(5) >= 0) { SET64(4, rd16(c, (RW(16) + 4))); goto L_002CBBF0; }
SET64(4, (s16)rd16(c, (RW(16) + 4)));
SET32(4, RW(4) + -1);
SET64(5, RD(4) << 48);
SET64(5, RSD(5) >> 48);
{ int t = RSD(5) >= 0; wr16(c, (RW(16) + 4), (u16)RW(4)); if (t) goto L_002CBBB8; }
SET64(4, rd8(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { SET64(4, RD(0) + RD(0)); goto L_002CBB98; }
SET64(4, (s16)rd16(c, (RW(16) + 0)));
SET32(4, RW(5) + RW(4));
L_002CBB98:;
wr16(c, (RW(16) + 4), (u16)RW(4));
SET64(4, rd8(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { SET64(4, RD(0) + RD(0)); goto L_002CBBB4; }
SET64(5, (s16)rd16(c, (RW(16) + 0)));
SET64(4, (s16)rd16(c, (RW(16) + 2)));
SET32(4, RW(5) - RW(4));
L_002CBBB4:;
wr16(c, (RW(16) + 6), (u16)RW(4));
L_002CBBB8:;
SET64(4, (s16)rd16(c, (RW(16) + 4)));
SET64(6, (s16)rd16(c, (RW(16) + 6)));
SET64(1, RSD(4) < RSD(6));
if (RD(1) == RD(0)) { SET32(5, RW(4) - RW(6)); goto L_002CBBD4; }
wr16(c, (RW(16) + 6), (u16)RW(4)); goto L_002CBBEC;
L_002CBBD4:;
SET64(4, (s16)rd16(c, (RW(16) + 2)));
SET64(4, RSD(5) < RSD(4));
{ int t = RD(4) != RD(0);  if (t) goto L_002CBBEC; }
SET32(4, RW(6) + 1);
wr16(c, (RW(16) + 6), (u16)RW(4));
L_002CBBEC:;
SET64(4, rd16(c, (RW(16) + 4)));
L_002CBBF0:;
SET64(3, RD(3) & 0xffff);
if (RD(3) == RD(4)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002CBC48; }
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET32(3, RW(4) << 1);
SET64(4, (s32)rd32(c, (RW(16) + 28)));
SET32(2, RW(2) + RW(3));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2cbc18); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2cbc20); SET64(4, (s32)rd32(c, (RW(16) + 28))); JP_F_001432E0(c);
SET64(31, 0x2cbc28);  JP_F_00139590(c);
SET64(31, 0x2cbc30);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 127);
SET64(31, 0x2cbc44); SET32(7, RW(0) + 64); JP_F_001B7420(c);
SET64(31, rd64(c, (RW(29) + 16)));
L_002CBC48:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002CBC60(Ctx *c) { /* func_002CBC60 */
ENTER(0x2cbc60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2cbc84);  rt_call(c, t); }
SET64(2, rd8(c, (RW(16) + 36)));
if (RD(2) != RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 20))); goto L_002CBD6C; }
SET64(2, (s32)rd32(c, (RW(16) + 16)));
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 28))); goto L_002CBD58; }
SET64(31, 0x2cbca4); SET64(4, (s32)rd32(c, (RW(16) + 28))); JP_F_00144C50(c);
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
SET64(31, 0x2cbd54); wr32(c, (RW(29) + 52), c->f[0].u); JP_F_0014E980(c);
SET64(2, (s32)rd32(c, (RW(16) + 28)));
L_002CBD58:;
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cbd68); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
L_002CBD6C:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cbd7c);  rt_call(c, t); }
SET64(3, rd8(c, (RW(16) + 128)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 16))); goto L_002CBE14; }
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
{ u32 t = RW(25); SET64(31, 0x2cbdd4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cbde8); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(2, (s64)(s32)0x530000);
c->f[12].u = rd32(c, (RW(2) + -22384));
SET64(31, 0x2cbdf8); SET32(4, RW(16) + 48); JP_F_001F38F0(c);
c->f[1].u = rd32(c, (RW(16) + 96));
c->f[0].u = rd32(c, (RW(16) + 100));
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_002CBE10; }
wr32(c, (RW(16) + 96), RW(0));
L_002CBE10:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002CBE14:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002CBE20(Ctx *c) { /* func_002CBE20 */
ENTER(0x2cbe20);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 12)));
SET64(31, 0x2cbe40); SET64(16, RD(5) + RD(0)); JP_F_0014E980(c);
SET64(4, (s32)rd32(c, (RW(17) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cbe54);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2cbe60); SET32(4, RW(29) + 112); JP_F_002CC5C0(c);
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
SET64(31, 0x2cbec0); wr32(c, (RW(29) + 96), c->f[0].u); JP_F_0014E980(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
if (RD(4) == RD(0)) { SET64(6, (s32)rd32(c, (RW(17) + 16))); goto L_002CBF2C; }
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
SET64(31, 0x2cbf14); wr32(c, (RW(29) + 80), c->f[0].u); JP_F_0014E980(c);
SET64(4, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cbf28);  rt_call(c, t); }
SET64(6, (s32)rd32(c, (RW(17) + 16)));
L_002CBF2C:;
if (RD(6) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 24))); goto L_002CBFC4; }
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
SET64(31, 0x2cbfac); SET32(4, RW(2) + 16); JP_F_0014E980(c);
SET64(2, (s32)rd32(c, (RW(17) + 28)));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cbfc0); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
L_002CBFC4:;
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002CBFFC; }
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
L_002CBFFC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002CC010(Ctx *c) { /* func_002CC010 */
ENTER(0x2cc010);
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
{ int t = RD(2) == RD(3); SET64(16, RD(0) + RD(0)); if (t) goto L_002CC090; }
SET64(4, RD(17) + RD(0));
L_002CC074:;
SET32(4, RW(4) + 2);
SET32(16, RW(16) + 1);
SET64(2, (s16)rd16(c, (RW(4) + 0)));
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_002CC074; } }
L_002CC090:;
SET64(2, RD(16) & 0xffff);
{ int t = RSD(2) > 0; SET64(3, RD(0) + (s64)1); if (t) goto L_002CC0A0; }
SET64(3, RD(2) + RD(0));
L_002CC0A0:;
wr16(c, (RW(19) + 0), (u16)RW(16));
SET32(2, RW(0) + 1);
wr16(c, (RW(19) + 2), (u16)RW(3));
SET32(4, RW(0) + 384);
wr16(c, (RW(19) + 4), (u16)RW(0));
wr16(c, (RW(19) + 6), (u16)RW(0));
wr8(c, (RW(19) + 8), (u8)RW(0));
SET64(31, 0x2cc0c4); wr8(c, (RW(19) + 8), (u8)RW(2)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002CC0D8; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cc0d8); SET32(5, RW(0) + 1); JP_F_0014E610(c);
L_002CC0D8:;
SET64(5, RD(23) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2cc0ec); wr32(c, (RW(19) + 12), RW(20)); JP_F_002CC650(c);
SET64(31, 0x2cc0f4); SET32(4, RW(0) + 384); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002CC108; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cc108); SET32(5, RW(0) + 1); JP_F_0014E610(c);
L_002CC108:;
SET64(5, RD(30) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2cc11c); wr32(c, (RW(19) + 20), RW(20)); JP_F_002CC650(c);
SET64(3, (s32)rd32(c, (RW(19) + 20)));
SET64(2, (s64)(s32)0x3f800000);
c->f[12].u = RW(2);
SET64(31, 0x2cc130); SET32(4, RW(3) + 192); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(19) + 20)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cc148); SET32(5, RW(0) + 1); rt_call(c, t); }
{ int t = RD(22) == RD(0);  if (t) goto L_002CC180; }
SET64(31, 0x2cc158); SET32(4, RW(0) + 384); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002CC16C; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cc16c); SET32(5, RW(0) + 1); JP_F_0014E610(c);
L_002CC16C:;
SET64(5, RD(22) + RD(0));
SET64(4, RD(20) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2cc180); wr32(c, (RW(19) + 16), RW(20)); JP_F_002CC650(c);
L_002CC180:;
if (RD(21) == RD(0)) { SET64(2, (s64)(s32)0x3f800000); goto L_002CC27C; }
SET64(31, 0x2cc190); SET32(4, RW(0) + 784); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002CC1BC; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + -6640);
SET32(6, RW(6) + -7024);
SET32(7, RW(0) + 384);
SET64(31, 0x2cc1b8); SET32(8, RW(0) + 2); JP_F_00102580(c);
SET64(20, RD(2) + RD(0));
L_002CC1BC:;
SET64(4, RD(20) + RD(0));
SET64(5, RD(21) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2cc1d0); wr32(c, (RW(19) + 24), RW(20)); JP_F_002CC650(c);
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET64(5, RD(21) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2cc1e4); SET32(4, RW(2) + 384); JP_F_002CC650(c);
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cc1fc); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cc214); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET32(20, RW(19) + 48);
SET64(4, RD(20) + RD(0));
c->f[0].u = rd32(c, (RW(2) + 180));
wr32(c, (RW(2) + 556), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 24)));
c->f[0].u = rd32(c, (RW(2) + 172));
SET64(31, 0x2cc238); wr32(c, (RW(2) + 564), c->f[0].u); JP_F_001F3C40(c);
SET32(2, RW(0) + 3);
wr16(c, (RW(20) + 2), (u16)RW(2));
c->f[13].u = RW(0);
c->f[12].u = rd32(c, (RW(28) + -31364));
c->f[20].u = rd32(c, (RW(28) + -31368));
SET64(31, 0x2cc254); SET64(4, RD(20) + RD(0)); JP_F_002286A0(c);
c->f[12].u = RW(0);
SET64(31, 0x2cc260); SET64(4, RD(20) + RD(0)); JP_F_00228690(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x2cc26c); SET64(4, RD(20) + RD(0)); JP_F_00228680(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cc278); SET32(5, RW(0) + 1); JP_F_00228630(c);
SET64(2, (s64)(s32)0x3f800000);
L_002CC27C:;
SET32(4, RW(0) + 848);
wr32(c, (RW(29) + 252), RW(2));
wr32(c, (RW(29) + 240), RW(0));
wr32(c, (RW(29) + 244), RW(0));
SET64(31, 0x2cc294); wr32(c, (RW(29) + 248), RW(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002CC2A8; }
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cc2a8); SET32(5, RW(0) + 1); JP_F_00143460(c);
L_002CC2A8:;
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
SET64(31, 0x2cc2f8); SET64(8, RD(0) + RD(0)); JP_F_00144F20(c);
SET64(2, (s32)rd32(c, (RW(19) + 28)));
SET32(5, RW(0) + 5);
SET64(31, 0x2cc308); SET32(4, RW(2) + 16); JP_F_001460F0(c);
if (RD(18) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 28))); goto L_002CC318; }
SET32(18, RW(18) + 672);
SET64(4, (s32)rd32(c, (RW(19) + 28)));
L_002CC318:;
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2cc328); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, 0x2cc330); SET32(4, RW(16) << 1); JP_F_00100530(c);
wr32(c, (RW(19) + 32), RW(2));
{ int t = RD(16) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002CC420; }
SET64(1, RD(16) < (u64)(s64)9);
{ int t = RD(1) != RD(0); SET32(2, RW(16) + -8); if (t) goto L_002CC3E8; }
SET64(4, RD(17) + RD(0));
SET64(3, RD(0) + RD(0));
L_002CC350:;
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
{ int t = RD(6) != RD(0); SET32(3, RW(3) + 16); if (t) { POLL(); goto L_002CC350; } }
L_002CC3E8:;
SET64(1, RD(5) < RD(16));
{ int t = RD(1) == RD(0);  if (t) goto L_002CC420; }
SET32(6, RW(5) << 1);
SET32(7, RW(17) + RW(6));
L_002CC3FC:;
SET64(3, (s32)rd32(c, (RW(19) + 32)));
SET32(5, RW(5) + 1);
SET64(4, (s16)rd16(c, (RW(7) + 0)));
SET64(2, RD(5) < RD(16));
SET32(3, RW(3) + RW(6));
SET32(7, RW(7) + 2);
wr16(c, (RW(3) + 0), (u16)RW(4));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 2); if (t) { POLL(); goto L_002CC3FC; } }
L_002CC420:;
SET64(4, RD(19) + RD(0));
SET64(31, 0x2cc42c); SET64(5, RD(0) + RD(0)); JP_F_0013BA20(c);
SET64(2, (s32)rd32(c, (RW(19) + 32)));
SET64(4, (s32)rd32(c, (RW(19) + 28)));
SET64(5, rd16(c, (RW(2) + 0)));
SET64(31, 0x2cc440); SET32(6, RW(0) + 1); JP_F_00144C60(c);
SET64(31, 0x2cc448); SET64(4, (s32)rd32(c, (RW(19) + 28))); JP_F_001432E0(c);
SET32(4, RW(29) + 192);
{ int t = RD(4) == RD(0); SET32(3, RW(0) + 16); if (t) goto L_002CC470; }
L_002CC454:;
wr8(c, (RW(4) + 0), (u8)RW(0));
SET32(3, RW(3) + -1);
SET32(4, RW(4) + 1);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002CC454; } }
L_002CC470:;
SET64(3, (s32)rd32(c, (RW(19) + 12)));
SET64(4, (s32)rd32(c, (RW(19) + 28)));
{ int t = RD(4) == RD(0); wr32(c, (RW(29) + 192), RW(3)); if (t) goto L_002CC484; }
SET32(4, RW(4) + 16);
L_002CC484:;
wr32(c, (RW(29) + 196), RW(4));
SET64(4, (s32)rd32(c, (RW(19) + 16)));
SET64(3, (s32)rd32(c, (RW(29) + 192)));
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 200), RW(4)); if (t) goto L_002CC4D0; }
SET32(16, RW(29) + 192);
SET64(2, (s32)rd32(c, (RW(16) + 0)));
L_002CC4A0:;
c->f[12].u = RW(0);
SET64(31, 0x2cc4ac); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cc4c0);  rt_call(c, t); }
SET32(16, RW(16) + 4);
SET64(3, (s32)rd32(c, (RW(16) + 0)));
if (RD(3) != RD(0)) { SET64(2, (s32)rd32(c, (RW(16) + 0))); { POLL(); goto L_002CC4A0; } }
L_002CC4D0:;
SET64(3, (s32)rd32(c, (RW(19) + 24)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 160))); goto L_002CC524; }
c->f[12].u = RW(0);
SET64(31, 0x2cc4e8); SET32(4, RW(3) + 192); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(19) + 24)));
c->f[12].u = RW(0);
SET64(31, 0x2cc4f8); SET32(4, RW(2) + 576); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(19) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cc50c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cc520); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 160)));
L_002CC524:;
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

void JP_F_002CC560(Ctx *c) { /* func_002CC560 */
ENTER(0x2cc560);
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
SET64(31, 0x2cc59c); SET64(4, RD(16) + RD(0)); JP_F_001F38C0(c);
wr8(c, (RW(16) + 80), (u8)RW(0));
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002CC5C0(Ctx *c) { /* func_002CC5C0 */
ENTER(0x2cc5c0);
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

void JP_F_002CC650(Ctx *c) { /* func_002CC650 */
ENTER(0x2cc650);
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
{ int t = RSD(2) < 0; SET64(16, RD(6) + RD(0)); if (t) goto L_002CC68C; }
c->f[0].u = RW(2);
c->f[21].f = (f32)(s32)c->f[0].u; goto L_002CC6A8;
L_002CC68C:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[21].f = (f32)(s32)c->f[0].u;
c->f[21].f = fpu(F(21) + F(21));
L_002CC6A8:;
SET64(2, rd16(c, (RW(17) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002CC6C0; }
c->f[0].u = RW(2);
c->f[20].f = (f32)(s32)c->f[0].u; goto L_002CC6D8;
L_002CC6C0:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[20].f = (f32)(s32)c->f[0].u;
c->f[20].f = fpu(F(20) + F(20));
L_002CC6D8:;
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2cc6e8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
c->f[12].u = RW(0);
SET32(4, RW(18) + 192);
SET64(31, 0x2cc6f8); wr32(c, (RW(18) + 160), RW(17)); JP_F_001638D0(c);
wr32(c, (RW(18) + 164), c->f[21].u);
wr32(c, (RW(18) + 168), c->f[20].u);
wr32(c, (RW(18) + 172), RW(0));
wr32(c, (RW(18) + 176), RW(0));
wr32(c, (RW(18) + 180), c->f[21].u);
wr32(c, (RW(18) + 184), c->f[20].u);
SET64(25, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cc720); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, 0x2cc728); SET64(4, RD(18) + RD(0)); JP_F_0014EB10(c);
if (RD(16) == RD(0)) { SET64(25, (s32)rd32(c, (RW(18) + 8))); goto L_002CC738; }
SET32(16, RW(16) + 672);
SET64(25, (s32)rd32(c, (RW(18) + 8)));
L_002CC738:;
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2cc748); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002CC770(Ctx *c) { /* func_002CC770 */
ENTER(0x2cc770);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 4))); goto L_002CC7B8; }
SET64(3, rd16(c, (RW(4) + 104)));
SET32(2, RW(0) + 3);
if (RD(3) != RD(2)) { wr8(c, (RW(4) + 167), (u8)RW(0)); goto L_002CC7B4; }
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 167), (u8)RW(2));
L_002CC7B4:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
L_002CC7B8:;
SET64(2, rd8(c, (RW(4) + 180)));
{ int t = RD(2) == RD(0);  if (t) goto L_002CC834; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2cc7d4);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CC834; }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cc7f0);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cc804);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cc818); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cc82c); SET32(4, RW(2) + 480); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 16))); goto L_002CC90C;
L_002CC834:;
SET64(31, 0x2cc83c);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2cc848); SET32(5, RW(0) + -1); JP_F_0013E260(c);
SET64(31, 0x2cc850); SET64(19, RD(2) & 0xffff); JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2cc85c); SET32(5, RW(0) + -1); JP_F_0013E1A0(c);
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(18, rd16(c, (RW(4) + 172)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2cc874); SET64(17, RD(2) & 0xffff); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(2, rd8(c, (RW(2) + 180)));
{ int t = RD(2) == RD(0); c->f[20].u = c->f[0].u; if (t) goto L_002CC88C; }
SET64(19, RD(0) + RD(0));
SET64(17, RD(0) & 0xffff);
L_002CC88C:;
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(6, RD(17) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2cc8a8); c->f[12].u = c->f[20].u; rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(17, RD(19) & 0xffff);
SET64(5, RD(18) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2cc8c8); c->f[12].u = c->f[20].u; rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(5, RD(18) + RD(0));
c->f[12].u = c->f[20].u;
SET64(6, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2cc8e8); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(5, RD(18) + RD(0));
c->f[12].u = c->f[20].u;
SET64(6, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2cc908); SET32(4, RW(2) + 480); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(16) + 16)));
L_002CC90C:;
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2cc918); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002CC940(Ctx *c) { /* func_002CC940 */
ENTER(0x2cc940);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(0) + 4);
SET64(4, rd16(c, (RW(4) + 172)));
{ int t = RD(4) == RD(3); SET32(2, RW(0) + -1); if (t) goto L_002CC988; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 55); goto L_002CC98C; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 54); goto L_002CC98C; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 53); goto L_002CC98C; }
if (RD(4) == RD(0)) { SET32(2, RW(0) + 52); goto L_002CC98C; }
 goto L_002CC98C;
L_002CC988:;
SET32(2, RW(0) + 48);
L_002CC98C:;
 return;
}

void JP_F_002CC9A0(Ctx *c) { /* func_002CC9A0 */
ENTER(0x2cc9a0);
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
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 16), c->f[20].u); if (t) goto L_002CC9F8; }
L_002CC9DC:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CC9DC; } }
L_002CC9F8:;
SET64(18, rd16(c, (RW(28) + -30220)));
SET64(20, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2cca0c); SET64(4, RD(20) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cca18); SET64(5, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cca24); SET64(5, RD(18) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cca30); SET32(4, RW(29) + 268); JP_F_002C9510(c);
SET32(4, RW(29) + 268);
SET64(31, 0x2cca3c); SET32(5, RW(0) + 32); JP_F_002C94F0(c);
wr32(c, (RW(29) + 208), RW(2));
SET64(18, rd16(c, (RW(28) + -30220)));
SET64(20, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2cca54); SET64(4, RD(20) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cca60); SET64(5, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cca6c); SET64(5, RD(18) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cca78); SET32(4, RW(29) + 264); JP_F_002C9510(c);
SET32(4, RW(29) + 264);
SET64(31, 0x2cca84); SET32(5, RW(0) + 33); JP_F_002C94F0(c);
wr32(c, (RW(29) + 212), RW(2));
SET64(18, rd16(c, (RW(28) + -30220)));
SET64(20, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2cca9c); SET64(4, RD(20) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2ccaa8); SET64(5, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2ccab4); SET64(5, RD(18) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ccac0); SET32(4, RW(29) + 260); JP_F_002C9510(c);
SET32(4, RW(29) + 260);
SET64(31, 0x2ccacc); SET32(5, RW(0) + 34); JP_F_002C94F0(c);
wr32(c, (RW(29) + 216), RW(2));
SET64(18, rd16(c, (RW(28) + -30220)));
SET64(20, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2ccae4); SET64(4, RD(20) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2ccaf0); SET64(5, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2ccafc); SET64(5, RD(18) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ccb08); SET32(4, RW(29) + 256); JP_F_002C9510(c);
SET32(4, RW(29) + 256);
SET64(31, 0x2ccb14); SET32(5, RW(0) + 35); JP_F_002C94F0(c);
wr32(c, (RW(29) + 220), RW(2));
SET64(18, rd16(c, (RW(28) + -30220)));
SET64(20, (s32)rd32(c, (RW(19) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2ccb2c); SET64(4, RD(20) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2ccb38); SET64(5, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2ccb44); SET64(5, RD(18) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ccb50); SET32(4, RW(29) + 252); JP_F_002C9510(c);
SET32(4, RW(29) + 252);
SET64(31, 0x2ccb5c); SET32(5, RW(0) + 4); JP_F_002C94F0(c);
wr32(c, (RW(29) + 224), RW(2));
SET64(31, 0x2ccb68); SET32(4, RW(0) + 196); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002CCBA8; }
SET64(31, 0x2ccb78); SET64(4, RD(18) + RD(0)); JP_F_00228490(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -3136);
SET32(2, RW(2) + -3128);
wr32(c, (RW(18) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 20), RW(2));
SET32(3, RW(3) + -3116);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -3056);
wr32(c, (RW(18) + 36), RW(3));
wr32(c, (RW(18) + 72), RW(2));
L_002CCBA8:;
wr32(c, (RW(17) + 4), RW(18));
SET64(18, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2ccbb8); SET32(4, RW(29) + 128); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 148), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 156), RW(0));
wr16(c, (RW(29) + 160), (u16)RW(0));
wr16(c, (RW(29) + 162), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 108)));
SET64(31, 0x2ccbe4); SET64(5, RD(0) + RD(0)); JP_F_002E0CD0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ccbf0); SET32(4, RW(29) + 128); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 148)));
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET32(2, RW(2) + -32);
SET32(4, RW(29) + 128);
SET64(5, (s32)rd32(c, (RW(5) + 124)));
SET32(18, RW(3) + RW(5));
SET64(31, 0x2ccc14); wr32(c, (RW(29) + 144), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2ccc20); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(6, RD(18) + RD(0));
SET32(5, RW(29) + 208);
SET32(7, RW(0) + -1);
SET32(8, RW(0) + 1);
SET32(9, RW(0) + 5);
SET64(31, 0x2ccc40); SET64(10, RD(0) + RD(0)); JP_F_00225E90(c);
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
c->f[0].u = rd32(c, (RW(28) + -31360));
SET64(7, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(7) + 144), c->f[0].u);
wr32(c, (RW(29) + 176), RW(6));
wr32(c, (RW(29) + 180), RW(4));
wr32(c, (RW(29) + 184), RW(3));
wr32(c, (RW(29) + 188), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2ccc9c); SET32(5, RW(29) + 176); rt_call(c, t); }
SET64(3, (s64)(s32)0x43b00000);
SET64(2, (s64)(s32)0x43600000);
wr32(c, (RW(29) + 232), RW(3));
wr32(c, (RW(29) + 236), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2cccc0); SET32(5, RW(29) + 232); rt_call(c, t); }
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
wr16(c, (RW(3) + 2600), (u16)RW(2));
SET64(31, 0x2ccd38); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_00226EA0(c);
SET64(31, 0x2ccd40);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002CCD54; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002CCD54:;
SET64(31, 0x2ccd5c);  JP_F_0022A3D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2ccd70);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2ccd84); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, 0x2ccd8c); SET32(4, RW(0) + 240); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002CCE10; }
SET64(3, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x1f0000);
SET32(3, RW(3) + 12176);
SET64(6, (s64)(s32)0x1f0000);
wr32(c, (RW(18) + 208), RW(3));
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(18) + 0), (u8)RW(0));
SET32(4, RW(18) + 48);
wr32(c, (RW(18) + 4), RW(2));
SET32(5, RW(5) + 14528);
wr32(c, (RW(18) + 16), RW(2));
SET32(6, RW(6) + 14448);
wr32(c, (RW(18) + 24), RW(0));
SET32(7, RW(0) + 80);
wr32(c, (RW(18) + 32), RW(0));
SET32(8, RW(0) + 2);
SET64(31, 0x2ccddc); wr32(c, (RW(18) + 36), RW(0)); JP_F_001023D0(c);
c->f[0].u = RW(0);
SET64(3, (s64)(s32)0x4e0000);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(18) + 28), RW(0));
SET32(3, RW(3) + 12112);
SET32(2, RW(0) + 1);
wr32(c, (RW(18) + 12), c->f[0].u);
wr32(c, (RW(18) + 8), c->f[0].u);
wr32(c, (RW(18) + 208), RW(3));
wr32(c, (RW(18) + 224), RW(0));
wr32(c, (RW(18) + 228), RW(0));
wr32(c, (RW(18) + 232), RW(0));
wr8(c, (RW(18) + 236), (u8)RW(2));
L_002CCE10:;
wr32(c, (RW(17) + 20), RW(18));
SET64(2, (s64)(s32)0x410000);
c->f[2].u = rd32(c, (RW(2) + 30904));
SET32(11, RW(0) + 1);
SET64(8, RD(19) + RD(0));
SET32(6, RW(29) + 240);
SET64(5, RD(0) + RD(0));
SET32(7, RW(17) + 4);
SET64(2, (s64)(s32)0x410000);
SET64(9, RD(16) + RD(0));
c->f[1].u = rd32(c, (RW(2) + 30908));
wr32(c, (RW(29) + 240), c->f[2].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 30912));
wr32(c, (RW(29) + 244), c->f[1].u);
wr32(c, (RW(29) + 248), c->f[0].u);
wr64(c, (RW(29) + 0), RD(11));
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2cce68); SET64(10, RD(0) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 20)));
SET64(3, (s64)(s32)0x3f800000);
SET32(4, RW(0) + 736);
SET64(31, 0x2cce7c); wr32(c, (RW(2) + 16), RW(3)); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002CCEA8; }
SET64(5, (s64)(s32)0x2d0000);
SET64(6, (s64)(s32)0x2d0000);
SET64(4, RD(18) + RD(0));
SET32(5, RW(5) + -3392);
SET32(6, RW(6) + -12096);
SET32(7, RW(0) + 240);
SET64(31, 0x2ccea4); SET32(8, RW(0) + 3); JP_F_00102580(c);
SET64(18, RD(2) + RD(0));
L_002CCEA8:;
wr32(c, (RW(17) + 24), RW(18));
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
L_002CCEB4:;
SET64(2, (s32)rd32(c, (RW(17) + 24)));
SET64(5, RD(19) + RD(0));
SET32(6, RW(17) + 4);
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2cced4); SET64(7, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 24)));
SET64(2, (s64)(s32)0x461c0000);
SET64(4, RD(2) | 0x3c00);
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < (s64)3);
SET32(3, RW(3) + RW(18));
wr32(c, (RW(3) + 16), RW(4));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 240); if (t) { POLL(); goto L_002CCEB4; } }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2ccf0c);  rt_call(c, t); }
c->f[1].u = rd32(c, (RW(2) + 0));
SET32(3, RW(29) + 192);
SET64(2, (s64)(s32)0x43200000);
c->f[0].u = RW(2);
c->f[21].f = fpu(F(0) + F(1));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 16); if (t) goto L_002CCF48; }
L_002CCF2C:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CCF2C; } }
L_002CCF48:;
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
L_002CCF7C:;
c->f[0].u = rd32(c, (RW(4) + 0));
c->fcc = F(0) <= F(20);
{ int t = c->fcc;  if (t) goto L_002CCF90; }
c->f[20].u = c->f[0].u;
L_002CCF90:;
SET32(5, RW(5) + 1);
SET64(2, RSD(5) < (s64)4);
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 4); if (t) { POLL(); goto L_002CCF7C; } }
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
{ u32 t = RW(25); SET64(31, 0x2ccfd4); c->f[13].u = c->f[20].u; rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
c->f[12].u = c->f[21].u;
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2ccfec); c->f[13].u = c->f[20].u; rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
c->f[12].u = c->f[21].u;
c->f[13].u = c->f[20].u;
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2cd008); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 24)));
c->f[12].u = c->f[21].u;
c->f[13].u = c->f[20].u;
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2cd024); SET32(4, RW(2) + 480); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET64(2, (s64)(s32)0x540000);
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cd03c); SET64(5, (s32)rd32(c, (RW(2) + 2976))); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(2, (s64)(s32)0x540000);
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cd054); SET64(5, (s32)rd32(c, (RW(2) + 2980))); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 24)));
SET64(2, (s64)(s32)0x540000);
SET64(5, (s32)rd32(c, (RW(2) + 2984)));
SET64(25, (s32)rd32(c, (RW(3) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cd070); SET32(4, RW(3) + 240); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 24)));
SET64(2, (s64)(s32)0x540000);
SET64(5, (s32)rd32(c, (RW(2) + 2988)));
SET64(25, (s32)rd32(c, (RW(3) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cd08c); SET32(4, RW(3) + 480); rt_call(c, t); }
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

void JP_F_002CD0C0(Ctx *c) { /* func_002CD0C0 */
ENTER(0x2cd0c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CD148; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12048);
wr32(c, (RW(17) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2cd0f8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002CD134; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12176);
wr32(c, (RW(17) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2cd118); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(5, (s64)(s32)0x1f0000);
SET32(4, RW(17) + 48);
SET32(5, RW(5) + 14448);
SET32(6, RW(0) + 80);
SET64(31, 0x2cd130); SET32(7, RW(0) + 2); JP_F_00102360(c);
SET64(2, RD(16) << 48);
L_002CD134:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002CD14C; }
SET64(31, 0x2cd148); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002CD148:;
SET64(2, RD(17) + RD(0));
L_002CD14C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002CD160(Ctx *c) { /* func_002CD160 */
ENTER(0x2cd160);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) != RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002CD184; }
SET32(2, RW(0) + 1); goto L_002CD190;
L_002CD184:;
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2cd190);  rt_call(c, t); }
L_002CD190:;
SET64(2, RD(2) & 0xff);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CD218; }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2cd1b0);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CD214; }
SET64(4, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2cd1cc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CD214; }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2cd1e8); SET32(4, RW(2) + 240); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CD214; }
SET64(2, (s32)rd32(c, (RW(16) + 24)));
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2cd204); SET32(4, RW(2) + 480); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CD214; }
SET32(2, RW(0) + 1); goto L_002CD218;
L_002CD214:;
SET64(2, RD(0) + RD(0));
L_002CD218:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002CD230(Ctx *c) { /* func_002CD230 */
ENTER(0x2cd230);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x540000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 20)));
SET64(3, (s32)rd32(c, (RW(3) + 36)));
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
wr32(c, (RW(2) + 2976), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 36)));
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
{ int t = RD(3) != RD(0);  if (t) goto L_002CD290; }
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002CD290; }
SET32(3, RW(0) + 1);
L_002CD290:;
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 2980), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 276)));
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
{ int t = RD(3) != RD(0);  if (t) goto L_002CD2D0; }
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002CD2D0; }
SET32(3, RW(0) + 1);
L_002CD2D0:;
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(2) + 2984), RW(3));
SET64(2, (s32)rd32(c, (RW(4) + 24)));
SET64(2, (s32)rd32(c, (RW(2) + 516)));
c->f[1].u = rd32(c, (RW(2) + 0));
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(3, (s32)c->f[0].u);
{ int t = RD(3) != RD(0);  if (t) goto L_002CD310; }
c->f[0].u = RW(0);
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002CD310; }
SET32(3, RW(0) + 1);
L_002CD310:;
SET64(2, (s64)(s32)0x540000);
SET64(31, 0x2cd31c); wr32(c, (RW(2) + 2988), RW(3)); JP_F_00139590(c);
SET64(31, 0x2cd324);  JP_F_00139590(c);
SET64(31, 0x2cd32c); SET64(4, (s32)rd32(c, (RW(2) + 20))); JP_F_001B86F0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002CD340(Ctx *c) { /* func_002CD340 */
ENTER(0x2cd340);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 20)));
{ int t = RD(16) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002CD3B8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12112);
wr32(c, (RW(16) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2cd374); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
if (RD(16) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002CD3B0; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12176);
wr32(c, (RW(16) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2cd394); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(5, (s64)(s32)0x1f0000);
SET32(4, RW(16) + 48);
SET32(5, RW(5) + 14448);
SET32(6, RW(0) + 80);
SET64(31, 0x2cd3ac); SET32(7, RW(0) + 2); JP_F_00102360(c);
SET64(4, RD(16) + RD(0));
L_002CD3B0:;
SET64(31, 0x2cd3b8);  JP_F_001004B0(c);
L_002CD3B8:;
wr32(c, (RW(17) + 20), RW(0));
SET64(5, (s64)(s32)0x2d0000);
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET64(31, 0x2cd3cc); SET32(5, RW(5) + -12096); JP_F_001022C0(c);
wr32(c, (RW(17) + 24), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002CD3F0(Ctx *c) { /* func_002CD3F0 */
ENTER(0x2cd3f0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(5) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002CD428; }
SET64(4, rd16(c, (RW(5) + 104)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { wr8(c, (RW(5) + 167), (u8)RW(0)); goto L_002CD428; }
SET32(3, RW(0) + 1);
wr8(c, (RW(5) + 167), (u8)RW(3));
L_002CD428:;
SET64(4, (s32)rd32(c, (RW(17) + 20)));
SET32(3, RW(0) + 5);
if (RD(4) == RD(3)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002CD728; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 24))); goto L_002CD67C; }
SET32(5, RW(0) + 2);
if (RD(4) == RD(5)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002CD4CC; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002CD464; }
 goto L_002CD724;
L_002CD464:;
SET64(3, rd8(c, (RW(4) + 180)));
{ int t = RD(3) == RD(0);  if (t) goto L_002CD724; }
SET64(3, (s16)rd16(c, (RW(4) + 184)));
if (RD(3) == RD(5)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002CD48C; }
SET32(2, RW(0) + -1);
if (RD(3) != RD(2)) { SET64(2, (s32)rd32(c, (RW(17) + 12))); goto L_002CD4AC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
L_002CD48C:;
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2cd498);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CD724; }
SET32(3, RW(0) + 5);
wr32(c, (RW(17) + 20), RW(3)); goto L_002CD724;
L_002CD4AC:;
SET64(4, (s32)rd32(c, (RW(2) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 376)));
{ u32 t = RW(25); SET64(31, 0x2cd4c0);  rt_call(c, t); }
SET32(3, RW(0) + 2);
wr32(c, (RW(17) + 20), RW(3)); goto L_002CD724;
L_002CD4CC:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2cd4dc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CD724; }
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(4, (s32)rd32(c, (RW(2) + 92)));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 364)));
{ u32 t = RW(25); SET64(31, 0x2cd4fc);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CD724; }
SET64(31, 0x2cd50c); SET32(4, RW(0) + 1560); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CD5C4; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2cd520); SET32(5, RW(0) + 1536); JP_F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(5, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 13616);
SET64(4, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 1204), RW(3));
SET32(2, RW(0) + -1);
wr32(c, (RW(16) + 1180), RW(2));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 1196), RW(0));
SET32(5, RW(5) + 13136);
wr32(c, (RW(16) + 1200), RW(2));
SET32(4, RW(4) + 13144);
wr32(c, (RW(16) + 56), RW(5));
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 13156);
wr32(c, (RW(16) + 20), RW(4));
SET32(18, RW(16) + 1208);
SET32(2, RW(2) + 13216);
wr32(c, (RW(16) + 36), RW(3));
SET64(4, RD(18) + RD(0));
SET64(31, 0x2cd578); wr32(c, (RW(16) + 1204), RW(2)); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -32);
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
L_002CD5C4:;
wr32(c, (RW(17) + 24), RW(16));
SET64(25, (s32)rd32(c, (RW(16) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 100)));
{ u32 t = RW(25); SET64(31, 0x2cd5d8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(2, (s16)rd16(c, (RW(2) + 184)));
if (RD(2) != RD(0)) { SET64(3, (s32)rd32(c, (RW(17) + 4))); goto L_002CD620; }
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2cd5f4); SET32(4, RW(4) + 2964); JP_F_002C83B0(c);
SET64(3, (s32)rd32(c, (RW(17) + 24)));
SET32(2, RW(0) + 1);
wr16(c, (RW(3) + 1276), (u16)RW(2));
SET64(2, rd16(c, (RW(3) + 1272)));
wr16(c, (RW(3) + 1274), (u16)RW(2));
SET64(2, rd16(c, (RW(28) + -31372)));
wr16(c, (RW(3) + 1272), (u16)RW(2));
wr16(c, (RW(3) + 1278), (u16)RW(0));
wr16(c, (RW(3) + 1280), (u16)RW(0));
wr16(c, (RW(3) + 1286), (u16)RW(0));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
L_002CD620:;
SET32(2, RW(0) + 1);
SET64(3, (s16)rd16(c, (RW(3) + 184)));
if (RD(3) != RD(2)) { SET64(4, (s32)rd32(c, (RW(17) + 12))); goto L_002CD668; }
wr8(c, (RW(17) + 32), (u8)RW(2));
SET32(3, RW(0) + 2);
SET64(4, (s32)rd32(c, (RW(17) + 24)));
SET32(2, RW(0) + 96);
wr16(c, (RW(4) + 1276), (u16)RW(3));
SET64(3, rd16(c, (RW(4) + 1272)));
wr16(c, (RW(4) + 1274), (u16)RW(3));
SET64(3, rd16(c, (RW(28) + -31376)));
wr16(c, (RW(4) + 1272), (u16)RW(3));
wr16(c, (RW(4) + 1278), (u16)RW(0));
wr16(c, (RW(4) + 1280), (u16)RW(0));
wr16(c, (RW(4) + 1286), (u16)RW(0));
wr16(c, (RW(4) + 1278), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 12)));
L_002CD668:;
SET64(31, 0x2cd670); SET64(5, (s32)rd32(c, (RW(17) + 24))); JP_F_0013A470(c);
SET32(3, RW(0) + 3);
wr32(c, (RW(17) + 20), RW(3)); goto L_002CD724;
L_002CD67C:;
SET32(3, RW(0) + 4);
SET64(4, (s32)rd32(c, (RW(4) + 48)));
{ int t = RD(4) != RD(3);  if (t) goto L_002CD724; }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2cd6a0);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CD724; }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(4, (s32)rd32(c, (RW(17) + 24)));
{ int t = RD(4) == RD(0); SET64(16, rd16(c, (RW(2) + 184))); if (t) goto L_002CD6C8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cd6c8); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002CD6C8:;
wr32(c, (RW(17) + 24), RW(0));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002CD6EC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cd6e8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002CD6EC:;
SET64(25, (s32)rd32(c, (RW(17) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2cd6fc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(31, 0x2cd704); SET64(4, RD(17) + RD(0)); JP_F_002CD7C0(c);
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2cd714); SET32(4, RW(2) + 168); JP_F_0013BA20(c);
SET64(3, (s32)rd32(c, (RW(17) + 12)));
SET32(4, RW(0) + 1);
wr8(c, (RW(3) + 60), (u8)RW(4));
wr32(c, (RW(17) + 20), RW(4));
L_002CD724:;
SET64(31, rd64(c, (RW(29) + 48)));
L_002CD728:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002CD740(Ctx *c) { /* func_002CD740 */
ENTER(0x2cd740);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(0) + 2);
SET64(4, rd16(c, (RW(4) + 172)));
{ int t = RD(4) == RD(3); SET32(2, RW(0) + -1); if (t) goto L_002CD770; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 47); goto L_002CD774; }
if (RD(4) == RD(0)) { SET32(2, RW(0) + 46); goto L_002CD774; }
 goto L_002CD774;
L_002CD770:;
SET32(2, RW(0) + 48);
L_002CD774:;
 return;
}

void JP_F_002CD780(Ctx *c) { /* func_002CD780 */
ENTER(0x2cd780);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(5) + 0)));
SET64(16, RD(4) + RD(0));
SET64(31, 0x2cd79c); wr32(c, (RW(4) + 28), RW(2)); JP_F_002CD7C0(c);
SET64(31, 0x2cd7a4); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_00226EA0(c);
SET32(3, RW(0) + 1);
wr32(c, (RW(16) + 20), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002CD7C0(Ctx *c) { /* func_002CD7C0 */
ENTER(0x2cd7c0);
SET32(29, RW(29) + -176);
SET32(2, RW(0) + 16);
wr64(c, (RW(29) + 48), RD(31));
SET32(3, RW(29) + 128);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(3) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002CD800; }
L_002CD7E4:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CD7E4; } }
L_002CD800:;
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(18, (s32)rd32(c, (RW(17) + 28)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2cd814); SET64(4, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2cd820); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2cd82c); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cd838); SET32(4, RW(29) + 172); JP_F_002C9510(c);
SET32(4, RW(29) + 172);
SET64(31, 0x2cd844); SET32(5, RW(0) + 5); JP_F_002C94F0(c);
wr32(c, (RW(29) + 128), RW(2));
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(18, (s32)rd32(c, (RW(17) + 28)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2cd85c); SET64(4, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2cd868); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2cd874); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cd880); SET32(4, RW(29) + 168); JP_F_002C9510(c);
SET32(4, RW(29) + 168);
SET64(31, 0x2cd88c); SET32(5, RW(0) + 6); JP_F_002C94F0(c);
wr32(c, (RW(29) + 132), RW(2));
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(18, (s32)rd32(c, (RW(17) + 28)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2cd8a4); SET64(4, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2cd8b0); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2cd8bc); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cd8c8); SET32(4, RW(29) + 164); JP_F_002C9510(c);
SET32(4, RW(29) + 164);
SET64(31, 0x2cd8d4); SET32(5, RW(0) + 4); JP_F_002C94F0(c);
wr32(c, (RW(29) + 136), RW(2));
SET64(31, 0x2cd8e0); SET32(4, RW(0) + 196); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CD920; }
SET64(31, 0x2cd8f0); SET64(4, RD(16) + RD(0)); JP_F_00228490(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -3136);
SET32(2, RW(2) + -3128);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -3116);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -3056);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002CD920:;
wr32(c, (RW(17) + 4), RW(16));
SET64(16, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2cd930); SET32(4, RW(29) + 64); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 84), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 88), RW(0));
wr32(c, (RW(29) + 80), RW(2));
wr32(c, (RW(29) + 92), RW(0));
wr16(c, (RW(29) + 96), (u16)RW(0));
wr16(c, (RW(29) + 98), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(31, 0x2cd95c); SET64(5, RD(0) + RD(0)); JP_F_002E0CD0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cd968); SET32(4, RW(29) + 64); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 84)));
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(29) + 88)));
SET32(2, RW(2) + -32);
SET32(4, RW(29) + 64);
SET64(5, (s32)rd32(c, (RW(5) + 124)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2cd98c); wr32(c, (RW(29) + 80), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 64);
SET64(31, 0x2cd998); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(6, RD(16) + RD(0));
SET32(5, RW(29) + 128);
SET32(7, RW(0) + -1);
SET32(8, RW(0) + 1);
SET32(9, RW(0) + 3);
SET64(31, 0x2cd9b8); SET64(10, RD(0) + RD(0)); JP_F_00225E90(c);
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
c->f[0].u = rd32(c, (RW(28) + -31360));
SET64(7, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(7) + 144), c->f[0].u);
wr32(c, (RW(29) + 112), RW(6));
wr32(c, (RW(29) + 116), RW(4));
wr32(c, (RW(29) + 120), RW(3));
wr32(c, (RW(29) + 124), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2cda14); SET32(5, RW(29) + 112); rt_call(c, t); }
SET64(3, (s64)(s32)0x43600000);
SET64(2, (s64)(s32)0x43200000);
wr32(c, (RW(29) + 152), RW(3));
wr32(c, (RW(29) + 156), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2cda38); SET32(5, RW(29) + 152); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 176), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(17) + 12)));
SET64(3, (s32)rd32(c, (RW(17) + 4)));
SET64(5, rd16(c, (RW(2) + 64)));
SET64(31, 0x2cda58); SET32(4, RW(3) + 168); JP_F_0013BA20(c);
SET64(31, 0x2cda60);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002CDA74; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002CDA74:;
SET64(31, 0x2cda7c);  JP_F_0022A3D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2cda90);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2cdaa4); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002CDAC0(Ctx *c) { /* func_002CDAC0 */
ENTER(0x2cdac0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, rd8(c, (RW(4) + 32)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 0))); goto L_002CDB00; }
wr8(c, (RW(4) + 32), (u8)RW(0));
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2cdae4); SET32(4, RW(4) + 2964); JP_F_002C83B0(c);
SET64(31, 0x2cdaec);  JP_F_00139590(c);
SET64(31, 0x2cdaf4);  JP_F_00139590(c);
SET64(31, 0x2cdafc); SET64(4, (s32)rd32(c, (RW(2) + 20))); JP_F_001B86F0(c);
SET64(31, rd64(c, (RW(29) + 0)));
L_002CDB00:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002CDB10(Ctx *c) { /* func_002CDB10 */
ENTER(0x2cdb10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 24)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 24), RW(0)); goto L_002CDB40; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cdb3c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 24), RW(0));
L_002CDB40:;
wr32(c, (RW(16) + 28), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002CDB60(Ctx *c) { /* func_002CDB60 */
ENTER(0x2cdb60);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) == RD(0)) { SET64(4, (s32)rd32(c, (RW(18) + 4))); goto L_002CDBA4; }
SET64(3, rd16(c, (RW(4) + 104)));
SET32(2, RW(0) + 3);
if (RD(3) != RD(2)) { wr8(c, (RW(4) + 167), (u8)RW(0)); goto L_002CDBA0; }
SET32(2, RW(0) + 1);
wr8(c, (RW(4) + 167), (u8)RW(2));
L_002CDBA0:;
SET64(4, (s32)rd32(c, (RW(18) + 4)));
L_002CDBA4:;
SET64(2, rd8(c, (RW(4) + 180)));
{ int t = RD(2) == RD(0);  if (t) goto L_002CDC0C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2cdbc0);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CDC0C; }
SET64(4, (s32)rd32(c, (RW(18) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cdbdc);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 20)));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cdbf0); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 20)));
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2cdc04); SET32(4, RW(2) + 480); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64))); goto L_002CDCAC;
L_002CDC0C:;
SET64(31, 0x2cdc14);  JP_F_00138DE0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2cdc20); SET32(5, RW(0) + -1); JP_F_0013E1A0(c);
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(16, rd16(c, (RW(4) + 172)));
SET64(25, (s32)rd32(c, (RW(25) + 156)));
{ u32 t = RW(25); SET64(31, 0x2cdc38); SET64(17, RD(2) & 0xffff); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 4)));
SET64(2, rd8(c, (RW(2) + 180)));
{ int t = RD(2) == RD(0); c->f[20].u = c->f[0].u; if (t) goto L_002CDC4C; }
SET64(17, RD(0) + RD(0));
L_002CDC4C:;
SET64(4, (s32)rd32(c, (RW(18) + 20)));
SET64(5, RD(16) + RD(0));
c->f[12].u = c->f[20].u;
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2cdc68); SET64(6, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 20)));
SET64(5, RD(16) + RD(0));
c->f[12].u = c->f[20].u;
SET64(6, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2cdc88); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 20)));
SET64(5, RD(16) + RD(0));
c->f[12].u = c->f[20].u;
SET64(6, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2cdca8); SET32(4, RW(2) + 480); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
L_002CDCAC:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002CDCD0(Ctx *c) { /* func_002CDCD0 */
ENTER(0x2cdcd0);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(0) + 3);
SET64(4, rd16(c, (RW(4) + 172)));
{ int t = RD(4) == RD(3); SET32(2, RW(0) + -1); if (t) goto L_002CDD0C; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 64); goto L_002CDD10; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 44); goto L_002CDD10; }
if (RD(4) == RD(0)) { SET32(2, RW(0) + 43); goto L_002CDD10; }
 goto L_002CDD10;
L_002CDD0C:;
SET32(2, RW(0) + 45);
L_002CDD10:;
 return;
}

void JP_F_002CDD20(Ctx *c) { /* func_002CDD20 */
ENTER(0x2cdd20);
SET32(29, RW(29) + -320);
SET32(2, RW(0) + 20);
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
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 16), c->f[20].u); if (t) goto L_002CDD78; }
L_002CDD5C:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CDD5C; } }
L_002CDD78:;
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(20, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2cdd8c); SET64(4, RD(20) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cdd98); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cdda4); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cddb0); SET32(4, RW(29) + 316); JP_F_002C9510(c);
SET32(4, RW(29) + 316);
SET64(31, 0x2cddbc); SET32(5, RW(0) + 7); JP_F_002C94F0(c);
wr32(c, (RW(29) + 256), RW(2));
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(20, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2cddd4); SET64(4, RD(20) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cdde0); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cddec); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cddf8); SET32(4, RW(29) + 312); JP_F_002C9510(c);
SET32(4, RW(29) + 312);
SET64(31, 0x2cde04); SET32(5, RW(0) + 8); JP_F_002C94F0(c);
wr32(c, (RW(29) + 260), RW(2));
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(20, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2cde1c); SET64(4, RD(20) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cde28); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cde34); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cde40); SET32(4, RW(29) + 308); JP_F_002C9510(c);
SET32(4, RW(29) + 308);
SET64(31, 0x2cde4c); SET32(5, RW(0) + 9); JP_F_002C94F0(c);
wr32(c, (RW(29) + 264), RW(2));
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(20, (s32)rd32(c, (RW(18) + 0)));
SET64(5, RD(16) + RD(0));
SET64(31, 0x2cde64); SET64(4, RD(20) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cde70); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2cde7c); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cde88); SET32(4, RW(29) + 304); JP_F_002C9510(c);
SET32(4, RW(29) + 304);
SET64(31, 0x2cde94); SET32(5, RW(0) + 4); JP_F_002C94F0(c);
wr32(c, (RW(29) + 268), RW(2));
SET64(31, 0x2cdea0); SET32(4, RW(0) + 196); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CDEE0; }
SET64(31, 0x2cdeb0); SET64(4, RD(16) + RD(0)); JP_F_00228490(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -3136);
SET32(2, RW(2) + -3128);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -3116);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -3056);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002CDEE0:;
wr32(c, (RW(19) + 4), RW(16));
SET64(16, (s32)rd32(c, (RW(19) + 12)));
SET64(31, 0x2cdef0); SET32(4, RW(29) + 128); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 148), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 152), RW(0));
wr32(c, (RW(29) + 144), RW(2));
wr32(c, (RW(29) + 156), RW(0));
wr16(c, (RW(29) + 160), (u16)RW(0));
wr16(c, (RW(29) + 162), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(31, 0x2cdf1c); SET64(5, RD(0) + RD(0)); JP_F_002E0CD0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cdf28); SET32(4, RW(29) + 128); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 148)));
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(29) + 152)));
SET32(2, RW(2) + -32);
SET32(4, RW(29) + 128);
SET64(5, (s32)rd32(c, (RW(5) + 124)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2cdf4c); wr32(c, (RW(29) + 144), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 128);
SET64(31, 0x2cdf58); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(6, RD(16) + RD(0));
SET32(5, RW(29) + 256);
SET32(7, RW(0) + -1);
SET32(8, RW(0) + 1);
SET32(9, RW(0) + 5);
SET64(31, 0x2cdf78); SET64(10, RD(0) + RD(0)); JP_F_00225E90(c);
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
c->f[0].u = rd32(c, (RW(28) + -31360));
SET64(7, (s32)rd32(c, (RW(19) + 4)));
wr32(c, (RW(7) + 144), c->f[0].u);
wr32(c, (RW(29) + 176), RW(6));
wr32(c, (RW(29) + 180), RW(4));
wr32(c, (RW(29) + 184), RW(3));
wr32(c, (RW(29) + 188), RW(2));
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2cdfd4); SET32(5, RW(29) + 176); rt_call(c, t); }
SET64(3, (s64)(s32)0x43a00000);
SET64(2, (s64)(s32)0x43400000);
wr32(c, (RW(29) + 280), RW(3));
wr32(c, (RW(29) + 284), RW(2));
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2cdff8); SET32(5, RW(29) + 280); rt_call(c, t); }
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
SET64(2, RD(2) & 0xfffe);
wr16(c, (RW(3) + 1544), (u16)RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 4)));
SET64(3, (s32)rd32(c, (RW(2) + 140)));
SET64(2, rd16(c, (RW(3) + 2072)));
SET64(2, RD(2) | 0x1);
wr16(c, (RW(3) + 2072), (u16)RW(2));
SET64(31, 0x2ce05c); SET64(4, (s32)rd32(c, (RW(19) + 4))); JP_F_00226EA0(c);
SET64(31, 0x2ce064);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 4))); goto L_002CE078; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(19) + 4)));
L_002CE078:;
SET64(31, 0x2ce080);  JP_F_0022A3D0(c);
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2ce094);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2ce0a8); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, 0x2ce0b0); SET32(4, RW(0) + 736); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CE0DC; }
SET64(5, (s64)(s32)0x2d0000);
SET64(6, (s64)(s32)0x2d0000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -96);
SET32(6, RW(6) + -7200);
SET32(7, RW(0) + 240);
SET64(31, 0x2ce0d8); SET32(8, RW(0) + 3); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002CE0DC:;
wr32(c, (RW(19) + 20), RW(16));
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 30832));
SET64(3, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(3) + 30836));
SET32(11, RW(0) + 1);
SET32(6, RW(29) + 224);
SET64(5, RD(0) + RD(0));
SET64(2, (s64)(s32)0x410000);
SET32(7, RW(19) + 4);
c->f[2].u = rd32(c, (RW(2) + 30840));
SET64(3, (s64)(s32)0x410000);
wr32(c, (RW(29) + 224), c->f[0].u);
SET64(8, RD(18) + RD(0));
wr32(c, (RW(29) + 228), c->f[1].u);
SET64(9, RD(17) + RD(0));
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(3) + 30844));
c->f[1].u = rd32(c, (RW(2) + 30848));
wr32(c, (RW(29) + 232), c->f[2].u);
wr32(c, (RW(29) + 236), c->f[0].u);
SET64(3, (s64)(s32)0x410000);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 30864));
wr32(c, (RW(29) + 240), c->f[1].u);
SET64(2, (s64)(s32)0x410000);
c->f[1].u = rd32(c, (RW(2) + 30868));
wr32(c, (RW(29) + 192), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 30872));
wr32(c, (RW(29) + 196), c->f[1].u);
c->f[1].u = rd32(c, (RW(3) + 30876));
wr32(c, (RW(29) + 200), c->f[0].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 30880));
wr32(c, (RW(29) + 204), c->f[1].u);
wr32(c, (RW(29) + 208), c->f[0].u);
wr64(c, (RW(29) + 0), RD(11));
SET64(4, (s32)rd32(c, (RW(19) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2ce188); SET64(10, RD(0) + RD(0)); rt_call(c, t); }
SET32(5, RW(0) + 1);
SET32(6, RW(29) + 192);
wr64(c, (RW(29) + 0), RD(5));
SET32(7, RW(19) + 4);
SET64(2, (s32)rd32(c, (RW(19) + 20)));
SET64(8, RD(18) + RD(0));
SET64(9, RD(17) + RD(0));
SET64(10, RD(0) + RD(0));
SET64(11, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2ce1bc); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(2, (s64)(s32)0x410000);
SET32(11, RW(0) + 1);
c->f[2].u = rd32(c, (RW(2) + 30888));
SET64(8, RD(18) + RD(0));
SET64(9, RD(17) + RD(0));
SET32(6, RW(29) + 288);
SET32(5, RW(0) + 2);
SET32(7, RW(19) + 4);
SET64(2, (s64)(s32)0x410000);
SET64(10, RD(0) + RD(0));
c->f[1].u = rd32(c, (RW(2) + 30892));
wr32(c, (RW(29) + 288), c->f[2].u);
SET64(2, (s64)(s32)0x410000);
c->f[0].u = rd32(c, (RW(2) + 30896));
wr32(c, (RW(29) + 292), c->f[1].u);
wr32(c, (RW(29) + 296), c->f[0].u);
wr64(c, (RW(29) + 0), RD(11));
SET64(2, (s32)rd32(c, (RW(19) + 20)));
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2ce214); SET32(4, RW(2) + 480); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(2, (s64)(s32)0x3f800000);
SET64(6, (s32)rd32(c, (RW(19) + 20)));
c->f[1].u = RW(2);
SET64(9, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(4) + 140)));
c->f[20].u = c->f[1].u;
SET64(8, RD(6) + RD(0));
L_002CE238:;
SET64(3, RD(9) & 0xffff);
SET32(2, RW(3) << 5);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 4);
SET32(2, RW(5) + RW(2));
c->f[0].u = rd32(c, (RW(2) + 456));
c->fcc = F(1) < F(0);
{ int t = !c->fcc;  if (t) goto L_002CE260; }
c->f[1].u = c->f[0].u;
L_002CE260:;
c->f[0].u = rd32(c, (RW(8) + 12));
c->fcc = F(20) < F(0);
{ int t = !c->fcc;  if (t) goto L_002CE278; }
SET32(2, RW(6) + RW(7));
c->f[20].u = rd32(c, (RW(2) + 12));
L_002CE278:;
SET32(9, RW(9) + 1);
SET64(2, RSD(9) < (s64)3);
SET32(8, RW(8) + 240);
{ int t = RD(2) != RD(0); SET32(7, RW(7) + 240); if (t) { POLL(); goto L_002CE238; } }
SET64(2, (s64)(s32)0x41800000);
SET64(25, (s32)rd32(c, (RW(4) + 56)));
c->f[0].u = RW(2);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2ce2a4); c->f[20].f = fpu(F(20) + F(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(19) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2ce2b8); c->f[21].u = rd32(c, (RW(2) + 0)); rt_call(c, t); }
c->f[0].u = rd32(c, (RW(2) + 0));
SET64(4, (s32)rd32(c, (RW(19) + 20)));
c->f[4].u = rd32(c, (RW(28) + -31364));
c->f[1].u = RW(0);
c->f[0].f = fpu(F(0) + F(21));
SET64(2, (s64)(s32)0x40000000);
SET64(25, (s32)rd32(c, (RW(4) + 208)));
c->f[2].f = fpu(F(0) - F(20));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
c->f[5].u = rd32(c, (RW(4) + 20));
c->facc = fpu(F(1) + F(2));
c->f[3].u = RW(2);
c->f[1].f = fpu(F(5) + F(4));
SET64(2, (s64)(s32)0x41000000);
c->f[0].u = RW(2);
c->f[1].f = fpu(c->facc - F(3) * F(1));
c->f[21].f = fpu(F(1) - F(0));
c->f[13].u = c->f[20].u;
{ u32 t = RW(25); SET64(31, 0x2ce310); c->f[12].u = c->f[21].u; rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 20)));
c->f[12].u = c->f[21].u;
c->f[13].u = c->f[20].u;
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2ce32c); SET32(4, RW(2) + 240); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(19) + 20)));
c->f[12].u = c->f[21].u;
c->f[13].u = c->f[20].u;
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2ce348); SET32(4, RW(2) + 480); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 20)));
SET64(4, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x540000);
wr32(c, (RW(3) + 16), RW(4));
SET64(3, (s32)rd32(c, (RW(19) + 20)));
wr32(c, (RW(3) + 256), RW(4));
SET64(3, (s32)rd32(c, (RW(19) + 20)));
wr32(c, (RW(3) + 496), RW(4));
SET64(4, (s32)rd32(c, (RW(19) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2ce37c); SET64(5, (s32)rd32(c, (RW(2) + 2964))); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 20)));
SET64(2, (s64)(s32)0x540000);
SET64(5, (s32)rd32(c, (RW(2) + 2968)));
SET64(25, (s32)rd32(c, (RW(3) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2ce398); SET32(4, RW(3) + 240); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 20)));
SET64(2, (s64)(s32)0x540000);
SET64(5, (s32)rd32(c, (RW(2) + 2972)));
SET64(25, (s32)rd32(c, (RW(3) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2ce3b4); SET32(4, RW(3) + 480); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 112)));
c->f[21].u = rd32(c, (RW(29) + 20));
rd128(c, (RW(29) + 96) & ~15u, &c->r[20]);
c->f[20].u = rd32(c, (RW(29) + 16));
rd128(c, (RW(29) + 80) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[16]);
SET32(29, RW(29) + 320); return;
}

void JP_F_002CE3E0(Ctx *c) { /* func_002CE3E0 */
ENTER(0x2ce3e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CE468; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12112);
wr32(c, (RW(17) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ce418);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002CE454; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12176);
wr32(c, (RW(17) + 208), RW(2));
SET64(25, (s32)rd32(c, (RW(2) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ce438); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(5, (s64)(s32)0x1f0000);
SET32(4, RW(17) + 48);
SET32(5, RW(5) + 14448);
SET32(6, RW(0) + 80);
SET64(31, 0x2ce450); SET32(7, RW(0) + 2); JP_F_00102360(c);
SET64(2, RD(16) << 48);
L_002CE454:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002CE46C; }
SET64(31, 0x2ce468); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002CE468:;
SET64(2, RD(17) + RD(0));
L_002CE46C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002CE480(Ctx *c) { /* func_002CE480 */
ENTER(0x2ce480);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) != RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002CE4A4; }
SET32(2, RW(0) + 1); goto L_002CE4B0;
L_002CE4A4:;
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2ce4b0);  rt_call(c, t); }
L_002CE4B0:;
SET64(2, RD(2) & 0xff);
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CE51C; }
SET64(4, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ce4d0);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CE518; }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(2) + 448)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ce4ec); SET32(4, RW(2) + 240); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CE518; }
SET64(2, (s32)rd32(c, (RW(16) + 20)));
SET64(25, (s32)rd32(c, (RW(2) + 688)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ce508); SET32(4, RW(2) + 480); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CE518; }
SET32(2, RW(0) + 1); goto L_002CE51C;
L_002CE518:;
SET64(2, RD(0) + RD(0));
L_002CE51C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002CE530(Ctx *c) { /* func_002CE530 */
ENTER(0x2ce530);
SET64(7, (s32)rd32(c, (RW(4) + 20)));
SET64(5, (s64)(s32)0x540000);
SET64(3, (s64)(s32)0x540000);
SET64(6, (s32)rd32(c, (RW(7) + 36)));
SET64(4, (s64)(s32)0x540000);
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(6, (s32)c->f[0].u);
wr32(c, (RW(5) + 2964), RW(6));
SET64(5, (s32)rd32(c, (RW(7) + 276)));
c->f[0].u = rd32(c, (RW(5) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(5, (s32)c->f[0].u);
wr32(c, (RW(4) + 2968), RW(5));
SET64(4, (s32)rd32(c, (RW(7) + 516)));
c->f[0].u = rd32(c, (RW(4) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[0].u);
wr32(c, (RW(3) + 2972), RW(4)); return;
}

void JP_F_002CE590(Ctx *c) { /* func_002CE590 */
ENTER(0x2ce590);
SET32(29, RW(29) + -32);
SET64(5, (s64)(s32)0x2d0000);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 20)));
SET64(31, 0x2ce5b0); SET32(5, RW(5) + -7200); JP_F_001022C0(c);
wr32(c, (RW(16) + 20), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002CE5D0(Ctx *c) { /* func_002CE5D0 */
ENTER(0x2ce5d0);
SET64(5, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(5) == RD(0);  if (t) goto L_002CE5F4; }
SET64(4, rd16(c, (RW(5) + 104)));
SET32(3, RW(0) + 3);
if (RD(4) != RD(3)) { wr8(c, (RW(5) + 167), (u8)RW(0)); goto L_002CE5F4; }
SET32(3, RW(0) + 1);
wr8(c, (RW(5) + 167), (u8)RW(3));
L_002CE5F4:;
 return;
}

void JP_F_002CE600(Ctx *c) { /* func_002CE600 */
ENTER(0x2ce600);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET32(3, RW(0) + 4);
SET64(4, rd16(c, (RW(4) + 172)));
{ int t = RD(4) == RD(3); SET32(2, RW(0) + -1); if (t) goto L_002CE648; }
SET32(3, RW(0) + 3);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 41); goto L_002CE64C; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 40); goto L_002CE64C; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(2, RW(0) + 38); goto L_002CE64C; }
if (RD(4) == RD(0)) { SET32(2, RW(0) + 39); goto L_002CE64C; }
 goto L_002CE64C;
L_002CE648:;
SET32(2, RW(0) + 42);
L_002CE64C:;
 return;
}

void JP_F_002CE660(Ctx *c) { /* func_002CE660 */
ENTER(0x2ce660);
SET32(29, RW(29) + -208);
SET32(2, RW(0) + 24);
wr64(c, (RW(29) + 64), RD(31));
SET32(3, RW(29) + 144);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(3) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CE6A8; }
L_002CE68C:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CE68C; } }
L_002CE6A8:;
SET64(18, rd16(c, (RW(28) + -30220)));
SET64(19, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2ce6bc); SET64(4, RD(19) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2ce6c8); SET64(5, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2ce6d4); SET64(5, RD(18) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ce6e0); SET32(4, RW(29) + 204); JP_F_002C9510(c);
SET32(4, RW(29) + 204);
SET64(31, 0x2ce6ec); SET64(5, RD(0) + RD(0)); JP_F_002C94F0(c);
wr32(c, (RW(29) + 144), RW(2));
SET64(18, rd16(c, (RW(28) + -30220)));
SET64(19, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2ce704); SET64(4, RD(19) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2ce710); SET64(5, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2ce71c); SET64(5, RD(18) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ce728); SET32(4, RW(29) + 200); JP_F_002C9510(c);
SET32(4, RW(29) + 200);
SET64(31, 0x2ce734); SET32(5, RW(0) + 1); JP_F_002C94F0(c);
wr32(c, (RW(29) + 148), RW(2));
SET64(18, rd16(c, (RW(28) + -30220)));
SET64(19, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2ce74c); SET64(4, RD(19) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2ce758); SET64(5, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2ce764); SET64(5, RD(18) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ce770); SET32(4, RW(29) + 196); JP_F_002C9510(c);
SET32(4, RW(29) + 196);
SET64(31, 0x2ce77c); SET32(5, RW(0) + 2); JP_F_002C94F0(c);
wr32(c, (RW(29) + 152), RW(2));
SET64(18, rd16(c, (RW(28) + -30220)));
SET64(19, (s32)rd32(c, (RW(16) + 0)));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2ce794); SET64(4, RD(19) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2ce7a0); SET64(5, RD(18) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2ce7ac); SET64(5, RD(18) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ce7b8); SET32(4, RW(29) + 192); JP_F_002C9510(c);
SET32(4, RW(29) + 192);
SET64(31, 0x2ce7c4); SET32(5, RW(0) + 3); JP_F_002C94F0(c);
wr32(c, (RW(29) + 156), RW(2));
SET64(18, (s32)rd32(c, (RW(16) + 0)));
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(4, RD(18) + RD(0));
SET64(31, 0x2ce7dc); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2ce7e8); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(18) + RD(0));
SET64(31, 0x2ce7f4); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ce800); SET32(4, RW(29) + 188); JP_F_002C9510(c);
SET32(4, RW(29) + 188);
SET64(31, 0x2ce80c); SET32(5, RW(0) + 4); JP_F_002C94F0(c);
wr32(c, (RW(29) + 160), RW(2));
SET64(31, 0x2ce818); SET32(4, RW(0) + 196); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CE858; }
SET64(31, 0x2ce828); SET64(4, RD(16) + RD(0)); JP_F_00228490(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -3136);
SET32(2, RW(2) + -3128);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -3116);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -3056);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002CE858:;
wr32(c, (RW(17) + 4), RW(16));
SET64(16, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2ce868); SET32(4, RW(29) + 80); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 100), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 104), RW(0));
wr32(c, (RW(29) + 96), RW(2));
wr32(c, (RW(29) + 108), RW(0));
wr16(c, (RW(29) + 112), (u16)RW(0));
wr16(c, (RW(29) + 114), (u16)RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 108)));
SET64(31, 0x2ce894); SET64(5, RD(0) + RD(0)); JP_F_002E0CD0(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2ce8a0); SET32(4, RW(29) + 80); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 100)));
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s32)rd32(c, (RW(29) + 104)));
SET32(2, RW(2) + -32);
SET32(4, RW(29) + 80);
SET64(5, (s32)rd32(c, (RW(5) + 124)));
SET32(16, RW(3) + RW(5));
SET64(31, 0x2ce8c4); wr32(c, (RW(29) + 96), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2ce8d0); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(6, RD(16) + RD(0));
SET32(5, RW(29) + 144);
SET32(7, RW(0) + -1);
SET32(8, RW(0) + 1);
SET32(9, RW(0) + 5);
SET64(31, 0x2ce8f0); SET64(10, RD(0) + RD(0)); JP_F_00225E90(c);
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
c->f[0].u = rd32(c, (RW(28) + -31360));
SET64(7, (s32)rd32(c, (RW(17) + 4)));
wr32(c, (RW(7) + 144), c->f[0].u);
wr32(c, (RW(29) + 128), RW(6));
wr32(c, (RW(29) + 132), RW(4));
wr32(c, (RW(29) + 136), RW(3));
wr32(c, (RW(29) + 140), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 128)));
{ u32 t = RW(25); SET64(31, 0x2ce94c); SET32(5, RW(29) + 128); rt_call(c, t); }
SET64(3, (s64)(s32)0x43800000);
SET64(2, (s64)(s32)0x43600000);
wr32(c, (RW(29) + 176), RW(3));
wr32(c, (RW(29) + 180), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 136)));
{ u32 t = RW(25); SET64(31, 0x2ce970); SET32(5, RW(29) + 176); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 4)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 176), (u8)RW(3));
SET64(31, 0x2ce984); SET64(4, (s32)rd32(c, (RW(17) + 4))); JP_F_00226EA0(c);
SET64(31, 0x2ce98c);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002CE9A0; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002CE9A0:;
SET64(31, 0x2ce9a8);  JP_F_0022A3D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2ce9bc);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 124)));
{ u32 t = RW(25); SET64(31, 0x2ce9d0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 208); return;
}

void JP_F_002CE9F0(Ctx *c) { /* func_002CE9F0 */
ENTER(0x2ce9f0);
 return;
}

void JP_F_002CEA00(Ctx *c) { /* func_002CEA00 */
ENTER(0x2cea00);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(2, (s16)rd16(c, (RW(2) + 184))); return;
}

void JP_F_002CEA10(Ctx *c) { /* func_002CEA10 */
ENTER(0x2cea10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(4) + 4)));
if (RD(4) != RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002CEA2C; }
SET32(2, RW(0) + 1); goto L_002CEA38;
L_002CEA2C:;
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2cea38);  rt_call(c, t); }
L_002CEA38:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002CEA50(Ctx *c) { /* func_002CEA50 */
ENTER(0x2cea50);
 return;
}

void JP_F_002CEA60(Ctx *c) { /* func_002CEA60 */
ENTER(0x2cea60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002CEAC4; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12000);
wr32(c, (RW(17) + 16), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { SET64(2, RD(16) << 48); goto L_002CEAA8; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2ceaa4); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(2, RD(16) << 48);
L_002CEAA8:;
wr32(c, (RW(17) + 4), RW(0));
wr32(c, (RW(17) + 8), RW(0));
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(17) + 12), RW(0)); if (t) goto L_002CEAC4; }
SET64(31, 0x2ceac4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002CEAC4:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002CEAE0(Ctx *c) { /* func_002CEAE0 */
ENTER(0x2ceae0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ceb04); c->f[20].u = c->f[12].u; JP_F_002D0040(c);
c->f[0].u = RW(0);
c->fcc = F(20) <= F(0);
{ int t = c->fcc;  if (t) goto L_002CEB78; }
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->fcc = F(20) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002CEB78; }
SET64(18, RD(0) + RD(0));
SET64(17, RD(0) + RD(0));
L_002CEB38:;
SET64(2, (s32)rd32(c, (RW(16) + 224)));
c->f[12].u = c->f[20].u;
SET32(2, RW(2) + RW(17));
SET64(31, 0x2ceb4c); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2ceb64);  rt_call(c, t); }
SET32(18, RW(18) + 1);
SET64(3, RSD(18) < (s64)2);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002CEB38; } }
L_002CEB78:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002CEBA0(Ctx *c) { /* func_002CEBA0 */
ENTER(0x2ceba0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2cebb4); SET64(16, RD(4) + RD(0)); JP_F_002D0360(c);
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

void JP_F_002CEBF0(Ctx *c) { /* func_002CEBF0 */
ENTER(0x2cebf0);
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
SET64(31, 0x2cec4c); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_002D0470(c);
SET64(31, 0x2cec54); SET32(4, RW(0) + 784); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002CEC80; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(19) + RD(0));
SET32(5, RW(5) + -6640);
SET32(6, RW(6) + -7024);
SET32(7, RW(0) + 384);
SET64(31, 0x2cec7c); SET32(8, RW(0) + 2); JP_F_00102580(c);
SET64(19, RD(2) + RD(0));
L_002CEC80:;
wr32(c, (RW(18) + 224), RW(19));
SET64(4, (s32)rd32(c, (RW(17) + 0)));
c->f[1].u = rd32(c, (RW(28) + -31344));
c->f[0].u = rd32(c, (RW(28) + -31340));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
wr32(c, (RW(29) + 168), c->f[1].u);
SET64(25, (s32)rd32(c, (RW(25) + 140)));
{ u32 t = RW(25); SET64(31, 0x2ceca4); wr32(c, (RW(29) + 172), c->f[0].u); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2cecb8); c->f[20].u = rd32(c, (RW(2) + 0)); rt_call(c, t); }
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
L_002CED04:;
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(4, RW(2) + RW(20));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ced1c);  rt_call(c, t); }
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
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002CED58; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002CED70;
L_002CED58:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002CED70:;
SET64(3, (s64)(s32)0x3f800000);
SET64(2, rd16(c, (RW(4) + 54)));
c->f[0].u = RW(3);
{ int t = RSD(2) < 0; c->f[20].f = fpu(F(1) - F(0)); if (t) goto L_002CED90; }
c->f[0].u = RW(2);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002CEDAC;
L_002CED90:;
SET32(3, RW(2) >> 1);
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002CEDAC:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s64)(s32)0x3f800000);
c->f[0].u = RW(2);
SET64(2, (s32)rd32(c, (RW(4) + 140)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET32(2, RW(2) + RW(22));
c->f[22].u = rd32(c, (RW(2) + 168));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
c->f[21].u = rd32(c, (RW(2) + 36));
{ u32 t = RW(25); SET64(31, 0x2cedd8); c->f[23].f = fpu(F(1) - F(0)); rt_call(c, t); }
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
SET64(31, 0x2cee18); SET32(4, RW(2) + RW(20)); JP_F_0014E980(c);
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
SET64(31, 0x2cee74); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET64(31, 0x2cee80); SET32(4, RW(2) + RW(20)); JP_F_0014EB10(c);
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(4, RW(2) + RW(20));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cee98);  rt_call(c, t); }
SET32(21, RW(21) + 1);
SET32(20, RW(20) + 384);
SET64(2, RSD(21) < (s64)2);
{ int t = RD(2) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_002CED04; } }
SET64(3, (s32)rd32(c, (RW(18) + 224)));
SET64(2, (s64)(s32)0x41200000);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(3) + 424));
SET32(4, RW(3) + 384);
SET64(31, 0x2ceec8); c->f[12].f = fpu(F(0) + F(1)); JP_F_0014E9B0(c);
SET64(4, (s32)rd32(c, (RW(18) + 224)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2ceedc);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2ceef0); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(3, rd16(c, (RW(3) + 1972)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_002CEF0C; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002CEF24;
L_002CEF0C:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002CEF24:;
SET64(3, (s64)(s32)0x40000000);
wr32(c, (RW(18) + 12), c->f[0].u);
c->f[3].u = RW(3);
SET64(4, (s32)rd32(c, (RW(18) + 32)));
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

void JP_F_002CEFC0(Ctx *c) { /* func_002CEFC0 */
ENTER(0x2cefc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(4) + 32)));
c->f[1].u = rd32(c, (RW(2) + 32));
c->f[0].u = rd32(c, (RW(2) + 36));
c->f[21].f = fpu(F(1) - F(12));
SET64(31, 0x2ceff0); c->f[20].f = fpu(F(0) - F(13)); JP_F_002D0A00(c);
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
{ u32 t = RW(25); SET64(31, 0x2cf030); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 224)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cf044);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cf058); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void JP_F_002CF070(Ctx *c) { /* func_002CF070 */
ENTER(0x2cf070);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x3f8f0000);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, RD(2) | 0x5c29);
SET64(6, (s32)rd32(c, (RW(4) + 224)));
SET64(2, (s64)(s32)0x40c00000);
SET64(5, (s32)rd32(c, (RW(4) + 36)));
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
{ u32 t = RW(25); SET64(31, 0x2cf0c8); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002CF0E0(Ctx *c) { /* func_002CF0E0 */
ENTER(0x2cf0e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 32)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cf104);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cf118); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 224)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cf12c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cf140); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002CF150(Ctx *c) { /* func_002CF150 */
ENTER(0x2cf150);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 224)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cf174);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2cf188); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002CF1A0(Ctx *c) { /* func_002CF1A0 */
ENTER(0x2cf1a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 32)));
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cf1c8);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CF1FC; }
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cf1e8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CF1F8; }
SET64(2, RD(0) + (s64)1); goto L_002CF1FC;
L_002CF1F8:;
SET64(2, RD(0) + RD(0));
L_002CF1FC:;
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CF250; }
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cf21c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CF24C; }
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cf23c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CF24C; }
SET32(2, RW(0) + 1); goto L_002CF250;
L_002CF24C:;
SET64(2, RD(0) + RD(0));
L_002CF250:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002CF260(Ctx *c) { /* func_002CF260 */
ENTER(0x2cf260);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2cf278); SET64(4, (s32)rd32(c, (RW(4) + 36))); JP_F_001004B0(c);
wr32(c, (RW(16) + 36), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 32)));
SET64(31, 0x2cf28c); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(16) + 32), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 224)));
SET64(31, 0x2cf2a0); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(16) + 224), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002CF2C0(Ctx *c) { /* func_002CF2C0 */
ENTER(0x2cf2c0);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET64(5, (s64)(s32)0x1f0000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(3) + 12176);
wr32(c, (RW(4) + 208), RW(3));
SET64(6, (s64)(s32)0x1f0000);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(4) + 0), (u8)RW(0));
wr32(c, (RW(4) + 4), RW(2));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(2));
SET32(5, RW(5) + 14528);
wr32(c, (RW(4) + 24), RW(0));
SET32(6, RW(6) + 14448);
wr32(c, (RW(4) + 32), RW(0));
SET32(7, RW(0) + 80);
wr32(c, (RW(4) + 36), RW(0));
SET32(8, RW(0) + 2);
SET64(31, 0x2cf318); SET32(4, RW(16) + 48); JP_F_001023D0(c);
c->f[0].u = RW(0);
SET64(3, (s64)(s32)0x4e0000);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(16) + 28), RW(0));
SET32(3, RW(3) + 12048);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 12), c->f[0].u);
wr32(c, (RW(16) + 8), c->f[0].u);
wr32(c, (RW(16) + 208), RW(3));
wr32(c, (RW(16) + 224), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002CF350(Ctx *c) { /* func_002CF350 */
ENTER(0x2cf350);
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
SET64(31, 0x2cf380); c->f[20].u = c->f[12].u; JP_F_002D0040(c);
c->f[0].u = RW(0);
c->fcc = F(20) <= F(0);
if (c->fcc) { SET64(3, (s32)rd32(c, (RW(19) + 232))); goto L_002CF420; }
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->fcc = F(20) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002CF41C; }
SET64(3, (s32)rd32(c, (RW(19) + 232)));
{ int t = RD(3) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002CF400; }
SET64(17, RD(0) + RD(0));
L_002CF3BC:;
SET64(2, (s32)rd32(c, (RW(19) + 224)));
c->f[12].u = c->f[20].u;
SET32(2, RW(2) + RW(17));
SET64(31, 0x2cf3d0); SET32(4, RW(2) + 208); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(19) + 224)));
SET32(2, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cf3e8); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 232)));
SET32(18, RW(18) + 1);
SET64(3, RD(18) < RD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 848); if (t) { POLL(); goto L_002CF3BC; } }
L_002CF400:;
SET64(4, (s32)rd32(c, (RW(19) + 228)));
{ int t = RD(4) == RD(0);  if (t) goto L_002CF41C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 152)));
{ u32 t = RW(25); SET64(31, 0x2cf41c); c->f[12].u = c->f[20].u; rt_call(c, t); }
L_002CF41C:;
SET64(3, (s32)rd32(c, (RW(19) + 232)));
L_002CF420:;
{ int t = RD(3) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002CF4A0; }
SET64(3, (s32)rd32(c, (RW(19) + 36)));
L_002CF42C:;
SET64(2, (s64)(s32)0x4f000000);
c->f[0].u = RW(2);
c->f[1].u = rd32(c, (RW(3) + 0));
c->fcc = F(0) <= F(1);
if (c->fcc) { c->f[0].f = fpu(F(1) - F(0)); goto L_002CF454; }
c->f[0].u = (u32)fpu_cvtw(F(1));
SET64(4, (s32)c->f[0].u);
SET32(3, RW(0) + 848); goto L_002CF46C;
L_002CF454:;
SET64(2, (s64)(s32)0x80000000);
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(4, (s32)c->f[0].u);
SET64(4, RD(4) | RD(2));
SET32(3, RW(0) + 848);
L_002CF46C:;
SET64(2, (s32)rd32(c, (RW(19) + 224)));
mul_s(c, 0, 3, RSW(4), RSW(3));
SET32(4, RW(2) + RW(3));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2cf488);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 232)));
SET32(17, RW(17) + 1);
SET64(3, RD(17) < RD(3));
if (RD(3) != RD(0)) { SET64(3, (s32)rd32(c, (RW(19) + 36))); { POLL(); goto L_002CF42C; } }
L_002CF4A0:;
SET64(4, (s32)rd32(c, (RW(19) + 228)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 80))); goto L_002CF590; }
SET64(5, rd8(c, (RW(19) + 0)));
SET64(3, RD(16) & 0xff);
if (RD(3) == RD(5)) { SET64(3, (s32)rd32(c, (RW(19) + 228))); goto L_002CF508; }
if (RD(5) == RD(0)) { SET64(25, (s32)rd32(c, (RW(4) + 56))); goto L_002CF4F8; }
SET64(31, 0x2cf4cc);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(19) + 228))); goto L_002CF4E0; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(19) + 228)));
L_002CF4E0:;
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 112)));
{ u32 t = RW(25); SET64(31, 0x2cf4f0);  rt_call(c, t); }
 goto L_002CF504;
L_002CF4F8:;
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x2cf504);  rt_call(c, t); }
L_002CF504:;
SET64(3, (s32)rd32(c, (RW(19) + 228)));
L_002CF508:;
{ int t = RD(3) == RD(0);  if (t) goto L_002CF58C; }
SET64(2, (s32)rd32(c, (RW(19) + 32)));
c->f[21].u = rd32(c, (RW(2) + 32));
c->f[20].u = rd32(c, (RW(2) + 416));
SET64(31, 0x2cf524); SET64(4, (s32)rd32(c, (RW(19) + 224))); JP_F_00144C50(c);
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
{ u32 t = RW(25); SET64(31, 0x2cf58c); SET32(5, RW(29) + 96); rt_call(c, t); }
L_002CF58C:;
SET64(31, rd64(c, (RW(29) + 80)));
L_002CF590:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002CF5B0(Ctx *c) { /* func_002CF5B0 */
ENTER(0x2cf5b0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2cf5c0);  JP_F_002D0360(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002CF5D0(Ctx *c) { /* func_002CF5D0 */
ENTER(0x2cf5d0);
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
{ int t = RD(2) == RD(3); SET64(16, RD(7) + RD(0)); if (t) goto L_002CF650; }
SET64(4, RD(19) + RD(0));
L_002CF634:;
SET32(4, RW(4) + 4);
SET32(18, RW(18) + 1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
{ int t = RD(2) != RD(3);  if (t) { POLL(); goto L_002CF634; } }
L_002CF650:;
SET64(8, RD(9) + RD(0));
SET64(9, rd8(c, (RW(29) + 304)));
SET64(4, RD(20) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(7, RD(16) + RD(0));
SET64(31, 0x2cf670); wr32(c, (RW(20) + 232), RW(18)); JP_F_002D0470(c);
SET32(2, RW(0) + 848);
SET64(23, RD(0) + RD(0));
mul_s(c, 0, 2, RSW(18), RSW(2));
SET64(31, 0x2cf684); SET32(4, RW(2) + 16); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(21, RD(2) + RD(0)); if (t) goto L_002CF6B4; }
SET64(5, (s64)(s32)0x140000);
SET64(6, (s64)(s32)0x140000);
SET32(23, RW(0) + 1);
SET64(4, RD(21) + RD(0));
SET32(5, RW(5) + 13408);
SET32(6, RW(6) + 13072);
SET32(7, RW(0) + 848);
SET64(31, 0x2cf6b0); SET64(8, RD(18) + RD(0)); JP_F_00102580(c);
SET64(21, RD(2) + RD(0));
L_002CF6B4:;
SET64(3, RD(17) & 0xffff);
wr32(c, (RW(20) + 224), RW(21));
SET32(2, RW(3) << 5);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET32(2, RW(2) + RW(3));
SET64(17, (s32)rd32(c, (RW(30) + 0)));
SET32(3, RW(2) << 4);
SET32(4, RW(29) + 192);
SET64(2, (s64)(s32)0x457a0000);
SET64(16, rd16(c, (RW(28) + -30220)));
wr32(c, (RW(29) + 280), RW(2));
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 272), RW(0));
wr32(c, (RW(29) + 284), RW(2));
SET64(2, (s32)rd32(c, (RW(5) + 140)));
SET32(2, RW(2) + RW(3));
c->f[0].u = rd32(c, (RW(2) + 36));
SET64(31, 0x2cf700); wr32(c, (RW(29) + 276), c->f[0].u); JP_F_00158180(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(29) + 212), RW(0));
SET32(2, RW(2) + -32);
wr32(c, (RW(29) + 216), RW(0));
wr32(c, (RW(29) + 208), RW(2));
wr32(c, (RW(29) + 220), RW(0));
wr16(c, (RW(29) + 224), (u16)RW(0));
wr16(c, (RW(29) + 226), (u16)RW(0));
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2cf72c); SET32(4, RW(29) + 192); JP_F_00157540(c);
SET64(5, (s32)rd32(c, (RW(29) + 212)));
SET64(2, RD(16) & 0xffff);
SET32(6, RW(2) << 2);
SET64(3, (s32)rd32(c, (RW(29) + 216)));
SET64(2, (s64)(s32)0x4d0000);
SET32(4, RW(29) + 192);
SET32(5, RW(5) + RW(6));
SET32(2, RW(2) + -32);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(21, RW(3) + RW(5));
SET64(31, 0x2cf75c); wr32(c, (RW(29) + 208), RW(2)); JP_F_00157620(c);
SET32(4, RW(29) + 192);
SET64(31, 0x2cf768); SET64(5, RD(0) + RD(0)); JP_F_00158110(c);
{ int t = RSD(18) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_002CF898; }
SET64(16, RD(0) + RD(0));
L_002CF774:;
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
SET64(31, 0x2cf7c4); SET32(4, RW(2) + RW(16)); JP_F_00144F20(c);
SET64(2, (s32)rd32(c, (RW(20) + 224)));
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(16));
SET64(31, 0x2cf7d8); SET32(4, RW(2) + 208); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET32(2, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cf7f0); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET32(6, RW(0) + 1);
SET64(5, rd16(c, (RW(19) + 0)));
SET64(31, 0x2cf804); SET32(4, RW(2) + RW(16)); JP_F_00144C60(c);
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET64(31, 0x2cf810); SET32(4, RW(2) + RW(16)); JP_F_001432E0(c);
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 184)));
{ u32 t = RW(25); SET64(31, 0x2cf828);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET64(31, 0x2cf834); SET32(4, RW(2) + RW(16)); JP_F_00144C50(c);
SET64(3, (s64)(s32)0x40000000);
SET64(2, (s64)(s32)0x41000000);
c->f[1].u = RW(3);
c->f[1].f = fpu(F(1) * F(0));
c->f[0].u = RW(2);
c->f[1].f = fpu(F(0) + F(1));
c->f[0].u = rd32(c, (RW(20) + 12));
c->fcc = F(1) <= F(0);
{ int t = c->fcc;  if (t) goto L_002CF868; }
wr32(c, (RW(20) + 12), c->f[1].u);
L_002CF868:;
SET64(2, (s32)rd32(c, (RW(20) + 224)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2cf880);  rt_call(c, t); }
SET32(17, RW(17) + 1);
SET32(16, RW(16) + 848);
SET64(3, RSD(17) < RSD(18));
{ int t = RD(3) != RD(0); SET32(19, RW(19) + 4); if (t) { POLL(); goto L_002CF774; } }
L_002CF898:;
SET64(5, (s32)rd32(c, (RW(20) + 224)));
SET64(3, (s64)(s32)0x41800000);
SET64(6, (s32)rd32(c, (RW(20) + 32)));
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
SET64(3, (s32)rd32(c, (RW(20) + 36)));
{ int t = RD(22) == RD(0); wr8(c, (RW(3) + 12), (u8)RW(4)); if (t) goto L_002CFA84; }
SET64(31, 0x2cf8ec); SET32(4, RW(0) + 196); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002CF92C; }
SET64(31, 0x2cf8fc); SET64(4, RD(16) + RD(0)); JP_F_00228490(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -3136);
SET32(2, RW(2) + -3128);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + -3116);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -3056);
wr32(c, (RW(16) + 36), RW(3));
wr32(c, (RW(16) + 72), RW(2));
L_002CF92C:;
SET32(3, RW(29) + 288);
wr32(c, (RW(20) + 228), RW(16));
{ int t = RD(3) == RD(0); SET32(2, RW(0) + 8); if (t) goto L_002CF958; }
L_002CF93C:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002CF93C; } }
L_002CF958:;
SET64(17, (s32)rd32(c, (RW(30) + 0)));
SET64(16, rd16(c, (RW(28) + -30220)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2cf96c); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2cf978); SET64(5, RD(16) + RD(0)); JP_F_002C95C0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2cf984); SET64(5, RD(16) + RD(0)); JP_F_002C9520(c);
SET64(5, RD(2) + RD(0));
SET64(31, 0x2cf990); SET32(4, RW(29) + 300); JP_F_002C9510(c);
SET32(4, RW(29) + 300);
SET64(31, 0x2cf99c); SET32(5, RW(0) + 56); JP_F_002C94F0(c);
wr32(c, (RW(29) + 288), RW(2));
SET32(6, RW(0) + 1);
SET64(4, (s32)rd32(c, (RW(20) + 228)));
SET32(5, RW(29) + 288);
SET64(7, RD(0) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(9, RD(6) + RD(0));
SET64(31, 0x2cf9c0); SET64(10, RD(0) + RD(0)); JP_F_00225FC0(c);
SET64(2, (s32)rd32(c, (RW(20) + 228)));
SET64(31, 0x2cf9cc); wr8(c, (RW(2) + 167), (u8)RW(0)); JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(20) + 228))); goto L_002CF9E0; }
SET32(5, RW(5) + 672);
SET64(4, (s32)rd32(c, (RW(20) + 228)));
L_002CF9E0:;
SET64(31, 0x2cf9e8);  JP_F_0022A3D0(c);
SET64(4, (s32)rd32(c, (RW(20) + 228)));
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x2cf9fc);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(20) + 228)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 160))); goto L_002CFA88; }
SET64(2, (s32)rd32(c, (RW(20) + 32)));
c->f[21].u = rd32(c, (RW(2) + 32));
c->f[20].u = rd32(c, (RW(2) + 416));
SET64(31, 0x2cfa1c); SET64(4, (s32)rd32(c, (RW(20) + 224))); JP_F_00144C50(c);
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
{ u32 t = RW(25); SET64(31, 0x2cfa84); SET32(5, RW(29) + 176); rt_call(c, t); }
L_002CFA84:;
SET64(31, rd64(c, (RW(29) + 160)));
L_002CFA88:;
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

void JP_F_002CFAC0(Ctx *c) { /* func_002CFAC0 */
ENTER(0x2cfac0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(31, 0x2cfae4); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_002D0A00(c);
SET64(3, (s32)rd32(c, (RW(18) + 232)));
{ int t = RD(3) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002CFB30; }
SET64(16, RD(0) + RD(0));
L_002CFAF4:;
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(2, RW(2) + RW(16));
c->f[0].u = rd32(c, (RW(2) + 52));
wr32(c, (RW(2) + 52), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 224)));
SET32(2, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cfb1c); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 232)));
SET32(17, RW(17) + 1);
SET64(3, RD(17) < RD(3));
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 848); if (t) { POLL(); goto L_002CFAF4; } }
L_002CFB30:;
SET64(3, (s32)rd32(c, (RW(18) + 228)));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 64))); goto L_002CFBBC; }
SET64(2, (s32)rd32(c, (RW(18) + 32)));
c->f[21].u = rd32(c, (RW(2) + 32));
c->f[20].u = rd32(c, (RW(2) + 416));
SET64(31, 0x2cfb50); SET64(4, (s32)rd32(c, (RW(18) + 224))); JP_F_00144C50(c);
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
{ u32 t = RW(25); SET64(31, 0x2cfbb8); SET32(5, RW(29) + 80); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
L_002CFBBC:;
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002CFBE0(Ctx *c) { /* func_002CFBE0 */
ENTER(0x2cfbe0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(4) + 232)));
{ int t = RD(2) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002CFC38; }
SET64(18, RD(0) + RD(0));
L_002CFC0C:;
SET64(2, (s32)rd32(c, (RW(17) + 224)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2cfc24);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(17) + 232)));
SET32(16, RW(16) + 1);
SET64(2, RD(16) < RD(2));
{ int t = RD(2) != RD(0); SET32(18, RW(18) + 848); if (t) { POLL(); goto L_002CFC0C; } }
L_002CFC38:;
SET64(2, (s32)rd32(c, (RW(17) + 36)));
c->f[0].u = rd32(c, (RW(2) + 0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(16, (s32)c->f[0].u);
SET64(31, 0x2cfc50);  JP_F_00139590(c);
SET64(5, (s32)rd32(c, (RW(2) + 8)));
if (RD(5) == RD(0)) { SET32(3, RW(0) + 848); goto L_002CFC64; }
SET32(5, RW(5) + 672);
SET32(3, RW(0) + 848);
L_002CFC64:;
SET64(2, (s32)rd32(c, (RW(17) + 224)));
mul_s(c, 0, 16, RSW(16), RSW(3));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 172)));
{ u32 t = RW(25); SET64(31, 0x2cfc80);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(17) + 224)));
SET64(2, (s64)(s32)0x40000000);
c->f[2].u = RW(2);
SET64(2, rd8(c, (RW(17) + 236)));
SET32(4, RW(3) + RW(16));
c->f[1].u = rd32(c, (RW(4) + 464));
c->f[0].u = rd32(c, (RW(4) + 468));
c->f[0].f = fpu(F(1) + F(0));
{ int t = RD(2) == RD(0); c->f[20].f = fpu(F(2) * F(0)); if (t) goto L_002CFCE0; }
SET64(31, 0x2cfcb0);  JP_F_00144C50(c);
SET64(3, (s64)(s32)0x40000000);
SET64(2, (s32)rd32(c, (RW(17) + 224)));
c->f[1].u = RW(3);
c->f[0].f = fpu(F(1) * F(0));
SET32(2, RW(2) + RW(16));
c->f[0].f = fpu(F(20) + F(0));
c->f[0].f = fpu_div(F(0), F(1));
c->f[1].u = rd32(c, (RW(17) + 8));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(2) + 48), c->f[0].u); goto L_002CFCF8;
L_002CFCE0:;
c->f[1].u = rd32(c, (RW(17) + 12));
c->f[0].u = rd32(c, (RW(17) + 8));
c->f[1].f = fpu(F(20) + F(1));
c->f[1].f = fpu_div(F(1), F(2));
c->f[0].f = fpu(F(0) - F(1));
wr32(c, (RW(4) + 48), c->f[0].u);
L_002CFCF8:;
SET64(2, (s32)rd32(c, (RW(17) + 224)));
SET32(2, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2cfd10); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002CFD30(Ctx *c) { /* func_002CFD30 */
ENTER(0x2cfd30);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 32)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cfd5c);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cfd70); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 232)));
{ int t = RD(3) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002CFDB0; }
SET64(17, RD(0) + RD(0));
L_002CFD80:;
SET64(2, (s32)rd32(c, (RW(16) + 224)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 768)));
SET64(25, (s32)rd32(c, (RW(25) + 176)));
{ u32 t = RW(25); SET64(31, 0x2cfd98);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(16) + 232)));
SET32(18, RW(18) + 1);
SET64(3, RD(18) < RD(3));
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 848); if (t) { POLL(); goto L_002CFD80; } }
L_002CFDB0:;
SET64(4, (s32)rd32(c, (RW(16) + 228)));
if (RD(4) == RD(0)) { SET64(31, rd64(c, (RW(29) + 48))); goto L_002CFDD0; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 116)));
{ u32 t = RW(25); SET64(31, 0x2cfdcc);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 48)));
L_002CFDD0:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002CFDF0(Ctx *c) { /* func_002CFDF0 */
ENTER(0x2cfdf0);
 return;
}

void JP_F_002CFE00(Ctx *c) { /* func_002CFE00 */
ENTER(0x2cfe00);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(0) + (s64)1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 232)));
{ int t = RD(2) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002CFE70; }
SET64(16, RD(0) + RD(0));
L_002CFE30:;
SET64(2, (s32)rd32(c, (RW(19) + 224)));
SET32(2, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(2) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 132)));
{ u32 t = RW(25); SET64(31, 0x2cfe48); SET32(4, RW(2) + 16); rt_call(c, t); }
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, (s32)rd32(c, (RW(19) + 232))); goto L_002CFE5C; }
SET64(18, RD(0) + RD(0)); goto L_002CFE70;
L_002CFE5C:;
SET32(17, RW(17) + 1);
SET64(2, RD(17) < RD(2));
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 848); if (t) { POLL(); goto L_002CFE30; } }
L_002CFE70:;
SET64(2, (s32)rd32(c, (RW(19) + 32)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cfe88);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CFEBC; }
SET64(2, (s32)rd32(c, (RW(19) + 32)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2cfea8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CFEB8; }
SET64(2, RD(0) + (s64)1); goto L_002CFEBC;
L_002CFEB8:;
SET64(2, RD(0) + RD(0));
L_002CFEBC:;
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002CFF00; }
{ int t = RD(18) == RD(0);  if (t) goto L_002CFEFC; }
SET64(4, (s32)rd32(c, (RW(19) + 228)));
if (RD(4) == RD(0)) { SET32(2, RW(0) + 1); goto L_002CFF00; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 120)));
{ u32 t = RW(25); SET64(31, 0x2cfee8);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002CFEFC; }
SET32(2, RW(0) + 1);
 goto L_002CFF00;
L_002CFEFC:;
SET64(2, RD(0) + RD(0));
L_002CFF00:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002CFF20(Ctx *c) { /* func_002CFF20 */
ENTER(0x2cff20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2cff38); SET64(4, (s32)rd32(c, (RW(4) + 36))); JP_F_001004B0(c);
wr32(c, (RW(16) + 36), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 32)));
SET64(31, 0x2cff4c); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(16) + 32), RW(0));
SET64(5, (s64)(s32)0x140000);
SET64(4, (s32)rd32(c, (RW(16) + 224)));
SET64(31, 0x2cff60); SET32(5, RW(5) + 13072); JP_F_001022C0(c);
wr32(c, (RW(16) + 224), RW(0));
SET64(4, (s32)rd32(c, (RW(16) + 228)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 228), RW(0)); goto L_002CFF84; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2cff80); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 228), RW(0));
L_002CFF84:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void JP_B_002CFFA0(Ctx *c, u32 entry) { /* func_002CFFA0 */
ENTER(entry);
switch (entry) { case 0x2d0008: goto L_002D0008; case 0x2d0014: goto L_002D0014; case 0x2d0018: goto L_002D0018; case 0x2d001c: goto L_002D001C; case 0x2d0020: goto L_002D0020; case 0x2d002c: goto L_002D002C; case 0x2d0030: goto L_002D0030; }
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET64(5, (s64)(s32)0x1f0000);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(3) + 12176);
wr32(c, (RW(4) + 208), RW(3));
SET64(6, (s64)(s32)0x1f0000);
SET64(2, (s64)(s32)0x3f800000);
wr8(c, (RW(4) + 0), (u8)RW(0));
wr32(c, (RW(4) + 4), RW(2));
SET64(16, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(2));
SET32(5, RW(5) + 14528);
wr32(c, (RW(4) + 24), RW(0));
SET32(6, RW(6) + 14448);
wr32(c, (RW(4) + 32), RW(0));
SET32(7, RW(0) + 80);
wr32(c, (RW(4) + 36), RW(0));
SET32(8, RW(0) + 2);
SET64(31, 0x2cfff8); SET32(4, RW(16) + 48); JP_F_001023D0(c);
c->f[0].u = RW(0);
SET64(4, (s64)(s32)0x4e0000);
c->f[0].f = (f32)(s32)c->f[0].u;
wr32(c, (RW(16) + 28), RW(0));
L_002D0008:;
SET32(4, RW(4) + 12112);
SET32(3, RW(0) + 1);
SET64(2, RD(16) + RD(0));
L_002D0014:;
wr32(c, (RW(16) + 12), c->f[0].u);
L_002D0018:;
wr32(c, (RW(16) + 8), c->f[0].u);
L_002D001C:;
wr32(c, (RW(16) + 208), RW(4));
L_002D0020:;
wr32(c, (RW(16) + 224), RW(0));
wr32(c, (RW(16) + 228), RW(0));
wr32(c, (RW(16) + 232), RW(0));
L_002D002C:;
wr8(c, (RW(16) + 236), (u8)RW(3));
L_002D0030:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}
void JP_F_002CFFA0(Ctx *c) { JP_B_002CFFA0(c, 0x2cffa0); }
void JP_F_002D0008(Ctx *c) { JP_B_002CFFA0(c, 0x2d0008); }
void JP_F_002D0014(Ctx *c) { JP_B_002CFFA0(c, 0x2d0014); }
void JP_F_002D0018(Ctx *c) { JP_B_002CFFA0(c, 0x2d0018); }
void JP_F_002D001C(Ctx *c) { JP_B_002CFFA0(c, 0x2d001c); }
void JP_F_002D0020(Ctx *c) { JP_B_002CFFA0(c, 0x2d0020); }
void JP_F_002D002C(Ctx *c) { JP_B_002CFFA0(c, 0x2d002c); }
void JP_F_002D0030(Ctx *c) { JP_B_002CFFA0(c, 0x2d0030); }

static void JP_B_002D0040(Ctx *c, u32 entry) { /* func_002D0040 */
ENTER(entry);
switch (entry) { case 0x2d0048: goto L_002D0048; case 0x2d0054: goto L_002D0054; case 0x2d0058: goto L_002D0058; case 0x2d006c: goto L_002D006C; }
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
L_002D0048:;
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(6) + RD(0));
L_002D0054:;
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
L_002D0058:;
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(0) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(20) + RD(0));
L_002D006C:;
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(0) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(4) + 28)));
c->f[20].u = c->f[12].u;
SET64(16, RD(2) ^ RD(5));
SET64(16, RD(16) < (u64)(s64)1);
L_002D0088:;
c->f[1].u = rd32(c, (RW(18) + 96));
c->f[0].u = rd32(c, (RW(28) + -31368));
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_002D00A0; }
wr32(c, (RW(18) + 96), RW(0));
L_002D00A0:;
SET64(2, (s32)rd32(c, (RW(20) + 32)));
c->f[0].u = rd32(c, (RW(18) + 64));
SET32(2, RW(2) + RW(17));
wr32(c, (RW(2) + 32), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(20) + 32)));
SET32(4, RW(2) + RW(17));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d00c8);  rt_call(c, t); }
{ int t = RD(16) == RD(0);  if (t) goto L_002D00F0; }
SET64(3, rd8(c, (RW(20) + 1)));
{ int t = RD(3) == RD(0);  if (t) goto L_002D00F0; }
SET64(2, (s64)(s32)0x530000);
c->f[12].u = rd32(c, (RW(2) + -22384));
SET64(31, 0x2d00ec); SET32(4, RW(18) + 48); JP_F_001F38F0(c);
L_002D00F0:;
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < (s64)2);
SET32(18, RW(18) + 80);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 384); if (t) { POLL(); goto L_002D0088; } }
SET64(4, rd8(c, (RW(20) + 0)));
SET64(3, RD(16) & 0xff);
{ int t = RD(4) == RD(3);  if (t) goto L_002D01A0; }
wr8(c, (RW(20) + 0), (u8)RW(16));
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
SET64(17, RD(20) + RD(0));
L_002D0124:;
{ int t = RD(16) == RD(0);  if (t) goto L_002D0158; }
SET64(2, rd8(c, (RW(20) + 1)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D0158; }
SET64(2, (s32)rd32(c, (RW(20) + 32)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2d0150);  rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0)); goto L_002D0188;
L_002D0158:;
SET64(2, (s32)rd32(c, (RW(20) + 32)));
SET32(4, RW(2) + RW(18));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d0170);  rt_call(c, t); }
wr32(c, (RW(17) + 96), RW(0));
SET32(5, RW(17) + 64);
SET64(2, (s32)rd32(c, (RW(20) + 32)));
SET64(31, 0x2d0184); SET32(4, RW(2) + RW(18)); JP_F_0014E980(c);
L_002D0188:;
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < (s64)2);
SET32(18, RW(18) + 384);
{ int t = RD(3) != RD(0); SET32(17, RW(17) + 80); if (t) { POLL(); goto L_002D0124; } }
L_002D01A0:;
SET64(3, (s32)rd32(c, (RW(20) + 24)));
SET32(3, RW(3) + 1);
{ int t = RD(16) == RD(0); wr32(c, (RW(20) + 24), RW(3)); if (t) goto L_002D02C4; }
SET64(4, RD(21) & 0xffff);
SET64(3, RD(4) & 0x20);
{ int t = RD(3) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002D01D8; }
SET64(25, (s32)rd32(c, (RW(20) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2d01d0); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(5, RD(0) + (s64)1); goto L_002D01F8;
L_002D01D8:;
SET64(3, RD(4) & 0x80);
if (RD(3) == RD(0)) { SET64(3, (s32)rd32(c, (RW(20) + 36))); goto L_002D01FC; }
SET64(25, (s32)rd32(c, (RW(20) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d01f4); SET64(4, RD(20) + RD(0)); rt_call(c, t); }
SET64(5, RD(0) + (s64)1);
L_002D01F8:;
SET64(3, (s32)rd32(c, (RW(20) + 36)));
L_002D01FC:;
c->f[1].u = rd32(c, (RW(3) + 8));
c->f[0].u = rd32(c, (RW(3) + 4));
c->f[0].f = fpu(F(1) - F(0));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(3, (s32)c->f[0].u);
{ int t = RD(5) == RD(0);  if (t) goto L_002D02C4; }
{ int t = RD(3) == RD(0);  if (t) goto L_002D02C4; }
SET64(3, (s32)rd32(c, (RW(20) + 24)));
SET64(1, RD(3) < (u64)(s64)3);
{ int t = RD(1) != RD(0);  if (t) goto L_002D02C4; }
wr32(c, (RW(20) + 24), RW(0));
SET64(5, (s32)rd32(c, (RW(20) + 36)));
SET64(3, rd8(c, (RW(5) + 12)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_002D0250; }
c->f[0].u = RW(3);
c->f[1].f = (f32)(s32)c->f[0].u; goto L_002D0268;
L_002D0250:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[1].f = (f32)(s32)c->f[0].u;
c->f[1].f = fpu(F(1) + F(1));
L_002D0268:;
c->f[0].u = RW(0);
c->fcc = F(1) == F(0);
{ int t = !c->fcc;  if (t) goto L_002D02A0; }
c->f[1].u = rd32(c, (RW(5) + 0));
c->f[0].u = rd32(c, (RW(5) + 8));
c->fcc = F(1) == F(0);
{ int t = c->fcc;  if (t) goto L_002D02C4; }
c->f[0].u = rd32(c, (RW(5) + 4));
c->fcc = F(1) == F(0);
{ int t = c->fcc;  if (t) goto L_002D02C4; }
L_002D02A0:;
SET64(31, 0x2d02a8);  JP_F_00139590(c);
SET64(31, 0x2d02b0);  JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(2) + 16)));
SET32(5, RW(0) + 1);
SET32(6, RW(0) + 127);
SET64(31, 0x2d02c4); SET32(7, RW(0) + 64); JP_F_001B7420(c);
L_002D02C4:;
c->f[0].u = RW(0);
c->fcc = F(20) <= F(0);
if (c->fcc) { SET64(31, rd64(c, (RW(29) + 112))); goto L_002D033C; }
SET64(3, (s64)(s32)0x3f800000);
c->f[0].u = RW(3);
c->fcc = F(20) < F(0);
{ int t = !c->fcc;  if (t) goto L_002D0338; }
SET64(2, (s32)rd32(c, (RW(20) + 32)));
c->f[12].u = c->f[20].u;
SET64(31, 0x2d0300); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(4, (s32)rd32(c, (RW(20) + 32)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d0314);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 32)));
c->f[12].u = c->f[20].u;
SET64(31, 0x2d0324); SET32(4, RW(2) + 576); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(20) + 32)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d0338); SET32(4, RW(2) + 384); rt_call(c, t); }
L_002D0338:;
SET64(31, rd64(c, (RW(29) + 112)));
L_002D033C:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}
void JP_F_002D0040(Ctx *c) { JP_B_002D0040(c, 0x2d0040); }
void JP_F_002D0048(Ctx *c) { JP_B_002D0040(c, 0x2d0048); }
void JP_F_002D0054(Ctx *c) { JP_B_002D0040(c, 0x2d0054); }
void JP_F_002D0058(Ctx *c) { JP_B_002D0040(c, 0x2d0058); }
void JP_F_002D006C(Ctx *c) { JP_B_002D0040(c, 0x2d006c); }

void JP_F_002D0360(Ctx *c) { /* func_002D0360 */
ENTER(0x2d0360);
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
{ int t = RD(3) == RD(0); c->f[20].u = c->f[13].u; if (t) goto L_002D03B4; }
L_002D0398:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002D0398; } }
L_002D03B4:;
c->f[2].u = rd32(c, (RW(28) + -29884));
SET64(2, (s32)rd32(c, (RW(19) + 32)));
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
L_002D03E8:;
SET64(2, (s32)rd32(c, (RW(19) + 32)));
c->f[0].u = rd32(c, (RW(17) + 0));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 32), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 32)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d0410);  rt_call(c, t); }
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 4);
SET64(2, RSD(18) < (s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_002D03E8; } }
SET64(31, 0x2d042c); SET64(4, RD(19) + RD(0)); JP_F_002D0790(c);
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

void JP_F_002D0470(Ctx *c) { /* func_002D0470 */
ENTER(0x2d0470);
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
SET64(31, 0x2d04b8); SET32(4, RW(0) + 16); JP_F_00100670(c);
if (RD(2) == RD(0)) { SET32(3, RW(16) + -1); goto L_002D04D8; }
wr32(c, (RW(2) + 4), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(2) + 8), RW(3));
wr32(c, (RW(2) + 0), RW(0));
wr8(c, (RW(2) + 12), (u8)RW(0));
SET32(3, RW(16) + -1);
L_002D04D8:;
wr32(c, (RW(21) + 36), RW(2));
c->f[0].u = RW(3);
wr32(c, (RW(2) + 4), RW(0));
c->f[0].f = (f32)(s32)c->f[0].u;
SET32(4, RW(0) + 784);
wr32(c, (RW(2) + 8), c->f[0].u);
SET64(31, 0x2d04f8); wr32(c, (RW(2) + 0), RW(0)); JP_F_00100530(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D0524; }
SET64(5, (s64)(s32)0x150000);
SET64(6, (s64)(s32)0x150000);
SET64(4, RD(16) + RD(0));
SET32(5, RW(5) + -6640);
SET32(6, RW(6) + -7024);
SET32(7, RW(0) + 384);
SET64(31, 0x2d0520); SET32(8, RW(0) + 2); JP_F_00102580(c);
SET64(16, RD(2) + RD(0));
L_002D0524:;
wr32(c, (RW(21) + 32), RW(16));
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_002D0530:;
SET64(2, (s32)rd32(c, (RW(21) + 32)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d0548);  rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 32)));
SET32(3, RW(3) + 64);
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 160), RW(3));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
SET32(4, RW(2) + 64);
SET64(2, rd16(c, (RW(2) + 116)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002D057C; }
c->f[0].u = RW(2);
c->f[21].f = (f32)(s32)c->f[0].u; goto L_002D0594;
L_002D057C:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[21].f = (f32)(s32)c->f[0].u;
c->f[21].f = fpu(F(21) + F(21));
L_002D0594:;
SET64(2, rd16(c, (RW(4) + 54)));
if (RSD(2) < 0) { SET32(3, RW(2) >> 1); goto L_002D05AC; }
c->f[0].u = RW(2);
c->f[20].f = (f32)(s32)c->f[0].u; goto L_002D05C4;
L_002D05AC:;
SET64(2, RD(2) & 0x1);
SET64(3, RD(3) | RD(2));
c->f[0].u = RW(3);
c->f[20].f = (f32)(s32)c->f[0].u;
c->f[20].f = fpu(F(20) + F(20));
L_002D05C4:;
SET64(2, (s64)(s32)0x458c0000);
SET64(3, (s32)rd32(c, (RW(21) + 32)));
SET64(2, RD(2) | 0xa000);
c->f[12].u = RW(2);
SET32(2, RW(3) + RW(16));
wr32(c, (RW(2) + 32), RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 32)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 36), RW(0));
SET64(2, (s32)rd32(c, (RW(21) + 32)));
SET64(31, 0x2d05f4); SET32(4, RW(2) + RW(16)); JP_F_0014E9B0(c);
SET64(2, (s32)rd32(c, (RW(21) + 32)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 164), c->f[21].u);
SET64(2, (s32)rd32(c, (RW(21) + 32)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 168), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(21) + 32)));
{ int t = RD(17) != RD(0); SET32(3, RW(2) + RW(16)); if (t) goto L_002D0628; }
SET64(2, (s64)(s32)0x40400000);
c->f[0].u = RW(2);
c->f[1].u = c->f[0].u; goto L_002D0638;
L_002D0628:;
SET64(2, (s64)(s32)0x40400000);
c->f[0].u = RW(2);
c->f[1].f = fpu(F(21) - F(0));
L_002D0638:;
SET32(2, RW(0) + 1);
wr32(c, (RW(3) + 172), c->f[1].u);
SET64(3, (s32)rd32(c, (RW(21) + 32)));
SET32(3, RW(3) + RW(16));
wr32(c, (RW(3) + 176), RW(0));
SET64(3, (s32)rd32(c, (RW(21) + 32)));
{ int t = RD(17) != RD(2); SET32(3, RW(3) + RW(16)); if (t) goto L_002D0660; }
wr32(c, (RW(3) + 180), c->f[0].u); goto L_002D0668;
L_002D0660:;
c->f[0].f = fpu(F(21) - F(0));
wr32(c, (RW(3) + 180), c->f[0].u);
L_002D0668:;
SET64(2, (s32)rd32(c, (RW(21) + 32)));
c->f[12].u = RW(0);
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 184), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(21) + 32)));
SET32(2, RW(2) + RW(16));
SET64(31, 0x2d0688); SET32(4, RW(2) + 192); JP_F_001638D0(c);
SET64(2, (s32)rd32(c, (RW(21) + 32)));
SET64(31, 0x2d0694); SET32(4, RW(2) + RW(16)); JP_F_0014EB10(c);
SET64(2, (s32)rd32(c, (RW(21) + 32)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d06ac);  rt_call(c, t); }
{ int t = RD(18) == RD(0);  if (t) goto L_002D06D8; }
SET64(2, (s32)rd32(c, (RW(21) + 32)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2d06cc);  rt_call(c, t); }
 goto L_002D06F0;
L_002D06D8:;
SET64(2, (s32)rd32(c, (RW(21) + 32)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d06f0);  rt_call(c, t); }
L_002D06F0:;
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_002D0530; } }
SET32(3, RW(0) + 1);
SET32(2, RW(0) + 3);
wr8(c, (RW(21) + 0), (u8)RW(3));
SET64(4, RD(21) + RD(0));
wr16(c, (RW(21) + 50), (u16)RW(2));
SET64(31, 0x2d071c); wr16(c, (RW(21) + 130), (u16)RW(2)); JP_F_002D0790(c);
wr32(c, (RW(21) + 28), RW(20));
SET64(3, (s32)rd32(c, (RW(19) + 0)));
SET64(3, rd16(c, (RW(3) + 116)));
if (RSD(3) < 0) { SET32(4, RW(3) >> 1); goto L_002D073C; }
c->f[0].u = RW(3);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002D0754;
L_002D073C:;
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002D0754:;
wr32(c, (RW(21) + 20), c->f[0].u);
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

void JP_F_002D0790(Ctx *c) { /* func_002D0790 */
ENTER(0x2d0790);
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
{ int t = RD(3) == RD(0); wr32(c, (RW(29) + 0), c->f[20].u); if (t) goto L_002D07E0; }
L_002D07C4:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002D07C4; } }
L_002D07E0:;
c->f[0].u = rd32(c, (RW(28) + -31364));
SET64(19, RD(0) + RD(0));
SET64(18, RD(0) + RD(0));
SET32(17, RW(29) + 168);
SET64(16, RD(20) + RD(0));
wr32(c, (RW(29) + 172), c->f[0].u);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(29) + 168), c->f[0].u);
L_002D0800:;
SET64(2, (s32)rd32(c, (RW(20) + 32)));
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
SET64(31, 0x2d0880); wr128(c, (RW(29) + 112) & ~15u, &c->r[2]); JP_F_002D09F0(c);
c->f[21].u = c->f[0].u;
SET64(31, 0x2d088c); SET32(4, RW(29) + 112); JP_F_002D09E0(c);
c->f[20].u = c->f[0].u;
SET64(31, 0x2d0898); SET32(4, RW(29) + 112); JP_F_002D09D0(c);
c->f[15].u = rd32(c, (RW(28) + -31368));
SET32(4, RW(16) + 48);
c->f[12].u = c->f[21].u;
c->f[13].u = c->f[20].u;
SET64(31, 0x2d08b0); c->f[14].u = c->f[0].u; JP_F_002D0900(c);
SET32(19, RW(19) + 1);
wr32(c, (RW(16) + 96), RW(0));
SET64(3, RSD(19) < (s64)2);
SET32(18, RW(18) + 384);
SET32(17, RW(17) + 4);
{ int t = RD(3) != RD(0); SET32(16, RW(16) + 80); if (t) { POLL(); goto L_002D0800; } }
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

void JP_F_002D0900(Ctx *c) { /* func_002D0900 */
ENTER(0x2d0900);
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
SET64(31, 0x2d0934); c->f[20].u = c->f[15].u; JP_F_00230950(c);
c->f[12].f = fpu(F(23) - F(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d0944); SET64(5, RD(0) + RD(0)); JP_F_00230930(c);
SET64(31, 0x2d094c); SET64(4, RD(16) + RD(0)); JP_F_00230920(c);
c->f[12].f = fpu(F(22) - F(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d095c); SET32(5, RW(0) + 1); JP_F_00230930(c);
SET64(31, 0x2d0964); SET64(4, RD(16) + RD(0)); JP_F_00230910(c);
c->f[12].f = fpu(F(21) - F(0));
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d0974); SET32(5, RW(0) + 2); JP_F_00230930(c);
c->f[12].u = c->f[23].u;
SET64(31, 0x2d0980); SET64(4, RD(16) + RD(0)); JP_F_00230900(c);
c->f[12].u = c->f[22].u;
SET64(31, 0x2d098c); SET64(4, RD(16) + RD(0)); JP_F_002308F0(c);
c->f[12].u = c->f[21].u;
SET64(31, 0x2d0998); SET64(4, RD(16) + RD(0)); JP_F_002308E0(c);
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

void JP_F_002D09D0(Ctx *c) { /* func_002D09D0 */
ENTER(0x2d09d0);
c->f[0].u = rd32(c, (RW(4) + 8)); return;
}

void JP_F_002D09E0(Ctx *c) { /* func_002D09E0 */
ENTER(0x2d09e0);
c->f[0].u = rd32(c, (RW(4) + 4)); return;
}

void JP_F_002D09F0(Ctx *c) { /* func_002D09F0 */
ENTER(0x2d09f0);
c->f[0].u = rd32(c, (RW(4) + 0)); return;
}

void JP_F_002D0A00(Ctx *c) { /* func_002D0A00 */
ENTER(0x2d0a00);
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
SET64(5, (s32)rd32(c, (RW(4) + 32)));
c->f[0].u = rd32(c, (RW(4) + 8));
c->f[1].u = rd32(c, (RW(5) + 32));
c->f[1].f = fpu(F(12) - F(1));
c->f[0].f = fpu(F(0) + F(1));
wr32(c, (RW(4) + 8), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(4) + 32)));
c->f[1].u = rd32(c, (RW(4) + 32));
c->f[0].u = rd32(c, (RW(4) + 416));
{ int t = RD(3) == RD(0); c->f[20].u = c->f[13].u; if (t) goto L_002D0A70; }
L_002D0A54:;
wr8(c, (RW(3) + 0), (u8)RW(0));
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 1);
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002D0A54; } }
L_002D0A70:;
c->f[0].f = fpu(F(0) - F(1));
SET64(18, RD(0) + RD(0));
SET32(17, RW(29) + 104);
SET64(16, RD(0) + RD(0));
c->f[0].f = fpu(F(12) + F(0));
wr32(c, (RW(29) + 104), c->f[12].u);
wr32(c, (RW(29) + 108), c->f[0].u);
L_002D0A8C:;
SET64(2, (s32)rd32(c, (RW(19) + 32)));
c->f[0].u = rd32(c, (RW(17) + 0));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 32), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(19) + 32)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(2) + 36), c->f[20].u);
SET64(2, (s32)rd32(c, (RW(19) + 32)));
SET32(4, RW(2) + RW(16));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 36)));
{ u32 t = RW(25); SET64(31, 0x2d0ac0);  rt_call(c, t); }
SET32(18, RW(18) + 1);
SET32(17, RW(17) + 4);
SET64(2, RSD(18) < (s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 384); if (t) { POLL(); goto L_002D0A8C; } }
SET64(31, 0x2d0adc); SET64(4, RD(19) + RD(0)); JP_F_002D0790(c);
SET64(31, rd64(c, (RW(29) + 80)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002D0B00(Ctx *c) { /* func_002D0B00 */
ENTER(0x2d0b00);
SET32(29, RW(29) + -16);
c->f[0].u = RW(5);
wr64(c, (RW(29) + 0), RD(31));
c->f[0].f = (f32)(s32)c->f[0].u;
SET64(2, (s32)rd32(c, (RW(4) + 36)));
wr32(c, (RW(2) + 0), c->f[0].u);
SET64(25, (s32)rd32(c, (RW(4) + 208)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d0b28);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002D0B40(Ctx *c) { /* func_002D0B40 */
ENTER(0x2d0b40);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
c->f[2].u = rd32(c, (RW(2) + -22384));
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = rd32(c, (RW(28) + -31352));
c->f[1].f = fpu(F(1) * F(2));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[3].u = rd32(c, (RW(28) + -31352)); if (t) goto L_002D0B70; }
SET64(3, (s32)rd32(c, (RW(4) + 36))); goto L_002D0B84;
L_002D0B70:;
c->f[3].u = rd32(c, (RW(4) + 16));
c->fcc = F(1) <= F(3);
if (c->fcc) { c->f[3].u = c->f[1].u; goto L_002D0B80; }
L_002D0B80:;
SET64(3, (s32)rd32(c, (RW(4) + 36)));
L_002D0B84:;
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].f = fpu(F(0) - F(3));
wr32(c, (RW(3) + 0), c->f[0].u);
c->f[1].u = rd32(c, (RW(3) + 4));
c->f[0].u = rd32(c, (RW(3) + 0));
c->fcc = F(0) < F(1);
if (!c->fcc) { SET64(25, (s32)rd32(c, (RW(4) + 208))); goto L_002D0BBC; }
SET64(2, rd8(c, (RW(3) + 12)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D0BB4; }
c->f[1].u = rd32(c, (RW(3) + 8));
L_002D0BB4:;
wr32(c, (RW(3) + 0), c->f[1].u);
SET64(25, (s32)rd32(c, (RW(4) + 208)));
L_002D0BBC:;
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d0bc8);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002D0BE0(Ctx *c) { /* func_002D0BE0 */
ENTER(0x2d0be0);
SET32(29, RW(29) + -16);
SET64(2, (s64)(s32)0x530000);
wr64(c, (RW(29) + 0), RD(31));
c->f[2].u = rd32(c, (RW(2) + -22384));
c->f[1].u = rd32(c, (RW(4) + 4));
c->f[0].u = rd32(c, (RW(28) + -31356));
c->f[1].f = fpu(F(1) * F(2));
c->fcc = F(1) < F(0);
{ int t = !c->fcc; c->f[3].u = rd32(c, (RW(28) + -31356)); if (t) goto L_002D0C10; }
SET64(3, (s32)rd32(c, (RW(4) + 36))); goto L_002D0C24;
L_002D0C10:;
c->f[3].u = rd32(c, (RW(4) + 16));
c->fcc = F(1) <= F(3);
if (c->fcc) { c->f[3].u = c->f[1].u; goto L_002D0C20; }
L_002D0C20:;
SET64(3, (s32)rd32(c, (RW(4) + 36)));
L_002D0C24:;
c->f[0].u = rd32(c, (RW(3) + 0));
c->f[0].f = fpu(F(0) + F(3));
wr32(c, (RW(3) + 0), c->f[0].u);
c->f[1].u = rd32(c, (RW(3) + 8));
c->f[0].u = rd32(c, (RW(3) + 0));
c->fcc = F(0) <= F(1);
if (c->fcc) { SET64(25, (s32)rd32(c, (RW(4) + 208))); goto L_002D0C5C; }
SET64(2, rd8(c, (RW(3) + 12)));
{ int t = RD(2) == RD(0);  if (t) goto L_002D0C54; }
c->f[1].u = rd32(c, (RW(3) + 4));
L_002D0C54:;
wr32(c, (RW(3) + 0), c->f[1].u);
SET64(25, (s32)rd32(c, (RW(4) + 208)));
L_002D0C5C:;
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d0c68);  rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002D0C80(Ctx *c) { /* func_002D0C80 */
ENTER(0x2d0c80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 32)));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d0ca4);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET64(25, (s32)rd32(c, (RW(2) + 392)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d0cb8); SET32(4, RW(2) + 384); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002D0CD0(Ctx *c) { /* func_002D0CD0 */
ENTER(0x2d0cd0);
 return;
}

void JP_F_002D0CE0(Ctx *c) { /* func_002D0CE0 */
ENTER(0x2d0ce0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 32)));
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d0d08);  rt_call(c, t); }
if (RD(2) == RD(0)) { SET64(2, RD(0) + RD(0)); goto L_002D0D3C; }
SET64(2, (s32)rd32(c, (RW(16) + 32)));
SET64(4, (s32)rd32(c, (RW(2) + 396)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d0d28);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D0D38; }
SET32(2, RW(0) + 1); goto L_002D0D3C;
L_002D0D38:;
SET64(2, RD(0) + RD(0));
L_002D0D3C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002D0D50(Ctx *c) { /* func_002D0D50 */
ENTER(0x2d0d50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2d0d68); SET64(4, (s32)rd32(c, (RW(4) + 36))); JP_F_001004B0(c);
wr32(c, (RW(16) + 36), RW(0));
SET64(5, (s64)(s32)0x150000);
SET64(4, (s32)rd32(c, (RW(16) + 32)));
SET64(31, 0x2d0d7c); SET32(5, RW(5) + -7024); JP_F_001022C0(c);
wr32(c, (RW(16) + 32), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002D0D90(Ctx *c) { /* func_002D0D90 */
ENTER(0x2d0d90);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28536); return;
}

void JP_F_002D0DA0(Ctx *c) { /* func_002D0DA0 */
ENTER(0x2d0da0);
 return;
}

void JP_F_002D0DB0(Ctx *c) { /* func_002D0DB0 */
ENTER(0x2d0db0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D0E3C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11760);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d0de8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002D0E28; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12000);
wr32(c, (RW(17) + 16), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002D0E1C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d0e18); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002D0E1C:;
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(0));
SET64(2, RD(16) << 48);
L_002D0E28:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D0E40; }
SET64(31, 0x2d0e3c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D0E3C:;
SET64(2, RD(17) + RD(0));
L_002D0E40:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D0E60(Ctx *c) { /* func_002D0E60 */
ENTER(0x2d0e60);
c->f[0].u = rd32(c, (RW(4) + 60)); return;
}

void JP_F_002D0E70(Ctx *c) { /* func_002D0E70 */
ENTER(0x2d0e70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D0EFC; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11808);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d0ea8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002D0EE8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12000);
wr32(c, (RW(17) + 16), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002D0EDC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d0ed8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002D0EDC:;
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(0));
SET64(2, RD(16) << 48);
L_002D0EE8:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D0F00; }
SET64(31, 0x2d0efc); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D0EFC:;
SET64(2, RD(17) + RD(0));
L_002D0F00:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D0F20(Ctx *c) { /* func_002D0F20 */
ENTER(0x2d0f20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D0FAC; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11856);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d0f58);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002D0F98; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12000);
wr32(c, (RW(17) + 16), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002D0F8C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d0f88); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002D0F8C:;
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(0));
SET64(2, RD(16) << 48);
L_002D0F98:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D0FB0; }
SET64(31, 0x2d0fac); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D0FAC:;
SET64(2, RD(17) + RD(0));
L_002D0FB0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D0FD0(Ctx *c) { /* func_002D0FD0 */
ENTER(0x2d0fd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D105C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11904);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d1008);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002D1048; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12000);
wr32(c, (RW(17) + 16), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002D103C; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d1038); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002D103C:;
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(0));
SET64(2, RD(16) << 48);
L_002D1048:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D1060; }
SET64(31, 0x2d105c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D105C:;
SET64(2, RD(17) + RD(0));
L_002D1060:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D1080(Ctx *c) { /* func_002D1080 */
ENTER(0x2d1080);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D110C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 11952);
wr32(c, (RW(17) + 16), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2d10b8);  rt_call(c, t); }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002D10F8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12000);
wr32(c, (RW(17) + 16), RW(2));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(17) + 4), RW(0)); goto L_002D10EC; }
SET64(25, (s32)rd32(c, (RW(4) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 44)));
{ u32 t = RW(25); SET64(31, 0x2d10e8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(17) + 4), RW(0));
L_002D10EC:;
wr32(c, (RW(17) + 8), RW(0));
wr32(c, (RW(17) + 12), RW(0));
SET64(2, RD(16) << 48);
L_002D10F8:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D1110; }
SET64(31, 0x2d110c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D110C:;
SET64(2, RD(17) + RD(0));
L_002D1110:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D1130(Ctx *c) { /* func_002D1130 */
ENTER(0x2d1130);
SET32(4, RW(4) + -4); { JP_F_002C7F60(c); return; }
}

void JP_F_002D1140(Ctx *c) { /* func_002D1140 */
ENTER(0x2d1140);
SET32(4, RW(4) + -24); { JP_F_002C7F60(c); return; }
}

void JP_F_002D1150(Ctx *c) { /* func_002D1150 */
ENTER(0x2d1150);
SET32(4, RW(4) + -4); { JP_F_002C8090(c); return; }
}

void JP_F_002D1160(Ctx *c) { /* func_002D1160 */
ENTER(0x2d1160);
SET32(4, RW(4) + -24); { JP_F_002C8090(c); return; }
}

void JP_F_002D1170(Ctx *c) { /* func_002D1170 */
ENTER(0x2d1170);
SET64(2, (s64)(s32)0x4c0000);
SET32(2, RW(2) + -28520); return;
}

void JP_F_002D1180(Ctx *c) { /* func_002D1180 */
ENTER(0x2d1180);
 return;
}

void JP_F_002D1190(Ctx *c) { /* func_002D1190 */
ENTER(0x2d1190);
SET32(29, RW(29) + -96);
SET64(3, (s64)(s32)0x530000);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = rd32(c, (RW(3) + -22384));
SET64(4, rd16(c, (RW(4) + 0)));
SET64(3, RD(0) | 0xff01);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 68))); goto L_002D1710; }
SET64(3, RD(0) | 0xff00);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 64))); goto L_002D16C0; }
SET32(3, RW(0) + 258);
if (RD(4) == RD(3)) { c->f[1].u = rd32(c, (RW(18) + 80)); goto L_002D1664; }
SET32(3, RW(0) + 257);
if (RD(4) == RD(3)) { c->f[2].u = rd32(c, (RW(18) + 80)); goto L_002D15CC; }
SET32(3, RW(0) + 256);
if (RD(4) == RD(3)) { SET64(16, (s32)rd32(c, (RW(18) + 64))); goto L_002D14AC; }
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(4, (s32)rd32(c, (RW(18) + 68))); goto L_002D1488; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET32(4, RW(0) + 204); goto L_002D1408; }
if (RD(4) == RD(0)) { SET32(4, RW(0) + 8); goto L_002D1220; }
SET64(31, rd64(c, (RW(29) + 80))); goto L_002D183C;
L_002D1220:;
SET64(31, 0x2d1228);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D1238; }
SET64(31, 0x2d1238); SET64(4, RD(16) + RD(0)); JP_F_003BE340(c);
L_002D1238:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d1244); wr32(c, (RW(18) + 92), RW(16)); JP_F_003BE270(c);
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
SET64(31, 0x2d1280); SET32(5, RW(0) + 4); JP_F_003BE0E0(c);
SET64(31, 0x2d1288); SET32(4, RW(0) + 1552); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002D1350; }
SET32(6, RW(0) + 50);
SET64(4, RD(17) + RD(0));
SET32(5, RW(0) + 16384);
SET64(7, RD(6) + RD(0));
SET64(8, RD(6) + RD(0));
SET64(31, 0x2d12ac); SET64(16, RD(17) + RD(0)); JP_F_00162820(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 6144);
SET32(3, RW(3) + 6160);
wr32(c, (RW(16) + 176), RW(2));
SET32(4, RW(16) + 1440);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 196), RW(3));
SET32(2, RW(2) + 6200);
SET64(31, 0x2d12d8); wr32(c, (RW(16) + 1072), RW(2)); JP_F_00149680(c);
SET64(31, 0x2d12e0); SET32(4, RW(16) + 1456); JP_F_00149680(c);
SET64(31, 0x2d12e8); SET32(4, RW(16) + 1472); JP_F_00149680(c);
SET64(31, 0x2d12f0); SET32(4, RW(16) + 1488); JP_F_00149680(c);
SET64(31, 0x2d12f8); SET32(4, RW(16) + 1512); JP_F_00179800(c);
wr32(c, (RW(16) + 1424), RW(0));
SET32(3, RW(0) + 16384);
wr8(c, (RW(16) + 1428), (u8)RW(0));
SET32(2, RW(0) + 50);
wr32(c, (RW(16) + 1524), RW(3));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1528), RW(2));
SET32(5, RW(0) + 1);
wr32(c, (RW(16) + 1532), RW(2));
SET64(31, 0x2d1324); wr32(c, (RW(16) + 1536), RW(2)); JP_F_001630B0(c);
wr32(c, (RW(16) + 1504), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 1540), RW(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2d133c); wr32(c, (RW(16) + 1432), RW(0)); JP_F_00163090(c);
SET64(31, 0x2d1344); SET64(4, RD(16) + RD(0)); JP_F_001797F0(c);
SET64(4, RD(2) + RD(0));
SET64(31, 0x2d1350); SET32(5, RW(28) + -31304); JP_F_001797E0(c);
L_002D1350:;
wr32(c, (RW(18) + 64), RW(17));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 1544), RW(2));
SET64(31, 0x2d1364); SET32(4, RW(0) + 4); JP_F_00100530(c);
wr32(c, (RW(17) + 1540), RW(2));
SET64(31, 0x2d1370); SET32(4, RW(0) + 496); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D13C8; }
SET32(5, RW(0) + 100);
SET64(4, RD(16) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x2d138c); SET64(7, RD(5) + RD(0)); JP_F_002A6630(c);
SET32(19, RW(16) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(19) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2d13a4); wr32(c, (RW(16) + 240), RW(4)); JP_F_002AE1F0(c);
SET64(31, 0x2d13ac); SET32(4, RW(19) + 32); JP_F_002A88F0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 240), RW(19));
SET32(2, RW(2) + -3920);
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 144), RW(2));
SET64(31, 0x2d13c8); SET32(5, RW(16) + 272); JP_F_002A6520(c);
L_002D13C8:;
SET64(2, (s32)rd32(c, (RW(17) + 1540)));
wr32(c, (RW(2) + 0), RW(16));
SET64(4, (s32)rd32(c, (RW(17) + 560)));
SET64(2, (s32)rd32(c, (RW(17) + 1540)));
SET64(5, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2d13e4); SET64(6, (s32)rd32(c, (RW(4) + 16))); JP_F_002ADFE0(c);
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET32(3, RW(0) + 1);
wr8(c, (RW(2) + 228), (u8)RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 64)));
wr32(c, (RW(28) + -30240), RW(2));
SET64(2, rd16(c, (RW(18) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(18) + 0), (u16)RW(2));
SET32(4, RW(0) + 204);
L_002D1408:;
SET64(31, 0x2d1410);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D1420; }
SET64(31, 0x2d1420); SET64(4, RD(16) + RD(0)); JP_F_0019C7B0(c);
L_002D1420:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2d142c); wr32(c, (RW(18) + 68), RW(16)); JP_F_0019B4E0(c);
SET64(3, (s32)rd32(c, (RW(18) + 72)));
SET64(2, (s32)rd32(c, (RW(18) + 68)));
wr32(c, (RW(2) + 84), RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 64)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2d144c); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 68)));
wr32(c, (RW(3) + 60), RW(2));
SET64(3, (s32)rd32(c, (RW(18) + 64)));
SET64(2, (s32)rd32(c, (RW(18) + 68)));
SET32(3, RW(3) + 784);
wr32(c, (RW(2) + 80), RW(3));
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 40)));
{ u32 t = RW(25); SET64(31, 0x2d1478); SET32(5, RW(28) + -31300); rt_call(c, t); }
SET64(2, rd16(c, (RW(18) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(18) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 68)));
L_002D1488:;
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 48)));
{ u32 t = RW(25); SET64(31, 0x2d1498);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002D1838; }
SET32(3, RW(0) + 255);
wr16(c, (RW(18) + 0), (u16)RW(3)); goto L_002D1838;
L_002D14AC:;
SET64(5, RD(0) + RD(0));
SET64(25, (s32)rd32(c, (RW(16) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2d14c0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(5, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2d14d8); SET64(6, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
c->f[12].u = RW(0);
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 52)));
{ u32 t = RW(25); SET64(31, 0x2d14f0);  rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 68)));
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 76)));
SET64(2, rd16(c, (RW(5) + 8)));
SET32(4, RW(5) + 32);
SET32(3, RW(2) << 4);
SET32(2, RW(2) + -1);
{ int t = RSD(2) <= 0; SET32(6, RW(4) + RW(3)); if (t) goto L_002D1538; }
SET64(3, RD(4) + RD(0));
L_002D1518:;
wr16(c, (RW(3) + 14), (u16)RW(0));
SET32(7, RW(7) + 1);
SET64(2, rd16(c, (RW(5) + 8)));
SET32(2, RW(2) + -1);
SET64(2, RSD(7) < RSD(2));
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 16); if (t) { POLL(); goto L_002D1518; } }
L_002D1538:;
SET32(2, RW(7) << 4);
SET32(2, RW(2) + RW(4));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + 14), (u16)RW(3));
SET64(2, rd16(c, (RW(5) + 10)));
SET32(2, RW(2) + -1);
{ int t = RSD(2) <= 0; SET64(3, RD(0) + RD(0)); if (t) goto L_002D1578; }
SET64(4, RD(6) + RD(0));
L_002D155C:;
wr16(c, (RW(4) + 14), (u16)RW(0));
SET32(3, RW(3) + 1);
SET64(2, rd16(c, (RW(5) + 10)));
SET32(2, RW(2) + -1);
SET64(2, RSD(3) < RSD(2));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 16); if (t) { POLL(); goto L_002D155C; } }
L_002D1578:;
SET32(2, RW(3) << 4);
SET32(2, RW(2) + RW(6));
SET32(3, RW(0) + 1);
wr16(c, (RW(2) + 14), (u16)RW(3));
SET64(2, (s32)rd32(c, (RW(18) + 68)));
SET64(3, (s32)rd32(c, (RW(18) + 64)));
SET64(5, (s32)rd32(c, (RW(2) + 76)));
SET64(31, 0x2d159c); SET32(4, RW(3) + 784); JP_F_0015CF10(c);
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
L_002D15CC:;
SET64(2, (s64)(s32)0x42f00000);
c->f[3].u = rd32(c, (RW(18) + 84));
c->f[1].u = RW(0);
c->facc = fpu(F(1) + F(2));
c->f[1].f = fpu(c->facc + F(20) * F(3));
c->f[0].u = RW(2);
c->fcc = F(1) < F(0);
{ int t = c->fcc; wr32(c, (RW(18) + 80), c->f[1].u); if (t) goto L_002D1640; }
SET64(2, rd8(c, (RW(18) + 88)));
if (RD(2) == RD(0)) { c->f[0].f = fpu(F(1) - F(0)); goto L_002D163C; }
SET64(3, (s64)(s32)0x3f800000);
SET64(2, (s64)(s32)0x3fc00000);
c->f[13].u = RW(3);
c->f[0].f = fpu(F(1) + F(13));
wr32(c, (RW(18) + 80), c->f[0].u);
SET64(4, (s32)rd32(c, (RW(18) + 76)));
c->f[12].u = RW(2);
SET64(31, 0x2d162c); SET32(5, RW(0) + 257); JP_F_00311B90(c);
SET64(2, rd16(c, (RW(18) + 0)));
SET32(2, RW(2) + 1);
wr16(c, (RW(18) + 0), (u16)RW(2)); goto L_002D1640;
L_002D163C:;
wr32(c, (RW(18) + 80), c->f[0].u);
L_002D1640:;
c->f[0].u = rd32(c, (RW(18) + 80));
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET32(5, RW(28) + -31296);
wr32(c, (RW(2) + 896), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET64(31, 0x2d165c); SET32(4, RW(2) + 784); JP_F_0015CC70(c);
 goto L_002D1838;
L_002D1664:;
SET32(5, RW(28) + -31292);
c->f[2].u = rd32(c, (RW(18) + 84));
c->f[0].u = RW(0);
c->facc = fpu(F(0) + F(1));
c->f[0].f = fpu(c->facc + F(20) * F(2));
wr32(c, (RW(18) + 80), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 64)));
wr32(c, (RW(2) + 896), c->f[0].u);
SET64(2, (s32)rd32(c, (RW(18) + 64)));
SET64(31, 0x2d1694); SET32(4, RW(2) + 784); JP_F_0015CC70(c);
c->f[1].u = rd32(c, (RW(18) + 80));
SET64(3, (s64)(s32)0x432c0000);
c->f[0].u = RW(3);
c->fcc = F(1) < F(0);
{ int t = c->fcc;  if (t) goto L_002D1838; }
SET64(3, rd16(c, (RW(18) + 0)));
SET32(3, RW(3) + 1);
wr16(c, (RW(18) + 0), (u16)RW(3)); goto L_002D1838;
L_002D16C0:;
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 80)));
{ u32 t = RW(25); SET64(31, 0x2d16d0); SET64(5, RD(0) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 60)));
{ u32 t = RW(25); SET64(31, 0x2d16e4); SET64(5, RD(2) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(18) + 68)));
wr32(c, (RW(2) + 80), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 92)));
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(18) + 0))); goto L_002D1704; }
SET64(31, 0x2d1700);  JP_F_003BE020(c);
SET64(2, rd16(c, (RW(18) + 0)));
L_002D1704:;
SET32(2, RW(2) + 1);
wr16(c, (RW(18) + 0), (u16)RW(2));
SET64(4, (s32)rd32(c, (RW(18) + 68)));
L_002D1710:;
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2d1720);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D1838; }
SET64(4, (s32)rd32(c, (RW(18) + 64)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 84)));
{ u32 t = RW(25); SET64(31, 0x2d173c);  rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002D1838; }
SET64(4, (s32)rd32(c, (RW(18) + 92)));
{ int t = RD(4) == RD(0);  if (t) goto L_002D1760; }
SET64(31, 0x2d1758);  JP_F_003BDFC0(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002D1838; }
L_002D1760:;
SET64(31, 0x2d1768);  JP_F_00139590(c);
SET64(31, 0x2d1770); SET64(4, (s32)rd32(c, (RW(2) + 0))); JP_F_0022CA80(c);
wr32(c, (RW(28) + -30240), RW(0));
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2d1788);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2d179c);  rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(18) + 68)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 68), RW(0)); goto L_002D17BC; }
SET64(25, (s32)rd32(c, (RW(4) + 200)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2d17b8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 68), RW(0));
L_002D17BC:;
SET64(4, (s32)rd32(c, (RW(18) + 64)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 64), RW(0)); goto L_002D17DC; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d17d8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 64), RW(0));
L_002D17DC:;
SET64(4, (s32)rd32(c, (RW(18) + 92)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 92), RW(0)); goto L_002D17FC; }
SET64(25, (s32)rd32(c, (RW(4) + 4)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d17f8); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 92), RW(0));
L_002D17FC:;
SET64(2, (s32)rd32(c, (RW(18) + 60)));
SET64(2, RD(2) & 0x1);
if (RD(2) == RD(0)) { SET64(4, RD(18) + RD(0)); goto L_002D1830; }
SET64(4, (s32)rd32(c, (RW(18) + 72)));
if (RD(4) == RD(0)) { wr32(c, (RW(18) + 72), RW(0)); goto L_002D182C; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2d1828); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(18) + 72), RW(0));
L_002D182C:;
SET64(4, RD(18) + RD(0));
L_002D1830:;
SET64(31, 0x2d1838);  JP_F_00139AB0(c);
L_002D1838:;
SET64(31, rd64(c, (RW(29) + 80)));
L_002D183C:;
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002D1860(Ctx *c) { /* func_002D1860 */
ENTER(0x2d1860);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(4) + 60), RW(0));
wr32(c, (RW(4) + 76), RW(6));
{ int t = RD(5) != RD(0); wr32(c, (RW(4) + 72), RW(5)); if (t) goto L_002D18C4; }
SET64(31, 0x2d188c); SET32(4, RW(0) + 32); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002D189C; }
SET64(31, 0x2d189c); SET64(4, RD(16) + RD(0)); JP_F_001509B0(c);
L_002D189C:;
SET32(5, RW(0) + 512);
SET64(4, RD(16) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(6, RD(5) + RD(0));
SET32(8, RW(0) + 1);
SET64(31, 0x2d18b8); wr32(c, (RW(17) + 72), RW(16)); JP_F_00150830(c);
SET64(3, (s32)rd32(c, (RW(17) + 60)));
SET64(3, RD(3) | 0x1);
wr32(c, (RW(17) + 60), RW(3));
L_002D18C4:;
wr8(c, (RW(17) + 88), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002D18E0(Ctx *c) { /* func_002D18E0 */
ENTER(0x2d18e0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2d18f8); SET64(16, RD(4) + RD(0)); JP_F_0013A040(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 12240);
SET32(2, RW(2) + 12248);
wr32(c, (RW(16) + 56), RW(3));
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 20), RW(2));
SET32(3, RW(3) + 12260);
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

void JP_F_002D1940(Ctx *c) { /* func_002D1940 */
ENTER(0x2d1940);
SET32(4, RW(4) + -4); { JP_F_00179160(c); return; }
}

void JP_F_002D1950(Ctx *c) { /* func_002D1950 */
ENTER(0x2d1950);
SET32(4, RW(4) + -24); { JP_F_00179160(c); return; }
}

void JP_F_002D1960(Ctx *c) { /* func_002D1960 */
ENTER(0x2d1960);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002D1AD4; }
SET64(2, (s64)(s32)0x4e0000);
SET64(8, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 12320);
SET64(6, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(7, (s32)rd32(c, (RW(17) + 256)));
SET32(8, RW(8) + 12488);
SET32(6, RW(6) + 12392);
SET32(3, RW(3) + 12424);
SET32(2, RW(17) + 1248);
SET32(4, RW(17) + 1200);
wr32(c, (RW(7) + 16), RW(8));
SET32(5, RW(0) + -1);
wr32(c, (RW(17) + 432), RW(6));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
SET64(31, 0x2d19cc); wr32(c, (RW(3) + 20), RW(2)); JP_F_002B3D60(c);
SET32(4, RW(17) + 1152);
SET64(31, 0x2d19d8); SET32(5, RW(0) + -1); JP_F_002B3D60(c);
SET32(4, RW(17) + 1056);
if (RD(4) == RD(0)) { SET32(4, RW(17) + 1008); goto L_002D19FC; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 512);
SET64(31, 0x2d19f8); wr32(c, (RW(17) + 1064), RW(2)); JP_F_002B3F70(c);
SET32(4, RW(17) + 1008);
L_002D19FC:;
if (RD(4) == RD(0)) { SET32(4, RW(17) + 928); goto L_002D1A1C; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 480);
SET64(31, 0x2d1a18); wr32(c, (RW(17) + 1016), RW(2)); JP_F_002B4320(c);
SET32(4, RW(17) + 928);
L_002D1A1C:;
SET64(31, 0x2d1a24); SET32(5, RW(0) + -1); JP_F_002AA640(c);
{ int t = RD(17) == RD(0);  if (t) goto L_002D1A8C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(7, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -31712);
SET64(5, (s64)(s32)0x4e0000);
wr32(c, (RW(17) + 276), RW(2));
SET64(3, (s64)(s32)0x4e0000);
SET64(6, (s32)rd32(c, (RW(17) + 256)));
SET32(7, RW(7) + -31544);
SET32(5, RW(5) + -31640);
SET32(3, RW(3) + -31608);
SET32(2, RW(17) + 916);
wr32(c, (RW(6) + 16), RW(7));
wr32(c, (RW(17) + 432), RW(5));
wr32(c, (RW(17) + 760), RW(3));
SET64(3, (s32)rd32(c, (RW(17) + 256)));
SET32(2, RW(2) - RW(3));
wr32(c, (RW(3) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d1a80); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2d1a8c); SET64(5, RD(0) + RD(0)); JP_F_001F2050(c);
L_002D1A8C:;
if (RD(16) == RD(0)) { SET64(2, RD(16) << 48); goto L_002D1AC0; }
SET32(4, RW(17) + 1248);
{ int t = RD(4) == RD(0);  if (t) goto L_002D1ABC; }
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -3184);
wr32(c, (RW(17) + 1264), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2d1abc);  rt_call(c, t); }
L_002D1ABC:;
SET64(2, RD(16) << 48);
L_002D1AC0:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002D1AD8; }
SET64(31, 0x2d1ad4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002D1AD4:;
SET64(2, RD(17) + RD(0));
L_002D1AD8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

